// functions/00d62 — 34 functions
#include "libGameKindred.h"




void FUN_00d621fc(float param_1,long param_2,undefined8 *param_3,byte param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_00d622a4();
  *(undefined8 *)(param_2 + 0x40) = *param_3;
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_3 + 1);
  fVar1 = *(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x40);
  fVar2 = *(float *)(param_2 + 0x38) - *(float *)(param_2 + 0x44);
  fVar3 = *(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x48);
  fVar2 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  *(float *)(param_2 + 0x4c) = fVar1 / param_1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfe | param_4 & 1;
  return;
}




void FUN_00d622a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0314f724) {
    lVar1 = 0;
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((lVar1 != 0) && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220)) {
    lVar1 = 0;
  }
  FUN_00d55794(lVar1,param_1 + 0x34,0);
  return;
}




void FUN_00d622f0(undefined4 param_1,long param_2,long param_3,byte param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_00d622a4();
  uVar3 = DAT_03214ce8;
  plVar1 = (long *)(param_3 + 0x28);
  if (param_3 == 0) {
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x30);
    *(long **)(param_2 + 0x58) = plVar1;
    *(int *)(param_2 + 0x60) = iVar2;
    if (iVar2 == *(int *)(param_3 + 0x30)) {
      uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
      goto LAB_00d62384;
    }
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  uVar4 = 0;
  *(undefined4 *)(param_2 + 0x60) = uVar3;
LAB_00d62384:
  FUN_00d55794(uVar4,param_2 + 0x40,0);
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x4c) = param_1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfe | param_4 & 1;
  return;
}




void FUN_00d623bc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_4 + 0x10);
  if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724) {
    lVar2 = 0;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  local_3c = FUN_00da2eb4(lVar2);
  local_48 = FUN_00d9f138(lVar2,&local_3c,param_4 + 0x34,param_4 + 0x40);
  uStack_44 = param_2;
  local_40 = param_3;
  FUN_00d58004(lVar2,&local_48);
  FUN_01985ca8(param_4);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00d62488(long param_1)

{
  return param_1 + 0x40;
}




float FUN_00d62490(long param_1)

{
  return *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x50);
}




byte FUN_00d6249c(long param_1)

{
  return *(byte *)(param_1 + 0x68) & 1;
}




void FUN_00d624a8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_0314f724) {
      lVar3 = 0;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 != 0) && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c09220)) {
      uVar5 = 0xffff0000;
      lVar2 = lVar3;
LAB_00d62550:
      do {
        do {
          lVar4 = lVar2;
          if ((lVar4 != lVar3) &&
             (lVar2 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x444d06f4), lVar2 != 0)) {
            (**(code **)(lVar2 + 8))(lVar4);
          }
          if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar2 = *(long *)(lVar4 + 0x18), lVar2 != 0)) {
            uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
            goto LAB_00d62550;
          }
          if ((uVar5 & 0xffff) == 0) goto LAB_00d625a8;
          lVar2 = *(long *)(lVar4 + 0x20);
        } while (*(long *)(lVar4 + 0x20) != 0);
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) break;
        uVar5 = uVar1 | uVar5 & 0xffff0000;
        while (lVar2 = *(long *)(lVar4 + 0x20), lVar2 == 0) {
          if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d625a8;
          lVar4 = *(long *)(lVar4 + 0x10);
          uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
          if (lVar4 == 0) goto LAB_00d625a8;
        }
      } while( true );
    }
  }
LAB_00d625a8:
  FUN_01985ca8(param_1);
  return;
}




void FUN_00d625c0(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d625e8(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d62618(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d6263c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d62668(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d62670(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d62678(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_0281dd00;
  param_1[5] = &PTR_FUN_0281dd30;
  uVar1 = DAT_03214ce8;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return param_1;
}




void FUN_00d626e8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d626f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d626f4(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281dd60;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  return;
}




void FUN_00d62724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281dd60;
  FUN_00d62758();
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d62758(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_4 + 0x10);
  if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724) {
    lVar2 = 0;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  local_3c = FUN_00da2eb4(lVar2);
  local_48 = FUN_00d9f138(lVar2,&local_3c,param_4 + 0x44,0);
  uStack_44 = param_2;
  local_40 = param_3;
  FUN_00d58004(lVar2,&local_48);
  FUN_01985ca8(param_4);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d62824(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281dd60;
  FUN_00d62758();
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d62860(long param_1)

{
  long lVar1;
  
  DAT_031a9680 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9680 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9680 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d62ca0;
  *(code **)(lVar1 + 0xb8) = FUN_00d62cd0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9680;
  *(undefined4 *)(lVar1 + 0xa8) = 0x58;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_00d628d0,0);
  return;
}




void FUN_00d628d0(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  undefined4 local_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_01988c78();
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724) {
    lVar2 = 0;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  FUN_00d62b60(param_1);
  FUN_00d55794(lVar2,&local_68,1);
  fVar3 = *(float *)(param_1 + 0x50) + fVar3 * *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x50) = fVar3;
  if (6.2831855 <= fVar3) {
    fVar3 = fVar3 - 6.2831855;
    *(float *)(param_1 + 0x50) = fVar3;
  }
  fVar5 = *(float *)(param_1 + 0x40);
  fVar6 = *(float *)(param_1 + 0x44);
  fVar3 = cosf(fVar3);
  fVar8 = *(float *)(param_1 + 0x4c);
  fVar7 = *(float *)(param_1 + 0x40);
  fVar4 = sinf(*(float *)(param_1 + 0x50));
  local_64 = *(undefined4 *)(param_1 + 0x48);
  local_60 = fVar8 + fVar7 * fVar4;
  local_68 = fVar6 + fVar5 * fVar3;
  FUN_00d58004(lVar2,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d62a04(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x44) = *param_2;
  FUN_00d62a2c();
  return;
}




void FUN_00d62a2c(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_3 + 0x10);
  if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724) {
    lVar2 = 0;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
    lVar2 = 0;
  }
  FUN_00d55794(lVar2,local_48,0);
  local_48[1] = 0.0;
  fVar3 = atan2f(local_48[2] - *(float *)(param_3 + 0x4c),local_48[0] - *(float *)(param_3 + 0x44));
  *(float *)(param_3 + 0x50) = fVar3;
  *(undefined4 *)(param_3 + 0x3c) = param_1;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d62af8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5
                 )

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  lVar1 = 0;
  if (param_4 != 0) {
    lVar1 = param_4 + 0x28;
  }
  puVar2 = &DAT_03214ce8;
  if (param_4 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_3 + 0x28) = lVar1;
  *(undefined4 *)(param_3 + 0x30) = uVar3;
  *(undefined4 *)(param_3 + 0x38) = param_5;
  FUN_00d62b60();
  FUN_00d62a2c(param_1,param_2,param_3);
  return;
}




void FUN_00d62b60(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int local_70 [2];
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        iVar1 = *(int *)(param_1 + 0x38);
        if (iVar1 == 0) {
          plVar3 = *(long **)(param_1 + 0x28);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x28) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
            }
          }
          FUN_00d55794(uVar5,param_1 + 0x44,0);
        }
        else {
          plVar3 = *(long **)(param_1 + 0x28);
          uVar5 = 0;
          local_70[0] = iVar1;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x30) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
              local_70[0] = *(int *)(param_1 + 0x38);
            }
            else {
              *(undefined8 *)(param_1 + 0x28) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
            }
          }
          FUN_00d58298(uVar5,local_70,auStack_68);
          *(undefined8 *)(param_1 + 0x44) = local_38;
          *(undefined4 *)(param_1 + 0x4c) = local_30;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d62ca0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_FUN_0281dd60;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  return;
}




void FUN_00d62cd0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d62cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d62cdc(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281dd90;
  uVar1 = DAT_03214ce8;
  puVar3 = param_1 + 6;
  do {
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 1) = uVar1;
    puVar3 = puVar3 + 2;
  } while (puVar3 != param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x46) = 0;
  lVar2 = FUN_01985d44(param_1,DAT_031a9b44);
  param_1[5] = lVar2;
  FUN_00d7fd38(lVar2 + 0x28,FUN_00d62d84,param_1);
  FUN_00d7fd40(param_1[5] + 0x28,FUN_00d62d90,param_1);
  FUN_00d7fd30(param_1[5] + 0x28,1);
  return;
}




void FUN_00d62d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d63278(param_3,param_2,param_2);
  return;
}




void FUN_00d62d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d632e0(param_3,param_2,param_2);
  return;
}




void FUN_00d62d9c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  DAT_031a9b50 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9b50 + 1;
  lVar2 = param_1 + (ulong)DAT_031a9b50 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d63484;
  *(code **)(lVar2 + 0xb8) = FUN_00d634a8;
  *(uint *)(lVar2 + 0xa4) = DAT_031a9b50;
  *(undefined4 *)(lVar2 + 0xa8) = 0x238;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_01986780(param_1,3,FUN_00d62e54,0);
    FUN_01986780(param_1,4,FUN_00d62f0c,0);
    return;
  }
  return;
}




void FUN_00d62e54(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    plVar1 = (long *)(param_1 + 0x30 + lVar4 * 0x10);
    plVar2 = (long *)*plVar1;
    if (plVar2 != (long *)0x0) {
      if ((int)plVar1[1] == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
          if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0312ec00) {
            FUN_00d7d2f8(lVar3,param_1);
            break;
          }
        }
      }
      else {
        *plVar1 = 0;
        *(int *)(plVar1 + 1) = DAT_03214ce8;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x20) {
      return;
    }
  } while( true );
}




void FUN_00d62f0c(long param_1)

{
  bool bVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
  if (*(int *)(param_1 + 0x230) != 0) {
    lVar13 = 0;
    do {
      plVar2 = (long *)(param_1 + 0x30 + lVar13 * 0x10);
      plVar6 = (long *)*plVar2;
      if (plVar6 != (long *)0x0) {
        if ((int)plVar2[1] == (int)plVar6[1]) {
          lVar7 = (**(code **)(*plVar6 + 0x10))();
          lVar11 = *(long *)(lVar7 + 0x18);
          if (lVar11 != 0) {
LAB_00d62f90:
            if (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_0312ec00) goto code_r0x00d62fa0;
            FUN_00d7d1d4(lVar11,2);
            lVar14 = 0;
            do {
              plVar2 = (long *)(param_1 + 0x30 + lVar14 * 0x10);
              plVar6 = (long *)*plVar2;
              if (plVar6 != (long *)0x0) {
                plVar12 = plVar2 + 1;
                if ((int)*plVar12 == (int)plVar6[1]) {
                  lVar9 = (**(code **)(*plVar6 + 0x10))();
                  lVar10 = *(long *)(lVar9 + 0x40);
                  fVar15 = (*(float *)(lVar10 + 0x1e4) + 1.0) *
                           (*(float *)(lVar10 + 0x7c) +
                           *(float *)(lVar10 + 0x130) * (*(float *)(lVar10 + 0x298) + 1.0));
                  if (DAT_031a9ad4 <= fVar15) {
                    fVar15 = DAT_031a9ad4;
                  }
                  uVar5 = *(ushort *)(lVar9 + 0x88) & 0x1f;
                  fVar16 = DAT_031a9a10._4_4_;
                  if (DAT_031a9a10._4_4_ <= fVar15) {
                    fVar16 = fVar15;
                  }
                  if (uVar5 == 0x1f) {
                    bVar1 = true;
                  }
                  else {
                    bVar1 = 1 < *(ushort *)(lVar9 + (ulong)uVar5 * 0x38 + 0x90) - 3;
                  }
                  if ((0.0 < fVar16) && (bVar1)) {
                    plVar6 = (long *)*plVar2;
                    if (plVar6 == (long *)0x0) {
                      lVar9 = 0;
                    }
                    else if ((int)*plVar12 == (int)plVar6[1]) {
                      lVar9 = (**(code **)(*plVar6 + 0x10))();
                    }
                    else {
                      *plVar2 = 0;
                      lVar9 = 0;
                      *(int *)plVar12 = DAT_03214ce8;
                    }
                    uVar3 = FUN_00d55870(lVar9);
                    if (*(char *)(*(long *)(lVar9 + 0x38) + 0x148) == '\0') {
                      uVar4 = FUN_00d55870(lVar7);
                      uVar5 = FUN_00d7d0a0(*(undefined8 *)(lVar9 + 0x80),uVar4);
                      uVar5 = uVar5 ^ 1;
                    }
                    else {
                      uVar5 = 1;
                    }
                    FUN_00d7ca70(lVar11,uVar3,1,uVar5 & 1);
                    FUN_00d7ca70(lVar11,uVar3,2,uVar5 & 1);
                    lVar10 = *(long *)(lVar9 + 0x18);
                    while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_0312ec00))
                          ) {
                      lVar10 = *(long *)(lVar10 + 0x20);
                    }
                    if ((*(char *)(*(long *)(lVar9 + 0x38) + 0x149) != '\0') ||
                       ((lVar10 != 0 && (uVar8 = FUN_00d7d604(), (uVar8 & 1) != 0)))) {
                      FUN_00d7ca70(lVar11,uVar3,4,uVar5 & 1);
                    }
                  }
                }
                else {
                  *plVar2 = 0;
                  *(int *)plVar12 = DAT_03214ce8;
                }
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0x20);
          }
        }
        else {
          *plVar2 = 0;
          *(int *)(plVar2 + 1) = DAT_03214ce8;
        }
      }
LAB_00d631ac:
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x20);
  }
  return;
code_r0x00d62fa0:
  lVar11 = *(long *)(lVar11 + 0x20);
  if (lVar11 == 0) goto LAB_00d631ac;
  goto LAB_00d62f90;
}

