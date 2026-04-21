// functions/00ac9 — 13 functions
#include "libGameKindred.h"




void FUN_00ac9164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00aca9bc(param_1,param_2,param_5);
  return;
}




void FUN_00ac916c(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x292e) != '\0') {
    fVar1 = (float)FUN_00f13e54(param_1 + 0x538);
    fVar2 = (float)FUN_00f0eac0(param_1 + 0x1bf8);
    FUN_00f0db64((fVar1 - fVar2) + -36.0,0,0x3f800000,param_1 + 0xc58);
    return;
  }
  return;
}




void FUN_00ac91e4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00aca9dc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ac926c(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1af8))) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x1b00) + (ulong)param_2 * 8);
    if ((param_3 & 1) == 0) {
      FUN_00ab7598(0,uVar2,&DAT_01bee802);
      return;
    }
    FUN_00ab7598(0x3e4ccccd,uVar2,&DAT_01bee7fa);
    if (*(char *)(param_1 + 0x2930) != '\0') {
      lVar1 = param_1 + 0x1ce8;
      uVar3 = FUN_00f02540(lVar1);
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(lVar1,1);
      }
      plVar4 = *(long **)(*(long *)(param_1 + 0x1b00) + (ulong)param_2 * 8);
      (**(code **)(*plVar4 + 0x78))(plVar4,lVar1,1);
      FUN_00f07940(0xc1700000,0,lVar1,5,
                   *(undefined8 *)(*(long *)(param_1 + 0x1b00) + (ulong)param_2 * 8),5);
      return;
    }
  }
  return;
}




undefined4 FUN_00ac9358(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  if (param_2 < *(uint *)(param_1 + 0x1af8)) {
    uVar1 = *(uint *)(param_1 + 0x2918);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1af8))) {
      FUN_00ab7598(0,*(undefined8 *)(*(long *)(param_1 + 0x1b00) + (ulong)uVar1 * 8),&DAT_01bee802);
    }
    *(uint *)(param_1 + 0x2918) = param_2;
    FUN_00ac926c(param_1,param_2,1);
    uVar4 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x1b00) +
                                  (ulong)*(uint *)(param_1 + 0x2918) * 8) + 0x7f0);
    FUN_00ab7498(param_1 + 0x538,uVar4);
    FUN_00ac8c38(param_1);
    if (*(char *)(param_1 + 0x292c) != '\0') {
      FUN_00ac9484(param_1,0);
    }
    if ((param_3 & 1) == 0) {
      uVar3 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
      FUN_00f048e0(auStack_68,uVar3,*(undefined4 *)(param_1 + 0x2918));
      uVar3 = 1;
      FUN_00f04760(param_1,auStack_68,1);
    }
    else {
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac9484(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  ushort uVar8;
  long *plVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 local_98;
  float local_94;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (*(int *)(param_3 + 0x1af8) != 0) {
    plVar9 = *(long **)(*(long *)(param_3 + 0x1b00) + (ulong)(*(int *)(param_3 + 0x1af8) - 1) * 8);
    if (plVar9 != (long *)0x0) {
      lVar1 = param_3 + 0x2820;
      FUN_00f01980(lVar1);
      fVar15 = *(float *)((long)plVar9 + 0x44);
      (**(code **)(*plVar9 + 0x48))(plVar9);
      if (*(char *)(param_3 + 0x2930) == '\0') {
        fVar15 = fVar15 + param_2 * 0.5;
      }
      else {
        fVar15 = *(float *)(param_3 + 0x1e1c);
        FUN_00f13e54(param_3 + 0x1dd8);
        fVar15 = fVar15 + param_2;
      }
      lVar2 = DAT_03210d00;
      param_2 = 10.0;
      fVar15 = -(fVar15 + 10.0);
      if ((param_4 & 1) == 0) {
        uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar8 == 0xffff) {
          puVar10 = (ushort *)0x0;
        }
        else {
          puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
          if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar8 = 0xffff;
          }
          else {
            uVar8 = *puVar10;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
          *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
          FUN_00efdc08(puVar10);
          *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
        }
        local_98 = *(undefined4 *)(param_3 + 0x2860);
        local_94 = fVar15;
        FUN_00efdc50(puVar10,&local_98);
        FUN_00efcac4(0x3dcccccd,puVar10);
        FUN_00f022a0(lVar1,puVar10);
      }
      else if ((NAN(*(float *)(param_3 + 0x2860))) || (*(float *)(param_3 + 0x2864) != fVar15)) {
        *(float *)(param_3 + 0x2864) = fVar15;
        FUN_0091ada4(lVar1);
      }
    }
    FUN_00aca6f8(param_3,0);
  }
  lVar1 = param_3 + 0x88;
  FUN_00f01980(lVar1);
  lVar2 = param_3 + 0x1b08;
  FUN_00f01980(lVar2);
  lVar6 = DAT_03210d00;
  if ((param_4 & 1) == 0) {
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efe8d0(puVar10);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    local_98 = FUN_00f13e54(param_3 + 0x538);
    local_94 = param_2;
    FUN_00efe91c(puVar10,lVar1,&local_98);
    FUN_00efcac4(0x3dcccccd,puVar10);
    lVar6 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efdc08(puVar11);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    local_98 = *(undefined4 *)(param_3 + 0x578);
    local_94 = 0.0;
    FUN_00efdc50(puVar11,&local_98);
    FUN_00efcac4(0x3dcccccd,puVar11);
    lVar6 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar12 = (ushort *)0x0;
    }
    else {
      puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar12;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efdd74(puVar12);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f19999a,puVar12);
    FUN_00efcac4(0x3dcccccd,puVar12);
    lVar6 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efcd98(puVar13);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar13,puVar10,puVar11,puVar12,0);
    FUN_00f022a0(lVar1,puVar13);
    lVar1 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar10);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0,puVar10);
    FUN_00efcac4(0x3dcccccd,puVar10);
    FUN_00f022a0(param_3 + 0x1ce8,puVar10);
    lVar1 = DAT_03210d00;
    uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar10);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3dcccccd,puVar10);
    FUN_00efddc4(0,puVar10);
    FUN_00f022a0(lVar2,puVar10);
  }
  else {
    uVar14 = FUN_00f13e54(param_3 + 0x538);
    FUN_00f13e54(param_3 + 0x538);
    FUN_00f13f08(uVar14,lVar1);
    if ((*(float *)(param_3 + 200) != *(float *)(param_3 + 0x578)) ||
       (*(float *)(param_3 + 0xcc) != 0.0)) {
      *(float *)(param_3 + 200) = *(float *)(param_3 + 0x578);
      *(undefined4 *)(param_3 + 0xcc) = 0;
      FUN_0091ada4(lVar1);
    }
    if ((*(uint *)(param_3 + 0x1b8c) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x1b8c) = *(uint *)(param_3 + 0x1b8c) & 0xffff807f;
      FUN_0091ada4(lVar2);
    }
  }
  pcVar3 = (char *)(param_3 + 0x292c);
  cVar4 = *pcVar3;
  *pcVar3 = '\0';
  if (cVar4 != '\0') {
    uVar7 = FUN_00f048a4("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
    FUN_00f048e0(&local_98,uVar7,*pcVar3);
    FUN_00f04760(param_3,&local_98,1);
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00ac9b30(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x2918) == (int)param_2) && ((param_3 & 1) == 0)) {
    FUN_00ac9484(param_1,0);
    return 1;
  }
  uVar1 = FUN_00ac9358(param_1,param_2,param_4 & 1);
  return uVar1;
}




void FUN_00ac9b64(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_00ac9bd8();
  if (((int)uVar1 < 0) || (*(uint *)(param_1 + 0x35f) <= uVar1)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf8);
    uVar1 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00ac9bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,param_3 & 1,param_4 & 1);
  return;
}




ulong FUN_00ac9bd8(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  byte *pbVar8;
  byte *__s2;
  ulong uVar9;
  long lVar10;
  
  uVar3 = *(uint *)(param_1 + 0x28e8);
  if (uVar3 != 0) {
    bVar4 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 0x28f0);
    uVar9 = 0;
    if ((bVar4 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar4 >> 1);
    }
    do {
      pbVar8 = (byte *)(lVar10 + uVar9 * 0x18);
      bVar5 = *pbVar8;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar8 + 8);
      }
      if (__n == uVar2) {
        __s2 = *(byte **)(lVar10 + uVar9 * 0x18 + 0x10);
        if ((bVar5 & 1) == 0) {
          __s2 = pbVar8 + 1;
        }
        sVar1 = -(ulong)(bVar4 >> 1);
        pbVar8 = param_2;
        sVar6 = __n;
        if ((bVar4 & 1) == 0) {
          while( true ) {
            if (sVar6 == 0) goto LAB_00ac9cb0;
            if (pbVar8[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar8 = pbVar8 + 1;
            sVar6 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) goto LAB_00ac9cb0;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  uVar9 = 0xffffffff;
LAB_00ac9cb0:
  return uVar9 & 0xffffffff;
}




undefined1 * FUN_00ac9cd0(long param_1)

{
  if ((*(uint *)(param_1 + 0x28e8) != 0) &&
     (*(uint *)(param_1 + 0x2918) < *(uint *)(param_1 + 0x28e8))) {
    return (undefined1 *)(*(long *)(param_1 + 0x28f0) + (ulong)*(uint *)(param_1 + 0x2918) * 0x18);
  }
  return &DAT_0320ffa8;
}




void FUN_00ac9d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar1 = param_4 + 0x538;
  FUN_00ab75d0(lVar1);
  FUN_00ac916c(param_4);
  FUN_00f01980(param_4 + 0x88);
  uVar8 = FUN_00f13e54(lVar1);
  FUN_00f13e54(lVar1);
  FUN_00f13f08(uVar8,param_4 + 0x88);
  FUN_00f01980(param_4 + 0x1b08);
  fVar6 = (float)FUN_00f13e54(lVar1);
  FUN_00f13f08(fVar6 + -4.0,0x40000000,param_4 + 0x1b08);
  lVar2 = param_4 + 0x1bf8;
  fVar6 = (float)FUN_00f13e54(lVar1);
  fVar7 = (float)FUN_00f0e700(lVar2);
  fVar6 = (fVar6 * 0.5 - fVar7 * 0.5) + -20.0;
  if ((*(float *)(param_4 + 0x1c38) != fVar6) || (*(float *)(param_4 + 0x1c3c) != 0.0)) {
    *(float *)(param_4 + 0x1c38) = fVar6;
    *(undefined4 *)(param_4 + 0x1c3c) = 0;
    FUN_0091ada4(lVar2);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_4 + 0x1bf8) + 0x28))(lVar2,&local_70);
  uVar4 = (ulong)*(uint *)(param_4 + 0x1af8);
  if (*(uint *)(param_4 + 0x1af8) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_4 + 0x1b00) + uVar5 * 8) != 0) {
        FUN_00ab75d0(param_1,param_2,param_3);
        FUN_00ac9ec8(param_4,*(undefined8 *)(*(long *)(param_4 + 0x1b00) + uVar5 * 8));
        uVar4 = (ulong)*(uint *)(param_4 + 0x1af8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  FUN_00ac8c38(param_4);
  if (*(char *)(param_4 + 0x292c) == '\0') {
    FUN_00ac9484(param_4,1);
  }
  else {
    FUN_00ac9f48(param_4,1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac9ec8(long param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x292f) != '\0') {
    fVar1 = (float)FUN_00f080a0(param_2 + 0xe4,0,param_2,0);
    fVar2 = (float)(**(code **)(*param_2 + 0x48))(param_2);
    FUN_00f0db64(fVar2 - (ABS(fVar1) + ABS(fVar1)),0,0x3f800000,param_2 + 0xe4);
    return;
  }
  return;
}




void FUN_00ac9f48(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  float fVar12;
  ulong uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  float local_b8;
  float fStack_b4;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  FUN_00ac8c38();
  if (*(int *)(param_3 + 0x1af8) != 0) {
    lVar2 = param_3 + 0x2820;
    FUN_00f01980(lVar2);
    lVar1 = DAT_03210d00;
    if ((param_4 & 1) == 0) {
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efdc08(puVar8);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      local_b8 = *(float *)(param_3 + 0x2860);
      fStack_b4 = 0.0;
      FUN_00efdc50(puVar8,&local_b8);
      FUN_00efcac4(0x3dcccccd,puVar8);
      FUN_00f022a0(lVar2,puVar8);
    }
    else if ((NAN(*(float *)(param_3 + 0x2860))) || (*(float *)(param_3 + 0x2864) != 0.0)) {
      *(undefined4 *)(param_3 + 0x2864) = 0;
      FUN_0091ada4(lVar2);
    }
    lVar2 = param_3 + 0x88;
    FUN_00f01980(lVar2);
    lVar3 = param_3 + 0x1b08;
    FUN_00f01980(lVar3);
    fVar15 = *(float *)(param_3 + 0x26c4);
    FUN_00f13e54(param_3 + 0x2680);
    lVar1 = param_3 + 0x538;
    fVar15 = fVar15 + param_2 + 10.0;
    FUN_00f13e54(lVar1);
    fVar16 = fVar15 * 0.5 - param_2 * 0.5;
    uVar13 = FUN_00f13e54(lVar2);
    if ((param_4 & 1) == 0) {
      if (*(char *)(param_3 + 0x2930) == '\0') {
        fVar17 = *(float *)(param_3 + 200);
      }
      else {
        fVar16 = (float)FUN_00f13e54(param_3 + 0x2680);
        fVar15 = *(float *)(param_3 + 0x26c4);
        uVar13 = (ulong)(uint)(fVar16 + 10.0);
        FUN_00f13e54(param_3 + 0x1dd8);
        fVar17 = *(float *)(param_3 + 0x578);
        fVar15 = fVar15 + param_2 + -4.0;
        fVar12 = (float)FUN_00f13e54(lVar1);
        dVar14 = (double)fVar15;
        fVar17 = fVar17 + ((fVar16 + 10.0) - fVar12) * 0.5;
        dVar18 = dVar14 * 0.5;
        FUN_00f13e54(lVar1);
        fVar12 = SUB84(dVar14,0);
        fVar16 = fVar12 * 0.5;
        FUN_00f13e54(lVar1);
        fVar16 = (float)((dVar18 - (double)fVar16) + (double)fVar12);
      }
      lVar1 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efe8d0(puVar8);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      local_b8 = (float)uVar13;
      fStack_b4 = fVar15;
      FUN_00efe91c(puVar8,lVar2,&local_b8);
      FUN_00efcac4(0x3dcccccd,puVar8);
      lVar1 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar9 = (ushort *)0x0;
      }
      else {
        puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar9;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efdc08(puVar9);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      local_b8 = fVar17;
      fStack_b4 = fVar16;
      FUN_00efdc50(puVar9,&local_b8);
      FUN_00efcac4(0x3dcccccd,puVar9);
      lVar1 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar10 = (ushort *)0x0;
      }
      else {
        puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar10;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efdd74(puVar10);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00efddc4(0x3f800000,puVar10);
      FUN_00efcac4(0x3dcccccd,puVar10);
      lVar1 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar11 = (ushort *)0x0;
      }
      else {
        puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar11;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efcd98(puVar11);
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar11,puVar8,puVar9,puVar10,0);
      FUN_00f022a0(lVar2,puVar11);
      lVar2 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar8);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0x3f19999a,puVar8);
      FUN_00efcac4(0x3dcccccd,puVar8);
      FUN_00f022a0(param_3 + 0x1ce8,puVar8);
      lVar2 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar8 = (ushort *)0x0;
      }
      else {
        puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar8;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efdd74(puVar8);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3dcccccd,puVar8);
      FUN_00efddc4(0x3f4ccccd,puVar8);
      FUN_00f022a0(lVar3,puVar8);
    }
    else {
      FUN_00f13f08(uVar13,fVar15,lVar2);
      if ((*(float *)(param_3 + 200) != *(float *)(param_3 + 0x578)) ||
         (*(float *)(param_3 + 0xcc) != fVar16)) {
        *(float *)(param_3 + 200) = *(float *)(param_3 + 0x578);
        *(float *)(param_3 + 0xcc) = fVar16;
        FUN_0091ada4(lVar2);
      }
      uVar4 = *(uint *)(param_3 + 0x1b8c);
      if ((uVar4 & 0x7f80) != 0x6600) {
        *(uint *)(param_3 + 0x1b8c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
        FUN_0091ada4(lVar3);
      }
    }
    *(undefined1 *)(param_3 + 0x292c) = 1;
    uVar6 = FUN_00f048a4("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
    FUN_00f048e0(&local_b8,uVar6,*(undefined1 *)(param_3 + 0x292c));
    FUN_00f04760(param_3,&local_b8,1);
    FUN_00aca6f8(param_3,1);
  }
  if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

