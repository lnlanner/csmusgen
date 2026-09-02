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
void ini_p7()
{
  init_p7[0] = p7_1->value();
  init_p7[1] = p7_2->value();
  init_p7[2] = p7_3->value();
  init_p7[3] = p7_4->value();
  init_p7[4] = p7_5->value();
  init_p7[5] = p7_6->value();
  init_p7[6] = p7_7->value();
  init_p7[7] = p7_8->value();
  init_p7[8] = p7_9->value();
  init_p7[9] = p7_10->value();
  init_p7[10] = p7_11->value();
  init_p7[11] = p7_12->value();
}

void contrappunto::init_p7_serie()
{
    int i;
    ini_p7();
    for (i = 0; i < 12; i++)
    {
      serie_p7[i] = init_p7[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop7()
{
  init_p7_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p7[s];
    s--;
  }
}


void retro_p7()
{
  contrappunto ob;
  ob.retrop7();
  p7_1->value(ob.serie_manip[0]);
  p7_2->value(ob.serie_manip[1]);
  p7_3->value(ob.serie_manip[2]);
  p7_4->value(ob.serie_manip[3]);
  p7_5->value(ob.serie_manip[4]);
  p7_6->value(ob.serie_manip[5]);
  p7_7->value(ob.serie_manip[6]);
  p7_8->value(ob.serie_manip[7]);
  p7_9->value(ob.serie_manip[8]);
  p7_10->value(ob.serie_manip[9]);
  p7_11->value(ob.serie_manip[10]);
  p7_12->value(ob.serie_manip[11]);
}

void retrop7_cb(Fl_Widget*,void*)
{
  retro_p7();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep7()
{
  init_p7_serie();
  serie_manip[0] = serie_p7[11];
  serie_manip[1] = serie_p7[0];
  serie_manip[2] = serie_p7[10];
  serie_manip[3] = serie_p7[1];
  serie_manip[4] = serie_p7[9];
  serie_manip[5] = serie_p7[2];
  serie_manip[6] = serie_p7[8];
  serie_manip[7] = serie_p7[3];
  serie_manip[8] = serie_p7[7];
  serie_manip[9] = serie_p7[4];
  serie_manip[10] = serie_p7[6];
  serie_manip[11] = serie_p7[5];
}


void croce_p7()
{
  contrappunto ob;
  ob.crocep7();
  p7_1->value(ob.serie_manip[0]);
  p7_2->value(ob.serie_manip[1]);
  p7_3->value(ob.serie_manip[2]);
  p7_4->value(ob.serie_manip[3]);
  p7_5->value(ob.serie_manip[4]);
  p7_6->value(ob.serie_manip[5]);
  p7_7->value(ob.serie_manip[6]);
  p7_8->value(ob.serie_manip[7]);
  p7_9->value(ob.serie_manip[8]);
  p7_10->value(ob.serie_manip[9]);
  p7_11->value(ob.serie_manip[10]);
  p7_12->value(ob.serie_manip[11]);
}

void crocep7_cb(Fl_Widget*,void*)
{
  croce_p7();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep7()
{
  init_p7_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p7[s];
    s++;
  }
    serie_manip[11] = serie_p7[0];
}

void slide_p7()
{
  contrappunto ob;
  ob.slidep7();
  p7_1->value(ob.serie_manip[0]);
  p7_2->value(ob.serie_manip[1]);
  p7_3->value(ob.serie_manip[2]);
  p7_4->value(ob.serie_manip[3]);
  p7_5->value(ob.serie_manip[4]);
  p7_6->value(ob.serie_manip[5]);
  p7_7->value(ob.serie_manip[6]);
  p7_8->value(ob.serie_manip[7]);
  p7_9->value(ob.serie_manip[8]);
  p7_10->value(ob.serie_manip[9]);
  p7_11->value(ob.serie_manip[10]);
  p7_12->value(ob.serie_manip[11]);
}

void slidep7_cb(Fl_Widget*,void*)
{
  slide_p7();
}

/////////////JUMP1

void contrappunto::jump_onep7()
{
  init_p7_serie();
  serie_manip[0] = serie_p7[1];
  serie_manip[1] = serie_p7[3];
  serie_manip[2] = serie_p7[5];
  serie_manip[3] = serie_p7[7];
  serie_manip[4] = serie_p7[9];
  serie_manip[5] = serie_p7[11];
  serie_manip[6] = serie_p7[0];
  serie_manip[7] = serie_p7[2];
  serie_manip[8] = serie_p7[4];
  serie_manip[9] = serie_p7[6];
  serie_manip[10] = serie_p7[8];
  serie_manip[11] = serie_p7[10];
}


void jumpone_p7()
{
  contrappunto ob;
  ob.jump_onep7();
  p7_1->value(ob.serie_manip[0]);
  p7_2->value(ob.serie_manip[1]);
  p7_3->value(ob.serie_manip[2]);
  p7_4->value(ob.serie_manip[3]);
  p7_5->value(ob.serie_manip[4]);
  p7_6->value(ob.serie_manip[5]);
  p7_7->value(ob.serie_manip[6]);
  p7_8->value(ob.serie_manip[7]);
  p7_9->value(ob.serie_manip[8]);
  p7_10->value(ob.serie_manip[9]);
  p7_11->value(ob.serie_manip[10]);
  p7_12->value(ob.serie_manip[11]);

}

void jumpOnep7_cb(Fl_Widget*,void*)
{
  jumpone_p7();
}



///////////JUMP1

