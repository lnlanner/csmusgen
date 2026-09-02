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
void ini_p6()
{
  init_p6[0] = p6_1->value();
  init_p6[1] = p6_2->value();
  init_p6[2] = p6_3->value();
  init_p6[3] = p6_4->value();
  init_p6[4] = p6_5->value();
  init_p6[5] = p6_6->value();
  init_p6[6] = p6_7->value();
  init_p6[7] = p6_8->value();
  init_p6[8] = p6_9->value();
  init_p6[9] = p6_10->value();
  init_p6[10] = p6_11->value();
  init_p6[11] = p6_12->value();
}

void contrappunto::init_p6_serie()
{
    int i;
    ini_p6();
    for (i = 0; i < 12; i++)
    {
      serie_p6[i] = init_p6[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop6()
{
  init_p6_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p6[s];
    s--;
  }
}


void retro_p6()
{
  contrappunto ob;
  ob.retrop6();
  p6_1->value(ob.serie_manip[0]);
  p6_2->value(ob.serie_manip[1]);
  p6_3->value(ob.serie_manip[2]);
  p6_4->value(ob.serie_manip[3]);
  p6_5->value(ob.serie_manip[4]);
  p6_6->value(ob.serie_manip[5]);
  p6_7->value(ob.serie_manip[6]);
  p6_8->value(ob.serie_manip[7]);
  p6_9->value(ob.serie_manip[8]);
  p6_10->value(ob.serie_manip[9]);
  p6_11->value(ob.serie_manip[10]);
  p6_12->value(ob.serie_manip[11]);
}

void retrop6_cb(Fl_Widget*,void*)
{
  retro_p6();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep6()
{
  init_p6_serie();
  serie_manip[0] = serie_p6[11];
  serie_manip[1] = serie_p6[0];
  serie_manip[2] = serie_p6[10];
  serie_manip[3] = serie_p6[1];
  serie_manip[4] = serie_p6[9];
  serie_manip[5] = serie_p6[2];
  serie_manip[6] = serie_p6[8];
  serie_manip[7] = serie_p6[3];
  serie_manip[8] = serie_p6[7];
  serie_manip[9] = serie_p6[4];
  serie_manip[10] = serie_p6[6];
  serie_manip[11] = serie_p6[5];
}


void croce_p6()
{
  contrappunto ob;
  ob.crocep6();
  p6_1->value(ob.serie_manip[0]);
  p6_2->value(ob.serie_manip[1]);
  p6_3->value(ob.serie_manip[2]);
  p6_4->value(ob.serie_manip[3]);
  p6_5->value(ob.serie_manip[4]);
  p6_6->value(ob.serie_manip[5]);
  p6_7->value(ob.serie_manip[6]);
  p6_8->value(ob.serie_manip[7]);
  p6_9->value(ob.serie_manip[8]);
  p6_10->value(ob.serie_manip[9]);
  p6_11->value(ob.serie_manip[10]);
  p6_12->value(ob.serie_manip[11]);
}

void crocep6_cb(Fl_Widget*,void*)
{
  croce_p6();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep6()
{
  init_p6_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p6[s];
    s++;
  }
    serie_manip[11] = serie_p6[0];
}

void slide_p6()
{
  contrappunto ob;
  ob.slidep6();
  p6_1->value(ob.serie_manip[0]);
  p6_2->value(ob.serie_manip[1]);
  p6_3->value(ob.serie_manip[2]);
  p6_4->value(ob.serie_manip[3]);
  p6_5->value(ob.serie_manip[4]);
  p6_6->value(ob.serie_manip[5]);
  p6_7->value(ob.serie_manip[6]);
  p6_8->value(ob.serie_manip[7]);
  p6_9->value(ob.serie_manip[8]);
  p6_10->value(ob.serie_manip[9]);
  p6_11->value(ob.serie_manip[10]);
  p6_12->value(ob.serie_manip[11]);
}

void slidep6_cb(Fl_Widget*,void*)
{
  slide_p6();
}

/////////////JUMP1

void contrappunto::jump_onep6()
{
  init_p6_serie();
  serie_manip[0] = serie_p6[1];
  serie_manip[1] = serie_p6[3];
  serie_manip[2] = serie_p6[5];
  serie_manip[3] = serie_p6[7];
  serie_manip[4] = serie_p6[9];
  serie_manip[5] = serie_p6[11];
  serie_manip[6] = serie_p6[0];
  serie_manip[7] = serie_p6[2];
  serie_manip[8] = serie_p6[4];
  serie_manip[9] = serie_p6[6];
  serie_manip[10] = serie_p6[8];
  serie_manip[11] = serie_p6[10];
}


void jumpone_p6()
{
  contrappunto ob;
  ob.jump_onep6();
  p6_1->value(ob.serie_manip[0]);
  p6_2->value(ob.serie_manip[1]);
  p6_3->value(ob.serie_manip[2]);
  p6_4->value(ob.serie_manip[3]);
  p6_5->value(ob.serie_manip[4]);
  p6_6->value(ob.serie_manip[5]);
  p6_7->value(ob.serie_manip[6]);
  p6_8->value(ob.serie_manip[7]);
  p6_9->value(ob.serie_manip[8]);
  p6_10->value(ob.serie_manip[9]);
  p6_11->value(ob.serie_manip[10]);
  p6_12->value(ob.serie_manip[11]);

}

void jumpOnep6_cb(Fl_Widget*,void*)
{
  jumpone_p6();
}



///////////JUMP1

