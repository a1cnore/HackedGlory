// functions/00aef — 12 functions
#include "libGameKindred.h"




void FUN_00aef028(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  
  switch(param_2) {
  case 0:
    uVar4 = 0xff091911;
    break;
  case 1:
    uVar4 = 0xff1a1416;
    break;
  case 2:
    uVar4 = 0xff14171c;
    break;
  case 3:
    uVar4 = 0xff121414;
    break;
  case 4:
    uVar4 = 0xff221911;
    break;
  case 5:
    uVar4 = 0xff241a14;
    break;
  case 6:
    uVar4 = 0xff170c19;
    break;
  default:
    lVar2 = FUN_00969248();
    if (*(int *)(lVar2 + 0x38) < 1) {
      uVar4 = *(undefined4 *)(param_1 + 0x8eb4);
    }
    else {
      uVar4 = 0xff1a1809;
    }
    *(undefined4 *)(param_1 + 0x8eb8) = uVar4;
    goto LAB_00aef0f4;
  }
  *(undefined4 *)(param_1 + 0x8eb8) = uVar4;
LAB_00aef0f4:
  lVar2 = param_1 + 0x87b0;
  FUN_00f01980(lVar2);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efe00c(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efe060(puVar5,lVar2,param_1 + 0x8eb8,2);
  FUN_00efcac4(0x3f000000,puVar5);
  FUN_00f022a0(lVar2,puVar5);
  return;
}




void FUN_00aef1dc(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte *__s1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *__s2;
  long lVar5;
  byte *pbVar6;
  byte local_90 [16];
  void *local_80;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar6 = *(byte **)(param_2 + 0x10);
    __s1 = pbVar6;
    if ((bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -(ulong)(bVar2 >> 1);
        pbVar6 = param_2;
        do {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 != *__s2) goto LAB_00aef284;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00aef2b0;
    FUN_008fce60(param_1 + 0x8e98,&DAT_0320ffa8);
  }
  else {
LAB_00aef284:
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_2 + 1;
    }
    else {
      pbVar6 = *(byte **)(param_2 + 0x10);
    }
LAB_00aef2b0:
    FUN_00e6a8a8(auStack_78,"build://%s",pbVar6);
    FUN_008fa54c(local_90,auStack_78);
    FUN_008fce60(param_1 + 0x8e98,local_90);
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    FUN_00aeeb94(param_1,*(undefined4 *)(param_1 + 0x8ec0));
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aef340(long param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x8eb0) = *(undefined4 *)param_2;
  fVar1 = (float)NEON_ucvtf((uint)*param_2);
  fVar2 = (float)NEON_ucvtf((uint)param_2[1]);
  fVar3 = (float)NEON_ucvtf((uint)param_2[2]);
  *(char *)(param_1 + 0x8eb4) = (char)(int)(fVar1 * 0.25);
  *(char *)(param_1 + 0x8eb5) = (char)(int)(fVar2 * 0.25);
  *(char *)(param_1 + 0x8eb6) = (char)(int)(fVar3 * 0.25);
  FUN_00aeeb94(param_1,*(undefined4 *)(param_1 + 0x8ec0));
  FUN_00aef028(param_1,*(undefined4 *)(param_1 + 0x8ec0));
  return;
}




void FUN_00aef3c8(long param_1,uint param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (0 < *(int *)(param_1 + 0x8ec4)) {
    lVar1 = 0;
    puVar2 = (undefined1 *)(param_1 + 0x10c9);
    do {
      *(uint *)(puVar2 + -0xf75) = *(uint *)(puVar2 + -0xf75) & 0xfffffffb | (param_2 & 1) << 2;
      *puVar2 = 0;
      FUN_00aef730(puVar2 + -0xff9);
      lVar1 = lVar1 + 1;
      puVar2 = puVar2 + 0x1000;
    } while (lVar1 < *(int *)(param_1 + 0x8ec4));
  }
  return;
}




void FUN_00aef444(long param_1,uint param_2,uint param_3,byte param_4)

{
  param_1 = param_1 + (ulong)param_2 * 0x1000;
  *(uint *)(param_1 + 0x154) =
       *(uint *)(param_1 + 0x154) & 0xfffffff8 | *(uint *)(param_1 + 0x154) & 3 | (param_3 & 1) << 2
  ;
  *(byte *)(param_1 + 0x10c9) = param_4 & 1;
  FUN_00aef730(param_1 + 0xd0);
  return;
}




void FUN_00aef470(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_027d9950;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x6c;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x7d;
  param_1[0x6c] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x9b;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xc1;
  FUN_00f0d160(plVar5);
  FUN_00b1a1c4(param_1 + 0xe7);
  FUN_008fcdb8(param_1 + 0x1bb,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x1be,&DAT_0320ffa8);
  plVar6 = param_1 + 0x1c2;
  *(undefined4 *)(param_1 + 0x1c1) = 0xff000000;
  FUN_00afbfb0(plVar6);
  param_1[0x1fe] = 0;
  *(undefined4 *)(param_1 + 0x1ff) = 0x10000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe7,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  if ((*(float *)(param_1 + 0x87) != 0.5) || (*(float *)((long)param_1 + 0x43c) != 0.5)) {
    param_1[0x87] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  uVar7 = *(uint *)((long)param_1 + 0x46c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x46c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_0091ada4(plVar3);
  }
  lVar8 = DAT_031339c0;
  if (DAT_031339c0 != 0) {
    param_1[0x1fe] = DAT_031339c0;
    FUN_00f0d92c(plVar4,lVar8,&DAT_01bee7fa);
  }
  FUN_00f0d7fc(plVar4,&DAT_031339c8);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00f0d7fc(plVar5,&DAT_031339c8);
  uVar7 = *(uint *)((long)param_1 + 0x68c);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x68c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
  }
  *(uint *)((long)param_1 + 0x7bc) = *(uint *)((long)param_1 + 0x7bc) & 0xfffffffb;
  uVar9 = FUN_00d6eb50();
  uVar9 = FUN_00d6eb5c(uVar9,"*KindredMainMenuEffects*");
  FUN_00afc274(plVar6,uVar9);
  if ((*(float *)(param_1 + 0x1cc) != 0.5) || (*(float *)((long)param_1 + 0xe64) != 0.5)) {
    param_1[0x1cc] = 0x3f0000003f000000;
    FUN_0091ada4(plVar6);
  }
  FUN_00b09144(0,param_1);
  return;
}




void FUN_00aef730(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  void *pvVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  byte bVar9;
  size_t sVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  ushort uVar17;
  char *pcVar18;
  long lVar19;
  ushort *puVar20;
  void *pvVar21;
  size_t sVar22;
  float fVar23;
  undefined8 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  lVar19 = param_1 + 0x4d8;
  FUN_00f01980(lVar19);
  lVar1 = param_1 + 0x270;
  FUN_00f01980(lVar1);
  if (*(char *)(param_1 + 0xff8) == '\0') {
    if (*(long *)(param_1 + 0xff0) != 0) {
      FUN_00f0d378(lVar19);
    }
    FUN_00afd20c(param_1 + 0xe10,"MENU_ITEM_SHEEN");
    if ((~*(uint *)(param_1 + 0x55c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x7f80;
      FUN_0091ada4(lVar19);
    }
    if (*(char *)(param_1 + 0xffa) == '\0') {
      fVar23 = 0.0;
    }
    else if (*(char *)(param_1 + 0xffb) == '\0') {
      fVar23 = 0.5;
      if (*(char *)(param_1 + 0xff9) != '\0') {
        fVar23 = 1.0;
      }
    }
    else {
      fVar23 = 1.0;
    }
    uVar6 = *(uint *)(param_1 + 0x2f4);
    if ((uVar6 >> 7 & 0xff) != (int)(fVar23 * 255.0)) {
      *(uint *)(param_1 + 0x2f4) =
           uVar6 & 0xffff8000 | uVar6 & 0x7f | ((int)(fVar23 * 255.0) & 0xffU) << 7;
      FUN_0091ada4(lVar1);
    }
  }
  else {
    uVar13 = FUN_00a250a8();
    FUN_00efcac4(0x3f19999a);
    FUN_00efddc4(0x3f19999a,uVar13);
    uVar14 = FUN_00a250a8();
    FUN_00efcac4(0x3f19999a);
    FUN_00efddc4(0x3f800000,uVar14);
    uVar15 = FUN_00a250a8();
    FUN_00efcac4(0x3f4ccccd);
    lVar11 = DAT_03210d00;
    uVar17 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar17 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + (ulong)uVar17 * 0x40 + 0x10);
      if (uVar17 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar17 = 0xffff;
      }
      else {
        uVar17 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar17;
      *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
      FUN_00efd208(puVar20);
      *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
    }
    FUN_00efd3bc(puVar20);
    FUN_00efd2dc(puVar20,uVar13,uVar14,uVar15,0);
    FUN_00f022a0(lVar19,puVar20);
    FUN_00afd018(param_1 + 0xe10,"MENU_ITEM_SHEEN");
  }
  puVar2 = &DAT_031339d0;
  if (*(char *)(param_1 + 0xff9) != '\0') {
    puVar2 = &DAT_01bee7fa;
  }
  uVar13 = FUN_00eff224(0x3e4ccccd,lVar19,puVar2,FUN_0091aa80);
  FUN_00f022a0(lVar19,uVar13);
  sVar10 = DAT_0320ffb0;
  bVar9 = DAT_0320ffa8;
  if (*(char *)(param_1 + 0xff9) == '\0') {
    sVar22 = (size_t)(DAT_0320ffa8 >> 1);
LAB_00aefa34:
    bVar7 = *(byte *)(param_1 + 0xdd8);
    sVar4 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      sVar4 = *(size_t *)(param_1 + 0xde0);
    }
    if ((bVar9 & 1) != 0) {
      sVar22 = sVar10;
    }
    if (sVar4 == sVar22) {
      pvVar21 = *(void **)(param_1 + 0xde8);
      pvVar5 = pvVar21;
      if ((bVar7 & 1) == 0) {
        pvVar5 = (void *)(param_1 + 0xdd9);
      }
      pcVar16 = DAT_0320ffb8;
      if ((bVar9 & 1) == 0) {
        pcVar16 = &DAT_0320ffa9;
      }
      if ((bVar7 & 1) == 0) {
        if (sVar4 != 0) {
          pcVar18 = (char *)(param_1 + 0xdd9);
          lVar19 = -(ulong)(bVar7 >> 1);
          do {
            if (*pcVar18 != *pcVar16) goto LAB_00aefabc;
            pcVar18 = pcVar18 + 1;
            lVar19 = lVar19 + 1;
            pcVar16 = pcVar16 + 1;
          } while (lVar19 != 0);
        }
        goto LAB_00aefc90;
      }
      if ((sVar4 == 0) || (iVar12 = memcmp(pvVar5,pcVar16,sVar4), iVar12 == 0)) goto LAB_00aefc90;
    }
    else {
LAB_00aefabc:
      if ((bVar7 & 1) == 0) {
        pvVar21 = (void *)(param_1 + 0xdd9);
      }
      else {
        pvVar21 = *(void **)(param_1 + 0xde8);
      }
    }
    FUN_00f0e578(lVar1,pvVar21);
    lVar19 = DAT_03210d00;
    uVar17 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar17 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + (ulong)uVar17 * 0x40 + 0x10);
      if (uVar17 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar17 = 0xffff;
      }
      else {
        uVar17 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar17;
      *(int *)(lVar19 + 0x20014) = *(int *)(lVar19 + 0x20014) + 1;
      FUN_00efe530(puVar20);
      *(int *)(lVar19 + 0x20020) = *(int *)(lVar19 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3dcccccd,puVar20);
    FUN_00efcb24(puVar20,FUN_009a7608);
    local_70 = NEON_fmov(0x3f800000,4);
  }
  else {
    bVar7 = *(byte *)(param_1 + 0xdf0);
    sVar4 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      sVar4 = *(size_t *)(param_1 + 0xdf8);
    }
    sVar22 = (size_t)(DAT_0320ffa8 >> 1);
    sVar3 = sVar22;
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    if (sVar4 == sVar3) {
      pvVar21 = *(void **)(param_1 + 0xe00);
      pvVar5 = pvVar21;
      if ((bVar7 & 1) == 0) {
        pvVar5 = (void *)(param_1 + 0xdf1);
      }
      pcVar16 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar16 = &DAT_0320ffa9;
      }
      if ((bVar7 & 1) == 0) {
        if (sVar4 != 0) {
          pcVar18 = (char *)(param_1 + 0xdf1);
          lVar19 = -(ulong)(bVar7 >> 1);
          do {
            if (*pcVar18 != *pcVar16) goto LAB_00aefab0;
            pcVar18 = pcVar18 + 1;
            lVar19 = lVar19 + 1;
            pcVar16 = pcVar16 + 1;
          } while (lVar19 != 0);
        }
      }
      else if ((sVar4 != 0) && (iVar12 = memcmp(pvVar5,pcVar16,sVar4), iVar12 != 0))
      goto LAB_00aefae4;
      goto LAB_00aefa34;
    }
LAB_00aefab0:
    if ((bVar7 & 1) == 0) {
      pvVar21 = (void *)(param_1 + 0xdf1);
    }
    else {
      pvVar21 = *(void **)(param_1 + 0xe00);
    }
LAB_00aefae4:
    FUN_00f0e578(lVar1,pvVar21);
    lVar19 = DAT_03210d00;
    uVar17 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar17 == 0xffff) {
      puVar20 = (ushort *)0x0;
    }
    else {
      puVar20 = (ushort *)(DAT_03210d00 + (ulong)uVar17 * 0x40 + 0x10);
      if (uVar17 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar17 = 0xffff;
      }
      else {
        uVar17 = *puVar20;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar17;
      *(int *)(lVar19 + 0x20014) = *(int *)(lVar19 + 0x20014) + 1;
      FUN_00efe530(puVar20);
      *(int *)(lVar19 + 0x20020) = *(int *)(lVar19 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3dcccccd,puVar20);
    FUN_00efcb24(puVar20,FUN_009a7608);
    local_70 = 0x3f99999a3f99999a;
  }
  FUN_00efe58c(puVar20,&local_70);
  FUN_00f022a0(lVar1,puVar20);
LAB_00aefc90:
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aefcc8(void)

{
  return;
}




void FUN_00aefccc(void)

{
  return;
}




void FUN_00aefcd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9950;
  FUN_00afc0a4(param_1 + 0x1c2);
  if ((*(byte *)(param_1 + 0x1be) & 1) != 0) {
    operator_delete((void *)param_1[0x1c0]);
  }
  if ((*(byte *)(param_1 + 0x1bb) & 1) != 0) {
    operator_delete((void *)param_1[0x1bd]);
  }
  param_1[0xe7] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x1b3);
  FUN_00f0d3a4(param_1 + 0x18c);
  FUN_00f0d3a4(param_1 + 0x166);
  FUN_00f0d3a4(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_028266f0;
  param_1[0x139] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13c);
  FUN_00f13d08(param_1 + 0x122);
  param_1[0xf8] = &PTR_FUN_02826f38;
  param_1[0x10f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x112);
  FUN_00f13d08(param_1 + 0xf8);
  FUN_00f01868(param_1 + 0xe7);
  FUN_00f0d3a4(param_1 + 0xc1);
  FUN_00f0d3a4(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  FUN_00f01868(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00aefe1c(void *param_1)

{
  FUN_00aefcd0();
  operator_delete(param_1);
  return;
}




void FUN_00aefe40(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027d9468;
  param_1[0x17] = &PTR_FUN_027d95b8;
  if ((*(byte *)(param_1 + 0x11d3) & 1) != 0) {
    operator_delete((void *)param_1[0x11d5]);
  }
  FUN_00f0d3a4(param_1 + 0x11ad);
  FUN_00f0d3a4(param_1 + 0x1187);
  FUN_00f0d3a4(param_1 + 0x1161);
  param_1[0x1143] = &PTR_FUN_028266f0;
  param_1[0x115a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x115d);
  FUN_00f13d08(param_1 + 0x1143);
  FUN_00f01868(param_1 + 0x1132);
  param_1[0x1114] = &PTR_FUN_028266f0;
  param_1[0x112b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x112e);
  FUN_00f13d08(param_1 + 0x1114);
  param_1[0x10f6] = &PTR_FUN_028266f0;
  param_1[0x110d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1110);
  FUN_00f13d08(param_1 + 0x10f6);
  FUN_00f01868(param_1 + 0x10e5);
  param_1[0x10c7] = &PTR_FUN_028266f0;
  param_1[0x10de] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10e1);
  FUN_00f13d08(param_1 + 0x10c7);
  param_1[0x10a9] = &PTR_FUN_028266f0;
  param_1[0x10c0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10c3);
  FUN_00f13d08(param_1 + 0x10a9);
  param_1[0x108b] = &PTR_FUN_028266f0;
  param_1[0x10a2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10a5);
  FUN_00f13d08(param_1 + 0x108b);
  param_1[0x106d] = &PTR_FUN_028266f0;
  param_1[0x1084] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1087);
  FUN_00f13d08(param_1 + 0x106d);
  param_1[0x104f] = &PTR_FUN_028266f0;
  param_1[0x1066] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1069);
  FUN_00f13d08(param_1 + 0x104f);
  param_1[0x1031] = &PTR_FUN_028266f0;
  param_1[0x1048] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x104b);
  FUN_00f13d08(param_1 + 0x1031);
  FUN_00f13d08(param_1 + 0x101a);
  lVar1 = 0x70d0;
  do {
    FUN_00aefcd0((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x1000;
  } while (lVar1 != -0xf30);
  FUN_00948d58(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

