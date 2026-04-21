// functions/00e0d — 13 functions
#include "libGameKindred.h"




void FUN_00e0d05c(undefined8 param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e0cf98(param_1,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}




void FUN_00e0d0a8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_1);
  *(byte *)(lVar1 + 0x303) = *(byte *)(lVar1 + 0x303) | 2;
  return;
}




void FUN_00e0d0cc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d652a4();
  plVar6 = (long *)FUN_00d2a110(lVar5 + 0x10);
  local_68 = FUN_00e0d05c;
  local_60 = 4;
  (**(code **)(*plVar6 + 0x30))(plVar6,0x2c,0,&local_68);
  plVar6 = (long *)FUN_00d2a110(lVar5 + 0x10);
  local_68._0_4_ = 0x42c80000;
  local_60 = 1;
  (**(code **)(*plVar6 + 0x30))(plVar6,0x2b,0,&local_68);
  lVar5 = FUN_00d63f30(param_1);
  uVar7 = FUN_00d39a54(lVar5 + 0x10);
  FUN_00d3e604(uVar7,FUN_00e0d0a8);
  plVar6 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_68 = (code *)CONCAT44(local_68._4_4_,0x42c80000);
  local_60 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,3,&local_68);
  lVar5 = FUN_00d63888(param_1);
  plVar6 = (long *)FUN_00d2887c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Alpha_Rebooting_02bf01e8);
  local_68 = FUN_00e0c9b0;
  local_60 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_68);
  lVar5 = FUN_00d64ec0(param_1);
  plVar6 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_68 = FUN_00e0d05c;
  local_60 = 4;
  (**(code **)(*plVar6 + 0x20))(plVar6,1,&local_68);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onHostDieName_02bed588;
  uVar4 = FUN_00e6a474(PTR_s_onHostDieName_02bed588);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0ce24;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onActorAttributesChangedName_02bed568;
  uVar4 = FUN_00e6a474(PTR_s_onActorAttributesChangedName_02bed568);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0cecc;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0d334(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_120;
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_120);
  lVar3 = FUN_00d66d28(local_120);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar3 + 0x40);
    fVar11 = (*(float *)(lVar5 + 0x250) + 1.0) *
             (*(float *)(lVar5 + 0xe8) +
             *(float *)(lVar5 + 0x19c) * (*(float *)(lVar5 + 0x304) + 1.0));
    fVar10 = *(float *)(lVar5 + 0x30c);
    if (DAT_031b83c0 <= fVar11) {
      fVar11 = DAT_031b83c0;
    }
    fVar12 = DAT_031b8300;
    if (DAT_031b8300 <= fVar11) {
      fVar12 = fVar11;
    }
    if ((fVar12 <= fVar10) || (fVar12 <= 0.0)) {
      fVar11 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
               (*(float *)(lVar5 + 0x38) +
               *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
      if (DAT_031b8310 <= fVar11) {
        fVar11 = DAT_031b8310;
      }
      fVar10 = DAT_031b8250;
      if (DAT_031b8250 <= fVar11) {
        fVar10 = fVar11;
      }
    }
    else {
      fVar11 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
               (*(float *)(lVar5 + 0x38) +
               *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
      if (DAT_031b8310 <= fVar11) {
        fVar11 = DAT_031b8310;
      }
      fVar13 = DAT_031b8250;
      if (DAT_031b8250 <= fVar11) {
        fVar13 = fVar11;
      }
      fVar11 = (float)thunk_FUN_00d086f0(lVar3,6,1);
      fVar10 = (1.0 - (1.0 - fVar10 / fVar12) * (1.0 - fVar11)) * fVar13;
    }
    uVar9 = 0x811c9dc5;
    FUN_00d043c0(fVar10,auStack_88,*(undefined4 *)(lVar3 + 0x260),0,1);
    FUN_00ce20fc(auStack_88);
    FUN_00d043c0(0,auStack_b8,*(undefined4 *)(lVar3 + 0x260),3,1);
    FUN_00ce20fc(auStack_b8);
    uVar6 = 0x811c9dc5;
    if (*PTR_s_Ability__Alpha__A_02bee458 != 0) {
      uVar6 = 0x811c9dc5;
      pbVar8 = PTR_s_Ability__Alpha__A_02bee458;
      bVar2 = *PTR_s_Ability__Alpha__A_02bee458;
      do {
        pbVar8 = pbVar8 + 1;
        uVar6 = (uVar6 ^ bVar2) * 0x1000193;
        bVar2 = *pbVar8;
      } while (*pbVar8 != 0);
    }
    FUN_00d04e08(0,auStack_e8,*(undefined4 *)(lVar3 + 0x260),uVar6,1);
    FUN_00ce20fc(auStack_e8);
    uVar6 = (uint)(byte)*PTR_s_Ability__Alpha__B_02bee468;
    pbVar8 = PTR_s_Ability__Alpha__B_02bee468;
    if (*PTR_s_Ability__Alpha__B_02bee468 != 0) {
      do {
        uVar7 = (uint)pbVar8[1];
        uVar9 = (uVar9 ^ uVar6) * 0x1000193;
        uVar6 = uVar7;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    FUN_00d04e08(0,auStack_118,*(undefined4 *)(lVar3 + 0x260),uVar9,1);
    FUN_00ce20fc(auStack_118);
    lVar5 = *(long *)(lVar3 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    uVar4 = FUN_00d6bbac(lVar5,DAT_031b8210,0);
    if ((uVar4 & 1) == 0) {
      FUN_00e0cd60(lVar3);
    }
  }
  FUN_00d5c338(lVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e0d608(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x24c) + 1.0) *
          (*(float *)(lVar1 + 0xe4) + *(float *)(lVar1 + 0x198) * (*(float *)(lVar1 + 0x300) + 1.0))
  ;
  if (DAT_031b83bc <= fVar2) {
    fVar2 = DAT_031b83bc;
  }
  fVar3 = DAT_031b82f8._4_4_;
  if (DAT_031b82f8._4_4_ <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = (float)FUN_00d67b3c(*param_1);
  return -(*(float *)((long)param_1 + 0x454) * (fVar3 / fVar2));
}




void FUN_00e0d69c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onTimeoutName_02bed530;
  uVar4 = FUN_00e6a474(PTR_s_onTimeoutName_02bed530);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0d334;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar6 = FUN_00d66d28(param_1);
  fVar8 = (float)FUN_00d67b3c(param_1);
  fVar9 = (float)thunk_FUN_00d086f0(uVar6,0,1);
  uVar6 = FUN_00d64d7c(param_1);
  lVar5 = FUN_00d4891c(0x3dcccccd,uVar6,0);
  plVar7 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))();
  local_58 = FUN_00e0d608;
  local_50 = 4;
  (**(code **)(*plVar7 + 0x10))(plVar7,3,&local_58);
  lVar5 = FUN_00d63f30(param_1);
  lVar5 = lVar5 + 0x10;
  plVar7 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Alpha_B_Stacks_Buff_02bf0200);
  plVar7 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Alpha_B_Stacks_Debuff_02bf0208);
  plVar7 = (long *)FUN_00d2779c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Reboot");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"AttackToIdle");
  (**(code **)(*plVar7 + 0x10))((1.0 - fVar8 / fVar9) + 1.0);
  FUN_00d29b94(lVar5);
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  FUN_00d29be4(lVar5);
  uVar6 = FUN_00d29c84(lVar5);
  FUN_00d46b64(uVar6,0x1f);
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Stun","Reboot");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Idle","Reboot");
  plVar7 = (long *)FUN_00d2945c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Alpha_C_Rebooting");
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  plVar7 = (long *)FUN_00d2df94(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Sound_Alpha_Ability_C_Reboot");
  lVar5 = FUN_00d09310();
  FUN_00d09b78(*(undefined4 *)(lVar5 + 0x2ac));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar5 = FUN_00d64314(param_1);
  plVar7 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))();
  local_58 = (code *)((ulong)local_58 & 0xffffffff00000000);
  local_50 = 1;
  (**(code **)(*plVar7 + 0x20))(plVar7,3,&local_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0d980(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_30);
    lVar3 = FUN_00d66d28(local_30);
    *(byte *)(lVar3 + 0x303) = *(byte *)(lVar3 + 0x303) & 0xfd;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0d9fc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_30);
    lVar3 = FUN_00d66d28(local_30);
    *(byte *)(lVar3 + 0x303) = *(byte *)(lVar3 + 0x303) | 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0da68(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_74;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d69554(param_1,&local_70,&local_74);
    lVar5 = FUN_00d66d28(local_70);
    if ((local_74 == DAT_031afb98) && (iVar3 = FUN_00d5c238(lVar5,2), iVar3 == 1)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar9 = 0x811c9dc5;
      uVar7 = (uint)(byte)*PTR_s_Ability__Alpha__C_02bee470;
      pbVar6 = PTR_s_Ability__Alpha__C_02bee470;
      if (*PTR_s_Ability__Alpha__C_02bee470 != 0) {
        do {
          uVar8 = (uint)pbVar6[1];
          uVar9 = (uVar9 ^ uVar7) * 0x1000193;
          uVar7 = uVar8;
          pbVar6 = pbVar6 + 1;
        } while (uVar8 != 0);
      }
      FUN_00d67b34(local_70);
      FUN_00d04e08(auStack_68,uVar1,uVar9,1);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e0db68(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_40);
    lVar6 = FUN_00d66d28(local_40);
    uVar7 = FUN_00d9eb38();
    iVar3 = FUN_00d5c238(lVar6,2);
    if (iVar3 != 0) {
      uVar7 = FUN_00d539e8(uVar7,2);
      fVar8 = (float)FUN_00d67b34(local_40);
      if (0.05 <= ABS(fVar8 - (float)uVar7)) {
        uVar1 = *(undefined4 *)(lVar6 + 0x260);
        uVar4 = FUN_00d66d34(local_40);
        FUN_00d04628(uVar7,auStack_68,uVar1,uVar4);
        FUN_00ce20fc(auStack_68);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e0dc4c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_00d66d28(*param_1);
  uVar3 = FUN_00d9eb38();
  iVar1 = FUN_00d5c238(lVar2,2);
  if (iVar1 == 0) {
    fVar4 = (float)FUN_00d67b34(*param_1);
  }
  else {
    fVar4 = (float)FUN_00d539e8(uVar3,2);
  }
  fVar5 = (float)FUN_00e606cc(lVar2);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar6 = (*(float *)(lVar2 + 0x24c) + 1.0) *
          (*(float *)(lVar2 + 0xe4) + *(float *)(lVar2 + 0x198) * (*(float *)(lVar2 + 0x300) + 1.0))
  ;
  if (DAT_031b83bc <= fVar6) {
    fVar6 = DAT_031b83bc;
  }
  fVar7 = DAT_031b82f8._4_4_;
  if (DAT_031b82f8._4_4_ <= fVar6) {
    fVar7 = fVar6;
  }
  return (1.0 - fVar4 / fVar5) * fVar7;
}




void FUN_00e0dd24(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onApplyName_02bed4f8;
  uVar4 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0d980;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onEndName_02bed518;
  uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0d9fc;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onAbilityUpgradedName_02bed538;
  uVar4 = FUN_00e6a474(PTR_s_onAbilityUpgradedName_02bed538);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0da68;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0db68;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  FUN_00d67b04(0x3dcccccd,param_1);
  lVar5 = FUN_00d63f30(param_1);
  plVar6 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
  local_50 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,3,&local_58);
  uVar7 = FUN_00d64d7c(param_1);
  lVar5 = FUN_00d4891c(0x3dcccccd,uVar7,0);
  plVar6 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_58 = FUN_00e0dc4c;
  local_50 = 4;
  (**(code **)(*plVar6 + 0x20))(plVar6,3,&local_58);
  lVar5 = FUN_00d64980(param_1);
  plVar6 = (long *)FUN_00d2a464(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  (**(code **)(*plVar6 + 0x28))(plVar6,3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0dfb0(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e0e014;
  local_30 = 3;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

