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
void ini_p9()
{
  init_p9[0] = p9_1->value();
  init_p9[1] = p9_2->value();
  init_p9[2] = p9_3->value();
  init_p9[3] = p9_4->value();
  init_p9[4] = p9_5->value();
  init_p9[5] = p9_6->value();
  init_p9[6] = p9_7->value();
  init_p9[7] = p9_8->value();
  init_p9[8] = p9_9->value();
  init_p9[9] = p9_10->value();
  init_p9[10] = p9_11->value();
  init_p9[11] = p9_12->value();
}

void contrappunto::init_p9_serie()
{
    int i;
    ini_p9();
    for (i = 0; i < 12; i++)
    {
      serie_p9[i] = init_p9[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop9()
{
  init_p9_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p9[s];
    s--;
  }
}


void retro_p9()
{
  contrappunto ob;
  ob.retrop9();
  p9_1->value(ob.serie_manip[0]);
  p9_2->value(ob.serie_manip[1]);
  p9_3->value(ob.serie_manip[2]);
  p9_4->value(ob.serie_manip[3]);
  p9_5->value(ob.serie_manip[4]);
  p9_6->value(ob.serie_manip[5]);
  p9_7->value(ob.serie_manip[6]);
  p9_8->value(ob.serie_manip[7]);
  p9_9->value(ob.serie_manip[8]);
  p9_10->value(ob.serie_manip[9]);
  p9_11->value(ob.serie_manip[10]);
  p9_12->value(ob.serie_manip[11]);
}

void retrop9_cb(Fl_Widget*,void*)
{
  retro_p9();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep9()
{
  init_p9_serie();
  serie_manip[0] = serie_p9[11];
  serie_manip[1] = serie_p9[0];
  serie_manip[2] = serie_p9[10];
  serie_manip[3] = serie_p9[1];
  serie_manip[4] = serie_p9[9];
  serie_manip[5] = serie_p9[2];
  serie_manip[6] = serie_p9[8];
  serie_manip[7] = serie_p9[3];
  serie_manip[8] = serie_p9[7];
  serie_manip[9] = serie_p9[4];
  serie_manip[10] = serie_p9[6];
  serie_manip[11] = serie_p9[5];
}


void croce_p9()
{
  contrappunto ob;
  ob.crocep9();
  p9_1->value(ob.serie_manip[0]);
  p9_2->value(ob.serie_manip[1]);
  p9_3->value(ob.serie_manip[2]);
  p9_4->value(ob.serie_manip[3]);
  p9_5->value(ob.serie_manip[4]);
  p9_6->value(ob.serie_manip[5]);
  p9_7->value(ob.serie_manip[6]);
  p9_8->value(ob.serie_manip[7]);
  p9_9->value(ob.serie_manip[8]);
  p9_10->value(ob.serie_manip[9]);
  p9_11->value(ob.serie_manip[10]);
  p9_12->value(ob.serie_manip[11]);
}

void crocep9_cb(Fl_Widget*,void*)
{
  croce_p9();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep9()
{
  init_p9_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p9[s];
    s++;
  }
    serie_manip[11] = serie_p9[0];
}

void slide_p9()
{
  contrappunto ob;
  ob.slidep9();
  p9_1->value(ob.serie_manip[0]);
  p9_2->value(ob.serie_manip[1]);
  p9_3->value(ob.serie_manip[2]);
  p9_4->value(ob.serie_manip[3]);
  p9_5->value(ob.serie_manip[4]);
  p9_6->value(ob.serie_manip[5]);
  p9_7->value(ob.serie_manip[6]);
  p9_8->value(ob.serie_manip[7]);
  p9_9->value(ob.serie_manip[8]);
  p9_10->value(ob.serie_manip[9]);
  p9_11->value(ob.serie_manip[10]);
  p9_12->value(ob.serie_manip[11]);
}

void slidep9_cb(Fl_Widget*,void*)
{
  slide_p9();
}

/////////////JUMP1

void contrappunto::jump_onep9()
{
  init_p9_serie();
  serie_manip[0] = serie_p9[1];
  serie_manip[1] = serie_p9[3];
  serie_manip[2] = serie_p9[5];
  serie_manip[3] = serie_p9[7];
  serie_manip[4] = serie_p9[9];
  serie_manip[5] = serie_p9[11];
  serie_manip[6] = serie_p9[0];
  serie_manip[7] = serie_p9[2];
  serie_manip[8] = serie_p9[4];
  serie_manip[9] = serie_p9[6];
  serie_manip[10] = serie_p9[8];
  serie_manip[11] = serie_p9[10];
}


void jumpone_p9()
{
  contrappunto ob;
  ob.jump_onep9();
  p9_1->value(ob.serie_manip[0]);
  p9_2->value(ob.serie_manip[1]);
  p9_3->value(ob.serie_manip[2]);
  p9_4->value(ob.serie_manip[3]);
  p9_5->value(ob.serie_manip[4]);
  p9_6->value(ob.serie_manip[5]);
  p9_7->value(ob.serie_manip[6]);
  p9_8->value(ob.serie_manip[7]);
  p9_9->value(ob.serie_manip[8]);
  p9_10->value(ob.serie_manip[9]);
  p9_11->value(ob.serie_manip[10]);
  p9_12->value(ob.serie_manip[11]);

}

void jumpOnep9_cb(Fl_Widget*,void*)
{
  jumpone_p9();
}



///////////JUMP1

