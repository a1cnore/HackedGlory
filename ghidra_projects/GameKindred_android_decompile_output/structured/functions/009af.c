// functions/009af — 22 functions
#include "libGameKindred.h"




void FUN_009af1a0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_009ac620(param_1,param_2,param_3 & 1);
  return;
}




void FUN_009af1a8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5
                 ,uint param_6)

{
  FUN_009ac6b8(param_1,param_2,param_3 & 1,param_4 & 1,param_5,param_6 & 1);
  return;
}




void FUN_009af1b8(long param_1,undefined8 param_2,uint param_3)

{
  FUN_009ac620(param_1 + -0x28,param_2,param_3 & 1);
  return;
}




void FUN_009af1c4(long param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5,
                 uint param_6)

{
  FUN_009ac6b8(param_1 + -0x28,param_2,param_3 & 1,param_4 & 1,param_5,param_6 & 1);
  return;
}




void FUN_009af1d8(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_027c1ab0;
  param_1[6] = &PTR_FUN_027c1e20;
  param_1[5] = &PTR_FUN_027c1c80;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  uVar1 = (ulong)*(uint6 *)((long)param_1 + 0x9c) & 0xfffffe0000000007;
  *(int *)((long)param_1 + 0x9c) = (int)uVar1;
  *(short *)(param_1 + 0x14) = (short)(uVar1 >> 0x20);
  return;
}




void FUN_009af248(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009af250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009af254(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_009af2e4(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009af2e4(uint *param_1,undefined8 *param_2)

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
    FUN_009af36c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_009af36c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long FUN_009af3ec(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_009af478;
    }
  }
  uVar7 = 0xffffffff;
LAB_009af478:
  return *(long *)(param_1 + 8) + uVar7 * 8;
}




void FUN_009af48c(undefined8 *param_1)

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




void FUN_009af4d0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
    lVar2 = lVar2 + 0x10;
    *(undefined4 *)(lVar1 + 0x3c) = 0xffffffff;
  } while (lVar2 != 0x60);
  return;
}




void FUN_009af4fc(long param_1)

{
  long lVar1;
  
  DAT_0312eb80 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb80 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb80 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b0bd0;
  *(code **)(lVar1 + 0xb8) = FUN_009b0c14;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb80;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009af62c,0);
  FUN_019867cc(param_1,0xb0d0275,FUN_009af760,0);
  FUN_019867cc(param_1,0x11a60336,FUN_009af810,0);
  FUN_019867cc(param_1,0xdc302c4,FUN_009af8bc,0);
  FUN_019867cc(param_1,0x22ef04a2,FUN_009af8e8,0);
  FUN_019867cc(param_1,0x443e06d8,FUN_009af9dc,0);
  FUN_019867cc(param_1,0x2a7d0549,FUN_009afa98,0);
  return;
}




void FUN_009af62c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x28) + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) ||
     (1 < *(ushort *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    FUN_009bbfb0();
    uVar3 = FUN_009bd660();
    if ((uVar3 & 1) != 0) {
      lVar4 = 0;
      do {
        fVar7 = *(float *)(param_1 + 0x38 + lVar4);
        if (0.0 < fVar7) {
          fVar5 = (float)FUN_01988c78();
          fVar7 = fVar7 - fVar5;
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(float *)(param_1 + 0x38 + lVar4) = fVar7;
        }
        fVar7 = *(float *)(param_1 + 0x98);
        if (0.0 < fVar7) {
          fVar5 = (float)FUN_01988c78();
          fVar7 = fVar7 - fVar5;
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(float *)(param_1 + 0x98) = fVar7;
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x60);
      lVar4 = *(long *)(param_1 + 0x28);
      uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) && (*(short *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) == 1)) {
        FUN_009afb88(param_1);
        return;
      }
      fVar6 = *(float *)(*(long *)(lVar4 + 0x38) + 0x204);
      fVar5 = *(float *)(*(long *)(lVar4 + 0x38) + 0x208);
      fVar7 = fVar6;
      if (fVar6 <= fVar5) {
        fVar7 = fVar5;
      }
      iVar2 = rand();
      *(float *)(param_1 + 0x94) = fVar6 + (fVar7 - fVar6) * (float)iVar2 * 4.656613e-10;
    }
  }
  return;
}




void FUN_009af8bc(void)

{
  FUN_009b05a0();
  return;
}




void FUN_009afb88(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)(param_1 + 0x94);
  fVar5 = (float)FUN_01988c78();
  fVar6 = fVar6 - fVar5;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x94) = fVar6;
  if (fVar6 <= 0.0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    thunk_FUN_00d9ff34(local_50,&DAT_01b98208);
    uVar3 = FUN_009b00e4(param_1,lVar4 + 0x200,local_50[0]);
    FUN_009b02a0(param_1,1,0,param_1 + 0x30,uVar3);
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
    fVar7 = *(float *)(lVar4 + 0x204);
    fVar6 = *(float *)(lVar4 + 0x208);
    fVar5 = fVar7;
    if (fVar7 <= fVar6) {
      fVar5 = fVar6;
    }
    iVar2 = rand();
    *(float *)(param_1 + 0x94) = fVar7 + (fVar5 - fVar7) * (float)iVar2 * 4.656613e-10;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009afc80(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  fVar4 = *(float *)(lVar2 + 0x204);
  fVar3 = *(float *)(lVar2 + 0x208);
  fVar5 = fVar4;
  if (fVar4 <= fVar3) {
    fVar5 = fVar3;
  }
  iVar1 = rand();
  *(float *)(param_1 + 0x94) = fVar4 + (fVar5 - fVar4) * (float)iVar1 * 4.656613e-10;
  return;
}




void FUN_009afce0(long param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  iVar1 = FUN_0092ec00();
  if (iVar1 == 6) {
    pcVar2 = "ja";
  }
  else if (iVar1 == 0xf) {
    pcVar2 = "zh";
  }
  else if (iVar1 == 8) {
    pcVar2 = "ko";
  }
  else {
    pcVar2 = "en";
  }
  *(char **)(param_1 + 0xa0) = pcVar2;
  *(undefined4 *)(param_1 + 0x90) =
       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x214);
  FUN_009afda8(param_1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x38);
  fVar5 = *(float *)(lVar3 + 0x204);
  fVar4 = *(float *)(lVar3 + 0x208);
  fVar6 = fVar5;
  if (fVar5 <= fVar4) {
    fVar6 = fVar4;
  }
  iVar1 = rand();
  *(float *)(param_1 + 0x94) = fVar5 + (fVar6 - fVar5) * (float)iVar1 * 4.656613e-10;
  return;
}




void FUN_009afda8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x38) + 0x200;
  thunk_FUN_00d9ff34(local_40,&DAT_01b98208);
  uVar3 = FUN_009b0210(param_1,lVar1,local_40[0],uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  thunk_FUN_00d9ff34(local_40,"attack");
  uVar3 = FUN_009b0210(param_1,lVar1,local_40[0],uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  thunk_FUN_00d9ff34(local_40,"movement");
  uVar3 = FUN_009b0210(param_1,lVar1,local_40[0],uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_00d9ff34(local_40,"death");
  uVar3 = FUN_009b0210(param_1,lVar1,local_40[0],uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  thunk_FUN_00d9ff34(local_40,"takeDamage");
  uVar3 = FUN_009b0210(param_1,lVar1,local_40[0],uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  thunk_FUN_00d9ff34(local_40,"learnUltimate");
  uVar3 = FUN_009b0210(param_1,lVar1,local_40[0],uVar4);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009aff08(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  lVar1 = lVar2;
  if (lVar2 != 0) {
    do {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ebb0) break;
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    do {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ebc0) break;
      lVar2 = *(long *)(lVar2 + 0x20);
    } while (lVar2 != 0);
    if (lVar1 != 0) {
      FUN_01985da0(param_1);
    }
    if (lVar2 != 0) {
      FUN_01985da0(param_1,lVar2);
      return;
    }
  }
  return;
}




void FUN_009affa0(long param_1)

{
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  return;
}




void FUN_009affb0(ulong param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long local_b8 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_b8,0x10,DAT_0312eb80,0);
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    plVar4 = local_b8;
    do {
      if ((param_1 & 1) == 0) {
        *(int *)(*plVar4 + 0xa8) = *(int *)(*plVar4 + 0xa8) + -1;
      }
      else {
        FUN_009aff08();
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

