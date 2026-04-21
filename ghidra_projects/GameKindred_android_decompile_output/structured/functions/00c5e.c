// functions/00c5e — 29 functions
#include "libGameKindred.h"




void FUN_00c5e0a0(void *param_1)

{
  FUN_00c5dd38();
  operator_delete(param_1);
  return;
}




void FUN_00c5e0c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe8a0;
  param_1[0x18] = &PTR_FUN_027fe9f8;
  FUN_00b27cec(param_1 + 0x782);
  param_1[0x764] = &PTR_FUN_028266f0;
  param_1[0x77b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x77e);
  FUN_00f13d08(param_1 + 0x764);
  FUN_00f13d08(param_1 + 0x74d);
  FUN_00bf90dc(param_1 + 0x738);
  thunk_FUN_00ed5534(param_1 + 0x5f3);
  FUN_00b2e770(param_1 + 0x476);
  param_1[0x32d] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x44e);
  FUN_00c925cc(param_1 + 0x32d);
  param_1[0x1e4] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x305);
  FUN_00c925cc(param_1 + 0x1e4);
  param_1[0x9b] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x1bc);
  FUN_00c925cc(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  FUN_00f13d08(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4f);
  param_1[0x31] = &PTR_FUN_028266f0;
  param_1[0x48] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c5e22c(void *param_1)

{
  FUN_00c5e0c4();
  operator_delete(param_1);
  return;
}




void FUN_00c5e250(long param_1)

{
  FUN_00c5e0c4(param_1 + -0xc0);
  return;
}




void FUN_00c5e258(long param_1)

{
  FUN_00c5e0c4((void *)(param_1 + -0xc0));
  operator_delete((void *)(param_1 + -0xc0));
  return;
}




void * FUN_00c5e280(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1868);
  FUN_00c594bc();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00c5e2e8(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1870);
  FUN_00c59780();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00c5e350(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xc30);
  FUN_00c59a44();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c5e3b8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x1b;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  *param_3 = (long)&PTR_FUN_027fea28;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  FUN_00c93da8(plVar1,0);
  plVar2 = param_3 + 0x1ab;
  FUN_00f13ca4(plVar2);
  plVar3 = param_3 + 0x1c2;
  FUN_00c93600(plVar3,0);
  plVar4 = param_3 + 0x30b;
  FUN_00f0e4a8(plVar4);
  *(undefined1 *)(param_3 + 0x329) = 1;
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f0e548(plVar4,PTR_s_build___SpoilsOfWarBg_png_02be3640,"full_loading_2k");
  uVar11 = *(uint *)((long)param_3 + 0x18dc);
  if ((~uVar11 & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x18dc) = uVar11 | 0x7f80;
    FUN_0091ada4(plVar4);
    uVar11 = *(uint *)((long)param_3 + 0x18dc);
  }
  *(uint *)((long)param_3 + 0x18dc) = uVar11 | 0x10;
  uVar9 = FUN_00937f24();
  puVar8 = PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  puVar7 = PTR_s_build___VGX_common_atlas_02be3540;
  if ((uVar9 & 1) != 0) {
    uVar10 = FUN_00e6ce7c("MENU_SPOILS_WATCH_AD",0);
    FUN_00c93f58(plVar1,puVar7,"spoils_watch_ad_icon",puVar8,uVar10);
    FUN_00c93fa4(0x43ee0000,plVar1,1);
    FUN_00c9279c(plVar1,PTR_s_build___VGX_common_atlas_02be3540,"spoils_watch_ad_button");
    FUN_00c93e38(plVar1);
    fVar12 = (float)FUN_00f13e54(plVar1);
    fVar13 = 680.0 - fVar12;
    if (680.0 - fVar12 <= 40.0) {
      fVar13 = 40.0;
    }
    fVar12 = 240.0 - param_2;
    if (240.0 - param_2 <= 40.0) {
      fVar12 = 40.0;
    }
    FUN_00c928a0(fVar13 * 0.5,fVar12 * 0.5,plVar1);
  }
  FUN_00c9279c(plVar3,PTR_s_build___VGX_common_atlas_02be3540,"spoils_watch_ad_button");
  FUN_00f13f18(plVar3,&DAT_01bbe080);
  FUN_00c9288c(0x42200000,plVar3);
  uVar10 = FUN_00e6ce7c("MENU_SPOILS_EXIT",0);
  FUN_00c938d4(plVar3,uVar10);
  FUN_00c93864(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_60 = DAT_03210f84;
  local_88 = FUN_00c5e710;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_3;
  FUN_009693a0(param_3 + 1,&local_88);
  local_88 = FUN_00c5e710;
  local_60 = DAT_03210f58;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_3;
  FUN_009693a0(param_3 + 1,&local_88);
  uVar9 = FUN_00937f24();
  uVar5 = DAT_03210c64;
  if ((uVar9 & 1) != 0) {
    local_88 = FUN_00c5e728;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    plStack_80 = param_3;
    local_60 = uVar5;
    FUN_009693a0(param_3 + 0x1c,&local_88);
  }
  local_88 = FUN_00c5e740;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_3;
  local_60 = uVar5;
  FUN_009693a0(param_3 + 0x1c3,&local_88);
  if ((*(uint *)((long)param_3 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_3 + 0x84) = *(uint *)((long)param_3 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_3);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5e710(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5e720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c5e728(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5e738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c5e740(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00c5e758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fea28;
  param_1[0x30b] = &PTR_FUN_028266f0;
  param_1[0x322] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x325);
  FUN_00f13d08(param_1 + 0x30b);
  param_1[0x1c2] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x2e3);
  FUN_00c925cc(param_1 + 0x1c2);
  FUN_00f13d08(param_1 + 0x1ab);
  param_1[0x1b] = &PTR_FUN_028065e0;
  param_1[0x18d] = &PTR_FUN_028266f0;
  param_1[0x1a4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a7);
  FUN_00f13d08(param_1 + 0x18d);
  param_1[0x162] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x179);
  FUN_00f13d08(param_1 + 0x162);
  FUN_00f0d3a4(param_1 + 0x13c);
  FUN_00c925cc(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c5e860(void *param_1)

{
  FUN_00c5e758();
  operator_delete(param_1);
  return;
}




void FUN_00c5e884(long *param_1,long param_2)

{
  param_1[0x19] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00c5e8b8(param_1);
  return;
}




void FUN_00c5e8b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_80;
  float fStack_7c;
  int local_74;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f0025c(&local_6c,&local_70);
  FUN_00967388(0,0,0,&local_74);
  FUN_00f13f08(local_6c,local_70,param_1 + 0x30b);
  if (((param_1[0x19] != 0) && (param_1[0x18] != 0)) && (param_1[0x1a] != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    fVar6 = local_70;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00c16544((float)local_74,param_1[0x19]);
    fVar8 = (float)local_74 + 560.0;
    FUN_00f13f08(local_6c,param_1[0x19]);
    plVar1 = param_1 + 0x1ab;
    local_80 = (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fStack_7c = fVar8;
    FUN_00f13f18(plVar1,&local_80);
    lVar3 = param_1[0x1a];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fVar8 = (fVar6 - fVar8) + 68.0;
    FUN_00f13f08(0x44160000,fVar8,lVar3);
    lVar3 = param_1[0x18];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    FUN_00f13f08(uVar7,(fVar6 - fVar8) + 68.0,lVar3);
    plVar2 = param_1 + 0x1c2;
    if ((*(byte *)((long)param_1 + 0x15c) >> 2 & 1) == 0) {
      fVar6 = 0.0;
      plVar5 = plVar2;
    }
    else {
      plVar5 = param_1 + 0x1b;
      fVar6 = (float)FUN_00f13e54(plVar2);
      FUN_00f07940(-200.0 - fVar6 * 0.5,0,plVar2,8,plVar1,8);
      fVar6 = (float)FUN_00f13e54(plVar5);
      fVar6 = fVar6 * 0.5 + 200.0;
    }
    FUN_00f07940(fVar6,0,plVar5,8,plVar1,8);
    FUN_00f07a78(0,0,param_1 + 0x30b,0);
    FUN_00f07a78(0,0,param_1[0x18],4);
    if ((char)param_1[0x329] != '\0') {
      FUN_00f13e54(plVar1);
      FUN_00f07a78(0,plVar1,6);
    }
    FUN_00f07940(0,0,param_1[0x19],6,plVar1,4);
    FUN_00f07940(0,0,param_1[0x1a],3,param_1[0x19],0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5eb44(long *param_1,long param_2)

{
  param_1[0x18] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00c5e8b8(param_1);
  return;
}




void FUN_00c5eb78(long *param_1,long param_2)

{
  param_1[0x1a] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00c5e8b8(param_1);
  return;
}




void thunk_FUN_00c5e8b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uStack_80;
  float fStack_7c;
  int iStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  FUN_00f0025c(&uStack_6c,&fStack_70);
  FUN_00967388(0,0,0,&iStack_74);
  FUN_00f13f08(uStack_6c,fStack_70,param_1 + 0x30b);
  if (((param_1[0x19] != 0) && (param_1[0x18] != 0)) && (param_1[0x1a] != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    fVar6 = fStack_70;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00c16544((float)iStack_74,param_1[0x19]);
    fVar8 = (float)iStack_74 + 560.0;
    FUN_00f13f08(uStack_6c,param_1[0x19]);
    plVar1 = param_1 + 0x1ab;
    uStack_80 = (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fStack_7c = fVar8;
    FUN_00f13f18(plVar1,&uStack_80);
    lVar3 = param_1[0x1a];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fVar8 = (fVar6 - fVar8) + 68.0;
    FUN_00f13f08(0x44160000,fVar8,lVar3);
    lVar3 = param_1[0x18];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    FUN_00f13f08(uVar7,(fVar6 - fVar8) + 68.0,lVar3);
    plVar2 = param_1 + 0x1c2;
    if ((*(byte *)((long)param_1 + 0x15c) >> 2 & 1) == 0) {
      fVar6 = 0.0;
      plVar5 = plVar2;
    }
    else {
      plVar5 = param_1 + 0x1b;
      fVar6 = (float)FUN_00f13e54(plVar2);
      FUN_00f07940(-200.0 - fVar6 * 0.5,0,plVar2,8,plVar1,8);
      fVar6 = (float)FUN_00f13e54(plVar5);
      fVar6 = fVar6 * 0.5 + 200.0;
    }
    FUN_00f07940(fVar6,0,plVar5,8,plVar1,8);
    FUN_00f07a78(0,0,param_1 + 0x30b,0);
    FUN_00f07a78(0,0,param_1[0x18],4);
    if ((char)param_1[0x329] != '\0') {
      FUN_00f13e54(plVar1);
      FUN_00f07a78(0,plVar1,6);
    }
    FUN_00f07940(0,0,param_1[0x19],6,plVar1,4);
    FUN_00f07940(0,0,param_1[0x1a],3,param_1[0x19],0);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5ebb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00efee28(FUN_009a7608);
  FUN_00f022a0(param_1,uVar1);
  return;
}




void FUN_00c5ebe0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00efee28(FUN_009a7608);
  FUN_00f022a0(param_1 + 0x1858,uVar1);
  return;
}




void FUN_00c5ec18(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  FUN_00f13e54(param_3 + 0xd58);
  uVar2 = FUN_00eff008(0,-param_2,param_1,0);
  uVar3 = FUN_00eff9ec(param_1,thunk_FUN_00c5e8b8,param_3);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efce98(puVar5,uVar2,uVar3);
  *(undefined1 *)(param_3 + 0x1948) = 0;
  FUN_00f022a0(param_3,puVar5);
  return;
}




void thunk_FUN_00c5e8b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uStack_80;
  float fStack_7c;
  int iStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  FUN_00f0025c(&uStack_6c,&fStack_70);
  FUN_00967388(0,0,0,&iStack_74);
  FUN_00f13f08(uStack_6c,fStack_70,param_1 + 0x30b);
  if (((param_1[0x19] != 0) && (param_1[0x18] != 0)) && (param_1[0x1a] != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    fVar6 = fStack_70;
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00c16544((float)iStack_74,param_1[0x19]);
    fVar8 = (float)iStack_74 + 560.0;
    FUN_00f13f08(uStack_6c,param_1[0x19]);
    plVar1 = param_1 + 0x1ab;
    uStack_80 = (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fStack_7c = fVar8;
    FUN_00f13f18(plVar1,&uStack_80);
    lVar3 = param_1[0x1a];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    fVar8 = (fVar6 - fVar8) + 68.0;
    FUN_00f13f08(0x44160000,fVar8,lVar3);
    lVar3 = param_1[0x18];
    (**(code **)(*(long *)param_1[0x19] + 0x48))();
    FUN_00f13f08(uVar7,(fVar6 - fVar8) + 68.0,lVar3);
    plVar2 = param_1 + 0x1c2;
    if ((*(byte *)((long)param_1 + 0x15c) >> 2 & 1) == 0) {
      fVar6 = 0.0;
      plVar5 = plVar2;
    }
    else {
      plVar5 = param_1 + 0x1b;
      fVar6 = (float)FUN_00f13e54(plVar2);
      FUN_00f07940(-200.0 - fVar6 * 0.5,0,plVar2,8,plVar1,8);
      fVar6 = (float)FUN_00f13e54(plVar5);
      fVar6 = fVar6 * 0.5 + 200.0;
    }
    FUN_00f07940(fVar6,0,plVar5,8,plVar1,8);
    FUN_00f07a78(0,0,param_1 + 0x30b,0);
    FUN_00f07a78(0,0,param_1[0x18],4);
    if ((char)param_1[0x329] != '\0') {
      FUN_00f13e54(plVar1);
      FUN_00f07a78(0,plVar1,6);
    }
    FUN_00f07940(0,0,param_1[0x19],6,plVar1,4);
    FUN_00f07940(0,0,param_1[0x1a],3,param_1[0x19],0);
  }
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5ed38(long param_1)

{
  *(uint *)(param_1 + 0xddc) = *(uint *)(param_1 + 0xddc) & 0xfffffffb;
  return;
}




void FUN_00c5ed48(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5ed58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c5ed60(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c5ed78(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5ed88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00c5ed90(undefined8 *param_1)

{
  FUN_00f0ac5c();
  param_1[0x29] = 0;
  *param_1 = &PTR_FUN_027ff060;
  FUN_00948cd8(param_1 + 0x2a);
  *param_1 = &PTR_FUN_027feb70;
  param_1[0x2a] = &PTR_FUN_027fecc8;
  FUN_00f017e8(param_1 + 0x2d);
  FUN_00f11234(param_1 + 0x3e);
  FUN_00f0e4a8(param_1 + 0x72);
  FUN_00f0e4a8(param_1 + 0x90);
  FUN_00f0e4a8(param_1 + 0xae);
  FUN_00f13ca4(param_1 + 0xcc);
  FUN_00f017e8(param_1 + 0xe3);
  param_1[0xe3] = &PTR_FUN_027c1f80;
  FUN_00ad77f8(param_1 + 0xf4);
  FUN_00ab6c24(param_1 + 0xe16,0);
  FUN_00f13ca4(param_1 + 0x10ce);
  FUN_00f0e4a8(param_1 + 0x10e5);
  FUN_00f0bdbc(param_1 + 0x1103,0);
  param_1[0x1103] = &PTR_FUN_027c3260;
  FUN_00f0d160(param_1 + 0x111c);
  FUN_00ab6c24(param_1 + 0x1142,0);
  FUN_00aba378(param_1 + 0x13fa,0);
  FUN_00aba378(param_1 + 0x1888,0);
  FUN_00f017e8(param_1 + 0x1d16);
  param_1[0x1d16] = &PTR_FUN_027c1f80;
  FUN_00ad61b8(param_1 + 0x1d27);
  FUN_00abaee8(param_1 + 0x26df,0);
  FUN_00abaee8(param_1 + 0x279e,0);
  FUN_00f11234(param_1 + 0x285d);
  FUN_00ecfd6c(param_1 + 0x2891,0);
  FUN_00abaee8(param_1 + 0x2938,0);
  FUN_00b4bd84(param_1 + 0x29f7);
  FUN_00b4d92c(param_1 + 0x3950);
  *(undefined1 *)((long)param_1 + 0x1fe61) = 0;
  FUN_00be0e54(param_1 + 0x3fce);
  FUN_00bf0d58(param_1 + 0x3fd5);
  return;
}




void FUN_00c5ef8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027feb70;
  param_1[0x2a] = &PTR_FUN_027fecc8;
  FUN_00a9bb74();
  FUN_00bf0db0(param_1 + 0x3fd5);
  FUN_00be0f08(param_1 + 0x3fce);
  FUN_00b4e68c(param_1 + 0x3950);
  FUN_00b4d610(param_1 + 0x29f7);
  param_1[0x2938] = &PTR_FUN_027d5388;
  param_1[0x29d3] = &PTR_FUN_028266f0;
  param_1[0x29ea] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x29ed);
  FUN_00f13d08(param_1 + 0x29d3);
  param_1[0x29b5] = &PTR_FUN_028266f0;
  param_1[0x29cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x29cf);
  FUN_00f13d08(param_1 + 0x29b5);
  param_1[0x2997] = &PTR_FUN_028266f0;
  param_1[0x29ae] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x29b1);
  FUN_00f13d08(param_1 + 0x2997);
  FUN_00f01868(param_1 + 0x2986);
  FUN_009c825c(param_1 + 0x2938);
  FUN_00ed00e0(param_1 + 0x2891);
  FUN_00f13d08(param_1 + 0x285d);
  param_1[0x279e] = &PTR_FUN_027d5388;
  param_1[0x2839] = &PTR_FUN_028266f0;
  param_1[0x2850] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2853);
  FUN_00f13d08(param_1 + 0x2839);
  param_1[0x281b] = &PTR_FUN_028266f0;
  param_1[0x2832] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2835);
  FUN_00f13d08(param_1 + 0x281b);
  param_1[0x27fd] = &PTR_FUN_028266f0;
  param_1[0x2814] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2817);
  FUN_00f13d08(param_1 + 0x27fd);
  FUN_00f01868(param_1 + 0x27ec);
  FUN_009c825c(param_1 + 0x279e);
  param_1[0x26df] = &PTR_FUN_027d5388;
  param_1[0x277a] = &PTR_FUN_028266f0;
  param_1[0x2791] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2794);
  FUN_00f13d08(param_1 + 0x277a);
  param_1[0x275c] = &PTR_FUN_028266f0;
  param_1[0x2773] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2776);
  FUN_00f13d08(param_1 + 0x275c);
  param_1[0x273e] = &PTR_FUN_028266f0;
  param_1[0x2755] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2758);
  FUN_00f13d08(param_1 + 0x273e);
  FUN_00f01868(param_1 + 0x272d);
  FUN_009c825c(param_1 + 0x26df);
  FUN_00ad65a8(param_1 + 0x1d27);
  FUN_00f01868(param_1 + 0x1d16);
  FUN_00abbb28(param_1 + 0x1888);
  FUN_00abbb28(param_1 + 0x13fa);
  FUN_009c7fa8(param_1 + 0x1142);
  FUN_00f0d3a4(param_1 + 0x111c);
  FUN_00f13d08(param_1 + 0x1103);
  param_1[0x10e5] = &PTR_FUN_028266f0;
  param_1[0x10fc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10ff);
  FUN_00f13d08(param_1 + 0x10e5);
  FUN_00f13d08(param_1 + 0x10ce);
  FUN_009c7fa8(param_1 + 0xe16);
  FUN_00ad7a38(param_1 + 0xf4);
  FUN_00f01868(param_1 + 0xe3);
  FUN_00f13d08(param_1 + 0xcc);
  param_1[0xae] = &PTR_FUN_028266f0;
  param_1[0xc5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 200);
  FUN_00f13d08(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_028266f0;
  param_1[0xa7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xaa);
  FUN_00f13d08(param_1 + 0x90);
  param_1[0x72] = &PTR_FUN_028266f0;
  param_1[0x89] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x72);
  FUN_00f13d08(param_1 + 0x3e);
  FUN_00f01868(param_1 + 0x2d);
  FUN_00948d58(param_1 + 0x2a);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

