// functions/10066 — 551 functions
#include "GameKindred.h"




ulong FUN_100660024(byte *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x9ee0);
  if (*(uint *)(param_1 + 0x9ee0) != 0) {
    param_1[0x9ed4] = 0;
    param_1[0x9ed5] = 0;
    param_1[0x9ed6] = 0;
    param_1[0x9ed7] = 0;
    uVar2 = (ulong)*param_1;
    if (*param_1 != 0) {
      uVar2 = 0;
      pbVar3 = param_1 + 0x380;
      lVar4 = 200;
      do {
        if (param_3 <= (uint)uVar2) {
          return uVar2;
        }
        if ((*pbVar3 != 0) && ((*(uint *)(param_1 + 0x9ed0) & (int)*(short *)(pbVar3 + 0x24)) != 0))
        {
          puVar1 = (undefined8 *)(param_2 + uVar2 * 0x10);
          *puVar1 = param_1;
          puVar1[1] = pbVar3;
          uVar2 = (ulong)((uint)uVar2 + 1);
        }
        pbVar3 = pbVar3 + 0x28;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return uVar2;
}




void FUN_100660090(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = (uint *)(param_1 + 0xc84);
  do {
    uVar9 = *puVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar9 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (uVar9 < *(uint *)(param_1 + 0xc80)) {
    do {
      plVar1 = (long *)(param_1 + (ulong)uVar9 * 0x10);
      uVar4 = *(uint *)(*(long *)(param_1 + 0xc90) + 0x9fe4);
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = uVar9 / uVar4;
      }
      if (uVar9 - uVar8 * uVar4 == *(int *)(*(long *)(param_1 + 0xc90) + 0x9fe8)) {
        plVar10 = (long *)(param_1 + (ulong)uVar9 * 0x10 + 8);
        lVar11 = *plVar10;
        if ((*(byte *)(lVar11 + 0x26) & 2) != 0) {
          if (*(long *)(lVar11 + 0x10) != 0) {
            *(undefined4 *)(lVar11 + 8) = 0;
          }
          *(undefined2 *)(lVar11 + 0x24) = *(undefined2 *)(lVar11 + 0x24);
          *(byte *)(lVar11 + 0x26) = *(byte *)(lVar11 + 0x26) & 0xfd;
          lVar12 = *plVar1;
          lVar11 = *plVar10;
          FUN_100660484(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                        *(float *)(lVar11 + 0x20),*(float *)(lVar11 + 0x20) * 0.5,lVar12 + 0x22d0,
                        *(undefined4 *)(lVar12 + 4),lVar12 + 0x2ed0,lVar11 + 8);
        }
      }
      iVar5 = *(int *)(*(long *)(param_1 + (ulong)uVar9 * 0x10 + 8) + 8);
      piVar3 = (int *)(*plVar1 + 0x9ed4);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = *piVar3 + iVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        uVar9 = *puVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar7) {
          *puVar2 = uVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    } while (uVar9 < *(uint *)(param_1 + 0xc80));
  }
  return;
}




void FUN_1006601c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  
  uVar2 = *(uint *)(param_1 + 0xc80);
  if (uVar2 != 0) {
    uVar4 = 0;
    uVar5 = 0;
    pvVar3 = *(void **)(param_1 + 0xc88);
    plVar6 = (long *)(param_1 + 8);
    do {
      uVar1 = *(uint *)(*plVar6 + 8);
      if (uVar1 != 0) {
        uVar5 = uVar1 + uVar5;
        if (0x3000 < uVar5) {
          return;
        }
        _memmove(pvVar3,*(void **)(*plVar6 + 0x10),(ulong)(uVar1 * 0x18));
        pvVar3 = (void *)((long)pvVar3 + (ulong)uVar1 * 0x18);
        uVar2 = *(uint *)(param_1 + 0xc80);
      }
      uVar4 = uVar4 + 1;
      plVar6 = plVar6 + 2;
    } while (uVar4 < uVar2);
  }
  return;
}




long FUN_100660254(long param_1)

{
  long lVar1;
  
  lVar1 = 8;
  do {
    FUN_1010b73bc(param_1 + lVar1);
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0x68);
  do {
    FUN_1010b67a4(param_1 + lVar1);
    lVar1 = lVar1 + 0x78;
  } while (lVar1 != 0x158);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x180) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined ***)(param_1 + 0x198) = &PTR_FUN_1014a8598;
  *(long *)(param_1 + 0x1a0) = param_1;
  *(byte *)(param_1 + 0x1a8) = *(byte *)(param_1 + 0x1a8) & 0xfc | 2;
  return param_1;
}




void FUN_1006602d8(long param_1,undefined8 param_2)

{
  FUN_1010b7d6c(param_2,*(long *)(param_1 + 8) + 8);
  return;
}




undefined1 * FUN_1006602ec(undefined1 *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x9ee0) = 0;
  *param_1 = 0;
  do {
    FUN_1010b7de4(param_1 + lVar2 + 0x9ef0);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 0x9fe0) = 0x200000000;
  *(undefined4 *)(param_1 + 0x9fe8) = 0;
  do {
    puVar1 = param_1 + lVar2 + 0x9ef0;
    FUN_1010b7eac(puVar1,0x3000);
    FUN_1010b7ebc(puVar1,0,0x48000,6,0);
    FUN_1010b7f64(puVar1,0,0,4,4,0,1);
    FUN_1010b7f64(puVar1,5,0,4,2,0x10,1);
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xf0);
  FUN_1010b7ff8(param_1 + (ulong)*(uint *)(param_1 + 0x9fe0) * 0x50 + 0x9ef0,0x21,4);
  return param_1;
}




void FUN_100660400(long param_1)

{
  long lVar1;
  
  FUN_1010b7ffc(param_1 + 0x9ef0 + (ulong)*(uint *)(param_1 + 0x9fe0) * 0x50,0xff,0xffffffff);
  lVar1 = 0;
  do {
    FUN_1010b7e24(param_1 + 0x9ef0 + lVar1);
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0xf0);
  lVar1 = 0;
  do {
    FUN_1010b7e7c(param_1 + 0x9f90 + lVar1);
    lVar1 = lVar1 + -0x50;
  } while (lVar1 != -0xf0);
  FUN_100661a70(param_1);
  return;
}




void FUN_100660484(float param_1,float param_2,float param_3,float param_4)

{
  code **ppcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long in_x3;
  code **ppcVar6;
  float *pfVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  int iVar12;
  ulong uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_7c80;
  undefined8 uStack_7c78;
  undefined8 local_7c70;
  code *local_7c68 [1024];
  undefined8 local_5c68 [1536];
  float local_2c68 [2816];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  fVar18 = param_3 * param_3;
  param_4 = param_4 * param_4;
  pfVar7 = local_2c68;
  uVar5 = FUN_100660a78();
  if (uVar5 == 0) {
    local_5c68[1] = 0;
    local_5c68[0] = 0;
    local_5c68[2] = 0;
    FUN_100661948(in_x3,6,local_5c68);
    fVar15 = param_1 - param_3;
    fVar16 = param_1 + param_3;
    fVar17 = param_2 - param_3;
    param_3 = param_2 + param_3;
    pfVar7 = *(float **)(in_x3 + 8);
    *pfVar7 = fVar15;
    pfVar7[1] = param_3;
    pfVar7[2] = param_1;
    pfVar7[3] = param_2;
    lVar9 = *(long *)(in_x3 + 8);
    *(float *)(lVar9 + 0x10) = fVar18;
    *(float *)(lVar9 + 0x14) = param_4;
    *(float *)(lVar9 + 0x18) = fVar16;
    *(float *)(lVar9 + 0x1c) = param_3;
    *(float *)(lVar9 + 0x20) = param_1;
    *(float *)(lVar9 + 0x24) = param_2;
    lVar9 = *(long *)(in_x3 + 8);
    *(float *)(lVar9 + 0x28) = fVar18;
    *(float *)(lVar9 + 0x2c) = param_4;
    *(float *)(lVar9 + 0x30) = fVar16;
    *(float *)(lVar9 + 0x34) = fVar17;
    *(float *)(lVar9 + 0x38) = param_1;
    *(float *)(lVar9 + 0x3c) = param_2;
    lVar9 = *(long *)(in_x3 + 8);
    *(float *)(lVar9 + 0x40) = fVar18;
    *(float *)(lVar9 + 0x44) = param_4;
    *(float *)(lVar9 + 0x48) = fVar16;
    *(float *)(lVar9 + 0x4c) = fVar17;
    *(float *)(lVar9 + 0x50) = param_1;
    *(float *)(lVar9 + 0x54) = param_2;
    lVar9 = *(long *)(in_x3 + 8);
    *(float *)(lVar9 + 0x58) = fVar18;
    *(float *)(lVar9 + 0x5c) = param_4;
    *(float *)(lVar9 + 0x60) = fVar15;
    *(float *)(lVar9 + 100) = fVar17;
    *(float *)(lVar9 + 0x68) = param_1;
    *(float *)(lVar9 + 0x6c) = param_2;
    lVar9 = *(long *)(in_x3 + 8);
    *(float *)(lVar9 + 0x70) = fVar18;
    *(float *)(lVar9 + 0x74) = param_4;
    *(float *)(lVar9 + 0x78) = fVar15;
    *(float *)(lVar9 + 0x7c) = param_3;
    *(float *)(lVar9 + 0x80) = param_1;
    *(float *)(lVar9 + 0x84) = param_2;
    lVar9 = *(long *)(in_x3 + 8);
    *(float *)(lVar9 + 0x88) = fVar18;
    *(float *)(lVar9 + 0x8c) = param_4;
  }
  else {
    pfVar14 = pfVar7 + (ulong)uVar5 * 0xb;
    do {
      fVar16 = pfVar7[2];
      fVar17 = pfVar7[3];
      fVar15 = (float)_atan2f(pfVar7[1] - param_2,*pfVar7 - param_1);
      pfVar7[8] = fVar15;
      fVar15 = (float)_atan2f(fVar17 - param_2,fVar16 - param_1);
      pfVar7[9] = fVar15;
      pfVar7[10] = -(pfVar7[5] * param_2) - (pfVar7[6] + param_1 * pfVar7[4]);
      pfVar7 = pfVar7 + 0xb;
    } while (pfVar7 < pfVar14);
    pfVar7 = local_2c68;
    puVar10 = local_5c68;
    do {
      *puVar10 = *(undefined8 *)pfVar7;
      *(float *)(puVar10 + 1) = pfVar7[8];
      *(undefined1 *)((long)puVar10 + 0xc) = *(undefined1 *)(pfVar7 + 7);
      *(undefined1 *)((long)puVar10 + 0xd) = 0;
      puVar10[2] = pfVar7;
      if (*(char *)((long)pfVar7 + 0x1d) == '\0') {
        puVar10 = puVar10 + 3;
      }
      else {
        puVar10[3] = *(undefined8 *)(pfVar7 + 2);
        *(float *)(puVar10 + 4) = pfVar7[9];
        *(undefined2 *)((long)puVar10 + 0x24) = 0x101;
        puVar10[5] = pfVar7;
        puVar10 = puVar10 + 6;
      }
      pfVar7 = pfVar7 + 0xb;
    } while (pfVar7 < pfVar14);
    uVar5 = (int)((ulong)((long)puVar10 - (long)local_5c68) >> 3) * -0x55555555;
    puVar10 = local_5c68 + (ulong)uVar5 * 3;
    local_7c68[0] = FUN_100660d68;
    FUN_100661b6c(local_5c68,puVar10,local_7c68);
    ppcVar6 = local_7c68;
    if (uVar5 != 0) {
      puVar8 = local_5c68;
      do {
        pfVar7 = local_2c68;
        fVar16 = (float)*puVar8 - param_1;
        fVar17 = (float)((ulong)*puVar8 >> 0x20) - param_2;
        fVar15 = -1.0;
        do {
          fVar19 = fVar15;
          if (pfVar7 != (float *)puVar8[2]) {
            fVar20 = pfVar7[8] - *(float *)(puVar8 + 1);
            if (-3.1415927 <= fVar20) {
              if (3.1415927 < fVar20) {
                fVar20 = fVar20 + -6.2831855;
              }
            }
            else {
              fVar20 = fVar20 + 6.2831855;
            }
            fVar21 = pfVar7[9] - *(float *)(puVar8 + 1);
            if (-3.1415927 <= fVar21) {
              if (3.1415927 < fVar21) {
                fVar21 = fVar21 + -6.2831855;
              }
            }
            else {
              fVar21 = fVar21 + 6.2831855;
            }
            if ((0.0 <= fVar20 == fVar21 < 0.0) &&
               (fVar20 = pfVar7[10] /
                         ((float)*(undefined8 *)(pfVar7 + 4) * fVar16 +
                         (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20) * fVar17), 0.0 < fVar20
               )) {
              bVar2 = false;
              bVar3 = true;
              bVar4 = false;
              if (fVar15 <= fVar20) {
                bVar2 = false;
                bVar3 = false;
                bVar4 = true;
                if (!NAN(fVar15)) {
                  bVar2 = fVar15 < 0.0;
                  bVar3 = fVar15 == 0.0;
                  bVar4 = false;
                }
              }
              fVar19 = fVar20;
              if (!bVar3 && bVar2 == bVar4) {
                fVar19 = fVar15;
              }
            }
          }
          pfVar7 = pfVar7 + 0xb;
          fVar15 = fVar19;
        } while (pfVar7 < pfVar14);
        if (fVar19 <= 0.0) {
LAB_100660730:
          *ppcVar6 = (code *)*puVar8;
LAB_100660748:
          lVar9 = 1;
        }
        else {
          if (fVar19 <= 1.0) {
            *ppcVar6 = (code *)CONCAT44(param_2 + fVar17 * fVar19,param_1 + fVar16 * fVar19);
            goto LAB_100660748;
          }
          if (*(char *)((long)puVar8 + 0xc) == '\0') goto LAB_100660730;
          if (*(char *)((long)puVar8 + 0xd) == '\0') {
            *ppcVar6 = (code *)CONCAT44(param_2 + fVar17 * fVar19,param_1 + fVar16 * fVar19);
            ppcVar6[1] = (code *)*puVar8;
          }
          else {
            *ppcVar6 = (code *)*puVar8;
            ppcVar6[1] = (code *)CONCAT44(param_2 + fVar17 * fVar19,param_1 + fVar16 * fVar19);
          }
          lVar9 = 2;
        }
        ppcVar6 = ppcVar6 + lVar9;
        puVar8 = puVar8 + 3;
      } while (puVar8 < puVar10);
    }
    uVar13 = (ulong)((long)ppcVar6 - (long)local_7c68) >> 3;
    iVar12 = (int)uVar13;
    local_7c80 = 0;
    uStack_7c78 = 0;
    local_7c70 = 0;
    FUN_100661948(in_x3,iVar12 * 3,&local_7c80);
    if (iVar12 != 0) {
      puVar10 = *(undefined8 **)(in_x3 + 8);
      ppcVar6 = local_7c68;
      do {
        ppcVar11 = ppcVar6 + 1;
        bVar2 = ppcVar11 < local_7c68 + (uVar13 & 0xffffffff);
        ppcVar1 = ppcVar11;
        if (!bVar2) {
          ppcVar1 = local_7c68;
        }
        *puVar10 = *ppcVar6;
        *(float *)(puVar10 + 1) = param_1;
        *(float *)((long)puVar10 + 0xc) = param_2;
        *(float *)(puVar10 + 2) = fVar18;
        *(float *)((long)puVar10 + 0x14) = param_4;
        puVar10[3] = *ppcVar1;
        *(float *)(puVar10 + 4) = param_1;
        *(float *)((long)puVar10 + 0x24) = param_2;
        *(float *)(puVar10 + 5) = fVar18;
        *(float *)((long)puVar10 + 0x2c) = param_4;
        *(float *)(puVar10 + 6) = param_1;
        *(float *)((long)puVar10 + 0x34) = param_2;
        *(float *)(puVar10 + 7) = param_1;
        *(float *)((long)puVar10 + 0x3c) = param_2;
        *(float *)(puVar10 + 8) = fVar18;
        *(float *)((long)puVar10 + 0x44) = param_4;
        puVar10 = puVar10 + 9;
        ppcVar6 = ppcVar11;
      } while (bVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100660914(void)

{
  return;
}




void FUN_100660918(void)

{
  return;
}




char * FUN_10066091c(char *param_1)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*param_1 != '\0') {
    return (char *)0x0;
  }
  param_1[1] = '\x01';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0x370] = '\0';
  param_1[0x371] = '\0';
  param_1[0x372] = '\0';
  param_1[0x373] = '\0';
  param_1[0x10] = '\0';
  param_1[0x1c0] = '\0';
  pcVar1 = param_1 + 0x380;
  uVar4 = 1;
  uVar3 = 0;
  lVar2 = 200;
  param_1[0x22c0] = '\0';
  param_1[0x22c1] = '\0';
  param_1[0x22c2] = '\0';
  param_1[0x22c3] = '\0';
  do {
    if (uVar3 < 200) {
      *pcVar1 = '\0';
    }
    if (uVar4 < 200) {
      pcVar1[0x28] = '\0';
    }
    uVar3 = uVar3 + 2;
    uVar4 = uVar4 + 2;
    pcVar1 = pcVar1 + 0x50;
    lVar2 = lVar2 + -2;
  } while (lVar2 != 0);
  param_1[0x9ed0] = '\0';
  param_1[0x9ed1] = '\0';
  param_1[0x9ed2] = '\0';
  param_1[0x9ed3] = '\0';
  *param_1 = '\x01';
  *(int *)(param_1 + 0x9ee0) = *(int *)(param_1 + 0x9ee0) + 1;
  return param_1;
}




char * FUN_1006609c8(char *param_1)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = 200;
  pcVar1 = param_1;
  do {
    if (*pcVar1 == '\0') {
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = pcVar1[0x26] & 0xfc;
      *pcVar1 = '\x01';
      *(int *)(param_1 + 8000) = *(int *)(param_1 + 8000) + 1;
      return pcVar1;
    }
    pcVar1 = pcVar1 + 0x28;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return (char *)0x0;
}




undefined1 * FUN_100660a20(char *param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (*param_1 != '\0') {
    if (param_1[0x1b0] != '\0') {
      return (undefined1 *)0x0;
    }
    pcVar2 = param_1 + 0x1b0;
  }
  puVar1 = (undefined1 *)FUN_100660254(pcVar2);
  *puVar1 = 1;
  *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
  return puVar1;
}




void FUN_100660a78(float param_1,float param_2,float param_3,undefined8 *param_4,uint param_5,
                  long param_6,long param_7)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  long lVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_428 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_5 != 0) {
    uVar13 = 0;
    fVar24 = param_1 + param_3;
    fVar25 = param_1 - param_3;
    fVar26 = param_2 + param_3;
    puVar19 = param_4 + (ulong)param_5 * 3;
    param_3 = param_2 - param_3;
    puVar15 = local_428;
    fVar20 = fVar24;
    fVar21 = fVar26;
    fVar23 = fVar25;
    fVar22 = param_3;
    do {
      fVar27 = *(float *)(param_4 + 1);
      puVar14 = puVar15;
      if ((((fVar27 < fVar24) && (fVar30 = *(float *)(param_4 + 2), fVar25 < fVar30)) &&
          (fVar32 = *(float *)((long)param_4 + 0xc), fVar32 < fVar26)) &&
         (fVar33 = *(float *)((long)param_4 + 0x14), param_3 < fVar33)) {
        puVar14 = puVar15 + 2;
        *(undefined8 *)puVar15 = *param_4;
        fVar23 = (float)NEON_fminnm(fVar23,fVar27);
        fVar22 = (float)NEON_fminnm(fVar22,fVar32);
        if (fVar20 <= fVar30) {
          fVar20 = fVar30;
        }
        if (fVar21 <= fVar33) {
          fVar21 = fVar33;
        }
        uVar13 = uVar13 + 1;
      }
      param_4 = param_4 + 3;
      puVar15 = puVar14;
    } while (param_4 < puVar19);
    if (uVar13 != 0) {
      uVar11 = 0;
      puVar15 = local_428;
      do {
        uVar2 = puVar15[1];
        if (uVar2 + uVar11 < 0x101) {
          puVar16 = (undefined8 *)(param_7 + (ulong)uVar11 * 0x2c);
          puVar19 = puVar16;
          if (uVar2 != 0) {
            pfVar17 = (float *)(param_6 + (ulong)*puVar15 * 0x1c);
            pfVar10 = pfVar17 + (ulong)(uVar2 - 1) * 7;
            lVar18 = param_6 + (ulong)*puVar15 * 0x1c;
            fVar27 = (param_2 - *(float *)(lVar18 + 4)) * *(float *)(lVar18 + 0x14) +
                     *(float *)(lVar18 + 0x10) * (param_1 - *pfVar17);
            pfVar12 = pfVar17;
            bVar9 = 0.0 < (param_2 - pfVar10[1]) * pfVar10[5] + pfVar10[4] * (param_1 - *pfVar10);
            do {
              bVar3 = 0.0 < fVar27;
              pfVar10 = pfVar12 + 7;
              pfVar1 = pfVar10;
              if (pfVar17 + (ulong)uVar2 * 7 <= pfVar10) {
                pfVar1 = pfVar17;
              }
              fVar27 = pfVar1[4] * (param_1 - *pfVar1) + (param_2 - pfVar1[1]) * pfVar1[5];
              if (bVar3) {
                fVar30 = *pfVar12;
                fVar33 = pfVar12[1];
                fVar34 = (float)NEON_fminnm(fVar30,*pfVar1);
                fVar32 = (float)NEON_fminnm(fVar33,pfVar1[1]);
                bVar4 = false;
                bVar7 = false;
                if (fVar34 < fVar24) {
                  bVar4 = false;
                  bVar7 = true;
                  if (!NAN(fVar25) && !NAN(fVar30)) {
                    bVar4 = fVar25 < fVar30;
                    bVar7 = false;
                  }
                }
                bVar5 = false;
                bVar6 = true;
                bVar8 = false;
                if (bVar4 != bVar7) {
                  bVar5 = false;
                  bVar6 = false;
                  bVar8 = true;
                  if (!NAN(fVar26) && !NAN(fVar32)) {
                    bVar5 = fVar26 < fVar32;
                    bVar6 = fVar26 == fVar32;
                    bVar8 = false;
                  }
                }
                bVar4 = false;
                bVar7 = false;
                if (!bVar6 && bVar5 == bVar8) {
                  bVar4 = false;
                  bVar7 = true;
                  if (!NAN(param_3) && !NAN(fVar33)) {
                    bVar4 = param_3 < fVar33;
                    bVar7 = false;
                  }
                }
                if (bVar4 != bVar7) {
                  uVar29 = *(undefined8 *)(pfVar12 + 2);
                  uVar28 = *(undefined8 *)pfVar12;
                  uVar31 = *(undefined8 *)(pfVar12 + 3);
                  *(undefined8 *)((long)puVar19 + 0x14) = *(undefined8 *)(pfVar12 + 5);
                  *(undefined8 *)((long)puVar19 + 0xc) = uVar31;
                  puVar19[1] = uVar29;
                  *puVar19 = uVar28;
                  *(byte *)((long)puVar19 + 0x1c) = ~bVar9 & 1;
                  *(bool *)((long)puVar19 + 0x1d) = fVar27 <= 0.0;
                  puVar19 = (undefined8 *)((long)puVar19 + 0x2c);
                }
              }
              pfVar12 = pfVar10;
              bVar9 = bVar3;
            } while (pfVar10 < pfVar17 + (ulong)uVar2 * 7);
          }
          uVar11 = uVar11 + (int)((ulong)((long)puVar19 - (long)puVar16) >> 2) * -0x45d1745d;
        }
        puVar15 = puVar15 + 2;
      } while (puVar15 < local_428 + (ulong)uVar13 * 2);
      uVar13 = 0;
      if ((uVar11 != 0) && (uVar11 + 4 < 0x101)) {
        pfVar12 = (float *)(param_7 + (ulong)uVar11 * 0x2c);
        *pfVar12 = fVar23;
        pfVar12[1] = fVar21;
        pfVar12[2] = fVar20;
        pfVar12[3] = fVar21;
        pfVar12[4] = 0.0;
        pfVar12[5] = -1.0;
        pfVar12[6] = fVar21;
        *(undefined2 *)(pfVar12 + 7) = 0;
        pfVar12[0xb] = fVar20;
        pfVar12[0xc] = fVar22;
        pfVar12[0xd] = fVar23;
        pfVar12[0xe] = fVar22;
        pfVar12[0xf] = 0.0;
        pfVar12[0x10] = 1.0;
        pfVar12[0x11] = -fVar22;
        *(undefined2 *)(pfVar12 + 0x12) = 0;
        pfVar12[0x16] = fVar23;
        pfVar12[0x17] = fVar22;
        pfVar12[0x18] = fVar23;
        pfVar12[0x19] = fVar21;
        pfVar12[0x1a] = 1.0;
        pfVar12[0x1b] = 0.0;
        pfVar12[0x1c] = -fVar23;
        *(undefined2 *)(pfVar12 + 0x1d) = 0;
        pfVar12[0x21] = fVar20;
        pfVar12[0x22] = fVar21;
        pfVar12[0x23] = fVar20;
        pfVar12[0x24] = fVar22;
        pfVar12[0x25] = -1.0;
        pfVar12[0x26] = 0.0;
        pfVar12[0x27] = fVar20;
        *(undefined2 *)(pfVar12 + 0x28) = 0;
        uVar13 = uVar11 + 4;
      }
      goto LAB_100660d3c;
    }
  }
  uVar13 = 0;
LAB_100660d3c:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar13);
  }
  return;
}




bool FUN_100660d68(long param_1,long param_2)

{
  return *(float *)(param_1 + 8) < *(float *)(param_2 + 8);
}




void FUN_100660d7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 local_50;
  undefined4 local_48;
  float local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_38 = 0x3f80000000000000;
  local_40 = 0;
  puVar1 = (undefined8 *)0x0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    puVar1 = &local_40;
  }
  FUN_1010b6884(0xbf800000,*(undefined8 *)(param_1 + 0x18),puVar1,0xffffffff);
  FUN_1010b7d6c(0,*(undefined8 *)(param_1 + 0x20));
  FUN_1010b4bac(0,0,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68),
                *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c));
  FUN_1010b4a20(7);
  FUN_1010b4b68(0);
  FUN_1010b4a58(0);
  FUN_1010b4a80(0,0);
  FUN_1010b4aa0(2,3,2,3);
  local_50 = NEON_fmov(0x3f800000,4);
  local_48 = 0x3f800000;
  local_44 = 1.0 - *(float *)(param_1 + 0x28);
  FUN_1010b5318(&local_50);
  FUN_1010b6b58(*(undefined8 *)(param_1 + 0x18));
  FUN_1010b6884(0xbf800000,0,0,0xffffffff);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100660e98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1010b7ffc(*(undefined8 *)(param_1 + 0x20),0xff,0xffffffff);
  FUN_1010b7ff8(*(undefined8 *)(param_1 + 0x28),0xff,4);
  puVar1 = &DAT_1011805d4;
  if (*(char *)(param_1 + 0x78) != '\0') {
    puVar1 = &DAT_1011805e4;
  }
  FUN_1010b6884(0xbf800000,*(undefined8 *)(param_1 + 0x18),puVar1,0xffffffff);
  FUN_1010b4bac(0,0,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x68),
                *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c));
  FUN_1010b4a20(7);
  FUN_1010b4b68(0);
  FUN_1010b4a58(0);
  uVar2 = FUN_1010b555c(1);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 4;
    uVar3 = 4;
  }
  FUN_1010b4a80(uVar2,uVar3);
  FUN_1010b4aa0(1,1,1,1);
  FUN_1010b53c4(0,&DAT_1013cd78c);
  FUN_1010b53c4(1,&DAT_1013cd78c);
  FUN_1010b53c4(2,param_1 + 0x30);
  FUN_1010b3fdc(7);
  FUN_1010b519c(3,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x70),
                *(undefined4 *)(param_1 + 0x74),0xffff,0);
  FUN_1010b6b58(*(undefined8 *)(param_1 + 0x18));
  FUN_1010b6884(0xbf800000,0,0,0xffffffff);
  return;
}




void FUN_100660fc4(void)

{
  return;
}




undefined8 * FUN_100660fc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a8578;
  FUN_1006610b4();
  return param_1;
}




void FUN_100660ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  operator_new(0x30);
  uVar1 = FUN_1010b73bc();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_1010b7478(uVar1,4);
  FUN_1010b75c4(*(undefined8 *)(param_1 + 0x10),0,param_2,param_3,1,param_4,0);
  FUN_1010b7a3c(*(undefined8 *)(param_1 + 0x10),1,1,0);
  FUN_1010b7a18(*(undefined8 *)(param_1 + 0x10),0,0,0);
  operator_new(0x78);
  uVar1 = FUN_1010b67a4();
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_1010b67c0(uVar1,param_2,param_3);
  FUN_1010b685c(*(undefined8 *)(param_1 + 8),0,*(undefined8 *)(param_1 + 0x10),0,0);
  return;
}




void FUN_1006610b4(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1010b6810();
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1010b73f4();
    if (*(long *)(param_1 + 0x10) != 0) {
      pvVar1 = (void *)FUN_1010b7434();
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_10066110c(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  return;
}




undefined8 * FUN_100661118(undefined8 *param_1)

{
  FUN_1006610b4();
  *param_1 = &PTR_FUN_1014a8578;
  FUN_1006610b4(param_1);
  return param_1;
}




void FUN_100661150(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return;
  }
  uVar3 = FUN_1010b79d0(param_2);
  uVar4 = FUN_1010b79f4(param_2);
  if (*(long *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar1 = 0;
      iVar2 = 0;
      goto LAB_1006611c4;
    }
    iVar1 = FUN_1010b79d0();
    if (*(long *)(param_1 + 8) != 0) {
      iVar2 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar2 = FUN_1010b79f4();
      }
      goto LAB_1006611c4;
    }
  }
  iVar2 = 0;
LAB_1006611c4:
  if ((iVar1 == (int)uVar3) && (iVar2 == (int)uVar4)) {
    return;
  }
  FUN_1006610b4(param_1);
  FUN_100660ff8(param_1,uVar3,uVar4,1);
  return;
}




void FUN_10066120c(undefined8 param_1,long param_2,uint *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined **local_f8 [3];
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  iVar1 = FUN_1010b6818(param_5,param_4);
  if (iVar1 != 0) {
    local_e0 = *(long *)(param_2 + 8);
    local_f8[0] = &PTR_FUN_1014a8518;
    uStack_d8 = 0;
    local_d0 = *(undefined8 *)(local_e0 + 0x68);
    local_b8 = 0;
    uStack_b0 = 0;
    local_58 = 0;
    uStack_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_c0 = 0;
    local_60 = 0x7010103bc;
    local_68 = 1;
    local_c8 = param_4;
    FUN_1010b36cc(param_1,local_f8,0);
    param_4 = *(undefined8 *)(param_2 + 0x10);
  }
  local_f8[0] = &PTR_FUN_1014a8518;
  uStack_d8 = 0;
  local_d0 = *(undefined8 *)(param_5 + 0x68);
  local_b8 = 0;
  uStack_b0 = 0;
  local_58 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_c0 = 0;
  local_60 = 0x7010103bc;
  local_68 = 0x13;
  local_a8 = (ulong)*param_3;
  local_e0 = param_5;
  local_c8 = param_4;
  iVar1 = FUN_1010b872c();
  if (iVar1 == 1) {
    local_58 = 1;
  }
  FUN_1010b36cc(param_1,local_f8,0);
  return;
}




void FUN_100661338(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1014a8578;
  return;
}




long FUN_10066134c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_1006610b4(param_1 + lVar1);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar1 = 0x48;
  do {
    *(undefined ***)(param_1 + lVar1) = &PTR_FUN_1014a8578;
    FUN_1006610b4();
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return param_1;
}




void FUN_1006613c8(long param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  FUN_1010b6884(0xbf800000,*(undefined8 *)(param_1 + 0x18),0,0xffffffff);
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x30 + lVar1 * 8) != 0) {
      FUN_1010b7d6c(lVar1);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  DAT_101dc0d20 = param_1 + 0x50;
  DAT_101dc0d28 = 1;
  FUN_1010b4bac(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  FUN_1010b4bd8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  FUN_1010b3fdc(*(undefined4 *)(param_1 + 0x90));
  FUN_1010b4b00(*(undefined8 *)(param_1 + 0x98));
  local_60 = 0;
  local_3c = 0x80000000;
  local_40 = 0x80000000;
  local_5c = 0x3f800000;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    local_5c = 0xbf800000;
    local_3c = 0;
  }
  uStack_68 = 0;
  local_70 = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xbf800000;
  local_38 = 0x3f80000080000000;
  FUN_1010b53c4(0,&DAT_1013cd78c);
  FUN_1010b53c4(1,&DAT_1013cd78c);
  FUN_1010b53c4(2,&local_70);
  FUN_1010b519c(3,DAT_101dc1c68,0,6,0xffff,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1010b6b58();
    FUN_1010b6884(0xbf800000,0,0,0xffffffff);
  }
  return;
}




void FUN_100661540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a8578;
  FUN_1006610b4();
  operator_delete(param_1);
  return;
}




long FUN_100661570(long param_1)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_FUN_1014a8578;
  FUN_1006610b4();
  *(undefined ***)(param_1 + 0xa8) = &PTR_FUN_1014a8578;
  FUN_1006610b4();
  *(undefined ***)(param_1 + 0x90) = &PTR_FUN_1014a8578;
  FUN_1006610b4();
  FUN_10066134c(param_1 + 0x18);
  return param_1;
}




void FUN_1006615c0(void)

{
  return;
}




void FUN_1006615c8(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_2[10];
  piVar9 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x87)) {
    pvVar7 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x87;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR____cxa_pure_virtual_10182e8c0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  *puVar4 = &PTR_FUN_1014a84b8;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  puVar4[8] = *(undefined8 *)(param_1 + 0x40);
  puVar4[7] = uVar13;
  puVar4[6] = uVar12;
  puVar4[5] = uVar11;
  puVar4[4] = uVar10;
  puVar4[3] = uVar6;
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  *(undefined1 *)(puVar4 + 0xf) = *(undefined1 *)(param_1 + 0x78);
  puVar4[0xe] = uVar14;
  puVar4[0xd] = uVar13;
  puVar4[0xc] = uVar12;
  puVar4[0xb] = uVar11;
  puVar4[10] = uVar10;
  puVar4[9] = uVar6;
  return;
}




void FUN_1006616fc(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  undefined8 uVar10;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_2[10];
  piVar9 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x37)) {
    pvVar7 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x37;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR____cxa_pure_virtual_10182e8c0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  *puVar4 = &PTR_FUN_1014a8458;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)((long)puVar4 + 0x25) = *(undefined8 *)(param_1 + 0x25);
  puVar4[4] = uVar10;
  puVar4[3] = uVar6;
  return;
}




void FUN_100661808(long param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_2[10];
  piVar9 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0xaf)) {
    pvVar7 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0xaf;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar4 = &PTR____cxa_pure_virtual_10182e8c0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  *puVar4 = &PTR_FUN_1014a8518;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = uVar6;
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  puVar4[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar4[0xb] = uVar15;
  puVar4[10] = uVar14;
  puVar4[9] = uVar13;
  puVar4[8] = uVar12;
  puVar4[7] = uVar11;
  puVar4[6] = uVar10;
  puVar4[5] = uVar6;
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  uVar15 = *(undefined8 *)(param_1 + 0x91);
  *(undefined8 *)((long)puVar4 + 0x99) = *(undefined8 *)(param_1 + 0x99);
  *(undefined8 *)((long)puVar4 + 0x91) = uVar15;
  puVar4[0x12] = uVar14;
  puVar4[0x11] = uVar13;
  puVar4[0x10] = uVar12;
  puVar4[0xf] = uVar11;
  puVar4[0xe] = uVar10;
  puVar4[0xd] = uVar6;
  return;
}




void FUN_100661948(uint *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = (uint)param_2;
  if (uVar3 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar3) {
      FUN_1006619e4(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < uVar3) {
      lVar4 = (ulong)uVar2 * 0x18;
      lVar5 = (param_2 & 0xffffffff) - (ulong)uVar2;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar4);
        uVar7 = param_3[1];
        uVar6 = *param_3;
        puVar1[2] = param_3[2];
        puVar1[1] = uVar7;
        *puVar1 = uVar6;
        lVar4 = lVar4 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    *param_1 = uVar3;
  }
  return;
}




void FUN_1006619e4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar5 = puVar5 + 3;
        lVar3 = lVar3 + -0x18;
        puVar4 = puVar4 + 3;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




char * FUN_100661a70(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_100661aa8(param_1 + 0x380);
    FUN_100661afc(param_1 + 0x10);
  }
  return param_1;
}




long FUN_100661aa8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  lVar2 = 200;
  do {
    if ((*(char *)(puVar1 + -2) != '\0') && ((void *)*puVar1 != (void *)0x0)) {
      operator_delete__((void *)*puVar1);
      puVar1[-1] = 0;
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}




long FUN_100661afc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = 0;
  lVar2 = param_1;
  do {
    if (*(char *)(param_1 + lVar1 * 0x1b0) != '\0') {
      lVar3 = 0x38;
      do {
        FUN_1010b7434(lVar2 + lVar3);
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != -0x28);
    }
    lVar1 = lVar1 + 1;
    lVar2 = lVar2 + 0x1b0;
  } while (lVar1 != 2);
  return param_1;
}




void FUN_100661b6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
LAB_100661ba4:
  puVar6 = param_2 + -3;
  puVar7 = param_1;
LAB_100661bac:
  param_1 = puVar7;
  uVar4 = (long)param_2 - (long)param_1;
  switch(((long)uVar4 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_100661f20_caseD_0;
  case 2:
    iVar2 = (*(code *)*param_3)(puVar6,param_1);
    if (iVar2 == 0) {
      return;
    }
    uVar15 = param_1[1];
    uVar13 = *param_1;
    uVar5 = param_1[2];
    uVar16 = param_2[-2];
    uVar14 = *puVar6;
    param_1[2] = param_2[-1];
    param_1[1] = uVar16;
    *param_1 = uVar14;
    param_2[-1] = uVar5;
    param_2[-2] = uVar15;
    *puVar6 = uVar13;
    return;
  case 3:
    FUN_100662054(param_1,param_1 + 3,puVar6,param_3);
    return;
  case 4:
    FUN_1006621a0(param_1,param_1 + 3,param_1 + 6,puVar6,param_3);
    return;
  case 5:
    FUN_1006622a4(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar6,param_3);
    return;
  default:
    if ((long)uVar4 < 0x2e8) {
      FUN_1006623f0(param_1,param_2,param_3);
      return;
    }
    if ((long)uVar4 < 0x5da9) {
      puVar7 = param_1 + (ulong)(((uint)uVar4 & 0xffff) / 0x30) * 3;
      iVar2 = FUN_100662054(param_1,puVar7,puVar6,param_3);
    }
    else {
      puVar7 = param_1 + (uVar4 / 0x30) * 3;
      lVar1 = (uVar4 / 0x60) * 2 + uVar4 / 0x60;
      iVar2 = FUN_1006622a4(param_1,param_1 + lVar1,puVar7,puVar7 + lVar1,puVar6,param_3);
    }
    uVar4 = (*(code *)*param_3)(param_1,puVar7);
    puVar8 = puVar6;
    if ((uVar4 & 1) == 0) break;
    goto LAB_100661cac;
  }
  while (puVar10 = puVar8, puVar8 = puVar10 + -3, puVar8 != param_1) {
    iVar3 = (*(code *)*param_3)(puVar8,puVar7);
    if (iVar3 != 0) goto code_r0x000100661c78;
  }
  puVar8 = param_1 + 3;
  uVar4 = (*(code *)*param_3)(param_1,puVar6);
  puVar7 = puVar8;
  if ((uVar4 & 1) == 0) {
    while( true ) {
      if (puVar7 == puVar6) {
        return;
      }
      iVar2 = (*(code *)*param_3)(param_1,puVar7);
      if (iVar2 != 0) break;
      puVar7 = puVar7 + 3;
    }
    uVar15 = puVar7[1];
    uVar13 = *puVar7;
    uVar5 = puVar7[2];
    uVar16 = param_2[-2];
    uVar14 = *puVar6;
    puVar7[2] = param_2[-1];
    puVar8 = puVar7 + 3;
    puVar7[1] = uVar16;
    *puVar7 = uVar14;
    param_2[-1] = uVar5;
    param_2[-2] = uVar15;
    *puVar6 = uVar13;
  }
  puVar10 = puVar6;
  if (puVar8 == puVar6) {
    return;
  }
  while( true ) {
    puVar7 = puVar8 + -3;
    do {
      puVar9 = puVar7;
      puVar7 = puVar9 + 3;
      iVar2 = (*(code *)*param_3)(param_1,puVar7);
    } while (iVar2 == 0);
    puVar8 = puVar9 + 6;
    do {
      puVar11 = puVar10;
      puVar10 = puVar11 + -3;
      uVar4 = (*(code *)*param_3)(param_1,puVar10);
    } while ((uVar4 & 1) != 0);
    if (puVar10 <= puVar7) break;
    uVar15 = puVar9[4];
    uVar13 = *puVar7;
    uVar5 = puVar9[5];
    uVar16 = puVar11[-2];
    uVar14 = *puVar10;
    puVar9[5] = puVar11[-1];
    puVar9[4] = uVar16;
    *puVar7 = uVar14;
    puVar11[-1] = uVar5;
    puVar11[-2] = uVar15;
    *puVar10 = uVar13;
  }
  goto LAB_100661bac;
code_r0x000100661c78:
  uVar15 = param_1[1];
  uVar13 = *param_1;
  uVar5 = param_1[2];
  uVar16 = puVar10[-2];
  uVar14 = *puVar8;
  param_1[2] = puVar10[-1];
  param_1[1] = uVar16;
  *param_1 = uVar14;
  puVar10[-1] = uVar5;
  puVar10[-2] = uVar15;
  *puVar8 = uVar13;
  iVar2 = iVar2 + 1;
LAB_100661cac:
  puVar10 = param_1 + 3;
  puVar11 = puVar7;
  puVar9 = puVar10;
  if (puVar10 < puVar8) {
    while( true ) {
      puVar7 = puVar11;
      puVar10 = puVar9 + -3;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + 3;
        uVar4 = (*(code *)*param_3)(puVar10,puVar7);
      } while ((uVar4 & 1) != 0);
      puVar9 = puVar11 + 6;
      do {
        puVar12 = puVar8;
        puVar8 = puVar12 + -3;
        iVar3 = (*(code *)*param_3)(puVar8,puVar7);
      } while (iVar3 == 0);
      if (puVar8 < puVar10) break;
      uVar15 = puVar11[4];
      uVar13 = *puVar10;
      uVar5 = puVar11[5];
      uVar16 = puVar12[-2];
      uVar14 = *puVar8;
      puVar11[5] = puVar12[-1];
      puVar11[4] = uVar16;
      *puVar10 = uVar14;
      puVar12[-1] = uVar5;
      puVar12[-2] = uVar15;
      *puVar8 = uVar13;
      iVar2 = iVar2 + 1;
      puVar11 = puVar8;
      if (puVar10 != puVar7) {
        puVar11 = puVar7;
      }
    }
  }
  if ((puVar10 != puVar7) && (iVar3 = (*(code *)*param_3)(puVar7,puVar10), iVar3 != 0)) {
    uVar15 = puVar10[1];
    uVar13 = *puVar10;
    uVar5 = puVar10[2];
    uVar16 = puVar7[1];
    uVar14 = *puVar7;
    puVar10[2] = puVar7[2];
    puVar10[1] = uVar16;
    *puVar10 = uVar14;
    puVar7[2] = uVar5;
    puVar7[1] = uVar15;
    *puVar7 = uVar13;
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 0) {
    uVar4 = FUN_1006624e0(param_1,puVar10,param_3);
    iVar2 = FUN_1006624e0(puVar10 + 3,param_2,param_3);
    if (iVar2 != 0) goto LAB_100661f00;
    puVar7 = puVar10 + 3;
    if ((uVar4 & 1) != 0) goto LAB_100661bac;
  }
  if (((long)param_2 - (long)puVar10 >> 3) * -0x5555555555555555 <=
      ((long)puVar10 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_100661b6c(puVar10 + 3,param_2,param_3);
    param_2 = puVar10;
    goto LAB_100661ba4;
  }
  FUN_100661b6c(param_1,puVar10,param_3);
  puVar7 = puVar10 + 3;
  goto LAB_100661bac;
LAB_100661f00:
  param_2 = puVar10;
  if ((uVar4 & 1) != 0) {
switchD_100661f20_caseD_0:
    return;
  }
  goto LAB_100661ba4;
}




undefined8
FUN_100662054(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = (*(code *)*param_4)(param_2,param_1);
  uVar3 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = param_2[2];
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar4 = param_3[2];
    uVar7 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar7;
    param_2[2] = uVar4;
    param_3[1] = uVar6;
    *param_3 = uVar5;
    param_3[2] = uVar3;
    iVar1 = (*(code *)*param_4)(param_2,param_1);
    if (iVar1 != 0) {
      uVar3 = param_1[2];
      uVar6 = param_1[1];
      uVar5 = *param_1;
      uVar4 = param_2[2];
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
      param_2[1] = uVar6;
      *param_2 = uVar5;
      param_2[2] = uVar3;
      return 2;
    }
  }
  else if ((int)uVar3 == 0) {
    uVar3 = param_1[2];
    uVar6 = param_1[1];
    uVar5 = *param_1;
    uVar4 = param_2[2];
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    param_1[2] = uVar4;
    param_2[1] = uVar6;
    *param_2 = uVar5;
    param_2[2] = uVar3;
    iVar1 = (*(code *)*param_4)(param_3,param_2);
    if (iVar1 != 0) {
      uVar3 = param_2[2];
      uVar6 = param_2[1];
      uVar5 = *param_2;
      uVar4 = param_3[2];
      uVar7 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
      param_3[1] = uVar6;
      *param_3 = uVar5;
      param_3[2] = uVar3;
      return 2;
    }
  }
  else {
    uVar3 = param_1[2];
    uVar6 = param_1[1];
    uVar5 = *param_1;
    uVar4 = param_3[2];
    uVar7 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar7;
    param_1[2] = uVar4;
    param_3[1] = uVar6;
    *param_3 = uVar5;
    param_3[2] = uVar3;
  }
  return 1;
}




ulong FUN_1006621a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = FUN_100662054();
  iVar1 = (*(code *)*param_5)(param_4,param_3);
  if (iVar1 != 0) {
    uVar3 = param_3[2];
    uVar7 = param_3[1];
    uVar6 = *param_3;
    uVar4 = param_4[2];
    uVar8 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar8;
    param_3[2] = uVar4;
    param_4[1] = uVar7;
    *param_4 = uVar6;
    param_4[2] = uVar3;
    iVar1 = (*(code *)*param_5)(param_3,param_2);
    iVar5 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar5 + 1);
    }
    else {
      uVar3 = param_2[2];
      uVar7 = param_2[1];
      uVar6 = *param_2;
      uVar4 = param_3[2];
      uVar8 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar8;
      param_2[2] = uVar4;
      param_3[1] = uVar7;
      *param_3 = uVar6;
      param_3[2] = uVar3;
      iVar1 = (*(code *)*param_5)(param_2,param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar5 + 2);
      }
      else {
        uVar3 = param_1[2];
        uVar7 = param_1[1];
        uVar6 = *param_1;
        uVar4 = param_2[2];
        uVar8 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar8;
        param_1[2] = uVar4;
        param_2[1] = uVar7;
        *param_2 = uVar6;
        param_2[2] = uVar3;
        uVar2 = (ulong)(iVar5 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_1006622a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = FUN_1006621a0();
  iVar1 = (*(code *)*param_6)(param_5,param_4);
  if (iVar1 != 0) {
    uVar3 = param_4[2];
    uVar7 = param_4[1];
    uVar6 = *param_4;
    uVar4 = param_5[2];
    uVar8 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = uVar8;
    param_4[2] = uVar4;
    param_5[1] = uVar7;
    *param_5 = uVar6;
    param_5[2] = uVar3;
    iVar1 = (*(code *)*param_6)(param_4,param_3);
    iVar5 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar5 + 1);
    }
    else {
      uVar3 = param_3[2];
      uVar7 = param_3[1];
      uVar6 = *param_3;
      uVar4 = param_4[2];
      uVar8 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar8;
      param_3[2] = uVar4;
      param_4[1] = uVar7;
      *param_4 = uVar6;
      param_4[2] = uVar3;
      iVar1 = (*(code *)*param_6)(param_3,param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar5 + 2);
      }
      else {
        uVar3 = param_2[2];
        uVar7 = param_2[1];
        uVar6 = *param_2;
        uVar4 = param_3[2];
        uVar8 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar8;
        param_2[2] = uVar4;
        param_3[1] = uVar7;
        *param_3 = uVar6;
        param_3[2] = uVar3;
        iVar1 = (*(code *)*param_6)(param_2,param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar5 + 3);
        }
        else {
          uVar3 = param_1[2];
          uVar7 = param_1[1];
          uVar6 = *param_1;
          uVar4 = param_2[2];
          uVar8 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar8;
          param_1[2] = uVar4;
          param_2[1] = uVar7;
          *param_2 = uVar6;
          param_2[2] = uVar3;
          uVar2 = (ulong)(iVar5 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_1006623f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  FUN_100662054(param_1,param_1 + 3,param_1 + 6,param_3);
  if (param_1 + 9 != param_2) {
    lVar7 = 0;
    puVar5 = param_1 + 9;
    puVar6 = param_1 + 6;
    do {
      puVar4 = puVar5;
      iVar2 = (*(code *)*param_3)(puVar4,puVar6);
      if (iVar2 != 0) {
        uStack_58 = puVar4[1];
        local_60 = *puVar4;
        local_50 = puVar4[2];
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x38);
          *(undefined8 *)((long)param_1 + lVar8 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x30);
          *(undefined8 *)((long)param_1 + lVar8 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x40);
          puVar5 = param_1;
          if (lVar8 == -0x30) goto LAB_1006624a8;
          uVar3 = (*(code *)*param_3)(&local_60,(long)param_1 + lVar8 + 0x18);
          lVar1 = lVar8 + -0x18;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar8 + 0x30);
LAB_1006624a8:
        puVar5[1] = uStack_58;
        *puVar5 = local_60;
        puVar5[2] = local_50;
      }
      lVar7 = lVar7 + 0x18;
      puVar5 = puVar4 + 3;
      puVar6 = puVar4;
    } while (puVar4 + 3 != param_2);
  }
  return;
}




bool FUN_1006624e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar7 = param_2 + -3;
    iVar2 = (*(code *)*param_3)(puVar7,param_1);
    if (iVar2 != 0) {
      uVar5 = param_1[2];
      uVar13 = param_1[1];
      uVar12 = *param_1;
      uVar8 = param_2[-1];
      uVar14 = *puVar7;
      param_1[1] = param_2[-2];
      *param_1 = uVar14;
      param_1[2] = uVar8;
      param_2[-2] = uVar13;
      *puVar7 = uVar12;
      param_2[-1] = uVar5;
    }
    break;
  case 3:
    FUN_100662054(param_1,param_1 + 3,param_2 + -3,param_3);
    break;
  case 4:
    FUN_1006621a0(param_1,param_1 + 3,param_1 + 6,param_2 + -3,param_3);
    break;
  case 5:
    FUN_1006622a4(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3,param_3);
    break;
  default:
    FUN_100662054(param_1,param_1 + 3,param_1 + 6,param_3);
    if (param_1 + 9 != param_2) {
      lVar10 = 0;
      iVar2 = 0;
      puVar7 = param_1 + 9;
      puVar9 = param_1 + 6;
      do {
        puVar6 = puVar7;
        iVar3 = (*(code *)*param_3)(puVar6,puVar9);
        if (iVar3 != 0) {
          uStack_88 = puVar6[1];
          local_90 = *puVar6;
          local_80 = puVar6[2];
          lVar1 = lVar10;
          do {
            lVar11 = lVar1;
            *(undefined8 *)((long)param_1 + lVar11 + 0x50) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x38);
            *(undefined8 *)((long)param_1 + lVar11 + 0x48) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x30);
            *(undefined8 *)((long)param_1 + lVar11 + 0x58) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x40);
            puVar7 = param_1;
            if (lVar11 == -0x30) goto LAB_100662618;
            uVar4 = (*(code *)*param_3)(&local_90,(long)param_1 + lVar11 + 0x18);
            lVar1 = lVar11 + -0x18;
          } while ((uVar4 & 1) != 0);
          puVar7 = (undefined8 *)((long)param_1 + lVar11 + 0x30);
LAB_100662618:
          puVar7[1] = uStack_88;
          *puVar7 = local_90;
          puVar7[2] = local_80;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return puVar6 + 3 == param_2;
          }
        }
        lVar10 = lVar10 + 0x18;
        puVar7 = puVar6 + 3;
        puVar9 = puVar6;
      } while (puVar6 + 3 != param_2);
    }
  }
  return true;
}




void FUN_1006626c8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  thunk_FUN_1004e4dcc(&DAT_101dbd600);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101dbd600,0x100000000);
  DAT_101dbe3d8 = 3;
  DAT_101dbe3e4 = 0;
  DAT_101dbe3dc = 0;
  DAT_101dbe3ec = 0;
  puVar1 = &DAT_101dbe3f0;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1 + 3;
    *puVar1 = &PTR_FUN_1014a8578;
    puVar1 = puVar2;
  } while (puVar2 != &DAT_101dbe450);
  DAT_101dbe450 = 0xffffffffffffffff;
  DAT_101dbe458 = 0xffffffff;
  DAT_101dbe460 = 0;
  DAT_101dbe468 = &PTR_FUN_1014a8578;
  DAT_101dbe470 = 0;
  DAT_101dbe478 = 0;
  DAT_101dbe490 = 0;
  DAT_101dbe498 = &PTR_FUN_1014a8578;
  DAT_101dbe480 = &PTR_FUN_1014a8578;
  DAT_101dbe488 = 0;
  DAT_101dbe4a0 = 0;
  DAT_101dbe4a8 = 0;
  ___cxa_atexit(FUN_100661570,&DAT_101dbe3d8,0x100000000);
  return;
}




int * FUN_10066277c(int *param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *local_38;
  
  piVar3 = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  iVar5 = 1;
  FUN_100664060(piVar3,1);
  FUN_100664060(param_1,*param_1 + 1);
  local_38 = operator_new(0xe08);
  lVar2 = 0;
  local_38[0x381] = 0;
  do {
    *(int *)((long)local_38 + lVar2) = iVar5;
    lVar2 = lVar2 + 0x38;
    iVar5 = iVar5 + 1;
  } while (lVar2 != 0xdc8);
  local_38[0x380] = 0;
  FUN_1006640dc(piVar3,&local_38);
  FUN_1006640dc(param_1,&local_38);
  piVar4 = param_1 + 10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  piVar6 = param_1 + 0xe;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_10066415c(piVar6,1);
  FUN_10066415c(piVar4,*piVar4 + 1);
  local_38 = operator_new(0x1208);
  local_38[0x481] = 0;
  lVar2 = -0x3f;
  piVar3 = local_38;
  do {
    *piVar3 = (int)lVar2 + 0x40;
    bVar1 = lVar2 != -1;
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 0x12;
  } while (bVar1);
  local_38[0x480] = 0;
  FUN_1006641d8(piVar6,&local_38);
  FUN_1006641d8(piVar4,&local_38);
  piVar3 = param_1 + 0x14;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar4 = param_1 + 0x18;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  iVar5 = 1;
  FUN_100664258(piVar4,1);
  FUN_100664258(piVar3,*piVar3 + 1);
  local_38 = operator_new(0xc08);
  lVar2 = 0;
  local_38[0x301] = 0;
  do {
    *(int *)((long)local_38 + lVar2) = iVar5;
    lVar2 = lVar2 + 0x30;
    iVar5 = iVar5 + 1;
  } while (lVar2 != 0xbd0);
  local_38[0x300] = 0;
  FUN_1006642d4(piVar4,&local_38);
  FUN_1006642d4(piVar3,&local_38);
  return param_1;
}




uint * FUN_100662918(uint *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  puVar3 = param_1 + 0x14;
  uVar2 = *puVar3;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 0x16) + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x16);
  if (pvVar1 != (void *)0x0) {
    *puVar3 = 0;
  }
  if (*(void **)(param_1 + 0x1a) != (void *)0x0) {
    param_1[0x18] = 0;
    operator_delete__(*(void **)(param_1 + 0x1a));
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    pvVar1 = *(void **)(param_1 + 0x16);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  puVar3 = param_1 + 10;
  uVar2 = *puVar3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 0xc) + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pvVar1 = *(void **)(param_1 + 0xc);
  if (pvVar1 != (void *)0x0) {
    *puVar3 = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    param_1[0xe] = 0;
    operator_delete__(*(void **)(param_1 + 0x10));
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    pvVar1 = *(void **)(param_1 + 0xc);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 2) + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        uVar2 = *param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pvVar1 = *(void **)(param_1 + 2);
  if (pvVar1 != (void *)0x0) {
    *param_1 = 0;
  }
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    param_1[4] = 0;
    operator_delete__(*(void **)(param_1 + 6));
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    pvVar1 = *(void **)(param_1 + 2);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




undefined8 * FUN_100662a74(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int *local_38;
  
  if (param_2 == 8) {
    iVar6 = param_1[0x18];
    if (iVar6 == 0) {
      iVar6 = 1;
      FUN_100664258(param_1 + 0x18,1);
      FUN_100664258(param_1 + 0x14,param_1[0x14] + 1);
      local_38 = operator_new(0xc08);
      lVar4 = 0;
      local_38[0x301] = 0;
      do {
        *(int *)((long)local_38 + lVar4) = iVar6;
        lVar4 = lVar4 + 0x30;
        iVar6 = iVar6 + 1;
      } while (lVar4 != 0xbd0);
      local_38[0x300] = 0;
      FUN_1006642d4(param_1 + 0x18,&local_38);
      FUN_1006642d4(param_1 + 0x14,&local_38);
      iVar6 = param_1[0x18];
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x1a) + (ulong)(iVar6 - 1U) * 8);
    puVar3 = (undefined8 *)(lVar4 + (ulong)*(uint *)(lVar4 + 0xc00) * 0x30);
    *(undefined4 *)(lVar4 + 0xc00) = *(undefined4 *)puVar3;
    iVar1 = *(int *)(lVar4 + 0xc04) + 1;
    *(int *)(lVar4 + 0xc04) = iVar1;
    if (iVar1 == 0x40) {
      param_1[0x18] = iVar6 - 1U;
    }
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined1 *)((long)puVar3 + 0xc) = 0;
    *(undefined4 *)((long)puVar3 + 0xe) = 0;
    *(undefined2 *)((long)puVar3 + 0x12) = 0;
    *puVar3 = &PTR_FUN_1014a8788;
    *(undefined4 *)((long)puVar3 + 0x1c) = 0;
    *(undefined8 *)((long)puVar3 + 0x14) = 0x3f800000;
    puVar3[4] = 0x3f8000003f800000;
    *(undefined4 *)(puVar3 + 5) = 0x3f800000;
    *(undefined4 *)((long)puVar3 + 0x2c) = 0x3f800000;
  }
  else if (param_2 == 4) {
    iVar6 = param_1[0xe];
    if (iVar6 == 0) {
      FUN_10066415c(param_1 + 0xe,1);
      FUN_10066415c(param_1 + 10,param_1[10] + 1);
      local_38 = operator_new(0x1208);
      local_38[0x481] = 0;
      lVar4 = -0x3f;
      piVar5 = local_38;
      do {
        *piVar5 = (int)lVar4 + 0x40;
        bVar2 = lVar4 != -1;
        lVar4 = lVar4 + 1;
        piVar5 = piVar5 + 0x12;
      } while (bVar2);
      local_38[0x480] = 0;
      FUN_1006641d8(param_1 + 0xe,&local_38);
      FUN_1006641d8(param_1 + 10,&local_38);
      iVar6 = param_1[0xe];
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)(iVar6 - 1U) * 8);
    puVar3 = (undefined8 *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x1200) * 0x48);
    *(undefined4 *)(lVar4 + 0x1200) = *(undefined4 *)puVar3;
    iVar1 = *(int *)(lVar4 + 0x1204) + 1;
    *(int *)(lVar4 + 0x1204) = iVar1;
    if (iVar1 == 0x40) {
      param_1[0xe] = iVar6 - 1U;
    }
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined1 *)((long)puVar3 + 0xc) = 0;
    *(undefined4 *)((long)puVar3 + 0xe) = 0;
    *(undefined2 *)((long)puVar3 + 0x12) = 0;
    *puVar3 = &PTR_FUN_1014a8710;
    *(undefined4 *)((long)puVar3 + 0x1c) = 0;
    *(undefined8 *)((long)puVar3 + 0x14) = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = 0x3f800000;
    *(undefined8 *)((long)puVar3 + 0x2c) = 0x417000003f800000;
    *(undefined8 *)((long)puVar3 + 0x34) = 0x3f8000003f800000;
    *(undefined4 *)((long)puVar3 + 0x3c) = 0x3f800000;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
  }
  else if (param_2 == 2) {
    iVar6 = param_1[4];
    if (iVar6 == 0) {
      iVar6 = 1;
      FUN_100664060(param_1 + 4,1);
      FUN_100664060(param_1,*param_1 + 1);
      local_38 = operator_new(0xe08);
      lVar4 = 0;
      local_38[0x381] = 0;
      do {
        *(int *)((long)local_38 + lVar4) = iVar6;
        lVar4 = lVar4 + 0x38;
        iVar6 = iVar6 + 1;
      } while (lVar4 != 0xdc8);
      local_38[0x380] = 0;
      FUN_1006640dc(param_1 + 4,&local_38);
      FUN_1006640dc(param_1,&local_38);
      iVar6 = param_1[4];
    }
    lVar4 = *(long *)(*(long *)(param_1 + 6) + (ulong)(iVar6 - 1U) * 8);
    puVar3 = (undefined8 *)(lVar4 + (ulong)*(uint *)(lVar4 + 0xe00) * 0x38);
    *(undefined4 *)(lVar4 + 0xe00) = *(undefined4 *)puVar3;
    iVar1 = *(int *)(lVar4 + 0xe04) + 1;
    *(int *)(lVar4 + 0xe04) = iVar1;
    if (iVar1 == 0x40) {
      param_1[4] = iVar6 - 1U;
    }
    *(undefined4 *)(puVar3 + 1) = 0xffffffff;
    *(undefined1 *)((long)puVar3 + 0xc) = 0;
    *(undefined4 *)((long)puVar3 + 0xe) = 0;
    *(undefined2 *)((long)puVar3 + 0x12) = 0;
    *puVar3 = &PTR_FUN_1014a8680;
    *(undefined4 *)((long)puVar3 + 0x34) = 0;
    *(undefined8 *)((long)puVar3 + 0x14) = 0;
    *(undefined4 *)((long)puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    *(undefined8 *)((long)puVar3 + 0x24) = 0x3f8000003f800000;
    *(undefined4 *)((long)puVar3 + 0x2c) = 0x3f800000;
    *(undefined4 *)(puVar3 + 6) = 0x3f800000;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}




void FUN_100662df4(uint *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  long *plVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *local_28;
  
  iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if (iVar3 == 8) {
    local_28 = (long *)0x0;
    (**(code **)*param_2)(param_2);
    plVar4 = *(long **)(param_1 + 0x1c);
    plVar2 = plVar4;
    if ((plVar4 == (long *)0x0 || param_2 < plVar4) || plVar4 + 0x180 < param_2) {
      uVar6 = (ulong)param_1[0x14];
      if (param_1[0x14] != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x16);
        do {
          plVar4 = (long *)*puVar5;
          plVar2 = plVar4;
          if (plVar4 <= param_2 && param_2 <= plVar4 + 0x180) goto LAB_100663038;
          puVar5 = puVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      plVar4 = (long *)0x0;
      plVar2 = local_28;
    }
LAB_100663038:
    local_28 = plVar2;
    iVar3 = *(int *)((long)plVar4 + 0xc04);
    if (iVar3 == 0x40) {
      FUN_1006642d4(param_1 + 0x18,&local_28);
      iVar3 = *(int *)((long)local_28 + 0xc04);
      plVar4 = local_28;
    }
    *(long **)(param_1 + 0x1c) = plVar4;
    *(int *)(plVar4 + ((ulong)((long)param_2 - (long)plVar4) / 0x30 & 0xffffffff) * 6) =
         (int)plVar4[0x180];
    *(int *)(plVar4 + 0x180) = (int)((ulong)((long)param_2 - (long)plVar4) / 0x30);
    *(int *)((long)plVar4 + 0xc04) = iVar3 + -1;
  }
  else if (iVar3 == 4) {
    local_28 = (long *)0x0;
    (**(code **)*param_2)(param_2);
    plVar4 = *(long **)(param_1 + 0x12);
    if (((plVar4 == (long *)0x0) || (param_2 < plVar4)) ||
       (plVar2 = plVar4, plVar4 + 0x240 < param_2)) {
      uVar6 = (ulong)param_1[10];
      if (param_1[10] != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0xc);
        do {
          plVar4 = (long *)*puVar5;
          plVar2 = plVar4;
          if (plVar4 <= param_2 && param_2 <= plVar4 + 0x240) goto LAB_100662fd0;
          puVar5 = puVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      plVar4 = (long *)0x0;
      plVar2 = local_28;
    }
LAB_100662fd0:
    local_28 = plVar2;
    iVar3 = *(int *)((long)plVar4 + 0x1204);
    if (iVar3 == 0x40) {
      FUN_1006641d8(param_1 + 0xe,&local_28);
      iVar3 = *(int *)((long)local_28 + 0x1204);
      plVar4 = local_28;
    }
    *(long **)(param_1 + 0x12) = plVar4;
    *(int *)(plVar4 + ((ulong)((long)param_2 - (long)plVar4) / 0x48 & 0xffffffff) * 9) =
         (int)plVar4[0x240];
    *(int *)(plVar4 + 0x240) = (int)((ulong)((long)param_2 - (long)plVar4) / 0x48);
    *(int *)((long)plVar4 + 0x1204) = iVar3 + -1;
  }
  else if (iVar3 == 2) {
    local_28 = (long *)0x0;
    (**(code **)*param_2)(param_2);
    plVar4 = *(long **)(param_1 + 8);
    if (((plVar4 == (long *)0x0) || (param_2 < plVar4)) ||
       (plVar2 = plVar4, plVar4 + 0x1c0 < param_2)) {
      uVar6 = (ulong)*param_1;
      if (*param_1 != 0) {
        puVar5 = *(undefined8 **)(param_1 + 2);
        do {
          plVar4 = (long *)*puVar5;
          plVar2 = plVar4;
          if (plVar4 <= param_2 && param_2 <= plVar4 + 0x1c0) goto LAB_100662f38;
          puVar5 = puVar5 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      plVar4 = (long *)0x0;
      plVar2 = local_28;
    }
LAB_100662f38:
    local_28 = plVar2;
    iVar3 = *(int *)((long)plVar4 + 0xe04);
    if (iVar3 == 0x40) {
      FUN_1006640dc(param_1 + 4,&local_28);
      iVar3 = *(int *)((long)local_28 + 0xe04);
      plVar4 = local_28;
    }
    *(long **)(param_1 + 8) = plVar4;
    uVar6 = (ulong)((long)param_2 - (long)plVar4) >> 3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    *(int *)(plVar4 + (uVar6 / 7 & 0xffffffff) * 7) = (int)plVar4[0x1c0];
    *(int *)(plVar4 + 0x1c0) = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    *(int *)((long)plVar4 + 0xe04) = iVar3 + -1;
  }
  return;
}




void FUN_1006630a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_10066311c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10066311c_1014a85c0;
  param_1[7] = &PTR_FUN_1014a8620;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
  }
  param_1[0xc] = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




undefined8 * FUN_10066319c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a8620;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  param_1[5] = 0;
  return param_1;
}




void thunk_FUN_10066311c(void)

{
  FUN_10066311c();
  return;
}




void FUN_1006631e8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10066311c();
  operator_delete(pvVar1);
  return;
}




void FUN_1006631fc(void)

{
  return;
}




void FUN_100663200(long *param_1,long *param_2,ushort param_3,ushort param_4)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_100663280(param_1);
    *(uint *)(param_2 + 1) = uVar1;
    *(long **)(param_1[2] + (ulong)uVar1 * 8) = param_2;
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
  }
  *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | param_3;
  *(ushort *)((long)param_2 + 0x12) = *(ushort *)((long)param_2 + 0x12) | param_4;
  return;
}




int FUN_100663280(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    local_28 = 0;
    FUN_1006638d8(param_1 + 8,&local_28);
    iVar1 = *(int *)(param_1 + 8) + -1;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x28) - 1;
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + (ulong)uVar2 * 4);
    *(uint *)(param_1 + 0x28) = uVar2;
  }
  return iVar1;
}




void FUN_1006632d8(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint local_34;
  
  if (param_3 == 0xffff) {
    *(undefined2 *)(param_2 + 2) = 0;
  }
  else {
    uVar1 = (uint)*(ushort *)(param_2 + 2) & (param_3 ^ 0xffffffff);
    *(short *)(param_2 + 2) = (short)uVar1;
    if (uVar1 != 0) {
      return;
    }
  }
  local_34 = *(uint *)(param_2 + 1);
  uVar2 = (ulong)local_34;
  if (local_34 != 0xffffffff) {
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    FUN_1000228fc(param_1 + 0x28,&local_34);
    *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8) = 0;
    (**(code **)(*param_2 + 0x30))(param_2,param_1);
  }
  return;
}




void FUN_100663370(long param_1,long param_2,undefined8 param_3,uint param_4,ushort param_5,
                  ushort param_6,long *param_7,uint param_8)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = 0;
    do {
      if (param_8 <= *(uint *)(param_2 + 0x200)) {
        return;
      }
      plVar3 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8);
      if (((((plVar3 != (long *)0x0) &&
            (iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3), iVar2 != 0)) &&
           ((*(ushort *)(plVar3 + 2) & param_5) != 0)) &&
          ((*(ushort *)((long)plVar3 + 0x12) & param_6) != 0)) &&
         (((param_4 == 0xffff || ((*(ushort *)((long)plVar3 + 0xe) & param_4) != 0)) &&
          ((*(char *)((long)plVar3 + 0xc) != '\0' &&
           ((param_7 == (long *)0x0 ||
            (iVar2 = (**(code **)(*param_7 + 0x10))(param_7,plVar3), iVar2 != 0)))))))) {
        uVar1 = *(uint *)(param_2 + 0x200);
        *(long **)(param_2 + (ulong)uVar1 * 8) = plVar3;
        uVar1 = uVar1 + 1;
        *(uint *)(param_2 + 0x200) = uVar1;
        if (param_8 <= uVar1) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  return;
}




bool FUN_100663480(undefined8 param_1,long param_2)

{
  return *(int *)(param_2 + 8) != -1;
}




void FUN_100663490(long param_1)

{
  FUN_100663498(param_1 + 0x38);
  return;
}




void FUN_100663498(long param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
    lVar8 = 0;
    do {
      ((undefined8 *)(param_3 + lVar8))[1] = 0x3f80000000000000;
      *(undefined8 *)(param_3 + lVar8) = 0;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0x60);
  }
  else {
    lVar10 = 0;
    fVar14 = *(float *)(param_1 + 0x10);
    fVar16 = *(float *)(param_1 + 0x18);
    NEON_fminnm(*param_2,*(float *)(param_1 + 0x1c));
    NEON_fminnm(param_2[2],*(float *)(param_1 + 0x24));
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    uVar5 = iVar3 - 1;
    fVar14 = ((fVar14 - fVar14) * (float)uVar5) / (*(float *)(param_1 + 0x1c) - fVar14);
    uVar6 = iVar4 - 1;
    fVar16 = ((fVar16 - fVar16) * (float)uVar6) / (*(float *)(param_1 + 0x24) - fVar16);
    uVar11 = (uint)fVar14;
    uVar12 = (uint)fVar16;
    uVar2 = uVar11;
    if (iVar3 <= (int)uVar11) {
      uVar2 = uVar5;
    }
    uVar1 = 0;
    if (-1 < (int)uVar11) {
      uVar1 = uVar2;
    }
    uVar2 = uVar12;
    if (iVar4 <= (int)uVar12) {
      uVar2 = uVar6;
    }
    uVar11 = 0;
    if (-1 < (int)uVar12) {
      uVar11 = uVar2;
    }
    uVar12 = (uint)((float)(int)fVar14 + 1.0);
    uVar2 = uVar12;
    if (iVar3 <= (int)uVar12) {
      uVar2 = uVar5;
    }
    uVar13 = (uint)((float)(int)fVar16 + 1.0);
    uVar5 = 0;
    if (-1 < (int)uVar12) {
      uVar5 = uVar2;
    }
    fVar14 = fVar14 - (float)(int)fVar14;
    fVar16 = fVar16 - (float)(int)fVar16;
    uVar2 = uVar13;
    if (iVar4 <= (int)uVar13) {
      uVar2 = uVar6;
    }
    uVar6 = 0;
    if (-1 < (int)uVar13) {
      uVar6 = uVar2;
    }
    fVar15 = 1.0 - fVar14;
    fVar17 = 1.0 - fVar16;
    iVar4 = uVar6 * iVar3 * 6;
    iVar3 = uVar11 * iVar3 * 6;
    do {
      iVar9 = (int)lVar10;
      puVar7 = (undefined8 *)(lVar8 + (ulong)(iVar3 + uVar1 * 6 + iVar9) * 0x10);
      uVar22 = puVar7[1];
      uVar19 = *puVar7;
      puVar7 = (undefined8 *)(lVar8 + (ulong)(iVar3 + uVar5 * 6 + iVar9) * 0x10);
      uVar26 = puVar7[1];
      uVar24 = *puVar7;
      puVar7 = (undefined8 *)(lVar8 + (ulong)(iVar4 + uVar1 * 6 + iVar9) * 0x10);
      uVar27 = puVar7[1];
      uVar25 = *puVar7;
      puVar7 = (undefined8 *)(lVar8 + (ulong)(iVar4 + uVar5 * 6 + iVar9) * 0x10);
      uVar29 = puVar7[1];
      uVar28 = *puVar7;
      fVar18 = ((float)uVar19 * fVar15 + fVar14 * (float)uVar24) * fVar17 +
               fVar16 * ((float)uVar25 * fVar15 + fVar14 * (float)uVar28);
      fVar20 = ((float)((ulong)uVar19 >> 0x20) * fVar15 + fVar14 * (float)((ulong)uVar24 >> 0x20)) *
               fVar17 + fVar16 * ((float)((ulong)uVar25 >> 0x20) * fVar15 +
                                 fVar14 * (float)((ulong)uVar28 >> 0x20));
      fVar21 = ((float)uVar22 * fVar15 + fVar14 * (float)uVar26) * fVar17 +
               fVar16 * ((float)uVar27 * fVar15 + fVar14 * (float)uVar29);
      fVar23 = ((float)((ulong)uVar22 >> 0x20) * fVar15 + fVar14 * (float)((ulong)uVar26 >> 0x20)) *
               fVar17 + fVar16 * ((float)((ulong)uVar27 >> 0x20) * fVar15 +
                                 fVar14 * (float)((ulong)uVar29 >> 0x20));
      puVar7 = (undefined8 *)(param_3 + lVar10 * 0x10);
      puVar7[1] = CONCAT44(fVar23 * fVar23 * 0.5,fVar21 * fVar21 * 0.5);
      *puVar7 = CONCAT44(fVar20 * fVar20 * 0.5,fVar18 * fVar18 * 0.5);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 6);
  }
  return;
}




void FUN_100663628(long param_1)

{
  FUN_100663630(param_1 + 0x38);
  return;
}




undefined8 FUN_100663630(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1004d2864(param_3,"%f %f %f %f%n");
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1004d2864(param_3,"%d %d%n");
  uVar1 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc) * 6;
  pvVar2 = operator_new__((ulong)uVar1 << 4);
  *(void **)(param_1 + 0x28) = pvVar2;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      FUN_1004d2864(param_3,"%f%n");
      FUN_1004d2864(param_3,"%f %f %f%n");
      FUN_1004d2864(param_3,"%f %f %f%n");
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar3 + 1) * 0x10 + 0xc) = 0;
      FUN_1004d2864(param_3,"%f %f %f%n");
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar3 + 2) * 0x10 + 0xc) = 0;
      FUN_1004d2864(param_3,"%f %f %f%n");
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar3 + 3) * 0x10 + 0xc) = 0;
      FUN_1004d2864(param_3,"%f %f %f%n");
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar3 + 4) * 0x10 + 0xc) = 0;
      FUN_1004d2864(param_3,"%f %f %f%n");
      *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar3 + 5) * 0x10 + 0xc) = 0;
      uVar3 = uVar3 + 6;
    } while (uVar3 < uVar1);
  }
  return 1;
}




void FUN_1006638a4(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}




void FUN_1006638d8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1006630a0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100663958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a8620;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}




void FUN_10066399c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = operator_new(0x68);
  *puVar1 = &PTR_thunk_FUN_10066311c_1014a85c0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[7] = &PTR_FUN_1014a8620;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  FUN_1006630a0(puVar1 + 1,0x40);
  FUN_100026bb4(puVar1 + 5,0x20);
  puVar2 = operator_new(0x10);
  *puVar2 = &PTR_FUN_1014a8648;
  puVar2[1] = puVar1;
  puVar3 = operator_new(0x160);
  puVar3[1] = puVar1;
  puVar3[2] = puVar2;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  *(undefined4 *)((long)puVar3 + 0x15c) = 0;
  operator_new(0x78);
  uVar4 = FUN_10066277c();
  *puVar3 = uVar4;
  DAT_101ea59a0 = puVar3;
  return;
}




void FUN_100663a58(void)

{
  void *pvVar1;
  
  if (DAT_101ea59a0 != 0) {
    pvVar1 = (void *)FUN_100663c14();
    operator_delete(pvVar1);
  }
  DAT_101ea59a0 = 0;
  return;
}




void FUN_100663a88(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = DAT_101ea59a0;
  (**(code **)(**(long **)(DAT_101ea59a0 + 8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000100663ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x10) + 0x10))(param_1);
  return;
}




void FUN_100663ad4(undefined8 param_1)

{
  FUN_100662a74(*DAT_101ea59a0,param_1);
  return;
}




void FUN_100663ae8(undefined8 param_1)

{
  FUN_100663af8(DAT_101ea59a0,param_1);
  return;
}




void FUN_100663af8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)param_1[1] + 0x30))();
  if (iVar1 != 0) {
    (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],param_2,0xffff);
  }
  FUN_100662df4(*param_1,param_2);
  return;
}




void FUN_100663b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100663b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(DAT_101ea59a0 + 8) + 0x18))
            (*(long **)(DAT_101ea59a0 + 8),param_1,param_2,param_3);
  return;
}




void FUN_100663b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100663b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(DAT_101ea59a0 + 0x10) + 0x18))
            (*(long **)(DAT_101ea59a0 + 0x10),param_1,param_2,param_3);
  return;
}




void FUN_100663b94(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = DAT_101ea59a0;
  if (param_2 == 0) {
    param_2 = FUN_1010aed34(param_1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000100663bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x10) + 0x20))(*(long **)(lVar1 + 0x10),param_1,param_2);
  return;
}




void FUN_100663bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100663bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(DAT_101ea59a0 + 8) + 0x40))
            (*(long **)(DAT_101ea59a0 + 8),param_1,param_2,param_3);
  return;
}




void FUN_100663bfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100663c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(DAT_101ea59a0 + 8) + 0x48))();
  return;
}




long * FUN_100663c14(long *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = (void *)FUN_100662918();
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  param_1[2] = 0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100663c78(void)

{
  return;
}




void FUN_100663c7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_290;
  float local_288;
  undefined8 local_280;
  float local_278;
  undefined8 local_270 [64];
  uint local_70;
  
  ppuVar3 = &PTR_s_OmniLight_Position_101873208;
  do {
    ppuVar7 = ppuVar3;
    iVar4 = _strcmp("OmniLight.Position",*ppuVar7);
    ppuVar3 = ppuVar7 + 3;
  } while (iVar4 != 0);
  uVar2 = *(uint *)((long)ppuVar7 + 0xc);
  local_70 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x28))
            (*(long **)(param_1 + 8),local_270,2,0xffff,param_2,0xffff,0,uVar2);
  if (local_70 == 0) {
    uVar9 = 0;
  }
  else {
    uVar6 = 0;
    do {
      plVar8 = (long *)local_270[uVar6];
      iVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,2);
      if (iVar4 != 0 && plVar8 != (long *)0x0) {
        fVar10 = *(float *)((long)plVar8 + 0x14);
        fVar11 = *(float *)(plVar8 + 3);
        fVar12 = *(float *)((long)plVar8 + 0x1c);
        local_280 = CONCAT44((float)((ulong)*param_4 >> 0x20) * fVar10 +
                             (float)((ulong)param_4[2] >> 0x20) * fVar11 +
                             (float)((ulong)param_4[4] >> 0x20) * fVar12 +
                             (float)((ulong)param_4[6] >> 0x20),
                             (float)*param_4 * fVar10 + (float)param_4[2] * fVar11 +
                             (float)param_4[4] * fVar12 + (float)param_4[6]);
        local_278 = *(float *)(param_4 + 1) * fVar10 + fVar11 * *(float *)(param_4 + 3) +
                    fVar12 * *(float *)(param_4 + 5) + *(float *)(param_4 + 7);
        local_288 = *(float *)(plVar8 + 6);
        local_290 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar8 + 0x24) >> 0x20) *
                             local_288,(float)*(undefined8 *)((long)plVar8 + 0x24) * local_288);
        local_288 = *(float *)((long)plVar8 + 0x2c) * local_288;
        FUN_1010b1e7c(param_3,"OmniLight.Position",uVar6,&local_280);
        FUN_1010b1e7c(param_3,"OmniLight.Color",uVar6,&local_290);
        FUN_1010b1e7c(param_3,"OmniLight.Attenuation",uVar6,
                      &UNK_101180610 + (ulong)*(uint *)((long)plVar8 + 0x34) * 0xc);
      }
      uVar6 = uVar6 + 1;
      uVar9 = (ulong)local_70;
    } while (uVar6 < uVar9);
  }
  if ((uint)uVar9 < uVar2) {
    do {
      FUN_1010b1e7c(param_3,"OmniLight.Position",uVar9,&DAT_101180634);
      FUN_1010b1e7c(param_3,"OmniLight.Color",uVar9,&DAT_101180640);
      FUN_1010b1e7c(param_3,"OmniLight.Attenuation",uVar9,&DAT_10118064c);
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
    } while (uVar2 != uVar1);
  }
  uVar5 = FUN_1010b1bf4(param_3,"Probe.Samples");
  FUN_1010b1d6c(param_3,uVar5,0,&DAT_101180600);
  FUN_1010b1d6c(param_3,uVar5,1,&DAT_101180600);
  FUN_1010b1d6c(param_3,uVar5,2,&DAT_101180600);
  FUN_1010b1d6c(param_3,uVar5,3,&DAT_101180600);
  FUN_1010b1d6c(param_3,uVar5,4,&DAT_101180600);
  FUN_1010b1d6c(param_3,uVar5,5,&DAT_101180600);
  return;
}




void FUN_100663f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),param_2,auStack_98);
  uVar1 = FUN_1010b1bf4(param_3,"Probe.Samples");
  FUN_1010b1d6c(param_3,uVar1,0,auStack_98);
  FUN_1010b1d6c(param_3,uVar1,1,auStack_88);
  FUN_1010b1d6c(param_3,uVar1,2,auStack_78);
  FUN_1010b1d6c(param_3,uVar1,3,auStack_68);
  FUN_1010b1d6c(param_3,uVar1,4,auStack_58);
  FUN_1010b1d6c(param_3,uVar1,5,auStack_48);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100664058(void)

{
  return;
}




void FUN_100664060(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1006640dc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100664060(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10066415c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1006641d8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10066415c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100664258(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1006642d4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100664258(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100664354(void)

{
  return;
}




void FUN_10066435c(long param_1,code *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(*param_2)(0x38);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_1014a86c8;
  *(undefined8 *)((long)puVar2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *puVar2 = &PTR_FUN_1014a8680;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  uVar5 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x14) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x24) = uVar3;
  *(undefined4 *)((long)puVar2 + 0x34) = uVar1;
  return;
}




uint FUN_1006643c0(undefined8 param_1,uint param_2)

{
  return param_2 >> 1 & 1;
}




undefined8 FUN_1006643c8(void)

{
  return 2;
}




void FUN_1006643d0(void)

{
  return;
}




void FUN_1006643d4(void)

{
  return;
}




void FUN_1006643d8(void)

{
  return;
}




void FUN_1006643e0(long param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(*param_2)(0x48);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1014a86c8;
  *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *puVar1 = &PTR_FUN_1014a8710;
  uVar3 = *(undefined8 *)(param_1 + 0x3c);
  uVar2 = *(undefined8 *)(param_1 + 0x34);
  uVar5 = *(undefined8 *)(param_1 + 0x2c);
  uVar4 = *(undefined8 *)(param_1 + 0x24);
  uVar6 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x14) = uVar6;
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x24) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x34) = uVar2;
  return;
}




uint FUN_100664444(undefined8 param_1,uint param_2)

{
  return param_2 >> 2 & 1;
}




undefined8 FUN_10066444c(void)

{
  return 4;
}




void FUN_100664454(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  return;
}




void FUN_100664468(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}




void FUN_10066447c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




void FUN_100664484(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}




void FUN_10066448c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  return;
}




void FUN_100664498(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}




void FUN_1006644a0(void)

{
  return;
}




void FUN_1006644a8(long param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(*param_2)(0x30);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1014a86c8;
  *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *puVar1 = &PTR_FUN_1014a8788;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x14) = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}




uint FUN_100664504(undefined8 param_1,uint param_2)

{
  return param_2 >> 3 & 1;
}




undefined8 FUN_10066450c(void)

{
  return 8;
}




ulong FUN_100664514(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180680,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_100664558(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43160000;
  return 1;
}




ulong FUN_100664568(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 3);
  }
  return param_1;
}




ulong FUN_1006645ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) * 0xc);
  }
  return param_1;
}




void FUN_1006645f0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}




ulong FUN_10066461c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_100664660(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066469c(undefined8 *param_1,uint param_2,ushort *param_3,long param_4,long param_5,
                  long param_6,float *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  if (1 < param_2) {
    uVar3 = 0;
    uVar5 = (ulong)*param_3;
    pfVar4 = (float *)(param_4 + uVar5 * 0xc);
    fVar16 = *pfVar4;
    uVar6 = *(undefined8 *)(pfVar4 + 1);
    pfVar4 = (float *)(param_4 + (ulong)param_3[1] * 0xc);
    fVar9 = *pfVar4;
    uVar13 = *(undefined8 *)(pfVar4 + 1);
    uVar25 = CONCAT44(-((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar6 >> 0x20) * -2.0),
                      -((float)uVar13 + (float)uVar6 * -2.0));
    fVar18 = -(fVar16 * -2.0) - fVar9;
    while( true ) {
      fVar17 = fVar16;
      fVar16 = fVar9;
      uVar7 = uVar6;
      fVar18 = fVar17 - fVar18;
      fVar10 = (float)uVar7;
      fVar12 = fVar10 - (float)uVar25;
      fVar11 = (float)((ulong)uVar7 >> 0x20);
      fVar15 = fVar11 - (float)((ulong)uVar25 >> 0x20);
      fVar9 = fVar12 * fVar12 + fVar18 * fVar18 + fVar15 * fVar15;
      if (0.0001 <= fVar9) {
        fVar9 = SQRT(fVar9);
        fVar18 = fVar18 / fVar9;
        fVar12 = fVar12 / fVar9;
        fVar15 = fVar15 / fVar9;
      }
      else {
        fVar18 = 0.0;
        fVar12 = 1.0;
        fVar15 = 0.0;
      }
      fVar9 = fVar16 - fVar17;
      fVar19 = (float)uVar13 - fVar10;
      fVar8 = (float)((ulong)uVar13 >> 0x20);
      fVar20 = fVar8 - fVar11;
      fVar22 = fVar19 * fVar19 + fVar9 * fVar9 + fVar20 * fVar20;
      if (0.0001 <= fVar22) {
        fVar22 = SQRT(fVar22);
        fVar23 = fVar9 / fVar22;
        fVar21 = fVar19 / fVar22;
        fVar22 = fVar20 / fVar22;
      }
      else {
        fVar23 = 0.0;
        fVar21 = 1.0;
        fVar22 = 0.0;
      }
      fVar23 = (fVar23 + fVar18) * 0.5;
      fVar21 = (fVar21 + fVar12) * 0.5;
      fVar22 = (fVar22 + fVar15) * 0.5;
      fVar15 = 0.0;
      fVar18 = 0.0;
      fVar12 = 1.0;
      if (0.0001 <= fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22) {
        fVar15 = fVar22;
        fVar18 = fVar23;
        fVar12 = fVar21;
      }
      fVar21 = fVar17 - *param_7;
      fVar22 = fVar10 - param_7[1];
      fVar24 = fVar11 - param_7[2];
      fVar26 = 1.0 / SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24);
      fVar23 = fVar22 * fVar26 * fVar15 - fVar24 * fVar26 * fVar12;
      fVar15 = fVar24 * fVar26 * fVar18 - fVar21 * fVar26 * fVar15;
      fVar18 = fVar21 * fVar26 * fVar12 - fVar22 * fVar26 * fVar18;
      fVar12 = fVar23 * fVar23 + fVar15 * fVar15 + fVar18 * fVar18;
      if (0.0001 <= fVar12) {
        fVar12 = 1.0 / SQRT(fVar12);
        fVar23 = fVar23 * fVar12;
        fVar15 = fVar15 * fVar12;
        fVar18 = fVar18 * fVar12;
      }
      else {
        fVar23 = 1.0;
        fVar15 = 0.0;
        fVar18 = 0.0;
      }
      fVar12 = *(float *)(param_5 + (ulong)(uint)((int)uVar5 << 1) * 4) * 0.5;
      puVar1 = (undefined8 *)(param_6 + (ulong)(uint)((int)uVar5 << 2) * 4);
      uVar25 = puVar1[1];
      uVar6 = *puVar1;
      fVar22 = (float)(uVar3 & 0xffffffff) * (1.0 / (float)param_2);
      *param_1 = CONCAT44(fVar10 - fVar12 * fVar15,fVar17 - fVar12 * fVar23);
      *(float *)(param_1 + 1) = fVar11 - fVar12 * fVar18;
      *(undefined8 *)((long)param_1 + 0x14) = uVar25;
      *(undefined8 *)((long)param_1 + 0xc) = uVar6;
      *(undefined4 *)((long)param_1 + 0x1c) = 0x3f800000;
      *(float *)(param_1 + 4) = fVar22;
      *(float *)((long)param_1 + 0x2c) = fVar12 * fVar18 + fVar11;
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(fVar12 * fVar15 + fVar10,fVar12 * fVar23 + fVar17)
      ;
      param_1[7] = uVar25;
      param_1[6] = uVar6;
      *(undefined4 *)(param_1 + 8) = 0;
      *(float *)((long)param_1 + 0x44) = fVar22;
      if ((uint)uVar3 < param_2 - 2) {
        pfVar4 = (float *)(param_4 + (ulong)param_3[uVar3 + 2] * 0xc);
        fVar9 = *pfVar4;
        uVar14 = *(undefined8 *)(pfVar4 + 1);
      }
      else {
        fVar9 = fVar9 + fVar16;
        uVar14 = CONCAT44(fVar20 + fVar8,fVar19 + (float)uVar13);
      }
      if (param_2 - 1 == (uint)uVar3) break;
      uVar5 = (ulong)param_3[uVar3 + 1];
      uVar3 = uVar3 + 1;
      uVar6 = uVar13;
      uVar25 = uVar7;
      uVar13 = uVar14;
      param_1 = param_1 + 9;
      fVar18 = fVar17;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1006649a4(undefined8 *param_1,uint param_2,ushort *param_3,long param_4,long param_5,
                  long param_6,float *param_7,uint param_8,char param_9,float *param_10)

{
  ushort uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_8 != 0) && (param_2 != 0)) {
    uVar3 = 0;
    do {
      uVar1 = *param_3;
      uVar7 = (ulong)uVar1;
      pfVar6 = (float *)(param_4 + uVar7 * 0xc);
      fVar8 = *pfVar6;
      fVar9 = pfVar6[1];
      fVar10 = pfVar6[2];
      puVar2 = (undefined8 *)(param_6 + uVar7 * 0x10);
      uVar13 = puVar2[1];
      uVar12 = *puVar2;
      fVar11 = 0.0;
      if (param_9 != '\0') {
        fVar11 = SQRT((*param_10 - fVar8) * (*param_10 - fVar8) +
                      (param_10[1] - fVar9) * (param_10[1] - fVar9) +
                      (param_10[2] - fVar10) * (param_10[2] - fVar10));
      }
      uVar5 = 0;
      do {
        fVar14 = *param_10 - fVar8;
        fVar15 = param_10[1] - fVar9;
        fVar17 = param_10[2] - fVar10;
        fVar18 = fVar14 * fVar14 + fVar15 * fVar15 + fVar17 * fVar17;
        if (0.0001 <= fVar18) {
          fVar18 = 1.0 / SQRT(fVar18);
          fVar14 = fVar14 * fVar18;
          fVar15 = fVar15 * fVar18;
          fVar17 = fVar17 * fVar18;
        }
        else {
          fVar14 = 0.0;
          fVar15 = 1.0;
          fVar17 = 0.0;
        }
        fVar18 = *param_7 - fVar8;
        fVar19 = param_7[1] - fVar9;
        fVar20 = param_7[2] - fVar10;
        fVar23 = 1.0 / SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20);
        fVar16 = fVar20 * fVar23 * fVar15 - fVar19 * fVar23 * fVar17;
        fVar17 = fVar18 * fVar23 * fVar17 - fVar20 * fVar23 * fVar14;
        fVar15 = fVar19 * fVar23 * fVar14 - fVar18 * fVar23 * fVar15;
        fVar14 = fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15;
        if (0.0001 <= fVar14) {
          fVar14 = 1.0 / SQRT(fVar14);
          fVar16 = fVar16 * fVar14;
          fVar17 = fVar17 * fVar14;
          fVar15 = fVar15 * fVar14;
        }
        fVar14 = (float)uVar5 * (1.0 / (float)param_8);
        fVar18 = 1.0 - fVar14;
        fVar20 = fVar18 * fVar8 + fVar14 * *param_10;
        fVar19 = fVar18 * fVar9 + fVar14 * param_10[1];
        fVar23 = fVar18 * fVar10 + fVar14 * param_10[2];
        fVar18 = *(float *)(param_5 + uVar7 * 8);
        fVar18 = fVar18 + fVar14 * (*(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4) - fVar18
                                   );
        fVar21 = fVar18 * 0.5;
        fVar22 = fVar16 * fVar21 + fVar20;
        fVar24 = fVar17 * fVar21 + fVar19;
        fVar25 = fVar15 * fVar21 + fVar23;
        fVar20 = fVar20 - fVar16 * fVar21;
        fVar19 = fVar19 - fVar17 * fVar21;
        fVar23 = fVar23 - fVar15 * fVar21;
        if (param_9 != '\0') {
          fVar14 = (fVar14 * fVar11) / fVar18;
        }
        puVar2 = param_1;
        if ((uVar3 != 0) && (uVar5 == 0)) {
          *(float *)(param_1 + 1) = fVar25;
          *param_1 = CONCAT44(fVar24,fVar22);
          *(undefined8 *)((long)param_1 + 0x14) = uVar13;
          *(undefined8 *)((long)param_1 + 0xc) = uVar12;
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
          *(float *)(param_1 + 4) = fVar14;
          puVar2 = (undefined8 *)((long)param_1 + 0x24);
        }
        *(float *)(puVar2 + 1) = fVar25;
        *puVar2 = CONCAT44(fVar24,fVar22);
        *(undefined8 *)((long)puVar2 + 0x14) = uVar13;
        *(undefined8 *)((long)puVar2 + 0xc) = uVar12;
        *(undefined4 *)((long)puVar2 + 0x1c) = 0;
        *(float *)(puVar2 + 4) = fVar14;
        *(ulong *)((long)puVar2 + 0x24) = CONCAT44(fVar19,fVar20);
        *(float *)((long)puVar2 + 0x2c) = fVar23;
        puVar2[7] = uVar13;
        puVar2[6] = uVar12;
        *(undefined4 *)(puVar2 + 8) = 0x3f800000;
        *(float *)((long)puVar2 + 0x44) = fVar14;
        param_1 = puVar2 + 9;
        if ((uVar3 < param_2 - 1) && (param_8 == uVar5)) {
          *param_1 = CONCAT44(fVar19,fVar20);
          *(float *)(puVar2 + 10) = fVar23;
          *(undefined8 *)((long)puVar2 + 0x5c) = uVar13;
          *(undefined8 *)((long)puVar2 + 0x54) = uVar12;
          *(undefined4 *)((long)puVar2 + 100) = 0x3f800000;
          *(float *)(puVar2 + 0xd) = fVar14;
          param_1 = (undefined8 *)((long)puVar2 + 0x6c);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 <= param_8);
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != param_2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100664c88(undefined8 *param_1,uint param_2,ushort *param_3,long param_4,long param_5,
                  long param_6,float *param_7,uint param_8,char param_9,float *param_10,
                  undefined8 *param_11,undefined8 *param_12)

{
  ushort uVar1;
  undefined8 *puVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_84;
  float local_7c;
  long local_78;
  
  puVar5 = &local_a0;
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_8 != 0) && (param_2 != 0)) {
    uVar3 = 0;
    do {
      uVar1 = *param_3;
      uVar9 = (ulong)uVar1;
      pfVar4 = (float *)(param_4 + uVar9 * 0xc);
      fVar11 = *pfVar4;
      uVar12 = *(undefined8 *)(pfVar4 + 1);
      puVar2 = (undefined8 *)(param_6 + uVar9 * 0x10);
      uStack_98 = puVar2[1];
      local_a0 = *puVar2;
      fVar10 = (float)uVar12;
      fVar14 = (float)*param_12 + fVar11;
      fVar15 = (float)((ulong)*param_12 >> 0x20) + fVar10;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar18 = *(float *)(param_12 + 1) + fVar13;
      fVar22 = *param_10;
      uVar23 = *(ulong *)(param_10 + 1);
      fVar19 = (float)*param_11 + fVar22;
      fVar20 = (float)((ulong)*param_11 >> 0x20) + (float)uVar23;
      fVar24 = (float)(uVar23 >> 0x20);
      fVar21 = *(float *)(param_11 + 1) + fVar24;
      puVar5 = (undefined8 *)((long)puVar5 + -((ulong)(param_8 + 1) * 4 + 0xf & 0x7fffffff0));
      uVar8 = 0;
      fVar25 = fVar11;
      do {
        fVar29 = (1.0 / (float)param_8) * (float)uVar8;
        fVar26 = 1.0 - fVar29;
        fVar31 = fVar29 * fVar19 + fVar14 * fVar26;
        fVar16 = fVar20 * fVar29 + fVar15 * fVar26;
        fVar17 = fVar21 * fVar29 + fVar18 * fVar26;
        fVar31 = ((fVar29 * fVar14 + fVar11 * fVar26) * fVar26 + fVar29 * fVar31) * fVar26 +
                 fVar29 * (fVar31 * fVar26 + fVar29 * (fVar29 * fVar22 + fVar19 * fVar26));
        fVar16 = ((fVar15 * fVar29 + fVar10 * fVar26) * fVar26 + fVar16 * fVar29) * fVar26 +
                 (fVar16 * fVar26 + ((float)uVar23 * fVar29 + fVar20 * fVar26) * fVar29) * fVar29;
        fVar17 = ((fVar18 * fVar29 + fVar13 * fVar26) * fVar26 + fVar17 * fVar29) * fVar26 +
                 (fVar17 * fVar26 + (fVar24 * fVar29 + fVar21 * fVar26) * fVar29) * fVar29;
        iVar6 = (int)uVar8;
        if (iVar6 == 0) {
          fVar25 = 0.0;
        }
        else {
          fVar25 = fVar31 - fVar25;
          fVar26 = fVar16 - (float)uVar12;
          fVar29 = fVar17 - (float)((ulong)uVar12 >> 0x20);
          fVar25 = *(float *)((long)puVar5 + (ulong)(iVar6 - 1) * 4) +
                   SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar29 * fVar29);
        }
        *(float *)((long)puVar5 + uVar8 * 4) = fVar25;
        uVar8 = (ulong)(iVar6 + 1U);
        uVar12 = CONCAT44(fVar17,fVar16);
        fVar25 = fVar31;
      } while (iVar6 + 1U <= param_8);
      uVar8 = 0;
      while( true ) {
        fVar25 = *(float *)(param_5 + uVar9 * 8);
        fVar31 = (float)uVar23 - fVar10;
        fVar16 = fVar24 - fVar13;
        fVar17 = fVar22 - fVar11;
        fVar26 = fVar17 * fVar17 + fVar31 * fVar31 + fVar16 * fVar16;
        if (0.0001 <= fVar26) {
          fVar26 = SQRT(fVar26);
          fVar31 = fVar31 / fVar26;
          fVar16 = fVar16 / fVar26;
          fVar17 = fVar17 / fVar26;
        }
        else {
          fVar16 = 0.0;
          fVar17 = 0.0;
          fVar31 = 1.0;
        }
        fVar26 = fVar11 - *param_7;
        fVar27 = fVar10 - (float)*(undefined8 *)(param_7 + 1);
        fVar28 = fVar13 - (float)((ulong)*(undefined8 *)(param_7 + 1) >> 0x20);
        fVar30 = SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar28 * fVar28);
        fVar29 = -((fVar28 / fVar30) * fVar31) + fVar16 * (fVar27 / fVar30);
        fVar16 = -((fVar26 / fVar30) * fVar16) + fVar17 * (fVar28 / fVar30);
        fVar17 = (fVar26 / fVar30) * fVar31 - (fVar27 / fVar30) * fVar17;
        fVar31 = fVar29 * fVar29 + fVar16 * fVar16 + fVar17 * fVar17;
        if (0.0001 <= fVar31) {
          fVar31 = SQRT(fVar31);
          fVar29 = fVar29 / fVar31;
          fVar16 = fVar16 / fVar31;
          fVar17 = fVar17 / fVar31;
        }
        fVar27 = (1.0 / (float)param_8) * (float)uVar8;
        fVar28 = 1.0 - fVar27;
        fVar26 = fVar19 * fVar27 + fVar14 * fVar28;
        fVar30 = fVar20 * fVar27 + fVar15 * fVar28;
        fVar31 = fVar27 * fVar21 + fVar18 * fVar28;
        fVar22 = ((fVar14 * fVar27 + fVar11 * fVar28) * fVar28 + fVar26 * fVar27) * fVar28 +
                 (fVar26 * fVar28 + (fVar19 * fVar28 + fVar22 * fVar27) * fVar27) * fVar27;
        fVar26 = ((fVar15 * fVar27 + fVar10 * fVar28) * fVar28 + fVar30 * fVar27) * fVar28 +
                 (fVar30 * fVar28 + (fVar20 * fVar28 + (float)uVar23 * fVar27) * fVar27) * fVar27;
        local_7c = ((fVar27 * fVar18 + fVar13 * fVar28) * fVar28 + fVar27 * fVar31) * fVar28 +
                   fVar27 * (fVar31 * fVar28 + fVar27 * (fVar28 * fVar21 + fVar27 * fVar24));
        fVar25 = fVar25 + fVar27 * (*(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4) - fVar25
                                   );
        fVar24 = fVar25 * 0.5;
        local_90 = CONCAT44(fVar16 * fVar24 + fVar26,fVar29 * fVar24 + fVar22);
        local_88 = fVar17 * fVar24 + local_7c;
        local_7c = local_7c - fVar17 * fVar24;
        local_84 = CONCAT44(fVar26 - fVar16 * fVar24,fVar22 - fVar29 * fVar24);
        fVar22 = *(float *)((long)puVar5 + uVar8 * 4) /
                 *(float *)((long)puVar5 + (ulong)param_8 * 4);
        if (param_9 != '\0') {
          fVar22 = (fVar22 * *(float *)((long)puVar5 + (ulong)param_8 * 4)) / fVar25;
        }
        uVar7 = (uint)uVar8;
        puVar2 = param_1;
        if ((uVar3 != 0) && (uVar7 == 0)) {
          *(float *)(param_1 + 1) = local_88;
          *param_1 = local_90;
          *(undefined8 *)((long)param_1 + 0x14) = uStack_98;
          *(undefined8 *)((long)param_1 + 0xc) = local_a0;
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
          *(float *)(param_1 + 4) = fVar22;
          puVar2 = (undefined8 *)((long)param_1 + 0x24);
        }
        *(float *)(puVar2 + 1) = local_88;
        *puVar2 = local_90;
        *(undefined8 *)((long)puVar2 + 0x14) = uStack_98;
        *(undefined8 *)((long)puVar2 + 0xc) = local_a0;
        *(undefined4 *)((long)puVar2 + 0x1c) = 0;
        *(float *)(puVar2 + 4) = fVar22;
        *(undefined8 *)((long)puVar2 + 0x24) = local_84;
        *(float *)((long)puVar2 + 0x2c) = local_7c;
        puVar2[7] = uStack_98;
        puVar2[6] = local_a0;
        *(undefined4 *)(puVar2 + 8) = 0x3f800000;
        *(float *)((long)puVar2 + 0x44) = fVar22;
        param_1 = puVar2 + 9;
        if ((uVar3 < param_2 - 1) && (param_8 == uVar7)) {
          *param_1 = local_84;
          *(float *)(puVar2 + 10) = local_7c;
          *(undefined8 *)((long)puVar2 + 0x5c) = uStack_98;
          *(undefined8 *)((long)puVar2 + 0x54) = local_a0;
          *(undefined4 *)((long)puVar2 + 100) = 0x3f800000;
          *(float *)(puVar2 + 0xd) = fVar22;
          param_1 = (undefined8 *)((long)puVar2 + 0x6c);
        }
        uVar8 = (ulong)(uVar7 + 1);
        if (param_8 < uVar7 + 1) break;
        fVar24 = param_10[2];
        fVar22 = *param_10;
        uVar23 = (ulong)(uint)param_10[1];
      }
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != param_2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100665100(void)

{
  FUN_1006651d0();
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 *
FUN_1006651d0(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6
             ,long param_7,float *param_8,undefined8 *param_9,undefined8 *param_10)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  double *pdVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  undefined8 uVar23;
  double dVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 != 0) {
    uVar28 = *param_10;
    fVar29 = *(float *)(param_10 + 1);
    uVar30 = *param_9;
    fVar31 = *(float *)(param_9 + 1);
    fVar12 = *param_8;
    fVar15 = 1.0 - fVar12;
    fVar6 = 1.0 - param_8[1];
    fVar8 = -param_8[1];
    uVar32 = NEON_fmov(0x3f800000,4);
    do {
      uVar1 = *param_3;
      uVar5 = (ulong)uVar1;
      fVar13 = *(float *)(param_5 + uVar5 * 8);
      fVar9 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar14 = 3.1415927;
      fVar7 = (float)___sincosf_stret(*(float *)(param_6 + uVar5 * 4) * 0.0055555557 * 3.1415927);
      fVar16 = (float)uVar28;
      fVar18 = (float)((ulong)uVar28 >> 0x20);
      fVar19 = (float)uVar30;
      fVar20 = (float)((ulong)uVar30 >> 0x20);
      pdVar4 = (double *)(param_4 + (ulong)(uint)uVar1 * 0xc);
      dVar21 = *pdVar4;
      puVar2 = (undefined8 *)(param_7 + uVar5 * 0x10);
      uVar26 = puVar2[1];
      uVar23 = *puVar2;
      fVar27 = *(float *)(pdVar4 + 1);
      fVar10 = (fVar16 * fVar14 + fVar19 * fVar7) * fVar13;
      fVar11 = (fVar18 * fVar14 + fVar20 * fVar7) * fVar13;
      fVar13 = (fVar14 * fVar29 + fVar31 * fVar7) * fVar13;
      fVar16 = (-(fVar16 * fVar7) + fVar19 * fVar14) * fVar9;
      fVar18 = (-(fVar18 * fVar7) + fVar20 * fVar14) * fVar9;
      fVar19 = fVar16 * fVar6;
      fVar20 = fVar18 * fVar6;
      dVar24 = dVar21 - (double)CONCAT44(fVar12 * fVar11,fVar12 * fVar10);
      fVar22 = SUB84(dVar24,0);
      fVar25 = (float)((ulong)dVar24 >> 0x20);
      uVar34 = CONCAT44(fVar25 + fVar20,fVar22 + fVar19);
      fVar9 = (fVar14 * fVar31 - fVar7 * fVar29) * fVar9;
      fVar33 = fVar9 * fVar6;
      fVar35 = fVar27 - fVar12 * fVar13;
      fVar10 = SUB84(dVar21,0) + fVar15 * fVar10;
      fVar11 = (float)((ulong)dVar21 >> 0x20) + fVar15 * fVar11;
      fVar7 = fVar35 + fVar33;
      fVar16 = fVar16 * fVar8;
      fVar18 = fVar18 * fVar8;
      fVar27 = fVar27 + fVar15 * fVar13;
      uVar17 = CONCAT44(fVar11 + fVar18,fVar10 + fVar16);
      fVar9 = fVar9 * fVar8;
      fVar14 = fVar27 + fVar9;
      *param_1 = uVar17;
      *(undefined8 *)((long)param_1 + 0x14) = uVar26;
      *(undefined8 *)((long)param_1 + 0xc) = uVar23;
      *(undefined8 *)((long)param_1 + 0x1c) = 0x3f800000;
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(fVar11 + fVar20,fVar10 + fVar19);
      param_1[7] = uVar26;
      param_1[6] = uVar23;
      param_1[8] = uVar32;
      *(float *)(param_1 + 1) = fVar14;
      param_1[9] = uVar34;
      *(undefined8 *)((long)param_1 + 0x5c) = uVar26;
      *(undefined8 *)((long)param_1 + 0x54) = uVar23;
      *(undefined8 *)((long)param_1 + 100) = 0x3f80000000000000;
      *(float *)((long)param_1 + 0x2c) = fVar27 + fVar33;
      *(undefined8 *)((long)param_1 + 0x6c) = uVar34;
      param_1[0x10] = uVar26;
      param_1[0xf] = uVar23;
      param_1[0x11] = 0x3f80000000000000;
      *(float *)(param_1 + 10) = fVar7;
      param_1[0x12] = CONCAT44(fVar25 + fVar18,fVar22 + fVar16);
      *(float *)((long)param_1 + 0x74) = fVar7;
      *(undefined8 *)((long)param_1 + 0xa4) = uVar26;
      *(undefined8 *)((long)param_1 + 0x9c) = uVar23;
      *(undefined4 *)((long)param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(float *)(param_1 + 0x13) = fVar35 + fVar9;
      *(float *)((long)param_1 + 0xbc) = fVar14;
      *(undefined8 *)((long)param_1 + 0xb4) = uVar17;
      param_1[0x19] = uVar26;
      param_1[0x18] = uVar23;
      param_1[0x1a] = 0x3f800000;
      param_1 = param_1 + 0x1b;
      param_2 = param_2 + -1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lVar3) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 *
FUN_1006654c4(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6
             ,long param_7,float *param_8,long param_9,float *param_10)

{
  long lVar1;
  float *pfVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 != 0) {
    fVar22 = *param_8;
    fVar23 = 1.0 - fVar22;
    fVar24 = 1.0 - param_8[1];
    fVar25 = -param_8[1];
    fVar10 = *param_10;
    fVar7 = param_10[1];
    fVar11 = param_10[2];
    do {
      uVar3 = *param_3;
      uVar6 = (ulong)uVar3;
      fVar26 = *(float *)(param_5 + uVar6 * 8);
      fVar21 = *(float *)(param_5 + (ulong)((uint)uVar3 << 1 | 1) * 4);
      fVar12 = 3.1415927;
      fVar8 = (float)___sincosf_stret(*(float *)(param_6 + uVar6 * 4) * 0.0055555557 * 3.1415927);
      lVar1 = uVar6 + (ulong)(uint)uVar3 * 2;
      pfVar2 = (float *)(param_9 + lVar1 * 4);
      fVar13 = *pfVar2;
      fVar17 = pfVar2[1];
      fVar18 = pfVar2[2];
      fVar15 = SQRT(fVar13 * fVar13 + fVar17 * fVar17 + fVar18 * fVar18);
      if (1e-06 <= fVar15) {
        fVar15 = 1.0 / fVar15;
        fVar13 = fVar13 * fVar15;
        fVar17 = fVar17 * fVar15;
        fVar18 = fVar18 * fVar15;
      }
      else {
        fVar13 = 0.0;
        fVar17 = 1.0;
        fVar18 = 0.0;
      }
      fVar15 = fVar17 * fVar11 - fVar18 * fVar7;
      fVar20 = fVar18 * fVar10 - fVar13 * fVar11;
      fVar27 = fVar13 * fVar7 - fVar17 * fVar10;
      fVar19 = SQRT(fVar27 * fVar27 + fVar15 * fVar15 + fVar20 * fVar20);
      if (1e-06 <= fVar19) {
        fVar19 = 1.0 / fVar19;
        fVar15 = fVar15 * fVar19;
        fVar20 = fVar20 * fVar19;
        fVar27 = fVar27 * fVar19;
      }
      else {
        fVar15 = 1.0;
        fVar20 = 0.0;
        fVar27 = 0.0;
      }
      pfVar2 = (float *)(param_4 + lVar1 * 4);
      fVar19 = (fVar13 * fVar8 + fVar12 * fVar15) * fVar26;
      fVar14 = (fVar17 * fVar8 + fVar12 * fVar20) * fVar26;
      fVar16 = (fVar13 * fVar12 - fVar15 * fVar8) * fVar21;
      fVar17 = (fVar17 * fVar12 - fVar20 * fVar8) * fVar21;
      fVar20 = fVar16 * fVar24;
      fVar28 = fVar17 * fVar24;
      fVar29 = *pfVar2 - fVar22 * fVar19;
      fVar30 = pfVar2[1] - fVar22 * fVar14;
      fVar31 = fVar29 + fVar20;
      fVar34 = fVar30 + fVar28;
      puVar4 = (undefined8 *)(param_7 + uVar6 * 0x10);
      uVar33 = puVar4[1];
      uVar32 = *puVar4;
      fVar26 = (fVar18 * fVar8 + fVar12 * fVar27) * fVar26;
      fVar21 = (fVar18 * fVar12 - fVar27 * fVar8) * fVar21;
      fVar35 = fVar21 * fVar24;
      fVar36 = pfVar2[2] - fVar22 * fVar26;
      fVar8 = *pfVar2 + fVar23 * fVar19;
      fVar27 = fVar36 + fVar35;
      fVar18 = pfVar2[1] + fVar23 * fVar14;
      fVar26 = pfVar2[2] + fVar23 * fVar26;
      fVar16 = fVar16 * fVar25;
      fVar17 = fVar17 * fVar25;
      fVar12 = fVar8 + fVar16;
      fVar15 = fVar18 + fVar17;
      fVar21 = fVar21 * fVar25;
      fVar13 = fVar26 + fVar21;
      *param_1 = CONCAT44(fVar15,fVar12);
      *(float *)(param_1 + 1) = fVar13;
      *(float *)((long)param_1 + 0x2c) = fVar26 + fVar35;
      *(ulong *)((long)param_1 + 0x24) = CONCAT44(fVar18 + fVar28,fVar8 + fVar20);
      *(float *)(param_1 + 10) = fVar27;
      param_1[9] = CONCAT44(fVar34,fVar31);
      *(undefined8 *)((long)param_1 + 0x14) = uVar33;
      *(undefined8 *)((long)param_1 + 0xc) = uVar32;
      *(undefined8 *)((long)param_1 + 0x1c) = 0x3f800000;
      param_1[7] = uVar33;
      param_1[6] = uVar32;
      uVar9 = NEON_fmov(0x3f800000,4);
      param_1[8] = uVar9;
      *(undefined8 *)((long)param_1 + 0x5c) = uVar33;
      *(undefined8 *)((long)param_1 + 0x54) = uVar32;
      *(undefined8 *)((long)param_1 + 100) = 0x3f80000000000000;
      *(float *)((long)param_1 + 0x74) = fVar27;
      *(ulong *)((long)param_1 + 0x6c) = CONCAT44(fVar34,fVar31);
      param_1[0x10] = uVar33;
      param_1[0xf] = uVar32;
      param_1[0x11] = 0x3f80000000000000;
      *(float *)(param_1 + 0x13) = fVar36 + fVar21;
      param_1[0x12] = CONCAT44(fVar30 + fVar17,fVar29 + fVar16);
      *(undefined8 *)((long)param_1 + 0xa4) = uVar33;
      *(undefined8 *)((long)param_1 + 0x9c) = uVar32;
      *(undefined4 *)((long)param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(float *)((long)param_1 + 0xbc) = fVar13;
      *(ulong *)((long)param_1 + 0xb4) = CONCAT44(fVar15,fVar12);
      param_1[0x19] = uVar33;
      param_1[0x18] = uVar32;
      param_1[0x1a] = 0x3f800000;
      param_1 = param_1 + 0x1b;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lVar5) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10066585c(void)

{
  FUN_100665928();
  return;
}




undefined8 *
FUN_100665928(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6
             ,long param_7,undefined8 *param_8,undefined8 *param_9)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (param_2 != 0) {
    iVar4 = 0;
    uVar16 = *param_9;
    fVar18 = *(float *)(param_9 + 1);
    uVar20 = *param_8;
    fVar22 = *(float *)(param_8 + 1);
    do {
      uVar1 = *param_3;
      uVar5 = (ulong)uVar1;
      fVar24 = *(float *)(param_5 + uVar5 * 8);
      fVar23 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar7 = 3.1415927;
      fVar6 = (float)___sincosf_stret(*(float *)(param_6 + uVar5 * 4) * 0.0055555557 * 3.1415927);
      lVar2 = 0;
      puVar3 = (undefined8 *)(param_4 + (ulong)(uint)uVar1 * 0xc);
      uVar12 = *puVar3;
      fVar13 = *(float *)(puVar3 + 1);
      fVar15 = (float)uVar16;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar19 = (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      puVar3 = (undefined8 *)(param_7 + uVar5 * 0x10);
      uVar11 = puVar3[1];
      uVar9 = *puVar3;
      do {
        fVar8 = (float)*(undefined8 *)((long)&DAT_1011806f8 + lVar2);
        fVar14 = fVar24 * fVar8;
        fVar10 = (float)((ulong)*(undefined8 *)((long)&DAT_1011806f8 + lVar2) >> 0x20);
        fVar25 = fVar23 * fVar10;
        *param_1 = CONCAT44((float)((ulong)uVar12 >> 0x20) +
                            (fVar17 * fVar7 + fVar21 * fVar6) * fVar14 +
                            (-(fVar17 * fVar6) + fVar21 * fVar7) * fVar25,
                            (float)uVar12 + (fVar15 * fVar7 + fVar19 * fVar6) * fVar14 +
                            (-(fVar15 * fVar6) + fVar19 * fVar7) * fVar25);
        *(float *)(param_1 + 1) =
             fVar13 + (fVar7 * fVar18 + fVar22 * fVar6) * fVar14 +
             (fVar7 * fVar22 - fVar6 * fVar18) * fVar25;
        *(undefined8 *)((long)param_1 + 0x14) = uVar11;
        *(undefined8 *)((long)param_1 + 0xc) = uVar9;
        *(ulong *)((long)param_1 + 0x1c) = CONCAT44(fVar10 + 0.5,fVar8 + 0.5);
        param_1 = (undefined8 *)((long)param_1 + 0x24);
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0x90);
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 1;
    } while (iVar4 != param_2);
  }
  return param_1;
}




undefined8 *
FUN_100665aac(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6
             ,long param_7,long param_8,float *param_9)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  if (param_2 != 0) {
    iVar8 = 0;
    fVar15 = *param_9;
    fVar17 = param_9[1];
    fVar13 = param_9[2];
    uVar5 = *(undefined8 *)(param_9 + 1);
    fVar16 = fVar15;
    do {
      uVar4 = *param_3;
      uVar7 = (ulong)uVar4;
      fVar31 = *(float *)(param_5 + uVar7 * 8);
      fVar32 = *(float *)(param_5 + (ulong)((uint)uVar4 << 1 | 1) * 4);
      fVar14 = (float)___sincosf_stret(*(float *)(param_6 + uVar7 * 4) * 0.0055555557 * 3.1415927);
      lVar1 = uVar7 + (ulong)(uint)uVar4 * 2;
      pfVar2 = (float *)(param_8 + lVar1 * 4);
      fVar18 = *pfVar2;
      uVar20 = *(undefined8 *)(pfVar2 + 1);
      fVar19 = (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      fVar22 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar21 * fVar21);
      if (1e-06 <= fVar22) {
        fVar19 = fVar19 / fVar22;
        fVar21 = fVar21 / fVar22;
        fVar18 = fVar18 / fVar22;
      }
      else {
        fVar18 = 0.0;
        fVar19 = 1.0;
        fVar21 = 0.0;
      }
      fVar22 = -(fVar21 * (float)uVar5) + fVar13 * fVar19;
      fVar23 = -(fVar18 * (float)((ulong)uVar5 >> 0x20)) + fVar15 * fVar21;
      fVar24 = fVar18 * fVar17 - fVar15 * fVar19;
      fVar26 = SQRT(fVar22 * fVar22 + fVar24 * fVar24 + fVar23 * fVar23);
      if (1e-06 <= fVar26) {
        fVar22 = fVar22 / fVar26;
        fVar23 = fVar23 / fVar26;
        fVar24 = fVar24 / fVar26;
      }
      else {
        fVar22 = 1.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
      }
      lVar6 = 0;
      fVar9 = fVar22 * fVar16;
      fVar11 = fVar23 * fVar16;
      fVar26 = fVar16 * fVar24;
      fVar10 = fVar18 * fVar16;
      fVar12 = fVar19 * fVar16;
      puVar3 = (undefined8 *)(param_4 + lVar1 * 4);
      uVar20 = *puVar3;
      fVar25 = *(float *)(puVar3 + 1);
      fVar16 = fVar21 * fVar16 - fVar24 * fVar14;
      puVar3 = (undefined8 *)(param_7 + uVar7 * 0x10);
      uVar29 = puVar3[1];
      uVar27 = *puVar3;
      do {
        fVar24 = (float)*(undefined8 *)((long)&DAT_1011806f8 + lVar6);
        fVar30 = fVar31 * fVar24;
        fVar28 = (float)((ulong)*(undefined8 *)((long)&DAT_1011806f8 + lVar6) >> 0x20);
        fVar33 = fVar32 * fVar28;
        *param_1 = CONCAT44((float)((ulong)uVar20 >> 0x20) + (fVar19 * fVar14 + fVar11) * fVar30 +
                            (-(fVar23 * fVar14) + fVar12) * fVar33,
                            (float)uVar20 + (fVar18 * fVar14 + fVar9) * fVar30 +
                            (-(fVar22 * fVar14) + fVar10) * fVar33);
        *(float *)(param_1 + 1) = fVar25 + (fVar21 * fVar14 + fVar26) * fVar30 + fVar16 * fVar33;
        *(undefined8 *)((long)param_1 + 0x14) = uVar29;
        *(undefined8 *)((long)param_1 + 0xc) = uVar27;
        *(ulong *)((long)param_1 + 0x1c) = CONCAT44(fVar28 + 0.5,fVar24 + 0.5);
        param_1 = (undefined8 *)((long)param_1 + 0x24);
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x90);
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 1;
    } while (iVar8 != param_2);
  }
  return param_1;
}




void FUN_100665cec(void)

{
  FUN_100665db8();
  return;
}




undefined8 *
FUN_100665db8(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6
             ,long param_7,undefined8 *param_8,undefined8 *param_9)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (param_2 != 0) {
    iVar4 = 0;
    uVar16 = *param_9;
    fVar18 = *(float *)(param_9 + 1);
    uVar20 = *param_8;
    fVar22 = *(float *)(param_8 + 1);
    do {
      uVar1 = *param_3;
      uVar5 = (ulong)uVar1;
      fVar24 = *(float *)(param_5 + uVar5 * 8);
      fVar23 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar7 = 3.1415927;
      fVar6 = (float)___sincosf_stret(*(float *)(param_6 + uVar5 * 4) * 0.0055555557 * 3.1415927);
      lVar2 = 0;
      puVar3 = (undefined8 *)(param_4 + (ulong)(uint)uVar1 * 0xc);
      uVar12 = *puVar3;
      fVar13 = *(float *)(puVar3 + 1);
      fVar15 = (float)uVar16;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar19 = (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      puVar3 = (undefined8 *)(param_7 + uVar5 * 0x10);
      uVar11 = puVar3[1];
      uVar9 = *puVar3;
      do {
        fVar8 = (float)*(undefined8 *)((long)&DAT_101180788 + lVar2);
        fVar14 = fVar24 * fVar8;
        fVar10 = (float)((ulong)*(undefined8 *)((long)&DAT_101180788 + lVar2) >> 0x20);
        fVar25 = fVar23 * fVar10;
        *param_1 = CONCAT44((float)((ulong)uVar12 >> 0x20) +
                            (fVar17 * fVar7 + fVar21 * fVar6) * fVar14 +
                            (-(fVar17 * fVar6) + fVar21 * fVar7) * fVar25,
                            (float)uVar12 + (fVar15 * fVar7 + fVar19 * fVar6) * fVar14 +
                            (-(fVar15 * fVar6) + fVar19 * fVar7) * fVar25);
        *(float *)(param_1 + 1) =
             fVar13 + (fVar7 * fVar18 + fVar22 * fVar6) * fVar14 +
             (fVar7 * fVar22 - fVar6 * fVar18) * fVar25;
        *(undefined8 *)((long)param_1 + 0x14) = uVar11;
        *(undefined8 *)((long)param_1 + 0xc) = uVar9;
        *(ulong *)((long)param_1 + 0x1c) = CONCAT44(fVar10 + 0.5,fVar8 + 0.5);
        param_1 = (undefined8 *)((long)param_1 + 0x24);
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0x180);
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 1;
    } while (iVar4 != param_2);
  }
  return param_1;
}




undefined8 *
FUN_100665f3c(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6
             ,long param_7,long param_8,float *param_9)

{
  long lVar1;
  float *pfVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  if (param_2 != 0) {
    iVar8 = 0;
    fVar15 = *param_9;
    fVar17 = param_9[1];
    fVar13 = param_9[2];
    uVar5 = *(undefined8 *)(param_9 + 1);
    fVar16 = fVar15;
    do {
      uVar4 = *param_3;
      uVar7 = (ulong)uVar4;
      fVar31 = *(float *)(param_5 + uVar7 * 8);
      fVar32 = *(float *)(param_5 + (ulong)((uint)uVar4 << 1 | 1) * 4);
      fVar14 = (float)___sincosf_stret(*(float *)(param_6 + uVar7 * 4) * 0.0055555557 * 3.1415927);
      lVar1 = uVar7 + (ulong)(uint)uVar4 * 2;
      pfVar2 = (float *)(param_8 + lVar1 * 4);
      fVar18 = *pfVar2;
      uVar20 = *(undefined8 *)(pfVar2 + 1);
      fVar19 = (float)uVar20;
      fVar21 = (float)((ulong)uVar20 >> 0x20);
      fVar22 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar21 * fVar21);
      if (1e-06 <= fVar22) {
        fVar19 = fVar19 / fVar22;
        fVar21 = fVar21 / fVar22;
        fVar18 = fVar18 / fVar22;
      }
      else {
        fVar18 = 0.0;
        fVar19 = 1.0;
        fVar21 = 0.0;
      }
      fVar22 = -(fVar21 * (float)uVar5) + fVar13 * fVar19;
      fVar23 = -(fVar18 * (float)((ulong)uVar5 >> 0x20)) + fVar15 * fVar21;
      fVar24 = fVar18 * fVar17 - fVar15 * fVar19;
      fVar26 = SQRT(fVar22 * fVar22 + fVar24 * fVar24 + fVar23 * fVar23);
      if (1e-06 <= fVar26) {
        fVar22 = fVar22 / fVar26;
        fVar23 = fVar23 / fVar26;
        fVar24 = fVar24 / fVar26;
      }
      else {
        fVar22 = 1.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
      }
      lVar6 = 0;
      fVar9 = fVar22 * fVar16;
      fVar11 = fVar23 * fVar16;
      fVar26 = fVar16 * fVar24;
      fVar10 = fVar18 * fVar16;
      fVar12 = fVar19 * fVar16;
      puVar3 = (undefined8 *)(param_4 + lVar1 * 4);
      uVar20 = *puVar3;
      fVar25 = *(float *)(puVar3 + 1);
      fVar16 = fVar21 * fVar16 - fVar24 * fVar14;
      puVar3 = (undefined8 *)(param_7 + uVar7 * 0x10);
      uVar29 = puVar3[1];
      uVar27 = *puVar3;
      do {
        fVar24 = (float)*(undefined8 *)((long)&DAT_101180788 + lVar6);
        fVar30 = fVar31 * fVar24;
        fVar28 = (float)((ulong)*(undefined8 *)((long)&DAT_101180788 + lVar6) >> 0x20);
        fVar33 = fVar32 * fVar28;
        *param_1 = CONCAT44((float)((ulong)uVar20 >> 0x20) + (fVar19 * fVar14 + fVar11) * fVar30 +
                            (-(fVar23 * fVar14) + fVar12) * fVar33,
                            (float)uVar20 + (fVar18 * fVar14 + fVar9) * fVar30 +
                            (-(fVar22 * fVar14) + fVar10) * fVar33);
        *(float *)(param_1 + 1) = fVar25 + (fVar21 * fVar14 + fVar26) * fVar30 + fVar16 * fVar33;
        *(undefined8 *)((long)param_1 + 0x14) = uVar29;
        *(undefined8 *)((long)param_1 + 0xc) = uVar27;
        *(ulong *)((long)param_1 + 0x1c) = CONCAT44(fVar28 + 0.5,fVar24 + 0.5);
        param_1 = (undefined8 *)((long)param_1 + 0x24);
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x180);
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 1;
    } while (iVar8 != param_2);
  }
  return param_1;
}




void FUN_10066617c(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 100) & 7;
  if (uVar1 < 5 && uVar1 != 1) {
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 1;
  }
  return;
}




void FUN_1006661a0(long param_1)

{
  if ((*(ushort *)(param_1 + 100) & 7) < 5) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 1;
  }
  return;
}




void FUN_1006661c4(long param_1)

{
  if ((ushort)((*(ushort *)(param_1 + 100) & 7) - 1) < 3) {
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 4;
  }
  return;
}




void FUN_1006661ec(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 5;
  return;
}




void FUN_100666204(long param_1,int param_2)

{
  ushort uVar1;
  
  if ((*(ushort *)(param_1 + 100) & 7) == 1) {
    uVar1 = 2;
    if (param_2 == 0) {
      uVar1 = 3;
    }
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | uVar1;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_100666230(long param_1,undefined8 param_2)

{
  long *plVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long local_80 [4];
  
  local_80[3] = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1004d2524(param_2);
  uVar5 = FUN_100015208(param_2,uVar3,0x12345678);
  lVar7 = *(long *)(param_1 + 0x80) + -0x18;
  if (*(long *)(param_1 + 0x80) != 0 && lVar7 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar7 + 0x10) == (int)uVar5) goto LAB_1006663b0;
      plVar1 = (long *)(lVar7 + 0x18);
      iVar8 = iVar8 + 1;
      lVar7 = 0;
      if (*plVar1 != 0) {
        lVar7 = *plVar1 + -0x18;
      }
    } while (lVar7 != 0);
  }
  iVar8 = -1;
  if ((*(long *)(param_1 + 0x68) != 0) && (lVar7 = *(long *)(param_1 + 0x68) + -0x2c0, lVar7 != 0))
  {
    lVar9 = 0;
    pbVar2 = (byte *)(DAT_101ea59a8 + 0x1c60e9);
    iVar8 = -1;
    do {
      if (*(long **)(lVar7 + 0x208) != (long *)0x0) {
        lVar10 = *(long *)(**(long **)(lVar7 + 0x208) + (ulong)*pbVar2 * 8 + 8);
        if (lVar10 == 0) {
          FUN_1004d22dc(0);
        }
        lVar10 = *(long *)(lVar10 + 8);
        if ((lVar10 != 0) && (iVar4 = FUN_1010af928(lVar10,uVar5), iVar4 != 0)) {
          local_80[1] = 0;
          local_80[2] = 0;
          if (lVar9 == 0) {
            lVar9 = FUN_1006663fc(DAT_101ea59a8,param_1);
            if (lVar9 == 0) goto LAB_10066639c;
            uVar6 = FUN_1010af960(lVar10,uVar5);
            iVar8 = *(int *)(param_1 + 0x90) + -1;
            if ((int)uVar6 != 0) {
              FUN_1006665e4(lVar9,local_80 + 1,uVar6);
            }
            *(int *)(lVar9 + 0x10) = (int)uVar5;
            *(ushort *)(lVar9 + 0x14) = *(ushort *)(lVar9 + 0x14) | 0x1f8;
          }
          *(undefined1 *)(lVar7 + 0x2a8) = 1;
          local_80[0] = lVar9;
          FUN_10066b4f0(lVar7 + 0x2b0,local_80);
        }
      }
LAB_10066639c:
      plVar1 = (long *)(lVar7 + 0x2c0);
      lVar7 = 0;
      if (*plVar1 != 0) {
        lVar7 = *plVar1 + -0x2c0;
      }
    } while (lVar7 != 0);
  }
LAB_1006663b0:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80[3]) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1006663f0(void)

{
  return DAT_101ea59a8;
}




ushort * FUN_1006663fc(int *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar5 = *(ushort *)(param_1 + 0x7182c);
  if ((ulong)uVar5 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(param_1 + (ulong)uVar5 * 8 + 0x7102c);
    if (uVar5 == *(ushort *)((long)param_1 + 0x1c60b2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar3;
    }
    puVar4 = puVar3 + 0xc;
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(ushort *)(param_1 + 0x7182c) = uVar5;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = puVar3[10] & 0xfe00 | 0x1f8;
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    param_1[0x7182d] = param_1[0x7182d] + 1;
    if (*(long *)(param_2 + 0x80) == 0) {
      *(ushort **)(param_2 + 0x80) = puVar4;
    }
    else {
      **(undefined8 **)(param_2 + 0x88) = puVar4;
    }
    *(ushort **)(param_2 + 0x88) = puVar4;
    *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + 1;
  }
  *param_1 = 0;
  return puVar3;
}




void FUN_1006664c8(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != -1) &&
     (lVar2 = *(long *)(param_1 + 0x80) + -0x18, *(long *)(param_1 + 0x80) != 0 && lVar2 != 0)) {
    param_2 = param_2 + 1;
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        FUN_100666514(lVar2,param_3,param_4);
        return;
      }
      plVar1 = (long *)(lVar2 + 0x18);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -0x18;
      }
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100666514(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  switch(param_3) {
  case 1:
    *param_2 = *param_1;
    return;
  case 2:
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    return;
  case 3:
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return;
  case 4:
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
  }
  return;
}




void FUN_100666598(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((param_2 != -1) &&
     (lVar2 = *(long *)(param_1 + 0x80) + -0x18, *(long *)(param_1 + 0x80) != 0 && lVar2 != 0)) {
    param_2 = param_2 + 1;
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        FUN_1006665e4(lVar2,param_3,param_4);
        return;
      }
      plVar1 = (long *)(lVar2 + 0x18);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -0x18;
      }
    } while (lVar2 != 0);
  }
  return;
}




void FUN_1006665e4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  
  switch(param_3) {
  case 1:
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = 1;
    break;
  case 2:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = 0;
    uVar1 = 2;
    break;
  case 3:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    uVar1 = 3;
    break;
  case 4:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    uVar2 = param_2[3];
    uVar1 = 4;
    goto LAB_10066667c;
  default:
    goto switchD_100666604_default;
  }
  uVar2 = 0;
LAB_10066667c:
  param_1[3] = uVar2;
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xfff8 | uVar1;
switchD_100666604_default:
  return;
}




uint FUN_100666694(long param_1)

{
  return 0xa1U >> (ulong)((*(ushort *)(param_1 + 100) ^ 4) & 7) & 1;
}




void FUN_1006666b0(float param_1,long param_2)

{
  *(float *)(param_2 + 0x60) = *(float *)(param_2 + 0x5c) + param_1;
  return;
}




void FUN_1006666c0(float param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  undefined1 auStack_88 [16];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = *(ushort *)(param_2 + 100);
  param_1 = *(float *)(param_2 + 0x58) + param_1;
  if ((uVar3 >> 10 & 1) != 0) {
    *(float *)(param_2 + 0x58) = param_1;
    goto LAB_1006669b4;
  }
  *(undefined4 *)(param_2 + 0x58) = 0;
  uVar5 = (uint)uVar3;
  uVar2 = uVar5 & 0xffffffc7;
  uVar4 = (uVar3 & 7) << 3 | uVar2;
  *(short *)(param_2 + 100) = (short)uVar4;
  if ((uVar5 & 7) == 1) {
    fVar8 = *(float *)(param_2 + 0x60);
    if (fVar8 == 0.0) {
      if ((*(long *)(param_2 + 0x68) != 0) &&
         (lVar7 = *(long *)(param_2 + 0x68) + -0x2c0, lVar7 != 0)) {
        do {
          if ((*(char *)(lVar7 + 0x248) != '\0') ||
             ((0.0 < *(float *)(lVar7 + 0x250) &&
              (*(float *)(param_2 + 0x5c) - *(float *)(lVar7 + 0x24c) < *(float *)(lVar7 + 0x250))))
             ) goto LAB_1006667b4;
          plVar1 = (long *)(lVar7 + 0x2c0);
          lVar7 = 0;
          if (*plVar1 != 0) {
            lVar7 = *plVar1 + -0x2c0;
          }
        } while (lVar7 != 0);
      }
      uVar4 = uVar2 | 0x20;
LAB_100666788:
      *(short *)(param_2 + 100) = (short)uVar4;
    }
    else if ((0.0 < fVar8) && (fVar8 < *(float *)(param_2 + 0x5c))) {
      uVar4 = uVar2 | 0x20;
      *(short *)(param_2 + 100) = (short)uVar4;
      if ((uVar3 >> 0xb & 1) != 0) {
        uVar4 = uVar5 & 0xffffffc0 | 0x25;
        goto LAB_100666788;
      }
    }
  }
LAB_1006667b4:
  uVar2 = uVar4 >> 3 & 7;
  if ((uVar2 < 5) && ((1 << (ulong)uVar2 & 0x1aU) != 0)) {
    fVar8 = *(float *)(param_2 + 0x5c);
    FUN_10109b42c(&local_288);
    if ((*(long *)(param_2 + 0x80) != 0) && (lVar7 = *(long *)(param_2 + 0x80) + -0x18, lVar7 != 0))
    {
      iVar6 = 0;
      do {
        if (-1 < (short)(*(ushort *)(lVar7 + 0x14) << 7)) {
          uVar3 = *(ushort *)(lVar7 + 0x14) & 7;
          FUN_100666514(lVar7,auStack_88,uVar3);
          FUN_10109b474(iVar6,auStack_88,uVar3,&local_288);
        }
        plVar1 = (long *)(lVar7 + 0x18);
        iVar6 = iVar6 + 1;
        lVar7 = 0;
        if (*plVar1 != 0) {
          lVar7 = *plVar1 + -0x18;
        }
      } while (lVar7 != 0);
    }
    lVar7 = *(long *)(param_2 + 0x68) + -0x2c0;
    if (*(long *)(param_2 + 0x68) != 0 && lVar7 != 0) {
      do {
        FUN_100666a00(fVar8,param_1,lVar7,param_3,1 < (uVar2 - 3 & 0xffff),param_2,param_2,
                      &local_288);
        plVar1 = (long *)(lVar7 + 0x2c0);
        lVar7 = 0;
        if (*plVar1 != 0) {
          lVar7 = *plVar1 + -0x2c0;
        }
      } while (lVar7 != 0);
    }
    *(float *)(param_2 + 0x5c) = fVar8 + param_1;
    uVar4 = (uint)*(ushort *)(param_2 + 100);
  }
  if ((uVar4 & 0x38) == 0x20) {
    if ((*(long *)(param_2 + 0x68) != 0) && (lVar7 = *(long *)(param_2 + 0x68) + -0x2c0, lVar7 != 0)
       ) {
      iVar6 = 0;
      do {
        iVar6 = *(int *)(lVar7 + 0x200) + iVar6;
        plVar1 = (long *)(lVar7 + 0x2c0);
        lVar7 = 0;
        if (*plVar1 != 0) {
          lVar7 = *plVar1 + -0x2c0;
        }
      } while (lVar7 != 0);
      if (iVar6 != 0) goto LAB_1006668f8;
    }
    *(ushort *)(param_2 + 100) = (ushort)uVar4 & 0xffcf | 0x28;
  }
LAB_1006668f8:
  if (((uVar4 & 7) < 5) && ((1 << (ulong)(uVar4 & 7) & 0x1aU) != 0)) {
    local_288 = 3.4028235e+38;
    fStack_284 = 3.4028235e+38;
    fStack_27c = -3.4028235e+38;
    fStack_280 = 3.4028235e+38;
    local_278 = fStack_27c;
    fStack_274 = fStack_27c;
    if (*(long *)(param_2 + 0x68) != 0) {
      lVar7 = *(long *)(param_2 + 0x68) + -0x2c0;
      while (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x200) != 0) {
          FUN_100666c90(lVar7,param_3,param_2,&local_288);
        }
        plVar1 = (long *)(lVar7 + 0x2c0);
        lVar7 = 0;
        if (*plVar1 != 0) {
          lVar7 = *plVar1 + -0x2c0;
        }
      }
    }
    if (((local_288 <= fStack_27c) && (fStack_284 <= local_278)) && (fStack_280 <= fStack_274)) {
      *(ulong *)(param_2 + 0x48) = CONCAT44(fStack_27c,fStack_280);
      *(ulong *)(param_2 + 0x40) = CONCAT44(fStack_284,local_288);
      *(ulong *)(param_2 + 0x50) = CONCAT44(fStack_274,local_278);
    }
  }
LAB_1006669b4:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100666a00(float param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  FUN_10066b570();
  if (*(char *)(param_3 + 0x248) == '\0') {
    param_1 = param_1 - *(float *)(param_3 + 0x24c);
joined_r0x000100666a74:
    if ((param_5 & 1) != 0) {
      fVar3 = *(float *)(param_3 + 0x250);
      if (fVar3 <= 0.0) {
        FUN_10066b730(param_1,param_3,param_4);
      }
      else {
        FUN_10066b730(param_1,param_3,param_4);
        if (fVar3 < param_1) goto LAB_100666ae8;
      }
      if ((*(uint *)(param_3 + 0x220) & 0xc00) != 0) {
        param_6 = 0;
      }
      FUN_10066b7f0(param_1,param_2,param_3,param_4,param_6,param_8);
      goto LAB_100666ae8;
    }
  }
  else {
    if (*(float *)(param_3 + 0x24c) <= param_1) {
      *(undefined1 *)(param_3 + 0x248) = 0;
      param_1 = 0.0;
      goto joined_r0x000100666a74;
    }
    param_1 = 0.0;
    if ((param_5 & 1) != 0) {
      param_1 = 0.0;
    }
  }
  FUN_10066b730(param_1,param_3,param_4);
LAB_100666ae8:
  if (*(int *)(param_3 + 0x200) == 0) {
    return;
  }
  if (*(long *)(param_3 + 600) != 0) {
    FUN_10066b968(param_1,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x260) != 0) {
    FUN_10066baac(param_1,param_2,param_3,param_4,param_8);
  }
  FUN_10066bc1c(param_2,param_3,param_4);
  if (*(long *)(param_3 + 0x268) != 0) {
    FUN_10066bc68(param_1,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x270) != 0) {
    FUN_10066bdbc(param_1,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x278) != 0) {
    FUN_10066bef0(param_1,param_2,param_3,param_4,param_8);
  }
  if (*(long *)(param_3 + 0x280) != 0) {
    FUN_10066c008(param_1,param_3,param_4,param_8);
  }
  uVar1 = *(uint *)(param_3 + 0x220) & 0xf;
  if (uVar1 == 6) {
    uVar2 = FUN_100666230(param_7,"beam_target");
    FUN_1006664c8(param_7,uVar2,param_3 + 0x224,3);
    uVar2 = FUN_100666230(param_7,"beam_target_tangent");
    FUN_1006664c8(param_7,uVar2,param_3 + 0x230,3);
    uVar2 = FUN_100666230(param_7,"beam_source_tangent");
    param_3 = param_3 + 0x23c;
  }
  else {
    if (uVar1 != 5) {
      return;
    }
    uVar2 = FUN_100666230(param_7,"beam_target");
    param_3 = param_3 + 0x224;
  }
  FUN_1006664c8(param_7,uVar2,param_3,3);
  return;
}




void FUN_100666c90(ushort *param_1,long param_2,long param_3,float *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ushort *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_38;
  float fStack_30;
  float afStack_2c [3];
  undefined8 local_20;
  float local_18;
  undefined8 local_10;
  float local_8;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 != 0) {
    fStack_30 = 3.4028235e+38;
    afStack_2c[2] = -3.4028235e+38;
    puVar5 = param_1;
    uVar3 = uVar2;
    fVar8 = fStack_30;
    fVar7 = fStack_30;
    afStack_2c[0] = afStack_2c[2];
    afStack_2c[1] = afStack_2c[2];
    do {
      uVar1 = *puVar5;
      fVar9 = *(float *)(param_2 + (ulong)uVar1 * 0xc);
      fVar10 = *(float *)(param_2 + (ulong)((uint)uVar1 * 3 + 1) * 4);
      uVar12 = *(undefined8 *)(param_2 + (ulong)uVar1 * 8 + 0x30000);
      fVar14 = *(float *)(param_2 + (ulong)((uint)uVar1 * 3 + 2) * 4);
      fVar11 = (float)uVar12 * 0.5;
      fVar13 = (float)((ulong)uVar12 >> 0x20) * 0.5;
      fVar11 = SQRT(fVar11 * fVar11 + fVar13 * fVar13);
      fVar8 = (float)NEON_fminnm(fVar8,fVar9 - fVar11);
      fVar7 = (float)NEON_fminnm(fVar7,fVar10 - fVar11);
      fVar9 = fVar11 + fVar9;
      fStack_30 = (float)NEON_fminnm(fStack_30,fVar14 - fVar11);
      fVar10 = fVar11 + fVar10;
      fVar11 = fVar11 + fVar14;
      if (afStack_2c[0] <= fVar9) {
        afStack_2c[0] = fVar9;
      }
      if (afStack_2c[1] <= fVar10) {
        afStack_2c[1] = fVar10;
      }
      if (afStack_2c[2] <= fVar11) {
        afStack_2c[2] = fVar11;
      }
      uVar3 = uVar3 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar3 != 0);
    local_38 = CONCAT44(fVar7,fVar8);
    uVar3 = *(uint *)(param_1 + 0x110);
    if ((uVar3 & 0xc00) == 0x400) {
      lVar4 = 0;
      local_10 = local_38;
      local_8 = fStack_30;
      local_20 = CONCAT44(afStack_2c[1],afStack_2c[0]);
      local_18 = afStack_2c[2];
      fVar7 = *(float *)(param_3 + 0x30);
      local_38 = *(undefined8 *)(param_3 + 0x30);
      fStack_30 = *(float *)(param_3 + 0x38);
      afStack_2c[1] = *(float *)(param_3 + 0x34);
      afStack_2c[2] = *(float *)(param_3 + 0x38);
      fVar8 = fVar7;
      afStack_2c[0] = fVar7;
      while( true ) {
        lVar6 = 0;
        do {
          fVar9 = *(float *)(param_3 + lVar6 * 4);
          fVar10 = *(float *)((long)&local_10 + lVar6) * fVar9;
          fVar9 = (float)NEON_fminnm(fVar10,*(float *)((long)&local_20 + lVar6) * fVar9);
          fVar8 = fVar9 + fVar8;
          fVar7 = fVar7 + fVar10;
          lVar6 = lVar6 + 4;
        } while (lVar6 != 0xc);
        *(float *)((long)&local_38 + lVar4 * 4) = fVar8;
        afStack_2c[lVar4] = fVar7;
        lVar4 = lVar4 + 1;
        if (lVar4 == 3) break;
        fVar8 = *(float *)((long)&local_38 + lVar4 * 4);
        fVar7 = afStack_2c[lVar4];
        param_3 = param_3 + 4;
      }
    }
    if ((uVar3 & 0xf) - 5 < 2) {
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      fVar8 = 0.0;
      puVar5 = param_1;
      do {
        fVar7 = *(float *)(param_2 + (ulong)*puVar5 * 8 + 0x30004) * 0.5;
        fVar7 = fVar7 * fVar7;
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar2 != 0);
      fVar8 = SQRT(fVar8);
      fVar7 = (float)*(undefined8 *)(param_1 + 0x112);
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x112) >> 0x20);
      local_38 = NEON_fminnm(local_38,CONCAT44(fVar9 - fVar8,fVar7 - fVar8),4);
      fStack_30 = (float)NEON_fminnm(fStack_30,*(float *)(param_1 + 0x116) - fVar8);
      uVar12 = NEON_fmaxnm(CONCAT44(afStack_2c[1],afStack_2c[0]),
                           CONCAT44(fVar9 + fVar8,fVar7 + fVar8),4);
      afStack_2c[0] = (float)uVar12;
      afStack_2c[1] = (float)((ulong)uVar12 >> 0x20);
    }
    fVar8 = param_4[3];
    if (*param_4 <= fVar8) {
      fVar7 = param_4[4];
      if (param_4[1] <= fVar7) {
        fVar9 = param_4[5];
        if (param_4[2] <= fVar9) {
          fVar10 = (float)NEON_fminnm(*param_4,(undefined4)local_38);
          fVar13 = (float)NEON_fminnm(param_4[1],local_38._4_4_);
          fVar11 = (float)NEON_fminnm(param_4[2],fStack_30);
          *param_4 = fVar10;
          param_4[1] = fVar13;
          if (fVar8 <= afStack_2c[0]) {
            fVar8 = afStack_2c[0];
          }
          if (fVar7 <= afStack_2c[1]) {
            fVar7 = afStack_2c[1];
          }
          if (fVar9 <= afStack_2c[2]) {
            fVar9 = afStack_2c[2];
          }
          param_4[2] = fVar11;
          param_4[3] = fVar8;
          param_4[4] = fVar7;
          param_4[5] = fVar9;
          return;
        }
      }
    }
    *(ulong *)(param_4 + 2) = CONCAT44(afStack_2c[0],fStack_30);
    *(undefined8 *)param_4 = local_38;
    *(ulong *)(param_4 + 4) = CONCAT44(afStack_2c[2],afStack_2c[1]);
  }
  return;
}




void FUN_100666f14(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 unaff_d8;
  float unaff_s9;
  float *pfVar27;
  float local_160;
  float fStack_15c;
  float local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88;
  float fStack_84;
  float local_80;
  
  uVar25 = *param_4;
  fVar23 = *(float *)(param_4 + 1);
  uVar20 = param_4[2];
  fVar22 = *(float *)(param_4 + 3);
  uVar17 = param_4[4];
  fVar18 = *(float *)(param_4 + 5);
  uVar26 = param_4[6];
  fVar16 = *(float *)(param_4 + 7);
  lVar10 = *(long *)(param_1 + 0x68);
  puVar13 = (ushort *)(lVar10 + -0x2c0);
  fVar19 = (float)uVar26;
  fVar21 = (float)((ulong)uVar26 >> 0x20);
  puVar11 = puVar13;
  local_d0 = uVar17;
  local_c8 = fVar18;
  local_c0 = uVar20;
  local_b8 = fVar22;
  local_b0 = uVar25;
  local_a8 = fVar23;
  if (lVar10 != 0) {
    while (puVar11 != (ushort *)0x0) {
      if ((*(uint *)(puVar11 + 0x110) & 0xc00) == 0x400) {
        FUN_10002ee14(&local_140,param_1);
        fVar24 = (float)uVar25;
        fVar14 = (float)((ulong)uVar25 >> 0x20);
        local_e0 = CONCAT44(fStack_13c * fVar24 + fStack_12c * fVar14 + fStack_11c * fVar23,
                            local_140 * fVar24 + local_130 * fVar14 + local_120 * fVar23);
        local_d8 = fStack_138 * fVar24 + fStack_128 * fVar14 + fVar23 * fStack_118;
        fVar23 = (float)uVar20;
        fVar24 = (float)((ulong)uVar20 >> 0x20);
        local_f0 = CONCAT44(fStack_13c * fVar23 + fStack_12c * fVar24 + fStack_11c * fVar22,
                            local_140 * fVar23 + local_130 * fVar24 + local_120 * fVar22);
        local_e8 = fStack_138 * fVar23 + fStack_128 * fVar24 + fVar22 * fStack_118;
        fVar22 = (float)uVar17;
        fVar23 = (float)((ulong)uVar17 >> 0x20);
        local_100 = CONCAT44(fStack_13c * fVar22 + fStack_12c * fVar23 + fStack_11c * fVar18,
                             local_140 * fVar22 + local_130 * fVar23 + local_120 * fVar18);
        local_f8 = fStack_138 * fVar22 + fStack_128 * fVar23 + fVar18 * fStack_118;
        unaff_d8 = CONCAT44(fStack_13c * fVar19 + fStack_12c * fVar21 + fStack_11c * fVar16 +
                            fStack_10c,
                            local_140 * fVar19 + local_130 * fVar21 + local_120 * fVar16 + local_110
                           );
        unaff_s9 = fStack_138 * fVar19 + fStack_128 * fVar21 + fVar16 * fStack_118 + fStack_108;
        lVar10 = *(long *)(param_1 + 0x68);
        puVar13 = (ushort *)(lVar10 + -0x2c0);
        break;
      }
      puVar1 = puVar11 + 0x160;
      puVar11 = (ushort *)0x0;
      if (*(long *)puVar1 != 0) {
        puVar11 = (ushort *)(*(long *)puVar1 + -0x2c0);
      }
    }
  }
  if ((lVar10 != 0) && (puVar13 != (ushort *)0x0)) {
    lVar10 = param_2 + 0x18000;
    lVar2 = param_2 + 0x30000;
    lVar3 = param_2 + 0x40000;
    lVar4 = param_2 + 0x58000;
    do {
      iVar9 = *(int *)(puVar13 + 0x100);
      if (iVar9 == 0) goto switchD_1006670e8_caseD_3;
      uVar6 = *(uint *)(puVar13 + 0x110);
      bVar8 = (byte)(uVar6 >> 0x18);
      switch(uVar6 & 0xf) {
      case 0:
      case 1:
        local_150 = (float)*(undefined8 *)(puVar13 + 0x10a);
        fStack_14c = (float)((ulong)*(undefined8 *)(puVar13 + 0x10a) >> 0x20);
        puVar12 = &local_f0;
        pfVar27 = (float *)&local_e0;
        if ((uVar6 & 0xc00) != 0x400) {
          puVar12 = &local_c0;
          pfVar27 = (float *)&local_b0;
        }
        switch(uVar6 >> 4 & 0xf) {
        case 0:
        case 1:
          goto LAB_10066752c;
        case 2:
          puVar12 = &local_100;
          if ((uVar6 & 0xc00) != 0x400) {
            puVar12 = &local_d0;
          }
          param_3 = (undefined8 *)
                    FUN_1006654c4(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,&local_150,lVar10,
                                  puVar12);
          break;
        case 3:
          local_88 = -0.0;
          fStack_84 = -0.0;
          local_80 = -1.0;
          goto LAB_10066751c;
        case 4:
          param_3 = (undefined8 *)
                    FUN_100665100(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,&local_150,1);
          break;
        case 5:
          local_88 = 1.0;
          fStack_84 = 0.0;
          local_80 = 0.0;
LAB_10066751c:
          uStack_98 = uStack_98 & 0xffffffff00000000;
          local_a0 = 0x3f80000000000000;
          pfVar27 = &local_88;
          puVar12 = &local_a0;
LAB_10066752c:
          param_3 = (undefined8 *)
                    FUN_1006651d0(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,&local_150,puVar12
                                  ,pfVar27);
        }
        break;
      case 2:
        puVar11 = puVar13;
        do {
          puVar12 = (undefined8 *)(param_2 + (ulong)*puVar11 * 0xc);
          lVar5 = param_2 + (ulong)*puVar11 * 0x10;
          uStack_98 = *(ulong *)(lVar5 + 0x58008);
          local_a0 = *(undefined8 *)(lVar5 + 0x58000);
          uVar17 = *puVar12;
          *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar12 + 1);
          *param_3 = uVar17;
          *(ulong *)((long)param_3 + 0x14) = uStack_98;
          *(undefined8 *)((long)param_3 + 0xc) = local_a0;
          param_3 = (undefined8 *)((long)param_3 + 0x24);
          iVar9 = iVar9 + -1;
          puVar11 = puVar11 + 1;
        } while (iVar9 != 0);
        break;
      case 4:
        local_a0 = uVar26;
        fVar18 = fVar16;
        if ((uVar6 & 0xc00) == 0x400) {
          local_a0 = unaff_d8;
          fVar18 = unaff_s9;
        }
        uStack_98 = CONCAT44(uStack_98._4_4_,fVar18);
        param_3 = (undefined8 *)FUN_10066469c(param_3,iVar9,puVar13,param_2,lVar2,lVar4,&local_a0);
        break;
      case 5:
        fVar18 = *(float *)(puVar13 + 0x116);
        local_a0 = *(undefined8 *)(puVar13 + 0x112);
        local_88 = fVar19;
        fStack_84 = fVar21;
        local_80 = fVar16;
        if ((uVar6 & 0xc00) == 0x400) {
          local_a0._4_4_ = (float)((ulong)local_a0 >> 0x20);
          fVar22 = local_120 * fVar18;
          fVar23 = fStack_11c * fVar18;
          fVar18 = fStack_138 * (float)local_a0 + local_a0._4_4_ * fStack_128 + fVar18 * fStack_118
                   + fStack_108;
          local_88 = (float)unaff_d8;
          fStack_84 = (float)((ulong)unaff_d8 >> 0x20);
          local_a0 = CONCAT44(fStack_13c * (float)local_a0 + fStack_12c * local_a0._4_4_ + fVar23 +
                              fStack_10c,
                              local_140 * (float)local_a0 + local_130 * local_a0._4_4_ + fVar22 +
                              local_110);
          local_80 = unaff_s9;
        }
        uStack_98 = CONCAT44(uStack_98._4_4_,fVar18);
        param_3 = (undefined8 *)
                  FUN_1006649a4(param_3,iVar9,puVar13,param_2,lVar2,lVar4,&local_88,
                                uVar6 >> 0xc & 0x7fff,bVar8 >> 3 & 1,&local_a0);
        break;
      case 6:
        local_88 = (float)*(undefined8 *)(puVar13 + 0x112);
        fStack_84 = (float)((ulong)*(undefined8 *)(puVar13 + 0x112) >> 0x20);
        local_80 = *(float *)(puVar13 + 0x116);
        local_150 = (float)*(undefined8 *)(puVar13 + 0x118);
        fStack_14c = (float)((ulong)*(undefined8 *)(puVar13 + 0x118) >> 0x20);
        local_148 = *(float *)(puVar13 + 0x11c);
        local_160 = (float)*(undefined8 *)(puVar13 + 0x11e);
        fStack_15c = (float)((ulong)*(undefined8 *)(puVar13 + 0x11e) >> 0x20);
        local_158 = *(float *)(puVar13 + 0x122);
        local_a0 = uVar26;
        fVar18 = fVar16;
        if ((uVar6 & 0xc00) == 0x400) {
          fVar18 = local_130 * fStack_84;
          fVar22 = local_120 * local_80;
          fVar23 = fStack_128 * fStack_84;
          fStack_84 = fStack_13c * local_88 + fStack_12c * fStack_84 + fStack_11c * local_80 +
                      fStack_10c;
          local_80 = fStack_138 * local_88 + fVar23 + fStack_118 * local_80 + fStack_108;
          fVar23 = local_130 * fStack_14c;
          fVar24 = local_120 * local_148;
          fVar14 = fStack_128 * fStack_14c;
          fStack_14c = fStack_13c * local_150 + fStack_12c * fStack_14c + fStack_11c * local_148;
          local_148 = fStack_138 * local_150 + fVar14 + fStack_118 * local_148;
          fVar14 = local_130 * fStack_15c;
          fVar7 = local_120 * local_158;
          fVar15 = fStack_128 * fStack_15c;
          fStack_15c = fStack_13c * local_160 + fStack_12c * fStack_15c + fStack_11c * local_158;
          local_158 = fStack_138 * local_160 + fVar15 + fStack_118 * local_158;
          local_160 = local_160 * local_140 + fVar14 + fVar7;
          local_150 = local_150 * local_140 + fVar23 + fVar24;
          local_a0 = unaff_d8;
          local_88 = local_88 * local_140 + fVar18 + fVar22 + local_110;
          fVar18 = unaff_s9;
        }
        uStack_98 = CONCAT44(uStack_98._4_4_,fVar18);
        param_3 = (undefined8 *)
                  FUN_100664c88(param_3,iVar9,puVar13,param_2,lVar2,lVar4,&local_a0,
                                uVar6 >> 0xc & 0x7fff,bVar8 >> 3 & 1,&local_88,&local_150,&local_160
                               );
        break;
      case 7:
        puVar12 = &local_f0;
        pfVar27 = (float *)&local_e0;
        if ((uVar6 & 0xc00) != 0x400) {
          puVar12 = &local_c0;
          pfVar27 = (float *)&local_b0;
        }
        switch(uVar6 >> 4 & 0xf) {
        case 0:
        case 1:
          goto LAB_100667624;
        case 2:
          puVar12 = &local_100;
          if ((uVar6 & 0xc00) != 0x400) {
            puVar12 = &local_d0;
          }
          param_3 = (undefined8 *)
                    FUN_100665aac(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,lVar10,puVar12);
          break;
        case 3:
          local_88 = -0.0;
          fStack_84 = -0.0;
          local_80 = -1.0;
          goto LAB_100667618;
        case 4:
          param_3 = (undefined8 *)FUN_10066585c(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,1);
          break;
        case 5:
          local_88 = 1.0;
          fStack_84 = 0.0;
          local_80 = 0.0;
LAB_100667618:
          uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
          local_a0 = 0x3f80000000000000;
          pfVar27 = &local_88;
          puVar12 = &local_a0;
LAB_100667624:
          param_3 = (undefined8 *)
                    FUN_100665928(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,puVar12,pfVar27);
        }
        break;
      case 8:
        puVar12 = &local_f0;
        pfVar27 = (float *)&local_e0;
        if ((uVar6 & 0xc00) != 0x400) {
          puVar12 = &local_c0;
          pfVar27 = (float *)&local_b0;
        }
        switch(uVar6 >> 4 & 0xf) {
        case 0:
        case 1:
          goto LAB_100667718;
        case 2:
          puVar12 = &local_100;
          if ((uVar6 & 0xc00) != 0x400) {
            puVar12 = &local_d0;
          }
          param_3 = (undefined8 *)
                    FUN_100665f3c(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,lVar10,puVar12);
          break;
        case 3:
          local_88 = -0.0;
          fStack_84 = -0.0;
          local_80 = -1.0;
          goto LAB_10066770c;
        case 4:
          param_3 = (undefined8 *)FUN_100665cec(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,1);
          break;
        case 5:
          local_88 = 1.0;
          fStack_84 = 0.0;
          local_80 = 0.0;
LAB_10066770c:
          uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
          local_a0 = 0x3f80000000000000;
          pfVar27 = &local_88;
          puVar12 = &local_a0;
LAB_100667718:
          param_3 = (undefined8 *)
                    FUN_100665db8(param_3,iVar9,puVar13,param_2,lVar2,lVar3,lVar4,puVar12,pfVar27);
        }
      }
switchD_1006670e8_caseD_3:
      puVar11 = puVar13 + 0x160;
      puVar13 = (ushort *)0x0;
      if (*(long *)puVar11 != 0) {
        puVar13 = (ushort *)(*(long *)puVar11 + -0x2c0);
      }
    } while (puVar13 != (ushort *)0x0);
  }
  return;
}




long FUN_100667770(long param_1)

{
  return param_1 + 0x40;
}




undefined8 * FUN_100667778(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  
  *(undefined4 *)(param_1 + 0x17) = param_2;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0x17) = 0;
    *param_1 = &PTR_FUN_1014a87d0;
    param_1[2] = 0;
    param_1[1] = 0x3f800000;
    param_1[8] = 0x3f80000000000000;
    param_1[7] = 0;
    param_1[6] = 0x3f800000;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 1;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = FUN_100664558;
    param_1[0xd] = FUN_100664514;
    *param_1 = &PTR_FUN_1014a87f8;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = FUN_10066461c;
    pcVar1 = FUN_100664660;
    goto LAB_1006679c0;
  case 1:
    *(undefined4 *)(param_1 + 0x17) = 1;
    *param_1 = &PTR_FUN_1014a87d0;
    param_1[2] = 0;
    param_1[1] = 0x3f800000;
    param_1[8] = 0x3f80000000000000;
    param_1[7] = 0;
    param_1[6] = 0x3f800000;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 1;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = FUN_100664558;
    param_1[0xd] = FUN_100664514;
    *param_1 = &PTR_FUN_1014a8820;
    param_1[0x10] = 0;
    param_1[0x11] = FUN_1006645ac;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x17) = 2;
    *param_1 = &PTR_FUN_1014a87d0;
    param_1[2] = 0;
    param_1[1] = 0x3f800000;
    param_1[8] = 0x3f80000000000000;
    param_1[7] = 0;
    param_1[6] = 0x3f800000;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 1;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = FUN_100664558;
    param_1[0xd] = FUN_100664514;
    *param_1 = &PTR_FUN_1014a8848;
    param_1[0x10] = 0;
    param_1[0x11] = FUN_10066461c;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x12] = FUN_100664660;
    param_1[0x13] = FUN_100664660;
    param_1[0x14] = FUN_100664660;
    param_1[0x15] = FUN_100664660;
    *(undefined1 *)(param_1 + 0x16) = 0;
    return param_1;
  case 3:
    *(undefined4 *)(param_1 + 0x17) = 3;
    *param_1 = &PTR_FUN_1014a87d0;
    param_1[2] = 0;
    param_1[1] = 0x3f800000;
    param_1[8] = 0x3f80000000000000;
    param_1[7] = 0;
    param_1[6] = 0x3f800000;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x4c) = 1;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = FUN_100664558;
    param_1[0xd] = FUN_100664514;
    *param_1 = &PTR_FUN_1014a8870;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = FUN_100664568;
    break;
  default:
    return (undefined8 *)0x0;
  }
  pcVar1 = FUN_1006645f0;
LAB_1006679c0:
  param_1[0x12] = pcVar1;
  return param_1;
}




int FUN_1006679c8(undefined8 param_1,float param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float local_48;
  float local_44;
  
  local_44 = 0.0;
  if ((*(code **)(param_3 + 0x58) != (code *)0x0) &&
     ((**(code **)(param_3 + 0x58))(param_1,1,&local_44,0,0,param_4), local_44 < 0.0)) {
    local_44 = 0.0;
  }
  fVar3 = *(float *)(param_3 + 0x48) + param_2 * local_44;
  iVar2 = (int)fVar3;
  *(float *)(param_3 + 0x48) = fVar3 - (float)(int)fVar3;
  if (*(char *)(param_3 + 0x4c) != '\0') {
    local_48 = 0.0;
    iVar1 = 0;
    if (*(code **)(param_3 + 0x50) != (code *)0x0) {
      (**(code **)(param_3 + 0x50))(param_1,1,&local_48,0,0,param_4);
      iVar1 = (int)local_48;
    }
    iVar2 = iVar1 + iVar2;
    *(undefined1 *)(param_3 + 0x4c) = 0;
  }
  return iVar2;
}




void FUN_100667aa4(undefined8 param_1,long *param_2,long param_3,ulong param_4,ushort *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  long lVar5;
  
  if ((int)param_4 == 0) {
    (**(code **)(*param_2 + 0x10))
              (param_1,param_2,param_3,param_4,param_5,param_3,param_3 + 0x18000,param_6,param_7);
  }
  else {
    lVar5 = 0;
    uVar4 = param_4 & 0xffffffff;
    do {
      iVar2 = _rand();
      *(float *)(param_3 + (ulong)*(ushort *)((long)param_5 + lVar5) * 4 + 0x78000) =
           (float)iVar2 * 4.656613e-10;
      lVar5 = lVar5 + 2;
    } while (uVar4 * 2 - lVar5 != 0);
    (**(code **)(*param_2 + 0x10))
              (param_1,param_2,param_3,param_4,param_5,param_3,param_3 + 0x18000,param_6,param_7);
    puVar3 = param_5;
    do {
      *(int *)(param_3 + (ulong)*puVar3 * 4 + 0x48000) = (int)param_1;
      uVar4 = uVar4 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (param_2[0xc] != 0) {
    FUN_100667d70(param_1,param_3,param_2[0xc],param_4,param_5,param_3 + 0x58000,param_7);
  }
  if (param_2[0xd] != 0) {
    FUN_100667e4c(param_1,param_3,param_2[0xd],param_4,param_5,param_7);
  }
  if (param_2[0xe] != 0) {
    FUN_100667f70(param_1,param_3,param_2[0xe],param_4,param_5,param_3 + 0x30000,param_7);
  }
  if (param_2[0xf] != 0) {
    FUN_10066805c(param_1,param_3,param_2[0xf],param_4,param_5,param_3 + 0x40000,param_7);
  }
  if (param_2[0x10] != 0) {
    FUN_100668138(param_1,param_3,param_2[0x10],param_4,param_5,param_3 + 0x50000,param_7);
  }
  if (((((param_2[0xc] == 0) || (param_2[0xe] == 0)) || (param_2[0xf] == 0)) || (param_2[0x10] == 0)
      ) && ((int)param_4 != 0)) {
    param_4 = param_4 & 0xffffffff;
    do {
      uVar1 = *param_5;
      uVar4 = (ulong)uVar1;
      if (param_2[0xe] == 0) {
        *(undefined8 *)(param_3 + uVar4 * 8 + 0x30000) = 0x3dcccccd3dcccccd;
      }
      if (param_2[0xf] == 0) {
        *(undefined4 *)(param_3 + uVar4 * 4 + 0x40000) = 0;
      }
      if (param_2[0x10] == 0) {
        *(undefined4 *)(param_3 + uVar4 * 4 + 0x50000) = 0x3f800000;
      }
      if (param_2[0xc] == 0) {
        iVar2 = _rand();
        lVar5 = param_3 + 0x58000;
        *(float *)(lVar5 + uVar4 * 0x10) = (float)iVar2 * 2.3283064e-10 + 0.5;
        iVar2 = _rand();
        *(float *)(lVar5 + (ulong)((uint)uVar1 << 2 | 1) * 4) = (float)iVar2 * 2.3283064e-10 + 0.5;
        iVar2 = _rand();
        *(float *)(lVar5 + (ulong)((uint)uVar1 << 2 | 2) * 4) = (float)iVar2 * 2.3283064e-10 + 0.5;
        *(undefined4 *)(lVar5 + (ulong)((uint)uVar1 << 2 | 3) * 4) = 0x3f800000;
      }
      param_5 = param_5 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return;
}




void FUN_100667d70(undefined8 param_1,code *param_2,ulong param_3,ushort *param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_101444218;
  iVar6 = (int)param_3;
  lVar4 = (ulong)(uint)(iVar6 << 2) * -4;
  puVar8 = (undefined8 *)((long)alStack_40 + lVar4);
  iVar5 = (*param_2)(param_3,puVar8,param_4,param_1,param_6);
  if (iVar5 == 1) {
    if (iVar6 != 0) {
      uVar10 = *(undefined8 *)((long)alStack_40 + lVar4 + 8);
      uVar9 = *puVar8;
      do {
        puVar8 = (undefined8 *)(param_5 + (ulong)*param_4 * 0x10);
        puVar8[1] = uVar10;
        *puVar8 = uVar9;
        uVar1 = (int)param_3 - 1;
        param_3 = (ulong)uVar1;
        param_4 = param_4 + 1;
      } while (uVar1 != 0);
    }
  }
  else if (iVar6 != 0) {
    uVar7 = 0;
    do {
      puVar2 = (undefined8 *)((long)puVar8 + (uVar7 & 0xfffffffc) * 4);
      uVar9 = *puVar2;
      puVar3 = (undefined8 *)(param_5 + (ulong)*param_4 * 0x10);
      puVar3[1] = puVar2[1];
      *puVar3 = uVar9;
      uVar7 = uVar7 + 4;
      param_4 = param_4 + 1;
    } while ((param_3 & 0xffffffff) * 4 - uVar7 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != alStack_40[1]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100667e4c(long param_1,code *param_2,ulong param_3,ushort *param_4)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float afStack_50 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar7 = param_3 & 0xffffffff;
  pfVar6 = (float *)((long)afStack_50 - (uVar7 * 4 + 0xf & 0x7fffffff0));
  iVar4 = (*param_2)(param_3,pfVar6,param_4,param_1);
  if (iVar4 == 1) {
    if ((int)param_3 != 0) {
      fVar8 = *pfVar6;
      do {
        uVar3 = *param_4;
        lVar2 = param_1 + 0x18000;
        lVar5 = (ulong)uVar3 * 0xc;
        uVar9 = *(undefined8 *)(lVar2 + lVar5);
        *(ulong *)(lVar2 + lVar5) =
             CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar8,(float)uVar9 * fVar8);
        uVar1 = (uint)uVar3 * 3 + 2;
        *(float *)(lVar2 + (ulong)uVar1 * 4) = *(float *)(lVar2 + (ulong)uVar1 * 4) * fVar8;
        uVar1 = (int)param_3 - 1;
        param_3 = (ulong)uVar1;
        param_4 = param_4 + 1;
      } while (uVar1 != 0);
    }
  }
  else if ((int)param_3 != 0) {
    do {
      uVar3 = *param_4;
      fVar8 = *pfVar6;
      lVar2 = param_1 + 0x18000;
      lVar5 = (ulong)uVar3 * 0xc;
      uVar9 = *(undefined8 *)(lVar2 + lVar5);
      *(ulong *)(lVar2 + lVar5) =
           CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar8,(float)uVar9 * fVar8);
      uVar1 = (uint)uVar3 * 3 + 2;
      *(float *)(lVar2 + (ulong)uVar1 * 4) = *(float *)(lVar2 + (ulong)uVar1 * 4) * fVar8;
      uVar7 = uVar7 - 1;
      param_4 = param_4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100667f70(undefined8 param_1,code *param_2,ulong param_3,ushort *param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_101444218;
  iVar3 = (int)param_3;
  puVar5 = (undefined8 *)((long)alStack_40 - ((ulong)(uint)(iVar3 << 1) * 4 + 0xf & 0x7fffffff0));
  iVar2 = (*param_2)(param_3,puVar5,param_4,param_1,param_6);
  if (iVar2 == 1) {
    if (iVar3 != 0) {
      uVar6 = *puVar5;
      do {
        *(undefined8 *)(param_5 + (ulong)*param_4 * 8) = uVar6;
        uVar1 = (int)param_3 - 1;
        param_3 = (ulong)uVar1;
        param_4 = param_4 + 1;
      } while (uVar1 != 0);
    }
  }
  else if (iVar3 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(param_5 + (ulong)*(ushort *)((long)param_4 + uVar4) * 8) =
           *(undefined8 *)((long)puVar5 + (uVar4 & 0xfffffffe) * 4);
      uVar4 = uVar4 + 2;
    } while ((param_3 & 0xffffffff) * 2 - uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != alStack_40[1]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10066805c(undefined8 param_1,code *param_2,ulong param_3,ushort *param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 auStack_50 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = param_3 & 0xffffffff;
  puVar3 = (undefined4 *)((long)auStack_50 - (uVar4 * 4 + 0xf & 0x7fffffff0));
  iVar2 = (*param_2)(param_3,puVar3,param_4,param_1,param_6);
  if (iVar2 == 1) {
    if ((int)param_3 != 0) {
      uVar5 = *puVar3;
      do {
        *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = uVar5;
        uVar1 = (int)param_3 - 1;
        param_3 = (ulong)uVar1;
        param_4 = param_4 + 1;
      } while (uVar1 != 0);
    }
  }
  else if ((int)param_3 != 0) {
    do {
      *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = *puVar3;
      uVar4 = uVar4 - 1;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100668138(undefined8 param_1,code *param_2,ulong param_3,ushort *param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 auStack_50 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = param_3 & 0xffffffff;
  puVar3 = (undefined4 *)((long)auStack_50 - (uVar4 * 4 + 0xf & 0x7fffffff0));
  iVar2 = (*param_2)(param_3,puVar3,param_4,param_1,param_6);
  if (iVar2 == 1) {
    if ((int)param_3 != 0) {
      uVar5 = *puVar3;
      do {
        *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = uVar5;
        uVar1 = (int)param_3 - 1;
        param_3 = (ulong)uVar1;
        param_4 = param_4 + 1;
      } while (uVar1 != 0);
    }
  }
  else if ((int)param_3 != 0) {
    do {
      *(undefined4 *)(param_5 + (ulong)*param_4 * 4) = *puVar3;
      uVar4 = uVar4 - 1;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100668214(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ushort *param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_a8;
  
  local_a8 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_e8 = *(undefined8 *)(param_2 + 0x10);
  local_f0 = *(undefined8 *)(param_2 + 8);
  local_d8 = *(undefined8 *)(param_2 + 0x20);
  local_e0 = *(undefined8 *)(param_2 + 0x18);
  uStack_c8 = *(undefined8 *)(param_2 + 0x30);
  local_d0 = *(undefined8 *)(param_2 + 0x28);
  local_b8 = *(undefined8 *)(param_2 + 0x40);
  local_c0 = *(undefined8 *)(param_2 + 0x38);
  if (param_8 != 0) {
    FUN_10002a9fc(&local_f0,&local_f0,param_8);
  }
  uVar9 = param_4 & 0xffffffff;
  uVar5 = uVar9 * 4 + 0xf & 0x7fffffff0;
  pfVar7 = (float *)((long)&local_f0 - uVar5);
  pfVar8 = (float *)((long)pfVar7 - uVar5);
  (**(code **)(param_2 + 0x88))(param_1,param_4,pfVar7,param_5,param_3,param_9);
  (**(code **)(param_2 + 0x90))(param_1,param_4,pfVar8,param_5,param_3,param_9);
  if ((int)param_4 != 0) {
    do {
      fVar17 = *pfVar7;
      fVar18 = *pfVar8;
      iVar3 = _rand();
      iVar4 = _rand();
      fVar17 = fVar17 * 2.5870072e-12;
      uVar12 = _acosf((float)iVar4 * fVar17 + -1.0);
      fVar10 = (float)___sincosf_stret((float)iVar3 * 9.313226e-10 * 3.1415927);
      fVar13 = fVar17;
      fVar11 = (float)___sincosf_stret(uVar12);
      fVar17 = fVar17 * fVar11;
      fVar10 = fVar10 * fVar11;
      fVar11 = fVar17 * fVar18;
      fVar14 = fVar13 * -fVar18;
      fVar18 = fVar10 * fVar18;
      fVar16 = (float)((ulong)local_e0 >> 0x20);
      fVar15 = (float)((ulong)local_f0 >> 0x20);
      fVar19 = (float)((ulong)local_d0 >> 0x20);
      uVar2 = *param_5;
      lVar6 = (ulong)uVar2 * 0xc;
      *(ulong *)(param_6 + lVar6) =
           CONCAT44(fVar16 * fVar14 + fVar15 * fVar11 + fVar19 * fVar18 +
                    (float)((ulong)local_c0 >> 0x20),
                    (float)local_e0 * fVar14 + (float)local_f0 * fVar11 + (float)local_d0 * fVar18 +
                    (float)local_c0);
      uVar1 = (uint)uVar2 * 3 + 2;
      *(float *)(param_6 + (ulong)uVar1 * 4) =
           (float)uStack_e8 * fVar11 + fVar14 * (float)local_d8 + fVar18 * (float)uStack_c8 +
           (float)local_b8;
      *(ulong *)(param_7 + lVar6) =
           CONCAT44(-(fVar16 * fVar13) + fVar15 * fVar17 + fVar19 * fVar10,
                    -((float)local_e0 * fVar13) + (float)local_f0 * fVar17 +
                    (float)local_d0 * fVar10);
      *(float *)(param_7 + (ulong)uVar1 * 4) =
           ((float)uStack_e8 * fVar17 - (float)local_d8 * fVar13) + fVar10 * (float)uStack_c8;
      uVar9 = uVar9 - 1;
      param_5 = param_5 + 1;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar9 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_a8) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10066845c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ushort *param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  uint uVar1;
  float *pfVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_100;
  float afStack_f8 [2];
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  
  local_a0 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_d8 = *(undefined8 *)(param_2 + 0x10);
  local_e0 = *(undefined8 *)(param_2 + 8);
  local_c8 = *(undefined8 *)(param_2 + 0x20);
  local_d0 = *(undefined8 *)(param_2 + 0x18);
  uStack_b8 = *(undefined8 *)(param_2 + 0x30);
  local_c0 = *(undefined8 *)(param_2 + 0x28);
  local_a8 = *(undefined8 *)(param_2 + 0x40);
  local_b0 = *(undefined8 *)(param_2 + 0x38);
  if (param_8 != 0) {
    FUN_10002a9fc(&local_e0,&local_e0,param_8);
  }
  uVar5 = (ulong)(uint)((int)param_4 * 3) * 4 + 0xf & 0x7fffffff0;
  lVar7 = (long)&local_100 - uVar5;
  lVar8 = lVar7 - uVar5;
  (**(code **)(param_2 + 0x88))(param_1,param_4,lVar7,param_5,param_3,param_9);
  (**(code **)(param_2 + 0x90))(param_1,param_4,lVar8,param_5,param_3,param_9);
  if ((int)param_4 != 0) {
    uVar5 = 0;
    do {
      uVar3 = *param_5;
      lVar6 = (uVar5 & 0xffffffff) * 4;
      fVar14 = *(float *)(lVar7 + lVar6);
      fVar15 = *(float *)(lVar7 + (ulong)((int)uVar5 + 1) * 4);
      fVar16 = *(float *)(lVar7 + (ulong)((int)uVar5 + 2) * 4);
      iVar4 = _rand();
      local_f0 = (ulong)(uint)(fVar14 * 4.656613e-10 * (float)iVar4 - fVar14 * 0.5);
      uStack_e8 = 0;
      iVar4 = _rand();
      local_100 = (ulong)(uint)(fVar15 * 4.656613e-10 * (float)iVar4 - fVar15 * 0.5);
      afStack_f8[0] = 0.0;
      afStack_f8[1] = 0.0;
      iVar4 = _rand();
      fVar14 = fVar16 * 4.656613e-10 * (float)iVar4 - fVar16 * 0.5;
      pfVar2 = (float *)(lVar8 + lVar6);
      fVar16 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar15 = (float)((ulong)local_e0 >> 0x20);
      fVar10 = (float)((ulong)local_d0 >> 0x20);
      fVar13 = (float)((ulong)local_c0 >> 0x20);
      fVar12 = (float)local_f0;
      fVar17 = (float)local_100;
      lVar6 = (ulong)uVar3 * 0xc;
      *(ulong *)(param_6 + lVar6) =
           CONCAT44(fVar15 * fVar12 + fVar10 * fVar17 + fVar13 * fVar14 +
                    (float)((ulong)local_b0 >> 0x20),
                    (float)local_e0 * fVar12 + (float)local_d0 * fVar17 + (float)local_c0 * fVar14 +
                    (float)local_b0);
      uVar1 = (uint)uVar3 * 3 + 2;
      *(float *)(param_6 + (ulong)uVar1 * 4) =
           (float)uStack_d8 * fVar12 + fVar17 * (float)local_c8 + fVar14 * (float)uStack_b8 +
           (float)local_a8;
      *(ulong *)(param_7 + lVar6) =
           CONCAT44(fVar15 * fVar16 + fVar10 * fVar9 + fVar13 * fVar11,
                    (float)local_e0 * fVar16 + (float)local_d0 * fVar9 + (float)local_c0 * fVar11);
      *(float *)(param_7 + (ulong)uVar1 * 4) =
           (float)uStack_d8 * fVar16 + fVar9 * (float)local_c8 + fVar11 * (float)uStack_b8;
      uVar5 = uVar5 + 3;
      param_5 = param_5 + 1;
    } while ((param_4 & 0xffffffff) * 2 + (param_4 & 0xffffffff) != uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1006686a4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long local_120;
  long local_118;
  ulong local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [8];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_f8 = *(undefined8 *)(param_2 + 0x10);
  local_100 = *(undefined8 *)(param_2 + 8);
  local_e8 = *(undefined8 *)(param_2 + 0x20);
  local_f0 = *(undefined8 *)(param_2 + 0x18);
  uStack_d8 = *(undefined8 *)(param_2 + 0x30);
  local_e0 = *(undefined8 *)(param_2 + 0x28);
  local_c8 = *(undefined8 *)(param_2 + 0x40);
  local_d0 = *(undefined8 *)(param_2 + 0x38);
  local_108 = param_5;
  if (param_8 != 0) {
    FUN_10002a9fc(&local_100,&local_100,param_8);
  }
  lVar8 = local_108;
  local_110 = param_4 & 0xffffffff;
  uVar7 = local_110 * 4 + 0xf & 0x7fffffff0;
  local_118 = (long)&local_120 - uVar7;
  lVar9 = local_118 - uVar7;
  lVar11 = lVar9 - uVar7;
  lVar12 = lVar11 - uVar7;
  (**(code **)(param_2 + 0x88))(param_1,param_4,local_118,local_108,param_3,param_9);
  local_120 = lVar9;
  (**(code **)(param_2 + 0x90))(param_1,param_4,lVar9,lVar8,param_3,param_9);
  (**(code **)(param_2 + 0x98))(param_1,param_4,lVar11,lVar8,param_3,param_9);
  (**(code **)(param_2 + 0xa0))(param_1,param_4,lVar12,lVar8,param_3,param_9);
  if ((*(char *)(param_2 + 0xb0) == '\0') || (*(code **)(param_2 + 0xa8) == (code *)0x0)) {
    bVar3 = false;
    puVar13 = auStack_b8;
  }
  else {
    puVar13 = (undefined1 *)(lVar12 - ((ulong)(uint)((int)param_4 * 3) * 4 + 0xf & 0x7fffffff0));
    (**(code **)(param_2 + 0xa8))(param_1,param_4,puVar13,0,0,param_9);
    bVar3 = true;
  }
  if ((int)param_4 != 0) {
    uVar7 = 0;
    uVar10 = 2;
    do {
      fVar19 = *(float *)(local_120 + uVar7 * 4);
      fVar20 = *(float *)(lVar11 + uVar7 * 4);
      iVar4 = _rand();
      fVar18 = *(float *)(lVar12 + uVar7 * 4);
      iVar5 = _rand();
      fVar21 = *(float *)(local_118 + uVar7 * 4);
      iVar6 = _rand();
      fVar14 = fVar21 * 2.5870072e-12 * 3.1415927;
      fVar21 = (float)___sincosf_stret(fVar14 * (float)iVar6);
      if (bVar3) {
        fVar16 = *(float *)(puVar13 + (ulong)(uVar10 - 1) * 4);
        fVar17 = *(float *)(puVar13 + (ulong)(uVar10 - 2) * 4);
        fVar15 = *(float *)(puVar13 + (ulong)uVar10 * 4);
      }
      else {
        fVar16 = 0.0;
        fVar17 = fVar14;
        fVar15 = fVar21;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar20 = fVar19 - fVar20;
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar18 = fVar18 * 4.656613e-10 * (float)iVar5;
      fVar19 = SQRT(fVar20 * fVar20 +
                    (fVar19 * fVar19 - fVar20 * fVar20) * (float)iVar4 * 4.656613e-10);
      fVar14 = fVar14 * fVar19;
      fVar21 = fVar21 * fVar19;
      fVar19 = (float)((ulong)local_100 >> 0x20);
      fVar20 = (float)((ulong)local_f0 >> 0x20);
      fVar22 = (float)((ulong)local_e0 >> 0x20);
      uVar2 = *(ushort *)(local_108 + uVar7 * 2);
      lVar8 = (ulong)uVar2 * 0xc;
      *(ulong *)(param_6 + lVar8) =
           CONCAT44(fVar19 * fVar14 + fVar20 * fVar18 + fVar22 * fVar21 +
                    (float)((ulong)local_d0 >> 0x20),
                    (float)local_100 * fVar14 + (float)local_f0 * fVar18 + (float)local_e0 * fVar21
                    + (float)local_d0);
      uVar1 = (uint)uVar2 * 3 + 2;
      *(float *)(param_6 + (ulong)uVar1 * 4) =
           (float)uStack_f8 * fVar14 + fVar18 * (float)local_e8 + fVar21 * (float)uStack_d8 +
           (float)local_c8;
      *(ulong *)(param_7 + lVar8) =
           CONCAT44(fVar19 * fVar17 + fVar20 * fVar16 + fVar22 * fVar15,
                    (float)local_100 * fVar17 + (float)local_f0 * fVar16 + (float)local_e0 * fVar15)
      ;
      *(float *)(param_7 + (ulong)uVar1 * 4) =
           (float)uStack_f8 * fVar17 + fVar16 * (float)local_e8 + fVar15 * (float)uStack_d8;
      uVar7 = uVar7 + 1;
      uVar10 = uVar10 + 3;
    } while (local_110 != uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100668a10(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ushort *param_5,
                  long param_6,long param_7,long param_8,undefined8 param_9)

{
  float *pfVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_f0;
  float afStack_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_98;
  
  local_98 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_d8 = *(undefined8 *)(param_2 + 0x10);
  local_e0 = *(undefined8 *)(param_2 + 8);
  local_c8 = *(undefined8 *)(param_2 + 0x20);
  local_d0 = *(undefined8 *)(param_2 + 0x18);
  uStack_b8 = *(undefined8 *)(param_2 + 0x30);
  local_c0 = *(undefined8 *)(param_2 + 0x28);
  local_a8 = *(undefined8 *)(param_2 + 0x40);
  local_b0 = *(undefined8 *)(param_2 + 0x38);
  if (param_8 != 0) {
    FUN_10002a9fc(&local_e0,&local_e0,param_8);
  }
  iVar4 = (int)param_4;
  lVar6 = (long)&local_f0 - ((ulong)(uint)(iVar4 << 1) * 4 + 0xf & 0x7fffffff0);
  lVar7 = lVar6 - ((ulong)(uint)(iVar4 * 3) * 4 + 0xf & 0x7fffffff0);
  (**(code **)(param_2 + 0x88))(param_1,param_4,lVar6,param_5,param_3,param_9);
  (**(code **)(param_2 + 0x90))(param_1,param_4,lVar7,param_5,param_3,param_9);
  if (iVar4 != 0) {
    uVar8 = 0;
    uVar9 = 1;
    do {
      uVar3 = *param_5;
      fVar14 = *(float *)(lVar6 + (ulong)(uVar9 - 1) * 4);
      fVar15 = *(float *)(lVar6 + (ulong)uVar9 * 4);
      iVar4 = _rand();
      local_f0 = (ulong)(uint)(fVar14 * 4.656613e-10 * (float)iVar4 - fVar14 * 0.5);
      afStack_e8[0] = 0.0;
      afStack_e8[1] = 0.0;
      iVar4 = _rand();
      fVar14 = fVar15 * 4.656613e-10 * (float)iVar4 - fVar15 * 0.5;
      pfVar1 = (float *)(lVar7 + (uVar8 & 0xffffffff) * 4);
      fVar10 = *pfVar1;
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar15 = (float)((ulong)local_e0 >> 0x20);
      fVar13 = (float)((ulong)local_c0 >> 0x20);
      fVar16 = (float)local_f0;
      lVar5 = (ulong)uVar3 * 0xc;
      *(ulong *)(param_6 + lVar5) =
           CONCAT44((float)((ulong)local_b0 >> 0x20) + fVar15 * fVar16 + fVar13 * fVar14,
                    (float)local_b0 + (float)local_e0 * fVar16 + (float)local_c0 * fVar14);
      uVar2 = (uint)uVar3 * 3 + 2;
      *(float *)(param_6 + (ulong)uVar2 * 4) =
           (float)local_a8 + fVar16 * (float)uStack_d8 + fVar14 * (float)uStack_b8;
      *(ulong *)(param_7 + lVar5) =
           CONCAT44(fVar15 * fVar10 + (float)((ulong)local_d0 >> 0x20) * fVar11 + fVar13 * fVar12,
                    (float)local_e0 * fVar10 + (float)local_d0 * fVar11 + (float)local_c0 * fVar12);
      *(float *)(param_7 + (ulong)uVar2 * 4) =
           (float)uStack_d8 * fVar10 + fVar11 * (float)local_c8 + fVar12 * (float)uStack_b8;
      uVar8 = uVar8 + 3;
      uVar9 = uVar9 + 2;
      param_5 = param_5 + 1;
    } while ((param_4 & 0xffffffff) * 2 + (param_4 & 0xffffffff) != uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 * FUN_100668c3c(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void FUN_100668c7c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = 0;
    do {
      FUN_1010aeee8(param_2,*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




undefined4 * FUN_100668cdc(undefined4 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  short sVar6;
  short sVar7;
  undefined8 uVar5;
  short sVar8;
  short sVar10;
  short sVar11;
  undefined8 uVar9;
  short sVar12;
  
  lVar3 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x2101e) = 0x2000;
  uVar9 = 0x7000600050004;
  uVar5 = 0x3000200010000;
  do {
    sVar6 = (short)((ulong)uVar5 >> 0x10);
    sVar7 = (short)((ulong)uVar5 >> 0x20);
    sVar8 = (short)((ulong)uVar5 >> 0x30);
    sVar10 = (short)((ulong)uVar9 >> 0x10);
    sVar11 = (short)((ulong)uVar9 >> 0x20);
    sVar12 = (short)((ulong)uVar9 >> 0x30);
    puVar1 = (undefined8 *)((long)param_1 + lVar3 + 0x80078);
    puVar1[1] = CONCAT26(0x1fff - sVar12,
                         CONCAT24(0x1fff - sVar11,CONCAT22(0x1fff - sVar10,0x1fff - (short)uVar9)));
    *puVar1 = CONCAT26(0x1fff - sVar8,
                       CONCAT24(0x1fff - sVar7,CONCAT22(0x1fff - sVar6,0x1fff - (short)uVar5)));
    uVar5 = CONCAT26(sVar8 + 8,CONCAT24(sVar7 + 8,CONCAT22(sVar6 + 8,(short)uVar5 + 8)));
    uVar9 = CONCAT26(sVar12 + 8,CONCAT24(sVar11 + 8,CONCAT22(sVar10 + 8,(short)uVar9 + 8)));
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x4000);
  lVar3 = 0x84080;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar3 = lVar3 + 0xa8;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x400);
  *(undefined8 *)(param_1 + 0x2b820) = 0x3ff0000;
  lVar3 = 0xae090;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar3 = lVar3 + 0x2c8;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x400);
  *(undefined8 *)(param_1 + 0x58024) = 0x3ff0000;
  lVar3 = 0x1600a0;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar3 = lVar3 + 200;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x800);
  *(undefined8 *)(param_1 + 0x71028) = 0x7ff0000;
  lVar3 = 0x1c40b0;
  lVar4 = 1;
  do {
    *(short *)((long)param_1 + lVar3) = (short)lVar4;
    lVar3 = lVar3 + 0x20;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  *(undefined8 *)(param_1 + 0x7182c) = 0xff0000;
  *(undefined8 *)(param_1 + 0x71830) = param_2;
  *(undefined1 *)(param_1 + 0x71832) = 0;
  *(undefined8 *)(param_1 + 0x71838) = 0;
  *(undefined8 *)(param_1 + 0x71836) = 0;
  *(undefined4 **)(param_1 + 0x71834) = param_1 + 0x71836;
  *(undefined1 *)(param_1 + 0x7183a) = param_3;
  *(undefined1 *)((long)param_1 + 0x1c60e9) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  uVar2 = FUN_1010ad990("forward");
  *(undefined1 *)((long)param_1 + 0x1c60e9) = uVar2;
  return param_1;
}




long FUN_100668e9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  iVar3 = FUN_1004e4ecc(&DAT_101dbe4b0);
  if (iVar3 != 0) {
    FUN_1004e51fc(&DAT_101dbe4b0);
  }
  puVar6 = (undefined8 *)(param_1 + 8);
  puVar5 = (undefined8 *)*puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    iVar3 = *(int *)(param_1 + 0x18);
    do {
      iVar3 = iVar3 + -1;
      if (puVar5 == *(undefined8 **)(param_1 + 0x10)) {
        *puVar6 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        *puVar6 = *puVar5;
      }
      if (puVar5 == (undefined8 *)0x98) break;
      *puVar5 = 0;
      lVar4 = *(long *)(param_1 + 0x20);
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      puVar5[1] = puVar2;
      puVar1 = (undefined8 *)(param_1 + 0x20);
      if (lVar4 != 0) {
        puVar1 = puVar2;
      }
      *puVar1 = puVar5;
      *(undefined8 **)(param_1 + 0x28) = puVar5;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      puVar5 = *(undefined8 **)(param_1 + 8);
    } while (puVar5 != (undefined8 *)0x0);
    *(int *)(param_1 + 0x18) = iVar3;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar4 = lVar4 + -0x98;
    while (lVar4 != 0) {
      lVar7 = *(long *)(lVar4 + 0x98);
      FUN_100668fc4(param_1);
      lVar4 = 0;
      if (lVar7 != 0) {
        lVar4 = lVar7 + -0x98;
      }
    }
  }
  FUN_100669350(param_1);
  FUN_10066c128(param_1 + 0x1c60d0,*(undefined8 *)(param_1 + 0x1c60d8));
  *(long *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}




void FUN_100668fc4(int *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 *puVar10;
  long lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar6) {
      *param_1 = 100;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_100669558(param_1 + 8,param_2);
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar14 = (undefined2 *)(*(long *)(param_2 + 0x68) + -0x2c0), puVar14 != (undefined2 *)0x0)) {
    piVar1 = param_1 + 0x2101f;
    do {
      puVar15 = (undefined8 *)(*(long *)(puVar14 + 0x144) + -0xc0);
      if (*(long *)(puVar14 + 0x144) != 0 && puVar15 != (undefined8 *)0x0) {
        do {
          puVar2 = (undefined8 *)0x0;
          if (puVar15[0x18] != 0) {
            puVar2 = (undefined8 *)(puVar15[0x18] + -0xc0);
          }
          (**(code **)*puVar15)(puVar15);
          iVar16 = (int)(param_1 + 0x58028);
          if ((short)param_1[0x71028] == -1) {
            sVar7 = (short)((uint)((int)puVar15 - iVar16) >> 3) * 0x5c29;
            *(short *)((long)param_1 + 0x1c40a2) = sVar7;
            *(short *)(param_1 + 0x71028) = sVar7;
          }
          else {
            uVar4 = *(ushort *)((long)param_1 + 0x1c40a2);
            sVar7 = (short)((uint)((int)puVar15 - iVar16) >> 3) * 0x5c29;
            *(short *)((long)param_1 + 0x1c40a2) = sVar7;
            *(short *)(param_1 + 0x58028 + (ulong)uVar4 * 0x32) = sVar7;
          }
          param_1[0x71029] = param_1[0x71029] + -1;
          puVar15 = puVar2;
        } while (puVar2 != (undefined8 *)0x0);
      }
      if (*(long *)(puVar14 + 0x104) != 0) {
        FUN_1010aeee8(*(undefined8 *)(param_1 + 0x71830));
      }
      iVar16 = *(int *)(puVar14 + 0x100);
      do {
        while (*piVar1 != 0) {
          ClearExclusiveLocal();
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 100;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar9 = param_1[0x2101e];
      if (iVar16 != 0) {
        puVar10 = (undefined2 *)((long)param_1 + (long)iVar9 * 2 + 0x80078);
        puVar13 = puVar14;
        iVar12 = iVar16;
        do {
          *puVar10 = *puVar13;
          iVar12 = iVar12 + -1;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        } while (iVar12 != 0);
      }
      param_1[0x2101e] = iVar9 + iVar16;
      param_1[0x2101f] = 0;
      *(undefined4 *)(puVar14 + 0x100) = 0;
      *(undefined1 *)(puVar14 + 0x124) = 1;
      puVar10 = (undefined2 *)0x0;
      if (*(long *)(puVar14 + 0x160) != 0) {
        puVar10 = (undefined2 *)(*(long *)(puVar14 + 0x160) + -0x2c0);
      }
      if (*(void **)(puVar14 + 0x15c) == (void *)0x0) {
        *(undefined8 *)(puVar14 + 0x150) = 0;
      }
      else {
        *(undefined4 *)(puVar14 + 0x158) = 0;
        *(undefined8 *)(puVar14 + 0x150) = 0;
        operator_delete__(*(void **)(puVar14 + 0x15c));
        *(undefined8 *)(puVar14 + 0x158) = 0;
        *(undefined8 *)(puVar14 + 0x15c) = 0;
      }
      iVar16 = (int)(param_1 + 0x2b824);
      if ((short)param_1[0x58024] == -1) {
        sVar7 = (short)((uint)((int)puVar14 - iVar16) >> 3) * 0x47e9;
        *(short *)((long)param_1 + 0x160092) = sVar7;
        *(short *)(param_1 + 0x58024) = sVar7;
      }
      else {
        uVar4 = *(ushort *)((long)param_1 + 0x160092);
        sVar7 = (short)((uint)((int)puVar14 - iVar16) >> 3) * 0x47e9;
        *(short *)((long)param_1 + 0x160092) = sVar7;
        *(short *)(param_1 + 0x2b824 + (ulong)uVar4 * 0xb2) = sVar7;
      }
      param_1[0x58025] = param_1[0x58025] + -1;
      puVar14 = puVar10;
    } while (puVar10 != (undefined2 *)0x0);
  }
  if ((*(long *)(param_2 + 0x80) != 0) && (lVar11 = *(long *)(param_2 + 0x80) + -0x18, lVar11 != 0))
  {
    iVar16 = param_1[0x7182d];
    do {
      lVar3 = 0;
      if (*(long *)(lVar11 + 0x18) != 0) {
        lVar3 = *(long *)(lVar11 + 0x18) + -0x18;
      }
      iVar9 = (int)(param_1 + 0x7102c);
      if ((short)param_1[0x7182c] == -1) {
        uVar8 = (undefined2)((uint)((int)lVar11 - iVar9) >> 5);
        *(undefined2 *)((long)param_1 + 0x1c60b2) = uVar8;
        *(undefined2 *)(param_1 + 0x7182c) = uVar8;
      }
      else {
        uVar4 = *(ushort *)((long)param_1 + 0x1c60b2);
        uVar8 = (undefined2)((uint)((int)lVar11 - iVar9) >> 5);
        *(undefined2 *)((long)param_1 + 0x1c60b2) = uVar8;
        *(undefined2 *)(param_1 + 0x7102c + (ulong)uVar4 * 8) = uVar8;
      }
      iVar16 = iVar16 + -1;
      lVar11 = lVar3;
    } while (lVar3 != 0);
    param_1[0x7182d] = iVar16;
  }
  iVar16 = (int)(param_1 + 0x21020);
  if ((short)param_1[0x2b820] == -1) {
    sVar7 = (short)((uint)((int)param_2 - iVar16) >> 3) * -0x30c3;
    *(short *)((long)param_1 + 0xae082) = sVar7;
    *(short *)(param_1 + 0x2b820) = sVar7;
  }
  else {
    uVar4 = *(ushort *)((long)param_1 + 0xae082);
    sVar7 = (short)((uint)((int)param_2 - iVar16) >> 3) * -0x30c3;
    *(short *)((long)param_1 + 0xae082) = sVar7;
    *(short *)(param_1 + 0x21020 + (ulong)uVar4 * 0x2a) = sVar7;
  }
  param_1[0x2b821] = param_1[0x2b821] + -1;
  *param_1 = 0;
  return;
}




void FUN_100669350(long param_1)

{
  bool bVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x1c60d0);
  while (plVar5 != (long *)(param_1 + 0x1c60d8)) {
    lVar4 = plVar5[5];
    FUN_100668c7c(lVar4,*(undefined8 *)(param_1 + 0x1c60c0));
    if (lVar4 != 0) {
      pvVar2 = (void *)FUN_100668c3c(lVar4);
      operator_delete(pvVar2);
    }
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar3 = plVar5 + 2;
      bVar1 = *(long **)*plVar3 != plVar5;
      plVar5 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar3;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_10066c128((undefined8 *)(param_1 + 0x1c60d0),*(undefined8 *)(param_1 + 0x1c60d8));
  *(undefined8 *)(param_1 + 0x1c60d8) = 0;
  *(undefined8 *)(param_1 + 0x1c60e0) = 0;
  *(long **)(param_1 + 0x1c60d0) = (long *)(param_1 + 0x1c60d8);
  return;
}




ushort * FUN_10066942c(int *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ushort *puVar6;
  ulong uVar7;
  int *piVar8;
  ushort uVar9;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = 100;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar9 = *(ushort *)(param_1 + 0x2b820);
  uVar7 = (ulong)uVar9;
  if (uVar7 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(param_1 + uVar7 * 0x2a + 0x21020);
    if (uVar9 == *(ushort *)((long)param_1 + 0xae082)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar6;
    }
    *(ushort *)(param_1 + 0x2b820) = uVar9;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0x3f80;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0x3f80;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[0] = 0;
    puVar6[1] = 0x3f80;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0x3f80;
    (param_1 + uVar7 * 0x2a + 0x21036)[0] = 0;
    (param_1 + uVar7 * 0x2a + 0x21036)[1] = 0;
    param_1[uVar7 * 0x2a + 0x21038] = -0x40800000;
    *(ushort *)(param_1 + uVar7 * 0x2a + 0x21039) =
         *(ushort *)(param_1 + uVar7 * 0x2a + 0x21039) & 0xe000 | 0x40;
    (param_1 + uVar7 * 0x2a + 0x2103a)[0] = 0;
    (param_1 + uVar7 * 0x2a + 0x2103a)[1] = 0;
    (param_1 + uVar7 * 0x2a + 0x2103c)[0] = 0;
    (param_1 + uVar7 * 0x2a + 0x2103c)[1] = 0;
    param_1[uVar7 * 0x2a + 0x2103e] = 0;
    (param_1 + uVar7 * 0x2a + 0x21040)[0] = 0;
    (param_1 + uVar7 * 0x2a + 0x21040)[1] = 0;
    (param_1 + uVar7 * 0x2a + 0x21042)[0] = 0;
    (param_1 + uVar7 * 0x2a + 0x21042)[1] = 0;
    param_1[uVar7 * 0x2a + 0x21044] = 0;
    (param_1 + uVar7 * 0x2a + 0x21048)[0] = 0;
    (param_1 + uVar7 * 0x2a + 0x21048)[1] = 0;
    param_1[uVar7 * 0x2a + 0x21032] = 0x7f7fffff;
    param_1[uVar7 * 0x2a + 0x21031] = 0x7f7fffff;
    param_1[0x2b821] = param_1[0x2b821] + 1;
    lVar2 = *(long *)(param_1 + 2);
    plVar3 = *(long **)(param_1 + 4);
    *(long **)(param_1 + uVar7 * 0x2a + 0x21048) = plVar3;
    piVar8 = param_1 + uVar7 * 0x2a + 0x21046;
    piVar8[0] = 0;
    piVar8[1] = 0;
    param_1[uVar7 * 0x2a + 0x21030] = 0x7f7fffff;
    param_1[uVar7 * 0x2a + 0x21035] = -0x800001;
    param_1[uVar7 * 0x2a + 0x21034] = -0x800001;
    param_1[uVar7 * 0x2a + 0x21033] = -0x800001;
    plVar1 = (long *)(param_1 + 2);
    if (lVar2 != 0) {
      plVar1 = plVar3;
    }
    *plVar1 = (long)piVar8;
    *(int **)(param_1 + 4) = piVar8;
    param_1[6] = param_1[6] + 1;
  }
  *param_1 = 0;
  return puVar6;
}




void FUN_100669558(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0x98);
  if ((long *)*param_1 == plVar1) {
    if (plVar1 == (long *)param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *plVar1;
    }
  }
  else if ((long *)param_1[1] == plVar1) {
    puVar2 = *(undefined8 **)(param_2 + 0xa0);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0xa0);
    *puVar2 = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 **)(*(long *)(param_2 + 0x98) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




ushort * FUN_1006695bc(int *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ushort *puVar5;
  ulong uVar6;
  ushort uVar7;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 100;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar7 = *(ushort *)(param_1 + 0x58024);
  uVar6 = (ulong)uVar7;
  if (uVar6 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(param_1 + uVar6 * 0xb2 + 0x2b824);
    if (uVar7 == *(ushort *)((long)param_1 + 0x160092)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar5;
    }
    *(ushort *)(param_1 + 0x58024) = uVar7;
    param_1[uVar6 * 0xb2 + 0x2b8a4] = 0;
    *(undefined1 *)(param_1 + uVar6 * 0xb2 + 0x2b8b6) = 1;
    (param_1 + uVar6 * 0xb2 + 0x2b8b7)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8b7)[1] = -0x40800000;
    (param_1 + uVar6 * 0xb2 + 0x2b8cc)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8cc)[1] = 0;
    *(undefined1 *)(param_1 + uVar6 * 0xb2 + 0x2b8ce) = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8a6)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8a6)[1] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8a8] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8bc)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8bc)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8ba)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8ba)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c0)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c0)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8be)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8be)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c4)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c4)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c2)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c2)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c8)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c8)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c6)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8c6)[1] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8ca] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8d0)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8d0)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8d4)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8d4)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8d2)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8d2)[1] = 0;
    uVar2 = param_1[uVar6 * 0xb2 + 0x2b8ac];
    param_1[uVar6 * 0xb2 + 0x2b8af] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8ad)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8ad)[1] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8b0)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8b0)[1] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8b2] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8b5] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8b3)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8b3)[1] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8a9] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8aa] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8ab] = 0;
    param_1[uVar6 * 0xb2 + 0x2b8ac] = uVar2 & 0xe0000000 | 0x1000;
    param_1[0x58025] = param_1[0x58025] + 1;
    piVar1 = param_1 + uVar6 * 0xb2 + 0x2b8d4;
    (param_1 + uVar6 * 0xb2 + 0x2b8d4)[0] = 0;
    (param_1 + uVar6 * 0xb2 + 0x2b8d4)[1] = 0;
    if (*(long *)(param_2 + 0x68) == 0) {
      *(int **)(param_2 + 0x68) = piVar1;
    }
    else {
      **(undefined8 **)(param_2 + 0x70) = piVar1;
    }
    *(int **)(param_2 + 0x70) = piVar1;
    *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + 1;
  }
  *param_1 = 0;
  return puVar5;
}




undefined8 FUN_100669720(int *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  int *piVar6;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar5 = *(ushort *)(param_1 + 0x71028);
  uVar4 = (ulong)uVar5;
  if (uVar4 == 0xffff) {
    uVar3 = 0;
  }
  else {
    if (uVar5 == *(ushort *)((long)param_1 + 0x1c40a2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(param_1 + uVar4 * 0x32 + 0x58028);
    }
    piVar6 = param_1 + uVar4 * 0x32 + 0x58058;
    piVar6[0] = 0;
    piVar6[1] = 0;
    *(ushort *)(param_1 + 0x71028) = uVar5;
    param_1[uVar4 * 0x32 + 0x58056] = 4;
    param_1[0x71029] = param_1[0x71029] + 1;
    uVar3 = FUN_100667778(param_1 + uVar4 * 0x32 + 0x58028,param_3);
    piVar6[0] = 0;
    piVar6[1] = 0;
    if (*(long *)(param_2 + 0x288) == 0) {
      *(int **)(param_2 + 0x288) = piVar6;
    }
    else {
      **(undefined8 **)(param_2 + 0x290) = piVar6;
    }
    *(int **)(param_2 + 0x290) = piVar6;
    *(int *)(param_2 + 0x298) = *(int *)(param_2 + 0x298) + 1;
  }
  *param_1 = 0;
  return uVar3;
}




void FUN_100669818(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  FUN_10066998c();
  uVar10 = param_3[1];
  uVar9 = *param_3;
  uVar12 = param_3[3];
  uVar11 = param_3[2];
  lVar7 = *(long *)(param_2 + 8);
  uVar13 = param_3[4];
  uVar15 = param_3[7];
  uVar14 = param_3[6];
  *(undefined8 *)(param_2 + 0x60) = param_3[5];
  *(undefined8 *)(param_2 + 0x58) = uVar13;
  *(undefined8 *)(param_2 + 0x70) = uVar15;
  *(undefined8 *)(param_2 + 0x68) = uVar14;
  *(undefined8 *)(param_2 + 0x40) = uVar10;
  *(undefined8 *)(param_2 + 0x38) = uVar9;
  *(undefined8 *)(param_2 + 0x50) = uVar12;
  *(undefined8 *)(param_2 + 0x48) = uVar11;
  plVar1 = (long *)(param_2 + 0x20);
  if (lVar7 != 0) {
    lVar7 = lVar7 + -0x98;
    while (lVar3 = lVar7, lVar3 != 0) {
      lVar7 = 0;
      if (*(long *)(lVar3 + 0x98) != 0) {
        lVar7 = *(long *)(lVar3 + 0x98) + -0x98;
      }
      if ((*(byte *)(lVar3 + 0x65) & 1) != 0) {
        FUN_100669558((long *)(param_2 + 8),lVar3);
        puVar8 = (undefined8 *)(lVar3 + 0x98);
        *puVar8 = 0;
        lVar4 = *(long *)(param_2 + 0x20);
        plVar5 = *(long **)(param_2 + 0x28);
        *(long **)(lVar3 + 0xa0) = plVar5;
        plVar2 = plVar1;
        if (lVar4 != 0) {
          plVar2 = plVar5;
        }
        *plVar2 = (long)puVar8;
        *(undefined8 **)(param_2 + 0x28) = puVar8;
        *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
      }
    }
  }
  lVar7 = *plVar1 + -0x98;
  if (*plVar1 != 0 && lVar7 != 0) {
    do {
      lVar3 = 0;
      if (*(long *)(lVar7 + 0x98) != 0) {
        lVar3 = *(long *)(lVar7 + 0x98) + -0x98;
      }
      if ((*(byte *)(lVar7 + 0x65) >> 1 & 1) != 0) {
        FUN_100668fc4(param_2);
      }
      lVar7 = lVar3;
    } while (lVar3 != 0);
  }
  if ((*(char *)(param_2 + 0x1c60c8) != '\0') && (iVar6 = FUN_1004e4ecc(&DAT_101dbe4b0), iVar6 != 0)
     ) {
    if ((*plVar1 != 0) && (*plVar1 != 0x98)) {
      FUN_1006699d0(param_1,param_2,param_4);
      return;
    }
    return;
  }
  FUN_100669ae0(param_1,param_2,param_4);
  return;
}




void FUN_10066998c(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dbe4b0);
  if (iVar1 == 0 || DAT_101dbe5f0 == 0) {
    return;
  }
  DAT_101dbe5f0 = 0;
  FUN_1004e51fc(&DAT_101dbe4b0);
  return;
}




void FUN_1006699d0(undefined4 param_1,long param_2,void *param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = FUN_1004e4bd4();
  lVar4 = *(long *)(param_2 + 0x20) + -0x98;
  if (*(long *)(param_2 + 0x20) == 0 || lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar6 = 0;
    do {
      (&DAT_101dbe600)[lVar6] = lVar4;
      plVar1 = (long *)(lVar4 + 0x98);
      lVar4 = 0;
      if (*plVar1 != 0) {
        lVar4 = *plVar1 + -0x98;
      }
      lVar7 = lVar6 + 1;
    } while ((lVar4 != 0) && (uVar5 = (uint)lVar6, lVar6 = lVar7, uVar5 < 0x3ff));
  }
  uVar5 = (uint)lVar7;
  DAT_101dc0604 = 0;
  bVar2 = param_3 != (void *)0x0;
  DAT_101dbe5f8 = param_2;
  DAT_101dc0600 = uVar5;
  DAT_101dc0608 = param_1;
  if (bVar2) {
    _memcpy(&DAT_101dc060c,param_3,0x104);
  }
  DAT_101dbe5f0 = iVar3;
  DAT_101dc0710 = bVar2;
  if (uVar5 < 0x33) {
    iVar3 = 1;
    DAT_101dbe5f0 = iVar3;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_1004e57e0(&DAT_101dbe4b0,FUN_10066a98c,&DAT_101dbe5f8);
  }
  return;
}




void FUN_100669ae0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x20) + -0x98;
  if (*(long *)(param_2 + 0x20) != 0 && lVar2 != 0) {
    do {
      FUN_100669b50(param_1,param_2,param_3,lVar2);
      plVar1 = (long *)(lVar2 + 0x98);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -0x98;
      }
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100669b50(long param_1,long param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  
  if (param_3 != 0) {
    if ((*(byte *)(param_3 + 0x65) >> 1 & 1) == 0) {
      FUN_1006666c0(param_3,param_1 + 0x78);
    }
    if (param_2 != 0) {
      if (((((*(ushort *)(param_3 + 100) >> 0xc & 1) != 0) || (0.5 < *(float *)(param_3 + 0x58))) ||
          (*(float *)(param_3 + 0x4c) < *(float *)(param_3 + 0x40))) ||
         ((*(float *)(param_3 + 0x50) < *(float *)(param_3 + 0x44) ||
          (*(float *)(param_3 + 0x54) < *(float *)(param_3 + 0x48))))) {
        uVar2 = *(ushort *)(param_3 + 100) & 0xfbff;
      }
      else {
        iVar1 = FUN_1010cf6f4(param_2 + 0x44,6,(float *)(param_3 + 0x40),param_3 + 0x4c);
        uVar2 = *(ushort *)(param_3 + 100) & 0xfbff;
        if (iVar1 == 1) {
          uVar2 = *(ushort *)(param_3 + 100) | 0x400;
        }
      }
      *(ushort *)(param_3 + 100) = uVar2;
    }
  }
  return;
}




long FUN_100669c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  
  uVar3 = FUN_1004d2524(param_2);
  uVar4 = FUN_100015208(param_2,uVar3,0x12345678);
  plVar1 = (long *)(param_1 + 0x1c60d8);
  plVar9 = (long *)*plVar1;
  plVar8 = plVar1;
  if (plVar9 != (long *)0x0) {
    do {
      if (*(uint *)(plVar9 + 4) >= uVar4) {
        plVar8 = plVar9;
      }
      plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < uVar4];
    } while (plVar9 != (long *)0x0);
    if ((plVar8 != plVar1) && (*(uint *)(plVar8 + 4) <= uVar4)) {
      bVar2 = false;
      puVar5 = (undefined8 *)plVar8[5];
      goto LAB_100669cb4;
    }
  }
  puVar5 = operator_new(0x18);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = param_3;
  FUN_10066a738(param_1,puVar5);
  bVar2 = true;
LAB_100669cb4:
  lVar6 = FUN_10066942c(param_1);
  if (lVar6 != 0) {
    FUN_100669d14(param_1,lVar6,puVar5);
  }
  if ((bVar2) &&
     (FUN_100668c7c(puVar5,*(undefined8 *)(param_1 + 0x1c60c0)), puVar5 != (undefined8 *)0x0)) {
    pvVar7 = (void *)FUN_100668c3c(puVar5);
    operator_delete(pvVar7);
  }
  return lVar6;
}




void FUN_100669d14(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_2b0;
  float fStack_2ac;
  float local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  float local_298;
  undefined4 uStack_294;
  float local_290;
  float local_28c;
  ulong local_288;
  long local_280;
  float local_278;
  undefined4 local_274;
  float local_270;
  float fStack_26c;
  float local_268;
  undefined4 local_264;
  undefined8 local_260;
  float local_258;
  undefined4 uStack_254;
  float local_250;
  float local_24c;
  ulong local_248;
  long local_240;
  float local_238;
  undefined4 local_234;
  float local_230;
  float fStack_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float fStack_21c;
  float local_218;
  undefined4 local_214;
  float local_210;
  float fStack_20c;
  float local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  puVar12 = (undefined8 *)*param_3;
  local_200 = *puVar12;
  local_1f8 = *(undefined4 *)(puVar12 + 1);
  local_1f4 = 0x3f800000;
  fVar18 = 3.1415927;
  fVar16 = (float)___sincosf_stret(*(float *)((long)puVar12 + 0xc) * 0.017453294);
  fVar19 = fVar18;
  local_210 = (float)___sincosf_stret(*(float *)(puVar12 + 2) * 0.017453294);
  fVar21 = local_210 * fVar16;
  fVar22 = local_210 * -fVar18;
  fStack_20c = fVar19 * -fVar16;
  local_208 = fVar19 * fVar18;
  local_204 = 0;
  fVar20 = fStack_20c;
  fVar17 = (float)___sincosf_stret(*(float *)((long)puVar12 + 0x14) * 0.017453294);
  local_230 = fVar20 * fVar19;
  fStack_22c = fVar20 * fVar21 + fVar18 * fVar17;
  local_228 = fVar20 * fVar22 + fVar16 * fVar17;
  local_224 = 0;
  local_220 = fVar17 * -fVar19;
  fStack_21c = fVar20 * fVar18 - fVar17 * fVar21;
  local_218 = fVar20 * fVar16 - fVar17 * fVar22;
  local_214 = 0;
  if (*(char *)(puVar12 + 3) != '\0') {
    uVar11 = 0;
    plVar13 = (long *)((long)puVar12 + 0x19);
    do {
      plVar15 = (long *)((long)plVar13 + 0xe4);
      cVar5 = *(char *)((long)plVar13 + 0xab);
      if ((cVar5 == '\0') ||
         ((*(char *)(param_1 + 0x1c60e8) != '\0' || cVar5 != '\x01' &&
          (*(char *)(param_1 + 0x1c60e8) == '\0' || cVar5 != '\x02')))) {
        local_240 = *plVar13;
        local_238 = *(float *)(plVar13 + 1);
        local_260 = 0x3f80000000000000;
        local_258 = 0.0;
        uStack_254 = 0;
        local_250 = 0.0;
        local_24c = 0.0;
        local_248 = 0x3f800000;
        local_264 = 0;
        local_234 = 0x3f800000;
        fVar20 = local_238;
        fVar17 = (float)___sincosf_stret(*(float *)((long)plVar13 + 0xc) * 0.017453294);
        local_260 = CONCAT44(fVar20,(undefined4)local_260);
        uStack_254 = 0;
        local_250 = 0.0;
        local_248 = (ulong)(uint)fVar20;
        fVar19 = fVar20;
        local_258 = fVar17;
        local_24c = -fVar17;
        local_250 = (float)___sincosf_stret(*(float *)(plVar13 + 2) * 0.017453294);
        fVar21 = local_250 * fVar17;
        fVar22 = local_250 * -fVar20;
        local_24c = fVar19 * -fVar17;
        local_248 = (ulong)(uint)(fVar19 * fVar20);
        fVar16 = local_24c;
        fVar18 = (float)___sincosf_stret(*(float *)((long)plVar13 + 0x14) * 0.017453294);
        local_270 = fVar16 * fVar19;
        fStack_26c = fVar16 * fVar21 + fVar20 * fVar18;
        local_268 = fVar16 * fVar22 + fVar17 * fVar18;
        local_264 = 0;
        local_260 = CONCAT44(fVar16 * fVar20 - fVar18 * fVar21,fVar18 * -fVar19);
        local_258 = fVar16 * fVar17 - fVar18 * fVar22;
        uStack_254 = 0;
        lVar7 = FUN_1006695bc(param_1,param_2);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x208) = 0;
          *(undefined4 *)(lVar7 + 0x210) = 0;
          uVar4 = *(uint *)(lVar7 + 0x220);
          uVar14 = *(byte *)(plVar13 + 3) & 0xf;
          uVar3 = *(byte *)(plVar13 + 3) & 0xf;
          *(uint *)(lVar7 + 0x220) = uVar4 & 0xfffffff0 | uVar3;
          uVar2 = (*(byte *)((long)plVar13 + 0x1a) & 3) << 8;
          *(uint *)(lVar7 + 0x220) = uVar4 & 0xfffffc00 | uVar4 & 0xf0 | uVar3 | uVar2;
          uVar3 = uVar3 | (*(byte *)((long)plVar13 + 0x19) & 0xf) << 4;
          *(uint *)(lVar7 + 0x220) = uVar4 & 0xfffffc00 | uVar2 | uVar3;
          uVar2 = uVar2 | uVar3 | (*(byte *)((long)plVar13 + 0x1b) & 3) << 10;
          *(uint *)(lVar7 + 0x220) = uVar4 & 0xfffff000 | uVar2;
          uVar2 = uVar2 | (*(ushort *)((long)plVar13 + 0x1c) & 0x7fff) << 0xc;
          *(uint *)(lVar7 + 0x220) = uVar4 & 0xf8000000 | uVar2;
          uVar2 = uVar2 | (uint)(*(char *)((long)plVar13 + 0x1e) != '\0') << 0x1b;
          *(uint *)(lVar7 + 0x220) = uVar4 & 0xf0000000 | uVar2;
          *(int *)(lVar7 + 0x214) = (int)plVar13[4];
          *(undefined4 *)(lVar7 + 0x218) = *(undefined4 *)((long)plVar13 + 0x24);
          *(undefined4 *)(lVar7 + 0x21c) = 0;
          *(uint *)(lVar7 + 0x220) = uVar4 & 0xe0000000 | uVar2;
          *(uint *)(lVar7 + 0x220) =
               uVar4 & 0xc0000000 | uVar2 | (uint)(*(char *)((long)plVar13 + 0x1f) != '\0') << 0x1d;
          if (((uVar14 - 4 < 5) || (uVar14 == 1)) && ((char)plVar13[5] != '\0')) {
            FUN_1004d2698(&local_1b0,"build://%s");
            FUN_1010aed8c(*(undefined8 *)(param_1 + 0x1c60c0),&local_1b0);
            uVar8 = FUN_1010aee84(*(undefined8 *)(param_1 + 0x1c60c0),&local_1b0);
            *(undefined8 *)(lVar7 + 0x208) = uVar8;
          }
          if ((uint)*(byte *)((long)plVar13 + 0xaa) + (uint)*(byte *)((long)plVar13 + 0xa9) != 0) {
            uVar14 = 0;
            do {
              lVar10 = *(long *)(param_2 + 0x80) + -0x18;
              iVar6 = 0;
              if (*(long *)(param_2 + 0x80) != 0 && lVar10 != 0) {
                do {
                  if (*(int *)(lVar10 + 0x10) == (int)plVar15[2]) break;
                  plVar1 = (long *)(lVar10 + 0x18);
                  iVar6 = iVar6 + 1;
                  lVar10 = 0;
                  if (*plVar1 != 0) {
                    lVar10 = *plVar1 + -0x18;
                  }
                } while (lVar10 != 0);
              }
              if ((iVar6 == *(int *)(param_2 + 0x90)) &&
                 (lVar10 = FUN_1006663fc(param_1,param_2), lVar10 != 0)) {
                lStack_1a8 = plVar15[1];
                local_1b0 = *plVar15;
                lVar9 = plVar15[2];
                cVar5 = *(char *)((long)plVar15 + 0x15);
                if (*(char *)((long)plVar15 + 0x14) != '\0') {
                  FUN_1006665e4(lVar10,&local_1b0);
                }
                *(int *)(lVar10 + 0x10) = (int)lVar9;
                *(ushort *)(lVar10 + 0x14) =
                     *(ushort *)(lVar10 + 0x14) & 0xfe07 | ((short)cVar5 & 0x3fU) << 3;
              }
              plVar15 = plVar15 + 3;
              uVar14 = uVar14 + 1;
            } while (uVar14 < (uint)*(byte *)((long)plVar13 + 0xaa) +
                              (uint)*(byte *)((long)plVar13 + 0xa9));
          }
          *(undefined8 *)(lVar7 + 0x24c) = *(undefined8 *)((long)plVar13 + 0xac);
          uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar13 + 0xb4));
          *(undefined8 *)(lVar7 + 600) = uVar8;
          uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar13 + 0xbc));
          *(undefined8 *)(lVar7 + 0x260) = uVar8;
          uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar13 + 0xc4));
          *(undefined8 *)(lVar7 + 0x268) = uVar8;
          uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar13 + 0xcc));
          *(undefined8 *)(lVar7 + 0x270) = uVar8;
          uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar13 + 0xd4));
          *(undefined8 *)(lVar7 + 0x278) = uVar8;
          uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar13 + 0xdc));
          *(undefined8 *)(lVar7 + 0x280) = uVar8;
          if ((char)plVar13[0x15] != '\0') {
            uVar14 = 0;
            do {
              lVar10 = plVar15[3];
              lVar9 = FUN_100669720(param_1,lVar7,(char)lVar10);
              if (lVar9 != 0) {
                local_280 = *plVar15;
                local_278 = *(float *)(plVar15 + 1);
                local_2a0 = 0x3f80000000000000;
                local_298 = 0.0;
                uStack_294 = 0;
                local_290 = 0.0;
                local_28c = 0.0;
                local_288 = 0x3f800000;
                local_2a4 = 0;
                local_274 = 0x3f800000;
                fVar20 = local_278;
                fVar17 = (float)___sincosf_stret(*(float *)((long)plVar15 + 0xc) * 0.017453294);
                local_2a0 = CONCAT44(fVar20,(undefined4)local_2a0);
                uStack_294 = 0;
                local_290 = 0.0;
                local_288 = (ulong)(uint)fVar20;
                fVar19 = fVar20;
                local_298 = fVar17;
                local_28c = -fVar17;
                local_290 = (float)___sincosf_stret(*(float *)(plVar15 + 2) * 0.017453294);
                fVar21 = local_290 * fVar17;
                fVar22 = local_290 * -fVar20;
                local_28c = fVar19 * -fVar17;
                local_288 = (ulong)(uint)(fVar19 * fVar20);
                fVar16 = local_28c;
                fVar18 = (float)___sincosf_stret(*(float *)((long)plVar15 + 0x14) * 0.017453294);
                local_2b0 = fVar16 * fVar19;
                fStack_2ac = fVar16 * fVar21 + fVar20 * fVar18;
                local_2a8 = fVar16 * fVar22 + fVar17 * fVar18;
                local_2a4 = 0;
                local_2a0 = CONCAT44(fVar16 * fVar20 - fVar18 * fVar21,fVar18 * -fVar19);
                local_298 = fVar16 * fVar17 - fVar18 * fVar22;
                uStack_294 = 0;
                FUN_10002a9fc(&local_1f0,&local_270,&local_230);
                FUN_10002a9fc(&local_1f0,&local_2b0,&local_1f0);
                *(undefined8 *)(lVar9 + 0x40) = uStack_1b8;
                *(undefined8 *)(lVar9 + 0x38) = uStack_1c0;
                *(undefined8 *)(lVar9 + 0x30) = uStack_1c8;
                *(undefined8 *)(lVar9 + 0x28) = local_1d0;
                *(undefined8 *)(lVar9 + 0x20) = uStack_1d8;
                *(undefined8 *)(lVar9 + 0x18) = uStack_1e0;
                *(undefined8 *)(lVar9 + 0x10) = uStack_1e8;
                *(undefined8 *)(lVar9 + 8) = local_1f0;
                uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x19));
                *(undefined8 *)(lVar9 + 0x50) = uVar8;
                uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x21));
                *(undefined8 *)(lVar9 + 0x58) = uVar8;
                uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x29));
                *(undefined8 *)(lVar9 + 0x60) = uVar8;
                uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x31));
                *(undefined8 *)(lVar9 + 0x68) = uVar8;
                uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x39));
                *(undefined8 *)(lVar9 + 0x70) = uVar8;
                uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x41));
                *(undefined8 *)(lVar9 + 0x78) = uVar8;
                uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x49));
                *(undefined8 *)(lVar9 + 0x80) = uVar8;
                switch((char)lVar10) {
                case '\0':
                case '\x01':
                case '\x03':
                  uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x51));
                  *(undefined8 *)(lVar9 + 0x88) = uVar8;
                  uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x59));
                  *(undefined8 *)(lVar9 + 0x90) = uVar8;
                  break;
                case '\x02':
                  uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x51));
                  *(undefined8 *)(lVar9 + 0x88) = uVar8;
                  uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x59));
                  *(undefined8 *)(lVar9 + 0x90) = uVar8;
                  uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x61));
                  *(undefined8 *)(lVar9 + 0x98) = uVar8;
                  uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x69));
                  *(undefined8 *)(lVar9 + 0xa0) = uVar8;
                  uVar8 = FUN_10109b3dc(*(undefined8 *)((long)plVar15 + 0x71));
                  *(undefined8 *)(lVar9 + 0xa8) = uVar8;
                  *(undefined1 *)(lVar9 + 0xb0) = *(undefined1 *)((long)plVar15 + 0x79);
                }
              }
              plVar15 = (long *)((long)plVar15 + 0x7a);
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(byte *)(plVar13 + 0x15));
          }
        }
      }
      else if (*(byte *)(plVar13 + 0x15) != 0) {
        plVar15 = (long *)((long)plVar13 + (ulong)(*(byte *)(plVar13 + 0x15) - 1) * 0x7a + 0x15e);
      }
      plVar13 = plVar15;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(byte *)(puVar12 + 3));
  }
  if (*(long *)(param_2 + 0x80) != 0) {
    lVar7 = *(long *)(param_2 + 0x80) + -0x18;
    while (lVar7 != 0) {
      lVar10 = *(long *)(param_2 + 0x68) + -0x2c0;
      if (*(long *)(param_2 + 0x68) != 0 && lVar10 != 0) {
        do {
          if (*(long **)(lVar10 + 0x208) != (long *)0x0) {
            lVar9 = *(long *)(**(long **)(lVar10 + 0x208) + (ulong)*(byte *)(param_1 + 0x1c60e9) * 8
                             + 8);
            if (lVar9 == 0) {
              FUN_1004d22dc(0);
            }
            lVar9 = *(long *)(lVar9 + 8);
            if ((lVar9 != 0) &&
               (iVar6 = FUN_1010af928(lVar9,*(undefined4 *)(lVar7 + 0x10)), iVar6 != 0)) {
              *(undefined1 *)(lVar10 + 0x2a8) = 1;
              local_1b0 = lVar7;
              FUN_10066b4f0(lVar10 + 0x2b0,&local_1b0);
            }
          }
          plVar13 = (long *)(lVar10 + 0x2c0);
          lVar10 = 0;
          if (*plVar13 != 0) {
            lVar10 = *plVar13 + -0x2c0;
          }
        } while (lVar10 != 0);
      }
      plVar13 = (long *)(lVar7 + 0x18);
      lVar7 = 0;
      if (*plVar13 != 0) {
        lVar7 = *plVar13 + -0x18;
      }
    }
  }
  *(ushort *)(param_2 + 100) = *(ushort *)(param_2 + 100) | 0x100;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_b0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined8 FUN_10066a4c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  uint local_34;
  
  uVar2 = FUN_1004d2524(param_2);
  local_34 = FUN_100015208(param_2,uVar2,0x12345678);
  plVar1 = (long *)(param_1 + 0x1c60d8);
  plVar5 = (long *)*plVar1;
  plVar6 = plVar1;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= local_34) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < local_34];
    } while (plVar5 != (long *)0x0);
    if ((plVar6 != plVar1) && (*(uint *)(plVar6 + 4) <= local_34)) {
      return 0;
    }
  }
  puVar3 = operator_new(0x18);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = param_3;
  FUN_10066a738(param_1,puVar3);
  puVar4 = (undefined8 *)FUN_10066a5a8(param_1 + 0x1c60d0,&local_34);
  *puVar4 = puVar3;
  return 1;
}




undefined8 * FUN_10066a5a8(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_10066a620:
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, *(uint *)(puVar2 + 4) <= uVar4) {
        if (uVar4 <= *(uint *)(puVar2 + 4)) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_10066a64c;
          goto LAB_10066a620;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_10066a624;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_10066a624:
  puVar3 = operator_new(0x30);
  *(uint *)(puVar3 + 4) = uVar4;
  puVar3[5] = 0;
  FUN_10066c168(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_10066a64c:
  return puVar2 + 5;
}




undefined8 FUN_10066a664(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  uint local_24;
  
  uVar2 = FUN_1004d2524(param_2);
  local_24 = FUN_100015208(param_2,uVar2,0x12345678);
  plVar1 = (long *)(param_1 + 0x1c60d8);
  plVar4 = (long *)*plVar1;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar1;
    do {
      if (*(uint *)(plVar4 + 4) >= local_24) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < local_24];
    } while (plVar4 != (long *)0x0);
    if ((plVar5 != plVar1) && (*(uint *)(plVar5 + 4) <= local_24)) {
      FUN_100668c7c(plVar5[5],*(undefined8 *)(param_1 + 0x1c60c0));
      if (plVar5[5] != 0) {
        pvVar3 = (void *)FUN_100668c3c();
        operator_delete(pvVar3);
      }
      FUN_10066c1bc(param_1 + 0x1c60d0,&local_24);
      return 1;
    }
  }
  return 0;
}




void FUN_10066a738(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_178;
  undefined1 auStack_170 [256];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *param_2;
  if (*(char *)(lVar7 + 0x18) != '\0') {
    uVar8 = 0;
    lVar9 = lVar7 + 0x19;
    do {
      cVar4 = *(char *)(lVar9 + 0xab);
      if ((cVar4 == '\0') ||
         ((*(char *)(param_1 + 0x1c60e8) != '\0' || cVar4 != '\x01' &&
          (*(char *)(param_1 + 0x1c60e8) == '\0' || cVar4 != '\x02')))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      lVar1 = lVar9 + 0xe4;
      if ((*(byte *)(lVar9 + 0x18) - 4 < 5 || *(byte *)(lVar9 + 0x18) == 1) &&
         (iVar6 = FUN_1004d2524(lVar9 + 0x28), iVar6 != 0)) {
        if (bVar5) {
          FUN_1004d2698(auStack_170,"build://%s");
          FUN_1010aed8c(*(undefined8 *)(param_1 + 0x1c60c0),auStack_170);
          local_178 = 0;
          local_178 = FUN_1010aee84(*(undefined8 *)(param_1 + 0x1c60c0),auStack_170);
          FUN_10066a8c8(param_2 + 1,&local_178);
        }
        lVar2 = lVar1;
        if (*(byte *)(lVar9 + 0xa9) != 0) {
          lVar2 = lVar9 + (ulong)(*(byte *)(lVar9 + 0xa9) - 1) * 0x18 + 0xfc;
        }
        lVar3 = 0;
        if (*(byte *)(lVar9 + 0xaa) != 0) {
          lVar3 = (ulong)(*(byte *)(lVar9 + 0xaa) - 1) * 0x18 + 0x18;
        }
        lVar1 = lVar2 + lVar3;
        if (*(byte *)(lVar9 + 0xa8) != 0) {
          lVar1 = lVar2 + lVar3 + (ulong)(*(byte *)(lVar9 + 0xa8) - 1) * 0x7a + 0x7a;
        }
      }
      lVar9 = lVar1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(lVar7 + 0x18));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10066a8c8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10066c2b0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10066a948(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dbe4b0);
  if (iVar1 == 0 || DAT_101dbe5f4 == '\0') {
    return;
  }
  DAT_101dbe5f4 = 0;
  FUN_1004e51fc(&DAT_101dbe4b0);
  return;
}




void FUN_10066a98c(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  
  lVar2 = 0;
  if (*(char *)(param_1 + 0x423) != '\0') {
    lVar2 = (long)param_1 + 0x2014;
  }
  puVar1 = (uint *)((long)param_1 + 0x200c);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (uVar3 < *(uint *)(param_1 + 0x401)) {
    do {
      FUN_100669b50(*(undefined4 *)(param_1 + 0x402),*param_1,lVar2,param_1[(ulong)uVar3 + 1]);
      do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    } while (uVar3 < *(uint *)(param_1 + 0x401));
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x101dbe5f0,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      DAT_101dbe5f0 = DAT_101dbe5f0 + -1;
    }
  } while (cVar4 != '\0');
  return;
}




void FUN_10066aa38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  int *param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  do {
    while (*param_5 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_5,0x10);
    if (bVar3) {
      *param_5 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_5[10];
  piVar9 = param_5 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x5f)) {
    pvVar7 = *(void **)(param_5 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_5 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x5f;
  *param_5 = 0;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *puVar4 = param_1;
  puVar4[1] = param_3;
  uVar10 = param_4[1];
  uVar6 = *param_4;
  uVar12 = param_4[3];
  uVar11 = param_4[2];
  uVar13 = param_4[4];
  uVar15 = param_4[7];
  uVar14 = param_4[6];
  puVar4[7] = param_4[5];
  puVar4[6] = uVar13;
  puVar4[9] = uVar15;
  puVar4[8] = uVar14;
  puVar4[3] = uVar10;
  puVar4[2] = uVar6;
  puVar4[5] = uVar12;
  puVar4[4] = uVar11;
  puVar4[10] = param_2;
  DAT_101dbe5f4 = 1;
  FUN_1004e57e0(&DAT_101dbe4b0,FUN_10066ab60);
  return;
}




void FUN_10066ab60(undefined8 *param_1)

{
  FUN_100666f14(*param_1,param_1[10],param_1[1],param_1 + 2);
  return;
}




void FUN_10066ab74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = operator_new(0x1c60f0);
  DAT_101ea59a8 = FUN_100668cdc(pvVar2,param_2,param_3);
  pvVar3 = operator_new(0x128);
  DAT_101ea59b0 = FUN_10066b05c(pvVar3,pvVar2,param_1);
  iVar1 = FUN_1004e4bc0();
  if (iVar1 != 0) {
    FUN_1004e4e60(&DAT_101dbe4b0,1,"DispatchQueue_ParticleFX");
    FUN_1004e55c8(&DAT_101dbe4b0);
  }
  *(undefined1 *)(DAT_101ea59a8 + 0x1c60c8) = 1;
  *(undefined1 *)(DAT_101ea59b0 + 0x124) = 1;
  return;
}




void FUN_10066ac28(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dbe4b0);
  if (iVar1 != 0) {
    FUN_1004e4edc(&DAT_101dbe4b0);
  }
  if (DAT_101ea59b0 != (long *)0x0) {
    (**(code **)(*DAT_101ea59b0 + 8))();
  }
  DAT_101ea59b0 = (long *)0x0;
  if (DAT_101ea59a8 != 0) {
    pvVar2 = (void *)FUN_100668e9c();
    operator_delete(pvVar2);
  }
  DAT_101ea59a8 = 0;
  return;
}




void FUN_10066ac90(undefined8 param_1,undefined8 param_2)

{
  FUN_100669818(DAT_101ea59a8,param_1,param_2);
  return;
}




void FUN_10066aca4(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x200;
  return;
}




undefined8 FUN_10066acb4(void)

{
  return DAT_101ea59b0;
}




ulong FUN_10066acc0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 100;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar2 = param_1[10];
  piVar9 = param_1 + (ulong)uVar2 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  uVar1 = param_2 << 4 | 7;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < uVar1)) {
    pvVar7 = *(void **)(param_1 + (ulong)uVar2 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_1 + (ulong)uVar2 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 - uVar1;
  *param_1 = 0;
  return (long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8;
}




void FUN_10066ad9c(long param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  short *psVar13;
  undefined8 *puVar14;
  long lVar15;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar12 = 0;
    psVar13 = (short *)(*(long *)(param_1 + 0x68) + 10);
    do {
      if (*psVar13 != 0) {
        lVar15 = *(long *)(psVar13 + -5);
        uVar10 = (ulong)(*(uint *)(lVar15 + 0x220) >> 8) & 3;
        if ((int)uVar10 != 3) {
          FUN_1010b4b00(*(undefined8 *)(&PTR_DAT_1014a8900)[uVar10]);
        }
        FUN_1010b4ac0(*(undefined4 *)(lVar15 + 0x21c),*(uint *)(lVar15 + 0x220) >> 0x1c & 1);
        uVar1 = *(uint *)(lVar15 + 0x220);
        if ((uVar1 >> 0x1d & 1) == 0) {
          FUN_1010b4a20(7);
          uVar1 = *(uint *)(lVar15 + 0x220);
        }
        puVar14 = (undefined8 *)(param_1 + 0x20);
        if ((uVar1 & 0xc00) == 0) {
          puVar14 = &DAT_1013cd78c;
        }
        FUN_1010b53c4(0,puVar14);
        plVar11 = *(long **)(lVar15 + 0x208);
        if (plVar11 == (long *)0x0) {
          FUN_1010b3fdc(0);
        }
        else {
          puVar14 = *(undefined8 **)(*plVar11 + (ulong)DAT_101dc0718 * 8 + 8);
          if (puVar14 == (undefined8 *)0x0) {
            FUN_1004d22dc(0);
          }
          FUN_1010b7024(*puVar14);
          lVar6 = plVar11[1];
          lVar4 = puVar14[1];
          lVar7 = lVar6;
          if (puVar14[1] == 0) {
            if (lVar6 == 0) goto LAB_10066aeac;
            lVar7 = 0;
            lVar4 = lVar6;
          }
          FUN_1010af818(lVar4,lVar7);
        }
LAB_10066aeac:
        uVar1 = *(uint *)(lVar15 + 0x220) & 0xf;
        if (uVar1 < 9) {
          if ((1 << (ulong)uVar1 & 0x183U) == 0) {
            if ((1 << (ulong)uVar1 & 0x70U) != 0) {
              uVar8 = *(undefined8 *)(param_1 + 0x60);
              sVar3 = psVar13[-1];
              sVar2 = *psVar13;
              uVar5 = 4;
              goto LAB_10066aef4;
            }
            if (uVar1 != 2) goto LAB_10066af00;
            uVar8 = *(undefined8 *)(param_1 + 0x60);
            sVar3 = psVar13[-1];
            sVar2 = *psVar13;
            uVar5 = 0;
            uVar9 = 0x11;
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x60);
            sVar3 = psVar13[-1];
            sVar2 = *psVar13;
            uVar5 = 3;
LAB_10066aef4:
            uVar9 = 0x31;
          }
          FUN_1010b519c(uVar5,uVar8,sVar3,sVar2,uVar9,0);
        }
      }
LAB_10066af00:
      uVar12 = uVar12 + 1;
      psVar13 = psVar13 + 8;
    } while (uVar12 < *(uint *)(param_1 + 0x70));
  }
  return;
}




void FUN_10066af54(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  do {
    while (*param_1 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_1[10];
  piVar9 = param_1 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar5 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar7 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x7f)) {
    pvVar7 = *(void **)(param_1 + (ulong)uVar1 * 4 + 4);
    if (pvVar7 == (void *)0x0) {
      pvVar7 = operator_new(0x20010);
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
    }
    else {
      uVar6 = *(undefined8 *)((long)pvVar7 + 0x20008);
      *(void **)((long)pvVar7 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar7;
      *(undefined8 *)(param_1 + (ulong)uVar1 * 4 + 4) = uVar6;
      uVar5 = 0x20000;
      *(undefined4 *)((long)pvVar7 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar7 + 0x20000) = (int)uVar5 + -0x7f;
  puVar4 = (undefined8 *)((long)pvVar7 + 0x20000 + (7 - uVar5) & 0xfffffffffffffff8);
  *param_1 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_1014a88e0;
  puVar4[1] = 0;
  uVar10 = param_2[1];
  uVar6 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  puVar4[9] = param_2[5];
  puVar4[8] = uVar13;
  puVar4[0xb] = uVar15;
  puVar4[10] = uVar14;
  puVar4[5] = uVar10;
  puVar4[4] = uVar6;
  puVar4[7] = uVar12;
  puVar4[6] = uVar11;
  puVar4[0xc] = param_3;
  return;
}




long FUN_10066b05c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)FUN_1010b23f0();
  *puVar2 = &PTR_thunk_FUN_10066b1b8_1014a8898;
  puVar2[2] = param_3;
  puVar2[3] = param_2;
  lVar5 = 0x20;
  do {
    FUN_1010b7de4(param_1 + lVar5);
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x110);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  uVar4 = DAT_101ea59b8 & 0xffffffff0000ff9c;
  DAT_101ea59b8 = uVar4 | 0x320000;
  DAT_101ea59c0 = uVar4 | 0x120000;
  DAT_101ea59c8 = uVar4 | 0x310000;
  DAT_101dc0718 = *(undefined1 *)(param_2 + 0x1c60e9);
  lVar5 = 0x20;
  do {
    lVar1 = param_1 + lVar5;
    FUN_1010b7eac(lVar1,0x6000);
    uVar3 = FUN_1010b7ebc(lVar1,0,0xd8000,6,0);
    FUN_1010b7f64(lVar1,0,uVar3,4,3,0,1);
    FUN_1010b7f64(lVar1,4,uVar3,4,4,0xc,1);
    FUN_1010b7f64(lVar1,5,uVar3,4,2,0x1c,1);
    lVar5 = lVar5 + 0x50;
  } while (lVar5 != 0x110);
  return param_1;
}




void FUN_10066b1b8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10066b1b8_1014a8898;
  lVar1 = 0x20;
  do {
    FUN_1010b7e24((long)param_1 + lVar1);
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0x110);
  lVar1 = 0xc0;
  do {
    FUN_1010b7e7c((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x50;
  } while (lVar1 != -0x30);
  FUN_1010b240c(param_1);
  return;
}




void thunk_FUN_10066b1b8(void)

{
  FUN_10066b1b8();
  return;
}




void FUN_10066b218(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10066b1b8();
  operator_delete(pvVar1);
  return;
}




void FUN_10066b22c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x4;
  undefined8 in_x5;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x1c60c8) != '\0') {
    FUN_10066998c();
  }
  plVar13 = (long *)(in_x4 + -8);
  lVar7 = (**(code **)(*plVar13 + 0x10))(plVar13);
  uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
  iVar6 = *(int *)(lVar7 + 0x78);
  if (iVar6 == 0) {
    return;
  }
  lVar9 = FUN_10066af54(*(undefined8 *)(param_1 + 0x10),uVar8,
                        param_1 + (ulong)*(uint *)(param_1 + 0x120) * 0x50 + 0x20);
  plVar13 = (long *)FUN_10066acc0(*(undefined8 *)(param_1 + 0x10),iVar6);
  *(long **)(lVar9 + 0x68) = plVar13;
  *(int *)(lVar9 + 0x70) = iVar6;
  uVar4 = *(uint *)(param_1 + 0x110);
  lVar10 = *(long *)(lVar7 + 0x68) + -0x2c0;
  uVar11 = uVar4;
  if (*(long *)(lVar7 + 0x68) != 0 && lVar10 != 0) {
    do {
      uVar5 = *(uint *)(lVar10 + 0x200);
      uVar12 = uVar5;
      if (uVar5 == 0) goto switchD_10066b310_caseD_2;
      switch(*(uint *)(lVar10 + 0x220) & 0xf) {
      case 0:
      case 1:
        iVar6 = uVar5 << 1;
        goto LAB_10066b350;
      case 2:
      case 3:
        break;
      case 4:
        uVar12 = 0;
        if (1 < uVar5) {
          uVar12 = uVar5 << 1;
        }
        break;
      case 5:
      case 6:
        uVar12 = ((*(uint *)(lVar10 + 0x220) >> 0xb & 0xfffe) + 4) * uVar5 - 2;
        break;
      case 7:
        iVar6 = uVar5 << 3;
LAB_10066b350:
        uVar12 = (uVar5 + iVar6) * 2;
        break;
      case 8:
        uVar12 = uVar5 * 0x30;
        break;
      default:
        uVar12 = 0;
      }
switchD_10066b310_caseD_2:
      uVar5 = uVar11 + uVar12;
      if (0x6000 < uVar5) {
        return;
      }
      *plVar13 = lVar10;
      *(short *)(plVar13 + 1) = (short)uVar11;
      *(short *)((long)plVar13 + 10) = (short)uVar12;
      *(uint *)(param_1 + 0x110) = uVar5;
      plVar1 = (long *)(lVar10 + 0x2c0);
      lVar10 = 0;
      if (*plVar1 != 0) {
        lVar10 = *plVar1 + -0x2c0;
      }
      plVar13 = plVar13 + 2;
      uVar11 = uVar5;
    } while (lVar10 != 0);
  }
  lVar3 = *(long *)(param_1 + 0x118) + (ulong)(uVar4 * 0x24);
  lVar10 = *(long *)(param_1 + 0x18) + 0x38;
  lVar2 = *(long *)(param_1 + 0x18) + 0x78;
  if ((*(char *)(param_1 + 0x124) == '\0') || (iVar6 = FUN_1004e4ecc(&DAT_101dbe4b0), iVar6 == 0)) {
    FUN_100666f14(lVar7,lVar2,lVar3,lVar10);
  }
  else {
    FUN_10066aa38(lVar7,lVar2,lVar3,lVar10,*(undefined8 *)(param_1 + 0x10));
  }
  FUN_1010b2aa4(in_x5,lVar9);
  return;
}




void FUN_10066b434(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x110) = 0;
  uVar1 = (*(int *)(param_1 + 0x120) + 1U) % 3;
  *(uint *)(param_1 + 0x120) = uVar1;
  FUN_1010b7ff8(param_1 + 0x20 + (ulong)uVar1 * 0x50,0x31,6);
  uVar2 = FUN_1010b8000(param_1 + 0x20 + (ulong)*(uint *)(param_1 + 0x120) * 0x50,0);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  return;
}




void FUN_10066b4ac(long param_1)

{
  *(undefined8 *)(param_1 + 0x118) = 0;
  FUN_10066a948();
  FUN_1010b7ffc(param_1 + (ulong)*(uint *)(param_1 + 0x120) * 0x50 + 0x20,0x31,
                *(int *)(param_1 + 0x110) * 0x24);
  return;
}




void FUN_10066b4f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10066c32c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10066b570(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_60 [8];
  undefined4 local_58 [4];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar9 = *(long *)(param_1 + 0x208);
  if (lVar9 != 0) {
    uVar3 = *(uint *)(param_1 + 0x2b0);
    if (*(char *)(param_1 + 0x2a8) == '\0') {
      if (uVar3 != 0) {
        lVar9 = 0;
        do {
          lVar6 = *(long *)(*(long *)(param_1 + 0x2b8) + lVar9);
          uVar4 = *(undefined4 *)(lVar6 + 0x10);
          uVar1 = *(ushort *)(lVar6 + 0x14) & 7;
          FUN_100666514(lVar6,local_58,uVar1);
          switch(uVar1) {
          case 1:
            FUN_1010af998(local_58[0],*(undefined8 *)(param_1 + 0x2a0),uVar4);
            break;
          case 2:
            FUN_1010af9d0(*(undefined8 *)(param_1 + 0x2a0),uVar4,local_58);
            break;
          case 3:
            FUN_1010afa18(*(undefined8 *)(param_1 + 0x2a0),uVar4,local_58);
            break;
          case 4:
            FUN_1010afa68(*(undefined8 *)(param_1 + 0x2a0),uVar4,local_58);
          }
          lVar9 = lVar9 + 8;
        } while ((ulong)uVar3 * 8 - lVar9 != 0);
      }
    }
    else {
      thunk_FUN_1010add94(auStack_60);
      if (*(long *)(param_1 + 0x2a0) != 0) {
        if (*(long *)(lVar9 + 8) != 0) {
          pvVar5 = (void *)thunk_FUN_1010af6a0();
          operator_delete(pvVar5);
        }
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined8 *)(param_1 + 0x2a0) = 0;
      }
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          lVar6 = *(long *)(*(long *)(param_1 + 0x2b8) + uVar8 * 8);
          uVar4 = *(undefined4 *)(lVar6 + 0x10);
          uVar2 = *(ushort *)(lVar6 + 0x14) & 7;
          FUN_100666514(lVar6,local_58,uVar2);
          if (uVar2 - 1 < 4) {
            FUN_1010ae064(auStack_60,uVar8,local_58,uVar2,1,uVar4);
          }
          uVar8 = uVar8 + 1;
        } while (uVar3 != uVar8);
        uVar7 = FUN_1010ae1d8(auStack_60);
        *(undefined8 *)(param_1 + 0x2a0) = uVar7;
        *(undefined8 *)(lVar9 + 8) = uVar7;
      }
      thunk_FUN_1010adde4(auStack_60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10066b730(float param_1,ushort *param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  float fVar11;
  
  uVar10 = *(uint *)(param_2 + 0x100);
  if (uVar10 != 0) {
    uVar7 = 0;
    piVar1 = (int *)(param_3 + 0x84004);
    puVar8 = param_2;
    puVar9 = param_2;
    do {
      uVar3 = *puVar9;
      lVar2 = param_3 + (ulong)uVar3 * 4;
      fVar11 = *(float *)(lVar2 + 0x50000);
      if ((fVar11 == -1.0) || (param_1 <= *(float *)(lVar2 + 0x48000) + fVar11)) {
        if (puVar9 != puVar8) {
          *puVar8 = uVar3;
        }
        puVar8 = puVar8 + 1;
      }
      else {
        do {
          while (*piVar1 != 0) {
            ClearExclusiveLocal();
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 100;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        iVar4 = *(int *)(param_3 + 0x84000);
        *(ushort *)(param_3 + (long)iVar4 * 2 + 0x80000) = uVar3;
        *(int *)(param_3 + 0x84000) = iVar4 + 1;
        *(undefined4 *)(param_3 + 0x84004) = 0;
        uVar10 = *(uint *)(param_2 + 0x100);
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar7 < uVar10);
    *(int *)(param_2 + 0x100) = (int)((ulong)((long)puVar8 - (long)param_2) >> 1);
  }
  return;
}




void FUN_10066b7f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined2 *puVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_3 + 0x288) + -0xc0;
  if (*(long *)(param_3 + 0x288) != 0 && lVar13 != 0) {
    piVar3 = (int *)(param_4 + 0x84004);
    do {
      uVar5 = *(uint *)(param_3 + 0x200);
      if (0xff < (int)uVar5) {
        return;
      }
      iVar10 = FUN_1006679c8(param_1,param_2,lVar13,param_6);
      if (iVar10 != 0) {
        puVar4 = (undefined2 *)(param_3 + (ulong)uVar5 * 2);
        iVar6 = *(int *)(param_3 + 0x200);
        do {
          while (*piVar3 != 0) {
            ClearExclusiveLocal();
          }
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = 100;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        iVar9 = 0x100 - iVar6;
        if (iVar6 + iVar10 < 0x101) {
          iVar9 = iVar10;
        }
        iVar10 = *(int *)(param_4 + 0x84000);
        lVar11 = (long)iVar10;
        if (iVar10 == 0) {
          *piVar3 = 0;
        }
        else {
          iVar6 = iVar10;
          if (iVar9 <= iVar10) {
            iVar6 = iVar9;
          }
          iVar9 = iVar10 - iVar6;
          if (iVar9 < iVar10) {
            puVar12 = puVar4;
            do {
              lVar2 = lVar11 * 2;
              lVar11 = lVar11 + -1;
              *puVar12 = *(undefined2 *)(param_4 + 0x7fffe + lVar2);
              puVar12 = puVar12 + 1;
            } while (iVar9 < lVar11);
          }
          *(int *)(param_4 + 0x84000) = iVar9;
          *(undefined4 *)(param_4 + 0x84004) = 0;
          if (iVar6 != 0) {
            FUN_100667aa4(param_1,lVar13,param_4,iVar6,puVar4,param_5,param_6);
            *(int *)(param_3 + 0x200) = *(int *)(param_3 + 0x200) + iVar6;
          }
        }
      }
      plVar1 = (long *)(lVar13 + 0xc0);
      lVar13 = 0;
      if (*plVar1 != 0) {
        lVar13 = *plVar1 + -0xc0;
      }
    } while (lVar13 != 0);
  }
  return;
}




void FUN_10066b968(undefined1 param_1 [16],float param_2,ushort *param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  undefined8 uVar9;
  float afStack_50 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  pfVar7 = (float *)((long)afStack_50 - ((ulong)*(uint *)(param_3 + 0x100) * 4 + 0xf & 0x7fffffff0))
  ;
  iVar4 = (**(code **)(param_3 + 300))
                    ((ulong)*(uint *)(param_3 + 0x100),pfVar7,param_3,param_4,param_5);
  if (iVar4 == 1) {
    fVar8 = 1.0 - param_2 * *pfVar7;
    if (fVar8 != 1.0) {
      iVar4 = *(int *)(param_3 + 0x100);
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar3 = *param_3;
        lVar2 = param_4 + 0x18000;
        lVar6 = (ulong)uVar3 * 0xc;
        uVar9 = *(undefined8 *)(lVar2 + lVar6);
        *(ulong *)(lVar2 + lVar6) =
             CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar8,(float)uVar9 * fVar8);
        uVar1 = (uint)uVar3 * 3 + 2;
        *(float *)(lVar2 + (ulong)uVar1 * 4) = *(float *)(lVar2 + (ulong)uVar1 * 4) * fVar8;
        param_3 = param_3 + 1;
      }
    }
  }
  else {
    uVar5 = (ulong)*(uint *)(param_3 + 0x100);
    if (*(uint *)(param_3 + 0x100) != 0) {
      do {
        uVar3 = *param_3;
        fVar8 = 1.0 - param_2 * *pfVar7;
        lVar2 = param_4 + 0x18000;
        lVar6 = (ulong)uVar3 * 0xc;
        uVar9 = *(undefined8 *)(lVar2 + lVar6);
        *(ulong *)(lVar2 + lVar6) =
             CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar8,(float)uVar9 * fVar8);
        uVar1 = (uint)uVar3 * 3 + 2;
        *(float *)(lVar2 + (ulong)uVar1 * 4) = *(float *)(lVar2 + (ulong)uVar1 * 4) * fVar8;
        uVar5 = uVar5 - 1;
        param_3 = param_3 + 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar5 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10066baac(undefined1 param_1 [16],undefined8 param_2,ushort *param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 local_50;
  float afStack_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = -((ulong)*(uint *)(param_3 + 0x100) * 0xc + 0xf & 0x1ffffffff0);
  puVar8 = (undefined8 *)((long)afStack_48 + lVar3 + -8);
  local_50 = param_2;
  iVar5 = (**(code **)(param_3 + 0x130))
                    ((ulong)*(uint *)(param_3 + 0x100),puVar8,param_3,param_4,param_5);
  fVar11 = (float)local_50;
  if (iVar5 == 1) {
    fVar9 = (float)*puVar8 * fVar11;
    fVar10 = (float)((ulong)*puVar8 >> 0x20) * fVar11;
    fVar11 = *(float *)((long)afStack_48 + lVar3) * fVar11;
    if (fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 != 0.0) {
      iVar5 = *(int *)(param_3 + 0x100);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar4 = *param_3;
        lVar3 = param_4 + 0x18000;
        lVar7 = (ulong)uVar4 * 0xc;
        uVar12 = *(undefined8 *)(lVar3 + lVar7);
        *(ulong *)(lVar3 + lVar7) =
             CONCAT44((float)((ulong)uVar12 >> 0x20) + fVar10,(float)uVar12 + fVar9);
        uVar1 = (uint)uVar4 * 3 + 2;
        *(float *)(lVar3 + (ulong)uVar1 * 4) = *(float *)(lVar3 + (ulong)uVar1 * 4) + fVar11;
        param_3 = param_3 + 1;
      }
    }
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x100);
    if (uVar1 != 0) {
      uVar6 = 0;
      do {
        uVar4 = *param_3;
        lVar3 = param_4 + 0x18000;
        lVar7 = (ulong)uVar4 * 0xc;
        uVar12 = *(undefined8 *)(lVar3 + lVar7);
        *(ulong *)(lVar3 + lVar7) =
             CONCAT44((float)((ulong)uVar12 >> 0x20) +
                      fVar11 * *(float *)((long)puVar8 + (ulong)((int)uVar6 + 1) * 4),
                      (float)uVar12 + fVar11 * *(float *)((long)puVar8 + (uVar6 & 0xffffffff) * 4));
        uVar2 = (uint)uVar4 * 3 + 2;
        *(float *)(lVar3 + (ulong)uVar2 * 4) =
             *(float *)(lVar3 + (ulong)uVar2 * 4) +
             fVar11 * *(float *)((long)puVar8 + (ulong)((int)uVar6 + 2) * 4);
        uVar6 = uVar6 + 3;
        param_3 = param_3 + 1;
      } while ((ulong)uVar1 * 3 != uVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10066bc1c(float param_1,ushort *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_2 + 0x100);
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    uVar3 = *param_2;
    lVar4 = (ulong)uVar3 * 0xc;
    uVar5 = *(undefined8 *)(param_3 + 0x18000 + lVar4);
    *(ulong *)(param_3 + lVar4) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + lVar4) >> 0x20) +
                  param_1 * (float)((ulong)uVar5 >> 0x20),
                  (float)*(undefined8 *)(param_3 + lVar4) + param_1 * (float)uVar5);
    uVar1 = (uint)uVar3 * 3 + 2;
    *(float *)(param_3 + (ulong)uVar1 * 4) =
         *(float *)(param_3 + (ulong)uVar1 * 4) +
         param_1 * *(float *)(param_3 + 0x18000 + (ulong)uVar1 * 4);
    param_2 = param_2 + 1;
  }
  return;
}




void FUN_10066bc68(undefined1 param_1 [16],undefined8 param_2,ushort *param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 local_50;
  float afStack_48 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar6 = -((ulong)*(uint *)(param_3 + 0x100) * 0xc + 0xf & 0x1ffffffff0);
  puVar7 = (undefined8 *)((long)afStack_48 + lVar6 + -8);
  local_50 = param_2;
  iVar4 = (**(code **)(param_3 + 0x134))
                    ((ulong)*(uint *)(param_3 + 0x100),puVar7,param_3,param_4,param_5);
  fVar10 = (float)local_50;
  if (iVar4 == 1) {
    iVar4 = *(int *)(param_3 + 0x100);
    if (iVar4 != 0) {
      uVar8 = *puVar7;
      fVar9 = *(float *)((long)afStack_48 + lVar6);
      do {
        uVar3 = *param_3;
        lVar6 = (ulong)uVar3 * 0xc;
        uVar11 = *(undefined8 *)(param_4 + lVar6);
        *(ulong *)(param_4 + lVar6) =
             CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar8 >> 0x20) * fVar10,
                      (float)uVar11 + (float)uVar8 * fVar10);
        uVar1 = (uint)uVar3 * 3 + 2;
        *(float *)(param_4 + (ulong)uVar1 * 4) =
             *(float *)(param_4 + (ulong)uVar1 * 4) + fVar9 * fVar10;
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x100);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        uVar3 = *param_3;
        lVar6 = (ulong)uVar3 * 0xc;
        uVar8 = *(undefined8 *)(param_4 + lVar6);
        *(ulong *)(param_4 + lVar6) =
             CONCAT44((float)((ulong)uVar8 >> 0x20) +
                      fVar10 * *(float *)((long)puVar7 + (ulong)((int)uVar5 + 1) * 4),
                      (float)uVar8 + fVar10 * *(float *)((long)puVar7 + (uVar5 & 0xffffffff) * 4));
        uVar2 = (uint)uVar3 * 3 + 2;
        *(float *)(param_4 + (ulong)uVar2 * 4) =
             *(float *)(param_4 + (ulong)uVar2 * 4) +
             fVar10 * *(float *)((long)puVar7 + (ulong)((int)uVar5 + 2) * 4);
        uVar5 = uVar5 + 3;
        param_3 = param_3 + 1;
      } while ((ulong)uVar1 * 3 != uVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10066bdbc(undefined1 param_1 [16],float param_2,ushort *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float afStack_50 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  pfVar4 = (float *)((long)afStack_50 - ((ulong)*(uint *)(param_3 + 0x100) * 4 + 0xf & 0x7fffffff0))
  ;
  iVar2 = (**(code **)(param_3 + 0x138))
                    ((ulong)*(uint *)(param_3 + 0x100),pfVar4,param_3,param_4,param_5);
  if (iVar2 == 1) {
    if ((0.01 <= ABS(*pfVar4)) && (iVar2 = *(int *)(param_3 + 0x100), iVar2 != 0)) {
      param_2 = *pfVar4 * param_2;
      do {
        lVar1 = param_4 + (ulong)*param_3 * 8;
        uVar5 = *(undefined8 *)(lVar1 + 0x30000);
        uVar5 = NEON_fmaxnm(CONCAT44((float)((ulong)uVar5 >> 0x20) + param_2,(float)uVar5 + param_2)
                            ,0,4);
        *(undefined8 *)(lVar1 + 0x30000) = uVar5;
        iVar2 = iVar2 + -1;
        param_3 = param_3 + 1;
      } while (iVar2 != 0);
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_3 + 0x100);
    if (*(uint *)(param_3 + 0x100) != 0) {
      do {
        lVar1 = param_4 + (ulong)*param_3 * 8;
        uVar5 = *(undefined8 *)(lVar1 + 0x30000);
        uVar5 = NEON_fmaxnm(CONCAT44((float)((ulong)uVar5 >> 0x20) + *pfVar4 * param_2,
                                     (float)uVar5 + *pfVar4 * param_2),0,4);
        *(undefined8 *)(lVar1 + 0x30000) = uVar5;
        uVar3 = uVar3 - 1;
        param_3 = param_3 + 1;
        pfVar4 = pfVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10066bef0(undefined1 param_1 [16],float param_2,ushort *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float afStack_50 [2];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  pfVar4 = (float *)((long)afStack_50 - ((ulong)*(uint *)(param_3 + 0x100) * 4 + 0xf & 0x7fffffff0))
  ;
  iVar2 = (**(code **)(param_3 + 0x13c))
                    ((ulong)*(uint *)(param_3 + 0x100),pfVar4,param_3,param_4,param_5);
  if (iVar2 == 1) {
    fVar5 = *pfVar4;
    if ((0.01 <= ABS(fVar5)) && (iVar2 = *(int *)(param_3 + 0x100), iVar2 != 0)) {
      do {
        lVar1 = param_4 + (ulong)*param_3 * 4;
        *(float *)(lVar1 + 0x40000) = *(float *)(lVar1 + 0x40000) + fVar5 * param_2;
        iVar2 = iVar2 + -1;
        param_3 = param_3 + 1;
      } while (iVar2 != 0);
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_3 + 0x100);
    if (*(uint *)(param_3 + 0x100) != 0) {
      do {
        lVar1 = param_4 + (ulong)*param_3 * 4;
        *(float *)(lVar1 + 0x40000) = *(float *)(lVar1 + 0x40000) + param_2 * *pfVar4;
        uVar3 = uVar3 - 1;
        param_3 = param_3 + 1;
        pfVar4 = pfVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10066c008(ushort *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_101444218;
  uVar5 = (ulong)*(uint *)(param_1 + 0x100);
  plVar6 = alStack_40 + uVar5 * -2;
  iVar4 = (**(code **)(param_1 + 0x140))(uVar5,plVar6,param_1,param_2,param_3);
  if (iVar4 == 1) {
    iVar4 = *(int *)(param_1 + 0x100);
    if (iVar4 != 0) {
      lVar9 = alStack_40[uVar5 * -2 + 1];
      lVar7 = *plVar6;
      do {
        lVar1 = param_2 + (ulong)*param_1 * 0x10;
        *(long *)(lVar1 + 0x58008) = lVar9;
        *(long *)(lVar1 + 0x58000) = lVar7;
        iVar4 = iVar4 + -1;
        param_1 = param_1 + 1;
      } while (iVar4 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x100);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        lVar7 = param_2 + (ulong)*param_1 * 0x10;
        puVar3 = (undefined8 *)((long)plVar6 + (uVar5 & 0xfffffffc) * 4);
        uVar8 = *puVar3;
        *(undefined8 *)(lVar7 + 0x58008) = puVar3[1];
        *(undefined8 *)(lVar7 + 0x58000) = uVar8;
        uVar5 = uVar5 + 4;
        param_1 = param_1 + 1;
      } while ((ulong)uVar2 * 4 - uVar5 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != alStack_40[1]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10066c0f4(void)

{
  return;
}




void FUN_10066c0fc(void)

{
  return;
}




void FUN_10066c104(void)

{
  return;
}




void FUN_10066c10c(void)

{
  return;
}




void FUN_10066c114(void)

{
  return;
}




void FUN_10066c118(void)

{
  return;
}




void FUN_10066c120(void)

{
  return;
}




void FUN_10066c124(void)

{
  return;
}




void FUN_10066c128(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10066c128(param_1,*param_2);
    FUN_10066c128(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10066c168(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 FUN_10066c1bc(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && (*(uint *)(plVar2 + 4) <= uVar1)) {
      FUN_10066c21c();
      return 1;
    }
  }
  return 0;
}




long * FUN_10066c21c(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_10066c2b0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10066c32c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10066c3a8(void)

{
  thunk_FUN_1004e4dcc(&DAT_101dbe4b0);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101dbe4b0,0x100000000);
  FUN_1010cf208(&DAT_101dc060c);
  DAT_101ea59b8 = 0x7010100ff;
  DAT_101ea59c0 = 0x7010100ff;
  DAT_101ea59c8 = 0x7010100ff;
  DAT_101dc0718 = 0xff;
  return;
}




void FUN_10066c42c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.9;
      if ((fVar4 < 1.0) && (fVar5 = 0.1, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.9;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10119e200 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10119e200 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119e200 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066c4ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066c4fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_10066c50c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066c518(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066c528(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_10066c534(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066c598(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066c5a4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066c5b4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 8.8475643e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066c61c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x400000003e99999a;
  return 1;
}




ulong FUN_10066c630(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066c688(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e19999a;
  return 1;
}




ulong FUN_10066c69c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066c6d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181ac0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_10066c71c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066c72c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066c73c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




undefined8 FUN_10066c74c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43960000;
  return 1;
}




undefined8 FUN_10066c75c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc0e0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066c774(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066c780(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10066c790(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066c79c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066c7ac(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939677e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066c810(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




undefined8 FUN_10066c820(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_10066c82c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-11 + 0.2;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066c894(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181280,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066c8d8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066c914(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_1011a3400 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_1011a3400 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1011a3400 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066c9c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066c9d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1a00000;
  return 1;
}




undefined8 FUN_10066c9e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066c9f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066ca00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066ca0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066ca1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066ca28(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066ca38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_10066ca4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_10066ca5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066ca68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




ulong FUN_10066ca7c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066cab8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066caf4(float param_1,uint param_2,undefined4 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 0.0;
      fVar5 = 0.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1011a3400 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1011a3400 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1011a3400 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = 0;
      param_3[1] = fVar5;
      param_3[2] = 0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar4 < 1.0) && (0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_10119f000 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10119f000 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119f000 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_10066cc10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066cc20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_10066cc30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066cc40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4120000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066cc58(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066cc68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066cc78(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066cc88(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066cc98(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066ccfc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_10066cd0c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-08 + -50.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066cd74(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066cdd8(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181290,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066ce1c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066ce58(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar8 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      fVar6 = 0.0;
      fVar5 = 0.2;
      if (fVar8 < 1.0) {
        if (fVar8 <= 0.0) {
          fVar6 = 1.0;
          fVar5 = 0.0;
        }
        else {
          fVar7 = fVar8 * 64.0;
          uVar3 = (uint)(fVar8 * 64.0);
          uVar1 = uVar3 + 1;
          if (uVar1 < 0x40) {
            fVar5 = *(float *)(&DAT_10119c900 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_10119c900 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_10119c900 + (ulong)uVar3 * 4));
          }
          fVar6 = 0.0;
          if (uVar1 < 0x40) {
            fVar6 = *(float *)(&DAT_1011a3400 + (ulong)uVar3 * 4) +
                    (fVar7 - (float)(int)fVar7) *
                    (*(float *)(&DAT_1011a3400 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1011a3400 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar5;
      param_3[1] = param_1;
      param_3[2] = fVar6;
      fVar5 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if ((fVar5 < 1.0) && (fVar4 = 0.5, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_101198400 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_101198400 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101198400 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_10066cfb8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066cfc8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return 1;
}




undefined8 FUN_10066cfd8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066cfe4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a0000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066cffc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10066d00c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




undefined8 FUN_10066d01c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_10066d02c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066d03c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-10;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066d094(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f0000003f000000;
  return 1;
}




ulong FUN_10066d0a4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066d0fc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066d160(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011812a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066d1a4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066d1e8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_10119fe00 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10119fe00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119fe00 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066d298(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066d2a8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_10066d2b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066d2c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066d2d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066d2e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066d2f4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066d300(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066d310(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066d320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000040800000;
  return 1;
}




undefined8 FUN_10066d334(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066d340(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_10066d354(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066d390(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066d3cc(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar6 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      fVar5 = 0.2;
      if (fVar6 < 1.0) {
        fVar4 = 1.0;
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          fVar5 = fVar6 * 64.0;
          uVar3 = (uint)(fVar6 * 64.0);
          uVar1 = uVar3 + 1;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_1011a3400 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_1011a3400 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_1011a3400 + (ulong)uVar3 * 4));
            fVar5 = *(float *)(&DAT_101189200 + (ulong)uVar3 * 4) +
                    (fVar5 - (float)(int)fVar5) *
                    (*(float *)(&DAT_101189200 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_101189200 + (ulong)uVar3 * 4));
          }
          else {
            fVar4 = 0.0;
            fVar5 = 0.2;
          }
        }
      }
      *param_3 = fVar5;
      param_3[1] = 0.0;
      param_3[2] = fVar4;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar5 = 1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_1011a3000 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_1011a3000 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1011a3000 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_10066d538(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_10066d548(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -1.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_101181b00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_101181b00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101181b00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 + fVar5;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066d5e8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066d5f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4120000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066d60c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066d61c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_10066d62c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066d638(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066d648(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066d6ac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_10066d6bc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 8.381903e-08 + -90.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066d724(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626452e-10 + 0.4;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066d78c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011812b0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066d7d0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066d814(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.0;
      if ((fVar3 < 1.0) && (fVar4 = 1.0, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_1011a3400 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_1011a3400 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1011a3400 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar3 = 1.0;
      if ((fVar4 < 1.0) && (fVar3 = 0.0, -0.1 < fVar4)) {
        fVar4 = fVar4 * 58.181816 + 5.8181815;
        uVar1 = (int)fVar4 + 1;
        fVar3 = 1.0;
        if (uVar1 < 0x40) {
          fVar3 = *(float *)(&DAT_1011a2800 + (ulong)(uint)(int)fVar4 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_1011a2800 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1011a2800 + (ulong)(uint)(int)fVar4 * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_10066d948(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066d958(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_10066d968(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_10066d978(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4120000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066d990(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10066d9a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066d9ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_10066d9bc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066d9cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066d9dc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fc00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_10066d9ec(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066da44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_10066da54(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066da98(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066dadc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101180690,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066db20(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066db5c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_10066dbf0:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10066dbf0;
          fVar5 = *(float *)(&DAT_101181c00 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_101181c00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101181c00 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066dc10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066dc20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0000000;
  return 1;
}




void FUN_10066dc30(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 0.1;
      if ((fVar4 < 1.0) && (fVar5 = 0.3, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = 0.1;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_101181d00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_101181d00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101181d00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * -1400.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066dce8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066dcf8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066dd04(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066dd14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066dd20(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066dd30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066dd3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4059999a4059999a;
  return 1;
}




undefined8 FUN_10066dd54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42f00000;
  return 1;
}




undefined8 FUN_10066dd64(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_10066dd78(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066ddb4(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066ddf0(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar6 = param_2 & 0xffffffff;
    do {
      iVar3 = _rand();
      iVar4 = _rand();
      iVar5 = _rand();
      *param_3 = (float)iVar3 * 9.313226e-10;
      param_3[1] = (float)iVar4 * 1.3969839e-10 + 0.1;
      param_3[2] = (float)iVar5 * 9.313226e-10;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar7 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar8 = 0.0;
      if ((fVar7 < 1.0) && (fVar8 = 2.0, 0.0 < fVar7)) {
        uVar1 = (int)(fVar7 * 64.0) + 1;
        fVar8 = 0.0;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_101181e00 + (ulong)(uint)(int)(fVar7 * 64.0) * 4) +
                  (fVar7 * 64.0 - (float)(int)(fVar7 * 64.0)) *
                  (*(float *)(&DAT_101181e00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101181e00 + (ulong)(uint)(int)(fVar7 * 64.0) * 4));
        }
      }
      param_3[3] = fVar8;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return param_2;
}




undefined8 FUN_10066df40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066df50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066df5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066df68(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc040000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_10066df80(uint param_1,float *param_2,ushort *param_3,long param_4)

{
  float fVar1;
  ulong uVar2;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    do {
      fVar1 = (float)NEON_ucvtf((uint)*(ushort *)
                                       (&DAT_1011a3900 +
                                       ((ulong)*(byte *)(param_4 + (ulong)*param_3 * 4 + 0x78000) ^
                                       0x77) * 2));
      *param_2 = fVar1 * 6.103609e-05 + 2.0;
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




ulong FUN_10066dfd4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-08 + 30.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066e038(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066e044(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066e054(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 6.0535967e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066e0b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f19999a3e99999a;
  return 1;
}




undefined8 FUN_10066e0cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43340000;
  return 1;
}




ulong FUN_10066e0dc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.7939676e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066e144(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011818f0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066e188(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066e1c4(float param_1,ulong param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar6 = param_2 & 0xffffffff;
    do {
      iVar3 = _rand();
      iVar4 = _rand();
      iVar5 = _rand();
      *param_3 = (float)iVar3 * 9.313226e-10;
      param_3[1] = (float)iVar4 * 1.3969839e-10 + 0.1;
      param_3[2] = (float)iVar5 * 9.313226e-10;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar7 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar8 = 0.0;
      if ((fVar7 < 1.0) && (fVar8 = 1.0, 0.0 < fVar7)) {
        uVar1 = (int)(fVar7 * 64.0) + 1;
        fVar8 = 0.0;
        if (uVar1 < 0x40) {
          fVar8 = *(float *)(&DAT_10119e500 + (ulong)(uint)(int)(fVar7 * 64.0) * 4) +
                  (fVar7 * 64.0 - (float)(int)(fVar7 * 64.0)) *
                  (*(float *)(&DAT_10119e500 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119e500 + (ulong)(uint)(int)(fVar7 * 64.0) * 4));
        }
      }
      param_3[3] = fVar8;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return param_2;
}




undefined8 FUN_10066e314(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066e324(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10066e334(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066e340(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xc000000000000000;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066e358(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




ulong FUN_10066e368(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066e3cc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066e3d8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066e3e8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.7252903e-09 + 2.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066e44c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4000000040000000;
  return 1;
}




ulong FUN_10066e45c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066e4b4(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 4.656613e-11 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066e51c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011817e0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066e560(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a80,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066e5a4(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      fVar4 = 0.5;
      if ((fVar3 < 1.0) && (fVar4 = -0.3, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 0.5;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_101199c00 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_101199c00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101199c00 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      param_3[1] = param_1;
      param_3[2] = 0.0;
      fVar4 = (param_1 - *(float *)(param_5 + (ulong)*param_4 * 4 + 0x48000)) /
              *(float *)(param_5 + (ulong)*param_4 * 4 + 0x50000);
      if (1.0 <= fVar4) {
LAB_10066e6b0:
        fVar3 = -0.0;
      }
      else {
        fVar3 = 0.0;
        if (0.0 < fVar4) {
          uVar1 = (int)(fVar4 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10066e6b0;
          fVar3 = *(float *)(&DAT_101181f00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_101181f00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101181f00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      param_3[3] = fVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_10066e6d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066e6e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_10066e6f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066e6fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066e70c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40400000;
  return 1;
}




undefined8 FUN_10066e71c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_10066e72c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066e738(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




ulong FUN_10066e748(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 9.313226e-10 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066e7ac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_10066e7bc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066e814(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 3.259629e-10 + 0.3;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066e87c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066e8c0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066e8fc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066e938(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066e974(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_10066ea08:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10066ea08;
          fVar5 = *(float *)(&DAT_101196900 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_101196900 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101196900 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066ea28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066ea38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10066ea48(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_10066ea58(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066ea68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066ea74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066ea84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066ea90(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066eaa0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066eaac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40a00000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_10066eabc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066eb14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_10066eb28(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066eb6c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066eba8(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar8 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 1.0;
      fVar6 = 0.0;
      if ((fVar8 < 1.0) && (0.0 < fVar8)) {
        fVar7 = fVar8 * 64.0;
        uVar4 = (uint)(fVar8 * 64.0);
        uVar1 = uVar4 + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_10118c500 + (ulong)uVar4 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_10118c500 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10118c500 + (ulong)uVar4 * 4));
          fVar5 = *(float *)(&DAT_101182000 + (ulong)uVar4 * 4) +
                  (fVar7 - (float)(int)fVar7) *
                  (*(float *)(&DAT_101182000 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101182000 + (ulong)uVar4 * 4));
        }
      }
      *param_3 = param_1;
      param_3[1] = fVar6;
      param_4 = param_4 + 1;
      param_3[2] = fVar5;
      param_3[3] = 1.0;
      param_3 = param_3 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066ec78(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




ulong FUN_10066ec88(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.8626451e-09 + 3.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066ecec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066ecf8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066ed08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066ed14(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_10066ed24(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_10066ed30(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (0 < (int)param_1) {
    uVar4 = NEON_fmov(0x3f800000,4);
    uVar3 = param_1;
    do {
      *param_2 = uVar4;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      iVar2 = _rand();
      *(float *)((long)param_2 + 0xc) = (float)iVar2 * 2.3283064e-10 + 0.5;
      param_2 = param_2 + 2;
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066edb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066edbc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_10066edcc(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066ee24(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 2.3283064e-10 + 0.5;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066ee88(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066eecc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066ef08(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_10066ef9c:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10066ef9c;
          fVar5 = *(float *)(&DAT_101196900 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_101196900 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_101196900 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066efbc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066efcc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066efdc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066efe8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066eff8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f004(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066f014(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f020(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066f030(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f03c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40400000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_10066f04c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_10066f068(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066f0ac(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066f0e8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar3 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar3;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar1 = param_5 + (ulong)*param_4 * 4;
      *(float *)((long)param_3 + 0xc) =
           (param_1 - *(float *)(lVar1 + 0x48000)) / *(float *)(lVar1 + 0x50000);
      param_3 = param_3 + 2;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_10066f138(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066f148(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_10066f158(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f164(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066f174(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f180(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




undefined8 FUN_10066f190(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f19c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066f1ac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f1b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4100000041000000;
  return 1;
}




ulong FUN_10066f1c8(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.671724e-07 + 1.0;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066f22c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return 1;
}




ulong FUN_10066f240(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066f284(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066f2c0(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = 1.0;
      if ((fVar6 < 0.9) && (fVar5 = 0.2, 0.0 < fVar6)) {
        fVar6 = fVar6 * 71.111115;
        uVar1 = (int)fVar6 + 1;
        fVar5 = 1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10118a200 + (ulong)(uint)(int)fVar6 * 4) +
                  (fVar6 - (float)(int)fVar6) *
                  (*(float *)(&DAT_10118a200 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10118a200 + (ulong)(uint)(int)fVar6 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066f37c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066f38c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc0a00000;
  return 1;
}




undefined8 FUN_10066f39c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f3a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066f3b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f3c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066f3d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f3e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066f3f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f3fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x40800000,4);
  *param_2 = uVar1;
  return 1;
}




ulong FUN_10066f40c(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.6763806e-07;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066f464(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_10066f478(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011806a0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066f4bc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066f4f8(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar5 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar6 = 0.0;
      if ((fVar5 < 1.0) && (fVar6 = 1.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar6 = 0.0;
        if (uVar1 < 0x40) {
          fVar6 = *(float *)(&DAT_10119e500 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_10119e500 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119e500 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar6;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066f5a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066f5b8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f5c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f5d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066f5e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f5ec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x428c0000;
  return 1;
}




undefined8 FUN_10066f5fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f608(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066f618(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




ulong FUN_10066f628(ulong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      iVar3 = _rand();
      uVar5 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      *param_2 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 9.313226e-10 + 5.0,
                          (float)uVar5 * 1.8626452e-10 + 0.1);
      uVar1 = (int)uVar4 - 1;
      param_2 = param_2 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_10066f6a4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




ulong FUN_10066f6b0(ulong param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (0 < (int)param_1) {
    do {
      iVar2 = _rand();
      *param_2 = (float)iVar2 * 1.3969839e-10 + 0.1;
      uVar1 = (int)uVar3 - 1;
      param_2 = param_2 + 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return param_1;
}




ulong FUN_10066f718(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_1011812c0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066f75c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181a60,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




undefined8 FUN_10066f7a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066f7b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_10066f7c0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -1.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10119a900 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10119a900 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119a900 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 25.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066f864(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f870(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066f880(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066f890(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066f8a0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f8ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066f8bc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




void FUN_10066f8cc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f3333333e4ccccd;
      param_1 = param_1 + -1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




undefined8 FUN_10066f8f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066f8fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_10066f90c(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066f948(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066f984(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_10066fa18:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 0.5;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10066fa18;
          fVar5 = *(float *)(&DAT_10119a800 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_10119a800 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119a800 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066fa38(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_10066fa48(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -1.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10119a900 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10119a900 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119a900 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 25.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066faec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066faf8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066fb08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066fb18(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_10066fb28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066fb34(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066fb44(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10066fb54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4040000040000000;
  return 1;
}




undefined8 FUN_10066fb68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066fb74(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f000000;
  return 1;
}




ulong FUN_10066fb84(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066fbc0(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066fbfc(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_10066fc90:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10066fc90;
          fVar5 = *(float *)(&DAT_1011a2900 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1011a2900 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1011a2900 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066fcb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_10066fcc0(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -1.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10119aa00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10119aa00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119aa00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066fd5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41200000;
  return 1;
}




undefined8 FUN_10066fd6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_10066fd7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066fd88(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_10066fd98(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066fda4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_10066fdb4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3c23d70a;
  return 1;
}




undefined8 FUN_10066fdc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3f80000040e00000;
  return 1;
}




undefined8 FUN_10066fddc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_10066fde8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return 1;
}




ulong FUN_10066fdfc(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _memset_pattern16(param_2,&DAT_101181af0,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




ulong FUN_10066fe40(ulong param_1,void *param_2)

{
  if (0 < (int)param_1) {
    _bzero(param_2,(param_1 & 0xffffffff) << 2);
  }
  return param_1;
}




void FUN_10066fe7c(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar6 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      if (1.0 <= fVar6) {
LAB_10066ff10:
        fVar5 = -0.0;
      }
      else {
        fVar5 = 1.0;
        if (0.0 < fVar6) {
          uVar1 = (int)(fVar6 * 64.0) + 1;
          if (0x3f < uVar1) goto LAB_10066ff10;
          fVar5 = *(float *)(&DAT_1011a3500 + (ulong)(uint)(int)(fVar6 * 64.0) * 4) +
                  (fVar6 * 64.0 - (float)(int)(fVar6 * 64.0)) *
                  (*(float *)(&DAT_1011a3500 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_1011a3500 + (ulong)(uint)(int)(fVar6 * 64.0) * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066ff30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_10066ff40(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar3 = (ulong)param_2;
    do {
      lVar2 = param_5 + (ulong)*param_4 * 4;
      fVar4 = (param_1 - *(float *)(lVar2 + 0x48000)) / *(float *)(lVar2 + 0x50000);
      fVar5 = -1.0;
      if ((fVar4 < 1.0) && (fVar5 = 1.0, 0.0 < fVar4)) {
        uVar1 = (int)(fVar4 * 64.0) + 1;
        fVar5 = -1.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_10119aa00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4) +
                  (fVar4 * 64.0 - (float)(int)(fVar4 * 64.0)) *
                  (*(float *)(&DAT_10119aa00 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_10119aa00 + (ulong)(uint)(int)(fVar4 * 64.0) * 4));
        }
      }
      *param_3 = fVar5 * 15.0;
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  return;
}




undefined8 FUN_10066ffe4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc1a00000;
  return 1;
}




undefined8 FUN_10066fff4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}

