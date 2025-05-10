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
void ini_p12()
{
  init_p12[0] = p12_1->value();
  init_p12[1] = p12_2->value();
  init_p12[2] = p12_3->value();
  init_p12[3] = p12_4->value();
  init_p12[4] = p12_5->value();
  init_p12[5] = p12_6->value();
  init_p12[6] = p12_7->value();
  init_p12[7] = p12_8->value();
  init_p12[8] = p12_9->value();
  init_p12[9] = p12_10->value();
  init_p12[10] = p12_11->value();
  init_p12[11] = p12_12->value();
}

void contrappunto::init_p12_serie()
{
    int i;
    ini_p12();
    for (i = 0; i < 12; i++)
    {
      serie_p12[i] = init_p12[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop12()
{
  init_p12_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p12[s];
    s--;
  }
}


void retro_p12()
{
  contrappunto ob;
  ob.retrop12();
  p12_1->value(ob.serie_manip[0]);
  p12_2->value(ob.serie_manip[1]);
  p12_3->value(ob.serie_manip[2]);
  p12_4->value(ob.serie_manip[3]);
  p12_5->value(ob.serie_manip[4]);
  p12_6->value(ob.serie_manip[5]);
  p12_7->value(ob.serie_manip[6]);
  p12_8->value(ob.serie_manip[7]);
  p12_9->value(ob.serie_manip[8]);
  p12_10->value(ob.serie_manip[9]);
  p12_11->value(ob.serie_manip[10]);
  p12_12->value(ob.serie_manip[11]);
}

void retrop12_cb(Fl_Widget*,void*)
{
  retro_p12();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep12()
{
  init_p12_serie();
  serie_manip[0] = serie_p12[11];
  serie_manip[1] = serie_p12[0];
  serie_manip[2] = serie_p12[10];
  serie_manip[3] = serie_p12[1];
  serie_manip[4] = serie_p12[9];
  serie_manip[5] = serie_p12[2];
  serie_manip[6] = serie_p12[8];
  serie_manip[7] = serie_p12[3];
  serie_manip[8] = serie_p12[7];
  serie_manip[9] = serie_p12[4];
  serie_manip[10] = serie_p12[6];
  serie_manip[11] = serie_p12[5];
}


void croce_p12()
{
  contrappunto ob;
  ob.crocep12();
  p12_1->value(ob.serie_manip[0]);
  p12_2->value(ob.serie_manip[1]);
  p12_3->value(ob.serie_manip[2]);
  p12_4->value(ob.serie_manip[3]);
  p12_5->value(ob.serie_manip[4]);
  p12_6->value(ob.serie_manip[5]);
  p12_7->value(ob.serie_manip[6]);
  p12_8->value(ob.serie_manip[7]);
  p12_9->value(ob.serie_manip[8]);
  p12_10->value(ob.serie_manip[9]);
  p12_11->value(ob.serie_manip[10]);
  p12_12->value(ob.serie_manip[11]);
}

void crocep12_cb(Fl_Widget*,void*)
{
  croce_p12();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep12()
{
  init_p12_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p12[s];
    s++;
  }
    serie_manip[11] = serie_p12[0];
}

void slide_p12()
{
  contrappunto ob;
  ob.slidep12();
  p12_1->value(ob.serie_manip[0]);
  p12_2->value(ob.serie_manip[1]);
  p12_3->value(ob.serie_manip[2]);
  p12_4->value(ob.serie_manip[3]);
  p12_5->value(ob.serie_manip[4]);
  p12_6->value(ob.serie_manip[5]);
  p12_7->value(ob.serie_manip[6]);
  p12_8->value(ob.serie_manip[7]);
  p12_9->value(ob.serie_manip[8]);
  p12_10->value(ob.serie_manip[9]);
  p12_11->value(ob.serie_manip[10]);
  p12_12->value(ob.serie_manip[11]);
}

void slidep12_cb(Fl_Widget*,void*)
{
  slide_p12();
}

/////////////JUMP1

void contrappunto::jump_onep12()
{
  init_p12_serie();
  serie_manip[0] = serie_p12[1];
  serie_manip[1] = serie_p12[3];
  serie_manip[2] = serie_p12[5];
  serie_manip[3] = serie_p12[7];
  serie_manip[4] = serie_p12[9];
  serie_manip[5] = serie_p12[11];
  serie_manip[6] = serie_p12[0];
  serie_manip[7] = serie_p12[2];
  serie_manip[8] = serie_p12[4];
  serie_manip[9] = serie_p12[6];
  serie_manip[10] = serie_p12[8];
  serie_manip[11] = serie_p12[10];
}


void jumpone_p12()
{
  contrappunto ob;
  ob.jump_onep12();
  p12_1->value(ob.serie_manip[0]);
  p12_2->value(ob.serie_manip[1]);
  p12_3->value(ob.serie_manip[2]);
  p12_4->value(ob.serie_manip[3]);
  p12_5->value(ob.serie_manip[4]);
  p12_6->value(ob.serie_manip[5]);
  p12_7->value(ob.serie_manip[6]);
  p12_8->value(ob.serie_manip[7]);
  p12_9->value(ob.serie_manip[8]);
  p12_10->value(ob.serie_manip[9]);
  p12_11->value(ob.serie_manip[10]);
  p12_12->value(ob.serie_manip[11]);

}

void jumpOnep12_cb(Fl_Widget*,void*)
{
  jumpone_p12();
}



///////////JUMP1

