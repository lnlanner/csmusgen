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
class formula{
  double a, b, c, N;
  int num;
  double _x;
  float subset_pitch[12];
  float subset_dur[12];
  float subset_db[12];
  float subset_instr[12];
  float subset_act[12];
  
  float subset_p6[12];
  float subset_p7[12];
  float subset_p8[12];
  float subset_p9[12];
  float subset_p10[12];
  float subset_p11[12];
  float subset_p12[12];
  float subset_p13[12];
  float subset_p14[12];
  float subset_p15[12];

  float subset_p6b[12];
  float subset_p7b[12];
  float subset_p8b[12];
  float subset_p9b[12];
  float subset_p10b[12];
  float subset_p11b[12];
  float subset_p12b[12];
  float subset_p13b[12];
  float subset_p14b[12];
  float subset_p15b[12];
  
  public:
  void init_r();
  void init_r_float();
  int j, k, l;
  int j_p1, j_p2, j_p3, j_p4, j_p5, j_p6, j_p7, j_p8, j_p9, j_p10, j_p11, j_p12;
  int j_i1, j_i2, j_i3, j_i4, j_i5, j_i6, j_i7, j_i8, j_i9, j_i10, j_i11, j_i12;
  int j_d1, j_d2, j_d3, j_d4, j_d5, j_d6, j_d7, j_d8, j_d9, j_d10, j_d11, j_d12;
  int j_db1, j_db2, j_db3, j_db4, j_db5, j_db6, j_db7, j_db8, j_db9, j_db10, j_db11, j_db12;
  int j_act1, j_act2, j_act3, j_act4, j_act5, j_act6, j_act7, j_act8, j_act9, j_act10, j_act11, j_act12;

  int k_p;
  int l_p;

  void out_formula();
  void solveFormula();
  int trp_seq();
  int trp_seq_tcrom();
  int trp_seq_tinstr();
  int trp_seq_tdur();
  int trp_seq_tdb();
  int trp_seq_tact();

  int gen_triple();
  };
 
class contrappunto: public formula{
  float serie[12];
  float pitch;
  float serie_pitch[12];
  float serie_dur[12];
  float serie_db[12];
  float serie_instr[12];
  float serie_act[12];

  float serie_p6[12];
  float serie_p7[12];
  float serie_p8[12];
  float serie_p9[12];
  float serie_p10[12];
  float serie_p11[12];
  float serie_p12[12];
  float serie_p13[12];
  float serie_p14[12];
  float serie_p15[12];

  float serie_p6b[12];
  float serie_p7b[12];
  float serie_p8b[12];
  float serie_p9b[12];
  float serie_p10b[12];
  float serie_p11b[12];
  float serie_p12b[12];
  float serie_p13b[12];
  float serie_p14b[12];
  float serie_p15b[12];

  float tcrom[84];
  float tdb[80];
  float tdur[103];
  float tInstr[24];
  float tact[1800];

  int init_params();

  void pitch_lim_input();
  void dur_lim_input();
  void db_lim_input();
  void instr_lim_input();
  void act_lim_input();

  public:

  void subset_pitch();
  void subset_dur();
  void subset_db();
  void subset_instr();
  void subset_act();
  
  void outAuto();
  void retro();
  void retroPitch();
  void retroDur();
  void retroDb();
  void retroInstr();
  void retroact();

  void retrop6();
  void retrop7();
  void retrop8();
  void retrop9();
  void retrop10();
  void retrop11();
  void retrop12();
  void retrop13();
  void retrop14();
  void retrop15();
  
  void retrop6b();
  void retrop7b();
  void retrop8b();
  void retrop9b();
  void retrop10b();
  void retrop11b();
  void retrop12b();
  void retrop13b();
  void retrop14b();
  void retrop15b();

  void croce();
  void crocePitch();
  void croceInstr();
  void croceDb();
  void croceDur();
  void croceact();
  
  void crocep6();
  void crocep7();
  void crocep8();
  void crocep9();
  void crocep10();
  void crocep11();
  void crocep12();
  void crocep13();
  void crocep14();
  void crocep15();
  
  void crocep6b();
  void crocep7b();
  void crocep8b();
  void crocep9b();
  void crocep10b();
  void crocep11b();
  void crocep12b();
  void crocep13b();
  void crocep14b();
  void crocep15b();

  void slide();
  void slideInstr();
  void slideDur();
  void slideDb();
  void slidePitch();
  void slideact();
  
  void slidep6();
  void slidep7();
  void slidep8();
  void slidep9();
  void slidep10();
  void slidep11();
  void slidep12();
  void slidep13();
  void slidep14();
  void slidep15();
  
  void slidep6b();
  void slidep7b();
  void slidep8b();
  void slidep9b();
  void slidep10b();
  void slidep11b();
  void slidep12b();
  void slidep13b();
  void slidep14b();
  void slidep15b();

  void jump_one();
  void jump_oneInstr();
  void jump_oneDur();
  void jump_oneDb();
  void jump_onePitch();
  void jump_oneact();
  
  void jump_onep6();
  void jump_onep7();
  void jump_onep8();
  void jump_onep9();
  void jump_onep10();
  void jump_onep11();
  void jump_onep12();
  void jump_onep13();
  void jump_onep14();
  void jump_onep15();
  
  void jump_onep6b();
  void jump_onep7b();
  void jump_onep8b();
  void jump_onep9b();
  void jump_onep10b();
  void jump_onep11b();
  void jump_onep12b();
  void jump_onep13b();
  void jump_onep14b();
  void jump_onep15b();

  void init_pitch_serie();
  void init_dur_serie();
  void init_db_serie();
  void init_instr_serie();
  void init_act_serie();
  
  void init_p6_serie();
  void init_p7_serie();
  void init_p8_serie();
  void init_p9_serie();
  void init_p10_serie();
  void init_p11_serie();
  void init_p12_serie();
  void init_p13_serie();
  void init_p14_serie();
  void init_p15_serie();

  void init_p6b_serie();
  void init_p7b_serie();
  void init_p8b_serie();
  void init_p9b_serie();
  void init_p10b_serie();
  void init_p11b_serie();
  void init_p12b_serie();
  void init_p13b_serie();
  void init_p14b_serie();
  void init_p15b_serie();

  float serie_manip[12];
  };
  
