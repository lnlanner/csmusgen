/***************************************************************************
 *   Copyright (C) 2010 by Luigi Negretti Lanner   *
 *   luigi.negrettilanner@gmail.com   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

#ifdef __MWERKS__
# define FL_DLL
#endif

#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Double_Window.H>
#include <FL/fl_ask.H>
#include <FL/Fl_File_Chooser.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Text_Buffer.H>
#include <FL/Fl_Text_Editor.H>

void runCs_cb(Fl_Widget*,void*);
void runAudioFile_cb(Fl_Widget*,void*);
void insert_header22050mo_cb(Fl_Widget*,void* v);
void insert_header22050ste_cb(Fl_Widget*,void* v);
void insert_header44100mo_cb(Fl_Widget*,void* v);
void insert_header44100ste_cb(Fl_Widget*,void* v);
void insert_header48000mo_cb(Fl_Widget*,void* v);
void insert_header48000ste_cb(Fl_Widget*,void* v);
void insert_conversions_cb(Fl_Widget*,void* v);
void insert_gen01_cb(Fl_Widget*,void* v);
void insert_gen02_cb(Fl_Widget*,void* v);
void insert_gen03_cb(Fl_Widget*,void* v);
void insert_gen04_cb(Fl_Widget*,void* v);
void insert_gen06_cb(Fl_Widget*,void* v);
void insert_gen07_cb(Fl_Widget*,void* v);
void insert_gen08_cb(Fl_Widget*,void* v);
void insert_gen09_cb(Fl_Widget*,void* v);
void insert_gen10_cb(Fl_Widget*,void* v);
void insert_gen11_cb(Fl_Widget*,void* v);
void insert_gen12_cb(Fl_Widget*,void* v);
void insert_gen13_cb(Fl_Widget*,void* v);
void insert_gen15_cb(Fl_Widget*,void* v);
void insert_gen17_cb(Fl_Widget*,void* v);
void insert_gen19_cb(Fl_Widget*,void* v);
void insert_gen20_cb(Fl_Widget*,void* v);
void insert_gen23_cb(Fl_Widget*,void* v);
void insert_gen25_cb(Fl_Widget*,void* v);
void insert_gen27_cb(Fl_Widget*,void* v);
void insert_gen28_cb(Fl_Widget*,void* v);
void insert_cstags_cb(Fl_Widget*,void* v);

int                changed = 0;
char               filename[256] = "";
char               title[256];
Fl_Text_Buffer     *textbuf = 0;

void save_cb();
void saveas_cb();
void find2_cb(Fl_Widget*, void*);
void replall_cb(Fl_Widget*, void*);
void replace2_cb(Fl_Widget*, void*);
void replcan_cb(Fl_Widget*, void*);

class EditorWindow : public Fl_Double_Window {
  public:
    EditorWindow(int w, int h, const char* t);
    ~EditorWindow();

    Fl_Window          *replace_dlg;
    Fl_Input           *replace_find;
    Fl_Input           *replace_with;
    Fl_Button          *replace_all;
    Fl_Return_Button   *replace_next;
    Fl_Button          *replace_cancel;

    Fl_Text_Editor     *editor;
    char               search[256];
};

EditorWindow::EditorWindow(int w, int h, const char* t) : Fl_Double_Window(w, h, t) {
  replace_dlg = new Fl_Window(300, 105, "Replace");
    replace_find = new Fl_Input(80, 10, 210, 25, "Find:");
    replace_find->align(FL_ALIGN_LEFT);

    replace_with = new Fl_Input(80, 40, 210, 25, "Replace:");
    replace_with->align(FL_ALIGN_LEFT);

    replace_all = new Fl_Button(10, 70, 90, 25, "Replace All");
    replace_all->callback((Fl_Callback *)replall_cb, this);

    replace_next = new Fl_Return_Button(105, 70, 120, 25, "Replace Next");
    replace_next->callback((Fl_Callback *)replace2_cb, this);

    replace_cancel = new Fl_Button(230, 70, 60, 25, "Cancel");
    replace_cancel->callback((Fl_Callback *)replcan_cb, this);
  replace_dlg->end();
  replace_dlg->set_non_modal();
  editor = 0;
  *search = (char)0;
}

EditorWindow::~EditorWindow() {
  delete replace_dlg;
}

/*CHECK SAVE*/
int check_save(void) {

  if (!changed) return 1;

  int r = fl_choice("The current file has not been saved.\n"
                    "Would you like to save it now?",
                    "Cancel", "Save", "Discard");

  if (r == 1) {
    save_cb(); // Save the file...
    return !changed;
    }

 return (r == 2) ? 1 : 0;
 if (r == 2) return !changed;
 
}
/*CHECK SAVE*/

int loading = 0;
void load_file(char *newfile, int ipos) {
  loading = 1;
  int insert = (ipos != -1);
  changed = insert;
  if (!insert) strcpy(filename, "");
  int r;
  if (!insert) r = textbuf->loadfile(newfile);
  else r = textbuf->insertfile(newfile, ipos);
  if (r)
    fl_alert("Error reading from file \'%s\':\n%s.", newfile, strerror(errno));
  else
    if (!insert) strcpy(filename, newfile);
  loading = 0;
  textbuf->call_modify_callbacks();
}


void save_file(char *newfile) {
  if (textbuf->savefile(newfile))
    fl_alert("Error writing to file \'%s\':\n%s.", newfile, strerror(errno));
  else
    strcpy(filename, newfile);
  changed = 0;
  textbuf->call_modify_callbacks();
}

void copy_cb(Fl_Widget*, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  Fl_Text_Editor::kf_copy(0, e->editor);
}

void cut_cb(Fl_Widget*, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  Fl_Text_Editor::kf_cut(0, e->editor);
}

void delete_cb(Fl_Widget*, void*) {
  textbuf->remove_selection();
}

void find_cb(Fl_Widget* w, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  const char *val;

  val = fl_input("Search String:", e->search);
  if (val != NULL) {
    // User entered a string - go find it!
    strcpy(e->search, val);
    find2_cb(w, v);
  }
}

void find2_cb(Fl_Widget* w, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  if (e->search[0] == '\0') {
    // Search string is blank; get a new one...
    find_cb(w, v);
    return;
  }

  int pos = e->editor->insert_position();
  int found = textbuf->search_forward(pos, e->search, &pos);
  if (found) {
    // Found a match; select and update the position...
    textbuf->select(pos, pos+strlen(e->search));
    e->editor->insert_position(pos+strlen(e->search));
    e->editor->show_insert_position();
  }
  else fl_alert("No occurrences of \'%s\' found!", e->search);
}

//////TITOLO FINESTRA EDITOR////////

void set_title(Fl_Window* w) {

  if (filename[0] == '\0') strcpy(title, "Untitled");
  else {
    char *slash;
    slash = strrchr(filename, '/');
#ifdef WIN32
    if (slash == NULL) slash = strrchr(filename, '\\');
#endif
    if (slash != NULL) strcpy(title, slash + 1);
    else strcpy(title, filename);
  }

  if (changed) strcat(title, " (modified)");
      
  w->label(title);
}
//////TITOLO FINESTRA EDITOR////////

void changed_cb(int, int nInserted, int nDeleted,int, const char*, void* v) {
  if ((nInserted || nDeleted) && !loading) changed = 1;
  EditorWindow *w = (EditorWindow *)v;
  set_title(w);
  if (loading) w->editor->show_insert_position();
}

void new_cb(Fl_Widget*, void*) {
  if (!check_save()) return;

  filename[0] = '\0';
  textbuf->select(0, textbuf->length());
  textbuf->remove_selection();
  changed = 0;
  textbuf->call_modify_callbacks();
}

//LNL
void open()
{
//  if (!check_save()) return;

    if (dataScore == 0)
    {
      char *newfile = fl_file_chooser("Open File?", "*.sco", scoPath->value());
      if (newfile != NULL) load_file(newfile, -1);
    }
    if (dataScore == 1)
    {
      char *newfile = fl_file_chooser("Open File?", "*.txt", outData->value());
      //{ title = outData->value(); }
      if (newfile != NULL) load_file(newfile, -1);
    }
    if (dataScore == 2)
    {
      char *newfile = fl_file_chooser("Open File?", "*orc|*csd", orcPath->value());
      //{ title = orcPath->value(); }
      if (newfile != NULL) load_file(newfile, -1);
    }
}

void open_cb(Fl_Widget*, void*)
{
    open();
}

void insert_cb(Fl_Widget*, void *v) {

  if (dataScore == 0) {
  char *newfile = fl_file_chooser("Insert File?", "*.sco", filename);
  EditorWindow *w = (EditorWindow *)v;
  if (newfile != NULL) load_file(newfile, w->editor->insert_position());
  }
  
  else if (dataScore == 1) {
  char *newfile = fl_file_chooser("Insert File?", "*.txt", filename);
  EditorWindow *w = (EditorWindow *)v;
  if (newfile != NULL) load_file(newfile, w->editor->insert_position());
  }
  else if (dataScore == 2) {
  char *newfile = fl_file_chooser("Insert File?", "*.orc", filename);
  EditorWindow *w = (EditorWindow *)v;
  if (newfile != NULL) load_file(newfile, w->editor->insert_position());
  }
}

void paste_cb(Fl_Widget*, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  Fl_Text_Editor::kf_paste(0, e->editor);
}

int num_windows = 0;

void close_cb(Fl_Widget*, void* v) {

  Fl_Window* w = (Fl_Window*)v;
  if (changed && !check_save())
//  if (num_windows == 1 && !check_save())
 {
  return;
  }
  textbuf->remove_modify_callback(changed_cb, w);
  delete w;
  num_windows--;
//  if (!num_windows) exit(0);
}


void replace_cb(Fl_Widget*, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  e->replace_dlg->show();
}

void replace2_cb(Fl_Widget*, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  const char *find = e->replace_find->value();
  const char *replace = e->replace_with->value();

  if (find[0] == '\0') {
    // Search string is blank; get a new one...
    e->replace_dlg->show();
    return;
  }

  e->replace_dlg->hide();

  int pos = e->editor->insert_position();
  int found = textbuf->search_forward(pos, find, &pos);

  if (found) {
    // Found a match; update the position and replace text...
    textbuf->select(pos, pos+strlen(find));
    textbuf->remove_selection();
    textbuf->insert(pos, replace);
    textbuf->select(pos, pos+strlen(replace));
    e->editor->insert_position(pos+strlen(replace));
    e->editor->show_insert_position();
  }
  else fl_alert("No occurrences of \'%s\' found!", find);
}


void replall_cb(Fl_Widget*, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  const char *find = e->replace_find->value();
  const char *replace = e->replace_with->value();

  find = e->replace_find->value();
  if (find[0] == '\0') {
    // Search string is blank; get a new one...
    e->replace_dlg->show();
    return;
  }

  e->replace_dlg->hide();

  e->editor->insert_position(0);
  int times = 0;

  // Loop through the whole string
  for (int found = 1; found;) {
    int pos = e->editor->insert_position();
    found = textbuf->search_forward(pos, find, &pos);

    if (found) {
      // Found a match; update the position and replace text...
      textbuf->select(pos, pos+strlen(find));
      textbuf->remove_selection();
      textbuf->insert(pos, replace);
      e->editor->insert_position(pos+strlen(replace));
      e->editor->show_insert_position();
      times++;
    }
  }

  if (times) fl_message("Replaced %d occurrences.", times);
  else fl_alert("No occurrences of \'%s\' found!", find);
}

void replcan_cb(Fl_Widget*, void* v) {
  EditorWindow* e = (EditorWindow*)v;
  e->replace_dlg->hide();
}

void save_cb() {
  if (filename[0] == '\0') {
    // No filename - get one!
    saveas_cb();
    return;
  }
  else save_file(filename);
}

void saveas_cb() {
  char *newfile;
  if ( dataScore == 0 )
  {
  newfile = fl_file_chooser("Save File As?", "*.sco", filename); 
  if (newfile != NULL) save_file(newfile);
  }
  else if ( dataScore == 1 )
  {
  newfile = fl_file_chooser("Save File As?", "*.txt", filename); 
  if (newfile != NULL) save_file(newfile);
  }
  else if ( dataScore == 2 )
  {
  newfile = fl_file_chooser("Save File As?", "*.orc", filename); 
  if (newfile != NULL) save_file(newfile);
  }
}


Fl_Window* new_view();

void view_cb(Fl_Widget*, void*) {
  Fl_Window* w = new_view();
  w->show();
}

Fl_Menu_Item menuitems[] = {
  { "&File",              0, 0, 0, FL_SUBMENU },
    { "&Insert File...",  FL_CTRL + 'i', (Fl_Callback *)insert_cb, 0, FL_MENU_DIVIDER },
    { "&Save File",       FL_CTRL + 's', (Fl_Callback *)save_cb },
    { "Save File &As...", FL_CTRL + FL_SHIFT + 's', (Fl_Callback *)saveas_cb, 0, FL_MENU_DIVIDER },
    { "Run Csound", FL_ALT + 'x', (Fl_Callback *)runCs_cb, 0, 0 },
    { "Play Wav file", FL_ALT + 'w', (Fl_Callback *)runAudioFile_cb, 0, 0 },
    { "&Close", FL_CTRL + 'q', (Fl_Callback *)close_cb, 0, FL_MENU_DIVIDER },
    { 0 },

  { "&Edit", 0, 0, 0, FL_SUBMENU },
    { "Cu&t",        FL_CTRL + 'x', (Fl_Callback *)cut_cb },
    { "&Copy",       FL_CTRL + 'c', (Fl_Callback *)copy_cb },
    { "&Paste",      FL_CTRL + 'v', (Fl_Callback *)paste_cb },
    { "&Delete",     0, (Fl_Callback *)delete_cb },
    { 0 },

  { "&Search", 0, 0, 0, FL_SUBMENU },
    { "&Find...",       FL_CTRL + 'f', (Fl_Callback *)find_cb },
    { "F&ind Again",    FL_CTRL + 'g', find2_cb },
    { "&Replace...",    FL_CTRL + 'r', replace_cb },
    { "Re&place Again", FL_CTRL + 't', replace2_cb },
    { 0 },

    {"&Csound",FL_ALT + 'c',0,0,FL_SUBMENU},
    {"Header",0,0,0,FL_SUBMENU},
    {"22052 HZ mono",0,insert_header22050mo_cb},
    {"22052 HZ stereo",0,insert_header22050ste_cb},
    {"44100 HZ mono",0,insert_header44100mo_cb},
    {"44100 HZ stereo",0,insert_header44100ste_cb},
    {"48000 HZ mono",0,insert_header48000mo_cb},
    {"48000 HZ stereo",0,insert_header48000ste_cb},
    {0},
    {"conversion",0,insert_conversions_cb},
    {"Csd tags",0,insert_cstags_cb},
    {"Ftables:",0,0,0,FL_SUBMENU},
    {"GEN 01",0,insert_gen01_cb},
    {"GEN 02",0,insert_gen02_cb},
    {"GEN 03",0,insert_gen03_cb},
    {"GEN 04",0,insert_gen04_cb},
    {"GEN 06",0,insert_gen06_cb},
    {"GEN 07",0,insert_gen07_cb},
    {"GEN 08",0,insert_gen08_cb},
    {"GEN 09",0,insert_gen09_cb},
    {"GEN 10",0,insert_gen10_cb},
    {"GEN 11",0,insert_gen11_cb},
    {"GEN 12",0,insert_gen12_cb},
    {"GEN 13",0,insert_gen13_cb},
    {"GEN 15",0,insert_gen15_cb},
    {"GEN 17",0,insert_gen17_cb},
    {"GEN 19",0,insert_gen19_cb},
    {"GEN 20",0,insert_gen20_cb},
    {"GEN 23",0,insert_gen23_cb},
    {"GEN 25",0,insert_gen25_cb},
    {"GEN 27",0,insert_gen27_cb},
    {"GEN 28",0,insert_gen28_cb},
    {0},
    {0},
  { 0 }
};

////////////////////////////////////////////////

Fl_Window* new_view() {
    
    EditorWindow* w = new EditorWindow(700, 400, title);
    w->begin();
    Fl_Menu_Bar* m = new Fl_Menu_Bar(0, 0, 700, 30);
    
    m->copy(menuitems, w);
    
    w->editor = new Fl_Text_Editor(0, 30, 700, 370);
    w->editor->buffer(textbuf);
    w->editor->textfont(FL_COURIER);
    w->resizable(w->editor);
    //w->set_modal();//LNL
    w->end();
    w->callback((Fl_Callback *)close_cb, w);

    textbuf->add_modify_callback(changed_cb, w);
    textbuf->call_modify_callbacks();
    num_windows++;
    return w;
}

void editor_win()
{
  textbuf = new Fl_Text_Buffer;
  Fl_Window* w_editor = new_view();
  w_editor = new_view();
  w_editor->show();
}

//
// End of "$Id: editor.cxx,v 1.2.2.3.2.18 2004/04/11 04:39:01 easysw Exp $".
//MODIFIED BY LUIGI NEGRETTI LANNER UNDER THE TERMS OF THE GNU GENERAL PUBLIC LICENSE AT 9 JUNE 05

