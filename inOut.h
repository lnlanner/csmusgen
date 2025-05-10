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
void open_score_cb(Fl_Widget*,void*)
{   
    dataScore = 0;
    editor_win();
    open();
}

void open_data_cb(Fl_Widget*,void*)
{
    dataScore = 1;
    editor_win();
    open();
}

void open_orc_cb(Fl_Widget*,void*)
{   
    dataScore = 2;
    editor_win();
    open();
}


Fl_Shared_Image *img;
Fl_Box *b;

/**File chooser**/
static char name[1024];

void load_file(const char *n) {
  if (img) img->release();

  img = Fl_Shared_Image::get(n);
  if (!img) {
    fl_alert("Image file format not recognized!");
    return;
  }
  if (img->w() > b->w() || img->h() > b->h()) {
    Fl_Image *temp;
    if (img->w() > img->h()) temp = img->copy(b->w(), b->h() * img->h() / img->w());
    else temp = img->copy(b->w() * img->w() / img->h(), b->h());

    img->release();
    img = (Fl_Shared_Image *)temp;
  }
  b->label(name);
  b->image(img);
  b->redraw();
}

void file_cb(const char *n) {
  if (!strcmp(name,n)) return;
//  load_file(n);
  strcpy(name,n);
  scoPath->value(name);
}

void fileOrc_cb(const char *n) {
  if (!strcmp(name,n)) return;
//  load_file(n);
  strcpy(name,n);
  orcPath->value(name);
}

void fileData_cb(const char *n) {
  if (!strcmp(name,n)) return;
//  load_file(n);
  strcpy(name,n);
  outData->value(name);
}

void fileGroup_cb(const char *n) {
  if (!strcmp(name,n)) return;
//  load_file(n);
  strcpy(name,n);
  dataPath->value(name);
}

void fileHelp_cb(const char *n) {
  if (!strcmp(name,n)) return;
//  load_file(n);
  strcpy(name,n);
  helpPath->value(name);
}

void btload_cb(Fl_Widget *,void *)
{
  fl_file_chooser_callback(file_cb);
  fl_file_chooser("Sco file?","*.{sco}", name);
  fl_file_chooser_callback(0);
}

void btloadOrc_cb(Fl_Widget *,void *)
{
  fl_file_chooser_callback(fileOrc_cb);
  fl_file_chooser("Orc file?","*orc|*csd", name);
  fl_file_chooser_callback(0);
}

void btloadData_cb(Fl_Widget *,void *)
{
  fl_file_chooser_callback(fileData_cb);
  fl_file_chooser("Text file?","*.{txt}", name);
  fl_file_chooser_callback(0);
}

void btloadGroup_cb(Fl_Widget *,void *)
{
  fl_file_chooser_callback(fileGroup_cb);
  fl_file_chooser("GDir","", name);
  fl_file_chooser_callback(0);
}

void btloadHelp_cb(Fl_Widget *,void *)
{
  fl_file_chooser_callback(fileHelp_cb);
  fl_file_chooser("html file?","*.{html}", name);
  fl_file_chooser_callback(0);
}

/**File Chooser**/

void clearsco_cb(Fl_Widget*,void*)
{
  switch (fl_choice("Delete all contents of the current score file?", "No", "Yes", 0)) {
  case 0: return;
  case 1: {
  ofstream out1(scoPath->value(), ios::trunc);
  out1.close();
  
  ofstream out2(outData->value(), ios::trunc);
  out2.close();
  
  actVal->value(0);
  nserie->value(0);
  act = 0;
  if ( bt_enable_act->value() == 0)
  {
  def_act();
  }
}
}
}

void readPrefs_cb(Fl_Widget*,void*)
{
  if (out_File->value() >= 1)
  {
    readPrefs();
    readPrefsSerie();
    ini_act();
    if (bt_enable_act->value() == 0)
    {
    def_act();
    }
    }
  else
  {
  (fl_message("Load before an already existing data group and series"));
  }
}

void writePrefs_cb(Fl_Widget*,void*)
{
  if (out_File->value() >= 1)
  {
  switch (fl_choice("Do you want really save this setting?", "Yes", "No", 0)) {
case 0: 
  writePrefs();
	if (loadMoreParams == 1) {
  	writePrefsSerieParams();
	}
	if (loadMoreParams2 == 1) {
  	writePrefsSerieParams2();
	}
case 1: return;
  }
}
  else
  {
  (fl_message("Load before an already existing data group and series"));
  }
  //exit(0);
}

void init_all_series()
{
  ini_pitch();
  ini_db();
  ini_instr();
  ini_dur();
  ini_act();
  if (loadMoreParams == 1)
  {
  if (bt_enable_p6->value() == 1)
  {
  ini_p6();
  }
  if (bt_enable_p7->value() == 1)
  {
  ini_p7();
  }
  if (bt_enable_p8->value() == 1)
  {
  ini_p8();
  }
  if (bt_enable_p9->value() == 1)
  {
  ini_p9();
  }
  if (bt_enable_p10->value() == 1)
  {
  ini_p10();
  }
  if (bt_enable_p11->value() == 1)
  {
  ini_p11();
  }
  if (bt_enable_p12->value() == 1)
  {
  ini_p12();
  }
  if (bt_enable_p13->value() == 1)
  {
  ini_p13();
  }
  if (bt_enable_p14->value() == 1)
  {
  ini_p14();
  }
  if (bt_enable_p15->value() == 1)
  {
  ini_p15();
  }
  }
  
  if (loadMoreParams2 == 1)
  {
  if (bt_enable_p6b->value() == 1)
  {
  ini_p6b();
  }
  if (bt_enable_p7b->value() == 1)
  {
  ini_p7b();
  }
  if (bt_enable_p8b->value() == 1)
  {
  ini_p8b();
  }
  if (bt_enable_p9b->value() == 1)
  {
  ini_p9b();
  }
  if (bt_enable_p10b->value() == 1)
  {
  ini_p10b();
  }
  if (bt_enable_p11b->value() == 1)
  {
  ini_p11b();
  }
  if (bt_enable_p12b->value() == 1)
  {
  ini_p12b();
  }
  if (bt_enable_p13b->value() == 1)
  {
  ini_p13b();
  }
  if (bt_enable_p14b->value() == 1)
  {
  ini_p14b();
  }
  if (bt_enable_p15b->value() == 1)
  {
  ini_p15b();
  }
  }
}

////////////////////SCORE OUT/////////////////////////

void select_comb()
{
    if (autoCounterpoint == 1)
    {
    outAutoCroce();
    }
    else if (autoCounterpoint == 2)
    {
    outAutoRetro();
    } 
    else if (autoCounterpoint == 3)
    {
    outAutoSlide();
    } 
    else if (autoCounterpoint == 4)
    {
    outAutoJumpone();
    } 
}

void score_out()
{
  out_setting();
  formula formula;
  formula.trp_seq();
  window->redraw();
  if (loadMoreParams == 1) {
  winParamn->redraw();
  }
  if (loadMoreParams2 == 1) {
  winParamnb->redraw();
  }
  init_all_series();
  window->redraw();
  if (loadMoreParams == 1) {
  winParamn->redraw();
  }
  if (loadMoreParams2 == 1) {
  winParamnb->redraw();
  }
  int i;
  ofstream out(scoPath->value(), ios::app);
  out.setf(ios::left);

  struct tm *ptr;
  time_t lt;
  lt = time('\0');
  ptr = localtime(&lt);

  out << ";>>>csmusgen INPUT session: " << asctime(ptr) << "\n\n";

  if (bt_enable_act->value() == 0)
    {
    actVal->value(act_12->value() + dur_12->value());
    act_1->value(actVal->value());
    }   
    out << setw(11) << ";p1" << setw(20) << ";p2" << setw(20) << ";p3";
    out << setw(20) << ";p4" << setw(20) << ";p5";
    if ( loadMoreParams == 1 ) {
    if (bt_enable_p6->value() == 1)
        {
            out << setw(20) << ";p6";
        }
    if (bt_enable_p7->value() == 1)
        {
            out << setw(20) << ";p7";
        }
    if (bt_enable_p8->value() == 1)
        {
            out << setw(20) << ";p8";
        }
    if (bt_enable_p9->value() == 1)
        {
            out << setw(20) << ";p9";
        }
    if (bt_enable_p10->value() == 1)
        {
            out << setw(20) << ";p10";
        }
    if (bt_enable_p11->value() == 1)
        {
            out << setw(20) << ";p11";
        }
    if (bt_enable_p12->value() == 1)
        {
            out << setw(20) << ";p12";
        }
    if (bt_enable_p13->value() == 1)
        {
            out << setw(20) << ";p13";
        }
    if (bt_enable_p14->value() == 1)
        {
            out << setw(20) << ";p14";
        }
    if (bt_enable_p15->value() == 1)
        {
            out << setw(20) << ";p15";
        }
    }
    //////
    if ( loadMoreParams2 == 1 ) {
    if (bt_enable_p6b->value() == 1)
        {
            out << setw(20) << ";p16";
        }
    if (bt_enable_p7b->value() == 1)
        {
            out << setw(20) << ";p17";
        }
    if (bt_enable_p8b->value() == 1)
        {
            out << setw(20) << ";p18";
        }
    if (bt_enable_p9b->value() == 1)
        {
            out << setw(20) << ";p19";
        }
    if (bt_enable_p10b->value() == 1)
        {
            out << setw(20) << ";p20";
        }
    if (bt_enable_p11b->value() == 1)
        {
            out << setw(20) << ";p21";
        }
    if (bt_enable_p12b->value() == 1)
        {
            out << setw(20) << ";p22";
        }
    if (bt_enable_p13b->value() == 1)
        {
            out << setw(20) << ";p23";
        }
    if (bt_enable_p14b->value() == 1)
        {
            out << setw(20) << ";p24";
        }
    if (bt_enable_p15b->value() == 1)
        {
            out << setw(20) << ";p25";
        }
    }
    //////
    out << "\n"; 
    for (i=0;i<12;i++)
    {
    out << "i" << setw(10) << init_instr[i];
    out << setw(20);
    out << init_act[i];
    act = act + init_dur[i];
    out << setw(20);
    out << init_dur[i];
    out << setw(20);
    out << init_db[i];
    out << setw(20);
    out << init_pitch[i];
    if (loadMoreParams == 1) {
        if (bt_enable_p6->value() == 1)
        {
        out << setw(20);
        out << init_p6[i];
        }
        if (bt_enable_p7->value() == 1)
        {
        out << setw(20);
        out << init_p7[i];
        }
        if (bt_enable_p8->value() == 1)
        {
        out << setw(20);
        out << init_p8[i];
        }
        if (bt_enable_p9->value() == 1)
        {
        out << setw(20);
        out << init_p9[i];
        }
        if (bt_enable_p10->value() == 1)
        {
        out << setw(20);
        out << init_p10[i];
        }
        if (bt_enable_p11->value() == 1)
        {
        out << setw(20);
        out << init_p11[i];
        }
        if (bt_enable_p12->value() == 1)
        {
        out << setw(20);
        out << init_p12[i];
        }
        if (bt_enable_p13->value() == 1)
        {
        out << setw(20);
        out << init_p13[i];
        }
        if (bt_enable_p14->value() == 1)
        {
        out << setw(20);
        out << init_p14[i];
        }
        if (bt_enable_p15->value() == 1)
        {
        out << setw(20);
        out << init_p15[i];
        }
    }
    if (loadMoreParams2 == 1) {
        if (bt_enable_p6b->value() == 1)
        {
        out << setw(20);
        out << init_p6b[i];
        }
        if (bt_enable_p7b->value() == 1)
        {
        out << setw(20);
        out << init_p7b[i];
        }
        if (bt_enable_p8b->value() == 1)
        {
        out << setw(20);
        out << init_p8b[i];
        }
        if (bt_enable_p9b->value() == 1)
        {
        out << setw(20);
        out << init_p9b[i];
        }
        if (bt_enable_p10b->value() == 1)
        {
        out << setw(20);
        out << init_p10b[i];
        }
        if (bt_enable_p11b->value() == 1)
        {
        out << setw(20);
        out << init_p11b[i];
        }
        if (bt_enable_p12b->value() == 1)
        {
        out << setw(20);
        out << init_p12b[i];
        }
        if (bt_enable_p13b->value() == 1)
        {
        out << setw(20);
        out << init_p13b[i];
        }
        if (bt_enable_p14b->value() == 1)
        {
        out << setw(20);
        out << init_p14b[i];
        }
        if (bt_enable_p15b->value() == 1)
        {
        out << setw(20);
        out << init_p15b[i];
        }
    }

    out << '\n';
    }
    out << '\n';

    out.close();
    subset();
    select_comb();
    window->redraw();
    if (loadMoreParams == 1) {
    winParamn->redraw();
    }
    if (loadMoreParams2 == 1) {
    winParamnb->redraw();
    }

    if (bt_enable_act->value() == 0)
    {
    actVal->value(act_12->value() + dur_12->value());
    actTime();
    }
    else if (bt_enable_act->value() == 1)
    {
    def_act();
    }
    nserie->value(nserie->value() + 1);
}

void out_setting()
{   
  ofstream out(outData->value(), ios::app);

  struct tm *ptr;
  time_t lt;
  lt = time('\0');
  ptr = localtime(&lt);

  out << ";>>>csmusgen INPUT session: " << asctime(ptr) << "\n\n";
  out << setw(25) << "orc file:" << setw(5) << "[" << orcPath->value() << "]" << "\n";
  out << setw(25) << "sco file:" << setw(5) << "[" << scoPath->value() << "]" << "\n";
  out << setw(25) << "group:" << setw(5) << "[" << dataPath->value() << "]" << "\n";
  out << setw(25) << "serie number:" << setw(5) << "[" << out_File->text() << "]" << "\n";
  out << setw(25) << "serie name:" << setw(5) << "[" << serieName->value() << "]" << "\n";
  out << setw(25) << "Action time:" << setw(5) << "[" << actVal->value() << "]" << "\n"; 
  out << setw(25) << "Formula:" << setw(5) << "[" << logic_a->value() << " " << logic_b->value() << " " << logic_c->value() << "]"<< "\n";
  
  if (outSeriePitch->value() == 1) {
  out << setw(25) << "INPUT pitch series:";
  out << setw(5) << "[" << pch_1->value() << " " << pch_2->value() << " " << pch_3->value() << " " << pch_4->value() << " " ; 
  out << pch_5->value() << " " << pch_6->value() << " " << pch_7->value() << " " << pch_8->value() << " " ; 
  out << pch_9->value() << " " << pch_10->value() << " " << pch_11->value() << " " << pch_12->value() << "]" << "\n" ; 
  }
  
  if (outSerieDur->value() == 1) {
  out << setw(25) << "INPUT durations series:";
  out << setw(5) << "[" << dur_1->value() << " " << dur_2->value() << " " << dur_3->value() << " " << dur_4->value() << " " ; 
  out << dur_5->value() << " " << dur_6->value() << " " << dur_7->value() << " " << dur_8->value() << " " ; 
  out << dur_9->value() << " " << dur_10->value() << " " << dur_11->value() << " " << dur_12->value() << "]" << "\n" ; 
  }
  
  if (outSerieDb->value() == 1) {
  out << setw(25) << "INPUT db series:";
  out << setw(5) << "[" << db_1->value() << " " << db_2->value() << " " << db_3->value() << " " << db_4->value() << " " ; 
  out << db_5->value() << " " << db_6->value() << " " << db_7->value() << " " << db_8->value() << " "  ; 
  out << db_9->value() << " " << db_10->value() << " " << db_11->value() << " " << db_12->value() << "]" << "\n" ; 
  }
  
  if (outSerieInstr->value() == 1) {
  out << setw(25) << "INPUT instr series:";
  out << setw(5) << "[" << instr_1->value() << " " << instr_2->value() << " " << instr_3->value() << " " << instr_4->value() << " " ; 
  out << instr_5->value() << " " << instr_6->value() << " " << instr_7->value() << " " << instr_8->value() << " " ; 
  out << instr_9->value() << " " << instr_10->value() << " " << instr_11->value() << " " << instr_12->value() << "]" << "\n" ; 
  }

if (loadMoreParams == 1) {
  if (outP6->value() == 1) {
  out << setw(25) << "INPUT p6 series:";
  out << setw(5) << "[" << p6_1->value() << " " << p6_2->value() << " " << p6_3->value() << " " << p6_4->value() << " " ; 
  out << p6_5->value() << " " << p6_6->value() << " " << p6_7->value() << " " << p6_8->value() << " " ; 
  out << p6_9->value() << " " << p6_10->value() << " " << p6_11->value() << " " << p6_12->value() << "]" << "\n" ; 
  }

  if (outP7->value() == 1) {
  out << setw(25) << "INPUT p7 series:";
  out << setw(5) << "[" << p7_1->value() << " " << p7_2->value() << " " << p7_3->value() << " " << p7_4->value() << " " ; 
  out << p7_5->value() << " " << p7_6->value() << " " << p7_7->value() << " " << p7_8->value() << " " ; 
  out << p7_9->value() << " " << p7_10->value() << " " << p7_11->value() << " " << p7_12->value() << "]" << "\n" ; 
  }

  if (outP8->value() == 1) {
  out << setw(25) << "INPUT p8 series:";
  out << setw(5) << "[" << p8_1->value() << " " << p8_2->value() << " " << p8_3->value() << " " << p8_4->value() << " " ; 
  out << p8_5->value() << " " << p8_6->value() << " " << p8_7->value() << " " << p8_8->value() << " " ; 
  out << p8_9->value() << " " << p8_10->value() << " " << p8_11->value() << " " << p8_12->value() << "]" << "\n" ; 
  }

  if (outP9->value() == 1) {
  out << setw(25) << "INPUT p9 series:";
  out << setw(5) << "[" << p9_1->value() << " " << p9_2->value() << " " << p9_3->value() << " " << p9_4->value() << " " ; 
  out << p9_5->value() << " " << p9_6->value() << " " << p9_7->value() << " " << p9_8->value() << " " ; 
  out << p9_9->value() << " " << p9_10->value() << " " << p9_11->value() << " " << p9_12->value() << "]" << "\n" ; 
  }

  if (outP10->value() == 1) {
  out << setw(25) << "INPUT p10 series:";
  out << setw(5) << "[" << p10_1->value() << " " << p10_2->value() << " " << p10_3->value() << " " << p10_4->value() << " " ; 
  out << p10_5->value() << " " << p10_6->value() << " " << p10_7->value() << " " << p10_8->value() << " " ; 
  out << p10_9->value() << " " << p10_10->value() << " " << p10_11->value() << " " << p10_12->value() << "]" << "\n" ; 
  }

  if (outP11->value() == 1) {
  out << setw(25) << "INPUT p11 series:";
  out << setw(5) << "[" << p11_1->value() << " " << p11_2->value() << " " << p11_3->value() << " " << p11_4->value() << " " ; 
  out << p11_5->value() << " " << p11_6->value() << " " << p11_7->value() << " " << p11_8->value() << " " ; 
  out << p11_9->value() << " " << p11_10->value() << " " << p11_11->value() << " " << p11_12->value() << "]" << "\n" ; 
  }

  if (outP12->value() == 1) {
  out << setw(25) << "INPUT p12 series:";
  out << setw(5) << "[" << p12_1->value() << " " << p12_2->value() << " " << p12_3->value() << " " << p12_4->value() << " " ; 
  out << p12_5->value() << " " << p12_6->value() << " " << p12_7->value() << " " << p12_8->value() << " " ; 
  out << p12_9->value() << " " << p12_10->value() << " " << p12_11->value() << " " << p12_12->value() << "]" << "\n" ; 
  }

  if (outP13->value() == 1) {
  out << setw(25) << "INPUT p13 series:";
  out << setw(5) << "[" << p13_1->value() << " " << p13_2->value() << " " << p13_3->value() << " " << p13_4->value() << " " ; 
  out << p13_5->value() << " " << p13_6->value() << " " << p13_7->value() << " " << p13_8->value() << " " ; 
  out << p13_9->value() << " " << p13_10->value() << " " << p13_11->value() << " " << p13_12->value() << "]" << "\n" ; 
  }

  if (outP14->value() == 1) {
  out << setw(25) << "INPUT p14 series:";
  out << setw(5) << "[" << p14_1->value() << " " << p14_2->value() << " " << p14_3->value() << " " << p14_4->value() << " " ; 
  out << p14_5->value() << " " << p14_6->value() << " " << p14_7->value() << " " << p14_8->value() << " " ; 
  out << p14_9->value() << " " << p14_10->value() << " " << p14_11->value() << " " << p14_12->value() << "]" << "\n" ; 
  }

  if (outP15->value() == 1) {
  out << setw(25) << "INPUT p15 series:";
  out << setw(5) << "[" << p15_1->value() << " " << p15_2->value() << " " << p15_3->value() << " " << p15_4->value() << " " ; 
  out << p15_5->value() << " " << p15_6->value() << " " << p15_7->value() << " " << p15_8->value() << " " ; 
  out << p15_9->value() << " " << p15_10->value() << " " << p15_11->value() << " " << p15_12->value() << "]" << "\n" ; 
  }
}

//////////////////////////////////////////////
if (loadMoreParams2 == 1)
{
  if (outP6b->value() == 1) {
  out << setw(25) << "INPUT p16 series:";
  out << setw(5) << "[" << p6_1b->value() << " " << p6_2b->value() << " " << p6_3b->value() << " " << p6_4b->value() << " " ; 
  out << p6_5b->value() << " " << p6_6b->value() << " " << p6_7b->value() << " " << p6_8b->value() << " " ; 
  out << p6_9b->value() << " " << p6_10b->value() << " " << p6_11b->value() << " " << p6_12b->value() << "]" << "\n" ; 
  }

  if (outP7b->value() == 1) {
  out << setw(25) << "INPUT p17 series:";
  out << setw(5) << "[" << p7_1b->value() << " " << p7_2b->value() << " " << p7_3b->value() << " " << p7_4b->value() << " " ; 
  out << p7_5b->value() << " " << p7_6b->value() << " " << p7_7b->value() << " " << p7_8b->value() << " " ; 
  out << p7_9b->value() << " " << p7_10b->value() << " " << p7_11b->value() << " " << p7_12b->value() << "]" << "\n" ; 
  }

  if (outP8b->value() == 1) {
  out << setw(25) << "INPUT p18 series:";
  out << setw(5) << "[" << p8_1b->value() << " " << p8_2b->value() << " " << p8_3b->value() << " " << p8_4b->value() << " " ; 
  out << p8_5b->value() << " " << p8_6b->value() << " " << p8_7b->value() << " " << p8_8b->value() << " " ; 
  out << p8_9b->value() << " " << p8_10b->value() << " " << p8_11b->value() << " " << p8_12b->value() << "]" << "\n" ; 
  }

  if (outP9b->value() == 1) {
  out << setw(25) << "INPUT p19 series:";
  out << setw(5) << "[" << p9_1b->value() << " " << p9_2b->value() << " " << p9_3b->value() << " " << p9_4b->value() << " " ; 
  out << p9_5b->value() << " " << p9_6b->value() << " " << p9_7b->value() << " " << p9_8b->value() << " " ; 
  out << p9_9b->value() << " " << p9_10b->value() << " " << p9_11b->value() << " " << p9_12b->value() << "]" << "\n" ; 
  }

  if (outP10b->value() == 1) {
  out << setw(25) << "INPUT p20 series:";
  out << setw(5) << "[" << p10_1b->value() << " " << p10_2b->value() << " " << p10_3b->value() << " " << p10_4b->value() << " " ; 
  out << p10_5b->value() << " " << p10_6b->value() << " " << p10_7b->value() << " " << p10_8b->value() << " " ; 
  out << p10_9b->value() << " " << p10_10b->value() << " " << p10_11b->value() << " " << p10_12b->value() << "]" << "\n" ; 
  }

  if (outP11b->value() == 1) {
  out << setw(25) << "INPUT p21 series:";
  out << setw(5) << "[" << p11_1b->value() << " " << p11_2b->value() << " " << p11_3b->value() << " " << p11_4b->value() << " " ; 
  out << p11_5b->value() << " " << p11_6b->value() << " " << p11_7b->value() << " " << p11_8b->value() << " " ; 
  out << p11_9b->value() << " " << p11_10b->value() << " " << p11_11b->value() << " " << p11_12b->value() << "]" << "\n" ; 
  }

  if (outP12b->value() == 1) {
  out << setw(25) << "INPUT p22 series:";
  out << setw(5) << "[" << p12_1b->value() << " " << p12_2b->value() << " " << p12_3b->value() << " " << p12_4b->value() << " " ; 
  out << p12_5b->value() << " " << p12_6b->value() << " " << p12_7b->value() << " " << p12_8b->value() << " " ; 
  out << p12_9b->value() << " " << p12_10b->value() << " " << p12_11b->value() << " " << p12_12b->value() << "]" << "\n" ; 
  }

  if (outP13b->value() == 1) {
  out << setw(25) << "INPUT p23 series:";
  out << setw(5) << "[" << p13_1b->value() << " " << p13_2b->value() << " " << p13_3b->value() << " " << p13_4b->value() << " " ; 
  out << p13_5b->value() << " " << p13_6b->value() << " " << p13_7b->value() << " " << p13_8b->value() << " " ; 
  out << p13_9b->value() << " " << p13_10b->value() << " " << p13_11b->value() << " " << p13_12b->value() << "]" << "\n" ; 
  }

  if (outP14b->value() == 1) {
  out << setw(25) << "INPUT p24 series:";
  out << setw(5) << "[" << p14_1b->value() << " " << p14_2b->value() << " " << p14_3b->value() << " " << p14_4b->value() << " " ; 
  out << p14_5b->value() << " " << p14_6b->value() << " " << p14_7b->value() << " " << p14_8b->value() << " " ; 
  out << p14_9b->value() << " " << p14_10b->value() << " " << p14_11b->value() << " " << p14_12b->value() << "]" << "\n" ; 
  }

  if (outP15b->value() == 1) {
  out << setw(25) << "INPUT p25 series:";
  out << setw(5) << "[" << p15_1b->value() << " " << p15_2b->value() << " " << p15_3b->value() << " " << p15_4b->value() << " " ; 
  out << p15_5b->value() << " " << p15_6b->value() << " " << p15_7b->value() << " " << p15_8b->value() << " " ; 
  out << p15_9b->value() << " " << p15_10b->value() << " " << p15_11b->value() << " " << p15_12b->value() << "]" << "\n" ; 
  }
}
//////////////////////////////////////////////
 
  if (outMinMaxPitch->value() == 1) {
  out << setw(25) << "min / max pitch value:" << setw(5) << "[" << min_pch->text() << "] " << "[" << max_pch->text() << "]" << "\n";
  }
  
  if (outMinMaxDur->value() == 1) {
  out << setw(25) << "min / max dur value:" << setw(5) << "[" << min_dur->text() << "] " << "[" << max_dur->text() << "]" << "\n";
  }
  
  if (outMinMaxDb->value() == 1) {
  out << setw(25) << "min / max db value:" << setw(5) << "[" << min_db->text() << "] " << "[" << max_db->text() << "]" << "\n";
  }
  
    if (outMinMaxInstr->value() == 1) {
    out << setw(25) << "min / max instr value:" << setw(5) << "[" << min_instr->text() << "] " << "[" << max_instr->text() << "]" << "\n";
    }
      
  
  if (outMinMaxPitch->value() == 1) {
  if (bt_enable_pch->value() == 1 )
  {
  out << setw(25) << "PITCH SERIE STATUS:" << setw(5) << "[" << "ACTIVE" << "]" << "\n";
  out << setw(25) << "pitch combination:" << setw(5) << "[" << auto_ctp->text() << "]" << "\n";
  }
  else if (bt_enable_pch->value() == 0 )
  {
  out << setw(25) << "PITCH SERIE STATUS:" << setw(5) << "[" << "INACTIVE" << "]" << "\n";
  out << setw(25) << "pitch combination:" << setw(5) << "[" << counterpointPitch->text() << "]" << "\n";
  }
  }
  
  if (outMinMaxDur->value() == 1) {
  if (bt_enable_dur->value() == 1 )
  {
  out << setw(25) << "DUR SERIE STATUS:" << setw(5) << "[" << "ACTIVE" << "]" << "\n";
  out << setw(25) << "dur combination:" << setw(5) << "[" << auto_ctp->text() << "]" << "\n";
  }
  else if (bt_enable_dur->value() == 0 )
  {
  out << setw(25) << "DUR SERIE STATUS:" << setw(5) << "[" << "INACTIVE" << "]" << "\n";
  out << setw(25) << "dur combination:" << setw(5) << "[" << counterpointDur->text() << "\n";
  }
  }


  if (outMinMaxDb->value() == 1) {
  if (bt_enable_db->value() == 1 )
  {
  out << setw(25) << "DB SERIE STATUS:" << setw(5) << "[" << "ACTIVE" << "]" << "\n";
  out << setw(25) << "db combination:" << setw(5) << "[" << auto_ctp->text() << "]" << "\n";
  }
  else if (bt_enable_db->value() == 0 )
  {
  out << setw(25) << "DB SERIE STATUS:" << setw(5) << "[" << "INACTIVE" << "]" << "\n";
  out << setw(25) << "db combination:" << setw(5) << "[" << counterpointDb->text() << "]" << "\n";
  }
  }

  if (outMinMaxInstr->value() == 1) {
  if (bt_enable_instr->value() == 1 )
  {
  out << setw(25) << "INSTR SERIE STATUS:" << setw(5) << "[" << "ACTIVE" << "]" << "\n";
  out << setw(25) << "instr combination:" << setw(5) << "[" << auto_ctp->text() << "]" << "\n";
  }
  else if (bt_enable_instr->value() == 0 )
  {
  out << setw(25) << "INSTR SERIE STATUS:" << setw(5) << "[" << "INACTIVE" << "]" << "\n";
  out << setw(25) << "instr combination:" << setw(5) << "[" << counterpointInstr->text() << "[" << "\n";
  }
  }
  
  if (outMinMaxAct->value() == 1) {
  if (bt_enable_act->value() == 1 )
  {
  out << setw(25) << "using act serie:" << setw(5) << "[" << "YES" << "]" << "\n";
  out << setw(25) << "INPUT act series:";
  out << setw(5) << "[" << act_1->value() << " " << act_2->value() << " " << act_3->value() << " " << act_4->value() << " " ; 
  out << act_5->value() << " " << act_6->value() << " " << act_7->value() << " " << act_8->value() << " " ; 
  out << act_9->value() << " " << act_10->value() << " " << act_11->value() << " " << act_12->value() << "]" << "\n" ; 
  }
  else if (bt_enable_act->value() == 0 )
  {
  out <<setw(25) << "using act serie:" << setw(5) << "[" << "NO" << "]" << "\n";
  }

  if (bt_calc_act->value() == 1 )
  {
  out << setw(25) << "ACT SERIE STATUS:" << setw(5) << "[" << "ACTIVE" << "]" << "\n";
  out << setw(25) << "act combination:" << setw(5) << "[" << auto_ctp->text() << "]" << "\n";
  }
  else if (bt_calc_act->value() == 0 )
  {
  out << setw(25) << "ACT SERIE STATUS:" << setw(5) << "[" << "INACTIVE" << "]" << "\n";
  out << setw(25) << "act combination:" << setw(5) << "[" << counterpointAct->text() << "]"  << "\n";
  }
  }

  out << "SERIES N. " << nserie->value() << " HAS BEEN GENERATED\n\n\n";
  out.close();
  
}

void scoreout_cb(Fl_Widget*,void*)
{
 out_setting();
 score_out();
}


