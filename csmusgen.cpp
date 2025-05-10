/***************************************************************************
 *   Copyright (C) 2010 by Luigi Negretti Lanner                           *
 *   luigi.negrettilanner@gmail.com                                        *
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


#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cstdio>
#include <time.h>
#include <cctype>



#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Help_View.H>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Single_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Menu_Item.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Menu_Button.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_File_Chooser.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_Preferences.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Text_Buffer.H>
#include <FL/Fl_Value_Output.H>
#include <FL/Fl_Counter.H>

#include "classes.h"
#include "controls.h"
#include "formulaFunc.h"
#include "counterpointFunc.h"
#include "counterpointFunc_instr.h"
#include "counterpointFunc_dur.h"
#include "counterpointFunc_db.h"
#include "counterpointFunc_pitch.h"
#include "counterpointFunc_act.h"

#include "counterpointFunc_p6.h"
#include "counterpointFunc_p7.h"
#include "counterpointFunc_p8.h"
#include "counterpointFunc_p9.h"
#include "counterpointFunc_p10.h"
#include "counterpointFunc_p11.h"
#include "counterpointFunc_p12.h"
#include "counterpointFunc_p13.h"
#include "counterpointFunc_p14.h"
#include "counterpointFunc_p15.h"

#include "counterpointFunc_p6b.h"
#include "counterpointFunc_p7b.h"
#include "counterpointFunc_p8b.h"
#include "counterpointFunc_p9b.h"
#include "counterpointFunc_p10b.h"
#include "counterpointFunc_p11b.h"
#include "counterpointFunc_p12b.h"
#include "counterpointFunc_p13b.h"
#include "counterpointFunc_p14b.h"
#include "counterpointFunc_p15b.h"

#include "editor.h"
#include "define.h"
#include "winFunc.h"
#include "preferences.h"

#include "addParam.h"
#include "addParam2.h"
#include "preferences2.h"

#include "inOut.h"
#include "menu.h"

#include "muses_string.h"

void exitPathWin_cb(Fl_Widget*,void*);
void exitPathWin();
void actPitch_cb(Fl_Widget*,void*);
void actDur_cb(Fl_Widget*,void*);
void actInstr_cb(Fl_Widget*,void*);
void actDb_cb(Fl_Widget*,void*);

using namespace std;


void winPath_callback(Fl_Widget*, void*) {
  writePrefsStart();
  writePrefsHelp();
  winPath->hide();//exit(0);
}

void makeWinPath()
{
int label_size = 10;
int text_size = 11;

  winPath = new Fl_Window(120,300,W2,300,"csmusgen PATH SETTINGS");
  winPath->callback(winPath_callback);
  winPath->resizable(winPath);
  winPath->color(COLOR);
    
  orcPath = new Fl_Input(CTRL_L+100,15,W2-200,CTRL_H+10,"Orc/Csd @>>");
  orcPath->textsize(12);
  orcPath->textfont(1);
  orcPath->labelcolor(TXT_COLOR2);
  orcPath->box(BOX_TYPE2);
  orcPath->box(BOX_TYPE2);
  orcPath->labelsize(12);

  btloadOrc = new Fl_Button(830,15,60,CTRL_H+10,"Load...");
  btloadOrc->box(BOX_TYPE2);
  btloadOrc->callback(btloadOrc_cb);
  btloadOrc->color(COLOR2);
  btloadOrc->tooltip("Load score file");
  btloadOrc->labelcolor(BT_TXT_COLOR);
  btloadOrc->labeltype(BT_LABEL_TYPE);

  scoPath = new Fl_Input(CTRL_L+100,50,W2-200,CTRL_H+10,"Score @>>");
  scoPath->textsize(12);
  scoPath->textfont(1);
  scoPath->labelcolor(TXT_COLOR2);
  scoPath->box(BOX_TYPE2);
  scoPath->box(BOX_TYPE2);
  scoPath->labelsize(12);
  
  btload = new Fl_Button(830,50,CTRL_W+10,CTRL_H+10,"Load...");
  btload->box(BOX_TYPE2);
  btload->callback(btload_cb);
  btload->color(COLOR2);
  btload->tooltip("Load score file");
  btload->labelcolor(BT_TXT_COLOR);
  btload->labeltype(BT_LABEL_TYPE);
  
  outData = new Fl_Input(CTRL_L+100,85,W2-200,CTRL_H+10,"Text Data @>>");
  outData->textsize(12);
  outData->textfont(1);
  outData->labelcolor(TXT_COLOR2);
  outData->box(BOX_TYPE2);
  outData->labelsize(12);
  
  load_outData = new Fl_Button(830,85,CTRL_W+10,CTRL_H+10,"Load...");
  load_outData->box(BOX_TYPE2);
  load_outData->callback(btloadData_cb);
  load_outData->color(COLOR2);
  load_outData->tooltip("Load an output data file");
  load_outData->labelcolor(BT_TXT_COLOR);
  load_outData->labeltype(BT_LABEL_TYPE);

  dataPath = new Fl_Input(CTRL_L+100,120,CTRL_W*4,20,"Data group @>>");
  dataPath->textfont(1);
  dataPath->labelcolor(TXT_COLOR2);
  dataPath->box(BOX_TYPE2);
  dataPath->textcolor(FL_RED);
  dataPath->labelsize(12);
      
  helpPath = new Fl_Input(CTRL_L+100,150,700,CTRL_H+10,"help file@>>");
  helpPath->labelcolor(TXT_COLOR2);
  helpPath->box(BOX_TYPE2);
  helpPath->textsize(12);
  helpPath->tooltip("Enter here the browser name and the path for the help file. E.g. firefox /home/user/csmusgen/html/index.html"); 
    
  bt_loadHelp = new Fl_Button(830,150,CTRL_W+10,CTRL_H+10,"Load...");
  bt_loadHelp->callback(btloadHelp_cb);
  bt_loadHelp->box(BOX_TYPE2);
  bt_loadHelp->color(COLOR2);
  bt_loadHelp->tooltip("Load html help file");
  bt_loadHelp->labelcolor(BT_TXT_COLOR);
  bt_loadHelp->labeltype(BT_LABEL_TYPE);
  
  serieName = new Fl_Input(CTRL_L+100,190,CTRL_W*4,CTRL_H+10,"Setting label @>>");
  serieName->textfont(1);
  serieName->box(BOX_TYPE2);
  serieName->textcolor(FL_BLUE);
  serieName->labelcolor(FL_YELLOW);
  serieName->labelfont(5);
  serieName->labelsize(12);
  serieName->textsize(12);
  
  out_File = new Fl_Choice(410,190,70,CTRL_H+10,"Cur. Setting");
  out_File->menu(setting);
  out_File->textfont(1);
  out_File->labelcolor(FL_YELLOW);
  out_File->labelfont(5);
  out_File->labelsize(12);
  out_File->textsize(12);
  out_File->callback(select_setting_cb);
  out_File->box(BOX_TYPE2);
  
  txt_seriePath = new Fl_Input(540,190,120,CTRL_H+10,"Save as");
  txt_seriePath->textcolor(FL_BLUE);
  txt_seriePath->textfont(1);
  txt_seriePath->box(BOX_TYPE2);
  txt_seriePath->labelcolor(FL_YELLOW);
  txt_seriePath->labelfont(5);
  txt_seriePath->labelsize(12);
  txt_seriePath->textsize(12);
  
  loadSerie = new Fl_Button(670,190,80,CTRL_H+10,"<<(Re)Load");
  loadSerie->callback(readPrefs_cb);
  loadSerie->box(BOX_TYPE2);
  loadSerie->color(COLOR2);
  loadSerie->labelcolor(FL_RED);
  loadSerie->labeltype(BT_LABEL_TYPE);
  loadSerie->labelsize(11);

  bt_exitPathWin = new Fl_Button(760,190,CTRL_W+10,CTRL_H+10,"Save");
  bt_exitPathWin->color(COLOR2);
  //bt_exitPathWin->box(BOX_TYPE);
  bt_exitPathWin->labelsize(16);
  bt_exitPathWin->labeltype(BT_LABEL_TYPE);
  bt_exitPathWin->labelcolor(FL_GREEN);
  bt_exitPathWin->callback(writePrefs_cb);
  
  bt_writePrefs2 = new Fl_Button(830,190,CTRL_W+10,CTRL_H+10,"Esc");
  bt_writePrefs2->color(COLOR2);
  bt_writePrefs2->value(0);
  bt_writePrefs2->labelcolor(FL_RED);
  bt_writePrefs2->labelsize(16);
  bt_writePrefs2->labeltype(BT_LABEL_TYPE);
  bt_writePrefs2->callback(exitPathWin_cb);


  csLine = new Fl_Input(CTRL_L+50,230,820,30,"Csound @>>");
  csLine->box(BOX_TYPE2);
  csLine->labelcolor(TXT_COLOR2);
  csLine->color(FL_BLACK);
  csLine->textcolor(FL_WHITE);
  csLine->textsize(12);
  //csLine->textfont(1);
  csLine->cursor_color(TXT_COLOR2);
  csLine->labelsize(12);
  csLine->selection_color(FL_DARK_CYAN);
  
  wavLine = new Fl_Input(CTRL_L+50,265,820,30,"Audio @>>");
  wavLine->box(BOX_TYPE2);
  wavLine->labelcolor(TXT_COLOR2);
  wavLine->textsize(12);
  //wavLine->textfont(1); 
  wavLine->color(FL_BLACK);
  wavLine->textcolor(FL_WHITE);
  wavLine->cursor_color(TXT_COLOR2);
  wavLine->labelsize(12);
  wavLine->selection_color(FL_DARK_CYAN);
  
  readPrefsHelp();
  readPrefsStart();
  readPrefs();

  if (LOADPATH == 0) {
  readPrefsSerie();
  LOADPATH = 1;  readPrefsStart();

  }
  def_act();
  
  winPath->end();
  winPath->show();
}

void exitPathWin()
{
  writePrefsStart();
  writePrefsHelp();
  winPath->hide();
}

void exitPathWin_cb(Fl_Widget*,void*)
{
    exitPathWin();
}


void winPath_cb(Fl_Widget*,void*)
{
    winPath->redraw();
    makeWinPath();
}

////////////////HELP WINDOW/////////////////////
Fl_Double_Window* make_help_window();
Fl_Menu_Bar *mBarHelp;
Fl_Help_View *helpV;

void fontsInc_cb(Fl_Widget*,void*)
{
    helpV->textsize(helpV->textsize()+1);
}

void fontsDec_cb(Fl_Widget*,void*)
{
    helpV->textsize(helpV->textsize()-1);
}

void fontsDef_cb(Fl_Widget*,void*)
{
    helpV->textsize(12);
}

Fl_Window *startWin;

void startWin_callback(Fl_Widget*,void*)
{
    write_chk_start();
    delete startWin;
}

void makeStartWin()
{
    startWin = new Fl_Window(200,240,400,240,"csmusgen start");
    startWin->set_modal();
    startWin->color(FL_WHITE);
    startWin->callback(startWin_callback);    
    Fl_Button *btCloseStartWin = new Fl_Button(480,0,20,20,"X");
    btCloseStartWin->box(FL_NO_BOX);
    btCloseStartWin->labelsize(11);
    btCloseStartWin->labeltype(BT_LABEL_TYPE);
    btCloseStartWin->callback(startWin_callback);
    btCloseStartWin->labelcolor(FL_RED);
            
    Fl_Multiline_Output *out1 = new Fl_Multiline_Output(5,25,390,150);
    out1->box(FL_BORDER_BOX);
    out1->color(FL_WHITE);
    out1->labelcolor(FL_RED);
    out1->label("CSMUSGEN - VERSION 0.1.3.1");
    out1->align(FL_ALIGN_TOP_LEFT);
    out1->labelfont(FL_BOLD);
    out1->labelsize(22);
    out1->textfont(1);
    out1->textsize(14);
    out1->value("\n COPYRIGHT 2024 - Luigi Negretti Lanner.\n csmusgen comes with ABSOLUTELY\n NO WARRANTY. This is free software, and\n you are welcome to redistribute it\n under certain conditions. For more\n details consult the GPL License included\n with the program sources.");

    chk_show_startwin = new Fl_Round_Button(5,200,20,20,"Show this window at the start");
    chk_show_startwin->value(1); 
    chk_show_startwin->labelcolor(FL_DARK_BLUE);

    startWin->end();
    startWin->show();
}

void makestartWin_cb(Fl_Widget*,void*)
{
    makeStartWin();
}

Fl_Double_Window* make_help_window() {
  Fl_Double_Window* w;
    { hlpWin = new Fl_Double_Window(70, 100, 750,520,"csmusgen Handbook");
    w = hlpWin;
    helpV = new Fl_Help_View(0, 0, 750, 480);
    
    Fl_Button *bt_fontsInc = new Fl_Button(10,485,30,30,"A");
    bt_fontsInc->callback(fontsInc_cb);
    bt_fontsInc->labelsize(22);
    bt_fontsInc->labeltype(FL_EMBOSSED_LABEL);
    
    Fl_Button *bt_fontsDec = new Fl_Button(45,485,30,30,"A");
    bt_fontsDec->callback(fontsDec_cb);
    bt_fontsDec->labelsize(14);
    bt_fontsDec->labeltype(FL_EMBOSSED_LABEL);
    
    Fl_Button *bt_fontsDef = new Fl_Button(80,485,30,30,"DEF");
    bt_fontsDef->callback(fontsDef_cb);
    bt_fontsDef->labelsize(11);
    bt_fontsDef->labeltype(FL_EMBOSSED_LABEL);
    
    hlpWin->end();
    helpV->load(helpPath->value());
    helpV->textfont(0);

  }
  w->end();
  w->resizable(w);
  w->show();
  
}

void help_cb(Fl_Widget*, void*)
{
//make_help_window();
system(helpPath->value());
}

////////////////////HELP WINDOW END/////////////////////////
void actGen_cb(Fl_Widget*,void*);

void winIncDecsClose_cb(Fl_Widget*,void*)
{
    delete win_incDecs;
}

void makeWin_IncDecS()
{
    win_incDecs = new Fl_Window(100+W/2-110,50+H-300,220,270,"Arithmetic functions");
    win_incDecs->color(COLOR);
    
    incDecFrame = new Fl_Box(25,20,150,100,"Inc - Dec series");
    incDecFrame->box(FL_EMBOSSED_BOX);
    incDecFrame->color(COLOR);
    incDecFrame->labelcolor(FL_WHITE);
    incDecFrame->align(FL_ALIGN_TOP_LEFT);
        
    inp_incDecs = new Fl_Value_Input(30,40,50,25,"Value");
    inp_incDecs->box(FL_BORDER_BOX);
    inp_incDecs->align(FL_ALIGN_TOP);
    inp_incDecs->labelcolor(FL_WHITE);
    
    chOperator = new Fl_Choice(90,40,80,25,"Operator");
    chOperator->box(FL_BORDER_BOX);
    chOperator->menu(operatorMenu);
    chOperator->align(FL_ALIGN_TOP);
    chOperator->labelcolor(FL_WHITE);
    
    but_incDecs = new Fl_Menu_Button(30,70,140,25,"Choice series");
    if (funcMenuItems == 0){
    but_incDecs->menu(incDecSmenu);
    }
    if (funcMenuItems == 1){
    but_incDecs->menu(incDecSmenuParams);
    }
    if (funcMenuItems == 2){
    but_incDecs->menu(incDecSmenuParamsb);
    }
    but_incDecs->box(FL_BORDER_BOX);
    but_incDecs->color(COLOR2);
    
    Fl_Button *bt_close = new Fl_Button(180,120,30,30,"X");
    bt_close->callback(winIncDecsClose_cb);
    bt_close->box(BOX_TYPE);
    bt_close->labelcolor(FL_RED);
    bt_close->labeltype(BT_LABEL_TYPE);
    bt_close->tooltip("Close this window");
    
    setValue = new Fl_Box(25,150,150,100,"Set series value");
    setValue->box(FL_EMBOSSED_BOX);
    setValue->color(COLOR);
    setValue->labelcolor(FL_WHITE);
    setValue->align(FL_ALIGN_TOP_LEFT);
    
    inp_setValue = new Fl_Value_Input(30,170,50,25,"Value");
    inp_setValue->box(FL_BORDER_BOX);
    inp_setValue->align(FL_ALIGN_TOP);
    inp_setValue->labelcolor(FL_WHITE);
    
    bt_SetValSeries = new Fl_Menu_Button(30,200,140,25,"Choice series");
    bt_SetValSeries->box(FL_BORDER_BOX);
    if (funcMenuItems == 0){
    bt_SetValSeries->menu(setSvalMenu);
    }
    if (funcMenuItems == 1){
    bt_SetValSeries->menu(setSvalMenuParams);
    }
    if (funcMenuItems == 2){
    bt_SetValSeries->menu(setSvalMenuParamsb);
    }
    bt_SetValSeries->color(COLOR2);
    
    win_incDecs->resizable(win_incDecs);
    win_incDecs->set_modal();
    win_incDecs->end();
    win_incDecs->show();
}

void makeWin_IncDecS_cb(Fl_Widget*,void*)
{
    funcMenuItems = 0;
    makeWin_IncDecS();
}

void clsWinClose_cb(Fl_Widget*,void*)
{
    delete cls_win;
}

void colors_win()
{
cls_win = new Fl_Single_Window(W/2-150,H/2-25,330,50,"Choice color");
cls_win->color(COLOR);

colorCounter = new Fl_Value_Input(50,5,50,30);
colorCounter->callback(countColor_cb);
colorCounter->box(BOX_TYPE2);
colorCounter->value(COLOR);

bt_colorDec = new Fl_Button(20,5,25,30,"@<");
bt_colorDec->callback(colorDec_cb);

bt_colorInc = new Fl_Button(105,5,25,30,"@>");
bt_colorInc->callback(colorInc_cb);

colorBox = new Fl_Box(140,5,40,30);
colorBox->color(COLOR);
colorBox->box(FL_BORDER_BOX);

bt_doneColor = new Fl_Button(190,5,40,30,"Done");
bt_doneColor->callback(setColor_cb);
bt_doneColor->labelsize(11);
bt_doneColor->box(BOX_TYPE2);

bt_resetColor = new Fl_Button(235,5,40,30,"Default");
bt_resetColor->callback(resetColor_cb);
bt_resetColor->labelsize(11);
bt_resetColor->box(BOX_TYPE2);

Fl_Button *bt_closeClsWin = new Fl_Button(285,5,30,30,"X");
bt_closeClsWin->box(BOX_TYPE);
bt_closeClsWin->labelcolor(FL_RED);
bt_closeClsWin->labeltype(BT_LABEL_TYPE);
bt_closeClsWin->tooltip("Close this window");
bt_closeClsWin->callback(clsWinClose_cb);
 
cls_win->set_modal();
cls_win->end();
cls_win->show();
}

void colors_win_cb(Fl_Widget*,void*)
{
    colors_win();
}

void make_form()
{
  readPrefsColor();
  window = new Fl_Window(100,50,W,H,"csmusgen - Main window");
  window->color(COLOR);
  window->resizable(window);
  window->callback(window_callback);
  window->iconlabel("CSeriesIco.png");
  
  menuBar = new Fl_Menu_Bar(0,0,W,20);
  menuBar->menu(mBar);
  menuBar->box(BOX_TYPE2);
  menuBar->color(COLOR);
  menuBar->textcolor(TXT_COLOR2);
  menuBar->textsize(12);

  seriesFrame = new Fl_Box(CTRL_L-2,CTRL_T-5+ADD_TOP,CTRL_W*12+5,CTRL_H*10-10);
  seriesFrame->box(FL_ENGRAVED_BOX);
  seriesFrame->align(FL_ALIGN_TOP);
  seriesFrame->color(COLOR3);
  seriesFrame->labelcolor(CTRL_LABEL_COLOR);

  pch_1 = new Fl_Value_Input(CTRL_L,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_1->textsize(TXT_SIZE);
  pch_1->box(BOX_TYPE3);
  pch_1->align(FL_ALIGN_TOP_LEFT);
  pch_1->color(COLOR3);
  pch_1->textcolor(TXT_COLOR);
  pch_1->selection_color(COLOR_SEL);
  pch_1->labelcolor(CTRL_LABEL_COLOR);
  pch_1->tooltip("pitch serie");
  pch_1->cursor_color(TXT_COLOR2);
  pch_1->textfont(IN_TEXT_FONTS);

  pch_2 = new Fl_Value_Input(CTRL_L+CTRL_W,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_2->box(BOX_TYPE3);
  pch_2->textsize(TXT_SIZE);
  pch_2->color(COLOR3);
  pch_2->textcolor(TXT_COLOR);
  pch_2->selection_color(COLOR_SEL);
  pch_2->tooltip("pitch serie");
  pch_2->cursor_color(TXT_COLOR2);
  pch_2->textfont(IN_TEXT_FONTS);

  pch_3 = new Fl_Value_Input(CTRL_L+CTRL_W*2,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_3->box(BOX_TYPE3);
  pch_3->textsize(TXT_SIZE);
  pch_3->color(COLOR3);
  pch_3->textcolor(TXT_COLOR);
  pch_3->selection_color(COLOR_SEL);
  pch_3->tooltip("pitch serie");
  pch_3->cursor_color(TXT_COLOR2);
  pch_3->textfont(IN_TEXT_FONTS);

  pch_4 = new Fl_Value_Input(CTRL_L+CTRL_W*3,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_4->box(BOX_TYPE3);
  pch_4->textsize(TXT_SIZE);
  pch_4->color(COLOR3);
  pch_4->textcolor(TXT_COLOR);
  pch_4->selection_color(COLOR_SEL);
  pch_4->tooltip("pitch serie");
  pch_4->cursor_color(TXT_COLOR2);
  pch_4->textfont(IN_TEXT_FONTS);

  pch_5 = new Fl_Value_Input(CTRL_L+CTRL_W*4,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_5->box(BOX_TYPE3);
  pch_5->textsize(TXT_SIZE);
  pch_5->color(COLOR3);
  pch_5->textcolor(TXT_COLOR);
  pch_5->selection_color(COLOR_SEL);
  pch_5->tooltip("pitch serie");
  pch_5->cursor_color(TXT_COLOR2);
  pch_5->textfont(IN_TEXT_FONTS);

  pch_6 = new Fl_Value_Input(CTRL_L+CTRL_W*5,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_6->box(BOX_TYPE3);
  pch_6->textsize(TXT_SIZE);
  pch_6->color(COLOR3);
  pch_6->textcolor(TXT_COLOR);
  pch_6->selection_color(COLOR_SEL);
  pch_6->tooltip("pitch serie");
  pch_6->cursor_color(TXT_COLOR2);
  pch_6->textfont(IN_TEXT_FONTS);

  pch_7 = new Fl_Value_Input(CTRL_L+CTRL_W*6,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_7->box(BOX_TYPE3);
  pch_7->textsize(TXT_SIZE);
  pch_7->color(COLOR3);
  pch_7->textcolor(TXT_COLOR);
  pch_7->selection_color(COLOR_SEL);
  pch_7->tooltip("pitch serie");
  pch_7->cursor_color(TXT_COLOR2);
  pch_7->textfont(IN_TEXT_FONTS);

  pch_8 = new Fl_Value_Input(CTRL_L+CTRL_W*7,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_8->box(BOX_TYPE3);
  pch_8->textsize(TXT_SIZE);
  pch_8->color(COLOR3);
  pch_8->textcolor(TXT_COLOR);
  pch_8->selection_color(COLOR_SEL);
  pch_8->tooltip("pitch serie");
  pch_8->cursor_color(TXT_COLOR2);
  pch_8->textfont(IN_TEXT_FONTS);

  pch_9 = new Fl_Value_Input(CTRL_L+CTRL_W*8,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_9->box(BOX_TYPE3);
  pch_9->textsize(TXT_SIZE);
  pch_9->color(COLOR3);
  pch_9->textcolor(TXT_COLOR);
  pch_9->selection_color(COLOR_SEL);
  pch_9->tooltip("pitch serie");
  pch_9->cursor_color(TXT_COLOR2);
  pch_9->textfont(IN_TEXT_FONTS);

  pch_10 = new Fl_Value_Input(CTRL_L+CTRL_W*9,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_10->box(BOX_TYPE3);
  pch_10->textsize(TXT_SIZE);
  pch_10->color(COLOR3);
  pch_10->textcolor(TXT_COLOR);
  pch_10->selection_color(COLOR_SEL);
  pch_10->tooltip("pitch serie");
  pch_10->cursor_color(TXT_COLOR2);
  pch_10->textfont(IN_TEXT_FONTS);

  pch_11 = new Fl_Value_Input(CTRL_L+CTRL_W*10,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_11->box(BOX_TYPE3);
  pch_11->textsize(TXT_SIZE);
  pch_11->color(COLOR3);
  pch_11->textcolor(TXT_COLOR);
  pch_11->selection_color(COLOR_SEL);
  pch_11->tooltip("pitch serie");
  pch_11->cursor_color(TXT_COLOR2);
  pch_11->textfont(IN_TEXT_FONTS);

  pch_12 = new Fl_Value_Input(CTRL_L+CTRL_W*11,CTRL_T+ADD_TOP,CTRL_W,CTRL_H);
  pch_12->box(BOX_TYPE3);
  pch_12->textsize(TXT_SIZE);
  pch_12->color(COLOR3);
  pch_12->textcolor(TXT_COLOR);
  pch_12->selection_color(COLOR_SEL);
  pch_12->tooltip("pitch serie");
  pch_12->cursor_color(TXT_COLOR2);
  pch_12->textfont(IN_TEXT_FONTS);

  counterpointPitch = new Fl_Choice(CTRL_L-90+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP,CTRL_W,CTRL_H,"Counterp.");
  counterpointPitch->menu(ctpPitch);
  counterpointPitch->color(COLOR2);
  counterpointPitch->box(BOX_TYPE2);
  counterpointPitch->textcolor(FL_DARK_BLUE);
  counterpointPitch->labelsize(11);
  counterpointPitch->labelcolor(TXT_COLOR2);
  counterpointPitch->align(FL_ALIGN_TOP_LEFT);
  
  outSeriePitch = new Fl_Light_Button(CTRL_L-20+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP,HB,CTRL_H,"M");
  outSeriePitch->box(FL_PLASTIC_UP_BOX);
  outSeriePitch->value(1);
  outSeriePitch->labelsize(11);
  outSeriePitch->selection_color(FL_GREEN);
  outSeriePitch->labelcolor(FL_RED);
  outSeriePitch->tooltip(MEMO);
/////////////////////

  dur_1 = new Fl_Value_Input(CTRL_L,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_1->box(BOX_TYPE3);
  dur_1->align(FL_ALIGN_TOP_LEFT);
  dur_1->textsize(TXT_SIZE);
  dur_1->color(COLOR3);
  dur_1->textcolor(TXT_COLOR);
  dur_1->selection_color(COLOR_SEL);
  dur_1->labelcolor(CTRL_LABEL_COLOR);
  dur_1->tooltip("dur serie");
  dur_1->cursor_color(TXT_COLOR2);
  dur_1->callback(defact_no_zero_cb);
  dur_1->textfont(IN_TEXT_FONTS);

  dur_2 = new Fl_Value_Input(CTRL_L+CTRL_W,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_2->box(BOX_TYPE3);
  dur_2->textsize(TXT_SIZE);
  dur_2->color(COLOR3);
  dur_2->textcolor(TXT_COLOR);
  dur_2->selection_color(COLOR_SEL);
  dur_2->tooltip("dur serie");
  dur_2->cursor_color(TXT_COLOR2);
  dur_2->callback(defact_no_zero_cb);
  dur_2->textfont(IN_TEXT_FONTS);

  dur_3 = new Fl_Value_Input(CTRL_L+CTRL_W*2,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_3->box(BOX_TYPE3);
  dur_3->textsize(TXT_SIZE);
  dur_3->color(COLOR3);
  dur_3->textcolor(TXT_COLOR);
  dur_3->selection_color(COLOR_SEL);
  dur_3->tooltip("dur serie");
  dur_3->cursor_color(TXT_COLOR2);
  dur_3->callback(defact_no_zero_cb);
  dur_3->textfont(IN_TEXT_FONTS);

  dur_4 = new Fl_Value_Input(CTRL_L+CTRL_W*3,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_4->box(BOX_TYPE3);
  dur_4->textsize(TXT_SIZE);
  dur_4->color(COLOR3);
  dur_4->textcolor(TXT_COLOR);
  dur_4->selection_color(COLOR_SEL);
  dur_4->tooltip("dur serie");
  dur_4->cursor_color(TXT_COLOR2);
  dur_4->callback(defact_no_zero_cb);
  dur_4->textfont(IN_TEXT_FONTS);

  dur_5 = new Fl_Value_Input(CTRL_L+CTRL_W*4,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_5->box(BOX_TYPE3);
  dur_5->textsize(TXT_SIZE);
  dur_5->color(COLOR3);
  dur_5->textcolor(TXT_COLOR);
  dur_5->selection_color(COLOR_SEL);
  dur_5->tooltip("dur serie");
  dur_5->cursor_color(TXT_COLOR2);
  dur_5->callback(defact_no_zero_cb);
  dur_5->textfont(IN_TEXT_FONTS);

  dur_6 = new Fl_Value_Input(CTRL_L+CTRL_W*5,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_6->box(BOX_TYPE3);
  dur_6->textsize(TXT_SIZE);
  dur_6->color(COLOR3);
  dur_6->textcolor(TXT_COLOR);
  dur_6->selection_color(COLOR_SEL);
  dur_6->tooltip("dur serie");
  dur_6->cursor_color(TXT_COLOR2);
  dur_6->callback(defact_no_zero_cb);
  dur_6->textfont(IN_TEXT_FONTS);

  dur_7 = new Fl_Value_Input(CTRL_L+CTRL_W*6,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_7->box(BOX_TYPE3);
  dur_7->textsize(TXT_SIZE);
  dur_7->color(COLOR3);
  dur_7->textcolor(TXT_COLOR);
  dur_7->selection_color(COLOR_SEL);
  dur_7->tooltip("dur serie");
  dur_7->cursor_color(TXT_COLOR2);
  dur_7->callback(defact_no_zero_cb);
  dur_7->textfont(IN_TEXT_FONTS);

  dur_8 = new Fl_Value_Input(CTRL_L+CTRL_W*7,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_8->box(BOX_TYPE3);
  dur_8->textsize(TXT_SIZE);
  dur_8->color(COLOR3);
  dur_8->textcolor(TXT_COLOR);
  dur_8->selection_color(COLOR_SEL);
  dur_8->tooltip("dur serie");
  dur_8->cursor_color(TXT_COLOR2);
  dur_8->callback(defact_no_zero_cb);
  dur_8->textfont(IN_TEXT_FONTS);

  dur_9 = new Fl_Value_Input(CTRL_L+CTRL_W*8,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_9->box(BOX_TYPE3);
  dur_9->textsize(TXT_SIZE);
  dur_9->color(COLOR3);
  dur_9->textcolor(TXT_COLOR);
  dur_9->selection_color(COLOR_SEL);
  dur_9->tooltip("dur serie");
  dur_9->cursor_color(TXT_COLOR2);
  dur_9->callback(defact_no_zero_cb);
  dur_9->textfont(IN_TEXT_FONTS);

  dur_10 = new Fl_Value_Input(CTRL_L+CTRL_W*9,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_10->box(BOX_TYPE3);
  dur_10->textsize(TXT_SIZE);
  dur_10->color(COLOR3);
  dur_10->textcolor(TXT_COLOR);
  dur_10->selection_color(COLOR_SEL);
  dur_10->tooltip("dur serie");
  dur_10->cursor_color(TXT_COLOR2);
  dur_10->callback(defact_no_zero_cb);
  dur_10->textfont(IN_TEXT_FONTS);

  dur_11 = new Fl_Value_Input(CTRL_L+CTRL_W*10,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_11->box(BOX_TYPE3);
  dur_11->textsize(TXT_SIZE);
  dur_11->color(COLOR3);
  dur_11->textcolor(TXT_COLOR);
  dur_11->selection_color(COLOR_SEL);
  dur_11->tooltip("dur serie");
  dur_11->cursor_color(TXT_COLOR2);
  dur_11->callback(defact_no_zero_cb);
  dur_11->textfont(IN_TEXT_FONTS);

  dur_12 = new Fl_Value_Input(CTRL_L+CTRL_W*11,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H);
  dur_12->box(BOX_TYPE3);
  dur_12->textsize(TXT_SIZE);
  dur_12->color(COLOR3);
  dur_12->textcolor(TXT_COLOR);
  dur_12->selection_color(COLOR_SEL);
  dur_12->tooltip("dur serie");
  dur_12->cursor_color(TXT_COLOR2);
  dur_12->textfont(IN_TEXT_FONTS);

  counterpointDur = new Fl_Choice(CTRL_L-90+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H+20,CTRL_W,CTRL_H,"Counterp.");
  counterpointDur->menu(ctpDur);
  counterpointDur->color(COLOR2);
  counterpointDur->box(BOX_TYPE2);
  counterpointDur->textcolor(FL_DARK_BLUE);
  counterpointDur->labelsize(11);
  counterpointDur->labelcolor(TXT_COLOR2);
  counterpointDur->align(FL_ALIGN_TOP_LEFT);
  
  outSerieDur = new Fl_Light_Button(CTRL_L-20+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H+20,HB,CTRL_H,"M");
  outSerieDur->box(FL_PLASTIC_UP_BOX);
  outSerieDur->value(1);
  outSerieDur->labelsize(11);
  outSerieDur->selection_color(FL_GREEN);
  outSerieDur->labelcolor(FL_RED);
  outSerieDur->tooltip(MEMO);
 
///////////////

  db_1 = new Fl_Value_Input(CTRL_L,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_1->box(BOX_TYPE3);
  db_1->align(FL_ALIGN_TOP_LEFT);
  db_1->textsize(TXT_SIZE);
  db_1->color(COLOR3);
  db_1->textcolor(TXT_COLOR);
  db_1->selection_color(COLOR_SEL);
  db_1->labelcolor(CTRL_LABEL_COLOR);
  db_1->tooltip("db serie");
  db_1->cursor_color(TXT_COLOR2);
  db_1->textfont(IN_TEXT_FONTS);

  db_2 = new Fl_Value_Input(CTRL_L+CTRL_W,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_2->box(BOX_TYPE3);
  db_2->textsize(TXT_SIZE);
  db_2->color(COLOR3);
  db_2->textcolor(TXT_COLOR);
  db_2->selection_color(COLOR_SEL);
  db_2->tooltip("db serie");
  db_2->cursor_color(TXT_COLOR2);
  db_2->textfont(IN_TEXT_FONTS);

  db_3 = new Fl_Value_Input(CTRL_L+CTRL_W*2,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_3->box(BOX_TYPE3);
  db_3->textsize(TXT_SIZE);
  db_3->color(COLOR3);
  db_3->textcolor(TXT_COLOR);
  db_3->selection_color(COLOR_SEL);
  db_3->tooltip("db serie");
  db_3->cursor_color(TXT_COLOR2);
  db_3->textfont(IN_TEXT_FONTS);

  db_4 = new Fl_Value_Input(CTRL_L+CTRL_W*3,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_4->box(BOX_TYPE3);
  db_4->textsize(TXT_SIZE);
  db_4->color(COLOR3);
  db_4->textcolor(TXT_COLOR);
  db_4->selection_color(COLOR_SEL);
  db_4->tooltip("db serie");
  db_4->cursor_color(TXT_COLOR2);
  db_4->textfont(IN_TEXT_FONTS);

  db_5 = new Fl_Value_Input(CTRL_L+CTRL_W*4,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_5->box(BOX_TYPE3);
  db_5->textsize(TXT_SIZE);
  db_5->color(COLOR3);
  db_5->textcolor(TXT_COLOR);
  db_5->selection_color(COLOR_SEL);
  db_5->tooltip("db serie");
  db_5->cursor_color(TXT_COLOR2);
  db_5->textfont(IN_TEXT_FONTS);

  db_6 = new Fl_Value_Input(CTRL_L+CTRL_W*5,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_6->box(BOX_TYPE3);
  db_6->textsize(TXT_SIZE);
  db_6->color(COLOR3);
  db_6->textcolor(TXT_COLOR);
  db_6->selection_color(COLOR_SEL);
  db_6->tooltip("db serie");
  db_6->cursor_color(TXT_COLOR2);
  db_6->textfont(IN_TEXT_FONTS);

  db_7 = new Fl_Value_Input(CTRL_L+CTRL_W*6,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_7->box(BOX_TYPE3);
  db_7->textsize(TXT_SIZE);
  db_7->color(COLOR3);
  db_7->textcolor(TXT_COLOR);
  db_7->selection_color(COLOR_SEL);
  db_7->tooltip("db serie");
  db_7->cursor_color(TXT_COLOR2);
  db_7->textfont(IN_TEXT_FONTS);

  db_8 = new Fl_Value_Input(CTRL_L+CTRL_W*7,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_8->box(BOX_TYPE3);
  db_8->textsize(TXT_SIZE);
  db_8->color(COLOR3);
  db_8->textcolor(TXT_COLOR);
  db_8->selection_color(COLOR_SEL);
  db_8->tooltip("db serie");
  db_8->cursor_color(TXT_COLOR2);
  db_8->textfont(IN_TEXT_FONTS);

  db_9 = new Fl_Value_Input(CTRL_L+CTRL_W*8,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_9->box(BOX_TYPE3);
  db_9->textsize(TXT_SIZE);
  db_9->color(COLOR3);
  db_9->textcolor(TXT_COLOR);
  db_9->selection_color(COLOR_SEL);
  db_9->tooltip("db serie");
  db_9->cursor_color(TXT_COLOR2);
  db_9->textfont(IN_TEXT_FONTS);

  db_10 = new Fl_Value_Input(CTRL_L+CTRL_W*9,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_10->box(BOX_TYPE3);
  db_10->textsize(TXT_SIZE);
  db_10->color(COLOR3);
  db_10->textcolor(TXT_COLOR);
  db_10->selection_color(COLOR_SEL);
  db_10->tooltip("db serie");
  db_10->cursor_color(TXT_COLOR2);
  db_10->textfont(IN_TEXT_FONTS);

  db_11 = new Fl_Value_Input(CTRL_L+CTRL_W*10,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_11->box(BOX_TYPE3);
  db_11->textsize(TXT_SIZE);
  db_11->color(COLOR3);
  db_11->textcolor(TXT_COLOR);
  db_11->selection_color(COLOR_SEL);
  db_11->tooltip("db serie");
  db_11->cursor_color(TXT_COLOR2);
  db_11->textfont(IN_TEXT_FONTS);

  db_12 = new Fl_Value_Input(CTRL_L+CTRL_W*11,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H);
  db_12->box(BOX_TYPE3);
  db_12->textsize(TXT_SIZE);
  db_12->color(COLOR3);
  db_12->textcolor(TXT_COLOR);
  db_12->selection_color(COLOR_SEL);
  db_12->tooltip("db serie");
  db_12->cursor_color(TXT_COLOR2);
  db_12->textfont(IN_TEXT_FONTS);

  counterpointDb = new Fl_Choice(CTRL_L-90+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H*3+20,CTRL_W,CTRL_H,"Counterp.");
  counterpointDb->menu(ctpDb);
  counterpointDb->color(COLOR2);
  counterpointDb->box(BOX_TYPE2);
  counterpointDb->textcolor(FL_DARK_BLUE);
  counterpointDb->labelsize(11);
  counterpointDb->labelcolor(TXT_COLOR2);
  counterpointDb->align(FL_ALIGN_TOP_LEFT);

  outSerieDb = new Fl_Light_Button(CTRL_L-20+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H*3+20,HB,CTRL_H,"M");
  outSerieDb->box(FL_PLASTIC_UP_BOX);
  outSerieDb->value(1);
  outSerieDb->labelsize(11);
  outSerieDb->selection_color(FL_GREEN);
  outSerieDb->labelcolor(FL_RED);
  outSerieDb->tooltip(MEMO);


////////////////////////////////

  instr_1 = new Fl_Value_Input(CTRL_L,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_1->box(BOX_TYPE3);
  instr_1->align(FL_ALIGN_TOP_LEFT);
  instr_1->textsize(TXT_SIZE);
  instr_1->color(COLOR3);
  instr_1->textcolor(TXT_COLOR);
  instr_1->selection_color(COLOR_SEL);
  instr_1->labelcolor(CTRL_LABEL_COLOR);
  instr_1->tooltip("instr serie");
  instr_1->cursor_color(TXT_COLOR2);
  instr_1->textfont(IN_TEXT_FONTS);

  instr_2 = new Fl_Value_Input(CTRL_L+CTRL_W,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_2->box(BOX_TYPE3);
  instr_2->textsize(TXT_SIZE);
  instr_2->color(COLOR3);
  instr_2->textcolor(TXT_COLOR);
  instr_2->selection_color(COLOR_SEL);
  instr_2->tooltip("instr serie");
  instr_2->cursor_color(TXT_COLOR2);
  instr_2->textfont(IN_TEXT_FONTS);

  instr_3 = new Fl_Value_Input(CTRL_L+CTRL_W*2,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_3->box(BOX_TYPE3);
  instr_3->textsize(TXT_SIZE);
  instr_3->color(COLOR3);
  instr_3->textcolor(TXT_COLOR);
  instr_3->selection_color(COLOR_SEL);
  instr_3->tooltip("instr serie");
  instr_3->cursor_color(TXT_COLOR2);
  instr_3->textfont(IN_TEXT_FONTS);

  instr_4 = new Fl_Value_Input(CTRL_L+CTRL_W*3,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_4->box(BOX_TYPE3);
  instr_4->textsize(TXT_SIZE);
  instr_4->color(COLOR3);
  instr_4->textcolor(TXT_COLOR);
  instr_4->selection_color(COLOR_SEL);
  instr_4->tooltip("instr serie");
  instr_4->cursor_color(TXT_COLOR2);
  instr_4->textfont(IN_TEXT_FONTS);

  instr_5 = new Fl_Value_Input(CTRL_L+CTRL_W*4,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_5->box(BOX_TYPE3);
  instr_5->textsize(TXT_SIZE);
  instr_5->color(COLOR3);
  instr_5->textcolor(TXT_COLOR);
  instr_5->selection_color(COLOR_SEL);
  instr_5->tooltip("instr serie");
  instr_5->cursor_color(TXT_COLOR2);
  instr_5->textfont(IN_TEXT_FONTS);

  instr_6 = new Fl_Value_Input(CTRL_L+CTRL_W*5,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_6->box(BOX_TYPE3);
  instr_6->textsize(TXT_SIZE);
  instr_6->color(COLOR3);
  instr_6->textcolor(TXT_COLOR);
  instr_6->selection_color(COLOR_SEL);
  instr_6->tooltip("instr serie");
  instr_6->cursor_color(TXT_COLOR2);
  instr_6->textfont(IN_TEXT_FONTS);

  instr_7 = new Fl_Value_Input(CTRL_L+CTRL_W*6,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_7->box(BOX_TYPE3);
  instr_7->textsize(TXT_SIZE);
  instr_7->color(COLOR3);
  instr_7->textcolor(TXT_COLOR);
  instr_7->selection_color(COLOR_SEL);
  instr_7->tooltip("instr serie");
  instr_7->cursor_color(TXT_COLOR2);
  instr_7->textfont(IN_TEXT_FONTS);

  instr_8 = new Fl_Value_Input(CTRL_L+CTRL_W*7,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_8->box(BOX_TYPE3);
  instr_8->textsize(TXT_SIZE);
  instr_8->color(COLOR3);
  instr_8->textcolor(TXT_COLOR);
  instr_8->selection_color(COLOR_SEL);
  instr_8->tooltip("instr serie");
  instr_8->cursor_color(TXT_COLOR2);
  instr_8->textfont(IN_TEXT_FONTS);

  instr_9 = new Fl_Value_Input(CTRL_L+CTRL_W*8,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_9->box(BOX_TYPE3);
  instr_9->textsize(TXT_SIZE);
  instr_9->color(COLOR3);
  instr_9->textcolor(TXT_COLOR);
  instr_9->selection_color(COLOR_SEL);
  instr_9->tooltip("instr serie");
  instr_9->cursor_color(TXT_COLOR2);
  instr_9->textfont(IN_TEXT_FONTS);

  instr_10 = new Fl_Value_Input(CTRL_L+CTRL_W*9,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_10->box(BOX_TYPE3);
  instr_10->textsize(TXT_SIZE);
  instr_10->color(COLOR3);
  instr_10->textcolor(TXT_COLOR);
  instr_10->selection_color(COLOR_SEL);
  instr_10->tooltip("instr serie");
  instr_10->cursor_color(TXT_COLOR2);
  instr_10->textfont(IN_TEXT_FONTS);

  instr_11 = new Fl_Value_Input(CTRL_L+CTRL_W*10,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_11->box(BOX_TYPE3);
  instr_11->textsize(TXT_SIZE);
  instr_11->color(COLOR3);
  instr_11->textcolor(TXT_COLOR);
  instr_11->selection_color(COLOR_SEL);
  instr_11->tooltip("instr serie");
  instr_11->cursor_color(TXT_COLOR2);
  instr_11->textfont(IN_TEXT_FONTS);

  instr_12 = new Fl_Value_Input(CTRL_L+CTRL_W*11,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H);
  instr_12->box(BOX_TYPE3);
  instr_12->textsize(TXT_SIZE);
  instr_12->color(COLOR3);
  instr_12->textcolor(TXT_COLOR);
  instr_12->selection_color(COLOR_SEL);
  instr_12->tooltip("instr serie");
  instr_12->cursor_color(TXT_COLOR2);
  instr_12->textfont(IN_TEXT_FONTS);

  counterpointInstr = new Fl_Choice(CTRL_L-90+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H*5+20,CTRL_W,CTRL_H,"Counterp.");
  counterpointInstr->menu(ctpInstr);
  counterpointInstr->color(COLOR2);
  counterpointInstr->box(BOX_TYPE2);
  counterpointInstr->textcolor(FL_DARK_BLUE);
  counterpointInstr->labelsize(11);
  counterpointInstr->labelcolor(TXT_COLOR2);
  counterpointInstr->align(FL_ALIGN_TOP_LEFT);

  outSerieInstr = new Fl_Light_Button(CTRL_L-20+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H*5+20,HB,CTRL_H,"M");
  outSerieInstr->box(FL_PLASTIC_UP_BOX);
  outSerieInstr->value(1);
  outSerieInstr->labelsize(11);
  outSerieInstr->selection_color(FL_GREEN);
  outSerieInstr->labelcolor(FL_RED);
  outSerieInstr->tooltip(MEMO);

////////////////////////////////

  act_1 = new Fl_Value_Input(CTRL_L,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_1->box(BOX_TYPE3);
  act_1->align(FL_ALIGN_TOP_LEFT);
  act_1->textsize(TXT_SIZE);
  act_1->color(COLOR3);
  act_1->textcolor(TXT_COLOR);
  act_1->selection_color(COLOR_SEL);
  act_1->labelcolor(CTRL_LABEL_COLOR);
  act_1->tooltip("action time serie");
  act_1->cursor_color(TXT_COLOR2);
  act_1->textfont(IN_TEXT_FONTS);
  
  act_2 = new Fl_Value_Input(CTRL_L+CTRL_W,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_2->box(BOX_TYPE3);
  act_2->textsize(TXT_SIZE);
  act_2->color(COLOR3);
  act_2->textcolor(TXT_COLOR);
  act_2->selection_color(COLOR_SEL);
  act_2->tooltip("action time serie");
  act_2->cursor_color(TXT_COLOR2);
  act_2->textfont(IN_TEXT_FONTS);

  act_3 = new Fl_Value_Input(CTRL_L+CTRL_W*2,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_3->box(BOX_TYPE3);
  act_3->textsize(TXT_SIZE);
  act_3->color(COLOR3);
  act_3->textcolor(TXT_COLOR);
  act_3->selection_color(COLOR_SEL);
  act_3->tooltip("action time serie");
  act_3->cursor_color(TXT_COLOR2);
  act_3->textfont(IN_TEXT_FONTS);

  act_4 = new Fl_Value_Input(CTRL_L+CTRL_W*3,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_4->box(BOX_TYPE3);
  act_4->textsize(TXT_SIZE);
  act_4->color(COLOR3);
  act_4->textcolor(TXT_COLOR);
  act_4->selection_color(COLOR_SEL);
  act_4->tooltip("action time serie");
  act_4->cursor_color(TXT_COLOR2);
  act_4->textfont(IN_TEXT_FONTS);

  act_5 = new Fl_Value_Input(CTRL_L+CTRL_W*4,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_5->box(BOX_TYPE3);
  act_5->textsize(TXT_SIZE);
  act_5->color(COLOR3);
  act_5->textcolor(TXT_COLOR);
  act_5->selection_color(COLOR_SEL);
  act_5->tooltip("action time serie");
  act_5->cursor_color(TXT_COLOR2);
  act_5->textfont(IN_TEXT_FONTS);

  act_6 = new Fl_Value_Input(CTRL_L+CTRL_W*5,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_6->box(BOX_TYPE3);
  act_6->textsize(TXT_SIZE);
  act_6->color(COLOR3);
  act_6->textcolor(TXT_COLOR);
  act_6->selection_color(COLOR_SEL);
  act_6->tooltip("action time serie");
  act_6->cursor_color(TXT_COLOR2);
  act_6->textfont(IN_TEXT_FONTS);

  act_7 = new Fl_Value_Input(CTRL_L+CTRL_W*6,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_7->box(BOX_TYPE3);
  act_7->textsize(TXT_SIZE);
  act_7->color(COLOR3);
  act_7->textcolor(TXT_COLOR);
  act_7->selection_color(COLOR_SEL);
  act_7->tooltip("action time serie");
  act_7->cursor_color(TXT_COLOR2);
  act_7->textfont(IN_TEXT_FONTS);

  act_8 = new Fl_Value_Input(CTRL_L+CTRL_W*7,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_8->box(BOX_TYPE3);
  act_8->textsize(TXT_SIZE);
  act_8->color(COLOR3);
  act_8->textcolor(TXT_COLOR);
  act_8->selection_color(COLOR_SEL);
  act_8->tooltip("action time serie");
  act_8->cursor_color(TXT_COLOR2);
  act_8->textfont(IN_TEXT_FONTS);

  act_9 = new Fl_Value_Input(CTRL_L+CTRL_W*8,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_9->box(BOX_TYPE3);
  act_9->textsize(TXT_SIZE);
  act_9->color(COLOR3);
  act_9->textcolor(TXT_COLOR);
  act_9->selection_color(COLOR_SEL);
  act_9->tooltip("action time serie");
  act_9->cursor_color(TXT_COLOR2);
  act_9->textfont(IN_TEXT_FONTS);

  act_10 = new Fl_Value_Input(CTRL_L+CTRL_W*9,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_10->box(BOX_TYPE3);
  act_10->textsize(TXT_SIZE);
  act_10->color(COLOR3);
  act_10->textcolor(TXT_COLOR);
  act_10->selection_color(COLOR_SEL);
  act_10->tooltip("action time serie");
  act_10->cursor_color(TXT_COLOR2);
  act_10->textfont(IN_TEXT_FONTS);

  act_11 = new Fl_Value_Input(CTRL_L+CTRL_W*10,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_11->box(BOX_TYPE3);
  act_11->textsize(TXT_SIZE);
  act_11->color(COLOR3);
  act_11->textcolor(TXT_COLOR);
  act_11->selection_color(COLOR_SEL);
  act_11->tooltip("action time serie");
  act_11->cursor_color(TXT_COLOR2);
  act_11->textfont(IN_TEXT_FONTS);

  act_12 = new Fl_Value_Input(CTRL_L+CTRL_W*11,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H);
  act_12->box(BOX_TYPE3);
  act_12->textsize(TXT_SIZE);
  act_12->color(COLOR3);
  act_12->textcolor(TXT_COLOR);
  act_12->selection_color(COLOR_SEL);
  act_12->tooltip("action time serie");
  act_12->cursor_color(TXT_COLOR2);
  act_12->textfont(IN_TEXT_FONTS);

  counterpointAct = new Fl_Choice(CTRL_L-90+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H*7+20,CTRL_W,CTRL_H,"Counterp.");
  counterpointAct->menu(ctpAct);
  counterpointAct->color(COLOR2);
  counterpointAct->box(BOX_TYPE2);
  counterpointAct->textcolor(FL_DARK_BLUE);
  counterpointAct->labelsize(11);
  counterpointAct->labelcolor(TXT_COLOR2);
  counterpointAct->align(FL_ALIGN_TOP_LEFT);
  
  outSerieAct = new Fl_Light_Button(CTRL_L-20+CTRL_W*12+CTRL_W*2+5,CTRL_T+ADD_TOP+CTRL_H*7+20,HB,CTRL_H,"M");
  outSerieAct->box(FL_PLASTIC_UP_BOX);
  outSerieAct->value(1);
  outSerieAct->labelsize(11);
  outSerieAct->selection_color(FL_GREEN);
  outSerieAct->labelcolor(FL_RED);
  outSerieAct->tooltip(MEMO);

///////////////////////////////

  genFrame = new Fl_Box(CTRL_L,CTRL_T+(ADD_TOP-30)+235,CTRL_W*14+20,CTRL_H*7+5,"Series controls");
  genFrame->box(FL_EMBOSSED_BOX);
  genFrame->align(FL_ALIGN_TOP_LEFT);
  genFrame->color(COLOR);
  genFrame->labelcolor(CTRL_LABEL_COLOR);

  actVal = new Fl_Value_Input(CTRL_L+CTRL_W*13+15,CTRL_T+(ADD_TOP-30)+240,CTRL_W,CTRL_H,"act:");
  actVal->box(BOX_TYPE2);
  actVal->textsize(TXT_SIZE);
  actVal->labelcolor(CTRL_LABEL_COLOR);
  actVal->callback(defact_cb);

  in_w = new Fl_Value_Input(CTRL_L+CTRL_W*13+25,CTRL_T+(ADD_TOP-30)+275,CTRL_W-10,CTRL_H,"w = ");
  in_w->box(BOX_TYPE2);
  in_w->labelcolor(CTRL_LABEL_COLOR);
  in_w->value(.125);
  in_w->tooltip("w is a duration constant");
  
  in_x = new Fl_Value_Input(CTRL_L+CTRL_W*13+25,CTRL_T+(ADD_TOP-30)+300,CTRL_W-10,CTRL_H,"x = ");
  in_x->box(BOX_TYPE2);
  in_x->labelcolor(CTRL_LABEL_COLOR);
  in_x->value(.25);
  in_x->tooltip("x is a duration constant");

  in_y = new Fl_Value_Input(CTRL_L+CTRL_W*13+25,CTRL_T+(ADD_TOP-30)+325,CTRL_W-10,CTRL_H,"y = ");
  in_y->box(BOX_TYPE2);
  in_y->labelcolor(CTRL_LABEL_COLOR);
  in_y->value(.5);
  in_y->tooltip("y is a duration constant");

  in_z = new Fl_Value_Input(CTRL_L+CTRL_W*13+25,CTRL_T+(ADD_TOP-30)+350,CTRL_W-10,CTRL_H,"z = ");
  in_z->box(BOX_TYPE2);
  in_z->labelcolor(CTRL_LABEL_COLOR);
  in_z->value(1);
  in_z->tooltip("z is a duration constant");

  logic_a = new Fl_Value_Input(CTRL_L+5,CTRL_T+(ADD_TOP-30)+260,CTRL_W/2,CTRL_H,"Formula:");
  logic_a->box(BOX_TYPE2);
  logic_a->align(FL_ALIGN_TOP_LEFT);
  logic_a->textsize(TXT_SIZE);
  logic_a->labelcolor(CTRL_LABEL_COLOR);

  logic_b = new Fl_Value_Input(CTRL_L+5+CTRL_W/2,CTRL_T+(ADD_TOP-30)+260,CTRL_W/2,CTRL_H);
  logic_b->box(BOX_TYPE2);
  logic_b->textsize(TXT_SIZE);

  logic_c = new Fl_Value_Input(CTRL_L+5+CTRL_W,CTRL_T+(ADD_TOP-30)+260,CTRL_W/2,CTRL_H);
  logic_c->box(BOX_TYPE2);
  logic_c->textsize(TXT_SIZE);

  bt_formula = new Fl_Button(CTRL_L+5+CTRL_W+35,CTRL_T+(ADD_TOP-30)+260,CTRL_W,CTRL_H,"Enter");
  bt_formula->box(BOX_TYPE);
  bt_formula->callback(solveFormula_cb);
  bt_formula->labelcolor(BT_TXT_COLOR2);

  show_formula = new Fl_Output(CTRL_L+CTRL_W*3,CTRL_T+(ADD_TOP-30)+260,CTRL_W+5,CTRL_H);
  show_formula->box(BOX_TYPE2);
  show_formula->textsize(TXT_SIZE);
  show_formula->labelcolor(CTRL_LABEL_COLOR);
  show_formula->value("case n.");
  
  auto_ctp = new Fl_Menu_Button(CTRL_L+15+CTRL_W*4,CTRL_T+(ADD_TOP-30)+260,CTRL_W*2,CTRL_H,"Write:");
  auto_ctp->menu(allParams);
  auto_ctp->box(BOX_TYPE2);
  auto_ctp->color(COLOR2);
  auto_ctp->textcolor(FL_DARK_BLUE);
  auto_ctp->labelcolor(FL_DARK_BLUE);

//CTRL_L+5+CTRL_W*5+20
  nserie = new Fl_Value_Output(CTRL_L+5+CTRL_W*6+20,CTRL_T+(ADD_TOP-30)+260,CTRL_W,CTRL_H,"W.S.:");
  nserie->box(BOX_TYPE);
  nserie->tooltip("Number of series written");
  nserie->align(FL_ALIGN_TOP_LEFT);
  nserie->textsize(TXT_SIZE);
  nserie->labelcolor(CTRL_LABEL_COLOR);
  nserie->color(FL_BLUE);

  bt_resetCounter = new Fl_Button(CTRL_L+5+CTRL_W*6+75,CTRL_T+(ADD_TOP-30)+260,CTRL_W,CTRL_H,"reset");
  bt_resetCounter->box(BOX_TYPE);
  bt_resetCounter->color(COLOR2);
  bt_resetCounter->callback(resetCounter_cb);
  
  //bt_moreParams = new Fl_Light_Button(CTRL_L+5+CTRL_W*7+85,CTRL_T+(ADD_TOP-30)+260,CTRL_W,CTRL_H,"");
  
  bt_clearScore = new Fl_Button(CTRL_L+25+CTRL_W*8+SPACE*15,CTRL_T+(ADD_TOP-30)+260,CTRL_W,CTRL_H2,"&CLEAR");
  bt_clearScore->box(BOX_TYPE);
  bt_clearScore->color(COLOR2);
  bt_clearScore->callback(clearsco_cb);
  bt_clearScore->tooltip("delete all contents of the current score file");
  bt_clearScore->labelcolor(BT_TXT_COLOR);
  bt_clearScore->labeltype(BT_LABEL_TYPE);

  bt_enable_pch = new Fl_Light_Button(CTRL_L+5,CTRL_T+(ADD_TOP-40)+300,CTRL_W+25,CTRL_H,"Gen. pitch.");
  bt_enable_pch->box(BOX_TYPE2);
  bt_enable_pch->color(COLOR2);
  bt_enable_pch->value(1);
  bt_enable_pch->labelcolor(FL_DARK_BLUE);
  bt_enable_pch->tooltip("Enable / disable generative functions for the pitch serie");
  bt_enable_pch->labelsize(11);
  bt_enable_pch->callback(actPitch_cb);
    
  bt_enable_dur = new Fl_Light_Button(CTRL_L+5+CTRL_W+27,CTRL_T+(ADD_TOP-40)+300,CTRL_W+20,CTRL_H,"Gen. dur.");
  bt_enable_dur->box(BOX_TYPE2);
  bt_enable_dur->color(COLOR2);
  bt_enable_dur->value(1);
  bt_enable_dur->labelcolor(FL_DARK_BLUE);
  bt_enable_dur->tooltip("Enable / disable generative functions for the durations serie");
  bt_enable_dur->labelsize(11);
  bt_enable_dur->callback(actDur_cb);

  bt_enable_db = new Fl_Light_Button(CTRL_L+CTRL_W*3+5,CTRL_T+(ADD_TOP-40)+300,CTRL_W+20,CTRL_H,"Gen. db");
  bt_enable_db->box(BOX_TYPE2);
  bt_enable_db->color(COLOR2);
  bt_enable_db->labelcolor(FL_DARK_BLUE);
  bt_enable_db->value(1);
  bt_enable_db->tooltip("Enable / disable generative functions for the db serie");
  bt_enable_db->labelsize(11);
  bt_enable_db->callback(actDb_cb);

  bt_enable_instr = new Fl_Light_Button(CTRL_L+30+CTRL_W*4,CTRL_T+(ADD_TOP-40)+300,CTRL_W+30,CTRL_H,"Gen. instr.");
  bt_enable_instr->box(BOX_TYPE2);
  bt_enable_instr->color(COLOR2);
  bt_enable_instr->labelcolor(FL_DARK_BLUE);
  bt_enable_instr->value(0);
  bt_enable_instr->labelsize(11);
  bt_enable_instr->tooltip("Enable / disable generative functions for the instr serie");
  bt_enable_instr->callback(actInstr_cb);

  bt_enable_act = new Fl_Light_Button(CTRL_L+5+CTRL_W*6+10,CTRL_T+(ADD_TOP-40)+300,CTRL_W+20,CTRL_H,"En. act");
  bt_enable_act->callback(actGen_cb);
  bt_enable_act->box(BOX_TYPE2);
  bt_enable_act->color(COLOR2);
  bt_enable_act->labelcolor(FL_DARK_BLUE);
  bt_enable_act->value(0);
  bt_enable_act->labelsize(11);
  bt_enable_act->tooltip("Enable / disable act serie");

  bt_calc_act = new Fl_Light_Button(CTRL_L+5+CTRL_W*8-15,CTRL_T+(ADD_TOP-40)+300,CTRL_W+20,CTRL_H,"Gen. act.");
  bt_calc_act->box(BOX_TYPE2);
  bt_calc_act->color(COLOR2);
  bt_calc_act->value(0);
  bt_calc_act->labelcolor(FL_DARK_BLUE);
  bt_calc_act->tooltip("Enable / disable generative functions for the act serie");
  bt_calc_act->labelsize(11);
  bt_calc_act->deactivate();

  bt_reset_act = new Fl_Button(CTRL_L+5+CTRL_W*8+70,CTRL_T+(ADD_TOP-40)+300,CTRL_W+20,CTRL_H,"Reset act.");
  bt_reset_act->box(BOX_TYPE);
  bt_reset_act->color(COLOR2);
  bt_reset_act->value(0);
  bt_reset_act->labelcolor(FL_DARK_BLUE);
  bt_reset_act->tooltip("Enable / disable generative functions for the act serie");
  bt_reset_act->labelsize(11);
  bt_reset_act->callback(defact_cb);
  
  outMinMaxPitch = new Fl_Light_Button(CTRL_L+5,CTRL_T+(ADD_TOP-15)+300,HB,CTRL_H,"M");
  outMinMaxPitch->box(FL_PLASTIC_UP_BOX);
  outMinMaxPitch->value(1);
  outMinMaxPitch->labelsize(11);
  outMinMaxPitch->selection_color(FL_GREEN);
  outMinMaxPitch->labelcolor(FL_RED);
  outMinMaxPitch->tooltip("memorize the min and max pitch values");
  
  outMinMaxDur = new Fl_Light_Button(CTRL_L+5+CTRL_W*2+15,CTRL_T+(ADD_TOP-15)+300,HB,CTRL_H,"M");
  outMinMaxDur->box(FL_PLASTIC_UP_BOX);
  outMinMaxDur->value(1);
  outMinMaxDur->labelsize(11);
  outMinMaxDur->selection_color(FL_GREEN);
  outMinMaxDur->labelcolor(FL_RED);
  outMinMaxDur->tooltip("memorize the min and max duration values");
    
  outMinMaxDb = new Fl_Light_Button(CTRL_L+5+CTRL_W*4+25,CTRL_T+(ADD_TOP-15)+300,HB,CTRL_H,"M");
  outMinMaxDb->box(FL_PLASTIC_UP_BOX);
  outMinMaxDb->value(1);
  outMinMaxDb->labelsize(11);
  outMinMaxDb->selection_color(FL_GREEN);
  outMinMaxDb->labelcolor(FL_RED);
  outMinMaxDb->tooltip("memorize the min and max dB values");

  outMinMaxInstr = new Fl_Light_Button(CTRL_L+5+CTRL_W*6+35,CTRL_T+(ADD_TOP-15)+300,HB,CTRL_H,"M");
  outMinMaxInstr->box(FL_PLASTIC_UP_BOX);
  outMinMaxInstr->value(0);
  outMinMaxInstr->labelsize(11);
  outMinMaxInstr->selection_color(FL_GREEN);
  outMinMaxInstr->labelcolor(FL_RED);
  outMinMaxInstr->tooltip("memorize the min and max instr values");
  
  outMinMaxAct = new Fl_Light_Button(CTRL_L+5+CTRL_W*8+50,CTRL_T+(ADD_TOP-15)+300,HB,CTRL_H,"M");
  outMinMaxAct->box(FL_PLASTIC_UP_BOX);
  outMinMaxAct->value(0);
  outMinMaxAct->labelsize(11);
  outMinMaxAct->selection_color(FL_GREEN);
  outMinMaxAct->labelcolor(FL_RED);
  outMinMaxAct->tooltip("memorize the min and max act values");

  bt_writePrefs = new Fl_Button(CTRL_L+25+CTRL_W*8+SPACE*15,CTRL_T+(ADD_TOP-30)+300,CTRL_W,CTRL_H2,"SAVE");
  bt_writePrefs->box(BOX_TYPE);
  bt_writePrefs->color(COLOR2);
  bt_writePrefs->value(0);
  bt_writePrefs->labelcolor(FL_GREEN);
  bt_writePrefs->labelsize(16);
  bt_writePrefs->labeltype(BT_LABEL_TYPE);
  bt_writePrefs->callback(writePrefs_cb);

  bt_exit = new Fl_Button(CTRL_L+25+CTRL_W*8+SPACE*15,CTRL_T+(ADD_TOP-30)+340,CTRL_W,CTRL_H2,"EXIT");
  bt_exit->box(BOX_TYPE);
  bt_exit->color(COLOR2);
  bt_exit->value(0);
  bt_exit->labelcolor(FL_RED);
  bt_exit->labelsize(16);
  bt_exit->labeltype(BT_LABEL_TYPE);
  bt_exit->callback(window_callback);
  
  min_pch = new Fl_Choice(CTRL_L+5,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Pitch min");
  min_pch->menu(tot_pitchMin);
  min_pch->box(BOX_TYPE2);
  min_pch->align(FL_ALIGN_TOP_LEFT);
  min_pch->labelcolor(FL_YELLOW);
  min_pch->labelsize(11);
  min_pch->value(0);
  min_pch->color(COLOR3);
  min_pch->textcolor(COLOR3);
  min_pch->textsize(11);
  min_pch->callback(err_lim_cb);
  min_pch->tooltip("Select the min value for the pitch series");
  
  max_pch = new Fl_Choice(CTRL_L+5+CTRL_W+5,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Pitch max");
  max_pch->menu(tot_pitchMax);
  max_pch->box(BOX_TYPE2);
  max_pch->align(FL_ALIGN_TOP_LEFT);
  max_pch->labelcolor(FL_YELLOW);
  max_pch->labelsize(11);
  max_pch->value(83);
  max_pch->color(COLOR3);
  max_pch->textcolor(COLOR3);
  max_pch->textsize(11);
  max_pch->callback(err_lim_cb);
  max_pch->tooltip("Select the max value for the pitch series");
  
  min_dur = new Fl_Choice(CTRL_L+5+CTRL_W*2+15,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Dur min");
  min_dur->menu(totDurMin);
  min_dur->box(BOX_TYPE2);
  min_dur->align(FL_ALIGN_TOP_LEFT);
  min_dur->labelcolor(FL_YELLOW);
  min_dur->color(COLOR3);
  min_dur->labelsize(11);
  min_dur->textcolor(COLOR3);
  min_dur->value(0);
  min_dur->textsize(10);
  min_dur->callback(err_lim_cb);
  min_dur->tooltip("Select the min value for the dur series");


  max_dur = new Fl_Choice(CTRL_L+5+CTRL_W*3+20,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Dur max");
  max_dur->menu(totDurMax);
  max_dur->box(BOX_TYPE2);
  max_dur->align(FL_ALIGN_TOP_LEFT);
  max_dur->labelcolor(FL_YELLOW);
  max_dur->color(COLOR3);
  max_dur->labelsize(11);
  max_dur->textcolor(COLOR3);
  max_dur->value(34);
  max_dur->textsize(11);
  max_dur->callback(err_lim_cb);
  max_dur->tooltip("Select the max value for the dur series");

  min_db = new Fl_Choice(CTRL_L+5+CTRL_W*4+25,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Db min");
  min_db->menu(totDbMin);
  min_db->box(BOX_TYPE2);
  min_db->align(FL_ALIGN_TOP_LEFT);
  min_db->labelcolor(FL_YELLOW);
  min_db->color(COLOR3);
  min_db->labelsize(11);
  min_db->textcolor(COLOR3);
  min_db->value(0);
  min_db->textsize(11);
  min_db->callback(err_lim_cb);
  min_db->tooltip("Select the min value for the db series");

  max_db = new Fl_Choice(CTRL_L+5+CTRL_W*5+30,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Db max");
  max_db->menu(totDbMax);
  max_db->box(BOX_TYPE2);
  max_db->align(FL_ALIGN_TOP_LEFT);
  max_db->labelcolor(FL_YELLOW);
  max_db->color(COLOR3);
  max_db->labelsize(11);
  max_db->textcolor(COLOR3);
  max_db->value(79);
  max_db->textsize(11);
  max_db->callback(err_lim_cb);
  max_db->tooltip("Select the max value for the db series");

  min_instr = new Fl_Choice(CTRL_L+5+CTRL_W*6+35,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Instr min");
  min_instr->menu(totInstrMin);
  min_instr->box(BOX_TYPE2);
  min_instr->align(FL_ALIGN_TOP_LEFT);
  min_instr->labelcolor(FL_YELLOW);
  min_instr->color(COLOR3);
  min_instr->labelsize(11);
  min_instr->textcolor(COLOR3);
  min_instr->value(0);
  min_instr->textsize(11);
  min_instr->callback(err_lim_cb);
  min_instr->tooltip("Select the min value for the instr series");

  max_instr = new Fl_Choice(CTRL_L+5+CTRL_W*7+40,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"Instr max");
  max_instr->menu(totInstrMax);
  max_instr->box(BOX_TYPE2);
  max_instr->align(FL_ALIGN_TOP_LEFT);
  max_instr->labelcolor(FL_YELLOW);
  max_instr->color(COLOR3);
  max_instr->labelsize(11);
  max_instr->textcolor(COLOR3);
  max_instr->value(23);
  max_instr->textsize(11);
  max_instr->callback(err_lim_cb);
  max_instr->tooltip("Select the max value for the instr series");
  
  min_act = new Fl_Value_Input(CTRL_L+5+CTRL_W*8+50,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"act min");
  min_act->align(FL_ALIGN_TOP_LEFT);
  min_act->labelcolor(FL_YELLOW);
  min_act->color(COLOR3);
  min_act->labelsize(11);
  min_act->textcolor(FL_WHITE);
  min_act->value(0);
  min_act->textsize(11);
  min_act->tooltip("Select the min value for the act series.\nInsert values from 0 to up");
 
  max_act = new Fl_Value_Input(CTRL_L+5+CTRL_W*9+55,CTRL_T+(ADD_TOP-30)+350,CTRL_W,CTRL_H,"act max");
  max_act->align(FL_ALIGN_TOP_LEFT);
  max_act->labelcolor(FL_YELLOW);
  max_act->color(COLOR3);
  max_act->labelsize(11);
  max_act->textcolor(FL_WHITE);
  max_act->value(1800);
  max_act->textsize(11);
  max_act->tooltip("Select the max value for the act series.\nInsert values from 18000 to down");
  
  window->end();
  window->show();
  makeWinPath();

  read_chk_start();

  if(check_value == 1) {
  makeStartWin();
  }

}

void actGen_cb(Fl_Widget*,void*)
{
    if (bt_enable_act->value() == 1)
    {
        bt_calc_act->activate();
        outMinMaxAct->activate();
        readPrefs();
    }
    else if (bt_enable_act->value() == 0)
    {
        outMinMaxAct->deactivate();
        outMinMaxAct->value(0);
   
        bt_calc_act->deactivate();
        bt_calc_act->value(0);
        def_act();
    }
}

void actPitch_cb(Fl_Widget*,void*)
{
    if (bt_enable_pch->value() == 1)
    {
        outMinMaxPitch->activate();
    }
    else if (bt_enable_pch->value() == 0)
    {
        outMinMaxPitch->deactivate();
        outMinMaxPitch->value(0);
    }
}

void actDur_cb(Fl_Widget*,void*)
{
    if (bt_enable_dur->value() == 1)
    {
        outMinMaxDur->activate();
    }
    else if (bt_enable_dur->value() == 0)
    {
        outMinMaxDur->deactivate();
        outMinMaxDur->value(0);
    }
}

void actDb_cb(Fl_Widget*,void*)
{
    if (bt_enable_db->value() == 1)
    {
        outMinMaxDb->activate();
    }
    else if (bt_enable_db->value() == 0)
    {
        outMinMaxDb->deactivate();
        outMinMaxDb->value(0);
    }
}

void actInstr_cb(Fl_Widget*,void*)
{
    if (bt_enable_instr->value() == 1)
    {
        outMinMaxInstr->activate();
    }
    else if (bt_enable_instr->value() == 0)
    {
        outMinMaxInstr->deactivate();
        outMinMaxInstr->value(0);
    }
}

int main()
{
  make_form();
  return Fl::run();
}

 
