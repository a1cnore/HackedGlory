// functions/00a60 — 24 functions
#include "libGameKindred.h"




void FUN_00a602d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  FUN_00f13f08((int)param_1[0x175],0x43480000);
  plVar1 = param_1 + 0x1a;
  FUN_00f13f08(0x43480000,0x43480000,plVar1);
  if ((*(float *)(param_1 + 0x24) != (float)DAT_03218f08) ||
     (*(float *)((long)param_1 + 0x124) != DAT_03218f08._4_4_)) {
    param_1[0x24] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  FUN_00f07a18(0,0,plVar1,7);
  if ((*(float *)(param_1 + 0x3a) != 1.4) || (*(float *)((long)param_1 + 0x1d4) != 1.4)) {
    param_1[0x3a] = 0x3fb333333fb33333;
    FUN_0091ada4(param_1 + 0x31);
  }
  if ((*(float *)(param_1 + 0x58) != 1.4) || (*(float *)((long)param_1 + 0x2c4) != 1.4)) {
    param_1[0x58] = 0x3fb333333fb33333;
    FUN_0091ada4(param_1 + 0x4f);
  }
  if ((*(float *)(param_1 + 0x76) != 1.8319149) || (*(float *)((long)param_1 + 0x3b4) != 1.8319149))
  {
    param_1[0x76] = 0x3fea7c303fea7c30;
    FUN_0091ada4(param_1 + 0x6d);
  }
  plVar2 = param_1 + 0x139;
  if ((*(float *)(param_1 + 0x142) != 1.4) || (*(float *)((long)param_1 + 0xa14) != 1.4)) {
    param_1[0x142] = 0x3fb333333fb33333;
    FUN_0091ada4(plVar2);
  }
  plVar3 = param_1 + 0x157;
  if ((*(float *)(param_1 + 0x160) != 1.4) || (*(float *)((long)param_1 + 0xb04) != 1.4)) {
    param_1[0x160] = 0x3fb333333fb33333;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_1 + 0x94) != 1.4) || (*(float *)((long)param_1 + 0x4a4) != 1.4)) {
    param_1[0x94] = 0x3fb333333fb33333;
    FUN_0091ada4(param_1 + 0x8b);
  }
  *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) & 0xffffffbf;
  FUN_00f07940(0,0,param_1 + 0x31,8,plVar1,8);
  FUN_00f07940(0,0,param_1 + 0x4f,8,plVar1,8);
  FUN_00f07940(0,0,param_1 + 0x6d,8,plVar1,8);
  if ((*(float *)(param_1 + 0x142) != 2.0) || (*(float *)((long)param_1 + 0xa14) != 2.0)) {
    param_1[0x142] = 0x4000000040000000;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_1 + 0x160) != 2.0) || (*(float *)((long)param_1 + 0xb04) != 2.0)) {
    param_1[0x160] = 0x4000000040000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f07940(0,0,plVar2,8,plVar1,8);
  FUN_00f07940(0,0,plVar3,8,plVar1,8);
  FUN_00f07940(0x428c0000,0x42800000,param_1 + 0x8b,8,plVar1,8);
  plVar2 = param_1 + 0xd4;
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Avenir_Heavy_30_fo_02be9d00);
  if ((*(float *)(param_1 + 0xdd) != 1.4) || (*(float *)((long)param_1 + 0x6ec) != 1.4)) {
    param_1[0xdd] = 0x3fb333333fb33333;
    FUN_0091ada4(plVar2);
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar5 = (float)FUN_00f13e54(plVar1);
  FUN_00f0dad0(((fVar4 - fVar5) + -8.0) / 1.4,plVar2,1);
  plVar3 = param_1 + 0xfa;
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Avenir_Medium_30_f_02be9cf8);
  if ((*(float *)(param_1 + 0x103) != 1.4) || (*(float *)((long)param_1 + 0x81c) != 1.4)) {
    param_1[0x103] = 0x3fb333333fb33333;
    FUN_0091ada4(plVar3);
  }
  FUN_00f07b18(0x40000000,plVar3,0,plVar2,2);
  FUN_00f07b18(0,plVar3,3,plVar2,3);
  param_1 = param_1 + 0xa9;
  FUN_00f13238(param_1);
  FUN_00f07b18(0x41000000,param_1,3,plVar1,1);
  FUN_00f07b18(0,param_1,5,plVar1,5);
  return;
}




void FUN_00a60710(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_40[0] = 0xff606060;
  if (*(int *)(param_1 + 0xb8) == 1) {
    FUN_00f0e670(param_1 + 0x368,&DAT_01bee7fa,2);
  }
  else {
    if ((*(byte *)(param_1 + 0xbb0) & 1) == 0) {
      local_48[0] = 0xff505050;
    }
    else {
      local_48[0] = 0xffa0a0a0;
    }
    FUN_00f0e670(param_1 + 0x368,local_48,2);
  }
  if (((*(byte *)(param_1 + 0xbb0) ^ 0xff) & 0x11) == 0) {
    FUN_00f0d7fc(param_1 + 0x6a0,&DAT_01bee7fa);
    local_48[0] = 0xffb0b0b0;
    FUN_00f0d7fc(param_1 + 2000,local_48);
    if ((*(uint *)(param_1 + 0x2fc) & 0x7f80) != 0) {
      uVar1 = *(uint *)(param_1 + 0x2fc) & 0xffff807f;
LAB_00a60828:
      *(uint *)(param_1 + 0x2fc) = uVar1;
      FUN_0091ada4(param_1 + 0x278);
    }
  }
  else {
    FUN_00f0d7fc(param_1 + 0x6a0,local_40);
    FUN_00f0d7fc(param_1 + 2000,local_40);
    uVar1 = *(uint *)(param_1 + 0x2fc);
    if ((uVar1 & 0x7f80) != 0x6600) {
      uVar1 = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x6600;
      goto LAB_00a60828;
    }
  }
  uVar1 = (*(byte *)(param_1 + 0xbb0) & 0x10) >> 2 ^ 4;
  *(uint *)(param_1 + 0xa4c) = *(uint *)(param_1 + 0xa4c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xb3c) = *(uint *)(param_1 + 0xb3c) & 0xfffffffb | uVar1;
  if ((*(byte *)(param_1 + 0xbb0) >> 4 & 1) == 0) {
    lVar5 = FUN_00e6ce7c("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  }
  else {
    lVar5 = param_1 + 0x900;
  }
  FUN_00f0d75c(param_1 + 2000,lVar5);
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 == 2) {
LAB_00a608a0:
    FUN_00f0e578(param_1 + 0x368,"hud_store_item_node_regular");
    if ((*(float *)(param_1 + 0x3b0) != 1.8319149) || (*(float *)(param_1 + 0x3b4) != 1.8319149)) {
      uVar3 = 0x3fea7c30;
LAB_00a6091c:
      *(ulong *)(param_1 + 0x3b0) = CONCAT44(uVar3,uVar3);
      FUN_0091ada4(param_1 + 0x368);
    }
LAB_00a6092c:
    FUN_00f07940(0,0,param_1 + 0x368,8,param_1 + 0xd0,8);
  }
  else {
    if (iVar2 == 1) {
      FUN_00f0e578(param_1 + 0x368,"hud_store_item_node_highlighted");
      if ((*(float *)(param_1 + 0x3b0) != 1.4) || (*(float *)(param_1 + 0x3b4) != 1.4)) {
        uVar3 = 0x3fb33333;
        goto LAB_00a6091c;
      }
      goto LAB_00a6092c;
    }
    if (iVar2 == 0) goto LAB_00a608a0;
  }
  if ((*(byte *)(param_1 + 0xbb0) >> 3 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x4dc);
    if (*(int *)(param_1 + 0xbac) < 1) {
      *(uint *)(param_1 + 0x4dc) = uVar1 & 0xfffffffb;
      goto LAB_00a609d8;
    }
    *(uint *)(param_1 + 0x4dc) = uVar1 | 4;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4dc) = uVar1 | 0x7f84;
      FUN_0091ada4(param_1 + 0x458);
    }
    pcVar6 = "hud_store_item_node_parent_owned";
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4dc);
    *(uint *)(param_1 + 0x4dc) = uVar1 | 4;
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4dc) = uVar1 | 0x7f84;
      FUN_0091ada4(param_1 + 0x458);
    }
    pcVar6 = "hud_store_item_node_owned";
  }
  FUN_00f0e578(param_1 + 0x458,pcVar6);
LAB_00a609d8:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a60a0c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xba8) = param_1;
  return;
}




void FUN_00a60a14(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0xb8) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xb8) = param_2;
  FUN_00a60710();
  return;
}




undefined4 FUN_00a60a2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}




void FUN_00a60a34(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0xbb0) & 1) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xfe | param_2 & 1;
  FUN_00a60710();
  return;
}




byte FUN_00a60a58(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) & 1;
}




void FUN_00a60a64(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xfd | (param_2 & 1) << 1;
  return;
}




byte FUN_00a60a7c(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 1 & 1;
}




void FUN_00a60a88(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xfb | (param_2 & 1) << 2;
  return;
}




byte FUN_00a60aa0(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 2 & 1;
}




undefined8 FUN_00a60aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}




undefined4 FUN_00a60ab4(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}




void FUN_00a60abc(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x900,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 2000,param_1 + 0x900);
  return;
}




void FUN_00a60af8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xf7 | (param_2 & 1) << 3;
  FUN_00a60710();
  return;
}




byte FUN_00a60b10(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 3 & 1;
}




void FUN_00a60b1c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xbac) = param_2;
  FUN_00a60710();
  return;
}




void FUN_00a60b24(long param_1,int param_2)

{
  *(int *)(param_1 + 0xbac) = *(int *)(param_1 + 0xbac) + param_2;
  FUN_00a60710();
  return;
}




void FUN_00a60b34(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  uVar2 = uVar1 >> 7 & 0xff;
  if ((param_2 & 1) == 0) {
    if (uVar2 != 0xff) {
      *(uint *)(param_1 + 0x84) = uVar1 | 0x7f80;
      FUN_0091ada4();
      return;
    }
  }
  else if (uVar2 != 0x4c) {
    *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x2600;
    FUN_0091ada4();
    return;
  }
  return;
}




void FUN_00a60b70(long param_1,long param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x10),0);
  FUN_00f0d75c(param_1 + 0x6a0,uVar4);
  FUN_00e70e18(param_1 + 0x900,&DAT_01bb6d43,param_4);
  FUN_00f0d75c(param_1 + 2000,param_1 + 0x900);
  FUN_00f0e578(param_1 + 0x188,*(undefined8 *)(param_2 + 8));
  *(long *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 200) = param_3;
  FUN_00e6a8a8(auStack_98,"hud_store_item_ref_num_%d_icon",param_5 + 1);
  FUN_00e6a8a8(auStack_d8,"hud_store_item_ref_num_%d",param_5 + 1);
  uVar2 = FUN_00e6a474(auStack_98);
  uVar3 = FUN_0091ed5c(auStack_98,uVar2,0x1234);
  *(uint *)(param_1 + 0x20c) =
       *(uint *)(param_1 + 0x20c) & 0x80000000 |
       *(uint *)(param_1 + 0x20c) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar2 = FUN_00e6a474(auStack_d8);
  uVar3 = FUN_0091ed5c(auStack_d8,uVar2,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  FUN_00a602d8(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a60cb0(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 local_50;
  long local_48;
  
  lVar2 = DAT_03210d00;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = CONCAT44((float)((ulong)uVar6 >> 0x20) * 1.4,(float)uVar6 * 1.4);
  FUN_00efe58c(puVar4,&local_50);
  FUN_00efcac4(0x3c23d70a,puVar4);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = uVar6;
  FUN_00efe58c(puVar5,&local_50);
  FUN_00efcac4(0x3e800000,puVar5);
  FUN_00efcb24(puVar5,FUN_00a269a4);
  FUN_00f02308(param_1 + 0xd0,puVar4,puVar5,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a60e90(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xbb0) = *(byte *)(param_1 + 0xbb0) & 0xef | (param_2 & 1) << 4;
  FUN_00a60710();
  return;
}




byte FUN_00a60ea8(long param_1)

{
  return *(byte *)(param_1 + 0xbb0) >> 4 & 1;
}




void FUN_00a60eb4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long *local_78;
  code *pcStack_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  *param_1 = (long)&PTR_FUN_027cc500;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6b;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x89;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xa7;
  FUN_00f0eda4(plVar6);
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 199) = 0x3f800000;
  param_1[200] = 0;
  *(undefined4 *)((long)param_1 + 0x63c) = 0xffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f0e540(plVar2,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  FUN_00f0e578(plVar2,"icon_item_empty");
  FUN_00f0e540(plVar3,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  FUN_00f0e578(plVar3,"icon_item_empty");
  if ((*(uint *)((long)param_1 + 0x2ec) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2ec) = *(uint *)((long)param_1 + 0x2ec) & 0xffff807f;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e540(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar4,"hud_store_item_node_regular");
  FUN_00f0e540(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar5,"hud_store_item_node_owned");
  *(uint *)((long)param_1 + 0x4cc) = *(uint *)((long)param_1 + 0x4cc) & 0xfffffffb;
  FUN_00f0e540(plVar6,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  FUN_00f0e578(plVar6,"icon_item_empty");
  FUN_00f0eea0(plVar6,FUN_00a61138,param_1);
  uVar7 = *(uint *)((long)param_1 + 0x5bc);
  if ((uVar7 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x5bc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5280;
    FUN_0091ada4(plVar6);
  }
  pcStack_70 = thunk_FUN_00a6173c;
  local_78 = param_1;
  FUN_00f02e98(0x3d4ccccd,&local_78,0,1);
  FUN_00a611e4(param_1);
  FUN_00a61444(param_1);
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

