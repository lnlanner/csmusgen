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
void makeWinParamsb_cb(Fl_Widget*,void*);
void writePrefsSerieParams();
void readPrefsSerieParams();
void closeWparams_cb(Fl_Widget*,void*);
void makeWin_IncDecS();

void makeWin_IncDecSParams_cb(Fl_Widget*,void*)
{
    funcMenuItems = 1;
    makeWin_IncDecS();
}

void enableCtpp6_cb(Fl_Widget*,void*)
{
    if (bt_enable_p6->value() == 0) {bt_enable_p6Ctp->value(0);}
}

void enable_p6_cb(Fl_Widget*,void*)
{
    if (bt_enable_p6Ctp->value() == 1){bt_enable_p6->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp7_cb(Fl_Widget*,void*)
{
    if (bt_enable_p7->value() == 0) {bt_enable_p7Ctp->value(0);}
}

void enable_p7_cb(Fl_Widget*,void*)
{
    if (bt_enable_p7Ctp->value() == 1){bt_enable_p7->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp8_cb(Fl_Widget*,void*)
{
    if (bt_enable_p8->value() == 0) {bt_enable_p8Ctp->value(0);}
}

void enable_p8_cb(Fl_Widget*,void*)
{
    if (bt_enable_p8Ctp->value() == 1){bt_enable_p8->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp9_cb(Fl_Widget*,void*)
{
    if (bt_enable_p9->value() == 0) {bt_enable_p9Ctp->value(0);}
}

void enable_p9_cb(Fl_Widget*,void*)
{
    if (bt_enable_p9Ctp->value() == 1){bt_enable_p9->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp10_cb(Fl_Widget*,void*)
{
    if (bt_enable_p10->value() == 0) {bt_enable_p10Ctp->value(0);}
}

void enable_p10_cb(Fl_Widget*,void*)
{
    if (bt_enable_p10Ctp->value() == 1){bt_enable_p10->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp11_cb(Fl_Widget*,void*)
{
    if (bt_enable_p11->value() == 0) {bt_enable_p11Ctp->value(0);}
}

void enable_p11_cb(Fl_Widget*,void*)
{
    if (bt_enable_p11Ctp->value() == 1){bt_enable_p11->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp12_cb(Fl_Widget*,void*)
{
    if (bt_enable_p12->value() == 0) {bt_enable_p12Ctp->value(0);}
}

void enable_p12_cb(Fl_Widget*,void*)
{
    if (bt_enable_p12Ctp->value() == 1){bt_enable_p12->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp13_cb(Fl_Widget*,void*)
{
    if (bt_enable_p13->value() == 0) {bt_enable_p13Ctp->value(0);}
}

void enable_p13_cb(Fl_Widget*,void*)
{
    if (bt_enable_p13Ctp->value() == 1){bt_enable_p13->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp14_cb(Fl_Widget*,void*)
{
    if (bt_enable_p14->value() == 0) {bt_enable_p14Ctp->value(0);}
}

void enable_p14_cb(Fl_Widget*,void*)
{
    if (bt_enable_p14Ctp->value() == 1){bt_enable_p14->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp15_cb(Fl_Widget*,void*)
{
    if (bt_enable_p15->value() == 0) {bt_enable_p15Ctp->value(0);}
}

void enable_p15_cb(Fl_Widget*,void*)
{
    if (bt_enable_p15Ctp->value() == 1){bt_enable_p15->value(1);}
}
//////////////////////////////////////////////////////////////////
void makeWinParams()
{
    winParamn = new Fl_Window (200,200,W-40,H-100,"Parameters p6 to p15");
    winParamn->color(COLOR);
    winParamn->set_modal();

  newPframe = new Fl_Box(CTRL_L4,0,CTRL_W*12+5,CTRL_H*10+55);
  newPframe->box(FL_ENGRAVED_BOX);
  newPframe->align(FL_ALIGN_TOP);
  newPframe->color(COLOR3);
  newPframe->labelcolor(CTRL_LABEL_COLOR);

  p6_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2,CTRL_W,CTRL_H);
  p6_1->textsize(TXT_SIZE);
  p6_1->box(BOX_TYPE3);
  p6_1->align(FL_ALIGN_TOP_LEFT);
  p6_1->color(COLOR3);
  p6_1->textcolor(TXT_COLOR);
  p6_1->selection_color(COLOR_SEL);
  p6_1->labelcolor(CTRL_LABEL_COLOR);
  p6_1->tooltip("p6 serie");
  p6_1->cursor_color(TXT_COLOR2);
  p6_1->textfont(IN_TEXT_FONTS);
  
  p6_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2,CTRL_W,CTRL_H);
  p6_2->box(BOX_TYPE3);
  p6_2->textsize(TXT_SIZE);
  p6_2->color(COLOR3);
  p6_2->textcolor(TXT_COLOR);
  p6_2->selection_color(COLOR_SEL);
  p6_2->tooltip("p6 serie");
  p6_2->cursor_color(TXT_COLOR2);
  p6_2->textfont(IN_TEXT_FONTS);

  p6_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2,CTRL_W,CTRL_H);
  p6_3->box(BOX_TYPE3);
  p6_3->textsize(TXT_SIZE);
  p6_3->color(COLOR3);
  p6_3->textcolor(TXT_COLOR);
  p6_3->selection_color(COLOR_SEL);
  p6_3->tooltip("p6 serie");
  p6_3->cursor_color(TXT_COLOR2);
  p6_3->textfont(IN_TEXT_FONTS);

  p6_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2,CTRL_W,CTRL_H);
  p6_4->box(BOX_TYPE3);
  p6_4->textsize(TXT_SIZE);
  p6_4->color(COLOR3);
  p6_4->textcolor(TXT_COLOR);
  p6_4->selection_color(COLOR_SEL);
  p6_4->tooltip("p6 serie");
  p6_4->cursor_color(TXT_COLOR2);
  p6_4->textfont(IN_TEXT_FONTS);

  p6_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2,CTRL_W,CTRL_H);
  p6_5->box(BOX_TYPE3);
  p6_5->textsize(TXT_SIZE);
  p6_5->color(COLOR3);
  p6_5->textcolor(TXT_COLOR);
  p6_5->selection_color(COLOR_SEL);
  p6_5->tooltip("p6 serie");
  p6_5->cursor_color(TXT_COLOR2);
  p6_5->textfont(IN_TEXT_FONTS);

  p6_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2,CTRL_W,CTRL_H);
  p6_6->box(BOX_TYPE3);
  p6_6->textsize(TXT_SIZE);
  p6_6->color(COLOR3);
  p6_6->textcolor(TXT_COLOR);
  p6_6->selection_color(COLOR_SEL);
  p6_6->tooltip("p6 serie");
  p6_6->cursor_color(TXT_COLOR2);
  p6_6->textfont(IN_TEXT_FONTS);

  p6_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2,CTRL_W,CTRL_H);
  p6_7->box(BOX_TYPE3);
  p6_7->textsize(TXT_SIZE);
  p6_7->color(COLOR3);
  p6_7->textcolor(TXT_COLOR);
  p6_7->selection_color(COLOR_SEL);
  p6_7->tooltip("p6 serie");
  p6_7->cursor_color(TXT_COLOR2);
  p6_7->textfont(IN_TEXT_FONTS);

  p6_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2,CTRL_W,CTRL_H);
  p6_8->box(BOX_TYPE3);
  p6_8->textsize(TXT_SIZE);
  p6_8->color(COLOR3);
  p6_8->textcolor(TXT_COLOR);
  p6_8->selection_color(COLOR_SEL);
  p6_8->tooltip("p6 serie");
  p6_8->cursor_color(TXT_COLOR2);
  p6_8->textfont(IN_TEXT_FONTS);

  p6_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2,CTRL_W,CTRL_H);
  p6_9->box(BOX_TYPE3);
  p6_9->textsize(TXT_SIZE);
  p6_9->color(COLOR3);
  p6_9->textcolor(TXT_COLOR);
  p6_9->selection_color(COLOR_SEL);
  p6_9->tooltip("p6 serie");
  p6_9->cursor_color(TXT_COLOR2);
  p6_9->textfont(IN_TEXT_FONTS);

  p6_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2,CTRL_W,CTRL_H);
  p6_10->box(BOX_TYPE3);
  p6_10->textsize(TXT_SIZE);
  p6_10->color(COLOR3);
  p6_10->textcolor(TXT_COLOR);
  p6_10->selection_color(COLOR_SEL);
  p6_10->tooltip("p6 serie");
  p6_10->cursor_color(TXT_COLOR2);
  p6_10->textfont(IN_TEXT_FONTS);

  p6_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2,CTRL_W,CTRL_H);
  p6_11->box(BOX_TYPE3);
  p6_11->textsize(TXT_SIZE);
  p6_11->color(COLOR3);
  p6_11->textcolor(TXT_COLOR);
  p6_11->selection_color(COLOR_SEL);
  p6_11->tooltip("p6 serie");
  p6_11->cursor_color(TXT_COLOR2);
  p6_11->textfont(IN_TEXT_FONTS);

  p6_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2,CTRL_W,CTRL_H);
  p6_12->box(BOX_TYPE3);
  p6_12->textsize(TXT_SIZE);
  p6_12->color(COLOR3);
  p6_12->textcolor(TXT_COLOR);
  p6_12->selection_color(COLOR_SEL);
  p6_12->tooltip("p6 serie");
  p6_12->cursor_color(TXT_COLOR2);
  p6_12->textfont(IN_TEXT_FONTS);

  bt_enable_p6 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2,20,20);
  bt_enable_p6->tooltip("Enable p6 serie");
  bt_enable_p6->box(BOX_TYPE);
  bt_enable_p6->selection_color(E_BUTTTON_COLOR);
  bt_enable_p6->callback(enableCtpp6_cb);

  bt_enable_p6Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2,20,20);
  bt_enable_p6Ctp->tooltip("Enable p6 counterpoint functions");
  bt_enable_p6Ctp->box(BOX_TYPE);
  bt_enable_p6Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p6Ctp->callback(enable_p6_cb);

  outP6 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2,HB,CTRL_H,"M");
  outP6->box(FL_PLASTIC_UP_BOX);
  outP6->labelsize(11);
  outP6->selection_color(FL_GREEN);
  outP6->labelcolor(FL_RED);
  outP6->tooltip(MEMO);

  p7_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_1->textsize(TXT_SIZE);
  p7_1->box(BOX_TYPE3);
  p7_1->align(FL_ALIGN_TOP_LEFT);
  p7_1->color(COLOR3);
  p7_1->textcolor(TXT_COLOR);
  p7_1->selection_color(COLOR_SEL);
  p7_1->labelcolor(CTRL_LABEL_COLOR);
  p7_1->tooltip("pitch serie");
  p7_1->cursor_color(TXT_COLOR2);
  p7_1->textfont(IN_TEXT_FONTS);

  p7_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_2->box(BOX_TYPE3);
  p7_2->textsize(TXT_SIZE);
  p7_2->color(COLOR3);
  p7_2->textcolor(TXT_COLOR);
  p7_2->selection_color(COLOR_SEL);
  p7_2->tooltip("p7 serie");
  p7_2->cursor_color(TXT_COLOR2);
  p7_2->textfont(IN_TEXT_FONTS);

  p7_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_3->box(BOX_TYPE3);
  p7_3->textsize(TXT_SIZE);
  p7_3->color(COLOR3);
  p7_3->textcolor(TXT_COLOR);
  p7_3->selection_color(COLOR_SEL);
  p7_3->tooltip("p7 serie");
  p7_3->cursor_color(TXT_COLOR2);
  p7_3->textfont(IN_TEXT_FONTS);

  p7_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_4->box(BOX_TYPE3);
  p7_4->textsize(TXT_SIZE);
  p7_4->color(COLOR3);
  p7_4->textcolor(TXT_COLOR);
  p7_4->selection_color(COLOR_SEL);
  p7_4->tooltip("p7 serie");
  p7_4->cursor_color(TXT_COLOR2);
  p7_4->textfont(IN_TEXT_FONTS);

  p7_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_5->box(BOX_TYPE3);
  p7_5->textsize(TXT_SIZE);
  p7_5->color(COLOR3);
  p7_5->textcolor(TXT_COLOR);
  p7_5->selection_color(COLOR_SEL);
  p7_5->tooltip("p7 serie");
  p7_5->cursor_color(TXT_COLOR2);
  p7_5->textfont(IN_TEXT_FONTS);

  p7_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_6->box(BOX_TYPE3);
  p7_6->textsize(TXT_SIZE);
  p7_6->color(COLOR3);
  p7_6->textcolor(TXT_COLOR);
  p7_6->selection_color(COLOR_SEL);
  p7_6->tooltip("p7 serie");
  p7_6->cursor_color(TXT_COLOR2);
  p7_6->textfont(IN_TEXT_FONTS);

  p7_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_7->box(BOX_TYPE3);
  p7_7->textsize(TXT_SIZE);
  p7_7->color(COLOR3);
  p7_7->textcolor(TXT_COLOR);
  p7_7->selection_color(COLOR_SEL);
  p7_7->tooltip("p7 serie");
  p7_7->cursor_color(TXT_COLOR2);
  p7_7->textfont(IN_TEXT_FONTS);

  p7_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_8->box(BOX_TYPE3);
  p7_8->textsize(TXT_SIZE);
  p7_8->color(COLOR3);
  p7_8->textcolor(TXT_COLOR);
  p7_8->selection_color(COLOR_SEL);
  p7_8->tooltip("p7 serie");
  p7_8->cursor_color(TXT_COLOR2);
  p7_8->textfont(IN_TEXT_FONTS);

  p7_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_9->box(BOX_TYPE3);
  p7_9->textsize(TXT_SIZE);
  p7_9->color(COLOR3);
  p7_9->textcolor(TXT_COLOR);
  p7_9->selection_color(COLOR_SEL);
  p7_9->tooltip("p7 serie");
  p7_9->cursor_color(TXT_COLOR2);
  p7_9->textfont(IN_TEXT_FONTS);

  p7_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_10->box(BOX_TYPE3);
  p7_10->textsize(TXT_SIZE);
  p7_10->color(COLOR3);
  p7_10->textcolor(TXT_COLOR);
  p7_10->selection_color(COLOR_SEL);
  p7_10->tooltip("p7 serie");
  p7_10->cursor_color(TXT_COLOR2);
  p7_10->textfont(IN_TEXT_FONTS);

  p7_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_11->box(BOX_TYPE3);
  p7_11->textsize(TXT_SIZE);
  p7_11->color(COLOR3);
  p7_11->textcolor(TXT_COLOR);
  p7_11->selection_color(COLOR_SEL);
  p7_11->tooltip("p7 serie");
  p7_11->cursor_color(TXT_COLOR2);
  p7_11->textfont(IN_TEXT_FONTS);

  p7_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_12->box(BOX_TYPE3);
  p7_12->textsize(TXT_SIZE);
  p7_12->color(COLOR3);
  p7_12->textcolor(TXT_COLOR);
  p7_12->selection_color(COLOR_SEL);
  p7_12->tooltip("p7 serie");
  p7_12->cursor_color(TXT_COLOR2);
  p7_12->textfont(IN_TEXT_FONTS);

  bt_enable_p7 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H+5,20,20);
  bt_enable_p7->tooltip("Enable p7 serie");
  bt_enable_p7->box(BOX_TYPE);
  bt_enable_p7->selection_color(E_BUTTTON_COLOR);
  bt_enable_p7->callback(enableCtpp7_cb);

  bt_enable_p7Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H+5,20,20);
  bt_enable_p7Ctp->tooltip("Enable p7 counterpoint functions");
  bt_enable_p7Ctp->box(BOX_TYPE);
  bt_enable_p7Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p7Ctp->callback(enable_p7_cb);

  outP7 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H+5,HB,CTRL_H,"M");
  outP7->box(FL_PLASTIC_UP_BOX);
  outP7->labelsize(11);
  outP7->selection_color(FL_GREEN);
  outP7->labelcolor(FL_RED);
  outP7->tooltip(MEMO);

  p8_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_1->textsize(TXT_SIZE);
  p8_1->box(BOX_TYPE3);
  p8_1->align(FL_ALIGN_TOP_LEFT);
  p8_1->color(COLOR3);
  p8_1->textcolor(TXT_COLOR);
  p8_1->selection_color(COLOR_SEL);
  p8_1->labelcolor(CTRL_LABEL_COLOR);
  p8_1->tooltip("p8 serie");
  p8_1->cursor_color(TXT_COLOR2);
  p8_1->textfont(IN_TEXT_FONTS);

  p8_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_2->box(BOX_TYPE3);
  p8_2->textsize(TXT_SIZE);
  p8_2->color(COLOR3);
  p8_2->textcolor(TXT_COLOR);
  p8_2->selection_color(COLOR_SEL);
  p8_2->tooltip("p8 serie");
  p8_2->cursor_color(TXT_COLOR2);
  p8_2->textfont(IN_TEXT_FONTS);

  p8_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_3->box(BOX_TYPE3);
  p8_3->textsize(TXT_SIZE);
  p8_3->color(COLOR3);
  p8_3->textcolor(TXT_COLOR);
  p8_3->selection_color(COLOR_SEL);
  p8_3->tooltip("p8 serie");
  p8_3->cursor_color(TXT_COLOR2);
  p8_3->textfont(IN_TEXT_FONTS);

  p8_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_4->box(BOX_TYPE3);
  p8_4->textsize(TXT_SIZE);
  p8_4->color(COLOR3);
  p8_4->textcolor(TXT_COLOR);
  p8_4->selection_color(COLOR_SEL);
  p8_4->tooltip("p8 serie");
  p8_4->cursor_color(TXT_COLOR2);
  p8_4->textfont(IN_TEXT_FONTS);

  p8_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_5->box(BOX_TYPE3);
  p8_5->textsize(TXT_SIZE);
  p8_5->color(COLOR3);
  p8_5->textcolor(TXT_COLOR);
  p8_5->selection_color(COLOR_SEL);
  p8_5->tooltip("p8 serie");
  p8_5->cursor_color(TXT_COLOR2);
  p8_5->textfont(IN_TEXT_FONTS);

  p8_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_6->box(BOX_TYPE3);
  p8_6->textsize(TXT_SIZE);
  p8_6->color(COLOR3);
  p8_6->textcolor(TXT_COLOR);
  p8_6->selection_color(COLOR_SEL);
  p8_6->tooltip("p8 serie");
  p8_6->cursor_color(TXT_COLOR2);
  p8_6->textfont(IN_TEXT_FONTS);

  p8_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_7->box(BOX_TYPE3);
  p8_7->textsize(TXT_SIZE);
  p8_7->color(COLOR3);
  p8_7->textcolor(TXT_COLOR);
  p8_7->selection_color(COLOR_SEL);
  p8_7->tooltip("p8 serie");
  p8_7->cursor_color(TXT_COLOR2);
  p8_7->textfont(IN_TEXT_FONTS);

  p8_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_8->box(BOX_TYPE3);
  p8_8->textsize(TXT_SIZE);
  p8_8->color(COLOR3);
  p8_8->textcolor(TXT_COLOR);
  p8_8->selection_color(COLOR_SEL);
  p8_8->tooltip("p8 serie");
  p8_8->cursor_color(TXT_COLOR2);
  p8_8->textfont(IN_TEXT_FONTS);

  p8_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_9->box(BOX_TYPE3);
  p8_9->textsize(TXT_SIZE);
  p8_9->color(COLOR3);
  p8_9->textcolor(TXT_COLOR);
  p8_9->selection_color(COLOR_SEL);
  p8_9->tooltip("p8 serie");
  p8_9->cursor_color(TXT_COLOR2);
  p8_9->textfont(IN_TEXT_FONTS);

  p8_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_10->box(BOX_TYPE3);
  p8_10->textsize(TXT_SIZE);
  p8_10->color(COLOR3);
  p8_10->textcolor(TXT_COLOR);
  p8_10->selection_color(COLOR_SEL);
  p8_10->tooltip("p8 serie");
  p8_10->cursor_color(TXT_COLOR2);
  p8_10->textfont(IN_TEXT_FONTS);

  p8_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_11->box(BOX_TYPE3);
  p8_11->textsize(TXT_SIZE);
  p8_11->color(COLOR3);
  p8_11->textcolor(TXT_COLOR);
  p8_11->selection_color(COLOR_SEL);
  p8_11->tooltip("p8 serie");
  p8_11->cursor_color(TXT_COLOR2);
  p8_11->textfont(IN_TEXT_FONTS);

  p8_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_12->box(BOX_TYPE3);
  p8_12->textsize(TXT_SIZE);
  p8_12->color(COLOR3);
  p8_12->textcolor(TXT_COLOR);
  p8_12->selection_color(COLOR_SEL);
  p8_12->tooltip("p8 serie");
  p8_12->cursor_color(TXT_COLOR2);
  p8_12->textfont(IN_TEXT_FONTS);

  bt_enable_p8 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*2+10,20,20);
  bt_enable_p8->tooltip("Enable p8 serie");
  bt_enable_p8->box(BOX_TYPE);
  bt_enable_p8->selection_color(E_BUTTTON_COLOR);
  bt_enable_p8->callback(enableCtpp8_cb);

  bt_enable_p8Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*2+10,20,20);
  bt_enable_p8Ctp->tooltip("Enable p8 counterpoint functions");
  bt_enable_p8Ctp->box(BOX_TYPE);
  bt_enable_p8Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p8Ctp->callback(enable_p8_cb);

  outP8 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*2+10,HB,CTRL_H,"M");
  outP8->box(FL_PLASTIC_UP_BOX);
  outP8->labelsize(11);
  outP8->selection_color(FL_GREEN);
  outP8->labelcolor(FL_RED);
  outP8->tooltip(MEMO);

  p9_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_1->textsize(TXT_SIZE);
  p9_1->box(BOX_TYPE3);
  p9_1->align(FL_ALIGN_TOP_LEFT);
  p9_1->color(COLOR3);
  p9_1->textcolor(TXT_COLOR);
  p9_1->selection_color(COLOR_SEL);
  p9_1->labelcolor(CTRL_LABEL_COLOR);
  p9_1->tooltip("p9 serie");
  p9_1->cursor_color(TXT_COLOR2);
  p9_1->textfont(IN_TEXT_FONTS);

  p9_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_2->box(BOX_TYPE3);
  p9_2->textsize(TXT_SIZE);
  p9_2->color(COLOR3);
  p9_2->textcolor(TXT_COLOR);
  p9_2->selection_color(COLOR_SEL);
  p9_2->tooltip("p9 serie");
  p9_2->cursor_color(TXT_COLOR2);
  p9_2->textfont(IN_TEXT_FONTS);

  p9_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_3->box(BOX_TYPE3);
  p9_3->textsize(TXT_SIZE);
  p9_3->color(COLOR3);
  p9_3->textcolor(TXT_COLOR);
  p9_3->selection_color(COLOR_SEL);
  p9_3->tooltip("p9 serie");
  p9_3->cursor_color(TXT_COLOR2);
  p9_3->textfont(IN_TEXT_FONTS);

  p9_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_4->box(BOX_TYPE3);
  p9_4->textsize(TXT_SIZE);
  p9_4->color(COLOR3);
  p9_4->textcolor(TXT_COLOR);
  p9_4->selection_color(COLOR_SEL);
  p9_4->tooltip("p9 serie");
  p9_4->cursor_color(TXT_COLOR2);
  p9_4->textfont(IN_TEXT_FONTS);

  p9_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_5->box(BOX_TYPE3);
  p9_5->textsize(TXT_SIZE);
  p9_5->color(COLOR3);
  p9_5->textcolor(TXT_COLOR);
  p9_5->selection_color(COLOR_SEL);
  p9_5->tooltip("p9 serie");
  p9_5->cursor_color(TXT_COLOR2);
  p9_5->textfont(IN_TEXT_FONTS);

  p9_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_6->box(BOX_TYPE3);
  p9_6->textsize(TXT_SIZE);
  p9_6->color(COLOR3);
  p9_6->textcolor(TXT_COLOR);
  p9_6->selection_color(COLOR_SEL);
  p9_6->tooltip("p9 serie");
  p9_6->cursor_color(TXT_COLOR2);
  p9_6->textfont(IN_TEXT_FONTS);

  p9_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_7->box(BOX_TYPE3);
  p9_7->textsize(TXT_SIZE);
  p9_7->color(COLOR3);
  p9_7->textcolor(TXT_COLOR);
  p9_7->selection_color(COLOR_SEL);
  p9_7->tooltip("p9 serie");
  p9_7->cursor_color(TXT_COLOR2);
  p9_7->textfont(IN_TEXT_FONTS);

  p9_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_8->box(BOX_TYPE3);
  p9_8->textsize(TXT_SIZE);
  p9_8->color(COLOR3);
  p9_8->textcolor(TXT_COLOR);
  p9_8->selection_color(COLOR_SEL);
  p9_8->tooltip("p9 serie");
  p9_8->cursor_color(TXT_COLOR2);
  p9_8->textfont(IN_TEXT_FONTS);

  p9_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_9->box(BOX_TYPE3);
  p9_9->textsize(TXT_SIZE);
  p9_9->color(COLOR3);
  p9_9->textcolor(TXT_COLOR);
  p9_9->selection_color(COLOR_SEL);
  p9_9->tooltip("p9 serie");
  p9_9->cursor_color(TXT_COLOR2);
  p9_9->textfont(IN_TEXT_FONTS);

  p9_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_10->box(BOX_TYPE3);
  p9_10->textsize(TXT_SIZE);
  p9_10->color(COLOR3);
  p9_10->textcolor(TXT_COLOR);
  p9_10->selection_color(COLOR_SEL);
  p9_10->tooltip("p9 serie");
  p9_10->cursor_color(TXT_COLOR2);
  p9_10->textfont(IN_TEXT_FONTS);

  p9_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_11->box(BOX_TYPE3);
  p9_11->textsize(TXT_SIZE);
  p9_11->color(COLOR3);
  p9_11->textcolor(TXT_COLOR);
  p9_11->selection_color(COLOR_SEL);
  p9_11->tooltip("p9 serie");
  p9_11->cursor_color(TXT_COLOR2);
  p9_11->textfont(IN_TEXT_FONTS);

  p9_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_12->box(BOX_TYPE3);
  p9_12->textsize(TXT_SIZE);
  p9_12->color(COLOR3);
  p9_12->textcolor(TXT_COLOR);
  p9_12->selection_color(COLOR_SEL);
  p9_12->tooltip("p9 serie");
  p9_12->cursor_color(TXT_COLOR2);
  p9_12->textfont(IN_TEXT_FONTS);
  
  bt_enable_p9 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*3+15,20,20);
  bt_enable_p9->tooltip("Enable p9 serie");
  bt_enable_p9->box(BOX_TYPE);
  bt_enable_p9->selection_color(E_BUTTTON_COLOR);
  bt_enable_p9->callback(enableCtpp9_cb);

  bt_enable_p9Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*3+15,20,20);
  bt_enable_p9Ctp->tooltip("Enable p9 counterpoint functions");
  bt_enable_p9Ctp->box(BOX_TYPE);
  bt_enable_p9Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p9Ctp->callback(enable_p9_cb);

  outP9 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*3+15,HB,CTRL_H,"M");
  outP9->box(FL_PLASTIC_UP_BOX);
  outP9->labelsize(11);
  outP9->selection_color(FL_GREEN);
  outP9->labelcolor(FL_RED);
  outP9->tooltip(MEMO);

  p10_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_1->textsize(TXT_SIZE);
  p10_1->box(BOX_TYPE3);
  p10_1->align(FL_ALIGN_TOP_LEFT);
  p10_1->color(COLOR3);
  p10_1->textcolor(TXT_COLOR);
  p10_1->selection_color(COLOR_SEL);
  p10_1->labelcolor(CTRL_LABEL_COLOR);
  p10_1->tooltip("p10 serie");
  p10_1->cursor_color(TXT_COLOR2);
  p10_1->textfont(IN_TEXT_FONTS);

  p10_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_2->box(BOX_TYPE3);
  p10_2->textsize(TXT_SIZE);
  p10_2->color(COLOR3);
  p10_2->textcolor(TXT_COLOR);
  p10_2->selection_color(COLOR_SEL);
  p10_2->tooltip("p10 serie");
  p10_2->cursor_color(TXT_COLOR2);
  p10_2->textfont(IN_TEXT_FONTS);

  p10_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_3->box(BOX_TYPE3);
  p10_3->textsize(TXT_SIZE);
  p10_3->color(COLOR3);
  p10_3->textcolor(TXT_COLOR);
  p10_3->selection_color(COLOR_SEL);
  p10_3->tooltip("p10 serie");
  p10_3->cursor_color(TXT_COLOR2);
  p10_3->textfont(IN_TEXT_FONTS);

  p10_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_4->box(BOX_TYPE3);
  p10_4->textsize(TXT_SIZE);
  p10_4->color(COLOR3);
  p10_4->textcolor(TXT_COLOR);
  p10_4->selection_color(COLOR_SEL);
  p10_4->tooltip("p10 serie");
  p10_4->cursor_color(TXT_COLOR2);
  p10_4->textfont(IN_TEXT_FONTS);

  p10_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_5->box(BOX_TYPE3);
  p10_5->textsize(TXT_SIZE);
  p10_5->color(COLOR3);
  p10_5->textcolor(TXT_COLOR);
  p10_5->selection_color(COLOR_SEL);
  p10_5->tooltip("p10 serie");
  p10_5->cursor_color(TXT_COLOR2);
  p10_5->textfont(IN_TEXT_FONTS);

  p10_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_6->box(BOX_TYPE3);
  p10_6->textsize(TXT_SIZE);
  p10_6->color(COLOR3);
  p10_6->textcolor(TXT_COLOR);
  p10_6->selection_color(COLOR_SEL);
  p10_6->tooltip("p10 serie");
  p10_6->cursor_color(TXT_COLOR2);
  p10_6->textfont(IN_TEXT_FONTS);

  p10_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_7->box(BOX_TYPE3);
  p10_7->textsize(TXT_SIZE);
  p10_7->color(COLOR3);
  p10_7->textcolor(TXT_COLOR);
  p10_7->selection_color(COLOR_SEL);
  p10_7->tooltip("p10 serie");
  p10_7->cursor_color(TXT_COLOR2);
  p10_7->textfont(IN_TEXT_FONTS);

  p10_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_8->box(BOX_TYPE3);
  p10_8->textsize(TXT_SIZE);
  p10_8->color(COLOR3);
  p10_8->textcolor(TXT_COLOR);
  p10_8->selection_color(COLOR_SEL);
  p10_8->tooltip("p10 serie");
  p10_8->cursor_color(TXT_COLOR2);
  p10_8->textfont(IN_TEXT_FONTS);

  p10_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_9->box(BOX_TYPE3);
  p10_9->textsize(TXT_SIZE);
  p10_9->color(COLOR3);
  p10_9->textcolor(TXT_COLOR);
  p10_9->selection_color(COLOR_SEL);
  p10_9->tooltip("p10 serie");
  p10_9->cursor_color(TXT_COLOR2);
  p10_9->textfont(IN_TEXT_FONTS);

  p10_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_10->box(BOX_TYPE3);
  p10_10->textsize(TXT_SIZE);
  p10_10->color(COLOR3);
  p10_10->textcolor(TXT_COLOR);
  p10_10->selection_color(COLOR_SEL);
  p10_10->tooltip("p10 serie");
  p10_10->cursor_color(TXT_COLOR2);
  p10_10->textfont(IN_TEXT_FONTS);

  p10_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_11->box(BOX_TYPE3);
  p10_11->textsize(TXT_SIZE);
  p10_11->color(COLOR3);
  p10_11->textcolor(TXT_COLOR);
  p10_11->selection_color(COLOR_SEL);
  p10_11->tooltip("p10 serie");
  p10_11->cursor_color(TXT_COLOR2);
  p10_11->textfont(IN_TEXT_FONTS);

  p10_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_12->box(BOX_TYPE3);
  p10_12->textsize(TXT_SIZE);
  p10_12->color(COLOR3);
  p10_12->textcolor(TXT_COLOR);
  p10_12->selection_color(COLOR_SEL);
  p10_12->tooltip("p10 serie");
  p10_12->cursor_color(TXT_COLOR2);
  p10_12->textfont(IN_TEXT_FONTS);

  bt_enable_p10 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*4+20,20,20);
  bt_enable_p10->tooltip("Enable p10 serie");
  bt_enable_p10->box(BOX_TYPE);
  bt_enable_p10->selection_color(E_BUTTTON_COLOR);
  bt_enable_p10->callback(enableCtpp10_cb);

  bt_enable_p10Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*4+20,20,20);
  bt_enable_p10Ctp->tooltip("Enable p10 counterpoint functions");
  bt_enable_p10Ctp->box(BOX_TYPE);
  bt_enable_p10Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p10Ctp->callback(enable_p10_cb);

  outP10 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*4+20,HB,CTRL_H,"M");
  outP10->box(FL_PLASTIC_UP_BOX);
  outP10->labelsize(11);
  outP10->selection_color(FL_GREEN);
  outP10->labelcolor(FL_RED);
  outP10->tooltip(MEMO);

  p11_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_1->textsize(TXT_SIZE);
  p11_1->box(BOX_TYPE3);
  p11_1->align(FL_ALIGN_TOP_LEFT);
  p11_1->color(COLOR3);
  p11_1->textcolor(TXT_COLOR);
  p11_1->selection_color(COLOR_SEL);
  p11_1->labelcolor(CTRL_LABEL_COLOR);
  p11_1->tooltip("p11 serie");
  p11_1->cursor_color(TXT_COLOR2);
  p11_1->textfont(IN_TEXT_FONTS);

  p11_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_2->box(BOX_TYPE3);
  p11_2->textsize(TXT_SIZE);
  p11_2->color(COLOR3);
  p11_2->textcolor(TXT_COLOR);
  p11_2->selection_color(COLOR_SEL);
  p11_2->tooltip("p11 serie");
  p11_2->cursor_color(TXT_COLOR2);
  p11_2->textfont(IN_TEXT_FONTS);

  p11_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_3->box(BOX_TYPE3);
  p11_3->textsize(TXT_SIZE);
  p11_3->color(COLOR3);
  p11_3->textcolor(TXT_COLOR);
  p11_3->selection_color(COLOR_SEL);
  p11_3->tooltip("p11 serie");
  p11_3->cursor_color(TXT_COLOR2);
  p11_3->textfont(IN_TEXT_FONTS);

  p11_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_4->box(BOX_TYPE3);
  p11_4->textsize(TXT_SIZE);
  p11_4->color(COLOR3);
  p11_4->textcolor(TXT_COLOR);
  p11_4->selection_color(COLOR_SEL);
  p11_4->tooltip("p11 serie");
  p11_4->cursor_color(TXT_COLOR2);
  p11_4->textfont(IN_TEXT_FONTS);

  p11_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_5->box(BOX_TYPE3);
  p11_5->textsize(TXT_SIZE);
  p11_5->color(COLOR3);
  p11_5->textcolor(TXT_COLOR);
  p11_5->selection_color(COLOR_SEL);
  p11_5->tooltip("p11 serie");
  p11_5->cursor_color(TXT_COLOR2);
  p11_5->textfont(IN_TEXT_FONTS);

  p11_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_6->box(BOX_TYPE3);
  p11_6->textsize(TXT_SIZE);
  p11_6->color(COLOR3);
  p11_6->textcolor(TXT_COLOR);
  p11_6->selection_color(COLOR_SEL);
  p11_6->tooltip("p11 serie");
  p11_6->cursor_color(TXT_COLOR2);
  p11_6->textfont(IN_TEXT_FONTS);

  p11_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_7->box(BOX_TYPE3);
  p11_7->textsize(TXT_SIZE);
  p11_7->color(COLOR3);
  p11_7->textcolor(TXT_COLOR);
  p11_7->selection_color(COLOR_SEL);
  p11_7->tooltip("p11 serie");
  p11_7->cursor_color(TXT_COLOR2);
  p11_7->textfont(IN_TEXT_FONTS);

  p11_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_8->box(BOX_TYPE3);
  p11_8->textsize(TXT_SIZE);
  p11_8->color(COLOR3);
  p11_8->textcolor(TXT_COLOR);
  p11_8->selection_color(COLOR_SEL);
  p11_8->tooltip("p11 serie");
  p11_8->cursor_color(TXT_COLOR2);
  p11_8->textfont(IN_TEXT_FONTS);

  p11_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_9->box(BOX_TYPE3);
  p11_9->textsize(TXT_SIZE);
  p11_9->color(COLOR3);
  p11_9->textcolor(TXT_COLOR);
  p11_9->selection_color(COLOR_SEL);
  p11_9->tooltip("p11 serie");
  p11_9->cursor_color(TXT_COLOR2);
  p11_9->textfont(IN_TEXT_FONTS);

  p11_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_10->box(BOX_TYPE3);
  p11_10->textsize(TXT_SIZE);
  p11_10->color(COLOR3);
  p11_10->textcolor(TXT_COLOR);
  p11_10->selection_color(COLOR_SEL);
  p11_10->tooltip("p11 serie");
  p11_10->cursor_color(TXT_COLOR2);
  p11_10->textfont(IN_TEXT_FONTS);

  p11_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_11->box(BOX_TYPE3);
  p11_11->textsize(TXT_SIZE);
  p11_11->color(COLOR3);
  p11_11->textcolor(TXT_COLOR);
  p11_11->selection_color(COLOR_SEL);
  p11_11->tooltip("p11 serie");
  p11_11->cursor_color(TXT_COLOR2);
  p11_11->textfont(IN_TEXT_FONTS);

  p11_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_12->box(BOX_TYPE3);
  p11_12->textsize(TXT_SIZE);
  p11_12->color(COLOR3);
  p11_12->textcolor(TXT_COLOR);
  p11_12->selection_color(COLOR_SEL);
  p11_12->tooltip("p11 serie");
  p11_12->cursor_color(TXT_COLOR2);
  p11_12->textfont(IN_TEXT_FONTS);

  bt_enable_p11 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*5+25,20,20);
  bt_enable_p11->tooltip("Enable p11 serie");
  bt_enable_p11->box(BOX_TYPE);
  bt_enable_p11->selection_color(E_BUTTTON_COLOR);
  bt_enable_p11->callback(enableCtpp11_cb);

  bt_enable_p11Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*5+25,20,20);
  bt_enable_p11Ctp->tooltip("Enable p11 counterpoint functions");
  bt_enable_p11Ctp->box(BOX_TYPE);
  bt_enable_p11Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p11Ctp->callback(enable_p11_cb);

  outP11 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*5+25,HB,CTRL_H,"M");
  outP11->box(FL_PLASTIC_UP_BOX);
  outP11->labelsize(11);
  outP11->selection_color(FL_GREEN);
  outP11->labelcolor(FL_RED);
  outP11->tooltip(MEMO);

  p12_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_1->textsize(TXT_SIZE);
  p12_1->box(BOX_TYPE3);
  p12_1->align(FL_ALIGN_TOP_LEFT);
  p12_1->color(COLOR3);
  p12_1->textcolor(TXT_COLOR);
  p12_1->selection_color(COLOR_SEL);
  p12_1->labelcolor(CTRL_LABEL_COLOR);
  p12_1->tooltip("p12 serie");
  p12_1->cursor_color(TXT_COLOR2);
  p12_1->textfont(IN_TEXT_FONTS);

  p12_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_2->box(BOX_TYPE3);
  p12_2->textsize(TXT_SIZE);
  p12_2->color(COLOR3);
  p12_2->textcolor(TXT_COLOR);
  p12_2->selection_color(COLOR_SEL);
  p12_2->tooltip("p12 serie");
  p12_2->cursor_color(TXT_COLOR2);
  p12_2->textfont(IN_TEXT_FONTS);

  p12_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_3->box(BOX_TYPE3);
  p12_3->textsize(TXT_SIZE);
  p12_3->color(COLOR3);
  p12_3->textcolor(TXT_COLOR);
  p12_3->selection_color(COLOR_SEL);
  p12_3->tooltip("p12 serie");
  p12_3->cursor_color(TXT_COLOR2);
  p12_3->textfont(IN_TEXT_FONTS);

  p12_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_4->box(BOX_TYPE3);
  p12_4->textsize(TXT_SIZE);
  p12_4->color(COLOR3);
  p12_4->textcolor(TXT_COLOR);
  p12_4->selection_color(COLOR_SEL);
  p12_4->tooltip("p12 serie");
  p12_4->cursor_color(TXT_COLOR2);
  p12_4->textfont(IN_TEXT_FONTS);

  p12_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_5->box(BOX_TYPE3);
  p12_5->textsize(TXT_SIZE);
  p12_5->color(COLOR3);
  p12_5->textcolor(TXT_COLOR);
  p12_5->selection_color(COLOR_SEL);
  p12_5->tooltip("p12 serie");
  p12_5->cursor_color(TXT_COLOR2);
  p12_5->textfont(IN_TEXT_FONTS);

  p12_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_6->box(BOX_TYPE3);
  p12_6->textsize(TXT_SIZE);
  p12_6->color(COLOR3);
  p12_6->textcolor(TXT_COLOR);
  p12_6->selection_color(COLOR_SEL);
  p12_6->tooltip("p12 serie");
  p12_6->cursor_color(TXT_COLOR2);
  p12_6->textfont(IN_TEXT_FONTS);

  p12_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_7->box(BOX_TYPE3);
  p12_7->textsize(TXT_SIZE);
  p12_7->color(COLOR3);
  p12_7->textcolor(TXT_COLOR);
  p12_7->selection_color(COLOR_SEL);
  p12_7->tooltip("p12 serie");
  p12_7->cursor_color(TXT_COLOR2);
  p12_7->textfont(IN_TEXT_FONTS);

  p12_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_8->box(BOX_TYPE3);
  p12_8->textsize(TXT_SIZE);
  p12_8->color(COLOR3);
  p12_8->textcolor(TXT_COLOR);
  p12_8->selection_color(COLOR_SEL);
  p12_8->tooltip("p12 serie");
  p12_8->cursor_color(TXT_COLOR2);
  p12_8->textfont(IN_TEXT_FONTS);

  p12_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_9->box(BOX_TYPE3);
  p12_9->textsize(TXT_SIZE);
  p12_9->color(COLOR3);
  p12_9->textcolor(TXT_COLOR);
  p12_9->selection_color(COLOR_SEL);
  p12_9->tooltip("p12 serie");
  p12_9->cursor_color(TXT_COLOR2);
  p12_9->textfont(IN_TEXT_FONTS);

  p12_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_10->box(BOX_TYPE3);
  p12_10->textsize(TXT_SIZE);
  p12_10->color(COLOR3);
  p12_10->textcolor(TXT_COLOR);
  p12_10->selection_color(COLOR_SEL);
  p12_10->tooltip("p12 serie");
  p12_10->cursor_color(TXT_COLOR2);
  p12_10->textfont(IN_TEXT_FONTS);

  p12_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_11->box(BOX_TYPE3);
  p12_11->textsize(TXT_SIZE);
  p12_11->color(COLOR3);
  p12_11->textcolor(TXT_COLOR);
  p12_11->selection_color(COLOR_SEL);
  p12_11->tooltip("p12 serie");
  p12_11->cursor_color(TXT_COLOR2);
  p12_11->textfont(IN_TEXT_FONTS);

  p12_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_12->box(BOX_TYPE3);
  p12_12->textsize(TXT_SIZE);
  p12_12->color(COLOR3);
  p12_12->textcolor(TXT_COLOR);
  p12_12->selection_color(COLOR_SEL);
  p12_12->tooltip("p12 serie");
  p12_12->cursor_color(TXT_COLOR2);
  p12_12->textfont(IN_TEXT_FONTS);

  bt_enable_p12 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*6+30,20,20);
  bt_enable_p12->tooltip("Enable p12 serie");
  bt_enable_p12->box(BOX_TYPE);
  bt_enable_p12->selection_color(E_BUTTTON_COLOR);
  bt_enable_p12->callback(enableCtpp12_cb);

  bt_enable_p12Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*6+30,20,20);
  bt_enable_p12Ctp->tooltip("Enable p12 counterpoint functions");
  bt_enable_p12Ctp->box(BOX_TYPE);
  bt_enable_p12Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p12Ctp->callback(enable_p12_cb);

  outP12 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*6+30,HB,CTRL_H,"M");
  outP12->box(FL_PLASTIC_UP_BOX);
  outP12->labelsize(11);
  outP12->selection_color(FL_GREEN);
  outP12->labelcolor(FL_RED);
  outP12->tooltip(MEMO);

  p13_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_1->textsize(TXT_SIZE);
  p13_1->box(BOX_TYPE3);
  p13_1->align(FL_ALIGN_TOP_LEFT);
  p13_1->color(COLOR3);
  p13_1->textcolor(TXT_COLOR);
  p13_1->selection_color(COLOR_SEL);
  p13_1->labelcolor(CTRL_LABEL_COLOR);
  p13_1->tooltip("p13 serie");
  p13_1->cursor_color(TXT_COLOR2);
  p13_1->textfont(IN_TEXT_FONTS);

  p13_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_2->box(BOX_TYPE3);
  p13_2->textsize(TXT_SIZE);
  p13_2->color(COLOR3);
  p13_2->textcolor(TXT_COLOR);
  p13_2->selection_color(COLOR_SEL);
  p13_2->tooltip("p13 serie");
  p13_2->cursor_color(TXT_COLOR2);
  p13_2->textfont(IN_TEXT_FONTS);

  p13_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_3->box(BOX_TYPE3);
  p13_3->textsize(TXT_SIZE);
  p13_3->color(COLOR3);
  p13_3->textcolor(TXT_COLOR);
  p13_3->selection_color(COLOR_SEL);
  p13_3->tooltip("p13 serie");
  p13_3->cursor_color(TXT_COLOR2);
  p13_3->textfont(IN_TEXT_FONTS);

  p13_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_4->box(BOX_TYPE3);
  p13_4->textsize(TXT_SIZE);
  p13_4->color(COLOR3);
  p13_4->textcolor(TXT_COLOR);
  p13_4->selection_color(COLOR_SEL);
  p13_4->tooltip("p13 serie");
  p13_4->cursor_color(TXT_COLOR2);
  p13_4->textfont(IN_TEXT_FONTS);

  p13_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_5->box(BOX_TYPE3);
  p13_5->textsize(TXT_SIZE);
  p13_5->color(COLOR3);
  p13_5->textcolor(TXT_COLOR);
  p13_5->selection_color(COLOR_SEL);
  p13_5->tooltip("p13 serie");
  p13_5->cursor_color(TXT_COLOR2);
  p13_5->textfont(IN_TEXT_FONTS);

  p13_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_6->box(BOX_TYPE3);
  p13_6->textsize(TXT_SIZE);
  p13_6->color(COLOR3);
  p13_6->textcolor(TXT_COLOR);
  p13_6->selection_color(COLOR_SEL);
  p13_6->tooltip("p13 serie");
  p13_6->cursor_color(TXT_COLOR2);
  p13_6->textfont(IN_TEXT_FONTS);

  p13_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_7->box(BOX_TYPE3);
  p13_7->textsize(TXT_SIZE);
  p13_7->color(COLOR3);
  p13_7->textcolor(TXT_COLOR);
  p13_7->selection_color(COLOR_SEL);
  p13_7->tooltip("p13 serie");
  p13_7->cursor_color(TXT_COLOR2);
  p13_7->textfont(IN_TEXT_FONTS);

  p13_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_8->box(BOX_TYPE3);
  p13_8->textsize(TXT_SIZE);
  p13_8->color(COLOR3);
  p13_8->textcolor(TXT_COLOR);
  p13_8->selection_color(COLOR_SEL);
  p13_8->tooltip("p13 serie");
  p13_8->cursor_color(TXT_COLOR2);
  p13_8->textfont(IN_TEXT_FONTS);

  p13_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_9->box(BOX_TYPE3);
  p13_9->textsize(TXT_SIZE);
  p13_9->color(COLOR3);
  p13_9->textcolor(TXT_COLOR);
  p13_9->selection_color(COLOR_SEL);
  p13_9->tooltip("p13 serie");
  p13_9->cursor_color(TXT_COLOR2);
  p13_9->textfont(IN_TEXT_FONTS);

  p13_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_10->box(BOX_TYPE3);
  p13_10->textsize(TXT_SIZE);
  p13_10->color(COLOR3);
  p13_10->textcolor(TXT_COLOR);
  p13_10->selection_color(COLOR_SEL);
  p13_10->tooltip("p13 serie");
  p13_10->cursor_color(TXT_COLOR2);
  p13_10->textfont(IN_TEXT_FONTS);

  p13_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_11->box(BOX_TYPE3);
  p13_11->textsize(TXT_SIZE);
  p13_11->color(COLOR3);
  p13_11->textcolor(TXT_COLOR);
  p13_11->selection_color(COLOR_SEL);
  p13_11->tooltip("p13 serie");
  p13_11->cursor_color(TXT_COLOR2);
  p13_11->textfont(IN_TEXT_FONTS);

  p13_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_12->box(BOX_TYPE3);
  p13_12->textsize(TXT_SIZE);
  p13_12->color(COLOR3);
  p13_12->textcolor(TXT_COLOR);
  p13_12->selection_color(COLOR_SEL);
  p13_12->tooltip("p13 serie");
  p13_12->cursor_color(TXT_COLOR2);
  p13_12->textfont(IN_TEXT_FONTS);

  bt_enable_p13 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*7+35,20,20);
  bt_enable_p13->tooltip("Enable p13 serie");
  bt_enable_p13->box(BOX_TYPE);
  bt_enable_p13->selection_color(E_BUTTTON_COLOR);
  bt_enable_p13->callback(enableCtpp13_cb);

  bt_enable_p13Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*7+35,20,20);
  bt_enable_p13Ctp->tooltip("Enable p13 counterpoint functions");
  bt_enable_p13Ctp->box(BOX_TYPE);  
  bt_enable_p13Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p13Ctp->callback(enable_p13_cb);
  
  outP13 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*7+35,HB,CTRL_H,"M");
  outP13->box(FL_PLASTIC_UP_BOX);
  outP13->labelsize(11);
  outP13->selection_color(FL_GREEN);
  outP13->labelcolor(FL_RED);
  outP13->tooltip(MEMO);

  p14_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_1->textsize(TXT_SIZE);
  p14_1->box(BOX_TYPE3);
  p14_1->align(FL_ALIGN_TOP_LEFT);
  p14_1->color(COLOR3);
  p14_1->textcolor(TXT_COLOR);
  p14_1->selection_color(COLOR_SEL);
  p14_1->labelcolor(CTRL_LABEL_COLOR);
  p14_1->tooltip("p14 serie");
  p14_1->cursor_color(TXT_COLOR2);
  p14_1->textfont(IN_TEXT_FONTS);

  p14_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_2->box(BOX_TYPE3);
  p14_2->textsize(TXT_SIZE);
  p14_2->color(COLOR3);
  p14_2->textcolor(TXT_COLOR);
  p14_2->selection_color(COLOR_SEL);
  p14_2->tooltip("p14 serie");
  p14_2->cursor_color(TXT_COLOR2);
  p14_2->textfont(IN_TEXT_FONTS);

  p14_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_3->box(BOX_TYPE3);
  p14_3->textsize(TXT_SIZE);
  p14_3->color(COLOR3);
  p14_3->textcolor(TXT_COLOR);
  p14_3->selection_color(COLOR_SEL);
  p14_3->tooltip("p14 serie");
  p14_3->cursor_color(TXT_COLOR2);
  p14_3->textfont(IN_TEXT_FONTS);

  p14_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_4->box(BOX_TYPE3);
  p14_4->textsize(TXT_SIZE);
  p14_4->color(COLOR3);
  p14_4->textcolor(TXT_COLOR);
  p14_4->selection_color(COLOR_SEL);
  p14_4->tooltip("p14 serie");
  p14_4->cursor_color(TXT_COLOR2);
  p14_4->textfont(IN_TEXT_FONTS);

  p14_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_5->box(BOX_TYPE3);
  p14_5->textsize(TXT_SIZE);
  p14_5->color(COLOR3);
  p14_5->textcolor(TXT_COLOR);
  p14_5->selection_color(COLOR_SEL);
  p14_5->tooltip("p14 serie");
  p14_5->cursor_color(TXT_COLOR2);
  p14_5->textfont(IN_TEXT_FONTS);

  p14_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_6->box(BOX_TYPE3);
  p14_6->textsize(TXT_SIZE);
  p14_6->color(COLOR3);
  p14_6->textcolor(TXT_COLOR);
  p14_6->selection_color(COLOR_SEL);
  p14_6->tooltip("p14 serie");
  p14_6->cursor_color(TXT_COLOR2);
  p14_6->textfont(IN_TEXT_FONTS);

  p14_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_7->box(BOX_TYPE3);
  p14_7->textsize(TXT_SIZE);
  p14_7->color(COLOR3);
  p14_7->textcolor(TXT_COLOR);
  p14_7->selection_color(COLOR_SEL);
  p14_7->tooltip("p14 serie");
  p14_7->cursor_color(TXT_COLOR2);
  p14_7->textfont(IN_TEXT_FONTS);

  p14_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_8->box(BOX_TYPE3);
  p14_8->textsize(TXT_SIZE);
  p14_8->color(COLOR3);
  p14_8->textcolor(TXT_COLOR);
  p14_8->selection_color(COLOR_SEL);
  p14_8->tooltip("p14 serie");
  p14_8->cursor_color(TXT_COLOR2);
  p14_8->textfont(IN_TEXT_FONTS);

  p14_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_9->box(BOX_TYPE3);
  p14_9->textsize(TXT_SIZE);
  p14_9->color(COLOR3);
  p14_9->textcolor(TXT_COLOR);
  p14_9->selection_color(COLOR_SEL);
  p14_9->tooltip("p14 serie");
  p14_9->cursor_color(TXT_COLOR2);
  p14_9->textfont(IN_TEXT_FONTS);

  p14_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_10->box(BOX_TYPE3);
  p14_10->textsize(TXT_SIZE);
  p14_10->color(COLOR3);
  p14_10->textcolor(TXT_COLOR);
  p14_10->selection_color(COLOR_SEL);
  p14_10->tooltip("p14 serie");
  p14_10->cursor_color(TXT_COLOR2);
  p14_10->textfont(IN_TEXT_FONTS);

  p14_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_11->box(BOX_TYPE3);
  p14_11->textsize(TXT_SIZE);
  p14_11->color(COLOR3);
  p14_11->textcolor(TXT_COLOR);
  p14_11->selection_color(COLOR_SEL);
  p14_11->tooltip("p14 serie");
  p14_11->cursor_color(TXT_COLOR2);
  p14_11->textfont(IN_TEXT_FONTS);

  p14_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_12->box(BOX_TYPE3);
  p14_12->textsize(TXT_SIZE);
  p14_12->color(COLOR3);
  p14_12->textcolor(TXT_COLOR);
  p14_12->selection_color(COLOR_SEL);
  p14_12->tooltip("p14 serie");
  p14_12->cursor_color(TXT_COLOR2);
  p14_12->textfont(IN_TEXT_FONTS);

  bt_enable_p14 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*8+40,20,20);
  bt_enable_p14->tooltip("Enable p14 serie");
  bt_enable_p14->box(BOX_TYPE);
  bt_enable_p14->selection_color(E_BUTTTON_COLOR);
  bt_enable_p14->callback(enableCtpp14_cb);

  bt_enable_p14Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*8+40,20,20);
  bt_enable_p14Ctp->tooltip("Enable p14 counterpoint functions");
  bt_enable_p14Ctp->box(BOX_TYPE);
  bt_enable_p14Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p14Ctp->callback(enable_p14_cb);

  outP14 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*8+40,HB,CTRL_H,"M");
  outP14->box(FL_PLASTIC_UP_BOX);
  outP14->labelsize(11);
  outP14->selection_color(FL_GREEN);
  outP14->labelcolor(FL_RED);
  outP14->tooltip(MEMO);

  p15_1 = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_1->textsize(TXT_SIZE);
  p15_1->box(BOX_TYPE3);
  p15_1->align(FL_ALIGN_TOP_LEFT);
  p15_1->color(COLOR3);
  p15_1->textcolor(TXT_COLOR);
  p15_1->selection_color(COLOR_SEL);
  p15_1->labelcolor(CTRL_LABEL_COLOR);
  p15_1->tooltip("p15 serie");
  p15_1->cursor_color(TXT_COLOR2);
  p15_1->textfont(IN_TEXT_FONTS);

  p15_2 = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_2->box(BOX_TYPE3);
  p15_2->textsize(TXT_SIZE);
  p15_2->color(COLOR3);
  p15_2->textcolor(TXT_COLOR);
  p15_2->selection_color(COLOR_SEL);
  p15_2->tooltip("p15 serie");
  p15_2->cursor_color(TXT_COLOR2);
  p15_2->textfont(IN_TEXT_FONTS);

  p15_3 = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_3->box(BOX_TYPE3);
  p15_3->textsize(TXT_SIZE);
  p15_3->color(COLOR3);
  p15_3->textcolor(TXT_COLOR);
  p15_3->selection_color(COLOR_SEL);
  p15_3->tooltip("p15 serie");
  p15_3->cursor_color(TXT_COLOR2);
  p15_3->textfont(IN_TEXT_FONTS);

  p15_4 = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_4->box(BOX_TYPE3);
  p15_4->textsize(TXT_SIZE);
  p15_4->color(COLOR3);
  p15_4->textcolor(TXT_COLOR);
  p15_4->selection_color(COLOR_SEL);
  p15_4->tooltip("p15 serie");
  p15_4->cursor_color(TXT_COLOR2);
  p15_4->textfont(IN_TEXT_FONTS);

  p15_5 = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_5->box(BOX_TYPE3);
  p15_5->textsize(TXT_SIZE);
  p15_5->color(COLOR3);
  p15_5->textcolor(TXT_COLOR);
  p15_5->selection_color(COLOR_SEL);
  p15_5->tooltip("p15 serie");
  p15_5->cursor_color(TXT_COLOR2);
  p15_5->textfont(IN_TEXT_FONTS);

  p15_6 = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_6->box(BOX_TYPE3);
  p15_6->textsize(TXT_SIZE);
  p15_6->color(COLOR3);
  p15_6->textcolor(TXT_COLOR);
  p15_6->selection_color(COLOR_SEL);
  p15_6->tooltip("p15 serie");
  p15_6->cursor_color(TXT_COLOR2);
  p15_6->textfont(IN_TEXT_FONTS);

  p15_7 = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_7->box(BOX_TYPE3);
  p15_7->textsize(TXT_SIZE);
  p15_7->color(COLOR3);
  p15_7->textcolor(TXT_COLOR);
  p15_7->selection_color(COLOR_SEL);
  p15_7->tooltip("p15 serie");
  p15_7->cursor_color(TXT_COLOR2);
  p15_7->textfont(IN_TEXT_FONTS);

  p15_8 = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_8->box(BOX_TYPE3);
  p15_8->textsize(TXT_SIZE);
  p15_8->color(COLOR3);
  p15_8->textcolor(TXT_COLOR);
  p15_8->selection_color(COLOR_SEL);
  p15_8->tooltip("p15 serie");
  p15_8->cursor_color(TXT_COLOR2);
  p15_8->textfont(IN_TEXT_FONTS);

  p15_9 = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_9->box(BOX_TYPE3);
  p15_9->textsize(TXT_SIZE);
  p15_9->color(COLOR3);
  p15_9->textcolor(TXT_COLOR);
  p15_9->selection_color(COLOR_SEL);
  p15_9->tooltip("p15 serie");
  p15_9->cursor_color(TXT_COLOR2);
  p15_9->textfont(IN_TEXT_FONTS);

  p15_10 = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_10->box(BOX_TYPE3);
  p15_10->textsize(TXT_SIZE);
  p15_10->color(COLOR3);
  p15_10->textcolor(TXT_COLOR);
  p15_10->selection_color(COLOR_SEL);
  p15_10->tooltip("p15 serie");
  p15_10->cursor_color(TXT_COLOR2);
  p15_10->textfont(IN_TEXT_FONTS);

  p15_11 = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_11->box(BOX_TYPE3);
  p15_11->textsize(TXT_SIZE);
  p15_11->color(COLOR3);
  p15_11->textcolor(TXT_COLOR);
  p15_11->selection_color(COLOR_SEL);
  p15_11->tooltip("p15 serie");
  p15_11->cursor_color(TXT_COLOR2);
  p15_11->textfont(IN_TEXT_FONTS);

  p15_12 = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_12->box(BOX_TYPE3);
  p15_12->textsize(TXT_SIZE);
  p15_12->color(COLOR3);
  p15_12->textcolor(TXT_COLOR);
  p15_12->selection_color(COLOR_SEL);
  p15_12->tooltip("p15 serie");
  p15_12->cursor_color(TXT_COLOR2);
  p15_12->textfont(IN_TEXT_FONTS);

  bt_enable_p15 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*9+45,20,20);
  bt_enable_p15->tooltip("Enable p15 serie");
  bt_enable_p15->box(BOX_TYPE);
  bt_enable_p15->selection_color(E_BUTTTON_COLOR);
  bt_enable_p15->callback(enableCtpp15_cb);

  bt_enable_p15Ctp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*9+45,20,20);
  bt_enable_p15Ctp->tooltip("Enable p15 counterpoint functions");
  bt_enable_p15Ctp->box(BOX_TYPE);
  bt_enable_p15Ctp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p15Ctp->callback(enable_p15_cb);

  outP15 = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*9+45,HB,CTRL_H,"M");
  outP15->box(FL_PLASTIC_UP_BOX);
  outP15->labelsize(11);
  outP15->selection_color(FL_GREEN);
  outP15->labelcolor(FL_RED);
  outP15->tooltip(MEMO);

  Fl_Button *moreP2 = new Fl_Button(CTRL_W*8+15,CTRL_T+(ADD_TOP-125)+350,60,25,"p16-p25");
  moreP2->callback(makeWinParamsb_cb);
  moreP2->labelcolor(FL_RED);
  moreP2->box(BOX_TYPE);
  moreP2->labeltype(BT_LABEL_TYPE);

  Fl_Button *btParamsAritm = new Fl_Button(CTRL_W*9+30,CTRL_T+(ADD_TOP-125)+350,60,25,"Func.");
  btParamsAritm->labelcolor(FL_RED);
  btParamsAritm->box(BOX_TYPE);
  btParamsAritm->labeltype(BT_LABEL_TYPE);
  btParamsAritm->labelsize(14);
  btParamsAritm->callback(makeWin_IncDecSParams_cb);

  Fl_Button *closeWparam = new Fl_Button(CTRL_W*10+45,CTRL_T+(ADD_TOP-125)+350,60,25,"CLOSE");
  closeWparam->callback(closeWparams_cb);
  closeWparam->labelcolor(FL_RED);
  closeWparam->box(BOX_TYPE);
  closeWparam->labeltype(BT_LABEL_TYPE);
  closeWparam->labelsize(14);
  
  readPrefsSerieParams();
    winParamn->end();
    winParamn->show();
}

void makeWinParams_cb(Fl_Widget*,void*)
{
    loadMoreParams = 1;
    makeWinParams();
}

void closeWparams_cb(Fl_Widget*,void*)
{
    winParamn->redraw();
    writePrefsSerieParams();
    winParamn->hide();
}
