// functions/00e38 — 16 functions
#include "libGameKindred.h"




void FUN_00e3806c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_70 [2];
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84(*param_1);
  uVar2 = FUN_00d9e390();
  local_70[0] = 0x5e636391;
  FUN_00d58298(uVar2,local_70,auStack_68);
  *param_2 = local_38;
  *(undefined4 *)(param_2 + 1) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e380e4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Samuel_EmpoweredAttackBeam");
  local_38[0] = 0x3e4ccccd;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,FUN_00e3806c);
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Samuel_attack_empowered");
  lVar2 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar2 + 0x310));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e381e0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00e3824c;
  local_30 = 3;
  FUN_00d47690(uVar3,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3824c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e38260(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00d3a390(lVar1);
  FUN_00d481a8(uVar2,FUN_00d48394);
  plVar3 = (long *)FUN_00e13b48(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Ability01");
  FUN_00e30f38(lVar1);
  return;
}




void FUN_00e382b4(void)

{
  return;
}




void FUN_00e382b8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float __x;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar4 = FUN_00d9e390();
  FUN_00d59f54(lVar4,3,4,0x19,0);
  FUN_00d67d04(param_1);
  lVar5 = FUN_00d63f30(param_1);
  plVar6 = (long *)FUN_00d2945c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Samuel_B_DarkFieldForming_E");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Effect_Samuel_B_DarkFieldForming_A");
  (**(code **)(*plVar6 + 0x78))(plVar6,1);
  plVar6 = (long *)FUN_00d2cc5c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Samuel_ability_b_cast");
  lVar5 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar5 + 0x318));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar5 + 0x20);
  fVar8 = (float)FUN_00d59f98(lVar4,3);
  fVar9 = (float)FUN_00d59f54(lVar4,3,5,0x19,0);
  FUN_00d3e534();
  uVar7 = FUN_00d2a504();
  FUN_00d42654(auStack_70,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2cb84();
  FUN_00d42654(auStack_70,uVar7);
  puVar3 = PTR_s_Buff_Samuel_B_DarkField_02bf0eb0;
  uVar1 = *(undefined4 *)(lVar4 + 0x260);
  fVar10 = (float)FUN_00d6a25c(param_1);
  __x = (float)FUN_00d6a1f8(param_1);
  fVar10 = atan2f(fVar10,__x);
  FUN_00d3e888(fVar8 / fVar9,fVar10,0,uVar7,puVar3,1,uVar1,0,0);
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(auStack_70,uVar7);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e384a8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_68);
  lVar4 = FUN_00d66d28(local_68);
  FUN_00d5cf60();
  uVar5 = FUN_00d9e390();
  fVar6 = (float)FUN_00d9dc10(uVar5,lVar4);
  fVar7 = (float)FUN_00d59f54(uVar5,3,0xb,0x19,0);
  if (fVar7 < fVar6) {
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    uVar3 = FUN_00d66d34(local_68);
    FUN_00d009d0(auStack_60,uVar1,uVar3);
    FUN_00ce20fc(auStack_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e38568(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d5cf60(param_2);
  lVar2 = FUN_00d9e390();
  FUN_00d55794(param_2,local_68,0);
  fVar4 = (float)FUN_00d6a1f8(*param_1);
  fVar4 = cosf(fVar4);
  fVar5 = (float)FUN_00d6a1f8(*param_1);
  fVar5 = sinf(fVar5);
  fVar6 = (float)FUN_00d59f98(lVar2,3);
  *param_4 = CONCAT44(local_68._4_4_ + fVar6 * 0.0,local_68._0_4_ + fVar4 * fVar6);
  *(float *)(param_4 + 1) = fVar5 * fVar6 + local_60;
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),
                       PTR_s_Buff_Samuel_Talent_ViscousDarkne_02bee220);
  if ((uVar3 & 1) == 0) {
    uVar7 = FUN_00d59f54(lVar2,3,5,0x19,0);
  }
  else {
    uVar7 = FUN_00d5a3d0(lVar2,DAT_031ac718,3,9);
  }
  *param_3 = uVar7;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3869c(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d67b78();
  FUN_00d5cf60();
  lVar1 = FUN_00d9e390();
  fVar3 = (float)FUN_00d59f54(lVar1,3,7,0x19,0);
  fVar4 = (float)FUN_00d67b0c(param_1);
  *param_3 = fVar3 * fVar4;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_00d59f54(lVar1,3,8,0x19,0);
    *param_3 = fVar3 * *param_3;
  }
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Samuel_Talent_ViscousDarkne_02bee220);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac718,1,9);
    *param_3 = fVar3 * *param_3;
  }
  return;
}




void FUN_00e38774(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d66d28(param_1);
    FUN_00d5cf60();
    lVar8 = FUN_00d9e390();
    fVar12 = (float)FUN_00d59f54(lVar8,3,6,0x19,0);
    uVar9 = FUN_00d66d28(param_1);
    fVar13 = (float)FUN_00d9e0c4(lVar8,uVar9);
    if (fVar13 <= fVar12 * fVar12) {
      iVar4 = FUN_00d67bf4(param_1);
      if (iVar4 == 0) {
        fVar12 = 0.0;
      }
      else {
        uVar11 = 0;
        fVar12 = 0.0;
        do {
          lVar10 = FUN_00d67bdc(param_1,uVar11);
          fVar13 = (float)FUN_00d59f54(lVar8,3,(*(uint *)(lVar10 + 0x2f4) >> 0x17 & 1) + 9,0x19,0);
          fVar12 = fVar12 + fVar13;
          uVar11 = uVar11 + 1;
          uVar5 = FUN_00d67bf4(param_1);
        } while (uVar11 < uVar5);
      }
      fVar13 = (float)FUN_00d67b0c(param_1);
      fVar12 = fVar12 * fVar13;
      uVar7 = FUN_00d44008(*(undefined4 *)(lVar8 + 0x260),
                           PTR_s_Buff_Samuel_Talent_ViscousDarkne_02bee220);
      if ((uVar7 & 1) != 0) {
        fVar13 = (float)FUN_00d5a3d0(lVar8,DAT_031ac718,0,9);
        fVar12 = fVar12 * fVar13;
      }
      if (0.0 < fVar12) {
        FUN_00daa4a4(fVar12,auStack_a0,*(undefined4 *)(lVar8 + 0x260),*(undefined4 *)(lVar8 + 0x260)
                     ,0xffffffff,0xffffffff,0xee,0xffffffff);
        FUN_00910c0c(auStack_a0);
      }
      puVar3 = PTR_s_Buff_Samuel_B_StandingInDarkFiel_02bf0eb8;
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      fVar12 = (float)FUN_00d67b0c(param_1);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(fVar12 + 0.1,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar6,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e38960(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  uVar4 = FUN_00d5cf60();
  uVar6 = FUN_00d9e390();
  FUN_00d67b04(0x3f000000,param_1);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar5 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar5 = FUN_0091ed5c(puVar3,uVar5,0x12345678);
    *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar5;
    uVar1 = *(uint *)(lVar8 + 0xf8);
    *(code **)(lVar8 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e384a8;
    *(uint *)(lVar8 + 0xf8) = uVar1 + 1;
  }
  uVar7 = FUN_00d44008(uVar4,PTR_s_Buff_Samuel_Talent_ViscousDarkne_02bee220);
  if ((uVar7 & 1) != 0) {
    FUN_00d5a3d0(uVar6,DAT_031ac718,2,9);
    FUN_00d67d04(param_1);
  }
  lVar8 = FUN_00d63f30(param_1);
  FUN_00d39534(lVar8 + 0x10);
  plVar9 = (long *)FUN_00d46878(lVar8 + 0x10);
  (**(code **)(*plVar9 + 0x30))(plVar9,FUN_00e38568);
  lVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_a8,lVar8 + 0x30);
  FUN_00d3e534();
  uVar10 = FUN_00d294ac();
  FUN_00d42654(auStack_a8,uVar10);
  uVar10 = FUN_00d47d9c(uVar10);
  uVar10 = FUN_00da2040(uVar10,"Effect_Samuel_B_DarkField_E");
  FUN_00da2048(uVar10,"Effect_Samuel_B_DarkField_A");
  FUN_00d3e534();
  uVar11 = FUN_00e11d14();
  FUN_00d42654(auStack_a8,uVar11);
  lVar8 = FUN_00d09310();
  uVar10 = FUN_00d09c74(*(undefined4 *)(lVar8 + 0x318));
  FUN_00d3ecf4(0x3f800000,uVar10,uVar11,"Sound_Samuel_ability_b_loop",0,1);
  lVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_c0,lVar8 + 0x28);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4dabc(auStack_a8,0x40000);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d59f54(uVar6,3,6,0x19,0);
  FUN_00d4db48(auStack_a8,&DAT_03218f30);
  FUN_00d3e534();
  uVar10 = FUN_00d3940c();
  FUN_00d42654(auStack_c0,uVar10);
  FUN_00d3fad8(uVar10,auStack_a8,0,1);
  FUN_00d3e534();
  uVar10 = FUN_00e29370();
  FUN_00d42654(auStack_c0,uVar10);
  uVar10 = FUN_00d403e0(uVar10,FUN_00e3869c,1,2,0);
  FUN_00d40418(uVar10,1);
  FUN_00d3e534();
  uVar10 = FUN_00d2cb84();
  FUN_00d42654(auStack_c0,uVar10);
  puVar3 = PTR_s_Buff_Samuel_B_PlayDamageSfx_02bf0ec0;
  fVar13 = (float)FUN_00d67b0c(param_1);
  FUN_00d3e888(fVar13 + 0.1,0,0,uVar10,puVar3,1,0xffffffff,0,0);
  if ((uVar7 & 1) != 0) {
    FUN_00d3e534();
    uVar10 = FUN_00d2cb84();
    FUN_00d42654(auStack_c0,uVar10);
    puVar3 = PTR_s_Buff_SlowUsingBuffVar_02beb4c0;
    uVar4 = FUN_00d67b84(param_1);
    uVar6 = FUN_00d5a3d0(uVar6,DAT_031ac718,4,9);
    FUN_00d3e888(0x3f800000,uVar6,0,uVar10,puVar3,1,uVar4,0,0);
  }
  FUN_00d3e534();
  uVar6 = FUN_00d2a200();
  FUN_00d42654(auStack_c0,uVar6);
  FUN_00d3e5d0(uVar6,FUN_00e38774);
  FUN_00d3e534();
  uVar6 = FUN_00d2a6c0();
  FUN_00d42654(auStack_c0,uVar6);
  lVar8 = FUN_00d64980(param_1);
  plVar9 = (long *)FUN_00d2cc5c(lVar8 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,"Sound_Samuel_ability_b_end");
  lVar12 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar12 + 0x318));
  (**(code **)(*plVar9 + 0x28))(plVar9);
  FUN_00d394e4(lVar8 + 0x10);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e38d6c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Samuel__A_02bef490,PTR_s_Ability__Samuel__A_Empowered_02bef498);
  plVar3 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Samuel_ability_b_drain_loop");
  lVar1 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar1 + 0x318));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e38dfc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Samuel_ability_b_hit_loop");
  lVar1 = FUN_00d09310();
  FUN_00d09c74(*(undefined4 *)(lVar1 + 0x318));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e38e64(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  fVar4 = (float)FUN_00d59f54(uVar2,4,2,0x19,0);
  fVar5 = (float)FUN_00d59f54(uVar2,4,3,0x19,0);
  FUN_00d67d04(fVar4 + fVar5,param_1);
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c14(uVar2);
  uVar2 = FUN_00da2040(uVar2,"Effect_Samuel_C_Warning_E");
  uVar2 = FUN_00da2048(uVar2,"Effect_Samuel_C_Warning_A");
  uVar2 = FUN_00da2070(uVar2,1);
  FUN_00da2088(uVar2,0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x18);
  FUN_00d3e534();
  uVar2 = FUN_00d29db0();
  FUN_00d42654(auStack_50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e38f88(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  long local_90;
  undefined8 local_88;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00d69294(param_1,&local_88,&local_90);
  FUN_00d67b84(local_88);
  uVar8 = FUN_00d9e390();
  if (*(long *)(local_90 + 0x28) == 0) {
    bVar6 = true;
  }
  else {
    bVar6 = (*(byte *)(*(long *)(local_90 + 0x28) + 0x2f4) & 0x10) == 0;
  }
  iVar1 = *(int *)(local_90 + 0x18);
  lVar9 = FUN_00d66d28(local_88);
  iVar2 = *(int *)(lVar9 + 0x260);
  uVar4 = *(ushort *)(local_90 + 0xc);
  fVar10 = (float)FUN_00d67b5c(local_88);
  fVar11 = (float)FUN_00d59f54(uVar8,4,6,0x19,0);
  if (((((uVar4 & 0xc) != 0) && (bVar6)) && (iVar1 == iVar2)) && (fVar11 <= fVar10)) {
    lVar9 = FUN_00d66d28(local_88);
    uVar3 = *(undefined4 *)(lVar9 + 0x260);
    uVar7 = FUN_00d66d34(local_88);
    FUN_00d009d0(auStack_80,uVar3,uVar7);
    FUN_00ce20fc(auStack_80);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

