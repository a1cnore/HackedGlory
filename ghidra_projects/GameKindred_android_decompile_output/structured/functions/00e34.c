// functions/00e34 — 16 functions
#include "libGameKindred.h"




void FUN_00e3400c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  FUN_00d092ac(uVar2,0,7,9,1);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar3 + 0x18);
  FUN_00d3e534();
  uVar2 = FUN_00d29db0();
  FUN_00d42654(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e34098(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  FUN_00d092ac(uVar2,0,9,9,1);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar3 + 0x20);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2cb84();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e888(0xbf800000,0,0,uVar2,PTR_s_Buff_PetalSeed_LandMine_02bf0da0,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e34184(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e341e8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3424c(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined1 auStack_e8 [96];
  long local_88 [6];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_f0);
  uVar3 = FUN_00d66d28(local_f0);
  FUN_00d4d9e8(auStack_e8);
  uVar4 = FUN_00d66d28(local_f0);
  FUN_00d4daf4(auStack_e8,0,1,0,uVar4);
  FUN_00d4dabc(auStack_e8,1);
  uVar4 = FUN_00d66d28(local_f0);
  FUN_00d55794(uVar4,auStack_100,0);
  FUN_00d092ac(uVar3,0,0x10,9,1);
  FUN_00d4db48(auStack_e8,auStack_100);
  uVar2 = FUN_00d9e840(auStack_e8,local_88,6,0);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      for (lVar5 = *(long *)(local_88[uVar7] + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
        if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02c7bf48) {
          uVar6 = FUN_00d6c0bc(lVar5,PTR_s_Buff_PetalSeed_LandMine_Expiry_02bf0da8);
          if ((uVar6 & 1) == 0) {
            FUN_00d55794(uVar3,auStack_110,0);
            FUN_008ff6f4(uVar3,1,auStack_110);
          }
          break;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e343b4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3424c;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
    FUN_00d67b04(0x3e4ccccd,param_1);
    return;
  }
  return;
}




void FUN_00e34458(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28();
  FUN_00d092ac(uVar1,0,10,9,1);
  FUN_00d67d04(param_1);
  return;
}




void FUN_00e34490(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_a8;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69224(param_1,&local_a8);
    lVar4 = FUN_00d66d28(local_a8);
    lVar5 = *(long *)(lVar4 + 0x40);
    fVar6 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
            (*(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0)
            );
    if (DAT_031baa50 <= fVar6) {
      fVar6 = DAT_031baa50;
    }
    fVar2 = DAT_031ba990;
    if (DAT_031ba990 <= fVar6) {
      fVar2 = fVar6;
    }
    if (fVar2 != 0.0) {
      fVar7 = *(float *)(lVar5 + 0x308);
      fVar6 = (float)FUN_00d092ac(lVar4,0,5,9,1);
      FUN_00d041e4(auStack_70,*(undefined4 *)(lVar4 + 0x260),0,0,1,0xffffffff);
      FUN_00ce20fc(auStack_70);
      FUN_00d043c0((fVar7 / fVar2) * (float)(int)fVar6,auStack_a0,*(undefined4 *)(lVar4 + 0x260),0,1
                  );
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e345c4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onApplyName_02bed4f8;
  uVar3 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e34490;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e34490;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onActorLevelUpName_02bed550;
  uVar3 = FUN_00e6a474(PTR_s_onActorLevelUpName_02bed550);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e34490;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onLeaveCombatName_02bed5a8;
  uVar3 = FUN_00e6a474(PTR_s_onLeaveCombatName_02bed5a8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e33960;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  FUN_00d67b04(0x40a00000,param_1);
  return;
}




void FUN_00e3474c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d42ce8(param_1,0x23,"Effect_Petal_Talent_Immobilize",0);
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00e347b8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d40eec(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




undefined8 * FUN_00e3488c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_00d468c8(puVar4);
    *puVar4 = &PTR_FUN_0281b548;
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e34968(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_70 [2];
  long local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) goto LAB_00e34c08;
  FUN_00d69294(param_1,&local_60,&local_68);
  lVar4 = FUN_00d66d28(local_60);
  uVar3 = FUN_00daa578(local_68,lVar4);
  if ((((uVar3 & 1) == 0) || (uVar3 = FUN_00daa58c(local_68,lVar4), (uVar3 & 1) != 0)) ||
     (*(int *)(local_68 + 8) == 3)) goto LAB_00e34c08;
  fVar9 = (float)thunk_FUN_00d086f0(lVar4,9,1);
  if ((*(byte *)(*(long *)(local_68 + 0x20) + 0x2f4) & 1) == 0) {
    fVar9 = (float)thunk_FUN_00d086f0(lVar4,10,1);
  }
  fVar9 = fVar9 * *(float *)(local_68 + 0x54);
  if (fVar9 <= 1.0) {
    fVar9 = 1.0;
  }
  if (0.0 < fVar9) {
    uVar10 = FUN_009bc24c();
    lVar5 = FUN_00d67c60(local_60);
    uVar2 = FUN_00e6a474("lastGainedBarrier");
    uVar2 = FUN_0091ed5c("lastGainedBarrier",uVar2,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
    *puVar6 = uVar10;
  }
  uVar7 = FUN_00d9ea08(*(undefined8 *)(local_68 + 0x20));
  uVar3 = FUN_00d6bbac(uVar7,DAT_0315c904,0);
  if ((uVar3 & 1) != 0) goto LAB_00e34c08;
  thunk_FUN_00d9ff34(local_70,PTR_s_Buff_Turret_Invulnerable_02bebac8);
  uVar3 = FUN_00d6bbac(uVar7,local_70[0],0);
  if ((uVar3 & 1) != 0) goto LAB_00e34c08;
  FUN_00d66d34(local_60);
  lVar5 = FUN_00d7bcfc();
  if (lVar5 == 0) {
    uVar2 = FUN_00d66d34(local_60);
    lVar5 = FUN_00d7f914(fVar9,lVar4,lVar4,5,uVar2);
    if (lVar5 != 0) goto LAB_00e34bb0;
    uVar2 = 0;
  }
  else {
    fVar11 = (float)FUN_00d7bce4(lVar5);
    lVar8 = *(long *)(lVar4 + 0x40);
    fVar12 = (*(float *)(lVar8 + 0x1a0) + 1.0) *
             (*(float *)(lVar8 + 0x38) +
             *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0));
    if (DAT_031babf0 <= fVar12) {
      fVar12 = DAT_031babf0;
    }
    fVar13 = DAT_031bab30;
    if (DAT_031bab30 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar12 = (float)thunk_FUN_00d086f0(lVar4,8,1);
    if (fVar12 * fVar13 <= fVar9 + fVar11) {
      fVar9 = fVar12 * fVar13 - fVar11;
    }
    if (0.0 < fVar9) {
      FUN_00d7fa78(lVar4,lVar4,lVar5);
    }
LAB_00e34bb0:
    uVar2 = FUN_00d7bce4(lVar5);
  }
  lVar4 = FUN_00d67c60(local_60);
  uVar10 = FUN_00e6a474("currentMaxFortifiedHealth");
  uVar10 = FUN_0091ed5c("currentMaxFortifiedHealth",uVar10,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar10);
  *puVar6 = uVar2;
LAB_00e34c08:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00e34968(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 auStack_70 [2];
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) goto LAB_00e34c08;
  FUN_00d69294(param_1,&uStack_60,&lStack_68);
  lVar4 = FUN_00d66d28(uStack_60);
  uVar3 = FUN_00daa578(lStack_68,lVar4);
  if ((((uVar3 & 1) == 0) || (uVar3 = FUN_00daa58c(lStack_68,lVar4), (uVar3 & 1) != 0)) ||
     (*(int *)(lStack_68 + 8) == 3)) goto LAB_00e34c08;
  fVar9 = (float)thunk_FUN_00d086f0(lVar4,9,1);
  if ((*(byte *)(*(long *)(lStack_68 + 0x20) + 0x2f4) & 1) == 0) {
    fVar9 = (float)thunk_FUN_00d086f0(lVar4,10,1);
  }
  fVar9 = fVar9 * *(float *)(lStack_68 + 0x54);
  if (fVar9 <= 1.0) {
    fVar9 = 1.0;
  }
  if (0.0 < fVar9) {
    uVar10 = FUN_009bc24c();
    lVar5 = FUN_00d67c60(uStack_60);
    uVar2 = FUN_00e6a474("lastGainedBarrier");
    uVar2 = FUN_0091ed5c("lastGainedBarrier",uVar2,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
    *puVar6 = uVar10;
  }
  uVar7 = FUN_00d9ea08(*(undefined8 *)(lStack_68 + 0x20));
  uVar3 = FUN_00d6bbac(uVar7,DAT_0315c904,0);
  if ((uVar3 & 1) != 0) goto LAB_00e34c08;
  thunk_FUN_00d9ff34(auStack_70,PTR_s_Buff_Turret_Invulnerable_02bebac8);
  uVar3 = FUN_00d6bbac(uVar7,auStack_70[0],0);
  if ((uVar3 & 1) != 0) goto LAB_00e34c08;
  FUN_00d66d34(uStack_60);
  lVar5 = FUN_00d7bcfc();
  if (lVar5 == 0) {
    uVar2 = FUN_00d66d34(uStack_60);
    lVar5 = FUN_00d7f914(fVar9,lVar4,lVar4,5,uVar2);
    if (lVar5 != 0) goto LAB_00e34bb0;
    uVar2 = 0;
  }
  else {
    fVar11 = (float)FUN_00d7bce4(lVar5);
    lVar8 = *(long *)(lVar4 + 0x40);
    fVar12 = (*(float *)(lVar8 + 0x1a0) + 1.0) *
             (*(float *)(lVar8 + 0x38) +
             *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0));
    if (DAT_031babf0 <= fVar12) {
      fVar12 = DAT_031babf0;
    }
    fVar13 = DAT_031bab30;
    if (DAT_031bab30 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar12 = (float)thunk_FUN_00d086f0(lVar4,8,1);
    if (fVar12 * fVar13 <= fVar9 + fVar11) {
      fVar9 = fVar12 * fVar13 - fVar11;
    }
    if (0.0 < fVar9) {
      FUN_00d7fa78(lVar4,lVar4,lVar5);
    }
LAB_00e34bb0:
    uVar2 = FUN_00d7bce4(lVar5);
  }
  lVar4 = FUN_00d67c60(uStack_60);
  uVar10 = FUN_00e6a474("currentMaxFortifiedHealth");
  uVar10 = FUN_0091ed5c("currentMaxFortifiedHealth",uVar10,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar10);
  *puVar6 = uVar2;
LAB_00e34c08:
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e34c48(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d69224(param_1,&local_70);
    lVar5 = FUN_00d66d28(local_70);
    FUN_00d66d34(local_70);
    lVar6 = FUN_00d7bcfc();
    if ((lVar6 != 0) && (fVar9 = (float)FUN_00d7bce4(lVar6), 0.0 < fVar9)) {
      lVar7 = FUN_00d67c60(local_70);
      uVar3 = FUN_00e6a474("lastGainedBarrier");
      uVar3 = FUN_0091ed5c("lastGainedBarrier",uVar3,0x12345678);
      pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar3);
      fVar13 = *pfVar8;
      fVar10 = (float)FUN_009bc24c();
      fVar11 = (float)thunk_FUN_00d086f0(lVar5,6,1);
      uVar4 = FUN_00d44008(*(undefined4 *)(lVar5 + 0x260),PTR_s_Buff_Reim_Talent_LongWinter_02bee0a8
                          );
      if ((uVar4 & 1) != 0) {
        fVar12 = (float)FUN_00d5a3d0(lVar5,DAT_031ac35c,1,9);
        fVar11 = fVar11 + fVar12;
      }
      uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
      if ((uVar1 == 0x1f) || (*(short *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) != 4)) {
        if (fVar11 < fVar10 - fVar13) {
          fVar11 = (float)thunk_FUN_00d086f0(lVar5,7,1);
          lVar7 = FUN_00d67c60(local_70);
          uVar3 = FUN_00e6a474("currentMaxFortifiedHealth");
          uVar3 = FUN_0091ed5c("currentMaxFortifiedHealth",uVar3,0x12345678);
          pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x100) + 0x10))(lVar7 + 0x100,uVar3);
          fVar13 = *pfVar8;
          fVar10 = (float)FUN_00d67b0c(local_70);
          fVar10 = (fVar13 / fVar11) * fVar10;
          if (fVar9 <= fVar10) {
            fVar10 = fVar9;
          }
          FUN_00d7fa78(-fVar10,lVar5,lVar5,lVar6);
        }
      }
      else {
        FUN_00d7f9ec(lVar5,lVar6);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e34e68(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  lVar6 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("lastGainedBarrier");
  uVar4 = FUN_0091ed5c("lastGainedBarrier",uVar4,0x12345678);
  uVar4 = (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
  *puVar7 = 0;
  lVar5 = FUN_00d67c60(param_1);
  lVar6 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("currentMaxFortifiedHealth");
  uVar4 = FUN_0091ed5c("currentMaxFortifiedHealth",uVar4,0x12345678);
  uVar4 = (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
  *puVar7 = 0;
  FUN_00d67b04(0x3dcccccd,param_1);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onPostCalculateAttackName_02bed5f0;
  uVar4 = FUN_00e6a474(PTR_s_onPostCalculateAttackName_02bed5f0);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = thunk_FUN_00e34968;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e34c48;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar8 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar8,6);
  FUN_00d4bc10();
  lVar5 = FUN_00d4bc38();
  lVar5 = lVar5 + 0x10;
  FUN_00d2cf2c(lVar5);
  plVar9 = (long *)FUN_00d2cf7c(lVar5);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Reim_FrostDoT_02bf0dd0);
  local_68 = FUN_00e35108;
  local_60 = 3;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_68);
  plVar9 = (long *)FUN_00d2cf7c(lVar5);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Reim_FrostSlow_02bf0dd8);
  local_68 = FUN_00e35114;
  local_60 = 3;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

