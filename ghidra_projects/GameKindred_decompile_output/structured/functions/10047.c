// functions/10047 — 350 functions
#include "GameKindred.h"




long FUN_100470030(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
    lVar4 = *(long *)(param_1 + 0x60);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar2) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar3 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar3 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar3 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar2);
      if ((int)uVar5 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar4 + uVar5 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 0x78) + (ulong)uVar1 * 0x10;
    }
  }
  return 0;
}




void FUN_1004700b4(uint *param_1,undefined8 *param_2)

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
    FUN_10049f050(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100470134(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = *param_2;
  uStack_24 = param_2[2];
  uVar1 = FUN_1010d00f8(&local_28,param_1,param_1 + 0x100,*(undefined4 *)(param_1 + 0x200),&local_30
                       );
  if ((uVar1 & 1) == 0) {
    *param_2 = local_30;
    param_2[2] = uStack_2c;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10047018c(long param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long local_19a8 [800];
  long local_a8;
  
  local_a8 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 == 0) {
    pfVar11 = (float *)&DAT_1013cd800;
  }
  else {
    pfVar11 = (float *)&DAT_1013cd800;
    do {
      if (*(int *)(*(long *)(lVar13 + 8) + 0xa4) == ram0x0001018672a0) {
        pfVar11 = (float *)(lVar13 + 0x7bc);
        break;
      }
      lVar13 = *(long *)(lVar13 + 0x20);
    } while (lVar13 != 0);
  }
  fVar21 = *pfVar11;
  fVar22 = pfVar11[2];
  bVar4 = false;
  bVar6 = false;
  if (ABS(fVar21) < 1.1920929e-07) {
    bVar4 = false;
    bVar6 = true;
    if (!NAN(ABS(pfVar11[1]))) {
      bVar4 = ABS(pfVar11[1]) < 1.1920929e-07;
      bVar6 = false;
    }
  }
  bVar5 = false;
  bVar7 = false;
  if (bVar4 != bVar6) {
    bVar5 = false;
    bVar7 = true;
    if (!NAN(ABS(fVar22))) {
      bVar5 = ABS(fVar22) < 1.1920929e-07;
      bVar7 = false;
    }
  }
  if (bVar5 != bVar7) {
    fVar21 = *(float *)(param_1 + 0x240);
    fVar22 = *(float *)(param_1 + 0x248);
    fVar23 = fVar21 * fVar21 + *(float *)(param_1 + 0x244) * *(float *)(param_1 + 0x244) +
             fVar22 * fVar22;
    if (1e-08 <= fVar23) {
      fVar23 = SQRT(fVar23);
      fVar21 = fVar21 / fVar23;
      fVar22 = fVar22 / fVar23;
    }
    else {
      fVar21 = 1.0;
      fVar22 = 0.0;
    }
  }
  uVar8 = FUN_1010a0258(param_1,local_19a8,800,DAT_1018672f0);
  if (uVar8 != 0) {
    uVar14 = (ulong)uVar8;
    plVar15 = local_19a8;
    do {
      lVar13 = *plVar15;
      bVar1 = *(byte *)(lVar13 + 0x50);
      fVar23 = *(float *)(lVar13 + 0x34);
      bVar2 = bVar1 >> 2 & 3;
      if (bVar2 == 0) {
LAB_1004703b8:
        uVar12 = (ulong)bVar1 & 3;
        if (*(float *)((long)param_2 + uVar12 * 4) < fVar23) {
          *(float *)((long)param_2 + uVar12 * 4) = fVar23;
        }
      }
      else {
        if (bVar2 != 3) {
          plVar9 = *(long **)(lVar13 + 0x38);
          if (plVar9 != (long *)0x0) {
            if (*(int *)(lVar13 + 0x40) == (int)plVar9[1]) {
              lVar10 = (**(code **)(*plVar9 + 0x10))();
              if ((lVar10 != 0) &&
                 (lVar10 = (**(code **)(**(long **)(lVar13 + 0x38) + 0x10))(), lVar10 != param_1)) {
                lVar10 = (**(code **)(**(long **)(lVar13 + 0x38) + 0x10))();
                fVar17 = *(float *)(lVar10 + 0x250) - *(float *)(param_1 + 0x250);
                fVar18 = *(float *)(lVar10 + 600) - *(float *)(param_1 + 600);
                fVar20 = fVar17 * fVar17 + fVar18 * fVar18;
                fVar16 = (float)DAT_101873a50;
                fVar19 = DAT_101873a50._4_4_;
                if (1e-08 <= fVar20) {
                  fVar20 = SQRT(fVar20);
                  fVar16 = fVar17 / fVar20;
                  fVar19 = fVar18 / fVar20;
                }
                fVar16 = (float)NEON_fminnm(fVar19 * fVar22 + fVar21 * fVar16,0x3f800000);
                if (fVar16 <= -1.0) {
                  fVar16 = -1.0;
                }
                bVar2 = *(byte *)(lVar13 + 0x50) >> 2 & 3;
                if (((bVar2 == 1) && (fVar16 < 0.5)) || ((bVar2 == 2 && (0.5 < fVar16))))
                goto LAB_1004703cc;
              }
            }
            else {
              *(undefined8 *)(lVar13 + 0x38) = 0;
              *(undefined4 *)(lVar13 + 0x40) = DAT_101dc0b88;
            }
          }
          goto LAB_1004703b8;
        }
        fVar16 = (float)NEON_fminnm(*(float *)(lVar13 + 0x48) * fVar21 +
                                    fVar22 * *(float *)(lVar13 + 0x4c),0x3f800000);
        if (fVar16 <= -1.0) {
          fVar16 = -1.0;
        }
        if (0.5 <= fVar16) goto LAB_1004703b8;
      }
LAB_1004703cc:
      plVar15 = plVar15 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar3 = DAT_101e9436c;
  lVar13 = *(long *)(param_1 + 0x40);
  fVar21 = *(float *)(lVar13 + 0x84) +
           *(float *)(lVar13 + 0x138) * (*(float *)(lVar13 + 0x2a0) + 1.0);
  NEON_fminnm(fVar21 + fVar21 * *(float *)(lVar13 + 0x1ec),DAT_101e9436c);
  fVar21 = (float)NEON_fminnm(_DAT_101e942ac,0x3f800000);
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  fVar22 = *(float *)(param_2 + 1);
  if (fVar21 < fVar22) {
    *(float *)(param_2 + 1) = fVar21;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_a8) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(fVar21,fVar22,uVar3);
  }
  return;
}




void FUN_1004704cc(undefined8 param_1,ulong param_2)

{
  undefined4 auStack_34 [3];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10047018c(param_1,auStack_34);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(auStack_34[param_2 & 0xffffffff]);
}




void FUN_10047052c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10047052c_10149a130;
  param_1[5] = &PTR_FUN_10149a160;
  FUN_10034d52c(DAT_101e47e78,DAT_101867380,(long)param_1 + 0x34);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10047052c(void)

{
  FUN_10047052c();
  return;
}




void FUN_100470588(long param_1)

{
  FUN_10047052c(param_1 + -0x28);
  return;
}




void FUN_100470590(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10047052c();
  operator_delete(pvVar1);
  return;
}




void FUN_1004705a4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10047052c(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1004705bc(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 local_20;
  float local_1c;
  undefined4 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  local_20 = *(undefined4 *)(lVar1 + 0x250);
  uStack_18 = *(undefined4 *)(lVar1 + 600);
  local_1c = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
  fVar2 = *(float *)(*(long *)(lVar1 + 0x38) + 100);
  FUN_10034d608(((*(float *)(lVar1 + 0x2e8) + fVar2) * *(float *)(*(long *)(lVar1 + 0x38) + 0x68)) /
                fVar2,DAT_101e47e78,param_1 + 0x34,&local_20,0);
  return;
}




void FUN_10047063c(void)

{
  return;
}




void FUN_100470648(undefined8 param_1,undefined8 param_2)

{
  FUN_100470674(param_1,param_2,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100470674(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  fVar2 = *(float *)(*(long *)(lVar1 + 0x38) + 100);
  FUN_10034d608(((*(float *)(lVar1 + 0x2e8) + fVar2) * *(float *)(*(long *)(lVar1 + 0x38) + 0x68)) /
                fVar2,DAT_101e47e78,param_1 + 0x34,param_3,1);
  return;
}




void FUN_1004706bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  uVar11 = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = param_2[2];
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  *(undefined8 *)(param_1 + 0x48) = param_2[3];
  uVar11 = param_2[4];
  *(undefined8 *)(param_1 + 0x58) = param_2[5];
  *(undefined8 *)(param_1 + 0x50) = uVar11;
  puVar1 = (undefined8 *)param_2[7];
  *(undefined8 *)(param_1 + 0x60) = param_2[6];
  *(undefined1 *)(param_1 + 0xec) = *(undefined1 *)(param_2 + 10);
  puVar4 = (undefined8 *)*puVar1;
  if (puVar4 == (undefined8 *)0x0) {
    uVar8 = 0;
LAB_100470750:
    _memset_pattern16((void *)(param_1 + (uVar8 & 0xffffffff) * 4 + 0x68),&DAT_101159b60,
                      (ulong)(0x13 - (int)uVar8) * 4 + 4);
  }
  else {
    uVar8 = 0;
    do {
      uVar2 = FUN_1003b1948(DAT_101d90978,*puVar4);
      *(undefined4 *)(param_1 + (uVar8 & 0xffffffff) * 4 + 0x68) = uVar2;
      puVar4 = (undefined8 *)puVar1[uVar8 + 1];
      uVar8 = uVar8 + 1;
    } while (puVar4 != (undefined8 *)0x0);
    if ((uint)uVar8 < 0x14) goto LAB_100470750;
  }
  iVar3 = _strcmp((char *)param_2[8],"weapon");
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  else {
    iVar3 = _strcmp((char *)param_2[8],"crystal");
    if (iVar3 != 0) goto LAB_1004707ac;
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
LAB_1004707ac:
  plVar7 = (long *)param_2[9];
  lVar5 = *plVar7;
  if (lVar5 != 0) {
    uVar8 = 0;
    lVar10 = *(long *)(param_1 + 0x10);
    do {
      pcVar9 = *(char **)(lVar5 + 8);
      if (pcVar9 != (char *)0x0) {
        iVar3 = _strcmp(pcVar9,"A");
        if (iVar3 == 0) {
          puVar6 = (undefined4 *)(*(long *)(lVar10 + 0x38) + 0xd0);
        }
        else {
          iVar3 = _strcmp(pcVar9,"B");
          if (iVar3 == 0) {
            puVar6 = (undefined4 *)(*(long *)(lVar10 + 0x38) + 0xd4);
          }
          else {
            iVar3 = _strcmp(pcVar9,"C");
            if (iVar3 != 0) goto LAB_100470840;
            puVar6 = (undefined4 *)(*(long *)(lVar10 + 0x38) + 0xd8);
          }
        }
        *(undefined4 *)(param_1 + (uVar8 & 0xffffffff) * 4 + 0xbc) = *puVar6;
      }
LAB_100470840:
      lVar5 = plVar7[uVar8 + 1];
      uVar8 = uVar8 + 1;
    } while (lVar5 != 0);
  }
  return;
}




ulong FUN_100470864(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x28) == 0xfe || param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar2 = param_3 - 1;
    if (0x12 < uVar2) {
      uVar2 = 0x13;
    }
    uVar3 = (ulong)(uVar2 + 1);
    do {
      iVar1 = *(int *)(param_1 + 0x68 + uVar4 * 4);
      if (iVar1 == 0xffff) {
        return uVar4;
      }
      *(int *)(param_2 + uVar4 * 4) = iVar1;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return uVar3;
}




undefined4 FUN_1004708c8(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x28) != 0xfe) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    iVar1 = FUN_100460e80();
    fVar3 = (float)(iVar1 + 1);
    if (fVar3 <= 1.0) {
      fVar3 = 1.0;
    }
    if ((int)fVar3 - 1U < 0xc) {
      return *(undefined4 *)(param_1 + (ulong)((int)fVar3 - 1U) * 4 + 0xbc);
    }
  }
  return 0xffffffff;
}




int FUN_100470950(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x28) != 0xfe) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x58) + (ulong)param_2 * 8 + 0x50);
    if (lVar5 == 0) {
      uVar2 = 0;
      iVar4 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar5 + 0x238) >> 10 & 7;
      iVar4 = *(int *)(*(long *)(lVar5 + 0x38) + 0x78);
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
    fVar8 = *(float *)(lVar5 + 0xd8) + *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar5 + 0x240),DAT_101e943c0);
    uVar3 = 0;
    if ((int)DAT_101e94300 != 0) {
      uVar6 = (ulong)(uint)(int)DAT_101e94300;
      puVar7 = (uint *)(param_1 + 0xbc);
      do {
        if (*puVar7 == param_2) {
          uVar3 = uVar3 + 1;
        }
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar6 != 0);
    }
    iVar1 = 0;
    if (uVar2 - iVar4 <= uVar3) {
      iVar1 = uVar3 - (uVar2 - iVar4);
    }
    return iVar1;
  }
  return 0;
}




undefined1 FUN_100470a04(long param_1)

{
  return *(undefined1 *)(param_1 + 0xed);
}




/* WARNING: Type propagation algorithm not settling */

int FUN_100470a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  ulong uVar6;
  int local_a0;
  uint local_9c [17];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_9c[0xf] = 0;
  local_9c[0x10] = 0;
  local_9c[0xe] = 0;
  local_9c[0xc] = 0;
  local_9c[0xd] = 0;
  local_9c[10] = 0;
  local_9c[0xb] = 0;
  local_9c[8] = 0;
  local_9c[9] = 0;
  local_9c[6] = 0;
  local_9c[7] = 0;
  local_9c[4] = 0;
  local_9c[5] = 0;
  local_9c[2] = 0;
  local_9c[3] = 0;
  local_9c[0] = 0;
  local_9c[1] = 0xffff;
  FUN_10046f420(param_3,param_2,1,local_9c + 1,local_9c);
  uVar6 = (ulong)local_9c[0];
  if (local_9c[0] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    puVar5 = local_9c;
    do {
      puVar5 = (uint *)((long)puVar5 + 4);
      local_a0 = 0;
      piVar2 = (int *)FUN_10049f59c(param_1,puVar5);
      piVar3 = &local_a0;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2;
      }
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        iVar1 = FUN_100470a0c(param_1,*puVar5,param_3);
        iVar4 = iVar1 + iVar4;
      }
      else {
        piVar3 = (int *)FUN_10049f644(param_1,puVar5);
        *piVar3 = iVar1 + -1;
        iVar4 = iVar4 + 1;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}




undefined8 * FUN_100470b24(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_10149a1c0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  uVar1 = DAT_101dc0b88;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x39) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x3b) = 0xff7fffff;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xff7fffff;
  FUN_100473ea8(param_1 + 0x42,10);
  return param_1;
}




void FUN_100470bbc(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  float fStack_34;
  undefined4 local_30;
  float fStack_2c;
  long local_28;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
LAB_100470c10:
    if (*(char *)(param_1 + 0x28) == '\0') {
      uVar3 = (ulong)*(uint *)(param_1 + 0x2c);
    }
    else {
      uVar3 = FUN_10034ee90();
    }
    local_28 = FUN_100345d90(uVar3);
    if (local_28 == 0) {
      uVar4 = 0;
      local_28 = 0;
      goto LAB_100470c9c;
    }
    uVar1 = *(undefined4 *)(local_28 + 0x30);
    *(long *)(param_1 + 0x30) = local_28 + 0x28;
    *(undefined4 *)(param_1 + 0x38) = uVar1;
  }
  else {
    if (*(int *)(param_1 + 0x38) != (int)plVar2[1]) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
      goto LAB_100470c10;
    }
    local_28 = (**(code **)(*plVar2 + 0x10))();
    if (local_28 == 0) goto LAB_100470c10;
  }
  local_38 = *(undefined4 *)(local_28 + 0x250);
  fStack_34 = *(float *)(local_28 + 0x2ec) + *(float *)(local_28 + 0x254);
  fStack_2c = *(float *)(*(long *)(local_28 + 0x38) + 100);
  local_30 = *(undefined4 *)(local_28 + 600);
  fStack_2c = ((*(float *)(local_28 + 0x2e8) + fStack_2c) *
              *(float *)(*(long *)(local_28 + 0x38) + 0x68)) / fStack_2c;
  uVar4 = FUN_100470cb8(param_1 + 0x40,&local_28,&local_38,&local_28,1);
LAB_100470c9c:
  FUN_100470f0c(param_1 + 0x40,&local_28,uVar4);
  return;
}




ulong FUN_100470cb8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  float *pfVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if (*(int *)(param_1 + 0x19c) == 0) {
    if (param_5 != 0) {
      uVar5 = 0;
      uVar9 = 0;
      do {
        puVar3 = (undefined4 *)(param_3 + uVar5 * 0x10);
        uVar19 = puVar3[3];
        iVar4 = FUN_1010cf79c(uVar19,param_1 + 0x184,param_1 + 400,puVar3);
        if (iVar4 != 0) {
          if (*(int *)(param_1 + 0x180) == 0) {
LAB_100470ec0:
            *(undefined8 *)(param_2 + uVar9 * 8) = *(undefined8 *)(param_4 + uVar5 * 8);
            uVar9 = (ulong)((int)uVar9 + 1);
          }
          else {
            uVar8 = 0;
            local_78 = *puVar3;
            uStack_74 = *(undefined4 *)(param_3 + uVar5 * 0x10 + 8);
            do {
              iVar7 = (int)uVar8;
              iVar4 = FUN_1010cfd88(uVar19,&local_78,param_1 + uVar8 * 8,
                                    param_1 + (ulong)(iVar7 + 1) * 8,
                                    param_1 + (ulong)(iVar7 + 2) * 8);
              if (iVar4 != 0) goto LAB_100470ec0;
              uVar8 = (ulong)(iVar7 + 3U);
            } while (iVar7 + 3U < *(uint *)(param_1 + 0x180));
          }
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == param_5) {
          return uVar9;
        }
      } while( true );
    }
  }
  else if (param_5 != 0) {
    uVar5 = 0;
    uVar9 = 0;
    fVar10 = *(float *)(param_1 + 0x184);
    do {
      fVar11 = *(float *)(param_3 + uVar5 * 0x10);
      if (fVar10 <= fVar11) {
        lVar2 = param_3 + uVar5 * 0x10;
        fVar13 = *(float *)(lVar2 + 4);
        if ((((*(float *)(param_1 + 0x188) <= fVar13) &&
             (fVar12 = *(float *)(lVar2 + 8), *(float *)(param_1 + 0x18c) <= fVar12)) &&
            (fVar11 <= *(float *)(param_1 + 400))) &&
           ((fVar13 <= *(float *)(param_1 + 0x194) && (fVar12 <= *(float *)(param_1 + 0x198))))) {
          if (*(uint *)(param_1 + 0x180) == 0) {
LAB_100470e14:
            *(undefined8 *)(param_2 + uVar9 * 8) = *(undefined8 *)(param_4 + uVar5 * 8);
            uVar9 = (ulong)((int)uVar9 + 1);
          }
          else {
            uVar6 = 0;
            do {
              pfVar1 = (float *)(param_1 + (ulong)(uVar6 + 1) * 8);
              fVar17 = *pfVar1;
              fVar20 = pfVar1[1];
              pfVar1 = (float *)(param_1 + (ulong)uVar6 * 8);
              fVar14 = *pfVar1;
              fVar13 = pfVar1[1];
              pfVar1 = (float *)(param_1 + (ulong)(uVar6 + 2) * 8);
              fVar15 = *pfVar1;
              fVar16 = pfVar1[1];
              fVar18 = (fVar16 - fVar12) * (fVar17 - fVar15) + (fVar11 - fVar15) * (fVar20 - fVar16)
              ;
              if ((0.0 <= (fVar17 - fVar14) * (fVar12 - fVar20) +
                          (fVar11 - fVar17) * (fVar13 - fVar20) != fVar18 < 0.0) &&
                 (0.0 <= (fVar14 - fVar15) * (fVar12 - fVar13) +
                         (fVar11 - fVar14) * (fVar16 - fVar13) != fVar18 < 0.0)) goto LAB_100470e14;
              uVar6 = uVar6 + 3;
            } while (uVar6 < *(uint *)(param_1 + 0x180));
          }
        }
      }
      uVar5 = uVar5 + 1;
      if (uVar5 == param_5) {
        return uVar9;
      }
    } while( true );
  }
  return 0;
}




void FUN_100470f0c(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  long local_70;
  undefined4 local_68;
  
  puVar1 = (uint *)(param_1 + 0x1d0);
  uVar8 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    uVar14 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x1d8);
      plVar5 = (long *)(lVar9 + uVar14 * 0x10);
      plVar4 = (long *)*plVar5;
      if (plVar4 == (long *)0x0) {
LAB_100471020:
        lVar9 = lVar9 + uVar14 * 0x10;
        FUN_10049fc50(puVar1,lVar9,lVar9 + 0x10);
        pcVar10 = *(code **)(param_1 + 0x1b0);
        if (pcVar10 != (code *)0x0) {
          uVar7 = *(undefined8 *)(param_1 + 0x1b8);
          lVar9 = 0;
LAB_100471044:
          (*pcVar10)(param_1,lVar9,uVar7);
        }
      }
      else {
        piVar13 = (int *)(lVar9 + uVar14 * 0x10 + 8);
        if (*piVar13 != (int)plVar4[1]) {
          *plVar5 = 0;
          *piVar13 = DAT_101dc0b88;
          goto LAB_100471020;
        }
        lVar9 = (**(code **)(*plVar4 + 0x10))();
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x1d8);
          goto LAB_100471020;
        }
        if (param_3 == 0) {
LAB_100470ff0:
          lVar15 = *(long *)(param_1 + 0x1d8) + uVar14 * 0x10;
          FUN_10049fc50(puVar1,lVar15,lVar15 + 0x10);
          pcVar10 = *(code **)(param_1 + 0x1b0);
          if (pcVar10 == (code *)0x0) goto LAB_100471048;
          uVar7 = *(undefined8 *)(param_1 + 0x1b8);
          goto LAB_100471044;
        }
        uVar12 = 0;
        iVar3 = -1;
        do {
          iVar2 = (int)uVar12;
          if (*(long *)(param_2 + uVar12 * 8) != lVar9) {
            iVar2 = iVar3;
          }
          uVar12 = uVar12 + 1;
          iVar3 = iVar2;
        } while (param_3 != uVar12);
        if ((iVar2 == -1) ||
           ((*(code **)(param_1 + 0x1c0) != (code *)0x0 &&
            (uVar12 = (**(code **)(param_1 + 0x1c0))(param_1,lVar9,*(undefined8 *)(param_1 + 0x1c8))
            , (uVar12 & 1) == 0)))) goto LAB_100470ff0;
        uVar14 = (ulong)((int)uVar14 + 1);
      }
LAB_100471048:
      uVar8 = *puVar1;
    } while ((uint)uVar14 < uVar8);
  }
  if (param_3 == 0) {
    return;
  }
  uVar14 = 0;
  do {
    lVar9 = *(long *)(param_2 + uVar14 * 8);
    if (uVar8 != 0) {
      lVar15 = 0;
      uVar12 = 0;
      do {
        lVar11 = *(long *)(param_1 + 0x1d8);
        plVar5 = *(long **)(lVar11 + lVar15);
        lVar6 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(lVar11 + lVar15 + 8) == (int)plVar5[1]) {
            lVar6 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            lVar6 = 0;
            *(undefined8 *)(lVar11 + lVar15) = 0;
            *(int *)(lVar11 + lVar15 + 8) = DAT_101dc0b88;
          }
        }
        if (lVar9 == lVar6) {
          if ((int)uVar12 != -1) goto LAB_100471128;
          break;
        }
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x10;
      } while (uVar12 < *puVar1);
    }
    if ((*(code **)(param_1 + 0x1c0) == (code *)0x0) ||
       (iVar3 = (**(code **)(param_1 + 0x1c0))(param_1,lVar9,*(undefined8 *)(param_1 + 0x1c8)),
       iVar3 != 0)) {
      local_70 = lVar9 + 0x28;
      local_68 = *(undefined4 *)(lVar9 + 0x30);
      FUN_100473f4c(puVar1,&local_70);
      if (*(code **)(param_1 + 0x1a0) != (code *)0x0) {
        (**(code **)(param_1 + 0x1a0))(param_1,lVar9,*(undefined8 *)(param_1 + 0x1a8));
      }
    }
LAB_100471128:
    uVar14 = uVar14 + 1;
    if (uVar14 == param_3) {
      return;
    }
    uVar8 = *puVar1;
  } while( true );
}




void FUN_10047115c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100471190(param_1 + 0x40,param_3,param_4);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_100471190(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)((long)param_3 + 0x18c) = 0x7f7fffff;
  *(undefined4 *)(param_3 + 0x31) = 0x7f7fffff;
  *(undefined4 *)((long)param_3 + 0x184) = 0x7f7fffff;
  *(undefined4 *)(param_3 + 0x33) = 0xff7fffff;
  *(undefined4 *)((long)param_3 + 0x194) = 0xff7fffff;
  *(undefined4 *)(param_3 + 0x32) = 0xff7fffff;
  if (param_5 != 0) {
    uVar1 = (ulong)param_5;
    puVar2 = param_3;
    do {
      *puVar2 = *param_4;
      uVar3 = NEON_fminnm(*(undefined4 *)((long)param_3 + 0x184),*(undefined4 *)param_4);
      uVar5 = NEON_fminnm(*(undefined4 *)(param_3 + 0x31),0);
      uVar6 = NEON_fminnm(*(undefined4 *)((long)param_3 + 0x18c),*(undefined4 *)((long)param_4 + 4))
      ;
      *(undefined4 *)((long)param_3 + 0x184) = uVar3;
      *(undefined4 *)(param_3 + 0x31) = uVar5;
      *(undefined4 *)((long)param_3 + 0x18c) = uVar6;
      fVar4 = *(float *)((long)param_3 + 0x194);
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      *(undefined4 *)(param_3 + 0x32) = *(undefined4 *)(param_3 + 0x32);
      *(float *)((long)param_3 + 0x194) = fVar4;
      *(undefined4 *)(param_3 + 0x33) = *(undefined4 *)(param_3 + 0x33);
      uVar1 = uVar1 - 1;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  *(uint *)(param_3 + 0x30) = param_5;
  *(undefined4 *)(param_3 + 0x31) = param_1;
  *(undefined4 *)((long)param_3 + 0x194) = param_2;
  return;
}




void FUN_100471238(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10047124c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  int local_11c;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  fVar7 = (float)FUN_1010a1cd4();
  fVar7 = *(float *)(param_1 + 0x28) - fVar7;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_1 + 0x28) = fVar7;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68) {
    lVar5 = 0;
  }
  if (fVar7 == 0.0) {
    if (DAT_101d23a38 != '\0') {
      local_74 = *(undefined4 *)(lVar5 + 0x260);
      local_70 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30);
      local_68 = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x38);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_90 = &PTR_FUN_101496aa8;
      FUN_100496cd0(&local_90,&DAT_101e47d30);
      local_cc = *(undefined4 *)(lVar5 + 0x260);
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_e8 = &PTR_FUN_101496b18;
      local_c4 = DAT_1018589d8;
      local_bc = 0x740000000;
      local_a0 = 0;
      local_ac = 0;
      local_b4 = 0;
      local_98 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_c8 = local_cc;
      local_c0 = FUN_1003d4e0c(PTR_s_Buff_SpawnStage_Recharge_10185c0f8);
      FUN_10049639c(&local_e8,&DAT_101e47d30);
      uVar4 = DAT_101d90978;
      puVar3 = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
      iVar2 = DAT_1018589d8;
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      DAT_1018589d8 = DAT_1018589d8 + 1;
      lVar5 = FUN_1003e10f0();
      local_104 = FUN_1003b1948(uVar4,*(undefined8 *)(lVar5 + 0x128));
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      local_140 = &PTR_FUN_101496b18;
      local_11c = iVar2;
      local_114 = 0x13fc00000;
      local_10c = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_f0 = DAT_101dc0b88;
      local_124 = uVar1;
      uStack_120 = uVar1;
      local_118 = FUN_1003d4e0c(puVar3);
      FUN_10049639c(&local_140,&DAT_101e47d30);
    }
    FUN_1010a01dc(param_1);
  }
  else if ((fVar7 <= 0.3) && (0.1 < fVar7 && DAT_101d23a38 != '\0')) {
    lVar6 = *(long *)(param_1 + 0x30);
    local_e8 = *(undefined ***)(lVar6 + 0x30);
    if ((0.1 <= ABS(*(float *)(lVar5 + 0x250) - *(float *)(lVar6 + 0x30))) ||
       ((0.1 <= ABS((*(float *)(lVar5 + 0x2ec) - *(float *)(lVar6 + 0x34)) +
                    *(float *)(lVar5 + 0x254)) ||
        (0.1 <= ABS(*(float *)(lVar5 + 600) - *(float *)(lVar6 + 0x38)))))) {
      local_e0 = CONCAT44(local_e0._4_4_,*(float *)(lVar6 + 0x38));
      FUN_1000f3e08(lVar5,&local_e8,1);
    }
  }
  return;
}




void FUN_1004714b4(void)

{
  return;
}




void FUN_1004714b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    lVar1 = FUN_1010a1540(DAT_10184de70,0);
    *(long *)(lVar1 + 0x28) = param_3;
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 0x18);
    *(undefined4 *)(lVar1 + 0x38) = uVar2;
  }
  return;
}




undefined8 * FUN_1004714fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a220;
  param_1[5] = 0;
  uVar2 = DAT_101dc0b88;
  lVar3 = 0x30;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x46);
  lVar3 = 0x230;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x50);
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0xff;
  param_1[0x52] = 0;
  lVar3 = FUN_1010a0298(param_1,DAT_101867390);
  param_1[5] = lVar3;
  *(code **)(lVar3 + 0x1c8) = FUN_1004715d0;
  *(undefined8 **)(lVar3 + 0x1d0) = param_1;
  *(code **)(lVar3 + 0x1d8) = FUN_1004715dc;
  *(undefined8 **)(lVar3 + 0x1e0) = param_1;
  *(code **)(lVar3 + 0x1e8) = FUN_1004715e8;
  *(undefined8 **)(lVar3 + 0x1f0) = param_1;
  *(undefined4 *)(lVar3 + 0x1c4) = 1;
  return param_1;
}




void FUN_1004715d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100471ad0(param_3,param_2,param_2);
  return;
}




void FUN_1004715dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100471c04(param_3,param_2,param_2);
  return;
}




void FUN_1004715e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100471d70(param_3,param_2,param_2);
  return;
}




void FUN_1004715f4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  float fVar12;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  int local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  int local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  fVar12 = (float)FUN_1010a1cd4();
  fVar12 = *(float *)(param_1 + 0x284) - fVar12;
  *(float *)(param_1 + 0x284) = fVar12;
  if (fVar12 <= 0.0) {
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar11 = 0;
      do {
        lVar8 = param_1 + lVar11;
        plVar5 = *(long **)(lVar8 + 0x30);
        if (plVar5 != (long *)0x0) {
          if (*(int *)(lVar8 + 0x38) == (int)plVar5[1]) {
            lVar6 = (**(code **)(*plVar5 + 0x10))();
            if (lVar6 != 0) {
              plVar5 = *(long **)(lVar8 + 0x30);
              if (plVar5 == (long *)0x0) {
                lVar6 = 0;
              }
              else if (*(int *)(lVar8 + 0x38) == (int)plVar5[1]) {
                lVar6 = (**(code **)(*plVar5 + 0x10))();
              }
              else {
                lVar6 = 0;
                *(undefined8 *)(lVar8 + 0x30) = 0;
                *(undefined4 *)(lVar8 + 0x38) = DAT_101dc0b88;
              }
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
              if ((((int)uVar9 == 0x1f) || (1 < *(ushort *)(lVar6 + uVar9 * 0x38 + 0x90) - 3)) &&
                 ((*(uint *)(lVar6 + 0x2f4) >> 0x12 & 1) != 0)) {
                if (*(char *)(lVar6 + 0x264) == *(char *)(param_1 + 0x288)) {
                  if ((*(uint *)(lVar6 + 0x2f4) >> 0x14 & 1) == 0) {
                    if (*(char *)(DAT_101d23a68 + 0x42) == '\0') {
                      fVar12 = (float)FUN_100032228();
                      puVar2 = PTR_s_Buff_SpawnStage_MatchStart_Shopp_10185c118;
                      iVar1 = DAT_1018589d8;
                      if (fVar12 <= 0.0) {
                        uVar4 = *(undefined4 *)(lVar6 + 0x260);
                        DAT_1018589d8 = DAT_1018589d8 + 1;
                        puVar7 = (undefined4 *)FUN_1003e10f0();
                        local_8c = *puVar7;
                        local_b8 = 0;
                        uStack_b0 = 0;
                        local_a8 = 0;
                        local_c0 = &PTR_FUN_101496b18;
                        local_9c = iVar1;
                        local_98 = 0xbf80000000000000;
                        local_90 = 1;
                        local_80 = 0;
                        uStack_88 = 0;
                        uStack_84 = 0;
                        local_78 = 0;
                        local_70 = DAT_101dc0b88;
                        local_a4 = uVar4;
                        uStack_a0 = uVar4;
                        uVar4 = FUN_1003d4e0c(puVar2);
                        local_98 = CONCAT44(local_98._4_4_,uVar4);
                        pcVar10 = (code *)local_c0[4];
                        goto LAB_1004718d0;
                      }
                    }
                    else {
                      local_a4 = *(undefined4 *)(lVar6 + 0x260);
                      local_b8 = 0;
                      uStack_b0 = 0;
                      local_a8 = 0;
                      local_c0 = &PTR_FUN_101496b18;
                      local_9c = DAT_1018589d8;
                      local_98 = 0x41a0000000000000;
                      local_90 = 1;
                      local_78 = 0;
                      local_8c = 0;
                      uStack_88 = 0;
                      uStack_84 = 0;
                      local_80 = 0;
                      local_70 = DAT_101dc0b88;
                      DAT_1018589d8 = DAT_1018589d8 + 1;
                      uStack_a0 = local_a4;
                      uVar4 = FUN_1003d4e0c(PTR_s_Buff_SpawnStage_MatchStart_Speed_10185c110);
                      local_98 = CONCAT44(local_98._4_4_,uVar4);
                      pcVar10 = (code *)local_c0[4];
LAB_1004718d0:
                      (*pcVar10)(&local_c0,&DAT_101e47d30);
                    }
                    local_a4 = *(undefined4 *)(lVar6 + 0x260);
                    local_b8 = 0;
                    uStack_b0 = 0;
                    local_a8 = 0;
                    local_c0 = &PTR_FUN_101496b18;
                    local_9c = DAT_1018589d8;
                    local_98 = 0x3fc0000000000000;
                    local_90 = 1;
                    local_78 = 0;
                    local_8c = 0;
                    uStack_88 = 0;
                    uStack_84 = 0;
                    local_80 = 0;
                    local_70 = DAT_101dc0b88;
                    DAT_1018589d8 = DAT_1018589d8 + 1;
                    uStack_a0 = local_a4;
                    uVar4 = FUN_1003d4e0c(*(undefined8 *)(*(long *)(param_1 + 0x290) + 8));
                    local_98 = CONCAT44(local_98._4_4_,uVar4);
                    (*(code *)local_c0[4])(&local_c0,&DAT_101e47d30);
                    uVar3 = DAT_101d90978;
                    puVar2 = PTR_s_Buff_Shop_AllowStorePurchase_10185c148;
                    iVar1 = DAT_1018589d8;
                    uVar4 = *(undefined4 *)(lVar6 + 0x260);
                    DAT_1018589d8 = DAT_1018589d8 + 1;
                    lVar8 = FUN_1003e10f0();
                    uStack_dc = FUN_1003b1948(uVar3,*(undefined8 *)(lVar8 + 0x128));
                    local_110 = 0;
                    uStack_108 = 0;
                    local_100 = 0;
                    local_118 = &PTR_FUN_101496b18;
                    local_f4 = iVar1;
                    local_f0 = 0x3fc0000000000000;
                    local_e8 = 1;
                    uStack_e4 = 0;
                    local_e0 = 0;
                    local_d8 = 0;
                    local_d0 = 0;
                    local_c8 = DAT_101dc0b88;
                    local_fc = uVar4;
                    uStack_f8 = uVar4;
                    uVar4 = FUN_1003d4e0c(puVar2);
                    local_f0 = CONCAT44(local_f0._4_4_,uVar4);
                    (*(code *)local_118[4])(&local_118,&DAT_101e47d30);
                  }
                }
                else if ((*(char *)(lVar6 + 0x264) != '\0') && ((*(byte *)(lVar6 + 0x2f9) & 1) == 0)
                        ) {
                  uStack_a0 = *(undefined4 *)(lVar6 + 0x260);
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_a8 = 0;
                  local_c0 = &PTR_FUN_101496b18;
                  local_a4 = 0xffffffff;
                  local_9c = DAT_1018589d8;
                  local_98 = 0x3f00000000000000;
                  local_90 = 1;
                  local_78 = 0;
                  local_8c = 0;
                  uStack_88 = 0;
                  uStack_84 = 0;
                  local_80 = 0;
                  local_70 = DAT_101dc0b88;
                  DAT_1018589d8 = DAT_1018589d8 + 1;
                  uVar4 = FUN_1003d4e0c(*(undefined8 *)(*(long *)(param_1 + 0x290) + 0x10));
                  local_98 = CONCAT44(local_98._4_4_,uVar4);
                  (*(code *)local_c0[4])(&local_c0,&DAT_101e47d30);
                }
              }
            }
          }
          else {
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(undefined4 *)(lVar8 + 0x38) = DAT_101dc0b88;
          }
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != 0x200);
    }
    if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) != '\0') {
      lVar11 = 0;
      do {
        lVar8 = param_1 + lVar11;
        plVar5 = *(long **)(lVar8 + 0x230);
        if (plVar5 != (long *)0x0) {
          if (*(int *)(lVar8 + 0x238) == (int)plVar5[1]) {
            lVar6 = (**(code **)(*plVar5 + 0x10))();
            if (lVar6 != 0) {
              lVar6 = (**(code **)(**(long **)(lVar8 + 0x230) + 0x10))();
              uVar9 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
              if ((((int)uVar9 != 0x1f) && (*(ushort *)(lVar6 + uVar9 * 0x38 + 0x90) - 3 < 2)) ||
                 (lVar6 = (**(code **)(**(long **)(lVar8 + 0x230) + 0x10))(),
                 *(char *)(lVar6 + 0x264) != *(char *)(param_1 + 0x288))) {
                uVar4 = DAT_101dc0b88;
                *(undefined8 *)(lVar8 + 0x230) = 0;
                goto LAB_100471a98;
              }
            }
          }
          else {
            *(undefined8 *)(lVar8 + 0x230) = 0;
            uVar4 = DAT_101dc0b88;
LAB_100471a98:
            *(undefined4 *)(lVar8 + 0x238) = uVar4;
          }
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar11 != 0x50);
    }
    *(undefined4 *)(param_1 + 0x284) = 0x3f000000;
  }
  return;
}




void FUN_100471ad0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    lVar1 = param_1 + lVar6;
    plVar4 = *(long **)(lVar1 + 0x30);
    if (plVar4 == (long *)0x0) {
LAB_100471b44:
      lVar6 = 0;
      if (param_3 != 0) {
        lVar6 = param_3 + 0x28;
      }
      puVar2 = &DAT_101dc0b88;
      if (param_3 != 0) {
        puVar2 = (undefined4 *)(lVar6 + 8);
      }
      uVar3 = *puVar2;
      *(long *)(lVar1 + 0x30) = lVar6;
      *(undefined4 *)(lVar1 + 0x38) = uVar3;
      *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
      break;
    }
    if (*(int *)(lVar1 + 0x38) != (int)plVar4[1]) {
      *(undefined8 *)(param_1 + lVar6 + 0x30) = 0;
      *(undefined4 *)(param_1 + lVar6 + 0x38) = DAT_101dc0b88;
      goto LAB_100471b44;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))();
    if (lVar5 == 0) goto LAB_100471b44;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x200);
  if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) != '\0') {
    lVar6 = 0;
    do {
      lVar1 = param_1 + lVar6;
      plVar4 = *(long **)(lVar1 + 0x230);
      lVar5 = 0;
      if (plVar4 != (long *)0x0) {
        if (*(int *)(lVar1 + 0x238) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          lVar5 = 0;
          *(undefined8 *)(lVar1 + 0x230) = 0;
          *(undefined4 *)(lVar1 + 0x238) = DAT_101dc0b88;
        }
      }
      uVar3 = DAT_101dc0b88;
      if (lVar5 == param_3) {
        *(undefined8 *)(lVar1 + 0x230) = 0;
        *(undefined4 *)(param_1 + lVar6 + 0x238) = uVar3;
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x50);
  }
  return;
}




void FUN_100471c04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 == 0) {
    return;
  }
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    plVar3 = *(long **)(lVar1 + 0x30);
    if (plVar3 != (long *)0x0) {
      if (*(int *)(lVar1 + 0x38) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
        if (lVar4 != 0) {
          plVar3 = *(long **)(lVar1 + 0x30);
          lVar4 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(lVar1 + 0x38) == (int)plVar3[1]) {
              lVar4 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              lVar4 = 0;
              *(undefined8 *)(lVar1 + 0x30) = 0;
              *(undefined4 *)(lVar1 + 0x38) = DAT_101dc0b88;
            }
          }
          uVar2 = DAT_101dc0b88;
          if (lVar4 == param_3) {
            *(undefined8 *)(param_1 + lVar5 + 0x30) = 0;
            *(undefined4 *)(param_1 + lVar5 + 0x38) = uVar2;
            *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + -1;
            if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) == '\0') {
              return;
            }
            if ((*(byte *)(param_3 + 0x2f4) & 1) == 0) {
              return;
            }
            if (*(char *)(param_3 + 0x264) != *(char *)(param_1 + 0x288)) {
              return;
            }
            lVar5 = 0;
            break;
          }
        }
      }
      else {
        *(undefined8 *)(lVar1 + 0x30) = 0;
        *(undefined4 *)(lVar1 + 0x38) = DAT_101dc0b88;
      }
    }
    lVar5 = lVar5 + 0x10;
    if (lVar5 == 0x200) {
      return;
    }
  } while( true );
LAB_100471d10:
  lVar1 = param_1 + lVar5;
  plVar3 = *(long **)(lVar1 + 0x230);
  if (plVar3 == (long *)0x0) {
LAB_100471d5c:
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    *(long *)(lVar1 + 0x230) = param_3 + 0x28;
    *(undefined4 *)(lVar1 + 0x238) = uVar2;
    return;
  }
  if (*(int *)(lVar1 + 0x238) != (int)plVar3[1]) {
    *(undefined8 *)(param_1 + lVar5 + 0x230) = 0;
    *(undefined4 *)(param_1 + lVar5 + 0x238) = DAT_101dc0b88;
    goto LAB_100471d5c;
  }
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  if (lVar4 == 0) goto LAB_100471d5c;
  lVar5 = lVar5 + 0x10;
  if (lVar5 == 0x50) {
    return;
  }
  goto LAB_100471d10;
}




undefined8 FUN_100471d70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int local_48 [2];
  
  if ((*(byte *)(param_3 + 0x2f6) >> 2 & 1) == 0) {
LAB_100471ec0:
    uVar5 = 0;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x290) + 0x1c) != '\0') {
      if (*(char *)(param_3 + 0x264) != *(char *)(param_1 + 0x288)) goto LAB_100471ec0;
      lVar6 = *(long *)(param_3 + 0x18);
      while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8))) {
        lVar6 = *(long *)(lVar6 + 0x20);
      }
      FUN_1003a4e5c(local_48,*(undefined8 *)(*(long *)(param_1 + 0x290) + 8));
      for (lVar6 = *(long *)(lVar6 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
        if ((*(int *)(lVar6 + 0x314) == local_48[0]) && (*(int *)(lVar6 + 0x310) == 0)) {
          bVar2 = 1;
          goto LAB_100471e1c;
        }
      }
      bVar2 = 0;
LAB_100471e1c:
      lVar6 = 0;
      do {
        lVar1 = param_1 + lVar6;
        plVar3 = *(long **)(lVar1 + 0x230);
        if (plVar3 != (long *)0x0) {
          if (*(int *)(lVar1 + 0x238) == (int)plVar3[1]) {
            lVar4 = (**(code **)(*plVar3 + 0x10))();
            if (lVar4 != 0) {
              plVar3 = *(long **)(lVar1 + 0x230);
              lVar4 = 0;
              if (plVar3 != (long *)0x0) {
                if (*(int *)(lVar1 + 0x238) == (int)plVar3[1]) {
                  lVar4 = (**(code **)(*plVar3 + 0x10))();
                }
                else {
                  lVar4 = 0;
                  *(undefined8 *)(lVar1 + 0x230) = 0;
                  *(undefined4 *)(lVar1 + 0x238) = DAT_101dc0b88;
                }
              }
              if ((bool)(lVar4 == param_3 & (bVar2 ^ 1))) goto LAB_100471ec0;
            }
          }
          else {
            *(undefined8 *)(lVar1 + 0x230) = 0;
            *(undefined4 *)(lVar1 + 0x238) = DAT_101dc0b88;
          }
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != 0x50);
    }
    uVar5 = 1;
  }
  return uVar5;
}




undefined8 * FUN_100471edc(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a250;
  param_1[5] = &PTR_FUN_10149a280;
  param_1[7] = 0;
  uVar1 = FUN_1004d2524(&DAT_101159fdc);
  uVar1 = FUN_100015208(&DAT_101159fdc,uVar1,0x12345678);
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[9] = 0;
  param_1[10] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return param_1;
}




void FUN_100471f64(long param_1)

{
  int iVar1;
  long lVar2;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_44 = DAT_1018589d8;
  if (((DAT_101d23a38 != '\0') && (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 != 0))
     && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dd68)) {
    iVar1 = DAT_1018589d8 + 1;
    *(int *)(param_1 + 0x54) = DAT_1018589d8;
    DAT_1018589d8 = iVar1;
    local_4c = *(undefined4 *)(lVar2 + 0x260);
    local_2c = *(undefined4 *)(param_1 + 0x50);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_68 = &PTR_FUN_101496b18;
    local_3c = 0x1bf800000;
    local_34 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_18 = DAT_101dc0b88;
    uStack_48 = local_4c;
    local_40 = FUN_1003d4e0c(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20));
    FUN_10049639c(&local_68,&DAT_101e47d30);
  }
  return;
}




void FUN_100472030(long param_1)

{
  long lVar1;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined4 local_2c;
  int iStack_28;
  
  if (DAT_101d23a38 != '\0') {
    iStack_28 = *(int *)(param_1 + 0x54);
    if (((iStack_28 != -1) && (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 != 0)) &&
       (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dd68)) {
      local_2c = *(undefined4 *)(lVar1 + 0x260);
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      local_48 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_48,&DAT_101e47d30);
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
  }
  return;
}




void FUN_1004720c4(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100472138(undefined8 param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_448 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (uint)param_3;
  if (uVar2 != 0) {
    _bzero(param_2,(param_3 & 0xffffffff) << 3);
  }
  uVar1 = FUN_1010a0258(param_1,local_448,param_3,DAT_101867400);
  if (uVar1 != 0 && uVar2 != 0) {
    uVar3 = 0;
    do {
      *(undefined8 *)((long)param_2 + uVar3 * 8) = local_448[uVar3];
      uVar3 = uVar3 + 1;
      if (uVar1 <= uVar3) break;
    } while (uVar3 < (param_3 & 0xffffffff));
  }
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}




void FUN_10047220c(undefined8 param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  long local_68 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_100472138(param_1,local_68,8);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(local_68[uVar2] + 0x40) == param_2) goto LAB_100472270;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  uVar2 = 0xffffffff;
LAB_100472270:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




void FUN_10047229c(undefined8 param_1,uint *param_2,long param_3,long param_4,long param_5,
                  uint param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long local_88 [8];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_100472138(param_1,local_88,8);
  *param_2 = uVar1;
  if (param_6 != 0) {
    uVar2 = 0;
    while( true ) {
      if (uVar2 < uVar1) {
        lVar4 = local_88[uVar2];
        *(undefined4 *)(param_3 + uVar2 * 4) = *(undefined4 *)(lVar4 + 0x40);
        uVar3 = *(undefined4 *)(lVar4 + 0x50);
        uVar1 = (uint)*(byte *)(lVar4 + 0x58);
      }
      else {
        uVar3 = 0;
        uVar1 = 0;
        *(undefined4 *)(param_3 + uVar2 * 4) = 0;
      }
      *(undefined4 *)(param_4 + uVar2 * 4) = uVar3;
      *(uint *)(param_5 + uVar2 * 4) = uVar1;
      if ((ulong)param_6 - 1 == uVar2) break;
      uVar1 = *param_2;
      uVar2 = uVar2 + 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100472378(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dc38) {
    param_1 = 0;
  }
  FUN_100472394(param_1);
  return;
}




void FUN_100472394(long param_1)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    fVar1 = (float)FUN_1010a1cd4();
    fVar1 = *(float *)(param_1 + 0x44) - fVar1;
    *(float *)(param_1 + 0x44) = fVar1;
    if (fVar1 <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x0001004723e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_1);
      return;
    }
  }
  return;
}




void FUN_1004723ec(long param_1,ushort *param_2,uint param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ushort *puVar10;
  float fVar11;
  undefined4 auStack_1a428 [64];
  undefined1 auStack_1a328 [102400];
  float local_1328 [800];
  long alStack_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_3 != 0) {
    uVar2 = FUN_1010a1958(alStack_6a8,200,DAT_10184dd68,0);
    if ((int)uVar2 != 0) {
      uVar3 = uVar2 & 0xffffffff;
      pfVar4 = local_1328 + 2;
      plVar5 = alStack_6a8;
      do {
        lVar6 = *plVar5;
        pfVar4[-2] = *(float *)(lVar6 + 0x250);
        fVar11 = *(float *)(lVar6 + 0x254);
        *pfVar4 = *(float *)(lVar6 + 600);
        pfVar4[-1] = *(float *)(lVar6 + 0x2ec) + fVar11;
        fVar11 = *(float *)(*(long *)(lVar6 + 0x38) + 100);
        pfVar4[1] = ((*(float *)(lVar6 + 0x2e8) + fVar11) *
                    *(float *)(*(long *)(lVar6 + 0x38) + 0x68)) / fVar11;
        pfVar4 = pfVar4 + 4;
        uVar3 = uVar3 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar3 != 0);
    }
    if (param_3 < 2) {
      param_3 = 1;
    }
    uVar9 = (ulong)param_3;
    puVar7 = auStack_1a328;
    puVar8 = auStack_1a428;
    uVar3 = uVar9;
    puVar10 = param_2;
    do {
      uVar1 = FUN_100470cb8(param_1 + (ulong)*puVar10 * 0x208 + 0x28,puVar7,local_1328,alStack_6a8,
                            uVar2);
      *puVar8 = uVar1;
      puVar7 = puVar7 + 0x640;
      uVar3 = uVar3 - 1;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar3 != 0);
    puVar7 = auStack_1a328;
    puVar8 = auStack_1a428;
    do {
      FUN_100470f0c(param_1 + (ulong)*param_2 * 0x208 + 0x28,puVar7,*puVar8);
      puVar7 = puVar7 + 0x640;
      uVar9 = uVar9 - 1;
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10047257c(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) == DAT_10184e4c8) {
                    /* WARNING: Could not recover jumptable at 0x0001004725a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
    return;
  }
  return;
}




void FUN_1004725ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  puVar3 = (undefined8 *)(lVar1 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19);
  puVar3[1] = 0;
  *puVar3 = 0x101010101010101;
  puVar3[2] = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68) {
    lVar4 = 0;
  }
  lVar2 = lVar1 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)*(byte *)(lVar4 + 0x264);
  *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 1;
  lVar2 = lVar1 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)*(byte *)(lVar4 + 0x264);
  *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 2;
  lVar2 = lVar1 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)*(byte *)(lVar4 + 0x264);
  *(byte *)(lVar2 + 8) = *(byte *)(lVar2 + 8) | 4;
  lVar1 = lVar1 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)*(byte *)(lVar4 + 0x264);
  *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | 8;
  return;
}




void FUN_100472684(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  if ((*(ushort *)(lVar1 + 0x2f4) & 0x1008) != 0) {
    lVar1 = 0;
    do {
      lVar2 = param_1 + 0x30 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
      *(byte *)(lVar2 + lVar1) = *(byte *)(lVar2 + lVar1) | 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 8);
  }
  FUN_100472878(param_1);
  FUN_100472c24(param_1);
  return;
}




void FUN_10047270c(long param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  char local_57;
  char local_56;
  undefined1 local_55;
  
  lVar4 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = param_1 + 0x38 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
  lVar7 = param_1 + 0x38 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19;
  do {
    cVar2 = *(char *)(lVar6 + lVar4 + -0x10);
    lVar1 = lVar7 + lVar4;
    cVar3 = *(char *)(lVar6 + lVar4 + -8);
    if (((cVar2 != *(char *)(lVar1 + -0x10)) || (cVar3 != *(char *)(lVar1 + -8))) ||
       (*(char *)(lVar6 + lVar4) != *(char *)(lVar7 + lVar4))) {
      local_55 = *(undefined1 *)(lVar6 + lVar4);
      local_5c = *(undefined4 *)(lVar5 + 0x260);
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_78 = &PTR_FUN_1014973d8;
      local_58 = (undefined1)lVar4;
      local_57 = cVar2;
      local_56 = cVar3;
      FUN_100497acc(&local_78,&DAT_101e47d30);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 8);
  lVar4 = 0;
  do {
    lVar5 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + lVar4;
    if ((*(byte *)(lVar5 + 0x28) & ((*(byte *)(lVar5 + 0x38) | *(byte *)(lVar5 + 0x30)) ^ 0xff)) ==
        0) {
      uVar8 = FUN_100032228();
      *(undefined4 *)(param_1 + lVar4 * 4 + 0x6c) = uVar8;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 8);
  *(uint *)(param_1 + 0x5c) = ~*(uint *)(param_1 + 0x5c) & 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}




void FUN_100472854(long param_1)

{
  FUN_100472d3c();
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}




void FUN_100472878(long param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float extraout_s0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined **local_710;
  undefined8 uStack_708;
  undefined1 local_700;
  byte local_6ff;
  float local_6fc;
  undefined4 local_6f8;
  float local_6f4;
  float fStack_6f0;
  long local_6e8;
  byte local_6e0;
  long local_6d8 [200];
  long local_98;
  
  local_98 = *(long *)PTR____stack_chk_guard_101444218;
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68) {
    lVar6 = 0;
  }
  lVar8 = *(long *)(lVar6 + 0x40);
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
  if (((int)uVar9 == 0x1f) ||
     (fVar12 = *(float *)(lVar8 + 0x7c), 1 < *(ushort *)(lVar6 + uVar9 * 0x38 + 0x90) - 3)) {
    fVar13 = *(float *)(lVar8 + 0x298) + 1.0;
    fVar12 = *(float *)(lVar8 + 0x7c) + *(float *)(lVar8 + 0x130) * fVar13;
    NEON_fminnm(fVar12 + fVar12 * *(float *)(lVar8 + 0x1e4),DAT_101e94364);
    fVar12 = DAT_101e942a4;
    if (0.1 <= ABS(DAT_101e942a4)) {
      local_6ff = *(byte *)(lVar6 + 0x264);
      uVar9 = (ulong)local_6ff;
      lVar10 = *(long *)(lVar6 + 0x38);
      if (*(char *)(lVar10 + 0x149) == '\0') {
        bVar3 = *(char *)(param_1 + 0x68) != '\0';
      }
      else {
        bVar3 = true;
      }
      fVar14 = *(float *)(lVar6 + 0x250);
      fVar15 = *(float *)(lVar6 + 600);
      if (*(char *)(lVar10 + 0x14a) == '\0') {
        bVar4 = *(char *)(param_1 + 0x69) != '\0';
      }
      else {
        bVar4 = true;
      }
      fVar16 = *(float *)(lVar6 + 0x254);
      fVar17 = *(float *)(lVar6 + 0x2ec);
      local_700 = 0xff;
      cVar2 = *(char *)(lVar10 + 0x148);
      local_710 = &PTR_FUN_101499930;
      uStack_708 = 0;
      fStack_6f0 = DAT_101e942a4 * DAT_101e942a4;
      local_6f8 = 0;
      local_6e0 = bVar4 ^ 1;
      local_6fc = fVar14;
      local_6f4 = fVar15;
      local_6e8 = param_1;
      uVar5 = FUN_1003a6ce4(fStack_6f0,ABS(DAT_101e942a4),*(float *)(lVar8 + 0x1e4),DAT_101e942a4,
                            fVar13,DAT_101e94364,&local_710,local_6d8,200,0);
      fVar12 = extraout_s0;
      if (uVar5 != 0) {
        uVar7 = 0;
        fVar12 = fVar17 + fVar16;
        do {
          for (lVar6 = *(long *)(local_6d8[uVar7] + 0x18); lVar6 != 0;
              lVar6 = *(long *)(lVar6 + 0x20)) {
            if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184dda8) {
              lVar8 = lVar6 + ((ulong)~*(uint *)(lVar6 + 0x5c) & 1) * 0x19 + uVar9;
              pbVar1 = (byte *)(lVar8 + 0x30);
              if (cVar2 != '\0') {
                pbVar1 = (byte *)(lVar8 + 0x38);
              }
              *pbVar1 = *pbVar1 | 1;
              if (bVar3) {
                lVar8 = lVar6 + ((ulong)~*(uint *)(lVar6 + 0x5c) & 1) * 0x19 + uVar9;
                *(byte *)(lVar8 + 0x30) = *(byte *)(lVar8 + 0x30) | 4;
              }
              if (bVar4) {
                lVar6 = lVar6 + ((ulong)~*(uint *)(lVar6 + 0x5c) & 1) * 0x19 + uVar9;
                pbVar1 = (byte *)(lVar6 + 0x30);
                if (cVar2 != '\0') {
                  pbVar1 = (byte *)(lVar6 + 0x38);
                }
                *pbVar1 = *pbVar1 | 2;
              }
              break;
            }
          }
          lVar6 = local_6d8[uVar7];
          lVar8 = *(long *)(lVar6 + 0x40);
          uVar11 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f;
          if (((((int)uVar11 == 0x1f) || (1 < *(ushort *)(lVar6 + uVar11 * 0x38 + 0x90) - 3)) &&
              (fVar13 = *(float *)(lVar8 + 0x7c) +
                        *(float *)(lVar8 + 0x130) * (*(float *)(lVar8 + 0x298) + 1.0),
              NEON_fminnm(fVar13 + fVar13 * *(float *)(lVar8 + 0x1e4),DAT_101e94364),
              0.1 <= ABS(DAT_101e942a4))) &&
             (fVar17 = fVar14 - *(float *)(lVar6 + 0x250),
             fVar16 = fVar12 - (*(float *)(lVar6 + 0x254) + *(float *)(lVar6 + 0x2ec)),
             fVar13 = fVar15 - *(float *)(lVar6 + 600),
             fVar17 * fVar17 + fVar13 * fVar13 + fVar16 * fVar16 <= DAT_101e942a4 * DAT_101e942a4 &&
             !bVar4)) {
            lVar8 = param_1 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19 +
                    (ulong)*(byte *)(lVar6 + 0x264);
            pbVar1 = (byte *)(lVar8 + 0x30);
            if (*(char *)(*(long *)(lVar6 + 0x38) + 0x148) != '\0') {
              pbVar1 = (byte *)(lVar8 + 0x38);
            }
            *pbVar1 = *pbVar1 | 1;
            if (*(char *)(*(long *)(lVar6 + 0x38) + 0x149) != '\0') {
              lVar6 = param_1 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19 +
                      (ulong)*(byte *)(lVar6 + 0x264);
              *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) | 4;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar5);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_98) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(fVar12);
  }
  return;
}




void FUN_100472c24(long param_1)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_1938 [800];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68) {
    lVar4 = 0;
  }
  uVar3 = FUN_1010a0218(lVar4,local_1938,800,DAT_101867420);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = 0;
      lVar6 = local_1938[uVar5];
      do {
        if ((*(byte *)(lVar6 + 0x34) >> (ulong)((uint)lVar4 & 0x1f) & 1) != 0) {
          lVar1 = param_1 + lVar4 + ((ulong)~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
          pbVar2 = (byte *)(lVar1 + 0x30);
          if (*(char *)(lVar6 + 0x3c) != '\0') {
            pbVar2 = (byte *)(lVar1 + 0x38);
          }
          *pbVar2 = *pbVar2 | *(byte *)(lVar6 + 0x38);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100472d38(void)

{
  return;
}




void FUN_100472d3c(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  if (DAT_101d23a39 == '\0') {
    uVar5 = FUN_10034ee90();
    if ((int)uVar5 == -1) {
      uVar6 = 0;
      lVar7 = 0;
    }
    else {
      uVar6 = FUN_10034e738();
      iVar4 = FUN_10034e738(uVar5);
      lVar7 = 1;
      if (iVar4 == 1) {
        lVar7 = 2;
      }
      uVar6 = uVar6 & 0xffffffff;
    }
    lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + uVar6;
    bVar2 = *(byte *)(lVar1 + 0x28);
    if ((bVar2 & ((*(byte *)(lVar1 + 0x38) | *(byte *)(lVar1 + 0x30)) ^ 0xff)) != 0)
    goto LAB_100472de4;
    lVar7 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + lVar7;
    bVar3 = *(byte *)(lVar7 + 0x30);
    if (((*(byte *)(lVar7 + 0x28) & (bVar3 ^ 0xff)) != 0) &&
       (1 < bVar2 && (bVar2 & ~bVar3 & 0xfe) != 0)) {
      FUN_100464f14(uVar8);
      return;
    }
  }
  else {
    iVar4 = FUN_100032198(param_1);
    if (iVar4 == 0) {
LAB_100472de4:
      FUN_100465010(uVar8);
      return;
    }
  }
  FUN_100464e18(uVar8);
  return;
}




bool FUN_100472e40(long param_1)

{
  return *(char *)(param_1 + 0x69) != '\0';
}




void FUN_100472e50(void)

{
  return;
}




void FUN_100472e54(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184e3b8) {
    param_1 = 0;
  }
  FUN_100472e70(param_1);
  return;
}




void FUN_100472e70(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
        uVar3 = *(undefined4 *)(lVar2 + 600);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar2 + 0x250);
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(param_1 + 0x58) = uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return;
}




undefined8 FUN_100472ef0(long param_1,float *param_2,float *param_3,float *param_4)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float local_38;
  float fStack_34;
  
  fVar4 = *param_2;
  fVar5 = param_2[2];
  fStack_34 = param_3[2];
  local_44 = *param_3 - fVar4;
  local_3c = fStack_34 - fVar5;
  fVar6 = SQRT(local_44 * local_44 + local_3c * local_3c);
  if (1.1920929e-07 <= fVar6) {
    if ((*(byte *)(param_1 + 0x78) >> 2 & 1) != 0) {
      local_60 = CONCAT44(fVar5,fVar4);
      local_38 = *param_3;
      iVar2 = FUN_1010d0068(param_1 + 0x60,param_1 + 0x68,&local_60,&local_38,&local_50);
      if (iVar2 != 0) {
        if (param_4 == (float *)0x0) {
          return 1;
        }
        *param_4 = SQRT((local_50 - fVar4) * (local_50 - fVar4) +
                        (fStack_4c - fVar5) * (fStack_4c - fVar5));
        return 1;
      }
      goto LAB_100473104;
    }
    fVar3 = *(float *)(param_1 + 0x54);
    local_44 = local_44 / fVar6;
    fStack_40 = 0.0;
    local_3c = local_3c / fVar6;
    local_50 = fVar4;
    fStack_4c = fVar3;
    local_48 = fVar5;
    iVar2 = FUN_1010cf874(&local_50,param_1 + 0x50,&local_38,&local_54);
    if (((iVar2 == 0) || (fVar6 < local_38)) || (local_54 < 0.0)) goto LAB_100473104;
    bVar1 = *(byte *)(param_1 + 0x78);
    if (0.0 <= local_38) {
      if ((~bVar1 & 3) == 0) {
        if (fVar6 <= local_54) goto LAB_100473104;
        local_60 = CONCAT44(fVar3 + fStack_40 * local_54,fVar4 + local_44 * local_54);
      }
      else {
        local_60 = CONCAT44(fVar3 + fStack_40 * local_38,fVar4 + local_44 * local_38);
        local_54 = local_38;
      }
      local_58 = fVar5 + local_54 * local_3c;
      iVar2 = FUN_100473134(param_1,&local_60);
    }
    else {
      if ((bVar1 & 3) == 2) goto LAB_100473104;
      if ((bVar1 & 3) == 0) goto LAB_100472f74;
      if (fVar6 <= local_54) goto LAB_100473104;
      local_60 = CONCAT44(fVar3 + fStack_40 * local_54,fVar4 + local_44 * local_54);
      local_58 = fVar5 + local_54 * local_3c;
      iVar2 = FUN_100473134(param_1,&local_60);
      local_38 = local_54;
    }
    if (iVar2 == 0) {
LAB_100473104:
      if (param_4 != (float *)0x0) {
        *param_4 = -3.4028235e+38;
      }
      return 0;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = local_38;
    }
  }
  else {
    if (((*(byte *)(param_1 + 0x78) & 3) != 0) ||
       (fVar4 = fVar4 - *(float *)(param_1 + 0x50), fVar5 = fVar5 - *(float *)(param_1 + 0x58),
       *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x5c) <= fVar4 * fVar4 + fVar5 * fVar5))
    goto LAB_100473104;
LAB_100472f74:
    if (param_4 != (float *)0x0) {
      *param_4 = 0.0;
    }
  }
  return 1;
}




undefined8 FUN_100473134(long param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x70);
  bVar1 = false;
  bVar2 = false;
  if (0.0 < fVar4) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 < 6.2831855;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    fVar3 = (float)_atan2f(param_2[2] - *(float *)(param_1 + 0x58),
                           *param_2 - *(float *)(param_1 + 0x50));
    for (fVar3 = ABS(*(float *)(param_1 + 0x74) - fVar3); 6.2831855 <= fVar3;
        fVar3 = fVar3 - 6.2831855) {
    }
    if (fVar4 * 0.5 < fVar3) {
      return 0;
    }
  }
  return 1;
}




void FUN_1004731c4(void)

{
  DAT_101e94198 = operator_new(0x20);
  DAT_101e94198[3] = 0;
  DAT_101e94198[2] = 0;
  *DAT_101e94198 = &PTR_FUN_10149dda8;
  DAT_101e94198[1] = DAT_101e94198 + 2;
  return;
}




void FUN_100473200(void)

{
  if (DAT_101e94198 != (long *)0x0) {
    (**(code **)(*DAT_101e94198 + 8))();
  }
  DAT_101e94198 = (long *)0x0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100473234(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
             undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  plVar2 = *(long **)(param_4 + 0x798);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_4 + 0x7a0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar3 = (**(code **)(**(long **)(param_4 + 0x798) + 0x10))();
        for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
          if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
            bVar4 = *(byte *)(lVar3 + 0x818) >> 3 & 3;
            goto LAB_1004732d4;
          }
        }
        bVar4 = 0;
LAB_1004732d4:
        iVar1 = FUN_100473328(param_4 + 8,param_4 + 0x788,param_4 + 0x790,bVar4);
        if (iVar1 != 0) {
          uVar5 = *(undefined8 *)(param_4 + 0x770);
          *(undefined4 *)(param_5 + 1) = *(undefined4 *)(param_4 + 0x778);
          *param_5 = uVar5;
          uVar6 = FUN_10054eb90(param_4 + 8);
          *(undefined4 *)((long)param_5 + 0xc) = uVar6;
          *(undefined4 *)(param_5 + 2) = param_2;
          *(undefined4 *)((long)param_5 + 0x14) = param_3;
          return 0;
        }
      }
    }
    else {
      *(undefined8 *)(param_4 + 0x798) = 0;
      *(undefined4 *)(param_4 + 0x7a0) = DAT_101dc0b88;
    }
  }
  return 2;
}




void FUN_100473328(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_10054e534(param_1,param_4);
  local_40 = *param_2;
  local_38 = param_2[1];
  local_3c = 0;
  local_50 = *param_3;
  local_48 = param_3[1];
  local_4c = 0;
  local_60 = 0x412000003c23d70a;
  local_58 = 0x3c23d70a;
  iVar1 = FUN_10054e07c(param_4,&local_40,&local_64,0,&local_60);
  if (iVar1 != 0) {
    local_3c = local_64;
  }
  iVar1 = FUN_10054e07c(param_4,&local_50,&local_68,0,&local_60);
  if (iVar1 != 0) {
    local_4c = local_68;
  }
  FUN_10054e574(param_1,&local_40,&local_50);
  return;
}




undefined8 FUN_1004733f8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x798);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7a0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0x798) + 0x10))();
        FUN_1003e4a18();
        uVar3 = FUN_100473480(param_1 + 8,param_2);
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x798) = 0;
      *(undefined4 *)(param_1 + 0x7a0) = DAT_101dc0b88;
    }
  }
  return 2;
}




undefined1 FUN_100473480(float param_1,long param_2,float *param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)FUN_1010a1cd4();
  iVar2 = FUN_10054ea68(fVar4 * param_1,param_2);
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    lVar3 = param_2 + (ulong)(*(int *)(param_2 + 0x764) - 1) * 0xc;
    fVar4 = *(float *)(param_2 + 0x768) - *(float *)(lVar3 + 0x164);
    fVar5 = *(float *)(param_2 + 0x76c) - *(float *)(lVar3 + 0x168);
    fVar6 = *(float *)(param_2 + 0x770) - *(float *)(lVar3 + 0x16c);
    uVar1 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6 < 0.010000001;
    fVar6 = *(float *)(lVar3 + 0x164);
    fVar4 = *(float *)(lVar3 + 0x168);
    fVar5 = *(float *)(lVar3 + 0x16c);
    if (!(bool)uVar1) {
      fVar6 = *(float *)(param_2 + 0x768);
      fVar4 = *(float *)(param_2 + 0x76c);
      fVar5 = *(float *)(param_2 + 0x770);
    }
    *param_3 = fVar6;
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    fVar6 = (float)FUN_10054eb90(param_2);
    param_3[3] = fVar6;
    param_3[4] = fVar4;
    param_3[5] = fVar5;
  }
  return uVar1;
}




long FUN_100473550(long param_1)

{
  return param_1 + (ulong)(*(int *)(param_1 + 0x76c) - 1) * 0xc + 0x16c;
}




void FUN_100473568(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100473570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




undefined8 FUN_100473574(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined4 local_38;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        iVar1 = *(int *)(param_1 + 0x24);
        plVar2 = *(long **)(param_1 + 8);
        if (iVar1 == -0x7ee3623b || iVar1 == 0) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 0x250);
          fVar5 = *(float *)(lVar3 + 0x254);
          *(float *)(param_1 + 0x1c) = fVar5;
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar3 + 600);
          *(float *)(param_1 + 0x1c) = *(float *)(lVar3 + 0x2ec) + fVar5;
        }
        else {
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          iVar1 = FUN_1003ab468(uVar4,(int *)(param_1 + 0x24),auStack_70);
          if (iVar1 != 0) {
            *(undefined8 *)(param_1 + 0x18) = local_40;
            *(undefined4 *)(param_1 + 0x20) = local_38;
          }
        }
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x20);
        *param_2 = uVar4;
        return 0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
    }
  }
  return 2;
}




long FUN_1004736bc(long param_1)

{
  return param_1 + 0x18;
}




void FUN_1004736c4(long param_1)

{
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  return;
}




void FUN_1004736d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x7c0) = uVar1;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x7cc) = uVar1;
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  return;
}




void FUN_100473734(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  plVar3 = *(long **)(param_1 + 0x7b8);
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x7cc) = 0;
    *(undefined4 *)(param_1 + 0x7d4) = 0;
  }
  else {
    lVar1 = param_1 + 0x7c0;
    iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
    if (iVar2 == 0) {
      return;
    }
    local_40 = 0x3e800000;
    local_3c = 0x7f7fffff;
    local_38 = 0x3e800000;
    FUN_10054e044(param_2,lVar1,lVar1,&local_40);
    if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
      *(undefined8 *)(param_1 + 0x7b8) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  return;
}




bool FUN_1004737f0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  *puVar2 = &PTR_FUN_10149a570;
  uVar3 = *param_2;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 1);
  puVar2[1] = uVar3;
  *(undefined8 **)(param_1 + 0x7b8) = puVar2;
  iVar1 = FUN_100473b78(puVar2,param_1 + 0x7c0);
  if ((iVar1 != 0) && (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  return iVar1 == 0;
}




bool FUN_100473888(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *in_x4;
  undefined8 uVar3;
  
  lVar2 = FUN_100473918();
  iVar1 = (**(code **)(**(long **)(param_1 + 0x7b8) + 0x10))
                    (*(long **)(param_1 + 0x7b8),param_1 + 0x7c0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    uVar3 = *(undefined8 *)(lVar2 + 0x16c);
    *(undefined4 *)(in_x4 + 1) = *(undefined4 *)(lVar2 + 0x174);
    *in_x4 = uVar3;
  }
  else {
    if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
      *(undefined8 *)(param_1 + 0x7b8) = 0;
    }
    *(undefined1 *)(param_1 + 0x7d8) = 0;
  }
  return iVar1 == 0;
}




undefined8 * FUN_100473918(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  *puVar1 = &PTR_FUN_10149a4f0;
  thunk_FUN_10054e4f4(puVar1 + 1);
  puVar1[0xf1] = *param_2;
  puVar1[0xf2] = *param_3;
  puVar1[0xf3] = param_4 + 0x28;
  *(undefined4 *)(puVar1 + 0xf4) = *(undefined4 *)(param_4 + 0x30);
  *(undefined8 **)(param_1 + 0x7b8) = puVar1;
  return puVar1;
}




bool FUN_1004739ac(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  if (*(undefined8 **)(param_2 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_2 + 0x7b8))();
    *(undefined8 *)(param_2 + 0x7b8) = 0;
  }
  puVar2 = (undefined8 *)(param_2 + 7U & 0xfffffffffffffff8);
  *puVar2 = &PTR_FUN_10149a5b0;
  uVar4 = *param_3;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 1);
  puVar2[1] = uVar4;
  uVar4 = *param_4;
  *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((long)puVar2 + 0x14) = uVar4;
  *(undefined4 *)(puVar2 + 4) = param_1;
  *(undefined8 **)(param_2 + 0x7b8) = puVar2;
  iVar1 = FUN_100473bb0(puVar2,param_2 + 0x7c0);
  if (iVar1 == 0) {
    uVar3 = 6;
  }
  else if (*(undefined8 **)(param_2 + 0x7b8) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)**(undefined8 **)(param_2 + 0x7b8))();
    uVar3 = 0;
    *(undefined8 *)(param_2 + 0x7b8) = 0;
  }
  *(undefined1 *)(param_2 + 0x7d8) = uVar3;
  return iVar1 == 0;
}




bool FUN_100473a84(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  FUN_100473af8();
  iVar1 = (**(code **)(**(long **)(param_1 + 0x7b8) + 0x10))
                    (*(long **)(param_1 + 0x7b8),param_1 + 0x7c0);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else if (*(undefined8 **)(param_1 + 0x7b8) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x7b8) = 0;
  }
  *(undefined1 *)(param_1 + 0x7d8) = uVar2;
  return iVar1 == 0;
}




void FUN_100473af8(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x7b8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x7b8))();
  }
  puVar2 = (undefined8 *)(param_1 + 7U & 0xfffffffffffffff8);
  *puVar2 = &PTR_FUN_10149a530;
  puVar2[1] = param_2 + 0x28;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x30);
  puVar2[3] = 0;
  uVar1 = *param_3;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)((long)puVar2 + 0x24) = uVar1;
  *(undefined8 **)(param_1 + 0x7b8) = puVar2;
  return;
}




long FUN_100473b68(long param_1)

{
  return param_1 + 0x7c0;
}




long FUN_100473b70(long param_1)

{
  return param_1 + 0x7cc;
}




undefined8 FUN_100473b78(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
  *param_2 = uVar1;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  return 0;
}




long FUN_100473ba8(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_100473bb0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < *(float *)(param_1 + 0x20)) {
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 8);
    fVar2 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x10);
    fVar4 = fVar3 * fVar3 + fVar2 * fVar2;
    if (1.1920929e-07 <= fVar4) {
      fVar4 = SQRT(fVar4);
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
      *param_2 = uVar1;
      *(float *)((long)param_2 + 0xc) = fVar3 / fVar4;
      *(undefined4 *)(param_2 + 2) = 0;
      *(float *)((long)param_2 + 0x14) = fVar2 / fVar4;
      return 0;
    }
  }
  return 2;
}




undefined8 FUN_100473c28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = *(float *)(param_1 + 0x20);
  fVar4 = (float)FUN_1010a1cd4();
  puVar3 = (undefined8 *)(param_1 + 0x14);
  fVar5 = (float)*param_2;
  fVar7 = (float)*puVar3 - fVar5;
  fVar6 = (float)((ulong)*param_2 >> 0x20);
  fVar8 = (float)((ulong)*puVar3 >> 0x20) - fVar6;
  fVar9 = *(float *)(param_1 + 0x1c) - *(float *)(param_2 + 1);
  fVar10 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  if (1.1920929e-07 <= fVar10) {
    fVar4 = fVar4 * fVar11;
    fVar11 = SQRT(fVar10);
    *(ulong *)((long)param_2 + 0xc) = CONCAT44(fVar8 / fVar11,fVar7 / fVar11);
    *(float *)((long)param_2 + 0x14) = fVar9 / fVar11;
    uVar1 = 0;
    if (fVar4 * fVar4 <= fVar10) {
      *param_2 = CONCAT44(fVar6 + (fVar8 / fVar11) * fVar4,fVar5 + (fVar7 / fVar11) * fVar4);
      *(float *)(param_2 + 1) = *(float *)(param_2 + 1) + fVar4 * (fVar9 / fVar11);
    }
    else {
      uVar2 = *puVar3;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x1c);
      *param_2 = uVar2;
    }
  }
  else {
    uVar1 = *puVar3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x1c);
    *param_2 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}




long FUN_100473cf8(long param_1)

{
  return param_1 + 0x14;
}




float FUN_100473d00(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = -1.0;
  if (0.0 < *(float *)(param_1 + 0x20)) {
    fVar1 = *(float *)(param_1 + 0x14) - *param_2;
    fVar2 = (float)*(undefined8 *)(param_1 + 0x18) - (float)*(undefined8 *)(param_2 + 1);
    fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) / *(float *)(param_1 + 0x20);
  }
  return fVar1;
}




void FUN_100473d44(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_78 = param_1;
  if (param_3 == 0) {
    uStack_8c = *(undefined4 *)(param_4 + 0x260);
    local_90 = 0xffffffff;
    local_88 = 0;
    local_80 = FUN_100345d90();
    local_6c = 0;
    local_74 = 0;
    local_64 = 0;
    uStack_58 = 0xffffffff000000ee;
    local_60 = 0xffffffffffffffff;
  }
  else {
    local_90 = *(undefined4 *)(param_3 + 0x260);
    uVar1 = *(undefined4 *)(param_4 + 0x260);
    uStack_8c = uVar1;
    local_88 = FUN_100345d90();
    local_80 = FUN_100345d90(uVar1);
    local_6c = 0;
    local_74 = 0;
    local_64 = 0;
    uStack_58 = 0xffffffff000000ee;
    local_60 = 0xffffffffffffffff;
    lVar2 = *(long *)(param_3 + 0x18);
    if (lVar2 != 0) {
LAB_100473dc0:
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8) goto code_r0x000100473dd0;
      for (lVar2 = *(long *)(lVar2 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x350)) {
        FUN_100469ea0(lVar2,param_2,&local_90);
      }
    }
LAB_100473e34:
    if (*(int *)(param_3 + 0x260) == *(int *)(param_4 + 0x260)) {
      return;
    }
  }
  lVar2 = *(long *)(param_4 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184daa8) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  for (lVar2 = *(long *)(lVar2 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x350)) {
    FUN_100469ea0(lVar2,param_2,&local_90);
  }
  return;
code_r0x000100473dd0:
  lVar2 = *(long *)(lVar2 + 0x20);
  if (lVar2 == 0) goto LAB_100473e34;
  goto LAB_100473dc0;
}




void FUN_100473ea8(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 << 4);
    puVar3 = *(undefined8 **)(param_1 + 2);
    uVar1 = *param_1;
    if (uVar1 != 0) {
      puVar4 = puVar2;
      puVar5 = puVar3;
      do {
        *puVar4 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        puVar5 = puVar5 + 2;
        puVar4 = puVar4 + 2;
      } while (puVar5 != puVar3 + (ulong)uVar1 * 2);
    }
    param_1[1] = param_2;
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete__(puVar3);
    }
    *(undefined8 **)(param_1 + 2) = puVar2;
  }
  return;
}




void FUN_100473f34(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  return;
}




void FUN_100473f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a0) = param_2;
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  return;
}




void FUN_100473f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b0) = param_2;
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}




void FUN_100473f4c(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100473ea8(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -0x10) = *param_2;
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 1);
  return;
}




undefined8 * FUN_100473fd4(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a5f0;
  param_1[5] = &PTR_FUN_10149a620;
  *(undefined8 *)((long)param_1 + 0x34) = 0xeeffffffff;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 100) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x14) = DAT_101dc0b88;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 0x41f0000000000000;
  param_1[0x1b] = 0;
  *(undefined2 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)((long)param_1 + 0xec) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1e) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}




void thunk_FUN_100474b5c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_1010a1cd4();
  fVar5 = *(float *)(param_1 + 200) + fVar5;
  *(float *)(param_1 + 200) = fVar5;
  if (*(float *)(param_1 + 0xcc) < fVar5) {
    FUN_100474d30(param_1);
    FUN_1010a01dc(param_1);
    return;
  }
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 == (long *)0x0) goto LAB_100474c4c;
  if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) goto LAB_100474c4c;
    plVar1 = *(long **)(param_1 + 0xd8);
    lVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        lVar2 = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
      }
    }
    uVar3 = DAT_101dc0b88;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
    if (((int)uVar4 == 0x1f) || (1 < *(ushort *)(lVar2 + uVar4 * 0x38 + 0x90) - 3))
    goto LAB_100474c4c;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    uVar3 = DAT_101dc0b88;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
LAB_100474c4c:
  if ((*(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x90)) ||
     (*(float *)(param_1 + 0x90) == 0.0)) {
    fVar6 = *(float *)(param_1 + 0x8c);
    fVar5 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + fVar6 * fVar5;
  }
  FUN_10047467c(param_1);
  FUN_100474d90(param_1);
  FUN_100474df0(param_1);
  return;
}




void thunk_FUN_100474cb0(long param_1)

{
  if ((*(char *)(param_1 + 0xd1) != '\0') && (*(char *)(param_1 + 0xd0) == '\0')) {
    FUN_100474e50(param_1);
    *(undefined1 *)(param_1 + 0xd1) = 0;
  }
  if ((*(char *)(param_1 + 0xd2) != '\0') && (*(char *)(param_1 + 0xd0) == '\0')) {
    FUN_100474eb0(param_1);
    *(undefined1 *)(param_1 + 0xd2) = 0;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    if (*(char *)(param_1 + 0xd4) != '\0') {
      FUN_1004743d4(param_1);
      FUN_100466738();
    }
    FUN_1010a01dc(param_1);
    return;
  }
  return;
}




void FUN_1004740b0(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100475008(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_1004740e0(undefined4 param_1,long param_2,uint param_3,undefined4 param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined2 local_40;
  
  *(undefined4 *)(param_2 + 0x34) = param_4;
  *(uint *)(param_2 + 0x38) = param_3;
  uVar1 = *(undefined4 *)(param_5 + 0x30);
  *(long *)(param_2 + 0x98) = param_5 + 0x28;
  *(undefined4 *)(param_2 + 0xa0) = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 0x30);
  *(long *)(param_2 + 0xa8) = param_6 + 0x28;
  *(undefined4 *)(param_2 + 0xb0) = uVar1;
  uVar2 = *param_8;
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_8 + 1);
  *(undefined8 *)(param_2 + 0x7c) = uVar2;
  *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(param_5 + 0x264);
  *(undefined4 *)(param_2 + 0xf8) = param_1;
  FUN_100474f10(param_7,param_8,param_2 + 0x3c);
  if (*(long **)(param_5 + 0x50) == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_5 + 0x50) + 0x178))();
  }
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_60 = 0;
  local_4c = 0xff000000;
  local_48 = 0xbf8000003f800000;
  local_40 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_54 = 0;
  local_5c = 0;
  if ((code *)(&PTR_FUN_10185d830)[param_3] != (code *)0x0) {
    (*(code *)(&PTR_FUN_10185d830)[param_3])(param_2,&local_f0);
  }
  FUN_1000b583c(param_2,&local_f0,uVar2);
  return;
}




undefined4 FUN_1004741f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




void FUN_100474200(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x6c);
  param_2[1] = *(undefined4 *)(param_1 + 0x70);
  param_2[2] = *(undefined4 *)(param_1 + 0x74);
  return;
}




void FUN_10047421c(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = param_2[1];
  fVar3 = param_2[2];
  fVar6 = *param_2;
  fVar4 = fVar5 * 0.0 - fVar3 * 1.0;
  fVar7 = fVar3 * 0.0 - fVar6 * 0.0;
  fVar8 = fVar6 * 1.0 - fVar5 * 0.0;
  fVar2 = 1.0;
  fVar1 = 0.0;
  if (1.1920929e-07 <= SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar8 * fVar8)) {
    fVar2 = 0.0;
    fVar1 = 1.0;
  }
  fVar6 = fVar6 - 0.0;
  fVar5 = fVar5 - 0.0;
  fVar3 = fVar3 - 0.0;
  fVar4 = 1.0 / SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar6 = fVar6 * fVar4;
  fVar5 = fVar5 * fVar4;
  fVar3 = fVar3 * fVar4;
  fVar7 = fVar3 * fVar1 - fVar5 * fVar2;
  fVar4 = fVar6 * fVar2 - fVar3 * 0.0;
  fVar1 = fVar5 * 0.0 - fVar6 * fVar1;
  fVar2 = 1.0 / SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar1 * fVar1);
  fVar7 = fVar7 * fVar2;
  fVar4 = fVar4 * fVar2;
  fVar1 = fVar1 * fVar2;
  *(float *)(param_1 + 0x3c) = fVar7;
  *(float *)(param_1 + 0x40) = fVar4;
  *(float *)(param_1 + 0x44) = fVar1;
  *(float *)(param_1 + 0x4c) = fVar1 * fVar5 - fVar4 * fVar3;
  *(float *)(param_1 + 0x50) = fVar7 * fVar3 - fVar1 * fVar6;
  *(float *)(param_1 + 0x54) = fVar4 * fVar6 - fVar7 * fVar5;
  *(float *)(param_1 + 0x5c) = fVar6;
  *(float *)(param_1 + 0x60) = fVar5;
  *(float *)(param_1 + 100) = fVar3;
  fVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)param_2;
  *(float *)(param_1 + 0x84) = fVar1;
  return;
}




undefined4 FUN_100474344(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}




undefined8 FUN_10047434c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0x98);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x0001004743ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))();
        return uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = DAT_101dc0b88;
  }
  return 0;
}




undefined8 FUN_1004743d4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0x98);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xa0) == (int)plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x000100474434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))();
        return uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = DAT_101dc0b88;
  }
  return 0;
}




undefined8 FUN_10047445c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0xa8);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x0001004744bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))();
        return uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = DAT_101dc0b88;
  }
  return 0;
}




undefined8 FUN_1004744e4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0xa8);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x000100474544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))();
        return uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb0) = DAT_101dc0b88;
  }
  return 0;
}




undefined8 FUN_10047456c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0xd8);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x0001004745cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))();
        return uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
  }
  return 0;
}




undefined8 FUN_1004745f4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0xd8);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
                    /* WARNING: Could not recover jumptable at 0x000100474654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))();
        return uVar3;
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
  }
  return 0;
}




void FUN_10047467c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_60 [48];
  undefined8 local_30;
  undefined4 local_28;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if ((*(int *)(param_1 + 0xe8) == 0) || (*(int *)(param_1 + 0xe8) != 1)) {
          lVar3 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
          *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar3 + 0x250);
          fVar5 = *(float *)(lVar3 + 0x254);
          *(float *)(param_1 + 0xf0) = fVar5;
          *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(lVar3 + 600);
          *(float *)(param_1 + 0xf0) = *(float *)(lVar3 + 0x2ec) + fVar5;
        }
        else {
          if (((DAT_101e941a8 & 1) == 0) &&
             (iVar1 = ___cxa_guard_acquire(&DAT_101e941a8), iVar1 != 0)) {
            DAT_101e941a0 = 0x3e3270a0;
            ___cxa_guard_release(&DAT_101e941a8);
          }
          plVar2 = *(long **)(param_1 + 0xd8);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 0xd8) = 0;
              *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
            }
          }
          FUN_1003ab468(uVar4,&DAT_101e941a0,auStack_60);
          *(undefined8 *)(param_1 + 0xec) = local_30;
          *(undefined4 *)(param_1 + 0xf4) = local_28;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
    }
  }
  return;
}




undefined1 FUN_1004747c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}




void FUN_1004747d0(long param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  undefined4 local_28;
  
  if (DAT_101d23a38 != '\0') {
    for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_101867430) {
        return;
      }
    }
    local_40 = *(undefined8 *)(param_1 + 0x6c);
    local_38 = *(undefined4 *)(param_1 + 0x74);
    lVar1 = FUN_1010a0298();
    if (lVar1 != 0) {
      local_30 = lVar1 + 0x28;
      local_28 = *(undefined4 *)(lVar1 + 0x30);
      FUN_10034d3e8(DAT_101e47e78,DAT_101867430,lVar1 + 0x34,&local_30,&local_40);
    }
  }
  return;
}




void FUN_100474868(long param_1)

{
  long lVar1;
  
  if (DAT_101d23a38 != '\0') {
    for (lVar1 = *(long *)(param_1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_101867430) {
        FUN_1010a02fc();
        return;
      }
    }
  }
  return;
}




void FUN_1004748a4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_10047497c(param_1,*(undefined4 *)(param_2 + 0x260));
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x100) + -8);
    if (*(long *)(param_1 + 0x100) != 0 && plVar3 != (long *)0x0) {
      do {
        if (*(char *)(param_1 + 0xd0) != '\0') break;
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      } while (plVar3 != (long *)0x0);
    }
    FUN_100474a08(param_1,param_2);
  }
  if (((*(char *)(param_1 + 0xd0) == '\0') && (*(long *)(param_1 + 0x100) != 0)) &&
     (plVar3 = (long *)(*(long *)(param_1 + 0x100) + -8), plVar3 != (long *)0x0)) {
    do {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1,param_2);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    } while ((plVar3 != (long *)0x0) && (*(char *)(param_1 + 0xd0) == '\0'));
  }
  return;
}




undefined8 FUN_10047497c(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    uVar2 = FUN_10045fb10(lVar4);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar3 = 0;
    do {
      lVar4 = FUN_10045fa7c(lVar4,uVar3);
      if ((lVar4 != 0) &&
         (lVar4 = FUN_10045fa7c(*(undefined8 *)(param_1 + 0xc0),uVar3),
         *(int *)(lVar4 + 0x260) == param_2)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(param_1 + 0xc0);
      uVar1 = FUN_10045fb10(lVar4);
    } while (uVar3 < uVar1);
  }
  return 0;
}




void FUN_100474a08(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    lVar1 = FUN_1010a0298(param_1,DAT_101867320);
    *(long *)(param_1 + 0xc0) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  uVar2 = FUN_10047497c(param_1,*(undefined4 *)(param_2 + 0x260));
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_10045f9f0(*(undefined8 *)(param_1 + 0xc0),param_2);
  return;
}




undefined8 FUN_100474a6c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))();
        uVar3 = FUN_100032108();
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
    }
  }
  return 1;
}




undefined8 FUN_100474ae4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))();
        uVar3 = FUN_100032108();
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xb0) = DAT_101dc0b88;
    }
  }
  return 1;
}




void FUN_100474b5c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_1010a1cd4();
  fVar5 = *(float *)(param_1 + 200) + fVar5;
  *(float *)(param_1 + 200) = fVar5;
  if (*(float *)(param_1 + 0xcc) < fVar5) {
    FUN_100474d30(param_1);
    FUN_1010a01dc(param_1);
    return;
  }
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 == (long *)0x0) goto LAB_100474c4c;
  if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) goto LAB_100474c4c;
    plVar1 = *(long **)(param_1 + 0xd8);
    lVar2 = 0;
    if (plVar1 != (long *)0x0) {
      if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
        lVar2 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        lVar2 = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xe0) = DAT_101dc0b88;
      }
    }
    uVar3 = DAT_101dc0b88;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
    if (((int)uVar4 == 0x1f) || (1 < *(ushort *)(lVar2 + uVar4 * 0x38 + 0x90) - 3))
    goto LAB_100474c4c;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    uVar3 = DAT_101dc0b88;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
LAB_100474c4c:
  if ((*(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x90)) ||
     (*(float *)(param_1 + 0x90) == 0.0)) {
    fVar6 = *(float *)(param_1 + 0x8c);
    fVar5 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + fVar6 * fVar5;
  }
  FUN_10047467c(param_1);
  FUN_100474d90(param_1);
  FUN_100474df0(param_1);
  return;
}




void FUN_100474cb0(long param_1)

{
  if ((*(char *)(param_1 + 0xd1) != '\0') && (*(char *)(param_1 + 0xd0) == '\0')) {
    FUN_100474e50(param_1);
    *(undefined1 *)(param_1 + 0xd1) = 0;
  }
  if ((*(char *)(param_1 + 0xd2) != '\0') && (*(char *)(param_1 + 0xd0) == '\0')) {
    FUN_100474eb0(param_1);
    *(undefined1 *)(param_1 + 0xd2) = 0;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    if (*(char *)(param_1 + 0xd4) != '\0') {
      FUN_1004743d4(param_1);
      FUN_100466738();
    }
    FUN_1010a01dc(param_1);
    return;
  }
  return;
}




void FUN_100474d30(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
  if (*(long *)(param_1 + 0x100) != 0 && plVar2 != (long *)0x0) {
    do {
      if (*(char *)(param_1 + 0xd0) != '\0') {
        return;
      }
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100474d90(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x118);
  if (plVar2 != (long *)0x0) {
    FUN_1010a1cd4();
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 0xd2) = 1;
    }
    else if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0xd1) = 1;
    }
  }
  return;
}




void FUN_100474df0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x100) + -8);
  if (*(long *)(param_1 + 0x100) != 0 && puVar2 != (undefined8 *)0x0) {
    do {
      if (*(char *)(param_1 + 0xd0) != '\0') {
        return;
      }
      (**(code **)*puVar2)(puVar2,param_1);
      plVar1 = puVar2 + 1;
      puVar2 = (undefined8 *)0x0;
      if (*plVar1 != 0) {
        puVar2 = (undefined8 *)(*plVar1 + -8);
      }
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100474e50(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
  if (*(long *)(param_1 + 0x100) != 0 && plVar2 != (long *)0x0) {
    do {
      if (*(char *)(param_1 + 0xd0) != '\0') {
        return;
      }
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100474eb0(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
  if (*(long *)(param_1 + 0x100) != 0 && plVar2 != (long *)0x0) {
    do {
      if (*(char *)(param_1 + 0xd0) != '\0') {
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100474f10(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  fVar1 = param_2[2] * 1.0 - param_2[1] * 0.0;
  fVar2 = *param_2 * 0.0 - param_2[2] * 0.0;
  fVar4 = param_2[1] * 0.0 - *param_2 * 1.0;
  fVar3 = fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2;
  if (1e-08 <= fVar3) {
    fVar3 = 1.0 / SQRT(fVar3);
    fVar1 = fVar1 * fVar3;
    fVar2 = fVar2 * fVar3;
    fVar4 = fVar4 * fVar3;
  }
  else {
    fVar1 = 1.0;
    fVar2 = 0.0;
    fVar4 = 0.0;
  }
  fVar3 = fVar2 * 0.0 - fVar4 * 1.0;
  fVar5 = fVar4 * 0.0 - fVar1 * 0.0;
  fVar6 = fVar1 * 1.0 - fVar2 * 0.0;
  uVar7 = *param_1;
  fVar8 = *(float *)(param_1 + 1);
  *param_3 = fVar1;
  param_3[1] = fVar2;
  param_3[4] = 0.0;
  param_3[5] = 1.0;
  fVar1 = 1.0 / SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
  param_3[8] = fVar3 * fVar1;
  param_3[9] = fVar5 * fVar1;
  *(undefined8 *)(param_3 + 0xc) = uVar7;
  param_3[2] = fVar4;
  param_3[6] = 0.0;
  param_3[10] = fVar6 * fVar1;
  param_3[0xe] = fVar8;
  param_3[3] = 0.0;
  param_3[7] = 0.0;
  param_3[0xb] = 0.0;
  param_3[0xf] = 1.0;
  return;
}




void FUN_100475008(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_1004745f4();
  if (lVar2 != param_2) {
    return;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(long *)(param_1 + 0xd8) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  FUN_10047467c(param_1);
  return;
}




void FUN_100475064(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100475064_10149a650;
  param_1[5] = &PTR_FUN_10149a680;
  FUN_10034d52c(DAT_101e47e78,DAT_101867430,(long)param_1 + 0x34);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_100475064(void)

{
  FUN_100475064();
  return;
}




void FUN_1004750c0(long param_1)

{
  FUN_100475064(param_1 + -0x28);
  return;
}




void FUN_1004750c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100475064();
  operator_delete(pvVar1);
  return;
}




void FUN_1004750dc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100475064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1004750f4(long param_1)

{
  long lVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dec0) {
    lVar1 = 0;
  }
  local_20 = *(undefined8 *)(lVar1 + 0x6c);
  local_18 = *(undefined4 *)(lVar1 + 0x74);
  FUN_10034d608(*(undefined4 *)(lVar1 + 0x88),DAT_101e47e78,param_1 + 0x34,&local_20,0);
  return;
}




void FUN_100475154(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100475184(param_1,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_100475184(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dec0) {
      lVar1 = 0;
    }
    if (param_3 != 0) {
      uVar3 = (ulong)param_3;
      do {
        lVar2 = *param_2;
        if ((lVar2 != 0) && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_101867380)) {
          lVar2 = *(long *)(lVar2 + 0x10);
          if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68) {
            lVar2 = 0;
          }
          FUN_1004748a4(lVar1,lVar2);
        }
        param_2 = param_2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}




void FUN_100475240(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149a6b0;
  return;
}




void FUN_100475254(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100475260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(param_2);
    return;
  }
  return;
}




void FUN_100475268(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149a6f0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  return;
}




void FUN_100475284(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if (DAT_101d23a38 != '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      lVar2 = param_2[1];
    }
    else {
      lVar2 = FUN_1004743d4(*param_2);
    }
    if ((lVar2 != 0) &&
       ((*(code **)(param_1 + 0x20) == (code *)0x0 ||
        (iVar1 = (**(code **)(param_1 + 0x20))(*param_2,param_2[1]), iVar1 != 0)))) {
      lVar3 = *(long *)(lVar2 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      FUN_1003a4e5c(&local_58,*(undefined8 *)(param_1 + 0x10));
      for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
        if ((*(int *)(lVar3 + 0x314) == (int)local_58) && (*(int *)(lVar3 + 0x310) == 0)) {
          uStack_38 = *(undefined4 *)(lVar3 + 0x30c);
          local_3c = *(undefined4 *)(lVar2 + 0x260);
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          local_58 = &PTR_FUN_101496cd8;
          FUN_100496580(&local_58,&DAT_101e47d30);
          return;
        }
      }
    }
  }
  return;
}




void FUN_100475388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a730;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xbf800000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x200000002;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




void FUN_1004753b0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_10047434c();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x40);
    fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
    NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
    uVar3 = DAT_101e94270;
  }
  *param_3 = uVar3;
  return;
}




void FUN_10047541c(undefined8 param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_28;
  
  if (((DAT_101d23a38 != '\0') && (lVar1 = FUN_1004743d4(*param_2), lVar1 != 0)) &&
     (param_2[1] != 0)) {
    lVar1 = *param_2;
    fVar3 = *(float *)(lVar1 + 0x7c);
    fVar2 = *(float *)(lVar1 + 0x84);
    fVar4 = fVar3 * fVar3 + fVar2 * fVar2;
    if (1e-08 <= fVar4) {
      fVar4 = SQRT(fVar4);
      local_28 = CONCAT44(fVar2 / fVar4,fVar3 / fVar4);
    }
    else {
      local_28 = DAT_101873a50;
    }
    FUN_1004754bc(param_1,lVar1,param_2[1],&local_28);
  }
  return;
}




void FUN_1004754bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined1 auStack_b8 [115];
  char local_45;
  undefined4 local_44;
  
  lVar2 = FUN_10047434c(param_2);
  if (lVar2 != 0) {
    local_44 = *(undefined4 *)(param_1 + 0x10);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,param_3,&local_44);
    }
    local_45 = '\0';
    if (*(int *)(param_1 + 0x30) == 0) {
      bVar1 = false;
    }
    else {
      FUN_1003aaed8(lVar2,&local_44,&local_45,*(int *)(param_1 + 0x30) == 2);
      bVar1 = local_45 != '\0';
    }
    FUN_1003462a0(local_44,auStack_b8,*(undefined4 *)(lVar2 + 0x260),
                  *(undefined4 *)(param_3 + 0x260),*(undefined4 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x2c),param_4,0,bVar1,1);
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_2,auStack_b8);
    }
    FUN_10010cbe0(auStack_b8);
  }
  return;
}




void FUN_1004755a8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 + 0xf8);
  return;
}




void FUN_1004755b4(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  
  uVar2 = DAT_101e94330;
  uVar1 = DAT_101e94270;
  lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
  fVar4 = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0xfc) * (*(float *)(lVar3 + 0x264) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1b0),DAT_101e94330);
  *(undefined4 *)(param_2 + 0x30) = DAT_101e94270;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0xc) = 5;
  FUN_1003aaed8(uVar1,uVar1,uVar2,0x3f800000,*(long *)(param_2 + 0x28),
                (undefined4 *)(param_2 + 0x30),param_2 + 0xe,0);
  return;
}




void FUN_100475610(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149a770;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_100475628(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
     (iVar2 = (**(code **)(param_1 + 0x10))(*param_2,param_2[1]), iVar2 == 0)) {
    return;
  }
  lVar1 = *param_2;
  if (DAT_101d23a38 != '\0') {
    for (lVar3 = *(long *)(lVar1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_101867430) {
        if (param_2[1] != 0) goto LAB_1004756bc;
        break;
      }
    }
    if (*(char *)(lVar1 + 0xd3) != '\0') {
LAB_1004756bc:
      FUN_100129a64();
      return;
    }
  }
  FUN_1003d693c(lVar1,*(char *)(param_1 + 0x18) != '\0' || param_2[1] != 0);
  return;
}




void FUN_1004756d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a7b0;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_10149a7f8;
  param_1[3] = 0;
  param_1[4] = 0xbf800000;
  param_1[5] = 0xbf800000;
  return;
}




void FUN_100475700(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (DAT_101d23a38 != '\0') {
    if (param_2[1] == 0) {
      uVar1 = 0;
    }
    else {
      FUN_100475764(param_1,*param_2);
      uVar1 = param_2[1];
    }
    FUN_10047581c(param_1 + 0x20,param_1 + 0x10,param_2,uVar1);
    return;
  }
  return;
}




void FUN_100475764(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  
  local_44 = 0;
  (**(code **)(param_1 + 0x18))(param_2,&local_44);
  lVar4 = FUN_10047434c(param_2);
  if (lVar4 == 0) {
    local_88 = 0xffffffff;
  }
  else {
    lVar4 = FUN_10047434c(param_2);
    local_88 = *(undefined4 *)(lVar4 + 0x260);
  }
  uVar3 = local_44;
  uVar1 = *(undefined4 *)(param_3 + 0x260);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uStack_84 = uVar1;
  local_80 = FUN_100345d90();
  local_78 = FUN_100345d90(uVar1);
  local_70 = uVar3;
  local_64 = 0;
  local_6c = 0;
  local_5c = 0;
  local_58 = 0xffffffffffffffff;
  uStack_4c = 0xffffffff;
  local_50 = uVar2;
  FUN_10010cbe4(&local_88);
  return;
}




void FUN_10047581c(float *param_1,undefined8 *param_2,long *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined ***pppuVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_788;
  undefined **local_780;
  long lStack_778;
  undefined1 local_770;
  undefined8 local_76c;
  undefined8 uStack_764;
  undefined8 local_75c;
  undefined8 uStack_754;
  undefined8 local_74c;
  undefined8 uStack_744;
  undefined8 local_73c;
  undefined7 uStack_734;
  undefined1 uStack_72d;
  undefined7 uStack_72c;
  undefined8 local_724;
  float local_71c;
  undefined8 local_718;
  float local_710;
  float fStack_70c;
  undefined **local_708;
  long local_700;
  undefined1 local_6f8;
  undefined8 local_6f4;
  undefined8 uStack_6ec;
  undefined8 local_6e4;
  undefined4 uStack_6dc;
  float fStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  float fStack_6c8;
  undefined4 local_6c4;
  float fStack_6c0;
  undefined7 uStack_6bc;
  undefined1 uStack_6b5;
  undefined4 uStack_6b4;
  ushort uStack_6b0;
  undefined1 uStack_6ae;
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (0.0 < *param_1) {
    uVar10 = *(undefined8 *)(*param_3 + 0x6c);
    fVar15 = *(float *)(*param_3 + 0x74);
    local_708 = &PTR_FUN_101499960;
    local_700 = 0;
    local_6f4 = 0;
    local_6e4 = 0;
    uStack_6ec = 0;
    uStack_6dc = 0;
    uStack_6d0 = 0xc0000000;
    uStack_6cc = 0xbf800000;
    fStack_6d8 = -1.0;
    uStack_6d4 = 0xbf800000;
    fStack_6c8 = 1.0;
    local_6c4 = CONCAT31(local_6c4._1_3_,0xff);
    uStack_6bc = 0xffffffff;
    uStack_6b5 = 0;
    uStack_6b4 = 0xffffffff;
    local_6f8 = 1;
    lVar4 = FUN_1003e10f0();
    uVar3 = (uint)*(byte *)(lVar4 + 0xe5) << 0x10;
    fStack_6c0 = param_1[3];
    lVar4 = FUN_1004743d4(*param_3);
    if (lVar4 != 0) {
      local_700 = lVar4;
    }
    uVar6 = uVar3 | 0x144120;
    uStack_6b0 = 0x4120;
    uStack_6ae = (undefined1)(uVar6 >> 0x10);
    if (0.0 < param_1[2]) {
      uVar6 = uVar3 | 0x146120;
      uStack_6b0 = 0x6120;
      uStack_6ae = (undefined1)(uVar6 >> 0x10);
      fStack_6c8 = param_1[2];
    }
    local_770 = local_6f8;
    uStack_754 = CONCAT44(fStack_6d8,uStack_6dc);
    local_75c = local_6e4;
    uStack_744 = CONCAT44(fStack_6c8,uStack_6cc);
    local_74c = CONCAT44(uStack_6d0,uStack_6d4);
    local_73c = CONCAT44(fStack_6c0,local_6c4);
    uStack_734 = uStack_6bc;
    uStack_72d = uStack_6b5;
    uStack_72c = (undefined7)
                 (CONCAT17(uStack_6ae,CONCAT25(uStack_6b0,CONCAT41(uStack_6b4,uStack_6b5))) >> 8);
    uStack_764 = uStack_6ec;
    local_76c = local_6f4;
    local_780 = &PTR_FUN_101499998;
    lStack_778 = local_700;
    local_71c = 0.0;
    local_724 = 0;
    local_718 = 0;
    fVar9 = param_1[1];
    local_710 = 0.0;
    fStack_70c = 0.0;
    fVar14 = (float)uVar10;
    if (fVar9 <= 0.0) {
      pppuVar5 = &local_708;
      fStack_6d8 = *param_1 * *param_1;
      uStack_6ec = CONCAT44(uStack_6ec._4_4_,fVar15);
      uStack_6b0 = (ushort)uVar6 | 0x8000;
      uStack_6ae = (undefined1)(uVar6 >> 0x10);
      local_6f4 = uVar10;
    }
    else {
      uVar12 = *(undefined8 *)(*param_3 + 0x7c);
      local_718 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar12 >> 0x20) * fVar9,
                           fVar14 + (float)uVar12 * fVar9);
      local_710 = fVar15 + fVar9 * *(float *)(*param_3 + 0x84);
      fStack_70c = *param_1;
      pppuVar5 = &local_780;
      local_724 = uVar10;
      local_71c = fVar15;
    }
    uVar3 = FUN_1003a6ce4(pppuVar5,local_6a8,200,0);
    if (uVar3 != 0) {
      uVar7 = (ulong)uVar3;
      plVar8 = local_6a8;
      do {
        lVar4 = *plVar8;
        if (lVar4 != 0 && lVar4 != param_4) {
          fVar9 = ABS(fVar15 - *(float *)(lVar4 + 600));
          bVar1 = false;
          bVar2 = false;
          if (ABS(fVar14 - *(float *)(lVar4 + 0x250)) < 1.1920929e-07) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(fVar9)) {
              bVar1 = fVar9 < 1.1920929e-07;
              bVar2 = false;
            }
          }
          if (bVar1 == bVar2) {
            local_788 = DAT_101873a50;
          }
          else {
            fVar9 = fVar14 - *(float *)(lVar4 + 0x250);
            fVar11 = fVar15 - *(float *)(lVar4 + 600);
            fVar13 = SQRT(fVar9 * fVar9 + fVar11 * fVar11);
            local_788 = CONCAT44(fVar11 / fVar13,fVar9 / fVar13);
          }
          (**(code **)*param_2)(param_2,param_3,lVar4,&local_788);
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100475af4(undefined8 param_1,undefined8 *param_2)

{
  FUN_100475764(param_1,*param_2);
  return;
}




void FUN_100475afc(long param_1,undefined8 *param_2)

{
  FUN_100475764(param_1 + -0x10,*param_2);
  return;
}




void FUN_100475b08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a810;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  return;
}




void FUN_100475b24(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (((DAT_101d23a38 != '\0') && (lVar3 = FUN_1004743d4(*param_2), lVar3 != 0)) &&
     ((*(code **)(param_1 + 0x18) == (code *)0x0 ||
      (iVar2 = (**(code **)(param_1 + 0x18))(param_2), iVar2 != 0)))) {
    plVar5 = (long *)(lVar3 + 0x18);
    do {
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x20);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8);
    lVar4 = *(long *)(lVar4 + (ulong)*(uint *)(param_1 + 0x10) * 8 + 0x50);
    if (lVar4 == 0) {
LAB_100475bd8:
      FUN_100101b0c(lVar3);
      return;
    }
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x38) + 0x80);
    if (uVar1 < 3) {
      if (param_2[1] != 0) {
        FUN_100101b14(lVar3);
        return;
      }
    }
    else {
      if (uVar1 == 3) {
        FUN_100101b1c(lVar3,(ulong)*(uint *)(param_1 + 0x10),*param_2 + 0xec);
        return;
      }
      if (uVar1 == 4) goto LAB_100475bd8;
    }
  }
  return;
}




void FUN_100475c18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a850;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}




void FUN_100475c34(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_34;
  
  if (DAT_101d23a38 != '\0') {
    if (*(char *)(param_1 + 0x20) == '\0') {
      lVar1 = param_2[1];
    }
    else {
      lVar1 = FUN_1004743d4(*param_2);
    }
    if (lVar1 != 0) {
      local_34 = 0;
      (**(code **)(param_1 + 0x18))(*param_2,&local_34);
      if (*(int *)(param_1 + 0x10) == 1) {
        local_4c = *(undefined4 *)(lVar1 + 0x260);
        uStack_48 = 3;
      }
      else {
        if (*(int *)(param_1 + 0x10) != 0) {
          return;
        }
        local_4c = *(undefined4 *)(lVar1 + 0x260);
        uStack_48 = 2;
      }
      local_50 = 0;
      uStack_58 = 0;
      local_60 = 0;
      local_68 = &PTR_FUN_101497218;
      local_44 = local_34;
      local_40 = 0x100;
      local_3e = 0;
      FUN_100496328(&local_68,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100475d20(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149a890;
  return;
}




void FUN_100475d34(long param_1,long *param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)(*param_2 + 0xf8);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    fVar2 = *(float *)(param_1 + 0x14) * fVar2;
  }
  else if (iVar1 == 1) {
    fVar2 = *(float *)(param_1 + 0x14) + fVar2;
  }
  else if (iVar1 == 0) {
    fVar2 = *(float *)(param_1 + 0x14);
  }
  *(float *)(*param_2 + 0xf8) = fVar2;
  return;
}




void FUN_100475d78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a8d0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xee;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0xffffffff00000002;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}




void FUN_100475dd0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong local_a8;
  undefined4 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined8 local_74;
  ulong local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  lVar5 = FUN_1004743d4(*param_2);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == -1) {
    iVar1 = *(int *)(lVar5 + 0x260);
  }
  local_34 = *(undefined4 *)(param_1 + 0x48);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(&local_34);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(code **)(param_1 + 0x20) == (code *)0x0) {
      local_a8 = *(ulong *)(param_1 + 0x34);
      local_a0 = *(undefined4 *)(param_1 + 0x3c);
    }
    else {
      (**(code **)(param_1 + 0x20))(*param_2,&local_a8);
    }
    uVar3 = *(undefined1 *)(lVar5 + 0x300);
    lVar5 = FUN_100345d90(iVar1);
    local_77 = *(undefined1 *)(lVar5 + 0x300);
    local_40 = *(undefined4 *)(param_1 + 0x48);
    local_7c = 1;
    local_76 = 0;
    local_74 = *(undefined8 *)(param_1 + 0x34);
    local_6c = (ulong)*(uint *)(param_1 + 0x3c);
    local_44 = DAT_1018589d8;
    local_78 = uVar3;
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) {
      return;
    }
    local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
    if (*(code **)(param_1 + 0x18) == (code *)0x0) {
      iVar2 = *(int *)(param_1 + 0x30);
      local_a8 = CONCAT44(local_a8._4_4_,iVar2);
    }
    else {
      (**(code **)(param_1 + 0x18))(*param_2,&local_a8);
      iVar2 = (int)local_a8;
    }
    if (iVar2 == -1) {
      return;
    }
    uVar3 = *(undefined1 *)(lVar5 + 0x300);
    lVar5 = FUN_100345d90(iVar1);
    uVar4 = *(undefined1 *)(lVar5 + 0x300);
    lVar5 = FUN_100345d90(local_a8 & 0xffffffff);
    local_76 = *(undefined1 *)(lVar5 + 0x300);
    local_7c = 0;
    local_6c = 0;
    local_74 = 0;
    local_40 = local_34;
    local_44 = DAT_1018589d8;
    local_78 = uVar3;
    local_77 = uVar4;
  }
  DAT_1018589d8 = local_44 + 1;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_98 = &PTR_FUN_101497058;
  uStack_60 = *(undefined4 *)(param_1 + 0x10);
  local_5c = *(undefined4 *)(param_1 + 0x14);
  local_64 = 0;
  FUN_1004966e0(&local_98,&DAT_101e47d30);
  return;
}




undefined4 FUN_100475f8c(long *param_1)

{
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  
  uStack_20 = *(undefined4 *)(*param_1 + 0x6c);
  local_1c = *(undefined8 *)(*param_1 + 0x70);
  local_24 = (undefined4)local_1c;
  local_30 = 0x461c3c0040000000;
  local_28 = 0x40000000;
  FUN_10054e07c(0,&uStack_20,&local_24,0,&local_30);
  return local_24;
}




void FUN_100475fe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a910;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xbf800000;
  param_1[5] = 0;
  param_1[6] = FUN_100475f8c;
  *(undefined4 *)(param_1 + 7) = 4;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  return;
}




undefined4 FUN_100476024(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0x70);
}




void FUN_100476030(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  int iStack_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulong local_60;
  float local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  if (DAT_101d23a38 != '\0') {
    lVar2 = FUN_1004743d4(*param_2);
    uVar3 = FUN_1003b1948(DAT_101d90978,*(undefined8 *)(param_1 + 0x10));
    local_50 = *(undefined4 *)(*param_2 + 0x6c);
    local_48 = *(undefined4 *)(*param_2 + 0x74);
    local_4c = FUN_100476260(param_1 + 0x30,param_2,0);
    local_58 = *(float *)(*param_2 + 0x84);
    local_60._0_4_ = (float)*(undefined8 *)(*param_2 + 0x7c);
    fVar8 = (float)local_60 * (float)local_60 + local_58 * local_58;
    if (1e-08 <= fVar8) {
      fVar8 = SQRT(fVar8);
      local_60 = (ulong)(uint)((float)local_60 / fVar8);
      local_58 = local_58 / fVar8;
    }
    else {
      local_60 = 0x3f800000;
      local_58 = 0.0;
    }
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_1010a1520();
      lVar5 = FUN_1010a0e0c(uVar4,0,uVar7,0);
      FUN_1003a4e5c(&local_b8,*(undefined8 *)**(undefined8 **)(lVar5 + 0x1d8));
      uVar6 = local_b8._0_4_;
    }
    else {
      uVar6 = *(undefined4 *)(lVar2 + 0x26c);
    }
    iVar1 = DAT_1018589d8;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    FUN_100101cc4(uVar3,uVar6,iVar1,*(undefined1 *)(lVar2 + 0x264),&local_50,&local_60,0xffffffff,1,
                  *(undefined4 *)(lVar2 + 0x260),0,0xffffffff);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar2 = FUN_1004743d4(*param_2);
      local_9c = *(undefined4 *)(lVar2 + 0x260);
      local_8c = *(undefined4 *)(param_1 + 0x20);
      local_84 = 0;
      if ((*(byte *)(param_1 + 0x40) >> 1 & 1) != 0) {
        local_84 = *(undefined4 *)(*param_2 + 0xf8);
      }
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_b8 = &PTR_FUN_101496b18;
      iStack_98 = iVar1;
      local_94 = DAT_1018589d8;
      local_88 = 1;
      local_78 = 0;
      local_80 = 0;
      local_70 = 0;
      local_68 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_90 = FUN_1003d4e0c(*(undefined8 *)(param_1 + 0x18));
      FUN_10049639c(&local_b8,&DAT_101e47d30);
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*param_2,iVar1);
    }
  }
  return;
}




undefined1  [16] FUN_100476260(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  switch(param_1[2]) {
  case 0:
  case 6:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    uVar3 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0001004762cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)param_1)();
    return auVar1;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_10047434c(*param_2);
                    /* WARNING: Could not recover jumptable at 0x000100476324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (*UNRECOVERED_JUMPTABLE)();
    return auVar1;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001004762e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)param_1)(param_2);
    return auVar1;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x000100476300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)param_1)(param_2,param_3);
    return auVar1;
  default:
    FUN_1004d22dc(0);
  }
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}




void FUN_100476328(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_10149a950;
  param_1[1] = 0;
  param_1[8] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}




void FUN_100476360(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100476368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}




void FUN_10047636c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int local_38 [2];
  
  if ((bool)*(char *)(param_1 + 0x68) == (*(char *)(param_3 + 0x264) == *(char *)(param_2 + 0xb8)))
  {
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar2 = *(long *)(param_3 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      uVar3 = FUN_1003ba8f4();
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if ((((*(long *)(param_1 + 0x58) == 0) ||
         (FUN_1003a4e5c(local_38), local_38[0] == *(int *)(param_3 + 0x270))) &&
        (uVar1 = *(uint *)(param_3 + 0x2f4), (*(uint *)(param_1 + 0x40) & (uVar1 ^ 0xffffffff)) == 0
        )) && (((*(uint *)(param_1 + 0x44) == 0xffffffff ||
                ((*(uint *)(param_1 + 0x44) & uVar1) != 0)) &&
               ((*(uint *)(param_1 + 0x48) & uVar1) == 0)))) {
      *(long *)(param_1 + 0x50) = param_3;
      FUN_100476464(param_1,param_2);
      return;
    }
  }
  return;
}




void FUN_100476464(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uStack_30 = 0;
  local_28 = 0;
  local_38 = param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&local_38);
  lVar2 = 0;
  if (param_1[5] != 0) {
    lVar2 = param_1[5] + -0x20;
  }
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x28) != 0)) {
    lVar2 = FUN_10033d948();
    FUN_10033f168(param_1 + 2,lVar2);
    puVar3 = (undefined8 *)(lVar2 + 0x20);
    *puVar3 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar3;
    }
    else {
      *(undefined8 **)param_1[6] = puVar3;
    }
    param_1[6] = (long)puVar3;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar2 + 8) != 0) {
    lVar1 = *(long *)(lVar2 + 8) + -8;
  }
  *(long *)(lVar2 + 0x28) = lVar1;
  FUN_10033f1ec(lVar2,&local_38);
  if (*(long *)(lVar2 + 0x28) == 0) {
    FUN_10049fd38(param_1,lVar2);
  }
  return;
}




void FUN_100476534(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x50);
  return;
}




void FUN_100476540(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_10149a9b0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  return;
}




void FUN_10047656c(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_1004745f4(param_2);
  if (*(char *)(param_1 + 0x4c) == '\0' && lVar1 != 0) {
    fVar2 = *(float *)(*(long *)(lVar1 + 0x38) + 100);
    fVar2 = ((*(float *)(lVar1 + 0x2e8) + fVar2) * *(float *)(*(long *)(lVar1 + 0x38) + 0x68)) /
            fVar2;
    *(float *)(param_1 + 0x48) = fVar2;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x48);
  }
  fVar2 = fVar2 + *(float *)(param_2 + 0x88);
  if (fVar2 <= 0.2) {
    fVar2 = 0.2;
  }
  fVar3 = *(float *)(param_2 + 0x6c) - *(float *)(param_2 + 0xec);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x70) - (float)*(undefined8 *)(param_2 + 0xf0);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20);
  if (fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5 < fVar2 * fVar2) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if ((*(byte *)(lVar1 + 0x2f9) & 1) != 0) {
      lVar1 = 0;
    }
    *(long *)(param_1 + 0x40) = lVar1;
    FUN_100476464(param_1,param_2);
    return;
  }
  return;
}




void FUN_100476640(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_1004745f4(param_2);
  if (lVar1 != param_3) {
    return;
  }
  *(long *)(param_1 + 0x40) = param_3;
  FUN_100476464(param_1,param_2);
  return;
}




void FUN_100476698(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x40);
  return;
}




void thunk_FUN_100476464(void)

{
  FUN_100476464();
  return;
}




void thunk_FUN_100476464(void)

{
  FUN_100476464();
  return;
}




uint FUN_1004766ac(undefined8 param_1,long param_2)

{
  return *(uint *)(param_2 + 0x2f4) & 1;
}




long FUN_1004766b8(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  float fVar2;
  ulong local_30;
  float local_28;
  
  local_30._0_4_ = *(float *)(param_3 + 0x240);
  local_28 = *(float *)(param_3 + 0x248);
  fVar2 = (float)local_30 * (float)local_30 +
          *(float *)(param_3 + 0x244) * *(float *)(param_3 + 0x244) + local_28 * local_28;
  if (1e-08 <= fVar2) {
    fVar2 = SQRT(fVar2);
    local_30._0_4_ = (float)local_30 / fVar2;
    local_28 = local_28 / fVar2;
  }
  else {
    local_30._0_4_ = 1.0;
    local_28 = 0.0;
  }
  fVar2 = (float)local_30 * (float)local_30 + local_28 * local_28;
  if (1e-08 <= fVar2) {
    fVar2 = SQRT(fVar2);
    local_30 = (ulong)(uint)((float)local_30 / fVar2);
    local_28 = local_28 / fVar2;
  }
  else {
    local_30 = 0x3f800000;
    local_28 = 0.0;
  }
  FUN_10047421c(param_2,&local_30);
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(long *)(param_1 + 8) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return param_1;
}




undefined8 FUN_10047679c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong local_a0;
  float local_98;
  float local_70;
  float fStack_6c;
  float local_68;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        fVar10 = *(float *)(param_2 + 0x6c);
        fVar12 = *(float *)(param_2 + 0x70);
        fVar11 = *(float *)(param_2 + 0x74);
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == -0x7ee3623b || iVar1 == 0) {
          lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
          fVar7 = *(float *)(lVar3 + 0x250);
          fVar8 = *(float *)(lVar3 + 600);
          fVar9 = *(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x254);
        }
        else {
          plVar2 = *(long **)(param_1 + 8);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_1003ab468(uVar4,(int *)(param_1 + 0x18),&local_a0);
          fVar7 = local_70;
          fVar8 = local_68;
          fVar9 = fStack_6c;
        }
        fVar5 = fVar10 - fVar7;
        fVar12 = fVar12 - fVar9;
        fVar6 = fVar11 - fVar8;
        if (fVar6 * fVar6 + fVar12 * fVar12 + fVar5 * fVar5 <= 0.010000001) {
          lVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
          fVar11 = *(float *)(lVar3 + 0x240);
          local_98 = *(float *)(lVar3 + 0x248);
          fVar12 = fVar11 * fVar11 + *(float *)(lVar3 + 0x244) * *(float *)(lVar3 + 0x244) +
                   local_98 * local_98;
          if (1e-08 <= fVar12) {
            fVar12 = SQRT(fVar12);
            fVar11 = fVar11 / fVar12;
            local_98 = local_98 / fVar12;
          }
          else {
            fVar11 = 1.0;
            local_98 = 0.0;
          }
          local_a0 = (ulong)(uint)fVar11;
        }
        else {
          fVar10 = fVar7 - fVar10;
          fVar11 = fVar8 - fVar11;
          local_98 = fVar11 * fVar11 + fVar10 * fVar10;
          if (1e-08 <= local_98) {
            local_98 = SQRT(local_98);
            local_a0 = (ulong)(uint)(fVar10 / local_98);
            local_98 = fVar11 / local_98;
          }
          else {
            local_a0 = 0x3f800000;
            local_98 = 0.0;
          }
        }
        FUN_10047421c(param_2,&local_a0);
        *(float *)(param_2 + 0x6c) = fVar7;
        *(float *)(param_2 + 0x70) = fVar9;
        *(float *)(param_2 + 0x74) = fVar8;
        return 0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
    }
  }
  return 1;
}




long FUN_1004769e4(long param_1,long param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  uint local_78 [2];
  undefined1 auStack_70 [56];
  float local_38;
  
  uVar3 = FUN_10047445c(param_2);
  if (param_3 == (char *)0x0) {
    local_78[0] = 0;
  }
  else {
    local_78[0] = 0x811c9dc5;
    cVar2 = *param_3;
    while (cVar2 != '\0') {
      param_3 = param_3 + 1;
      local_78[0] = (local_78[0] ^ (int)cVar2) * 0x1000193;
      cVar2 = *param_3;
    }
  }
  FUN_1003ab468(uVar3,local_78,auStack_70);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 1) {
    fVar4 = *(float *)(param_2 + 0xf4);
    *(ulong *)(param_1 + 0x20) =
         CONCAT44(SUB84(auStack_70._48_8_,4) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0xec) >> 0x20),
                  (float)auStack_70._48_8_ - (float)*(undefined8 *)(param_2 + 0xec));
    *(float *)(param_1 + 0x28) = local_38 - fVar4;
  }
  else if (iVar1 == 0) {
    *(ulong *)(param_1 + 0x14) =
         CONCAT44(SUB84(auStack_70._48_8_,4) - (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                  (float)auStack_70._48_8_ - (float)*(undefined8 *)(param_1 + 8));
    *(float *)(param_1 + 0x1c) = local_38 - *(float *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x2c) = iVar1 + 1;
  return param_1;
}




long FUN_100476ac4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x2c) == 1) {
    lVar1 = param_2 + 0xec;
    param_2 = param_1 + 8;
    lVar2 = param_1 + 0x20;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_100476b10;
    lVar1 = param_1 + 8;
    param_2 = param_2 + 0xec;
    lVar2 = param_1 + 0x14;
  }
  FUN_100476b2c(param_1,lVar1,param_2,lVar2);
LAB_100476b10:
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return param_1;
}




void FUN_100476b2c(float param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *param_7 - *param_6;
  fVar3 = param_7[2] - param_6[2];
  fVar5 = fVar2 * fVar2 + fVar3 * fVar3;
  fVar4 = SQRT(fVar5);
  param_1 = fVar4 * param_1;
  fVar1 = (float)_tanf(param_2);
  if (1e-08 <= fVar5) {
    fVar2 = fVar2 / fVar4;
    fVar3 = fVar3 / fVar4;
  }
  else {
    fVar2 = 1.0;
    fVar3 = 0.0;
  }
  _atan2f(fVar3);
  fVar3 = (float)___sincosf_stret();
  *param_8 = fVar2 * param_1 - fVar3 * param_1 * fVar1;
  param_8[2] = fVar2 * param_1 * fVar1 + param_1 * fVar3;
  if (param_4 <= 0.0) {
    param_4 = (float)_tanf(param_3);
    param_4 = param_4 * param_1;
  }
  param_8[1] = param_4;
  return;
}




long FUN_100476c0c(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_4 + 0x2c) == 1) {
    lVar1 = param_5 + 0xec;
    param_5 = param_4 + 8;
    lVar2 = param_4 + 0x20;
  }
  else {
    if (*(int *)(param_4 + 0x2c) != 0) goto LAB_100476c5c;
    lVar1 = param_4 + 8;
    param_5 = param_5 + 0xec;
    lVar2 = param_4 + 0x14;
  }
  FUN_100476b2c(param_1,param_2,0xbf800000,param_3,param_4,lVar1,param_5,lVar2);
LAB_100476c5c:
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 1;
  return param_4;
}




long FUN_100476c78(float param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  undefined8 local_30;
  float local_28;
  
  fVar4 = (float)*(undefined8 *)(param_2 + 8);
  fVar6 = (float)*(undefined8 *)(param_2 + 0x14) + fVar4;
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20) + fVar5;
  fVar3 = *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x10);
  fVar8 = *(float *)(param_3 + 0xec);
  if (*(int *)(param_2 + 0x2c) == 2) {
    fVar11 = *(float *)(param_3 + 0xf0);
    fVar12 = *(float *)(param_3 + 0xf4);
    fVar1 = *(float *)(param_2 + 0x28) + fVar12;
    fVar9 = (float)*(undefined8 *)(param_2 + 0x20) + fVar8;
    fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) + fVar11;
  }
  else {
    fVar11 = *(float *)(param_3 + 0xf0);
    fVar12 = *(float *)(param_3 + 0xf4);
    fVar1 = fVar3;
    fVar9 = fVar6;
    fVar10 = fVar7;
  }
  param_1 = *(float *)(param_2 + 0x34) + param_1;
  *(float *)(param_2 + 0x34) = param_1;
  fVar13 = 1.0;
  if ((*(float *)(param_2 + 0x30) != 0.0) &&
     (fVar13 = (float)NEON_fminnm(param_1 / *(float *)(param_2 + 0x30),0x3f800000), fVar13 <= 0.0))
  {
    fVar13 = 0.0;
  }
  fVar2 = 1.0 - fVar13;
  fVar15 = fVar2 * fVar2 * fVar2;
  fVar16 = fVar13 * fVar13 * fVar13;
  fVar14 = fVar13 * 3.0 * fVar2 * fVar2;
  fVar13 = fVar2 * 3.0 * fVar13 * fVar13;
  fVar6 = fVar8 * fVar16 + fVar4 * fVar15 + fVar9 * fVar13 + fVar6 * fVar14;
  fVar7 = fVar11 * fVar16 + fVar5 * fVar15 + fVar10 * fVar13 + fVar7 * fVar14;
  fVar3 = fVar16 * fVar12 + *(float *)(param_2 + 0x10) * fVar15 + fVar1 * fVar13 + fVar3 * fVar14;
  fVar4 = fVar6 - (float)*(undefined8 *)(param_3 + 0x6c);
  fVar5 = fVar7 - (float)((ulong)*(undefined8 *)(param_3 + 0x6c) >> 0x20);
  local_28 = fVar3 - *(float *)(param_3 + 0x74);
  fVar8 = fVar4 * fVar4 + fVar5 * fVar5 + local_28 * local_28;
  if (1e-08 <= fVar8) {
    fVar8 = SQRT(fVar8);
    local_30 = CONCAT44(fVar5 / fVar8,fVar4 / fVar8);
    local_28 = local_28 / fVar8;
  }
  else {
    local_30 = 0x3f800000;
    local_28 = 0.0;
  }
  *(ulong *)(param_3 + 0x6c) = CONCAT44(fVar7,fVar6);
  *(float *)(param_3 + 0x74) = fVar3;
  FUN_10047421c(param_3,&local_30);
  return (ulong)(*(float *)(param_2 + 0x30) <= *(float *)(param_2 + 0x34)) << 1;
}




long FUN_100476df8(undefined4 param_1,float param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_70 [56];
  float local_38;
  
  fVar3 = *(float *)(param_4 + 0x6c);
  *(float *)(param_3 + 8) = fVar3;
  fVar4 = *(float *)(param_4 + 0x70);
  *(float *)(param_3 + 0xc) = fVar4;
  fVar5 = *(float *)(param_4 + 0x74);
  *(float *)(param_3 + 0x10) = fVar5;
  fVar6 = *(float *)(param_4 + 0x84);
  *(ulong *)(param_3 + 0x14) =
       CONCAT44(fVar4 + (float)((ulong)*(undefined8 *)(param_4 + 0x7c) >> 0x20) * param_2,
                fVar3 + (float)*(undefined8 *)(param_4 + 0x7c) * param_2);
  *(float *)(param_3 + 0x1c) = fVar5 + param_2 * fVar6;
  lVar2 = FUN_10047445c(param_4);
  if (lVar2 != 0) {
    if ((DAT_101e941b8 & 1) == 0) {
      iVar1 = ___cxa_guard_acquire(&DAT_101e941b8);
      if (iVar1 != 0) {
        DAT_101e941b0 = 0x3e3270a0;
        ___cxa_guard_release(&DAT_101e941b8);
      }
    }
    FUN_1003ab468(lVar2,&DAT_101e941b0,auStack_70);
    *(ulong *)(param_3 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) - SUB84(auStack_70._48_8_,4),
                  (float)*(undefined8 *)(param_3 + 8) - (float)auStack_70._48_8_);
    *(float *)(param_3 + 0x28) = *(float *)(param_3 + 0x10) - local_38;
  }
  *(undefined4 *)(param_3 + 0x2c) = param_1;
  return param_3;
}




undefined8 FUN_100476ef4(float param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong local_70;
  float local_68;
  
  fVar11 = *(float *)(param_3 + 0x6c);
  uVar10 = *(undefined4 *)(param_3 + 0x70);
  fVar12 = *(float *)(param_3 + 0x74);
  local_70 = *(ulong *)(param_3 + 0x7c);
  local_68 = *(float *)(param_3 + 0x84);
  fVar5 = (float)NEON_fminnm(*(float *)(param_2 + 0x30) + param_1,*(float *)(param_2 + 0x2c));
  *(float *)(param_2 + 0x30) = fVar5;
  fVar13 = *(float *)(param_2 + 0x2c) * 0.5;
  if (*(char *)(param_2 + 0x38) != '\0') {
    bVar2 = false;
    bVar3 = false;
    if (fVar13 < fVar5) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5 - fVar13) && !NAN(param_1)) {
        bVar2 = fVar5 - fVar13 < param_1;
        bVar3 = false;
      }
    }
    if ((bVar2 != bVar3) && (*(long *)(param_3 + 0xc0) != 0)) {
      FUN_1010a01dc();
      *(undefined8 *)(param_3 + 0xc0) = 0;
      fVar5 = *(float *)(param_2 + 0x30);
    }
  }
  uVar1 = DAT_101dc0b88;
  if (fVar5 <= fVar13) {
    *(undefined8 *)(param_3 + 0xd8) = 0;
    *(undefined4 *)(param_3 + 0xe0) = uVar1;
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_3 + 0xec) = *(undefined8 *)(param_2 + 0x14);
    *(undefined4 *)(param_3 + 0xf4) = uVar1;
    fVar14 = *(float *)(param_2 + 8);
    fVar6 = *(float *)(param_2 + 0x14);
    fVar5 = (float)_sinf((*(float *)(param_2 + 0x30) * 0.5 * 3.1415927) / fVar13);
    fVar14 = fVar14 + (fVar6 - fVar14) * fVar5;
    fVar5 = *(float *)(param_2 + 0x10) +
            (*(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x10)) * fVar5;
  }
  else {
    lVar4 = FUN_100477154(param_2,param_3);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x30);
      *(long *)(param_3 + 0xd8) = lVar4 + 0x28;
      *(undefined4 *)(param_3 + 0xe0) = uVar1;
      *(undefined4 *)(param_3 + 0xe8) = 1;
      FUN_10047467c(param_3);
    }
    fVar14 = *(float *)(param_3 + 0xec);
    fVar15 = *(float *)(param_3 + 0xf0);
    fVar5 = *(float *)(param_3 + 0xf4);
    fVar6 = *(float *)(param_2 + 0x14);
    fVar13 = (float)_cosf(((*(float *)(param_2 + 0x30) - fVar13) * 1.5707964) / fVar13);
    fVar7 = fVar13 * (fVar14 - fVar6);
    fVar13 = fVar13 * (fVar5 - *(float *)(param_2 + 0x1c));
    fVar8 = fVar13 * fVar13 + fVar7 * fVar7;
    fVar9 = *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20) +
            *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28);
    fVar6 = SQRT(fVar9);
    if ((fVar8 <= fVar9) || (fVar8 < 2.0)) {
      fVar12 = *(float *)(param_2 + 0x24);
      *(float *)(param_3 + 0x6c) = fVar14 - fVar6 * *(float *)(param_3 + 0x7c);
      *(float *)(param_3 + 0x70) = (fVar15 - fVar6 * *(float *)(param_3 + 0x80)) + fVar12;
      *(float *)(param_3 + 0x74) = fVar5 - fVar6 * *(float *)(param_3 + 0x84);
      return 2;
    }
    fVar5 = fVar5 - fVar13;
    fVar14 = fVar14 - fVar7;
  }
  fVar11 = fVar14 - fVar11;
  fVar12 = fVar5 - fVar12;
  local_68 = fVar11 * fVar11 + fVar12 * fVar12;
  if (1e-08 <= local_68) {
    local_68 = SQRT(local_68);
    local_70 = (ulong)(uint)(fVar11 / local_68);
    local_68 = fVar12 / local_68;
  }
  else {
    local_70 = 0x3f800000;
    local_68 = 0.0;
  }
  *(float *)(param_3 + 0x6c) = fVar14;
  *(undefined4 *)(param_3 + 0x70) = uVar10;
  *(float *)(param_3 + 0x74) = fVar5;
  FUN_10047421c(param_3,&local_70);
  return 0;
}




undefined8 FUN_100477154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x34) == 1) {
    uVar1 = FUN_10047434c(param_2);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar1 = FUN_10047445c(param_2);
    return uVar1;
  }
  return 0;
}




long FUN_10047717c(float param_1,float param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_70 [56];
  float local_38;
  
  *(float *)(param_3 + 0x1c) = param_1;
  *(float *)(param_3 + 0x14) = param_2 / param_1;
  uVar3 = *(undefined8 *)(param_4 + 0x6c);
  fVar4 = *(float *)(param_4 + 0x74);
  lVar2 = FUN_10047445c(param_4);
  if (lVar2 != 0) {
    if ((DAT_101e941c8 & 1) == 0) {
      iVar1 = ___cxa_guard_acquire(&DAT_101e941c8);
      if (iVar1 != 0) {
        DAT_101e941c0 = 0x3e3270a0;
        ___cxa_guard_release(&DAT_101e941c8);
      }
    }
    FUN_1003ab468(lVar2,&DAT_101e941c0,auStack_70);
    *(ulong *)(param_3 + 8) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) - SUB84(auStack_70._48_8_,4),
                  (float)uVar3 - (float)auStack_70._48_8_);
    *(float *)(param_3 + 0x10) = fVar4 - local_38;
  }
  return param_3;
}




float FUN_100477248(long param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0x28) & 3;
  if (bVar1 == 2) {
    fVar2 = 3.1415927;
    fVar3 = *(float *)(param_1 + 0x1c) * 0.25 * *(float *)(param_1 + 0x18);
  }
  else {
    if (bVar1 == 1) {
      return (*(float *)(param_1 + 0x18) * 2.0 + -0.33333334) * *(float *)(param_1 + 0x1c);
    }
    if ((*(byte *)(param_1 + 0x28) & 3) != 0) {
      return 0.0;
    }
    fVar3 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x1c) * 0.5;
  }
  return fVar2 * fVar3;
}




undefined8 FUN_1004772b8(ulong param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong local_50;
  float local_48;
  
  *(undefined1 *)(param_3 + 0xd3) = 1;
  uVar6 = *(undefined8 *)(param_3 + 0x6c);
  fVar10 = *(float *)(param_3 + 0x74);
  fVar9 = (float)uVar6;
  fVar5 = *(float *)(param_3 + 0xec) - fVar9;
  local_48 = *(float *)(param_3 + 0xf4) - fVar10;
  fVar7 = fVar5 * fVar5 + local_48 * local_48;
  if (1e-08 <= fVar7) {
    fVar7 = SQRT(fVar7);
    local_50 = (ulong)(uint)(fVar5 / fVar7);
    local_48 = local_48 / fVar7;
  }
  else {
    local_50 = 0x3f800000;
    local_48 = 0.0;
  }
  fVar5 = *(float *)(param_2 + 0x14);
  if ((0.0 < fVar5) && (fVar5 < (float)param_1)) {
    FUN_100477598(fVar5,param_2,param_3);
    *(undefined4 *)(param_2 + 0x14) = 0;
    lVar3 = FUN_100477688(param_2,param_3);
    if (lVar3 == 0) {
      return 2;
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x30);
    *(long *)(param_3 + 0xd8) = lVar3 + 0x28;
    *(undefined4 *)(param_3 + 0xe0) = uVar1;
    *(undefined4 *)(param_3 + 0xe8) = 1;
    FUN_10047467c(param_3);
    fVar7 = *(float *)(param_3 + 0xec) - fVar9;
    local_48 = *(float *)(param_3 + 0xf4) - fVar10;
    fVar8 = fVar7 * fVar7 + local_48 * local_48;
    if (1e-08 <= fVar8) {
      fVar8 = SQRT(fVar8);
      local_50 = (ulong)(uint)(fVar7 / fVar8);
      local_48 = local_48 / fVar8;
    }
    else {
      local_50 = 0x3f800000;
      local_48 = 0.0;
    }
    if (0.0 < *(float *)(param_2 + 0x20)) {
      *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x20);
    }
    bVar2 = *(byte *)(param_2 + 0x28);
    if ((bVar2 >> 4 & 1) == 0) {
      FUN_10047421c(param_3,&local_50);
      bVar2 = *(byte *)(param_2 + 0x28);
    }
    uVar4 = (uint)bVar2;
    if (((bVar2 >> 3 & 1) != 0) && (*(long *)(param_3 + 0xc0) != 0)) {
      FUN_1010a01dc();
      *(undefined8 *)(param_3 + 0xc0) = 0;
      uVar4 = (uint)*(byte *)(param_2 + 0x28);
    }
    param_1 = (ulong)(uint)((float)param_1 - fVar5);
    if ((uVar4 >> 5 & 1) != 0) {
      FUN_100474868(param_3);
    }
  }
  if (*(float *)(param_2 + 0x14) <= 0.0) {
    uVar11 = *(ulong *)(param_3 + 0x7c);
    fVar5 = *(float *)(param_3 + 0x84);
    fVar7 = (float)(uVar11 >> 0x20);
    if (((float)local_50 * (float)uVar11 + (float)(local_50 >> 0x20) * fVar7 + fVar5 * local_48 <
         0.0) && (0.0 < *(float *)(param_2 + 0x18))) {
      *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x18);
      local_50 = uVar11;
      local_48 = fVar5;
      fVar8 = (float)FUN_100477248(param_2);
      uVar1 = DAT_101dc0b88;
      *(undefined8 *)(param_3 + 0xd8) = 0;
      *(undefined4 *)(param_3 + 0xe0) = uVar1;
      *(ulong *)(param_3 + 0xec) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar7 * fVar8,fVar9 + (float)uVar11 * fVar8);
      *(float *)(param_3 + 0xf4) = fVar10 + fVar5 * fVar8;
    }
  }
  FUN_100477598(param_1,param_2,param_3);
  if (0.0 < *(float *)(param_2 + 0x14)) {
    return 0;
  }
  lVar3 = FUN_100477688(param_2,param_3);
  if (lVar3 != 0) {
    uVar6 = FUN_1004776a0(param_2,param_3);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    fVar5 = *(float *)(param_3 + 0x6c) - *(float *)(param_3 + 0xec);
    fVar9 = *(float *)(param_3 + 0x74) - *(float *)(param_3 + 0xf4);
    fVar5 = fVar5 * fVar5 + fVar9 * fVar9;
    fVar9 = *(float *)(param_2 + 8) * *(float *)(param_2 + 8) +
            *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10);
    if ((fVar9 < fVar5) && (2.0 <= fVar5)) {
      return 0;
    }
    fVar9 = SQRT(fVar9);
    fVar5 = *(float *)(param_2 + 0xc);
    *(float *)(param_3 + 0x6c) = *(float *)(param_3 + 0xec) - fVar9 * *(float *)(param_3 + 0x7c);
    *(float *)(param_3 + 0x70) =
         (*(float *)(param_3 + 0xf0) - fVar9 * *(float *)(param_3 + 0x80)) + fVar5;
    *(float *)(param_3 + 0x74) = *(float *)(param_3 + 0xf4) - fVar9 * *(float *)(param_3 + 0x84);
  }
  return 2;
}




void FUN_100477598(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong local_40;
  float local_38;
  
  uVar2 = *(undefined8 *)(param_3 + 0x6c);
  fVar6 = *(float *)(param_3 + 0x74);
  iVar1 = FUN_1004776a0();
  fVar3 = (float)uVar2;
  if (iVar1 != 0) {
    fVar4 = *(float *)(param_3 + 0xec) - fVar3;
    local_38 = *(float *)(param_3 + 0xf4) - fVar6;
    fVar5 = SQRT(fVar4 * fVar4 + local_38 * local_38);
    if (1.1920929e-07 <= fVar5) {
      local_40 = (ulong)(uint)(fVar4 / fVar5);
      local_38 = local_38 / fVar5;
      goto LAB_100477628;
    }
  }
  local_40 = *(ulong *)(param_3 + 0x7c);
  local_38 = *(float *)(param_3 + 0x84);
LAB_100477628:
  fVar4 = (float)FUN_10047772c(*(undefined4 *)(param_2 + 0x14),param_1,param_2);
  *(ulong *)(param_3 + 0x6c) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) + (float)(local_40 >> 0x20) * fVar4,
                fVar3 + (float)local_40 * fVar4);
  *(float *)(param_3 + 0x74) = fVar6 + fVar4 * local_38;
  if ((*(byte *)(param_2 + 0x28) >> 4 & 1) == 0) {
    FUN_10047421c(param_3,&local_40);
  }
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) - (float)param_1;
  return;
}




void FUN_100477688(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x28) >> 2 & 1) == 0) {
    FUN_1004744e4(param_2);
    return;
  }
  FUN_1004743d4(param_2);
  return;
}




undefined8 FUN_1004776a0(long param_1)

{
  long lVar1;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (lVar1 = FUN_100477688(), lVar1 != 0)) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184daa8) {
        lVar1 = *(long *)(lVar1 + 0x28);
        if (lVar1 == 0) {
          return 1;
        }
        while ((*(int *)(lVar1 + 0x314) != *(int *)(param_1 + 0x24) ||
               (*(int *)(lVar1 + 0x310) != 0))) {
          lVar1 = *(long *)(lVar1 + 0x350);
          if (lVar1 == 0) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 1;
}




float FUN_10047772c(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if ((*(byte *)(param_3 + 0x28) & 3) == 0) {
    fVar1 = (float)FUN_100477798(param_1);
    fVar2 = (float)FUN_100477798((float)param_1 - param_2,param_3);
    fVar1 = param_2 * 0.5 * (fVar2 + fVar1);
  }
  return fVar1;
}




undefined1  [16] FUN_100477798(float param_1,long param_2)

{
  byte bVar1;
  float fVar2;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float fVar6;
  
  fVar6 = *(float *)(param_2 + 0x18);
  if (*(float *)(param_2 + 0x14) <= 0.0) {
    fVar6 = -fVar6;
    if (fVar6 < param_1) {
      bVar1 = *(byte *)(param_2 + 0x28) & 3;
      if (bVar1 == 2) {
        fVar2 = *(float *)(param_2 + 0x1c);
        _cosf((param_1 * 0.5 * 3.1415927) / fVar6);
        fVar2 = fVar2 - fVar2 * extraout_s0_00;
        uVar4 = extraout_var_00;
        uVar5 = extraout_var_02;
        goto LAB_100477828;
      }
      if (bVar1 == 1) {
        fVar2 = (param_1 / fVar6) * (param_1 / fVar6) * *(float *)(param_2 + 0x1c);
        uVar4 = 0;
        uVar5 = 0;
        goto LAB_100477828;
      }
      if ((*(byte *)(param_2 + 0x28) & 3) == 0) {
        fVar2 = (*(float *)(param_2 + 0x1c) * param_1) / fVar6;
        uVar4 = 0;
        uVar5 = 0;
        goto LAB_100477828;
      }
    }
  }
  else if (param_1 < fVar6) {
    bVar1 = *(byte *)(param_2 + 0x28) & 3;
    if (bVar1 == 2) {
      fVar2 = *(float *)(param_2 + 0x1c);
      _sinf(((param_1 - fVar6) * 0.5 * 3.1415927) / fVar6);
      fVar2 = fVar2 + fVar2 * extraout_s0;
      uVar4 = extraout_var;
      uVar5 = extraout_var_01;
      goto LAB_100477828;
    }
    if (bVar1 == 1) {
      fVar6 = (fVar6 - param_1) / fVar6;
      uVar4 = 0;
      uVar5 = 0;
      fVar2 = *(float *)(param_2 + 0x1c) + *(float *)(param_2 + 0x1c) * (fVar6 + -2.0) * fVar6;
      goto LAB_100477828;
    }
    if ((*(byte *)(param_2 + 0x28) & 3) == 0) {
      fVar2 = ((param_1 - fVar6) * *(float *)(param_2 + 0x1c)) / fVar6 + *(float *)(param_2 + 0x1c);
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_100477828;
    }
  }
  fVar2 = *(float *)(param_2 + 0x1c);
  uVar4 = 0;
  uVar5 = 0;
LAB_100477828:
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = fVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}




void FUN_1004778c4(undefined4 param_1,float param_2,long param_3,long param_4)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong local_40;
  float local_38;
  
  *(undefined4 *)(param_3 + 8) = param_1;
  if (*(char *)(param_3 + 0x14) == '\0') {
    pfVar2 = (float *)(param_4 + 0x6c);
    pfVar3 = (float *)(param_4 + 0x74);
  }
  else {
    lVar1 = FUN_1004744e4(param_4);
    pfVar2 = (float *)(lVar1 + 0x250);
    pfVar3 = (float *)(lVar1 + 600);
  }
  fVar4 = *(float *)(param_4 + 0xec) - *pfVar2;
  fVar5 = *(float *)(param_4 + 0xf4) - *pfVar3;
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar4 = fVar4 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  else {
    fVar4 = 1.0;
    fVar5 = 0.0;
  }
  fVar4 = (*pfVar2 + param_2 * fVar4) - *(float *)(param_4 + 0x6c);
  local_38 = (*pfVar3 + param_2 * fVar5) - *(float *)(param_4 + 0x74);
  fVar5 = SQRT(fVar4 * fVar4 + local_38 * local_38);
  *(float *)(param_3 + 0xc) = fVar5;
  if (fVar5 <= 0.0) {
    local_40 = 0x3f800000;
    local_38 = 0.0;
  }
  else {
    local_40 = (ulong)(uint)(fVar4 / fVar5);
    local_38 = local_38 / fVar5;
  }
  FUN_10047421c(param_4,&local_40);
  return;
}




void FUN_1004779e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1004743d4(param_3);
  lVar1 = *(long *)(*(long *)(lVar1 + 0x58) + (param_4 & 0xffffffff) * 8 + 0x50);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10045f34c(lVar1 + 0x220);
  }
  FUN_1004778c4(param_1,uVar2,param_2,param_3);
  return;
}




bool FUN_100477a50(float param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x10);
  fVar2 = (float)NEON_fminnm(*(float *)(param_2 + 8) * param_1,fVar3);
  fVar4 = *(float *)(param_3 + 0x6c);
  fVar5 = *(float *)(param_3 + 0x70);
  fVar6 = *(float *)(param_3 + 0x74);
  *(float *)(param_3 + 0x6c) = fVar4 + *(float *)(param_3 + 0x7c) * fVar2;
  *(float *)(param_3 + 0x70) = fVar5 + *(float *)(param_3 + 0x80) * fVar2;
  *(float *)(param_3 + 0x74) = fVar6 + *(float *)(param_3 + 0x84) * fVar2;
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_3 + 0xd8) = 0;
  *(undefined4 *)(param_3 + 0xe0) = uVar1;
  *(float *)(param_3 + 0xec) = fVar4 + *(float *)(param_3 + 0x7c) * fVar3;
  *(float *)(param_3 + 0xf0) = fVar5 + *(float *)(param_3 + 0x80) * fVar3;
  *(float *)(param_3 + 0xf4) = fVar6 + *(float *)(param_3 + 0x84) * fVar3;
  fVar2 = *(float *)(param_2 + 0x10) + fVar2;
  *(float *)(param_2 + 0x10) = fVar2;
  return ABS(fVar2 - *(float *)(param_2 + 0xc)) < 1.1920929e-07;
}




undefined8 FUN_100477ae0(float param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
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
  float fVar17;
  
  fVar5 = *(float *)(param_3 + 0xec);
  fVar10 = *(float *)(param_3 + 0xf0);
  fVar6 = *(float *)(param_3 + 0xf4);
  fVar11 = *(float *)(param_3 + 0x6c);
  fVar7 = *(float *)(param_3 + 0x70);
  fVar8 = *(float *)(param_3 + 0x74);
  lVar3 = FUN_1004744e4(param_3);
  if (*(char *)(param_2 + 0x20) != '\0' && lVar3 != 0) {
    fVar9 = *(float *)(lVar3 + 0x250);
    fVar12 = *(float *)(lVar3 + 600);
    fVar14 = *(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x254);
    fVar13 = fVar5 - fVar9;
    fVar16 = fVar10 - fVar14;
    fVar14 = fVar7 - fVar14;
    fVar15 = fVar6 - fVar12;
    fVar17 = fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16;
    fVar16 = SQRT(fVar17);
    fVar8 = SQRT((fVar11 - fVar9) * (fVar11 - fVar9) + (fVar8 - fVar12) * (fVar8 - fVar12) +
                 fVar14 * fVar14);
    if (fVar16 < fVar8) goto LAB_100477ca8;
    if (1e-06 <= fVar17) {
      fVar13 = fVar13 / fVar16;
      fVar15 = fVar15 / fVar16;
    }
    else {
      fVar13 = 1.0;
      fVar15 = 0.0;
    }
    fVar11 = fVar9 + fVar8 * fVar13;
    fVar8 = fVar12 + fVar8 * fVar15;
  }
  fVar9 = fVar5 - fVar11;
  fVar12 = fVar10 - fVar7;
  fVar13 = fVar6 - fVar8;
  if (*(float *)(param_2 + 8) <= 0.0) {
    fVar14 = 0.0;
    if (0.0 < *(float *)(param_2 + 0xc)) {
      fVar16 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 0x10);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar14 = SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar13 * fVar13);
      if (1.1920929e-07 <= ABS(fVar16)) {
        fVar14 = (fVar14 * param_1) / fVar16;
      }
      else {
        fVar14 = fVar14 + 0.1;
      }
    }
  }
  else {
    fVar14 = *(float *)(param_2 + 8) * param_1;
  }
  *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) + param_1;
  fVar16 = fVar12 * fVar12 + fVar9 * fVar9 + fVar13 * fVar13;
  bVar1 = true;
  bVar2 = false;
  if (0.001 <= fVar16) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar16) && !NAN(fVar14 * fVar14)) {
      bVar1 = fVar16 < fVar14 * fVar14;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    if (1e-06 <= fVar16) {
      fVar5 = 1.0 / SQRT(fVar16);
      fVar9 = fVar9 * fVar5;
      fVar12 = fVar12 * fVar5;
      fVar13 = fVar13 * fVar5;
    }
    else {
      fVar9 = 1.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
    }
    pfVar4 = (float *)(param_2 + 0x14);
    *pfVar4 = fVar9;
    *(float *)(param_2 + 0x18) = fVar12;
    *(float *)(param_2 + 0x1c) = fVar13;
    *(float *)(param_3 + 0x6c) = fVar11 + fVar14 * fVar9;
    *(float *)(param_3 + 0x70) = fVar7 + fVar14 * fVar12;
    *(float *)(param_3 + 0x74) = fVar8 + fVar14 * fVar13;
    if (1.1920929e-07 <=
        *pfVar4 * *pfVar4 + *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x18) +
        *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c)) {
      FUN_10047421c(param_3,pfVar4);
    }
    return 0;
  }
LAB_100477ca8:
  *(float *)(param_3 + 0x6c) = fVar5;
  *(float *)(param_3 + 0x70) = fVar10;
  *(float *)(param_3 + 0x74) = fVar6;
  return 2;
}




void FUN_100477d60(undefined8 param_1,undefined8 param_2)

{
  FUN_1004853d0(param_1,param_2,0);
  return;
}




void FUN_100477d68(undefined8 param_1,undefined8 param_2)

{
  FUN_1004853d0(param_1,param_2,2);
  return;
}




void FUN_100477d70(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_60;
  undefined4 local_58;
  
  lVar1 = FUN_1004743d4();
  *param_2 = "Effect_Adagio_Spell_Projectile";
  param_2[4] = "Effect_AdagioFortunesSmile_impact";
  param_2[0xc] = "Sound_Adagio_Ability_A_Impact";
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41c00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  uVar5 = FUN_1003dfe60(lVar1,0,4,0x19,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar5,0xbf800000,0xbf800000,plVar3,0x40000,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"ImpactDamage",0);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Adagio_ArcaneFire_Heal_10185c6b0)
  ;
  local_60 = FUN_100485498;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  uVar5 = FUN_1003dfe60(lVar1,0,4,0x19,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar5,0x3f266666,plVar3,0x40000,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Adagio_ArcaneFire_10185a200);
  local_60 = FUN_1004854ac;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  lVar4 = FUN_1004745f4(param_1);
  if (lVar4 == lVar1) {
    plVar3 = (long *)FUN_100485fa8(lVar2);
    uVar5 = FUN_1003dfe60(lVar1,0,4,0x19,0);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar5,0x3f266666,plVar3,0x40000,1);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                               (plVar3,PTR_s_Buff_Adagio_ArcaneFire_Slow_10185c6b8);
    local_60 = FUN_1004854c0;
    local_58 = 3;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  }
  lVar2 = FUN_100486124(lVar2);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_100477fe0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Adagio_Spell_Projectile";
  param_2[4] = "Effect_AdagioFortunesSmile_impact";
  param_2[0xc] = "Sound_Adagio_Ability_B_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41c00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Adagio_AgentOfWrath_10185c6c0);
  local_30 = FUN_1004854d4;
  local_28 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  local_40 = FUN_1004854e8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_1004780d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Alpha_LeapProjectile";
  param_2[8] = "Effect_Alpha_A_Beam";
  param_2[10] = "EyeLaser";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,0,5,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x440000;
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_10049fe5c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = 3;
  lVar3 = FUN_100486600(lVar2);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Alpha_Dash_Shot_Lock_10185a260;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  plVar4 = (long *)FUN_100485fa8(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Alpha_A_Slow_10185cb20);
  local_40 = FUN_100485510;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100478220(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *param_2 = "Effect_Baptiste_SoulFragment";
  param_2[4] = "Effect_Baptiste_SoulFragmentImpact";
  param_2[0xc] = "Sound_Baptiste_Reap_Perk";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x8200;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x46;
  *(undefined4 *)(param_1 + 0x88) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar5 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar6 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar7 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7) * 0.16666667;
  iVar1 = _rand();
  iVar2 = _rand();
  FUN_100476ac4((float)iVar1 * 4.1909515e-10 + 0.05,(float)iVar2 * 5.122274e-10 + -0.55,0x3e800000,
                param_1 + 0x120,param_1);
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x38))(plVar4,DAT_10185a390);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100478384(undefined8 param_1,undefined8 param_2)

{
  FUN_10048564c(param_1,param_2,0);
  return;
}




void FUN_10047838c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048564c(param_1,param_2,1);
  return;
}




void FUN_100478394(undefined8 param_1,undefined8 param_2)

{
  FUN_1004859e4(param_1,param_2,0);
  return;
}




void FUN_10047839c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004859e4(param_1,param_2,1);
  return;
}




void FUN_1004783a4(undefined8 param_1,undefined8 param_2)

{
  FUN_100485c44(param_1,param_2,0,0);
  return;
}




void FUN_1004783b0(undefined8 param_1,undefined8 param_2)

{
  FUN_100485c44(param_1,param_2,2,0);
  return;
}




void FUN_1004783bc(undefined8 param_1,undefined8 param_2)

{
  FUN_100485c44(param_1,param_2,1,"Baron_QuickAttack");
  return;
}




void FUN_1004783cc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *local_60;
  undefined4 local_58;
  
  lVar3 = FUN_1004743d4();
  *param_2 = "Effect_Baron_A_Shot";
  param_2[4] = "Effect_Baron_A_Shot_Impact";
  param_2[0xc] = "Sound_Baron_Ability_A_Impact";
  puVar1 = PTR_s_Buff_Baron_Talent_EndlessMortars_10185a440;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 == 0) || (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 == 0)) {
    *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
    *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
    fVar6 = (float)FUN_1003dfe60(lVar3,1,5,0x19,0);
  }
  else {
    fVar6 = (float)FUN_1003dfe60(lVar3,1,5,0x19,0);
    local_60 = (code *)CONCAT44(local_60._4_4_,DAT_101d90a38);
    fVar7 = (float)FUN_1003dfee8(lVar3,&local_60,3,9);
    fVar6 = fVar6 - fVar6 * fVar7;
    *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
    *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  }
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(float *)(param_1 + 0x150) = fVar6;
  FUN_100476ac4(0x3f000000,0,0x3f123a14,param_1 + 0x120,param_1);
  uVar10 = FUN_1003dfe60(lVar3,1,6,0x19,0);
  uVar8 = FUN_1003dfe60(lVar3,1,9,5,0);
  uVar9 = FUN_1003dfe60(lVar3,1,10,0x19,0);
  uVar8 = NEON_fminnm(uVar8,uVar9);
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  plVar5 = (long *)FUN_10048602c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar10,0x3ee66666,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x30))(plVar5,1);
  plVar5 = (long *)FUN_100485fa8(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar10,0x3ee66666,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Baron_A_Slow_10185c9c0);
  local_60 = FUN_100485dac;
  local_58 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  (**(code **)(*plVar5 + 0x38))(uVar8);
  lVar3 = FUN_100486124(lVar3);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100478688(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Damage",2);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Blackfeather_HitByRoseOffen_10185cc80);
  local_40[0] = 0x3dcccccd;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  return;
}




void FUN_100478798(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Catherine_ArcaneShield_ReflectShot";
  param_2[4] = "Effect_Catherine_ArcaneShield_ReflectShot_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41200000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100478844(undefined8 param_1,undefined8 param_2)

{
  FUN_100485dc0(0x40c00000,param_1,param_2,0);
  return;
}




void FUN_100478850(undefined8 param_1,undefined8 param_2)

{
  FUN_100485dc0(0x40e00000,param_1,param_2,2);
  return;
}




void FUN_10047885c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Celeste_LeadStar";
  param_2[1] = "Effect_Celeste_LeadStar_Enemy";
  param_2[4] = "Effect_Celeste_Ult_Impact";
  param_2[5] = "Effect_Celeste_Ult_Impact_Enemy";
  param_2[0xc] = "Sound_Celeste_Ability_C_Impact_1";
  param_2[0xd] = "Sound_Celeste_Ability_C_Impact_2";
  param_2[0xe] = "Sound_Celeste_Ability_C_Impact_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004778c4(0x41a00000,0x435c0000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"LeadDamage",2);
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_GloballyVisibleTrueSight_10185a878);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_1004789b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Celeste_EventHorizon_Proj";
  param_2[1] = "Effect_Celeste_EventHorizon_Proj_Enemy";
  param_2[4] = "Effect_Celeste_Ult_Impact";
  param_2[5] = "Effect_Celeste_Ult_Impact_Enemy";
  param_2[0xc] = "Sound_Celeste_Ability_C_Impact_1";
  param_2[0xd] = "Sound_Celeste_Ability_C_Impact_2";
  param_2[0xe] = "Sound_Celeste_Ability_C_Impact_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3fb33333;
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1004778c4(0x41a00000,0x435c0000,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x2000000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  uVar4 = FUN_1003dfe60(uVar1,2,3,0x19,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar4,0xbf800000,0xbf800000,plVar3,0x2000000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"TrailDamage",2);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_GloballyVisibleTrueSight_10185a878);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100478b64(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar2 = FUN_1004743d4();
  *param_2 = "Effect_Churnwalker_ChainHook";
  param_2[0xc] = "Sound_Churnwalker_Ability_A_Impact_1";
  param_2[0xd] = "Sound_Churnwalker_Ability_A_Impact_2";
  param_2[0xe] = "Sound_Churnwalker_Ability_A_Impact_3";
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar9 = FUN_1003ada58(*(undefined4 *)(lVar4 + 0x414));
  *(undefined4 *)(param_2 + 0x15) = uVar9;
  param_2[8] = "Effect_Churnwalker_Chain_Proj";
  pcVar1 = "Bone_RChainBase";
  if (((int)*(float *)(param_1 + 0xf8) & 1U) != 0) {
    pcVar1 = "Bone_LChainBase";
  }
  param_2[0xb] = pcVar1;
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar2,0,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar4 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x440000;
  lVar4 = FUN_100486650(lVar4 + 0x10);
  lVar5 = FUN_10049ff9c(lVar4 + 0x10);
  *(code **)(lVar5 + 8) = FUN_100486550;
  lVar4 = lVar4 + 0x70;
  plVar6 = (long *)FUN_100485fa8(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,PTR_s_Buff_Churnwalker_ChainTether_10185a8d0);
  local_50[0] = 0x497423f0;
  local_48 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,local_50);
  (**(code **)(*plVar6 + 0x48))(plVar6,(int)*(float *)(param_1 + 0xf8));
  plVar6 = (long *)FUN_100485fa8(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,local_50);
  (**(code **)(*plVar6 + 0x38))(0x3f19999a);
  plVar6 = (long *)FUN_10048602c(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"CRYSTAL_DAMAGE",0);
  plVar6 = (long *)FUN_1004865b0(lVar4);
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)*puVar7)(puVar7,PTR_s_Ability__Churnwalker__A_101859788);
  lVar5 = FUN_100486600(lVar4);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Churnwalker_A_Casting_10185a8b0;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  lVar5 = FUN_100486650(lVar4);
  lVar8 = FUN_1004a0010(lVar5 + 0x10);
  *(undefined **)(lVar8 + 8) = PTR_s_Buff_Churnwalker_Talent_TalentC_10185cda0;
  lVar8 = FUN_1004a00bc(lVar5 + 0x10);
  *(undefined4 *)(lVar8 + 0x10) = 0x1000;
  lVar5 = FUN_1004866a0(lVar5 + 0x58);
  *(code **)(lVar5 + 0x10) = FUN_100486324;
  FUN_100486124(lVar4);
  lVar4 = FUN_10049feac(param_1 + 0x100);
  lVar5 = FUN_100486600(lVar4 + 0x10);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Churnwalker_A_Casting_10185a8b0;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  FUN_100486124(lVar4 + 0x10);
  return;
}




void FUN_100478e48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000100478ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",0);
  return;
}




void FUN_100478ef4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *local_30;
  undefined4 local_28;
  
  uVar1 = FUN_1004745f4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = FUN_100486650(lVar2 + 0x10);
  lVar3 = FUN_10049ff9c(lVar2 + 0x10);
  *(code **)(lVar3 + 8) = FUN_100485f70;
  plVar4 = (long *)FUN_100485fa8(lVar2 + 0x70);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_100485ff8;
  local_28 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
  plVar4 = (long *)FUN_10048602c(lVar2 + 0x70);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  return;
}




void FUN_100479008(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  code *local_40;
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  *(char **)(param_2 + 0x60) = "Sound_Grumpjaw_Ability_C_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003ac828(*(undefined4 *)(lVar2 + 0x3b4));
  *(undefined4 *)(param_2 + 0xa8) = uVar5;
  lVar2 = FUN_1004743d4(param_1);
  fVar6 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  *(float *)(param_1 + 0x88) =
       ((*(float *)(lVar2 + 0x2e8) + fVar6) * *(float *)(*(long *)(lVar2 + 0x38) + 0x68)) / fVar6;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,lVar2);
  *(undefined4 *)(param_1 + 0x138) = 0xe892a067;
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Grumpjaw_C_Grabbed_10185a840);
  local_40 = FUN_10048607c;
  local_38 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Eat Damage",3);
  lVar2 = FUN_100486650(lVar2);
  lVar4 = FUN_1004a0010(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Grumpjaw_Talent_BigAppetite_10185a848;
  FUN_100486124(lVar2 + 0x70);
  return;
}




void FUN_100479184(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  lVar3 = FUN_1004743d4();
  lVar6 = *(long *)(lVar3 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  lVar4 = FUN_1004745f4(param_1);
  local_60[0] = DAT_101d90b48;
  uVar7 = FUN_1003dfee8(lVar3,local_60,1,9);
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,lVar3);
  fVar8 = (float)FUN_1003dfe60(lVar3,1,3,0x19,0);
  iVar1 = DAT_101d3e88c;
  lVar5 = *(long *)(lVar6 + 0x28);
  do {
    if (lVar5 == 0) {
LAB_1004792bc:
      if (*(char *)(lVar4 + 0x2f6) < '\0') {
        fVar9 = (float)FUN_1003dfe60(lVar3,1,5,0x19,0);
        fVar8 = fVar9 * fVar8;
      }
      local_58[0] = DAT_101d90b48;
      fVar9 = (float)FUN_1003dfee8(lVar3,local_58,0,9);
      lVar6 = FUN_10049fe0c(param_1 + 0x100);
      FUN_1004747d0(param_1);
      *(undefined4 *)(lVar6 + 0x40) = 0x40000;
      lVar6 = FUN_10049ff4c(lVar6 + 0x10);
      *(float *)(lVar6 + 0x10) = fVar9 * fVar8;
      *(undefined8 *)(lVar6 + 0x28) = 0x200000001;
      *(undefined4 *)(lVar6 + 0x30) = 0;
      return;
    }
    if ((*(int *)(lVar5 + 0x314) == DAT_101d3e88c) && (*(int *)(lVar5 + 0x310) == 0)) {
      fVar9 = (float)FUN_1003dfe60(lVar3,1,4,0x19,0);
      uVar2 = FUN_1003a34a4(lVar6,iVar1);
      fVar8 = fVar8 + (float)uVar2 * fVar9;
      goto LAB_1004792bc;
    }
    lVar5 = *(long *)(lVar5 + 0x350);
  } while( true );
}




void FUN_100479354(undefined8 param_1,undefined8 param_2)

{
  FUN_100486174(param_1,param_2,0);
  return;
}




void FUN_10047935c(undefined8 param_1,undefined8 param_2)

{
  FUN_100486174(param_1,param_2,2);
  return;
}




void FUN_100479364(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Gwen_AA_Empowered";
  param_2[4] = "Effect_Gwen_AA_Empowered_Impact";
  param_2[0xc] = "Sound_Gwen_Attack_Impact_1";
  param_2[0xd] = "Sound_Gwen_Attack_Impact_2";
  param_2[0xe] = "Sound_Gwen_Attack_Impact_3";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x20) = FUN_100486234;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100479418(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Gwen_Shot";
  param_2[4] = "Effect_Gwen_Shot_Impact";
  param_2[0xc] = "Sound_Gwen_Ability_C_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f19999a;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,3,4,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,3);
  lVar4 = param_1 + 0x100;
  lVar2 = FUN_10049fe0c(lVar4);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Weapon Damage",3);
  lVar2 = FUN_10049fe0c(lVar4);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_50 = FUN_100486310;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  FUN_100486124(lVar2 + 0x10);
  lVar4 = FUN_10049feac(lVar4);
  FUN_100486124(lVar4 + 0x10);
  return;
}




void FUN_10047958c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Hero034_PfxShaderParamTest";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero034_Aura_Cyan_10185cda8);
  local_30[0] = 0x40800000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  FUN_100486124(lVar1);
  return;
}




void FUN_100479670(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Hero034_PfxShaderParamTest";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff00;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero034_Aura_Magenta_10185cdb0);
  local_30[0] = 0x40800000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  FUN_100486124(lVar1);
  return;
}




void FUN_100479754(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Hero034_PfxShaderParamTest";
  *(undefined2 *)((long)param_2 + 0xa4) = 0;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xff;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero034_Aura_Yellow_10185cdb8);
  local_30[0] = 0x40800000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  FUN_100486124(lVar1);
  return;
}




void FUN_100479838(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100488d18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero034_A_Seducing_10185cde8);
  local_40 = FUN_1004866f0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero034_A_Seduced_10185cdf0);
  local_40 = FUN_1004866f0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_100486124(lVar2);
  return;
}




void FUN_100479950(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_MinionRanged_Projectile";
  param_2[4] = "Effect_MinionRanged_HitImpact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004778c4(0x40d00000,0x41c00000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 4;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100479a24(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_WitchDoctor_Heal_Core";
  param_2[4] = "Effect_WitchDoctor_Heal_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41700000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Horde_WitchDoctorHeal_10185c0d8);
  local_30[0] = 0x3f800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100479aec(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_FrostMage_FrostBolt_Core";
  param_2[4] = "Effect_FrostMage_FrostBolt_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x40900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Slow_10185a5a0);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  FUN_100486124(lVar1);
  return;
}




void FUN_100479bd8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Fountain_Proj";
  param_2[4] = "Effect_MulledWine_buff";
  uVar3 = FUN_1003df6c8(PTR_s__Item_FountainOfRenewal__10185ba58,3,1);
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar3;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Item_FountainOfRenewal_10185ab60)
  ;
  local_30 = FUN_1003b06c4;
  local_28 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_100479ce0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_s__Item_Flare__10185ba48;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  *param_2 = "Effect_Flare_Proj_A";
  param_2[1] = "Effect_Flare_Proj_E";
  uVar5 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
  *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xf0) + 4.5;
  uVar5 = 0;
  if ((**(long **)(lVar3 + 0x1a8) != 0) && (lVar3 = (*(long **)(lVar3 + 0x1a8))[1], lVar3 != 0)) {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  FUN_100476c0c(0x3f000000,0,0x40d00000,param_1 + 0x120,param_1);
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  lVar4 = FUN_1004a0178(lVar3 + 0x10);
  *(char **)(lVar4 + 0x10) = "*FlareGun*";
  *(byte *)(lVar4 + 0x40) = *(byte *)(lVar4 + 0x40) & 0xfe;
  *(undefined4 *)(lVar4 + 0x30) = 0x3d23d70a;
  *(undefined4 *)(lVar4 + 0x38) = 1;
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_100479e18(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_s__Item_FlareLoader__10185ba50;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  *param_2 = "Effect_Flare_Proj_A";
  param_2[1] = "Effect_Flare_Proj_E";
  uVar5 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
  *(float *)(param_1 + 0xf0) = *(float *)(param_1 + 0xf0) + 4.5;
  uVar5 = 0;
  if ((**(long **)(lVar3 + 0x1a8) != 0) && (lVar3 = (*(long **)(lVar3 + 0x1a8))[1], lVar3 != 0)) {
    uVar5 = *(undefined4 *)(lVar3 + 8);
  }
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  FUN_100476c0c(0x3f000000,0,0x40d00000,param_1 + 0x120,param_1);
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  lVar4 = FUN_1004a0178(lVar3 + 0x10);
  *(char **)(lVar4 + 0x10) = "*FlareLoader*";
  *(byte *)(lVar4 + 0x40) = *(byte *)(lVar4 + 0x40) & 0xfe;
  *(undefined4 *)(lVar4 + 0x30) = 0x3d23d70a;
  *(undefined4 *)(lVar4 + 0x38) = 1;
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_100479f50(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Item_EMP";
  param_2[1] = "Effect_Item_EMP";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41400000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Item_EMP_Countdown_10185c3f0);
  local_30 = FUN_100486b34;
  local_28 = 2;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  (**(code **)(*plVar2 + 0x60))(plVar2,FUN_100485f64);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047a024(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Protector_Proj";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xffff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x99;
  *(undefined4 *)(param_1 + 0x88) = 0x3e19999a;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3e4ccccd;
  iVar1 = _rand();
  iVar2 = _rand();
  FUN_100476c0c((float)iVar1 * 9.3132266e-11 + 0.4,0,(float)iVar2 * 4.656613e-10 + 3.5,
                param_1 + 0x120,param_1);
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Item_ProtectorContract_Barr_10185c550);
  local_40 = FUN_100486b48;
  local_38 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10047a160(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_RooksDecree_Projectile";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xbe6e;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x96;
  *(undefined4 *)(param_1 + 0x88) = 0x3e19999a;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3e4ccccd;
  iVar1 = _rand();
  iVar2 = _rand();
  FUN_100476c0c((float)iVar1 * 9.3132266e-11 + 0.4,0,(float)iVar2 * 4.656613e-10 + 3.5,
                param_1 + 0x120,param_1);
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Item_RooksDecree_Barrier_10185c520);
  local_40 = FUN_100486b5c;
  local_38 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10047a29c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *(char **)(param_2 + 0x30) = "Effect_JMinion_Mine_Proj";
  *(char **)(param_2 + 0x20) = "Effect_JMinion_Mine_Proj_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41400000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460);
  local_30[0] = 0x3fb33333;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  (**(code **)(*plVar3 + 0x38))(0x3eb33333);
  FUN_100486124(lVar1);
  return;
}




void FUN_10047a3a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *(char **)(param_2 + 0x30) = "Effect_JMinion_Mine_Proj";
  *(char **)(param_2 + 0x20) = "Effect_JMinion_Mine_Proj_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41400000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460);
  local_30[0] = 0x3fb33333;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  (**(code **)(*plVar3 + 0x38))(0x3eb33333);
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Blitz_GloballyVisible_10185c070);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  FUN_100486124(lVar1);
  return;
}




void FUN_10047a4dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *(char **)(param_2 + 0x30) = "Effect_JMinion_Mine_Proj";
  *(char **)(param_2 + 0x20) = "Effect_JMinion_Mine_Proj_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41400000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 3;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460);
  local_30[0] = 0x3fb33333;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  (**(code **)(*plVar3 + 0x38))(0x3eb33333);
  FUN_100486124(lVar1);
  return;
}




void FUN_10047a5e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_JM_TreeEnt_Heal";
  param_2[4] = "Effect_MulledWine_buff";
  param_2[0xc] = "build://Sounds/Treant/tree_ent_heal_impact.mp3";
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f4ccccd;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  *(undefined4 *)(lVar1 + 0x48) = 0x3e4ccccd;
  *(undefined1 *)(lVar1 + 0x4c) = 1;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100485fa8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_JungleMinion_TreeEnt_Restor_10185c1b0);
  local_40 = FUN_100486704;
  local_38 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100485fa8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_JungleMinion_TreeEnt_Barrie_10185c1b8);
  local_40 = FUN_100486728;
  local_38 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_100486124(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_10047a744(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_JM_TreeEnt_Heal";
  param_2[4] = "Effect_MulledWine_buff";
  param_2[0xc] = "build://Sounds/Treant/tree_ent_heal_impact.mp3";
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f4ccccd;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  *(undefined4 *)(lVar1 + 0x48) = 0x3e4ccccd;
  *(undefined1 *)(lVar1 + 0x4c) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_JungleMinion_TreeEnt_Restor_10185c1b0);
  local_30 = FUN_100486704;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_10047a864(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_JM_CrystalMiner_DeathBuff_A";
  param_2[1] = "Effect_JM_CrystalMiner_DeathBuff_E";
  param_2[4] = "Effect_JM_CrystalMiner_DB_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f99999a;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  *(undefined4 *)(lVar1 + 0x48) = 0x3e4ccccd;
  *(undefined1 *)(lVar1 + 0x4c) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_JungleMinion_CrystalMiner_C_10185c1d8);
  local_40[0] = 0x43960000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar3 = FUN_1004744e4(param_1);
  (**(code **)(*plVar2 + 0x48))(plVar2,*(undefined4 *)(lVar3 + 0x270));
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_10047a9a0(undefined8 param_1,undefined8 param_2)

{
  FUN_100486758(param_1,param_2,"Effect_Red_Buff",PTR_s_Buff_JungleMinion_5v5_WeaponOrb_10185ac30);
  return;
}




void FUN_10047a9b4(undefined8 param_1,undefined8 param_2)

{
  FUN_100486758(param_1,param_2,"Effect_Blue_Buff",PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185ac28)
  ;
  return;
}




void FUN_10047a9c8(undefined8 param_1,undefined8 param_2)

{
  FUN_100486b70(param_1,param_2,0);
  return;
}




void FUN_10047a9d0(undefined8 param_1,undefined8 param_2)

{
  FUN_100486b70(param_1,param_2,2);
  return;
}




void FUN_10047a9d8(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  code *local_60;
  undefined4 local_58;
  
  uVar2 = FUN_1004743d4();
  *param_2 = "Effect_Kestrel_HalcyonArrow";
  param_2[4] = "Effect_Kestrel_HalcyonArrowImpact";
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar10 = FUN_1003b2f3c(*(undefined4 *)(lVar4 + 0x260));
  *(undefined4 *)(param_2 + 0x15) = uVar10;
  *(undefined4 *)(param_1 + 0x88) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1004779e0(0x41f00000,param_1 + 0x120,param_1,0);
  lVar4 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x40000;
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_10048602c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  local_60 = FUN_100486c88;
  local_58 = 4;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_60,0,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,FUN_100486cfc);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,1);
  (**(code **)(*plVar5 + 0x68))(plVar5,"Ability__Kestrel__A");
  plVar5 = (long *)FUN_10048602c(lVar4);
  uVar3 = FUN_1003dfe60(uVar2,0,9,0x19,0);
  uVar11 = FUN_1003dfe60(uVar2,0,10,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar3,0x3f800000,uVar11,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"SplashDamage",0);
  plVar5 = (long *)FUN_100485fa8(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                             (plVar5,PTR_s_Buff_Kestrel_PlayHalcyonArrowImp_10185cae0);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3dcccccd);
  local_58 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  lVar6 = FUN_100486650(lVar4);
  lVar7 = FUN_1004a01c8(lVar6 + 0x10);
  if (PTR_s_Ability__Kestrel__B_101859578 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Kestrel__B_101859578;
    pcVar9 = PTR_s_Ability__Kestrel__B_101859578;
    while (cVar1 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar8 = (uVar8 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar9;
    }
  }
  *(uint *)(lVar7 + 8) = uVar8;
  *(undefined4 *)(lVar7 + 0xc) = 1;
  plVar5 = (long *)FUN_100486d38(lVar6 + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,PTR_s_Ability__Kestrel__B_101859578);
  local_60 = FUN_100486d88;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_60);
  FUN_100486124(lVar4);
  lVar4 = FUN_10049feac(param_1 + 0x100);
  plVar5 = (long *)FUN_10048602c(lVar4 + 0x10);
  uVar3 = FUN_1003dfe60(uVar2,0,9,0x19,0);
  uVar2 = FUN_1003dfe60(uVar2,0,10,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar3,0x3f800000,uVar2,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"SplashDamage",0);
  lVar4 = FUN_100486124(lVar4 + 0x10);
  *(undefined1 *)(lVar4 + 0x18) = 1;
  return;
}




void FUN_10047ad48(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  
  lVar3 = FUN_1004744e4();
  *param_2 = "Effect_Hero009_Sword_Spinning";
  param_2[0xc] = "Krul_ability_c_impact_1";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0x40000000;
  puVar1 = PTR_s_Buff_Krul_Talent_CursedBlade_10185c7e0;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 == 0) || (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 == 0)) {
    *(undefined8 *)(param_1 + 0x130) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x128) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x140) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x138) = 0x7f7fffff7f7fffff;
    *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0x14c) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa30;
    uVar8 = FUN_1003dfe60(lVar3,2,7,0x19,0);
    FUN_100476df8(uVar8,0x41400000,param_1 + 0x120,param_1);
    lVar4 = FUN_10049fe0c(param_1 + 0x100);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar4 + 0x40) = 1;
    lVar4 = lVar4 + 0x10;
    lVar5 = FUN_10049ff4c(lVar4);
    *(code **)(lVar5 + 0x18) = FUN_100486e48;
    *(undefined8 *)(lVar5 + 0x28) = 0x200000001;
    *(undefined4 *)(lVar5 + 0x30) = 0;
    plVar6 = (long *)FUN_100485fa8(lVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Krul_Hellrazor_SkillShotDam_10185c7d0);
    local_50 = FUN_100486f74;
    local_48 = 4;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    lVar3 = *(long *)(*(long *)(lVar3 + 0x58) + 0x58);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x239) & 0x1c) != 0)) {
      plVar6 = (long *)FUN_100485fa8(lVar4);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                                 (plVar6,PTR_s_Buff_Krul_Spectral_Smite_Debuf_10185acf0);
      local_50 = FUN_100442fa8;
      local_48 = 3;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
      local_60 = FUN_100487074;
      local_58 = 3;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_60);
    }
    pcVar7 = FUN_100486d9c;
  }
  else {
    *(undefined8 *)(param_1 + 0x130) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x128) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x140) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x138) = 0x7f7fffff7f7fffff;
    *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0x14c) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa30;
    uVar8 = FUN_1003dfe60(lVar3,2,7,0x19,0);
    FUN_100476df8(uVar8,0x41400000,param_1 + 0x120,param_1);
    lVar4 = FUN_10049fe0c(param_1 + 0x100);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar4 + 0x40) = 1;
    lVar4 = lVar4 + 0x10;
    lVar5 = FUN_10049ff4c(lVar4);
    *(code **)(lVar5 + 0x18) = FUN_100486f18;
    *(undefined8 *)(lVar5 + 0x28) = 0x200000001;
    *(undefined4 *)(lVar5 + 0x30) = 0;
    plVar6 = (long *)FUN_100485fa8(lVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Krul_Hellrazor_SkillShotDam_10185c7d0);
    local_50 = FUN_100486f74;
    local_48 = 4;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
    lVar3 = *(long *)(*(long *)(lVar3 + 0x58) + 0x58);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x239) & 0x1c) != 0)) {
      plVar6 = (long *)FUN_100485fa8(lVar4);
      plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                                 (plVar6,PTR_s_Buff_Krul_Spectral_Smite_Debuf_10185acf0);
      local_50 = FUN_100442fa8;
      local_48 = 3;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
      local_60 = FUN_10048703c;
      local_58 = 3;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_60);
    }
    pcVar7 = FUN_100486dd4;
  }
  FUN_100486124(lVar4);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  lVar3 = FUN_10049ff4c(lVar3 + 0x10);
  *(code **)(lVar3 + 0x18) = pcVar7;
  *(undefined8 *)(lVar3 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10047b0ec(undefined8 param_1,undefined8 param_2)

{
  FUN_10048709c(param_1,param_2,0);
  return;
}




void FUN_10047b0f4(undefined8 param_1,undefined8 param_2)

{
  FUN_10048709c(param_1,param_2,2);
  return;
}




void FUN_10047b0fc(undefined8 param_1,undefined8 param_2)

{
  FUN_100487204(param_1,param_2,0);
  return;
}




void FUN_10047b104(undefined8 param_1,undefined8 param_2)

{
  FUN_100487204(param_1,param_2,2);
  return;
}




void FUN_10047b10c(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x88) = 0x40000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004778c4(0x41000000,0x40c00000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_10047b178(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Blackclaw_BreathProjectile";
  param_2[6] = "Effect_Blackclaw_BreathGround";
  param_2[4] = "Effect_Blackclaw_BreathImpact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004778c4(0x41800000,0x41700000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_100487520;
  *(undefined8 *)(lVar2 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  lVar1 = FUN_1004866a0(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100487624;
  lVar1 = FUN_10049feac(param_1 + 0x100);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_10047b274(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  local_28[0] = DAT_101d90c0c;
  uVar3 = FUN_1003dfee8(uVar1,local_28,1,9);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = FUN_10049ff4c(lVar2 + 0x10);
  *(code **)(lVar2 + 0x20) = FUN_1004876ec;
  return;
}




void FUN_10047b32c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048778c(param_1,param_2,0);
  return;
}




void FUN_10047b334(undefined8 param_1,undefined8 param_2)

{
  FUN_100487860(param_1,param_2,0);
  return;
}




void FUN_10047b33c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048778c(param_1,param_2,2);
  return;
}




void FUN_10047b344(undefined8 param_1,undefined8 param_2)

{
  FUN_100487860(param_1,param_2,2);
  return;
}




void FUN_10047b34c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *param_2 = "Effect_Lyra_A_Proj_A";
  param_2[1] = "Effect_Lyra_A_Proj_E";
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar3 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar4 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar5 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) * 0.05;
  FUN_100476ac4(0x3f733333,0,0x3e6147ae,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fefc(param_1 + 0x100);
  lVar2 = FUN_1004a0178(lVar1 + 0x10);
  *(char **)(lVar2 + 0x10) = "*Lyra_SpiritFlame*";
  *(byte *)(lVar2 + 0x40) = *(byte *)(lVar2 + 0x40) & 0xfe;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047b444(undefined8 param_1,undefined8 param_2)

{
  FUN_100487a94(param_1,param_2,0);
  return;
}




void FUN_10047b44c(undefined8 param_1,undefined8 param_2)

{
  FUN_100487bac(param_1,param_2,0);
  return;
}




void FUN_10047b454(undefined8 param_1,undefined8 param_2)

{
  FUN_100487bac(param_1,param_2,0);
  return;
}




void FUN_10047b45c(undefined8 param_1,undefined8 param_2)

{
  FUN_100487bac(param_1,param_2,2);
  return;
}




void FUN_10047b464(undefined8 param_1,undefined8 param_2)

{
  FUN_100487a94(param_1,param_2,0);
  return;
}




void FUN_10047b46c(undefined8 param_1,undefined8 param_2)

{
  FUN_100487a94(param_1,param_2,2);
  return;
}




void FUN_10047b478(undefined8 param_1,undefined8 param_2)

{
  FUN_100487e34(param_1,param_2,1);
  return;
}




void FUN_10047b480(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Malene_A1Projectile";
  param_2[4] = "Effect_Malene_A1Hit";
  param_2[0xc] = "Sound_Malene_Good_Ability_A_Impact";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b7e84(*(undefined4 *)(lVar3 + 0x498));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x3219;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x4b;
  *(undefined4 *)(param_1 + 0x88) = 0x3f19999a;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,0,4,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  plVar4 = (long *)FUN_100485fa8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Malene_A1_Immobilize_10185cec0);
  local_40 = FUN_100487f98;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
  FUN_100486124(lVar3);
  lVar3 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10047b610(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  code *local_40;
  undefined4 local_38;
  
  lVar3 = FUN_1004743d4();
  *param_2 = "Effect_Malene_A2Projectile";
  param_2[4] = "Effect_Malene_A2Hit";
  param_2[0xc] = "Sound_Malene_Evil_Ability_A_Impact";
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003b7e84(*(undefined4 *)(lVar5 + 0x49c));
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x199a;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xe6;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1003dfe60(lVar3,1,4,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,1);
  lVar5 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar5 + 0x40) = 0x40000;
  plVar6 = (long *)FUN_10048602c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"Damage",1);
  puVar1 = PTR_s_Buff_Malene_Talent_TalentB_10185ced8;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    plVar6 = (long *)FUN_100485fa8(lVar5 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Fear_10185a5b8);
    local_40 = FUN_100487fac;
    local_38 = 3;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
  }
  lVar3 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10047b7b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Malene_B2_ShadowSlow_10185cec8);
  local_30 = FUN_100487fe0;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  return;
}




void FUN_10047b880(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0xcc) = 0x41700000;
  *param_2 = "Effect_MinionRanged_Projectile";
  param_2[4] = "Effect_MinionRanged_HitImpact";
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x40c00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 4;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047b92c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0xcc) = 0x41700000;
  *param_2 = "Effect_MinionLead_Proj";
  param_2[4] = "Effect_MinionLead_Proj_Hit";
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x40c00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004755a8;
  *(undefined8 *)(lVar2 + 0x28) = 4;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047b9d8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0xcc) = 0x40400000;
  *param_2 = "Effect_FireHands";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xffff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined4 *)((long)param_2 + 0xac) = 0x3d75c28f;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f800000;
  FUN_100476ac4(0x3f400000,0,0x3f123a14,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Minion_CaptainBuff_10185c238);
  local_30[0] = 0x40900000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047baec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_50;
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x200000;
  *(undefined **)(lVar2 + 0x60) = PTR_s_Buff_Ozo_RollPrimaryTarget_10185ae98;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"SecondaryTargetDamage",8);
  plVar3 = (long *)FUN_1004a026c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  local_40[0] = 0x41700000;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,local_40);
  local_50 = FUN_100487ff4;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
  return;
}




void FUN_10047bc18(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Petal_Projectile";
  param_2[4] = "Effect_Petal_Projectile_Imp";
  param_2[0xc] = "Sound_Petal_basic_attack_impact_1";
  param_2[0xd] = "Sound_Petal_basic_attack_impact_2";
  param_2[0xe] = "Sound_Petal_basic_attack_impact_3";
  param_2[0xf] = "Sound_Petal_basic_attack_impact_4";
  param_2[0x10] = "Sound_Petal_basic_attack_impact_5";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41880000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047bce8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Petal_Projectile_Crit";
  param_2[4] = "Effect_Petal_Projectile_Crit_Imp";
  param_2[0xc] = "Sound_Petal_crit_attack_impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41500000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 2;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047bd94(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  lVar2 = FUN_1004743d4();
  uVar1 = *(undefined4 *)(lVar2 + 0x30);
  *(long *)(param_1 + 0xd8) = lVar2 + 0x28;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_10047467c(param_1);
  *(char **)(param_2 + 0x30) = "Effect_Phinn_C_Sparks";
  *(undefined4 *)(param_1 + 0x88) = 0x3fc00000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41d80000;
  lVar2 = param_1 + 0x100;
  lVar3 = FUN_10049fe0c(lVar2);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  plVar4 = (long *)FUN_10048602c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",2);
  lVar3 = FUN_10049fe0c(lVar2);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x200000;
  plVar4 = (long *)FUN_1004a026c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_50[0] = 0x41d80000;
  local_48 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_50);
  local_60 = FUN_100488008;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_60);
  lVar3 = FUN_100486600(lVar3 + 0x10);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Phinn_WhiffedWithPull_10185a6a0;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  lVar2 = FUN_10049fefc(lVar2);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10047bf50(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  lVar3 = FUN_1004743d4();
  *(char **)(param_2 + 0x30) = "Effect_Reim_A_Ground";
  *(undefined4 *)(param_1 + 0x13c) = 0;
  uVar8 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x128) = uVar8;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  uVar7 = FUN_1003dfe60(lVar3,0,4,0x19,0);
  *(undefined4 *)(param_1 + 300) = uVar7;
  lVar4 = FUN_10049fefc(param_1 + 0x100);
  lVar5 = FUN_1004a0178(lVar4 + 0x10);
  *(char **)(lVar5 + 0x10) = "*Reim_A*";
  *(byte *)(lVar5 + 0x40) = *(byte *)(lVar5 + 0x40) & 0xfe;
  FUN_100486124(lVar4 + 0x10);
  puVar1 = PTR_s_Buff_Reim_Talent_CreepingCold_10185caa8;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    lVar3 = FUN_10049fe0c(param_1 + 0x100);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar3 + 0x40) = 0x40000;
    plVar6 = (long *)FUN_10048602c(lVar3 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Damage First Hit",0);
                    /* WARNING: Could not recover jumptable at 0x00010047c088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x68))(plVar6,"Ability__Reim__A_Passthrough");
    return;
  }
  return;
}




void FUN_10047c09c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Reza_A_Shot";
  param_2[4] = "Effect_Reza_A_ShotImpact";
  param_2[0xc] = "Sound_Reza_Ability_A_Impact_Projectile";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003aec0c(*(undefined4 *)(lVar3 + 0x3fc));
  *(undefined4 *)(param_2 + 0x15) = uVar6;
  *(undefined4 *)((long)param_2 + 0xac) = 0x3e99999a;
  uVar6 = FUN_1003dfe60(uVar1,0,4,0x19,0);
  *(undefined4 *)(param_1 + 0x88) = uVar6;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,0,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar3 = param_1 + 0x100;
  lVar4 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x440000;
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100485fa8(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Reza_VolatileSpark_10185aa40);
  local_40 = FUN_1003aeff4;
  local_38 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
  plVar5 = (long *)FUN_10048602c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",0);
  FUN_100486124(lVar4);
  lVar4 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x40000;
  plVar5 = (long *)FUN_10048602c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",0);
  lVar3 = FUN_10049feac(lVar3);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10047c280(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_50;
  undefined4 local_48;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  lVar3 = FUN_1004743d4();
  puVar1 = PTR_s_Buff_Reza_Talent_Firemaker_10185ce20;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if (lVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1003a47d0(lVar4,puVar1);
  }
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,lVar3);
  lVar4 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x40000;
  plVar5 = (long *)FUN_10048602c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DASH_DAMAGE",1);
  if (((iVar2 != 0) && (lVar3 = *(long *)(*(long *)(lVar3 + 0x58) + 0x58), lVar3 != 0)) &&
     ((*(byte *)(lVar3 + 0x239) & 0x1c) != 0)) {
    lVar3 = FUN_10049fe0c(param_1 + 0x100);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar3 + 0x40) = 1;
    plVar5 = (long *)FUN_100485fa8(lVar3 + 0x10);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Reza_VolatileSpark_10185aa40);
    local_50 = FUN_1003aeff4;
    local_48 = 3;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  }
  return;
}




void FUN_10047c3f0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Ringo_Shot";
  param_2[4] = "Effect_Ringo_Shot_HitImpact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047c48c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Ringo_CritShot";
  param_2[4] = "Effect_Ringo_CritShot_HitImpact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 2;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047c52c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Ringo_B_Projectile";
  param_2[4] = "Effect_Ringo_B_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047c5c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Ringo_B_Projectile";
  param_2[4] = "Effect_Ringo_B_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 2;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047c668(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Ringo_Ability01_Shot";
  param_2[4] = "Effect_Ringo_Ability01_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41b40000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10048602c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  plVar2 = (long *)FUN_100485fa8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Ringo_AchillesShot_Slow_10185c688);
  local_30 = FUN_10048801c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  FUN_100486124(lVar1);
  return;
}




void FUN_10047c760(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  code *local_50;
  undefined4 local_48;
  
  lVar3 = FUN_1004743d4();
  *(char **)(param_2 + 0x30) = "Effect_Ringo_Ability03_Fireball";
  *(char **)(param_2 + 0x20) = "Effect_Ringo_Ability03_Impact";
  *(char **)(param_2 + 0x60) = "Sound_Ringo_Ability_C_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x40f00000;
  lVar4 = FUN_10049fdbc(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_10048602c(lVar4);
  uVar7 = FUN_1003dfe60(lVar3,2,3,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar7,0xbf800000,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"ImpactDamage",2);
  plVar5 = (long *)FUN_100485fa8(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                             (plVar5,PTR_s_Buff_Ringo_HellfireBrew_Burn_10185c690);
  local_50 = FUN_1004881d0;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  puVar1 = PTR_s_Buff_Ringo_Talent_SpikedBrew_10185c698;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) &&
      (lVar3 = FUN_1004745f4(param_1), ABS(*(float *)(param_1 + 0xf8)) < 0.01)) && (lVar3 != 0)) {
    lVar6 = FUN_1004a02bc(lVar4);
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(lVar6 + 0x14) = 0x3e3270a0;
    *(code **)(lVar6 + 0x18) = FUN_100488030;
    *(undefined4 *)(lVar6 + 0x28) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar3 + 0x260);
    *(undefined4 *)(lVar6 + 0x48) = 0x3f800000;
  }
  FUN_100486124(lVar4);
  return;
}




void FUN_10047c948(undefined8 param_1,undefined8 param_2)

{
  FUN_1004881e4(param_1,param_2,0);
  return;
}




void FUN_10047c950(undefined8 param_1,undefined8 param_2)

{
  FUN_1004881e4(param_1,param_2,2);
  return;
}




void FUN_10047c958(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Samuel_EnergyReturnShot";
  param_2[4] = "Effect_Samuel_EnergyRestore";
  param_2[0xc] = "Sound_Samuel_attack_empowered_drain";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f4ccccd;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_1004a030c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_1004882b8;
  lVar2 = FUN_1004a0128(lVar1);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(code **)(lVar2 + 0x18) = FUN_1004883f0;
  FUN_100486124(lVar1);
  return;
}




void FUN_10047ca3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_Samuel_A_Shot";
  param_2[4] = "Effect_Samuel_A_Shot_Impact";
  param_2[0xc] = "Sound_Samuel_ability_a_hit_1";
  param_2[0xd] = "Sound_Samuel_ability_a_hit_2";
  param_2[0xe] = "Sound_Samuel_ability_a_hit_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41a00000,param_1 + 0x120,param_1,1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"Damage",1);
  FUN_100486124(lVar1 + 0x10);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047cb3c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Samuel_A_Empowered_Shot";
  param_2[4] = "Effect_Samuel_A_Empowered_Shot_Impact";
  param_2[0xc] = "Sound_Samuel_ability_a_empowered_hit_1";
  param_2[0xd] = "Sound_Samuel_ability_a_empowered_hit_2";
  param_2[0xe] = "Sound_Samuel_ability_a_empowered_hit_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41f00000,param_1 + 0x120,param_1,2);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Empowered Damage Primary",1);
  plVar3 = (long *)FUN_10048602c(lVar2);
  uVar4 = FUN_1003dfe60(uVar1,1,6,0x19,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar4,0xbf800000,0xbf800000,plVar3,0x40000,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Empowered Damage",1);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10047ccb0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Samuel_NightmareShot";
  param_2[4] = "Effect_Samuel_C_Detonate";
  param_2[0xc] = "Sound_Samuel_ability_c_hit";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar4 = FUN_1003dfe60(uVar1,4,3,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  FUN_100476ac4(0x3f733333,0,0x3e6147ae,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  uVar4 = FUN_1003dfe60(uVar1,4,4,0x19,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar4,0xbf800000,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",4);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  uVar4 = FUN_1003dfe60(uVar1,4,4,0x19,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar4,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Samuel_C_Nightmare_10185cbe0);
  local_40 = FUN_1004884d4;
  local_38 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_100486124(lVar2);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_10047ce90(undefined8 param_1,undefined8 param_2)

{
  FUN_100488568(param_1,param_2,0);
  return;
}




void FUN_10047ce98(undefined8 param_1,undefined8 param_2)

{
  FUN_100488568(param_1,param_2,2);
  return;
}




void FUN_10047cea0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  uVar3 = FUN_1004743d4();
  *param_2 = "Effect_SAW_Projectile_Explosive";
  param_2[4] = "Effect_SAW_Projectile_Explosive_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  lVar4 = FUN_1004743d4(param_1);
  puVar1 = PTR_s_Buff_SAW_Talent_PiercingBullets_10185b048;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar4 == 0) || (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x134) = 1;
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
    FUN_1004779e0(0x41b00000,param_1 + 0x120,param_1,3);
    lVar4 = FUN_10049fe0c(param_1 + 0x100);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar4 + 0x40) = 0x40000;
    plVar5 = (long *)FUN_10048602c(lVar4 + 0x10);
    uVar6 = FUN_1003dfe60(uVar3,3,5,0x19,0);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar6,0xbf800000,0xbf800000,plVar5,0x40000,0);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
    (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",3);
    FUN_100486124(lVar4 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x134) = 1;
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
    FUN_1004779e0(0x41b00000,param_1 + 0x120,param_1,3);
    lVar4 = FUN_10049fe0c(param_1 + 0x100);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar4 + 0x40) = 0x40000;
    plVar5 = (long *)FUN_10048602c(lVar4 + 0x10);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
    (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",3);
  }
  lVar4 = FUN_10049feac(param_1 + 0x100);
  plVar5 = (long *)FUN_10048602c(lVar4 + 0x10);
  uVar6 = FUN_1003dfe60(uVar3,3,5,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar6,0xbf800000,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",3);
  lVar4 = FUN_100486124(lVar4 + 0x10);
  *(undefined1 *)(lVar4 + 0x18) = 1;
  return;
}




void FUN_10047d0ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Hero010_FireBall";
  param_2[4] = "Effect_Hero010_FireBall_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047d188(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Hero010_Fireball_Crit";
  param_2[4] = "Effect_Hero010_Fireball_Impact_Crit";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41c80000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 2;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047d228(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Hero010_Fireball_Crit";
  param_2[4] = "Effect_Hero010_Fireball_Impact_Crit";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41c80000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047d2c8(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  code *local_70;
  undefined4 local_68;
  
  lVar5 = FUN_1004743d4();
  *param_2 = "Effect_Hero010_FireBall_Ground";
  param_2[4] = "Effect_Hero010_FireBall_Impact";
  param_2[0xc] = "Sound_Skaarf_Ability_A_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
  puVar1 = PTR_s_Buff_Skaarf_Talent_FlamingSludge_10185c848;
  lVar6 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if (lVar6 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1003a47d0(lVar6,puVar1);
  }
  puVar1 = PTR_s_Buff_Skaarf_Talent_Splitfire_10185b090;
  lVar6 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1003a47d0(lVar6,puVar1);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(lVar5,0,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar6 = param_1 + 0x100;
  lVar7 = FUN_10049fe0c(lVar6);
  FUN_1004747d0(param_1);
  *(undefined8 *)(lVar7 + 0x40) = 0xffffffff00440000;
  *(undefined4 *)(lVar7 + 0x48) = 0x100;
  if ((uVar4 & 1) == 0) {
    lVar8 = FUN_10049ff4c(lVar7 + 0x10);
    *(code **)(lVar8 + 0x18) = FUN_1004887c0;
    *(undefined8 *)(lVar8 + 0x28) = 0x200000001;
    *(undefined4 *)(lVar8 + 0x30) = 0;
  }
  lVar7 = lVar7 + 0x10;
  plVar9 = (long *)FUN_100485fa8(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,PTR_s_Buff_Skaarf_Burn_10185c7e8);
  local_70 = FUN_100449d3c;
  local_68 = 3;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
  if (((uVar4 != 0) && (lVar8 = *(long *)(*(long *)(lVar5 + 0x58) + 0x50), lVar8 != 0)) &&
     ((*(byte *)(lVar8 + 0x239) & 0x1c) != 0)) {
    plVar9 = (long *)FUN_100485fa8(lVar7);
    plVar9 = (long *)(**(code **)(*plVar9 + 0x38))
                               (plVar9,PTR_s_Buff_Skaarf_Talent_Splitfire_Hit_10185c838);
    local_70 = (code *)CONCAT44(local_70._4_4_,0x3f800000);
    local_68 = 1;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
  }
  if (((iVar3 != 0) && (lVar8 = *(long *)(*(long *)(lVar5 + 0x58) + 0x58), lVar8 != 0)) &&
     ((*(byte *)(lVar8 + 0x239) & 0x1c) != 0)) {
    lVar8 = FUN_1004a0178(lVar7);
    puVar1 = PTR_s__SkaarfGoopPool__10185b098;
    *(byte *)(lVar8 + 0x40) = *(byte *)(lVar8 + 0x40) | 1;
    puVar2 = PTR_s_Buff_Skaarf_GoopPoolOnFire_10185c818;
    *(undefined **)(lVar8 + 0x10) = puVar1;
    *(undefined **)(lVar8 + 0x18) = puVar2;
    *(undefined4 *)(lVar8 + 0x20) = 0xbf800000;
  }
  FUN_100486124(lVar7);
  lVar7 = FUN_10049fe0c(lVar6);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar7 + 0x40) = 0x40000;
  if ((uVar4 & 1) == 0) {
    lVar8 = FUN_10049ff4c(lVar7 + 0x10);
    *(code **)(lVar8 + 0x18) = FUN_1004887c0;
    *(undefined8 *)(lVar8 + 0x28) = 0x200000001;
    *(undefined4 *)(lVar8 + 0x30) = 0;
  }
  lVar7 = lVar7 + 0x10;
  plVar9 = (long *)FUN_100485fa8(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,PTR_s_Buff_Skaarf_Burn_10185c7e8);
  local_70 = FUN_100449d3c;
  local_68 = 3;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
  if (((uVar4 != 0) && (lVar8 = *(long *)(*(long *)(lVar5 + 0x58) + 0x50), lVar8 != 0)) &&
     ((*(byte *)(lVar8 + 0x239) & 0x1c) != 0)) {
    plVar9 = (long *)FUN_100485fa8(lVar7);
    plVar9 = (long *)(**(code **)(*plVar9 + 0x38))
                               (plVar9,PTR_s_Buff_Skaarf_Talent_Splitfire_Hit_10185c838);
    local_70 = (code *)CONCAT44(local_70._4_4_,0x3f800000);
    local_68 = 1;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
  }
  lVar7 = FUN_1004a035c(lVar7);
  uVar10 = FUN_1003dfe60(lVar5,0,4,0x19,0);
  *(undefined4 *)(lVar7 + 0x10) = 2;
  *(undefined4 *)(lVar7 + 0x14) = uVar10;
  lVar7 = FUN_10049fe0c(lVar6);
  puVar1 = PTR_s_SkaarfGoopPool_10185bb30;
  FUN_1004747d0(param_1);
  *(undefined **)(lVar7 + 0x58) = puVar1;
  *(undefined1 *)(lVar7 + 0x68) = 1;
  lVar8 = *(long *)(*(long *)(lVar5 + 0x58) + 0x58);
  if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x239) & 0x1c) != 0)) {
    lVar8 = FUN_100486600(lVar7 + 0x10);
    *(undefined **)(lVar8 + 0x10) = PTR_s_Buff_Skaarf_GoopPool_10185c800;
    plVar9 = (long *)FUN_100485fa8(lVar7 + 0x10);
    (**(code **)(*plVar9 + 0x38))(plVar9,PTR_s_Buff_Skaarf_GoopPoolOnFire_10185c818);
  }
  lVar6 = FUN_10049feac(lVar6);
  if (((iVar3 != 0) && (lVar5 = *(long *)(*(long *)(lVar5 + 0x58) + 0x58), lVar5 != 0)) &&
     ((*(byte *)(lVar5 + 0x239) & 0x1c) != 0)) {
    lVar5 = FUN_1004a0178(lVar6 + 0x10);
    puVar1 = PTR_s__SkaarfGoopPool__10185b098;
    *(byte *)(lVar5 + 0x40) = *(byte *)(lVar5 + 0x40) | 1;
    puVar2 = PTR_s_Buff_Skaarf_GoopPoolOnFire_10185c818;
    *(undefined **)(lVar5 + 0x10) = puVar1;
    *(undefined **)(lVar5 + 0x18) = puVar2;
    *(undefined4 *)(lVar5 + 0x20) = 0xbf800000;
  }
  FUN_100486124(lVar6 + 0x10);
  return;
}




void FUN_10047d704(undefined8 param_1,undefined8 param_2)

{
  FUN_1004888a8(param_1,param_2,0);
  return;
}




void FUN_10047d70c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004888a8(param_1,param_2,2);
  return;
}




void FUN_10047d714(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar3 = FUN_1004743d4();
  *param_2 = "Effect_Skye_Barrage_Proj";
  param_2[4] = "Effect_Skye_Barrage_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41c80000,param_1 + 0x120,param_1,0);
  lVar4 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x40000;
  lVar4 = lVar4 + 0x10;
  lVar5 = FUN_10049ff4c(lVar4);
  *(code **)(lVar5 + 0x18) = FUN_100488a74;
  *(undefined8 *)(lVar5 + 0x28) = 0x200000000;
  *(undefined4 *)(lVar5 + 0x30) = 0;
  lVar5 = FUN_10049ff4c(lVar4);
  *(code **)(lVar5 + 0x18) = FUN_100488b1c;
  *(undefined8 *)(lVar5 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar5 + 0x30) = 0;
  plVar6 = (long *)FUN_100485fa8(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Skye_LockedOn_Target_10185b0d8);
  local_60 = (code *)((ulong)local_60._4_4_ << 0x20);
  local_58 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  local_70[0] = 0;
  local_68 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,local_70);
  (**(code **)(*plVar6 + 0x60))(plVar6,FUN_100488bc4);
  plVar6 = (long *)FUN_100488d18(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Skye_JumpJets_Pending_10185b0c0);
  local_60 = FUN_1003be360;
  local_58 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  (**(code **)(*plVar6 + 0x60))(plVar6,FUN_100488bc4);
  puVar1 = PTR_s_Buff_Skye_Talent_PiercingBarrage_10185ca60;
  lVar5 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar5 == 0) || (iVar2 = FUN_1003a47d0(lVar5,puVar1), iVar2 == 0)) {
    FUN_100486124(lVar4);
  }
  else {
    plVar6 = (long *)FUN_100485fa8(lVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Skye_PiercingBarrageImpact_10185ca68);
    local_60 = (code *)CONCAT44(local_60._4_4_,0x3f19999a);
    local_58 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  }
  fVar7 = (float)FUN_1003dfe60(lVar3,0,5,0x19,0);
  plVar6 = (long *)FUN_100485fa8(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Skye_BarrageSlow_10185ca08);
  local_60 = (code *)CONCAT44(local_60._4_4_,1.0 / fVar7 + 0.1);
  local_58 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  lVar4 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar4 + 0x10);
  return;
}




void FUN_10047d9c4(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  uVar2 = FUN_1004743d4();
  *param_2 = "Effect_Skye_B_Shot";
  param_2[4] = "Effect_Skye_B_Shot_Impact";
  param_2[0xc] = "Sound_Skye_Ability_B_Hit_1";
  param_2[0xd] = "Sound_Skye_Ability_B_Hit_2";
  param_2[0xe] = "Sound_Skye_Ability_B_Hit_3";
  param_2[0xf] = "Sound_Skye_Ability_B_Hit_4";
  param_2[0x10] = "Sound_Skye_Ability_B_Hit_5";
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar5 = FUN_1003dfe60(uVar2,2,4,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  pcVar1 = "LeftMissileBezierHandle";
  if (*(float *)(param_1 + 0xf8) <= 0.0) {
    pcVar1 = "RightMissileBezierHandle";
  }
  FUN_1004769e4(param_1 + 0x120,param_1,pcVar1);
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  uVar5 = FUN_1003dfe60(uVar2,2,6,0x19,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar5,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Skye_HitBy_B_Missiles_10185ca10);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_40);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_10047db60(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_TurretCore";
  param_2[4] = "Effect_TurretImpact";
  param_2[0xc] = "build://Sounds/Turret.assetbundle/turret_hits_player_01.mp3";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41200000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_100488c1c;
  *(undefined8 *)(lVar2 + 0x28) = 0x400000003;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  lVar2 = FUN_100486650(lVar1);
  lVar3 = FUN_1004a00bc(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 1;
  plVar4 = (long *)FUN_100488d18(lVar2 + 0x58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Turret_TurretDamageAmp_10185c278)
  ;
  local_40[0] = 0x40800000;
  local_38 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_40);
  FUN_100486124(lVar1);
  return;
}




void FUN_10047dc78(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_TurretProjectile_5v5";
  param_2[4] = "Effect_TurretImpact_5v5";
  param_2[0xc] = "build://Sounds/Turret.assetbundle/turret_hits_player_01.mp3";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41700000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_100488c1c;
  *(undefined8 *)(lVar2 + 0x28) = 0x400000003;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  lVar2 = FUN_100486650(lVar1);
  lVar3 = FUN_1004a00bc(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 1;
  plVar4 = (long *)FUN_100488d18(lVar2 + 0x58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Turret_TurretDamageAmp_10185c278)
  ;
  local_40[0] = 0x40800000;
  local_38 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_40);
  lVar1 = FUN_100486124(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_10047dd98(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  code *local_70;
  undefined4 local_68;
  
  *param_2 = "Effect_VainCrystal_A_Projectile";
  param_2[4] = "Effect_VainCrystal_A_Impact";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3e800000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3e4ccccd;
  *(undefined1 *)(param_2 + 0x16) = 1;
  param_2[0xc] = "build://Sounds/5v5/SFX/sfx_halcyon_missles_impact_01.mp3";
  uVar5 = FUN_1004743d4();
  iVar1 = _rand();
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  iVar1 = iVar1 % 2;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  iVar2 = _rand();
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar9 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar10 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar11 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) =
       SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) /
       ((float)iVar2 * 1.8626451e-09 + 16.0);
  iVar2 = _rand();
  iVar3 = _rand();
  iVar4 = _rand();
  FUN_100476ac4((float)iVar2 * 1.1175871e-10 + 0.38,
                ((float)iVar3 * 9.3132266e-11 + 0.1) * (float)iVar1,
                (float)iVar4 * 6.9849196e-11 + 0.1,param_1 + 0x120,param_1);
  lVar6 = FUN_10049fdbc(param_1 + 0x100);
  *(undefined4 *)(lVar6 + 0x48) = 0x3e4ccccd;
  *(undefined1 *)(lVar6 + 0x4c) = 1;
  lVar6 = lVar6 + 0x10;
  lVar7 = FUN_10049ff4c(lVar6);
  *(code **)(lVar7 + 0x18) = FUN_100488d68;
  *(undefined8 *)(lVar7 + 0x28) = 0x200000003;
  *(undefined4 *)(lVar7 + 0x30) = 0;
  plVar8 = (long *)FUN_100485fa8(lVar6);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))
                             (plVar8,PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460);
  local_70 = FUN_100488e38;
  local_68 = 3;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,&local_70);
  FUN_1003dfe60(uVar5,1,1,0x19,0);
  (**(code **)(*plVar8 + 0x38))(plVar8);
  if (0.9 < *(float *)(param_1 + 0xf8)) {
    lVar7 = FUN_100486600(lVar6);
    *(undefined **)(lVar7 + 0x10) = PTR_s_Buff_Nexus_5v5_Target_Warning_10185b150;
    lVar7 = FUN_100486600(lVar6);
    *(undefined **)(lVar7 + 0x10) = PTR_s_Buff_Nexus_5v5_Target_Laser_10185b148;
    *(undefined1 *)(lVar7 + 0x18) = 1;
  }
  lVar6 = FUN_100486124(lVar6);
  *(undefined1 *)(lVar6 + 0x18) = 1;
  return;
}




void FUN_10047e030(undefined8 param_1,undefined8 param_2)

{
  FUN_100488e4c(0x41a00000,param_1,param_2,0);
  return;
}




void FUN_10047e03c(undefined8 param_1,undefined8 param_2)

{
  FUN_100488e4c(0x41f00000,param_1,param_2,2);
  return;
}




void FUN_10047e048(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *local_40;
  undefined4 local_38;
  
  lVar3 = FUN_1004743d4();
  *param_2 = "Effect_Vox_Resonance_Proj";
  param_2[4] = "Effect_Vox_Resonance_Impact";
  param_2[0xc] = "Sound_Vox_Ability_B_Ricochet_Impact_1";
  param_2[0xd] = "Sound_Vox_Ability_B_Ricochet_Impact_2";
  param_2[0xe] = "Sound_Vox_Ability_B_Ricochet_Impact_3";
  param_2[0xf] = "Sound_Vox_Ability_B_Ricochet_Impact_4";
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41000000;
  lVar4 = FUN_10049fdbc(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  lVar5 = FUN_10049ff4c(lVar4);
  *(code **)(lVar5 + 0x18) = FUN_100488f10;
  *(undefined8 *)(lVar5 + 0x28) = 0x100000001;
  *(undefined4 *)(lVar5 + 0x30) = 0;
  plVar6 = (long *)FUN_100485fa8(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Vox_Resonance_10185b168);
  local_40 = FUN_1003c1630;
  local_38 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
  puVar1 = PTR_s_Buff_Vox_Talent_EchoChamber_10185c928;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    plVar6 = (long *)FUN_100485fa8(lVar4);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Vox_EchoChamber_Bounce_10185c930);
    local_40 = (code *)CONCAT44(local_40._4_4_,0x3dcccccd);
    local_38 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
  }
  FUN_100486124(lVar4);
  return;
}




void FUN_10047e1d4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Vox_Resonance_Proj";
  param_2[4] = "Effect_Vox_Resonance_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41000000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_10048905c;
  *(undefined8 *)(lVar2 + 0x28) = 0x100000001;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Vox_Resonance_10185b168);
  local_30 = FUN_1003c1630;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  FUN_100486124(lVar1);
  return;
}




void FUN_10047e2c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_Vox_Proj";
  param_2[4] = "Effect_Vox_Proj_Impact";
  param_2[0xc] = "Sound_Vox_Attack_Impact_1";
  param_2[0xd] = "Sound_Vox_Attack_Impact_2";
  param_2[0xe] = "Sound_Vox_Attack_Impact_3";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41200000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"BASE_DAMAGE",0);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047e38c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Vox_Ult_Shot";
  param_2[4] = "Effect_Vox_Proj_Impact";
  param_2[0xc] = "Sound_Vox_Ability_C_FirstShot_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41f00000,param_1 + 0x120,param_1,2);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Vox_Resonance_10185b168);
  local_40 = FUN_1003c1630;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"InitialShockDamage",2);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047e4bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Vox_Ult_Proj";
  param_2[4] = "Effect_Vox_Proj_Impact";
  param_2[0xc] = "Sound_Vox_Ability_C_SecondShot_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41f00000,param_1 + 0x120,param_1,2);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ff4c(lVar1);
  *(code **)(lVar2 + 0x18) = FUN_100489188;
  *(undefined8 *)(lVar2 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Vox_Resonance_Proc_10185c908);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3dcccccd);
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_100485f64);
  plVar3 = (long *)FUN_100485fa8(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Silence_10185a560);
  local_40 = FUN_1004891c0;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_100485f64);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047e644(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  lVar2 = FUN_1004743d4();
  *param_2 = "Effect_Idris_AA_Chakram";
  param_2[4] = "Effect_Idris_AA_Chakram_Impact";
  param_2[0xc] = "Sound_Idras_Ranged_Attack_Impact_2";
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003af8d8(*(undefined4 *)(lVar4 + 0x38c));
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar4 = FUN_10049fdbc(param_1 + 0x100);
  puVar1 = PTR_s_Buff_Idris_Talent_PathOfTheSeeke_10185cd58;
  lVar2 = FUN_100345d90(*(undefined4 *)(lVar2 + 0x260));
  if ((lVar2 == 0) || (uVar5 = FUN_1003a47d0(lVar2,puVar1), (uVar5 & 1) == 0)) {
    uVar7 = 0;
    pcVar6 = FUN_100486908;
  }
  else {
    uVar7 = 1;
    pcVar6 = FUN_1004753b0;
  }
  lVar4 = lVar4 + 0x10;
  lVar2 = FUN_10049ff4c(lVar4);
  *(code **)(lVar2 + 0x18) = pcVar6;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = uVar7;
  lVar2 = FUN_10049ff4c(lVar4);
  *(code **)(lVar2 + 0x18) = FUN_100486954;
  *(undefined8 *)(lVar2 + 0x28) = 0x100000001;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar4);
  return;
}




void FUN_10047e780(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar3 = FUN_1004743d4();
  *param_2 = "Effect_Idris_AA_EmpoweredChakram";
  param_2[4] = "Effect_Idris_AA_EmpoweredChakram_Impact";
  param_2[0xc] = "Sound_Idras_Ranged_Crit_Attack_Impact";
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003af8d8(*(undefined4 *)(lVar5 + 900));
  *(undefined4 *)(param_2 + 0x15) = uVar6;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar5 = FUN_10049fdbc(param_1 + 0x100);
  puVar1 = PTR_s_Buff_Idris_Talent_PathOfTheSeeke_10185cd58;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar3 == 0) || (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 == 0)) {
    lVar3 = FUN_10049ff4c(lVar5 + 0x10);
    *(code **)(lVar3 + 0x18) = FUN_1004869b8;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined4 *)(lVar3 + 0x30) = 0;
  }
  else {
    lVar3 = FUN_10049ff4c(lVar5 + 0x10);
    *(code **)(lVar3 + 0x20) = FUN_100486a28;
  }
  lVar3 = FUN_10049ff4c(lVar5 + 0x10);
  *(code **)(lVar3 + 0x18) = FUN_100486a78;
  *(undefined8 *)(lVar3 + 0x28) = 0x100000001;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  FUN_100486124(lVar5 + 0x10);
  return;
}




void FUN_10047e8c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = "Effect_Idris_A_MarkerShot";
  param_2[4] = "Effect_Idris_A_MarkerShot_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xcc) = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047e94c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  *param_2 = "Effect_Idris_B_Chakram";
  param_2[0x11] = "u_Crystal_Path";
  *(undefined4 *)(param_2 + 0x12) = 1;
  uVar2 = FUN_1004743d4();
  iVar1 = FUN_1003af01c(uVar2,0);
  uVar7 = 0x3f800000;
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  *(undefined4 *)((long)param_2 + 0x94) = uVar7;
  *(undefined4 *)(param_1 + 0x88) = 0x3ecccccd;
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xc0;
  *(undefined4 *)(param_1 + 0x128) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 300) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x130) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x13c) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x134) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa58;
  FUN_10047717c(0x41980000,0x41180000,param_1 + 0x120,param_1);
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xfc;
  *(undefined4 *)(param_1 + 0x138) = 0x3f333333;
  fVar8 = *(float *)(param_1 + 0x13c);
  fVar9 = *(float *)(param_1 + 0x134);
  fVar6 = (float)FUN_100477248();
  *(float *)(param_1 + 0x134) = (fVar9 * fVar8 - fVar6) / fVar8 + 0.7;
  FUN_1003a4e5c(local_50,PTR_s_Buff_Idris_DontCatch_10185aaa0);
  *(undefined4 *)(param_1 + 0x144) = local_50[0];
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 8;
  lVar5 = param_1 + 0x100;
  lVar3 = FUN_10049fe0c(lVar5);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  plVar4 = (long *)FUN_10048602c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage on Passthrough",3);
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Idris_B_ChakramImpact_10185cd48);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  lVar3 = FUN_10049fe0c(lVar5);
  FUN_1004747d0(param_1);
  *(undefined8 *)(lVar3 + 0x40) = 0x4000020100000000;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_1004a0128(lVar3 + 0x10);
  *(undefined4 *)(lVar3 + 0x10) = 1;
  *(code **)(lVar3 + 0x18) = FUN_100486afc;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  lVar5 = FUN_10049fefc(lVar5);
  FUN_100486124(lVar5 + 0x10);
  return;
}




void FUN_10047eb60(long param_1,long param_2)

{
  long lVar1;
  
  *(char **)(param_2 + 0x20) = "Effect_Idris_C_MarkerShot_Impact";
  *(char **)(param_2 + 0x30) = "Effect_Idris_C_MarkerShot";
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10047ebe0(undefined8 param_1,undefined8 param_2)

{
  FUN_100489238(param_1,param_2,0);
  return;
}




void FUN_10047ebe8(undefined8 param_1,undefined8 param_2)

{
  FUN_100489238(param_1,param_2,0);
  return;
}




void FUN_10047ebf0(undefined8 param_1,undefined8 param_2)

{
  FUN_100489238(param_1,param_2,2);
  return;
}




void FUN_10047ebf8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Lorelai_B_Proj";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar4 = FUN_1003dfe60(uVar1,1,7,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  FUN_100476ac4(0x3f4ccccd,0,0x3e4ccccd,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = FUN_1004a0178(lVar2 + 0x10);
  *(char **)(lVar3 + 0x10) = "*Lorelai_Splashdown*";
  *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) | 1;
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_10047ed10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Lorelai_B_Emp_Proj";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar4 = FUN_1003dfe60(uVar1,1,8,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  FUN_100476ac4(0,0,0,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = FUN_1004a0178(lVar2 + 0x10);
  *(char **)(lVar3 + 0x10) = "*Lorelai_Splashdown*";
  *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) | 1;
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_10047ee20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Varya_A_Projectile";
  param_2[4] = "Effect_Varya_A_Impact";
  param_2[0xc] = "Sound_Varya_Ability_A_Spear_Impact_1";
  param_2[0xd] = "Sound_Varya_Ability_A_Spear_Impact_2";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003c7e38(*(undefined4 *)(lVar2 + 0x460));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xff;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41f00000,param_1 + 0x120,param_1,0);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x440000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Varya_A_Impact_10185c5e0);
  local_40[0] = 0x3e99999a;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10047ef68(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3fa66666;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Kensei_A_DealDamage_10185b308);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3e4ccccd);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_100486650(lVar2 + 0x10);
  lVar4 = FUN_1004a0010(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Kensei_A_Slow_10185b310);
  local_40 = FUN_1003c8f60;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  return;
}




void FUN_10047f09c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_30;
  undefined4 local_28;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3fa66666;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Kensei_C_EffectOnHit_10185cfa8);
  local_30 = FUN_100489330;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  lVar2 = FUN_100486650(lVar2 + 0x10);
  lVar4 = FUN_1004a0010(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_100489344;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  return;
}




void FUN_10047f1c8(undefined8 param_1,undefined8 param_2)

{
  FUN_100489358(param_1,param_2,0);
  return;
}




void FUN_10047f1d0(undefined8 param_1,undefined8 param_2)

{
  FUN_100489358(param_1,param_2,0);
  return;
}




void FUN_10047f1d8(undefined8 param_1,undefined8 param_2)

{
  FUN_100489358(param_1,param_2,2);
  return;
}




void FUN_10047f1e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Magnus_A_MainMissile";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff4c;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xcc;
  *(undefined4 *)(param_1 + 0x88) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,0,4,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,"PRIMARY_DAMAGE");
  (**(code **)(*plVar3 + 0x30))(plVar3,0);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Magnus_A_MarkCheck_10185cfd0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3e99999a);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Magnus_Perk_SpellMark_10185b368);
  local_40 = FUN_1003c9aec;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10047f374(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  code *local_50;
  undefined4 local_48;
  
  uVar5 = FUN_1004743d4();
  *param_2 = "Effect_Magnus_A_SecondaryMissile";
  param_2[4] = "Effect_Magnus_A_SecondaryImpact";
  param_2[0xc] = "Sound_Magnus_Ability_A_Impact";
  uVar6 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  uVar9 = FUN_1003c9788(*(undefined4 *)(lVar7 + 0x55c));
  *(undefined4 *)(param_2 + 0x15) = uVar9;
  iVar1 = _rand();
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  iVar1 = iVar1 % 2;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  fVar10 = (float)FUN_1003dfe60(uVar5,0,5,0x19,0);
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar11 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar12 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar13 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13) / fVar10;
  iVar2 = _rand();
  iVar3 = _rand();
  iVar4 = _rand();
  FUN_100476ac4((float)iVar2 * 4.656614e-11 + 0.45,
                ((float)iVar3 * 1.8626452e-10 + 0.15) * (float)iVar1,
                (float)iVar4 * 9.313228e-11 + 0.65,param_1 + 0x120,param_1);
  lVar7 = FUN_10049fdbc(param_1 + 0x100);
  lVar7 = lVar7 + 0x10;
  plVar8 = (long *)FUN_10048602c(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x20))(plVar8,"SECONDARY_DAMAGE");
  (**(code **)(*plVar8 + 0x30))(plVar8,0);
  plVar8 = (long *)FUN_100485fa8(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,PTR_s_Buff_Magnus_Perk_SpellMark_10185b368);
  local_50 = FUN_1003c9aec;
  local_48 = 3;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
  FUN_100486124(lVar7);
  return;
}




void FUN_10047f5a0(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *local_50;
  undefined4 local_48;
  
  *param_2 = "Effect_Magnus_B";
  *(undefined4 *)(param_1 + 0x88) = 0x3f4ccccd;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x1818;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x7c;
  *(undefined4 *)(param_1 + 0x128) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 300) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x130) = 0x7f7fffff;
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xc0;
  *(undefined8 *)(param_1 + 0x13c) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x134) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa58;
  FUN_10047717c(0x41600000,0x41180000,param_1 + 0x120,param_1);
  bVar1 = *(byte *)(param_1 + 0x148) & 0xfc;
  *(byte *)(param_1 + 0x148) = bVar1;
  *(undefined4 *)(param_1 + 0x138) = 0x3e99999a;
  fVar5 = *(float *)(param_1 + 0x13c);
  fVar6 = *(float *)(param_1 + 0x134);
  fVar4 = (float)FUN_100477248();
  *(float *)(param_1 + 0x134) = (fVar6 * fVar5 - fVar4) / fVar5 + 0.3;
  *(byte *)(param_1 + 0x148) = bVar1 | 8;
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x30))(plVar3,1);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Magnus_B_MarkCheck_10185cfd8);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3e99999a);
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Magnus_Perk_SpellMark_10185b368);
  local_50 = FUN_1003c9aec;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10047f768(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  code *local_60;
  undefined4 local_58;
  
  uVar5 = FUN_1004743d4();
  *param_2 = "Effect_Magnus_A_MainMissile";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff4c;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xcc;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  iVar1 = _rand();
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  iVar1 = iVar1 % 2;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  fVar8 = (float)FUN_1003dfe60(uVar5,0,5,0x19,0);
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar9 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar10 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar11 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) / fVar8;
  iVar2 = _rand();
  iVar3 = _rand();
  iVar4 = _rand();
  FUN_100476ac4((float)iVar2 * 4.656614e-11 + 0.45,
                ((float)iVar3 * 9.313225e-11 + 0.25) * (float)iVar1,
                (float)iVar4 * 9.313228e-11 + 0.65,param_1 + 0x120,param_1);
  lVar6 = FUN_10049fdbc(param_1 + 0x100);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_10048602c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x20))(plVar7,"PRIMARY_DAMAGE");
  (**(code **)(*plVar7 + 0x30))(plVar7,0);
  plVar7 = (long *)FUN_100485fa8(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Magnus_A_MarkCheck_10185cfd0);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3e99999a);
  local_58 = 1;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
  plVar7 = (long *)FUN_100485fa8(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Magnus_Perk_SpellMark_10185b368);
  local_60 = FUN_1003c9aec;
  local_58 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
  FUN_100486124(lVar6);
  return;
}




void FUN_10047f9b0(undefined8 param_1,undefined8 param_2)

{
  FUN_100489998(param_1,param_2,0);
  return;
}




void FUN_10047f9b8(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  code *local_50;
  undefined4 local_48;
  
  *param_2 = "Effect_Kinetic_BasicAttack_Mini";
  param_2[4] = "Effect_Kinetic_BasicAttack_Mini_Impact";
  param_2[0xc] = "Sound_Kinetic_Mini_Projectiles_Impact_01";
  param_2[0xd] = "Sound_Kinetic_Mini_Projectiles_Impact_02";
  param_2[0xe] = "Sound_Kinetic_Mini_Projectiles_Impact_03";
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar8 = FUN_1003c9d10(*(undefined4 *)(lVar6 + 0x4c8));
  *(undefined4 *)(param_2 + 0x15) = uVar8;
  iVar1 = _rand();
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  iVar1 = iVar1 % 2;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  iVar2 = _rand();
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar9 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar10 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar11 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) =
       SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) /
       ((float)iVar2 * 4.656613e-09 + 10.0);
  iVar2 = _rand();
  iVar3 = _rand();
  iVar4 = _rand();
  FUN_100476ac4((float)iVar2 * 2.7939678e-10 + 0.2,
                ((float)iVar3 * 6.984921e-11 + 0.45) * (float)iVar1,
                (float)iVar4 * 6.9849196e-11 + 0.1,param_1 + 0x120,param_1);
  lVar6 = FUN_10049fdbc(param_1 + 0x100);
  plVar7 = (long *)FUN_10048602c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
  local_50 = FUN_100489a94;
  local_48 = 3;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_50,0,1);
  (**(code **)(*plVar7 + 0x68))(plVar7,"Kinetic_Perk_WeaponDamage");
  FUN_100486124(lVar6 + 0x10);
  return;
}




void FUN_10047fbcc(undefined8 param_1,undefined8 param_2)

{
  FUN_100489998(param_1,param_2,2);
  return;
}




void FUN_10047fbd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Kinetic_A";
  param_2[4] = "Effect_Kinetic_A_Impact";
  param_2[0xc] = "Sound_Kinetic_A_Impact";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003c9d10(*(undefined4 *)(lVar3 + 0x4cc));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,0,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x68))(plVar4,"Kinetic_A_Damage");
  plVar4 = (long *)FUN_100488d18(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_10185b380);
  local_40 = FUN_1003ca020;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
  FUN_100486124(lVar3);
  lVar3 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10047fd68(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  code *local_50;
  undefined4 local_48;
  
  lVar4 = FUN_1004743d4();
  *param_2 = "Effect_Kinetic_A2";
  param_2[4] = "Effect_Kinetic_A2_Impact";
  param_2[0xc] = "Sound_Kinetic_A_Empowered_Impact";
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar12 = FUN_1003c9d10(*(undefined4 *)(lVar6 + 0x4cc));
  *(undefined4 *)(param_2 + 0x15) = uVar12;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(lVar4,0,5,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar6 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar6 + 0x40) = 0x40000;
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_10048602c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"DAMAGE",0);
  local_50 = FUN_100489aa0;
  local_48 = 4;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x88))(plVar7,&local_50);
  (**(code **)(*plVar7 + 0x68))(plVar7,"Kinetic_A_Damage");
  plVar7 = (long *)FUN_100488d18(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))
                             (plVar7,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_10185b380);
  local_50 = FUN_1003ca020;
  local_48 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
  plVar7 = (long *)FUN_100485fa8(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Kinetic_A2_Slow_10185cff0);
  local_50 = FUN_100489ad4;
  local_48 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
  puVar2 = PTR_s_Buff_Kinetic_Talent_TalentC_10185d000;
  lVar8 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar8 != 0) && (iVar3 = FUN_1003a47d0(lVar8,puVar2), iVar3 != 0)) {
    lVar8 = FUN_100486650(lVar6);
    lVar9 = FUN_1004a01c8(lVar8 + 0x10);
    if (PTR_s_Ability__Kinetic__B_101859b98 == (undefined *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x811c9dc5;
      cVar1 = *PTR_s_Ability__Kinetic__B_101859b98;
      pcVar11 = PTR_s_Ability__Kinetic__B_101859b98;
      while (cVar1 != '\0') {
        pcVar11 = pcVar11 + 1;
        uVar10 = (uVar10 ^ (int)cVar1) * 0x1000193;
        cVar1 = *pcVar11;
      }
    }
    *(uint *)(lVar9 + 8) = uVar10;
    *(undefined4 *)(lVar9 + 0xc) = 1;
    plVar7 = (long *)FUN_100486d38(lVar8 + 0x58);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))();
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,PTR_s_Ability__Kinetic__B_101859b98);
    local_50 = (code *)((ulong)local_50 & 0xffffffff00000000);
    local_48 = 1;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_50);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x58) + 0x58);
  if ((lVar4 != 0) && (0x1000 < (*(uint *)(lVar4 + 0x238) & 0x1c00))) {
    plVar7 = (long *)FUN_100485fa8(lVar6);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Stunned_10185a208);
    local_50 = FUN_100489ae8;
    local_48 = 3;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
  }
  FUN_100486124(lVar6);
  lVar6 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar6 + 0x10);
  return;
}




undefined8 * thunk_FUN_100470b24(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_10149a1c0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  uVar1 = DAT_101dc0b88;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x39) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x3b) = 0xff7fffff;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xff7fffff;
  FUN_100473ea8(param_1 + 0x42,10);
  return param_1;
}




undefined8 * thunk_FUN_1004714fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a220;
  param_1[5] = 0;
  uVar2 = DAT_101dc0b88;
  lVar3 = 0x30;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x46);
  lVar3 = 0x230;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x50);
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0xff;
  param_1[0x52] = 0;
  lVar3 = FUN_1010a0298(param_1,DAT_101867390);
  param_1[5] = lVar3;
  *(code **)(lVar3 + 0x1c8) = FUN_1004715d0;
  *(undefined8 **)(lVar3 + 0x1d0) = param_1;
  *(code **)(lVar3 + 0x1d8) = FUN_1004715dc;
  *(undefined8 **)(lVar3 + 0x1e0) = param_1;
  *(code **)(lVar3 + 0x1e8) = FUN_1004715e8;
  *(undefined8 **)(lVar3 + 0x1f0) = param_1;
  *(undefined4 *)(lVar3 + 0x1c4) = 1;
  return param_1;
}




undefined8 * thunk_FUN_100471edc(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a250;
  param_1[5] = &PTR_FUN_10149a280;
  param_1[7] = 0;
  uVar1 = FUN_1004d2524(&DAT_101159fdc);
  uVar1 = FUN_100015208(&DAT_101159fdc,uVar1,0x12345678);
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[9] = 0;
  param_1[10] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return param_1;
}




undefined8 * thunk_FUN_100473fd4(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a5f0;
  param_1[5] = &PTR_FUN_10149a620;
  *(undefined8 *)((long)param_1 + 0x34) = 0xeeffffffff;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 100) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x14) = DAT_101dc0b88;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 0x41f0000000000000;
  param_1[0x1b] = 0;
  *(undefined2 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)((long)param_1 + 0xec) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1e) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}

