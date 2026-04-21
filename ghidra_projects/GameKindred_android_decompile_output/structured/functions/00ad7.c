// functions/00ad7 — 18 functions
#include "libGameKindred.h"




void FUN_00ad7058(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x30,1);
  FUN_00f023ec(plVar1,param_1 + 0x4e,1);
  plVar2 = param_1 + 0x74;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar1 = param_1 + 0x9a;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e540(param_1 + 0x30,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0d378(param_1 + 0x4e,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar3 = *(uint *)((long)param_1 + 0x424);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x424) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  FUN_00b0b848(0x3f800000,plVar1,"white_background","white_background");
  FUN_00b0b88c(0x3f800000,0x3f800000,plVar1);
  FUN_00b0a8a8(plVar1,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  FUN_00b0a930(0x442f0000,0x42400000,plVar1,0,100,0,1);
  FUN_00b0b988(plVar1);
  return;
}




void FUN_00ad71c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d7ad0;
  FUN_00ab0d88(param_1 + 0x9a);
  FUN_00f0d3a4(param_1 + 0x74);
  FUN_00f0d3a4(param_1 + 0x4e);
  param_1[0x30] = &PTR_FUN_028266f0;
  param_1[0x47] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4a);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad7244(void *param_1)

{
  FUN_00ad71c8();
  operator_delete(param_1);
  return;
}




void FUN_00ad7268(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  switch(param_2) {
  case 0:
    FUN_00f0e578(param_1 + 0x180,"stat_offense");
    pcVar2 = "MENU_HERO_ATTRIBUTES_LABEL_OFFENSE";
    break;
  case 1:
    FUN_00f0e578(param_1 + 0x180,"stat_defense");
    pcVar2 = "MENU_HERO_ATTRIBUTES_LABEL_DEFENSE";
    break;
  case 2:
    FUN_00f0e578(param_1 + 0x180,"stat_mobility");
    pcVar2 = "MENU_HERO_ATTRIBUTES_LABEL_MOBILITY";
    break;
  case 3:
    FUN_00f0e578(param_1 + 0x180,"stat_utility");
    pcVar2 = "MENU_HERO_ATTRIBUTES_LABEL_TEAM_UTILITY";
    break;
  default:
    goto switchD_00ad72c4_default;
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00f0d75c(param_1 + 0x270,uVar3);
switchD_00ad72c4_default:
  FUN_00e70510(&local_68);
  uVar4 = FUN_00e70b04(param_4);
  if ((uVar4 & 1) == 0) {
    FUN_00e705c8(&local_78,"([VALUE])");
    FUN_00910394(&local_68,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00e705c8(&local_78,"[VALUE]");
    FUN_00e71248(&local_68,0,&local_78,param_4);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    puVar5 = &local_68;
  }
  else {
    puVar5 = &DAT_03210450;
  }
  FUN_00f0d75c(param_1 + 0x3a0,puVar5);
  FUN_00b0a264(0x3f000000,param_1 + 0x4d0,param_3,param_5,param_6,param_7 & 1,0xffffffff,1);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ad744c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f0d4e0(param_3 + 0x270);
  fVar4 = param_2 * 0.5;
  FUN_00f0e700(param_3 + 0x180);
  fVar4 = fVar4 - param_2 * 0.5;
  if (*(float *)(param_3 + 0x1c4) != fVar4) {
    *(float *)(param_3 + 0x1c4) = fVar4;
    FUN_0091ada4(param_3 + 0x180);
  }
  fVar4 = 0.0;
  lVar1 = param_3 + 0xb8;
  FUN_00f0bc10(0,0,0x41000000,auStack_58);
  FUN_00f0c168(lVar1,auStack_58);
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x90))(lVar1);
  FUN_00f13e54(lVar1);
  fVar3 = *(float *)(param_3 + 0x514);
  if (fVar3 != fVar4 * 1.5) {
    *(float *)(param_3 + 0x514) = fVar4 * 1.5;
    FUN_0091ada4(param_3 + 0x4d0);
    fVar3 = *(float *)(param_3 + 0x514);
  }
  FUN_00f13e54(param_3 + 0x4d0);
  FUN_00f13f08(0x442f0000,fVar3 + fVar4,param_3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad755c(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027d7c18;
  FUN_00f0bdbc(param_1 + 0x17,0);
  param_1[0x17] = &PTR_FUN_027c3260;
  FUN_00f0d160(param_1 + 0x30);
  FUN_00f0d160(param_1 + 0x56);
  FUN_00ad75c0(param_1);
  return;
}




void FUN_00ad75c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x30;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x56;
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar5 = FUN_00e6ce7c("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
  FUN_00f0d75c(plVar2,uVar5);
  FUN_00f0db64(0x442f0000,0,0x3f800000,plVar2);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar4 = *(uint *)((long)param_1 + 0x334);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x334) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0dad0(0x442f0000,plVar3,1);
  return;
}




void FUN_00ad76b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d7c18;
  FUN_00f0d3a4(param_1 + 0x56);
  FUN_00f0d3a4(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad7704(void *param_1)

{
  FUN_00ad76b8();
  operator_delete(param_1);
  return;
}




void FUN_00ad7728(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0d75c(param_1 + 0x180);
  FUN_00f0d75c(param_1 + 0x2b0,param_3);
  FUN_00ad7760(param_1);
  return;
}




void FUN_00ad7760(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0xb8;
  uVar3 = 0;
  FUN_00f0bc10(0,0,0x41a00000,&local_48);
  FUN_00f0c168(lVar1,&local_48);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  local_48 = FUN_00f13e54(lVar1);
  uStack_44 = uVar3;
  FUN_00f13f18(param_1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad77f8(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027d7d60;
  FUN_00f0bdbc(param_1 + 0x17,1);
  param_1[0x17] = &PTR_FUN_027ccd08;
  FUN_00f0d160(param_1 + 0x30);
  FUN_00f0e4a8(param_1 + 0x56);
  FUN_00f13ca4(param_1 + 0x74);
  FUN_00f0d160(param_1 + 0x8b);
  FUN_00ad6fe4(param_1 + 0xb1);
  FUN_00ad6fe4(param_1 + 0x3ae);
  FUN_00ad6fe4(param_1 + 0x6ab);
  FUN_00ad6fe4(param_1 + 0x9a8);
  FUN_00ad755c(param_1 + 0xca5);
  *(undefined1 *)(param_1 + 0xd21) = 1;
  FUN_00ad78b8(param_1);
  return;
}




void FUN_00ad78b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x74,1);
  plVar2 = param_1 + 0x8b;
  FUN_00f023ec(param_1 + 0x74,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0xb1,1);
  FUN_00f023ec(plVar1,param_1 + 0x3ae,1);
  FUN_00f023ec(plVar1,param_1 + 0x9a8,1);
  FUN_00f023ec(plVar1,param_1 + 0x6ab,1);
  FUN_00f023ec(plVar1,param_1 + 0xca5,1);
  plVar1 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar3 = param_1 + 0x56;
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0);
  FUN_00f0db64(0x442f0000,0,0x3f800000,plVar1);
  FUN_00f0e540(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530);
  uVar4 = *(uint *)((long)param_1 + 0x334);
  if ((uVar4 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x334) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x5900;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0dad0(0x44750000,plVar2,1);
  return;
}




void FUN_00ad7a38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d7d60;
  FUN_00ad76b8(param_1 + 0xca5);
  FUN_00ad71c8(param_1 + 0x9a8);
  FUN_00ad71c8(param_1 + 0x6ab);
  FUN_00ad71c8(param_1 + 0x3ae);
  FUN_00ad71c8(param_1 + 0xb1);
  FUN_00f0d3a4(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_028266f0;
  param_1[0x6d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x56);
  FUN_00f0d3a4(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad7aec(void *param_1)

{
  FUN_00ad7a38();
  operator_delete(param_1);
  return;
}




void FUN_00ad7b10(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x6908) = param_2 & 1;
  FUN_00ad7b20();
  return;
}




void FUN_00ad7b20(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  fVar5 = *(float *)(param_1 + 0x1c0);
  uVar3 = (uint)*(byte *)(param_1 + 0x6908);
  *(uint *)(param_1 + 0x204) = *(uint *)(param_1 + 0x204) & 0xfffffffb | uVar3 << 2;
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfffffffb | uVar3 << 2;
  fVar4 = (float)FUN_00f0d4e0(param_1 + 0x180);
  fVar4 = fVar5 + fVar4 + 10.0;
  if ((*(float *)(param_1 + 0x2f0) != fVar4) || (*(float *)(param_1 + 0x2f4) != 20.0)) {
    *(float *)(param_1 + 0x2f0) = fVar4;
    *(undefined4 *)(param_1 + 0x2f4) = 0x41a00000;
    FUN_0091ada4(param_1 + 0x2b0);
  }
  FUN_00ad744c(param_1 + 0x588);
  FUN_00ad744c(param_1 + 0x1d70);
  FUN_00ad744c(param_1 + 0x3558);
  FUN_00ad744c(param_1 + 0x4d40);
  fVar4 = 0.0;
  lVar1 = param_1 + 0xb8;
  FUN_00f0bc10(0,0,0x40000000,auStack_58);
  FUN_00f0c168(lVar1,auStack_58);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(lVar1);
  if (*(byte *)(param_1 + 0x6908) == 0) {
    if (*(float *)(param_1 + 0xfc) == 0.0) goto LAB_00ad7c68;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  else {
    FUN_00f0d4e0(param_1 + 0x180);
    if (*(float *)(param_1 + 0xfc) == fVar4 + 22.0) goto LAB_00ad7c68;
    *(float *)(param_1 + 0xfc) = fVar4 + 22.0;
  }
  FUN_0091ada4(lVar1);
LAB_00ad7c68:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad7c98(undefined1 param_1 [16],float param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  ulong local_88;
  void *local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar6 = FUN_00ce9b48(param_4);
  if ((param_4 == 0) || (lVar7 = FUN_00ce9cb8(param_4), lVar7 == 0)) goto LAB_00ad7fcc;
  uVar8 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 0x18),0);
  FUN_00f0d75c(param_3 + 0x180,uVar8);
  FUN_008fa54c(local_70,"rolepicker_lane");
  iVar3 = *(int *)(lVar6 + 0x90);
  iVar4 = *(int *)(lVar6 + 0x94);
  if ((iVar4 < iVar3) && (*(int *)(lVar6 + 0x8c) < iVar3)) {
    pcVar9 = "rolepicker_jungle";
LAB_00ad7d5c:
    FUN_008fa54c(&local_88,pcVar9);
    FUN_008fce60(local_70,&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  else if ((iVar3 < iVar4) && (*(int *)(lVar6 + 0x8c) < iVar4)) {
    pcVar9 = "rolepicker_roam";
    goto LAB_00ad7d5c;
  }
  pvVar2 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar2 = local_60;
  }
  FUN_00f0e578(param_3 + 0x2b0,pvVar2);
  lVar1 = param_3 + 0x458;
  uVar8 = FUN_00e6ce7c(*(undefined8 *)(lVar6 + 0x48),0);
  FUN_00f0d75c(lVar1,uVar8);
  uVar8 = FUN_00f0d4e0(lVar1);
  FUN_00f0d4e0(lVar1);
  FUN_00f13f08(uVar8,param_2 + 40.0,param_3 + 0x3a0);
  pcVar9 = "MENU_HERO_ATTRIBUTES_RANGED";
  if (*(char *)(lVar7 + 0x60) != '\0') {
    pcVar9 = "MENU_HERO_ATTRIBUTES_MELEE";
  }
  uVar8 = FUN_00e6ce7c(pcVar9,0);
  thunk_FUN_00e7051c(&local_88,uVar8);
  param_5 = param_5 & 1;
  local_90 = (undefined1)*(undefined4 *)(lVar6 + 0x6c);
  local_8f = (undefined1)*(undefined4 *)(lVar6 + 0x70);
  local_8e = (undefined1)*(undefined4 *)(lVar6 + 0x74);
  local_8d = (undefined1)*(undefined4 *)(lVar6 + 0x78);
  local_98 = (undefined1)*(undefined4 *)(lVar6 + 0x7c);
  local_97 = (undefined1)*(undefined4 *)(lVar6 + 0x80);
  local_96 = (undefined1)*(undefined4 *)(lVar6 + 0x84);
  local_95 = (undefined1)*(undefined4 *)(lVar6 + 0x88);
  FUN_00ad7268(param_3 + 0x588,0,*(undefined4 *)(lVar6 + 0x5c),&local_88,&local_90,&local_98,param_5
              );
  FUN_00ad7268(param_3 + 0x1d70,1,*(undefined4 *)(lVar6 + 0x60),&DAT_03210450,&local_90,&local_98,
               param_5);
  FUN_00ad7268(param_3 + 0x3558,2,*(undefined4 *)(lVar6 + 100),&DAT_03210450,&local_90,&local_98,
               param_5);
  FUN_00ad7268(param_3 + 0x4d40,3,*(undefined4 *)(lVar6 + 0x68),&DAT_03210450,&local_90,&local_98,
               param_5);
  iVar3 = *(int *)(lVar6 + 0x58);
  if (iVar3 == 2) {
    uVar8 = FUN_00e6ce7c("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
    pcVar9 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_HARD";
LAB_00ad7f70:
    uVar10 = FUN_00e6ce7c(pcVar9,0);
    FUN_00f0d75c(param_3 + 0x66a8,uVar8);
    FUN_00f0d75c(param_3 + 0x67d8,uVar10);
    FUN_00ad7760(param_3 + 0x6528);
  }
  else {
    if (iVar3 == 1) {
      uVar8 = FUN_00e6ce7c("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
      pcVar9 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_MEDIUM";
      goto LAB_00ad7f70;
    }
    if (iVar3 == 0) {
      uVar8 = FUN_00e6ce7c("MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY",0);
      pcVar9 = "MENU_HERO_ATTRIBUTES_LABEL_DIFFICULTY_EASY";
      goto LAB_00ad7f70;
    }
  }
  FUN_00ad7b20(param_3);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00ad7fcc:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

