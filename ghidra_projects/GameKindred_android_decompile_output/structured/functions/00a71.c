// functions/00a71 — 15 functions
#include "libGameKindred.h"




void FUN_00a71974(long param_1)

{
  FUN_00a70f9c(param_1 + -0x88);
  return;
}




void FUN_00a7197c(float param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0xcc);
  if (param_1 <= fVar2) {
    fVar3 = param_1 / fVar2;
    *(char *)(param_2 + 0xc4) =
         (char)(int)(fVar3 * (float)(int)((uint)*(byte *)(param_2 + 200) -
                                         (uint)*(byte *)(param_2 + 0xc4)) +
                    (float)(uint)*(byte *)(param_2 + 0xc4));
    *(char *)(param_2 + 0xc5) =
         (char)(int)(fVar3 * (float)(int)((uint)*(byte *)(param_2 + 0xc9) -
                                         (uint)*(byte *)(param_2 + 0xc5)) +
                    (float)(uint)*(byte *)(param_2 + 0xc5));
    *(char *)(param_2 + 0xc6) =
         (char)(int)(fVar3 * (float)(int)((uint)*(byte *)(param_2 + 0xca) -
                                         (uint)*(byte *)(param_2 + 0xc6)) +
                    (float)(uint)*(byte *)(param_2 + 0xc6));
    *(float *)(param_2 + 0xcc) = fVar2 - param_1;
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x84);
  *(undefined4 *)(param_2 + 0xcc) = 0;
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 200);
  if ((float)(uVar1 >> 7 & 0xff) / 255.0 == 0.0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xfffffffb;
    return;
  }
  *(uint *)(param_2 + 0x84) = uVar1 | 4;
  return;
}




undefined8 FUN_00a71a48(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00a71a60(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_00a71a78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd0f0;
  param_1[0x11] = &PTR_FUN_027cd200;
  FUN_00f0a79c(param_1 + 0x14);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a71ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd0f0;
  param_1[0x11] = &PTR_FUN_027cd200;
  FUN_00f0a79c(param_1 + 0x14);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a71b00(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_027cd0f0;
  *param_1 = &PTR_FUN_027cd200;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f01868(param_1 + -0x11);
  return;
}




void FUN_00a71b3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x11;
  *puVar1 = &PTR_FUN_027cd0f0;
  *param_1 = &PTR_FUN_027cd200;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f01868(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00a71b80(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  long *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027cd248;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x44;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x62;
  FUN_00f0d160(plVar3);
  FUN_00e70510(param_1 + 0x88);
  FUN_00e70510(param_1 + 0x8a);
  *(undefined4 *)(param_1 + 0x8c) = 0x40000000;
  pcStack_50 = thunk_FUN_00a71e34;
  local_58 = param_1;
  FUN_00f02e98(0xbf800000,&local_58,0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  uVar4 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1dc) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_0091ada4(plVar1);
  }
  puVar6 = PTR_s_build___Fonts_Avenir_Heavy_30_fo_02be9d00;
  FUN_00f0e540(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar2,"hud_warning");
  FUN_00f0d378(plVar3,puVar6);
  FUN_00f0da80(plVar3,&DAT_03131298);
  FUN_00f0da30(plVar3,1);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a71d0c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027cd248;
  pcStack_40 = thunk_FUN_00a71e34;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  if ((void *)param_1[0x8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b]);
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  if ((void *)param_1[0x89] != (void *)0x0) {
    operator_delete__((void *)param_1[0x89]);
    param_1[0x89] = 0;
    param_1[0x88] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x62);
  param_1[0x44] = &PTR_FUN_028266f0;
  param_1[0x5b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e);
  FUN_00f13d08(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a71e00(void *param_1)

{
  FUN_00a71d0c();
  operator_delete(param_1);
  return;
}




void FUN_00a71e24(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0x158,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a71e34(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0093d808();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(float *)(param_2 + 0x460) = *(float *)(param_2 + 0x460) - param_1;
  fVar3 = (float)FUN_009429bc();
  if (*(float *)(param_2 + 0x460) <= 0.0) {
    FUN_009427a8();
    *(undefined4 *)(param_2 + 0x460) = 0x40000000;
  }
  if (250.0 <= (float)(int)(fVar3 * 1000.0)) {
    if ((*(byte *)(param_2 + 0x218) & 1) != 0) goto LAB_00a71ed0;
    uVar4 = 0x3f800000;
    uVar2 = 1;
  }
  else {
    if ((*(byte *)(param_2 + 0x218) & 1) == 0) goto LAB_00a71ed0;
    uVar4 = 0x3f000000;
    uVar2 = 0;
  }
  FUN_00b89d24(uVar4,param_2 + 0x158,uVar2,4,0);
LAB_00a71ed0:
  if ((*(byte *)(param_2 + 0x218) & 1) == 0) {
    return;
  }
  FUN_00e70e18(param_2 + 0x440,"%d ms",(int)(float)(int)(fVar3 * 1000.0));
  FUN_00f0d75c(param_2 + 0x310,param_2 + 0x440);
  return;
}




void FUN_00a71f18(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x84);
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)(param_1 + 0x84) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_0091ada4(param_1);
  }
  lVar1 = param_1 + 0x158;
  FUN_00f13f08(0x41200000,0x41200000,lVar1);
  if (*(float *)(param_1 + 0x264) != 2.0) {
    *(undefined4 *)(param_1 + 0x264) = 0x40000000;
    FUN_0091ada4(param_1 + 0x220);
  }
  lVar2 = param_1 + 0x310;
  FUN_00f07b18(0x41200000,lVar2,3,param_1 + 0x220,1);
  fVar5 = *(float *)(param_1 + 0x198);
  fVar6 = *(float *)(param_1 + 0x19c);
  if ((fVar5 != 0.0) || (fVar6 != 0.0)) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    FUN_0091ada4(lVar1);
  }
  FUN_00e705c8(&local_68,"9999 ms");
  FUN_00f0d75c(lVar2,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f13238(param_1);
  FUN_00f0d75c(lVar2,param_1 + 0x440);
  if ((*(float *)(param_1 + 0x198) != fVar5) || (*(float *)(param_1 + 0x19c) != fVar6)) {
    *(float *)(param_1 + 0x198) = fVar5;
    *(float *)(param_1 + 0x19c) = fVar6;
    FUN_0091ada4(lVar1);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a71e34(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0093d808();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(float *)(param_2 + 0x460) = *(float *)(param_2 + 0x460) - param_1;
  fVar3 = (float)FUN_009429bc();
  if (*(float *)(param_2 + 0x460) <= 0.0) {
    FUN_009427a8();
    *(undefined4 *)(param_2 + 0x460) = 0x40000000;
  }
  if (250.0 <= (float)(int)(fVar3 * 1000.0)) {
    if ((*(byte *)(param_2 + 0x218) & 1) != 0) goto LAB_00a71ed0;
    uVar4 = 0x3f800000;
    uVar2 = 1;
  }
  else {
    if ((*(byte *)(param_2 + 0x218) & 1) == 0) goto LAB_00a71ed0;
    uVar4 = 0x3f000000;
    uVar2 = 0;
  }
  FUN_00b89d24(uVar4,param_2 + 0x158,uVar2,4,0);
LAB_00a71ed0:
  if ((*(byte *)(param_2 + 0x218) & 1) == 0) {
    return;
  }
  FUN_00e70e18(param_2 + 0x440,"%d ms",(int)(float)(int)(fVar3 * 1000.0));
  FUN_00f0d75c(param_2 + 0x310,param_2 + 0x440);
  return;
}

