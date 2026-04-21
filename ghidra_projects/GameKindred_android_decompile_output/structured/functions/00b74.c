// functions/00b74 — 11 functions
#include "libGameKindred.h"




void FUN_00b74244(long param_1)

{
  FUN_00b32074(param_1 + 0xb6f8,7);
  FUN_00b742d4(param_1,param_1 + 0xb6f8,param_1 + 200,1,0);
  return;
}




void FUN_00b74288(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_009636d8(uVar1,param_1 + 0x138a0);
  return;
}




void FUN_00b742bc(long param_1)

{
  FUN_00b74b64(param_1,0,*(undefined4 *)(param_1 + 0x138b8));
  return;
}




void FUN_00b742d4(undefined8 param_1,long param_2,long param_3,uint param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  undefined1 auStack_64 [4];
  float local_60;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,auStack_5c,&local_60,auStack_64);
  if ((param_5 & 1) == 0) {
    if (((param_4 ^ *(byte *)(param_2 + 0x84) >> 2) & 1) != 0) {
      lVar1 = param_2;
      if ((param_4 & 1) == 0) {
        lVar1 = param_3;
      }
      uVar4 = FUN_00efef08(0,0,0x3f4ccccd,FUN_00a36794);
      FUN_00f01980(lVar1);
      *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 4;
      FUN_00f022a0(lVar1,uVar4);
      if ((param_4 & 1) == 0) {
        param_3 = param_2;
        local_60 = -local_60;
      }
      uVar4 = FUN_00efef08(0,local_60,0x3f4ccccd,FUN_00a36794);
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
        FUN_00efc8e8(puVar6);
        *(undefined ***)puVar6 = &PTR_FUN_02825148;
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      }
      FUN_00f01980(param_3);
      FUN_00f02308(param_3,uVar4,puVar6,0);
    }
  }
  else {
    *(uint *)(param_2 + 0x84) =
         *(uint *)(param_2 + 0x84) & 0xfffffff8 | *(uint *)(param_2 + 0x84) & 3 | (param_4 & 1) << 2
    ;
    *(uint *)(param_3 + 0x84) =
         *(uint *)(param_3 + 0x84) & 0xfffffff8 |
         *(uint *)(param_3 + 0x84) & 3 | (~param_4 & 1) << 2;
    fVar7 = 0.0;
    if ((param_4 & 1) == 0) {
      fVar7 = -local_60;
    }
    if (*(float *)(param_2 + 0x44) != fVar7) {
      *(float *)(param_2 + 0x44) = fVar7;
      FUN_0091ada4(param_2);
    }
    if ((param_4 & 1) == 0) {
      local_60 = 0.0;
    }
    if (*(float *)(param_3 + 0x44) != local_60) {
      *(float *)(param_3 + 0x44) = local_60;
      FUN_0091ada4(param_3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b7451c(long param_1)

{
  FUN_00b742d4(param_1,param_1 + 0xb6f8,param_1 + 200,0,0);
  return;
}




void FUN_00b74538(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027e5ea0;
  if ((*(byte *)(param_1 + 0x2714) & 1) != 0) {
    operator_delete((void *)param_1[0x2716]);
  }
  FUN_00b27cec(param_1 + 0x26f7);
  param_1[0x266b] = &PTR_FUN_027dd960;
  param_1[0x26ca] = &PTR_FUN_027d3cc8;
  param_1[0x26e1] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x26f3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26f3]);
    param_1[0x26f3] = 0;
    param_1[0x26f2] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x26ca);
  FUN_00f0d3a4(param_1 + 0x26a4);
  FUN_00f01868(param_1 + 0x2693);
  FUN_00f13d08(param_1 + 0x267c);
  FUN_00f01868(param_1 + 0x266b);
  FUN_00b35268(param_1 + 0x16df);
  FUN_009c7fa8(param_1 + 0x1427);
  FUN_00f01868(param_1 + 0x1416);
  FUN_00f13d08(param_1 + 0x13e2);
  param_1[0x13c4] = &PTR_FUN_028266f0;
  param_1[0x13db] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13de);
  FUN_00f13d08(param_1 + 0x13c4);
  lVar2 = -0x5e0;
  puVar1 = param_1 + 0x1366;
  do {
    *puVar1 = &PTR_FUN_027e6008;
    FUN_00f0d3a4(puVar1 + 0x37);
    FUN_00f0d3a4(puVar1 + 0x11);
    FUN_00f01868(puVar1);
    lVar2 = lVar2 + 0x2f0;
    puVar1 = puVar1 + -0x5e;
  } while (lVar2 != 0);
  FUN_00f01868(param_1 + 0x12f7);
  param_1[0x12d9] = &PTR_FUN_028266f0;
  param_1[0x12f0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x12f3);
  FUN_00f13d08(param_1 + 0x12d9);
  FUN_00f0d3a4(param_1 + 0x12b3);
  FUN_009c7fa8(param_1 + 0xffb);
  FUN_009c7fa8(param_1 + 0xd43);
  FUN_009c7fa8(param_1 + 0xa8b);
  param_1[0xa6d] = &PTR_FUN_028266f0;
  param_1[0xa84] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa87);
  FUN_00f13d08(param_1 + 0xa6d);
  FUN_00f0d3a4(param_1 + 0xa47);
  if ((void *)param_1[0xa46] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa46]);
    param_1[0xa46] = 0;
    param_1[0xa45] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xa1f);
  param_1[0xa01] = &PTR_FUN_028266f0;
  param_1[0xa18] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa1b);
  FUN_00f13d08(param_1 + 0xa01);
  FUN_00f01868(param_1 + 0x9f0);
  param_1[0x9d2] = &PTR_FUN_028266f0;
  param_1[0x9e9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9ec);
  FUN_00f13d08(param_1 + 0x9d2);
  FUN_00ed00e0(param_1 + 0x92b);
  FUN_00f13d08(param_1 + 0x8f7);
  param_1[0x8d9] = &PTR_FUN_028266f0;
  param_1[0x8f0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8f3);
  FUN_00f13d08(param_1 + 0x8d9);
  FUN_00f01868(param_1 + 0x8c8);
  FUN_00b1eb14(param_1 + 0x4d8);
  FUN_00b1df14(param_1 + 0x36a);
  param_1[0x346] = &PTR_FUN_028266f0;
  param_1[0x35d] = &PTR_FUN_02826850;
  param_1[0x2ab] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x360);
  FUN_00f13d08(param_1 + 0x346);
  param_1[0x328] = &PTR_FUN_028266f0;
  param_1[0x33f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x342);
  FUN_00f13d08(param_1 + 0x328);
  param_1[0x30a] = &PTR_FUN_028266f0;
  param_1[0x321] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x324);
  FUN_00f13d08(param_1 + 0x30a);
  FUN_00f01868(param_1 + 0x2f9);
  FUN_009c825c(param_1 + 0x2ab);
  FUN_00f0d3a4(param_1 + 0x285);
  param_1[0x265] = &PTR_FUN_028266f0;
  param_1[0x27c] = &PTR_FUN_02826850;
  param_1[0x105] = &PTR_FUN_027d8d40;
  FUN_00f0a79c(param_1 + 0x27f);
  FUN_00f13d08(param_1 + 0x265);
  param_1[0x247] = &PTR_FUN_028266f0;
  param_1[0x25e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x261);
  FUN_00f13d08(param_1 + 0x247);
  FUN_00ac6220(param_1 + 0x1dc);
  FUN_00ac6220(param_1 + 0x171);
  FUN_00f0d3a4(param_1 + 0x14b);
  param_1[0x12d] = &PTR_FUN_028266f0;
  param_1[0x144] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x147);
  FUN_00f13d08(param_1 + 0x12d);
  FUN_00f01868(param_1 + 0x11c);
  FUN_00f13d08(param_1 + 0x105);
  FUN_00ed00e0(param_1 + 0x5e);
  FUN_00f13d08(param_1 + 0x2a);
  FUN_00f01868(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b749d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e6008;
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b74a1c(void *param_1)

{
  FUN_00b74538();
  operator_delete(param_1);
  return;
}




void FUN_00b74a40(void)

{
  return;
}




void FUN_00b74a44(long param_1,ulong param_2)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *__s2;
  byte *pbVar7;
  long lVar8;
  void *__s1;
  
  if ((param_2 & 1) == 0) goto LAB_00b74b34;
  pbVar1 = (byte *)(param_1 + 0x138a0);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x138a8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x138b0);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x138a1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -(ulong)(bVar3 >> 1);
        pbVar7 = pbVar1;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *__s2) goto LAB_00b74b04;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00b74b04;
  }
  else {
LAB_00b74b04:
    uVar5 = FUN_009580c4();
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_009580b8();
      FUN_0095e34c(uVar6,pbVar1,0);
    }
  }
  if (*(float *)(param_1 + 0x334) != 0.0) {
    *(undefined4 *)(param_1 + 0x334) = 0;
    FUN_0091ada4(param_1 + 0x2f0);
  }
LAB_00b74b34:
  if (-1 < *(int *)(param_1 + 0x138b8)) {
    FUN_00b74b64(param_1,0);
    return;
  }
  return;
}




void FUN_00b74b64(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar1 = (uint *)(param_1 + 0x2717);
  *puVar1 = param_3;
  if ((-1 < (int)param_3) && (puVar2 = (uint *)(param_1 + 0xa45), param_3 < *puVar2)) {
    plVar3 = param_1 + 0x13c4;
    FUN_00f01980(plVar3);
    puVar4 = (uint *)((long)param_1 + 0x9ea4);
    uVar9 = *puVar4;
    uVar12 = 0;
    fVar16 = 147.0;
    if ((param_2 & 1) == 0) {
      uVar12 = 0xcc;
      fVar16 = 58.0;
    }
    if ((uVar9 >> 7 & 0xff) != uVar12) {
      *puVar4 = uVar9 & 0xffff8000 | uVar9 & 0x7f | uVar12 << 7;
      FUN_0091ada4(plVar3);
      uVar9 = *puVar4;
    }
    *puVar4 = uVar9 & 0xffffffef | (param_2 & 1) << 4 | 4;
    fVar15 = 0.35;
    uVar6 = 0x3f4ccccd;
    if ((param_2 & 1) == 0) {
      uVar6 = 0;
    }
    uVar7 = FUN_00efee28(uVar6,FUN_0091aa80);
    FUN_00f022a0(plVar3,uVar7);
    lVar10 = *(long *)(param_1[0xa46] + (ulong)*puVar1 * 8);
    uVar12 = *(uint *)(lVar10 + 0x1fc);
    *(uint *)(lVar10 + 0x1fc) = uVar12 & 0xffffffe0 | uVar12 & 0xf | (~param_2 & 1) << 4;
    uVar12 = *puVar1;
    if (uVar12 + 1 < *puVar2) {
      uVar14 = (ulong)(uVar12 + 1);
      do {
        FUN_00f01980(*(undefined8 *)(param_1[0xa46] + uVar14 * 8));
        fVar15 = fVar16 + (float)(int)uVar14 * 98.0;
        uVar7 = FUN_00efef08(*(undefined4 *)(*(long *)(param_1[0xa46] + uVar14 * 8) + 0x40),fVar15,
                             0x3eb33333,FUN_0091aa80);
        FUN_00f022a0(*(undefined8 *)(param_1[0xa46] + uVar14 * 8),uVar7);
        uVar14 = uVar14 + 1;
      } while ((uint)uVar14 < *puVar2);
      uVar12 = *puVar1;
    }
    FUN_00f01a4c(*(undefined8 *)(param_1[0xa46] + (ulong)uVar12 * 8),1);
    if ((param_2 & 1) == 0) {
      FUN_00f023ec(param_1 + 0x8c8,*(undefined8 *)(param_1[0xa46] + (ulong)*puVar1 * 8),1);
      fVar16 = *(float *)((long)param_1 + 0x4fc4);
      FUN_00f01fcc(param_1 + 0x9f0,0,0,1,1);
      lVar10 = *(long *)(param_1[0xa46] + (ulong)*puVar1 * 8);
      fVar16 = fVar16 + fVar15 + (float)(int)*puVar1 * 98.0;
      if ((*(float *)(lVar10 + 0x40) != 0.0) || (*(float *)(lVar10 + 0x44) != fVar16)) {
        *(undefined4 *)(lVar10 + 0x40) = 0;
        *(float *)(lVar10 + 0x44) = fVar16;
        FUN_0091ada4();
      }
      lVar10 = DAT_03210d00;
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
        *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
        FUN_00efc8e8(puVar13);
        *(undefined ***)puVar13 = &PTR_FUN_02825148;
        *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
      }
      FUN_00f022a0(plVar3,puVar13);
      *puVar1 = 0xffffffff;
    }
    else {
      (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0xa46] + (ulong)*puVar1 * 8),1)
      ;
      lVar10 = FUN_00965ecc(param_1 + 0x8c8);
      fVar16 = *(float *)(lVar10 + 8);
      fVar17 = *(float *)(lVar10 + 0xc);
      fVar18 = *(float *)(lVar10 + 0x14);
      lVar10 = FUN_00965ecc(param_1);
      fVar15 = *(float *)((long)param_1 + 0x4fc4);
      fVar17 = fVar15 + (fVar17 - *(float *)(lVar10 + 0xc)) / fVar18;
      FUN_00f01fcc(param_1 + 0x9f0,0,0,1,1);
      fVar16 = fVar16 / fVar18;
      lVar10 = *(long *)(param_1[0xa46] + (ulong)*puVar1 * 8);
      fVar15 = fVar17 + fVar15 + (float)(int)*puVar1 * 98.0;
      if ((*(float *)(lVar10 + 0x40) != fVar16) || (*(float *)(lVar10 + 0x44) != fVar15)) {
        *(float *)(lVar10 + 0x40) = fVar16;
        *(float *)(lVar10 + 0x44) = fVar15;
        FUN_0091ada4();
      }
    }
    uVar7 = FUN_00f08be8(*(long *)(param_1[0xa46] + (ulong)uVar12 * 8) + 0x248);
    FUN_009580b8();
    uVar8 = FUN_0095fdf0();
    uVar14 = FUN_00e70b34(uVar7,uVar8);
    pcVar5 = "MENU_PROFILE_USERTEAM_LEAVE_TEAM";
    if ((uVar14 & 1) == 0) {
      pcVar5 = "MENU_PROFILE_USERTEAM_REMOVE_MEMBER";
    }
    uVar7 = FUN_00e6ce7c(pcVar5,0);
    FUN_00ab7498(param_1 + 0x1427,uVar7);
    plVar3 = param_1 + 0x1416;
    fVar16 = 1.0;
    fVar15 = 1.0;
    if ((param_2 & 1) == 0) {
      fVar16 = -1.0;
    }
    *(uint *)((long)param_1 + 0x9f94) = *(uint *)((long)param_1 + 0x9f94) | 4;
    FUN_00f01980(plVar3);
    FUN_00f01fcc(plVar3,0,0,1,1);
    fVar17 = fVar16 * fVar15 * -0.5;
    if (*(float *)((long)param_1 + 0xa0f4) != fVar17) {
      *(float *)((long)param_1 + 0xa0f4) = fVar17;
      FUN_0091ada4(plVar3);
    }
    FUN_00f01fcc(plVar3,0,0,1,1);
    uVar7 = FUN_00efef08(0,fVar16 * (fVar15 * 0.5 + 5.0),0x3eb33333,FUN_0091aa80);
    FUN_00f022a0(plVar3,uVar7);
    lVar10 = DAT_03210d00;
    if ((param_2 & 1) == 0) {
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
        *(int *)(lVar10 + 0x20014) = *(int *)(lVar10 + 0x20014) + 1;
        FUN_00efc8e8(puVar13);
        *(undefined ***)puVar13 = &PTR_FUN_02825148;
        *(int *)(lVar10 + 0x20020) = *(int *)(lVar10 + 0x20020) + 1;
      }
      FUN_00f022a0(plVar3,puVar13);
    }
    else {
      plVar3 = param_1 + 0x13e2;
      uVar14 = FUN_00f02540(plVar3);
      if ((uVar14 & 1) != 0) {
        FUN_00f01a4c(plVar3,1);
      }
      (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
      uVar7 = *(undefined8 *)(*(long *)(param_1[0xa46] + (ulong)*puVar1 * 8) + 0x40);
      fVar16 = (float)uVar7 + 0.0;
      fVar15 = (float)((ulong)uVar7 >> 0x20) + 98.0;
      if ((*(float *)(param_1 + 0x13ea) != fVar16) || (*(float *)((long)param_1 + 0x9f54) != fVar15)
         ) {
        param_1[0x13ea] = CONCAT44(fVar15,fVar16);
        FUN_0091ada4(plVar3);
      }
      *(uint *)((long)param_1 + 0xa134) = *(uint *)((long)param_1 + 0xa134) | 4;
    }
                    /* WARNING: Could not recover jumptable at 0x00b751b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}

