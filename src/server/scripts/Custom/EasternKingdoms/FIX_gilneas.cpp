///*
//* This file is part of the Pandaria 5.4.8 Project. See THANKS file for Copyright information
//*
//* This program is free software; you can redistribute it and/or modify it
//* under the terms of the GNU General Public License as published by the
//* Free Software Foundation; either version 2 of the License, or (at your
//* option) any later version.
//*
//* This program is distributed in the hope that it will be useful, but WITHOUT
//* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//* more details.
//*
//* You should have received a copy of the GNU General Public License along
//* with this program. If not, see <http://www.gnu.org/licenses/>.
//*/

#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ScriptedEscortAI.h"
#include "PassiveAI.h"
#include "Vehicle.h"
#include "GameObjectAI.h"
#include "TaskScheduler.h"

enum Gilneas
{
    SPELL_PING_GILNEAN_CROW                 = 93275,
    SPELL_SUMMON_RAVENOUS_WORGEN_1          = 66836,
    SPELL_SUMMON_RAVENOUS_WORGEN_2          = 66925,
    SPELL_SHOOT_INSTAKILL                   = 67593, // Visual problem
    SPELL_COSMETIC_ATTACK                   = 69873,
    SPELL_PULL_TO                           = 67357,
    SPELL_GET_SHOT                          = 67349,

    EVENT_START_TALK_WITH_CITIZEN           = 1,
    EVENT_TALK_WITH_CITIZEN_1               = 2,
    EVENT_TALK_WITH_CITIZEN_2               = 3,
    EVENT_TALK_WITH_CITIZEN_3               = 4,

    EVENT_START_DIALOG                      = 1,
    EVENT_START_TALK_TO_GUARD               = 2,
    EVENT_TALK_TO_GUARD_1                   = 3,
    EVENT_TALK_TO_GUARD_2                   = 4,
    EVENT_RESET_DIALOG                      = 5,

    PRINCE_LIAM_GREYMANE_TEXT_00            = 0,
    PRINCE_LIAM_GREYMANE_TEXT_01            = 1,
    PRINCE_LIAM_GREYMANE_TEXT_02            = 2,

    EVENT_JUMP_TO_PRISON                    = 1,
    EVENT_AGGRO_PLAYER                      = 2,
    EVENT_FORCE_DESPAWN                     = 3,

    EVENT_COSMETIC_ATTACK                   = 1,
    EVENT_JUMP_TO_PLAYER                    = 2,
    EVENT_SHOOT_JOSIAH                      = 3,

    PHASE_ROOF                              = 0,
    PHASE_COMBAT                            = 1,

    WORGEN_ID_ROOF_1                        = 0,
    WORGEN_ID_ROOF_2                        = 1,
    WORGEN_ID_ROOF_3                        = 2,
    WORGEN_ID_ROOF_4                        = 3,
    WORGEN_ID_ROOF_5                        = 4,
    WORGEN_ID_ROOF_6                        = 5,
    WORGEN_ID_ROOF_7                        = 6,

    WORGEN_ID_CATHEDRAL_1                   = 7,
    WORGEN_ID_CATHEDRAL_2                   = 8,
    WORGEN_ID_CATHEDRAL_3                   = 9,
    WORGEN_ID_CATHEDRAL_4                   = 10,
    WORGEN_ID_CATHEDRAL_5                   = 11,
    WORGEN_ID_CATHEDRAL_6                   = 12,
    WORGEN_ID_CATHEDRAL_7                   = 13,
    WORGEN_ID_CATHEDRAL_8                   = 14,
    WORGEN_ID_CATHEDRAL_9                   = 15,

    NPC_PANICKED_CITIZEN_GATE               = 44086,
    NPC_WORGEN_RUNT                         = 35456,
    NPC_WORGEN_RUNT_2                       = 35188,
    NPC_WORGEN_ALPHA                        = 35170,
    NPC_WORGEN_ALPHA_2                      = 35167,
    NPC_LORNA_CROWLEY                       = 35378,
    NPC_GENERIC_TRIGGER_LAB                 = 35374,

    SAY_JOSIAH_AVERY_1                      = 0,
    SAY_JOSIAH_AVERY_2                      = 1,
    SAY_JOSIAH_AVERY_3                      = 2,
    SAY_JOSIAH_AVERY_4                      = 3,
    SAY_JOSIAH_AVERY_5                      = 4,
    SAY_JOSIAH_AVERY_6                      = 5,

    QUEST_FROM_THE_SHADOWS                  = 14204,

    NPC_GILNEAS_MASTIFF                     = 35631,
    NPC_BLOODFANG_LURKER                    = 35463,

    SPELL_SUMMON_MASTIFF                    = 67807,
    SPELL_ATTACK_LURKER                     = 67805,
    SPELL_SHADOWSTALKER_STEALTH             = 5916,
    SPELL_UNDYING_FRENZY                    = 80515,
    SPELL_ENRAGE                            = 8599,

    WORGEN_ENRAGE_EMOTE                     = 0,

    QUEST_SAVE_KRENNAN_ARANAS               = 14293,

    NPC_KRENNAN_ARANAS                      = 35753,
    NPC_KING_GREYMANES_HORSE                = 35905,
    NPC_BLOODFANG_RIPPER                    = 35505,
    NPC_GILNEAS_CITY_GUARD                  = 35509,
    NPC_KRENNAN_ARANAS_KILL_CREDIT          = 35753,

    TEXT_KRENNAN_ARANAS                     = 0,
    EMOTE_SAVE_KRENNAN_ARANAS               = 0,
    TEXT_SAVED_KRENNAN_ARANAS               = 0,

    SPELL_GUARD_SHOOT                       = 48424,

    SPELL_SAVE_CYNTHIA                      = 68597,
    SPELL_SAVE_ASHLEY                       = 68598,
    SPELL_SAVE_JAMES                        = 68596,

    PLAYER_SAY_CYNTHIA                      = 0,
    PLAYER_SAY_ASHLEY                       = 1,
    PLAYER_SAY_JAMES                        = 2,

    NPC_JAMES                               = 36289,
    NPC_CYNTHIA                             = 36287,
    NPC_ASHLEY                              = 36288,

    EVENT_TALK_TO_PLAYER                    = 1,
    EVENT_START_RUN                         = 2,
    EVENT_OPEN_DOOR                         = 3,
    EVENT_RESUME_RUN                        = 4,
    EVENT_CRY                               = 5,

    CHILDREN_TEXT_ID                        = 0,

    GO_DOOR_TO_THE_BASEMENT                 = 196411,

    SPELL_CATCH_CAT                         = 68743,
    SPELL_LUCIUS_SHOOT                      = 41440,

    NPC_WAHL                                = 36458,
    NPC_WAHL_WORGEN                         = 36852,
    NPC_LUCIUS_THE_CRUEL                    = 36461,

    SAY_THIS_CAT_IS_MINE                    = 0,
    YELL_DONT_MESS                          = 0,

    ACTION_SUMMON_LUCIUS                    = 1,
    ACTION_CHANCE_DESPAWN                   = 2,
    ACTION_CONTINUE_SCENE                   = 3,

    POINT_CATCH_CHANCE                      = 4,

    SPELL_ROUND_UP_HORSE                    = 68908,
    SPELL_ROPE_CHANNEL                      = 68940,

    EVENT_CHECK_LORNA                       = 1,
    EVENT_CHECK_OWNER                       = 2,

    NPC_LORNA_CROWLEY_2                     = 36457,

    QUEST_THE_HUNGRY_ETTIN                  = 14416,

    QUEST_CREDIT_HORSE                      = 36560,

    MUSIC_ENTRY_TELESCOPE                   = 23539,
    PLAY_CINEMATIC_TELESCOPE                = 167,

    QUEST_ENTRY_EXODUS                      = 24438,

    NPC_STAGECOACH_HARNESS                  = 38755,
    NPC_HARNESS_SUMMONED                    = 43336,

    EVENT_BOARD_HARNESS_OWNER               = 1,

    ACTION_START_WP                         = 1,

    GO_FIRST_GATE                           = 196401,
    GO_KINGS_GATE                           = 196412,

    NPC_KOROTH_THE_HILLBREAKER              = 36294,

    ACTION_START_KOROTH_EVENT               = 1,

    EVENT_KOROTH_THE_HILLBREAKER_2          = 2,
    SAY_KOROTH_THE_HILLBREAKER_1            = 0,
    SAY_KOROTH_THE_HILLBREAKER_2            = 1
};

Position const runt2SummonJumpPos = { -1671.915f, 1446.734f, 52.28712f };
Position const alphaSummonJumpPos = { -1656.723f, 1405.647f, 52.74205f };
Position const alpha2SummonJumpPos = { -1675.44f, 1447.495f, 52.28762f };

Position const josiahJumpPos = { -1796.63f, 1427.73f, 12.4624f };

uint32 const runtHousePathSize1 = 13;

Position const worgenRuntHousePath1[runtHousePathSize1] =
{
    { -1734.77f, 1527.007f, 55.2133f },
    { -1729.345f, 1526.495f, 55.4231f },
    { -1723.921f, 1525.982f, 55.6329f },
    { -1718.885f, 1525.88f, 55.89785f },
    { -1718.002f, 1516.054f, 55.36457f },
    { -1718.162f, 1512.458f, 55.41572f },
    { -1717.852f, 1508.871f, 55.64134f },
    { -1717.868f, 1507.03f, 55.78084f },
    { -1717.939f, 1498.912f, 56.2076f },
    { -1717.975f, 1494.827f, 56.34147f },
    { -1717.666f, 1491.978f, 56.46574f },
    { -1717.708f, 1491.591f, 56.51286f },
    { -1717.708f, 1491.591f, 56.51286f },
};

uint32 const runtHousePathSize2 = 11;

Position const worgenRuntHousePath2[runtHousePathSize2] =
{
    {-1705.29f, 1527.974f, 57.49218f },
    {-1709.63f, 1527.464f, 56.81163f },
    {-1713.971f, 1526.953f, 56.13107f },
    {-1718.249f, 1525.915f, 55.91631f },
    {-1718.002f, 1516.054f, 55.36457f },
    {-1718.162f, 1512.458f, 55.41572f },
    {-1717.852f, 1508.871f, 55.64134f },
    {-1717.866f, 1507.038f, 55.7804f },
    {-1717.928f, 1498.872f, 56.20963f },
    {-1717.947f, 1496.298f, 56.29393f },
    {-1717.947f, 1496.298f, 56.29393f },
};

uint32 const runtHousePathSize3 = 8;

Position const worgenRuntHousePath3[runtHousePathSize3] =
{
    {-1717.74f, 1514.99f, 55.37629f },
    {-1717.75f, 1513.727f, 55.39608f },
    {-1717.76f, 1512.465f, 55.41587f },
    {-1717.787f, 1508.872f, 55.64124f },
    {-1717.799f, 1507.277f, 55.74761f },
    {-1717.864f, 1498.657f, 56.22049f },
    {-1717.887f, 1495.557f, 56.31728f },
    {-1717.887f, 1495.557f, 56.31728f },
};

uint32 const runtHousePathSize4 = 11;

Position const worgenRuntHousePath4[runtHousePathSize4] =
{
    { -1727.101f, 1527.078f, 55.5045f },
    { -1724.719f, 1526.731f, 55.60394f },
    { -1722.337f, 1526.383f, 55.70337f },
    { -1718.885f, 1525.88f, 55.89785f },
    { -1718.002f, 1516.054f, 55.36457f },
    { -1718.162f, 1512.458f, 55.41572f },
    { -1717.852f, 1508.871f, 55.64134f },
    { -1717.845f, 1507.113f, 55.77633f },
    { -1717.81f, 1498.482f, 56.22932f },
    { -1717.793f, 1494.123f, 56.37141f },
    { -1717.793f, 1494.123f, 56.37141f },
};

uint32 const runtHousePathSize5 = 11;

Position const worgenRuntHousePath5[runtHousePathSize5] =
{
    { -1709.699f, 1527.335f, 56.34836f },
    { -1713.974f, 1526.625f, 56.13234f },
    { -1718.249f, 1525.915f, 55.91631f },
    { -1718.002f, 1516.054f, 55.36457f },
    { -1718.162f, 1512.458f, 55.41572f },
    { -1717.852f, 1508.871f, 55.64134f },
    { -1717.891f, 1506.948f, 55.78529f },
    { -1718.047f, 1499.267f, 56.18964f },
    { -1718.125f, 1495.405f, 56.31914f },
    { -1717.693f, 1492.178f, 56.45717f },
    { -1717.693f, 1492.178f, 56.45717f },
};

uint32 const runtHousePathSize6 = 9;

Position const worgenRuntHousePath6[runtHousePathSize6] =
{
    { -1718.083f, 1532.09f, 56.25435f },
    { -1718.104f, 1524.071f, 55.80854f },
    { -1718.125f, 1516.053f, 55.36273f },
    { -1718.134f, 1512.459f, 55.41573f },
    { -1718.143f, 1508.866f, 55.64067f },
    { -1718.151f, 1506.013f, 55.83052f },
    { -1718.167f, 1499.665f, 56.16953f },
    { -1718.172f, 1497.578f, 56.24289f },
    { -1718.172f, 1497.578f, 56.24289f },
};

uint32 const runtHousePathSize7 = 9;

Position const worgenRuntHousePath7[runtHousePathSize7] =
{
    { -1718.083f, 1532.09f, 56.25435f },
    { -1718.104f, 1524.071f, 55.80854f },
    { -1718.125f, 1516.053f, 55.36273f },
    { -1718.134f, 1512.459f, 55.41573f },
    { -1718.143f, 1508.866f, 55.64067f },
    { -1718.151f, 1506.013f, 55.83052f },
    { -1718.167f, 1499.665f, 56.16953f },
    { -1718.172f, 1497.578f, 56.24289f },
    { -1718.172f, 1497.578f, 56.24289f },
};

uint32 const runtCathedralPathSize1 = 10;

Position const worgenRuntCathedralPath1[runtCathedralPathSize1] =
{
    { -1612.885f, 1492.154f, 67.03599f },
    { -1618.054f, 1489.644f, 68.5475f },
    { -1623.222f, 1487.134f, 70.05901f },
    { -1629.727f, 1483.976f, 72.59077f },
    { -1630.914f, 1483.4f, 72.92308f },
    { -1632.244f, 1482.754f, 72.91827f },
    { -1636.865f, 1480.51f, 68.61356f },
    { -1638.087f, 1479.916f, 67.58314f },
    { -1638.852f, 1479.545f, 66.56925f },
    { -1638.852f, 1479.545f, 66.56925f },
};

uint32 const runtCathedralPathSize2 = 7;

Position const worgenRuntCathedralPath2[runtCathedralPathSize2] =
{
    { -1618.982f, 1489.76f, 68.56043f },
    { -1625.62f, 1487.033f, 71.4378f },
    { -1632.258f, 1484.306f, 74.31516f },
    { -1634.6f, 1483.343f, 72.61462f },
    { -1636.067f, 1482.741f, 70.69682f },
    { -1639.282f, 1481.42f, 66.99659f },
    { -1639.282f, 1481.42f, 66.99659f },
};

uint32 const runtCathedralPathSize3 = 6;

Position const worgenRuntCathedralPath3[runtCathedralPathSize3] =
{
    { -1637.957f, 1493.445f, 67.77746f },
    { -1638.569f, 1489.736f, 68.47077f },
    { -1639.182f, 1486.027f, 69.16409f },
    { -1640.578f, 1477.564f, 64.01109f },
    { -1640.676f, 1476.976f, 63.45144f },
    { -1640.676f, 1476.976f, 63.45144f },
};

uint32 const runtCathedralPathSize4 = 5;

Position const worgenRuntCathedralPath4[runtCathedralPathSize4] =
{
    { -1628.66f, 1482.281f, 71.34027f },
    { -1630.399f, 1481.66f, 71.33196f },
    { -1632.139f, 1481.039f, 71.32365f },
    { -1639.006f, 1478.586f, 65.77306f },
    { -1639.006f, 1478.586f, 65.77306f },
};


uint32 const runtCathedralPathSize5 = 9;

Position const worgenRuntCathedralPath5[runtCathedralPathSize5] =
{
    { -1620.279f, 1484.46f, 67.03528f },
    { -1622.424f, 1483.882f, 68.05564f },
    { -1624.568f, 1483.304f, 69.076f },
    { -1628.933f, 1482.127f, 70.91297f },
    { -1632.153f, 1481.259f, 71.52889f },
    { -1637.776f, 1479.743f, 67.45475f },
    { -1638.956f, 1479.425f, 66.41499f },
    { -1639.354f, 1479.318f, 65.98292f },
    { -1639.354f, 1479.318f, 65.98292f },
};

uint32 const runtCathedralPathSize6 = 10;

Position const worgenRuntCathedralPath6[runtCathedralPathSize6] =
{
    { -1633.998f, 1495.233f, 68.24403f },
    { -1634.344f, 1491.3f, 70.41303f },
    { -1634.689f, 1487.368f, 72.58203f },
    { -1634.735f, 1486.842f, 72.91134f },
    { -1634.837f, 1485.684f, 73.20835f },
    { -1634.987f, 1483.981f, 72.29824f },
    { -1635.084f, 1482.868f, 71.9163f },
    { -1635.166f, 1481.939f, 70.77574f },
    { -1635.809f, 1474.621f, 63.4636f },
    { -1635.809f, 1474.621f, 63.4636f },
};

uint32 const runtCathedralPathSize7 = 7;

Position const worgenRuntCathedralPath7[runtCathedralPathSize7] =
{
    { -1629.975f, 1494.066f, 70.64719f },
    { -1631.979f, 1491.585f, 71.31316f },
    { -1633.984f, 1489.104f, 71.97912f },
    { -1634.991f, 1487.856f, 72.09129f },
    { -1636.631f, 1485.826f, 71.53807f },
    { -1640.601f, 1480.912f, 65.49457f },
    { -1640.601f, 1480.912f, 65.49457f },
};

uint32 const runtCathedralPathSize8 = 8;

Position const worgenRuntCathedralPath8[runtCathedralPathSize8] =
{
    { -1620.879f, 1491.133f, 70.67613f },
    { -1622.665f, 1489.818f, 71.04526f },
    { -1624.451f, 1488.503f, 71.41438f },
    { -1630.469f, 1484.073f, 73.09648f },
    { -1631.376f, 1483.405f, 73.20229f },
    { -1632.245f, 1482.765f, 72.92912f },
    { -1635.605f, 1480.292f, 68.99215f },
    { -1635.605f, 1480.292f, 68.99215f },
};

Position const worgenRuntJumpPos[] =
{
    { -1694.03f, 1466.33f, 52.2872f },
    { -1688.92f, 1455.69f, 52.2871f },
    { -1699.46f, 1468.43f, 52.2871f },
    { -1697.73f, 1469.52f, 52.2871f },
    { -1701.65f, 1470.94f, 52.2871f },
    { -1693.91f, 1468.46f, 52.2872f },
    { -1697.30f, 1464.65f, 52.2871f },

    { -1681.57f, 1455.77f, 52.2871f },
    { -1677.47f, 1454.94f, 52.2871f },
    { -1677.71f, 1452.2f,  52.2871f },
    { -1677.66f, 1450.93f, 52.2871f },
    { -1672.56f, 1448.06f, 52.2871f },
    { -1683.13f, 1455.39f, 52.2871f },
    { -1669.81f, 1442.34f, 52.2871f },
    { -1674.15f, 1448.9f,  52.2871f },
};

Position const WorgenRuntHousePos[] =
{
    { -1729.345f, 1526.495f, 55.47962f, 6.188943f },
    { -1709.63f, 1527.464f, 56.86086f, 3.258752f },
    { -1717.75f, 1513.727f, 55.47941f, 4.704845f },
    { -1724.719f, 1526.731f, 55.66177f, 6.138319f },
    { -1713.974f, 1526.625f, 56.21981f, 3.306195f },
    { -1718.104f, 1524.071f, 55.81641f, 4.709816f },
    { -1718.262f, 1518.557f, 55.55954f, 4.726997f },

    { -1618.054f, 1489.644f, 68.45153f, 3.593639f },
    { -1625.62f, 1487.033f, 71.27762f, 3.531424f },
    { -1638.569f, 1489.736f, 68.55273f, 4.548815f },
    { -1630.399f, 1481.66f, 71.41516f, 3.484555f },
    { -1622.424f, 1483.882f, 67.67381f, 3.404875f },
    { -1634.344f, 1491.3f, 70.10101f, 4.6248f },
    { -1631.979f, 1491.585f, 71.11481f, 4.032866f },
    { -1627.273f, 1499.689f, 68.89395f, 4.251452f },
    { -1622.665f, 1489.818f, 71.03797f, 3.776179f },
};

uint8 const JamesPathLenght = 6;
Position const JamesPath[][JamesPathLenght] =
{
    {
        { -1925.925049f, 2539.176514f, 1.392833f, 0.0f },
        { -1913.658203f, 2545.986328f, 1.465530f, 0.0f },
        { -1904.370728f, 2552.793213f, 1.132485f, 0.0f },
        { -1900.970459f, 2550.849365f, 0.714445f, 0.0f },
        { -1886.868774f, 2540.282471f, 1.706371f, 0.0f },
        { -1882.739746f, 2543.941865f, 1.628683f, 0.0f },
    },
};

uint8 const CynthiaPathLenght = 6;
Position const CynthiaPath[][CynthiaPathLenght] =
{
    {
        { -1947.965088f, 2518.669434f, 1.826697f, 0.0f },
        { -1923.350830f, 2521.841553f, 1.586985f, 0.0f },
        { -1917.197632f, 2520.494385f, 2.297501f, 0.0f },
        { -1890.082031f, 2519.952148f, 1.425827f, 0.0f },
        { -1886.868774f, 2540.282471f, 1.706371f, 0.0f },
        { -1882.739746f, 2543.941865f, 1.628683f, 0.0f },
    },
};

uint8 const AshleyPathLenght = 13;
Position const AshleyPath[][AshleyPathLenght] =
{
    {
        { -1928.023682f, 2558.467285f, 12.733648f, 0.0f },
        { -1928.248901f, 2553.930176f, 12.734390f, 0.0f },
        { -1923.981567f, 2552.113770f, 12.736046f, 0.0f },
        { -1919.301514f, 2563.295166f, 3.579522f, 0.0f },
        { -1930.442017f, 2562.145996f, 3.579824f, 0.0f },
        { -1941.160156f, 2566.118896f, 1.392157f, 0.0f },
        { -1940.852295f, 2543.049072f, 1.392157f, 0.0f },
        { -1919.504517f, 2543.273926f, 1.392157f, 0.0f },
        { -1913.658203f, 2545.986328f, 1.465530f, 0.0f },
        { -1904.370728f, 2552.793213f, 1.132485f, 0.0f },
        { -1900.970459f, 2550.849365f, 0.714445f, 0.0f },
        { -1886.868774f, 2540.282471f, 1.706371f, 0.0f },
        { -1882.739746f, 2543.941865f, 1.628683f, 0.0f },
    },
};

uint8 const childrenBasementPathLenght = 3;
Position const childrenBasementPath[][childrenBasementPathLenght] =
{
    {
        { -1879.062378f, 2546.958984f, -0.130342f, 0.0f },
        { -1873.854980f, 2550.903564f, -5.898719f, 0.0f },
        { -1868.589844f, 2536.521240f, -6.365717f, 0.0f },
    },
};

uint8 const KorothPathLenght = 2;
Position const KorothPath[][KorothPathLenght] =
{
    {
        { -2271.431f, 1963.941f, 99.342613f, 0.0f },
        { -2284.237f, 1963.801f, 95.656654f, 0.0f },
    },
};

const uint32 PlayerText[3] =
{
    36329,   //"It's not safe here.  Go to the Allens' basement.",
    36331,   //"Join the others inside the basement next door. Hurry!",
    36328    //"Your mother's in the basement next door. Get to her now!",
};

enum  ThisGilneasQuest
{
    Lockdown = 14078,
    Lieutenant_Walden_ID = 34863,
    Lieutenant_Walden_Phase = 169,
};

struct FixMyGilneasQuest : public PlayerScript
{
public:
    FixMyGilneasQuest() : PlayerScript("FixMyGilneasQuest") {}

    void OnPlayerAcceptQuest(Player* player, Quest const* quest)
    {
        if (quest->GetQuestId() == Lockdown)
        {
            if (player->GetQuestStatus(Lockdown) != QUEST_STATUS_REWARDED)
            {
                player->SetDBPhase(Lieutenant_Walden_Phase);
            }
        }
    }

    //void OnUpdate(uint32 diff,Player player)
    //{
    //    if (player->hasQuest(Lockdown))
    //    {
    //        if (player->GetQuestStatus(Lockdown) == QUEST_STATUS_INCOMPLETE)
    //        {
    //            player->SetDBPhase(Lieutenant_Walden_Phase);
    //        }
    //    }
    //}

};

void AddSC_FixMyGilneasQuest()
{
    new FixMyGilneasQuest();
}
