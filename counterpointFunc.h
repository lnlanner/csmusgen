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
/*INIZIALIZZAZIONE DEGLI ARRAY PER I PARAMETRI PITCH DUR DB INSTR */
int contrappunto::init_params()
{
     tcrom[0] = 5.0;
     tcrom[1] = 5.01;
     tcrom[2] = 5.02;
     tcrom[3] = 5.03;
     tcrom[4] = 5.04;
     tcrom[5] = 5.05;
     tcrom[6] = 5.06;
     tcrom[7] = 5.07;
     tcrom[8] = 5.08;
     tcrom[9] = 5.09;
     tcrom[10] = 5.10;
     tcrom[11] = 5.11;

     tcrom[12] = 6.0;
     tcrom[13] = 6.01;
     tcrom[14] = 6.02;
     tcrom[15] = 6.03;
     tcrom[16] = 6.04;
     tcrom[17] = 6.05;
     tcrom[18] = 6.06;
     tcrom[19] = 6.07;
     tcrom[20] = 6.08;
     tcrom[21] = 6.09;
     tcrom[22] = 6.10;
     tcrom[23] = 6.11;

     tcrom[24] = 7.0;
     tcrom[25] = 7.01;
     tcrom[26] = 7.02;
     tcrom[27] = 7.03;
     tcrom[28] = 7.04;
     tcrom[29] = 7.05;
     tcrom[30] = 7.06;
     tcrom[31] = 7.07;
     tcrom[32] = 7.08;
     tcrom[33] = 7.09;
     tcrom[34] = 7.10;
     tcrom[35] = 7.11;

     tcrom[36] = 8.0;
     tcrom[37] = 8.01;
     tcrom[38] = 8.02;
     tcrom[39] = 8.03;
     tcrom[40] = 8.04;
     tcrom[41] = 8.05;
     tcrom[42] = 8.06;
     tcrom[43] = 8.07;
     tcrom[44] = 8.08;
     tcrom[45] = 8.09;
     tcrom[46] = 8.10;
     tcrom[47] = 8.11;

     tcrom[48] = 9.0;
     tcrom[49] = 9.01;
     tcrom[50] = 9.02;
     tcrom[51] = 9.03;
     tcrom[52] = 9.04;
     tcrom[53] = 9.05;
     tcrom[54] = 9.06;
     tcrom[55] = 9.07;
     tcrom[56] = 9.08;
     tcrom[57] = 9.09;
     tcrom[58] = 9.10;
     tcrom[59] = 9.11;

     tcrom[60] = 10.0;
     tcrom[61] = 10.01;
     tcrom[62] = 10.02;
     tcrom[63] = 10.03;
     tcrom[64] = 10.04;
     tcrom[65] = 10.05;
     tcrom[66] = 10.06;
     tcrom[67] = 10.07;
     tcrom[68] = 10.08;
     tcrom[69] = 10.09;
     tcrom[70] = 10.10;
     tcrom[71] = 10.11;

     tcrom[72] = 11.0;
     tcrom[73] = 11.01;
     tcrom[74] = 11.02;
     tcrom[75] = 11.03;
     tcrom[76] = 11.04;
     tcrom[77] = 11.05;
     tcrom[78] = 11.06;
     tcrom[79] = 11.07;
     tcrom[80] = 11.08;
     tcrom[81] = 11.09;
     tcrom[82] = 11.10;
     tcrom[83] = 11.11;

////array intensita'
    tdb[0] = 40;
    tdb[1] = 41;
    tdb[2] = 42;
    tdb[3] = 43;
    tdb[4] = 44;
    tdb[5] = 45;
    tdb[6] = 46;
    tdb[7] = 47;
    tdb[8] = 48;
    tdb[9] = 49;

    tdb[10] = 50;
    tdb[11] = 51;
    tdb[12] = 52;
    tdb[13] = 53;
    tdb[14] = 54;
    tdb[15] = 55;
    tdb[16] = 56;
    tdb[17] = 57;
    tdb[18] = 58;
    tdb[19] = 59;

    tdb[20] = 60;
    tdb[21] = 61;
    tdb[22] = 62;
    tdb[23] = 63;
    tdb[24] = 64;
    tdb[25] = 65;
    tdb[26] = 66;
    tdb[27] = 67;
    tdb[28] = 68;
    tdb[29] = 69;

    tdb[30] = 70;
    tdb[31] = 71;
    tdb[32] = 72;
    tdb[33] = 73;
    tdb[34] = 74;
    tdb[35] = 75;
    tdb[36] = 76;
    tdb[37] = 77;
    tdb[38] = 78;
    tdb[39] = 79;

    tdb[40] = 80;
    tdb[41] = 81;
    tdb[42] = 82;
    tdb[43] = 83;
    tdb[44] = 84;
    tdb[45] = 85;
    tdb[46] = 86;
    tdb[47] = 87;
    tdb[48] = 88;
    tdb[49] = 89;

    tdb[50] = 90;
    tdb[51] = 91;
    tdb[52] = 92;
    tdb[53] = 93;
    tdb[54] = 94;
    tdb[55] = 95;
    tdb[56] = 96;
    tdb[57] = 97;
    tdb[58] = 98;
    tdb[59] = 99;

    tdb[60] = 100;
    tdb[61] = 101;
    tdb[62] = 102;
    tdb[63] = 103;
    tdb[64] = 104;
    tdb[65] = 105;
    tdb[66] = 106;
    tdb[67] = 107;
    tdb[68] = 108;
    tdb[69] = 109;

    tdb[70] = 110;
    tdb[71] = 111;
    tdb[72] = 112;
    tdb[73] = 113;
    tdb[74] = 114;
    tdb[75] = 115;
    tdb[76] = 116;
    tdb[77] = 117;
    tdb[78] = 118;
    tdb[79] = 119;


tdur[0] = 0.125;
tdur[1] = 0.25;
tdur[2] = 0.375;
tdur[3] = 0.5;
tdur[4] = 0.625;
tdur[5] = 0.75;
tdur[6] = 0.875;
tdur[7] = 1;
tdur[8] = 1.125;
tdur[9] = 1.25;
tdur[10] = 1.375;
tdur[11] = 1.5;
tdur[12] = 1.625;
tdur[13] = 1.75;
tdur[14] = 1.875;
tdur[15] = 2;
tdur[16] = 2.125;
tdur[17] = 2.25;
tdur[18] = 2.375;
tdur[19] = 2.5;
tdur[20] = 2.625;
tdur[21] = 2.75;
tdur[22] = 2.875;
tdur[23] = 3;
tdur[24] = 3.125;
tdur[25] = 3.25;
tdur[26] = 3.375;
tdur[27] = 3.5;
tdur[28] = 3.625;
tdur[29] = 3.75;
tdur[30] = 3.875;
tdur[31] = 4;
tdur[32] = 4.125;
tdur[33] = 4.25;
tdur[34] = 4.375;
tdur[35] = 4.5;
tdur[36] = 4.625;
tdur[37] = 4.75;
tdur[38] = 4.875;
tdur[39] = 5;
tdur[40] = 5.125;
tdur[41] = 5.25;
tdur[42] = 5.375;
tdur[43] = 5.5;
tdur[44] = 5.625;
tdur[45] = 5.75;
tdur[46] = 5.875;
tdur[47] = 6;
tdur[48] = 6.125;
tdur[49] = 6.25;
tdur[50] = 6.375;
tdur[51] = 6.5;
tdur[52] = 6.625;
tdur[53] = 6.75;
tdur[54] = 6.875;
tdur[55] = 7;
tdur[56] = 7.125;
tdur[57] = 7.25;
tdur[58] = 7.375;
tdur[59] = 7.5;
tdur[60] = 7.625;
tdur[61] = 7.75;
tdur[62] = 7.875;
tdur[63] = 8;
tdur[64] = 8.125;
tdur[65] = 8.25;
tdur[66] = 8.375;
tdur[67] = 8.5;
tdur[68] = 8.625;
tdur[69] = 8.75;
tdur[70] = 8.875;
tdur[71] = 9;
tdur[72] = 9.125;
tdur[73] = 9.25;
tdur[74] = 9.375;
tdur[75] = 9.5;
tdur[76] = 9.625;
tdur[77] = 9.75;
tdur[78] = 9.875;
tdur[79] = 10;
tdur[80] = 10.125;
tdur[81] = 10.25;
tdur[82] = 10.375;
tdur[83] = 10.5;
tdur[84] = 10.625;
tdur[85] = 10.75;
tdur[86] = 10.875;
tdur[87] = 11;
tdur[88] = 11.125;
tdur[89] = 11.25;
tdur[90] = 11.375;
tdur[91] = 11.5;
tdur[92] = 11.625;
tdur[93] = 11.75;
tdur[94] = 11.875;
tdur[95] = 12;
tdur[96] = 12.125;
tdur[97] = 12.25;
tdur[98] = 12.375;
tdur[99] = 12.5;
tdur[100] = 12.625;
tdur[101] = 12.75;
tdur[102] = 12.875;



            
////array instr
    tInstr[0] = 1;
    tInstr[1] = 2;
    tInstr[2] = 3;
    tInstr[3] = 4;
    tInstr[4] = 5;
    tInstr[5] = 6;
    tInstr[6] = 7;
    tInstr[7] = 8;
    tInstr[8] = 9;
    tInstr[9] = 10;
    tInstr[10] = 11;
    tInstr[11] = 12;
    tInstr[12] = 13;
    tInstr[13] = 14;
    tInstr[14] = 15;
    tInstr[15] = 16;
    tInstr[16] = 17;
    tInstr[17] = 18;
    tInstr[18] = 19;
    tInstr[19] = 20;
    tInstr[20] = 21;
    tInstr[21] = 22;
    tInstr[22] = 23;
    tInstr[23] = 24;
    
    //initializing act
    int i = (int)max_act->value();
    for ( i = 0; i < 1800; i++ )
    {
    tact[i] = i;
    }
}

void select_val()
{
    formula f1, f2;
    f1.trp_seq();
    
        if (f1.l > f1.k)
            {
            f2.solveFormula();
            o = u;
            }
        else if (f1.l < f1.k)
            {
            f2.solveFormula();
            o = v;
            }
}
