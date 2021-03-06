#ifndef __Z64OVL_Z_EN_ENDING_HERO5__
#define __Z64OVL_Z_EN_ENDING_HERO5__

#define Z_EN_ENDING_HERO5_ACTOR_NUMBER     0x02AB
#define Z_EN_ENDING_HERO5_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_ENDING_HERO5_OBJECT_NUMBER    0x00F1
#define Z_EN_ENDING_HERO5_FLAGS            (ACTORFLAG_TALK)

typedef struct z_en_ending_hero5_s z_en_ending_hero5_t;
struct z_en_ending_hero5_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ SKELETON_INFO skeleton;
    /* 0x188 */ s_xyz joint1[17];
    /* 0x1EE */ s_xyz joint2[17];
    /* 0x254 */ void (*process)(/* ECOFF does not store param types */);
    /* 0x258 */ short stat_mode;
    /* 0x25C */ int index;
}; /* size = 0x0260 */

#endif /* __Z64OVL_Z_EN_ENDING_HERO5__ */
