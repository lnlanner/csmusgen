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
char s1[50];
char s2[50];

int check_value;
float ia;

int loadMoreParams;
int loadMoreParams2;

int autoCounterpoint;

int dataScore;

Fl_Round_Button *chk_show_startwin;
Fl_Button *bt_formula;
Fl_Value_Input  *logic_a;
Fl_Value_Input  *logic_b;
Fl_Value_Input  *logic_c;
Fl_Output  *show_formula;

Fl_Button *bt_resetCounter;

float init_pitch[12];
float init_dur[12];
float init_db[12];
float init_instr[12];
float init_act[12];

float init_p6[12];
float init_p7[12];
float init_p8[12];
float init_p9[12];
float init_p10[12];
float init_p11[12];
float init_p12[12];
float init_p13[12];
float init_p14[12];
float init_p15[12];

float init_p6b[12];
float init_p7b[12];
float init_p8b[12];
float init_p9b[12];
float init_p10b[12];
float init_p11b[12];
float init_p12b[12];
float init_p13b[12];
float init_p14b[12];
float init_p15b[12];


float _k;
float pitch;

float act;
double w, x, y, z;
int caso;
double u, v, o; 
int pitch_min_, pitch_max_;
int dur_min_, dur_max_;
int db_min_, db_max_;
int instr_min_, instr_max_;
int act_min_, act_max_;

int p6_min_, p6_max_;
int p7_min_, p7_max_;
int p8_min_, p8_max_;
int p9_min_, p9_max_;
int p10_min_, p10_max_;
int p11_min_, p11_max_;
int p12_min_, p12_max_;
int p13_min_, p13_max_;
int p14_min_, p14_max_;
int p15_min_, p15_max_;

int p6b_min_, p6b_max_;
int p7b_min_, p7b_max_;
int p8b_min_, p8b_max_;
int p9b_min_, p9b_max_;
int p10b_min_, p10b_max_;
int p11b_min_, p11b_max_;
int p12b_min_, p12b_max_;
int p13b_min_, p13b_max_;
int p14b_min_, p14b_max_;
int p15b_min_, p15b_max_;

Fl_Light_Button *bt_moreParams;
Fl_Light_Button *bt_moreParams2;

Fl_Input *helpPath;
Fl_Button *bt_help;
Fl_Button *bt_loadHelp;

Fl_Double_Window *hlpWin;

Fl_Output *showGroup;
Fl_Output *showSeries;

Fl_Value_Input *colorCounter;
Fl_Button *bt_doneColor;
Fl_Button *bt_resetColor;
Fl_Button *bt_colorInc;
Fl_Button *bt_colorDec;

Fl_Box *colorBox;

Fl_Single_Window *cls_win;
Fl_Window *window;
Fl_Menu_Bar *menuBar;
Fl_Menu_Bar *menuBarPath;

Fl_Button *bt_allComb;
Fl_Button *bt_exit;
Fl_Button *loadSerie;
Fl_Button *bt_deleteSetting;
Fl_Button *clpitch;
Fl_Button *cldur;
Fl_Button *clinstr;
Fl_Button *cldb;
Fl_Button *btload;
Fl_Button *btloadOrc;

Fl_Choice *min_pch;
Fl_Choice *max_pch;
Fl_Choice *min_dur;
Fl_Choice *max_dur;
Fl_Choice *min_db;
Fl_Choice *max_db;
Fl_Choice *min_instr;
Fl_Choice *max_instr;
Fl_Choice *out_File;

Fl_Light_Button *bt_enable_pch;
Fl_Light_Button *bt_enable_dur;
Fl_Light_Button *bt_enable_instr;
Fl_Light_Button *bt_enable_db;
Fl_Light_Button *bt_enable_act;
Fl_Light_Button *bt_calc_act;
Fl_Button *bt_reset_act;

Fl_Value_Input *min_act;
Fl_Value_Input *max_act;
Fl_Value_Input *show_min_pch;
Fl_Value_Input *show_max_pch;
Fl_Value_Input *in_w;
Fl_Value_Input *in_x;
Fl_Value_Input *in_y;
Fl_Value_Input *in_z;
Fl_Value_Input *actVal;

Fl_Box *genFrame;
Fl_Box *seriesFrame;

Fl_Menu_Button *auto_ctp;

Fl_Input *serieName;
Fl_Input *readPrefsPath;
Fl_Input *orcPath;
Fl_Input *txt_seriePath;
Fl_Input *scoPath;
Fl_Input *wavPath;

Fl_Value_Output *nserie;

/*input per la serie di altezze*/
Fl_Value_Input *pch_1;
Fl_Value_Input *pch_2;
Fl_Value_Input *pch_3;
Fl_Value_Input *pch_4;
Fl_Value_Input *pch_5;
Fl_Value_Input *pch_6;
Fl_Value_Input *pch_7;
Fl_Value_Input *pch_8;
Fl_Value_Input *pch_9;
Fl_Value_Input *pch_10;
Fl_Value_Input *pch_11;
Fl_Value_Input *pch_12;

/*input per la serie di durate*/
Fl_Value_Input *dur_1;
Fl_Value_Input *dur_2;
Fl_Value_Input *dur_3;
Fl_Value_Input *dur_4;
Fl_Value_Input *dur_5;
Fl_Value_Input *dur_6;
Fl_Value_Input *dur_7;
Fl_Value_Input *dur_8;
Fl_Value_Input *dur_9;
Fl_Value_Input *dur_10;
Fl_Value_Input *dur_11;
Fl_Value_Input *dur_12;

/*input per i valori della serie di dB*/
Fl_Value_Input *db_1;
Fl_Value_Input *db_2;
Fl_Value_Input *db_3;
Fl_Value_Input *db_4;
Fl_Value_Input *db_5;
Fl_Value_Input *db_6;
Fl_Value_Input *db_7;
Fl_Value_Input *db_8;
Fl_Value_Input *db_9;
Fl_Value_Input *db_10;
Fl_Value_Input *db_11;
Fl_Value_Input *db_12;

/*input per i valori della serie di instr*/
Fl_Value_Input *instr_1;
Fl_Value_Input *instr_2;
Fl_Value_Input *instr_3;
Fl_Value_Input *instr_4;
Fl_Value_Input *instr_5;
Fl_Value_Input *instr_6;
Fl_Value_Input *instr_7;
Fl_Value_Input *instr_8;
Fl_Value_Input *instr_9;
Fl_Value_Input *instr_10;
Fl_Value_Input *instr_11;
Fl_Value_Input *instr_12;

/*input per i valori di action time*/
Fl_Value_Input *act_1;
Fl_Value_Input *act_2;
Fl_Value_Input *act_3;
Fl_Value_Input *act_4;
Fl_Value_Input *act_5;
Fl_Value_Input *act_6;
Fl_Value_Input *act_7;
Fl_Value_Input *act_8;
Fl_Value_Input *act_9;
Fl_Value_Input *act_10;
Fl_Value_Input *act_11;
Fl_Value_Input *act_12;

Fl_Button *bt_sendScore;//invia una singola serie alla score
Fl_Button *bt_resetForm;//azzera i valori presenti nella finestra command console
Fl_Button *bt_clearScore;//cancella i dati presenti nella score
Fl_Button *bt_default;//inserisce dei valori di default nei controlli relativi alle serie
Fl_Button *bt_writePrefs;
Fl_Button *bt_writePrefs2;
Fl_Button *bt_CnfwritePrefs;


Fl_Choice *subSetPitch;
Fl_Choice *subSetInstr;
Fl_Choice *counterpointPitch;//seleziona una delle combinazioni di manipolazione della serie di altezze
Fl_Choice *counterpointDur;//seleziona una delle combinazioni della serie di durate
Fl_Choice *counterpointDb;//seleziona una delle combinazioni della serie di valori db
Fl_Choice *counterpointInstr;//seleziona una delle combinazioni della serie di valori instr
Fl_Choice *counterpointAct;//seleziona una delle combinazioni della serie di valori instr

////////////////////
Fl_Input *outData;
Fl_Button *load_outData;
Fl_Input *dataPath;
//////////////////////

Fl_Window *win_incDecs;
Fl_Button *bt_incDecs;
Fl_Value_Input *inp_incDecs;
Fl_Menu_Button *but_incDecs;
Fl_Choice *chOperator;
Fl_Box *incDecFrame;
Fl_Box *setValue;
Fl_Button *bt_setValue;
Fl_Value_Input *inp_setValue;
Fl_Menu_Button *bt_SetValSeries;
//////FINESTRA DIRECTORIES///////////////////

Fl_Window *winPath;
Fl_Button *bt_exitPathWin;
Fl_Input *csoundPath;
Fl_Input *csLine;
Fl_Input *wavLine;
Fl_Button *bt_loadGroup;

Fl_Light_Button *outMinMaxPitch;
Fl_Light_Button *outMinMaxDur;
Fl_Light_Button *outMinMaxInstr;
Fl_Light_Button *outMinMaxDb;
Fl_Light_Button *outMinMaxAct;
Fl_Light_Button *outFormula;
Fl_Light_Button *outSeriePitch;
Fl_Light_Button *outSerieDur;
Fl_Light_Button *outSerieDb;
Fl_Light_Button *outSerieInstr;
Fl_Light_Button *outSerieAct;
Fl_Light_Button *outActTime;

Fl_Light_Button *outP6;
Fl_Light_Button *outP7;
Fl_Light_Button *outP8;
Fl_Light_Button *outP9;
Fl_Light_Button *outP10;
Fl_Light_Button *outP11;
Fl_Light_Button *outP12;
Fl_Light_Button *outP13;
Fl_Light_Button *outP14;
Fl_Light_Button *outP15;

Fl_Light_Button *outP6b;
Fl_Light_Button *outP7b;
Fl_Light_Button *outP8b;
Fl_Light_Button *outP9b;
Fl_Light_Button *outP10b;
Fl_Light_Button *outP11b;
Fl_Light_Button *outP12b;
Fl_Light_Button *outP13b;
Fl_Light_Button *outP14b;
Fl_Light_Button *outP15b;

Fl_Light_Button *outZ;
Fl_Light_Button *outY;
Fl_Light_Button *outX;
Fl_Light_Button *outW;

/////////////////////////

Fl_Window *winParamn;
Fl_Box *newPframe;
Fl_Value_Input *p6_1;
Fl_Value_Input *p6_2;
Fl_Value_Input *p6_3;
Fl_Value_Input *p6_4;
Fl_Value_Input *p6_5;
Fl_Value_Input *p6_6;
Fl_Value_Input *p6_7;
Fl_Value_Input *p6_8;
Fl_Value_Input *p6_9;
Fl_Value_Input *p6_10;
Fl_Value_Input *p6_11;
Fl_Value_Input *p6_12;

Fl_Value_Input *p7_1;
Fl_Value_Input *p7_2;
Fl_Value_Input *p7_3;
Fl_Value_Input *p7_4;
Fl_Value_Input *p7_5;
Fl_Value_Input *p7_6;
Fl_Value_Input *p7_7;
Fl_Value_Input *p7_8;
Fl_Value_Input *p7_9;
Fl_Value_Input *p7_10;
Fl_Value_Input *p7_11;
Fl_Value_Input *p7_12;

Fl_Value_Input *p8_1;
Fl_Value_Input *p8_2;
Fl_Value_Input *p8_3;
Fl_Value_Input *p8_4;
Fl_Value_Input *p8_5;
Fl_Value_Input *p8_6;
Fl_Value_Input *p8_7;
Fl_Value_Input *p8_8;
Fl_Value_Input *p8_9;
Fl_Value_Input *p8_10;
Fl_Value_Input *p8_11;
Fl_Value_Input *p8_12;

Fl_Value_Input *p9_1;
Fl_Value_Input *p9_2;
Fl_Value_Input *p9_3;
Fl_Value_Input *p9_4;
Fl_Value_Input *p9_5;
Fl_Value_Input *p9_6;
Fl_Value_Input *p9_7;
Fl_Value_Input *p9_8;
Fl_Value_Input *p9_9;
Fl_Value_Input *p9_10;
Fl_Value_Input *p9_11;
Fl_Value_Input *p9_12;

Fl_Value_Input *p10_1;
Fl_Value_Input *p10_2;
Fl_Value_Input *p10_3;
Fl_Value_Input *p10_4;
Fl_Value_Input *p10_5;
Fl_Value_Input *p10_6;
Fl_Value_Input *p10_7;
Fl_Value_Input *p10_8;
Fl_Value_Input *p10_9;
Fl_Value_Input *p10_10;
Fl_Value_Input *p10_11;
Fl_Value_Input *p10_12;

Fl_Value_Input *p11_1;
Fl_Value_Input *p11_2;
Fl_Value_Input *p11_3;
Fl_Value_Input *p11_4;
Fl_Value_Input *p11_5;
Fl_Value_Input *p11_6;
Fl_Value_Input *p11_7;
Fl_Value_Input *p11_8;
Fl_Value_Input *p11_9;
Fl_Value_Input *p11_10;
Fl_Value_Input *p11_11;
Fl_Value_Input *p11_12;

Fl_Value_Input *p12_1;
Fl_Value_Input *p12_2;
Fl_Value_Input *p12_3;
Fl_Value_Input *p12_4;
Fl_Value_Input *p12_5;
Fl_Value_Input *p12_6;
Fl_Value_Input *p12_7;
Fl_Value_Input *p12_8;
Fl_Value_Input *p12_9;
Fl_Value_Input *p12_10;
Fl_Value_Input *p12_11;
Fl_Value_Input *p12_12;

Fl_Value_Input *p13_1;
Fl_Value_Input *p13_2;
Fl_Value_Input *p13_3;
Fl_Value_Input *p13_4;
Fl_Value_Input *p13_5;
Fl_Value_Input *p13_6;
Fl_Value_Input *p13_7;
Fl_Value_Input *p13_8;
Fl_Value_Input *p13_9;
Fl_Value_Input *p13_10;
Fl_Value_Input *p13_11;
Fl_Value_Input *p13_12;

Fl_Value_Input *p14_1;
Fl_Value_Input *p14_2;
Fl_Value_Input *p14_3;
Fl_Value_Input *p14_4;
Fl_Value_Input *p14_5;
Fl_Value_Input *p14_6;
Fl_Value_Input *p14_7;
Fl_Value_Input *p14_8;
Fl_Value_Input *p14_9;
Fl_Value_Input *p14_10;
Fl_Value_Input *p14_11;
Fl_Value_Input *p14_12;

Fl_Value_Input *p15_1;
Fl_Value_Input *p15_2;
Fl_Value_Input *p15_3;
Fl_Value_Input *p15_4;
Fl_Value_Input *p15_5;
Fl_Value_Input *p15_6;
Fl_Value_Input *p15_7;
Fl_Value_Input *p15_8;
Fl_Value_Input *p15_9;
Fl_Value_Input *p15_10;
Fl_Value_Input *p15_11;
Fl_Value_Input *p15_12;

////////////////////////
Fl_Window *winParamnb;
Fl_Box *newPframeb;
Fl_Value_Input *p6_1b;
Fl_Value_Input *p6_2b;
Fl_Value_Input *p6_3b;
Fl_Value_Input *p6_4b;
Fl_Value_Input *p6_5b;
Fl_Value_Input *p6_6b;
Fl_Value_Input *p6_7b;
Fl_Value_Input *p6_8b;
Fl_Value_Input *p6_9b;
Fl_Value_Input *p6_10b;
Fl_Value_Input *p6_11b;
Fl_Value_Input *p6_12b;

Fl_Value_Input *p7_1b;
Fl_Value_Input *p7_2b;
Fl_Value_Input *p7_3b;
Fl_Value_Input *p7_4b;
Fl_Value_Input *p7_5b;
Fl_Value_Input *p7_6b;
Fl_Value_Input *p7_7b;
Fl_Value_Input *p7_8b;
Fl_Value_Input *p7_9b;
Fl_Value_Input *p7_10b;
Fl_Value_Input *p7_11b;
Fl_Value_Input *p7_12b;

Fl_Value_Input *p8_1b;
Fl_Value_Input *p8_2b;
Fl_Value_Input *p8_3b;
Fl_Value_Input *p8_4b;
Fl_Value_Input *p8_5b;
Fl_Value_Input *p8_6b;
Fl_Value_Input *p8_7b;
Fl_Value_Input *p8_8b;
Fl_Value_Input *p8_9b;
Fl_Value_Input *p8_10b;
Fl_Value_Input *p8_11b;
Fl_Value_Input *p8_12b;

Fl_Value_Input *p9_1b;
Fl_Value_Input *p9_2b;
Fl_Value_Input *p9_3b;
Fl_Value_Input *p9_4b;
Fl_Value_Input *p9_5b;
Fl_Value_Input *p9_6b;
Fl_Value_Input *p9_7b;
Fl_Value_Input *p9_8b;
Fl_Value_Input *p9_9b;
Fl_Value_Input *p9_10b;
Fl_Value_Input *p9_11b;
Fl_Value_Input *p9_12b;

Fl_Value_Input *p10_1b;
Fl_Value_Input *p10_2b;
Fl_Value_Input *p10_3b;
Fl_Value_Input *p10_4b;
Fl_Value_Input *p10_5b;
Fl_Value_Input *p10_6b;
Fl_Value_Input *p10_7b;
Fl_Value_Input *p10_8b;
Fl_Value_Input *p10_9b;
Fl_Value_Input *p10_10b;
Fl_Value_Input *p10_11b;
Fl_Value_Input *p10_12b;

Fl_Value_Input *p11_1b;
Fl_Value_Input *p11_2b;
Fl_Value_Input *p11_3b;
Fl_Value_Input *p11_4b;
Fl_Value_Input *p11_5b;
Fl_Value_Input *p11_6b;
Fl_Value_Input *p11_7b;
Fl_Value_Input *p11_8b;
Fl_Value_Input *p11_9b;
Fl_Value_Input *p11_10b;
Fl_Value_Input *p11_11b;
Fl_Value_Input *p11_12b;

Fl_Value_Input *p12_1b;
Fl_Value_Input *p12_2b;
Fl_Value_Input *p12_3b;
Fl_Value_Input *p12_4b;
Fl_Value_Input *p12_5b;
Fl_Value_Input *p12_6b;
Fl_Value_Input *p12_7b;
Fl_Value_Input *p12_8b;
Fl_Value_Input *p12_9b;
Fl_Value_Input *p12_10b;
Fl_Value_Input *p12_11b;
Fl_Value_Input *p12_12b;

Fl_Value_Input *p13_1b;
Fl_Value_Input *p13_2b;
Fl_Value_Input *p13_3b;
Fl_Value_Input *p13_4b;
Fl_Value_Input *p13_5b;
Fl_Value_Input *p13_6b;
Fl_Value_Input *p13_7b;
Fl_Value_Input *p13_8b;
Fl_Value_Input *p13_9b;
Fl_Value_Input *p13_10b;
Fl_Value_Input *p13_11b;
Fl_Value_Input *p13_12b;

Fl_Value_Input *p14_1b;
Fl_Value_Input *p14_2b;
Fl_Value_Input *p14_3b;
Fl_Value_Input *p14_4b;
Fl_Value_Input *p14_5b;
Fl_Value_Input *p14_6b;
Fl_Value_Input *p14_7b;
Fl_Value_Input *p14_8b;
Fl_Value_Input *p14_9b;
Fl_Value_Input *p14_10b;
Fl_Value_Input *p14_11b;
Fl_Value_Input *p14_12b;

Fl_Value_Input *p15_1b;
Fl_Value_Input *p15_2b;
Fl_Value_Input *p15_3b;
Fl_Value_Input *p15_4b;
Fl_Value_Input *p15_5b;
Fl_Value_Input *p15_6b;
Fl_Value_Input *p15_7b;
Fl_Value_Input *p15_8b;
Fl_Value_Input *p15_9b;
Fl_Value_Input *p15_10b;
Fl_Value_Input *p15_11b;
Fl_Value_Input *p15_12b;


Fl_Light_Button *bt_enable_p6;
Fl_Light_Button *bt_enable_p6Ctp;
Fl_Light_Button *bt_enable_p7;
Fl_Light_Button *bt_enable_p7Ctp;
Fl_Light_Button *bt_enable_p8;
Fl_Light_Button *bt_enable_p8Ctp;
Fl_Light_Button *bt_enable_p9;
Fl_Light_Button *bt_enable_p9Ctp;
Fl_Light_Button *bt_enable_p10;
Fl_Light_Button *bt_enable_p10Ctp;
Fl_Light_Button *bt_enable_p11;
Fl_Light_Button *bt_enable_p11Ctp;
Fl_Light_Button *bt_enable_p12;
Fl_Light_Button *bt_enable_p12Ctp;
Fl_Light_Button *bt_enable_p13;
Fl_Light_Button *bt_enable_p13Ctp;
Fl_Light_Button *bt_enable_p14;
Fl_Light_Button *bt_enable_p14Ctp;
Fl_Light_Button *bt_enable_p15;
Fl_Light_Button *bt_enable_p15Ctp;

Fl_Light_Button *bt_enable_p6b;
Fl_Light_Button *bt_enable_p6bCtp;
Fl_Light_Button *bt_enable_p7b;
Fl_Light_Button *bt_enable_p7bCtp;
Fl_Light_Button *bt_enable_p8b;
Fl_Light_Button *bt_enable_p8bCtp;
Fl_Light_Button *bt_enable_p9b;
Fl_Light_Button *bt_enable_p9bCtp;
Fl_Light_Button *bt_enable_p10b;
Fl_Light_Button *bt_enable_p10bCtp;
Fl_Light_Button *bt_enable_p11b;
Fl_Light_Button *bt_enable_p11bCtp;
Fl_Light_Button *bt_enable_p12b;
Fl_Light_Button *bt_enable_p12bCtp;
Fl_Light_Button *bt_enable_p13b;
Fl_Light_Button *bt_enable_p13bCtp;
Fl_Light_Button *bt_enable_p14b;
Fl_Light_Button *bt_enable_p14bCtp;
Fl_Light_Button *bt_enable_p15b;
Fl_Light_Button *bt_enable_p15bCtp;

Fl_Button *btParamsAritm;
Fl_Button *btParamsAritmb;

int funcMenuItems;


