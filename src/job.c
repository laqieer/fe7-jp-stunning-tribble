//
// Created by laqieer on 2020/2/14.
//

#include "job.h"
#include "item_id.h"
#include "text_id.h"

const int sizeofJob = sizeof(struct Job);

const struct JobBattleAnimationConf SharenaAnimationConf[] = {
        {Lance, 1, 1 + 0xe},
        {Disarmed, 1, 1 + 0xf},
        JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf ArmourAnimationConf[] = {
        {Lance, 1, 0x52},
        {Sword, 1, 1 + 0xa2},
        {Axe, 1, 1 + 0xa3},
        {ITEM_HAND_AXE, 0, 1 + 0xa4},
        {ITEM_TOMAHAWK, 0, 1 + 0xa4},
        {Bow, 1, 1 + 0xa5},
        {Disarmed, 1, 0x53},
        JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf ArmourMagicAnimationConf[] = {
        {AnimaMagic, 1, 1 + 0xa6},
        {LightMagic, 1, 1 + 0xa6},
        {DarkMagic, 1, 1 + 0xa6},
        {Disarmed, 1, 0x53},
        JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf CavalierAnimationConf[] = {
        {Lance, 1, 0x3b},
        {Sword, 1, 0x3c},
        {Axe, 1, 1 + 0xa7},
        {ITEM_HAND_AXE, 0, 1 + 0xa8},
        {ITEM_TOMAHAWK, 0, 1 + 0xa8},
        {Disarmed, 1, 0x3d},
        JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf CavalierFemaleAnimationConf[] = {
        {Lance, 1, 0x3f},
        {Sword, 1, 0x3e},
        {Axe, 1, 1 + 0xa7},
        {ITEM_HAND_AXE, 0, 1 + 0xa8},
        {ITEM_TOMAHAWK, 0, 1 + 0xa8},
        {Disarmed, 1, 0x40},
        JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf PegasusAnimationConf[] = {
    {Sword, 1, 1 + 0xa9},
    {Lance, 1, 0x81},
    {Disarmed, 1, 0x82},
    JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf FalconAnimationConf[] = {
    {Sword, 1, 0x83},
    {Lance, 1, 0x84},
    {ITEM_HAND_AXE, 0, 1 + 0xb2},
    {ITEM_TOMAHAWK, 0, 1 + 0xb2},
    {Disarmed, 1, 0x85},
    JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf FalconMagicAnimationConf[] = {
    {Staff, 1, 1 + 0xb4},
    {AnimaMagic, 1, 1 + 0xb4},
    {LightMagic, 1, 1 + 0xb4},
    {DarkMagic, 1, 1 + 0xb4},
    {Disarmed, 1, 0x85},
    JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf WyvernRiderAnimationConf[] = {
    {Lance, 1, 0x86},
    {Disarmed, 1, 0x87},
    {Axe, 1, 1 + 0xaa},
    {Bow, 1, 1 + 0xac},
    {ITEM_HAND_AXE, 0, 1 + 0xab},
    {ITEM_TOMAHAWK, 0, 1 + 0xab},
    JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf WyvernLordAnimationConf[] = {
    {Lance, 1, 0x88},
    {Disarmed, 1, 0x8a},
    {Sword, 1, 0x89},
    {Bow, 1, 1 + 0xb5},
    {ITEM_HAND_AXE, 0, 1 + 0xb3},
    {ITEM_TOMAHAWK, 0, 1 + 0xb3},
    JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf GeneralAnimationConf[] = {
    {Sword, 1, 1 + 0xb7},
    {Lance, 1, 0x54},
    {Axe, 1, 0x55},
    {ITEM_HAND_AXE, 0, 0x56},
    {ITEM_TOMAHAWK, 0, 0x56},
    {Disarmed, 1, 0x57},
    {Bow, 1, 1 + 0xb1},
    JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf GeneralFemaleAnimationConf[] = {
    {Sword, 1, 1 + 0xb8},
    {Lance, 1, 0x54},
    {Axe, 1, 0x55},
    {ITEM_HAND_AXE, 0, 0x56},
    {ITEM_TOMAHAWK, 0, 0x56},
    {Disarmed, 1, 0x57},
    {Bow, 1, 1 + 0xb1},
    JobBattleAnimationConfEnd
};

const struct JobBattleAnimationConf TroubadourAnimationConf[] = {
    {Staff, 1, 0x6e},
    {Disarmed, 1, 0x6f},
    {AnimaMagic, 1, 0x6e},
    {LightMagic, 1, 0x6e},
    {DarkMagic, 1, 0x6e},
    JobBattleAnimationConfEnd
};

const struct Job jobs[] = {
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 5, 0, 0, -3, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} ,  // 0x00 None

{1172, 559, 1, 7, 0, 0, 0x130, 1, 19, 9 - 3, 6 - 3, 6 - 3, 8 - 3, 5 - 3, 13, 5, 60, 20, 20, 20, 20, 20, 20, 3, 90, 45, 40, 45, 15, 15, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 148245776, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x01 Eliwood Lord

{1173, 559, 2, 8, 1, 0, 0x130, 1, 19, 8 - 3, 8 - 3, 8 - 3, 7 - 3, 5 - 3, 8, 5, 60, 20, 20, 20, 20, 20, 20, 3, 90, 45, 40, 45, 15, 20, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 31, 0, 0, 0, 0, 0, 0, SharenaAnimationConf, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x02 Lyn Lord

{TEXT_ANNA_JOB_NAME, TEXT_ANNA_JOB_HELP, 3, 9, 2, 0, 0x130, 1, 19, 7 - 3, 8 - 3, 10 - 3, 5 - 3, 6 - 3, 7, 5, 60, 20, 20, 20, 20, 20, 20, 3, 90, 45, 40, 45, 15, 12, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 148245800, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x03 Hector Lord

{1174, 559, 4, 42, 0, 0, 204, 2, 20, 5, 2, 5, 6, 0, 7, 7, 60, 20, 20, 20, 20, 20, 20, 3, 75, 35, 40, 28, 15, 15, 30, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 31, 0, 0, 0, 0, 0, 0, 148245820, 147140126, 147141231, 147142271, 147142661, 147142726, 147142791, 0} ,  // 0x04 Lord Knight (only by class name)

{1176, 559, 5, 16, 1, 0, 190, 2, 16, 4, 9, 9, 2, 0, 5, 5, 60, 20, 20, 20, 20, 20, 20, 3, 70, 35, 40, 40, 15, 20, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 31, 0, 0, 0, 0, 0, 0, 0, 148245832, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x05 Blade Lord (only by class name)

{1175, 559, 6, 22, 2, 1, 194, 2, 17, 5, 2, 0, 9, 0, 13, 4, 60, 20, 20, 20, 20, 20, 20, 3, 80, 40, 35, 15, 28, 12, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 31, 0, 31, 0, 0, 0, 0, 0, 148245844, 147139606, 147140711, 147141751, 147142661, 147142726, 147142791, 0} ,  // 0x06 Great Lord (only by class name)

{1177, 560, 7, 1, 3, 0, 0x130, 2, 18, 3, 3, 4, 5, 0, 9, 7, 60, 27, 26, 24, 23, 25, 25, 3, 90, 45, 40, 45, 15, 15, 40, 4, 2, 0, 1, 1, 3, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 31, 31, 0, 0, 0, 0, 0, 0, 148245864, 147140191, 147141296, 147142336, 147142661, 147142726, 147142791, 0} ,  // 0x07 Lord Knight

{1179, 562, 8, 2, 4, 0, 0x130, 2, 18, 3, 3, 4, 5, 0, 6, 6, 60, 24, 29, 30, 22, 22, 25, 3, 90, 45, 40, 45, 15, 12, 40, 3, 2, 2, 0, 3, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 31, 0, 0, 31, 0, 0, 0, 0, 148245884, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x08 Blade Lord

{1178, 561, 9, 3, 5, 0, 0x130, 2, 18, 3, 3, 4, 5, 0, 15, 5, 60, 30, 24, 24, 29, 20, 25, 3, 90, 45, 40, 45, 15, 20, 40, 3, 0, 2, 3, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 31, 0, 31, 0, 0, 0, 0, 0, 148245904, 147139606, 147140711, 147141751, 147142661, 147142726, 147142791, 0} ,  // 0x09 Great Lord

{1180, 571, 10, 12, 6, 0, 220, 3, 18, 4, 8, 8, 4, 0, 9, 5, 60, 20, 20, 20, 20, 20, 20, 3, 80, 40, 40, 32, 18, 20, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 148245932, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x0A Mercenary

{1181, 571, 11, 13, 7, 0, 220, 0, 16, 3, 5, 6, 2, 0, 8, 5, 60, 20, 20, 20, 20, 20, 20, 3, 80, 40, 40, 32, 18, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x0B Mercenary

{1182, 585, 12, 10, 8, 0, 221, 4, 22, 6, 9, 10, 8, 2, 10, 6, 60, 25, 30, 26, 25, 22, 20, 3, 75, 30, 30, 20, 20, 20, 25, 4, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 1, 0, 0, 0, 0, 0, 148245944, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x0C Hero

{1183, 585, 13, 11, 9, 0, 221, 5, 22, 6, 10, 11, 6, 3, 9, 6, 60, 24, 30, 26, 24, 24, 25, 3, 75, 30, 30, 20, 20, 20, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 1, 0, 0, 0, 0, 0, 148245968, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x0D Hero

{1184, 574, 14, 16, 10, 0, 190, 6, 16, 4, 9, 9, 2, 0, 8, 5, 60, 20, 20, 20, 20, 20, 20, 3, 70, 35, 40, 40, 15, 20, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 148245992, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x0E Myrmidon

{1185, 574, 15, 17, 11, 0, 190, 7, 15, 3, 9, 10, 1, 1, 5, 5, 60, 20, 20, 20, 20, 20, 20, 3, 70, 35, 40, 40, 15, 20, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 148246004, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x0F Myrmidon

{1186, 591, 16, 14, 12, 0, 191, 8, 21, 6, 11, 10, 5, 2, 9, 6, 60, 24, 29, 30, 22, 23, 25, 3, 65, 25, 30, 30, 15, 22, 25, 5, 2, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 148246016, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x10 Swordmaster

{1187, 591, 17, 15, 13, 0, 191, 9, 19, 6, 11, 12, 4, 3, 7, 6, 60, 22, 29, 30, 22, 25, 25, 3, 65, 25, 30, 30, 15, 22, 25, 5, 2, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 148246028, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x11 Swordmaster

{1188, 572, 18, 19, 14, 0, 192, 10, 20, 5, 2, 4, 2, 0, 11, 5, 60, 20, 20, 20, 20, 20, 20, 3, 85, 55, 35, 30, 15, 15, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 148246040, 147139671, 147140776, 147141816, 147142661, 147142726, 147142791, 0} ,  // 0x12 Fighter

{1189, 586, 19, 18, 15, 0, 193, 11, 28, 8, 5, 6, 5, 0, 13, 6, 60, 30, 28, 26, 26, 22, 20, 3, 80, 45, 25, 20, 16, 17, 15, 3, 1, 2, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 1, 0, 0, 0, 0, 148246060, 147139671, 147140776, 147141816, 147142661, 147142726, 147142791, 0} ,  // 0x13 Warrior

{1190, 566, 20, 22, 16, 1, 194, 12, 17, 5, 2, 0, 9, 0, 13, 4, 60, 20, 20, 20, 20, 20, 20, 3, 80, 40, 30, 15, 28, 20, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 0, 0, 0, 0, ArmourAnimationConf, 147139606, 147140711, 147141751, 147142661, 147142726, 147142791, 0} ,  // 0x14 Knight

{1191, 566, 21, 23, 16, 1, 194, 13, 16, 4, 3, 1, 8, 1, 10, 4, 60, 20, 20, 20, 20, 20, 20, 3, 80, 40, 30, 15, 28, 20, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 0, 0, 0, 0, ArmourAnimationConf, 147139606, 147140711, 147141751, 147142661, 147142726, 147142791, 0} ,  // 0x15 Knight

{1192, 599, 22, 20, 17, 1, 195, 14, 21, 8, 4, 3, 13, 3, 15, 5, 60, 29, 27, 24, 30, 25, 20, 3, 75, 30, 20, 10, 23, 25, 20, 4, 2, 2, 3, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 1, 1, 0, 0, 0, 0, GeneralAnimationConf, 147139606, 147140711, 147141751, 147142661, 147142726, 147142791, 0} ,  // 0x16 General

{1193, 599, 23, 21, 17, 1, 195, 15, 20, 8, 5, 5, 11, 4, 11, 5, 60, 25, 25, 22, 30, 26, 20, 3, 75, 30, 25, 10, 23, 25, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 1, 1, 0, 0, 0, 0, GeneralFemaleAnimationConf, 147139606, 147140711, 147141751, 147142661, 147142726, 147142791, 0} ,  // 0x17 General

{1194, 565, 24, 26, 18, 0, 196, 16, 18, 4, 3, 3, 3, 0, 7, 5, 60, 20, 20, 20, 20, 20, 20, 3, 70, 35, 40, 32, 15, 15, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 148246156, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x18 Archer

{1195, 565, 25, 27, 19, 0, 196, 17, 17, 3, 3, 4, 3, 0, 5, 5, 60, 20, 20, 20, 20, 20, 20, 3, 70, 35, 40, 32, 15, 20, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 148246180, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x19 Archer

{1196, 598, 26, 24, 20, 0, 197, 18, 21, 7, 6, 5, 5, 2, 8, 6, 60, 25, 30, 28, 25, 23, 20, 3, 65, 30, 30, 20, 15, 20, 30, 3, 1, 2, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 148246204, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x1A Sniper

{1197, 598, 27, 25, 21, 0, 197, 19, 19, 6, 6, 7, 5, 3, 6, 6, 60, 24, 30, 29, 24, 24, 20, 3, 65, 30, 30, 20, 15, 25, 30, 4, 3, 1, 1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 148246228, 147139476, 147140581, 147141621, 147142661, 147142726, 147142791, 0} ,  // 0x1B Sniper

{1198, 567, 28, 30, 22, 0, 198, 20, 18, 1, 1, 2, 1, 5, 6, 5, 60, 20, 20, 20, 20, 20, 20, 3, 50, 30, 35, 32, 8, 40, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 148246252, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 147143246} ,  // 0x1C Monk

{1199, 568, 29, 31, 23, 0, 198, 21, 16, 1, 2, 2, 0, 6, 4, 5, 60, 20, 20, 20, 20, 20, 20, 2, 50, 30, 35, 32, 8, 50, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 148246272, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 147143246} ,  // 0x1D Cleric

{1200, 596, 30, 28, 24, 0, 199, 22, 21, 4, 4, 4, 3, 8, 7, 6, 60, 25, 26, 24, 22, 30, 25, 3, 45, 35, 25, 22, 8, 40, 40, 3, 2, 1, 0, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 31, 0, 148246284, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 147143246} ,  // 0x1E Bishop

{1201, 596, 31, 29, 25, 0, 199, 23, 19, 4, 5, 4, 2, 9, 5, 6, 60, 25, 25, 26, 21, 30, 25, 3, 45, 35, 25, 22, 8, 50, 40, 3, 1, 2, 1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 31, 0, 148246308, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 147143246} ,  // 0x1F Bishop

{1202, 575, 32, 34, 26, 0, 200, 24, 16, 1, 2, 3, 3, 3, 6, 5, 60, 20, 20, 20, 20, 20, 20, 3, 55, 55, 40, 35, 5, 30, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 148246332, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x20 Mage

{1203, 575, 33, 35, 27, 0, 200, 25, 16, 1, 3, 2, 2, 4, 3, 5, 60, 20, 20, 20, 20, 20, 20, 3, 55, 55, 40, 35, 5, 40, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 148246352, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x21 Mage

{1204, 593, 34, 32, 28, 0, 201, 26, 20, 5, 4, 4, 5, 5, 7, 6, 60, 28, 30, 26, 21, 25, 20, 3, 45, 45, 30, 25, 10, 40, 15, 4, 1, 0, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 0, 0, 148246372, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x22 Sage

{1205, 593, 35, 33, 29, 0, 201, 27, 19, 4, 6, 5, 3, 6, 4, 6, 60, 30, 28, 26, 21, 25, 20, 3, 45, 45, 30, 25, 10, 40, 15, 3, 1, 1, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 0, 0, 148246396, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x23 Sage

{1206, 580, 36, 38, 30, 1, 202, 28, 16, 2, 1, 2, 2, 4, 7, 5, 60, 20, 20, 20, 20, 20, 20, 3, 50, 50, 32, 30, 10, 30, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 148246420, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x24 Shaman

{1207, 580, 37, 39, 31, 1, 202, 29, 15, 3, 1, 1, 1, 5, 3, 5, 60, 20, 20, 20, 20, 20, 20, 3, 50, 45, 32, 30, 10, 40, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 148246440, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x25 Shaman

{1208, 587, 38, 36, 32, 1, 203, 30, 19, 6, 3, 4, 4, 6, 8, 6, 60, 29, 26, 26, 21, 28, 20, 3, 45, 55, 30, 25, 10, 35, 20, 4, 0, 0, 3, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 71, 148246460, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x26 Druid

{1209, 587, 39, 37, 33, 1, 203, 31, 17, 7, 3, 4, 3, 7, 4, 6, 60, 29, 26, 26, 20, 29, 20, 3, 45, 55, 30, 25, 10, 35, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 71, 148246484, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x27 Druid

{1211, 563, 40, 42, 34, 0, 204, 32, 20, 5, 2, 5, 6, 0, 9, 7, 60, 20, 20, 20, 20, 20, 20, 3, 75, 35, 40, 28, 15, 15, 30, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, CavalierAnimationConf, 147140126, 147141231, 147142271, 147142661, 147142726, 147142791, 0} ,  // 0x28 Cavalier

{1212, 563, 41, 43, 34, 0, 204, 0, 18, 5, 3, 3, 6, 0, 9, 7, 60, 20, 20, 20, 20, 20, 20, 3, 75, 35, 40, 28, 15, 15, 30, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 1, 1, 0, 0, 0, 0, 0, CavalierFemaleAnimationConf, 147140126, 147141231, 147142271, 147142661, 147142726, 147142791, 0} ,  // 0x29 Cavalier

{1213, 564, 42, 40, 35, 0, 205, 33, 23, 7, 4, 7, 8, 3, 11, 8, 60, 25, 26, 24, 25, 25, 25, 3, 70, 25, 30, 18, 12, 20, 25, 2, 1, 1, 1, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 1, 0, 0, 0, 0, 0, 148246540, 147140191, 147141296, 147142336, 147142661, 147142726, 147142791, 0} ,  // 0x2A Paladin

{1214, 564, 43, 41, 35, 0, 205, 0, 23, 6, 6, 11, 7, 6, 9, 8, 60, 23, 27, 25, 24, 26, 25, 3, 70, 25, 35, 25, 12, 25, 25, 2, 1, 1, 1, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 1, 0, 0, 0, 0, 0, 148246568, 147140191, 147141296, 147142336, 147142661, 147142726, 147142791, 0} ,  // 0x2B Paladin

{1215, 573, 44, 45, 36, 0, 206, 34, 15, 1, 1, 3, 2, 5, 5, 7, 60, 20, 20, 20, 20, 20, 20, 2, 50, 25, 35, 55, 12, 40, 45, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 1, 1, 1, TroubadourAnimationConf, 147140126, 147141231, 147142271, 147142661, 147142726, 147142791, 0} ,  // 0x2C Troubadour

{1216, 589, 45, 44, 37, 0, 207, 35, 19, 4, 3, 5, 4, 8, 6, 8, 60, 25, 24, 25, 24, 28, 25, 3, 45, 35, 25, 45, 10, 40, 40, 3, 2, 1, 0, 2, 3, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 1, 0, 0, 148246608, 147140191, 147141296, 147142336, 147142661, 147142726, 147142791, 0} ,  // 0x2D Valkyrie

{1217, 576, 46, 48, 38, 0, 208, 36, 16, 5, 4, 5, 4, 0, 7, 7, 60, 20, 20, 20, 20, 20, 20, 3, 65, 30, 40, 45, 12, 15, 30, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 148246632, 147140256, 147141361, 147142401, 147142661, 147142726, 147142791, 0} ,  // 0x2E Nomad

{1218, 576, 47, 49, 39, 0, 208, 37, 15, 4, 5, 6, 3, 0, 5, 7, 60, 20, 20, 20, 20, 20, 20, 3, 65, 30, 40, 45, 12, 15, 30, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 148246644, 147140256, 147141361, 147142401, 147142661, 147142726, 147142791, 0} ,  // 0x2F Nomad

{1219, 597, 48, 46, 40, 0, 209, 38, 21, 7, 6, 7, 6, 3, 8, 8, 60, 25, 28, 30, 24, 23, 20, 3, 60, 25, 30, 35, 15, 15, 25, 3, 2, 1, 1, 3, 3, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 71, 0, 0, 0, 0, 148246656, 147140321, 147141426, 147142466, 147142661, 147142726, 147142791, 0} ,  // 0x30 Nomad Trooper

{1220, 597, 49, 47, 41, 0, 209, 39, 21, 6, 6, 7, 5, 4, 6, 8, 60, 23, 28, 30, 22, 25, 20, 3, 60, 25, 30, 35, 15, 20, 25, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 71, 0, 0, 0, 0, 148246672, 147140321, 147141426, 147142466, 147142661, 147142726, 147142791, 0} ,  // 0x31 Nomad Trooper

{1221, 583, 50, 51, 42, 0, 210, 40, 14, 4, 5, 5, 3, 2, 5, 7, 60, 20, 20, 20, 20, 20, 20, 3, 65, 35, 40, 40, 12, 35, 35, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 31, 0, 0, 0, 0, 0, 0, PegasusAnimationConf, 147140386, 147141491, 147142531, 147142856, 147142921, 147142986, 0} ,  // 0x32 Pegasus Knight

{1222, 590, 51, 50, 43, 0, 211, 41, 20, 6, 7, 7, 5, 4, 6, 8, 60, 23, 25, 28, 23, 26, 25, 3, 60, 30, 30, 30, 12, 30, 30, 5, 2, 0, 0, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 1, 0, 0, 0, 0, 0, FalconAnimationConf, 147140386, 147141491, 147142531, 147142856, 147142921, 147142986, 0} ,  // 0x33 Falcon Knight

{1223, 584, 52, 54, 44, 0, 212, 42, 20, 7, 3, 5, 8, 0, 10, 7, 60, 20, 20, 20, 20, 20, 20, 3, 80, 45, 35, 30, 25, 15, 25, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 1, 1, 0, 0, 0, 0, WyvernRiderAnimationConf, 147140386, 147141491, 147142531, 147142856, 147142921, 147142986, 0} ,  // 0x34 Wyvern Rider

{1224, 584, 53, 55, 44, 0, 212, 43, 19, 6, 5, 5, 7, 0, 9, 7, 60, 20, 20, 20, 20, 20, 20, 3, 80, 45, 35, 30, 25, 17, 25, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 1, 1, 0, 0, 0, 0, WyvernRiderAnimationConf, 147140386, 147141491, 147142531, 147142856, 147142921, 147142986, 0} ,  // 0x35 Wyvern Rider

{1225, 600, 54, 52, 45, 0, 213, 44, 25, 9, 5, 7, 10, 1, 11, 8, 60, 27, 25, 23, 28, 22, 25, 3, 75, 40, 30, 20, 20, 17, 20, 4, 0, 2, 2, 0, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 1, 1, 0, 0, 0, 0, WyvernLordAnimationConf, 147140386, 147141491, 147142531, 147142856, 147142921, 147142986, 0} ,  // 0x36 Wyvern Lord

{1226, 600, 55, 53, 45, 0, 213, 45, 24, 8, 7, 7, 9, 2, 10, 8, 60, 25, 26, 24, 27, 23, 25, 3, 75, 40, 30, 20, 20, 17, 20, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 1, 1, 0, 0, 0, 0, WyvernLordAnimationConf, 147140386, 147141491, 147142531, 147142856, 147142921, 147142986, 0} ,  // 0x37 Wyvern Lord

{1227, 605, 56, 0, 46, 0, 214, 46, 20, 3, 0, 1, 0, 0, 6, 5, 60, 20, 20, 20, 20, 20, 20, 2, 80, 50, 30, 20, 12, 15, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 148246772, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x38 Soldier

{1228, 577, 57, 59, 47, 0, 215, 47, 20, 5, 1, 5, 3, 0, 12, 5, 60, 20, 20, 20, 20, 20, 20, 3, 82, 50, 30, 20, 10, 13, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 148246784, 147139801, 147140906, 147141946, 147142661, 147142726, 147142791, 147143051} ,  // 0x39 Brigand

{1229, 578, 58, 59, 48, 0, 216, 48, 19, 4, 2, 6, 3, 0, 10, 5, 60, 20, 20, 20, 20, 20, 20, 3, 75, 50, 35, 25, 10, 13, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 148246804, 147139866, 147140971, 147142011, 147142661, 147142726, 147142791, 147143116} ,  // 0x3A Pirate

{1231, 592, 59, 57, 49, 0, 217, 49, 24, 7, 6, 7, 6, 0, 13, 6, 60, 30, 29, 28, 23, 21, 20, 3, 75, 50, 35, 25, 10, 13, 15, 4, 1, 1, 1, 2, 2, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 148246824, 147139736, 147140841, 147141881, 147142661, 147142726, 147142791, 147143181} ,  // 0x3B Berserker

{1232, 569, 60, 62, 50, 0, 218, 50, 16, 3, 1, 9, 2, 0, 6, 6, 60, 20, 20, 20, 20, 20, 20, 2, 50, 5, 45, 40, 5, 20, 40, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 148246844, 147139931, 147141036, 147142076, 147142661, 147142726, 147142791, 0} ,  // 0x3C Thief

{1233, 569, 61, 0, 51, 0, 218, 51, 15, 2, 3, 8, 1, 2, 5, 6, 60, 20, 20, 20, 20, 20, 20, 2, 45, 5, 45, 40, 5, 25, 40, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 148246856, 147139931, 147141036, 147142076, 147142661, 147142726, 147142791, 0} ,  // 0x3D Thief

{1234, 570, 62, 60, 52, 0, 218, 52, 16, 3, 1, 9, 2, 0, 6, 6, 60, 20, 30, 30, 20, 20, 20, 3, 50, 5, 45, 40, 5, 20, 40, 3, 1, 0, 0, 2, 2, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 148246868, 147139931, 147141036, 147142076, 147142661, 147142726, 147142791, 0} ,  // 0x3E Assassin

{1242, 603, 63, 0, 53, 0, 184, 0, 10, 0, 0, 0, 0, 0, 6, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x3F Civilian

{1236, 582, 64, 0, 54, 0, 215, 54, 14, 1, 2, 7, 0, 1, 4, 5, 60, 10, 10, 30, 24, 26, 20, 2, 45, 45, 30, 60, 0, 13, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148246880, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x40 Dancer

{1237, 581, 65, 0, 55, 0, 215, 55, 14, 1, 2, 7, 1, 0, 3, 5, 60, 10, 10, 30, 24, 26, 20, 2, 45, 45, 30, 60, 0, 13, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148246916, 147139541, 147140646, 147141686, 147142661, 147142726, 147142791, 0} ,  // 0x41 Bard

{1238, 594, 66, 32, 56, 0, 201, 56, 40, 30, 24, 20, 20, 28, 9, 6, 60, 30, 30, 25, 20, 30, 20, 3, 45, 45, 30, 25, 10, 35, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 251, 251, 251, 251, 148246952, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x42 Archsage

{1239, 595, 67, 0, 57, 0, 201, 57, 50, 0, 0, 24, 13, 0, 7, 6, 60, 28, 30, 25, 20, 25, 20, 3, 45, 45, 30, 25, 10, 35, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x43 Magic Seal

{1251, 604, 68, 89, 58, 1, 74, 58, 15, 0, 3, 3, 3, 0, 25, 0, 60, 20, 20, 20, 20, 20, 25, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148246976, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x44 Transporter

{1210, 588, 69, 36, 59, 1, 203, 30, 75, 30, 18, 15, 28, 30, 10, 6, 80, 30, 25, 25, 30, 30, 25, 3, 45, 55, 30, 25, 10, 35, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 251, 251, 251, 148246984, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x45 Dark Druid

{1240, 601, 70, 0, 60, 0, 222, 0, 40, 0, 0, 0, 0, 0, 25, 8, -56, 50, 50, 50, 50, 50, 25, 5, 95, 40, 30, 20, 0, 20, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148247008, 147140451, 147140451, 147140451, 147142661, 147142726, 147142791, 0} ,  // 0x46 Fire Dragon

{1241, 603, 71, 0, 61, 1, 185, 0, 10, 0, 0, 0, 0, 0, 7, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x47 Civilian

{1242, 603, 72, 0, 62, 0, 184, 0, 10, 0, 0, 0, 0, 0, 25, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x48 Civilian (F)

{1243, 603, 73, 0, 63, 1, 179, 0, 10, 0, 0, 0, 0, 0, 25, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x49 Child

{1246, 0, 74, 0, 64, 1, 181, 0, 35, 30, 25, 19, 18, 30, 6, 5, 60, 30, 30, 25, 20, 30, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x4A Bramimond

{1247, 0, 75, 0, 65, 1, 179, 0, 10, 0, 0, 0, 0, 0, 8, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x4B Peer

{1248, 0, 76, 0, 66, 1, 179, 0, 10, 0, 0, 0, 0, 0, 5, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x4C Peer (F)

{1249, 602, 77, 0, 67, 1, 179, 0, 10, 0, 0, 0, 0, 0, 7, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x4D Prince

{1250, 0, 78, 0, 68, 1, 179, 0, 10, 0, 0, 0, 0, 0, 1, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x4E Queen

{1242, 603, 79, 0, 69, 0, 184, 0, 10, 0, 0, 0, 0, 0, 6, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x4F Hung Leila

{1230, 579, 80, 59, 48, 0, 216, 48, 19, 4, 2, 6, 3, 0, 10, 5, 60, 20, 20, 20, 20, 20, 20, 3, 75, 50, 35, 25, 10, 13, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 148247020, 147139866, 147140971, 147142011, 147142661, 147142726, 147142791, 147143116} ,  // 0x50 Corsair

{1249, 0, 81, 0, 70, 1, 179, 0, 10, 0, 0, 0, 0, 0, 1, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x51 Prince (Tactician)

{1249, 602, 82, 0, 71, 1, 179, 0, 10, 0, 0, 0, 0, 0, 7, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x52 Fallen Prince

{1249, 602, 83, 0, 72, 1, 179, 0, 10, 0, 0, 0, 0, 0, 7, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x53 Prince facing upward

{1244, 0, 84, 0, 73, 1, 179, 0, 10, 0, 0, 0, 0, 0, 25, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x54 Fallen Ninian

{1240, 0, 85, 0, 74, 0, 219, 0, 40, 10, 10, 10, 10, 10, 25, 8, 80, 30, 28, 28, 30, 28, 25, 5, 95, 40, 30, 20, 0, 20, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148247040, 147140451, 147140451, 147140451, 147142661, 147142726, 147142791, 0} ,  // 0x55 Fallen Ice Dragon

{1189, 0, 86, 0, 75, 0, 193, 0, 28, 8, 5, 6, 5, 0, 13, 6, 60, 30, 28, 26, 26, 22, 20, 3, 80, 45, 25, 20, 16, 17, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 1, 0, 0, 0, 0, 0, 147139671, 147140776, 147141816, 147142661, 147142726, 147142791, 0} ,  // 0x56 Fallen Warrior

{1244, 603, 87, 0, 76, 1, 179, 0, 10, 0, 0, 0, 0, 0, 7, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x57 Child

{1245, 603, 88, 0, 77, 0, 181, 0, 10, 0, 0, 0, 0, 0, 25, 5, 60, 20, 20, 20, 20, 20, 20, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x58 Child (F)

{1251, 604, 89, 68, 78, 1, 74, 58, 15, 0, 3, 3, 3, 0, 25, 5, 60, 20, 20, 20, 20, 20, 25, 1, 10, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148247052, 147140061, 147141166, 147142206, 147142661, 147142726, 147142791, 0} ,  // 0x59 Transporter w/ Horse

{1205, 593, 90, 33, 29, 0, 201, 27, 19, 4, 6, 5, 3, 6, 7, 6, 60, 30, 28, 26, 30, 30, 20, 3, 45, 45, 30, 25, 10, 40, 15, 3, 1, 1, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 71, 0, 0, 148247060, 147139996, 147141101, 147142141, 147142661, 147142726, 147142791, 0} ,  // 0x5A Veronica Princess

{0, 0, 91, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147142661, 147142726, 147142791, 0} ,  // 0x5B Archer in Ballista

{0, 0, 92, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147142661, 147142726, 147142791, 0} ,  // 0x5C Archer in Iron Ballista

{0, 0, 93, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147142661, 147142726, 147142791, 0} ,  // 0x5D Archer in Killer Ballista

{0, 0, 94, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147142661, 147142726, 147142791, 0} ,  // 0x5E Empty Ballista

{0, 0, 95, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147142661, 147142726, 147142791, 0} ,  // 0x5F Empty Iron Ballista

{0, 0, 96, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147142661, 147142726, 147142791, 0} ,  // 0x60 Empty Killer Ballista

{0, 0, 97, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147142661, 147142726, 147142791, 0} ,  // 0x61 Ballistician

{1190, 566, 98, 22, 16, 1, 194, 12, 17, 5, 2, 0, 9, 0, 13, 4, 60, 20, 20, 20, 20, 20, 20, 3, 80, 40, 30, 15, 28, 20, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 0, ArmourMagicAnimationConf, 147139606, 147140711, 147141751, 147142661, 147142726, 147142791, 0} ,  // 0x62 Magic Knight

{1222, 590, 99, 50, 43, 0, 211, 41, 20, 6, 7, 7, 5, 4, 6, 8, 60, 23, 25, 28, 23, 26, 25, 3, 60, 30, 30, 30, 12, 30, 30, 5, 2, 0, 0, 2, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 71, FalconMagicAnimationConf, 147140386, 147141491, 147142531, 147142856, 147142921, 147142986, 0} ,  // 0x63 Magic Falcon Knight

};

const struct Job * const pJobs1 = jobs;
const struct Job * const pJobs2 = jobs;
const struct Job * const pJobs3 = jobs;
