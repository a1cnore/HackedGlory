// functions/00ad9 — 28 functions
#include "libGameKindred.h"




void thunk_FUN_00ad9618(long param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_0093d938();
  if ((uVar3 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x1168) = 0;
  }
  else {
    uVar3 = FUN_0099ccf4(param_1 + 0xf50);
    bVar1 = (uVar3 & 0xff00000000) != 0;
    uVar4 = FUN_00cdbb18();
    bVar2 = FUN_00cdccf4(uVar4,param_1 + 0xfc0);
    if (((bool)*(char *)(param_1 + 0x1169) != bVar1) || (*(byte *)(param_1 + 0x1168) != (bVar2 & 1))
       ) {
      *(char *)(param_1 + 0x1169) = bVar1;
      *(byte *)(param_1 + 0x1168) = bVar2 & 1;
    }
  }
  FUN_00ad8900(param_1);
  return;
}




void thunk_FUN_00ad9698(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d938();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x116a) == '\0') {
      return;
    }
    *(char *)(param_1 + 0x116a) = '\0';
  }
  else {
    uVar1 = FUN_0099ccf4(param_1 + 0xf80);
    if (((uVar1 & 0xff00000000) != 0) == (bool)*(char *)(param_1 + 0x116a)) {
      return;
    }
    *(char *)(param_1 + 0x116a) = (uVar1 & 0xff00000000) != 0;
  }
  FUN_00ad8900(param_1);
  return;
}




void FUN_00ad9090(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0xe7c) =
       *(uint *)(param_1 + 0xe7c) & 0xfffffff8 |
       *(uint *)(param_1 + 0xe7c) & 3 | (uint)(0 < param_2) << 2;
  if (0 < param_2) {
    iVar4 = 0;
    uVar3 = 0;
    do {
      uVar2 = FUN_00a4c67c(param_1 + 0xdf8,1);
      FUN_00f0e548(uVar2,PTR_s_build___InventoryCommon_atlas_02be34e0,"64x64_hero_mastery_star");
      local_70 = uVar2;
      FUN_009d6990(param_1 + 0x270,&local_70);
      if (iVar4 != 0) {
        FUN_00f07b18(0,uVar2,3,uVar3,1);
        FUN_00f07b18(0,uVar2,0,uVar3,0);
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar2;
    } while (param_2 != iVar4);
  }
  FUN_00f13238(param_1 + 0xdf8);
  FUN_00ad922c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad91b4(void)

{
  return;
}




void FUN_00ad91b8(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  FUN_00f13f08(param_3 + 0x820);
  uVar2 = param_1;
  FUN_00f13f08(param_1,param_1,param_3 + 0x280);
  fVar1 = (float)uVar2;
  FUN_00f0e700(param_3 + 0x280);
  FUN_00f13f08(param_1,(param_2 - fVar1) + (param_2 - fVar1),param_3 + 0x730);
  FUN_00ad922c(param_3);
  return;
}




void FUN_00ad922c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uVar8 = (**(code **)(*param_3 + 0x48))();
  fVar11 = (float)uVar8;
  fVar12 = fVar11 * 0.8;
  local_80 = fVar11;
  uStack_7c = param_2;
  FUN_00f0db64(fVar12,0,0x3f800000,param_3 + 0x140);
  fVar9 = 0.0;
  FUN_00f0db64(uVar8,0,0x3f800000,param_3 + 0x166);
  plVar1 = param_3 + 0xaa;
  FUN_00f0eaf4(plVar1);
  fVar6 = (float)FUN_00f0eaf4(plVar1);
  FUN_00f13f08(fVar12,(fVar12 * fVar9) / fVar6,plVar1);
  FUN_00f13f08(fVar11 * 0.5,0x42480000,param_3 + 200);
  FUN_00f13f18(param_3 + 0x122,&local_80);
  plVar2 = param_3 + 0xe6;
  FUN_00f07940(0,0,plVar2,2,param_3,2);
  FUN_00f07940(0,0,param_3 + 0x122,2,param_3,2);
  plVar4 = param_3 + 0x8c;
  FUN_00f07940(0xc1200000,0x41200000,plVar4,1,param_3 + 0x50,1);
  if ((*(byte *)((long)param_3 + 0x4e4) >> 2 & 1) == 0) {
    uVar7 = 0xc1a00000;
    uVar10 = 0x41a00000;
    uVar8 = 1;
    uVar5 = 1;
    plVar4 = param_3 + 0x50;
  }
  else {
    uVar8 = 5;
    uVar5 = 7;
    uVar7 = 0;
    uVar10 = 0;
  }
  FUN_00f07940(uVar7,uVar10,param_3 + 0x6e,uVar8,plVar4,uVar5);
  fVar6 = -10.0;
  FUN_00f07940(0,0xc1200000,param_3 + 0x1bf,6,plVar2,6);
  FUN_00f0e700(plVar2);
  FUN_00f07940(0,fVar6 * 0.25,plVar1,8,plVar2,8);
  FUN_00f07940(0,0,param_3 + 0x140,6,plVar1,4);
  FUN_00f07940(0,0,param_3 + 200,0,param_3,0);
  FUN_00f07940(0,0,param_3 + 0x104,8,param_3,8);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad9470(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN_0097b658(param_1 + 0x1028,param_2 + 8);
  FUN_008fce60(param_1 + 0x1038,param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x1058) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x1050) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x1068) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x1060) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x1078) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x1070) = uVar1;
  FUN_008fce60(param_1 + 0x1080,param_2 + 0x60);
  FUN_00910394(param_1 + 0x1098,param_2 + 0x78);
  FUN_00910394(param_1 + 0x10a8,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x10b8) = *(undefined4 *)(param_2 + 0x98);
  FUN_0097b658(param_1 + 0x10c8,param_3 + 8);
  FUN_008fce60(param_1 + 0x10d8,param_3 + 0x18);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x10f8) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + 0x10f0) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x1108) = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_1 + 0x1100) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x50);
  *(undefined8 *)(param_1 + 0x1118) = *(undefined8 *)(param_3 + 0x58);
  *(undefined8 *)(param_1 + 0x1110) = uVar1;
  FUN_008fce60(param_1 + 0x1120,param_3 + 0x60);
  FUN_00910394(param_1 + 0x1138,param_3 + 0x78);
  FUN_00910394(param_1 + 0x1148,param_3 + 0x88);
  *(undefined4 *)(param_1 + 0x1158) = *(undefined4 *)(param_3 + 0x98);
  FUN_008fce60(param_1 + 0xfd8,param_4);
  FUN_008fce60(param_1 + 0xff0,param_5);
  FUN_008fce60(param_1 + 0x1008,param_6);
  FUN_00ad922c(param_1);
  return;
}




void FUN_00ad95bc(long param_1,int *param_2)

{
  if (*param_2 == *(int *)(param_1 + 0x1160)) {
    return;
  }
  *(int *)(param_1 + 0x1160) = *param_2;
  FUN_00ad8900();
  return;
}




void FUN_00ad95d8(long param_1,int *param_2)

{
  if (*param_2 == *(int *)(param_1 + 0x1164)) {
    return;
  }
  *(int *)(param_1 + 0x1164) = *param_2;
  FUN_00ad8900();
  return;
}




void FUN_00ad95f4(long param_1,byte param_2)

{
  if ((param_2 & 1) == *(byte *)(param_1 + 0x116a)) {
    return;
  }
  *(byte *)(param_1 + 0x116a) = param_2 & 1;
  FUN_00ad8900();
  return;
}




void FUN_00ad9618(long param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_0093d938();
  if ((uVar3 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x1168) = 0;
  }
  else {
    uVar3 = FUN_0099ccf4(param_1 + 0xf50);
    bVar1 = (uVar3 & 0xff00000000) != 0;
    uVar4 = FUN_00cdbb18();
    bVar2 = FUN_00cdccf4(uVar4,param_1 + 0xfc0);
    if (((bool)*(char *)(param_1 + 0x1169) != bVar1) || (*(byte *)(param_1 + 0x1168) != (bVar2 & 1))
       ) {
      *(char *)(param_1 + 0x1169) = bVar1;
      *(byte *)(param_1 + 0x1168) = bVar2 & 1;
    }
  }
  FUN_00ad8900(param_1);
  return;
}




void FUN_00ad9698(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d938();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x116a) == '\0') {
      return;
    }
    *(char *)(param_1 + 0x116a) = '\0';
  }
  else {
    uVar1 = FUN_0099ccf4(param_1 + 0xf80);
    if (((uVar1 & 0xff00000000) != 0) == (bool)*(char *)(param_1 + 0x116a)) {
      return;
    }
    *(char *)(param_1 + 0x116a) = (uVar1 & 0xff00000000) != 0;
  }
  FUN_00ad8900(param_1);
  return;
}




void FUN_00ad9714(long param_1)

{
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
  FUN_00f0e578(param_1 + 0x820,"inventory_hero_portrait_frame_selected");
  *(uint *)(param_1 + 0x994) = *(uint *)(param_1 + 0x994) | 4;
  FUN_00ad922c(param_1);
  return;
}




void FUN_00ad9768(long param_1)

{
  FUN_00f0e578(param_1 + 0x820,"inventory_hero_portrait_frame_standard");
  *(uint *)(param_1 + 0x994) = *(uint *)(param_1 + 0x994) & 0xfffffffb;
  FUN_00ad922c(param_1);
  return;
}




void FUN_00ad97a4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x116b) = param_2 & 1;
  FUN_00ad8900();
  return;
}




void FUN_00ad97b4(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00ad9848(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00ad9848(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00ad98d8(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00ad9950(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d8028;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2e;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4c;
  FUN_00ed66ec(plVar3);
  param_1[0x192] = param_2;
  plVar4 = param_1 + 0x193;
  param_1[0x191] = 0;
  FUN_00f0e4a8(plVar4);
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b3] = 0x404000003f800000;
  param_1[0x1b4] = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x192],1);
  (**(code **)(*(long *)param_1[0x192] + 0x78))((long *)param_1[0x192],plVar4,1);
  uVar6 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar6);
  FUN_00f1515c(uVar6,plVar1,(int)*(float *)(param_1 + 0x1b3),2);
  FUN_00f1515c(uVar6,param_1[0x192],(int)*(float *)((long)param_1 + 0xd9c),2);
  local_88 = (code *)CONCAT71(local_88._1_7_,9);
  FUN_00ed5ab0(plVar3,&local_88);
  lVar7 = FUN_00f136e0();
  param_1[0x191] = lVar7;
  FUN_00ed59f4(plVar3,lVar7);
  FUN_00f0e548(plVar2,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_background");
  FUN_00f0e548(plVar4,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_content_shadow_overlay"
              );
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  local_60 = FUN_00f048a4("UI_MENU_CLEAR_TAB");
  local_88 = FUN_00ad9b64;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad9b64(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00ada398(param_1,in_x4);
  return;
}




void FUN_00ad9b6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8028;
  param_1[0x191] = 0;
  if ((void *)param_1[0x1b2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b2]);
    param_1[0x1b2] = 0;
    param_1[0x1b1] = 0;
  }
  param_1[0x193] = &PTR_FUN_028266f0;
  param_1[0x1aa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ad);
  FUN_00f13d08(param_1 + 0x193);
  thunk_FUN_00ed5534(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad9c18(void *param_1)

{
  FUN_00ad9b6c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00ad9c40(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined4 uStack_70;
  float fStack_6c;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x90))();
  if (*(int *)((long)param_3 + 0xda4) == 1) {
    FUN_00f13e54(param_3 + 0x17);
    FUN_00f13fc4(param_3 + 0x4c,(ulong)(uint)(int)param_2 << 0x20);
  }
  plVar3 = param_3 + 0x17;
  uStack_70 = FUN_00f13e54(plVar3);
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x2e,&uStack_70);
  uStack_70 = FUN_00f13e54(plVar3);
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x4c,&uStack_70);
  if ((int)param_3[0x1b1] != 0) {
    uVar4 = 0;
    lVar5 = 8;
    do {
      lVar2 = *(long *)(param_3[0x1b2] + lVar5);
      fVar6 = (float)FUN_00f13e54(plVar3);
      FUN_00f0db64(fVar6 + -90.0,0,0x3f800000,lVar2 + 0xf0);
      param_2 = 3.0;
      FUN_00f07940(0x41500000,*(long *)(param_3[0x1b2] + lVar5) + 0x220,8,
                   *(long *)(param_3[0x1b2] + lVar5) + 0xf0,1);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_3 + 0x1b1));
  }
  uStack_70 = (**(code **)(*(long *)param_3[0x192] + 0x48))();
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x193,&uStack_70);
  if (*(long *)(lVar1 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ad9c40(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined4 local_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x90))();
  if (*(int *)((long)param_3 + 0xda4) == 1) {
    FUN_00f13e54(param_3 + 0x17);
    FUN_00f13fc4(param_3 + 0x4c,(ulong)(uint)(int)param_2 << 0x20);
  }
  plVar3 = param_3 + 0x17;
  local_70 = FUN_00f13e54(plVar3);
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x2e,&local_70);
  local_70 = FUN_00f13e54(plVar3);
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x4c,&local_70);
  if ((int)param_3[0x1b1] != 0) {
    uVar4 = 0;
    lVar5 = 8;
    do {
      lVar2 = *(long *)(param_3[0x1b2] + lVar5);
      fVar6 = (float)FUN_00f13e54(plVar3);
      FUN_00f0db64(fVar6 + -90.0,0,0x3f800000,lVar2 + 0xf0);
      param_2 = 3.0;
      FUN_00f07940(0x41500000,*(long *)(param_3[0x1b2] + lVar5) + 0x220,8,
                   *(long *)(param_3[0x1b2] + lVar5) + 0xf0,1);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_3 + 0x1b1));
  }
  local_70 = (**(code **)(*(long *)param_3[0x192] + 0x48))();
  fStack_6c = param_2;
  FUN_00f13f18(param_3 + 0x193,&local_70);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ad9dc4(long param_1)

{
  FUN_00f07940(0x41500000,0x40400000,param_1 + 0x220,8,param_1 + 0xf0,1);
  return;
}




void FUN_00ad9de4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 param_5
                 )

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00b04468(*(undefined8 *)(param_1 + 0xc90));
  pvVar4 = operator_new(0x8c0);
  FUN_00ada41c();
  *(uint *)((long)pvVar4 + 0x84) = *(uint *)((long)pvVar4 + 0x84) | 0x20;
  FUN_00ed5664(param_1 + 0x260,pvVar4,1);
  FUN_00f13fa0(pvVar4,0xc800000000);
  if (*(int *)(param_1 + 0xda4) == 1) {
    puVar6 = (undefined8 *)&DAT_02bf25b0;
  }
  else {
    puVar6 = &local_88;
    local_88 = (code *)CONCAT62(local_88._2_6_,0x57);
  }
  FUN_00f14070(pvVar4,puVar6);
  FUN_00f0d75c((long)pvVar4 + 0xf0,param_3);
  if ((param_4 != 0) && (iVar3 = FUN_00e6a474(param_4), iVar3 != 0)) {
    FUN_00b1a8e8((long)pvVar4 + 0x220,param_4);
  }
  local_60 = DAT_03210f58;
  local_88 = FUN_00ad9fc4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = (void *)param_1;
  local_68 = pvVar4;
  FUN_009693a0((long)pvVar4 + 8,&local_88);
  local_88 = FUN_00ad9fc4;
  local_60 = DAT_03210f84;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = (void *)param_1;
  local_68 = pvVar4;
  FUN_009693a0((long)pvVar4 + 8,&local_88);
  local_88 = (code *)CONCAT44(uVar2,param_5);
  local_80 = pvVar4;
  FUN_00ad9fd0(param_1 + 0xd88,&local_88);
  FUN_00ada99c(*(long *)(param_1 + 0xd90),
               *(long *)(param_1 + 0xd90) + (ulong)*(uint *)(param_1 + 0xd88) * 0x10,auStack_90);
  FUN_00f14190(*(undefined8 *)(param_1 + 0xc88));
  uVar5 = *(undefined8 *)(param_1 + 0xc88);
  if (*(int *)(param_1 + 0xd88) != 0) {
    uVar7 = 0;
    lVar8 = 8;
    do {
      FUN_00f1515c(uVar5,*(undefined8 *)(*(long *)(param_1 + 0xd90) + lVar8),0,2);
      uVar5 = *(undefined8 *)(param_1 + 0xc88);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar7 < *(uint *)(param_1 + 0xd88));
  }
  FUN_00f1521c(uVar5,0,1);
  FUN_00ad9c40(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad9fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ada12c(param_1,param_4,param_5);
  return;
}




void FUN_00ad9fd0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00ada918(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}

