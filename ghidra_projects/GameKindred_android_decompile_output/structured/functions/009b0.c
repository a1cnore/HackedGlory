// functions/009b0 — 24 functions
#include "libGameKindred.h"




void FUN_009b0048(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x90) = param_2;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 0x10;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x3c) = 0xffffffff;
  } while (lVar2 != 0x60);
  FUN_009afda8();
  return;
}




undefined4 FUN_009b0070(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




void FUN_009b0078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_40,param_3);
  FUN_009b00e4(param_1,param_2,local_40[0]);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b00e4(long param_1,long param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar6 = *(undefined8 **)(param_2 + 0x18);
  piVar4 = (int *)*puVar6;
  do {
    if (piVar4 == (int *)0x0) {
      lVar3 = 0;
LAB_009b0170:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar3);
    }
    if (*piVar4 == *(int *)(param_1 + 0x90)) {
      puVar5 = (undefined8 *)**(long **)(piVar4 + 2);
      plVar2 = *(long **)(piVar4 + 2);
      while (puVar5 != (undefined8 *)0x0) {
        thunk_FUN_00d9ff34(local_50,*puVar5);
        if (local_50[0] == param_3) {
          lVar3 = *plVar2;
          goto LAB_009b0170;
        }
        puVar5 = (undefined8 *)plVar2[1];
        plVar2 = plVar2 + 1;
      }
    }
    puVar6 = puVar6 + 1;
    piVar4 = (int *)*puVar6;
  } while( true );
}




void FUN_009b019c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_40,param_3);
  FUN_009b0210(param_1,param_2,local_40[0],param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009b0210(undefined8 param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  lVar2 = FUN_009b00e4(param_1,param_2,param_3);
  if (lVar2 != 0) {
    plVar4 = *(long **)(lVar2 + 0x18);
    lVar2 = *plVar4;
    if (lVar2 != 0) {
      uVar3 = 0;
      do {
        iVar1 = strcmp(param_4,*(char **)(lVar2 + 8));
        if (iVar1 == 0) {
          return *(undefined8 *)(*plVar4 + 0x10);
        }
        iVar1 = strcmp("en",*(char **)(*plVar4 + 8));
        if (iVar1 == 0) {
          uVar3 = *(undefined8 *)(*plVar4 + 0x10);
        }
        plVar4 = plVar4 + 1;
        lVar2 = *plVar4;
      } while (lVar2 != 0);
      return uVar3;
    }
  }
  return 0;
}




void FUN_009b02a0(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((((param_5 != 0) && (*(int *)(param_1 + 0xa8) < 1)) &&
      ((uVar3 = param_1, (param_2 & 1) == 0 ||
       (uVar3 = FUN_00ced270(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x260)), (uVar3 & 1) != 0))
      )) && ((((param_3 & 1) != 0 || (*(float *)(param_1 + 0x98) <= 0.0)) &&
             (*(float *)(param_4 + 8) <= 0.0)))) {
    fVar7 = *(float *)(param_5 + 8);
    if (fVar7 < 1.0) {
      uVar1 = rand();
      uVar3 = (ulong)uVar1;
      if (fVar7 < (float)(int)uVar1 * 4.656613e-10 + 0.0) {
        return;
      }
    }
    lVar5 = *(long *)(param_1 + 0x18);
    lVar4 = lVar5;
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      do {
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_0312ebb0) break;
        lVar4 = *(long *)(lVar4 + 0x20);
      } while (lVar4 != 0);
      do {
        if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_0312ebc0) break;
        lVar5 = *(long *)(lVar5 + 0x20);
      } while (lVar5 != 0);
    }
    lVar6 = lVar5;
    if ((param_3 & 1) != 0) {
      if (lVar4 != 0) {
        uVar3 = FUN_01985da0(param_1,lVar4);
      }
      lVar4 = 0;
      lVar6 = 0;
      if (lVar5 != 0) {
        uVar3 = FUN_01985da0(param_1,lVar5);
        lVar6 = 0;
      }
    }
    if (((lVar6 == 0 && lVar4 == 0) && (lVar5 = FUN_009b0934(uVar3,param_4), lVar5 != 0)) &&
       (uVar3 = FUN_009b0ac0(param_1,lVar5,*(undefined1 *)(param_5 + 0x14)), (uVar3 & 1) != 0)) {
      fVar8 = *(float *)(param_5 + 0xc);
      fVar7 = fVar8;
      if (fVar8 <= *(float *)(param_5 + 0x10)) {
        fVar7 = *(float *)(param_5 + 0x10);
      }
      iVar2 = rand();
      *(float *)(param_4 + 8) = fVar8 + (fVar7 - fVar8) * (float)iVar2 * 4.656613e-10;
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
      fVar9 = *(float *)(lVar5 + 0x20c);
      fVar8 = *(float *)(lVar5 + 0x210);
      fVar7 = fVar9;
      if (fVar9 <= fVar8) {
        fVar7 = fVar8;
      }
      iVar2 = rand();
      *(float *)(param_1 + 0x98) = fVar9 + (fVar7 - fVar9) * (float)iVar2 * 4.656613e-10;
    }
  }
  return;
}




void FUN_009b0478(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  thunk_FUN_00d9ff34(local_40,"movement");
  uVar2 = FUN_009b00e4(param_1,lVar3 + 0x200,local_40[0]);
  FUN_009b02a0(param_1,1,0,param_1 + 0x50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b050c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  thunk_FUN_00d9ff34(local_40,"attack");
  uVar2 = FUN_009b00e4(param_1,lVar3 + 0x200,local_40[0]);
  FUN_009b02a0(param_1,1,0,param_1 + 0x40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b05a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  thunk_FUN_00d9ff34(local_40,"death");
  uVar2 = FUN_009b00e4(param_1,lVar3 + 0x200,local_40[0]);
  FUN_009b02a0(param_1,1,1,param_1 + 0x60,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b0634(float param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(*(int *)(param_3 + 0x260) != *(int *)(*(long *)(param_2 + 0x28) + 0x260));
  }
  uVar3 = uVar3 & param_3 != 0;
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_3 + 0x2f4) >> 4 & 1;
  }
  uVar4 = uVar4 & uVar3;
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
    fVar6 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
            (*(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0)
            );
    if (DAT_0312ece0 <= fVar6) {
      fVar6 = DAT_0312ece0;
    }
    fVar7 = DAT_0312ec20;
    if (DAT_0312ec20 <= fVar6) {
      fVar7 = fVar6;
    }
    if (0.5 <= *(float *)(lVar5 + 0x308) / fVar7) {
      uVar3 = (uint)(fVar7 * 0.2 <= param_1);
    }
    else {
      uVar3 = 1;
    }
  }
  if ((uVar3 & uVar4) != 0) {
    lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 0x38);
    thunk_FUN_00d9ff34(local_40,"takeDamage");
    uVar2 = FUN_009b00e4(param_2,lVar5 + 0x200,local_40[0]);
    FUN_009b02a0(param_2,1,0,param_2 + 0x70,uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b07a0(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar3 = FUN_00d54540(lVar5,param_2);
  if (((uVar3 & 1) != 0) && (iVar2 = FUN_00d535a4(lVar5,param_2), iVar2 == 1)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    thunk_FUN_00d9ff34(local_40,"learnUltimate");
    uVar4 = FUN_009b00e4(param_1,lVar5 + 0x200,local_40[0]);
    FUN_009b02a0(param_1,1,1,param_1 + 0x80,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b0888(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d9ff84(local_50);
  local_48 = FUN_009b0210(param_1,*(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x200,local_50[0],
                          *(undefined8 *)(param_1 + 0xa0));
  uStack_40 = 0xffffffff00000000;
  uVar2 = FUN_009b00e4(param_1,*(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x200,local_50[0]);
  FUN_009b02a0(param_1,param_3 & 1,1,&local_48,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b0934(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  byte abStack_89 [65];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar7 = (long *)*param_2;
  if (*plVar7 != 0) {
    uVar8 = 0;
    do {
      uVar12 = uVar8 + 1;
      abStack_89[uVar8 + 1] = (byte)uVar8;
      if (0x3f < uVar12) break;
      lVar4 = uVar8 + 1;
      uVar8 = uVar12;
    } while (plVar7[lVar4] != 0);
    if ((int)uVar12 != 0) {
      uVar8 = 0;
      do {
        uVar10 = 0;
        do {
          iVar5 = (int)uVar12;
          uVar11 = (long)iVar5 - 1;
          if ((uVar11 & 0xffffffff) <= uVar10) break;
          if (abStack_89[uVar8 + 1] == *(byte *)((long)param_2 + uVar10 + 0xc)) {
            uVar12 = uVar11 & 0xffffffff;
            abStack_89[uVar8 + 1] = abStack_89[iVar5];
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < 4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uVar12 & 0xffffffff));
      fVar14 = 0.0;
      if ((int)uVar12 != 0) {
        uVar8 = uVar12 & 0xffffffff;
        fVar14 = 0.0;
        pbVar9 = abStack_89;
        do {
          pbVar9 = pbVar9 + 1;
          uVar8 = uVar8 - 1;
          fVar14 = fVar14 + *(float *)(plVar7[*pbVar9] + 8);
        } while (uVar8 != 0);
      }
      iVar5 = rand();
      if ((int)uVar12 != 0) {
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        uVar8 = 0;
        fVar13 = 0.0;
        do {
          bVar1 = abStack_89[uVar8 + 1];
          fVar13 = fVar13 + *(float *)(*(long *)(*param_2 + (ulong)bVar1 * 8) + 8);
          if (fVar14 * (float)iVar5 * 4.656613e-10 + 0.0 <= fVar13) {
            uVar2 = *(undefined2 *)((long)param_2 + 0xc);
            *(byte *)((long)param_2 + 0xc) = bVar1;
            *(undefined1 *)((long)param_2 + 0xf) = *(undefined1 *)((long)param_2 + 0xe);
            *(undefined2 *)((long)param_2 + 0xd) = uVar2;
            uVar6 = *(undefined8 *)(*param_2 + (ulong)bVar1 * 8);
            goto LAB_009b0a78;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uVar12 & 0xffffffff));
      }
    }
  }
  uVar6 = 0;
LAB_009b0a78:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




undefined4 FUN_009b0ac0(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ced270(*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x260));
  if (((uVar1 & 1) == 0) && ((param_3 & 1) == 0)) {
    lVar2 = FUN_01985d44(param_1,DAT_0312ebc0);
    if (lVar2 != 0) {
      FUN_009db1ac(0x3eb33333,lVar2,*param_2,0,1,0,1,0xffffffff);
      FUN_009db358(lVar2,*(undefined8 *)(param_1 + 0x28));
      FUN_009db36c(lVar2);
      return 1;
    }
  }
  else {
    lVar2 = FUN_01985d44(param_1,DAT_0312ebb0);
    if (lVar2 != 0) {
      FUN_009dbd5c(0x3eb33333,lVar2,*param_2,0,1,1);
      FUN_009dbea4(lVar2);
      return 1;
    }
  }
  return 0;
}




void FUN_009b0bac(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009b0bd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027c1e90;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x10;
    *(undefined8 *)((long)param_1 + lVar2 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x38) = 0xffffffff00000000;
    lVar2 = lVar1;
  } while (lVar1 != 0x60);
  return;
}




void FUN_009b0c14(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009b0c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009b0c20(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_027c1ec0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 7) = 0x40a00000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(byte *)((long)param_1 + 0x44) = *(byte *)((long)param_1 + 0x44) & 0xf0;
  return;
}




void FUN_009b0c68(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009b0c8c(long param_1)

{
  long lVar1;
  
  DAT_0312eb90 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb90 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb90 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b1698;
  *(code **)(lVar1 + 0xb8) = FUN_009b16dc;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb90;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x3be20659,FUN_009b0d4c,0);
  FUN_019867cc(param_1,0xdc302c4,FUN_009b0eb0,0);
  FUN_01986780(param_1,3,thunk_FUN_009b0ee0,0);
  return;
}




void FUN_009b0eb0(void)

{
  FUN_009b13e8();
  return;
}




void thunk_FUN_009b0ee0(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_71c;
  float afStack_718 [4];
  undefined **appuStack_708 [12];
  float afStack_6a8 [402];
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  plVar8 = (long *)(param_1 + 0x28);
  plVar3 = (long *)*plVar8;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((lVar4 != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
        FUN_00d55794(lVar4,afStack_718,0);
        FUN_00cedce4();
        lVar5 = FUN_00d9e390();
        if (lVar5 == 0) {
          FUN_009b12b8(param_1,0,plVar8);
        }
        else {
          FUN_00d55794(lVar5,afStack_6a8,0);
          fVar9 = (float)afStack_718._4_8_ - (float)afStack_6a8._4_8_;
          fVar10 = SUB84(afStack_718._4_8_,4) - SUB84(afStack_6a8._4_8_,4);
          fVar9 = (afStack_718[0] - afStack_6a8[0]) * (afStack_718[0] - afStack_6a8[0]) +
                  fVar9 * fVar9 + fVar10 * fVar10;
          FUN_009b12b8(param_1,fVar9 <= 169.0,plVar8);
          if (fVar9 <= 169.0) {
            uStack_71c = 0xa600a6a6;
            if ((*(byte *)(param_1 + 0x44) >> 2 & 1) == 0) {
              if (*(int *)(param_1 + 0x3c) == -1) {
                uVar2 = 0;
              }
              else {
                FUN_00d4d9e8(appuStack_708);
                appuStack_708[0] = &PTR_FUN_0281d9b8;
                FUN_00d4dac4(appuStack_708,*(undefined4 *)(param_1 + 0x3c));
                FUN_00d4daf4(appuStack_708,0,1,0,lVar4);
                FUN_00d4dd1c(appuStack_708,1);
                FUN_00d4db48(*(undefined4 *)(param_1 + 0x38),appuStack_708,afStack_718);
                FUN_00d4d364(appuStack_708,0);
                uVar2 = FUN_00d9e840(appuStack_708,afStack_6a8,200,0);
              }
              if (*(uint *)(param_1 + 0x40) <= uVar2) {
                uStack_71c = 0xa600a600;
              }
            }
            else {
              uStack_71c = 0xff0000c8;
            }
            plVar8 = (long *)*plVar8;
            uVar6 = 0;
            if (plVar8 != (long *)0x0) {
              if (*(int *)(param_1 + 0x30) == (int)plVar8[1]) {
                uVar6 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x28) = 0;
                uVar6 = 0;
                *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
              }
            }
            FUN_009d3ebc(uVar6,&uStack_71c);
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b0ee0(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 local_71c;
  float local_718 [4];
  undefined **local_708 [12];
  float local_6a8 [402];
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  plVar8 = (long *)(param_1 + 0x28);
  plVar3 = (long *)*plVar8;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((lVar4 != 0) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
        FUN_00d55794(lVar4,local_718,0);
        FUN_00cedce4();
        lVar5 = FUN_00d9e390();
        if (lVar5 == 0) {
          FUN_009b12b8(param_1,0,plVar8);
        }
        else {
          FUN_00d55794(lVar5,local_6a8,0);
          fVar9 = (float)local_718._4_8_ - (float)local_6a8._4_8_;
          fVar10 = SUB84(local_718._4_8_,4) - SUB84(local_6a8._4_8_,4);
          fVar9 = (local_718[0] - local_6a8[0]) * (local_718[0] - local_6a8[0]) + fVar9 * fVar9 +
                  fVar10 * fVar10;
          FUN_009b12b8(param_1,fVar9 <= 169.0,plVar8);
          if (fVar9 <= 169.0) {
            local_71c = 0xa600a6a6;
            if ((*(byte *)(param_1 + 0x44) >> 2 & 1) == 0) {
              if (*(int *)(param_1 + 0x3c) == -1) {
                uVar2 = 0;
              }
              else {
                FUN_00d4d9e8(local_708);
                local_708[0] = &PTR_FUN_0281d9b8;
                FUN_00d4dac4(local_708,*(undefined4 *)(param_1 + 0x3c));
                FUN_00d4daf4(local_708,0,1,0,lVar4);
                FUN_00d4dd1c(local_708,1);
                FUN_00d4db48(*(undefined4 *)(param_1 + 0x38),local_708,local_718);
                FUN_00d4d364(local_708,0);
                uVar2 = FUN_00d9e840(local_708,local_6a8,200,0);
              }
              if (*(uint *)(param_1 + 0x40) <= uVar2) {
                local_71c = 0xa600a600;
              }
            }
            else {
              local_71c = 0xff0000c8;
            }
            plVar8 = (long *)*plVar8;
            uVar6 = 0;
            if (plVar8 != (long *)0x0) {
              if (*(int *)(param_1 + 0x30) == (int)plVar8[1]) {
                uVar6 = (**(code **)(*plVar8 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x28) = 0;
                uVar6 = 0;
                *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
              }
            }
            FUN_009d3ebc(uVar6,&local_71c);
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

