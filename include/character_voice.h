//
// Created by laqieer on 2020/3/24.
//

#ifndef FE7_JP_STUNNING_TRIBBLE_CHARACTER_VOICE_H
#define FE7_JP_STUNNING_TRIBBLE_CHARACTER_VOICE_H

#include "sound_effect.h"
#include "character_id.h"
#include "voice.h"
#include "character.h"
#include "proc.h"
#include "text_id.h"
#include "text.h"
#include "gba_debug_print.h"

struct CharacterVoice {
    const struct Song *map[3];
    const struct Song *damage[2];
    //const struct Song *dead;
    const struct Song *attack[2];
    //const struct Song *status[8];
    const struct Song *status;
};

extern struct Unit *pCurrentUnitInStatusScreen;

extern struct Unit *currentActiveUnit;
extern u32 currentGameClock;

extern u8 DAT_0203a50c;
extern u8 DAT_0203a50d;
extern u8 DAT_0203a50e;

extern u8 characterIdAtLeft;
extern u8 characterIdAtRight;

int isAnimationAtRight(void *AIS);
void AnimEvtCode7Handler() __attribute__((noreturn));

// Random Number range: [0, n)
#define GetTrueRN(n) (currentGameClock % n)

void DisplayActiveUnitEffectRange();
void MPlayStart(void *player, const struct Song *song); // omit player info struct define, use void* instead
//int getActiveUnitCurrentHp();
void HandleActiveUnitDeath(struct Proc *proc);
void drawStatPageWithPortrait(struct Proc *proc);

#define DEFINE_CHARACTER_MAP_VOICE(name) {&VOICE_##name##_MAP_1, &VOICE_##name##_MAP_2, &VOICE_##name##_MAP_3}
#define DEFINE_CHARACTER_DAMAGE_VOICE(name) {&VOICE_##name##_DAMAGE_1, &VOICE_##name##_DAMAGE_2}
#define DEFINE_CHARACTER_ATTACK_VOICE(name) {&VOICE_##name##_ATTACK_1, &VOICE_##name##_ATTACK_2}
//#define DEFINE_CHARACTER_DEAD_VOICE(name) &VOICE_##name##_DEAD_1
#define DEFINE_CHARACTER_STATUS_VOICE(name) {&VOICE_##name##_STATUS_1, &VOICE_##name##_STATUS_2, &VOICE_##name##_STATUS_3, &VOICE_##name##_STATUS_4, &VOICE_##name##_STATUS_5, &VOICE_##name##_STATUS_6, &VOICE_##name##_STATUS_7, &VOICE_##name##_STATUS_8}
#define DEFINE_CHARACTER_STATUS_VOICE_LESS(name) &VOICE_##name##_STATUS_1
#define DEFINE_CHARACTER_VOICE(name) [CHARACTER_##name##_ID] = {DEFINE_CHARACTER_MAP_VOICE(name), DEFINE_CHARACTER_DAMAGE_VOICE(name), DEFINE_CHARACTER_ATTACK_VOICE(name), DEFINE_CHARACTER_STATUS_VOICE_LESS(name)},

void playCharacterStatusVoice();

#define VOICE_HELL_MAP_1 (*(struct Song *)0)
#define VOICE_HELL_MAP_2 (*(struct Song *)0)
#define VOICE_HELL_MAP_3 (*(struct Song *)0)
#define VOICE_HELL_STATUS_1 (*(struct Song *)0)

#define VOICE_GUSTAF_MAP_1 (*(struct Song *)0)
#define VOICE_GUSTAF_MAP_2 (*(struct Song *)0)
#define VOICE_GUSTAF_MAP_3 (*(struct Song *)0)
#define VOICE_GUSTAF_STATUS_1 (*(struct Song *)0)

#define VOICE_SCABIOSA_MAP_1 (*(struct Song *)0)
#define VOICE_SCABIOSA_MAP_2 (*(struct Song *)0)
#define VOICE_SCABIOSA_MAP_3 (*(struct Song *)0)

#define VOICE_PLUMERIA_MAP_1 (*(struct Song *)0)
#define VOICE_PLUMERIA_MAP_2 (*(struct Song *)0)
#define VOICE_PLUMERIA_MAP_3 (*(struct Song *)0)

#define VOICE_LIF_MAP_1 VOICE_LIF_GOD01_MAP_1
#define VOICE_LIF_MAP_2 VOICE_LIF_GOD01_MAP_2
#define VOICE_LIF_MAP_3 VOICE_LIF_GOD01_MAP_3
#define VOICE_LIF_STATUS_1 VOICE_LIF_GOD01_STATUS_1

#define VOICE_PLUMERIA_STATUS_1 VOICE_PLUMERIA_STATUS_2

#define VOICE_SCABIOSA_STATUS_1 VOICE_SCABIOSA_STATUS_2

#define VOICE_SRASIR_MAP_1 VOICE_SRASIR_GOD01_MAP_1
#define VOICE_SRASIR_MAP_2 VOICE_SRASIR_GOD01_MAP_2
#define VOICE_SRASIR_MAP_3 VOICE_SRASIR_GOD01_MAP_3
#define VOICE_SRASIR_STATUS_1 VOICE_SRASIR_GOD01_STATUS_1

#endif //FE7_JP_STUNNING_TRIBBLE_CHARACTER_VOICE_H
