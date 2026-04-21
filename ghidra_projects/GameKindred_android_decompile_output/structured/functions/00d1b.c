// functions/00d1b — 57 functions
#include "libGameKindred.h"




void FUN_00d1b050(void)

{
  return;
}




undefined4 FUN_00d1b054(undefined8 param_1,long param_2)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  
  FUN_00ceace8();
  uVar2 = FUN_00ceb054();
  lVar3 = FUN_00e0b5c4();
  pfVar1 = (float *)(lVar3 + 0x24);
  if ((uVar2 & 1) == 0) {
    pfVar1 = (float *)(lVar3 + 0x20);
  }
  if ((uint)(int)*pfVar1 < *(uint *)(param_2 + 0x19bc)) {
    uVar4 = 1;
    if ((uint)(int)*pfVar1 < *(uint *)(param_2 + 0x19b8)) {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}




void FUN_00d1b0bc(void)

{
  return;
}




undefined4 FUN_00d1b0c0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  
  uVar8 = (ulong)*(uint *)(param_2 + 0x266);
  uVar2 = *(uint *)(param_2 + 0x245);
  uVar9 = 0;
  if (*(uint *)(param_2 + 0x266) != 0) {
    plVar5 = param_2 + 0x247;
    do {
      plVar3 = (long *)plVar5[-1];
      lVar4 = 0;
      if (plVar3 != (long *)0x0) {
        if ((int)*plVar5 == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          plVar5[-1] = 0;
          lVar4 = 0;
          *(int *)plVar5 = DAT_03214ce8;
        }
      }
      uVar10 = *(ushort *)(lVar4 + 0x88) & 0x1f;
      if ((uVar10 == 0x1f) || (1 < *(ushort *)(lVar4 + (ulong)uVar10 * 0x38 + 0x90) - 3)) {
        uVar9 = uVar9 + 1;
      }
      uVar8 = uVar8 - 1;
      plVar5 = plVar5 + 8;
    } while (uVar8 != 0);
  }
  plVar5 = (long *)*param_2;
  lVar4 = 0;
  if (plVar5 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *param_2 = 0;
      lVar4 = 0;
      *(int *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  uVar10 = *(ushort *)(lVar4 + 0x88) & 0x1f;
  if ((uVar10 == 0x1f) || (1 < *(ushort *)(lVar4 + (ulong)uVar10 * 0x38 + 0x90) - 3)) {
    uVar9 = uVar9 + 1;
  }
  if (uVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar8 = 0;
    uVar10 = 0;
    do {
      lVar6 = (**(code **)(*(long *)param_2[uVar8 * 8 + 0x205] + 0x10))();
      fVar11 = 0.0;
      for (lVar4 = *(long *)(lVar6 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02c7bf28) {
          fVar11 = (float)FUN_00d79b68();
          break;
        }
      }
      uVar1 = *(ushort *)(lVar6 + 0x88) & 0x1f;
      if (((uVar1 == 0x1f) || (1 < *(ushort *)(lVar6 + (ulong)uVar1 * 0x38 + 0x90) - 3)) ||
         (fVar11 < *(float *)(param_1 + 0x24))) {
        uVar10 = uVar10 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  uVar7 = 1;
  if (uVar9 <= uVar10) {
    uVar7 = 2;
  }
  return uVar7;
}




void FUN_00d1b2b8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d1b2c0(void)

{
  return;
}




undefined4 FUN_00d1b2c4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  int *piVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = *(uint *)(param_2 + 0x1330);
  uVar6 = (ulong)uVar1;
  lVar2 = FUN_00d25570(param_2);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar7 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  fVar10 = (*(float *)(lVar2 + 0x1b4) + 1.0) *
           (*(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0)
           );
  if (DAT_031500b0 <= fVar7) {
    fVar7 = DAT_031500b0;
  }
  fVar8 = DAT_0314fff0;
  if (DAT_0314fff0 <= fVar7) {
    fVar8 = fVar7;
  }
  if (DAT_031500b4 <= fVar10) {
    fVar10 = DAT_031500b4;
  }
  fVar12 = 0.0;
  fVar7 = DAT_0314fff4;
  if (DAT_0314fff4 <= fVar10) {
    fVar7 = fVar10;
  }
  if (uVar1 != 0) {
    fVar12 = 0.0;
    piVar5 = (int *)(param_2 + 0x1238);
    do {
      plVar3 = *(long **)(piVar5 + -2);
      lVar2 = 0;
      if (plVar3 != (long *)0x0) {
        if (*piVar5 == (int)plVar3[1]) {
          lVar2 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          piVar5[-2] = 0;
          piVar5[-1] = 0;
          lVar2 = 0;
          *piVar5 = DAT_03214ce8;
        }
      }
      uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
      if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
        lVar2 = *(long *)(lVar2 + 0x40);
        fVar10 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
                 (*(float *)(lVar2 + 0x48) +
                 *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
        fVar11 = (*(float *)(lVar2 + 0x1b4) + 1.0) *
                 (*(float *)(lVar2 + 0x4c) +
                 *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0));
        if (DAT_031500b0 <= fVar10) {
          fVar10 = DAT_031500b0;
        }
        fVar9 = DAT_0314fff0;
        if (DAT_0314fff0 <= fVar10) {
          fVar9 = fVar10;
        }
        if (DAT_031500b4 <= fVar11) {
          fVar11 = DAT_031500b4;
        }
        fVar10 = DAT_0314fff4;
        if (DAT_0314fff4 <= fVar11) {
          fVar10 = fVar11;
        }
        fVar12 = fVar12 + fVar9 + fVar10;
      }
      uVar6 = uVar6 - 1;
      piVar5 = piVar5 + 0x10;
    } while (uVar6 != 0);
  }
  uVar4 = 2;
  if (*(float *)(param_1 + 0x24) <= fVar8 + 0.0 + fVar7 + fVar12) {
    uVar4 = 1;
  }
  return uVar4;
}




void FUN_00d1b4bc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d1b4c4(void)

{
  return;
}




undefined4 FUN_00d1b4c8(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceb054();
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d1b4ec(void)

{
  return;
}




undefined8 FUN_00d1b4f0(undefined8 param_1,long param_2)

{
  if ((*(char *)(param_2 + 0x1418) != '\0') && (6.0 <= *(float *)(param_2 + 0x58))) {
    *(long *)(param_2 + 0x1420) = param_2 + 0x13d8;
    return 1;
  }
  return 2;
}




void FUN_00d1b528(void)

{
  return;
}




void FUN_00d1b52c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815ce0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




undefined8 FUN_00d1b560(long param_1,long param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    lVar1 = 0x1470;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      return 2;
    }
    lVar1 = 0x1460;
  }
  *(long *)(param_2 + 0x1450) = param_2 + lVar1;
  return 1;
}




void FUN_00d1b594(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d1b59c(void)

{
  return;
}




undefined8 FUN_00d1b5a0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if (*(int *)(param_2 + 0x1330) != 0) {
    uVar7 = 0;
    puVar6 = (undefined8 *)(param_2 + 0x13d8);
    do {
      lVar5 = param_2 + uVar7 * 0x40;
      plVar3 = *(long **)(lVar5 + 0x1230);
      puVar1 = (undefined8 *)(lVar5 + 0x1230);
      if (plVar3 == (long *)0x0) {
        lVar4 = 0;
      }
      else if (*(int *)(lVar5 + 0x1238) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *puVar1 = 0;
        lVar4 = 0;
        *(undefined4 *)(lVar5 + 0x1238) = DAT_03214ce8;
      }
      plVar3 = *(long **)(lVar4 + 0x2b0);
      if (plVar3 != (long *)0x0) {
        if (*(int *)(lVar4 + 0x2b8) == (int)plVar3[1]) {
          lVar5 = (**(code **)(*plVar3 + 0x10))();
          if (lVar5 != 0) {
            plVar3 = *(long **)(lVar4 + 0x2b0);
            lVar5 = 0;
            if (plVar3 != (long *)0x0) {
              if (*(int *)(lVar4 + 0x2b8) == (int)plVar3[1]) {
                lVar5 = (**(code **)(*plVar3 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar4 + 0x2b0) = 0;
                lVar5 = 0;
                *(undefined4 *)(lVar4 + 0x2b8) = DAT_03214ce8;
              }
            }
            uVar2 = *(ushort *)(lVar5 + 0x88) & 0x1f;
            if (((uVar2 == 0x1f) || (1 < *(ushort *)(lVar5 + (ulong)uVar2 * 0x38 + 0x90) - 3)) &&
               (plVar3 = *(long **)(lVar4 + 0x2b0), plVar3 != (long *)0x0)) {
              if (*(int *)(lVar4 + 0x2b8) != (int)plVar3[1]) goto LAB_00d1b774;
              lVar5 = (**(code **)(*plVar3 + 0x10))();
              if (lVar5 != 0) {
                uVar2 = *(uint *)(lVar5 + 0x2f4);
                if ((uVar2 >> 0xd & 1) == 0) {
                  if ((uVar2 >> 0x1e & 1) == 0) {
                    if ((uVar2 >> 0xb & 1) == 0) {
                      if ((((uVar2 >> 10 & 1) != 0) && (*(char *)(param_2 + 0x1418) != '\0')) &&
                         (lVar4 = (**(code **)(*(long *)*puVar6 + 0x10))(),
                         *(int *)(lVar4 + 0x260) == *(int *)(lVar5 + 0x260))) {
LAB_00d1b868:
                        *(undefined8 **)(param_2 + 0x1420) = puVar6;
                        return 1;
                      }
                    }
                    else if ((*(char *)(param_2 + 0x13d0) != '\0') &&
                            (lVar4 = (**(code **)(**(long **)(param_2 + 0x1390) + 0x10))(),
                            *(int *)(lVar4 + 0x260) == *(int *)(lVar5 + 0x260))) {
                      *(undefined8 **)(param_2 + 0x1428) = puVar1;
                      puVar6 = (undefined8 *)(param_2 + 0x1390);
                      goto LAB_00d1b868;
                    }
                  }
                  else if (*(char *)(param_2 + 5000) != '\0') {
                    *(undefined8 **)(param_2 + 0x1428) = puVar1;
                    puVar6 = (undefined8 *)(param_2 + 0x1348);
                    goto LAB_00d1b868;
                  }
                }
                else if (*(int *)(param_2 + 0xd18) != 0) {
                  uVar9 = 0;
                  puVar8 = (undefined8 *)(param_2 + 0xa18);
                  do {
                    lVar4 = (**(code **)(*(long *)*puVar8 + 0x10))();
                    if (*(int *)(lVar4 + 0x260) == *(int *)(lVar5 + 0x260)) {
                      *(undefined8 **)(param_2 + 0x1428) = puVar1;
                      *(undefined8 **)(param_2 + 0x1420) = puVar8;
                      return 1;
                    }
                    uVar9 = uVar9 + 1;
                    puVar8 = puVar8 + 8;
                  } while (uVar9 < *(uint *)(param_2 + 0xd18));
                }
              }
            }
          }
        }
        else {
LAB_00d1b774:
          *(undefined8 *)(lVar4 + 0x2b0) = 0;
          *(undefined4 *)(lVar4 + 0x2b8) = DAT_03214ce8;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0x1330));
  }
  return 2;
}




void FUN_00d1b878(void)

{
  return;
}




bool FUN_00d1b87c(void)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00d25570();
  fVar2 = *(float *)(*(long *)(lVar1 + 0x40) + 0x33c) -
          (*(float *)(*(long *)(lVar1 + 0x40) + 0x340) + DAT_0314ffd0);
  if (2.0 < fVar2) {
    DAT_0314ffd0 = DAT_0314ffd0 + 2.0;
  }
  return 2.0 < fVar2;
}




float FUN_00d1b8c8(long param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if (*(uint *)(param_1 + 0x378) != 0) {
    uVar2 = 0;
    iVar1 = 0;
    pbVar3 = (byte *)(param_1 + 0x2b4);
    do {
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + (*pbVar3 & 1);
      pbVar3 = pbVar3 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x378));
    return (float)iVar1;
  }
  return 0.0;
}




float FUN_00d1b904(long param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if (*(uint *)(param_1 + 0x270) != 0) {
    uVar2 = 0;
    iVar1 = 0;
    pbVar3 = (byte *)(param_1 + 0xac);
    do {
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + (*pbVar3 & 1);
      pbVar3 = pbVar3 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x270));
    return (float)iVar1;
  }
  return 0.0;
}




undefined4 FUN_00d1b940(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00e0b8e8(param_2,param_1,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x3f800000;
  }
  return uVar2;
}




void FUN_00d1b974(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d1b97c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_b8;
  undefined1 auStack_b0 [40];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = FUN_00d25570(param_2);
  uVar6 = FUN_00d25628(param_2);
  uVar2 = FUN_00e0bac0(param_2);
  local_b8 = 0;
  local_4c = 0;
  local_54 = 0;
  uStack_5c = 0;
  local_64 = 0;
  local_88 = 0xffffffff;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  uVar7 = FUN_00d6eb50();
  uVar3 = FUN_00d6e9d4(uVar7,*(undefined8 *)(param_1 + 0x28));
  lVar9 = *(long *)(lVar5 + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_03130aa8))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  uVar8 = FUN_00d73590(lVar9,uVar3);
  if ((uVar8 & 1) == 0) {
LAB_00d1ba5c:
    uVar8 = FUN_00d74500(uVar6,uVar3,uVar2,(long)&local_b8 + 4,&local_88,&local_b8,1);
    if ((uVar8 & 1) != 0) {
      FUN_00d005bc(auStack_b0,*(undefined4 *)(lVar5 + 0x260),uVar3);
      FUN_00ce20fc(auStack_b0);
      uVar6 = 1;
      goto LAB_00d1baa4;
    }
  }
  else {
    uVar4 = FUN_00d73004(lVar9,uVar3);
    uVar8 = FUN_00d730a4(lVar9,uVar4);
    if ((uVar8 & 1) != 0) goto LAB_00d1ba5c;
  }
  uVar6 = 2;
LAB_00d1baa4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00d1bad0(void)

{
  return;
}




undefined4 FUN_00d1bad4(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceb05c();
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d1baf8(void)

{
  return;
}




undefined4 FUN_00d1bafc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d25570(param_2);
  plVar3 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar3;
    plVar3 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf38);
  uVar2 = 1;
  if (*(char *)(lVar1 + 0x48) == '\0') {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d1bb48(void)

{
  return;
}




void FUN_00d1bb4c(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}




undefined8 FUN_00d1bb54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  FUN_00d01d20(auStack_50,*(undefined4 *)(lVar2 + 0x260),*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28));
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d1bbbc(void)

{
  return;
}




undefined8 FUN_00d1bbc0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = DAT_03214ce8;
  uVar2 = 2;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    *(undefined8 *)(param_2 + 0x19d0) = 0;
    *(undefined8 *)(param_2 + 0x19e0) = 0;
    *(undefined4 *)(param_2 + 0x19d8) = uVar1;
    *(undefined4 *)(param_2 + 0x19e8) = uVar1;
    *(undefined4 *)(param_2 + 0x19f8) = DAT_03218f38;
    uVar2 = DAT_03218f30;
    lVar4 = 0x1a01;
    *(undefined4 *)(param_2 + 0x1a0c) = 0;
    *(undefined8 *)(param_2 + 0x19f0) = uVar2;
    lVar3 = 0x19fc;
    break;
  default:
    goto switchD_00d1bbe4_caseD_3;
  case 4:
    *(undefined8 *)(param_2 + 0x1b10) = 0;
    *(undefined8 *)(param_2 + 0x1b20) = 0;
    *(undefined4 *)(param_2 + 0x1b18) = uVar1;
    *(undefined4 *)(param_2 + 0x1b28) = uVar1;
    *(undefined4 *)(param_2 + 0x1b38) = DAT_03218f38;
    uVar2 = DAT_03218f30;
    lVar4 = 0x1b41;
    *(undefined4 *)(param_2 + 0x1b4c) = 0;
    *(undefined8 *)(param_2 + 0x1b30) = uVar2;
    lVar3 = 0x1b3c;
    break;
  case 5:
    *(undefined8 *)(param_2 + 0x1b50) = 0;
    *(undefined8 *)(param_2 + 0x1b60) = 0;
    *(undefined4 *)(param_2 + 7000) = uVar1;
    *(undefined4 *)(param_2 + 0x1b68) = uVar1;
    *(undefined4 *)(param_2 + 0x1b78) = DAT_03218f38;
    uVar2 = DAT_03218f30;
    lVar4 = 0x1b81;
    *(undefined4 *)(param_2 + 0x1b8c) = 0;
    *(undefined8 *)(param_2 + 0x1b70) = uVar2;
    lVar3 = 0x1b7c;
    break;
  case 6:
    *(undefined8 *)(param_2 + 0x1b90) = 0;
    *(undefined8 *)(param_2 + 0x1ba0) = 0;
    *(undefined4 *)(param_2 + 0x1b98) = uVar1;
    *(undefined4 *)(param_2 + 0x1ba8) = uVar1;
    *(undefined4 *)(param_2 + 0x1bb8) = DAT_03218f38;
    uVar2 = DAT_03218f30;
    lVar4 = 0x1bc1;
    *(undefined4 *)(param_2 + 0x1bcc) = 0;
    *(undefined8 *)(param_2 + 0x1bb0) = uVar2;
    lVar3 = 0x1bbc;
  }
  uVar2 = 1;
  *(undefined8 *)(param_2 + lVar4) = 0;
  *(undefined8 *)(param_2 + lVar3) = 0;
switchD_00d1bbe4_caseD_3:
  return uVar2;
}




void FUN_00d1bd04(void)

{
  return;
}




void FUN_00d1bd08(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d1bd10(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bd34(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bd58(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bd7c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bda0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bdc4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bde8(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1be0c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1be30(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1be54(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1be78(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1be9c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bec0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bee4(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bf08(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bf2c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bf50(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bf74(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bf98(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bfbc(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1bfe0(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}

