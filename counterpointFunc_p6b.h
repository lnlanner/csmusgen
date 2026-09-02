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
void ini_p6b()
{
  init_p6b[0] = p6_1b->value();
  init_p6b[1] = p6_2b->value();
  init_p6b[2] = p6_3b->value();
  init_p6b[3] = p6_4b->value();
  init_p6b[4] = p6_5b->value();
  init_p6b[5] = p6_6b->value();
  init_p6b[6] = p6_7b->value();
  init_p6b[7] = p6_8b->value();
  init_p6b[8] = p6_9b->value();
  init_p6b[9] = p6_10b->value();
  init_p6b[10] = p6_11b->value();
  init_p6b[11] = p6_12b->value();
}

void contrappunto::init_p6b_serie()
{
    int i;
    ini_p6b();
    for (i = 0; i < 12; i++)
    {
      serie_p6b[i] = init_p6b[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop6b()
{
  init_p6b_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p6b[s];
    s--;
  }
}

void retro_p6b()
{
  contrappunto ob;
  ob.retrop6b();
  p6_1b->value(ob.serie_manip[0]);
  p6_2b->value(ob.serie_manip[1]);
  p6_3b->value(ob.serie_manip[2]);
  p6_4b->value(ob.serie_manip[3]);
  p6_5b->value(ob.serie_manip[4]);
  p6_6b->value(ob.serie_manip[5]);
  p6_7b->value(ob.serie_manip[6]);
  p6_8b->value(ob.serie_manip[7]);
  p6_9b->value(ob.serie_manip[8]);
  p6_10b->value(ob.serie_manip[9]);
  p6_11b->value(ob.serie_manip[10]);
  p6_12b->value(ob.serie_manip[11]);
}

void retrop6b_cb(Fl_Widget*,void*)
{
  retro_p6b();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<

void contrappunto::crocep6b()
{
  init_p6b_serie();
  serie_manip[0] = serie_p6b[11];
  serie_manip[1] = serie_p6b[0];
  serie_manip[2] = serie_p6b[10];
  serie_manip[3] = serie_p6b[1];
  serie_manip[4] = serie_p6b[9];
  serie_manip[5] = serie_p6b[2];
  serie_manip[6] = serie_p6b[8];
  serie_manip[7] = serie_p6b[3];
  serie_manip[8] = serie_p6b[7];
  serie_manip[9] = serie_p6b[4];
  serie_manip[10] = serie_p6b[6];
  serie_manip[11] = serie_p6b[5];
}

void croce_p6b()
{
  contrappunto ob;
  ob.crocep6b();
  p6_1b->value(ob.serie_manip[0]);
  p6_2b->value(ob.serie_manip[1]);
  p6_3b->value(ob.serie_manip[2]);
  p6_4b->value(ob.serie_manip[3]);
  p6_5b->value(ob.serie_manip[4]);
  p6_6b->value(ob.serie_manip[5]);
  p6_7b->value(ob.serie_manip[6]);
  p6_8b->value(ob.serie_manip[7]);
  p6_9b->value(ob.serie_manip[8]);
  p6_10b->value(ob.serie_manip[9]);
  p6_11b->value(ob.serie_manip[10]);
  p6_12b->value(ob.serie_manip[11]);
}

void crocep6b_cb(Fl_Widget*,void*)
{
  croce_p6b();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep6b()
{
  init_p6b_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p6b[s];
    s++;
  }
    serie_manip[11] = serie_p6b[0];
}

void slide_p6b()
{
  contrappunto ob;
  ob.slidep6b();
  p6_1b->value(ob.serie_manip[0]);
  p6_2b->value(ob.serie_manip[1]);
  p6_3b->value(ob.serie_manip[2]);
  p6_4b->value(ob.serie_manip[3]);
  p6_5b->value(ob.serie_manip[4]);
  p6_6b->value(ob.serie_manip[5]);
  p6_7b->value(ob.serie_manip[6]);
  p6_8b->value(ob.serie_manip[7]);
  p6_9b->value(ob.serie_manip[8]);
  p6_10b->value(ob.serie_manip[9]);
  p6_11b->value(ob.serie_manip[10]);
  p6_12b->value(ob.serie_manip[11]);
}

void slidep6b_cb(Fl_Widget*,void*)
{
  slide_p6b();
}

/////////////JUMP1

void contrappunto::jump_onep6b()
{
  init_p6b_serie();
  serie_manip[0] = serie_p6b[1];
  serie_manip[1] = serie_p6b[3];
  serie_manip[2] = serie_p6b[5];
  serie_manip[3] = serie_p6b[7];
  serie_manip[4] = serie_p6b[9];
  serie_manip[5] = serie_p6b[11];
  serie_manip[6] = serie_p6b[0];
  serie_manip[7] = serie_p6b[2];
  serie_manip[8] = serie_p6b[4];
  serie_manip[9] = serie_p6b[6];
  serie_manip[10] = serie_p6b[8];
  serie_manip[11] = serie_p6b[10];
}

void jumpone_p6b()
{
  contrappunto ob;
  ob.jump_onep6b();
  p6_1b->value(ob.serie_manip[0]);
  p6_2b->value(ob.serie_manip[1]);
  p6_3b->value(ob.serie_manip[2]);
  p6_4b->value(ob.serie_manip[3]);
  p6_5b->value(ob.serie_manip[4]);
  p6_6b->value(ob.serie_manip[5]);
  p6_7b->value(ob.serie_manip[6]);
  p6_8b->value(ob.serie_manip[7]);
  p6_9b->value(ob.serie_manip[8]);
  p6_10b->value(ob.serie_manip[9]);
  p6_11b->value(ob.serie_manip[10]);
  p6_12b->value(ob.serie_manip[11]);

}

void jumpOnep6b_cb(Fl_Widget*,void*)
{
  jumpone_p6b();
}

