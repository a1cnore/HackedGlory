// functions/00d84 — 57 functions
#include "libGameKindred.h"




void FUN_00d8400c(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[8] = 0xffffffff00000000;
  *param_1 = &PTR_FUN_0281ed10;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}




long FUN_00d84048(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00d813d0(param_2);
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return param_1;
}




long FUN_00d84078(long param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_00d813d0(param_2);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  return param_1;
}




long FUN_00d840b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00d813d0(param_2);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return param_1;
}




void FUN_00d840e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_00d840ec(long param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}




void FUN_00d840f8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d84100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}




void FUN_00d84104(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cVar3 = FUN_00d55870(param_3);
  cVar4 = FUN_00d813b8(param_2);
  if ((bool)*(char *)(param_1 + 0x68) == (cVar3 == cVar4)) {
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar6 = *(long *)(param_3 + 0x18);
      while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar6 = *(long *)(lVar6 + 0x20);
      }
      uVar7 = FUN_00d6c0bc();
      if ((uVar7 & 1) != 0) goto LAB_00d841f8;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      thunk_FUN_00d9ff34(local_50);
      iVar5 = FUN_00d5bc54(param_3);
      if (local_50[0] != iVar5) goto LAB_00d841f8;
    }
    uVar1 = *(uint *)(param_3 + 0x2f4);
    if (((*(uint *)(param_1 + 0x40) & (uVar1 ^ 0xffffffff)) == 0) &&
       (((*(uint *)(param_1 + 0x44) == 0xffffffff || ((*(uint *)(param_1 + 0x44) & uVar1) != 0)) &&
        ((*(uint *)(param_1 + 0x48) & uVar1) == 0)))) {
      *(long *)(param_1 + 0x50) = param_3;
      FUN_00d84224(param_1,param_2);
    }
  }
LAB_00d841f8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d84224(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_48 = 0;
  local_40 = 0;
  local_50 = param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&local_50);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00cd97a4();
    FUN_00cdb7d4(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_00cdb854(lVar3,&local_50);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_00d8444c(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8431c(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x50);
  return;
}




void FUN_00d84328(void)

{
  return;
}




void FUN_00d8432c(void)

{
  return;
}




void FUN_00d84330(void)

{
  return;
}




void FUN_00d84334(void)

{
  return;
}




void FUN_00d84338(void)

{
  return;
}




void FUN_00d8433c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_0281ed70;
  plVar2 = param_1 + 5;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_00d843f0(plVar2,lVar1 + -0x20);
    FUN_00cd9884(lVar1 + -0x20);
    lVar1 = *plVar2;
  }
  FUN_00cdb724(param_1 + 2);
  return;
}




void FUN_00d843a0(void *param_1)

{
  FUN_00d8433c();
  operator_delete(param_1);
  return;
}




void FUN_00d843c4(void)

{
  return;
}




void FUN_00d843c8(void *param_1)

{
  FUN_00d8433c();
  operator_delete(param_1);
  return;
}




void FUN_00d843ec(void)

{
  return;
}




void FUN_00d843f0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 0x20);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00d8444c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  lVar2 = 0;
  if (lVar4 != 0) {
    lVar2 = lVar4 + -0x20;
  }
  if (lVar2 != param_2) {
    FUN_00d843f0((long *)(param_1 + 0x28),param_2);
    FUN_00cd9884(param_2);
    return;
  }
  if (*(long *)(param_2 + 8) != 0) {
    plVar3 = (long *)(*(long *)(param_2 + 8) + -8);
    while (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d844cc(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_0281edc8;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  return;
}




void FUN_00d844fc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x48) = param_1;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}




void FUN_00d8450c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d81178(param_2);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x4c) == '\0')) {
    fVar4 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
    *(float *)(param_1 + 0x48) =
         (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar4 + *(float *)(lVar2 + 0x2e8))) / fVar4;
  }
  FUN_00d80bb8(param_2,local_58);
  fVar4 = (float)FUN_00d80ebc(param_2);
  fVar4 = fVar4 + *(float *)(param_1 + 0x48);
  if (fVar4 <= 0.2) {
    fVar4 = 0.2;
  }
  pfVar3 = (float *)FUN_00d81388(param_2);
  fVar5 = (float)local_58._4_8_ - (float)*(undefined8 *)(pfVar3 + 1);
  fVar6 = SUB84(local_58._4_8_,4) - (float)((ulong)*(undefined8 *)(pfVar3 + 1) >> 0x20);
  if ((local_58[0] - *pfVar3) * (local_58[0] - *pfVar3) + fVar5 * fVar5 + fVar6 * fVar6 <
      fVar4 * fVar4) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else if ((*(byte *)(lVar2 + 0x2f9) & 1) != 0) {
      lVar2 = 0;
    }
    *(long *)(param_1 + 0x40) = lVar2;
    FUN_00d84224(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8463c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_00d81178(param_2);
  if (lVar1 != param_3) {
    return;
  }
  *(long *)(param_1 + 0x40) = param_3;
  FUN_00d84224(param_1,param_2);
  return;
}




void FUN_00d84694(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x40);
  return;
}




void FUN_00d846a0(void *param_1)

{
  FUN_00d8433c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00d84224(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&uStack_50);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00cd97a4();
    FUN_00cdb7d4(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_00cdb854(lVar3,&uStack_50);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_00d8444c(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d846c8(void *param_1)

{
  FUN_00d8433c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00d84224(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&uStack_50);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00cd97a4();
    FUN_00cdb7d4(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_00cdb854(lVar3,&uStack_50);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_00d8444c(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d846f0(void *param_1)

{
  FUN_00d8433c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00d84224(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = param_2;
  (**(code **)(*param_1 + 0x40))(param_1,&uStack_50);
  lVar3 = 0;
  if (param_1[5] != 0) {
    lVar3 = param_1[5] + -0x20;
  }
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) != 0)) {
    lVar3 = FUN_00cd97a4();
    FUN_00cdb7d4(param_1 + 2,lVar3);
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    *puVar4 = 0;
    if (param_1[5] == 0) {
      param_1[5] = (long)puVar4;
    }
    else {
      *(undefined8 **)param_1[6] = puVar4;
    }
    param_1[6] = (long)puVar4;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  lVar1 = 0;
  if (*(long *)(lVar3 + 8) != 0) {
    lVar1 = *(long *)(lVar3 + 8) + -8;
  }
  *(long *)(lVar3 + 0x28) = lVar1;
  FUN_00cdb854(lVar3,&uStack_50);
  if (*(long *)(lVar3 + 0x28) == 0) {
    FUN_00d8444c(param_1,lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d84718(void *param_1)

{
  FUN_00d8433c();
  operator_delete(param_1);
  return;
}




void FUN_00d8473c(undefined8 *param_1)

{
  FUN_00d80ee4(*param_1);
  return;
}




void FUN_00d84754(void)

{
  FUN_00d80ee4();
  return;
}




undefined8 FUN_00d84768(void)

{
  return 0;
}




undefined8 FUN_00d84770(int param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_458 [128];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019889cc(local_458,0x80,DAT_0312f140,0);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      uVar4 = local_458[uVar5];
      iVar3 = FUN_00d80ba8(uVar4);
      if (iVar3 == param_1) goto LAB_00d847e8;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  uVar4 = 0;
LAB_00d847e8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d8481c(undefined8 *param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long alStack_70 [2];
  
  lVar1 = tpidr_el0;
  alStack_70[1] = *(long *)(lVar1 + 0x28);
  lVar5 = (long)alStack_70 - ((ulong)param_3 * 8 + 0xf & 0xffffffff0);
  uVar2 = FUN_019889cc(lVar5,param_3,DAT_0312f140,0);
  uVar6 = 0;
  if ((uVar2 != 0) && (param_3 != 0)) {
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar5 + uVar8 * 8);
      lVar3 = FUN_00d80f68(uVar7);
      puVar4 = param_1;
      if ((lVar3 != 0) && (lVar3 = FUN_00d80f68(uVar7), *(int *)(lVar3 + 0x260) == param_2)) {
        puVar4 = param_1 + 1;
        *param_1 = uVar7;
        uVar6 = uVar6 + 1;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 < uVar2) && (param_1 = puVar4, uVar6 < param_3));
  }
  if (*(long *)(lVar1 + 0x28) == alStack_70[1]) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d84918(undefined8 param_1,long param_2)

{
  return *(uint *)(param_2 + 0x2f4) & 1;
}




void FUN_00d84924(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((code *)(&PTR_FUN_02bed728)[param_3 & 0xffffffff] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d84934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_02bed728)[param_3 & 0xffffffff])();
    return;
  }
  return;
}




undefined * FUN_00d8493c(ulong param_1)

{
  return (&PTR_FUN_02bed728)[param_1 & 0xffffffff];
}




void FUN_00d8494c(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_AdagioDefaultAttack_core";
  param_2[4] = "Effect_AdagioDefaultAttack_impact";
  param_2[6] = "Effect_AdagioProjectileGround";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  param_2[0xc] = "Sound_Adagio_Basic_Attack_Impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41600000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d849fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8494c(param_1,param_2,0);
  return;
}




void FUN_00d84a04(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8494c(param_1,param_2,2);
  return;
}




void FUN_00d84a0c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d80f68();
  *param_2 = "Effect_Adagio_Spell_Projectile";
  param_2[4] = "Effect_AdagioFortunesSmile_impact";
  param_2[0xc] = "Sound_Adagio_Ability_A_Impact";
  lVar3 = param_1 + 0x120;
  FUN_00e5ff9c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5ffd8(0x41c00000,lVar3);
  lVar3 = FUN_00d84dfc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  uVar6 = FUN_00d59f54(lVar2,0,4,0x19,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar6,0xbf800000,0xbf800000,plVar4,0x40000,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"ImpactDamage",0);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Adagio_ArcaneFire_Heal_02bf01c8);
  local_68 = FUN_00d84c80;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  uVar6 = FUN_00d59f54(lVar2,0,4,0x19,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar6,0x3f266666,plVar4,0x40000,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Adagio_ArcaneFire_02bf01b8);
  local_68 = FUN_00d84c94;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  lVar5 = FUN_00d81178(param_1);
  if (lVar5 == lVar2) {
    plVar4 = (long *)FUN_00d84eec(lVar3);
    uVar6 = FUN_00d59f54(lVar2,0,4,0x19,0);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar6,0x3f266666,plVar4,0x40000,1);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                               (plVar4,PTR_s_Buff_Adagio_ArcaneFire_Slow_02bf01d0);
    local_68 = FUN_00d84ca8;
    local_60 = 3;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  }
  FUN_00d84e9c(lVar3);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d84c80(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00d84c94(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00d84ca8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,0xb,0x19,0);
  return;
}




void FUN_00d84cbc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Adagio_Spell_Projectile";
  param_2[4] = "Effect_AdagioFortunesSmile_impact";
  param_2[0xc] = "Sound_Adagio_Ability_B_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41c00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Adagio_AgentOfWrath_02bf01c0);
  local_48 = FUN_00d84dc0;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  local_58 = FUN_00d84dd4;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d84dc0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




int FUN_00d84dd4(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_1,1,3,0x19,0);
  return (int)fVar1;
}




void FUN_00d84dfc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cdac68();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d84e4c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda01c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d84e9c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda0f0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d84eec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cd9948();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d84f3c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Alpha_LeapProjectile";
  param_2[8] = "Effect_Alpha_A_Beam";
  param_2[10] = "EyeLaser";
  FUN_00d80ec4(0x3f000000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,5,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x440000);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d85104(lVar3);
  FUN_00d82fe4(uVar2,3);
  uVar2 = FUN_00d85154(lVar3);
  FUN_00d825d8(uVar2,PTR_s_Buff_Alpha_Dash_Shot_Lock_02bf0238);
  FUN_00d825e0();
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Alpha_A_Slow_02bf0210);
  local_48 = FUN_00d850a0;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

