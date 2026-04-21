// functions/00c8e — 6 functions
#include "libGameKindred.h"




void FUN_00c8e2e0(long param_1)

{
  int iVar1;
  
  if (((DAT_0313c558 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0313c558), iVar1 != 0)) {
    FUN_00e70510(&DAT_0313c548);
    __cxa_atexit(FUN_0090e338,&DAT_0313c548,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313c558);
  }
  FUN_00e70e18(&DAT_0313c548,&DAT_01bbf50e,(int)*(float *)(param_1 + 0xfd8));
  FUN_00f0d75c(param_1 + 0xc48,&DAT_0313c548);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c8e37c(long param_1)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  void *__s1;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  char *__s2;
  ushort uVar6;
  char *pcVar7;
  long lVar8;
  void *pvVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  long local_78;
  code *pcStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00c8bd18();
  pcStack_70 = FUN_00c8f4c4;
  local_78 = param_1;
  FUN_00f02e98(0xbf800000,&local_78,0,1);
  bVar3 = *(byte *)(param_1 + 0xed0);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xed8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar9 = *(void **)(param_1 + 0xee0);
    __s1 = pvVar9;
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xed1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(param_1 + 0xed1);
        lVar8 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00c8e458;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_00c8e48c;
    }
    if ((__n == 0) || (iVar15 = memcmp(__s1,__s2,__n), iVar15 == 0)) goto LAB_00c8e48c;
  }
  else {
LAB_00c8e458:
    if ((bVar3 & 1) == 0) {
      pvVar9 = (void *)(param_1 + 0xed1);
    }
    else {
      pvVar9 = *(void **)(param_1 + 0xee0);
    }
  }
  FUN_00aa12a8(0x3f800000,pvVar9,0,1);
LAB_00c8e48c:
  lVar8 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efcad4(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_027c1a60;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_00efcac4(0x40000000,puVar11);
  uVar5 = FUN_00f022a0(param_1,puVar11);
  lVar12 = 0;
  lVar8 = 0;
  do {
    lVar1 = param_1 + lVar12;
    if ((*(uint *)(lVar1 + 0x764) & 0x7f80) != 0) {
      *(uint *)(lVar1 + 0x764) = *(uint *)(lVar1 + 0x764) & 0xffff807f;
      uVar5 = FUN_0091ada4(lVar1 + 0x6e0);
    }
    if ((*(float *)(lVar1 + 0x728) != 0.5) || (*(float *)(param_1 + lVar12 + 0x72c) != 0.5)) {
      *(undefined8 *)(param_1 + lVar12 + 0x728) = 0x3f0000003f000000;
      uVar5 = FUN_0091ada4(lVar1 + 0x6e0);
    }
    if (lVar8 < *(int *)(param_1 + 0xf90)) {
      uVar5 = FUN_00c8eb14(0,uVar5,param_1 + lVar12 + 0x6e0);
    }
    lVar1 = DAT_03210d00;
    lVar8 = lVar8 + 1;
    lVar12 = lVar12 + 0xf0;
  } while (lVar8 != 5);
  if (*(int *)(param_1 + 0xf90) < *(int *)(param_1 + 0xf94)) {
    iVar15 = *(int *)(param_1 + 0xf88);
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efeb30(puVar10);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efeba8((float)iVar15,puVar10,param_1 + 0xfd8);
    FUN_00efcb24(puVar10,FUN_00c8d764);
    FUN_00efcac4(0x3f400000,puVar10);
    lVar8 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar13 = (ushort *)0x0;
      puVar14 = (ushort *)0x0;
      _DAT_00000010 = FUN_00c8edac;
      _DAT_00000020 = param_1;
    }
    else {
      puVar13 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar13;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
      FUN_00efc8e8(puVar13);
      *(undefined ***)puVar13 = &PTR_FUN_027c27b8;
      puVar13[0xc] = 0;
      puVar13[0xd] = 0;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      puVar13[0x12] = 0;
      puVar13[0x13] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      puVar13[0xb] = 0;
      *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
      lVar8 = DAT_03210d00;
      puVar11 = (ushort *)(DAT_03210d00 + 0x20010);
      uVar6 = *puVar11;
      *(code **)(puVar13 + 8) = FUN_00c8edac;
      *(long *)(puVar13 + 0x10) = param_1;
      if ((ulong)uVar6 == 0xffff) {
        puVar14 = (ushort *)0x0;
      }
      else {
        puVar14 = (ushort *)(lVar8 + (ulong)uVar6 * 0x40 + 0x10);
        if (uVar6 == *(ushort *)(lVar8 + 0x20012)) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *puVar14;
        }
        *puVar11 = uVar6;
        *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
        FUN_00efeb30(puVar14);
        *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
      }
    }
    FUN_00efeba8((float)*(int *)(param_1 + 0xf84),puVar14,param_1 + 0xfd8);
    FUN_00efcb24(puVar14,FUN_00c8d764);
    FUN_00efcac4(0x3f400000,puVar14);
    lVar8 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
      FUN_00efd208(puVar11);
      *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar11,puVar10,puVar13,puVar14,0);
  }
  else {
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar11 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar11;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efeb30(puVar11);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efeba8((float)*(int *)(param_1 + 0xf84),puVar11,param_1 + 0xfd8);
    FUN_00efcb24(puVar11,FUN_00c8d764);
    FUN_00efcac4(0x3fc00000,puVar11);
  }
  FUN_00f022a0(param_1,puVar11);
  lVar8 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efc8e8(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_027c27b8;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  *(long *)(puVar11 + 0x10) = param_1;
  *(code **)(puVar11 + 8) = FUN_00c8be34;
  FUN_00f022a0(param_1,puVar11);
  lVar8 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_00efcad4(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_027c1a60;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fc00000,puVar11);
  FUN_00f022a0(param_1,puVar11);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8eb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar5);
  uVar2 = FUN_00eff63c(0x3f99999a,0x3f99999a,0x3eb33333,0);
  FUN_00efcb24(uVar2,FUN_009a7624);
  uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,0x3d75c28f,0);
  FUN_00efcb24(uVar3,FUN_009a7624);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efd208(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar6,uVar2,uVar3,0);
  uVar2 = FUN_00efee28(0x3f800000,0x3e800000,FUN_009a7624);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,puVar6,uVar2,0);
  FUN_00f022a0(param_3,puVar5);
  FUN_00f022a0(param_3,puVar7);
  return;
}




void FUN_00c8edac(long param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined8 local_68;
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar5 = *(int *)(param_1 + 0xf90);
  *(uint *)(param_1 + 0x6ac) = *(uint *)(param_1 + 0x6ac) | 4;
  if ((iVar5 < 5) && (iVar5 < *(int *)(param_1 + 0xf94))) {
    lVar11 = (long)iVar5;
    lVar9 = param_1 + lVar11 * 0xf0 + 0x6e0;
    lVar6 = param_1;
    do {
      lVar6 = FUN_00c8eb14(0,lVar6,lVar9);
      if (3 < lVar11) break;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0xf0;
    } while (lVar11 < *(int *)(param_1 + 0xf94));
  }
  FUN_00e70510(&local_68);
  FUN_00e70e18(&local_68,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xf8c));
  FUN_00f0d75c(param_1 + 0xd78,&local_68);
  uVar7 = FUN_00efef08(0,0,0x3f000000,0);
  FUN_00f022a0(param_1 + 0x570,uVar7);
  uVar4 = FUN_00f048a4("SPOILSOFWAR::PULSE_RING");
  FUN_00f048e0(auStack_58,uVar4,0);
  FUN_00f04760(param_1,auStack_58,1);
  bVar2 = *(byte *)(param_1 + 0xf38);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xf40);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar10 = *(char **)(param_1 + 0xf48);
    pcVar8 = (char *)(param_1 + 0xf39);
    __s1 = pcVar8;
    if ((bVar2 & 1) != 0) {
      __s1 = pcVar10;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar9 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00c8ef24;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00c8ef58;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00c8ef58;
  }
  else {
LAB_00c8ef24:
    if ((bVar2 & 1) == 0) {
      pcVar10 = (char *)(param_1 + 0xf39);
    }
    else {
      pcVar10 = *(char **)(param_1 + 0xf48);
    }
  }
  FUN_00aa12a8(0x3f800000,pcVar10,0,1);
LAB_00c8ef58:
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c8ef90(long *param_1)

{
  long lVar1;
  long *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00c8be40();
  pcStack_30 = FUN_00c8f4c4;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  (**(code **)(*param_1 + 0x160))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8effc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  (**(code **)(*param_3 + 0x48))();
  if ((param_2 != 0.0) && (fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3), fVar5 != 0.0)) {
    plVar1 = param_3 + 0x1b;
    FUN_00f0e700(param_3 + 0x32);
    FUN_00f07940(0,param_2 * 0.5,param_3 + 0x32,8,plVar1,8);
    fVar5 = -45.0;
    FUN_00f07940(0,0xc2340000,plVar1,8,param_3,8);
    plVar2 = param_3 + 0x79;
    FUN_00f13e54(plVar1);
    FUN_00f07b18(fVar5 * -0.15,plVar2,0,plVar1,2);
    FUN_00f07b18(0,plVar2,4,plVar1,4);
    FUN_00f07b18(0x80000000,param_3 + 0x53,2,plVar2,0);
    FUN_00f07b18(0,param_3 + 0x53,4,plVar2,4);
    plVar1 = param_3 + 0xae;
    plVar3 = param_3 + 0x97;
    uVar6 = 0;
    FUN_00f07940(0,plVar1,0,plVar3,0);
    FUN_00f07b18(0x40a00000,param_3 + 0xc5,3,plVar1,1);
    FUN_00f07b18(0,param_3 + 0xc5,5,plVar1,5);
    local_50 = FUN_00f01c54(plVar3,0,0,1,1);
    uStack_4c = uVar6;
    FUN_00f13f18(plVar3,&local_50);
    if ((*(byte *)((long)param_3 + 0x6ac) >> 2 & 1) == 0) {
      FUN_00f07940(0,0,plVar1,8,plVar3,8);
    }
    FUN_00f07b18(0x41200000,plVar3,0,plVar2,2);
    FUN_00f07b18(0,plVar3,4,plVar2,4);
    plVar1 = param_3 + 0x189;
    if ((*(float *)(param_3 + 0x191) != 0.0) || (*(float *)((long)param_3 + 0xc8c) != 0.0)) {
      param_3[0x191] = 0;
      FUN_0091ada4(plVar1);
    }
    uVar6 = 0;
    FUN_00f07940(0,param_3 + 0x1af,3,plVar1,2);
    plVar3 = param_3 + 0x172;
    local_50 = FUN_00f01c54(plVar3,1,0,1,1);
    uStack_4c = uVar6;
    FUN_00f13f18(plVar3,&local_50);
    FUN_00f07b18(0x43700000,plVar3,0,plVar2,2);
    FUN_00f07b18(0,plVar3,4,plVar2,4);
    fVar5 = (float)FUN_00f0d4e0(plVar1);
    if ((*(float *)(param_3 + 0x191) != fVar5) || (*(float *)((long)param_3 + 0xc8c) != 0.0)) {
      *(float *)(param_3 + 0x191) = fVar5;
      *(undefined4 *)((long)param_3 + 0xc8c) = 0;
      FUN_0091ada4(plVar1);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

