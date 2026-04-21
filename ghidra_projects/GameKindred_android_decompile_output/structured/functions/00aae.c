// functions/00aae — 8 functions
#include "libGameKindred.h"




void FUN_00aae4a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  int local_54;
  undefined8 local_50;
  long local_48;
  int iVar7;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13db4();
  local_50 = 0;
  local_54 = 0;
  FUN_00967388((long)&local_50 + 4,0,&local_50,&local_54);
  plVar1 = param_1 + 0x4c;
  FUN_00f13f2c(plVar1,0xe6000001f4);
  lVar3 = param_1[0x6e7];
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if ((char)lVar3 == '\0') {
    fVar6 = (float)FUN_00f13e54(plVar1);
    pcVar4 = *(code **)(*param_1 + 0x48);
    fVar5 = (fVar5 - fVar6) * 0.5;
    iVar7 = (int)local_50;
  }
  else {
    pcVar4 = *(code **)(*param_1 + 0x48);
    fVar5 = fVar5 - (float)(int)local_50;
    iVar7 = local_50._4_4_;
  }
  fVar6 = (float)iVar7;
  fVar5 = fVar5 - fVar6;
  (*pcVar4)(param_1);
  FUN_00f13f08(fVar5,fVar6 - (float)local_54,param_1 + 0x20e);
  fVar5 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = (float)FUN_00f13e54(plVar1);
  fVar8 = (float)local_50._4_4_;
  fVar5 = (fVar5 - fVar6) * 0.5 - fVar8;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar5,fVar8 - (float)local_54,param_1 + 0x35);
  FUN_00f07940(0,0,plVar1,4,param_1,4);
  FUN_00f07940((float)-(int)local_50,0,param_1 + 0x20e,1,param_1,1);
  FUN_00f07940((float)local_50._4_4_,0,param_1 + 0x35,0,param_1,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aae678(float param_1,long param_2)

{
  FUN_00f13f08(param_2 + 0xb8);
  FUN_00f13f08(param_1 * 0.5,0x40800000,param_2 + 0x3558);
  FUN_00f13f08(param_1 * 0.5,0x40800000,param_2 + 0x3648);
  FUN_00aae6e0(param_2);
  return;
}




void FUN_00aae6e0(long param_1)

{
  FUN_00f07940(0,0,param_1 + 0x3558,3,param_1,0);
  FUN_00f07940(0,0,param_1 + 0x3648,2,param_1,1);
  return;
}




void FUN_00aae738(long param_1,uint param_2)

{
  uint uVar1;
  
  *(byte *)(param_1 + 0x3738) = (byte)param_2 & 1;
  uVar1 = ~param_2 & 1;
  *(uint *)(param_1 + 0x22c) =
       *(uint *)(param_1 + 0x22c) & 0xfffffff8 | *(uint *)(param_1 + 0x22c) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x2e4) =
       *(uint *)(param_1 + 0x2e4) & 0xfffffff8 | *(uint *)(param_1 + 0x2e4) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x11ac) =
       *(uint *)(param_1 + 0x11ac) & 0xfffffff8 | *(uint *)(param_1 + 0x11ac) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x18dc) =
       *(uint *)(param_1 + 0x18dc) & 0xfffffff8 | *(uint *)(param_1 + 0x18dc) & 3 | uVar1 << 2;
  return;
}




void FUN_00aae780(long param_1)

{
  *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) & 0xfffffffb;
  return;
}




void FUN_00aae790(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  *(uint *)(param_1 + 0x273c) =
       *(uint *)(param_1 + 0x273c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x273c) & 3 | (~param_3 & 1) << 2;
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = FUN_00ceae90(param_2);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00ceae88(param_2);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_00ceae78(param_2);
      if ((uVar1 & 1) != 0) {
        return;
      }
      pcVar2 = "HUD_EXIT_PRIVATE_MODE";
    }
    else {
      pcVar2 = "HUD_EXIT_TUTORIAL_MODE";
    }
  }
  else {
    pcVar2 = "HUD_EXIT_PRACTICE_MODE";
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00f0d75c(param_1 + 0x2ad8,uVar3);
  FUN_00aabb8c(param_1 + 0x26b8);
  return;
}




void FUN_00aae848(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  undefined8 uVar16;
  
  FUN_00f11234();
  *param_1 = (long)&PTR_FUN_027d38d0;
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x52;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x70;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x8e;
  FUN_00f1306c(plVar3);
  plVar4 = param_1 + 0xb9;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xdf;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x105;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x123;
  FUN_00b09580();
  plVar8 = param_1 + 0x386;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x3a4;
  FUN_00b09580();
  plVar10 = param_1 + 0x607;
  FUN_00f0e4a8();
  plVar11 = param_1 + 0x625;
  FUN_00b09580();
  plVar12 = param_1 + 0x888;
  FUN_00f0e4a8();
  plVar13 = param_1 + 0x8a6;
  FUN_00b09580(plVar13);
  plVar14 = param_1 + 0xb09;
  FUN_00f0d160(plVar14);
  FUN_00f0d160();
  FUN_00f112f0(param_1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f133a4(plVar3,plVar4,1);
  FUN_00f133a4(plVar3,plVar5,1);
  FUN_00f133a4(plVar3,plVar6,1);
  FUN_00f133a4(plVar3,plVar7,1);
  FUN_00f133a4(plVar3,plVar8,1);
  FUN_00f133a4(plVar3,plVar9,1);
  FUN_00f133a4(plVar3,plVar10,1);
  FUN_00f133a4(plVar3,plVar11,1);
  FUN_00f133a4(plVar3,plVar12,1);
  FUN_00f133a4(plVar3,plVar13,1);
  FUN_00f133a4(plVar3,plVar14,1);
  FUN_00f133a4(plVar3,param_1 + 0xb2f,1);
  FUN_00f0e6e8(param_1 + 0x34,0);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar15 = *(uint *)((long)param_1 + 0x314);
  if ((uVar15 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x314) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar15 = *(uint *)((long)param_1 + 0x404);
  *(byte *)(param_1 + 0x8b) = *(byte *)(param_1 + 0x8b) | 2;
  if ((uVar15 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x404) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"stat_offense");
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"stat_defense");
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"stat_utility");
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"stat_mobility");
  FUN_00f13f08(0x42480000,0x42480000,plVar6);
  FUN_00f13f08(0x42480000,0x42480000,plVar8);
  FUN_00f13f08(0x42480000,0x42480000,plVar10);
  FUN_00f13f08(0x42480000,0x42480000,plVar12);
  FUN_00b0a930(0,0x42480000,plVar7,0,100,0,1);
  FUN_00b0b848(0x3f800000,plVar7,"white_background","white_background");
  if ((*(float *)(param_1 + 0x12d) != 0.0) || (*(float *)((long)param_1 + 0x96c) != 0.5)) {
    param_1[0x12d] = 0x3f00000000000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00b0b88c(0x3f800000,0x3f800000,plVar7);
  FUN_00b0a8a8(plVar7,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  FUN_00b0b988(plVar7);
  FUN_00b0a930(0,0x42480000,plVar9,0,100,0,1);
  FUN_00b0b848(0x3f800000,plVar9,"white_background","white_background");
  if ((*(float *)(param_1 + 0x3ae) != 0.0) || (*(float *)((long)param_1 + 0x1d74) != 0.5)) {
    param_1[0x3ae] = 0x3f00000000000000;
    FUN_0091ada4(plVar9);
  }
  FUN_00b0b88c(0x3f800000,0x3f800000,plVar9);
  FUN_00b0a8a8(plVar9,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  FUN_00b0b988(plVar9);
  FUN_00b0a930(0,0x42480000,plVar11,0,100,0,1);
  FUN_00b0b848(0x3f800000,plVar11,"white_background","white_background");
  if ((*(float *)(param_1 + 0x62f) != 0.0) || (*(float *)((long)param_1 + 0x317c) != 0.5)) {
    param_1[0x62f] = 0x3f00000000000000;
    FUN_0091ada4(plVar11);
  }
  FUN_00b0b88c(0x3f800000,0x3f800000,plVar11);
  FUN_00b0a8a8(plVar11,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  FUN_00b0b988(plVar11);
  FUN_00b0a930(0,0x42480000,plVar13,0,100,0,1);
  FUN_00b0b848(0x3f800000,plVar13,"white_background","white_background");
  if ((*(float *)(param_1 + 0x8b0) != 0.0) || (*(float *)((long)param_1 + 0x4584) != 0.5)) {
    param_1[0x8b0] = 0x3f00000000000000;
    FUN_0091ada4(plVar13);
  }
  FUN_00b0b88c(0x3f800000,0x3f800000,plVar13);
  FUN_00b0a8a8(plVar13,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  FUN_00b0b988(plVar13);
  FUN_00f0d378(plVar14,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar16 = FUN_00e6ce7c("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
  FUN_00f0d75c(plVar14,uVar16);
  FUN_00f0d378(param_1 + 0xb2f,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  return;
}




void FUN_00aaef30(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_00f13f08();
  FUN_00f13f08((float)param_1 * 0.3,param_2,param_3 + 0x290);
  fVar1 = 50.0;
  fVar2 = (float)param_1 * 0.85;
  FUN_00b0a930(fVar2,0x42480000,param_3 + 0x918,0,100,(int)(float)*(int *)(param_3 + 0x1c1c),1);
  FUN_00b0a930(fVar2,0x42480000,param_3 + 0x1d20,0,100,(int)(float)*(int *)(param_3 + 0x3024),1);
  FUN_00b0a930(fVar2,0x42480000,param_3 + 0x3128,0,100,(int)(float)*(int *)(param_3 + 0x442c),1);
  FUN_00b0a930(fVar2,0x42480000,param_3 + 0x4530,0,100,(int)(float)*(int *)(param_3 + 0x5834),1);
  FUN_00f0dad0(fVar2,param_3 + 0x6f8,1);
  FUN_00aaf098(param_3);
  FUN_00f13e54(param_3 + 0x470);
  FUN_00f13f08(param_1,fVar1 * 2.5,param_3 + 0x380);
  FUN_00f07940(0,0,param_3 + 0x380,3,param_3,3);
  return;
}

