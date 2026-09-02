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
void ini_p11()
{
  init_p11[0] = p11_1->value();
  init_p11[1] = p11_2->value();
  init_p11[2] = p11_3->value();
  init_p11[3] = p11_4->value();
  init_p11[4] = p11_5->value();
  init_p11[5] = p11_6->value();
  init_p11[6] = p11_7->value();
  init_p11[7] = p11_8->value();
  init_p11[8] = p11_9->value();
  init_p11[9] = p11_10->value();
  init_p11[10] = p11_11->value();
  init_p11[11] = p11_12->value();
}

void contrappunto::init_p11_serie()
{
    int i;
    ini_p11();
    for (i = 0; i < 12; i++)
    {
      serie_p11[i] = init_p11[i];
    }
}

//INITIALIZE SERIES<<<<<<<<<

//RETROGRADO>>>>>>>>

void contrappunto::retrop11()
{
  init_p11_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_p11[s];
    s--;
  }
}


void retro_p11()
{
  contrappunto ob;
  ob.retrop11();
  p11_1->value(ob.serie_manip[0]);
  p11_2->value(ob.serie_manip[1]);
  p11_3->value(ob.serie_manip[2]);
  p11_4->value(ob.serie_manip[3]);
  p11_5->value(ob.serie_manip[4]);
  p11_6->value(ob.serie_manip[5]);
  p11_7->value(ob.serie_manip[6]);
  p11_8->value(ob.serie_manip[7]);
  p11_9->value(ob.serie_manip[8]);
  p11_10->value(ob.serie_manip[9]);
  p11_11->value(ob.serie_manip[10]);
  p11_12->value(ob.serie_manip[11]);
}

void retrop11_cb(Fl_Widget*,void*)
{
  retro_p11();
}

//RETROGRADO<<<<<

//CROCE<<<<<<<<<<<


void contrappunto::crocep11()
{
  init_p11_serie();
  serie_manip[0] = serie_p11[11];
  serie_manip[1] = serie_p11[0];
  serie_manip[2] = serie_p11[10];
  serie_manip[3] = serie_p11[1];
  serie_manip[4] = serie_p11[9];
  serie_manip[5] = serie_p11[2];
  serie_manip[6] = serie_p11[8];
  serie_manip[7] = serie_p11[3];
  serie_manip[8] = serie_p11[7];
  serie_manip[9] = serie_p11[4];
  serie_manip[10] = serie_p11[6];
  serie_manip[11] = serie_p11[5];
}


void croce_p11()
{
  contrappunto ob;
  ob.crocep11();
  p11_1->value(ob.serie_manip[0]);
  p11_2->value(ob.serie_manip[1]);
  p11_3->value(ob.serie_manip[2]);
  p11_4->value(ob.serie_manip[3]);
  p11_5->value(ob.serie_manip[4]);
  p11_6->value(ob.serie_manip[5]);
  p11_7->value(ob.serie_manip[6]);
  p11_8->value(ob.serie_manip[7]);
  p11_9->value(ob.serie_manip[8]);
  p11_10->value(ob.serie_manip[9]);
  p11_11->value(ob.serie_manip[10]);
  p11_12->value(ob.serie_manip[11]);
}

void crocep11_cb(Fl_Widget*,void*)
{
  croce_p11();
}

//CROCE<<<<<<<<<<<<<<

//SLIDE>>>>>>>>>>>>>>

void contrappunto::slidep11()
{
  init_p11_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_p11[s];
    s++;
  }
    serie_manip[11] = serie_p11[0];
}

void slide_p11()
{
  contrappunto ob;
  ob.slidep11();
  p11_1->value(ob.serie_manip[0]);
  p11_2->value(ob.serie_manip[1]);
  p11_3->value(ob.serie_manip[2]);
  p11_4->value(ob.serie_manip[3]);
  p11_5->value(ob.serie_manip[4]);
  p11_6->value(ob.serie_manip[5]);
  p11_7->value(ob.serie_manip[6]);
  p11_8->value(ob.serie_manip[7]);
  p11_9->value(ob.serie_manip[8]);
  p11_10->value(ob.serie_manip[9]);
  p11_11->value(ob.serie_manip[10]);
  p11_12->value(ob.serie_manip[11]);
}

void slidep11_cb(Fl_Widget*,void*)
{
  slide_p11();
}

/////////////JUMP1

void contrappunto::jump_onep11()
{
  init_p11_serie();
  serie_manip[0] = serie_p11[1];
  serie_manip[1] = serie_p11[3];
  serie_manip[2] = serie_p11[5];
  serie_manip[3] = serie_p11[7];
  serie_manip[4] = serie_p11[9];
  serie_manip[5] = serie_p11[11];
  serie_manip[6] = serie_p11[0];
  serie_manip[7] = serie_p11[2];
  serie_manip[8] = serie_p11[4];
  serie_manip[9] = serie_p11[6];
  serie_manip[10] = serie_p11[8];
  serie_manip[11] = serie_p11[10];
}


void jumpone_p11()
{
  contrappunto ob;
  ob.jump_onep11();
  p11_1->value(ob.serie_manip[0]);
  p11_2->value(ob.serie_manip[1]);
  p11_3->value(ob.serie_manip[2]);
  p11_4->value(ob.serie_manip[3]);
  p11_5->value(ob.serie_manip[4]);
  p11_6->value(ob.serie_manip[5]);
  p11_7->value(ob.serie_manip[6]);
  p11_8->value(ob.serie_manip[7]);
  p11_9->value(ob.serie_manip[8]);
  p11_10->value(ob.serie_manip[9]);
  p11_11->value(ob.serie_manip[10]);
  p11_12->value(ob.serie_manip[11]);

}

void jumpOnep11_cb(Fl_Widget*,void*)
{
  jumpone_p11();
}



///////////JUMP1

