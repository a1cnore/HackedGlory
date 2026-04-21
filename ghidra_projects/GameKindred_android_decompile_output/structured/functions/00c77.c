// functions/00c77 — 29 functions
#include "libGameKindred.h"




void thunk_FUN_00c773dc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(*(long *)(param_1 + 0xd8) + 0x98);
  uVar3 = FUN_00aa8224();
  if (iVar1 == 0) {
    FUN_008fa54c(abStack_50,&DAT_01e277f2);
    FUN_00aa6c70(uVar3,abStack_50);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  else {
    FUN_00aa6c70(uVar3,*(long *)(param_1 + 0xd8) + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c771ac(uint *param_1,undefined8 *param_2)

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
    FUN_00c77588(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c77234(uint *param_1,undefined8 *param_2)

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
    FUN_00c77608(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c772bc(void)

{
  undefined8 uVar1;
  long in_x4;
  
  if (in_x4 != 0) {
    uVar1 = FUN_00aa8224();
    FUN_00aa8128(uVar1,in_x4);
    return;
  }
  return;
}




void FUN_00c772f0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 0xd8) + 0x68);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_00c77318:
      if (*(long *)(param_1 + 0x1f88) != 0) goto LAB_00c7738c;
      uVar2 = FUN_00d6eb50();
      lVar3 = *(long *)(param_1 + 0xd8);
      if ((*(byte *)(lVar3 + 0x68) & 1) == 0) {
        lVar3 = lVar3 + 0x69;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x78);
      }
      uVar2 = FUN_00d6eb5c(uVar2,lVar3);
      FUN_00af9124(param_1 + 0x1de8,uVar2);
      FUN_00af9aa0(param_1 + 0x1de8,&DAT_01bbea70);
    }
  }
  else if (*(long *)(*(long *)(param_1 + 0xd8) + 0x70) != 0) goto LAB_00c77318;
  if (*(long *)(param_1 + 0x1f88) == 0) {
    return;
  }
LAB_00c7738c:
  FUN_00afa094(0x3f800000,param_1 + 0x1de8,&DAT_01bb0994,1,0);
  *(uint *)(param_1 + 0x1e6c) = *(uint *)(param_1 + 0x1e6c) | 4;
  return;
}




void FUN_00c773c8(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x7b5) = param_1;
  *(undefined4 *)((long)param_3 + 0x3dac) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c773d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))();
  return;
}




void FUN_00c773dc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(*(long *)(param_1 + 0xd8) + 0x98);
  uVar3 = FUN_00aa8224();
  if (iVar1 == 0) {
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_00aa6c70(uVar3,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    FUN_00aa6c70(uVar3,*(long *)(param_1 + 0xd8) + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7747c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_00aa8224();
    FUN_00aa8128(uVar1,param_3);
    return;
  }
  return;
}




void FUN_00c774b0(long param_1)

{
  *(uint *)(param_1 + 0x2ba4) = *(uint *)(param_1 + 0x2ba4) | 4;
  return;
}




void FUN_00c774c0(long param_1)

{
  *(uint *)(param_1 + 0x2ba4) = *(uint *)(param_1 + 0x2ba4) & 0xfffffffb;
  return;
}




void FUN_00c774d0(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c1c();
  if (*(char *)(lVar1 + 10) != '\0') {
    FUN_00cbe0f0(&DAT_01e277f2);
    return;
  }
  FUN_00aa25b0("vainglory://MARKET/MENU_MARKET_TAB_NAME_EVENTS",0);
  return;
}




void FUN_00c77508(uint *param_1,uint param_2)

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




void FUN_00c77588(uint *param_1,uint param_2)

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




void FUN_00c77608(uint *param_1,uint param_2)

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




void FUN_00c77688(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x19;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_028024c0;
  FUN_00f11234(plVar1);
  plVar2 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x6b;
  FUN_00f11234(plVar3);
  plVar4 = param_1 + 0x9f;
  FUN_00ed66ec(plVar4);
  FUN_00f0ac5c(param_1 + 0x1e4);
  plVar5 = param_1 + 0x20d;
  FUN_00f11234(plVar5);
  plVar6 = param_1 + 0x241;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x25f;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x27d;
  FUN_00b09580(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00ed5664(plVar4,param_1 + 0x1e4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar5,plVar8,1);
  FUN_00f023ec(plVar8,plVar7,1);
  FUN_00f112f0(plVar1,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar9 = *(uint *)((long)param_1 + 0x128c);
  if ((uVar9 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x128c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar6);
  }
  FUN_00b0b848(0x3f800000,plVar8,"white_background","white_background");
  FUN_00b0a8a8(plVar8,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  *(undefined1 *)((long)param_1 + 0x26fc) = 1;
  FUN_00b0b950(plVar8,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00b0a930(0x44960000,0x42700000,plVar8,0,100,0,1);
  FUN_00b0b988(plVar8);
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"talent_coinback_glow");
  if ((*(float *)(param_1 + 0x268) != 0.75) || (*(float *)((long)param_1 + 0x1344) != 0.75)) {
    lVar11 = NEON_fmov(0x3f400000,4);
    param_1[0x268] = lVar11;
    FUN_0091ada4(plVar7);
  }
  FUN_00f112f0(plVar3,1);
  FUN_00ed7144(plVar4,0);
  local_98 = (code *)CONCAT71(local_98._1_7_,9);
  FUN_00ed5ab0(plVar4,&local_98);
  local_70 = DAT_03210c50;
  local_98 = FUN_00c779b8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xa0,&local_98);
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c779b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c77ed0(param_1,param_4);
  return;
}




void FUN_00c779c0(undefined8 *param_1)

{
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_028024c0;
  FUN_00ab0d88(param_1 + 0x27d);
  param_1[0x25f] = &PTR_FUN_028266f0;
  param_1[0x276] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x279);
  FUN_00f13d08(param_1 + 0x25f);
  param_1[0x241] = &PTR_FUN_028266f0;
  param_1[600] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x25b);
  FUN_00f13d08(param_1 + 0x241);
  FUN_00f13d08(param_1 + 0x20d);
  param_1[0x1e4] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x1fb);
  FUN_00f13d08(param_1 + 0x1e4);
  thunk_FUN_00ed5534(param_1 + 0x9f);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c77ac4(void *param_1)

{
  FUN_00c779c0();
  operator_delete(param_1);
  return;
}




void FUN_00c77ae8(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00b0a264(0x3f000000,param_1 + 0x13e8,param_2,&DAT_01bbea75,&DAT_01bbea79,0,param_3,1);
  FUN_00c77b34(param_1);
  return;
}




void FUN_00c77b34(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar1 = param_3 + 200;
  local_60 = FUN_00f13e54(lVar1);
  fStack_5c = (float)param_2;
  FUN_00f13f18(param_3 + 0x268,&local_60);
  lVar3 = param_3 + 0x1068;
  FUN_00f13e54(lVar1);
  fVar9 = 190.0;
  FUN_00f13f08(lVar3);
  local_60 = FUN_00f13e54(lVar3);
  fStack_5c = fVar9;
  FUN_00f13f18(param_3 + 0x1208,&local_60);
  uVar5 = FUN_0093dbe8();
  *(uint *)(param_3 + 0x10ec) =
       *(uint *)(param_3 + 0x10ec) & 0xfffffff8 |
       *(uint *)(param_3 + 0x10ec) & 3 | (~uVar5 & 1) << 2;
  local_60 = FUN_00f13e54(lVar1);
  fStack_5c = fVar9;
  FUN_00f13f18(param_3 + 0x358,&local_60);
  local_60 = FUN_00f13e54(param_3 + 0x358);
  fStack_5c = fVar9;
  FUN_00f13f18(param_3 + 0x4f8,&local_60);
  lVar2 = param_3 + 0xf20;
  local_60 = FUN_00f13e54(lVar3);
  fStack_5c = fVar9;
  FUN_00f13f18(lVar2,&local_60);
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  local_60 = FUN_00f13e54(lVar1);
  fStack_5c = fVar9;
  FUN_00f13f18(uVar6,&local_60);
  lVar7 = *(long *)(param_3 + 0xc0);
  uVar8 = FUN_00f13e54(lVar1);
  *(undefined4 *)(lVar7 + 0x1d8) = uVar8;
  (**(code **)(**(long **)(param_3 + 0xc0) + 0x150))();
  lVar1 = param_3 + 0x13e8;
  FUN_00f13e54(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_00f07940(0,fVar9,lVar1,8,lVar3,8);
  FUN_00f13e54(lVar1);
  FUN_00f07940(0x41f00000,fVar9 * -0.5,param_3 + 0x12f8,5,lVar1,7);
  uVar6 = *(undefined8 *)(param_3 + 0xc0);
  FUN_00f07b18(0,uVar6,0,lVar2,2);
  FUN_00f07b18(0,uVar6,3,lVar2,3);
  if (*(float *)(param_3 + 0x53c) != 0.0) {
    *(undefined4 *)(param_3 + 0x53c) = 0;
    FUN_0091ada4(param_3 + 0x4f8);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c77d44(long param_1)

{
  FUN_00c77b34();
                    /* WARNING: Could not recover jumptable at 0x00c77d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x138))(0,*(long **)(param_1 + 0xc0),1,4,1);
  return;
}




void FUN_00c77d80(long param_1)

{
  FUN_00c77b34();
                    /* WARNING: Could not recover jumptable at 0x00c77db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x138))(0,*(long **)(param_1 + 0xc0),1,4,1);
  return;
}




void FUN_00c77dbc(long param_1,undefined8 param_2)

{
  long lVar1;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  FUN_00ed5664(param_1 + 0x4f8,param_2,1);
  local_30 = FUN_00f048a4("UI::USER_SELECTED_HERO");
  uStack_50 = *(undefined8 *)(param_1 + 0xb8);
  local_58 = FUN_00c77e4c;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  FUN_009693a0(param_1 + 8,&local_58);
  FUN_00c77b34(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c77e4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c77e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_4,param_5);
  return;
}




void FUN_00c77e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00cbc1d0(param_2,param_3,0);
  return;
}




void FUN_00c77e70(long param_1)

{
  FUN_00f13f08(param_1 + 200);
  FUN_00c77b34(param_1);
  return;
}




void FUN_00c77e98(long param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_00c2c47c(*(undefined8 *)(param_1 + 0xc0));
  lVar1 = FUN_00f04924(param_2);
  if (lVar1 != 0) {
    FUN_00ad9714();
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00c77ed0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00f04924(param_2);
  if (iVar1 < 1) {
    iVar1 = FUN_00f04924(param_2);
    if (-1 < iVar1) {
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00c77f2c(param_1,uVar2);
  return;
}




void FUN_00c77f2c(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x1068;
  FUN_00f01980(lVar1);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar6);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x10a8);
  if ((param_4 & 1) == 0) {
    FUN_00f13e54(lVar1);
    local_4c = -param_2;
  }
  else {
    local_4c = 0.0;
  }
  local_50 = uVar2;
  FUN_00efdc50(puVar6,&local_50);
  FUN_00efcac4(0x3e19999a,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

