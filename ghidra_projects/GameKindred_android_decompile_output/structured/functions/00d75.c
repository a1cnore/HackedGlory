// functions/00d75 — 27 functions
#include "libGameKindred.h"




uint FUN_00d75000(long param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x38) == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar1 = 0;
    piVar2 = (int *)(param_1 + 0x40);
    while (uVar3 = uVar1, *piVar2 != param_2) {
      uVar1 = uVar1 + 1;
      uVar3 = 0xffffffffffffffff;
      if ((0x8b < uVar1) || (piVar2 = piVar2 + 0x24, *(uint *)(param_1 + 0x38) <= uVar1)) break;
    }
  }
  return *(uint *)(param_1 + (long)(int)uVar3 * 0x90 + 0x90) >> 0x1f;
}




void FUN_00d7505c(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 local_8c;
  undefined4 uStack_88;
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
  if (*(uint *)(param_1 + 0x38) == 0) {
LAB_00d75120:
    uVar4 = 0;
  }
  else {
    piVar8 = (int *)(param_1 + 0x40);
    uVar7 = 1;
    do {
      if (*piVar8 == param_2) {
        plVar5 = *(long **)(param_1 + 0x28);
        uVar4 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
            lVar6 = (**(code **)(*plVar5 + 0x10))();
            uVar4 = 0;
            if (lVar6 != 0) {
              lVar6 = *(long *)(lVar6 + 0x18);
              if (lVar6 != 0) goto LAB_00d75100;
              goto LAB_00d75120;
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x28) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
          }
        }
        break;
      }
      if (0x8b < uVar7) goto LAB_00d75120;
      uVar4 = 0;
      bVar2 = uVar7 < *(uint *)(param_1 + 0x38);
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 0x24;
    } while (bVar2);
  }
  goto LAB_00d75124;
  while( true ) {
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar4 = 0;
    if (lVar6 == 0) break;
LAB_00d75100:
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_03130aa8) {
      local_4c = 0;
      local_54 = 0;
      uStack_88 = 0xffffffff;
      uStack_5c = 0;
      local_64 = 0;
      uStack_6c = 0;
      local_74 = 0;
      uStack_7c = 0;
      local_84 = 0;
      local_8c = 0;
      uVar3 = FUN_00d74788(param_1,lVar6,piVar8,&uStack_88,&local_8c,100);
      *param_3 = uVar3;
      uVar3 = FUN_00d751d0(param_1,lVar6,piVar8);
      *param_4 = uVar3;
      uVar4 = 1;
      break;
    }
  }
LAB_00d75124:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




int FUN_00d751d0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = *(int *)(*(long *)(param_3 + 8) + 0x3c);
  if (iVar2 != -1) {
    uVar4 = 1;
    do {
      iVar1 = FUN_00d751d0(param_1,param_2,param_1 + (long)iVar2 * 0x90 + 0x40);
      iVar2 = *(int *)(param_3 + uVar4 * 4 + 0x10);
      iVar3 = iVar1 + iVar3;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (iVar2 != -1);
  }
  return iVar3;
}




int FUN_00d75250(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = FUN_00d74134();
  lVar5 = 2;
  piVar6 = (int *)(param_1 + 0x4f00);
  piVar7 = (int *)0x0;
  do {
    piVar1 = piVar6;
    if (*piVar6 != iVar3) {
      piVar1 = piVar7;
    }
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 0x4d1;
    piVar7 = piVar1;
  } while (lVar5 != 0);
  iVar3 = piVar1[0x8d];
  iVar4 = rand();
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar4 / iVar3;
  }
  return piVar1[(ulong)(uint)(iVar4 - iVar2 * iVar3) + 1];
}




undefined4 FUN_00d752b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




int FUN_00d752bc(long param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = 2;
  piVar4 = (int *)(param_1 + 0x4f00);
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar4;
    if (*piVar4 != param_2) {
      piVar1 = piVar2;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 0x4d1;
    piVar2 = piVar1;
  } while (lVar3 != 0);
  return piVar1[(long)param_3 * 0xb0 + 0x8e];
}




int FUN_00d752f8(long param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = 2;
  piVar4 = (int *)(param_1 + 0x4f00);
  piVar2 = (int *)0x0;
  do {
    piVar1 = piVar4;
    if (*piVar4 != param_2) {
      piVar1 = piVar2;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 0x4d1;
    piVar2 = piVar1;
  } while (lVar3 != 0);
  return piVar1[(long)param_3 * 0xb0 + (ulong)param_4 + 0x8f];
}




undefined8 FUN_00d75338(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




undefined8 FUN_00d7538c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




long FUN_00d753e0(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x1344 + 0x4f00;
}




undefined8 FUN_00d753f4(undefined8 param_1,undefined8 param_2,int param_3,long param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  uVar3 = FUN_00d72dac(param_2);
  if ((int)uVar3 != 0) {
    uVar5 = 0;
    do {
      iVar1 = FUN_00d72f0c(param_2,uVar5);
      if (iVar1 == param_3) {
        iVar1 = FUN_00d72ed0(param_2,uVar5);
        lVar4 = 0;
        while (*(int *)(param_4 + lVar4 * 4) != iVar1) {
          lVar4 = lVar4 + 1;
          if (0xf < (uint)lVar4) {
            *param_5 = iVar1;
            return 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_00d72dac(param_2);
    } while (uVar5 < uVar2);
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_00d754a0(undefined8 param_1,int param_2,long param_3,uint param_4,int param_5)

{
  int iVar1;
  long lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      iVar1 = *(int *)(param_3 + lVar2 * 4);
      if (iVar1 == param_5) {
        return 0;
      }
      if (iVar1 == param_2) {
        return 1;
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < param_4);
  }
  return 0;
}




undefined8 FUN_00d754d8(undefined8 param_1)

{
  FUN_00d73e34();
  return param_1;
}




void FUN_00d754fc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d75504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d75508(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = &PTR_FUN_0281e310;
  memset(param_1 + 0x11,0,0x204);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  uVar1 = CONCAT44(DAT_02bf257c,DAT_02bf257c);
  param_1[0x55] = CONCAT44(DAT_02bf257c,DAT_02bf257c);
  param_1[0x54] = uVar1;
  return;
}




void FUN_00d75580(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0281e310;
  iVar1 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x54) != DAT_02bf257c) {
    FUN_00ef02b4();
    iVar1 = DAT_02bf257c;
  }
  if (*(int *)((long)param_1 + 0x2a4) != iVar1) {
    FUN_00ef02b4(*(int *)((long)param_1 + 0x2a4));
    iVar1 = DAT_02bf257c;
  }
  if (*(int *)(param_1 + 0x55) != iVar1) {
    FUN_00ef02b4(*(int *)(param_1 + 0x55));
    iVar1 = DAT_02bf257c;
  }
  if (*(int *)((long)param_1 + 0x2ac) != iVar1) {
    FUN_00ef02b4(*(int *)((long)param_1 + 0x2ac));
  }
  FUN_00d75624(param_1 + 0xb);
  FUN_00d756e0(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d75624(uint *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar2 != 0xffffffff) {
        lVar6 = *(long *)(param_1 + 8);
        puVar1 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0x10);
        if ((void *)puVar1[1] != (void *)0x0) {
          operator_delete__((void *)puVar1[1]);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(uint *)(lVar6 + (ulong)uVar2 * 0x10) = param_1[10];
        uVar3 = *param_1;
        param_1[10] = uVar2;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar3);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00d756e0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00d75764(void *param_1)

{
  FUN_00d75580();
  operator_delete(param_1);
  return;
}




void FUN_00d75788(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_02e3ef88 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02e3ef88 + 1;
  lVar2 = param_1 + (ulong)DAT_02e3ef88 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d763c4;
  *(code **)(lVar2 + 0xb8) = FUN_00d76440;
  *(uint *)(lVar2 + 0xa4) = DAT_02e3ef88;
  *(undefined4 *)(lVar2 + 0xa8) = 0x2b0;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 4;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  FUN_01986780(param_1,0,FUN_00d7585c,0);
  FUN_01986780(param_1,1,FUN_00d75860,0);
  FUN_01986780(param_1,4,FUN_00d75864,0);
  uVar1 = FUN_019888d4();
  FUN_01989130(uVar1,PTR_DAT_02beacf8,FUN_00d75868);
  return;
}




void FUN_00d7585c(void)

{
  return;
}




void FUN_00d75860(void)

{
  return;
}




void FUN_00d75864(void)

{
  return;
}




void FUN_00d75868(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    lVar3 = FUN_01988738(DAT_02e3ef88,0);
    *(long *)(lVar3 + 0x290) = param_3;
    FUN_01989030(param_1,PTR_DAT_02beacf0,*(undefined8 *)(param_3 + 0x158));
    uVar4 = FUN_009c9cd4(lVar3,param_3);
    *(undefined8 *)(lVar3 + 0x298) = uVar4;
    uVar2 = FUN_00d75998(0,*(undefined8 *)(param_3 + 0x138));
    *(undefined4 *)(lVar3 + 0x2a0) = uVar2;
    uVar2 = FUN_00d75998(1,*(undefined8 *)(param_3 + 0x150));
    *(undefined4 *)(lVar3 + 0x2ac) = uVar2;
    uVar2 = FUN_00d75998(2,*(undefined8 *)(param_3 + 0x148));
    *(undefined4 *)(lVar3 + 0x2a8) = uVar2;
    uVar2 = FUN_00d75998(3,*(undefined8 *)(param_3 + 0x140));
    *(undefined4 *)(lVar3 + 0x2a4) = uVar2;
    lVar6 = **(long **)(param_3 + 0x160);
    plVar1 = *(long **)(param_3 + 0x160);
    while (lVar6 != 0) {
      uVar4 = FUN_01985d44(lVar3,DAT_031502d4);
      FUN_00d7a548(uVar4,*plVar1);
      lVar6 = plVar1[1];
      plVar1 = plVar1 + 1;
    }
    uVar5 = FUN_00ceab48();
    if ((uVar5 & 1) != 0) {
      lVar6 = **(long **)(param_3 + 400);
      plVar1 = *(long **)(param_3 + 400);
      while (lVar6 != 0) {
        uVar4 = FUN_01985d44(lVar3,DAT_031a9b50);
        FUN_00d631d8(uVar4,*plVar1);
        lVar6 = plVar1[1];
        plVar1 = plVar1 + 1;
      }
    }
    FUN_00d75aa4(lVar3);
    FUN_00d75f64(lVar3);
    return;
  }
  return;
}




undefined4 FUN_00d75998(undefined4 param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = DAT_02bf257c;
  if ((param_2 != 0) && (iVar3 = FUN_00e6a474(param_2), uVar4 = DAT_02bf257c, iVar3 != 0)) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    FUN_00f1c904(param_2,local_50);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    iVar3 = FUN_00f1c7b0(pvVar1,1);
    uVar4 = DAT_02bf257c;
    if (iVar3 != -1) {
      local_58 = 0;
      uVar5 = FUN_00f1c844(iVar3,&local_58);
      uVar4 = FUN_00ef0298(param_1,local_58,uVar5);
      FUN_00f1c85c(iVar3,local_58);
      FUN_00f1c7c8(iVar3);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}




void FUN_00d75aa4(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x290) + 0x178);
  puVar17 = (undefined8 *)*puVar16;
  if (puVar17 != (undefined8 *)0x0) {
    puVar1 = (uint *)(param_1 + 0x58);
    puVar2 = (uint *)(param_1 + 0x28);
    do {
      uVar7 = FUN_00e6a488(*puVar17);
      if ((uVar7 & 1) == 0) {
        pbVar12 = (byte *)*puVar17;
        if (pbVar12 == (byte *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0x811c9dc5;
          if (*pbVar12 != 0) {
            uVar18 = 0x811c9dc5;
            uVar9 = (uint)*pbVar12;
            do {
              pbVar12 = pbVar12 + 1;
              uVar18 = (uVar18 ^ uVar9) * 0x1000193;
              uVar9 = (uint)*pbVar12;
            } while (*pbVar12 != 0);
          }
        }
        uVar10 = *(uint *)(param_1 + 0x28);
        uVar9 = *(int *)(param_1 + 0x38) + 1;
        *(uint *)(param_1 + 0x38) = uVar9;
        if (uVar10 >> 1 < uVar9) {
          local_78 = 0;
          local_70 = (void *)0x0;
          FUN_009348c8(&local_78,(uVar10 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
          uVar9 = *puVar2;
          uVar14 = uVar9 - 1;
          uVar10 = (uint)local_78;
          if ((int)uVar14 < 0) {
            pvVar8 = *(void **)(param_1 + 0x30);
          }
          else {
            pvVar8 = *(void **)(param_1 + 0x30);
            do {
              iVar6 = *(int *)((long)pvVar8 + (ulong)uVar14 * 8 + 4);
              if (iVar6 != -1) {
                uVar9 = *(uint *)((long)pvVar8 + (ulong)uVar14 * 8);
                uVar4 = 0;
                if ((uint)local_78 != 0) {
                  uVar4 = uVar9 / (uint)local_78;
                }
                uVar7 = (ulong)(uVar9 - uVar4 * (uint)local_78);
                piVar15 = (int *)((long)local_70 + uVar7 * 8 + 4);
                iVar3 = *piVar15;
                while (iVar3 != -1) {
                  uVar4 = (uint)local_78;
                  if (0 < (int)(uint)uVar7) {
                    uVar4 = (uint)uVar7;
                  }
                  uVar7 = (ulong)(uVar4 - 1);
                  piVar15 = (int *)((long)local_70 + uVar7 * 8 + 4);
                  iVar3 = *piVar15;
                }
                *(uint *)((long)local_70 + uVar7 * 8) = uVar9;
                *piVar15 = iVar6;
              }
              uVar14 = uVar14 - 1;
            } while (-1 < (int)uVar14);
            uVar9 = *puVar2;
          }
          *(undefined8 *)(param_1 + 0x28) = local_78;
          local_78 = CONCAT44(*(undefined4 *)(param_1 + 0x2c),uVar9);
          *(void **)(param_1 + 0x30) = local_70;
          if (pvVar8 == (void *)0x0) {
            local_70 = (void *)0x0;
          }
          else {
            local_70 = pvVar8;
            operator_delete__(pvVar8);
            local_78 = 0;
            local_70 = (void *)0x0;
            uVar10 = *puVar2;
          }
        }
        lVar13 = *(long *)(param_1 + 0x30);
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar18 / uVar10;
        }
        uVar7 = (ulong)(uVar18 - uVar9 * uVar10);
        piVar15 = (int *)(lVar13 + uVar7 * 8 + 4);
        iVar6 = *piVar15;
        while (iVar6 != -1) {
          uVar9 = uVar10;
          if (0 < (int)(uint)uVar7) {
            uVar9 = (uint)uVar7;
          }
          uVar7 = (ulong)(uVar9 - 1);
          piVar15 = (int *)(lVar13 + uVar7 * 8 + 4);
          iVar6 = *piVar15;
        }
        *(uint *)(lVar13 + uVar7 * 8) = uVar18;
        iVar6 = FUN_00d7644c(puVar2,puVar16);
        *piVar15 = iVar6;
      }
      puVar17 = (undefined8 *)puVar17[1];
      puVar11 = (undefined8 *)*puVar17;
      while (puVar11 != (undefined8 *)0x0) {
        pbVar12 = (byte *)*puVar11;
        uVar7 = FUN_00e6a488(pbVar12);
        if ((uVar7 & 1) == 0) {
          if (pbVar12 == (byte *)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0x811c9dc5;
            if (*pbVar12 != 0) {
              uVar18 = 0x811c9dc5;
              uVar9 = (uint)*pbVar12;
              do {
                pbVar12 = pbVar12 + 1;
                uVar18 = (uVar18 ^ uVar9) * 0x1000193;
                uVar9 = (uint)*pbVar12;
              } while (*pbVar12 != 0);
            }
          }
          uVar9 = *puVar1;
          if (uVar9 == 0) {
LAB_00d75d50:
            local_88 = 0;
            local_80 = (void *)0x0;
            uVar10 = *(int *)(param_1 + 0x68) + 1;
            *(uint *)(param_1 + 0x68) = uVar10;
            if (uVar9 >> 1 < uVar10) {
              local_78 = 0;
              local_70 = (void *)0x0;
              FUN_009348c8(&local_78,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
              uVar10 = *puVar1;
              uVar14 = uVar10 - 1;
              uVar9 = (uint)local_78;
              if ((int)uVar14 < 0) {
                pvVar8 = *(void **)(param_1 + 0x60);
              }
              else {
                pvVar8 = *(void **)(param_1 + 0x60);
                do {
                  iVar6 = *(int *)((long)pvVar8 + (ulong)uVar14 * 8 + 4);
                  if (iVar6 != -1) {
                    uVar10 = *(uint *)((long)pvVar8 + (ulong)uVar14 * 8);
                    uVar4 = 0;
                    if ((uint)local_78 != 0) {
                      uVar4 = uVar10 / (uint)local_78;
                    }
                    uVar7 = (ulong)(uVar10 - uVar4 * (uint)local_78);
                    piVar15 = (int *)((long)local_70 + uVar7 * 8 + 4);
                    iVar3 = *piVar15;
                    while (iVar3 != -1) {
                      uVar4 = (uint)local_78;
                      if (0 < (int)(uint)uVar7) {
                        uVar4 = (uint)uVar7;
                      }
                      uVar7 = (ulong)(uVar4 - 1);
                      piVar15 = (int *)((long)local_70 + uVar7 * 8 + 4);
                      iVar3 = *piVar15;
                    }
                    *(uint *)((long)local_70 + uVar7 * 8) = uVar10;
                    *piVar15 = iVar6;
                  }
                  uVar14 = uVar14 - 1;
                } while (-1 < (int)uVar14);
                uVar10 = *puVar1;
              }
              *(undefined8 *)(param_1 + 0x58) = local_78;
              local_78 = CONCAT44(*(undefined4 *)(param_1 + 0x5c),uVar10);
              *(void **)(param_1 + 0x60) = local_70;
              if (pvVar8 == (void *)0x0) {
                local_70 = (void *)0x0;
              }
              else {
                local_70 = pvVar8;
                operator_delete__(pvVar8);
                local_78 = 0;
                local_70 = (void *)0x0;
                uVar9 = *puVar1;
              }
            }
            lVar13 = *(long *)(param_1 + 0x60);
            uVar10 = 0;
            if (uVar9 != 0) {
              uVar10 = uVar18 / uVar9;
            }
            uVar7 = (ulong)(uVar18 - uVar10 * uVar9);
            piVar15 = (int *)(lVar13 + uVar7 * 8 + 4);
            iVar6 = *piVar15;
            while (iVar6 != -1) {
              uVar10 = uVar9;
              if (0 < (int)(uint)uVar7) {
                uVar10 = (uint)uVar7;
              }
              uVar7 = (ulong)(uVar10 - 1);
              piVar15 = (int *)(lVar13 + uVar7 * 8 + 4);
              iVar6 = *piVar15;
            }
            *(uint *)(lVar13 + uVar7 * 8) = uVar18;
            iVar6 = FUN_00d765e4(puVar1,&local_88);
            *piVar15 = iVar6;
            if (local_80 != (void *)0x0) {
              operator_delete__(local_80);
              local_88 = 0;
              local_80 = (void *)0x0;
            }
            uVar9 = *puVar1;
            if (uVar9 == 0) goto LAB_00d75f0c;
LAB_00d75ebc:
            lVar13 = *(long *)(param_1 + 0x60);
            uVar10 = 0;
            if (uVar9 != 0) {
              uVar10 = uVar18 / uVar9;
            }
            uVar10 = uVar18 - uVar10 * uVar9;
            while ((*(uint *)(lVar13 + (ulong)uVar10 * 8) != uVar18 &&
                   (*(int *)(lVar13 + (ulong)uVar10 * 8 + 4) != -1))) {
              uVar14 = uVar9;
              if (0 < (int)uVar10) {
                uVar14 = uVar10;
              }
              uVar10 = uVar14 - 1;
            }
            if (uVar10 == 0xffffffff) goto LAB_00d75f0c;
            uVar7 = (ulong)*(uint *)(lVar13 + (ulong)uVar10 * 8 + 4);
          }
          else {
            lVar13 = *(long *)(param_1 + 0x60);
            uVar10 = 0;
            if (uVar9 != 0) {
              uVar10 = uVar18 / uVar9;
            }
            uVar10 = uVar18 - uVar10 * uVar9;
            while ((*(uint *)(lVar13 + (ulong)uVar10 * 8) != uVar18 &&
                   (*(int *)(lVar13 + (ulong)uVar10 * 8 + 4) != -1))) {
              uVar14 = uVar9;
              if (0 < (int)uVar10) {
                uVar14 = uVar10;
              }
              uVar10 = uVar14 - 1;
            }
            if ((uVar10 == 0xffffffff) || (*(int *)(lVar13 + (ulong)uVar10 * 8 + 4) == -1))
            goto LAB_00d75d50;
            if (uVar9 != 0) goto LAB_00d75ebc;
LAB_00d75f0c:
            uVar7 = 0xffffffff;
          }
          FUN_00d76290(*(long *)(param_1 + 0x78) + uVar7 * 0x10,puVar16);
        }
        puVar17 = puVar17 + 1;
        puVar11 = (undefined8 *)*puVar17;
      }
      puVar16 = puVar16 + 1;
      puVar17 = (undefined8 *)*puVar16;
    } while (puVar17 != (undefined8 *)0x0);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d75f64(long param_1)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x290) + 200);
  pfVar5 = (float *)*plVar2;
  if (pfVar5 == (float *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pfVar3 = pfVar5;
    do {
      fVar6 = *pfVar3;
      fVar7 = pfVar3[2];
      lVar1 = param_1 + (uVar4 & 0xffffffff) * 8;
      pfVar3 = pfVar5;
      if ((float *)plVar2[uVar4 + 1] != (float *)0x0) {
        pfVar3 = (float *)plVar2[uVar4 + 1];
      }
      fVar9 = *pfVar3;
      fVar10 = pfVar3[2];
      *(float *)(lVar1 + 0x88) = fVar6;
      *(float *)(lVar1 + 0x8c) = fVar7;
      fVar9 = fVar9 - fVar6;
      fVar10 = fVar10 - fVar7;
      *(float *)(lVar1 + 0x188) = -fVar10;
      fVar7 = fVar9 * fVar9 + fVar10 * fVar10;
      fVar6 = SQRT(fVar7);
      *(float *)(lVar1 + 0x18c) = fVar9;
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      uVar8 = *(undefined8 *)(lVar1 + 0x188);
      *(undefined8 *)(lVar1 + 0x188) =
           CONCAT44((float)((ulong)uVar8 >> 0x20) / fVar6,(float)uVar8 / fVar6);
      pfVar3 = (float *)plVar2[uVar4 + 1];
      uVar4 = uVar4 + 1;
    } while (pfVar3 != (float *)0x0);
  }
  *(int *)(param_1 + 0x288) = (int)uVar4;
  return;
}

