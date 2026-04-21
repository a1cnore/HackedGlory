// functions/00d87 — 19 functions
#include "libGameKindred.h"




void FUN_00d8702c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Gwen_AA_Empowered";
  param_2[4] = "Effect_Gwen_AA_Empowered_Impact";
  param_2[0xe] = "Sound_Gwen_Attack_Impact_3";
  param_2[0xd] = "Sound_Gwen_Attack_Impact_2";
  param_2[0xc] = "Sound_Gwen_Attack_Impact_1";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d829f8(uVar2,FUN_00d86f18);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d870c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Gwen_Shot";
  param_2[4] = "Effect_Gwen_Shot_Impact";
  param_2[0xc] = "Sound_Gwen_Ability_C_Impact";
  FUN_00d80ec4(0x3f19999a,param_1);
  lVar5 = param_1 + 0x120;
  FUN_00e5fc3c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  FUN_00d59f54(uVar2,3,4,0x19,0);
  FUN_00e5fe1c(lVar5,param_1,3);
  lVar5 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar5);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Weapon Damage",3);
  uVar2 = FUN_00d850b4(lVar5);
  lVar3 = FUN_00d84048(uVar2,param_1,1);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00d8724c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d84e9c(lVar3 + 0x10);
  lVar5 = FUN_00d851a4(lVar5);
  FUN_00d84e9c(lVar5 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8724c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00d87260(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2c80000;
  return;
}




void FUN_00d8726c(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68(*param_1);
  FUN_00da000c(uVar2,&local_3c);
  fVar3 = (float)FUN_00d813c0(*param_1);
  *param_2 = 1 << (ulong)((int)fVar3 & 0x1f) ^ local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d872ec(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_128 [16];
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [8];
  float local_100;
  undefined1 local_f8 [8];
  float local_f0;
  undefined1 auStack_e8 [88];
  undefined1 auStack_90 [32];
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d80f68(*param_1);
    uVar8 = param_1[1];
    uVar3 = FUN_00d42844(PTR_s_Buff_Churnwalker_ChainTether_02bf07a8);
    lVar7 = FUN_00d6a690(uVar8,uVar3);
    if (lVar7 == 0) {
      FUN_00d55794(lVar6,local_f8,0);
      FUN_00d55794(param_1[1],local_108,0);
      fVar10 = local_f0;
      fVar12 = local_f8._0_4_;
      fVar9 = fVar12 - local_108._0_4_;
      fVar13 = local_f8._4_4_;
      fVar11 = fVar13 - local_108._4_4_;
      fVar9 = fVar9 * fVar9 + fVar11 * fVar11 + (local_f0 - local_100) * (local_f0 - local_100);
      fVar11 = SQRT(fVar9);
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar9);
      }
      fVar9 = (float)FUN_00d5a3d0(lVar6,DAT_031ac908,2,9);
      if (fVar9 < fVar11) {
        fVar9 = fVar11 - fVar9;
        local_118 = CONCAT44(((local_108._4_4_ - fVar13) / fVar11) * fVar9 + local_f8._4_4_,
                             ((local_108._0_4_ - fVar12) / fVar11) * fVar9 + local_f8._0_4_);
        local_110 = ((local_100 - fVar10) / fVar11) * fVar9 + local_f0;
        uVar8 = 0;
        uVar5 = (ulong)(uint)fVar9;
        uVar3 = FUN_00da2eb4(lVar6);
        FUN_00da32b0(auStack_90,local_f8,&local_118,uVar3);
        local_70 = 1;
        FUN_00da32dc(auStack_90,auStack_128,0);
        puVar2 = PTR_s_Buff_DisplacementLock_02beb3f0;
        uVar3 = *(undefined4 *)(lVar6 + 0x260);
        fVar10 = (float)uVar5;
        uVar4 = FUN_00ceb350();
        FUN_00cfe864(fVar10 / 25.0,0,0,auStack_e8,uVar3,uVar3,puVar2,uVar4,1,0,0,uVar5,uVar8);
        FUN_00ce20fc(auStack_e8);
        FUN_00cb6efc(0x41c80000,lVar6,auStack_128,1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d874f0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_s_Buff_Churnwalker_ChainTether_02bf07a8;
  lVar3 = *(long *)(param_1[1] + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar2 = FUN_00d80f68(*param_1);
  FUN_00d6c130(lVar3,puVar1,*(undefined4 *)(lVar2 + 0x260));
  return;
}




void FUN_00d87554(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  *param_2 = "Effect_Churnwalker_ChainHook";
  param_2[0xd] = "Sound_Churnwalker_Ability_A_Impact_2";
  param_2[0xc] = "Sound_Churnwalker_Ability_A_Impact_1";
  param_2[0xe] = "Sound_Churnwalker_Ability_A_Impact_3";
  lVar3 = FUN_00d09310();
  uVar9 = FUN_00d09f68(*(undefined4 *)(lVar3 + 0x414));
  *(undefined4 *)(param_2 + 0x15) = uVar9;
  param_2[8] = "Effect_Churnwalker_Chain_Proj";
  fVar10 = (float)FUN_00d813c0(param_1);
  uVar4 = FUN_00d9fff0((int)fVar10);
  param_2[0xb] = uVar4;
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,3,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x440000);
  lVar3 = FUN_00d86924(lVar3 + 0x10);
  lVar5 = FUN_00d86974(lVar3 + 0x10);
  lVar3 = lVar3 + 0x70;
  *(code **)(lVar5 + 8) = FUN_00d874f0;
  plVar6 = (long *)FUN_00d84eec(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Churnwalker_ChainTether_02bf07a8)
  ;
  local_58[0] = 0x497423f0;
  local_50 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,local_58);
  fVar10 = (float)FUN_00d813c0(param_1);
  (**(code **)(*plVar6 + 0x48))(plVar6,(int)fVar10);
  plVar6 = (long *)FUN_00d84eec(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                             (plVar6,PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,local_58);
  (**(code **)(*plVar6 + 0x38))(0x3f19999a);
  plVar6 = (long *)FUN_00d84e4c(lVar3);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"CRYSTAL_DAMAGE",0);
  plVar6 = (long *)FUN_00d8784c(lVar3);
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)*puVar7)(puVar7,PTR_s_Ability__Churnwalker__A_02beec38);
  uVar2 = FUN_00d85154(lVar3);
  FUN_00d825d8(uVar2,PTR_s_Buff_Churnwalker_A_Casting_02bf07d8);
  FUN_00d825e0();
  lVar5 = FUN_00d86924(lVar3);
  lVar8 = FUN_00d86dc0(lVar5 + 0x10);
  *(undefined **)(lVar8 + 8) = PTR_s_Buff_Churnwalker_Talent_TalentC_02bee310;
  lVar8 = FUN_00d878ec(lVar5 + 0x10);
  *(undefined4 *)(lVar8 + 0x10) = 0x1000;
  uVar2 = FUN_00d8789c(lVar5 + 0x58);
  FUN_00d82598(uVar2,FUN_00d872ec);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  uVar2 = FUN_00d85154(lVar3 + 0x10);
  FUN_00d825d8(uVar2,PTR_s_Buff_Churnwalker_A_Casting_02bf07d8);
  FUN_00d825e0();
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8784c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cd9ca0();
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




void FUN_00d8789c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cd9bc4();
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




undefined8 * FUN_00d878ec(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[1] = 0xffffffff00000000;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_0281ef78;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00d87950(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Hero034_PfxShaderParamTest";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x40a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d82a00(uVar3,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Hero034_Aura_Cyan_02bf0800);
  local_48[0] = 0x40800000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d87a34(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Hero034_PfxShaderParamTest";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff00;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x40a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d82a00(uVar3,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Hero034_Aura_Magenta_02bf0808);
  local_48[0] = 0x40800000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d87b18(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Hero034_PfxShaderParamTest";
  *(undefined2 *)((long)param_2 + 0xa4) = 0;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xff;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x40a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d82a00(uVar3,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Hero034_Aura_Yellow_02bf0810);
  local_48[0] = 0x40800000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d87bfc(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d80f68();
  FUN_00d80ec4(0x3f8ccccd,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar3);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar3,param_1,1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_00d87d58(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Hero034_A_Seducing_02bf0840);
  local_48 = FUN_00d87d44;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Hero034_A_Seduced_02bf0848);
  local_48 = FUN_00d87d44;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  FUN_00d84e9c(lVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d87d44(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00d87d58(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cd9a1c();
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




void FUN_00d87da8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Reza_A_Shot";
  param_2[4] = "Effect_Reza_A_ShotImpact";
  param_2[0xc] = "Sound_Reza_Ability_A_Impact_Projectile";
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d09f14(*(undefined4 *)(lVar3 + 0x3fc));
  *(undefined4 *)(param_2 + 0x15) = uVar6;
  *(undefined4 *)((long)param_2 + 0xac) = 0x3e99999a;
  FUN_00d59f54(uVar2,0,4,0x19,0);
  FUN_00d80ec4(param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,3,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  lVar3 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar3);
  lVar4 = FUN_00d84048(uVar2,param_1,0x440000);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Reza_VolatileSpark_02beb5e8);
  local_58 = FUN_00d2d06c;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)FUN_00d84e4c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",0);
  FUN_00d84e9c(lVar4);
  uVar2 = FUN_00d850b4(lVar3);
  lVar4 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar5 = (long *)FUN_00d84e4c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",0);
  lVar3 = FUN_00d851a4(lVar3);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d87f84(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  lVar4 = FUN_00d80f68(param_1);
  uVar5 = FUN_00d44008(*(undefined4 *)(lVar4 + 0x260),PTR_s_Buff_Reza_Talent_Firemaker_02bee2c8);
  FUN_00d80ec4(0x3f8ccccd,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,lVar4);
  uVar6 = FUN_00d850b4(param_1 + 0x100);
  lVar7 = FUN_00d84048(uVar6,param_1,0x40000);
  plVar8 = (long *)FUN_00d84e4c(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))();
  (**(code **)(*plVar8 + 0x38))(plVar8,"DASH_DAMAGE",1);
  if (((uVar5 & 1) != 0) && (iVar3 = FUN_00d5c238(lVar4,1), iVar3 != 0)) {
    uVar6 = FUN_00d850b4(param_1 + 0x100);
    lVar4 = FUN_00d84048(uVar6,param_1,1);
    plVar8 = (long *)FUN_00d84eec(lVar4 + 0x10);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,PTR_s_Buff_Reza_VolatileSpark_02beb5e8);
    local_58 = FUN_00d2d06c;
    local_50 = 3;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

