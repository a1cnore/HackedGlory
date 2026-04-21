// functions/00e43 — 19 functions
#include "libGameKindred.h"




void FUN_00e430d4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e42f90;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar7);
  FUN_00d40cd4(0x41200000,uVar7,1,0,1,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e431cc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00e0fb7c();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d411dc(0x430c0000,uVar2,0,1);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0x430c0000,uVar2,0,0,1,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0x41900000,uVar2,0x11,0,1,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0,uVar2,0x14,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e432f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_38,&local_30);
  lVar4 = local_30;
  uVar2 = FUN_00d66d28(local_38);
  uVar3 = FUN_00daa58c(lVar4,uVar2);
  if ((uVar3 & 1) != 0) {
    if ((*(ushort *)(local_30 + 0xc) & 1) == 0) {
      if ((*(ushort *)(local_30 + 0xc) >> 3 & 1) != 0) {
        *(float *)(local_30 + 0x54) = *(float *)(local_30 + 0x54) * 3.0;
      }
    }
    else {
      FUN_00d67b84(local_38);
      lVar4 = FUN_00d9e390();
      lVar4 = *(long *)(lVar4 + 0x40);
      fVar5 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
              (*(float *)(lVar4 + 0x38) +
              *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
      if (DAT_031bb420 <= fVar5) {
        fVar5 = DAT_031bb420;
      }
      fVar6 = DAT_031bb360;
      if (DAT_031bb360 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = 0.0;
      if (0.4 <= *(float *)(lVar4 + 0x308) / fVar6) {
        fVar5 = *(float *)(local_30 + 0x54) * 0.2;
      }
      *(float *)(local_30 + 0x54) = fVar5;
      if (*(float *)(lVar4 + 0x308) <= fVar5) {
        *(float *)(local_30 + 0x54) = *(float *)(lVar4 + 0x308) + -1.0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43420(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e432f4;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e434a0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_38,&local_30);
  lVar4 = local_30;
  uVar2 = FUN_00d66d28(local_38);
  uVar3 = FUN_00daa58c(lVar4,uVar2);
  if ((uVar3 & 1) != 0) {
    if ((*(ushort *)(local_30 + 0xc) >> 3 & 1) == 0) {
      if ((*(ushort *)(local_30 + 0xc) & 1) != 0) {
        FUN_00d67b84(local_38);
        lVar4 = FUN_00d9e390();
        lVar4 = *(long *)(lVar4 + 0x40);
        fVar5 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
                (*(float *)(lVar4 + 0x38) +
                *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
        if (DAT_031bb420 <= fVar5) {
          fVar5 = DAT_031bb420;
        }
        fVar6 = DAT_031bb360;
        if (DAT_031bb360 <= fVar5) {
          fVar6 = fVar5;
        }
        fVar5 = 0.0;
        if (0.7 <= *(float *)(lVar4 + 0x308) / fVar6) {
          fVar5 = *(float *)(local_30 + 0x54) * 0.2;
        }
        *(float *)(local_30 + 0x54) = fVar5;
        if (*(float *)(lVar4 + 0x308) <= fVar5) {
          *(float *)(local_30 + 0x54) = *(float *)(lVar4 + 0x308) + -1.0;
        }
      }
    }
    else {
      FUN_00d67b84(local_38);
      lVar4 = FUN_00d9e390();
      fVar5 = *(float *)(*(long *)(lVar4 + 0x40) + 0x308);
      *(float *)(local_30 + 0x54) = fVar5 + fVar5;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e435dc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e434a0;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00e0fb7c();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d411dc(0x43480000,uVar7,0,0);
  FUN_00d3e534();
  uVar7 = FUN_00d39980();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d40cd4(0x43480000,uVar7,0,0,0,0);
  lVar6 = FUN_00d65010(param_1);
  plVar8 = (long *)FUN_00d2887c(lVar6 + 0x10);
  (**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_GloballyVisible_02bebad8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43738(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  if (param_1[0x85] == 0) {
    return;
  }
  lVar6 = *(long *)(param_1[0x85] + 0x28);
  if (lVar6 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar6 + 0x18);
  while( true ) {
    if (lVar6 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_03130aa8) break;
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  iVar2 = FUN_00d72dac(lVar6);
  if (iVar2 == 0) {
LAB_00e43804:
    FUN_00d67b84(*param_1);
    lVar6 = FUN_00d9e390();
    lVar6 = *(long *)(lVar6 + 0x40);
    fVar9 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
            (*(float *)(lVar6 + 0x38) + *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0)
            );
    if (DAT_031bb420 <= fVar9) {
      fVar9 = DAT_031bb420;
    }
    lVar7 = param_1[0x85];
    fVar10 = DAT_031bb360;
    if (DAT_031bb360 <= fVar9) {
      fVar10 = fVar9;
    }
    if (*(float *)(lVar6 + 0x308) / fVar10 < 0.2) {
      fVar9 = 7.0;
      goto LAB_00e43890;
    }
    fVar9 = *(float *)(lVar7 + 0x54);
    fVar10 = 0.7;
  }
  else {
    bVar1 = false;
    uVar8 = 0;
    do {
      uVar3 = FUN_00d72ed0(lVar6,uVar8);
      puVar5 = (undefined8 *)FUN_00d73214(lVar6,uVar3);
      iVar2 = strcmp((char *)*puVar5,"Healing Flask");
      if (iVar2 == 0) goto LAB_00e437f4;
      bVar1 = (bool)(bVar1 | iVar2 == 0);
      uVar8 = uVar8 + 1;
      uVar4 = FUN_00d72dac(lVar6);
    } while (uVar8 < uVar4);
    if (!bVar1) goto LAB_00e43804;
LAB_00e437f4:
    lVar7 = param_1[0x85];
    fVar10 = 1.25;
    fVar9 = *(float *)(lVar7 + 0x54);
  }
  fVar9 = fVar9 * fVar10;
LAB_00e43890:
  *(float *)(lVar7 + 0x54) = fVar9;
  return;
}




void FUN_00e438a8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(local_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(local_50,uVar2);
  FUN_00d40cd4(0x42c80000,uVar2,0x11,0,1,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(local_50,uVar2);
  FUN_00d40cd4(0x40400000,uVar2,0x19,1,0,0);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_GloballyVisible_02bebad8);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3f800000,uVar2,0);
  plVar4 = (long *)FUN_00d2a464(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))();
  local_50[0] = 0x40a00000;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x10))(plVar4,2,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e439e4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_SmokeBomb");
  (**(code **)(*plVar2 + 0x80))(plVar2,0);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/Taka/SFX/Default/Taka_Basic_Abilty2_Start.mp3")
  ;
  (**(code **)(*plVar2 + 0x28))(0x3e99999a);
  lVar1 = FUN_00d65010(param_1);
  FUN_00d2b638(lVar1 + 0x10);
  return;
}




void FUN_00e43a7c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00e44318();
  FUN_00d42654(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43ae0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e43b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero000_TargetLock_A");
  return;
}




void FUN_00e43b18(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x200);
  return;
}




void FUN_00e43b38(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  long local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&uStack_30,&local_38);
  lVar3 = local_38;
  uVar4 = FUN_00d66d28(uStack_30);
  uVar5 = FUN_00daa578(lVar3,uVar4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(*(long *)(local_38 + 0x20) + 0x2f4);
    if ((uVar1 >> 0xc & 1) == 0) {
      if ((uVar1 >> 4 & 1) == 0) goto LAB_00e43ba8;
      fVar6 = *(float *)(local_38 + 0x50);
      fVar7 = 1.0;
    }
    else {
      fVar6 = *(float *)(local_38 + 0x50);
      fVar7 = 4.0;
    }
    *(float *)(local_38 + 0x50) = fVar6 + fVar7;
  }
LAB_00e43ba8:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43bcc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_40[0] = 0x44160000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x1a,1,local_40);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(local_40,uVar4);
  FUN_00d40e24(0x3f400000,uVar4,0x19,1);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(local_40,uVar4);
  FUN_00d40e24(0x41200000,uVar4,3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43cb0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_38,&local_30);
  lVar2 = local_30;
  uVar3 = FUN_00d66d28(local_38);
  uVar4 = FUN_00daa58c(lVar2,uVar3);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(local_30 + 8) == 3) {
      *(float *)(local_30 + 0x54) = *(float *)(local_30 + 0x54) * 0.65;
    }
    if ((*(byte *)(local_30 + 0xc) >> 3 & 1) != 0) {
      *(float *)(local_30 + 0x54) = *(float *)(local_30 + 0x54) + *(float *)(local_30 + 0x54);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43d4c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e43cb0;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x30);
  FUN_00d3e534();
  uVar7 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d40e24(0xbf000000,uVar7,0xd,1);
  FUN_00d3e534();
  uVar7 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d40e24(0xbf000000,uVar7,0xe,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43e74(void)

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
  local_38[0] = 0xc4fa0000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0,0,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43ee8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0x466a6000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x15,0,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xbf28f5c3;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0,2,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xc2c80000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,7,0,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xc2c80000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,8,0,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e43ff0(void)

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
  local_38[0] = 0xbf4ccccd;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0,2,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

