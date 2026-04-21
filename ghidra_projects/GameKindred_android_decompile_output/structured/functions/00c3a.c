// functions/00c3a — 7 functions
#include "libGameKindred.h"




void FUN_00c3a220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027faca8;
  if ((long *)param_1[0x8b9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8b9] + 8))();
    param_1[0x8b9] = 0;
  }
  if ((long *)param_1[0x8ba] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8ba] + 8))();
    param_1[0x8ba] = 0;
  }
  param_1[0x890] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x8a7);
  FUN_00f13d08(param_1 + 0x890);
  FUN_00f0d3a4(param_1 + 0x86a);
  param_1[0x444] = &PTR_FUN_027ddfa0;
  FUN_00afc0a4(param_1 + 0x82c);
  FUN_009c8134(param_1 + 0x721);
  param_1[0x6a7] = &PTR_FUN_027de118;
  FUN_00f0d3a4(param_1 + 0x6fa);
  param_1[0x6dc] = &PTR_FUN_028266f0;
  param_1[0x6f3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6f6);
  FUN_00f13d08(param_1 + 0x6dc);
  param_1[0x6be] = &PTR_FUN_028266f0;
  param_1[0x6d5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d8);
  FUN_00f13d08(param_1 + 0x6be);
  FUN_00f13d08(param_1 + 0x6a7);
  FUN_00ab0d88(param_1 + 0x444);
  param_1[0x41b] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x432);
  FUN_00f13d08(param_1 + 0x41b);
  FUN_00f0d3a4(param_1 + 0x3f5);
  FUN_00f0d3a4(param_1 + 0x3cf);
  param_1[0x3b1] = &PTR_FUN_028266f0;
  param_1[0x3c8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3cb);
  FUN_00f13d08(param_1 + 0x3b1);
  param_1[0x393] = &PTR_FUN_028266f0;
  param_1[0x3aa] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3ad);
  FUN_00f13d08(param_1 + 0x393);
  param_1[0x375] = &PTR_FUN_028266f0;
  param_1[0x38c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x38f);
  FUN_00f13d08(param_1 + 0x375);
  param_1[0x34c] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x363);
  FUN_00f13d08(param_1 + 0x34c);
  param_1[0x321] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x338);
  FUN_00f13d08(param_1 + 0x321);
  FUN_00f0d3a4(param_1 + 0x2fb);
  FUN_00f0d3a4(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_028266f0;
  param_1[0x2ce] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d1);
  FUN_00f13d08(param_1 + 0x2b7);
  param_1[0x28c] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2a3);
  FUN_00f13d08(param_1 + 0x28c);
  FUN_00f0d3a4(param_1 + 0x266);
  param_1[0x23b] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x252);
  FUN_00f13d08(param_1 + 0x23b);
  param_1[0x210] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x227);
  FUN_00f13d08(param_1 + 0x210);
  FUN_00f0d3a4(param_1 + 0x1ea);
  FUN_00f01868(param_1 + 0x1d9);
  FUN_00f01868(param_1 + 0x1c8);
  param_1[0x1aa] = &PTR_FUN_028266f0;
  param_1[0x1c1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c4);
  FUN_00f13d08(param_1 + 0x1aa);
  param_1[0x189] = &PTR_FUN_02827290;
  param_1[0x1a0] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x1a7);
  param_1[0x189] = &PTR_FUN_028266f0;
  param_1[0x1a0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a3);
  FUN_00f13d08(param_1 + 0x189);
  param_1[0x165] = &PTR_FUN_028266f0;
  param_1[0x17c] = &PTR_FUN_02826850;
  param_1[0xca] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x17f);
  FUN_00f13d08(param_1 + 0x165);
  param_1[0x147] = &PTR_FUN_028266f0;
  param_1[0x15e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x161);
  FUN_00f13d08(param_1 + 0x147);
  param_1[0x129] = &PTR_FUN_028266f0;
  param_1[0x140] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x143);
  FUN_00f13d08(param_1 + 0x129);
  FUN_00f01868(param_1 + 0x118);
  FUN_009c825c(param_1 + 0xca);
  FUN_00c37c28(param_1);
  return;
}




void FUN_00c3a60c(void *param_1)

{
  FUN_00c3a220();
  operator_delete(param_1);
  return;
}




void FUN_00c3a630(long param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  
  if ((param_2 & 1) != 0) {
    pvVar1 = operator_new(0x610);
    FUN_00c9e7a8(pvVar1,0);
    *(void **)(param_1 + 0x45c8) = pvVar1;
  }
  if ((param_3 & 1) == 0) {
    pvVar1 = *(void **)(param_1 + 0x45d0);
  }
  else {
    pvVar1 = operator_new(0x5d8);
    FUN_00c9f254();
    *(void **)(param_1 + 0x45d0) = pvVar1;
    *(undefined4 *)((long)pvVar1 + 0x5c0) = *(undefined4 *)(param_1 + 0x45d8);
  }
  FUN_00c37ee4(param_1,*(undefined8 *)(param_1 + 0x45c8),pvVar1);
  return;
}




void FUN_00c3a6ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  FUN_00f13db4();
  plVar1 = param_1 + 0x17;
  FUN_00f07940(0,0,plVar1,8,param_1,8);
  fVar12 = (float)FUN_00f13e54(plVar1);
  fVar12 = fVar12 * 0.9;
  FUN_00f0db64(fVar12,0,0x3f800000,param_1 + 0x2fb);
  plVar2 = param_1 + 0x1ea;
  FUN_00f0db64(fVar12,0,0x3f800000,plVar2);
  plVar3 = param_1 + 0x266;
  FUN_00f0db64(fVar12,0,0x3f800000);
  fVar13 = 0.0;
  FUN_00f0db64(fVar12,0,0x3f800000,param_1 + 0x2d5);
  FUN_00f0d4e0(plVar2);
  fVar12 = fVar13;
  FUN_00f01c20(plVar2);
  FUN_00f07940(0,(fVar13 - fVar12) * 0.5,plVar2,4,plVar1,4);
  FUN_00b22dd4();
  plVar4 = param_1 + 0x3cf;
  plVar5 = param_1 + 0x41b;
  fVar13 = -20.0;
  FUN_00f07940(0,plVar4,6,plVar5,4);
  fVar12 = *(float *)((long)param_1 + 0x211c);
  FUN_00f13e54(plVar5);
  fVar12 = fVar12 + fVar13 * 0.5;
  if (*(float *)((long)param_1 + 0x211c) != fVar12) {
    *(float *)((long)param_1 + 0x211c) = fVar12;
    FUN_0091ada4(plVar5);
  }
  FUN_00f07940(0,0,param_1 + 0x3f5,7,plVar4,5);
  plVar5 = param_1 + 0x393;
  uVar15 = FUN_00f01c20(plVar4);
  FUN_00f0e700(plVar5);
  FUN_00f13f08(uVar15,plVar5);
  plVar6 = param_1 + 0x34c;
  fVar12 = (float)FUN_00f0eac0(plVar5);
  fVar13 = (float)FUN_00f0eac0(param_1 + 0x375);
  fVar14 = (float)FUN_00f0eac0(param_1 + 0x3b1);
  FUN_00f13f08(fVar12 + fVar13 + fVar14,0x42a00000,plVar6);
  FUN_00f07940(0,0,plVar5,8,plVar6,8);
  FUN_00f07940(0,0,param_1 + 0x375,1,plVar5,0);
  FUN_00f07940(0,0,param_1 + 0x3b1,0,plVar5,1);
  FUN_00f0ad30(plVar6);
  FUN_00f07940(0,0x40a00000,plVar6,8,plVar4,8);
  plVar4 = param_1 + 0x321;
  FUN_00f13238(plVar4);
  FUN_00f07940(0xc0c00000,0,param_1 + 0x2b7,5,param_1 + 0x2d5,7);
  FUN_00f13238(param_1 + 0x28c);
  FUN_00f07940(0,0,plVar3,6,param_1 + 0x28c,4);
  FUN_00f13238(param_1 + 0x23b);
  FUN_00f07940(0,0,plVar4,8,param_1 + 0x23b,8);
  FUN_00f07940(0,0x41900000,param_1 + 0x2fb,8,plVar4,8);
  plVar4 = param_1 + 0x210;
  FUN_00f13238(plVar4);
  uVar17 = 0xc1400000;
  FUN_00f07940(0,plVar4,6,plVar1,6);
  FUN_00f13e54(plVar4);
  uVar15 = uVar17;
  uVar18 = 0;
  if (*(char *)((long)param_1 + 0x4601) == '\0') {
    FUN_00f0d4e0(plVar2);
    uVar18 = uVar15;
  }
  fVar12 = (float)uVar15;
  FUN_00f13e54(plVar1);
  fVar13 = ((fVar12 - (float)uVar18) - (float)uVar17) + -12.0;
  fVar12 = (float)FUN_00f13e54(plVar1);
  if (fVar13 <= fVar12) {
    fVar12 = fVar13;
  }
  uVar16 = (ulong)(uint)fVar12;
  pfVar7 = (float *)((long)param_1 + 0x45dc);
  *pfVar7 = fVar12;
  if (param_1[0x8b9] != 0) {
    FUN_00c9ebd0(uVar16,uVar16);
    uVar16 = (**(code **)(*(long *)param_1[0x8b9] + 0x48))();
    *pfVar7 = (float)uVar16;
  }
  plVar4 = param_1 + 0x890;
  FUN_00f13f08(uVar16,fVar13,plVar4);
  FUN_00f07940(0,uVar18,plVar4,4,plVar1,4);
  if (param_1[0x8b9] != 0) {
    FUN_00f07940(0,0,param_1[0x8b9],8,plVar4,8);
  }
  if (param_1[0x8ba] != 0) {
    uVar16 = FUN_0092ea9c();
    fVar12 = 150.0;
    if ((uVar16 & 1) == 0) {
      fVar12 = 210.0;
    }
    (**(code **)(*param_1 + 0x1e0))(*pfVar7 / fVar12,param_1);
    lVar9 = param_1[0x8ba];
    fVar12 = *(float *)(param_1 + 0x8a);
    if ((*(float *)(lVar9 + 0x48) != fVar12) || (*(float *)(lVar9 + 0x4c) != fVar12)) {
      *(float *)(lVar9 + 0x48) = fVar12;
      *(float *)(lVar9 + 0x4c) = fVar12;
      FUN_0091ada4();
    }
    FUN_00f07940(0,0,param_1 + 0x45,8,plVar4,8);
    FUN_00f07940(0,0,param_1[0x8ba],8,plVar4,8);
  }
  lVar9 = FUN_00f08c10(param_1 + 0x884);
  FUN_00f07940(0,-*(float *)(lVar9 + 0x920),param_1 + 0x86a,3,plVar4,2);
  fVar12 = *pfVar7;
  fVar13 = 0.55;
  plVar1 = param_1 + 0x1aa;
  FUN_00f0eac0(plVar1);
  fVar13 = (fVar12 * 0.55) / fVar13;
  if ((*(float *)(param_1 + 0x1d1) != fVar13) || (*(float *)((long)param_1 + 0xe8c) != fVar13)) {
    *(float *)(param_1 + 0x1d1) = fVar13;
    *(float *)((long)param_1 + 0xe8c) = fVar13;
    FUN_0091ada4(param_1 + 0x1c8);
  }
  FUN_00f07940(0xc1700000,0,plVar1,0,plVar4,0);
  FUN_00f07940(0,0,param_1 + 0x189,8,plVar1,8);
  FUN_00f07940(0,0,param_1 + 0xca,1,plVar4,1);
  if (*(char *)((long)param_1 + 0x45fc) != '\0') {
    FUN_00b23238(param_1 + 0x444,1);
    uVar15 = FUN_00e6ce7c("TALENT_MASTERED",0);
    FUN_00b0a8fc(param_1 + 0x444,uVar15);
  }
  if ((int)param_1[0x8be] == 0) {
    *(uint *)((long)param_1 + 0x198c) = *(uint *)((long)param_1 + 0x198c) & 0xfffffffb;
    bVar10 = *(byte *)((long)param_1 + 0x45ff);
    uVar8 = *(uint *)((long)param_1 + 0xfd4);
    uVar11 = 0x66;
    if (bVar10 != 0) {
      uVar11 = 0xff;
    }
    *(uint *)((long)param_1 + 0x125c) =
         *(uint *)((long)param_1 + 0x125c) & 0xfffffffb | ((uint)bVar10 << 2 ^ 4) & 0xfc;
    *(uint *)((long)param_1 + 0x185c) =
         *(uint *)((long)param_1 + 0x185c) & 0xfffffffb | (uint)bVar10 << 2;
    if ((uVar8 >> 7 & 0xff) != uVar11) {
      *(uint *)((long)param_1 + 0xfd4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | uVar11 << 7;
      FUN_0091ada4(plVar2);
    }
    uVar11 = *(uint *)((long)param_1 + 0x13b4);
    if ((uVar11 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x13b4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
      FUN_0091ada4(plVar3);
    }
    lVar9 = param_1[0x8b9];
    if (lVar9 == 0) {
      return;
    }
    bVar10 = *(byte *)((long)param_1 + 0x45ff);
  }
  else {
    *(uint *)((long)param_1 + 0x198c) = *(uint *)((long)param_1 + 0x198c) | 4;
    *(uint *)((long)param_1 + 0x125c) = *(uint *)((long)param_1 + 0x125c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x185c) = *(uint *)((long)param_1 + 0x185c) & 0xfffffffb;
    if ((~*(uint *)((long)param_1 + 0xfd4) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xfd4) = *(uint *)((long)param_1 + 0xfd4) | 0x7f80;
      FUN_0091ada4(plVar2);
    }
    if ((~*(uint *)((long)param_1 + 0x13b4) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0x13b4) = *(uint *)((long)param_1 + 0x13b4) | 0x7f80;
      FUN_0091ada4(plVar3);
    }
    lVar9 = param_1[0x8b9];
    if (lVar9 == 0) {
      return;
    }
    bVar10 = 1;
  }
  FUN_00c9edc4(lVar9,bVar10);
  if ((param_1[0x8b9] != 0) && (*(char *)((long)param_1 + 0x4602) != '\0')) {
    FUN_00c9eef0(param_1[0x8b9],0);
    return;
  }
  return;
}




void FUN_00c3ae04(long param_1)

{
  FUN_00c37e04();
  *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) & 0xfffffffb;
  return;
}




void FUN_00c3ae30(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x45d0) != 0) {
    uVar2 = FUN_00f02540();
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_1 + 0x45d0),1);
    }
    FUN_00f0ad88(param_1 + 0x4480,*(undefined8 *)(param_1 + 0x45d0),1);
    FUN_00f07940(0,0,*(undefined8 *)(param_1 + 0x45d0),8,param_1 + 0x4480,8);
    if ((*(uint *)(param_1 + 0xfd4) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0xfd4) = *(uint *)(param_1 + 0xfd4) & 0xffff807f;
      FUN_0091ada4(param_1 + 0xf50);
    }
    if ((*(uint *)(param_1 + 0x198c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x198c) = *(uint *)(param_1 + 0x198c) & 0xffff807f;
      FUN_0091ada4(param_1 + 0x1908);
    }
    if ((*(uint *)(param_1 + 0x202c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x202c) = *(uint *)(param_1 + 0x202c) & 0xffff807f;
      FUN_0091ada4(param_1 + 0x1fa8);
    }
    FUN_00c9fe8c(*(undefined8 *)(param_1 + 0x45d0));
    local_40 = FUN_00f048a4("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
    local_68 = thunk_FUN_00c3c3c8;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(param_1 + 8,&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c3af64(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_00f048a4("EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_00f04694(param_1,uVar3);
  lVar1 = param_1 + 0xf50;
  FUN_00f01980(lVar1);
  if ((~*(uint *)(param_1 + 0xfd4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xfd4) = *(uint *)(param_1 + 0xfd4) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0xf98) != 1.0) || (*(float *)(param_1 + 0xf9c) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0xf98) = uVar4;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 0x1fa8;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0x202c);
  *(uint *)(param_1 + 0x202c) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0x5900) {
    *(uint *)(param_1 + 0x202c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5904;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x1ff0) != 1.0) || (*(float *)(param_1 + 0x1ff4) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x1ff0) = uVar4;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 0x1908;
  FUN_00f01980(lVar1);
  if ((~*(uint *)(param_1 + 0x198c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x198c) = *(uint *)(param_1 + 0x198c) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x1950) != 1.0) || (*(float *)(param_1 + 0x1954) != 1.0)) {
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x1950) = uVar4;
    FUN_0091ada4(lVar1);
  }
  FUN_00b22fc8(0,param_1 + 0x2220,0,*(undefined4 *)(param_1 + 0x4340),
               *(undefined4 *)(param_1 + 0x4344),0,(int)(float)*(int *)(param_1 + 0x352c));
  return;
}

