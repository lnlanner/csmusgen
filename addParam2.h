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
void closeWparamsb_cb(Fl_Widget*,void*);
void writePrefsSerieParams2();
void readPrefsSerieParams2();
void makeWin_IncDecS();

void makeWin_IncDecSParamsb_cb(Fl_Widget*,void*)
{
    funcMenuItems = 2;
    makeWin_IncDecS();
}

void enableCtpp6b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p6b->value() == 0) {bt_enable_p6bCtp->value(0);}
}

void enable_p6b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p6bCtp->value() == 1){bt_enable_p6b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp7b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p7b->value() == 0) {bt_enable_p7bCtp->value(0);}
}

void enable_p7b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p7bCtp->value() == 1){bt_enable_p7b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp8b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p8b->value() == 0) {bt_enable_p8bCtp->value(0);}
}

void enable_p8b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p8bCtp->value() == 1){bt_enable_p8b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp9b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p9b->value() == 0) {bt_enable_p9bCtp->value(0);}
}

void enable_p9b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p9bCtp->value() == 1){bt_enable_p9b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp10b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p10b->value() == 0) {bt_enable_p10bCtp->value(0);}
}

void enable_p10b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p10bCtp->value() == 1){bt_enable_p10b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp11b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p11b->value() == 0) {bt_enable_p11bCtp->value(0);}
}

void enable_p11b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p11bCtp->value() == 1){bt_enable_p11b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp12b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p12b->value() == 0) {bt_enable_p12bCtp->value(0);}
}

void enable_p12b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p12bCtp->value() == 1){bt_enable_p12b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp13b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p13b->value() == 0) {bt_enable_p13bCtp->value(0);}
}

void enable_p13b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p13bCtp->value() == 1){bt_enable_p13b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp14b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p14b->value() == 0) {bt_enable_p14bCtp->value(0);}
}

void enable_p14b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p14bCtp->value() == 1){bt_enable_p14b->value(1);}
}
//////////////////////////////////////////////////////////////////
void enableCtpp15b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p15b->value() == 0) {bt_enable_p15bCtp->value(0);}
}

void enable_p15b_cb(Fl_Widget*,void*)
{
    if (bt_enable_p15bCtp->value() == 1){bt_enable_p15b->value(1);}
}
//////////////////////////////////////////////////////////////////
void makeWinParamsb()
{
    winParamnb = new Fl_Window (300,300,W-40,H-100,"Parameters p16 to p25");
    winParamnb->color(COLOR);
    winParamnb->set_modal();

    funcMenuItems = 2;

  newPframeb = new Fl_Box(CTRL_L4,0,CTRL_W*12+5,CTRL_H*10+55);
  newPframeb->box(FL_ENGRAVED_BOX);
  newPframeb->align(FL_ALIGN_TOP);
  newPframeb->color(COLOR3);
  newPframeb->labelcolor(CTRL_LABEL_COLOR);

  p6_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2,CTRL_W,CTRL_H);
  p6_1b->textsize(TXT_SIZE);
  p6_1b->box(BOX_TYPE3);
  p6_1b->align(FL_ALIGN_TOP_LEFT);
  p6_1b->color(COLOR3);
  p6_1b->textcolor(TXT_COLOR);
  p6_1b->selection_color(COLOR_SEL);
  p6_1b->labelcolor(CTRL_LABEL_COLOR);
  p6_1b->tooltip("p16 serie");
  p6_1b->cursor_color(TXT_COLOR2);
  p6_1b->textfont(IN_TEXT_FONTS);

  p6_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2,CTRL_W,CTRL_H);
  p6_2b->box(BOX_TYPE3);
  p6_2b->textsize(TXT_SIZE);
  p6_2b->color(COLOR3);
  p6_2b->textcolor(TXT_COLOR);
  p6_2b->selection_color(COLOR_SEL);
  p6_2b->tooltip("p16 serie");
  p6_2b->cursor_color(TXT_COLOR2);
  p6_2b->textfont(IN_TEXT_FONTS);

  p6_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2,CTRL_W,CTRL_H);
  p6_3b->box(BOX_TYPE3);
  p6_3b->textsize(TXT_SIZE);
  p6_3b->color(COLOR3);
  p6_3b->textcolor(TXT_COLOR);
  p6_3b->selection_color(COLOR_SEL);
  p6_3b->tooltip("p16 serie");
  p6_3b->cursor_color(TXT_COLOR2);
  p6_3b->textfont(IN_TEXT_FONTS);

  p6_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2,CTRL_W,CTRL_H);
  p6_4b->box(BOX_TYPE3);
  p6_4b->textsize(TXT_SIZE);
  p6_4b->color(COLOR3);
  p6_4b->textcolor(TXT_COLOR);
  p6_4b->selection_color(COLOR_SEL);
  p6_4b->tooltip("p16 serie");
  p6_4b->cursor_color(TXT_COLOR2);
  p6_4b->textfont(IN_TEXT_FONTS);

  p6_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2,CTRL_W,CTRL_H);
  p6_5b->box(BOX_TYPE3);
  p6_5b->textsize(TXT_SIZE);
  p6_5b->color(COLOR3);
  p6_5b->textcolor(TXT_COLOR);
  p6_5b->selection_color(COLOR_SEL);
  p6_5b->tooltip("p16 serie");
  p6_5b->cursor_color(TXT_COLOR2);
  p6_5b->textfont(IN_TEXT_FONTS);

  p6_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2,CTRL_W,CTRL_H);
  p6_6b->box(BOX_TYPE3);
  p6_6b->textsize(TXT_SIZE);
  p6_6b->color(COLOR3);
  p6_6b->textcolor(TXT_COLOR);
  p6_6b->selection_color(COLOR_SEL);
  p6_6b->tooltip("p16 serie");
  p6_6b->cursor_color(TXT_COLOR2);
  p6_6b->textfont(IN_TEXT_FONTS);

  p6_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2,CTRL_W,CTRL_H);
  p6_7b->box(BOX_TYPE3);
  p6_7b->textsize(TXT_SIZE);
  p6_7b->color(COLOR3);
  p6_7b->textcolor(TXT_COLOR);
  p6_7b->selection_color(COLOR_SEL);
  p6_7b->tooltip("p16 serie");
  p6_7b->cursor_color(TXT_COLOR2);
  p6_7b->textfont(IN_TEXT_FONTS);

  p6_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2,CTRL_W,CTRL_H);
  p6_8b->box(BOX_TYPE3);
  p6_8b->textsize(TXT_SIZE);
  p6_8b->color(COLOR3);
  p6_8b->textcolor(TXT_COLOR);
  p6_8b->selection_color(COLOR_SEL);
  p6_8b->tooltip("p16 serie");
  p6_8b->cursor_color(TXT_COLOR2);
  p6_8b->textfont(IN_TEXT_FONTS);

  p6_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2,CTRL_W,CTRL_H);
  p6_9b->box(BOX_TYPE3);
  p6_9b->textsize(TXT_SIZE);
  p6_9b->color(COLOR3);
  p6_9b->textcolor(TXT_COLOR);
  p6_9b->selection_color(COLOR_SEL);
  p6_9b->tooltip("p16 serie");
  p6_9b->cursor_color(TXT_COLOR2);
  p6_9b->textfont(IN_TEXT_FONTS);

  p6_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2,CTRL_W,CTRL_H);
  p6_10b->box(BOX_TYPE3);
  p6_10b->textsize(TXT_SIZE);
  p6_10b->color(COLOR3);
  p6_10b->textcolor(TXT_COLOR);
  p6_10b->selection_color(COLOR_SEL);
  p6_10b->tooltip("p16 serie");
  p6_10b->cursor_color(TXT_COLOR2);
  p6_10b->textfont(IN_TEXT_FONTS);

  p6_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2,CTRL_W,CTRL_H);
  p6_11b->box(BOX_TYPE3);
  p6_11b->textsize(TXT_SIZE);
  p6_11b->color(COLOR3);
  p6_11b->textcolor(TXT_COLOR);
  p6_11b->selection_color(COLOR_SEL);
  p6_11b->tooltip("p16 serie");
  p6_11b->cursor_color(TXT_COLOR2);
  p6_11b->textfont(IN_TEXT_FONTS);

  p6_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2,CTRL_W,CTRL_H);
  p6_12b->box(BOX_TYPE3);
  p6_12b->textsize(TXT_SIZE);
  p6_12b->color(COLOR3);
  p6_12b->textcolor(TXT_COLOR);
  p6_12b->selection_color(COLOR_SEL);
  p6_12b->tooltip("p16 serie");
  p6_12b->cursor_color(TXT_COLOR2);
  p6_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p6b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2,20,20);
  bt_enable_p6b->tooltip("Enable p16 serie");
  bt_enable_p6b->box(BOX_TYPE);
  bt_enable_p6b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p6b->callback(enableCtpp6b_cb);

  bt_enable_p6bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2,20,20);
  bt_enable_p6bCtp->tooltip("Enable p16 counterpoint functions");
  bt_enable_p6bCtp->box(BOX_TYPE);
  bt_enable_p6bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p6bCtp->callback(enable_p6b_cb);

  outP6b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2,HB,CTRL_H,"M");
  outP6b->box(BOX_TYPE);
  outP6b->labelsize(11);
  outP6b->selection_color(FL_GREEN);
  outP6b->labelcolor(FL_RED);
  outP6b->tooltip(MEMO);

  p7_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_1b->textsize(TXT_SIZE);
  p7_1b->box(BOX_TYPE3);
  p7_1b->align(FL_ALIGN_TOP_LEFT);
  p7_1b->color(COLOR3);
  p7_1b->textcolor(TXT_COLOR);
  p7_1b->selection_color(COLOR_SEL);
  p7_1b->labelcolor(CTRL_LABEL_COLOR);
  p7_1b->tooltip("pitch serie");
  p7_1b->cursor_color(TXT_COLOR2);
  p7_1b->textfont(IN_TEXT_FONTS);

  p7_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_2b->box(BOX_TYPE3);
  p7_2b->textsize(TXT_SIZE);
  p7_2b->color(COLOR3);
  p7_2b->textcolor(TXT_COLOR);
  p7_2b->selection_color(COLOR_SEL);
  p7_2b->tooltip("p17 serie");
  p7_2b->cursor_color(TXT_COLOR2);
  p7_2b->textfont(IN_TEXT_FONTS);

  p7_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_3b->box(BOX_TYPE3);
  p7_3b->textsize(TXT_SIZE);
  p7_3b->color(COLOR3);
  p7_3b->textcolor(TXT_COLOR);
  p7_3b->selection_color(COLOR_SEL);
  p7_3b->tooltip("p17 serie");
  p7_3b->cursor_color(TXT_COLOR2);
  p7_3b->textfont(IN_TEXT_FONTS);

  p7_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_4b->box(BOX_TYPE3);
  p7_4b->textsize(TXT_SIZE);
  p7_4b->color(COLOR3);
  p7_4b->textcolor(TXT_COLOR);
  p7_4b->selection_color(COLOR_SEL);
  p7_4b->tooltip("p17 serie");
  p7_4b->cursor_color(TXT_COLOR2);
  p7_4b->textfont(IN_TEXT_FONTS);

  p7_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_5b->box(BOX_TYPE3);
  p7_5b->textsize(TXT_SIZE);
  p7_5b->color(COLOR3);
  p7_5b->textcolor(TXT_COLOR);
  p7_5b->selection_color(COLOR_SEL);
  p7_5b->tooltip("p17 serie");
  p7_5b->cursor_color(TXT_COLOR2);
  p7_5b->textfont(IN_TEXT_FONTS);

  p7_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_6b->box(BOX_TYPE3);
  p7_6b->textsize(TXT_SIZE);
  p7_6b->color(COLOR3);
  p7_6b->textcolor(TXT_COLOR);
  p7_6b->selection_color(COLOR_SEL);
  p7_6b->tooltip("p17 serie");
  p7_6b->cursor_color(TXT_COLOR2);
  p7_6b->textfont(IN_TEXT_FONTS);

  p7_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_7b->box(BOX_TYPE3);
  p7_7b->textsize(TXT_SIZE);
  p7_7b->color(COLOR3);
  p7_7b->textcolor(TXT_COLOR);
  p7_7b->selection_color(COLOR_SEL);
  p7_7b->tooltip("p17 serie");
  p7_7b->cursor_color(TXT_COLOR2);
  p7_7b->textfont(IN_TEXT_FONTS);

  p7_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_8b->box(BOX_TYPE3);
  p7_8b->textsize(TXT_SIZE);
  p7_8b->color(COLOR3);
  p7_8b->textcolor(TXT_COLOR);
  p7_8b->selection_color(COLOR_SEL);
  p7_8b->tooltip("p17 serie");
  p7_8b->cursor_color(TXT_COLOR2);
  p7_8b->textfont(IN_TEXT_FONTS);

  p7_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_9b->box(BOX_TYPE3);
  p7_9b->textsize(TXT_SIZE);
  p7_9b->color(COLOR3);
  p7_9b->textcolor(TXT_COLOR);
  p7_9b->selection_color(COLOR_SEL);
  p7_9b->tooltip("p17 serie");
  p7_9b->cursor_color(TXT_COLOR2);
  p7_9b->textfont(IN_TEXT_FONTS);

  p7_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_10b->box(BOX_TYPE3);
  p7_10b->textsize(TXT_SIZE);
  p7_10b->color(COLOR3);
  p7_10b->textcolor(TXT_COLOR);
  p7_10b->selection_color(COLOR_SEL);
  p7_10b->tooltip("p17 serie");
  p7_10b->cursor_color(TXT_COLOR2);
  p7_10b->textfont(IN_TEXT_FONTS);

  p7_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_11b->box(BOX_TYPE3);
  p7_11b->textsize(TXT_SIZE);
  p7_11b->color(COLOR3);
  p7_11b->textcolor(TXT_COLOR);
  p7_11b->selection_color(COLOR_SEL);
  p7_11b->tooltip("p17 serie");
  p7_11b->cursor_color(TXT_COLOR2);
  p7_11b->textfont(IN_TEXT_FONTS);

  p7_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H+5,CTRL_W,CTRL_H);
  p7_12b->box(BOX_TYPE3);
  p7_12b->textsize(TXT_SIZE);
  p7_12b->color(COLOR3);
  p7_12b->textcolor(TXT_COLOR);
  p7_12b->selection_color(COLOR_SEL);
  p7_12b->tooltip("p17 serie");
  p7_12b->cursor_color(TXT_COLOR2);
  p7_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p7b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H+5,20,20);
  bt_enable_p7b->tooltip("Enable p17 serie");
  bt_enable_p7b->box(BOX_TYPE);
  bt_enable_p7b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p7b->callback(enableCtpp7b_cb);

  bt_enable_p7bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H+5,20,20);
  bt_enable_p7bCtp->tooltip("Enable p17 counterpoint functions");
  bt_enable_p7bCtp->box(BOX_TYPE);
  bt_enable_p7bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p7bCtp->callback(enable_p7b_cb);

  outP7b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H+5,HB,CTRL_H,"M");
  outP7b->box(BOX_TYPE);
  outP7b->labelsize(11);
  outP7b->selection_color(FL_GREEN);
  outP7b->labelcolor(FL_RED);
  outP7b->tooltip(MEMO);

  p8_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_1b->textsize(TXT_SIZE);
  p8_1b->box(BOX_TYPE3);
  p8_1b->align(FL_ALIGN_TOP_LEFT);
  p8_1b->color(COLOR3);
  p8_1b->textcolor(TXT_COLOR);
  p8_1b->selection_color(COLOR_SEL);
  p8_1b->labelcolor(CTRL_LABEL_COLOR);
  p8_1b->tooltip("p18 serie");
  p8_1b->cursor_color(TXT_COLOR2);
  p8_1b->textfont(IN_TEXT_FONTS);

  p8_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_2b->box(BOX_TYPE3);
  p8_2b->textsize(TXT_SIZE);
  p8_2b->color(COLOR3);
  p8_2b->textcolor(TXT_COLOR);
  p8_2b->selection_color(COLOR_SEL);
  p8_2b->tooltip("p18 serie");
  p8_2b->cursor_color(TXT_COLOR2);
  p8_2b->textfont(IN_TEXT_FONTS);

  p8_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_3b->box(BOX_TYPE3);
  p8_3b->textsize(TXT_SIZE);
  p8_3b->color(COLOR3);
  p8_3b->textcolor(TXT_COLOR);
  p8_3b->selection_color(COLOR_SEL);
  p8_3b->tooltip("p18 serie");
  p8_3b->cursor_color(TXT_COLOR2);
  p8_3b->textfont(IN_TEXT_FONTS);

  p8_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_4b->box(BOX_TYPE3);
  p8_4b->textsize(TXT_SIZE);
  p8_4b->color(COLOR3);
  p8_4b->textcolor(TXT_COLOR);
  p8_4b->selection_color(COLOR_SEL);
  p8_4b->tooltip("p18 serie");
  p8_4b->cursor_color(TXT_COLOR2);
  p8_4b->textfont(IN_TEXT_FONTS);

  p8_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_5b->box(BOX_TYPE3);
  p8_5b->textsize(TXT_SIZE);
  p8_5b->color(COLOR3);
  p8_5b->textcolor(TXT_COLOR);
  p8_5b->selection_color(COLOR_SEL);
  p8_5b->tooltip("p18 serie");
  p8_5b->cursor_color(TXT_COLOR2);
  p8_5b->textfont(IN_TEXT_FONTS);

  p8_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_6b->box(BOX_TYPE3);
  p8_6b->textsize(TXT_SIZE);
  p8_6b->color(COLOR3);
  p8_6b->textcolor(TXT_COLOR);
  p8_6b->selection_color(COLOR_SEL);
  p8_6b->tooltip("p18 serie");
  p8_6b->cursor_color(TXT_COLOR2);
  p8_6b->textfont(IN_TEXT_FONTS);

  p8_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_7b->box(BOX_TYPE3);
  p8_7b->textsize(TXT_SIZE);
  p8_7b->color(COLOR3);
  p8_7b->textcolor(TXT_COLOR);
  p8_7b->selection_color(COLOR_SEL);
  p8_7b->tooltip("p18 serie");
  p8_7b->cursor_color(TXT_COLOR2);
  p8_7b->textfont(IN_TEXT_FONTS);

  p8_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_8b->box(BOX_TYPE3);
  p8_8b->textsize(TXT_SIZE);
  p8_8b->color(COLOR3);
  p8_8b->textcolor(TXT_COLOR);
  p8_8b->selection_color(COLOR_SEL);
  p8_8b->tooltip("p18 serie");
  p8_8b->cursor_color(TXT_COLOR2);
  p8_8b->textfont(IN_TEXT_FONTS);

  p8_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_9b->box(BOX_TYPE3);
  p8_9b->textsize(TXT_SIZE);
  p8_9b->color(COLOR3);
  p8_9b->textcolor(TXT_COLOR);
  p8_9b->selection_color(COLOR_SEL);
  p8_9b->tooltip("p18 serie");
  p8_9b->cursor_color(TXT_COLOR2);
  p8_9b->textfont(IN_TEXT_FONTS);

  p8_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_10b->box(BOX_TYPE3);
  p8_10b->textsize(TXT_SIZE);
  p8_10b->color(COLOR3);
  p8_10b->textcolor(TXT_COLOR);
  p8_10b->selection_color(COLOR_SEL);
  p8_10b->tooltip("p18 serie");
  p8_10b->cursor_color(TXT_COLOR2);
  p8_10b->textfont(IN_TEXT_FONTS);

  p8_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_11b->box(BOX_TYPE3);
  p8_11b->textsize(TXT_SIZE);
  p8_11b->color(COLOR3);
  p8_11b->textcolor(TXT_COLOR);
  p8_11b->selection_color(COLOR_SEL);
  p8_11b->tooltip("p18 serie");
  p8_11b->cursor_color(TXT_COLOR2);
  p8_11b->textfont(IN_TEXT_FONTS);

  p8_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*2+10,CTRL_W,CTRL_H);
  p8_12b->box(BOX_TYPE3);
  p8_12b->textsize(TXT_SIZE);
  p8_12b->color(COLOR3);
  p8_12b->textcolor(TXT_COLOR);
  p8_12b->selection_color(COLOR_SEL);
  p8_12b->tooltip("p18 serie");
  p8_12b->cursor_color(TXT_COLOR2);
  p8_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p8b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*2+10,20,20);
  bt_enable_p8b->tooltip("Enable p18 serie");
  bt_enable_p8b->box(BOX_TYPE);
  bt_enable_p8b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p8b->callback(enableCtpp8b_cb);

  bt_enable_p8bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*2+10,20,20);
  bt_enable_p8bCtp->tooltip("Enable p18 counterpoint functions");
  bt_enable_p8bCtp->box(BOX_TYPE);
  bt_enable_p8bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p8bCtp->callback(enable_p8b_cb);

  outP8b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*2+10,HB,CTRL_H,"M");
  outP8b->box(BOX_TYPE);
  outP8b->labelsize(11);
  outP8b->selection_color(FL_GREEN);
  outP8b->labelcolor(FL_RED);
  outP8b->tooltip(MEMO);

  p9_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_1b->textsize(TXT_SIZE);
  p9_1b->box(BOX_TYPE3);
  p9_1b->align(FL_ALIGN_TOP_LEFT);
  p9_1b->color(COLOR3);
  p9_1b->textcolor(TXT_COLOR);
  p9_1b->selection_color(COLOR_SEL);
  p9_1b->labelcolor(CTRL_LABEL_COLOR);
  p9_1b->tooltip("p19 serie");
  p9_1b->cursor_color(TXT_COLOR2);
  p9_1b->textfont(IN_TEXT_FONTS);

  p9_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_2b->box(BOX_TYPE3);
  p9_2b->textsize(TXT_SIZE);
  p9_2b->color(COLOR3);
  p9_2b->textcolor(TXT_COLOR);
  p9_2b->selection_color(COLOR_SEL);
  p9_2b->tooltip("p19 serie");
  p9_2b->cursor_color(TXT_COLOR2);
  p9_2b->textfont(IN_TEXT_FONTS);

  p9_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_3b->box(BOX_TYPE3);
  p9_3b->textsize(TXT_SIZE);
  p9_3b->color(COLOR3);
  p9_3b->textcolor(TXT_COLOR);
  p9_3b->selection_color(COLOR_SEL);
  p9_3b->tooltip("p19 serie");
  p9_3b->cursor_color(TXT_COLOR2);
  p9_3b->textfont(IN_TEXT_FONTS);

  p9_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_4b->box(BOX_TYPE3);
  p9_4b->textsize(TXT_SIZE);
  p9_4b->color(COLOR3);
  p9_4b->textcolor(TXT_COLOR);
  p9_4b->selection_color(COLOR_SEL);
  p9_4b->tooltip("p19 serie");
  p9_4b->cursor_color(TXT_COLOR2);
  p9_4b->textfont(IN_TEXT_FONTS);

  p9_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_5b->box(BOX_TYPE3);
  p9_5b->textsize(TXT_SIZE);
  p9_5b->color(COLOR3);
  p9_5b->textcolor(TXT_COLOR);
  p9_5b->selection_color(COLOR_SEL);
  p9_5b->tooltip("p19 serie");
  p9_5b->cursor_color(TXT_COLOR2);
  p9_5b->textfont(IN_TEXT_FONTS);

  p9_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_6b->box(BOX_TYPE3);
  p9_6b->textsize(TXT_SIZE);
  p9_6b->color(COLOR3);
  p9_6b->textcolor(TXT_COLOR);
  p9_6b->selection_color(COLOR_SEL);
  p9_6b->tooltip("p19 serie");
  p9_6b->cursor_color(TXT_COLOR2);
  p9_6b->textfont(IN_TEXT_FONTS);

  p9_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_7b->box(BOX_TYPE3);
  p9_7b->textsize(TXT_SIZE);
  p9_7b->color(COLOR3);
  p9_7b->textcolor(TXT_COLOR);
  p9_7b->selection_color(COLOR_SEL);
  p9_7b->tooltip("p19 serie");
  p9_7b->cursor_color(TXT_COLOR2);
  p9_7b->textfont(IN_TEXT_FONTS);

  p9_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_8b->box(BOX_TYPE3);
  p9_8b->textsize(TXT_SIZE);
  p9_8b->color(COLOR3);
  p9_8b->textcolor(TXT_COLOR);
  p9_8b->selection_color(COLOR_SEL);
  p9_8b->tooltip("p19 serie");
  p9_8b->cursor_color(TXT_COLOR2);
  p9_8b->textfont(IN_TEXT_FONTS);

  p9_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_9b->box(BOX_TYPE3);
  p9_9b->textsize(TXT_SIZE);
  p9_9b->color(COLOR3);
  p9_9b->textcolor(TXT_COLOR);
  p9_9b->selection_color(COLOR_SEL);
  p9_9b->tooltip("p19 serie");
  p9_9b->cursor_color(TXT_COLOR2);
  p9_9b->textfont(IN_TEXT_FONTS);

  p9_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_10b->box(BOX_TYPE3);
  p9_10b->textsize(TXT_SIZE);
  p9_10b->color(COLOR3);
  p9_10b->textcolor(TXT_COLOR);
  p9_10b->selection_color(COLOR_SEL);
  p9_10b->tooltip("p19 serie");
  p9_10b->cursor_color(TXT_COLOR2);
  p9_10b->textfont(IN_TEXT_FONTS);

  p9_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_11b->box(BOX_TYPE3);
  p9_11b->textsize(TXT_SIZE);
  p9_11b->color(COLOR3);
  p9_11b->textcolor(TXT_COLOR);
  p9_11b->selection_color(COLOR_SEL);
  p9_11b->tooltip("p19 serie");
  p9_11b->cursor_color(TXT_COLOR2);
  p9_11b->textfont(IN_TEXT_FONTS);

  p9_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*3+15,CTRL_W,CTRL_H);
  p9_12b->box(BOX_TYPE3);
  p9_12b->textsize(TXT_SIZE);
  p9_12b->color(COLOR3);
  p9_12b->textcolor(TXT_COLOR);
  p9_12b->selection_color(COLOR_SEL);
  p9_12b->tooltip("p19 serie");
  p9_12b->cursor_color(TXT_COLOR2);
  p9_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p9b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*3+15,20,20);
  bt_enable_p9b->tooltip("Enable p19 serie");
  bt_enable_p9b->box(BOX_TYPE);
  bt_enable_p9b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p9b->callback(enableCtpp9b_cb);

  bt_enable_p9bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*3+15,20,20);
  bt_enable_p9bCtp->tooltip("Enable p19 counterpoint functions");
  bt_enable_p9bCtp->box(BOX_TYPE);
  bt_enable_p9bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p9bCtp->callback(enable_p9b_cb);

  outP9b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*3+15,HB,CTRL_H,"M");
  outP9b->box(BOX_TYPE);
  outP9b->labelsize(11);
  outP9b->selection_color(FL_GREEN);
  outP9b->labelcolor(FL_RED);
  outP9b->tooltip(MEMO);

  p10_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_1b->textsize(TXT_SIZE);
  p10_1b->box(BOX_TYPE3);
  p10_1b->align(FL_ALIGN_TOP_LEFT);
  p10_1b->color(COLOR3);
  p10_1b->textcolor(TXT_COLOR);
  p10_1b->selection_color(COLOR_SEL);
  p10_1b->labelcolor(CTRL_LABEL_COLOR);
  p10_1b->tooltip("p20 serie");
  p10_1b->cursor_color(TXT_COLOR2);
  p10_1b->textfont(IN_TEXT_FONTS);

  p10_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_2b->box(BOX_TYPE3);
  p10_2b->textsize(TXT_SIZE);
  p10_2b->color(COLOR3);
  p10_2b->textcolor(TXT_COLOR);
  p10_2b->selection_color(COLOR_SEL);
  p10_2b->tooltip("p20 serie");
  p10_2b->cursor_color(TXT_COLOR2);
  p10_2b->textfont(IN_TEXT_FONTS);

  p10_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_3b->box(BOX_TYPE3);
  p10_3b->textsize(TXT_SIZE);
  p10_3b->color(COLOR3);
  p10_3b->textcolor(TXT_COLOR);
  p10_3b->selection_color(COLOR_SEL);
  p10_3b->tooltip("p20 serie");
  p10_3b->cursor_color(TXT_COLOR2);
  p10_3b->textfont(IN_TEXT_FONTS);

  p10_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_4b->box(BOX_TYPE3);
  p10_4b->textsize(TXT_SIZE);
  p10_4b->color(COLOR3);
  p10_4b->textcolor(TXT_COLOR);
  p10_4b->selection_color(COLOR_SEL);
  p10_4b->tooltip("p20 serie");
  p10_4b->cursor_color(TXT_COLOR2);
  p10_4b->textfont(IN_TEXT_FONTS);

  p10_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_5b->box(BOX_TYPE3);
  p10_5b->textsize(TXT_SIZE);
  p10_5b->color(COLOR3);
  p10_5b->textcolor(TXT_COLOR);
  p10_5b->selection_color(COLOR_SEL);
  p10_5b->tooltip("p20 serie");
  p10_5b->cursor_color(TXT_COLOR2);
  p10_5b->textfont(IN_TEXT_FONTS);

  p10_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_6b->box(BOX_TYPE3);
  p10_6b->textsize(TXT_SIZE);
  p10_6b->color(COLOR3);
  p10_6b->textcolor(TXT_COLOR);
  p10_6b->selection_color(COLOR_SEL);
  p10_6b->tooltip("p20 serie");
  p10_6b->cursor_color(TXT_COLOR2);
  p10_6b->textfont(IN_TEXT_FONTS);

  p10_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_7b->box(BOX_TYPE3);
  p10_7b->textsize(TXT_SIZE);
  p10_7b->color(COLOR3);
  p10_7b->textcolor(TXT_COLOR);
  p10_7b->selection_color(COLOR_SEL);
  p10_7b->tooltip("p20 serie");
  p10_7b->cursor_color(TXT_COLOR2);
  p10_7b->textfont(IN_TEXT_FONTS);

  p10_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_8b->box(BOX_TYPE3);
  p10_8b->textsize(TXT_SIZE);
  p10_8b->color(COLOR3);
  p10_8b->textcolor(TXT_COLOR);
  p10_8b->selection_color(COLOR_SEL);
  p10_8b->tooltip("p20 serie");
  p10_8b->cursor_color(TXT_COLOR2);
  p10_8b->textfont(IN_TEXT_FONTS);

  p10_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_9b->box(BOX_TYPE3);
  p10_9b->textsize(TXT_SIZE);
  p10_9b->color(COLOR3);
  p10_9b->textcolor(TXT_COLOR);
  p10_9b->selection_color(COLOR_SEL);
  p10_9b->tooltip("p20 serie");
  p10_9b->cursor_color(TXT_COLOR2);
  p10_9b->textfont(IN_TEXT_FONTS);

  p10_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_10b->box(BOX_TYPE3);
  p10_10b->textsize(TXT_SIZE);
  p10_10b->color(COLOR3);
  p10_10b->textcolor(TXT_COLOR);
  p10_10b->selection_color(COLOR_SEL);
  p10_10b->tooltip("p20 serie");
  p10_10b->cursor_color(TXT_COLOR2);
  p10_10b->textfont(IN_TEXT_FONTS);

  p10_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_11b->box(BOX_TYPE3);
  p10_11b->textsize(TXT_SIZE);
  p10_11b->color(COLOR3);
  p10_11b->textcolor(TXT_COLOR);
  p10_11b->selection_color(COLOR_SEL);
  p10_11b->tooltip("p20 serie");
  p10_11b->cursor_color(TXT_COLOR2);
  p10_11b->textfont(IN_TEXT_FONTS);

  p10_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*4+20,CTRL_W,CTRL_H);
  p10_12b->box(BOX_TYPE3);
  p10_12b->textsize(TXT_SIZE);
  p10_12b->color(COLOR3);
  p10_12b->textcolor(TXT_COLOR);
  p10_12b->selection_color(COLOR_SEL);
  p10_12b->tooltip("p20 serie");
  p10_12b->cursor_color(TXT_COLOR2);
  p10_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p10b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*4+20,20,20);
  bt_enable_p10b->tooltip("Enable p20 serie");
  bt_enable_p10b->box(BOX_TYPE);
  bt_enable_p10b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p10b->callback(enableCtpp10b_cb);

  bt_enable_p10bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*4+20,20,20);
  bt_enable_p10bCtp->tooltip("Enable p20 counterpoint functions");
  bt_enable_p10bCtp->box(BOX_TYPE);
  bt_enable_p10bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p10bCtp->callback(enable_p10b_cb);

  outP10b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*4+20,HB,CTRL_H,"M");
  outP10b->box(BOX_TYPE);
  outP10b->labelsize(11);
  outP10b->selection_color(FL_GREEN);
  outP10b->labelcolor(FL_RED);
  outP10b->tooltip(MEMO);

  p11_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_1b->textsize(TXT_SIZE);
  p11_1b->box(BOX_TYPE3);
  p11_1b->align(FL_ALIGN_TOP_LEFT);
  p11_1b->color(COLOR3);
  p11_1b->textcolor(TXT_COLOR);
  p11_1b->selection_color(COLOR_SEL);
  p11_1b->labelcolor(CTRL_LABEL_COLOR);
  p11_1b->tooltip("p21 serie");
  p11_1b->cursor_color(TXT_COLOR2);
  p11_1b->textfont(IN_TEXT_FONTS);

  p11_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_2b->box(BOX_TYPE3);
  p11_2b->textsize(TXT_SIZE);
  p11_2b->color(COLOR3);
  p11_2b->textcolor(TXT_COLOR);
  p11_2b->selection_color(COLOR_SEL);
  p11_2b->tooltip("p21 serie");
  p11_2b->cursor_color(TXT_COLOR2);
  p11_2b->textfont(IN_TEXT_FONTS);

  p11_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_3b->box(BOX_TYPE3);
  p11_3b->textsize(TXT_SIZE);
  p11_3b->color(COLOR3);
  p11_3b->textcolor(TXT_COLOR);
  p11_3b->selection_color(COLOR_SEL);
  p11_3b->tooltip("p21 serie");
  p11_3b->cursor_color(TXT_COLOR2);
  p11_3b->textfont(IN_TEXT_FONTS);

  p11_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_4b->box(BOX_TYPE3);
  p11_4b->textsize(TXT_SIZE);
  p11_4b->color(COLOR3);
  p11_4b->textcolor(TXT_COLOR);
  p11_4b->selection_color(COLOR_SEL);
  p11_4b->tooltip("p21 serie");
  p11_4b->cursor_color(TXT_COLOR2);
  p11_4b->textfont(IN_TEXT_FONTS);

  p11_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_5b->box(BOX_TYPE3);
  p11_5b->textsize(TXT_SIZE);
  p11_5b->color(COLOR3);
  p11_5b->textcolor(TXT_COLOR);
  p11_5b->selection_color(COLOR_SEL);
  p11_5b->tooltip("p21 serie");
  p11_5b->cursor_color(TXT_COLOR2);
  p11_5b->textfont(IN_TEXT_FONTS);

  p11_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_6b->box(BOX_TYPE3);
  p11_6b->textsize(TXT_SIZE);
  p11_6b->color(COLOR3);
  p11_6b->textcolor(TXT_COLOR);
  p11_6b->selection_color(COLOR_SEL);
  p11_6b->tooltip("p21 serie");
  p11_6b->cursor_color(TXT_COLOR2);
  p11_6b->textfont(IN_TEXT_FONTS);

  p11_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_7b->box(BOX_TYPE3);
  p11_7b->textsize(TXT_SIZE);
  p11_7b->color(COLOR3);
  p11_7b->textcolor(TXT_COLOR);
  p11_7b->selection_color(COLOR_SEL);
  p11_7b->tooltip("p21 serie");
  p11_7b->cursor_color(TXT_COLOR2);
  p11_7b->textfont(IN_TEXT_FONTS);

  p11_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_8b->box(BOX_TYPE3);
  p11_8b->textsize(TXT_SIZE);
  p11_8b->color(COLOR3);
  p11_8b->textcolor(TXT_COLOR);
  p11_8b->selection_color(COLOR_SEL);
  p11_8b->tooltip("p21 serie");
  p11_8b->cursor_color(TXT_COLOR2);
  p11_8b->textfont(IN_TEXT_FONTS);

  p11_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_9b->box(BOX_TYPE3);
  p11_9b->textsize(TXT_SIZE);
  p11_9b->color(COLOR3);
  p11_9b->textcolor(TXT_COLOR);
  p11_9b->selection_color(COLOR_SEL);
  p11_9b->tooltip("p21 serie");
  p11_9b->cursor_color(TXT_COLOR2);
  p11_9b->textfont(IN_TEXT_FONTS);

  p11_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_10b->box(BOX_TYPE3);
  p11_10b->textsize(TXT_SIZE);
  p11_10b->color(COLOR3);
  p11_10b->textcolor(TXT_COLOR);
  p11_10b->selection_color(COLOR_SEL);
  p11_10b->tooltip("p21 serie");
  p11_10b->cursor_color(TXT_COLOR2);
  p11_10b->textfont(IN_TEXT_FONTS);

  p11_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_11b->box(BOX_TYPE3);
  p11_11b->textsize(TXT_SIZE);
  p11_11b->color(COLOR3);
  p11_11b->textcolor(TXT_COLOR);
  p11_11b->selection_color(COLOR_SEL);
  p11_11b->tooltip("p21 serie");
  p11_11b->cursor_color(TXT_COLOR2);
  p11_11b->textfont(IN_TEXT_FONTS);

  p11_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*5+25,CTRL_W,CTRL_H);
  p11_12b->box(BOX_TYPE3);
  p11_12b->textsize(TXT_SIZE);
  p11_12b->color(COLOR3);
  p11_12b->textcolor(TXT_COLOR);
  p11_12b->selection_color(COLOR_SEL);
  p11_12b->tooltip("p21 serie");
  p11_12b->cursor_color(TXT_COLOR2);
  p11_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p11b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*5+25,20,20);
  bt_enable_p11b->tooltip("Enable p21 serie");
  bt_enable_p11b->box(BOX_TYPE);
  bt_enable_p11b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p11b->callback(enableCtpp11b_cb);

  bt_enable_p11bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*5+25,20,20);
  bt_enable_p11bCtp->tooltip("Enable p21 counterpoint functions");
  bt_enable_p11bCtp->box(BOX_TYPE);
  bt_enable_p11bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p11bCtp->callback(enable_p11b_cb);

  outP11b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*5+25,HB,CTRL_H,"M");
  outP11b->box(BOX_TYPE);
  outP11b->labelsize(11);
  outP11b->selection_color(FL_GREEN);
  outP11b->labelcolor(FL_RED);
  outP11b->tooltip(MEMO);

  p12_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_1b->textsize(TXT_SIZE);
  p12_1b->box(BOX_TYPE3);
  p12_1b->align(FL_ALIGN_TOP_LEFT);
  p12_1b->color(COLOR3);
  p12_1b->textcolor(TXT_COLOR);
  p12_1b->selection_color(COLOR_SEL);
  p12_1b->labelcolor(CTRL_LABEL_COLOR);
  p12_1b->tooltip("p22 serie");
  p12_1b->cursor_color(TXT_COLOR2);
  p12_1b->textfont(IN_TEXT_FONTS);

  p12_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_2b->box(BOX_TYPE3);
  p12_2b->textsize(TXT_SIZE);
  p12_2b->color(COLOR3);
  p12_2b->textcolor(TXT_COLOR);
  p12_2b->selection_color(COLOR_SEL);
  p12_2b->tooltip("p22 serie");
  p12_2b->cursor_color(TXT_COLOR2);
  p12_2b->textfont(IN_TEXT_FONTS);

  p12_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_3b->box(BOX_TYPE3);
  p12_3b->textsize(TXT_SIZE);
  p12_3b->color(COLOR3);
  p12_3b->textcolor(TXT_COLOR);
  p12_3b->selection_color(COLOR_SEL);
  p12_3b->tooltip("p22 serie");
  p12_3b->cursor_color(TXT_COLOR2);
  p12_3b->textfont(IN_TEXT_FONTS);

  p12_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_4b->box(BOX_TYPE3);
  p12_4b->textsize(TXT_SIZE);
  p12_4b->color(COLOR3);
  p12_4b->textcolor(TXT_COLOR);
  p12_4b->selection_color(COLOR_SEL);
  p12_4b->tooltip("p22 serie");
  p12_4b->cursor_color(TXT_COLOR2);
  p12_4b->textfont(IN_TEXT_FONTS);

  p12_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_5b->box(BOX_TYPE3);
  p12_5b->textsize(TXT_SIZE);
  p12_5b->color(COLOR3);
  p12_5b->textcolor(TXT_COLOR);
  p12_5b->selection_color(COLOR_SEL);
  p12_5b->tooltip("p22 serie");
  p12_5b->cursor_color(TXT_COLOR2);
  p12_5b->textfont(IN_TEXT_FONTS);

  p12_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_6b->box(BOX_TYPE3);
  p12_6b->textsize(TXT_SIZE);
  p12_6b->color(COLOR3);
  p12_6b->textcolor(TXT_COLOR);
  p12_6b->selection_color(COLOR_SEL);
  p12_6b->tooltip("p22 serie");
  p12_6b->cursor_color(TXT_COLOR2);
  p12_6b->textfont(IN_TEXT_FONTS);

  p12_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_7b->box(BOX_TYPE3);
  p12_7b->textsize(TXT_SIZE);
  p12_7b->color(COLOR3);
  p12_7b->textcolor(TXT_COLOR);
  p12_7b->selection_color(COLOR_SEL);
  p12_7b->tooltip("p22 serie");
  p12_7b->cursor_color(TXT_COLOR2);
  p12_7b->textfont(IN_TEXT_FONTS);

  p12_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_8b->box(BOX_TYPE3);
  p12_8b->textsize(TXT_SIZE);
  p12_8b->color(COLOR3);
  p12_8b->textcolor(TXT_COLOR);
  p12_8b->selection_color(COLOR_SEL);
  p12_8b->tooltip("p22 serie");
  p12_8b->cursor_color(TXT_COLOR2);
  p12_8b->textfont(IN_TEXT_FONTS);

  p12_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_9b->box(BOX_TYPE3);
  p12_9b->textsize(TXT_SIZE);
  p12_9b->color(COLOR3);
  p12_9b->textcolor(TXT_COLOR);
  p12_9b->selection_color(COLOR_SEL);
  p12_9b->tooltip("p22 serie");
  p12_9b->cursor_color(TXT_COLOR2);
  p12_9b->textfont(IN_TEXT_FONTS);

  p12_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_10b->box(BOX_TYPE3);
  p12_10b->textsize(TXT_SIZE);
  p12_10b->color(COLOR3);
  p12_10b->textcolor(TXT_COLOR);
  p12_10b->selection_color(COLOR_SEL);
  p12_10b->tooltip("p22 serie");
  p12_10b->cursor_color(TXT_COLOR2);
  p12_10b->textfont(IN_TEXT_FONTS);

  p12_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_11b->box(BOX_TYPE3);
  p12_11b->textsize(TXT_SIZE);
  p12_11b->color(COLOR3);
  p12_11b->textcolor(TXT_COLOR);
  p12_11b->selection_color(COLOR_SEL);
  p12_11b->tooltip("p22 serie");
  p12_11b->cursor_color(TXT_COLOR2);
  p12_11b->textfont(IN_TEXT_FONTS);

  p12_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*6+30,CTRL_W,CTRL_H);
  p12_12b->box(BOX_TYPE3);
  p12_12b->textsize(TXT_SIZE);
  p12_12b->color(COLOR3);
  p12_12b->textcolor(TXT_COLOR);
  p12_12b->selection_color(COLOR_SEL);
  p12_12b->tooltip("p22 serie");
  p12_12b->cursor_color(TXT_COLOR2);
  p12_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p12b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*6+30,20,20);
  bt_enable_p12b->tooltip("Enable p22 serie");
  bt_enable_p12b->box(BOX_TYPE);
  bt_enable_p12b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p12b->callback(enableCtpp12b_cb);

  bt_enable_p12bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*6+30,20,20);
  bt_enable_p12bCtp->tooltip("Enable p22 counterpoint functions");
  bt_enable_p12bCtp->box(BOX_TYPE);
  bt_enable_p12bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p12bCtp->callback(enable_p12b_cb);

  outP12b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*6+30,HB,CTRL_H,"M");
  outP12b->box(BOX_TYPE);
  outP12b->labelsize(11);
  outP12b->selection_color(FL_GREEN);
  outP12b->labelcolor(FL_RED);
  outP12b->tooltip(MEMO);

  p13_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_1b->textsize(TXT_SIZE);
  p13_1b->box(BOX_TYPE3);
  p13_1b->align(FL_ALIGN_TOP_LEFT);
  p13_1b->color(COLOR3);
  p13_1b->textcolor(TXT_COLOR);
  p13_1b->selection_color(COLOR_SEL);
  p13_1b->labelcolor(CTRL_LABEL_COLOR);
  p13_1b->tooltip("p23 serie");
  p13_1b->cursor_color(TXT_COLOR2);
  p13_1b->textfont(IN_TEXT_FONTS);

  p13_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_2b->box(BOX_TYPE3);
  p13_2b->textsize(TXT_SIZE);
  p13_2b->color(COLOR3);
  p13_2b->textcolor(TXT_COLOR);
  p13_2b->selection_color(COLOR_SEL);
  p13_2b->tooltip("p23 serie");
  p13_2b->cursor_color(TXT_COLOR2);
  p13_2b->textfont(IN_TEXT_FONTS);

  p13_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_3b->box(BOX_TYPE3);
  p13_3b->textsize(TXT_SIZE);
  p13_3b->color(COLOR3);
  p13_3b->textcolor(TXT_COLOR);
  p13_3b->selection_color(COLOR_SEL);
  p13_3b->tooltip("p23 serie");
  p13_3b->cursor_color(TXT_COLOR2);
  p13_3b->textfont(IN_TEXT_FONTS);

  p13_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_4b->box(BOX_TYPE3);
  p13_4b->textsize(TXT_SIZE);
  p13_4b->color(COLOR3);
  p13_4b->textcolor(TXT_COLOR);
  p13_4b->selection_color(COLOR_SEL);
  p13_4b->tooltip("p23 serie");
  p13_4b->cursor_color(TXT_COLOR2);
  p13_4b->textfont(IN_TEXT_FONTS);

  p13_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_5b->box(BOX_TYPE3);
  p13_5b->textsize(TXT_SIZE);
  p13_5b->color(COLOR3);
  p13_5b->textcolor(TXT_COLOR);
  p13_5b->selection_color(COLOR_SEL);
  p13_5b->tooltip("p23 serie");
  p13_5b->cursor_color(TXT_COLOR2);
  p13_5b->textfont(IN_TEXT_FONTS);

  p13_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_6b->box(BOX_TYPE3);
  p13_6b->textsize(TXT_SIZE);
  p13_6b->color(COLOR3);
  p13_6b->textcolor(TXT_COLOR);
  p13_6b->selection_color(COLOR_SEL);
  p13_6b->tooltip("p23 serie");
  p13_6b->cursor_color(TXT_COLOR2);
  p13_6b->textfont(IN_TEXT_FONTS);

  p13_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_7b->box(BOX_TYPE3);
  p13_7b->textsize(TXT_SIZE);
  p13_7b->color(COLOR3);
  p13_7b->textcolor(TXT_COLOR);
  p13_7b->selection_color(COLOR_SEL);
  p13_7b->tooltip("p23 serie");
  p13_7b->cursor_color(TXT_COLOR2);
  p13_7b->textfont(IN_TEXT_FONTS);

  p13_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_8b->box(BOX_TYPE3);
  p13_8b->textsize(TXT_SIZE);
  p13_8b->color(COLOR3);
  p13_8b->textcolor(TXT_COLOR);
  p13_8b->selection_color(COLOR_SEL);
  p13_8b->tooltip("p23 serie");
  p13_8b->cursor_color(TXT_COLOR2);
  p13_8b->textfont(IN_TEXT_FONTS);

  p13_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_9b->box(BOX_TYPE3);
  p13_9b->textsize(TXT_SIZE);
  p13_9b->color(COLOR3);
  p13_9b->textcolor(TXT_COLOR);
  p13_9b->selection_color(COLOR_SEL);
  p13_9b->tooltip("p23 serie");
  p13_9b->cursor_color(TXT_COLOR2);
  p13_9b->textfont(IN_TEXT_FONTS);

  p13_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_10b->box(BOX_TYPE3);
  p13_10b->textsize(TXT_SIZE);
  p13_10b->color(COLOR3);
  p13_10b->textcolor(TXT_COLOR);
  p13_10b->selection_color(COLOR_SEL);
  p13_10b->tooltip("p23 serie");
  p13_10b->cursor_color(TXT_COLOR2);
  p13_10b->textfont(IN_TEXT_FONTS);

  p13_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_11b->box(BOX_TYPE3);
  p13_11b->textsize(TXT_SIZE);
  p13_11b->color(COLOR3);
  p13_11b->textcolor(TXT_COLOR);
  p13_11b->selection_color(COLOR_SEL);
  p13_11b->tooltip("p23 serie");
  p13_11b->cursor_color(TXT_COLOR2);
  p13_11b->textfont(IN_TEXT_FONTS);

  p13_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*7+35,CTRL_W,CTRL_H);
  p13_12b->box(BOX_TYPE3);
  p13_12b->textsize(TXT_SIZE);
  p13_12b->color(COLOR3);
  p13_12b->textcolor(TXT_COLOR);
  p13_12b->selection_color(COLOR_SEL);
  p13_12b->tooltip("p23 serie");
  p13_12b->cursor_color(TXT_COLOR2);
  p13_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p13b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*7+35,20,20);
  bt_enable_p13b->tooltip("Enable p23 serie");
  bt_enable_p13b->box(BOX_TYPE);
  bt_enable_p13b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p13b->callback(enableCtpp13b_cb);

  bt_enable_p13bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*7+35,20,20);
  bt_enable_p13bCtp->tooltip("Enable p23 counterpoint functions");
  bt_enable_p13bCtp->box(BOX_TYPE);
  bt_enable_p13bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p13bCtp->callback(enable_p13b_cb);

  outP13b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*7+35,HB,CTRL_H,"M");
  outP13b->box(BOX_TYPE);
  outP13b->labelsize(11);
  outP13b->selection_color(FL_GREEN);
  outP13b->labelcolor(FL_RED);
  outP13b->tooltip(MEMO);

  p14_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_1b->textsize(TXT_SIZE);
  p14_1b->box(BOX_TYPE3);
  p14_1b->align(FL_ALIGN_TOP_LEFT);
  p14_1b->color(COLOR3);
  p14_1b->textcolor(TXT_COLOR);
  p14_1b->selection_color(COLOR_SEL);
  p14_1b->labelcolor(CTRL_LABEL_COLOR);
  p14_1b->tooltip("p24 serie");
  p14_1b->cursor_color(TXT_COLOR2);
  p14_1b->textfont(IN_TEXT_FONTS);

  p14_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_2b->box(BOX_TYPE3);
  p14_2b->textsize(TXT_SIZE);
  p14_2b->color(COLOR3);
  p14_2b->textcolor(TXT_COLOR);
  p14_2b->selection_color(COLOR_SEL);
  p14_2b->tooltip("p24 serie");
  p14_2b->cursor_color(TXT_COLOR2);
  p14_2b->textfont(IN_TEXT_FONTS);

  p14_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_3b->box(BOX_TYPE3);
  p14_3b->textsize(TXT_SIZE);
  p14_3b->color(COLOR3);
  p14_3b->textcolor(TXT_COLOR);
  p14_3b->selection_color(COLOR_SEL);
  p14_3b->tooltip("p24 serie");
  p14_3b->cursor_color(TXT_COLOR2);
  p14_3b->textfont(IN_TEXT_FONTS);

  p14_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_4b->box(BOX_TYPE3);
  p14_4b->textsize(TXT_SIZE);
  p14_4b->color(COLOR3);
  p14_4b->textcolor(TXT_COLOR);
  p14_4b->selection_color(COLOR_SEL);
  p14_4b->tooltip("p24 serie");
  p14_4b->cursor_color(TXT_COLOR2);
  p14_4b->textfont(IN_TEXT_FONTS);

  p14_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_5b->box(BOX_TYPE3);
  p14_5b->textsize(TXT_SIZE);
  p14_5b->color(COLOR3);
  p14_5b->textcolor(TXT_COLOR);
  p14_5b->selection_color(COLOR_SEL);
  p14_5b->tooltip("p24 serie");
  p14_5b->cursor_color(TXT_COLOR2);
  p14_5b->textfont(IN_TEXT_FONTS);

  p14_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_6b->box(BOX_TYPE3);
  p14_6b->textsize(TXT_SIZE);
  p14_6b->color(COLOR3);
  p14_6b->textcolor(TXT_COLOR);
  p14_6b->selection_color(COLOR_SEL);
  p14_6b->tooltip("p24 serie");
  p14_6b->cursor_color(TXT_COLOR2);
  p14_6b->textfont(IN_TEXT_FONTS);

  p14_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_7b->box(BOX_TYPE3);
  p14_7b->textsize(TXT_SIZE);
  p14_7b->color(COLOR3);
  p14_7b->textcolor(TXT_COLOR);
  p14_7b->selection_color(COLOR_SEL);
  p14_7b->tooltip("p24 serie");
  p14_7b->cursor_color(TXT_COLOR2);
  p14_7b->textfont(IN_TEXT_FONTS);

  p14_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_8b->box(BOX_TYPE3);
  p14_8b->textsize(TXT_SIZE);
  p14_8b->color(COLOR3);
  p14_8b->textcolor(TXT_COLOR);
  p14_8b->selection_color(COLOR_SEL);
  p14_8b->tooltip("p24 serie");
  p14_8b->cursor_color(TXT_COLOR2);
  p14_8b->textfont(IN_TEXT_FONTS);

  p14_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_9b->box(BOX_TYPE3);
  p14_9b->textsize(TXT_SIZE);
  p14_9b->color(COLOR3);
  p14_9b->textcolor(TXT_COLOR);
  p14_9b->selection_color(COLOR_SEL);
  p14_9b->tooltip("p24 serie");
  p14_9b->cursor_color(TXT_COLOR2);
  p14_9b->textfont(IN_TEXT_FONTS);

  p14_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_10b->box(BOX_TYPE3);
  p14_10b->textsize(TXT_SIZE);
  p14_10b->color(COLOR3);
  p14_10b->textcolor(TXT_COLOR);
  p14_10b->selection_color(COLOR_SEL);
  p14_10b->tooltip("p24 serie");
  p14_10b->cursor_color(TXT_COLOR2);
  p14_10b->textfont(IN_TEXT_FONTS);

  p14_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_11b->box(BOX_TYPE3);
  p14_11b->textsize(TXT_SIZE);
  p14_11b->color(COLOR3);
  p14_11b->textcolor(TXT_COLOR);
  p14_11b->selection_color(COLOR_SEL);
  p14_11b->tooltip("p24 serie");
  p14_11b->cursor_color(TXT_COLOR2);
  p14_11b->textfont(IN_TEXT_FONTS);

  p14_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*8+40,CTRL_W,CTRL_H);
  p14_12b->box(BOX_TYPE3);
  p14_12b->textsize(TXT_SIZE);
  p14_12b->color(COLOR3);
  p14_12b->textcolor(TXT_COLOR);
  p14_12b->selection_color(COLOR_SEL);
  p14_12b->tooltip("p24 serie");
  p14_12b->cursor_color(TXT_COLOR2);
  p14_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p14b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*8+40,20,20);
  bt_enable_p14b->tooltip("Enable p24 serie");
  bt_enable_p14b->box(BOX_TYPE);
  bt_enable_p14b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p14b->callback(enableCtpp14b_cb);

  bt_enable_p14bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*8+40,20,20);
  bt_enable_p14bCtp->tooltip("Enable p24 counterpoint functions");
  bt_enable_p14bCtp->box(BOX_TYPE);
  bt_enable_p14bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p14bCtp->callback(enable_p14b_cb);

  outP14b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*8+40,HB,CTRL_H,"M");
  outP14b->box(BOX_TYPE);
  outP14b->labelsize(11);
  outP14b->selection_color(FL_GREEN);
  outP14b->labelcolor(FL_RED);
  outP14b->tooltip(MEMO);

  p15_1b = new Fl_Value_Input(CTRL_L5,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_1b->textsize(TXT_SIZE);
  p15_1b->box(BOX_TYPE3);
  p15_1b->align(FL_ALIGN_TOP_LEFT);
  p15_1b->color(COLOR3);
  p15_1b->textcolor(TXT_COLOR);
  p15_1b->selection_color(COLOR_SEL);
  p15_1b->labelcolor(CTRL_LABEL_COLOR);
  p15_1b->tooltip("p25 serie");
  p15_1b->cursor_color(TXT_COLOR2);
  p15_1b->textfont(IN_TEXT_FONTS);

  p15_2b = new Fl_Value_Input(CTRL_L4+CTRL_W,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_2b->box(BOX_TYPE3);
  p15_2b->textsize(TXT_SIZE);
  p15_2b->color(COLOR3);
  p15_2b->textcolor(TXT_COLOR);
  p15_2b->selection_color(COLOR_SEL);
  p15_2b->tooltip("p25 serie");
  p15_2b->cursor_color(TXT_COLOR2);
  p15_2b->textfont(IN_TEXT_FONTS);

  p15_3b = new Fl_Value_Input(CTRL_L4+CTRL_W*2,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_3b->box(BOX_TYPE3);
  p15_3b->textsize(TXT_SIZE);
  p15_3b->color(COLOR3);
  p15_3b->textcolor(TXT_COLOR);
  p15_3b->selection_color(COLOR_SEL);
  p15_3b->tooltip("p25 serie");
  p15_3b->cursor_color(TXT_COLOR2);
  p15_3b->textfont(IN_TEXT_FONTS);

  p15_4b = new Fl_Value_Input(CTRL_L4+CTRL_W*3,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_4b->box(BOX_TYPE3);
  p15_4b->textsize(TXT_SIZE);
  p15_4b->color(COLOR3);
  p15_4b->textcolor(TXT_COLOR);
  p15_4b->selection_color(COLOR_SEL);
  p15_4b->tooltip("p25 serie");
  p15_4b->cursor_color(TXT_COLOR2);
  p15_4b->textfont(IN_TEXT_FONTS);

  p15_5b = new Fl_Value_Input(CTRL_L4+CTRL_W*4,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_5b->box(BOX_TYPE3);
  p15_5b->textsize(TXT_SIZE);
  p15_5b->color(COLOR3);
  p15_5b->textcolor(TXT_COLOR);
  p15_5b->selection_color(COLOR_SEL);
  p15_5b->tooltip("p25 serie");
  p15_5b->cursor_color(TXT_COLOR2);
  p15_5b->textfont(IN_TEXT_FONTS);

  p15_6b = new Fl_Value_Input(CTRL_L4+CTRL_W*5,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_6b->box(BOX_TYPE3);
  p15_6b->textsize(TXT_SIZE);
  p15_6b->color(COLOR3);
  p15_6b->textcolor(TXT_COLOR);
  p15_6b->selection_color(COLOR_SEL);
  p15_6b->tooltip("p25 serie");
  p15_6b->cursor_color(TXT_COLOR2);
  p15_6b->textfont(IN_TEXT_FONTS);

  p15_7b = new Fl_Value_Input(CTRL_L4+CTRL_W*6,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_7b->box(BOX_TYPE3);
  p15_7b->textsize(TXT_SIZE);
  p15_7b->color(COLOR3);
  p15_7b->textcolor(TXT_COLOR);
  p15_7b->selection_color(COLOR_SEL);
  p15_7b->tooltip("p25 serie");
  p15_7b->cursor_color(TXT_COLOR2);
  p15_7b->textfont(IN_TEXT_FONTS);

  p15_8b = new Fl_Value_Input(CTRL_L4+CTRL_W*7,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_8b->box(BOX_TYPE3);
  p15_8b->textsize(TXT_SIZE);
  p15_8b->color(COLOR3);
  p15_8b->textcolor(TXT_COLOR);
  p15_8b->selection_color(COLOR_SEL);
  p15_8b->tooltip("p25 serie");
  p15_8b->cursor_color(TXT_COLOR2);
  p15_8b->textfont(IN_TEXT_FONTS);

  p15_9b = new Fl_Value_Input(CTRL_L4+CTRL_W*8,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_9b->box(BOX_TYPE3);
  p15_9b->textsize(TXT_SIZE);
  p15_9b->color(COLOR3);
  p15_9b->textcolor(TXT_COLOR);
  p15_9b->selection_color(COLOR_SEL);
  p15_9b->tooltip("p25 serie");
  p15_9b->cursor_color(TXT_COLOR2);
  p15_9b->textfont(IN_TEXT_FONTS);

  p15_10b = new Fl_Value_Input(CTRL_L4+CTRL_W*9,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_10b->box(BOX_TYPE3);
  p15_10b->textsize(TXT_SIZE);
  p15_10b->color(COLOR3);
  p15_10b->textcolor(TXT_COLOR);
  p15_10b->selection_color(COLOR_SEL);
  p15_10b->tooltip("p25 serie");
  p15_10b->cursor_color(TXT_COLOR2);
  p15_10b->textfont(IN_TEXT_FONTS);

  p15_11b = new Fl_Value_Input(CTRL_L4+CTRL_W*10,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_11b->box(BOX_TYPE3);
  p15_11b->textsize(TXT_SIZE);
  p15_11b->color(COLOR3);
  p15_11b->textcolor(TXT_COLOR);
  p15_11b->selection_color(COLOR_SEL);
  p15_11b->tooltip("p25 serie");
  p15_11b->cursor_color(TXT_COLOR2);
  p15_11b->textfont(IN_TEXT_FONTS);

  p15_12b = new Fl_Value_Input(CTRL_L4+CTRL_W*11,ADD_TOP2+CTRL_H*9+45,CTRL_W,CTRL_H);
  p15_12b->box(BOX_TYPE3);
  p15_12b->textsize(TXT_SIZE);
  p15_12b->color(COLOR3);
  p15_12b->textcolor(TXT_COLOR);
  p15_12b->selection_color(COLOR_SEL);
  p15_12b->tooltip("p25 serie");
  p15_12b->cursor_color(TXT_COLOR2);
  p15_12b->textfont(IN_TEXT_FONTS);

  bt_enable_p15b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+15,ADD_TOP2+CTRL_H*9+45,20,20);
  bt_enable_p15b->tooltip("Enable p25 serie");
  bt_enable_p15b->box(BOX_TYPE);
  bt_enable_p15b->selection_color(E_BUTTTON_COLOR);
  bt_enable_p15b->callback(enableCtpp15b_cb);

  bt_enable_p15bCtp = new Fl_Light_Button(CTRL_L4+CTRL_W*12+45,ADD_TOP2+CTRL_H*9+45,20,20);
  bt_enable_p15bCtp->tooltip("Enable p25 counterpoint functions");
  bt_enable_p15bCtp->box(BOX_TYPE);
  bt_enable_p15bCtp->selection_color(E_BUTTTON_COLOR);
  bt_enable_p15bCtp->callback(enable_p15b_cb);

  outP15b = new Fl_Light_Button(CTRL_L4+CTRL_W*12+75,ADD_TOP2+CTRL_H*9+45,HB,CTRL_H,"M");
  outP15b->box(BOX_TYPE);
  outP15b->labelsize(11);
  outP15b->selection_color(FL_GREEN);
  outP15b->labelcolor(FL_RED);
  outP15b->tooltip(MEMO);

  Fl_Button *btParamsAritmb = new Fl_Button(CTRL_W*9+30,CTRL_T+(ADD_TOP-125)+350,60,25,"Func.");
  btParamsAritmb->labelcolor(FL_RED);
  btParamsAritmb->box(BOX_TYPE);
  btParamsAritmb->labeltype(BT_LABEL_TYPE);
  btParamsAritmb->labelsize(14);
  btParamsAritmb->callback(makeWin_IncDecSParamsb_cb);

  Fl_Button *closeWparamb = new Fl_Button(CTRL_W*10+45,CTRL_T+(ADD_TOP-125)+350,60,25,"CLOSE");
  closeWparamb->callback(closeWparamsb_cb);
  closeWparamb->labelcolor(FL_RED);
  closeWparamb->box(BOX_TYPE);
  closeWparamb->labeltype(BT_LABEL_TYPE);
  closeWparamb->labelsize(14);
  
  readPrefsSerieParams2();
  winParamnb->end();
  winParamnb->show();
}

void makeWinParamsb_cb(Fl_Widget*,void*)
{
  loadMoreParams2 = 1;
    makeWinParamsb();
}

void closeWparamsb_cb(Fl_Widget*,void*)
{
    winParamnb->redraw();
    writePrefsSerieParams2();
    winParamnb->hide();
}

