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
void readPrefsSerieParams()
{
int intValue;
double doublevalue;

Fl_Preferences app( Fl_Preferences::USER, dataPath->value(), txt_seriePath->value() );

char path[ FL_PATH_MAX ];
app.getUserdataPath( path, sizeof(path) );

    Fl_Preferences p6_enable_val( app, "p6_enable_val");
    p6_enable_val.get("p6_enable_val", intValue, 0);
    bt_enable_p6->value(intValue);

    Fl_Preferences p6_enable_valCtp( app, "p6_enable_valCtp");
    p6_enable_valCtp.get("p6_enable_valCtp", intValue, 0);
    bt_enable_p6Ctp->value(intValue);

    Fl_Preferences p7_enable_val( app, "p7_enable_val");
    p7_enable_val.get("p7_enable_val", intValue, 0);
    bt_enable_p7->value(intValue);

    Fl_Preferences p7_enable_valCtp( app, "p7_enable_valCtp");
    p7_enable_valCtp.get("p7_enable_valCtp", intValue, 0);
    bt_enable_p7Ctp->value(intValue);

    Fl_Preferences p8_enable_val( app, "p8_enable_val");
    p8_enable_val.get("p8_enable_val", intValue, 0);
    bt_enable_p8->value(intValue);

    Fl_Preferences p8_enable_valCtp( app, "p8_enable_valCtp");
    p8_enable_valCtp.get("p8_enable_valCtp", intValue, 0);
    bt_enable_p8Ctp->value(intValue);

    Fl_Preferences p9_enable_val( app, "p9_enable_val");
    p9_enable_val.get("p9_enable_val", intValue, 0);
    bt_enable_p9->value(intValue);

    Fl_Preferences p9_enable_valCtp( app, "p9_enable_valCtp");
    p9_enable_valCtp.get("p9_enable_valCtp", intValue, 0);
    bt_enable_p9Ctp->value(intValue);

    Fl_Preferences p10_enable_val( app, "p10_enable_val");
    p10_enable_val.get("p10_enable_val", intValue, 0);
    bt_enable_p10->value(intValue);

    Fl_Preferences p10_enable_valCtp( app, "p10_enable_valCtp");
    p10_enable_valCtp.get("p10_enable_valCtp", intValue, 0);
    bt_enable_p10Ctp->value(intValue);

    Fl_Preferences p11_enable_val( app, "p11_enable_val");
    p11_enable_val.get("p11_enable_val", intValue, 0);
    bt_enable_p11->value(intValue);

    Fl_Preferences p11_enable_valCtp( app, "p11_enable_valCtp");
    p11_enable_valCtp.get("p11_enable_valCtp", intValue, 0);
    bt_enable_p11Ctp->value(intValue);

    Fl_Preferences p12_enable_val( app, "p12_enable_val");
    p12_enable_val.get("p12_enable_val", intValue, 0);
    bt_enable_p12->value(intValue);

    Fl_Preferences p12_enable_valCtp( app, "p12_enable_valCtp");
    p12_enable_valCtp.get("p12_enable_valCtp", intValue, 0);
    bt_enable_p12Ctp->value(intValue);

    Fl_Preferences p13_enable_val( app, "p13_enable_val");
    p13_enable_val.get("p13_enable_val", intValue, 0);
    bt_enable_p13->value(intValue);

    Fl_Preferences p13_enable_valCtp( app, "p13_enable_valCtp");
    p13_enable_valCtp.get("p13_enable_valCtp", intValue, 0);
    bt_enable_p13Ctp->value(intValue);

    Fl_Preferences p14_enable_val( app, "p14_enable_val");
    p14_enable_val.get("p14_enable_val", intValue, 0);
    bt_enable_p14->value(intValue);

    Fl_Preferences p14_enable_valCtp( app, "p14_enable_valCtp");
    p14_enable_valCtp.get("p14_enable_valCtp", intValue, 0);
    bt_enable_p14Ctp->value(intValue);

    Fl_Preferences p15_enable_val( app, "p15_enable_val");
    p15_enable_val.get("p15_enable_val", intValue, 0);
    bt_enable_p15->value(intValue);

    Fl_Preferences p15_enable_valCtp( app, "p15_enable_valCtp");
    p15_enable_valCtp.get("p15_enable_valCtp", intValue, 0);
    bt_enable_p15Ctp->value(intValue);

    Fl_Preferences p6_1_val( app, "p6_1_val");
    p6_1_val.get("p6_1_val", doublevalue, 0);
    p6_1->value(doublevalue);

    Fl_Preferences p6_2_val( app, "p6_2_val");
    p6_2_val.get("p6_2_val", doublevalue, 0);
    p6_2->value(doublevalue);

    Fl_Preferences p6_3_val( app, "p6_3_val");
    p6_3_val.get("p6_3_val", doublevalue, 0);
    p6_3->value(doublevalue);

    Fl_Preferences p6_4_val( app, "p6_4_val");
    p6_4_val.get("p6_4_val", doublevalue, 0);
    p6_4->value(doublevalue);

    Fl_Preferences p6_5_val( app, "p6_5_val");
    p6_5_val.get("p6_5_val", doublevalue, 0);
    p6_5->value(doublevalue);

    Fl_Preferences p6_6_val( app, "p6_6_val");
    p6_6_val.get("p6_6_val", doublevalue, 0);
    p6_6->value(doublevalue);

    Fl_Preferences p6_7_val( app, "p6_7_val");
    p6_7_val.get("p6_7_val", doublevalue, 0);
    p6_7->value(doublevalue);

    Fl_Preferences p6_8_val( app, "p6_8_val");
    p6_8_val.get("p6_8_val", doublevalue, 0);
    p6_8->value(doublevalue);

    Fl_Preferences p6_9_val( app, "p6_9_val");
    p6_9_val.get("p6_9_val", doublevalue, 0);
    p6_9->value(doublevalue);

    Fl_Preferences p6_10_val( app, "p6_10_val");
    p6_10_val.get("p6_10_val", doublevalue, 0);
    p6_10->value(doublevalue);

    Fl_Preferences p6_11_val( app, "p6_11_val");
    p6_11_val.get("p6_11_val", doublevalue, 0);
    p6_11->value(doublevalue);

    Fl_Preferences p6_12_val( app, "p6_12_val");
    p6_12_val.get("p6_12_val", doublevalue, 0);
    p6_12->value(doublevalue);

    Fl_Preferences p7_1_val( app, "p7_1_val");
    p7_1_val.get("p7_1_val", doublevalue, 0);
    p7_1->value(doublevalue);

    Fl_Preferences p7_2_val( app, "p7_2_val");
    p7_2_val.get("p7_2_val", doublevalue, 0);
    p7_2->value(doublevalue);

    Fl_Preferences p7_3_val( app, "p7_3_val");
    p7_3_val.get("p7_3_val", doublevalue, 0);
    p7_3->value(doublevalue);

    Fl_Preferences p7_4_val( app, "p7_4_val");
    p7_4_val.get("p7_4_val", doublevalue, 0);
    p7_4->value(doublevalue);

    Fl_Preferences p7_5_val( app, "p7_5_val");
    p7_5_val.get("p7_5_val", doublevalue, 0);
    p7_5->value(doublevalue);

    Fl_Preferences p7_6_val( app, "p7_6_val");
    p7_6_val.get("p7_6_val", doublevalue, 0);
    p7_6->value(doublevalue);

    Fl_Preferences p7_7_val( app, "p7_7_val");
    p7_7_val.get("p7_7_val", doublevalue, 0);
    p7_7->value(doublevalue);

    Fl_Preferences p7_8_val( app, "p7_8_val");
    p7_8_val.get("p7_8_val", doublevalue, 0);
    p7_8->value(doublevalue);

    Fl_Preferences p7_9_val( app, "p7_9_val");
    p7_9_val.get("p7_9_val", doublevalue, 0);
    p7_9->value(doublevalue);

    Fl_Preferences p7_10_val( app, "p7_10_val");
    p7_10_val.get("p7_10_val", doublevalue, 0);
    p7_10->value(doublevalue);

    Fl_Preferences p7_11_val( app, "p7_11_val");
    p7_11_val.get("p7_11_val", doublevalue, 0);
    p7_11->value(doublevalue);

    Fl_Preferences p7_12_val( app, "p7_12_val");
    p7_12_val.get("p7_12_val", doublevalue, 0);
    p7_12->value(doublevalue);

    Fl_Preferences p8_1_val( app, "p8_1_val");
    p8_1_val.get("p8_1_val", doublevalue, 0);
    p8_1->value(doublevalue);

    Fl_Preferences p8_2_val( app, "p8_2_val");
    p8_2_val.get("p8_2_val", doublevalue, 0);
    p8_2->value(doublevalue);

    Fl_Preferences p8_3_val( app, "p8_3_val");
    p8_3_val.get("p8_3_val", doublevalue, 0);
    p8_3->value(doublevalue);

    Fl_Preferences p8_4_val( app, "p8_4_val");
    p8_4_val.get("p8_4_val", doublevalue, 0);
    p8_4->value(doublevalue);

    Fl_Preferences p8_5_val( app, "p8_5_val");
    p8_5_val.get("p8_5_val", doublevalue, 0);
    p8_5->value(doublevalue);

    Fl_Preferences p8_6_val( app, "p8_6_val");
    p8_6_val.get("p8_6_val", doublevalue, 0);
    p8_6->value(doublevalue);

    Fl_Preferences p8_7_val( app, "p8_7_val");
    p8_7_val.get("p8_7_val", doublevalue, 0);
    p8_7->value(doublevalue);

    Fl_Preferences p8_8_val( app, "p8_8_val");
    p8_8_val.get("p8_8_val", doublevalue, 0);
    p8_8->value(doublevalue);

    Fl_Preferences p8_9_val( app, "p8_9_val");
    p8_9_val.get("p8_9_val", doublevalue, 0);
    p8_9->value(doublevalue);

    Fl_Preferences p8_10_val( app, "p8_10_val");
    p8_10_val.get("p8_10_val", doublevalue, 0);
    p8_10->value(doublevalue);

    Fl_Preferences p8_11_val( app, "p8_11_val");
    p8_11_val.get("p8_11_val", doublevalue, 0);
    p8_11->value(doublevalue);

    Fl_Preferences p8_12_val( app, "p8_12_val");
    p8_12_val.get("p8_12_val", doublevalue, 0);
    p8_12->value(doublevalue);

    Fl_Preferences p9_1_val( app, "p9_1_val");
    p9_1_val.get("p9_1_val", doublevalue, 0);
    p9_1->value(doublevalue);

    Fl_Preferences p9_2_val( app, "p9_2_val");
    p9_2_val.get("p9_2_val", doublevalue, 0);
    p9_2->value(doublevalue);

    Fl_Preferences p9_3_val( app, "p9_3_val");
    p9_3_val.get("p9_3_val", doublevalue, 0);
    p9_3->value(doublevalue);

    Fl_Preferences p9_4_val( app, "p9_4_val");
    p9_4_val.get("p9_4_val", doublevalue, 0);
    p9_4->value(doublevalue);

    Fl_Preferences p9_5_val( app, "p9_5_val");
    p9_5_val.get("p9_5_val", doublevalue, 0);
    p9_5->value(doublevalue);

    Fl_Preferences p9_6_val( app, "p9_6_val");
    p9_6_val.get("p9_6_val", doublevalue, 0);
    p9_6->value(doublevalue);

    Fl_Preferences p9_7_val( app, "p9_7_val");
    p9_7_val.get("p9_7_val", doublevalue, 0);
    p9_7->value(doublevalue);

    Fl_Preferences p9_8_val( app, "p9_8_val");
    p9_8_val.get("p9_8_val", doublevalue, 0);
    p9_8->value(doublevalue);

    Fl_Preferences p9_9_val( app, "p9_9_val");
    p9_9_val.get("p9_9_val", doublevalue, 0);
    p9_9->value(doublevalue);

    Fl_Preferences p9_10_val( app, "p9_10_val");
    p9_10_val.get("p9_10_val", doublevalue, 0);
    p9_10->value(doublevalue);

    Fl_Preferences p9_11_val( app, "p9_11_val");
    p9_11_val.get("p9_11_val", doublevalue, 0);
    p9_11->value(doublevalue);

    Fl_Preferences p9_12_val( app, "p9_12_val");
    p9_12_val.get("p9_12_val", doublevalue, 0);
    p9_12->value(doublevalue);

    Fl_Preferences p10_1_val( app, "p10_1_val");
    p10_1_val.get("p10_1_val", doublevalue, 0);
    p10_1->value(doublevalue);

    Fl_Preferences p10_2_val( app, "p10_2_val");
    p10_2_val.get("p10_2_val", doublevalue, 0);
    p10_2->value(doublevalue);

    Fl_Preferences p10_3_val( app, "p10_3_val");
    p10_3_val.get("p10_3_val", doublevalue, 0);
    p10_3->value(doublevalue);

    Fl_Preferences p10_4_val( app, "p10_4_val");
    p10_4_val.get("p10_4_val", doublevalue, 0);
    p10_4->value(doublevalue);

    Fl_Preferences p10_5_val( app, "p10_5_val");
    p10_5_val.get("p10_5_val", doublevalue, 0);
    p10_5->value(doublevalue);

    Fl_Preferences p10_6_val( app, "p10_6_val");
    p10_6_val.get("p10_6_val", doublevalue, 0);
    p10_6->value(doublevalue);

    Fl_Preferences p10_7_val( app, "p10_7_val");
    p10_7_val.get("p10_7_val", doublevalue, 0);
    p10_7->value(doublevalue);

    Fl_Preferences p10_8_val( app, "p10_8_val");
    p10_8_val.get("p10_8_val", doublevalue, 0);
    p10_8->value(doublevalue);

    Fl_Preferences p10_9_val( app, "p10_9_val");
    p10_9_val.get("p10_9_val", doublevalue, 0);
    p10_9->value(doublevalue);

    Fl_Preferences p10_10_val( app, "p10_10_val");
    p10_10_val.get("p10_10_val", doublevalue, 0);
    p10_10->value(doublevalue);

    Fl_Preferences p10_11_val( app, "p10_11_val");
    p10_11_val.get("p10_11_val", doublevalue, 0);
    p10_11->value(doublevalue);

    Fl_Preferences p10_12_val( app, "p10_12_val");
    p10_12_val.get("p10_12_val", doublevalue, 0);
    p10_12->value(doublevalue);

    Fl_Preferences p11_1_val( app, "p11_1_val");
    p11_1_val.get("p11_1_val", doublevalue, 0);
    p11_1->value(doublevalue);

    Fl_Preferences p11_2_val( app, "p11_2_val");
    p11_2_val.get("p11_2_val", doublevalue, 0);
    p11_2->value(doublevalue);

    Fl_Preferences p11_3_val( app, "p11_3_val");
    p11_3_val.get("p11_3_val", doublevalue, 0);
    p11_3->value(doublevalue);

    Fl_Preferences p11_4_val( app, "p11_4_val");
    p11_4_val.get("p11_4_val", doublevalue, 0);
    p11_4->value(doublevalue);

    Fl_Preferences p11_5_val( app, "p11_5_val");
    p11_5_val.get("p11_5_val", doublevalue, 0);
    p11_5->value(doublevalue);

    Fl_Preferences p11_6_val( app, "p11_6_val");
    p11_6_val.get("p11_6_val", doublevalue, 0);
    p11_6->value(doublevalue);

    Fl_Preferences p11_7_val( app, "p11_7_val");
    p11_7_val.get("p11_7_val", doublevalue, 0);
    p11_7->value(doublevalue);

    Fl_Preferences p11_8_val( app, "p11_8_val");
    p11_8_val.get("p11_8_val", doublevalue, 0);
    p11_8->value(doublevalue);

    Fl_Preferences p11_9_val( app, "p11_9_val");
    p11_9_val.get("p11_9_val", doublevalue, 0);
    p11_9->value(doublevalue);

    Fl_Preferences p11_10_val( app, "p11_10_val");
    p11_10_val.get("p11_10_val", doublevalue, 0);
    p11_10->value(doublevalue);

    Fl_Preferences p11_11_val( app, "p11_11_val");
    p11_11_val.get("p11_11_val", doublevalue, 0);
    p11_11->value(doublevalue);

    Fl_Preferences p11_12_val( app, "p11_12_val");
    p11_12_val.get("p11_12_val", doublevalue, 0);
    p11_12->value(doublevalue);

    Fl_Preferences p12_1_val( app, "p12_1_val");
    p12_1_val.get("p12_1_val", doublevalue, 0);
    p12_1->value(doublevalue);

    Fl_Preferences p12_2_val( app, "p12_2_val");
    p12_2_val.get("p12_2_val", doublevalue, 0);
    p12_2->value(doublevalue);

    Fl_Preferences p12_3_val( app, "p12_3_val");
    p12_3_val.get("p12_3_val", doublevalue, 0);
    p12_3->value(doublevalue);

    Fl_Preferences p12_4_val( app, "p12_4_val");
    p12_4_val.get("p12_4_val", doublevalue, 0);
    p12_4->value(doublevalue);

    Fl_Preferences p12_5_val( app, "p12_5_val");
    p12_5_val.get("p12_5_val", doublevalue, 0);
    p12_5->value(doublevalue);

    Fl_Preferences p12_6_val( app, "p12_6_val");
    p12_6_val.get("p12_6_val", doublevalue, 0);
    p12_6->value(doublevalue);

    Fl_Preferences p12_7_val( app, "p12_7_val");
    p12_7_val.get("p12_7_val", doublevalue, 0);
    p12_7->value(doublevalue);

    Fl_Preferences p12_8_val( app, "p12_8_val");
    p12_8_val.get("p12_8_val", doublevalue, 0);
    p12_8->value(doublevalue);

    Fl_Preferences p12_9_val( app, "p12_9_val");
    p12_9_val.get("p12_9_val", doublevalue, 0);
    p12_9->value(doublevalue);

    Fl_Preferences p12_10_val( app, "p12_10_val");
    p12_10_val.get("p12_10_val", doublevalue, 0);
    p12_10->value(doublevalue);

    Fl_Preferences p12_11_val( app, "p12_11_val");
    p12_11_val.get("p12_11_val", doublevalue, 0);
    p12_11->value(doublevalue);

    Fl_Preferences p12_12_val( app, "p12_12_val");
    p12_12_val.get("p12_12_val", doublevalue, 0);
    p12_12->value(doublevalue);

    Fl_Preferences p13_1_val( app, "p13_1_val");
    p13_1_val.get("p13_1_val", doublevalue, 0);
    p13_1->value(doublevalue);

    Fl_Preferences p13_2_val( app, "p13_2_val");
    p13_2_val.get("p13_2_val", doublevalue, 0);
    p13_2->value(doublevalue);

    Fl_Preferences p13_3_val( app, "p13_3_val");
    p13_3_val.get("p13_3_val", doublevalue, 0);
    p13_3->value(doublevalue);

    Fl_Preferences p13_4_val( app, "p13_4_val");
    p13_4_val.get("p13_4_val", doublevalue, 0);
    p13_4->value(doublevalue);

    Fl_Preferences p13_5_val( app, "p13_5_val");
    p13_5_val.get("p13_5_val", doublevalue, 0);
    p13_5->value(doublevalue);

    Fl_Preferences p13_6_val( app, "p13_6_val");
    p13_6_val.get("p13_6_val", doublevalue, 0);
    p13_6->value(doublevalue);

    Fl_Preferences p13_7_val( app, "p13_7_val");
    p13_7_val.get("p13_7_val", doublevalue, 0);
    p13_7->value(doublevalue);

    Fl_Preferences p13_8_val( app, "p13_8_val");
    p13_8_val.get("p13_8_val", doublevalue, 0);
    p13_8->value(doublevalue);

    Fl_Preferences p13_9_val( app, "p13_9_val");
    p13_9_val.get("p13_9_val", doublevalue, 0);
    p13_9->value(doublevalue);

    Fl_Preferences p13_10_val( app, "p13_10_val");
    p13_10_val.get("p13_10_val", doublevalue, 0);
    p13_10->value(doublevalue);

    Fl_Preferences p13_11_val( app, "p13_11_val");
    p13_11_val.get("p13_11_val", doublevalue, 0);
    p13_11->value(doublevalue);

    Fl_Preferences p13_12_val( app, "p13_12_val");
    p13_12_val.get("p13_12_val", doublevalue, 0);
    p13_12->value(doublevalue);

    Fl_Preferences p14_1_val( app, "p14_1_val");
    p14_1_val.get("p14_1_val", doublevalue, 0);
    p14_1->value(doublevalue);

    Fl_Preferences p14_2_val( app, "p14_2_val");
    p14_2_val.get("p14_2_val", doublevalue, 0);
    p14_2->value(doublevalue);

    Fl_Preferences p14_3_val( app, "p14_3_val");
    p14_3_val.get("p14_3_val", doublevalue, 0);
    p14_3->value(doublevalue);

    Fl_Preferences p14_4_val( app, "p14_4_val");
    p14_4_val.get("p14_4_val", doublevalue, 0);
    p14_4->value(doublevalue);

    Fl_Preferences p14_5_val( app, "p14_5_val");
    p14_5_val.get("p14_5_val", doublevalue, 0);
    p14_5->value(doublevalue);

    Fl_Preferences p14_6_val( app, "p14_6_val");
    p14_6_val.get("p14_6_val", doublevalue, 0);
    p14_6->value(doublevalue);

    Fl_Preferences p14_7_val( app, "p14_7_val");
    p14_7_val.get("p14_7_val", doublevalue, 0);
    p14_7->value(doublevalue);

    Fl_Preferences p14_8_val( app, "p14_8_val");
    p14_8_val.get("p14_8_val", doublevalue, 0);
    p14_8->value(doublevalue);

    Fl_Preferences p14_9_val( app, "p14_9_val");
    p14_9_val.get("p14_9_val", doublevalue, 0);
    p14_9->value(doublevalue);

    Fl_Preferences p14_10_val( app, "p14_10_val");
    p14_10_val.get("p14_10_val", doublevalue, 0);
    p14_10->value(doublevalue);

    Fl_Preferences p14_11_val( app, "p14_11_val");
    p14_11_val.get("p14_11_val", doublevalue, 0);
    p14_11->value(doublevalue);

    Fl_Preferences p14_12_val( app, "p14_12_val");
    p14_12_val.get("p14_12_val", doublevalue, 0);
    p14_12->value(doublevalue);

    Fl_Preferences p15_1_val( app, "p15_1_val");
    p15_1_val.get("p15_1_val", doublevalue, 0);
    p15_1->value(doublevalue);

    Fl_Preferences p15_2_val( app, "p15_2_val");
    p15_2_val.get("p15_2_val", doublevalue, 0);
    p15_2->value(doublevalue);

    Fl_Preferences p15_3_val( app, "p15_3_val");
    p15_3_val.get("p15_3_val", doublevalue, 0);
    p15_3->value(doublevalue);

    Fl_Preferences p15_4_val( app, "p15_4_val");
    p15_4_val.get("p15_4_val", doublevalue, 0);
    p15_4->value(doublevalue);

    Fl_Preferences p15_5_val( app, "p15_5_val");
    p15_5_val.get("p15_5_val", doublevalue, 0);
    p15_5->value(doublevalue);

    Fl_Preferences p15_6_val( app, "p15_6_val");
    p15_6_val.get("p15_6_val", doublevalue, 0);
    p15_6->value(doublevalue);

    Fl_Preferences p15_7_val( app, "p15_7_val");
    p15_7_val.get("p15_7_val", doublevalue, 0);
    p15_7->value(doublevalue);

    Fl_Preferences p15_8_val( app, "p15_8_val");
    p15_8_val.get("p15_8_val", doublevalue, 0);
    p15_8->value(doublevalue);

    Fl_Preferences p15_9_val( app, "p15_9_val");
    p15_9_val.get("p15_9_val", doublevalue, 0);
    p15_9->value(doublevalue);

    Fl_Preferences p15_10_val( app, "p15_10_val");
    p15_10_val.get("p15_10_val", doublevalue, 0);
    p15_10->value(doublevalue);

    Fl_Preferences p15_11_val( app, "p15_11_val");
    p15_11_val.get("p15_11_val", doublevalue, 0);
    p15_11->value(doublevalue);

    Fl_Preferences p15_12_val( app, "p15_12_val");
    p15_12_val.get("p15_12_val", doublevalue, 0);
    p15_12->value(doublevalue);
}
/*
void readPrefsSerieParams_cb(Fl_Widget*, void*)
{
    readPrefsSerieParams();
}
*/
void readPrefsSerieParams2()
{
int intValue;
double doublevalue;

Fl_Preferences app( Fl_Preferences::USER, dataPath->value(), txt_seriePath->value() );

char path[ FL_PATH_MAX ];
app.getUserdataPath( path, sizeof(path) );

    Fl_Preferences p6b_enable_val( app, "p6b_enable_val");
    p6b_enable_val.get("p6b_enable_val", intValue, 0);
    bt_enable_p6b->value(intValue);

    Fl_Preferences p6b_enable_valCtp( app, "p6b_enable_valCtp");
    p6b_enable_valCtp.get("p6b_enable_valCtp", intValue, 0);
    bt_enable_p6bCtp->value(intValue);

    Fl_Preferences p7b_enable_val( app, "p7b_enable_val");
    p7b_enable_val.get("p7b_enable_val", intValue, 0);
    bt_enable_p7b->value(intValue);

    Fl_Preferences p7b_enable_valCtp( app, "p7b_enable_valCtp");
    p7b_enable_valCtp.get("p7b_enable_valCtp", intValue, 0);
    bt_enable_p7bCtp->value(intValue);

    Fl_Preferences p8b_enable_val( app, "p8b_enable_val");
    p8b_enable_val.get("p8b_enable_val", intValue, 0);
    bt_enable_p8b->value(intValue);

    Fl_Preferences p8b_enable_valCtp( app, "p8b_enable_valCtp");
    p8b_enable_valCtp.get("p8b_enable_valCtp", intValue, 0);
    bt_enable_p8bCtp->value(intValue);

    Fl_Preferences p9b_enable_val( app, "p9b_enable_val");
    p9b_enable_val.get("p9b_enable_val", intValue, 0);
    bt_enable_p9b->value(intValue);

    Fl_Preferences p9b_enable_valCtp( app, "p9b_enable_valCtp");
    p9b_enable_valCtp.get("p9b_enable_valCtp", intValue, 0);
    bt_enable_p9bCtp->value(intValue);

    Fl_Preferences p10b_enable_val( app, "p10b_enable_val");
    p10b_enable_val.get("p10b_enable_val", intValue, 0);
    bt_enable_p10b->value(intValue);

    Fl_Preferences p10b_enable_valCtp( app, "p10b_enable_valCtp");
    p10b_enable_valCtp.get("p10b_enable_valCtp", intValue, 0);
    bt_enable_p10bCtp->value(intValue);

    Fl_Preferences p11b_enable_val( app, "p11b_enable_val");
    p11b_enable_val.get("p11b_enable_val", intValue, 0);
    bt_enable_p11b->value(intValue);

    Fl_Preferences p11b_enable_valCtp( app, "p11b_enable_valCtp");
    p11b_enable_valCtp.get("p11b_enable_valCtp", intValue, 0);
    bt_enable_p11bCtp->value(intValue);

    Fl_Preferences p12b_enable_val( app, "p12b_enable_val");
    p12b_enable_val.get("p12b_enable_val", intValue, 0);
    bt_enable_p12b->value(intValue);

    Fl_Preferences p12b_enable_valCtp( app, "p12b_enable_valCtp");
    p12b_enable_valCtp.get("p12b_enable_valCtp", intValue, 0);
    bt_enable_p12bCtp->value(intValue);

    Fl_Preferences p13b_enable_val( app, "p13b_enable_val");
    p13b_enable_val.get("p13b_enable_val", intValue, 0);
    bt_enable_p13b->value(intValue);

    Fl_Preferences p13b_enable_valCtp( app, "p13b_enable_valCtp");
    p13b_enable_valCtp.get("p13b_enable_valCtp", intValue, 0);
    bt_enable_p13bCtp->value(intValue);

    Fl_Preferences p14b_enable_val( app, "p14b_enable_val");
    p14b_enable_val.get("p14b_enable_val", intValue, 0);
    bt_enable_p14b->value(intValue);

    Fl_Preferences p14b_enable_valCtp( app, "p14b_enable_valCtp");
    p14b_enable_valCtp.get("p14b_enable_valCtp", intValue, 0);
    bt_enable_p14bCtp->value(intValue);

    Fl_Preferences p15b_enable_val( app, "p15b_enable_val");
    p15b_enable_val.get("p15b_enable_val", intValue, 0);
    bt_enable_p15b->value(intValue);

    Fl_Preferences p15b_enable_valCtp( app, "p15b_enable_valCtp");
    p15b_enable_valCtp.get("p15b_enable_valCtp", intValue, 0);
    bt_enable_p15bCtp->value(intValue);

    Fl_Preferences p6_1b_val( app, "p6_1b_val");
    p6_1b_val.get("p6_1b_val", doublevalue, 0);
    p6_1b->value(doublevalue);

    Fl_Preferences p6_2b_val( app, "p6_2b_val");
    p6_2b_val.get("p6_2b_val", doublevalue, 0);
    p6_2b->value(doublevalue);

    Fl_Preferences p6_3b_val( app, "p6_3b_val");
    p6_3b_val.get("p6_3b_val", doublevalue, 0);
    p6_3b->value(doublevalue);

    Fl_Preferences p6_4b_val( app, "p6_4b_val");
    p6_4b_val.get("p6_4b_val", doublevalue, 0);
    p6_4b->value(doublevalue);

    Fl_Preferences p6_5b_val( app, "p6_5b_val");
    p6_5b_val.get("p6_5b_val", doublevalue, 0);
    p6_5b->value(doublevalue);

    Fl_Preferences p6_6b_val( app, "p6_6b_val");
    p6_6b_val.get("p6_6b_val", doublevalue, 0);
    p6_6b->value(doublevalue);

    Fl_Preferences p6_7b_val( app, "p6_7b_val");
    p6_7b_val.get("p6_7b_val", doublevalue, 0);
    p6_7b->value(doublevalue);

    Fl_Preferences p6_8b_val( app, "p6_8b_val");
    p6_8b_val.get("p6_8b_val", doublevalue, 0);
    p6_8b->value(doublevalue);

    Fl_Preferences p6_9b_val( app, "p6_9b_val");
    p6_9b_val.get("p6_9b_val", doublevalue, 0);
    p6_9b->value(doublevalue);

    Fl_Preferences p6_10b_val( app, "p6_10b_val");
    p6_10b_val.get("p6_10b_val", doublevalue, 0);
    p6_10b->value(doublevalue);

    Fl_Preferences p6_11b_val( app, "p6_11b_val");
    p6_11b_val.get("p6_11b_val", doublevalue, 0);
    p6_11b->value(doublevalue);

    Fl_Preferences p6_12b_val( app, "p6_12b_val");
    p6_12b_val.get("p6_12b_val", doublevalue, 0);
    p6_12b->value(doublevalue);

    Fl_Preferences p7_1b_val( app, "p7_1b_val");
    p7_1b_val.get("p7_1b_val", doublevalue, 0);
    p7_1b->value(doublevalue);

    Fl_Preferences p7_2b_val( app, "p7_2b_val");
    p7_2b_val.get("p7_2b_val", doublevalue, 0);
    p7_2b->value(doublevalue);

    Fl_Preferences p7_3b_val( app, "p7_3b_val");
    p7_3b_val.get("p7_3b_val", doublevalue, 0);
    p7_3b->value(doublevalue);

    Fl_Preferences p7_4b_val( app, "p7_4b_val");
    p7_4b_val.get("p7_4b_val", doublevalue, 0);
    p7_4b->value(doublevalue);

    Fl_Preferences p7_5b_val( app, "p7_5b_val");
    p7_5b_val.get("p7_5b_val", doublevalue, 0);
    p7_5b->value(doublevalue);

    Fl_Preferences p7_6b_val( app, "p7_6b_val");
    p7_6b_val.get("p7_6b_val", doublevalue, 0);
    p7_6b->value(doublevalue);

    Fl_Preferences p7_7b_val( app, "p7_7b_val");
    p7_7b_val.get("p7_7b_val", doublevalue, 0);
    p7_7b->value(doublevalue);

    Fl_Preferences p7_8b_val( app, "p7_8b_val");
    p7_8b_val.get("p7_8b_val", doublevalue, 0);
    p7_8b->value(doublevalue);

    Fl_Preferences p7_9b_val( app, "p7_9b_val");
    p7_9b_val.get("p7_9b_val", doublevalue, 0);
    p7_9b->value(doublevalue);

    Fl_Preferences p7_10b_val( app, "p7_10b_val");
    p7_10b_val.get("p7_10b_val", doublevalue, 0);
    p7_10b->value(doublevalue);

    Fl_Preferences p7_11b_val( app, "p7_11b_val");
    p7_11b_val.get("p7_11b_val", doublevalue, 0);
    p7_11b->value(doublevalue);

    Fl_Preferences p7_12b_val( app, "p7_12b_val");
    p7_12b_val.get("p7_12b_val", doublevalue, 0);
    p7_12b->value(doublevalue);

    Fl_Preferences p8_1b_val( app, "p8_1b_val");
    p8_1b_val.get("p8_1b_val", doublevalue, 0);
    p8_1b->value(doublevalue);

    Fl_Preferences p8_2b_val( app, "p8_2b_val");
    p8_2b_val.get("p8_2b_val", doublevalue, 0);
    p8_2b->value(doublevalue);

    Fl_Preferences p8_3b_val( app, "p8_3b_val");
    p8_3b_val.get("p8_3b_val", doublevalue, 0);
    p8_3b->value(doublevalue);

    Fl_Preferences p8_4b_val( app, "p8_4b_val");
    p8_4b_val.get("p8_4b_val", doublevalue, 0);
    p8_4b->value(doublevalue);

    Fl_Preferences p8_5b_val( app, "p8_5b_val");
    p8_5b_val.get("p8_5b_val", doublevalue, 0);
    p8_5b->value(doublevalue);

    Fl_Preferences p8_6b_val( app, "p8_6b_val");
    p8_6b_val.get("p8_6b_val", doublevalue, 0);
    p8_6b->value(doublevalue);

    Fl_Preferences p8_7b_val( app, "p8_7b_val");
    p8_7b_val.get("p8_7b_val", doublevalue, 0);
    p8_7b->value(doublevalue);

    Fl_Preferences p8_8b_val( app, "p8_8b_val");
    p8_8b_val.get("p8_8b_val", doublevalue, 0);
    p8_8b->value(doublevalue);

    Fl_Preferences p8_9b_val( app, "p8_9b_val");
    p8_9b_val.get("p8_9b_val", doublevalue, 0);
    p8_9b->value(doublevalue);

    Fl_Preferences p8_10b_val( app, "p8_10b_val");
    p8_10b_val.get("p8_10b_val", doublevalue, 0);
    p8_10b->value(doublevalue);

    Fl_Preferences p8_11b_val( app, "p8_11b_val");
    p8_11b_val.get("p8_11b_val", doublevalue, 0);
    p8_11b->value(doublevalue);

    Fl_Preferences p8_12b_val( app, "p8_12b_val");
    p8_12b_val.get("p8_12b_val", doublevalue, 0);
    p8_12b->value(doublevalue);

    Fl_Preferences p9_1b_val( app, "p9_1b_val");
    p9_1b_val.get("p9_1b_val", doublevalue, 0);
    p9_1b->value(doublevalue);

    Fl_Preferences p9_2b_val( app, "p9_2b_val");
    p9_2b_val.get("p9_2b_val", doublevalue, 0);
    p9_2b->value(doublevalue);

    Fl_Preferences p9_3b_val( app, "p9_3b_val");
    p9_3b_val.get("p9_3b_val", doublevalue, 0);
    p9_3b->value(doublevalue);

    Fl_Preferences p9_4b_val( app, "p9_4b_val");
    p9_4b_val.get("p9_4b_val", doublevalue, 0);
    p9_4b->value(doublevalue);

    Fl_Preferences p9_5b_val( app, "p9_5b_val");
    p9_5b_val.get("p9_5b_val", doublevalue, 0);
    p9_5b->value(doublevalue);

    Fl_Preferences p9_6b_val( app, "p9_6b_val");
    p9_6b_val.get("p9_6b_val", doublevalue, 0);
    p9_6b->value(doublevalue);

    Fl_Preferences p9_7b_val( app, "p9_7b_val");
    p9_7b_val.get("p9_7b_val", doublevalue, 0);
    p9_7b->value(doublevalue);

    Fl_Preferences p9_8b_val( app, "p9_8b_val");
    p9_8b_val.get("p9_8b_val", doublevalue, 0);
    p9_8b->value(doublevalue);

    Fl_Preferences p9_9b_val( app, "p9_9b_val");
    p9_9b_val.get("p9_9b_val", doublevalue, 0);
    p9_9b->value(doublevalue);

    Fl_Preferences p9_10b_val( app, "p9_10b_val");
    p9_10b_val.get("p9_10b_val", doublevalue, 0);
    p9_10b->value(doublevalue);

    Fl_Preferences p9_11b_val( app, "p9_11b_val");
    p9_11b_val.get("p9_11b_val", doublevalue, 0);
    p9_11b->value(doublevalue);

    Fl_Preferences p9_12b_val( app, "p9_12b_val");
    p9_12b_val.get("p9_12b_val", doublevalue, 0);
    p9_12b->value(doublevalue);

    Fl_Preferences p10_1b_val( app, "p10_1b_val");
    p10_1b_val.get("p10_1b_val", doublevalue, 0);
    p10_1b->value(doublevalue);

    Fl_Preferences p10_2b_val( app, "p10_2b_val");
    p10_2b_val.get("p10_2b_val", doublevalue, 0);
    p10_2b->value(doublevalue);

    Fl_Preferences p10_3b_val( app, "p10_3b_val");
    p10_3b_val.get("p10_3b_val", doublevalue, 0);
    p10_3b->value(doublevalue);

    Fl_Preferences p10_4b_val( app, "p10_4b_val");
    p10_4b_val.get("p10_4b_val", doublevalue, 0);
    p10_4b->value(doublevalue);

    Fl_Preferences p10_5b_val( app, "p10_5b_val");
    p10_5b_val.get("p10_5b_val", doublevalue, 0);
    p10_5b->value(doublevalue);

    Fl_Preferences p10_6b_val( app, "p10_6b_val");
    p10_6b_val.get("p10_6b_val", doublevalue, 0);
    p10_6b->value(doublevalue);

    Fl_Preferences p10_7b_val( app, "p10_7b_val");
    p10_7b_val.get("p10_7b_val", doublevalue, 0);
    p10_7b->value(doublevalue);

    Fl_Preferences p10_8b_val( app, "p10_8b_val");
    p10_8b_val.get("p10_8b_val", doublevalue, 0);
    p10_8b->value(doublevalue);

    Fl_Preferences p10_9b_val( app, "p10_9b_val");
    p10_9b_val.get("p10_9b_val", doublevalue, 0);
    p10_9b->value(doublevalue);

    Fl_Preferences p10_10b_val( app, "p10_10b_val");
    p10_10b_val.get("p10_10b_val", doublevalue, 0);
    p10_10b->value(doublevalue);

    Fl_Preferences p10_11b_val( app, "p10_11b_val");
    p10_11b_val.get("p10_11b_val", doublevalue, 0);
    p10_11b->value(doublevalue);

    Fl_Preferences p10_12b_val( app, "p10_12b_val");
    p10_12b_val.get("p10_12b_val", doublevalue, 0);
    p10_12b->value(doublevalue);

    Fl_Preferences p11_1b_val( app, "p11_1b_val");
    p11_1b_val.get("p11_1b_val", doublevalue, 0);
    p11_1b->value(doublevalue);

    Fl_Preferences p11_2b_val( app, "p11_2b_val");
    p11_2b_val.get("p11_2b_val", doublevalue, 0);
    p11_2b->value(doublevalue);

    Fl_Preferences p11_3b_val( app, "p11_3b_val");
    p11_3b_val.get("p11_3b_val", doublevalue, 0);
    p11_3b->value(doublevalue);

    Fl_Preferences p11_4b_val( app, "p11_4b_val");
    p11_4b_val.get("p11_4b_val", doublevalue, 0);
    p11_4b->value(doublevalue);

    Fl_Preferences p11_5b_val( app, "p11_5b_val");
    p11_5b_val.get("p11_5b_val", doublevalue, 0);
    p11_5b->value(doublevalue);

    Fl_Preferences p11_6b_val( app, "p11_6b_val");
    p11_6b_val.get("p11_6b_val", doublevalue, 0);
    p11_6b->value(doublevalue);

    Fl_Preferences p11_7b_val( app, "p11_7b_val");
    p11_7b_val.get("p11_7b_val", doublevalue, 0);
    p11_7b->value(doublevalue);

    Fl_Preferences p11_8b_val( app, "p11_8b_val");
    p11_8b_val.get("p11_8b_val", doublevalue, 0);
    p11_8b->value(doublevalue);

    Fl_Preferences p11_9b_val( app, "p11_9b_val");
    p11_9b_val.get("p11_9b_val", doublevalue, 0);
    p11_9b->value(doublevalue);

    Fl_Preferences p11_10b_val( app, "p11_10b_val");
    p11_10b_val.get("p11_10b_val", doublevalue, 0);
    p11_10b->value(doublevalue);

    Fl_Preferences p11_11b_val( app, "p11_11b_val");
    p11_11b_val.get("p11_11b_val", doublevalue, 0);
    p11_11b->value(doublevalue);

    Fl_Preferences p11_12b_val( app, "p11_12b_val");
    p11_12b_val.get("p11_12b_val", doublevalue, 0);
    p11_12b->value(doublevalue);

    Fl_Preferences p12_1b_val( app, "p12_1b_val");
    p12_1b_val.get("p12_1b_val", doublevalue, 0);
    p12_1b->value(doublevalue);

    Fl_Preferences p12_2b_val( app, "p12_2b_val");
    p12_2b_val.get("p12_2b_val", doublevalue, 0);
    p12_2b->value(doublevalue);

    Fl_Preferences p12_3b_val( app, "p12_3b_val");
    p12_3b_val.get("p12_3b_val", doublevalue, 0);
    p12_3b->value(doublevalue);

    Fl_Preferences p12_4b_val( app, "p12_4b_val");
    p12_4b_val.get("p12_4b_val", doublevalue, 0);
    p12_4b->value(doublevalue);

    Fl_Preferences p12_5b_val( app, "p12_5b_val");
    p12_5b_val.get("p12_5b_val", doublevalue, 0);
    p12_5b->value(doublevalue);

    Fl_Preferences p12_6b_val( app, "p12_6b_val");
    p12_6b_val.get("p12_6b_val", doublevalue, 0);
    p12_6b->value(doublevalue);

    Fl_Preferences p12_7b_val( app, "p12_7b_val");
    p12_7b_val.get("p12_7b_val", doublevalue, 0);
    p12_7b->value(doublevalue);

    Fl_Preferences p12_8b_val( app, "p12_8b_val");
    p12_8b_val.get("p12_8b_val", doublevalue, 0);
    p12_8b->value(doublevalue);

    Fl_Preferences p12_9b_val( app, "p12_9b_val");
    p12_9b_val.get("p12_9b_val", doublevalue, 0);
    p12_9b->value(doublevalue);

    Fl_Preferences p12_10b_val( app, "p12_10b_val");
    p12_10b_val.get("p12_10b_val", doublevalue, 0);
    p12_10b->value(doublevalue);

    Fl_Preferences p12_11b_val( app, "p12_11b_val");
    p12_11b_val.get("p12_11b_val", doublevalue, 0);
    p12_11b->value(doublevalue);

    Fl_Preferences p12_12b_val( app, "p12_12b_val");
    p12_12b_val.get("p12_12b_val", doublevalue, 0);
    p12_12b->value(doublevalue);

    Fl_Preferences p13_1b_val( app, "p13_1b_val");
    p13_1b_val.get("p13_1b_val", doublevalue, 0);
    p13_1b->value(doublevalue);

    Fl_Preferences p13_2b_val( app, "p13_2b_val");
    p13_2b_val.get("p13_2b_val", doublevalue, 0);
    p13_2b->value(doublevalue);

    Fl_Preferences p13_3b_val( app, "p13_3b_val");
    p13_3b_val.get("p13_3b_val", doublevalue, 0);
    p13_3b->value(doublevalue);

    Fl_Preferences p13_4b_val( app, "p13_4b_val");
    p13_4b_val.get("p13_4b_val", doublevalue, 0);
    p13_4b->value(doublevalue);

    Fl_Preferences p13_5b_val( app, "p13_5b_val");
    p13_5b_val.get("p13_5b_val", doublevalue, 0);
    p13_5b->value(doublevalue);

    Fl_Preferences p13_6b_val( app, "p13_6b_val");
    p13_6b_val.get("p13_6b_val", doublevalue, 0);
    p13_6b->value(doublevalue);

    Fl_Preferences p13_7b_val( app, "p13_7b_val");
    p13_7b_val.get("p13_7b_val", doublevalue, 0);
    p13_7b->value(doublevalue);

    Fl_Preferences p13_8b_val( app, "p13_8b_val");
    p13_8b_val.get("p13_8b_val", doublevalue, 0);
    p13_8b->value(doublevalue);

    Fl_Preferences p13_9b_val( app, "p13_9b_val");
    p13_9b_val.get("p13_9b_val", doublevalue, 0);
    p13_9b->value(doublevalue);

    Fl_Preferences p13_10b_val( app, "p13_10b_val");
    p13_10b_val.get("p13_10b_val", doublevalue, 0);
    p13_10b->value(doublevalue);

    Fl_Preferences p13_11b_val( app, "p13_11b_val");
    p13_11b_val.get("p13_11b_val", doublevalue, 0);
    p13_11b->value(doublevalue);

    Fl_Preferences p13_12b_val( app, "p13_12b_val");
    p13_12b_val.get("p13_12b_val", doublevalue, 0);
    p13_12b->value(doublevalue);

    Fl_Preferences p14_1b_val( app, "p14_1b_val");
    p14_1b_val.get("p14_1b_val", doublevalue, 0);
    p14_1b->value(doublevalue);

    Fl_Preferences p14_2b_val( app, "p14_2b_val");
    p14_2b_val.get("p14_2b_val", doublevalue, 0);
    p14_2b->value(doublevalue);

    Fl_Preferences p14_3b_val( app, "p14_3b_val");
    p14_3b_val.get("p14_3b_val", doublevalue, 0);
    p14_3b->value(doublevalue);

    Fl_Preferences p14_4b_val( app, "p14_4b_val");
    p14_4b_val.get("p14_4b_val", doublevalue, 0);
    p14_4b->value(doublevalue);

    Fl_Preferences p14_5b_val( app, "p14_5b_val");
    p14_5b_val.get("p14_5b_val", doublevalue, 0);
    p14_5b->value(doublevalue);

    Fl_Preferences p14_6b_val( app, "p14_6b_val");
    p14_6b_val.get("p14_6b_val", doublevalue, 0);
    p14_6b->value(doublevalue);

    Fl_Preferences p14_7b_val( app, "p14_7b_val");
    p14_7b_val.get("p14_7b_val", doublevalue, 0);
    p14_7b->value(doublevalue);

    Fl_Preferences p14_8b_val( app, "p14_8b_val");
    p14_8b_val.get("p14_8b_val", doublevalue, 0);
    p14_8b->value(doublevalue);

    Fl_Preferences p14_9b_val( app, "p14_9b_val");
    p14_9b_val.get("p14_9b_val", doublevalue, 0);
    p14_9b->value(doublevalue);

    Fl_Preferences p14_10b_val( app, "p14_10b_val");
    p14_10b_val.get("p14_10b_val", doublevalue, 0);
    p14_10b->value(doublevalue);

    Fl_Preferences p14_11b_val( app, "p14_11b_val");
    p14_11b_val.get("p14_11b_val", doublevalue, 0);
    p14_11b->value(doublevalue);

    Fl_Preferences p14_12b_val( app, "p14_12b_val");
    p14_12b_val.get("p14_12b_val", doublevalue, 0);
    p14_12b->value(doublevalue);

    Fl_Preferences p15_1b_val( app, "p15_1b_val");
    p15_1b_val.get("p15_1b_val", doublevalue, 0);
    p15_1b->value(doublevalue);

    Fl_Preferences p15_2b_val( app, "p15_2b_val");
    p15_2b_val.get("p15_2b_val", doublevalue, 0);
    p15_2b->value(doublevalue);

    Fl_Preferences p15_3b_val( app, "p15_3b_val");
    p15_3b_val.get("p15_3b_val", doublevalue, 0);
    p15_3b->value(doublevalue);

    Fl_Preferences p15_4b_val( app, "p15_4b_val");
    p15_4b_val.get("p15_4b_val", doublevalue, 0);
    p15_4b->value(doublevalue);

    Fl_Preferences p15_5b_val( app, "p15_5b_val");
    p15_5b_val.get("p15_5b_val", doublevalue, 0);
    p15_5b->value(doublevalue);

    Fl_Preferences p15_6b_val( app, "p15_6b_val");
    p15_6b_val.get("p15_6b_val", doublevalue, 0);
    p15_6b->value(doublevalue);

    Fl_Preferences p15_7b_val( app, "p15_7b_val");
    p15_7b_val.get("p15_7b_val", doublevalue, 0);
    p15_7b->value(doublevalue);

    Fl_Preferences p15_8b_val( app, "p15_8b_val");
    p15_8b_val.get("p15_8b_val", doublevalue, 0);
    p15_8b->value(doublevalue);

    Fl_Preferences p15_9b_val( app, "p15_9b_val");
    p15_9b_val.get("p15_9b_val", doublevalue, 0);
    p15_9b->value(doublevalue);

    Fl_Preferences p15_10b_val( app, "p15_10b_val");
    p15_10b_val.get("p15_10b_val", doublevalue, 0);
    p15_10b->value(doublevalue);

    Fl_Preferences p15_11b_val( app, "p15_11b_val");
    p15_11b_val.get("p15_11b_val", doublevalue, 0);
    p15_11b->value(doublevalue);

    Fl_Preferences p15_12b_val( app, "p15_12b_val");
    p15_12b_val.get("p15_12b_val", doublevalue, 0);
    p15_12b->value(doublevalue);
    
 
}
/////////////////////////////////////////////////

void writePrefsSerieParams() {

Fl_Preferences app( Fl_Preferences::USER, dataPath->value(), txt_seriePath->value() );

   Fl_Preferences p6_enable_val( app, "p6_enable_val" );
     p6_enable_val.set("p6_enable_val", bt_enable_p6->value() );

   Fl_Preferences p6_enable_valCtp( app, "p6_enable_valCtp" );
     p6_enable_valCtp.set("p6_enable_valCtp", bt_enable_p6Ctp->value() );

   Fl_Preferences p7_enable_val( app, "p7_enable_val" );
     p7_enable_val.set("p7_enable_val", bt_enable_p7->value() );

   Fl_Preferences p7_enable_valCtp( app, "p7_enable_valCtp" );
     p7_enable_valCtp.set("p7_enable_valCtp", bt_enable_p7Ctp->value() );


   Fl_Preferences p8_enable_val( app, "p8_enable_val" );
     p8_enable_val.set("p8_enable_val", bt_enable_p8->value() );

   Fl_Preferences p8_enable_valCtp( app, "p8_enable_valCtp" );
     p8_enable_valCtp.set("p8_enable_valCtp", bt_enable_p8Ctp->value() );


   Fl_Preferences p9_enable_val( app, "p9_enable_val" );
     p9_enable_val.set("p9_enable_val", bt_enable_p9->value() );

   Fl_Preferences p9_enable_valCtp( app, "p9_enable_valCtp" );
     p9_enable_valCtp.set("p9_enable_valCtp", bt_enable_p9Ctp->value() );

   Fl_Preferences p10_enable_val( app, "p10_enable_val" );
     p10_enable_val.set("p10_enable_val", bt_enable_p10->value() );

   Fl_Preferences p10_enable_valCtp( app, "p10_enable_valCtp" );
     p10_enable_valCtp.set("p10_enable_valCtp", bt_enable_p10Ctp->value() );

   Fl_Preferences p11_enable_val( app, "p11_enable_val" );
     p11_enable_val.set("p11_enable_val", bt_enable_p11->value() );

   Fl_Preferences p11_enable_valCtp( app, "p11_enable_valCtp" );
     p11_enable_valCtp.set("p11_enable_valCtp", bt_enable_p11Ctp->value() );

   Fl_Preferences p12_enable_val( app, "p12_enable_val" );
     p12_enable_val.set("p12_enable_val", bt_enable_p12->value() );

   Fl_Preferences p12_enable_valCtp( app, "p12_enable_valCtp" );
     p12_enable_valCtp.set("p12_enable_valCtp", bt_enable_p12Ctp->value() );

   Fl_Preferences p13_enable_val( app, "p13_enable_val" );
     p13_enable_val.set("p13_enable_val", bt_enable_p13->value() );

   Fl_Preferences p13_enable_valCtp( app, "p13_enable_valCtp" );
     p13_enable_valCtp.set("p13_enable_valCtp", bt_enable_p13Ctp->value() );

   Fl_Preferences p14_enable_val( app, "p14_enable_val" );
     p14_enable_val.set("p14_enable_val", bt_enable_p14->value() );

   Fl_Preferences p14_enable_valCtp( app, "p14_enable_valCtp" );
     p14_enable_valCtp.set("p14_enable_valCtp", bt_enable_p14Ctp->value() );

   Fl_Preferences p15_enable_val( app, "p15_enable_val" );
     p15_enable_val.set("p15_enable_val", bt_enable_p15->value() );

   Fl_Preferences p15_enable_valCtp( app, "p15_enable_valCtp" );
     p15_enable_valCtp.set("p15_enable_valCtp", bt_enable_p15Ctp->value() );
///////////////////////////////////////////////////
   Fl_Preferences p6_1_val( app, "p6_1_val" );
     p6_1_val.set("p6_1_val", p6_1->value() );

   Fl_Preferences p6_2_val( app, "p6_2_val" );
     p6_2_val.set("p6_2_val", p6_2->value() );

   Fl_Preferences p6_3_val( app, "p6_3_val" );
     p6_3_val.set("p6_3_val", p6_3->value() );

   Fl_Preferences p6_4_val( app, "p6_4_val" );
     p6_4_val.set("p6_4_val", p6_4->value() );

   Fl_Preferences p6_5_val( app, "p6_5_val" );
     p6_5_val.set("p6_5_val", p6_5->value() );

   Fl_Preferences p6_6_val( app, "p6_6_val" );
     p6_6_val.set("p6_6_val", p6_6->value() );

   Fl_Preferences p6_7_val( app, "p6_7_val" );
     p6_7_val.set("p6_7_val", p6_7->value() );

   Fl_Preferences p6_8_val( app, "p6_8_val" );
     p6_8_val.set("p6_8_val", p6_8->value() );

   Fl_Preferences p6_9_val( app, "p6_9_val" );
     p6_9_val.set("p6_9_val", p6_9->value() );

   Fl_Preferences p6_10_val( app, "p6_10_val" );
     p6_10_val.set("p6_10_val", p6_10->value() );

   Fl_Preferences p6_11_val( app, "p6_11_val" );
     p6_11_val.set("p6_11_val", p6_11->value() );

   Fl_Preferences p6_12_val( app, "p6_12_val" );
     p6_12_val.set("p6_12_val", p6_12->value() );


   Fl_Preferences p7_1_val( app, "p7_1_val" );
     p7_1_val.set("p7_1_val", p7_1->value() );

   Fl_Preferences p7_2_val( app, "p7_2_val" );
     p7_2_val.set("p7_2_val", p7_2->value() );

   Fl_Preferences p7_3_val( app, "p7_3_val" );
     p7_3_val.set("p7_3_val", p7_3->value() );

   Fl_Preferences p7_4_val( app, "p7_4_val" );
     p7_4_val.set("p7_4_val", p7_4->value() );

   Fl_Preferences p7_5_val( app, "p7_5_val" );
     p7_5_val.set("p7_5_val", p7_5->value() );

   Fl_Preferences p7_6_val( app, "p7_6_val" );
     p7_6_val.set("p7_6_val", p7_6->value() );

   Fl_Preferences p7_7_val( app, "p7_7_val" );
     p7_7_val.set("p7_7_val", p7_7->value() );

   Fl_Preferences p7_8_val( app, "p7_8_val" );
     p7_8_val.set("p7_8_val", p7_8->value() );

   Fl_Preferences p7_9_val( app, "p7_9_val" );
     p7_9_val.set("p7_9_val", p7_9->value() );

   Fl_Preferences p7_10_val( app, "p7_10_val" );
     p7_10_val.set("p7_10_val", p7_10->value() );

   Fl_Preferences p7_11_val( app, "p7_11_val" );
     p7_11_val.set("p7_11_val", p7_11->value() );

   Fl_Preferences p7_12_val( app, "p7_12_val" );
     p7_12_val.set("p7_12_val", p7_12->value() );


   Fl_Preferences p8_1_val( app, "p8_1_val" );
     p8_1_val.set("p8_1_val", p8_1->value() );

   Fl_Preferences p8_2_val( app, "p8_2_val" );
     p8_2_val.set("p8_2_val", p8_2->value() );

   Fl_Preferences p8_3_val( app, "p8_3_val" );
     p8_3_val.set("p8_3_val", p8_3->value() );

   Fl_Preferences p8_4_val( app, "p8_4_val" );
     p8_4_val.set("p8_4_val", p8_4->value() );

   Fl_Preferences p8_5_val( app, "p8_5_val" );
     p8_5_val.set("p8_5_val", p8_5->value() );

   Fl_Preferences p8_6_val( app, "p8_6_val" );
     p8_6_val.set("p8_6_val", p8_6->value() );

   Fl_Preferences p8_7_val( app, "p8_7_val" );
     p8_7_val.set("p8_7_val", p8_7->value() );

   Fl_Preferences p8_8_val( app, "p8_8_val" );
     p8_8_val.set("p8_8_val", p8_8->value() );

   Fl_Preferences p8_9_val( app, "p8_9_val" );
     p8_9_val.set("p8_9_val", p8_9->value() );

   Fl_Preferences p8_10_val( app, "p8_10_val" );
     p8_10_val.set("p8_10_val", p8_10->value() );

   Fl_Preferences p8_11_val( app, "p8_11_val" );
     p8_11_val.set("p8_11_val", p8_11->value() );

   Fl_Preferences p8_12_val( app, "p8_12_val" );
     p8_12_val.set("p8_12_val", p8_12->value() );


   Fl_Preferences p9_1_val( app, "p9_1_val" );
     p9_1_val.set("p9_1_val", p9_1->value() );

   Fl_Preferences p9_2_val( app, "p9_2_val" );
     p9_2_val.set("p9_2_val", p9_2->value() );

   Fl_Preferences p9_3_val( app, "p9_3_val" );
     p9_3_val.set("p9_3_val", p9_3->value() );

   Fl_Preferences p9_4_val( app, "p9_4_val" );
     p9_4_val.set("p9_4_val", p9_4->value() );

   Fl_Preferences p9_5_val( app, "p9_5_val" );
     p9_5_val.set("p9_5_val", p9_5->value() );

   Fl_Preferences p9_6_val( app, "p9_6_val" );
     p9_6_val.set("p9_6_val", p9_6->value() );

   Fl_Preferences p9_7_val( app, "p9_7_val" );
     p9_7_val.set("p9_7_val", p9_7->value() );

   Fl_Preferences p9_8_val( app, "p9_8_val" );
     p9_8_val.set("p9_8_val", p9_8->value() );

   Fl_Preferences p9_9_val( app, "p9_9_val" );
     p9_9_val.set("p9_9_val", p9_9->value() );

   Fl_Preferences p9_10_val( app, "p9_10_val" );
     p9_10_val.set("p9_10_val", p9_10->value() );

   Fl_Preferences p9_11_val( app, "p9_11_val" );
     p9_11_val.set("p9_11_val", p9_11->value() );

   Fl_Preferences p9_12_val( app, "p9_12_val" );
     p9_12_val.set("p9_12_val", p9_12->value() );


   Fl_Preferences p10_1_val( app, "p10_1_val" );
     p10_1_val.set("p10_1_val", p10_1->value() );

   Fl_Preferences p10_2_val( app, "p10_2_val" );
     p10_2_val.set("p10_2_val", p10_2->value() );

   Fl_Preferences p10_3_val( app, "p10_3_val" );
     p10_3_val.set("p10_3_val", p10_3->value() );

   Fl_Preferences p10_4_val( app, "p10_4_val" );
     p10_4_val.set("p10_4_val", p10_4->value() );

   Fl_Preferences p10_5_val( app, "p10_5_val" );
     p10_5_val.set("p10_5_val", p10_5->value() );

   Fl_Preferences p10_6_val( app, "p10_6_val" );
     p10_6_val.set("p10_6_val", p10_6->value() );

   Fl_Preferences p10_7_val( app, "p10_7_val" );
     p10_7_val.set("p10_7_val", p10_7->value() );

   Fl_Preferences p10_8_val( app, "p10_8_val" );
     p10_8_val.set("p10_8_val", p10_8->value() );

   Fl_Preferences p10_9_val( app, "p10_9_val" );
     p10_9_val.set("p10_9_val", p10_9->value() );

   Fl_Preferences p10_10_val( app, "p10_10_val" );
     p10_10_val.set("p10_10_val", p10_10->value() );

   Fl_Preferences p10_11_val( app, "p10_11_val" );
     p10_11_val.set("p10_11_val", p10_11->value() );

   Fl_Preferences p10_12_val( app, "p10_12_val" );
     p10_12_val.set("p10_12_val", p10_12->value() );


   Fl_Preferences p11_1_val( app, "p11_1_val" );
     p11_1_val.set("p11_1_val", p11_1->value() );

   Fl_Preferences p11_2_val( app, "p11_2_val" );
     p11_2_val.set("p11_2_val", p11_2->value() );

   Fl_Preferences p11_3_val( app, "p11_3_val" );
     p11_3_val.set("p11_3_val", p11_3->value() );

   Fl_Preferences p11_4_val( app, "p11_4_val" );
     p11_4_val.set("p11_4_val", p11_4->value() );

   Fl_Preferences p11_5_val( app, "p11_5_val" );
     p11_5_val.set("p11_5_val", p11_5->value() );

   Fl_Preferences p11_6_val( app, "p11_6_val" );
     p11_6_val.set("p11_6_val", p11_6->value() );

   Fl_Preferences p11_7_val( app, "p11_7_val" );
     p11_7_val.set("p11_7_val", p11_7->value() );

   Fl_Preferences p11_8_val( app, "p11_8_val" );
     p11_8_val.set("p11_8_val", p11_8->value() );

   Fl_Preferences p11_9_val( app, "p11_9_val" );
     p11_9_val.set("p11_9_val", p11_9->value() );

   Fl_Preferences p11_10_val( app, "p11_10_val" );
     p11_10_val.set("p11_10_val", p11_10->value() );

   Fl_Preferences p11_11_val( app, "p11_11_val" );
     p11_11_val.set("p11_11_val", p11_11->value() );

   Fl_Preferences p11_12_val( app, "p11_12_val" );
     p11_12_val.set("p11_12_val", p11_12->value() );


   Fl_Preferences p12_1_val( app, "p12_1_val" );
     p12_1_val.set("p12_1_val", p12_1->value() );

   Fl_Preferences p12_2_val( app, "p12_2_val" );
     p12_2_val.set("p12_2_val", p12_2->value() );

   Fl_Preferences p12_3_val( app, "p12_3_val" );
     p12_3_val.set("p12_3_val", p12_3->value() );

   Fl_Preferences p12_4_val( app, "p12_4_val" );
     p12_4_val.set("p12_4_val", p12_4->value() );

   Fl_Preferences p12_5_val( app, "p12_5_val" );
     p12_5_val.set("p12_5_val", p12_5->value() );

   Fl_Preferences p12_6_val( app, "p12_6_val" );
     p12_6_val.set("p12_6_val", p12_6->value() );

   Fl_Preferences p12_7_val( app, "p12_7_val" );
     p12_7_val.set("p12_7_val", p12_7->value() );

   Fl_Preferences p12_8_val( app, "p12_8_val" );
     p12_8_val.set("p12_8_val", p12_8->value() );

   Fl_Preferences p12_9_val( app, "p12_9_val" );
     p12_9_val.set("p12_9_val", p12_9->value() );

   Fl_Preferences p12_10_val( app, "p12_10_val" );
     p12_10_val.set("p12_10_val", p12_10->value() );

   Fl_Preferences p12_11_val( app, "p12_11_val" );
     p12_11_val.set("p12_11_val", p12_11->value() );

   Fl_Preferences p12_12_val( app, "p12_12_val" );
     p12_12_val.set("p12_12_val", p12_12->value() );


   Fl_Preferences p13_1_val( app, "p13_1_val" );
     p13_1_val.set("p13_1_val", p13_1->value() );

   Fl_Preferences p13_2_val( app, "p13_2_val" );
     p13_2_val.set("p13_2_val", p13_2->value() );

   Fl_Preferences p13_3_val( app, "p13_3_val" );
     p13_3_val.set("p13_3_val", p13_3->value() );

   Fl_Preferences p13_4_val( app, "p13_4_val" );
     p13_4_val.set("p13_4_val", p13_4->value() );

   Fl_Preferences p13_5_val( app, "p13_5_val" );
     p13_5_val.set("p13_5_val", p13_5->value() );

   Fl_Preferences p13_6_val( app, "p13_6_val" );
     p13_6_val.set("p13_6_val", p13_6->value() );

   Fl_Preferences p13_7_val( app, "p13_7_val" );
     p13_7_val.set("p13_7_val", p13_7->value() );

   Fl_Preferences p13_8_val( app, "p13_8_val" );
     p13_8_val.set("p13_8_val", p13_8->value() );

   Fl_Preferences p13_9_val( app, "p13_9_val" );
     p13_9_val.set("p13_9_val", p13_9->value() );

   Fl_Preferences p13_10_val( app, "p13_10_val" );
     p13_10_val.set("p13_10_val", p13_10->value() );

   Fl_Preferences p13_11_val( app, "p13_11_val" );
     p13_11_val.set("p13_11_val", p13_11->value() );

   Fl_Preferences p13_12_val( app, "p13_12_val" );
     p13_12_val.set("p13_12_val", p13_12->value() );


   Fl_Preferences p14_1_val( app, "p14_1_val" );
     p14_1_val.set("p14_1_val", p14_1->value() );

   Fl_Preferences p14_2_val( app, "p14_2_val" );
     p14_2_val.set("p14_2_val", p14_2->value() );

   Fl_Preferences p14_3_val( app, "p14_3_val" );
     p14_3_val.set("p14_3_val", p14_3->value() );

   Fl_Preferences p14_4_val( app, "p14_4_val" );
     p14_4_val.set("p14_4_val", p14_4->value() );

   Fl_Preferences p14_5_val( app, "p14_5_val" );
     p14_5_val.set("p14_5_val", p14_5->value() );

   Fl_Preferences p14_6_val( app, "p14_6_val" );
     p14_6_val.set("p14_6_val", p14_6->value() );

   Fl_Preferences p14_7_val( app, "p14_7_val" );
     p14_7_val.set("p14_7_val", p14_7->value() );

   Fl_Preferences p14_8_val( app, "p14_8_val" );
     p14_8_val.set("p14_8_val", p14_8->value() );

   Fl_Preferences p14_9_val( app, "p14_9_val" );
     p14_9_val.set("p14_9_val", p14_9->value() );

   Fl_Preferences p14_10_val( app, "p14_10_val" );
     p14_10_val.set("p14_10_val", p14_10->value() );

   Fl_Preferences p14_11_val( app, "p14_11_val" );
     p14_11_val.set("p14_11_val", p14_11->value() );

   Fl_Preferences p14_12_val( app, "p14_12_val" );
     p14_12_val.set("p14_12_val", p14_12->value() );


   Fl_Preferences p15_1_val( app, "p15_1_val" );
     p15_1_val.set("p15_1_val", p15_1->value() );

   Fl_Preferences p15_2_val( app, "p15_2_val" );
     p15_2_val.set("p15_2_val", p15_2->value() );

   Fl_Preferences p15_3_val( app, "p15_3_val" );
     p15_3_val.set("p15_3_val", p15_3->value() );

   Fl_Preferences p15_4_val( app, "p15_4_val" );
     p15_4_val.set("p15_4_val", p15_4->value() );

   Fl_Preferences p15_5_val( app, "p15_5_val" );
     p15_5_val.set("p15_5_val", p15_5->value() );

   Fl_Preferences p15_6_val( app, "p15_6_val" );
     p15_6_val.set("p15_6_val", p15_6->value() );

   Fl_Preferences p15_7_val( app, "p15_7_val" );
     p15_7_val.set("p15_7_val", p15_7->value() );

   Fl_Preferences p15_8_val( app, "p15_8_val" );
     p15_8_val.set("p15_8_val", p15_8->value() );

   Fl_Preferences p15_9_val( app, "p15_9_val" );
     p15_9_val.set("p15_9_val", p15_9->value() );

   Fl_Preferences p15_10_val( app, "p15_10_val" );
     p15_10_val.set("p15_10_val", p15_10->value() );

   Fl_Preferences p15_11_val( app, "p15_11_val" );
     p15_11_val.set("p15_11_val", p15_11->value() );

   Fl_Preferences p15_12_val( app, "p15_12_val" );
     p15_12_val.set("p15_12_val", p15_12->value() );

}
void writePrefsSerieParams_cb(Fl_Widget*,void*)
{
    writePrefsSerieParams();
}

void writePrefsSerieParams2() {

Fl_Preferences app( Fl_Preferences::USER, dataPath->value(), txt_seriePath->value() );

////////////////////////////////////////////////////////////

   Fl_Preferences p6b_enable_val( app, "p6b_enable_val" );
     p6b_enable_val.set("p6b_enable_val", bt_enable_p6b->value() );

   Fl_Preferences p6b_enable_valCtp( app, "p6b_enable_valCtp" );
     p6b_enable_valCtp.set("p6b_enable_valCtp", bt_enable_p6bCtp->value() );

   Fl_Preferences p7b_enable_val( app, "p7b_enable_val" );
     p7b_enable_val.set("p7b_enable_val", bt_enable_p7b->value() );

   Fl_Preferences p7b_enable_valCtp( app, "p7b_enable_valCtp" );
     p7b_enable_valCtp.set("p7b_enable_valCtp", bt_enable_p7bCtp->value() );

   Fl_Preferences p8b_enable_val( app, "p8b_enable_val" );
     p8b_enable_val.set("p8b_enable_val", bt_enable_p8b->value() );

   Fl_Preferences p8b_enable_valCtp( app, "p8b_enable_valCtp" );
     p8b_enable_valCtp.set("p8b_enable_valCtp", bt_enable_p8bCtp->value() );

   Fl_Preferences p9b_enable_val( app, "p9b_enable_val" );
     p9b_enable_val.set("p9b_enable_val", bt_enable_p9b->value() );

   Fl_Preferences p9b_enable_valCtp( app, "p9b_enable_valCtp" );
     p9b_enable_valCtp.set("p9b_enable_valCtp", bt_enable_p9bCtp->value() );

   Fl_Preferences p10b_enable_val( app, "p10b_enable_val" );
     p10b_enable_val.set("p10b_enable_val", bt_enable_p10b->value() );

   Fl_Preferences p10b_enable_valCtp( app, "p10b_enable_valCtp" );
     p10b_enable_valCtp.set("p10b_enable_valCtp", bt_enable_p10bCtp->value() );

   Fl_Preferences p11b_enable_val( app, "p11b_enable_val" );
     p11b_enable_val.set("p11b_enable_val", bt_enable_p11b->value() );

   Fl_Preferences p11b_enable_valCtp( app, "p11b_enable_valCtp" );
     p11b_enable_valCtp.set("p11b_enable_valCtp", bt_enable_p11bCtp->value() );

   Fl_Preferences p12b_enable_val( app, "p12b_enable_val" );
     p12b_enable_val.set("p12b_enable_val", bt_enable_p12b->value() );

   Fl_Preferences p12b_enable_valCtp( app, "p12b_enable_valCtp" );
     p12b_enable_valCtp.set("p12b_enable_valCtp", bt_enable_p12bCtp->value() );

   Fl_Preferences p13b_enable_val( app, "p13b_enable_val" );
     p13b_enable_val.set("p13b_enable_val", bt_enable_p13b->value() );

   Fl_Preferences p13b_enable_valCtp( app, "p13b_enable_valCtp" );
     p13b_enable_valCtp.set("p13b_enable_valCtp", bt_enable_p13bCtp->value() );

   Fl_Preferences p14b_enable_val( app, "p14b_enable_val" );
     p14b_enable_val.set("p14b_enable_val", bt_enable_p14b->value() );

   Fl_Preferences p14b_enable_valCtp( app, "p14b_enable_valCtp" );
     p14b_enable_valCtp.set("p14b_enable_valCtp", bt_enable_p14bCtp->value() );

   Fl_Preferences p15b_enable_val( app, "p15b_enable_val" );
     p15b_enable_val.set("p15b_enable_val", bt_enable_p15b->value() );

   Fl_Preferences p15b_enable_valCtp( app, "p15b_enable_valCtp" );
     p15b_enable_valCtp.set("p15b_enable_valCtp", bt_enable_p15bCtp->value() );

//////////////////////////////////////////////////////////////////////////////

   Fl_Preferences p6_1b_val( app, "p6_1b_val" );
     p6_1b_val.set("p6_1b_val", p6_1b->value() );

   Fl_Preferences p6_2b_val( app, "p6_2b_val" );
     p6_2b_val.set("p6_2b_val", p6_2b->value() );

   Fl_Preferences p6_3b_val( app, "p6_3b_val" );
     p6_3b_val.set("p6_3b_val", p6_3b->value() );

   Fl_Preferences p6_4b_val( app, "p6_4b_val" );
     p6_4b_val.set("p6_4b_val", p6_4b->value() );

   Fl_Preferences p6_5b_val( app, "p6_5b_val" );
     p6_5b_val.set("p6_5b_val", p6_5b->value() );

   Fl_Preferences p6_6b_val( app, "p6_6b_val" );
     p6_6b_val.set("p6_6b_val", p6_6b->value() );

   Fl_Preferences p6_7b_val( app, "p6_7b_val" );
     p6_7b_val.set("p6_7b_val", p6_7b->value() );

   Fl_Preferences p6_8b_val( app, "p6_8b_val" );
     p6_8b_val.set("p6_8b_val", p6_8b->value() );

   Fl_Preferences p6_9b_val( app, "p6_9b_val" );
     p6_9b_val.set("p6_9b_val", p6_9b->value() );

   Fl_Preferences p6_10b_val( app, "p6_10b_val" );
     p6_10b_val.set("p6_10b_val", p6_10b->value() );

   Fl_Preferences p6_11b_val( app, "p6_11b_val" );
     p6_11b_val.set("p6_11b_val", p6_11b->value() );

   Fl_Preferences p6_12b_val( app, "p6_12b_val" );
     p6_12b_val.set("p6_12b_val", p6_12b->value() );

   Fl_Preferences p7_1b_val( app, "p7_1b_val" );
     p7_1b_val.set("p7_1b_val", p7_1b->value() );

   Fl_Preferences p7_2b_val( app, "p7_2b_val" );
     p7_2b_val.set("p7_2b_val", p7_2b->value() );

   Fl_Preferences p7_3b_val( app, "p7_3b_val" );
     p7_3b_val.set("p7_3b_val", p7_3b->value() );

   Fl_Preferences p7_4b_val( app, "p7_4b_val" );
     p7_4b_val.set("p7_4b_val", p7_4b->value() );

   Fl_Preferences p7_5b_val( app, "p7_5b_val" );
     p7_5b_val.set("p7_5b_val", p7_5b->value() );

   Fl_Preferences p7_6b_val( app, "p7_6b_val" );
     p7_6b_val.set("p7_6b_val", p7_6b->value() );

   Fl_Preferences p7_7b_val( app, "p7_7b_val" );
     p7_7b_val.set("p7_7b_val", p7_7b->value() );

   Fl_Preferences p7_8b_val( app, "p7_8b_val" );
     p7_8b_val.set("p7_8b_val", p7_8b->value() );

   Fl_Preferences p7_9b_val( app, "p7_9b_val" );
     p7_9b_val.set("p7_9b_val", p7_9b->value() );

   Fl_Preferences p7_10b_val( app, "p7_10b_val" );
     p7_10b_val.set("p7_10b_val", p7_10b->value() );

   Fl_Preferences p7_11b_val( app, "p7_11b_val" );
     p7_11b_val.set("p7_11b_val", p7_11b->value() );

   Fl_Preferences p7_12b_val( app, "p7_12b_val" );
     p7_12b_val.set("p7_12b_val", p7_12b->value() );

   Fl_Preferences p8_1b_val( app, "p8_1b_val" );
     p8_1b_val.set("p8_1b_val", p8_1b->value() );

   Fl_Preferences p8_2b_val( app, "p8_2b_val" );
     p8_2b_val.set("p8_2b_val", p8_2b->value() );

   Fl_Preferences p8_3b_val( app, "p8_3b_val" );
     p8_3b_val.set("p8_3b_val", p8_3b->value() );

   Fl_Preferences p8_4b_val( app, "p8_4b_val" );
     p8_4b_val.set("p8_4b_val", p8_4b->value() );

   Fl_Preferences p8_5b_val( app, "p8_5b_val" );
     p8_5b_val.set("p8_5b_val", p8_5b->value() );

   Fl_Preferences p8_6b_val( app, "p8_6b_val" );
     p8_6b_val.set("p8_6b_val", p8_6b->value() );

   Fl_Preferences p8_7b_val( app, "p8_7b_val" );
     p8_7b_val.set("p8_7b_val", p8_7b->value() );

   Fl_Preferences p8_8b_val( app, "p8_8b_val" );
     p8_8b_val.set("p8_8b_val", p8_8b->value() );

   Fl_Preferences p8_9b_val( app, "p8_9b_val" );
     p8_9b_val.set("p8_9b_val", p8_9b->value() );

   Fl_Preferences p8_10b_val( app, "p8_10b_val" );
     p8_10b_val.set("p8_10b_val", p8_10b->value() );

   Fl_Preferences p8_11b_val( app, "p8_11b_val" );
     p8_11b_val.set("p8_11b_val", p8_11b->value() );

   Fl_Preferences p8_12b_val( app, "p8_12b_val" );
     p8_12b_val.set("p8_12b_val", p8_12b->value() );

   Fl_Preferences p9_1b_val( app, "p9_1b_val" );
     p9_1b_val.set("p9_1b_val", p9_1b->value() );

   Fl_Preferences p9_2b_val( app, "p9_2b_val" );
     p9_2b_val.set("p9_2b_val", p9_2b->value() );

   Fl_Preferences p9_3b_val( app, "p9_3b_val" );
     p9_3b_val.set("p9_3b_val", p9_3b->value() );

   Fl_Preferences p9_4b_val( app, "p9_4b_val" );
     p9_4b_val.set("p9_4b_val", p9_4b->value() );

   Fl_Preferences p9_5b_val( app, "p9_5b_val" );
     p9_5b_val.set("p9_5b_val", p9_5b->value() );

   Fl_Preferences p9_6b_val( app, "p9_6b_val" );
     p9_6b_val.set("p9_6b_val", p9_6b->value() );

   Fl_Preferences p9_7b_val( app, "p9_7b_val" );
     p9_7b_val.set("p9_7b_val", p9_7b->value() );

   Fl_Preferences p9_8b_val( app, "p9_8b_val" );
     p9_8b_val.set("p9_8b_val", p9_8b->value() );

   Fl_Preferences p9_9b_val( app, "p9_9b_val" );
     p9_9b_val.set("p9_9b_val", p9_9b->value() );

   Fl_Preferences p9_10b_val( app, "p9_10b_val" );
     p9_10b_val.set("p9_10b_val", p9_10b->value() );

   Fl_Preferences p9_11b_val( app, "p9_11b_val" );
     p9_11b_val.set("p9_11b_val", p9_11b->value() );

   Fl_Preferences p9_12b_val( app, "p9_12b_val" );
     p9_12b_val.set("p9_12b_val", p9_12b->value() );

   Fl_Preferences p10_1b_val( app, "p10_1b_val" );
     p10_1b_val.set("p10_1b_val", p10_1b->value() );

   Fl_Preferences p10_2b_val( app, "p10_2b_val" );
     p10_2b_val.set("p10_2b_val", p10_2b->value() );

   Fl_Preferences p10_3b_val( app, "p10_3b_val" );
     p10_3b_val.set("p10_3b_val", p10_3b->value() );

   Fl_Preferences p10_4b_val( app, "p10_4b_val" );
     p10_4b_val.set("p10_4b_val", p10_4b->value() );

   Fl_Preferences p10_5b_val( app, "p10_5b_val" );
     p10_5b_val.set("p10_5b_val", p10_5b->value() );

   Fl_Preferences p10_6b_val( app, "p10_6b_val" );
     p10_6b_val.set("p10_6b_val", p10_6b->value() );

   Fl_Preferences p10_7b_val( app, "p10_7b_val" );
     p10_7b_val.set("p10_7b_val", p10_7b->value() );

   Fl_Preferences p10_8b_val( app, "p10_8b_val" );
     p10_8b_val.set("p10_8b_val", p10_8b->value() );

   Fl_Preferences p10_9b_val( app, "p10_9b_val" );
     p10_9b_val.set("p10_9b_val", p10_9b->value() );

   Fl_Preferences p10_10b_val( app, "p10_10b_val" );
     p10_10b_val.set("p10_10b_val", p10_10b->value() );

   Fl_Preferences p10_11b_val( app, "p10_11b_val" );
     p10_11b_val.set("p10_11b_val", p10_11b->value() );

   Fl_Preferences p10_12b_val( app, "p10_12b_val" );
     p10_12b_val.set("p10_12b_val", p10_12b->value() );

   Fl_Preferences p11_1b_val( app, "p11_1b_val" );
     p11_1b_val.set("p11_1b_val", p11_1b->value() );

   Fl_Preferences p11_2b_val( app, "p11_2b_val" );
     p11_2b_val.set("p11_2b_val", p11_2b->value() );

   Fl_Preferences p11_3b_val( app, "p11_3b_val" );
     p11_3b_val.set("p11_3b_val", p11_3b->value() );

   Fl_Preferences p11_4b_val( app, "p11_4b_val" );
     p11_4b_val.set("p11_4b_val", p11_4b->value() );

   Fl_Preferences p11_5b_val( app, "p11_5b_val" );
     p11_5b_val.set("p11_5b_val", p11_5b->value() );

   Fl_Preferences p11_6b_val( app, "p11_6b_val" );
     p11_6b_val.set("p11_6b_val", p11_6b->value() );

   Fl_Preferences p11_7b_val( app, "p11_7b_val" );
     p11_7b_val.set("p11_7b_val", p11_7b->value() );

   Fl_Preferences p11_8b_val( app, "p11_8b_val" );
     p11_8b_val.set("p11_8b_val", p11_8b->value() );

   Fl_Preferences p11_9b_val( app, "p11_9b_val" );
     p11_9b_val.set("p11_9b_val", p11_9b->value() );

   Fl_Preferences p11_10b_val( app, "p11_10b_val" );
     p11_10b_val.set("p11_10b_val", p11_10b->value() );

   Fl_Preferences p11_11b_val( app, "p11_11b_val" );
     p11_11b_val.set("p11_11b_val", p11_11b->value() );

   Fl_Preferences p11_12b_val( app, "p11_12b_val" );
     p11_12b_val.set("p11_12b_val", p11_12b->value() );

   Fl_Preferences p12_1b_val( app, "p12_1b_val" );
     p12_1b_val.set("p12_1b_val", p12_1b->value() );

   Fl_Preferences p12_2b_val( app, "p12_2b_val" );
     p12_2b_val.set("p12_2b_val", p12_2b->value() );

   Fl_Preferences p12_3b_val( app, "p12_3b_val" );
     p12_3b_val.set("p12_3b_val", p12_3b->value() );

   Fl_Preferences p12_4b_val( app, "p12_4b_val" );
     p12_4b_val.set("p12_4b_val", p12_4b->value() );

   Fl_Preferences p12_5b_val( app, "p12_5b_val" );
     p12_5b_val.set("p12_5b_val", p12_5b->value() );

   Fl_Preferences p12_6b_val( app, "p12_6b_val" );
     p12_6b_val.set("p12_6b_val", p12_6b->value() );

   Fl_Preferences p12_7b_val( app, "p12_7b_val" );
     p12_7b_val.set("p12_7b_val", p12_7b->value() );

   Fl_Preferences p12_8b_val( app, "p12_8b_val" );
     p12_8b_val.set("p12_8b_val", p12_8b->value() );

   Fl_Preferences p12_9b_val( app, "p12_9b_val" );
     p12_9b_val.set("p12_9b_val", p12_9b->value() );

   Fl_Preferences p12_10b_val( app, "p12_10b_val" );
     p12_10b_val.set("p12_10b_val", p12_10b->value() );

   Fl_Preferences p12_11b_val( app, "p12_11b_val" );
     p12_11b_val.set("p12_11b_val", p12_11b->value() );

   Fl_Preferences p12_12b_val( app, "p12_12b_val" );
     p12_12b_val.set("p12_12b_val", p12_12b->value() );

   Fl_Preferences p13_1b_val( app, "p13_1b_val" );
     p13_1b_val.set("p13_1b_val", p13_1b->value() );

   Fl_Preferences p13_2b_val( app, "p13_2b_val" );
     p13_2b_val.set("p13_2b_val", p13_2b->value() );

   Fl_Preferences p13_3b_val( app, "p13_3b_val" );
     p13_3b_val.set("p13_3b_val", p13_3b->value() );

   Fl_Preferences p13_4b_val( app, "p13_4b_val" );
     p13_4b_val.set("p13_4b_val", p13_4b->value() );

   Fl_Preferences p13_5b_val( app, "p13_5b_val" );
     p13_5b_val.set("p13_5b_val", p13_5b->value() );

   Fl_Preferences p13_6b_val( app, "p13_6b_val" );
     p13_6b_val.set("p13_6b_val", p13_6b->value() );

   Fl_Preferences p13_7b_val( app, "p13_7b_val" );
     p13_7b_val.set("p13_7b_val", p13_7b->value() );

   Fl_Preferences p13_8b_val( app, "p13_8b_val" );
     p13_8b_val.set("p13_8b_val", p13_8b->value() );

   Fl_Preferences p13_9b_val( app, "p13_9b_val" );
     p13_9b_val.set("p13_9b_val", p13_9b->value() );

   Fl_Preferences p13_10b_val( app, "p13_10b_val" );
     p13_10b_val.set("p13_10b_val", p13_10b->value() );

   Fl_Preferences p13_11b_val( app, "p13_11b_val" );
     p13_11b_val.set("p13_11b_val", p13_11b->value() );

   Fl_Preferences p13_12b_val( app, "p13_12b_val" );
     p13_12b_val.set("p13_12b_val", p13_12b->value() );

   Fl_Preferences p14_1b_val( app, "p14_1b_val" );
     p14_1b_val.set("p14_1b_val", p14_1b->value() );

   Fl_Preferences p14_2b_val( app, "p14_2b_val" );
     p14_2b_val.set("p14_2b_val", p14_2b->value() );

   Fl_Preferences p14_3b_val( app, "p14_3b_val" );
     p14_3b_val.set("p14_3b_val", p14_3b->value() );

   Fl_Preferences p14_4b_val( app, "p14_4b_val" );
     p14_4b_val.set("p14_4b_val", p14_4b->value() );

   Fl_Preferences p14_5b_val( app, "p14_5b_val" );
     p14_5b_val.set("p14_5b_val", p14_5b->value() );

   Fl_Preferences p14_6b_val( app, "p14_6b_val" );
     p14_6b_val.set("p14_6b_val", p14_6b->value() );

   Fl_Preferences p14_7b_val( app, "p14_7b_val" );
     p14_7b_val.set("p14_7b_val", p14_7b->value() );

   Fl_Preferences p14_8b_val( app, "p14_8b_val" );
     p14_8b_val.set("p14_8b_val", p14_8b->value() );

   Fl_Preferences p14_9b_val( app, "p14_9b_val" );
     p14_9b_val.set("p14_9b_val", p14_9b->value() );

   Fl_Preferences p14_10b_val( app, "p14_10b_val" );
     p14_10b_val.set("p14_10b_val", p14_10b->value() );

   Fl_Preferences p14_11b_val( app, "p14_11b_val" );
     p14_11b_val.set("p14_11b_val", p14_11b->value() );

   Fl_Preferences p14_12b_val( app, "p14_12b_val" );
     p14_12b_val.set("p14_12b_val", p14_12b->value() );

   Fl_Preferences p15_1b_val( app, "p15_1b_val" );
     p15_1b_val.set("p15_1b_val", p15_1b->value() );

   Fl_Preferences p15_2b_val( app, "p15_2b_val" );
     p15_2b_val.set("p15_2b_val", p15_2b->value() );

   Fl_Preferences p15_3b_val( app, "p15_3b_val" );
     p15_3b_val.set("p15_3b_val", p15_3b->value() );

   Fl_Preferences p15_4b_val( app, "p15_4b_val" );
     p15_4b_val.set("p15_4b_val", p15_4b->value() );

   Fl_Preferences p15_5b_val( app, "p15_5b_val" );
     p15_5b_val.set("p15_5b_val", p15_5b->value() );

   Fl_Preferences p15_6b_val( app, "p15_6b_val" );
     p15_6b_val.set("p15_6b_val", p15_6b->value() );

   Fl_Preferences p15_7b_val( app, "p15_7b_val" );
     p15_7b_val.set("p15_7b_val", p15_7b->value() );

   Fl_Preferences p15_8b_val( app, "p15_8b_val" );
     p15_8b_val.set("p15_8b_val", p15_8b->value() );

   Fl_Preferences p15_9b_val( app, "p15_9b_val" );
     p15_9b_val.set("p15_9b_val", p15_9b->value() );

   Fl_Preferences p15_10b_val( app, "p15_10b_val" );
     p15_10b_val.set("p15_10b_val", p15_10b->value() );

   Fl_Preferences p15_11b_val( app, "p15_11b_val" );
     p15_11b_val.set("p15_11b_val", p15_11b->value() );

   Fl_Preferences p15_12b_val( app, "p15_12b_val" );
     p15_12b_val.set("p15_12b_val", p15_12b->value() );

}
/*
void writePrefsSerieParams2_cb(Fl_Widget*,void*)
{
    writePrefsSerieParams2();
}
*/
