// functions/00c4f — 25 functions
#include "libGameKindred.h"




void thunk_FUN_00c4f6dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuStack_130;
  undefined1 auStack_128 [40];
  long lStack_100;
  undefined8 uStack_e0;
  void *pvStack_d8;
  byte bStack_d0;
  void *pvStack_c0;
  undefined8 uStack_a0;
  undefined4 uStack_88;
  ulong uStack_80;
  void *pvStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  void *pvStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&ppuStack_130);
  uVar2 = FUN_00e6ce7c("MENU_BATTLE_PASS_DESC_2",0);
  thunk_FUN_00e7051c(&uStack_80,uVar2);
  FUN_008fcdb8(&bStack_70,&DAT_0320ffa8);
  uStack_58 = 1;
  uStack_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&uStack_80);
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  lStack_100 = param_1 + 0x758;
  uStack_88 = 3;
  uStack_a0 = 0x447a00003f000000;
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&uStack_80,"battlePassLevelInfo");
  FUN_009badc0(uVar2,&uStack_80,&ppuStack_130);
  if ((uStack_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,bStack_70));
  }
  ppuStack_130 = &PTR_FUN_027de7f0;
  if ((bStack_d0 & 1) != 0) {
    operator_delete(pvStack_c0);
  }
  if (pvStack_d8 != (void *)0x0) {
    operator_delete__(pvStack_d8);
    uStack_e0 = 0;
    pvStack_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4f3c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_00f13db0();
  FUN_00f13f08(param_1,param_2,param_3 + 0x1a8);
  fVar2 = 10.0;
  FUN_00f07a18(0,0x41200000,param_3 + 0x298,4);
  fVar1 = (float)FUN_00f13e54(param_3 + 0xd50);
  FUN_00f13e54(param_3 + 0x758);
  FUN_00f13f68(param_3 + 0x570,CONCAT44((int)fVar2,(int)fVar1));
  return;
}




void FUN_00c4f444(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_00f13db4();
  lVar1 = param_1 + 0x628;
  fVar3 = (float)FUN_00f13e54(param_1 + 0xd50);
  lVar2 = param_1 + 0x758;
  fVar4 = (float)FUN_00f13e54(lVar2);
  FUN_00f0db64(fVar3 - fVar4,0,0x3f800000,lVar1);
  fVar3 = (float)FUN_00f13e54(lVar2);
  FUN_00f07940(fVar3 * -0.25,0,lVar1,6,param_1 + 0x570,6);
  FUN_00f07b18(0,lVar2,3,lVar1,1);
  FUN_00f07b18(0,lVar2,2,lVar1,2);
  return;
}




void FUN_00c4f4fc(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(byte *)(param_1 + 0x1d88) = (byte)param_3 & 1;
  *(uint *)(param_1 + 0x1834) =
       *(uint *)(param_1 + 0x1834) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1834) & 3 | (~param_3 & 1) << 2;
  FUN_008fcdb8(local_50);
  FUN_00c4c43c(param_1 + 0x17b0,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fcdb8(local_68,param_4);
  FUN_00c4c5e8(param_1 + 0x1ad0,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4f5c8(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  undefined8 local_70;
  void *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00bd30f0(auStack_60,&DAT_01bb6d43,param_2);
  FUN_00e705c8(&local_70,auStack_60);
  FUN_00f0d75c(param_1 + 0x440,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  FUN_00ca2d44((float)(param_5 - param_3) / (float)(param_4 - param_3),param_1 + 0xe08);
  *(uint *)(param_1 + 0x1b54) =
       *(uint *)(param_1 + 0x1b54) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1b54) & 3 |
       (uint)(param_2 < 100 && *(char *)(param_1 + 0x1d88) != '\0') << 2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4f6b8(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x1d88) = (byte)param_2 & 1;
  *(uint *)(param_1 + 0x1834) =
       *(uint *)(param_1 + 0x1834) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1834) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00c4f6dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_130;
  undefined1 auStack_128 [40];
  long local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined8 local_a0;
  undefined4 local_88;
  ulong local_80;
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  undefined4 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_130);
  uVar2 = FUN_00e6ce7c("MENU_BATTLE_PASS_DESC_2",0);
  thunk_FUN_00e7051c(&local_80,uVar2);
  FUN_008fcdb8(&local_70,&DAT_0320ffa8);
  local_58 = 1;
  local_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&local_80);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  local_100 = param_1 + 0x758;
  local_88 = 3;
  local_a0 = 0x447a00003f000000;
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_80,"battlePassLevelInfo");
  FUN_009badc0(uVar2,&local_80,&local_130);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
  }
  local_130 = &PTR_FUN_027de7f0;
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4f840(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined2 local_50 [4];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00f11234();
  plVar1 = param_3 + 0x35;
  param_3[0x34] = 0;
  *param_3 = (long)&PTR_FUN_027fd628;
  FUN_00c4ee68(plVar1);
  plVar2 = param_3 + 999;
  FUN_00c4e198(plVar2);
  plVar3 = param_3 + 0x62d;
  FUN_00f0e4a8(plVar3);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  FUN_00f14070(plVar1,&DAT_02bf25ac);
  local_50[0] = 0x50;
  FUN_00f14070(plVar2,local_50);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f68(plVar2,(ulong)(uint)(int)param_2 << 0x20 | 0x76c);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar4 = *(uint *)((long)param_3 + 0x31ec);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x31ec) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_0091ada4(plVar3);
  }
  uVar6 = FUN_00f13624();
  FUN_00f13fd8(param_3,uVar6);
  FUN_00f1515c(uVar6,plVar1,0,2);
  FUN_00f1515c(uVar6,plVar2,1,2);
  FUN_00f112f0(param_3,1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4fa08(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined8 param_7)

{
  FUN_00c4f4fc(param_1 + 0x1a8,param_5,param_6 & 1,param_7);
  FUN_00c4e474(param_1 + 0x1f38,param_1,param_2,param_3,param_4);
  return;
}




void FUN_00c4fa64(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  thunk_FUN_0091ada4();
  FUN_00f13f08(0x42a00000,param_2,param_3 + 0x3168);
  return;
}




void FUN_00c4faa4(long param_1)

{
  FUN_00f07b18(0,param_1 + 0x3168,3,param_1 + 0x1f38,3);
  return;
}




void FUN_00c4fac8(long param_1,undefined4 param_2)

{
  FUN_00c4f5c8(param_1 + 0x1a8);
  FUN_00c4e818(param_1 + 0x1f38,param_2);
  return;
}




undefined1 FUN_00c4fafc(long param_1,int param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x3130;
  if ((param_3 & 1) == 0) {
    lVar1 = param_1 + 0x3150;
  }
  return *(undefined1 *)(*(long *)(*(long *)(lVar1 + 8) + (ulong)(param_2 - 1) * 8) + 0x23f0);
}




void FUN_00c4fb2c(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  
  puVar1 = (uint *)(param_1 + 0x3130);
  if ((param_3 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x3150);
  }
  if ((int)param_2 < 1) {
    FUN_00c4dc40(0,param_4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 <= *puVar1) {
      uVar2 = *(undefined8 *)(*(long *)(puVar1 + 2) + (ulong)(param_2 - 1) * 8);
    }
    FUN_00c4dc40(uVar2,param_4);
    uVar2 = 0;
    if (param_2 <= *(uint *)(param_1 + 0x3140)) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x3148) + (ulong)(param_2 - 1) * 8);
    }
  }
  FUN_00c4c848(uVar2,param_4);
  return;
}




void FUN_00c4fbc8(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x1f30) = (byte)param_2 & 1;
  *(uint *)(param_1 + 0x19dc) =
       *(uint *)(param_1 + 0x19dc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x19dc) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00c4fbec(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133774,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4fc58(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c4fc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x1a0))(*(undefined8 **)(param_1 + 0x1a0),param_3,1);
  return;
}




void FUN_00c4fc70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c4fc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x1a0))(*(undefined8 **)(param_1 + 0x1a0),param_3,0);
  return;
}




void FUN_00c4fc88(long param_1,undefined8 param_2,uint *param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x2618);
  uVar4 = (**(code **)(*(long *)(param_1 + 0x2618) + 0x148))(plVar1);
  if (((((uVar4 & 1) == 0) && (uVar4 = (**(code **)(*plVar1 + 0x158))(plVar1), (uVar4 & 1) == 0)) &&
      (uVar4 = (**(code **)(*plVar1 + 0x150))(plVar1), (uVar4 & 1) == 0)) &&
     (param_3 != (uint *)0x0)) {
    uVar3 = *param_3;
    puVar2 = (uint *)(param_1 + 0x3150);
    if ((char)param_3[1] != '\0') {
      puVar2 = (uint *)(param_1 + 0x3130);
    }
    if (((0 < (int)uVar3) && (uVar3 <= *puVar2)) &&
       ((lVar5 = *(long *)(*(long *)(puVar2 + 2) + (ulong)(uVar3 - 1) * 8), lVar5 != 0 &&
        (*(char *)(lVar5 + 0x23f0) != '\0')))) {
      FUN_00c4ed60(param_1 + 0x1e68,lVar5 + 0x2370);
    }
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00c4fd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c4fd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1a0) + 8))();
  return;
}




void FUN_00c4fd70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c4fd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1a0) + 0x10))();
  return;
}




void FUN_00c4fd80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fcbb8;
  FUN_00f0d3a4(param_1 + 0xc4);
  param_1[0x17] = &PTR_FUN_027dc7d8;
  param_1[0xa6] = &PTR_FUN_028266f0;
  param_1[0xbd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_028266f0;
  param_1[0x9f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x88);
  param_1[0x6a] = &PTR_FUN_028266f0;
  param_1[0x81] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x84);
  FUN_00f13d08(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c4fe80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fcbb8;
  FUN_00f0d3a4(param_1 + 0xc4);
  param_1[0x17] = &PTR_FUN_027dc7d8;
  param_1[0xa6] = &PTR_FUN_028266f0;
  param_1[0xbd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_028266f0;
  param_1[0x9f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x88);
  param_1[0x6a] = &PTR_FUN_028266f0;
  param_1[0x81] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x84);
  FUN_00f13d08(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c4ff88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fcd00;
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c4ffe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fcd00;
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}

