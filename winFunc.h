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
void retroPitch_cb(Fl_Widget*,void*);
void help_cb(Fl_Widget*,void*);
void new_pitch_set_();
void readPrefs();
void readPrefsSerie();
void writePrefs();
void writePrefsStart();
void writePrefsHelp();
void writePrefsColor();
void def_act();
void actTime();
void make_lt_cb(Fl_Widget*,void*);
void window_callback(Fl_Widget*, void*);
void out_setting();
void outAutoCroce();
void score_out();
void score_out_cb(Fl_Widget*,void*);
void init_all_series();
void writePrefsSerieParams();
void writePrefsSerieParams2();

//void make_help_window();

string namefile;

void defval()
{
  pch_1->value(8.0);
  pch_2->value(8.01);
  pch_3->value(8.02);
  pch_4->value(8.03);
  pch_5->value(8.04);
  pch_6->value(8.05);
  pch_7->value(8.06);
  pch_8->value(8.07);
  pch_9->value(8.08);
  pch_10->value(8.09);
  pch_11->value(8.10);
  pch_12->value(8.11);

  dur_1->value(.125);
  dur_2->value(.25);
  dur_3->value(.5);
  dur_4->value(1.0);
  dur_5->value(1.125);
  dur_6->value(1.25);
  dur_7->value(1.5);
  dur_8->value(1.75);
  dur_9->value(2.0);
  dur_10->value(2.25);
  dur_11->value(2.75);
  dur_12->value(3.5);

  db_1->value(40);
  db_2->value(45);
  db_3->value(50);
  db_4->value(55);
  db_5->value(60);
  db_6->value(65);
  db_7->value(70);
  db_8->value(75);
  db_9->value(80);
  db_10->value(85);
  db_11->value(90);
  db_12->value(95);

  instr_1->value(1);
  instr_2->value(1);
  instr_3->value(1);
  instr_4->value(1);
  instr_5->value(1);
  instr_6->value(1);
  instr_7->value(1);
  instr_8->value(1);
  instr_9->value(1);
  instr_10->value(1);
  instr_11->value(1);
  instr_12->value(1);
}


void def_act()
{
  window->redraw();
  ini_dur();  
  
  float defAct[12];
  int i;
  int g;
//   act = actVal->value();
  act = 0;

  defAct[0] = act;
  g = 0;

  if (bt_enable_act->value() == 0)
  {
    for(i = 1; i < 12; i++)
      {
          defAct[i] = act + init_dur[g];
          act = init_dur[g] + act;
          g++;
      }
  act_1->value(defAct[0]);
  act_2->value(defAct[1]);
  act_3->value(defAct[2]);
  act_4->value(defAct[3]);
  act_5->value(defAct[4]);
  act_6->value(defAct[5]);
  act_7->value(defAct[6]);
  act_8->value(defAct[7]);
  act_9->value(defAct[8]);
  act_10->value(defAct[9]);
  act_11->value(defAct[10]);
  act_12->value(defAct[11]);
  }
}

void def_act_no_zero()
{
  window->redraw();
  ini_dur();  
  
  float defAct[12];
  int i;
  int g;
//   act = actVal->value();
  //act = 0;

  defAct[0] = act;
  g = 0;

  if (bt_enable_act->value() == 0)
  {
    for(i = 1; i < 12; i++)
      {
          defAct[i] = act + init_dur[g];
          act = init_dur[g] + act;
          g++;
      }
  act_1->value(defAct[0]);
  act_2->value(defAct[1]);
  act_3->value(defAct[2]);
  act_4->value(defAct[3]);
  act_5->value(defAct[4]);
  act_6->value(defAct[5]);
  act_7->value(defAct[6]);
  act_8->value(defAct[7]);
  act_9->value(defAct[8]);
  act_10->value(defAct[9]);
  act_11->value(defAct[10]);
  act_12->value(defAct[11]);
  }
}

void defval_cb(Fl_Widget*,void*)
{
    def_act();
    defval();
}

void defact_cb(Fl_Widget*,void*)
{
    def_act();
}

void defact_no_zero_cb(Fl_Widget*,void*)
{
    def_act_no_zero();
}

void reset_cb(Fl_Widget*,void*)
{
  pch_1->value(0);
  pch_2->value(0);
  pch_3->value(0);
  pch_4->value(0);
  pch_5->value(0);
  pch_6->value(0);
  pch_7->value(0);
  pch_8->value(0);
  pch_9->value(0);
  pch_10->value(0);
  pch_11->value(0);
  pch_12->value(0);

  dur_1->value(0);
  dur_2->value(0);
  dur_3->value(0);
  dur_4->value(0);
  dur_5->value(0);
  dur_6->value(0);
  dur_7->value(0);
  dur_8->value(0);
  dur_9->value(0);
  dur_10->value(0);
  dur_11->value(0);
  dur_12->value(0);

  db_1->value(0);
  db_2->value(0);
  db_3->value(0);
  db_4->value(0);
  db_5->value(0);
  db_6->value(0);
  db_7->value(0);
  db_8->value(0);
  db_9->value(0);
  db_10->value(0);
  db_11->value(0);
  db_12->value(0);

  instr_1->value(0);
  instr_2->value(0);
  instr_3->value(0);
  instr_4->value(0);
  instr_5->value(0);
  instr_6->value(0);
  instr_7->value(0);
  instr_8->value(0);
  instr_9->value(0);
  instr_10->value(0);
  instr_11->value(0);
  instr_12->value(0);

  act_1->value(0);
  act_2->value(0);
  act_3->value(0);
  act_4->value(0);
  act_5->value(0);
  act_6->value(0);
  act_7->value(0);
  act_8->value(0);
  act_9->value(0);
  act_10->value(0);
  act_11->value(0);
  act_12->value(0);

  logic_a->value(0);
  logic_b->value(0);
  logic_c->value(0);

  show_formula->value(0);
}

void outAutoRetro()
{
  if ( bt_enable_pch->value() == 1 ){ retro_pitch();}
  if ( bt_enable_db->value() == 1 ){ retro_db();}
  if ( bt_enable_instr->value() == 1 ){ retro_instr();}
  if ( bt_enable_act->value() == 1 ){ retro_act();}
  if ( bt_enable_dur->value() == 1 ){ retro_dur();}
  if (loadMoreParams == 1)
  {
  if ( bt_enable_p6Ctp->value() == 1 ){ retro_p6(); writePrefsSerieParams();}
  if ( bt_enable_p7Ctp->value() == 1 ){ retro_p7(); writePrefsSerieParams();}
  if ( bt_enable_p8Ctp->value() == 1 ){ retro_p8(); writePrefsSerieParams();}
  if ( bt_enable_p9Ctp->value() == 1 ){ retro_p9(); writePrefsSerieParams();}
  if ( bt_enable_p10Ctp->value() == 1 ){ retro_p10(); writePrefsSerieParams();}
  if ( bt_enable_p11Ctp->value() == 1 ){ retro_p11(); writePrefsSerieParams();}
  if ( bt_enable_p12Ctp->value() == 1 ){ retro_p12(); writePrefsSerieParams();}
  if ( bt_enable_p13Ctp->value() == 1 ){ retro_p13(); writePrefsSerieParams();}
  if ( bt_enable_p14Ctp->value() == 1 ){ retro_p14(); writePrefsSerieParams();}
  if ( bt_enable_p15Ctp->value() == 1 ){ retro_p15(); writePrefsSerieParams();}
  }
  if (loadMoreParams2 == 1)
  {
  if ( bt_enable_p6bCtp->value() == 1 ){ retro_p6b(); writePrefsSerieParams2();}
  if ( bt_enable_p7bCtp->value() == 1 ){ retro_p7b(); writePrefsSerieParams2();}
  if ( bt_enable_p8bCtp->value() == 1 ){ retro_p8b(); writePrefsSerieParams2();}
  if ( bt_enable_p9bCtp->value() == 1 ){ retro_p9b(); writePrefsSerieParams2();}
  if ( bt_enable_p10bCtp->value() == 1 ){ retro_p10b(); writePrefsSerieParams2();}
  if ( bt_enable_p11bCtp->value() == 1 ){ retro_p11b(); writePrefsSerieParams2();}
  if ( bt_enable_p12bCtp->value() == 1 ){ retro_p12b(); writePrefsSerieParams2();}
  if ( bt_enable_p13bCtp->value() == 1 ){ retro_p13b(); writePrefsSerieParams2();}
  if ( bt_enable_p14bCtp->value() == 1 ){ retro_p14b(); writePrefsSerieParams2();}
  if ( bt_enable_p15bCtp->value() == 1 ){ retro_p15b(); writePrefsSerieParams2();}
  }
}

void outAutoRetro_cb(Fl_Widget*, void*)
{
    autoCounterpoint = 2;
    score_out();
}

void outAutoCroce()
{
  if ( bt_enable_pch->value() == 1 ){ croce_pitch();}
  if ( bt_enable_db->value() == 1 ){ croce_db();}
  if ( bt_enable_instr->value() == 1 ){ croce_instr();}
  if ( bt_enable_act->value() == 1 ){ croce_act();}
  if ( bt_enable_dur->value() == 1 ){ croce_dur();}
  if (loadMoreParams == 1)
  {
  if ( bt_enable_p6Ctp->value() == 1 ){ croce_p6(); writePrefsSerieParams();}
  if ( bt_enable_p7Ctp->value() == 1 ){ croce_p7(); writePrefsSerieParams();}
  if ( bt_enable_p8Ctp->value() == 1 ){ croce_p8(); writePrefsSerieParams();}
  if ( bt_enable_p9Ctp->value() == 1 ){ croce_p9(); writePrefsSerieParams();}
  if ( bt_enable_p10Ctp->value() == 1 ){ croce_p10(); writePrefsSerieParams();}
  if ( bt_enable_p11Ctp->value() == 1 ){ croce_p11(); writePrefsSerieParams();}
  if ( bt_enable_p12Ctp->value() == 1 ){ croce_p12(); writePrefsSerieParams();}
  if ( bt_enable_p13Ctp->value() == 1 ){ croce_p13(); writePrefsSerieParams();}
  if ( bt_enable_p14Ctp->value() == 1 ){ croce_p14(); writePrefsSerieParams();}
  if ( bt_enable_p15Ctp->value() == 1 ){ croce_p15(); writePrefsSerieParams();}
  }
  if (loadMoreParams2 == 1)
  {
  if ( bt_enable_p6bCtp->value() == 1 ){ croce_p6b(); writePrefsSerieParams2();}
  if ( bt_enable_p7bCtp->value() == 1 ){ croce_p7b(); writePrefsSerieParams2();}
  if ( bt_enable_p8bCtp->value() == 1 ){ croce_p8b(); writePrefsSerieParams2();}
  if ( bt_enable_p9bCtp->value() == 1 ){ croce_p9b(); writePrefsSerieParams2();}
  if ( bt_enable_p10bCtp->value() == 1 ){ croce_p10b(); writePrefsSerieParams2();}
  if ( bt_enable_p11bCtp->value() == 1 ){ croce_p11b(); writePrefsSerieParams2();}
  if ( bt_enable_p12bCtp->value() == 1 ){ croce_p12b(); writePrefsSerieParams2();}
  if ( bt_enable_p13bCtp->value() == 1 ){ croce_p13b(); writePrefsSerieParams2();}
  if ( bt_enable_p14bCtp->value() == 1 ){ croce_p14b(); writePrefsSerieParams2();}
  if ( bt_enable_p15bCtp->value() == 1 ){ croce_p15b(); writePrefsSerieParams2();}
  }
}

void outAutoCroce_cb(Fl_Widget*, void*)
{
    autoCounterpoint = 1;
    score_out();
}

void outAutoSlide()
{
  if ( bt_enable_pch->value() == 1 ){ slide_pitch();}
  if ( bt_enable_db->value() == 1 ){ slide_db();}
  if ( bt_enable_instr->value() == 1 ){ slide_instr();}
  if ( bt_enable_act->value() == 1 ){ slide_act();}
  if ( bt_enable_dur->value() == 1 ){ slide_dur();}
  if (loadMoreParams == 1)
  {
  if ( bt_enable_p6Ctp->value() == 1 ){ slide_p6(); writePrefsSerieParams();}
  if ( bt_enable_p7Ctp->value() == 1 ){ slide_p7(); writePrefsSerieParams();}
  if ( bt_enable_p8Ctp->value() == 1 ){ slide_p8(); writePrefsSerieParams();}
  if ( bt_enable_p9Ctp->value() == 1 ){ slide_p9(); writePrefsSerieParams();}
  if ( bt_enable_p10Ctp->value() == 1 ){ slide_p10(); writePrefsSerieParams();}
  if ( bt_enable_p11Ctp->value() == 1 ){ slide_p11(); writePrefsSerieParams();}
  if ( bt_enable_p12Ctp->value() == 1 ){ slide_p12(); writePrefsSerieParams();}
  if ( bt_enable_p13Ctp->value() == 1 ){ slide_p13(); writePrefsSerieParams();}
  if ( bt_enable_p14Ctp->value() == 1 ){ slide_p14(); writePrefsSerieParams();}
  if ( bt_enable_p15Ctp->value() == 1 ){ slide_p15(); writePrefsSerieParams();}
  }
  if (loadMoreParams2 == 1)
  {
  if ( bt_enable_p6bCtp->value() == 1 ){ slide_p6b(); writePrefsSerieParams2();}
  if ( bt_enable_p7bCtp->value() == 1 ){ slide_p7b(); writePrefsSerieParams2();}
  if ( bt_enable_p8bCtp->value() == 1 ){ slide_p8b(); writePrefsSerieParams2();}
  if ( bt_enable_p9bCtp->value() == 1 ){ slide_p9b(); writePrefsSerieParams2();}
  if ( bt_enable_p10bCtp->value() == 1 ){ slide_p10b(); writePrefsSerieParams2();}
  if ( bt_enable_p11bCtp->value() == 1 ){ slide_p11b(); writePrefsSerieParams2();}
  if ( bt_enable_p12bCtp->value() == 1 ){ slide_p12b(); writePrefsSerieParams2();}
  if ( bt_enable_p13bCtp->value() == 1 ){ slide_p13b(); writePrefsSerieParams2();}
  if ( bt_enable_p14bCtp->value() == 1 ){ slide_p14b(); writePrefsSerieParams2();}
  if ( bt_enable_p15bCtp->value() == 1 ){ slide_p15b(); writePrefsSerieParams2();}
  }
}

void outAutoSlide_cb(Fl_Widget*, void*)
{
    autoCounterpoint = 3;
    score_out();
}

void outAutoJumpone()
{
  if ( bt_enable_pch->value() == 1 ){ jumpone_pitch();}
  if ( bt_enable_db->value() == 1 ){ jumpone_db();}
  if ( bt_enable_instr->value() == 1 ){ jumpone_instr();}
  if ( bt_enable_act->value() == 1 ){ jumpone_act();}
  if ( bt_enable_dur->value() == 1 ){ jumpone_dur();}
  if (loadMoreParams == 1)
  {
  if ( bt_enable_p6Ctp->value() == 1 ){ jumpone_p6(); writePrefsSerieParams();}
  if ( bt_enable_p7Ctp->value() == 1 ){ jumpone_p7(); writePrefsSerieParams();}
  if ( bt_enable_p8Ctp->value() == 1 ){ jumpone_p8(); writePrefsSerieParams();}
  if ( bt_enable_p9Ctp->value() == 1 ){ jumpone_p9(); writePrefsSerieParams();}
  if ( bt_enable_p10Ctp->value() == 1 ){ jumpone_p10(); writePrefsSerieParams();}
  if ( bt_enable_p11Ctp->value() == 1 ){ jumpone_p11(); writePrefsSerieParams();}
  if ( bt_enable_p12Ctp->value() == 1 ){ jumpone_p12(); writePrefsSerieParams();}
  if ( bt_enable_p13Ctp->value() == 1 ){ jumpone_p13(); writePrefsSerieParams();}
  if ( bt_enable_p14Ctp->value() == 1 ){ jumpone_p14(); writePrefsSerieParams();}
  if ( bt_enable_p15Ctp->value() == 1 ){ jumpone_p15(); writePrefsSerieParams();}
  }
  if (loadMoreParams2 == 1)
  {
  if ( bt_enable_p6bCtp->value() == 1 ){ jumpone_p6b(); writePrefsSerieParams2();}
  if ( bt_enable_p7bCtp->value() == 1 ){ jumpone_p7b(); writePrefsSerieParams2();}
  if ( bt_enable_p8bCtp->value() == 1 ){ jumpone_p8b(); writePrefsSerieParams2();}
  if ( bt_enable_p9bCtp->value() == 1 ){ jumpone_p9b(); writePrefsSerieParams2();}
  if ( bt_enable_p10bCtp->value() == 1 ){ jumpone_p10b(); writePrefsSerieParams2();}
  if ( bt_enable_p11bCtp->value() == 1 ){ jumpone_p11b(); writePrefsSerieParams2();}
  if ( bt_enable_p12bCtp->value() == 1 ){ jumpone_p12b(); writePrefsSerieParams2();}
  if ( bt_enable_p13bCtp->value() == 1 ){ jumpone_p13b(); writePrefsSerieParams2();}
  if ( bt_enable_p14bCtp->value() == 1 ){ jumpone_p14b(); writePrefsSerieParams2();}
  if ( bt_enable_p15bCtp->value() == 1 ){ jumpone_p15b(); writePrefsSerieParams2();}
  }
}

void outAutoJumpone_cb(Fl_Widget*, void*)
{
    autoCounterpoint = 4;
    score_out();
}
/////////////////////////////////////////////////////

void select_setting()
{
     txt_seriePath->value(out_File->text());
}

void select_setting_cb(Fl_Widget*,void*)
{
    select_setting();
    readPrefs();
    readPrefsSerie();
    ini_act();
    //bt_writePrefs->activate();
    if (bt_enable_act->value() == 0)
    {
    def_act();
    }
}

void window_callback(Fl_Widget*, void*) {
  switch (fl_choice("Are you sure you want to close csmusgen?", "Yes", "No", 0)) {
//  writePrefsStart();
//  writePrefsHelp();
  case 0: exit(0);
  case 1: return;
}
}

void actTime()
{
    
    //t_1->value(actVal->value());
    act_2->value(act_1->value() + dur_1->value());
    act_3->value(act_2->value() + dur_2->value());
    act_4->value(act_3->value() + dur_3->value());
    act_5->value(act_4->value() + dur_4->value());
    act_6->value(act_5->value() + dur_5->value());
    act_7->value(act_6->value() + dur_6->value());
    act_8->value(act_7->value() + dur_7->value());
    act_9->value(act_8->value() + dur_8->value());
    act_10->value(act_9->value() + dur_9->value());
    act_11->value(act_10->value() + dur_10->value());
    act_12->value(act_11->value() + dur_11->value());
}

void err_lim()
{
    int l_dur = max_dur->value() - min_dur->value();
    int l_pch = max_pch->value() - min_pch->value();
    int l_db = max_db->value() - min_db->value();
    int l_instr = max_instr->value() - min_instr->value();
    
    if ( l_dur <= 1 )
    {
    max_dur->value(min_dur->value()+2);
    }
    if ( l_pch <= 1 )
    {
    max_pch->value(min_pch->value()+2);
    }
    if ( l_db <= 1 )
    {
    max_db->value(min_db->value()+2);
    }
    if ( l_instr <= 1 )
    {
    max_instr->value(min_instr->value()+2);
    }
}

void err_lim_cb(Fl_Widget*,void*)
{
    err_lim();
}

void subset()
{
    contrappunto ob;
    if (bt_enable_pch->value()==1)
    {
    ob.subset_pitch();
    }
    if (bt_enable_dur->value()==1)
    {
    ob.subset_dur();
    }
    if (bt_enable_db->value()==1)
    {
    ob.subset_db();
    }
    if (bt_enable_instr->value()==1)
    {
    ob.subset_instr();
    }
    if (bt_enable_act->value()==1)
    {
    ob.subset_act();
    }
}

void subset_cb(Fl_Widget*, void*)
{
    subset();
}

void setColor()
{   
    cls_win->color(COLOR);
    cls_win->redraw();

    window->color(COLOR);
    window->redraw();
    genFrame->color(COLOR);
    nserie->color(COLOR);
    menuBar->color(COLOR);
}

void setColor_cb(Fl_Widget*,void*)
{
setColor();
writePrefsColor();
}

void countColor()
{
    COLOR = (int)colorCounter->value();
    colorBox->color(COLOR);
    cls_win->redraw();
}

void countColor_cb(Fl_Widget*,void*)
{
    countColor();
}

void resetColor_cb(Fl_Widget*,void*)
{
    colorCounter->value(97);
    countColor();
}

void colorInc_cb(Fl_Widget*,void*)
{
    if ( colorCounter->value() < 256 ) {
    colorCounter->value(colorCounter->value() + 1);
    }
    else
    {
    colorCounter->value(256);
    }
    countColor();
}

void colorDec_cb(Fl_Widget*,void*)
{
    if (colorCounter->value() > 0 ) {
    colorCounter->value(colorCounter->value() - 1);
    }
    else
    {
    colorCounter->value(0);
    }
    countColor();
}


void actSerieAdd()
{
    act_1->value(act_1->value() + inp_incDecs->value() );
    act_2->value(act_2->value() + inp_incDecs->value() );
    act_3->value(act_3->value() + inp_incDecs->value() );
    act_4->value(act_4->value() + inp_incDecs->value() );
    act_5->value(act_5->value() + inp_incDecs->value() );
    act_6->value(act_6->value() + inp_incDecs->value() );
    act_7->value(act_7->value() + inp_incDecs->value() );
    act_8->value(act_8->value() + inp_incDecs->value() );
    act_9->value(act_9->value() + inp_incDecs->value() );
    act_10->value(act_10->value() + inp_incDecs->value() );
    act_11->value(act_11->value() + inp_incDecs->value() );
    act_12->value(act_12->value() + inp_incDecs->value() );
}

void actSerieSub()
{
    act_1->value(act_1->value() - inp_incDecs->value() );
    act_2->value(act_2->value() - inp_incDecs->value() );
    act_3->value(act_3->value() - inp_incDecs->value() );
    act_4->value(act_4->value() - inp_incDecs->value() );
    act_5->value(act_5->value() - inp_incDecs->value() );
    act_6->value(act_6->value() - inp_incDecs->value() );
    act_7->value(act_7->value() - inp_incDecs->value() );
    act_8->value(act_8->value() - inp_incDecs->value() );
    act_9->value(act_9->value() - inp_incDecs->value() );
    act_10->value(act_10->value() - inp_incDecs->value() );
    act_11->value(act_11->value() - inp_incDecs->value() );
    act_12->value(act_12->value() - inp_incDecs->value() );
}

void actSerieMlt()
{
    act_1->value(act_1->value() * inp_incDecs->value() );
    act_2->value(act_2->value() * inp_incDecs->value() );
    act_3->value(act_3->value() * inp_incDecs->value() );
    act_4->value(act_4->value() * inp_incDecs->value() );
    act_5->value(act_5->value() * inp_incDecs->value() );
    act_6->value(act_6->value() * inp_incDecs->value() );
    act_7->value(act_7->value() * inp_incDecs->value() );
    act_8->value(act_8->value() * inp_incDecs->value() );
    act_9->value(act_9->value() * inp_incDecs->value() );
    act_10->value(act_10->value() * inp_incDecs->value() );
    act_11->value(act_11->value() * inp_incDecs->value() );
    act_12->value(act_12->value() * inp_incDecs->value() );
}

void actSerieDiv()
{
    act_1->value(act_1->value() / inp_incDecs->value() );
    act_2->value(act_2->value() / inp_incDecs->value() );
    act_3->value(act_3->value() / inp_incDecs->value() );
    act_4->value(act_4->value() / inp_incDecs->value() );
    act_5->value(act_5->value() / inp_incDecs->value() );
    act_6->value(act_6->value() / inp_incDecs->value() );
    act_7->value(act_7->value() / inp_incDecs->value() );
    act_8->value(act_8->value() / inp_incDecs->value() );
    act_9->value(act_9->value() / inp_incDecs->value() );
    act_10->value(act_10->value() / inp_incDecs->value() );
    act_11->value(act_11->value() / inp_incDecs->value() );
    act_12->value(act_12->value() / inp_incDecs->value() );
}

void pitchSerieAdd()
{
    pch_1->value(pch_1->value() + inp_incDecs->value() );
    pch_2->value(pch_2->value() + inp_incDecs->value() );
    pch_3->value(pch_3->value() + inp_incDecs->value() );
    pch_4->value(pch_4->value() + inp_incDecs->value() );
    pch_5->value(pch_5->value() + inp_incDecs->value() );
    pch_6->value(pch_6->value() + inp_incDecs->value() );
    pch_7->value(pch_7->value() + inp_incDecs->value() );
    pch_8->value(pch_8->value() + inp_incDecs->value() );
    pch_9->value(pch_9->value() + inp_incDecs->value() );
    pch_10->value(pch_10->value() + inp_incDecs->value() );
    pch_11->value(pch_11->value() + inp_incDecs->value() );
    pch_12->value(pch_12->value() + inp_incDecs->value() );
}

void pitchSerieSub()
{
    pch_1->value(pch_1->value() - inp_incDecs->value() );
    pch_2->value(pch_2->value() - inp_incDecs->value() );
    pch_3->value(pch_3->value() - inp_incDecs->value() );
    pch_4->value(pch_4->value() - inp_incDecs->value() );
    pch_5->value(pch_5->value() - inp_incDecs->value() );
    pch_6->value(pch_6->value() - inp_incDecs->value() );
    pch_7->value(pch_7->value() - inp_incDecs->value() );
    pch_8->value(pch_8->value() - inp_incDecs->value() );
    pch_9->value(pch_9->value() - inp_incDecs->value() );
    pch_10->value(pch_10->value() - inp_incDecs->value() );
    pch_11->value(pch_11->value() - inp_incDecs->value() );
    pch_12->value(pch_12->value() - inp_incDecs->value() );
}

void pitchSerieMlt()
{
    pch_1->value(pch_1->value() * inp_incDecs->value() );
    pch_2->value(pch_2->value() * inp_incDecs->value() );
    pch_3->value(pch_3->value() * inp_incDecs->value() );
    pch_4->value(pch_4->value() * inp_incDecs->value() );
    pch_5->value(pch_5->value() * inp_incDecs->value() );
    pch_6->value(pch_6->value() * inp_incDecs->value() );
    pch_7->value(pch_7->value() * inp_incDecs->value() );
    pch_8->value(pch_8->value() * inp_incDecs->value() );
    pch_9->value(pch_9->value() * inp_incDecs->value() );
    pch_10->value(pch_10->value() * inp_incDecs->value() );
    pch_11->value(pch_11->value() * inp_incDecs->value() );
    pch_12->value(pch_12->value() * inp_incDecs->value() );
}

void pitchSerieDiv()
{
    pch_1->value(pch_1->value() / inp_incDecs->value() );
    pch_2->value(pch_2->value() / inp_incDecs->value() );
    pch_3->value(pch_3->value() / inp_incDecs->value() );
    pch_4->value(pch_4->value() / inp_incDecs->value() );
    pch_5->value(pch_5->value() / inp_incDecs->value() );
    pch_6->value(pch_6->value() / inp_incDecs->value() );
    pch_7->value(pch_7->value() / inp_incDecs->value() );
    pch_8->value(pch_8->value() / inp_incDecs->value() );
    pch_9->value(pch_9->value() / inp_incDecs->value() );
    pch_10->value(pch_10->value() / inp_incDecs->value() );
    pch_11->value(pch_11->value() / inp_incDecs->value() );
    pch_12->value(pch_12->value() / inp_incDecs->value() );
}

void durSerieAdd()
{
    dur_1->value(dur_1->value() + inp_incDecs->value() );
    dur_2->value(dur_2->value() + inp_incDecs->value() );
    dur_3->value(dur_3->value() + inp_incDecs->value() );
    dur_4->value(dur_4->value() + inp_incDecs->value() );
    dur_5->value(dur_5->value() + inp_incDecs->value() );
    dur_6->value(dur_6->value() + inp_incDecs->value() );
    dur_7->value(dur_7->value() + inp_incDecs->value() );
    dur_8->value(dur_8->value() + inp_incDecs->value() );
    dur_9->value(dur_9->value() + inp_incDecs->value() );
    dur_10->value(dur_10->value() + inp_incDecs->value() );
    dur_11->value(dur_11->value() + inp_incDecs->value() );
    dur_12->value(dur_12->value() + inp_incDecs->value() );
}

void durSerieSub()
{
    dur_1->value(dur_1->value() - inp_incDecs->value() );
    dur_2->value(dur_2->value() - inp_incDecs->value() );
    dur_3->value(dur_3->value() - inp_incDecs->value() );
    dur_4->value(dur_4->value() - inp_incDecs->value() );
    dur_5->value(dur_5->value() - inp_incDecs->value() );
    dur_6->value(dur_6->value() - inp_incDecs->value() );
    dur_7->value(dur_7->value() - inp_incDecs->value() );
    dur_8->value(dur_8->value() - inp_incDecs->value() );
    dur_9->value(dur_9->value() - inp_incDecs->value() );
    dur_10->value(dur_10->value() - inp_incDecs->value() );
    dur_11->value(dur_11->value() - inp_incDecs->value() );
    dur_12->value(dur_12->value() - inp_incDecs->value() );
}

void durSerieMlt()
{
    dur_1->value(dur_1->value() * inp_incDecs->value() );
    dur_2->value(dur_2->value() * inp_incDecs->value() );
    dur_3->value(dur_3->value() * inp_incDecs->value() );
    dur_4->value(dur_4->value() * inp_incDecs->value() );
    dur_5->value(dur_5->value() * inp_incDecs->value() );
    dur_6->value(dur_6->value() * inp_incDecs->value() );
    dur_7->value(dur_7->value() * inp_incDecs->value() );
    dur_8->value(dur_8->value() * inp_incDecs->value() );
    dur_9->value(dur_9->value() * inp_incDecs->value() );
    dur_10->value(dur_10->value() * inp_incDecs->value() );
    dur_11->value(dur_11->value() * inp_incDecs->value() );
    dur_12->value(dur_12->value() * inp_incDecs->value() );
}

void durSerieDiv()
{
    dur_1->value(dur_1->value() / inp_incDecs->value() );
    dur_2->value(dur_2->value() / inp_incDecs->value() );
    dur_3->value(dur_3->value() / inp_incDecs->value() );
    dur_4->value(dur_4->value() / inp_incDecs->value() );
    dur_5->value(dur_5->value() / inp_incDecs->value() );
    dur_6->value(dur_6->value() / inp_incDecs->value() );
    dur_7->value(dur_7->value() / inp_incDecs->value() );
    dur_8->value(dur_8->value() / inp_incDecs->value() );
    dur_9->value(dur_9->value() / inp_incDecs->value() );
    dur_10->value(dur_10->value() / inp_incDecs->value() );
    dur_11->value(dur_11->value() / inp_incDecs->value() );
    dur_12->value(dur_12->value() / inp_incDecs->value() );
}

void dbSerieAdd()
{
    db_1->value(db_1->value() + inp_incDecs->value() );
    db_2->value(db_2->value() + inp_incDecs->value() );
    db_3->value(db_3->value() + inp_incDecs->value() );
    db_4->value(db_4->value() + inp_incDecs->value() );
    db_5->value(db_5->value() + inp_incDecs->value() );
    db_6->value(db_6->value() + inp_incDecs->value() );
    db_7->value(db_7->value() + inp_incDecs->value() );
    db_8->value(db_8->value() + inp_incDecs->value() );
    db_9->value(db_9->value() + inp_incDecs->value() );
    db_10->value(db_10->value() + inp_incDecs->value() );
    db_11->value(db_11->value() + inp_incDecs->value() );
    db_12->value(db_12->value() + inp_incDecs->value() );
}

void dbSerieSub()
{
    db_1->value(db_1->value() - inp_incDecs->value() );
    db_2->value(db_2->value() - inp_incDecs->value() );
    db_3->value(db_3->value() - inp_incDecs->value() );
    db_4->value(db_4->value() - inp_incDecs->value() );
    db_5->value(db_5->value() - inp_incDecs->value() );
    db_6->value(db_6->value() - inp_incDecs->value() );
    db_7->value(db_7->value() - inp_incDecs->value() );
    db_8->value(db_8->value() - inp_incDecs->value() );
    db_9->value(db_9->value() - inp_incDecs->value() );
    db_10->value(db_10->value() - inp_incDecs->value() );
    db_11->value(db_11->value() - inp_incDecs->value() );
    db_12->value(db_12->value() - inp_incDecs->value() );
}

void dbSerieMlt()
{
    db_1->value(db_1->value() * inp_incDecs->value() );
    db_2->value(db_2->value() * inp_incDecs->value() );
    db_3->value(db_3->value() * inp_incDecs->value() );
    db_4->value(db_4->value() * inp_incDecs->value() );
    db_5->value(db_5->value() * inp_incDecs->value() );
    db_6->value(db_6->value() * inp_incDecs->value() );
    db_7->value(db_7->value() * inp_incDecs->value() );
    db_8->value(db_8->value() * inp_incDecs->value() );
    db_9->value(db_9->value() * inp_incDecs->value() );
    db_10->value(db_10->value() * inp_incDecs->value() );
    db_11->value(db_11->value() * inp_incDecs->value() );
    db_12->value(db_12->value() * inp_incDecs->value() );
}

void dbSerieDiv()
{
    db_1->value(db_1->value() / inp_incDecs->value() );
    db_2->value(db_2->value() / inp_incDecs->value() );
    db_3->value(db_3->value() / inp_incDecs->value() );
    db_4->value(db_4->value() / inp_incDecs->value() );
    db_5->value(db_5->value() / inp_incDecs->value() );
    db_6->value(db_6->value() / inp_incDecs->value() );
    db_7->value(db_7->value() / inp_incDecs->value() );
    db_8->value(db_8->value() / inp_incDecs->value() );
    db_9->value(db_9->value() / inp_incDecs->value() );
    db_10->value(db_10->value() / inp_incDecs->value() );
    db_11->value(db_11->value() / inp_incDecs->value() );
    db_12->value(db_12->value() / inp_incDecs->value() );
}

void instrSerieAdd()
{
    instr_1->value(instr_1->value() + inp_incDecs->value() );
    instr_2->value(instr_2->value() + inp_incDecs->value() );
    instr_3->value(instr_3->value() + inp_incDecs->value() );
    instr_4->value(instr_4->value() + inp_incDecs->value() );
    instr_5->value(instr_5->value() + inp_incDecs->value() );
    instr_6->value(instr_6->value() + inp_incDecs->value() );
    instr_7->value(instr_7->value() + inp_incDecs->value() );
    instr_8->value(instr_8->value() + inp_incDecs->value() );
    instr_9->value(instr_9->value() + inp_incDecs->value() );
    instr_10->value(instr_10->value() + inp_incDecs->value() );
    instr_11->value(instr_11->value() + inp_incDecs->value() );
    instr_12->value(instr_12->value() + inp_incDecs->value() );
}

void instrSerieSub()
{
    instr_1->value(instr_1->value() - inp_incDecs->value() );
    instr_2->value(instr_2->value() - inp_incDecs->value() );
    instr_3->value(instr_3->value() - inp_incDecs->value() );
    instr_4->value(instr_4->value() - inp_incDecs->value() );
    instr_5->value(instr_5->value() - inp_incDecs->value() );
    instr_6->value(instr_6->value() - inp_incDecs->value() );
    instr_7->value(instr_7->value() - inp_incDecs->value() );
    instr_8->value(instr_8->value() - inp_incDecs->value() );
    instr_9->value(instr_9->value() - inp_incDecs->value() );
    instr_10->value(instr_10->value() - inp_incDecs->value() );
    instr_11->value(instr_11->value() - inp_incDecs->value() );
    instr_12->value(instr_12->value() - inp_incDecs->value() );
}

void instrSerieMlt()
{
    instr_1->value(instr_1->value() * inp_incDecs->value() );
    instr_2->value(instr_2->value() * inp_incDecs->value() );
    instr_3->value(instr_3->value() * inp_incDecs->value() );
    instr_4->value(instr_4->value() * inp_incDecs->value() );
    instr_5->value(instr_5->value() * inp_incDecs->value() );
    instr_6->value(instr_6->value() * inp_incDecs->value() );
    instr_7->value(instr_7->value() * inp_incDecs->value() );
    instr_8->value(instr_8->value() * inp_incDecs->value() );
    instr_9->value(instr_9->value() * inp_incDecs->value() );
    instr_10->value(instr_10->value() * inp_incDecs->value() );
    instr_11->value(instr_11->value() * inp_incDecs->value() );
    instr_12->value(instr_12->value() * inp_incDecs->value() );
}
void instrSerieDiv()
{
    instr_1->value(instr_1->value() / inp_incDecs->value() );
    instr_2->value(instr_2->value() / inp_incDecs->value() );
    instr_3->value(instr_3->value() / inp_incDecs->value() );
    instr_4->value(instr_4->value() / inp_incDecs->value() );
    instr_5->value(instr_5->value() / inp_incDecs->value() );
    instr_6->value(instr_6->value() / inp_incDecs->value() );
    instr_7->value(instr_7->value() / inp_incDecs->value() );
    instr_8->value(instr_8->value() / inp_incDecs->value() );
    instr_9->value(instr_9->value() / inp_incDecs->value() );
    instr_10->value(instr_10->value() / inp_incDecs->value() );
    instr_11->value(instr_11->value() / inp_incDecs->value() );
    instr_12->value(instr_12->value() / inp_incDecs->value() );
}

void p6SerieAdd()
{
    p6_1->value(p6_1->value() + inp_incDecs->value() );
    p6_2->value(p6_2->value() + inp_incDecs->value() );
    p6_3->value(p6_3->value() + inp_incDecs->value() );
    p6_4->value(p6_4->value() + inp_incDecs->value() );
    p6_5->value(p6_5->value() + inp_incDecs->value() );
    p6_6->value(p6_6->value() + inp_incDecs->value() );
    p6_7->value(p6_7->value() + inp_incDecs->value() );
    p6_8->value(p6_8->value() + inp_incDecs->value() );
    p6_9->value(p6_9->value() + inp_incDecs->value() );
    p6_10->value(p6_10->value() + inp_incDecs->value() );
    p6_11->value(p6_11->value() + inp_incDecs->value() );
    p6_12->value(p6_12->value() + inp_incDecs->value() );
}

void p6SerieSub()
{
    p6_1->value(p6_1->value() - inp_incDecs->value() );
    p6_2->value(p6_2->value() - inp_incDecs->value() );
    p6_3->value(p6_3->value() - inp_incDecs->value() );
    p6_4->value(p6_4->value() - inp_incDecs->value() );
    p6_5->value(p6_5->value() - inp_incDecs->value() );
    p6_6->value(p6_6->value() - inp_incDecs->value() );
    p6_7->value(p6_7->value() - inp_incDecs->value() );
    p6_8->value(p6_8->value() - inp_incDecs->value() );
    p6_9->value(p6_9->value() - inp_incDecs->value() );
    p6_10->value(p6_10->value() - inp_incDecs->value() );
    p6_11->value(p6_11->value() - inp_incDecs->value() );
    p6_12->value(p6_12->value() - inp_incDecs->value() );
}

void p6SerieMlt()
{
    p6_1->value(p6_1->value() * inp_incDecs->value() );
    p6_2->value(p6_2->value() * inp_incDecs->value() );
    p6_3->value(p6_3->value() * inp_incDecs->value() );
    p6_4->value(p6_4->value() * inp_incDecs->value() );
    p6_5->value(p6_5->value() * inp_incDecs->value() );
    p6_6->value(p6_6->value() * inp_incDecs->value() );
    p6_7->value(p6_7->value() * inp_incDecs->value() );
    p6_8->value(p6_8->value() * inp_incDecs->value() );
    p6_9->value(p6_9->value() * inp_incDecs->value() );
    p6_10->value(p6_10->value() * inp_incDecs->value() );
    p6_11->value(p6_11->value() * inp_incDecs->value() );
    p6_12->value(p6_12->value() * inp_incDecs->value() );
}

void p6SerieDiv()
{
    p6_1->value(p6_1->value() / inp_incDecs->value() );
    p6_2->value(p6_2->value() / inp_incDecs->value() );
    p6_3->value(p6_3->value() / inp_incDecs->value() );
    p6_4->value(p6_4->value() / inp_incDecs->value() );
    p6_5->value(p6_5->value() / inp_incDecs->value() );
    p6_6->value(p6_6->value() / inp_incDecs->value() );
    p6_7->value(p6_7->value() / inp_incDecs->value() );
    p6_8->value(p6_8->value() / inp_incDecs->value() );
    p6_9->value(p6_9->value() / inp_incDecs->value() );
    p6_10->value(p6_10->value() / inp_incDecs->value() );
    p6_11->value(p6_11->value() / inp_incDecs->value() );
    p6_12->value(p6_12->value() / inp_incDecs->value() );
}

void p7SerieAdd()
{
    p7_1->value(p7_1->value() + inp_incDecs->value() );
    p7_2->value(p7_2->value() + inp_incDecs->value() );
    p7_3->value(p7_3->value() + inp_incDecs->value() );
    p7_4->value(p7_4->value() + inp_incDecs->value() );
    p7_5->value(p7_5->value() + inp_incDecs->value() );
    p7_6->value(p7_6->value() + inp_incDecs->value() );
    p7_7->value(p7_7->value() + inp_incDecs->value() );
    p7_8->value(p7_8->value() + inp_incDecs->value() );
    p7_9->value(p7_9->value() + inp_incDecs->value() );
    p7_10->value(p7_10->value() + inp_incDecs->value() );
    p7_11->value(p7_11->value() + inp_incDecs->value() );
    p7_12->value(p7_12->value() + inp_incDecs->value() );
}

void p7SerieSub()
{
    p7_1->value(p7_1->value() - inp_incDecs->value() );
    p7_2->value(p7_2->value() - inp_incDecs->value() );
    p7_3->value(p7_3->value() - inp_incDecs->value() );
    p7_4->value(p7_4->value() - inp_incDecs->value() );
    p7_5->value(p7_5->value() - inp_incDecs->value() );
    p7_6->value(p7_6->value() - inp_incDecs->value() );
    p7_7->value(p7_7->value() - inp_incDecs->value() );
    p7_8->value(p7_8->value() - inp_incDecs->value() );
    p7_9->value(p7_9->value() - inp_incDecs->value() );
    p7_10->value(p7_10->value() - inp_incDecs->value() );
    p7_11->value(p7_11->value() - inp_incDecs->value() );
    p7_12->value(p7_12->value() - inp_incDecs->value() );
}

void p7SerieMlt()
{
    p7_1->value(p7_1->value() * inp_incDecs->value() );
    p7_2->value(p7_2->value() * inp_incDecs->value() );
    p7_3->value(p7_3->value() * inp_incDecs->value() );
    p7_4->value(p7_4->value() * inp_incDecs->value() );
    p7_5->value(p7_5->value() * inp_incDecs->value() );
    p7_6->value(p7_6->value() * inp_incDecs->value() );
    p7_7->value(p7_7->value() * inp_incDecs->value() );
    p7_8->value(p7_8->value() * inp_incDecs->value() );
    p7_9->value(p7_9->value() * inp_incDecs->value() );
    p7_10->value(p7_10->value() * inp_incDecs->value() );
    p7_11->value(p7_11->value() * inp_incDecs->value() );
    p7_12->value(p7_12->value() * inp_incDecs->value() );
}

void p7SerieDiv()
{
    p7_1->value(p7_1->value() / inp_incDecs->value() );
    p7_2->value(p7_2->value() / inp_incDecs->value() );
    p7_3->value(p7_3->value() / inp_incDecs->value() );
    p7_4->value(p7_4->value() / inp_incDecs->value() );
    p7_5->value(p7_5->value() / inp_incDecs->value() );
    p7_6->value(p7_6->value() / inp_incDecs->value() );
    p7_7->value(p7_7->value() / inp_incDecs->value() );
    p7_8->value(p7_8->value() / inp_incDecs->value() );
    p7_9->value(p7_9->value() / inp_incDecs->value() );
    p7_10->value(p7_10->value() / inp_incDecs->value() );
    p7_11->value(p7_11->value() / inp_incDecs->value() );
    p7_12->value(p7_12->value() / inp_incDecs->value() );
}

void p8SerieAdd()
{
    p8_1->value(p8_1->value() + inp_incDecs->value() );
    p8_2->value(p8_2->value() + inp_incDecs->value() );
    p8_3->value(p8_3->value() + inp_incDecs->value() );
    p8_4->value(p8_4->value() + inp_incDecs->value() );
    p8_5->value(p8_5->value() + inp_incDecs->value() );
    p8_6->value(p8_6->value() + inp_incDecs->value() );
    p8_7->value(p8_7->value() + inp_incDecs->value() );
    p8_8->value(p8_8->value() + inp_incDecs->value() );
    p8_9->value(p8_9->value() + inp_incDecs->value() );
    p8_10->value(p8_10->value() + inp_incDecs->value() );
    p8_11->value(p8_11->value() + inp_incDecs->value() );
    p8_12->value(p8_12->value() + inp_incDecs->value() );
}

void p8SerieSub()
{
    p8_1->value(p8_1->value() - inp_incDecs->value() );
    p8_2->value(p8_2->value() - inp_incDecs->value() );
    p8_3->value(p8_3->value() - inp_incDecs->value() );
    p8_4->value(p8_4->value() - inp_incDecs->value() );
    p8_5->value(p8_5->value() - inp_incDecs->value() );
    p8_6->value(p8_6->value() - inp_incDecs->value() );
    p8_7->value(p8_7->value() - inp_incDecs->value() );
    p8_8->value(p8_8->value() - inp_incDecs->value() );
    p8_9->value(p8_9->value() - inp_incDecs->value() );
    p8_10->value(p8_10->value() - inp_incDecs->value() );
    p8_11->value(p8_11->value() - inp_incDecs->value() );
    p8_12->value(p8_12->value() - inp_incDecs->value() );
}

void p8SerieMlt()
{
    p8_1->value(p8_1->value() * inp_incDecs->value() );
    p8_2->value(p8_2->value() * inp_incDecs->value() );
    p8_3->value(p8_3->value() * inp_incDecs->value() );
    p8_4->value(p8_4->value() * inp_incDecs->value() );
    p8_5->value(p8_5->value() * inp_incDecs->value() );
    p8_6->value(p8_6->value() * inp_incDecs->value() );
    p8_7->value(p8_7->value() * inp_incDecs->value() );
    p8_8->value(p8_8->value() * inp_incDecs->value() );
    p8_9->value(p8_9->value() * inp_incDecs->value() );
    p8_10->value(p8_10->value() * inp_incDecs->value() );
    p8_11->value(p8_11->value() * inp_incDecs->value() );
    p8_12->value(p8_12->value() * inp_incDecs->value() );
}

void p8SerieDiv()
{
    p8_1->value(p8_1->value() / inp_incDecs->value() );
    p8_2->value(p8_2->value() / inp_incDecs->value() );
    p8_3->value(p8_3->value() / inp_incDecs->value() );
    p8_4->value(p8_4->value() / inp_incDecs->value() );
    p8_5->value(p8_5->value() / inp_incDecs->value() );
    p8_6->value(p8_6->value() / inp_incDecs->value() );
    p8_7->value(p8_7->value() / inp_incDecs->value() );
    p8_8->value(p8_8->value() / inp_incDecs->value() );
    p8_9->value(p8_9->value() / inp_incDecs->value() );
    p8_10->value(p8_10->value() / inp_incDecs->value() );
    p8_11->value(p8_11->value() / inp_incDecs->value() );
    p8_12->value(p8_12->value() / inp_incDecs->value() );
}

void p9SerieAdd()
{
    p9_1->value(p9_1->value() + inp_incDecs->value() );
    p9_2->value(p9_2->value() + inp_incDecs->value() );
    p9_3->value(p9_3->value() + inp_incDecs->value() );
    p9_4->value(p9_4->value() + inp_incDecs->value() );
    p9_5->value(p9_5->value() + inp_incDecs->value() );
    p9_6->value(p9_6->value() + inp_incDecs->value() );
    p9_7->value(p9_7->value() + inp_incDecs->value() );
    p9_8->value(p9_8->value() + inp_incDecs->value() );
    p9_9->value(p9_9->value() + inp_incDecs->value() );
    p9_10->value(p9_10->value() + inp_incDecs->value() );
    p9_11->value(p9_11->value() + inp_incDecs->value() );
    p9_12->value(p9_12->value() + inp_incDecs->value() );
}

void p9SerieSub()
{
    p9_1->value(p9_1->value() - inp_incDecs->value() );
    p9_2->value(p9_2->value() - inp_incDecs->value() );
    p9_3->value(p9_3->value() - inp_incDecs->value() );
    p9_4->value(p9_4->value() - inp_incDecs->value() );
    p9_5->value(p9_5->value() - inp_incDecs->value() );
    p9_6->value(p9_6->value() - inp_incDecs->value() );
    p9_7->value(p9_7->value() - inp_incDecs->value() );
    p9_8->value(p9_8->value() - inp_incDecs->value() );
    p9_9->value(p9_9->value() - inp_incDecs->value() );
    p9_10->value(p9_10->value() - inp_incDecs->value() );
    p9_11->value(p9_11->value() - inp_incDecs->value() );
    p9_12->value(p9_12->value() - inp_incDecs->value() );
}

void p9SerieMlt()
{
    p9_1->value(p9_1->value() * inp_incDecs->value() );
    p9_2->value(p9_2->value() * inp_incDecs->value() );
    p9_3->value(p9_3->value() * inp_incDecs->value() );
    p9_4->value(p9_4->value() * inp_incDecs->value() );
    p9_5->value(p9_5->value() * inp_incDecs->value() );
    p9_6->value(p9_6->value() * inp_incDecs->value() );
    p9_7->value(p9_7->value() * inp_incDecs->value() );
    p9_8->value(p9_8->value() * inp_incDecs->value() );
    p9_9->value(p9_9->value() * inp_incDecs->value() );
    p9_10->value(p9_10->value() * inp_incDecs->value() );
    p9_11->value(p9_11->value() * inp_incDecs->value() );
    p9_12->value(p9_12->value() * inp_incDecs->value() );
}

void p9SerieDiv()
{
    p9_1->value(p9_1->value() / inp_incDecs->value() );
    p9_2->value(p9_2->value() / inp_incDecs->value() );
    p9_3->value(p9_3->value() / inp_incDecs->value() );
    p9_4->value(p9_4->value() / inp_incDecs->value() );
    p9_5->value(p9_5->value() / inp_incDecs->value() );
    p9_6->value(p9_6->value() / inp_incDecs->value() );
    p9_7->value(p9_7->value() / inp_incDecs->value() );
    p9_8->value(p9_8->value() / inp_incDecs->value() );
    p9_9->value(p9_9->value() / inp_incDecs->value() );
    p9_10->value(p9_10->value() / inp_incDecs->value() );
    p9_11->value(p9_11->value() / inp_incDecs->value() );
    p9_12->value(p9_12->value() / inp_incDecs->value() );
}

void p10SerieAdd()
{
    p10_1->value(p10_1->value() + inp_incDecs->value() );
    p10_2->value(p10_2->value() + inp_incDecs->value() );
    p10_3->value(p10_3->value() + inp_incDecs->value() );
    p10_4->value(p10_4->value() + inp_incDecs->value() );
    p10_5->value(p10_5->value() + inp_incDecs->value() );
    p10_6->value(p10_6->value() + inp_incDecs->value() );
    p10_7->value(p10_7->value() + inp_incDecs->value() );
    p10_8->value(p10_8->value() + inp_incDecs->value() );
    p10_9->value(p10_9->value() + inp_incDecs->value() );
    p10_10->value(p10_10->value() + inp_incDecs->value() );
    p10_11->value(p10_11->value() + inp_incDecs->value() );
    p10_12->value(p10_12->value() + inp_incDecs->value() );
}

void p10SerieSub()
{
    p10_1->value(p10_1->value() - inp_incDecs->value() );
    p10_2->value(p10_2->value() - inp_incDecs->value() );
    p10_3->value(p10_3->value() - inp_incDecs->value() );
    p10_4->value(p10_4->value() - inp_incDecs->value() );
    p10_5->value(p10_5->value() - inp_incDecs->value() );
    p10_6->value(p10_6->value() - inp_incDecs->value() );
    p10_7->value(p10_7->value() - inp_incDecs->value() );
    p10_8->value(p10_8->value() - inp_incDecs->value() );
    p10_9->value(p10_9->value() - inp_incDecs->value() );
    p10_10->value(p10_10->value() - inp_incDecs->value() );
    p10_11->value(p10_11->value() - inp_incDecs->value() );
    p10_12->value(p10_12->value() - inp_incDecs->value() );
}

void p10SerieMlt()
{
    p10_1->value(p10_1->value() * inp_incDecs->value() );
    p10_2->value(p10_2->value() * inp_incDecs->value() );
    p10_3->value(p10_3->value() * inp_incDecs->value() );
    p10_4->value(p10_4->value() * inp_incDecs->value() );
    p10_5->value(p10_5->value() * inp_incDecs->value() );
    p10_6->value(p10_6->value() * inp_incDecs->value() );
    p10_7->value(p10_7->value() * inp_incDecs->value() );
    p10_8->value(p10_8->value() * inp_incDecs->value() );
    p10_9->value(p10_9->value() * inp_incDecs->value() );
    p10_10->value(p10_10->value() * inp_incDecs->value() );
    p10_11->value(p10_11->value() * inp_incDecs->value() );
    p10_12->value(p10_12->value() * inp_incDecs->value() );
}

void p10SerieDiv()
{
    p10_1->value(p10_1->value() / inp_incDecs->value() );
    p10_2->value(p10_2->value() / inp_incDecs->value() );
    p10_3->value(p10_3->value() / inp_incDecs->value() );
    p10_4->value(p10_4->value() / inp_incDecs->value() );
    p10_5->value(p10_5->value() / inp_incDecs->value() );
    p10_6->value(p10_6->value() / inp_incDecs->value() );
    p10_7->value(p10_7->value() / inp_incDecs->value() );
    p10_8->value(p10_8->value() / inp_incDecs->value() );
    p10_9->value(p10_9->value() / inp_incDecs->value() );
    p10_10->value(p10_10->value() / inp_incDecs->value() );
    p10_11->value(p10_11->value() / inp_incDecs->value() );
    p10_12->value(p10_12->value() / inp_incDecs->value() );
}

void p11SerieAdd()
{
    p11_1->value(p11_1->value() + inp_incDecs->value() );
    p11_2->value(p11_2->value() + inp_incDecs->value() );
    p11_3->value(p11_3->value() + inp_incDecs->value() );
    p11_4->value(p11_4->value() + inp_incDecs->value() );
    p11_5->value(p11_5->value() + inp_incDecs->value() );
    p11_6->value(p11_6->value() + inp_incDecs->value() );
    p11_7->value(p11_7->value() + inp_incDecs->value() );
    p11_8->value(p11_8->value() + inp_incDecs->value() );
    p11_9->value(p11_9->value() + inp_incDecs->value() );
    p11_10->value(p11_10->value() + inp_incDecs->value() );
    p11_11->value(p11_11->value() + inp_incDecs->value() );
    p11_12->value(p11_12->value() + inp_incDecs->value() );
}

void p11SerieSub()
{
    p11_1->value(p11_1->value() - inp_incDecs->value() );
    p11_2->value(p11_2->value() - inp_incDecs->value() );
    p11_3->value(p11_3->value() - inp_incDecs->value() );
    p11_4->value(p11_4->value() - inp_incDecs->value() );
    p11_5->value(p11_5->value() - inp_incDecs->value() );
    p11_6->value(p11_6->value() - inp_incDecs->value() );
    p11_7->value(p11_7->value() - inp_incDecs->value() );
    p11_8->value(p11_8->value() - inp_incDecs->value() );
    p11_9->value(p11_9->value() - inp_incDecs->value() );
    p11_10->value(p11_10->value() - inp_incDecs->value() );
    p11_11->value(p11_11->value() - inp_incDecs->value() );
    p11_12->value(p11_12->value() - inp_incDecs->value() );
}

void p11SerieMlt()
{
    p11_1->value(p11_1->value() * inp_incDecs->value() );
    p11_2->value(p11_2->value() * inp_incDecs->value() );
    p11_3->value(p11_3->value() * inp_incDecs->value() );
    p11_4->value(p11_4->value() * inp_incDecs->value() );
    p11_5->value(p11_5->value() * inp_incDecs->value() );
    p11_6->value(p11_6->value() * inp_incDecs->value() );
    p11_7->value(p11_7->value() * inp_incDecs->value() );
    p11_8->value(p11_8->value() * inp_incDecs->value() );
    p11_9->value(p11_9->value() * inp_incDecs->value() );
    p11_10->value(p11_10->value() * inp_incDecs->value() );
    p11_11->value(p11_11->value() * inp_incDecs->value() );
    p11_12->value(p11_12->value() * inp_incDecs->value() );
}

void p11SerieDiv()
{
    p11_1->value(p11_1->value() / inp_incDecs->value() );
    p11_2->value(p11_2->value() / inp_incDecs->value() );
    p11_3->value(p11_3->value() / inp_incDecs->value() );
    p11_4->value(p11_4->value() / inp_incDecs->value() );
    p11_5->value(p11_5->value() / inp_incDecs->value() );
    p11_6->value(p11_6->value() / inp_incDecs->value() );
    p11_7->value(p11_7->value() / inp_incDecs->value() );
    p11_8->value(p11_8->value() / inp_incDecs->value() );
    p11_9->value(p11_9->value() / inp_incDecs->value() );
    p11_10->value(p11_10->value() / inp_incDecs->value() );
    p11_11->value(p11_11->value() / inp_incDecs->value() );
    p11_12->value(p11_12->value() / inp_incDecs->value() );
}

void p12SerieAdd()
{
    p12_1->value(p12_1->value() + inp_incDecs->value() );
    p12_2->value(p12_2->value() + inp_incDecs->value() );
    p12_3->value(p12_3->value() + inp_incDecs->value() );
    p12_4->value(p12_4->value() + inp_incDecs->value() );
    p12_5->value(p12_5->value() + inp_incDecs->value() );
    p12_6->value(p12_6->value() + inp_incDecs->value() );
    p12_7->value(p12_7->value() + inp_incDecs->value() );
    p12_8->value(p12_8->value() + inp_incDecs->value() );
    p12_9->value(p12_9->value() + inp_incDecs->value() );
    p12_10->value(p12_10->value() + inp_incDecs->value() );
    p12_11->value(p12_11->value() + inp_incDecs->value() );
    p12_12->value(p12_12->value() + inp_incDecs->value() );
}

void p12SerieSub()
{
    p12_1->value(p12_1->value() - inp_incDecs->value() );
    p12_2->value(p12_2->value() - inp_incDecs->value() );
    p12_3->value(p12_3->value() - inp_incDecs->value() );
    p12_4->value(p12_4->value() - inp_incDecs->value() );
    p12_5->value(p12_5->value() - inp_incDecs->value() );
    p12_6->value(p12_6->value() - inp_incDecs->value() );
    p12_7->value(p12_7->value() - inp_incDecs->value() );
    p12_8->value(p12_8->value() - inp_incDecs->value() );
    p12_9->value(p12_9->value() - inp_incDecs->value() );
    p12_10->value(p12_10->value() - inp_incDecs->value() );
    p12_11->value(p12_11->value() - inp_incDecs->value() );
    p12_12->value(p12_12->value() - inp_incDecs->value() );
}

void p12SerieMlt()
{
    p12_1->value(p12_1->value() * inp_incDecs->value() );
    p12_2->value(p12_2->value() * inp_incDecs->value() );
    p12_3->value(p12_3->value() * inp_incDecs->value() );
    p12_4->value(p12_4->value() * inp_incDecs->value() );
    p12_5->value(p12_5->value() * inp_incDecs->value() );
    p12_6->value(p12_6->value() * inp_incDecs->value() );
    p12_7->value(p12_7->value() * inp_incDecs->value() );
    p12_8->value(p12_8->value() * inp_incDecs->value() );
    p12_9->value(p12_9->value() * inp_incDecs->value() );
    p12_10->value(p12_10->value() * inp_incDecs->value() );
    p12_11->value(p12_11->value() * inp_incDecs->value() );
    p12_12->value(p12_12->value() * inp_incDecs->value() );
}

void p12SerieDiv()
{
    p12_1->value(p12_1->value() / inp_incDecs->value() );
    p12_2->value(p12_2->value() / inp_incDecs->value() );
    p12_3->value(p12_3->value() / inp_incDecs->value() );
    p12_4->value(p12_4->value() / inp_incDecs->value() );
    p12_5->value(p12_5->value() / inp_incDecs->value() );
    p12_6->value(p12_6->value() / inp_incDecs->value() );
    p12_7->value(p12_7->value() / inp_incDecs->value() );
    p12_8->value(p12_8->value() / inp_incDecs->value() );
    p12_9->value(p12_9->value() / inp_incDecs->value() );
    p12_10->value(p12_10->value() / inp_incDecs->value() );
    p12_11->value(p12_11->value() / inp_incDecs->value() );
    p12_12->value(p12_12->value() / inp_incDecs->value() );
}

void p13SerieAdd()
{
    p13_1->value(p13_1->value() + inp_incDecs->value() );
    p13_2->value(p13_2->value() + inp_incDecs->value() );
    p13_3->value(p13_3->value() + inp_incDecs->value() );
    p13_4->value(p13_4->value() + inp_incDecs->value() );
    p13_5->value(p13_5->value() + inp_incDecs->value() );
    p13_6->value(p13_6->value() + inp_incDecs->value() );
    p13_7->value(p13_7->value() + inp_incDecs->value() );
    p13_8->value(p13_8->value() + inp_incDecs->value() );
    p13_9->value(p13_9->value() + inp_incDecs->value() );
    p13_10->value(p13_10->value() + inp_incDecs->value() );
    p13_11->value(p13_11->value() + inp_incDecs->value() );
    p13_12->value(p13_12->value() + inp_incDecs->value() );
}

void p13SerieSub()
{
    p13_1->value(p13_1->value() - inp_incDecs->value() );
    p13_2->value(p13_2->value() - inp_incDecs->value() );
    p13_3->value(p13_3->value() - inp_incDecs->value() );
    p13_4->value(p13_4->value() - inp_incDecs->value() );
    p13_5->value(p13_5->value() - inp_incDecs->value() );
    p13_6->value(p13_6->value() - inp_incDecs->value() );
    p13_7->value(p13_7->value() - inp_incDecs->value() );
    p13_8->value(p13_8->value() - inp_incDecs->value() );
    p13_9->value(p13_9->value() - inp_incDecs->value() );
    p13_10->value(p13_10->value() - inp_incDecs->value() );
    p13_11->value(p13_11->value() - inp_incDecs->value() );
    p13_12->value(p13_12->value() - inp_incDecs->value() );
}

void p13SerieMlt()
{
    p13_1->value(p13_1->value() * inp_incDecs->value() );
    p13_2->value(p13_2->value() * inp_incDecs->value() );
    p13_3->value(p13_3->value() * inp_incDecs->value() );
    p13_4->value(p13_4->value() * inp_incDecs->value() );
    p13_5->value(p13_5->value() * inp_incDecs->value() );
    p13_6->value(p13_6->value() * inp_incDecs->value() );
    p13_7->value(p13_7->value() * inp_incDecs->value() );
    p13_8->value(p13_8->value() * inp_incDecs->value() );
    p13_9->value(p13_9->value() * inp_incDecs->value() );
    p13_10->value(p13_10->value() * inp_incDecs->value() );
    p13_11->value(p13_11->value() * inp_incDecs->value() );
    p13_12->value(p13_12->value() * inp_incDecs->value() );
}

void p13SerieDiv()
{
    p13_1->value(p13_1->value() / inp_incDecs->value() );
    p13_2->value(p13_2->value() / inp_incDecs->value() );
    p13_3->value(p13_3->value() / inp_incDecs->value() );
    p13_4->value(p13_4->value() / inp_incDecs->value() );
    p13_5->value(p13_5->value() / inp_incDecs->value() );
    p13_6->value(p13_6->value() / inp_incDecs->value() );
    p13_7->value(p13_7->value() / inp_incDecs->value() );
    p13_8->value(p13_8->value() / inp_incDecs->value() );
    p13_9->value(p13_9->value() / inp_incDecs->value() );
    p13_10->value(p13_10->value() / inp_incDecs->value() );
    p13_11->value(p13_11->value() / inp_incDecs->value() );
    p13_12->value(p13_12->value() / inp_incDecs->value() );
}

void p14SerieAdd()
{
    p14_1->value(p14_1->value() + inp_incDecs->value() );
    p14_2->value(p14_2->value() + inp_incDecs->value() );
    p14_3->value(p14_3->value() + inp_incDecs->value() );
    p14_4->value(p14_4->value() + inp_incDecs->value() );
    p14_5->value(p14_5->value() + inp_incDecs->value() );
    p14_6->value(p14_6->value() + inp_incDecs->value() );
    p14_7->value(p14_7->value() + inp_incDecs->value() );
    p14_8->value(p14_8->value() + inp_incDecs->value() );
    p14_9->value(p14_9->value() + inp_incDecs->value() );
    p14_10->value(p14_10->value() + inp_incDecs->value() );
    p14_11->value(p14_11->value() + inp_incDecs->value() );
    p14_12->value(p14_12->value() + inp_incDecs->value() );
}

void p14SerieSub()
{
    p14_1->value(p14_1->value() - inp_incDecs->value() );
    p14_2->value(p14_2->value() - inp_incDecs->value() );
    p14_3->value(p14_3->value() - inp_incDecs->value() );
    p14_4->value(p14_4->value() - inp_incDecs->value() );
    p14_5->value(p14_5->value() - inp_incDecs->value() );
    p14_6->value(p14_6->value() - inp_incDecs->value() );
    p14_7->value(p14_7->value() - inp_incDecs->value() );
    p14_8->value(p14_8->value() - inp_incDecs->value() );
    p14_9->value(p14_9->value() - inp_incDecs->value() );
    p14_10->value(p14_10->value() - inp_incDecs->value() );
    p14_11->value(p14_11->value() - inp_incDecs->value() );
    p14_12->value(p14_12->value() - inp_incDecs->value() );
}

void p14SerieMlt()
{
    p14_1->value(p14_1->value() * inp_incDecs->value() );
    p14_2->value(p14_2->value() * inp_incDecs->value() );
    p14_3->value(p14_3->value() * inp_incDecs->value() );
    p14_4->value(p14_4->value() * inp_incDecs->value() );
    p14_5->value(p14_5->value() * inp_incDecs->value() );
    p14_6->value(p14_6->value() * inp_incDecs->value() );
    p14_7->value(p14_7->value() * inp_incDecs->value() );
    p14_8->value(p14_8->value() * inp_incDecs->value() );
    p14_9->value(p14_9->value() * inp_incDecs->value() );
    p14_10->value(p14_10->value() * inp_incDecs->value() );
    p14_11->value(p14_11->value() * inp_incDecs->value() );
    p14_12->value(p14_12->value() * inp_incDecs->value() );
}

void p14SerieDiv()
{
    p14_1->value(p14_1->value() / inp_incDecs->value() );
    p14_2->value(p14_2->value() / inp_incDecs->value() );
    p14_3->value(p14_3->value() / inp_incDecs->value() );
    p14_4->value(p14_4->value() / inp_incDecs->value() );
    p14_5->value(p14_5->value() / inp_incDecs->value() );
    p14_6->value(p14_6->value() / inp_incDecs->value() );
    p14_7->value(p14_7->value() / inp_incDecs->value() );
    p14_8->value(p14_8->value() / inp_incDecs->value() );
    p14_9->value(p14_9->value() / inp_incDecs->value() );
    p14_10->value(p14_10->value() / inp_incDecs->value() );
    p14_11->value(p14_11->value() / inp_incDecs->value() );
    p14_12->value(p14_12->value() / inp_incDecs->value() );
}

void p15SerieAdd()
{
    p15_1->value(p15_1->value() + inp_incDecs->value() );
    p15_2->value(p15_2->value() + inp_incDecs->value() );
    p15_3->value(p15_3->value() + inp_incDecs->value() );
    p15_4->value(p15_4->value() + inp_incDecs->value() );
    p15_5->value(p15_5->value() + inp_incDecs->value() );
    p15_6->value(p15_6->value() + inp_incDecs->value() );
    p15_7->value(p15_7->value() + inp_incDecs->value() );
    p15_8->value(p15_8->value() + inp_incDecs->value() );
    p15_9->value(p15_9->value() + inp_incDecs->value() );
    p15_10->value(p15_10->value() + inp_incDecs->value() );
    p15_11->value(p15_11->value() + inp_incDecs->value() );
    p15_12->value(p15_12->value() + inp_incDecs->value() );
}

void p15SerieSub()
{
    p15_1->value(p15_1->value() - inp_incDecs->value() );
    p15_2->value(p15_2->value() - inp_incDecs->value() );
    p15_3->value(p15_3->value() - inp_incDecs->value() );
    p15_4->value(p15_4->value() - inp_incDecs->value() );
    p15_5->value(p15_5->value() - inp_incDecs->value() );
    p15_6->value(p15_6->value() - inp_incDecs->value() );
    p15_7->value(p15_7->value() - inp_incDecs->value() );
    p15_8->value(p15_8->value() - inp_incDecs->value() );
    p15_9->value(p15_9->value() - inp_incDecs->value() );
    p15_10->value(p15_10->value() - inp_incDecs->value() );
    p15_11->value(p15_11->value() - inp_incDecs->value() );
    p15_12->value(p15_12->value() - inp_incDecs->value() );
}

void p15SerieMlt()
{
    p15_1->value(p15_1->value() * inp_incDecs->value() );
    p15_2->value(p15_2->value() * inp_incDecs->value() );
    p15_3->value(p15_3->value() * inp_incDecs->value() );
    p15_4->value(p15_4->value() * inp_incDecs->value() );
    p15_5->value(p15_5->value() * inp_incDecs->value() );
    p15_6->value(p15_6->value() * inp_incDecs->value() );
    p15_7->value(p15_7->value() * inp_incDecs->value() );
    p15_8->value(p15_8->value() * inp_incDecs->value() );
    p15_9->value(p15_9->value() * inp_incDecs->value() );
    p15_10->value(p15_10->value() * inp_incDecs->value() );
    p15_11->value(p15_11->value() * inp_incDecs->value() );
    p15_12->value(p15_12->value() * inp_incDecs->value() );
}

void p15SerieDiv()
{
    p15_1->value(p15_1->value() / inp_incDecs->value() );
    p15_2->value(p15_2->value() / inp_incDecs->value() );
    p15_3->value(p15_3->value() / inp_incDecs->value() );
    p15_4->value(p15_4->value() / inp_incDecs->value() );
    p15_5->value(p15_5->value() / inp_incDecs->value() );
    p15_6->value(p15_6->value() / inp_incDecs->value() );
    p15_7->value(p15_7->value() / inp_incDecs->value() );
    p15_8->value(p15_8->value() / inp_incDecs->value() );
    p15_9->value(p15_9->value() / inp_incDecs->value() );
    p15_10->value(p15_10->value() / inp_incDecs->value() );
    p15_11->value(p15_11->value() / inp_incDecs->value() );
    p15_12->value(p15_12->value() / inp_incDecs->value() );
}

///////////////////////////////////////////////////////////////////7
void p6bSerieAdd()
{
    p6_1b->value(p6_1b->value() + inp_incDecs->value() );
    p6_2b->value(p6_2b->value() + inp_incDecs->value() );
    p6_3b->value(p6_3b->value() + inp_incDecs->value() );
    p6_4b->value(p6_4b->value() + inp_incDecs->value() );
    p6_5b->value(p6_5b->value() + inp_incDecs->value() );
    p6_6b->value(p6_6b->value() + inp_incDecs->value() );
    p6_7b->value(p6_7b->value() + inp_incDecs->value() );
    p6_8b->value(p6_8b->value() + inp_incDecs->value() );
    p6_9b->value(p6_9b->value() + inp_incDecs->value() );
    p6_10b->value(p6_10b->value() + inp_incDecs->value() );
    p6_11b->value(p6_11b->value() + inp_incDecs->value() );
    p6_12b->value(p6_12b->value() + inp_incDecs->value() );
}

void p6bSerieSub()
{
    p6_1b->value(p6_1b->value() - inp_incDecs->value() );
    p6_2b->value(p6_2b->value() - inp_incDecs->value() );
    p6_3b->value(p6_3b->value() - inp_incDecs->value() );
    p6_4b->value(p6_4b->value() - inp_incDecs->value() );
    p6_5b->value(p6_5b->value() - inp_incDecs->value() );
    p6_6b->value(p6_6b->value() - inp_incDecs->value() );
    p6_7b->value(p6_7b->value() - inp_incDecs->value() );
    p6_8b->value(p6_8b->value() - inp_incDecs->value() );
    p6_9b->value(p6_9b->value() - inp_incDecs->value() );
    p6_10b->value(p6_10b->value() - inp_incDecs->value() );
    p6_11b->value(p6_11b->value() - inp_incDecs->value() );
    p6_12b->value(p6_12b->value() - inp_incDecs->value() );
}

void p6bSerieMlt()
{
    p6_1b->value(p6_1b->value() * inp_incDecs->value() );
    p6_2b->value(p6_2b->value() * inp_incDecs->value() );
    p6_3b->value(p6_3b->value() * inp_incDecs->value() );
    p6_4b->value(p6_4b->value() * inp_incDecs->value() );
    p6_5b->value(p6_5b->value() * inp_incDecs->value() );
    p6_6b->value(p6_6b->value() * inp_incDecs->value() );
    p6_7b->value(p6_7b->value() * inp_incDecs->value() );
    p6_8b->value(p6_8b->value() * inp_incDecs->value() );
    p6_9b->value(p6_9b->value() * inp_incDecs->value() );
    p6_10b->value(p6_10b->value() * inp_incDecs->value() );
    p6_11b->value(p6_11b->value() * inp_incDecs->value() );
    p6_12b->value(p6_12b->value() * inp_incDecs->value() );
}

void p6bSerieDiv()
{
    p6_1b->value(p6_1b->value() / inp_incDecs->value() );
    p6_2b->value(p6_2b->value() / inp_incDecs->value() );
    p6_3b->value(p6_3b->value() / inp_incDecs->value() );
    p6_4b->value(p6_4b->value() / inp_incDecs->value() );
    p6_5b->value(p6_5b->value() / inp_incDecs->value() );
    p6_6b->value(p6_6b->value() / inp_incDecs->value() );
    p6_7b->value(p6_7b->value() / inp_incDecs->value() );
    p6_8b->value(p6_8b->value() / inp_incDecs->value() );
    p6_9b->value(p6_9b->value() / inp_incDecs->value() );
    p6_10b->value(p6_10b->value() / inp_incDecs->value() );
    p6_11b->value(p6_11b->value() / inp_incDecs->value() );
    p6_12b->value(p6_12b->value() / inp_incDecs->value() );
}

void p7bSerieAdd()
{
    p7_1b->value(p7_1b->value() + inp_incDecs->value() );
    p7_2b->value(p7_2b->value() + inp_incDecs->value() );
    p7_3b->value(p7_3b->value() + inp_incDecs->value() );
    p7_4b->value(p7_4b->value() + inp_incDecs->value() );
    p7_5b->value(p7_5b->value() + inp_incDecs->value() );
    p7_6b->value(p7_6b->value() + inp_incDecs->value() );
    p7_7b->value(p7_7b->value() + inp_incDecs->value() );
    p7_8b->value(p7_8b->value() + inp_incDecs->value() );
    p7_9b->value(p7_9b->value() + inp_incDecs->value() );
    p7_10b->value(p7_10b->value() + inp_incDecs->value() );
    p7_11b->value(p7_11b->value() + inp_incDecs->value() );
    p7_12b->value(p7_12b->value() + inp_incDecs->value() );
}

void p7bSerieSub()
{
    p7_1b->value(p7_1b->value() - inp_incDecs->value() );
    p7_2b->value(p7_2b->value() - inp_incDecs->value() );
    p7_3b->value(p7_3b->value() - inp_incDecs->value() );
    p7_4b->value(p7_4b->value() - inp_incDecs->value() );
    p7_5b->value(p7_5b->value() - inp_incDecs->value() );
    p7_6b->value(p7_6b->value() - inp_incDecs->value() );
    p7_7b->value(p7_7b->value() - inp_incDecs->value() );
    p7_8b->value(p7_8b->value() - inp_incDecs->value() );
    p7_9b->value(p7_9b->value() - inp_incDecs->value() );
    p7_10b->value(p7_10b->value() - inp_incDecs->value() );
    p7_11b->value(p7_11b->value() - inp_incDecs->value() );
    p7_12b->value(p7_12b->value() - inp_incDecs->value() );
}

void p7bSerieMlt()
{
    p7_1b->value(p7_1b->value() * inp_incDecs->value() );
    p7_2b->value(p7_2b->value() * inp_incDecs->value() );
    p7_3b->value(p7_3b->value() * inp_incDecs->value() );
    p7_4b->value(p7_4b->value() * inp_incDecs->value() );
    p7_5b->value(p7_5b->value() * inp_incDecs->value() );
    p7_6b->value(p7_6b->value() * inp_incDecs->value() );
    p7_7b->value(p7_7b->value() * inp_incDecs->value() );
    p7_8b->value(p7_8b->value() * inp_incDecs->value() );
    p7_9b->value(p7_9b->value() * inp_incDecs->value() );
    p7_10b->value(p7_10b->value() * inp_incDecs->value() );
    p7_11b->value(p7_11b->value() * inp_incDecs->value() );
    p7_12b->value(p7_12b->value() * inp_incDecs->value() );
}

void p7bSerieDiv()
{
    p7_1b->value(p7_1b->value() / inp_incDecs->value() );
    p7_2b->value(p7_2b->value() / inp_incDecs->value() );
    p7_3b->value(p7_3b->value() / inp_incDecs->value() );
    p7_4b->value(p7_4b->value() / inp_incDecs->value() );
    p7_5b->value(p7_5b->value() / inp_incDecs->value() );
    p7_6b->value(p7_6b->value() / inp_incDecs->value() );
    p7_7b->value(p7_7b->value() / inp_incDecs->value() );
    p7_8b->value(p7_8b->value() / inp_incDecs->value() );
    p7_9b->value(p7_9b->value() / inp_incDecs->value() );
    p7_10b->value(p7_10b->value() / inp_incDecs->value() );
    p7_11b->value(p7_11b->value() / inp_incDecs->value() );
    p7_12b->value(p7_12b->value() / inp_incDecs->value() );
}

void p8bSerieAdd()
{
    p8_1b->value(p8_1b->value() + inp_incDecs->value() );
    p8_2b->value(p8_2b->value() + inp_incDecs->value() );
    p8_3b->value(p8_3b->value() + inp_incDecs->value() );
    p8_4b->value(p8_4b->value() + inp_incDecs->value() );
    p8_5b->value(p8_5b->value() + inp_incDecs->value() );
    p8_6b->value(p8_6b->value() + inp_incDecs->value() );
    p8_7b->value(p8_7b->value() + inp_incDecs->value() );
    p8_8b->value(p8_8b->value() + inp_incDecs->value() );
    p8_9b->value(p8_9b->value() + inp_incDecs->value() );
    p8_10b->value(p8_10b->value() + inp_incDecs->value() );
    p8_11b->value(p8_11b->value() + inp_incDecs->value() );
    p8_12b->value(p8_12b->value() + inp_incDecs->value() );
}

void p8bSerieSub()
{
    p8_1b->value(p8_1b->value() - inp_incDecs->value() );
    p8_2b->value(p8_2b->value() - inp_incDecs->value() );
    p8_3b->value(p8_3b->value() - inp_incDecs->value() );
    p8_4b->value(p8_4b->value() - inp_incDecs->value() );
    p8_5b->value(p8_5b->value() - inp_incDecs->value() );
    p8_6b->value(p8_6b->value() - inp_incDecs->value() );
    p8_7b->value(p8_7b->value() - inp_incDecs->value() );
    p8_8b->value(p8_8b->value() - inp_incDecs->value() );
    p8_9b->value(p8_9b->value() - inp_incDecs->value() );
    p8_10b->value(p8_10b->value() - inp_incDecs->value() );
    p8_11b->value(p8_11b->value() - inp_incDecs->value() );
    p8_12b->value(p8_12b->value() - inp_incDecs->value() );
}

void p8bSerieMlt()
{
    p8_1b->value(p8_1b->value() * inp_incDecs->value() );
    p8_2b->value(p8_2b->value() * inp_incDecs->value() );
    p8_3b->value(p8_3b->value() * inp_incDecs->value() );
    p8_4b->value(p8_4b->value() * inp_incDecs->value() );
    p8_5b->value(p8_5b->value() * inp_incDecs->value() );
    p8_6b->value(p8_6b->value() * inp_incDecs->value() );
    p8_7b->value(p8_7b->value() * inp_incDecs->value() );
    p8_8b->value(p8_8b->value() * inp_incDecs->value() );
    p8_9b->value(p8_9b->value() * inp_incDecs->value() );
    p8_10b->value(p8_10b->value() * inp_incDecs->value() );
    p8_11b->value(p8_11b->value() * inp_incDecs->value() );
    p8_12b->value(p8_12b->value() * inp_incDecs->value() );
}

void p8bSerieDiv()
{
    p8_1b->value(p8_1b->value() / inp_incDecs->value() );
    p8_2b->value(p8_2b->value() / inp_incDecs->value() );
    p8_3b->value(p8_3b->value() / inp_incDecs->value() );
    p8_4b->value(p8_4b->value() / inp_incDecs->value() );
    p8_5b->value(p8_5b->value() / inp_incDecs->value() );
    p8_6b->value(p8_6b->value() / inp_incDecs->value() );
    p8_7b->value(p8_7b->value() / inp_incDecs->value() );
    p8_8b->value(p8_8b->value() / inp_incDecs->value() );
    p8_9b->value(p8_9b->value() / inp_incDecs->value() );
    p8_10b->value(p8_10b->value() / inp_incDecs->value() );
    p8_11b->value(p8_11b->value() / inp_incDecs->value() );
    p8_12b->value(p8_12b->value() / inp_incDecs->value() );
}

void p9bSerieAdd()
{
    p9_1b->value(p9_1b->value() + inp_incDecs->value() );
    p9_2b->value(p9_2b->value() + inp_incDecs->value() );
    p9_3b->value(p9_3b->value() + inp_incDecs->value() );
    p9_4b->value(p9_4b->value() + inp_incDecs->value() );
    p9_5b->value(p9_5b->value() + inp_incDecs->value() );
    p9_6b->value(p9_6b->value() + inp_incDecs->value() );
    p9_7b->value(p9_7b->value() + inp_incDecs->value() );
    p9_8b->value(p9_8b->value() + inp_incDecs->value() );
    p9_9b->value(p9_9b->value() + inp_incDecs->value() );
    p9_10b->value(p9_10b->value() + inp_incDecs->value() );
    p9_11b->value(p9_11b->value() + inp_incDecs->value() );
    p9_12b->value(p9_12b->value() + inp_incDecs->value() );
}

void p9bSerieSub()
{
    p9_1b->value(p9_1b->value() - inp_incDecs->value() );
    p9_2b->value(p9_2b->value() - inp_incDecs->value() );
    p9_3b->value(p9_3b->value() - inp_incDecs->value() );
    p9_4b->value(p9_4b->value() - inp_incDecs->value() );
    p9_5b->value(p9_5b->value() - inp_incDecs->value() );
    p9_6b->value(p9_6b->value() - inp_incDecs->value() );
    p9_7b->value(p9_7b->value() - inp_incDecs->value() );
    p9_8b->value(p9_8b->value() - inp_incDecs->value() );
    p9_9b->value(p9_9b->value() - inp_incDecs->value() );
    p9_10b->value(p9_10b->value() - inp_incDecs->value() );
    p9_11b->value(p9_11b->value() - inp_incDecs->value() );
    p9_12b->value(p9_12b->value() - inp_incDecs->value() );
}

void p9bSerieMlt()
{
    p9_1b->value(p9_1b->value() * inp_incDecs->value() );
    p9_2b->value(p9_2b->value() * inp_incDecs->value() );
    p9_3b->value(p9_3b->value() * inp_incDecs->value() );
    p9_4b->value(p9_4b->value() * inp_incDecs->value() );
    p9_5b->value(p9_5b->value() * inp_incDecs->value() );
    p9_6b->value(p9_6b->value() * inp_incDecs->value() );
    p9_7b->value(p9_7b->value() * inp_incDecs->value() );
    p9_8b->value(p9_8b->value() * inp_incDecs->value() );
    p9_9b->value(p9_9b->value() * inp_incDecs->value() );
    p9_10b->value(p9_10b->value() * inp_incDecs->value() );
    p9_11b->value(p9_11b->value() * inp_incDecs->value() );
    p9_12b->value(p9_12b->value() * inp_incDecs->value() );
}

void p9bSerieDiv()
{
    p9_1b->value(p9_1b->value() / inp_incDecs->value() );
    p9_2b->value(p9_2b->value() / inp_incDecs->value() );
    p9_3b->value(p9_3b->value() / inp_incDecs->value() );
    p9_4b->value(p9_4b->value() / inp_incDecs->value() );
    p9_5b->value(p9_5b->value() / inp_incDecs->value() );
    p9_6b->value(p9_6b->value() / inp_incDecs->value() );
    p9_7b->value(p9_7b->value() / inp_incDecs->value() );
    p9_8b->value(p9_8b->value() / inp_incDecs->value() );
    p9_9b->value(p9_9b->value() / inp_incDecs->value() );
    p9_10b->value(p9_10b->value() / inp_incDecs->value() );
    p9_11b->value(p9_11b->value() / inp_incDecs->value() );
    p9_12b->value(p9_12b->value() / inp_incDecs->value() );
}

void p10bSerieAdd()
{
    p10_1b->value(p10_1b->value() + inp_incDecs->value() );
    p10_2b->value(p10_2b->value() + inp_incDecs->value() );
    p10_3b->value(p10_3b->value() + inp_incDecs->value() );
    p10_4b->value(p10_4b->value() + inp_incDecs->value() );
    p10_5b->value(p10_5b->value() + inp_incDecs->value() );
    p10_6b->value(p10_6b->value() + inp_incDecs->value() );
    p10_7b->value(p10_7b->value() + inp_incDecs->value() );
    p10_8b->value(p10_8b->value() + inp_incDecs->value() );
    p10_9b->value(p10_9b->value() + inp_incDecs->value() );
    p10_10b->value(p10_10b->value() + inp_incDecs->value() );
    p10_11b->value(p10_11b->value() + inp_incDecs->value() );
    p10_12b->value(p10_12b->value() + inp_incDecs->value() );
}

void p10bSerieSub()
{
    p10_1b->value(p10_1b->value() - inp_incDecs->value() );
    p10_2b->value(p10_2b->value() - inp_incDecs->value() );
    p10_3b->value(p10_3b->value() - inp_incDecs->value() );
    p10_4b->value(p10_4b->value() - inp_incDecs->value() );
    p10_5b->value(p10_5b->value() - inp_incDecs->value() );
    p10_6b->value(p10_6b->value() - inp_incDecs->value() );
    p10_7b->value(p10_7b->value() - inp_incDecs->value() );
    p10_8b->value(p10_8b->value() - inp_incDecs->value() );
    p10_9b->value(p10_9b->value() - inp_incDecs->value() );
    p10_10b->value(p10_10b->value() - inp_incDecs->value() );
    p10_11b->value(p10_11b->value() - inp_incDecs->value() );
    p10_12b->value(p10_12b->value() - inp_incDecs->value() );
}

void p10bSerieMlt()
{
    p10_1b->value(p10_1b->value() * inp_incDecs->value() );
    p10_2b->value(p10_2b->value() * inp_incDecs->value() );
    p10_3b->value(p10_3b->value() * inp_incDecs->value() );
    p10_4b->value(p10_4b->value() * inp_incDecs->value() );
    p10_5b->value(p10_5b->value() * inp_incDecs->value() );
    p10_6b->value(p10_6b->value() * inp_incDecs->value() );
    p10_7b->value(p10_7b->value() * inp_incDecs->value() );
    p10_8b->value(p10_8b->value() * inp_incDecs->value() );
    p10_9b->value(p10_9b->value() * inp_incDecs->value() );
    p10_10b->value(p10_10b->value() * inp_incDecs->value() );
    p10_11b->value(p10_11b->value() * inp_incDecs->value() );
    p10_12b->value(p10_12b->value() * inp_incDecs->value() );
}

void p10bSerieDiv()
{
    p10_1b->value(p10_1b->value() / inp_incDecs->value() );
    p10_2b->value(p10_2b->value() / inp_incDecs->value() );
    p10_3b->value(p10_3b->value() / inp_incDecs->value() );
    p10_4b->value(p10_4b->value() / inp_incDecs->value() );
    p10_5b->value(p10_5b->value() / inp_incDecs->value() );
    p10_6b->value(p10_6b->value() / inp_incDecs->value() );
    p10_7b->value(p10_7b->value() / inp_incDecs->value() );
    p10_8b->value(p10_8b->value() / inp_incDecs->value() );
    p10_9b->value(p10_9b->value() / inp_incDecs->value() );
    p10_10b->value(p10_10b->value() / inp_incDecs->value() );
    p10_11b->value(p10_11b->value() / inp_incDecs->value() );
    p10_12b->value(p10_12b->value() / inp_incDecs->value() );
}

void p11bSerieAdd()
{
    p11_1b->value(p11_1b->value() + inp_incDecs->value() );
    p11_2b->value(p11_2b->value() + inp_incDecs->value() );
    p11_3b->value(p11_3b->value() + inp_incDecs->value() );
    p11_4b->value(p11_4b->value() + inp_incDecs->value() );
    p11_5b->value(p11_5b->value() + inp_incDecs->value() );
    p11_6b->value(p11_6b->value() + inp_incDecs->value() );
    p11_7b->value(p11_7b->value() + inp_incDecs->value() );
    p11_8b->value(p11_8b->value() + inp_incDecs->value() );
    p11_9b->value(p11_9b->value() + inp_incDecs->value() );
    p11_10b->value(p11_10b->value() + inp_incDecs->value() );
    p11_11b->value(p11_11b->value() + inp_incDecs->value() );
    p11_12b->value(p11_12b->value() + inp_incDecs->value() );
}

void p11bSerieSub()
{
    p11_1b->value(p11_1b->value() - inp_incDecs->value() );
    p11_2b->value(p11_2b->value() - inp_incDecs->value() );
    p11_3b->value(p11_3b->value() - inp_incDecs->value() );
    p11_4b->value(p11_4b->value() - inp_incDecs->value() );
    p11_5b->value(p11_5b->value() - inp_incDecs->value() );
    p11_6b->value(p11_6b->value() - inp_incDecs->value() );
    p11_7b->value(p11_7b->value() - inp_incDecs->value() );
    p11_8b->value(p11_8b->value() - inp_incDecs->value() );
    p11_9b->value(p11_9b->value() - inp_incDecs->value() );
    p11_10b->value(p11_10b->value() - inp_incDecs->value() );
    p11_11b->value(p11_11b->value() - inp_incDecs->value() );
    p11_12b->value(p11_12b->value() - inp_incDecs->value() );
}

void p11bSerieMlt()
{
    p11_1b->value(p11_1b->value() * inp_incDecs->value() );
    p11_2b->value(p11_2b->value() * inp_incDecs->value() );
    p11_3b->value(p11_3b->value() * inp_incDecs->value() );
    p11_4b->value(p11_4b->value() * inp_incDecs->value() );
    p11_5b->value(p11_5b->value() * inp_incDecs->value() );
    p11_6b->value(p11_6b->value() * inp_incDecs->value() );
    p11_7b->value(p11_7b->value() * inp_incDecs->value() );
    p11_8b->value(p11_8b->value() * inp_incDecs->value() );
    p11_9b->value(p11_9b->value() * inp_incDecs->value() );
    p11_10b->value(p11_10b->value() * inp_incDecs->value() );
    p11_11b->value(p11_11b->value() * inp_incDecs->value() );
    p11_12b->value(p11_12b->value() * inp_incDecs->value() );
}

void p11bSerieDiv()
{
    p11_1b->value(p11_1b->value() / inp_incDecs->value() );
    p11_2b->value(p11_2b->value() / inp_incDecs->value() );
    p11_3b->value(p11_3b->value() / inp_incDecs->value() );
    p11_4b->value(p11_4b->value() / inp_incDecs->value() );
    p11_5b->value(p11_5b->value() / inp_incDecs->value() );
    p11_6b->value(p11_6b->value() / inp_incDecs->value() );
    p11_7b->value(p11_7b->value() / inp_incDecs->value() );
    p11_8b->value(p11_8b->value() / inp_incDecs->value() );
    p11_9b->value(p11_9b->value() / inp_incDecs->value() );
    p11_10b->value(p11_10b->value() / inp_incDecs->value() );
    p11_11b->value(p11_11b->value() / inp_incDecs->value() );
    p11_12b->value(p11_12b->value() / inp_incDecs->value() );
}

void p12bSerieAdd()
{
    p12_1b->value(p12_1b->value() + inp_incDecs->value() );
    p12_2b->value(p12_2b->value() + inp_incDecs->value() );
    p12_3b->value(p12_3b->value() + inp_incDecs->value() );
    p12_4b->value(p12_4b->value() + inp_incDecs->value() );
    p12_5b->value(p12_5b->value() + inp_incDecs->value() );
    p12_6b->value(p12_6b->value() + inp_incDecs->value() );
    p12_7b->value(p12_7b->value() + inp_incDecs->value() );
    p12_8b->value(p12_8b->value() + inp_incDecs->value() );
    p12_9b->value(p12_9b->value() + inp_incDecs->value() );
    p12_10b->value(p12_10b->value() + inp_incDecs->value() );
    p12_11b->value(p12_11b->value() + inp_incDecs->value() );
    p12_12b->value(p12_12b->value() + inp_incDecs->value() );
}

void p12bSerieSub()
{
    p12_1b->value(p12_1b->value() - inp_incDecs->value() );
    p12_2b->value(p12_2b->value() - inp_incDecs->value() );
    p12_3b->value(p12_3b->value() - inp_incDecs->value() );
    p12_4b->value(p12_4b->value() - inp_incDecs->value() );
    p12_5b->value(p12_5b->value() - inp_incDecs->value() );
    p12_6b->value(p12_6b->value() - inp_incDecs->value() );
    p12_7b->value(p12_7b->value() - inp_incDecs->value() );
    p12_8b->value(p12_8b->value() - inp_incDecs->value() );
    p12_9b->value(p12_9b->value() - inp_incDecs->value() );
    p12_10b->value(p12_10b->value() - inp_incDecs->value() );
    p12_11b->value(p12_11b->value() - inp_incDecs->value() );
    p12_12b->value(p12_12b->value() - inp_incDecs->value() );
}

void p12bSerieMlt()
{
    p12_1b->value(p12_1b->value() * inp_incDecs->value() );
    p12_2b->value(p12_2b->value() * inp_incDecs->value() );
    p12_3b->value(p12_3b->value() * inp_incDecs->value() );
    p12_4b->value(p12_4b->value() * inp_incDecs->value() );
    p12_5b->value(p12_5b->value() * inp_incDecs->value() );
    p12_6b->value(p12_6b->value() * inp_incDecs->value() );
    p12_7b->value(p12_7b->value() * inp_incDecs->value() );
    p12_8b->value(p12_8b->value() * inp_incDecs->value() );
    p12_9b->value(p12_9b->value() * inp_incDecs->value() );
    p12_10b->value(p12_10b->value() * inp_incDecs->value() );
    p12_11b->value(p12_11b->value() * inp_incDecs->value() );
    p12_12b->value(p12_12b->value() * inp_incDecs->value() );
}

void p12bSerieDiv()
{
    p12_1b->value(p12_1b->value() / inp_incDecs->value() );
    p12_2b->value(p12_2b->value() / inp_incDecs->value() );
    p12_3b->value(p12_3b->value() / inp_incDecs->value() );
    p12_4b->value(p12_4b->value() / inp_incDecs->value() );
    p12_5b->value(p12_5b->value() / inp_incDecs->value() );
    p12_6b->value(p12_6b->value() / inp_incDecs->value() );
    p12_7b->value(p12_7b->value() / inp_incDecs->value() );
    p12_8b->value(p12_8b->value() / inp_incDecs->value() );
    p12_9b->value(p12_9b->value() / inp_incDecs->value() );
    p12_10b->value(p12_10b->value() / inp_incDecs->value() );
    p12_11b->value(p12_11b->value() / inp_incDecs->value() );
    p12_12b->value(p12_12b->value() / inp_incDecs->value() );
}

void p13bSerieAdd()
{
    p13_1b->value(p13_1b->value() + inp_incDecs->value() );
    p13_2b->value(p13_2b->value() + inp_incDecs->value() );
    p13_3b->value(p13_3b->value() + inp_incDecs->value() );
    p13_4b->value(p13_4b->value() + inp_incDecs->value() );
    p13_5b->value(p13_5b->value() + inp_incDecs->value() );
    p13_6b->value(p13_6b->value() + inp_incDecs->value() );
    p13_7b->value(p13_7b->value() + inp_incDecs->value() );
    p13_8b->value(p13_8b->value() + inp_incDecs->value() );
    p13_9b->value(p13_9b->value() + inp_incDecs->value() );
    p13_10b->value(p13_10b->value() + inp_incDecs->value() );
    p13_11b->value(p13_11b->value() + inp_incDecs->value() );
    p13_12b->value(p13_12b->value() + inp_incDecs->value() );
}

void p13bSerieSub()
{
    p13_1b->value(p13_1b->value() - inp_incDecs->value() );
    p13_2b->value(p13_2b->value() - inp_incDecs->value() );
    p13_3b->value(p13_3b->value() - inp_incDecs->value() );
    p13_4b->value(p13_4b->value() - inp_incDecs->value() );
    p13_5b->value(p13_5b->value() - inp_incDecs->value() );
    p13_6b->value(p13_6b->value() - inp_incDecs->value() );
    p13_7b->value(p13_7b->value() - inp_incDecs->value() );
    p13_8b->value(p13_8b->value() - inp_incDecs->value() );
    p13_9b->value(p13_9b->value() - inp_incDecs->value() );
    p13_10b->value(p13_10b->value() - inp_incDecs->value() );
    p13_11b->value(p13_11b->value() - inp_incDecs->value() );
    p13_12b->value(p13_12b->value() - inp_incDecs->value() );
}

void p13bSerieMlt()
{
    p13_1b->value(p13_1b->value() * inp_incDecs->value() );
    p13_2b->value(p13_2b->value() * inp_incDecs->value() );
    p13_3b->value(p13_3b->value() * inp_incDecs->value() );
    p13_4b->value(p13_4b->value() * inp_incDecs->value() );
    p13_5b->value(p13_5b->value() * inp_incDecs->value() );
    p13_6b->value(p13_6b->value() * inp_incDecs->value() );
    p13_7b->value(p13_7b->value() * inp_incDecs->value() );
    p13_8b->value(p13_8b->value() * inp_incDecs->value() );
    p13_9b->value(p13_9b->value() * inp_incDecs->value() );
    p13_10b->value(p13_10b->value() * inp_incDecs->value() );
    p13_11b->value(p13_11b->value() * inp_incDecs->value() );
    p13_12b->value(p13_12b->value() * inp_incDecs->value() );
}

void p13bSerieDiv()
{
    p13_1b->value(p13_1b->value() / inp_incDecs->value() );
    p13_2b->value(p13_2b->value() / inp_incDecs->value() );
    p13_3b->value(p13_3b->value() / inp_incDecs->value() );
    p13_4b->value(p13_4b->value() / inp_incDecs->value() );
    p13_5b->value(p13_5b->value() / inp_incDecs->value() );
    p13_6b->value(p13_6b->value() / inp_incDecs->value() );
    p13_7b->value(p13_7b->value() / inp_incDecs->value() );
    p13_8b->value(p13_8b->value() / inp_incDecs->value() );
    p13_9b->value(p13_9b->value() / inp_incDecs->value() );
    p13_10b->value(p13_10b->value() / inp_incDecs->value() );
    p13_11b->value(p13_11b->value() / inp_incDecs->value() );
    p13_12b->value(p13_12b->value() / inp_incDecs->value() );
}

void p14bSerieAdd()
{
    p14_1b->value(p14_1b->value() + inp_incDecs->value() );
    p14_2b->value(p14_2b->value() + inp_incDecs->value() );
    p14_3b->value(p14_3b->value() + inp_incDecs->value() );
    p14_4b->value(p14_4b->value() + inp_incDecs->value() );
    p14_5b->value(p14_5b->value() + inp_incDecs->value() );
    p14_6b->value(p14_6b->value() + inp_incDecs->value() );
    p14_7b->value(p14_7b->value() + inp_incDecs->value() );
    p14_8b->value(p14_8b->value() + inp_incDecs->value() );
    p14_9b->value(p14_9b->value() + inp_incDecs->value() );
    p14_10b->value(p14_10b->value() + inp_incDecs->value() );
    p14_11b->value(p14_11b->value() + inp_incDecs->value() );
    p14_12b->value(p14_12b->value() + inp_incDecs->value() );
}

void p14bSerieSub()
{
    p14_1b->value(p14_1b->value() - inp_incDecs->value() );
    p14_2b->value(p14_2b->value() - inp_incDecs->value() );
    p14_3b->value(p14_3b->value() - inp_incDecs->value() );
    p14_4b->value(p14_4b->value() - inp_incDecs->value() );
    p14_5b->value(p14_5b->value() - inp_incDecs->value() );
    p14_6b->value(p14_6b->value() - inp_incDecs->value() );
    p14_7b->value(p14_7b->value() - inp_incDecs->value() );
    p14_8b->value(p14_8b->value() - inp_incDecs->value() );
    p14_9b->value(p14_9b->value() - inp_incDecs->value() );
    p14_10b->value(p14_10b->value() - inp_incDecs->value() );
    p14_11b->value(p14_11b->value() - inp_incDecs->value() );
    p14_12b->value(p14_12b->value() - inp_incDecs->value() );
}

void p14bSerieMlt()
{
    p14_1b->value(p14_1b->value() * inp_incDecs->value() );
    p14_2b->value(p14_2b->value() * inp_incDecs->value() );
    p14_3b->value(p14_3b->value() * inp_incDecs->value() );
    p14_4b->value(p14_4b->value() * inp_incDecs->value() );
    p14_5b->value(p14_5b->value() * inp_incDecs->value() );
    p14_6b->value(p14_6b->value() * inp_incDecs->value() );
    p14_7b->value(p14_7b->value() * inp_incDecs->value() );
    p14_8b->value(p14_8b->value() * inp_incDecs->value() );
    p14_9b->value(p14_9b->value() * inp_incDecs->value() );
    p14_10b->value(p14_10b->value() * inp_incDecs->value() );
    p14_11b->value(p14_11b->value() * inp_incDecs->value() );
    p14_12b->value(p14_12b->value() * inp_incDecs->value() );
}

void p14bSerieDiv()
{
    p14_1b->value(p14_1b->value() / inp_incDecs->value() );
    p14_2b->value(p14_2b->value() / inp_incDecs->value() );
    p14_3b->value(p14_3b->value() / inp_incDecs->value() );
    p14_4b->value(p14_4b->value() / inp_incDecs->value() );
    p14_5b->value(p14_5b->value() / inp_incDecs->value() );
    p14_6b->value(p14_6b->value() / inp_incDecs->value() );
    p14_7b->value(p14_7b->value() / inp_incDecs->value() );
    p14_8b->value(p14_8b->value() / inp_incDecs->value() );
    p14_9b->value(p14_9b->value() / inp_incDecs->value() );
    p14_10b->value(p14_10b->value() / inp_incDecs->value() );
    p14_11b->value(p14_11b->value() / inp_incDecs->value() );
    p14_12b->value(p14_12b->value() / inp_incDecs->value() );
}

void p15bSerieAdd()
{
    p15_1b->value(p15_1b->value() + inp_incDecs->value() );
    p15_2b->value(p15_2b->value() + inp_incDecs->value() );
    p15_3b->value(p15_3b->value() + inp_incDecs->value() );
    p15_4b->value(p15_4b->value() + inp_incDecs->value() );
    p15_5b->value(p15_5b->value() + inp_incDecs->value() );
    p15_6b->value(p15_6b->value() + inp_incDecs->value() );
    p15_7b->value(p15_7b->value() + inp_incDecs->value() );
    p15_8b->value(p15_8b->value() + inp_incDecs->value() );
    p15_9b->value(p15_9b->value() + inp_incDecs->value() );
    p15_10b->value(p15_10b->value() + inp_incDecs->value() );
    p15_11b->value(p15_11b->value() + inp_incDecs->value() );
    p15_12b->value(p15_12b->value() + inp_incDecs->value() );
}

void p15bSerieSub()
{
    p15_1b->value(p15_1b->value() - inp_incDecs->value() );
    p15_2b->value(p15_2b->value() - inp_incDecs->value() );
    p15_3b->value(p15_3b->value() - inp_incDecs->value() );
    p15_4b->value(p15_4b->value() - inp_incDecs->value() );
    p15_5b->value(p15_5b->value() - inp_incDecs->value() );
    p15_6b->value(p15_6b->value() - inp_incDecs->value() );
    p15_7b->value(p15_7b->value() - inp_incDecs->value() );
    p15_8b->value(p15_8b->value() - inp_incDecs->value() );
    p15_9b->value(p15_9b->value() - inp_incDecs->value() );
    p15_10b->value(p15_10b->value() - inp_incDecs->value() );
    p15_11b->value(p15_11b->value() - inp_incDecs->value() );
    p15_12b->value(p15_12b->value() - inp_incDecs->value() );
}

void p15bSerieMlt()
{
    p15_1b->value(p15_1b->value() * inp_incDecs->value() );
    p15_2b->value(p15_2b->value() * inp_incDecs->value() );
    p15_3b->value(p15_3b->value() * inp_incDecs->value() );
    p15_4b->value(p15_4b->value() * inp_incDecs->value() );
    p15_5b->value(p15_5b->value() * inp_incDecs->value() );
    p15_6b->value(p15_6b->value() * inp_incDecs->value() );
    p15_7b->value(p15_7b->value() * inp_incDecs->value() );
    p15_8b->value(p15_8b->value() * inp_incDecs->value() );
    p15_9b->value(p15_9b->value() * inp_incDecs->value() );
    p15_10b->value(p15_10b->value() * inp_incDecs->value() );
    p15_11b->value(p15_11b->value() * inp_incDecs->value() );
    p15_12b->value(p15_12b->value() * inp_incDecs->value() );
}

void p15bSerieDiv()
{
    p15_1b->value(p15_1b->value() / inp_incDecs->value() );
    p15_2b->value(p15_2b->value() / inp_incDecs->value() );
    p15_3b->value(p15_3b->value() / inp_incDecs->value() );
    p15_4b->value(p15_4b->value() / inp_incDecs->value() );
    p15_5b->value(p15_5b->value() / inp_incDecs->value() );
    p15_6b->value(p15_6b->value() / inp_incDecs->value() );
    p15_7b->value(p15_7b->value() / inp_incDecs->value() );
    p15_8b->value(p15_8b->value() / inp_incDecs->value() );
    p15_9b->value(p15_9b->value() / inp_incDecs->value() );
    p15_10b->value(p15_10b->value() / inp_incDecs->value() );
    p15_11b->value(p15_11b->value() / inp_incDecs->value() );
    p15_12b->value(p15_12b->value() / inp_incDecs->value() );
}

////////////////////////////////////////////////

void incDecPitch_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { pitchSerieAdd(); }
    else 
    if (chOperator->value() == 1) { pitchSerieSub(); }
    else 
    if (chOperator->value() == 2) { pitchSerieMlt(); }
    else 
    if (chOperator->value() == 3) { pitchSerieDiv(); }
}

void incDecDur_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { durSerieAdd(); }
    else 
    if (chOperator->value() == 1) { durSerieSub(); }
    else 
    if (chOperator->value() == 2) { durSerieMlt(); }
    else 
    if (chOperator->value() == 3) { durSerieDiv(); }
}

void incDecDb_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { dbSerieAdd(); }
    else 
    if (chOperator->value() == 1) { dbSerieSub(); }
    else 
    if (chOperator->value() == 2) { dbSerieMlt(); }
    else 
    if (chOperator->value() == 3) { dbSerieDiv(); }
}

void incDecInstr_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { instrSerieAdd(); }
    else 
    if (chOperator->value() == 1) { instrSerieSub(); }
    else 
    if (chOperator->value() == 2) { instrSerieMlt(); }
    else 
    if (chOperator->value() == 3) { instrSerieDiv(); }
}

void incDecAct_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { actSerieAdd(); }
    else 
    if (chOperator->value() == 1) { actSerieSub(); }
    else 
    if (chOperator->value() == 2) { actSerieMlt(); }
    else 
    if (chOperator->value() == 3) { actSerieDiv(); }
}

void incDecp6_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p6SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p6SerieSub(); }
    else 
    if (chOperator->value() == 2) { p6SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p6SerieDiv(); }
}

void incDecp7_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p7SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p7SerieSub(); }
    else 
    if (chOperator->value() == 2) { p7SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p7SerieDiv(); }
}

void incDecp8_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p8SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p8SerieSub(); }
    else 
    if (chOperator->value() == 2) { p8SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p8SerieDiv(); }
}

void incDecp9_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p9SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p9SerieSub(); }
    else 
    if (chOperator->value() == 2) { p9SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p9SerieDiv(); }
}

void incDecp10_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p10SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p10SerieSub(); }
    else 
    if (chOperator->value() == 2) { p10SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p10SerieDiv(); }
}

void incDecp11_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p11SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p11SerieSub(); }
    else 
    if (chOperator->value() == 2) { p11SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p11SerieDiv(); }
}

void incDecp12_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p12SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p12SerieSub(); }
    else 
    if (chOperator->value() == 2) { p12SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p12SerieDiv(); }
}

void incDecp13_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p13SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p13SerieSub(); }
    else 
    if (chOperator->value() == 2) { p13SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p13SerieDiv(); }
}

void incDecp14_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p14SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p14SerieSub(); }
    else 
    if (chOperator->value() == 2) { p14SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p14SerieDiv(); }
}

void incDecp15_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p15SerieAdd(); }
    else 
    if (chOperator->value() == 1) { p15SerieSub(); }
    else 
    if (chOperator->value() == 2) { p15SerieMlt(); }
    else 
    if (chOperator->value() == 3) { p15SerieDiv(); }
}

void incDecp6b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p6bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p6bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p6bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p6bSerieDiv(); }
}

void incDecp7b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p7bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p7bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p7bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p7bSerieDiv(); }
}

void incDecp8b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p8bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p8bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p8bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p8bSerieDiv(); }
}

void incDecp9b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p9bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p9bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p9bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p9bSerieDiv(); }
}

void incDecp10b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p10bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p10bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p10bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p10bSerieDiv(); }
}

void incDecp11b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p11bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p11bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p11bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p11bSerieDiv(); }
}

void incDecp12b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p12bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p12bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p12bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p12bSerieDiv(); }
}

void incDecp13b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p13bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p13bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p13bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p13bSerieDiv(); }
}

void incDecp14b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p14bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p14bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p14bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p14bSerieDiv(); }
}

void incDecp15b_cb(Fl_Widget*,void*)
{
    if (chOperator->value() == 0) { p15bSerieAdd(); }
    else 
    if (chOperator->value() == 1) { p15bSerieSub(); }
    else 
    if (chOperator->value() == 2) { p15bSerieMlt(); }
    else 
    if (chOperator->value() == 3) { p15bSerieDiv(); }
}


void setPitchValues_cb(Fl_Widget*,void*)
{
    pch_1->value(inp_setValue->value());
    pch_2->value(inp_setValue->value());
    pch_3->value(inp_setValue->value());
    pch_4->value(inp_setValue->value());
    pch_5->value(inp_setValue->value());
    pch_6->value(inp_setValue->value());
    pch_7->value(inp_setValue->value());
    pch_8->value(inp_setValue->value());
    pch_9->value(inp_setValue->value());
    pch_10->value(inp_setValue->value());
    pch_11->value(inp_setValue->value());
    pch_12->value(inp_setValue->value());
}

void setDurValues_cb(Fl_Widget*,void*)
{
    dur_1->value(inp_setValue->value());
    dur_2->value(inp_setValue->value());
    dur_3->value(inp_setValue->value());
    dur_4->value(inp_setValue->value());
    dur_5->value(inp_setValue->value());
    dur_6->value(inp_setValue->value());
    dur_7->value(inp_setValue->value());
    dur_8->value(inp_setValue->value());
    dur_9->value(inp_setValue->value());
    dur_10->value(inp_setValue->value());
    dur_11->value(inp_setValue->value());
    dur_12->value(inp_setValue->value());
}

void setDbValues_cb(Fl_Widget*,void*)
{
    db_1->value(inp_setValue->value());
    db_2->value(inp_setValue->value());
    db_3->value(inp_setValue->value());
    db_4->value(inp_setValue->value());
    db_5->value(inp_setValue->value());
    db_6->value(inp_setValue->value());
    db_7->value(inp_setValue->value());
    db_8->value(inp_setValue->value());
    db_9->value(inp_setValue->value());
    db_10->value(inp_setValue->value());
    db_11->value(inp_setValue->value());
    db_12->value(inp_setValue->value());
}

void setInstrValues_cb(Fl_Widget*,void*)
{
    instr_1->value(inp_setValue->value());
    instr_2->value(inp_setValue->value());
    instr_3->value(inp_setValue->value());
    instr_4->value(inp_setValue->value());
    instr_5->value(inp_setValue->value());
    instr_6->value(inp_setValue->value());
    instr_7->value(inp_setValue->value());
    instr_8->value(inp_setValue->value());
    instr_9->value(inp_setValue->value());
    instr_10->value(inp_setValue->value());
    instr_11->value(inp_setValue->value());
    instr_12->value(inp_setValue->value());
}

void setActValues_cb(Fl_Widget*,void*)
{
    act_1->value(inp_setValue->value());
    act_2->value(inp_setValue->value());
    act_3->value(inp_setValue->value());
    act_4->value(inp_setValue->value());
    act_5->value(inp_setValue->value());
    act_6->value(inp_setValue->value());
    act_7->value(inp_setValue->value());
    act_8->value(inp_setValue->value());
    act_9->value(inp_setValue->value());
    act_10->value(inp_setValue->value());
    act_11->value(inp_setValue->value());
    act_12->value(inp_setValue->value());
}

void setp6Values_cb(Fl_Widget*,void*)
{
    p6_1->value(inp_setValue->value());
    p6_2->value(inp_setValue->value());
    p6_3->value(inp_setValue->value());
    p6_4->value(inp_setValue->value());
    p6_5->value(inp_setValue->value());
    p6_6->value(inp_setValue->value());
    p6_7->value(inp_setValue->value());
    p6_8->value(inp_setValue->value());
    p6_9->value(inp_setValue->value());
    p6_10->value(inp_setValue->value());
    p6_11->value(inp_setValue->value());
    p6_12->value(inp_setValue->value());
}

void setp7Values_cb(Fl_Widget*,void*)
{
    p7_1->value(inp_setValue->value());
    p7_2->value(inp_setValue->value());
    p7_3->value(inp_setValue->value());
    p7_4->value(inp_setValue->value());
    p7_5->value(inp_setValue->value());
    p7_6->value(inp_setValue->value());
    p7_7->value(inp_setValue->value());
    p7_8->value(inp_setValue->value());
    p7_9->value(inp_setValue->value());
    p7_10->value(inp_setValue->value());
    p7_11->value(inp_setValue->value());
    p7_12->value(inp_setValue->value());
}

void setp8Values_cb(Fl_Widget*,void*)
{
    p8_1->value(inp_setValue->value());
    p8_2->value(inp_setValue->value());
    p8_3->value(inp_setValue->value());
    p8_4->value(inp_setValue->value());
    p8_5->value(inp_setValue->value());
    p8_6->value(inp_setValue->value());
    p8_7->value(inp_setValue->value());
    p8_8->value(inp_setValue->value());
    p8_9->value(inp_setValue->value());
    p8_10->value(inp_setValue->value());
    p8_11->value(inp_setValue->value());
    p8_12->value(inp_setValue->value());
}

void setp9Values_cb(Fl_Widget*,void*)
{
    p9_1->value(inp_setValue->value());
    p9_2->value(inp_setValue->value());
    p9_3->value(inp_setValue->value());
    p9_4->value(inp_setValue->value());
    p9_5->value(inp_setValue->value());
    p9_6->value(inp_setValue->value());
    p9_7->value(inp_setValue->value());
    p9_8->value(inp_setValue->value());
    p9_9->value(inp_setValue->value());
    p9_10->value(inp_setValue->value());
    p9_11->value(inp_setValue->value());
    p9_12->value(inp_setValue->value());
}

void setp10Values_cb(Fl_Widget*,void*)
{
    p10_1->value(inp_setValue->value());
    p10_2->value(inp_setValue->value());
    p10_3->value(inp_setValue->value());
    p10_4->value(inp_setValue->value());
    p10_5->value(inp_setValue->value());
    p10_6->value(inp_setValue->value());
    p10_7->value(inp_setValue->value());
    p10_8->value(inp_setValue->value());
    p10_9->value(inp_setValue->value());
    p10_10->value(inp_setValue->value());
    p10_11->value(inp_setValue->value());
    p10_12->value(inp_setValue->value());
}

void setp11Values_cb(Fl_Widget*,void*)
{
    p11_1->value(inp_setValue->value());
    p11_2->value(inp_setValue->value());
    p11_3->value(inp_setValue->value());
    p11_4->value(inp_setValue->value());
    p11_5->value(inp_setValue->value());
    p11_6->value(inp_setValue->value());
    p11_7->value(inp_setValue->value());
    p11_8->value(inp_setValue->value());
    p11_9->value(inp_setValue->value());
    p11_10->value(inp_setValue->value());
    p11_11->value(inp_setValue->value());
    p11_12->value(inp_setValue->value());
}

void setp12Values_cb(Fl_Widget*,void*)
{
    p12_1->value(inp_setValue->value());
    p12_2->value(inp_setValue->value());
    p12_3->value(inp_setValue->value());
    p12_4->value(inp_setValue->value());
    p12_5->value(inp_setValue->value());
    p12_6->value(inp_setValue->value());
    p12_7->value(inp_setValue->value());
    p12_8->value(inp_setValue->value());
    p12_9->value(inp_setValue->value());
    p12_10->value(inp_setValue->value());
    p12_11->value(inp_setValue->value());
    p12_12->value(inp_setValue->value());
}

void setp13Values_cb(Fl_Widget*,void*)
{
    p13_1->value(inp_setValue->value());
    p13_2->value(inp_setValue->value());
    p13_3->value(inp_setValue->value());
    p13_4->value(inp_setValue->value());
    p13_5->value(inp_setValue->value());
    p13_6->value(inp_setValue->value());
    p13_7->value(inp_setValue->value());
    p13_8->value(inp_setValue->value());
    p13_9->value(inp_setValue->value());
    p13_10->value(inp_setValue->value());
    p13_11->value(inp_setValue->value());
    p13_12->value(inp_setValue->value());
}

void setp14Values_cb(Fl_Widget*,void*)
{
    p14_1->value(inp_setValue->value());
    p14_2->value(inp_setValue->value());
    p14_3->value(inp_setValue->value());
    p14_4->value(inp_setValue->value());
    p14_5->value(inp_setValue->value());
    p14_6->value(inp_setValue->value());
    p14_7->value(inp_setValue->value());
    p14_8->value(inp_setValue->value());
    p14_9->value(inp_setValue->value());
    p14_10->value(inp_setValue->value());
    p14_11->value(inp_setValue->value());
    p14_12->value(inp_setValue->value());
}

void setp15Values_cb(Fl_Widget*,void*)
{
    p15_1->value(inp_setValue->value());
    p15_2->value(inp_setValue->value());
    p15_3->value(inp_setValue->value());
    p15_4->value(inp_setValue->value());
    p15_5->value(inp_setValue->value());
    p15_6->value(inp_setValue->value());
    p15_7->value(inp_setValue->value());
    p15_8->value(inp_setValue->value());
    p15_9->value(inp_setValue->value());
    p15_10->value(inp_setValue->value());
    p15_11->value(inp_setValue->value());
    p15_12->value(inp_setValue->value());
}

void setp6bValues_cb(Fl_Widget*,void*)
{
    p6_1b->value(inp_setValue->value());
    p6_2b->value(inp_setValue->value());
    p6_3b->value(inp_setValue->value());
    p6_4b->value(inp_setValue->value());
    p6_5b->value(inp_setValue->value());
    p6_6b->value(inp_setValue->value());
    p6_7b->value(inp_setValue->value());
    p6_8b->value(inp_setValue->value());
    p6_9b->value(inp_setValue->value());
    p6_10b->value(inp_setValue->value());
    p6_11b->value(inp_setValue->value());
    p6_12b->value(inp_setValue->value());
}

void setp7bValues_cb(Fl_Widget*,void*)
{
    p7_1b->value(inp_setValue->value());
    p7_2b->value(inp_setValue->value());
    p7_3b->value(inp_setValue->value());
    p7_4b->value(inp_setValue->value());
    p7_5b->value(inp_setValue->value());
    p7_6b->value(inp_setValue->value());
    p7_7b->value(inp_setValue->value());
    p7_8b->value(inp_setValue->value());
    p7_9b->value(inp_setValue->value());
    p7_10b->value(inp_setValue->value());
    p7_11b->value(inp_setValue->value());
    p7_12b->value(inp_setValue->value());
}

void setp8bValues_cb(Fl_Widget*,void*)
{
    p8_1b->value(inp_setValue->value());
    p8_2b->value(inp_setValue->value());
    p8_3b->value(inp_setValue->value());
    p8_4b->value(inp_setValue->value());
    p8_5b->value(inp_setValue->value());
    p8_6b->value(inp_setValue->value());
    p8_7b->value(inp_setValue->value());
    p8_8b->value(inp_setValue->value());
    p8_9b->value(inp_setValue->value());
    p8_10b->value(inp_setValue->value());
    p8_11b->value(inp_setValue->value());
    p8_12b->value(inp_setValue->value());
}

void setp9bValues_cb(Fl_Widget*,void*)
{
    p9_1b->value(inp_setValue->value());
    p9_2b->value(inp_setValue->value());
    p9_3b->value(inp_setValue->value());
    p9_4b->value(inp_setValue->value());
    p9_5b->value(inp_setValue->value());
    p9_6b->value(inp_setValue->value());
    p9_7b->value(inp_setValue->value());
    p9_8b->value(inp_setValue->value());
    p9_9b->value(inp_setValue->value());
    p9_10b->value(inp_setValue->value());
    p9_11b->value(inp_setValue->value());
    p9_12b->value(inp_setValue->value());
}

void setp10bValues_cb(Fl_Widget*,void*)
{
    p10_1b->value(inp_setValue->value());
    p10_2b->value(inp_setValue->value());
    p10_3b->value(inp_setValue->value());
    p10_4b->value(inp_setValue->value());
    p10_5b->value(inp_setValue->value());
    p10_6b->value(inp_setValue->value());
    p10_7b->value(inp_setValue->value());
    p10_8b->value(inp_setValue->value());
    p10_9b->value(inp_setValue->value());
    p10_10b->value(inp_setValue->value());
    p10_11b->value(inp_setValue->value());
    p10_12b->value(inp_setValue->value());
}

void setp11bValues_cb(Fl_Widget*,void*)
{
    p11_1b->value(inp_setValue->value());
    p11_2b->value(inp_setValue->value());
    p11_3b->value(inp_setValue->value());
    p11_4b->value(inp_setValue->value());
    p11_5b->value(inp_setValue->value());
    p11_6b->value(inp_setValue->value());
    p11_7b->value(inp_setValue->value());
    p11_8b->value(inp_setValue->value());
    p11_9b->value(inp_setValue->value());
    p11_10b->value(inp_setValue->value());
    p11_11b->value(inp_setValue->value());
    p11_12b->value(inp_setValue->value());
}

void setp12bValues_cb(Fl_Widget*,void*)
{
    p12_1b->value(inp_setValue->value());
    p12_2b->value(inp_setValue->value());
    p12_3b->value(inp_setValue->value());
    p12_4b->value(inp_setValue->value());
    p12_5b->value(inp_setValue->value());
    p12_6b->value(inp_setValue->value());
    p12_7b->value(inp_setValue->value());
    p12_8b->value(inp_setValue->value());
    p12_9b->value(inp_setValue->value());
    p12_10b->value(inp_setValue->value());
    p12_11b->value(inp_setValue->value());
    p12_12b->value(inp_setValue->value());
}

void setp13bValues_cb(Fl_Widget*,void*)
{
    p13_1b->value(inp_setValue->value());
    p13_2b->value(inp_setValue->value());
    p13_3b->value(inp_setValue->value());
    p13_4b->value(inp_setValue->value());
    p13_5b->value(inp_setValue->value());
    p13_6b->value(inp_setValue->value());
    p13_7b->value(inp_setValue->value());
    p13_8b->value(inp_setValue->value());
    p13_9b->value(inp_setValue->value());
    p13_10b->value(inp_setValue->value());
    p13_11b->value(inp_setValue->value());
    p13_12b->value(inp_setValue->value());
}

void setp14bValues_cb(Fl_Widget*,void*)
{
    p14_1b->value(inp_setValue->value());
    p14_2b->value(inp_setValue->value());
    p14_3b->value(inp_setValue->value());
    p14_4b->value(inp_setValue->value());
    p14_5b->value(inp_setValue->value());
    p14_6b->value(inp_setValue->value());
    p14_7b->value(inp_setValue->value());
    p14_8b->value(inp_setValue->value());
    p14_9b->value(inp_setValue->value());
    p14_10b->value(inp_setValue->value());
    p14_11b->value(inp_setValue->value());
    p14_12b->value(inp_setValue->value());
}

void setp15bValues_cb(Fl_Widget*,void*)
{
    p15_1b->value(inp_setValue->value());
    p15_2b->value(inp_setValue->value());
    p15_3b->value(inp_setValue->value());
    p15_4b->value(inp_setValue->value());
    p15_5b->value(inp_setValue->value());
    p15_6b->value(inp_setValue->value());
    p15_7b->value(inp_setValue->value());
    p15_8b->value(inp_setValue->value());
    p15_9b->value(inp_setValue->value());
    p15_10b->value(inp_setValue->value());
    p15_11b->value(inp_setValue->value());
    p15_12b->value(inp_setValue->value());
}


void resetCounter_cb(Fl_Widget*,void*)
{
    nserie->value(0);
}
 
void runCs()
{
    system(csLine->value());

}

void runCs_cb(Fl_Widget*,void*)
{
    runCs();
}

void runAudioFile()
{
    system(wavLine->value());
}

void runAudioFile_cb(Fl_Widget*,void*)
{
    runAudioFile();
}
