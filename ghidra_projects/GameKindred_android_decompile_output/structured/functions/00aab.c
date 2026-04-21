// functions/00aab — 18 functions
#include "libGameKindred.h"




void FUN_00aab048(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  timespec local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00b252ec(param_1 + 0x3d8);
  lVar5 = *(long *)(param_1 + 0x528);
  clock_gettime(1,&local_58);
  lVar4 = local_58.tv_nsec - *(long *)(param_1 + 0x510);
  lVar3 = local_58.tv_sec - *(long *)(param_1 + 0x508);
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_58.tv_nsec + 1000000000) - *(long *)(param_1 + 0x510);
  }
  puVar1 = &DAT_01bee802;
  if (5 < (long)((double)lVar5 + (double)(lVar4 + lVar3 * 1000000000) * -1e-09)) {
    puVar1 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_1 + 0x3d8,puVar1);
  FUN_00aab130(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aab130(long param_1)

{
  long lVar1;
  
  FUN_00f07b18(0x41000000,param_1 + 0x690,3,param_1 + 0x3d8,1);
  FUN_00f0a674(0,param_1 + 0x690,param_1 + 0x3d8);
  lVar1 = param_1 + 0x538;
  FUN_00f13238(lVar1);
  FUN_00f07940(0,0x42080000,lVar1,6,param_1 + 0xf0,6);
  FUN_00f07b18(0,lVar1,4,param_1,4);
  return;
}




void FUN_00aab1c4(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,&local_48);
  lVar2 = local_48.tv_nsec - *(long *)(param_2 + 0x3d0);
  local_48.tv_sec = local_48.tv_sec - *(long *)(param_2 + 0x3c8);
  if (lVar2 < 0) {
    local_48.tv_sec = local_48.tv_sec + -1;
    lVar2 = (local_48.tv_nsec + 1000000000) - *(long *)(param_2 + 0x3d0);
  }
  fVar3 = (float)((double)(lVar2 + local_48.tv_sec * 1000000000) * 1e-09);
  param_1 = fVar3 + param_1;
  fVar4 = *(float *)(param_2 + 0x3c0);
  if (param_1 <= *(float *)(param_2 + 0x3c0)) {
    fVar4 = param_1;
  }
  fVar5 = fVar4 - param_1;
  fVar6 = -fVar5;
  if (0.0 <= fVar5) {
    fVar6 = fVar5;
  }
  if (fVar6 <= 2.0) {
    param_1 = fVar4;
  }
  local_48.tv_sec = (__time_t)(param_1 - fVar3);
  *(float *)(param_2 + 0x3c0) = param_1;
  FUN_00b25438(param_2 + 0x3d8,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aab2b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  uVar3 = FUN_00f08be8(param_1 + 0x890);
  uVar4 = FUN_00e70b88(param_2,uVar3);
  if ((uVar4 & 1) != 0) {
    lVar1 = param_1 + 0x7c0;
    FUN_00f0d75c(lVar1,param_2);
    FUN_00f01980(lVar1);
    if ((*(float *)(param_1 + 0x808) != 2.5) || (*(float *)(param_1 + 0x80c) != 2.5)) {
      uVar3 = NEON_fmov(0x40200000,4);
      *(undefined8 *)(param_1 + 0x808) = uVar3;
      FUN_0091ada4(lVar1);
    }
    if ((*(uint *)(param_1 + 0x844) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x844) = *(uint *)(param_1 + 0x844) & 0xffff807f;
      FUN_0091ada4(lVar1);
    }
    uVar3 = FUN_00eff63c(0x3f266666,0x3f266666,0x3eb33333,0);
    FUN_00efcb24(uVar3,FUN_009a7624);
    uVar5 = FUN_00eff63c(0x3f4ccccd,0x3f4ccccd,0x3d23d70a,0);
    FUN_00efcb24(uVar5,FUN_009a7624);
    lVar2 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efd208(puVar7);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar7,uVar3,uVar5,0);
    uVar3 = FUN_00efee28(0x3f800000,0x3f19999a,0);
    lVar2 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcd98(puVar8);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar8,puVar7,uVar3,0);
    FUN_00f022a0(lVar1,puVar8);
    return;
  }
  return;
}




void FUN_00aab524(long param_1)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e705c8(&local_48,"[NUMBER_MINUTES][TIME_UNIT_MINUTES][NUMBER_SECONDS][TIME_UNIT_SECONDS]");
  FUN_00b252ac(param_1 + 0x3d8,&local_48,0,1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00f01a4c(param_1 + 0x690,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aab5b4(undefined8 param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)param_1 / 2.5;
  FUN_00f13f08(fVar1,0x40800000,param_2 + 0xf0);
  FUN_00f07b78(0,0x3f000000,0,0x3f051eb8,0,0,param_2 + 0xf0,param_2);
  FUN_00f13f08(fVar1,0x40800000,param_2 + 0x1e0);
  FUN_00f07b78(0x3f800000,0x3f000000,0x3f800000,0x3f051eb8,0,0,param_2 + 0x1e0,param_2);
  FUN_00f13f08(param_1,0x40800000,param_2 + 0x2d0);
  FUN_00f07940(0,0,param_2 + 0x2d0,6,param_2,6);
  FUN_00f07b78(0x3f000000,0x3f266666,0x3f000000,0x3f47ae14,0,0,param_2 + 0x7c0,param_2);
  FUN_00aab130(param_2);
  return;
}




void FUN_00aab6d4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined2 local_60 [4];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar7 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d2f18;
  FUN_00f1306c(plVar7);
  plVar1 = param_1 + 0x42;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x68;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x93;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0xb9;
  FUN_00f0e4a8(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f133a4(plVar7,plVar1,1);
  FUN_00f133a4(plVar7,plVar2,1);
  FUN_00f133a4(plVar2,plVar3,1);
  FUN_00f133a4(plVar2,plVar4,1);
  local_60[0] = 0x34;
  FUN_00f14070(param_1,local_60);
  FUN_00f0e540(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e578(plVar4,"ice_icon_small");
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("MAIN_CHARSELECT_LABEL_OWNEDICE",0);
  FUN_00f0d75c(plVar1,uVar6);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aab85c(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x93,&local_48);
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aab8f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aab8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00aab900(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  
  plVar1 = param_1 + 0x42;
  uVar3 = (**(code **)(*param_1 + 0x48))();
  FUN_00f0db64(uVar3,0,0x3f800000,plVar1);
  FUN_00f07b18(0,param_1 + 0x93,3,param_1 + 0xb9,1);
  FUN_00f07b18(0,param_1 + 0x93,5,param_1 + 0xb9,5);
  plVar2 = param_1 + 0x68;
  FUN_00f13238(plVar2);
  FUN_00f07b18(0,plVar2,0,plVar1,2);
  FUN_00f07b18(0,plVar2,4,plVar1,4);
  FUN_00f13238(param_1 + 0x17);
  FUN_00f07940(0,0,param_1 + 0x17,8,param_1,8);
  return;
}




void FUN_00aab9e4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  undefined2 local_60 [4];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x48;
  *param_1 = (long)&PTR_FUN_027d3068;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x59;
  param_1[0x48] = (long)&PTR_FUN_027c1f80;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x84;
  FUN_00f0d160(plVar3);
  FUN_00f0e4a8(param_1 + 0xaa);
  FUN_00f0e4a8(param_1 + 200);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f133a4(plVar2,param_1 + 0xaa,1);
  FUN_00f133a4(plVar2,param_1 + 200,1);
  FUN_00f133a4(plVar2,plVar3,1);
  uVar6 = FUN_0092ea9c();
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  if ((uVar6 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
  }
  FUN_00f0d378(plVar3,*ppuVar4);
  *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
  local_60[0] = 0x34;
  FUN_00f14070(param_1,local_60);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aabb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0e548(param_1 + 0x550,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,param_2);
  FUN_00f0e548(param_1 + 0x640,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,param_3);
  return;
}




void FUN_00aabb8c(long param_1)

{
  FUN_00f07940(0,0,param_1 + 0x240,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x240,8,param_1,8);
  FUN_00f07940(0,0xc1200000,param_1 + 0x420,6,param_1 + 0x550,6);
  FUN_00f13238(param_1 + 0x2c8);
  FUN_00f07940(0,0,param_1 + 0x2c8,8,param_1,8);
  return;
}




void thunk_FUN_00aabb8c(long param_1)

{
  FUN_00f07940(0,0,param_1 + 0x240,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x240,8,param_1,8);
  FUN_00f07940(0,0xc1200000,param_1 + 0x420,6,param_1 + 0x550,6);
  FUN_00f13238(param_1 + 0x2c8);
  FUN_00f07940(0,0,param_1 + 0x2c8,8,param_1,8);
  return;
}




void FUN_00aabc28(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00ecf844();
  if (iVar2 == 0) {
    uVar3 = FUN_00eff63c(0x3f800000,0x3f800000,0x3dcccccd,0);
    FUN_00efcb24(uVar3,FUN_009a7608);
    FUN_00f022a0(param_1 + 0x240,uVar3);
    uVar4 = *(uint *)(param_1 + 0x6c4) & 0xfffffffb;
    uVar5 = *(uint *)(param_1 + 0x5d4) | 4;
LAB_00aabcec:
    *(uint *)(param_1 + 0x6c4) = uVar4;
    *(uint *)(param_1 + 0x5d4) = uVar5;
LAB_00aabcf8:
    FUN_00f0d7fc(param_1 + 0x420,&DAT_01bee7fa);
    if ((~*(uint *)(param_1 + 0x5d4) & 0x7f80) == 0) goto LAB_00aabd24;
    uVar5 = *(uint *)(param_1 + 0x5d4) | 0x7f80;
  }
  else {
    if (iVar2 == 1) {
      if ((*(float *)(param_1 + 0x288) != 0.8) || (*(float *)(param_1 + 0x28c) != 0.8)) {
        *(undefined8 *)(param_1 + 0x288) = 0x3f4ccccd3f4ccccd;
        FUN_0091ada4(param_1 + 0x240);
      }
      uVar4 = *(uint *)(param_1 + 0x6c4) | 4;
      uVar5 = *(uint *)(param_1 + 0x5d4) & 0xfffffffb;
      goto LAB_00aabcec;
    }
    if (iVar2 != 3) goto LAB_00aabcf8;
    local_40[0] = 0xff444444;
    FUN_00f0d7fc(param_1 + 0x420,local_40);
    uVar5 = *(uint *)(param_1 + 0x5d4);
    if ((uVar5 & 0x7f80) == 0x3300) goto LAB_00aabd24;
    uVar5 = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x3300;
  }
  *(uint *)(param_1 + 0x5d4) = uVar5;
  FUN_0091ada4(param_1 + 0x550);
LAB_00aabd24:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aabd90(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00c93600(param_3,0);
  plVar6 = param_3 + 0x149;
  *param_3 = (long)&PTR_FUN_027d31c0;
  FUN_00f0e4a8(plVar6);
  plVar1 = param_3 + 0x167;
  FUN_00f13ca4(plVar1);
  plVar2 = param_3 + 0x17e;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_3 + 0x19c;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  uVar4 = *(uint *)((long)param_3 + 0xacc);
  *(uint *)((long)param_3 + 0xacc) = uVar4 & 0xfffffffb;
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_3 + 0xacc) = uVar4 & 0xffff807b | 0x6600;
    FUN_0091ada4(plVar6);
  }
  plVar6 = (long *)FUN_00f13624();
  (**(code **)(*plVar6 + 0x60))(plVar6,plVar2,0x12);
  (**(code **)(*plVar6 + 0x60))(plVar6,plVar3,10);
  FUN_00f13fd8(plVar1,plVar6);
  FUN_00f0e540(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e578(plVar2,"ice_icon_small");
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  FUN_00e705c8(&local_68,"0");
  FUN_00f0d75c(plVar3,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0e700(plVar2);
  fVar7 = param_2;
  FUN_00f0d4e0(plVar3);
  if (param_2 <= fVar7) {
    param_2 = fVar7;
  }
  FUN_00f13f08(0x43fa0000,param_2,plVar1);
  *(uint *)((long)param_3 + 0xbbc) = *(uint *)((long)param_3 + 0xbbc) & 0xfffffffb;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00aabf94(void)

{
  return 0xe6000001f4;
}




void FUN_00aabfa0(long *param_1)

{
  undefined8 uVar1;
  
  *(uint *)((long)param_1 + 0xacc) = *(uint *)((long)param_1 + 0xacc) & 0xfffffffb;
  uVar1 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_BUTTON_HERO_NOT_OWNED",0);
  FUN_00c938d4(param_1,uVar1);
  FUN_00c9228c(param_1,2);
  FUN_00f0e670(param_1 + 0xc6,&DAT_01bee7fa,2);
  FUN_00ecf888(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00aac018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}

