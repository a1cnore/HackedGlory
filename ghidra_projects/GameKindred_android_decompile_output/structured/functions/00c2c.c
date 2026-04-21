// functions/00c2c — 30 functions
#include "libGameKindred.h"




void FUN_00c2c090(void *param_1)

{
  FUN_00c2bfa4();
  operator_delete(param_1);
  return;
}




void FUN_00c2c0b4(void)

{
  return;
}




void FUN_00c2c0b8(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    (*(code *)**(undefined8 **)param_1[0x19])((undefined8 *)param_1[0x19],1);
                    /* WARNING: Could not recover jumptable at 0x00c2c0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




void FUN_00c2c104(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 200) + 8))(*(long **)(param_1 + 200),0);
  FUN_00c2bff0(param_1);
  return;
}




void FUN_00c2c148(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((int)param_1[0x39] != 0) {
    uVar3 = 0;
    do {
      FUN_00f13f08(DAT_02be9c04,DAT_02be9c08,*(undefined8 *)(param_1[0x3a] + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x39));
  }
  fVar7 = DAT_02be9c04;
  *(int *)((long)param_1 + 0x1c4) = (int)(*(float *)(param_1 + 0x3b) / DAT_02be9c04);
  uVar2 = DAT_02be9c08;
  lVar5 = NEON_fmov(0x41200000,4);
  *(float *)(param_1 + 0x35) = fVar7;
  *(undefined4 *)(param_1 + 0x37) = 0x3f000000;
  *(undefined4 *)((long)param_1 + 0x1ac) = uVar2;
  param_1[0x36] = lVar5;
  plVar4 = param_1 + 0x1a;
  (**(code **)(*plVar4 + 0x138))(plVar4,param_1 + 0x35);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  local_50 = (float)FUN_00f13e54(plVar4);
  local_50 = local_50 + 0.0;
  fStack_4c = fVar7 + 70.0;
  FUN_00f13f18(plVar4,&local_50);
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13e54(plVar4);
  FUN_00f13f08(uVar6,param_1);
  FUN_00f07b18(0,plVar4,4,param_1,4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2c2a8(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x1170);
  FUN_00ad8068(pvVar2,param_2);
  local_70 = pvVar2;
  FUN_00c2c364(param_1 + 0x1c8,&local_70);
  FUN_00f023ec(param_1 + 0xd0,local_70,1);
  uStack_60 = *(undefined8 *)(param_1 + 200);
  local_40 = DAT_03210c64;
  local_68 = FUN_00c2c3ec;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = local_70;
  FUN_009693a0((long)local_70 + 8,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2c364(uint *param_1,undefined8 *param_2)

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
    FUN_00c2c4c0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c2c3ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c2c3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5);
  return;
}




void FUN_00c2c400(long param_1,uint param_2,undefined8 param_3)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c8))) {
    FUN_00ad95d8(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (ulong)param_2 * 8),param_3);
    return;
  }
  return;
}




void FUN_00c2c424(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c8))) {
    FUN_00ad9470(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (ulong)param_2 * 8),param_3,param_4,
                 param_5,param_6,param_7);
    return;
  }
  return;
}




void FUN_00c2c458(long param_1,uint param_2,undefined8 param_3)

{
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1c8))) {
    FUN_00ad95bc(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (ulong)param_2 * 8),param_3);
    return;
  }
  return;
}




void FUN_00c2c47c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    uVar1 = 0;
    do {
      FUN_00ad9768(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1c8));
  }
  return;
}




void FUN_00c2c4c0(uint *param_1,uint param_2)

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




void FUN_00c2c540(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027f9b68;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0d160(plVar2);
  *(undefined4 *)(param_1 + 0x5b) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e540(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530);
  if ((*(float *)(param_1 + 0x21) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x10c) != DAT_03218f08._4_4_)) {
    param_1[0x21] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  if ((*(float *)(param_1 + 0x3f) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x1fc) != DAT_03218f08._4_4_)) {
    param_1[0x3f] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar2);
  }
  FUN_00f13f08(0x42800000,0x42800000,param_1);
  return;
}




void FUN_00c2c668(long param_1,byte param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined *)(param_1 + 0x2d8);
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_01bbc851;
  }
  *(byte *)(param_1 + 0x2dc) = param_2 & 1;
  FUN_00f0d7fc(param_1 + 0x1a8,puVar1);
  uVar4 = 0;
  if (*(char *)(param_1 + 0x2dc) != '\0') {
    uVar4 = 0x3f800000;
  }
  FUN_00f0e6bc(uVar4,param_1 + 0xb8);
  uVar2 = *(uint *)(param_1 + 0x84);
  uVar3 = 0x7f;
  if (*(char *)(param_1 + 0x2dc) != '\0') {
    uVar3 = 0xff;
  }
  if ((uVar2 >> 7 & 0xff) == uVar3) {
    return;
  }
  *(uint *)(param_1 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar3 << 7;
  FUN_0091ada4(param_1);
  return;
}




void FUN_00c2c700(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x1a8,&local_48);
  FUN_00f0db64(0x42080000,0,0x3f800000,param_1 + 0x1a8);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2c7a4(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x2d8) = *param_2;
  if (*(char *)(param_1 + 0x2dc) != '\0') {
    FUN_00f0d7fc(param_1 + 0x1a8,param_1 + 0x2d8);
    return;
  }
  return;
}




void FUN_00c2c7c4(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00f0e578(param_1 + 0xb8,pbVar1);
  return;
}




void FUN_00c2c7dc(long *param_1)

{
  FUN_00f017e8();
  param_1[0x11] = 0;
  *param_1 = (long)&PTR_FUN_027f9cb0;
  FUN_00f0bdbc(param_1 + 0x12,0);
  param_1[0x12] = (long)&PTR_FUN_027c3260;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
                    /* WARNING: Could not recover jumptable at 0x00c2c844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x12,1);
  return;
}




void FUN_00c2c848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f9cb0;
  FUN_00c2c894();
  if ((void *)param_1[0x2c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2c]);
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
  }
  FUN_00f13d08(param_1 + 0x12);
  FUN_00f01868(param_1);
  return;
}




void FUN_00c2c894(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x158);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x160) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x158);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  return;
}




void FUN_00c2c8f0(void *param_1)

{
  FUN_00c2c848();
  operator_delete(param_1);
  return;
}




void FUN_00c2c914(long *param_1,uint param_2,undefined4 param_3,undefined4 *param_4,byte *param_5)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = operator_new(0x2e0);
  FUN_00c2c540();
  local_60 = plVar2;
  FUN_00c2c700(plVar2,param_3);
  *(undefined4 *)(plVar2 + 0x5b) = *param_4;
  if (*(char *)((long)plVar2 + 0x2dc) != '\0') {
    FUN_00f0d7fc(plVar2 + 0x35,plVar2 + 0x5b);
  }
  pbVar3 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar3 = param_5 + 1;
  }
  FUN_00f0e578(plVar2 + 0x17,pbVar3);
  FUN_00c2c668(plVar2,param_2 & 1);
  (**(code **)(*plVar2 + 0x28))(plVar2,&DAT_03218f08);
  FUN_00f023ec(param_1 + 0x12,plVar2,1);
  FUN_00c2ca24(param_1 + 0x2b,&local_60);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2ca24(uint *param_1,undefined8 *param_2)

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
    FUN_00c2cc18(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c2caac(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = 0.0;
  FUN_00f0bc10(0,0,0,auStack_58);
  FUN_00f0c168(param_1 + 0x90,auStack_58);
  (**(code **)(*(long *)(param_1 + 0x90) + 0x90))(param_1 + 0x90);
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar3 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x160) + uVar3 * 8);
      (**(code **)(*plVar2 + 0x48))(plVar2);
      if (*(float *)((long)plVar2 + 0x44) != fVar4 * 0.5) {
        *(float *)((long)plVar2 + 0x44) = fVar4 * 0.5;
        FUN_0091ada4(plVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x158));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2cb88(long param_1)

{
  FUN_00f13e54(param_1 + 0x90);
  return;
}




void FUN_00c2cb90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f9b68;
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c2cbf4(void *param_1)

{
  FUN_00c2cb90();
  operator_delete(param_1);
  return;
}




void FUN_00c2cc18(uint *param_1,uint param_2)

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




void FUN_00c2cc98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  code *local_a8;
  long *local_a0;
  long *local_98;
  code *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f9db0;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x43;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x69;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x8f;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xb5;
  FUN_00f1306c(plVar5);
  FUN_00b15e58(param_1 + 0xe0,0);
  param_1[399] = 0;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x1ae;
  FUN_00b043c8(plVar6);
  plVar7 = param_1 + 0x1c8;
  FUN_00c93600(plVar7,0);
  plVar8 = param_1 + 0x311;
  FUN_00c93600(plVar8,0);
  FUN_00f0e4a8(param_1 + 0x45a);
  *(undefined4 *)(param_1 + 0x478) = 0;
  lVar13 = FUN_00c2ddcc(param_1,1);
  param_1[399] = lVar13;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00b04468(plVar6,plVar7);
  FUN_00b04468(plVar6,plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f133a4(plVar1,plVar5,1);
  FUN_00f133a4(plVar5,param_1 + 0xe0,1);
  lVar13 = FUN_00a06b24();
  local_a8 = (code *)0x0;
  local_90 = thunk_FUN_00c2dcd4;
  local_a0 = param_1;
  local_98 = param_1;
  FUN_00c2de34(lVar13 + 0x50,&local_a8);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f14084(plVar2,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00e705c8(&local_a8,"Blitz | Casual | Solo");
  FUN_00f0d75c(plVar3,&local_a8);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
    local_a8 = (code *)0x0;
    local_a0 = (long *)0x0;
  }
  FUN_00f0d7fc(plVar3,&DAT_0313b44c);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar14 = FUN_00e6ce7c("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
  FUN_00f0d75c(plVar4,uVar14);
  FUN_00f14084(plVar4,1);
  FUN_00f0d7fc(plVar4,&DAT_0313b44c);
  uVar10 = FUN_00e6a474("homepanel_play_button");
  uVar11 = FUN_0091ed5c("homepanel_play_button",uVar10,0x1234);
  uVar10 = DAT_03210c64;
  *(uint *)((long)param_1 + 0xec4) =
       *(uint *)((long)param_1 + 0xec4) & 0x80000000 |
       *(uint *)((long)param_1 + 0xec4) & 0x7fff | (uVar11 & 0xffff) << 0xf;
  local_a8 = FUN_00c2d1d4;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  local_80 = uVar10;
  FUN_009693a0(param_1 + 0x1c9,&local_a8);
  FUN_00c928cc(plVar7,&DAT_03133a70);
  FUN_00c9228c(plVar7,1);
  FUN_00c93864(plVar7,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0);
  FUN_00c938a4(plVar7,&DAT_0313b5c8);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff646464);
  FUN_00c939bc(plVar7,&local_a8);
  FUN_00c939a8(plVar7,1);
  uVar14 = FUN_00e6ce7c("MAIN_MENU_PLAY",0);
  FUN_00c938d4(plVar7,uVar14);
  FUN_00c9279c(plVar7,PTR_s_build___VGX_common_atlas_02be3540,"play_button_bg");
  FUN_00c92844(plVar7,1);
  FUN_00c928a0(0x42200000,0x42200000,plVar7);
  FUN_00f105ec(param_1 + 0x23a,&DAT_0313b5c8,2);
  local_a8 = FUN_00c2d1ec;
  local_90 = (code *)0x0;
  uStack_88 = 0;
  local_98 = (long *)0x0;
  local_a0 = param_1;
  local_80 = uVar10;
  FUN_009693a0(param_1 + 0x312,&local_a8);
  FUN_00c9228c(plVar8,1);
  FUN_00c93864(plVar8,PTR_s_build___Fonts_Brandon_Bold_100_f_02be9ca8);
  FUN_00c938a4(plVar8,&DAT_0313b5c8);
  uVar14 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00c938d4(plVar8,uVar14);
  FUN_00c9279c(plVar8,PTR_s_build___VGX_common_atlas_02be3540,"play_button_bg");
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff606060);
  FUN_00c927dc(plVar8,&local_a8);
  FUN_00c92844(plVar8,1);
  FUN_00f105ec(param_1 + 899,&DAT_0313b5c8,2);
  FUN_00f10644(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 0x23a);
  FUN_00f10644(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 899);
  uVar14 = FUN_00d6eb50();
  FUN_00d6eb5c(uVar14,"*KindredMenuAnimatedSplashMesh*");
  iVar12 = FUN_0092ec00();
  if (iVar12 == 0xe) {
    FUN_00f0e548(param_1 + 400,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 400,1);
  }
  FUN_00c2d204(param_1);
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

