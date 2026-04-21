// functions/00c65 — 15 functions
#include "libGameKindred.h"




void thunk_FUN_00c6567c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  long lVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00ad9de4(param_1 + 0x230,param_4,param_2,param_5,param_3);
  uStack_40 = param_4;
  FUN_00c1c9c8(param_1 + 0x150,&uStack_40);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c65154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff6f8;
  FUN_00f0d3a4(param_1 + 0xb0);
  param_1[0x92] = &PTR_FUN_028266f0;
  param_1[0xa9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xac);
  FUN_00f13d08(param_1 + 0x92);
  param_1[0x67] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c65230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff6f8;
  FUN_00f0d3a4(param_1 + 0xb0);
  param_1[0x92] = &PTR_FUN_028266f0;
  param_1[0xa9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xac);
  FUN_00f13d08(param_1 + 0x92);
  param_1[0x67] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c65314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff5b0;
  FUN_009c7fa8(param_1 + 0x187);
  FUN_00c65154(param_1 + 0xb1);
  FUN_00f0d3a4(param_1 + 0x8b);
  param_1[0x60] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x77);
  FUN_00f13d08(param_1 + 0x60);
  FUN_00f0d3a4(param_1 + 0x3a);
  param_1[0x1c] = &PTR_FUN_028266f0;
  param_1[0x33] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x36);
  FUN_00f13d08(param_1 + 0x1c);
  thunk_FUN_00f13d08(param_1);
  return;
}




void FUN_00c653b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff5b0;
  FUN_009c7fa8(param_1 + 0x187);
  param_1[0xb1] = &PTR_FUN_027ff6f8;
  FUN_00f0d3a4(param_1 + 0x161);
  param_1[0x143] = &PTR_FUN_028266f0;
  param_1[0x15a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15d);
  FUN_00f13d08(param_1 + 0x143);
  param_1[0x118] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x12f);
  FUN_00f13d08(param_1 + 0x118);
  param_1[0xfa] = &PTR_FUN_028266f0;
  param_1[0x111] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x114);
  FUN_00f13d08(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_028266f0;
  param_1[0xf3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf6);
  FUN_00f13d08(param_1 + 0xdc);
  param_1[0xb1] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 200);
  FUN_00f13d08(param_1 + 0xb1);
  FUN_00f0d3a4(param_1 + 0x8b);
  param_1[0x60] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x77);
  FUN_00f13d08(param_1 + 0x60);
  FUN_00f0d3a4(param_1 + 0x3a);
  param_1[0x1c] = &PTR_FUN_028266f0;
  param_1[0x33] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x36);
  FUN_00f13d08(param_1 + 0x1c);
  thunk_FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c65500(long *param_1)

{
  FUN_00f0ac5c();
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = (long)&PTR_FUN_027ff848;
  FUN_00b043c8(param_1 + 0x2c);
  FUN_00ad9950(param_1 + 0x46,param_1 + 0x2c);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x46,1);
  *(uint *)((long)param_1 + 0xf4c) = *(uint *)((long)param_1 + 0xf4c) | 4;
  return;
}




void FUN_00c65580(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x2a);
  *param_1 = &PTR_FUN_027ff848;
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[0x2b] + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0x2b] + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x2a);
        puVar3 = (undefined8 *)(param_1[0x2b] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (param_1[0x2b] != 0) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  FUN_00ad9b6c(param_1 + 0x46);
  FUN_00b04404(param_1 + 0x2c);
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c65650(void *param_1)

{
  FUN_00c65580();
  operator_delete(param_1);
  return;
}




void FUN_00c65674(long param_1)

{
  FUN_00f13f08(param_1 + 0x230);
  return;
}




void FUN_00c6567c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ad9de4(param_1 + 0x230,param_4,param_2,param_5,param_3);
  local_40 = param_4;
  FUN_00c1c9c8(param_1 + 0x150,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c656f8(long param_1,undefined8 param_2)

{
  FUN_00ada188(param_1 + 0x230,param_2,0);
  return;
}




void FUN_00c65704(undefined8 *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_027ff998;
  FUN_00f0e4a8(param_1 + 0x18);
  FUN_00f0e4a8(param_1 + 0x36);
  FUN_00f0e4a8(param_1 + 0x54);
  FUN_00f0e4a8(param_1 + 0x72);
  FUN_00f0e4a8(param_1 + 0x90);
  FUN_00ca7c60(param_1 + 0xae);
  FUN_00ca7c60(param_1 + 0x161);
  FUN_00ca7c60(param_1 + 0x214);
  *(undefined2 *)((long)param_1 + 0x163c) = 0;
  *(undefined4 *)(param_1 + 0x2c7) = 3;
  *(undefined1 *)((long)param_1 + 0x163e) = 0;
  return;
}




void FUN_00c65790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff998;
  FUN_00ca7d2c(param_1 + 0x214);
  FUN_00ca7d2c(param_1 + 0x161);
  FUN_00ca7d2c(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_028266f0;
  param_1[0xa7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaa);
  FUN_00f13d08(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_028266f0;
  param_1[0x89] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x72);
  param_1[0x54] = &PTR_FUN_028266f0;
  param_1[0x6b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6e);
  FUN_00f13d08(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_028266f0;
  param_1[0x4d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c65880(void *param_1)

{
  FUN_00c65790();
  operator_delete(param_1);
  return;
}




void FUN_00c658a4(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 local_b8;
  void *local_b0;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  plVar10 = param_1 + 0x18;
  *(int *)(param_1 + 0x2c7) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  plVar11 = param_1 + 0x36;
  FUN_00f023ec(plVar10,plVar11,1);
  plVar1 = param_1 + 0xae;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x161;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x214;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x72,1);
  uVar7 = FUN_00f1379c();
  FUN_00f173d8(uVar7,plVar10);
  FUN_00f13fd8(param_1,uVar7);
  uVar8 = FUN_009c1050();
  puVar13 = PTR_s_build___HUDPartsCommon_atlas_02be3440;
  if (((uVar8 & 1) == 0) &&
     (uVar8 = FUN_009b8d9c(), puVar13 = PTR_s_build___MenuPartsCommon_tga_02be3530, (uVar8 & 1) == 0
     )) {
    puVar13 = (undefined *)0x0;
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  FUN_00f0e548(plVar10,puVar13,"circle_button_fill");
  FUN_00f14070(plVar10,&DAT_02bf25b4);
  FUN_00f0e548(plVar11,puVar13,"voip_phone");
  FUN_00f0e670(plVar11,&DAT_01bee7f6,2);
  uVar12 = *(uint *)((long)param_1 + 0x234);
  if ((uVar12 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x234) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x5900;
    FUN_0091ada4(plVar11);
  }
  uVar8 = FUN_009c1050();
  if ((uVar8 & 1) == 0) {
    uVar7 = FUN_00f1379c();
    FUN_00f173d8(uVar7,plVar11);
    FUN_00f13fd8(plVar10,uVar7);
  }
  else {
    FUN_00f0e9c0(plVar11,1);
    if ((*(float *)(param_1 + 0x3f) != 0.75) || (*(float *)((long)param_1 + 0x1fc) != 0.75)) {
      lVar14 = NEON_fmov(0x3f400000,4);
      param_1[0x3f] = lVar14;
      FUN_0091ada4(plVar11);
    }
  }
  local_80 = DAT_03210f84;
  local_a8 = FUN_00c66064;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(param_1 + 0x19,&local_a8);
  local_a8 = FUN_00c66064;
  local_80 = DAT_03210f58;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_009693a0(param_1 + 0x19,&local_a8);
  local_a8 = (code *)0x439f000043fa0000;
  FUN_00f13f18(plVar1,&local_a8);
  uVar7 = FUN_00e6ce7c("VOIP_JOIN_VOICE_CHAT",0);
  uVar9 = FUN_00e6ce7c("VOIP_LEAVE_VOICE_CHAT",0);
  lVar14 = FUN_00ca8144(plVar1,0,"voip_phone",uVar7,"voip_leave",uVar9,1);
  FUN_00f13f18(lVar14,&DAT_01bbe250);
  FUN_00f13f68(lVar14,0x64000001f4);
  local_90 = 0;
  uStack_88 = 0;
  uVar5 = DAT_03210c64;
  local_a8 = FUN_00c66074;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar5;
  FUN_009693a0(lVar14 + 0x248,&local_a8);
  local_a8 = FUN_00c66084;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar5;
  FUN_009693a0(lVar14 + 0x818,&local_a8);
  FUN_00ca8350(0x43c80000,0x40000000,plVar1,1);
  uVar7 = FUN_00e6ce7c("VOIP_MUTE_SELF",0);
  uVar9 = FUN_00e6ce7c("VOIP_UNMUTE_SELF",0);
  lVar14 = FUN_00ca8144(plVar1,1,"voip_mute",uVar7,"voip_unmuted",uVar9,1);
  FUN_00f13f18(lVar14,&DAT_01bbe250);
  FUN_00f13f68(lVar14,0x64000001f4);
  local_a8 = FUN_00c66094;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar5;
  FUN_009693a0(lVar14 + 0x248,&local_a8);
  local_a8 = FUN_00c660a4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar5;
  FUN_009693a0(lVar14 + 0x818,&local_a8);
  FUN_00ca8350(0x43c80000,0x40000000,plVar1,2);
  uVar7 = FUN_00e6ce7c("VOIP_MUTE_ALLY",0);
  lVar14 = FUN_00ca806c(plVar1,2,"speaker_icon",uVar7);
  FUN_00f13f18(lVar14,&DAT_01bbe250);
  FUN_00f13f68(lVar14,0x64000001f4);
  plVar10 = (long *)FUN_00ca79a8(lVar14);
  plVar11 = (long *)FUN_00f14058();
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x78))(plVar10,param_1 + 0x90,1);
    (**(code **)(*plVar11 + 0x58))(plVar11,param_1 + 0x90);
    (**(code **)(*plVar11 + 0x70))(plVar11,0x14);
  }
  FUN_00f0e548(param_1 + 0x90,puVar13,"arrow_right");
  local_a8 = FUN_00c660b4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar5;
  FUN_009693a0(lVar14 + 8,&local_a8);
  uVar12 = (uint)*(byte *)((long)param_1 + 0x163c);
  pcVar4 = "arrow_bg_arrow";
  if (param_2 != 0) {
    pcVar4 = "arrow_bg_arrow_right";
  }
  *(uint *)((long)param_1 + 0x5f4) =
       *(uint *)((long)param_1 + 0x5f4) & 0xfffffff3 | uVar12 << 2 | uVar12 << 3;
  FUN_00f0e548(param_1 + 0x54,puVar13,pcVar4);
  if (param_2 == 1) {
    *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) | 1;
  }
  uVar12 = (uint)*(byte *)((long)param_1 + 0x163c);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0xfffffff3 | uVar12 << 2 | uVar12 << 3;
  FUN_00f13f18(plVar2,&DAT_01bbe250);
  uVar7 = FUN_00e6ce7c("VOIP_MUTE_ALL",0);
  uVar9 = FUN_00e6ce7c("VOIP_UNMUTE_ALL",0);
  lVar14 = FUN_00ca8144(plVar2,3,"speaker_icon",uVar7,"speaker_icon_mute",uVar9,1);
  FUN_00f13f18(lVar14,&DAT_01bbe250);
  FUN_00f13f68(lVar14,0x64000001f4);
  local_a8 = FUN_00c660c4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar5;
  FUN_009693a0(lVar14 + 0x248,&local_a8);
  local_a8 = FUN_00c660d4;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar5;
  FUN_009693a0(lVar14 + 0x818,&local_a8);
  *(uint *)((long)param_1 + 0xb8c) =
       *(uint *)((long)param_1 + 0xb8c) & 0xfffffff3 | (uint)*(byte *)((long)param_1 + 0x163d) << 2
       | (uint)*(byte *)((long)param_1 + 0x163d) << 3;
  FUN_00f0e548(param_1 + 0x72,puVar13,"arrow_bg_arrow_right");
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 1;
  *(uint *)((long)param_1 + 0x414) =
       *(uint *)((long)param_1 + 0x414) & 0xfffffff3 | (uint)*(byte *)((long)param_1 + 0x163d) << 2
       | (uint)*(byte *)((long)param_1 + 0x163d) << 3;
  FUN_00f13f08(0x44834000,0x43e10000,plVar3);
  uVar7 = FUN_00e6ce7c("VOIP_CANNOT_USE_REASON",0);
  thunk_FUN_00e7051c(&local_a8,uVar7);
  FUN_00e705c8(&local_b8,"\n\n");
  FUN_00e70c34(&local_a8,&local_b8);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  uVar7 = FUN_00e6ce7c("VOIP_CANNOT_USE_TIP",0);
  FUN_00e70c34(&local_a8,uVar7);
  FUN_00ca8244(plVar3,0x7b,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&local_a8);
  *(uint *)((long)param_1 + 0x1124) =
       *(uint *)((long)param_1 + 0x1124) & 0xfffffff3 | (uint)*(byte *)((long)param_1 + 0x163e) << 2
       | (uint)*(byte *)((long)param_1 + 0x163e) << 3;
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (long *)0x0;
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

