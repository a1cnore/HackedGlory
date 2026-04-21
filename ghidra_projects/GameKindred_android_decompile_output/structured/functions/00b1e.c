// functions/00b1e — 18 functions
#include "libGameKindred.h"




void FUN_00b1e018(void *param_1)

{
  FUN_00b1df14();
  operator_delete(param_1);
  return;
}




void FUN_00b1e03c(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0xab8) != param_1) || (*(float *)(param_2 + 0xabc) != param_1)) {
    *(float *)(param_2 + 0xab8) = param_1;
    *(float *)(param_2 + 0xabc) = param_1;
    FUN_0091ada4(param_2 + 0xa70);
  }
  FUN_00b1e084(param_2);
  return;
}




void FUN_00b1e084(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((*(float *)(param_1 + 0xab0) != 0.0) || (*(float *)(param_1 + 0xab4) != 0.0)) {
    *(undefined8 *)(param_1 + 0xab0) = 0;
    FUN_0091ada4(param_1 + 0xa70);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xa70) + 0x28))(param_1 + 0xa70,&local_50);
  lVar1 = param_1 + 0x288;
  fVar5 = *(float *)(param_1 + 0xabc) * 1000.0 * 0.3;
  if ((*(float *)(param_1 + 0x2c8) != 0.0) || (*(float *)(param_1 + 0x2cc) != fVar5)) {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(float *)(param_1 + 0x2cc) = fVar5;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x288) + 0x28))(lVar1,&local_50);
  lVar2 = param_1 + 0x8b8;
  fVar5 = (float)FUN_00f0a520(0x41f00000,lVar1,lVar2);
  fVar5 = fVar5 + *(float *)(param_1 + 0x2cc);
  if ((*(float *)(param_1 + 0x8f8) != *(float *)(param_1 + 0x2c8)) ||
     (*(float *)(param_1 + 0x8fc) != fVar5)) {
    *(float *)(param_1 + 0x8f8) = *(float *)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x8fc) = fVar5;
    FUN_0091ada4(lVar2);
  }
  local_50 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x8b8) + 0x28))(lVar2,&local_50);
  fVar5 = (float)FUN_00f0d4e0(param_1 + 0x788);
  FUN_00f07b18(0x80000000,param_1 + 0x3b8,2,lVar1,0);
  FUN_00f07b18(fVar5 * -0.5,param_1 + 0x3b8,4,lVar1,4);
  plVar3 = (long *)(param_1 + 0x198);
  if ((*(float *)(param_1 + 0x1d8) != *(float *)(param_1 + 0x2c8)) ||
     (*(float *)(param_1 + 0x1dc) != *(float *)(param_1 + 0x2cc))) {
    *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x2cc);
    FUN_0091ada4(plVar3);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1e284(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10c) =
       *(uint *)(param_1 + 0x10c) & 0xfffffff8 | *(uint *)(param_1 + 0x10c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00b1e298(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 local_6c;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  fVar7 = 29.0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar6 = (float)NEON_fminnm((float)param_2,0x41e80000);
  if (fVar6 <= -1.0) {
    fVar6 = -1.0;
  }
  iVar5 = (int)fVar6;
  iVar2 = FUN_00cb41f0(iVar5);
  iVar3 = FUN_00cb421c(iVar5);
  uVar4 = FUN_00cb439c(iVar5,1,0);
  FUN_00f0d75c(param_1 + 0x288,uVar4);
  fVar6 = (float)FUN_00f0d4e0(param_1 + 0x288);
  local_68 = CONCAT44(fVar7 * 8.0,fVar6 * 3.0);
  FUN_00f13f18(param_1 + 0x198,&local_68);
  FUN_00b1d77c(param_1 + 0x3b8,param_2);
  if (iVar5 < 0) {
    *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) & 0xfffffffb;
  }
  else {
    FUN_00e705c8(&local_68,"ERROR");
    local_6c = 0xff000000;
    if (iVar3 == 0) {
      uVar4 = FUN_00e6ce7c("SKILL_SUBTIER_BRONZE",0);
      FUN_00910394(&local_68,uVar4);
      local_6c = 0xff3f6fb5;
    }
    else if (iVar3 == 1) {
      uVar4 = FUN_00e6ce7c("SKILL_SUBTIER_SILVER",0);
      FUN_00910394(&local_68,uVar4);
      local_6c = 0xffc5c5c5;
    }
    else if (iVar3 == 2) {
      uVar4 = FUN_00e6ce7c("SKILL_SUBTIER_GOLD",0);
      FUN_00910394(&local_68,uVar4);
      local_6c = 0xff4fc1f1;
    }
    *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) | 4;
    FUN_00f0d7fc(param_1 + 0x788,&local_6c);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  *(int *)(param_1 + 0xb60) = iVar2;
  *(int *)(param_1 + 0xb64) = iVar3;
  if ((iVar2 != *(int *)(param_1 + 0xb68)) || (iVar3 != *(int *)(param_1 + 0xb6c))) {
    *(int *)(param_1 + 0xb68) = iVar2;
    *(int *)(param_1 + 0xb6c) = iVar3;
    FUN_00b1e4a0(param_1,iVar2,iVar3);
  }
  FUN_00b1e084(param_1);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b1e4a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0xa70;
  FUN_00f0e628(lVar1);
  FUN_00cb4780(local_70,param_2,param_3);
  pvVar2 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar2 = local_60;
  }
  FUN_00f0e548(lVar1,pvVar2,"background");
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_00f13f08(0x44c00000,0x44c00000,lVar1);
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3dcccccd,puVar5);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825100;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 != 0xffff) {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00b1e71c;
    }
  }
  puVar7 = (ushort *)0x0;
LAB_00b1e71c:
  FUN_00efddc4(0x3f800000,puVar7);
  FUN_00efcac4(0x3f800000,puVar7);
  FUN_00f02308(param_1,puVar5,puVar6,puVar7,0);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1e780(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0d75c(param_1 + 0x288);
  FUN_00f0d7fc(param_1 + 0x288,param_3);
  return;
}




void FUN_00b1e7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0d75c(param_1 + 0x8b8);
  FUN_00f0d7fc(param_1 + 0x8b8,param_3);
  return;
}




void FUN_00b1e7e0(float param_1,long param_2)

{
  FUN_00f0db64(param_1,0,0x3f800000,param_2 + 0x288);
  FUN_00f0db64(param_1 * 0.9,0,0x3f800000,param_2 + 0x8b8);
  return;
}




float FUN_00b1e834(long param_1)

{
  return *(float *)(param_1 + 0xab8) * 1000.0;
}




float FUN_00b1e850(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return fVar1 * *(float *)(param_1 + 9);
}




void FUN_00b1e884(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d8bf8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0d160(plVar2);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  uVar3 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x22c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  local_40[0] = 0xff473835;
  FUN_00f0e670(plVar1,local_40,2);
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 2;
  FUN_00b1e9b8(param_1);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1e9b8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (((DAT_03139d70 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_03139d70), iVar4 != 0)) {
    FUN_00e70510(&DAT_03139d60);
    __cxa_atexit(FUN_0090e338,&DAT_03139d60,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03139d70);
  }
  FUN_00e70e18(&DAT_03139d60,&DAT_01bb6d43,*(undefined4 *)(param_3 + 0x2d8));
  lVar1 = param_3 + 0x1a8;
  FUN_00f0d75c(lVar1,&DAT_03139d60);
  lVar2 = param_3 + 0xb8;
  local_40 = (float)FUN_00f0d4e0(lVar1);
  local_40 = local_40 + 10.0;
  fStack_3c = param_2 + 5.0;
  FUN_00f13f18(lVar2,&local_40);
  uVar5 = 0;
  FUN_00f07940(0,lVar2,8,lVar1,8);
  local_40 = (float)FUN_00f0e700(lVar2);
  fStack_3c = (float)uVar5;
  FUN_00f13f18(param_3,&local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1eae8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d8) = param_2;
  FUN_00b1e9b8();
  return;
}




void FUN_00b1eaf0(void *param_1)

{
  FUN_00ab3254();
  operator_delete(param_1);
  return;
}




void FUN_00b1eb14(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027dd618;
  FUN_00f0d3a4(param_1 + 0x3c4);
  FUN_00f0d3a4(param_1 + 0x39e);
  param_1[0x380] = &PTR_FUN_028266f0;
  param_1[0x397] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x39a);
  FUN_00f13d08(param_1 + 0x380);
  param_1[0x362] = &PTR_FUN_028266f0;
  param_1[0x379] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37c);
  FUN_00f13d08(param_1 + 0x362);
  FUN_00f01868(param_1 + 0x351);
  FUN_00f0d3a4(param_1 + 0x32b);
  FUN_00f0d3a4(param_1 + 0x305);
  FUN_00f0d3a4(param_1 + 0x2df);
  puVar1 = param_1 + 0x2c1;
  lVar2 = -0x2d0;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00ab0d88(param_1 + 0x22);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b1ec34(void *param_1)

{
  FUN_00b1eb14();
  operator_delete(param_1);
  return;
}




void FUN_00b1ec58(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027dd960;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x28;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x39;
  param_1[0x28] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x5f;
  FUN_00b25254(plVar4);
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(byte *)((long)param_1 + 0x45c) = param_2 & 1;
  *(undefined1 *)((long)param_1 + 0x45d) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  uVar8 = FUN_0092ea9c();
  local_68 = 0x3f0000003f800000;
  (**(code **)(param_1[0x28] + 0x28))(plVar2,&local_68);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d92c(plVar3,*ppuVar5,&DAT_01bee7fa);
  uVar7 = *(uint *)((long)param_1 + 0x24c);
  if ((uVar7 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x24c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x7900;
    FUN_0091ada4(plVar3);
  }
  uVar11 = 0;
  if (*(char *)((long)param_1 + 0x45c) != '\0') {
    uVar11 = 3;
  }
  FUN_00f0dac8(plVar3,uVar11);
  FUN_00cb488c(&local_68,*(undefined1 *)((long)param_1 + 0x45c),0,0);
  FUN_00f0d75c(plVar3,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_60 = (void *)0x0;
  }
  local_68 = 0x3f0000003f800000;
  (**(code **)(param_1[0x39] + 0x28))(plVar3,&local_68);
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar8 & 1) == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d92c(plVar4,*ppuVar5,&DAT_01bee7fa);
  uVar7 = *(uint *)((long)param_1 + 0x37c);
  if ((uVar7 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x37c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar4);
  }
  uVar11 = 0;
  if (*(char *)((long)param_1 + 0x45c) != '\0') {
    uVar11 = 3;
  }
  FUN_00f0dac8(plVar4,uVar11);
  local_68 = 0x3f0000003f800000;
  (**(code **)(param_1[0x5f] + 0x28))(plVar4,&local_68);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 0x10;
  if ((*(float *)(param_1 + 0x1b) != 1.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f800000;
    FUN_0091ada4(plVar1);
  }
  FUN_009580b8();
  uVar7 = FUN_00961c7c();
  if (uVar7 < 0x20) {
    FUN_009580b8();
    lVar9 = FUN_00961ccc();
    if (lVar9 < 1) {
      uVar10 = FUN_00e6ce7c("FRONTEND_SEASON_EXPIRED_LABEL",0);
      thunk_FUN_00e7051c(&local_68,uVar10);
      FUN_00e705c8(&local_78,"[SEASON_NAME_NEXT]");
      FUN_00cb4920(&local_88,*(undefined1 *)((long)param_1 + 0x45c),0,0);
      FUN_00e71248(&local_68,0,&local_78,&local_88);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      FUN_00e705c8(&local_78,"get ready for stuff in winter 2016");
      FUN_00f0d75c(plVar4,&local_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
    }
    else {
      uVar10 = FUN_00e6ce7c("FRONTEND_COMPETITIVE_SEASON_DAYS_REMAINING",0);
      FUN_00b252ac(plVar4,uVar10,1,0);
      FUN_009580b8();
      local_68 = FUN_00961ccc();
      FUN_00b25438(plVar4,&local_68);
      *(undefined1 *)((long)param_1 + 0x45d) = 0;
    }
  }
  else {
    lVar9 = FUN_00940b98();
    FUN_00cb496c(&local_68,*(undefined4 *)(lVar9 + 0x10),*(undefined1 *)((long)param_1 + 0x45c));
    FUN_00b252ac(plVar4,&local_68,0,0);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    *(undefined1 *)((long)param_1 + 0x45d) = 1;
  }
  FUN_00b1f060(param_1);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

