// functions/00cfc — 77 functions
#include "libGameKindred.h"




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void thunk_FUN_00cfc44c(void)

{
  return;
}




void FUN_00cfc020(void)

{
  long lVar1;
  
  lVar1 = FUN_00d50ef8();
  FUN_00cecd6c(*(undefined4 *)(lVar1 + 0x260));
  return;
}




void FUN_00cfc038(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf9ea4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x40800000,uVar2,param_1,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cfc0c0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00d51a94();
  if (iVar1 == 0) {
    iVar1 = FUN_00d51964(param_4);
    if (iVar1 == 1) {
      uVar2 = FUN_00d51944(param_4,0);
    }
    else {
      uVar2 = FUN_00d50ef8(param_4);
    }
    FUN_00d55794(uVar2,param_6,0);
  }
  else {
    if (iVar1 == 2) {
      uVar4 = FUN_00d51820(param_4);
    }
    else {
      if (iVar1 != 1) goto LAB_00cfc140;
      uVar4 = FUN_00d51830(param_4);
    }
    *param_6 = uVar4;
    param_6[1] = param_2;
    param_6[2] = param_3;
  }
LAB_00cfc140:
  FUN_00d50ef8(param_4);
  uVar2 = thunk_FUN_00da2eb4();
  uVar3 = FUN_00ef0108(uVar2,param_6,param_6 + 1,0,0);
  if ((uVar3 & 1) == 0) {
    param_6[1] = 0;
  }
  return;
}




void FUN_00cfc178(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_58._0_4_;
  param_2 = param_2 - local_58._4_4_;
  param_3 = param_3 - local_50;
  __x = fVar3 * fVar3 + param_2 * param_2 + param_3 * param_3;
  uVar2 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar2 = CONCAT44(param_2 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  *param_6 = CONCAT44(local_58._4_4_ + (float)((ulong)uVar2 >> 0x20) * fVar3,
                      local_58._0_4_ + (float)uVar2 * fVar3);
  *(float *)(param_6 + 1) = fVar4 * fVar3 + local_50;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cfc27c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined8 param_4,
                 float *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float __x;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d50ef8();
  FUN_00d55794(uVar3,local_58,0);
  iVar2 = FUN_00d51a94(param_4);
  if (iVar2 == 1) {
    fVar5 = (float)FUN_00d51830(param_4);
  }
  else {
    fVar5 = (float)FUN_00d51820(param_4);
  }
  fVar5 = fVar5 - local_58[0];
  param_3 = param_3 - local_50;
  __x = fVar5 * fVar5 + 0.0 + param_3 * param_3;
  fVar4 = (float)DAT_03218f68;
  fVar6 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar6 = SQRT(__x);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(__x);
    }
    fVar4 = fVar5 / fVar6;
    fVar6 = param_3 / fVar6;
  }
  *param_5 = fVar4;
  param_5[1] = fVar6;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cfc37c(undefined8 param_1,undefined8 *param_2)

{
  FUN_00cfc27c();
  *param_2 = CONCAT44(-(float)((ulong)*param_2 >> 0x20),-(float)*param_2);
  return;
}




void FUN_00cfc3a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d5810c(uVar1,param_2,&DAT_03218f20);
  return;
}




undefined8 FUN_00cfc3d8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00d51a94();
  if (iVar1 == 1) {
    uVar2 = FUN_00d51778(param_1);
    return uVar2;
  }
  iVar1 = FUN_00d51964(param_1);
  if (iVar1 == 1) {
    uVar2 = FUN_00d51954(param_1,0);
    return uVar2;
  }
  return 0;
}




void FUN_00cfc438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02810bc8;
  param_1[1] = 0;
  return;
}




void FUN_00cfc44c(void)

{
  return;
}




void FUN_00cfc450(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcfc454);
  (*pcVar1)();
}




undefined8 FUN_00cfc454(void)

{
  return 1;
}




undefined8 FUN_00cfc45c(void)

{
  return 0;
}




void FUN_00cfc464(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




undefined8 FUN_00cfc46c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_00cfc474(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  if (*plVar1 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x40))(param_2);
    plVar1 = param_2;
    while (lVar2 != 0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1);
      lVar2 = (**(code **)(*plVar1 + 0x40))();
    }
    plVar1 = plVar1 + 1;
  }
  *plVar1 = (long)param_2;
  return;
}




void FUN_00cfc4e0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x30;
  plVar6 = (long *)register0x00000008;
  if (param_1 != 0) {
    while (param_2 != 0) {
      *(long *)(param_1 + 8) = param_2;
      lVar3 = (long)iVar1;
      if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
        plVar4 = (long *)(&stack0xffffffffffffffc8 + lVar3);
      }
      else {
        plVar4 = plVar6;
        plVar6 = plVar6 + 1;
      }
      param_1 = param_2;
      param_2 = *plVar4;
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cfc5a8(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[6] = 0;
  *param_1 = &PTR_FUN_02810c28;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  return;
}




void FUN_00cfc5f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00cfc5fc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00cfc604(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00cfc60c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cfc614(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00cfc61c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00cfc624(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_58 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d5048c(param_2);
    lVar6 = *(long *)(lVar5 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) {
        uVar3 = (uint)*(byte *)(param_1 + 0x38);
      }
      else {
        uVar3 = (**(code **)(param_1 + 0x28))(param_2);
      }
    }
    else {
      uVar3 = FUN_00d5401c(lVar6);
    }
    lVar6 = FUN_00d53914(lVar6,uVar3);
    uVar1 = *(uint *)(lVar6 + 0x80);
    if (uVar1 < 3) {
      local_58[0] = 0;
      (**(code **)(param_1 + 0x10))(param_2,local_58);
      if ((local_58[0] != 0) &&
         ((*(code **)(param_1 + 0x20) == (code *)0x0 ||
          (uVar4 = (**(code **)(param_1 + 0x20))(param_2,local_58[0],0), (uVar4 & 1) != 0)))) {
        FUN_008ff6ec(lVar5,uVar3,local_58[0]);
      }
    }
    else if (uVar1 == 3) {
      (**(code **)(param_1 + 0x18))(param_2,local_58);
      if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
         (uVar4 = (**(code **)(param_1 + 0x20))(param_2,0,local_58), (uVar4 & 1) != 0)) {
        FUN_008ff6f4(lVar5,uVar3,local_58);
      }
    }
    else if ((uVar1 == 4) &&
            ((*(code **)(param_1 + 0x20) == (code *)0x0 ||
             (uVar4 = (**(code **)(param_1 + 0x20))(param_2,0,0), (uVar4 & 1) != 0)))) {
      FUN_008ff6e4(lVar5,uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cfc7c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d51778();
  *param_2 = uVar1;
  return;
}




void FUN_00cfc7e4(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d51820();
  *param_5 = uVar1;
  param_5[1] = param_2;
  param_5[2] = param_3;
  return;
}




void FUN_00cfc80c(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cfc830(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_02810c88;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}




void FUN_00cfc864(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}




void FUN_00cfc870(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d51778(param_2);
  if ((lVar1 != 0) && ((*(char *)(param_1 + 0x10) != '\0' || ((*(byte *)(lVar1 + 0x2f9) & 1) == 0)))
     ) {
    FUN_00d518f4(param_2);
    return;
  }
  return;
}




void FUN_00cfc8c0(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




void FUN_00cfc8e4(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_02810ce8;
  param_1[2] = 0;
  return;
}




void FUN_00cfc91c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00cfc924(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}




void FUN_00cfc930(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  undefined4 local_78 [10];
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d5048c(param_2);
    uVar5 = FUN_00d9ea34();
    local_4c = 0xffffffff;
    thunk_FUN_00d9ff34(local_78,*(undefined8 *)(param_1 + 0x10));
    FUN_00d9ff84(&local_50,local_78[0]);
    uVar3 = FUN_00d6bbac(uVar5,local_50,&local_4c);
    if (((uVar3 & 1) != 0) &&
       (iVar2 = FUN_00d6b8f8(uVar5,local_4c), iVar2 == *(int *)(lVar4 + 0x260))) {
      fVar7 = (float)FUN_00d6b9f8(uVar5,local_4c);
      pcVar6 = *(code **)(param_1 + 0x18);
      if ((pcVar6 == (code *)0x0) &&
         (pcVar6 = *(code **)(param_1 + 0x20), param_2 = lVar4, pcVar6 == (code *)0x0)) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = (float)(*pcVar6)(param_2);
      }
      if (fVar7 < fVar8) {
        FUN_00d04628(local_78,*(undefined4 *)(lVar4 + 0x260),local_4c);
        FUN_00ce20fc(local_78);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cfca58(void *param_1)

{
  FUN_00cfc44c();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00cfca7c(void)

{
  return 1;
}




void FUN_00cfca84(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcfca88);
  (*pcVar1)();
}




void FUN_00cfca88(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x29) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 2) = 0xee;
  *param_1 = &PTR_FUN_02810da8;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  return;
}




long FUN_00cfcad8(long param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_00cfcb04(param_1,param_3);
  return param_1;
}




void FUN_00cfcb04(long param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 != (byte *)0x0) && (uVar1 = FUN_00e6a488(param_2), (uVar1 & 1) == 0)) {
    uVar3 = (uint)*param_2;
    uVar2 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar2 = (uVar2 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_2;
      } while (*param_2 != 0);
    }
    *(uint *)(param_1 + 0x14) = uVar2;
  }
  return;
}




void FUN_00cfcb68(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




long FUN_00cfcb70(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x34) = 3;
  FUN_00cfcb04(param_1,param_3);
  return param_1;
}




void FUN_00cfcba8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}




void FUN_00cfcbb0(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}




void FUN_00cfcbbc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00cfcbc4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}




void FUN_00cfcbcc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00cfcbd4(float param_1,undefined8 param_2,code *param_3,float *param_4)

{
  if (param_3 != (code *)0x0) {
    (*param_3)(param_2,param_4);
    return 1;
  }
  if (ABS(param_1) < 0.01) {
    *param_4 = 0.0;
    return 0;
  }
  *param_4 = param_1;
  return 1;
}




void FUN_00cfcc24(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong extraout_d0;
  float fVar21;
  undefined8 local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  undefined4 local_f8;
  float local_f4;
  undefined8 local_f0 [6];
  ulong local_c0;
  float local_b8;
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  uVar9 = FUN_00ceab48();
  if ((uVar9 & 1) == 0) goto switchD_00cfd180_default;
  uVar10 = FUN_00d5048c(param_5);
  local_f4 = 0.0;
  if (*(code **)(param_4 + 0x28) == (code *)0x0) {
    local_f4 = *(float *)(param_4 + 0x40);
    param_2 = 0.01;
    param_3 = ABS(local_f4);
    if (0.01 <= param_3) goto LAB_00cfccbc;
    bVar2 = false;
    local_f4 = 0.0;
  }
  else {
    (**(code **)(param_4 + 0x28))(param_5,&local_f4);
LAB_00cfccbc:
    bVar2 = true;
  }
  if (*(code **)(param_4 + 0x18) != (code *)0x0) {
    (**(code **)(param_4 + 0x18))(param_5,uVar10,param_4 + 0x10,local_f0);
    FUN_00cfcb04(param_4,local_f0[0]);
  }
  local_f8 = 0;
  if (*(code **)(param_4 + 0x38) != (code *)0x0) {
    (**(code **)(param_4 + 0x38))(param_5,&local_f8);
  }
  iVar3 = FUN_00d51a94(param_5);
  if (iVar3 == 0) {
    if (*(char *)(param_4 + 0x30) != '\0') {
      iVar3 = FUN_00d51964(param_5);
      if (iVar3 != 0) {
        uVar15 = 0;
        do {
          lVar11 = FUN_00d51954(param_5,uVar15);
          if (lVar11 != 0) {
            if (bVar2) {
              uVar16 = FUN_00cfd71c(local_f4,param_4,lVar11,uVar10);
              local_108 = CONCAT44(param_2,uVar16);
              local_100 = param_3;
              uVar4 = FUN_00d5ba88(uVar10);
              uVar5 = FUN_00d5ba88(uVar10);
              uVar16 = *(undefined4 *)(param_4 + 0x10);
              uVar6 = FUN_00ceb350();
              FUN_00d02ac0(local_f8,local_f0,uVar4,uVar5,&local_108,uVar16,param_4 + 0x14,uVar6);
            }
            else {
              uVar4 = FUN_00d5ba88(uVar10);
              uVar5 = FUN_00d5ba88(uVar10);
              uVar6 = FUN_00d5ba88(lVar11);
              uVar16 = *(undefined4 *)(param_4 + 0x10);
              uVar7 = FUN_00ceb350();
              FUN_00d02a78(local_f8,local_f0,uVar4,uVar5,uVar6,uVar16,param_4 + 0x14,uVar7);
            }
            FUN_00ce20fc(local_f0);
          }
          uVar15 = uVar15 + 1;
          uVar8 = FUN_00d51964(param_5);
        } while (uVar15 < uVar8);
      }
      goto switchD_00cfd180_default;
    }
    if (*(int *)(param_4 + 0x34) == 0) {
      uVar9 = FUN_00d51820(param_5);
      local_108 = CONCAT44(param_2,(int)uVar9);
      local_100 = param_3;
    }
    else {
      uVar9 = extraout_d0;
      if (*(int *)(param_4 + 0x34) == 3) {
switchD_00cfd0bc_caseD_3:
        (**(code **)(param_4 + 0x20))(param_5,&local_108);
        uVar9 = local_108 & 0xffffffff;
      }
    }
    uVar16 = FUN_00cfd7c4(uVar9,local_108._4_4_,local_100,local_f4,param_4,uVar10);
LAB_00cfd1c0:
    local_108 = CONCAT44(local_108._4_4_,uVar16);
    uVar4 = FUN_00d5ba88(uVar10);
    uVar5 = FUN_00d5ba88(uVar10);
    uVar16 = *(undefined4 *)(param_4 + 0x10);
    uVar6 = FUN_00ceb350();
LAB_00cfd204:
    pfVar12 = (float *)&local_108;
    goto LAB_00cfd464;
  }
  if (iVar3 != 2) {
    if (iVar3 != 1) goto switchD_00cfd180_default;
    if (*(char *)(param_4 + 0x30) != '\0') {
      iVar3 = FUN_00d51964(param_5);
      if (iVar3 != 0) {
        uVar15 = 0;
        do {
          lVar11 = FUN_00d51954(param_5,uVar15);
          if (lVar11 != 0) {
            if (bVar2) {
              uVar16 = FUN_00cfd71c(local_f4,param_4,lVar11,uVar10);
              local_108 = CONCAT44(param_2,uVar16);
              local_100 = param_3;
              uVar4 = FUN_00d5ba88(uVar10);
              uVar5 = FUN_00d5ba88(uVar10);
              uVar16 = *(undefined4 *)(param_4 + 0x10);
              uVar6 = FUN_00ceb350();
              FUN_00d02ac0(local_f8,local_f0,uVar4,uVar5,&local_108,uVar16,param_4 + 0x14,uVar6);
            }
            else {
              uVar4 = FUN_00d5ba88(uVar10);
              uVar5 = FUN_00d5ba88(uVar10);
              uVar6 = FUN_00d5ba88(lVar11);
              uVar16 = *(undefined4 *)(param_4 + 0x10);
              uVar7 = FUN_00ceb350();
              FUN_00d02a78(local_f8,local_f0,uVar4,uVar5,uVar6,uVar16,param_4 + 0x14,uVar7);
            }
            FUN_00ce20fc(local_f0);
          }
          uVar15 = uVar15 + 1;
          uVar8 = FUN_00d51964(param_5);
        } while (uVar15 < uVar8);
      }
      goto switchD_00cfd180_default;
    }
    switch(*(undefined4 *)(param_4 + 0x34)) {
    case 1:
      FUN_00d55794(uVar10,&local_108,0);
      FUN_00d5810c(uVar10,&local_120,&DAT_03218f20);
      local_110._0_4_ = (float)FUN_00d51830(param_5);
      local_110._0_4_ = (float)local_110 - (float)local_108;
      local_110._4_4_ = param_3 - local_100;
      fVar21 = (float)local_110 * (float)local_110 + local_110._4_4_ * local_110._4_4_;
      if (1e-08 <= fVar21) {
        fVar17 = SQRT(fVar21);
        if (NAN(fVar17)) {
          fVar17 = sqrtf(fVar21);
        }
        fVar18 = (float)local_110 / fVar17;
        fVar17 = local_110._4_4_ / fVar17;
        local_110 = CONCAT44(fVar17,fVar18);
      }
      else {
        local_110 = DAT_03218f20;
        fVar18 = (float)DAT_03218f20;
        fVar17 = (float)((ulong)DAT_03218f20 >> 0x20);
      }
      fVar21 = local_f4 * 0.017453292;
      fVar19 = sinf(fVar21);
      fVar20 = cosf(fVar21);
      fVar21 = fVar20 * fVar18 - fVar19 * fVar17;
      fVar17 = fVar19 * fVar18 + fVar20 * fVar17;
      break;
    case 2:
      FUN_00d55794(uVar10,&local_108,0);
      FUN_00d5810c(uVar10,&local_120,&DAT_03218f20);
      fVar21 = local_f4 * 0.017453292;
      fVar17 = sinf(fVar21);
      fVar18 = cosf(fVar21);
      fVar21 = fVar18 * local_120 - fVar17 * fStack_11c;
      fVar17 = fVar17 * local_120 + fVar18 * fStack_11c;
      break;
    case 3:
      goto switchD_00cfd0bc_caseD_3;
    case 4:
      lVar11 = FUN_00d51778(param_5);
      if (lVar11 == 0) goto switchD_00cfd180_default;
      if (bVar2) {
        uVar16 = FUN_00cfd71c(local_f4,param_4,uVar10,lVar11);
        local_108 = CONCAT44(param_2,uVar16);
        local_100 = param_3;
        uVar4 = FUN_00d5ba88(uVar10);
        uVar5 = FUN_00d5ba88(lVar11);
        uVar16 = *(undefined4 *)(param_4 + 0x10);
        uVar6 = FUN_00ceb350();
        goto LAB_00cfd204;
      }
      uVar4 = FUN_00d5ba88(uVar10);
      uVar5 = FUN_00d5ba88(lVar11);
      uVar6 = FUN_00d5ba88(uVar10);
      uVar16 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = FUN_00ceb350();
      goto LAB_00cfd708;
    default:
      lVar11 = FUN_00d51778(param_5);
      if (lVar11 == 0) goto switchD_00cfd180_default;
      if (bVar2) {
        uVar16 = FUN_00cfd71c(local_f4,param_4,lVar11,uVar10);
        local_108._4_4_ = param_2;
        local_100 = param_3;
        goto LAB_00cfd1c0;
      }
      uVar4 = FUN_00d5ba88(uVar10);
      uVar5 = FUN_00d5ba88(uVar10);
      uVar6 = FUN_00d5ba88(lVar11);
      uVar16 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = FUN_00ceb350();
LAB_00cfd708:
      FUN_00d02a78(local_f8,local_f0,uVar4,uVar5,uVar6,uVar16,param_4 + 0x14,uVar7);
      goto LAB_00cfd630;
    }
    local_110 = CONCAT44(fVar17,fVar21);
    uVar4 = FUN_00d5ba88(uVar10);
    uVar5 = FUN_00d5ba88(uVar10);
    uVar16 = *(undefined4 *)(param_4 + 0x10);
    uVar6 = FUN_00ceb350();
    puVar13 = &local_110;
    pfVar12 = (float *)&local_108;
    pfVar14 = &local_120;
    goto LAB_00cfd628;
  }
  if (*(char *)(param_4 + 0x30) != '\0') {
    iVar3 = FUN_00d51964(param_5);
    if (iVar3 != 0) {
      uVar15 = 0;
      do {
        lVar11 = FUN_00d51954(param_5,uVar15);
        if (lVar11 != 0) {
          if (bVar2) {
            uVar16 = FUN_00cfd71c(local_f4,param_4,lVar11,uVar10);
            local_108 = CONCAT44(param_2,uVar16);
            local_100 = param_3;
            uVar4 = FUN_00d5ba88(uVar10);
            uVar5 = FUN_00d5ba88(uVar10);
            uVar16 = *(undefined4 *)(param_4 + 0x10);
            uVar6 = FUN_00ceb350();
            FUN_00d02ac0(local_f8,local_f0,uVar4,uVar5,&local_108,uVar16,param_4 + 0x14,uVar6);
          }
          else {
            uVar4 = FUN_00d5ba88(uVar10);
            uVar5 = FUN_00d5ba88(uVar10);
            uVar6 = FUN_00d5ba88(lVar11);
            uVar16 = *(undefined4 *)(param_4 + 0x10);
            uVar7 = FUN_00ceb350();
            FUN_00d02a78(local_f8,local_f0,uVar4,uVar5,uVar6,uVar16,param_4 + 0x14,uVar7);
          }
          FUN_00ce20fc(local_f0);
        }
        uVar15 = uVar15 + 1;
        uVar8 = FUN_00d51964(param_5);
      } while (uVar15 < uVar8);
    }
    goto switchD_00cfd180_default;
  }
  iVar3 = *(int *)(param_4 + 0x14);
  if ((iVar3 == -0x7ee3623b) || (iVar3 == 0)) {
    FUN_00d55794(uVar10,&local_108,0);
  }
  else {
    FUN_00d58298(uVar10,(int *)(param_4 + 0x14),local_f0);
    local_108 = local_c0;
    local_100 = local_b8;
  }
  switch(*(undefined4 *)(param_4 + 0x34)) {
  case 0:
    uVar9 = FUN_00d51820(param_5);
    local_120 = (float)uVar9;
    fStack_11c = param_2;
    local_118 = param_3;
    break;
  case 1:
    FUN_00d55794(uVar10,&local_120,0);
    FUN_00d5810c(uVar10,&local_110,&DAT_03218f20);
    local_128._0_4_ = (float)FUN_00d51820(param_5);
    local_128._0_4_ = (float)local_128 - local_120;
    local_128._4_4_ = param_3 - local_118;
    fVar21 = (float)local_128 * (float)local_128 + local_128._4_4_ * local_128._4_4_;
    if (1e-08 <= fVar21) {
      fVar17 = SQRT(fVar21);
      if (NAN(fVar17)) {
        fVar17 = sqrtf(fVar21);
      }
      fVar18 = (float)local_128 / fVar17;
      fVar17 = local_128._4_4_ / fVar17;
      local_128 = CONCAT44(fVar17,fVar18);
    }
    else {
      local_128 = DAT_03218f20;
      fVar18 = (float)DAT_03218f20;
      fVar17 = (float)((ulong)DAT_03218f20 >> 0x20);
    }
    fVar21 = local_f4 * 0.017453292;
    fVar19 = sinf(fVar21);
    fVar20 = cosf(fVar21);
    fVar21 = fVar20 * fVar18 - fVar19 * fVar17;
    fVar17 = fVar19 * fVar18 + fVar20 * fVar17;
    goto LAB_00cfd5dc;
  case 2:
    FUN_00d55794(uVar10,&local_120,0);
    FUN_00d5810c(uVar10,&local_110,&DAT_03218f20);
    fVar21 = local_f4 * 0.017453292;
    fVar17 = sinf(fVar21);
    fVar18 = cosf(fVar21);
    fVar21 = fVar18 * (float)local_110 - fVar17 * local_110._4_4_;
    fVar17 = fVar17 * (float)local_110 + fVar18 * local_110._4_4_;
LAB_00cfd5dc:
    local_128 = CONCAT44(fVar17,fVar21);
    uVar4 = FUN_00d5ba88(uVar10);
    uVar5 = FUN_00d5ba88(uVar10);
    uVar16 = *(undefined4 *)(param_4 + 0x10);
    uVar6 = FUN_00ceb350();
    puVar13 = &local_128;
    pfVar12 = &local_120;
    pfVar14 = (float *)&local_110;
LAB_00cfd628:
    FUN_00d02b18(local_f8,local_f0,uVar4,uVar5,puVar13,uVar16,pfVar12,pfVar14,param_4 + 0x14,uVar6);
    goto LAB_00cfd630;
  case 3:
    (**(code **)(param_4 + 0x20))(param_5,&local_120);
    uVar9 = (ulong)(uint)local_120;
    break;
  default:
    goto switchD_00cfd180_default;
  }
  local_120 = (float)FUN_00cfd7c4(uVar9,param_4,uVar10);
  uVar4 = FUN_00d5ba88(uVar10);
  uVar5 = FUN_00d5ba88(uVar10);
  uVar16 = *(undefined4 *)(param_4 + 0x10);
  uVar6 = FUN_00ceb350();
  pfVar12 = &local_120;
LAB_00cfd464:
  FUN_00d02ac0(local_f8,local_f0,uVar4,uVar5,pfVar12,uVar16,param_4 + 0x14,uVar6);
LAB_00cfd630:
  FUN_00ce20fc(local_f0);
switchD_00cfd180_default:
  if (*(long *)(lVar1 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

