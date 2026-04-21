// functions/00c25 — 28 functions
#include "libGameKindred.h"




void FUN_00c25018(long param_1)

{
  FUN_00aaccbc(param_1 + 0x44d8);
  return;
}




void FUN_00c25024(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  FUN_00c260b4();
  plVar1 = param_1 + 199;
  param_1[0xc6] = 0;
  *param_1 = (long)&PTR_FUN_027f88d0;
  FUN_00f0e4a8(plVar1);
  FUN_00f0d160(param_1 + 0xe5);
  plVar2 = param_1 + 0x10b;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x131;
  FUN_00f0d160(plVar3);
  FUN_00f1306c(param_1 + 0x157);
  param_1[0x183] = 0;
  param_1[0x182] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x157,1);
  uVar4 = FUN_00e6ce7c("ESPORTS_BADGE_MARKET_TILE_TITLE",0);
  FUN_00f0d75c(plVar2,uVar4);
  uVar4 = FUN_00e6ce7c("ESPORTS_BADGE_MARKET_TILE_DESC",0);
  FUN_00f0d75c(plVar3,uVar4);
  FUN_00f0e540(plVar1,PTR_s_build___FranchiseLogos_tga_02be3610);
  *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
  return;
}




void FUN_00c2517c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = *(uint *)(param_1 + 0x182);
  plVar1 = (long *)param_1[0x183];
  *param_1 = &PTR_FUN_027f88d0;
  plVar4 = plVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)*plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x182);
        plVar1 = (long *)param_1[0x183];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar3);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x182) = 0;
    operator_delete__(plVar1);
    param_1[0x182] = 0;
    param_1[0x183] = 0;
  }
  param_1[0x157] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x16e);
  FUN_00f13d08(param_1 + 0x157);
  FUN_00f0d3a4(param_1 + 0x131);
  FUN_00f0d3a4(param_1 + 0x10b);
  FUN_00f0d3a4(param_1 + 0xe5);
  param_1[199] = &PTR_FUN_028266f0;
  param_1[0xde] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe1);
  FUN_00f13d08(param_1 + 199);
  FUN_00c22f2c(param_1);
  return;
}




void FUN_00c25268(void *param_1)

{
  FUN_00c2517c();
  operator_delete(param_1);
  return;
}




void FUN_00c2528c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  void *local_80;
  code *local_78;
  long lStack_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x3d0);
  FUN_00c25a34();
  local_80 = pvVar2;
  FUN_00c25380(pvVar2,param_2);
  FUN_008fa54c(&local_78,param_3);
  FUN_00c25418(pvVar2,&local_78);
  if (((byte)local_78 & 1) != 0) {
    operator_delete(local_68);
    pvVar2 = local_80;
  }
  local_50 = DAT_03139b40;
  local_78 = FUN_00c2549c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  lStack_70 = param_1;
  FUN_009693a0((long)pvVar2 + 8,&local_78);
  FUN_00c254ac(param_1 + 0xc10,&local_80);
  FUN_00f133a4(param_1 + 0xab8,local_80,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c25380(long param_1,undefined8 param_2)

{
  long lVar1;
  byte local_78 [16];
  void *local_68;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_78);
  FUN_008fce60(param_1 + 0x380,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_00e6a93c(local_78,0x40,"logo_%s",param_2);
  FUN_00f0e578(param_1 + 0x158,local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c25418(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  FUN_008fce60(param_1 + 0x73);
  if (param_1[0x6f] == 0) {
    pvVar1 = operator_new(0x24f8);
    FUN_00b0c19c(0x3f800000,pvVar1,param_2,&DAT_0320ffa8,1);
    param_1[0x6f] = (long)pvVar1;
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c25498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c2549c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c254a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x630))();
  return;
}




void FUN_00c254ac(uint *param_1,undefined8 *param_2)

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
    FUN_00c25ce0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c25534(long param_1,char *param_2,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  long *plVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0xc10) != 0) {
    plVar4 = *(long **)(param_1 + 0xc18);
    do {
      lVar5 = *plVar4;
      sVar3 = strlen(param_2);
      uVar1 = (ulong)(*(byte *)(lVar5 + 0x380) >> 1);
      if ((*(byte *)(lVar5 + 0x380) & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x388);
      }
      if ((sVar3 == uVar1) &&
         (iVar2 = FUN_0090d610(lVar5 + 0x380,0,0xffffffffffffffff,param_2,sVar3), iVar2 == 0)) {
        FUN_00c255e4(*plVar4,param_3);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != (long *)(*(long *)(param_1 + 0xc18) + (ulong)*(uint *)(param_1 + 0xc10) * 8))
    ;
  }
  return;
}




long FUN_00c255dc(long param_1)

{
  return param_1 + 0x380;
}




void FUN_00c255e4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_50;
  void *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a93c(auStack_40,8,&DAT_01bbc38b,param_2);
  FUN_00e705c8(&local_50,auStack_40);
  FUN_00f0d75c(param_1 + 0x248,&local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  *(undefined4 *)(param_1 + 0x3c8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2567c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e6a93c(auStack_68,0x40,"logo_%s",param_2);
  FUN_00f0e578(param_1 + 0x638,auStack_68);
  *(uint *)(param_1 + 0x6bc) = *(uint *)(param_1 + 0x6bc) | 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c256f0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_40;
  void *local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e6a93c(auStack_30,8,&DAT_01bbc38b,param_2);
  FUN_00e705c8(&local_40,auStack_30);
  FUN_00f0d75c(param_1 + 0x728,&local_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
    local_40 = 0;
    local_38 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c25778(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  float fVar10;
  
  fVar10 = (float)FUN_00c26d54();
  lVar1 = param_3 + 0x638;
  FUN_00f13f08(fVar10 * 0.105,fVar10 * 0.105,lVar1);
  lVar2 = param_3 + 0x858;
  FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0dad0(fVar10 * 0.7,lVar2,1);
  FUN_00f0da30(lVar2,1);
  lVar3 = param_3 + 0x988;
  FUN_00f0dad0(fVar10 * 0.7,lVar3,1);
  FUN_00f0d378(lVar3,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  lVar4 = param_3 + 0x728;
  FUN_00f0d378(lVar4,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f0da30(lVar4,1);
  if (*(int *)(param_3 + 0xc10) != 0) {
    puVar7 = *(undefined8 **)(param_3 + 0xc18);
    uVar8 = 1;
    puVar9 = puVar7;
    do {
      (**(code **)(*(long *)*puVar7 + 0x138))();
      if (puVar7 == *(undefined8 **)(param_3 + 0xc18)) {
LAB_00c25900:
        uVar8 = uVar8 + 1;
      }
      else {
        uVar5 = *puVar7;
        if (uVar8 < 6) {
          uVar6 = puVar7[-1];
          FUN_00f07b18(0x430e0000,uVar5,3,uVar6,1);
          FUN_00f07b18(0,uVar5,0,uVar6,0);
          goto LAB_00c25900;
        }
        uVar6 = *puVar9;
        uVar8 = 2;
        FUN_00f07b18(0x42000000,uVar5,0,uVar6,2);
        FUN_00f07b18(0,uVar5,3,uVar6,3);
        puVar9 = puVar7;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (undefined8 *)
                       (*(long *)(param_3 + 0xc18) + (ulong)*(uint *)(param_3 + 0xc10) * 8));
  }
  FUN_00f13238(param_3 + 0xab8);
  FUN_00f07940(fVar10 * 0.131,param_2 * 0.124,lVar1,8,param_3,0);
  FUN_00f07940(0xc1200000,0x41200000,lVar4,8,lVar1,1);
  FUN_00f07a18(0x43480000,param_2 * 0.058,lVar2,4);
  FUN_00f07b18(0x41200000,lVar3,0,lVar2,2);
  FUN_00f07b18(0,lVar3,3,lVar2,3);
  FUN_00f07a18(0,-(param_2 * 0.042),param_3 + 0xab8,6);
  return;
}




void FUN_00c25a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c25a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x630))();
  return;
}




void FUN_00c25a34(long *param_1)

{
  long *plVar1;
  
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027f89f0;
  FUN_00f0e4a8(plVar1);
  FUN_00f0d160(param_1 + 0x49);
  memset(param_1 + 0x6f,0,0x54);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x49,1);
  FUN_00f0e540(plVar1,PTR_s_build___FranchiseLogos_tga_02be3610);
  return;
}




void FUN_00c25ad4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f89f0;
  if ((long *)param_1[0x6f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6f] + 8))();
    param_1[0x6f] = 0;
  }
  if ((*(byte *)(param_1 + 0x76) & 1) != 0) {
    operator_delete((void *)param_1[0x78]);
  }
  if ((*(byte *)(param_1 + 0x73) & 1) != 0) {
    operator_delete((void *)param_1[0x75]);
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    operator_delete((void *)param_1[0x72]);
  }
  FUN_00f0d3a4(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c25b98(void *param_1)

{
  FUN_00c25ad4();
  operator_delete(param_1);
  return;
}




void FUN_00c25bbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x158;
  FUN_00f13f08(0x431e0000,0x431e0000,lVar1);
  lVar2 = param_1 + 0x248;
  *(uint *)(param_1 + 0x2cc) =
       *(uint *)(param_1 + 0x2cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2cc) & 3 | (uint)(*(int *)(param_1 + 0x3c8) != 0) << 2;
  FUN_00f0d378(lVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  FUN_00f0da30(lVar2,1);
  *(uint *)(param_1 + 0x2cc) = *(uint *)(param_1 + 0x2cc) & 0xffffffbf;
  FUN_00f07940(0xc0800000,0x40800000,lVar2,8,lVar1,1);
  lVar2 = *(long *)(param_1 + 0x378);
  if (lVar2 != 0) {
    if ((*(float *)(lVar2 + 0x48) != 0.88) || (*(float *)(lVar2 + 0x4c) != 0.88)) {
      *(undefined8 *)(lVar2 + 0x48) = 0x3f6147ae3f6147ae;
      FUN_0091ada4(lVar2);
      lVar2 = *(long *)(param_1 + 0x378);
    }
    FUN_00f07b18(0x41000000,lVar2,0,lVar1,2);
    FUN_00f07b18(0,lVar2,4,lVar1,4);
  }
  FUN_00f1340c(param_1,0);
  FUN_00f13238(param_1);
  return;
}




void FUN_00c25ce0(uint *param_1,uint param_2)

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




void FUN_00c25d60(undefined8 *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_thunk_FUN_00f13d08_027f8b40;
  return;
}




void FUN_00c25d98(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00c25dbc(float *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_MARKET_FEATURED_RECOMMENDED",0);
  FUN_00910394(param_1 + 4,uVar2);
  FUN_00f00298(&local_50,(ulong)&local_50 | 4);
  fVar5 = -328.0;
  fVar3 = (float)FUN_00aff69c();
  fVar6 = (fStack_4c + -328.0) - fVar5;
  fVar4 = (float)(**(code **)(*param_2 + 0x48))(param_2);
  fVar4 = ((local_50 + -328.0) - fVar3) / fVar4;
  fVar6 = fVar6 / fVar5;
  if (fVar6 <= fVar4) {
    fVar4 = fVar6;
  }
  fVar3 = 1.5;
  fVar4 = (float)NEON_fminnm(fVar4,0x3fc00000);
  if ((*(float *)(param_2 + 9) != fVar4) ||
     (fVar3 = *(float *)((long)param_2 + 0x4c), fVar3 != fVar4)) {
    *(float *)(param_2 + 9) = fVar4;
    *(float *)((long)param_2 + 0x4c) = fVar4;
    FUN_0091ada4(param_2);
  }
  fVar4 = (float)(**(code **)(*param_2 + 0x50))(param_2);
  fVar6 = fVar3 + 28.0;
  fVar5 = (float)FUN_00aff69c();
  param_1[0x19] = 0.0;
  *param_1 = fVar4 + 28.0 + fVar5;
  param_1[1] = fVar6 + fVar3;
  FUN_00aff91c(param_1,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bbc3a0);
  param_1[0x17] = -NAN;
  param_1[0x18] = -NAN;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c25f0c(long *param_1,long *param_2)

{
  param_1[0x18] = (long)param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00c25f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(0,param_2,1,4,1);
  return;
}




void FUN_00c25f58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x150))();
    lVar1 = *(long *)(param_1 + 0xc0);
    if ((*(float *)(lVar1 + 0x40) != 7.0) || (*(float *)(lVar1 + 0x44) != 7.0)) {
      uVar2 = NEON_fmov(0x40e00000,4);
      *(undefined8 *)(lVar1 + 0x40) = uVar2;
      FUN_0091ada4();
      return;
    }
  }
  return;
}




ulong FUN_00c25fbc(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(long **)(param_3 + 0xc0) == (long *)0x0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    fVar3 = (float)(**(code **)(**(long **)(param_3 + 0xc0) + 0x48))();
    uVar1 = (ulong)(uint)(int)fVar3;
    uVar2 = (ulong)(uint)(int)param_2 << 0x20;
  }
  return uVar1 | uVar2;
}




void FUN_00c25ffc(float param_1,float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((((long *)param_3[0x18] != (long *)0x0) &&
      (fVar4 = param_2, fVar2 = (float)(**(code **)(*(long *)param_3[0x18] + 0x48))(), 0.0 <= fVar2)
      ) && (0.0 <= fVar4)) {
    fVar3 = param_1 / fVar2;
    if (param_2 / fVar4 <= param_1 / fVar2) {
      fVar3 = param_2 / fVar4;
    }
    if (fVar3 < 1.0) {
      lVar1 = param_3[0x18];
      if ((*(float *)(lVar1 + 0x48) != fVar3) || (*(float *)(lVar1 + 0x4c) != fVar3)) {
        if ((*(float *)(lVar1 + 0x48) != fVar3) || (*(float *)(lVar1 + 0x4c) != fVar3)) {
          *(float *)(lVar1 + 0x48) = fVar3;
          *(float *)(lVar1 + 0x4c) = fVar3;
          FUN_0091ada4();
        }
                    /* WARNING: Could not recover jumptable at 0x00c260b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0xe8))(param_3);
        return;
      }
    }
  }
  return;
}

