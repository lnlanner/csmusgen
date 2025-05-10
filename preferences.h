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
void readPrefs() {
int boolValue;
int intValue;
char buffer[80];
char buffer2[256];
double doubleValue;

Fl_Preferences app( Fl_Preferences::USER, dataPath->value(), txt_seriePath->value() );

char path[ FL_PATH_MAX ];
app.getUserdataPath( path, sizeof(path) );

////
    Fl_Preferences cs_cmLine( app, "cs_cmLine");
    cs_cmLine.get( "cs_cmLine", buffer2, "../cs423f13/csound -W -o ../orcsco/csmusgen.wav ../orcsco/csmusgen.orc ../orcsco/csmusgen.sco &", 255);
    csLine->value(buffer2);

    Fl_Preferences wav_cmLine( app, "wav_cmLine");
    wav_cmLine.get( "wav_cmLine", buffer2, "kaboodle ../orcsco/csmusgen.wav", 159);
    wavLine->value(buffer2);
    
    Fl_Preferences data_Path( app, "data_Path");
    data_Path.get( "data_Path", buffer, "../orcsco/csmusgen.txt", 79);
    outData->value(buffer);

    Fl_Preferences sco_Path( app, "sco_Path");
    sco_Path.get( "sco_Path", buffer, "../orcsco/csmusgen.sco", 79);
    scoPath->value(buffer);

    Fl_Preferences orc_Path( app, "orc_Path");
    orc_Path.get( "orc_Path", buffer, "../orcsco/csmusgen.orc", 79);
    orcPath->value(buffer);

    Fl_Preferences serie_Name( app, "serie_Name");
    serie_Name.get( "serie_Name", buffer, "no label", 79);
    serieName->value(buffer);
/////
    
 }
 
void readPrefsSerie()
{
int intValue;
double doubleValue;

Fl_Preferences app( Fl_Preferences::USER, dataPath->value(), txt_seriePath->value() );

char path[ FL_PATH_MAX ];
app.getUserdataPath( path, sizeof(path) );

    Fl_Preferences a_val( app, "a_val");
    a_val.get("a_val", intValue, 0);
    logic_a->value(intValue);

    Fl_Preferences b_val( app, "b_val");
    b_val.get("b_val", intValue, 0);
    logic_b->value(intValue);

    Fl_Preferences c_val( app, "c_val");
    c_val.get("c_val", intValue, 0);
    logic_c->value(intValue);

    Fl_Preferences inw( app, "inw");
    inw.get( "inw", doubleValue, 0.125);
    in_w->value(doubleValue);

    Fl_Preferences inx( app, "inx");
    inx.get( "inx", doubleValue, 0.25);
    in_x->value(doubleValue);

    Fl_Preferences iny( app, "iny");
    iny.get( "iny", doubleValue, 0.5);
    in_y->value(doubleValue);

    Fl_Preferences inz( app, "inz");
    inz.get( "inz", doubleValue, 1);
    in_z->value(doubleValue);

    Fl_Preferences minPch( app, "minPch");
    minPch.get("minPch", intValue, 0);
    min_pch->value(intValue);

    Fl_Preferences maxPch( app, "maxPch");
    maxPch.get("maxPch", intValue, 83);
    max_pch->value(intValue);

    Fl_Preferences mindur( app, "mindur");
    mindur.get("mindur", intValue, 0);
    min_dur->value(intValue);

    Fl_Preferences maxdur( app, "maxdur");
    maxdur.get("maxdur", intValue, 28);
    max_dur->value(intValue);

    Fl_Preferences mindb( app, "mindb");
    mindb.get("mindb", intValue, 0);
    min_db->value(intValue);

    Fl_Preferences maxdb( app, "maxdb");
    maxdb.get("maxdb", intValue, 79);
    max_db->value(intValue);

    Fl_Preferences mininstr( app, "mininstr");
    mininstr.get("mininstr", intValue, 0 );
    min_instr->value(intValue);

    Fl_Preferences maxinstr( app, "maxinstr");
    maxinstr.get("maxinstr", intValue, 23);
    max_instr->value(intValue);

    /////MEMO SERIE///
    Fl_Preferences pitch1( app, "pitch1");
    pitch1.get("pitch1", doubleValue, 8 );
    pch_1->value(doubleValue);

    Fl_Preferences pitch2( app, "pitch2");
    pitch2.get("pitch2", doubleValue, 8 );
    pch_2->value(doubleValue);

    Fl_Preferences pitch3( app, "pitch3");
    pitch3.get("pitch3", doubleValue, 8 );
    pch_3->value(doubleValue);

    Fl_Preferences pitch4( app, "pitch4");
    pitch4.get("pitch4", doubleValue, 8 );
    pch_4->value(doubleValue);

    Fl_Preferences pitch5( app, "pitch5");
    pitch5.get("pitch5", doubleValue, 8 );
    pch_5->value(doubleValue);

    Fl_Preferences pitch6( app, "pitch6");
    pitch6.get("pitch6", doubleValue, 8 );
    pch_6->value(doubleValue);

    Fl_Preferences pitch7( app, "pitch7");
    pitch7.get("pitch7", doubleValue, 8 );
    pch_7->value(doubleValue);

    Fl_Preferences pitch8( app, "pitch8");
    pitch8.get("pitch8", doubleValue, 8 );
    pch_8->value(doubleValue);

    Fl_Preferences pitch9( app, "pitch9");
    pitch9.get("pitch9", doubleValue, 8 );
    pch_9->value(doubleValue);

    Fl_Preferences pitch10( app, "pitch10");
    pitch10.get("pitch10", doubleValue, 8 );
    pch_10->value(doubleValue);

    Fl_Preferences pitch11( app, "pitch11");
    pitch11.get("pitch11", doubleValue, 8 );
    pch_11->value(doubleValue);

    Fl_Preferences pitch12( app, "pitch12");
    pitch12.get("pitch12", doubleValue, 8 );
    pch_12->value(doubleValue);
//////////////////////////////////////////////////////
    Fl_Preferences dur1( app, "dur1");
    dur1.get("dur1", doubleValue, 1 );
    dur_1->value(doubleValue);

    Fl_Preferences dur2( app, "dur2");
    dur2.get("dur2", doubleValue, 1 );
    dur_2->value(doubleValue);

    Fl_Preferences dur3( app, "dur3");
    dur3.get("dur3", doubleValue, 1 );
    dur_3->value(doubleValue);

    Fl_Preferences dur4( app, "dur4");
    dur4.get("dur4", doubleValue, 1 );
    dur_4->value(doubleValue);

    Fl_Preferences dur5( app, "dur5");
    dur5.get("dur5", doubleValue, 1 );
    dur_5->value(doubleValue);

    Fl_Preferences dur6( app, "dur6");
    dur6.get("dur6", doubleValue, 1 );
    dur_6->value(doubleValue);

    Fl_Preferences dur7( app, "dur7");
    dur7.get("dur7", doubleValue, 1 );
    dur_7->value(doubleValue);

    Fl_Preferences dur8( app, "dur8");
    dur8.get("dur8", doubleValue, 1 );
    dur_8->value(doubleValue);

    Fl_Preferences dur9( app, "dur9");
    dur9.get("dur9", doubleValue, 1 );
    dur_9->value(doubleValue);

    Fl_Preferences dur10( app, "dur10");
    dur10.get("dur10", doubleValue, 1 );
    dur_10->value(doubleValue);

    Fl_Preferences dur11( app, "dur11");
    dur11.get("dur11", doubleValue, 1 );
    dur_11->value(doubleValue);

    Fl_Preferences dur12( app, "dur12");
    dur12.get("dur12", doubleValue, 1 );
    dur_12->value(doubleValue);
//////////////////////////////////////////////////////
    Fl_Preferences db1( app, "db1");
    db1.get("db1", doubleValue, 70 );
    db_1->value(doubleValue);

    Fl_Preferences db2( app, "db2");
    db2.get("db2", doubleValue, 70 );
    db_2->value(doubleValue);

    Fl_Preferences db3( app, "db3");
    db3.get("db3", doubleValue, 70 );
    db_3->value(doubleValue);

    Fl_Preferences db4( app, "db4");
    db4.get("db4", doubleValue, 70 );
    db_4->value(doubleValue);

    Fl_Preferences db5( app, "db5");
    db5.get("db5", doubleValue, 70 );
    db_5->value(doubleValue);

    Fl_Preferences db6( app, "db6");
    db6.get("db6", doubleValue, 70 );
    db_6->value(doubleValue);

    Fl_Preferences db7( app, "db7");
    db7.get("db7", doubleValue, 70 );
    db_7->value(doubleValue);

    Fl_Preferences db8( app, "db8");
    db8.get("db8", doubleValue, 70 );
    db_8->value(doubleValue);

    Fl_Preferences db9( app, "db9");
    db9.get("db9", doubleValue, 70 );
    db_9->value(doubleValue);

    Fl_Preferences db10( app, "db10");
    db10.get("db10", doubleValue, 70 );
    db_10->value(doubleValue);

    Fl_Preferences db11( app, "db11");
    db11.get("db11", doubleValue, 70 );
    db_11->value(doubleValue);

    Fl_Preferences db12( app, "db12");
    db12.get("db12", doubleValue, 70 );
    db_12->value(doubleValue);
//////////////////////////////////////////////////////
    Fl_Preferences instr1( app, "instr1");
    instr1.get("instr1", doubleValue, 1 );
    instr_1->value(doubleValue);

    Fl_Preferences instr2( app, "instr2");
    instr2.get("instr2", doubleValue, 1 );
    instr_2->value(doubleValue);

    Fl_Preferences instr3( app, "instr3");
    instr3.get("instr3", doubleValue, 1 );
    instr_3->value(doubleValue);

    Fl_Preferences instr4( app, "instr4");
    instr4.get("instr4", doubleValue, 1 );
    instr_4->value(doubleValue);

    Fl_Preferences instr5( app, "instr5");
    instr5.get("instr5", doubleValue, 1 );
    instr_5->value(doubleValue);

    Fl_Preferences instr6( app, "instr6");
    instr6.get("instr6", doubleValue, 1 );
    instr_6->value(doubleValue);

    Fl_Preferences instr7( app, "instr7");
    instr7.get("instr7", doubleValue, 1 );
    instr_7->value(doubleValue);

    Fl_Preferences instr8( app, "instr8");
    instr8.get("instr8", doubleValue, 1 );
    instr_8->value(doubleValue);

    Fl_Preferences instr9( app, "instr9");
    instr9.get("instr9", doubleValue, 1 );
    instr_9->value(doubleValue);

    Fl_Preferences instr10( app, "instr10");
    instr10.get("instr10", doubleValue, 1 );
    instr_10->value(doubleValue);

    Fl_Preferences instr11( app, "instr11");
    instr11.get("instr11", doubleValue, 1 );
    instr_11->value(doubleValue);

    Fl_Preferences instr12( app, "instr12");
    instr12.get("instr12", doubleValue, 1 );
    instr_12->value(doubleValue);

//////////////////////////////////////////////////////
    Fl_Preferences act1( app, "act1");
    act1.get("act1", doubleValue, 1 );
    act_1->value(doubleValue);

    Fl_Preferences act2( app, "act2");
    act2.get("act2", doubleValue, 1 );
    act_2->value(doubleValue);

    Fl_Preferences act3( app, "act3");
    act3.get("act3", doubleValue, 1 );
    act_3->value(doubleValue);

    Fl_Preferences act4( app, "act4");
    act4.get("act4", doubleValue, 1 );
    act_4->value(doubleValue);

    Fl_Preferences act5( app, "act5");
    act5.get("act5", doubleValue, 1 );
    act_5->value(doubleValue);

    Fl_Preferences act6( app, "act6");
    act6.get("act6", doubleValue, 1 );
    act_6->value(doubleValue);

    Fl_Preferences act7( app, "act7");
    act7.get("act7", doubleValue, 1 );
    act_7->value(doubleValue);

    Fl_Preferences act8( app, "act8");
    act8.get("act8", doubleValue, 1 );
    act_8->value(doubleValue);

    Fl_Preferences act9( app, "act9");
    act9.get("act9", doubleValue, 1 );
    act_9->value(doubleValue);

    Fl_Preferences act10( app, "act10");
    act10.get("act10", doubleValue, 1 );
    act_10->value(doubleValue);

    Fl_Preferences act11( app, "act11");
    act11.get("act11", doubleValue, 1 );
    act_11->value(doubleValue);

    Fl_Preferences act12( app, "act12");
    act12.get("act12", doubleValue, 1 );
    act_12->value(doubleValue);

}

void writePrefs() {

Fl_Preferences app( Fl_Preferences::USER, dataPath->value(), txt_seriePath->value() );

   Fl_Preferences a_val( app, "a_val" );
     a_val.set("a_val", logic_a->value() ); 

   Fl_Preferences b_val( app, "b_val" );
     b_val.set("b_val", logic_b->value() ); 

   Fl_Preferences c_val( app, "c_val" );
     c_val.set("c_val", logic_c->value() ); 

   Fl_Preferences inw( app, "inw" );
     inw.set("inw", in_w->value() );

   Fl_Preferences inx( app, "inx" );
     inx.set("inx", in_x->value() );

   Fl_Preferences iny( app, "iny" );
     iny.set("iny", in_y->value() );

   Fl_Preferences inz( app, "inz" );
     inz.set("inz", in_z->value() );
/*/////////////////////////////////////////////////////////////*/

   Fl_Preferences cs_cmLine( app, "cs_cmLine" );
     cs_cmLine.set("cs_cmLine", csLine->value() );

   Fl_Preferences wav_cmLine( app, "wav_cmLine" );
     wav_cmLine.set("wav_cmLine", wavLine->value() );

   Fl_Preferences data_Path( app, "data_Path" );
     data_Path.set("data_Path", outData->value() );

   Fl_Preferences orc_Path( app, "orc_Path" );
     orc_Path.set("orc_Path", orcPath->value() );

   Fl_Preferences sco_Path( app, "sco_Path" );
     sco_Path.set("sco_Path", scoPath->value() );

   Fl_Preferences serie_Name( app, "serie_Name" );
     serie_Name.set("serie_Name", serieName->value() );

/*/////////////////////////////////////////////////////////////*/
   Fl_Preferences minPch( app, "minPch" );
     minPch.set("minPch", min_pch->value() );

   Fl_Preferences maxPch( app, "maxPch" );
     maxPch.set("maxPch", max_pch->value() );

   Fl_Preferences mindur( app, "mindur" );
     mindur.set("mindur", min_dur->value() );

   Fl_Preferences maxdur( app, "maxdur" );
     maxdur.set("maxdur", max_dur->value() );

   Fl_Preferences mindb( app, "mindb" );
     mindb.set("mindb", min_db->value() );

   Fl_Preferences maxdb( app, "maxdb" );
     maxdb.set("maxdb", max_db->value() );

   Fl_Preferences mininstr( app, "mininstr" );
     mininstr.set("mininstr", min_instr->value() );

   Fl_Preferences maxinstr( app, "maxinstr" );
     maxinstr.set("maxinstr", max_instr->value() );

   Fl_Preferences pitch1( app, "pitch1" );
     pitch1.set("pitch1", pch_1->value() );

   Fl_Preferences pitch2( app, "pitch2" );
     pitch2.set("pitch2", pch_2->value() );

   Fl_Preferences pitch3( app, "pitch3" );
     pitch3.set("pitch3", pch_3->value() );

   Fl_Preferences pitch4( app, "pitch4" );
     pitch4.set("pitch4", pch_4->value() );

   Fl_Preferences pitch5( app, "pitch5" );
     pitch5.set("pitch5", pch_5->value() );

   Fl_Preferences pitch6( app, "pitch6" );
     pitch6.set("pitch6", pch_6->value() );

   Fl_Preferences pitch7( app, "pitch7" );
     pitch7.set("pitch7", pch_7->value() );

   Fl_Preferences pitch8( app, "pitch8" );
     pitch8.set("pitch8", pch_8->value() );

   Fl_Preferences pitch9( app, "pitch9" );
     pitch9.set("pitch9", pch_9->value() );

   Fl_Preferences pitch10( app, "pitch10" );
     pitch10.set("pitch10", pch_10->value() );

   Fl_Preferences pitch11( app, "pitch11" );
     pitch11.set("pitch11", pch_11->value() );

   Fl_Preferences pitch12( app, "pitch12" );
     pitch12.set("pitch12", pch_12->value() );
//////////////////////////////////////////////////////
   Fl_Preferences dur1( app, "dur1" );
     dur1.set("dur1", dur_1->value() );

   Fl_Preferences dur2( app, "dur2" );
     dur2.set("dur2", dur_2->value() );

   Fl_Preferences dur3( app, "dur3" );
     dur3.set("dur3", dur_3->value() );

   Fl_Preferences dur4( app, "dur4" );
     dur4.set("dur4", dur_4->value() );

   Fl_Preferences dur5( app, "dur5" );
     dur5.set("dur5", dur_5->value() );

   Fl_Preferences dur6( app, "dur6" );
     dur6.set("dur6", dur_6->value() );

   Fl_Preferences dur7( app, "dur7" );
     dur7.set("dur7", dur_7->value() );

   Fl_Preferences dur8( app, "dur8" );
     dur8.set("dur8", dur_8->value() );

   Fl_Preferences dur9( app, "dur9" );
     dur9.set("dur9", dur_9->value() );

   Fl_Preferences dur10( app, "dur10" );
     dur10.set("dur10", dur_10->value() );

   Fl_Preferences dur11( app, "dur11" );
     dur11.set("dur11", dur_11->value() );

   Fl_Preferences dur12( app, "dur12" );
     dur12.set("dur12", dur_12->value() );
//////////////////////////////////////
   Fl_Preferences db1( app, "db1" );
     db1.set("db1", db_1->value() );

   Fl_Preferences db2( app, "db2" );
     db2.set("db2", db_2->value() );

   Fl_Preferences db3( app, "db3" );
     db3.set("db3", db_3->value() );

   Fl_Preferences db4( app, "db4" );
     db4.set("db4", db_4->value() );

   Fl_Preferences db5( app, "db5" );
     db5.set("db5", db_5->value() );

   Fl_Preferences db6( app, "db6" );
     db6.set("db6", db_6->value() );

   Fl_Preferences db7( app, "db7" );
     db7.set("db7", db_7->value() );

   Fl_Preferences db8( app, "db8" );
     db8.set("db8", db_8->value() );

   Fl_Preferences db9( app, "db9" );
     db9.set("db9", db_9->value() );

   Fl_Preferences db10( app, "db10" );
     db10.set("db10", db_10->value() );

   Fl_Preferences db11( app, "db11" );
     db11.set("db11", db_11->value() );

   Fl_Preferences db12( app, "db12" );
     db12.set("db12", db_12->value() );

//////////////////////////////////////
   Fl_Preferences instr1( app, "instr1" );
     instr1.set("instr1", instr_1->value() );

   Fl_Preferences instr2( app, "instr2" );
     instr2.set("instr2", instr_2->value() );

   Fl_Preferences instr3( app, "instr3" );
     instr3.set("instr3", instr_3->value() );

   Fl_Preferences instr4( app, "instr4" );
     instr4.set("instr4", instr_4->value() );

   Fl_Preferences instr5( app, "instr5" );
     instr5.set("instr5", instr_5->value() );

   Fl_Preferences instr6( app, "instr6" );
     instr6.set("instr6", instr_6->value() );

   Fl_Preferences instr7( app, "instr7" );
     instr7.set("instr7", instr_7->value() );

   Fl_Preferences instr8( app, "instr8" );
     instr8.set("instr8", instr_8->value() );

   Fl_Preferences instr9( app, "instr9" );
     instr9.set("instr9", instr_9->value() );

   Fl_Preferences instr10( app, "instr10" );
     instr10.set("instr10", instr_10->value() );

   Fl_Preferences instr11( app, "instr11" );
     instr11.set("instr11", instr_11->value() );

   Fl_Preferences instr12( app, "instr12" );
     instr12.set("instr12", instr_12->value() );

//////////////////////////////////////
if (bt_enable_act->value() == 1)
{
   Fl_Preferences act1( app, "act1" );
     act1.set("act1", act_1->value() );

   Fl_Preferences act2( app, "act2" );
     act2.set("act2", act_2->value() );

   Fl_Preferences act3( app, "act3" );
     act3.set("act3", act_3->value() );

   Fl_Preferences act4( app, "act4" );
     act4.set("act4", act_4->value() );

   Fl_Preferences act5( app, "act5" );
     act5.set("act5", act_5->value() );

   Fl_Preferences act6( app, "act6" );
     act6.set("act6", act_6->value() );

   Fl_Preferences act7( app, "act7" );
     act7.set("act7", act_7->value() );

   Fl_Preferences act8( app, "act8" );
     act8.set("act8", act_8->value() );

   Fl_Preferences act9( app, "act9" );
     act9.set("act9", act_9->value() );

   Fl_Preferences act10( app, "act10" );
     act10.set("act10", act_10->value() );

   Fl_Preferences act11( app, "act11" );
     act11.set("act11", act_11->value() );

   Fl_Preferences act12( app, "act12" );
     act12.set("act12", act_12->value() );
   }
}

/////////////////////////////////////////////
void readPrefsColor() {
int intValue;

Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenColor" );

char path[ FL_PATH_MAX ];
app.getUserdataPath( path, sizeof(path) );

    Fl_Preferences last_color( app, "last_color");
    last_color.get( "last_color", intValue, 97);
    COLOR = intValue;
 }

void writePrefsColor() {

Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenColor" );

   Fl_Preferences last_color( app, "last_color" );
     last_color.set("last_color", colorCounter->value() ); 
}

void readPrefsStart() {
int intValue;
char buffer[80];

Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenStart" );

char path[ FL_PATH_MAX ];
app.getUserdataPath( path, sizeof(path) );

    Fl_Preferences start_Group( app, "start_Group");
    start_Group.get( "start_Group", buffer, "csmusgen/Group1", 79);
    dataPath->value(buffer);

    Fl_Preferences start_Series( app, "start_Series");
    start_Series.get( "start_Series", buffer, "serie1", 79);
    txt_seriePath->value(buffer);
    
    Fl_Preferences num_Series( app, "num_Series");
    num_Series.get( "num_Series", intValue, 1);
    out_File->value(intValue);
}


void writePrefsStart() {

Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenStart" );

   Fl_Preferences start_Group( app, "start_Group" );
     start_Group.set("start_Group", dataPath->value() );

   Fl_Preferences start_Series( app, "start_Series" );
     start_Series.set("start_Series", txt_seriePath->value() );

   Fl_Preferences num_Series( app, "num_Series" );
     num_Series.set("num_Series", out_File->value() );


}

/////////////////////////////////////////////////////////

void read_chk_start()
{
Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenStartCheck" );

    Fl_Preferences chk_val( app, "chk_val");
    chk_val.get( "chk_val", check_value, 1);

}

void write_chk_start()
{
Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenStartCheck" );

     Fl_Preferences chk_val( app, "chk_val" );
     chk_val.set("chk_val", chk_show_startwin->value() ); 

}

/////////////////////////////////////////////////////////
void readPrefsHelp() {
int intValue;
char buffer[256];

Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenHelp" );

char path[ FL_PATH_MAX ];
app.getUserdataPath( path, sizeof(path) );

    
    Fl_Preferences help_Path( app, "help_Path");
    help_Path.get( "help_Path", buffer, "", 255);
    helpPath->value(buffer);
    
}

void writePrefsHelp() {

Fl_Preferences app( Fl_Preferences::USER, "csmusgen", "csmusgenHelp" );

   Fl_Preferences help_Path( app, "help_Path" );
     help_Path.set("help_Path", helpPath->value() );
}

void writePrefsHelp_cb(Fl_Widget*,void*)
{
    void writePrefsHelp();
}
