// functions/00d44 — 28 functions
#include "libGameKindred.h"




void FUN_00d44008(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d44be0(lVar1,param_2);
    return;
  }
  return;
}




void FUN_00d4403c(undefined8 param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d43bd4(param_1,param_2 & 1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Withdraw_Channel");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00d440a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xf0))();
  return;
}




void FUN_00d440a8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  FUN_00d44f88(lVar1);
  FUN_00d2b688(lVar1);
  FUN_00d29fe4(lVar1);
  FUN_00d2def4(lVar1);
  uVar2 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar2,0x1500);
  return;
}




void FUN_00d440f4(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_s_waypoint_1_z_0281b7d8)[(long)param_1 * 2];
  *param_2 = (&PTR_s_waypoint_1_x_0281b7d0)[(long)param_1 * 2];
  *param_3 = puVar1;
  return;
}




void FUN_00d44110(long *param_1,int param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = (&PTR_s_waypoint_1_x_0281b7d0)[(long)param_2 * 2];
  puVar2 = (&PTR_s_waypoint_1_z_0281b7d8)[(long)param_2 * 2];
  uVar3 = FUN_00e6a474(puVar1);
  uVar3 = FUN_0091ed5c(puVar1,uVar3,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x18))(param_1,uVar3);
  *param_3 = *puVar4;
  param_3[1] = 0;
  uVar3 = FUN_00e6a474(puVar2);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x18))(param_1,uVar3);
  param_3[2] = *puVar4;
  return;
}




void FUN_00d441b8(long *param_1,int param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar1 = (&PTR_s_waypoint_1_x_0281b7d0)[(long)param_2 * 2];
  puVar2 = (&PTR_s_waypoint_1_z_0281b7d8)[(long)param_2 * 2];
  uVar3 = *param_3;
  uVar4 = FUN_00e6a474(puVar1);
  uVar4 = FUN_0091ed5c(puVar1,uVar4,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
  *puVar5 = uVar3;
  uVar3 = param_3[2];
  uVar4 = FUN_00e6a474(puVar2);
  uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
  *puVar5 = uVar3;
  return;
}




void FUN_00d44268(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = param_1;
  uStack_54 = param_2;
  local_50 = param_3;
  uVar4 = FUN_00e6a474("curr_waypoints");
  uVar4 = FUN_0091ed5c("curr_waypoints",uVar4,0x12345678);
  piVar5 = (int *)(**(code **)(*param_4 + 0x10))(param_4,uVar4);
  uVar4 = FUN_00e6a474("max_waypoints");
  uVar4 = FUN_0091ed5c("max_waypoints",uVar4,0x12345678);
  piVar6 = (int *)(**(code **)(*param_4 + 0x10))(param_4,uVar4);
  fVar8 = (float)NEON_ucvtf(*piVar5);
  if ((float)(*piVar6 - 1) <= fVar8) {
    fVar8 = (float)(*piVar6 - 1);
  }
  iVar7 = (int)fVar8;
  if (0 < (int)fVar8) {
    do {
      FUN_00d44110(param_4,iVar7 + -1,auStack_68);
      FUN_00d441b8(param_4,iVar7,auStack_68);
      iVar2 = iVar7 + -1;
      bVar1 = 0 < iVar7;
      iVar7 = iVar2;
    } while (iVar2 != 0 && bVar1);
  }
  FUN_00d441b8(param_4,0,&local_58);
  fVar9 = (float)NEON_ucvtf(*piVar6);
  fVar8 = (float)(*piVar5 + 1);
  if (fVar9 <= (float)(*piVar5 + 1)) {
    fVar8 = fVar9;
  }
  *piVar5 = (int)fVar8;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d443c0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_30);
  uVar2 = FUN_00d66d28(local_30);
  FUN_00d55794(uVar2,&local_40,0);
  FUN_00d44268(local_40,uStack_3c,local_38,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d44430(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_e18;
  undefined4 local_e10;
  undefined8 local_e0c;
  undefined4 local_e04;
  undefined8 local_e00;
  undefined4 local_df8;
  undefined8 local_df0;
  undefined4 local_de8;
  undefined8 local_de0;
  undefined1 auStack_dd8 [120];
  undefined1 auStack_d60 [96];
  undefined8 local_d00;
  undefined4 local_cf8;
  long local_6c0 [200];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_de0);
  uVar3 = FUN_00e6a474("curr_waypoints");
  uVar3 = FUN_0091ed5c("curr_waypoints",uVar3,0x12345678);
  piVar5 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  iVar1 = *piVar5;
  uVar3 = FUN_00e6a474("trail_duration");
  uVar3 = FUN_0091ed5c("trail_duration",uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  fVar20 = *pfVar6;
  if (iVar1 != 0) {
    uVar15 = 0;
    iVar14 = 0;
    do {
      if (iVar14 == 0) {
        fVar17 = (float)FUN_00d67b34(local_de0);
        if (fVar20 <= fVar17) {
          uVar9 = FUN_00d66d28(local_de0);
          FUN_00d55794(uVar9,&local_df0,0);
          goto LAB_00d44548;
        }
      }
      else {
        FUN_00d44110(param_1,iVar14 + -1,&local_df0);
LAB_00d44548:
        FUN_00d44110(param_1,iVar14,&local_e00);
        local_e10 = local_de8;
        local_e18 = local_df0;
        local_e04 = local_df8;
        local_e0c = local_e00;
        FUN_00d4d9e8(auStack_d60);
        uVar3 = FUN_00e6a474("filter_func");
        uVar3 = FUN_0091ed5c("filter_func",uVar3,0x12345678);
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
        (*(code *)*puVar7)(local_de0,auStack_d60);
        FUN_00d4e61c(auStack_dd8,auStack_d60);
        FUN_00d4e838(0x40000000,auStack_dd8,&local_e18);
        uVar4 = FUN_00d9e840(auStack_dd8,&local_d00,200,0);
        if (0 < (int)uVar4) {
          uVar10 = 0;
          do {
            lVar11 = (&local_d00)[uVar10];
            if (lVar11 != 0) {
              lVar12 = (long)(int)uVar15;
              if (0 < (int)uVar15) {
                lVar13 = 0;
                do {
                  if (local_6c0[lVar13] == lVar11) goto LAB_00d44638;
                  lVar13 = lVar13 + 1;
                } while (lVar13 < lVar12);
              }
              uVar15 = uVar15 + 1;
              local_6c0[lVar12] = lVar11;
            }
LAB_00d44638:
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar4);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar1);
    if (0 < (int)uVar15) {
      uVar10 = (ulong)uVar15;
      plVar16 = local_6c0;
      do {
        lVar11 = *plVar16;
        uVar3 = FUN_00e6a474("apply_func");
        uVar3 = FUN_0091ed5c("apply_func",uVar3,0x12345678);
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
        (*(code *)*puVar7)(local_de0,lVar11);
        uVar10 = uVar10 - 1;
        plVar16 = plVar16 + 1;
      } while (uVar10 != 0);
    }
  }
  uVar3 = FUN_00e6a474("waypoint_timer");
  uVar3 = FUN_0091ed5c("waypoint_timer",uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  uVar3 = FUN_00e6a474("max_waypoints");
  uVar3 = FUN_0091ed5c("max_waypoints",uVar3,0x12345678);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  fVar17 = (float)NEON_ucvtf(*puVar8);
  fVar18 = (float)FUN_00d67b0c(local_de0);
  fVar19 = *pfVar6;
  *pfVar6 = fVar18 + fVar19;
  if ((fVar20 / fVar17 < fVar18 + fVar19) &&
     (fVar18 = (float)FUN_00d67b34(local_de0), fVar20 < fVar18)) {
    uVar9 = FUN_00d66d28(local_de0);
    FUN_00d55794(uVar9,&local_d00,0);
    FUN_00d44268((undefined4)local_d00,local_d00._4_4_,local_cf8,param_1);
    *pfVar6 = *pfVar6 - fVar20 / fVar17;
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d447cc(undefined8 param_1,float *param_2)

{
  undefined4 uVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  
  fVar4 = (float)FUN_00d67b2c();
  lVar2 = FUN_00d67c60(param_1);
  uVar1 = FUN_00e6a474("trail_duration");
  uVar1 = FUN_0091ed5c("trail_duration",uVar1,0x12345678);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x100) + 0x10))(lVar2 + 0x100,uVar1);
  *param_2 = fVar4 - *pfVar3;
  return;
}




void FUN_00d44858(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  float fVar14;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  fVar14 = (float)FUN_00d67b3c();
  FUN_00d67d04(fVar14 + param_1,param_2);
  lVar6 = FUN_00d67c60(param_2);
  plVar1 = (long *)(lVar6 + 0x100);
  uVar5 = (*(code *)**(undefined8 **)(lVar6 + 0x100))(plVar1,"trail_duration");
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(plVar1,uVar5);
  *pfVar7 = param_1;
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    FUN_00d67b04(0x3dcccccd,param_2);
    uVar5 = (**(code **)*plVar1)(plVar1,"waypoint_timer");
    puVar9 = (undefined4 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
    *puVar9 = 0;
    uVar5 = (**(code **)*plVar1)(plVar1,"curr_waypoints");
    puVar9 = (undefined4 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
    *puVar9 = 0;
    uVar5 = (**(code **)*plVar1)(plVar1,"max_waypoints");
    puVar10 = (uint *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
    *puVar10 = param_5;
    uVar5 = (**(code **)*plVar1)(plVar1,"filter_func");
    puVar11 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
    *puVar11 = param_6;
    uVar5 = (**(code **)*plVar1)(plVar1,"apply_func");
    puVar11 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
    *puVar11 = param_7;
    if (param_5 != 0) {
      uVar8 = 0;
      ppuVar13 = &PTR_s_waypoint_1_x_0281b7d0;
      do {
        lVar6 = 0;
        do {
          uVar5 = (**(code **)*plVar1)(plVar1,*(undefined8 *)((long)ppuVar13 + lVar6));
          puVar9 = (undefined4 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
          lVar6 = lVar6 + 8;
          *puVar9 = 0;
        } while (lVar6 != 0x10);
        uVar8 = uVar8 + 1;
        ppuVar13 = ppuVar13 + 2;
      } while (uVar8 != param_5);
    }
    lVar6 = FUN_00d67c60(param_2);
    puVar4 = PTR_s_onApplyName_02bed4f8;
    uVar5 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
    uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar5;
    uVar2 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar2 * 8 + 0x40) = FUN_00d443c0;
    *(uint *)(lVar6 + 0xf8) = uVar2 + 1;
    lVar6 = FUN_00d67c60(param_2);
    puVar4 = PTR_s_onBuffIntervalName_02bed520;
    uVar5 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar5;
    uVar2 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar2 * 8 + 0x40) = FUN_00d44430;
    *(uint *)(lVar6 + 0xf8) = uVar2 + 1;
  }
  lVar6 = FUN_00d67c60(param_2);
  FUN_00d425ec(auStack_80,lVar6 + 0x30);
  FUN_00d3e534();
  uVar12 = FUN_00d294ac();
  FUN_00d42654(auStack_80,uVar12);
  uVar12 = FUN_00d47d9c(uVar12);
  uVar12 = FUN_00da2040(uVar12,param_3);
  uVar12 = FUN_00da2048(uVar12,param_4);
  fVar14 = (float)FUN_00d67b34(param_2);
  uVar12 = FUN_00da2058(fVar14 - param_1,uVar12);
  uVar12 = FUN_00da2070(uVar12,1);
  FUN_00da20f4(uVar12,0);
  lVar6 = FUN_00d67c60(param_2);
  FUN_00d425ec(auStack_80,lVar6 + 8);
  FUN_00d3e534();
  uVar12 = FUN_00d29a68();
  FUN_00d42654(auStack_80,uVar12);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d44be0(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  do {
    if (lVar3 == 0) {
      uVar2 = 0;
LAB_00d44c50:
      if (*(long *)(lVar1 + 0x28) == local_28) {
        return uVar2 & 1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c7bf48) {
      thunk_FUN_00d9ff34(local_38);
      FUN_00d9ff84(local_30,local_38[0]);
      uVar2 = FUN_00d6bbac(lVar3,local_30[0],0);
      goto LAB_00d44c50;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




long FUN_00d44c78(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_00d67b84();
  lVar3 = 0;
  if (iVar1 != -1) {
    lVar3 = FUN_00d66d28(param_1);
    iVar1 = *(int *)(lVar3 + 0x260);
    iVar2 = FUN_00d67b84(param_1);
    if (iVar1 != iVar2) {
      FUN_00d67b84(param_1);
      lVar3 = FUN_00d9e390();
      return lVar3;
    }
  }
  return lVar3;
}




long FUN_00d44cf4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = FUN_00d67b84();
  lVar3 = 0;
  if (iVar1 != -1) {
    lVar3 = FUN_00d67b78(param_1);
    iVar1 = *(int *)(lVar3 + 0x260);
    iVar2 = FUN_00d67b84(param_1);
    if (iVar1 != iVar2) {
      FUN_00d67b84(param_1);
      lVar3 = FUN_00d9e390();
      return lVar3;
    }
  }
  return lVar3;
}




undefined8 FUN_00d44d70(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d44cf4();
  if (lVar1 != 0) {
    uVar2 = FUN_00d55870();
    return uVar2;
  }
  return 0xff;
}




void FUN_00d44d9c(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x418) + 0x10);
  *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x418) + 0x18);
  return;
}




void FUN_00d44db8(undefined8 *param_1)

{
  FUN_00d6a1f8(*param_1);
  return;
}




void FUN_00d44dc0(undefined8 *param_1)

{
  FUN_00d6a25c(*param_1);
  return;
}




void FUN_00d44dc8(undefined8 *param_1)

{
  FUN_00d6a078(*param_1);
  return;
}




void FUN_00d44dd0(undefined8 *param_1)

{
  FUN_00d6a0dc(*param_1);
  return;
}




undefined4 FUN_00d44dd8(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01bc8f90;
  if (*(long *)(param_1 + 0x440) != 0) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x440) + 0x260);
  }
  return *puVar1;
}




void FUN_00d44df8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2810();
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




void FUN_00d44e48(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2fac();
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




void FUN_00d44e98(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a02ac();
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




void FUN_00d44ee8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0910();
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




void FUN_00d44f38(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1bdc();
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




void FUN_00d44f88(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a39e4();
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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d44fd8(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 1) = DAT_03218f90;
  *param_2 = _DAT_03218f88;
  *param_3 = 0;
  *param_4 = 0x3fc00000;
  return;
}

