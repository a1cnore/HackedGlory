// functions/10008 — 275 functions
#include "GameKindred.h"




void FUN_100080158(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,float *param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = *param_7;
  fVar10 = fVar4 * 9.0;
  lVar2 = param_5 + 0xa0;
  lVar1 = FUN_1006575b8(lVar2,*(undefined4 *)(param_5 + 0x118));
  lVar3 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar8 = 1.0 / (float)*(int *)(lVar3 + 0x48);
  fVar9 = fVar10 + (float)param_1;
  param_4 = param_4 + (float)param_2;
  FUN_100043664(param_1,param_2,fVar9,param_4,0,fVar8 * fVar6,
                1.0 - fVar7 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar8 * (fVar5 + fVar6),param_6,
                param_8,0);
  lVar1 = FUN_1006575b8(lVar2,*(undefined4 *)(param_5 + 0x11c));
  lVar3 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar8 = 1.0 / (float)*(int *)(lVar3 + 0x48);
  FUN_100043664(fVar9,param_2,param_3 + fVar4 * -18.0 + fVar9,param_4,0,fVar8 * fVar6,
                1.0 - fVar7 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar8 * (fVar5 + fVar6),param_6,
                param_8,0);
  param_3 = param_3 + (float)param_1;
  lVar2 = FUN_1006575b8(lVar2,*(undefined4 *)(param_5 + 0x120));
  lVar1 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 4));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
  fVar7 = 1.0 / (float)*(int *)(lVar1 + 0x48);
  FUN_100043664(param_3 - fVar10,param_2,param_3,param_4,0,fVar7 * fVar5,
                1.0 - fVar6 * (1.0 / (float)*(int *)(lVar1 + 0x4c)),fVar7 * (fVar4 + fVar5),param_6,
                param_8,0);
  return;
}




void FUN_100080380(undefined8 param_1,float param_2,undefined8 param_3,float param_4,float param_5,
                  undefined8 param_6,undefined8 param_7,float *param_8,undefined8 param_9,
                  long param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *param_8;
  fVar4 = param_8[1];
  param_2 = fVar4 + fVar4 + param_2;
  FUN_10007ef84(param_1,param_2,param_3,param_4 - param_5,0x40000000,*(undefined4 *)(param_10 + 8));
  if (*(char *)(param_10 + 0xc) != '\0') {
    fVar2 = fVar2 * 6.0 + 2.0;
    fVar1 = fVar2 + (float)param_1;
    fVar3 = param_5 - (fVar4 + fVar4);
    fVar2 = (float)param_3 - fVar2 * 2.0;
    fVar4 = fVar4 + (param_4 - param_5) + param_2 + param_8[1] * 2.0;
    FUN_10007f4c0(fVar1,fVar4,fVar2,fVar3,*(undefined4 *)(param_10 + 0x10),param_6,param_7);
    FUN_10007faa8(fVar1,fVar4 + param_5,fVar2,fVar3,0,0,param_6,param_7,param_8,param_9);
    return;
  }
  return;
}




void FUN_1000804b0(undefined8 param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_44;
  
  local_44 = 0x80000000;
  fVar3 = *(float *)(param_7 + 4);
  param_2 = fVar3 + param_2;
  lVar1 = FUN_1006575b8(param_5 + 0xa0,DAT_101dc4cb0);
  lVar2 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar7 = 1.0 / (float)*(int *)(lVar2 + 0x48);
  FUN_100043664(param_1,param_2,SUB42(param_3 + (float)param_1,0),param_4 + fVar3 * 2.0 + param_2,0,
                fVar7 * fVar5,1.0 - fVar6 * (1.0 / (float)*(int *)(lVar2 + 0x4c)),
                fVar7 * (fVar4 + fVar5),param_6,&local_44,0);
  return;
}




void FUN_100080598(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6,float *param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char local_74;
  char local_73;
  char local_72;
  undefined1 local_71;
  
  fVar4 = *param_7;
  fVar10 = fVar4 * 8.0;
  local_74 = -((byte)(((uint)*(byte *)(param_5 + 0x140) << 4) >> 7) & 1);
  local_71 = *(undefined1 *)(param_8 + 3);
  lVar2 = param_5 + 0xa0;
  local_73 = local_74;
  local_72 = local_74;
  lVar1 = FUN_1006575b8(lVar2,*(undefined4 *)(param_5 + 0x118));
  lVar3 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar8 = 1.0 / (float)*(int *)(lVar3 + 0x48);
  fVar9 = fVar10 + (float)param_1;
  param_4 = param_4 + (float)param_2;
  FUN_100043664(param_1,param_2,fVar9,param_4,0,fVar8 * fVar6,
                1.0 - fVar7 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar8 * (fVar5 + fVar6),param_6,
                &local_74,0);
  lVar1 = FUN_1006575b8(lVar2,*(undefined4 *)(param_5 + 0x11c));
  lVar3 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
  fVar8 = 1.0 / (float)*(int *)(lVar3 + 0x48);
  FUN_100043664(fVar9,param_2,param_3 + fVar4 * -16.0 + fVar9,param_4,0,fVar8 * fVar6,
                1.0 - fVar7 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar8 * (fVar5 + fVar6),param_6,
                &local_74,0);
  param_3 = param_3 + (float)param_1;
  lVar2 = FUN_1006575b8(lVar2,*(undefined4 *)(param_5 + 0x120));
  lVar1 = *(long *)(*(long *)(param_5 + 0xa0) + 8);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
  NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
  fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 4));
  fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
  fVar7 = 1.0 / (float)*(int *)(lVar1 + 0x48);
  FUN_100043664(param_3 - fVar10,param_2,param_3,param_4,0,fVar7 * fVar5,
                1.0 - fVar6 * (1.0 / (float)*(int *)(lVar1 + 0x4c)),fVar7 * (fVar4 + fVar5),param_6,
                &local_74,0);
  return;
}




float FUN_1000807dc(float param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                   float param_6,long param_7,undefined8 param_8,undefined8 param_9,
                   undefined8 param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  if (0.0 < param_6) {
    fVar6 = (float)(int)((param_3 + param_5 * -2.0) * param_6);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar6 == 0.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_6)) {
        bVar1 = param_6 < 0.0;
        bVar2 = param_6 == 0.0;
        bVar3 = false;
      }
    }
    fVar10 = 1.0;
    if (bVar2 || bVar1 != bVar3) {
      fVar10 = fVar6;
    }
    if (fVar10 == 0.0) {
      if (fVar10 <= 0.0) {
        return fVar10;
      }
    }
    else if (fVar10 <= 2.0) {
      fVar10 = 2.0;
    }
    lVar4 = FUN_1006575b8(param_7 + 0xa0,param_10);
    lVar5 = *(long *)(*(long *)(param_7 + 0xa0) + 8);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
    fVar9 = 1.0 / (float)*(int *)(lVar5 + 0x48);
    FUN_100043664(param_5 + param_1,param_2,SUB42(fVar10 + param_5 + param_1,0),
                  param_4 + (float)param_2,0,fVar9 * fVar7,
                  1.0 - fVar8 * (1.0 / (float)*(int *)(lVar5 + 0x4c)),fVar9 * (fVar6 + fVar7),
                  param_8,param_9,0);
  }
  return fVar10;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100080904(void)

{
  undefined4 uVar1;
  
  DAT_101dc4c40 = 0xff;
  DAT_101dc4c42 = 0xffff;
  _DAT_101dc4d80 = 0x7f7fffff7f7fffff;
  _DAT_101dc4d88 = 0x7f7fffff7f7fffff;
  DAT_101dc4c44 = 0xffff;
  DAT_101dc4dc0 = 0x7f7fffff;
  DAT_101dc4dc4 = 0x7f7fffff;
  DAT_101dc4dc8 = 0x7f7fffff;
  DAT_101dc4dcc = 0x3f800000;
  DAT_101dc4de0 = 0x7f7fffff;
  DAT_101dc4de4 = 0x3eb33333;
  DAT_101dc4e28 = 0x7f7fffff;
  DAT_101dc4e2c = 0x7f7fffff;
  DAT_101dc4e30 = 0x7f7fffff;
  DAT_101dc4cec = 0xff7fffff;
  _DAT_101dc4cc0 = 0xff7fffffff7fffff;
  _DAT_101dc4cc8 = 0xff7fffffff7fffff;
  DAT_101dc4cd0 = 0;
  DAT_101dc4cd8 = 0;
  DAT_101dc4cf4 = NEON_fmov(0xbf800000,4);
  DAT_101dc4cfc = 0x3f000000;
  DAT_101dc4d00 = 0;
  DAT_101dc4d08 = 0;
  uRam0000000101dc4d48 = 0xbf800000bf800000;
  _DAT_101dc4d40 = 0xbf80000000000000;
  DAT_101dc4d50 = 0xbf800000;
  DAT_101dc4d60 = 0;
  DAT_101dc4d68 = 0;
  DAT_101dc4d70 = 0;
  DAT_101dc4c48 = 0x4250000043560000;
  DAT_101dc4c50 = 0x428c000043300000;
  DAT_101dc4c58 = 0x4110000042800000;
  DAT_101dc4c60 = 0x4110000043480000;
  DAT_101dc4c68 = 0x4110000043960000;
  DAT_101dc4c70 = 0x4180000043700000;
  DAT_101dc4c78 = 0x4110000043480000;
  DAT_101dc4c80 = 0x429c000043a08000;
  _DAT_101dc4cdc = _DAT_101dc4cc0;
  uRam0000000101dc4ce4 = _DAT_101dc4cc8;
  DAT_101dc4cf0 = DAT_101dc4cec;
  _DAT_101dc4d10 = _DAT_101dc4cc0;
  uRam0000000101dc4d18 = _DAT_101dc4cc8;
  _DAT_101dc4d20 = _DAT_101dc4cc0;
  uRam0000000101dc4d28 = _DAT_101dc4cc8;
  _DAT_101dc4d30 = _DAT_101dc4cc0;
  uRam0000000101dc4d38 = _DAT_101dc4cc8;
  DAT_101dc4d54 = DAT_101dc4cec;
  DAT_101dc4d58 = DAT_101dc4cec;
  DAT_101dc4d5c = DAT_101dc4cec;
  DAT_101dc4d64 = DAT_101dc4cec;
  _DAT_101dc4d90 = _DAT_101dc4d80;
  uRam0000000101dc4d98 = _DAT_101dc4d88;
  _DAT_101dc4da0 = _DAT_101dc4d80;
  uRam0000000101dc4da8 = _DAT_101dc4d88;
  _DAT_101dc4db0 = _DAT_101dc4d80;
  uRam0000000101dc4db8 = _DAT_101dc4d88;
  _DAT_101dc4dd0 = _DAT_101dc4d80;
  uRam0000000101dc4dd8 = _DAT_101dc4d88;
  _DAT_101dc4de8 = _DAT_101dc4d80;
  uRam0000000101dc4df0 = _DAT_101dc4d88;
  _DAT_101dc4df8 = _DAT_101dc4d80;
  _DAT_101dc4e00 = _DAT_101dc4d88;
  _DAT_101dc4e08 = _DAT_101dc4d80;
  uRam0000000101dc4e10 = _DAT_101dc4d88;
  _DAT_101dc4e18 = _DAT_101dc4d80;
  uRam0000000101dc4e20 = _DAT_101dc4d88;
  uVar1 = FUN_1004d2524("hud_plaque_hero_hp_me");
  DAT_101dc4c88 = FUN_100015208("hud_plaque_hero_hp_me",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("hud_plaque_minion_hp_ally");
  DAT_101dc4c8c = FUN_100015208("hud_plaque_minion_hp_ally",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("hud_plaque_minion_hp_enemy");
  DAT_101dc4c90 = FUN_100015208("hud_plaque_minion_hp_enemy",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("hud_plaque_minion_hp_damage");
  DAT_101dc4c94 = FUN_100015208("hud_plaque_minion_hp_damage",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("plaque_hero_fill");
  DAT_101dc4c98 = FUN_100015208("plaque_hero_fill",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("plaque_ally_fill");
  DAT_101dc4c9c = FUN_100015208("plaque_ally_fill",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("plaque_enemy_fill");
  DAT_101dc4ca0 = FUN_100015208("plaque_enemy_fill",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("hud_plaque_hero_seperator");
  DAT_101dc4ca4 = FUN_100015208("hud_plaque_hero_seperator",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("hud_plaque_waterline");
  DAT_101dc4ca8 = FUN_100015208("hud_plaque_waterline",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("hud_plaque_tertiary_bg_center");
  DAT_101dc4cac = FUN_100015208("hud_plaque_tertiary_bg_center",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("white_background");
  DAT_101dc4cb0 = FUN_100015208("white_background",uVar1,0x12345678);
  uVar1 = FUN_1004d2524("plaque_added_resource_frame");
  DAT_101dc4cb4 = FUN_100015208("plaque_added_resource_frame",uVar1,0x12345678);
  return;
}




long * FUN_100080c8c(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)FUN_10064f204();
  *puVar3 = &PTR_thunk_FUN_100080e94_10144e8e0;
  puVar3[0x29] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(puVar3 + 0x2a) = DAT_101dc0b88;
  puVar3[0x2b] = 0;
  *(undefined4 *)(puVar3 + 0x2c) = uVar1;
  puVar3 = puVar3 + 0x2d;
  FUN_100269de4(puVar3);
  FUN_10064e264(param_1 + 0x46);
  lVar5 = 0x2e8;
  do {
    FUN_10064e264((long)param_1 + lVar5);
    lVar5 = lVar5 + 0xb8;
  } while (lVar5 != 0x458);
  FUN_10064e264(param_1 + 0x8b);
  lVar5 = 0;
  do {
    thunk_FUN_100082fc0((long)param_1 + lVar5 + 0x510);
    lVar5 = lVar5 + 0x7e0;
  } while (lVar5 != 0x2f40);
  lVar5 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar5 + 0x3450);
    lVar5 = lVar5 + 0xf0;
  } while (lVar5 != 0x2d0);
  *(undefined4 *)(param_1 + 0x6e5) = 0;
  param_1[0x6e4] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,param_1 + 0x5d,1);
  FUN_100642bd8(puVar3,param_1 + 0x74,1);
  FUN_100642bd8(puVar3,param_1 + 0x8b,1);
  FUN_100642bd8(puVar3,param_1 + 0x46,1);
  *(uint *)((long)param_1 + 0x36c) = *(uint *)((long)param_1 + 0x36c) | 4;
  *(uint *)((long)param_1 + 0x424) = *(uint *)((long)param_1 + 0x424) | 4;
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
  *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) | 4;
  uVar1 = FUN_1004d2524("HUD_Inventory");
  uVar2 = FUN_100015208("HUD_Inventory",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  uVar4 = FUN_1003da398();
  FUN_1004e18bc(uVar4,param_1,0xe4cbad13,FUN_100080e40,0);
  return param_1;
}




void FUN_100080e40(long param_1)

{
  ulong uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_10034ea2c(in_stack_00000000);
  if (((uVar1 & 1) != 0) || (*(char *)(param_1 + 0x3728) != '\0')) {
    FUN_100081008(param_1);
  }
  return;
}




long * thunk_FUN_100080c8c(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)FUN_10064f204();
  *puVar3 = &PTR_thunk_FUN_100080e94_10144e8e0;
  puVar3[0x29] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(puVar3 + 0x2a) = DAT_101dc0b88;
  puVar3[0x2b] = 0;
  *(undefined4 *)(puVar3 + 0x2c) = uVar1;
  puVar3 = puVar3 + 0x2d;
  FUN_100269de4(puVar3);
  FUN_10064e264(param_1 + 0x46);
  lVar5 = 0x2e8;
  do {
    FUN_10064e264((long)param_1 + lVar5);
    lVar5 = lVar5 + 0xb8;
  } while (lVar5 != 0x458);
  FUN_10064e264(param_1 + 0x8b);
  lVar5 = 0;
  do {
    thunk_FUN_100082fc0((long)param_1 + lVar5 + 0x510);
    lVar5 = lVar5 + 0x7e0;
  } while (lVar5 != 0x2f40);
  lVar5 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar5 + 0x3450);
    lVar5 = lVar5 + 0xf0;
  } while (lVar5 != 0x2d0);
  *(undefined4 *)(param_1 + 0x6e5) = 0;
  param_1[0x6e4] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,param_1 + 0x5d,1);
  FUN_100642bd8(puVar3,param_1 + 0x74,1);
  FUN_100642bd8(puVar3,param_1 + 0x8b,1);
  FUN_100642bd8(puVar3,param_1 + 0x46,1);
  *(uint *)((long)param_1 + 0x36c) = *(uint *)((long)param_1 + 0x36c) | 4;
  *(uint *)((long)param_1 + 0x424) = *(uint *)((long)param_1 + 0x424) | 4;
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
  *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) | 4;
  uVar1 = FUN_1004d2524("HUD_Inventory");
  uVar2 = FUN_100015208("HUD_Inventory",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  uVar4 = FUN_1003da398();
  FUN_1004e18bc(uVar4,param_1,0xe4cbad13,FUN_100080e40,0);
  return param_1;
}




void FUN_100080e94(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_100080e94_10144e8e0;
  uVar1 = FUN_1003da398();
  FUN_1004e1b58(uVar1,param_1);
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x3630) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x36e8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x3700);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x3630);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x2d0);
  lVar2 = 0;
  do {
    thunk_FUN_100083570((long)param_1 + lVar2 + 0x2c70);
    lVar2 = lVar2 + -0x7e0;
  } while (lVar2 != -0x2f40);
  thunk_FUN_10064e2bc(param_1 + 0x8b);
  lVar2 = 0x3a0;
  do {
    thunk_FUN_10064e2bc((long)param_1 + lVar2);
    lVar2 = lVar2 + -0xb8;
  } while (lVar2 != 0x230);
  thunk_FUN_10064e2bc(param_1 + 0x46);
  FUN_10064e2bc(param_1 + 0x2d);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100080e94(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_100080e94_10144e8e0;
  uVar1 = FUN_1003da398();
  FUN_1004e1b58(uVar1,param_1);
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x3630) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x36e8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x3700);
    FUN_10064e2bc((long)param_1 + lVar2 + 0x3630);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x2d0);
  lVar2 = 0;
  do {
    thunk_FUN_100083570((long)param_1 + lVar2 + 0x2c70);
    lVar2 = lVar2 + -0x7e0;
  } while (lVar2 != -0x2f40);
  thunk_FUN_10064e2bc(param_1 + 0x8b);
  lVar2 = 0x3a0;
  do {
    thunk_FUN_10064e2bc((long)param_1 + lVar2);
    lVar2 = lVar2 + -0xb8;
  } while (lVar2 != 0x230);
  thunk_FUN_10064e2bc(param_1 + 0x46);
  FUN_10064e2bc(param_1 + 0x2d);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100080f94(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100080e94();
  operator_delete(pvVar1);
  return;
}




void FUN_100080fa8(long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x148) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x150) = uVar3;
  lVar4 = FUN_1004901b4(param_1 + 0x148);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x28;
  }
  puVar2 = &DAT_101dc0b88;
  if (lVar4 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 0x158) = lVar1;
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  FUN_100081008(param_1);
  return;
}




void FUN_100081008(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  
  plVar6 = (long *)param_1[0x2b];
  if (plVar6 != (long *)0x0) {
    plVar1 = param_1 + 0x2b;
    plVar2 = param_1 + 0x2c;
    if ((int)param_1[0x2c] == (int)plVar6[1]) {
      lVar7 = (**(code **)(*plVar6 + 0x10))();
      if (lVar7 != 0) {
        uVar14 = 0;
        uVar13 = 0;
        plVar6 = param_1 + 0x6e5;
        while( true ) {
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_1003e1b24(uVar9);
          if (uVar4 <= uVar14) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_100465738(uVar9);
          if (uVar4 <= uVar14) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_100465738(uVar9);
          uVar12 = (uint)uVar13;
          if ((5 < (int)uVar12) || (uVar4 <= uVar12)) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar9 = FUN_10044d868(uVar9,uVar14);
          if ((int)uVar9 != -1) {
            plVar8 = (long *)*plVar1;
            uVar10 = 0;
            if (plVar8 != (long *)0x0) {
              if ((int)*plVar2 == (int)plVar8[1]) {
                uVar10 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                uVar10 = 0;
                *plVar1 = 0;
                *(int *)plVar2 = DAT_101dc0b88;
              }
            }
            FUN_10044d88c(uVar10,uVar9);
            uVar11 = FUN_1000bda94();
            if ((uVar11 & 1) == 0) {
              plVar8 = (long *)*plVar1;
              uVar10 = 0;
              if (plVar8 != (long *)0x0) {
                if ((int)*plVar2 == (int)plVar8[1]) {
                  uVar10 = (**(code **)(*plVar8 + 0x10))();
                }
                else {
                  uVar10 = 0;
                  *plVar1 = 0;
                  *(int *)plVar2 = DAT_101dc0b88;
                }
              }
              iVar5 = FUN_10046e42c(uVar10,uVar9);
              if (iVar5 != 0) {
                if (((char)*plVar6 == '\0') && (*(char *)((long)param_1 + 0x3729) == '\0')) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = 1;
                }
                FUN_100082dcc(param_1,uVar13,uVar9,0,uVar10);
                uVar13 = (ulong)(uVar12 + 1);
              }
            }
          }
          uVar14 = uVar14 + 1;
        }
        uVar14 = 0;
        while( true ) {
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_1003e1b24(uVar9);
          uVar12 = (uint)uVar13;
          if (uVar4 <= uVar14) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_100465738(uVar9);
          if (uVar4 <= uVar14) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_100465738(uVar9);
          if ((5 < (int)uVar12) || (uVar4 <= uVar12)) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar9 = FUN_10044d868(uVar9,uVar14);
          if ((int)uVar9 != -1) {
            plVar8 = (long *)*plVar1;
            uVar10 = 0;
            if (plVar8 != (long *)0x0) {
              if ((int)*plVar2 == (int)plVar8[1]) {
                uVar10 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                uVar10 = 0;
                *plVar1 = 0;
                *(int *)plVar2 = DAT_101dc0b88;
              }
            }
            uVar11 = FUN_10046e42c(uVar10,uVar9);
            if ((uVar11 & 1) == 0) {
              plVar8 = (long *)*plVar1;
              if (plVar8 != (long *)0x0) {
                if ((int)*plVar2 == (int)plVar8[1]) {
                  (**(code **)(*plVar8 + 0x10))();
                }
                else {
                  *plVar1 = 0;
                  *(int *)plVar2 = DAT_101dc0b88;
                }
              }
              if ((char)*plVar6 != '\0') {
                FUN_100082dcc(param_1,uVar13,uVar9,0,1);
                uVar13 = (ulong)(uVar12 + 1);
              }
            }
          }
          uVar14 = uVar14 + 1;
        }
        uVar14 = 0;
        *(uint *)(param_1 + 0x6e4) = uVar12;
        while( true ) {
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_1003e1b24(uVar9);
          uVar12 = (uint)uVar13;
          if (uVar4 <= uVar14) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_100465738(uVar9);
          if (uVar4 <= uVar14) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar4 = FUN_100465738(uVar9);
          if ((5 < (int)uVar12) || (uVar4 <= uVar12)) break;
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar10 = FUN_10044d868(uVar9,uVar14);
          plVar8 = (long *)*plVar1;
          uVar9 = 0;
          if (plVar8 != (long *)0x0) {
            if ((int)*plVar2 == (int)plVar8[1]) {
              uVar9 = (**(code **)(*plVar8 + 0x10))();
            }
            else {
              uVar9 = 0;
              *plVar1 = 0;
              *(int *)plVar2 = DAT_101dc0b88;
            }
          }
          uVar11 = FUN_10046e42c(uVar9,uVar10);
          if ((uVar11 & 1) == 0) {
            plVar8 = (long *)*plVar1;
            if (plVar8 != (long *)0x0) {
              if ((int)*plVar2 == (int)plVar8[1]) {
                (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *plVar1 = 0;
                *(int *)plVar2 = DAT_101dc0b88;
              }
            }
            if ((char)*plVar6 == '\0') {
              FUN_100082dcc(param_1,uVar13,uVar10,0,1);
              uVar13 = (ulong)(uVar12 + 1);
            }
          }
          uVar14 = uVar14 + 1;
        }
        if (uVar12 < 6) {
          plVar6 = param_1 + uVar13 * 0xfc + 0xa2;
          iVar5 = uVar12 - 6;
          do {
            FUN_100083858(plVar6);
            plVar6 = plVar6 + 0xfc;
            bVar3 = iVar5 != -1;
            iVar5 = iVar5 + 1;
          } while (bVar3);
        }
      }
    }
    else {
      *plVar1 = 0;
      *(int *)plVar2 = DAT_101dc0b88;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100081658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_10008165c(long param_1,int param_2)

{
  *(int *)(param_1 + 0x3724) = param_2;
  if (param_2 == 3) {
    *(undefined2 *)(param_1 + 0x3728) = 0x101;
  }
  else if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x3728) = 1;
    return;
  }
  return;
}




void FUN_100081690(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x372a) = param_2;
  return;
}




void FUN_10008169c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x372b) = param_2;
  return;
}




void FUN_1000816a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x510;
  lVar1 = 6;
  do {
    FUN_100083968(param_1);
    param_1 = param_1 + 0x7e0;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




void FUN_1000816dc(long param_1)

{
  switch(*(undefined4 *)(param_1 + 0x3724)) {
  case 0:
    FUN_100081714();
    return;
  case 1:
    FUN_100081d10();
    return;
  case 2:
    FUN_100082434();
    return;
  case 3:
    FUN_100082728();
    return;
  default:
    return;
  }
}




void FUN_100081714(long *param_1)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  uint local_b8;
  uint uStack_b4;
  ulong local_b0;
  void *local_a8;
  float local_a0;
  float local_9c;
  undefined1 *local_98;
  
  if (param_1[0x29] == 0) {
    return;
  }
  if ((int)param_1[0x2a] != *(int *)(param_1[0x29] + 8)) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x2a) = DAT_101dc0b88;
    return;
  }
  plVar6 = (long *)param_1[0x2b];
  if (plVar6 == (long *)0x0) {
    return;
  }
  if ((int)param_1[0x2c] != (int)plVar6[1]) {
    param_1[0x2b] = 0;
    *(undefined4 *)(param_1 + 0x2c) = DAT_101dc0b88;
    return;
  }
  lVar7 = (**(code **)(*plVar6 + 0x10))();
  if (lVar7 == 0) {
    return;
  }
  plVar6 = param_1 + 0x46;
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x284) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x50)))) {
    bVar3 = *(float *)(param_1 + 0x50) == 0.0;
  }
  if (!bVar3) {
    param_1[0x50] = 0;
    FUN_1000200a0(plVar6);
  }
  iVar4 = FUN_100082cb4(param_1);
  iVar4 = iVar4 - *(uint *)(param_1 + 0x6e4);
  fVar13 = 0.5;
  fVar18 = (float)(int)((float)iVar4 * 0.5) * 0.5;
  fVar10 = fVar18 + (float)*(uint *)(param_1 + 0x6e4);
  if (fVar10 <= 1.0) {
    fVar10 = 1.0;
  }
  fVar11 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar11 = (fVar13 * fVar11) / fVar10;
  fVar14 = SQRT(fVar11);
  fVar13 = fVar14;
  if (fVar11 <= 0.0) {
    fVar13 = fVar11;
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  uVar17 = NEON_fminnm(fVar14 / fVar10,fVar13);
  uVar12 = (**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = (float)NEON_fminnm(uVar12,uVar17);
  fVar18 = fVar18 * fVar10;
  uVar16 = (ulong)(uint)fVar18;
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar11 = (fVar14 - fVar18) + (float)((int)param_1[0x6e4] + 1) * -16.0;
  fVar13 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar18 = (float)NEON_ucvtf((int)param_1[0x6e4]);
  fVar10 = fVar18;
  if (fVar18 <= 1.0) {
    fVar10 = 1.0;
  }
  fVar10 = (fVar11 * fVar13) / fVar10;
  fVar13 = SQRT(fVar10);
  if (fVar10 <= 0.0) {
    fVar13 = fVar10;
  }
  uVar17 = NEON_fminnm(fVar11 / fVar18,fVar13);
  uVar12 = (**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = (float)NEON_fminnm(uVar12,uVar17);
  FUN_10064e47c(fVar10,(float)(*(uint *)(param_1 + 0x6e4) + 1) * 16.0 +
                       (float)*(uint *)(param_1 + 0x6e4) * fVar10,plVar6);
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x274) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x4e)))) {
    bVar3 = *(float *)(param_1 + 0x4e) == 0.0;
  }
  if (!bVar3) {
    param_1[0x4e] = 0;
    FUN_1000200a0(plVar6);
  }
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  local_a0 = fVar10;
  local_9c = fVar10;
  if ((int)param_1[0x6e4] != 0) {
    uVar8 = 0;
    do {
      plVar1 = param_1 + uVar8 * 0xfc + 0xa2;
      FUN_10064e48c(plVar1,&local_a0);
      iVar5 = FUN_100084608(plVar1);
      if (iVar5 == 0) {
        iVar5 = FUN_100642d08(plVar1);
        if (iVar5 != 0) {
          FUN_1006423ec(plVar1,1);
        }
        FUN_100642bd8(plVar6,plVar1,1);
      }
      else {
        FUN_1000228fc(&local_b0,&local_b8);
      }
      fVar10 = (float)(**(code **)(*plVar1 + 0x48))(plVar1);
      fVar13 = (float)NEON_ucvtf(local_b8);
      fVar13 = fVar13 * 16.0 + local_9c * (fVar13 + 0.5);
      uVar15 = (ulong)(uint)fVar13;
      fVar18 = *(float *)((long)param_1 + uVar8 * 0x7e0 + 0x554);
      bVar3 = false;
      if ((*(float *)(param_1 + uVar8 * 0xfc + 0xaa) == fVar10 * 0.5) &&
         (bVar3 = false, !NAN(fVar18) && !NAN(fVar13))) {
        bVar3 = fVar18 == fVar13;
      }
      if (!bVar3) {
        *(float *)(param_1 + uVar8 * 0xfc + 0xaa) = fVar10 * 0.5;
        *(float *)((long)param_1 + uVar8 * 0x7e0 + 0x554) = fVar13;
        FUN_1000200a0(plVar1);
      }
      local_98 = &DAT_3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_98);
      fVar10 = (float)uVar15;
      local_b8 = local_b8 + 1;
      uVar8 = (ulong)local_b8;
      uVar9 = *(uint *)(param_1 + 0x6e4);
    } while (local_b8 < uVar9);
    if ((int)local_b0 != 0) {
      uVar8 = 0;
      do {
        plVar1 = param_1 + (ulong)*(uint *)((long)local_a8 + uVar8 * 4) * 0xfc + 0xa2;
        iVar5 = FUN_100642d08(plVar1);
        if (iVar5 != 0) {
          FUN_1006423ec(plVar1,1);
        }
        FUN_100642bd8(plVar6,plVar1,1);
        fVar10 = (float)uVar15;
        uVar8 = uVar8 + 1;
      } while (uVar8 < (local_b0 & 0xffffffff));
      uVar9 = *(uint *)(param_1 + 0x6e4);
    }
    if (uVar9 != 0) {
      fVar13 = *(float *)((long)param_1 + (ulong)(uVar9 - 1) * 0x7e0 + 0x554);
      (**(code **)(param_1[(ulong)(uVar9 - 1) * 0xfc + 0xa2] + 0x48))();
      fVar10 = ABS(ABS(fVar13) + fVar10 * 0.5) + 8.0;
      goto LAB_100081ae8;
    }
  }
  fVar10 = 8.0;
LAB_100081ae8:
  if (*(char *)((long)param_1 + 0x372b) == '\0') {
    plVar1 = param_1 + 0x8b;
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) | 4;
    bVar3 = false;
    if ((*(float *)((long)param_1 + 0x4ac) == 0.0) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x95)))) {
      bVar3 = *(float *)(param_1 + 0x95) == 0.0;
    }
    if (!bVar3) {
      param_1[0x95] = 0;
      FUN_1000200a0(plVar1);
    }
    FUN_10064e3cc(plVar6);
    FUN_10064e47c(plVar1);
    if ((*(float *)(param_1 + 0x93) != 0.0) || (*(float *)((long)param_1 + 0x49c) != fVar10)) {
      *(undefined4 *)(param_1 + 0x93) = 0;
      *(float *)((long)param_1 + 0x49c) = fVar10;
      FUN_1000200a0(plVar1);
    }
    FUN_10064e3cc(plVar1);
    fVar13 = (float)uVar16;
    fVar10 = (float)FUN_10064e3cc(plVar1);
    local_b8 = NEON_fminnm(fVar13 / (float)(int)((float)iVar4 * 0.5),fVar10 * 0.5);
    uVar9 = *(uint *)(param_1 + 0x6e4);
    uVar8 = (ulong)uVar9;
    uStack_b4 = local_b8;
    if (uVar9 < uVar9 + iVar4) {
      plVar6 = param_1 + uVar8 * 0xfc + 0xa2;
      do {
        fVar10 = (float)uVar16;
        FUN_10064e48c(plVar6,&local_b8);
        iVar5 = FUN_100642d08(plVar6);
        if (iVar5 != 0) {
          FUN_1006423ec(plVar6,1);
        }
        FUN_100642bd8(plVar1,plVar6,1);
        iVar2 = (int)uVar8 - (int)param_1[0x6e4];
        fVar13 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
        iVar5 = iVar2;
        if (iVar2 < 0) {
          iVar5 = iVar2 + 1;
        }
        if (iVar2 % 2 == 1) {
          fVar13 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
          fVar13 = fVar13 * 1.5;
        }
        else {
          fVar13 = fVar13 * 0.5;
        }
        (**(code **)(*plVar6 + 0x48))(plVar6);
        fVar10 = (float)(iVar5 >> 1) * 3.2 + ((float)(iVar5 >> 1) + 0.5) * fVar10;
        uVar16 = (ulong)(uint)*(float *)(plVar6 + 8);
        if ((*(float *)(plVar6 + 8) != fVar13) ||
           (uVar16 = (ulong)(uint)*(float *)((long)plVar6 + 0x44),
           *(float *)((long)plVar6 + 0x44) != fVar10)) {
          *(float *)(plVar6 + 8) = fVar13;
          *(float *)((long)plVar6 + 0x44) = fVar10;
          FUN_1000200a0(plVar6);
        }
        local_98 = &DAT_3f0000003f000000;
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_98);
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 0xfc;
      } while (uVar8 < (uint)((int)param_1[0x6e4] + iVar4));
    }
  }
  else {
    *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  }
  param_1 = param_1 + 0xa2;
  lVar7 = 6;
  do {
    FUN_100083e1c(param_1);
    param_1 = param_1 + 0xfc;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  return;
}




void FUN_100081d10(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  void *local_b0;
  float local_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  
  if (param_3[0x29] == 0) {
    return;
  }
  if ((int)param_3[0x2a] != *(int *)(param_3[0x29] + 8)) {
    param_3[0x29] = 0;
    *(undefined4 *)(param_3 + 0x2a) = DAT_101dc0b88;
    return;
  }
  plVar9 = (long *)param_3[0x2b];
  if (plVar9 == (long *)0x0) {
    return;
  }
  if ((int)param_3[0x2c] != (int)plVar9[1]) {
    param_3[0x2b] = 0;
    *(undefined4 *)(param_3 + 0x2c) = DAT_101dc0b88;
    return;
  }
  lVar10 = (**(code **)(*plVar9 + 0x10))();
  if (lVar10 == 0) {
    return;
  }
  pcVar2 = (char *)((long)param_3 + 0x372a);
  FUN_100641464(&uStack_9c,&local_a0);
  iVar7 = FUN_100126c88();
  cVar4 = *pcVar2;
  fVar18 = 1.0;
  if (cVar4 != '\0') {
    fVar18 = -1.0;
  }
  fVar20 = 12.0;
  if (iVar7 != 0) {
    FUN_100126cb8(uStack_9c);
    fVar20 = 10.0;
    param_2 = local_a0;
  }
  fVar15 = 0.0;
  fVar13 = 0.0;
  if (cVar4 != '\0') {
    fVar13 = 1.0;
  }
  plVar9 = param_3 + 0x46;
  uVar12 = (**(code **)(*param_3 + 0x48))(param_3);
  local_b8 = CONCAT44(param_2,uVar12);
  FUN_10064e48c(plVar9,&local_b8);
  fVar16 = *(float *)((long)param_3 + 0x284);
  bVar6 = false;
  if ((*(float *)(param_3 + 0x50) == fVar13) && (bVar6 = false, !NAN(fVar16))) {
    bVar6 = fVar16 == 0.5;
  }
  if (!bVar6) {
    *(float *)(param_3 + 0x50) = fVar13;
    *(undefined4 *)((long)param_3 + 0x284) = 0x3f000000;
    FUN_1000200a0(plVar9);
  }
  iVar7 = FUN_100082cb4(param_3);
  iVar7 = iVar7 - *(uint *)(param_3 + 0x6e4);
  fVar19 = (float)(int)((float)iVar7 * 0.5) * 0.5;
  fVar13 = fVar19 + (float)*(uint *)(param_3 + 0x6e4);
  if (fVar13 <= 1.0) {
    fVar13 = 1.0;
  }
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar14 = (fVar14 * fVar16) / fVar13;
  fVar17 = SQRT(fVar14);
  fVar16 = fVar17;
  if (fVar14 <= 0.0) {
    fVar16 = fVar14;
  }
  fVar14 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uVar12 = NEON_fminnm(fVar14 / fVar13,fVar16);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar13 = (float)NEON_fminnm(fVar17,uVar12);
  fVar19 = fVar19 * fVar13;
  fVar16 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar14 = fVar19 + (float)((int)param_3[0x6e4] + 1) * fVar20;
  fVar16 = fVar16 - fVar14;
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar17 = (float)NEON_ucvtf((int)param_3[0x6e4]);
  fVar13 = fVar17;
  if (fVar17 <= 1.0) {
    fVar13 = 1.0;
  }
  fVar13 = (fVar14 * fVar16) / fVar13;
  fVar14 = SQRT(fVar13);
  if (fVar13 <= 0.0) {
    fVar14 = fVar13;
  }
  fVar16 = fVar16 / fVar17;
  uVar12 = NEON_fminnm(fVar16,fVar14);
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar13 = (float)NEON_fminnm(fVar16,uVar12);
  local_a8 = fVar13;
  fStack_a4 = fVar13;
  FUN_10064e47c(fVar13 * (float)*(uint *)(param_3 + 0x6e4) +
                (float)(*(uint *)(param_3 + 0x6e4) + 1) * fVar20,plVar9);
  if (*pcVar2 != '\0') {
    fVar15 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  }
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar16 = fVar13;
  FUN_10064e3cc(plVar9);
  if ((*(float *)(param_3 + 0x4e) != fVar15) ||
     (*(float *)((long)param_3 + 0x274) != fVar13 - fVar16)) {
    *(float *)(param_3 + 0x4e) = fVar15;
    *(float *)((long)param_3 + 0x274) = fVar13 - fVar16;
    FUN_1000200a0(plVar9);
  }
  local_b8 = 0;
  (**(code **)(param_3[0x46] + 0x28))(plVar9,&local_b8);
  local_b8 = 0;
  local_b0 = (void *)0x0;
  local_c0 = 0.0;
  if ((int)param_3[0x6e4] != 0) {
    uVar11 = 0;
    do {
      plVar1 = param_3 + uVar11 * 0xfc + 0xa2;
      FUN_10064e48c(plVar1,&local_a8);
      iVar8 = FUN_100084608(plVar1);
      if (iVar8 == 0) {
        iVar8 = FUN_100642d08(plVar1);
        if (iVar8 != 0) {
          FUN_1006423ec(plVar1,1);
        }
        FUN_100642bd8(plVar9,plVar1,1);
      }
      else {
        FUN_1000228fc(&local_b8,&local_c0);
      }
      fVar13 = (float)NEON_ucvtf(local_c0);
      fVar15 = fVar20 * fVar13;
      fVar16 = (fVar15 + local_a8 * (fVar13 + 0.5)) * fVar18;
      FUN_10064e3cc(plVar9);
      fVar15 = fVar15 * 0.5;
      fVar13 = *(float *)((long)param_3 + uVar11 * 0x7e0 + 0x554);
      bVar6 = false;
      if ((*(float *)(param_3 + uVar11 * 0xfc + 0xaa) == fVar16) &&
         (bVar6 = false, !NAN(fVar13) && !NAN(fVar15))) {
        bVar6 = fVar13 == fVar15;
      }
      if (!bVar6) {
        *(float *)(param_3 + uVar11 * 0xfc + 0xaa) = fVar16;
        *(float *)((long)param_3 + uVar11 * 0x7e0 + 0x554) = fVar15;
        FUN_1000200a0(plVar1);
      }
      local_98 = &DAT_3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_98);
      local_c0 = (float)((int)local_c0 + 1);
      uVar11 = (ulong)(uint)local_c0;
      fVar15 = *(float *)(param_3 + 0x6e4);
    } while ((uint)local_c0 < (uint)fVar15);
    if ((int)local_b8 != 0) {
      uVar11 = 0;
      do {
        plVar1 = param_3 + (ulong)*(uint *)((long)local_b0 + uVar11 * 4) * 0xfc + 0xa2;
        iVar8 = FUN_100642d08(plVar1);
        if (iVar8 != 0) {
          FUN_1006423ec(plVar1,1);
        }
        FUN_100642bd8(plVar9,plVar1,1);
        uVar11 = uVar11 + 1;
      } while (uVar11 < (local_b8 & 0xffffffff));
      fVar15 = *(float *)(param_3 + 0x6e4);
    }
    if (fVar15 != 0.0) {
      uVar5 = (int)fVar15 - 1;
      fVar15 = *(float *)(param_3 + (ulong)uVar5 * 0xfc + 0xaa);
      fVar13 = (float)(**(code **)(param_3[(ulong)uVar5 * 0xfc + 0xa2] + 0x48))
                                (param_3 + (ulong)uVar5 * 0xfc + 0xa2);
      fVar15 = ABS(ABS(fVar15) + fVar13 * 0.5);
      goto LAB_100082190;
    }
  }
  fVar15 = 0.0;
LAB_100082190:
  if (*(char *)((long)param_3 + 0x372b) == '\0') {
    plVar1 = param_3 + 0x8b;
    *(uint *)((long)param_3 + 0x4dc) = *(uint *)((long)param_3 + 0x4dc) | 4;
    fVar13 = *(float *)((long)param_3 + 0x284);
    bVar6 = false;
    if ((*(float *)(param_3 + 0x95) == *(float *)(param_3 + 0x50)) &&
       (bVar6 = false, !NAN(*(float *)((long)param_3 + 0x4ac)) && !NAN(fVar13))) {
      bVar6 = *(float *)((long)param_3 + 0x4ac) == fVar13;
    }
    if (!bVar6) {
      *(float *)(param_3 + 0x95) = *(float *)(param_3 + 0x50);
      *(float *)((long)param_3 + 0x4ac) = fVar13;
      FUN_1000200a0(plVar1);
    }
    FUN_10064e3cc(plVar9);
    FUN_10064e47c(fVar19,plVar1);
    if (*pcVar2 == '\0') {
      fVar16 = 0.0;
    }
    else {
      fVar16 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    }
    fVar16 = fVar16 + (fVar15 + fVar20 * 0.5) * fVar18;
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar15 = fVar13;
    FUN_10064e3cc(plVar1);
    fVar13 = fVar13 - fVar15;
    fVar15 = *(float *)(param_3 + 0x93);
    bVar6 = false;
    if ((fVar15 == fVar16) &&
       (bVar6 = false, !NAN(*(float *)((long)param_3 + 0x49c)) && !NAN(fVar13))) {
      bVar6 = *(float *)((long)param_3 + 0x49c) == fVar13;
    }
    if (!bVar6) {
      *(float *)(param_3 + 0x93) = fVar16;
      *(float *)((long)param_3 + 0x49c) = fVar13;
      FUN_1000200a0(plVar1);
    }
    local_98 = (undefined1 *)0x0;
    (**(code **)(param_3[0x8b] + 0x28))(plVar1,&local_98);
    fVar13 = (float)FUN_10064e3cc(plVar1);
    FUN_10064e3cc(plVar1);
    local_c0 = (float)NEON_fminnm(fVar13 / (float)(int)((float)iVar7 * 0.5),fVar15 * 0.5);
    uVar5 = *(uint *)(param_3 + 0x6e4);
    uVar11 = (ulong)uVar5;
    local_bc = local_c0;
    if (uVar5 < uVar5 + iVar7) {
      plVar9 = param_3 + uVar11 * 0xfc + 0xa2;
      do {
        FUN_10064e48c(plVar9,&local_c0);
        iVar8 = FUN_100642d08(plVar9);
        if (iVar8 != 0) {
          FUN_1006423ec(plVar9,1);
        }
        FUN_100642bd8(plVar1,plVar9,1);
        fVar13 = local_bc;
        iVar8 = (int)uVar11 - (int)param_3[0x6e4];
        FUN_10064e3cc(plVar1);
        fVar15 = -(fVar13 * -2.0) - fVar15;
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        iVar3 = iVar8;
        if (iVar8 < 0) {
          iVar3 = iVar8 + 1;
        }
        fVar13 = (float)(**(code **)(*plVar9 + 0x48))(plVar9);
        fVar16 = fVar20 * 0.4 * (float)(iVar3 >> 1);
        fVar14 = (fVar16 + ((float)(iVar3 >> 1) + 0.5) * fVar13) * fVar18;
        (**(code **)(*plVar9 + 0x48))(plVar9);
        fVar19 = (fVar16 + fVar15) * 0.5;
        fVar13 = -((fVar16 + fVar15) * 0.5);
        if (iVar8 % 2 != 1) {
          fVar13 = fVar19;
        }
        FUN_10064e3cc(plVar1);
        fVar13 = fVar13 + fVar19 * 0.5;
        fVar15 = *(float *)(plVar9 + 8);
        bVar6 = false;
        if ((fVar15 == fVar14) &&
           (bVar6 = false, !NAN(*(float *)((long)plVar9 + 0x44)) && !NAN(fVar13))) {
          bVar6 = *(float *)((long)plVar9 + 0x44) == fVar13;
        }
        if (!bVar6) {
          *(float *)(plVar9 + 8) = fVar14;
          *(float *)((long)plVar9 + 0x44) = fVar13;
          FUN_1000200a0(plVar9);
        }
        local_98 = &DAT_3f0000003f000000;
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_98);
        uVar11 = uVar11 + 1;
        plVar9 = plVar9 + 0xfc;
      } while (uVar11 < (uint)((int)param_3[0x6e4] + iVar7));
    }
  }
  else {
    *(uint *)((long)param_3 + 0x4dc) = *(uint *)((long)param_3 + 0x4dc) & 0xfffffffb;
  }
  param_3 = param_3 + 0xa2;
  lVar10 = 6;
  do {
    FUN_100083e1c(param_3);
    param_3 = param_3 + 0xfc;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  return;
}




void FUN_100082434(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float local_88;
  float fStack_84;
  
  if (param_3[0x29] != 0) {
    if ((int)param_3[0x2a] == *(int *)(param_3[0x29] + 8)) {
      plVar4 = (long *)param_3[0x2b];
      if (plVar4 != (long *)0x0) {
        if ((int)param_3[0x2c] == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 != 0) {
            (**(code **)(*param_3 + 0x48))(param_3);
            plVar4 = param_3 + 0x46;
            fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
            fVar12 = 0.1;
            (**(code **)(*param_3 + 0x48))(param_3);
            fVar12 = fVar12 - param_2 * 0.1;
            FUN_10064e47c(fVar7 - param_2 * 0.1,plVar4);
            (**(code **)(*param_3 + 0x48))(param_3);
            fVar7 = (fVar12 + param_2 * 0.05) * -0.5;
            fVar12 = *(float *)(param_3 + 0x4e);
            bVar3 = false;
            if ((fVar12 == param_2 * 0.025) &&
               (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x274)) && !NAN(fVar7))) {
              bVar3 = *(float *)((long)param_3 + 0x274) == fVar7;
            }
            if (!bVar3) {
              *(float *)(param_3 + 0x4e) = param_2 * 0.025;
              *(float *)((long)param_3 + 0x274) = fVar7;
              FUN_1000200a0(plVar4);
            }
            FUN_10064259c(plVar4);
            fVar7 = fVar12;
            fVar8 = (float)FUN_10064259c(plVar4);
            FUN_10064259c(plVar4);
            uVar13 = NEON_fminnm(fVar7,SQRT(fVar12 * fVar8 * 0.16666667));
            fVar7 = (float)FUN_10064259c(plVar4);
            fVar12 = (float)NEON_fminnm(fVar7 * 0.16666667,uVar13);
            local_88 = fVar12;
            fStack_84 = fVar12;
            fVar7 = (float)FUN_10064259c(plVar4);
            if ((int)param_3[0x6e4] != 0) {
              lVar5 = 0;
              uVar6 = 0;
              fVar8 = (float)((int)param_3[0x6e4] - 1);
              if (fVar8 <= 1.0) {
                fVar8 = 1.0;
              }
              do {
                lVar1 = (long)param_3 + lVar5 + 0x510;
                if (*(long *)((long)param_3 + lVar5 + 0x530) != 0) {
                  FUN_1006423ec(lVar1,1);
                }
                FUN_100642bd8(plVar4,lVar1,1);
                if (lVar5 == 0) {
                  if ((*(float *)(param_3 + 0xaa) != fVar12 * 0.5) ||
                     (*(float *)((long)param_3 + 0x554) != 0.0)) {
                    *(float *)(param_3 + 0xaa) = fVar12 * 0.5;
                    plVar2 = param_3;
                    goto LAB_100082688;
                  }
                }
                else {
                  plVar2 = (long *)((long)param_3 + lVar5);
                  fVar9 = *(float *)(plVar2 + -0x52);
                  fVar10 = (float)(**(code **)(plVar2[-0x5a] + 0x50))();
                  fVar11 = (float)(**(code **)(plVar2[0xa2] + 0x50))(lVar1);
                  fVar9 = ABS(fVar9) + (fVar7 + fVar12 * -6.0) / fVar8 + (fVar11 + fVar10) * 0.5;
                  if ((*(float *)(plVar2 + 0xaa) != fVar9) ||
                     (*(float *)((long)plVar2 + 0x554) != 0.0)) {
                    *(float *)(plVar2 + 0xaa) = fVar9;
LAB_100082688:
                    *(undefined4 *)((long)plVar2 + 0x554) = 0;
                    FUN_1000200a0(lVar1);
                  }
                }
                uVar6 = uVar6 + 1;
                lVar5 = lVar5 + 0x7e0;
              } while (uVar6 < *(uint *)(param_3 + 0x6e4));
            }
            param_3 = param_3 + 0xa2;
            lVar5 = 6;
            do {
              FUN_10064e48c(param_3,&local_88);
              FUN_100083e1c(param_3);
              param_3 = param_3 + 0xfc;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
        }
        else {
          param_3[0x2b] = 0;
          *(undefined4 *)(param_3 + 0x2c) = DAT_101dc0b88;
        }
      }
    }
    else {
      param_3[0x29] = 0;
      *(undefined4 *)(param_3 + 0x2a) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100082728(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float local_98;
  float fStack_94;
  
  if (param_3[0x29] != 0) {
    if ((int)param_3[0x2a] == *(int *)(param_3[0x29] + 8)) {
      plVar6 = (long *)param_3[0x2b];
      if (plVar6 != (long *)0x0) {
        if ((int)param_3[0x2c] == (int)plVar6[1]) {
          lVar7 = (**(code **)(*plVar6 + 0x10))();
          if (lVar7 != 0) {
            (**(code **)(*param_3 + 0x50))(param_3);
            plVar6 = param_3 + 0x46;
            fVar10 = param_2;
            uVar13 = (**(code **)(*param_3 + 0x48))(param_3);
            (**(code **)(*param_3 + 0x48))(param_3);
            FUN_10064e47c(uVar13,plVar6);
            (**(code **)(*param_3 + 0x48))(param_3);
            fVar10 = (fVar10 + param_2 * 0.05) * -0.5;
            fVar14 = *(float *)(param_3 + 0x4e);
            bVar5 = false;
            if ((fVar14 == param_2 * 0.025) &&
               (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x274)) && !NAN(fVar10))) {
              bVar5 = *(float *)((long)param_3 + 0x274) == fVar10;
            }
            if (!bVar5) {
              *(float *)(param_3 + 0x4e) = param_2 * 0.025;
              *(float *)((long)param_3 + 0x274) = fVar10;
              FUN_1000200a0(plVar6);
            }
            plVar1 = param_3 + 0x5d;
            plVar2 = param_3 + 0x74;
            uVar13 = FUN_10064259c(plVar6);
            FUN_10064259c(plVar6);
            fVar14 = fVar14 * 0.5;
            FUN_10064e47c(uVar13,plVar2);
            uVar13 = FUN_10064259c(plVar6);
            FUN_10064259c(plVar6);
            fVar14 = fVar14 * 0.5;
            FUN_10064e47c(uVar13,plVar1);
            fVar10 = (float)FUN_10064259c(plVar6);
            FUN_10064259c(plVar6);
            fVar14 = fVar14 * 0.5;
            FUN_10064e47c(fVar10 * 0.95,plVar1);
            fVar10 = (float)FUN_10064259c(plVar6);
            fVar11 = (float)(**(code **)(param_3[0x5d] + 0x50))(plVar1);
            fVar16 = *(float *)((long)param_3 + 0x274);
            (**(code **)(param_3[0x5d] + 0x50))(plVar1);
            fVar16 = fVar16 + fVar14 * 0.5;
            fVar14 = *(float *)(param_3 + 0x65);
            if ((fVar14 != fVar10 - fVar11) ||
               (fVar14 = *(float *)((long)param_3 + 0x32c), fVar14 != fVar16)) {
              *(float *)(param_3 + 0x65) = fVar10 - fVar11;
              *(float *)((long)param_3 + 0x32c) = fVar16;
              FUN_1000200a0(plVar1);
            }
            plVar3 = param_3 + 0x74;
            fVar10 = (float)FUN_10064259c(plVar6);
            FUN_10064259c(plVar6);
            fVar14 = fVar14 * 0.5;
            FUN_10064e47c(fVar10 * 0.95,plVar3);
            fVar10 = (float)FUN_10064259c(plVar6);
            fVar11 = (float)(**(code **)(param_3[0x74] + 0x50))(plVar3);
            fVar16 = *(float *)((long)param_3 + 0x274);
            (**(code **)(param_3[0x74] + 0x50))(plVar3);
            fVar16 = fVar16 - fVar14 * 0.5;
            fVar14 = *(float *)(param_3 + 0x7c);
            if ((fVar14 != fVar10 - fVar11) ||
               (fVar14 = *(float *)((long)param_3 + 0x3e4), fVar14 != fVar16)) {
              *(float *)(param_3 + 0x7c) = fVar10 - fVar11;
              *(float *)((long)param_3 + 0x3e4) = fVar16;
              FUN_1000200a0(plVar3);
            }
            (**(code **)(param_3[0x74] + 0x50))(plVar2);
            fVar10 = (float)(**(code **)(param_3[0x74] + 0x50))(plVar2);
            fVar14 = fVar14 * 0.33333334;
            fVar10 = fVar14 * fVar10;
            (**(code **)(param_3[0x74] + 0x50))(plVar2);
            uVar15 = NEON_fminnm(fVar14,SQRT(fVar10));
            fVar10 = (float)(**(code **)(param_3[0x74] + 0x50))(plVar2);
            fVar14 = (float)NEON_fminnm(fVar10 * 0.33333334,uVar15);
            local_98 = fVar14;
            fStack_94 = fVar14;
            fVar10 = (float)(**(code **)(param_3[0x74] + 0x50))(plVar2);
            if ((int)param_3[0x6e4] != 0) {
              lVar7 = 0;
              uVar9 = 0;
              fVar10 = (fVar10 + fVar14 * -3.0) * 0.5;
              fVar14 = fVar14 * 0.5;
              do {
                plVar6 = plVar2;
                if (2 < uVar9) {
                  plVar6 = plVar1;
                }
                lVar4 = (long)param_3 + lVar7 + 0x510;
                if (*(long *)((long)param_3 + lVar7 + 0x530) != 0) {
                  FUN_1006423ec(lVar4,1);
                }
                (**(code **)(*plVar6 + 0x78))(plVar6,lVar4,1);
                if (uVar9 < 3) {
                  if (lVar7 == 0) {
                    if ((*(float *)(param_3 + 0xaa) != fVar14) ||
                       (*(float *)((long)param_3 + 0x554) != 0.0)) {
                      *(float *)(param_3 + 0xaa) = fVar14;
                      puVar8 = (undefined4 *)((long)param_3 + 0x554);
                      goto LAB_100082ba8;
                    }
                  }
                  else {
                    fVar11 = *(float *)((long)param_3 + lVar7 + -0x290);
                    fVar16 = (float)(**(code **)(*(long *)((long)param_3 + lVar7 + -0x2d0) + 0x50))
                                              ();
                    fVar12 = (float)(**(code **)(*(long *)((long)param_3 + lVar7 + 0x510) + 0x50))
                                              (lVar4);
                    fVar11 = ABS(fVar11) + fVar10 + (fVar12 + fVar16) * 0.5;
                    if ((*(float *)((long)param_3 + lVar7 + 0x550) != fVar11) ||
                       (*(float *)((long)param_3 + lVar7 + 0x554) != 0.0)) {
                      plVar6 = param_3 + uVar9 * 0xfc;
LAB_100082b80:
                      *(float *)((long)param_3 + lVar7 + 0x550) = fVar11;
                      puVar8 = (undefined4 *)((long)plVar6 + 0x554);
LAB_100082ba8:
                      *puVar8 = 0;
                      FUN_1000200a0(lVar4);
                    }
                  }
                }
                else if (uVar9 == 3) {
                  if ((*(float *)(param_3 + 0x39e) != fVar14) ||
                     (*(float *)((long)param_3 + 0x1cf4) != 0.0)) {
                    *(float *)(param_3 + 0x39e) = fVar14;
                    puVar8 = (undefined4 *)((long)param_3 + 0x1cf4);
                    goto LAB_100082ba8;
                  }
                }
                else {
                  plVar6 = (long *)((long)param_3 + lVar7);
                  fVar11 = *(float *)(plVar6 + -0x52);
                  fVar16 = (float)(**(code **)(plVar6[-0x5a] + 0x50))();
                  fVar12 = (float)(**(code **)(plVar6[0xa2] + 0x50))(lVar4);
                  fVar11 = ABS(fVar11) + fVar10 + (fVar12 + fVar16) * 0.5;
                  if ((*(float *)(plVar6 + 0xaa) != fVar11) ||
                     (*(float *)((long)plVar6 + 0x554) != 0.0)) goto LAB_100082b80;
                }
                uVar9 = uVar9 + 1;
                lVar7 = lVar7 + 0x7e0;
              } while (uVar9 < *(uint *)(param_3 + 0x6e4));
            }
            param_3 = param_3 + 0xa2;
            lVar7 = 6;
            do {
              FUN_10064e48c(param_3,&local_98);
              FUN_100083e1c(param_3);
              param_3 = param_3 + 0xfc;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
        }
        else {
          param_3[0x2b] = 0;
          *(undefined4 *)(param_3 + 0x2c) = DAT_101dc0b88;
        }
      }
    }
    else {
      param_3[0x29] = 0;
      *(undefined4 *)(param_3 + 0x2a) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100082c4c(long param_1)

{
  FUN_100269e20(param_1 + 0x168);
  return;
}




void FUN_100082c54(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  param_1 = param_1 + 0x510;
  lVar2 = 6;
  do {
    iVar1 = FUN_100084600(param_1);
    if (iVar1 == param_2) {
      FUN_100084698(param_1);
    }
    param_1 = param_1 + 0x7e0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}




void FUN_100082ca4(long param_1,uint param_2)

{
  FUN_1000846a8(param_1 + (ulong)param_2 * 0x7e0 + 0x510);
  return;
}




int FUN_100082cb4(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  uVar6 = 0;
  do {
    plVar2 = *(long **)(param_1 + 0x158);
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0x160) == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 0x160) = DAT_101dc0b88;
      }
    }
    uVar1 = FUN_1003e1b24(uVar3);
    if (uVar1 <= uVar6) {
      return iVar5;
    }
    plVar2 = *(long **)(param_1 + 0x158);
    if (plVar2 == (long *)0x0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else if (*(int *)(param_1 + 0x160) == (int)plVar2[1]) {
      uVar4 = (**(code **)(*plVar2 + 0x10))();
      plVar2 = *(long **)(param_1 + 0x158);
      uVar3 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x160) != (int)plVar2[1]) goto LAB_100082d7c;
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
    }
    else {
      uVar4 = 0;
LAB_100082d7c:
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x160) = DAT_101dc0b88;
    }
    uVar3 = FUN_10044d868(uVar3,uVar6);
    FUN_10044d88c(uVar4,uVar3);
    uVar1 = FUN_1000bda94();
    iVar5 = iVar5 + (uVar1 ^ 1);
    uVar6 = uVar6 + 1;
  } while( true );
}




void FUN_100082dcc(long param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  void *local_f8 [2];
  char local_e1;
  undefined4 local_dc;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  plVar5 = *(long **)(param_1 + 0x158);
  local_dc = param_3;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x160) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if (lVar6 != 0 && (uint)param_2 < 6) {
        lVar9 = param_1 + (param_2 & 0xffffffff) * 0x7e0;
        lVar6 = lVar9 + 0x510;
        FUN_100083858(lVar6);
        uVar10 = param_2;
        FUN_10006d330(auStack_d8,"inventory_slot_%u");
        uVar2 = FUN_1004d2524(auStack_d8);
        uVar3 = FUN_100015208(auStack_d8,uVar2,0x1234);
        *(uint *)(lVar9 + 0x594) =
             *(uint *)(lVar9 + 0x594) & 0x80000000 |
             *(uint *)(lVar9 + 0x594) & 0x7fff | (uVar3 & 0xffff) << 0xf;
        plVar5 = *(long **)(param_1 + 0x148);
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x150) == (int)plVar5[1]) {
            lVar7 = (**(code **)(*plVar5 + 0x10))();
            if (lVar7 != 0) {
              FUN_100083680(lVar6,lVar7,param_2 & 0xffffffff,&local_dc,param_4,
                            *(char *)(param_1 + 0x3728),param_5,param_8,uVar10);
              uVar8 = FUN_1004901b4(param_1 + 0x148);
              iVar4 = FUN_10046e42c(uVar8,local_dc);
              if (iVar4 != 0) {
                FUN_100084610(lVar6,(uint)param_2 + 6);
              }
              ppuVar1 = &PTR_s_build___Fonts_Futura_Medium_64_S_10184e2c8;
              if (*(char *)(param_1 + 0x3728) != '\0') {
                ppuVar1 = &PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8;
              }
              FUN_10001549c(local_f8,*ppuVar1);
              FUN_100084768(lVar6,local_f8);
              if (local_e1 < '\0') {
                operator_delete(local_f8[0]);
              }
              FUN_100083968(lVar6);
              *(uint *)(lVar9 + 0x594) = *(uint *)(lVar9 + 0x594) | 4;
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x148) = 0;
            *(undefined4 *)(param_1 + 0x150) = DAT_101dc0b88;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x160) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




long * FUN_100082fc0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 uVar11;
  uint uVar12;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_100083570_10144ea30;
  puVar7[0x17] = 0;
  puVar7 = puVar7 + 0x18;
  FUN_10064e264(puVar7);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  FUN_1006533a4(plVar3);
  plVar4 = param_1 + 0x8b;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xa9;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0xcf;
  thunk_FUN_100650e64(plVar6);
  param_1[0xf5] = 0;
  FUN_1004e3004(param_1 + 0xf6);
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = DAT_101dc0b88;
  *(undefined1 *)(param_1 + 0xfa) = DAT_101d239f1;
  *(undefined4 *)((long)param_1 + 0x7d4) = 0xffffffff;
  *(byte *)(param_1 + 0xfb) = *(byte *)(param_1 + 0xfb) & 0xfc;
  uVar8 = FUN_10034cb58();
  if ((uVar8 & 1) == 0) {
    pvVar9 = operator_new(0x30);
    pvVar10 = operator_new(0x198);
    thunk_FUN_1000cd4e0();
    thunk_FUN_1000bf560(pvVar9,pvVar10);
    param_1[0x17] = (long)pvVar9;
  }
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(puVar7,plVar3,1);
  FUN_100642bd8(puVar7,plVar4,1);
  FUN_100642bd8(puVar7,plVar2,1);
  FUN_100642bd8(puVar7,plVar5,1);
  FUN_100642bd8(puVar7,plVar6,1);
  if (param_1[0x17] != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x17] + 8),1);
    uVar11 = FUN_1000cd87c(*(undefined8 *)(param_1[0x17] + 8));
    (**(code **)(*param_1 + 0x78))(param_1,uVar11,1);
    FUN_1000cd87c(*(undefined8 *)(param_1[0x17] + 8));
    uVar11 = FUN_1000d0360();
    (**(code **)(*param_1 + 0x78))(param_1,uVar11,1);
    FUN_1000cd87c(*(undefined8 *)(param_1[0x17] + 8));
    uVar11 = FUN_1000d0368();
    (**(code **)(*param_1 + 0x78))(param_1,uVar11,1);
  }
  local_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a0);
  FUN_100652ca4(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652ca4(plVar3,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100653464(plVar3,FUN_1000834bc,param_1 + 0xf7);
  FUN_100652cdc(plVar3,"icon_item_empty");
  if ((*(float *)(param_1 + 0x75) != 0.5) || (*(float *)((long)param_1 + 0x3ac) != 0.5)) {
    param_1[0x75] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  uVar12 = *(uint *)((long)param_1 + 0x3dc);
  if ((uVar12 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3dc) = uVar12 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
    uVar12 = *(uint *)((long)param_1 + 0x3dc);
  }
  *(uint *)((long)param_1 + 0x3dc) = uVar12 & 0xfffffffb;
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(float *)(param_1 + 0x95) != 0.5) || (*(float *)((long)param_1 + 0x4ac) != 0.5)) {
    param_1[0x95] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_store_inventory_tray");
  if ((*(float *)(param_1 + 0x57) != 0.5) || (*(float *)((long)param_1 + 700) != 0.5)) {
    param_1[0x57] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0xb3) != 0.5) || (*(float *)((long)param_1 + 0x59c) != 0.5)) {
    param_1[0xb3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  *(uint *)((long)param_1 + 0x5cc) = *(uint *)((long)param_1 + 0x5cc) | 4;
  FUN_100651700(plVar5,0);
  FUN_1006513c0(plVar5,&DAT_101d91650);
  uVar12 = *(uint *)((long)param_1 + 0x5cc);
  if ((uVar12 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5cc) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_100651700(plVar6,0);
  if ((*(float *)(param_1 + 0xd9) != 0.5) || (*(float *)((long)param_1 + 0x6cc) != 0.5)) {
    param_1[0xd9] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar6);
  }
  FUN_1006516bc(plVar6,&DAT_101d22fe8);
  FUN_10065165c(plVar6,1);
  local_78 = DAT_101dbd494;
  local_a0 = thunk_FUN_1000846b0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  local_78 = DAT_101dbd498;
  local_a0 = thunk_FUN_100084718;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  return param_1;
}




void FUN_1000834bc(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"icon_item_empty");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void thunk_FUN_1000846b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  
  lVar1 = FUN_1004901b4(param_1 + 0x7c0);
  if (lVar1 != 0) {
    uVar2 = FUN_10044d88c(lVar1,*(undefined4 *)(param_1 + 0x7d4));
    uVar3 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP");
    FUN_100644aec(auStack_40,uVar3,uVar2);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void thunk_FUN_100084718(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * thunk_FUN_100082fc0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 uVar11;
  uint uVar12;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_100083570_10144ea30;
  puVar7[0x17] = 0;
  puVar7 = puVar7 + 0x18;
  FUN_10064e264(puVar7);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x6b;
  FUN_1006533a4(plVar3);
  plVar4 = param_1 + 0x8b;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xa9;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0xcf;
  thunk_FUN_100650e64(plVar6);
  param_1[0xf5] = 0;
  FUN_1004e3004(param_1 + 0xf6);
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = DAT_101dc0b88;
  *(undefined1 *)(param_1 + 0xfa) = DAT_101d239f1;
  *(undefined4 *)((long)param_1 + 0x7d4) = 0xffffffff;
  *(byte *)(param_1 + 0xfb) = *(byte *)(param_1 + 0xfb) & 0xfc;
  uVar8 = FUN_10034cb58();
  if ((uVar8 & 1) == 0) {
    pvVar9 = operator_new(0x30);
    pvVar10 = operator_new(0x198);
    thunk_FUN_1000cd4e0();
    thunk_FUN_1000bf560(pvVar9,pvVar10);
    param_1[0x17] = (long)pvVar9;
  }
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(puVar7,plVar3,1);
  FUN_100642bd8(puVar7,plVar4,1);
  FUN_100642bd8(puVar7,plVar2,1);
  FUN_100642bd8(puVar7,plVar5,1);
  FUN_100642bd8(puVar7,plVar6,1);
  if (param_1[0x17] != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x17] + 8),1);
    uVar11 = FUN_1000cd87c(*(undefined8 *)(param_1[0x17] + 8));
    (**(code **)(*param_1 + 0x78))(param_1,uVar11,1);
    FUN_1000cd87c(*(undefined8 *)(param_1[0x17] + 8));
    uVar11 = FUN_1000d0360();
    (**(code **)(*param_1 + 0x78))(param_1,uVar11,1);
    FUN_1000cd87c(*(undefined8 *)(param_1[0x17] + 8));
    uVar11 = FUN_1000d0368();
    (**(code **)(*param_1 + 0x78))(param_1,uVar11,1);
  }
  pcStack_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&pcStack_a0);
  FUN_100652ca4(plVar1,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652ca4(plVar3,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
  FUN_100653464(plVar3,FUN_1000834bc,param_1 + 0xf7);
  FUN_100652cdc(plVar3,"icon_item_empty");
  if ((*(float *)(param_1 + 0x75) != 0.5) || (*(float *)((long)param_1 + 0x3ac) != 0.5)) {
    param_1[0x75] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  uVar12 = *(uint *)((long)param_1 + 0x3dc);
  if ((uVar12 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3dc) = uVar12 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
    uVar12 = *(uint *)((long)param_1 + 0x3dc);
  }
  *(uint *)((long)param_1 + 0x3dc) = uVar12 & 0xfffffffb;
  FUN_100652ca4(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(float *)(param_1 + 0x95) != 0.5) || (*(float *)((long)param_1 + 0x4ac) != 0.5)) {
    param_1[0x95] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x4dc) = *(uint *)((long)param_1 + 0x4dc) & 0xfffffffb;
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_store_inventory_tray");
  if ((*(float *)(param_1 + 0x57) != 0.5) || (*(float *)((long)param_1 + 700) != 0.5)) {
    param_1[0x57] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0xb3) != 0.5) || (*(float *)((long)param_1 + 0x59c) != 0.5)) {
    param_1[0xb3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  *(uint *)((long)param_1 + 0x5cc) = *(uint *)((long)param_1 + 0x5cc) | 4;
  FUN_100651700(plVar5,0);
  FUN_1006513c0(plVar5,&DAT_101d91650);
  uVar12 = *(uint *)((long)param_1 + 0x5cc);
  if ((uVar12 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5cc) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_100651700(plVar6,0);
  if ((*(float *)(param_1 + 0xd9) != 0.5) || (*(float *)((long)param_1 + 0x6cc) != 0.5)) {
    param_1[0xd9] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar6);
  }
  FUN_1006516bc(plVar6,&DAT_101d22fe8);
  FUN_10065165c(plVar6,1);
  uStack_78 = DAT_101dbd494;
  pcStack_a0 = thunk_FUN_1000846b0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  uStack_78 = DAT_101dbd498;
  pcStack_a0 = thunk_FUN_100084718;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  return param_1;
}




void FUN_100083570(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100083570_10144ea30;
  if ((long *)param_1[0xf5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf5] + 8))();
    param_1[0xf5] = 0;
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x48))();
  }
  thunk_FUN_100651068(param_1 + 0xcf);
  thunk_FUN_100651068(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_1014a7108;
  param_1[0xa2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa5);
  FUN_10064e2bc(param_1 + 0x8b);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100083570(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100083570_10144ea30;
  if ((long *)param_1[0xf5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf5] + 8))();
    param_1[0xf5] = 0;
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x48))();
  }
  thunk_FUN_100651068(param_1 + 0xcf);
  thunk_FUN_100651068(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_1014a7108;
  param_1[0xa2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa5);
  FUN_10064e2bc(param_1 + 0x8b);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  thunk_FUN_10064e2bc(param_1 + 0x18);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10008366c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100083570();
  operator_delete(pvVar1);
  return;
}




void FUN_100083680(long param_1,long param_2,undefined1 param_3,undefined4 *param_4,long param_5,
                  uint param_6,byte param_7)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  undefined8 uVar6;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar3 = FUN_10048c8e4(param_2);
  if (lVar3 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x7c0) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x7c8) = uVar1;
  *(undefined1 *)(param_1 + 2000) = param_3;
  *(undefined4 *)(param_1 + 0x7d4) = *param_4;
  bVar5 = 2;
  if (param_6 == 0) {
    bVar5 = 0;
  }
  *(byte *)(param_1 + 0x7d8) = *(byte *)(param_1 + 0x7d8) & 0xfd | bVar5;
  lVar3 = FUN_10044d88c(lVar3,*param_4);
  if ((*(byte *)(param_1 + 0x7d8) >> 1 & 1) == 0) {
    FUN_100651038(param_1 + 0x678,PTR_s_build___Fonts_Futura_Medium_40_S_10184e2c0);
    bVar2 = false;
    if ((*(float *)(param_1 + 0x588) == -2.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x58c))))
    {
      bVar2 = *(float *)(param_1 + 0x58c) == 4.0;
    }
    if (bVar2) goto LAB_100083794;
    uVar6 = 0x40800000c0000000;
  }
  else {
    FUN_100651038(param_1 + 0x678,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
    bVar2 = false;
    if ((*(float *)(param_1 + 0x588) == -1.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x58c))))
    {
      bVar2 = *(float *)(param_1 + 0x58c) == 2.0;
    }
    if (bVar2) goto LAB_100083794;
    uVar6 = 0x40000000bf800000;
  }
  *(undefined8 *)(param_1 + 0x588) = uVar6;
  FUN_1000200a0(param_1 + 0x548);
LAB_100083794:
  if (param_5 == 0) {
    param_5 = *(long *)(lVar3 + 8);
  }
  FUN_100652cdc(param_1 + 0x178,param_5);
  if ((param_6 & 1) == 0) {
    local_58 = DAT_101dbd458;
    local_80 = FUN_100083850;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_1;
    FUN_10001554c(param_1 + 8,&local_80);
    local_58 = DAT_101dbd484;
    local_80 = FUN_100083850;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_1;
    FUN_10001554c(param_1 + 8,&local_80);
    uVar4 = *(uint *)(param_1 + 0x84) | 0x10;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x84) & 0xffffffef;
  }
  *(uint *)(param_1 + 0x84) = uVar4;
  *(byte *)(param_1 + 0x7d8) = *(byte *)(param_1 + 0x7d8) & 0xfe | param_7;
  return;
}




void FUN_100083850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100084124(param_1,param_4);
  return;
}




void FUN_100083858(long param_1)

{
  FUN_100083914(param_1,DAT_101dbd458,FUN_100083850,param_1);
  FUN_100083914(param_1,DAT_101dbd484,FUN_100083850,param_1);
  *(undefined1 *)(param_1 + 2000) = DAT_101d239f1;
  *(undefined4 *)(param_1 + 0x7d4) = 0xffffffff;
  *(byte *)(param_1 + 0x7d8) = *(byte *)(param_1 + 0x7d8) & 0xfe;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffeb;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1006423ec(param_1,1);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_1000bf9ac();
    return;
  }
  return;
}




void FUN_100083914(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_100083968(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  float fVar10;
  undefined8 uVar11;
  uint local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  
  lVar4 = FUN_1004901b4((long *)(param_1 + 0x7c0));
  if (lVar4 == 0) {
    return;
  }
  iVar2 = FUN_1003d77ec(lVar4,*(undefined4 *)(param_1 + 0x7d4));
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_10046e45c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
  if (iVar2 == 0) {
    uVar5 = 0;
LAB_1000839d4:
    iVar2 = FUN_10046e45c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if (iVar2 != 0) goto LAB_1000839e4;
    uVar3 = FUN_10046e2b4(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if (1 < uVar3) {
      *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) | 4;
      uVar5 = FUN_10046e2b4(lVar4,*(undefined4 *)(param_1 + 0x7d4));
      goto LAB_100083a30;
    }
    *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) & 0xfffffffb;
  }
  else {
    uVar5 = FUN_10046e308(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if ((int)uVar5 < 2) goto LAB_1000839d4;
LAB_1000839e4:
    *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) | 4;
LAB_100083a30:
    FUN_100083d20(param_1,uVar5);
  }
  iVar2 = FUN_10046e42c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
  if (iVar2 == 0) {
    lVar6 = FUN_10044d88c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    uVar7 = FUN_1004d2538(*(undefined8 *)(lVar6 + 400));
    if ((uVar7 & 1) != 0) {
      uVar3 = *(uint *)(param_1 + 0x84);
      if ((uVar3 & 0x7f80) != 0x6600) {
        *(uint *)(param_1 + 0x84) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
        FUN_1000200a0(param_1);
      }
      FUN_100652cdc(param_1 + 0x268,"hud_store_inventory_tray");
      *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) | 4;
      *(undefined4 *)(param_1 + 0x7b8) = 0x3f800000;
      FUN_100652e14(0x3f800000,param_1 + 0x178);
      FUN_1006513c0(param_1 + 0x548,&DAT_101d91650);
      *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
      return;
    }
    plVar8 = *(long **)(param_1 + 0x7c0);
    if (plVar8 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_1 + 0x7c8) == (int)plVar8[1]) {
      uVar5 = (**(code **)(*plVar8 + 0x10))();
    }
    else {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x7c0) = 0;
      *(undefined4 *)(param_1 + 0x7c8) = DAT_101dc0b88;
    }
    lVar4 = FUN_10044d88c(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    pcVar9 = *(char **)(lVar4 + 400);
    if (pcVar9 == (char *)0x0) {
      local_50[0] = 0;
    }
    else {
      local_50[0] = 0x811c9dc5;
      cVar1 = *pcVar9;
      while (cVar1 != '\0') {
        pcVar9 = pcVar9 + 1;
        local_50[0] = (local_50[0] ^ (int)cVar1) * 0x1000193;
        cVar1 = *pcVar9;
      }
    }
    uVar5 = FUN_1003dc44c(uVar5,local_50);
    fVar10 = (float)FUN_10045f1bc();
    if (0.0 < fVar10) {
      uVar11 = FUN_10043eeb4(uVar5);
      uVar5 = FUN_10045f1bc(uVar5);
LAB_100083cf8:
      FUN_100083d7c(uVar11,uVar5,param_1);
      return;
    }
    *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
    uVar3 = *(uint *)(param_1 + 0x3dc) & 0xfffffffb;
LAB_100083cd4:
    *(uint *)(param_1 + 0x3dc) = uVar3;
  }
  else {
    if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
      FUN_1000200a0(param_1);
    }
    iVar2 = FUN_10034cb58();
    pcVar9 = "hud_store_inventory_tray";
    if (iVar2 == 0) {
      pcVar9 = "hud_store_inventory_regular";
    }
    FUN_100652cdc(param_1 + 0x268,pcVar9);
    lVar6 = param_1 + 0x178;
    FUN_100652e14(0x3f800000,lVar6);
    local_44 = 0xffffffff;
    FUN_100652dd4(lVar6,&local_44,2);
    *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
    *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) & 0xfffffffb;
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) & 0xfffffffb;
    uVar3 = FUN_10046e740(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    if ((uVar3 >> 7 & 1) == 0) {
      if ((uVar3 >> 8 & 1) == 0) {
        if ((uVar3 >> 2 & 1) != 0) {
          uVar11 = FUN_10043da00(lVar4,*(undefined4 *)(param_1 + 0x7d4));
          uVar5 = FUN_10046e5cc(lVar4,*(undefined4 *)(param_1 + 0x7d4));
          goto LAB_100083cf8;
        }
        if (uVar3 == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x7b8) = 0;
        uVar3 = *(uint *)(param_1 + 0x3dc) | 4;
        goto LAB_100083cd4;
      }
      pcVar9 = "ability_silenced_badge";
    }
    else {
      pcVar9 = "ability_stunned_badge";
    }
    local_48 = 0xff404040;
    FUN_100652dd4(lVar6,&local_48,2);
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
    FUN_100652cdc(param_1 + 0x458,pcVar9);
  }
  return;
}




void FUN_100083d20(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x678,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_100083d7c(float param_1,float param_2,long param_3)

{
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  FUN_1006513c0(param_3 + 0x548,auStack_40);
  *(uint *)(param_3 + 0x5cc) = *(uint *)(param_3 + 0x5cc) | 4;
  *(float *)(param_3 + 0x7b8) = 1.0 - param_1 / param_2;
  *(uint *)(param_3 + 0x3dc) = *(uint *)(param_3 + 0x3dc) | 4;
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100083e1c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58;
  float fStack_54;
  
  if (param_3[4] == 0) {
    return;
  }
  plVar1 = param_3 + 0x18;
  local_58 = (float)(**(code **)(*param_3 + 0x48))();
  local_58 = local_58 * 0.95;
  param_2 = param_2 * 0.95;
  fStack_54 = param_2;
  FUN_10064e48c(plVar1,&local_58);
  plVar2 = param_3 + 0x2f;
  fVar6 = (float)FUN_10064e3cc(plVar1);
  fVar8 = param_2;
  fVar7 = (float)FUN_100652e60(plVar2);
  param_2 = param_2 / fVar8;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x38) == fVar6 / fVar7) &&
     (bVar3 = false, !NAN(*(float *)((long)param_3 + 0x1c4)) && !NAN(param_2))) {
    bVar3 = *(float *)((long)param_3 + 0x1c4) == param_2;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x38) = fVar6 / fVar7;
    *(float *)((long)param_3 + 0x1c4) = param_2;
    FUN_1000200a0(plVar2);
  }
  fVar6 = (float)FUN_10064e3cc(plVar1);
  fVar8 = param_2;
  fVar7 = (float)FUN_100652e60(param_3 + 0x6b);
  param_2 = param_2 / fVar8;
  if ((*(float *)(param_3 + 0x74) != fVar6 / fVar7) ||
     (*(float *)((long)param_3 + 0x3a4) != param_2)) {
    *(float *)(param_3 + 0x74) = fVar6 / fVar7;
    *(float *)((long)param_3 + 0x3a4) = param_2;
    FUN_1000200a0(param_3 + 0x6b);
  }
  fVar8 = (float)FUN_10064e3cc(plVar1);
  fVar7 = param_2 * 0.9;
  fVar6 = (float)FUN_100652e60(param_3 + 0x8b);
  fVar6 = (fVar8 * 0.9) / fVar6;
  fVar7 = fVar7 / param_2;
  if ((*(float *)(param_3 + 0x94) != fVar6) || (*(float *)((long)param_3 + 0x4a4) != fVar7)) {
    *(float *)(param_3 + 0x94) = fVar6;
    *(float *)((long)param_3 + 0x4a4) = fVar7;
    FUN_1000200a0(param_3 + 0x8b);
  }
  uVar5 = FUN_10034cb58();
  if ((uVar5 & 1) == 0) {
    fVar8 = *(float *)(&DAT_10114bbe0 + (ulong)((*(byte *)(param_3 + 0xfb) & 1) == 0) * 4);
    fVar6 = *(float *)(param_3 + 0xb2);
    if ((fVar6 == fVar8) && (fVar6 = *(float *)((long)param_3 + 0x594), fVar6 == fVar8))
    goto LAB_100083fcc;
    *(float *)(param_3 + 0xb2) = fVar8;
    *(float *)((long)param_3 + 0x594) = fVar8;
  }
  else {
    fVar6 = *(float *)(param_3 + 0xb2);
    if ((fVar6 == 0.5) && (fVar6 = *(float *)((long)param_3 + 0x594), fVar6 == 0.5))
    goto LAB_100083fcc;
    param_3[0xb2] = (long)&DAT_3f0000003f000000;
  }
  FUN_1000200a0(param_3 + 0xa9);
LAB_100083fcc:
  fVar7 = (float)FUN_10065317c(plVar2);
  fVar8 = fVar6;
  fVar9 = (float)FUN_100652e60(param_3 + 0x4d);
  fVar6 = fVar6 / fVar8;
  if ((*(float *)(param_3 + 0x56) != fVar7 / fVar9) || (*(float *)((long)param_3 + 0x2b4) != fVar6))
  {
    *(float *)(param_3 + 0x56) = fVar7 / fVar9;
    *(float *)((long)param_3 + 0x2b4) = fVar6;
    FUN_1000200a0(param_3 + 0x4d);
  }
  plVar2 = param_3 + 0xcf;
  fVar7 = (float)FUN_10064e3cc(plVar1);
  fVar8 = 0.5;
  if ((*(byte *)(param_3 + 0xfb) & 2) != 0) {
    fVar8 = 0.65;
  }
  fVar9 = (float)FUN_1006511d0(plVar2);
  fVar7 = fVar8 * fVar7 - fVar9 * 0.5;
  FUN_10064259c(plVar1);
  fVar8 = 0.5;
  if ((*(byte *)(param_3 + 0xfb) & 2) != 0) {
    fVar8 = 0.65;
  }
  fVar9 = fVar6;
  FUN_1006511d0(plVar2);
  fVar8 = fVar9 * -0.25 + fVar6 * fVar8;
  if ((*(float *)(param_3 + 0xd7) != fVar7) || (*(float *)((long)param_3 + 0x6bc) != fVar8)) {
    *(float *)(param_3 + 0xd7) = fVar7;
    *(float *)((long)param_3 + 0x6bc) = fVar8;
    FUN_1000200a0(plVar2);
  }
  if (((*(byte *)(param_3 + 0xfb) >> 1 & 1) != 0) &&
     ((*(float *)(param_3 + 0xd8) != 0.7 || (*(float *)((long)param_3 + 0x6c4) != 0.7)))) {
    param_3[0xd8] = 0x3f3333333f333333;
    FUN_1000200a0(plVar2);
  }
  if ((param_3[0xf5] != 0) && (iVar4 = FUN_100642d08(), iVar4 != 0)) {
    FUN_10064e68c(0,0,param_3[0xf5],6);
  }
  return;
}




void FUN_100084124(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_70;
  long local_68;
  long lStack_60;
  undefined1 local_58;
  long local_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  lVar2 = FUN_1004901b4(param_1 + 0x7c0);
  if (((lVar2 != 0) && (iVar1 = FUN_10046e42c(lVar2,*(undefined4 *)(param_1 + 0x7d4)), iVar1 != 0))
     && ((uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8), (uVar3 & 1) != 0 ||
         (DAT_101dbd4d8 == DAT_101dbd450)))) {
    lStack_60 = param_2[2];
    local_68 = param_2[1];
    local_58 = (undefined1)param_2[3];
    local_70 = &PTR_FUN_10144eb78;
    local_50 = param_2[4];
    uStack_48 = (undefined2)param_2[5];
    uStack_3e = *(undefined8 *)((long)param_2 + 0x32);
    uStack_46 = (undefined6)*(undefined8 *)((long)param_2 + 0x2a);
    uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x2a) >> 0x30);
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_1000cd910(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 8),&local_70);
    }
    iVar1 = FUN_100644ecc(param_2);
    if ((iVar1 == 0) || (uVar3 = FUN_100084204(param_1), (uVar3 & 1) == 0)) {
      FUN_1000843fc(param_1);
    }
  }
  return;
}




undefined8 FUN_100084204(long param_1)

{
  bool bVar1;
  bool bVar2;
  uint64_t uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auStack_80 [48];
  
  uVar3 = _mach_absolute_time();
  if (2.0 <= (double)((uVar3 - *(long *)(param_1 + 0x7b0)) * DAT_101d91638) * 1e-09) {
    lVar4 = FUN_100057f34();
    if (lVar4 != 0) {
      FUN_10005fe04();
      fVar12 = (float)FUN_100060518();
      if (0.0 < fVar12) {
        return 0;
      }
    }
    uVar5 = FUN_100491adc();
    uVar5 = FUN_100491f2c(uVar5,2);
    lVar4 = (**(code **)(**(long **)(param_1 + 0x7c0) + 0x10))();
    lVar4 = *(long *)(lVar4 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184e000))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    uVar13 = FUN_10043da00(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    fVar12 = (float)FUN_10046e5cc(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    uVar6 = FUN_10046e258(lVar4,*(undefined4 *)(param_1 + 0x7d4));
    bVar1 = true;
    bVar2 = false;
    if (10.0 <= fVar12) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN((float)uVar13)) {
        bVar1 = (float)uVar13 < 5.0;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      uVar7 = FUN_10034ee90();
      FUN_1000106d8(uVar13,auStack_80,uVar7,uVar5,0xffffffff,uVar6);
      FUN_100345498(auStack_80);
      lVar4 = FUN_1000bdb98();
      plVar8 = (long *)(lVar4 + 0x10);
      plVar9 = (long *)*plVar8;
      plVar10 = plVar8;
      if (plVar9 != (long *)0x0) {
        do {
          if (*(uint *)(plVar9 + 4) >= 0x2e4f13dd) {
            plVar10 = plVar9;
          }
          plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < 0x2e4f13dd];
        } while (plVar9 != (long *)0x0);
        if (((plVar10 != plVar8) && (*(uint *)(plVar10 + 4) < 0x2e4f13de)) && ((int)plVar10[5] != 0)
           ) {
          lVar4 = 0;
          uVar11 = 0;
          do {
            (*(code *)((undefined8 *)(plVar10[6] + lVar4))[1])(*(undefined8 *)(plVar10[6] + lVar4));
            uVar11 = uVar11 + 1;
            lVar4 = lVar4 + 0x10;
          } while (uVar11 < *(uint *)(plVar10 + 5));
        }
      }
      FUN_1004e3004(param_1 + 0x7b0);
      return 1;
    }
  }
  return 0;
}




void FUN_1000843fc(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **local_48 [2];
  undefined1 local_34;
  
  if ((*(int *)(param_1 + 0x7d4) != -1) &&
     (plVar2 = *(long **)(param_1 + 0x7c0), plVar2 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x7c8) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((((lVar3 != 0) && (lVar4 = FUN_100490234(), lVar4 != 0)) &&
          ((uVar6 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f, (int)uVar6 == 0x1f ||
           (1 < *(ushort *)(lVar3 + uVar6 * 0x38 + 0x90) - 3)))) &&
         ((iVar1 = FUN_1003d77ec(lVar4,*(undefined4 *)(param_1 + 0x7d4)), iVar1 != 0 &&
          (iVar1 = FUN_10046e6fc(lVar4,*(undefined4 *)(param_1 + 0x7d4)), iVar1 != 0)))) {
        uVar5 = FUN_100061db0();
        FUN_10005ee34(local_48,*(undefined1 *)(param_1 + 2000));
        local_48[0] = &PTR_FUN_10144d690;
        local_34 = 0;
        iVar1 = FUN_10005f394(uVar5,local_48);
        if (iVar1 != 0) {
          FUN_100084524(param_1);
        }
        FUN_1004e3004(param_1 + 0x7b0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7c0) = 0;
      *(undefined4 *)(param_1 + 0x7c8) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100084520(void)

{
  return;
}




void FUN_100084524(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    FUN_1006423ec(param_1,1);
    (**(code **)(*plVar3 + 0x78))(plVar3,param_1,1);
  }
  lVar1 = param_1 + 0xc0;
  FUN_100642324(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = FUN_10001f424();
  uVar4 = NEON_fmov(0x3fe00000,4);
  local_38 = CONCAT44((float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar4 >> 0x20),
                      (float)uVar5 * (float)uVar4);
  FUN_10064025c(uVar2,&local_38);
  FUN_10063f0e8(0x3c23d70a,uVar2);
  FUN_100642b14(lVar1,uVar2);
  uVar2 = FUN_10001f424();
  local_38 = uVar5;
  FUN_10064025c(uVar2,&local_38);
  FUN_10063f0e8(0x3e800000,uVar2);
  FUN_10063f130(uVar2,FUN_10006bf9c);
  FUN_100642b14(lVar1,uVar2);
  return;
}




undefined4 FUN_100084600(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7d4);
}




void FUN_100084608(long param_1)

{
  FUN_100642bc8(param_1 + 0xc0);
  return;
}




void FUN_100084610(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  
  uVar2 = FUN_10109c478();
  if ((((uVar2 & 1) != 0) || (iVar1 = FUN_10012709c(), iVar1 == 1)) &&
     (uVar2 = FUN_10034cb58(), (uVar2 & 1) == 0)) {
    if (param_1[0xf5] == 0) {
      pvVar3 = operator_new(0x200);
      lVar4 = thunk_FUN_1000de11c(pvVar3,param_2);
      param_1[0xf5] = lVar4;
    }
    uVar2 = FUN_100642d08();
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,param_1[0xf5],1);
    }
    FUN_100083e1c(param_1);
    return;
  }
  return;
}




void FUN_100084698(long param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_1000bf92c();
    return;
  }
  return;
}




void FUN_1000846a8(long param_1)

{
  FUN_1000bff14(*(undefined8 *)(param_1 + 0xb8));
  return;
}




void FUN_1000846b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [32];
  
  lVar1 = FUN_1004901b4(param_1 + 0x7c0);
  if (lVar1 != 0) {
    uVar2 = FUN_10044d88c(lVar1,*(undefined4 *)(param_1 + 0x7d4));
    uVar3 = FUN_100644a94("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP");
    FUN_100644aec(auStack_40,uVar3,uVar2);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_100084718(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100084768(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_100651038(param_1 + 0x548,plVar1);
  return;
}




bool FUN_100084784(undefined8 param_1,int param_2)

{
  return DAT_101dbd4d8 == param_2;
}




void FUN_10008479c(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




long * FUN_1000847c8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_10007c8a4_10144eba0;
  puVar10[0x19] = 0;
  FUN_1006421a8(puVar10 + 0x1b);
  param_1[0x1b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  lVar11 = 0x160;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar11);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x520);
  plVar1 = param_1 + 0xa4;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0xc2;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0xf6;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x19d;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x1b4;
  thunk_FUN_100650e64(plVar5);
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x200;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x226;
  thunk_FUN_100650e64(plVar8);
  lVar11 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar11 + 0x1260);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  lVar11 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar11 + 0x1850);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  lVar11 = 0;
  do {
    FUN_1004e313c((long)param_1 + lVar11 + 0x1e40);
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x50);
  *(undefined1 *)(param_1 + 0x3d2) = 1;
  lVar11 = 0x160;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar11,1);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x520);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,param_1 + 0x1da,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar8,1);
  lVar11 = 0;
  do {
    lVar6 = (long)param_1 + lVar11 + 0x160;
    FUN_100652cac(lVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
    local_90 = (code *)CONCAT44(local_90._4_4_,0xffa6a6a6);
    FUN_100652dd4(lVar6,&local_90,2);
    *(uint *)((long)param_1 + lVar11 + 0x1e4) =
         *(uint *)((long)param_1 + lVar11 + 0x1e4) & 0xffffffbf;
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x3c0);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x5a4) = *(uint *)((long)param_1 + 0x5a4) & 0xffffffbf;
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1006513c0(plVar5,&DAT_101d91650);
  uVar9 = *(uint *)((long)param_1 + 0xe24);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xe24) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_100651038(param_1 + 0x1da,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar2,1);
  *(uint *)((long)param_1 + 0x694) = *(uint *)((long)param_1 + 0x694) | 0x10;
  local_68 = DAT_101dbd484;
  local_90 = FUN_100084d18;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xc3,&local_90);
  local_68 = DAT_101dbd458;
  local_90 = FUN_100084d18;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xc3,&local_90);
  FUN_100530be0(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530b0c(0x42000000,0,plVar3);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_100084d1c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19e,&local_90);
  local_68 = DAT_101dbd460;
  local_90 = FUN_100084d1c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19e,&local_90);
  *(uint *)((long)param_1 + 0xd6c) = *(uint *)((long)param_1 + 0xd6c) | 0x10;
  uVar9 = *(uint *)((long)param_1 + 0x1084);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1084) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar7);
  }
  local_90 = (code *)CONCAT44(local_90._4_4_,0xffffe682);
  FUN_100651460(plVar8,&local_90);
  uVar9 = *(uint *)((long)param_1 + 0x11b4);
  if ((uVar9 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x11b4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7900;
    FUN_1000200a0(plVar8);
  }
  lVar11 = 0;
  do {
    lVar6 = (long)param_1 + lVar11 + 0x1850;
    FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar9 = *(uint *)((long)param_1 + lVar11 + 0x18d4);
    if ((uVar9 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + lVar11 + 0x18d4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
      FUN_1000200a0(lVar6);
    }
    lVar12 = lVar6 + -0x5f0;
    FUN_100651038(lVar12,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar9 = *(uint *)(lVar6 + -0x56c);
    if ((uVar9 & 0x7f80) != 0x4c80) {
      *(uint *)(lVar6 + -0x56c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar12);
    }
    FUN_100642bd8(plVar4,lVar12,1);
    FUN_100642bd8(plVar4,lVar6,1);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  return param_1;
}




void FUN_100084d18(void)

{
  return;
}




void FUN_100084d1c(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100530d94(param_1 + 0xf6);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100084d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(0x3e800000,param_1,0,4,1);
  return;
}




long * thunk_FUN_1000847c8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar10 = (undefined8 *)FUN_100269da8();
  *puVar10 = &PTR_thunk_FUN_10007c8a4_10144eba0;
  puVar10[0x19] = 0;
  FUN_1006421a8(puVar10 + 0x1b);
  param_1[0x1b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  lVar11 = 0x160;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar11);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x520);
  plVar1 = param_1 + 0xa4;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0xc2;
  thunk_FUN_1006543ec(plVar2);
  plVar3 = param_1 + 0xf6;
  FUN_10053077c(plVar3,0);
  plVar4 = param_1 + 0x19d;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x1b4;
  thunk_FUN_100650e64(plVar5);
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x200;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x226;
  thunk_FUN_100650e64(plVar8);
  lVar11 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar11 + 0x1260);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  lVar11 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar11 + 0x1850);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  lVar11 = 0;
  do {
    FUN_1004e313c((long)param_1 + lVar11 + 0x1e40);
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x50);
  *(undefined1 *)(param_1 + 0x3d2) = 1;
  lVar11 = 0x160;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar11,1);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x520);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,param_1 + 0x1da,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar8,1);
  lVar11 = 0;
  do {
    lVar6 = (long)param_1 + lVar11 + 0x160;
    FUN_100652cac(lVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
    pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xffa6a6a6);
    FUN_100652dd4(lVar6,&pcStack_90,2);
    *(uint *)((long)param_1 + lVar11 + 0x1e4) =
         *(uint *)((long)param_1 + lVar11 + 0x1e4) & 0xffffffbf;
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x3c0);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x5a4) = *(uint *)((long)param_1 + 0x5a4) & 0xffffffbf;
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_1006513c0(plVar5,&DAT_101d91650);
  uVar9 = *(uint *)((long)param_1 + 0xe24);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xe24) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_100651038(param_1 + 0x1da,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100654488(plVar2,1);
  *(uint *)((long)param_1 + 0x694) = *(uint *)((long)param_1 + 0x694) | 0x10;
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_100084d18;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xc3,&pcStack_90);
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_100084d18;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xc3,&pcStack_90);
  FUN_100530be0(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530b0c(0x42000000,0,plVar3);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_100084d1c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19e,&pcStack_90);
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_100084d1c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x19e,&pcStack_90);
  *(uint *)((long)param_1 + 0xd6c) = *(uint *)((long)param_1 + 0xd6c) | 0x10;
  uVar9 = *(uint *)((long)param_1 + 0x1084);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1084) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_1000200a0(plVar7);
  }
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xffffe682);
  FUN_100651460(plVar8,&pcStack_90);
  uVar9 = *(uint *)((long)param_1 + 0x11b4);
  if ((uVar9 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x11b4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7900;
    FUN_1000200a0(plVar8);
  }
  lVar11 = 0;
  do {
    lVar6 = (long)param_1 + lVar11 + 0x1850;
    FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar9 = *(uint *)((long)param_1 + lVar11 + 0x18d4);
    if ((uVar9 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + lVar11 + 0x18d4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
      FUN_1000200a0(lVar6);
    }
    lVar12 = lVar6 + -0x5f0;
    FUN_100651038(lVar12,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar9 = *(uint *)(lVar6 + -0x56c);
    if ((uVar9 & 0x7f80) != 0x4c80) {
      *(uint *)(lVar6 + -0x56c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar12);
    }
    FUN_100642bd8(plVar4,lVar12,1);
    FUN_100642bd8(plVar4,lVar6,1);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  return param_1;
}




void FUN_100084d70(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  
  FUN_10064e32c();
  FUN_100641464(&uStack_ac,&local_b0);
  iVar4 = FUN_100126cb8(uStack_ac,local_b0);
  fVar11 = 1.25;
  if (iVar4 == 0) {
    fVar11 = 1.0;
  }
  lVar6 = param_1 + 0xda0;
  bVar3 = false;
  if ((*(float *)(param_1 + 0xde8) == fVar11) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0xdec)) && !NAN(fVar11))) {
    bVar3 = *(float *)(param_1 + 0xdec) == fVar11;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0xde8) = fVar11;
    *(float *)(param_1 + 0xdec) = fVar11;
    FUN_1000200a0(lVar6);
  }
  FUN_100651708(704.0 / fVar11,lVar6,1);
  fVar11 = 0.0;
  bVar3 = false;
  if ((*(float *)(param_1 + 0xde4) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0xde0)))) {
    bVar3 = *(float *)(param_1 + 0xde0) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0xde0) = 0;
    fVar11 = 0.0;
    FUN_1000200a0(lVar6);
  }
  FUN_100651184(lVar6);
  fVar12 = fVar11 * *(float *)(param_1 + 0xdec);
  fVar13 = fVar12 + 2.0;
  if ((*(byte *)(param_1 + 0xf54) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0xf10) != 0.0) || (*(float *)(param_1 + 0xf14) != fVar13)) {
      *(undefined4 *)(param_1 + 0xf10) = 0;
      *(float *)(param_1 + 0xf14) = fVar13;
      FUN_1000200a0(param_1 + 0xed0);
    }
    FUN_100651184(param_1 + 0xed0);
    fVar13 = fVar12 + 22.0 + *(float *)(param_1 + 0xdec) * fVar11;
  }
  lVar6 = param_1 + 0x1000;
  FUN_100651708(0x44300000,lVar6,1);
  FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(float *)(param_1 + 0x1040) != 0.0) || (*(float *)(param_1 + 0x1044) != fVar13)) {
    *(undefined4 *)(param_1 + 0x1040) = 0;
    *(float *)(param_1 + 0x1044) = fVar13;
    FUN_1000200a0(lVar6);
  }
  uVar5 = FUN_100655b6c(param_1 + 0x10d0);
  iVar4 = FUN_1004e36c0(uVar5,&DAT_101d91650);
  if (iVar4 != 0) {
    FUN_100651184(lVar6);
    fVar13 = fVar13 + 50.0 + *(float *)(param_1 + 0x104c) * fVar11;
  }
  lVar6 = 0;
  do {
    lVar1 = param_1 + 0x1850 + lVar6;
    lVar2 = param_1 + lVar6;
    bVar3 = false;
    if ((*(float *)(lVar2 + 0x1890) == 112.0) &&
       (bVar3 = false, !NAN(*(float *)(lVar2 + 0x1894)) && !NAN(fVar13))) {
      bVar3 = *(float *)(lVar2 + 0x1894) == fVar13;
    }
    if (!bVar3) {
      *(undefined4 *)(lVar2 + 0x1890) = 0x42e00000;
      *(float *)(lVar2 + 0x1894) = fVar13;
      FUN_1000200a0(lVar1);
    }
    local_a8 = 0x3f800000;
    (**(code **)(*(long *)(lVar2 + 0x1850) + 0x28))(lVar1,&local_a8);
    lVar1 = param_1 + 0x1260 + lVar6;
    fVar11 = *(float *)(lVar2 + 0x12a4);
    bVar3 = false;
    if ((*(float *)(lVar2 + 0x12a0) == 128.0) && (bVar3 = false, !NAN(fVar11) && !NAN(fVar13))) {
      bVar3 = fVar11 == fVar13;
    }
    if (!bVar3) {
      *(undefined4 *)(lVar2 + 0x12a0) = 0x43000000;
      *(float *)(lVar2 + 0x12a4) = fVar13;
      FUN_1000200a0(lVar1);
    }
    local_a8 = 0;
    lVar2 = param_1 + lVar6;
    (**(code **)(*(long *)(lVar2 + 0x1260) + 0x28))(lVar1,&local_a8);
    FUN_100651708(0x44300000,lVar1,1);
    uVar5 = FUN_100655b6c(param_1 + 0x1330 + lVar6);
    iVar4 = FUN_1004e36c0(uVar5,&DAT_101d91650);
    if (iVar4 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x1260) + 0x48))(lVar1);
      fVar13 = fVar13 + 36.0 + *(float *)(lVar2 + 0x12ac) * fVar11;
    }
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0x5f0);
  lVar6 = param_1 + 0x1130;
  FUN_100651708(0x44300000,lVar6,1);
  FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(float *)(param_1 + 0x1170) != 0.0) || (*(float *)(param_1 + 0x1174) != fVar13)) {
    *(undefined4 *)(param_1 + 0x1170) = 0;
    *(float *)(param_1 + 0x1174) = fVar13;
    FUN_1000200a0(lVar6);
  }
  lVar1 = param_1 + 0x7b0;
  FUN_100530a48(lVar1,1);
  uVar7 = FUN_100530ac4(lVar1);
  local_a8 = CONCAT44(fVar11,uVar7);
  FUN_10064e48c(param_1 + 0xce8,&local_a8);
  FUN_100530a94(lVar1);
  lVar2 = param_1 + 0x610;
  fVar12 = fVar11;
  FUN_10064e3cc(lVar2);
  FUN_100530adc(lVar1,0,fVar12 < fVar11);
  fVar14 = 1.0;
  FUN_100530bb4(0x3ecccccd,lVar1);
  FUN_100530c04(lVar1,fVar12 < fVar11);
  if (*(char *)(param_1 + 0x1e90) == '\0') {
    fVar8 = (float)FUN_10064e3cc(param_1 + 0xce8);
    fVar15 = fVar8 + 8.0;
    FUN_100651184(lVar6);
    local_b4 = fVar14 + fVar13 + 8.0;
    fVar13 = fVar14 + fVar13 + 56.0;
    fVar8 = fVar8 + -40.0;
  }
  else {
    fVar15 = 752.0;
    fVar13 = 664.0;
    fVar8 = 704.0;
    local_b4 = 616.0;
  }
  FUN_10064e47c(fVar15,0x40800000,param_1 + 0x160);
  fVar16 = fVar13 + -8.0;
  FUN_10064e47c(0x40800000,fVar16,param_1 + 0x250);
  FUN_10064e47c(fVar15,0x40800000,param_1 + 0x340);
  FUN_10064e47c(0x40800000,fVar16,param_1 + 0x430);
  fVar17 = fVar15 * -0.5;
  fVar14 = fVar13 * -0.5;
  if ((*(float *)(param_1 + 0x1a0) != fVar17) || (*(float *)(param_1 + 0x1a4) != fVar14)) {
    *(float *)(param_1 + 0x1a0) = fVar17;
    *(float *)(param_1 + 0x1a4) = fVar14;
    FUN_1000200a0(param_1 + 0x160);
  }
  fVar9 = fVar15 * 0.5 + -4.0;
  fVar14 = fVar14 + 4.0;
  if ((*(float *)(param_1 + 0x290) != fVar9) || (*(float *)(param_1 + 0x294) != fVar14)) {
    *(float *)(param_1 + 0x290) = fVar9;
    *(float *)(param_1 + 0x294) = fVar14;
    FUN_1000200a0(param_1 + 0x250);
  }
  fVar13 = fVar13 * 0.5 + -4.0;
  if ((*(float *)(param_1 + 0x380) != fVar17) || (*(float *)(param_1 + 900) != fVar13)) {
    *(float *)(param_1 + 0x380) = fVar17;
    *(float *)(param_1 + 900) = fVar13;
    FUN_1000200a0(param_1 + 0x340);
  }
  if ((*(float *)(param_1 + 0x470) != fVar17) || (*(float *)(param_1 + 0x474) != fVar14)) {
    *(float *)(param_1 + 0x470) = fVar17;
    *(float *)(param_1 + 0x474) = fVar14;
    FUN_1000200a0(param_1 + 0x430);
  }
  lVar6 = param_1 + 0x520;
  fVar13 = (fVar15 + -8.0) * -0.5;
  if ((*(float *)(param_1 + 0x560) != fVar13) || (*(float *)(param_1 + 0x564) != fVar16 * -0.5)) {
    *(float *)(param_1 + 0x560) = fVar13;
    *(float *)(param_1 + 0x564) = fVar16 * -0.5;
    FUN_1000200a0(lVar6);
  }
  FUN_10064e47c(fVar15 + -8.0,fVar16,lVar6);
  if ((*(float *)(param_1 + 0x650) != 24.0) || (*(float *)(param_1 + 0x654) != 24.0)) {
    uVar5 = NEON_fmov(0x41c00000,4);
    *(undefined8 *)(param_1 + 0x650) = uVar5;
    FUN_1000200a0(lVar2);
  }
  FUN_10064e47c(fVar8,local_b4,lVar2);
  *(uint *)(param_1 + 0x694) = *(uint *)(param_1 + 0x694) | 0x10;
  if (fVar12 < fVar11) {
    FUN_100531b88(lVar1);
  }
  uVar7 = 0;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x7f4) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x7f0)))) {
    bVar3 = *(float *)(param_1 + 0x7f0) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x7f0) = 0;
    uVar7 = 0;
    FUN_1000200a0(lVar1);
  }
  uVar10 = FUN_100652e60(lVar6);
  local_a8 = CONCAT44(uVar7,uVar10);
  FUN_10064e48c(param_1,&local_a8);
  return;
}




void FUN_1000853c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x1e94) = 0;
  *(undefined8 *)(param_1 + 200) = param_2;
  *(undefined1 *)(param_1 + 0x1e90) = param_3;
  FUN_1000853d8();
  return;
}




void FUN_1000853d8(long *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  if (param_1[0x19] != 0) {
    plVar5 = param_1 + 0x24c;
    lVar7 = 5;
    do {
      (**(code **)(plVar5[0xbe] + 0x138))(plVar5 + 0xbe,&DAT_101d91650);
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_101d91650);
      plVar5 = plVar5 + 0x26;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar3 = FUN_1004e0150(*(undefined8 *)(param_1[0x19] + 0x10),0);
    FUN_1006513c0(param_1 + 0x1b4,uVar3);
    FUN_1006513c0(param_1 + 0x1da,&DAT_101d91650);
    *(uint *)((long)param_1 + 0xf54) = *(uint *)((long)param_1 + 0xf54) & 0xfffffffb;
    uVar3 = FUN_1004e0150(*(undefined8 *)(param_1[0x19] + 0x18),0);
    thunk_FUN_1004e439c(auStack_70,uVar3);
    FUN_1000ef60c(auStack_70,param_1[0x19]);
    FUN_1000f2b7c(auStack_70);
    FUN_1006513c0(param_1 + 0x200,auStack_70);
    FUN_1004e313c(auStack_80);
    uVar3 = FUN_1004e0150(*(undefined8 *)(param_1[0x19] + 0x20),0);
    uVar4 = FUN_1004e36c0(uVar3,&DAT_101d91650);
    if ((uVar4 & 1) == 0) {
      FUN_1000153b4(auStack_80,&DAT_101d91650);
    }
    else {
      uVar3 = FUN_1004e0150("GENERIC_TIP_LEAD",0);
      FUN_1000153b4(auStack_80,uVar3);
      uVar3 = FUN_1004e0150(*(undefined8 *)(param_1[0x19] + 0x20),0);
      FUN_1004e372c(auStack_80,uVar3);
    }
    FUN_1006513c0(param_1 + 0x226,auStack_80);
    *(uint *)((long)param_1 + 0x11b4) = *(uint *)((long)param_1 + 0x11b4) | 4;
    lVar7 = **(long **)(param_1[0x19] + 0x48);
    if (lVar7 != 0) {
      plVar5 = param_1 + 0x3c8;
      plVar6 = param_1 + 0x24c;
      uVar4 = 0;
      plVar1 = *(long **)(param_1[0x19] + 0x48);
      do {
        fVar8 = *(float *)(lVar7 + 4);
        if ((*(float *)(lVar7 + 4) <= 0.0) && (fVar8 = 0.0, 0.0 < *(float *)(lVar7 + 8))) {
          fVar8 = *(float *)(lVar7 + 8);
        }
        FUN_1000ee590(fVar8,*(undefined4 *)(lVar7 + 0xc),plVar5,0);
        uVar3 = FUN_1000eff40(*(undefined4 *)*plVar1);
        (**(code **)(*plVar6 + 0x138))(plVar6,uVar3);
        FUN_1004e3120(auStack_90,"+");
        uVar3 = FUN_1004e372c(auStack_90,plVar5);
        (**(code **)(plVar6[0xbe] + 0x138))(plVar6 + 0xbe,uVar3);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        lVar7 = plVar1[1];
        if (lVar7 == 0) break;
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 0x26;
        bVar2 = uVar4 < 4;
        uVar4 = uVar4 + 1;
        plVar1 = plVar1 + 1;
      } while (bVar2);
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_100085684(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x1e94) = 1;
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined1 *)(param_1 + 0x1e90) = param_3;
  FUN_10008569c();
  return;
}




void FUN_10008569c(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  
  if (param_1[0x1a] == 0) goto LAB_1000859e0;
  plVar8 = param_1 + 0x24c;
  lVar7 = 5;
  do {
    (**(code **)(plVar8[0xbe] + 0x138))(plVar8 + 0xbe,&DAT_101d91650);
    (**(code **)(*plVar8 + 0x138))(plVar8,&DAT_101d91650);
    plVar8 = plVar8 + 0x26;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar4 = (undefined8 *)FUN_1003e000c(param_1[0x1a]);
  uVar5 = FUN_1004e0150(*puVar4,0);
  FUN_1006513c0(param_1 + 0x1b4,uVar5);
  uVar5 = FUN_1004e0150("MENU_TALENTS_LEVEL_AND_RARITY_SUBTITLE",0);
  thunk_FUN_1004e439c(auStack_80,uVar5);
  FUN_1004e313c(auStack_90);
  FUN_1003e0014(param_1[0x1a]);
  FUN_1004e38ac(auStack_90,"%d");
  FUN_1004e3120(auStack_a0,"[LEVEL]");
  FUN_1004e3bc4(auStack_80,0,auStack_a0,auStack_90);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  lVar7 = FUN_1003e000c(param_1[0x1a]);
  iVar3 = *(int *)(lVar7 + 0x18);
  if (iVar3 == 1) {
    FUN_1004e3120(auStack_a0,"[RARITY]");
    pcVar6 = "MENU_LOOT_LABEL_RARE";
LAB_10008581c:
    uVar5 = FUN_1004e0150(pcVar6,0);
    FUN_1004e3bc4(auStack_80,0,auStack_a0,uVar5);
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
    }
  }
  else {
    if (iVar3 == 2) {
      FUN_1004e3120(auStack_a0,"[RARITY]");
      pcVar6 = "MENU_LOOT_LABEL_EPIC";
      goto LAB_10008581c;
    }
    if (iVar3 == 3) {
      FUN_1004e3120(auStack_a0,"[RARITY]");
      pcVar6 = "MENU_LOOT_LABEL_LEGENDARY";
      goto LAB_10008581c;
    }
  }
  FUN_1006513c0(param_1 + 0x1da,auStack_80);
  *(uint *)((long)param_1 + 0xf54) = *(uint *)((long)param_1 + 0xf54) | 4;
  lVar7 = FUN_1003e000c(param_1[0x1a]);
  uVar2 = *(int *)(lVar7 + 0x18) - 1;
  if (uVar2 < 3) {
    FUN_100651460(param_1 + 0x1da,(&PTR_DAT_10144ecf8)[(int)uVar2]);
  }
  lVar7 = FUN_1003e000c(param_1[0x1a]);
  uVar5 = FUN_1004e0150(*(undefined8 *)(lVar7 + 8),0);
  thunk_FUN_1004e439c(auStack_a0,uVar5);
  uVar5 = FUN_1003e000c(param_1[0x1a]);
  FUN_1000ef9dc(auStack_a0,uVar5);
  FUN_1000f2b7c(auStack_a0);
  FUN_1006513c0(param_1 + 0x200,auStack_a0);
  FUN_1006513c0(param_1 + 0x226,&DAT_101d91650);
  *(uint *)((long)param_1 + 0x11b4) = *(uint *)((long)param_1 + 0x11b4) & 0xfffffffb;
  lVar7 = FUN_1003e000c(param_1[0x1a]);
  plVar8 = *(long **)(lVar7 + 0x28);
  lVar7 = *plVar8;
  if (lVar7 != 0) {
    uVar9 = 0;
    do {
      if (*(char *)(lVar7 + 0x34) == '\0') {
        if (4 < (uint)uVar9) break;
        uVar1 = *(undefined4 *)(lVar7 + 0x2c);
        fVar12 = *(float *)(lVar7 + 8);
        iVar3 = FUN_1003e0014(param_1[0x1a]);
        fVar11 = (float)(iVar3 - 1);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        uVar10 = uVar9 & 0xffffffff;
        FUN_1000ee590(fVar12 + *(float *)(plVar8[uVar9] + 0xc) * fVar11,uVar1,
                      param_1 + (uVar9 & 0xffffffff) * 2 + 0x3c8,0);
        uVar5 = FUN_1000eff68(plVar8[uVar9]);
        (**(code **)(param_1[uVar10 * 0x26 + 0x24c] + 0x138))(param_1 + uVar10 * 0x26 + 0x24c,uVar5)
        ;
        (**(code **)(param_1[uVar10 * 0x26 + 0x30a] + 0x138))
                  (param_1 + uVar10 * 0x26 + 0x30a,param_1 + (uVar9 & 0xffffffff) * 2 + 0x3c8);
      }
      lVar7 = plVar8[uVar9 + 1];
      uVar9 = uVar9 + 1;
    } while (lVar7 != 0);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
LAB_1000859e0:
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_100085a18(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10007c8a4();
  operator_delete(pvVar1);
  return;
}




void FUN_100085a2c(void)

{
  return;
}




void FUN_100085a30(void)

{
  return;
}




long * FUN_100085a34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_58;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_10007cbf8_10144ed20;
  puVar7 = puVar7 + 0x17;
  FUN_100269de4(puVar7);
  plVar1 = param_1 + 0x30;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x47;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x65;
  thunk_FUN_100650e64(plVar3);
  FUN_10064e264(param_1 + 0x8b);
  FUN_1006421a8(param_1 + 0xa2);
  param_1[0xa2] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0xb3);
  thunk_FUN_100650e64(param_1 + 0xd9);
  FUN_1004e313c(param_1 + 0xff);
  FUN_1004e313c(param_1 + 0x101);
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0x105);
  iVar4 = FUN_1000bdae4(1);
  uVar5 = 1;
  if (iVar4 != 0) {
    uVar5 = 2;
  }
  thunk_FUN_100088b08(param_1 + 0x107,uVar5);
  iVar4 = FUN_1000bdae4(1);
  uVar5 = 1;
  if (iVar4 == 0) {
    uVar5 = 2;
  }
  thunk_FUN_100088b08(param_1 + 0x151,uVar5);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,param_1 + 0x107,1);
  FUN_100642bd8(puVar7,param_1 + 0x151,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  local_58 = 0x3f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_58);
  uVar6 = *(uint *)((long)param_1 + 0x84);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(param_1);
    uVar6 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar6 | 0xc;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0xc;
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 4;
  uVar5 = FUN_1004d2524("HUD_MatchClock");
  uVar6 = FUN_100015208("HUD_MatchClock",uVar5,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar6 & 0xffff) << 0xf;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0);
  FUN_1006516bc(plVar3,&DAT_101d22fe8);
  FUN_10065165c(plVar3,1);
  uVar8 = FUN_1004e0150("HUD_STAT_LABEL_CLOCK",0);
  FUN_1006513c0(plVar3,uVar8);
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_stats_clock");
  return param_1;
}




long * thunk_FUN_100085a34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_10007cbf8_10144ed20;
  puVar7 = puVar7 + 0x17;
  FUN_100269de4(puVar7);
  plVar1 = param_1 + 0x30;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x47;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x65;
  thunk_FUN_100650e64(plVar3);
  FUN_10064e264(param_1 + 0x8b);
  FUN_1006421a8(param_1 + 0xa2);
  param_1[0xa2] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0xb3);
  thunk_FUN_100650e64(param_1 + 0xd9);
  FUN_1004e313c(param_1 + 0xff);
  FUN_1004e313c(param_1 + 0x101);
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0x105);
  iVar4 = FUN_1000bdae4(1);
  uVar5 = 1;
  if (iVar4 != 0) {
    uVar5 = 2;
  }
  thunk_FUN_100088b08(param_1 + 0x107,uVar5);
  iVar4 = FUN_1000bdae4(1);
  uVar5 = 1;
  if (iVar4 == 0) {
    uVar5 = 2;
  }
  thunk_FUN_100088b08(param_1 + 0x151,uVar5);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  FUN_100642bd8(puVar7,param_1 + 0x107,1);
  FUN_100642bd8(puVar7,param_1 + 0x151,1);
  FUN_100642bd8(puVar7,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  uStack_58 = 0x3f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&uStack_58);
  uVar6 = *(uint *)((long)param_1 + 0x84);
  if ((uVar6 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6600;
    FUN_1000200a0(param_1);
    uVar6 = *(uint *)((long)param_1 + 0x84);
  }
  *(uint *)((long)param_1 + 0x84) = uVar6 | 0xc;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0xc;
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 4;
  uVar5 = FUN_1004d2524("HUD_MatchClock");
  uVar6 = FUN_100015208("HUD_MatchClock",uVar5,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar6 & 0xffff) << 0xf;
  FUN_100651038(plVar3,PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0);
  FUN_1006516bc(plVar3,&DAT_101d22fe8);
  FUN_10065165c(plVar3,1);
  uVar8 = FUN_1004e0150("HUD_STAT_LABEL_CLOCK",0);
  FUN_1006513c0(plVar3,uVar8);
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_stats_clock");
  return param_1;
}




void FUN_100085cbc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x818) = *param_2;
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 1);
  uVar1 = FUN_1003467f8();
  uVar1 = FUN_10034cf08(uVar1,*(undefined1 *)(param_1 + 0xa80));
  FUN_100088bb4(param_1 + 0x838,uVar1);
  uVar1 = FUN_1003467f8();
  uVar1 = FUN_10034cf08(uVar1,*(undefined1 *)(param_1 + 0xcd0));
  FUN_100088bb4(param_1 + 0xa88,uVar1);
  return;
}




void FUN_100085d1c(long param_1)

{
  *(byte *)(param_1 + 0xcd8) = *(byte *)(param_1 + 0xcd8) | 2;
  return;
}




void FUN_100085d2c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xcd8) = *(byte *)(param_1 + 0xcd8) & 0xfe | param_2;
  return;
}




void FUN_100085d40(long param_1)

{
  FUN_1000320fc();
  FUN_100032244();
  FUN_1004e38ac(param_1 + 0x828,"%d:%02d");
  FUN_1006513c0(param_1 + 0x328,param_1 + 0x828);
  return;
}




void FUN_100085db4(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = FUN_100642d08();
  if (iVar4 != 0) {
    lVar1 = param_1 + 0x180;
    FUN_10064e47c(0x42f03333,0x42240000,lVar1);
    if ((*(float *)(param_1 + 0x1d0) != 0.5) || (*(float *)(param_1 + 0x1d4) != 0.0)) {
      *(undefined8 *)(param_1 + 0x1d0) = 0x3f000000;
      FUN_1000200a0(lVar1);
    }
    lVar2 = param_1 + 0x238;
    bVar3 = false;
    if ((*(float *)(param_1 + 0x288) == 0.5) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x28c))))
    {
      bVar3 = *(float *)(param_1 + 0x28c) == 0.5;
    }
    if (!bVar3) {
      *(undefined1 **)(param_1 + 0x288) = &DAT_3f0000003f000000;
      FUN_1000200a0(lVar2);
    }
    bVar3 = false;
    if ((*(float *)(param_1 + 0x378) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x37c))))
    {
      bVar3 = *(float *)(param_1 + 0x37c) == 0.5;
    }
    if (!bVar3) {
      *(undefined8 *)(param_1 + 0x378) = 0x3f00000000000000;
      FUN_1000200a0(param_1 + 0x328);
    }
    fVar5 = (float)FUN_10064e3cc(lVar1);
    fVar6 = (float)FUN_100652e60(lVar2);
    fVar7 = 2.0;
    fVar6 = (fVar6 - fVar5) * 0.5 + 2.0;
    FUN_10064e3cc(lVar1);
    fVar7 = fVar7 * 0.5;
    fVar5 = *(float *)(param_1 + 0x278);
    bVar3 = false;
    if ((fVar5 == fVar6) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x27c)) && !NAN(fVar7))) {
      bVar3 = *(float *)(param_1 + 0x27c) == fVar7;
    }
    if (!bVar3) {
      *(float *)(param_1 + 0x278) = fVar6;
      *(float *)(param_1 + 0x27c) = fVar7;
      FUN_1000200a0(lVar2);
      fVar5 = *(float *)(param_1 + 0x278);
    }
    fVar6 = (float)FUN_100652e60(lVar2);
    fVar5 = fVar5 + 5.0;
    fVar6 = fVar5 + fVar6 * 0.5;
    FUN_10064e3cc(lVar1);
    fVar5 = fVar5 * 0.5;
    bVar3 = false;
    if ((*(float *)(param_1 + 0x368) == fVar6) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x36c)) && !NAN(fVar5))) {
      bVar3 = *(float *)(param_1 + 0x36c) == fVar5;
    }
    if (!bVar3) {
      *(float *)(param_1 + 0x368) = fVar6;
      *(float *)(param_1 + 0x36c) = fVar5;
      FUN_1000200a0(param_1 + 0x328);
    }
    if ((*(byte *)(param_1 + 0xcd8) >> 1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0xcd8) & 1) == 0) {
        FUN_100086154();
        return;
      }
      FUN_100085f70(param_1);
      return;
    }
  }
  return;
}




void FUN_100085f70(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_58;
  float fStack_54;
  
  plVar1 = param_3 + 0x107;
  *(uint *)((long)param_3 + 0x8bc) = *(uint *)((long)param_3 + 0x8bc) | 4;
  *(uint *)((long)param_3 + 0xb0c) = *(uint *)((long)param_3 + 0xb0c) | 4;
  plVar2 = param_3 + 0x30;
  fVar5 = (float)FUN_10064e3cc(plVar2);
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar7 = 0.5;
  (**(code **)(*param_3 + 0x48))(param_3);
  local_58 = (fVar6 - fVar5) * 0.5;
  fStack_54 = fVar7;
  fVar6 = (float)FUN_10064e3cc(plVar2);
  param_2 = param_2 / fVar7;
  bVar4 = false;
  if ((*(float *)(param_3 + 0x39) == fVar5 / fVar6) &&
     (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x1cc)) && !NAN(param_2))) {
    bVar4 = *(float *)((long)param_3 + 0x1cc) == param_2;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x39) = fVar5 / fVar6;
    *(float *)((long)param_3 + 0x1cc) = param_2;
    FUN_1000200a0(plVar2);
  }
  bVar4 = false;
  if ((*(float *)((long)param_3 + 0x1c4) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0x38)))) {
    bVar4 = *(float *)(param_3 + 0x38) == 0.0;
  }
  if (!bVar4) {
    param_3[0x38] = 0;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_3 + 0x151;
  FUN_10064e48c(plVar1,&local_58);
  if ((*(float *)(param_3 + 0x111) != 1.0) || (*(float *)((long)param_3 + 0x88c) != 0.0)) {
    param_3[0x111] = 0x3f800000;
    FUN_1000200a0(plVar1);
  }
  fVar5 = (float)FUN_10064259c(plVar2);
  if ((*(float *)(param_3 + 0x10f) != fVar5 * -0.5) || (*(float *)((long)param_3 + 0x87c) != 0.0)) {
    *(float *)(param_3 + 0x10f) = fVar5 * -0.5;
    *(undefined4 *)((long)param_3 + 0x87c) = 0;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e48c(plVar3,&local_58);
  bVar4 = false;
  if ((*(float *)((long)param_3 + 0xadc) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0x15b)))) {
    bVar4 = *(float *)(param_3 + 0x15b) == 0.0;
  }
  if (!bVar4) {
    param_3[0x15b] = 0;
    FUN_1000200a0(plVar3);
  }
  fVar5 = (float)FUN_10064259c(plVar2);
  if ((*(float *)(param_3 + 0x159) != fVar5 * 0.5) || (*(float *)((long)param_3 + 0xacc) != 0.0)) {
    *(float *)(param_3 + 0x159) = fVar5 * 0.5;
    *(undefined4 *)((long)param_3 + 0xacc) = 0;
    FUN_1000200a0(plVar3);
  }
  FUN_1000891fc(plVar1);
  FUN_1000891fc(plVar3);
  return;
}




void FUN_100086154(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(uint *)((long)param_3 + 0x8bc) = *(uint *)((long)param_3 + 0x8bc) & 0xfffffffb;
  *(uint *)((long)param_3 + 0xb0c) = *(uint *)((long)param_3 + 0xb0c) & 0xfffffffb;
  plVar1 = param_3 + 0x30;
  fVar3 = (float)(**(code **)(*param_3 + 0x48))();
  fVar5 = param_2;
  fVar4 = (float)FUN_10064e3cc(plVar1);
  param_2 = param_2 / fVar5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x39) == fVar3 / fVar4) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x1cc)) && !NAN(param_2))) {
    bVar2 = *(float *)((long)param_3 + 0x1cc) == param_2;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x39) = fVar3 / fVar4;
    *(float *)((long)param_3 + 0x1cc) = param_2;
    FUN_1000200a0(plVar1);
  }
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x38) == fVar5 * 0.5) && (*(float *)((long)param_3 + 0x1c4) == 0.0)) {
    return;
  }
  *(float *)(param_3 + 0x38) = fVar5 * 0.5;
  *(undefined4 *)((long)param_3 + 0x1c4) = 0;
  FUN_1000200a0(plVar1);
  return;
}




void FUN_100086228(long param_1)

{
  FUN_100269e20(param_1 + 0xb8);
  return;
}




void FUN_100086230(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0xcd8) & 1) == 0) {
    return;
  }
  FUN_100089364(param_1 + 0x838);
  FUN_100089364(param_1 + 0xa88,param_2,param_3);
  return;
}




byte FUN_100086288(long param_1)

{
  return *(byte *)(param_1 + 0xcd8) & 1;
}




byte FUN_100086294(long param_1)

{
  return *(byte *)(param_1 + 0xcd8) >> 1 & 1;
}




void FUN_1000862a4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10007cbf8();
  operator_delete(pvVar1);
  return;
}




long * FUN_1000862b8(long *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  float local_30;
  float local_2c;
  undefined1 *local_28;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  *puVar3 = &PTR_FUN_10144ee68;
  puVar3 = puVar3 + 0x11;
  thunk_FUN_100650e64(puVar3);
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(byte *)((long)param_1 + 0x1bc) = *(byte *)((long)param_1 + 0x1bc) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100651038(puVar3,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
  FUN_100651460(puVar3,&DAT_101d23010);
  FUN_1006516bc(puVar3,&DAT_101d23014);
  FUN_10065165c(puVar3,1);
  uVar1 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar1 & 0xfffffff3;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xffff8073;
    FUN_1000200a0(param_1);
  }
  FUN_100641464(&local_2c,&local_30);
  local_30 = local_30 * 0.2;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x19) == local_2c * 0.5) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0xcc)) && !NAN(local_30))) {
    bVar2 = *(float *)((long)param_1 + 0xcc) == local_30;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x19) = local_2c * 0.5;
    *(float *)((long)param_1 + 0xcc) = local_30;
    FUN_1000200a0(puVar3);
  }
  local_28 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x11] + 0x28))(puVar3,&local_28);
  return param_1;
}




long * thunk_FUN_1000862b8(long *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  float fStack_30;
  float fStack_2c;
  undefined1 *puStack_28;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  *puVar3 = &PTR_FUN_10144ee68;
  puVar3 = puVar3 + 0x11;
  thunk_FUN_100650e64(puVar3);
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(byte *)((long)param_1 + 0x1bc) = *(byte *)((long)param_1 + 0x1bc) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100651038(puVar3,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
  FUN_100651460(puVar3,&DAT_101d23010);
  FUN_1006516bc(puVar3,&DAT_101d23014);
  FUN_10065165c(puVar3,1);
  uVar1 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar1 & 0xfffffff3;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar1 & 0xffff8073;
    FUN_1000200a0(param_1);
  }
  FUN_100641464(&fStack_2c,&fStack_30);
  fStack_30 = fStack_30 * 0.2;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x19) == fStack_2c * 0.5) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0xcc)) && !NAN(fStack_30))) {
    bVar2 = *(float *)((long)param_1 + 0xcc) == fStack_30;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x19) = fStack_2c * 0.5;
    *(float *)((long)param_1 + 0xcc) = fStack_30;
    FUN_1000200a0(puVar3);
  }
  puStack_28 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x11] + 0x28))(puVar3,&puStack_28);
  return param_1;
}




void FUN_1000863f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if ((*(byte *)(param_1 + 0x84) >> 2 & 1) != 0) {
    if (((DAT_101dc4e48 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101dc4e48), iVar1 != 0)) {
      FUN_1004e313c(&DAT_101dc4e38);
      ___cxa_atexit(FUN_100046198,&DAT_101dc4e38,0x100000000);
      ___cxa_guard_release(&DAT_101dc4e48);
    }
    if (((DAT_101dc4e60 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101dc4e60), iVar1 != 0)) {
      FUN_1004e313c(&DAT_101dc4e50);
      ___cxa_atexit(FUN_100046198,&DAT_101dc4e50,0x100000000);
      ___cxa_guard_release(&DAT_101dc4e60);
    }
    uVar2 = FUN_1004e0150("HUD_MATCH_START_PREPARE_FOR_BATTLE",0);
    FUN_1000153b4(&DAT_101dc4e38,uVar2);
    pfVar3 = (float *)FUN_1003e10f0();
    fVar5 = *(float *)(param_1 + 0x1b8) + *pfVar3;
    FUN_1000320fc();
    FUN_100032244();
    FUN_1004e38ac(&DAT_101dc4e50,"%d");
    FUN_1004e3120(auStack_50,"[TIME]");
    FUN_1004e3bc4(&DAT_101dc4e38,0,auStack_50,&DAT_101dc4e50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1006513c0(param_1 + 0x88,&DAT_101dc4e38);
    if ((*(byte *)(param_1 + 0x1bc) & 1) == 0) {
      FUN_1000320fc();
      fVar4 = (float)FUN_100032244();
      if (fVar5 <= fVar4) {
        FUN_100642324(param_1);
        uVar2 = FUN_100640840(0,0x3f19999a,FUN_10001f160);
        FUN_100642b14(param_1,uVar2);
        *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) | 1;
        return;
      }
    }
    FUN_1000320fc();
    fVar4 = (float)FUN_100032244();
    if (fVar5 + 0.6 <= fVar4) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff3;
    }
  }
  return;
}




void FUN_100086604(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0xc;
  uVar1 = FUN_100640840(0x3f800000,0x3f19999a,FUN_10001f160);
  FUN_100642b14(param_1,uVar1);
  FUN_1000320fc();
  uVar2 = FUN_100032244();
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  return;
}




void FUN_10008665c(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  float fVar3;
  undefined8 uVar4;
  byte bVar5;
  float local_38;
  float local_34;
  
  bVar2 = *(byte *)(param_1 + 0x1bc);
  if (((bVar2 & 1) == 0) && ((((bVar2 & 2) == 0 ^ param_2) & 1) == 0)) {
    bVar5 = 2;
    if (param_2 == 0) {
      bVar5 = 0;
    }
    *(byte *)(param_1 + 0x1bc) = bVar2 & 0xfd | bVar5;
    lVar1 = param_1 + 0x88;
    FUN_100642324(lVar1);
    FUN_100641464(&local_34,&local_38);
    fVar3 = local_38 * 0.2;
    if ((*(byte *)(param_1 + 0x1bc) & 2) != 0) {
      fVar3 = 68.0;
    }
    if (*(float *)(param_1 + 0xcc) != fVar3) {
      uVar4 = FUN_100640840(0,0x3dcccccd,FUN_10001f160);
      FUN_100642b14(lVar1,uVar4);
      uVar4 = FUN_1006408f4(local_34 * 0.5,fVar3,0,0);
      FUN_100642b14(lVar1,uVar4);
      uVar4 = FUN_100640840(0x3f800000,0x3dcccccd,FUN_10001f160);
      FUN_100642b14(lVar1,uVar4);
    }
  }
  return;
}




void FUN_100086770(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144ee68;
  thunk_FUN_100651068(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000867a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144ee68;
  thunk_FUN_100651068(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1000867d4(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)FUN_10064f204();
  *puVar3 = &PTR_thunk_FUN_1000868c8_10144ef68;
  puVar3 = puVar3 + 0x29;
  FUN_100269de4(puVar3);
  thunk_FUN_100086bcc(param_1 + 0x42);
  uVar1 = FUN_1004d2524("HUD_Minimap");
  uVar2 = FUN_100015208("HUD_Minimap",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  lVar4 = FUN_1010a1540(DAT_10184df50,0);
  param_1[0x68] = lVar4;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,param_1 + 0x42,1);
  FUN_100642bd8(puVar3,param_1[0x68] + 0x28,1);
  FUN_100269e20(0x3dcccccd,puVar3,1,4,1);
  return param_1;
}




void FUN_1000868bc(long param_1)

{
  FUN_100269e20(param_1 + 0x148);
  return;
}




long * thunk_FUN_1000867d4(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)FUN_10064f204();
  *puVar3 = &PTR_thunk_FUN_1000868c8_10144ef68;
  puVar3 = puVar3 + 0x29;
  FUN_100269de4(puVar3);
  thunk_FUN_100086bcc(param_1 + 0x42);
  uVar1 = FUN_1004d2524("HUD_Minimap");
  uVar2 = FUN_100015208("HUD_Minimap",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  lVar4 = FUN_1010a1540(DAT_10184df50,0);
  param_1[0x68] = lVar4;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,param_1 + 0x42,1);
  FUN_100642bd8(puVar3,param_1[0x68] + 0x28,1);
  FUN_100269e20(0x3dcccccd,puVar3,1,4,1);
  return param_1;
}




void FUN_1000868c8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000868c8_10144ef68;
  FUN_1010a1830(param_1[0x68]);
  param_1[0x68] = 0;
  thunk_FUN_100086c48(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000868c8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000868c8_10144ef68;
  FUN_1010a1830(param_1[0x68]);
  param_1[0x68] = 0;
  thunk_FUN_100086c48(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x29);
  *param_1 = &PTR_FUN_1014a5de8;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10008692c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000868c8();
  operator_delete(pvVar1);
  return;
}




void FUN_100086940(undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  
  FUN_1010a1958(auStack_58,1,DAT_10184dac8,0);
  lVar6 = FUN_10011bb24();
  if (lVar6 != 0) {
    if ((param_4 == 0) || (iVar5 = FUN_100345bbc(param_4), iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_100345bbc(param_4);
      iVar5 = iVar5 + -1;
    }
    plVar8 = *(long **)(lVar6 + 0x60);
    plVar3 = plVar8;
    while (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar3;
      plVar3 = plVar3 + 1;
    }
    lVar1 = param_3 + 0x210;
    FUN_100086ce4(lVar1,lVar6,iVar5,*(undefined8 *)(param_3 + 0x340));
    uVar9 = *(undefined8 *)(param_3 + 0x340);
    local_60 = FUN_100086fe4(lVar1);
    uStack_5c = param_2;
    FUN_100041704(uVar9,param_4,&local_60);
    fVar10 = *(float *)(lVar6 + 0x34);
    fVar11 = *(float *)(lVar6 + 0x38);
    FUN_100041914(fVar10,fVar11,*(undefined8 *)(param_3 + 0x340));
    bVar4 = false;
    if ((*(float *)(param_3 + 600) == fVar10) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0x25c)) && !NAN(fVar11))) {
      bVar4 = *(float *)(param_3 + 0x25c) == fVar11;
    }
    if (!bVar4) {
      *(float *)(param_3 + 600) = fVar10;
      *(float *)(param_3 + 0x25c) = fVar11;
      FUN_1000200a0(lVar1);
    }
    uVar7 = (uint)(*(float *)(lVar6 + 8) * 255.0);
    uVar2 = *(uint *)(param_3 + 0x294);
    if (uVar7 != (uVar2 >> 7 & 0xff)) {
      *(uint *)(param_3 + 0x294) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar7 & 0xff) << 7;
      FUN_1000200a0(lVar1);
    }
  }
  return;
}




void FUN_100086a78(long param_1)

{
  if (*(long *)(param_1 + 0x340) != 0) {
    FUN_1000413ac();
    FUN_10064e5ec(0,0,*(long *)(param_1 + 0x340) + 0x28,8,param_1,8);
    FUN_10064e5ec(0,0,param_1 + 0x210,8,param_1,8);
    return;
  }
  return;
}




void FUN_100086ae4(long param_1)

{
  FUN_100041980(*(undefined8 *)(param_1 + 0x340));
  return;
}




void FUN_100086aec(long param_1)

{
  FUN_100041a98(*(undefined8 *)(param_1 + 0x340));
  return;
}




void FUN_100086af4(long param_1)

{
  FUN_100041aac(*(undefined8 *)(param_1 + 0x340));
  return;
}




void FUN_100086afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x340) + 0x28) + 0x50))();
  return;
}




undefined4 FUN_100086b0c(undefined8 param_1,int param_2)

{
  long lVar1;
  long local_28;
  
  FUN_1010a1958(&local_28,1,DAT_10184dac8,0);
  lVar1 = 0x5c;
  if (param_2 == 0) {
    lVar1 = 0x54;
  }
  return *(undefined4 *)(*(long *)(local_28 + 0x290) + lVar1);
}




void FUN_100086b74(void)

{
  if ((DAT_10184df58 & 1) == 0) {
    DAT_10184df50 = DAT_101872e38;
    DAT_10184df58 = 1;
  }
  return;
}




void FUN_100086ba0(void)

{
  if ((DAT_10184dad0 & 1) == 0) {
    DAT_10184dac8 = DAT_101872e38;
    DAT_10184dad0 = 1;
  }
  return;
}




long FUN_100086bcc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x18) = 0x7000000;
  puVar1[0x19] = uVar2;
  *puVar1 = &PTR_thunk_FUN_100086c48_10144f0b8;
  puVar1[0x17] = &PTR_FUN_10144f220;
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  FUN_10064e5b8(puVar1,&DAT_101dbd510);
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  return param_1;
}




long thunk_FUN_100086bcc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x18) = 0x7000000;
  puVar1[0x19] = uVar2;
  *puVar1 = &PTR_thunk_FUN_100086c48_10144f0b8;
  puVar1[0x17] = &PTR_FUN_10144f220;
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  FUN_10064e5b8(puVar1,&DAT_101dbd510);
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  return param_1;
}




void FUN_100086c48(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_100086c48_10144f0b8;
  param_1[0x17] = &PTR_FUN_10144f220;
  if (param_1[0x1b] != 0) {
    pvVar1 = (void *)thunk_FUN_100657580();
    operator_delete(pvVar1);
  }
  if (param_1[0x1d] != 0) {
    pvVar1 = (void *)thunk_FUN_100657580();
    operator_delete(pvVar1);
  }
  if (param_1[0x1f] != 0) {
    pvVar1 = (void *)thunk_FUN_100657580();
    operator_delete(pvVar1);
  }
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100086c48(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_100086c48_10144f0b8;
  param_1[0x17] = &PTR_FUN_10144f220;
  if (param_1[0x1b] != 0) {
    pvVar1 = (void *)thunk_FUN_100657580();
    operator_delete(pvVar1);
  }
  if (param_1[0x1d] != 0) {
    pvVar1 = (void *)thunk_FUN_100657580();
    operator_delete(pvVar1);
  }
  if (param_1[0x1f] != 0) {
    pvVar1 = (void *)thunk_FUN_100657580();
    operator_delete(pvVar1);
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100086cb0(long param_1)

{
  FUN_100086c48(param_1 + -0xb8);
  return;
}




void FUN_100086cb8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100086c48();
  operator_delete(pvVar1);
  return;
}




void FUN_100086ccc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100086c48(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_100086ce4(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined8 *)(param_1 + 0x100) = param_4;
  plVar6 = *(long **)(param_2 + 0x60);
  if (plVar6 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*plVar6 != 0) {
      lVar7 = 0;
      do {
        lVar1 = lVar7 + 1;
        lVar7 = lVar7 + 1;
      } while (plVar6[lVar1] != 0);
    }
  }
  if (param_3 < (int)lVar7) {
    uVar5 = *(undefined1 *)plVar6[param_3];
    bVar2 = ((undefined1 *)plVar6[param_3])[1] != '\0';
  }
  else {
    uVar5 = 0;
    bVar2 = false;
  }
  *(undefined1 *)(param_1 + 0xd0) = uVar5;
  *(bool *)(param_1 + 0xd1) = bVar2;
  FUN_10006d330(auStack_a8,"build://%s");
  operator_new(0x10);
  uVar4 = FUN_100657568();
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  FUN_1006575f4(uVar4,auStack_a8);
  uVar4 = FUN_1006575c4(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_2 + 0x10));
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  iVar3 = FUN_100142c58();
  if ((iVar3 != 0) && (iVar3 = FUN_1004d2524(*(undefined8 *)(param_2 + 0x50)), iVar3 != 0)) {
    FUN_10006d330(auStack_a8,"build://%s");
    operator_new(0x10);
    uVar4 = FUN_100657568();
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
    FUN_1006575f4(uVar4,auStack_a8);
    uVar4 = FUN_1006575c4(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0x58));
    *(undefined8 *)(param_1 + 0xe0) = uVar4;
  }
  FUN_100086e3c(param_1);
  FUN_1000200a0(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100086e3c(long param_1)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x128) = 0x3f800000;
  }
  else {
    plVar1 = *(long **)(param_1 + 0xe8);
    cVar2 = *(char *)(param_1 + 0xd0);
    cVar3 = *(char *)(param_1 + 0xd1);
    lVar4 = FUN_1006575b8(plVar1,**(undefined4 **)(param_1 + 0xf0));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
    lVar4 = *(long *)(*plVar1 + 8);
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
    fVar8 = fVar12 + fVar5;
    if (cVar2 != '\0') {
      fVar8 = fVar5;
      fVar5 = fVar12 + fVar5;
    }
    fVar12 = fVar11 + fVar9;
    if (cVar3 != '\0') {
      fVar12 = fVar9;
      fVar9 = fVar11 + fVar9;
    }
    fVar5 = (1.0 / fVar13) * fVar5;
    fVar17 = 1.0 - fVar9 * (1.0 / fVar15);
    plVar1 = *(long **)(param_1 + 0xd8);
    cVar2 = *(char *)(param_1 + 0xd0);
    cVar3 = *(char *)(param_1 + 0xd1);
    lVar4 = FUN_1006575b8(plVar1,**(undefined4 **)(param_1 + 0xe0));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
    lVar4 = *(long *)(*plVar1 + 8);
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
    fVar7 = fVar11 + fVar6;
    if (cVar2 != '\0') {
      fVar7 = fVar6;
      fVar6 = fVar11 + fVar6;
    }
    fVar11 = fVar9 + fVar10;
    if (cVar3 != '\0') {
      fVar11 = fVar10;
      fVar10 = fVar9 + fVar10;
    }
    fVar6 = (1.0 / fVar14) * fVar6;
    fVar9 = 1.0 - fVar10 * (1.0 / fVar16);
    fVar8 = ((1.0 / fVar14) * fVar7 - fVar6) / ((1.0 / fVar13) * fVar8 - fVar5);
    fVar12 = (1.0 - (fVar9 + fVar11 * (1.0 / fVar16))) / (1.0 - (fVar17 + fVar12 * (1.0 / fVar15)));
    *(float *)(param_1 + 0x108) = fVar8;
    *(float *)(param_1 + 0x10c) = fVar12;
    *(float *)(param_1 + 0x110) = fVar6 - fVar5 * fVar8;
    *(float *)(param_1 + 0x114) = fVar9 - fVar17 * fVar12;
  }
  return;
}




undefined4 FUN_100086fe4(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  lVar3 = *(long *)(param_1 + 0xf0);
  if ((lVar3 != 0) && (**(long **)(param_1 + 0xe8) != 0)) {
    fVar1 = *(float *)(param_1 + 0x90);
    uVar4 = SUB42(fVar1,0);
    uVar5 = (undefined2)((uint)fVar1 >> 0x10);
    if (fVar1 < 0.0) {
      uVar2 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      uVar4 = (undefined2)uVar2;
      uVar5 = (undefined2)((uint)uVar2 >> 0x10);
    }
    if (*(float *)(param_1 + 0x94) < 0.0) {
      NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
    }
    return CONCAT22(uVar5,uVar4);
  }
  return (undefined4)DAT_101dc1cb8;
}




undefined8 FUN_100087034(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  *param_2 = *(long *)(**(long **)(param_1 + 0xe8) + 8) + 0x30;
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    param_2[1] = *(long *)(**(long **)(param_1 + 0xd8) + 8) + 0x30;
    lVar2 = FUN_100142d60();
    param_2[2] = lVar2;
    uVar1 = 3;
  }
  return uVar1;
}




void FUN_100087094(long param_1)

{
  FUN_100087034(param_1 + -0xb8);
  return;
}




undefined8 FUN_10008709c(long param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_158;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar6 = 0;
  }
  else {
    plVar1 = *(long **)(param_1 + 0xe8);
    cVar2 = *(char *)(param_1 + 0xd0);
    cVar3 = *(char *)(param_1 + 0xd1);
    lVar4 = FUN_1006575b8(plVar1,**(undefined4 **)(param_1 + 0xf0));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
    lVar4 = *(long *)(*plVar1 + 8);
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
    fVar10 = fVar11 + fVar7;
    if (cVar2 != '\0') {
      fVar10 = fVar7;
      fVar7 = fVar11 + fVar7;
    }
    fVar11 = fVar8 + fVar9;
    if (cVar3 != '\0') {
      fVar11 = fVar9;
      fVar9 = fVar8 + fVar9;
    }
    fVar7 = (1.0 / fVar12) * fVar7;
    fVar14 = 1.0 - fVar9 * (1.0 / fVar13);
    FUN_1006575b8(*(undefined8 *)(param_1 + 0xd8),**(undefined4 **)(param_1 + 0xe0));
    *param_2 = *(undefined4 *)(param_1 + 0x110);
    param_2[1] = *(undefined4 *)(param_1 + 0x114);
    param_2[2] = *(undefined4 *)(param_1 + 0x108);
    param_2[3] = *(undefined4 *)(param_1 + 0x10c);
    uStack_b8 = 0;
    local_c0 = 0x3f800000;
    local_a8 = 0;
    local_b0 = 0x3f80000000000000;
    uStack_98 = 0x3f800000;
    local_a0 = 0;
    uStack_88 = 0x3f80000000000000;
    local_90 = 0;
    pfVar5 = (float *)FUN_10003d5bc(param_1);
    fVar8 = *(float *)(param_1 + 0x90);
    fVar9 = *(float *)(param_1 + 0x94);
    if ((fVar8 < 0.0) || (fVar9 < 0.0)) {
      if (fVar8 < 0.0) {
        fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 8));
      }
      if (fVar9 < 0.0) {
        fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 10));
      }
    }
    fVar8 = (pfVar5[4] * fVar8) / ((1.0 / fVar12) * fVar10 - fVar7);
    fVar10 = (pfVar5[5] * fVar9) / (1.0 - (fVar14 + fVar11 * (1.0 / fVar13)));
    fVar11 = *pfVar5 - fVar7 * fVar8;
    local_c0 = CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar8,(float)local_c0 * fVar8);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8 * fVar8);
    local_b0 = CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar10,(float)local_b0 * fVar10);
    local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8 * fVar10);
    local_90 = CONCAT44((pfVar5[1] - fVar14 * fVar10) + local_90._4_4_,fVar11 + (float)local_90);
    fVar7 = (float)FUN_100041abc(0,0,*(undefined8 *)(param_1 + 0x100));
    fVar10 = fVar11;
    fVar9 = (float)FUN_100041abc(0x3f800000,0,*(undefined8 *)(param_1 + 0x100));
    fVar8 = fVar10;
    local_f0 = (float)FUN_100041abc(0,0x3f800000,*(undefined8 *)(param_1 + 0x100));
    local_100 = fVar9 - fVar7;
    fStack_fc = fVar10 - fVar11;
    local_f0 = local_f0 - fVar7;
    fStack_ec = fVar8 - fVar11;
    local_f8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0x3f800000;
    local_c8 = 0x3f80000000000000;
    uStack_138 = 0;
    local_140 = 0x3f800000;
    local_128 = 0;
    local_130 = 0x3f80000000000000;
    uStack_118 = 0x3f800000;
    local_120 = 0;
    uStack_108 = 0x3f80000000000000;
    local_110 = 0;
    local_d0 = fVar7;
    fStack_cc = fVar11;
    FUN_100142d7c(&local_188,&local_148);
    local_140 = CONCAT44((float)((ulong)local_140 >> 0x20) * local_148,(float)local_140 * local_148)
    ;
    uStack_138 = CONCAT44(uStack_138._4_4_,(float)uStack_138 * local_148);
    local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * fStack_144,
                         (float)local_130 * fStack_144);
    local_128 = CONCAT44(local_128._4_4_,(float)local_128 * fStack_144);
    local_110 = CONCAT44((float)((ulong)local_110 >> 0x20) + (float)((ulong)local_188 >> 0x20),
                         (float)local_110 + (float)local_188);
    FUN_10002a9fc(&local_188,&local_c0,&local_100);
    FUN_10002a9fc(&local_188,&local_188,&local_140);
    *(undefined8 *)(param_2 + 4) = local_188;
    param_2[6] = local_17c;
    param_2[7] = 0;
    *(undefined8 *)(param_2 + 8) = local_178;
    param_2[10] = local_16c;
    param_2[0xb] = 0;
    *(undefined8 *)(param_2 + 0xc) = local_158;
    param_2[0xe] = local_14c;
    param_2[0xf] = 0;
    uVar6 = 0x10;
  }
  return uVar6;
}




void FUN_1000873c4(long param_1)

{
  FUN_10008709c(param_1 + -0xb8);
  return;
}




void FUN_1000873cc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar1 = 8;
  }
  FUN_1010b3fec(uVar1);
  return;
}




void FUN_1000873e4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = 8;
  }
  FUN_1010b3fec(uVar1);
  return;
}




void FUN_1000873fc(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    pfVar7 = (float *)FUN_10003d5bc();
    local_28 = 0xffff;
    local_26 = 0xff;
    local_25 = (undefined1)(int)(pfVar7[6] * 255.0);
    fVar9 = *(float *)(param_1 + 0x90);
    fVar10 = *(float *)(param_1 + 0x94);
    if ((fVar9 < 0.0) || (fVar10 < 0.0)) {
      if (fVar9 < 0.0) {
        fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 8));
      }
      if (fVar10 < 0.0) {
        fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 10));
      }
    }
    lVar1 = *(long *)(param_1 + 0xf0);
    lVar8 = *(long *)(**(long **)(param_1 + 0xe8) + 8);
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
    fVar11 = 1.0 / (float)*(int *)(lVar8 + 0x48);
    fVar6 = fVar2 + fVar4;
    if (*(char *)(param_1 + 0xd0) != '\0') {
      fVar6 = fVar4;
      fVar4 = fVar2 + fVar4;
    }
    if (*(char *)(param_1 + 0xd1) != '\0') {
      fVar5 = fVar3 + fVar5;
    }
    FUN_100043664(SUB42(*pfVar7,0),pfVar7[1],*pfVar7 + fVar9 * pfVar7[4],
                  pfVar7[1] + fVar10 * pfVar7[5],0,fVar11 * fVar4,
                  SUB42(1.0 - fVar5 * (1.0 / (float)*(int *)(lVar8 + 0x4c)),0),
                  SUB42(fVar11 * fVar6,0),param_2,&local_28,0);
  }
  return;
}




void FUN_100087538(long param_1)

{
  FUN_1000873fc(param_1 + -0xb8);
  return;
}




long * FUN_100087540(long *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  long lVar17;
  undefined4 local_b8 [2];
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  
  puVar12 = (undefined8 *)FUN_10064e20c();
  *puVar12 = &PTR_thunk_FUN_100088020_10144f268;
  puVar12 = puVar12 + 0x17;
  FUN_100269de4(puVar12);
  plVar1 = param_1 + 0x30;
  FUN_1006421a8(plVar1);
  param_1[0x30] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x41;
  FUN_1006421a8(plVar2);
  param_1[0x41] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar3 = (code *)(param_1 + 0x52);
  thunk_FUN_100183e58(pcVar3,1);
  pcVar4 = (code *)(param_1 + 0x158);
  thunk_FUN_100183e58(pcVar4,1);
  pcVar5 = (code *)(param_1 + 0x25e);
  thunk_FUN_100183e58(pcVar5,1);
  pcVar6 = (code *)(param_1 + 0x364);
  thunk_FUN_100183e58(pcVar6,1);
  pcVar7 = (code *)(param_1 + 0x46a);
  thunk_FUN_100183e58(pcVar7,1);
  param_1[0x574] = 0;
  param_1[0x573] = 0;
  param_1[0x572] = 0;
  param_1[0x571] = 0;
  param_1[0x570] = 0;
  *(undefined4 *)(param_1 + 0x575) = DAT_101dc0b88;
  *(undefined1 *)(param_1 + 0x576) = 0xff;
  uVar10 = FUN_1004d2524("HUD_Pings");
  uVar11 = FUN_100015208("HUD_Pings",uVar10,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar11 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar12,1);
  FUN_100642bd8(puVar12,plVar1,1);
  FUN_100642bd8(puVar12,plVar2,1);
  FUN_100642bd8(plVar2,pcVar3,1);
  FUN_100642bd8(plVar2,pcVar4,1);
  FUN_100642bd8(plVar2,pcVar5,1);
  FUN_100642bd8(plVar2,pcVar6,1);
  FUN_100642bd8(plVar2,pcVar7,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  FUN_100183c50(0x3ee66666,pcVar3,&DAT_10115a164);
  uVar10 = DAT_101dbd458;
  local_88 = DAT_101dbd458;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 2;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x53,&local_b0);
  uVar9 = DAT_101dbd484;
  local_88 = DAT_101dbd484;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 2;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x53,&local_b0);
  FUN_1001b495c(0,pcVar3);
  plVar2 = param_1 + 0xec;
  uVar13 = FUN_10011bc4c(2,0);
  FUN_100652cdc(plVar2,uVar13);
  lVar17 = NEON_fmov(0x3fc00000,4);
  if ((*(float *)(param_1 + 0xf5) != 1.5) || (*(float *)((long)param_1 + 0x7ac) != 1.5)) {
    param_1[0xf5] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  fVar15 = (float)FUN_10064e3cc(pcVar3);
  fVar15 = 90.0 / fVar15;
  fVar16 = fVar15 * 1.25;
  FUN_100183c78(fVar15,fVar16,pcVar3);
  FUN_100183c50(0x3ee66666,pcVar5,&DAT_10115a164);
  local_88 = uVar10;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 3;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x25f,&local_b0);
  local_88 = uVar9;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 3;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x25f,&local_b0);
  FUN_1001b495c(0,pcVar5);
  plVar2 = param_1 + 0x2f8;
  uVar13 = FUN_10011bc4c(3,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x301) != 1.5) || (*(float *)((long)param_1 + 0x180c) != 1.5)) {
    param_1[0x301] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar5);
  FUN_100183c50(0x3ee66666,pcVar4,&DAT_10115a164);
  local_88 = uVar10;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 4;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x159,&local_b0);
  local_88 = uVar9;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 4;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x159,&local_b0);
  FUN_1001b495c(0,pcVar4);
  plVar2 = param_1 + 0x1f2;
  uVar13 = FUN_10011bc4c(4,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x1fb) != 1.5) || (*(float *)((long)param_1 + 0xfdc) != 1.5)) {
    param_1[0x1fb] = lVar17;
    FUN_1000200a0(plVar2);
  }
  puVar8 = (uint *)(param_1 + 0x572);
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar4);
  FUN_100183c50(0x3ee66666,pcVar6,&DAT_10115a164);
  local_88 = uVar10;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 5;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x365,&local_b0);
  local_88 = uVar9;
  local_b0 = FUN_100087db0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 5;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x365,&local_b0);
  FUN_1001b495c(0,pcVar6);
  plVar2 = param_1 + 0x3fe;
  uVar13 = FUN_10011bc4c(5,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x407) != 1.5) || (*(float *)((long)param_1 + 0x203c) != 1.5)) {
    param_1[0x407] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar6);
  FUN_100183c50(0x3ee66666,pcVar7,&DAT_10115a164);
  local_88 = uVar10;
  local_b0 = thunk_FUN_10008868c;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 6;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x46b,&local_b0);
  local_88 = uVar9;
  local_b0 = thunk_FUN_10008868c;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 6;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x46b,&local_b0);
  FUN_1001b495c(0,pcVar7);
  plVar2 = param_1 + 0x504;
  uVar13 = FUN_10011bc4c(6,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x50d) != 1.5) || (*(float *)((long)param_1 + 0x286c) != 1.5)) {
    param_1[0x50d] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar7);
  local_b0 = pcVar7;
  FUN_100087dbc(puVar8,&local_b0);
  local_b0 = pcVar6;
  FUN_100087dbc(puVar8,&local_b0);
  local_b0 = pcVar5;
  FUN_100087dbc(puVar8,&local_b0);
  local_b0 = pcVar4;
  FUN_100087dbc(puVar8,&local_b0);
  local_b0 = pcVar3;
  FUN_100087dbc(puVar8,&local_b0);
  if ((int)param_1[0x572] != 0) {
    uVar14 = 0;
    do {
      FUN_100652e14(0x3f000000,*(long *)(param_1[0x573] + uVar14 * 8) + 0x4d0);
      lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      uVar11 = *(uint *)(lVar17 + 0x554);
      if ((uVar11 & 0x7f80) != 0x5f80) {
        *(uint *)(lVar17 + 0x554) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
        FUN_1000200a0(lVar17 + 0x4d0);
        lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      }
      uVar11 = *(uint *)(lVar17 + 0x374);
      if ((uVar11 & 0x7f80) != 0x1980) {
        *(uint *)(lVar17 + 0x374) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
        FUN_1000200a0(lVar17 + 0x2f0);
        lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      }
      FUN_100183ca8(lVar17,1);
      FUN_100183c50(0,*(undefined8 *)(param_1[0x573] + uVar14 * 8),&DAT_10115a164);
      lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      if ((*(float *)(lVar17 + 0x428) != 0.85) || (*(float *)(lVar17 + 0x42c) != 0.85)) {
        *(undefined8 *)(lVar17 + 0x428) = 0x3f59999a3f59999a;
        FUN_1000200a0(lVar17 + 0x3e0);
        lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      }
      if ((*(float *)(lVar17 + 0x638) != 0.85) || (*(float *)(lVar17 + 0x63c) != 0.85)) {
        *(undefined8 *)(lVar17 + 0x638) = 0x3f59999a3f59999a;
        FUN_1000200a0(lVar17 + 0x5f0);
      }
      local_b0 = (code *)FUN_100088a94(plVar1,1);
      FUN_100652cac(local_b0,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_fuzzy_dot");
      switch(uVar14 & 0xffffffff) {
      case 0:
        local_b8[0] = 0xffff74af;
        break;
      case 1:
        local_b8[0] = 0xffdddddd;
        break;
      case 2:
        local_b8[0] = 0xffffdd47;
        break;
      case 3:
        local_b8[0] = 0xff4bf9ff;
        break;
      case 4:
        local_b8[0] = 0xff32ff71;
        break;
      default:
        goto switchD_100087d08_default;
      }
      FUN_100652dd4(local_b0,local_b8,2);
switchD_100087d08_default:
      FUN_100047df4(param_1 + 0x570,&local_b0);
      uVar14 = uVar14 + 1;
    } while (uVar14 < *puVar8);
  }
  FUN_100087e3c(param_1);
  return param_1;
}




void FUN_100087db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10008861c(param_1,param_2,param_5);
  return;
}




void thunk_FUN_10008868c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  lVar1 = FUN_10005fe04();
  if (lVar1 != 0) {
    FUN_10005fe04();
    fVar6 = (float)FUN_100060518();
    if (fVar6 <= 0.0) {
      lVar1 = FUN_1000bdb98();
      plVar2 = (long *)(lVar1 + 0x10);
      plVar3 = (long *)*plVar2;
      plVar4 = plVar2;
      if (plVar3 != (long *)0x0) {
        do {
          if (*(uint *)(plVar3 + 4) >= 0x6b7b66e5) {
            plVar4 = plVar3;
          }
          plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x6b7b66e5];
        } while (plVar3 != (long *)0x0);
        if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x6b7b66e6)) && ((int)plVar4[5] != 0)) {
          lVar1 = 0;
          uVar5 = 0;
          do {
            (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
            uVar5 = uVar5 + 1;
            lVar1 = lVar1 + 0x10;
          } while (uVar5 < *(uint *)(plVar4 + 5));
        }
      }
    }
  }
  return;
}




void FUN_100087dbc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100088a18(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100087e3c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 *local_78;
  
  fVar7 = *(float *)(param_1 + 0x54);
  bVar1 = false;
  if ((*(float *)(param_1 + 600) == *(float *)(param_1 + 0x50)) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x25c)) && !NAN(fVar7))) {
    bVar1 = *(float *)(param_1 + 0x25c) == fVar7;
  }
  if (!bVar1) {
    *(float *)(param_1 + 600) = *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x25c) = fVar7;
    FUN_1000200a0(param_1 + 0x208);
  }
  if ((*(int *)(param_1 + 0x2b90) != 0) &&
     (fVar7 = (float)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0x2b98) + 0x48))(),
     *(int *)(param_1 + 0x2b90) != 0)) {
    uVar5 = 0;
    plVar2 = *(long **)(param_1 + 0x2b98);
    fVar8 = *(float *)(*plVar2 + 0x48);
    while( true ) {
      plVar4 = (long *)plVar2[uVar5];
      fVar6 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
      plVar2 = *(long **)(*(long *)(param_1 + 0x2b98) + uVar5 * 8);
      fVar9 = *(float *)(plVar2 + 9);
      fVar6 = (fVar8 * fVar7 * -0.5 + -5.0) - (float)(int)uVar5 * (fVar6 * fVar9 + 5.0);
      (**(code **)(*plVar2 + 0x48))();
      fVar9 = fVar9 * *(float *)(*(long *)(*(long *)(param_1 + 0x2b98) + uVar5 * 8) + 0x4c) * 0.5;
      bVar1 = false;
      if ((*(float *)(plVar4 + 8) == fVar6) &&
         (bVar1 = false, !NAN(*(float *)((long)plVar4 + 0x44)) && !NAN(fVar9))) {
        bVar1 = *(float *)((long)plVar4 + 0x44) == fVar9;
      }
      if (!bVar1) {
        *(float *)(plVar4 + 8) = fVar6;
        *(float *)((long)plVar4 + 0x44) = fVar9;
        FUN_1000200a0(plVar4);
      }
      local_78 = &DAT_3f0000003f000000;
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_78);
      if (*(int *)(param_1 + 0x2b80) != 0) {
        FUN_10064e47c(0x42b40000,0x42b40000,*(undefined8 *)(*(long *)(param_1 + 0x2b88) + uVar5 * 8)
                     );
        lVar3 = *(long *)(*(long *)(param_1 + 0x2b88) + uVar5 * 8);
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffffffbf;
        lVar3 = *(long *)(*(long *)(param_1 + 0x2b88) + uVar5 * 8);
        if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0x3f80) {
          *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f | 0x3f80;
          FUN_1000200a0();
          lVar3 = *(long *)(*(long *)(param_1 + 0x2b88) + uVar5 * 8);
        }
        FUN_10064e5ec(0,0,lVar3,8,*(undefined8 *)(*(long *)(param_1 + 0x2b98) + uVar5 * 8),8);
      }
      uVar5 = uVar5 + 1;
      if (*(uint *)(param_1 + 0x2b90) <= uVar5) break;
      plVar2 = *(long **)(param_1 + 0x2b98);
    }
  }
  return;
}




long * thunk_FUN_100087540(long *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  long lVar17;
  undefined4 auStack_b8 [2];
  code *pcStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  puVar12 = (undefined8 *)FUN_10064e20c();
  *puVar12 = &PTR_thunk_FUN_100088020_10144f268;
  puVar12 = puVar12 + 0x17;
  FUN_100269de4(puVar12);
  plVar1 = param_1 + 0x30;
  FUN_1006421a8(plVar1);
  param_1[0x30] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x41;
  FUN_1006421a8(plVar2);
  param_1[0x41] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  pcVar3 = (code *)(param_1 + 0x52);
  thunk_FUN_100183e58(pcVar3,1);
  pcVar4 = (code *)(param_1 + 0x158);
  thunk_FUN_100183e58(pcVar4,1);
  pcVar5 = (code *)(param_1 + 0x25e);
  thunk_FUN_100183e58(pcVar5,1);
  pcVar6 = (code *)(param_1 + 0x364);
  thunk_FUN_100183e58(pcVar6,1);
  pcVar7 = (code *)(param_1 + 0x46a);
  thunk_FUN_100183e58(pcVar7,1);
  param_1[0x574] = 0;
  param_1[0x573] = 0;
  param_1[0x572] = 0;
  param_1[0x571] = 0;
  param_1[0x570] = 0;
  *(undefined4 *)(param_1 + 0x575) = DAT_101dc0b88;
  *(undefined1 *)(param_1 + 0x576) = 0xff;
  uVar10 = FUN_1004d2524("HUD_Pings");
  uVar11 = FUN_100015208("HUD_Pings",uVar10,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar11 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,puVar12,1);
  FUN_100642bd8(puVar12,plVar1,1);
  FUN_100642bd8(puVar12,plVar2,1);
  FUN_100642bd8(plVar2,pcVar3,1);
  FUN_100642bd8(plVar2,pcVar4,1);
  FUN_100642bd8(plVar2,pcVar5,1);
  FUN_100642bd8(plVar2,pcVar6,1);
  FUN_100642bd8(plVar2,pcVar7,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  FUN_100183c50(0x3ee66666,pcVar3,&DAT_10115a164);
  uVar10 = DAT_101dbd458;
  uStack_88 = DAT_101dbd458;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 2;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x53,&pcStack_b0);
  uVar9 = DAT_101dbd484;
  uStack_88 = DAT_101dbd484;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 2;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x53,&pcStack_b0);
  FUN_1001b495c(0,pcVar3);
  plVar2 = param_1 + 0xec;
  uVar13 = FUN_10011bc4c(2,0);
  FUN_100652cdc(plVar2,uVar13);
  lVar17 = NEON_fmov(0x3fc00000,4);
  if ((*(float *)(param_1 + 0xf5) != 1.5) || (*(float *)((long)param_1 + 0x7ac) != 1.5)) {
    param_1[0xf5] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  fVar15 = (float)FUN_10064e3cc(pcVar3);
  fVar15 = 90.0 / fVar15;
  fVar16 = fVar15 * 1.25;
  FUN_100183c78(fVar15,fVar16,pcVar3);
  FUN_100183c50(0x3ee66666,pcVar5,&DAT_10115a164);
  uStack_88 = uVar10;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 3;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x25f,&pcStack_b0);
  uStack_88 = uVar9;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 3;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x25f,&pcStack_b0);
  FUN_1001b495c(0,pcVar5);
  plVar2 = param_1 + 0x2f8;
  uVar13 = FUN_10011bc4c(3,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x301) != 1.5) || (*(float *)((long)param_1 + 0x180c) != 1.5)) {
    param_1[0x301] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar5);
  FUN_100183c50(0x3ee66666,pcVar4,&DAT_10115a164);
  uStack_88 = uVar10;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 4;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x159,&pcStack_b0);
  uStack_88 = uVar9;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 4;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x159,&pcStack_b0);
  FUN_1001b495c(0,pcVar4);
  plVar2 = param_1 + 0x1f2;
  uVar13 = FUN_10011bc4c(4,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x1fb) != 1.5) || (*(float *)((long)param_1 + 0xfdc) != 1.5)) {
    param_1[0x1fb] = lVar17;
    FUN_1000200a0(plVar2);
  }
  puVar8 = (uint *)(param_1 + 0x572);
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar4);
  FUN_100183c50(0x3ee66666,pcVar6,&DAT_10115a164);
  uStack_88 = uVar10;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 5;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x365,&pcStack_b0);
  uStack_88 = uVar9;
  pcStack_b0 = FUN_100087db0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 5;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x365,&pcStack_b0);
  FUN_1001b495c(0,pcVar6);
  plVar2 = param_1 + 0x3fe;
  uVar13 = FUN_10011bc4c(5,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x407) != 1.5) || (*(float *)((long)param_1 + 0x203c) != 1.5)) {
    param_1[0x407] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar6);
  FUN_100183c50(0x3ee66666,pcVar7,&DAT_10115a164);
  uStack_88 = uVar10;
  pcStack_b0 = thunk_FUN_10008868c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 6;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x46b,&pcStack_b0);
  uStack_88 = uVar9;
  pcStack_b0 = thunk_FUN_10008868c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 6;
  plStack_a8 = param_1;
  FUN_10001554c(param_1 + 0x46b,&pcStack_b0);
  FUN_1001b495c(0,pcVar7);
  plVar2 = param_1 + 0x504;
  uVar13 = FUN_10011bc4c(6,0);
  FUN_100652cdc(plVar2,uVar13);
  if ((*(float *)(param_1 + 0x50d) != 1.5) || (*(float *)((long)param_1 + 0x286c) != 1.5)) {
    param_1[0x50d] = lVar17;
    FUN_1000200a0(plVar2);
  }
  FUN_100652e14(0x3f000000,plVar2);
  FUN_100183c78(fVar15,fVar16,pcVar7);
  pcStack_b0 = pcVar7;
  FUN_100087dbc(puVar8,&pcStack_b0);
  pcStack_b0 = pcVar6;
  FUN_100087dbc(puVar8,&pcStack_b0);
  pcStack_b0 = pcVar5;
  FUN_100087dbc(puVar8,&pcStack_b0);
  pcStack_b0 = pcVar4;
  FUN_100087dbc(puVar8,&pcStack_b0);
  pcStack_b0 = pcVar3;
  FUN_100087dbc(puVar8,&pcStack_b0);
  if ((int)param_1[0x572] != 0) {
    uVar14 = 0;
    do {
      FUN_100652e14(0x3f000000,*(long *)(param_1[0x573] + uVar14 * 8) + 0x4d0);
      lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      uVar11 = *(uint *)(lVar17 + 0x554);
      if ((uVar11 & 0x7f80) != 0x5f80) {
        *(uint *)(lVar17 + 0x554) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5f80;
        FUN_1000200a0(lVar17 + 0x4d0);
        lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      }
      uVar11 = *(uint *)(lVar17 + 0x374);
      if ((uVar11 & 0x7f80) != 0x1980) {
        *(uint *)(lVar17 + 0x374) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
        FUN_1000200a0(lVar17 + 0x2f0);
        lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      }
      FUN_100183ca8(lVar17,1);
      FUN_100183c50(0,*(undefined8 *)(param_1[0x573] + uVar14 * 8),&DAT_10115a164);
      lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      if ((*(float *)(lVar17 + 0x428) != 0.85) || (*(float *)(lVar17 + 0x42c) != 0.85)) {
        *(undefined8 *)(lVar17 + 0x428) = 0x3f59999a3f59999a;
        FUN_1000200a0(lVar17 + 0x3e0);
        lVar17 = *(long *)(param_1[0x573] + uVar14 * 8);
      }
      if ((*(float *)(lVar17 + 0x638) != 0.85) || (*(float *)(lVar17 + 0x63c) != 0.85)) {
        *(undefined8 *)(lVar17 + 0x638) = 0x3f59999a3f59999a;
        FUN_1000200a0(lVar17 + 0x5f0);
      }
      pcStack_b0 = (code *)FUN_100088a94(plVar1,1);
      FUN_100652cac(pcStack_b0,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_fuzzy_dot");
      switch(uVar14 & 0xffffffff) {
      case 0:
        auStack_b8[0] = 0xffff74af;
        break;
      case 1:
        auStack_b8[0] = 0xffdddddd;
        break;
      case 2:
        auStack_b8[0] = 0xffffdd47;
        break;
      case 3:
        auStack_b8[0] = 0xff4bf9ff;
        break;
      case 4:
        auStack_b8[0] = 0xff32ff71;
        break;
      default:
        goto switchD_100087d08_default;
      }
      FUN_100652dd4(pcStack_b0,auStack_b8,2);
switchD_100087d08_default:
      FUN_100047df4(param_1 + 0x570,&pcStack_b0);
      uVar14 = uVar14 + 1;
    } while (uVar14 < *puVar8);
  }
  FUN_100087e3c(param_1);
  return param_1;
}




void FUN_100088020(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_100088020_10144f268;
  pvVar1 = (void *)param_1[0x571];
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  if ((void *)param_1[0x573] != (void *)0x0) {
    operator_delete__((void *)param_1[0x573]);
    param_1[0x573] = 0;
    param_1[0x572] = 0;
    pvVar1 = (void *)param_1[0x571];
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    param_1[0x570] = 0;
    param_1[0x571] = 0;
  }
  param_1[0x46a] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x548);
  param_1[0x528] = &PTR_FUN_1014a7108;
  param_1[0x53f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x542);
  FUN_10064e2bc(param_1 + 0x528);
  param_1[0x46a] = &PTR_FUN_10145f300;
  param_1[0x504] = &PTR_FUN_1014a7108;
  param_1[0x51b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51e);
  FUN_10064e2bc(param_1 + 0x504);
  param_1[0x4e6] = &PTR_FUN_1014a7108;
  param_1[0x4fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x500);
  FUN_10064e2bc(param_1 + 0x4e6);
  param_1[0x4c8] = &PTR_FUN_1014a7108;
  param_1[0x4df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e2);
  FUN_10064e2bc(param_1 + 0x4c8);
  FUN_10064221c(param_1 + 0x4b7);
  FUN_10003bec8(param_1 + 0x46a);
  param_1[0x364] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x442);
  param_1[0x422] = &PTR_FUN_1014a7108;
  param_1[0x439] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43c);
  FUN_10064e2bc(param_1 + 0x422);
  param_1[0x364] = &PTR_FUN_10145f300;
  param_1[0x3fe] = &PTR_FUN_1014a7108;
  param_1[0x415] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x418);
  FUN_10064e2bc(param_1 + 0x3fe);
  param_1[0x3e0] = &PTR_FUN_1014a7108;
  param_1[0x3f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3fa);
  FUN_10064e2bc(param_1 + 0x3e0);
  param_1[0x3c2] = &PTR_FUN_1014a7108;
  param_1[0x3d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3dc);
  FUN_10064e2bc(param_1 + 0x3c2);
  FUN_10064221c(param_1 + 0x3b1);
  FUN_10003bec8(param_1 + 0x364);
  param_1[0x25e] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x33c);
  param_1[0x31c] = &PTR_FUN_1014a7108;
  param_1[0x333] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x336);
  FUN_10064e2bc(param_1 + 0x31c);
  param_1[0x25e] = &PTR_FUN_10145f300;
  param_1[0x2f8] = &PTR_FUN_1014a7108;
  param_1[0x30f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x312);
  FUN_10064e2bc(param_1 + 0x2f8);
  param_1[0x2da] = &PTR_FUN_1014a7108;
  param_1[0x2f1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2f4);
  FUN_10064e2bc(param_1 + 0x2da);
  param_1[700] = &PTR_FUN_1014a7108;
  param_1[0x2d3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d6);
  FUN_10064e2bc(param_1 + 700);
  FUN_10064221c(param_1 + 0x2ab);
  FUN_10003bec8(param_1 + 0x25e);
  param_1[0x158] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x236);
  param_1[0x216] = &PTR_FUN_1014a7108;
  param_1[0x22d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x230);
  FUN_10064e2bc(param_1 + 0x216);
  param_1[0x158] = &PTR_FUN_10145f300;
  param_1[0x1f2] = &PTR_FUN_1014a7108;
  param_1[0x209] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20c);
  FUN_10064e2bc(param_1 + 0x1f2);
  param_1[0x1d4] = &PTR_FUN_1014a7108;
  param_1[0x1eb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ee);
  FUN_10064e2bc(param_1 + 0x1d4);
  param_1[0x1b6] = &PTR_FUN_1014a7108;
  param_1[0x1cd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1d0);
  FUN_10064e2bc(param_1 + 0x1b6);
  FUN_10064221c(param_1 + 0x1a5);
  FUN_10003bec8(param_1 + 0x158);
  param_1[0x52] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x130);
  param_1[0x110] = &PTR_FUN_1014a7108;
  param_1[0x127] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12a);
  FUN_10064e2bc(param_1 + 0x110);
  param_1[0x52] = &PTR_FUN_10145f300;
  param_1[0xec] = &PTR_FUN_1014a7108;
  param_1[0x103] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x106);
  FUN_10064e2bc(param_1 + 0xec);
  param_1[0xce] = &PTR_FUN_1014a7108;
  param_1[0xe5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe8);
  FUN_10064e2bc(param_1 + 0xce);
  param_1[0xb0] = &PTR_FUN_1014a7108;
  param_1[199] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xca);
  FUN_10064e2bc(param_1 + 0xb0);
  FUN_10064221c(param_1 + 0x9f);
  FUN_10003bec8(param_1 + 0x52);
  FUN_10064221c(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100088454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0xde);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void thunk_FUN_100088020(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_100088020_10144f268;
  pvVar1 = (void *)param_1[0x571];
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  if ((void *)param_1[0x573] != (void *)0x0) {
    operator_delete__((void *)param_1[0x573]);
    param_1[0x573] = 0;
    param_1[0x572] = 0;
    pvVar1 = (void *)param_1[0x571];
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    param_1[0x570] = 0;
    param_1[0x571] = 0;
  }
  param_1[0x46a] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x548);
  param_1[0x528] = &PTR_FUN_1014a7108;
  param_1[0x53f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x542);
  FUN_10064e2bc(param_1 + 0x528);
  param_1[0x46a] = &PTR_FUN_10145f300;
  param_1[0x504] = &PTR_FUN_1014a7108;
  param_1[0x51b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51e);
  FUN_10064e2bc(param_1 + 0x504);
  param_1[0x4e6] = &PTR_FUN_1014a7108;
  param_1[0x4fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x500);
  FUN_10064e2bc(param_1 + 0x4e6);
  param_1[0x4c8] = &PTR_FUN_1014a7108;
  param_1[0x4df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4e2);
  FUN_10064e2bc(param_1 + 0x4c8);
  FUN_10064221c(param_1 + 0x4b7);
  FUN_10003bec8(param_1 + 0x46a);
  param_1[0x364] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x442);
  param_1[0x422] = &PTR_FUN_1014a7108;
  param_1[0x439] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43c);
  FUN_10064e2bc(param_1 + 0x422);
  param_1[0x364] = &PTR_FUN_10145f300;
  param_1[0x3fe] = &PTR_FUN_1014a7108;
  param_1[0x415] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x418);
  FUN_10064e2bc(param_1 + 0x3fe);
  param_1[0x3e0] = &PTR_FUN_1014a7108;
  param_1[0x3f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3fa);
  FUN_10064e2bc(param_1 + 0x3e0);
  param_1[0x3c2] = &PTR_FUN_1014a7108;
  param_1[0x3d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3dc);
  FUN_10064e2bc(param_1 + 0x3c2);
  FUN_10064221c(param_1 + 0x3b1);
  FUN_10003bec8(param_1 + 0x364);
  param_1[0x25e] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x33c);
  param_1[0x31c] = &PTR_FUN_1014a7108;
  param_1[0x333] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x336);
  FUN_10064e2bc(param_1 + 0x31c);
  param_1[0x25e] = &PTR_FUN_10145f300;
  param_1[0x2f8] = &PTR_FUN_1014a7108;
  param_1[0x30f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x312);
  FUN_10064e2bc(param_1 + 0x2f8);
  param_1[0x2da] = &PTR_FUN_1014a7108;
  param_1[0x2f1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2f4);
  FUN_10064e2bc(param_1 + 0x2da);
  param_1[700] = &PTR_FUN_1014a7108;
  param_1[0x2d3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d6);
  FUN_10064e2bc(param_1 + 700);
  FUN_10064221c(param_1 + 0x2ab);
  FUN_10003bec8(param_1 + 0x25e);
  param_1[0x158] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x236);
  param_1[0x216] = &PTR_FUN_1014a7108;
  param_1[0x22d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x230);
  FUN_10064e2bc(param_1 + 0x216);
  param_1[0x158] = &PTR_FUN_10145f300;
  param_1[0x1f2] = &PTR_FUN_1014a7108;
  param_1[0x209] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20c);
  FUN_10064e2bc(param_1 + 0x1f2);
  param_1[0x1d4] = &PTR_FUN_1014a7108;
  param_1[0x1eb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ee);
  FUN_10064e2bc(param_1 + 0x1d4);
  param_1[0x1b6] = &PTR_FUN_1014a7108;
  param_1[0x1cd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1d0);
  FUN_10064e2bc(param_1 + 0x1b6);
  FUN_10064221c(param_1 + 0x1a5);
  FUN_10003bec8(param_1 + 0x158);
  param_1[0x52] = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0x130);
  param_1[0x110] = &PTR_FUN_1014a7108;
  param_1[0x127] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12a);
  FUN_10064e2bc(param_1 + 0x110);
  param_1[0x52] = &PTR_FUN_10145f300;
  param_1[0xec] = &PTR_FUN_1014a7108;
  param_1[0x103] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x106);
  FUN_10064e2bc(param_1 + 0xec);
  param_1[0xce] = &PTR_FUN_1014a7108;
  param_1[0xe5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe8);
  FUN_10064e2bc(param_1 + 0xce);
  param_1[0xb0] = &PTR_FUN_1014a7108;
  param_1[199] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xca);
  FUN_10064e2bc(param_1 + 0xb0);
  FUN_10064221c(param_1 + 0x9f);
  FUN_10003bec8(param_1 + 0x52);
  FUN_10064221c(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10008852c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100088020();
  operator_delete(pvVar1);
  return;
}




void FUN_100088540(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x2b90) != 0) {
    lVar1 = FUN_10005fe04();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_10005fe04();
      uVar3 = FUN_100060518();
    }
    if (*(int *)(param_1 + 0x2b90) != 0) {
      uVar2 = 0;
      do {
        FUN_100183fcc(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x2b98) + uVar2 * 8));
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x2b90));
    }
  }
  return;
}




void FUN_1000885b4(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x2b98);
  (**(code **)(*plVar1 + 0x48))(plVar1[10],0x3f8000003f000000,plVar1);
  FUN_10003d5bc(plVar1);
  return;
}




void thunk_FUN_100088540(void)

{
  FUN_100088540();
  return;
}




void FUN_10008861c(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined4 local_28;
  uint uStack_24;
  
  bVar1 = *(byte *)(param_1 + 0x2bb0);
  uVar2 = FUN_100061db0();
  if (bVar1 == param_3) {
    local_30 = &PTR_FUN_10144d810;
  }
  else {
    local_30 = &PTR_FUN_10144d7f8;
    uStack_24 = param_3;
  }
  local_28 = 0x1d;
  FUN_10005f394(uVar2,&local_30);
  return;
}




void FUN_10008868c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  
  lVar1 = FUN_10005fe04();
  if (lVar1 != 0) {
    FUN_10005fe04();
    fVar6 = (float)FUN_100060518();
    if (fVar6 <= 0.0) {
      lVar1 = FUN_1000bdb98();
      plVar2 = (long *)(lVar1 + 0x10);
      plVar3 = (long *)*plVar2;
      plVar4 = plVar2;
      if (plVar3 != (long *)0x0) {
        do {
          if (*(uint *)(plVar3 + 4) >= 0x6b7b66e5) {
            plVar4 = plVar3;
          }
          plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x6b7b66e5];
        } while (plVar3 != (long *)0x0);
        if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x6b7b66e6)) && ((int)plVar4[5] != 0)) {
          lVar1 = 0;
          uVar5 = 0;
          do {
            (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
            uVar5 = uVar5 + 1;
            lVar1 = lVar1 + 0x10;
          } while (uVar5 < *(uint *)(plVar4 + 5));
        }
      }
    }
  }
  return;
}




void FUN_10008873c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x2ba0) = *param_2;
  *(undefined4 *)(param_1 + 0x2ba8) = *(undefined4 *)(param_2 + 1);
  return;
}




void FUN_100088750(long param_1)

{
  FUN_100269e20(param_1 + 0xb8);
  return;
}




void FUN_100088758(long param_1,undefined4 param_2)

{
  long lVar1;
  
  FUN_100088840();
  *(char *)(param_1 + 0x2bb0) = (char)param_2;
  switch(param_2) {
  case 2:
    param_1 = param_1 + 0x290;
    goto LAB_1000887c4;
  case 3:
    lVar1 = 0x12f0;
    break;
  case 4:
    param_1 = param_1 + 0xac0;
    goto LAB_1000887c4;
  case 5:
    lVar1 = 0x1b20;
    break;
  case 6:
    lVar1 = 0x2350;
    break;
  default:
    goto switchD_100088798_default;
  }
  param_1 = param_1 + lVar1;
LAB_1000887c4:
  FUN_100183c50(0x3f19999a,param_1,&DAT_10115a168);
  FUN_100652e14(0x3fc00000,param_1 + 0x4d0);
  if ((~*(uint *)(param_1 + 0x554) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x554) = *(uint *)(param_1 + 0x554) | 0x7f80;
    FUN_1000200a0(param_1 + 0x4d0);
  }
  if ((~*(uint *)(param_1 + 0x374) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x374) = *(uint *)(param_1 + 0x374) | 0x7f80;
    FUN_1000200a0(param_1 + 0x2f0);
    return;
  }
switchD_100088798_default:
  return;
}




void FUN_100088840(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x2b90) != 0) {
    uVar3 = 0;
    do {
      FUN_100183c50(0,*(undefined8 *)(*(long *)(param_1 + 0x2b98) + uVar3 * 8),&DAT_10115a168);
      FUN_100652e14(0x3f000000,*(long *)(*(long *)(param_1 + 0x2b98) + uVar3 * 8) + 0x4d0);
      lVar2 = *(long *)(*(long *)(param_1 + 0x2b98) + uVar3 * 8);
      uVar1 = *(uint *)(lVar2 + 0x554);
      if ((uVar1 & 0x7f80) != 0x5f80) {
        *(uint *)(lVar2 + 0x554) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5f80;
        FUN_1000200a0(lVar2 + 0x4d0);
        lVar2 = *(long *)(*(long *)(param_1 + 0x2b98) + uVar3 * 8);
      }
      uVar1 = *(uint *)(lVar2 + 0x374);
      if ((uVar1 & 0x7f80) != 0x1980) {
        *(uint *)(lVar2 + 0x374) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1980;
        FUN_1000200a0(lVar2 + 0x2f0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2b90));
  }
  *(undefined1 *)(param_1 + 0x2bb0) = 0xff;
  return;
}




void FUN_10008892c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144f3b0;
  thunk_FUN_100651068(param_1 + 0xde);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_100088a04(long param_1)

{
  return param_1 + 0xb8;
}




long FUN_100088a0c(long param_1)

{
  return param_1 + 0xe0;
}




void FUN_100088a14(void)

{
  return;
}




void FUN_100088a18(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void * FUN_100088a94(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0xf0);
  lVar2 = thunk_FUN_100652c08();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




long * FUN_100088b08(long *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100088ce4_10144f530;
  puVar1 = puVar1 + 0x17;
  FUN_100269de4(puVar1);
  FUN_10064e264(param_1 + 0x30);
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x49) = param_2;
  *(undefined1 *)((long)param_1 + 0x249) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x30,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 8;
  return param_1;
}




long * thunk_FUN_100088b08(long *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100088ce4_10144f530;
  puVar1 = puVar1 + 0x17;
  FUN_100269de4(puVar1);
  FUN_10064e264(param_1 + 0x30);
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x49) = param_2;
  *(undefined1 *)((long)param_1 + 0x249) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x30,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 8;
  return param_1;
}




void FUN_100088bb4(long param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x249) = param_2;
  iVar1 = FUN_1001312f4();
  if (iVar1 != 0) {
    FUN_100088c0c(param_1);
    uVar2 = FUN_1000bdb98();
    FUN_1004e18bc(uVar2,param_1,0x2d56d876,FUN_100088cb8,0);
    return;
  }
  return;
}




void FUN_100088c0c(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_d0 [24];
  long local_b8 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_1001312f4();
  if (iVar1 != 0) {
    FUN_1003a8de8(auStack_d0);
    uVar2 = FUN_1003a6ce4(auStack_d0,local_b8,0x10,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      plVar4 = local_b8;
      do {
        if (*plVar4 != 0) {
          FUN_1000893a8(param_1);
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    FUN_1000891fc(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100088cb8(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10008a174(param_1,in_stack_00000000);
  return;
}




void FUN_100088ce4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_100088ce4_10144f530;
  iVar1 = FUN_1001312f4();
  if (iVar1 != 0) {
    uVar2 = FUN_1000bdb98();
    FUN_1004e1b58(uVar2,param_1);
  }
  FUN_100088d54(param_1);
  if ((void *)param_1[0x48] != (void *)0x0) {
    operator_delete__((void *)param_1[0x48]);
    param_1[0x48] = 0;
    param_1[0x47] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100088d54(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x238);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x240);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x240);
        uVar2 = *(uint *)(param_1 + 0x238);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  return;
}




void thunk_FUN_100088ce4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_100088ce4_10144f530;
  iVar1 = FUN_1001312f4();
  if (iVar1 != 0) {
    uVar2 = FUN_1000bdb98();
    FUN_1004e1b58(uVar2,param_1);
  }
  FUN_100088d54(param_1);
  if ((void *)param_1[0x48] != (void *)0x0) {
    operator_delete__((void *)param_1[0x48]);
    param_1[0x48] = 0;
    param_1[0x47] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100088dbc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100088ce4();
  operator_delete(pvVar1);
  return;
}




void FUN_100088dd0(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  uVar5 = FUN_1001312f4();
  if ((uVar5 & 1) != 0) {
    FUN_100088f04(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x238) == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    do {
      iVar4 = FUN_100088f60(param_1,*(undefined8 *)(*(long *)(param_2 + 0x240) + uVar8 * 8));
      uVar3 = 0;
      if (iVar4 == 0) {
        uVar3 = 1 << (ulong)((uint)uVar8 & 0x1f);
      }
      uVar7 = uVar3 | uVar7;
      uVar8 = uVar8 + 1;
      uVar5 = (ulong)*(uint *)(param_2 + 0x238);
    } while (uVar8 < uVar5);
    if ((int)*(uint *)(param_2 + 0x238) < 0) {
      return;
    }
    uVar7 = uVar7 & 0xffff;
  }
  bVar6 = false;
  lVar10 = uVar5 << 3;
  do {
    if ((uVar7 >> (ulong)((uint)uVar5 & 0x1f) & 1) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x240) + lVar10);
      plVar9 = (long *)*puVar2;
      FUN_10008a424(param_2 + 0x238,puVar2,puVar2 + 1);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      bVar6 = true;
    }
    lVar10 = lVar10 + -8;
    bVar1 = 0 < (long)uVar5;
    uVar5 = uVar5 - 1;
  } while (bVar1);
  if (!bVar6) {
    return;
  }
  FUN_1000891fc(param_2);
  return;
}




void FUN_100088f04(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1001312f4();
  if ((iVar1 != 0) && (*(int *)(param_2 + 0x238) != 0)) {
    uVar2 = 0;
    do {
      FUN_100088f60(param_1,*(undefined8 *)(*(long *)(param_2 + 0x240) + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 0x238));
  }
  return;
}




ulong FUN_100088f60(float param_1,long param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  
  lVar8 = *(long *)(*(long *)(param_2 + 0xd98) + 0x40);
  fVar10 = *(float *)(lVar8 + 0x38) + *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0);
  NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar8 + 0x1a0),DAT_101dc50b0);
  FUN_1002fb314(*(float *)(lVar8 + 0x308) / DAT_101dc4ff0,DAT_101dc4ff0,DAT_101dc4ff0,DAT_101dc50b0,
                0x3f800000,param_2 + 0x770);
  lVar8 = *(long *)(param_2 + 0xd98);
  uVar5 = FUN_10034f06c();
  iVar3 = FUN_1003dcd70(*(undefined8 *)(lVar8 + 0x80),uVar5);
  uVar9 = 4;
  if (iVar3 == 0) {
    uVar9 = 0;
  }
  *(uint *)(param_2 + 0x7f4) = *(uint *)(param_2 + 0x7f4) & 0xfffffffb | uVar9;
  *(uint *)(param_2 + 0x704) = *(uint *)(param_2 + 0x704) & 0xfffffffb | uVar9;
  uVar6 = FUN_1003a2d9c(*(undefined8 *)(param_2 + 0xd98));
  if (((uVar6 & 1) != 0) || (iVar3 = FUN_10034cb58(), iVar3 != 0)) {
    for (lVar8 = *(long *)(*(long *)(param_2 + 0xd98) + 0x18); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + 0x20)) {
      if (*(int *)(*(long *)(lVar8 + 8) + 0xa4) == DAT_10184dab8) {
        iVar3 = FUN_100346244(lVar8);
        if (iVar3 != 0) {
          uVar9 = 0;
          goto LAB_100089060;
        }
        break;
      }
    }
  }
  goto LAB_10008914c;
  while( true ) {
    uVar9 = uVar9 + 1;
    uVar4 = FUN_100346244(lVar8);
    if (uVar4 <= uVar9) break;
LAB_100089060:
    iVar3 = FUN_1003e1178(lVar8,uVar9);
    if (iVar3 != 0) {
      iVar3 = FUN_1003b2aa0(lVar8,uVar9);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else {
        iVar3 = FUN_1003b2a7c(lVar8,uVar9);
        bVar2 = iVar3 != 0;
      }
      iVar3 = FUN_1003a2edc(lVar8,uVar9);
      uVar4 = *(uint *)(param_2 + 0xc34);
      uVar7 = uVar4 >> 7 & 0xff;
      uVar9 = 0;
      if (iVar3 != 0) {
        uVar9 = 0xff;
      }
      if (uVar7 != uVar9) {
        *(uint *)(param_2 + 0xc34) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar9 << 7;
        FUN_1000200a0(param_2 + 0xbb0);
        uVar7 = *(uint *)(param_2 + 0xc34) >> 7 & 0xff;
      }
      uVar9 = *(uint *)(param_2 + 0xd24);
      if (uVar7 != (uVar9 >> 7 & 0xff)) {
        *(uint *)(param_2 + 0xd24) = uVar9 & 0xffff8000 | uVar9 & 0x7f | uVar7 << 7;
        FUN_1000200a0(param_2 + 0xca0);
      }
      puVar1 = &DAT_10115a168;
      if (!(bool)(bVar2 & iVar3 - 1U < 2)) {
        puVar1 = &DAT_10115a164;
      }
      FUN_100652dd4(param_2 + 0xbb0,puVar1,2);
      break;
    }
  }
LAB_10008914c:
  iVar3 = FUN_1001312f4();
  uVar6 = FUN_100089d6c(param_2);
  if (iVar3 == 0) {
    return uVar6;
  }
  if (((uVar6 & 1) != 0) || (0.0 < *(float *)(param_2 + 0xd90))) {
    if ((~*(uint *)(param_2 + 0x214) & 0x7f80) == 0) goto LAB_1000891b0;
    uVar9 = *(uint *)(param_2 + 0x214) | 0x7f80;
  }
  else {
    uVar9 = *(uint *)(param_2 + 0x214);
    if ((uVar9 & 0x7f80) == 0xc80) goto LAB_1000891b0;
    uVar9 = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0xc80;
  }
  *(uint *)(param_2 + 0x214) = uVar9;
  FUN_1000200a0(param_2 + 400);
LAB_1000891b0:
  if (*(float *)(param_2 + 0xd90) <= 0.0) {
    FUN_100089e40(param_2,0);
  }
  else {
    FUN_100089e40(param_2,1);
    *(float *)(param_2 + 0xd90) = *(float *)(param_2 + 0xd90) - param_1;
  }
  return uVar6;
}




void FUN_1000891fc(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  ulong uVar11;
  
  iVar3 = FUN_1001312f4();
  fVar9 = 8.0;
  uVar11 = 0x41000000;
  if (iVar3 == 0) {
    fVar9 = 3.0;
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  bVar1 = *(byte *)((long)param_1 + 0x249);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar7 = *(float *)(param_1 + 10);
  fVar12 = *(float *)((long)param_1 + 0x54);
  if (*(char *)((long)param_1 + 0x249) != '\0') {
    uVar5 = 0;
    fVar6 = (float)NEON_fminnm((fVar6 - (float)(int)(bVar1 - 1) * fVar9) / (float)(uint)bVar1,
                               (int)uVar11);
    fVar13 = fVar6 * 0.5;
    do {
      fVar10 = (float)uVar11;
      if (*(uint *)(param_1 + 0x47) <= uVar5) {
        return;
      }
      lVar4 = *(long *)(param_1[0x48] + uVar5 * 8);
      if (lVar4 != 0) {
        fVar8 = (float)FUN_100652e60(lVar4 + 0xa0);
        fVar10 = fVar6 / fVar10;
        bVar2 = false;
        if ((*(float *)(lVar4 + 0x48) == fVar6 / fVar8) &&
           (bVar2 = false, !NAN(*(float *)(lVar4 + 0x4c)) && !NAN(fVar10))) {
          bVar2 = *(float *)(lVar4 + 0x4c) == fVar10;
        }
        if (!bVar2) {
          *(float *)(lVar4 + 0x48) = fVar6 / fVar8;
          *(float *)(lVar4 + 0x4c) = fVar10;
          FUN_1000200a0(lVar4);
        }
        if (uVar5 == 0) {
          fVar8 = 0.0;
          fVar10 = fVar13;
        }
        else {
          fVar8 = 1.0;
          fVar10 = *(float *)(*(long *)(param_1[0x48] + (ulong)((int)uVar5 - 1) * 8) + 0x40);
        }
        fVar8 = fVar9 + fVar6 * fVar8 + ABS(fVar10);
        fVar10 = -fVar8;
        if (fVar7 != 1.0 || fVar12 != 0.0) {
          fVar10 = fVar8;
        }
        uVar11 = (ulong)(uint)*(float *)(lVar4 + 0x40);
        bVar2 = false;
        if ((*(float *)(lVar4 + 0x40) == fVar10) &&
           (bVar2 = false, !NAN(*(float *)(lVar4 + 0x44)) && !NAN(fVar13))) {
          bVar2 = *(float *)(lVar4 + 0x44) == fVar13;
        }
        if (!bVar2) {
          *(float *)(lVar4 + 0x40) = fVar10;
          *(float *)(lVar4 + 0x44) = fVar13;
          FUN_1000200a0(lVar4);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)((long)param_1 + 0x249));
  }
  return;
}




void thunk_FUN_1000891fc(void)

{
  FUN_1000891fc();
  return;
}




void FUN_100089364(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_1001312f4();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1000893a8(param_1,param_2);
  FUN_1000891fc(param_1);
  return;
}




void FUN_1000893a8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  long local_38;
  
  uVar2 = FUN_10034cb58();
  if (((((uVar2 & 1) == 0) && (uVar1 = FUN_100345bbc(param_2), uVar1 == *(byte *)(param_1 + 0x248)))
      && ((*(byte *)(param_2 + 0x2f4) >> 1 & 1) != 0)) &&
     (*(uint *)(param_1 + 0x238) < (uint)*(byte *)(param_1 + 0x249))) {
    pvVar3 = operator_new(0xdc0);
    local_38 = FUN_10008944c(pvVar3,param_2);
    *(uint *)(local_38 + 0x84) = *(uint *)(local_38 + 0x84) | 4;
    FUN_10008a0f4(param_1 + 0x238,&local_38);
    FUN_100642bd8(param_1 + 0x180,local_38,1);
  }
  return;
}




long * FUN_10008944c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined4 local_a4;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar15 = (undefined8 *)FUN_1006421a8();
  *puVar15 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_100129f90(puVar15 + 0x11);
  *param_1 = (long)&PTR_thunk_FUN_10008a258_10144f678;
  param_1[0x11] = (long)&PTR_FUN_10144f790;
  plVar1 = param_1 + 0x14;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x32;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x50;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x6e;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x94;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xb2;
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0xd0;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0xee;
  thunk_FUN_1002fb130(plVar8,1);
  plVar9 = param_1 + 0x176;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x194;
  thunk_FUN_100652c08(plVar10);
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  FUN_1004e313c(param_1 + 0x1b4);
  FUN_1004e313c(param_1 + 0x1b6);
  param_1[0x1b3] = param_2;
  uVar16 = FUN_10034e42c(*(undefined4 *)(param_2 + 0x260));
  FUN_1000153b4(param_1 + 0x1b6,uVar16);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  iVar13 = FUN_100345bbc(param_2);
  iVar14 = FUN_10034f06c();
  bVar12 = iVar13 == iVar14;
  iVar13 = FUN_10034ee90();
  if ((iVar13 != -1) && (lVar17 = FUN_100345d90(), lVar17 != 0)) {
    iVar13 = FUN_100345bbc();
    iVar14 = FUN_100345bbc(param_2);
    bVar12 = iVar13 == iVar14;
  }
  puVar11 = &DAT_101dc4e78;
  if (!bVar12) {
    puVar11 = &DAT_101dc4e7c;
  }
  local_a4 = *puVar11;
  FUN_100652ca4(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar16 = FUN_1004654a0(param_2);
  FUN_100061e08(plVar1,uVar16);
  fVar20 = *(float *)(param_1 + 0x1e);
  if ((fVar20 != 0.5) || (fVar20 = *(float *)((long)param_1 + 0xf4), fVar20 != 0.5)) {
    param_1[0x1e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar2,&local_a4,2);
  FUN_10065317c(plVar1);
  fVar21 = fVar20 + 10.0;
  FUN_100652e60(plVar2);
  fVar21 = fVar21 / fVar20;
  if ((*(float *)(param_1 + 0x3b) != fVar21) || (*(float *)((long)param_1 + 0x1dc) != fVar21)) {
    *(float *)(param_1 + 0x3b) = fVar21;
    *(float *)((long)param_1 + 0x1dc) = fVar21;
    FUN_1000200a0(plVar2);
  }
  uVar18 = *(uint *)((long)param_1 + 0x214);
  if ((uVar18 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x214) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0xc80;
    FUN_1000200a0(plVar2);
  }
  fVar20 = *(float *)(param_1 + 0x3c);
  if ((fVar20 != 0.5) || (fVar20 = *(float *)((long)param_1 + 0x1e4), fVar20 != 0.5)) {
    param_1[0x3c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_10065317c(plVar1);
  fVar21 = fVar20;
  FUN_100652e60(plVar2);
  fVar20 = fVar20 / fVar21;
  if ((*(float *)(param_1 + 0x59) != fVar20) || (*(float *)((long)param_1 + 0x2cc) != fVar20)) {
    *(float *)(param_1 + 0x59) = fVar20;
    *(float *)((long)param_1 + 0x2cc) = fVar20;
    FUN_1000200a0(plVar3);
  }
  uVar18 = *(uint *)((long)param_1 + 0x304);
  if ((uVar18 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x304) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
    uVar18 = *(uint *)((long)param_1 + 0x304);
  }
  *(uint *)((long)param_1 + 0x304) = uVar18 & 0xfffffffb;
  if ((*(float *)(param_1 + 0x5a) != 0.5) || (*(float *)((long)param_1 + 0x2d4) != 0.5)) {
    param_1[0x5a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  uVar16 = FUN_10065317c(plVar1);
  fVar20 = (float)FUN_10065317c(plVar1);
  FUN_10064e47c(uVar16,fVar20 * 0.1,plVar8);
  FUN_1002fb314(0,plVar8);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff94d70f);
  FUN_100652dd4(param_1 + 0x123,&local_a0,2);
  if (bVar12) {
    uVar18 = *(uint *)((long)param_1 + 0x7f4);
LAB_1000898d8:
    uVar19 = 4;
  }
  else {
    iVar13 = FUN_10034cb58();
    uVar18 = *(uint *)((long)param_1 + 0x7f4);
    if (iVar13 != 0) goto LAB_1000898d8;
    uVar19 = 0;
  }
  *(uint *)((long)param_1 + 0x7f4) = uVar19 | uVar18 & 0xfffffffb;
  fVar21 = 0.0;
  FUN_10064e5ec(0,plVar8,6,plVar1,6);
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x704) =
       *(uint *)((long)param_1 + 0x704) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x704) & 3 | (*(uint *)((long)param_1 + 0x7f4) >> 2 & 1) << 2;
  fVar20 = (float)FUN_10064e3cc(plVar8);
  local_a0 = (code *)CONCAT44(fVar21 + 10.0,fVar20 + 10.0);
  FUN_10064e48c(plVar7,&local_a0);
  FUN_10064e5ec(0,0,plVar7,8,plVar8,8);
  if (bVar12) {
    uVar18 = *(uint *)((long)param_1 + 0xc34);
  }
  else {
    iVar13 = FUN_10034cb58();
    uVar18 = *(uint *)((long)param_1 + 0xc34);
    if (iVar13 == 0) {
      uVar19 = 0;
      goto LAB_1000899b4;
    }
  }
  uVar19 = 4;
LAB_1000899b4:
  *(uint *)((long)param_1 + 0xc34) = uVar19 | uVar18 & 0xfffffffb;
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"plaque_ult_pip");
  fVar20 = (float)DAT_101dc1cb8;
  if ((*(float *)(param_1 + 0x180) != (float)DAT_101dc1cb8) ||
     (fVar20 = DAT_101dc1cb8._4_4_, *(float *)((long)param_1 + 0xc04) != DAT_101dc1cb8._4_4_)) {
    param_1[0x180] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar9);
  }
  fVar21 = (float)FUN_100652e60(plVar1);
  local_a0 = (code *)CONCAT44(fVar20 * 0.2,fVar21 * 0.2);
  FUN_10064e48c(plVar9,&local_a0);
  FUN_10064e5ec(0,0,plVar9,0,plVar1,0);
  *(uint *)((long)param_1 + 0xd24) =
       *(uint *)((long)param_1 + 0xd24) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xd24) & 3 | (*(uint *)((long)param_1 + 0xc34) >> 2 & 1) << 2;
  FUN_100652cac(plVar10,PTR_s_build___HUDPartsCommon_atlas_10184e098,"plaque_ult_pip");
  FUN_100652dd4(plVar10,&DAT_10115a164,2);
  fVar20 = (float)DAT_101dc1cb8;
  if ((*(float *)(param_1 + 0x19e) != (float)DAT_101dc1cb8) ||
     (fVar20 = DAT_101dc1cb8._4_4_, *(float *)((long)param_1 + 0xcf4) != DAT_101dc1cb8._4_4_)) {
    param_1[0x19e] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar10);
  }
  fVar21 = (float)FUN_100652e60(plVar9);
  local_a0 = (code *)CONCAT44(fVar20 + 5.0,fVar21 + 5.0);
  FUN_10064e48c(plVar10,&local_a0);
  FUN_10064e5ec(0,0,plVar10,8,plVar9,8);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&DAT_10115a168);
  fVar20 = *(float *)(param_1 + 0x78);
  if ((fVar20 != 0.5) || (fVar20 = *(float *)((long)param_1 + 0x3c4), fVar20 != 0.5)) {
    param_1[0x78] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  iVar13 = FUN_1001312f4();
  if (iVar13 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
    *(uint *)((long)param_1 + 0x124) = *(uint *)((long)param_1 + 0x124) | 0x10;
    local_78 = DAT_101dbd458;
    local_a0 = thunk_FUN_100089e90;
    local_88 = 0;
    uStack_80 = 0;
    local_90 = 0;
    plStack_98 = param_1;
    FUN_10001554c(param_1 + 0x15,&local_a0);
    local_78 = DAT_101dbd484;
    local_a0 = thunk_FUN_100089e90;
    local_88 = 0;
    uStack_80 = 0;
    local_90 = 0;
    plStack_98 = param_1;
    FUN_10001554c(param_1 + 0x15,&local_a0);
    FUN_10065317c(plVar1);
    fVar21 = fVar20 + 14.0;
    FUN_100652e60(plVar2);
    fVar21 = fVar21 / fVar20;
    fVar20 = *(float *)(param_1 + 0x3b);
    if ((fVar20 != fVar21) || (fVar20 = *(float *)((long)param_1 + 0x1dc), fVar20 != fVar21)) {
      *(float *)(param_1 + 0x3b) = fVar21;
      *(float *)((long)param_1 + 0x1dc) = fVar21;
      FUN_1000200a0(plVar2);
    }
    FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250,&DAT_10115a168);
    FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"speaker_icon");
    fVar21 = (float)FUN_10065317c(plVar2);
    fVar20 = fVar20 * 0.4;
    if ((*(float *)(param_1 + 0x9c) != fVar21 * 0.4) ||
       (*(float *)((long)param_1 + 0x4e4) != fVar20)) {
      *(float *)(param_1 + 0x9c) = fVar21 * 0.4;
      *(float *)((long)param_1 + 0x4e4) = fVar20;
      FUN_1000200a0(plVar5);
    }
    (**(code **)(param_1[0x94] + 0x28))(plVar5,&DAT_101873a40);
    *(uint *)((long)param_1 + 0x524) = *(uint *)((long)param_1 + 0x524) & 0xfffffffb;
    FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"voip_mute");
    fVar21 = (float)FUN_10065317c(plVar2);
    if ((*(float *)(param_1 + 0xba) != fVar21 * 0.4) ||
       (*(float *)((long)param_1 + 0x5d4) != fVar20 * 0.4)) {
      *(float *)(param_1 + 0xba) = fVar21 * 0.4;
      *(float *)((long)param_1 + 0x5d4) = fVar20 * 0.4;
      FUN_1000200a0(plVar6);
    }
    (**(code **)(param_1[0xb2] + 0x28))(plVar6,&DAT_101873a40);
    *(uint *)((long)param_1 + 0x614) = *(uint *)((long)param_1 + 0x614) & 0xfffffffb;
  }
  return param_1;
}




void thunk_FUN_100089e90(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_100126b8c();
  if ((iVar1 != 0) && (iVar1 = FUN_100129b4c(), iVar1 != 0)) {
    lVar3 = FUN_100129ae8(param_1 + 0xdb0);
    if ((lVar3 != 0) && (*(long *)(param_1 + 0xd98) != 0)) {
      iVar1 = FUN_10034f06c();
      iVar2 = FUN_100345bbc(*(undefined8 *)(param_1 + 0xd98));
      if (iVar1 == iVar2) {
        FUN_100129e54(param_1 + 0xdb0,*(char *)(lVar3 + 0x20) == '\0');
        *(uint *)(param_1 + 0x614) =
             *(uint *)(param_1 + 0x614) & 0xfffffffb | (uint)*(byte *)(lVar3 + 0x20) << 2;
      }
    }
  }
  return;
}




undefined8 FUN_100089d6c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xd98) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0xd98) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184e110) {
        FUN_1003e1f90();
        FUN_1004e38ac(param_1 + 0xda0,"%d");
        FUN_1006513c0(param_1 + 0x370,param_1 + 0xda0);
        *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) | 4;
        *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) | 4;
        return 1;
      }
    }
    *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfffffffb;
  }
  return 0;
}




void FUN_100089e40(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 4;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x524) = *(uint *)(param_1 + 0x524) & 0xfffffffb | uVar2;
  uVar1 = *(uint *)(param_1 + 0x214);
  uVar2 = 0xff;
  if (param_2 == 0) {
    uVar2 = 0x66;
  }
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0x214) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_1000200a0(param_1 + 400);
  return;
}




void FUN_100089e90(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_100126b8c();
  if ((iVar1 != 0) && (iVar1 = FUN_100129b4c(), iVar1 != 0)) {
    lVar3 = FUN_100129ae8(param_1 + 0xdb0);
    if ((lVar3 != 0) && (*(long *)(param_1 + 0xd98) != 0)) {
      iVar1 = FUN_10034f06c();
      iVar2 = FUN_100345bbc(*(undefined8 *)(param_1 + 0xd98));
      if (iVar1 == iVar2) {
        FUN_100129e54(param_1 + 0xdb0,*(char *)(lVar3 + 0x20) == '\0');
        *(uint *)(param_1 + 0x614) =
             *(uint *)(param_1 + 0x614) & 0xfffffffb | (uint)*(byte *)(lVar3 + 0x20) << 2;
      }
    }
  }
  return;
}




void FUN_100089f20(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004e3654(param_2,param_1 + 0xdb0);
  if (iVar1 != 0) {
    FUN_100089f60(param_1);
    return;
  }
  return;
}




void FUN_100089f60(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_1001312f4();
  if (((iVar2 != 0) && (iVar2 = FUN_100126b8c(), iVar2 != 0)) &&
     (iVar2 = thunk_FUN_10052bc30(), iVar2 != 0)) {
    lVar1 = param_1 + 0xdb0;
    iVar2 = FUN_100129e70(lVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_100129e40();
      iVar3 = FUN_100129f14(lVar1);
      uVar4 = *(uint *)(param_1 + 0x614);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x614) = uVar4 & 0xfffffffb;
        if (iVar3 == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0xd90) = 0x3f000000;
        return;
      }
    }
    else {
      FUN_100129f14(lVar1);
      uVar4 = *(uint *)(param_1 + 0x614);
    }
    *(uint *)(param_1 + 0x614) = uVar4 | 4;
  }
  return;
}




void FUN_100089ffc(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004e3654(param_2,param_1 + 0xd28);
  if (iVar1 != 0) {
    FUN_100089f60(param_1 + -0x88);
    return;
  }
  return;
}




void FUN_10008a03c(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004e3654(param_2,param_1 + 0xdb0);
  if (((uVar2 & 1) == 0) &&
     ((*(long *)(param_1 + 0xd98) == 0 ||
      (iVar1 = FUN_1004e3654(param_2,param_1 + 0xdb0), iVar1 == 0)))) {
    return;
  }
  FUN_10008a0a4(param_1);
  return;
}




void FUN_10008a0a4(long param_1)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x614) = *(uint *)(param_1 + 0x614) & 0xfffffffb;
  uVar1 = *(uint *)(param_1 + 0x214);
  if ((uVar1 & 0x7f80) == 0x3300) {
    return;
  }
  *(uint *)(param_1 + 0x214) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3300;
  FUN_1000200a0(param_1 + 400);
  return;
}




void FUN_10008a0e0(long param_1)

{
  FUN_10008a03c(param_1 + -0x88);
  return;
}




void thunk_FUN_100089f60(void)

{
  FUN_100089f60();
  return;
}




void FUN_10008a0ec(long param_1)

{
  FUN_100089f60(param_1 + -0x88);
  return;
}




void FUN_10008a0f4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10008a490(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10008a174(long param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  iVar3 = FUN_1001312f4();
  if ((iVar3 == 0) || (uVar4 = FUN_10034cb58(), (uVar4 & 1) != 0)) {
    return;
  }
  lVar5 = FUN_100345d90(param_2);
  if (lVar5 != 0) {
    uVar4 = (ulong)*(uint *)(param_1 + 0x238);
    if (*(uint *)(param_1 + 0x238) != 0) {
      bVar2 = false;
      plVar6 = *(long **)(param_1 + 0x240);
      do {
        if (*plVar6 != 0) {
          lVar7 = *(long *)(*plVar6 + 0xd98);
          piVar1 = &DAT_101159f80;
          if (lVar7 != 0) {
            piVar1 = (int *)(lVar7 + 0x260);
          }
          bVar2 = (bool)(*piVar1 == (int)param_2 | bVar2);
        }
        plVar6 = plVar6 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if (bVar2) goto LAB_10008a20c;
    }
    FUN_1000893a8(param_1,lVar5);
  }
LAB_10008a20c:
  FUN_1000891fc(param_1);
  return;
}




void thunk_FUN_10008a258(void)

{
  FUN_10008a258();
  return;
}




void FUN_10008a220(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10008a258();
  operator_delete(pvVar1);
  return;
}




void FUN_10008a234(long param_1)

{
  FUN_10008a258(param_1 + -0x88);
  return;
}




void FUN_10008a23c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10008a258(param_1 + -0x88);
  operator_delete(pvVar1);
  return;
}




void FUN_10008a254(void)

{
  return;
}




void FUN_10008a258(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10008a258_10144f678;
  param_1[0x11] = &PTR_FUN_10144f790;
  if ((void *)param_1[0x1b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b7]);
    param_1[0x1b7] = 0;
    param_1[0x1b6] = 0;
  }
  if ((void *)param_1[0x1b5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b5]);
    param_1[0x1b5] = 0;
    param_1[0x1b4] = 0;
  }
  param_1[0x194] = &PTR_FUN_1014a7108;
  param_1[0x1ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ae);
  FUN_10064e2bc(param_1 + 0x194);
  param_1[0x176] = &PTR_FUN_1014a7108;
  param_1[0x18d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 400);
  FUN_10064e2bc(param_1 + 0x176);
  param_1[0xee] = &PTR_FUN_10148cfa0;
  FUN_10064e2bc(param_1 + 0x141);
  param_1[0x123] = &PTR_FUN_1014a7108;
  param_1[0x13a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13d);
  FUN_10064e2bc(param_1 + 0x123);
  param_1[0x105] = &PTR_FUN_1014a7108;
  param_1[0x11c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11f);
  FUN_10064e2bc(param_1 + 0x105);
  FUN_10064e2bc(param_1 + 0xee);
  param_1[0xd0] = &PTR_FUN_1014a7108;
  param_1[0xe7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xea);
  FUN_10064e2bc(param_1 + 0xd0);
  param_1[0xb2] = &PTR_FUN_1014a7108;
  param_1[0xc9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcc);
  FUN_10064e2bc(param_1 + 0xb2);
  param_1[0x94] = &PTR_FUN_1014a7108;
  param_1[0xab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xae);
  FUN_10064e2bc(param_1 + 0x94);
  thunk_FUN_100651068(param_1 + 0x6e);
  param_1[0x50] = &PTR_FUN_1014a7108;
  param_1[0x67] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6a);
  FUN_10064e2bc(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_1014a7108;
  param_1[0x49] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x32);
  param_1[0x14] = &PTR_FUN_1014a7108;
  param_1[0x2b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x14);
  FUN_10012a00c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10008a424(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_10008a490(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10008a50c(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_10008a538(void)

{
  if ((DAT_10184e118 & 1) == 0) {
    DAT_10184e110 = DAT_101872e38;
    DAT_10184e118 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10008a564(void)

{
  DAT_101dc4e70 = 0xff;
  DAT_101dc4e72 = 0xffff;
  DAT_101dc4e74 = 0xffff;
  DAT_101dc4e78 = 0xffbc9c44;
  DAT_101dc4e7c = 0xff1166f2;
  DAT_101dc4e80 = 0xffe0e0e0;
  DAT_101dc4e84 = 0xffa0a0a0;
  DAT_101dc4e88 = 0xff8c8c8c;
  DAT_101dc4e8c = 0xff322213;
  DAT_101dc4e90 = 0xff091911;
  DAT_101dc4e94 = 0xff170c19;
  DAT_101dc4e98 = 0xff241a14;
  DAT_101dc4e9c = 0xff14171c;
  DAT_101dc4ea0 = 0xff221911;
  DAT_101dc4ea4 = 0xff1a1416;
  DAT_101dc4ea8 = 0xff121414;
  DAT_101dc4eac = 0xff1a1809;
  DAT_101dc4eb0 = 0xff141414;
  DAT_101dc4eb4 = 0xff141414;
  DAT_101dc4eb8 = 0xff2929c0;
  DAT_101dc4ebc = 0xff283082;
  DAT_101dc4ec0 = 0xff5262cc;
  DAT_101dc4ec4 = 0xff283082;
  DAT_101dc4ec8 = 0xff5262cc;
  DAT_101dc4ecc = 0xff745c42;
  DAT_101dc4ed0 = 0xff184155;
  DAT_101dc4ed4 = 0xff92665e;
  DAT_101dc4ed8 = 0xffbc9c44;
  DAT_101dc4edc = 0xffbbae56;
  DAT_101dc4ee0 = 0xff8b7b01;
  DAT_101dc4ee4 = 0xff90b3ef;
  DAT_101dc4ee8 = 0xff728ebe;
  DAT_101dc4eec = 0xff19459d;
  DAT_101dc4ef0 = 0xff9d877b;
  DAT_101dc4ef4 = 0xffcbb1a3;
  DAT_101dc4ef8 = 0xff3f6fb5;
  DAT_101dc4efc = 0xffc5c5c5;
  DAT_101dc4f00 = 0xff4fc1f1;
  DAT_101dc4f04 = 0xff606060;
  DAT_101dc4f08 = 0xffc5ff7b;
  DAT_101dc4f0c = 0xff5271eb;
  DAT_101dc4f10 = 0xfffae076;
  DAT_101dc4f14 = 0xff3ac8f6;
  DAT_101dc4f18 = 0xffaaaaaa;
  DAT_101dc4f1c = 0xffe19400;
  DAT_101dc4f20 = 0xffe19400;
  DAT_101dc4f24 = 0xffe550b2;
  DAT_101dc4f28 = 0xfff22ae8;
  DAT_101dc4f2c = 0xff005ae1;
  DAT_101dc4f30 = 0xff1addfa;
  DAT_101dc4f34 = 0xff2424b3;
  DAT_101dc4f38 = 0xff2424b3;
  DAT_101dc4f3c = 0xff646464;
  DAT_101dc4f40 = 0xff92665e;
  DAT_101dc4f44 = 0xff646037;
  DAT_101dc4f48 = 0xffffffff;
  DAT_101dc4f4c = 0xff1111a1;
  DAT_101dc4f50 = 0xff321ee1;
  DAT_101dc4f54 = 0xffc8c8c8;
  DAT_101dc4f58 = 0xff321ee1;
  DAT_101dc4f5c = 0xff7fe801;
  DAT_101dc4f60 = 0xffffffff;
  DAT_101dc4f64 = 0xff6259b3;
  DAT_101dc4f68 = 0xff506e73;
  DAT_101dc4f6c = 0xff9dbf86;
  DAT_101dc4f70 = 0xffa35244;
  DAT_101dc4f74 = 0xffca828e;
  DAT_101dc4f78 = 0xffa6a6a6;
  DAT_101dc4f7c = 0xffa6a6a6;
  DAT_101dc4f80 = 0xffffffff;
  DAT_101dc4f84 = 0xff88ea2f;
  DAT_101dc4f88 = 0xff8c8c8c;
  DAT_101dc4f8c = 0xffffb400;
  DAT_101dc4f90 = 0xffff00ff;
  DAT_101dc4f94 = 0xff00aded;
  DAT_101dc4f98 = 0xff33d3ff;
  DAT_101dc4f9c = 0xff7fe801;
  DAT_101dc4fa0 = 0xff282828;
  DAT_101dc4fa4 = 0xfff0f0f0;
  DAT_101dc4fa8 = 0xffa4781e;
  DAT_101dc4fac = 0xffa6654b;
  DAT_101dc4fb0 = 0xff93435b;
  DAT_101dc4fb4 = 0xff387f9c;
  DAT_101dc4fb8 = 0xffa3781e;
  DAT_101dc4fbc = 0xffffd18a;
  DAT_101dc4fc0 = 0xffff61f7;
  DAT_101dc4fc4 = 0xff5de1f2;
  DAT_101dc4fc8 = 0xff80eaff;
  DAT_101dc4fcc = 0xff32e00e;
  DAT_101dc4fd0 = 0xff5a3c10;
  DAT_101dc4fd4 = 0xff330b03;
  DAT_101dc4fd8 = 0xff33031d;
  DAT_101dc4fdc = 0xff032433;
  DAT_101dc4fe0 = 0xff9e8e8d;
  uRam0000000101dc50b8 = 0x7f7fffff7f7fffff;
  _DAT_101dc50b0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc50c8 = 0x7f7fffff7f7fffff;
  _DAT_101dc50c0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc50d8 = 0x7f7fffff7f7fffff;
  _DAT_101dc50d0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc50e8 = 0x7f7fffff7f7fffff;
  _DAT_101dc50e0 = 0x7f7fffff7f7fffff;
  DAT_101dc50f0 = 0x7f7fffff;
  DAT_101dc50f4 = 0x7f7fffff;
  DAT_101dc50f8 = 0x7f7fffff;
  DAT_101dc50fc = 0x3f800000;
  uRam0000000101dc5108 = 0x7f7fffff7f7fffff;
  _DAT_101dc5100 = 0x7f7fffff7f7fffff;
  DAT_101dc5110 = 0x7f7fffff;
  DAT_101dc5114 = 0x3eb33333;
  uRam0000000101dc5120 = 0x7f7fffff7f7fffff;
  _DAT_101dc5118 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5130 = 0x7f7fffff7f7fffff;
  _DAT_101dc5128 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5140 = 0x7f7fffff7f7fffff;
  _DAT_101dc5138 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5150 = 0x7f7fffff7f7fffff;
  _DAT_101dc5148 = 0x7f7fffff7f7fffff;
  DAT_101dc5158 = 0x7f7fffff;
  DAT_101dc515c = 0x7f7fffff;
  DAT_101dc5160 = 0x7f7fffff;
  uRam0000000101dc4ff8 = 0xff7fffffff7fffff;
  _DAT_101dc4ff0 = 0xff7fffffff7fffff;
  DAT_101dc5000 = 0;
  DAT_101dc5008 = 0;
  uRam0000000101dc5014 = 0xff7fffffff7fffff;
  _DAT_101dc500c = 0xff7fffffff7fffff;
  DAT_101dc501c = 0xff7fffff;
  DAT_101dc5020 = 0xff7fffff;
  DAT_101dc5024 = NEON_fmov(0xbf800000,4);
  DAT_101dc502c = 0x3f000000;
  DAT_101dc5030 = 0;
  DAT_101dc5038 = 0;
  uRam0000000101dc5048 = 0xff7fffffff7fffff;
  _DAT_101dc5040 = 0xff7fffffff7fffff;
  uRam0000000101dc5058 = 0xff7fffffff7fffff;
  _DAT_101dc5050 = 0xff7fffffff7fffff;
  uRam0000000101dc5068 = 0xff7fffffff7fffff;
  _DAT_101dc5060 = 0xff7fffffff7fffff;
  uRam0000000101dc5078 = 0xbf800000bf800000;
  _DAT_101dc5070 = 0xbf80000000000000;
  DAT_101dc5080 = 0xbf800000;
  DAT_101dc5084 = 0xff7fffff;
  DAT_101dc5088 = 0xff7fffff;
  DAT_101dc508c = 0xff7fffff;
  DAT_101dc5090 = 0;
  DAT_101dc5094 = 0xff7fffff;
  DAT_101dc5098 = 0;
  DAT_101dc50a0 = 0;
  return;
}




long * FUN_10008acdc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_thunk_FUN_10008b1a0_10144f7d0;
  FUN_10064e264(puVar1 + 0x19);
  thunk_FUN_1006543ec(param_1 + 0x30);
  thunk_FUN_100652c08(param_1 + 100);
  thunk_FUN_100652c08(param_1 + 0x82);
  thunk_FUN_100652c08(param_1 + 0xa0);
  thunk_FUN_100652c08(param_1 + 0xbe);
  thunk_FUN_100650e64(param_1 + 0xdc);
  thunk_FUN_100655644(param_1 + 0x102);
  lVar2 = 0x968;
  do {
    thunk_FUN_1001c36dc((long)param_1 + lVar2);
    lVar2 = lVar2 + 0x388;
  } while (lVar2 != 0x1400);
  param_1[0x281] = 0;
  param_1[0x280] = 0;
  thunk_FUN_100650e64(param_1 + 0x282);
  thunk_FUN_100650e64(param_1 + 0x2a8);
  thunk_FUN_100181304(param_1 + 0x2ce,1);
  *(undefined4 *)(param_1 + 0x585) = 0;
  *(undefined1 *)((long)param_1 + 0x2c2c) = 0;
  FUN_10008adc0(param_1);
  (**(code **)(*param_1 + 0x150))(param_1);
  return param_1;
}




void FUN_10008adc0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  plVar1 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 100;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x82;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar4 = param_1 + 0xa0;
  FUN_100642bd8(plVar1,plVar4,1);
  plVar5 = param_1 + 0xdc;
  FUN_100642bd8(plVar1,plVar5,1);
  plVar6 = param_1 + 0x2ce;
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar1,param_1 + 0x102,1);
  lVar9 = 0;
  do {
    FUN_100655930(param_1 + 0x102,(long)param_1 + lVar9 + 0x968,1);
    lVar9 = lVar9 + 0x388;
  } while (lVar9 != 0xa98);
  FUN_100654488(plVar1,0);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_100652cac(plVar2,PTR_s_build___Tutorial_Components_tga_10184e0c0,"tutorial_bg");
  if ((~*(uint *)((long)param_1 + 0x3a4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3a4) = *(uint *)((long)param_1 + 0x3a4) | 0x7f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  FUN_100652cac(plVar4,PTR_s_build___Tutorial_Components_tga_10184e0c0,"tutorial_bg_edge");
  if ((~*(uint *)((long)param_1 + 0x584) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) | 0x7f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  *(byte *)(param_1 + 0xbb) = *(byte *)(param_1 + 0xbb) | 1;
  FUN_100652cac(plVar3,PTR_s_build___Tutorial_Components_tga_10184e0c0,"tutorial_bg_edge");
  if ((~*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) | 0x7f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  FUN_100652cac(param_1 + 0xbe,PTR_s_build___Tutorial_Components_tga_10184e0c0,
                "reward_goal_separator_line");
  uVar7 = *(uint *)((long)param_1 + 0x674);
  if ((uVar7 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x674) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0xbe);
  }
  FUN_100651594(plVar5,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  uVar8 = FUN_1004e0150("MAIN_SPOILS_OF_WAR_TITLE",0);
  FUN_1006513c0(plVar5,uVar8);
  FUN_10065179c(0x447d0000,0,0x3f800000,plVar5);
  FUN_100651594(param_1 + 0x282,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1006513c0(param_1 + 0x282,&DAT_101d91650);
  FUN_100651594(param_1 + 0x2a8,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&DAT_10115a168);
  FUN_1006513c0(param_1 + 0x2a8,&DAT_101d91650);
  uVar8 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1001816d4(0x420c0000,0x43af0000,0x44548000,plVar6,0,uVar8,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181c68(0x430a0000,plVar6);
  FUN_100651594(param_1 + 0x3b1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar6,&local_90);
  FUN_100181ba0(0x3f000000,plVar6,&DAT_10115a168);
  local_68 = DAT_101d91884;
  local_90 = FUN_10008bbec;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x2cf,&local_90);
  return;
}




long * thunk_FUN_10008acdc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_thunk_FUN_10008b1a0_10144f7d0;
  FUN_10064e264(puVar1 + 0x19);
  thunk_FUN_1006543ec(param_1 + 0x30);
  thunk_FUN_100652c08(param_1 + 100);
  thunk_FUN_100652c08(param_1 + 0x82);
  thunk_FUN_100652c08(param_1 + 0xa0);
  thunk_FUN_100652c08(param_1 + 0xbe);
  thunk_FUN_100650e64(param_1 + 0xdc);
  thunk_FUN_100655644(param_1 + 0x102);
  lVar2 = 0x968;
  do {
    thunk_FUN_1001c36dc((long)param_1 + lVar2);
    lVar2 = lVar2 + 0x388;
  } while (lVar2 != 0x1400);
  param_1[0x281] = 0;
  param_1[0x280] = 0;
  thunk_FUN_100650e64(param_1 + 0x282);
  thunk_FUN_100650e64(param_1 + 0x2a8);
  thunk_FUN_100181304(param_1 + 0x2ce,1);
  *(undefined4 *)(param_1 + 0x585) = 0;
  *(undefined1 *)((long)param_1 + 0x2c2c) = 0;
  FUN_10008adc0(param_1);
  (**(code **)(*param_1 + 0x150))(param_1);
  return param_1;
}




void FUN_10008b1a0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10008b1a0_10144f7d0;
  FUN_10003bd40(param_1 + 0x2ce);
  thunk_FUN_100651068(param_1 + 0x2a8);
  thunk_FUN_100651068(param_1 + 0x282);
  if ((void *)param_1[0x281] != (void *)0x0) {
    operator_delete__((void *)param_1[0x281]);
    param_1[0x281] = 0;
    param_1[0x280] = 0;
  }
  lVar1 = 0xa98;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x5e0) = &PTR_FUN_10144f938;
    *(undefined ***)((long)param_1 + lVar1 + 0x878) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x930) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x948);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x878);
    *(undefined ***)((long)param_1 + lVar1 + 0x788) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x840) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x858);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x788);
    *(undefined ***)((long)param_1 + lVar1 + 0x698) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x750) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x768);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x698);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x5e0);
    lVar1 = lVar1 + -0x388;
  } while (lVar1 != 0);
  param_1[0x102] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x119);
  FUN_10064e2bc(param_1 + 0x102);
  thunk_FUN_100651068(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10008b35c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144f938;
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10008b1a0(void)

{
  FUN_10008b1a0();
  return;
}




void FUN_10008b3f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10008b1a0();
  operator_delete(pvVar1);
  return;
}




void FUN_10008b40c(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x2c28);
  if (0.0 < fVar1) {
    fVar1 = fVar1 - param_1;
    *(float *)(param_2 + 0x2c28) = fVar1;
  }
  if ((*(char *)(param_2 + 0x2c2c) != '\0') && (fVar1 <= 0.0)) {
    FUN_1000320fc();
    FUN_100033548();
    return;
  }
  return;
}




void FUN_10008b450(void)

{
  return;
}




void FUN_10008b454(long param_1,int param_2,undefined8 param_3,uint *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [4];
  undefined8 local_f8;
  char local_e1;
  undefined8 local_e0;
  long local_a0;
  
  local_a0 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10008bb08();
  FUN_1006513c0(param_1 + 0x6e0,param_3);
  FUN_10065179c(0x447d0000,0,0x3f800000,param_1 + 0x6e0);
  lVar11 = 0;
  lVar12 = 0;
  fVar13 = *(float *)(param_1 + 0x9b0);
  fVar14 = fVar13 * 8.0;
  do {
    lVar3 = param_1 + lVar11;
    lVar1 = lVar3 + 0x968;
    FUN_1001c38b8(lVar1,lVar12 < param_2);
    uVar4 = *(uint *)(lVar3 + 0x9ec);
    if (lVar12 < param_2) {
      if ((uVar4 & 0x7f80) != 0) {
        *(uint *)(lVar3 + 0x9ec) = uVar4 & 0xffff807f;
        FUN_1000200a0(lVar1);
      }
      lVar3 = param_1 + lVar11;
      bVar5 = false;
      if ((*(float *)(lVar3 + 0x9b0) == fVar14) &&
         (bVar5 = false, !NAN(*(float *)(lVar3 + 0x9b4)) && !NAN(fVar14))) {
        bVar5 = *(float *)(lVar3 + 0x9b4) == fVar14;
      }
      if (!bVar5) {
        *(float *)(lVar3 + 0x9b0) = fVar14;
        *(float *)(lVar3 + 0x9b4) = fVar14;
        FUN_1000200a0(lVar1);
      }
      FUN_100642324(lVar1);
      lVar3 = DAT_101dbd2f8;
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_10063f0f0(puVar8);
        *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_10144b270;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_10063f0e8((float)(int)lVar12 * 0.75 + 0.3,puVar8);
      FUN_100642b14(lVar1,puVar8);
      lVar3 = DAT_101dbd2f8;
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_10063fcac(puVar8);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_10063f0e8(0x3f000000,puVar8);
      FUN_10063fce0(fVar13,puVar8);
      FUN_10063f130(puVar8,FUN_10001f218);
      uVar6 = FUN_10001f424();
      FUN_10063f0e8(0x3f000000);
      local_e0 = (undefined1 *)CONCAT44(fVar13,fVar13);
      FUN_10064025c(uVar6,&local_e0);
      FUN_10063f130(uVar6,FUN_10001f218);
      lVar3 = DAT_101dbd2f8;
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar10 = (ushort *)0x0;
      }
      else {
        puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar10;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_10063f1bc(puVar10);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_10063f2a4(puVar10,puVar8);
      FUN_100642b14(lVar1,puVar10);
      lVar3 = DAT_101dbd2f8;
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar7 * 0x40);
        if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_10063ee9c(puVar8);
        *(undefined ***)puVar8 = &PTR_FUN_101469878;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_1004d2698(&local_e0,"build://Sounds/UI.assetbundle/star_slam_%d.mp3");
      FUN_10001549c(&local_f8,&local_e0);
      FUN_1001e1e48(puVar8,&local_f8,1,0);
      if (local_e1 < '\0') {
        operator_delete(local_f8);
      }
      FUN_100642b14(lVar1,puVar8);
      uVar6 = FUN_10001f424();
      FUN_10063f0e8(0x3d4ccccd);
      local_f8 = (long *)CONCAT44(fVar13 * 0.8,fVar13 * 0.8);
      FUN_10064025c(uVar6,&local_f8);
      FUN_100642b14(lVar1,uVar6);
      uVar6 = FUN_10001f424();
      FUN_10063f0e8(0x3d4ccccd);
      local_f8 = (long *)CONCAT44(fVar13,fVar13);
      FUN_10064025c(uVar6,&local_f8);
      FUN_100642b14(lVar1,uVar6);
    }
    else {
      if ((uVar4 & 0x7f80) != 0x7f80) {
        *(uint *)(lVar3 + 0x9ec) = uVar4 | 0x7f80;
        FUN_1000200a0(lVar1);
      }
      lVar3 = param_1 + lVar11;
      bVar5 = false;
      if ((*(float *)(lVar3 + 0x9b0) == fVar13) &&
         (bVar5 = false, !NAN(*(float *)(lVar3 + 0x9b4)) && !NAN(fVar13))) {
        bVar5 = *(float *)(lVar3 + 0x9b4) == fVar13;
      }
      if (!bVar5) {
        *(float *)(lVar3 + 0x9b0) = fVar13;
        *(float *)(lVar3 + 0x9b4) = fVar13;
        FUN_1000200a0(lVar1);
      }
    }
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + 0x388;
  } while (lVar11 != 0xa98);
  FUN_100641464(auStack_fc,auStack_100);
  if (*param_4 == 0) {
    fVar13 = 780.0;
  }
  else {
    uVar9 = 0;
    fVar13 = 780.0;
    do {
      operator_new(0x2e8);
      local_f8 = (long *)FUN_10008c020();
      FUN_10008bb6c(param_1 + 0x1400,&local_f8);
      plVar2 = local_f8;
      thunk_FUN_1004e439c(&local_110,*(undefined8 *)(*(long *)(param_4 + 2) + uVar9 * 8));
      thunk_FUN_1004e439c(&local_120,*(long *)(*(long *)(param_4 + 2) + uVar9 * 8) + 0x10);
      FUN_1006513c0(plVar2 + 0x11,&local_110);
      FUN_1006513c0(plVar2 + 0x37,&local_120);
      if (local_118 != (void *)0x0) {
        operator_delete__(local_118);
        local_120 = 0;
        local_118 = (void *)0x0;
      }
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      plVar2 = local_f8;
      bVar5 = false;
      if ((*(float *)(local_f8 + 8) == 0.0) &&
         (bVar5 = false, !NAN(*(float *)((long)local_f8 + 0x44)) && !NAN(fVar13))) {
        bVar5 = *(float *)((long)local_f8 + 0x44) == fVar13;
      }
      if (!bVar5) {
        *(undefined4 *)(local_f8 + 8) = 0;
        *(float *)((long)local_f8 + 0x44) = fVar13;
        FUN_1000200a0(local_f8);
      }
      local_e0 = &DAT_3f0000003f000000;
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_e0);
      FUN_10065179c(0x44040000,0,0x3f800000,local_f8 + 0x11);
      if (*(char *)(*(long *)(*(long *)(param_4 + 2) + uVar9 * 8) + 0x20) == '\0') {
        local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,0xff0101d0);
      }
      else {
        local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,0xffffffff);
      }
      FUN_100651460(local_f8 + 0x37,&local_e0);
      FUN_100642bd8(param_1 + 0x180,local_f8,1);
      fVar13 = fVar13 + 72.0;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *param_4);
  }
  plVar2 = (long *)(param_1 + 0x5f0);
  if ((*(float *)(param_1 + 0x630) != 0.0) || (*(float *)(param_1 + 0x634) != fVar13)) {
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(float *)(param_1 + 0x634) = fVar13;
    FUN_1000200a0(plVar2);
  }
  local_e0 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_e0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10008bb08(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1400);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1408) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x1408) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x1400);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x1408) != 0) {
    *(undefined4 *)(param_1 + 0x1400) = 0;
  }
  return;
}




void FUN_10008bb6c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10008c224(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10008bbec(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c2c) = 1;
  *(undefined4 *)(param_1 + 0x2c28) = 0x3ecccccd;
  return;
}




void FUN_10008bc08(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float local_60;
  float local_5c;
  undefined1 *local_58;
  
  FUN_100641464(&local_5c,&local_60);
  FUN_10064e47c(local_5c,local_60,param_1 + 200);
  lVar1 = param_1 + 0x180;
  if ((*(float *)(param_1 + 0x1c0) != local_5c * 0.5) || (*(float *)(param_1 + 0x1c4) != 0.0)) {
    *(float *)(param_1 + 0x1c0) = local_5c * 0.5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(lVar1,&local_58);
  FUN_10064e47c(0x44f00000,local_60,lVar1);
  fVar6 = local_60;
  fVar8 = local_60 * 1.5;
  lVar1 = param_1 + 800;
  FUN_10064e47c(0x44900000,fVar8,lVar1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x364) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x360)))) {
    bVar2 = *(float *)(param_1 + 0x360) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 800) + 0x28))(lVar1,&local_58);
  lVar1 = param_1 + 0x500;
  if ((*(float *)(param_1 + 0x540) != -576.0) || (*(float *)(param_1 + 0x544) != 0.0)) {
    *(undefined8 *)(param_1 + 0x540) = 0xc4100000;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x500) + 0x28))(lVar1,&local_58);
  fVar5 = (float)FUN_100652e60(lVar1);
  FUN_10064e47c(fVar5 * 0.5,fVar6 * 1.7249999,lVar1);
  lVar1 = param_1 + 0x410;
  if ((*(float *)(param_1 + 0x450) != 576.0) || (*(float *)(param_1 + 0x454) != 0.0)) {
    *(undefined8 *)(param_1 + 0x450) = 0x44100000;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x410) + 0x28))(lVar1,&local_58);
  uVar7 = FUN_100652e60(lVar1);
  FUN_10064e47c(uVar7,fVar8,lVar1);
  lVar1 = param_1 + 0x6e0;
  if ((*(float *)(param_1 + 0x720) != 0.0) || (*(float *)(param_1 + 0x724) != 205.0)) {
    *(undefined8 *)(param_1 + 0x720) = 0x434d000000000000;
    FUN_1000200a0(lVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x6e0) + 0x28))(lVar1,&local_58);
  plVar3 = (long *)(param_1 + 0x968);
  fVar6 = (float)(**(code **)(*(long *)(param_1 + 0x968) + 0x48))(plVar3);
  lVar4 = 0;
  do {
    fVar8 = (float)(**(code **)(*plVar3 + 0x48))(plVar3);
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_58);
    fVar8 = fVar8 * (float)(int)lVar4 - fVar6 * 1.5;
    if ((*(float *)(plVar3 + 8) != fVar8) || (*(float *)((long)plVar3 + 0x44) != 0.0)) {
      *(float *)(plVar3 + 8) = fVar8;
      *(undefined4 *)((long)plVar3 + 0x44) = 0;
      FUN_1000200a0(plVar3);
    }
    lVar4 = lVar4 + 1;
    plVar3 = plVar3 + 0x71;
  } while (lVar4 != 3);
  lVar4 = param_1 + 0x810;
  FUN_1006557ec(lVar4);
  FUN_10064e72c(0,lVar4,0,lVar1,2);
  FUN_10064e72c(0,lVar4,4,lVar1,4);
  plVar3 = (long *)(param_1 + 0x1670);
  if ((*(float *)(param_1 + 0x16b0) != 0.0) || (*(float *)(param_1 + 0x16b4) != local_60 + -210.0))
  {
    *(undefined4 *)(param_1 + 0x16b0) = 0;
    *(float *)(param_1 + 0x16b4) = local_60 + -210.0;
    FUN_1000200a0(plVar3);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_58);
  return;
}




void FUN_10008bf84(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144f938;
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10008c020(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_FUN_10144fa80;
  puVar2 = puVar2 + 0x11;
  thunk_FUN_100650e64(puVar2);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(puVar2,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  FUN_1006513c0(puVar2,&DAT_101d91650);
  if ((*(float *)(param_1 + 0x19) != -20.0) || (*(float *)((long)param_1 + 0xcc) != 0.0)) {
    param_1[0x19] = 0xc1a00000;
    FUN_1000200a0(puVar2);
  }
  local_38 = 0x3f0000003f800000;
  (**(code **)(param_1[0x11] + 0x28))(puVar2,&local_38);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_1006513c0(plVar1,&DAT_101d91650);
  if ((*(float *)(param_1 + 0x3f) != 20.0) || (*(float *)((long)param_1 + 0x1fc) != 0.0)) {
    param_1[0x3f] = 0x41a00000;
    FUN_1000200a0(plVar1);
  }
  local_38 = 0x3f00000000000000;
  (**(code **)(param_1[0x37] + 0x28))(plVar1,&local_38);
  return param_1;
}




void FUN_10008c1a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144fa80;
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10008c1e0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144fa80;
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10008c224(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_10008c2a0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)FUN_100269da8();
  *puVar4 = &PTR_FUN_10144fb80;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = DAT_101dc0b88;
  puVar1 = puVar4 + 0x1b;
  FUN_1006421a8(puVar1);
  param_1[0x1b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x2c;
  thunk_FUN_100181304(plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar2,1);
  uVar5 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1001816d4(0x40a00000,0x43200000,0x440e8000,plVar2,0,uVar5,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651038(param_1 + 0x10f,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  local_60 = (code *)CONCAT44(local_60._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar2,&local_60);
  FUN_100181ba0(0x3f000000,plVar2,&DAT_10115a168);
  local_38 = DAT_101d91884;
  local_60 = thunk_FUN_10008c5c8;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x2d,&local_60);
  FUN_100181c68(0x428a0000,plVar2);
  *(uint *)((long)param_1 + 0x1e4) = *(uint *)((long)param_1 + 0x1e4) | 0x10;
  uVar3 = *(uint *)((long)puVar4 + 0x15c);
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x15c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_1000200a0(puVar1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}




void thunk_FUN_10008c5c8(void)

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  FUN_1003467f8();
  iVar1 = FUN_10034cde0();
  if (iVar1 != 0) {
    FUN_10010682c();
  }
  FUN_100011c2c(auStack_30,1);
  FUN_100345498(auStack_30);
  return;
}




long * thunk_FUN_10008c2a0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar4 = (undefined8 *)FUN_100269da8();
  *puVar4 = &PTR_FUN_10144fb80;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = DAT_101dc0b88;
  puVar1 = puVar4 + 0x1b;
  FUN_1006421a8(puVar1);
  param_1[0x1b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x2c;
  thunk_FUN_100181304(plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar2,1);
  uVar5 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1001816d4(0x40a00000,0x43200000,0x440e8000,plVar2,0,uVar5,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651038(param_1 + 0x10f,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  pcStack_60 = (code *)CONCAT44(pcStack_60._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar2,&pcStack_60);
  FUN_100181ba0(0x3f000000,plVar2,&DAT_10115a168);
  uStack_38 = DAT_101d91884;
  pcStack_60 = thunk_FUN_10008c5c8;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 0x2d,&pcStack_60);
  FUN_100181c68(0x428a0000,plVar2);
  *(uint *)((long)param_1 + 0x1e4) = *(uint *)((long)param_1 + 0x1e4) | 0x10;
  uVar3 = *(uint *)((long)puVar4 + 0x15c);
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x15c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_1000200a0(puVar1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}




void FUN_10008c458(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x30);
  FUN_1003467f8();
  uVar2 = FUN_10034cde0();
  if ((uVar2 & 1) == 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cde8();
    if (iVar1 == 0) {
      return;
    }
    pcVar3 = "HUD_EXIT_PRACTICE_MODE";
  }
  else {
    pcVar3 = "HUD_EXIT_TUTORIAL_MODE";
  }
  uVar4 = FUN_1004e0150(pcVar3,0);
  FUN_100181af8(param_1 + 0x160,uVar4);
  return;
}




void FUN_10008c4d0(long param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_40 [4];
  float local_3c;
  undefined1 *local_38;
  
  FUN_100641464(&local_3c,auStack_40);
  iVar3 = FUN_100126c88();
  fVar4 = 1.8;
  if (iVar3 == 0) {
    fVar4 = 1.0;
  }
  bVar2 = false;
  if ((*(float *)(param_1 + 0x48) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x4c)) && !NAN(fVar4))) {
    bVar2 = *(float *)(param_1 + 0x4c) == fVar4;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x48) = fVar4;
    *(float *)(param_1 + 0x4c) = fVar4;
    FUN_1000200a0(param_1);
  }
  FUN_1003467f8();
  FUN_10034cde8();
  if (*(float *)(param_1 + 0x40) != local_3c * 0.5 || *(float *)(param_1 + 0x44) != fVar4 * 48.0) {
    *(float *)(param_1 + 0x40) = local_3c * 0.5;
    *(float *)(param_1 + 0x44) = fVar4 * 48.0;
    FUN_1000200a0(param_1);
  }
  plVar1 = (long *)(param_1 + 0x160);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1a4) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x1a0)))) {
    bVar2 = *(float *)(param_1 + 0x1a0) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    FUN_1000200a0(plVar1);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_38);
  return;
}




void FUN_10008c5c8(void)

{
  int iVar1;
  undefined1 auStack_30 [32];
  
  FUN_1003467f8();
  iVar1 = FUN_10034cde0();
  if (iVar1 != 0) {
    FUN_10010682c();
  }
  FUN_100011c2c(auStack_30,1);
  FUN_100345498(auStack_30);
  return;
}




void FUN_10008c604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144fb80;
  FUN_10003bd40(param_1 + 0x2c);
  FUN_10064221c(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10008c644(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144fb80;
  FUN_10003bd40(param_1 + 0x2c);
  FUN_10064221c(param_1 + 0x1b);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10008c688(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_10144fce8;
  puVar7 = puVar7 + 0x17;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x8f;
  thunk_FUN_100652c08(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100652cac(puVar7,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0,"icon_item_empty");
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar7);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_item_node_regular");
  if ((*(float *)(param_1 + 0x5d) != 0.5) || (*(float *)((long)param_1 + 0x2ec) != 0.5)) {
    param_1[0x5d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 0.5)) {
    param_1[0x3f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_rings");
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_rings");
  if ((*(float *)(param_1 + 0x7b) != 0.5) || (*(float *)((long)param_1 + 0x3dc) != 0.5)) {
    param_1[0x7b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x99) != 0.5) || (*(float *)((long)param_1 + 0x4cc) != 0.5)) {
    param_1[0x99] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  if ((*(uint *)((long)param_1 + 0x40c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x40c) = *(uint *)((long)param_1 + 0x40c) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  if ((*(uint *)((long)param_1 + 0x4fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x4fc) = *(uint *)((long)param_1 + 0x4fc) & 0xffff807f;
    FUN_1000200a0(plVar4);
  }
  uVar5 = FUN_1004d2524("HUD_Quick_Buy");
  uVar6 = FUN_100015208("HUD_Quick_Buy",uVar5,0x1234);
  *(uint *)((long)param_1 + 0x13c) =
       *(uint *)((long)param_1 + 0x13c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x13c) & 0x7fff | (uVar6 & 0xffff) << 0xf;
  return param_1;
}




void FUN_10008c948(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c(param_3 + 0xb8);
  FUN_10064e5ec(0,0,param_3 + 0xb8,8,param_3,8);
  FUN_10064e47c(param_1,param_2,param_3 + 0x1a8);
  FUN_10064e5ec(0,0,param_3 + 0x1a8,8,param_3,8);
  FUN_10064e47c(param_1,param_2,param_3 + 0x298);
  FUN_10064e5ec(0,0,param_3 + 0x298,8,param_3,8);
  FUN_10064e47c(param_1,param_2,param_3 + 0x388);
  FUN_10064e5ec(0,0,param_3 + 0x388,8,param_3,8);
  FUN_10064e47c(param_1,param_2,param_3 + 0x478);
  FUN_10064e5ec(0,0,param_3 + 0x478,8,param_3,8);
  return;
}




undefined8 FUN_10008ca58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((int)param_3 == 0xffff) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10046efac(param_2,param_3);
    lVar2 = FUN_10046ef8c(param_2,uVar1);
    uVar1 = 0;
    if (lVar2 != 0) {
      FUN_100652cdc(param_1 + 0xb8,*(undefined8 *)(lVar2 + 8));
      uVar1 = 1;
    }
  }
  return uVar1;
}




undefined8 FUN_10008cac4(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_10063f564();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




long * FUN_10008cb4c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  void *local_88;
  code *local_80;
  long *plStack_78;
  long *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_10008d304_10144fe30;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = DAT_101dc0b88;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = 0xffff;
  *(undefined4 *)((long)puVar4 + 0xd4) = 0xffff;
  puVar4 = puVar4 + 0x1b;
  FUN_1006421a8(puVar4);
  param_1[0x1b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10008c688(param_1 + 0x2c);
  thunk_FUN_1000847c8(param_1 + 0xd9);
  plVar1 = param_1 + 0x4ad;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x4d3;
  thunk_FUN_100650e64(plVar2);
  param_1[0x4fa] = 0;
  param_1[0x4f9] = 0;
  FUN_1004e3004(param_1 + 0x4fb);
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)((long)param_1 + 0x27e4) = 0xffff;
  *(undefined4 *)(param_1 + 0x4fd) = 0x442f0000;
  *(undefined2 *)((long)param_1 + 0x27ec) = 0x5f01;
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0xe4cbad13,FUN_10008cf3c,0);
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0x97bcfebd,FUN_10008cf98,0);
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0xb924e89d,FUN_10008cfc8,0);
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0x2a9a0b2,FUN_10008d008,0);
  uVar5 = FUN_1000bdb98();
  FUN_1004e18bc(uVar5,param_1,0xfb4b760d,FUN_10008d01c,0);
  uVar5 = FUN_1000bdb98();
  FUN_1004e18bc(uVar5,param_1,0x6658bb67,FUN_10008d064,0);
  uVar5 = FUN_100316150();
  local_80 = (code *)0x0;
  local_68 = FUN_10008f220;
  plStack_78 = param_1;
  local_70 = param_1;
  FUN_10003c508(uVar5,&local_80);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,plVar2,1);
  FUN_100642bd8(puVar4,param_1 + 0xd9,1);
  FUN_100642bd8(puVar4,param_1 + 0x2c,1);
  uVar5 = FUN_1004e0150("HUD_QUICKBUY_LABEL",0);
  thunk_FUN_1004e439c(auStack_90,uVar5);
  FUN_1006513c0(plVar1,auStack_90);
  FUN_10065165c(plVar1,1);
  FUN_1006516bc(plVar1,&DAT_10115a164);
  uVar3 = *(uint *)((long)param_1 + 0x271c);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x271c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  FUN_10065165c(plVar2,1);
  FUN_1006516bc(plVar2,&DAT_10115a164);
  local_58 = DAT_101dbd484;
  local_80 = FUN_10008d0c4;
  plVar1 = param_1 + 0x2d;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  local_58 = DAT_101dbd458;
  local_80 = FUN_10008d0c4;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  local_58 = DAT_101dbd494;
  local_80 = FUN_10008d0c8;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  local_58 = DAT_101dbd498;
  local_80 = FUN_10008d0d0;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  local_58 = DAT_101dbd48c;
  local_80 = FUN_10008d0e8;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  local_58 = DAT_101dbd460;
  local_80 = FUN_10008d0e8;
  local_68 = (code *)0x0;
  uStack_60 = 0;
  local_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  FUN_10008d124(param_1,0,0);
  FUN_10008d294(param_1);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  return param_1;
}




void FUN_10008cf3c(long param_1)

{
  int iVar1;
  undefined4 in_stack_00000000;
  
  iVar1 = FUN_10034ea2c(in_stack_00000000);
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x27ed) = *(byte *)(param_1 + 0x27ed) & 0x7f | 2;
    FUN_1004e3004(param_1 + 0x27d8);
  }
  return;
}




void FUN_10008cf98(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10008f000(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_10008cfc8(long param_1)

{
  *(byte *)(param_1 + 0x27ed) = *(byte *)(param_1 + 0x27ed) | 2;
  FUN_1004e3004(param_1 + 0x27d8);
  return;
}




void FUN_10008d008(long param_1)

{
  *(byte *)(param_1 + 0x27ed) = *(byte *)(param_1 + 0x27ed) & 0x7f;
  return;
}




void FUN_10008d01c(long param_1)

{
  undefined4 in_stack_00000000;
  
  *(undefined4 *)(param_1 + 0x27e4) = in_stack_00000000;
  *(byte *)(param_1 + 0x27ed) = *(byte *)(param_1 + 0x27ed) | 2;
  FUN_1004e3004(param_1 + 0x27d8);
  return;
}




void FUN_10008d064(long param_1)

{
  int in_stack_00000000;
  
  if (*(int *)(param_1 + 0x27e4) == in_stack_00000000) {
    *(undefined4 *)(param_1 + 0x27e4) = 0xffff;
    *(byte *)(param_1 + 0x27ed) = *(byte *)(param_1 + 0x27ed) | 2;
    FUN_1004e3004(param_1 + 0x27d8);
  }
  return;
}




void FUN_10008d0c4(void)

{
  return;
}




void FUN_10008d0c8(undefined8 param_1)

{
  FUN_10008dcc4(param_1,0);
  return;
}




void FUN_10008d0d0(long param_1)

{
  FUN_100269e20(0x3e800000,param_1 + 0x6c8,0,4,1);
  return;
}




void FUN_10008d0e8(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x14;
  local_20 = &PTR_FUN_10144d6d8;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_10008d124(long param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  pbVar1 = (byte *)(param_1 + 0x27ed);
  if ((((*pbVar1 & 1) == 0 ^ param_2) & 1) == 0) {
    fVar6 = (float)FUN_100641440();
    fVar7 = (float)FUN_10065317c(param_1 + 0x218);
    fVar9 = fVar7 + fVar6;
    if ((*pbVar1 & 0x20) != 0) {
      fVar9 = -(fVar7 + fVar6);
    }
    if (param_3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x15c);
      uVar5 = 0xff;
      if (param_2 == 0) {
        uVar5 = 0;
      }
      if (uVar5 != (uVar2 >> 7 & 0xff)) {
        *(uint *)(param_1 + 0x15c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar5 << 7;
        FUN_1000200a0(param_1 + 0xd8);
      }
      fVar6 = 0.0;
      if (param_2 == 0) {
        fVar6 = fVar9;
      }
      if ((*(float *)(param_1 + 0x118) != fVar6) || (*(float *)(param_1 + 0x11c) != 0.0)) {
        *(float *)(param_1 + 0x118) = fVar6;
        *(undefined4 *)(param_1 + 0x11c) = 0;
        FUN_1000200a0(param_1 + 0xd8);
      }
    }
    else {
      uVar8 = 0x3f800000;
      if (param_2 == 0) {
        uVar8 = 0;
      }
      fVar6 = 0.0;
      if (param_2 == 0) {
        fVar6 = fVar9;
      }
      uVar3 = FUN_100640840(uVar8,0x3e800000,FUN_10001f160);
      FUN_1006408f4(fVar6,0,0x3e800000,FUN_10001f160);
      uVar4 = FUN_10001f4d4();
      FUN_10063f2a4(uVar4,uVar3);
      FUN_100642324(param_1 + 0xd8);
      FUN_100642b14(param_1 + 0xd8,uVar4);
    }
    *pbVar1 = *pbVar1 & 0xfe | (byte)param_2;
  }
  return;
}




void FUN_10008d294(long param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_100316180(0x1a);
  if (iVar1 == 2) {
    bVar2 = *(byte *)(param_1 + 0x27ed) & 0xe7;
  }
  else if (iVar1 == 1) {
    bVar2 = *(byte *)(param_1 + 0x27ed) & 0xef | 8;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x27ed) | 0x18;
  }
  *(byte *)(param_1 + 0x27ed) = bVar2;
  return;
}




long * thunk_FUN_10008cb4c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  void *pvStack_88;
  code *pcStack_80;
  long *plStack_78;
  long *plStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_10008d304_10144fe30;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x18) = DAT_101dc0b88;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = 0xffff;
  *(undefined4 *)((long)puVar4 + 0xd4) = 0xffff;
  puVar4 = puVar4 + 0x1b;
  FUN_1006421a8(puVar4);
  param_1[0x1b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10008c688(param_1 + 0x2c);
  thunk_FUN_1000847c8(param_1 + 0xd9);
  plVar1 = param_1 + 0x4ad;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x4d3;
  thunk_FUN_100650e64(plVar2);
  param_1[0x4fa] = 0;
  param_1[0x4f9] = 0;
  FUN_1004e3004(param_1 + 0x4fb);
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)((long)param_1 + 0x27e4) = 0xffff;
  *(undefined4 *)(param_1 + 0x4fd) = 0x442f0000;
  *(undefined2 *)((long)param_1 + 0x27ec) = 0x5f01;
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0xe4cbad13,FUN_10008cf3c,0);
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0x97bcfebd,FUN_10008cf98,0);
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0xb924e89d,FUN_10008cfc8,0);
  uVar5 = FUN_1003da398();
  FUN_1004e18bc(uVar5,param_1,0x2a9a0b2,FUN_10008d008,0);
  uVar5 = FUN_1000bdb98();
  FUN_1004e18bc(uVar5,param_1,0xfb4b760d,FUN_10008d01c,0);
  uVar5 = FUN_1000bdb98();
  FUN_1004e18bc(uVar5,param_1,0x6658bb67,FUN_10008d064,0);
  uVar5 = FUN_100316150();
  pcStack_80 = (code *)0x0;
  pcStack_68 = FUN_10008f220;
  plStack_78 = param_1;
  plStack_70 = param_1;
  FUN_10003c508(uVar5,&pcStack_80);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  FUN_100642bd8(puVar4,plVar2,1);
  FUN_100642bd8(puVar4,param_1 + 0xd9,1);
  FUN_100642bd8(puVar4,param_1 + 0x2c,1);
  uVar5 = FUN_1004e0150("HUD_QUICKBUY_LABEL",0);
  thunk_FUN_1004e439c(auStack_90,uVar5);
  FUN_1006513c0(plVar1,auStack_90);
  FUN_10065165c(plVar1,1);
  FUN_1006516bc(plVar1,&DAT_10115a164);
  uVar3 = *(uint *)((long)param_1 + 0x271c);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x271c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  FUN_10065165c(plVar2,1);
  FUN_1006516bc(plVar2,&DAT_10115a164);
  uStack_58 = DAT_101dbd484;
  pcStack_80 = FUN_10008d0c4;
  plVar1 = param_1 + 0x2d;
  pcStack_68 = (code *)0x0;
  uStack_60 = 0;
  plStack_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&pcStack_80);
  uStack_58 = DAT_101dbd458;
  pcStack_80 = FUN_10008d0c4;
  pcStack_68 = (code *)0x0;
  uStack_60 = 0;
  plStack_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&pcStack_80);
  uStack_58 = DAT_101dbd494;
  pcStack_80 = FUN_10008d0c8;
  pcStack_68 = (code *)0x0;
  uStack_60 = 0;
  plStack_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&pcStack_80);
  uStack_58 = DAT_101dbd498;
  pcStack_80 = FUN_10008d0d0;
  pcStack_68 = (code *)0x0;
  uStack_60 = 0;
  plStack_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&pcStack_80);
  uStack_58 = DAT_101dbd48c;
  pcStack_80 = FUN_10008d0e8;
  pcStack_68 = (code *)0x0;
  uStack_60 = 0;
  plStack_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&pcStack_80);
  uStack_58 = DAT_101dbd460;
  pcStack_80 = FUN_10008d0e8;
  pcStack_68 = (code *)0x0;
  uStack_60 = 0;
  plStack_70 = (long *)0x0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&pcStack_80);
  FUN_10008d124(param_1,0,0);
  FUN_10008d294(param_1);
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
  }
  return param_1;
}




void FUN_10008d304(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_thunk_FUN_10008d304_10144fe30;
  if (param_1[0x19] != 0) {
    FUN_1010a1830();
    param_1[0x19] = 0;
  }
  uVar3 = FUN_1000bdb98();
  FUN_1004e1b58(uVar3,param_1);
  uVar3 = FUN_1003da398();
  FUN_1004e1b58(uVar3,param_1);
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar4 = (uint *)FUN_100316150();
    if (*puVar4 != 0) {
      lVar5 = *(long *)(puVar4 + 2);
      lVar6 = (ulong)*puVar4 << 5;
      do {
        puVar1 = (undefined8 *)(lVar5 + 8);
        lVar5 = lVar5 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  FUN_10008d4a4(param_1);
  if ((void *)param_1[0x4fa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4fa]);
    param_1[0x4fa] = 0;
    param_1[0x4f9] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x4d3);
  thunk_FUN_100651068(param_1 + 0x4ad);
  FUN_10007c8a4(param_1 + 0xd9);
  param_1[0x2c] = &PTR_FUN_10144fce8;
  param_1[0xbb] = &PTR_FUN_1014a7108;
  param_1[0xd2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd5);
  FUN_10064e2bc(param_1 + 0xbb);
  param_1[0x9d] = &PTR_FUN_1014a7108;
  param_1[0xb4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb7);
  FUN_10064e2bc(param_1 + 0x9d);
  param_1[0x7f] = &PTR_FUN_1014a7108;
  param_1[0x96] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x99);
  FUN_10064e2bc(param_1 + 0x7f);
  param_1[0x61] = &PTR_FUN_1014a7108;
  param_1[0x78] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7b);
  FUN_10064e2bc(param_1 + 0x61);
  param_1[0x43] = &PTR_FUN_1014a7108;
  param_1[0x5a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5d);
  FUN_10064e2bc(param_1 + 0x43);
  FUN_10064e2bc(param_1 + 0x2c);
  FUN_10064221c(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10008d4a4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x27c8) != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_100642d08(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar3 * 8));
      if (iVar1 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x27d0) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x27c8));
  }
  if (*(long *)(param_1 + 0x27d0) != 0) {
    *(undefined4 *)(param_1 + 0x27c8) = 0;
  }
  return;
}




void FUN_10008d520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144fce8;
  param_1[0x8f] = &PTR_FUN_1014a7108;
  param_1[0xa6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa9);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10008d304(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_thunk_FUN_10008d304_10144fe30;
  if (param_1[0x19] != 0) {
    FUN_1010a1830();
    param_1[0x19] = 0;
  }
  uVar3 = FUN_1000bdb98();
  FUN_1004e1b58(uVar3,param_1);
  uVar3 = FUN_1003da398();
  FUN_1004e1b58(uVar3,param_1);
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar4 = (uint *)FUN_100316150();
    if (*puVar4 != 0) {
      lVar5 = *(long *)(puVar4 + 2);
      lVar6 = (ulong)*puVar4 << 5;
      do {
        puVar1 = (undefined8 *)(lVar5 + 8);
        lVar5 = lVar5 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  FUN_10008d4a4(param_1);
  if ((void *)param_1[0x4fa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4fa]);
    param_1[0x4fa] = 0;
    param_1[0x4f9] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x4d3);
  thunk_FUN_100651068(param_1 + 0x4ad);
  FUN_10007c8a4(param_1 + 0xd9);
  param_1[0x2c] = &PTR_FUN_10144fce8;
  param_1[0xbb] = &PTR_FUN_1014a7108;
  param_1[0xd2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd5);
  FUN_10064e2bc(param_1 + 0xbb);
  param_1[0x9d] = &PTR_FUN_1014a7108;
  param_1[0xb4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb7);
  FUN_10064e2bc(param_1 + 0x9d);
  param_1[0x7f] = &PTR_FUN_1014a7108;
  param_1[0x96] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x99);
  FUN_10064e2bc(param_1 + 0x7f);
  param_1[0x61] = &PTR_FUN_1014a7108;
  param_1[0x78] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7b);
  FUN_10064e2bc(param_1 + 0x61);
  param_1[0x43] = &PTR_FUN_1014a7108;
  param_1[0x5a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5d);
  FUN_10064e2bc(param_1 + 0x43);
  FUN_10064e2bc(param_1 + 0x2c);
  FUN_10064221c(param_1 + 0x1b);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10008d5f4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10008d304();
  operator_delete(pvVar1);
  return;
}




void FUN_10008d608(long param_1)

{
  int iVar1;
  uint64_t uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  uVar2 = _mach_absolute_time();
  if (1.0 <= (double)((uVar2 - *(long *)(param_1 + 0x27d8)) * DAT_101d91638) * 1e-09) {
    *(byte *)(param_1 + 0x27ed) = *(byte *)(param_1 + 0x27ed) | 2;
    FUN_1004e3004(param_1 + 0x27d8);
  }
  FUN_10008d710(param_1);
  if (*(int *)(param_1 + 0x27c8) != 0) {
    uVar7 = 0;
    do {
      iVar6 = (int)uVar7;
      uVar3 = FUN_100642bc8(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar7 * 8));
      if ((uVar3 & 1) == 0) {
        iVar1 = FUN_100642d08(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar7 * 8));
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x27d0) + uVar7 * 8),1);
        }
        lVar5 = *(long *)(param_1 + 0x27d0);
        plVar4 = *(long **)(lVar5 + uVar7 * 8);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
          lVar5 = *(long *)(param_1 + 0x27d0);
        }
        lVar5 = lVar5 + uVar7 * 8;
        FUN_10008d9b0((uint *)(param_1 + 0x27c8),lVar5,lVar5 + 8);
        iVar6 = iVar6 + -1;
      }
      uVar7 = (ulong)(iVar6 + 1U);
    } while (iVar6 + 1U < *(uint *)(param_1 + 0x27c8));
  }
  return;
}




void FUN_10008d710(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined8 uVar12;
  int local_34;
  
  if (*(long *)(param_1 + 200) == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0xb8);
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
LAB_10008d798:
    bVar11 = true;
  }
  else {
    if (*(int *)(param_1 + 0xc0) != (int)plVar4[1]) {
      lVar5 = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
      goto LAB_10008d798;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) goto LAB_10008d798;
    lVar6 = FUN_10049028c(lVar5);
    if (lVar6 != 0) {
      uVar1 = FUN_100470a04();
      bVar11 = false;
      uVar1 = uVar1 ^ 1;
      goto LAB_10008d7a0;
    }
    bVar11 = false;
  }
  uVar1 = 1;
LAB_10008d7a0:
  FUN_1003467f8();
  uVar7 = FUN_10034cde0();
  if (((uVar7 & 1) == 0) &&
     (((*(byte *)(param_1 + 0x27ed) & 8) == 0 || (uVar1 & 1) != 0 ||
      ((iVar2 = FUN_100036694(), iVar2 != 0 && (iVar2 = FUN_1000bd98c(), iVar2 != 0)))))) {
    FUN_10008d124(param_1,0,1);
    return;
  }
  FUN_10008e070(param_1);
  if (!bVar11) {
    uVar1 = FUN_1003e0adc(lVar5,&local_34);
    uVar7 = FUN_10046ef44(*(undefined8 *)(param_1 + 200),local_34);
    if ((uVar7 & 1) == 0) {
      thunk_FUN_10046eadc(*(undefined8 *)(param_1 + 200),local_34);
    }
    *(int *)(param_1 + 0xd0) = local_34;
    if ((local_34 != 0xffff) && (FUN_10008e0dc(param_1), *(int *)(param_1 + 0xd4) != 0xffff)) {
      uVar8 = FUN_10048c8e4(lVar5);
      iVar2 = FUN_1003e148c((int)*(float *)(*(long *)(lVar5 + 0x40) + 800),uVar8,
                            *(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd4),0,0);
      if (iVar2 != 0) {
        uVar12 = *(undefined8 *)(param_1 + 200);
        uVar8 = FUN_10046efac(uVar12,*(undefined4 *)(param_1 + 0xd4));
        lVar6 = FUN_10046ef8c(uVar12,uVar8);
        lVar9 = FUN_10049028c(lVar5);
        if ((((*(int *)(lVar9 + 0x28) == 0xfe || (uVar1 & 1) != 0) ||
             (iVar2 = FUN_10046f4b0(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd4)),
             iVar2 == 0)) || (*(char *)(lVar6 + 0x34) != '\0')) ||
           ((*(int *)(lVar6 + 0x30) < 2 || (*(float *)(*(long *)(lVar5 + 0x40) + 800) < 1500.0)))) {
          uVar3 = 0;
        }
        else {
          FUN_1003467f8();
          uVar3 = FUN_10034cec0();
          uVar3 = uVar3 ^ 1;
        }
        if (uVar1 != 0) {
          FUN_10008d124(param_1,1,1);
          uVar10 = 3;
          if (-1 < *(char *)(param_1 + 0x27ed)) {
            uVar10 = 1;
          }
          FUN_10008e1f8(param_1,uVar10);
          if ((*(byte *)(param_1 + 0x27ed) >> 4 & 1) == 0) {
            return;
          }
          FUN_10008e5b0(param_1);
          return;
        }
        if (uVar3 != 0) {
          FUN_10008d124(param_1,1,1);
          FUN_10008e1f8(param_1,2);
          return;
        }
      }
    }
  }
  FUN_10008d124(param_1,0,1);
  return;
}




void FUN_10008d9b0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_10008da1c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010008da24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_10008da28(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_48;
  
  FUN_10064e32c();
  fVar4 = (float)FUN_10064e3cc(param_3 + 0x160);
  param_2 = param_2 * -0.5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x1a0) == fVar4 * -0.5) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0x1a4)) && !NAN(param_2))) {
    bVar3 = *(float *)(param_3 + 0x1a4) == param_2;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0x1a0) = fVar4 * -0.5;
    *(float *)(param_3 + 0x1a4) = param_2;
    FUN_1000200a0(param_3 + 0x160);
  }
  if ((*(byte *)(param_3 + 0x27ed) >> 6 & 1) == 0) {
    *(uint *)(param_3 + 0x25ec) = *(uint *)(param_3 + 0x25ec) & 0xfffffffb;
  }
  else {
    plVar1 = (long *)(param_3 + 0x2568);
    *(uint *)(param_3 + 0x25ec) = *(uint *)(param_3 + 0x25ec) | 4;
    FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
    FUN_100651700(plVar1,3);
    FUN_10065317c(param_3 + 0x218);
    param_2 = param_2 * -0.51;
    bVar3 = false;
    if ((*(float *)(param_3 + 0x25a8) == 0.0) &&
       (bVar3 = false, !NAN(*(float *)(param_3 + 0x25ac)) && !NAN(param_2))) {
      bVar3 = *(float *)(param_3 + 0x25ac) == param_2;
    }
    if (!bVar3) {
      *(undefined4 *)(param_3 + 0x25a8) = 0;
      *(float *)(param_3 + 0x25ac) = param_2;
      FUN_1000200a0(plVar1);
    }
    local_48 = 0x3f8000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_48);
    FUN_100651708(0,plVar1,1);
    fVar4 = (float)FUN_100651184(plVar1);
    if (1.1920929e-07 <= ABS(fVar4)) {
      fVar4 = (float)FUN_10065317c(param_3 + 0x218);
      fVar5 = (float)FUN_100651184(plVar1);
      fVar4 = (float)NEON_fminnm(fVar4 / fVar5,0x3f800000);
      bVar3 = false;
      if ((*(float *)(param_3 + 0x25b0) == fVar4) &&
         (bVar3 = false, !NAN(*(float *)(param_3 + 0x25b4)) && !NAN(fVar4))) {
        bVar3 = *(float *)(param_3 + 0x25b4) == fVar4;
      }
      if (!bVar3) {
        *(float *)(param_3 + 0x25b0) = fVar4;
        *(float *)(param_3 + 0x25b4) = fVar4;
        FUN_1000200a0(plVar1);
      }
    }
    FUN_100651708(0x43fa0000,plVar1,1);
  }
  lVar2 = param_3 + 0x2698;
  FUN_100651594(lVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  FUN_100651764(0xbd4ccccd,lVar2);
  fVar5 = (float)FUN_10065317c(param_3 + 0x218);
  bVar3 = (*(byte *)(param_3 + 0x27ed) & 0x20) != 0;
  fVar4 = -(fVar5 * 0.55) - 10.0;
  if (bVar3) {
    fVar4 = fVar5 * 0.55 + 10.0;
  }
  uVar6 = 0x3f800000;
  if (bVar3) {
    uVar6 = 0;
  }
  if ((*(float *)(param_3 + 0x26d8) != fVar4) || (*(float *)(param_3 + 0x26dc) != 0.0)) {
    *(float *)(param_3 + 0x26d8) = fVar4;
    *(undefined4 *)(param_3 + 0x26dc) = 0;
    FUN_1000200a0(lVar2);
  }
  local_48 = CONCAT44(0x3f000000,uVar6);
  (**(code **)(*(long *)(param_3 + 0x2698) + 0x28))(lVar2,&local_48);
  if ((*(byte *)(param_3 + 0x788) & 1) != 0) {
    FUN_10008dcc4(param_3,*(undefined1 *)(param_3 + 0x27ec));
  }
  if (*(long *)(param_3 + 0x2560) != 0) {
    FUN_10064e5ec(0,0x40000000,*(long *)(param_3 + 0x2560),6,param_3 + 0x218,6);
  }
  return;
}




void FUN_10008dcc4(long param_1,undefined1 param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined1 *)(param_1 + 0x27ec) = param_2;
  uVar5 = *(undefined8 *)(param_1 + 200);
  uVar3 = FUN_10046efac(uVar5,*(undefined4 *)(param_1 + 0xd4));
  lVar4 = FUN_10046ef8c(uVar5,uVar3);
  if (lVar4 != 0) {
    lVar1 = param_1 + 0x6c8;
    FUN_1000853c4(lVar1,lVar4,*(undefined1 *)(param_1 + 0x27ec));
    fVar6 = 0.0;
    bVar2 = false;
    if ((*(float *)(param_1 + 0x70c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x708))))
    {
      bVar2 = *(float *)(param_1 + 0x708) == 0.0;
    }
    if (!bVar2) {
      *(undefined8 *)(param_1 + 0x708) = 0;
      FUN_1000200a0(lVar1);
    }
    FUN_100269e20(0x3e800000,lVar1,1,4,1);
    fVar8 = *(float *)(param_1 + 0x1a0);
    fVar9 = *(float *)(param_1 + 0x1a4);
    FUN_10064e3cc(param_1 + 0x160);
    fVar7 = fVar6;
    FUN_10064e3cc(lVar1);
    fVar9 = fVar6 + fVar7 * -0.5 + fVar9;
    fVar6 = (float)FUN_10064e3cc(lVar1);
    fVar6 = fVar8 + -20.0 + fVar6 * -0.5;
    bVar2 = false;
    if ((*(float *)(param_1 + 0x708) == fVar6) &&
       (bVar2 = false, !NAN(*(float *)(param_1 + 0x70c)) && !NAN(fVar9))) {
      bVar2 = *(float *)(param_1 + 0x70c) == fVar9;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x708) = fVar6;
      *(float *)(param_1 + 0x70c) = fVar9;
      FUN_1000200a0(lVar1);
      return;
    }
  }
  return;
}




void FUN_10008ddec(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  FUN_100641464(auStack_54,auStack_58);
  lVar1 = param_3 + 0x2698;
  FUN_100651708(0,lVar1,1);
  FUN_100651700(lVar1,(*(byte *)(param_3 + 0x27ed) >> 5 ^ 0xff) & 1);
  fVar3 = (float)FUN_100651184(lVar1);
  fVar5 = *(float *)(param_3 + 0x27e8);
  if (fVar5 < fVar3) {
    param_2 = 400.0;
    FUN_1000f2e00(fVar5,lVar1);
  }
  fVar4 = (float)FUN_10065317c(param_3 + 0x218);
  FUN_10064259c(lVar1);
  if (fVar4 < param_2) {
    FUN_10065317c(param_3 + 0x218);
    fVar4 = param_2;
    FUN_10064259c(lVar1);
    if (param_2 + 2.0 < fVar4) {
      fVar3 = *(float *)(param_3 + 0x26e4);
      fVar5 = 1.0;
      do {
        fVar5 = fVar5 + -0.05;
        fVar4 = *(float *)(param_3 + 0x26e0);
        bVar2 = false;
        if ((fVar4 == fVar5) && (bVar2 = false, !NAN(fVar3) && !NAN(fVar5))) {
          bVar2 = fVar3 == fVar5;
        }
        if (!bVar2) {
          *(float *)(param_3 + 0x26e0) = fVar5;
          *(float *)(param_3 + 0x26e4) = fVar5;
          FUN_1000200a0(lVar1);
        }
        FUN_100651708(*(float *)(param_3 + 0x27e8) / fVar5,lVar1,1);
        FUN_10065176c(lVar1);
        FUN_1006511d0(lVar1);
        fVar3 = *(float *)(param_3 + 0x26e4);
      } while (param_2 + 2.0 < fVar4 * fVar3);
      return;
    }
  }
  if (fVar3 <= fVar5) {
    FUN_100651708(*(undefined4 *)(param_3 + 0x27e8),lVar1,1);
  }
  return;
}




void FUN_10008df58(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_1003467f8();
  iVar1 = FUN_10034ce90();
  if (iVar1 != 0) {
    param_1[0x17] = *param_2;
    *(int *)(param_1 + 0x18) = (int)param_2[1];
    lVar2 = FUN_1010a1540(DAT_10184e120,0);
    param_1[0x19] = lVar2;
    FUN_10046e924(lVar2,param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00010008dfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe8))(param_1);
    return;
  }
  return;
}




void FUN_10008dfd8(undefined8 param_1,long *param_2)

{
  FUN_10064e47c(param_1,param_1,param_2 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x00010008e008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}




void FUN_10008e00c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  
  if (param_1[0x4ac] == 0) {
    pvVar1 = operator_new(0x200);
    lVar2 = thunk_FUN_1000de11c(pvVar1,param_2);
    param_1[0x4ac] = lVar2;
    FUN_100642bd8(param_1 + 0x2c,pvVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010008e06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_10008e070(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)((long)param_1 + 0x27ed);
  if (((*pbVar1 ^ 0xff) & 5) == 0) {
    iVar2 = FUN_10008ca58(param_1 + 0x2c,param_1[0x19],*(undefined4 *)((long)param_1 + 0xd4));
    if (iVar2 != 0) {
      FUN_10008e6fc(param_1);
    }
    (**(code **)(*param_1 + 0xe8))(param_1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return;
}




void FUN_10008e0dc(long param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int local_34;
  
  if (*(int *)(param_1 + 0xd0) != 0xffff) {
    plVar4 = *(long **)(param_1 + 0xb8);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_1 + 0xc0) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
    lVar6 = FUN_10049028c(uVar5);
    pbVar1 = (byte *)(param_1 + 0x27ed);
    if (*(int *)(lVar6 + 0x28) == 0xfe) {
      if ((*pbVar1 >> 1 & 1) == 0) {
        return;
      }
      uVar7 = FUN_10048c8e4(uVar5);
      iVar2 = *(int *)(param_1 + 0x27e4);
      local_34 = 0xffff;
      if (iVar2 != 0xffff) {
        local_34 = iVar2;
        FUN_1004917ac(uVar5,uVar7,*(undefined8 *)(param_1 + 200),iVar2,&local_34);
      }
      *(int *)(param_1 + 0xd4) = local_34;
    }
    else {
      if ((*pbVar1 >> 1 & 1) == 0) {
        return;
      }
      uVar3 = FUN_1003e0bf8(uVar5,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0),1,1
                           );
      *(undefined4 *)(param_1 + 0xd4) = uVar3;
    }
    *pbVar1 = *pbVar1 & 0xf9 | 4;
  }
  return;
}




void FUN_10008e1f8(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_84;
  
  if (*(int *)(param_1 + 0x27e0) == param_2) {
    return;
  }
  if (param_2 == 3) {
    *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) & 0xfffffffb;
    *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) & 0xfffffffb;
    FUN_100642324(param_1 + 0x4e8);
    FUN_100642324(param_1 + 0x5d8);
    FUN_100642324(param_1 + 0x218);
  }
  else if (param_2 == 2) {
    lVar1 = param_1 + 0x218;
    *(uint *)(param_1 + 0x29c) = *(uint *)(param_1 + 0x29c) & 0xffffffef;
    *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) & 0xfffffffb;
    *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) & 0xfffffffb;
    FUN_100642324(param_1 + 0x4e8);
    FUN_100642324(param_1 + 0x5d8);
    FUN_100642324(lVar1);
    FUN_100652e14(0,lVar1);
    FUN_100652dfc(lVar1,5);
    *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) | 4;
    FUN_100652dd4(param_1 + 0x308,&DAT_10115a164,2);
    uVar3 = *(uint *)(param_1 + 0x38c);
    if ((uVar3 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x38c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x2600;
      FUN_1000200a0(param_1 + 0x308);
    }
  }
  else {
    if (param_2 != 1) goto LAB_10008e584;
    lVar1 = param_1 + 0x218;
    *(uint *)(param_1 + 0x29c) = *(uint *)(param_1 + 0x29c) | 0x10;
    FUN_100652e14(0x3f800000,lVar1);
    FUN_100652dfc(lVar1,4);
    *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) & 0xfffffffb;
    local_84 = 0x40404040;
    uVar4 = FUN_100640a74(0x3e4ccccd,lVar1,&local_84,FUN_10008e8e8,4);
    local_88 = 0xffffffff;
    FUN_100640a74(0x3e19999a,lVar1,&local_88,FUN_10001f4c4,4);
    local_90[0] = 0x808080;
    FUN_100640a74(0x3f800000,lVar1,local_90,FUN_10001f4ac,4);
    uVar5 = FUN_10008cac4();
    FUN_10063f614(uVar5,uVar4);
    uVar4 = FUN_10064081c(0x3e4ccccd);
    lVar6 = FUN_10008e900();
    lVar2 = param_1 + 0x4e8;
    *(code **)(lVar6 + 0x10) = FUN_10008e99c;
    *(long *)(lVar6 + 0x20) = lVar2;
    FUN_10064081c(0x3e19999a);
    lVar7 = FUN_10008e900();
    lVar6 = param_1 + 0x5d8;
    *(code **)(lVar7 + 0x10) = FUN_10008e99c;
    *(long *)(lVar7 + 0x20) = lVar6;
    uVar8 = FUN_10008cac4();
    FUN_10063f614(uVar8,uVar4);
    uVar4 = FUN_10001f4d4();
    FUN_10063f2a4(uVar4,uVar5);
    FUN_10064081c(0x3f800000);
    uVar5 = FUN_10008cac4();
    FUN_10063f614(uVar5,uVar4);
    FUN_10063f664(uVar5);
    *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) | 4;
    *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) | 4;
    uVar4 = NEON_fmov(0x3f800000,4);
    if ((*(float *)(param_1 + 0x530) != 1.0) || (*(float *)(param_1 + 0x534) != 1.0)) {
      *(undefined8 *)(param_1 + 0x530) = uVar4;
      FUN_1000200a0(lVar2);
    }
    if ((*(float *)(param_1 + 0x620) != 1.0) || (*(float *)(param_1 + 0x624) != 1.0)) {
      *(undefined8 *)(param_1 + 0x620) = uVar4;
      FUN_1000200a0(lVar6);
    }
    if ((~*(uint *)(param_1 + 0x56c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) | 0x7f80;
      FUN_1000200a0(lVar2);
    }
    if ((~*(uint *)(param_1 + 0x65c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) | 0x7f80;
      FUN_1000200a0(lVar6);
    }
    FUN_100642324(lVar2);
    FUN_100642324(lVar6);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
  }
  FUN_10008e6fc(param_1);
LAB_10008e584:
  *(int *)(param_1 + 0x27e0) = param_2;
  return;
}




void FUN_10008e5b0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  
  pbVar1 = (byte *)(param_1 + 0x27ed);
  if ((char)*pbVar1 < '\0') {
    return;
  }
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 == (long *)0x0) {
    lVar4 = 0;
  }
  else if (*(int *)(param_1 + 0xc0) == (int)plVar3[1]) {
    lVar4 = (**(code **)(*plVar3 + 0x10))();
  }
  else {
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
  }
  uVar5 = FUN_100490234(lVar4);
  if (*(int *)(param_1 + 0xd4) == 0xffff) {
    return;
  }
  iVar2 = FUN_1003e148c((int)*(float *)(*(long *)(lVar4 + 0x40) + 800),uVar5,
                        *(undefined8 *)(param_1 + 200),*(int *)(param_1 + 0xd4),0,0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_10049057c(lVar4);
  if (iVar2 == 0) {
    return;
  }
  FUN_1003d5a90(auStack_58,*(undefined4 *)(lVar4 + 0x260),*(undefined4 *)(param_1 + 0xd4));
  FUN_100345498(auStack_58);
  lVar4 = FUN_1003de46c(lVar4);
  if (*(int *)(lVar4 + 0x28) == 0xfe) {
    if (*(int *)(param_1 + 0xd4) != *(int *)(param_1 + 0x27e4)) goto LAB_10008e6cc;
    *(undefined4 *)(param_1 + 0x27e4) = 0xffff;
  }
  *pbVar1 = *pbVar1 | 2;
  FUN_1004e3004(param_1 + 0x27d8);
LAB_10008e6cc:
  FUN_10008ea70(param_1);
  FUN_10008eb14(param_1);
  *pbVar1 = *pbVar1 | 0x80;
  return;
}




void FUN_10008e6fc(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar1 = (int)param_1[0x4fc];
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      FUN_1003467f8();
      iVar1 = FUN_10034ce98();
      if (iVar1 == 0) {
        *(uint *)((long)param_1 + 0x271c) = *(uint *)((long)param_1 + 0x271c) & 0xfffffffb;
      }
      else {
        uVar2 = FUN_1004e0150("HUD_QUICKBUY_REMINDER_TO_SHOP",0);
        FUN_1006513c0(param_1 + 0x4d3,uVar2);
      }
      FUN_10008ddec(param_1);
      goto LAB_10008e7dc;
    }
    if (iVar1 != 1) goto LAB_10008e7dc;
    if (*(int *)((long)param_1 + 0xd4) == 0xffff) goto LAB_10008e7dc;
    lVar4 = param_1[0x19];
    uVar2 = FUN_10046efac(lVar4);
    lVar4 = FUN_10046ef8c(lVar4,uVar2);
    (**(code **)(*(long *)param_1[0x17] + 0x10))();
    lVar3 = FUN_1003de46c();
    if (*(int *)(lVar3 + 0x28) != 0xfe) {
      *(uint *)((long)param_1 + 0x271c) = *(uint *)((long)param_1 + 0x271c) | 4;
      uVar2 = FUN_1004e0150(*(undefined8 *)(lVar4 + 0x28),0);
      thunk_FUN_1004e439c(auStack_40,uVar2);
      FUN_1004e3120(auStack_50,"[HIGHLIGHT]");
      FUN_1004e3120(auStack_60,"{255,170,45,255}");
      FUN_1004e3bc4(auStack_40,0,auStack_50,auStack_60);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      FUN_1004e3120(auStack_50,"[/HIGHLIGHT]");
      FUN_1004e3120(auStack_60,"{\\}");
      FUN_1004e3bc4(auStack_40,0,auStack_50,auStack_60);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      FUN_1006513c0(param_1 + 0x4d3,auStack_40);
      FUN_10008ddec(param_1);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      goto LAB_10008e7dc;
    }
  }
  *(uint *)((long)param_1 + 0x271c) = *(uint *)((long)param_1 + 0x271c) & 0xfffffffb;
LAB_10008e7dc:
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




float FUN_10008e8e8(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / param_4;
  return param_2 + param_1 * param_3 * param_1 * param_1 * param_1 * param_1;
}




undefined8 * FUN_10008e900(void)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    puVar2 = (undefined8 *)FUN_10063ee9c();
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_thunk_FUN_10063eeb4_10144bff8;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar2;
}




void FUN_10008e99c(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100642324();
  bVar1 = false;
  if ((*(float *)(param_1 + 0x48) == 1.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x4c)))) {
    bVar1 = *(float *)(param_1 + 0x4c) == 1.0;
  }
  if (!bVar1) {
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    FUN_1000200a0(param_1);
  }
  if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
    FUN_1000200a0(param_1);
  }
  uVar3 = FUN_100640840(0,0x3f4ccccd,FUN_10001f160);
  FUN_100640db8(0x40a00000,0x40a00000,0x3f4ccccd,FUN_10001f4ac);
  uVar2 = FUN_10001f4d4();
  FUN_10063f2a4(uVar2,uVar3);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_10008ea70(long param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  param_1 = param_1 + 0x160;
  FUN_100642324(param_1);
  uVar1 = FUN_10001f424();
  local_28 = NEON_fmov(0x3fe00000,4);
  FUN_10064025c(uVar1,&local_28);
  FUN_10063f0e8(0x3c23d70a,uVar1);
  FUN_100642b14(param_1,uVar1);
  uVar1 = FUN_10001f424();
  local_28 = NEON_fmov(0x3f800000,4);
  FUN_10064025c(uVar1,&local_28);
  FUN_10063f0e8(0x3e19999a,uVar1);
  FUN_10063f130(uVar1,FUN_10006bf9c);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_10008eb14(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  void *local_110 [2];
  char local_f9;
  undefined8 local_f8;
  undefined1 auStack_f0 [48];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90 [2];
  
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        pvVar5 = operator_new(0x568);
        local_90[0] = FUN_10008c688();
        uVar12 = FUN_100652e60(param_1 + 0x218);
        uVar13 = FUN_100652e60(param_1 + 0x218);
        FUN_10064e47c(uVar12,uVar13,pvVar5);
        FUN_10008ca58(pvVar5,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd4));
        (**(code **)(**(long **)(param_1 + 0x20) + 0x78))(*(long **)(param_1 + 0x20),pvVar5,1);
        fVar14 = *(float *)(param_1 + 0x44);
        bVar1 = false;
        if ((*(float *)((long)pvVar5 + 0x40) == *(float *)(param_1 + 0x40)) &&
           (bVar1 = false, !NAN(*(float *)((long)pvVar5 + 0x44)) && !NAN(fVar14))) {
          bVar1 = *(float *)((long)pvVar5 + 0x44) == fVar14;
        }
        if (!bVar1) {
          *(float *)((long)pvVar5 + 0x40) = *(float *)(param_1 + 0x40);
          *(float *)((long)pvVar5 + 0x44) = fVar14;
          FUN_1000200a0(pvVar5);
        }
        *(uint *)((long)pvVar5 + 0x84) = *(uint *)((long)pvVar5 + 0x84) & 0xfffffffb;
        iVar2 = FUN_100316180(0x1a);
        uVar9 = 0x3dcccccd;
        fVar10 = 0.0;
        if (iVar2 == 0) {
          fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x27c8));
          fVar14 = 0.05;
          fVar10 = fVar10 * 0.1 + 0.05;
          uVar15 = 0x3f800000;
        }
        else {
          uVar9 = 0;
          uVar15 = 0x3f266666;
        }
        if (((DAT_101dc5170 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101dc5170), iVar2 != 0)
           ) {
          DAT_101dc5168 = 0x3e3270a0;
          ___cxa_guard_release(&DAT_101dc5170);
        }
        FUN_1003ab468(lVar4,&DAT_101dc5168,auStack_f0);
        local_a0 = local_c0;
        local_98 = local_b8;
        FUN_10011a174(local_b0,&local_a0,1);
        local_f8 = local_b0[0];
        uVar11 = FUN_10064efd0(&local_f8,*(undefined8 *)(param_1 + 0x20));
        local_f8 = CONCAT44(fVar14,uVar11);
        uVar12 = FUN_10001f55c();
        FUN_10063f0e8(fVar10);
        lVar4 = DAT_101dbd2f8;
        uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
        if ((ulong)uVar6 == 0xffff) {
          puVar7 = (ushort *)0x0;
        }
        else {
          puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
          if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar7;
          }
          *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
          *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
          FUN_10063f050(puVar7);
          *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
        }
        FUN_10063f090(puVar7,1);
        FUN_10001f55c();
        FUN_10063f0e8(uVar9);
        lVar4 = DAT_101dbd2f8;
        uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
        if ((ulong)uVar6 == 0xffff) {
          puVar7 = (ushort *)0x0;
        }
        else {
          puVar7 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar6 * 0x40);
          if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar7;
          }
          *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
          *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
          FUN_10063ee9c(puVar7);
          *(undefined ***)puVar7 = &PTR_FUN_101469878;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          puVar7[0x10] = 0;
          puVar7[0x11] = 0;
          puVar7[0x12] = 0;
          puVar7[0x13] = 0;
          puVar7[0x14] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
          *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
        }
        FUN_10001549c(local_110,"build://Sounds/ActorFx.assetbundle/sfx__gold_coins.mp3");
        FUN_1001e1e48(puVar7,local_110,1,0);
        if (local_f9 < '\0') {
          operator_delete(local_110[0]);
        }
        lVar4 = DAT_101dbd2f8;
        uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
        if ((ulong)uVar6 == 0xffff) {
          puVar8 = (ushort *)0x0;
        }
        else {
          puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
          if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
            uVar6 = 0xffff;
          }
          else {
            uVar6 = *puVar8;
          }
          *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
          *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
          FUN_10063fb24(puVar8);
          *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014698c0;
          *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
        }
        FUN_10063f0e8(uVar15,puVar8);
        FUN_10063fb90(puVar8,&local_f8);
        FUN_1001e1e84(puVar8,FUN_1000657e0);
        FUN_1001e1e8c(puVar8,FUN_10008f084);
        FUN_100640db8(0,0,uVar15,0);
        FUN_100640840(0,uVar15,FUN_1000657e0);
        uVar13 = FUN_10001f4d4();
        FUN_10063f2a4(uVar13,puVar7);
        uVar13 = local_90[0];
        FUN_100642b7c(local_90[0],uVar12);
        lVar4 = DAT_101dbd2f8;
        uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
        puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar7;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_10063ee9c(puVar7);
        *(undefined ***)puVar7 = &PTR_thunk_FUN_10063eeb4_1014a5338;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
        FUN_100642b14(uVar13,puVar7);
        FUN_10008f0cc(param_1 + 0x27c8,local_90);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10008f000(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = FUN_10034ea2c(param_2);
  if ((iVar1 != 0) &&
     ((iVar1 = _strcmp(param_3,PTR_s_Buff_Item_WeaponInfusion_10185ab78), iVar1 == 0 ||
      (iVar1 = _strcmp(param_3,PTR_s_Buff_Item_CrystalInfusion_10185ab80), iVar1 == 0)))) {
    *(byte *)(param_1 + 0x27ed) = *(byte *)(param_1 + 0x27ed) & 0x7f | 2;
    FUN_1004e3004(param_1 + 0x27d8);
    return;
  }
  return;
}




float FUN_10008f084(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (float)_cosf((param_1 * 0.5 * 3.1415927) / param_4);
  return (param_3 + param_2) - param_3 * fVar1;
}




void FUN_10008f0cc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10008f238(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10008f14c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10144fce8;
  param_1[0x8f] = &PTR_FUN_1014a7108;
  param_1[0xa6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa9);
  FUN_10064e2bc(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_1014a7108;
  param_1[0x88] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8b);
  FUN_10064e2bc(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10008f220(undefined8 param_1,int *param_2)

{
  if (*param_2 == 0x22 || *param_2 == 0x1a) {
    FUN_10008d294();
    return;
  }
  return;
}




void FUN_10008f238(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10008f2b4(void)

{
  if ((DAT_10184e128 & 1) == 0) {
    DAT_10184e120 = DAT_101872e38;
    DAT_10184e128 = 1;
  }
  return;
}




long * FUN_10008f2e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1000918b0_10144ff78;
  puVar5[0x17] = 0;
  *(undefined4 *)(puVar5 + 0x18) = 0xfe;
  puVar5 = puVar5 + 0x19;
  FUN_1006421a8(puVar5);
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar6 = param_1 + 0x2a;
  FUN_1006421a8(plVar6);
  param_1[0x2a] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001bd4e0(param_1 + 0x3b,1);
  plVar1 = param_1 + 0xd1;
  FUN_1006421a8(plVar1);
  param_1[0xd1] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0xe2;
  thunk_FUN_100652c08();
  thunk_FUN_100650e64(param_1 + 0x100);
  thunk_FUN_100650e64(param_1 + 0x126);
  plVar3 = param_1 + 0x14c;
  FUN_1006421a8(plVar3);
  lVar7 = 0;
  param_1[0x14c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar7 + 0xae8);
    lVar7 = lVar7 + 0xf0;
  } while (lVar7 != 0x5a0);
  lVar7 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar7 + 0x1088);
    lVar7 = lVar7 + 0xf0;
  } while (lVar7 != 0x5a0);
  param_1[0x2c5] = DAT_101dc1cb8;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar6,1);
  FUN_100642bd8(plVar6,param_1 + 0x3b,1);
  FUN_100642bd8(plVar6,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,param_1 + 0x100,1);
  FUN_100642bd8(plVar1,param_1 + 0x126,1);
  FUN_100642bd8(plVar1,plVar3,1);
  plVar6 = param_1 + 0x15d;
  lVar7 = 6;
  do {
    FUN_100642bd8(plVar3,plVar6,1);
    FUN_100642bd8(plVar3,plVar6 + 0xb4,1);
    plVar6 = plVar6 + 0x1e;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_100652444(param_1 + 0x52,0,0,0,0,0,0,0,0,0,0,"white_background");
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(float *)(param_1 + 0xeb) != 1.6) || (*(float *)((long)param_1 + 0x75c) != 1.6)) {
    param_1[0xeb] = 0x3fcccccd3fcccccd;
    FUN_1000200a0(plVar2);
  }
  lVar7 = 0;
  do {
    lVar4 = (long)param_1 + lVar7 + 0xae8;
    FUN_100652ca4(lVar4,PTR_s_build___HUDItemsAndBuffs_atlas_10184e0a0);
    FUN_100652cdc(lVar4,"icon_item_empty");
    lVar4 = (long)param_1 + lVar7 + 0x1088;
    FUN_100652ca4(lVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    FUN_100652cdc(lVar4,"hud_store_inventory_tray");
    lVar7 = lVar7 + 0xf0;
  } while (lVar7 != 0x5a0);
  return param_1;
}




void FUN_10008f5d0(long param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 auStack_100 [8];
  void *local_f8;
  undefined4 local_f0 [2];
  void *local_e8;
  undefined4 local_dc;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10006d330(auStack_d8,"recommended_path_tile_%u");
  uVar2 = FUN_1004d2524(auStack_d8);
  uVar3 = FUN_100015208(auStack_d8,uVar2,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  *(int *)(param_1 + 0xc0) = param_3;
  if (param_3 == 0xfe) {
    *(uint *)(param_1 + 0x794) = *(uint *)(param_1 + 0x794) & 0xfffffffb;
    uVar5 = FUN_1004e0150("RECOMMENDED_BUILD_MANUAL",0);
    FUN_1006513c0(param_1 + 0x800,uVar5);
    uVar5 = FUN_1004e0150("RECOMMENDED_BUILD_MANUAL_SUMMARY",0);
    FUN_1006513c0(param_1 + 0x930,uVar5);
    *(uint *)(param_1 + 0xae4) = *(uint *)(param_1 + 0xae4) & 0xfffffffb;
    local_f0[0] = 0xffc8c8c8;
    FUN_1001bdb04(0x3f666666,param_1 + 0x1d8,local_f0);
    goto LAB_10008f8d0;
  }
  *(long *)(param_1 + 0xb8) = param_2;
  iVar4 = _strcmp(*(char **)(param_2 + 0x28),"lane");
  if (iVar4 == 0) {
    pcVar8 = "role_carry";
LAB_10008f728:
    FUN_100652cdc(param_1 + 0x710,pcVar8);
  }
  else {
    iVar4 = _strcmp(*(char **)(param_2 + 0x28),"jungle");
    if (iVar4 == 0) {
      pcVar8 = "role_jungler";
      goto LAB_10008f728;
    }
    iVar4 = _strcmp(*(char **)(param_2 + 0x28),"captain");
    if (iVar4 == 0) {
      pcVar8 = "role_captain";
      goto LAB_10008f728;
    }
  }
  local_dc = 0xffc8c8c8;
  iVar4 = _strcmp(*(char **)(param_2 + 0x30),"red");
  if (iVar4 == 0) {
    local_dc = 0xff5271eb;
  }
  else {
    iVar4 = _strcmp(*(char **)(param_2 + 0x30),"blue");
    if (iVar4 == 0) {
      local_dc = 0xfffae076;
    }
    else {
      iVar4 = _strcmp(*(char **)(param_2 + 0x30),"yellow");
      if (iVar4 == 0) {
        local_dc = 0xff3ac8f6;
      }
    }
  }
  FUN_100652dd4(param_1 + 0x710,&local_dc,2);
  FUN_1001bdb04(0x3f666666,param_1 + 0x1d8,&local_dc);
  uVar5 = FUN_1004e0150(*(undefined8 *)(param_2 + 8),0);
  FUN_1006513c0(param_1 + 0x800,uVar5);
  FUN_1004e313c(local_f0);
  uVar5 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x10),0);
  FUN_1004e372c(local_f0,uVar5);
  FUN_1004e3120(auStack_100,"\n");
  FUN_1004e372c(local_f0,auStack_100);
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
  uVar5 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x18),0);
  FUN_1004e372c(local_f0,uVar5);
  FUN_1006513c0(param_1 + 0x930,local_f0);
  if (**(long **)(param_2 + 0x38) != 0) {
    uVar9 = 0;
    plVar1 = *(long **)(param_2 + 0x38);
    do {
      uVar5 = FUN_100345b94();
      uVar5 = FUN_1003b1948(uVar5,*(undefined8 *)*plVar1);
      uVar6 = FUN_100345b94();
      lVar7 = FUN_10046c858(uVar6,uVar5,PTR_DAT_1018573e8);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x30) == 3)) {
        FUN_100652cdc(param_1 + uVar9 * 0xf0 + 0xae8,*(undefined8 *)(lVar7 + 8));
        uVar9 = (ulong)((int)uVar9 + 1);
      }
    } while ((plVar1[1] != 0) && (plVar1 = plVar1 + 1, (uint)uVar9 < 6));
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
  }
LAB_10008f8d0:
  FUN_10008f914(param_1,0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10008f914(undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 local_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (param_4 == 0) {
    pcVar12 = "build_talent_chooser_frame_off_bottom_corners";
    pcVar11 = "build_talent_chooser_frame_off_bottom_edge";
    pcVar10 = "build_talent_chooser_frame_off_bottom_corners";
    pcVar5 = "build_talent_chooser_frame_off_vertical_edges";
    pcVar9 = "build_talent_chooser_frame_off_vertical_edges";
    pcVar3 = "build_talent_chooser_frame_off_top_corners";
    pcVar4 = "build_talent_chooser_frame_off_top_edge";
  }
  else {
    pcVar12 = "build_talent_chooser_frame_on_bottom_corners";
    pcVar11 = "build_talent_chooser_frame_on_bottom_edge";
    pcVar10 = "build_talent_chooser_frame_on_bottom_corners";
    pcVar5 = "build_talent_chooser_frame_on_vertical_edges";
    pcVar9 = "build_talent_chooser_frame_on_vertical_edges";
    pcVar3 = "build_talent_chooser_frame_on_top_corners";
    pcVar4 = "build_talent_chooser_frame_on_top_edge";
  }
  FUN_100651f94(param_3 + 0x3e0,pcVar3,0,0,0,pcVar4,0,0,0,pcVar3,1,pcVar5,0,0,0,pcVar9,1,pcVar10,0,
                pcVar11,0,pcVar12,1);
  uVar7 = FUN_100652390(param_3 + 0x3e0,0);
  FUN_1006525c4(uVar7,0,uVar7,param_2,0,param_2,param_3 + 0x290);
  if (param_4 == 0) {
    FUN_1001bdb78(0x3ecccccd,param_3 + 0x1d8,&DAT_10115a164);
    uVar8 = 0x3f800000;
    uVar6 = 0x3fcccccd;
  }
  else {
    puVar2 = (uint *)FUN_100652df4(param_3 + 0x710);
    uVar1 = *puVar2;
    uStack_41 = (undefined1)(uVar1 >> 0x18);
    _local_44 = CONCAT12((char)(int)((float)(uVar1 >> 0x10 & 0xff) * 0.25),
                         CONCAT11((char)(int)((float)(uVar1 >> 8 & 0xff) * 0.25),
                                  (char)(int)((float)(uVar1 & 0xff) * 0.25)));
    FUN_1001bdb78(0x3f400000,param_3 + 0x1d8,&local_44);
    uVar6 = 0x40000000;
    uVar8 = 0x3f866666;
  }
  uVar7 = FUN_100640db8(uVar6,uVar6,0x3e19999a,FUN_10001f160);
  FUN_100642324(param_3 + 0x710);
  FUN_100642b14(param_3 + 0x710,uVar7);
  uVar7 = FUN_100640db8(uVar8,uVar8,0x3e19999a,FUN_10001f160);
  FUN_100642324(param_3 + 200);
  FUN_100642b14(param_3 + 200,uVar7);
  return;
}




void FUN_10008fb98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined1 *local_88;
  
  fVar8 = *(float *)(param_1 + 0x1628);
  fVar10 = *(float *)(param_1 + 0x162c);
  fVar11 = fVar10 * 0.5;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x108) == fVar8 * 0.5) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x10c)) && !NAN(fVar11))) {
    bVar5 = *(float *)(param_1 + 0x10c) == fVar11;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x108) = fVar8 * 0.5;
    *(float *)(param_1 + 0x10c) = fVar11;
    FUN_1000200a0(param_1 + 200);
    fVar8 = *(float *)(param_1 + 0x1628);
    fVar10 = *(float *)(param_1 + 0x162c);
  }
  fVar11 = fVar10 * -0.5;
  bVar5 = false;
  if ((*(float *)(param_1 + 400) == fVar8 * -0.5) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x194)) && !NAN(fVar11))) {
    bVar5 = *(float *)(param_1 + 0x194) == fVar11;
  }
  if (!bVar5) {
    *(float *)(param_1 + 400) = fVar8 * -0.5;
    *(float *)(param_1 + 0x194) = fVar11;
    FUN_1000200a0(param_1 + 0x150);
    fVar8 = *(float *)(param_1 + 0x1628);
    fVar10 = *(float *)(param_1 + 0x162c);
  }
  FUN_10064e47c(fVar8 + 80.0,fVar10 + 80.0,param_1 + 0x1d8);
  fVar8 = (float)*(undefined8 *)(param_1 + 0x1628) * 0.5;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x1628) >> 0x20) * 0.5;
  uVar9 = CONCAT44(fVar10,fVar8);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x218) == fVar8) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x21c)) && !NAN(fVar10))) {
    bVar5 = *(float *)(param_1 + 0x21c) == fVar10;
  }
  if (!bVar5) {
    *(ulong *)(param_1 + 0x218) = uVar9;
    FUN_1000200a0(param_1 + 0x1d8);
    uVar9 = (ulong)(uint)(*(float *)(param_1 + 0x1628) * 0.5);
  }
  if ((*(float *)(param_1 + 0x750) != (float)uVar9) || (*(float *)(param_1 + 0x754) != 0.0)) {
    *(float *)(param_1 + 0x750) = (float)uVar9;
    *(undefined4 *)(param_1 + 0x754) = 0;
    FUN_1000200a0(param_1 + 0x710);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x710) + 0x28))(param_1 + 0x710,&local_88);
  lVar6 = param_1 + 0x800;
  fVar8 = (float)*(undefined8 *)(param_1 + 0x1628) * 0.5;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x1628) >> 0x20) * 0.2;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x840) == fVar8) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x844)) && !NAN(fVar10))) {
    bVar5 = *(float *)(param_1 + 0x844) == fVar10;
  }
  if (!bVar5) {
    *(ulong *)(param_1 + 0x840) = CONCAT44(fVar10,fVar8);
    FUN_1000200a0(lVar6);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x800) + 0x28))(lVar6,&local_88);
  FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651700(lVar6,3);
  FUN_100651708(*(float *)(param_1 + 0x1628) * 0.85,lVar6,1);
  FUN_100651764(0xbe19999a,lVar6);
  lVar6 = param_1 + 0x930;
  fVar8 = (float)*(undefined8 *)(param_1 + 0x1628) * 0.5;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x1628) >> 0x20) * 0.4;
  if ((*(float *)(param_1 + 0x970) != fVar8) || (*(float *)(param_1 + 0x974) != fVar10)) {
    *(ulong *)(param_1 + 0x970) = CONCAT44(fVar10,fVar8);
    FUN_1000200a0(lVar6);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x930) + 0x28))(lVar6,&local_88);
  FUN_100651038(lVar6,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  uVar7 = *(uint *)(param_1 + 0x9b4);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x9b4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(lVar6);
  }
  FUN_100651700(lVar6,3);
  FUN_100651708(*(float *)(param_1 + 0x1628) * 0.8,lVar6,1);
  lVar6 = 0;
  uVar7 = 0;
  do {
    lVar2 = param_1 + lVar6;
    lVar1 = lVar2 + 0xae8;
    FUN_10064e47c(0x42dc0000,0x42dc0000,lVar1);
    lVar3 = param_1 + 0x1088 + lVar6;
    FUN_10064e47c(0x42dc0000,0x42dc0000,lVar3);
    uVar4 = (uVar7 & 0xff) / 3;
    fVar8 = (float)(uVar7 - (uVar4 * 2 + (uVar7 & 0xff) / 3) & 0xff) * 114.0 + 55.0;
    fVar10 = (float)uVar4 * 114.0 + 55.0;
    bVar5 = false;
    if ((*(float *)(lVar2 + 0xb28) == fVar8) &&
       (bVar5 = false, !NAN(*(float *)(lVar2 + 0xb2c)) && !NAN(fVar10))) {
      bVar5 = *(float *)(lVar2 + 0xb2c) == fVar10;
    }
    if (!bVar5) {
      *(float *)(lVar2 + 0xb28) = fVar8;
      *(float *)(lVar2 + 0xb2c) = fVar10;
      FUN_1000200a0(lVar1);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(lVar2 + 0xae8) + 0x28))(lVar1,&local_88);
    bVar5 = false;
    if ((*(float *)(lVar2 + 0x10c8) == fVar8) &&
       (bVar5 = false, !NAN(*(float *)(lVar2 + 0x10cc)) && !NAN(fVar10))) {
      bVar5 = *(float *)(lVar2 + 0x10cc) == fVar10;
    }
    if (!bVar5) {
      *(float *)(lVar2 + 0x10c8) = fVar8;
      *(float *)(lVar2 + 0x10cc) = fVar10;
      FUN_1000200a0(lVar3);
    }
    local_88 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + lVar6 + 0x1088) + 0x28))(lVar3,&local_88);
    uVar7 = uVar7 + 1;
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x5a0);
  fVar8 = *(float *)(param_1 + 0x1628) * 0.5 + -169.0;
  fVar10 = *(float *)(param_1 + 0x162c) * 0.6;
  bVar5 = false;
  if ((*(float *)(param_1 + 0xaa0) == fVar8) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0xaa4)) && !NAN(fVar10))) {
    bVar5 = *(float *)(param_1 + 0xaa4) == fVar10;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0xaa0) = fVar8;
    *(float *)(param_1 + 0xaa4) = fVar10;
    FUN_1000200a0(param_1 + 0xa60);
  }
  return;
}




long FUN_10008ffb8(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100269da8();
  *puVar3 = &PTR_thunk_FUN_100090580_1014500c0;
  FUN_10064e264(puVar3 + 0x19);
  FUN_10064e264(param_1 + 0x180);
  FUN_100269de4(param_1 + 0x238);
  thunk_FUN_1000dee58(param_1 + 0x300);
  FUN_1006421a8(param_1 + 0x688);
  *(undefined ***)(param_1 + 0x688) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x710);
  thunk_FUN_1006543ec(param_1 + 0x840);
  FUN_10053077c(param_1 + 0x9e0,0);
  FUN_10064fd54(param_1 + 0xf18,0);
  *(undefined ***)(param_1 + 0xf18) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  FUN_1006421a8(param_1 + 0xff0);
  *(undefined ***)(param_1 + 0xff0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x1078);
  thunk_FUN_100652c08(param_1 + 0x1168);
  thunk_FUN_100652c08(param_1 + 0x1258);
  thunk_FUN_100652c08(param_1 + 0x1348);
  FUN_1006421a8(param_1 + 0x1438);
  *(undefined ***)(param_1 + 0x1438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x14c0);
  thunk_FUN_100650e64(param_1 + 0x15f0);
  thunk_FUN_100181304(param_1 + 0x1720,1);
  *(undefined8 *)(param_1 + 0x2cd8) = 0;
  *(undefined4 *)(param_1 + 0x2ce0) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x2ce8) = 0xffffffff;
  uVar1 = FUN_1004d2524("HUD_RecommendedPathSelector");
  uVar2 = FUN_100015208("HUD_RecommendedPathSelector",uVar1,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_100090118(param_1);
  return param_1;
}




long thunk_FUN_10008ffb8(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100269da8();
  *puVar3 = &PTR_thunk_FUN_100090580_1014500c0;
  FUN_10064e264(puVar3 + 0x19);
  FUN_10064e264(param_1 + 0x180);
  FUN_100269de4(param_1 + 0x238);
  thunk_FUN_1000dee58(param_1 + 0x300);
  FUN_1006421a8(param_1 + 0x688);
  *(undefined ***)(param_1 + 0x688) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x710);
  thunk_FUN_1006543ec(param_1 + 0x840);
  FUN_10053077c(param_1 + 0x9e0,0);
  FUN_10064fd54(param_1 + 0xf18,0);
  *(undefined ***)(param_1 + 0xf18) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  FUN_1006421a8(param_1 + 0xff0);
  *(undefined ***)(param_1 + 0xff0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x1078);
  thunk_FUN_100652c08(param_1 + 0x1168);
  thunk_FUN_100652c08(param_1 + 0x1258);
  thunk_FUN_100652c08(param_1 + 0x1348);
  FUN_1006421a8(param_1 + 0x1438);
  *(undefined ***)(param_1 + 0x1438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x14c0);
  thunk_FUN_100650e64(param_1 + 0x15f0);
  thunk_FUN_100181304(param_1 + 0x1720,1);
  *(undefined8 *)(param_1 + 0x2cd8) = 0;
  *(undefined4 *)(param_1 + 0x2ce0) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x2ce8) = 0xffffffff;
  uVar1 = FUN_1004d2524("HUD_RecommendedPathSelector");
  uVar2 = FUN_100015208("HUD_RecommendedPathSelector",uVar1,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_100090118(param_1);
  return param_1;
}

