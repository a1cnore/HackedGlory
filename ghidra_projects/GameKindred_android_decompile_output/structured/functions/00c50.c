// functions/00c50 — 20 functions
#include "libGameKindred.h"




void FUN_00c50048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fcfc0;
  FUN_00f0d3a4(param_1 + 0x81);
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c500bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fcfc0;
  FUN_00f0d3a4(param_1 + 0x81);
  FUN_00f0d3a4(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c50138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd108;
  if ((void *)param_1[0x244] != (void *)0x0) {
    operator_delete__((void *)param_1[0x244]);
    param_1[0x244] = 0;
    param_1[0x243] = 0;
  }
  if ((void *)param_1[0x242] != (void *)0x0) {
    operator_delete__((void *)param_1[0x242]);
    param_1[0x242] = 0;
    param_1[0x241] = 0;
  }
  if ((void *)param_1[0x240] != (void *)0x0) {
    operator_delete__((void *)param_1[0x240]);
    param_1[0x240] = 0;
    param_1[0x23f] = 0;
  }
  param_1[0x221] = &PTR_FUN_028266f0;
  param_1[0x238] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x23b);
  FUN_00f13d08(param_1 + 0x221);
  thunk_FUN_00ed5534(param_1 + 0xdc);
  param_1[0x35] = &PTR_FUN_027fcfc0;
  FUN_00f0d3a4(param_1 + 0xb6);
  FUN_00f0d3a4(param_1 + 0x90);
  FUN_00f0d3a4(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c50268(void *param_1)

{
  FUN_00c50138();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00c5028c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_00c50294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd250;
  param_1[0x9f] = &PTR_FUN_027dc7d8;
  param_1[0x12e] = &PTR_FUN_028266f0;
  param_1[0x145] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x148);
  FUN_00f13d08(param_1 + 0x12e);
  param_1[0x110] = &PTR_FUN_028266f0;
  param_1[0x127] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x12a);
  FUN_00f13d08(param_1 + 0x110);
  param_1[0xf2] = &PTR_FUN_028266f0;
  param_1[0x109] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10c);
  FUN_00f13d08(param_1 + 0xf2);
  param_1[0xd4] = &PTR_FUN_028266f0;
  param_1[0xeb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xee);
  FUN_00f13d08(param_1 + 0xd4);
  param_1[0xb6] = &PTR_FUN_028266f0;
  param_1[0xcd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd0);
  FUN_00f13d08(param_1 + 0xb6);
  FUN_00f13d08(param_1 + 0x9f);
  param_1[0x17] = &PTR_FUN_02807d58;
  FUN_00f13d08(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c503e8(void *param_1)

{
  FUN_00c50294();
  operator_delete(param_1);
  return;
}




void FUN_00c5040c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd4e0;
  FUN_00c4eab0(param_1 + 0x398);
  FUN_00c4c578(param_1 + 0x35a);
  FUN_00c4c3c4(param_1 + 0x2f6);
  FUN_00c50294(param_1 + 0x1aa);
  param_1[0xeb] = &PTR_FUN_027d5388;
  param_1[0x186] = &PTR_FUN_028266f0;
  param_1[0x19d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a0);
  FUN_00f13d08(param_1 + 0x186);
  param_1[0x168] = &PTR_FUN_028266f0;
  param_1[0x17f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x182);
  FUN_00f13d08(param_1 + 0x168);
  param_1[0x14a] = &PTR_FUN_028266f0;
  param_1[0x161] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x164);
  FUN_00f13d08(param_1 + 0x14a);
  FUN_00f01868(param_1 + 0x139);
  FUN_009c825c(param_1 + 0xeb);
  FUN_00f0d3a4(param_1 + 0xc5);
  FUN_00f13d08(param_1 + 0xae);
  FUN_00f0d3a4(param_1 + 0x88);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c50574(void *param_1)

{
  FUN_00c5040c();
  operator_delete(param_1);
  return;
}




void FUN_00c50598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd628;
  param_1[0x62d] = &PTR_FUN_028266f0;
  param_1[0x644] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x647);
  FUN_00f13d08(param_1 + 0x62d);
  FUN_00c50138(param_1 + 999);
  FUN_00c5040c(param_1 + 0x35);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c50610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd628;
  param_1[0x62d] = &PTR_FUN_028266f0;
  param_1[0x644] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x647);
  FUN_00f13d08(param_1 + 0x62d);
  FUN_00c50138(param_1 + 999);
  FUN_00c5040c(param_1 + 0x35);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c50690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd788;
  FUN_00c4d434(param_1 + 0x580);
  FUN_00c4fd80(param_1 + 0x496);
  FUN_00c4d434(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c506e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fd788;
  FUN_00c4d434(param_1 + 0x580);
  param_1[0x496] = &PTR_FUN_027fcbb8;
  FUN_00f0d3a4(param_1 + 0x55a);
  param_1[0x4ad] = &PTR_FUN_027dc7d8;
  param_1[0x53c] = &PTR_FUN_028266f0;
  param_1[0x553] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x556);
  FUN_00f13d08(param_1 + 0x53c);
  param_1[0x51e] = &PTR_FUN_028266f0;
  param_1[0x535] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x538);
  FUN_00f13d08(param_1 + 0x51e);
  param_1[0x500] = &PTR_FUN_028266f0;
  param_1[0x517] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51a);
  FUN_00f13d08(param_1 + 0x500);
  param_1[0x4e2] = &PTR_FUN_028266f0;
  param_1[0x4f9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4fc);
  FUN_00f13d08(param_1 + 0x4e2);
  param_1[0x4c4] = &PTR_FUN_028266f0;
  param_1[0x4db] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4de);
  FUN_00f13d08(param_1 + 0x4c4);
  FUN_00f13d08(param_1 + 0x4ad);
  FUN_00f13d08(param_1 + 0x496);
  FUN_00c4d434(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c50850(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_00be03d8(param_1,1);
    FUN_00be023c(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x38;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        puVar1 = (undefined4 *)(lVar3 + 0x30);
        lVar3 = lVar3 + 0x38;
        *(undefined4 *)(lVar4 + 0x30) = *puVar1;
        lVar4 = lVar4 + 0x38;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void * FUN_00c508f0(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x298);
  FUN_00c4c88c();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00c50958(uint *param_1,uint param_2)

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




void FUN_00c509d8(uint *param_1,uint param_2)

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




void FUN_00c50a58(uint *param_1,uint param_2)

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




void FUN_00c50ad8(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00c50b44(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined **ppuVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  long lVar25;
  bool bVar26;
  ulong uVar27;
  long *plVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  code *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar25 = tpidr_el0;
  local_80 = *(long *)(lVar25 + 0x28);
  FUN_00f13ca4();
  plVar31 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027fd8d0;
  FUN_00f0d160(plVar31);
  plVar32 = param_1 + 0x3e;
  FUN_00c93600(plVar32,0);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x19e;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x1b5;
  FUN_00abbf0c(plVar2);
  plVar3 = param_1 + 0x554;
  FUN_00abbf0c();
  plVar4 = param_1 + 0x8f3;
  FUN_00abbf0c();
  plVar5 = param_1 + 0xc92;
  FUN_00abbf0c();
  plVar6 = param_1 + 0x1031;
  FUN_00c534d0();
  plVar7 = param_1 + 0x1327;
  FUN_00c534d0();
  plVar8 = param_1 + 0x161d;
  FUN_00c534d0();
  plVar9 = param_1 + 0x1913;
  FUN_00c93600(plVar9,0);
  plVar10 = param_1 + 0x1a5c;
  FUN_00f0d160();
  FUN_00f13ca4();
  plVar11 = param_1 + 0x1a99;
  FUN_00f0d160();
  plVar12 = param_1 + 0x1abf;
  FUN_00b15e58(plVar12,0);
  plVar13 = param_1 + 0x1b6e;
  FUN_00f1306c(plVar13);
  lVar33 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar33 + 0xdcc8);
    lVar33 = lVar33 + 0x130;
  } while (lVar33 != 0x5f0);
  plVar14 = param_1 + 0x1c57;
  FUN_00f13ca4();
  plVar15 = param_1 + 0x1c6e;
  FUN_00f0e4a8();
  plVar16 = param_1 + 0x1c8c;
  FUN_00f0e4a8();
  plVar17 = param_1 + 0x1caa;
  FUN_00f0d160();
  plVar18 = param_1 + 0x1cd0;
  FUN_00f0d160();
  FUN_00f0d160();
  param_1[0x1d1d] = 0;
  param_1[0x1d1c] = 0;
  plVar19 = param_1 + 0x1d1d;
  (**(code **)(*param_1 + 0x78))(param_1,plVar31,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar32,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x187,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  lVar33 = 0;
  do {
    FUN_00f133a4(plVar13,(long)param_1 + lVar33 + 0xdcc8,1);
    lVar33 = lVar33 + 0x130;
  } while (lVar33 != 0x5f0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a82,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_00f023ec(plVar14,plVar15,1);
  FUN_00f023ec(plVar14,plVar16,1);
  FUN_00f023ec(plVar14,plVar17,1);
  FUN_00f023ec(plVar14,plVar18,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1cf6,1);
  uVar27 = FUN_0092ea9c();
  bVar26 = (uVar27 & 1) == 0;
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  if (bVar26) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  param_1[0x1d1c] = (long)*ppuVar20;
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (bVar26) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  }
  *plVar19 = (long)*ppuVar20;
  plVar28 = (long *)FUN_00f136e0();
  FUN_00f13fd8(param_1,plVar28);
  FUN_00f13ba0(plVar28,0x78,0x14,0x78,0x14);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar31,10);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar32,9);
  (**(code **)(*plVar28 + 0x78))(plVar28,0,0);
  (**(code **)(*plVar28 + 0x60))(plVar28,param_1 + 0x187,10);
  (**(code **)(*plVar28 + 0x78))(plVar28,0,0);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar1,10);
  (**(code **)(*plVar28 + 0x78))(plVar28,0,0);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar6,10);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar7,10);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar8,10);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar9,10);
  (**(code **)(*plVar28 + 0x60))(plVar28,plVar10,9);
  (**(code **)(*plVar28 + 0x60))(plVar28,param_1 + 0x1a82,0xc);
  FUN_00f0d378(plVar31,*plVar19);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_LOGIN_PROMPT",0);
  FUN_00f0d75c(plVar31,uVar29);
  FUN_00f0d9b0(plVar31,1);
  FUN_00f0db2c(0xbda3d70a,plVar31);
  FUN_00c93864(plVar32,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_WHY_COLLECT",0);
  FUN_00c938d4(plVar32,uVar29);
  FUN_00c928a0(0x42000000,0x40000000,plVar32);
  local_98 = 0;
  local_90 = 0;
  uVar21 = DAT_03210c64;
  local_b0 = FUN_00c519f8;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar21;
  FUN_009693a0(param_1 + 0x3f,&local_b0);
  FUN_00b035dc(plVar2,*plVar19);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_USER_DEFAULT",0);
  FUN_00abc73c(plVar2,uVar29);
  FUN_00abceac(0xc1200000,plVar2);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  uVar30 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_00ce1e34(plVar2,uVar29,uVar30,&DAT_03210450,0,1,0,0,0,1,0,0);
  uVar22 = DAT_03210fac;
  local_b0 = FUN_00c51a08;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar22;
  FUN_009693a0(param_1 + 0x1b6,&local_b0);
  local_b0 = FUN_00c51a08;
  uVar23 = DAT_03210fb0;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar23;
  FUN_009693a0(param_1 + 0x1b6,&local_b0);
  FUN_00b035dc(plVar3,*plVar19);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_USER_CONFIRM_DEFAULT",0);
  FUN_00abc73c(plVar3,uVar29);
  FUN_00abceac(0xc1200000,plVar3);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CONF_CAPTION",0);
  uVar30 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CONF_MESSAGE",0);
  FUN_00ce1e34(plVar3,uVar29,uVar30,&DAT_03210450,0,1,0,0,0,1,0,0);
  local_b0 = FUN_00c51a08;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar22;
  FUN_009693a0(param_1 + 0x555,&local_b0);
  local_b0 = FUN_00c51a08;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar23;
  FUN_009693a0(param_1 + 0x555,&local_b0);
  FUN_00b035dc(plVar4,*plVar19);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_PASS_DEFAULT",0);
  FUN_00abc73c(plVar4,uVar29);
  FUN_00abceac(0xc1200000,plVar4);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  uVar30 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_PASS_MESSAGE",0);
  FUN_00ce1e34(plVar4,uVar29,uVar30,&DAT_03210450,1,0,0,0,0,0,0,0);
  local_b0 = FUN_00c51a08;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_a8 = param_1;
  local_88 = uVar22;
  FUN_009693a0(param_1 + 0x8f4,&local_b0);
  local_b0 = FUN_00c51a08;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_a8 = param_1;
  local_88 = uVar23;
  FUN_009693a0(param_1 + 0x8f4,&local_b0);
  FUN_00b035dc(plVar5,*plVar19);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_PASS_CONFIRM_DEFAULT",0);
  FUN_00abc73c(plVar5,uVar29);
  FUN_00abceac(0xc1200000,plVar5);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_PASS_CONF_CAPTION",0);
  uVar30 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_PASS_CONF_MESSAGE",0);
  FUN_00ce1e34(plVar5,uVar29,uVar30,&DAT_03210450,1,0,0,0,0,0,0,0);
  local_b0 = FUN_00c51a08;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_a8 = param_1;
  local_88 = uVar22;
  FUN_009693a0(param_1 + 0xc93,&local_b0);
  local_b0 = FUN_00c51a08;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_a8 = param_1;
  local_88 = uVar23;
  FUN_009693a0(param_1 + 0xc93,&local_b0);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_SHARE_EMAIL",0);
  FUN_00c51a14(plVar6,uVar29);
  FUN_00c51a9c(plVar6,*plVar19);
  local_b0 = FUN_00c51b24;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar21;
  FUN_009693a0(param_1 + 0x1032,&local_b0);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_I_AGREE",0);
  FUN_00c51a14(plVar7,uVar29);
  FUN_00c51b58(plVar7,plVar13);
  FUN_00c51a9c(plVar7,*plVar19);
  local_b0 = FUN_00c51c68;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar21;
  FUN_009693a0(param_1 + 0x1328,&local_b0);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_RECEIVE_EMAIL",0);
  FUN_00c51a14(plVar8,uVar29);
  FUN_00c51a9c(plVar8,*plVar19);
  local_b0 = FUN_00c51c9c;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar21;
  FUN_009693a0(param_1 + 0x161e,&local_b0);
  FUN_00c93864(plVar9,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_REG_SUBMIT",0);
  FUN_00c938d4(plVar9,uVar29);
  FUN_00c928a0(0x42900000,0x40c00000,plVar9);
  local_b0 = thunk_FUN_00c52d90;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_1;
  local_88 = uVar21;
  FUN_009693a0(param_1 + 0x1914,&local_b0);
  FUN_00ecf888(plVar9,0);
  FUN_00f0d378(plVar10,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  uVar24 = *(uint *)((long)param_1 + 0xd364);
  if ((uVar24 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xd364) = uVar24 & 0xffff8000 | uVar24 & 0x7f | 0x6600;
    FUN_0091ada4(plVar10);
  }
  FUN_00f0d378(plVar11,param_1[0x1d1c]);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_PRIVACY",0);
  FUN_00f0d75c(plVar11,uVar29);
  FUN_00f0d9b0(plVar11,1);
  FUN_00f0db2c(0xbe19999a,plVar11);
  uVar24 = *(uint *)((long)param_1 + 0xd54c);
  if ((uVar24 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xd54c) = uVar24 & 0xffff8000 | uVar24 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar11);
  }
  if ((*(float *)(param_1 + 0x1ac8) != 1.5) || (*(float *)((long)param_1 + 0xd644) != 1.5)) {
    lVar33 = NEON_fmov(0x3fc00000,4);
    param_1[0x1ac8] = lVar33;
    FUN_0091ada4(plVar12);
  }
  *(uint *)((long)param_1 + 0xd67c) = *(uint *)((long)param_1 + 0xd67c) & 0xfffffffb;
  uVar29 = FUN_00f13624();
  FUN_00f13fd8(plVar14,uVar29);
  plVar31 = (long *)FUN_00f136e0();
  (**(code **)(*plVar31 + 0x68))(plVar31,plVar17,0,0x12);
  (**(code **)(*plVar31 + 0x68))(plVar31,plVar18,0,0x12);
  plVar32 = (long *)FUN_00f14058(plVar14);
  (**(code **)(*plVar32 + 0x80))(plVar32,plVar31,1);
  plVar31 = (long *)FUN_00f14058(plVar14);
  (**(code **)(*plVar31 + 0x58))(plVar31,plVar16);
  FUN_00f0e548(plVar15,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar15,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0x1c89) = *(byte *)(param_1 + 0x1c89) | 1;
  FUN_00f0e548(plVar16,PTR_s_build___Chests_tga_02be35c0,"chest_opulent_closed");
  FUN_00f0d378(plVar17,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d378(plVar18,PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_CHESTS_AVAILABLE_LABEL",0);
  thunk_FUN_00e7051c(&local_b0,uVar29);
  FUN_00e70510(&local_c0);
  FUN_00e70e18(&local_c0,&DAT_01bb6d43,1);
  FUN_00e705c8(&local_d0,"[NUM_CHESTS]");
  FUN_00e71248(&local_b0,0,&local_d0,&local_c0);
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  FUN_00f0d75c(plVar17,&local_b0);
  uVar29 = FUN_00e6ce7c("MAIN_PROFILE_CHESTS_REGISTER_PLURAL_LABEL",0);
  FUN_00f0d75c(plVar18,uVar29);
  FUN_00c51cd4(param_1);
  FUN_00f0d92c(param_1 + 0x1cf6,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee802);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if (local_a8 != (long *)0x0) {
    operator_delete__(local_a8);
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
  }
  if (*(long *)(lVar25 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

