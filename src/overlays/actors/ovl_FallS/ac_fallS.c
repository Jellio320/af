#include "ac_fallS.h"
#include "m_actor_dlftbls.h"
#include "m_object.h"
#include "overlays/gamestates/ovl_play/m_play.h"

void func_80A03230_jp(Actor* thisx, Game_Play* game_play);
void func_80A03240_jp(Actor* thisx, Game_Play* game_play);
void aFLS_actor_move(Actor* thisx, Game_Play* game_play);
void aFLS_actor_draw(Actor* thisx, Game_Play* game_play);

#if 0
ActorProfile FallS_Profile = {
    /* */ ACTOR_FALL_S,
    /* */ ACTOR_PART_0,
    /* */ 0,
    /* */ 0x580D,
    /* */ GAMEPLAY_KEEP,
    /* */ sizeof(FallS),
    /* */ func_80A03230_jp,
    /* */ func_80A03240_jp,
    /* */ aFLS_actor_move,
    /* */ aFLS_actor_draw,
    /* */ NULL,
};
#endif

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_FallS/ac_fallS/func_80A03230_jp.s")
void func_80A03230_jp(Actor* thisx, Game_Play* game_play) {
    return;
}

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_FallS/ac_fallS/func_80A03240_jp.s")
void func_80A03240_jp(Actor* thisx, Game_Play* game_play) {
    Clip_unk_08C* temp_v0;
    Clip_unk_08C* temp_v0_2;
    Clip_unk_08C* temp_v0_3;

    temp_v0 = common_data.clip.unk_08C;
    temp_v0->unk_A8(&temp_v0->unk_B0, 8, 0x13U, thisx);
    temp_v0_2 = common_data.clip.unk_08C;
    temp_v0_2->unk_A8(&temp_v0_2->unk_454, 9, 0x3CU, thisx);
    temp_v0_3 = common_data.clip.unk_08C;
    temp_v0_3->unk_A8(&temp_v0_3->unk_86C, 8, 0x13U, thisx);
}

// #pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_FallS/ac_fallS/aFLS_actor_move.s")
void aFLS_actor_move(Actor* thisx, Game_Play* game_play) {
    xyz_t sp1C;

    xyz_t_move(&sp1C, &thisx->world.pos);
    sp1C.y += 40.0f;
    sAdo_OngenPos(thisx, 0xC, &sp1C);
}

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_FallS/ac_fallS/aFLS_actor_draw.s")
