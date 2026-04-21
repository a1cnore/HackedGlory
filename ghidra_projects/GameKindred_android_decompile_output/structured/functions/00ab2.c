// functions/00ab2 — 27 functions
#include "libGameKindred.h"




void FUN_00ab2150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ab21f0(param_1,param_2,param_5);
  return;
}




void FUN_00ab2158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ab2274(param_1,param_2,param_5);
  return;
}




void FUN_00ab2160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ab22f8(param_1,param_2,param_5);
  return;
}




void FUN_00ab2168(uint *param_1,undefined8 *param_2)

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
    FUN_00ab3154(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ab21f0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x1290))) {
    FUN_00f048e0(auStack_48,DAT_03133e5c,*(long *)(param_1 + 0x1298) + (ulong)param_3 * 0x158);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab2274(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x1290))) {
    FUN_00f048e0(auStack_48,DAT_03133e64,*(long *)(param_1 + 0x1298) + (ulong)param_3 * 0x158);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab22f8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x1290))) {
    FUN_00f048e0(auStack_48,DAT_03133e60,*(long *)(param_1 + 0x1298) + (ulong)param_3 * 0x158);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab2380(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f0db64(0x43fa0000,0,0x3f800000,param_1 + 0x398);
  uVar3 = 0;
  FUN_00f0db64(0x43480000,0,0x3f800000,param_1 + 0x728);
  lVar1 = param_1 + 0x1948;
  FUN_00f07b18(0,param_1 + 0x398,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0x4c8,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0x5f8,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0x728,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0x858,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0xc28,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0xd58,5,lVar1,5);
  FUN_00f07b18(0,param_1 + 0x1350,5,lVar1,5);
  FUN_00f13238(param_1 + 0x240);
  local_50 = FUN_00f13e54(param_1 + 0x240);
  uStack_4c = uVar3;
  FUN_00f13f18(param_1,&local_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00ab2508(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1f0);
  FUN_00ab2840();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00ab2570(uint *param_1,undefined8 *param_2)

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
    FUN_00ab31d4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ab25f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  FUN_00ecf178();
  plVar1 = param_1 + 0x48;
  *param_1 = (long)&PTR_FUN_027d4678;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x73;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x99;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0xbf;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xe5;
  FUN_00f0d160(plVar5);
  FUN_00b1d5d8(param_1 + 0x10b);
  plVar6 = param_1 + 0x185;
  FUN_00f0d160(plVar6);
  FUN_00abaee8(param_1 + 0x1ab,0);
  FUN_00abaee8(param_1 + 0x26a,0);
  FUN_00f0c714(param_1 + 0x329);
  *(undefined1 *)(param_1 + 0x344) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,param_1 + 0x329,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f133a4(plVar1,plVar5,1);
  FUN_00f133a4(plVar1,param_1 + 0x10b,1);
  FUN_00f133a4(plVar1,plVar6,1);
  FUN_00f133a4(plVar1,param_1 + 0x1ab,1);
  FUN_00f133a4(plVar1,param_1 + 0x26a,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d7fc(plVar2,&DAT_01bee7fa);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d7fc(plVar3,&DAT_01bee7fa);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d7fc(plVar4,&DAT_01bee7fa);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d7fc(plVar5,&DAT_01bee7fa);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d7fc(plVar6,&DAT_01bee7fa);
  FUN_00f0e578(param_1 + 0x246,"generic_check");
  FUN_00f0e578(param_1 + 0x305,"generic_x");
  FUN_00ecf870(param_1,1);
  return;
}




void FUN_00ab2840(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  plVar2 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d4528;
  FUN_00f0d160(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(plVar2,&DAT_01bee7fa);
  plVar1 = (long *)FUN_00f136e0();
  (**(code **)(*plVar1 + 0x68))(plVar1,plVar2,0,3);
  FUN_00f13fd8(param_1,plVar1);
  return;
}




ulong FUN_00ab28e8(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x1e8));
  fVar1 = (float)FUN_00f0d4e0(param_1 + 0xb8);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return (ulong)(uint)(int)fVar2 | 0x6400000000;
}




undefined8 FUN_00ab2924(void)

{
  return 0x640000ffff;
}




undefined8 FUN_00ab2930(void)

{
  return 0x6400000000;
}




void FUN_00ab2938(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027d43e0;
  FUN_00ab2d38(param_1 + 0x252,1);
  if ((void *)param_1[0x251] != (void *)0x0) {
    operator_delete__((void *)param_1[0x251]);
    param_1[0x251] = 0;
    param_1[0x250] = 0;
  }
  if ((void *)param_1[0x24f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24f]);
    param_1[0x24f] = 0;
    param_1[0x24e] = 0;
  }
  if ((void *)param_1[0x24d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24d]);
    param_1[0x24d] = 0;
    param_1[0x24c] = 0;
  }
  FUN_00f13d08(param_1 + 0x231);
  FUN_00f0d3a4(param_1 + 0x20b);
  thunk_FUN_00ed5534(param_1 + 0xc6);
  param_1[0x17] = &PTR_FUN_027d47d0;
  lVar2 = 0x4b0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x80);
    *puVar1 = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0x138) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x150);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab2a38(void *param_1)

{
  FUN_00ab2938();
  operator_delete(param_1);
  return;
}




void FUN_00ab2a5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4528;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab2a90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4528;
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab2acc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4678;
  FUN_00f13d08(param_1 + 0x329);
  param_1[0x26a] = &PTR_FUN_027d5388;
  param_1[0x305] = &PTR_FUN_028266f0;
  param_1[0x31c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 799);
  FUN_00f13d08(param_1 + 0x305);
  param_1[0x2e7] = &PTR_FUN_028266f0;
  param_1[0x2fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x301);
  FUN_00f13d08(param_1 + 0x2e7);
  param_1[0x2c9] = &PTR_FUN_028266f0;
  param_1[0x2e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e3);
  FUN_00f13d08(param_1 + 0x2c9);
  FUN_00f01868(param_1 + 0x2b8);
  FUN_009c825c(param_1 + 0x26a);
  param_1[0x1ab] = &PTR_FUN_027d5388;
  param_1[0x246] = &PTR_FUN_028266f0;
  param_1[0x25d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x260);
  FUN_00f13d08(param_1 + 0x246);
  param_1[0x228] = &PTR_FUN_028266f0;
  param_1[0x23f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x242);
  FUN_00f13d08(param_1 + 0x228);
  param_1[0x20a] = &PTR_FUN_028266f0;
  param_1[0x221] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x224);
  FUN_00f13d08(param_1 + 0x20a);
  FUN_00f01868(param_1 + 0x1f9);
  FUN_009c825c(param_1 + 0x1ab);
  FUN_00f0d3a4(param_1 + 0x185);
  FUN_00ab3254(param_1 + 0x10b);
  FUN_00f0d3a4(param_1 + 0xe5);
  FUN_00f0d3a4(param_1 + 0xbf);
  FUN_00f0d3a4(param_1 + 0x99);
  FUN_00f0d3a4(param_1 + 0x73);
  param_1[0x48] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00ab2c98(void *param_1)

{
  FUN_00ab2acc();
  operator_delete(param_1);
  return;
}




void FUN_00ab2cbc(void)

{
  return;
}




void FUN_00ab2cc0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027d47d0;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x478) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x530) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x548);
    FUN_00f13d08((long)param_1 + lVar1 + 0x478);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ab2d38(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x158;
      lVar1 = *(long *)(param_1 + 2) + 0x70;
      do {
        FUN_00936630(lVar1);
        if ((*(byte *)(lVar1 + -0x28) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x18));
        }
        if ((*(byte *)(lVar1 + -0x40) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x30));
        }
        if ((*(byte *)(lVar1 + -0x58) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x48));
        }
        if ((*(byte *)(lVar1 + -0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + -0x60));
        }
        lVar2 = lVar2 + -0x158;
        lVar1 = lVar1 + 0x158;
      } while (lVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00ab2dec(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027d47d0;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x478) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x530) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x548);
    FUN_00f13d08((long)param_1 + lVar1 + 0x478);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ab2e6c(uint *param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_00ab2d38(param_1,1);
    FUN_00ab2fa0(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x158;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
        FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
        uVar6 = *(undefined8 *)(lVar3 + 0x60);
        *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar3 + 0x68);
        *(undefined8 *)(lVar4 + 0x60) = uVar6;
        *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar3 + 0x70);
        FUN_008fcdb8(lVar4 + 0x78,lVar3 + 0x78);
        FUN_008fcdb8(lVar4 + 0x90,lVar3 + 0x90);
        FUN_008fcdb8(lVar4 + 0xa8,lVar3 + 0xa8);
        FUN_008fcdb8(lVar4 + 0xc0,lVar3 + 0xc0);
        FUN_008fcdb8(lVar4 + 0xd8,lVar3 + 0xd8);
        FUN_008fcdb8(lVar4 + 0xf0,lVar3 + 0xf0);
        FUN_008fcdb8(lVar4 + 0x108,lVar3 + 0x108);
        FUN_008fcdb8(lVar4 + 0x120,lVar3 + 0x120);
        FUN_008fcdb8(lVar4 + 0x138,lVar3 + 0x138);
        puVar1 = (undefined1 *)(lVar3 + 0x150);
        lVar3 = lVar3 + 0x158;
        *(undefined1 *)(lVar4 + 0x150) = *puVar1;
        lVar4 = lVar4 + 0x158;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00ab2fa0(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x158);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x158);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x48,(long)pvVar3 + 0x48);
        uVar8 = *(undefined8 *)((long)pvVar3 + 0x60);
        *(undefined8 *)((long)pvVar6 + 0x68) = *(undefined8 *)((long)pvVar3 + 0x68);
        *(undefined8 *)((long)pvVar6 + 0x60) = uVar8;
        *(undefined8 *)((long)pvVar6 + 0x70) = *(undefined8 *)((long)pvVar3 + 0x70);
        FUN_008fcdb8((long)pvVar6 + 0x78,(long)pvVar3 + 0x78);
        FUN_008fcdb8((long)pvVar6 + 0x90,(long)pvVar3 + 0x90);
        FUN_008fcdb8((long)pvVar6 + 0xa8,(long)pvVar3 + 0xa8);
        FUN_008fcdb8((long)pvVar6 + 0xc0,(long)pvVar3 + 0xc0);
        FUN_008fcdb8((long)pvVar6 + 0xd8,(long)pvVar3 + 0xd8);
        FUN_008fcdb8((long)pvVar6 + 0xf0,(long)pvVar3 + 0xf0);
        FUN_008fcdb8((long)pvVar6 + 0x108,(long)pvVar3 + 0x108);
        FUN_008fcdb8((long)pvVar6 + 0x120,(long)pvVar3 + 0x120);
        FUN_008fcdb8((long)pvVar6 + 0x138,(long)pvVar3 + 0x138);
        puVar1 = (undefined1 *)((long)pvVar3 + 0x150);
        pvVar3 = (void *)((long)pvVar3 + 0x158);
        *(undefined1 *)((long)pvVar6 + 0x150) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x158);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x158;
        lVar4 = (long)pvVar3 + 0x70;
        do {
          FUN_00936630(lVar4);
          if ((*(byte *)(lVar4 + -0x28) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -0x18));
          }
          if ((*(byte *)(lVar4 + -0x40) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -0x30));
          }
          if ((*(byte *)(lVar4 + -0x58) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -0x48));
          }
          if ((*(byte *)(lVar4 + -0x70) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -0x60));
          }
          lVar5 = lVar5 + -0x158;
          lVar4 = lVar4 + 0x158;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}

