#include "obj_yamishop.h"

s32 padD5E000[] = { 0x00000000, 0x00000000 };
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_v.vtx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_window_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_t1_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_light_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_door1_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_door2_model.gfx.inc.c"
u8 obj_s_yamishop_t2_tex_txt[] = {
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_t2_tex_txt.ci4.inc.c"
};
u8 obj_s_yamishop_t1_tex_txt[] = {
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_t1_tex_txt.ci4.inc.c"
};
u8 obj_s_yamishop_window_tex_txt[] = {
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_s_yamishop_window_tex_txt.i4.inc.c"
};
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_je_r_obj_s_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_bs_r_obj_s_yamishop.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_ckcb_r_obj_s_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_kn_obj_s_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_c_obj_s_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_ds_obj_s_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_ba_r_obj_s_yamishop.inc.c"
s32 padD5FA18[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000 };
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_v.vtx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_window_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_t1_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_light_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_door1_model.gfx.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_door2_model.gfx.inc.c"
u8 obj_w_yamishop_t2_tex_txt[] = {
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_t2_tex_txt.ci4.inc.c"
};
u8 obj_w_yamishop_t1_tex_txt[] = {
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_t1_tex_txt.ci4.inc.c"
};
u8 obj_w_yamishop_window_tex_txt[] = {
#include "assets/jp/objects/object_00D5E000/obj_yamishop/obj_w_yamishop_window_tex_txt.i4.inc.c"
};
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_je_r_obj_w_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_bs_r_obj_w_yamishop.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_ckcb_r_obj_w_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_kn_obj_w_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_c_obj_w_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_ds_obj_w_yamishop_tbl.inc.c"
#include "assets/jp/objects/object_00D5E000/obj_yamishop/cKF_ba_r_obj_w_yamishop.inc.c"
