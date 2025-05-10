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
void ini_p9b()
{
  init_p9b[0] = p9_1b->value();
  init_p9b[1] = p9_2b->value();
  init_p9b[2] = p9_3b->value();
  init_p9b[3] = p9_4b->value();
  init_p9b[4] = p9_5b->value();
  init_p9b[5] = p9_6b->value();
  init_p9b[6] = p9_7b->value();
  init_p9b[7] = p9_8b->value();
  init_p9b[8] = p9_9b->value();
  init_p9b[9] = p9_10b->value();
  init_p9b[10] = p9_11b->value();
  init_p9b[11] = p9_12b->value();
}

void contrappunto::init_p9b_serie()
{
    int i;
    ini_p9b();
    for (i = 0; i < 12; i++)
    {
      serie_p9b[i] = init_p9b[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop9b()
{
  init_p9b_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p9b[s];
    s--;
  }
}

void retro_p9b()
{
  contrappunto ob;
  ob.retrop9b();
  p9_1b->value(ob.serie_manip[0]);
  p9_2b->value(ob.serie_manip[1]);
  p9_3b->value(ob.serie_manip[2]);
  p9_4b->value(ob.serie_manip[3]);
  p9_5b->value(ob.serie_manip[4]);
  p9_6b->value(ob.serie_manip[5]);
  p9_7b->value(ob.serie_manip[6]);
  p9_8b->value(ob.serie_manip[7]);
  p9_9b->value(ob.serie_manip[8]);
  p9_10b->value(ob.serie_manip[9]);
  p9_11b->value(ob.serie_manip[10]);
  p9_12b->value(ob.serie_manip[11]);
}

void retrop9b_cb(Fl_Widget*,void*)
{
  retro_p9b();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep9b()
{
  init_p9b_serie();
  serie_manip[0] = serie_p9b[11];
  serie_manip[1] = serie_p9b[0];
  serie_manip[2] = serie_p9b[10];
  serie_manip[3] = serie_p9b[1];
  serie_manip[4] = serie_p9b[9];
  serie_manip[5] = serie_p9b[2];
  serie_manip[6] = serie_p9b[8];
  serie_manip[7] = serie_p9b[3];
  serie_manip[8] = serie_p9b[7];
  serie_manip[9] = serie_p9b[4];
  serie_manip[10] = serie_p9b[6];
  serie_manip[11] = serie_p9b[5];
}


void croce_p9b()
{
  contrappunto ob;
  ob.crocep9b();
  p9_1b->value(ob.serie_manip[0]);
  p9_2b->value(ob.serie_manip[1]);
  p9_3b->value(ob.serie_manip[2]);
  p9_4b->value(ob.serie_manip[3]);
  p9_5b->value(ob.serie_manip[4]);
  p9_6b->value(ob.serie_manip[5]);
  p9_7b->value(ob.serie_manip[6]);
  p9_8b->value(ob.serie_manip[7]);
  p9_9b->value(ob.serie_manip[8]);
  p9_10b->value(ob.serie_manip[9]);
  p9_11b->value(ob.serie_manip[10]);
  p9_12b->value(ob.serie_manip[11]);
}

void crocep9b_cb(Fl_Widget*,void*)
{
  croce_p9b();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep9b()
{
  init_p9b_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p9b[s];
    s++;
  }
    serie_manip[11] = serie_p9b[0];
}

void slide_p9b()
{
  contrappunto ob;
  ob.slidep9b();
  p9_1b->value(ob.serie_manip[0]);
  p9_2b->value(ob.serie_manip[1]);
  p9_3b->value(ob.serie_manip[2]);
  p9_4b->value(ob.serie_manip[3]);
  p9_5b->value(ob.serie_manip[4]);
  p9_6b->value(ob.serie_manip[5]);
  p9_7b->value(ob.serie_manip[6]);
  p9_8b->value(ob.serie_manip[7]);
  p9_9b->value(ob.serie_manip[8]);
  p9_10b->value(ob.serie_manip[9]);
  p9_11b->value(ob.serie_manip[10]);
  p9_12b->value(ob.serie_manip[11]);
}

void slidep9b_cb(Fl_Widget*,void*)
{
  slide_p9b();
}

/////////////JUMP1

void contrappunto::jump_onep9b()
{
  init_p9b_serie();
  serie_manip[0] = serie_p9b[1];
  serie_manip[1] = serie_p9b[3];
  serie_manip[2] = serie_p9b[5];
  serie_manip[3] = serie_p9b[7];
  serie_manip[4] = serie_p9b[9];
  serie_manip[5] = serie_p9b[11];
  serie_manip[6] = serie_p9b[0];
  serie_manip[7] = serie_p9b[2];
  serie_manip[8] = serie_p9b[4];
  serie_manip[9] = serie_p9b[6];
  serie_manip[10] = serie_p9b[8];
  serie_manip[11] = serie_p9b[10];
}


void jumpone_p9b()
{
  contrappunto ob;
  ob.jump_onep9b();
  p9_1b->value(ob.serie_manip[0]);
  p9_2b->value(ob.serie_manip[1]);
  p9_3b->value(ob.serie_manip[2]);
  p9_4b->value(ob.serie_manip[3]);
  p9_5b->value(ob.serie_manip[4]);
  p9_6b->value(ob.serie_manip[5]);
  p9_7b->value(ob.serie_manip[6]);
  p9_8b->value(ob.serie_manip[7]);
  p9_9b->value(ob.serie_manip[8]);
  p9_10b->value(ob.serie_manip[9]);
  p9_11b->value(ob.serie_manip[10]);
  p9_12b->value(ob.serie_manip[11]);

}

void jumpOnep9b_cb(Fl_Widget*,void*)
{
  jumpone_p9b();
}

