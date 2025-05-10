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
void ini_p13()
{
  init_p13[0] = p13_1->value();
  init_p13[1] = p13_2->value();
  init_p13[2] = p13_3->value();
  init_p13[3] = p13_4->value();
  init_p13[4] = p13_5->value();
  init_p13[5] = p13_6->value();
  init_p13[6] = p13_7->value();
  init_p13[7] = p13_8->value();
  init_p13[8] = p13_9->value();
  init_p13[9] = p13_10->value();
  init_p13[10] = p13_11->value();
  init_p13[11] = p13_12->value();
}

void contrappunto::init_p13_serie()
{
    int i;
    ini_p13();
    for (i = 0; i < 12; i++)
    {
      serie_p13[i] = init_p13[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop13()
{
  init_p13_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p13[s];
    s--;
  }
}


void retro_p13()
{
  contrappunto ob;
  ob.retrop13();
  p13_1->value(ob.serie_manip[0]);
  p13_2->value(ob.serie_manip[1]);
  p13_3->value(ob.serie_manip[2]);
  p13_4->value(ob.serie_manip[3]);
  p13_5->value(ob.serie_manip[4]);
  p13_6->value(ob.serie_manip[5]);
  p13_7->value(ob.serie_manip[6]);
  p13_8->value(ob.serie_manip[7]);
  p13_9->value(ob.serie_manip[8]);
  p13_10->value(ob.serie_manip[9]);
  p13_11->value(ob.serie_manip[10]);
  p13_12->value(ob.serie_manip[11]);
}

void retrop13_cb(Fl_Widget*,void*)
{
  retro_p13();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep13()
{
  init_p13_serie();
  serie_manip[0] = serie_p13[11];
  serie_manip[1] = serie_p13[0];
  serie_manip[2] = serie_p13[10];
  serie_manip[3] = serie_p13[1];
  serie_manip[4] = serie_p13[9];
  serie_manip[5] = serie_p13[2];
  serie_manip[6] = serie_p13[8];
  serie_manip[7] = serie_p13[3];
  serie_manip[8] = serie_p13[7];
  serie_manip[9] = serie_p13[4];
  serie_manip[10] = serie_p13[6];
  serie_manip[11] = serie_p13[5];
}


void croce_p13()
{
  contrappunto ob;
  ob.crocep13();
  p13_1->value(ob.serie_manip[0]);
  p13_2->value(ob.serie_manip[1]);
  p13_3->value(ob.serie_manip[2]);
  p13_4->value(ob.serie_manip[3]);
  p13_5->value(ob.serie_manip[4]);
  p13_6->value(ob.serie_manip[5]);
  p13_7->value(ob.serie_manip[6]);
  p13_8->value(ob.serie_manip[7]);
  p13_9->value(ob.serie_manip[8]);
  p13_10->value(ob.serie_manip[9]);
  p13_11->value(ob.serie_manip[10]);
  p13_12->value(ob.serie_manip[11]);
}

void crocep13_cb(Fl_Widget*,void*)
{
  croce_p13();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep13()
{
  init_p13_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p13[s];
    s++;
  }
    serie_manip[11] = serie_p13[0];
}

void slide_p13()
{
  contrappunto ob;
  ob.slidep13();
  p13_1->value(ob.serie_manip[0]);
  p13_2->value(ob.serie_manip[1]);
  p13_3->value(ob.serie_manip[2]);
  p13_4->value(ob.serie_manip[3]);
  p13_5->value(ob.serie_manip[4]);
  p13_6->value(ob.serie_manip[5]);
  p13_7->value(ob.serie_manip[6]);
  p13_8->value(ob.serie_manip[7]);
  p13_9->value(ob.serie_manip[8]);
  p13_10->value(ob.serie_manip[9]);
  p13_11->value(ob.serie_manip[10]);
  p13_12->value(ob.serie_manip[11]);
}

void slidep13_cb(Fl_Widget*,void*)
{
  slide_p13();
}

/////////////JUMP1

void contrappunto::jump_onep13()
{
  init_p13_serie();
  serie_manip[0] = serie_p13[1];
  serie_manip[1] = serie_p13[3];
  serie_manip[2] = serie_p13[5];
  serie_manip[3] = serie_p13[7];
  serie_manip[4] = serie_p13[9];
  serie_manip[5] = serie_p13[11];
  serie_manip[6] = serie_p13[0];
  serie_manip[7] = serie_p13[2];
  serie_manip[8] = serie_p13[4];
  serie_manip[9] = serie_p13[6];
  serie_manip[10] = serie_p13[8];
  serie_manip[11] = serie_p13[10];
}


void jumpone_p13()
{
  contrappunto ob;
  ob.jump_onep13();
  p13_1->value(ob.serie_manip[0]);
  p13_2->value(ob.serie_manip[1]);
  p13_3->value(ob.serie_manip[2]);
  p13_4->value(ob.serie_manip[3]);
  p13_5->value(ob.serie_manip[4]);
  p13_6->value(ob.serie_manip[5]);
  p13_7->value(ob.serie_manip[6]);
  p13_8->value(ob.serie_manip[7]);
  p13_9->value(ob.serie_manip[8]);
  p13_10->value(ob.serie_manip[9]);
  p13_11->value(ob.serie_manip[10]);
  p13_12->value(ob.serie_manip[11]);

}

void jumpOnep13_cb(Fl_Widget*,void*)
{
  jumpone_p13();
}



///////////JUMP1

