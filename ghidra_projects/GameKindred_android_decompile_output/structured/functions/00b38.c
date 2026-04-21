// functions/00b38 — 6 functions
#include "libGameKindred.h"




void FUN_00b38808(long param_1)

{
  if ((-1 < (int)*(uint *)(param_1 + 0x105cc)) &&
     (*(uint *)(param_1 + 0x105cc) < *(uint *)(param_1 + 0x1fd8))) {
    FUN_00b3b694(param_1,0);
    return;
  }
  return;
}




void FUN_00b3883c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b3c668(param_1,param_4);
  return;
}




void FUN_00b38844(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027e0a90;
  FUN_00b38b80();
  if ((*(byte *)(param_1 + 0x20be) & 1) != 0) {
    operator_delete((void *)param_1[0x20c0]);
  }
  if ((*(byte *)(param_1 + 0x20ba) & 1) != 0) {
    operator_delete((void *)param_1[0x20bc]);
  }
  lVar2 = -0x6fd8;
  puVar1 = param_1 + 0x1c0f;
  param_1[0x12a6] = &PTR_FUN_027dc578;
  do {
    FUN_00b10040(puVar1);
    lVar2 = lVar2 + 0x2548;
    puVar1 = puVar1 + -0x4a9;
  } while (lVar2 != 0);
  FUN_00a02470(param_1 + 0x12b7);
  FUN_00f01868(param_1 + 0x12a6);
  FUN_009c7fa8(param_1 + 0xfee);
  FUN_009c7fa8(param_1 + 0xd36);
  FUN_009c7fa8(param_1 + 0xa7e);
  FUN_00f01868(param_1 + 0xa6d);
  FUN_00f13d08(param_1 + 0xa39);
  param_1[0xa1b] = &PTR_FUN_028266f0;
  param_1[0xa32] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa35);
  FUN_00f13d08(param_1 + 0xa1b);
  param_1[0x9fd] = &PTR_FUN_028266f0;
  param_1[0xa14] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa17);
  FUN_00f13d08(param_1 + 0x9fd);
  FUN_00f0d3a4(param_1 + 0x9d7);
  FUN_009c7fa8(param_1 + 0x71f);
  FUN_009c7fa8(param_1 + 0x467);
  FUN_00f0d3a4(param_1 + 0x441);
  param_1[0x423] = &PTR_FUN_028266f0;
  param_1[0x43a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x43d);
  FUN_00f13d08(param_1 + 0x423);
  FUN_00f0d3a4(param_1 + 0x3fd);
  if ((void *)param_1[0x3fc] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3fc]);
    param_1[0x3fc] = 0;
    param_1[0x3fb] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x3d5);
  lVar2 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar2 + 0x1d78);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  param_1[0x2f9] = &PTR_FUN_028266f0;
  param_1[0x310] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x313);
  FUN_00f13d08(param_1 + 0x2f9);
  FUN_00f01868(param_1 + 0x2e8);
  param_1[0x2ca] = &PTR_FUN_028266f0;
  param_1[0x2e1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e4);
  FUN_00f13d08(param_1 + 0x2ca);
  FUN_00ed00e0(param_1 + 0x223);
  FUN_00f13d08(param_1 + 0x1ef);
  param_1[0x1d1] = &PTR_FUN_028266f0;
  param_1[0x1e8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1eb);
  FUN_00f13d08(param_1 + 0x1d1);
  FUN_00f01868(param_1 + 0x1c0);
  param_1[0x19f] = &PTR_FUN_028266f0;
  param_1[0x1b6] = &PTR_FUN_02826850;
  param_1[0x3f] = &PTR_FUN_027d6650;
  FUN_00f0a79c(param_1 + 0x1b9);
  FUN_00f13d08(param_1 + 0x19f);
  param_1[0x181] = &PTR_FUN_028266f0;
  param_1[0x198] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x19b);
  FUN_00f13d08(param_1 + 0x181);
  FUN_00ac6220(param_1 + 0x116);
  FUN_00ac6220(param_1 + 0xab);
  FUN_00f0d3a4(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_028266f0;
  param_1[0x7e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x81);
  FUN_00f13d08(param_1 + 0x67);
  FUN_00f01868(param_1 + 0x56);
  FUN_00f13d08(param_1 + 0x3f);
  FUN_00f0d3a4(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b38b80(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  *(uint *)(param_1 + 0x515c) = *(uint *)(param_1 + 0x515c) & 0xfffffffb;
  *(uint *)(param_1 + 0x524c) = *(uint *)(param_1 + 0x524c) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x105cc) = 0xffffffff;
  uVar2 = *(uint *)(param_1 + 0x1fd8);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1fe0) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1fe0) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x1fd8);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1fe0) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x1fe0) != 0) {
    *(undefined4 *)(param_1 + 0x1fd8) = 0;
  }
  FUN_00b117b8(param_1 + 0x9530);
  return;
}




void FUN_00b38c38(void *param_1)

{
  FUN_00b38844();
  operator_delete(param_1);
  return;
}




void FUN_00b38c5c(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined4 uVar4;
  float *pfVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_ec;
  float local_e8;
  float local_e4;
  code *local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  uVar7 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar7 & 1,&local_e4,&local_e8,&local_ec);
  lVar1 = param_1 + 0x1118;
  fVar16 = local_e4 - local_ec;
  if ((*(float *)(param_1 + 0x1158) != 0.0) || (*(float *)(param_1 + 0x115c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1158) = 0;
    FUN_0091ada4(lVar1);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*(long *)(param_1 + 0x1118) + 0x28))(lVar1,&local_e0);
  fVar14 = local_e8;
  lVar8 = FUN_00965ecc(lVar1);
  fVar17 = *(float *)(lVar8 + 0xc);
  lVar8 = FUN_00965ecc(lVar1);
  fVar18 = *(float *)(lVar8 + 0x14);
  lVar8 = param_1 + 0x1f8;
  lVar10 = param_1 + 200;
  fVar12 = (float)FUN_00ac6090(lVar8);
  fVar13 = 0.0;
  FUN_00f0db64(fVar16 - (fVar12 + fVar12 + 80.0),0,0x3f800000,lVar10);
  FUN_00f01c20(lVar10);
  if ((*(float *)(param_1 + 0x108) != 800.0) || (*(float *)(param_1 + 0x10c) != fVar13 * 0.5)) {
    *(undefined4 *)(param_1 + 0x108) = 0x44480000;
    *(float *)(param_1 + 0x10c) = fVar13 * 0.5;
    FUN_0091ada4(lVar10);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 200) + 0x28))(lVar10,&local_e0);
  fVar19 = *(float *)(param_1 + 0x108);
  fVar12 = (float)FUN_00f01c20(lVar10);
  fVar13 = (float)FUN_00ac6090(lVar8);
  fVar12 = ((fVar19 - fVar12 * 0.5) - fVar13 * 0.5) + -20.0;
  if ((*(float *)(param_1 + 0x238) != fVar12) ||
     (*(float *)(param_1 + 0x23c) != *(float *)(param_1 + 0x10c))) {
    *(float *)(param_1 + 0x238) = fVar12;
    *(float *)(param_1 + 0x23c) = *(float *)(param_1 + 0x10c);
    FUN_0091ada4(lVar8);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1f8) + 0x28))(lVar8,&local_e0);
  fVar12 = fVar16 * 0.5 + -800.0;
  if ((*(float *)(param_1 + 0xe40) != fVar12) || (*(float *)(param_1 + 0xe44) != 160.0)) {
    *(float *)(param_1 + 0xe40) = fVar12;
    *(undefined4 *)(param_1 + 0xe44) = 0x43200000;
    FUN_0091ada4(param_1 + 0xe00);
  }
  fVar14 = fVar14 - fVar17 / fVar18;
  fVar13 = 0.0;
  FUN_00ed0578(0x41f00000,0,lVar1);
  FUN_00f13f08(0x44c80000,local_e8 - *(float *)(param_1 + 0xe44),param_1 + 0xe88);
  fVar12 = local_e8 - *(float *)(param_1 + 0xe44);
  FUN_00f13f08(fVar16);
  plVar9 = (long *)(param_1 + 0x18b8);
  (**(code **)(*(long *)(param_1 + 0x18b8) + 0x50))(plVar9);
  fVar12 = fVar12 + 6.0;
  FUN_00f13f08(0x44c80000,fVar12,param_1 + 0x17c8);
  lVar8 = 0;
  pfVar2 = (float *)(param_1 + 0x105c8);
  do {
    fVar16 = *(float *)(plVar9 + 8);
    if ((fVar16 != fVar13 + *pfVar2) ||
       (fVar16 = *(float *)((long)plVar9 + 0x44), fVar16 != fVar12 * 0.5)) {
      *(float *)(plVar9 + 8) = fVar13 + *pfVar2;
      *(float *)((long)plVar9 + 0x44) = fVar12 * 0.5;
      FUN_0091ada4(plVar9);
    }
    local_e0 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_e0);
    pfVar5 = (float *)((long)&DAT_01bb30c8 + lVar8);
    lVar8 = lVar8 + 4;
    plVar9 = plVar9 + 0x26;
    fVar13 = fVar13 + *pfVar5;
  } while (lVar8 != 0x14);
  FUN_00f01c20(lVar10);
  fVar13 = *(float *)(param_1 + 0x1784);
  if (fVar13 != fVar16 + 20.0) {
    *(float *)(param_1 + 0x1784) = fVar16 + 20.0;
    FUN_0091ada4(param_1 + 0x1740);
    fVar13 = *(float *)(param_1 + 0x1784);
  }
  fVar12 = fVar12 + fVar13;
  if (*(int *)(param_1 + 0x1fd8) != 0) {
    uVar4 = DAT_03210c64;
    uVar11 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x1fe0) + uVar11 * 8);
      if ((uVar11 != *(uint *)(param_1 + 0x105cc)) &&
         ((*(float *)(lVar8 + 0x40) != 0.0 || (*(float *)(lVar8 + 0x44) != fVar12)))) {
        *(undefined4 *)(lVar8 + 0x40) = 0;
        *(float *)(lVar8 + 0x44) = fVar12;
        FUN_0091ada4(lVar8);
      }
      lVar10 = lVar8 + 0x178;
      fVar16 = 0.0;
      FUN_00f0db64(*pfVar2 + -316.0,0,0x3f800000,lVar10);
      if ((*(float *)(lVar8 + 0x1b8) != 120.0) || (*(float *)(lVar8 + 0x1bc) != 67.5)) {
        *(undefined8 *)(lVar8 + 0x1b8) = 0x4287000042f00000;
        FUN_0091ada4(lVar10);
      }
      local_e0 = (code *)0x3f00000000000000;
      (**(code **)(*(long *)(lVar8 + 0x178) + 0x28))(lVar10,&local_e0);
      fVar13 = *(float *)(lVar8 + 0x1bc);
      FUN_00f0d4e0(lVar10);
      fVar16 = fVar13 + fVar16 * 0.5 + 10.0;
      if ((*(float *)(lVar8 + 0x2e8) != 120.0) || (*(float *)(lVar8 + 0x2ec) != fVar16)) {
        *(undefined4 *)(lVar8 + 0x2e8) = 0x42f00000;
        *(float *)(lVar8 + 0x2ec) = fVar16;
        FUN_0091ada4(lVar8 + 0x2a8);
      }
      local_e0 = (code *)0x3f00000000000000;
      (**(code **)(*(long *)(lVar8 + 0x2a8) + 0x28))(lVar8 + 0x2a8,&local_e0);
      lVar3 = lVar8 + 0x1128;
      FUN_00f07b18(0xc0a00000,lVar3,1,lVar10,3);
      fVar16 = 0.0;
      FUN_00f07b18(0,lVar3,5,lVar10,5);
      FUN_00f07b18(0xc1a00000,lVar8 + 0x88,1,lVar3,3);
      FUN_00f07b18(0,lVar8 + 0x88,5,lVar3,5);
      lVar10 = 0;
      plVar9 = (long *)(lVar8 + 0x3d8);
      do {
        fVar13 = *(float *)(plVar9 + 8);
        if ((fVar13 != fVar16 + *pfVar2) ||
           (fVar13 = *(float *)((long)plVar9 + 0x44), fVar13 != 67.5)) {
          *(float *)(plVar9 + 8) = fVar16 + *pfVar2;
          *(undefined4 *)((long)plVar9 + 0x44) = 0x42870000;
          FUN_0091ada4(plVar9);
        }
        local_e0 = (code *)0x3f0000003f000000;
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_e0);
        pfVar5 = (float *)((long)&DAT_01bb30c8 + lVar10);
        lVar10 = lVar10 + 4;
        plVar9 = plVar9 + 0x26;
        fVar16 = fVar16 + *pfVar5;
      } while (lVar10 != 0x14);
      fVar18 = *(float *)(lVar8 + 0x8d8);
      fVar17 = *(float *)(lVar8 + 0x8dc);
      (**(code **)(*(long *)(lVar8 + 0x898) + 0x48))(lVar8 + 0x898);
      fVar17 = fVar17 + fVar13 * 0.5;
      fVar16 = fVar17 + 10.0;
      if ((*(float *)(lVar8 + 0xaf8) != fVar18) ||
         (fVar17 = *(float *)(lVar8 + 0xafc), fVar17 != fVar16)) {
        *(float *)(lVar8 + 0xaf8) = fVar18;
        *(float *)(lVar8 + 0xafc) = fVar16;
        FUN_0091ada4(lVar8 + 0xab8);
      }
      local_e0 = (code *)0x3f0000003f000000;
      (**(code **)(*(long *)(lVar8 + 0xab8) + 0x28))(lVar8 + 0xab8,&local_e0);
      fVar18 = *(float *)(lVar8 + 0x548);
      fVar13 = *(float *)(lVar8 + 0x54c);
      lVar10 = lVar8 + 0x508;
      (**(code **)(*(long *)(lVar8 + 0x508) + 0x48))(lVar10);
      fVar13 = fVar13 + fVar17 * 0.5;
      fVar16 = fVar13 + 10.0;
      if ((*(float *)(lVar8 + 0xef8) != fVar18) ||
         (fVar13 = *(float *)(lVar8 + 0xefc), fVar13 != fVar16)) {
        *(float *)(lVar8 + 0xef8) = fVar18;
        *(float *)(lVar8 + 0xefc) = fVar16;
        FUN_0091ada4(lVar8 + 0xeb8);
      }
      local_e0 = (code *)0x3f0000003f000000;
      (**(code **)(*(long *)(lVar8 + 0xeb8) + 0x28))(lVar8 + 0xeb8,&local_e0);
      fVar17 = *(float *)(lVar8 + 0x548);
      fVar16 = *(float *)(lVar8 + 0x54c);
      (**(code **)(*(long *)(lVar8 + 0x508) + 0x48))(lVar10);
      fVar13 = fVar13 * 0.5;
      fVar16 = fVar16 + fVar13;
      if ((*(float *)(lVar8 + 0xd18) != fVar17) ||
         (fVar13 = *(float *)(lVar8 + 0xd1c), fVar13 != fVar16)) {
        *(float *)(lVar8 + 0xd18) = fVar17;
        *(float *)(lVar8 + 0xd1c) = fVar16;
        FUN_0091ada4(lVar8 + 0xcd8);
      }
      local_e0 = (code *)0x3f0000003f000000;
      (**(code **)(*(long *)(lVar8 + 0xcd8) + 0x28))(lVar8 + 0xcd8,&local_e0);
      fVar17 = *(float *)(lVar8 + 0x548);
      fVar16 = *(float *)(lVar8 + 0x54c);
      (**(code **)(*(long *)(lVar8 + 0x508) + 0x48))(lVar10);
      fVar13 = fVar13 * 0.5;
      fVar16 = fVar16 + fVar13;
      if ((*(float *)(lVar8 + 0xe08) != fVar17) ||
         (fVar13 = *(float *)(lVar8 + 0xe0c), fVar13 != fVar16)) {
        *(float *)(lVar8 + 0xe08) = fVar17;
        *(float *)(lVar8 + 0xe0c) = fVar16;
        FUN_0091ada4(lVar8 + 0xdc8);
      }
      local_e0 = (code *)0x3f0000003f000000;
      (**(code **)(*(long *)(lVar8 + 0xdc8) + 0x28))(lVar8 + 0xdc8,&local_e0);
      fVar17 = *(float *)(lVar8 + 0x678);
      lVar10 = lVar8 + 0x1408;
      fVar16 = (float)FUN_00f13e54(lVar10);
      fVar18 = *(float *)(lVar8 + 0x67c);
      fVar17 = fVar17 - fVar16 * 0.5;
      (**(code **)(*(long *)(lVar8 + 0x638) + 0x48))(lVar8 + 0x638);
      fVar16 = fVar13 * 0.5;
      FUN_00f13e54(lVar10);
      fVar16 = (fVar18 + fVar16) - fVar13 * 0.5;
      if ((*(float *)(lVar8 + 0x1448) != fVar17) || (*(float *)(lVar8 + 0x144c) != fVar16)) {
        *(float *)(lVar8 + 0x1448) = fVar17;
        *(float *)(lVar8 + 0x144c) = fVar16;
        FUN_0091ada4(lVar10);
      }
      local_e0 = (code *)0x0;
      (**(code **)(*(long *)(lVar8 + 0x1408) + 0x28))(lVar10,&local_e0);
      fVar17 = *(float *)(lVar8 + 0x7a8);
      lVar10 = lVar8 + 0x17d8;
      fVar16 = (float)FUN_00f13e54(lVar10);
      fVar18 = *(float *)(lVar8 + 0x7ac);
      fVar13 = 0.5;
      fVar17 = fVar17 - fVar16 * 0.5;
      (**(code **)(*(long *)(lVar8 + 0x768) + 0x48))(lVar8 + 0x768);
      fVar16 = fVar13 * 0.5;
      FUN_00f13e54(lVar10);
      fVar16 = (fVar18 + fVar16) - fVar13 * 0.5;
      if ((*(float *)(lVar8 + 0x1818) != fVar17) || (*(float *)(lVar8 + 0x181c) != fVar16)) {
        *(float *)(lVar8 + 0x1818) = fVar17;
        *(float *)(lVar8 + 0x181c) = fVar16;
        FUN_0091ada4(lVar10);
      }
      local_e0 = (code *)0x0;
      (**(code **)(*(long *)(lVar8 + 0x17d8) + 0x28))(lVar10,&local_e0);
      local_e0 = (code *)0x3f0000003f000000;
      if ((*(float *)(lVar8 + 0x2268) != *(float *)(lVar8 + 0xe08)) ||
         (*(float *)(lVar8 + 0x226c) != *(float *)(lVar8 + 0xe0c))) {
        *(float *)(lVar8 + 0x2268) = *(float *)(lVar8 + 0xe08);
        *(float *)(lVar8 + 0x226c) = *(float *)(lVar8 + 0xe0c);
        FUN_0091ada4(lVar8 + 0x2228);
      }
      (**(code **)(*(long *)(lVar8 + 0x2228) + 0x28))(lVar8 + 0x2228,&local_e0);
      lVar10 = lVar8 + 0x1ba8;
      fVar16 = (float)FUN_00f01c20(lVar10);
      fVar16 = fVar16 * 0.5 + 1600.0 + 5.0;
      if ((*(float *)(lVar8 + 0x1be8) != fVar16) || (*(float *)(lVar8 + 0x1bec) != 67.5)) {
        *(float *)(lVar8 + 0x1be8) = fVar16;
        *(undefined4 *)(lVar8 + 0x1bec) = 0x42870000;
        FUN_0091ada4(lVar10);
      }
      local_e0 = (code *)0x3f0000003f000000;
      (**(code **)(*(long *)(lVar8 + 0x1ba8) + 0x28))(lVar10,&local_e0);
      FUN_00f13f08(0x44c80000,0x43070000,lVar8 + 0x9c8);
      FUN_00f13f08(0x44bc0000,0x40000000,lVar8 + 0xbe8);
      if ((*(float *)(lVar8 + 0xc28) != 48.0) || (*(float *)(lVar8 + 0xc2c) != 0.0)) {
        *(undefined8 *)(lVar8 + 0xc28) = 0x42400000;
        FUN_0091ada4(lVar8 + 0xbe8);
      }
      uVar7 = 0x4c;
      if ((uVar11 & 1) != 0) {
        uVar7 = 0x7f;
      }
      if ((*(uint *)(lVar8 + 0xa4c) >> 7 & 0xff) != uVar7) {
        *(uint *)(lVar8 + 0xa4c) = *(uint *)(lVar8 + 0xa4c) & 0xffff807f | uVar7 << 7;
        FUN_0091ada4(lVar8 + 0x9c8);
      }
      local_e0 = FUN_00b39f28;
      local_d0 = 0;
      uStack_c8 = 0;
      lStack_d8 = param_1;
      local_c0 = uVar11;
      local_b8 = uVar4;
      FUN_009693a0(lVar8 + 0xec0,&local_e0);
      if (uVar11 < 2) {
        *(uint *)(lVar8 + 0xc6c) = *(uint *)(lVar8 + 0xc6c) & 0xfffffffb;
      }
      uVar11 = uVar11 + 1;
      fVar12 = fVar12 + 135.0;
    } while (uVar11 < *(uint *)(param_1 + 0x1fd8));
  }
  lVar8 = param_1 + 0x1650;
  fVar16 = 240.0;
  FUN_00f13f08(0x44c80000,lVar8);
  if ((*(float *)(param_1 + 0x1690) != 0.0) || (*(float *)(param_1 + 0x1694) != fVar12)) {
    *(undefined4 *)(param_1 + 0x1690) = 0;
    *(float *)(param_1 + 0x1694) = fVar12;
    FUN_0091ada4(lVar8);
  }
  local_e0 = (code *)0x0;
  (**(code **)(*(long *)(param_1 + 0x1650) + 0x28))(lVar8,&local_e0);
  lVar8 = param_1 + 0x1fe8;
  FUN_00f01c20(lVar8);
  fVar16 = fVar12 + 67.5 + fVar16 * 0.5 + -30.0;
  if ((*(float *)(param_1 + 0x2028) != 800.0) || (*(float *)(param_1 + 0x202c) != fVar16)) {
    *(undefined4 *)(param_1 + 0x2028) = 0x44480000;
    *(float *)(param_1 + 0x202c) = fVar16;
    FUN_0091ada4(lVar8);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1fe8) + 0x28))(lVar8,&local_e0);
  lVar10 = param_1 + 0x2118;
  fVar16 = (float)FUN_00f01c20(lVar8);
  fVar12 = (float)FUN_00f0eac0(lVar10);
  fVar16 = fVar16 * 0.5 + 800.0 + fVar12 * 0.5 + 10.0;
  if ((*(float *)(param_1 + 0x2158) != fVar16) ||
     (*(float *)(param_1 + 0x215c) != *(float *)(param_1 + 0x202c))) {
    *(float *)(param_1 + 0x2158) = fVar16;
    *(float *)(param_1 + 0x215c) = *(float *)(param_1 + 0x202c);
    FUN_0091ada4(lVar10);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2118) + 0x28))(lVar10,&local_e0);
  fVar13 = *(float *)(param_1 + 0x202c);
  lVar10 = param_1 + 0x2208;
  FUN_00f01c20(lVar8);
  fVar12 = fVar16 * 0.5;
  FUN_00f01c20(lVar8);
  fVar12 = fVar13 + fVar12 + fVar16 * 0.5;
  fVar16 = fVar12 + 10.0;
  if ((*(float *)(param_1 + 0x2248) != 800.0) ||
     (fVar12 = *(float *)(param_1 + 0x224c), fVar12 != fVar16)) {
    *(undefined4 *)(param_1 + 0x2248) = 0x44480000;
    *(float *)(param_1 + 0x224c) = fVar16;
    FUN_0091ada4(lVar10);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2208) + 0x28))(lVar10,&local_e0);
  lVar8 = param_1 + 0x4fe8;
  FUN_00f0eac0(lVar8);
  fVar16 = (fVar14 - fVar12) + -20.0;
  pfVar2 = (float *)(param_1 + 0x502c);
  if ((*(float *)(param_1 + 0x5028) != 800.0) || (fVar12 = *pfVar2, fVar12 != fVar16)) {
    *(float *)(param_1 + 0x5028) = 800.0;
    *pfVar2 = fVar16;
    FUN_0091ada4(lVar8);
  }
  local_e0 = (code *)0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x4fe8) + 0x28))(lVar8,&local_e0);
  fVar16 = *pfVar2;
  plVar9 = (long *)(param_1 + 0x4eb8);
  FUN_00f0eac0(lVar8);
  fVar13 = *(float *)(param_1 + 0x4ef8);
  fVar16 = fVar16 + fVar12 * -0.5 + -10.0;
  if ((fVar13 != 800.0) || (fVar13 = *(float *)(param_1 + 0x4efc), fVar13 != fVar16)) {
    *(float *)(param_1 + 0x4ef8) = 800.0;
    *(float *)(param_1 + 0x4efc) = fVar16;
    FUN_0091ada4(plVar9);
  }
  local_e0 = (code *)0x3f8000003f000000;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_e0);
  lVar8 = FUN_009580b8();
  if (((int)*(uint *)(lVar8 + 0x5634) < 0) ||
     (lVar3 = param_1 + 0x2338,
     *(int *)(*(long *)(lVar8 + 0x5268) + (ulong)*(uint *)(lVar8 + 0x5634) * 0x108 + 0x50) != 4)) {
    plVar9 = (long *)(param_1 + 0x2338);
    fVar12 = *(float *)(param_1 + 0x224c);
    FUN_00f01c20(lVar10);
    fVar16 = fVar13 * 0.5;
    FUN_00f01c20(plVar9);
    fVar12 = fVar12 + fVar16 + fVar13 * 0.5;
    fVar16 = fVar12 + 40.0;
    FUN_00f01c20(plVar9);
    fVar12 = fVar14 + fVar12 * 0.5 + 20.0;
    if (fVar16 <= fVar12) {
      fVar16 = fVar12;
    }
    if ((*(float *)(param_1 + 0x2378) != 800.0) || (*(float *)(param_1 + 0x237c) != fVar16)) {
      *(undefined4 *)(param_1 + 0x2378) = 0x44480000;
      *(float *)(param_1 + 0x237c) = fVar16;
      FUN_0091ada4(plVar9);
    }
    local_e0 = (code *)0x3f0000003f000000;
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_e0);
  }
  else {
    fVar16 = (float)FUN_00f13e54(lVar3);
    fVar17 = *(float *)(param_1 + 0x224c);
    fVar12 = 0.5;
    fVar13 = fVar16 * 0.5 + 800.0 + 20.0;
    FUN_00f01c20(lVar10);
    fVar16 = fVar12 * 0.5;
    FUN_00f01c20(lVar3);
    fVar12 = fVar17 + fVar16 + fVar12 * 0.5;
    fVar16 = fVar12 + 40.0;
    FUN_00f01c20(lVar3);
    fVar12 = fVar14 + fVar12 * 0.5 + 20.0;
    if (fVar16 <= fVar12) {
      fVar16 = fVar12;
    }
    if ((*(float *)(param_1 + 0x2378) != fVar13) || (*(float *)(param_1 + 0x237c) != fVar16)) {
      *(float *)(param_1 + 0x2378) = fVar13;
      *(float *)(param_1 + 0x237c) = fVar16;
      FUN_0091ada4(lVar3);
    }
    local_e0 = (code *)0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x2338) + 0x28))(lVar3,&local_e0);
    lVar8 = param_1 + 0x38f8;
    fVar16 = (float)FUN_00f13e54(lVar8);
    fVar16 = fVar16 * -0.5 + 800.0 + -20.0;
    if ((*(float *)(param_1 + 0x3938) != fVar16) ||
       (*(float *)(param_1 + 0x393c) != *(float *)(param_1 + 0x237c))) {
      *(float *)(param_1 + 0x3938) = fVar16;
      *(float *)(param_1 + 0x393c) = *(float *)(param_1 + 0x237c);
      FUN_0091ada4(lVar8);
    }
    local_e0 = (code *)0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x38f8) + 0x28))(lVar8,&local_e0);
  }
  lVar8 = FUN_00965ecc(param_1);
  fVar16 = *(float *)(lVar8 + 0xc);
  fVar13 = 40.0;
  uVar15 = FUN_00f13e54(param_1 + 0xf78);
  fVar12 = *(float *)(param_1 + 0x237c);
  FUN_00f13e54(param_1 + 0x2338);
  fVar16 = fVar16 + 40.0 + fVar12 + fVar13 + 60.0;
  FUN_00ed02d8(uVar15,lVar1);
  if (*(char *)(param_1 + 0x10608) == '\0') {
    *(uint *)(param_1 + 0x23bc) = *(uint *)(param_1 + 0x23bc) & 0xfffffffb;
    *(uint *)(param_1 + 0x506c) = *(uint *)(param_1 + 0x506c) & 0xfffffffb;
    uVar7 = *(uint *)(param_1 + 0x4f3c) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = *(uint *)(param_1 + 0x23bc) | 4;
    fVar12 = *(float *)(param_1 + 0x237c);
    FUN_00f01c20(param_1 + 0x2338);
    uVar7 = (uint)(fVar12 <= fVar14 + fVar16 * 0.5 + 20.0);
    *(uint *)(param_1 + 0x506c) =
         *(uint *)(param_1 + 0x506c) & 0xfffffff8 | *(uint *)(param_1 + 0x506c) & 3 | uVar7 << 2;
    uVar7 = *(uint *)(param_1 + 0x4f3c) & 0xfffffff8 | *(uint *)(param_1 + 0x4f3c) & 3 | uVar7 << 2;
  }
  *(uint *)(param_1 + 0x4f3c) = uVar7;
  FUN_00f13f08(0x44c80000,0x431b0000,param_1 + 0x51c8);
  lVar8 = param_1 + 0x69b0;
  fVar16 = (float)FUN_00f01c20(lVar8);
  lVar10 = param_1 + 0x7f70;
  fVar14 = (float)FUN_00f01c20(lVar10);
  lVar3 = param_1 + 0x53f0;
  fVar12 = (float)FUN_00f01c20(lVar3);
  fVar17 = 144.0;
  fVar13 = 96.0;
  fVar14 = fVar16 + fVar14 + fVar12 + 144.0 + 96.0;
  fVar16 = (float)FUN_00f13e54(param_1 + 0x51c8);
  if (fVar16 <= fVar14) {
    fVar17 = -96.0;
    fVar16 = fVar14 / 3.0 + -144.0 + -96.0;
    FUN_00ab7510(fVar16,lVar8);
    FUN_00ab7510(fVar16,lVar10);
    FUN_00ab7510(fVar16,lVar3);
  }
  uVar11 = FUN_00f02540(lVar8);
  if (((uVar11 & 1) != 0) && ((*(byte *)(param_1 + 0x6a34) >> 2 & 1) != 0)) {
    fVar16 = (float)FUN_00f13e54(lVar8);
    fVar13 = fVar16 * 0.5 + 96.0;
    if (*(float *)(param_1 + 0x69f0) != fVar13) {
      *(float *)(param_1 + 0x69f0) = fVar13;
      FUN_0091ada4(lVar8);
    }
    fVar16 = (float)FUN_00f13e54(lVar8);
    fVar17 = 48.0;
    fVar13 = fVar13 + fVar16 * 0.5 + 48.0;
  }
  uVar11 = FUN_00f02540(lVar10);
  if (((uVar11 & 1) != 0) && ((*(byte *)(param_1 + 0x7ff4) >> 2 & 1) != 0)) {
    fVar16 = (float)FUN_00f13e54(lVar10);
    fVar13 = fVar13 + fVar16 * 0.5;
    if (*(float *)(param_1 + 0x7fb0) != fVar13) {
      *(float *)(param_1 + 0x7fb0) = fVar13;
      FUN_0091ada4(lVar10);
    }
    fVar16 = (float)FUN_00f13e54(lVar10);
    fVar17 = 48.0;
    fVar13 = fVar13 + fVar16 * 0.5 + 48.0;
  }
  uVar11 = FUN_00f02540(lVar3);
  if (((uVar11 & 1) != 0) && ((*(byte *)(param_1 + 0x5474) >> 2 & 1) != 0)) {
    fVar16 = (float)FUN_00f13e54(lVar3);
    fVar17 = *(float *)(param_1 + 0x5430);
    fVar13 = fVar13 + fVar16 * 0.5;
    if (fVar17 != fVar13) {
      *(float *)(param_1 + 0x5430) = fVar13;
      FUN_0091ada4(lVar3);
    }
    FUN_00f13e54(lVar3);
  }
  FUN_00f01c54(param_1 + 0xe00,0,0,1,1);
  FUN_00f13f08(local_e4,fVar17 + *(float *)(param_1 + 0xe44),param_1 + 0x50d8);
  FUN_00ed04d8(lVar1,0,*(undefined1 *)(param_1 + 0x10609));
  *(uint *)(param_1 + 0x119c) =
       *(uint *)(param_1 + 0x119c) & 0xffffffef | (uint)*(byte *)(param_1 + 0x10609) << 4;
  if (*(long *)(lVar6 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

