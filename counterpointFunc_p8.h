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
void ini_p8()
{
  init_p8[0] = p8_1->value();
  init_p8[1] = p8_2->value();
  init_p8[2] = p8_3->value();
  init_p8[3] = p8_4->value();
  init_p8[4] = p8_5->value();
  init_p8[5] = p8_6->value();
  init_p8[6] = p8_7->value();
  init_p8[7] = p8_8->value();
  init_p8[8] = p8_9->value();
  init_p8[9] = p8_10->value();
  init_p8[10] = p8_11->value();
  init_p8[11] = p8_12->value();
}

void contrappunto::init_p8_serie()
{
    int i;
    ini_p8();
    for (i = 0; i < 12; i++)
    {
      serie_p8[i] = init_p8[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop8()
{
  init_p8_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p8[s];
    s--;
  }
}


void retro_p8()
{
  contrappunto ob;
  ob.retrop8();
  p8_1->value(ob.serie_manip[0]);
  p8_2->value(ob.serie_manip[1]);
  p8_3->value(ob.serie_manip[2]);
  p8_4->value(ob.serie_manip[3]);
  p8_5->value(ob.serie_manip[4]);
  p8_6->value(ob.serie_manip[5]);
  p8_7->value(ob.serie_manip[6]);
  p8_8->value(ob.serie_manip[7]);
  p8_9->value(ob.serie_manip[8]);
  p8_10->value(ob.serie_manip[9]);
  p8_11->value(ob.serie_manip[10]);
  p8_12->value(ob.serie_manip[11]);
}

void retrop8_cb(Fl_Widget*,void*)
{
  retro_p8();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep8()
{
  init_p8_serie();
  serie_manip[0] = serie_p8[11];
  serie_manip[1] = serie_p8[0];
  serie_manip[2] = serie_p8[10];
  serie_manip[3] = serie_p8[1];
  serie_manip[4] = serie_p8[9];
  serie_manip[5] = serie_p8[2];
  serie_manip[6] = serie_p8[8];
  serie_manip[7] = serie_p8[3];
  serie_manip[8] = serie_p8[7];
  serie_manip[9] = serie_p8[4];
  serie_manip[10] = serie_p8[6];
  serie_manip[11] = serie_p8[5];
}


void croce_p8()
{
  contrappunto ob;
  ob.crocep8();
  p8_1->value(ob.serie_manip[0]);
  p8_2->value(ob.serie_manip[1]);
  p8_3->value(ob.serie_manip[2]);
  p8_4->value(ob.serie_manip[3]);
  p8_5->value(ob.serie_manip[4]);
  p8_6->value(ob.serie_manip[5]);
  p8_7->value(ob.serie_manip[6]);
  p8_8->value(ob.serie_manip[7]);
  p8_9->value(ob.serie_manip[8]);
  p8_10->value(ob.serie_manip[9]);
  p8_11->value(ob.serie_manip[10]);
  p8_12->value(ob.serie_manip[11]);
}

void crocep8_cb(Fl_Widget*,void*)
{
  croce_p8();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep8()
{
  init_p8_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p8[s];
    s++;
  }
    serie_manip[11] = serie_p8[0];
}

void slide_p8()
{
  contrappunto ob;
  ob.slidep8();
  p8_1->value(ob.serie_manip[0]);
  p8_2->value(ob.serie_manip[1]);
  p8_3->value(ob.serie_manip[2]);
  p8_4->value(ob.serie_manip[3]);
  p8_5->value(ob.serie_manip[4]);
  p8_6->value(ob.serie_manip[5]);
  p8_7->value(ob.serie_manip[6]);
  p8_8->value(ob.serie_manip[7]);
  p8_9->value(ob.serie_manip[8]);
  p8_10->value(ob.serie_manip[9]);
  p8_11->value(ob.serie_manip[10]);
  p8_12->value(ob.serie_manip[11]);
}

void slidep8_cb(Fl_Widget*,void*)
{
  slide_p8();
}

/////////////JUMP1

void contrappunto::jump_onep8()
{
  init_p8_serie();
  serie_manip[0] = serie_p8[1];
  serie_manip[1] = serie_p8[3];
  serie_manip[2] = serie_p8[5];
  serie_manip[3] = serie_p8[7];
  serie_manip[4] = serie_p8[9];
  serie_manip[5] = serie_p8[11];
  serie_manip[6] = serie_p8[0];
  serie_manip[7] = serie_p8[2];
  serie_manip[8] = serie_p8[4];
  serie_manip[9] = serie_p8[6];
  serie_manip[10] = serie_p8[8];
  serie_manip[11] = serie_p8[10];
}


void jumpone_p8()
{
  contrappunto ob;
  ob.jump_onep8();
  p8_1->value(ob.serie_manip[0]);
  p8_2->value(ob.serie_manip[1]);
  p8_3->value(ob.serie_manip[2]);
  p8_4->value(ob.serie_manip[3]);
  p8_5->value(ob.serie_manip[4]);
  p8_6->value(ob.serie_manip[5]);
  p8_7->value(ob.serie_manip[6]);
  p8_8->value(ob.serie_manip[7]);
  p8_9->value(ob.serie_manip[8]);
  p8_10->value(ob.serie_manip[9]);
  p8_11->value(ob.serie_manip[10]);
  p8_12->value(ob.serie_manip[11]);

}

void jumpOnep8_cb(Fl_Widget*,void*)
{
  jumpone_p8();
}



///////////JUMP1

