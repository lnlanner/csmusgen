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
void ini_p12b()
{
  init_p12b[0] = p12_1b->value();
  init_p12b[1] = p12_2b->value();
  init_p12b[2] = p12_3b->value();
  init_p12b[3] = p12_4b->value();
  init_p12b[4] = p12_5b->value();
  init_p12b[5] = p12_6b->value();
  init_p12b[6] = p12_7b->value();
  init_p12b[7] = p12_8b->value();
  init_p12b[8] = p12_9b->value();
  init_p12b[9] = p12_10b->value();
  init_p12b[10] = p12_11b->value();
  init_p12b[11] = p12_12b->value();
}

void contrappunto::init_p12b_serie()
{
    int i;
    ini_p12b();
    for (i = 0; i < 12; i++)
    {
      serie_p12b[i] = init_p12b[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop12b()
{
  init_p12b_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p12b[s];
    s--;
  }
}


void retro_p12b()
{
  contrappunto ob;
  ob.retrop12b();
  p12_1b->value(ob.serie_manip[0]);
  p12_2b->value(ob.serie_manip[1]);
  p12_3b->value(ob.serie_manip[2]);
  p12_4b->value(ob.serie_manip[3]);
  p12_5b->value(ob.serie_manip[4]);
  p12_6b->value(ob.serie_manip[5]);
  p12_7b->value(ob.serie_manip[6]);
  p12_8b->value(ob.serie_manip[7]);
  p12_9b->value(ob.serie_manip[8]);
  p12_10b->value(ob.serie_manip[9]);
  p12_11b->value(ob.serie_manip[10]);
  p12_12b->value(ob.serie_manip[11]);
}

void retrop12b_cb(Fl_Widget*,void*)
{
  retro_p12b();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep12b()
{
  init_p12b_serie();
  serie_manip[0] = serie_p12b[11];
  serie_manip[1] = serie_p12b[0];
  serie_manip[2] = serie_p12b[10];
  serie_manip[3] = serie_p12b[1];
  serie_manip[4] = serie_p12b[9];
  serie_manip[5] = serie_p12b[2];
  serie_manip[6] = serie_p12b[8];
  serie_manip[7] = serie_p12b[3];
  serie_manip[8] = serie_p12b[7];
  serie_manip[9] = serie_p12b[4];
  serie_manip[10] = serie_p12b[6];
  serie_manip[11] = serie_p12b[5];
}


void croce_p12b()
{
  contrappunto ob;
  ob.crocep12b();
  p12_1b->value(ob.serie_manip[0]);
  p12_2b->value(ob.serie_manip[1]);
  p12_3b->value(ob.serie_manip[2]);
  p12_4b->value(ob.serie_manip[3]);
  p12_5b->value(ob.serie_manip[4]);
  p12_6b->value(ob.serie_manip[5]);
  p12_7b->value(ob.serie_manip[6]);
  p12_8b->value(ob.serie_manip[7]);
  p12_9b->value(ob.serie_manip[8]);
  p12_10b->value(ob.serie_manip[9]);
  p12_11b->value(ob.serie_manip[10]);
  p12_12b->value(ob.serie_manip[11]);
}

void crocep12b_cb(Fl_Widget*,void*)
{
  croce_p12b();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep12b()
{
  init_p12b_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p12b[s];
    s++;
  }
    serie_manip[11] = serie_p12b[0];
}

void slide_p12b()
{
  contrappunto ob;
  ob.slidep12b();
  p12_1b->value(ob.serie_manip[0]);
  p12_2b->value(ob.serie_manip[1]);
  p12_3b->value(ob.serie_manip[2]);
  p12_4b->value(ob.serie_manip[3]);
  p12_5b->value(ob.serie_manip[4]);
  p12_6b->value(ob.serie_manip[5]);
  p12_7b->value(ob.serie_manip[6]);
  p12_8b->value(ob.serie_manip[7]);
  p12_9b->value(ob.serie_manip[8]);
  p12_10b->value(ob.serie_manip[9]);
  p12_11b->value(ob.serie_manip[10]);
  p12_12b->value(ob.serie_manip[11]);
}

void slidep12b_cb(Fl_Widget*,void*)
{
  slide_p12b();
}

/////////////JUMP1

void contrappunto::jump_onep12b()
{
  init_p12b_serie();
  serie_manip[0] = serie_p12b[1];
  serie_manip[1] = serie_p12b[3];
  serie_manip[2] = serie_p12b[5];
  serie_manip[3] = serie_p12b[7];
  serie_manip[4] = serie_p12b[9];
  serie_manip[5] = serie_p12b[11];
  serie_manip[6] = serie_p12b[0];
  serie_manip[7] = serie_p12b[2];
  serie_manip[8] = serie_p12b[4];
  serie_manip[9] = serie_p12b[6];
  serie_manip[10] = serie_p12b[8];
  serie_manip[11] = serie_p12b[10];
}


void jumpone_p12b()
{
  contrappunto ob;
  ob.jump_onep12b();
  p12_1b->value(ob.serie_manip[0]);
  p12_2b->value(ob.serie_manip[1]);
  p12_3b->value(ob.serie_manip[2]);
  p12_4b->value(ob.serie_manip[3]);
  p12_5b->value(ob.serie_manip[4]);
  p12_6b->value(ob.serie_manip[5]);
  p12_7b->value(ob.serie_manip[6]);
  p12_8b->value(ob.serie_manip[7]);
  p12_9b->value(ob.serie_manip[8]);
  p12_10b->value(ob.serie_manip[9]);
  p12_11b->value(ob.serie_manip[10]);
  p12_12b->value(ob.serie_manip[11]);

}

void jumpOnep12b_cb(Fl_Widget*,void*)
{
  jumpone_p12b();
}

