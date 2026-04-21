// functions/00b65 — 10 functions
#include "libGameKindred.h"




void FUN_00b651c4(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  FUN_00af6c14(param_1 + 0x1b8);
  FUN_00af6d64((float)param_3,(float)param_4,param_1 + 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x00b65218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00b6521c(long param_1)

{
  FUN_00b651c4(param_1 + -200);
  return;
}




void FUN_00b65228(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
    FUN_00f048e0(auStack_48,uVar2,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 0x20),auStack_48,1);
  }
  if (*(code **)(param_1 + 0x5540) != (code *)0x0) {
    (**(code **)(param_1 + 0x5540))(*(undefined8 *)(param_1 + 0x5538),0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b65228(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
    FUN_00f048e0(auStack_48,uVar2,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 0x20),auStack_48,1);
  }
  if (*(code **)(param_1 + 0x5540) != (code *)0x0) {
    (**(code **)(param_1 + 0x5540))(*(undefined8 *)(param_1 + 0x5538),0);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b652bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b65f40(param_1,param_2,param_5);
  return;
}




void thunk_FUN_00b65228(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
    FUN_00f048e0(auStack_48,uVar2,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 0x20),auStack_48,1);
  }
  if (*(code **)(param_1 + 0x5540) != (code *)0x0) {
    (**(code **)(param_1 + 0x5540))(*(undefined8 *)(param_1 + 0x5538),0);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b652c8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float local_74;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&local_74,&local_78);
  FUN_00f13f08(local_74,local_78,param_1 + 0xd0);
  lVar4 = param_1 + 0x188;
  if ((*(float *)(param_1 + 0x1c8) != local_74 * 0.5) || (*(float *)(param_1 + 0x1cc) != 0.0)) {
    *(float *)(param_1 + 0x1c8) = local_74 * 0.5;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    FUN_0091ada4(lVar4);
  }
  local_70 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x188) + 0x28))(lVar4,&local_70);
  FUN_00f13f08(0x452f0000,local_78,lVar4);
  lVar4 = param_1 + 0x328;
  FUN_00f13f08(0x44d20001,local_78,lVar4);
  if ((*(float *)(param_1 + 0x368) != 0.0) || (*(float *)(param_1 + 0x36c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x368) = 0;
    FUN_0091ada4(lVar4);
  }
  local_70 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x328) + 0x28))(lVar4,&local_70);
  lVar5 = param_1 + 0x508;
  FUN_00f13f08(0x43480000,local_78,lVar5);
  if ((*(float *)(param_1 + 0x548) != -840.00006) || (*(float *)(param_1 + 0x54c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x548) = 0xc4520001;
    FUN_0091ada4(lVar5);
  }
  local_70 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x508) + 0x28))(lVar5,&local_70);
  lVar5 = param_1 + 0x418;
  FUN_00f13f08(0x43480000,local_78,lVar5);
  if ((*(float *)(param_1 + 0x458) != 840.00006) || (*(float *)(param_1 + 0x45c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x458) = 0x44520001;
    FUN_0091ada4(lVar5);
  }
  local_70 = 0;
  (**(code **)(*(long *)(param_1 + 0x418) + 0x28))(lVar5,&local_70);
  lVar5 = param_1 + 0xcd0;
  uVar2 = FUN_00f02540(lVar5);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0xdc0;
    uVar2 = FUN_00f02540(lVar3);
    if ((uVar2 & 1) != 0) {
      fVar8 = *(float *)(param_1 + 0x5550);
      if (fVar8 <= 0.0) {
        fVar8 = (float)FUN_00f0e700(lVar4);
        fVar11 = (float)FUN_00f01c20(lVar3);
        fVar10 = *(float *)(param_1 + 0xe08);
        fVar8 = (float)NEON_fminnm((fVar8 + -10.0) / fVar11,0x3f800000);
      }
      else {
        fVar10 = *(float *)(param_1 + 0xe08);
      }
      if ((fVar10 != fVar8) || (*(float *)(param_1 + 0xe0c) != fVar8)) {
        *(float *)(param_1 + 0xe08) = fVar8;
        *(float *)(param_1 + 0xe0c) = fVar8;
        goto LAB_00b65588;
      }
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x5550);
    if (fVar8 <= 0.0) {
      fVar8 = (float)FUN_00f0e700(lVar4);
      fVar11 = (float)FUN_00f0eac0(lVar5);
      fVar10 = *(float *)(param_1 + 0xd18);
      fVar8 = (float)NEON_fminnm((fVar8 + -10.0) / fVar11,0x3f800000);
    }
    else {
      fVar10 = *(float *)(param_1 + 0xd18);
    }
    if ((fVar10 != fVar8) || (*(float *)(param_1 + 0xd1c) != fVar8)) {
      *(float *)(param_1 + 0xd18) = fVar8;
      *(float *)(param_1 + 0xd1c) = fVar8;
      lVar3 = lVar5;
LAB_00b65588:
      FUN_0091ada4(lVar3);
    }
  }
  lVar4 = param_1 + 0xea8;
  FUN_00f0db64(0x44af0000,0,0x3f800000,lVar4);
  if ((*(float *)(param_1 + 0xee8) != 0.0) || (*(float *)(param_1 + 0xeec) != 0.0)) {
    *(undefined8 *)(param_1 + 0xee8) = 0;
    FUN_0091ada4(lVar4);
  }
  local_70 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xea8) + 0x28))(lVar4,&local_70);
  fVar8 = (float)FUN_00f0d4e0(param_1 + 0x10e8);
  fVar11 = *(float *)(param_1 + 0x1128);
  if (fVar11 != fVar8 * -0.5) {
    *(float *)(param_1 + 0x1128) = fVar8 * -0.5;
    FUN_0091ada4(param_1 + 0x10e8);
  }
  uVar2 = FUN_00f02540(lVar5);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 0xdc0;
    uVar2 = FUN_00f02540(lVar3);
    if ((uVar2 & 1) != 0) {
      fVar10 = *(float *)(param_1 + 0xeec);
      FUN_00f0d4e0(lVar4);
      fVar10 = fVar10 + fVar11;
      FUN_00f01c20(lVar3);
      fVar10 = fVar10 + fVar11 * 0.5;
      fVar8 = fVar10 + 16.0;
      if ((*(float *)(param_1 + 0xe00) != 0.0) ||
         (fVar10 = *(float *)(param_1 + 0xe04), fVar10 != fVar8)) {
        *(undefined4 *)(param_1 + 0xe00) = 0;
        *(float *)(param_1 + 0xe04) = fVar8;
        FUN_0091ada4(lVar3);
      }
      local_70 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0xdc0) + 0x28))(lVar3,&local_70);
      fVar8 = *(float *)(param_1 + 0xe04);
      FUN_00f01c20(lVar3);
      goto LAB_00b65728;
    }
    fVar8 = *(float *)(param_1 + 0xeec);
    FUN_00f01c20(lVar4);
    fVar9 = *(float *)(param_1 + 0x1018);
  }
  else {
    fVar10 = *(float *)(param_1 + 0xeec);
    FUN_00f0d4e0(lVar4);
    fVar10 = fVar10 + fVar11;
    FUN_00f0eac0(lVar5);
    fVar10 = fVar10 + fVar11 * 0.5;
    fVar8 = fVar10 + 16.0;
    if ((*(float *)(param_1 + 0xd10) != 0.0) ||
       (fVar10 = *(float *)(param_1 + 0xd14), fVar10 != fVar8)) {
      *(undefined4 *)(param_1 + 0xd10) = 0;
      *(float *)(param_1 + 0xd14) = fVar8;
      FUN_0091ada4(lVar5);
    }
    local_70 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0xcd0) + 0x28))(lVar5,&local_70);
    fVar8 = *(float *)(param_1 + 0xd14);
    FUN_00f0eac0(lVar5);
LAB_00b65728:
    fVar9 = *(float *)(param_1 + 0x1018);
    fVar11 = fVar10 * 0.5;
  }
  fVar8 = fVar8 + fVar11;
  fVar11 = fVar8 + 5.0;
  if ((fVar9 != 0.0) || (fVar8 = *(float *)(param_1 + 0x101c), fVar8 != fVar11)) {
    *(undefined4 *)(param_1 + 0x1018) = 0;
    *(float *)(param_1 + 0x101c) = fVar11;
    FUN_0091ada4(param_1 + 0xfd8);
  }
  if (*(long *)(param_1 + 0x5468) != 0) {
    uVar2 = FUN_00f02540(lVar5);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_00f02540(param_1 + 0xdc0);
      plVar6 = *(long **)(param_1 + 0x5468);
      if ((uVar2 & 1) == 0) {
        fVar8 = *(float *)(param_1 + 0x1128);
        fVar11 = *(float *)(param_1 + 0x112c);
      }
      else {
        fVar8 = *(float *)(param_1 + 0xe00);
        fVar11 = *(float *)(param_1 + 0xe04);
      }
    }
    else {
      plVar6 = *(long **)(param_1 + 0x5468);
      fVar8 = *(float *)(param_1 + 0xd10);
      fVar11 = *(float *)(param_1 + 0xd14);
    }
    local_70 = 0x3f0000003f000000;
    if ((*(float *)(plVar6 + 8) != fVar8) || (*(float *)((long)plVar6 + 0x44) != fVar11)) {
      *(float *)(plVar6 + 8) = fVar8;
      *(float *)((long)plVar6 + 0x44) = fVar11;
      FUN_0091ada4(plVar6);
    }
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_70);
    lVar4 = *(long *)(param_1 + 0x5468);
    fVar11 = *(float *)(param_1 + 0x5554);
    fVar8 = *(float *)(lVar4 + 0x48);
    if ((fVar8 != fVar11) || (fVar8 = *(float *)(lVar4 + 0x4c), fVar8 != fVar11)) {
      *(float *)(lVar4 + 0x48) = fVar11;
      *(float *)(lVar4 + 0x4c) = fVar11;
      FUN_0091ada4();
    }
  }
  fVar11 = local_78;
  lVar5 = param_1 + 0x12a0;
  FUN_00f13e54(lVar5);
  fVar8 = (fVar11 - fVar8) + -120.0;
  FUN_00f13f08(local_74,param_1 + 0x5f8);
  lVar4 = param_1 + 0x798;
  FUN_00ed0418(lVar4,1);
  if (*(char *)(param_1 + 0x554c) == '\0') {
    bVar7 = false;
  }
  else {
    FUN_00ed0464(lVar4);
    fVar11 = fVar8;
    FUN_00f13e54(param_1 + 0x5f8);
    bVar7 = fVar11 < fVar8;
    fVar8 = fVar11;
  }
  FUN_00ed06a4(lVar4,0);
  FUN_00ed04d8(lVar4,0,bVar7);
  FUN_00f13e54(lVar5);
  fVar8 = local_78 + fVar8 * -0.5 + -50.0;
  if (*(float *)(param_1 + 0x12e4) != fVar8) {
    *(float *)(param_1 + 0x12e4) = fVar8;
    FUN_0091ada4(lVar5);
  }
  lVar4 = param_1 + 0x2860;
  if (*(float *)(param_1 + 0x28a4) != fVar8) {
    *(float *)(param_1 + 0x28a4) = fVar8;
    FUN_0091ada4(lVar4);
  }
  if (*(float *)(param_1 + 0x3e64) != fVar8) {
    *(float *)(param_1 + 0x3e64) = fVar8;
    FUN_0091ada4(param_1 + 0x3e20);
  }
  FUN_00f08be8(param_1 + 0x3050);
  uVar2 = FUN_00e70b04();
  if ((uVar2 & 1) == 0) {
LAB_00b65970:
    FUN_00f08be8(param_1 + 0x4610);
    uVar2 = FUN_00e70b04();
    if ((uVar2 & 1) == 0) {
      if (*(float *)(param_1 + 0x12e0) != 554.4001) {
        *(undefined4 *)(param_1 + 0x12e0) = 0x440a999b;
        FUN_0091ada4(lVar5);
      }
      if (*(float *)(param_1 + 0x3e60) != 0.0) {
        *(undefined4 *)(param_1 + 0x3e60) = 0;
        FUN_0091ada4(param_1 + 0x3e20);
      }
      if (*(float *)(param_1 + 0x28a0) == -554.4001) goto LAB_00b65a38;
      *(undefined4 *)(param_1 + 0x28a0) = 0xc40a999b;
      lVar5 = lVar4;
    }
    else {
      if (*(float *)(param_1 + 0x28a0) != -420.00003) {
        *(undefined4 *)(param_1 + 0x28a0) = 0xc3d20001;
        FUN_0091ada4(lVar4);
      }
      if (*(float *)(param_1 + 0x12e0) == 420.00003) goto LAB_00b65a38;
      *(undefined4 *)(param_1 + 0x12e0) = 0x43d20001;
    }
  }
  else {
    FUN_00f08be8(param_1 + 0x4610);
    uVar2 = FUN_00e70b04();
    if ((uVar2 & 1) == 0) goto LAB_00b65970;
    if (*(float *)(param_1 + 0x12e0) == 0.0) goto LAB_00b65a38;
    *(undefined4 *)(param_1 + 0x12e0) = 0;
  }
  FUN_0091ada4(lVar5);
LAB_00b65a38:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b65a6c(undefined8 param_1,uint param_2)

{
  FUN_00b65a74(param_1,param_2 & 1);
  return;
}




void FUN_00b65a74(long param_1,ulong param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  ushort uVar10;
  long lVar11;
  void *pvVar12;
  size_t sVar13;
  ushort *puVar14;
  byte bVar15;
  size_t sVar16;
  uint local_88;
  undefined4 uStack_84;
  void *local_78;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00f00298(auStack_6c,&local_70);
  lVar1 = DAT_03210d00;
  uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar10 == 0xffff) {
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar14 = (ushort *)(DAT_03210d00 + (ulong)uVar10 * 0x40 + 0x10);
    if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar10 = 0xffff;
    }
    else {
      uVar10 = *puVar14;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efe8d0(puVar14);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar14);
  lVar1 = param_1 + 0x188;
  if ((param_2 & 1) == 0) {
    local_88 = 0;
    uStack_84 = local_70;
    FUN_00efe91c(puVar14,lVar1,&local_88);
    FUN_00efcb24(puVar14,FUN_0091aa80);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,puVar14);
    FUN_00b64c7c(param_1);
    goto LAB_00b65f0c;
  }
  local_88 = 0x44af0000;
  uStack_84 = local_70;
  FUN_00efe91c(puVar14,lVar1,&local_88);
  FUN_00efcb24(puVar14,FUN_00a269a4);
  FUN_00f13f08(0,local_70,lVar1);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar14);
  sVar13 = DAT_0320ffb0;
  bVar4 = *(byte *)(param_1 + 0x5518);
  sVar16 = (size_t)(DAT_0320ffa8 >> 1);
  sVar3 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar3 = *(size_t *)(param_1 + 0x5520);
  }
  sVar2 = sVar16;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar3 == sVar2) {
    pvVar12 = *(void **)(param_1 + 0x5528);
    bVar15 = DAT_0320ffa8 & 1;
    if ((bVar4 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x5519);
    }
    pcVar8 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar9 = (char *)(param_1 + 0x5519);
        lVar11 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00b65c88;
          pcVar9 = pcVar9 + 1;
          lVar11 = lVar11 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar6 = memcmp(pvVar12,pcVar8,sVar3), iVar6 != 0)) goto LAB_00b65c88;
  }
  else {
LAB_00b65c88:
    lVar11 = DAT_03210d00;
    uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar10 == 0xffff) {
      puVar14 = (ushort *)0x0;
      if ((bVar4 & 1) == 0) goto LAB_00b65d38;
LAB_00b65cd4:
      lVar11 = *(long *)(param_1 + 0x5528);
    }
    else {
      puVar14 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar10 * 0x40);
      if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar10 = 0xffff;
      }
      else {
        uVar10 = *puVar14;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
      *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
      FUN_00efc8e8(puVar14);
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[0xb] = 0;
      puVar14[0xc] = 0;
      puVar14[0xd] = 0;
      puVar14[0xe] = 0;
      puVar14[0xf] = 0;
      puVar14[0x14] = 0;
      puVar14[0x10] = 0;
      puVar14[0x11] = 0;
      puVar14[0x12] = 0;
      puVar14[0x13] = 0;
      *(undefined ***)puVar14 = &PTR_FUN_027d0db0;
      *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
      if ((*(byte *)(param_1 + 0x5518) & 1) != 0) goto LAB_00b65cd4;
LAB_00b65d38:
      lVar11 = param_1 + 0x5519;
    }
    FUN_008fa54c(&local_88,lVar11);
    FUN_00a99c48(puVar14,&local_88,0,1);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
    FUN_00f022a0(lVar1,puVar14);
    bVar15 = DAT_0320ffa8 & 1;
    sVar16 = (size_t)(DAT_0320ffa8 >> 1);
    sVar13 = DAT_0320ffb0;
  }
  bVar4 = *(byte *)(param_1 + 0x5500);
  sVar3 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar3 = *(size_t *)(param_1 + 0x5508);
  }
  if (bVar15 != 0) {
    sVar16 = sVar13;
  }
  if (sVar3 == sVar16) {
    pvVar12 = *(void **)(param_1 + 0x5510);
    if ((bVar4 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x5501);
    }
    pcVar8 = DAT_0320ffb8;
    if (bVar15 == 0) {
      pcVar8 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar9 = (char *)(param_1 + 0x5501);
        lVar11 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar9 != *pcVar8) goto LAB_00b65e08;
          pcVar9 = pcVar9 + 1;
          lVar11 = lVar11 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00b65f0c;
    }
    if ((sVar3 == 0) || (iVar6 = memcmp(pvVar12,pcVar8,sVar3), iVar6 == 0)) goto LAB_00b65f0c;
  }
LAB_00b65e08:
  uVar7 = FUN_00efed6c(*(undefined4 *)(param_1 + 0x5530));
  FUN_00f022a0(lVar1,uVar7);
  lVar11 = DAT_03210d00;
  uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar10 == 0xffff) {
    puVar14 = (ushort *)0x0;
  }
  else {
    puVar14 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar10 * 0x40);
    if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar10 = 0xffff;
    }
    else {
      uVar10 = *puVar14;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
    *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
    FUN_00efc8e8(puVar14);
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[0xb] = 0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
    puVar14[0xe] = 0;
    puVar14[0xf] = 0;
    puVar14[0x14] = 0;
    puVar14[0x10] = 0;
    puVar14[0x11] = 0;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0;
    *(undefined ***)puVar14 = &PTR_FUN_027d0db0;
    *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
  }
  if ((*(byte *)(param_1 + 0x5500) & 1) == 0) {
    param_1 = param_1 + 0x5501;
  }
  else {
    param_1 = *(long *)(param_1 + 0x5510);
  }
  FUN_008fa54c(&local_88,param_1);
  FUN_00a99c48(puVar14,&local_88,0,0);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  FUN_00f022a0(lVar1,puVar14);
LAB_00b65f0c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b65f40(long param_1,undefined8 param_2,int param_3)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  long lVar5;
  char *pcVar6;
  byte local_68 [16];
  void *local_58;
  byte local_50 [8];
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b65228();
  FUN_008fcdb8(local_50,&DAT_0320ffa8);
  FUN_008fcdb8(local_68,&DAT_0320ffa8);
  if (param_3 == 2) {
    FUN_008fce60(local_50,param_1 + 0x54d0);
    lVar5 = 0x54e8;
LAB_00b65fe4:
    FUN_008fce60(local_68,param_1 + lVar5);
  }
  else {
    if (param_3 == 1) {
      FUN_008fce60(local_50,param_1 + 0x54a0);
      lVar5 = 0x54b8;
      goto LAB_00b65fe4;
    }
    if (param_3 == 0) {
      FUN_008fce60(local_50,param_1 + 0x5470);
      lVar5 = 0x5488;
      goto LAB_00b65fe4;
    }
  }
  __n = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    __n = local_48;
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar6 = (char *)((ulong)local_50 | 1);
    __s1 = pcVar6;
    if ((local_50[0] & 1) != 0) {
      __s1 = local_40;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_50[0] & 1) == 0) {
      if (__n != 0) {
        lVar5 = -(ulong)(local_50[0] >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00b6607c;
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00b66094;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00b66094;
  }
LAB_00b6607c:
  uVar4 = FUN_009b8d90();
  FUN_009bb46c(uVar4,local_50,local_68,0,0);
LAB_00b66094:
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

