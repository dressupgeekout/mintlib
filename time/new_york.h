/*  new_york.h -- MiNTLib.
    Copyright (C) 1999 Guido Flohr <gufl0000@stud.uni-sb.de>

    This file is part of the MiNTLib project, and may only be used
    modified and distributed under the terms of the MiNTLib project
    license, COPYMINT.  By continuing to use, modify, or distribute
    this file you indicate that you have read the license and
    understand and accept it fully.
*/

/* This file gets included by tz.c to get default rules in the
   absence of a default rules file in TZDIR.  Its contents is
   pretty self-explanatory.  NOTE: It is STRONGLY recommended
   that you learn the contents of this file by heart!  */
static const struct state new_york =
{
  0,  /* leapcnt */
  234,  /* timecnt */
  3,  /* typecnt */
  12,  /* charcnt */
  { /* ats */
    -1633280400L, -1615140000L, -1601830800L, -1583690400L, 
    -1570381200L, -1551636000L, -1536512400L, -1523210400L, 
    -1504458000L, -1491760800L, -1473008400L, -1459706400L, 
    -1441558800L, -1428256800L, -1410109200L, -1396807200L, 
    -1378659600L, -1365357600L, -1347210000L, -1333908000L, 
    -1315155600L, -1301853600L, -1283706000L, -1270404000L, 
    -1252256400L, -1238954400L, -1220806800L, -1207504800L, 
    -1189357200L, -1176055200L, -1157302800L, -1144605600L, 
    -1125853200L, -1112551200L, -1094403600L, -1081101600L, 
    -1062954000L, -1049652000L, -1031504400L, -1018202400L, 
    -1000054800L, -986752800L, -968000400L, -955303200L, 
    -936550800L, -923248800L, -905101200L, -891799200L, 
    -880218000L, -765396000L, -747248400L, -733946400L, 
    -715798800L, -702496800L, -684349200L, -671047200L, 
    -652899600L, -639597600L, -620845200L, -608148000L, 
    -589395600L, -576093600L, -557946000L, -544644000L, 
    -526496400L, -513194400L, -495046800L, -481744800L, 
    -463597200L, -447271200L, -431542800L, -415821600L, 
    -400093200L, -384372000L, -368643600L, -352922400L, 
    -337194000L, -321472800L, -305744400L, -289418400L, 
    -273690000L, -257968800L, -242240400L, -226519200L, 
    -210790800L, -195069600L, -179341200L, -163620000L, 
    -147891600L, -131565600L, -116442000L, -100116000L, 
    -84387600L, -68666400L, -52938000L, -37216800L, 
    -21488400L, -5767200L, 9961200L, 25682400L, 
    41410800L, 57736800L, 73465200L, 89186400L, 
    104914800L, 120636000L, 126687600L, 152085600L, 
    162370800L, 183535200L, 199263600L, 215589600L, 
    230713200L, 247039200L, 262767600L, 278488800L, 
    294217200L, 309938400L, 325666800L, 341388000L, 
    357116400L, 372837600L, 388566000L, 404892000L, 
    420015600L, 436341600L, 452070000L, 467791200L, 
    483519600L, 499240800L, 514969200L, 530690400L, 
    544604400L, 562140000L, 576054000L, 594194400L, 
    607503600L, 625644000L, 638953200L, 657093600L, 
    671007600L, 688543200L, 702457200L, 719992800L, 
    733906800L, 752047200L, 765356400L, 783496800L, 
    796806000L, 814946400L, 828860400L, 846396000L, 
    860310000L, 877845600L, 891759600L, 909295200L, 
    923209200L, 941349600L, 954658800L, 972799200L, 
    986108400L, 1004248800L, 1018162800L, 1035698400L, 
    1049612400L, 1067148000L, 1081062000L, 1099202400L, 
    1112511600L, 1130652000L, 1143961200L, 1162101600L, 
    1175410800L, 1193551200L, 1207465200L, 1225000800L, 
    1238914800L, 1256450400L, 1270364400L, 1288504800L, 
    1301814000L, 1319954400L, 1333263600L, 1351404000L, 
    1365318000L, 1382853600L, 1396767600L, 1414303200L, 
    1428217200L, 1445752800L, 1459666800L, 1477807200L, 
    1491116400L, 1509256800L, 1522566000L, 1540706400L, 
    1554620400L, 1572156000L, 1586070000L, 1603605600L, 
    1617519600L, 1635660000L, 1648969200L, 1667109600L, 
    1680418800L, 1698559200L, 1712473200L, 1730008800L, 
    1743922800L, 1761458400L, 1775372400L, 1792908000L, 
    1806822000L, 1824962400L, 1838271600L, 1856412000L, 
    1869721200L, 1887861600L, 1901775600L, 1919311200L, 
    1933225200L, 1950760800L, 1964674800L, 1982815200L, 
    1996124400L, 2014264800L, 2027574000L, 2045714400L, 
    2059023600L, 2077164000L, 2091078000L, 2108613600L, 
    2122527600L, 2140063200L, 0L, 0L, 
    0L, 0L, 0L, 0L, 
    0L, 0L, 0L, 0L, 
    0L, 0L, 0L, 0L, 
    0L, 0L, 0L, 0L, 
    0L, 0L, 0L, 0L, 
  },
  { /* types */
    0, 1, 0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 
    2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 0, 0, 0, 0, 0, 0, 
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  },
  { /* ttis */
    { -14400, 1, 0, 0, 0 }, { -18000, 0, 4, 0, 0 }, 
    { -14400, 1, 8, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 },
  },
  { /* chars */    
    'E', 'W', 'T', '\000', 
    'E', 'S', 'T', '\000', 
    'E', 'D', 'T', '\000', 
    '\000', '\000', '\000', '\000',   
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000',
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
    '\000', '\000', '\000', '\000', '\000', '\000', '\000', '\000', 
  },
  { /* lsis */
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 }, { 0, 0 }, { 0, 0 },
    { 0, 0 }, { 0, 0 },
  }
};
