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
void actTime();

void ini_dur()
{
  init_dur[0] = dur_1->value();
  init_dur[1] = dur_2->value();
  init_dur[2] = dur_3->value();
  init_dur[3] = dur_4->value();
  init_dur[4] = dur_5->value();
  init_dur[5] = dur_6->value();
  init_dur[6] = dur_7->value();
  init_dur[7] = dur_8->value();
  init_dur[8] = dur_9->value();
  init_dur[9] = dur_10->value();
  init_dur[10] = dur_11->value();
  init_dur[11] = dur_12->value();
}

void contrappunto::dur_lim_input()
{
    dur_min_ = (int)min_dur->value();
    dur_max_ = (int)max_dur->value();
}

void contrappunto::subset_dur()
{
  formula formula;
  dur_lim_input();
  //////////INITIALIZE DUR SUBSET/////
    int sub_tdur_size = (int)dur_max_ - (int)dur_min_;
    float *sub_tdur = new float[sub_tdur_size];

    init_params();
    int indice = (int)dur_min_;
    int i;
    for (i = 0; i < sub_tdur_size; i++)
    {
        sub_tdur[i] = tdur[indice];
        indice++;
    }
  ///////////////////////////////////////////////////////////
  window->redraw();
  if (logic_a->value() == 1)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      {
      select_val(); //questa funzione si trova nel file counterpointFunc.h
      dur_1->value(dur_1->value() + o);
      }
    }


  else if (logic_a->value() == 2)
    {
      formula.trp_seq_tdur();
       dur_1->value(sub_tdur[formula.j_d1]);
       dur_2->value(sub_tdur[formula.j_d2]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      }
    }

  else if (logic_a->value() == 3)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      }
    }

    else if (logic_a->value() == 4)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      }
   }

  else if (logic_a->value() == 5)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      }
    }

    else if (logic_a->value() == 6)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      dur_6->value(sub_tdur[formula.j_d6]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      dur_6->value(dur_6->value() + o);
      }
    }

  else if (logic_a->value() == 7)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      dur_6->value(sub_tdur[formula.j_d6]);
      dur_7->value(sub_tdur[formula.j_d7]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      dur_6->value(dur_6->value() + o);
      dur_7->value(dur_7->value() + o);
      }
    }

  else if (logic_a->value() == 8)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      dur_6->value(sub_tdur[formula.j_d6]);
      dur_7->value(sub_tdur[formula.j_d7]);
      dur_8->value(sub_tdur[formula.j_d8]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      dur_6->value(dur_6->value() + o);
      dur_7->value(dur_7->value() + o);
      dur_8->value(dur_8->value() + o);
      }
    }

  else if (logic_a->value() == 9)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      dur_6->value(sub_tdur[formula.j_d6]);
      dur_7->value(sub_tdur[formula.j_d7]);
      dur_8->value(sub_tdur[formula.j_d8]);
      dur_9->value(sub_tdur[formula.j_d9]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      dur_6->value(dur_6->value() + o);
      dur_7->value(dur_7->value() + o);
      dur_8->value(dur_8->value() + o);
      dur_9->value(dur_9->value() + o);
      }
    }

  else if (logic_a->value() == 10)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      dur_6->value(sub_tdur[formula.j_d6]);
      dur_7->value(sub_tdur[formula.j_d7]);
      dur_8->value(sub_tdur[formula.j_d8]);
      dur_9->value(sub_tdur[formula.j_d9]);
      dur_10->value(sub_tdur[formula.j_d10]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      dur_6->value(dur_6->value() + o);
      dur_7->value(dur_7->value() + o);
      dur_8->value(dur_8->value() + o);
      dur_9->value(dur_9->value() + o);
      dur_10->value(dur_10->value() + o);
      }
    }

  else if (logic_a->value() == 11)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      dur_6->value(sub_tdur[formula.j_d6]);
      dur_7->value(sub_tdur[formula.j_d7]);
      dur_8->value(sub_tdur[formula.j_d8]);
      dur_9->value(sub_tdur[formula.j_d9]);
      dur_10->value(sub_tdur[formula.j_d10]);
      dur_11->value(sub_tdur[formula.j_d11]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      dur_6->value(dur_6->value() + o);
      dur_7->value(dur_7->value() + o);
      dur_8->value(dur_8->value() + o);
      dur_9->value(dur_9->value() + o);
      dur_10->value(dur_10->value() + o);
      dur_11->value(dur_11->value() + o);
      }
    }

  else if (logic_a->value() == 12)
    {
      formula.trp_seq_tdur();
      dur_1->value(sub_tdur[formula.j_d1]);
      dur_2->value(sub_tdur[formula.j_d2]);
      dur_3->value(sub_tdur[formula.j_d3]);
      dur_4->value(sub_tdur[formula.j_d4]);
      dur_5->value(sub_tdur[formula.j_d5]);
      dur_6->value(sub_tdur[formula.j_d6]);
      dur_7->value(sub_tdur[formula.j_d7]);
      dur_8->value(sub_tdur[formula.j_d8]);
      dur_9->value(sub_tdur[formula.j_d9]);
      dur_10->value(sub_tdur[formula.j_d10]);
      dur_11->value(sub_tdur[formula.j_d11]);
      dur_12->value(sub_tdur[formula.j_d12]);
      {
      select_val();
      dur_1->value(dur_1->value() + o);
      dur_2->value(dur_2->value() + o);
      dur_3->value(dur_3->value() + o);
      dur_4->value(dur_4->value() + o);
      dur_5->value(dur_5->value() + o);
      dur_6->value(dur_6->value() + o);
      dur_7->value(dur_7->value() + o);
      dur_8->value(dur_8->value() + o);
      dur_9->value(dur_9->value() + o);
      dur_10->value(dur_10->value() + o);
      dur_11->value(dur_11->value() + o);
      dur_12->value(dur_12->value() + o);
      }
    }
     delete [] sub_tdur;
}

void contrappunto::init_dur_serie()
{
    int i;
    if (bt_enable_dur->value() == 1)
    {
    subset_dur();
    }
    ini_dur();
    for (i = 0; i < 12; i++)
    {
      serie_dur[i] = init_dur[i];
    }
}

void contrappunto::retroDur()
{
  init_dur_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_dur[s];
    s--;
  }
}

void retro_dur()
{
  contrappunto ob;
  ob.retroDur();
  dur_1->value(ob.serie_manip[0]);
  dur_2->value(ob.serie_manip[1]);
  dur_3->value(ob.serie_manip[2]);
  dur_4->value(ob.serie_manip[3]);
  dur_5->value(ob.serie_manip[4]);
  dur_6->value(ob.serie_manip[5]);
  dur_7->value(ob.serie_manip[6]);
  dur_8->value(ob.serie_manip[7]);
  dur_9->value(ob.serie_manip[8]);
  dur_10->value(ob.serie_manip[9]);
  dur_11->value(ob.serie_manip[10]);
  dur_12->value(ob.serie_manip[11]);
}

void retroDur_cb(Fl_Widget*,void*)
{
  retro_dur();
  actTime();
}

void contrappunto::croceDur()
{
  init_dur_serie();
  serie_manip[0] = serie_dur[11];
  serie_manip[1] = serie_dur[0];
  serie_manip[2] = serie_dur[10];
  serie_manip[3] = serie_dur[1];
  serie_manip[4] = serie_dur[9];
  serie_manip[5] = serie_dur[2];
  serie_manip[6] = serie_dur[8];
  serie_manip[7] = serie_dur[3];
  serie_manip[8] = serie_dur[7];
  serie_manip[9] = serie_dur[4];
  serie_manip[10] = serie_dur[6];
  serie_manip[11] = serie_dur[5];
}

void croce_dur()
{
  contrappunto ob;
  ob.croceDur();
  dur_1->value(ob.serie_manip[0]);
  dur_2->value(ob.serie_manip[1]);
  dur_3->value(ob.serie_manip[2]);
  dur_4->value(ob.serie_manip[3]);
  dur_5->value(ob.serie_manip[4]);
  dur_6->value(ob.serie_manip[5]);
  dur_7->value(ob.serie_manip[6]);
  dur_8->value(ob.serie_manip[7]);
  dur_9->value(ob.serie_manip[8]);
  dur_10->value(ob.serie_manip[9]);
  dur_11->value(ob.serie_manip[10]);
  dur_12->value(ob.serie_manip[11]);

}

void croceDur_cb(Fl_Widget*,void*)
{
  croce_dur();
  actTime();
}

void contrappunto::slideDur()
{
  init_dur_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_dur[s];
    s++;
  }
    serie_manip[11] = serie_dur[0];
}

void slide_dur()
{
  contrappunto ob;
  ob.slideDur();
  dur_1->value(ob.serie_manip[0]);
  dur_2->value(ob.serie_manip[1]);
  dur_3->value(ob.serie_manip[2]);
  dur_4->value(ob.serie_manip[3]);
  dur_5->value(ob.serie_manip[4]);
  dur_6->value(ob.serie_manip[5]);
  dur_7->value(ob.serie_manip[6]);
  dur_8->value(ob.serie_manip[7]);
  dur_9->value(ob.serie_manip[8]);
  dur_10->value(ob.serie_manip[9]);
  dur_11->value(ob.serie_manip[10]);
  dur_12->value(ob.serie_manip[11]);
}

void slideDur_cb(Fl_Widget*,void*)
{
  slide_dur();
  actTime();
}

void contrappunto::jump_oneDur()
{
  init_dur_serie();
  serie_manip[0] = serie_dur[1];
  serie_manip[1] = serie_dur[3];
  serie_manip[2] = serie_dur[5];
  serie_manip[3] = serie_dur[7];
  serie_manip[4] = serie_dur[9];
  serie_manip[5] = serie_dur[11];
  serie_manip[6] = serie_dur[0];
  serie_manip[7] = serie_dur[2];
  serie_manip[8] = serie_dur[4];
  serie_manip[9] = serie_dur[6];
  serie_manip[10] = serie_dur[8];
  serie_manip[11] = serie_dur[10];
}

void jumpone_dur()
{
  contrappunto ob;
  ob.jump_oneDur();
  dur_1->value(ob.serie_manip[0]);
  dur_2->value(ob.serie_manip[1]);
  dur_3->value(ob.serie_manip[2]);
  dur_4->value(ob.serie_manip[3]);
  dur_5->value(ob.serie_manip[4]);
  dur_6->value(ob.serie_manip[5]);
  dur_7->value(ob.serie_manip[6]);
  dur_8->value(ob.serie_manip[7]);
  dur_9->value(ob.serie_manip[8]);
  dur_10->value(ob.serie_manip[9]);
  dur_11->value(ob.serie_manip[10]);
  dur_12->value(ob.serie_manip[11]);

}

void jumpOneDur_cb(Fl_Widget*,void*)
{
  jumpone_dur();
  actTime();
}

