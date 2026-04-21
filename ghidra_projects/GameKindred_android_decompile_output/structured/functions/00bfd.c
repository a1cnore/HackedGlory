// functions/00bfd — 22 functions
#include "libGameKindred.h"




void FUN_00bfd184(long param_1)

{
  if (*(char *)(param_1 + 0x640) != '\0') {
    FUN_00f0e628(param_1 + 0x2b0);
    *(undefined1 *)(param_1 + 0x640) = 0;
                    /* WARNING: Could not recover jumptable at 0x00bfd1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 200))();
    return;
  }
  return;
}




void FUN_00bfd1cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f45b0;
  pcStack_50 = FUN_00bfd658;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  FUN_00f13d08(param_1 + 0xb1);
  FUN_00f0d3a4(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_028266f0;
  param_1[0x6d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x38] = &PTR_FUN_028266f0;
  param_1[0x4f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x52);
  FUN_00f13d08(param_1 + 0x38);
  param_1[0x1a] = &PTR_FUN_028266f0;
  param_1[0x31] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x34);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfd2c8(void *param_1)

{
  FUN_00bfd1cc();
  operator_delete(param_1);
  return;
}




void FUN_00bfd2ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  float local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00f00438("root-layer");
  FUN_00967268(auStack_6c,auStack_70,auStack_74,auStack_78);
  FUN_00f0025c(&uStack_7c,&local_80);
  FUN_00f00298(auStack_84,auStack_88);
  fVar6 = local_80;
  FUN_00f13f08(uStack_7c,local_80,param_1);
  lVar1 = param_1 + 0x2b0;
  uVar5 = FUN_00f0eac0(lVar1);
  FUN_00f0eac0(lVar1);
  FUN_00f13f08(uStack_7c,local_80,param_1 + 0xd0);
  lVar2 = param_1 + 0x3a0;
  FUN_00f13f08(uVar5,fVar6 + 150.0,lVar2);
  FUN_00f13f08((float)uVar5 + 100.0,fVar6 + 150.0 + 100.0,param_1 + 0x1c0);
  FUN_00f13f08(uStack_7c,local_80,param_1 + 0x588);
  FUN_00f07940(0,0,param_1,0,uVar4,0);
  FUN_00f07940(0,0,param_1 + 0xd0,0,param_1,0);
  FUN_00f07a18(0,0,param_1 + 0x1c0,8);
  FUN_00f07a18(0,0,lVar2,8);
  FUN_00f07940(0,0,param_1 + 0x458,0,lVar2,4);
  FUN_00f07940(0,0x42dc0000,lVar1,4,lVar2,4);
  FUN_00f07940(0,0,param_1 + 0x588,0,lVar2,0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfd4c8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bfd4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00bfd4d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = param_1 + 0x56;
  FUN_00f0e628(plVar1);
  *(undefined1 *)(param_1 + 200) = 0;
  FUN_00f0e540(plVar1,param_2);
  FUN_00f0e578(plVar1,param_3);
  FUN_00f082c0(0x44848000,plVar1);
  FUN_00f0d75c(param_1 + 0x8b,param_4);
  pcStack_50 = FUN_00bfd658;
  local_58 = param_1;
  FUN_00f02e98(0x3fc00000,&local_58,0,0);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfd5a8(long param_1)

{
  FUN_00f0e628(param_1 + 0x2b0);
  *(undefined1 *)(param_1 + 0x640) = 0;
  return;
}




void FUN_00bfd5d0(long param_1)

{
  FUN_00f0e628(param_1 + 0x2b0);
  *(undefined1 *)(param_1 + 0x640) = 0;
                    /* WARNING: Could not recover jumptable at 0x00bfd600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 200))();
  return;
}




void FUN_00bfd604(long param_1)

{
  if (*(char *)(param_1 + 0x640) != '\0') {
    FUN_00f0e628(param_1 + 0x2b0);
    *(undefined1 *)(param_1 + 0x640) = 0;
                    /* WARNING: Could not recover jumptable at 0x00bfd63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 200))();
    return;
  }
  return;
}




void FUN_00bfd64c(long param_1)

{
  *(undefined1 *)(param_1 + 0x640) = 1;
  return;
}




void FUN_00bfd658(long param_1)

{
  *(undefined1 *)(param_1 + 0x640) = 1;
  return;
}




void FUN_00bfd664(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_6c;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  plVar3 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027f4718;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00e70570(&local_58,&DAT_0320ffa8);
  uVar2 = FUN_00e70b88(param_2,&DAT_03210450);
  if ((uVar2 & 1) != 0) {
    FUN_00e705c8(&local_68,"{68,156,188}");
    FUN_00910394(&local_58,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00e70c34(&local_58,param_2);
    FUN_00e705c8(&local_68,&DAT_01bbb65d);
    FUN_00e70c34(&local_58,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  local_6c = 0xff5262cc;
  if ((param_4 & 1) == 0) {
    local_6c = 0xffffffff;
  }
  uVar2 = FUN_00e70b88(param_3,&DAT_03210450);
  if ((uVar2 & 1) != 0) {
    FUN_00e705c8(&local_68,&DAT_01bbb662);
    FUN_00e70c34(&local_58,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00e70c34(&local_58,param_3);
    FUN_00e705c8(&local_68,&DAT_01bbb65d);
    FUN_00e70c34(&local_58,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  FUN_00f0d9a4(plVar3,1);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&local_6c);
  FUN_00f0d75c(plVar3,&local_58);
  FUN_00f0da30(plVar3,1);
  FUN_00f0d9b0(plVar3,1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfd874(long param_1)

{
  FUN_00f0dad0(param_1 + 0xb8,1);
  return;
}




void FUN_00bfd880(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
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
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f4860;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6b;
  FUN_00f11234(plVar4);
  plVar5 = param_1 + 0x9f;
  FUN_00ed66ec(plVar5);
  FUN_00f13ca4();
  plVar6 = param_1 + 0x1fb;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x219;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x237;
  FUN_00ed78f4(plVar8);
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)((long)param_1 + 0x1684) = 100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,plVar2,1);
  FUN_00f023ec(plVar4,plVar3,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar1,plVar7,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"global_gradient_bot");
  FUN_00f0e670(plVar3,&DAT_01bee7fa,2);
  uVar14 = *(uint *)((long)param_1 + 0x2ec);
  if ((uVar14 & 0x7f80) != 0x1180) {
    *(uint *)((long)param_1 + 0x2ec) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x1180;
    FUN_0091ada4(plVar3);
    uVar14 = *(uint *)((long)param_1 + 0x2ec);
  }
  *(uint *)((long)param_1 + 0x2ec) = uVar14 & 0xfffffff7;
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x105c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x105c) = *(uint *)((long)param_1 + 0x105c) & 0xffff807f;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar7,&DAT_01bee7fa,2);
  uVar14 = *(uint *)((long)param_1 + 0x114c);
  if ((uVar14 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x114c) = uVar14 & 0xffff807f;
    FUN_0091ada4(plVar7);
    uVar14 = *(uint *)((long)param_1 + 0x114c);
  }
  *(uint *)((long)param_1 + 0x114c) = uVar14 & 0xfffffff7;
  FUN_00f112f0(plVar4,1);
  local_98 = (code *)CONCAT71(local_98._1_7_,9);
  FUN_00ed5ab0(plVar5,&local_98);
  FUN_00ed5664(plVar5,param_1 + 0x1e4,1);
  uVar12 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00f0d75c(param_1 + 0x270,uVar12);
  plVar2 = param_1 + 0x238;
  local_70 = DAT_03210fb4;
  local_98 = FUN_00bfdd0c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar2,&local_98);
  local_70 = DAT_03210fbc;
  local_98 = FUN_00bfdd10;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar2,&local_98);
  local_70 = DAT_03210fb8;
  local_98 = FUN_00bfdd44;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar2,&local_98);
  FUN_00ed7be4(plVar8,1);
  iVar11 = FUN_0092f28c();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (iVar11 != 1) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  FUN_00f0d378(param_1 + 0x270,*ppuVar9);
  iVar11 = FUN_0092f28c();
  if (iVar11 == 0) {
    FUN_00ed7fc0(0x41900000,plVar8);
  }
  pvVar13 = operator_new(0x1e8);
  FUN_00bfd664(pvVar13,&DAT_03210450,&DAT_03210450,0,0,0);
  param_1[0x2cf] = (long)pvVar13;
  FUN_00f023ec(plVar4,pvVar13,1);
  (**(code **)(*param_1 + 0x140))(param_1);
  if ((*(uint *)((long)param_1 + 0x144) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  *(uint *)((long)param_1 + 0x123c) = *(uint *)((long)param_1 + 0x123c) & 0xffffffef;
  *(uint *)((long)param_1 + 0x57c) = *(uint *)((long)param_1 + 0x57c) & 0xffffffef;
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfdd0c(void)

{
  return;
}




void FUN_00bfdd10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x1680) == '\0') {
    FUN_00bfe684(param_1,1);
  }
  FUN_00f0490c(param_4);
  return;
}




void FUN_00bfdd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00bfe938(param_1,param_4);
  return;
}




void FUN_00bfdd4c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x2cd);
  *param_1 = &PTR_FUN_027f4860;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(param_1[0x2ce] + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(param_1[0x2ce] + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x2cd);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if ((void *)param_1[0x2ce] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2cd) = 0;
    operator_delete__((void *)param_1[0x2ce]);
    param_1[0x2cd] = 0;
    param_1[0x2ce] = 0;
  }
  FUN_00ed7b24(param_1 + 0x237);
  param_1[0x219] = &PTR_FUN_028266f0;
  param_1[0x230] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x233);
  FUN_00f13d08(param_1 + 0x219);
  param_1[0x1fb] = &PTR_FUN_028266f0;
  param_1[0x212] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x215);
  FUN_00f13d08(param_1 + 0x1fb);
  FUN_00f13d08(param_1 + 0x1e4);
  thunk_FUN_00ed5534(param_1 + 0x9f);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00bfde94(void *param_1)

{
  FUN_00bfdd4c();
  operator_delete(param_1);
  return;
}




void FUN_00bfdeb8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bfdec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00bfdec4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bfdecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00bfded0(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = operator_new(0x1e8);
  FUN_00bfd664(plVar3,param_4,param_5,param_6 & 1,0,0);
  local_60 = plVar3;
  FUN_00bfe0c8(param_3 + 0x1668,&local_60);
  uVar1 = *(uint *)(param_3 + 0x1668) - *(uint *)(param_3 + 0x1684);
  if ((*(uint *)(param_3 + 0x1684) <= *(uint *)(param_3 + 0x1668) && uVar1 != 0) && (0 < (int)uVar1)
     ) {
    lVar5 = 0;
    lVar6 = 0;
    uVar7 = (ulong)uVar1;
    do {
      plVar3 = *(long **)(*(long *)(param_3 + 0x1670) + lVar5);
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)(*(long *)(param_3 + 0x1670) + lVar6 * 8);
      }
      else {
        (**(code **)(*plVar3 + 8))();
        puVar4 = (undefined8 *)(*(long *)(param_3 + 0x1670) + lVar5);
      }
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
      lVar5 = lVar5 + 8;
      *puVar4 = 0;
    } while (uVar7 != 0);
    if (0 < (int)uVar1) {
      FUN_00bfe150(param_3 + 0x1668,*(long *)(param_3 + 0x1670),
                   *(long *)(param_3 + 0x1670) + (long)(int)uVar1 * 8);
    }
  }
  uVar7 = FUN_00f02540(*(undefined8 *)(param_3 + 0x1678));
  if ((uVar7 & 1) != 0) {
    FUN_00f01a4c(*(undefined8 *)(param_3 + 0x1678),1);
  }
  fVar8 = (float)FUN_00f13e54(param_3 + 0x358);
  FUN_00f023ec(param_3 + 0xf20,local_60,1);
  FUN_00f0dad0(fVar8 + -20.0,local_60 + 0x17,1);
  plVar3 = local_60;
  uVar9 = (**(code **)(*local_60 + 0x58))(local_60,0,0,1,1);
  local_68 = CONCAT44(param_2,uVar9);
  FUN_00f13f18(plVar3,&local_68);
  local_68 = 0;
  (**(code **)(*local_60 + 0x28))(local_60,&local_68);
  if (*(float *)(local_60 + 8) != 0.0) {
    *(undefined4 *)(local_60 + 8) = 0;
    FUN_0091ada4();
  }
  FUN_00bfe1bc(param_3);
  uVar7 = FUN_00ed7fb4(param_3 + 0x11b8);
  if ((uVar7 & 1) == 0) {
    FUN_00bfe348(0x41000000,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

