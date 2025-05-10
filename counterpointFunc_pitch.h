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
void ini_pitch()
{
  init_pitch[0] = pch_1->value();
  init_pitch[1] = pch_2->value();
  init_pitch[2] = pch_3->value();
  init_pitch[3] = pch_4->value();
  init_pitch[4] = pch_5->value();
  init_pitch[5] = pch_6->value();
  init_pitch[6] = pch_7->value();
  init_pitch[7] = pch_8->value();
  init_pitch[8] = pch_9->value();
  init_pitch[9] = pch_10->value();
  init_pitch[10] = pch_11->value();
  init_pitch[11] = pch_12->value();
}

void contrappunto::pitch_lim_input()
{
    pitch_min_ = (int)min_pch->value();
    pitch_max_ = (int)max_pch->value();
}

void contrappunto::subset_pitch()
{
  formula formula;
  pitch_lim_input();

  //////////INITIALIZE PITCH SUBSET/////
    int sub_tcrm_size = (int)pitch_max_ - (int)pitch_min_;
    float *sub_tcrm = new float[sub_tcrm_size];

    init_params();
    int indice = (int)pitch_min_;
    int i;
    for (i = 0; i < sub_tcrm_size; i++)
    {
        sub_tcrm[i] = tcrom[indice];
        indice++;
    }
  ///////////////////////////////////////////////////////////

  if (logic_a->value() == 1)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
    }

  else if (logic_a->value() == 2)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
    }

  else if (logic_a->value() == 3)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
    }

    else if (logic_a->value() == 4)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
    }

  else if (logic_a->value() == 5)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
    }

    else if (logic_a->value() == 6)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
      pch_6->value(sub_tcrm[formula.j_p6]);
    }

  else if (logic_a->value() == 7)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
      pch_6->value(sub_tcrm[formula.j_p6]);
      pch_7->value(sub_tcrm[formula.j_p7]);
    }

  else if (logic_a->value() == 8)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
      pch_6->value(sub_tcrm[formula.j_p6]);
      pch_7->value(sub_tcrm[formula.j_p7]);
      pch_8->value(sub_tcrm[formula.j_p8]);
    }

  else if (logic_a->value() == 9)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
      pch_6->value(sub_tcrm[formula.j_p6]);
      pch_7->value(sub_tcrm[formula.j_p7]);
      pch_8->value(sub_tcrm[formula.j_p8]);
      pch_9->value(sub_tcrm[formula.j_p9]);
    }

  else if (logic_a->value() == 10)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
      pch_6->value(sub_tcrm[formula.j_p6]);
      pch_7->value(sub_tcrm[formula.j_p7]);
      pch_8->value(sub_tcrm[formula.j_p8]);
      pch_9->value(sub_tcrm[formula.j_p9]);
      pch_10->value(sub_tcrm[formula.j_p10]);
    }

  else if (logic_a->value() == 11)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
      pch_6->value(sub_tcrm[formula.j_p6]);
      pch_7->value(sub_tcrm[formula.j_p7]);
      pch_8->value(sub_tcrm[formula.j_p8]);
      pch_9->value(sub_tcrm[formula.j_p9]);
      pch_10->value(sub_tcrm[formula.j_p10]);
      pch_11->value(sub_tcrm[formula.j_p11]);
    }

  else if (logic_a->value() == 12)
    {
      formula.trp_seq_tcrom();
      pch_1->value(sub_tcrm[formula.j_p1]);
      pch_2->value(sub_tcrm[formula.j_p2]);
      pch_3->value(sub_tcrm[formula.j_p3]);
      pch_4->value(sub_tcrm[formula.j_p4]);
      pch_5->value(sub_tcrm[formula.j_p5]);
      pch_6->value(sub_tcrm[formula.j_p6]);
      pch_7->value(sub_tcrm[formula.j_p7]);
      pch_8->value(sub_tcrm[formula.j_p8]);
      pch_9->value(sub_tcrm[formula.j_p9]);
      pch_10->value(sub_tcrm[formula.j_p10]);
      pch_11->value(sub_tcrm[formula.j_p11]);
      pch_12->value(sub_tcrm[formula.j_p12]);
    }
     delete [] sub_tcrm;
}

void contrappunto::init_pitch_serie()
{
  ini_pitch();

  if (bt_enable_pch->value() == 1)
  {
    subset_pitch();
  }
    int i;
    for (i = 0; i < 12; i++)
    {
    serie_pitch[i] = init_pitch[i];
    }
}

void contrappunto::retroPitch()
{
  init_pitch_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_pitch[s];
    s--;
  }
}

void retro_pitch()
{
  contrappunto ob;
  ob.retroPitch();
  pch_1->value(ob.serie_manip[0]);
  pch_2->value(ob.serie_manip[1]);
  pch_3->value(ob.serie_manip[2]);
  pch_4->value(ob.serie_manip[3]);
  pch_5->value(ob.serie_manip[4]);
  pch_6->value(ob.serie_manip[5]);
  pch_7->value(ob.serie_manip[6]);
  pch_8->value(ob.serie_manip[7]);
  pch_9->value(ob.serie_manip[8]);
  pch_10->value(ob.serie_manip[9]);
  pch_11->value(ob.serie_manip[10]);
  pch_12->value(ob.serie_manip[11]);
}

void retroPitch_cb(Fl_Widget*,void*)
{
  retro_pitch();
}

void contrappunto::crocePitch()
{
  init_pitch_serie();
  serie_manip[0] = serie_pitch[11];
  serie_manip[1] = serie_pitch[0];
  serie_manip[2] = serie_pitch[10];
  serie_manip[3] = serie_pitch[1];
  serie_manip[4] = serie_pitch[9];
  serie_manip[5] = serie_pitch[2];
  serie_manip[6] = serie_pitch[8];
  serie_manip[7] = serie_pitch[3];
  serie_manip[8] = serie_pitch[7];
  serie_manip[9] = serie_pitch[4];
  serie_manip[10] = serie_pitch[6];
  serie_manip[11] = serie_pitch[5];
}

void croce_pitch()
{
  contrappunto ob;
  ob.crocePitch();
  pch_1->value(ob.serie_manip[0]);
  pch_2->value(ob.serie_manip[1]);
  pch_3->value(ob.serie_manip[2]);
  pch_4->value(ob.serie_manip[3]);
  pch_5->value(ob.serie_manip[4]);
  pch_6->value(ob.serie_manip[5]);
  pch_7->value(ob.serie_manip[6]);
  pch_8->value(ob.serie_manip[7]);
  pch_9->value(ob.serie_manip[8]);
  pch_10->value(ob.serie_manip[9]);
  pch_11->value(ob.serie_manip[10]);
  pch_12->value(ob.serie_manip[11]);
}

void crocePitch_cb(Fl_Widget*,void*)
{
  croce_pitch();
}

void contrappunto::slidePitch()
{
  init_pitch_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_pitch[s];
    s++;
  }
    serie_manip[11] = serie_pitch[0];
}

void slide_pitch()
{
  contrappunto ob;
  ob.slidePitch();
  pch_1->value(ob.serie_manip[0]);
  pch_2->value(ob.serie_manip[1]);
  pch_3->value(ob.serie_manip[2]);
  pch_4->value(ob.serie_manip[3]);
  pch_5->value(ob.serie_manip[4]);
  pch_6->value(ob.serie_manip[5]);
  pch_7->value(ob.serie_manip[6]);
  pch_8->value(ob.serie_manip[7]);
  pch_9->value(ob.serie_manip[8]);
  pch_10->value(ob.serie_manip[9]);
  pch_11->value(ob.serie_manip[10]);
  pch_12->value(ob.serie_manip[11]);
}

void slidePitch_cb(Fl_Widget*,void*)
{
  slide_pitch();
}

void contrappunto::jump_onePitch()
{
  init_pitch_serie();
  serie_manip[0] = serie_pitch[1];
  serie_manip[1] = serie_pitch[3];
  serie_manip[2] = serie_pitch[5];
  serie_manip[3] = serie_pitch[7];
  serie_manip[4] = serie_pitch[9];
  serie_manip[5] = serie_pitch[11];
  serie_manip[6] = serie_pitch[0];
  serie_manip[7] = serie_pitch[2];
  serie_manip[8] = serie_pitch[4];
  serie_manip[9] = serie_pitch[6];
  serie_manip[10] = serie_pitch[8];
  serie_manip[11] = serie_pitch[10];
}

void jumpone_pitch()
{
  contrappunto ob;
  ob.jump_onePitch();
  pch_1->value(ob.serie_manip[0]);
  pch_2->value(ob.serie_manip[1]);
  pch_3->value(ob.serie_manip[2]);
  pch_4->value(ob.serie_manip[3]);
  pch_5->value(ob.serie_manip[4]);
  pch_6->value(ob.serie_manip[5]);
  pch_7->value(ob.serie_manip[6]);
  pch_8->value(ob.serie_manip[7]);
  pch_9->value(ob.serie_manip[8]);
  pch_10->value(ob.serie_manip[9]);
  pch_11->value(ob.serie_manip[10]);
  pch_12->value(ob.serie_manip[11]);
}

void jumpOnePitch_cb(Fl_Widget*,void*)
{
  jumpone_pitch();
}

