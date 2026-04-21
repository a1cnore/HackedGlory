// functions/00d92 — 31 functions
#include "libGameKindred.h"




float FUN_00d9203c(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d80f68(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,2,5,4,0);
  fVar3 = (float)FUN_00d59f54(uVar1,2,5,4,0);
  fVar4 = (float)FUN_00d59f54(uVar1,2,6,0x19,0);
  fVar5 = (float)FUN_00d813c0(*param_1);
  return fVar2 + fVar3 * fVar4 * fVar5;
}




void FUN_00d920cc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Kinetic_C";
  param_2[4] = "Effect_Kinetic_C_Impact";
  param_2[0xc] = "Sound_Kinetic_C_Impact";
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d0a160(*(undefined4 *)(lVar3 + 0x4d4));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  FUN_00d80ec4(0x3ecccccd,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5ff9c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,2,4,0x19,0);
  FUN_00e5ffd8(lVar3);
  local_60 = 0;
  local_68 = 0x100500000000;
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84078(uVar2,param_1,&local_68);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_58 = FUN_00d91fac;
  local_50 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,1,2);
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_58 = FUN_00d9203c;
  local_50 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,0,2);
  FUN_00d84e9c(lVar3);
  FUN_00d82cf0();
  lVar3 = FUN_00d85f00(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d92268(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_2 = "Effect_Hero050_Attack";
  param_2[4] = "Effect_Hero050_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xe6e6;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xfa;
  FUN_00d80ec4(0x3e19999a);
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41800000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d92300(undefined8 param_1,undefined8 param_2)

{
  FUN_00d92268(param_1,param_2,0);
  return;
}




void FUN_00d92308(undefined8 param_1,undefined8 param_2)

{
  FUN_00d92268(param_1,param_2,0);
  return;
}




void FUN_00d92310(undefined8 param_1,undefined8 param_2)

{
  FUN_00d92268(param_1,param_2,2);
  return;
}




void FUN_00d92318(undefined8 param_1,long param_2)

{
  FUN_00d82c54();
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * 0.33;
  return;
}




void FUN_00d9234c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Hero050_B";
  param_2[4] = "Effect_Hero050_Proj_Hit";
  FUN_00d80ec4(0x3f000000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar1,1,4,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d8611c(lVar3);
  FUN_00d829f8(uVar2,FUN_00d92318);
  uVar2 = FUN_00d8611c(lVar3);
  FUN_00d59f54(uVar1,1,3,0x19,0);
  FUN_00d829d8(uVar2,1,2,0);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  return;
}




void FUN_00d92454(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Hero050_C";
  param_2[4] = "Effect_Hero050_C_Explosion";
  FUN_00d80ec4(0x3f000000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,2,5,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,2);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_68 = FUN_00d9264c;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68,0,2);
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(0x40a00000,0xbf800000,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_68 = FUN_00d92660;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68,0,2);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(0x40a00000,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Hero050_C_Slow_02bf1550);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x40400000);
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9264c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00d92660(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00d92674(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




float FUN_00d926f0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 * 0.8 + -0.4;
}




float FUN_00d9272c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 * 0.6 + 0.2;
}




void FUN_00d92768(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d80ee4();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031ab6c0 <= fVar3) {
    fVar3 = DAT_031ab6c0;
  }
  fVar4 = DAT_031ab600;
  if (DAT_031ab600 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  fVar3 = fVar3 * fVar4;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  *param_3 = fVar3;
  return;
}




void FUN_00d927fc(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d80ee4();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031ab6c0 <= fVar3) {
    fVar3 = DAT_031ab6c0;
  }
  fVar4 = DAT_031ab600;
  if (DAT_031ab600 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_3 = fVar4;
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  *param_3 = fVar3 * *param_3;
  return;
}




void FUN_00d9288c(undefined8 param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = FUN_00d80ee4();
  iVar1 = FUN_00d5c238(uVar2,1);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d59f54(uVar2,1,4,0x19,0);
    fVar3 = -fVar3;
  }
  *param_2 = fVar3;
  return;
}




void FUN_00d928e4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00d928f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = param_1 + 0x120;
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  uVar4 = FUN_00e5e5a0(0x41200000,lVar5,param_1);
  iVar2 = rand();
  iVar3 = rand();
  FUN_00e5e74c((float)iVar2 * 4.656613e-10 * 0.6 + 0.2,(float)iVar3 * 4.656613e-10 * 0.8 + -0.4,
               0x3f000000,uVar4,param_1);
  lVar5 = FUN_00d84dfc(param_1 + 0x100);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d84eec(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Hero051_GunA2_02bf1560);
  local_68._0_4_ = 0x40400000;
  local_60 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_68);
  plVar6 = (long *)FUN_00d87d58(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Hero051_Perk_02bf1558);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3fc00000);
  local_60 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_68);
  uVar4 = FUN_00d8611c(lVar5);
  FUN_00d829e8(uVar4,FUN_00d927fc,0,1,0);
  lVar7 = FUN_00d86924(lVar5);
  lVar8 = FUN_00d8a200(lVar7 + 0x10);
  if (PTR_s_Ability__Hero051__B_02befa08 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar11 = (uint)(byte)*PTR_s_Ability__Hero051__B_02befa08;
    uVar9 = 0x811c9dc5;
    pbVar10 = PTR_s_Ability__Hero051__B_02befa08;
    if (*PTR_s_Ability__Hero051__B_02befa08 != 0) {
      do {
        uVar12 = (uint)pbVar10[1];
        uVar9 = (uVar9 ^ uVar11) * 0x1000193;
        uVar11 = uVar12;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 != 0);
    }
  }
  *(uint *)(lVar8 + 8) = uVar9;
  *(undefined4 *)(lVar8 + 0xc) = 1;
  plVar6 = (long *)FUN_00d8a19c(lVar7 + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,PTR_s_Ability__Hero051__B_02befa08);
  local_68 = FUN_00d928e4;
  local_60 = 3;
  (**(code **)(*plVar6 + 0x30))(plVar6,&local_68);
  FUN_00d84e9c(lVar5);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00d928f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  code *pcStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  lVar5 = param_1 + 0x120;
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  uVar4 = FUN_00e5e5a0(0x41200000,lVar5,param_1);
  iVar2 = rand();
  iVar3 = rand();
  FUN_00e5e74c((float)iVar2 * 4.656613e-10 * 0.6 + 0.2,(float)iVar3 * 4.656613e-10 * 0.8 + -0.4,
               0x3f000000,uVar4,param_1);
  lVar5 = FUN_00d84dfc(param_1 + 0x100);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d84eec(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Hero051_GunA2_02bf1560);
  pcStack_68._0_4_ = 0x40400000;
  uStack_60 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&pcStack_68);
  plVar6 = (long *)FUN_00d87d58(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Hero051_Perk_02bf1558);
  pcStack_68 = (code *)CONCAT44(pcStack_68._4_4_,0x3fc00000);
  uStack_60 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&pcStack_68);
  uVar4 = FUN_00d8611c(lVar5);
  FUN_00d829e8(uVar4,FUN_00d927fc,0,1,0);
  lVar7 = FUN_00d86924(lVar5);
  lVar8 = FUN_00d8a200(lVar7 + 0x10);
  if (PTR_s_Ability__Hero051__B_02befa08 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar11 = (uint)(byte)*PTR_s_Ability__Hero051__B_02befa08;
    uVar9 = 0x811c9dc5;
    pbVar10 = PTR_s_Ability__Hero051__B_02befa08;
    if (*PTR_s_Ability__Hero051__B_02befa08 != 0) {
      do {
        uVar12 = (uint)pbVar10[1];
        uVar9 = (uVar9 ^ uVar11) * 0x1000193;
        uVar11 = uVar12;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 != 0);
    }
  }
  *(uint *)(lVar8 + 8) = uVar9;
  *(undefined4 *)(lVar8 + 0xc) = 1;
  plVar6 = (long *)FUN_00d8a19c(lVar7 + 0x58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,PTR_s_Ability__Hero051__B_02befa08);
  pcStack_68 = FUN_00d928e4;
  uStack_60 = 3;
  (**(code **)(*plVar6 + 0x30))(plVar6,&pcStack_68);
  FUN_00d84e9c(lVar5);
  if (*(long *)(lVar1 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d92b50(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d87d58(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero051_Perk_02bf1558);
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d92c24(undefined8 param_1,undefined8 param_2)

{
  FUN_00d92674(param_1,param_2,0);
  return;
}




void FUN_00d92c2c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d92674(param_1,param_2,2);
  return;
}




void FUN_00d92c34(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d80ee4();
  uVar2 = FUN_00d59f54(uVar1,0,2,5,0);
  *param_3 = uVar2;
  return;
}




void FUN_00d92c6c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,5,0);
  return;
}




void FUN_00d92c80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_2 = "Effect_Hero051_B_Shot";
  param_2[4] = "Effect_Hero051_B_Shot_Impact";
  FUN_00d80ec4(0x3f000000);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x41a00000,lVar2,param_1,0);
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar1,param_1,0x40000);
  uVar1 = FUN_00d8611c(lVar2 + 0x10);
  FUN_00d829e8(uVar1,FUN_00d92c34,0,2,0);
  FUN_00d84e9c(lVar2 + 0x10);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d92d30(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  FUN_00d80ec4(0x3f000000);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fe1c(0x41a00000,lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(0x40400000,0x3fd33333,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_48 = FUN_00d92c6c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,0,2);
  FUN_00d84e9c(lVar3 + 0x10);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d92e5c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d80ee4();
  uVar2 = FUN_00d59f54(uVar1,2,4,5,0);
  *param_3 = uVar2;
  return;
}




void FUN_00d92e94(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  FUN_00d80ec4(0x3f000000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar5 = FUN_00d59f54(uVar2,2,6,0x19,0);
  uVar2 = FUN_00d59f54(uVar2,2,5,0x19,0);
  FUN_00e5fc5c(uVar5,uVar2,lVar3,param_1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Hero051_CDamage_02bf1570);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  FUN_00d84e9c(lVar3 + 0x10);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d92fe4(void)

{
  return;
}




void FUN_00d92fe8(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d80f68();
  FUN_00d80ec4(0x3f99999a,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar2);
  return;
}

