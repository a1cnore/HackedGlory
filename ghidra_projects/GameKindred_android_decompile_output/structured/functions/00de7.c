// functions/00de7 — 26 functions
#include "libGameKindred.h"




void FUN_00de702c(void)

{
  long lVar1;
  undefined4 *in_x3;
  
  lVar1 = FUN_00d517cc();
  if (lVar1 != 0) {
    *in_x3 = *(undefined4 *)(lVar1 + 0x260);
  }
  return;
}




void FUN_00de7058(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_00de7064(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar3 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00ceace8();
  uVar4 = FUN_00ceaf84();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_00cfab94(auStack_58);
    FUN_00cf4164(0x3f800000,0x3f19999a,uVar5,
                 "build://Sounds/5v5/SFX/sfx_halycon_missle_target_line.mp3",0,0,0xffffffff,0,1);
    FUN_00cf98bc(auStack_58);
    puVar2 = PTR_s_Buff_Nexus_5v5_Target_Laser_02bf11e0;
    uVar5 = FUN_00cf9ab4(auStack_58);
    uVar5 = FUN_00cf44e8(0x40600000,uVar5,puVar2,1,0);
    FUN_00cf45d4(uVar5,FUN_00de702c);
    FUN_00cf9eec(auStack_58);
    FUN_00cf99dc(auStack_58);
    puVar2 = PTR_s_Buff_Nexus_5v5_Target_Warning_02bf11e8;
    uVar5 = FUN_00cf9ab4(auStack_58);
    FUN_00cf44e8(0x41200000,uVar5,puVar2,1,0);
    FUN_00cf9eec(auStack_58);
    uVar5 = FUN_00cfa294(auStack_58);
    FUN_00cf7478(0x3f800000);
    FUN_00cf7578(uVar5,0);
    uVar5 = FUN_00cf9f34(auStack_58);
    uVar6 = FUN_00d9ab88();
    FUN_00d9b158(uVar6,PTR_s_Buff_Nexus_VainNodeSupport_02bf11f0,3,3);
    FUN_00d9b0f8(uVar5);
    FUN_00cf99dc();
    FUN_00d9b0f8(uVar5);
    uVar5 = FUN_00cfb17c();
    FUN_00cfcad8(uVar5,0x72,"CenterBody");
    uVar5 = FUN_00cf9f34(auStack_58);
    uVar6 = FUN_00d9ab88();
    FUN_00d9b158(uVar6,PTR_s_Buff_Nexus_VainNodeSupport_02bf11f0,3,2);
    FUN_00d9b0f8(uVar5);
    FUN_00cf99dc();
    FUN_00d9b0f8(uVar5);
    uVar5 = FUN_00cfb17c();
    FUN_00cfcad8(uVar5,0x72,"CenterBody");
    FUN_00cf99dc(auStack_58);
    uVar5 = FUN_00cfb17c(auStack_58);
    uVar5 = FUN_00cfcad8(uVar5,0x72,"CenterBody");
    FUN_00cfcbbc(uVar5,FUN_00de7058);
    uVar5 = FUN_00cfa294(auStack_58);
    FUN_00cf7478(0x3f800000);
    FUN_00cf7578(uVar5,0);
  }
  FUN_00da07e0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de7294(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
                 float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_48;
  undefined8 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,&local_48,0);
  fVar3 = (float)FUN_00d51820(param_4);
  param_3 = param_3 - (float)((ulong)local_44 >> 0x20);
  fVar3 = fVar3 - local_48;
  param_2 = param_2 - (float)local_44;
  *param_6 = fVar3;
  param_6[1] = param_2;
  fVar3 = fVar3 * fVar3 + param_2 * param_2 + param_3 * param_3;
  param_6[2] = param_3;
  if (1e-08 <= fVar3) {
    fVar4 = SQRT(fVar3);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar3);
    }
    fVar3 = *param_6 / fVar4;
    uVar2 = CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 1) >> 0x20) / fVar4,
                     (float)*(undefined8 *)(param_6 + 1) / fVar4);
    *param_6 = fVar3;
    *(undefined8 *)(param_6 + 1) = uVar2;
  }
  else {
    *(undefined8 *)param_6 = DAT_03218f68;
    fVar3 = *param_6;
    param_6[2] = DAT_03218f70;
    uVar2 = *(undefined8 *)(param_6 + 1);
  }
  *(ulong *)(param_5 + 1) =
       CONCAT44((float)((ulong)uVar2 >> 0x20) * param_1 + (float)((ulong)local_44 >> 0x20),
                (float)uVar2 * param_1 + (float)local_44);
  *param_5 = fVar3 * param_1 + local_48 + 0.25;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de73cc(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00ceace8();
  uVar3 = FUN_00ceaf84();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00cfa294(auStack_48);
    FUN_00cf7478(0x3e4ccccd);
    FUN_00cf7578(uVar4,0);
    uVar4 = FUN_00cfab94(auStack_48);
    FUN_00cf4164(0x3f800000,0x3f4ccccd,uVar4,"build://Sounds/5v5/SFX/sfx_stunline_buildup.mp3",0,0,
                 0xffffffff,0,1);
    FUN_00de74f8(0x3dcccccd,auStack_48);
    FUN_00de75b8(0x3dcccccd,auStack_48);
    FUN_00de7678(0x3dcccccd,auStack_48);
    FUN_00de7738(0x3dcccccd,auStack_48);
    FUN_00de77f8(0x3dcccccd,auStack_48);
    FUN_00de78b8(0x3dcccccd,auStack_48);
    FUN_00de7978(0x3f99999a,auStack_48);
  }
  FUN_00da07e0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de74f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar1 = FUN_00d9b1c4(uVar1,FUN_00de7c40);
  FUN_00d9b0f8();
  plVar2 = (long *)FUN_00cfb1c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00de7cc8);
  FUN_00d9b0f8(uVar1);
  plVar2 = (long *)FUN_00cf9b8c();
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_02bf11d0,uVar3);
  uVar1 = FUN_00cfa294(param_2);
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00de75b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar1 = FUN_00d9b1c4(uVar1,FUN_00de7cd0);
  FUN_00d9b0f8();
  plVar2 = (long *)FUN_00cfb1c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00de7d58);
  FUN_00d9b0f8(uVar1);
  plVar2 = (long *)FUN_00cf9b8c();
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_02bf11d0,uVar3);
  uVar1 = FUN_00cfa294(param_2);
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00de7678(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar1 = FUN_00d9b1c4(uVar1,FUN_00de7d60);
  FUN_00d9b0f8();
  plVar2 = (long *)FUN_00cfb1c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00de7de8);
  FUN_00d9b0f8(uVar1);
  plVar2 = (long *)FUN_00cf9b8c();
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_02bf11d0,uVar3);
  uVar1 = FUN_00cfa294(param_2);
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00de7738(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar1 = FUN_00d9b1c4(uVar1,FUN_00de7df0);
  FUN_00d9b0f8();
  plVar2 = (long *)FUN_00cfb1c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00de7e78);
  FUN_00d9b0f8(uVar1);
  plVar2 = (long *)FUN_00cf9b8c();
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_02bf11d0,uVar3);
  uVar1 = FUN_00cfa294(param_2);
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00de77f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar1 = FUN_00d9b1c4(uVar1,FUN_00de7e80);
  FUN_00d9b0f8();
  plVar2 = (long *)FUN_00cfb1c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00de7f0c);
  FUN_00d9b0f8(uVar1);
  plVar2 = (long *)FUN_00cf9b8c();
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_02bf11d0,uVar3);
  uVar1 = FUN_00cfa294(param_2);
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00de78b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar1 = FUN_00d9b1c4(uVar1,FUN_00de7f18);
  FUN_00d9b0f8();
  plVar2 = (long *)FUN_00cfb1c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00de7fa4);
  FUN_00d9b0f8(uVar1);
  plVar2 = (long *)FUN_00cf9b8c();
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_02bf11d0,uVar3);
  uVar1 = FUN_00cfa294(param_2);
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00de7978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar1 = FUN_00d9b1c4(uVar1,FUN_00de7fb0);
  FUN_00d9b0f8();
  plVar2 = (long *)FUN_00cfb1c4();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*GenericLocator*",0);
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00de803c);
  FUN_00d9b0f8(uVar1);
  plVar2 = (long *)FUN_00cf9b8c();
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Nexus_5v5_AbilityB_02bf11d0,uVar3);
  uVar1 = FUN_00cfa294(param_2);
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  return;
}




void FUN_00de7a38(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Nexus_5v5_Target_Laser_02bf11e0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"build://Sounds/5v5/SFX/sfx_death_explosion.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_VainCrystal_Death_Cracking",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfb134(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e19999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41c00000);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40533333);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_VainCrystal_Death_Explosion",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfb134(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x4039999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40b00000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00de7c40(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00de7294(0x40b00000,param_1,auStack_38,auStack_48);
  local_50 = 0x3e800000;
  local_58 = 0x412000003e800000;
  FUN_00d50ef8(param_1);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef00a0(uVar3,auStack_38,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de7cc8(void)

{
  FUN_00de7294(0x40b00000);
  return;
}




uint FUN_00de7cd0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00de7294(0x41080000,param_1,auStack_38,auStack_48);
  local_50 = 0x3e800000;
  local_58 = 0x412000003e800000;
  FUN_00d50ef8(param_1);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef00a0(uVar3,auStack_38,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de7d58(void)

{
  FUN_00de7294(0x41080000);
  return;
}




uint FUN_00de7d60(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00de7294(0x41380000,param_1,auStack_38,auStack_48);
  local_50 = 0x3e800000;
  local_58 = 0x412000003e800000;
  FUN_00d50ef8(param_1);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef00a0(uVar3,auStack_38,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de7de8(void)

{
  FUN_00de7294(0x41380000);
  return;
}




uint FUN_00de7df0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00de7294(0x41680000,param_1,auStack_38,auStack_48);
  local_50 = 0x3e800000;
  local_58 = 0x412000003e800000;
  FUN_00d50ef8(param_1);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef00a0(uVar3,auStack_38,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de7e78(void)

{
  FUN_00de7294(0x41680000);
  return;
}




uint FUN_00de7e80(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00de7294(0x418c0000,param_1,auStack_38,auStack_48);
  local_50 = 0x3e800000;
  local_58 = 0x412000003e800000;
  FUN_00d50ef8(param_1);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef00a0(uVar3,auStack_38,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de7f0c(void)

{
  FUN_00de7294(0x418c0000);
  return;
}




uint FUN_00de7f18(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00de7294(0x41a40000,param_1,auStack_38,auStack_48);
  local_50 = 0x3e800000;
  local_58 = 0x412000003e800000;
  FUN_00d50ef8(param_1);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef00a0(uVar3,auStack_38,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de7fa4(void)

{
  FUN_00de7294(0x41a40000);
  return;
}




uint FUN_00de7fb0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00de7294(0x41bc0000,param_1,auStack_38,auStack_48);
  local_50 = 0x3e800000;
  local_58 = 0x412000003e800000;
  FUN_00d50ef8(param_1);
  uVar3 = FUN_00da2eb4();
  uVar2 = FUN_00ef00a0(uVar3,auStack_38,0,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

