// functions/00ad8 — 11 functions
#include "libGameKindred.h"




void FUN_00ad8000(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x13c);
  if ((uVar1 >> 7 & 0xff) == (int)(param_1 * 255.0)) {
    return;
  }
  *(uint *)(param_2 + 0x13c) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_2 + 0xb8);
  return;
}




void FUN_00ad8038(float param_1,float param_2,long param_3)

{
  if ((*(float *)(param_3 + 0x100) == param_1) && (*(float *)(param_3 + 0x104) == param_2)) {
    return;
  }
  *(float *)(param_3 + 0x100) = param_1;
  *(float *)(param_3 + 0x104) = param_2;
  FUN_0091ada4(param_3 + 0xb8);
  return;
}




void FUN_00ad8068(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  byte local_110 [8];
  ulong local_108;
  void *local_100;
  byte local_f8 [8];
  ulong local_f0;
  void *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  code *pcStack_78;
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  FUN_00b08d84();
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *param_1 = (long)&PTR_FUN_027d7ea8;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x8c;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0xaa;
  FUN_00f0e4a8();
  plVar3 = param_1 + 200;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0xe6;
  FUN_00f0e4a8(plVar4);
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x140;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x166;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x18c;
  FUN_00f017e8(plVar7);
  param_1[0x18c] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8();
  plVar8 = param_1 + 0x1ae;
  param_1[0x19d] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar8);
  param_1[0x1ae] = (long)&PTR_FUN_027c1f80;
  FUN_00f1306c();
  FUN_0099cc90();
  FUN_0099cc90();
  FUN_00e70510(param_1 + 0x1f6);
  FUN_008fcdb8(param_1 + 0x1f8,param_2);
  memset(param_1 + 0x1fb,0,0x48);
  FUN_00975578(param_1 + 0x204);
  FUN_00975578(param_1 + 0x218);
  param_1[0x22c] = 0;
  *(undefined4 *)(param_1 + 0x22d) = 0x1000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,param_1 + 0x50,1);
  FUN_00f023ec(plVar7,param_1 + 0x6e,1);
  FUN_00f023ec(plVar7,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_00f023ec(plVar8,plVar4,1);
  FUN_00f023ec(plVar8,plVar5,1);
  FUN_00f023ec(plVar8,plVar2,1);
  FUN_00f023ec(plVar8,plVar3,1);
  FUN_00f023ec(plVar8,plVar6,1);
  FUN_00f023ec(plVar8,param_1 + 0x1bf,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19d,1);
  FUN_00f023ec(param_1 + 0x19d,param_1 + 0x122,1);
  FUN_00f0e548(param_1 + 0x6e,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_lock");
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar12 = *(uint *)((long)param_1 + 0xa84);
  if ((uVar12 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xa84) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x5900;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(param_1 + 0x104,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_standard");
  if ((*(uint *)((long)param_1 + 0x8a4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x8a4) = *(uint *)((long)param_1 + 0x8a4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(param_1 + 0x104);
  }
  FUN_00f0e548(param_1 + 0x122,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_glow");
  *(uint *)((long)param_1 + 0x994) = *(uint *)((long)param_1 + 0x994) & 0xfffffffb;
  FUN_00f0e548(plVar1,PTR_s_build___InventoryCommon_atlas_02be34e0,"128x128_talentupgrade");
  if ((*(float *)(param_1 + 0x95) != 0.8) || (*(float *)((long)param_1 + 0x4ac) != 0.8)) {
    param_1[0x95] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(plVar1);
  }
  *(uint *)((long)param_1 + 0x4e4) = *(uint *)((long)param_1 + 0x4e4) & 0xfffffffb;
  FUN_00f0e548(plVar2,PTR_s_build___InventoryCommon_atlas_02be34e0,"inventory_hero_mastery_accent");
  if ((*(uint *)((long)param_1 + 0x5d4) & 0x7f80) != 0x3800) {
    *(uint *)((long)param_1 + 0x5d4) = *(uint *)((long)param_1 + 0x5d4) & 0xffff807f | 0x3800;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  uVar12 = *(uint *)((long)param_1 + 0xbb4);
  if ((~uVar12 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xbb4) = uVar12 | 0x7f80;
    FUN_0091ada4(plVar6);
    uVar12 = *(uint *)((long)param_1 + 0xbb4);
  }
  *(uint *)((long)param_1 + 0xbb4) = uVar12 & 0xfffffffb;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"quest_item_highlight_mid");
  *(byte *)(param_1 + 0xe3) = *(byte *)(param_1 + 0xe3) | 1;
  FUN_00f0e548(plVar4,PTR_s_build___InventoryCommon_atlas_02be34e0,"inventory_hero_portrait_info_bg"
              );
  FUN_00b09144(0xbf800000,param_1);
  FUN_00b0914c(param_1,1);
  *(uint *)((long)param_1 + 0xe7c) = *(uint *)((long)param_1 + 0xe7c) & 0xfffffffb;
  if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
    uVar13 = (ulong)(*(byte *)(param_1 + 0x1f8) >> 1);
  }
  else {
    uVar13 = param_1[0x1f9];
  }
  if (uVar13 != 0) {
    FUN_00ad8804(param_1,param_1 + 0x1f8);
    FUN_0099ce80(param_1 + 0x1ea,param_1,thunk_FUN_00ad9618);
    FUN_008fa54c(&local_e0,"TALENTS.UPGRADE.");
    lVar14 = param_1[0x1fa];
    uVar13 = param_1[0x1f9];
    if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
      lVar14 = (long)param_1 + 0xfc1;
      uVar13 = (ulong)(*(byte *)(param_1 + 0x1f8) >> 1);
    }
    puVar11 = (ulong *)FUN_0090de84(&local_e0,lVar14,uVar13);
    local_b0 = (void *)puVar11[2];
    uStack_b8 = puVar11[1];
    local_c0 = *puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    FUN_008fa54c(local_f8,&DAT_01bb05c9);
    uVar13 = (ulong)(local_f8[0] >> 1);
    pvVar9 = (void *)((ulong)local_f8 | 1);
    if ((local_f8[0] & 1) != 0) {
      uVar13 = local_f0;
      pvVar9 = local_e8;
    }
    puVar11 = (ulong *)FUN_0090de84(&local_c0,pvVar9,uVar13);
    local_80 = (long *)puVar11[2];
    plStack_88 = (long *)puVar11[1];
    local_90 = (long *)*puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    FUN_008fcdb8(local_a8,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_f8[0] & 1) != 0) {
      operator_delete(local_e8);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (((byte)local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    pvVar9 = (void *)((ulong)local_a8 | 1);
    if ((local_a8[0] & 1) != 0) {
      pvVar9 = local_98;
    }
    FUN_0099cd34(param_1 + 0x1ea,pvVar9);
    FUN_0099ce80(param_1 + 0x1f0,param_1,thunk_FUN_00ad9698);
    FUN_008fa54c(local_f8,"TALENTS.NEWTALENT.");
    uVar13 = (ulong)(*(byte *)(param_1 + 0x1f8) >> 1);
    lVar14 = (long)param_1 + 0xfc1;
    if ((*(byte *)(param_1 + 0x1f8) & 1) != 0) {
      uVar13 = param_1[0x1f9];
      lVar14 = param_1[0x1fa];
    }
    puVar11 = (ulong *)FUN_0090de84(local_f8,lVar14,uVar13);
    local_d0 = (void *)puVar11[2];
    uStack_d8 = puVar11[1];
    local_e0 = *puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    FUN_008fa54c(local_110,&DAT_01bb05c9);
    uVar13 = (ulong)(local_110[0] >> 1);
    pvVar9 = (void *)((ulong)local_110 | 1);
    if ((local_110[0] & 1) != 0) {
      uVar13 = local_108;
      pvVar9 = local_100;
    }
    puVar11 = (ulong *)FUN_0090de84(&local_e0,pvVar9,uVar13);
    local_80 = (long *)puVar11[2];
    plStack_88 = (long *)puVar11[1];
    local_90 = (long *)*puVar11;
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    FUN_008fcdb8(&local_c0,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_e0 & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_f8[0] & 1) != 0) {
      operator_delete(local_e8);
    }
    pvVar9 = (void *)((ulong)&local_c0 | 1);
    if ((local_c0 & 1) != 0) {
      pvVar9 = local_b0;
    }
    FUN_0099cd34(param_1 + 0x1f0,pvVar9);
    lVar14 = FUN_00cdbb18();
    local_90 = (long *)0x0;
    pcStack_78 = thunk_FUN_00ad8f50;
    plStack_88 = param_1;
    local_80 = param_1;
    FUN_00ad97b4(lVar14 + 0x30,&local_90);
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
  }
  lVar14 = FUN_009e7240();
  plStack_88 = (long *)0x0;
  pcStack_78 = thunk_FUN_00ad8fb8;
  local_90 = param_1;
  local_80 = param_1;
  FUN_009e4694(lVar14 + 0x18,&local_90);
  FUN_00ad8900(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ad8804(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0xfc0);
  if ((*(byte *)(param_1 + 0xfc0) & 1) == 0) {
    lVar2 = param_1 + 0xfc1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xfd0);
  }
  lVar2 = FUN_00ce9cb8(lVar2);
  if (lVar2 == 0) {
    puVar3 = &DAT_03210450;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e6ce7c(*(undefined8 *)(lVar2 + 0x28),0);
  }
  FUN_00910394(param_1 + 0xfb0,puVar3);
  FUN_00f0d75c(param_1 + 0xa00,param_1 + 0xfb0);
  if ((*(byte *)(param_1 + 0xfc0) & 1) == 0) {
    lVar2 = param_1 + 0xfc1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xfd0);
  }
  lVar2 = FUN_00ce9b48(lVar2);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    FUN_00e6a8a8(auStack_58,"portrait_%s");
    FUN_00f0e628(param_1 + 0x280);
    FUN_00a9bbc4(param_1 + 0x280,auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad8900(long *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  cVar1 = *(char *)((long)param_1 + 0x116b);
  plVar4 = param_1 + 0x1ae;
  uVar2 = FUN_00f02540(plVar4);
  if (cVar1 == '\0') {
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(plVar4,1);
    }
    *(uint *)((long)param_1 + 0x3f4) = *(uint *)((long)param_1 + 0x3f4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xbb4) = *(uint *)((long)param_1 + 0xbb4) & 0xfffffffb;
    if ((~*(uint *)((long)param_1 + 0x304) & 0x7f80) == 0) goto LAB_00ad8be0;
    *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) | 0x7f80;
    goto LAB_00ad8bdc;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  }
  if (*(char *)((long)param_1 + 0x1169) == '\0') {
    *(uint *)((long)param_1 + 0x4e4) =
         *(uint *)((long)param_1 + 0x4e4) & 0xfffffffb |
         (uint)*(byte *)((long)param_1 + 0x116a) << 2;
    if (*(byte *)((long)param_1 + 0x116a) != 0) {
      uVar7 = 0;
      goto LAB_00ad89d4;
    }
  }
  else {
    uVar7 = 0x3f800000;
    *(uint *)((long)param_1 + 0x4e4) = *(uint *)((long)param_1 + 0x4e4) | 4;
LAB_00ad89d4:
    FUN_00f0e6bc(uVar7,param_1 + 0x8c);
  }
  if ((int)param_1[0x22c] == 1) {
    uVar6 = *(uint *)((long)param_1 + 0x3f4) & 0xfffffffb;
LAB_00ad89fc:
    *(uint *)((long)param_1 + 0x3f4) = uVar6;
  }
  else if ((int)param_1[0x22c] == 0) {
    uVar6 = *(uint *)((long)param_1 + 0x3f4) | 4;
    goto LAB_00ad89fc;
  }
  switch(*(undefined4 *)((long)param_1 + 0x1164)) {
  case 0:
    *(uint *)((long)param_1 + 0xbb4) = *(uint *)((long)param_1 + 0xbb4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
    break;
  case 1:
    plVar4 = param_1 + 200;
    *(uint *)((long)param_1 + 0xbb4) = *(uint *)((long)param_1 + 0xbb4) | 4;
    *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) | 4;
    uVar3 = FUN_00e6ce7c("MENU_HEROES_BANNER_NEW",0);
    FUN_00f0d75c(param_1 + 0x166,uVar3);
    FUN_00f0d7fc(param_1 + 0x166,&DAT_01bee7fa);
    uVar8 = 0x41200000;
    uVar3 = 7;
    uVar5 = 7;
    uVar7 = 0;
    goto LAB_00ad8b64;
  case 2:
    *(uint *)((long)param_1 + 0xbb4) = *(uint *)((long)param_1 + 0xbb4) | 4;
    *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
    uVar3 = FUN_00e6ce7c("MENU_MARKET_FEATURED_SALE",0);
    FUN_00f0d75c(param_1 + 0x166,uVar3);
    FUN_00f0d7fc(param_1 + 0x166,&DAT_01bee7fa);
    plVar4 = param_1 + 0xe6;
    uVar7 = 0xc1200000;
    goto LAB_00ad8b60;
  case 3:
    *(uint *)((long)param_1 + 0xbb4) = *(uint *)((long)param_1 + 0xbb4) | 4;
    *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
    uVar3 = FUN_00e6ce7c("GENERIC_HERO_FEATURED_FREE_ROTATION",0);
    FUN_00f0d75c(param_1 + 0x166,uVar3);
    FUN_00f0d7fc(param_1 + 0x166,&DAT_01bee806);
    plVar4 = param_1 + 0x50;
    uVar7 = 0;
LAB_00ad8b60:
    uVar8 = 0;
    uVar5 = 6;
    uVar3 = 6;
LAB_00ad8b64:
    FUN_00f07940(uVar8,uVar7,param_1 + 0x166,uVar3,plVar4,uVar5);
  }
  if (((int)param_1[0x22c] == 0) && (*(int *)((long)param_1 + 0x1164) != 3)) {
    FUN_00f0e6bc(0x3ecccccd,param_1 + 0x50);
    uVar6 = *(uint *)((long)param_1 + 0x304);
    if ((uVar6 & 0x7f80) == 0x3300) goto LAB_00ad8be0;
    uVar6 = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
  }
  else {
    FUN_00f0e6bc(0x3f800000,param_1 + 0x50);
    if ((~*(uint *)((long)param_1 + 0x304) & 0x7f80) == 0) goto LAB_00ad8be0;
    uVar6 = *(uint *)((long)param_1 + 0x304) | 0x7f80;
  }
  *(uint *)((long)param_1 + 0x304) = uVar6;
LAB_00ad8bdc:
  FUN_0091ada4(param_1 + 0x50);
LAB_00ad8be0:
  FUN_00ad922c(param_1);
  return;
}




void FUN_00ad8bf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_027d7ea8;
  lVar2 = FUN_00cdbb18();
  lVar6 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
  lVar3 = *(long *)(lVar2 + 0x38);
  do {
    lVar4 = lVar3;
    if (lVar6 == 0) goto LAB_00ad8c4c;
    lVar6 = lVar6 + -0x20;
    lVar3 = lVar4 + 0x20;
  } while (*(undefined8 **)(lVar4 + 8) != param_1);
  FUN_00ad98d8((uint *)(lVar2 + 0x30),lVar4);
LAB_00ad8c4c:
  lVar3 = FUN_009e7240();
  lVar2 = (ulong)*(uint *)(lVar3 + 0x18) << 5;
  puVar1 = *(undefined8 **)(lVar3 + 0x20);
  do {
    puVar5 = puVar1;
    if (lVar2 == 0) goto LAB_00ad8c78;
    lVar2 = lVar2 + -0x20;
    puVar1 = puVar5 + 4;
  } while ((undefined8 *)*puVar5 != param_1);
  FUN_00910480((uint *)(lVar3 + 0x18),puVar5);
LAB_00ad8c78:
  if (param_1[0x4f] != 0) {
    *(undefined4 *)(param_1 + 0x4e) = 0;
  }
  param_1[0x218] = &PTR_FUN_027bca90;
  if ((void *)param_1[0x22a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22a]);
    param_1[0x22a] = 0;
    param_1[0x229] = 0;
  }
  if ((void *)param_1[0x228] != (void *)0x0) {
    operator_delete__((void *)param_1[0x228]);
    param_1[0x228] = 0;
    param_1[0x227] = 0;
  }
  if ((*(byte *)(param_1 + 0x224) & 1) != 0) {
    operator_delete((void *)param_1[0x226]);
  }
  if ((*(byte *)(param_1 + 0x21b) & 1) != 0) {
    operator_delete((void *)param_1[0x21d]);
  }
  FUN_00977ea0(param_1 + 0x219,1);
  param_1[0x204] = &PTR_FUN_027bca90;
  if ((void *)param_1[0x216] != (void *)0x0) {
    operator_delete__((void *)param_1[0x216]);
    param_1[0x216] = 0;
    param_1[0x215] = 0;
  }
  if ((void *)param_1[0x214] != (void *)0x0) {
    operator_delete__((void *)param_1[0x214]);
    param_1[0x214] = 0;
    param_1[0x213] = 0;
  }
  if ((*(byte *)(param_1 + 0x210) & 1) != 0) {
    operator_delete((void *)param_1[0x212]);
  }
  if ((*(byte *)(param_1 + 0x207) & 1) != 0) {
    operator_delete((void *)param_1[0x209]);
  }
  FUN_00977ea0(param_1 + 0x205,1);
  if ((*(byte *)(param_1 + 0x201) & 1) != 0) {
    operator_delete((void *)param_1[0x203]);
  }
  if ((*(byte *)(param_1 + 0x1fe) & 1) != 0) {
    operator_delete((void *)param_1[0x200]);
  }
  if ((*(byte *)(param_1 + 0x1fb) & 1) != 0) {
    operator_delete((void *)param_1[0x1fd]);
  }
  if ((*(byte *)(param_1 + 0x1f8) & 1) != 0) {
    operator_delete((void *)param_1[0x1fa]);
  }
  if ((void *)param_1[0x1f7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f7]);
    param_1[0x1f7] = 0;
    param_1[0x1f6] = 0;
  }
  FUN_0099ccc4(param_1 + 0x1f0);
  FUN_0099ccc4(param_1 + 0x1ea);
  param_1[0x1bf] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1d6);
  FUN_00f13d08(param_1 + 0x1bf);
  FUN_00f01868(param_1 + 0x1ae);
  FUN_00f01868(param_1 + 0x19d);
  FUN_00f01868(param_1 + 0x18c);
  FUN_00f0d3a4(param_1 + 0x166);
  FUN_00f0d3a4(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_028266f0;
  param_1[0x139] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13c);
  FUN_00f13d08(param_1 + 0x122);
  param_1[0x104] = &PTR_FUN_028266f0;
  param_1[0x11b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11e);
  FUN_00f13d08(param_1 + 0x104);
  param_1[0xe6] = &PTR_FUN_028266f0;
  param_1[0xfd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x100);
  FUN_00f13d08(param_1 + 0xe6);
  param_1[200] = &PTR_FUN_028266f0;
  param_1[0xdf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe2);
  FUN_00f13d08(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_028266f0;
  param_1[0xc1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc4);
  FUN_00f13d08(param_1 + 0xaa);
  param_1[0x8c] = &PTR_FUN_028266f0;
  param_1[0xa3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa6);
  FUN_00f13d08(param_1 + 0x8c);
  param_1[0x6e] = &PTR_FUN_028266f0;
  param_1[0x85] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x88);
  FUN_00f13d08(param_1 + 0x6e);
  param_1[0x50] = &PTR_FUN_028266f0;
  param_1[0x67] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6a);
  FUN_00f13d08(param_1 + 0x50);
  if ((void *)param_1[0x4f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4f]);
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  FUN_009c825c(param_1);
  return;
}




void FUN_00ad8f2c(void *param_1)

{
  FUN_00ad8bf4();
  operator_delete(param_1);
  return;
}




void FUN_00ad8f50(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d938();
  bVar1 = 0;
  if ((uVar2 & 1) != 0) {
    bVar1 = FUN_00cdccf4(param_2,param_1 + 0xfc0);
  }
  if (*(byte *)(param_1 + 0x1168) == (bVar1 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x1168) = bVar1 & 1;
  FUN_00ad8900(param_1);
  return;
}




void FUN_00ad8fb8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e80f58();
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    FUN_008fcdb8(local_50,&DAT_0320ffa8);
    FUN_00e81200(local_50);
    uVar4 = FUN_009e7240();
    FUN_008fcdb8(local_68,local_50);
    if ((*(byte *)(param_1 + 0xfc0) & 1) == 0) {
      lVar5 = param_1 + 0xfc1;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xfd0);
    }
    uVar2 = FUN_009e6cac(uVar4,local_68,lVar5);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  FUN_00ad9090(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ad8f50(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d938();
  bVar1 = 0;
  if ((uVar2 & 1) != 0) {
    bVar1 = FUN_00cdccf4(param_2,param_1 + 0xfc0);
  }
  if (*(byte *)(param_1 + 0x1168) == (bVar1 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x1168) = bVar1 & 1;
  FUN_00ad8900(param_1);
  return;
}




void thunk_FUN_00ad8fb8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte abStack_68 [16];
  void *pvStack_58;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e80f58();
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    FUN_008fcdb8(abStack_50,&DAT_0320ffa8);
    FUN_00e81200(abStack_50);
    uVar4 = FUN_009e7240();
    FUN_008fcdb8(abStack_68,abStack_50);
    if ((*(byte *)(param_1 + 0xfc0) & 1) == 0) {
      lVar5 = param_1 + 0xfc1;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xfd0);
    }
    uVar2 = FUN_009e6cac(uVar4,abStack_68,lVar5);
    if ((abStack_68[0] & 1) != 0) {
      operator_delete(pvStack_58);
    }
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  FUN_00ad9090(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

