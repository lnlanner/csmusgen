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
char header_22050_mono[] = "sr=22050\nkr=2205\nksmps=10\nnchnls=1";
void insert_header22050mo_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, header_22050_mono);
}

char header_22050_stereo[] = "sr=22050\nkr=2205\nksmps=10\nnchnls=2";
void insert_header22050ste_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, header_22050_stereo);
}

char header_44100_mono[] = "sr=44100\nkr=4410\nksmps=10\nnchnls=1";
void insert_header44100mo_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, header_44100_mono);
}

char header_44100_stereo[] = "sr=44100\nkr=4410\nksmps=10\nnchnls=2";
void insert_header44100ste_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, header_44100_stereo);
}

char header_48000_mono[] = "sr=48000\nkr=4800\nksmps=10\nnchnls=1";
void insert_header48000mo_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, header_48000_mono);
}

char header_48000_stereo[] = "sr=48000\nkr=4800\nksmps=10\nnchnls=2";
void insert_header48000ste_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, header_48000_stereo);
}

char conversions[] = "ifrq = cpspch(p5)\niamp = ampdb(p4)";
void insert_conversions_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, conversions);
}

/////////////////////

char gen01[] = "f1 0 0 1 \"file.wav\" 0 0 0";
void insert_gen01_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen01);
}

char gen02[] = "f1  0  16  -2 0 1 2 3 4 5 6 7 8 9 10 11 0";
void insert_gen02_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen02);
}

char gen03[] = "f1  0  1025  3  -1 1 5 4 3 2 2 1 gen03";
void insert_gen03_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen03);
}

char gen04[] = "f1  0  512  4 1 1";
void insert_gen04_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen04);
}

char gen06[] = "f1  0  65  6  0  16  .5  16  1  16  0  16  -1";
void insert_gen06_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen06);
}

char gen07[] = "f1  0  256  7  0  128  1  0  -1  128  0";
void insert_gen07_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen07);
}

char gen08[] = "f1  0  65  8  0  16  0  16  1  16  0 16  0";
void insert_gen08_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen08);
}

char gen09[] = "f1  0  1024   9  1   3    0  3  1  0  9  .3333  180";
void insert_gen09_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen09);
}

char gen10[] = "f1  0 4096 10 1";
void insert_gen10_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen10);
}

char gen11[] = "f1  0  2049   11  4  1  1";
void insert_gen11_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen11);
}

char gen12[] = "f1  0  2049  -12  20";
void insert_gen12_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen12);
}

char gen13[] = "f1  0  1025  13  1  1  0  5  0  3  0  1";
void insert_gen13_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen13);
}

char gen15[] = "f#  time  size  15  xint  xamp  h0  phs0 h1  phs1  h2  phs2  .  .  .";
void insert_gen15_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen15);
}

char gen17[] = "f  1  0  128  -17   0  1   12  2   24  3   36  4   48  5  60  6   72  7   84  8";
void insert_gen17_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen17);
}

char gen19[] = "f1  0  1024  19  .5  1  270  1";
void insert_gen19_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen19);
}

char gen20[] = "f 1  0   8192    20   1    1";
void insert_gen20_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen20);
}

char gen23[] = "f  #  time   size  -23   \"filename.txt\"";
void insert_gen23_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen23);
}

char gen25[] = "f 1 0 257 25 0 0.001 100 1 200 .001 256 0.001";
void insert_gen25_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen25);
}

char gen27[] = "f 1 0 257 27 0 0 100 1 200 -1 256 0";
void insert_gen27_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen27);
}

char gen28[] = "f 1  0  0  28  \"move\"";
void insert_gen28_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, gen28);
}

char cs_tags[] = "<CsoundSynthesizer>\n<CsOptions>\n -o myfile.wav -W\n</CsOptions>\n<CsInstruments>\n</CsInstruments>\n<CsScore>\n</CsScore>";
void insert_cstags_cb(Fl_Widget*,void* v)
{
EditorWindow* e = (EditorWindow*) v;
int pos = e->editor->insert_position();
textbuf->insert(pos, cs_tags);
}

