// functions/00e1e — 18 functions
#include "libGameKindred.h"




void FUN_00e1e2a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4403c(param_1,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Fortress_Withdraw");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte * FUN_00e1e334(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = 0;
  pbVar2 = (byte *)(param_1 + 0x3c);
  do {
    if (*(long *)(pbVar2 + -0x34) == 0) {
      pbVar1 = pbVar2 + -0x2c;
      *(undefined ***)pbVar1 = &PTR_FUN_0281fcb0;
      pbVar2[-0x1c] = 1;
      pbVar2[-0x1b] = 0;
      pbVar2[-0x1a] = 0;
      pbVar2[-0x19] = 0;
      pbVar2[-0x14] = 0;
      pbVar2[-0x13] = 0;
      pbVar2[-0x12] = 0x80;
      pbVar2[-0x11] = 0xbf;
      pbVar2[-0xc] = 1;
      pbVar2[-0xb] = 0;
      pbVar2[-10] = 0;
      pbVar2[-9] = 0;
      pbVar2[-4] = 0;
      pbVar2[-3] = 0;
      pbVar2[-2] = 0;
      pbVar2[-1] = 0;
      *pbVar2 = *pbVar2 | 7;
      *(byte **)(pbVar2 + -0x34) = pbVar1;
      return pbVar1;
    }
    uVar3 = uVar3 + 1;
    pbVar2 = pbVar2 + 0x38;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (byte *)0xbadbad11;
}




uint FUN_00e1e3b8(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = 0;
  if ((~*(byte *)(param_1 + 0x2c) & 7) != 0) {
    uVar4 = FUN_00d42698(param_2);
  }
  FUN_00e1e470(param_1 + 8,param_2,uVar4,auStack_40);
  FUN_00a83478(param_1 + 0x18,param_2,0);
  bVar1 = *(byte *)(param_1 + 0x2c);
  uVar3 = FUN_00d999f8(auStack_40,*(undefined4 *)(param_1 + 0x28),uVar4,bVar1 & 1,bVar1 >> 1 & 1,
                       bVar1 >> 2 & 1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1e470(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
    FUN_00d426c4(param_2,param_4);
    break;
  case 2:
    local_30[0] = *(undefined4 *)param_1;
    FUN_00d42718(param_2,local_30,param_4);
    break;
  case 3:
    local_30[0] = *(undefined4 *)param_1;
    FUN_00da2924(local_30,param_4);
    break;
  case 4:
    *param_4 = 0;
    (*(code *)*param_1)(param_2,param_4);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00e1e530(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_0281fcd8;
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00e1e5a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00d9979c(param_2,*(undefined8 *)(param_1 + 0x20));
  uVar2 = FUN_00a83478(param_1 + 8,param_2,0);
  FUN_00d99988(uVar1,uVar2,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
  return;
}




void FUN_00e1e608(void)

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
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38[0] = 0xc0800000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x11,1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1e67c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67b78();
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar3);
  cVar2 = FUN_00d55870(uVar3);
  FUN_00d4daf4(param_2,1,cVar2 == '\0',1,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4db48(0x41c80000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1e728(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48[0] = 0xc1200000;
  local_40 = 1;
  FUN_00d97d24(uVar3,PTR_s_Ability__Item__VisionTotem_02beafb8,local_48,0);
  uVar3 = FUN_00d39b2c(lVar2 + 0x10);
  local_48[0] = 0xffffffff;
  local_40 = 1;
  FUN_00d97fd0(uVar3,PTR_s_Ability__Item__VisionTotem_02beafb8,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1e7c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return;
}




void FUN_00e1e7d4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e99999a;
  return;
}




void FUN_00e1e7e4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ecccccd;
  return;
}




void FUN_00e1e7f4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_d0;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69224(param_1,&local_d0);
    lVar4 = FUN_00d66d28(local_d0);
    fVar7 = (float)FUN_009bc24c();
    uVar2 = FUN_00e6a474("timeOfLastDamageExchange");
    uVar2 = FUN_0091ed5c("timeOfLastDamageExchange",uVar2,0x12345678);
    pfVar5 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (*pfVar5 + 5.0 < fVar7) {
      lVar6 = *(long *)(lVar4 + 0x40);
      fVar7 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
              (*(float *)(lVar6 + 0x38) +
              *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
      if (DAT_031b9910 <= fVar7) {
        fVar7 = DAT_031b9910;
      }
      fVar10 = *(float *)(lVar6 + 0x308);
      fVar8 = DAT_031b9850;
      if (DAT_031b9850 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar7 = (float)FUN_00d67b0c(local_d0);
      fVar9 = DAT_031b9858;
      lVar6 = *(long *)(lVar4 + 0x40);
      fVar11 = *(float *)(lVar6 + 0x310);
      fVar7 = (fVar8 - fVar10) * 0.05 * fVar7;
      fVar8 = (*(float *)(lVar6 + 0x1a8) + 1.0) *
              (*(float *)(lVar6 + 0x40) +
              *(float *)(lVar6 + 0xf4) * (*(float *)(lVar6 + 0x25c) + 1.0));
      if (DAT_031b9918 <= fVar8) {
        fVar8 = DAT_031b9918;
      }
      fVar10 = (float)FUN_00d67b0c(local_d0);
      if (1.0 < fVar7) {
        if (fVar9 <= fVar8) {
          fVar9 = fVar8;
        }
        FUN_00d043c0(fVar7,auStack_98,*(undefined4 *)(lVar4 + 0x260),0,0);
        FUN_00ce20fc(auStack_98);
        FUN_00d043c0((fVar9 - fVar11) * 0.05 * fVar10,auStack_c8,*(undefined4 *)(lVar4 + 0x260),2,0)
        ;
        FUN_00ce20fc(auStack_c8);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1e9f8(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_40,&local_48);
  lVar3 = FUN_00d66d28(local_40);
  if (((*(int *)(local_48 + 0x10) == *(int *)(lVar3 + 0x260)) && (*(long *)(local_48 + 0x20) != 0))
     || ((*(int *)(local_48 + 0x18) == *(int *)(lVar3 + 0x260) && (*(long *)(local_48 + 0x28) != 0))
        )) {
    uVar5 = FUN_009bc24c();
    uVar2 = FUN_00e6a474("timeOfLastDamageExchange");
    uVar2 = FUN_0091ed5c("timeOfLastDamageExchange",uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    *puVar4 = uVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1ead4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = (float)FUN_009bc24c();
  fVar5 = (float)((int)((fVar5 + 120.0) / 120.0) - 1) * 40.0 + 60.0;
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bce8(uVar2,0x1000);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_68[0] = 0x3e19999a;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x38))(plVar4,local_68);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ghostwing_Buff");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3ef0a3d7,0x3f6147ae,0x3f2b851f);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_02bf0678);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(fVar5);
  local_68[0] = 0x3dcccccd;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,"build://Sounds/5v5/SFX/sfx_ghostwing_buff_activation.mp3");
  (**(code **)(*plVar4 + 0x28))(0x3f800000);
  lVar3 = FUN_00d65fac(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_02bf0678);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(fVar5);
  local_68[0] = 0x3dcccccd;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  lVar3 = FUN_00d64980(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_02bf0678);
  plVar4 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kraken5v5_Ghostwing_Barrier_02bf0680);
  plVar4 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kraken5v5_Ghostwing_Regen_02bf0688);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Kraken5v5_Ghostwing_Lockout_02bf0678);
  local_68[0] = 0x40800000;
  local_60 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  (**(code **)(*plVar4 + 0x38))(fVar5);
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kraken5v5_Ghostwing_Barrier_02bf0680);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1edc4(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_00e1edec(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d6624c(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kraken5v5_Ghostwing_Barrier_02bf0680);
                    /* WARNING: Could not recover jumptable at 0x00e1ee44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,FUN_00e1edc4);
  return;
}




void FUN_00e1ee48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ghostwing_Shield");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3ef0a3d7,0x3f6147ae,0x3f2b851f);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_48[0] = 0x3f666666;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0x41a00000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,3,1,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0x41200000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,1,1,local_48);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3f000000,uVar4,1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Kraken5v5_Ghostwing_Regen_02bf0688);
  (**(code **)(*plVar3 + 0x58))(plVar3,FUN_00e1edc4);
  lVar2 = FUN_00d64080(param_1);
  uVar4 = FUN_00d2d01c(lVar2 + 0x10);
  uVar5 = FUN_00d9b294();
  FUN_00d9b610(uVar5,PTR_s_Buff_Kraken5v5_Ghostwing_Bonus_02bf0670);
  FUN_00d9b5b8(uVar4);
  plVar3 = (long *)FUN_00d2a160();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kraken5v5_Ghostwing_Regen_02bf0688);
  FUN_00d9b5b8(uVar4);
  FUN_00d2a320();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

