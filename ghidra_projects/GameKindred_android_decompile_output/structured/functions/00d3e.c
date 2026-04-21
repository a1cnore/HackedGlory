// functions/00d3e — 52 functions
#include "libGameKindred.h"




void FUN_00d3e028(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3e39c(lVar2 + 0x10);
  FUN_00d44d70(param_1);
  uVar1 = FUN_00ceab2c();
                    /* WARNING: Could not recover jumptable at 0x00d3e080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1,3);
  return;
}




void FUN_00d3e084(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3e39c(lVar2 + 0x10);
  FUN_00d44d70(param_1);
  uVar1 = FUN_00ceab2c();
                    /* WARNING: Could not recover jumptable at 0x00d3e0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1,7);
  return;
}




void FUN_00d3e0e0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3e39c(lVar2 + 0x10);
  FUN_00d44d70(param_1);
  uVar1 = FUN_00ceab2c();
                    /* WARNING: Could not recover jumptable at 0x00d3e138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,~uVar1,3);
  return;
}




void FUN_00d3e13c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3e39c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3e188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,2);
  return;
}




void FUN_00d3e18c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_Vision");
  FUN_00da2048(uVar3,"Effect_Vision_Ally");
  FUN_00da20b8(0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3e21c(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d3e3ec(lVar1 + 0x10);
  return;
}




void FUN_00d3e234(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d3e43c();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3e298(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar4);
  lVar5 = FUN_00d66d28(param_1);
  iVar1 = *(int *)(lVar5 + 0x260);
  iVar3 = FUN_00d67b84(param_1);
  if (iVar1 != iVar3) {
    FUN_00d3e534();
    uVar4 = FUN_00d2aa68();
    FUN_00d42654(auStack_50,uVar4);
    FUN_00d3f914(uVar4,4);
  }
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d40e24(0xbf800000,uVar4,0x11,2);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 8);
  FUN_00d3e534();
  uVar4 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar4);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3e39c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099fcb8();
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




void FUN_00d3e3ec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099ea08();
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




undefined8 * FUN_00d3e43c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_00d468c8(puVar4);
    *puVar4 = &PTR_FUN_0281b658;
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d3e518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281aa28;
  DAT_0313ce00 = 0;
  return;
}



undefined *PTR_FUN_0281aa48;
undefined *PTR_FUN_0281aa88;
undefined *PTR_FUN_0281aac8;
undefined *PTR_FUN_0281ab08;
undefined *PTR_FUN_0281ab48;
undefined *PTR_FUN_0281ab98;
undefined *PTR_FUN_0281abe8;
undefined *PTR_FUN_0281ac38;
float DAT_031a90e0;
float DAT_031a9020;
undefined *PTR_FUN_0281ac88;
undefined *PTR_FUN_0281acc8;
undefined *PTR_FUN_0281ad08;
undefined *PTR_FUN_0281ad48;
undefined *PTR_thunk_FUN_00d468dc_0281ad88;
undefined *PTR_thunk_FUN_00d468dc_0281adc8;
undefined *PTR_FUN_0281ae08;
undefined *PTR_FUN_0281ae48;
undefined *PTR_FUN_0281b728;
undefined *PTR_FUN_0281b768;
undefined *PTR_thunk_FUN_00d468dc_0281ae88;
undefined *PTR_FUN_0281aec8;
undefined *PTR_FUN_0281af08;
undefined *PTR_FUN_0281af48;
undefined *PTR_FUN_0281af88;
float DAT_031a9140;
float DAT_031a9080;
undefined *PTR_FUN_0281afc8;
undefined *PTR_FUN_0281b008;
undefined *PTR_FUN_0281b048;
undefined *PTR_FUN_0281b098;
undefined *PTR_FUN_0281b0e8;
undefined *PTR_FUN_0281b128;
undefined *PTR_FUN_0281b168;
undefined *PTR_FUN_0281b1b8;
undefined *PTR_FUN_0281b208;
undefined *PTR_FUN_0281b248;
undefined *PTR_FUN_0281b288;
undefined *PTR_s_bStackOnDefend_02bebb60;
undefined *PTR_s_timeOfLastDamageExchange_02bebb40;
undefined *PTR_s_lastStackTime_02bebb48;
undefined *PTR_s_stackRate_02bebb50;
undefined *PTR_s_decayTime_02bebb58;
undefined *PTR_s_stackFalloff_02bebb70;
undefined *PTR_s_bDecayAllStacks_02bebb68;
undefined FUN_00d42ee8;
undefined FUN_00d43058;
float DAT_031a9220;
float DAT_031a9160;
float DAT_031a9228;
float DAT_031a9168;
undefined *PTR_s_Effect_Nothing_0281b798;
undefined FUN_00d43834;
undefined FUN_00d43848;
undefined FUN_00d438b8;
undefined FUN_00d43960;
undefined *PTR_s_onCancelName_02bed510;
undefined FUN_00d43a04;
undefined FUN_00d43a70;
undefined FUN_00d43ae4;
undefined FUN_00d43b4c;
undefined FUN_00d4375c;
pointer PTR_s_waypoint_1_x_0281b7d0;
pointer PTR_s_waypoint_1_z_0281b7d8;
undefined FUN_00d443c0;
undefined FUN_00d44430;
undefined FUN_00d453a4;
undefined FUN_00caa3f8;
undefined FUN_00d44fd8;
undefined FUN_00d45000;
undefined FUN_00d45038;
undefined FUN_00d45080;
undefined *PTR_s_EngineRevLastDuration_02bebba8;
undefined FUN_00d45680;
undefined FUN_00d456a4;
undefined FUN_00d456f0;
undefined FUN_00d45a58;
undefined FUN_00d45a64;
undefined FUN_00d45600;
undefined FUN_00d45b94;
undefined FUN_00d45bc0;
undefined FUN_00d45f90;
undefined FUN_00d46164;
undefined FUN_00d46468;
undefined FUN_00d4647c;
undefined FUN_00d46490;
undefined FUN_00d464f8;
undefined FUN_00d4659c;
undefined *PTR_FUN_0281b810;
undefined *PTR_FUN_0281b890;
undefined *PTR_FUN_0281b8d0;
undefined *PTR_FUN_0281b910;
undefined *PTR_thunk_FUN_00d468dc_0281b9e0;
undefined *PTR_FUN_0281ba30;
undefined *PTR_FUN_0281ba70;
undefined *PTR_FUN_0281bab0;
undefined *PTR_FUN_0281bb18;
undefined *PTR_FUN_0281bb58;
undefined *PTR_FUN_0281bc28;
undefined *PTR_FUN_0281bd00;
int DAT_031a9338;
undefined *PTR_FUN_0281bd28;
undefined *PTR_FUN_0281be00;
undefined *PTR_FUN_0281be28;
undefined *PTR_FUN_0281bf00;
undefined *PTR_FUN_0281bf28;
undefined *PTR_FUN_0281c000;
undefined *PTR_FUN_0281c028;
undefined *PTR_FUN_0281c100;
undefined *PTR_FUN_0281cf28;
undefined *PTR_FUN_0281cff8;
undefined *PTR_FUN_0281d0c8;
undefined *PTR_FUN_0281d198;
undefined *PTR_FUN_0281d268;
undefined *PTR_FUN_0281d4d8;
int DAT_0314fa24;
undefined *PTR_FUN_0281d5a8;
undefined *PTR_FUN_0281d678;
undefined *PTR_FUN_0281d748;
undefined *PTR_FUN_0281d778;
undefined *PTR_FUN_0281d7a8;
undefined *PTR_FUN_0281d7d8;
undefined *PTR_FUN_0281d808;
undefined *PTR_FUN_0281d838;
undefined *PTR_FUN_0281d868;
undefined *PTR_FUN_0281d8d0;
undefined *PTR_FUN_0281d908;
pointer PTR_FUN_0281d940;
pointer PTR_FUN_0281d958;
pointer PTR_FUN_0281d970;
undefined FUN_00d4f3d8;
undefined FUN_00d4f5b8;
undefined FUN_00d4f6f0;
undefined *PTR_FUN_0281da28;
undefined *PTR_FUN_0281da58;
undefined FUN_00d4f0e8;
undefined FUN_00d4f224;
undefined FUN_00d4f2a0;
undefined *PTR_s_onAbilityEnterReadyName_02bed5c0;
undefined *PTR_s_onAbilityEnterCancelledName_02bed5d0;
undefined *PTR_s_onAbilityEnterCooldownName_02bed5c8;
uint DAT_031a94c4;
undefined FUN_00d4fb74;
undefined FUN_00d4fb7c;
undefined FUN_00d527f0;
undefined FUN_00d4fc38;
undefined FUN_00d52814;
undefined FUN_00d4fcf4;
undefined FUN_00d4fd20;
undefined4 DAT_01bd11d0;
float DAT_031a9450;
float DAT_031a9390;
undefined *PTR_thunk_FUN_01985bd0_0281da88;
uint DAT_02e3ef78;
undefined FUN_00d54a4c;
undefined FUN_00d54ac4;
undefined FUN_00d552e4;
undefined FUN_00d552e8;
undefined FUN_00d552ec;
undefined FUN_00d55300;
undefined *PTR_FUN_0281dab8;
undefined *PTR_FUN_0281dae8;
undefined FUN_00d54fcc;
undefined FUN_00d54fd0;
undefined FUN_00d54fe8;
undefined FUN_00d55048;
undefined FUN_00d55060;
undefined FUN_00d55294;
undefined FUN_00d5529c;
int DAT_031a96c0;
float DAT_031a9604;
float DAT_031a9544;
undefined *PTR_s_onHostDieName_02bed588;
undefined FUN_00d555a8;
undefined FUN_00d5eb28;
uint DAT_02c09220;
undefined FUN_00d55664;
undefined *PTR_DAT_02bead70;
undefined FUN_00d55584;
undefined FUN_00d5eb04;
float DAT_031a95b0;
float DAT_031a94f0;
float DAT_031a95b8;
float DAT_031a94f8;
int DAT_0314fd94;
int DAT_0314fd9c;
int DAT_0314fda4;
float DAT_031a9650;
float DAT_031a9590;
float DAT_031a964c;
float DAT_031a958c;
undefined *PTR_s_onActorLevelUpName_02bed550;
char DAT_02bed4f0;
int DAT_031a96b0;
int DAT_031a9680;
int DAT_031a9670;
undefined *PTR_s_onAbilityTriggeredName_02bed548;
undefined *PTR_s_onEnterCombatName_02bed5a0;
undefined *PTR_s_onPreAbilityTriggeredClient_02bed5b0;
float DAT_031a95c0;
undefined DAT_031a9500;
float DAT_031a95c4;
float DAT_031a95c8;
float DAT_031a9508;
undefined *PTR_s_onActorRespawnName_02bed598;
undefined1 DAT_031a94e8;
undefined4 DAT_031a94e0;
undefined *PTR_s_onActorAttributesChangedName_02bed568;
undefined *PTR_s_onActorResourcesChangedName_02bed570;
undefined *PTR_s_None_0281db10;
undefined *PTR_s_onAbilityDowngradedName_02bed540;
float DAT_031a9660;
float DAT_031a95a0;
undefined *PTR_s_onActorUndeadName_02bed578;
undefined *PTR_s_onActorUnUndeadName_02bed580;
undefined DAT_031a95cc;
float DAT_031a95cc;
float DAT_031a950c;
float DAT_031a95d0;
float DAT_031a9510;
float DAT_031a961c;
float DAT_031a955c;
float DAT_031a9618;
float DAT_031a9558;
undefined *PTR_s_onLeaveCombatName_02bed5a8;
float DAT_031a95e4;
undefined DAT_031a9524;
float DAT_031a95d4;
float DAT_031a9514;
float DAT_031a95d8;
float DAT_031a9518;
float DAT_031a960c;
float DAT_031a954c;
float DAT_031a95e8;
float DAT_031a95dc;
float DAT_031a951c;
float DAT_031a95e0;
float DAT_031a9520;
float DAT_031a9610;
float DAT_031a9550;
float DAT_031a9638;
float DAT_031a9578;
float DAT_031a9634;
float DAT_031a9574;
undefined *PTR_FUN_0281db58;
undefined *PTR_FUN_0281db88;
uint DAT_031a94d0;
undefined FUN_00d5f0c8;
undefined FUN_00d5f150;
int DAT_031a94d0;
undefined *PTR_FUN_0281dbb8;
undefined *PTR_FUN_0281dbe8;
uint DAT_031a9664;
undefined FUN_00d5fa80;
undefined FUN_00d5fadc;
float DAT_031a96d0;
float DAT_031a9790;
float DAT_031a96d8;
float DAT_031a9798;
float DAT_031a9840;
float DAT_031a9780;
float DAT_031a9810;
float DAT_031a9750;
float DAT_031a983c;
undefined DAT_031a9778;
undefined *PTR_FUN_0281dc18;
uint DAT_0314f724;
undefined FUN_00d5fcd8;
undefined FUN_00d5fd20;
undefined FUN_00d615dc;
undefined FUN_00d61600;
undefined DAT_03218f8c;
undefined *PTR_FUN_0281dc48;
undefined *PTR_FUN_0281dc88;
uint DAT_0314fa30;
undefined FUN_00d6199c;
undefined FUN_00d619f0;
undefined *PTR_s_threat_neutral_0281dca0;
float DAT_031a994c;
float DAT_031a9950;
float DAT_031a988c;
undefined DAT_031a9890;
float DAT_031a9920;
undefined DAT_031a9860;
undefined *PTR_thunk_FUN_01985bd0_0281dcd0;
uint DAT_031a9670;
undefined FUN_00d61aac;
undefined FUN_00d61c54;
undefined FUN_00d61c6c;
undefined *PTR_FUN_0281dd00;
undefined *PTR_FUN_0281dd30;
undefined FUN_00d61d88;
undefined FUN_00d62678;
uint DAT_031a96b0;
undefined FUN_00d6212c;
undefined FUN_00d626e8;
undefined *PTR_FUN_0281dd60;
uint DAT_031a9680;
undefined FUN_00d62ca0;
undefined FUN_00d62cd0;
undefined FUN_00d628d0;
undefined FUN_00d62d90;
undefined *PTR_thunk_FUN_01985bd0_0281dd90;
undefined FUN_00d62d84;
uint DAT_031a9b50;
undefined FUN_00d62e54;
undefined FUN_00d62f0c;
undefined FUN_00d63484;
undefined FUN_00d634a8;
float DAT_031a9ad4;
undefined DAT_031a9a10;
undefined *PTR_FUN_0281d408;
undefined *PTR_FUN_02820040;
undefined *PTR_FUN_0281ff70;
undefined *PTR_FUN_02820110;
undefined *PTR_FUN_028201e0;
undefined *PTR_FUN_0281c128;
undefined *PTR_FUN_0281c2c8;
undefined *PTR_FUN_0281c638;
undefined *PTR_FUN_0281d338;
undefined *PTR_FUN_0281c708;
undefined *PTR_FUN_0281c468;
undefined *PTR_FUN_0281c540;
undefined *PTR_FUN_0281ce58;
undefined *PTR_FUN_0281c7d8;
undefined *PTR_FUN_0281c8a8;
undefined *PTR_FUN_028202b0;
undefined *PTR_FUN_0281cb18;
undefined *PTR_FUN_0281c978;
undefined *PTR_FUN_0281ca48;
undefined *PTR_FUN_0281cbe8;
undefined *PTR_FUN_0281ccb8;
undefined *PTR_FUN_0281c1f8;
undefined *PTR_FUN_0281cd88;
undefined *PTR_FUN_0281c398;
undefined *PTR_FUN_0281c568;
undefined *PTR_FUN_0281de20;
undefined *PTR_FUN_0281ddc0;
undefined *PTR_FUN_0281ddf0;
undefined FUN_00d66834;
uint DAT_031a9338;
undefined FUN_00d6a540;
undefined FUN_00d6a564;
undefined FUN_00d669e0;
undefined FUN_00d66b68;
undefined FUN_00d66c24;
undefined *PTR_s___PARENT___02bed638;
undefined *PTR_s___REAPPLYING_VAR1_FLOAT___02bed700;
undefined *PTR_s___REAPPLYING_VAR2_FLOAT___02bed708;
undefined *PTR_s___REAPPLYING_VAR1_INT___02bed710;
undefined *PTR_s___REAPPLYING_VAR2_INT___02bed718;
undefined *PTR_s___BESTOWER___02bed640;
undefined *PTR_s_onStacksChangedName_02bed528;
undefined *PTR_s___COMBAT_PARAMS___02bed6d0;
undefined *PTR_s___COMBAT_HEAL_PARAMS___02bed6d8;
undefined *PTR_s___ACTOR___02bed648;
undefined *PTR_s___ABILITY_BEHAVIOR_NAME_HASH___02bed6b8;
undefined *PTR_s___PRE_ABILITY_TRIGGERED_INT_DATA_02bed6c0;
undefined *PTR_s___PRE_ABILITY_TRIGGERED_FLOAT_DA_02bed6c8;
undefined *PTR_s___BUFF_DATA___02bed678;
undefined *PTR_s___DURATION___02bed680;
undefined *PTR_s___SPEED___02bed690;
undefined *PTR_s___LOCATION_X___02bed6a0;
undefined *PTR_s___LOCATION_Z___02bed6b0;
undefined *PTR_s___CANCEL_FLAG___02bed688;
undefined *PTR_s___HEIGHT___02bed698;
undefined *PTR_s___ATTR___02bed650;
undefined *PTR_s___ATTR_PART___02bed658;
undefined *PTR_s___ATTR_VALUE___02bed660;
undefined *PTR_s___RSRC___02bed668;
undefined *PTR_s___RSRC_VALUE___02bed670;
undefined *PTR_s___VAR1_INT___02bed6f0;
undefined *PTR_s___VAR2_INT___02bed6f8;
undefined *PTR_s___VAR1_FLOAT___02bed6e0;
undefined *PTR_s___VAR2_FLOAT___02bed6e8;
undefined *PTR_FUN_0281de50;
undefined *PTR_FUN_0281de80;
uint DAT_031a9308;
undefined FUN_00d6ab88;
undefined FUN_00d6abe8;
int DAT_031abf88;
int DAT_0315c91c;
int DAT_0315c928;
int DAT_0315c92c;
int DAT_0315c950;
int DAT_031b875c;
int DAT_031b9a3c;
int DAT_031bae80;
int DAT_031bab20;
int DAT_031ba3bc;
int DAT_031ba8ec;
int DAT_031b94f0;
int DAT_031b9ff0;
undefined *PTR_FUN_0281deb0;
uint DAT_02c7bf48;
undefined FUN_00d6caac;
undefined FUN_00d6cac8;
undefined FUN_00d6acd8;
undefined *PTR_FUN_0281dee0;
uint DAT_0314fa24;
undefined FUN_00d6d30c;
undefined FUN_00d6cb9c;
undefined FUN_00d6d370;
uint DAT_02c7bf1c;
undefined FUN_00d6e6f8;
undefined FUN_00d6e71c;
undefined *PTR_FUN_0281df10;
undefined *PTR_FUN_0281df48;
undefined *PTR_FUN_0281df78;
float DAT_031a9c84;
float DAT_031a9bc4;
float DAT_031a9c5c;
float DAT_031a9b9c;
undefined DAT_00000044;
undefined8 *DAT_031a9cd8;
undefined *PTR_FUN_0281dfa0;
undefined8 DAT_031a9cd8;
uint DAT_02c09240;
undefined *PTR_DAT_02bea710;
undefined FUN_00d6e858;
undefined FUN_00d6ec64;
undefined FUN_00d6ec8c;
undefined4 DAT_01bcdc20;
uint DAT_02c7eb30;
undefined FUN_00d6efd4;
undefined FUN_00d6f04c;
undefined *PTR_FUN_0281dfd0;
undefined *PTR_FUN_0281e000;
undefined *PTR_FUN_0281e030;
undefined *PTR_FUN_0281e058;
undefined *PTR_FUN_0281e080;
uint DAT_031a9328;
undefined FUN_00d6fbf4;
undefined FUN_00d6fc48;
undefined *PTR_FUN_0281e0a8;
undefined *PTR_FUN_0281e0d8;
undefined *PTR_FUN_0281e108;
undefined *PTR_FUN_0281e138;
uint DAT_0312edf0;
undefined thunk_FUN_00d7050c;
undefined FUN_00d6ffbc;
undefined FUN_00d700b0;
undefined FUN_00d70914;
undefined FUN_00d70938;
undefined *PTR_FUN_0281e190;
pointer PTR_FUN_0281e1c0;
uint DAT_031a9d20;
undefined FUN_00d70b28;
undefined *PTR_DAT_02bea980;
undefined FUN_00d70b40;
undefined FUN_00d70a48;
undefined *PTR_FUN_0281e1f0;
undefined8 *DAT_031a9d30;
undefined *PTR_FUN_0281e220;
undefined8 DAT_031a9d30;
uint DAT_031a9d38;
undefined *PTR_DAT_02beac08;
undefined FUN_00d70e9c;
undefined FUN_00d70edc;
undefined FUN_00d70c48;
undefined *PTR_thunk_FUN_01985bd0_0281e250;
uint DAT_031a9d88;
undefined FUN_00d724f4;
undefined FUN_00d72544;
undefined4 DAT_01bee8c4;
undefined1 DAT_031a9d50;
undefined1 DAT_031a9d60;
undefined4 DAT_031a9d48;
undefined4 DAT_031a9d58;
undefined1 DAT_031a9d70;
undefined1 DAT_031a9d80;
undefined4 DAT_031a9d68;
undefined4 DAT_031a9d78;
undefined *PTR_FUN_0281e280;
undefined *PTR_FUN_0281e2b0;
uint DAT_03130aa8;
undefined FUN_00d726e8;
undefined FUN_00d73e04;
undefined FUN_00d73e28;
undefined *PTR_thunk_FUN_01985bd0_0281e2e0;
uint DAT_031328d8;
undefined FUN_00d754d8;
undefined FUN_00d754fc;
undefined *PTR_s_*KindredItems*_02bed720;
undefined4 DAT_02bf257c;
undefined *PTR_FUN_0281e310;
int DAT_02bf257c;
uint DAT_02e3ef88;
undefined FUN_00d7585c;
undefined *PTR_DAT_02beacf8;
undefined FUN_00d75860;
undefined FUN_00d75864;
undefined FUN_00d75868;
undefined FUN_00d763c4;
undefined FUN_00d76440;
uint DAT_031a96a0;
undefined FUN_00d76e30;
undefined FUN_00d76e90;
undefined *PTR_FUN_0281e340;
undefined *PTR_FUN_0281e370;
undefined *PTR_FUN_0281e3a0;
undefined *PTR_FUN_0281e3d0;
uint DAT_031a9318;
undefined FUN_00d77748;
undefined FUN_00d777bc;
float DAT_031a9eac;
undefined DAT_031a9de8;
undefined *PTR_FUN_0281e400;
undefined *PTR_FUN_0281e430;
uint DAT_031a96c0;
undefined FUN_00d77aec;
undefined FUN_00d77d44;
undefined FUN_00d7797c;
undefined FUN_00d77a28;
undefined FUN_00d77cf4;
uint DAT_03133530;
undefined FUN_00d79034;
undefined FUN_00d790a8;
undefined *PTR_FUN_0281e460;
float DAT_031aa080;
float DAT_031a9fc0;
undefined *PTR_FUN_0281e490;
uint DAT_0312f998;
undefined FUN_00d79814;
undefined FUN_00d795a8;
undefined FUN_00d79874;
undefined *PTR_thunk_FUN_01985bd0_0281e4c0;
uint DAT_02c7bf28;
undefined FUN_00d79934;
undefined FUN_00d79b70;
undefined FUN_00d79b8c;
undefined FUN_00d79c1c;
uint DAT_0312ee10;
undefined *PTR_DAT_02beace0;
undefined FUN_00d79ed4;
undefined FUN_00d79ee8;
undefined *PTR_FUN_0281e4f0;
undefined FUN_00d7a014;
undefined FUN_00d7a020;
undefined *PTR_thunk_FUN_01985bd0_0281e520;
undefined FUN_00d7a008;
uint DAT_031502d4;
undefined FUN_00d7a0cc;
undefined FUN_00d7aaf8;
undefined FUN_00d7ab1c;
undefined FUN_00d7af00;
uint DAT_031aa094;
undefined FUN_00d7af24;
undefined DAT_01bcddcf;
undefined *PTR_FUN_0281e550;
undefined *PTR_FUN_0281e580;
uint DAT_02c7bf38;
undefined FUN_00d7bb10;
undefined FUN_00d7bb40;
undefined *PTR_FUN_0281e5b0;
undefined1 DAT_031aa0a8;
undefined4 DAT_031aa0a0;
undefined *PTR_FUN_0281e5e0;
undefined *PTR_FUN_0281e610;
uint DAT_031aa0b0;
undefined FUN_00d7be4c;
undefined FUN_00d7bea0;
undefined *PTR_FUN_0281e640;
undefined *PTR_FUN_0281e670;
uint DAT_0312e6d4;
undefined FUN_00d7c0fc;
undefined FUN_00d7c150;
undefined FUN_00d7bf6c;
int DAT_0312e6d4;
undefined *PTR_FUN_0281e6a0;
undefined FUN_00d7c408;
uint DAT_031a9b44;
undefined FUN_00d7c43c;
undefined FUN_00d7c20c;
uint DAT_03133730;
undefined FUN_00d7c4b8;
undefined FUN_00d7c5f4;
undefined FUN_00d7c644;
int DAT_03133730;
undefined *PTR_FUN_0281e6d0;
undefined *PTR_FUN_0281e700;
undefined *PTR_FUN_0281e730;
undefined FUN_00d7c764;
uint DAT_0312ec00;
undefined FUN_00d7c878;
undefined FUN_00d7c900;
undefined FUN_00d7ca30;
undefined FUN_00d7d6b0;
undefined FUN_00d7d6fc;
float DAT_031aa1c4;
undefined DAT_031aa100;
undefined *PTR_FUN_0281e760;
undefined *PTR_FUN_0281e790;
uint DAT_031aa234;
undefined FUN_00d7d8d4;
undefined FUN_00d7d93c;
undefined *PTR_thunk_FUN_01985bd0_0281e7c0;
uint DAT_02c7bf58;
undefined FUN_00d7e2d4;
undefined FUN_00d7e354;
undefined FUN_00d7da38;
int DAT_02c7bf58;
undefined8 *DAT_031aa240;
long *DAT_031aa240;
undefined8 DAT_031aa240;
undefined *PTR_FUN_0281e7f0;
undefined *PTR_FUN_0281e830;
undefined *PTR_FUN_0281e870;
undefined *PTR_FUN_0281e8b0;
undefined *PTR_FUN_0281e8f0;
undefined *PTR_FUN_0281e930;
undefined *PTR_FUN_0281e970;
undefined *PTR_FUN_0281e9a0;
uint DAT_0312f140;
undefined thunk_FUN_00d8194c;
undefined thunk_FUN_00d81aa8;
undefined FUN_00d8201c;
undefined FUN_00d80550;
undefined FUN_00d82040;
ulong DAT_03218f68;
undefined1 DAT_031aa250;
undefined4 DAT_031aa248;
int DAT_031aa258;
undefined *PTR_FUN_0281e9d0;
undefined *PTR_FUN_0281ea00;
uint DAT_031aa258;
undefined FUN_00d82520;
undefined FUN_00d82228;
undefined FUN_00d82574;
undefined FUN_00d822c4;
undefined *PTR_FUN_0281ea30;
undefined *PTR_FUN_0281ea70;
undefined *PTR_FUN_0281eab0;
undefined *PTR_FUN_0281eaf0;
undefined FUN_00d82a18;
float DAT_031aa340;
float DAT_031aa280;
undefined *PTR_FUN_0281eb30;
undefined *PTR_FUN_0281eb70;
pointer PTR_FUN_0281ebb8;
undefined *PTR_FUN_0281ebd0;
undefined *PTR_FUN_0281ec10;
undefined *PTR_FUN_0281ec50;
undefined *PTR_FUN_0281ec90;
undefined *PTR_FUN_0281ecd0;
undefined FUN_00d83668;
undefined FUN_00d83714;
undefined *PTR_FUN_0281ed10;
undefined *PTR_FUN_0281ed70;
undefined *PTR_FUN_0281edc8;
undefined *PTR_FUN_02bed728;
undefined FUN_00d84c80;
undefined FUN_00d84c94;
undefined FUN_00d84ca8;
undefined FUN_00d84dc0;
undefined FUN_00d84dd4;
undefined FUN_00d850a0;
undefined FUN_00d85498;
undefined FUN_00d84918;
undefined FUN_00d85848;
undefined FUN_00d85468;
undefined FUN_00d85478;
undefined FUN_00d85488;
undefined FUN_00d85ad4;
undefined FUN_00d85eec;
undefined *PTR_FUN_02820430;
undefined FUN_00d82c30;
undefined FUN_00d86330;
undefined FUN_00d8633c;
undefined FUN_00d8678c;
undefined FUN_00d8690c;
undefined *PTR_FUN_0281ef28;
undefined FUN_00d869dc;
undefined *PTR_FUN_0281ef50;
float DAT_031aa550;
float DAT_031aa490;
undefined FUN_00d86f18;
undefined FUN_00d8724c;
undefined FUN_00d872ec;
undefined FUN_00d874f0;
undefined *PTR_FUN_0281ef78;
undefined FUN_00d87d44;
undefined FUN_00d8845c;
undefined FUN_00d88480;
undefined FUN_00d8885c;
undefined FUN_00d88d44;
undefined FUN_00d88d90;
undefined FUN_00d88fd8;
undefined FUN_00d88ef8;
undefined FUN_00d88f70;
undefined FUN_00d891e8;
undefined FUN_00d89918;
undefined FUN_00d89a80;
undefined FUN_00d89be8;
float DAT_031aa7c0;
float DAT_031aa700;
undefined FUN_00d8a1ec;
undefined FUN_00d89d54;
undefined FUN_00d89de0;
undefined *PTR_FUN_0281efa0;
undefined FUN_00d8a414;
undefined FUN_00d8a464;
undefined FUN_00d8a85c;
undefined FUN_00d8a870;
undefined FUN_00d8a298;
undefined FUN_00d8a89c;
undefined FUN_00d8a2d0;
undefined FUN_00d8a338;
float DAT_031aa930;
float DAT_031aa870;
float DAT_031aa940;
float DAT_031aa880;
undefined FUN_00d8aaf4;
undefined FUN_00d8ada8;
undefined FUN_00d8aeb4;
float DAT_031aaac0;
float DAT_031aaa00;
undefined FUN_00d8b040;
undefined FUN_00d8b408;
undefined FUN_00d8b81c;
undefined FUN_00d8b970;
undefined FUN_00d8bb14;
undefined FUN_00d8bccc;
undefined FUN_00d8bde4;
undefined *PTR_s_Effect_TurretCore_0281efb8;
undefined FUN_00d8c2cc;
undefined FUN_00d8c600;
undefined FUN_00d8c9e4;
undefined FUN_00d8c9f8;
undefined FUN_00d8cd3c;
float DAT_031aae50;
float DAT_031aad90;
undefined FUN_00d8ce70;
undefined FUN_00d8cfac;
undefined FUN_00d8d3bc;
undefined *PTR_s_SkaarfGoopPool_02bf01a8;
undefined FUN_00d8dc04;
undefined FUN_00d8e0e0;
undefined *PTR_s_*SkaarfGoopPool*_02bf01b0;
undefined FUN_00d8e728;
undefined FUN_00d8e2fc;
undefined FUN_00d8e390;
undefined FUN_00d8e424;
float DAT_031ab0b0;
float DAT_031aaff0;
float DAT_031ab0c0;
float DAT_031ab000;
undefined FUN_00d8e8e4;
float DAT_031ab230;
float DAT_031ab170;
undefined FUN_00d8efdc;
undefined FUN_00d8ec44;
float DAT_031ab3c4;
undefined DAT_031ab300;
undefined FUN_00d8f0cc;
undefined FUN_00d8f3b8;
undefined FUN_00d8f3c4;
undefined FUN_00d8f830;
undefined FUN_00d8fa00;
undefined FUN_00d8fc04;
undefined FUN_00d8fc18;
undefined FUN_00d8fc2c;
undefined FUN_00d8fdc4;
undefined FUN_00d8fdd8;
undefined FUN_00d90338;
undefined FUN_00d904b4;
undefined FUN_00d904c8;
undefined FUN_00d90804;
undefined FUN_00d911a4;
undefined FUN_00d913e8;
float DAT_031ab540;
float DAT_031ab480;
undefined FUN_00d913fc;
undefined FUN_00d91618;
undefined FUN_00d917a4;
undefined FUN_00d91a94;
undefined FUN_00d91c34;
undefined FUN_00d91c40;
undefined FUN_00d91f84;
undefined FUN_00d91f98;
undefined FUN_00d91fac;
undefined FUN_00d9203c;
undefined FUN_00d92318;
undefined FUN_00d9264c;
undefined FUN_00d92660;
float DAT_031ab6c0;
float DAT_031ab600;
undefined FUN_00d928e4;
undefined FUN_00d927fc;
undefined FUN_00d92c34;
undefined FUN_00d92c6c;
undefined FUN_00d93258;
undefined FUN_00d93368;
undefined FUN_00d9349c;
undefined FUN_00d93d4c;
float DAT_031ab840;
float DAT_031ab780;
undefined FUN_00d941a0;
undefined FUN_00d94628;
undefined FUN_00d9463c;
undefined FUN_00d9469c;
undefined FUN_00d94970;
undefined FUN_00d94b80;
undefined FUN_00d94b94;
undefined FUN_00d94984;
undefined FUN_00d94e20;
undefined FUN_00d94e34;
undefined FUN_00d94fd4;
undefined FUN_00d955bc;
undefined FUN_00d95810;
undefined FUN_00d96a1c;
undefined FUN_00d96b9c;
undefined FUN_00d96e14;
undefined FUN_00d96e28;
undefined FUN_00d97288;
undefined FUN_00d976b0;
undefined FUN_00d977ec;
undefined FUN_00d97b34;
undefined *PTR_FUN_0281f018;
undefined *PTR_FUN_0281f058;
undefined *PTR_FUN_0281f098;
undefined *PTR_FUN_0281f0d8;
undefined *PTR_FUN_0281f118;
undefined *PTR_FUN_0281f158;
undefined *PTR_FUN_0281f198;
pointer PTR_FUN_0281f2c8;
undefined *PTR_FUN_0281f1d8;
pointer PTR_FUN_0281f2e0;
undefined *PTR_FUN_0281f2f8;
float DAT_031ab9b0;
float DAT_031ab8f0;
float DAT_031ab9b8;
float DAT_031ab8f8;
float DAT_031aba30;
float DAT_031ab970;
float DAT_031aba60;
float DAT_031ab9a0;
float DAT_031aba5c;
undefined DAT_031ab998;
int DAT_031328d8;
undefined *PTR_FUN_0281f3c0;
undefined *PTR_FUN_0281f420;
undefined *PTR_FUN_0281f500;
undefined *PTR_FUN_0281f560;
undefined *PTR_FUN_0281f5a0;
undefined *PTR_FUN_0281f5e0;
undefined *PTR_FUN_0281f620;
undefined *PTR_FUN_0281f660;
undefined *PTR_FUN_0281f6a0;
undefined *PTR_FUN_0281f6e0;
undefined *PTR_FUN_0281f740;
undefined *PTR_FUN_0281f7a0;
undefined *PTR_FUN_0281f7e0;
float DAT_031abb74;
undefined DAT_031abab0;
undefined4 DAT_031aba70;
undefined4 DAT_031abb30;
float DAT_031abb30;
float DAT_031aba70;
float DAT_031abbe0;
float DAT_031abb20;
float DAT_031abb38;
float DAT_031aba78;
float DAT_031abbdc;
undefined DAT_031abb18;
float DAT_031abb78;
float DAT_031abab8;
float DAT_031abba8;
float DAT_031abae8;
int DAT_031a96a0;
undefined *PTR_s_freehooks_02bede98;
float DAT_031abcd0;
float DAT_031abc10;
undefined FUN_00da070c;
undefined *PTR_FUN_0281f460;
float DAT_031abe80;
float DAT_031abdc0;
uint DAT_031abef8;
pointer PTR_s_*Item_CrystalInfusion*_02beb068;
pointer PTR_s_*Item_WeaponInfusion*_02beb180;
undefined1 DAT_031abf30;
undefined8 DAT_031abf00;
undefined8 DAT_031abf08;
undefined4 DAT_031abf10;
undefined8 DAT_031abf18;
undefined8 DAT_031abf20;
undefined4 DAT_031abf28;
undefined FUN_00d78e18;
long DAT_031abf38;
undefined8 *DAT_031abf38;
void *DAT_031abf38;
undefined1 DAT_031abf50;
undefined DAT_031abf40;
undefined DAT_01bd12ba;
undefined FUN_00da4900;
undefined FUN_00da4914;
undefined FUN_00da48b0;
undefined FUN_00da48c4;
undefined FUN_00da48d8;
undefined FUN_00da49f4;
undefined FUN_00da4a08;
undefined FUN_00da4b5c;
undefined FUN_00da4b20;
undefined FUN_00da4b48;
undefined FUN_00da4c8c;
undefined FUN_00da4ca0;
undefined FUN_00da4d2c;
undefined FUN_00da4e80;
undefined FUN_00da4e94;
undefined FUN_00da4ea8;
undefined FUN_00da4fb4;
undefined FUN_00da51bc;
undefined FUN_00da5384;
undefined FUN_00da5370;
undefined FUN_00da546c;
undefined FUN_00da5480;
undefined FUN_00da55c0;
undefined FUN_00da55d4;
undefined FUN_00da56bc;
undefined FUN_00da56d0;
undefined FUN_00da5764;
undefined FUN_00da5984;
undefined FUN_00da5a10;
undefined FUN_00da5ab0;
undefined FUN_00da5b3c;
float DAT_031ac0e0;
float DAT_031ac020;
undefined FUN_00da5d08;
undefined FUN_00da5d1c;
undefined FUN_00da5ed4;
float DAT_031ac280;
float DAT_031ac1c0;
undefined FUN_00da6174;
undefined FUN_00da6188;
undefined FUN_00da6224;
undefined FUN_00da6238;
undefined FUN_00da63a4;
undefined FUN_00da6490;
undefined FUN_00da651c;
undefined FUN_00da65c4;
float DAT_031ac430;
float DAT_031ac370;
undefined FUN_00da65d8;
undefined FUN_00da67d8;
undefined FUN_00da67ec;
undefined FUN_00da67c4;
undefined FUN_00da692c;
undefined FUN_00da6940;
undefined FUN_00da6a20;
undefined FUN_00da6a34;
undefined FUN_00da6b14;
undefined FUN_00da6c18;
undefined FUN_00da6c2c;
undefined FUN_00da6d1c;
undefined FUN_00da6db4;
undefined FUN_00da6ffc;
undefined FUN_00da7090;
undefined FUN_00da71d4;
undefined FUN_00da71e8;
undefined FUN_00da71fc;
undefined FUN_00da7224;
undefined FUN_00da72b8;
undefined FUN_00da75b0;
undefined FUN_00da7658;
float DAT_031ac660;
float DAT_031ac5a0;
undefined FUN_00da783c;
undefined FUN_00da7850;
undefined4 DAT_031ac58c;
undefined1 DAT_031ac590;
undefined FUN_00da7868;
undefined FUN_00da7c24;
undefined FUN_00da7d50;
undefined FUN_00da7d64;
undefined FUN_00da7d78;
undefined FUN_00da7efc;
undefined FUN_00da7ee8;
float DAT_031ac840;
float DAT_031ac780;
undefined FUN_00da7fc0;
undefined FUN_00da8114;
undefined FUN_00da81a8;
undefined FUN_00da82b8;
undefined FUN_00da82cc;
undefined FUN_00da8420;
undefined FUN_00da8434;
undefined FUN_00da8448;
undefined FUN_00da8470;
undefined FUN_00da855c;
undefined FUN_00da8570;
undefined FUN_00da8658;
undefined FUN_00da866c;
undefined FUN_00da8754;
undefined FUN_00da8768;
undefined FUN_00da8848;
undefined FUN_00da885c;
undefined FUN_00da8970;
undefined FUN_00da8984;
undefined FUN_00da8998;
undefined FUN_00da8a94;
undefined FUN_00da8a80;
undefined FUN_00da8b74;
undefined FUN_00da8c14;
undefined *PTR_s_Neutral_0281fb50;
byte DAT_031ac960;
undefined4 DAT_031ac968;
undefined4 DAT_031ac990;
undefined4 DAT_031ac998;
undefined8 DAT_031ac9a0;
undefined8 DAT_031ac980;
undefined8 DAT_031ac988;
undefined1 *DAT_031ac970;
undefined8 DAT_031ac978;
undefined1 DAT_031ac99c;
undefined1 DAT_031ac9a8;
undefined1 DAT_031ac9aa;
undefined4 DAT_031ac9b4;
undefined4 DAT_031ac9b8;
undefined4 DAT_031ac9ad;
undefined4 DAT_031ac9bc;
undefined1 DAT_031ac9c0;
void *DAT_031ac9c8;
long DAT_031ac9c8;
undefined8 DAT_031ac9c8;
undefined8 DAT_031ac9d8;
float DAT_031afac0;
float DAT_031afa00;
undefined FUN_00dabb44;
undefined FUN_00dac00c;
undefined FUN_00dac020;
undefined *PTR_s_Sound_Alpha_Attack_Heavy_1_02bee3f8;
undefined *PTR_s_Sound_Alpha_Impact_Heavy_1_02bee428;
undefined *PTR_s_Sound_Alpha_Crit_1_02bee410;
undefined FUN_00dac310;
undefined FUN_00dac354;
undefined FUN_00dac368;
undefined FUN_00dac3d8;
undefined FUN_00dacd0c;
undefined FUN_00dac7a8;
undefined FUN_00dac850;
undefined FUN_00dac8a4;
undefined FUN_00dacccc;
undefined FUN_00dacce0;
undefined FUN_00daccf4;
float DAT_031afcb0;
float DAT_031afbf0;
undefined FUN_00dad5dc;
undefined FUN_00dacd20;
undefined FUN_00dace80;
undefined FUN_00dace94;
undefined FUN_00dacf38;
undefined FUN_00dacfdc;
undefined FUN_00dad5c8;
undefined FUN_00dad6b0;
undefined FUN_00dad6c4;
undefined FUN_00dadaa8;
undefined FUN_00dada94;
undefined *PTR_s_Sound_Ardan_Hook_1_02bee488;
undefined *PTR_s_Sound_Ardan_Basic_Impact_1_02bee4d0;
undefined FUN_00cfb6d0;
undefined *PTR_s_Sound_Ardan_GutPunch_1_02bee4a0;
undefined *PTR_s_Sound_Ardan_Basic_Impact_5_02bee4f0;
undefined *PTR_s_Sound_Ardan_StraightPunch_1_02bee4b8;
undefined FUN_00cfb8b4;
undefined *PTR_s_Sound_Ardan_Basic_Impact_3_02bee510;
float DAT_031afe50;
float DAT_031afd90;
undefined DAT_01bd33d4;
undefined FUN_00dae490;
undefined FUN_00dae4a4;
undefined FUN_00dae4b8;
undefined FUN_00dae4cc;
undefined FUN_00dae4e0;
undefined FUN_00dadde0;
undefined FUN_00dae014;
undefined FUN_00dae8fc;
undefined FUN_00dae910;
undefined FUN_00dae928;
undefined FUN_00dae8e8;
undefined FUN_00e60680;
undefined FUN_00dae93c;
undefined FUN_00dae9c8;
undefined FUN_00daea48;
undefined FUN_00daeab4;
undefined FUN_00daefc4;
undefined FUN_00daefd8;
undefined FUN_00daefec;
undefined FUN_00daf000;
undefined FUN_00daf014;
float DAT_031affd0;
float DAT_031aff10;
undefined FUN_00cfbf58;
undefined FUN_00daf028;
undefined *PTR_s_Sound_Baptiste_Basic_Attack_1_02bee568;
undefined *PTR_s_Sound_Baptiste_Basic_Impact_1_02bee580;
pointer PTR_s_Sound_Baptiste_Crit_Attack_02bee5a8;
pointer PTR_s_Sound_Baptiste_Crit_Attack_02bee5b0;
pointer PTR_s_Sound_Baptiste_Empowered_Attack__02bee5c0;
pointer PTR_s_Sound_Baptiste_Empowered_Attack__02bee5d0;
undefined FUN_00daf6f4;
undefined FUN_00daf754;
undefined FUN_00e604a8;
undefined FUN_00db015c;
undefined FUN_00cf76f0;
undefined FUN_00db0804;
undefined FUN_00db0bf4;
undefined FUN_00db0c08;
undefined FUN_00db07c4;
undefined FUN_00db0f10;
undefined FUN_00db0f7c;
undefined FUN_00db13cc;
undefined FUN_00db0c1c;
undefined FUN_00db13e0;
undefined FUN_00cfbfb8;
undefined FUN_00db0e2c;
undefined FUN_00db0efc;
undefined FUN_00db14f8;
undefined FUN_00db1640;
undefined *PTR_s_build://Sounds/5v5/SFX/sfx_black_02bee658;
pointer PTR_s_build://Sounds/5v5/SFX/sfx_black_02bee690;
pointer PTR_s_build://Sounds/5v5/SFX/sfx_black_02bee6a0;
undefined FUN_00db26e4;
undefined FUN_00db2e40;
undefined *PTR_s_Sound_Blackfthr_Basic_1_02bee6f8;
undefined *PTR_s_Sound_Blackfthr_Crit_1_02bee720;
float DAT_031b01f0;
float DAT_031b0130;
undefined FUN_00db2f6c;
undefined FUN_00db2f80;
undefined FUN_00db3034;
undefined FUN_00db313c;
undefined FUN_00db3178;
undefined FUN_00db31b0;
undefined FUN_00db3624;
undefined FUN_00db2ec4;
float DAT_031b01bc;
float DAT_031b00fc;
float DAT_031b01b8;
float DAT_031b00f8;
undefined FUN_00db3638;
undefined FUN_00db3670;
undefined FUN_00db37a0;
undefined FUN_00db37c8;
undefined FUN_00db3870;
undefined FUN_00db3e98;
undefined FUN_00db3eac;
undefined FUN_00db4134;
undefined FUN_00db41a4;
undefined FUN_00db3e4c;
undefined *PTR_FUN_0281f4b0;
undefined FUN_00db4930;
undefined FUN_00db4944;
undefined FUN_00db4a50;
undefined FUN_00db4b88;
undefined FUN_00db5190;
undefined FUN_00db5124;
undefined FUN_00db5138;
undefined FUN_00db514c;
undefined FUN_00db5164;
undefined FUN_00db517c;
undefined FUN_00db558c;
undefined FUN_00db57cc;
undefined FUN_00db57fc;
undefined FUN_00db576c;
undefined FUN_00db579c;
undefined DAT_01bd4dd4;
undefined DAT_01bd4dd9;
undefined DAT_01bd4dde;
undefined DAT_01bd4de3;
undefined DAT_01bd4de8;
undefined DAT_01bd4ded;
undefined *PTR_FUN_0281fb78;
undefined FUN_00db611c;
undefined FUN_00cfc020;
undefined FUN_00db6608;
float DAT_031b0360;
float DAT_031b0420;
undefined FUN_00db6838;
undefined FUN_00db67d0;
undefined FUN_00db6eec;
undefined FUN_00db73fc;
undefined FUN_00db7474;
undefined FUN_00db77ec;
pointer PTR_s_Sound_Ardan_GutPunch_2_02bee928;
undefined *PTR_s_Sound_Rona_Impact_1_02bee930;
undefined *PTR_s_Sound_Phinn_Grunt_001_01_02bee958;
undefined *PTR_s_Sound_Rona_Impact_1_02bee978;
pointer PTR_s_Sound_Ardan_GutPunch_1_02bee9a0;
undefined *PTR_s_Sound_Rona_Impact_1_02bee9a8;
undefined FUN_00db80e4;
undefined FUN_00db80f8;
undefined FUN_00db810c;
undefined FUN_00cfbfec;
undefined FUN_00db8814;
undefined FUN_00db8828;
undefined FUN_00db8120;
undefined FUN_00db8164;
undefined FUN_00db883c;
undefined FUN_00db8888;
undefined FUN_00db8b14;
undefined FUN_00db8ea4;
undefined FUN_00db9034;
undefined FUN_00db9020;
undefined FUN_00db91a8;
undefined FUN_00db91bc;
undefined FUN_00db98fc;
undefined FUN_00db9b3c;
undefined FUN_00db9f04;
undefined FUN_00dba2c8;
undefined FUN_00dba71c;
undefined *PTR_FUN_0281fb98;
undefined FUN_00dba934;
undefined FUN_00dbab64;
undefined FUN_00dbab78;
undefined *PTR_FUN_0281fc00;
undefined FUN_00dbb6dc;
undefined FUN_00dbb718;
undefined FUN_00dbb39c;
undefined FUN_00dbb47c;
undefined FUN_00dbb4b8;
undefined FUN_00dbbc94;
undefined *PTR_s_build://Sounds/5v5/SFX/sfx_ghost_02beeab0;
undefined FUN_00dbc9ec;
undefined FUN_00dbe140;
undefined FUN_00dbced8;
undefined FUN_00dbca0c;
undefined FUN_00dbcc50;
undefined FUN_00dbcb74;
float DAT_031b0660;
float DAT_031b05a0;
undefined FUN_00dbd5a4;
undefined FUN_00dbd16c;
undefined FUN_00dbd1c8;
undefined FUN_00dbd1dc;
undefined FUN_00dbd1f0;
undefined FUN_00dbda10;
undefined FUN_00dbdfa8;
undefined FUN_00dbdfbc;
undefined FUN_00dbdfd0;
undefined FUN_00dbdfe8;
undefined FUN_00dbdb3c;
undefined FUN_00dbdffc;
undefined FUN_00dbdb88;
undefined FUN_00dbe010;
undefined FUN_00dbdbd4;
float DAT_031b0804;
undefined DAT_031b0744;
float DAT_031b0800;
float DAT_031b0740;
float DAT_031b0868;
float DAT_031b07a8;
float DAT_031b076c;
float DAT_031b082c;
undefined FUN_00dbe78c;
undefined FUN_00dbeb64;
undefined FUN_00dbe14c;
undefined FUN_00dbe17c;
undefined FUN_00dbe268;
undefined FUN_00dbe400;
undefined FUN_00dbe5bc;
undefined FUN_00dbe680;
undefined FUN_00dbe76c;
undefined FUN_00dbeb70;
undefined FUN_00cf7700;
undefined FUN_00da04a0;
undefined FUN_00da05d0;
undefined FUN_00dbeeec;
undefined FUN_00dc03d8;
undefined FUN_00dc03ec;
undefined FUN_00dc0400;
undefined FUN_00dc0414;
undefined FUN_00dc0938;
undefined FUN_00dc094c;
undefined FUN_00dc0420;
undefined FUN_00dc0960;
undefined FUN_00dc0edc;
undefined *PTR_s_Sound_Grumpjaw_Attack_1_02beeb68;
undefined *PTR_s_Sound_Grumpjaw_Attack_Impact_1_02beeb80;
pointer PTR_s_Sound_Grumpjaw_Crit_02beeba8;
pointer PTR_s_Sound_Grumpjaw_Crit_Impact_02beebb0;
undefined FUN_00cfb760;
pointer PTR_s_Sound_Grumpjaw_Ability_B_Bite_02beebc0;
undefined FUN_00dc1410;
undefined FUN_00dc1424;
undefined FUN_00dc1438;
undefined FUN_00dc1514;
undefined FUN_00dc1a94;
undefined FUN_00dc130c;
undefined FUN_00dc1320;
undefined FUN_00dc13fc;
undefined FUN_00dc1dd4;
undefined FUN_00dc1dc0;
undefined FUN_00dc1de8;
undefined FUN_00dc1e2c;
undefined FUN_00dc2140;
undefined FUN_00dc2154;
undefined FUN_00dc21d4;
undefined FUN_00dc224c;
undefined FUN_00dc2314;
undefined FUN_00dc2168;
undefined FUN_00dc21c0;
undefined FUN_00dc2684;
undefined FUN_00dc27e0;
undefined FUN_00dc31f0;
undefined FUN_00dc2ea8;
undefined FUN_00dc2f10;
undefined FUN_00dc2f68;
undefined FUN_00dc2fbc;
undefined FUN_00dc3674;
undefined FUN_00dc3204;
undefined FUN_00dc3250;
undefined FUN_00dc32b0;
undefined FUN_00dc3634;
undefined FUN_00dc3648;
undefined FUN_00dc3660;
undefined FUN_00dc36d0;
undefined FUN_00dc3a28;
undefined FUN_00dc3a3c;
pointer PTR_s_Sound_Tony_Attack_01_02beec98;
undefined *PTR_s_Sound_Tony_Crit_Attack_02beecb0;
undefined *PTR_s_Sound_Tony_Crit_Impact_02beecc8;
pointer PTR_s_Sound_Tony_Attack_Impact_01_02beece0;
undefined FUN_00dc4004;
undefined FUN_00dc3ff0;
float DAT_031b0a20;
float DAT_031b0960;
undefined FUN_00dc4018;
undefined FUN_00dc43d4;
undefined FUN_00dc4718;
undefined FUN_00dc4b8c;
undefined FUN_00dc4ba0;
undefined FUN_00dc4c8c;
undefined FUN_00dc505c;
undefined FUN_00dc5070;
undefined FUN_00dc5084;
undefined FUN_00dc5104;
undefined FUN_00dc56b4;
undefined FUN_00dc56c8;
undefined FUN_00dc56dc;
undefined FUN_00dc56f0;
undefined FUN_00dc5098;
undefined FUN_00dc50f0;
undefined FUN_00dc5714;
undefined *PTR_s_Sound_Reza_Basic_Attack_01_02beed48;
undefined *PTR_s_Sound_Reza_Impacts_01_02beed68;
pointer PTR_s_Sound_Reza_Crit_Attack_02beed60;
pointer PTR_s_Sound_Reza_Crit_Impact_02beed80;
undefined FUN_00dc5cc4;
undefined FUN_00dc5ce4;
undefined FUN_00dc5ffc;
undefined FUN_00dc6010;
undefined FUN_00dc66d4;
undefined FUN_00dc5cd8;
undefined FUN_00dc6670;
undefined FUN_00dc6684;
undefined FUN_00dc6698;
undefined FUN_00dc66ac;
undefined FUN_00dc66c0;
undefined FUN_00dc6024;
undefined FUN_00dc6080;
undefined FUN_00dc61d8;
undefined FUN_00dc627c;
float DAT_031b0bf4;
undefined DAT_031b0b30;
undefined FUN_00dc6784;
undefined FUN_00dc67c4;
undefined FUN_00dc6a9c;
undefined FUN_00dc6b38;
undefined *PTR_s_Sound_Idris_Attack_Impact_1_02beedd8;
undefined *PTR_s_Sound_Idris_Crit_Impact_1_02beee00;
pointer PTR_s_Sound_Idris_Ability_B_Impact_1_02beee20;
undefined FUN_00dc6968;
undefined FUN_00dc761c;
undefined FUN_00dc7630;
undefined FUN_00dc7644;
undefined FUN_00cfc7e4;
undefined FUN_00dc73d4;
undefined FUN_00dc7428;
undefined FUN_00dc7434;
undefined FUN_00dc744c;
undefined FUN_00dc7818;
undefined FUN_00dc6b80;
undefined FUN_00dc7a0c;
undefined FUN_00dc7a38;
undefined FUN_00dc7a74;
pointer PTR_s_Buff_Idris_C_AttachedEnemy_02bf0940;
pointer PTR_s_Buff_Idris_C_AttachedAlly_02bf0948;
undefined FUN_00dc7d0c;
undefined FUN_00dc7ec0;
undefined FUN_00dc817c;
undefined FUN_00dc820c;
undefined FUN_00dc8250;
undefined FUN_00dc8294;
undefined FUN_00dc8620;
undefined FUN_00dc8634;
undefined FUN_00dc8190;
undefined FUN_00dc8d48;
undefined FUN_00dc8d5c;
undefined FUN_00dc8eac;
undefined FUN_00dc8ec0;
undefined FUN_00dc8c10;
undefined FUN_00dc8c60;
undefined FUN_00dc8c74;
undefined FUN_00dc8c84;
undefined FUN_00dc94c0;
undefined FUN_00dc9344;
undefined FUN_00dc988c;
undefined FUN_00dc9a08;
undefined FUN_00dc9b8c;
undefined FUN_00cfbcdc;
float DAT_031b0df0;
float DAT_031b0d30;
float DAT_031b0de0;
float DAT_031b0d20;
undefined FUN_00dca2ec;
undefined FUN_00dca4cc;
undefined FUN_00dca988;
undefined FUN_00dcafd8;
undefined FUN_00dca364;
undefined FUN_00dcb77c;
undefined FUN_00dcb0c0;
undefined FUN_00dca454;
undefined FUN_00dcc16c;
undefined FUN_00dcc2ec;
undefined FUN_00dcc730;
undefined FUN_00dcc6ec;
undefined FUN_00dcc9ac;
undefined FUN_00dccb10;
undefined FUN_00dcce10;
undefined FUN_00dccb9c;
undefined FUN_00dccbdc;
undefined FUN_00dcddc4;
undefined FUN_00dcce24;
undefined FUN_00dccf28;
undefined FUN_00dccf8c;
undefined FUN_00dccfa0;
undefined FUN_00dccfb4;
undefined FUN_00dcd47c;
undefined FUN_00dcddd8;
undefined FUN_00dcde6c;
undefined FUN_00dcdf00;
undefined FUN_00dcdf94;
undefined FUN_00dcdff8;
float DAT_031b1170;
float DAT_031b10b0;
undefined FUN_00dced0c;
undefined FUN_00dceaa8;
undefined FUN_00dcec44;
undefined FUN_00dcf4a8;
undefined FUN_00dcf3d8;
undefined FUN_00dcf3ec;
undefined FUN_00dcf454;
undefined FUN_00dcf468;
undefined FUN_00dcf480;
undefined FUN_00dcf4bc;
undefined FUN_00dcf4c8;
undefined FUN_00dcf4e4;
undefined FUN_00dcf588;
undefined FUN_00dcffc8;
float DAT_031b12f0;
float DAT_031b1230;
undefined FUN_00dd0608;
undefined *PTR_s_build://Sounds/Kraken.assetbundl_02bef040;
float DAT_031b14d0;
float DAT_031b1410;
undefined FUN_00dd22e4;
undefined FUN_00dd23e4;
undefined FUN_00dd2054;
undefined FUN_00dd26f4;
undefined FUN_00dd27d4;
undefined FUN_00dd27e8;
float DAT_031b1670;
float DAT_031b15b0;
undefined FUN_00dd3138;
undefined FUN_00dd3570;
undefined FUN_00dd2e50;
undefined FUN_00dd2e74;
undefined FUN_00dd2e84;
undefined FUN_00dd3010;
undefined FUN_00dd30a4;
undefined *PTR_s_Sound_Lance_Attack_1_02bef0d8;
pointer PTR_s_Sound_Lance_Quick_Attack_02bef108;
undefined FUN_00dd3668;
float DAT_02bef110;
undefined FUN_00dd3b08;
undefined4 DAT_02bef110;
undefined FUN_00dd3b1c;
undefined FUN_00dd4098;
undefined FUN_00dd3834;
undefined thunk_FUN_00dd367c;
undefined FUN_00dd384c;
undefined FUN_00dd3994;
undefined FUN_00dd39d8;
undefined FUN_00dd39e8;
undefined FUN_00dd3a8c;
undefined FUN_00dd47c8;
undefined FUN_00dd40ac;
undefined FUN_00dd47a0;
undefined FUN_00dd47b4;
undefined FUN_00dd47dc;
undefined FUN_00dd4834;
undefined FUN_00dd4848;
undefined FUN_00dd4d2c;
float DAT_031b17f0;
float DAT_031b1730;
float DAT_031b1850;
float DAT_031b1790;
float DAT_031b17f4;
float DAT_031b1734;
undefined FUN_00dd4d50;
undefined FUN_00dd4e8c;
float DAT_031b18fc;
float DAT_031b19bc;
undefined FUN_00dd58ac;
undefined FUN_00dd5b60;
undefined FUN_00dd57b4;
undefined FUN_00dd58a0;
undefined FUN_00dd5ccc;
undefined FUN_00dd6060;
undefined FUN_00dd6074;
undefined FUN_00dd6088;
undefined FUN_00dd609c;
undefined FUN_00dd60b0;
undefined FUN_00dd61e8;
undefined FUN_00dd62bc;
undefined FUN_00dd6414;
undefined FUN_00dd6774;
undefined FUN_00dd6788;
undefined FUN_00dd679c;
undefined FUN_00dd6d14;
undefined FUN_00dd6e9c;
undefined FUN_00dd6fa4;
undefined FUN_00dd7300;
undefined FUN_00dd7488;
undefined FUN_00dd76d0;
undefined FUN_00dd7930;
undefined FUN_00dd7940;
undefined FUN_00dd7d6c;
undefined FUN_00dd80bc;
undefined FUN_00dd8ad4;
undefined FUN_00dd90a4;
undefined FUN_00dd90b8;
undefined FUN_00dd90cc;
undefined FUN_00dd8418;
undefined FUN_00dd84b8;
undefined FUN_00dd8818;
undefined FUN_00dd8848;
undefined FUN_00dd8884;
undefined FUN_00dd89e0;
undefined FUN_00dd9158;
undefined FUN_00dd94a4;
undefined FUN_00dd95ec;
undefined FUN_00dd98dc;
undefined FUN_00dd98f0;
undefined FUN_00dd9904;
undefined FUN_00dd9974;
undefined FUN_00dd9988;
undefined FUN_00dd999c;
undefined FUN_00dda070;
undefined FUN_00dda048;
undefined FUN_00dda05c;
undefined FUN_00dda91c;
undefined FUN_00dda084;
undefined FUN_00dda930;
undefined FUN_00dda134;
undefined FUN_00dda28c;
undefined FUN_00dda488;
undefined FUN_00dda554;
undefined FUN_00dda908;
undefined FUN_00ddb0d4;
undefined FUN_00ddb0e8;
undefined FUN_00ddb12c;
undefined FUN_00ddb3c8;
undefined FUN_00ddb08c;
undefined FUN_00ddb3dc;
undefined FUN_00ddb5f8;
undefined FUN_00dda944;
undefined FUN_00ddbb08;
undefined FUN_00ddc064;
undefined FUN_00ddc1fc;
undefined FUN_00ddcbec;
undefined FUN_00ddc2ac;
undefined FUN_00ddcc00;
undefined FUN_00ddc440;
undefined FUN_00ddc60c;
undefined FUN_00ddc6d8;
undefined FUN_00ddcbd8;
undefined *PTR_FUN_0281fc28;
undefined FUN_00ddcd38;
undefined *PTR_s_Sound_Reim_Basic_Attack_1_02bef300;
undefined *PTR_s_Sound_Reim_Basic_Impact_1_02bef318;
undefined *PTR_s_Sound_Reim_Crit_Attack_1_02bef340;
undefined *PTR_s_Sound_Reim_Crit_Impact_1_02bef358;
undefined FUN_00ddd1cc;
undefined FUN_00ddd430;
undefined FUN_00ddd444;
undefined FUN_00ddd1e0;
undefined FUN_00ddd670;
undefined1 DAT_031b1b00;
undefined4 DAT_031b1af8;
undefined FUN_00ddd828;
undefined FUN_00ddd684;
undefined FUN_00ddd710;
undefined FUN_00ddd79c;
undefined FUN_00dddef4;
undefined FUN_00dde238;
undefined *PTR_s_Sound_Rona_BasicAttack_1_02bef3c8;
undefined *PTR_s_Sound_Rona_AltAttack_1_02bef3e8;
undefined *PTR_s_Sound_Rona_CritAttack_1_02bef408;
undefined FUN_00dde6e0;
undefined FUN_00dde724;
undefined FUN_00dde738;
undefined FUN_00ddea7c;
undefined FUN_00ddedb4;
undefined FUN_00ddedc8;
undefined FUN_00ddeddc;
undefined FUN_00ddedf0;
undefined FUN_00ddee04;
undefined FUN_00ddee18;
undefined FUN_00ddee2c;
undefined FUN_00ddeef0;
undefined FUN_00ddefcc;
undefined FUN_00ddf0b4;
undefined FUN_00ddf3dc;
undefined FUN_00ddf468;
undefined FUN_00ddfaa8;
undefined FUN_00ddf830;
undefined FUN_00ddf844;
undefined FUN_00ddfc18;
undefined FUN_00ddfdac;
undefined FUN_00ddfdc0;
undefined FUN_00ddfed4;
undefined FUN_00ddff68;
undefined FUN_00de010c;
undefined FUN_00ddfec8;
undefined FUN_00de08a8;
undefined FUN_00de08bc;
undefined FUN_00de08d0;
undefined FUN_00de051c;
undefined FUN_00de0a2c;
undefined FUN_00de0a54;
undefined FUN_00de0bd8;
undefined FUN_00de0c9c;
undefined FUN_00de0cd4;
undefined FUN_00de0d38;
undefined FUN_00de1924;
undefined FUN_00de1960;
undefined FUN_00de21c0;
undefined FUN_00cfbdbc;
undefined FUN_00de24b4;
undefined FUN_00de329c;
undefined FUN_00de3304;
undefined FUN_00de3310;
undefined FUN_00de251c;
undefined FUN_00de2660;
undefined FUN_00de269c;
undefined FUN_00de28bc;
undefined FUN_00de29b8;
undefined FUN_00de29cc;
undefined FUN_00de2d50;
undefined FUN_00de2de0;
undefined FUN_00de2e98;
undefined FUN_00de33e8;
undefined FUN_00de3520;
float DAT_031b1cf0;
undefined DAT_031b1c30;
undefined FUN_00de427c;
undefined FUN_00de3f38;
undefined FUN_00de4270;
undefined FUN_00de4288;
undefined FUN_00de45d8;
undefined FUN_00de461c;
undefined FUN_00de4630;
undefined FUN_00de495c;
undefined FUN_00de4924;
float DAT_031b1d20;
undefined DAT_031b1c60;
undefined FUN_00de5354;
undefined FUN_00de4f9c;
undefined FUN_00de4fd8;
undefined FUN_00de5018;
float DAT_031b1dd0;
float DAT_031b1e90;
undefined FUN_00de5c08;
undefined FUN_00de702c;
undefined FUN_00de7058;
undefined FUN_00de7c40;
undefined FUN_00de7cc8;
undefined FUN_00de7cd0;
undefined FUN_00de7d58;
undefined FUN_00de7de8;
undefined FUN_00de7d60;
undefined FUN_00de7df0;
undefined FUN_00de7e78;
undefined FUN_00de7e80;
undefined FUN_00de7f0c;
undefined FUN_00de7f18;
undefined FUN_00de7fa4;
undefined FUN_00de803c;
undefined FUN_00de7fb0;
float DAT_031b20a0;
undefined DAT_031b1fe0;
undefined1 DAT_031b1f80;
undefined4 DAT_031b1f7c;
undefined *PTR_s_lastAttackedGuid_02bf1210;
undefined *PTR_s_lastAttackedTime_02bf1218;
undefined FUN_00de8594;
undefined FUN_00de83c4;
undefined FUN_00de8bc4;
undefined FUN_00de8430;
undefined FUN_00de8e28;
undefined FUN_00de8460;
undefined FUN_00de8474;
undefined FUN_00de92c0;
undefined FUN_00de92d4;
undefined FUN_00e6047c;
float DAT_031b2220;
undefined DAT_031b2160;
undefined FUN_00de9a68;
undefined FUN_00de9a8c;
undefined FUN_00de9ba4;
undefined FUN_00de9cac;
undefined FUN_00de9cc0;
undefined FUN_00dea094;
undefined FUN_00dea0a8;
undefined FUN_00dea544;
undefined FUN_00dea0bc;
undefined FUN_00dea124;
undefined FUN_00dea530;
undefined FUN_00dea558;
undefined FUN_00dea56c;
undefined FUN_00dea7d0;
undefined FUN_00dea7e4;
undefined FUN_00dea7f8;
undefined FUN_00deac6c;
undefined FUN_00deac80;
undefined FUN_00deac94;
undefined FUN_00dea80c;
undefined FUN_00deb0a0;
undefined FUN_00deb35c;
undefined FUN_00deb584;
undefined FUN_00deb7f0;
undefined FUN_00deb804;
undefined FUN_00deb81c;
undefined FUN_00deb830;
float DAT_031b236c;
float DAT_031b242c;
undefined FUN_00deb9b4;
undefined FUN_00debd6c;
undefined FUN_00debda0;
undefined FUN_00debdd0;
undefined FUN_00dec1c0;
undefined FUN_00dec2d0;
undefined FUN_00dec410;
undefined FUN_00dec45c;
undefined FUN_00decb84;
undefined FUN_00dec670;
undefined FUN_00deb9a0;
undefined FUN_00dec67c;
undefined FUN_00dec72c;
undefined FUN_00dec7dc;
undefined FUN_00decf3c;
undefined FUN_00decf50;
undefined FUN_00decf64;
undefined FUN_00ded0d4;
undefined FUN_00ded0f8;
undefined FUN_00ded1f4;
undefined FUN_00ded4b4;
undefined FUN_00cf2ed4;
undefined FUN_00ded598;
undefined FUN_00ded74c;
undefined FUN_00dedc98;
undefined FUN_00dee018;
pointer PTR_s_Sound_Kensei_Default_Attack_01_02bef808;
undefined *PTR_s_Sound_Kensei_Default_Attack_01_02bef820;
pointer PTR_s_Sound_Kensei_Default_Attack_Hit__02bef838;
undefined *PTR_s_Sound_Kensei_Default_Attack_Hit__02bef850;
undefined FUN_00deeab8;
undefined FUN_00deeacc;
undefined FUN_00deeae0;
undefined FUN_00deea90;
undefined FUN_00deeaa4;
undefined *PTR_s_Sound_Kensei_Default_Attack_Hit__02bef838;
undefined *PTR_s_Sound_Kensei_Default_Attack_Hit__02bef840;
undefined *PTR_s_Sound_Kensei_Default_Attack_Hit__02bef848;
undefined FUN_00deef28;
undefined FUN_00deef3c;
undefined FUN_00deef50;
undefined FUN_00deef64;
undefined FUN_00deef7c;
undefined FUN_00deef90;
undefined FUN_00deefc0;
undefined FUN_00def42c;
undefined FUN_00def7f8;
undefined FUN_00defc3c;
undefined FUN_00defc50;
undefined FUN_00defc64;
undefined FUN_00def88c;
undefined FUN_00defdf4;
undefined FUN_00df0270;
undefined FUN_00df0284;
undefined FUN_00df0298;
undefined FUN_00df02ac;
undefined FUN_00df07ac;
undefined FUN_00df0954;
undefined FUN_00df0af4;
undefined FUN_00df0b08;
undefined FUN_00df0bb8;
undefined FUN_00df0c80;
undefined FUN_00df127c;
undefined FUN_00df1a18;
undefined FUN_00df1a2c;
undefined FUN_00df1a40;
undefined FUN_00df1a54;
undefined FUN_00df1db0;
undefined FUN_00df1dc4;
undefined FUN_00df20c0;
undefined FUN_00df21c4;
undefined FUN_00df23fc;
undefined FUN_00df2894;
undefined FUN_00df28bc;
undefined FUN_00df2c10;
undefined FUN_00df2c24;
undefined FUN_00df2f40;
undefined FUN_00df368c;
undefined FUN_00df36a0;
undefined FUN_00df37fc;
undefined FUN_00df383c;
undefined FUN_00df3878;
undefined FUN_00df36c8;
undefined FUN_00df38b8;
undefined FUN_00df3708;
undefined FUN_00df3744;
undefined FUN_00df3ed4;
undefined FUN_00df377c;
undefined FUN_00df37bc;
undefined FUN_00df4084;
undefined FUN_00df3ee8;
undefined FUN_00df4570;
undefined FUN_00df4758;
undefined FUN_00df4858;
undefined FUN_00df4974;
undefined FUN_00df4f4c;
undefined FUN_00df4584;
undefined FUN_00df45ac;
undefined FUN_00df541c;
undefined FUN_00df5444;
float DAT_031b26b0;
float DAT_031b25f0;
undefined FUN_00df5b54;
undefined FUN_00df5ef4;
undefined FUN_00df60a8;
undefined FUN_00df6510;
undefined FUN_00df6804;
undefined FUN_00df68f8;
undefined FUN_00df6d40;
undefined FUN_00df6708;
undefined FUN_00df6f0c;
float DAT_031b28d8;
float DAT_031b2818;
undefined FUN_00df72f4;
undefined FUN_00cfc7c0;
undefined DAT_03218f7c;
undefined FUN_00df83b4;
undefined FUN_00df7fcc;
undefined FUN_00df8144;
undefined FUN_00df8208;
undefined FUN_00df89bc;
undefined FUN_00df8cd0;
undefined FUN_00df8928;
undefined FUN_00df8934;
undefined FUN_00df8964;
undefined FUN_00df8990;
undefined FUN_00df9548;
undefined FUN_00df9554;
undefined FUN_00df95ac;
undefined FUN_00df9884;
undefined FUN_00df99f8;
undefined FUN_00df9a0c;
undefined FUN_00df9a20;
undefined FUN_00df9d00;
undefined FUN_00df9cf4;
undefined FUN_00dfa034;
undefined FUN_00dfa3e8;
undefined FUN_00dfa40c;
undefined FUN_00dfa444;
undefined FUN_00dfa4ac;
undefined FUN_00dfa0ac;
undefined FUN_00dfa4fc;
undefined FUN_00dfa540;
undefined FUN_00dfa134;
undefined FUN_00dfa1c0;
undefined FUN_00dfa1e4;
undefined FUN_00dfa244;
undefined FUN_00dfa2d0;
undefined FUN_00dfa35c;
undefined *PTR_FUN_0281fc50;
undefined FUN_00d998d4;
pointer PTR_s_Sound_Inara_Default_Attack_01_02befbf8;
pointer PTR_s_Sound_Inara_Crit_Attack_01_02befc10;
pointer PTR_s_Sound_Inara_Default_Attack_Hit_0_02befc20;
undefined *PTR_s_Sound_Inara_Crit_Attack_Hit_01_02befc30;
undefined FUN_00dfb168;
undefined FUN_00dfb180;
undefined FUN_00dfb524;
undefined FUN_00dfb538;
undefined FUN_00dfbaa8;
undefined FUN_00dfbabc;
undefined FUN_00dfbad0;
undefined FUN_00dfbae4;
undefined FUN_00dfbaf8;
undefined FUN_00dfb550;
undefined FUN_00dfbce0;
undefined FUN_00dfbcf4;
undefined FUN_00dfbd08;
float DAT_031b2c00;
undefined DAT_031b2b40;
undefined FUN_00dfbfcc;
undefined FUN_00dfbfdc;
undefined FUN_00dfc168;
float DAT_02befc88;
undefined4 DAT_02befc88;
undefined FUN_00dfc544;
undefined FUN_00dfcbac;
undefined thunk_FUN_00dfc38c;
undefined FUN_00dfcbc0;
undefined FUN_00dfc55c;
undefined FUN_00dfc6a4;
undefined FUN_00dfc6e8;
undefined FUN_00dfc6f8;
undefined FUN_00dfc79c;
undefined FUN_00dfce5c;
undefined FUN_00dfce70;
undefined FUN_00dfce84;
undefined FUN_00dfd024;
pointer PTR_s_Sound_Sanfeng_Default_Attack_01_02befcb0;
undefined *PTR_s_Sound_Sanfeng_Crit_Attack_01_02befcc8;
pointer PTR_s_Sound_Sanfeng_Default_Impact_01_02befce0;
undefined *PTR_s_Sound_Sanfeng_Crit_Impact_01_02befcf8;
undefined FUN_00dfd644;
undefined FUN_00dfd658;
undefined FUN_00dfd624;
undefined FUN_00dfd638;
undefined FUN_00dfdc40;
undefined FUN_00dfe154;
undefined FUN_00dfdc54;
undefined FUN_00dfdd00;
undefined FUN_00dfe140;
undefined FUN_00dfe19c;
undefined FUN_00dfeb4c;
undefined FUN_00dfeb60;
pointer PTR_s_Sound_Leo_Default_Attack_01_02befd78;
undefined *PTR_s_Sound_Leo_Crit_Attack_01_02befd90;
undefined FUN_00dff3bc;
undefined FUN_00dff3d0;
undefined FUN_00dff3e4;
undefined FUN_00dff7d4;
undefined FUN_00dff7e8;
undefined FUN_00dff7fc;
undefined FUN_00dff810;
undefined FUN_00dffc68;
undefined FUN_00dffc28;
undefined FUN_00dffc3c;
undefined FUN_00dffc50;
undefined FUN_00e00564;
undefined FUN_00e00634;
undefined FUN_00e00b0c;
undefined FUN_00e00e7c;
undefined FUN_00e0178c;
undefined FUN_00e017a4;
undefined FUN_00e01764;
undefined FUN_00e01778;
undefined FUN_00e0190c;
pointer PTR_s_Sound_Miho_Default_Attack_01_02befed8;
undefined *PTR_s_Sound_Miho_Crit_Attack_01_02befef0;
pointer PTR_s_Sound_Miho_Default_Impact_01_02beff08;
undefined *PTR_s_Sound_Miho_Crit_Impact_01_02beff20;
undefined FUN_00e02e18;
undefined FUN_00e02df0;
undefined DAT_01be0af8;
undefined DAT_01be0afd;
undefined DAT_01be0b02;
undefined DAT_01be0b07;
undefined DAT_01be0b20;
undefined FUN_00e03fa8;
undefined FUN_00e04468;
undefined FUN_00e03d08;
undefined FUN_00e0447c;
undefined FUN_00e051bc;
undefined FUN_00e055cc;
undefined FUN_00e05c44;
undefined FUN_00e06008;
pointer PTR_s_Sound_Amael_Basic_Attack_1_02bf0010;
pointer PTR_s_Sound_Amael_Crit_Attack_01_02bf0028;
pointer PTR_s_Sound_Amael_Basic_Attack_Hit_01_02bf0038;
undefined *PTR_s_Sound_Amael_Crit_Attack_Hit_01_02bf0050;
undefined FUN_00e07128;
undefined FUN_00e06c48;
undefined FUN_00e074fc;
undefined FUN_00e06cf0;
undefined FUN_00e06df8;
undefined FUN_00e06c20;
undefined FUN_00e074e8;
undefined FUN_00e07ae8;
undefined FUN_00e06f68;
undefined FUN_00e07afc;
undefined FUN_00e07b10;
undefined FUN_00e07b24;
undefined FUN_00e07b44;
undefined FUN_00e0893c;
pointer PTR_s_Sound_Shin_Basic_Attack_1_02bf00d0;
pointer PTR_s_Sound_Shin_Crit_Attack_1_02bf00e8;
pointer PTR_s_Sound_Shin_Attack_Impact_1_02bf00f8;
undefined *PTR_s_Sound_Shin_Crit_Attack_Impact_1_02bf0108;
undefined FUN_00e09778;
undefined FUN_00e097a0;
undefined FUN_00e0a3dc;
undefined FUN_00e0ad4c;
undefined FUN_00e0a854;
undefined8 DAT_031b2e18;
undefined8 DAT_031b2e28;
float DAT_031b817c;
float DAT_031b80bc;
float DAT_031b8188;
undefined DAT_031b80c4;
undefined FUN_00e0be60;
undefined FUN_00e0c56c;
undefined FUN_00e0c578;
undefined FUN_00e0c5e4;
undefined FUN_00e0c800;
undefined FUN_00e0c96c;
float DAT_031b831c;
float DAT_031b825c;
float DAT_031b83b0;
float DAT_031b82f0;
undefined FUN_00e0cecc;
undefined FUN_00e0c9b0;
undefined FUN_00e0d05c;
undefined FUN_00e0d0a8;
undefined FUN_00e0ce24;
float DAT_031b83c0;
float DAT_031b8300;
float DAT_031b8310;
float DAT_031b8250;
float DAT_031b83bc;
undefined DAT_031b82f8;
undefined FUN_00e0d334;
undefined FUN_00e0d608;
int DAT_031afb98;
undefined FUN_00e0d980;
undefined FUN_00e0d9fc;
undefined FUN_00e0da68;
undefined FUN_00e0db68;
undefined FUN_00e0dc4c;
undefined FUN_00e0e014;
undefined FUN_00e0e028;
undefined FUN_00e0e0d4;
undefined FUN_00e0e10c;
undefined *PTR_s_onBeforeApplyHealName_02bed620;
undefined FUN_00e0e170;
undefined FUN_00e0e1ec;
undefined FUN_00e0e7d4;
int DAT_031afb94;
undefined FUN_00e0e820;
undefined FUN_00e0e9d8;
undefined FUN_00e0ea4c;
undefined FUN_00e0edd4;
undefined FUN_00e0edec;
undefined FUN_00e0ef90;
undefined FUN_00e0efa4;
float DAT_031b83f0;
float DAT_031b84b0;
undefined FUN_00e0f3ec;
undefined FUN_00e0f57c;
float DAT_031b8550;
float DAT_031b8490;
float DAT_031b8680;
float DAT_031b85c0;
int DAT_031afd40;
undefined1 DAT_031b8588;
undefined4 DAT_031b8580;
float DAT_031b8688;
float DAT_031b85c8;
float DAT_031b868c;
float DAT_031b85cc;
undefined FUN_00e10308;
undefined FUN_00e10514;
undefined FUN_00e1081c;
undefined FUN_00e100d4;
undefined FUN_00e109c4;
undefined FUN_00e10adc;
undefined *PTR_s_onPostCalculateAttackName_02bed5f0;
undefined FUN_00e11330;
undefined FUN_00e1149c;
undefined FUN_00e11664;
undefined *PTR_FUN_0281f4d8;
float DAT_031b8844;
undefined DAT_031b8780;
float DAT_031b88d0;
float DAT_031b8810;
undefined FUN_00e11de8;
undefined FUN_00e120d8;
undefined FUN_00e122a4;
undefined FUN_00e126f4;
undefined FUN_00e12c50;
undefined FUN_00d4a7a0;
undefined FUN_00e122b8;
undefined FUN_00e12604;
undefined FUN_00e1267c;
undefined FUN_00e1275c;
undefined FUN_00e12a50;
undefined FUN_00e12da0;
undefined FUN_00d98d10;
undefined FUN_00e1320c;
undefined FUN_00e133fc;
undefined FUN_00e136c0;
float DAT_031b89f4;
undefined DAT_031b8930;
undefined FUN_00e13ae4;
undefined FUN_00e13564;
float DAT_031b8b80;
float DAT_031b8ac0;
float DAT_031b8b88;
float DAT_031b8ac8;
undefined FUN_00e13e44;
undefined FUN_00e13f20;
undefined FUN_00e13f90;
undefined FUN_00e143c4;
undefined *PTR_s_Effect_Blackfeather_Stack_Min1_0281fc68;
undefined *PTR_s_Effect_Blackfeather_HeartThrob_1_0281fc78;
float DAT_031b8dd0;
float DAT_031b8d10;
float DAT_031b8d44;
undefined DAT_031b8c80;
undefined FUN_00e14688;
undefined FUN_00e146ec;
undefined FUN_00e14910;
undefined FUN_00d98c78;
undefined FUN_00e151c4;
undefined FUN_00e1523c;
float DAT_031b8f20;
float DAT_031b8e60;
float DAT_031b8f28;
float DAT_031b8e68;
undefined FUN_00e152fc;
undefined FUN_00e155dc;
undefined FUN_00e17314;
undefined FUN_00e15d30;
undefined FUN_00e15d3c;
undefined FUN_00e16148;
undefined FUN_00e16188;
undefined FUN_00e161fc;
undefined FUN_00e16224;
undefined FUN_00e1627c;
undefined FUN_00e16508;
float DAT_031b8fc0;
float DAT_031b8f00;
undefined FUN_00e16e94;
undefined FUN_00e17040;
undefined FUN_00e17168;
undefined FUN_00e173f0;
undefined FUN_00e17438;
undefined FUN_00e17480;
undefined FUN_00e176fc;
undefined FUN_00e17708;
undefined FUN_00e17a48;
undefined FUN_00e17c58;
undefined FUN_00e17d70;
undefined FUN_00e17e94;
undefined FUN_00e17f7c;
undefined FUN_00e18354;
undefined *PTR_s_startTime_02bf04f8;
undefined FUN_00e18690;
undefined FUN_00e186a4;
undefined FUN_00e17f90;
undefined FUN_00e18240;
undefined FUN_00e18084;
undefined FUN_00e18158;
undefined FUN_00e1879c;
undefined FUN_00e18dd8;
undefined *PTR_FUN_0281f488;
float DAT_031b9280;
float DAT_031b91c0;
undefined FUN_00e1975c;
undefined FUN_00e197b8;
int DAT_031bcc00;
int DAT_031bcdd8;
int DAT_031bc740;
int DAT_031bcc04;
undefined FUN_00e19ae4;
undefined FUN_00e19d6c;
undefined FUN_00e19e58;
undefined FUN_00e19e6c;
undefined FUN_00e1a5dc;
undefined *PTR_s_grace_period_02bf05a8;
undefined FUN_00e1a888;
undefined FUN_00e1a6e8;
undefined FUN_00e1a81c;
float DAT_031b95d0;
float DAT_031b9510;
undefined FUN_00e1ae54;
undefined FUN_00e1ae9c;
undefined FUN_00e1b420;
undefined FUN_00e1b778;
undefined FUN_00e1bb24;
undefined FUN_00e1bb3c;
undefined FUN_00e1c038;
undefined FUN_00e1c4d8;
undefined *PTR_s_ChargeTime_02bf0608;
undefined FUN_00e1c734;
undefined FUN_00e1c7dc;
undefined FUN_00e1cab0;
undefined FUN_00e1cabc;
undefined FUN_00e1c5c4;
undefined FUN_00e1c670;
undefined FUN_00e1c700;
undefined FUN_00e1d238;
undefined FUN_00e1d224;
undefined FUN_00e1d24c;
undefined FUN_00e1d48c;
undefined FUN_00e1d6d4;
undefined FUN_00e1d9c4;
float DAT_031b9780;
float DAT_031b96c0;
undefined FUN_00e1dc68;
undefined FUN_00e1dcdc;
float DAT_031b979c;
float DAT_031b96dc;
float DAT_031b97a0;
float DAT_031b96e0;
undefined *PTR_FUN_0281fcb0;
undefined *PTR_FUN_0281fcd8;
float DAT_031b9910;
float DAT_031b9850;
float DAT_031b9858;
float DAT_031b9918;
undefined FUN_00e1edc4;
undefined FUN_00e1f020;
undefined FUN_00e1f08c;
undefined FUN_00e1f370;
undefined FUN_00e1f384;
undefined FUN_00e1f398;
undefined FUN_00e1f3a4;
undefined FUN_00e1f4b0;
undefined FUN_00e1f768;
undefined FUN_00e1f9b8;
undefined FUN_00e1f9cc;
undefined FUN_00e1fa4c;
undefined FUN_00e1fb74;
undefined FUN_00e1fbfc;
undefined FUN_00e1fd38;
undefined FUN_00e1fd64;
undefined FUN_00e1fe5c;
undefined FUN_00e1ff04;
undefined FUN_00e20118;
undefined FUN_00e20144;
undefined FUN_00e202ac;
undefined FUN_00e20438;
undefined FUN_00e20770;
undefined FUN_00e207e0;
undefined FUN_00e20814;
undefined FUN_00e20c60;
undefined FUN_00e20d18;
undefined FUN_00e20d44;
undefined FUN_00e21590;
undefined FUN_00e215d0;
undefined FUN_00e21644;
undefined FUN_00e21664;
undefined FUN_00e218e8;
int DAT_031b08b4;
undefined FUN_00e219f0;
undefined FUN_00e21c90;
undefined FUN_00e220a8;
undefined FUN_00e21ca4;
undefined FUN_00e21d80;
undefined FUN_00e60428;
undefined FUN_00e220bc;
undefined FUN_00e22120;
undefined FUN_00e221e8;
int DAT_031b08bc;
undefined FUN_00e224e8;
float DAT_031b9b60;
float DAT_031b9aa0;
int DAT_031b9bd8;
undefined FUN_00e22d60;
undefined *PTR_s_lastDamager_02bf0798;
undefined FUN_00e23004;
undefined FUN_00e23014;
undefined FUN_00e23070;
undefined FUN_00e2293c;
undefined FUN_00e22988;
undefined FUN_00e22b2c;
undefined FUN_00e22bb4;
undefined FUN_00e22c38;
undefined FUN_00e22c7c;
undefined FUN_00e22ca8;
undefined FUN_00e22eb4;
undefined FUN_00e22f34;
undefined *PTR_FUN_0281fcf0;
undefined8 DAT_031b9be8;
undefined FUN_00e23b00;
undefined FUN_00e23ae8;
undefined FUN_00e23c0c;
undefined FUN_00e23d74;
undefined FUN_00e24290;
undefined *PTR_FUN_0281fe90;
undefined FUN_00e24acc;
undefined FUN_00e24d10;
undefined FUN_00e24d1c;
undefined FUN_00e25028;
undefined FUN_00e251a4;
undefined FUN_00e25360;
undefined FUN_00e25600;
float DAT_031b9f2c;
float DAT_031b9e6c;
undefined FUN_00e257f8;
undefined FUN_00e258c0;
float DAT_031b9f34;
undefined DAT_031b9e70;
undefined FUN_00e25cb4;
undefined FUN_00e25f74;
undefined FUN_00e262a8;
undefined FUN_00e264dc;
undefined FUN_00e264e8;
undefined FUN_00e266c4;
undefined FUN_00e268e0;
undefined FUN_00d98940;
undefined FUN_00e26958;
undefined FUN_00e26bb0;
undefined FUN_00e26f60;
undefined FUN_00e26f98;
undefined FUN_00e26f48;
undefined FUN_00e27238;
float DAT_031ba190;
float DAT_031ba0d0;
undefined FUN_00e273e0;
undefined FUN_00e27574;
undefined FUN_00e276cc;
undefined FUN_00e2795c;
float DAT_031ba100;
float DAT_031ba040;
undefined FUN_00e27bbc;
undefined FUN_00e27ec0;
undefined FUN_00e280ec;
undefined *PTR_s_onApplyDamageName_02bed600;
undefined FUN_00e285a4;
undefined DAT_01be50bc;
undefined FUN_00e289c8;
undefined FUN_00e28a04;
undefined FUN_00e28a18;
undefined FUN_00e28cd0;
undefined DAT_01be50c4;
undefined FUN_00d9b754;
undefined FUN_00e2917c;
undefined DAT_01be50cc;
undefined FUN_00e29294;
undefined *PTR_FUN_0281b448;
undefined *PTR_s_num_charges_02bf09e0;
undefined *PTR_s_pfx_id_02bf09e8;
undefined FUN_00e29458;
undefined FUN_00e29994;
undefined FUN_00e29aa8;
undefined FUN_00e29c10;
undefined FUN_00e29f54;
undefined FUN_00e2a0e4;
undefined FUN_00e2a394;
undefined FUN_00e2a968;
undefined FUN_00e2a97c;
undefined *PTR_FUN_0281fd20;
undefined FUN_00e2acc4;
undefined FUN_00e2aed0;
undefined FUN_00e2b074;
undefined *PTR_s_Bone_LeftThumb_0281fd38;
float DAT_031ba310;
float DAT_031ba250;
undefined DAT_01be5b84;
float DAT_031ba210;
float DAT_031ba2d0;
undefined FUN_00e2b208;
undefined DAT_01be5b8c;
undefined FUN_00e2b0b8;
undefined FUN_00e2ba5c;
float DAT_031ba49c;
float DAT_031ba3dc;
undefined FUN_00e2bc30;
undefined FUN_00e2bcf8;
undefined FUN_00e2c400;
undefined FUN_00e2c328;
undefined *PTR_s_Sound_Lance_Impact_1_02bf0ae8;
pointer PTR_s_Sound_Lance_Crit_Impact_1_02bf0b08;
undefined FUN_00e2cb44;
undefined FUN_00e2cc1c;
undefined FUN_00d483fc;
undefined FUN_00e2d298;
undefined FUN_00e2d518;
undefined FUN_00e2d68c;
undefined1 DAT_031ba570;
undefined4 DAT_031ba568;
undefined FUN_00e2d978;
float DAT_031ba630;
float DAT_031ba6f0;
undefined FUN_00e2ddb0;
undefined FUN_00e2dec4;
undefined FUN_00e2decc;
undefined FUN_00e2ded4;
int DAT_031b18b8;
undefined FUN_00e2e390;
undefined FUN_00e2e3a4;
undefined *PTR_s_portal_cooldown_02bf0bc8;
undefined *PTR_s_pfx_id_02bf0bd0;
undefined FUN_00e2e654;
undefined FUN_00e2e8f4;
undefined FUN_00e2e964;
undefined FUN_00e2ea58;
undefined FUN_00e2eb1c;
undefined FUN_00e2eb68;
undefined FUN_00e2ebb4;
undefined FUN_00e2f274;
undefined FUN_00e2f480;
undefined FUN_00e2f658;
undefined FUN_00e2f60c;
undefined FUN_00e2fe3c;
float DAT_031ba820;
float DAT_031ba760;
undefined FUN_00e2fea0;
undefined FUN_00e303c4;
undefined FUN_00e305bc;
undefined FUN_00e30af8;
undefined *PTR_FUN_0281b3c8;
undefined UNK_01be6736;
undefined FUN_00e3162c;
undefined FUN_00e31654;
undefined FUN_00e316f4;
undefined FUN_00e317a4;
undefined FUN_00e31a10;
undefined FUN_00e31b60;
undefined FUN_00e31b74;
undefined FUN_00e31e30;
undefined FUN_00e31e3c;
undefined FUN_00e3209c;
undefined FUN_00e320a8;
undefined *PTR_s_shownBounceModal_02bf0cc0;
undefined FUN_00e32174;
undefined FUN_00e32268;
undefined FUN_00e3250c;
undefined FUN_00e327c4;
undefined FUN_00e327d8;
undefined FUN_00e32af4;
undefined FUN_00e32f8c;
undefined FUN_00e33030;
float DAT_031baaf0;
float DAT_031baa30;
undefined FUN_00e33618;
float DAT_031baa50;
float DAT_031ba990;
undefined FUN_00e33960;
undefined FUN_00e339e4;
undefined FUN_00e3424c;
undefined FUN_00e34490;
undefined *PTR_FUN_0281b548;
float DAT_031babf0;
float DAT_031bab30;
undefined FUN_00e35108;
undefined FUN_00e35114;
undefined thunk_FUN_00e34968;
undefined FUN_00e34c48;
undefined FUN_00e3519c;
undefined FUN_00e351a8;
undefined FUN_00e354bc;
undefined FUN_00e35aa0;
undefined FUN_00e355c4;
undefined FUN_00e355d8;
undefined FUN_00e35734;
undefined FUN_00e35748;
undefined FUN_00e35b18;
undefined *PTR_s_time_out_of_combat_02bf0e00;
float DAT_031bada0;
float DAT_031bace0;
int DAT_031b1b3c;
int DAT_031b1b30;
float DAT_031bada8;
float DAT_031bace8;
float DAT_031badac;
float DAT_031bacec;
undefined FUN_00e35b2c;
undefined FUN_00e35e30;
undefined FUN_00e363b4;
undefined FUN_00e363c8;
undefined FUN_00e36438;
undefined FUN_00e36dd4;
undefined FUN_00e36ea8;
undefined FUN_00e36c18;
undefined FUN_00e3753c;
undefined *PTR_s_left_pfx_id_02bf0e78;
undefined *PTR_s_right_pfx_id_02bf0e80;
undefined FUN_00e37b00;
undefined FUN_00e3806c;
undefined FUN_00e3824c;
undefined FUN_00d48394;
undefined FUN_00e384a8;
undefined FUN_00e38568;
undefined FUN_00e3869c;
undefined FUN_00e38774;
undefined FUN_00e38f88;
undefined FUN_00e390a0;
undefined1 DAT_031bae90;
float DAT_031bae8c;
undefined FUN_00e392e0;
undefined FUN_00e3944c;
undefined FUN_00e394d0;
undefined FUN_00e394e0;
undefined FUN_00e396bc;
undefined FUN_00e396c8;
undefined FUN_00e3972c;
undefined *PTR_FUN_0281fd98;
float DAT_031bafc0;
float DAT_031baf00;
undefined FUN_00e39fd8;
undefined FUN_00e3a26c;
undefined FUN_00e3a4c8;
undefined FUN_00e3b004;
undefined FUN_00e3a850;
undefined FUN_00e3acac;
undefined FUN_00e3ad48;
undefined FUN_00e3b018;
undefined FUN_00e3b324;
undefined FUN_00e3b8ec;
undefined FUN_00e3bf40;
int DAT_031b1bec;
undefined FUN_00e3d6e4;
undefined FUN_00e3d8a8;
undefined FUN_00e3d914;
undefined FUN_00e3d5cc;
undefined FUN_00e3df6c;
undefined FUN_00e3e038;
undefined FUN_00e3e230;
undefined FUN_00e3e278;
undefined FUN_00e3e37c;
undefined FUN_00d48354;
undefined FUN_00e3e87c;
undefined *PTR_s_Ability02_DashForward_0281fde0;
undefined *PTR_s_Ability02_DashAcross_Stop_0281fe00;
undefined FUN_00e3eee8;
undefined *PTR_s_num_missiles_left_02bf0fa0;
undefined *PTR_s_target_pos_02bf0f98;
undefined FUN_00e3f2a0;
undefined FUN_00e3f41c;
undefined FUN_00e3f498;
undefined FUN_00e3f210;
undefined thunk_FUN_00e3f210;
undefined FUN_00e3f804;
undefined1 DAT_031bb0e8;
undefined8 UNK_031bb0d8;
undefined *PTR_s_num_pfx_spawned_02bf0fa8;
undefined DAT_031bb0c0;
undefined DAT_031bb0d0;
undefined4 DAT_031bb0e0;
undefined8 UNK_031bb0c8;
undefined FUN_00e3fb28;
undefined FUN_00e3ff64;
undefined FUN_00e3ff78;
undefined *PTR_s_Sound_Skye_Ability_C_Hit_1_0281fdb0;
undefined FUN_00e40314;
float DAT_031bb1f0;
float DAT_031bb130;
undefined FUN_00e40938;
undefined FUN_00e40a34;
float DAT_031bb1f8;
float DAT_031bb138;
undefined FUN_00e407dc;
undefined FUN_00e40eb8;
undefined1 DAT_031bb2b8;
undefined4 DAT_031bb2b0;
undefined FUN_00e41750;
undefined FUN_00e41918;
undefined FUN_00e41ae8;
undefined FUN_00e41f6c;
undefined *PTR_s_pBuffVar_Taka_SmokeBombInvisibil_02bf10b8;
undefined FUN_00e4201c;
undefined FUN_00e42690;
undefined FUN_00e427ac;
undefined FUN_00e42a30;
undefined FUN_00e42dd4;
undefined FUN_00e42e38;
undefined FUN_00e42d70;
float DAT_031bb360;
float DAT_031bb420;
undefined FUN_00e42f90;
undefined FUN_00e432f4;
undefined FUN_00e434a0;
undefined FUN_00e43cb0;
undefined FUN_00d44d9c;
float DAT_031bb5c0;
float DAT_031bb500;
undefined FUN_00e44488;
undefined FUN_00e44554;
undefined FUN_00e44ae4;
undefined FUN_00e44dc4;
undefined FUN_00e44af8;
undefined FUN_00e44c90;
undefined FUN_00e44ca4;
undefined FUN_00e44dd4;
float DAT_031bb750;
float DAT_031bb690;
undefined FUN_00e452f8;
undefined FUN_00e4522c;
undefined FUN_00d98cec;
undefined FUN_00e4576c;
undefined FUN_00e45af8;
undefined FUN_00e45780;
undefined FUN_00e45808;
undefined FUN_00e4582c;
undefined FUN_00e458ec;
undefined FUN_00e45b8c;
undefined FUN_00e45fb4;
undefined FUN_00e45ea8;
undefined FUN_00e4658c;
undefined FUN_00e468d4;
undefined FUN_00e4633c;
undefined FUN_00e4659c;
undefined FUN_00e461dc;
undefined FUN_00e46ca0;
undefined FUN_00e60638;
undefined FUN_00e60654;
undefined FUN_00e4628c;
undefined FUN_00e605f8;
undefined FUN_00e46fb4;
undefined FUN_00e46f14;
undefined FUN_00e476a8;
undefined FUN_00e4772c;
undefined FUN_00e476bc;
undefined FUN_00e47590;
undefined FUN_00e47e38;
undefined FUN_00e48114;
undefined FUN_00e48388;
undefined FUN_00e48394;
undefined FUN_00e483a0;
undefined FUN_00e483ac;
undefined FUN_00e4844c;
undefined FUN_00e48b60;
undefined FUN_00e475b0;
undefined FUN_00e4a4f0;
undefined FUN_00e48370;
undefined FUN_00e4837c;
undefined FUN_00e48be4;
undefined FUN_00e48e94;
float DAT_031bbb10;
float DAT_031bba50;
undefined FUN_00e490f4;
float DAT_031bbb18;
float DAT_031bba58;
undefined FUN_00e49278;
undefined FUN_00e492b4;
undefined FUN_00e495a0;
undefined FUN_00e4977c;
undefined FUN_00e495b4;
undefined FUN_00e49698;
undefined FUN_00e4a550;
undefined FUN_00e4a560;
undefined FUN_00e49ab0;
undefined FUN_00e49aec;
float DAT_031bbb24;
undefined DAT_031bba60;
undefined FUN_00e4a1e4;
undefined FUN_00e4a570;
undefined FUN_00e49dd8;
undefined FUN_00e4a228;
undefined FUN_00e4a2d0;
float DAT_031bbc10;
float DAT_031bbcd0;
undefined FUN_00e4a580;
undefined FUN_00e4a7f8;
undefined FUN_00e4a804;
undefined FUN_00e4a9ac;
undefined FUN_00e4a9b8;
undefined FUN_00e4ac9c;
undefined FUN_00e4ab80;
undefined FUN_00e4ae38;
undefined FUN_00e4af50;
undefined FUN_00e4b16c;
undefined FUN_00e4b180;
undefined FUN_00e4b348;
float DAT_031bbed4;
undefined DAT_031bbe10;
undefined FUN_00e4b4fc;
undefined FUN_00e4b6c8;
undefined FUN_00e4b748;
undefined FUN_00e4b7c0;
undefined FUN_00e4bc88;
undefined FUN_00e4bd88;
undefined FUN_00e4bfa0;
undefined FUN_00e4bfb4;
undefined FUN_00e4bfc8;
undefined FUN_00e4c260;
undefined FUN_00e4c274;
undefined FUN_00e4c300;
undefined FUN_00e4c3d4;
undefined FUN_00e4c980;
undefined FUN_00e4cd84;
undefined FUN_00e4d120;
undefined FUN_00e4d288;
undefined FUN_00e4d29c;
undefined UNK_01be9f96;
undefined FUN_00e4d4cc;
undefined FUN_00e4d358;
undefined FUN_00e4d3e0;
undefined *PTR_s_initial_facing_02bf1538;
undefined FUN_00e4dc7c;
undefined FUN_00e4dd30;
undefined FUN_00e4dde4;
undefined FUN_00e4de60;
undefined FUN_00e4e2ec;
undefined FUN_00e4e300;
undefined FUN_00e4e360;
undefined FUN_00e4e5d8;
undefined FUN_00e4e8d8;
undefined FUN_00e4eaa4;
undefined FUN_00e4eb98;
undefined FUN_00e4ee0c;
undefined FUN_00e4f000;
undefined FUN_00e4f188;
undefined FUN_00e4f248;
float DAT_031bc15c;
float DAT_031bc09c;
undefined FUN_00e4f258;
undefined FUN_00e4f518;
undefined FUN_00e4f830;
undefined FUN_00e4f8a8;
undefined FUN_00e4f504;
undefined FUN_00e4f6d8;
undefined FUN_00e4f808;
undefined FUN_00e4fc6c;
undefined FUN_00e4fe38;
undefined FUN_00e4ffcc;
undefined FUN_00e50440;
undefined FUN_00e505ac;
undefined FUN_00e50774;
undefined FUN_00e50994;
undefined FUN_00e50af8;
undefined FUN_00e50b30;
undefined FUN_00e50d14;
undefined FUN_00e50d00;
undefined FUN_00e50ee0;
undefined FUN_00e50ef4;
undefined FUN_00e51034;
undefined FUN_00e51040;
undefined FUN_00e51178;
undefined FUN_00e51184;
undefined FUN_00e511f4;
undefined FUN_00e51264;
undefined FUN_00e5143c;
undefined FUN_00e51500;
undefined FUN_00e51884;
undefined FUN_00e51898;
undefined FUN_00e51d60;
undefined FUN_00e51a8c;
undefined FUN_00e51b38;
undefined FUN_00e51d4c;
undefined FUN_00e51ddc;
float DAT_031bc490;
float DAT_031bc3d0;
undefined FUN_00e51df0;
undefined FUN_00e51fb8;
undefined FUN_00e51fc8;
undefined FUN_00e51fd8;
undefined FUN_00e522ac;
undefined FUN_00d44dd8;
undefined FUN_00e52338;
undefined FUN_00e60450;
undefined FUN_00e52530;
undefined FUN_00e52638;
undefined FUN_00e52728;
undefined FUN_00e52b28;
float DAT_031bc670;
float DAT_031bc5b0;
undefined FUN_00e52ce0;
undefined FUN_00e53128;
undefined FUN_00e5352c;
undefined FUN_00e53630;
undefined FUN_00e53738;
undefined FUN_00e53b88;
undefined FUN_00e53a34;
undefined FUN_00e53a48;
undefined FUN_00e54010;
undefined FUN_00e54080;
undefined FUN_00e5412c;
undefined FUN_00e542b8;
undefined FUN_00e53b98;
undefined *PTR_FUN_0281fe28;
undefined *PTR_FUN_0281fe50;
undefined FUN_00e54958;
undefined FUN_00e549e8;
undefined FUN_00e54c28;
undefined FUN_00e55144;
undefined FUN_00e55158;
undefined FUN_00e54dd8;
undefined FUN_00e551c8;
undefined FUN_00e552d4;
undefined FUN_00e55618;
undefined FUN_00e55624;
undefined FUN_00e55794;
undefined FUN_00e557a0;
undefined *PTR_s_Effect_Miho_Mark_Lvl1_0281fe68;
undefined FUN_00e557ac;
undefined FUN_00e55b60;
undefined FUN_00e55b6c;
undefined FUN_00e55ca0;
float DAT_031bc980;
float DAT_031bc8c0;
float DAT_031bc8f0;
float DAT_031bc830;
undefined FUN_00e55cac;
undefined FUN_00e55f88;
undefined FUN_00e56588;
undefined FUN_00e56a14;
undefined FUN_00e56a28;
float DAT_031bcac0;
float DAT_031bca00;
undefined FUN_00e56d04;
undefined FUN_00e56c90;
float DAT_031bcadc;
float DAT_031bca1c;
float DAT_031bcae0;
float DAT_031bca20;
undefined FUN_00e57518;
undefined FUN_00e5752c;
undefined FUN_00e576a0;
undefined FUN_00e578c8;
undefined FUN_00e578a0;
undefined FUN_00e578b4;
undefined FUN_00e57940;
undefined FUN_00e57a3c;
undefined FUN_00e5812c;
undefined FUN_00e58140;
undefined FUN_00e59ac0;
undefined FUN_00e59b70;
undefined FUN_00e5a880;
float DAT_031bcce0;
float DAT_031bcc20;
undefined FUN_00e5a894;
undefined FUN_00e5ab88;
undefined FUN_00e5ac68;
undefined FUN_00e5ac7c;
undefined FUN_00e5ad14;
undefined FUN_00e5af28;
undefined FUN_00e5af3c;
undefined FUN_00e5b0a0;
undefined FUN_00e5b0b4;
undefined FUN_00e5b4a8;
undefined FUN_00e5b4bc;
undefined FUN_00e5b668;
undefined FUN_00e5b67c;
undefined FUN_00e5bc98;
undefined FUN_00e5be78;
undefined FUN_00e5c07c;
undefined FUN_00e5c110;
undefined FUN_00e5c1a4;
undefined FUN_00e5c40c;
undefined FUN_00e5c47c;
undefined FUN_00e5c8c0;
undefined FUN_00e5c928;
undefined FUN_00e5ce6c;
undefined FUN_00e5ccb0;
undefined FUN_00e5cb50;
undefined *PTR_FUN_0281fed0;
undefined *PTR_FUN_0281ff10;
undefined8 DAT_0313ce08;
undefined *PTR_FUN_02820380;
undefined *PTR_FUN_028203a8;
uint DAT_031a9690;
undefined FUN_00e5e00c;
undefined FUN_00e5e05c;
undefined *PTR_FUN_028203d0;
undefined *PTR_FUN_02820400;
undefined *PTR_FUN_02820458;
undefined *PTR_FUN_02820480;
undefined1 DAT_0320e248;
undefined4 DAT_0320e240;
undefined *PTR_FUN_028204a8;
undefined1 DAT_0320e258;
undefined4 DAT_0320e250;
undefined *PTR_FUN_028204d0;
undefined *PTR_FUN_028204f8;
float DAT_0320e384;
float DAT_0320e2c4;
undefined FUN_00e6085c;
undefined FUN_00e60870;
undefined FUN_00e60884;
undefined FUN_00e60924;
undefined FUN_00e60a00;
undefined FUN_00e60a14;
undefined FUN_00e60aa8;
undefined FUN_00e60b34;
float DAT_0320e4d0;
float DAT_0320e410;
undefined FUN_00e60b48;
undefined FUN_00e60ce0;
undefined FUN_00e60ddc;
undefined FUN_00e60dc8;
undefined FUN_00e60ec4;
undefined FUN_00e60ed8;
undefined FUN_00e60eec;
undefined FUN_00e61020;
undefined FUN_00e61034;
undefined FUN_00e6104c;
undefined FUN_00e611ec;
undefined FUN_00e61394;
undefined FUN_00e613a8;
undefined FUN_00e6136c;
undefined FUN_00e6149c;
undefined FUN_00e614b0;
undefined FUN_00e61558;
undefined FUN_00e61674;
undefined FUN_00e61688;
undefined FUN_00e61764;
undefined FUN_00e61778;
undefined FUN_00e61790;
undefined FUN_00e61910;
undefined FUN_00e622e4;
undefined FUN_00e62428;
undefined FUN_00e6243c;
undefined FUN_00e62450;
undefined FUN_00e62478;
undefined FUN_00e62618;
undefined FUN_00e6262c;
undefined FUN_00e62640;
undefined FUN_00e62708;
undefined FUN_00e6271c;
undefined FUN_00e6053c;
undefined FUN_00e62730;
undefined FUN_00e62990;
undefined FUN_00e629a4;
undefined FUN_00e62a3c;
undefined FUN_00e62b5c;
undefined FUN_00e62c50;
undefined FUN_00e62c64;
undefined FUN_00e62c78;
undefined FUN_00e62e28;
undefined FUN_00e640a0;
undefined FUN_00e640c8;
undefined FUN_00e640dc;
undefined FUN_00e62d48;
undefined FUN_00e64170;
undefined FUN_00e64254;
undefined FUN_00e64268;
float DAT_0320e910;
float DAT_0320e850;
undefined FUN_00e64280;
undefined FUN_00e643f4;
undefined FUN_00e6448c;
undefined FUN_00e64568;
undefined FUN_00e6457c;
int DAT_031b0ca4;
undefined FUN_00e647fc;
undefined FUN_00e64810;
undefined FUN_00e64824;
undefined FUN_00e64838;
undefined FUN_00e64590;
undefined FUN_00e64a24;
undefined FUN_00e64ac4;
undefined FUN_00e64bb8;
undefined FUN_00e64bcc;
undefined FUN_00e64be0;
undefined FUN_00e64cd8;
undefined FUN_00e64e1c;
undefined FUN_00e64e30;
undefined FUN_00e64c48;
undefined FUN_00e64eec;
undefined FUN_00e64f80;
undefined FUN_00e66110;
undefined FUN_00e64f98;
float DAT_0320eb10;
float DAT_0320ea50;
undefined FUN_00e66130;
undefined FUN_00e661c4;
undefined FUN_00e6652c;
undefined FUN_00e66614;
undefined FUN_00e66628;
undefined FUN_00e666c4;
undefined FUN_00e667b0;
undefined FUN_00e667c4;
undefined FUN_00e668c8;
undefined FUN_00e668dc;
undefined FUN_00e669f8;
undefined FUN_00e66a0c;
undefined FUN_00e66a20;
undefined FUN_00e66a48;
undefined FUN_00e66ae4;
undefined FUN_00e66c68;
undefined FUN_00e66c7c;
undefined FUN_00e66c90;
undefined FUN_00e66d90;
undefined FUN_00e66d7c;
undefined FUN_00e66e68;
undefined FUN_00e66e7c;
undefined FUN_00e6702c;
undefined FUN_00e670b8;
undefined FUN_00e671e4;
undefined FUN_00e67270;
undefined FUN_00e67324;
undefined FUN_00e67440;
undefined FUN_00e67454;
undefined FUN_00e67468;
undefined FUN_00e6758c;
undefined FUN_00e675a0;
undefined FUN_00e676f4;
undefined FUN_00e677d4;
undefined FUN_00e678bc;
undefined FUN_00e678d0;
undefined FUN_00e679f0;
undefined FUN_00e67a04;
undefined FUN_00e67a18;
undefined FUN_00e67b00;
undefined FUN_00e67b14;
undefined FUN_00e67bf4;
undefined FUN_00e67c08;
undefined FUN_00e67d50;
undefined FUN_00e67d28;
undefined FUN_00e67d3c;
undefined FUN_00e67de8;
undefined FUN_00e67e88;
undefined FUN_00e67f70;
undefined FUN_00e67f84;
undefined FUN_00e680cc;
undefined FUN_00e680e0;
undefined FUN_00e680f4;
undefined FUN_00e681f0;
undefined FUN_00e681dc;
undefined FUN_00e683a8;
undefined FUN_00e683bc;
undefined FUN_00e683d0;
undefined FUN_00e684ac;
undefined FUN_00e68498;
undefined FUN_00e68540;
undefined FUN_00e68678;
undefined FUN_00e6868c;
undefined FUN_00e68784;
undefined FUN_00e68874;
undefined FUN_00e68888;
undefined FUN_00e68970;
undefined FUN_00e68984;
undefined FUN_00e68a18;
undefined FUN_00e68aa8;
undefined FUN_00e68c00;
undefined FUN_00e68d88;
undefined FUN_00e68d9c;
undefined FUN_00e68db0;
undefined FUN_00e68ec8;
undefined FUN_00e6961c;
undefined FUN_00e68f90;
undefined FUN_00e68ee0;
undefined FUN_00e69858;
undefined FUN_00e69904;
undefined FUN_00e699a0;
undefined FUN_00e69a78;
undefined FUN_00e69a8c;
undefined FUN_00e69b64;
undefined FUN_00e69b78;
undefined FUN_00e69c80;
undefined FUN_00e69c6c;
undefined FUN_00e69d60;
undefined FUN_00e69d74;
undefined FUN_00e69e10;
undefined FUN_00e69efc;
undefined FUN_00e69f10;
undefined FUN_00e6a068;
undefined FUN_00e6a07c;
undefined FUN_00e6a090;
undefined FUN_00e6a190;
undefined FUN_00e6a17c;
undefined8 DAT_0320ede0;
undefined8 DAT_0320ede8;
long DAT_0320ede0;
undefined *DAT_0320ede0;
undefined DAT_0320edf0;
undefined8 *DAT_0320eef0;
undefined DAT_01bee880;
undefined isgraph;
undefined DAT_01bee884;
undefined *PTR_FUN_02bf24b8;
undefined *PTR_FUN_02bf24b0;
undefined *PTR_FUN_02bf24c8;
undefined DAT_0320eef8;
undefined1 DAT_0320ff00;
double DAT_0320fef8;
undefined DAT_01bee8b3;
undefined DAT_01bee8b7;
undefined *PTR_DAT_02bf24a8;
undefined *PTR_s_%Y-%m-%dT%H:%M:%SZ_02bf24a0;
undefined FUN_00e6c38c;
int DAT_0320ff08;
undefined FUN_00e6c390;
undefined *PTR_FUN_02bf24c0;
undefined *PTR_FUN_02bf24d0;
undefined FUN_00e6c350;
undefined FUN_00e6c354;
undefined FUN_00e6c360;
undefined FUN_00e6c364;
undefined FUN_00e6c36c;
undefined FUN_00e6c370;
undefined FUN_00e6c378;
undefined FUN_00e6c37c;
undefined4 DAT_0320ff08;
undefined8 *DAT_0320ff28;
undefined1 DAT_0320ff30;
ulong DAT_0320ffb0;
void *DAT_0320ff28;
undefined8 DAT_0320ff28;
undefined DAT_01bee96d;
long DAT_0320ff28;
byte DAT_0320ff10;
undefined *DAT_0320ff20;
undefined DAT_0320ff11;
undefined DAT_01bee9a0;
undefined DAT_01bee9e0;
undefined DAT_01bee9f6;
undefined DAT_01e39add;
undefined *PTR_s_HW_ID_UNKNOWN_02820530;
byte DAT_032104c0;
undefined *DAT_032104d0;
undefined DAT_032104c1;
undefined DAT_01beebac;
undefined glClearDepthf;
long *DAT_03210498;
pointer PTR_FUN_02820610;
undefined8 DAT_03210498;
undefined DAT_01beef0d;
pointer PTR_FUN_02820630;
undefined DAT_01beef11;
pointer PTR_FUN_02820650;
long DAT_03210478;
undefined8 DAT_03210480;
long DAT_03210488;
undefined8 DAT_03210490;
undefined DAT_01beef3f;
undefined DAT_03210337;
byte DAT_03210460;
undefined *DAT_03210470;
undefined DAT_03210461;
pointer PTR_FUN_02820670;
pointer PTR_FUN_02820690;
pointer PTR_FUN_028206b0;
pointer PTR_FUN_028206d0;
pointer PTR_FUN_028206f0;
pointer PTR_FUN_02820710;
pointer PTR_FUN_02820730;
pointer PTR_FUN_02820750;
undefined DAT_01bef1ae;
undefined DAT_01bef1c0;
undefined DAT_01e46b23;
pointer PTR_FUN_02820770;
undefined DAT_01beef85;
undefined DAT_01beef89;
undefined DAT_01beef8d;
undefined DAT_01beef91;
undefined DAT_01beef95;
undefined DAT_01beef99;
undefined DAT_01beef9d;
undefined DAT_01beefa1;
undefined DAT_01beefa5;
undefined DAT_01beefa9;
undefined DAT_01beefad;
undefined DAT_01beefb1;
undefined DAT_01beefb5;
undefined DAT_01beefb9;
undefined DAT_01beefc2;
undefined DAT_01beefc7;
undefined DAT_01bef029;
undefined DAT_01bef02b;
undefined DAT_01bef0a0;
undefined DAT_01bef0a4;
undefined DAT_01bef0b8;
undefined DAT_01bef0bc;
undefined DAT_01bef0f4;
undefined1 DAT_032104b8;
undefined8 DAT_032104a0;
pointer PTR_FUN_02820790;
undefined DAT_01bef261;
void *DAT_03210518;
void *DAT_03210510;
long DAT_03210510;
undefined8 DAT_03210510;
int *DAT_03210530;
int DAT_03210538;
undefined8 DAT_03210518;
undefined4 DAT_01bef36c;
pthread_key_t DAT_03210520;
undefined FUN_00e7b878;
undefined FUN_00e78df8;
pthread_key_t DAT_03210524;
long DAT_03210528;
undefined DAT_03210568;
long DAT_03210570;
undefined *PTR_s___Main_OS_Serial_Queue_02bf24e8;
undefined *PTR_s___Render_Serial_Queue_02bf24f0;
undefined *PTR_s___Update_Serial_Queue_02bf24f8;
undefined *PTR_s___Default_Concurrent_Queue_02bf2500;
undefined *PTR_s___LongRunning_Concurrent_Queue_02bf2508;
undefined8 DAT_03210578;
undefined8 DAT_03210580;
undefined8 DAT_03210588;
undefined8 DAT_03210590;
undefined8 DAT_03210598;
long DAT_03210580;
long DAT_03210578;
long DAT_03210588;
long DAT_03210590;
long DAT_03210598;
void *DAT_032105a8;
pthread_key_t DAT_032105a4;
pointer PTR_FUN_028207b0;
undefined8 DAT_032105a8;
long DAT_032105a8;
undefined thunk_FUN_00e7b020;
undefined FUN_00e7b8d4;
int DAT_032105b0;
undefined FUN_00e7bbbc;
long *DAT_032105b8;
void *DAT_032105b8;
undefined *PTR_FUN_028207d0;
undefined *PTR_FUN_02820820;
undefined *PTR_FUN_02820870;
uint DAT_0312f168;
undefined FUN_00e7c6b0;
undefined FUN_00e7c6f0;
undefined FUN_00e7c440;
undefined *PTR_FUN_028208a0;
undefined *PTR_FUN_028208f0;
undefined *PTR_FUN_02820920;
uint DAT_0312ead4;
undefined FUN_00e7ceb8;
undefined FUN_00e7cedc;
uint DAT_032105c0;
undefined *PTR_DAT_02bf2768;
undefined FUN_00e7cfa4;
undefined FUN_00e7d004;
undefined FUN_00e7d128;
undefined FUN_00e7d02c;
undefined FUN_00e7d140;
int DAT_032105c0;
undefined *PTR_FUN_02820948;
undefined8 DAT_032105d8;
undefined *PTR_FUN_02820978;
undefined *PTR_FUN_028209d8;
undefined8 DAT_032105d0;
long *DAT_032105d0;
long *DAT_032105d8;
void *DAT_032106d8;
long DAT_032106d8;
byte *DAT_032106d8;
undefined *PTR_FUN_02820ab8;
undefined *PTR_FUN_02820af8;
undefined *PTR_FUN_02820b38;
undefined *PTR_FUN_02820b78;
undefined *PTR_s_gzip_02bf2510;
undefined FUN_00e7f78c;
undefined DAT_01bef519;
undefined DAT_01bef494;
void *DAT_03210700;
undefined4 DAT_02bf2518;
undefined8 *DAT_03210708;
void *DAT_03210710;
undefined *PTR_FUN_02820c10;
pointer PTR_FUN_02820ce0;
pointer PTR_FUN_02820d60;
undefined DAT_01bef54c;
undefined4 DAT_02bf251c;
long DAT_02bf2520;
long DAT_03210790;
undefined8 DAT_02bf2520;
undefined8 DAT_03210790;
undefined1 DAT_032107a0;
undefined8 *DAT_03210798;
undefined *PTR_FUN_028213a8;
undefined *PTR_FUN_02821410;
undefined *PTR_FUN_02820e10;
undefined *PTR_FUN_02821368;
undefined *PTR_FUN_02821490;
pointer PTR_FUN_028219e8;
undefined DAT_01bf0630;
undefined DAT_01bf063c;
pointer PTR_FUN_028219d0;
undefined FUN_00e96e4c;
int DAT_02bf251c;
undefined1 DAT_01bf0623;
pointer PTR_FUN_02821478;
undefined DAT_01bf0648;
undefined DAT_01bf11c8;
undefined FUN_00ea9680;
undefined FUN_00ead090;
undefined FUN_00eb26ac;
undefined FUN_00eb26b4;
undefined DAT_01bf0748;
undefined DAT_01bf0760;
undefined DAT_01bf0778;
undefined DAT_01bf0790;
undefined *PTR_FUN_02821a00;
undefined *PTR_s_gzip_02bf2528;
undefined FUN_00ebfd58;
void *DAT_032107a8;
void *DAT_032107b0;
long DAT_032107a8;
long DAT_032107b0;
undefined8 DAT_032107a8;
pointer PTR_FUN_02821a40;
pointer PTR_FUN_02821a80;
undefined *PTR_FUN_02821aa0;
undefined8 *DAT_032107c8;
long *DAT_032107c8;
undefined8 DAT_032107c8;
pointer PTR_FUN_02821ad8;
void *DAT_032107d0;
undefined8 DAT_032107d0;
pointer PTR_FUN_02821af8;
void *DAT_032107d8;
undefined8 DAT_032107d8;
undefined DAT_0000004c;
pointer PTR_FUN_02821b18;
undefined *PTR_FUN_02821b38;
undefined *PTR_FUN_02821b88;
int DAT_032107e0;
pointer PTR_FUN_02821be8;
void *DAT_032107e8;
long DAT_032107e8;
undefined1 DAT_03210830;
undefined8 DAT_03210818;
pointer PTR_FUN_02821ea0;
undefined1 DAT_03210850;
undefined8 DAT_03210838;
pointer PTR_FUN_02821ec0;
undefined8 *DAT_032107f0;
long DAT_032107f0;
long *DAT_032107f0;
undefined1 DAT_03210ab8;
undefined8 DAT_03210aa0;
pointer PTR_FUN_02822100;
void *DAT_032107f8;
long *DAT_032107f8;
long DAT_032107f8;
undefined *PTR_FUN_02821c58;
void *DAT_03210800;
long *DAT_03210800;
long DAT_03210800;
undefined *PTR_FUN_02821c80;
undefined8 *DAT_03210808;
void *DAT_03210810;
pthread_mutex_t *DAT_03210810;
undefined *PTR_FUN_02821cd8;
pointer PTR_FUN_02821d28;
undefined8 DAT_03210918;
undefined1 DAT_03210958;
undefined8 DAT_03210940;
pointer PTR_FUN_02821fa0;
undefined1 DAT_03210978;
undefined8 DAT_03210960;
pointer PTR_FUN_02821fc0;
undefined1 DAT_03210938;
undefined8 DAT_03210920;
pointer PTR_FUN_02821f80;
char DAT_03210910;
byte DAT_032108f8;
ulong DAT_03210900;
undefined1 DAT_032109b8;
undefined8 DAT_032109a0;
pointer PTR_FUN_02822000;
undefined1 DAT_032109d8;
undefined8 DAT_032109c0;
pointer PTR_FUN_02822020;
undefined1 DAT_032109f8;
undefined8 DAT_032109e0;
pointer PTR_FUN_02822040;
undefined *PTR_FUN_02821d48;
undefined *PTR_FUN_02821e30;
undefined *PTR_thunk_FUN_00ec82f4_02821e68;
undefined1 DAT_03210b30;
undefined *PTR_s_google/NuoGoogleGamesApi_02bf2568;
undefined8 DAT_03210b18;
pointer PTR_FUN_02822300;
undefined1 DAT_03210b70;
undefined8 DAT_03210b58;
pointer PTR_FUN_02822340;
undefined1 DAT_03210870;
undefined8 DAT_03210858;
pointer PTR_FUN_02821ee0;
undefined1 DAT_03210890;
undefined8 DAT_03210878;
pointer PTR_FUN_02821f00;
undefined1 DAT_032108b0;
undefined8 DAT_03210898;
pointer PTR_FUN_02821f20;
undefined1 DAT_032108d0;
undefined8 DAT_032108b8;
pointer PTR_FUN_02821f40;

undefined8 * FUN_00d3e534(void)

{
  return &DAT_0315cfb0;
}




int FUN_00d3e540(long param_1)

{
  return (int)(param_1 - 0x315cfc0U >> 3) * 0x286bca1b;
}




void FUN_00d3e564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281aa28;
  DAT_0313ce00 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00d3e580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281aa28;
  DAT_0313ce00 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00d3e59c(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281aa48;
  param_1[2] = 0;
  return;
}




void FUN_00d3e5d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d3e5d8(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d3e5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(param_2);
    return;
  }
  return;
}




void FUN_00d3e5ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281aa88;
  return;
}




void FUN_00d3e604(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d3e60c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00d3e614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}




void FUN_00d3e618(undefined8 param_1,undefined8 param_2)

{
  FUN_00d67b3c(param_2);
  FUN_00d67d04(param_2);
  return;
}




void FUN_00d3e640(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d67b2c(param_2);
  fVar2 = (float)FUN_00d67b34(param_2);
  if (fVar2 < fVar1) {
    FUN_00d67b2c(param_2);
    FUN_00d67d04(param_2);
    return;
  }
  return;
}




void FUN_00d3e69c(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)param_2[0x84];
  fVar3 = *pfVar1;
  if (0.0 <= fVar3) {
    fVar2 = (float)FUN_00d67b34(*param_2);
    if (fVar3 <= fVar2) {
      return;
    }
    fVar3 = *pfVar1;
  }
  FUN_00d67d04(fVar3,*param_2);
  return;
}




void FUN_00d3e6fc(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281aac8;
  param_1[2] = 0xbf800000;
  param_1[3] = 0;
  return;
}




void FUN_00d3e73c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_00d3e744(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d3e74c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}




void FUN_00d3e754(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_68 [44];
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    local_3c = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    if (fVar6 != 0.0) {
      local_3c = (float)FUN_00d67b34(param_2);
      local_3c = fVar6 + local_3c;
      if (local_3c <= 0.0) {
        local_3c = 0.0;
      }
    }
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,&local_3c);
    }
    lVar5 = FUN_00d66d28(param_2);
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar3 = FUN_00d66d34(param_2);
    FUN_00d04628(local_3c,auStack_68,uVar1,uVar3);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3e824(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[5] = 0;
  param_1[6] = 0x100000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281ab08;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  return;
}




void FUN_00d3e888(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(undefined4 *)(param_4 + 0x30) = param_1;
  *(undefined4 *)(param_4 + 0x34) = param_6;
  *(undefined4 *)(param_4 + 0x38) = param_7;
  *(undefined4 *)(param_4 + 0x3c) = param_2;
  *(undefined4 *)(param_4 + 0x40) = param_3;
  *(undefined4 *)(param_4 + 0x44) = param_8;
  *(undefined4 *)(param_4 + 0x48) = param_9;
  return;
}




void FUN_00d3e8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *(undefined8 *)(param_4 + 0x18) = param_5;
  *(undefined4 *)(param_4 + 0x30) = param_1;
  *(undefined4 *)(param_4 + 0x34) = param_6;
  *(undefined4 *)(param_4 + 0x38) = param_7;
  *(undefined4 *)(param_4 + 0x3c) = param_2;
  *(undefined4 *)(param_4 + 0x40) = param_3;
  *(undefined4 *)(param_4 + 0x44) = param_8;
  return;
}




void FUN_00d3e8b8(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 0x20) = param_4;
  *(undefined4 *)(param_2 + 0x34) = param_5;
  *(undefined4 *)(param_2 + 0x38) = param_6;
  *(undefined4 *)(param_2 + 0x3c) = param_1;
  *(undefined4 *)(param_2 + 0x44) = param_7;
  return;
}




void FUN_00d3e8d0(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(undefined4 *)(param_3 + 0x30) = param_1;
  *(undefined8 *)(param_3 + 0x28) = param_5;
  *(undefined4 *)(param_3 + 0x38) = param_6;
  *(undefined4 *)(param_3 + 0x3c) = param_2;
  *(undefined4 *)(param_3 + 0x44) = param_7;
  return;
}




void FUN_00d3e8ec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00d3e8f4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_00d3e8fc(long param_1)

{
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return;
}




void FUN_00d3e908(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [22];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == -1) {
      iVar3 = FUN_00d67b84(param_2);
    }
    iVar4 = FUN_00d67bf4(param_2);
    if (iVar4 != 0) {
      uVar10 = 0;
      do {
        lVar9 = FUN_00d67bdc(param_2,uVar10);
        local_c4 = *(undefined4 *)(param_1 + 0x30);
        if (*(code **)(param_1 + 0x20) != (code *)0x0) {
          (**(code **)(param_1 + 0x20))(param_2,lVar9,&local_c4);
        }
        if ((*(code **)(param_1 + 0x50) == (code *)0x0) ||
           (uVar8 = (**(code **)(param_1 + 0x50))(param_2,lVar9), (uVar8 & 1) != 0)) {
          FUN_00d9ff2c(&local_c8);
          if (*(long *)(param_1 + 0x10) == 0) {
            if (*(code **)(param_1 + 0x18) != (code *)0x0) {
              (**(code **)(param_1 + 0x18))(param_2,lVar9,&local_c8);
            }
          }
          else {
            thunk_FUN_00d9ff34(local_c0);
            local_c8 = local_c0[0];
          }
          local_cc = 0;
          if (*(code **)(param_1 + 0x28) == (code *)0x0) {
            local_cc = *(undefined4 *)(param_1 + 0x34);
          }
          else {
            (**(code **)(param_1 + 0x28))(param_2,lVar9,&local_cc);
          }
          iVar4 = *(int *)(param_1 + 0x58);
          if (iVar4 == -1) {
            iVar4 = *(int *)(lVar9 + 0x260);
          }
          if (((*(char *)(param_1 + 0x5c) != '\0') && (lVar9 = FUN_00d9ea08(lVar9), lVar9 != 0)) &&
             (uVar8 = FUN_00d6bbac(lVar9,local_c8,0), (uVar8 & 1) != 0)) break;
          uVar5 = FUN_00d428b0(local_c8);
          uVar2 = local_c4;
          uVar6 = FUN_00ceb350();
          FUN_00cfe8d0(uVar2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                       local_c0,iVar3,iVar4,uVar5,uVar6,local_cc,*(undefined4 *)(param_1 + 0x44),
                       *(undefined4 *)(param_1 + 0x48));
          FUN_00ce20fc(local_c0);
          if (*(int *)(param_1 + 0x58) != -1) break;
        }
        uVar10 = uVar10 + 1;
        uVar7 = FUN_00d67bf4(param_2);
      } while (uVar10 < uVar7);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3eaf0(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281ab48;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}




void FUN_00d3eb34(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d3eb3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    uVar2 = FUN_00ceb350();
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar3 = FUN_00d67b84(param_2);
    lVar5 = FUN_00d66d28(param_2);
    uVar2 = *(undefined4 *)(lVar5 + 0x260);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    auVar7 = FUN_00d67b34(param_2);
    FUN_00cfe864(auVar7,0,0,auStack_a0,uVar3,uVar2,uVar6,*(undefined4 *)(param_1 + 0x18),1,0,0);
    FUN_00ce20fc(auStack_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3ebfc(void)

{
  return;
}




void FUN_00d3ec00(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f800000ffffffff;
  *(undefined2 *)(param_1 + 7) = 0x2000;
  *param_1 = &PTR_FUN_0281ab98;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




undefined8 FUN_00d3ec4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00d3ec7c(param_1,param_2,param_3 & 1,0,0);
  return param_1;
}




void FUN_00d3ec7c(float param_1,undefined4 param_2,long param_3,undefined8 param_4,byte param_5,
                 byte param_6,byte param_7)

{
  uint uVar1;
  
  *(undefined8 *)(param_3 + 0x10) = param_4;
  *(char *)(param_3 + 0x38) = (char)(int)(param_1 * 255.0);
  *(byte *)(param_3 + 0x39) =
       (param_6 & 3) << 3 | (param_5 & 1) << 5 | *(byte *)(param_3 + 0x39) & 0xc0 | 1;
  *(undefined4 *)(param_3 + 0x34) = param_2;
  uVar1 = FUN_00d3e540();
  *(uint *)(param_3 + 0x30) = uVar1 & 0xffff;
  *(byte *)(param_3 + 0x39) = *(byte *)(param_3 + 0x39) & 0xbf | (param_7 & 1) << 6;
  return;
}




undefined8 FUN_00d3ecf4(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  FUN_00d3ec7c(param_1,param_2,param_3 & 1,1,param_4 & 1);
  return param_1;
}




void FUN_00d3ed24(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + ((ulong)*(byte *)(param_1 + 0x39) & 7) * 8 + 0x10) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | *(byte *)(param_1 + 0x39) + 1 & 7;
  return;
}




void FUN_00d3ed48(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0x7f | param_2 << 7;
  return;
}




void FUN_00d3ed58(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) {
    FUN_00d67b84(param_2);
    lVar4 = FUN_00d9e390();
    iVar1 = FUN_00d5cf60();
    if (iVar1 != -1) {
      FUN_00d5cf60(lVar4);
      lVar4 = FUN_00d9e390();
    }
    if (lVar4 != 0) {
      if (-1 < *(char *)(param_1 + 0x39)) {
        uVar5 = FUN_00d66d28(param_2);
        FUN_00d3ee30(param_1,uVar5,lVar4);
        return;
      }
      iVar1 = FUN_00d67bf4(param_2);
      if (iVar1 != 0) {
        uVar6 = 0;
        do {
          uVar5 = FUN_00d67bdc(param_2,uVar6);
          FUN_00d3ee30(param_1,uVar5,lVar4);
          uVar6 = uVar6 + 1;
          uVar2 = FUN_00d67bf4(param_2);
        } while (uVar6 < uVar2);
      }
    }
  }
  return;
}




void FUN_00d3ee30(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  plVar5 = (long *)FUN_00d5bae0(param_2);
  if ((plVar5 != (long *)0x0) &&
     (iVar3 = rand(), iVar3 % 0x100 <= (int)(uint)*(byte *)(param_1 + 0x38))) {
    bVar1 = *(byte *)(param_1 + 0x39);
    if ((bVar1 >> 5 & 1) != 0) {
      uVar6 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260));
      if ((uVar6 & 1) == 0) {
        return;
      }
      bVar1 = *(byte *)(param_1 + 0x39);
    }
    iVar4 = rand();
    iVar3 = 0;
    if ((bVar1 & 7) != 0) {
      iVar3 = iVar4 / (int)(bVar1 & 7);
    }
    bVar2 = *(byte *)(param_1 + 0x39);
    uVar8 = *(undefined8 *)(param_1 + (long)(int)(iVar4 - iVar3 * (bVar1 & 7)) * 8 + 0x10);
    bVar1 = bVar2 >> 3 & 3;
    if (bVar1 == 1) {
      uVar10 = *(undefined4 *)(param_1 + 0x34);
      uVar9 = *(undefined4 *)(param_1 + 0x30);
      uVar7 = FUN_00d5babc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00d3ef74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x100))(uVar10,plVar5,uVar8,1,1,uVar9,bVar2 >> 6 & 1,uVar7);
      return;
    }
    if (bVar1 == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x34);
      uVar7 = FUN_00d5babc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00d3ef08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0xf8))(uVar9,plVar5,uVar8,1,uVar7);
      return;
    }
  }
  return;
}




void FUN_00d3ef78(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) {
    if (*(char *)(param_1 + 0x39) < '\0') {
      iVar1 = FUN_00d67bf4(param_2);
      if (iVar1 != 0) {
        uVar5 = 0;
        do {
          FUN_00d67bdc(param_2,uVar5);
          plVar4 = (long *)FUN_00d5bae0();
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x108))(plVar4,*(undefined4 *)(param_1 + 0x30));
          }
          uVar5 = uVar5 + 1;
          uVar2 = FUN_00d67bf4(param_2);
        } while (uVar5 < uVar2);
      }
    }
    else {
      FUN_00d66d28(param_2);
      plVar4 = (long *)FUN_00d5bae0();
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d3efd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x108))(plVar4,*(undefined4 *)(param_1 + 0x30));
        return;
      }
    }
  }
  return;
}

