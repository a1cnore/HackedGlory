// functions/00c63 — 25 functions
#include "libGameKindred.h"




void * FUN_00c63094(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x538);
  FUN_00ca4c64();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c630fc(long *param_1,int param_2)

{
  FUN_00f1515c(param_1[0x36],param_1 + 0x38,1,9);
  FUN_00f15198(param_1[0x36],10);
  if (param_2 < 1) {
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x67e,1);
    FUN_00f1515c(param_1[0x36],param_1 + 0x67e,0,6);
    FUN_00f15198(param_1[0x37],0x28);
    FUN_00ed5664(param_1 + 0x38,param_1 + 0x1a4,1);
    FUN_00f1515c(param_1[0x37],param_1 + 0x1a4,1,9);
  }
  else {
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1ca,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1f0,1);
    FUN_00f1515c(param_1[0x36],param_1 + 0x1ca,0,6);
    FUN_00f1515c(param_1[0x36],param_1 + 0x1f0,0,6);
    FUN_00f1521c(param_1[0x37],0,1);
  }
  FUN_00f15198(param_1[0x36],0x28);
  return;
}




void FUN_00c63234(long param_1,int param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0xe50;
  if (param_2 < param_3) {
    uVar4 = FUN_00e6ce7c("MENU_TALENTS_TEXT_UPGRADE",0);
    FUN_00f0d75c(lVar1,uVar4);
    if ((~*(uint *)(param_1 + 0xed4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0xed4) = *(uint *)(param_1 + 0xed4) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    FUN_00f0d7fc(lVar1,&DAT_01bbe0f8);
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00e6ce7c("MENU_TALENTS_TEXT_UPGRADE_AVAILABLE",0);
    FUN_00f0d75c(lVar1,uVar4);
    uVar2 = *(uint *)(param_1 + 0xed4);
    if ((uVar2 & 0x7f80) != 0x6600) {
      *(uint *)(param_1 + 0xed4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
      FUN_0091ada4(lVar1);
    }
    FUN_00f0d7fc(lVar1,&DAT_01bbe0f4);
    uVar4 = 2;
  }
  FUN_00ab71fc(param_1 + 0xf80,uVar4);
  FUN_00e70510(&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,param_4);
  FUN_00ab7498(param_1 + 0xf80,&local_58);
  FUN_00b09454(param_1 + 0xf80,param_3 <= param_2);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c633ac(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x49b1) = param_2 & 1;
  FUN_00c633bc();
  return;
}




void FUN_00c633bc(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0093dbe8();
  uVar2 = 0;
  if (((uVar1 & 1) == 0) && (uVar2 = 0, *(char *)(param_1 + 0x49b0) != '\0')) {
    uVar2 = ((uint)*(byte *)(param_1 + 0x49b1) << 2 ^ 4) & 0xfc;
  }
  *(uint *)(param_1 + 0xed4) = *(uint *)(param_1 + 0xed4) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x1004) = *(uint *)(param_1 + 0x1004) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x3474) = *(uint *)(param_1 + 0x3474) & 0xfffffffb | uVar2;
  return;
}




void FUN_00c63434(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = FUN_0093dbe8();
  *(byte *)(param_1 + 0x49b0) = param_2 & (bVar1 ^ 0xff) & 1;
  FUN_00c633bc(param_1);
  return;
}




void FUN_00c6346c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_1 + 0xf80;
  bVar2 = (param_2 & 1) == 0;
  if (bVar2) {
    FUN_00ab7570(0x3f666666,lVar1,&DAT_01bbe0f0);
    FUN_00ab7588(0x3f666666,lVar1,&DAT_01bbe0f0);
  }
  else {
    FUN_00ab7570(0x3f666666,lVar1,&DAT_01bbe0ec);
    FUN_00ab7588(0x3f666666,lVar1,&DAT_01bbe0ec);
  }
  *(bool *)(param_1 + 0x253a) = !bVar2;
  return;
}




void FUN_00c6350c(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c6351c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c63524(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c63534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c6353c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff1b0;
  FUN_009c7fa8(param_1 + 0x67e);
  FUN_00abbb28(param_1 + 0x1f0);
  FUN_00f0d3a4(param_1 + 0x1ca);
  FUN_00f0d3a4(param_1 + 0x1a4);
  FUN_00f0d3a4(param_1 + 0x17d);
  thunk_FUN_00ed5534(param_1 + 0x38);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c635cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff1b0;
  FUN_009c7fa8(param_1 + 0x67e);
  param_1[0x1f0] = &PTR_FUN_027d51f0;
  param_1[0x65f] = &PTR_FUN_028266f0;
  param_1[0x676] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x679);
  FUN_00f13d08(param_1 + 0x65f);
  param_1[0x641] = &PTR_FUN_028266f0;
  param_1[0x658] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x65b);
  FUN_00f13d08(param_1 + 0x641);
  FUN_00f0d3a4(param_1 + 0x61b);
  param_1[0x5fd] = &PTR_FUN_028266f0;
  param_1[0x614] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x617);
  FUN_00f13d08(param_1 + 0x5fd);
  FUN_00f01868(param_1 + 0x5ec);
  param_1[0x5ce] = &PTR_FUN_028266f0;
  param_1[0x5e5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e8);
  FUN_00f13d08(param_1 + 0x5ce);
  param_1[0x1f0] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x597);
  FUN_00f01868(param_1 + 0x586);
  FUN_00f13d08(param_1 + 0x552);
  FUN_00f01868(param_1 + 0x541);
  FUN_00f0d3a4(param_1 + 0x51b);
  FUN_00f0d3a4(param_1 + 0x4f5);
  param_1[0x4d7] = &PTR_FUN_028266f0;
  param_1[0x4ee] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f1);
  FUN_00f13d08(param_1 + 0x4d7);
  param_1[0x4b9] = &PTR_FUN_028266f0;
  param_1[0x4d0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4d3);
  FUN_00f13d08(param_1 + 0x4b9);
  FUN_00f01868(param_1 + 0x4a8);
  FUN_009c7fa8(param_1 + 0x1f0);
  FUN_00f0d3a4(param_1 + 0x1ca);
  FUN_00f0d3a4(param_1 + 0x1a4);
  FUN_00f0d3a4(param_1 + 0x17d);
  thunk_FUN_00ed5534(param_1 + 0x38);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c637dc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027ff2f8;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x2b;
  param_1[0x1a] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar2);
  *(undefined4 *)(param_1 + 0x51) = 0x447a0000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  uVar3 = FUN_00e6ce7c("MENU_SKINS_GRID_PAGE_ABOUT_TALENTS",0);
  FUN_00f0d75c(plVar2,uVar3);
  return;
}




void FUN_00c6388c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ff2f8;
  FUN_00c638e0();
  FUN_00f0d3a4(param_1 + 0x2b);
  FUN_00f01868(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c638e0(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 200) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
        uVar2 = *(uint *)(param_1 + 0xc0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}




void FUN_00c6393c(void *param_1)

{
  FUN_00c6388c();
  operator_delete(param_1);
  return;
}




void FUN_00c63960(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x288) = param_1;
  return;
}




void FUN_00c63968(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x28);
  FUN_00bf0d58();
  local_40 = pvVar2;
  FUN_00bf0e30(pvVar2,param_2);
  FUN_00f023ec(param_1 + 0xd0,*(undefined8 *)((long)pvVar2 + 8),1);
  FUN_00c639f4(param_1 + 0xc0,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c639f4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c63d7c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00c63a7c(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar7;
  uint uVar8;
  long lVar6;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    plVar4 = *(long **)(param_1 + 200);
    lVar2 = *plVar4;
    uVar8 = 0;
    lVar5 = *plVar4;
    while( true ) {
      lVar6 = lVar2;
      plVar4 = plVar4 + 1;
      uVar7 = *(undefined8 *)(lVar5 + 8);
      iVar3 = FUN_00bf0f80(lVar6);
      uVar1 = iVar3 - 0x61;
      if ((0x19 < uVar1) && (uVar1 = iVar3 - 0x41, 0x19 < uVar1)) {
        uVar1 = 0xffffffff;
      }
      if (param_2 <= uVar1) {
        if (param_2 - uVar8 <= uVar1 - param_2) {
          return uVar7;
        }
        return *(undefined8 *)(lVar6 + 8);
      }
      if (plVar4 == (long *)(*(long *)(param_1 + 200) + (ulong)*(uint *)(param_1 + 0xc0) * 8))
      break;
      lVar2 = *plVar4;
      uVar8 = uVar1;
      lVar5 = lVar6;
    }
  }
  return 0;
}




void FUN_00c63b34(long param_1,uint param_2)

{
  ulong uVar1;
  
  (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),param_2 & 1);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar1 = 0;
    do {
      FUN_00bf1000(*(undefined8 *)(*(long *)(param_1 + 200) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0xc0));
  }
  return;
}




void FUN_00c63b8c(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c63b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))(*(long **)(param_1 + 0xb8),param_2 & 1);
  return;
}




void FUN_00c63ba0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  if ((uVar3 & 1) == 0) {
    FUN_00f00298(&local_5c,&local_60);
  }
  else {
    local_5c = (**(code **)(*param_3 + 0x48))(param_3);
    (**(code **)(*param_3 + 0x48))(param_3);
    local_60 = param_2;
  }
  FUN_00f13f08((int)param_3[0x51],param_3);
  plVar6 = param_3 + 0x2b;
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar1 = *(uint *)((long)param_3 + 0x1dc);
  if ((uVar1 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_3 + 0x1dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5280;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0dac8(plVar6,3);
  FUN_00f0dad0(*(float *)(param_3 + 0x51) + -200.0,plVar6,1);
  FUN_00f07940(0,0x428c0000,plVar6,8,param_3,4);
  if ((int)param_3[0x18] != 0) {
    uVar3 = 0;
    do {
      lVar8 = *(long *)(param_3[0x19] + uVar3 * 8);
      local_68 = (undefined4)param_3[0x51];
      uStack_64 = 0x442f0000;
      FUN_00f13f18(*(undefined8 *)(lVar8 + 8),&local_68);
      (**(code **)(**(long **)(lVar8 + 8) + 0x138))();
      if (uVar3 == 0) {
        uVar4 = *(undefined8 *)(lVar8 + 8);
        uVar5 = 0;
        uVar7 = 0;
        plVar6 = param_3 + 0x1a;
        uVar9 = 0x430c0000;
      }
      else {
        uVar4 = *(undefined8 *)(lVar8 + 8);
        uVar5 = 4;
        uVar7 = 6;
        plVar6 = *(long **)(*(long *)(param_3[0x19] + (ulong)((int)uVar3 - 1) * 8) + 8);
        uVar9 = 0;
      }
      FUN_00f07940(0,uVar9,uVar4,uVar5,plVar6,uVar7);
      FUN_00c64420(*(undefined8 *)(lVar8 + 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_3 + 0x18));
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c63d7c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c63dfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_60 [2];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00f0ac5c();
  param_1[0x29] = 0;
  *param_1 = &PTR_FUN_027ff458;
  FUN_00f0e4a8(param_1 + 0x2a);
  puVar1 = param_1 + 0x48;
  FUN_00f0c714(puVar1);
  puVar2 = param_1 + 99;
  FUN_00f0e4a8(puVar2);
  puVar3 = param_1 + 0x81;
  FUN_00f0f5dc(puVar3);
  puVar4 = param_1 + 0xa2;
  FUN_00f0d160(puVar4);
  FUN_00f0ac5c(param_1 + 200);
  *(undefined1 *)((long)param_1 + 0x79a) = 0;
  *(undefined2 *)(param_1 + 0xf3) = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  FUN_00f0ad94(param_1,puVar3,1);
  FUN_00f023ec(puVar3,puVar2,1);
  FUN_00f0ad94(param_1,puVar4,1);
  FUN_00f0ad94(param_1,puVar1,1);
  FUN_00f0ad94(param_1,param_1 + 0x2a,1);
  FUN_00f0ad94(param_1,param_1 + 200,1);
  FUN_00f0c774(puVar1,&DAT_01bee7f6);
  uVar5 = *(uint *)((long)param_1 + 0x2c4);
  if ((uVar5 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x2c4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5280;
    FUN_0091ada4(puVar1);
  }
  *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) & 0xfffffffb;
  FUN_00f0e548(puVar2,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_standard");
  local_60[0] = 0xffb6acaa;
  FUN_00f0d92c(puVar4,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,local_60);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c63fb0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027ff458;
  FUN_00c64104();
  uVar2 = FUN_00cae8f0();
  FUN_008fa54c(local_60,uVar2);
  FUN_00affa44(local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((void *)param_1[0xf2] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf2]);
    param_1[0xf2] = 0;
    param_1[0xf1] = 0;
  }
  param_1[200] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xdf);
  FUN_00f13d08(param_1 + 200);
  FUN_00f0d3a4(param_1 + 0xa2);
  param_1[0x81] = &PTR_FUN_028266f0;
  param_1[0x98] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9b);
  FUN_00f13d08(param_1 + 0x81);
  param_1[99] = &PTR_FUN_028266f0;
  param_1[0x7a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7d);
  FUN_00f13d08(param_1 + 99);
  FUN_00f13d08(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_028266f0;
  param_1[0x41] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2a);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

