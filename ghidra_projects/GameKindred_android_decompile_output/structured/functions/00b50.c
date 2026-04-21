// functions/00b50 — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00b50d64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuStack_148;
  undefined1 auStack_140 [40];
  long lStack_118;
  undefined8 uStack_f8;
  void *pvStack_f0;
  byte bStack_e8;
  void *pvStack_d8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a0;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  ulong uStack_90;
  void *pvStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  void *pvStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_94,auStack_98);
  FUN_00b26098(&ppuStack_148);
  uVar2 = FUN_00e6ce7c("MENU_LPQ_MATCHES_REMAINING_TOOLTIP_TITLE",0);
  thunk_FUN_00e7051c(&uStack_90,uVar2);
  FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
  uStack_68 = 0;
  uStack_64 = 0x41a00000;
  FUN_009c82b4(auStack_140,&uStack_90);
  if ((bStack_80 & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_LPQ_MATCHES_REMAINING_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_90,uVar2);
  FUN_008fcdb8(&bStack_80,&DAT_0320ffa8);
  uStack_68 = 1;
  uStack_64 = 0x41a00000;
  FUN_009c82b4(auStack_140,&uStack_90);
  if ((bStack_80 & 1) != 0) {
    operator_delete(pvStack_70);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  lStack_118 = param_1 + 0xee8;
  uStack_a0 = 1;
  uStack_b8 = 0x3f19999a;
  uVar3 = FUN_0092ea9c();
  uStack_b4 = 0x44af0000;
  if ((uVar3 & 1) == 0) {
    uStack_b4 = 0x44a8c000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&uStack_90,"lowPriorityQueueInfo");
  FUN_009badc0(uVar2,&uStack_90,&ppuStack_148);
  if ((uStack_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,bStack_80));
  }
  ppuStack_148 = &PTR_FUN_027de7f0;
  if ((bStack_e8 & 1) != 0) {
    operator_delete(pvStack_d8);
  }
  if (pvStack_f0 != (void *)0x0) {
    operator_delete__(pvStack_f0);
    uStack_f8 = 0;
    pvStack_f0 = (void *)0x0;
  }
  FUN_009c8464(auStack_140,1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b50d14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x3518);
  if ((0 < lVar3) && (lVar1 = FUN_00e85318(0), lVar1 <= lVar3)) {
    uVar2 = FUN_009580b8();
    FUN_009606dc(uVar2,1);
    FUN_0090c348(*(undefined4 *)(param_1 + 0x3520));
  }
  FUN_00b500b8(param_1);
  return;
}




void FUN_00b500b8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f01980(param_1 + 0x180);
  uVar2 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  FUN_00b4f9d8(param_1);
  *(undefined4 *)(param_1 + 0x3528) = 0;
  *(undefined8 *)(param_1 + 0x3520) = 0;
  *(undefined8 *)(param_1 + 0x3518) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3510) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00b50150(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar4 = 1.0;
  if ((0 < *(long *)(param_1 + 0x3510)) &&
     (lVar3 = *(long *)(param_1 + 0x3518), lVar2 = FUN_00e85318(0), lVar2 < lVar3)) {
    local_40 = 0.0;
    FUN_00e85318(&local_40);
    fVar4 = (float)NEON_fminnm(1.0 - (float)(((double)*(long *)(param_1 + 0x3518) - local_40) /
                                            (double)*(long *)(param_1 + 0x3510)),0x3f800000);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5020c(long param_1)

{
  FUN_00b4f9d8();
  *(undefined8 *)(param_1 + 0x3520) = 0;
  *(undefined4 *)(param_1 + 0x3528) = 0;
  *(undefined8 *)(param_1 + 0x3518) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3510) = 0;
  return;
}




void FUN_00b50244(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_88;
  float local_84;
  undefined8 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00f00298(&local_84,&local_88);
  FUN_00f13f08(local_84,local_88,param_1 + 200);
  lVar2 = param_1 + 0x180;
  if ((*(float *)(param_1 + 0x1c0) != local_84 * 0.5) || (*(float *)(param_1 + 0x1c4) != 0.0)) {
    *(float *)(param_1 + 0x1c0) = local_84 * 0.5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(lVar2,&local_80);
  FUN_00f13f08(*(float *)(param_1 + 0x3508) + *(float *)(param_1 + 0x3508),local_88,lVar2);
  lVar2 = param_1 + 800;
  fVar9 = *(float *)(param_1 + 0x3508) * 1.2;
  FUN_00f13f08(fVar9,local_88,lVar2);
  if ((*(float *)(param_1 + 0x360) != 0.0) || (*(float *)(param_1 + 0x364) != 0.0)) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 800) + 0x28))(lVar2,&local_80);
  if ((*(float *)(param_1 + 0x540) != fVar9 * -0.5) || (*(float *)(param_1 + 0x544) != 0.0)) {
    *(float *)(param_1 + 0x540) = fVar9 * -0.5;
    *(undefined4 *)(param_1 + 0x544) = 0;
    FUN_0091ada4(param_1 + 0x500);
  }
  local_80 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x500) + 0x28))(param_1 + 0x500,&local_80);
  fVar7 = *(float *)(param_1 + 0x450);
  if ((fVar7 != fVar9 * 0.5) || (fVar7 = *(float *)(param_1 + 0x454), fVar7 != 0.0)) {
    *(float *)(param_1 + 0x450) = fVar9 * 0.5;
    *(undefined4 *)(param_1 + 0x454) = 0;
    FUN_0091ada4(param_1 + 0x410);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_1 + 0x410) + 0x28))(param_1 + 0x410,&local_80);
  FUN_00f0eac0(param_1 + 0x1600);
  fVar9 = fVar7 * 0.5 + 2.0;
  if ((*(float *)(param_1 + 0x1830) != 0.0) || (*(float *)(param_1 + 0x1834) != fVar9)) {
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(float *)(param_1 + 0x1834) = fVar9;
    FUN_0091ada4(param_1 + 0x17f0);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x17f0) + 0x28))(param_1 + 0x17f0,&local_80);
  lVar3 = param_1 + 0x1920;
  fVar9 = 0.0;
  FUN_00f0db64(*(float *)(param_1 + 0x3508) + -12.0,0,0x3f800000,lVar3);
  if ((*(float *)(param_1 + 0x1960) != 0.0) || (*(float *)(param_1 + 0x1964) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1960) = 0;
    FUN_0091ada4(lVar3);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1920) + 0x28))(lVar3,&local_80);
  FUN_00f01c20(lVar3);
  fVar9 = fVar9 + 10.0 + 0.0;
  lVar3 = param_1 + 0xdb8;
  if ((*(float *)(param_1 + 0xdf8) != 0.0) || (*(float *)(param_1 + 0xdfc) != fVar9)) {
    *(undefined4 *)(param_1 + 0xdf8) = 0;
    *(float *)(param_1 + 0xdfc) = fVar9;
    FUN_0091ada4(lVar3);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0xdb8) + 0x28))(lVar3,&local_80);
  fVar7 = (float)FUN_00f0eac0(lVar2);
  lVar2 = param_1 + 0xee8;
  fVar6 = (float)FUN_00f01c20(lVar2);
  fVar8 = 0.0;
  FUN_00f0db64((fVar7 - (fVar6 + fVar6)) + -48.0,0,0x3f800000,lVar3);
  fVar7 = (float)FUN_00f01c20(lVar3);
  fVar6 = (float)FUN_00f01c20(lVar2);
  fVar10 = *(float *)(param_1 + 0xdfc);
  fVar7 = fVar7 * 0.5 + fVar6 * 0.5 + 24.0;
  FUN_00f01c20(lVar3);
  fVar8 = fVar8 * 0.5;
  fVar10 = fVar10 + fVar8;
  if ((*(float *)(param_1 + 0xf28) != fVar7) ||
     (fVar8 = *(float *)(param_1 + 0xf2c), fVar8 != fVar10)) {
    *(float *)(param_1 + 0xf28) = fVar7;
    *(float *)(param_1 + 0xf2c) = fVar10;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xee8) + 0x28))(lVar2,&local_80);
  FUN_00f0d4e0(lVar3);
  lVar2 = param_1 + 0x14e0;
  fVar9 = fVar9 + fVar8 + 6.0;
  FUN_00f01c54(lVar2,0,0,1,1);
  fVar8 = fVar8 * 0.5;
  fVar7 = fVar9 + fVar8;
  if ((*(float *)(param_1 + 0x1520) != 0.0) ||
     (fVar8 = *(float *)(param_1 + 0x1524), fVar8 != fVar7)) {
    *(undefined4 *)(param_1 + 0x1520) = 0;
    *(float *)(param_1 + 0x1524) = fVar7;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x14e0) + 0x28))(lVar2,&local_80);
  FUN_00f01c54(lVar2,0,0,1,1);
  lVar2 = param_1 + 0x1578;
  fVar9 = fVar9 + fVar8 + 12.0;
  FUN_00f01c54(lVar2,0,0,1,1);
  fVar8 = fVar8 * 0.5;
  fVar7 = fVar9 + fVar8;
  if ((*(float *)(param_1 + 0x15b8) != 0.0) ||
     (fVar8 = *(float *)(param_1 + 0x15bc), fVar8 != fVar7)) {
    *(undefined4 *)(param_1 + 0x15b8) = 0;
    *(float *)(param_1 + 0x15bc) = fVar7;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1578) + 0x28))(lVar2,&local_80);
  FUN_00f01c54(lVar2,0,0,1,1);
  fVar9 = fVar9 + fVar8 + 30.0;
  lVar2 = param_1 + 0x1a50;
  if ((*(float *)(param_1 + 0x1a90) != 0.0) || (*(float *)(param_1 + 0x1a94) != fVar9)) {
    *(undefined4 *)(param_1 + 0x1a90) = 0;
    *(float *)(param_1 + 0x1a94) = fVar9;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1a50) + 0x28))(lVar2,&local_80);
  FUN_00f0d548(lVar2);
  fVar9 = fVar9 + fVar8 + 16.0;
  lVar2 = param_1 + 0x1b80;
  if ((*(float *)(param_1 + 0x1bc0) != 0.0) || (*(float *)(param_1 + 0x1bc4) != fVar9)) {
    *(undefined4 *)(param_1 + 0x1bc0) = 0;
    *(float *)(param_1 + 0x1bc4) = fVar9;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1b80) + 0x28))(lVar2,&local_80);
  FUN_00f0d548(lVar2);
  fVar9 = fVar9 + fVar8 + 24.0;
  if ((*(byte *)(param_1 + 0x1d34) >> 2 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x1cb0);
    if ((*(float *)(param_1 + 0x1cf0) != 0.0) || (*(float *)(param_1 + 0x1cf4) != fVar9)) {
      *(undefined4 *)(param_1 + 0x1cf0) = 0;
      *(float *)(param_1 + 0x1cf4) = fVar9;
      FUN_0091ada4(plVar4);
    }
    local_80 = 0x3f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_80);
    FUN_00f0d548(plVar4);
    fVar9 = fVar9 + fVar8 + 24.0;
  }
  lVar2 = param_1 + 0x1de0;
  if ((*(float *)(param_1 + 0x1e20) != 0.0) || (*(float *)(param_1 + 0x1e24) != fVar9)) {
    *(undefined4 *)(param_1 + 0x1e20) = 0;
    *(float *)(param_1 + 0x1e24) = fVar9;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1de0) + 0x28))(lVar2,&local_80);
  FUN_00f0d548(lVar2);
  fVar9 = local_88;
  plVar4 = (long *)(param_1 + 0x1f10);
  FUN_00f13e54(plVar4);
  FUN_00f13f08(local_84,(fVar9 - fVar8) + -120.0,param_1 + 0x5f0);
  lVar2 = param_1 + 0x790;
  FUN_00ed0418(lVar2,1);
  fVar9 = (float)FUN_00ed0464(lVar2);
  fVar7 = 0.0;
  FUN_00ed0578(100.0 - fVar9 * 0.5,lVar2);
  FUN_00ed0464(lVar2);
  fVar9 = fVar7;
  FUN_00f13e54(param_1 + 0x5f0);
  bVar1 = fVar9 < fVar7;
  FUN_00ed06a4(lVar2,bVar1);
  FUN_00ed04d8(lVar2,0,bVar1);
  FUN_00f13e54(plVar4);
  fVar9 = (local_88 - fVar9 * 0.5) + -50.0;
  if ((*(float *)(param_1 + 0x1f50) != 0.0) || (*(float *)(param_1 + 0x1f54) != fVar9)) {
    *(undefined4 *)(param_1 + 0x1f50) = 0;
    *(float *)(param_1 + 0x1f54) = fVar9;
    FUN_0091ada4(plVar4);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_80);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b509ac(undefined8 param_1,uint param_2)

{
  FUN_00b509b4(param_1,param_2 & 1);
  return;
}




void FUN_00b509b4(long param_1,ulong param_2)

{
  long lVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  char *__s2;
  char *pcVar7;
  ushort uVar8;
  long lVar9;
  void *__s1;
  ushort *puVar10;
  uint local_68;
  undefined4 uStack_64;
  void *local_58;
  undefined4 local_50;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(auStack_4c,&local_50);
  lVar1 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efe8d0(puVar10);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar10);
  lVar1 = param_1 + 0x180;
  if ((param_2 & 1) == 0) {
    local_68 = 0;
    uStack_64 = local_50;
    FUN_00efe91c(puVar10,lVar1,&local_68);
    FUN_00efcb24(puVar10,FUN_0091aa80);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,puVar10);
    uVar6 = FUN_009b8d90();
    FUN_008fa54c(&local_68,"lowPriorityQueueInfo");
    FUN_009badcc(uVar6,&local_68);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    goto LAB_00b50ce8;
  }
  local_68 = *(uint *)(param_1 + 0x3508);
  uStack_64 = local_50;
  FUN_00efe91c(puVar10,lVar1,&local_68);
  FUN_00efcb24(puVar10,FUN_00a269a4);
  FUN_00f13f08(0,local_50,lVar1);
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,puVar10);
  bVar3 = *(byte *)(param_1 + 0x34e0);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x34e8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x34f0);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x34e1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(param_1 + 0x34e1);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar7 != *__s2) goto LAB_00b50be8;
          pcVar7 = pcVar7 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00b50ce8;
    }
    if ((__n == 0) || (iVar5 = memcmp(__s1,__s2,__n), iVar5 == 0)) goto LAB_00b50ce8;
  }
LAB_00b50be8:
  uVar6 = FUN_00efed6c(0);
  FUN_00f022a0(lVar1,uVar6);
  lVar9 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efc8e8(puVar10);
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x14] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    *(undefined ***)puVar10 = &PTR_FUN_027d0db0;
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  if ((*(byte *)(param_1 + 0x34e0) & 1) == 0) {
    param_1 = param_1 + 0x34e1;
  }
  else {
    param_1 = *(long *)(param_1 + 0x34f0);
  }
  FUN_008fa54c(&local_68,param_1);
  FUN_00a99c48(puVar10,&local_68,0,0);
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00f022a0(lVar1,puVar10);
LAB_00b50ce8:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b50d14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x3518);
  if ((0 < lVar3) && (lVar1 = FUN_00e85318(0), lVar1 <= lVar3)) {
    uVar2 = FUN_009580b8();
    FUN_009606dc(uVar2,1);
    FUN_0090c348(*(undefined4 *)(param_1 + 0x3520));
  }
  FUN_00b500b8(param_1);
  return;
}




void FUN_00b50d64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_148;
  undefined1 auStack_140 [40];
  long local_118;
  undefined8 local_f8;
  void *local_f0;
  byte local_e8;
  void *local_d8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a0;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_94,auStack_98);
  FUN_00b26098(&local_148);
  uVar2 = FUN_00e6ce7c("MENU_LPQ_MATCHES_REMAINING_TOOLTIP_TITLE",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 0;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_140,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_LPQ_MATCHES_REMAINING_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  local_68 = 1;
  local_64 = 0x41a00000;
  FUN_009c82b4(auStack_140,&local_90);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  local_118 = param_1 + 0xee8;
  local_a0 = 1;
  local_b8 = 0x3f19999a;
  uVar3 = FUN_0092ea9c();
  local_b4 = 0x44af0000;
  if ((uVar3 & 1) == 0) {
    local_b4 = 0x44a8c000;
  }
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(&local_90,"lowPriorityQueueInfo");
  FUN_009badc0(uVar2,&local_90,&local_148);
  if ((local_90 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_7f,local_80));
  }
  local_148 = &PTR_FUN_027de7f0;
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (void *)0x0;
  }
  FUN_009c8464(auStack_140,1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b50f60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e2850;
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b50fe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e2850;
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}

