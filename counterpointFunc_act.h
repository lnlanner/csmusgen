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
void ini_act()
{
  init_act[0] = act_1->value();
  init_act[1] = act_2->value();
  init_act[2] = act_3->value();
  init_act[3] = act_4->value();
  init_act[4] = act_5->value();
  init_act[5] = act_6->value();
  init_act[6] = act_7->value();
  init_act[7] = act_8->value();
  init_act[8] = act_9->value();
  init_act[9] = act_10->value();
  init_act[10] = act_11->value();
  init_act[11] = act_12->value();
}


void contrappunto::act_lim_input()
{
    act_min_ = (int)min_act->value();
    act_max_ = (int)max_act->value();
}

void contrappunto::subset_act()
{
  formula formula;
  act_lim_input();
  //////////INITIALIZE ACT SUBSET/////
    int sub_tact_size = (int)act_max_ - (int)act_min_;
    float *sub_tact = new float[sub_tact_size];

    init_params();
    int indice = (int)act_min_;
    int i;
    for (i = 0; i < sub_tact_size; i++)
    {
        sub_tact[i] = tact[indice];
        indice++;
    }
  ///////////////////////////////////////////////////////////
  if (logic_a->value() == 1)
    {
      formula.trp_seq_tact();
      init_params();
      act_1->value(sub_tact[formula.j_act1]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      }
    }

  else if (logic_a->value() == 2)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      }
    }

  else if (logic_a->value() == 3)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      }
    }

    else if (logic_a->value() == 4)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      }
    }

  else if (logic_a->value() == 5)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      }
    }

    else if (logic_a->value() == 6)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      act_6->value(sub_tact[formula.j_act6]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      act_6->value(act_6->value() + o);
      }
    }

  else if (logic_a->value() == 7)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      act_6->value(sub_tact[formula.j_act6]);
      act_7->value(sub_tact[formula.j_act7]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      act_6->value(act_6->value() + o);
      act_7->value(act_7->value() + o);
      }
    }

  else if (logic_a->value() == 8)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      act_6->value(sub_tact[formula.j_act6]);
      act_7->value(sub_tact[formula.j_act7]);
      act_8->value(sub_tact[formula.j_act8]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      act_6->value(act_6->value() + o);
      act_7->value(act_7->value() + o);
      act_8->value(act_8->value() + o);
      }
    }

  else if (logic_a->value() == 9)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      act_6->value(sub_tact[formula.j_act6]);
      act_7->value(sub_tact[formula.j_act7]);
      act_8->value(sub_tact[formula.j_act8]);
      act_9->value(sub_tact[formula.j_act9]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      act_6->value(act_6->value() + o);
      act_7->value(act_7->value() + o);
      act_8->value(act_8->value() + o);
      act_9->value(act_9->value() + o);
      }
    }

  else if (logic_a->value() == 10)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      act_6->value(sub_tact[formula.j_act6]);

      act_7->value(sub_tact[formula.j_act7]);
      act_8->value(sub_tact[formula.j_act8]);
      act_9->value(sub_tact[formula.j_act9]);
      act_10->value(sub_tact[formula.j_act10]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      act_6->value(act_6->value() + o);
      act_7->value(act_7->value() + o);
      act_8->value(act_8->value() + o);
      act_9->value(act_9->value() + o);
      act_10->value(act_10->value() + o);
      }
    }

  else if (logic_a->value() == 11)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      act_6->value(sub_tact[formula.j_act6]);
      act_7->value(sub_tact[formula.j_act7]);
      act_8->value(sub_tact[formula.j_act8]);
      act_9->value(sub_tact[formula.j_act9]);
      act_10->value(sub_tact[formula.j_act10]);
      act_11->value(sub_tact[formula.j_act11]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      act_6->value(act_6->value() + o);
      act_7->value(act_7->value() + o);
      act_8->value(act_8->value() + o);
      act_9->value(act_9->value() + o);
      act_10->value(act_10->value() + o);
      act_11->value(act_11->value() + o);
      }
    }

  else if (logic_a->value() == 12)
    {
      formula.trp_seq_tact();
      init_params();

      act_1->value(sub_tact[formula.j_act1]);
      act_2->value(sub_tact[formula.j_act2]);
      act_3->value(sub_tact[formula.j_act3]);
      act_4->value(sub_tact[formula.j_act4]);
      act_5->value(sub_tact[formula.j_act5]);
      act_6->value(sub_tact[formula.j_act6]);
      act_7->value(sub_tact[formula.j_act7]);
      act_8->value(sub_tact[formula.j_act8]);
      act_9->value(sub_tact[formula.j_act9]);
      act_10->value(sub_tact[formula.j_act10]);
      act_11->value(sub_tact[formula.j_act11]);
      act_12->value(sub_tact[formula.j_act12]);
      {
      select_val(); //this function is in counterpointFunc.h
      act_1->value(act_1->value() + o);
      act_2->value(act_2->value() + o);
      act_3->value(act_3->value() + o);
      act_4->value(act_4->value() + o);
      act_5->value(act_5->value() + o);
      act_6->value(act_6->value() + o);
      act_7->value(act_7->value() + o);
      act_8->value(act_8->value() + o);
      act_9->value(act_9->value() + o);
      act_10->value(act_10->value() + o);
      act_11->value(act_11->value() + o);
      act_12->value(act_12->value() + o);
      }
    }
     delete [] sub_tact;
}

void contrappunto::init_act_serie()
{
  if (bt_calc_act->value() == 1)
  {
    if (bt_enable_act->value() == 1)
    {
        subset_act();
    }
  }
    int i;
    ini_act();
    for (i = 0; i < 12; i++)
    {
      serie_act[i] = init_act[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retroact()
{
  if (bt_enable_act->value() == 1)
  {
  subset_act();
  }
  init_act_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_act[s];
    s--;
  }
}


void retro_act()
{
  contrappunto ob;
  ob.retroact();
  act_1->value(ob.serie_manip[0]);
  act_2->value(ob.serie_manip[1]);
  act_3->value(ob.serie_manip[2]);
  act_4->value(ob.serie_manip[3]);
  act_5->value(ob.serie_manip[4]);
  act_6->value(ob.serie_manip[5]);
  act_7->value(ob.serie_manip[6]);
  act_8->value(ob.serie_manip[7]);
  act_9->value(ob.serie_manip[8]);
  act_10->value(ob.serie_manip[9]);
  act_11->value(ob.serie_manip[10]);
  act_12->value(ob.serie_manip[11]);
}

void retroact_cb(Fl_Widget*,void*)
{
  retro_act();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::croceact()
{
  init_act_serie();
  serie_manip[0] = serie_act[11];
  serie_manip[1] = serie_act[0];
  serie_manip[2] = serie_act[10];
  serie_manip[3] = serie_act[1];
  serie_manip[4] = serie_act[9];
  serie_manip[5] = serie_act[2];
  serie_manip[6] = serie_act[8];
  serie_manip[7] = serie_act[3];
  serie_manip[8] = serie_act[7];
  serie_manip[9] = serie_act[4];
  serie_manip[10] = serie_act[6];
  serie_manip[11] = serie_act[5];
}


void croce_act()
{
  contrappunto ob;
  ob.croceact();
  act_1->value(ob.serie_manip[0]);
  act_2->value(ob.serie_manip[1]);
  act_3->value(ob.serie_manip[2]);
  act_4->value(ob.serie_manip[3]);
  act_5->value(ob.serie_manip[4]);
  act_6->value(ob.serie_manip[5]);
  act_7->value(ob.serie_manip[6]);
  act_8->value(ob.serie_manip[7]);
  act_9->value(ob.serie_manip[8]);
  act_10->value(ob.serie_manip[9]);
  act_11->value(ob.serie_manip[10]);
  act_12->value(ob.serie_manip[11]);
}

void croceact_cb(Fl_Widget*,void*)
{
  croce_act();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slideact()
{
  init_act_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_act[s];
    s++;
  }
    serie_manip[11] = serie_act[0];
}

void slide_act()
{
  contrappunto ob;
  ob.slideact();
  act_1->value(ob.serie_manip[0]);
  act_2->value(ob.serie_manip[1]);
  act_3->value(ob.serie_manip[2]);
  act_4->value(ob.serie_manip[3]);
  act_5->value(ob.serie_manip[4]);
  act_6->value(ob.serie_manip[5]);
  act_7->value(ob.serie_manip[6]);
  act_8->value(ob.serie_manip[7]);
  act_9->value(ob.serie_manip[8]);
  act_10->value(ob.serie_manip[9]);
  act_11->value(ob.serie_manip[10]);
  act_12->value(ob.serie_manip[11]);
}

void slideact_cb(Fl_Widget*,void*)
{
  slide_act();
}

/////////////JUMP1

void contrappunto::jump_oneact()
{
  init_act_serie();
  serie_manip[0] = serie_act[1];
  serie_manip[1] = serie_act[3];
  serie_manip[2] = serie_act[5];
  serie_manip[3] = serie_act[7];
  serie_manip[4] = serie_act[9];
  serie_manip[5] = serie_act[11];
  serie_manip[6] = serie_act[0];
  serie_manip[7] = serie_act[2];
  serie_manip[8] = serie_act[4];
  serie_manip[9] = serie_act[6];
  serie_manip[10] = serie_act[8];
  serie_manip[11] = serie_act[10];
}


void jumpone_act()
{
  contrappunto ob;
  ob.jump_oneact();
  act_1->value(ob.serie_manip[0]);
  act_2->value(ob.serie_manip[1]);
  act_3->value(ob.serie_manip[2]);
  act_4->value(ob.serie_manip[3]);
  act_5->value(ob.serie_manip[4]);
  act_6->value(ob.serie_manip[5]);
  act_7->value(ob.serie_manip[6]);
  act_8->value(ob.serie_manip[7]);
  act_9->value(ob.serie_manip[8]);
  act_10->value(ob.serie_manip[9]);
  act_11->value(ob.serie_manip[10]);
  act_12->value(ob.serie_manip[11]);

}

void jumpOneact_cb(Fl_Widget*,void*)
{
  jumpone_act();
}

///////////JUMP1

