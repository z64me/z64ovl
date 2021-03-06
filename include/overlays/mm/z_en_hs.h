#ifndef __Z64OVL_Z_EN_HS__
#define __Z64OVL_Z_EN_HS__

#define Z_EN_HS_ACTOR_NUMBER     0x00A6
#define Z_EN_HS_ACTOR_CATEGORY   ACTORCAT_NPC
#define Z_EN_HS_OBJECT_NUMBER    0x00F5
#define Z_EN_HS_FLAGS            (ACTORFLAG_TALK | ACTORFLAG_ALWAYS_UPDATE)

typedef struct z_en_hs_s z_en_hs_t;
struct z_en_hs_s {
    /* 0x0 */ ACTOR actor;
    /* 0x144 */ ClObjPipe pipe_info;
    /* 0x190 */ SKELETON_INFO skeleton;
    /* 0x1D4 */ s_xyz joint1[16];
    /* 0x234 */ s_xyz joint2[16];
    /* 0x294 */ s_xyz neck_angle;
    /* 0x29A */ s_xyz body_angle;
    /* 0x2A0 */ unshort flag;
    /* 0x2A2 */ short timer;
    /* 0x2A4 */ xyz_t chain_pos[20];
    /* 0x394 */ void (*process)(/* ECOFF does not store param types */);
}; /* size = 0x0398 */

#endif /* __Z64OVL_Z_EN_HS__ */
