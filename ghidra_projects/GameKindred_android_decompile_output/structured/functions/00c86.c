// functions/00c86 — 31 functions
#include "libGameKindred.h"




void FUN_00c86004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804650;
  FUN_00f0d3a4(param_1 + 0x100);
  FUN_00f0d3a4(param_1 + 0xda);
  param_1[0xaf] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xc6);
  FUN_00f13d08(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_028266f0;
  param_1[0xa8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x91);
  param_1[0x73] = &PTR_FUN_028266f0;
  param_1[0x8a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8d);
  FUN_00f13d08(param_1 + 0x73);
  param_1[0x48] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c860d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804650;
  FUN_00f0d3a4(param_1 + 0x100);
  FUN_00f0d3a4(param_1 + 0xda);
  param_1[0xaf] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xc6);
  FUN_00f13d08(param_1 + 0xaf);
  param_1[0x91] = &PTR_FUN_028266f0;
  param_1[0xa8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xab);
  FUN_00f13d08(param_1 + 0x91);
  param_1[0x73] = &PTR_FUN_028266f0;
  param_1[0x8a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8d);
  FUN_00f13d08(param_1 + 0x73);
  param_1[0x48] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c861b4(uint *param_1,uint param_2)

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




void FUN_00c86238(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_00f1306c();
  lVar4 = 0;
  *param_1 = (long)&PTR_FUN_02804de8;
  param_1[0x31] = 0;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffff7;
  do {
    pvVar1 = operator_new(0x68);
    FUN_009df5a0();
    *(void **)((long)param_1 + lVar4 + 0x158) = pvVar1;
    pvVar1 = operator_new(0x38);
    pvVar2 = operator_new(0x13a8);
    FUN_00c03e10();
    FUN_00bbddf8(pvVar1,pvVar2);
    *(void **)((long)param_1 + lVar4 + 0x170) = pvVar1;
    (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)((long)pvVar1 + 8),1);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
  lVar4 = 0;
  do {
    uVar3 = FUN_00c03750(*(undefined8 *)(*(long *)((long)param_1 + lVar4 + 0x170) + 8));
    (**(code **)(*param_1 + 0x78))(param_1,uVar3,1);
    FUN_00c03750(*(undefined8 *)(*(long *)((long)param_1 + lVar4 + 0x170) + 8));
    uVar3 = FUN_00c06624();
    (**(code **)(*param_1 + 0x78))(param_1,uVar3,1);
    FUN_00c03750(*(undefined8 *)(*(long *)((long)param_1 + lVar4 + 0x170) + 8));
    uVar3 = FUN_00c0662c();
    (**(code **)(*param_1 + 0x78))(param_1,uVar3,1);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
  return;
}




void FUN_00c8637c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = 0;
  *param_1 = &PTR_FUN_02804de8;
  do {
    plVar1 = *(long **)((long)param_1 + lVar3 + 0x170);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x48))();
    }
    pvVar2 = *(void **)((long)param_1 + lVar3 + 0x158);
    if (pvVar2 != (void *)0x0) {
      FUN_009df63c(pvVar2);
      operator_delete(pvVar2);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c8640c(void *param_1)

{
  FUN_00c8637c();
  operator_delete(param_1);
  return;
}




void FUN_00c86430(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x188) = param_2;
  uVar4 = FUN_00a1f304(0);
  FUN_00bbe1dc(uVar6,uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x178);
  uVar4 = FUN_00a1f304(1);
  FUN_00bbe1dc(uVar6,uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x180);
  uVar4 = FUN_00a1f304(2);
  FUN_00bbe1dc(uVar6,uVar4);
  lVar7 = *(long *)(*(long *)(param_1 + 0x170) + 8);
  uVar2 = FUN_00e6a474("joystick_ability_icon_A");
  uVar3 = FUN_0091ed5c("joystick_ability_icon_A",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(*(long *)(param_1 + 0x178) + 8);
  uVar2 = FUN_00e6a474("joystick_ability_icon_B");
  uVar3 = FUN_0091ed5c("joystick_ability_icon_B",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(*(long *)(param_1 + 0x180) + 8);
  uVar2 = FUN_00e6a474("joystick_ability_icon_C");
  uVar3 = FUN_0091ed5c("joystick_ability_icon_C",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  plVar5 = *(long **)(*(long *)(param_1 + 0x170) + 8);
  (**(code **)(*plVar5 + 0x150))(plVar5,"joystick_ability_upgrade_badge_A");
  plVar5 = *(long **)(*(long *)(param_1 + 0x178) + 8);
  (**(code **)(*plVar5 + 0x150))(plVar5,"joystick_ability_upgrade_badge_B");
  plVar5 = *(long **)(*(long *)(param_1 + 0x180) + 8);
                    /* WARNING: Could not recover jumptable at 0x00c86588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x150))(plVar5,"joystick_ability_upgrade_badge_C");
  return;
}




void FUN_00c8658c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x84) =
       (param_2 & 1) << 2 | (param_2 & 1) << 3 | *(uint *)(param_1 + 0x84) & 0xfffffff3;
  return;
}




void FUN_00c865ac(long param_1,uint param_2)

{
  if (param_2 < 3) {
    FUN_00bbe338(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x170));
    return;
  }
  return;
}




void FUN_00c865c4(long param_1,uint param_2)

{
  if (param_2 < 3) {
    FUN_00c03540(*(undefined8 *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x170) + 8));
    return;
  }
  return;
}




void FUN_00c865e0(long param_1,ulong param_2,uint param_3)

{
  FUN_00bbe3fc(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x170),param_3 & 1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c865f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  do {
    lVar2 = *(long *)(param_1 + 0x170 + lVar1);
    (**(code **)(**(long **)(lVar2 + 8) + 0x158))(0x43870000,0x43870000);
    FUN_00f13f08(0x43700000,0x43700000,*(undefined8 *)(lVar2 + 8));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  lVar1 = *(long *)(*(long *)(param_1 + 0x170) + 8);
  if ((*(float *)(lVar1 + 0x40) != DAT_03218ef8) || (*(float *)(lVar1 + 0x44) != _DAT_03218efc)) {
    *(ulong *)(lVar1 + 0x40) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x178) + 8);
  if ((*(float *)(lVar1 + 0x40) != 200.0) || (*(float *)(lVar1 + 0x44) != -245.0)) {
    *(undefined8 *)(lVar1 + 0x40) = 0xc375000043480000;
    FUN_0091ada4();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x180) + 8);
  if ((*(float *)(lVar1 + 0x40) != 476.0) || (*(float *)(lVar1 + 0x44) != -386.0)) {
    *(undefined8 *)(lVar1 + 0x40) = 0xc3c1000043ee0000;
    FUN_0091ada4();
  }
  lVar1 = 0;
  do {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x170 + lVar1) + 8) + 0x1e0))();
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_00f13238(param_1);
  return;
}




undefined8 FUN_00c86754(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x170) + 8);
}




void FUN_00c86764(long param_1,uint param_2)

{
  FUN_00bbe9f8(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x170));
  return;
}




void FUN_00c86780(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f1306c();
  param_1[0x2b] = 0;
  *param_1 = &PTR_FUN_02804f38;
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar1,param_1,0x8a579c5c,FUN_00c867ec,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffe7 | 0x10;
  return;
}




void FUN_00c868d4(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_02804f38;
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x48))();
  }
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x48))();
  }
  pvVar2 = (void *)param_1[0x2c];
  if (pvVar2 != (void *)0x0) {
    FUN_009df63c(pvVar2);
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x2d];
  if (pvVar2 != (void *)0x0) {
    FUN_009df63c(pvVar2);
    operator_delete(pvVar2);
  }
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar1,param_1);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c86980(void *param_1)

{
  FUN_00c868d4();
  operator_delete(param_1);
  return;
}




void FUN_00c869a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x158) = param_2;
  return;
}




void FUN_00c869ac(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x84) =
       (param_2 & 1) << 2 | (param_2 & 1) << 3 | *(uint *)(param_1 + 0x84) & 0xfffffff3;
  return;
}




undefined8 FUN_00c869cc(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x160) == 0) || (iVar1 = FUN_009df7ec(), iVar1 != param_2)) {
    if (*(long *)(param_1 + 0x168) == 0) {
      return 0;
    }
    iVar1 = FUN_009df7ec();
    if (iVar1 != param_2) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x178);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x170);
  }
  FUN_00bbe338(uVar2);
  return 1;
}




void FUN_00c86a2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    FUN_00f13f08(0x433e0000,0x433e0000,*(undefined8 *)(*(long *)(param_1 + 0x170) + 8));
    (**(code **)(**(long **)(*(long *)(param_1 + 0x170) + 8) + 0x158))(0x433e0000,0x433e0000);
    (**(code **)(**(long **)(*(long *)(param_1 + 0x170) + 8) + 0x1e0))();
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN_00f13f08(0x433e0000,0x433e0000,*(undefined8 *)(*(long *)(param_1 + 0x178) + 8));
    (**(code **)(**(long **)(*(long *)(param_1 + 0x178) + 8) + 0x158))(0x433e0000,0x433e0000);
    (**(code **)(**(long **)(*(long *)(param_1 + 0x178) + 8) + 0x1e0))();
    if ((*(long *)(param_1 + 0x178) != 0) && (*(long *)(param_1 + 0x170) != 0)) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x178) + 8);
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x170) + 8);
      FUN_00f07b18(0xc1400000,uVar1,2,uVar2,0);
      FUN_00f07b18(0,uVar1,4,uVar2,4);
    }
  }
  FUN_00f13238(param_1);
  return;
}




bool FUN_00c86b44(long param_1)

{
  return *(long *)(param_1 + 0x170) != 0;
}




bool FUN_00c86b54(long param_1)

{
  return *(long *)(param_1 + 0x178) != 0;
}




void FUN_00c86b64(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  *(char *)(param_1 + 0x180) = (char)(param_2 & 1);
  if (*(long *)(param_1 + 0x170) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 8);
    uVar1 = *(uint *)(lVar2 + 0x84);
    *(uint *)(lVar2 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00c86b88(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  *(char *)(param_1 + 0x181) = (char)(param_2 & 1);
  if (*(long *)(param_1 + 0x178) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x178) + 8);
    uVar1 = *(uint *)(lVar2 + 0x84);
    *(uint *)(lVar2 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00c86bac(long param_1)

{
  FUN_00bbe9f8(*(undefined8 *)(param_1 + 0x170));
  return;
}




void FUN_00c86bc4(long param_1)

{
  FUN_00bbe9f8(*(undefined8 *)(param_1 + 0x178));
  return;
}




void FUN_00c86bdc(long *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_2 == 1) {
    if (param_1[0x2f] != 0) {
      return;
    }
    plVar7 = param_1 + 0x2f;
    FUN_00c86d74(param_1,1,param_3,param_1 + 0x2d,plVar7,"hud_ability_visionTotem_rounded");
    lVar9 = *(long *)(param_1[0x2f] + 8);
    uVar2 = FUN_00e6a474("joystick_scout_cam_button");
    uVar3 = FUN_0091ed5c("joystick_scout_cam_button",uVar2,0x1234);
    uVar1 = *(uint *)(lVar9 + 0x84);
    *(uint *)(lVar9 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
    pbVar5 = (byte *)((long)param_1 + 0x181);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (param_1[0x2e] != 0) {
      return;
    }
    plVar7 = param_1 + 0x2e;
    FUN_00c86d74(param_1,0,param_3,param_1 + 0x2c,plVar7,"hud_ability_healFlask_rounded");
    lVar9 = *(long *)(param_1[0x2e] + 8);
    uVar2 = FUN_00e6a474("joystick_flask_button");
    uVar3 = FUN_0091ed5c("joystick_flask_button",uVar2,0x1234);
    uVar1 = *(uint *)(lVar9 + 0x84);
    *(uint *)(lVar9 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
    pbVar5 = (byte *)(param_1 + 0x30);
  }
  *(uint *)(*(long *)(*plVar7 + 8) + 0x84) =
       *(uint *)(*(long *)(*plVar7 + 8) + 0x84) & 0xfffffffb | (uint)*pbVar5 << 2;
  (**(code **)(*param_1 + 0x138))(param_1);
  lVar9 = FUN_00a1ffc0();
  plVar4 = (long *)(lVar9 + 0x10);
  plVar6 = (long *)*plVar4;
  plVar7 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= 0xf1ccade8) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < 0xf1ccade8];
    } while (plVar6 != (long *)0x0);
    if (((plVar7 != plVar4) && (*(uint *)(plVar7 + 4) < 0xf1ccade9)) && ((int)plVar7[5] != 0)) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        (*(code *)((undefined8 *)(plVar7[6] + lVar9))[1])(*(undefined8 *)(plVar7[6] + lVar9));
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while (uVar8 < *(uint *)(plVar7 + 5));
    }
  }
  return;
}




void FUN_00c86d74(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 long *param_5,undefined8 param_6)

{
  void *pvVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  pvVar1 = operator_new(0x68);
  FUN_009df5a0();
  *param_4 = pvVar1;
  plVar2 = operator_new(0x13a8);
  FUN_00c03e10();
  pvVar1 = operator_new(0x38);
  FUN_00bbddf8(pvVar1,plVar2);
  *param_5 = (long)pvVar1;
  uVar4 = *param_4;
  lVar5 = param_1[0x2b];
  uVar3 = FUN_00a1f2ec();
  FUN_009df744(uVar4,param_2,param_3,lVar5,uVar3);
  FUN_00bbe1dc(*param_5,*param_4);
  (**(code **)(*plVar2 + 0x148))(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,param_6);
  *(undefined2 *)((long)plVar2 + 0x13a4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(*param_5 + 8),1);
  uVar3 = FUN_00c03750(*(undefined8 *)(*param_5 + 8));
  (**(code **)(*param_1 + 0x78))(param_1,uVar3,1);
  FUN_00c03750(*(undefined8 *)(*param_5 + 8));
  uVar3 = FUN_00c06624();
  (**(code **)(*param_1 + 0x78))(param_1,uVar3,1);
  FUN_00c03750(*(undefined8 *)(*param_5 + 8));
  uVar3 = FUN_00c0662c();
  (**(code **)(*param_1 + 0x78))(param_1,uVar3,1);
  uVar3 = FUN_00bbe9f8(*param_5);
  (**(code **)(*param_1 + 0x78))(param_1,uVar3,1);
  lVar5 = FUN_00bbe9f8(*param_5);
  *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xffffffbf;
  return;
}




void FUN_00c86f18(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027f5fb0;
  FUN_00ab6c24(plVar1,1);
  plVar2 = param_1 + 0x2c9;
  FUN_00f0d160(plVar2);
  *(undefined4 *)(param_1 + 0x2ef) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00ab75b0(0x3e99999a,plVar1,&DAT_01bee7fa);
  uVar3 = *(uint *)((long)param_1 + 0x16cc);
  if ((uVar3 & 0x7f80) == 0x5900) {
    return;
  }
  *(uint *)((long)param_1 + 0x16cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
  FUN_0091ada4(plVar2);
  return;
}




void FUN_00c86ff4(long param_1)

{
  FUN_00f07940(0,0,param_1 + 0x1648,4,param_1 + 0x7a8,6);
  return;
}

