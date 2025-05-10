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
void ini_db()
{
  init_db[0] = db_1->value();
  init_db[1] = db_2->value();
  init_db[2] = db_3->value();
  init_db[3] = db_4->value();
  init_db[4] = db_5->value();
  init_db[5] = db_6->value();
  init_db[6] = db_7->value();
  init_db[7] = db_8->value();
  init_db[8] = db_9->value();
  init_db[9] = db_10->value();
  init_db[10] = db_11->value();
  init_db[11] = db_12->value();
}

void contrappunto::db_lim_input()
{
    db_min_ = (int)min_db->value();
    db_max_ = (int)max_db->value();
}

void contrappunto::subset_db()
{
  formula formula;
  db_lim_input();
  //////////INITIALIZE DB SUBSET/////
    int sub_tdb_size = (int)db_max_ - (int)db_min_;
    float *sub_tdb = new float[sub_tdb_size];

    init_params();
    int indice = (int)db_min_;
    int i;
    for (i = 0; i < sub_tdb_size; i++)
    {
        sub_tdb[i] = tdb[indice];
        indice++;
    }
  ///////////////////////////////////////////////////////////
  if (logic_a->value() == 1)
    {
      formula.trp_seq_tdb();
      init_params();
      db_1->value(sub_tdb[formula.j_db1]);
    }

  else if (logic_a->value() == 2)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
    }

  else if (logic_a->value() == 3)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
    }

    else if (logic_a->value() == 4)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
    }

  else if (logic_a->value() == 5)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
    }

    else if (logic_a->value() == 6)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
      db_6->value(sub_tdb[formula.j_db6]);
    }

  else if (logic_a->value() == 7)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
      db_6->value(sub_tdb[formula.j_db6]);
      db_7->value(sub_tdb[formula.j_db7]);
    }

  else if (logic_a->value() == 8)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
      db_6->value(sub_tdb[formula.j_db6]);
      db_7->value(sub_tdb[formula.j_db7]);
      db_8->value(sub_tdb[formula.j_db8]);
    }

  else if (logic_a->value() == 9)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
      db_6->value(sub_tdb[formula.j_db6]);
      db_7->value(sub_tdb[formula.j_db7]);
      db_8->value(sub_tdb[formula.j_db8]);
      db_9->value(sub_tdb[formula.j_db9]);
    }

  else if (logic_a->value() == 10)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
      db_6->value(sub_tdb[formula.j_db6]);
      db_7->value(sub_tdb[formula.j_db7]);
      db_8->value(sub_tdb[formula.j_db8]);
      db_9->value(sub_tdb[formula.j_db9]);
      db_10->value(sub_tdb[formula.j_db10]);
    }

  else if (logic_a->value() == 11)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
      db_6->value(sub_tdb[formula.j_db6]);
      db_7->value(sub_tdb[formula.j_db7]);
      db_8->value(sub_tdb[formula.j_db8]);
      db_9->value(sub_tdb[formula.j_db9]);
      db_10->value(sub_tdb[formula.j_db10]);
      db_11->value(sub_tdb[formula.j_db11]);
    }

  else if (logic_a->value() == 12)
    {
      formula.trp_seq_tdb();
      init_params();

      db_1->value(sub_tdb[formula.j_db1]);
      db_2->value(sub_tdb[formula.j_db2]);
      db_3->value(sub_tdb[formula.j_db3]);
      db_4->value(sub_tdb[formula.j_db4]);
      db_5->value(sub_tdb[formula.j_db5]);
      db_6->value(sub_tdb[formula.j_db6]);
      db_7->value(sub_tdb[formula.j_db7]);
      db_8->value(sub_tdb[formula.j_db8]);
      db_9->value(sub_tdb[formula.j_db9]);
      db_10->value(sub_tdb[formula.j_db10]);
      db_11->value(sub_tdb[formula.j_db11]);
      db_12->value(sub_tdb[formula.j_db12]);
    }
     delete [] sub_tdb;
}

void contrappunto::init_db_serie()
{
    int i;
    if (bt_enable_db->value() == 1)
    {
        subset_db();
    }

    ini_db();
    for (i = 0; i < 12; i++)
    {
      serie_db[i] = init_db[i];
    }
}

/*INITIALIZE PITCH SERIES<<<<<<<<<*/

/*RETROGRADO>>>>>>>>*/

void contrappunto::retroDb()
{
  if (bt_enable_db->value() == 1)
  {
  subset_db();
  }
  init_db_serie();

  int i;
  int s = 11;

  for (i=0;i<12;i++)
  {
    serie_manip[i] = serie_db[s];
    s--;
  }
}


void retro_db()
{
  contrappunto ob;
  ob.retroDb();
  db_1->value(ob.serie_manip[0]);
  db_2->value(ob.serie_manip[1]);
  db_3->value(ob.serie_manip[2]);
  db_4->value(ob.serie_manip[3]);
  db_5->value(ob.serie_manip[4]);
  db_6->value(ob.serie_manip[5]);
  db_7->value(ob.serie_manip[6]);
  db_8->value(ob.serie_manip[7]);
  db_9->value(ob.serie_manip[8]);
  db_10->value(ob.serie_manip[9]);
  db_11->value(ob.serie_manip[10]);
  db_12->value(ob.serie_manip[11]);
}

void retroDb_cb(Fl_Widget*,void*)
{
  retro_db();
  counterpointPitch->value(0);
}

/*RETROGRADO<<<<<*/

/*CROCE<<<<<<<<<<<*/


void contrappunto::croceDb()
{
  init_db_serie();
  serie_manip[0] = serie_db[11];
  serie_manip[1] = serie_db[0];
  serie_manip[2] = serie_db[10];
  serie_manip[3] = serie_db[1];
  serie_manip[4] = serie_db[9];
  serie_manip[5] = serie_db[2];
  serie_manip[6] = serie_db[8];
  serie_manip[7] = serie_db[3];
  serie_manip[8] = serie_db[7];
  serie_manip[9] = serie_db[4];
  serie_manip[10] = serie_db[6];
  serie_manip[11] = serie_db[5];
}


void croce_db()
{
  contrappunto ob;
  ob.croceDb();
  db_1->value(ob.serie_manip[0]);
  db_2->value(ob.serie_manip[1]);
  db_3->value(ob.serie_manip[2]);
  db_4->value(ob.serie_manip[3]);
  db_5->value(ob.serie_manip[4]);
  db_6->value(ob.serie_manip[5]);
  db_7->value(ob.serie_manip[6]);
  db_8->value(ob.serie_manip[7]);
  db_9->value(ob.serie_manip[8]);
  db_10->value(ob.serie_manip[9]);
  db_11->value(ob.serie_manip[10]);
  db_12->value(ob.serie_manip[11]);
}

void croceDb_cb(Fl_Widget*,void*)
{
  croce_db();
}

/*CROCE<<<<<<<<<<<<<<*/

/*SLIDE>>>>>>>>>>>>>>*/

void contrappunto::slideDb()
{
  init_db_serie();
  int i, s;
  i = 0;
  s = 1;
  for (i=0;i<11;i++)
  {
    serie_manip[i] = serie_db[s];
    s++;
  }
    serie_manip[11] = serie_db[0];
}

void slide_db()
{
  contrappunto ob;
  ob.slideDb();
  db_1->value(ob.serie_manip[0]);
  db_2->value(ob.serie_manip[1]);
  db_3->value(ob.serie_manip[2]);
  db_4->value(ob.serie_manip[3]);
  db_5->value(ob.serie_manip[4]);
  db_6->value(ob.serie_manip[5]);
  db_7->value(ob.serie_manip[6]);
  db_8->value(ob.serie_manip[7]);
  db_9->value(ob.serie_manip[8]);
  db_10->value(ob.serie_manip[9]);
  db_11->value(ob.serie_manip[10]);
  db_12->value(ob.serie_manip[11]);
}

void slideDb_cb(Fl_Widget*,void*)
{
  slide_db();
}

/*******JUMP1*****/

void contrappunto::jump_oneDb()
{
  init_db_serie();
  serie_manip[0] = serie_db[1];
  serie_manip[1] = serie_db[3];
  serie_manip[2] = serie_db[5];
  serie_manip[3] = serie_db[7];
  serie_manip[4] = serie_db[9];
  serie_manip[5] = serie_db[11];
  serie_manip[6] = serie_db[0];
  serie_manip[7] = serie_db[2];
  serie_manip[8] = serie_db[4];
  serie_manip[9] = serie_db[6];
  serie_manip[10] = serie_db[8];
  serie_manip[11] = serie_db[10];
}


void jumpone_db()
{
  contrappunto ob;
  ob.jump_oneDb();
  db_1->value(ob.serie_manip[0]);
  db_2->value(ob.serie_manip[1]);
  db_3->value(ob.serie_manip[2]);
  db_4->value(ob.serie_manip[3]);
  db_5->value(ob.serie_manip[4]);
  db_6->value(ob.serie_manip[5]);
  db_7->value(ob.serie_manip[6]);
  db_8->value(ob.serie_manip[7]);
  db_9->value(ob.serie_manip[8]);
  db_10->value(ob.serie_manip[9]);
  db_11->value(ob.serie_manip[10]);
  db_12->value(ob.serie_manip[11]);

}

void jumpOneDb_cb(Fl_Widget*,void*)
{
  jumpone_db();
}

/****JUMP1*****/

