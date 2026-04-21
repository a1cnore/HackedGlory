// functions/00aed — 15 functions
#include "libGameKindred.h"




void FUN_00aed474(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (*(long *)(param_1 + 0x8ed0) != 0) {
    uVar3 = FUN_019807a4();
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_019806b8(0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    else {
      iVar1 = FUN_019807b8();
      if (iVar1 != 0) {
        uVar5 = 0;
        do {
          puVar4 = (uint *)FUN_019807cc(uVar5);
          if (*(long *)(puVar4 + 6) == *(long *)(param_1 + 0x8ed0)) {
            if ((0xf < (int)*puVar4) && ((*puVar4 & 1) != 0)) {
              return;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          uVar2 = FUN_019807b8();
        } while (uVar5 < uVar2);
      }
    }
    *(undefined1 *)(param_1 + 0x8ed8) = 1;
  }
  return;
}




void FUN_00aed514(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70;
  long local_68;
  
  fVar6 = DAT_02be366c;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0092ea9c();
  lVar1 = param_1 + 0x270;
  fVar5 = DAT_02be3668;
  if ((uVar4 & 1) == 0) {
    fVar5 = 1.0;
  }
  fVar6 = fVar6 / fVar5;
  if ((*(float *)(param_1 + 0x2b0) != fVar6) || (*(float *)(param_1 + 0x2b4) != 0.0)) {
    *(float *)(param_1 + 0x2b0) = fVar6;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_0091ada4(lVar1);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x270) + 0x28))(lVar1,&local_70);
  lVar2 = param_1 + 0x4d8;
  if ((*(float *)(param_1 + 0x518) != fVar6 + fVar6) || (*(float *)(param_1 + 0x51c) != 0.0)) {
    *(float *)(param_1 + 0x518) = fVar6 + fVar6;
    *(undefined4 *)(param_1 + 0x51c) = 0;
    FUN_0091ada4(lVar2);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x4d8) + 0x28))(lVar2,&local_70);
  fVar5 = 4.0;
  fVar7 = *(float *)(param_1 + 0x518) + 4.0;
  FUN_00f0d4e0(lVar2);
  if ((*(float *)(param_1 + 0x648) != fVar7) || (*(float *)(param_1 + 0x64c) != fVar5 * 0.5)) {
    *(float *)(param_1 + 0x648) = fVar7;
    *(float *)(param_1 + 0x64c) = fVar5 * 0.5;
    FUN_0091ada4(param_1 + 0x608);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x608) + 0x28))(param_1 + 0x608,&local_70);
  fVar5 = *(float *)(param_1 + 0x778);
  if ((fVar5 != fVar6 + -34.0) || (fVar5 = *(float *)(param_1 + 0x77c), fVar5 != -26.0)) {
    *(float *)(param_1 + 0x778) = fVar6 + -34.0;
    *(undefined4 *)(param_1 + 0x77c) = 0xc1d00000;
    FUN_0091ada4(param_1 + 0x738);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x738) + 0x28))(param_1 + 0x738,&local_70);
  fVar6 = (float)FUN_00f0d4e0(lVar2);
  FUN_00f0d4e0(lVar2);
  FUN_00f13f08(fVar6 + fVar6,fVar5 * 1.5,param_1 + 1000);
  fVar5 = *(float *)(param_1 + 0x518);
  fVar6 = (float)FUN_00f0d4e0(lVar2);
  fVar7 = *(float *)(param_1 + 0x428);
  fVar5 = fVar5 + fVar6 * 0.5;
  if (fVar7 != fVar5) {
    *(float *)(param_1 + 0x428) = fVar5;
    FUN_0091ada4(param_1 + 1000);
  }
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) & 0xfffffffb;
  fVar6 = (float)FUN_00f0e700(lVar1);
  local_70 = CONCAT44(fVar7 + fVar7,fVar6 + fVar6);
  FUN_00f13f18(param_1 + 0xe10,&local_70);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aed780(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_009580c4();
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_009580b8(), *(char *)(lVar2 + 0x568c) != '\0')) {
    uVar3 = FUN_00e6ce7c("MAIN_MENU_LOGIN_OR_REGISTER",0);
  }
  else {
    FUN_009580b8();
    uVar3 = FUN_0095fdf0();
  }
  FUN_00f0d75c(param_1 + 0x65a8,uVar3);
  return;
}




void FUN_00aed7e8(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ushort uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(auStack_6c,auStack_70);
  fVar11 = DAT_02be366c;
  uVar6 = FUN_0092ea9c();
  lVar1 = param_1 + 0x360;
  fVar12 = DAT_02be3668;
  if ((uVar6 & 1) == 0) {
    fVar12 = 1.0;
  }
  FUN_00f01980(lVar1);
  if ((param_2 & 1) == 0) {
    uVar4 = 0x3f000000;
    if ((param_3 & 1) == 0) {
      uVar4 = 0x3d4ccccd;
    }
    FUN_00f0da30(param_1 + 0x4d8,1);
    uVar7 = FUN_00efed6c(0x3d4ccccd);
    FUN_00f022a0(lVar1,uVar7);
    uVar7 = FUN_00efee28(0,uVar4,0);
    FUN_00f022a0(lVar1,uVar7);
    lVar5 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825148;
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
  }
  else {
    fVar11 = (fVar11 / fVar12) * 0.5;
    FUN_00f0da30(param_1 + 0x4d8,0);
    if ((*(float *)(param_1 + 0x3a0) != fVar11) || (*(float *)(param_1 + 0x3a4) != 0.0)) {
      *(float *)(param_1 + 0x3a0) = fVar11;
      *(undefined4 *)(param_1 + 0x3a4) = 0;
      FUN_0091ada4(lVar1);
    }
    lVar5 = DAT_03210d00;
    uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
      *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825100;
      *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
    }
    FUN_00f022a0(lVar1,puVar8);
    uVar2 = *(uint *)(param_1 + 0x3e4);
    uVar10 = 0xff;
    if ((param_3 & 1) == 0) {
      uVar10 = 0x4c;
    }
    if ((uVar2 >> 7 & 0xff) != uVar10) {
      *(uint *)(param_1 + 0x3e4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar10 << 7;
      FUN_0091ada4(lVar1);
    }
    if ((param_3 & 1) != 0) goto LAB_00aeda8c;
    puVar8 = (ushort *)FUN_00efee28(0x3f800000,0x3f000000,0);
  }
  FUN_00f022a0(lVar1,puVar8);
LAB_00aeda8c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00aedac0(void)

{
  return 0x44520000;
}




void FUN_00aedacc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x8ec8) = param_2 & 1;
  return;
}




void FUN_00aedadc(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x8ec9) == '\0') {
      return;
    }
  }
  else {
    FUN_00e829e0();
    FUN_00e85318(0);
  }
  lVar1 = param_1 + 0x340;
  lVar2 = param_1 + 0x8990;
  if ((param_2 & 1) == 0) {
    lVar1 = param_1 + 0x8990;
    lVar2 = param_1 + 0x340;
  }
  uVar3 = FUN_00efed6c(0x3eb33333);
  uVar4 = FUN_00efee28(0x3f800000,0x3eb33333,FUN_0091aa80);
  uVar5 = FUN_00efee28(0,0x3eb33333,FUN_0091aa80);
  FUN_00f01980(lVar2);
  FUN_00f02308(lVar2,uVar3,uVar4,0);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar5);
  *(byte *)(param_1 + 0x8ec9) = param_2 & 1;
  *(byte *)(param_1 + 0x10ca) = ~param_2 & 1;
  return;
}




void FUN_00aedbf4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xffa) = param_2 & 1;
  return;
}




void FUN_00aedc00(long param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x8ec4) != 0) {
    uVar1 = 0;
    do {
      FUN_00aedc64(param_1,uVar1,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x8ec4));
  }
  *(undefined4 *)(param_1 + 0x8ec0) = 0xffffffff;
  return;
}




void FUN_00aedc64(long param_1,uint param_2,byte param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_60 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + (ulong)param_2 * 0x1000;
  local_60[0] = 0xffa0a0a0;
  *(byte *)(lVar1 + 0x10c9) = param_3 & 1;
  FUN_00aef730(lVar1 + 0xd0);
  if (param_2 == 0) {
    lVar1 = param_1 + 0x8a18;
    puVar2 = &DAT_01bee7fa;
    if ((param_3 & 1) == 0) {
      puVar2 = local_60;
    }
    uVar4 = FUN_00eff108(0x3f000000,lVar1,puVar2,FUN_0091aa80,2);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar4);
    param_1 = param_1 + 0x8b08;
    uVar4 = FUN_00eff224(0x3f000000,param_1,puVar2,FUN_0091aa80);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,uVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aedd80(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x8ec4)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2;
      if (param_2 == iVar2) {
        iVar1 = param_2;
      }
      FUN_00aedc64(param_1,iVar1,param_2 == iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x8ec4));
  }
  *(int *)(param_1 + 0x8ec0) = param_2;
  return;
}




void FUN_00aede00(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x8ec4)) {
    lVar2 = 0;
    lVar1 = param_1 + 0xd0;
    do {
      FUN_00aede5c(lVar1,0);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x1000;
    } while (lVar2 < *(int *)(param_1 + 0x8ec4));
  }
  return;
}




void FUN_00aede5c(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x55c);
  uVar2 = 0xb2;
  if ((param_2 & 1) == 0) {
    uVar2 = 0xff;
  }
  *(byte *)(param_1 + 0xffb) = ~param_2 & 1;
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x55c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x4d8);
  }
  uVar2 = (uint)*(byte *)(param_1 + 0xffa);
  if ((*(byte *)(param_1 + 0xffa) != 0) && (uVar2 = 0xb2, *(char *)(param_1 + 0xffb) != '\0')) {
    uVar2 = 0xff;
  }
  uVar1 = *(uint *)(param_1 + 0x2f4);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_1 + 0x2f4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_0091ada4(param_1 + 0x270);
  }
  *(uint *)(param_1 + 0x7bc) = *(uint *)(param_1 + 0x7bc) & 0xfffffffb;
  return;
}




void FUN_00aedefc(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (0 < *(int *)(param_1 + 0x8ec4)) {
    uVar2 = 0;
    lVar1 = param_1 + 0xd0;
    do {
      FUN_00aede5c(lVar1,(param_2 & 0xffffffff) != uVar2);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x1000;
    } while ((long)uVar2 < (long)*(int *)(param_1 + 0x8ec4));
  }
  return;
}




void FUN_00aedf70(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_2 == 0) {
    uVar5 = FUN_00a250a8();
    FUN_00efddc4(0);
    FUN_00efcac4(0x3f400000,uVar5);
    FUN_00f01980(param_1 + 0x8c38);
    FUN_00f022a0(param_1 + 0x8c38,uVar5);
  }
  else {
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,&DAT_01bb0650,param_2);
    uVar5 = FUN_00e6ce7c("MENU_FRIENDS_STATUS_AVAILABLE",0);
    FUN_00e70c34(&local_68,uVar5);
    lVar1 = param_1 + 0x8c38;
    FUN_00f0d75c(lVar1,&local_68);
    uVar2 = *(uint *)(param_1 + 0x8cbc);
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x8cbc) = uVar2 & 0xffff807f;
      FUN_0091ada4(lVar1);
    }
    uVar5 = FUN_00a250a8();
    FUN_00efddc4(0x3f400000);
    FUN_00efcac4(0x3f400000,uVar5);
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcad4(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(0x40400000,puVar7);
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcad4(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_02825268;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f400000,puVar8);
    FUN_00f01980(lVar1);
    FUN_00f02308(lVar1,uVar5,puVar7,puVar8,0);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

