//
// Created by laqieer on 2020/2/29.
//

#include <gba_types.h>

#define _FE7J_

#include "../res/map/event/Project Definition.txt"
#include "../tool/event/EA Standard Library/FE7 Definitions.txt"
#include "character_id.h"

#include "text_id.h"

struct DeathQuote {
    u8 characterID;
    u8 chapterID;
    u16 padding;
    u16 textID;
    u8 *deathEvent;
    u8 triggerEventID;
};

struct DeathQuoteWithoutTextID {
    u8 characterID;
    u8 chapterID;
    u16 padding;
    u8 *deathEvent;
    u8 triggerEventID;
};

const int sizeofDeathQuote = sizeof(struct DeathQuote);

#define AnyChapter 0x45

#define LordDeathTriggerEventID 0x65

const struct DeathQuote deathQuotes[] = {
        {Alfonse, AnyChapter, 0, TEXT_DEATH_QUOTE_ALFONSE, 0, LordDeathTriggerEventID},
        {Anna, AnyChapter, 0, TEXT_DEATH_QUOTE_ANNA, 0, LordDeathTriggerEventID},
        {Sharena, AnyChapter, 0, TEXT_DEATH_QUOTE_SHARENA, 0, LordDeathTriggerEventID},
        {Bruno, AnyChapter, 0, TEXT_DEATH_QUOTE_BRUNO, 0, 0},
        {Veronica, AnyChapter, 0, TEXT_DEATH_QUOTE_VERONICA, 0, 0},
        {CHARACTER_XANDER_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_XANDER, 0, 0},
        {CHARACTER_EIR_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_EIR, 0, 0},
        {CHARACTER_FJORM_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_FJORM, 0, 0},
        {CHARACTER_PEONY_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_PEONY, 0, 0},
        {CHARACTER_YURG_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_YURG, 0, 0},
        {CHARACTER_HELL_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_HELL, 0, 0},
        {CHARACTER_GUNNTHRA_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_GUNNTHRA, 0, 0},
        {CHARACTER_HELBINDI_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_HELBINDI, 0, 0},
        {CHARACTER_HRID_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_HRID, 0, 0},
        {CHARACTER_LAEGJARN_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_LAEGJARN, 0, 0},
        {CHARACTER_LAEVATEIN_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_LAEVATEIN, 0, 0},
        {CHARACTER_LIF_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_LIF, 0, 0},
        {CHARACTER_LOKI_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_LOKI, 0, 0},
        {CHARACTER_GUSTAF_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_GUSTAF, 0, 0},
        {CHARACTER_SURTR_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_SURTR, 0, 0},
        {CHARACTER_SRASIR_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_SRASIR, 0, 0},
        {CHARACTER_MIRABILIS_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_MIRABILIS, 0, 0},
        {CHARACTER_SCABIOSA_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_SCABIOSA, 0, 0},
        {CHARACTER_PLUMERIA_ID, AnyChapter, 0, TEXT_DEATH_QUOTE_PLUMERIA, 0, 0},

        {0, 0, 0, 0, 0, 0}
};

const struct DeathQuoteWithoutTextID deathQuotesWithoutTextID[] = {
    {0, 0, 0, 0, 0}
};

const struct DeathQuote * const pDeathQuotes1 = deathQuotes;
const struct DeathQuote * const pDeathQuotes2 = deathQuotes;
const struct DeathQuoteWithoutTextID * const pDeathQuotesWithoutTextID1 = deathQuotesWithoutTextID;
const struct DeathQuoteWithoutTextID * const pDeathQuotesWithoutTextID2 = deathQuotesWithoutTextID;
const struct DeathQuoteWithoutTextID * const pDeathQuotesWithoutTextID3 = deathQuotesWithoutTextID;
const struct DeathQuoteWithoutTextID * const pDeathQuotesWithoutTextID4 = deathQuotesWithoutTextID;
