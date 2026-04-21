// functions/00e21 — 25 functions
#include "libGameKindred.h"




void FUN_00e210c0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Grace_C_TargetImpact");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f800000,0x3e99999a);
  (**(code **)(*plVar3 + 0xd8))(0x3f800000);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Grace_C_End_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Grace_C_End_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Grace_C_End_03");
  lVar2 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar2 + 1000));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e21204(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Grace_C_Loop_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Grace_C_Loop_02");
  lVar2 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar2 + 0x3e4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d63b38(param_1);
  uVar4 = FUN_00d4b7a0();
  lVar2 = FUN_00d4b7f8(uVar4,PTR_s_Buff_Grace_C_TargetWarmup_02bf0728);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00e17ea8(lVar2);
  puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))();
  (**(code **)*puVar5)(puVar5,PTR_s_Ability__Grace__C_02beeb40);
  FUN_00d2a320(lVar2);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Grace_C_Fizzle_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Grace_C_Fizzle_02");
  lVar2 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar2 + 0x3e4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d64314(param_1);
  plVar3 = (long *)FUN_00d2a414(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,5);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Grace_PostAbilityBonuses_02bf06e0);
  local_48 = FUN_00dc0414;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e213ac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1844();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e213fc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099ee3c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e2144c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d4b4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e2149c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0ad0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e214ec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099e6b8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e2153c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d934();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e2158c(void)

{
  return;
}




bool FUN_00e21590(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = FUN_00d66d28();
  fVar3 = (float)thunk_FUN_00d086f0(uVar2,0,1);
  uVar1 = FUN_00d66cf4(param_1);
  return uVar1 < (uint)(int)fVar3;
}




void FUN_00e215d0(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00d67b78(param_1);
    uVar3 = thunk_FUN_00d086f0(uVar2,1,1);
    *param_2 = uVar3;
  }
  return;
}




void FUN_00e21610(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_00d66cf4(param_1);
    *param_2 = uVar1;
  }
  return;
}




uint FUN_00e21644(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d66cf4(*param_1);
  return iVar1 - 1U & ((int)(iVar1 - 1U) >> 0x1f ^ 0xffffffffU);
}




float FUN_00e21664(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar1 = FUN_00d66cf4(*param_1);
  uVar2 = FUN_00d66d28(*param_1);
  fVar3 = (float)thunk_FUN_00d086f0(uVar2,2,1);
  return 1.0 - fVar3 * (float)uVar1;
}




void FUN_00e216b8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_60;
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x20,1);
  FUN_00d66d04(param_1,0x100,1);
  FUN_00d66d04(param_1,8,1);
  FUN_00d6a324(param_1,FUN_00e21590);
  FUN_00d67dcc(param_1,FUN_00d69f90);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,5);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_60 = FUN_00e21664;
  local_58 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_60);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  FUN_00d4bc38();
  lVar3 = FUN_00d4bd34();
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Grumpjaw_Perk_Armor_02bf0748);
  local_60 = (code *)CONCAT44(local_60._4_4_,1);
  local_58 = 1;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_60);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  lVar3 = FUN_00d4bc24();
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  uVar2 = FUN_00d9b610(uVar2,PTR_s_Buff_Grumpjaw_Perk_CooldownCheck_02bf0740);
  FUN_00d9b5b8();
  plVar4 = (long *)FUN_00d39930();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Grumpjaw_Perk_Armor_02bf0748);
  local_60 = FUN_00e21644;
  local_58 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  FUN_00d9b5b8(uVar2);
  plVar4 = (long *)FUN_00d2887c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Grumpjaw_Perk_CooldownCheck_02bf0740);
  local_60 = FUN_00e218e8;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d3bc68(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_60,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00e17320();
  FUN_00d42654(&local_60,uVar2);
  FUN_00d3e744(uVar2,FUN_00e215d0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e218e8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




void FUN_00e218f4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69554(param_1,&local_30,&local_34);
    if (local_34 == DAT_031b08b4) {
      FUN_00d436dc(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e21970(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_48[0] = FUN_00d59f54(uVar2,1,0xb,0x19,0);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00e219f0(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  
  lVar2 = FUN_00d426b0(*param_1);
  lVar5 = *(long *)(lVar2 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  lVar3 = FUN_00d66d28(*param_1);
  auVar7 = FUN_00d59f54(lVar2,1,3,0x19,0);
  uVar9 = auVar7._8_8_;
  uVar8 = auVar7._0_8_;
  uVar4 = FUN_00d44be0(lVar2,PTR_s_Buff_Grumpjaw_Perk_Armor_02bf0748);
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)FUN_00d59f54(lVar2,1,4,0x19,0);
    uVar1 = FUN_00d6bb44(lVar5,DAT_031b9a20);
    uVar8 = (ulong)(uint)(auVar7._0_4_ + fVar6 * (float)uVar1);
    uVar9 = 0;
  }
  if (*(char *)(lVar3 + 0x2f6) < '\0') {
    fVar6 = (float)FUN_00d59f54(lVar2,1,5,0x19,0);
    uVar8 = (ulong)(uint)((float)uVar8 * fVar6);
    uVar9 = 0;
  }
  auVar7._8_8_ = uVar9;
  auVar7._0_8_ = uVar8;
  return auVar7;
}




void FUN_00e21aec(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_38 = FUN_00e219f0;
  local_30 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,1,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e21b7c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Spine");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Grumpjaw_Spike");
  plVar3 = (long *)FUN_00d3bcb8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"u_jaw_glow");
  (**(code **)(*plVar3 + 0x38))(0x3f800000);
  plVar3 = (long *)FUN_00d2ccac(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Grumpjaw__B_FrenzyAttac_02beebb8);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e21c90;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e21c90(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00e21ca4(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 8;
  iVar2 = FUN_00d9d984(param_1);
  if (iVar2 != 0) {
    uVar7 = 0;
    do {
      lVar4 = FUN_00d9d9a0(param_1,uVar7);
      lVar5 = FUN_00d9ea34();
      if (lVar5 != 0) {
        local_5c = 0xffffffff;
        uVar6 = FUN_00d6bbac(lVar5,DAT_031b9a30,&local_5c);
        if ((uVar6 & 1) != 0) {
          FUN_00d04628(0x3f000000,auStack_88,*(undefined4 *)(lVar4 + 0x260),local_5c);
          FUN_00ce20fc(auStack_88);
        }
      }
      uVar7 = uVar7 + 1;
      uVar3 = FUN_00d9d984(param_1);
    } while (uVar7 < uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e21d80(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  *param_2 = CONCAT44(local_48._4_4_ + local_58._4_4_,local_48._0_4_ + local_58._0_4_);
  *(float *)(param_2 + 1) = local_40 + local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e21e18(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d65010();
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d3e39c(lVar3);
  FUN_00d44d70(param_1);
  uVar2 = FUN_00ceab2c();
  (**(code **)(*plVar4 + 0x30))(plVar4,~uVar2,3);
  uVar5 = FUN_00d29f44(lVar3);
  local_58 = FUN_00e220a8;
  local_50 = 3;
  FUN_00d47690(uVar5,2,&local_58);
  uVar5 = FUN_00d45f10(lVar3);
  FUN_00d9886c(uVar5,PTR_s_Ability__Grumpjaw__C_02beebd8,PTR_s_Ability__Grumpjaw__C_SpitOut_02beebe8
              );
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Grumpjaw_C_Drool");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00d2df94(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Grumpjaw_Ability_C_Swallow");
  lVar3 = FUN_00d09310();
  FUN_00d09e18(*(undefined4 *)(lVar3 + 0x3b4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2a414(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,0x12);
  uVar5 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3f333333,uVar5,0);
  plVar4 = (long *)FUN_00d2a414(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,0x13);
  lVar3 = FUN_00d6624c(param_1);
  plVar4 = (long *)FUN_00d46828(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Grumpjaw__C_SpitOut_02beebe8)
  ;
  (**(code **)(*plVar4 + 0x28))(plVar4,FUN_00e21d80);
  lVar3 = FUN_00d64314(param_1);
  uVar5 = FUN_00e227e4(lVar3 + 0x10);
  FUN_00d9c960(uVar5,PTR_s_Buff_Grumpjaw_Eaten_02bf0770);
  FUN_00d9c2f4();
  FUN_00d9c324();
  plVar4 = (long *)FUN_00d2cfcc(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Grumpjaw_Eaten_02bf0770);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar3 = FUN_00d64980(param_1);
    uVar5 = FUN_00e227e4(lVar3 + 0x10);
    FUN_00d9c960(uVar5,PTR_s_Buff_Grumpjaw_Eaten_02bf0770);
    FUN_00d9c2f4();
    FUN_00d9c324();
    uVar5 = FUN_00d39a54(lVar3 + 0x10);
    FUN_00d3e604(uVar5,FUN_00e21ca4);
  }
  uVar5 = FUN_00d63ddc(param_1);
  lVar3 = FUN_00e5d9b0(uVar5,PTR_s_Buff_Withdraw_02beb458);
  FUN_00d2a320(lVar3 + 0x10);
  uVar5 = FUN_00d63ddc(param_1);
  lVar3 = FUN_00e5d9b0(uVar5,PTR_s_Buff_Item_TeleportBoots_Channeli_02beb8d8);
  FUN_00d2a320(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

