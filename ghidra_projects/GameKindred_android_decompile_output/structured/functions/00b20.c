// functions/00b20 — 14 functions
#include "libGameKindred.h"




void FUN_00b20790(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0xac0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
  if (lVar3 != lVar2) {
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 0x10;
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
    }
    *(long *)(param_1 + 0xac0) = lVar2;
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffef;
    FUN_00b1ff5c(param_1);
    if ((param_3 & 1) != 0) {
      FUN_00f048e0(auStack_68,DAT_03139f00,(ulong)param_2);
      FUN_00f04760(param_1,auStack_68,1);
    }
    *(uint *)(param_1 + 0xacc) = param_2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b20860(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_4 + 0x88) != 0) {
    puVar1 = *(undefined8 **)(param_4 + 0x90);
    do {
      puVar2 = puVar1 + 1;
      FUN_00ab75d0(param_1,param_2,param_3,*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_4 + 0x90) + (ulong)*(uint *)(param_4 + 0x88) * 8));
  }
  FUN_00b1ff5c(param_4);
  return;
}




void FUN_00b208d0(long param_1,ulong param_2,uint param_3)

{
  FUN_00b09454(*(undefined8 *)(*(long *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 8),param_3 & 1);
  return;
}




void FUN_00b208e0(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x7ec);
  uVar2 = (uint)(param_1 * 255.0);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x7ec) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x768);
  }
  uVar1 = *(uint *)(param_2 + 0x8dc);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x8dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x858);
  }
  uVar1 = *(uint *)(param_2 + 0x9cc);
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_2 + 0x9cc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_0091ada4(param_2 + 0x948);
  return;
}




undefined4 FUN_00b20974(long param_1)

{
  return *(undefined4 *)(param_1 + 0xacc);
}




undefined8 FUN_00b2097c(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
}




void FUN_00b20988(long *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar1 = *(long **)(param_1[0x16] + (param_2 & 0xffffffff) * 8);
  if (plVar1 == (long *)0x0) {
    plVar1 = operator_new(0x6a0);
    FUN_00b1a1c4();
    *(long **)(param_1[0x16] + (param_2 & 0xffffffff) * 8) = plVar1;
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    plVar2 = *(long **)(param_1[0x12] + (param_2 & 0xffffffff) * 8);
    fVar6 = *(float *)(plVar2 + 8);
    fVar3 = (float)(**(code **)(*plVar2 + 0x48))(plVar2);
    fVar4 = (float)(**(code **)(*plVar1 + 0x60))(plVar1,0,0,1,1);
    fVar7 = *(float *)((long)plVar2 + 0x44);
    fVar5 = -20.0;
    fVar3 = ((fVar6 + fVar3 * 0.5) - fVar4 * 0.5) + -20.0;
    (**(code **)(*plVar2 + 0x48))(plVar2);
    fVar7 = fVar7 - fVar5 * 0.5;
    if ((*(float *)(plVar1 + 8) != fVar3) || (*(float *)((long)plVar1 + 0x44) != fVar7)) {
      *(float *)(plVar1 + 8) = fVar3;
      *(float *)((long)plVar1 + 0x44) = fVar7;
      FUN_0091ada4(plVar1);
    }
  }
  FUN_00b1a8e8(plVar1,param_3);
  return;
}




void FUN_00b20aa0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b20ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00b20abc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_03218ef8;
  if (*(int *)(param_1 + 0x88) != 0) {
    lVar2 = *(long *)(param_1 + 0x90);
    uVar3 = 0;
    fVar5 = _DAT_03218efc;
    do {
      fVar4 = (float)(**(code **)(**(long **)(lVar2 + uVar3 * 8) + 0x48))();
      lVar2 = *(long *)(param_1 + 0x90);
      fVar6 = fVar6 + fVar4;
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      fVar4 = *(float *)(*(long *)(lVar2 + lVar1) + 0x15b0);
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
    } while (uVar3 < *(uint *)(param_1 + 0x88));
  }
  return fVar6;
}




void FUN_00b20b3c(long param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0xac8;
  *(undefined4 *)(param_1 + 0xac8) = *param_2;
  FUN_00f0e670(param_1 + 0xb8,lVar1,2);
  FUN_00f0e670(param_1 + 0x1a8,lVar1,2);
  FUN_00f0e670(param_1 + 0x298,lVar1,2);
  FUN_00f0e670(param_1 + 0x410,lVar1,2);
  FUN_00f0e670(param_1 + 0x5f0,lVar1,2);
  FUN_00f0e670(param_1 + 0x500,lVar1,2);
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar2 = 0;
    do {
      FUN_00f0e670(*(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar2 * 8),lVar1,2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x98));
  }
  FUN_00b1ff5c(param_1);
  return;
}




void FUN_00b20c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00b20790(param_1,param_3,1);
  return;
}




void FUN_00b20c0c(uint *param_1,uint param_2)

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




void FUN_00b20c8c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027ddb60;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x2cf;
  FUN_00f0e4a8(plVar2);
  FUN_00ac5014(0x3f000000,param_1 + 0x2ed,0,1);
  plVar3 = param_1 + 0x487;
  FUN_00e70510(plVar3);
  *(undefined2 *)(param_1 + 0x489) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ed,1);
  uVar6 = FUN_00e6ce7c("MENU_MARKET_TAB_NAME_MORE",0);
  FUN_00910394(plVar3,uVar6);
  local_88 = (code *)0x0;
  FUN_00ab703c(0x42340000,0x41f00000,0x447a0000,plVar1,0,&DAT_03210450,&DAT_01bee7fa,&local_88,0);
  FUN_00b09144(0x3dcccccd,plVar1);
  FUN_00ab7498(plVar1,plVar3);
  FUN_00ab7538(0x3f800000,plVar1,&DAT_01bee7fa);
  local_60 = DAT_03210c64;
  local_88 = thunk_FUN_00b21260;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_88);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00ab74fc(0xc1f00000,0,plVar1);
  FUN_00f0d378(param_1 + 0xfb,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00ab7628(0x42a0147b,plVar1);
  *(undefined1 *)((long)param_1 + 0x1672) = 0;
  uVar7 = FUN_0092ea9c();
  fVar5 = DAT_02be3668;
  if (((uVar7 & 1) != 0) &&
     ((*(float *)(param_1 + 0x20) != DAT_02be3668 ||
      (*(float *)((long)param_1 + 0x104) != DAT_02be3668)))) {
    *(float *)(param_1 + 0x20) = DAT_02be3668;
    *(float *)((long)param_1 + 0x104) = fVar5;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
  if ((*(float *)(param_1 + 0x2d9) != 0.0) || (*(float *)((long)param_1 + 0x16cc) != 0.5)) {
    param_1[0x2d9] = 0x3f00000000000000;
    FUN_0091ada4(plVar2);
  }
  *(uint *)((long)param_1 + 0x17ec) = *(uint *)((long)param_1 + 0x17ec) & 0xfffffffb;
  FUN_00b20f58(param_1);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b20f58(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f01c20(param_3 + 0xb8);
  if (*(float *)(param_3 + 0x17ac) != param_2 * 0.5) {
    *(float *)(param_3 + 0x17ac) = param_2 * 0.5;
    FUN_0091ada4(param_3 + 0x1768);
  }
  fVar5 = *(float *)(param_3 + 0x818);
  fVar2 = (float)FUN_00f0d548(param_3 + 0x7d8);
  fVar3 = (float)FUN_00f0e700(param_3 + 0x1678);
  fVar4 = *(float *)(param_3 + 0x16b8);
  fVar2 = fVar5 + fVar2 * 0.5 + fVar3 * 0.5 + 10.0;
  if (fVar4 != fVar2) {
    *(float *)(param_3 + 0x16b8) = fVar2;
    FUN_0091ada4(param_3 + 0x1678);
  }
  local_50 = FUN_00f01c20(param_3 + 0xb8);
  fStack_4c = fVar4;
  FUN_00f13f18(param_3,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

