// functions/00e20 — 17 functions
#include "libGameKindred.h"




void FUN_00e20118(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00d6a078(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  return;
}




void FUN_00e20144(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_00d6a078(*param_1);
  lVar2 = FUN_00d9e390();
  if (lVar2 != 0) {
    for (lVar2 = *(long *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ec00) {
        uVar1 = FUN_00d55870();
        uVar3 = FUN_00d7d288(lVar2,uVar1,4);
        uVar4 = FUN_00d66ce0(*param_1,2);
        if ((uVar3 & 1) == 0) {
          if ((uVar4 & 1) == 0) {
            return;
          }
          uVar5 = *param_1;
          uVar6 = 0;
        }
        else {
          if ((uVar4 & 1) != 0) {
            return;
          }
          uVar5 = *param_1;
          uVar6 = 1;
        }
        FUN_00d66d04(uVar5,2,uVar6);
        return;
      }
    }
  }
  return;
}




void FUN_00e201f8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn_Omni");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  uVar3 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar3,FUN_00e20144);
  uVar3 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3dcccccd,uVar3,0);
  uVar3 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar3,FUN_00e20144);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00e2153c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e202a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_00e20118);
  return;
}




void FUN_00e202ac(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d6a078(*param_1);
  lVar3 = FUN_00d9e390();
  if ((lVar3 == 0) ||
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f &&
      (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)))) {
    fVar5 = (float)FUN_00d6a1f8(*param_1);
    fVar6 = (float)FUN_00d6a25c(*param_1);
    uVar4 = FUN_00d66d28(*param_1);
    FUN_00d55794(uVar4,&local_58,0);
    fVar5 = fVar5 - (float)local_58;
    fVar6 = fVar6 - local_50;
    __x = fVar5 * fVar5 + (0.0 - local_58._4_4_) * (0.0 - local_58._4_4_) + fVar6 * fVar6;
    fVar7 = (float)DAT_03218f68;
    fVar8 = DAT_03218f70;
    if (1e-08 <= __x) {
      fVar8 = SQRT(__x);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(__x);
      }
      fVar7 = fVar5 / fVar8;
      fVar8 = fVar6 / fVar8;
    }
    FUN_00d6a140(fVar7,*param_1);
    FUN_00d6a140(fVar8,*param_1);
    FUN_00d69fc0(*param_1,0xffffffff);
  }
  else {
    local_58 = 0;
    uVar4 = FUN_00d66d28(*param_1);
    FUN_00d9e1e0(uVar4,lVar3,&local_58);
    FUN_00d6a140(local_58 & 0xffffffff,*param_1);
    FUN_00d6a19c(local_58._4_4_,*param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e20438(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00d6a078(*param_1);
  if (iVar3 != -1) {
    FUN_00d6a078(*param_1);
    lVar4 = FUN_00d9e390();
    if ((lVar4 == 0) ||
       ((uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f, uVar1 != 0x1f &&
        (*(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)))) {
      FUN_00d69fc0(*param_1,0xffffffff);
    }
    else {
      local_40 = 0;
      uVar5 = FUN_00d66d28(*param_1);
      FUN_00d9e1e0(uVar5,lVar4,&local_40);
      FUN_00d6a140((undefined4)local_40,*param_1);
      FUN_00d6a19c(local_40._4_4_,*param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00e20520(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float __y;
  float local_d0 [4];
  float local_c0 [22];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = FUN_00daa524(param_2);
  bVar5 = false;
  if ((uVar9 & 1) != 0) {
    fVar13 = (float)FUN_00d6a1f8(param_1);
    fVar14 = (float)FUN_00d6a25c(param_1);
    iVar6 = FUN_00d6a078(param_1);
    if (((iVar6 != -1) && (lVar10 = FUN_00d9e390(), lVar10 != 0)) &&
       ((uVar1 = *(ushort *)(lVar10 + 0x88) & 0x1f, uVar1 == 0x1f ||
        (1 < *(ushort *)(lVar10 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
      uVar11 = FUN_00d67b78(param_1);
      FUN_00d55794(lVar10,local_c0,0);
      FUN_00d55794(uVar11,local_d0,0);
      local_c0[0] = local_c0[0] - local_d0[0];
      fVar16 = (float)local_c0._4_8_ - (float)local_d0._4_8_;
      fVar13 = SUB84(local_c0._4_8_,4) - SUB84(local_d0._4_8_,4);
      fVar15 = local_c0[0] * local_c0[0] + fVar16 * fVar16 + fVar13 * fVar13;
      fVar13 = (float)DAT_03218f68;
      fVar14 = DAT_03218f68._4_4_;
      if (1e-08 <= fVar15) {
        fVar14 = SQRT(fVar15);
        if (NAN(fVar14)) {
          fVar14 = sqrtf(fVar15);
        }
        fVar13 = local_c0[0] / fVar14;
        fVar14 = fVar16 / fVar14;
      }
    }
    pfVar12 = (float *)FUN_00daa52c(param_2,0);
    fVar16 = *pfVar12;
    __y = pfVar12[1];
    FUN_00d67b84(param_1);
    uVar11 = FUN_00d9e390();
    fVar15 = (float)FUN_00d59f54(uVar11,0,9,0x19,0);
    bVar5 = fVar13 * fVar16 + fVar14 * __y < fVar15 / 180.0 + -1.0;
    lVar10 = FUN_00d67b78(param_1);
    uVar2 = *(undefined4 *)(lVar10 + 0x260);
    uVar7 = FUN_00d67b84(param_1);
    puVar4 = PTR_s_Buff_Grace_A_GuardHitImpact_02bf0700;
    uVar8 = FUN_00ceb350();
    fVar13 = atan2f(__y,fVar16);
    FUN_00cfe864(0x3e4ccccd,fVar13,0,local_c0,uVar7,uVar2,puVar4,uVar8,1,0,0);
    FUN_00ce20fc(local_c0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}




void FUN_00e20770(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00d6a1f8(*param_1);
  *param_2 = uVar2;
  uVar2 = FUN_00d6a25c(*param_1);
  *param_3 = uVar2;
  uVar2 = FUN_00d6a078(*param_1);
  *param_4 = uVar2;
  lVar1 = FUN_00d66d28(*param_1);
  *param_5 = *(undefined4 *)(lVar1 + 0x260);
  return;
}




void FUN_00e207e0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8();
  *param_2 = uVar1;
  uVar1 = FUN_00d6a25c(param_1);
  param_2[1] = uVar1;
  return;
}




void FUN_00e20814(long param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  
  if (*(long *)(param_1 + 0x428) != 0) {
    pfVar1 = (float *)FUN_00daa52c(*(long *)(param_1 + 0x428),1);
    fVar2 = atan2f(pfVar1[1],*pfVar1);
    *param_2 = fVar2;
  }
  return;
}




void FUN_00e2084c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Grace_A_Shielded_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Grace_A_Shielded_02");
  lVar4 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar4 + 0x3d8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar5 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar5,FUN_00e202ac);
  plVar3 = (long *)FUN_00d45354(lVar2);
  plVar6 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"*Grace_A_Guard*",1);
  (**(code **)(*plVar6 + 0x18))(plVar6,"CenterBody");
  plVar6 = (long *)FUN_00e2144c(lVar2);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))
                             (plVar6,PTR_s_Buff_Grace_A_GuardDirectionalVis_02bf0720,plVar3 + 2);
  (**(code **)(*plVar6 + 0x20))(plVar6,FUN_00e20770);
  uVar5 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar5,0);
  uVar5 = FUN_00d39a54(lVar2 + 0x10);
  FUN_00d3e604(uVar5,FUN_00e20438);
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,4);
  uVar5 = FUN_00d4bc24();
  uVar7 = FUN_00d426b0(param_1);
  FUN_00d59f54(uVar7,0,9,0x19,0);
  lVar2 = FUN_00d4bd20(uVar5,FUN_00e207e0);
  plVar6 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00e1fe5c;
  local_50 = 4;
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_58);
  plVar6 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Grace_A_GuardHitImpact_02bf0700);
  (**(code **)(*plVar6 + 0x58))(plVar6,FUN_00e20814);
  lVar2 = FUN_00d65010(param_1);
  plVar6 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"Sound_Grace_A_ShieldLoop_01");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,"Sound_Grace_A_ShieldLoop_02");
  lVar2 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar2 + 0x3d8));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  uVar5 = FUN_00e2149c(lVar2 + 0x10);
  FUN_00d9c7a8(uVar5,plVar3 + 2);
  FUN_00e214ec(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e20ad4(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d6a078(*param_1);
  lVar3 = FUN_00d9e390();
  if ((lVar3 == 0) ||
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f &&
      (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)))) {
    fVar5 = (float)FUN_00d6a1f8(*param_1);
    fVar6 = (float)FUN_00d6a25c(*param_1);
    uVar4 = FUN_00d66d28(*param_1);
    FUN_00d55794(uVar4,&local_58,0);
    fVar5 = fVar5 - (float)local_58;
    fVar6 = fVar6 - local_50;
    __x = fVar5 * fVar5 + (0.0 - local_58._4_4_) * (0.0 - local_58._4_4_) + fVar6 * fVar6;
    fVar7 = (float)DAT_03218f68;
    fVar8 = DAT_03218f70;
    if (1e-08 <= __x) {
      fVar8 = SQRT(__x);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(__x);
      }
      fVar7 = fVar5 / fVar8;
      fVar8 = fVar6 / fVar8;
    }
    FUN_00d6a140(fVar7,*param_1);
    FUN_00d6a140(fVar8,*param_1);
    FUN_00d69fc0(*param_1,0xffffffff);
  }
  else {
    local_58 = 0;
    uVar4 = FUN_00d66d28(*param_1);
    FUN_00d9e1e0(uVar4,lVar3,&local_58);
    FUN_00d6a140(local_58 & 0xffffffff,*param_1);
    FUN_00d6a19c(local_58._4_4_,*param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e20c60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d66d28(*param_1);
  lVar2 = *(long *)(lVar2 + 0x18);
  do {
    if (lVar2 == 0) {
LAB_00e20cec:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0314f724) {
      uVar3 = FUN_00d6a1f8(*param_1);
      local_40 = FUN_00d6a25c(*param_1);
      local_44 = 0;
      local_48 = uVar3;
      FUN_00d60b0c(lVar2,&local_48,1);
      goto LAB_00e20cec;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_00e20d18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00d6a0dc(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  return;
}




void FUN_00e20d44(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_00d6a0dc(*param_1);
  lVar2 = FUN_00d9e390();
  if (lVar2 != 0) {
    for (lVar2 = *(long *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ec00) {
        uVar1 = FUN_00d55870();
        uVar3 = FUN_00d7d288(lVar2,uVar1,4);
        uVar4 = FUN_00d66ce0(*param_1,2);
        if ((uVar3 & 1) == 0) {
          if ((uVar4 & 1) == 0) {
            return;
          }
          uVar5 = *param_1;
          uVar6 = 0;
        }
        else {
          if ((uVar4 & 1) != 0) {
            return;
          }
          uVar5 = *param_1;
          uVar6 = 1;
        }
        FUN_00d66d04(uVar5,2,uVar6);
        return;
      }
    }
  }
  return;
}




void FUN_00e20df8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00d39a54(lVar1);
  FUN_00d3e604(uVar2,FUN_00e202ac);
  plVar3 = (long *)FUN_00d2779c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Spawn_Directional");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  uVar2 = FUN_00d39a54(lVar1);
  FUN_00d3e604(uVar2,FUN_00e20d44);
  uVar2 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3dcccccd,uVar2,1);
  uVar2 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar2,FUN_00e20438);
  uVar2 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar2,FUN_00e20c60);
  uVar2 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  uVar2 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar2,FUN_00e20d44);
  lVar1 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00e2153c(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,FUN_00e20d18);
                    /* WARNING: Could not recover jumptable at 0x00e20f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  return;
}




void FUN_00e20f28(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d67d04(0x3e4ccccd);
  lVar1 = FUN_00d63f30(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
                    /* WARNING: Could not recover jumptable at 0x00e20f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Grace_A_GuardBlockDamage");
  return;
}




void FUN_00e20f90(void)

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
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Grace_C_TargetIndicator");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f800000,0x3e99999a);
  (**(code **)(*plVar3 + 0xd8))(0x3f800000);
  plVar3 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Grace_C_Loop_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Grace_C_Loop_02");
  lVar2 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar2 + 0x3e4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

