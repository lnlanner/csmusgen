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
void ini_p14()
{
  init_p14[0] = p14_1->value();
  init_p14[1] = p14_2->value();
  init_p14[2] = p14_3->value();
  init_p14[3] = p14_4->value();
  init_p14[4] = p14_5->value();
  init_p14[5] = p14_6->value();
  init_p14[6] = p14_7->value();
  init_p14[7] = p14_8->value();
  init_p14[8] = p14_9->value();
  init_p14[9] = p14_10->value();
  init_p14[10] = p14_11->value();
  init_p14[11] = p14_12->value();
}

void contrappunto::init_p14_serie()
{
    int i;
    ini_p14();
    for (i = 0; i < 12; i++)
    {
      serie_p14[i] = init_p14[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop14()
{
  init_p14_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p14[s];
    s--;
  }
}


void retro_p14()
{
  contrappunto ob;
  ob.retrop14();
  p14_1->value(ob.serie_manip[0]);
  p14_2->value(ob.serie_manip[1]);
  p14_3->value(ob.serie_manip[2]);
  p14_4->value(ob.serie_manip[3]);
  p14_5->value(ob.serie_manip[4]);
  p14_6->value(ob.serie_manip[5]);
  p14_7->value(ob.serie_manip[6]);
  p14_8->value(ob.serie_manip[7]);
  p14_9->value(ob.serie_manip[8]);
  p14_10->value(ob.serie_manip[9]);
  p14_11->value(ob.serie_manip[10]);
  p14_12->value(ob.serie_manip[11]);
}

void retrop14_cb(Fl_Widget*,void*)
{
  retro_p14();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep14()
{
  init_p14_serie();
  serie_manip[0] = serie_p14[11];
  serie_manip[1] = serie_p14[0];
  serie_manip[2] = serie_p14[10];
  serie_manip[3] = serie_p14[1];
  serie_manip[4] = serie_p14[9];
  serie_manip[5] = serie_p14[2];
  serie_manip[6] = serie_p14[8];
  serie_manip[7] = serie_p14[3];
  serie_manip[8] = serie_p14[7];
  serie_manip[9] = serie_p14[4];
  serie_manip[10] = serie_p14[6];
  serie_manip[11] = serie_p14[5];
}


void croce_p14()
{
  contrappunto ob;
  ob.crocep14();
  p14_1->value(ob.serie_manip[0]);
  p14_2->value(ob.serie_manip[1]);
  p14_3->value(ob.serie_manip[2]);
  p14_4->value(ob.serie_manip[3]);
  p14_5->value(ob.serie_manip[4]);
  p14_6->value(ob.serie_manip[5]);
  p14_7->value(ob.serie_manip[6]);
  p14_8->value(ob.serie_manip[7]);
  p14_9->value(ob.serie_manip[8]);
  p14_10->value(ob.serie_manip[9]);
  p14_11->value(ob.serie_manip[10]);
  p14_12->value(ob.serie_manip[11]);
}

void crocep14_cb(Fl_Widget*,void*)
{
  croce_p14();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep14()
{
  init_p14_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p14[s];
    s++;
  }
    serie_manip[11] = serie_p14[0];
}

void slide_p14()
{
  contrappunto ob;
  ob.slidep14();
  p14_1->value(ob.serie_manip[0]);
  p14_2->value(ob.serie_manip[1]);
  p14_3->value(ob.serie_manip[2]);
  p14_4->value(ob.serie_manip[3]);
  p14_5->value(ob.serie_manip[4]);
  p14_6->value(ob.serie_manip[5]);
  p14_7->value(ob.serie_manip[6]);
  p14_8->value(ob.serie_manip[7]);
  p14_9->value(ob.serie_manip[8]);
  p14_10->value(ob.serie_manip[9]);
  p14_11->value(ob.serie_manip[10]);
  p14_12->value(ob.serie_manip[11]);
}

void slidep14_cb(Fl_Widget*,void*)
{
  slide_p14();
}

/////////////JUMP1

void contrappunto::jump_onep14()
{
  init_p14_serie();
  serie_manip[0] = serie_p14[1];
  serie_manip[1] = serie_p14[3];
  serie_manip[2] = serie_p14[5];
  serie_manip[3] = serie_p14[7];
  serie_manip[4] = serie_p14[9];
  serie_manip[5] = serie_p14[11];
  serie_manip[6] = serie_p14[0];
  serie_manip[7] = serie_p14[2];
  serie_manip[8] = serie_p14[4];
  serie_manip[9] = serie_p14[6];
  serie_manip[10] = serie_p14[8];
  serie_manip[11] = serie_p14[10];
}


void jumpone_p14()
{
  contrappunto ob;
  ob.jump_onep14();
  p14_1->value(ob.serie_manip[0]);
  p14_2->value(ob.serie_manip[1]);
  p14_3->value(ob.serie_manip[2]);
  p14_4->value(ob.serie_manip[3]);
  p14_5->value(ob.serie_manip[4]);
  p14_6->value(ob.serie_manip[5]);
  p14_7->value(ob.serie_manip[6]);
  p14_8->value(ob.serie_manip[7]);
  p14_9->value(ob.serie_manip[8]);
  p14_10->value(ob.serie_manip[9]);
  p14_11->value(ob.serie_manip[10]);
  p14_12->value(ob.serie_manip[11]);

}

void jumpOnep14_cb(Fl_Widget*,void*)
{
  jumpone_p14();
}



///////////JUMP1

