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
void ini_p15()
{
  init_p15[0] = p15_1->value();
  init_p15[1] = p15_2->value();
  init_p15[2] = p15_3->value();
  init_p15[3] = p15_4->value();
  init_p15[4] = p15_5->value();
  init_p15[5] = p15_6->value();
  init_p15[6] = p15_7->value();
  init_p15[7] = p15_8->value();
  init_p15[8] = p15_9->value();
  init_p15[9] = p15_10->value();
  init_p15[10] = p15_11->value();
  init_p15[11] = p15_12->value();
}

void contrappunto::init_p15_serie()
{
    int i;
    ini_p15();
    for (i = 0; i < 12; i++)
    {
      serie_p15[i] = init_p15[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop15()
{
  init_p15_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p15[s];
    s--;
  }
}

void retro_p15()
{
  contrappunto ob;
  ob.retrop15();
  p15_1->value(ob.serie_manip[0]);
  p15_2->value(ob.serie_manip[1]);
  p15_3->value(ob.serie_manip[2]);
  p15_4->value(ob.serie_manip[3]);
  p15_5->value(ob.serie_manip[4]);
  p15_6->value(ob.serie_manip[5]);
  p15_7->value(ob.serie_manip[6]);
  p15_8->value(ob.serie_manip[7]);
  p15_9->value(ob.serie_manip[8]);
  p15_10->value(ob.serie_manip[9]);
  p15_11->value(ob.serie_manip[10]);
  p15_12->value(ob.serie_manip[11]);
}

void retrop15_cb(Fl_Widget*,void*)
{
  retro_p15();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<

void contrappunto::crocep15()
{
  init_p15_serie();
  serie_manip[0] = serie_p15[11];
  serie_manip[1] = serie_p15[0];
  serie_manip[2] = serie_p15[10];
  serie_manip[3] = serie_p15[1];
  serie_manip[4] = serie_p15[9];
  serie_manip[5] = serie_p15[2];
  serie_manip[6] = serie_p15[8];
  serie_manip[7] = serie_p15[3];
  serie_manip[8] = serie_p15[7];
  serie_manip[9] = serie_p15[4];
  serie_manip[10] = serie_p15[6];
  serie_manip[11] = serie_p15[5];
}


void croce_p15()
{
  contrappunto ob;
  ob.crocep15();
  p15_1->value(ob.serie_manip[0]);
  p15_2->value(ob.serie_manip[1]);
  p15_3->value(ob.serie_manip[2]);
  p15_4->value(ob.serie_manip[3]);
  p15_5->value(ob.serie_manip[4]);
  p15_6->value(ob.serie_manip[5]);
  p15_7->value(ob.serie_manip[6]);
  p15_8->value(ob.serie_manip[7]);
  p15_9->value(ob.serie_manip[8]);
  p15_10->value(ob.serie_manip[9]);
  p15_11->value(ob.serie_manip[10]);
  p15_12->value(ob.serie_manip[11]);
}

void crocep15_cb(Fl_Widget*,void*)
{
  croce_p15();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep15()
{
  init_p15_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p15[s];
    s++;
  }
    serie_manip[11] = serie_p15[0];
}

void slide_p15()
{
  contrappunto ob;
  ob.slidep15();
  p15_1->value(ob.serie_manip[0]);
  p15_2->value(ob.serie_manip[1]);
  p15_3->value(ob.serie_manip[2]);
  p15_4->value(ob.serie_manip[3]);
  p15_5->value(ob.serie_manip[4]);
  p15_6->value(ob.serie_manip[5]);
  p15_7->value(ob.serie_manip[6]);
  p15_8->value(ob.serie_manip[7]);
  p15_9->value(ob.serie_manip[8]);
  p15_10->value(ob.serie_manip[9]);
  p15_11->value(ob.serie_manip[10]);
  p15_12->value(ob.serie_manip[11]);
}

void slidep15_cb(Fl_Widget*,void*)
{
  slide_p15();
}

/////////////JUMP1

void contrappunto::jump_onep15()
{
  init_p15_serie();
  serie_manip[0] = serie_p15[1];
  serie_manip[1] = serie_p15[3];
  serie_manip[2] = serie_p15[5];
  serie_manip[3] = serie_p15[7];
  serie_manip[4] = serie_p15[9];
  serie_manip[5] = serie_p15[11];
  serie_manip[6] = serie_p15[0];
  serie_manip[7] = serie_p15[2];
  serie_manip[8] = serie_p15[4];
  serie_manip[9] = serie_p15[6];
  serie_manip[10] = serie_p15[8];
  serie_manip[11] = serie_p15[10];
}


void jumpone_p15()
{
  contrappunto ob;
  ob.jump_onep15();
  p15_1->value(ob.serie_manip[0]);
  p15_2->value(ob.serie_manip[1]);
  p15_3->value(ob.serie_manip[2]);
  p15_4->value(ob.serie_manip[3]);
  p15_5->value(ob.serie_manip[4]);
  p15_6->value(ob.serie_manip[5]);
  p15_7->value(ob.serie_manip[6]);
  p15_8->value(ob.serie_manip[7]);
  p15_9->value(ob.serie_manip[8]);
  p15_10->value(ob.serie_manip[9]);
  p15_11->value(ob.serie_manip[10]);
  p15_12->value(ob.serie_manip[11]);

}

void jumpOnep15_cb(Fl_Widget*,void*)
{
  jumpone_p15();
}



///////////JUMP1

