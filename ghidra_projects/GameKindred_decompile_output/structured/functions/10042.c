// functions/10042 — 310 functions
#include "GameKindred.h"




void FUN_100420140(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_AmmoCharge_Loadi_10185d0b8);
  local_20 = FUN_100454c84;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_10042019c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010042020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Silvernail_AmmoCharge_Loade_10185b440);
  return;
}




void FUN_100420210(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_AmmoCharge_Loadi_10185d0b8);
  local_30 = FUN_100454c84;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_1004202a4(void)

{
  long lVar1;
  
  lVar1 = FUN_10042fdc4();
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100454d18;
  return;
}




void FUN_1004202cc(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10049da1c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Silvernail_A_Shot_Impact");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar4 + 0x4f4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_Stake_Impact");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_Tower_Hide_Mes_10185d0c0);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3ecccccd);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar4 = FUN_10043aaa4(lVar1);
  *(code **)(lVar4 + 0x10) = FUN_100454f38;
  piVar6 = (int *)(lVar4 + 0x18);
  if ((*piVar6 == 0) || (piVar6 = (int *)(lVar4 + 0x1c), *piVar6 == 0)) {
    FUN_1003a4e5c(piVar6,PTR_s_Buff_Silvernail_A_Tower_AttachPo_10185b450);
  }
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,*(undefined4 *)
                                      (*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  local_50 = FUN_100454d04;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar4 = FUN_10043fc08(lVar1);
  lVar5 = FUN_10049c03c(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  FUN_1004386bc(lVar4 + 0x88);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0d0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,*(undefined4 *)
                                      (*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  local_50 = FUN_100454d04;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0e8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,*(undefined4 *)
                                      (*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  local_50 = FUN_1004550f8;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_100434b18(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_RevealToBestowersEnemiesTea_10185be18);
  lVar1 = FUN_10043fc08(lVar1);
  lVar4 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar4 + 8) = FUN_100455040;
  plVar2 = (long *)FUN_10043b538(lVar1 + 0xa0);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Silvernail_A_Tower_AttachPo_10185b450);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))
                             (plVar2,"Effect_Silvernail_Tripwire_AttachAvail_Ring");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_50 = FUN_100455088;
  local_48 = 4;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_50);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100420608(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c4b0(lVar1 + 0x10);
  return;
}




void FUN_100420620(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042fdc4();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0e0);
  (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined4 *)(param_1 + 0x308));
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar3 + 8) = FUN_100455040;
  lVar1 = lVar1 + 0x88;
  FUN_1004386bc(lVar1);
  FUN_10043aa04(lVar1);
  plVar2 = (long *)FUN_10043b538(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004206b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Silvernail_A_Tower_AttachPo_10185b450);
  return;
}




void FUN_1004206bc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"ActorBase");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_Tripwire_Preactive_Wire")
  ;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0xa0))(plVar2,FUN_100455178);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_FX");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_Tripwire_Preactive");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100420790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0d8);
  return;
}




void FUN_100420794(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d100);
  uVar3 = FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar3);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_FX");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_Tripwire_Ally");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x000100420848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa0))(plVar2,FUN_1004551b8);
  return;
}




void FUN_10042084c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049d3b4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)(*plVar2 + 0x40))();
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_10049d76c(lVar1);
  *(undefined2 *)(lVar3 + 0x40) = 0x100;
  *(undefined1 *)(lVar3 + 0x42) = 0;
  *(code **)(lVar3 + 0x38) = FUN_1004551f8;
  *(undefined4 *)(lVar3 + 0x10) = 0x3f400000;
  *(undefined4 *)(lVar3 + 0x30) = 0x40001;
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0f0);
  local_50[0] = 0x3e99999a;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_50);
  uVar4 = FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar4);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0f8);
  local_50[0] = 0x3e99999a;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_50);
  uVar4 = FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar4);
  return;
}




void FUN_1004209b8(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042fdc4();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0e0);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_DelayedKill_10185bd70);
  local_30[0] = 0x3e4ccccd;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_100420a3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  code *local_40;
  undefined4 local_38;
  
  uVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar3 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar3 + 0x10);
  lVar3 = FUN_10042ea44(param_1);
  lVar3 = FUN_10043ab44(lVar3 + 0x10);
  puVar1 = PTR_s_Buff_Silvernail_C_BeingKnockedBa_10185d118;
  *(undefined1 *)(lVar3 + 0x58) = 2;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  lVar3 = lVar3 + 0x10;
  FUN_1004386bc(lVar3);
  plVar4 = (long *)FUN_100434b18(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_40 = FUN_1004552ac;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
  plVar4 = (long *)FUN_10043ab94(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"BONUS_DAMAGE",4);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Silvernail_C_BeingKnockedBa_10185d118);
  lVar3 = FUN_10042e580(param_1);
  fVar5 = (float)FUN_1003dfe60(uVar2,2,8,0x19,0);
  *(float *)(lVar3 + 0x40) = 1.0 / fVar5;
  *(byte *)(lVar3 + 0x44) = *(byte *)(lVar3 + 0x44) | 1;
  FUN_1004386bc(lVar3 + 0x10);
  plVar4 = (long *)FUN_10043ab94(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"TRIPWIRE_DAMAGE_PER_SEC",2);
  return;
}




void FUN_100420bb4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x58))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10049c148(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,8);
  (**(code **)(*plVar2 + 0x38))();
  lVar3 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar3 + 0x10) = 0x18;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silence");
  (**(code **)(*plVar2 + 0x90))();
  lVar3 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar3 + 0x58) = 2;
  *(code **)(lVar3 + 0x10) = FUN_1004552c0;
  *(undefined4 *)(lVar3 + 0x18) = 3;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x000100420cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Slowed_buff");
  return;
}




void FUN_100420cd4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Silvernail_A_Tripwire_Loop");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar1 + 0x4f4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10049da1c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Silvernail_A_Tripwire_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar1 + 0x4f4));
                    /* WARNING: Could not recover jumptable at 0x000100420d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100420da0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f6) >> 4 & 1) == 0) {
    FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
    lVar3 = FUN_10042e2c8(param_1);
    plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Silvernail_B_DamageOverTime");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
    (**(code **)(*plVar4 + 0xb0))(plVar4,1);
    plVar4 = (long *)FUN_10049bf9c(lVar3 + 0x10);
    uVar2 = FUN_100451a18(param_1);
    uVar1 = 0;
    if (uVar2 != 0xff) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,uVar1 & 0xff,7);
    lVar3 = FUN_10042e580(param_1);
    *(undefined4 *)(lVar3 + 0x40) = 0x3f000000;
    *(byte *)(lVar3 + 0x44) = *(byte *)(lVar3 + 0x44) | 1;
    FUN_1004386bc(lVar3 + 0x10);
    plVar4 = (long *)FUN_10043ab94(lVar3 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
    (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE_PER_SECOND",3);
    lVar3 = FUN_10042e3b0(param_1);
    FUN_10049b814(lVar3 + 0x10);
    return;
  }
  lVar3 = FUN_10042e498(param_1);
  plVar4 = (long *)FUN_1004385a0(lVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100420f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Silvernail_B_DamageOverTime_10185d108);
  return;
}




void FUN_100420f10(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004552d4;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100420f4c(long param_1)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_10042e498();
  lVar2 = lVar2 + 0x10;
  FUN_1004386bc(lVar2);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  pcVar1 = "Effect_Silvernail_C_Impact";
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 0x110) != 0) {
    pcVar1 = "Effect_Silvernail_C_Impact_Small";
  }
  (**(code **)(*plVar3 + 0x48))(plVar3,pcVar1);
  plVar3 = (long *)FUN_10049da1c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Silvernail_C_Impact");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar5 + 0x4fc));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10043ab94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x000100421048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",4);
  return;
}




void FUN_10042104c(void)

{
  return;
}




void FUN_100421050(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042fdc4();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"BONUS_DAMAGE",4);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_1004552ac;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_C_Impact_Stun");
  return;
}




void FUN_10042111c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  code *local_50;
  undefined4 local_48;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Silvernail__C_101859d70 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Silvernail__C_101859d70;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Silvernail__C_101859d70;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Silvernail__C_101859d70 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Silvernail__C_101859d70;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Silvernail__C_101859d70;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_1004954d0;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x6170e7e5;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_50 = FUN_100495504;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Silvernail__C_101859d70 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Silvernail__C_101859d70;
    pcVar5 = PTR_s_Ability__Silvernail__C_101859d70;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Silvernail__C_101859d70;
  *(code **)(lVar1 + 0x18) = FUN_100495538;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  return;
}




void FUN_1004212c8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Silvernail__B_101859d68 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Silvernail__B_101859d68;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Silvernail__B_101859d68;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Silvernail__B_101859d68 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Silvernail__B_101859d68;
    pcVar5 = PTR_s_Ability__Silvernail__B_101859d68;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100495468;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x6070e652;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_10049549c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100421408(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x5f70e4bf;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100495434;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Silvernail__A_101859d60 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Silvernail__A_101859d60;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Silvernail__A_101859d60;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Silvernail__A_101859d60 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Silvernail__A_101859d60;
    pcVar5 = PTR_s_Ability__Silvernail__A_101859d60;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_100421544(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e95c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100421570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_1004552e8);
  return;
}




void FUN_100421574(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_10042e498();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_10043aaf4(lVar2);
  *(code **)(lVar3 + 0x10) = FUN_100455450;
  plVar4 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar4 + 0x48))();
  plVar4 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar4 + 0x50))();
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  FUN_10049c4b0(lVar2);
  FUN_10049c210(lVar2);
  plVar4 = (long *)FUN_10049ca24(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,FUN_100455488);
  lVar3 = FUN_10049b9b4(lVar2);
  *(undefined2 *)(lVar3 + 0x10) = 0x1500;
  plVar4 = (long *)FUN_100433e34(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Invulnerable_10185a588);
  lVar2 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Hero057__B_LeapOff_101859dd8;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Hero057__B_101859dd0;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_100421654(void)

{
  return;
}




void FUN_100421658(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_1004554b0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_40);
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_1004554c4;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_1004216f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  code *local_50;
  undefined4 local_48;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero057_C_Cloud");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0x3f800000);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40800000);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3f4ccccd);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e580(param_1);
  fVar4 = (float)FUN_1003dfe60(uVar3,3,9,0x19,0);
  *(float *)(lVar1 + 0x40) = 1.0 / fVar4;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
  local_50 = FUN_1004554d8;
  local_48 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  (**(code **)(*plVar2 + 0x20))(0x3f800000);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  local_50 = FUN_1004554ec;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,1,2);
  return;
}




void FUN_100421888(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043187c(lVar1);
  local_40 = FUN_100455500;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_40);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Yates_DefaultAttack_B_Speed_10185d138);
  local_40 = FUN_10045550c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  FUN_1004385f0(lVar1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Mace");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_AA_Aura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1004219ac(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043187c(lVar1);
  local_40 = FUN_100455518;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_40);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Yates_DefaultAttack_C_Speed_10185d140);
  local_40 = FUN_100455524;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  FUN_1004385f0(lVar1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Mace");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_AA_Aura_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100421ad0(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100455530;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100421b0c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10045553c;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100421b48(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_DefaultAttack_Impact_A");
                    /* WARNING: Could not recover jumptable at 0x000100421b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_100421b98(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_DefaultAttack_Impact_B");
                    /* WARNING: Could not recover jumptable at 0x000100421be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_100421be8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_DefaultAttack_Impact_C");
                    /* WARNING: Could not recover jumptable at 0x000100421c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_100421c38(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = FUN_10042e498();
  FUN_10043aa04(lVar4 + 0x10);
  plVar5 = (long *)FUN_100432a84(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xba);
  (**(code **)(*plVar5 + 0x18))(plVar5,"CenterBody");
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x270);
  uVar2 = FUN_1004d2524("GenericLocator");
  iVar3 = FUN_100015208("GenericLocator",uVar2,0x12345678);
  if (iVar1 == iVar3) {
    lVar4 = FUN_10042fdc4(param_1);
    FUN_100434ac8(lVar4 + 0x10);
    return;
  }
  return;
}




void FUN_100421d04(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100455618;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_B_ChargingRing");
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40600000);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_B_Charging");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Yates_B_Charging");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cdee0(*(undefined4 *)(lVar1 + 0x50c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar4 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Yates_C_IsCasting_10185b4b8;
  plVar2 = (long *)FUN_10045562c(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_50 = FUN_100455600;
  local_48 = 4;
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_50);
  lVar1 = FUN_1004303b0(param_1);
  lVar1 = lVar1 + 0x10;
  lVar4 = FUN_10049bea0(lVar1);
  *(code **)(lVar4 + 0x10) = FUN_100455548;
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_50 = FUN_10045567c;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",2);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_B_Cast");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f800000);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Yates_B_Finished");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cdee0(*(undefined4 *)(lVar1 + 0x50c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10049c8e4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Yates__B_101859e28);
  return;
}




void FUN_10042205c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Yates_C_Charging");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cdee0(*(undefined4 *)(lVar1 + 0x510));
                    /* WARNING: Could not recover jumptable at 0x0001004220c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_1004220c4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_C_Teleport");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x000100422118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10042211c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_C_Landing_DamageZone");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  local_20[0] = 0x40c00000;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_20);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3f4ccccd);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1004221cc(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c4b0(lVar1 + 0x10);
  return;
}




void FUN_1004221e4(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar2 + 0x10) = 0x1500;
  FUN_10049c210(lVar1);
  lVar1 = FUN_10049be50(lVar1);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  return;
}




void FUN_10042222c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042fdc4();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_C_Landing");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar3 = FUN_10049bea0(lVar1);
  *(code **)(lVar3 + 0x10) = FUN_100455690;
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",3);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Yates_C_Slow_10185d168);
  local_40 = FUN_1004557f4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042fdc4(param_1);
  lVar3 = FUN_10049bea0(lVar1 + 0x10);
  *(code **)(lVar3 + 0x10) = FUN_100455740;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Yates_C_Barrier_10185d170);
  local_40 = FUN_100455808;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_100422374(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10045581c;
  local_18 = 3;
  FUN_10042feac(0x3e4ccccd,0x3f800000,param_1,&local_20);
  return;
}




void FUN_1004223b4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e95c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100455830);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100422400(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_10042ebc4(param_1,1);
  lVar1 = FUN_100438988(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049dafc;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x000100422458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_Withdraw");
  return;
}




void FUN_10042245c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  code *local_50;
  undefined4 local_48;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Yates__A_101859e18 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Yates__A_101859e18;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Yates__A_101859e18;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Yates__A_101859e18 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Yates__A_101859e18;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Yates__A_101859e18;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_10049563c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xd2eff7a4;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_50 = FUN_100495670;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Yates__A_101859e18 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Yates__A_101859e18;
    pcVar5 = PTR_s_Ability__Yates__A_101859e18;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Yates__A_101859e18;
  *(code **)(lVar1 + 0x18) = FUN_1004956a4;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  return;
}




void FUN_100422608(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_1004955d4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x1d2592d8;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495608;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  return;
}




void FUN_1004226bc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Yates__C_101859e30 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Yates__C_101859e30;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Yates__C_101859e30;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Yates__C_101859e30 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Yates__C_101859e30;
    pcVar5 = PTR_s_Ability__Yates__C_101859e30;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_10049556c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xd4effaca;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004955a0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1004227fc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_100455a14();
  *(undefined4 *)(lVar1 + 0x28) = 0x80;
  lVar1 = lVar1 + 0x10;
  FUN_10049db0c(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Inara_P_MarkedTreant_10185d1a0);
  plVar2 = (long *)FUN_100451bac(lVar1);
  uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,"*Inara_TreantObserver*",0);
  plVar2 = (long *)FUN_100492d2c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Inara_P_TreantObserver_10185d190,uVar3);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_100455954);
  lVar1 = FUN_100431114(param_1);
  *(undefined4 *)(lVar1 + 0x28) = 0x80;
  lVar4 = FUN_10049ca74(lVar1 + 0x10);
  FUN_1003a4e5c(&local_50,PTR_s_Buff_Inara_P_TreantObserver_10185d190);
  *(undefined4 *)(lVar4 + 0x10) = local_50._0_4_;
  *(byte *)(lVar4 + 0x28) = *(byte *)(lVar4 + 0x28) | 7;
  *(code **)(lVar4 + 0x18) = FUN_100451a64;
  *(undefined4 *)(lVar4 + 0x20) = 4;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_DelayedKill_10185bd70);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3e4ccccd);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_100431114(param_1);
  *(undefined4 *)(lVar1 + 0x28) = 0x80;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 0x20;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Inara_P_EmpoweredByTreant_10185d1a8);
  local_50 = FUN_100455b0c;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar4 = FUN_10049bea0(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100455964;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Inara_P_ObserverBonusVision_10185d198);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40800000);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  return;
}




void FUN_100422a0c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049ca24(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100422a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_10048baec);
  return;
}




void FUN_100422a38(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Inara_Perk_Spirit_Appear");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar1 + 0x528));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Inara_Perk_Spirit_Disappear");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar1 + 0x528));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40[0] = 0x41000000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x11,1,local_40);
  plVar2 = (long *)FUN_10049db5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"*InaraSpirit*");
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100422b84(void)

{
  return;
}




void FUN_100422b88(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100455b18;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100422bd8(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100455b24;
  local_18 = 3;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100422c14(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049db5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"*InaraSpirit*");
                    /* WARNING: Could not recover jumptable at 0x000100422c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_100422c4c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042fdc4();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100422c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Inara_B_IsMarkedHero_10185b558);
  return;
}




void FUN_100422c78(void)

{
  return;
}




void FUN_100422c7c(void)

{
  long lVar1;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100455b38;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x24) = 0x3f19999a3f99999a;
  return;
}




void FUN_100422cd8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_10042e3b0();
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042e2c8(param_1);
  lVar3 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Inara__C2_101859e78;
  *(undefined **)(lVar3 + 0x10) = PTR_s_Ability__Inara__C_101859e70;
  *(undefined **)(lVar3 + 0x18) = puVar1;
  plVar4 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Inara_C_CanDash");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar2 = FUN_10042fdc4(param_1);
  plVar4 = (long *)FUN_10049c8e4(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100422da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Inara__C_101859e70);
  return;
}




void FUN_100422da8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar2 = FUN_10049bea0(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100455b4c;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Inara_C_SpeedBoost_10185d1b8);
  local_30 = FUN_1003ceb00;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  return;
}




void FUN_100422e3c(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Inara__A_101859e60 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Inara__A_101859e60;
    pcVar5 = PTR_s_Ability__Inara__A_101859e60;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x40) = uVar4;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_20 = FUN_10049570c;
  local_18 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_20);
  return;
}




void FUN_100422ee8(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Inara__B_101859e68 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Inara__B_101859e68;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Inara__B_101859e68;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Inara__B_101859e68 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Inara__B_101859e68;
    pcVar4 = PTR_s_Ability__Inara__B_101859e68;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_1004956d8;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100422fbc(void)

{
  return;
}




void FUN_100422fc0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_LanceBall_Lance_AA_Impact");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_LanceBall_Lance_Attack_Impact_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_LanceBall_Lance_Attack_Impact_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_LanceBall_Lance_Attack_Impact_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cec98(*(undefined4 *)(lVar1 + 0x518));
                    /* WARNING: Could not recover jumptable at 0x00010042309c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_1004230a0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10045607c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5);
  lVar1 = FUN_10042e2c8(param_1);
  FUN_10049b964(lVar1 + 0x10);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_LanceBall_Lance_Ability_A_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cec98(*(undefined4 *)(lVar1 + 0x51c));
                    /* WARNING: Could not recover jumptable at 0x000100423148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10042314c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_LanceBall_Lance_A_Warning");
                    /* WARNING: Could not recover jumptable at 0x000100423190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100423194(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_LanceBall_Lance_B_Burst_Impact");
                    /* WARNING: Could not recover jumptable at 0x0001004231ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_1004231f0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  local_40[0] = 0x3e99999a;
  local_38 = 1;
  FUN_10042eb40(param_1,local_40);
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_HoldingBall");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_40);
  (**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3ecccccd,0);
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__LanceBall_Lance__ThrowB_10185a1e0;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__LanceBall_Lance__C_101859e98;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_100431114(param_1);
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
  plVar3 = (long *)FUN_100432a84(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xdb);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"OverHead");
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_100455c00);
  return;
}




void FUN_100423348(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar2 = FUN_10043aaa4(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100443d0c;
  piVar4 = (int *)(lVar2 + 0x18);
  if ((*piVar4 == 0) || (piVar4 = (int *)(lVar2 + 0x1c), *piVar4 == 0)) {
    FUN_1003a4e5c(piVar4,DAT_10185b588);
  }
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_LanceBall_ScoringBuff_10185d1d8);
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_CapturePoint_Edge");
  local_30[0] = 0x40a00000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_30);
  return;
}




void FUN_100423434(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10045607c(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,0x15);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,DAT_10185b588);
  FUN_1004385f0(lVar1);
  FUN_10043aa04(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_LanceBall_ReturnBallToCente_10185d1e8);
  local_30[0] = 0x3dcccccd;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_1004234e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100432a84(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xdd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_100443db4);
  lVar1 = FUN_10042e3b0(param_1);
  plVar2 = (long *)FUN_100432a84(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xdd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
                    /* WARNING: Could not recover jumptable at 0x0001004235a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_100443db4);
  return;
}




void FUN_1004235a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_28 [2];
  
  lVar1 = FUN_10042e498();
  lVar2 = FUN_10049ca74(lVar1 + 0x10);
  FUN_1003a4e5c(local_28,PTR_s_Buff_LanceBall_Center_10185d1e0);
  *(undefined4 *)(lVar2 + 0x10) = local_28[0];
  *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) | 2;
  plVar3 = (long *)FUN_100432a84(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xdc);
                    /* WARNING: Could not recover jumptable at 0x000100423638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  return;
}




void FUN_10042363c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5,FUN_100455c28);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100423688(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar2 + 0x2c) = 0x11;
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_AbilityOverdrive_Block");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100423708(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5c) = 0xc;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Sanfeng_A_SuccessfulCounter_10185b610);
  local_40 = FUN_1003cf488;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10049b964(lVar1);
  plVar2 = (long *)FUN_10049c148(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,10);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Sanfeng_A_InCounterStance");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  FUN_10049d460(lVar1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Sanfeng_A_PostStanceAttack_10185b608);
  local_40 = FUN_1003cf488;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_100423858(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Sanfeng_A_Countered");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar2 + 0x28))(*(undefined4 *)(lVar1 + 0x5b0),plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar4 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Sanfeng_Talent_TalentC_10185d1f8;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Sanfeng__A_101859eb8);
  local_30 = (code *)((ulong)local_30._4_4_ << 0x20);
  local_28 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined1 *)(lVar1 + 0x58) = 2;
  *(undefined4 *)(lVar1 + 0x40) = 0xf4d7b676;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100455c80;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Sanfeng_A_SuccessfulCounter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1004239e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Sanfeng_A_DashAttackAvailable");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100452858(lVar1 + 0x10);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x000100423a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,PTR_s_Ability__Sanfeng__A_101859eb8);
  return;
}




void FUN_100423a74(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10049bbfc(lVar1);
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Sanfeng_B_Channel");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x43340000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x98))(plVar2,local_30);
  FUN_10049d460(lVar1);
  return;
}




void FUN_100423b18(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x48))();
  FUN_10049d460(lVar1 + 0x10);
  return;
}




void FUN_100423b50(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Sanfeng__A_101859eb8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Sanfeng__A_101859eb8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Sanfeng__A_101859eb8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Sanfeng__A_101859eb8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Sanfeng__A_101859eb8;
    pcVar5 = PTR_s_Ability__Sanfeng__A_101859eb8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100495844;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xf2d7b350;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100495878;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100423c90(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Sanfeng__B_101859ec8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Sanfeng__B_101859ec8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Sanfeng__B_101859ec8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Sanfeng__B_101859ec8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Sanfeng__B_101859ec8;
    pcVar5 = PTR_s_Ability__Sanfeng__B_101859ec8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_1004957a8;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xf3d7b4e3;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043187c(lVar1);
  local_40 = FUN_1004957dc;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  FUN_10043b4e8(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_SlowUsingBuffVar_10185bde0);
  local_40 = FUN_100495810;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x38))(0x3eb33333);
  return;
}




void FUN_100423e2c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Sanfeng__A_101859eb8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Sanfeng__A_101859eb8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Sanfeng__A_101859eb8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Sanfeng__A_101859eb8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Sanfeng__A_101859eb8;
    pcVar5 = PTR_s_Ability__Sanfeng__A_101859eb8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100495740;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xf4d7b676;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100495774;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100423f6c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_100433910();
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Leo_Perk_SpeedBoost_10185d208);
  local_20 = FUN_100455c94;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_100423fd4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10049bfec(lVar1);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","BoostMove");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Sprint","BoostSprint");
  lVar1 = FUN_10043099c(param_1);
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100455ca8;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined2 *)(lVar1 + 0x60) = 0x101;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100424094(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Leo_A_Bleed");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x000100424138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"A_BLEED_DAMAGE",2);
  return;
}




void FUN_10042413c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100455cb4;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_100424170(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x23,"Effect_Leo_B_Root",0);
  return;
}




void FUN_100424184(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  FUN_1003e5888();
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40,2,2);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049dbac;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Leo_C_CycloneDamage_10185d210);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_100424240(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_70;
  undefined4 local_68;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Leo_C_Empower");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f5c28f6,0x3da3d70a,0x3e75c28f);
  local_70._0_4_ = 0x3f000000;
  local_68 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_70);
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Leo_C_Empower");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f5c28f6,0x3da3d70a,0x3e75c28f);
  local_70 = (code *)CONCAT44(local_70._4_4_,0x3f000000);
  local_68 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_70);
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x588d47da;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_70 = FUN_100455cc8;
  local_68 = 3;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_70);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x578d4647;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_70 = FUN_100455cc8;
  local_68 = 3;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_70);
  return;
}




void FUN_100424438(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f19999a;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_100455cdc;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,0,2);
  return;
}




void FUN_1004244c0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  
  lVar1 = FUN_10042f8e8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ca74(lVar1);
  FUN_1003a4e5c(local_38,PTR_s_Buff_Leo_C_ShovedHero_10185b698);
  *(undefined4 *)(lVar2 + 0x10) = local_38[0];
  *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) | 3;
  plVar3 = (long *)FUN_10043b538(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Leo_C_ShovedHero_10185b698);
  plVar3 = (long *)FUN_10043b538(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010042454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Leo_C_CycloneDamage_10185d210);
  return;
}




void FUN_100424550(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_100433910();
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Leo_Talent_SpeedBoost_10185d220);
  local_20 = FUN_100455c94;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_1004245b8(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_100495948;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,7,2,&local_30);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10049597c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,8,2,&local_30);
  return;
}




void FUN_100424644(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Leo__C_101859f30 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Leo__C_101859f30;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Leo__C_101859f30;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Leo__C_101859f30 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Leo__C_101859f30;
    pcVar4 = PTR_s_Ability__Leo__C_101859f30;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_1004959b0;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100424718(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10043099c();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_1004958ac;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_1004958e0;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,5,2,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_100495914;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x12,1,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100424818(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  lVar1 = FUN_1004303b0(param_1);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Caine_Talent_TalentC_10185b6a0;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_AmmoPerkTalent_10185b6a8);
  local_30[0] = 0xc;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_30);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_AmmoPerk_10185b6b0);
  local_30[0] = 6;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_30);
  return;
}




void FUN_100424910(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e3b0();
  plVar2 = (long *)FUN_10045607c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Caine_DryFire");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0044(*(undefined4 *)(lVar1 + 0x5d0));
                    /* WARNING: Could not recover jumptable at 0x000100424990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100424994(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100455e9c;
  local_18 = 3;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_1004249d0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100451f14(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Caine__NoAmmo_101859f88);
  plVar2 = (long *)FUN_10049c148(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_SpeedBoost_10185d238);
  local_30 = FUN_1003d00a8;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_100424a78(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  local_30 = FUN_100455e90;
  local_28 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bfec(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100424adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,"Effect_Caine_Sprint");
  return;
}




void FUN_100424ae0(void)

{
  return;
}




void FUN_100424ae4(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Caine_C_Passthrough");
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Caine_C_Attack_Impact");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0044(*(undefined4 *)(lVar1 + 0x5f0));
                    /* WARNING: Could not recover jumptable at 0x000100424b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100424b8c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = FUN_100437bc0();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049dbbc(lVar1 + 0x10);
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(code **)(lVar2 + 8) = FUN_100455eb0;
  *(undefined4 *)(lVar2 + 0x10) = 3;
  lVar2 = FUN_10043fc08(lVar1 + 0x88);
  lVar3 = FUN_10049c300(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Caine_C_KillMarker_PFX_10185d250;
  plVar4 = (long *)FUN_100433e34(lVar2 + 0xa0);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Caine_C_KillMarker_PFX_10185d250);
  plVar4 = (long *)FUN_1004385a0(lVar1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x000100424c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Caine_C_KillMarker_PFX_10185d250);
  return;
}




void FUN_100424c34(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Caine_C_LowHP");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x000100424c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100424c9c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  lVar2 = FUN_10043fc08(lVar1 + 0x10);
  lVar1 = FUN_10049c198(lVar2 + 0x10);
  *(code **)(lVar1 + 8) = FUN_100455f30;
  lVar1 = lVar2 + 0x88;
  FUN_1004386bc(lVar1);
  plVar3 = (long *)FUN_10045607c(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,0x18);
  plVar3 = (long *)FUN_1004560cc(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Caine_C_Execute_Reaction_10185d268);
  local_30[0] = 0x40a00000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  FUN_10044c418(lVar1);
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Caine_C_ExecuteSuccess");
  FUN_1004386bc(lVar2 + 0xa0);
  plVar3 = (long *)FUN_10043ab94(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"EXPLOSIONDAMAGE",2);
  return;
}




void FUN_100424db0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  code *local_50;
  undefined4 local_48;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_AmmoControl_10185b6b8);
  local_50 = FUN_1003d00a8;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_OutOfAmmo_10185d230);
  local_50 = FUN_1003d00a8;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_100438a9c(param_1);
  if (PTR_s_Ability__Caine__C_101859fa0 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Caine__C_101859fa0;
    uVar5 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar5 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Caine__C_101859fa0;
      do {
        pcVar6 = pcVar6 + 1;
        uVar5 = (uVar5 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar6;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar5;
  *(undefined4 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049dd1c(lVar1 + 0x10);
  if (PTR_s_Ability__Caine__C_101859fa0 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Caine__C_101859fa0;
    pcVar6 = PTR_s_Ability__Caine__C_101859fa0;
    while (cVar4 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 8) = uVar7;
  *(undefined4 *)(lVar3 + 0xc) = 1;
  lVar3 = FUN_10043d65c(lVar1 + 0x88);
  *(code **)(lVar3 + 0x10) = FUN_100455d2c;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x88);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_C_KillMarker_10185d248);
  return;
}




void FUN_100424f4c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043626c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"ultimateKill");
                    /* WARNING: Could not recover jumptable at 0x000100424f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(0x3e19999a);
  return;
}




void FUN_100424f8c(void)

{
  return;
}




void FUN_100424f90(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Caine__B_101859f98 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Caine__B_101859f98;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Caine__B_101859f98;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Caine__B_101859f98 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Caine__B_101859f98;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Caine__B_101859f98;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_100495a4c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Caine__B_101859f98 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Caine__B_101859f98;
    pcVar5 = PTR_s_Ability__Caine__B_101859f98;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Invulnerable_10185a588);
  local_50[0] = 0x3ecccccd;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_50);
  return;
}




void FUN_10042510c(void)

{
  return;
}




void FUN_100425110(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  code *local_40;
  undefined4 local_38;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_AmmoPerk_10185b6b0);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_AmmoControl_10185b6b8);
  local_40 = FUN_1003d00a8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Caine__A_101859f90 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Caine__A_101859f90;
    uVar5 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar5 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Caine__A_101859f90;
      do {
        pcVar6 = pcVar6 + 1;
        uVar5 = (uVar5 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar6;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar5;
  lVar3 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Caine__A_101859f90 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Caine__A_101859f90;
    pcVar6 = PTR_s_Ability__Caine__A_101859f90;
    while (cVar4 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 0x20) = uVar7;
  *(code **)(lVar3 + 0x10) = FUN_1004959e4;
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Caine__A_101859f90;
  *(code **)(lVar1 + 0x18) = FUN_100495a18;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  return;
}




void FUN_100425284(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100451f14(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Warhawk__Enhanced_Basic_101859fc0);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10045611c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10,1,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100425310(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_B_Grenade_10185b6e8);
  local_20 = FUN_100456128;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_10042536c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_B_Warning");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  FUN_10043aa04(lVar1 + 0x10);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_B_DetonateAvailable_10185d288);
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100454548(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Warhawk__B_Grenade_Expl_101859fe0);
  FUN_10043aa04(lVar1);
  plVar2 = (long *)FUN_10043b538(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010042543c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_B_DetonateAvailable_10185d288);
  return;
}




void FUN_100425440(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Warhawk__B_Detonate_101859fd8;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Warhawk__B_101859fd0;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10049c8e4(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__B_101859fd0);
  FUN_10049d96c(lVar2);
  plVar3 = (long *)FUN_10043b538(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004254bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Warhawk_B_Grenade_10185b6e8);
  return;
}




void FUN_1004254c0(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",1);
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_10045613c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_100425568(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x1f,"Effect_Stunned_buff",0);
  return;
}




void FUN_10042557c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042fdc4();
  FUN_10044c418(lVar1 + 0x10);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1004255b0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_10042e2c8();
  FUN_10049b964(lVar2 + 0x10);
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Warhawk__C_Aim_101859ff0;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Warhawk__C_101859fe8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_1004328a0(param_1);
  FUN_1004385f0(lVar2 + 0x10);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10045309c(lVar2);
  (**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)FUN_100454548(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_Fire_101859ff8);
  plVar3 = (long *)FUN_10049c8e4(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100425664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_101859fe8);
  return;
}




void FUN_100425668(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_C_Warning");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_C_Control_10185b720);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_100425714(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004561f8;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_100425748(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",2);
  (**(code **)(*plVar2 + 0x98))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",2);
  local_30 = FUN_10045620c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_30);
  return;
}




void FUN_100425818(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_C_FireAOE");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_C_Control_10185b720);
  local_40 = FUN_1004561d0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Warhawk_C_Burning");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x628));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar1 = lVar1 + 0x10;
  lVar4 = FUN_10043d65c(lVar1);
  *(code **)(lVar4 + 0x10) = FUN_100456150;
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_C_Slow_10185d2a0);
  local_40 = FUN_1004561e4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Warhawk_C_BurnDamage_10185d2b8);
  local_40 = FUN_1004561e4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_1004259c8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE_PER_SEC",2);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100425a40(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Warhawk__B_101859fd0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Warhawk__B_101859fd0;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Warhawk__B_101859fd0;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Warhawk__B_101859fd0 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Warhawk__B_101859fd0;
    pcVar4 = PTR_s_Ability__Warhawk__B_101859fd0;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100495b50;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100425b14(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Warhawk__A_101859fc8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Warhawk__A_101859fc8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Warhawk__A_101859fc8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Warhawk__A_101859fc8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Warhawk__A_101859fc8;
    pcVar5 = PTR_s_Ability__Warhawk__A_101859fc8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100495ae8;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xb96f37e0;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100495b1c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100425c54(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x354ad40f;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495a80;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xfde3c42e;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495ab4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  return;
}




void FUN_100425d28(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043aa54(lVar1 + 0x10);
  local_30 = FUN_100495b84;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  return;
}




void FUN_100425d84(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_10042e2c8();
  FUN_10049b964(lVar2 + 0x10);
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Warhawk__C_Aim_101859ff0;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Warhawk__C_101859fe8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_1004328a0(param_1);
  FUN_1004385f0(lVar2 + 0x10);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10045309c(lVar2);
  (**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)FUN_100454548(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_Fire_101859ff8);
  plVar3 = (long *)FUN_10049c8e4(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100425e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Warhawk__C_101859fe8);
  return;
}




void FUN_100425e3c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_50 = FUN_100456220;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x2b,0,&local_50);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5c) = 4;
  plVar2 = (long *)FUN_1004519c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  local_50 = FUN_100456234;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x10))(plVar2,3,&local_50);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Miho_C_SlashCounter_10185b790;
  plVar2 = (long *)FUN_1004519c8(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  local_50._0_4_ = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,3,&local_50);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5a) = 4;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Miho_Talent_TalentA_10185d318;
  FUN_10043b4e8(lVar1 + 0x88);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Miho_TalentA_Marker_10185d330);
  local_50._0_4_ = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5a) = 4;
  FUN_10043b4e8(lVar1 + 0x10);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Miho_Perk_MaxStacks_10185d2d0);
  local_50._0_4_ = 0x3dcccccd;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_100433910(param_1);
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049dbbc(lVar1 + 0x10);
  *(undefined8 *)(lVar3 + 0x18) = 0x300000002;
  *(undefined4 *)(lVar3 + 8) = 0x42940000;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Miho_B_FinalSlash_10185b7a0);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40000000);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  return;
}




void FUN_100426104(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(byte *)(lVar1 + 0x78) = *(byte *)(lVar1 + 0x78) | 4;
  *(char **)(lVar1 + 0x20) = "OverHead";
  *(code **)(lVar1 + 0x30) = FUN_100456258;
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfc98 | 0x322;
  lVar1 = FUN_10042e498(param_1);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049bc4c(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 0x20100010;
  FUN_1004385f0(lVar1 + 0xa0);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Miho_Perk_ExposeCooldown_10185d2d8;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  FUN_1004385f0(lVar1 + 0x88);
  return;
}




void FUN_1004261f0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042ea44();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Miho_Perk_Expose_10185d2c8;
  *(undefined4 *)(lVar2 + 0x10) = 3;
  lVar1 = lVar1 + 0x88;
  FUN_1004386bc(lVar1);
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x20))(plVar3,"ExposeWeaknessMaxStacks");
  lVar2 = FUN_10043fc08(lVar1);
  lVar4 = FUN_10049c300(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Miho_TalentA_Marker_10185d330;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Miho_Perk_ExposeCooldown_10185d2d8);
  local_40 = FUN_100456240;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_1004560cc(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_Perk_Barrier_10185d2e8);
  local_40 = FUN_10045624c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_Perk_Expose_10185d2c8);
  return;
}




void FUN_100426328(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042e498();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100433e34(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_40 = FUN_100456278;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_100441e18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Miho_PerkTrigger");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar5 + 0x648));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10049bd60(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f19999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_10043fc08(lVar2);
  lVar5 = FUN_10049bb94(lVar2 + 0x10);
  if (PTR_s_Ability__Miho__A_10185a020 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Miho__A_10185a020;
    pcVar7 = PTR_s_Ability__Miho__A_10185a020;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  plVar3 = (long *)FUN_1004560cc(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Miho_Perk_RefreshAndRestore_10185d2e0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3ecccccd);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Miho_Mark_Lvl4");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 0x12;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_40 = FUN_100456284;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_40);
  return;
}




void FUN_10042657c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Miho__A_10185a020);
  local_40 = (code *)((ulong)local_40._4_4_ << 0x20);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
  plVar2 = (long *)FUN_1004519c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  local_40 = FUN_100456290;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x10))(plVar2,3,&local_40);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Miho__A_10185a020);
  local_40 = (code *)((ulong)local_40 & 0xffffffff00000000);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
  return;
}




void FUN_100426680(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_10045629c);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1004266cc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  lVar3 = *(long *)(*(long *)(lVar1 + 0x58) + 0x60);
  if (lVar3 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_10045f34c(lVar3 + 0x220);
  }
  fVar5 = (float)FUN_1003dfe60(lVar1,2,2,0x19,0);
  fVar4 = fVar4 / fVar5 + 0.1;
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar1 = FUN_10042e498(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10049bd10(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_10045645c);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_1004267bc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Miho_C_Projectile_Destroyed");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,
                              "build://Sounds/Miho/SFX/Default/miho_ability_c_projectile_kill.mp3");
                    /* WARNING: Could not recover jumptable at 0x000100426844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(0x3dcccccd);
  return;
}




void FUN_100426848(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_100437bc0();
  plVar2 = (long *)FUN_10049ddf0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 8))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))();
  local_30[0] = 0x3f800000;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))
                             (plVar2,PTR_s_Buff_Miho_Wave_ProjectileKillPFX_10185d2f0,local_30);
  local_40[0] = 0x40400000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x38))(plVar2,local_40);
  return;
}




void FUN_100426900(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",0);
  (**(code **)(*plVar2 + 0x70))(plVar2,1);
  lVar1 = FUN_10043fc08(lVar1);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Miho_Perk_ExposeCooldown_10185d2d8;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Miho_Perk_Expose_10185d2c8);
  local_30 = FUN_100456538;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_1004269cc(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  FUN_10049c4b0(lVar1);
  FUN_10049c210(lVar1);
  lVar1 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x1700;
  return;
}




void FUN_100426a0c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",1);
  lVar1 = FUN_10043fc08(lVar1);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Miho_Perk_ExposeCooldown_10185d2d8;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Miho_Perk_Expose_10185d2c8);
  local_30 = FUN_100456538;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_100426ac8(void)

{
  return;
}




void FUN_100426acc(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  
  lVar3 = FUN_10042e2c8();
  lVar3 = lVar3 + 0x10;
  lVar4 = FUN_10049b9b4(lVar3);
  *(undefined2 *)(lVar4 + 0x10) = 0x4005;
  lVar4 = FUN_100451f64(lVar3);
  puVar2 = PTR_s_Ability__Miho__B_CancelStance_10185a038;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Miho__C_10185a040;
  *(undefined **)(lVar4 + 0x18) = puVar2;
  lVar4 = FUN_100451f64(lVar3);
  puVar2 = PTR_s_Ability__Miho__B_Slash_10185a030;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Miho__B_10185a028;
  *(undefined **)(lVar4 + 0x18) = puVar2;
  plVar5 = (long *)FUN_10049ba04(lVar3);
  (**(code **)(*plVar5 + 0x30))(plVar5,"Idle","Ability02_Idle");
  plVar5 = (long *)FUN_10049ba04(lVar3);
  (**(code **)(*plVar5 + 0x30))(plVar5,"IdleCombat","Ability02_Idle");
  plVar5 = (long *)FUN_100441e68(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Miho_B_Stance_Warning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_10049b7c4(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Miho_AbilityB_Aura");
  uVar6 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar3 + 0x648));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar3 = FUN_10044cb4c(param_1);
  if (PTR_s_Ability__Miho__C_10185a040 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Miho__C_10185a040;
    pcVar8 = PTR_s_Ability__Miho__C_10185a040;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar8;
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar7;
  FUN_1004385f0(lVar3 + 0x10);
  lVar3 = FUN_10042ea44(param_1);
  lVar3 = FUN_10043fc08(lVar3 + 0x10);
  lVar4 = FUN_10049dbbc(lVar3 + 0x10);
  *(undefined8 *)(lVar4 + 0x18) = 0x300000002;
  *(undefined4 *)(lVar4 + 8) = 0x41c80000;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  FUN_1004385f0(lVar3 + 0x88);
  lVar3 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar3 + 0x10);
  lVar3 = FUN_10042fdc4(param_1);
  lVar3 = lVar3 + 0x10;
  plVar5 = (long *)FUN_10045309c(lVar3);
  (**(code **)(*plVar5 + 0x40))(plVar5,PTR_s_Ability__Miho__B_Slash_10185a030);
  plVar5 = (long *)FUN_10045309c(lVar3);
  (**(code **)(*plVar5 + 0x40))(plVar5,PTR_s_Ability__Miho__B_10185a028);
  plVar5 = (long *)FUN_10049c8e4(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100426d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Ability__Miho__B_10185a028);
  return;
}




void FUN_100426d1c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",2);
  lVar1 = FUN_10043fc08(lVar1);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Miho_Perk_ExposeCooldown_10185d2d8;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Miho_Perk_Expose_10185d2c8);
  local_30 = FUN_100456538;
  local_28 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  local_40[0] = 3;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_40);
  return;
}




void FUN_100426df4(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Miho_C_Shot");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3d75c28f,0x3f7ae148,0x3e75c28f);
  local_20[0] = 0x40200000;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_20);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100426e9c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_100426ed0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_100495bb8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_40);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_100495bec;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,2,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x33d6dfd1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100495c20;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100426fc0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_30;
  undefined4 local_28;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x5ca8459c;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495c54;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Miho__C_10185a040 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Miho__C_10185a040;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Miho__C_10185a040;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Miho__C_10185a040 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Miho__C_10185a040;
    pcVar5 = PTR_s_Ability__Miho__C_10185a040;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100495c88;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_1004270fc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x8a4069ee;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100495cbc;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Miho__A_10185a020 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Miho__A_10185a020;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Miho__A_10185a020;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Miho__A_10185a020 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Miho__A_10185a020;
    pcVar5 = PTR_s_Ability__Miho__A_10185a020;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(undefined4 *)(lVar1 + 0x10) = 2;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_100427238(void)

{
  return;
}




void FUN_10042723c(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043aa54(lVar1 + 0x10);
  local_30 = FUN_100495cf0;
  local_28 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  (**(code **)(*plVar2 + 0x18))();
  return;
}




void FUN_1004272a4(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_Ring_12mr");
  lVar2 = FUN_100438a9c(param_1);
  if (PTR_s_Ability__Ishtar__B_10185a068 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Ishtar__B_10185a068;
    pcVar5 = PTR_s_Ability__Ishtar__B_10185a068;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_Passive_B_AttackSpee_10185d350);
  lVar2 = FUN_100432f48(param_1);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100427384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_OnDeath_10185d348);
  return;
}




void FUN_100427388(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042fdc4();
  lVar2 = FUN_10049d96c(lVar1 + 0x10);
  *(char **)(lVar2 + 0x10) = "Ishtar_Minion";
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001004273d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_Minion_KillMyself_10185d368);
  return;
}




void FUN_1004273d4(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_100456544;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_20);
  return;
}




void FUN_100427424(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar2);
  lVar1 = FUN_100345d90();
  FUN_100450f38(auStack_78,param_1 + 0x68);
  lVar3 = *(long *)(lVar1 + 0x40);
  fVar4 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  fVar4 = DAT_101e94260;
  if (DAT_101e94260 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar5 = (float)FUN_1003df710(lVar1,1,1);
  fVar4 = fVar4 * fVar5;
  fVar8 = *(float *)(lVar3 + 0x54) + *(float *)(lVar3 + 0x108) * (*(float *)(lVar3 + 0x270) + 1.0);
  NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar3 + 0x1bc),DAT_101e9433c);
  fVar8 = *(float *)(lVar3 + 0x58) + *(float *)(lVar3 + 0x10c) * (*(float *)(lVar3 + 0x274) + 1.0);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar7 = DAT_101e9427c * fVar5;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar3 + 0x1c0),DAT_101e94340);
  fVar5 = DAT_101e94280 * fVar5;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  lVar3 = FUN_100430f18(auStack_78);
  uVar6 = FUN_1003df710(lVar1,2,1);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x20) = uVar6;
  *(undefined2 *)(lVar3 + 0x24) = 1;
  lVar1 = FUN_100430f18(auStack_78);
  *(mach_header **)(lVar1 + 0x10) = &__mh_execute_header;
  *(float *)(lVar1 + 0x20) = fVar4;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_78);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000007;
  *(float *)(lVar1 + 0x20) = fVar7;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_78);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000008;
  *(float *)(lVar1 + 0x20) = fVar5;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_78);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000023;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_10043101c(auStack_78);
  fVar4 = DAT_101e94260;
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar5 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(float *)(lVar1 + 0x14) = fVar4;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  return;
}




void FUN_10042762c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100456624;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_1004565d8;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1004276e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_MinionShadow");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_1004560cc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ishtar_MinionTracker_10185b7f0);
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
  (**(code **)(*plVar2 + 0x28))();
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10043aa04(lVar1);
  plVar2 = (long *)FUN_10049de40(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ishtar_MinionTracker_10185b7f0);
  local_50[0] = 0xffffffff;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_50);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_MinionDespawn");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_100456558;
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_100427874(void)

{
  long lVar1;
  
  lVar1 = FUN_10042ea44();
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_10042788c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_60 [2];
  undefined4 local_58;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_Minion_Active");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_60[0] = 0x3f000000;
  local_58 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_60);
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_Minion_Warning");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_60[0] = 0x3f000000;
  local_58 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_60);
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  return;
}




void FUN_1004279cc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_50;
  undefined4 local_48;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40 = FUN_100456754;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_40,1,1);
  (**(code **)(*plVar2 + 0x98))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40 = FUN_100456754;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_40,1,1);
  local_50 = FUN_100456768;
  local_48 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,&local_50);
  (**(code **)(*plVar2 + 0x98))();
  return;
}




void FUN_100427ac8(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x1600;
  return;
}




void FUN_100427aec(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_50;
  undefined4 local_48;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40 = FUN_10045677c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_40,1,1);
  lVar3 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar3 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar3 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40 = FUN_10045677c;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_40,1,1);
  local_50 = FUN_100456768;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_50);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/Ishtar/SFX/Default/ishtar_ability_A_hit_1.mp3")
  ;
  (**(code **)(*plVar2 + 0x28))(0x3e99999a);
  return;
}




void FUN_100427c00(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Ability__Ishtar_Minion__Movement_10185a080);
                    /* WARNING: Could not recover jumptable at 0x000100427c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,FUN_10043bfd8);
  return;
}




void FUN_100427c40(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100427c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Ishtar_Minion__Spin_10185a088);
  return;
}




void FUN_100427c6c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",1);
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ishtar_Minion_B_Slow_10185d380);
  local_40 = FUN_100456790;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_1004560cc(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ishtar_B_MovementSpeed_10185d390)
  ;
  local_40 = FUN_1004567a4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",1);
  local_40 = FUN_1004567b8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_40);
  return;
}




void FUN_100427dbc(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004567cc;
  local_18 = 3;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100427df8(void)

{
  return;
}




void FUN_100427dfc(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049d090(lVar1);
  *(undefined4 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x20) = FUN_100458ac4;
  FUN_10049d364(lVar1);
  lVar1 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x4004;
  return;
}




void FUN_100427e50(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049d090(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x20) = FUN_100458afc;
  FUN_10049d364(lVar1 + 0x10);
  return;
}




void FUN_100427e90(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004567e0;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100427ecc(void)

{
  return;
}




void FUN_100427ed0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_60;
  undefined4 local_58;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_60 = FUN_1004567f4;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x12,1,&local_60);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_60 = FUN_100456808;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x18,1,&local_60);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_60 = FUN_100456808;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x17,1,&local_60);
  plVar2 = (long *)FUN_10049bef0(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Ultimate_Active");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Ability03_Idle");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","Ability03_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","Ability03_Attack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","Ability03_Attack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","Ability03_Attack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","Ability03_MoveStart");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","Ability03_MoveStop");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_Fortified");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftBlade_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsLeft");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftBlade_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsLeft");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightBlade_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsRight");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightBlade_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsRight");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_HandFire");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_HandFire");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043594c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Ability03_Exit");
  (**(code **)(*plVar2 + 0x28))();
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ishtar_AbilityC_Exit");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar4 + 0x69c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_Fortified_End");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftBlade_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftBlade_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightBlade_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightBlade_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_HandFire_End");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_C_HandFire_End");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100428598(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_100431114();
  *(undefined4 *)(lVar1 + 0x28) = 1;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 0x20;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ishtar_TalentA_Indomitable_10185d3a0);
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 1;
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Ishtar_TalentA_Indomitable_10185d3a0);
  local_40[0] = 0xffffffff;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  return;
}




void FUN_100428640(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x93fb3365;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_100495d24;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_1004286b0(void)

{
  return;
}




void FUN_1004286b4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10045681c();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Ishtar_TalentA_Indomitable_10185d3a0;
  *(undefined4 *)(lVar2 + 0x10) = 10;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x88);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_TalentA_IndomitableM_10185d3a8);
  plVar3 = (long *)FUN_1004385a0(lVar1 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_TalentA_IndomitableM_10185d3a8);
  lVar1 = FUN_10043099c(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_100495d58;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,7,1,&local_40);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_100495d8c;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,8,1,&local_40);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_100495dc0;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,1,&local_40);
  (**(code **)(*plVar3 + 0x38))();
  return;
}




void FUN_100428804(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_A_Indomitable");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x000100428858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10042885c(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x23,"Effect_Root",0);
  return;
}




void FUN_100428870(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_100495df4;
  local_28 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_30);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1004288e8(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_100433910();
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Perk_Cooldown_10185d3b8);
  local_20[0] = 0x41200000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_20);
  return;
}




void FUN_10042894c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x3d4ccccd;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x19,1,local_30);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1004289c4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_MusicNote_A");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0,0);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  local_50[0] = 0x43340000;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b888);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840);
  plVar2 = (long *)FUN_100433de4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_40[0] = 1;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0);
  local_40[0] = 0xffffffff;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  return;
}




void FUN_100428bc4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_MusicNote_A");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0,0);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b880);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828);
  plVar2 = (long *)FUN_100433de4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_40[0] = 1;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0);
  local_40[0] = 0xffffffff;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  return;
}




void FUN_100428db4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_MusicNote_A");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0,0);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b880);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b888);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  plVar2 = (long *)FUN_100433de4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_40[0] = 1;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0);
  local_40[0] = 0xffffffff;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  return;
}




void FUN_100428fa4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_MusicNote_B");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b888);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840);
  plVar2 = (long *)FUN_100433de4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_40[0] = 1;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8);
  local_40[0] = 0xffffffff;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  return;
}




void FUN_100429194(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_MusicNote_B");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b880);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828);
  plVar2 = (long *)FUN_100433de4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_40[0] = 1;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8);
  local_40[0] = 0xffffffff;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  return;
}




void FUN_100429384(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_MusicNote_B");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b880);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b888);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  plVar2 = (long *)FUN_100433de4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_40[0] = 1;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8);
  local_40[0] = 0xffffffff;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_40);
  return;
}




void FUN_100429574(void)

{
  return;
}




void FUN_100429578(void)

{
  return;
}




void FUN_10042957c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 local_70 [2];
  undefined4 local_68;
  
  lVar1 = FUN_100432f48();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_70[0] = 1;
  local_68 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_70);
  lVar1 = FUN_10045681c(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_10043fc08(lVar1);
  lVar4 = FUN_10049c300(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8;
  *(undefined4 *)(lVar4 + 0x10) = 4;
  lVar3 = lVar3 + 0x88;
  plVar2 = (long *)FUN_100433e34(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_L_10185b890);
  plVar2 = (long *)FUN_100433e34(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878);
  plVar2 = (long *)FUN_100433de4(lVar3);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  local_70[0] = 1;
  local_68 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_70);
  lVar3 = FUN_10043fc08(lVar1);
  lVar4 = FUN_10049c300(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0;
  *(undefined4 *)(lVar4 + 0x10) = 3;
  lVar3 = FUN_10043fc08(lVar3 + 0x88);
  lVar4 = FUN_10049c300(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8;
  lVar3 = lVar3 + 0xa0;
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C2_10185b8a0);
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C3_10185b8a8);
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C4_10185b8b0);
  plVar2 = (long *)FUN_100433e34(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C1_10185b898);
  lVar3 = FUN_10043fc08(lVar1);
  lVar4 = FUN_10049c300(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0;
  *(undefined4 *)(lVar4 + 0x10) = 2;
  lVar3 = FUN_10043fc08(lVar3 + 0x88);
  lVar4 = FUN_10049c300(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  lVar3 = lVar3 + 0x88;
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C1_10185b898);
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C3_10185b8a8);
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C4_10185b8b0);
  plVar2 = (long *)FUN_100433e34(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C2_10185b8a0);
  lVar3 = FUN_10043fc08(lVar1);
  lVar4 = FUN_10049c300(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  lVar3 = FUN_10043fc08(lVar3 + 0x88);
  lVar4 = FUN_10049c300(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8;
  *(undefined4 *)(lVar4 + 0x10) = 2;
  lVar3 = lVar3 + 0x88;
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C1_10185b898);
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C2_10185b8a0);
  plVar2 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C4_10185b8b0);
  plVar2 = (long *)FUN_100433e34(lVar3);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C3_10185b8a8);
  lVar1 = FUN_10043fc08(lVar1);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Viola_MusicNoteB_Tracker_10185d3c8;
  *(undefined4 *)(lVar3 + 0x10) = 3;
  lVar1 = FUN_10043fc08(lVar1 + 0x88);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Viola_MusicNoteA_Tracker_10185d3c0;
  lVar1 = lVar1 + 0xa0;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C1_10185b898);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C2_10185b8a0);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C3_10185b8a8);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Grant_C4_10185b8b0);
  return;
}




void FUN_100429964(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042ea44();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_L_10185b890;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x0001004299b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878);
  return;
}




void FUN_1004299b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042ea44();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_L_10185b890;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000100429a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b880);
  return;
}




void FUN_100429a0c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042ea44();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_L_10185b890;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000100429a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b888);
  return;
}




void FUN_100429a60(void)

{
  return;
}




void FUN_100429a64(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_Note_Position_Tracker");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_20[0] = 0x3dcccccd;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_20);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  return;
}




void FUN_100429b14(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_Note_Position_Tracker");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_20[0] = 0x3dcccccd;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_20);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  return;
}




void FUN_100429bc4(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Note_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_Note_Position_Tracker");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_20[0] = 0x3dcccccd;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_20);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  return;
}




void FUN_100429c74(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_30);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Viola__C_10185a0b8;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__C0_10185a1d8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_100429d3c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_30);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Viola__C2_10185a1c0;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__C0_10185a1d8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_100429e04(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0x3f800000,0);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_30);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Viola__C3_10185a1c8;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__C0_10185a1d8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_100429ecc(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C4");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0x3f800000);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_30);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Viola__C4_10185a1d0;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__C0_10185a1d8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_100429f94(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C1_Aura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0,0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x40c00000);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Ability03_v1");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","Ability03_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","Ability03_MoveStart");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","Ability03_MoveStop");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Viola_C1_Song");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6c8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar4 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100456904;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Song_1_Control_10185d3e0);
  local_40 = FUN_1003d1024;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C2_Aura_10185b8c0);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C3_Aura_10185b8c8);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,DAT_10185b8d0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Viola_C_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6d8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10042a2bc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C2_Aura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x40c00000);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Ability03_v2");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","Ability03_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","Ability03_MoveStart");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","Ability03_MoveStop");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Viola_C2_Song");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6cc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar4 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100456904;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Song_2_Control_10185d3e8);
  local_40 = FUN_1003d1024;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C1_Aura_10185b870);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C3_Aura_10185b8c8);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,DAT_10185b8d0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Viola_C_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6d8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10042a5e4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C3_Aura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0x3f800000,0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x40c00000);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Ability03_v3");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","Ability03_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","Ability03_MoveStart");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","Ability03_MoveStop");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Viola_C3_Song");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6d0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar4 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100456984;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Song_3_Control_10185d3f0);
  local_40 = FUN_1003d1024;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C1_Aura_10185b870);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C2_Aura_10185b8c0);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,DAT_10185b8d0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Viola_C_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6d8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10042a90c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C4_Aura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0,0x3f800000);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x40c00000);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Ability03_v4");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","Ability03_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","Ability03_MoveStart");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","Ability03_MoveStop");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","Ability03_BasicAttack");
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Viola_C4_Song");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6d4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar4 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100456984;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Song_4_Control_10185d3f8);
  local_40 = FUN_100456a04;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C1_Aura_10185b870);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C2_Aura_10185b8c0);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C3_Aura_10185b8c8);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Viola_C_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6d8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10042ac34(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_A_Impact");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Viola_A_Impact");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6b8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e95c(param_1);
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100456a18);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042ad1c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100456c08;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10042ad50(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Cleanse_SPD_10185d428);
  local_30 = FUN_100456c1c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_SpeedBoost_10185d430);
  local_30 = FUN_100456c30;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_10042adf4(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_ATK_CDR_10185d420);
  local_20 = FUN_100456c44;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_10042ae50(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C_DoT_10185d410);
  local_40[0] = 0x40a00000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,DAT_10185a468);
  local_40[0] = 0x40a00000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_10042aef0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Drowsy_10185d400);
  local_40 = FUN_100456c58;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_C_Slow_10185d418);
  local_40 = FUN_100456c6c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C4_Cooldown");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10042b00c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049c148(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,3);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C4_Drowsy");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0,0x3f800000);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3e4ccccd);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3dcccccd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Viola_Sleep_10185d408);
  local_40 = FUN_100456c80;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_10042b13c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  FUN_100435a7c(param_1,0x1f,"Effect_Sleep","OverHead");
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined2 *)(lVar1 + 0x5c) = 0xc;
  *(undefined4 *)(lVar1 + 0x54) = 0x10;
  *(code **)(lVar1 + 0x30) = FUN_100456c94;
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  FUN_10049c260(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049c148(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Idle");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00010042b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}




void FUN_10042b240(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE_PER_SEC",2);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C3_DoT");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0x3f800000,0);
  local_30[0] = 0x3e4ccccd;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3dcccccd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  return;
}




void FUN_10042b3a8(void)

{
  FUN_1004305a0(0x3f800000);
  return;
}




void FUN_10042b3b0(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e95c();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_100456cb0;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,2,&local_30);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_100456cc4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x19,1,&local_30);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Viola_C2_ATK_CDR_BOOST");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  local_30 = (code *)CONCAT44(local_30._4_4_,0x3f000000);
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3dcccccd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  return;
}




void FUN_10042b4d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x12;
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar1 = FUN_100436540(auStack_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(char **)(lVar1 + 0x10) = "Effect_Viola_C1_Cleanse";
  *(undefined2 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x72) = 0;
  *(undefined4 *)(lVar1 + 0x58) = 0x3dcccccd;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x2a;
  lVar1 = FUN_100436780(auStack_38);
  *(undefined4 *)(lVar1 + 0x10) = 0xd;
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100436680(auStack_38);
  *(undefined4 *)(lVar1 + 0x18) = 2;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_10042b594(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100456cd8;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10042b5d0(void)

{
  return;
}




void FUN_10042b5d4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433910();
  if (PTR_s_Ability__Viola__C_10185a0b8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Viola__C_10185a0b8;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Viola__C_10185a0b8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Enemy_10185d460);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Ally_10185d468);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Viola__C2_10185a1c0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Viola__C2_10185a1c0;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Viola__C2_10185a1c0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Enemy_10185d460);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Ally_10185d468);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Viola__C3_10185a1c8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Viola__C3_10185a1c8;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Viola__C3_10185a1c8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Enemy_10185d460);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Ally_10185d468);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Viola__C4_10185a1d0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Viola__C4_10185a1d0;
    pcVar5 = PTR_s_Ability__Viola__C4_10185a1d0;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Enemy_10185d460);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Viola_TalentB_Control_Ally_10185d468);
  local_60[0] = 0x40a00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
  return;
}




void FUN_10042b924(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Viola__A_10185a0a8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__A_10185a0a8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Viola__A_10185a0a8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Viola__A_10185a0a8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__A_10185a0a8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Viola__A_10185a0a8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(undefined4 *)(lVar1 + 0x10) = 2;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Viola__B_10185a0b0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__B_10185a0b0;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Viola__B_10185a0b0;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Viola__B_10185a0b0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__B_10185a0b0;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Viola__B_10185a0b0;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(undefined4 *)(lVar1 + 0x10) = 2;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Viola__C_10185a0b8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__C_10185a0b8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Viola__C_10185a0b8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__A_10185a0a8;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__A_10185a0a8);
  local_60._0_4_ = 0;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__B_10185a0b0;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__B_10185a0b0);
  local_60._0_4_ = 0;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Viola__C2_10185a1c0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__C2_10185a1c0;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Viola__C2_10185a1c0;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__A_10185a0a8;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__A_10185a0a8);
  local_60._0_4_ = 0;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__B_10185a0b0;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__B_10185a0b0);
  local_60._0_4_ = 0;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Viola__C3_10185a1c8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__C3_10185a1c8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Viola__C3_10185a1c8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__A_10185a0a8;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__A_10185a0a8);
  local_60._0_4_ = 0;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__B_10185a0b0;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__B_10185a0b0);
  local_60._0_4_ = 0;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Viola__C4_10185a1d0 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Viola__C4_10185a1d0;
    pcVar6 = PTR_s_Ability__Viola__C4_10185a1d0;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar7;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__A_10185a0a8;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__A_10185a0a8);
  local_60._0_4_ = 0;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar2 = FUN_10049c934(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Viola__B_10185a0b0;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Viola__B_10185a0b0);
  local_60 = (code *)((ulong)local_60._4_4_ << 0x20);
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x165f5f8d;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100495f28;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  return;
}




void FUN_10042bec8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495f5c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042bf48(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495f90;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042bfc8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100495ea8;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Viola_TalentB_Enemy_DamageI_10185d450);
  local_30[0] = 0x3e4ccccd;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042c070(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100495e28;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Viola_TalentB_Ally_DamageDe_10185d458);
  local_30[0] = 0x3e4ccccd;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042c118(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10043099c();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100456e28;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined2 *)(lVar1 + 0x60) = 0x101;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042c170(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_100433910();
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Karas_PerkApply_10185d470);
  local_20 = FUN_100456e1c;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_10042c1d8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00010042c224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",1);
  return;
}




void FUN_10042c228(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Karas__A_Cancel_10185a128;
  *(undefined **)(lVar3 + 0x10) = PTR_s_Ability__Karas__A_10185a110;
  *(undefined **)(lVar3 + 0x18) = puVar1;
  lVar3 = FUN_10049d090(lVar2);
  *(undefined4 *)(lVar3 + 0x28) = 1;
  *(code **)(lVar3 + 0x20) = FUN_100458afc;
  FUN_10049d460(lVar2);
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"MoveStart","Ability03_MoveStart");
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Idle","Ability03_Idle");
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"IdleSheath","Ability03_Idle");
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"IdleCombat","Ability03_Idle");
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"IdleBrush","Ability03_Idle");
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"MoveStop","Ability03_MoveStop");
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Move","Ability03_Move");
  plVar4 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Sprint","Ability03_Move");
  plVar4 = (long *)FUN_10049d8cc(lVar2);
  (**(code **)(*plVar4 + 0x38))(plVar4,"Ability03_Idle");
  FUN_10049d364(lVar2);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_10042c3d8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_100496094;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x50) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x52d3abd0;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043aa54(lVar1 + 0x10);
  local_40 = FUN_1004960c8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_10042c4a8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_1004960fc;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,2,&local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x910cf3f7;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100496130;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  return;
}




void FUN_10042c55c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xd4f4538d;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_100496164;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_10042c5cc(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100456e34;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10042c600(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100456e48;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10042c634(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x800;
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_30[0] = 0;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  lVar1 = FUN_100432f48(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_30[0] = 0;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10045681c(param_1);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Shin_SetFlameMeter_10185b9b8;
  *(undefined4 *)(lVar3 + 0x10) = 4;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x88);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Shin_ActivateFlames_10185d4a0);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0xa0);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Shin_ActivateFlames_10185d4a0);
  return;
}




void FUN_10042c74c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433910();
  if (PTR_s_Ability__Shin__A_10185a148 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Shin__A_10185a148;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Shin__A_10185a148;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Shin_SetFlameMeter_10185b9b8);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Shin__B_10185a158 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Shin__B_10185a158;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Shin__B_10185a158;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Shin_SetFlameMeter_10185b9b8);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Shin__C_10185a168 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Shin__C_10185a168;
    pcVar5 = PTR_s_Ability__Shin__C_10185a168;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010042c8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Shin_SetFlameMeter_10185b9b8);
  return;
}




void FUN_10042c8c8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100430a84(lVar2);
  local_30 = FUN_100456e5c;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,&local_30);
  lVar4 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Shin__A1_10185a150;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Shin__A_10185a148;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  lVar4 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Shin__B1_10185a160;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Shin__B_10185a158;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  lVar4 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Shin__C2_10185a1b8;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Shin__C_10185a168;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_UpperShoulder_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_UpperShoulder_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_UpperShoulder_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_UpperShoulder_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Leg_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Leg_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Leg_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Leg_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_10042cacc(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100456e70;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10042cb00(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x23,"Effect_Shin_B2_Root",0);
  return;
}




void FUN_10042cb14(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Weapon_Head");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Shin_Weapon_Head");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Wheel_R");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Shin_Wheel_R");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Wheel_L");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Shin_Wheel_L");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042cc64(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x2b0e7d97;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_30 = FUN_100496198;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  lVar2 = FUN_100433030(param_1);
  if (PTR_s_Ability__Shin__A_10185a148 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Shin__A_10185a148;
    pcVar5 = PTR_s_Ability__Shin__A_10185a148;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 0x58ed1ea1;
  *(code **)(lVar2 + 0x10) = FUN_1004961cc;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_10042cd5c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_100496200;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,2,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x941b6570;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100496234;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Shin__B_10185a158 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Shin__B_10185a158;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Shin__B_10185a158;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Shin__B_10185a158;
  *(code **)(lVar1 + 0x18) = FUN_100496268;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Shin__B1_10185a160 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Shin__B1_10185a160;
    pcVar5 = PTR_s_Ability__Shin__B1_10185a160;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Shin__B1_10185a160;
  *(code **)(lVar1 + 0x18) = FUN_100496268;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  return;
}




void FUN_10042cefc(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0xc8a9c0ad;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_30 = FUN_10049629c;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  lVar2 = FUN_100433030(param_1);
  if (PTR_s_Ability__Shin__C_10185a168 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Shin__C_10185a168;
    pcVar5 = PTR_s_Ability__Shin__C_10185a168;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 0x56ed1b7b;
  *(code **)(lVar2 + 0x10) = FUN_1004962d0;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  return;
}




void FUN_10042cff0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_60;
  undefined4 local_58;
  
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Amael_A_Charging_10185b920);
  local_60 = FUN_100456cec;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Amael_Ability_A_Charge");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar2 + 0x76c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  lVar5 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Amael__A_Cancel_10185a0f0;
  *(undefined **)(lVar5 + 0x10) = PTR_s_Ability__Amael__A_10185a0d8;
  *(undefined **)(lVar5 + 0x18) = puVar1;
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleSheath","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability01_Move_Start");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability01_Move_Stop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartCombat","Ability01_Move_Start");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopCombat","Ability01_Move_Stop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveSheath","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveBrush","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartBrush","Ability01_Move_Start");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopBrush","Ability01_Move_Stop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability01_Move");
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Amael_A_Charging_10185b920);
  plVar3 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Amael_A_Charged_10185b930);
  plVar3 = (long *)FUN_10049c8e4(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Amael__A_10185a0d8);
  return;
}




void FUN_10042d324(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Amael_Ability01_Charge");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Amael_Ability01_Charge");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10049bbfc(lVar1);
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Amael_Ability_A_Charge");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar1 + 0x76c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010042d480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Amael_A_Charged_10185b930);
  return;
}




void FUN_10042d484(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e498();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_100456d6c;
  FUN_1004385f0(lVar1 + 0x88);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Amael_Ability01_Charged");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Amael_Ability01_Charged");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_10049bbfc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010042d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))();
  return;
}




void FUN_10042d598(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_100456dfc;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,1,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10042d604(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100435a7c(param_1,0x1f,"Effect_Stunned_buff","OverHead");
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049c148(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010042d650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,2);
  return;
}




void FUN_10042d654(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x76c25d95;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_100495fc4;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_10042d6c4(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100430a84(lVar2 + 0x10);
  local_30 = FUN_100495ff8;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,7,2,&local_30);
  lVar2 = FUN_100433030(param_1);
  if (PTR_s_Ability__Amael__B_10185a0e0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Amael__B_10185a0e0;
    pcVar5 = PTR_s_Ability__Amael__B_10185a0e0;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Amael__B_10185a0e0;
  *(code **)(lVar2 + 0x18) = FUN_1003d181c;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  return;
}




void FUN_10042d790(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_30;
  undefined4 local_28;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10049602c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_30);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Amael__C_10185a0e8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Amael__C_10185a0e8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Amael__C_10185a0e8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Amael__C_10185a0e8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Amael__C_10185a0e8;
    pcVar5 = PTR_s_Ability__Amael__C_10185a0e8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100496060;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}




void FUN_10042d8a8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x800;
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_40._0_4_ = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_100432f48(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_40 = (code *)((ulong)local_40._4_4_ << 0x20);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10045681c(param_1);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Amael_EmpowerMeter_10185b918;
  *(undefined4 *)(lVar3 + 0x10) = 2;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Amael_PowerPoseDmg_10185d4d8);
  local_40 = FUN_100456e10;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x88);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Amael_PowerReady_10185b948);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0xa0);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Amael_PowerPoseDmg_10185d4d8);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0xa0);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Amael_PowerReady_10185b948);
  return;
}




void FUN_10042da28(void)

{
  return;
}




void FUN_10042da2c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100456f74;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10042da60(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Rona_Whirlwind_Impact_Enemy");
                    /* WARNING: Could not recover jumptable at 0x00010042daac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_10042dab0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_1004385a0(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x48))();
  plVar3 = (long *)FUN_1004385a0(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x50))();
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  lVar4 = FUN_10049b9b4(lVar2);
  *(undefined2 *)(lVar4 + 0x10) = 0x1500;
  plVar3 = (long *)FUN_100433e34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Invulnerable_10185a588);
  lVar2 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Maaya__C1_10185a1a0;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Maaya__C_10185a198;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_10042db50(void)

{
  return;
}




void FUN_10042db54(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar4 = *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100456ef4;
  plVar3 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE_PER_SEC",0);
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero000_Ring_A_1mr");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_50);
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero000_Ring_A_2mr");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_50);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_DelayedKill_10185bd70);
  local_50[0] = 0x3e99999a;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  return;
}




void FUN_10042dd60(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar4 = *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100456e84;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Maaya_A_Selected_10185d510);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_100452520);
  return;
}




void FUN_10042de58(void)

{
  return;
}




void FUN_10042de5c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010042de9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Maaya__Gravitypull_10185a1a8);
  return;
}




void FUN_10042dea0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  int local_ec;
  undefined1 local_e8;
  undefined4 local_e0 [15];
  float local_a4;
  float local_90;
  undefined1 local_80;
  undefined8 local_7c;
  long local_70;
  long local_68;
  
  FUN_10042e1f0(param_1,&local_68,&local_70);
  lVar7 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
  if (((*(int *)(local_70 + 0x10) == *(int *)(lVar7 + 0x260)) && (*(int *)(local_70 + 8) == 0)) &&
     ((*(byte *)(local_70 + 0xc) >> 2 & 1) != 0)) {
    lVar6 = *(long *)(local_70 + 0x20);
    lVar5 = FUN_100345d90(*(undefined4 *)(local_68 + 0x308));
    for (lVar6 = *(long *)(lVar6 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184daa8) {
        uVar10 = FUN_1003dfe60(lVar5,1,4,0x19,0);
        iVar4 = FUN_1003ba8f4(lVar6,PTR_s_Buff_Adagio_ArcaneFire_10185a200);
        iVar1 = *(int *)(lVar5 + 0x260);
        iVar2 = *(int *)(lVar7 + 0x260);
        if (iVar4 != 0) {
          fVar8 = (float)FUN_1003dfe60(lVar5,1,5,0x19,0);
          puVar3 = PTR_s_Buff_Adagio_Talent_AvengingWrath_10185c6c8;
          lVar6 = FUN_100345d90(iVar1);
          if ((lVar6 != 0) && (iVar4 = FUN_1003a47d0(lVar6,puVar3), iVar4 != 0)) {
            local_e0[0] = DAT_101d909dc;
            fVar9 = (float)FUN_1003dfee8(lVar5,local_e0,2,9);
            fVar8 = fVar9 * fVar8;
          }
          uVar10 = (ulong)(uint)(fVar8 + (float)uVar10);
        }
        if (iVar1 == iVar2) goto LAB_10042df60;
        goto LAB_10042df7c;
      }
    }
    uVar10 = FUN_1003dfe60(lVar5,1,4,0x19,0);
    if (*(int *)(lVar5 + 0x260) == *(int *)(lVar7 + 0x260)) {
LAB_10042df60:
      fVar8 = (float)FUN_1003dfe60(lVar5,1,6,0x19,0);
      uVar10 = (ulong)(uint)(fVar8 + (float)uVar10);
    }
LAB_10042df7c:
    FUN_1003462a0(uVar10,local_e0,*(undefined4 *)(local_70 + 0x10),*(undefined4 *)(local_70 + 0x18),
                  1,1,local_70 + 100,**(undefined8 **)(local_68 + 0x40),0,1);
    if (*(char *)(local_70 + 0x60) != '\0') {
      local_80 = 1.1920929e-07 <= ABS(*(float *)(local_70 + 100)) ||
                 1.1920929e-07 <= ABS(*(float *)(local_70 + 0x68));
      local_7c = *(undefined8 *)(local_70 + 100);
    }
    if (*(int *)(local_70 + 0x10) != *(int *)(lVar5 + 0x260)) {
      lVar6 = *(long *)(lVar5 + 0x40);
      fVar8 = *(float *)(lVar6 + 100) +
              *(float *)(lVar6 + 0x118) * (*(float *)(lVar6 + 0x280) + 1.0);
      NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar6 + 0x1cc),DAT_101e9434c);
      fVar8 = *(float *)(lVar6 + 0x70) +
              *(float *)(lVar6 + 0x124) * (*(float *)(lVar6 + 0x28c) + 1.0);
      local_a4 = DAT_101e9428c + local_a4;
      NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar6 + 0x1d8),DAT_101e94358);
      local_90 = DAT_101e94294._4_4_ + local_90;
    }
    FUN_10010cbe0(local_e0);
    if (*(ushort *)(local_68 + 0x344) < 2) {
      local_f4 = *(undefined4 *)(lVar7 + 0x260);
      uStack_f0 = *(undefined4 *)(local_68 + 0x30c);
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_110 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_110,&DAT_101e47d30);
    }
    else {
      local_f4 = *(undefined4 *)(lVar7 + 0x260);
      uStack_f0 = *(undefined4 *)(local_68 + 0x30c);
      local_ec = *(ushort *)(local_68 + 0x344) - 1;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_110 = &PTR_FUN_1014972c0;
      local_e8 = 1;
      FUN_1004968dc(&local_110,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10042e1f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  puVar1 = PTR_s___COMBAT_PARAMS___10185d7d8;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___COMBAT_PARAMS___10185d7d8);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_3 = *puVar4;
  }
  return;
}




undefined8 FUN_10042e2a4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
}




undefined4 FUN_10042e2b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x308);
}




undefined2 FUN_10042e2b8(long param_1)

{
  return *(undefined2 *)(param_1 + 0x344);
}




undefined4 FUN_10042e2c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30c);
}




void FUN_10042e2c8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c618;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042e3b0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c038;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042e498(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149bf68;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042e580(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101498d90;
  puVar3[1] = 0;
  puVar3[5] = &PTR_FUN_101498e68;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = DAT_101dc0b88;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined1 *)((long)puVar3 + 0x44) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042e694(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xc] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_1014996a0;
  puVar3[1] = 0;
  *(undefined4 *)((long)puVar3 + 0x4c) = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined2 *)(puVar3 + 9) = 0;
  puVar3[10] = 0xffffffff;
  *(undefined1 *)(puVar3 + 0xb) = 0xff;
  *(undefined4 *)((long)puVar3 + 0x5a) = 0xffff0000;
  *(undefined2 *)((long)puVar3 + 0x5e) = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined4 FUN_10042e7bc(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




float FUN_10042e7d0(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  fVar3 = (float)FUN_1003dfe60(lVar2,0,7,0x19,0);
  fVar4 = (float)FUN_1003dfe60(lVar2,0,8,0x19,0);
  return fVar3 + fVar4 * *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
}




long FUN_10042e864(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x308) == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (*(int *)(lVar1 + 0x260) != *(int *)(param_1 + 0x308)) {
      lVar1 = FUN_100345d90();
      return lVar1;
    }
  }
  return lVar1;
}




void FUN_10042e898(long *param_1,float *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_48 [2];
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Adagio_Talent_GiftOfLife_10185c6d0);
  fVar3 = 0.0;
  if (iVar1 != 0) {
    fVar4 = (float)FUN_10042e7d0(param_1);
    local_48[0] = DAT_101d909e4;
    fVar3 = (float)FUN_1003dfee8(lVar2,local_48,0,9);
    fVar3 = fVar3 * fVar4;
  }
  *param_2 = fVar3;
  *param_3 = 0xbf800000;
  return;
}




void FUN_10042e95c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c7b8;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042ea44(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c108;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042eb2c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,9,0x19,0);
  return;
}




void FUN_10042eb40(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar3 = FUN_10049be00(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x58) = 2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + 0x10) = *param_2;
  *(undefined4 *)(lVar3 + 0x18) = uVar1;
  plVar4 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Slowed_buff");
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_10042ebc4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_100443914();
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Withdraw_Channel");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010042ec28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xf0))();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_10042ec2c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar4 = *(float *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
  fVar2 = *(float *)(lVar1 + 0x44) + *(float *)(lVar1 + 0xf8) * (*(float *)(lVar1 + 0x260) + 1.0);
  fVar3 = (float)NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1ac),_DAT_101e9432c);
  fVar2 = _DAT_101e9426c;
  if (_DAT_101e9426c <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (float)FUN_1003df710(param_1,4,1);
  FUN_1003df710(param_1,5,1);
  return fVar4 - fVar3 * fVar2;
}




void FUN_10042ecbc(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  return;
}




void FUN_10042ed28(long param_1)

{
  undefined4 uVar1;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined1 local_48;
  
  uVar1 = FUN_10042ee18();
  local_54 = *(undefined4 *)(param_1 + 0x260);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_70 = &PTR_FUN_101497330;
  uStack_50 = 0xcd8619d8;
  local_48 = 1;
  local_4c = uVar1;
  FUN_10049650c(&local_70,&DAT_101e47d30);
  local_ac = *(undefined4 *)(param_1 + 0x260);
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c8 = &PTR_FUN_101496b18;
  local_a4 = DAT_1018589d8;
  local_98 = 1;
  local_80 = 0;
  local_8c = 0;
  local_94 = 0;
  local_78 = DAT_101dc0b88;
  DAT_1018589d8 = DAT_1018589d8 + 1;
  uStack_a8 = local_ac;
  local_9c = uVar1;
  local_a0 = FUN_1003d4e0c(PTR_s_Buff_Alpha_Reboot_Cooldown_10185cb10);
  FUN_10049639c(&local_c8,&DAT_101e47d30);
  return;
}




undefined1  [16] FUN_10042ee18(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  float fVar7;
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x60);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x239) & 0x1c) == 0)) {
    FUN_1003dfe60(param_1,2,0,1,1);
    fVar3 = extraout_s0;
    uVar5 = extraout_var;
    uVar6 = extraout_var_00;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x1f8);
    if (lVar2 == 0) {
      fVar3 = 0.0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      fVar3 = *(float *)(lVar2 + 0x60);
      uVar5 = 0;
      uVar6 = 0;
      if (fVar3 < 0.0) {
        fVar3 = (*(float *)(lVar2 + 0x58) + *(float *)(lVar2 + 0x54)) * *(float *)(lVar2 + 0x5c);
        uVar5 = 0;
        uVar6 = 0;
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x40);
  fVar7 = *(float *)(lVar2 + 0x9c) + *(float *)(lVar2 + 0x150) * (*(float *)(lVar2 + 0x2b8) + 1.0);
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar2 + 0x204),DAT_101e94384);
  auVar4._0_4_ = fVar3 - fVar3 * DAT_101e942c4;
  auVar4._4_4_ = uVar5;
  auVar4._8_8_ = uVar6;
  return auVar4;
}




void FUN_10042eef4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    plVar1 = (long *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x18);
    do {
      lVar2 = *plVar1;
      plVar1 = (long *)(lVar2 + 0x20);
    } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar2 = *(long *)(lVar2 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x350)) {
      if ((*(int *)(lVar2 + 0x314) == DAT_101d2aaf4) && (*(int *)(lVar2 + 0x310) == 0)) {
        return;
      }
    }
    FUN_10042ed28();
  }
  return;
}




void FUN_10042ef80(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  float local_54;
  undefined1 local_50;
  float *local_48;
  undefined1 auStack_40 [4];
  int local_3c;
  long local_38;
  
  if ((DAT_101d23a38 != '\0') &&
     (FUN_10042f044(param_1,&local_38,&local_3c,auStack_40,&local_48), local_3c == 2)) {
    lVar1 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    fVar2 = *local_48;
    local_54 = (float)FUN_1003df710(lVar1,3,1);
    local_54 = local_54 * fVar2;
    local_64 = *(undefined4 *)(lVar1 + 0x260);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = &PTR_FUN_1014971e0;
    local_60 = 0x2cffffffff;
    local_58 = 1;
    local_50 = 0;
    FUN_1004969f4(&local_80,&DAT_101e47d30);
  }
  return;
}




void FUN_10042f044(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  puVar1 = PTR_s___ATTR___10185d788;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___ATTR___10185d788);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_3 = *puVar5;
  }
  puVar1 = PTR_s___ATTR_PART___10185d790;
  if (param_4 != (undefined4 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___ATTR_PART___10185d790);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_4 = *puVar5;
  }
  puVar1 = PTR_s___ATTR_VALUE___10185d798;
  if (param_5 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___ATTR_VALUE___10185d798);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_5 = *puVar4;
  }
  return;
}




void FUN_10042f190(long *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar2 = (float)FUN_1003df710(lVar1,1,1);
  fVar3 = (float)FUN_1003df710(lVar1,2,1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar4 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  *param_2 = fVar2 + (DAT_101e94300 + -1.0) * (fVar3 - fVar2) * 0.09090909;
  return;
}




undefined4 FUN_10042f240(undefined8 param_1)

{
  undefined4 local_14;
  
  FUN_10042f190(param_1,&local_14);
  return local_14;
}




void FUN_10042f264(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  *(byte *)(lVar1 + 0x303) = *(byte *)(lVar1 + 0x303) | 2;
  return;
}




void FUN_10042f284(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c6e8;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042f36c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149ce38;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042f454(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149cc98;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042f53c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined **local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined4 local_10c;
  uint uStack_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  uint uStack_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  float local_74;
  undefined2 local_70;
  undefined1 local_6e;
  long local_68;
  
  FUN_10042ecbc(param_1,&local_68);
  lVar5 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(lVar5 + 0x40);
    fVar7 = *(float *)(lVar1 + 0xe8) + *(float *)(lVar1 + 0x19c) * (*(float *)(lVar1 + 0x304) + 1.0)
    ;
    NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar1 + 0x250),DAT_101e943d0);
    if ((DAT_101e94310 <= *(float *)(lVar1 + 0x30c)) || (DAT_101e94310 <= 0.0)) {
      fVar7 = *(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
      NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
      local_74 = DAT_101e94260;
    }
    else {
      fVar8 = 1.0 - *(float *)(lVar1 + 0x30c) / DAT_101e94310;
      fVar7 = *(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
      fVar6 = (float)NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
      fVar7 = DAT_101e94260;
      if (DAT_101e94260 <= fVar6) {
        fVar7 = fVar6;
      }
      fVar6 = (float)FUN_1003df710(lVar5,6,1);
      local_74 = fVar7 + fVar7 * (fVar6 * fVar8 - fVar8);
    }
    local_7c = *(undefined4 *)(lVar5 + 0x260);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_98 = &PTR_FUN_101497218;
    uStack_78 = 0;
    local_70 = 0x101;
    local_6e = 0;
    FUN_100496328(&local_98,&DAT_101e47d30);
    local_ac = *(undefined4 *)(lVar5 + 0x260);
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_c8 = &PTR_FUN_101497218;
    local_a8 = 3;
    local_a0 = 0x101;
    local_9e = 0;
    FUN_100496328(&local_c8,&DAT_101e47d30);
    local_dc = *(undefined4 *)(lVar5 + 0x260);
    cVar3 = *PTR_s_Ability__Alpha__A_1018595b0;
    uStack_d8 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uStack_d8 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Alpha__A_1018595b0;
      do {
        pcVar4 = pcVar4 + 1;
        uStack_d8 = (uStack_d8 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar4;
      } while (cVar3 != '\0');
    }
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_f8 = &PTR_FUN_101497330;
    local_d4 = 0;
    local_d0 = 1;
    FUN_10049650c(&local_f8,&DAT_101e47d30);
    local_10c = *(undefined4 *)(lVar5 + 0x260);
    cVar3 = *PTR_s_Ability__Alpha__B_1018595b8;
    uStack_108 = 0x811c9dc5;
    pcVar4 = PTR_s_Ability__Alpha__B_1018595b8;
    while (cVar3 != '\0') {
      pcVar4 = pcVar4 + 1;
      uStack_108 = (uStack_108 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar4;
    }
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    local_128 = &PTR_FUN_101497330;
    local_104 = 0;
    local_100 = 1;
    FUN_10049650c(&local_128,&DAT_101e47d30);
    plVar2 = (long *)(lVar5 + 0x18);
    do {
      lVar1 = *plVar2;
      plVar2 = (long *)(lVar1 + 0x20);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar1 = *(long *)(lVar1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
      if ((*(int *)(lVar1 + 0x314) == DAT_101d2aaf4) && (*(int *)(lVar1 + 0x310) == 0))
      goto LAB_10042f7f8;
    }
    FUN_10042ed28(lVar5);
  }
LAB_10042f7f8:
  FUN_10042f820(lVar5);
  return;
}




void FUN_10042f820(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) & 0xfb;
  puVar1 = PTR_s_onActorUnUndeadName_10185d758;
  if (*(long *)(param_1 + 0x60) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x28); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x350)) {
      FUN_10046a360(lVar2,puVar1);
    }
  }
  return;
}




float FUN_10042f880(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0xe4) + *(float *)(lVar1 + 0x198) * (*(float *)(lVar1 + 0x300) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x24c),DAT_101e943cc);
  return (DAT_101e94308._4_4_ * -*(float *)((long)param_1 + 0x454)) / *(float *)(*param_1 + 0x31c);
}




undefined4 FUN_10042f8e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x31c);
}




void FUN_10042f8e8(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c478;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042f9d0(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    *(byte *)(lVar1 + 0x303) = *(byte *)(lVar1 + 0x303) & 0xfd;
  }
  return;
}




void FUN_10042fa24(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    *(byte *)(lVar1 + 0x303) = *(byte *)(lVar1 + 0x303) | 2;
  }
  return;
}




void FUN_10042fa6c(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined1 local_28;
  int local_1c;
  long local_18;
  
  if ((DAT_101d23a38 != '\0') &&
     (FUN_10042fb4c(param_1,&local_18,&local_1c), local_1c == DAT_101d2aafc)) {
    lVar3 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    lVar2 = *(long *)(*(long *)(lVar3 + 0x58) + 0x60);
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x238) & 0x1c00) == 0x400)) {
      uStack_30 = 0x811c9dc5;
      local_34 = *(undefined4 *)(lVar3 + 0x260);
      cVar1 = *PTR_s_Ability__Alpha__C_1018595c0;
      pcVar4 = PTR_s_Ability__Alpha__C_1018595c0;
      while (cVar1 != '\0') {
        pcVar4 = pcVar4 + 1;
        uStack_30 = (uStack_30 ^ (int)cVar1) * 0x1000193;
        cVar1 = *pcVar4;
      }
      local_2c = *(undefined4 *)(local_18 + 0x318);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = &PTR_FUN_101497330;
      local_28 = 1;
      FUN_10049650c(&local_50,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10042fb4c(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  puVar1 = PTR_s___ABILITY_BEHAVIOR_NAME_HASH___10185d7c0;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___ABILITY_BEHAVIOR_NAME_HASH___10185d7c0);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_3 = *puVar5;
  }
  return;
}




undefined4 FUN_10042fc00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x318);
}




void FUN_10042fc08(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  float local_2c;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_28);
    lVar3 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    lVar1 = *(long *)(lVar3 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x58) + 0x60);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
      if (*(long *)(lVar1 + 0x60) == 0) {
        local_2c = 0.0;
      }
      else {
        local_2c = (float)FUN_10045f0f0();
      }
      if (0.05 <= ABS(*(float *)(local_28 + 0x318) - local_2c)) {
        local_34 = *(undefined4 *)(lVar3 + 0x260);
        uStack_30 = *(undefined4 *)(local_28 + 0x30c);
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_50 = &PTR_FUN_101497250;
        FUN_100496b60(&local_50,&DAT_101e47d30);
      }
    }
  }
  return;
}




float FUN_10042fcec(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  lVar1 = *(long *)(lVar3 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0x58) + 0x60);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x239) & 0x1c) == 0)) {
    fVar4 = *(float *)(*param_1 + 0x318);
  }
  else if (*(long *)(lVar1 + 0x60) == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_10045f0f0();
  }
  fVar5 = (float)FUN_10042ee18(lVar3);
  lVar1 = *(long *)(lVar3 + 0x40);
  fVar6 = *(float *)(lVar1 + 0xe4) + *(float *)(lVar1 + 0x198) * (*(float *)(lVar1 + 0x300) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar1 + 0x24c),DAT_101e943cc);
  return DAT_101e94308._4_4_ - DAT_101e94308._4_4_ * (fVar4 / fVar5);
}




void FUN_10042fdc4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c548;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10042feac(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_100431764();
  *(undefined4 *)(lVar2 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  lVar2 = FUN_10049be00(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 2;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(lVar2 + 0x10) = *param_4;
  *(undefined4 *)(lVar2 + 0x18) = uVar1;
  *(undefined4 *)(lVar2 + 0x24) = param_1;
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  lVar2 = FUN_10042e2c8(param_3);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Slowed_buff");
  lVar2 = FUN_10042e3b0(param_3);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_10042ff5c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_10042ff70(undefined8 param_1)

{
  long lVar1;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  int local_1c;
  long local_18;
  
  if (((DAT_101d23a38 != '\0') &&
      (FUN_100430000(param_1,&local_18,&local_1c,auStack_28), local_1c == 4)) &&
     (lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10),
     *(float *)(*(long *)(lVar1 + 0x40) + 0x318) <= 0.0)) {
    local_34 = *(undefined4 *)(lVar1 + 0x260);
    uStack_30 = *(undefined4 *)(local_18 + 0x30c);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = &PTR_FUN_101497250;
    local_2c = 0;
    FUN_100496b60(&local_50,&DAT_101e47d30);
  }
  return;
}

