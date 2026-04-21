// functions/00deb — 21 functions
#include "libGameKindred.h"




void FUN_00deb058(void)

{
  FUN_00deaf34("Attack","CenterBody",0x7f);
  return;
}




void FUN_00deb070(void)

{
  FUN_00deaf34("AltAttack","CenterBody",0x80);
  return;
}




void FUN_00deb088(void)

{
  FUN_00deaf34("CritAttack","CenterBody",0x81);
  return;
}




void FUN_00deb0a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d59f54(uVar1,0,7,0x19,0);
  return;
}




void FUN_00deb0c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  uVar4 = FUN_00cfab94(auStack_68);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09fbc(*(undefined4 *)(lVar2 + 0x434));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lorelai_Ability_A_Windup",0,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfaa2c(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability01");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdle");
  plVar5 = (long *)FUN_00cfab04(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Lorelai_A_Cast");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,0);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar6 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258;
  plVar5 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258);
  local_58 = FUN_00deb35c;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Lorelai_EmpoweredNoBonus_02bf1260);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f800000);
  local_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)FUN_00cfb1c4(auStack_68);
  plVar7 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*Lorelai_FishFood*",1);
  (**(code **)(*plVar7 + 0x20))(plVar7,FUN_00e60680);
  plVar7 = (long *)FUN_00cf9b8c(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar7 + 0x50))
                             (plVar7,PTR_s_Buff_Lorelai_FishFoodDelay_02bf1268,plVar5 + 2);
  local_58 = FUN_00deb0a0;
  local_50 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00deb35c);
  FUN_00cf7578(uVar3,0);
  FUN_00cf9eec(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deb35c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00deb370(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"Ability02",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_58);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09fbc(*(undefined4 *)(lVar2 + 0x440));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lorelai_Ability_B_Start",0,0,0xffffffff,0,1);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258;
  plVar6 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))
                             (plVar6,PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258);
  local_48 = FUN_00deb584;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00deb584);
  FUN_00cf7578(uVar3,0);
  plVar6 = (long *)FUN_00cfab04(auStack_58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Lorelai_B_Cast");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,0);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258;
  uVar3 = FUN_00cfb17c(lVar2 + 200);
  FUN_00cfcad8(uVar3,0x82,"CenterBody");
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  FUN_00cfcad8(uVar3,0x83,"CenterBody");
  FUN_00cf9eec(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deb584(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00deb598(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_68);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09fbc(*(undefined4 *)(lVar2 + 0x44c));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Lorelai_Ability_C_Start",0,0,0xffffffff,0,1);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258;
  plVar6 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))
                             (plVar6,PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258);
  local_58 = FUN_00deb7f0;
  local_50 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_58);
  lVar5 = FUN_00cf9f7c(auStack_68);
  lVar7 = FUN_00cefb20(lVar5 + 0x10);
  lVar2 = lVar5 + 0xb0;
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Lorelai_Talent_TalentC_02bf20f8;
  FUN_00cf99dc(lVar2);
  uVar3 = FUN_00cf9ab4(lVar2);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lorelai_Invulnerable_02bf1298,FUN_00deb804,1,0);
  FUN_00cf9eec(lVar2);
  FUN_00cf99dc(lVar5 + 200);
  lVar2 = FUN_00cf9f7c(lVar5 + 200);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_02bf1258;
  uVar3 = FUN_00cf9ab4(lVar2 + 200);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lorelai_WaterShield_02bf1290,FUN_00deb81c,1,0);
  uVar3 = FUN_00cf9ab4(lVar2 + 0xb0);
  FUN_00cf456c(uVar3,PTR_s_Buff_Lorelai_WaterShield_02bf1290,FUN_00deb830,1,0);
  FUN_00cf9eec(auStack_68);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00deb7f0);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deb7f0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00deb804(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec0c,0,9);
  return;
}




void FUN_00deb81c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00deb830(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,8,0x19,0);
  return;
}




void FUN_00deb844(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar3 = FUN_00cf2970(lVar2 + 0x10);
  *(code **)(lVar3 + 8) = FUN_00cfc020;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Emote_Taunt_02beb470);
  local_38[0] = 0x40000000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  uVar5 = FUN_00cfaa74(lVar2 + 0xb0);
  FUN_00cf32cc(0,uVar5,"Effect_Lorelai_Taunt",0,0,1,1,0);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deb924(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Hidden");
  (**(code **)(*plVar2 + 0x18))(plVar2,0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00deb9a0(undefined8 param_1,long param_2)

{
  return (*(byte *)(param_2 + 0x2f8) & 0x28) == 0;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00deb9b4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auStack_7a8 [16];
  undefined1 auStack_798 [40];
  undefined1 auStack_770 [96];
  long local_710 [200];
  long local_d0 [10];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if (((uVar8 & 1) != 0) && (lVar9 = FUN_00d51778(param_1), lVar9 != 0)) {
    lVar9 = FUN_00d5048c(param_1);
    uVar1 = *(undefined4 *)(lVar9 + 0x260);
    fVar20 = *(float *)(*(long *)(lVar9 + 0x40) + 0x310);
    uVar15 = 1;
    fVar18 = (float)thunk_FUN_00d086f0(lVar9,4,1);
    if (fVar18 < fVar20) {
      fVar20 = (float)thunk_FUN_00d086f0(lVar9,0,1);
      lVar10 = *(long *)(lVar9 + 0x18);
      while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_02e3ef78))) {
        lVar10 = *(long *)(lVar10 + 0x20);
      }
      uVar15 = (int)fVar20 + 1;
      iVar5 = FUN_00d535a4(lVar10,8);
      if (iVar5 != 0) {
        fVar20 = (float)FUN_00d59f54(lVar9,8,6,0x19,0);
        uVar15 = (uint)(fVar20 + (float)uVar15);
      }
    }
    uVar14 = 1;
    uVar19 = thunk_FUN_00d086f0(lVar9,1,3);
    memset(local_d0 + 1,0,0x48);
    local_d0[0] = FUN_00d51778(param_1);
    if (1 < uVar15) {
      memset(local_d0 + 1,0,(ulong)(uVar15 - 2) * 8 + 8);
      uVar8 = 1;
      uVar14 = 1;
LAB_00debb10:
      lVar10 = local_d0[uVar14 - 1];
      if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x2f4) & 0x101004) == 0)) {
        FUN_00d55794(lVar10,auStack_7a8,0);
        FUN_00d4d9e8(auStack_770);
        FUN_00d4dabc(auStack_770,0x40000);
        FUN_00d4db40(auStack_770,lVar9);
        FUN_00d4daf4(auStack_770,0,1,0,0);
        FUN_00d4dc24(auStack_770,1);
        FUN_00d4d354(auStack_770,0);
        FUN_00d4db48(uVar19,auStack_770,auStack_7a8);
        FUN_00d4eb08(auStack_798,auStack_7a8,200,0);
        uVar6 = FUN_00d9e840(auStack_770,local_710,200,auStack_798);
        if (uVar6 != 0) {
          uVar11 = 0;
          do {
            uVar12 = 0;
            while ((local_d0[uVar12] == 0 ||
                   (*(int *)(local_710[uVar11] + 0x260) != *(int *)(local_d0[uVar12] + 0x260)))) {
              uVar12 = uVar12 + 1;
              if (uVar15 <= uVar12) {
                uVar14 = uVar14 + 1;
                local_d0[uVar8] = local_710[uVar11 & 0xffffffff];
                uVar8 = uVar8 + 1;
                if (uVar8 < uVar15) goto LAB_00debb10;
                goto LAB_00debc3c;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar6);
        }
      }
    }
LAB_00debc3c:
    lVar10 = local_d0[0];
    puVar4 = PTR_s_Buff_Varya_AA_ChainBeamPrimary_02bf12c0;
    uVar2 = *(undefined4 *)(local_d0[0] + 0x260);
    uVar7 = FUN_00ceb350();
    FUN_00cfe864(0x3ecccccd,0,0,local_710,uVar1,uVar2,puVar4,uVar7,1,uVar1,1);
    FUN_00ce20fc(local_710);
    if (1 < uVar14) {
      plVar16 = local_d0;
      lVar17 = (ulong)uVar14 - 1;
      do {
        puVar4 = PTR_s_Buff_Varya_AA_ChainBeamSecondary_02bf12c8;
        plVar16 = (long *)((long)plVar16 + 8);
        lVar13 = *plVar16;
        uVar2 = *(undefined4 *)(lVar13 + 0x260);
        uVar7 = FUN_00ceb350();
        FUN_00cfe864(0x3ecccccd,0,0,auStack_770,uVar1,uVar2,puVar4,uVar7,1,
                     *(undefined4 *)(lVar10 + 0x260),0);
        FUN_00ce20fc(auStack_770);
        lVar17 = lVar17 + -1;
        lVar10 = lVar13;
      } while (lVar17 != 0);
      if (1 < uVar14) {
        FUN_00d043c0(-fVar18,auStack_770,*(undefined4 *)(lVar9 + 0x260),2,0);
        FUN_00ce20fc(auStack_770);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00debd6c(void)

{
  long lVar1;
  undefined4 *in_x3;
  undefined4 *in_x4;
  
  lVar1 = FUN_00d50ef8();
  *in_x3 = *(undefined4 *)(lVar1 + 0x260);
  *in_x4 = 1;
  return;
}




void FUN_00debda0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = thunk_FUN_00d086f0(uVar1,2,1);
  *param_2 = uVar2;
  return;
}




void FUN_00debdd0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_1);
    fVar5 = (float)thunk_FUN_00d086f0(lVar3,5,1);
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar6 = (*(float *)(lVar4 + 0x1dc) + 1.0) *
            (*(float *)(lVar4 + 0x74) +
            *(float *)(lVar4 + 0x128) * (*(float *)(lVar4 + 0x290) + 1.0));
    if (DAT_031b242c <= fVar6) {
      fVar6 = DAT_031b242c;
    }
    fVar7 = DAT_031b236c;
    if (DAT_031b236c <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar7 <= 0.1) {
      fVar7 = 0.1;
    }
    FUN_00d04e08(fVar5 / fVar7,auStack_58,*(undefined4 *)(lVar3 + 0x260),0xd60c580b,1);
    FUN_00ce20fc(auStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00debebc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar3 = FUN_00cfb05c(auStack_78);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  plVar4 = (long *)FUN_00cfab04(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"Channeling");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Varya_AA_ChannelingSelf");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_68[0] = 0x3f4ccccd;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_68);
  uVar3 = FUN_00cfab94(auStack_78);
  lVar5 = FUN_00d09310();
  uVar6 = FUN_00d0a010(*(undefined4 *)(lVar5 + 0x45c));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Varya_Chain_Lightning_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Varya_Chain_Lightning_Attack_2");
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  FUN_00cfb0a4(auStack_78);
  FUN_00cf99dc(auStack_78);
  puVar2 = PTR_s_Buff_Varya_AA_BeamDamage_02bf12b0;
  uVar3 = FUN_00cf9ab4(auStack_78);
  FUN_00cf44e8(0x3e4ccccd,uVar3,puVar2,1,0);
  puVar2 = PTR_s_Buff_Varya_AA_BeamFx_02bf12b8;
  uVar3 = FUN_00cf9ab4(auStack_78);
  uVar3 = FUN_00cf44e8(0x3ecccccd,uVar3,puVar2,1,0);
  FUN_00cf45d4(uVar3,FUN_00debd6c);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_78);
  puVar2 = PTR_s_Buff_Varya_AA_BeamFx_02bf12b8;
  uVar3 = FUN_00cf9ab4(auStack_78);
  uVar3 = FUN_00cf44e8(0x3ecccccd,uVar3,puVar2,1,0);
  FUN_00cf45d4(uVar3,FUN_00debd6c);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  FUN_00cf98bc(auStack_78);
  puVar2 = PTR_s_Buff_SpeedDecayingUsingBuffVar_02beb4d0;
  uVar3 = FUN_00cf9ab4(auStack_78);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00dec1c0,1,0);
  FUN_00cf45d4(uVar3,FUN_00debda0);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cf9cf4(auStack_78);
  FUN_00cf2e48(uVar3,FUN_00debdd0);
  uVar3 = FUN_00cf9cf4(auStack_78);
  FUN_00cf2e48(uVar3,FUN_00deb9b4);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

