// functions/00a49 — 32 functions
#include "libGameKindred.h"




void FUN_00a49094(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x818) = *param_2;
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_2 + 1);
  uVar2 = FUN_00ceace8();
  uVar1 = FUN_00ceafec(uVar2,*(undefined1 *)(param_1 + 0xa80));
  FUN_00a4c78c(param_1 + 0x838,uVar1);
  uVar2 = FUN_00ceace8();
  uVar1 = FUN_00ceafec(uVar2,*(undefined1 *)(param_1 + 0xcd0));
  FUN_00a4c78c(param_1 + 0xa88,uVar1);
  return;
}




void FUN_00a490f4(long param_1)

{
  *(byte *)(param_1 + 0xcd8) = *(byte *)(param_1 + 0xcd8) | 2;
  return;
}




void FUN_00a49104(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xcd8) = *(byte *)(param_1 + 0xcd8) & 0xfe | param_2 & 1;
  return;
}




void FUN_00a49114(long param_1)

{
  float fVar1;
  
  FUN_009bbfb0();
  fVar1 = (float)FUN_009bc268();
  FUN_00e70e18(param_1 + 0x828,"%d:%02d",(int)fVar1 / 0x3c,(int)fVar1 % 0x3c);
  FUN_00f0d75c(param_1 + 0x328,param_1 + 0x828);
  return;
}




void FUN_00a4917c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = FUN_00f02540();
  if ((uVar3 & 1) != 0) {
    lVar1 = param_1 + 0x180;
    FUN_00f13f08(0x42f03333,0x42240000,lVar1);
    if ((*(float *)(param_1 + 0x1d0) != 0.5) || (*(float *)(param_1 + 0x1d4) != 0.0)) {
      *(undefined8 *)(param_1 + 0x1d0) = 0x3f000000;
      FUN_0091ada4(lVar1);
    }
    lVar2 = param_1 + 0x238;
    if ((*(float *)(param_1 + 0x288) != 0.5) || (*(float *)(param_1 + 0x28c) != 0.5)) {
      *(undefined8 *)(param_1 + 0x288) = 0x3f0000003f000000;
      FUN_0091ada4(lVar2);
    }
    if ((*(float *)(param_1 + 0x378) != 0.0) || (*(float *)(param_1 + 0x37c) != 0.5)) {
      *(undefined8 *)(param_1 + 0x378) = 0x3f00000000000000;
      FUN_0091ada4(param_1 + 0x328);
    }
    fVar4 = (float)FUN_00f13e54(lVar1);
    fVar5 = (float)FUN_00f0e700(lVar2);
    fVar6 = 2.0;
    fVar5 = (fVar5 * 0.5 - fVar4 * 0.5) + 2.0;
    FUN_00f13e54(lVar1);
    fVar4 = *(float *)(param_1 + 0x278);
    if ((fVar4 != fVar5) || (*(float *)(param_1 + 0x27c) != fVar6 * 0.5)) {
      *(float *)(param_1 + 0x278) = fVar5;
      *(float *)(param_1 + 0x27c) = fVar6 * 0.5;
      FUN_0091ada4(lVar2);
      fVar4 = *(float *)(param_1 + 0x278);
    }
    fVar5 = (float)FUN_00f0e700(lVar2);
    fVar6 = 5.0;
    fVar4 = fVar4 + fVar5 * 0.5 + 5.0;
    FUN_00f13e54(lVar1);
    if ((*(float *)(param_1 + 0x368) != fVar4) || (*(float *)(param_1 + 0x36c) != fVar6 * 0.5)) {
      *(float *)(param_1 + 0x368) = fVar4;
      *(float *)(param_1 + 0x36c) = fVar6 * 0.5;
      FUN_0091ada4(param_1 + 0x328);
    }
    if ((*(byte *)(param_1 + 0xcd8) >> 1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0xcd8) & 1) == 0) {
        FUN_00a4955c(param_1);
        return;
      }
      FUN_00a49350(param_1);
      return;
    }
  }
  return;
}




void FUN_00a4934c(void)

{
  return;
}




void FUN_00a49350(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar1 = param_3 + 0x30;
  plVar2 = param_3 + 0x107;
  *(uint *)((long)param_3 + 0x8bc) = *(uint *)((long)param_3 + 0x8bc) | 4;
  *(uint *)((long)param_3 + 0xb0c) = *(uint *)((long)param_3 + 0xb0c) | 4;
  fVar5 = (float)FUN_00f13e54(plVar1);
  fVar7 = param_2;
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  local_70 = (fVar6 - fVar5) * 0.5;
  fStack_6c = fVar7;
  fVar6 = (float)FUN_00f13e54(plVar1);
  if ((*(float *)(param_3 + 0x39) != fVar5 / fVar6) ||
     (*(float *)((long)param_3 + 0x1cc) != param_2 / fVar7)) {
    *(float *)(param_3 + 0x39) = fVar5 / fVar6;
    *(float *)((long)param_3 + 0x1cc) = param_2 / fVar7;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_3 + 0x38) != 0.0) || (*(float *)((long)param_3 + 0x1c4) != 0.0)) {
    param_3[0x38] = 0;
    FUN_0091ada4(plVar1);
  }
  plVar3 = param_3 + 0x151;
  FUN_00f13f18(plVar2,&local_70);
  if ((*(float *)(param_3 + 0x111) != 1.0) || (*(float *)((long)param_3 + 0x88c) != 0.0)) {
    param_3[0x111] = 0x3f800000;
    FUN_0091ada4(plVar2);
  }
  fVar7 = (float)FUN_00f01c20(plVar1);
  if ((*(float *)(param_3 + 0x10f) != fVar7 * -0.5) || (*(float *)((long)param_3 + 0x87c) != 0.0)) {
    *(float *)(param_3 + 0x10f) = fVar7 * -0.5;
    *(undefined4 *)((long)param_3 + 0x87c) = 0;
    FUN_0091ada4(plVar2);
  }
  FUN_00f13f18(plVar3,&local_70);
  if ((*(float *)(param_3 + 0x15b) != 0.0) || (*(float *)((long)param_3 + 0xadc) != 0.0)) {
    param_3[0x15b] = 0;
    FUN_0091ada4(plVar3);
  }
  fVar7 = (float)FUN_00f01c20(plVar1);
  if ((*(float *)(param_3 + 0x159) != fVar7 * 0.5) || (*(float *)((long)param_3 + 0xacc) != 0.0)) {
    *(float *)(param_3 + 0x159) = fVar7 * 0.5;
    *(undefined4 *)((long)param_3 + 0xacc) = 0;
    FUN_0091ada4(plVar3);
  }
  FUN_00a4ced8(plVar2);
  FUN_00a4ced8(plVar3);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4955c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(uint *)((long)param_3 + 0x8bc) = *(uint *)((long)param_3 + 0x8bc) & 0xfffffffb;
  *(uint *)((long)param_3 + 0xb0c) = *(uint *)((long)param_3 + 0xb0c) & 0xfffffffb;
  plVar1 = param_3 + 0x30;
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  fVar4 = param_2;
  fVar3 = (float)FUN_00f13e54(plVar1);
  if ((*(float *)(param_3 + 0x39) != fVar2 / fVar3) ||
     (*(float *)((long)param_3 + 0x1cc) != param_2 / fVar4)) {
    *(float *)(param_3 + 0x39) = fVar2 / fVar3;
    *(float *)((long)param_3 + 0x1cc) = param_2 / fVar4;
    FUN_0091ada4(plVar1);
  }
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x38) == fVar4 * 0.5) && (*(float *)((long)param_3 + 0x1c4) == 0.0)) {
    return;
  }
  *(float *)(param_3 + 0x38) = fVar4 * 0.5;
  *(undefined4 *)((long)param_3 + 0x1c4) = 0;
  FUN_0091ada4(plVar1);
  return;
}




void FUN_00a49634(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xb8,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a49644(long param_1,undefined8 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 0xcd8) & 1) == 0) {
    return;
  }
  FUN_00a4d06c(param_1 + 0x838,param_2,param_3);
  FUN_00a4d06c(param_1 + 0xa88,param_2,param_3);
  return;
}




byte FUN_00a496a4(long param_1)

{
  return *(byte *)(param_1 + 0xcd8) & 1;
}




byte FUN_00a496b0(long param_1)

{
  return *(byte *)(param_1 + 0xcd8) >> 1 & 1;
}




void FUN_00a496bc(void *param_1)

{
  FUN_00a3b044();
  operator_delete(param_1);
  return;
}




void FUN_00a496e0(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  float local_48;
  float fStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027ca2d0;
  FUN_00f0d160(plVar1);
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(byte *)((long)param_1 + 0x1bc) = *(byte *)((long)param_1 + 0x1bc) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8);
  FUN_00f0d7fc(plVar1,&DAT_031312c0);
  FUN_00f0da80(plVar1,&DAT_031312c4);
  FUN_00f0da30(plVar1,1);
  uVar2 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar2 & 0xfffffff3;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar2 & 0xffff8073;
    FUN_0091ada4(param_1);
  }
  FUN_00f00298(&fStack_44,&local_48);
  if ((*(float *)(param_1 + 0x19) != fStack_44 * 0.5) ||
     (*(float *)((long)param_1 + 0xcc) != local_48 * 0.2)) {
    *(float *)(param_1 + 0x19) = fStack_44 * 0.5;
    *(float *)((long)param_1 + 0xcc) = local_48 * 0.2;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a49840(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x84) >> 2 & 1) != 0) {
    if (((DAT_031325a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031325a8), iVar2 != 0)) {
      FUN_00e70510(&DAT_03132598);
      __cxa_atexit(FUN_0090e338,&DAT_03132598,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_031325a8);
    }
    if (((DAT_031325c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031325c0), iVar2 != 0)) {
      FUN_00e70510(&DAT_031325b0);
      __cxa_atexit(FUN_0090e338,&DAT_031325b0,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_031325c0);
    }
    uVar3 = FUN_00e6ce7c("HUD_MATCH_START_PREPARE_FOR_BATTLE",0);
    FUN_00910394(&DAT_03132598,uVar3);
    pfVar4 = (float *)FUN_00d70a78();
    fVar6 = *pfVar4 + *(float *)(param_1 + 0x1b8);
    FUN_009bbfb0();
    fVar5 = (float)FUN_009bc268();
    FUN_00e70e18(&DAT_031325b0,&DAT_01bb6d43,(int)((fVar6 + 0.999) - fVar5));
    FUN_00e705c8(&local_58,"[TIME]");
    FUN_00e71248(&DAT_03132598,0,&local_58,&DAT_031325b0);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0x88,&DAT_03132598);
    if ((*(byte *)(param_1 + 0x1bc) & 1) == 0) {
      FUN_009bbfb0();
      fVar5 = (float)FUN_009bc268();
      if (fVar6 <= fVar5) {
        FUN_00f01980(param_1);
        uVar3 = FUN_00efee28(0,0x3f19999a,FUN_0091aa80);
        FUN_00f022a0(param_1,uVar3);
        *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) | 1;
        goto LAB_00a499b8;
      }
    }
    FUN_009bbfb0();
    fVar5 = (float)FUN_009bc268();
    if (fVar6 + 0.6 <= fVar5) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff3;
    }
  }
LAB_00a499b8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a49a74(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0xc;
  uVar1 = FUN_00efee28(0x3f800000,0x3f19999a,FUN_0091aa80);
  FUN_00f022a0(param_1,uVar1);
  FUN_009bbfb0();
  uVar2 = FUN_009bc268();
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  return;
}




void FUN_00a49acc(long param_1,byte param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x1bc);
  if (((bVar2 & 1) == 0) && ((param_2 & 1) != (bVar2 >> 1 & 1))) {
    lVar1 = param_1 + 0x88;
    *(byte *)(param_1 + 0x1bc) = bVar2 & 0xfd | (param_2 & 1) << 1;
    FUN_00f01980(lVar1);
    FUN_00f00298(&local_4c,&local_50);
    fVar4 = local_50 * 0.2;
    if ((*(byte *)(param_1 + 0x1bc) & 2) != 0) {
      fVar4 = 68.0;
    }
    if (*(float *)(param_1 + 0xcc) != fVar4) {
      uVar5 = FUN_00efee28(0,0x3dcccccd,FUN_0091aa80);
      FUN_00f022a0(lVar1,uVar5);
      uVar5 = FUN_00efef08(local_4c * 0.5,fVar4,0,0);
      FUN_00f022a0(lVar1,uVar5);
      uVar5 = FUN_00efee28(0x3f800000,0x3dcccccd,FUN_0091aa80);
      FUN_00f022a0(lVar1,uVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a49bfc(undefined8 param_1)

{
  FUN_00a49acc(param_1,1);
  return;
}




void FUN_00a49c04(undefined8 param_1)

{
  FUN_00a49acc(param_1,0);
  return;
}




void FUN_00a49c0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ca2d0;
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a49c40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ca2d0;
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a49c7c(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x29;
  *param_1 = (long)&PTR_FUN_027ca3d0;
  FUN_00b89cd8(plVar1);
  FUN_00a4a550(param_1 + 0x42);
  uVar2 = FUN_00e6a474("HUD_Minimap");
  uVar3 = FUN_0091ed5c("HUD_Minimap",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar4 = FUN_01988738(DAT_0312f354,0);
  param_1[0x68] = lVar4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x42,1);
  FUN_00f023ec(plVar1,param_1[0x68] + 0x28,1);
  FUN_00b89d24(0x3dcccccd,plVar1,1,4,1);
  return;
}




void FUN_00a49d60(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0x148,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a49d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ca3d0;
  FUN_019888f4(param_1[0x68]);
  param_1[0x68] = 0;
  FUN_00a4a5c8(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a49dd4(void *param_1)

{
  FUN_00a49d70();
  operator_delete(param_1);
  return;
}




void FUN_00a49df8(undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_019889cc(auStack_60,1,DAT_02e3ef88,0);
  lVar6 = FUN_00920a70();
  if (lVar6 != 0) {
    if ((param_4 == 0) || (cVar4 = FUN_00d55870(param_4), cVar4 == '\0')) {
      iVar7 = 0;
    }
    else {
      uVar5 = FUN_00d55870(param_4);
      iVar7 = (uVar5 & 0xff) - 1;
    }
    plVar8 = *(long **)(lVar6 + 0x60);
    plVar3 = plVar8;
    while (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar3;
      plVar3 = plVar3 + 1;
    }
    lVar1 = param_3 + 0x210;
    FUN_00a4a69c(lVar1,lVar6,iVar7,*(undefined8 *)(param_3 + 0x340));
    uVar10 = *(undefined8 *)(param_3 + 0x340);
    local_68 = FUN_00a4aa00(lVar1);
    uStack_64 = param_2;
    FUN_009cde24(uVar10,param_4,&local_68);
    fVar11 = *(float *)(lVar6 + 0x34);
    fVar12 = *(float *)(lVar6 + 0x38);
    FUN_009cf0bc(fVar11,fVar12,*(undefined8 *)(param_3 + 0x340));
    if ((*(float *)(param_3 + 600) != fVar11) || (*(float *)(param_3 + 0x25c) != fVar12)) {
      *(float *)(param_3 + 600) = fVar11;
      *(float *)(param_3 + 0x25c) = fVar12;
      FUN_0091ada4(lVar1);
    }
    uVar5 = *(uint *)(param_3 + 0x294);
    uVar9 = (uint)(*(float *)(lVar6 + 8) * 255.0);
    if ((uVar5 >> 7 & 0xff) != uVar9) {
      *(uint *)(param_3 + 0x294) = uVar5 & 0xffff8000 | uVar5 & 0x7f | (uVar9 & 0xff) << 7;
      FUN_0091ada4(lVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a49f5c(long param_1)

{
  if (*(long *)(param_1 + 0x340) != 0) {
    FUN_009cda78();
    FUN_00f07940(0,0,*(long *)(param_1 + 0x340) + 0x28,8,param_1,8);
    FUN_00f07940(0,0,param_1 + 0x210,8,param_1,8);
    return;
  }
  return;
}




void FUN_00a49fc8(long param_1)

{
  FUN_009cf13c(*(undefined8 *)(param_1 + 0x340));
  return;
}




void FUN_00a49fd0(long param_1)

{
  FUN_009cf260(*(undefined8 *)(param_1 + 0x340));
  return;
}




void FUN_00a49fd8(long param_1)

{
  FUN_009cf274(*(undefined8 *)(param_1 + 0x340));
  return;
}




void FUN_00a49fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a49fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x340) + 0x28) + 0x50))();
  return;
}




void FUN_00a49ff0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_019889cc(&local_30,1,DAT_02e3ef88,0);
  bVar3 = (param_2 & 1) == 0;
  lVar4 = 0x60;
  if (bVar3) {
    lVar4 = 0x58;
  }
  lVar1 = 0x5c;
  if (bVar3) {
    lVar1 = 0x54;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(*(long *)(local_30 + 0x290) + lVar1),
                   *(undefined4 *)(*(long *)(local_30 + 0x290) + lVar4));
}

