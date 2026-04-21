// functions/00a34 — 12 functions
#include "libGameKindred.h"




void FUN_00a34528(long *param_1)

{
  FUN_00f0d75c(param_1 + 0x1b6);
  *(uint *)((long)param_1 + 0xe34) = *(uint *)((long)param_1 + 0xe34) | 4;
  *(uint *)((long)param_1 + 0xb4c) = *(uint *)((long)param_1 + 0xb4c) & 0xfffffffb;
  FUN_00f0db34(param_1 + 0x1b6);
                    /* WARNING: Could not recover jumptable at 0x00a34578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00a3457c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_80 [4];
  int local_7c;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  lVar10 = *(long *)(param_1 + 0xaa8);
  lVar11 = *(long *)(param_1 + 0xd78);
  lVar1 = param_1 + 0xac8;
  if ((*(float *)(param_1 + 0xb18) != (float)DAT_03218f08) ||
     (*(float *)(param_1 + 0xb1c) != DAT_03218f08._4_4_)) {
    *(ulong *)(param_1 + 0xb18) = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(lVar1);
  }
  lVar2 = param_1 + 0xdb0;
  if ((*(float *)(param_1 + 0xe00) != (float)DAT_03218f08) ||
     (*(float *)(param_1 + 0xe04) != DAT_03218f08._4_4_)) {
    *(ulong *)(param_1 + 0xe00) = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(lVar2);
  }
  lVar3 = param_1 + 0x9d8;
  if (((*(byte *)(param_1 + 0xe34) >> 2 & 1) != 0) &&
     (fVar12 = (float)FUN_00f0d4e0(lVar2), 550.0 < fVar12)) {
    FUN_00cb6728(0x44098000,0x43160000,lVar2);
  }
  fVar12 = 96.0;
  lVar4 = param_1 + 0x8e8;
  lVar5 = param_1 + 0xca8;
  FUN_00f13f08(0x42c00000,0x42c00000,lVar4);
  lVar6 = param_1 + 3000;
  FUN_00f13f08(0x42c00000,lVar6);
  if (lVar10 != 0) {
    fVar13 = (float)FUN_00f0eaf4(lVar3);
    FUN_00f0eaf4(lVar3);
    if (fVar13 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar14 = 84.0 / fVar13;
    fVar12 = fVar13;
    if ((*(float *)(param_1 + 0xa20) != fVar14) ||
       (fVar12 = *(float *)(param_1 + 0xa24), fVar12 != fVar14)) {
      *(float *)(param_1 + 0xa20) = fVar14;
      *(float *)(param_1 + 0xa24) = fVar14;
      FUN_0091ada4(lVar3);
    }
  }
  if (lVar11 != 0) {
    fVar13 = (float)FUN_00f0eaf4(lVar5);
    FUN_00f0eaf4(lVar5);
    if (fVar13 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar13 = 84.0 / fVar13;
    if ((*(float *)(param_1 + 0xcf0) != fVar13) || (*(float *)(param_1 + 0xcf4) != fVar13)) {
      *(float *)(param_1 + 0xcf0) = fVar13;
      *(float *)(param_1 + 0xcf4) = fVar13;
      FUN_0091ada4(lVar5);
    }
  }
  if ((*(byte *)(param_1 + 0xe34) >> 2 & 1) == 0) {
    FUN_00f07940(0xc2200000,0,lVar4,5,lVar1,8);
    FUN_00f07940(0x42200000,0,lVar6,7,lVar1,8);
  }
  else {
    FUN_00f07b18(0xc1c00000,lVar4,1,lVar2,3);
    FUN_00f07b18(0,lVar4,5,lVar2,5);
    FUN_00f07b18(0x41c00000,lVar6,3,lVar2,1);
    FUN_00f07b18(0,lVar6,5,lVar2,5);
  }
  FUN_00f07940(0,0,lVar3,8,lVar4,8);
  FUN_00f07940(0,0,lVar5,8,lVar6,8);
  if ((*(byte *)(param_1 + 0xe34) >> 2 & 1) != 0) {
    uVar9 = (uint)(lVar10 != 0);
    uVar8 = (uint)(lVar11 != 0);
    *(uint *)(param_1 + 0xa5c) =
         *(uint *)(param_1 + 0xa5c) & 0xffffff80 | *(uint *)(param_1 + 0xa5c) & 0x3f | uVar9 << 6;
    *(uint *)(param_1 + 0x96c) =
         *(uint *)(param_1 + 0x96c) & 0xffffff80 | *(uint *)(param_1 + 0x96c) & 0x3f | uVar9 << 6;
    *(uint *)(param_1 + 0xd2c) =
         *(uint *)(param_1 + 0xd2c) & 0xffffff80 | *(uint *)(param_1 + 0xd2c) & 0x3f | uVar8 << 6;
    *(uint *)(param_1 + 0xc3c) =
         *(uint *)(param_1 + 0xc3c) & 0xffffff80 | *(uint *)(param_1 + 0xc3c) & 0x3f | uVar8 << 6;
  }
  lVar1 = param_1 + 0x790;
  FUN_00f13238(lVar1);
  fVar13 = (float)FUN_00f13e54(lVar1);
  fVar12 = -38.0;
  if ((*(byte *)(param_1 + 0xf58) >> 3 & 1) == 0) {
    FUN_00967268(&local_7c,0,auStack_80,0);
    fVar12 = (float)local_7c;
  }
  fVar12 = fVar13 + 12.0 + -38.0 + fVar12;
  lVar10 = param_1 + 0x2e0;
  FUN_00f13f08(fVar12,0x42e00000,lVar10);
  FUN_00f13f08(fVar12,0x42f00000,param_1 + 0x4c0);
  *(byte *)(param_1 + 0x2c8) = *(byte *)(param_1 + 0x2c8) & 0xfe;
  *(byte *)(param_1 + 0x4a8) = *(byte *)(param_1 + 0x4a8) & 0xfe;
  *(byte *)(param_1 + 0x688) = *(byte *)(param_1 + 0x688) | 1;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) | 1;
  lVar11 = param_1 + 0x1f0;
  lVar2 = param_1 + 0x5b0;
  FUN_00f07940(0x42180000,0,lVar10,7,lVar1,7);
  FUN_00f07940(0,0,param_1 + 0x4c0,8,lVar10,8);
  FUN_00f082c0(0x42f00000,lVar11);
  FUN_00f082c0(0x42f00000,param_1 + 0x3d0);
  FUN_00f082c0(0x42f00000,lVar2);
  FUN_00f082c0(0x42f00000,param_1 + 0x6a0);
  FUN_00f07b18(0x80000000,lVar11,1,lVar10,3);
  FUN_00f07b18(0,lVar11,5,lVar10,5);
  FUN_00f07b18(0,lVar2,3,lVar10,1);
  FUN_00f07b18(0,lVar2,5,lVar10,5);
  FUN_00f07940(0,0,param_1 + 0x3d0,8,lVar11,8);
  FUN_00f07940(0,0,param_1 + 0x6a0,8,lVar2,8);
  FUN_00f13238(param_1);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a34a7c(long param_1,undefined8 param_2)

{
  FUN_00f0e670(param_1 + 0x9d8,param_2,2);
  return;
}




void FUN_00a34a88(long param_1,undefined8 param_2)

{
  FUN_00f0e670(param_1 + 0xca8,param_2,2);
  return;
}




void FUN_00a34a94(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf54) = param_2;
  return;
}




bool FUN_00a34a9c(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                 byte param_6,byte param_7,uint *param_8,uint *param_9)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  void *pvVar15;
  
  bVar3 = *(byte *)(param_1 + 0xee0);
  if (param_2 == (char *)0x0) {
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0xee8);
    }
    bVar8 = false;
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar15 = *(void **)(param_1 + 0xef0);
      if ((bVar3 & 1) == 0) {
        pvVar15 = (void *)(param_1 + 0xee1);
      }
      pcVar12 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar12 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar13 = (char *)(param_1 + 0xee1);
          lVar14 = -(ulong)(bVar3 >> 1);
          bVar8 = true;
          do {
            if (*pcVar13 != *pcVar12) {
              bVar8 = false;
              break;
            }
            pcVar13 = pcVar13 + 1;
            pcVar12 = pcVar12 + 1;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0);
          goto LAB_00a34b84;
        }
      }
      else if (sVar1 != 0) {
        iVar10 = memcmp(pvVar15,pcVar12,sVar1);
        goto LAB_00a34b7c;
      }
      bVar8 = true;
    }
  }
  else {
    if ((bVar3 & 1) == 0) {
      pcVar12 = (char *)(param_1 + 0xee1);
    }
    else {
      pcVar12 = *(char **)(param_1 + 0xef0);
    }
    iVar10 = strcmp(param_2,pcVar12);
LAB_00a34b7c:
    bVar8 = iVar10 == 0;
  }
LAB_00a34b84:
  bVar3 = *(byte *)(param_1 + 0xef8);
  if (param_3 == (char *)0x0) {
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0xf00);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    bVar9 = false;
    if (sVar1 != sVar2) goto LAB_00a34c34;
    pvVar15 = *(void **)(param_1 + 0xf08);
    if ((bVar3 & 1) == 0) {
      pvVar15 = (void *)(param_1 + 0xef9);
    }
    pcVar12 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar12 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar13 = (char *)(param_1 + 0xef9);
        lVar14 = -(ulong)(bVar3 >> 1);
        bVar9 = true;
        do {
          if (*pcVar13 != *pcVar12) {
            bVar9 = false;
            break;
          }
          pcVar13 = pcVar13 + 1;
          pcVar12 = pcVar12 + 1;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0);
        goto LAB_00a34c34;
      }
    }
    else if (sVar1 != 0) {
      iVar10 = memcmp(pvVar15,pcVar12,sVar1);
      goto LAB_00a34c2c;
    }
    bVar9 = true;
  }
  else {
    if ((bVar3 & 1) == 0) {
      pcVar12 = (char *)(param_1 + 0xef9);
    }
    else {
      pcVar12 = *(char **)(param_1 + 0xf08);
    }
    iVar10 = strcmp(param_3,pcVar12);
LAB_00a34c2c:
    bVar9 = iVar10 == 0;
  }
LAB_00a34c34:
  uVar11 = FUN_00a34d04(param_5,param_1 + 0xf10);
  if (((((bool)(bVar8 & bVar9)) && ((uVar11 & 1) != 0)) &&
      ((*(byte *)(param_1 + 0xf58) & 1) == (param_6 & 1))) &&
     ((*(byte *)(param_1 + 0xf58) >> 1 & 1) == (param_7 & 1))) {
    uVar4 = (*(uint *)(param_1 + 0xf4c) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0xf4c) & 0xff00ff) << 8;
    uVar5 = (*(uint *)(param_1 + 0xf48) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0xf48) & 0xff00ff) << 8;
    uVar6 = (*param_8 & 0xff00ff00) >> 8 | (*param_8 & 0xff00ff) << 8;
    uVar7 = (*param_9 & 0xff00ff00) >> 8 | (*param_9 & 0xff00ff) << 8;
    bVar8 = (uVar5 >> 0x10 | uVar5 << 0x10) == (uVar6 >> 0x10 | uVar6 << 0x10) &&
            (uVar4 >> 0x10 | uVar4 << 0x10) == (uVar7 >> 0x10 | uVar7 << 0x10);
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}




byte FUN_00a34d04(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  bVar5 = false;
  if (sVar1 == sVar2) {
    pbVar9 = *(byte **)(param_1 + 0x10);
    pbVar10 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    if ((bVar4 & 1) == 0) {
      pbVar10 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        lVar8 = -(ulong)(bVar3 >> 1);
        pbVar9 = param_1;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar10) {
            bVar5 = false;
            goto LAB_00a34dbc;
          }
          lVar8 = lVar8 + 1;
          pbVar10 = pbVar10 + 1;
        } while (lVar8 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar7 = memcmp(pbVar9,pbVar10,sVar1);
      bVar5 = iVar7 == 0;
      goto LAB_00a34dbc;
    }
    bVar5 = true;
  }
LAB_00a34dbc:
  bVar3 = param_1[0x18];
  bVar4 = param_2[0x18];
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x20);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x20);
  }
  bVar6 = false;
  if (sVar1 == sVar2) {
    pbVar9 = *(byte **)(param_1 + 0x28);
    pbVar10 = *(byte **)(param_2 + 0x28);
    if ((bVar3 & 1) == 0) {
      pbVar9 = param_1 + 0x19;
    }
    if ((bVar4 & 1) == 0) {
      pbVar10 = param_2 + 0x19;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        param_1 = param_1 + 0x19;
        lVar8 = -(ulong)(bVar3 >> 1);
        do {
          if (*param_1 != *pbVar10) {
            bVar6 = false;
            goto LAB_00a34e64;
          }
          param_1 = param_1 + 1;
          lVar8 = lVar8 + 1;
          pbVar10 = pbVar10 + 1;
        } while (lVar8 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar7 = memcmp(pbVar9,pbVar10,sVar1);
      bVar6 = iVar7 == 0;
      goto LAB_00a34e64;
    }
    bVar6 = true;
  }
LAB_00a34e64:
  return bVar5 & bVar6;
}




byte FUN_00a34e78(long param_1)

{
  return *(byte *)(param_1 + 0xf58) >> 2 & 1;
}




void FUN_00a34e84(uint *param_1,undefined8 *param_2)

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
    FUN_00a35200(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a34f0c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00a34f78(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  FUN_008fa54c();
  FUN_008fa54c(param_1 + 0x18,param_3);
  *(byte *)(param_1 + 0x30) = param_4 & 1;
  return;
}




void FUN_00a34fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9438;
  if ((*(byte *)(param_1 + 0x1e5) & 1) != 0) {
    operator_delete((void *)param_1[0x1e7]);
  }
  if ((*(byte *)(param_1 + 0x1e2) & 1) != 0) {
    operator_delete((void *)param_1[0x1e4]);
  }
  if ((*(byte *)(param_1 + 0x1df) & 1) != 0) {
    operator_delete((void *)param_1[0x1e1]);
  }
  if ((*(byte *)(param_1 + 0x1dc) & 1) != 0) {
    operator_delete((void *)param_1[0x1de]);
  }
  FUN_00f0d3a4(param_1 + 0x1b6);
  param_1[0x195] = &PTR_FUN_02827290;
  param_1[0x1ac] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x1b3);
  param_1[0x195] = &PTR_FUN_028266f0;
  param_1[0x1ac] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1af);
  FUN_00f13d08(param_1 + 0x195);
  param_1[0x177] = &PTR_FUN_028266f0;
  param_1[0x18e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x191);
  FUN_00f13d08(param_1 + 0x177);
  param_1[0x159] = &PTR_FUN_028266f0;
  param_1[0x170] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x173);
  FUN_00f13d08(param_1 + 0x159);
  param_1[0x13b] = &PTR_FUN_028266f0;
  param_1[0x152] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x155);
  FUN_00f13d08(param_1 + 0x13b);
  param_1[0x11d] = &PTR_FUN_028266f0;
  param_1[0x134] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x137);
  FUN_00f13d08(param_1 + 0x11d);
  param_1[0xf2] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x109);
  FUN_00f13d08(param_1 + 0xf2);
  param_1[0xd4] = &PTR_FUN_028266f0;
  param_1[0xeb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xee);
  FUN_00f13d08(param_1 + 0xd4);
  param_1[0xb6] = &PTR_FUN_028266f0;
  param_1[0xcd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd0);
  FUN_00f13d08(param_1 + 0xb6);
  param_1[0x98] = &PTR_FUN_028266f0;
  param_1[0xaf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb2);
  FUN_00f13d08(param_1 + 0x98);
  param_1[0x7a] = &PTR_FUN_028266f0;
  param_1[0x91] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x94);
  FUN_00f13d08(param_1 + 0x7a);
  param_1[0x5c] = &PTR_FUN_028266f0;
  param_1[0x73] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x76);
  FUN_00f13d08(param_1 + 0x5c);
  param_1[0x3e] = &PTR_FUN_028266f0;
  param_1[0x55] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x58);
  FUN_00f13d08(param_1 + 0x3e);
  FUN_00f01868(param_1 + 0x2d);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

