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
////*****CONTROLLI FORMULA***///
#include <FL/fl_ask.H>

using namespace std;


////*****CONTROLLI FORMULA***///

void formula::solveFormula()
{
  N = 12;
  a = logic_a->value();
  b = logic_b->value();
  c = logic_c->value();

  w = in_w->value();
  x = in_x->value();
  y = in_y->value();
  z = in_z->value();
 
  if ((b == 2) or (b == 4) or (b == 6) or (b == 8) or (b == 10) or (b == 12))
  {
    if ((c == 2) or (c == 4) or (c == 6) or (c == 8) or (c == 10) or (c == 12))
    {
      if (c!=b)
        {
          if ((c <= N/2) and ( c < b))
          {
            show_formula->value("case: 1");
            caso = 1;
            u = z;
            v = y;
          }
          else
          if((c <= N/2) and ( c > b))
          {
            show_formula->value("case: 2");
            caso = 2;
            u = y;
            v = z;
          }
          else
          if((c >= N/2+1) and ( c < b))
          {
            show_formula->value("case: 3");
            caso = 3;
            u = z;
            v = y;
          }
          else
          if((c >= N/2+1) and ( c > b))
          {
            show_formula->value("case: 4");
            caso = 4;
            u = y;
            v = z;
          }
        }
      }
    else
    if ((c == 1) or (c == 3) or (c == 5) or (c == 7) or (c == 9) or (c == 11))
    {
      if (c!=b)
        {
          if ((c <= N/2) and ( c < b))
          {
            show_formula->value("case: 5");
            caso = 5;
            u = z;
            v = x;
          }
          else
          if((c <= N/2) and ( c > b))
          {
            show_formula->value("case: 6");
            caso = 6;
            u = x;
            v = z;
          }
          else
          if((c >= N/2+1) and ( c < b))
          {
            show_formula->value("case: 7");
            caso = 7;
            u = z;
            v = x;
          }
          else
          if((c >= N/2+1) and ( c > b))
          {
            show_formula->value("case: 8");
            caso = 8;
            u = x;
            v = z;
          }
        }
      }
    }

  if ((b == 1) or (b == 3) or (b == 5) or (b == 7) or (b == 9) or (b == 11))
  {
    if ((c == 2) or (c == 4) or (c == 6) or (c == 8) or (c == 10) or (c == 12))
    {
      if (c!=b)
        {
          if ((c <= N/2) and ( c < b))
          {
            show_formula->value("case: 9");
            caso = 9;
            u = y;
            v = x;
          }
          else
          if((c <= N/2) and ( c > b))
          {
            show_formula->value("case: 10");
            caso = 10;
            u = x;
            v = y;
          }
          else
          if((c >= N/2+1) and ( c < b))
          {
            show_formula->value("case: 11");
            caso = 11;
            u = y;
            v = x;
          }
          else
          if((c >= N/2+1) and ( c > b))
          {
            show_formula->value("case: 12");
            caso = 12;
            u = x;
            v = y;
          }
        }
      }
    else
    if ((c == 1) or (c == 3) or (c == 5) or (c == 7) or (c == 9) or (c == 11))
    {
      if (c!=b)
        {
          if ((c <= N/2) and ( c < b))
          {
            show_formula->value("case: 13");
            caso = 13;
            u = x;
            v = w;
          }
          else
          if((c <= N/2) and ( c > b))
          {
            show_formula->value("case: 14");
            caso = 14;
            u = w;
            v = x;
          }
          else
          if((c >= N/2+1) and ( c < b))
          {
            show_formula->value("case: 15");
            caso = 15;
            u = x;
            v = w;
          }
          else
          if((c >= N/2+1) and ( c > b))
          {
            show_formula->value("case: 16");
            caso = 16;
            u = w;
            v = x;
          }
        }
      }
    }
}

void solveFormula()
{
  formula obj;
//  obj.out_formula();
  obj.solveFormula();
}

void solveFormula_cb(Fl_Widget *, void *)
{
    solveFormula();
}

/*****************************************************************/
/*****************************************************************/
/*funzioni e variabili per la generazione di triple random INIZIO*/
/*****************************************************************/
/*****************************************************************/
void formula::init_r()
{
srand(time(0));
_x=((int)num)/RAND_MAX;
}

int formula::gen_triple()
{
init_r();
num = rand();
j = num%12;
num = rand();
k = num%12;
num = rand();
l = num%12;
}

void formula::out_formula()
{
  gen_triple();
  logic_a->value(j);
  logic_b->value(k);
  logic_c->value(l);
  solveFormula();
}

int formula::trp_seq()
{
  init_r();
  int i = 0;
  for (i=0;i<logic_c->value();i++)
  {
    num = rand();
    j = num%11;
 
    num = rand();
    k = num%11;
 
    num = rand();
    l = num%11;
    }

return 0;

}

int formula::trp_seq_tcrom()
{
  int i = 0;
  int perc;
  init_r();
  window->redraw();
  perc = max_pch->value() - min_pch->value() - 1;

    num = rand();
    j_p1 = num%perc;

    num = rand();
    j_p2 = num%perc;

    num = rand();
    j_p3 = num%perc;

    num = rand();
    j_p4 = num%perc;

    num = rand();
    j_p5 = num%perc;

    num = rand();
    j_p6 = num%perc;

    num = rand();
    j_p7 = num%perc;

    num = rand();
    j_p8 = num%perc;

    num = rand();
    j_p9 = num%perc;

    num = rand();
    j_p10 = num%perc;

    num = rand();
    j_p11 = num%perc;

    num = rand();
    j_p12 = num%perc;

    num = rand();
    k_p = num%perc;

    num = rand();
    l_p = num%perc;

return 0;
}

//////////////////////////////////////
int formula::trp_seq_tinstr()
{
  init_r();
  int i = 0;
  window->redraw();
  int perc = max_instr->value() - min_instr->value() - 1;

    num = rand();
    j_i1 = num%perc;

    num = rand();
    j_i2 = num%perc;

    num = rand();
    j_i3 = num%perc;

    num = rand();
    j_i4 = num%perc;

    num = rand();
    j_i5 = num%perc;

    num = rand();
    j_i6 = num%perc;

    num = rand();
    j_i7 = num%perc;

    num = rand();
    j_i8 = num%perc;

    num = rand();
    j_i9 = num%perc;

    num = rand();
    j_i10 = num%perc;

    num = rand();
    j_i11 = num%perc;

    num = rand();
    j_i12 = num%perc;

return 0;
}
////////////////////////////////////////////////////////////////////////////7
int formula::trp_seq_tdur()
{
  init_r();
  int i = 0;
  int perc;
  window->redraw();

    perc = max_dur->value() - min_dur->value() - 1; 
    
    num = rand();
    j_d1 = num%perc;

    num = rand();
    j_d2 = num%perc;

    num = rand();
    j_d3 = num%perc;

    num = rand();
    j_d4 = num%perc;

    num = rand();
    j_d5 = num%perc;

    num = rand();
    j_d6 = num%perc;

    num = rand();
    j_d7 = num%perc;

    num = rand();
    j_d8 = num%perc;

    num = rand();
    j_d9 = num%perc;

    num = rand();
    j_d10 = num%perc;

    num = rand();
    j_d11 = num%perc;

    num = rand();
    j_d12 = num%perc;

return 0;
}

int formula::trp_seq_tdb()
{
  init_r();
  int i = 0;
  int perc = max_db->value() - min_db->value() - 1;

    num = rand();
    j_db1 = num%perc;

    num = rand();
    j_db2 = num%perc;

    num = rand();
    j_db3 = num%perc;

    num = rand();
    j_db4 = num%perc;

    num = rand();
    j_db5 = num%perc;

    num = rand();
    j_db6 = num%perc;

    num = rand();
    j_db7 = num%perc;

    num = rand();
    j_db8 = num%perc;

    num = rand();
    j_db9 = num%perc;

    num = rand();
    j_db10 = num%perc;

    num = rand();
    j_db11 = num%perc;

    num = rand();
    j_db12 = num%perc;

return 0;
}

int formula::trp_seq_tact()
{
  init_r();
  int i = 0;
  int perc = (int)max_act->value() - (int)min_act->value() - 1;

    num = rand();
    j_act1 = num%perc;

    num = rand();
    j_act2 = num%perc;

    num = rand();
    j_act3 = num%perc;

    num = rand();
    j_act4 = num%perc;

    num = rand();
    j_act5 = num%perc;

    num = rand();
    j_act6 = num%perc;

    num = rand();
    j_act7 = num%perc;

    num = rand();
    j_act8 = num%perc;

    num = rand();
    j_act9 = num%perc;

    num = rand();
    j_act10 = num%perc;

    num = rand();
    j_act11 = num%perc;

    num = rand();
    j_act12 = num%perc;

return 0;
}


/*****************************************************************/
/*****************************************************************/
/*funzioni e variabili per la generazione di triple random FINE*/
/*****************************************************************/
/*****************************************************************/
