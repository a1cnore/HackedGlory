// functions/00db3 — 16 functions
#include "libGameKindred.h"




void FUN_00db3034(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,float *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,&local_58,0);
  lVar3 = FUN_00d51778(param_4);
  if (lVar3 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_00d51830(param_4);
    fVar5 = (local_58 - fVar4) * (local_58 - fVar4) + (fStack_54 - param_2) * (fStack_54 - param_2)
            + (local_50 - param_3) * (local_50 - param_3);
    fVar4 = SQRT(fVar5);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar5);
    }
    fVar5 = (float)FUN_00db2fb8(uVar2,lVar3);
    fVar4 = fVar4 - fVar5;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar5 = (float)FUN_00d59f54(uVar2,0,3,0x19,0);
    fVar4 = fVar4 / fVar5;
  }
  *param_6 = fVar4;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db313c(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,6,0x19,0);
  *param_2 = (int)fVar2;
  return;
}




void FUN_00db3178(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,0,4,0x19,0);
  *param_3 = uVar2;
  return;
}




undefined8 FUN_00db31b0(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_00d517cc();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    iVar2 = FUN_00d6bb44(lVar4,DAT_031b8c48);
    if (iVar2 != 0) {
      bVar1 = FUN_00d9ffd8(lVar3);
      if ((bVar1 & iVar2 == 2) != 0) {
        return 1;
      }
      if (iVar2 == 5) {
        return 1;
      }
    }
  }
  return 0;
}




void FUN_00db3254(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar3 = FUN_00db4148(lVar2 + 0x10);
  if (PTR_s_Ability__Blackfeather__A_02bee738 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Blackfeather__A_02bee738;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Blackfeather__A_02bee738;
    if (*PTR_s_Ability__Blackfeather__A_02bee738 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar3 + 8) = uVar6;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Blackfeather_GrantLungeRese_02bf03d0);
  local_48 = FUN_00db2ec4;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00cfa6cc(auStack_58);
  uVar5 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar5,1);
  uVar5 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar5,"Ability01",0,1,0,"AttackToIdleCombat");
  uVar5 = FUN_00cfab94(auStack_58);
  lVar2 = FUN_00d09310();
  FUN_00cf4164(0x3f800000,*(undefined4 *)(lVar2 + 0x244),uVar5,"Sound_Blackfthr_Ability_A_Start",0,0
               ,0xffffffff,0,1);
  uVar5 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar5,FUN_00db2f80);
  plVar4 = (long *)FUN_00cfa12c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0x3f000000,0,0,0);
  local_48 = FUN_00db2f6c;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0xb8))(0x41700000);
  uVar5 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar5,FUN_00db3034);
  FUN_00cfb56c(auStack_58);
  uVar5 = FUN_00cfab94(auStack_58);
  lVar2 = FUN_00d09310();
  FUN_00cf4164(0x3f800000,*(undefined4 *)(lVar2 + 0x244),uVar5,"Sound_Blackfthr_Ability_A_Kill",0,0,
               0xffffffff,0,1);
  FUN_00cf99dc(auStack_58);
  plVar4 = (long *)FUN_00cfa09c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"DAMAGE");
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar3 = FUN_00cf2970(lVar2 + 0x10);
  *(code **)(lVar3 + 8) = FUN_00db31b0;
  plVar4 = (long *)FUN_00cfa09c(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x20))(plVar4,"ExecutePctDamage");
  plVar4 = (long *)FUN_00cfac24(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Blackfthr_Heartthrob_Broken_Heart");
  lVar2 = FUN_00d09310();
  FUN_00d09a28(*(undefined4 *)(lVar2 + 0x23c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar5 = FUN_00cf9ab4(auStack_58);
  uVar5 = FUN_00cf456c(uVar5,PTR_s_Buff_Blackfeather_HeartThrob_02bf03c0,FUN_00db2e40,1,0);
  FUN_00cf4598(uVar5,FUN_00db313c);
  uVar5 = FUN_00cf9ab4(auStack_58);
  uVar5 = FUN_00cf44e8(0x3dcccccd,uVar5,PTR_s_Buff_Blackfeather_A_ImpactEffect_02bf03b8,1,0);
  FUN_00cf4598(uVar5,FUN_00db313c);
  FUN_00cf9eec(auStack_58);
  FUN_00da0f54(auStack_58,PTR_s_Buff_Blackfeather_SpeedBoost_02bf03f0,FUN_00db3624);
  FUN_00cfacb4(auStack_58);
  uVar5 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar5,FUN_00db3178);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00db3624(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00db3638(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d59f54(uVar1,1,3,0x19,0);
  *param_3 = uVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db3670(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined1 local_44;
  undefined4 local_43;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) {
    uVar7 = 0x811c9dc5;
    iVar2 = FUN_00d504c4(param_1);
    pbVar5 = (byte *)"Effect_Blackfeather_B_Lvl5";
    if (iVar2 != 5) {
      pbVar5 = (byte *)"Effect_Blackfeather_B";
    }
    uVar6 = (uint)*pbVar5;
    uStack_90 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    if (*pbVar5 != 0) {
      do {
        pbVar5 = pbVar5 + 1;
        uVar7 = (uVar7 ^ uVar6) * 0x1000193;
        uVar6 = (uint)*pbVar5;
      } while (*pbVar5 != 0);
    }
    local_84 = 0xffffffff00000000;
    local_74 = 0xff000000;
    local_64 = DAT_03218f40;
    local_6c = _DAT_03218ef8;
    local_5c = DAT_03218f48;
    local_7c = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 2;
    local_43 = 1;
    local_44 = 0;
    local_88 = uVar7;
    FUN_00d5048c(param_1);
    uStack_90 = FUN_00d5babc();
    uVar4 = FUN_00d5048c(param_1);
    FUN_00d5a548(uVar4,&local_a8);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00db37a0(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00db37c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db3870(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_810 [16];
  undefined1 auStack_800 [88];
  undefined1 auStack_7a8 [96];
  undefined1 auStack_748 [88];
  undefined1 auStack_6f0 [48];
  long local_6c0 [200];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uVar10 = FUN_00ceab48();
  if ((uVar10 & 1) != 0) {
    lVar11 = FUN_00d5048c(param_1);
    iVar5 = FUN_00d51964(param_1);
    if (iVar5 != 0) {
      uVar8 = 0;
      do {
        lVar12 = FUN_00d51954(param_1,uVar8);
        if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x2f4) & 1) != 0)) {
          fVar14 = (float)FUN_00d59f54(lVar11,1,4,0x19,0);
          fVar15 = (float)FUN_00d59f54(lVar11,1,5,0x19,0);
          lVar12 = *(long *)(lVar11 + 0x40);
          fVar18 = (*(float *)(lVar12 + 0x1ac) + 1.0) *
                   (*(float *)(lVar12 + 0x44) +
                   *(float *)(lVar12 + 0xf8) * (*(float *)(lVar12 + 0x260) + 1.0));
          if (DAT_031b01bc <= fVar18) {
            fVar18 = DAT_031b01bc;
          }
          fVar19 = DAT_031b00fc;
          if (DAT_031b00fc <= fVar18) {
            fVar19 = fVar18;
          }
          fVar16 = (float)FUN_00d59f54(lVar11,1,6,0x19,0);
          lVar12 = *(long *)(lVar11 + 0x40);
          fVar18 = (*(float *)(lVar12 + 0x1a8) + 1.0) *
                   (*(float *)(lVar12 + 0x40) +
                   *(float *)(lVar12 + 0xf4) * (*(float *)(lVar12 + 0x25c) + 1.0));
          if (DAT_031b01b8 <= fVar18) {
            fVar18 = DAT_031b01b8;
          }
          fVar20 = DAT_031b00f8;
          if (DAT_031b00f8 <= fVar18) {
            fVar20 = fVar18;
          }
          FUN_00d043c0(fVar14 + fVar15 * fVar19 + fVar16 * fVar20,auStack_6f0,
                       *(undefined4 *)(lVar11 + 0x260),3,0);
          FUN_00ce20fc(auStack_6f0);
          uVar10 = FUN_00d44008(*(undefined4 *)(lVar11 + 0x260),
                                PTR_s_Buff_Blackfeather_Talent_PointGu_02bf1d30);
          puVar4 = PTR_s_Buff_Blackfeather_SlashBarrier_02bf03c8;
          puVar3 = PTR_s_Buff_TalentSuiteStrong_02beb4a8;
          if ((uVar10 & 1) == 0) {
            uVar1 = *(undefined4 *)(lVar11 + 0x260);
            uVar17 = FUN_00d59f54(lVar11,1,9,0x19,0);
            uVar7 = FUN_00ceb350();
            FUN_00cfe864(uVar17,0,0,local_6c0,uVar1,uVar1,puVar4,uVar7,1,0,0);
            FUN_00ce20fc(local_6c0);
          }
          else {
            uVar1 = *(undefined4 *)(lVar11 + 0x260);
            uVar17 = FUN_00d5a3d0(lVar11,DAT_0320e5a0,1,9);
            uVar7 = FUN_00ceb350();
            FUN_00cfe864(uVar17,0,0,auStack_748,uVar1,uVar1,puVar3,uVar7,1,0,0);
            FUN_00ce20fc(auStack_748);
            FUN_00d55794(lVar11,auStack_810,0);
            FUN_00d4d9e8(auStack_7a8);
            FUN_00d4dabc(auStack_7a8,1);
            FUN_00d4db40(auStack_7a8,lVar11);
            FUN_00d4daf4(auStack_7a8,1,0,1,0);
            FUN_00d5a3d0(lVar11,DAT_0320e5a0,2,9);
            FUN_00d4db48(auStack_7a8,auStack_810);
            uVar8 = FUN_00d9e840(auStack_7a8,local_6c0,200,0);
            if (uVar8 != 0) {
              uVar10 = (ulong)uVar8;
              plVar13 = local_6c0;
              do {
                puVar3 = PTR_s_Buff_Blackfeather_SlashBarrier_02bf03c8;
                if (*plVar13 != 0) {
                  uVar1 = *(undefined4 *)(lVar11 + 0x260);
                  uVar7 = *(undefined4 *)(*plVar13 + 0x260);
                  uVar17 = FUN_00d5a3d0(lVar11,DAT_0320e5a0,1,9);
                  uVar9 = FUN_00ceb350();
                  FUN_00cfe864(uVar17,0,0,auStack_800,uVar1,uVar7,puVar3,uVar9,1,0,0);
                  FUN_00ce20fc(auStack_800);
                }
                uVar10 = uVar10 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar10 != 0);
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        uVar6 = FUN_00d51964(param_1);
      } while (uVar8 < uVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db3c30(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfa6cc(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cf9cf4(auStack_a8);
  FUN_00cf2e48(uVar2,FUN_00db3670);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09a28(*(undefined4 *)(lVar3 + 0x248));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Blackfthr_Ability_B_Start",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7570(uVar2,FUN_00db3638);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09a28(*(undefined4 *)(lVar3 + 0x248));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Blackfthr_Ability_B_Attack",0,0,0xffffffff,0,1);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar2 = FUN_00cfaf3c(auStack_a8);
  uVar2 = FUN_00cf5ac8(0x3f4ccccd,uVar2,FUN_00db37a0,FUN_00db37c8);
  FUN_00cf5ae0(uVar2,auStack_98);
  FUN_00cfa09c(auStack_a8);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar2,PTR_s_Buff_Blackfeather_HeartThrob_02bf03c0,FUN_00db2e40,1,0);
  uVar2 = FUN_00cf9cf4(auStack_a8);
  FUN_00cf2e48(uVar2,FUN_00db3870);
  FUN_00cf9eec(auStack_a8);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db3e4c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_3 = fVar2 + 0.05;
  return;
}




void FUN_00db3e98(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00db3eac(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,2,3,0x19,0);
  *param_3 = fVar1 + 0.2;
  return;
}




void FUN_00db3ef0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar2,PTR_s_Buff_Blackfeather_UltBonusDefens_02bf03e8,FUN_00db3eac,1,0);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar2,PTR_s_Buff_BlockDebuffs_02beb3c8,FUN_00db3eac,1,0);
  uVar2 = FUN_00cf9ab4(auStack_58);
  uVar2 = FUN_00cf4540(uVar2,PTR_s_Buff_SelfProjectile_02beb4b8,FUN_00db3e4c,1,0);
  FUN_00cf45cc(uVar2,FUN_00db41a4);
  FUN_00cf9eec(auStack_58);
  FUN_00cfa6cc(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Ability03",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Blackfeather_A_Dash",1,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09a28(*(undefined4 *)(lVar4 + 0x24c));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Blackfthr_Ability_C_Attack",0,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfa12c(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_48 = FUN_00db3e98;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_48);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00db3e4c);
  FUN_00cfb56c(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar2,PTR_s_Buff_Blackfeather_MoveSpeedAfter_02bf03f8,FUN_00db4134,1,0);
  FUN_00cf9eec(auStack_58);
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

