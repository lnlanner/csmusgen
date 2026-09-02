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
void ini_p15b()
{
  init_p15b[0] = p15_1b->value();
  init_p15b[1] = p15_2b->value();
  init_p15b[2] = p15_3b->value();
  init_p15b[3] = p15_4b->value();
  init_p15b[4] = p15_5b->value();
  init_p15b[5] = p15_6b->value();
  init_p15b[6] = p15_7b->value();
  init_p15b[7] = p15_8b->value();
  init_p15b[8] = p15_9b->value();
  init_p15b[9] = p15_10b->value();
  init_p15b[10] = p15_11b->value();
  init_p15b[11] = p15_12b->value();
}

void contrappunto::init_p15b_serie()
{
    int i;
    ini_p15b();
    for (i = 0; i < 12; i++)
    {
      serie_p15b[i] = init_p15b[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop15b()
{
  init_p15b_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p15b[s];
    s--;
  }
}


void retro_p15b()
{
  contrappunto ob;
  ob.retrop15b();
  p15_1b->value(ob.serie_manip[0]);
  p15_2b->value(ob.serie_manip[1]);
  p15_3b->value(ob.serie_manip[2]);
  p15_4b->value(ob.serie_manip[3]);
  p15_5b->value(ob.serie_manip[4]);
  p15_6b->value(ob.serie_manip[5]);
  p15_7b->value(ob.serie_manip[6]);
  p15_8b->value(ob.serie_manip[7]);
  p15_9b->value(ob.serie_manip[8]);
  p15_10b->value(ob.serie_manip[9]);
  p15_11b->value(ob.serie_manip[10]);
  p15_12b->value(ob.serie_manip[11]);
}

void retrop15b_cb(Fl_Widget*,void*)
{
  retro_p15b();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep15b()
{
  init_p15b_serie();
  serie_manip[0] = serie_p15b[11];
  serie_manip[1] = serie_p15b[0];
  serie_manip[2] = serie_p15b[10];
  serie_manip[3] = serie_p15b[1];
  serie_manip[4] = serie_p15b[9];
  serie_manip[5] = serie_p15b[2];
  serie_manip[6] = serie_p15b[8];
  serie_manip[7] = serie_p15b[3];
  serie_manip[8] = serie_p15b[7];
  serie_manip[9] = serie_p15b[4];
  serie_manip[10] = serie_p15b[6];
  serie_manip[11] = serie_p15b[5];
}


void croce_p15b()
{
  contrappunto ob;
  ob.crocep15b();
  p15_1b->value(ob.serie_manip[0]);
  p15_2b->value(ob.serie_manip[1]);
  p15_3b->value(ob.serie_manip[2]);
  p15_4b->value(ob.serie_manip[3]);
  p15_5b->value(ob.serie_manip[4]);
  p15_6b->value(ob.serie_manip[5]);
  p15_7b->value(ob.serie_manip[6]);
  p15_8b->value(ob.serie_manip[7]);
  p15_9b->value(ob.serie_manip[8]);
  p15_10b->value(ob.serie_manip[9]);
  p15_11b->value(ob.serie_manip[10]);
  p15_12b->value(ob.serie_manip[11]);
}

void crocep15b_cb(Fl_Widget*,void*)
{
  croce_p15b();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep15b()
{
  init_p15b_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p15b[s];
    s++;
  }
    serie_manip[11] = serie_p15b[0];
}

void slide_p15b()
{
  contrappunto ob;
  ob.slidep15b();
  p15_1b->value(ob.serie_manip[0]);
  p15_2b->value(ob.serie_manip[1]);
  p15_3b->value(ob.serie_manip[2]);
  p15_4b->value(ob.serie_manip[3]);
  p15_5b->value(ob.serie_manip[4]);
  p15_6b->value(ob.serie_manip[5]);
  p15_7b->value(ob.serie_manip[6]);
  p15_8b->value(ob.serie_manip[7]);
  p15_9b->value(ob.serie_manip[8]);
  p15_10b->value(ob.serie_manip[9]);
  p15_11b->value(ob.serie_manip[10]);
  p15_12b->value(ob.serie_manip[11]);
}

void slidep15b_cb(Fl_Widget*,void*)
{
  slide_p15b();
}

/////////////JUMP1

void contrappunto::jump_onep15b()
{
  init_p15b_serie();
  serie_manip[0] = serie_p15b[1];
  serie_manip[1] = serie_p15b[3];
  serie_manip[2] = serie_p15b[5];
  serie_manip[3] = serie_p15b[7];
  serie_manip[4] = serie_p15b[9];
  serie_manip[5] = serie_p15b[11];
  serie_manip[6] = serie_p15b[0];
  serie_manip[7] = serie_p15b[2];
  serie_manip[8] = serie_p15b[4];
  serie_manip[9] = serie_p15b[6];
  serie_manip[10] = serie_p15b[8];
  serie_manip[11] = serie_p15b[10];
}


void jumpone_p15b()
{
  contrappunto ob;
  ob.jump_onep15b();
  p15_1b->value(ob.serie_manip[0]);
  p15_2b->value(ob.serie_manip[1]);
  p15_3b->value(ob.serie_manip[2]);
  p15_4b->value(ob.serie_manip[3]);
  p15_5b->value(ob.serie_manip[4]);
  p15_6b->value(ob.serie_manip[5]);
  p15_7b->value(ob.serie_manip[6]);
  p15_8b->value(ob.serie_manip[7]);
  p15_9b->value(ob.serie_manip[8]);
  p15_10b->value(ob.serie_manip[9]);
  p15_11b->value(ob.serie_manip[10]);
  p15_12b->value(ob.serie_manip[11]);

}

void jumpOnep15b_cb(Fl_Widget*,void*)
{
  jumpone_p15b();
}

