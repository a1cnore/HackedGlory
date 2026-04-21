// functions/00ef3 — 27 functions
#include "libGameKindred.h"




void FUN_00ef30b4(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) +
                   (long)(int)(*(uint *)(param_1 + 0x38) &
                              param_2 * -0x72594cbd + param_3 * -0x27e9c7bf) * 8);
  while ((lVar1 != 0 &&
         ((((lVar2 = *(long *)(lVar1 + 8), lVar2 == 0 || (*(int *)(lVar2 + 8) != param_2)) ||
           (*(int *)(lVar2 + 0xc) != param_3)) || (*(int *)(lVar2 + 0x10) != param_4))))) {
    lVar1 = *(long *)(lVar1 + 0x60);
  }
  return;
}




int FUN_00ef3118(long param_1,int param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) +
                   (long)(int)(*(uint *)(param_1 + 0x38) &
                              param_2 * -0x72594cbd + param_3 * -0x27e9c7bf) * 8);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      lVar3 = *(long *)(lVar2 + 8);
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 8) == param_2)) && (iVar1 < param_5)) &&
         (*(int *)(lVar3 + 0xc) == param_3)) {
        *(long *)(param_4 + (long)iVar1 * 8) = lVar2;
        iVar1 = iVar1 + 1;
      }
      lVar2 = *(long *)(lVar2 + 0x60);
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}




void FUN_00ef3190(undefined8 param_1,ulong param_2,ulong param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  switch(param_4) {
  case 0:
    param_2 = (ulong)(iVar1 + 1);
    goto switchD_00ef31ac_default;
  case 1:
    param_2 = (ulong)(iVar1 + 1);
    break;
  case 2:
    break;
  case 3:
    param_2 = (ulong)(iVar1 - 1);
    break;
  case 4:
    param_2 = (ulong)(iVar1 - 1);
    goto switchD_00ef31ac_default;
  case 5:
    param_2 = (ulong)(iVar1 - 1);
  case 6:
    goto switchD_00ef31ac_caseD_6;
  case 7:
    param_2 = (ulong)(iVar1 + 1);
    goto switchD_00ef31ac_caseD_6;
  default:
    goto switchD_00ef31ac_default;
  }
  param_3 = (ulong)((int)param_3 + 1);
switchD_00ef31ac_default:
  FUN_00ef3118(param_1,param_2,param_3,param_5,param_6);
  return;
switchD_00ef31ac_caseD_6:
  param_3 = (ulong)((int)param_3 - 1);
  goto switchD_00ef31ac_default;
}




int FUN_00ef31f0(long param_1,int param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) +
                   (long)(int)(*(uint *)(param_1 + 0x38) &
                              param_2 * -0x72594cbd + param_3 * -0x27e9c7bf) * 8);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      lVar3 = *(long *)(lVar2 + 8);
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 8) == param_2)) && (iVar1 < param_5)) &&
         (*(int *)(lVar3 + 0xc) == param_3)) {
        *(long *)(param_4 + (long)iVar1 * 8) = lVar2;
        iVar1 = iVar1 + 1;
      }
      lVar2 = *(long *)(lVar2 + 0x60);
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}




uint FUN_00ef3268(long param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = *(int **)(*(long *)(param_1 + 0x40) +
                    (long)(int)(*(uint *)(param_1 + 0x38) &
                               param_2 * -0x72594cbd + param_3 * -0x27e9c7bf) * 8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    lVar2 = *(long *)(piVar1 + 2);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 8) == param_2)) && (*(int *)(lVar2 + 0xc) == param_3))
       && (*(int *)(lVar2 + 0x10) == param_4)) break;
    piVar1 = *(int **)(piVar1 + 0x18);
  }
  return *piVar1 << (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f) |
         (int)((ulong)((long)piVar1 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
         (ulong)(*(uint *)(param_1 + 0x60) & 0x1f);
}




uint * FUN_00ef3304(long param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    uVar1 = param_2 >> (ulong)(*(uint *)(param_1 + 0x60) & 0x1f) &
            (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U;
    puVar2 = (uint *)0x0;
    if (((int)uVar1 < *(int *)(param_1 + 0x30)) &&
       (puVar2 = (uint *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68),
       *puVar2 !=
       ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
       param_2 >> (ulong)(*(uint *)(param_1 + 0x60) + *(uint *)(param_1 + 0x5c) & 0x1f)))) {
      puVar2 = (uint *)0x0;
    }
  }
  return puVar2;
}




undefined4 FUN_00ef3370(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




long FUN_00ef3378(long param_1,int param_2)

{
  return *(long *)(param_1 + 0x50) + (long)param_2 * 0x68;
}




long FUN_00ef3388(long param_1,int param_2)

{
  return *(long *)(param_1 + 0x50) + (long)param_2 * 0x68;
}




void FUN_00ef3398(long param_1,float *param_2,int *param_3,int *param_4)

{
  *param_3 = (int)((*param_2 - *(float *)(param_1 + 0x1c)) / *(float *)(param_1 + 0x28));
  *param_4 = (int)((param_2[2] - *(float *)(param_1 + 0x24)) / *(float *)(param_1 + 0x2c));
  return;
}




undefined4 FUN_00ef33d4(long param_1,uint param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  
  if (param_2 == 0) {
    uVar3 = 0x80000000;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U
    ;
    uVar3 = 0x80000008;
    if (uVar1 < *(uint *)(param_1 + 0x30)) {
      puVar4 = (uint *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68);
      if (*puVar4 ==
          ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
          param_2 >> (ulong)(uVar2 + *(uint *)(param_1 + 0x5c) & 0x1f))) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68 + 8);
        if ((lVar5 != 0) &&
           (param_2 = (1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2, uVar3 = 0x80000008,
           param_2 < *(uint *)(lVar5 + 0x18))) {
          *param_3 = puVar4;
          *param_4 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68 + 0x10) +
                     (ulong)param_2 * 0x20;
          uVar3 = 0x40000000;
        }
      }
    }
  }
  return uVar3;
}




void FUN_00ef3494(long param_1,uint param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U;
  *param_3 = *(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68;
  *param_4 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68 + 0x10) +
             (ulong)((1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2) * 0x20;
  return;
}




bool FUN_00ef34e0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  if (param_2 == 0) {
    bVar3 = false;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U
    ;
    bVar3 = false;
    if (uVar1 < *(uint *)(param_1 + 0x30)) {
      bVar3 = false;
      if ((*(uint *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68) ==
           ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
           param_2 >> (ulong)(uVar2 + *(uint *)(param_1 + 0x5c) & 0x1f))) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar1 * 0x68 + 8), bVar3 = false,
         lVar4 != 0)) {
        bVar3 = ((1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2) < *(uint *)(lVar4 + 0x18);
      }
    }
  }
  return bVar3;
}




void FUN_00ef357c(long param_1,uint param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 local_170 [32];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar5 = 0x80000008;
  if (param_2 != 0) {
    uVar4 = param_2 >> (ulong)(*(uint *)(param_1 + 0x60) & 0x1f) &
            (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U;
    if ((int)uVar4 < *(int *)(param_1 + 0x30)) {
      lVar14 = *(long *)(param_1 + 0x50);
      puVar10 = (uint *)(lVar14 + (ulong)uVar4 * 0x68);
      if (*puVar10 ==
          ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
          param_2 >> (ulong)(*(uint *)(param_1 + 0x60) + *(uint *)(param_1 + 0x5c) & 0x1f))) {
        uVar9 = (ulong)uVar4;
        plVar17 = (long *)(lVar14 + uVar9 * 0x68 + 8);
        iVar11 = *(int *)(*plVar17 + 8);
        iVar6 = *(int *)(*plVar17 + 0xc);
        uVar4 = iVar11 * -0x72594cbd + iVar6 * -0x27e9c7bf & *(uint *)(param_1 + 0x38);
        puVar8 = *(uint **)(*(long *)(param_1 + 0x40) + (long)(int)uVar4 * 8);
        if (puVar8 != (uint *)0x0) {
          puVar7 = (uint *)0x0;
          do {
            if (puVar8 == puVar10) {
              uVar5 = *(undefined8 *)(lVar14 + uVar9 * 0x68 + 0x60);
              if (puVar7 == (uint *)0x0) {
                *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)(int)uVar4 * 8) = uVar5;
                iVar11 = *(int *)(*plVar17 + 8);
                iVar6 = *(int *)(*plVar17 + 0xc);
              }
              else {
                *(undefined8 *)(puVar7 + 0x18) = uVar5;
              }
              break;
            }
            puVar1 = puVar8 + 0x18;
            puVar7 = puVar8;
            puVar8 = *(uint **)puVar1;
          } while (*(uint **)puVar1 != (uint *)0x0);
        }
        uVar4 = FUN_00ef3118(param_1,iVar11,iVar6,local_170,0x20);
        if (0 < (int)uVar4) {
          uVar12 = (ulong)uVar4;
          puVar15 = local_170;
          do {
            if ((uint *)*puVar15 != puVar10) {
              FUN_00ef1ed0(param_1,(uint *)*puVar15,puVar10);
            }
            uVar12 = uVar12 - 1;
            puVar15 = puVar15 + 1;
          } while (uVar12 != 0);
        }
        iVar11 = 0;
        do {
          uVar4 = FUN_00ef3190(param_1,*(undefined4 *)(*plVar17 + 8),*(undefined4 *)(*plVar17 + 0xc)
                               ,iVar11,local_170,0x20);
          if (0 < (int)uVar4) {
            uVar12 = (ulong)uVar4;
            puVar15 = local_170;
            do {
              FUN_00ef1ed0(param_1,*puVar15,puVar10);
              uVar12 = uVar12 - 1;
              puVar15 = puVar15 + 1;
            } while (uVar12 != 0);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != 8);
        pbVar13 = (byte *)(lVar14 + uVar9 * 0x68 + 0x5c);
        if ((*pbVar13 & 1) == 0) {
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = *(undefined8 *)(lVar14 + uVar9 * 0x68 + 0x50);
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = *(undefined4 *)(lVar14 + uVar9 * 0x68 + 0x58);
          }
        }
        else {
          lVar16 = lVar14 + uVar9 * 0x68;
          FUN_00ef1268(*(undefined8 *)(lVar16 + 0x50));
          *(undefined8 *)(lVar16 + 0x50) = 0;
          *(undefined4 *)(lVar16 + 0x58) = 0;
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = 0;
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = 0;
          }
        }
        lVar14 = lVar14 + uVar9 * 0x68;
        pbVar13[0] = 0;
        pbVar13[1] = 0;
        pbVar13[2] = 0;
        pbVar13[3] = 0;
        memset((void *)(lVar14 + 4),0,0x4c);
        uVar5 = 0x40000000;
        uVar2 = (1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1;
        uVar4 = uVar2 & *puVar10 + 1;
        if ((uVar2 & *puVar10 + 1) == 0) {
          uVar4 = uVar4 + 1;
        }
        *puVar10 = uVar4;
        *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(param_1 + 0x48);
        *(uint **)(param_1 + 0x48) = puVar10;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




int FUN_00ef3828(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    return *(int *)(*(long *)(param_2 + 8) + 0x18) * 4 + 0xc;
  }
  return 0;
}




undefined8 FUN_00ef3848(long param_1,int *param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  
  if (param_2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(long *)(param_2 + 2) + 0x18) * 4 + 0xc;
  }
  if (param_4 < iVar3) {
    return 0x80000010;
  }
  uVar2 = *(uint *)(*(long *)(param_2 + 2) + 0x18);
  uVar4 = (ulong)uVar2;
  *param_3 = 0x1444e4d53;
  if (param_2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_2 << (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f) |
            (int)((ulong)((long)param_2 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
            (ulong)(*(uint *)(param_1 + 0x60) & 0x1f);
  }
  *(uint *)(param_3 + 1) = uVar5;
  if (0 < (int)uVar2) {
    puVar6 = (undefined2 *)(*(long *)(param_2 + 4) + 0x1c);
    pbVar7 = (byte *)((long)param_3 + 0xe);
    do {
      uVar4 = uVar4 - 1;
      *(undefined2 *)(pbVar7 + -2) = *puVar6;
      pbVar1 = (byte *)((long)puVar6 + 3);
      puVar6 = puVar6 + 0x10;
      *pbVar7 = *pbVar1 & 0x3f;
      pbVar7 = pbVar7 + 4;
    } while (uVar4 != 0);
  }
  return 0x40000000;
}




undefined8 FUN_00ef3908(long param_1,int *param_2,int *param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(param_2 + 2) + 0x18) * 4 + 0xc;
  }
  if (iVar2 <= param_4) {
    if (*param_3 != 0x444e4d53) {
      return 0x80000001;
    }
    if (param_3[1] != 1) {
      return 0x80000002;
    }
    if (param_3[2] ==
        (*param_2 << (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f) |
        (int)((ulong)((long)param_2 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
        (ulong)(*(uint *)(param_1 + 0x60) & 0x1f))) {
      uVar1 = (ulong)*(uint *)(*(long *)(param_2 + 2) + 0x18);
      if (0 < (int)*(uint *)(*(long *)(param_2 + 2) + 0x18)) {
        pbVar3 = (byte *)(*(long *)(param_2 + 4) + 0x1f);
        pbVar4 = (byte *)((long)param_3 + 0xe);
        do {
          uVar1 = uVar1 - 1;
          *(undefined2 *)(pbVar3 + -3) = *(undefined2 *)(pbVar4 + -2);
          *pbVar3 = *pbVar3 & 0xc0 | *pbVar4 & 0x3f;
          pbVar3 = pbVar3 + 0x20;
          pbVar4 = pbVar4 + 4;
        } while (uVar1 != 0);
      }
      return 0x40000000;
    }
  }
  return 0x80000008;
}




undefined8
FUN_00ef39ec(long param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  if (param_3 == 0) {
    return 0x80000000;
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar12 = param_3 >> (ulong)(uVar1 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U;
  uVar3 = 0x80000008;
  if ((uVar12 < *(uint *)(param_1 + 0x30)) &&
     (lVar5 = *(long *)(param_1 + 0x50),
     *(uint *)(lVar5 + (ulong)uVar12 * 0x68) ==
     ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
     param_3 >> (ulong)(uVar1 + *(uint *)(param_1 + 0x5c) & 0x1f)))) {
    uVar4 = (ulong)uVar12;
    lVar8 = *(long *)(lVar5 + uVar4 * 0x68 + 8);
    if ((lVar8 != 0) &&
       (param_3 = (1 << (ulong)(uVar1 & 0x1f)) - 1U & param_3, param_3 < *(uint *)(lVar8 + 0x18))) {
      lVar8 = *(long *)(lVar5 + uVar4 * 0x68 + 0x10);
      uVar7 = (ulong)param_3;
      if ((*(byte *)(lVar8 + uVar7 * 0x20 + 0x1f) & 0xc0) != 0x40) {
        return 0x80000000;
      }
      uVar12 = *(uint *)(lVar8 + uVar7 * 0x20);
      if (uVar12 == 0xffffffff) {
        uVar11 = 0;
        uVar9 = 1;
      }
      else {
        lVar10 = *(long *)(lVar5 + uVar4 * 0x68 + 0x20);
        uVar9 = 1;
        do {
          if (*(char *)(lVar10 + (ulong)uVar12 * 0xc + 8) == '\0') {
            bVar2 = *(int *)(lVar10 + (ulong)uVar12 * 0xc) == param_2;
            uVar9 = (ulong)bVar2;
            uVar11 = (ulong)!bVar2;
            goto LAB_00ef3b18;
          }
          uVar12 = *(uint *)(lVar10 + (ulong)uVar12 * 0xc + 4);
        } while (uVar12 != 0xffffffff);
        uVar11 = 0;
      }
LAB_00ef3b18:
      lVar8 = lVar8 + uVar7 * 0x20 + 4;
      lVar5 = *(long *)(lVar5 + uVar4 * 0x68 + 0x18);
      uVar3 = 0x40000000;
      puVar6 = (undefined4 *)(lVar5 + (ulong)*(ushort *)(lVar8 + uVar11 * 2) * 0xc);
      *param_4 = *puVar6;
      param_4[1] = puVar6[1];
      param_4[2] = puVar6[2];
      puVar6 = (undefined4 *)(lVar5 + (ulong)*(ushort *)(lVar8 + uVar9 * 2) * 0xc);
      *param_5 = *puVar6;
      param_5[1] = puVar6[1];
      param_5[2] = puVar6[2];
    }
  }
  return uVar3;
}




long FUN_00ef3b7c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U
    ;
    if (*(uint *)(param_1 + 0x30) <= uVar1) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x50);
    if (*(uint *)(lVar3 + (ulong)uVar1 * 0x68) !=
        ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
        param_2 >> (ulong)(uVar2 + *(uint *)(param_1 + 0x5c) & 0x1f))) {
      return 0;
    }
    uVar4 = (ulong)uVar1;
    lVar5 = *(long *)(lVar3 + uVar4 * 0x68 + 8);
    if (lVar5 != 0) {
      param_2 = (1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2;
      if (*(uint *)(lVar5 + 0x18) <= param_2) {
        return 0;
      }
      if ((*(byte *)(*(long *)(lVar3 + uVar4 * 0x68 + 0x10) + (ulong)param_2 * 0x20 + 0x1f) & 0xc0)
          != 0x40) {
        return 0;
      }
      return *(long *)(lVar3 + uVar4 * 0x68 + 0x48) +
             (ulong)(param_2 - *(int *)(lVar5 + 0x38)) * 0x24;
    }
  }
  return 0;
}




undefined8 FUN_00ef3c64(long param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U
    ;
    uVar3 = 0x80000008;
    if ((uVar1 < *(uint *)(param_1 + 0x30)) &&
       (lVar4 = *(long *)(param_1 + 0x50),
       *(uint *)(lVar4 + (ulong)uVar1 * 0x68) ==
       ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
       param_2 >> (ulong)(uVar2 + *(uint *)(param_1 + 0x5c) & 0x1f)))) {
      lVar5 = *(long *)(lVar4 + (ulong)uVar1 * 0x68 + 8);
      if ((lVar5 != 0) &&
         (param_2 = (1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2, param_2 < *(uint *)(lVar5 + 0x18)))
      {
        uVar3 = 0x40000000;
        *(undefined2 *)
         (*(long *)(lVar4 + (ulong)uVar1 * 0x68 + 0x10) + (ulong)param_2 * 0x20 + 0x1c) = param_3;
      }
    }
    return uVar3;
  }
  return 0x80000000;
}




undefined8 FUN_00ef3d1c(long param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U
    ;
    uVar3 = 0x80000008;
    if ((uVar1 < *(uint *)(param_1 + 0x30)) &&
       (lVar4 = *(long *)(param_1 + 0x50),
       *(uint *)(lVar4 + (ulong)uVar1 * 0x68) ==
       ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
       param_2 >> (ulong)(uVar2 + *(uint *)(param_1 + 0x5c) & 0x1f)))) {
      lVar5 = *(long *)(lVar4 + (ulong)uVar1 * 0x68 + 8);
      if ((lVar5 != 0) &&
         (param_2 = (1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2, param_2 < *(uint *)(lVar5 + 0x18)))
      {
        uVar3 = 0x40000000;
        *param_3 = *(undefined2 *)
                    (*(long *)(lVar4 + (ulong)uVar1 * 0x68 + 0x10) + (ulong)param_2 * 0x20 + 0x1c);
      }
    }
    return uVar3;
  }
  return 0x80000000;
}




undefined8 FUN_00ef3dd8(long param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U
    ;
    uVar3 = 0x80000008;
    if ((uVar1 < *(uint *)(param_1 + 0x30)) &&
       (lVar4 = *(long *)(param_1 + 0x50),
       *(uint *)(lVar4 + (ulong)uVar1 * 0x68) ==
       ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
       param_2 >> (ulong)(uVar2 + *(uint *)(param_1 + 0x5c) & 0x1f)))) {
      lVar5 = *(long *)(lVar4 + (ulong)uVar1 * 0x68 + 8);
      if ((lVar5 != 0) &&
         (param_2 = (1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2, param_2 < *(uint *)(lVar5 + 0x18)))
      {
        uVar3 = 0x40000000;
        lVar4 = *(long *)(lVar4 + (ulong)uVar1 * 0x68 + 0x10) + (ulong)param_2 * 0x20;
        *(byte *)(lVar4 + 0x1f) = *(byte *)(lVar4 + 0x1f) & 0xc0 | param_3 & 0x3f;
      }
    }
    return uVar3;
  }
  return 0x80000000;
}




undefined8 FUN_00ef3e98(long param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar1 = param_2 >> (ulong)(uVar2 & 0x1f) & (1 << (ulong)(*(uint *)(param_1 + 0x5c) & 0x1f)) - 1U
    ;
    uVar3 = 0x80000008;
    if ((uVar1 < *(uint *)(param_1 + 0x30)) &&
       (lVar4 = *(long *)(param_1 + 0x50),
       *(uint *)(lVar4 + (ulong)uVar1 * 0x68) ==
       ((1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
       param_2 >> (ulong)(uVar2 + *(uint *)(param_1 + 0x5c) & 0x1f)))) {
      lVar5 = *(long *)(lVar4 + (ulong)uVar1 * 0x68 + 8);
      if ((lVar5 != 0) &&
         (param_2 = (1 << (ulong)(uVar2 & 0x1f)) - 1U & param_2, param_2 < *(uint *)(lVar5 + 0x18)))
      {
        uVar3 = 0x40000000;
        *param_3 = *(byte *)(*(long *)(lVar4 + (ulong)uVar1 * 0x68 + 0x10) + (ulong)param_2 * 0x20 +
                            0x1f) & 0x3f;
      }
    }
    return uVar3;
  }
  return 0x80000000;
}




void FUN_00ef3f58(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_1 + 0x100) = 0xffff;
  do {
    ((undefined8 *)(param_1 + lVar1))[1] = auVar2._8_8_;
    *(undefined8 *)(param_1 + lVar1) = auVar2._0_8_;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x100);
  return;
}




void * FUN_00ef3f7c(void)

{
  void *__s;
  
  __s = (void *)thunk_FUN_00ef1250(0x60,0);
  if (__s != (void *)0x0) {
    memset(__s,0,0x60);
  }
  return __s;
}




void FUN_00ef3fbc(long param_1)

{
  if (param_1 != 0) {
    FUN_00ef4010(param_1);
    FUN_00ef1268(param_1);
    return;
  }
  return;
}




void FUN_00ef3ff4(void *param_1)

{
  memset(param_1,0,0x60);
  return;
}

