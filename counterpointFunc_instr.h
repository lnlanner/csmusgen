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
void ini_instr()
{
  init_instr[0] = instr_1->value();
  init_instr[1] = instr_2->value();
  init_instr[2] = instr_3->value();
  init_instr[3] = instr_4->value();
  init_instr[4] = instr_5->value();
  init_instr[5] = instr_6->value();
  init_instr[6] = instr_7->value();
  init_instr[7] = instr_8->value();
  init_instr[8] = instr_9->value();
  init_instr[9] = instr_10->value();
  init_instr[10] = instr_11->value();
  init_instr[11] = instr_12->value();
}

void contrappunto::instr_lim_input()
{
    instr_min_ = (int)min_instr->value();
    instr_max_ = (int)max_instr->value();
}

void contrappunto::subset_instr()
{
  formula formula;
  instr_lim_input();
  //////////INITIALIZE INSTR SUBSET/////
    int sub_tInstr_size = (int)instr_max_ - (int)instr_min_;
    float *sub_tInstr = new float[sub_tInstr_size];

    init_params();
    int indice = (int)instr_min_;
    int i;
    for (i = 0; i < sub_tInstr_size; i++)
    {
        sub_tInstr[i] = tInstr[indice];
        indice++;
    }
  ///////////////////////////////////////////////////////////

  if (logic_a->value() == 1)
    {
      formula.trp_seq_tinstr();
      init_params();
      instr_1->value(sub_tInstr[formula.j_i1]);
    }

  else if (logic_a->value() == 2)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
    }

  else if (logic_a->value() == 3)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
    }

    else if (logic_a->value() == 4)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
    }

  else if (logic_a->value() == 5)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
      instr_5->value(sub_tInstr[formula.j_i5]);
    }

    else if (logic_a->value() == 6)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
      instr_5->value(sub_tInstr[formula.j_i5]);
      instr_6->value(sub_tInstr[formula.j_i6]);
    }

  else if (logic_a->value() == 7)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
      instr_5->value(sub_tInstr[formula.j_i5]);
      instr_6->value(sub_tInstr[formula.j_i6]);
      instr_7->value(sub_tInstr[formula.j_i7]);
    }

  else if (logic_a->value() == 8)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
      instr_5->value(sub_tInstr[formula.j_i5]);
      instr_6->value(sub_tInstr[formula.j_i6]);
      instr_7->value(sub_tInstr[formula.j_i7]);
      instr_8->value(sub_tInstr[formula.j_i8]);
    }

  else if (logic_a->value() == 9)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
      instr_5->value(sub_tInstr[formula.j_i5]);
      instr_6->value(sub_tInstr[formula.j_i6]);
      instr_7->value(sub_tInstr[formula.j_i7]);
      instr_8->value(sub_tInstr[formula.j_i8]);
      instr_9->value(sub_tInstr[formula.j_i9]);
    }

  else if (logic_a->value() == 10)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
      instr_5->value(sub_tInstr[formula.j_i5]);
      instr_6->value(sub_tInstr[formula.j_i6]);
      instr_7->value(sub_tInstr[formula.j_i7]);
      instr_8->value(sub_tInstr[formula.j_i8]);
      instr_9->value(sub_tInstr[formula.j_i9]);
      instr_10->value(sub_tInstr[formula.j_i10]);
    }

  else if (logic_a->value() == 11)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(sub_tInstr[formula.j_i1]);
      instr_2->value(sub_tInstr[formula.j_i2]);
      instr_3->value(sub_tInstr[formula.j_i3]);
      instr_4->value(sub_tInstr[formula.j_i4]);
      instr_5->value(sub_tInstr[formula.j_i5]);
      instr_6->value(sub_tInstr[formula.j_i6]);
      instr_7->value(sub_tInstr[formula.j_i7]);
      instr_8->value(sub_tInstr[formula.j_i8]);
      instr_9->value(sub_tInstr[formula.j_i9]);
      instr_10->value(sub_tInstr[formula.j_i10]);
      instr_11->value(sub_tInstr[formula.j_i11]);
    }

  else if (logic_a->value() == 12)
    {
      formula.trp_seq_tinstr();
      init_params();

      instr_1->value(tInstr[formula.j_i1]);
      instr_2->value(tInstr[formula.j_i2]);
      instr_3->value(tInstr[formula.j_i3]);
      instr_4->value(tInstr[formula.j_i4]);
      instr_5->value(tInstr[formula.j_i5]);
      instr_6->value(tInstr[formula.j_i6]);
      instr_7->value(tInstr[formula.j_i7]);
      instr_8->value(tInstr[formula.j_i8]);
      instr_9->value(tInstr[formula.j_i9]);
      instr_10->value(tInstr[formula.j_i10]);
      instr_11->value(tInstr[formula.j_i11]);
      instr_12->value(tInstr[formula.j_i12]);
    }
    delete [] sub_tInstr;
}

void contrappunto::init_instr_serie()
{
    int i;
    if (bt_enable_instr->value() == 1)
    {
    subset_instr();
    }
    ini_instr();
    for (i = 0; i < 12; i++)
    {
      serie_instr[i] = init_instr[i];
    }
}

void contrappunto::retroInstr()
{
  init_instr_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_instr[s];
    s--;
  }
}

void retro_instr()
{
  contrappunto ob;
  ob.retroInstr();
  instr_1->value(ob.serie_manip[0]);
  instr_2->value(ob.serie_manip[1]);
  instr_3->value(ob.serie_manip[2]);
  instr_4->value(ob.serie_manip[3]);
  instr_5->value(ob.serie_manip[4]);
  instr_6->value(ob.serie_manip[5]);
  instr_7->value(ob.serie_manip[6]);
  instr_8->value(ob.serie_manip[7]);
  instr_9->value(ob.serie_manip[8]);
  instr_10->value(ob.serie_manip[9]);
  instr_11->value(ob.serie_manip[10]);
  instr_12->value(ob.serie_manip[11]);
}

void retroInstr_cb(Fl_Widget*,void*)
{
  retro_instr();
  counterpointPitch->value(0);
}

void contrappunto::croceInstr()
{
  init_instr_serie();
  serie_manip[0] = serie_instr[11];
  serie_manip[1] = serie_instr[0];
  serie_manip[2] = serie_instr[10];
  serie_manip[3] = serie_instr[1];
  serie_manip[4] = serie_instr[9];
  serie_manip[5] = serie_instr[2];
  serie_manip[6] = serie_instr[8];
  serie_manip[7] = serie_instr[3];
  serie_manip[8] = serie_instr[7];
  serie_manip[9] = serie_instr[4];
  serie_manip[10] = serie_instr[6];
  serie_manip[11] = serie_instr[5];
}

void croce_instr()
{
  contrappunto ob;
  ob.croceInstr();
  instr_1->value(ob.serie_manip[0]);
  instr_2->value(ob.serie_manip[1]);
  instr_3->value(ob.serie_manip[2]);
  instr_4->value(ob.serie_manip[3]);
  instr_5->value(ob.serie_manip[4]);
  instr_6->value(ob.serie_manip[5]);
  instr_7->value(ob.serie_manip[6]);
  instr_8->value(ob.serie_manip[7]);
  instr_9->value(ob.serie_manip[8]);
  instr_10->value(ob.serie_manip[9]);
  instr_11->value(ob.serie_manip[10]);
  instr_12->value(ob.serie_manip[11]);
}

void croceInstr_cb(Fl_Widget*,void*)
{
  croce_instr();
}

void contrappunto::slideInstr()
{
  init_instr_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_instr[s];
    s++;
  }
    serie_manip[11] = serie_instr[0];
}

void slide_instr()
{
  contrappunto ob;
  ob.slideInstr();
  instr_1->value(ob.serie_manip[0]);
  instr_2->value(ob.serie_manip[1]);
  instr_3->value(ob.serie_manip[2]);
  instr_4->value(ob.serie_manip[3]);
  instr_5->value(ob.serie_manip[4]);
  instr_6->value(ob.serie_manip[5]);
  instr_7->value(ob.serie_manip[6]);
  instr_8->value(ob.serie_manip[7]);
  instr_9->value(ob.serie_manip[8]);
  instr_10->value(ob.serie_manip[9]);
  instr_11->value(ob.serie_manip[10]);
  instr_12->value(ob.serie_manip[11]);
}

void slideInstr_cb(Fl_Widget*,void*)
{
  slide_instr();
}

void contrappunto::jump_oneInstr()
{
  init_instr_serie();
  serie_manip[0] = serie_instr[1];
  serie_manip[1] = serie_instr[3];
  serie_manip[2] = serie_instr[5];
  serie_manip[3] = serie_instr[7];
  serie_manip[4] = serie_instr[9];
  serie_manip[5] = serie_instr[11];
  serie_manip[6] = serie_instr[0];
  serie_manip[7] = serie_instr[2];
  serie_manip[8] = serie_instr[4];
  serie_manip[9] = serie_instr[6];
  serie_manip[10] = serie_instr[8];
  serie_manip[11] = serie_instr[10];
}

void jumpone_instr()
{
  contrappunto ob;
  ob.jump_oneInstr();
  instr_1->value(ob.serie_manip[0]);
  instr_2->value(ob.serie_manip[1]);
  instr_3->value(ob.serie_manip[2]);
  instr_4->value(ob.serie_manip[3]);
  instr_5->value(ob.serie_manip[4]);
  instr_6->value(ob.serie_manip[5]);
  instr_7->value(ob.serie_manip[6]);
  instr_8->value(ob.serie_manip[7]);
  instr_9->value(ob.serie_manip[8]);
  instr_10->value(ob.serie_manip[9]);
  instr_11->value(ob.serie_manip[10]);
  instr_12->value(ob.serie_manip[11]);

}

void jumpOneInstr_cb(Fl_Widget*,void*)
{
  jumpone_instr();
}

