// functions/00e28 — 18 functions
#include "libGameKindred.h"




void FUN_00e2806c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onHostDieName_02bed588;
    uVar3 = FUN_00e6a474(PTR_s_onHostDieName_02bed588);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e27ec0;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e280ec(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_70);
  lVar5 = FUN_00d66d28(local_70);
  iVar3 = FUN_00d66cf4(local_70);
  if (iVar3 + -1 == 0) {
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar4 = FUN_00d66d34(local_70);
    FUN_00d009d0(auStack_68,uVar1,uVar4);
  }
  else {
    if (iVar3 < 1) goto LAB_00e28184;
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar4 = FUN_00d66d34(local_70);
    FUN_00d048bc(auStack_68,uVar1,uVar4,iVar3 + -1,1);
  }
  FUN_00ce20fc(auStack_68);
LAB_00e28184:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e281ac(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onHostDieName_02bed588;
  uVar4 = FUN_00e6a474(PTR_s_onHostDieName_02bed588);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e280ec;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  FUN_00d66d04(param_1,0x40,1);
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("attr");
  uVar4 = FUN_0091ed5c("attr",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("pierce");
  uVar4 = FUN_0091ed5c("pierce",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  lVar5 = FUN_00d66d28(param_1);
  fVar8 = *(float *)(*(long *)(lVar5 + 0x40) + 0xfc);
  lVar5 = FUN_00d66d28(param_1);
  fVar9 = *(float *)(*(long *)(lVar5 + 0x40) + 0x100);
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("attr");
  uVar4 = FUN_0091ed5c("attr",uVar4,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
  if (fVar8 <= fVar9) {
    *puVar6 = 5;
    lVar5 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("pierce");
    uVar4 = FUN_0091ed5c("pierce",uVar4,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
    uVar4 = 0xb;
  }
  else {
    *puVar6 = 4;
    lVar5 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("pierce");
    uVar4 = FUN_0091ed5c("pierce",uVar4,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
    uVar4 = 9;
  }
  *puVar6 = uVar4;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar5 + 0x30);
  FUN_00d3e534();
  uVar7 = FUN_00d395d4();
  FUN_00d42654(auStack_70,uVar7);
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("attr");
  uVar4 = FUN_0091ed5c("attr",uVar4,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
  FUN_00d40e24(0x41200000,uVar7,*puVar6,1);
  FUN_00d3e534();
  uVar7 = FUN_00d395d4();
  FUN_00d42654(auStack_70,uVar7);
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("pierce");
  uVar4 = FUN_0091ed5c("pierce",uVar4,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
  FUN_00d40e24(0x3ca3d70a,uVar7,*puVar6,1);
  FUN_00d3e534();
  uVar7 = FUN_00d395d4();
  FUN_00d42654(auStack_70,uVar7);
  FUN_00d40e24(0x3dcccccd,uVar7,0x19,1);
  FUN_00d3e534();
  uVar7 = FUN_00d294ac();
  FUN_00d42654(auStack_70,uVar7);
  uVar7 = FUN_00d47d9c(uVar7);
  FUN_00da2040(uVar7,"Effect_MinerBuff");
  FUN_00da20b8(0);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar5 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d2965c();
  FUN_00d42654(auStack_70,uVar7);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e285a4(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar3 = FUN_00d66d28(local_30);
  uVar4 = FUN_00daa58c(local_38,uVar3);
  if (((uVar4 & 1) != 0) && (*(long *)(local_38 + 0x28) != 0)) {
    for (lVar5 = *(long *)(*(long *)(local_38 + 0x28) + 0x18); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02c7bf48) {
        uVar2 = FUN_00d6bb44(lVar5,DAT_031b9ffc);
        fVar6 = (float)uVar2 * -0.2 + 1.0;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        *(float *)(local_38 + 0x54) = *(float *)(local_38 + 0x54) * fVar6;
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e28680(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onApplyDamageName_02bed600;
    uVar3 = FUN_00e6a474(PTR_s_onApplyDamageName_02bed600);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e285a4;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e28700(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_CrystalMiner_Empowerment_Hero");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  FUN_00d4bc24();
  lVar2 = FUN_00d4bcb4();
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x40))(plVar3,local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  FUN_00d4bc10();
  lVar2 = FUN_00d4bcb4();
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48[0] = 0x3dcccccd;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x38))(plVar3,local_48);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3e99999a,uVar4,1);
  plVar3 = (long *)FUN_00d2b778(lVar2 + 0x10);
  local_48[0] = 0x40200000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,local_48);
  (**(code **)(*plVar3 + 0x20))(0x3f400000);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_SlowUsingBuffVar_02beb4c0);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  (**(code **)(*plVar3 + 0x38))(0x3e4ccccd);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e288d8(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)
              (&DAT_01be50bc +
              (ulong)((*(uint *)(*(long *)(*(long *)(param_1 + 0x428) + 0x20) + 0x2f4) & 1) == 0) *
              4);
  return;
}




void FUN_00e28900(undefined8 *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x240) + 1.0) *
          (*(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0))
  ;
  if (DAT_031ba190 <= fVar2) {
    fVar2 = DAT_031ba190;
  }
  fVar3 = DAT_031ba0d0;
  if (DAT_031ba0d0 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_2 = (float)(uint)(int)fVar3 * 10.0 + 10.0;
  return;
}




void FUN_00e28990(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00d55794(param_2,param_3,0);
  *(undefined4 *)(param_3 + 4) = 0x3fb33333;
  return;
}




float FUN_00e289c8(undefined8 *param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d67b34(*param_1);
  if (fVar1 <= 30.0) {
    fVar1 = 30.0;
  }
  return fVar1;
}




void FUN_00e289e8(long param_1,float *param_2)

{
  if (*(long *)(param_1 + 0x428) != 0) {
    *param_2 = *(float *)(*(long *)(param_1 + 0x428) + 0x54) * 5.0;
  }
  return;
}




void FUN_00e28a04(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x428) + 0x38) = 0x3dcccccd;
  return;
}




float FUN_00e28a18(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x240) + 1.0) *
          (*(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0))
  ;
  if (DAT_031ba190 <= fVar2) {
    fVar2 = DAT_031ba190;
  }
  fVar3 = DAT_031ba0d0;
  if (DAT_031ba0d0 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 / 100.0 + 0.03;
}




void FUN_00e28a9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b04(0x3f800000);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blue_Buff");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3ecccccd);
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0xc0))(0,0x3f800000,0x3f19999a);
  lVar2 = FUN_00d64080(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/5v5/SFX/sfx_crystal_buff_picked_up.mp3");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  uVar4 = FUN_00d64464(param_1);
  uVar4 = FUN_00d4bbf8(uVar4,4);
  FUN_00d4bc58(uVar4,0x10);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bca4(uVar4,1);
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00e28a18;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_58);
  uVar4 = FUN_00d39a54(lVar2 + 0x10);
  FUN_00d3e604(uVar4,FUN_00e28a04);
  FUN_00d63b38(param_1);
  lVar2 = FUN_00d4b770();
  FUN_00e10084(lVar2 + 0x10);
  FUN_00d9c56c();
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_JungleMinion_5v5_CrystalOrb_02bf09a8);
  local_58 = FUN_00e289c8;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/5v5/SFX/sfx_crystal_buff_dropped_on_ground.mp3"
                             );
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e28ccc(void)

{
  return;
}




float FUN_00e28cd0(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x240) + 1.0) *
          (*(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0))
  ;
  if (DAT_031ba190 <= fVar2) {
    fVar2 = DAT_031ba190;
  }
  fVar3 = DAT_031ba0d0;
  if (DAT_031ba0d0 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 / 100.0 + 0.03;
}




void FUN_00e28d54(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Red_Buff");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_58._0_4_ = 0x3ecccccd;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3ecccccd,0);
  lVar2 = FUN_00d64080(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/5v5/SFX/sfx_weapon_buff_picked_up.mp3");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  FUN_00d4bc10();
  lVar2 = FUN_00d4bc38();
  FUN_00d2cf2c(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_SlowUsingBuffVar_02beb4c0);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f000000);
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0x38))(0x3e19999a);
  uVar4 = FUN_00d64464(param_1);
  uVar4 = FUN_00d4bbf8(uVar4,4);
  FUN_00d4bc58(uVar4,0x10);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bca4(uVar4,0);
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00e28cd0;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_58);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  FUN_00d63b38(param_1);
  lVar2 = FUN_00d4b770();
  FUN_00e10084(lVar2 + 0x10);
  FUN_00d9c56c();
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_JungleMinion_5v5_WeaponOrb_02bf09b8);
  local_58 = FUN_00e289c8;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/5v5/SFX/sfx_weapon_buff_dropped_on_ground.mp3")
  ;
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e28fdc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Red_Buff");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  (**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3ecccccd,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

