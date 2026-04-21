// functions/00ad1 — 13 functions
#include "libGameKindred.h"




void thunk_FUN_00ad1060(long param_1)

{
  void *pvVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  char *__s2;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  undefined1 auStack_78 [32];
  long lStack_58;
  
  lVar4 = tpidr_el0;
  lStack_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x5de8);
  uVar12 = *(size_t *)(param_1 + 0x5df0);
  uVar5 = (ulong)(bVar3 >> 1);
  __n = uVar5;
  if ((bVar3 & 1) != 0) {
    __n = uVar12;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x5df8);
    pvVar8 = pvVar13;
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x5de9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar10 = (char *)(param_1 + 0x5de9);
        lVar11 = -uVar5;
        do {
          if (*pcVar10 != *__s2) goto LAB_00ad1118;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00ad11bc;
    }
    if ((__n == 0) || (iVar6 = memcmp(pvVar8,__s2,__n), iVar6 == 0)) goto LAB_00ad11bc;
  }
  else {
LAB_00ad1118:
    if ((bVar3 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x5de9);
      uVar12 = uVar5;
    }
    else {
      pvVar13 = *(void **)(param_1 + 0x5df8);
    }
  }
  if (2 < (long)uVar12) {
    pvVar1 = (void *)((long)pvVar13 + uVar12);
    pvVar8 = pvVar13;
    do {
      if ((uVar12 - 2 == 0) || (pvVar8 = memchr(pvVar8,0x49,uVar12 - 2), pvVar8 == (void *)0x0))
      break;
      iVar6 = memcmp(pvVar8,&DAT_01baf73c,3);
      if (iVar6 == 0) {
        if ((pvVar8 != pvVar1) && (pvVar8 == pvVar13)) goto LAB_00ad11bc;
        break;
      }
      pvVar8 = (void *)((long)pvVar8 + 1);
      uVar12 = (long)pvVar1 - (long)pvVar8;
    } while (2 < (long)uVar12);
  }
  if (*(char *)(param_1 + 0x5e11) != '\0') {
    uVar9 = FUN_009580b8();
    FUN_00962f40(uVar9,(byte *)(param_1 + 0x5de8));
  }
LAB_00ad11bc:
  *(undefined1 *)(param_1 + 0x5e12) = 1;
  FUN_00acf034(param_1,0);
  uVar7 = FUN_00f048a4("UI::GUILD_TILE_DECLINED");
  FUN_00f048e0(auStack_78,uVar7,*(undefined1 *)(param_1 + 0x5e11));
  FUN_00f04760(param_1,auStack_78,1);
  if (*(long *)(lVar4 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00ad1234(long param_1)

{
  void *pvVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  
  bVar3 = *(byte *)(param_1 + 0x5de8);
  uVar11 = *(size_t *)(param_1 + 0x5df0);
  uVar5 = (ulong)(bVar3 >> 1);
  __n = uVar5;
  if ((bVar3 & 1) != 0) {
    __n = uVar11;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar12 = *(void **)(param_1 + 0x5df8);
    pvVar7 = pvVar12;
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 0x5de9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(param_1 + 0x5de9);
        lVar10 = -uVar5;
        do {
          if (*pcVar9 != *__s2) goto LAB_00ad12d8;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(pvVar7,__s2,__n), iVar6 != 0)) goto LAB_00ad12fc;
    return;
  }
LAB_00ad12d8:
  if ((bVar3 & 1) == 0) {
    pvVar12 = (void *)(param_1 + 0x5de9);
    uVar11 = uVar5;
  }
  else {
    pvVar12 = *(void **)(param_1 + 0x5df8);
  }
LAB_00ad12fc:
  if (2 < (long)uVar11) {
    pvVar1 = (void *)((long)pvVar12 + uVar11);
    pvVar7 = pvVar12;
    do {
      if ((uVar11 - 2 == 0) || (pvVar7 = memchr(pvVar7,0x49,uVar11 - 2), pvVar7 == (void *)0x0))
      break;
      iVar6 = memcmp(pvVar7,&DAT_01baf73c,3);
      if (iVar6 == 0) {
        if ((pvVar7 != pvVar1) && (pvVar7 == pvVar12)) {
          return;
        }
        break;
      }
      pvVar7 = (void *)((long)pvVar7 + 1);
      uVar11 = (long)pvVar1 - (long)pvVar7;
    } while (2 < (long)uVar11);
  }
  FUN_00acf034(param_1,0);
  cVar4 = *(char *)(param_1 + 0x5e11);
  uVar8 = FUN_009580b8();
  if (cVar4 != '\0') {
    FUN_00962dfc();
    return;
  }
  FUN_009630c8(uVar8,(byte *)(param_1 + 0x5de8));
  return;
}




void FUN_00ad1060(long param_1)

{
  void *pvVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  char *__s2;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x5de8);
  uVar12 = *(size_t *)(param_1 + 0x5df0);
  uVar5 = (ulong)(bVar3 >> 1);
  __n = uVar5;
  if ((bVar3 & 1) != 0) {
    __n = uVar12;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x5df8);
    pvVar8 = pvVar13;
    if ((bVar3 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x5de9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar10 = (char *)(param_1 + 0x5de9);
        lVar11 = -uVar5;
        do {
          if (*pcVar10 != *__s2) goto LAB_00ad1118;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00ad11bc;
    }
    if ((__n == 0) || (iVar6 = memcmp(pvVar8,__s2,__n), iVar6 == 0)) goto LAB_00ad11bc;
  }
  else {
LAB_00ad1118:
    if ((bVar3 & 1) == 0) {
      pvVar13 = (void *)(param_1 + 0x5de9);
      uVar12 = uVar5;
    }
    else {
      pvVar13 = *(void **)(param_1 + 0x5df8);
    }
  }
  if (2 < (long)uVar12) {
    pvVar1 = (void *)((long)pvVar13 + uVar12);
    pvVar8 = pvVar13;
    do {
      if ((uVar12 - 2 == 0) || (pvVar8 = memchr(pvVar8,0x49,uVar12 - 2), pvVar8 == (void *)0x0))
      break;
      iVar6 = memcmp(pvVar8,&DAT_01baf73c,3);
      if (iVar6 == 0) {
        if ((pvVar8 != pvVar1) && (pvVar8 == pvVar13)) goto LAB_00ad11bc;
        break;
      }
      pvVar8 = (void *)((long)pvVar8 + 1);
      uVar12 = (long)pvVar1 - (long)pvVar8;
    } while (2 < (long)uVar12);
  }
  if (*(char *)(param_1 + 0x5e11) != '\0') {
    uVar9 = FUN_009580b8();
    FUN_00962f40(uVar9,(byte *)(param_1 + 0x5de8));
  }
LAB_00ad11bc:
  *(undefined1 *)(param_1 + 0x5e12) = 1;
  FUN_00acf034(param_1,0);
  uVar7 = FUN_00f048a4("UI::GUILD_TILE_DECLINED");
  FUN_00f048e0(auStack_78,uVar7,*(undefined1 *)(param_1 + 0x5e11));
  FUN_00f04760(param_1,auStack_78,1);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ad1234(long param_1)

{
  void *pvVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  
  bVar3 = *(byte *)(param_1 + 0x5de8);
  uVar11 = *(size_t *)(param_1 + 0x5df0);
  uVar5 = (ulong)(bVar3 >> 1);
  __n = uVar5;
  if ((bVar3 & 1) != 0) {
    __n = uVar11;
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar12 = *(void **)(param_1 + 0x5df8);
    pvVar7 = pvVar12;
    if ((bVar3 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 0x5de9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(param_1 + 0x5de9);
        lVar10 = -uVar5;
        do {
          if (*pcVar9 != *__s2) goto LAB_00ad12d8;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar6 = memcmp(pvVar7,__s2,__n), iVar6 != 0)) goto LAB_00ad12fc;
    return;
  }
LAB_00ad12d8:
  if ((bVar3 & 1) == 0) {
    pvVar12 = (void *)(param_1 + 0x5de9);
    uVar11 = uVar5;
  }
  else {
    pvVar12 = *(void **)(param_1 + 0x5df8);
  }
LAB_00ad12fc:
  if (2 < (long)uVar11) {
    pvVar1 = (void *)((long)pvVar12 + uVar11);
    pvVar7 = pvVar12;
    do {
      if ((uVar11 - 2 == 0) || (pvVar7 = memchr(pvVar7,0x49,uVar11 - 2), pvVar7 == (void *)0x0))
      break;
      iVar6 = memcmp(pvVar7,&DAT_01baf73c,3);
      if (iVar6 == 0) {
        if ((pvVar7 != pvVar1) && (pvVar7 == pvVar12)) {
          return;
        }
        break;
      }
      pvVar7 = (void *)((long)pvVar7 + 1);
      uVar11 = (long)pvVar1 - (long)pvVar7;
    } while (2 < (long)uVar11);
  }
  FUN_00acf034(param_1,0);
  cVar4 = *(char *)(param_1 + 0x5e11);
  uVar8 = FUN_009580b8();
  if (cVar4 != '\0') {
    FUN_00962dfc();
    return;
  }
  FUN_009630c8(uVar8,(byte *)(param_1 + 0x5de8));
  return;
}




void FUN_00ad13bc(long param_1)

{
  FUN_00acd880(param_1 + 0xb88);
  return;
}




void FUN_00ad13c4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  plVar2 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d72e8;
  lVar4 = 0xbc30;
  plVar3 = plVar2;
  do {
    FUN_00ace014(plVar3);
    lVar4 = lVar4 + -0x5e18;
    plVar3 = plVar3 + 0xbc3;
  } while (lVar4 != 0);
  *(undefined2 *)(param_1 + 0x17a1) = 0;
  param_1[0x17a0] = 0;
  param_1[0x179f] = 0;
  param_1[0x179e] = 0;
  param_1[0x179d] = 0;
  *(undefined1 *)((long)param_1 + 0xbd0a) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xbda,1);
  local_60 = 0x3f000000;
  (**(code **)(param_1[0x17] + 0x28))(plVar2,&local_60);
  local_60 = 0x3f000000;
  (**(code **)(param_1[0xbda] + 0x28))(param_1 + 0xbda,&local_60);
  *(uint *)((long)param_1 + 0x5f54) = *(uint *)((long)param_1 + 0x5f54) & 0xfffffffb;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad150c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_3 = param_3 + 0xb8;
  lVar1 = 2;
  do {
    FUN_00f13f08(param_1,param_2,param_3);
    lVar1 = lVar1 + -1;
    param_3 = param_3 + 0x5e18;
  } while (lVar1 != 0);
  return;
}




void FUN_00ad1564(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  *(byte *)(param_1 + 0xbd09) = param_2 & 1;
  FUN_00acef0c(param_1 + 0xb8);
  lVar2 = 1;
  lVar1 = param_1 + 0x5ed0;
  do {
    FUN_00acef0c(lVar1,*(byte *)(param_1 + 0xbd09));
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x5e18;
  } while (lVar2 != 0);
  return;
}




void FUN_00ad15c8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  
  if (*(char *)(param_2 + 0xbd08) == '\0') {
    FUN_00acfe20(param_2 + (long)*(int *)(param_2 + 0xbd00) * 0x5e18 + 0xb8,param_3,param_4 & 1);
    *(char *)(param_2 + 0xbd08) = '\x01';
  }
  else {
    uVar1 = 1 - (long)*(int *)(param_2 + 0xbd00);
    FUN_00acfe20(param_2 + uVar1 * 0x5e18 + 0xb8,param_3,param_4 & 1);
    FUN_00ad1680(param_1,param_2,uVar1 & 0xffffffff);
    FUN_008fce60(param_2 + 0xbce8,param_3);
    *(undefined1 *)(param_2 + 0xbd0a) = 0;
  }
  return;
}




void FUN_00ad1680(undefined8 param_1,long param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  float *pfVar10;
  ushort uVar11;
  long lVar12;
  ushort *puVar13;
  float fVar14;
  undefined8 local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  piVar1 = (int *)(param_2 + 0xbd00);
  lVar12 = param_2 + 0xb8;
  FUN_00f01980(lVar12 + (long)*piVar1 * 0x5e18);
  uVar4 = FUN_00efed6c(param_1);
  FUN_00f022a0(lVar12 + (long)*piVar1 * 0x5e18,uVar4);
  uVar4 = FUN_00efee28(0,0x3eae147b,FUN_0091aa80);
  plVar7 = (long *)(lVar12 + (long)*piVar1 * 0x5e18);
  fVar14 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
  uVar5 = FUN_00efef08(fVar14 * 0.0,0x43c08000,0x3eae147b,FUN_0091aa80);
  uVar6 = FUN_00eff63c(0x3f2e147b,0x3f2e147b,0x3eae147b,FUN_0091aa80);
  lVar9 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efcd98(puVar13);
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar13,uVar4,uVar5,uVar6,0);
  FUN_00f022a0(lVar12 + (long)*piVar1 * 0x5e18,puVar13);
  FUN_00ad08e0(0x3e2e147b,param_1,lVar12 + (long)*piVar1 * 0x5e18);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efc8e8(puVar13);
    *(undefined ***)puVar13 = &PTR_FUN_02825148;
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00f022a0(param_2 + 0xb8 + (long)*piVar1 * 0x5e18,puVar13);
  plVar7 = (long *)(param_2 + 0xb8 + (long)param_3 * 0x5e18);
  lVar12 = (long)param_3;
  FUN_00f01980(plVar7);
  puVar8 = (uint *)((long)plVar7 + 0x84);
  uVar2 = *puVar8;
  *puVar8 = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *puVar8 = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(plVar7);
  }
  lVar9 = param_2 + lVar12 * 0x5e18;
  if ((*(float *)(lVar9 + 0x100) != 1.0) || (*(float *)(param_2 + lVar12 * 0x5e18 + 0x104) != 1.0))
  {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(lVar9 + 0x100) = uVar4;
    FUN_0091ada4(plVar7);
  }
  lVar9 = param_2 + lVar12 * 0x5e18;
  if ((*(float *)(lVar9 + 0xc88) != 0.0) || (*(float *)(param_2 + lVar12 * 0x5e18 + 0xc8c) != 0.0))
  {
    *(undefined8 *)(lVar9 + 0xc88) = 0;
    FUN_0091ada4(lVar9 + 0xc40);
  }
  pfVar10 = (float *)(param_2 + lVar12 * 0x5e18 + 0xf8);
  if ((*pfVar10 != 0.0) || (*(float *)(param_2 + lVar12 * 0x5e18 + 0xfc) != -400.0)) {
    pfVar10[0] = 0.0;
    pfVar10[1] = -400.0;
    FUN_0091ada4(plVar7);
  }
  local_90 = 0x3f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_90);
  fVar14 = (float)param_1 + 0.1;
  uVar4 = FUN_00efed6c(fVar14);
  FUN_00f022a0(plVar7,uVar4);
  uVar4 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_0091aa80);
  uVar5 = FUN_00efef08(0,0,0x3ecccccd,FUN_0091aa80);
  lVar12 = DAT_03210d00;
  uVar11 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar13 = (ushort *)0x0;
  }
  else {
    puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar13;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar11;
    *(int *)(lVar12 + 0x20014) = *(int *)(lVar12 + 0x20014) + 1;
    FUN_00efcd98(puVar13);
    *(int *)(lVar12 + 0x20020) = *(int *)(lVar12 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar13,uVar4,uVar5,0);
  FUN_00f022a0(plVar7,puVar13);
  FUN_00ad06d0(0,fVar14,0x3f19999a,plVar7);
  *piVar1 = param_3;
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad1b60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_1b0,param_3 + 0x48);
  FUN_008fcdb8(local_198,param_3 + 0x60);
  FUN_008fcdb8(local_180,param_3 + 0x78);
  FUN_008fcdb8(local_168,param_3 + 0x90);
  uStack_148 = *(undefined8 *)(param_3 + 0xb0);
  local_150 = *(undefined8 *)(param_3 + 0xa8);
  local_140 = *(undefined8 *)(param_3 + 0xb8);
  FUN_008fcdb8(auStack_138,param_3 + 0xc0);
  FUN_008fcdb8(auStack_120,param_3 + 0xd8);
  FUN_008fcdb8(auStack_108,param_3 + 0xf0);
  FUN_008fcdb8(auStack_f0,param_3 + 0x108);
  FUN_008fcdb8(auStack_d8,param_3 + 0x120);
  FUN_008fcdb8(auStack_c0,param_3 + 0x138);
  FUN_008fcdb8(auStack_a8,param_3 + 0x150);
  FUN_008fcdb8(auStack_90,param_3 + 0x168);
  FUN_008fcdb8(auStack_78,param_3 + 0x180);
  local_60 = *(undefined1 *)(param_3 + 0x198);
  FUN_00ad15c8(param_1,param_2,local_1b0,1);
  FUN_00936630(&local_140);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad1cdc(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  char *__s2;
  long lVar5;
  char *pcVar6;
  void *__s1;
  
  bVar3 = true;
  lVar5 = param_1 + (1 - (long)*(int *)(param_1 + 0xbd00)) * 0x5e18;
  *(uint *)(lVar5 + 0x3a64) = *(uint *)(lVar5 + 0x3a64) | 4;
  *(uint *)(lVar5 + 0x81c) = *(uint *)(lVar5 + 0x81c) & 0xfffffffb;
  *(undefined1 *)(lVar5 + 0x5ec8) = 1;
  FUN_00ad1680();
  bVar2 = *(byte *)(param_1 + 0xbce8);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xbcf0);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0xbcf8);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xbce9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0xbce9);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) {
            bVar3 = true;
            goto LAB_00ad1de0;
          }
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (__n != 0) {
      iVar4 = memcmp(__s1,__s2,__n);
      bVar3 = iVar4 != 0;
      goto LAB_00ad1de0;
    }
    bVar3 = false;
  }
LAB_00ad1de0:
  *(bool *)(param_1 + 0xbd0a) = bVar3;
  FUN_008fce60((byte *)(param_1 + 0xbce8),&DAT_0320ffa8);
  return;
}




void FUN_00ad1e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d71a0;
  if ((*(byte *)(param_1 + 0xbbd) & 1) != 0) {
    operator_delete((void *)param_1[0xbbf]);
  }
  FUN_00936630(param_1 + 0xba0);
  if ((*(byte *)(param_1 + 0xb9b) & 1) != 0) {
    operator_delete((void *)param_1[0xb9d]);
  }
  if ((*(byte *)(param_1 + 0xb98) & 1) != 0) {
    operator_delete((void *)param_1[0xb9a]);
  }
  if ((*(byte *)(param_1 + 0xb95) & 1) != 0) {
    operator_delete((void *)param_1[0xb97]);
  }
  if ((*(byte *)(param_1 + 0xb92) & 1) != 0) {
    operator_delete((void *)param_1[0xb94]);
  }
  param_1[0xad3] = &PTR_FUN_027d5388;
  param_1[0xb6e] = &PTR_FUN_028266f0;
  param_1[0xb85] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb88);
  FUN_00f13d08(param_1 + 0xb6e);
  param_1[0xb50] = &PTR_FUN_028266f0;
  param_1[0xb67] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb6a);
  FUN_00f13d08(param_1 + 0xb50);
  param_1[0xb32] = &PTR_FUN_028266f0;
  param_1[0xb49] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb4c);
  FUN_00f13d08(param_1 + 0xb32);
  FUN_00f01868(param_1 + 0xb21);
  FUN_009c825c(param_1 + 0xad3);
  param_1[0xa14] = &PTR_FUN_027d5388;
  param_1[0xaaf] = &PTR_FUN_028266f0;
  param_1[0xac6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xac9);
  FUN_00f13d08(param_1 + 0xaaf);
  param_1[0xa91] = &PTR_FUN_028266f0;
  param_1[0xaa8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaab);
  FUN_00f13d08(param_1 + 0xa91);
  param_1[0xa73] = &PTR_FUN_028266f0;
  param_1[0xa8a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa8d);
  FUN_00f13d08(param_1 + 0xa73);
  FUN_00f01868(param_1 + 0xa62);
  FUN_009c825c(param_1 + 0xa14);
  FUN_009c7fa8(param_1 + 0x75c);
  FUN_00f0d3a4(param_1 + 0x736);
  FUN_00f01868(param_1 + 0x725);
  FUN_00ab3254(param_1 + 0x6ab);
  FUN_00f0d3a4(param_1 + 0x685);
  param_1[0x667] = &PTR_FUN_028266f0;
  param_1[0x67e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x681);
  FUN_00f13d08(param_1 + 0x667);
  FUN_00f0d3a4(param_1 + 0x641);
  FUN_00f13d08(param_1 + 0x62a);
  FUN_00f0d3a4(param_1 + 0x604);
  FUN_00f13d08(param_1 + 0x5eb);
  FUN_00f0d3a4(param_1 + 0x5c5);
  FUN_00f13d08(param_1 + 0x5ac);
  FUN_00f13d08(param_1 + 0x595);
  FUN_00f13d08(param_1 + 0x57c);
  FUN_00f01868(param_1 + 0x56b);
  param_1[0x4ac] = &PTR_FUN_027d5388;
  param_1[0x547] = &PTR_FUN_028266f0;
  param_1[0x55e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x561);
  FUN_00f13d08(param_1 + 0x547);
  param_1[0x529] = &PTR_FUN_028266f0;
  param_1[0x540] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x543);
  FUN_00f13d08(param_1 + 0x529);
  param_1[0x50b] = &PTR_FUN_028266f0;
  param_1[0x522] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x525);
  FUN_00f13d08(param_1 + 0x50b);
  FUN_00f01868(param_1 + 0x4fa);
  FUN_009c825c(param_1 + 0x4ac);
  FUN_00f0d3a4(param_1 + 0x486);
  FUN_00f0d3a4(param_1 + 0x460);
  param_1[0x43f] = &PTR_FUN_028266f0;
  param_1[0x456] = &PTR_FUN_02826850;
  param_1[0x2df] = &PTR_FUN_027d6650;
  FUN_00f0a79c(param_1 + 0x459);
  FUN_00f13d08(param_1 + 0x43f);
  param_1[0x421] = &PTR_FUN_028266f0;
  param_1[0x438] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x43b);
  FUN_00f13d08(param_1 + 0x421);
  FUN_00ac6220(param_1 + 0x3b6);
  FUN_00ac6220(param_1 + 0x34b);
  FUN_00f0d3a4(param_1 + 0x325);
  param_1[0x307] = &PTR_FUN_028266f0;
  param_1[0x31e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x321);
  FUN_00f13d08(param_1 + 0x307);
  FUN_00f01868(param_1 + 0x2f6);
  FUN_00f13d08(param_1 + 0x2df);
  FUN_00f01868(param_1 + 0x2ce);
  FUN_00f0d3a4(param_1 + 0x2a8);
  param_1[0x28a] = &PTR_FUN_028266f0;
  param_1[0x2a1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2a4);
  FUN_00f13d08(param_1 + 0x28a);
  param_1[0x171] = &PTR_FUN_027d70a0;
  FUN_00f0d3a4(param_1 + 0x262);
  FUN_00f0d3a4(param_1 + 0x23c);
  param_1[0x21e] = &PTR_FUN_028266f0;
  param_1[0x235] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x238);
  FUN_00f13d08(param_1 + 0x21e);
  FUN_00f0d3a4(param_1 + 0x1f8);
  FUN_00af8c0c(param_1 + 0x182);
  FUN_00f01868(param_1 + 0x171);
  FUN_00f01868(param_1 + 0x160);
  FUN_00f0d3a4(param_1 + 0x13a);
  param_1[0x11c] = &PTR_FUN_028266f0;
  param_1[0x133] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x136);
  FUN_00f13d08(param_1 + 0x11c);
  param_1[0xfe] = &PTR_FUN_028266f0;
  param_1[0x115] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x118);
  FUN_00f13d08(param_1 + 0xfe);
  FUN_00f01868(param_1 + 0xed);
  FUN_00f01868(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

