// functions/00bff — 29 functions
#include "libGameKindred.h"




void FUN_00bff048(long param_1,int param_2,float *param_3)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  void *local_90;
  code *local_88;
  long lStack_80;
  void *local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pvVar4 = operator_new(0x840);
  FUN_00a7208c(pvVar4,1);
  *(int *)((long)pvVar4 + 0x838) = param_2;
  local_90 = pvVar4;
  lVar5 = FUN_00920bec(param_2,*(undefined8 *)(param_1 + 0x4a0));
  if (lVar5 != 0) {
    if (param_2 == 0xc) {
      FUN_00f0e5bc((long)pvVar4 + 0x4d8,PTR_s_build___HUDParts_CandyShop_tga_02be34a0,lVar5);
    }
    else {
      FUN_00cac438(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x4a0) + 8));
      pvVar1 = (void *)((ulong)&local_88 | 1);
      if (((ulong)local_88 & 1) != 0) {
        pvVar1 = local_78;
      }
      FUN_00f0e5bc((long)pvVar4 + 0x4d8,pvVar1,lVar5);
      pvVar4 = local_90;
      if (((byte)local_88 & 1) != 0) {
        operator_delete(local_78);
        pvVar4 = local_90;
      }
    }
    if ((*(float *)((long)pvVar4 + 0x520) != *param_3) ||
       (*(float *)((long)pvVar4 + 0x524) != param_3[1])) {
      *(undefined8 *)((long)pvVar4 + 0x520) = *(undefined8 *)param_3;
      FUN_0091ada4((long)pvVar4 + 0x4d8);
      pvVar4 = local_90;
    }
  }
  FUN_00abb1c8(0,pvVar4,&DAT_01bee7f6);
  FUN_00b09144(0,pvVar4);
  FUN_00abb250(pvVar4,1);
  uVar2 = *(uint *)((long)pvVar4 + 0x84);
  uVar6 = 0xff;
  if (param_2 != 0xc) {
    uVar6 = 0xbf;
  }
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)((long)pvVar4 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar6 << 7;
    FUN_0091ada4(pvVar4);
    pvVar4 = local_90;
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x1e8);
  lVar5 = (long)pvVar4 + 8;
  local_60 = DAT_03210f5c;
  local_88 = FUN_00bff484;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar7;
  FUN_009693a0(lVar5,&local_88);
  local_88 = FUN_00bff484;
  local_60 = DAT_03210f88;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar7;
  FUN_009693a0(lVar5,&local_88);
  local_60 = DAT_03210f60;
  local_88 = FUN_00bff48c;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar7;
  FUN_009693a0(lVar5,&local_88);
  local_88 = FUN_00bff48c;
  local_60 = DAT_03210f8c;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar7;
  FUN_009693a0(lVar5,&local_88);
  FUN_00f023ec(param_1 + 0x160,pvVar4,1);
  FUN_00bff494(param_1 + 0x1e8,&local_90);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bff2b8(void)

{
  return;
}




void FUN_00bff2d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (1 < *(uint *)(param_1 + 0x1e8)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1f0) + 8);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      FUN_00f07b18(0x425c0000,uVar2,3,uVar1,1);
      FUN_00f07b18(0,uVar2,5,uVar1,5);
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)
                       (*(long *)(param_1 + 0x1f0) + (ulong)*(uint *)(param_1 + 0x1e8) * 8));
  }
  FUN_00f13238(param_1);
  return;
}




void FUN_00bff36c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = param_1 + 0x280;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xffffffbf;
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    uVar4 = 0xc2200000;
    uVar2 = 1;
    uVar3 = 3;
  }
  else {
    uVar4 = 0x42200000;
    uVar2 = 3;
    uVar3 = 1;
  }
  FUN_00f07b18(uVar4,lVar1,uVar2,param_1,uVar3);
  FUN_00f07b18(0,lVar1,5,param_1,5);
  FUN_00f07b18(0x40c00000,param_1 + 0x370,0,lVar1,2);
  FUN_00f07b18(0,param_1 + 0x370,4,lVar1,4);
  return;
}




void FUN_00bff418(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x1e8);
  if (*(uint *)(param_1 + 0x1e8) != 0) {
    plVar2 = *(long **)(param_1 + 0x1f0);
    plVar3 = plVar2;
    do {
      if (*(int *)(*plVar3 + 0x838) == param_2) {
        FUN_00b09454(*plVar3,param_3 & 1);
        uVar1 = (ulong)*(uint *)(param_1 + 0x1e8);
        plVar2 = *(long **)(param_1 + 0x1f0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar1);
  }
  return;
}




void FUN_00bff484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00bff51c(param_1,param_2,param_5);
  return;
}




void FUN_00bff48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00bff7cc(param_1,param_2,param_5);
  return;
}




void FUN_00bff494(uint *param_1,undefined8 *param_2)

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
    FUN_00bff970(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bff51c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x1f0) + (param_3 & 0xffffffff) * 8);
  if (*(int *)(lVar3 + 0x838) != 0) {
    if (*(long *)(param_1 + 0x4a8) == lVar3) {
      FUN_00bff674(param_1);
    }
    else {
      FUN_00bff5b8();
    }
  }
  uVar2 = FUN_00f048a4("UI::HUD::ON_DOWN_EMOTE_PANEL");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bff5b8(long param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00e70314(param_1 + 0x4b0);
  *(long *)(param_1 + 0x4a8) = param_2;
  *(undefined4 *)(param_2 + 0x83c) = 1;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) | 4;
  *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) & 0xfffffffb;
  FUN_00bff894(param_1,*(undefined4 *)(param_2 + 0x838));
  uVar1 = FUN_00920bec(*(undefined4 *)(param_2 + 0x838),*(undefined8 *)(param_1 + 0x4a0));
  FUN_00f0e578(param_1 + 0x280,uVar1);
  fVar2 = 1.25;
  if (*(int *)(param_2 + 0x838) != 7) {
    fVar2 = 1.5;
  }
  if ((*(float *)(param_1 + 0x2c8) != fVar2) || (*(float *)(param_1 + 0x2cc) != fVar2)) {
    *(float *)(param_1 + 0x2c8) = fVar2;
    *(float *)(param_1 + 0x2cc) = fVar2;
    FUN_0091ada4(param_1 + 0x280);
  }
  FUN_00bff36c(param_1);
  return;
}




void FUN_00bff674(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  int local_4c;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(long *)(param_1 + 0x4a8) + 0x838) == 0xc) {
    local_4c = 1;
    *(undefined4 *)(*(long *)(param_1 + 0x4a8) + 0x83c) = 1;
    uVar2 = 0xc;
  }
  else {
    clock_gettime(1,&local_48);
    lVar5 = local_48.tv_nsec - *(long *)(param_1 + 0x4b8);
    lVar4 = local_48.tv_sec - *(long *)(param_1 + 0x4b0);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = local_48.tv_nsec + (1000000000 - *(long *)(param_1 + 0x4b8));
    }
    fVar6 = (float)((double)(lVar5 + lVar4 * 1000000000) * 1e-09);
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x4a8) + 0x838);
    local_4c = (int)(fVar6 + fVar6);
    *(int *)(*(long *)(param_1 + 0x4a8) + 0x83c) = local_4c;
  }
  uVar3 = FUN_00920c38(uVar2,*(undefined8 *)(param_1 + 0x4a0),&local_4c);
  FUN_00f0e578(param_1 + 0x280,uVar3);
  if (local_4c < 2) {
    *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) & 0xfffffffb;
  }
  else {
    FUN_00e70510(&local_48);
    FUN_00e70e18(&local_48,&DAT_01b95634,local_4c);
    FUN_00f0d75c(param_1 + 0x370,&local_48);
    *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) | 4;
    if ((void *)local_48.tv_nsec != (void *)0x0) {
      operator_delete__((void *)local_48.tv_nsec);
      local_48.tv_sec = 0;
      local_48.tv_nsec = 0;
    }
  }
  FUN_00bff36c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bff7cc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x1f0) + (param_3 & 0xffffffff) * 8);
  (**(code **)**(undefined8 **)(param_1 + 0x158))
            (*(undefined8 **)(param_1 + 0x158),*(undefined4 *)(lVar3 + 0x838),
             *(undefined4 *)(lVar3 + 0x83c));
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xfffffffb;
  uVar2 = FUN_00f048a4("UI::HUD::ON_RELEASE_EMOTE_PANEL");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bff86c(long param_1)

{
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xfffffffb;
  return;
}




void FUN_00bff880(long param_1)

{
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(uint *)(param_1 + 0x27c) = *(uint *)(param_1 + 0x27c) & 0xfffffffb;
  return;
}




void FUN_00bff894(long param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0xc) {
    if (*(char *)(param_1 + 0x4c1) == '\0') {
      FUN_00f0e628(param_1 + 0x280);
      FUN_00f0e540(param_1 + 0x280,PTR_s_build___HUDParts_CandyShop_tga_02be34a0);
      *(undefined1 *)(param_1 + 0x4c1) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x4c1) != '\0') {
    FUN_00f0e628(param_1 + 0x280);
    FUN_00cac438(local_50,*(undefined8 *)(*(long *)(param_1 + 0x4a0) + 8));
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    FUN_00f0e540(param_1 + 0x280,pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    *(undefined1 *)(param_1 + 0x4c1) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bff970(uint *param_1,uint param_2)

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




void FUN_00bff9f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f017e8();
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0xff;
  *param_1 = &PTR_FUN_027f4b08;
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar1,param_1,0x6b7b66e5,FUN_00bffa70,0);
  FUN_00bffaa8(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_00bffa70(long param_1)

{
  FUN_00c002b0(param_1,*(char *)(param_1 + 0xc9) == '\0');
  return;
}




void FUN_00bffaa8(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xba0);
  FUN_00b16678();
  param_1[0x12] = (long)pvVar1;
  *(uint *)((long)pvVar1 + 0x84) = *(uint *)((long)pvVar1 + 0x84) | 0x10;
  pvVar1 = operator_new(0x168);
  FUN_00f0c4bc();
  param_1[0x13] = (long)pvVar1;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x12],1);
                    /* WARNING: Could not recover jumptable at 0x00bffb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x12] + 0x78))((long *)param_1[0x12],param_1[0x13],1);
  return;
}




void FUN_00bffb20(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f4b08;
  puVar5 = (uint *)(param_1 + 0x14);
  uVar4 = *puVar5;
  plVar3 = (long *)param_1[0x15];
  plVar6 = plVar3;
  if (uVar4 != 0) {
    do {
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 8))();
        uVar4 = *(uint *)(param_1 + 0x14);
        plVar3 = (long *)param_1[0x15];
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3 + uVar4);
  }
  if (plVar3 != (long *)0x0) {
    *puVar5 = 0;
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 8))();
  }
  param_1[0x12] = 0;
  if ((long *)param_1[0x13] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x13] + 8))();
  }
  param_1[0x13] = 0;
  uVar2 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar2,param_1);
  pcStack_40 = FUN_00c005d0;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete__((void *)param_1[0x17]);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[0x15] = 0;
  }
  FUN_00f01868(param_1);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bffc3c(void *param_1)

{
  FUN_00bffb20();
  operator_delete(param_1);
  return;
}




void FUN_00bffc60(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *local_98;
  undefined1 local_8c [4];
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_8c[0] = (undefined1)param_3;
  uVar3 = (ulong)*(uint *)(param_1 + 0xb0);
  pvVar2 = operator_new(0x2b8);
  FUN_00c83874(pvVar2,param_2,param_3);
  local_98 = pvVar2;
  FUN_00bffdec(param_1 + 0xa0,&local_98);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),local_98,1);
  FUN_00a9b508((uint *)(param_1 + 0xb0),local_8c);
  local_60 = DAT_03210f5c;
  local_88 = FUN_00bffe74;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar3;
  FUN_009693a0((long)local_98 + 8,&local_88);
  local_88 = FUN_00bffe74;
  local_60 = DAT_03210f88;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar3;
  FUN_009693a0((long)local_98 + 8,&local_88);
  local_60 = DAT_03210f60;
  local_88 = FUN_00bffeac;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar3;
  FUN_009693a0((long)local_98 + 8,&local_88);
  local_88 = FUN_00bffeac;
  local_60 = DAT_03210f8c;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar3;
  FUN_009693a0((long)local_98 + 8,&local_88);
  *(uint *)((long)local_98 + 0x84) = *(uint *)((long)local_98 + 0x84) | 0x10;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bffdec(uint *param_1,undefined8 *param_2)

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
    FUN_00c005e4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bffe74(long param_1)

{
  undefined8 in_x4;
  
  FUN_00c003c0(param_1,in_x4);
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_00bff880();
    return;
  }
  return;
}




void FUN_00bffeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c00480(param_1,param_2,param_5);
  return;
}




void FUN_00bffeb4(long param_1,char param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0xb0) != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xb8) + uVar2) == param_2) goto LAB_00bffee0;
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb0));
  }
  uVar2 = 0;
LAB_00bffee0:
  FUN_00c83980(*(undefined8 *)(*(long *)(param_1 + 0xa8) + uVar2 * 8),param_3);
  return;
}




ulong FUN_00bffef0(long param_1,char param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(uint *)(param_1 + 0xb0) != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xb8) + uVar2) == param_2) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xb0));
  }
  return 0;
}




void FUN_00bfff20(long param_1,char param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0xb0) != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xb8) + (ulong)uVar2) == param_2) goto LAB_00bfff4c;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xb0));
  }
  uVar2 = 0;
LAB_00bfff4c:
  lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + (ulong)uVar2 * 8);
  uVar1 = *(uint *)(lVar3 + 0x84);
  *(uint *)(lVar3 + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_3 & 1) << 2;
  lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + (ulong)uVar2 * 8);
  uVar2 = *(uint *)(lVar3 + 0x84);
  *(uint *)(lVar3 + 0x84) = uVar2 & 0xffffff80 | uVar2 & 0x3f | (param_3 & 1) << 6;
  FUN_00bfff7c();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfff7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar3;
  
  fVar4 = 0.0;
  if ((*(char *)(param_1 + 0xca) != '\0') && (*(long **)(param_1 + 0xc0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x138))();
    fVar4 = (float)(**(code **)(**(long **)(param_1 + 0xc0) + 0x48))();
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    fVar4 = fVar4 + 24.0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0xa8);
    do {
      puVar3 = puVar2 + 1;
      fVar5 = (float)FUN_00c83a20(*puVar2);
      puVar1 = *(undefined8 **)(param_1 + 0xa8);
      fVar6 = fVar5 + 100.0;
      if (fVar5 + 100.0 <= fVar4) {
        fVar6 = fVar4;
      }
      puVar2 = puVar3;
      fVar4 = fVar6;
    } while (puVar3 != puVar1 + *(uint *)(param_1 + 0xa0));
    fVar4 = fVar6 + 24.0;
    if (*(uint *)(param_1 + 0xa0) != 0) {
      do {
        FUN_00c83988(fVar6,0x42e00000,*puVar1);
        puVar2 = puVar1 + 1;
        FUN_00c839d8(*puVar1);
        puVar1 = puVar2;
      } while (puVar2 != (undefined8 *)
                         (*(long *)(param_1 + 0xa8) + (ulong)*(uint *)(param_1 + 0xa0) * 8));
    }
  }
  fVar6 = 12.0;
  FUN_00f0c4fc(0x41400000,*(undefined8 *)(param_1 + 0x98),1,3);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x138))();
  FUN_00f07a18(0x41400000,0x41400000,*(undefined8 *)(param_1 + 0x98),0);
  (**(code **)(**(long **)(param_1 + 0x90) + 0x58))(*(long **)(param_1 + 0x90),1,0,0,0);
  FUN_00b16840(0x3f800000,fVar4,fVar6 + 24.0,*(undefined8 *)(param_1 + 0x90),1,1);
  FUN_00b18a7c(0x41400000,0x41400000,DAT_03218ef8,_DAT_03218efc,*(undefined8 *)(param_1 + 0x90),
               *(undefined8 *)(param_1 + 0x98));
  FUN_00b198f4(0x3f59999a,0,*(undefined8 *)(param_1 + 0x90),&DAT_01bee7f6);
  return;
}

