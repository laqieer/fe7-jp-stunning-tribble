//
// Created by laqieer on 2020/2/13.
//

#include <gba_types.h>
#include <gba_base.h>

extern const u8 * const event_chap_template[];
extern const u8 * const event_chap_pre[];
extern const u8 * const event_chap_1[];
extern const u8 * const event_chap_2[];
extern const u8 * const event_chap_3[];

const u8 ** const events[] = {
        NULL,
        event_chap_template,
        event_chap_pre,
        event_chap_1,
        event_chap_2,
        event_chap_3,
};

const u8 *** const pEvents = events;