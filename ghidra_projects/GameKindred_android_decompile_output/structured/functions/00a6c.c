// functions/00a6c — 18 functions
#include "libGameKindred.h"




void thunk_FUN_00a6c6ec(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x34a0) * 8);
  if (*(long *)(lVar9 + 0xc0) == 0) {
    lVar8 = 0;
  }
  else {
    uVar4 = FUN_00d7ae40();
    if ((uVar4 & 1) == 0) goto LAB_00a6c858;
    lVar8 = *(long *)(lVar9 + 0xc0);
  }
  if ((*(int *)(lVar9 + 0xcc) != 0) || (lVar8 == 0)) {
    plVar5 = *(long **)(param_1 + 0x3490);
    uVar3 = *(undefined4 *)(lVar9 + 200);
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
    }
    else if (*(int *)(param_1 + 0x3498) == (int)plVar5[1]) {
      uVar6 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x3490) = 0;
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x3498) = DAT_03214ce8;
    }
    uVar7 = FUN_00d6eb50();
    uVar2 = FUN_00d5baac(uVar6);
    uVar6 = FUN_00d6eb3c(uVar7,uVar2);
    FUN_00984f44(auStack_68,uVar3);
    FUN_00ce20fc(auStack_68);
    if (lVar8 == 0) {
      uVar7 = FUN_00ceace8();
      pcVar10 = "talent_none";
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      pcVar10 = *(char **)(lVar8 + 0x38);
      lVar9 = FUN_00d7ade4(lVar8);
      uVar3 = *(undefined4 *)(lVar9 + 0x18);
      uVar2 = FUN_00d7ae38(lVar8);
      uVar7 = FUN_00ceace8();
    }
    FUN_00907068(uVar6,pcVar10,uVar3,uVar2,uVar7);
    uVar3 = FUN_00f048a4("EVENT_CLOSE_TALENT_SELECTOR");
    FUN_00f048e0(auStack_88,uVar3,0);
    FUN_00f04760(param_1,auStack_88,1);
  }
LAB_00a6c858:
  if (*(long *)(lVar1 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a6c14c(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  void *local_80;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0xb48);
  FUN_00a696fc();
  plVar3 = *(long **)(param_1 + 0x3490);
  lVar4 = 0;
  local_80 = pvVar2;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x3498) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x3490) = 0;
      lVar4 = 0;
      *(undefined4 *)(param_1 + 0x3498) = DAT_03214ce8;
    }
  }
  if (param_2 == 0) {
    FUN_00a69b14(pvVar2,3);
  }
  else {
    FUN_00a69abc(pvVar2,param_2,param_3,*(undefined8 *)(lVar4 + 0x38),param_4);
  }
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  lVar4 = (long)pvVar2 + 8;
  local_50 = DAT_03210f58;
  local_78 = FUN_00a6c378;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar4,&local_78);
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_50 = DAT_03210f84;
  local_78 = FUN_00a6c378;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar4,&local_78);
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_50 = DAT_03210f60;
  local_78 = FUN_00a6c384;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar4,&local_78);
  local_58 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_50 = DAT_03210f8c;
  local_78 = FUN_00a6c384;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  FUN_009693a0(lVar4,&local_78);
  FUN_00a6c3ac(param_1 + 0xfe0,&local_80);
  FUN_00f023ec(param_1 + 0xf18,local_80,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6c310(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x34a0);
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0xfe0))) {
    FUN_00a6a384(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)uVar1 * 8),0);
  }
  *(uint *)(param_1 + 0x34a0) = param_2;
  FUN_00a6a384(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)param_2 * 8),1);
  *(uint *)(param_1 + 0x16e4) = *(uint *)(param_1 + 0x16e4) | 4;
  FUN_00a6c888(param_1);
  return;
}




void FUN_00a6c378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a6c664(param_1,param_4,param_5);
  return;
}




void FUN_00a6c384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a6c310(param_1,param_5);
  FUN_00f0490c(param_4);
  return;
}




void FUN_00a6c3ac(uint *param_1,undefined8 *param_2)

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
    FUN_00a6d8e4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a6c434(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00a6c558();
  lVar4 = FUN_00d7ade4(param_2);
  plVar6 = *(long **)(lVar4 + 0x28);
  lVar4 = *plVar6;
  if (lVar4 != 0) {
    do {
      if (*(char *)(lVar4 + 0x34) == '\0') {
        pvVar5 = operator_new(0x2f0);
        uVar1 = *(undefined4 *)(*plVar6 + 0x2c);
        fVar8 = *(float *)(*plVar6 + 8);
        iVar3 = FUN_00d7ae38(param_2);
        fVar7 = *(float *)(*plVar6 + 0xc);
        auVar9 = FUN_00cb3700(*plVar6);
        FUN_00a6a7d4(fVar8 + fVar7 * (float)(iVar3 - 1),pvVar5,auVar9._8_8_,uVar1,auVar9._0_8_);
        local_70 = pvVar5;
        FUN_00a6c5b4(param_1 + 0x3b2,&local_70);
        FUN_00f023ec(param_1 + 0x399,local_70,1);
      }
      plVar6 = plVar6 + 1;
      lVar4 = *plVar6;
    } while (lVar4 != 0);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6c558(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1d90);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1d98) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x1d90);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x1d98) != 0) {
    *(undefined4 *)(param_1 + 0x1d90) = 0;
  }
  return;
}




void FUN_00a6c5b4(uint *param_1,undefined8 *param_2)

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
    FUN_00a6d964(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00a6c63c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00a6c310(param_1,param_3);
  FUN_00f0490c(param_2);
  return;
}




void FUN_00a6c664(undefined8 param_1,long *param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar1 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
     (uVar1 = FUN_00f04a94(param_2), (uVar1 & 1) != 0)) {
    FUN_00a6c310(param_1,param_3);
    FUN_00a6c6ec(param_1);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00a6c6ec(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x34a0) * 8);
  if (*(long *)(lVar9 + 0xc0) == 0) {
    lVar8 = 0;
  }
  else {
    uVar4 = FUN_00d7ae40();
    if ((uVar4 & 1) == 0) goto LAB_00a6c858;
    lVar8 = *(long *)(lVar9 + 0xc0);
  }
  if ((*(int *)(lVar9 + 0xcc) != 0) || (lVar8 == 0)) {
    plVar5 = *(long **)(param_1 + 0x3490);
    uVar3 = *(undefined4 *)(lVar9 + 200);
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
    }
    else if (*(int *)(param_1 + 0x3498) == (int)plVar5[1]) {
      uVar6 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x3490) = 0;
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x3498) = DAT_03214ce8;
    }
    uVar7 = FUN_00d6eb50();
    uVar2 = FUN_00d5baac(uVar6);
    uVar6 = FUN_00d6eb3c(uVar7,uVar2);
    FUN_00984f44(auStack_68,uVar3);
    FUN_00ce20fc(auStack_68);
    if (lVar8 == 0) {
      uVar7 = FUN_00ceace8();
      pcVar10 = "talent_none";
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      pcVar10 = *(char **)(lVar8 + 0x38);
      lVar9 = FUN_00d7ade4(lVar8);
      uVar3 = *(undefined4 *)(lVar9 + 0x18);
      uVar2 = FUN_00d7ae38(lVar8);
      uVar7 = FUN_00ceace8();
    }
    FUN_00907068(uVar6,pcVar10,uVar3,uVar2,uVar7);
    uVar3 = FUN_00f048a4("EVENT_CLOSE_TALENT_SELECTOR");
    FUN_00f048e0(auStack_88,uVar3,0);
    FUN_00f04760(param_1,auStack_88,1);
  }
LAB_00a6c858:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00a6c6ec(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x34a0) * 8);
  if (*(long *)(lVar9 + 0xc0) == 0) {
    lVar8 = 0;
  }
  else {
    uVar4 = FUN_00d7ae40();
    if ((uVar4 & 1) == 0) goto LAB_00a6c858;
    lVar8 = *(long *)(lVar9 + 0xc0);
  }
  if ((*(int *)(lVar9 + 0xcc) != 0) || (lVar8 == 0)) {
    plVar5 = *(long **)(param_1 + 0x3490);
    uVar3 = *(undefined4 *)(lVar9 + 200);
    if (plVar5 == (long *)0x0) {
      uVar6 = 0;
    }
    else if (*(int *)(param_1 + 0x3498) == (int)plVar5[1]) {
      uVar6 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x3490) = 0;
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x3498) = DAT_03214ce8;
    }
    uVar7 = FUN_00d6eb50();
    uVar2 = FUN_00d5baac(uVar6);
    uVar6 = FUN_00d6eb3c(uVar7,uVar2);
    FUN_00984f44(auStack_68,uVar3);
    FUN_00ce20fc(auStack_68);
    if (lVar8 == 0) {
      uVar7 = FUN_00ceace8();
      pcVar10 = "talent_none";
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      pcVar10 = *(char **)(lVar8 + 0x38);
      lVar9 = FUN_00d7ade4(lVar8);
      uVar3 = *(undefined4 *)(lVar9 + 0x18);
      uVar2 = FUN_00d7ae38(lVar8);
      uVar7 = FUN_00ceace8();
    }
    FUN_00907068(uVar6,pcVar10,uVar3,uVar2,uVar7);
    uVar3 = FUN_00f048a4("EVENT_CLOSE_TALENT_SELECTOR");
    FUN_00f048e0(auStack_88,uVar3,0);
    FUN_00f04760(param_1,auStack_88,1);
  }
LAB_00a6c858:
  if (*(long *)(lVar1 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a6c888(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar7 = *(long **)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x694) * 8);
  lVar8 = plVar7[0x18];
  if (lVar8 == 0) {
    FUN_00f0d75c(param_1 + 0x373,&DAT_03210450);
    FUN_00f0d75c(param_1 + 0x3b4,&DAT_03210450);
    *(uint *)((long)param_1 + 0x1f54) = *(uint *)((long)param_1 + 0x1f54) | 4;
    FUN_00a6c558(param_1);
  }
  else {
    puVar2 = (undefined8 *)FUN_00d7ade4(lVar8);
    uVar3 = FUN_00e6ce7c(*puVar2,0);
    FUN_00f0d75c(param_1 + 0x373,uVar3);
    lVar4 = FUN_00d7ade4(lVar8);
    uVar3 = FUN_00e6ce7c(*(undefined8 *)(lVar4 + 8),0);
    thunk_FUN_00e7051c(&local_68,uVar3);
    uVar3 = FUN_00d7ade4(lVar8);
    FUN_00cb3124(&local_68,uVar3);
    FUN_00cb6444(&local_68);
    FUN_00f0d75c(param_1 + 0x3b4,&local_68);
    FUN_00a6c434(param_1,lVar8);
    if (*(float *)((long)param_1 + 0x16a4) != 0.0) {
      *(undefined4 *)((long)param_1 + 0x16a4) = 0;
      FUN_0091ada4(param_1 + 0x2cc);
    }
    if (plVar7[0x18] == 0) {
LAB_00a6c97c:
      if (*(int *)((long)plVar7 + 0xcc) == 0) {
        uVar6 = (uint)(plVar7[0x18] == 0) << 2;
      }
      else {
        uVar6 = 4;
      }
    }
    else {
      uVar5 = FUN_00d7ae40();
      uVar6 = 0;
      if ((uVar5 & 1) != 0) goto LAB_00a6c97c;
    }
    *(uint *)((long)param_1 + 0x1f54) = *(uint *)((long)param_1 + 0x1f54) & 0xfffffffb | uVar6;
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  fVar9 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
  fVar10 = *(float *)(param_1 + 0x1eb);
  fVar12 = *(float *)(plVar7 + 8);
  fVar11 = (float)FUN_00f13e54(param_1 + 0x108);
  fVar13 = *(float *)(param_1 + 0x144);
  fVar14 = fVar10 + fVar12 + fVar13;
  if (-0.0 <= fVar14) {
    fVar14 = (fVar9 + fVar10 + fVar12 + fVar13) - fVar11;
    fVar9 = 0.0;
    if (fVar14 <= 0.0) goto LAB_00a6ca7c;
    fVar9 = -200.0;
  }
  else {
    fVar9 = 200.0;
  }
  fVar9 = fVar9 - fVar14;
LAB_00a6ca7c:
  if (2.0 <= ABS(fVar9)) {
    param_1 = param_1 + 0x13c;
    fVar10 = (float)FUN_00ed0464(param_1);
    fVar12 = (float)NEON_fminnm(fVar13 + fVar9,0);
    fVar9 = -(fVar10 - fVar11);
    if (-(fVar10 - fVar11) <= fVar12) {
      fVar9 = fVar12;
    }
    uVar3 = FUN_00efef08(fVar9,0,0x3e4ccccd,FUN_00a36794);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6cb18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cca88;
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a6cb5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cca88;
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a6cba8(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00a6cbcc(ulong param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
LAB_00a6cd34:
  uVar8 = param_2 - 0x18;
  uVar7 = param_1;
LAB_00a6cd5c:
  param_1 = uVar7;
  uVar7 = param_2 - param_1;
  if ((ulong)(((long)uVar7 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00a6cfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01ba1150 + *(int *)(&DAT_01ba1150 + ((long)uVar7 >> 3) * -0x5555555555555554)))
              ();
    return;
  }
  if ((long)uVar7 < 0xa8) {
    FUN_00a6d5b4(param_1,param_2,param_3);
    goto LAB_00a6d040;
  }
  uVar9 = param_1 + (uVar7 / 0x30) * 0x18;
  if ((long)uVar7 < 0x5da9) {
    iVar3 = FUN_00a6d0cc(param_1,uVar9,uVar8,param_3);
  }
  else {
    lVar10 = (uVar7 / 0x60) * 2 + uVar7 / 0x60;
    iVar3 = FUN_00a6d3f8(param_1,param_1 + lVar10 * 8,uVar9,uVar9 + lVar10 * 8,uVar8,param_3);
  }
  uVar4 = (*(code *)*param_3)(param_1,uVar9);
  uVar7 = param_2 - 0x30;
  uVar11 = uVar8;
  if ((uVar4 & 1) == 0) {
    do {
      uVar11 = uVar7;
      if (param_1 == uVar11) {
        uVar7 = param_1 + 0x18;
        uVar9 = (*(code *)*param_3)(param_1,uVar8);
        if ((uVar9 & 1) != 0) goto LAB_00a6cfc4;
        if (uVar7 == uVar8) goto LAB_00a6d040;
        uVar7 = param_1 + 0x30;
        goto LAB_00a6ccc0;
      }
      uVar4 = (*(code *)*param_3)(uVar11,uVar9);
      uVar7 = uVar11 - 0x18;
    } while ((uVar4 & 1) == 0);
    FUN_008fcdb8(local_80,param_1);
    FUN_008fce60(param_1,uVar11);
    FUN_008fce60(uVar11,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    iVar3 = iVar3 + 1;
  }
  uVar4 = param_1 + 0x18;
  uVar5 = uVar9;
  uVar7 = uVar4;
  if (uVar4 < uVar11) {
    while( true ) {
      uVar9 = uVar5;
      uVar4 = uVar7 - 0x18;
      do {
        uVar7 = uVar4;
        uVar4 = uVar7 + 0x18;
        uVar5 = (*(code *)*param_3)(uVar4,uVar9);
      } while ((uVar5 & 1) != 0);
      uVar7 = uVar7 + 0x30;
      do {
        uVar11 = uVar11 - 0x18;
        uVar5 = (*(code *)*param_3)(uVar11,uVar9);
      } while ((uVar5 & 1) == 0);
      if (uVar11 < uVar4) break;
      FUN_008fcdb8(local_80,uVar4);
      FUN_008fce60(uVar4,uVar11);
      FUN_008fce60(uVar11,local_80);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      iVar3 = iVar3 + 1;
      uVar5 = uVar11;
      if (uVar9 != uVar4) {
        uVar5 = uVar9;
      }
    }
  }
  if ((uVar4 != uVar9) && (uVar7 = (*(code *)*param_3)(uVar9,uVar4), (uVar7 & 1) != 0)) {
    FUN_008fcdb8(local_80,uVar4);
    FUN_008fce60(uVar4,uVar9);
    FUN_008fce60(uVar9,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != 0) goto LAB_00a6cf74;
  uVar9 = FUN_00a6d6cc(param_1,uVar4,param_3);
  uVar7 = FUN_00a6d6cc(uVar4 + 0x18,param_2,param_3);
  if ((uVar7 & 1) == 0) goto code_r0x00a6cf70;
  bVar2 = (uVar9 & 1) == 0;
  if (bVar2) {
    param_2 = uVar4;
  }
  uVar6 = 1;
  if (bVar2) {
    uVar6 = 2;
  }
  goto LAB_00a6cc90;
LAB_00a6ccc0:
  lVar10 = uVar7 - 0x18;
  uVar9 = (*(code *)*param_3)(param_1,lVar10);
  if ((uVar9 & 1) != 0) goto LAB_00a6cce8;
  uVar7 = uVar7 + 0x18;
  if (param_2 == uVar7) goto LAB_00a6d040;
  goto LAB_00a6ccc0;
LAB_00a6cce8:
  FUN_008fcdb8(local_80,lVar10);
  FUN_008fce60(lVar10,uVar8);
  FUN_008fce60(uVar8,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00a6cfc4:
  if (uVar7 == uVar8) {
LAB_00a6d040:
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  while( true ) {
    do {
      uVar11 = uVar7;
      uVar9 = (*(code *)*param_3)(param_1,uVar11);
      uVar7 = uVar11 + 0x18;
    } while ((uVar9 & 1) == 0);
    do {
      uVar8 = uVar8 - 0x18;
      uVar9 = (*(code *)*param_3)(param_1,uVar8);
    } while ((uVar9 & 1) != 0);
    if (uVar8 <= uVar11) break;
    FUN_008fcdb8(local_80,uVar11);
    FUN_008fce60(uVar11,uVar8);
    FUN_008fce60(uVar8,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  uVar6 = 4;
  param_1 = uVar11;
LAB_00a6cc90:
  if ((4 < uVar6) || ((1 << (ulong)uVar6 & 0x15U) == 0)) goto LAB_00a6d040;
  goto LAB_00a6cd34;
code_r0x00a6cf70:
  uVar7 = uVar4 + 0x18;
  if ((uVar9 & 1) == 0) {
LAB_00a6cf74:
    if (((long)(param_2 - uVar4) >> 3) * -0x5555555555555555 <=
        ((long)(uVar4 - param_1) >> 3) * -0x5555555555555555) {
      FUN_00a6cbcc(uVar4 + 0x18,param_2,param_3);
      param_2 = uVar4;
      goto LAB_00a6cd34;
    }
    FUN_00a6cbcc(param_1,uVar4,param_3);
    uVar7 = uVar4 + 0x18;
  }
  goto LAB_00a6cd5c;
}

