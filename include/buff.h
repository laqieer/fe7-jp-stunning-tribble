#ifndef FE7_JP_STUNNING_TRIBBLE_BUFF_H
#define FE7_JP_STUNNING_TRIBBLE_BUFF_H

#include "character.h"

struct Buff {
    s8 hp;
    s8 pow;
    s8 skl;
    s8 spd;
    s8 def;
    s8 res;
    s8 luk;
};

u16 GetUnitEquippedItem(struct Unit* unit);
int GetItemHpBonus(u16 item);
int GetItemPowBonus(u16 item);
int GetItemSklBonus(u16 item);
int GetItemSpdBonus(u16 item);
int GetItemDefBonus(u16 item);
int GetItemResBonus(u16 item);
int GetItemLukBonus(u16 item);

void addUnitBuff(struct Unit *unit, struct Buff *pBuff);
void addUnitDebuff(struct Unit *unit, struct Buff *pDebuff);
void addUnitBuffHP(struct Unit *unit, s8 buffValue);
void addUnitBuffPower(struct Unit *unit, s8 buffValue);
void addUnitBuffSkill(struct Unit *unit, s8 buffValue);
void addUnitBuffSpeed(struct Unit *unit, s8 buffValue);
void addUnitBuffDefense(struct Unit *unit, s8 buffValue);
void addUnitBuffResistance(struct Unit *unit, s8 buffValue);
void addUnitBuffLuck(struct Unit *unit, s8 buffValue);
void addUnitDebuffHP(struct Unit *unit, s8 debuffValue);
void addUnitDebuffPower(struct Unit *unit, s8 debuffValue);
void addUnitDebuffSkill(struct Unit *unit, s8 debuffValue);
void addUnitDebuffSpeed(struct Unit *unit, s8 debuffValue);
void addUnitDebuffDefense(struct Unit *unit, s8 debuffValue);
void addUnitDebuffResistance(struct Unit *unit, s8 debuffValue);
void addUnitDebuffLuck(struct Unit *unit, s8 debuffValue);

void DrawUiSymbol(u16 *tileMap, int color, int symbol);
void DrawUiSmallNumber(u16 *tileMap, int color, int number);

u32 func8015818();

#endif //FE7_JP_STUNNING_TRIBBLE_SKILL_H