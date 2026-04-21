// functions/00b8b — 23 functions
#include "libGameKindred.h"




void FUN_00b8b370(undefined8 param_1,undefined8 param_2)

{
  FUN_00b8b384(param_2);
  return;
}




void FUN_00b8b378(undefined8 param_1,undefined8 param_2)

{
  FUN_00b8b4f0(param_2);
  return;
}




void FUN_00b8b380(void)

{
  return;
}




void FUN_00b8b384(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&uStack_3c,&local_40);
  if (*(long *)(param_1 + 0x158) == 0) {
    FUN_00f0e548(param_1 + 0x88,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  }
  FUN_00f13f08(uStack_3c,local_40,param_1 + 0x88);
  lVar1 = param_1 + 0x178;
  if (*(long *)(param_1 + 0x248) == 0) {
    FUN_00f0e548(lVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
    FUN_00f0e670(lVar1,&DAT_01bee7f6,2);
  }
  FUN_00f13f08(uStack_3c,local_40 * 0.5,lVar1);
  lVar1 = param_1 + 0x268;
  if (*(long *)(param_1 + 0x338) == 0) {
    FUN_00f0e548(lVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
    FUN_00f0e670(lVar1,&DAT_01bee7f6,2);
  }
  FUN_00f13f08(uStack_3c,local_40 * 0.5,lVar1);
  FUN_00f0d92c(param_1 + 0x358,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  uVar3 = FUN_00e6ce7c("HUD_PAUSED_SCREEN_MESSAGE",0);
  FUN_00f0d75c(param_1 + 0x358,uVar3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8b4f0(long param_1)

{
  FUN_00f0e628(param_1 + 0x88);
  FUN_00f0e628(param_1 + 0x178);
  FUN_00f0e628(param_1 + 0x268);
  FUN_00f0d454(param_1 + 0x358);
  return;
}




void FUN_00b8b528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e8060;
  FUN_00f0d3a4(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b8b5d4(undefined8 *param_1)

{
  FUN_00ed45a4();
  FUN_00a99760(param_1 + 0x1b);
  *param_1 = &PTR_FUN_027e8160;
  param_1[0x1b] = &PTR_FUN_027e82b0;
  FUN_00f0e4a8(param_1 + 0x1e);
  FUN_00b0108c(param_1 + 0x3c);
  FUN_00f017e8(param_1 + 0x17c);
  param_1[0x17c] = &PTR_FUN_027c1f80;
  FUN_00ed2460(param_1 + 0x18d);
  memset(param_1 + 0x1c1,0,0x41);
  FUN_00b8b658(param_1);
  return;
}




void FUN_00b8b658(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *local_78;
  long *plStack_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17c,1);
  plVar1 = param_1 + 0x1e;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x3c;
  FUN_00f023ec(plVar1,plVar2,1);
  local_50 = DAT_03210c7c;
  local_78 = thunk_FUN_00b8bd8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  local_50 = DAT_03210c80;
  local_78 = FUN_00b8bbd0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  FUN_00f0e548(plVar1,PTR_s_build___RewardScreenBackground_p_02be3560,"full_splash_1k");
  if ((*(float *)(param_1 + 0x28) != 0.5) || (*(float *)((long)param_1 + 0x144) != 0.0)) {
    param_1[0x28] = 0x3f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_008fa54c(&local_78,"battered");
  FUN_00b01884(plVar2,&local_78);
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_008fa54c(&local_78,"IDLE_CLOSED");
  FUN_00b013a0(0xbf800000,plVar2,&local_78);
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_00b3ee24(0x3f800000,plVar2);
  FUN_00b028dc(plVar2,0);
  *(uint *)((long)param_1 + 0x264) = *(uint *)((long)param_1 + 0x264) & 0xfffffffb;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8b820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e8160;
  param_1[0x1b] = &PTR_FUN_027e82b0;
  if ((*(byte *)(param_1 + 0x1c6) & 1) != 0) {
    operator_delete((void *)param_1[0x1c8]);
  }
  if ((*(byte *)(param_1 + 0x1c3) & 1) != 0) {
    operator_delete((void *)param_1[0x1c5]);
  }
  FUN_008fefd4(param_1 + 0x1c1,1);
  FUN_00ed24bc(param_1 + 0x18d);
  FUN_00f01868(param_1 + 0x17c);
  FUN_00b029f4(param_1 + 0x3c);
  param_1[0x1e] = &PTR_FUN_028266f0;
  param_1[0x35] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x38);
  FUN_00f13d08(param_1 + 0x1e);
  FUN_00a997e0(param_1 + 0x1b);
  thunk_FUN_00f13d08(param_1);
  return;
}




void FUN_00b8b8dc(long param_1)

{
  FUN_00b8b820(param_1 + -0xd8);
  return;
}




void FUN_00b8b8e4(void *param_1)

{
  FUN_00b8b820();
  operator_delete(param_1);
  return;
}




void FUN_00b8b908(long param_1)

{
  FUN_00b8b820((void *)(param_1 + -0xd8));
  operator_delete((void *)(param_1 + -0xd8));
  return;
}




void FUN_00b8b930(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0091f2ec(0);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00ed4748(param_1), (uVar1 & 1) != 0)) {
    lVar2 = FUN_009b8d90();
    FUN_00af1db4(lVar2 + 0xc6e8);
    return;
  }
  return;
}




void FUN_00b8b97c(long param_1)

{
  FUN_00b8c840(param_1 + 0xe08);
  if (*(char *)(param_1 + 0xe48) != '\0') {
    FUN_00b8b9b8(param_1);
    return;
  }
  return;
}




void FUN_00b8b9b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  FUN_00b01d74(param_1 + 0x1e0,1,1,1);
  lVar1 = param_1 + 0xbe0;
  FUN_00f01980(lVar1);
  uVar3 = FUN_00efed6c(0);
  FUN_00f022a0(lVar1,uVar3);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar4 * 0x40);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(code **)(puVar5 + 8) = FUN_00b8c7c8;
  *(long *)(puVar5 + 0x10) = param_1;
  FUN_00f022a0(lVar1,puVar5);
  return;
}




void FUN_00b8bacc(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xe08) != 0) {
    return;
  }
  uVar1 = FUN_009b8d90();
  FUN_009ba2b4(uVar1,PTR_s_screen_main_hub_02be3690,1);
  return;
}




void FUN_00b8bafc(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  byte *__s1;
  byte *__s2;
  
  bVar2 = *param_2;
  bVar3 = *(byte *)(param_1 + 0xe18);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0xe20);
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_2 + 0x10);
    __s2 = *(byte **)(param_1 + 0xe28);
    if ((bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (byte *)(param_1 + 0xe19);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          param_2 = param_2 + 1;
          if (*param_2 != *__s2) {
            return;
          }
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
    FUN_00a06b24();
    uVar5 = FUN_00a06c7c();
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_009b8d90();
      FUN_009ba2b4(uVar6,PTR_s_screen_main_hub_02be3690,1);
      return;
    }
  }
  return;
}




void FUN_00b8bbc4(long param_1)

{
  FUN_00b8bafc(param_1 + -0xd8);
  return;
}




void thunk_FUN_00b8bd8c(long param_1)

{
  FUN_00affa84();
  FUN_00aa1814(param_1 + 0xc68);
  FUN_00b8bc0c(param_1);
  if ((*(byte *)(param_1 + 0xe30) & 1) == 0) {
    if (*(byte *)(param_1 + 0xe30) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xe38) == 0) {
    return;
  }
  FUN_00b8bde4(param_1);
  return;
}




void FUN_00b8bbd0(long param_1)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) & 0xfffffffb;
  lVar1 = FUN_009b8d90();
  FUN_00af3474(lVar1 + 0xc6e8);
  FUN_00b8c4c4(param_1);
  return;
}




void FUN_00b8bc0c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float local_d8;
  float fStack_d4;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_58;
  void *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_d8,(ulong)&local_d8 | 4);
  uVar3 = FUN_00cce574();
  FUN_00cce224(local_d0,uVar3,param_1 + 0xe30);
  lVar1 = param_1 + 0xf0;
  FUN_00f0e670(lVar1,auStack_40,2);
  FUN_00f13f08(local_d8 * 1.01,local_d8 * 1.01,lVar1);
  if ((*(float *)(param_1 + 0x130) != local_d8 * 0.5) ||
     (*(float *)(param_1 + 0x134) != local_d8 * -0.01)) {
    *(float *)(param_1 + 0x130) = local_d8 * 0.5;
    *(float *)(param_1 + 0x134) = local_d8 * -0.01;
    FUN_0091ada4(lVar1);
  }
  FUN_00b01bd0(param_1 + 0x1e0);
  if ((*(float *)(param_1 + 0x220) != local_d8 * 0.5) ||
     (*(float *)(param_1 + 0x224) != fStack_d4 * 0.5)) {
    *(ulong *)(param_1 + 0x220) = CONCAT44(fStack_d4 * 0.5,local_d8 * 0.5);
    FUN_0091ada4(param_1 + 0x1e0);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8bd8c(long param_1)

{
  FUN_00affa84();
  FUN_00aa1814(param_1 + 0xc68);
  FUN_00b8bc0c(param_1);
  if ((*(byte *)(param_1 + 0xe30) & 1) == 0) {
    if (*(byte *)(param_1 + 0xe30) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xe38) == 0) {
    return;
  }
  FUN_00b8bde4(param_1);
  return;
}




void FUN_00b8bde4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float local_98;
  float fStack_94;
  void *local_88;
  float local_80 [2];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0xe48) = 0;
  FUN_00f00298(local_80,(ulong)local_80 | 4);
  FUN_00b8c508(param_1);
  FUN_00b8c620(param_1);
  uVar4 = FUN_00efef08(FUN_009a71a4);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x14] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    *(undefined ***)puVar6 = &PTR_FUN_027d0db0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_008fa54c(&local_98,"build://Sounds/UI.assetbundle/sfx_chest_land.mp3");
  FUN_00a99c48(puVar6,&local_98,0,0);
  if (((uint)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f051eb8,puVar7);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar8);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar8,uVar4,puVar6,puVar7,0);
  lVar1 = param_1 + 0x1e0;
  FUN_00f022a0(lVar1,puVar8);
  FUN_008fa54c(&local_98,"DROP_LANDING");
  FUN_00b013a0(0xbf800000,lVar1,&local_98);
  if ((local_98._0_1_ & 1) != 0) {
    operator_delete(local_88);
  }
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  *(code **)(puVar6 + 8) = FUN_00b8c6c8;
  *(long *)(puVar6 + 0x10) = param_1;
  FUN_00f022a0(lVar1,puVar6);
  param_1 = param_1 + 0xf0;
  fVar9 = local_80[0] * 0.03;
  FUN_00f01980(param_1);
  uVar4 = FUN_00efed6c(0x3e800000);
  FUN_00f022a0(param_1,uVar4);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd6a4(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3d4ccccd,puVar6);
  fVar10 = -fVar9;
  local_98 = fVar10;
  fStack_94 = fVar9;
  FUN_00efd6ec(puVar6,&local_98);
  FUN_00f022a0(param_1,puVar6);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd6a4(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3d4ccccd,puVar6);
  local_98 = fVar9;
  fStack_94 = fVar10;
  FUN_00efd6ec(puVar6,&local_98);
  FUN_00f022a0(param_1,puVar6);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd6a4(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3d4ccccd,puVar6);
  local_98 = fVar10;
  fStack_94 = fVar10;
  FUN_00efd6ec(puVar6,&local_98);
  FUN_00f022a0(param_1,puVar6);
  lVar1 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd6a4(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3d4ccccd,puVar6);
  local_98 = fVar9;
  fStack_94 = fVar9;
  FUN_00efd6ec(puVar6,&local_98);
  FUN_00f022a0(param_1,puVar6);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

