// functions/00a47 — 22 functions
#include "libGameKindred.h"




void thunk_FUN_00a47850(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d9ea60(param_1 + 0x7c8);
  if (lVar3 != 0) {
    uVar4 = FUN_00d73214(lVar3,*(undefined4 *)(param_1 + 0x7dc));
    uVar2 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP");
    FUN_00f048e0(auStack_58,uVar2,uVar4);
    FUN_00f04760(param_1,auStack_58,1);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a478e4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4709c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_78;
  long local_70;
  long lStack_68;
  undefined1 local_60;
  long lStack_58;
  undefined2 uStack_50;
  undefined6 local_4e;
  undefined2 uStack_48;
  undefined8 uStack_46;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d9ea60(param_1 + 0x7c8);
  if ((lVar2 != 0) &&
     (uVar3 = FUN_00d73360(lVar2,*(undefined4 *)(param_1 + 0x7dc)), (uVar3 & 1) != 0)) {
    uVar3 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
    if (((uVar3 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) {
      local_60 = (undefined1)param_2[3];
      lStack_68 = param_2[2];
      local_70 = param_2[1];
      local_78 = &PTR_FUN_027c9ff8;
      uStack_46 = *(undefined8 *)((long)param_2 + 0x32);
      uStack_48 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x2a) >> 0x30);
      lStack_58 = param_2[4];
      uStack_50 = (undefined2)param_2[5];
      local_4e = (undefined6)((ulong)param_2[5] >> 0x10);
      if (*(long *)(param_1 + 0xb8) != 0) {
        FUN_00c037e4(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 8),&local_78);
      }
      uVar3 = FUN_00f04a94(param_2);
      if (((uVar3 & 1) == 0) || (uVar3 = FUN_00a471a0(param_1), (uVar3 & 1) == 0)) {
        FUN_00a473f4(param_1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a471a0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  timespec local_88 [3];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,local_88);
  lVar8 = local_88[0].tv_nsec - *(long *)(param_1 + 0x7b8);
  lVar7 = local_88[0].tv_sec - *(long *)(param_1 + 0x7b0);
  if (lVar8 < 0) {
    lVar7 = lVar7 + -1;
    lVar8 = (local_88[0].tv_nsec + 1000000000) - *(long *)(param_1 + 0x7b8);
  }
  uVar5 = 0;
  if (2.0 <= (double)(lVar8 + lVar7 * 1000000000) * 1e-09) {
    lVar7 = FUN_00a114dc(0);
    if (lVar7 != 0) {
      FUN_00a1ae38();
      fVar12 = (float)FUN_00a1b610();
      uVar5 = 0;
      if (0.0 < fVar12) goto LAB_00a473c4;
    }
    uVar5 = FUN_00da414c(0);
    uVar2 = FUN_00da45fc(uVar5,2);
    lVar7 = (**(code **)(**(long **)(param_1 + 0x7c8) + 0x10))(*(long **)(param_1 + 0x7c8));
    lVar7 = *(long *)(lVar7 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_03130aa8))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    uVar13 = FUN_00d734b0(lVar7,*(undefined4 *)(param_1 + 0x7dc));
    fVar12 = (float)FUN_00d7349c(lVar7,*(undefined4 *)(param_1 + 0x7dc));
    uVar3 = FUN_00d72f48(lVar7,*(undefined4 *)(param_1 + 0x7dc));
    if (fVar12 < 10.0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (5.0 <= (float)uVar13) {
        uVar4 = FUN_00cedce4(0);
        FUN_009841dc(uVar13,local_88,uVar4,uVar2,0xffffffff,uVar3);
        FUN_00ce20fc(local_88);
        lVar7 = FUN_00a1ffc0();
        plVar6 = (long *)(lVar7 + 0x10);
        plVar9 = (long *)*plVar6;
        plVar10 = plVar6;
        if (plVar9 != (long *)0x0) {
          do {
            if (*(uint *)(plVar9 + 4) >= 0x2e4f13dd) {
              plVar10 = plVar9;
            }
            plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < 0x2e4f13dd];
          } while (plVar9 != (long *)0x0);
          if (((plVar10 != plVar6) && (*(uint *)(plVar10 + 4) < 0x2e4f13de)) &&
             ((int)plVar10[5] != 0)) {
            lVar7 = 0;
            uVar11 = 0;
            do {
              (*(code *)((undefined8 *)(plVar10[6] + lVar7))[1])
                        (*(undefined8 *)(plVar10[6] + lVar7),uVar2 & 0xff);
              uVar11 = uVar11 + 1;
              lVar7 = lVar7 + 0x10;
            } while (uVar11 < *(uint *)(plVar10 + 5));
          }
        }
        FUN_00e70314(param_1 + 0x7b0);
        uVar5 = 1;
      }
    }
  }
LAB_00a473c4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00a473f4(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **local_50 [2];
  undefined1 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(int *)(param_1 + 0x7dc) != -1) &&
     (plVar3 = *(long **)(param_1 + 0x7c8), plVar3 != (long *)0x0)) {
    if (*(int *)(param_1 + 2000) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((((lVar4 != 0) && (lVar5 = FUN_00d9eae0(lVar4), lVar5 != 0)) &&
          ((uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f, uVar1 == 0x1f ||
           (1 < *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) &&
         ((uVar6 = FUN_00d73574(lVar5,*(undefined4 *)(param_1 + 0x7dc)), (uVar6 & 1) != 0 &&
          (uVar6 = FUN_00d736e0(lVar5,*(undefined4 *)(param_1 + 0x7dc)), (uVar6 & 1) != 0)))) {
        uVar7 = FUN_00a1f33c();
        FUN_00a19d7c(local_50,*(undefined1 *)(param_1 + 0x7d8));
        local_3c = 0;
        local_50[0] = &PTR_FUN_027c84b8;
        uVar6 = FUN_00a1a334(uVar7,local_50);
        if ((uVar6 & 1) != 0) {
          FUN_00a47540(param_1);
        }
        FUN_00e70314(param_1 + 0x7b0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7c8) = 0;
      *(undefined4 *)(param_1 + 2000) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a47540(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  long *plVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    FUN_00f01a4c(param_1,1);
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1,1);
  }
  lVar1 = param_1 + 0xc0;
  FUN_00f01980(lVar1);
  lVar3 = DAT_03210d00;
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efe530(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  uVar7 = NEON_fmov(0x3fe00000,4);
  local_50 = CONCAT44((float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar7 >> 0x20),
                      (float)uVar8 * (float)uVar7);
  FUN_00efe58c(puVar6,&local_50);
  FUN_00efcac4(0x3c23d70a,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efe530(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_50 = uVar8;
  FUN_00efe58c(puVar6,&local_50);
  FUN_00efcac4(0x3e800000,puVar6);
  FUN_00efcb24(puVar6,FUN_00a269a4);
  FUN_00f022a0(lVar1,puVar6);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00a47754(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7dc);
}




byte FUN_00a4775c(long param_1)

{
  return *(byte *)(param_1 + 0x7e0) & 1;
}




void FUN_00a47768(long param_1)

{
  FUN_00f023dc(param_1 + 0xc0);
  return;
}




void FUN_00a47770(long *param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  
  uVar2 = FUN_01980628();
  if ((((uVar2 & 1) != 0) || (iVar1 = FUN_0092f28c(), iVar1 == 1)) &&
     (uVar2 = FUN_00ceab64(), (uVar2 & 1) == 0)) {
    pvVar3 = (void *)param_1[0xf5];
    if (pvVar3 == (void *)0x0) {
      pvVar3 = operator_new(0x200);
      FUN_00c81dd8(pvVar3,param_2);
      param_1[0xf5] = (long)pvVar3;
    }
    uVar2 = FUN_00f02540(pvVar3);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,param_1[0xf5],1);
    }
    FUN_00a46d60(param_1);
    return;
  }
  return;
}




void FUN_00a4780c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x7a8);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) =
         *(uint *)(lVar1 + 0x84) & 0xfffffff8 | *(uint *)(lVar1 + 0x84) & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00a47828(long param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00bbe338();
    return;
  }
  return;
}




void FUN_00a47838(long param_1)

{
  FUN_00bbe9f8(*(undefined8 *)(param_1 + 0xb8));
  return;
}




void FUN_00a47850(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d9ea60(param_1 + 0x7c8);
  if (lVar3 != 0) {
    uVar4 = FUN_00d73214(lVar3,*(undefined4 *)(param_1 + 0x7dc));
    uVar2 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP");
    FUN_00f048e0(auStack_58,uVar2,uVar4);
    FUN_00f04760(param_1,auStack_58,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a478e0(void)

{
  return;
}




void FUN_00a478e4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a47954(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00f0d378(param_1 + 0x548,pbVar1);
  return;
}




bool FUN_00a47970(undefined8 param_1,int param_2)

{
  return DAT_03210fd8 == param_2;
}




void FUN_00a47988(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  FUN_00b89cd8();
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027ca020;
  FUN_00f017e8(param_1 + 0x1b);
  lVar11 = 0x160;
  param_1[0x1b] = (long)&PTR_FUN_027c1f80;
  do {
    FUN_00f0e4a8((long)param_1 + lVar11);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x520);
  plVar1 = param_1 + 0xa4;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0xc2;
  FUN_00f11234(plVar2);
  plVar3 = param_1 + 0xf6;
  FUN_00ecfd6c(plVar3,0);
  plVar4 = param_1 + 0x19d;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x1b4;
  FUN_00f0d160(plVar5);
  FUN_00f0d160();
  plVar7 = param_1 + 0x200;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x226;
  FUN_00f0d160(plVar8);
  lVar11 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar11 + 0x1260);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  lVar11 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar11 + 0x1850);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0x5f0);
  lVar11 = 0;
  do {
    FUN_00e70510((long)param_1 + lVar11 + 0x1e40);
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x50);
  lVar11 = 0x160;
  *(undefined1 *)(param_1 + 0x3d2) = 1;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar11,1);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0x520);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed026c(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,param_1 + 0x1da,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar8,1);
  lVar11 = 0;
  do {
    lVar6 = (long)param_1 + lVar11 + 0x160;
    FUN_00f0e548(lVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
    local_98 = (code *)CONCAT44(local_98._4_4_,0xffa6a6a6);
    FUN_00f0e670(lVar6,&local_98,2);
    lVar6 = lVar11 + 0xf0;
    *(uint *)((long)param_1 + lVar11 + 0x1e4) =
         *(uint *)((long)param_1 + lVar11 + 0x1e4) & 0xffffffbf;
    lVar11 = lVar6;
  } while (lVar6 != 0x3c0);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  *(uint *)((long)param_1 + 0x5a4) = *(uint *)((long)param_1 + 0x5a4) & 0xffffffbf;
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d75c(plVar5,&DAT_03210450);
  uVar9 = *(uint *)((long)param_1 + 0xe24);
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xe24) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d378(param_1 + 0x1da,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f112f0(plVar2,1);
  local_70 = DAT_03210f84;
  *(uint *)((long)param_1 + 0x694) = *(uint *)((long)param_1 + 0x694) | 0x10;
  local_98 = FUN_00a47ef8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xc3,&local_98);
  local_98 = FUN_00a47ef8;
  local_70 = DAT_03210f58;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xc3,&local_98);
  FUN_00ed0680(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed0578(0x42000000,0,plVar3);
  local_70 = DAT_03210f8c;
  local_98 = FUN_00a47efc;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x19e,&local_98);
  local_98 = FUN_00a47efc;
  local_70 = DAT_03210f60;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x19e,&local_98);
  uVar9 = *(uint *)((long)param_1 + 0x1084);
  *(uint *)((long)param_1 + 0xd6c) = *(uint *)((long)param_1 + 0xd6c) | 0x10;
  if ((uVar9 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1084) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7280;
    FUN_0091ada4(plVar7);
  }
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffffe682);
  FUN_00f0d7fc(plVar8,&local_98);
  uVar9 = *(uint *)((long)param_1 + 0x11b4);
  if ((uVar9 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x11b4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7900;
    FUN_0091ada4(plVar8);
  }
  lVar11 = 5;
  param_1 = param_1 + 0x24c;
  do {
    plVar1 = param_1 + 0xbe;
    FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
    uVar9 = *(uint *)((long)param_1 + 0x674);
    if ((uVar9 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + 0x674) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
      FUN_0091ada4(plVar1);
    }
    FUN_00f0d378(param_1,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
    uVar9 = *(uint *)((long)param_1 + 0x84);
    if ((uVar9 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x84) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x4c80;
      FUN_0091ada4(param_1);
    }
    FUN_00f023ec(plVar4,param_1,1);
    FUN_00f023ec(plVar4,plVar1,1);
    lVar11 = lVar11 + -1;
    param_1 = param_1 + 0x26;
  } while (lVar11 != 0);
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a47ef8(void)

{
  return;
}




void FUN_00a47efc(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ed0848(param_1 + 0xf6);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a47f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(0x3e800000,param_1,0,4,1);
  return;
}




void FUN_00a47f4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  FUN_00f13db4();
  FUN_00f00298(&uStack_b4,&local_b8);
  uVar4 = FUN_0092ead0(uStack_b4,local_b8);
  fVar14 = 1.0;
  fVar11 = 1.25;
  if ((uVar4 & 1) == 0) {
    fVar11 = 1.0;
  }
  lVar6 = param_1 + 0xda0;
  if ((*(float *)(param_1 + 0xde8) != fVar11) || (*(float *)(param_1 + 0xdec) != fVar11)) {
    *(float *)(param_1 + 0xde8) = fVar11;
    *(float *)(param_1 + 0xdec) = fVar11;
    fVar14 = 1.0;
    FUN_0091ada4(lVar6);
  }
  fVar12 = 704.0;
  FUN_00f0dad0(704.0 / fVar11,lVar6,1);
  if ((*(float *)(param_1 + 0xde0) != 0.0) || (*(float *)(param_1 + 0xde4) != 0.0)) {
    *(undefined8 *)(param_1 + 0xde0) = 0;
    FUN_0091ada4(lVar6);
  }
  FUN_00f0d4e0(lVar6);
  uVar9 = 0;
  fVar11 = 0.0;
  fVar14 = fVar14 * *(float *)(param_1 + 0xdec) + 2.0 + 0.0;
  if ((*(byte *)(param_1 + 0xf54) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0xf10) != 0.0) || (*(float *)(param_1 + 0xf14) != fVar14)) {
      *(undefined4 *)(param_1 + 0xf10) = 0;
      *(float *)(param_1 + 0xf14) = fVar14;
      fVar11 = 0.0;
      FUN_0091ada4(param_1 + 0xed0);
    }
    FUN_00f0d4e0(param_1 + 0xed0);
    uVar9 = 0x41a00000;
    fVar14 = fVar14 + fVar11 * *(float *)(param_1 + 0xdec) + 20.0;
  }
  lVar6 = param_1 + 0x1000;
  FUN_00f0dad0(0x44300000,lVar6,1);
  FUN_00f0d378(lVar6,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  if ((*(float *)(param_1 + 0x1040) != 0.0) || (*(float *)(param_1 + 0x1044) != fVar14)) {
    *(undefined4 *)(param_1 + 0x1040) = 0;
    *(float *)(param_1 + 0x1044) = fVar14;
    FUN_0091ada4(lVar6);
  }
  uVar5 = FUN_00f08be8(param_1 + 0x10d0);
  uVar4 = FUN_00e70b88(uVar5,&DAT_03210450);
  if ((uVar4 & 1) != 0) {
    FUN_00f0d4e0(lVar6);
    fVar14 = fVar14 + (float)uVar9 * *(float *)(param_1 + 0x104c) + 50.0;
  }
  lVar6 = 0;
  do {
    lVar1 = param_1 + lVar6;
    lVar2 = param_1 + 0x1850 + lVar6;
    if ((*(float *)(lVar1 + 0x1890) != 112.0) || (*(float *)(lVar1 + 0x1894) != fVar14)) {
      *(undefined4 *)(lVar1 + 0x1890) = 0x42e00000;
      *(float *)(lVar1 + 0x1894) = fVar14;
      FUN_0091ada4(lVar2);
    }
    local_b0 = 0x3f800000;
    lVar1 = param_1 + lVar6;
    (**(code **)(*(long *)(lVar1 + 0x1850) + 0x28))(lVar2,&local_b0);
    lVar2 = param_1 + 0x1260 + lVar6;
    if ((*(float *)(lVar1 + 0x12a0) != 128.0) || (*(float *)(lVar1 + 0x12a4) != fVar14)) {
      *(undefined4 *)(lVar1 + 0x12a0) = 0x43000000;
      *(float *)(lVar1 + 0x12a4) = fVar14;
      FUN_0091ada4(lVar2);
    }
    local_b0 = 0;
    lVar1 = param_1 + lVar6;
    (**(code **)(*(long *)(lVar1 + 0x1260) + 0x28))(lVar2,&local_b0);
    FUN_00f0dad0(0x44300000,lVar2,1);
    uVar5 = FUN_00f08be8(param_1 + 0x1330 + lVar6);
    uVar4 = FUN_00e70b88(uVar5,&DAT_03210450);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*(long *)(lVar1 + 0x1260) + 0x48))(lVar2);
      fVar14 = fVar14 + (float)uVar9 * *(float *)(lVar1 + 0x12ac) + 36.0;
    }
    fVar11 = (float)uVar9;
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0x5f0);
  lVar6 = param_1 + 0x1130;
  FUN_00f0dad0(0x44300000,lVar6,1);
  FUN_00f0d378(lVar6,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  if ((*(float *)(param_1 + 0x1170) != 0.0) || (*(float *)(param_1 + 0x1174) != fVar14)) {
    *(undefined4 *)(param_1 + 0x1170) = 0;
    *(float *)(param_1 + 0x1174) = fVar14;
    FUN_0091ada4(lVar6);
  }
  lVar1 = param_1 + 0x7b0;
  FUN_00ed0418(lVar1,1);
  uVar7 = FUN_00ed04a0(lVar1);
  local_b0 = CONCAT44(fVar11,uVar7);
  FUN_00f13f18(param_1 + 0xce8,&local_b0);
  FUN_00ed0464(lVar1);
  lVar2 = param_1 + 0x610;
  fVar10 = fVar11;
  FUN_00f13e54(lVar2);
  FUN_00ed04d8(lVar1,0,fVar10 < fVar11);
  fVar15 = 1.0;
  FUN_00ed0650(0x3ecccccd,lVar1);
  FUN_00ed06a4(lVar1,fVar10 < fVar11);
  if (*(char *)(param_1 + 0x1e90) == '\0') {
    fVar16 = (float)FUN_00f13e54(param_1 + 0xce8);
    fVar16 = fVar16 + 8.0;
    FUN_00f0d4e0(lVar6);
    fVar15 = fVar14 + fVar15 + 8.0 + 48.0;
    fVar12 = fVar16 + -48.0;
    fVar14 = fVar15 + -48.0;
  }
  else {
    fVar16 = 752.0;
    fVar15 = 664.0;
    fVar14 = 616.0;
  }
  FUN_00f13f08(fVar16,0x40800000,param_1 + 0x160);
  fVar17 = fVar15 + -8.0;
  FUN_00f13f08(0x40800000,fVar17,param_1 + 0x250);
  FUN_00f13f08(fVar16,0x40800000,param_1 + 0x340);
  FUN_00f13f08(0x40800000,fVar17,param_1 + 0x430);
  fVar18 = fVar16 * -0.5;
  fVar13 = fVar15 * -0.5;
  if ((*(float *)(param_1 + 0x1a0) != fVar18) || (*(float *)(param_1 + 0x1a4) != fVar13)) {
    *(float *)(param_1 + 0x1a0) = fVar18;
    *(float *)(param_1 + 0x1a4) = fVar13;
    FUN_0091ada4(param_1 + 0x160);
  }
  fVar8 = fVar16 * 0.5 + -4.0;
  fVar13 = fVar13 + 4.0;
  if ((*(float *)(param_1 + 0x290) != fVar8) || (*(float *)(param_1 + 0x294) != fVar13)) {
    *(float *)(param_1 + 0x290) = fVar8;
    *(float *)(param_1 + 0x294) = fVar13;
    FUN_0091ada4(param_1 + 0x250);
  }
  fVar15 = fVar15 * 0.5 + -4.0;
  if ((*(float *)(param_1 + 0x380) != fVar18) || (*(float *)(param_1 + 900) != fVar15)) {
    *(float *)(param_1 + 0x380) = fVar18;
    *(float *)(param_1 + 900) = fVar15;
    FUN_0091ada4(param_1 + 0x340);
  }
  if ((*(float *)(param_1 + 0x470) != fVar18) || (*(float *)(param_1 + 0x474) != fVar13)) {
    *(float *)(param_1 + 0x470) = fVar18;
    *(float *)(param_1 + 0x474) = fVar13;
    FUN_0091ada4(param_1 + 0x430);
  }
  fVar15 = (fVar16 + -8.0) * -0.5;
  lVar6 = param_1 + 0x520;
  if ((*(float *)(param_1 + 0x560) != fVar15) || (*(float *)(param_1 + 0x564) != fVar17 * -0.5)) {
    *(float *)(param_1 + 0x560) = fVar15;
    *(float *)(param_1 + 0x564) = fVar17 * -0.5;
    FUN_0091ada4(lVar6);
  }
  FUN_00f13f08(fVar16 + -8.0,fVar17,lVar6);
  if ((*(float *)(param_1 + 0x650) != 24.0) || (*(float *)(param_1 + 0x654) != 24.0)) {
    uVar9 = NEON_fmov(0x41c00000,4);
    *(undefined8 *)(param_1 + 0x650) = uVar9;
    FUN_0091ada4(lVar2);
  }
  FUN_00f13f08(fVar12,fVar14,lVar2);
  *(uint *)(param_1 + 0x694) = *(uint *)(param_1 + 0x694) | 0x10;
  if (fVar10 < fVar11) {
    FUN_00ed1918(lVar1);
  }
  if ((*(float *)(param_1 + 0x7f0) != 0.0) || (*(float *)(param_1 + 0x7f4) != 0.0)) {
    *(undefined8 *)(param_1 + 0x7f0) = 0;
    FUN_0091ada4(lVar1);
  }
  uVar7 = FUN_00f0e700(lVar6);
  local_b0 = CONCAT44(fVar10,uVar7);
  FUN_00f13f18(param_1,&local_b0);
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

