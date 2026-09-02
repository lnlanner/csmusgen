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
void ini_p10()
{
  init_p10[0] = p10_1->value();
  init_p10[1] = p10_2->value();
  init_p10[2] = p10_3->value();
  init_p10[3] = p10_4->value();
  init_p10[4] = p10_5->value();
  init_p10[5] = p10_6->value();
  init_p10[6] = p10_7->value();
  init_p10[7] = p10_8->value();
  init_p10[8] = p10_9->value();
  init_p10[9] = p10_10->value();
  init_p10[10] = p10_11->value();
  init_p10[11] = p10_12->value();
}

void contrappunto::init_p10_serie()
{
    int i;
    ini_p10();
    for (i = 0; i < 12; i++)
    {
      serie_p10[i] = init_p10[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop10()
{
  init_p10_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p10[s];
    s--;
  }
}


void retro_p10()
{
  contrappunto ob;
  ob.retrop10();
  p10_1->value(ob.serie_manip[0]);
  p10_2->value(ob.serie_manip[1]);
  p10_3->value(ob.serie_manip[2]);
  p10_4->value(ob.serie_manip[3]);
  p10_5->value(ob.serie_manip[4]);
  p10_6->value(ob.serie_manip[5]);
  p10_7->value(ob.serie_manip[6]);
  p10_8->value(ob.serie_manip[7]);
  p10_9->value(ob.serie_manip[8]);
  p10_10->value(ob.serie_manip[9]);
  p10_11->value(ob.serie_manip[10]);
  p10_12->value(ob.serie_manip[11]);
}

void retrop10_cb(Fl_Widget*,void*)
{
  retro_p10();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep10()
{
  init_p10_serie();
  serie_manip[0] = serie_p10[11];
  serie_manip[1] = serie_p10[0];
  serie_manip[2] = serie_p10[10];
  serie_manip[3] = serie_p10[1];
  serie_manip[4] = serie_p10[9];
  serie_manip[5] = serie_p10[2];
  serie_manip[6] = serie_p10[8];
  serie_manip[7] = serie_p10[3];
  serie_manip[8] = serie_p10[7];
  serie_manip[9] = serie_p10[4];
  serie_manip[10] = serie_p10[6];
  serie_manip[11] = serie_p10[5];
}


void croce_p10()
{
  contrappunto ob;
  ob.crocep10();
  p10_1->value(ob.serie_manip[0]);
  p10_2->value(ob.serie_manip[1]);
  p10_3->value(ob.serie_manip[2]);
  p10_4->value(ob.serie_manip[3]);
  p10_5->value(ob.serie_manip[4]);
  p10_6->value(ob.serie_manip[5]);
  p10_7->value(ob.serie_manip[6]);
  p10_8->value(ob.serie_manip[7]);
  p10_9->value(ob.serie_manip[8]);
  p10_10->value(ob.serie_manip[9]);
  p10_11->value(ob.serie_manip[10]);
  p10_12->value(ob.serie_manip[11]);
}

void crocep10_cb(Fl_Widget*,void*)
{
  croce_p10();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep10()
{
  init_p10_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p10[s];
    s++;
  }
    serie_manip[11] = serie_p10[0];
}

void slide_p10()
{
  contrappunto ob;
  ob.slidep10();
  p10_1->value(ob.serie_manip[0]);
  p10_2->value(ob.serie_manip[1]);
  p10_3->value(ob.serie_manip[2]);
  p10_4->value(ob.serie_manip[3]);
  p10_5->value(ob.serie_manip[4]);
  p10_6->value(ob.serie_manip[5]);
  p10_7->value(ob.serie_manip[6]);
  p10_8->value(ob.serie_manip[7]);
  p10_9->value(ob.serie_manip[8]);
  p10_10->value(ob.serie_manip[9]);
  p10_11->value(ob.serie_manip[10]);
  p10_12->value(ob.serie_manip[11]);
}

void slidep10_cb(Fl_Widget*,void*)
{
  slide_p10();
}

/////////////JUMP1

void contrappunto::jump_onep10()
{
  init_p10_serie();
  serie_manip[0] = serie_p10[1];
  serie_manip[1] = serie_p10[3];
  serie_manip[2] = serie_p10[5];
  serie_manip[3] = serie_p10[7];
  serie_manip[4] = serie_p10[9];
  serie_manip[5] = serie_p10[11];
  serie_manip[6] = serie_p10[0];
  serie_manip[7] = serie_p10[2];
  serie_manip[8] = serie_p10[4];
  serie_manip[9] = serie_p10[6];
  serie_manip[10] = serie_p10[8];
  serie_manip[11] = serie_p10[10];
}


void jumpone_p10()
{
  contrappunto ob;
  ob.jump_onep10();
  p10_1->value(ob.serie_manip[0]);
  p10_2->value(ob.serie_manip[1]);
  p10_3->value(ob.serie_manip[2]);
  p10_4->value(ob.serie_manip[3]);
  p10_5->value(ob.serie_manip[4]);
  p10_6->value(ob.serie_manip[5]);
  p10_7->value(ob.serie_manip[6]);
  p10_8->value(ob.serie_manip[7]);
  p10_9->value(ob.serie_manip[8]);
  p10_10->value(ob.serie_manip[9]);
  p10_11->value(ob.serie_manip[10]);
  p10_12->value(ob.serie_manip[11]);

}

void jumpOnep10_cb(Fl_Widget*,void*)
{
  jumpone_p10();
}



///////////JUMP1

