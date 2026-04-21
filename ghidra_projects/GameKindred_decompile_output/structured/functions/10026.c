// functions/10026 — 317 functions
#include "GameKindred.h"




void FUN_100260220(long param_1)

{
  FUN_100533b88(param_1 + 200);
  return;
}




void FUN_100260228(long param_1)

{
  FUN_100533b64(param_1 + 200);
  return;
}




void FUN_100260230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100260a54(param_1,param_4);
  return;
}




void FUN_100260238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100260b50(param_1,param_4);
  return;
}




void FUN_100260244(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100260244_10147b868;
  FUN_1002603e8();
  thunk_FUN_100651068(param_1 + 0x2e7);
  thunk_FUN_1001cec4c(param_1 + 0x2ca);
  thunk_FUN_100651068(param_1 + 0x2a4);
  thunk_FUN_10064e2bc(param_1 + 0x28d);
  thunk_FUN_10064e2bc(param_1 + 0x276);
  FUN_10064e2bc(param_1 + 0x242);
  if ((void *)param_1[0x241] != (void *)0x0) {
    operator_delete__((void *)param_1[0x241]);
    param_1[0x241] = 0;
    param_1[0x240] = 0;
  }
  param_1[0x182] = &PTR_FUN_10145f300;
  param_1[0x21c] = &PTR_FUN_1014a7108;
  param_1[0x233] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x236);
  FUN_10064e2bc(param_1 + 0x21c);
  param_1[0x1fe] = &PTR_FUN_1014a7108;
  param_1[0x215] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x218);
  FUN_10064e2bc(param_1 + 0x1fe);
  param_1[0x1e0] = &PTR_FUN_1014a7108;
  param_1[0x1f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fa);
  FUN_10064e2bc(param_1 + 0x1e0);
  FUN_10064221c(param_1 + 0x1cf);
  FUN_10003bec8(param_1 + 0x182);
  param_1[0xc4] = &PTR_FUN_10145f300;
  param_1[0x15e] = &PTR_FUN_1014a7108;
  param_1[0x175] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x178);
  FUN_10064e2bc(param_1 + 0x15e);
  param_1[0x140] = &PTR_FUN_1014a7108;
  param_1[0x157] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15a);
  FUN_10064e2bc(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_1014a7108;
  param_1[0x139] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x122);
  FUN_10064221c(param_1 + 0x111);
  FUN_10003bec8(param_1 + 0xc4);
  thunk_FUN_100530784(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002603e8(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1200) != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_100642d08(*(undefined8 *)(*(long *)(param_1 + 0x1208) + uVar3 * 8));
      if (iVar1 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x1208) + uVar3 * 8),1);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x1208) + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x1200));
  }
  if (*(long *)(param_1 + 0x1208) != 0) {
    *(undefined4 *)(param_1 + 0x1200) = 0;
  }
  *(undefined4 *)(param_1 + 0x61c) = 0;
  *(uint *)(param_1 + 0x6a4) = *(uint *)(param_1 + 0x6a4) & 0xfffffffb;
  *(uint *)(param_1 + 0xc94) = *(uint *)(param_1 + 0xc94) & 0xfffffffb;
  FUN_100533244(param_1 + 200);
  *(uint *)(param_1 + 0x17bc) = *(uint *)(param_1 + 0x17bc) | 4;
  return;
}




void thunk_FUN_100260244(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100260244_10147b868;
  FUN_1002603e8();
  thunk_FUN_100651068(param_1 + 0x2e7);
  thunk_FUN_1001cec4c(param_1 + 0x2ca);
  thunk_FUN_100651068(param_1 + 0x2a4);
  thunk_FUN_10064e2bc(param_1 + 0x28d);
  thunk_FUN_10064e2bc(param_1 + 0x276);
  FUN_10064e2bc(param_1 + 0x242);
  if ((void *)param_1[0x241] != (void *)0x0) {
    operator_delete__((void *)param_1[0x241]);
    param_1[0x241] = 0;
    param_1[0x240] = 0;
  }
  param_1[0x182] = &PTR_FUN_10145f300;
  param_1[0x21c] = &PTR_FUN_1014a7108;
  param_1[0x233] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x236);
  FUN_10064e2bc(param_1 + 0x21c);
  param_1[0x1fe] = &PTR_FUN_1014a7108;
  param_1[0x215] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x218);
  FUN_10064e2bc(param_1 + 0x1fe);
  param_1[0x1e0] = &PTR_FUN_1014a7108;
  param_1[0x1f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fa);
  FUN_10064e2bc(param_1 + 0x1e0);
  FUN_10064221c(param_1 + 0x1cf);
  FUN_10003bec8(param_1 + 0x182);
  param_1[0xc4] = &PTR_FUN_10145f300;
  param_1[0x15e] = &PTR_FUN_1014a7108;
  param_1[0x175] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x178);
  FUN_10064e2bc(param_1 + 0x15e);
  param_1[0x140] = &PTR_FUN_1014a7108;
  param_1[0x157] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15a);
  FUN_10064e2bc(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_1014a7108;
  param_1[0x139] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x122);
  FUN_10064221c(param_1 + 0x111);
  FUN_10003bec8(param_1 + 0xc4);
  thunk_FUN_100530784(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100260498(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100260244();
  operator_delete(pvVar1);
  return;
}




void FUN_1002604ac(void)

{
  return;
}




void FUN_1002604b0(void)

{
  return;
}




void FUN_1002604b4(void)

{
  return;
}




void FUN_1002604b8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002604c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1002604c4(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  void *local_158;
  void *local_150;
  undefined7 local_148;
  char cStack_141;
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined1 auStack_120 [8];
  void *local_118;
  undefined8 local_110;
  undefined1 auStack_108 [40];
  long *local_e0;
  undefined8 local_c0;
  void *local_b8;
  void *local_b0 [2];
  char local_99;
  undefined8 local_80;
  undefined4 local_68;
  
  uVar12 = (**(code **)(*param_3 + 0x48))();
  iVar5 = FUN_100126c88();
  plVar7 = param_3 + 0x2e7;
  fVar15 = (float)uVar12;
  fVar11 = (float)param_2;
  fVar13 = fVar11 * 0.5;
  bVar4 = false;
  if ((*(float *)(param_3 + 0x2ef) == fVar15 * 0.5) &&
     (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x177c)) && !NAN(fVar13))) {
    bVar4 = *(float *)((long)param_3 + 0x177c) == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x2ef) = fVar15 * 0.5;
    *(float *)((long)param_3 + 0x177c) = fVar13;
    FUN_1000200a0(plVar7);
  }
  local_110 = (undefined **)&DAT_3f0000003f000000;
  (**(code **)(param_3[0x2e7] + 0x28))(plVar7,&local_110);
  FUN_100651708(fVar15 + -20.0,plVar7,1);
  FUN_10064e47c(uVar12,param_2,param_3 + 0x242);
  *(float *)((long)param_3 + 0x5fc) = fVar15;
  *(float *)(param_3 + 0xc0) = fVar11;
  if ((int)param_3[0x240] == 0) {
    fVar13 = 0.0;
  }
  else {
    uVar9 = 0;
    do {
      if (*(long *)(param_3[0x241] + uVar9 * 8) != 0) {
        FUN_10064e47c((fVar11 + -35.0) * 1.15,fVar11 + -35.0);
        (**(code **)(**(long **)(param_3[0x241] + uVar9 * 8) + 0x138))();
        if (uVar9 == 0) {
          uVar6 = *(undefined8 *)param_3[0x241];
          uVar10 = 0;
          uVar8 = 4;
          plVar7 = param_3 + 0x19;
        }
        else {
          uVar6 = *(undefined8 *)(param_3[0x241] + uVar9 * 8);
          uVar10 = 0x420c0000;
          uVar8 = 6;
          plVar7 = *(long **)(param_3[0x241] + (ulong)((int)uVar9 - 1) * 8);
        }
        FUN_10064e5ec(0,uVar10,uVar6,4,plVar7,uVar8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_3 + 0x240));
    fVar13 = (float)*(uint *)(param_3 + 0x240);
  }
  FUN_10053093c(uVar12,fVar11 * fVar13,param_3 + 0x19);
  if ((int)param_3[0x240] == 0) {
    return;
  }
  fVar13 = (float)FUN_10065317c(*(long *)param_3[0x241] + 0x1d0);
  fVar14 = 0.25;
  fVar15 = fVar15 + (fVar13 - fVar15) * 0.25;
  plVar7 = param_3 + 0xc4;
  fVar16 = fVar15 + *(float *)(param_3 + 0x30d);
  FUN_10064259c(plVar7);
  fVar13 = *(float *)((long)param_3 + 0x186c) + 10.0 + fVar14 * 0.5;
  fVar14 = *(float *)(param_3 + 0xcc);
  bVar4 = false;
  if ((fVar14 == fVar16) && (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x664)) && !NAN(fVar13))
     ) {
    bVar4 = *(float *)((long)param_3 + 0x664) == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0xcc) = fVar16;
    *(float *)((long)param_3 + 0x664) = fVar13;
    FUN_1000200a0(plVar7);
  }
  local_110 = (undefined **)&DAT_3f0000003f000000;
  (**(code **)(param_3[0xc4] + 0x28))(plVar7,&local_110);
  plVar1 = param_3 + 0x182;
  FUN_10064259c(plVar1);
  fVar11 = fVar11 + -10.0 + *(float *)((long)param_3 + 0x1874) + fVar14 * -0.5;
  fVar13 = fVar11 - *(float *)(param_3 + 0x30f);
  if (*(float *)(param_3 + 0x30f) <= 0.0) {
    fVar13 = fVar11;
  }
  fVar15 = *(float *)(param_3 + 0x30e) + fVar15;
  bVar4 = false;
  if ((*(float *)(param_3 + 0x18a) == fVar15) &&
     (bVar4 = false, !NAN(*(float *)((long)param_3 + 0xc54)) && !NAN(fVar13))) {
    bVar4 = *(float *)((long)param_3 + 0xc54) == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x18a) = fVar15;
    *(float *)((long)param_3 + 0xc54) = fVar13;
    FUN_1000200a0(plVar1);
  }
  local_110 = (undefined **)&DAT_3f0000003f000000;
  (**(code **)(param_3[0x182] + 0x28))(plVar1,&local_110);
  plVar2 = param_3 + 0x2a4;
  fVar13 = 1.0;
  if (iVar5 == 0) {
    fVar13 = 0.75;
  }
  fVar15 = *(float *)(param_3 + 0x2ad);
  if ((fVar15 != fVar13) || (fVar15 = *(float *)((long)param_3 + 0x156c), fVar15 != fVar13)) {
    *(float *)(param_3 + 0x2ad) = fVar13;
    *(float *)((long)param_3 + 0x156c) = fVar13;
    FUN_1000200a0(plVar2);
  }
  if (*(float *)(param_3 + 0x2ac) == 0.0) {
    fVar13 = -28.0;
    fVar15 = -28.0;
    if (*(float *)((long)param_3 + 0x1564) == -28.0) goto LAB_1002607c8;
  }
  fVar13 = fVar15;
  param_3[0x2ac] = -0x3e20000000000000;
  FUN_1000200a0(plVar2);
LAB_1002607c8:
  local_110 = (undefined **)0x3f8000003f000000;
  (**(code **)(param_3[0x2a4] + 0x28))(plVar2,&local_110);
  plVar3 = param_3 + 0x276;
  fVar15 = (float)FUN_10064259c(plVar7);
  local_110 = (undefined **)CONCAT44(fVar13 + 10.0,fVar15 + 10.0);
  FUN_10064e48c(plVar3,&local_110);
  fVar13 = *(float *)((long)param_3 + 0x664);
  local_110 = (undefined **)&DAT_3f0000003f000000;
  if ((*(float *)(param_3 + 0x27e) != *(float *)(param_3 + 0xcc)) ||
     (*(float *)((long)param_3 + 0x13f4) != fVar13)) {
    *(float *)(param_3 + 0x27e) = *(float *)(param_3 + 0xcc);
    *(float *)((long)param_3 + 0x13f4) = fVar13;
    FUN_1000200a0(plVar3);
  }
  (**(code **)(param_3[0x276] + 0x28))(plVar3,&local_110);
  plVar7 = param_3 + 0x28d;
  fVar15 = (float)FUN_10064259c(plVar1);
  local_110 = (undefined **)CONCAT44(fVar13 + 10.0,fVar15 + 10.0);
  FUN_10064e48c(plVar7,&local_110);
  local_110 = (undefined **)&DAT_3f0000003f000000;
  if ((*(float *)(param_3 + 0x295) != *(float *)(param_3 + 0x18a)) ||
     (*(float *)((long)param_3 + 0x14ac) != *(float *)((long)param_3 + 0xc54))) {
    *(float *)(param_3 + 0x295) = *(float *)(param_3 + 0x18a);
    *(float *)((long)param_3 + 0x14ac) = *(float *)((long)param_3 + 0xc54);
    FUN_1000200a0(plVar7);
  }
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_110);
  uVar9 = FUN_10013033c("paginationIntro");
  if ((uVar9 & 1) == 0) {
    thunk_FUN_1001cd434(&local_110);
    uVar12 = FUN_1004e0150("TROPHY_PAGINATION_INTRODUCTION_TOOLTIP",0);
    thunk_FUN_1004e439c(auStack_120,uVar12);
    thunk_FUN_1004e439c(&local_158,auStack_120);
    FUN_10003330c(&local_148,&DAT_101d91198);
    local_130 = 1;
    local_12c = 0x41a00000;
    FUN_10003c048(auStack_108,&local_158);
    if (local_131 < '\0') {
      operator_delete((void *)CONCAT17(cStack_141,local_148));
    }
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
    local_68 = 0;
    local_80 = 0x43fa00003f666666;
    local_e0 = plVar2;
    FUN_10001549c(&local_158,"paginationIntro");
    std::string::operator=((string *)local_b0,(string *)&local_158);
    if (cStack_141 < '\0') {
      operator_delete(local_158);
    }
    FUN_10001549c(&local_158,"paginationIntro");
    FUN_1001cefb8(param_3 + 0x2ca,&local_158,&local_110);
    if (cStack_141 < '\0') {
      operator_delete(local_158);
    }
    if (local_118 != (void *)0x0) {
      operator_delete__(local_118);
    }
    local_110 = &PTR_FUN_1014666e0;
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_108,1);
  }
  return;
}




void FUN_100260a54(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x1200) != 0) {
    uVar4 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x1208) + uVar4 * 8);
      if ((int)plVar3[0x14c] == 1) {
        lVar5 = 0x28;
LAB_100260aa4:
        iVar1 = FUN_100644b2c(param_2);
        (**(code **)(*plVar3 + lVar5 * 8))(plVar3,(int)ABS((float)((int)uVar4 - iVar1)) < 1);
      }
      else if ((int)plVar3[0x14c] == 3) {
        lVar5 = 0x29;
        goto LAB_100260aa4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1200));
  }
  iVar1 = FUN_100644b2c(param_2);
  FUN_1001b4c0c(param_1 + 0x620,0 < iVar1);
  uVar2 = FUN_100644b2c(param_2);
  FUN_1001b4c0c(param_1 + 0xc10,uVar2 < *(int *)(param_1 + 0x1200) - 1U);
  *(uint *)(param_1 + 0x15a4) =
       *(uint *)(param_1 + 0x15a4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x15a4) & 3 | (*(byte *)(param_1 + 0xe74) >> 4 & 1) << 2;
  return;
}




void FUN_100260b50(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x1200) != 0) {
    uVar3 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x1208) + uVar3 * 8);
      if ((int)plVar2[0x14c] == 2) {
        lVar4 = 0x28;
LAB_100260ba0:
        iVar1 = FUN_100644b2c(param_2);
        (**(code **)(*plVar2 + lVar4 * 8))(plVar2,(int)ABS((float)((int)uVar3 - iVar1)) < 2);
      }
      else if ((int)plVar2[0x14c] == 3) {
        lVar4 = 0x2a;
        goto LAB_100260ba0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x1200));
  }
  return;
}




void FUN_100260bf4(long *param_1,long param_2)

{
  uint uVar1;
  long local_28;
  
  if (param_2 != 0) {
    local_28 = param_2;
    FUN_1005308f8(param_1 + 0x19,param_2,1);
    FUN_100260c88(param_1 + 0x240,&local_28);
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x240);
  *(uint *)((long)param_1 + 0x6a4) =
       *(uint *)((long)param_1 + 0x6a4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x6a4) & 3 | (uint)(1 < uVar1) << 2;
  *(uint *)((long)param_1 + 0xc94) =
       *(uint *)((long)param_1 + 0xc94) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xc94) & 3 | (uint)(1 < uVar1) << 2;
  *(uint *)((long)param_1 + 0x17bc) =
       *(uint *)((long)param_1 + 0x17bc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x17bc) & 3 | (uint)(uVar1 == 0) << 2;
  *(uint *)((long)param_1 + 0x61c) = uVar1;
  return;
}




void FUN_100260c88(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100260e60(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100260d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1368);
  thunk_FUN_1001cff14(pvVar1,param_2,param_3,param_4,param_5);
  FUN_100260bf4(param_1,pvVar1);
  return;
}




void FUN_100260d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1610);
  thunk_FUN_1001d0100(pvVar1,param_2,param_3,param_4,param_5);
  FUN_100260bf4(param_1,pvVar1);
  return;
}




void FUN_100260dd0(long param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      if (*(uint *)(param_1 + 0x1200) <= uVar2) break;
      plVar1 = *(long **)(*(long *)(param_1 + 0x1208) + uVar2 * 8);
      (**(code **)(*plVar1 + 0x140))(plVar1,1);
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  FUN_1001b4c0c(param_1 + 0x620,0);
  FUN_1001b4c0c(param_1 + 0xc10,1 < *(uint *)(param_1 + 0x1200));
  return;
}




void FUN_100260e50(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x30f) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100260e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))();
  return;
}




void FUN_100260e60(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_100260edc(long *param_1)

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
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  plVar4 = param_1 + 0x1412;
  plVar5 = param_1 + 0x12f3;
  puVar26 = (undefined8 *)FUN_100269da8();
  puVar27 = puVar26 + 0x19;
  *puVar26 = &PTR_thunk_FUN_100261d9c_10147b9d0;
  FUN_1006421a8();
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x2a;
  thunk_FUN_1006543ec();
  plVar2 = param_1 + 0x5e;
  FUN_10053077c(plVar2,0);
  thunk_FUN_1001d0644(param_1 + 0x105,0);
  plVar6 = param_1 + 0x285;
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x2ab;
  thunk_FUN_100183990(plVar7,0);
  thunk_FUN_1001c73d0();
  thunk_FUN_1001c6070();
  plVar8 = param_1 + 0x8c7;
  FUN_1006421a8(plVar8);
  param_1[0x8c7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_1006543ec();
  FUN_10053077c(param_1 + 0x92a,0);
  plVar9 = param_1 + 0x9d1;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x9ef;
  FUN_1006421a8(plVar10);
  param_1[0x9ef] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0xa00;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0xa1e;
  thunk_FUN_100650e64();
  param_1[0xa45] = 0;
  param_1[0xa44] = 0;
  plVar12 = param_1 + 0xa46;
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xa6c;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0xa8a;
  thunk_FUN_100181304(plVar14,0);
  plVar15 = param_1 + 0xd41;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0xff8;
  thunk_FUN_100181304(plVar16,0);
  plVar17 = param_1 + 0x12af;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0x12d5;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar5);
  lVar30 = 0;
  *plVar5 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    FUN_1002645f8((long)param_1 + lVar30 + 0x9820);
    lVar30 = lVar30 + 0x2f0;
  } while (lVar30 != 0x5e0);
  plVar19 = param_1 + 0x13c0;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x13de;
  thunk_FUN_1006543ec(plVar20);
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar21 = param_1 + 0x1423;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x16da;
  thunk_FUN_1002268e4(plVar22);
  thunk_FUN_1001c0018(param_1 + 0x2661,0);
  thunk_FUN_1001ceb64(param_1 + 0x26ec,0);
  param_1[0x270b] = 0;
  param_1[0x270a] = 0;
  param_1[0x2709] = 0;
  *(undefined4 *)(param_1 + 0x270c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x13864) = 0;
  *(undefined1 *)((long)param_1 + 0x13866) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  FUN_100642bd8(puVar27,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_1005308f8(plVar2,param_1 + 0x369,1);
  FUN_1005308f8(plVar2,param_1 + 0x4d7,1);
  FUN_1005308f8(plVar2,param_1 + 0x105,1);
  FUN_1005308f8(plVar2,plVar6,1);
  FUN_1005308f8(plVar2,plVar14,1);
  FUN_1005308f8(plVar2,plVar15,1);
  FUN_1005308f8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,param_1 + 0x8f6,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar10,plVar3,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar8,plVar5,1);
  FUN_100642bd8(plVar5,param_1 + 0x1304,1);
  FUN_100642bd8(plVar5,param_1 + 0x1362,1);
  FUN_1005308f8(plVar2,plVar17,1);
  FUN_1005308f8(plVar2,plVar18,1);
  FUN_1005308f8(plVar2,plVar16,1);
  FUN_1005308f8(plVar2,param_1 + 0x2661,1);
  FUN_1005308f8(plVar2,param_1 + 0x26ec,1);
  FUN_100642bd8(puVar27,plVar19,1);
  FUN_100642bd8(puVar27,plVar20,1);
  FUN_100642bd8(plVar20,plVar4,1);
  FUN_100642bd8(plVar4,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100654488(plVar1,1);
  FUN_100530adc(plVar2,0,1);
  FUN_1006515d8(plVar6,0);
  FUN_100651594(plVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100652cdc(param_1 + 0x345,"edit_handle");
  *(uint *)((long)param_1 + 0x19bc) = *(uint *)((long)param_1 + 0x19bc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar7);
  uVar29 = *(uint *)((long)param_1 + 0x15dc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x15dc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  uVar23 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = FUN_100261b5c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2ac,&local_b8);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_ACCEPT",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar14,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar23;
  local_b8 = FUN_100261ba0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa8b,&local_b8);
  FUN_1001b4964(plVar14,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar23;
  local_b8 = thunk_FUN_100262898;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xd42,&local_b8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(param_1 + 0x8d8,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x4744);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4744) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x8d8);
  }
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar9,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4f0c);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4f0c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x5084) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5084) = *(uint *)((long)param_1 + 0x5084) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x5174) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5174) = *(uint *)((long)param_1 + 0x5174) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar11);
  }
  uVar28 = FUN_1004e0150("MENU_USERTEAM_HEADER_STATUS",0);
  FUN_1006513c0(plVar11,uVar28);
  FUN_100651594(plVar12,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_HOW_TO_ADD",0);
  FUN_1006513c0(plVar12,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x52b4);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x52b4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar29 = *(uint *)((long)param_1 + 0x53e4);
  if ((uVar29 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x53e4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x3300;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0xa75) != 0.9) || (*(float *)((long)param_1 + 0x53ac) != 0.9)) {
    param_1[0xa75] = 0x3f6666663f666666;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar17,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_MORE_OPTIONS",0);
  FUN_1006513c0(plVar17,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x95fc);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x95fc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar29 = *(uint *)((long)param_1 + 0x972c);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x972c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_LEAVE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar16,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_90 = uVar23;
  local_b8 = thunk_FUN_1002629d0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xff9,&local_b8);
  FUN_1001b4964(plVar16,1);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_MEMBER_COUNT",0);
  FUN_1006513c0(param_1 + 0x1315,uVar28);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_WINS",0);
  FUN_1006513c0(param_1 + 0x1373,uVar28);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x9e84);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar19);
    uVar29 = *(uint *)((long)param_1 + 0x9e84);
  }
  *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xfffffffb | 0x10;
  uVar24 = DAT_101dbd460;
  local_90 = DAT_101dbd460;
  local_b8 = FUN_100261bd4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&local_b8);
  uVar25 = DAT_101dbd48c;
  local_90 = DAT_101dbd48c;
  local_b8 = FUN_100261bd4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&local_b8);
  *(uint *)((long)param_1 + 0x9f74) = *(uint *)((long)param_1 + 0x9f74) & 0xfffffffb;
  FUN_100654488(plVar20,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar28,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar21,1);
  FUN_1001b495c(0x3e4ccccd,plVar21);
  if ((*(float *)(param_1 + 0x142d) != 0.5) || (*(float *)((long)param_1 + 0xa16c) != 0.5)) {
    param_1[0x142d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar21);
  }
  local_90 = uVar23;
  local_b8 = thunk_FUN_1002642f0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1424,&local_b8);
  FUN_100261bec(param_1,plVar22,puVar27,0,1);
  local_90 = uVar23;
  local_b8 = FUN_100261d7c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x16f2,&local_b8);
  local_90 = uVar24;
  local_b8 = thunk_FUN_1002643c4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&local_b8);
  local_90 = uVar25;
  local_b8 = thunk_FUN_1002643c4;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&local_b8);
  return param_1;
}




void FUN_100261b5c(long param_1)

{
  FUN_100227fb8(param_1 + 0xb6d0,7);
  FUN_100261bec(param_1,param_1 + 0xb6d0,param_1 + 200,1,0);
  return;
}




void FUN_100261ba0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100167984(uVar1,param_1 + 0x13848);
  return;
}




void thunk_FUN_100262898(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **appuStack_120 [5];
  void *pvStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  void *pvStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  void *pvStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar1 = FUN_10015d3ec();
  FUN_100167aec(uVar1,param_1 + 0x13848);
  FUN_1004f1580(appuStack_120);
  appuStack_120[0] = &PTR_FUN_10145bf20;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_f0 = 0;
  pvStack_f8 = (void *)0x0;
  pvStack_e0 = (void *)0x0;
  lStack_e8 = 0;
  lStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  pvStack_c8 = (void *)0x0;
  pvStack_60 = (void *)0x0;
  lStack_b8 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  lVar2 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_f8,(string *)(lVar2 + 0x5490));
  lVar2 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_e0,(string *)(lVar2 + 0x5308));
  lVar2 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_c8,(string *)(lVar2 + 0x5320));
  appuStack_120[0] = &PTR_FUN_10145bf20;
  if (lStack_50 < 0) {
    operator_delete(pvStack_60);
  }
  FUN_10015ab5c(&uStack_78,1);
  FUN_10015aacc(&uStack_88,1);
  if (lStack_b8 < 0) {
    operator_delete(pvStack_c8);
  }
  if (lStack_d0 < 0) {
    operator_delete(pvStack_e0);
  }
  if (lStack_e8 < 0) {
    operator_delete(pvStack_f8);
  }
  FUN_1004f15a8(appuStack_120);
  return;
}




void thunk_FUN_1002629d0(void)

{
  FUN_1002629d0();
  return;
}




void FUN_100261bd4(long param_1)

{
  FUN_100262390(param_1,0,*(undefined4 *)(param_1 + 0x13860));
  return;
}




void thunk_FUN_1002642f0(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x13865) != '\0') {
    puVar1 = (uint *)(param_1 + 0x13860);
    if ((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x5220))) {
      iVar2 = FUN_10015d3f8();
      if (iVar2 != 0) {
        FUN_10015d3ec();
        uVar3 = FUN_100164f34();
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x5228) + (ulong)*puVar1 * 8) + 0x248);
        iVar2 = FUN_1004e3654(uVar3,uVar4);
        if (iVar2 == 0) {
          uVar3 = FUN_10015d3ec();
          FUN_100167c54(uVar3,*(long *)(*(long *)(param_1 + 0x5228) + (ulong)*puVar1 * 8) + 0xba8);
        }
        else {
          FUN_1002629d0(param_1);
        }
      }
      FUN_100262390(param_1,0,*puVar1);
      return;
    }
  }
  return;
}




void FUN_100261bec(undefined8 param_1,long param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_5c [4];
  float local_58;
  undefined1 auStack_54 [4];
  
  uVar4 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar4,auStack_54,&local_58,auStack_5c);
  if (param_5 == 0) {
    if (param_4 != (*(uint *)(param_2 + 0x84) & 4) >> 2) {
      lVar2 = param_2;
      if (param_4 == 0) {
        lVar2 = param_3;
      }
      uVar4 = FUN_1006408f4(0,0,0x3f4ccccd,FUN_1000917d4);
      FUN_100642324(lVar2);
      *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 4;
      FUN_100642b14(lVar2,uVar4);
      if (param_4 == 0) {
        param_3 = param_2;
      }
      if (param_4 == 0) {
        local_58 = -local_58;
      }
      uVar4 = FUN_1006408f4(0,local_58,0x3f4ccccd,FUN_1000917d4);
      FUN_100047300();
      FUN_100642324(param_3);
      FUN_100642b7c(param_3,uVar4);
    }
  }
  else {
    bVar3 = param_4 == 0;
    uVar1 = 4;
    if (bVar3) {
      uVar1 = 0;
    }
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb | uVar1;
    uVar1 = 0;
    if (bVar3) {
      uVar1 = 4;
    }
    *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xfffffffb | uVar1;
    fVar5 = 0.0;
    if (bVar3) {
      fVar5 = -local_58;
    }
    if (*(float *)(param_2 + 0x44) != fVar5) {
      *(float *)(param_2 + 0x44) = fVar5;
      FUN_1000200a0(param_2);
    }
    if (param_4 == 0) {
      local_58 = 0.0;
    }
    if (*(float *)(param_3 + 0x44) != local_58) {
      *(float *)(param_3 + 0x44) = local_58;
      FUN_1000200a0(param_3);
    }
  }
  return;
}




void FUN_100261d7c(long param_1)

{
  FUN_100261bec(param_1,param_1 + 0xb6d0,param_1 + 200,0,0);
  return;
}




void thunk_FUN_1002643c4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *pvStack_138;
  void *pvStack_130;
  undefined7 uStack_128;
  char cStack_121;
  char cStack_111;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined1 auStack_100 [8];
  void *pvStack_f8;
  undefined1 auStack_f0 [8];
  void *pvStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b0;
  undefined8 uStack_90;
  void *pvStack_88;
  void *pvStack_80;
  char cStack_69;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_38;
  
  thunk_FUN_1001cd434(&ppuStack_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_TEAM_OVERVIEW_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  do {
    FUN_1004e3120(&pvStack_138,"[SEASON_NAME]");
    FUN_1000f0f78(auStack_100,0,0,0);
    uVar3 = FUN_1004e3bc4(auStack_f0,0,&pvStack_138,auStack_100);
    if (pvStack_f8 != (void *)0x0) {
      operator_delete__(pvStack_f8);
    }
    if (pvStack_130 != (void *)0x0) {
      operator_delete__(pvStack_130);
    }
  } while ((uVar3 & 1) != 0);
  thunk_FUN_1004e439c(&pvStack_138,auStack_f0);
  FUN_10003330c(&uStack_128,&DAT_101d91198);
  uStack_110 = 1;
  uStack_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&pvStack_138);
  if (cStack_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,uStack_128));
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  lStack_b0 = param_1 + 0x13390;
  uStack_38 = 2;
  uStack_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  uStack_4c = 0x447a0000;
  if (iVar1 == 0) {
    uStack_4c = 0x44480000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&uStack_90,uVar2);
  pcStack_c0 = FUN_1002645cc;
  lStack_c8 = param_1;
  FUN_10001549c(&pvStack_138,"teamOverviewSeasonLabel");
  FUN_1001cefb8(param_1 + 0x13760,&pvStack_138,&ppuStack_e0);
  if (cStack_121 < '\0') {
    operator_delete(pvStack_138);
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
  }
  ppuStack_e0 = &PTR_FUN_1014666e0;
  if (cStack_69 < '\0') {
    operator_delete(pvStack_80);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




long * thunk_FUN_100260edc(long *param_1)

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
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  uint uVar29;
  long lVar30;
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  plVar4 = param_1 + 0x1412;
  plVar5 = param_1 + 0x12f3;
  puVar26 = (undefined8 *)FUN_100269da8();
  puVar27 = puVar26 + 0x19;
  *puVar26 = &PTR_thunk_FUN_100261d9c_10147b9d0;
  FUN_1006421a8();
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x2a;
  thunk_FUN_1006543ec();
  plVar2 = param_1 + 0x5e;
  FUN_10053077c(plVar2,0);
  thunk_FUN_1001d0644(param_1 + 0x105,0);
  plVar6 = param_1 + 0x285;
  thunk_FUN_100650e64();
  plVar7 = param_1 + 0x2ab;
  thunk_FUN_100183990(plVar7,0);
  thunk_FUN_1001c73d0();
  thunk_FUN_1001c6070();
  plVar8 = param_1 + 0x8c7;
  FUN_1006421a8(plVar8);
  param_1[0x8c7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_1006543ec();
  FUN_10053077c(param_1 + 0x92a,0);
  plVar9 = param_1 + 0x9d1;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x9ef;
  FUN_1006421a8(plVar10);
  param_1[0x9ef] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0xa00;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0xa1e;
  thunk_FUN_100650e64();
  param_1[0xa45] = 0;
  param_1[0xa44] = 0;
  plVar12 = param_1 + 0xa46;
  thunk_FUN_100650e64();
  plVar13 = param_1 + 0xa6c;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0xa8a;
  thunk_FUN_100181304(plVar14,0);
  plVar15 = param_1 + 0xd41;
  thunk_FUN_100181304(plVar15,0);
  plVar16 = param_1 + 0xff8;
  thunk_FUN_100181304(plVar16,0);
  plVar17 = param_1 + 0x12af;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0x12d5;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar5);
  lVar30 = 0;
  *plVar5 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    FUN_1002645f8((long)param_1 + lVar30 + 0x9820);
    lVar30 = lVar30 + 0x2f0;
  } while (lVar30 != 0x5e0);
  plVar19 = param_1 + 0x13c0;
  thunk_FUN_100652c08();
  plVar20 = param_1 + 0x13de;
  thunk_FUN_1006543ec(plVar20);
  FUN_1006421a8(plVar4);
  *plVar4 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar21 = param_1 + 0x1423;
  thunk_FUN_100181304(plVar21,0);
  plVar22 = param_1 + 0x16da;
  thunk_FUN_1002268e4(plVar22);
  thunk_FUN_1001c0018(param_1 + 0x2661,0);
  thunk_FUN_1001ceb64(param_1 + 0x26ec,0);
  param_1[0x270b] = 0;
  param_1[0x270a] = 0;
  param_1[0x2709] = 0;
  *(undefined4 *)(param_1 + 0x270c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x13864) = 0;
  *(undefined1 *)((long)param_1 + 0x13866) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar27,1);
  FUN_100642bd8(puVar27,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_1005308f8(plVar2,param_1 + 0x369,1);
  FUN_1005308f8(plVar2,param_1 + 0x4d7,1);
  FUN_1005308f8(plVar2,param_1 + 0x105,1);
  FUN_1005308f8(plVar2,plVar6,1);
  FUN_1005308f8(plVar2,plVar14,1);
  FUN_1005308f8(plVar2,plVar15,1);
  FUN_1005308f8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,param_1 + 0x8f6,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar10,plVar3,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar8,plVar5,1);
  FUN_100642bd8(plVar5,param_1 + 0x1304,1);
  FUN_100642bd8(plVar5,param_1 + 0x1362,1);
  FUN_1005308f8(plVar2,plVar17,1);
  FUN_1005308f8(plVar2,plVar18,1);
  FUN_1005308f8(plVar2,plVar16,1);
  FUN_1005308f8(plVar2,param_1 + 0x2661,1);
  FUN_1005308f8(plVar2,param_1 + 0x26ec,1);
  FUN_100642bd8(puVar27,plVar19,1);
  FUN_100642bd8(puVar27,plVar20,1);
  FUN_100642bd8(plVar20,plVar4,1);
  FUN_100642bd8(plVar4,plVar21,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar22,1);
  FUN_100654488(plVar1,1);
  FUN_100530adc(plVar2,0,1);
  FUN_1006515d8(plVar6,0);
  FUN_100651594(plVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298,&DAT_10115a168);
  FUN_100652cdc(param_1 + 0x345,"edit_handle");
  *(uint *)((long)param_1 + 0x19bc) = *(uint *)((long)param_1 + 0x19bc) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar7);
  uVar29 = *(uint *)((long)param_1 + 0x15dc);
  if ((uVar29 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x15dc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  uVar23 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = FUN_100261b5c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2ac,&pcStack_b8);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_ACCEPT",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar14,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar23;
  pcStack_b8 = FUN_100261ba0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa8b,&pcStack_b8);
  FUN_1001b4964(plVar14,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_DECLINE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar15,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_100262898;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xd42,&pcStack_b8);
  FUN_1001b4964(plVar15,1);
  FUN_100652cac(param_1 + 0x8d8,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x4744);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4744) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x8d8);
  }
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar9,&DAT_10115a164,2);
  uVar29 = *(uint *)((long)param_1 + 0x4f0c);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x4f0c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x5084) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5084) = *(uint *)((long)param_1 + 0x5084) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x5174) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5174) = *(uint *)((long)param_1 + 0x5174) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar11);
  }
  uVar28 = FUN_1004e0150("MENU_USERTEAM_HEADER_STATUS",0);
  FUN_1006513c0(plVar11,uVar28);
  FUN_100651594(plVar12,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_HOW_TO_ADD",0);
  FUN_1006513c0(plVar12,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x52b4);
  if ((uVar29 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x52b4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x2600;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_team_outline");
  uVar29 = *(uint *)((long)param_1 + 0x53e4);
  if ((uVar29 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x53e4) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x3300;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0xa75) != 0.9) || (*(float *)((long)param_1 + 0x53ac) != 0.9)) {
    param_1[0xa75] = 0x3f6666663f666666;
    FUN_1000200a0(plVar13);
  }
  FUN_100651594(plVar17,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_MORE_OPTIONS",0);
  FUN_1006513c0(plVar17,uVar28);
  uVar29 = *(uint *)((long)param_1 + 0x95fc);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x95fc) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar29 = *(uint *)((long)param_1 + 0x972c);
  if ((uVar29 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x972c) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0xc80;
    FUN_1000200a0(plVar18);
  }
  uVar28 = FUN_1004e0150("MENU_PROFILE_USERTEAM_OVERVIEW_LEAVE",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar16,0,uVar28,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_1002629d0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xff9,&pcStack_b8);
  FUN_1001b4964(plVar16,1);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_MEMBER_COUNT",0);
  FUN_1006513c0(param_1 + 0x1315,uVar28);
  uVar28 = FUN_1004e0150("USERTEAM_OVERVIEW_LABEL_WINS",0);
  FUN_1006513c0(param_1 + 0x1373,uVar28);
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar29 = *(uint *)((long)param_1 + 0x9e84);
  if ((uVar29 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xffff8000 | uVar29 & 0x7f | 0x6600;
    FUN_1000200a0(plVar19);
    uVar29 = *(uint *)((long)param_1 + 0x9e84);
  }
  *(uint *)((long)param_1 + 0x9e84) = uVar29 & 0xfffffffb | 0x10;
  uVar24 = DAT_101dbd460;
  uStack_90 = DAT_101dbd460;
  pcStack_b8 = FUN_100261bd4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&pcStack_b8);
  uVar25 = DAT_101dbd48c;
  uStack_90 = DAT_101dbd48c;
  pcStack_b8 = FUN_100261bd4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x13c1,&pcStack_b8);
  *(uint *)((long)param_1 + 0x9f74) = *(uint *)((long)param_1 + 0x9f74) & 0xfffffffb;
  FUN_100654488(plVar20,1);
  uVar28 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar28,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar21,1);
  FUN_1001b495c(0x3e4ccccd,plVar21);
  if ((*(float *)(param_1 + 0x142d) != 0.5) || (*(float *)((long)param_1 + 0xa16c) != 0.5)) {
    param_1[0x142d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar21);
  }
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_1002642f0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x1424,&pcStack_b8);
  FUN_100261bec(param_1,plVar22,puVar27,0,1);
  uStack_90 = uVar23;
  pcStack_b8 = FUN_100261d7c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x16f2,&pcStack_b8);
  uStack_90 = uVar24;
  pcStack_b8 = thunk_FUN_1002643c4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&pcStack_b8);
  uStack_90 = uVar25;
  pcStack_b8 = thunk_FUN_1002643c4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x2673,&pcStack_b8);
  return param_1;
}




void FUN_100261d9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_100261d9c_10147b9d0;
  if (*(char *)((long)param_1 + 0x1385f) < '\0') {
    operator_delete((void *)param_1[0x2709]);
  }
  thunk_FUN_1001cec4c(param_1 + 0x26ec);
  param_1[0x2661] = &PTR_FUN_1014653b8;
  param_1[0x26c0] = &PTR_FUN_10145eb78;
  param_1[0x26d7] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x26e8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26e8]);
    param_1[0x26e8] = 0;
    param_1[0x26e7] = 0;
  }
  FUN_100651068(param_1 + 0x26c0);
  thunk_FUN_100651068(param_1 + 0x269a);
  FUN_10064221c(param_1 + 0x2689);
  thunk_FUN_10064e2bc(param_1 + 0x2672);
  FUN_10064221c(param_1 + 0x2661);
  FUN_10022ae54(param_1 + 0x16da);
  FUN_10003bd40(param_1 + 0x1423);
  FUN_10064221c(param_1 + 0x1412);
  FUN_10064e2bc(param_1 + 0x13de);
  param_1[0x13c0] = &PTR_FUN_1014a7108;
  param_1[0x13d7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13da);
  FUN_10064e2bc(param_1 + 0x13c0);
  puVar1 = param_1 + 0x1362;
  lVar2 = -0x5e0;
  do {
    *puVar1 = &PTR_FUN_10147bb38;
    thunk_FUN_100651068(puVar1 + 0x37);
    thunk_FUN_100651068(puVar1 + 0x11);
    FUN_10064221c(puVar1);
    puVar1 = puVar1 + -0x5e;
    lVar2 = lVar2 + 0x2f0;
  } while (lVar2 != 0);
  FUN_10064221c(param_1 + 0x12f3);
  param_1[0x12d5] = &PTR_FUN_1014a7108;
  param_1[0x12ec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12ef);
  FUN_10064e2bc(param_1 + 0x12d5);
  thunk_FUN_100651068(param_1 + 0x12af);
  FUN_10003bd40(param_1 + 0xff8);
  FUN_10003bd40(param_1 + 0xd41);
  FUN_10003bd40(param_1 + 0xa8a);
  param_1[0xa6c] = &PTR_FUN_1014a7108;
  param_1[0xa83] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa86);
  FUN_10064e2bc(param_1 + 0xa6c);
  thunk_FUN_100651068(param_1 + 0xa46);
  if ((void *)param_1[0xa45] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa45]);
    param_1[0xa45] = 0;
    param_1[0xa44] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xa1e);
  param_1[0xa00] = &PTR_FUN_1014a7108;
  param_1[0xa17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa1a);
  FUN_10064e2bc(param_1 + 0xa00);
  FUN_10064221c(param_1 + 0x9ef);
  param_1[0x9d1] = &PTR_FUN_1014a7108;
  param_1[0x9e8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9eb);
  FUN_10064e2bc(param_1 + 0x9d1);
  thunk_FUN_100530784(param_1 + 0x92a);
  FUN_10064e2bc(param_1 + 0x8f6);
  param_1[0x8d8] = &PTR_FUN_1014a7108;
  param_1[0x8ef] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f2);
  FUN_10064e2bc(param_1 + 0x8d8);
  FUN_10064221c(param_1 + 0x8c7);
  FUN_1001c80b4(param_1 + 0x4d7);
  thunk_FUN_1001c768c(param_1 + 0x369);
  param_1[0x2ab] = &PTR_FUN_10145f300;
  param_1[0x345] = &PTR_FUN_1014a7108;
  param_1[0x35c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35f);
  FUN_10064e2bc(param_1 + 0x345);
  param_1[0x327] = &PTR_FUN_1014a7108;
  param_1[0x33e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x341);
  FUN_10064e2bc(param_1 + 0x327);
  param_1[0x309] = &PTR_FUN_1014a7108;
  param_1[800] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x323);
  FUN_10064e2bc(param_1 + 0x309);
  FUN_10064221c(param_1 + 0x2f8);
  FUN_10003bec8(param_1 + 0x2ab);
  thunk_FUN_100651068(param_1 + 0x285);
  param_1[0x105] = &PTR_FUN_1014623b0;
  param_1[0x265] = &PTR_FUN_1014a7108;
  param_1[0x27c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x27f);
  FUN_10064e2bc(param_1 + 0x265);
  param_1[0x247] = &PTR_FUN_1014a7108;
  param_1[0x25e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x261);
  FUN_10064e2bc(param_1 + 0x247);
  FUN_100191808(param_1 + 0x1dc);
  FUN_100191808(param_1 + 0x171);
  thunk_FUN_100651068(param_1 + 0x14b);
  param_1[0x12d] = &PTR_FUN_1014a7108;
  param_1[0x144] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x147);
  FUN_10064e2bc(param_1 + 0x12d);
  FUN_10064221c(param_1 + 0x11c);
  FUN_10064e2bc(param_1 + 0x105);
  thunk_FUN_100530784(param_1 + 0x5e);
  FUN_10064e2bc(param_1 + 0x2a);
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100262218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10147bb38;
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100261d9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_100261d9c_10147b9d0;
  if (*(char *)((long)param_1 + 0x1385f) < '\0') {
    operator_delete((void *)param_1[0x2709]);
  }
  thunk_FUN_1001cec4c(param_1 + 0x26ec);
  param_1[0x2661] = &PTR_FUN_1014653b8;
  param_1[0x26c0] = &PTR_FUN_10145eb78;
  param_1[0x26d7] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x26e8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26e8]);
    param_1[0x26e8] = 0;
    param_1[0x26e7] = 0;
  }
  FUN_100651068(param_1 + 0x26c0);
  thunk_FUN_100651068(param_1 + 0x269a);
  FUN_10064221c(param_1 + 0x2689);
  thunk_FUN_10064e2bc(param_1 + 0x2672);
  FUN_10064221c(param_1 + 0x2661);
  FUN_10022ae54(param_1 + 0x16da);
  FUN_10003bd40(param_1 + 0x1423);
  FUN_10064221c(param_1 + 0x1412);
  FUN_10064e2bc(param_1 + 0x13de);
  param_1[0x13c0] = &PTR_FUN_1014a7108;
  param_1[0x13d7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13da);
  FUN_10064e2bc(param_1 + 0x13c0);
  puVar1 = param_1 + 0x1362;
  lVar2 = -0x5e0;
  do {
    *puVar1 = &PTR_FUN_10147bb38;
    thunk_FUN_100651068(puVar1 + 0x37);
    thunk_FUN_100651068(puVar1 + 0x11);
    FUN_10064221c(puVar1);
    puVar1 = puVar1 + -0x5e;
    lVar2 = lVar2 + 0x2f0;
  } while (lVar2 != 0);
  FUN_10064221c(param_1 + 0x12f3);
  param_1[0x12d5] = &PTR_FUN_1014a7108;
  param_1[0x12ec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12ef);
  FUN_10064e2bc(param_1 + 0x12d5);
  thunk_FUN_100651068(param_1 + 0x12af);
  FUN_10003bd40(param_1 + 0xff8);
  FUN_10003bd40(param_1 + 0xd41);
  FUN_10003bd40(param_1 + 0xa8a);
  param_1[0xa6c] = &PTR_FUN_1014a7108;
  param_1[0xa83] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa86);
  FUN_10064e2bc(param_1 + 0xa6c);
  thunk_FUN_100651068(param_1 + 0xa46);
  if ((void *)param_1[0xa45] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa45]);
    param_1[0xa45] = 0;
    param_1[0xa44] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xa1e);
  param_1[0xa00] = &PTR_FUN_1014a7108;
  param_1[0xa17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa1a);
  FUN_10064e2bc(param_1 + 0xa00);
  FUN_10064221c(param_1 + 0x9ef);
  param_1[0x9d1] = &PTR_FUN_1014a7108;
  param_1[0x9e8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9eb);
  FUN_10064e2bc(param_1 + 0x9d1);
  thunk_FUN_100530784(param_1 + 0x92a);
  FUN_10064e2bc(param_1 + 0x8f6);
  param_1[0x8d8] = &PTR_FUN_1014a7108;
  param_1[0x8ef] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f2);
  FUN_10064e2bc(param_1 + 0x8d8);
  FUN_10064221c(param_1 + 0x8c7);
  FUN_1001c80b4(param_1 + 0x4d7);
  thunk_FUN_1001c768c(param_1 + 0x369);
  param_1[0x2ab] = &PTR_FUN_10145f300;
  param_1[0x345] = &PTR_FUN_1014a7108;
  param_1[0x35c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35f);
  FUN_10064e2bc(param_1 + 0x345);
  param_1[0x327] = &PTR_FUN_1014a7108;
  param_1[0x33e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x341);
  FUN_10064e2bc(param_1 + 0x327);
  param_1[0x309] = &PTR_FUN_1014a7108;
  param_1[800] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x323);
  FUN_10064e2bc(param_1 + 0x309);
  FUN_10064221c(param_1 + 0x2f8);
  FUN_10003bec8(param_1 + 0x2ab);
  thunk_FUN_100651068(param_1 + 0x285);
  param_1[0x105] = &PTR_FUN_1014623b0;
  param_1[0x265] = &PTR_FUN_1014a7108;
  param_1[0x27c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x27f);
  FUN_10064e2bc(param_1 + 0x265);
  param_1[0x247] = &PTR_FUN_1014a7108;
  param_1[0x25e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x261);
  FUN_10064e2bc(param_1 + 0x247);
  FUN_100191808(param_1 + 0x1dc);
  FUN_100191808(param_1 + 0x171);
  thunk_FUN_100651068(param_1 + 0x14b);
  param_1[0x12d] = &PTR_FUN_1014a7108;
  param_1[0x144] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x147);
  FUN_10064e2bc(param_1 + 0x12d);
  FUN_10064221c(param_1 + 0x11c);
  FUN_10064e2bc(param_1 + 0x105);
  thunk_FUN_100530784(param_1 + 0x5e);
  FUN_10064e2bc(param_1 + 0x2a);
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10026225c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100261d9c();
  operator_delete(pvVar1);
  return;
}




void FUN_100262270(void)

{
  return;
}




void FUN_100262274(long param_1,int param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  puVar1 = (undefined8 *)(param_1 + 0x13848);
  if (param_2 == 0) goto LAB_100262368;
  bVar5 = *(byte *)(param_1 + 0x1385f);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x13850);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar6 = _memcmp(puVar4,pbVar10,sVar2), iVar6 != 0)) goto LAB_100262338;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x13849);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100262350;
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
      goto LAB_100262338;
    }
  }
  else {
LAB_100262338:
    iVar6 = FUN_10015d3f8();
    if (iVar6 != 0) {
      uVar7 = FUN_10015d3ec();
      FUN_1001635bc(uVar7,puVar1,0);
    }
  }
LAB_100262350:
  if (*(float *)(param_1 + 0x334) != 0.0) {
    *(undefined4 *)(param_1 + 0x334) = 0;
    FUN_1000200a0(param_1 + 0x2f0);
  }
LAB_100262368:
  if (-1 < *(int *)(param_1 + 0x13860)) {
    FUN_100262390(param_1,0);
    return;
  }
  return;
}




void FUN_100262390(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  char *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar1 = (uint *)(param_1 + 0x270c);
  *puVar1 = param_3;
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0xa44))) {
    puVar2 = (uint *)((long)param_1 + 0x9e84);
    plVar3 = param_1 + 0x13c0;
    FUN_100642324(plVar3);
    fVar14 = 147.0;
    if (param_2 == 0) {
      fVar14 = 58.0;
    }
    uVar9 = *puVar2;
    uVar10 = 0;
    if (param_2 == 0) {
      uVar10 = 0xcc;
    }
    if (uVar10 != (uVar9 >> 7 & 0xff)) {
      *puVar2 = uVar9 & 0xffff8000 | uVar9 & 0x7f | uVar10 << 7;
      FUN_1000200a0(plVar3);
      uVar9 = *puVar2;
    }
    bVar5 = param_2 == 0;
    uVar10 = 0x14;
    if (bVar5) {
      uVar10 = 4;
    }
    *puVar2 = uVar10 | uVar9 & 0xffffffeb;
    uVar13 = 0x3f4ccccd;
    if (bVar5) {
      uVar13 = 0;
    }
    uVar10 = 0;
    if (bVar5) {
      uVar10 = 0x10;
    }
    fVar15 = 0.35;
    uVar7 = FUN_100640840(uVar13,FUN_10001f160);
    FUN_100642b14(plVar3,uVar7);
    lVar11 = *(long *)(param_1[0xa45] + (ulong)*puVar1 * 8);
    *(uint *)(lVar11 + 0x1fc) = *(uint *)(lVar11 + 0x1fc) & 0xffffffef | uVar10;
    uVar10 = *puVar1;
    if (uVar10 + 1 < *(uint *)(param_1 + 0xa44)) {
      uVar12 = (ulong)(uVar10 + 1);
      do {
        FUN_100642324(*(undefined8 *)(param_1[0xa45] + uVar12 * 8));
        fVar15 = fVar14 + (float)(int)uVar12 * 98.0;
        uVar7 = FUN_1006408f4(*(undefined4 *)(*(long *)(param_1[0xa45] + uVar12 * 8) + 0x40),fVar15,
                              0x3eb33333,FUN_10001f160);
        FUN_100642b14(*(undefined8 *)(param_1[0xa45] + uVar12 * 8),uVar7);
        uVar12 = uVar12 + 1;
      } while ((uint)uVar12 < *(uint *)(param_1 + 0xa44));
      uVar10 = *puVar1;
    }
    FUN_1006423ec(*(undefined8 *)(param_1[0xa45] + (ulong)uVar10 * 8),1);
    if ((param_2 & 1) == 0) {
      FUN_100642bd8(param_1 + 0x8c7,*(undefined8 *)(param_1[0xa45] + (ulong)*puVar1 * 8),1);
      fVar14 = *(float *)((long)param_1 + 0x4fbc);
      FUN_100642888(param_1 + 0x9ef,0,0,1,1);
      lVar11 = *(long *)(param_1[0xa45] + (ulong)*puVar1 * 8);
      fVar14 = fVar15 + fVar14 + (float)(int)*puVar1 * 98.0;
      fVar15 = *(float *)(lVar11 + 0x40);
      bVar5 = false;
      if ((fVar15 == 0.0) && (bVar5 = false, !NAN(*(float *)(lVar11 + 0x44)) && !NAN(fVar14))) {
        bVar5 = *(float *)(lVar11 + 0x44) == fVar14;
      }
      if (!bVar5) {
        *(undefined4 *)(lVar11 + 0x40) = 0;
        *(float *)(lVar11 + 0x44) = fVar14;
        FUN_1000200a0();
      }
      uVar7 = FUN_100047300();
      FUN_100642b14(plVar3,uVar7);
      *puVar1 = 0xffffffff;
      fVar14 = -1.0;
    }
    else {
      (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0xa45] + (ulong)*puVar1 * 8),1)
      ;
      lVar11 = FUN_10003d5bc(param_1 + 0x8c7);
      fVar16 = *(float *)(lVar11 + 8);
      fVar17 = *(float *)(lVar11 + 0xc);
      fVar18 = *(float *)(lVar11 + 0x14);
      lVar11 = FUN_10003d5bc(param_1);
      fVar14 = *(float *)(lVar11 + 0xc);
      fVar19 = *(float *)((long)param_1 + 0x4fbc);
      FUN_100642888(param_1 + 0x9ef,0,0,1,1);
      lVar11 = *(long *)(param_1[0xa45] + (ulong)*puVar1 * 8);
      fVar16 = fVar16 / fVar18;
      fVar15 = (fVar17 - fVar14) / fVar18 + fVar19 + fVar15 + (float)(int)*puVar1 * 98.0;
      if ((*(float *)(lVar11 + 0x40) != fVar16) ||
         (fVar14 = 1.0, *(float *)(lVar11 + 0x44) != fVar15)) {
        *(float *)(lVar11 + 0x40) = fVar16;
        *(float *)(lVar11 + 0x44) = fVar15;
        FUN_1000200a0();
        fVar14 = 1.0;
      }
    }
    uVar7 = FUN_100655b6c(*(long *)(param_1[0xa45] + (ulong)uVar10 * 8) + 0x248);
    FUN_10015d3ec();
    uVar8 = FUN_100164f34();
    iVar6 = FUN_1004e3654(uVar7,uVar8);
    pcVar4 = "MENU_PROFILE_USERTEAM_LEAVE_TEAM";
    if (iVar6 == 0) {
      pcVar4 = "MENU_PROFILE_USERTEAM_REMOVE_MEMBER";
    }
    uVar7 = FUN_1004e0150(pcVar4,0);
    FUN_100181af8(param_1 + 0x1423,uVar7);
    *(uint *)((long)param_1 + 0x9f74) = *(uint *)((long)param_1 + 0x9f74) | 4;
    plVar3 = param_1 + 0x1412;
    FUN_100642324(plVar3);
    FUN_100642888(plVar3,0,0,1,1);
    fVar15 = fVar14 * -0.5 * fVar15;
    fVar16 = *(float *)((long)param_1 + 0xa0d4);
    if (fVar16 != fVar15) {
      *(float *)((long)param_1 + 0xa0d4) = fVar15;
      FUN_1000200a0(plVar3);
    }
    FUN_100642888(plVar3,0,0,1,1);
    uVar7 = FUN_1006408f4(0,(fVar16 * 0.5 + 5.0) * fVar14,0x3eb33333,FUN_10001f160);
    FUN_100642b14(plVar3,uVar7);
    if (param_2 == 0) {
      uVar7 = FUN_100047300();
      FUN_100642b14(plVar3,uVar7);
    }
    else {
      plVar3 = param_1 + 0x13de;
      iVar6 = FUN_100642d08(plVar3);
      if (iVar6 != 0) {
        FUN_1006423ec(plVar3,1);
      }
      (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
      lVar11 = *(long *)(param_1[0xa45] + (ulong)*puVar1 * 8);
      fVar14 = *(float *)(lVar11 + 0x40);
      fVar15 = *(float *)(lVar11 + 0x44) + 98.0;
      if ((*(float *)(param_1 + 0x13e6) != fVar14) || (*(float *)((long)param_1 + 0x9f34) != fVar15)
         ) {
        *(float *)(param_1 + 0x13e6) = fVar14;
        *(float *)((long)param_1 + 0x9f34) = fVar15;
        FUN_1000200a0(plVar3);
      }
      *(uint *)((long)param_1 + 0xa114) = *(uint *)((long)param_1 + 0xa114) | 4;
    }
                    /* WARNING: Could not recover jumptable at 0x000100262888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




void FUN_10026288c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100262894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100262898(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **local_120 [5];
  void *local_f8;
  undefined8 uStack_f0;
  long local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  
  uVar1 = FUN_10015d3ec();
  FUN_100167aec(uVar1,param_1 + 0x13848);
  FUN_1004f1580(local_120);
  local_120[0] = &PTR_FUN_10145bf20;
  local_58 = 0;
  lStack_50 = 0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  pvStack_e0 = (void *)0x0;
  local_e8 = 0;
  lStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_60 = (void *)0x0;
  local_b8 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  lVar2 = FUN_10015d3ec();
  std::string::operator=((string *)&local_f8,(string *)(lVar2 + 0x5490));
  lVar2 = FUN_10015d3ec();
  std::string::operator=((string *)&pvStack_e0,(string *)(lVar2 + 0x5308));
  lVar2 = FUN_10015d3ec();
  std::string::operator=((string *)&local_c8,(string *)(lVar2 + 0x5320));
  local_120[0] = &PTR_FUN_10145bf20;
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  FUN_10015ab5c(&local_78,1);
  FUN_10015aacc(&local_88,1);
  if (local_b8 < 0) {
    operator_delete(local_c8);
  }
  if (lStack_d0 < 0) {
    operator_delete(pvStack_e0);
  }
  if (local_e8 < 0) {
    operator_delete(local_f8);
  }
  FUN_1004f15a8(local_120);
  return;
}




void FUN_1002629d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("USERTEAM_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  uVar1 = FUN_1004e0150("USERTEAM_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(auStack_30,auStack_40,uVar1,uVar2,param_1,thunk_FUN_100262a8c,0);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_100262a8c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    FUN_10015d3ec();
    FUN_100167c98();
    uVar2 = FUN_100644a94("LeavingUserTeam");
    FUN_100644aec(auStack_40,uVar2,0);
    FUN_100644c34(param_1,auStack_40,1);
    if (*(float *)(param_1 + 0x334) != 0.0) {
      *(undefined4 *)(param_1 + 0x334) = 0;
      FUN_1000200a0(param_1 + 0x2f0);
    }
  }
  return;
}




void FUN_100262b04(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(uint *)(param_1 + 0x54d4) = *(uint *)(param_1 + 0x54d4) & 0xfffffffb;
    *(uint *)(param_1 + 0x6a8c) = *(uint *)(param_1 + 0x6a8c) & 0xfffffffb;
    return;
  }
  FUN_100262b68(param_1);
  return;
}




void FUN_100262b68(long param_1)

{
  uint *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  
  puVar1 = (uint *)(param_1 + 0x54d4);
  lVar9 = FUN_10015d3ec();
  uVar10 = *(uint *)(lVar9 + 0x53e8);
  if (uVar10 == 0) {
    bVar7 = false;
  }
  else {
    uVar17 = 0;
    lVar9 = *(long *)(lVar9 + 0x53f0);
    bVar5 = *(byte *)(param_1 + 0x1385f);
    sVar4 = *(size_t *)(param_1 + 0x13850);
    if (-1 < (char)bVar5) {
      sVar4 = (ulong)bVar5;
    }
    pbVar16 = (byte *)(lVar9 + 0x29);
    bVar7 = true;
    do {
      lVar12 = lVar9 + uVar17 * 0x70;
      bVar6 = *(byte *)(lVar12 + 0x3f);
      uVar11 = (ulong)bVar6;
      sVar2 = *(size_t *)(lVar12 + 0x30);
      if (-1 < (char)bVar6) {
        sVar2 = uVar11;
      }
      if (sVar2 == sVar4) {
        pvVar13 = *(void **)(lVar12 + 0x28);
        puVar3 = pvVar13;
        if (-1 < (char)bVar6) {
          puVar3 = (undefined8 *)(lVar12 + 0x28);
        }
        pbVar14 = *(byte **)(param_1 + 0x13848);
        if (-1 < (char)bVar5) {
          pbVar14 = (byte *)(param_1 + 0x13848);
        }
        if ((char)bVar6 < '\0') {
          if ((sVar4 == 0) || (iVar8 = _memcmp(puVar3,pbVar14,sVar4), iVar8 == 0)) break;
        }
        else {
          if (sVar4 == 0) break;
          pbVar15 = pbVar16;
          if ((uint)*pbVar14 == ((uint)pvVar13 & 0xff)) {
            do {
              uVar11 = uVar11 - 1;
              pbVar14 = pbVar14 + 1;
              if (uVar11 == 0) goto LAB_100262c80;
              bVar6 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar6 == *pbVar14);
          }
        }
      }
      uVar17 = uVar17 + 1;
      pbVar16 = pbVar16 + 0x70;
      bVar7 = uVar17 < uVar10;
    } while (uVar17 != uVar10);
  }
LAB_100262c80:
  lVar9 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar9 + 0x54a7);
  uVar17 = (ulong)bVar5;
  sVar4 = *(size_t *)(lVar9 + 0x5498);
  if (-1 < (char)bVar5) {
    sVar4 = uVar17;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar4 == sVar2) {
    pvVar13 = *(void **)(lVar9 + 0x5490);
    puVar3 = pvVar13;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(lVar9 + 0x5490);
    }
    pbVar16 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar16 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar4 != 0) && (iVar8 = _memcmp(puVar3,pbVar16,sVar4), iVar8 != 0)) goto LAB_100262d34;
    }
    else if (sVar4 != 0) {
      if ((uint)*pbVar16 == ((uint)pvVar13 & 0xff)) {
        pbVar14 = (byte *)(lVar9 + 0x5491);
        do {
          uVar17 = uVar17 - 1;
          pbVar16 = pbVar16 + 1;
          if (uVar17 == 0) goto LAB_100262d68;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar16);
      }
      goto LAB_100262d34;
    }
LAB_100262d68:
    uVar10 = *puVar1;
    if (bVar7) {
      *puVar1 = uVar10 | 4;
      uVar10 = *(uint *)(param_1 + 0x6a8c) | 4;
      goto LAB_100262d48;
    }
  }
  else {
LAB_100262d34:
    uVar10 = *puVar1;
  }
  *puVar1 = uVar10 & 0xfffffffb;
  uVar10 = *(uint *)(param_1 + 0x6a8c) & 0xfffffffb;
LAB_100262d48:
  *(uint *)(param_1 + 0x6a8c) = uVar10;
  return;
}




void FUN_100262d84(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(uint *)(param_1 + 0x54d4) = *(uint *)(param_1 + 0x54d4) & 0xfffffffb;
    *(uint *)(param_1 + 0x6a8c) = *(uint *)(param_1 + 0x6a8c) & 0xfffffffb;
    return;
  }
  FUN_100262b68(param_1);
  return;
}




void FUN_100262de8(long *param_1,long param_2)

{
  string *this;
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  uint uVar4;
  string sVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  void *pvVar15;
  string *psVar16;
  byte *pbVar17;
  string *psVar18;
  ulong uVar19;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  float local_7c;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  this = (string *)(param_1 + 0x2709);
  std::string::operator=(this,(string *)(param_2 + 0x28));
  lVar9 = FUN_10015d3ec();
  bVar6 = *(byte *)(lVar9 + 0x54a7);
  uVar13 = (ulong)bVar6;
  sVar3 = *(size_t *)(lVar9 + 0x5498);
  if (-1 < (char)bVar6) {
    sVar3 = uVar13;
  }
  bVar7 = *(byte *)((long)param_1 + 0x1385f);
  uVar19 = (ulong)bVar7;
  sVar1 = param_1[0x270a];
  if (-1 < (char)bVar7) {
    sVar1 = uVar19;
  }
  if (sVar3 == sVar1) {
    pvVar15 = *(void **)(lVar9 + 0x5490);
    puVar2 = pvVar15;
    if (-1 < (char)bVar6) {
      puVar2 = (undefined8 *)(lVar9 + 0x5490);
    }
    psVar18 = *(string **)this;
    if (-1 < (char)bVar7) {
      psVar18 = this;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) goto LAB_100262f08;
      iVar11 = _memcmp(puVar2,psVar18,sVar3);
      bVar8 = iVar11 == 0;
    }
    else if (sVar3 == 0) {
LAB_100262f08:
      bVar8 = true;
    }
    else {
      if ((uint)(byte)*psVar18 != ((uint)pvVar15 & 0xff)) goto LAB_100262ee8;
      psVar16 = (string *)(lVar9 + 0x5491);
      do {
        uVar13 = uVar13 - 1;
        psVar18 = psVar18 + 1;
        bVar8 = uVar13 == 0;
        if (uVar13 == 0) break;
        sVar5 = *psVar16;
        psVar16 = psVar16 + 1;
      } while (sVar5 == *psVar18);
    }
  }
  else {
LAB_100262ee8:
    bVar8 = false;
  }
  *(bool *)((long)param_1 + 0x13864) = bVar8;
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar3) {
    psVar18 = *(string **)this;
    if (-1 < (char)bVar7) {
      psVar18 = this;
    }
    pbVar17 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar17 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar1 == 0) || (iVar11 = _memcmp(psVar18,pbVar17,sVar1), iVar11 == 0))
      goto LAB_1002631b0;
    }
    else {
      if (sVar1 == 0) goto LAB_1002631b0;
      if ((uint)*pbVar17 == ((uint)*(string **)this & 0xff)) {
        pbVar14 = (byte *)((long)param_1 + 0x13849);
        do {
          uVar19 = uVar19 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar19 == 0) goto LAB_1002631b0;
          bVar6 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar6 == *pbVar17);
      }
    }
  }
  if (*(char *)(param_2 + 0xb8) != '\0') {
    FUN_1004e3170(auStack_68,param_2 + 0x40);
    FUN_1006513c0(param_1 + 0x285,auStack_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    FUN_1004e3170(auStack_68,param_2 + 0x58);
    FUN_1001d0b14(param_1 + 0x105,auStack_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    FUN_1004d2698(auStack_68,"%d/%d");
    FUN_1004e3120(auStack_78,auStack_68);
    FUN_1006513c0(param_1 + 0x133b,auStack_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
    FUN_1004d2698(auStack_68,"%d");
    FUN_1004e3120(auStack_78,auStack_68);
    FUN_1006513c0(param_1 + 0x1399,auStack_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
    FUN_1001c7990(param_1 + 0x369,*(undefined4 *)(param_2 + 0x7c));
    uVar10 = FUN_100126b4c();
    FUN_1001e35ec(param_1,uVar10,&local_7c,auStack_80,auStack_84);
    iVar11 = (int)(*(float *)(param_2 + 0x80) * 1000.0);
    FUN_1001c6480(local_7c * 0.4,0x42580000,param_1 + 0x4d7,0,1000,iVar11,iVar11,0,0);
    FUN_1001c6b50(*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),
                  *(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c),param_1 + 0x4d7,
                  *(undefined4 *)(param_2 + 0x7c));
    FUN_1002631e4(param_1);
    *(undefined1 *)((long)param_1 + 0x13865) = 0;
    FUN_10015d3ec();
    uVar10 = FUN_100164f34();
    thunk_FUN_1004e439c(auStack_78,uVar10);
    uVar4 = *(uint *)(param_2 + 0x98);
    if (uVar4 != 0) {
      lVar9 = 0;
      do {
        iVar11 = FUN_1004e3654(*(long *)(param_2 + 0xa0) + lVar9 + 0x18,auStack_78);
        lVar12 = *(long *)(param_2 + 0xa0);
        if (iVar11 != 0) {
          *(undefined1 *)((long)param_1 + 0x13865) = *(undefined1 *)(lVar12 + lVar9 + 0x34);
        }
        FUN_100263288(param_1,lVar12 + lVar9);
        lVar9 = lVar9 + 0x38;
      } while ((ulong)uVar4 * 0x38 - lVar9 != 0);
    }
    FUN_100262b68(param_1);
    (**(code **)(*param_1 + 0x150))(param_1);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
LAB_1002631b0:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1002631e4(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x5220);
  *(uint *)(param_1 + 0x9e84) = *(uint *)(param_1 + 0x9e84) & 0xfffffffb;
  *(uint *)(param_1 + 0x9f74) = *(uint *)(param_1 + 0x9f74) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x13860) = 0xffffffff;
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x5228);
      plVar2 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar4 = *(long *)(param_1 + 0x5228);
        uVar3 = *puVar1;
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0x5228) != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_100263288(long param_1,string *param_2)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 auStack_88 [8];
  void *local_80;
  long local_78;
  code *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  if (param_2 == (string *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 0x30) != 1) {
    return;
  }
  pvVar3 = operator_new(0xbc8);
  local_78 = FUN_1002647ac();
  std::string::operator=((string *)(local_78 + 0xba8),param_2);
  FUN_1006513c0((long)pvVar3 + 0x178,param_2 + 0x18);
  *(uint *)((long)pvVar3 + 0x10c) =
       *(uint *)((long)pvVar3 + 0x10c) & 0xfffffffb | (uint)(byte)param_2[0x35] << 2;
  uVar4 = FUN_1004e0150("MENU_USERTEAM_VALUE_STATUS",0);
  thunk_FUN_1004e439c(auStack_88,uVar4);
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0:
    if (*(int *)(param_2 + 0x2c) < 1) {
      uVar4 = FUN_1004e0150("MENU_GUILD_STATUS_NEVER_PLAYED",0);
      FUN_1006513c0((long)pvVar3 + 0x2a8,uVar4);
    }
    else {
      FUN_1000f1e20(&local_70,auStack_88,*(int *)(param_2 + 0x2c),1);
      FUN_1006513c0((long)pvVar3 + 0x2a8,&local_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
    goto switchD_10026333c_default;
  case 1:
    pcVar5 = "MENU_GUILD_AVAILABILITY_ONLINE";
    break;
  case 2:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_IN_GAME";
    break;
  case 3:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_IN_PARTY";
    break;
  case 4:
    pcVar5 = "MENU_GUILD_AVAILABILITY_BUSY_MATCHING";
    break;
  default:
    goto switchD_10026333c_default;
  }
  uVar4 = FUN_1004e0150(pcVar5,0);
  FUN_1006513c0((long)pvVar3 + 0x2a8,uVar4);
  if ((~*(uint *)((long)pvVar3 + 0x32c) & 0x7f80) != 0) {
    *(uint *)((long)pvVar3 + 0x32c) = *(uint *)((long)pvVar3 + 0x32c) | 0x7f80;
    FUN_1000200a0((long)pvVar3 + 0x2a8);
  }
switchD_10026333c_default:
  if (param_2[0x36] == (string)0x0) {
    FUN_10015d3ec();
    uVar4 = FUN_100164f34();
    iVar2 = FUN_1004e36c0(param_2 + 0x18,uVar4);
    uVar6 = 4;
    if (iVar2 == 0) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  *(uint *)((long)pvVar3 + 0x63c) = *(uint *)((long)pvVar3 + 0x63c) & 0xfffffffb | uVar6;
  FUN_100651460((long)pvVar3 + 0x178,&DAT_10115a168);
  puVar1 = (uint *)(param_1 + 0x5220);
  local_50 = (ulong)*puVar1;
  local_48 = DAT_101dbd460;
  local_70 = FUN_100264250;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c((long)pvVar3 + 0x180,&local_70);
  local_50 = (ulong)*puVar1;
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100264250;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c((long)pvVar3 + 0x180,&local_70);
  FUN_100642bd8(param_1 + 0x4638,pvVar3,1);
  FUN_100264270(puVar1,&local_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}




void FUN_10026350c(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_bc;
  undefined4 uStack_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 *local_a8;
  
  uVar7 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar7,&local_ac,&local_b0,&local_b4);
  iVar6 = FUN_100126c88();
  fVar19 = local_ac - local_b4;
  fVar21 = fVar19 * 0.5;
  lVar8 = FUN_10003d5bc(param_1);
  fVar20 = *(float *)(lVar8 + 0xc);
  FUN_100641464(&uStack_b8,&local_bc);
  FUN_10064e47c(uStack_b8,local_bc,param_1 + 0x150);
  lVar12 = param_1 + 0x1428;
  lVar8 = param_1 + 0x828;
  fVar14 = (float)FUN_1001d0b90(lVar8);
  FUN_10065179c((fVar19 + -80.0) - (fVar14 + fVar14),0,0x3f800000,lVar12);
  fVar14 = 310.0;
  if (iVar6 == 0) {
    fVar14 = 260.0;
  }
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1468) == fVar21) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x146c)) && !NAN(fVar14))) {
    bVar5 = *(float *)(param_1 + 0x146c) == fVar14;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x1468) = fVar21;
    *(float *)(param_1 + 0x146c) = fVar14;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1428) + 0x28))(lVar12,&local_a8);
  FUN_1001d08f8(lVar8,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10064e72c(0xc1a00000,lVar8,1,lVar12,3);
  FUN_10064e72c(0,lVar8,5,lVar12,5);
  lVar8 = param_1 + 0x1558;
  fVar14 = 0.75;
  if (iVar6 == 0) {
    fVar14 = 0.5;
  }
  if ((*(float *)(param_1 + 0x15a0) != fVar14) || (*(float *)(param_1 + 0x15a4) != fVar14)) {
    *(float *)(param_1 + 0x15a0) = fVar14;
    *(float *)(param_1 + 0x15a4) = fVar14;
    FUN_1000200a0(lVar8);
  }
  fVar18 = *(float *)(param_1 + 0x1468);
  fVar14 = (float)FUN_10064259c(lVar12);
  fVar15 = (float)FUN_10064259c(lVar8);
  fVar18 = fVar18 + 20.0;
  fVar15 = fVar18 + (fVar15 + fVar14) * 0.5;
  fVar14 = *(float *)(param_1 + 0x146c);
  FUN_10064e3cc(lVar8);
  fVar14 = fVar14 + fVar18 * 0.25;
  if ((*(float *)(param_1 + 0x1598) != fVar15) || (*(float *)(param_1 + 0x159c) != fVar14)) {
    *(float *)(param_1 + 0x1598) = fVar15;
    *(float *)(param_1 + 0x159c) = fVar14;
    FUN_1000200a0(lVar8);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1558) + 0x28))(lVar8,&local_a8);
  fVar15 = fVar19 * 0.25;
  lVar8 = param_1 + 0x1b48;
  fVar14 = (40.0 - fVar20) + local_b0 * 0.56;
  fVar18 = *(float *)(param_1 + 0x1b88);
  if ((fVar18 != fVar15) || (fVar18 = *(float *)(param_1 + 0x1b8c), fVar18 != fVar14)) {
    *(float *)(param_1 + 0x1b88) = fVar15;
    *(float *)(param_1 + 0x1b8c) = fVar14;
    FUN_1000200a0(lVar8);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1b48) + 0x28))(lVar8,&local_a8);
  FUN_1006425d0(lVar8,0,0,1,1);
  FUN_10064e72c(fVar18 * -0.16666667,lVar8,0,lVar12,2);
  lVar12 = param_1 + 0x26b8;
  fVar14 = (float)FUN_1001c6d90(lVar12);
  fVar15 = fVar15 + fVar14 * -0.5;
  fVar14 = -(local_b0 * -0.88) - (fVar20 + 40.0);
  if ((*(float *)(param_1 + 0x26f8) != fVar15) || (*(float *)(param_1 + 0x26fc) != fVar14)) {
    *(float *)(param_1 + 0x26f8) = fVar15;
    *(float *)(param_1 + 0x26fc) = fVar14;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x26b8) + 0x28))(lVar12,&local_a8);
  FUN_10064e72c(0xc2c80000,lVar12,0,lVar8,2);
  fVar15 = fVar19 * 0.515;
  fVar14 = fVar19 * 0.485;
  lVar12 = param_1 + 0x4950;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x4994) == 0.0) && (bVar5 = false, !NAN(*(float *)(param_1 + 0x4990))))
  {
    bVar5 = *(float *)(param_1 + 0x4990) == 0.0;
  }
  if (!bVar5) {
    *(undefined8 *)(param_1 + 0x4990) = 0;
    FUN_1000200a0(lVar12);
  }
  fVar18 = fVar14 + -88.0;
  local_a8 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x4950) + 0x28))(lVar12,&local_a8);
  if ((*(float *)(param_1 + 0x4678) != fVar15) || (*(float *)(param_1 + 0x467c) != local_b0 * 0.47))
  {
    *(float *)(param_1 + 0x4678) = fVar15;
    *(float *)(param_1 + 0x467c) = local_b0 * 0.47;
    FUN_1000200a0(param_1 + 0x4638);
  }
  FUN_100530b0c(0x41f00000,0,lVar12);
  fVar17 = local_b0 - *(float *)(param_1 + 0x467c);
  FUN_10064e47c(fVar18,param_1 + 0x47b0);
  lVar12 = param_1 + 0x50f0;
  FUN_10064259c(lVar12);
  fVar17 = fVar17 + 6.0;
  FUN_10064e47c(fVar18,fVar17,param_1 + 0x5000);
  fVar22 = fVar14 + -218.0;
  if ((*(float *)(param_1 + 0x5130) != fVar22) || (*(float *)(param_1 + 0x5134) != fVar17 * 0.5)) {
    *(float *)(param_1 + 0x5130) = fVar22;
    *(float *)(param_1 + 0x5134) = fVar17 * 0.5;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x50f0) + 0x28))(lVar12,&local_a8);
  fVar17 = *(float *)(param_1 + 0x4fbc) + fVar17;
  if (*(int *)(param_1 + 0x5220) == 0) {
    fVar14 = 49.0;
  }
  else {
    uVar13 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 0x5228) + uVar13 * 8);
      if (uVar13 != *(uint *)(param_1 + 0x13860)) {
        bVar5 = false;
        if ((*(float *)(lVar12 + 0x40) == 0.0) &&
           (bVar5 = false, !NAN(*(float *)(lVar12 + 0x44)) && !NAN(fVar17))) {
          bVar5 = *(float *)(lVar12 + 0x44) == fVar17;
        }
        if (!bVar5) {
          *(undefined4 *)(lVar12 + 0x40) = 0;
          *(float *)(lVar12 + 0x44) = fVar17;
          FUN_1000200a0(lVar12);
        }
      }
      lVar11 = lVar12 + 0x178;
      FUN_10065179c(0x43f70000,0,0x3f800000,lVar11);
      bVar5 = false;
      if ((*(float *)(lVar12 + 200) == 46.0) && (bVar5 = false, !NAN(*(float *)(lVar12 + 0xcc)))) {
        bVar5 = *(float *)(lVar12 + 0xcc) == 49.0;
      }
      if (!bVar5) {
        *(undefined8 *)(lVar12 + 200) = 0x4244000042380000;
        FUN_1000200a0(lVar12 + 0x88);
      }
      local_a8 = (undefined1 *)0x3f0000003f800000;
      (**(code **)(*(long *)(lVar12 + 0x88) + 0x28))(lVar12 + 0x88,&local_a8);
      bVar5 = false;
      if ((*(float *)(lVar12 + 0x1b8) == 56.0) && (bVar5 = false, !NAN(*(float *)(lVar12 + 0x1bc))))
      {
        bVar5 = *(float *)(lVar12 + 0x1bc) == 49.0;
      }
      if (!bVar5) {
        *(undefined8 *)(lVar12 + 0x1b8) = 0x4244000042600000;
        FUN_1000200a0(lVar11);
      }
      local_a8 = (undefined1 *)0x3f00000000000000;
      (**(code **)(*(long *)(lVar12 + 0x178) + 0x28))(lVar11,&local_a8);
      bVar5 = false;
      if ((*(float *)(lVar12 + 0x2e8) == fVar22) &&
         (bVar5 = false, !NAN(*(float *)(lVar12 + 0x2ec)))) {
        bVar5 = *(float *)(lVar12 + 0x2ec) == 49.0;
      }
      if (!bVar5) {
        *(float *)(lVar12 + 0x2e8) = fVar22;
        *(undefined4 *)(lVar12 + 0x2ec) = 0x42440000;
        FUN_1000200a0(lVar12 + 0x2a8);
      }
      local_a8 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar12 + 0x2a8) + 0x28))(lVar12 + 0x2a8,&local_a8);
      FUN_10064e47c(fVar18,0x42c40000,lVar12 + 0x3d8);
      FUN_10064e47c(fVar14 + -144.0,0x40000000,lVar12 + 0x4c8);
      if ((*(float *)(lVar12 + 0x508) != 28.0) || (*(float *)(lVar12 + 0x50c) != 0.0)) {
        *(undefined8 *)(lVar12 + 0x508) = 0x41e00000;
        FUN_1000200a0(lVar12 + 0x4c8);
      }
      uVar3 = *(uint *)(lVar12 + 0x45c);
      uVar10 = 0x4c;
      if ((uVar13 & 1) != 0) {
        uVar10 = 0x7f;
      }
      if (uVar10 != (uVar3 >> 7 & 0xff)) {
        *(uint *)(lVar12 + 0x45c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar10 << 7;
        FUN_1000200a0(lVar12 + 0x3d8);
      }
      plVar1 = (long *)(lVar12 + 0x5b8);
      fVar16 = (float)FUN_10064259c(plVar1);
      fVar16 = fVar14 + -83.0 + fVar16 * 0.5;
      bVar5 = false;
      if ((*(float *)(lVar12 + 0x5f8) == fVar16) &&
         (bVar5 = false, !NAN(*(float *)(lVar12 + 0x5fc)))) {
        bVar5 = *(float *)(lVar12 + 0x5fc) == 49.0;
      }
      if (!bVar5) {
        *(float *)(lVar12 + 0x5f8) = fVar16;
        *(undefined4 *)(lVar12 + 0x5fc) = 0x42440000;
        FUN_1000200a0(plVar1);
      }
      local_a8 = &DAT_3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
      if (uVar13 < 2) {
        *(uint *)(lVar12 + 0x54c) = *(uint *)(lVar12 + 0x54c) & 0xfffffffb;
      }
      fVar17 = fVar17 + 98.0;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_1 + 0x5220));
    fVar14 = (float)*(uint *)(param_1 + 0x5220) * 98.0 + 49.0;
  }
  fVar22 = fVar18 * 0.5;
  FUN_10064e47c(fVar18,fVar14,param_1 + 0x46c0);
  lVar12 = param_1 + 0x4e88;
  fVar14 = 240.0;
  FUN_10064e47c(fVar18,lVar12);
  if ((*(float *)(param_1 + 0x4ec8) != 0.0) || (*(float *)(param_1 + 0x4ecc) != fVar17)) {
    *(undefined4 *)(param_1 + 0x4ec8) = 0;
    *(float *)(param_1 + 0x4ecc) = fVar17;
    FUN_1000200a0(lVar12);
  }
  local_a8 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x4e88) + 0x28))(lVar12,&local_a8);
  lVar12 = param_1 + 0x5230;
  FUN_10064259c(lVar12);
  fVar14 = fVar17 + 19.0 + fVar14 * 0.5;
  if ((*(float *)(param_1 + 0x5270) != fVar22) || (*(float *)(param_1 + 0x5274) != fVar14)) {
    *(float *)(param_1 + 0x5270) = fVar22;
    *(float *)(param_1 + 0x5274) = fVar14;
    FUN_1000200a0(lVar12);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5230) + 0x28))(lVar12,&local_a8);
  lVar11 = param_1 + 0x5360;
  fVar14 = (float)FUN_10064259c(lVar12);
  fVar17 = (float)FUN_10065317c(lVar11);
  fVar14 = fVar22 + 10.0 + (fVar17 + fVar14) * 0.5;
  if ((*(float *)(param_1 + 0x53a0) != fVar14) ||
     (*(float *)(param_1 + 0x53a4) != *(float *)(param_1 + 0x5274))) {
    *(float *)(param_1 + 0x53a0) = fVar14;
    *(float *)(param_1 + 0x53a4) = *(float *)(param_1 + 0x5274);
    FUN_1000200a0(lVar11);
  }
  plVar1 = (long *)(param_1 + 0x96a8);
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5360) + 0x28))(lVar11,&local_a8);
  lVar11 = param_1 + 0x5450;
  fVar14 = (float)FUN_10064259c(lVar11);
  fVar14 = fVar22 + fVar15 + 20.0 + fVar14 * 0.5;
  if ((*(float *)(param_1 + 0x5490) != fVar14) || (*(float *)(param_1 + 0x5494) != local_b0 * 0.42))
  {
    *(float *)(param_1 + 0x5490) = fVar14;
    *(float *)(param_1 + 0x5494) = local_b0 * 0.42;
    FUN_1000200a0(lVar11);
  }
  plVar2 = (long *)(param_1 + 0x9578);
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5450) + 0x28))(lVar11,&local_a8);
  lVar11 = param_1 + 0x6a08;
  fVar14 = (float)FUN_10064259c(lVar11);
  fVar14 = fVar22 + fVar15 + fVar14 * -0.5 + -20.0;
  fVar15 = local_b0 * 0.42;
  if ((*(float *)(param_1 + 0x6a48) != fVar14) || (*(float *)(param_1 + 0x6a4c) != fVar15)) {
    *(float *)(param_1 + 0x6a48) = fVar14;
    *(float *)(param_1 + 0x6a4c) = fVar15;
    FUN_1000200a0(lVar11);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x6a08) + 0x28))(lVar11,&local_a8);
  fVar14 = local_b0;
  FUN_10065317c(plVar1);
  fVar14 = (fVar14 + -35.0) - (fVar20 + fVar15);
  fVar20 = *(float *)(param_1 + 0x96e8);
  if ((fVar20 != fVar21) || (fVar20 = *(float *)(param_1 + 0x96ec), fVar20 != fVar14)) {
    *(float *)(param_1 + 0x96e8) = fVar21;
    *(float *)(param_1 + 0x96ec) = fVar14;
    FUN_1000200a0(plVar1);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
  fVar14 = *(float *)(param_1 + 0x96ec);
  FUN_10065317c(plVar1);
  fVar14 = fVar14 + fVar20 * -0.5 + -5.0;
  fVar20 = *(float *)(param_1 + 0x95b8);
  if ((fVar20 != fVar21) || (fVar20 = *(float *)(param_1 + 0x95bc), fVar20 != fVar14)) {
    *(float *)(param_1 + 0x95b8) = fVar21;
    *(float *)(param_1 + 0x95bc) = fVar14;
    FUN_1000200a0(plVar2);
  }
  local_a8 = (undefined1 *)0x3f8000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  FUN_10064e3cc(param_1 + 0x7fc0);
  fVar20 = fVar20 * 0.5;
  FUN_10064e5ec(0,param_1 + 0x7fc0,0,lVar8,3);
  bVar4 = *(byte *)(param_1 + 0x13864);
  *(uint *)(param_1 + 0x8044) = *(uint *)(param_1 + 0x8044) & 0xfffffffb | (uint)bVar4 << 2;
  *(uint *)(param_1 + 0x972c) = *(uint *)(param_1 + 0x972c) & 0xfffffffb | (uint)bVar4 << 2;
  *(uint *)(param_1 + 0x95fc) = *(uint *)(param_1 + 0x95fc) & 0xfffffffb | (uint)bVar4 << 2;
  FUN_10064259c(param_1 + 0x98a8);
  lVar8 = 0;
  bVar5 = true;
  do {
    bVar9 = bVar5;
    lVar11 = param_1 + lVar8 * 0x2f0;
    plVar1 = (long *)(lVar11 + 0x9820);
    fVar14 = (fVar20 + 6.0) * (float)(int)lVar8;
    fVar21 = *(float *)(lVar11 + 0x9860);
    fVar15 = *(float *)(lVar11 + 0x9864);
    bVar5 = false;
    if ((fVar21 == 0.0) && (bVar5 = false, !NAN(fVar15) && !NAN(fVar14))) {
      bVar5 = fVar15 == fVar14;
    }
    if (!bVar5) {
      *(float *)(lVar11 + 0x9860) = 0.0;
      *(float *)(lVar11 + 0x9864) = fVar14;
      FUN_1000200a0(plVar1);
    }
    local_a8 = &DAT_3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_a8);
    lVar8 = 1;
    bVar5 = false;
  } while (bVar9);
  fVar14 = *(float *)(param_1 + 0x5274);
  FUN_10064259c(lVar12);
  fVar14 = fVar14 + 40.0 + fVar21 * 0.5;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x97d8) == fVar22) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x97dc)) && !NAN(fVar14))) {
    bVar5 = *(float *)(param_1 + 0x97dc) == fVar14;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x97d8) = fVar22;
    *(float *)(param_1 + 0x97dc) = fVar14;
    FUN_1000200a0(param_1 + 0x9798);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x9798) + 0x28))(param_1 + 0x9798,&local_a8);
  FUN_10053093c(fVar19,local_b0,param_1 + 0x2f0);
  FUN_100530adc(param_1 + 0x2f0,0,*(undefined1 *)(param_1 + 0x13866));
  *(uint *)(param_1 + 0x374) =
       *(uint *)(param_1 + 0x374) & 0xffffffef | (uint)*(byte *)(param_1 + 0x13866) << 4;
  FUN_10064e47c(local_ac,local_b0,param_1 + 0x9e00);
  FUN_10064e47c(fVar18,0x42ec0000,param_1 + 0x9ef0);
  fVar14 = (float)FUN_10064e3cc(param_1 + 0xa118);
  fVar14 = fVar14 * 0.5 + 56.0;
  fVar20 = *(float *)(param_1 + 0xa158);
  if (fVar20 != fVar14) {
    *(float *)(param_1 + 0xa158) = fVar14;
    FUN_1000200a0(param_1 + 0xa118);
  }
  FUN_100227610(param_1 + 0xb6d0);
  fVar14 = DAT_101854a80;
  FUN_1006425d0(param_1 + 0x13308,0,0,1,1);
  fVar14 = fVar14 + 20.0 + fVar20 * 0.5;
  if ((*(float *)(param_1 + 0x13348) != fVar19 + -88.0) || (*(float *)(param_1 + 0x1334c) != fVar14)
     ) {
    *(float *)(param_1 + 0x13348) = fVar19 + -88.0;
    *(float *)(param_1 + 0x1334c) = fVar14;
    FUN_1000200a0(param_1 + 0x13308);
  }
  return;
}




void FUN_100264250(long param_1)

{
  undefined8 in_x4;
  
  if (*(char *)(param_1 + 0x13865) != '\0') {
    FUN_100262390(param_1,1,in_x4);
    return;
  }
  return;
}




void FUN_100264270(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100264c60(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002642f0(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x13865) != '\0') {
    puVar1 = (uint *)(param_1 + 0x13860);
    if ((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x5220))) {
      iVar2 = FUN_10015d3f8();
      if (iVar2 != 0) {
        FUN_10015d3ec();
        uVar3 = FUN_100164f34();
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x5228) + (ulong)*puVar1 * 8) + 0x248);
        iVar2 = FUN_1004e3654(uVar3,uVar4);
        if (iVar2 == 0) {
          uVar3 = FUN_10015d3ec();
          FUN_100167c54(uVar3,*(long *)(*(long *)(param_1 + 0x5228) + (ulong)*puVar1 * 8) + 0xba8);
        }
        else {
          FUN_1002629d0(param_1);
        }
      }
      FUN_100262390(param_1,0,*puVar1);
      return;
    }
  }
  return;
}




void FUN_1002643c4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *local_138;
  void *local_130;
  undefined7 local_128;
  char cStack_121;
  char local_111;
  undefined4 local_110;
  undefined8 local_10c;
  undefined1 auStack_100 [8];
  void *local_f8;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [16];
  long local_c8;
  code *pcStack_c0;
  long local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  char local_69;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  thunk_FUN_1001cd434(&local_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_TEAM_OVERVIEW_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  do {
    FUN_1004e3120(&local_138,"[SEASON_NAME]");
    FUN_1000f0f78(auStack_100,0,0,0);
    uVar3 = FUN_1004e3bc4(auStack_f0,0,&local_138,auStack_100);
    if (local_f8 != (void *)0x0) {
      operator_delete__(local_f8);
    }
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
    }
  } while ((uVar3 & 1) != 0);
  thunk_FUN_1004e439c(&local_138,auStack_f0);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_b0 = param_1 + 0x13390;
  local_38 = 2;
  local_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  local_4c = 0x447a0000;
  if (iVar1 == 0) {
    local_4c = 0x44480000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&local_90,uVar2);
  pcStack_c0 = FUN_1002645cc;
  local_c8 = param_1;
  FUN_10001549c(&local_138,"teamOverviewSeasonLabel");
  FUN_1001cefb8(param_1 + 0x13760,&local_138,&local_e0);
  if (cStack_121 < '\0') {
    operator_delete(local_138);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
  }
  local_e0 = &PTR_FUN_1014666e0;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void FUN_1002645cc(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b408();
  if (iVar1 != 0) {
    FUN_10052b410("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void thunk_FUN_100262a8c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    FUN_10015d3ec();
    FUN_100167c98();
    uVar2 = FUN_100644a94("LeavingUserTeam");
    FUN_100644aec(auStack_40,uVar2,0);
    FUN_100644c34(param_1,auStack_40,1);
    if (*(float *)(param_1 + 0x334) != 0.0) {
      *(undefined4 *)(param_1 + 0x334) = 0;
      FUN_1000200a0(param_1 + 0x2f0);
    }
  }
  return;
}




long * FUN_1002645f8(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  *puVar3 = &PTR_FUN_10147bb38;
  puVar3 = puVar3 + 0x11;
  thunk_FUN_100650e64(puVar3);
  plVar1 = param_1 + 0x37;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x5d) = 0x41e00000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(puVar3,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar2 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar2 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x10c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
    FUN_1000200a0(puVar3);
  }
  if ((*(float *)(param_1 + 0x19) != -*(float *)(param_1 + 0x5d)) ||
     (*(float *)((long)param_1 + 0xcc) != 0.0)) {
    *(float *)(param_1 + 0x19) = -*(float *)(param_1 + 0x5d);
    *(undefined4 *)((long)param_1 + 0xcc) = 0;
    FUN_1000200a0(puVar3);
  }
  local_38 = 0x3f0000003f800000;
  (**(code **)(param_1[0x11] + 0x28))(puVar3,&local_38);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  uVar2 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar2 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x23c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x3f) != *(float *)(param_1 + 0x5d)) ||
     (*(float *)((long)param_1 + 0x1fc) != 0.0)) {
    *(float *)(param_1 + 0x3f) = *(float *)(param_1 + 0x5d);
    *(undefined4 *)((long)param_1 + 0x1fc) = 0;
    FUN_1000200a0(plVar1);
  }
  local_38 = 0x3f00000000000000;
  (**(code **)(param_1[0x37] + 0x28))(plVar1,&local_38);
  return param_1;
}




long * FUN_1002647ac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  long lVar9;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_thunk_FUN_100264cdc_10147bc38;
  puVar7 = puVar7 + 0x11;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x55;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7b;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x99;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xb7;
  thunk_FUN_100183990(plVar5,0);
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar6 = *(uint *)((long)param_1 + 0x45c);
  if ((uVar6 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0x45c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x1300;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) | 0x10;
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar6 = *(uint *)((long)param_1 + 0x54c);
  if ((uVar6 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x54c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0xc80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(puVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_crown");
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar6 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1fc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar1);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x32c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar2);
  }
  plVar1 = param_1 + 0x151;
  FUN_100652cdc(plVar1,"generic_invite_friend");
  uVar6 = *(uint *)((long)param_1 + 0xb0c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xb0c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  fVar8 = (float)FUN_100652e60(plVar1);
  fVar8 = 56.0 / fVar8;
  if ((*(float *)(param_1 + 0x15a) != fVar8) || (*(float *)((long)param_1 + 0xad4) != fVar8)) {
    *(float *)(param_1 + 0x15a) = fVar8;
    *(float *)((long)param_1 + 0xad4) = fVar8;
    FUN_1000200a0(plVar1);
  }
  uVar6 = *(uint *)((long)param_1 + 0x92c);
  if ((uVar6 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x92c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x115);
  }
  FUN_100183c68(0x3f19999a,plVar5,&DAT_10115a168);
  FUN_1001b495c(0,plVar5);
  FUN_100183c68(0x3f666666,plVar5,&DAT_10115a168);
  lVar9 = NEON_fmov(0xc1200000,4);
  param_1[0xc2] = lVar9;
  FUN_100183c78(0x3f59999a,0x3fa00000,plVar5);
  local_58 = DAT_101d91884;
  local_80 = thunk_FUN_100264b5c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0xb8,&local_80);
  *(uint *)((long)param_1 + 0x63c) = *(uint *)((long)param_1 + 0x63c) & 0xfffffffb;
  FUN_1001b4964(plVar5,1);
  return param_1;
}




void thunk_FUN_100264b5c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  uVar2 = FUN_100655b6c(param_1 + 0x248);
  thunk_FUN_1004e439c(auStack_30,uVar2);
  iVar1 = FUN_1004e36c0(auStack_30,&DAT_101d91650);
  if (iVar1 != 0) {
    FUN_100111870(auStack_30);
  }
  param_1 = param_1 + 0x5b8;
  FUN_1001b4c0c(param_1,0);
  FUN_100642324(param_1);
  uVar2 = FUN_100640840(0,0x3e99999a,0);
  FUN_100642b14(param_1,uVar2);
  uVar2 = FUN_100047300();
  FUN_100642b14(param_1,uVar2);
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  return;
}




void FUN_100264b5c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar2 = FUN_100655b6c(param_1 + 0x248);
  thunk_FUN_1004e439c(auStack_30,uVar2);
  iVar1 = FUN_1004e36c0(auStack_30,&DAT_101d91650);
  if (iVar1 != 0) {
    FUN_100111870(auStack_30);
  }
  param_1 = param_1 + 0x5b8;
  FUN_1001b4c0c(param_1,0);
  FUN_100642324(param_1);
  uVar2 = FUN_100640840(0,0x3e99999a,0);
  FUN_100642b14(param_1,uVar2);
  uVar2 = FUN_100047300();
  FUN_100642b14(param_1,uVar2);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_100264c04(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10147bb38;
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_100264cdc(void)

{
  FUN_100264cdc();
  return;
}




void FUN_100264c4c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100264cdc();
  operator_delete(pvVar1);
  return;
}




void FUN_100264c60(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100264cdc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100264cdc_10147bc38;
  if (*(char *)((long)param_1 + 0xbbf) < '\0') {
    operator_delete((void *)param_1[0x175]);
  }
  param_1[0xb7] = &PTR_FUN_10145f300;
  param_1[0x151] = &PTR_FUN_1014a7108;
  param_1[0x168] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x16b);
  FUN_10064e2bc(param_1 + 0x151);
  param_1[0x133] = &PTR_FUN_1014a7108;
  param_1[0x14a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14d);
  FUN_10064e2bc(param_1 + 0x133);
  param_1[0x115] = &PTR_FUN_1014a7108;
  param_1[300] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12f);
  FUN_10064e2bc(param_1 + 0x115);
  FUN_10064221c(param_1 + 0x104);
  FUN_10003bec8(param_1 + 0xb7);
  param_1[0x99] = &PTR_FUN_1014a7108;
  param_1[0xb0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb3);
  FUN_10064e2bc(param_1 + 0x99);
  param_1[0x7b] = &PTR_FUN_1014a7108;
  param_1[0x92] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x95);
  FUN_10064e2bc(param_1 + 0x7b);
  thunk_FUN_100651068(param_1 + 0x55);
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




undefined8 * FUN_100264e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  lVar8 = FUN_1001e6910();
  FUN_10014f4a0(lVar8 + 0x2c30);
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  puVar1 = param_1 + 0x589;
  thunk_FUN_100652c08(puVar1);
  puVar2 = param_1 + 0x5a7;
  FUN_10064e264(puVar2);
  puVar3 = param_1 + 0x5be;
  FUN_10053077c(puVar3,0);
  param_1[0x667] = 0;
  puVar4 = param_1 + 0x668;
  thunk_FUN_1001c81d8(puVar4);
  puVar5 = param_1 + 0x7c2;
  thunk_FUN_100260edc(puVar5);
  puVar6 = param_1 + 0x2ecf;
  thunk_FUN_10025fd1c(puVar6);
  param_1[0x31e3] = 0;
  param_1[0x31e0] = 0;
  param_1[0x31df] = 0;
  param_1[0x31e2] = 0;
  param_1[0x31e1] = 0;
  *(undefined2 *)(param_1 + 0x31e4) = 1;
  *(undefined1 *)((long)param_1 + 0x18f22) = 1;
  FUN_100642bd8(param_1 + 0x2e,puVar1,1);
  FUN_100642bd8(param_1 + 0x2e,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_1005308f8(puVar3,puVar5,1);
  FUN_1005308f8(puVar3,puVar6,1);
  FUN_1005308f8(puVar3,puVar4,1);
  FUN_100652cac(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x2ccc);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ccc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100530adc(puVar3,0,1);
  param_1[0x665] = puVar5;
  param_1[0x666] = puVar6;
  local_90 = 0;
  uStack_88 = 0;
  uVar9 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_90,uVar9);
  uVar9 = FUN_1004e0150("MENU_TEAM_TAB_TROPHIES",0);
  FUN_10010b098(&local_90,uVar9);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,puVar4,&local_90);
  FUN_1001c9460(0xcd,puVar4);
  local_58 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_80 = FUN_1002650d0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  puStack_78 = param_1;
  FUN_10001554c(param_1 + 0x669,&local_80);
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,puVar5,1,4,0);
  FUN_10010b1a8(&local_90,1);
  return param_1;
}




void FUN_1002650d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10026609c(param_1,param_4);
  return;
}




undefined8 * thunk_FUN_100264e14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar8 = FUN_1001e6910();
  FUN_10014f4a0(lVar8 + 0x2c30);
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  puVar1 = param_1 + 0x589;
  thunk_FUN_100652c08(puVar1);
  puVar2 = param_1 + 0x5a7;
  FUN_10064e264(puVar2);
  puVar3 = param_1 + 0x5be;
  FUN_10053077c(puVar3,0);
  param_1[0x667] = 0;
  puVar4 = param_1 + 0x668;
  thunk_FUN_1001c81d8(puVar4);
  puVar5 = param_1 + 0x7c2;
  thunk_FUN_100260edc(puVar5);
  puVar6 = param_1 + 0x2ecf;
  thunk_FUN_10025fd1c(puVar6);
  param_1[0x31e3] = 0;
  param_1[0x31e0] = 0;
  param_1[0x31df] = 0;
  param_1[0x31e2] = 0;
  param_1[0x31e1] = 0;
  *(undefined2 *)(param_1 + 0x31e4) = 1;
  *(undefined1 *)((long)param_1 + 0x18f22) = 1;
  FUN_100642bd8(param_1 + 0x2e,puVar1,1);
  FUN_100642bd8(param_1 + 0x2e,puVar2,1);
  FUN_100642bd8(puVar2,puVar3,1);
  FUN_1005308f8(puVar3,puVar5,1);
  FUN_1005308f8(puVar3,puVar6,1);
  FUN_1005308f8(puVar3,puVar4,1);
  FUN_100652cac(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x2ccc);
  if ((uVar7 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2ccc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x2600;
    FUN_1000200a0(puVar1);
  }
  FUN_100530adc(puVar3,0,1);
  param_1[0x665] = puVar5;
  param_1[0x666] = puVar6;
  uStack_90 = 0;
  uStack_88 = 0;
  uVar9 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_90,uVar9);
  uVar9 = FUN_1004e0150("MENU_TEAM_TAB_TROPHIES",0);
  FUN_10010b098(&uStack_90,uVar9);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,puVar4,&uStack_90);
  FUN_1001c9460(0xcd,puVar4);
  uStack_58 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_80 = FUN_1002650d0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  puStack_78 = param_1;
  FUN_10001554c(param_1 + 0x669,&pcStack_80);
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,puVar5,1,4,0);
  FUN_10010b1a8(&uStack_90,1);
  return param_1;
}




void FUN_1002650dc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  FUN_1001c8728(param_1 + 0x668);
  if (*(char *)((long)param_1 + 0x18f1f) < '\0') {
    operator_delete((void *)param_1[0x31e1]);
  }
  FUN_10015ab5c(param_1 + 0x31df,1);
  thunk_FUN_100260244(param_1 + 0x2ecf);
  thunk_FUN_100261d9c(param_1 + 0x7c2);
  thunk_FUN_1001c859c(param_1 + 0x668);
  thunk_FUN_100530784(param_1 + 0x5be);
  thunk_FUN_10064e2bc(param_1 + 0x5a7);
  param_1[0x589] = &PTR_FUN_1014a7108;
  param_1[0x5a0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5a3);
  FUN_10064e2bc(param_1 + 0x589);
  FUN_10014f51c(param_1 + 0x586);
  FUN_1001e6bb0(param_1);
  return;
}




void thunk_FUN_1002650dc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002650dc_10147bd38;
  param_1[0x586] = &PTR_FUN_10147bef0;
  FUN_1001c8728(param_1 + 0x668);
  if (*(char *)((long)param_1 + 0x18f1f) < '\0') {
    operator_delete((void *)param_1[0x31e1]);
  }
  FUN_10015ab5c(param_1 + 0x31df,1);
  thunk_FUN_100260244(param_1 + 0x2ecf);
  thunk_FUN_100261d9c(param_1 + 0x7c2);
  thunk_FUN_1001c859c(param_1 + 0x668);
  thunk_FUN_100530784(param_1 + 0x5be);
  thunk_FUN_10064e2bc(param_1 + 0x5a7);
  param_1[0x589] = &PTR_FUN_1014a7108;
  param_1[0x5a0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5a3);
  FUN_10064e2bc(param_1 + 0x589);
  FUN_10014f51c(param_1 + 0x586);
  FUN_1001e6bb0(param_1);
  return;
}




void FUN_1002651e4(long param_1)

{
  FUN_1002650dc(param_1 + -0x2c30);
  return;
}




void FUN_1002651f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002650dc();
  operator_delete(pvVar1);
  return;
}




void FUN_100265204(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002650dc(param_1 + -0x2c30);
  operator_delete(pvVar1);
  return;
}




void FUN_100265220(void)

{
  return;
}




void FUN_100265224(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80 [2];
  char local_69;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  FUN_100262274(param_1 + 0x3e10);
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x3338) == 0) {
      uVar2 = FUN_1001c94f4(param_1 + 0x3340);
      if (*(long *)(param_1 + (uVar2 & 0xffffffff) * 8 + 0x3328) != 0) {
        uVar2 = FUN_1001c94f4(param_1 + 0x3340);
        *(undefined8 *)(param_1 + 0x3338) =
             *(undefined8 *)(param_1 + (uVar2 & 0xffffffff) * 8 + 0x3328);
      }
    }
    FUN_100265438(param_1);
    iVar1 = FUN_100130330();
    if ((iVar1 != 0) && (uVar2 = FUN_10013033c("seasonTeamTrophy"), (uVar2 & 1) == 0)) {
      thunk_FUN_1001cd434(&local_e0);
      uVar3 = FUN_1004e0150("MAIN_SEASON_TROPHY_USERTEAM_TOOLTIP",0);
      thunk_FUN_1004e439c(auStack_f0,uVar3);
      thunk_FUN_1004e439c(&local_128,auStack_f0);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_d8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      local_b0 = FUN_1001c94fc(param_1 + 0x3340,1);
      local_38 = 1;
      local_50 = 0x3f000000;
      iVar1 = FUN_100126c88();
      local_4c = 0x442f0000;
      if (iVar1 == 0) {
        local_4c = 0x44160000;
      }
      FUN_10001549c(&local_128,"seasonTeamTrophy");
      std::string::operator=((string *)local_80,(string *)&local_128);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      uVar3 = FUN_10002f320();
      FUN_10001549c(&local_128,"seasonTrophy");
      FUN_100030e74(uVar3,&local_128,&local_e0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
      }
      local_e0 = &PTR_FUN_1014666e0;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_10003c1ec(auStack_d8,1);
    }
  }
  return;
}




void FUN_100265438(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  
  lVar1 = param_1 + 0x2df0;
  if (*(float *)(param_1 + 0x2e34) != 0.0) {
    *(undefined4 *)(param_1 + 0x2e34) = 0;
    FUN_1000200a0(lVar1);
  }
  if (*(long **)(param_1 + 0x3338) == (long *)0x0) {
    bVar3 = false;
    uVar2 = *(uint *)(param_1 + 0x2e74) & 0xffffffef;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x3338) + 0x150))();
    (**(code **)(**(long **)(param_1 + 0x3338) + 0x60))(*(long **)(param_1 + 0x3338),1,0,1,1);
    FUN_10053093c(lVar1);
    bVar3 = *(long *)(param_1 + 0x3338) == param_1 + 0x3e10;
    uVar2 = *(uint *)(param_1 + 0x2e74) & 0xffffffe0 |
            *(uint *)(param_1 + 0x2e74) & 0xf | (uint)bVar3 << 4;
  }
  *(uint *)(param_1 + 0x2e74) = uVar2;
  FUN_100530adc(lVar1,0,bVar3);
  return;
}




void thunk_FUN_1002654ec(void)

{
  FUN_1002654ec();
  return;
}




void FUN_1002654ec(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_74;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  
  FUN_1001e6c94();
  uVar4 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar4,&fStack_6c,&local_70,&local_74);
  fVar8 = local_70;
  fVar5 = DAT_101854a80;
  fVar7 = fStack_6c - local_74;
  FUN_10064e47c(fVar7,fVar7 * 0.75,param_1 + 0x2c48);
  if ((*(float *)(param_1 + 0x2c90) != 1.3) || (*(float *)(param_1 + 0x2c94) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2c90) = 0x3fa666663fa66666;
    FUN_1000200a0(param_1 + 0x2c48);
  }
  fVar8 = fVar8 - fVar5;
  lVar1 = param_1 + 0x3340;
  fVar5 = (float)FUN_100642888(lVar1,0,0,1,1);
  fVar6 = fVar7 * 0.5 - fVar5 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x3380) == fVar6) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x3384)))
     ) {
    bVar3 = *(float *)(param_1 + 0x3384) == 30.0;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x3380) = fVar6;
    *(undefined4 *)(param_1 + 0x3384) = 0x41f00000;
    FUN_1000200a0(lVar1);
  }
  local_68 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x3340) + 0x28))(lVar1,&local_68);
  fVar6 = fVar8;
  FUN_10064e47c(fVar7,fVar8,param_1 + 0x3e10);
  FUN_10026350c(param_1 + 0x3e10);
  lVar2 = param_1 + 0x17678;
  fVar9 = *(float *)(param_1 + 0x3384);
  FUN_1001c9614(lVar1);
  FUN_10064e47c(fVar7,(local_70 + -160.0) - (fVar9 + fVar6),lVar2);
  FUN_1002604c4(lVar2);
  FUN_10064e5ec(fVar5 * 0.5,0,lVar2,4,lVar1,6);
  FUN_10064e47c(fVar7,fVar8,param_1 + 0x2d38);
  return;
}




void FUN_1002656cc(long param_1,long param_2)

{
  string *psVar1;
  string *this;
  size_t sVar2;
  size_t sVar3;
  string *psVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  size_t sVar13;
  size_t sVar14;
  byte bVar15;
  undefined4 local_64;
  
  bVar15 = DAT_101d911a8._7_1_;
  sVar14 = DAT_101d911a0;
  this = (string *)(param_1 + 0x18f08);
  psVar1 = (string *)(param_2 + 0x28);
  bVar5 = *(byte *)(param_2 + 0x3f);
  uVar8 = (ulong)bVar5;
  sVar3 = *(size_t *)(param_2 + 0x30);
  if (-1 < (char)bVar5) {
    sVar3 = uVar8;
  }
  sVar13 = (size_t)DAT_101d911a8._7_1_;
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = sVar13;
  }
  if (sVar3 == sVar2) {
    psVar4 = *(string **)psVar1;
    if (-1 < (char)bVar5) {
      psVar4 = psVar1;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar3 != 0) && (iVar7 = _memcmp(psVar4,pbVar10,sVar3), iVar7 != 0)) goto LAB_1002657a0;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar10 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar11 = (byte *)(param_2 + 0x29);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_1002657bc;
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *pbVar10);
      }
      goto LAB_1002657a0;
    }
  }
  else {
LAB_1002657a0:
    FUN_100262de8(param_1 + 0x3e10,param_2);
    sVar13 = (size_t)DAT_101d911a8._7_1_;
    sVar14 = DAT_101d911a0;
    bVar15 = DAT_101d911a8._7_1_;
  }
LAB_1002657bc:
  bVar5 = *(byte *)(param_1 + 0x18f1f);
  uVar8 = (ulong)bVar5;
  sVar3 = *(size_t *)(param_1 + 0x18f10);
  if (-1 < (char)bVar5) {
    sVar3 = uVar8;
  }
  if (-1 < (char)bVar15) {
    sVar14 = sVar13;
  }
  if (sVar3 == sVar14) {
    psVar4 = *(string **)this;
    if (-1 < (char)bVar5) {
      psVar4 = this;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)bVar15) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar3 == 0) || (iVar7 = _memcmp(psVar4,pbVar10,sVar3), iVar7 == 0)) goto LAB_100265858;
      goto LAB_100265970;
    }
    if (sVar3 != 0) {
      if ((uint)*pbVar10 == ((uint)*(string **)this & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x18f09);
        pbVar11 = pbVar10;
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar8 == 0) goto LAB_100265858;
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar11);
      }
      goto LAB_100265970;
    }
LAB_100265858:
    bVar5 = *(byte *)(param_2 + 0x3f);
    uVar8 = (ulong)bVar5;
    sVar14 = *(size_t *)(param_2 + 0x30);
    if (-1 < (char)bVar5) {
      sVar14 = uVar8;
    }
    if (sVar14 == sVar3) {
      if ((char)bVar5 < '\0') {
        if ((sVar3 != 0) && (iVar7 = _memcmp(*(void **)psVar1,pbVar10,sVar3), iVar7 != 0))
        goto LAB_1002658d4;
      }
      else if (sVar3 != 0) {
        if ((uint)*pbVar10 == ((uint)*(void **)psVar1 & 0xff)) {
          pbVar11 = (byte *)(param_2 + 0x29);
          do {
            uVar8 = uVar8 - 1;
            pbVar10 = pbVar10 + 1;
            bVar6 = false;
            if (uVar8 == 0) goto LAB_100265974;
            bVar5 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar5 == *pbVar10);
        }
        goto LAB_1002658d4;
      }
      goto LAB_100265970;
    }
LAB_1002658d4:
    lVar12 = FUN_10015d3ec();
    bVar5 = *(byte *)(param_2 + 0x3f);
    uVar8 = (ulong)bVar5;
    bVar15 = *(byte *)(lVar12 + 0x54a7);
    sVar3 = *(size_t *)(param_2 + 0x30);
    if (-1 < (char)bVar5) {
      sVar3 = uVar8;
    }
    sVar14 = *(size_t *)(lVar12 + 0x5498);
    if (-1 < (char)bVar15) {
      sVar14 = (ulong)bVar15;
    }
    if (sVar3 != sVar14) goto LAB_100265970;
    psVar4 = *(string **)psVar1;
    if (-1 < (char)bVar5) {
      psVar4 = psVar1;
    }
    pbVar10 = *(byte **)(lVar12 + 0x5490);
    if (-1 < (char)bVar15) {
      pbVar10 = (byte *)(lVar12 + 0x5490);
    }
    if ((char)bVar5 < '\0') {
      if (sVar3 == 0) goto LAB_100265984;
      iVar7 = _memcmp(psVar4,pbVar10,sVar3);
      bVar6 = iVar7 == 0;
      goto LAB_100265974;
    }
    if (sVar3 != 0) {
      if ((uint)*pbVar10 != ((uint)*(string **)psVar1 & 0xff)) goto LAB_100265970;
      pbVar11 = (byte *)(param_2 + 0x29);
      do {
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
        if (uVar8 == 0) goto LAB_100265984;
        bVar6 = false;
        bVar5 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar5 == *pbVar10);
      goto LAB_100265974;
    }
LAB_100265984:
    std::string::operator=(this,psVar1);
    FUN_10015ab5c(param_1 + 0x18ef8,0);
    if (*(int *)(param_2 + 0xa8) != 0) {
      lVar12 = 0;
      uVar8 = 0;
      do {
        FUN_100265b2c(param_1 + 0x18ef8,*(long *)(param_2 + 0xb0) + lVar12);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 0x50;
      } while (uVar8 < *(uint *)(param_2 + 0xa8));
    }
    *(undefined1 *)(param_1 + 0x18f21) = 1;
  }
  else {
LAB_100265970:
    bVar6 = false;
LAB_100265974:
    if (*(char *)(param_2 + 0x90) != '\0' || bVar6) goto LAB_100265984;
  }
  iVar7 = FUN_10015d3f8();
  if (iVar7 != 0) {
    lVar12 = FUN_10015d3ec();
    bVar5 = *(byte *)(param_1 + 0x18f1f);
    uVar8 = (ulong)bVar5;
    bVar15 = *(byte *)(lVar12 + 0x54a7);
    sVar3 = *(size_t *)(param_1 + 0x18f10);
    if (-1 < (char)bVar5) {
      sVar3 = uVar8;
    }
    sVar14 = *(size_t *)(lVar12 + 0x5498);
    if (-1 < (char)bVar15) {
      sVar14 = (ulong)bVar15;
    }
    if (sVar3 == sVar14) {
      psVar1 = *(string **)this;
      if (-1 < (char)bVar5) {
        psVar1 = this;
      }
      pbVar10 = *(byte **)(lVar12 + 0x5490);
      if (-1 < (char)bVar15) {
        pbVar10 = (byte *)(lVar12 + 0x5490);
      }
      if ((char)bVar5 < '\0') {
        if (sVar3 != 0) {
          iVar7 = _memcmp(psVar1,pbVar10,sVar3);
          bVar6 = iVar7 == 0;
          goto LAB_100265a98;
        }
      }
      else if (sVar3 != 0) {
        if ((uint)*pbVar10 == ((uint)*(string **)this & 0xff)) {
          pbVar11 = (byte *)(param_1 + 0x18f09);
          do {
            uVar8 = uVar8 - 1;
            pbVar10 = pbVar10 + 1;
            bVar6 = uVar8 == 0;
            if (uVar8 == 0) break;
            bVar5 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar5 == *pbVar10);
          goto LAB_100265a98;
        }
        goto LAB_100265a94;
      }
      bVar6 = true;
      goto LAB_100265a98;
    }
  }
LAB_100265a94:
  bVar6 = false;
LAB_100265a98:
  if ((bool)*(char *)(param_1 + 0x18f20) != bVar6) {
    *(bool *)(param_1 + 0x18f20) = bVar6;
    if (bVar6 == false) {
      local_64 = 0xff5262cc;
    }
    else {
      local_64 = 0xffffba8c;
    }
    FUN_100652dd4(param_1 + 0x2c48,&local_64,2);
    FUN_1002654ec(param_1);
  }
  return;
}




void FUN_100265b2c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015a9a8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x50;
  FUN_10003330c(lVar4 + -0x50,param_2);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x30);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x48);
  return;
}




void FUN_100265bd4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  
  if (*(char *)(param_1 + 0x18f21) != '\0') {
    lVar1 = param_1 + 0x17678;
    FUN_1002603e8(lVar1);
    if (*(uint *)(param_1 + 0x18ef8) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x18f00);
        uVar3 = FUN_1004e0150("MENU_TROPHY_SKILL_TIER_SUBTITLE",0);
        thunk_FUN_1004e439c(auStack_80,uVar3);
        FUN_1004e3120(auStack_90,"[SEASON_NAME]");
        lVar2 = lVar6 + lVar4;
        FUN_1000f0ec8(auStack_a0,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        FUN_1004e3bc4(auStack_80,0,auStack_90,auStack_a0);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        FUN_1000f0ec8(auStack_90,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        lVar6 = lVar6 + lVar4;
        FUN_1004e3170(auStack_a0,lVar6 + 0x18);
        FUN_100260d6c(lVar1,auStack_90,auStack_80,auStack_a0,*(undefined4 *)(lVar6 + 0x4c));
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x50;
      } while (uVar5 < *(uint *)(param_1 + 0x18ef8));
    }
    FUN_100260dd0(lVar1,1);
    fVar7 = 0.0;
    if (*(char *)(param_1 + 0x18f22) == '\0') {
      lVar4 = FUN_10003d5bc(0,param_1);
      fVar7 = *(float *)(lVar4 + 0xc);
      lVar4 = FUN_10003d5bc(param_1);
      fVar7 = fVar7 / *(float *)(lVar4 + 0x14) + 40.0;
    }
    FUN_100260e50(fVar7,lVar1);
  }
  return;
}




void FUN_100265da0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18f22) = param_2;
  *(undefined1 *)(param_1 + 0x17676) = param_2;
  return;
}




void FUN_100265dbc(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  
  FUN_100262b04(param_1 + 0x3e10);
  iVar6 = FUN_1004f1680(param_2);
  if ((iVar6 == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_100265ebc;
  lVar7 = FUN_10015d3ec();
  bVar4 = *(byte *)(param_1 + 0x18f1f);
  uVar8 = (ulong)bVar4;
  bVar5 = *(byte *)(lVar7 + 0x54a7);
  sVar1 = *(size_t *)(param_1 + 0x18f10);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = *(size_t *)(lVar7 + 0x5498);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_1 + 0x18f08);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_1 + 0x18f08);
    }
    pbVar11 = *(byte **)(lVar7 + 0x5490);
    if (-1 < (char)bVar5) {
      pbVar11 = (byte *)(lVar7 + 0x5490);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar11,sVar1), iVar6 == 0)) goto LAB_100265ea8;
    }
    else if (sVar1 == 0) {
LAB_100265ea8:
      *(undefined1 *)(param_1 + 0x18f20) = 1;
    }
    else if ((uint)*pbVar11 == ((uint)pvVar10 & 0xff)) {
      pbVar9 = (byte *)(param_1 + 0x18f09);
      do {
        uVar8 = uVar8 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar8 == 0) goto LAB_100265ea8;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar4 == *pbVar11);
    }
  }
  lVar7 = FUN_10015d3ec();
  FUN_100169cec(lVar7 + 0x18);
LAB_100265ebc:
  FUN_1002654ec(param_1);
  return;
}




void FUN_100265ecc(long param_1)

{
  FUN_100265dbc(param_1 + -0x2c30);
  return;
}




void FUN_100265ed8(long param_1)

{
  FUN_100262d84(param_1 + 0x3e10);
  return;
}




void FUN_100265ee4(long param_1)

{
  FUN_100262d84(param_1 + 0x11e0);
  return;
}




void FUN_100265ef0(undefined8 param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      uVar10 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar10 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar10 == 0x11) &&
         (iVar5 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e7827),
         iVar5 == 0)) {
        uVar9 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar7 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar9,uVar7,uVar8,0,0);
        return;
      }
    }
    else {
      lVar6 = FUN_10015d3ec();
      bVar4 = *(byte *)(lVar6 + 0x54a7);
      uVar10 = (ulong)bVar4;
      sVar1 = *(size_t *)(lVar6 + 0x5498);
      if (-1 < (char)bVar4) {
        sVar1 = uVar10;
      }
      sVar2 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar2 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar1 != sVar2) {
LAB_10026605c:
        uVar9 = FUN_10015d3ec();
        lVar6 = FUN_10015d3ec();
        FUN_1001635bc(uVar9,lVar6 + 0x5490,1);
        return;
      }
      pvVar13 = *(void **)(lVar6 + 0x5490);
      puVar3 = pvVar13;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar6 + 0x5490);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar12,sVar1), iVar5 != 0)) goto LAB_10026605c;
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(lVar6 + 0x5491);
          do {
            uVar10 = uVar10 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar10 == 0) {
              return;
            }
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar4 == *pbVar12);
        }
        goto LAB_10026605c;
      }
    }
  }
  return;
}




void thunk_FUN_100265ef0(void)

{
  FUN_100265ef0();
  return;
}




void FUN_10026609c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = FUN_1001c94f4(param_1 + 0x3340);
  uVar2 = FUN_100644b2c(param_2);
  if ((uVar1 < 2 && uVar1 != uVar2) && uVar2 < 2) {
    plVar3 = *(long **)(param_1 + 0x3328 + (ulong)uVar1 * 8);
    plVar4 = *(long **)(param_1 + 0x3328 + (ulong)uVar2 * 8);
    *(long **)(param_1 + 0x3338) = plVar4;
    if (plVar4 != (long *)0x0 && plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x138))(0x3e4ccccd,plVar3,0,4,1);
      (**(code **)(*plVar4 + 0x138))(0x3e4ccccd,plVar4,1,4,1);
    }
    if (plVar4 != (long *)0x0) {
      if (plVar4 == (long *)(param_1 + 0x17678)) {
        FUN_100265bd4(param_1);
      }
      FUN_100265438(param_1);
      return;
    }
  }
  return;
}




long FUN_100266194(long param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char local_21;
  
  puVar1 = (undefined8 *)FUN_1002667c0();
  *puVar1 = &PTR_FUN_10147c288;
  *(undefined8 *)((long)puVar1 + 0x2c5c) = 0;
  FUN_10001549c(local_38,"ACADEMY");
  std::string::operator=((string *)(param_1 + 0x2c40),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_1004e18bc(&DAT_101d234d8,param_1,0xe51db192,thunk_FUN_10026645c,0);
  return param_1;
}




void thunk_FUN_10026645c(void)

{
  FUN_10026645c();
  return;
}




long thunk_FUN_100266194(long param_1)

{
  undefined8 *puVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)FUN_1002667c0();
  *puVar1 = &PTR_FUN_10147c288;
  *(undefined8 *)((long)puVar1 + 0x2c5c) = 0;
  FUN_10001549c(apvStack_38,"ACADEMY");
  std::string::operator=((string *)(param_1 + 0x2c40),(string *)apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  FUN_1004e18bc(&DAT_101d234d8,param_1,0xe51db192,thunk_FUN_10026645c,0);
  return param_1;
}




void FUN_100266234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10147c288;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0xe51db192);
  FUN_1002667f0(param_1);
  return;
}




void FUN_100266278(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10147c288;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0xe51db192);
  pvVar1 = (void *)FUN_1002667f0(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002662c0(long *param_1,byte *param_2)

{
  short *psVar1;
  size_t sVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  short *psVar11;
  
  bVar3 = param_2[0x17];
  uVar8 = (ulong)bVar3;
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  pbVar9 = *(byte **)param_2;
  pbVar10 = pbVar9;
  sVar4 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    pbVar10 = param_2;
    sVar4 = uVar8;
  }
  if (sVar4 == sVar2) {
    pbVar6 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar6 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if (sVar4 == 0) {
        return;
      }
      iVar5 = _memcmp(pbVar10,pbVar6,sVar4);
      pbVar10 = pbVar9;
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar4 == 0) {
        return;
      }
      if ((uint)*pbVar6 == ((uint)pbVar9 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          param_2 = param_2 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar8 == 0) {
            return;
          }
        } while (*param_2 == *pbVar6);
      }
    }
  }
  if (*(uint *)(param_1 + 0x586) != 0) {
    psVar11 = (short *)param_1[0x587];
    psVar1 = psVar11 + (ulong)*(uint *)(param_1 + 0x586) * 8;
    do {
      lVar7 = *(long *)(psVar11 + 4);
      if (lVar7 != 0) {
        bVar3 = *(byte *)(lVar7 + 0x3b7);
        uVar8 = (ulong)bVar3;
        sVar2 = *(size_t *)(lVar7 + 0x3a8);
        if (-1 < (char)bVar3) {
          sVar2 = uVar8;
        }
        if (sVar2 == sVar4) {
          if ((char)bVar3 < '\0') {
            if ((sVar4 == 0) ||
               (iVar5 = _memcmp(*(void **)(lVar7 + 0x3a0),pbVar10,sVar4), iVar5 == 0)) {
LAB_100266408:
                    /* WARNING: Could not recover jumptable at 0x000100266430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x178))(param_1,(long)*psVar11,&DAT_101d91198);
              return;
            }
          }
          else {
            if (sVar4 == 0) goto LAB_100266408;
            if ((uint)*pbVar10 == ((uint)*(void **)(lVar7 + 0x3a0) & 0xff)) {
              pbVar6 = (byte *)(lVar7 + 0x3a1);
              pbVar9 = pbVar10;
              do {
                uVar8 = uVar8 - 1;
                pbVar9 = pbVar9 + 1;
                if (uVar8 == 0) goto LAB_100266408;
                bVar3 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (bVar3 == *pbVar9);
            }
          }
        }
      }
      psVar11 = psVar11 + 8;
    } while (psVar11 != psVar1);
  }
  return;
}




void FUN_10026645c(long *param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  iVar2 = FUN_100136e70(&local_40);
  if (iVar2 != 0) {
    FUN_100266850(param_1);
    if ((int)local_40 != 0) {
      lVar4 = local_38 + (local_40 & 0xffffffff) * 0x78;
      lVar3 = local_38;
      do {
        (**(code **)(*param_1 + 0x198))(param_1,lVar3,lVar3 + 0x48,lVar3 + 0x18,lVar3 + 0x30);
        lVar3 = lVar3 + 0x78;
      } while (lVar3 != lVar4);
    }
  }
  sVar1 = 0;
  if ((short)param_1[0x584] != -1) {
    sVar1 = (short)param_1[0x584];
  }
  (**(code **)(*param_1 + 0x178))(param_1,(int)sVar1,&DAT_101d91198);
  FUN_1001e611c(param_1 + 0x62);
  FUN_100135c64(&local_40,1);
  return;
}




void FUN_100266524(undefined8 param_1,int param_2)

{
  FUN_100266988();
  if (param_2 != 0) {
    FUN_10026645c(param_1);
    return;
  }
  return;
}




long * FUN_10026655c(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  void *pvVar2;
  short *psVar3;
  undefined4 uVar4;
  short sVar5;
  size_t sVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined1 *local_a0;
  size_t local_98;
  ulong local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  short local_78;
  undefined6 uStack_76;
  long *local_70;
  char local_61;
  
  ppuVar10 = &local_a0;
  ppuVar11 = &local_a0;
  plVar8 = operator_new(0xbf0);
  FUN_1002260f4();
  uVar13 = *(undefined4 *)(param_1 + 0x2c60);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x2c5c));
  plVar1 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar1 = param_4;
  }
  FUN_10001549c(&local_78,plVar1);
  FUN_10022b4d4(plVar8,param_2,&local_78,(void *)(param_1 + 0x2c40));
  if (local_61 < '\0') {
    operator_delete((void *)CONCAT62(uStack_76,local_78));
  }
  (**(code **)(*plVar8 + 0x180))(plVar8);
  uVar4 = *(undefined4 *)(param_1 + 0x2c30);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_1004e3120(auStack_88,plVar1);
  iVar7 = FUN_1004e3624(auStack_88);
  if (iVar7 != 0) {
    plVar1 = (long *)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      plVar1 = param_4;
    }
    uVar9 = FUN_1004e0150(plVar1,0);
    FUN_1000153b4(auStack_88,uVar9);
  }
  sVar5 = (short)uVar4;
  FUN_1001e6e9c(param_1,(int)sVar5,auStack_88,plVar8);
  local_a0 = (undefined1 *)0x0;
  local_98 = 0;
  local_90 = 0;
  pvVar2 = *(void **)(param_1 + 0x2c40);
  sVar6 = *(size_t *)(param_1 + 0x2c48);
  if (-1 < (char)*(byte *)(param_1 + 0x2c57)) {
    pvVar2 = (void *)(param_1 + 0x2c40);
    sVar6 = (ulong)*(byte *)(param_1 + 0x2c57);
  }
  if (0xffffffffffffffef < sVar6 + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1002667b4();
  }
  if (sVar6 + 1 < 0x17) {
    local_90 = sVar6 << 0x38;
    if (sVar6 == 0) goto LAB_1002666e4;
  }
  else {
    uVar12 = sVar6 + 0x11 & 0xfffffffffffffff0;
    ppuVar10 = operator_new(uVar12);
    local_90 = uVar12 | 0x8000000000000000;
    local_a0 = (undefined1 *)ppuVar10;
    local_98 = sVar6;
  }
  _memcpy(ppuVar10,pvVar2,sVar6);
  ppuVar11 = ppuVar10;
LAB_1002666e4:
  *(undefined1 *)((long)ppuVar11 + sVar6) = 0;
  std::string::append((char *)&local_a0,0x1013dcc67);
  FUN_1000e8b18(&local_78,&local_a0,param_4);
  psVar3 = (short *)CONCAT62(uStack_76,local_78);
  if (-1 < local_61) {
    psVar3 = &local_78;
  }
  FUN_1001e68a4(param_1 + 0x310,(int)sVar5,psVar3);
  if (local_61 < '\0') {
    operator_delete((void *)CONCAT62(uStack_76,local_78));
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  FUN_100642888(param_1 + 0x310,1,0,1,1);
  *(undefined4 *)(plVar8 + 0x7b) = uVar13;
  local_78 = sVar5;
  local_70 = plVar8;
  FUN_1002468bc(param_1 + 0x2c30,&local_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return plVar8;
}




void FUN_1002667b4(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1002667c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001e6910();
  *puVar1 = &PTR_thunk_FUN_1002667f0_10147c438;
  puVar1[0x587] = 0;
  puVar1[0x586] = 0;
  puVar1[0x589] = 0;
  puVar1[0x588] = 0;
  puVar1[0x58a] = 0;
  return;
}




void FUN_1002667f0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002667f0_10147c438;
  FUN_100266850();
  if (*(char *)((long)param_1 + 0x2c57) < '\0') {
    operator_delete((void *)param_1[0x588]);
  }
  if ((void *)param_1[0x587] != (void *)0x0) {
    operator_delete__((void *)param_1[0x587]);
    param_1[0x587] = 0;
    param_1[0x586] = 0;
  }
  FUN_1001e6bb0(param_1);
  return;
}




void FUN_100266850(long param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = *(short **)(param_1 + 0x2c38);
  psVar2 = psVar1;
  if (*(int *)(param_1 + 0x2c30) != 0) {
    do {
      FUN_1001e6ef8(param_1,(long)*psVar2,*(undefined8 *)(psVar2 + 4));
      *psVar2 = -1;
      if (*(long **)(psVar2 + 4) != (long *)0x0) {
        (**(code **)(**(long **)(psVar2 + 4) + 8))();
      }
      psVar2[4] = 0;
      psVar2[5] = 0;
      psVar2[6] = 0;
      psVar2[7] = 0;
      psVar1 = *(short **)(param_1 + 0x2c38);
      psVar2 = psVar2 + 8;
    } while (psVar2 != psVar1 + (ulong)*(uint *)(param_1 + 0x2c30) * 8);
  }
  if (psVar1 != (short *)0x0) {
    *(undefined4 *)(param_1 + 0x2c30) = 0;
  }
  FUN_1001e6098(param_1 + 0x310);
  return;
}




void thunk_FUN_1002667f0(void)

{
  FUN_1002667f0();
  return;
}




void FUN_1002668dc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002667f0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002668f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x2c20);
  if ((-1 < sVar1) && ((int)sVar1 != (int)param_2)) {
    FUN_100266948(param_1,sVar1);
  }
  FUN_1001e6f74(param_1,param_2,param_3);
  return;
}




void FUN_100266948(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x2c30) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x2c38) + 8);
    lVar2 = (ulong)*(uint *)(param_1 + 0x2c30) << 4;
    do {
      if ((short)plVar1[-1] == param_2) {
        if (*plVar1 == 0) {
          return;
        }
        FUN_10022b9fc();
        return;
      }
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100266988(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  FUN_1001e6c4c();
  if (param_2 != 0) {
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    return;
  }
  FUN_100266948(param_1,(long)*(short *)(param_1 + 0x2c20));
  uVar1 = (ulong)*(uint *)(param_1 + 0x2c30);
  if (*(uint *)(param_1 + 0x2c30) != 0) {
    lVar2 = *(long *)(param_1 + 0x2c38);
    lVar3 = lVar2;
    do {
      if (*(long *)(lVar3 + 8) != 0) {
        FUN_10022b3e4();
        uVar1 = (ulong)*(uint *)(param_1 + 0x2c30);
        lVar2 = *(long *)(param_1 + 0x2c38);
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != lVar2 + uVar1 * 0x10);
  }
  return;
}




undefined8 FUN_100266a14(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x2c30) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x2c38) + 8);
    lVar2 = (ulong)*(uint *)(param_1 + 0x2c30) << 4;
    do {
      if (*(short *)(puVar1 + -1) == param_2) {
        return *puVar1;
      }
      puVar1 = puVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return 0;
}




undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}




void thunk_FUN_100268004(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ******ppppppuVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *****pppppuStack_38;
  size_t sStack_30;
  byte bStack_21;
  
  FUN_10027a0c4(&pppppuStack_38,param_1 + 0x590);
  uVar8 = (ulong)bStack_21;
  uVar7 = (uint)(char)bStack_21;
  sVar2 = sStack_30;
  if (-1 < (int)uVar7) {
    sVar2 = uVar8;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar1) {
    ppppppuVar3 = (undefined8 ******)pppppuStack_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &pppppuStack_38;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar7 < 0) {
      if ((sVar2 == 0) || (iVar5 = _memcmp(ppppppuVar3,pbVar10,sVar2), iVar5 == 0))
      goto LAB_100268194;
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pppppuStack_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&pppppuStack_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268190;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar6 = FUN_10015d3ec();
  uVar8 = (ulong)bStack_21;
  uVar7 = (uint)(char)bStack_21;
  bVar4 = *(byte *)(lVar6 + 0x548f);
  if (-1 < (int)uVar7) {
    sStack_30 = uVar8;
  }
  sVar2 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (sStack_30 == sVar2) {
    ppppppuVar3 = (undefined8 ******)pppppuStack_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &pppppuStack_38;
    }
    pbVar10 = *(byte **)(lVar6 + 0x5478);
    if (-1 < (char)bVar4) {
      pbVar10 = (byte *)(lVar6 + 0x5478);
    }
    if ((int)uVar7 < 0) {
      if ((sStack_30 != 0) && (iVar5 = _memcmp(ppppppuVar3,pbVar10,sStack_30), iVar5 != 0))
      goto LAB_100268194;
    }
    else if (sStack_30 != 0) {
      if ((uint)*pbVar10 == ((uint)pppppuStack_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&pppppuStack_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268170;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
      goto LAB_100268190;
    }
LAB_100268170:
    (**(code **)(*param_1 + 0x178))(param_1,2,&DAT_101d91198);
    uVar7 = (uint)bStack_21;
  }
LAB_100268190:
  if ((uVar7 >> 7 & 1) == 0) {
    return;
  }
LAB_100268194:
  operator_delete(pppppuStack_38);
  return;
}




void thunk_FUN_1002681ac(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ******ppppppuVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *****pppppuStack_38;
  size_t sStack_30;
  byte bStack_21;
  
  FUN_10027a0f0(&pppppuStack_38,param_1 + 0x590);
  uVar8 = (ulong)bStack_21;
  uVar7 = (uint)(char)bStack_21;
  sVar2 = sStack_30;
  if (-1 < (int)uVar7) {
    sVar2 = uVar8;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar1) {
    ppppppuVar3 = (undefined8 ******)pppppuStack_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &pppppuStack_38;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar7 < 0) {
      if ((sVar2 == 0) || (iVar5 = _memcmp(ppppppuVar3,pbVar10,sVar2), iVar5 == 0))
      goto LAB_10026833c;
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pppppuStack_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&pppppuStack_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268338;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar6 = FUN_10015d3ec();
  uVar8 = (ulong)bStack_21;
  uVar7 = (uint)(char)bStack_21;
  bVar4 = *(byte *)(lVar6 + 0x54a7);
  if (-1 < (int)uVar7) {
    sStack_30 = uVar8;
  }
  sVar2 = *(size_t *)(lVar6 + 0x5498);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (sStack_30 == sVar2) {
    ppppppuVar3 = (undefined8 ******)pppppuStack_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &pppppuStack_38;
    }
    pbVar10 = *(byte **)(lVar6 + 0x5490);
    if (-1 < (char)bVar4) {
      pbVar10 = (byte *)(lVar6 + 0x5490);
    }
    if ((int)uVar7 < 0) {
      if ((sStack_30 != 0) && (iVar5 = _memcmp(ppppppuVar3,pbVar10,sStack_30), iVar5 != 0))
      goto LAB_10026833c;
    }
    else if (sStack_30 != 0) {
      if ((uint)*pbVar10 == ((uint)pppppuStack_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&pppppuStack_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268318;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
      goto LAB_100268338;
    }
LAB_100268318:
    (**(code **)(*param_1 + 0x178))(param_1,3,&DAT_101d91198);
    uVar7 = (uint)bStack_21;
  }
LAB_100268338:
  if ((uVar7 >> 7 & 1) == 0) {
    return;
  }
LAB_10026833c:
  operator_delete(pppppuStack_38);
  return;
}




undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}




void FUN_100266d04(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  thunk_FUN_1000160a0(param_1 + 0x26e3c);
  thunk_FUN_1002650dc(param_1 + 0x23c57);
  thunk_FUN_10023bbe4(param_1 + 0x1738f);
  thunk_FUN_100286e10(param_1 + 0x11d7f);
  thunk_FUN_100280618(param_1 + 0x2a47);
  thunk_FUN_10026f59c(param_1 + 0x590);
  param_1[0x58d] = &PTR_FUN_10146c930;
  FUN_1001f3bd4(param_1 + 0x58e,1);
  FUN_1004f0a9c(param_1 + 0x58a);
  FUN_10014f51c(param_1 + 0x586);
  FUN_1001e6bb0(param_1);
  return;
}




void thunk_FUN_100266d04(void)

{
  FUN_100266d04();
  return;
}




void FUN_100266df4(long param_1)

{
  FUN_100266d04(param_1 + -0x2c30);
  return;
}




void FUN_100266e00(long param_1)

{
  FUN_100266d04(param_1 + -0x2c50);
  return;
}




void FUN_100266e0c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100266d04();
  operator_delete(pvVar1);
  return;
}




void FUN_100266e20(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100266d04(param_1 + -0x2c30);
  operator_delete(pvVar1);
  return;
}




void FUN_100266e3c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100266d04(param_1 + -0x2c50);
  operator_delete(pvVar1);
  return;
}




void FUN_100266e58(undefined8 param_1)

{
  FUN_1001e6e14();
  FUN_100266e7c(param_1);
  return;
}




void FUN_100266e7c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_1001e6c94();
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x590,&local_48);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x2a47,&local_48);
  local_48 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_44 = param_2;
  FUN_10064e48c(param_3 + 0x11d7f,&local_48);
  uVar1 = DAT_101854a80;
  FUN_100283bcc(DAT_101854a80,param_3 + 0x2a47);
  FUN_10028a3f8(uVar1,param_3 + 0x11d7f);
  FUN_100641464(&local_48,auStack_4c);
  *(undefined4 *)(param_3 + 0x551) = local_48;
  FUN_1001e611c(param_3 + 0x62);
  return;
}




void FUN_100266f74(long *param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  FUN_100266e7c();
  FUN_1001e6c4c(param_1,param_2);
  if ((int)param_2 == 0) goto LAB_1002671c8;
  lVar7 = FUN_1004d29d0();
  iVar6 = FUN_10015d3f8();
  if ((iVar6 != 0) && (5 < lVar7 - param_1[0x26e42])) {
    lVar8 = FUN_10015d3ec();
    FUN_100169cec(lVar8 + 0x18);
    lVar8 = FUN_10015d3ec();
    bVar4 = *(byte *)(lVar8 + 0x548f);
    uVar10 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar8 + 0x5480);
    if (-1 < (char)bVar4) {
      sVar1 = uVar10;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar13 = *(void **)(lVar8 + 0x5478);
      puVar3 = pvVar13;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar8 + 0x5478);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 != 0)) goto LAB_10026709c;
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(lVar8 + 0x5479);
          do {
            uVar10 = uVar10 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar10 == 0) goto LAB_1002670bc;
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar4 == *pbVar12);
        }
        goto LAB_10026709c;
      }
    }
    else {
LAB_10026709c:
      uVar9 = FUN_10015d3ec();
      lVar8 = FUN_10015d3ec();
      FUN_1001634c4(uVar9,lVar8 + 0x5478,1);
    }
LAB_1002670bc:
    lVar8 = FUN_10015d3ec();
    bVar4 = *(byte *)(lVar8 + 0x54a7);
    uVar10 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar8 + 0x5498);
    if (-1 < (char)bVar4) {
      sVar1 = uVar10;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar13 = *(void **)(lVar8 + 0x5490);
      puVar3 = pvVar13;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar8 + 0x5490);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 != 0)) goto LAB_100267168;
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(lVar8 + 0x5491);
          do {
            uVar10 = uVar10 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar10 == 0) goto LAB_100267188;
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar4 == *pbVar12);
        }
        goto LAB_100267168;
      }
    }
    else {
LAB_100267168:
      uVar9 = FUN_10015d3ec();
      lVar8 = FUN_10015d3ec();
      FUN_1001635bc(uVar9,lVar8 + 0x5490,1);
    }
LAB_100267188:
    param_1[0x26e42] = lVar7;
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
  if ((*(byte *)(param_1 + 0x565) & 1) == 0) {
    (**(code **)(*param_1 + 0x178))(param_1,1,&DAT_101d91198);
  }
LAB_1002671c8:
  sVar5 = (short)param_1[0x584];
  if (sVar5 == 3) {
    FUN_1002878b0(param_1 + 0x11d7f,param_2);
    return;
  }
  if (sVar5 == 2) {
    FUN_100281140(param_1 + 0x2a47,param_2);
    return;
  }
  if (sVar5 != 1) {
    return;
  }
  FUN_100270d00(param_1 + 0x590,param_2);
  return;
}




void FUN_100267270(long param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  undefined **local_290 [5];
  void *local_268;
  undefined8 uStack_260;
  long local_258;
  void *pvStack_250;
  undefined8 local_248;
  long lStack_240;
  void *local_238;
  undefined8 uStack_230;
  long local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  void *local_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((int)param_2 == 3) {
    iVar5 = FUN_10015d3f8();
    if (iVar5 == 0) goto LAB_1002675dc;
    lVar6 = FUN_10015d3ec();
    bVar4 = *(byte *)(lVar6 + 0x54a7);
    uVar8 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar6 + 0x5498);
    if (-1 < (char)bVar4) {
      sVar1 = uVar8;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar11 = *(void **)(lVar6 + 0x5490);
      puVar3 = pvVar11;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar6 + 0x5490);
      }
      pbVar10 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar10 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) goto LAB_1002674f0;
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
          pbVar9 = (byte *)(lVar6 + 0x5491);
          do {
            uVar8 = uVar8 - 1;
            pbVar10 = pbVar10 + 1;
            if (uVar8 == 0) goto LAB_100267514;
            bVar4 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar4 == *pbVar10);
        }
        goto LAB_1002674f0;
      }
LAB_100267514:
      FUN_1004f1580(local_290);
      local_290[0] = &PTR_FUN_10145bf20;
      uStack_1c8 = 0;
      lStack_1c0 = 0;
      uStack_260 = 0;
      local_268 = (void *)0x0;
      pvStack_250 = (void *)0x0;
      local_258 = 0;
      lStack_240 = 0;
      local_248 = 0;
      uStack_230 = 0;
      local_238 = (void *)0x0;
      local_1d0 = (void *)0x0;
      local_228 = 0;
      local_1f0 = 0;
      uStack_1f8 = 0;
      uStack_1e0 = 0;
      uStack_1e8 = 0;
      FUN_1004f15d8(local_290);
      FUN_100288b0c(param_1 + 0x8ebf8,local_290);
      local_290[0] = &PTR_FUN_10145bf20;
      if (lStack_1c0 < 0) {
        operator_delete(local_1d0);
      }
      FUN_10015ab5c(&uStack_1e8,1);
      FUN_10015aacc(&uStack_1f8,1);
      if (local_228 < 0) {
        operator_delete(local_238);
      }
      if (lStack_240 < 0) {
        operator_delete(pvStack_250);
      }
      if (local_258 < 0) {
        operator_delete(local_268);
      }
      FUN_1004f15a8(local_290);
    }
    else {
LAB_1002674f0:
      uVar7 = FUN_10015d3ec();
      lVar6 = FUN_10015d3ec();
      FUN_1001635bc(uVar7,lVar6 + 0x5490,1);
    }
    goto LAB_1002675dc;
  }
  if (((int)param_2 != 2) || (iVar5 = FUN_10015d3f8(), iVar5 == 0)) goto LAB_1002675dc;
  lVar6 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar6 + 0x548f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar6 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar6 + 0x5478);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) goto LAB_10026740c;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar6 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100267430;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
      goto LAB_10026740c;
    }
LAB_100267430:
    FUN_1004f1580(local_290);
    local_290[0] = &PTR_thunk_FUN_10015a304_10145bec0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    local_1d0 = (void *)0x0;
    uStack_1b8 = 0;
    lStack_1c0 = 0;
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    local_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    local_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    local_120 = 0;
    uStack_260 = 0;
    local_268 = (void *)0x0;
    pvStack_250 = (void *)0x0;
    local_258 = 0;
    lStack_240 = 0;
    local_248 = 0;
    uStack_230 = 0;
    local_238 = (void *)0x0;
    uStack_220 = 0;
    local_228 = 0;
    uStack_210 = 0;
    local_218 = 0;
    FUN_10015a14c(&uStack_1f8);
    FUN_100159fc8(&local_268);
    local_60 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    FUN_1004f15d8(local_290);
    FUN_10028279c(param_1 + 0x15238,local_290);
    FUN_10015a304(local_290);
  }
  else {
LAB_10026740c:
    uVar7 = FUN_10015d3ec();
    lVar6 = FUN_10015d3ec();
    FUN_1001634c4(uVar7,lVar6 + 0x5478,1);
  }
LAB_1002675dc:
  FUN_1001e6f74(param_1,param_2,&DAT_101d91198);
  return;
}




void FUN_10026760c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if ((iVar1 != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_100270a84(param_1 + 0x2c80);
    return;
  }
  return;
}




void FUN_100267650(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if ((iVar1 != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_100270a84(param_1 + 0x30);
    return;
  }
  return;
}




void FUN_10026769c(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  void *local_38 [2];
  char local_21;
  
  FUN_1002792f8(param_1 + 0x2c80,param_2 + 0x80);
  if ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x120ee4) >> 1 & 1) == 0) {
      return;
    }
    bVar4 = *(byte *)(param_2 + 0xdf);
    uVar8 = (ulong)bVar4;
    sVar1 = *(size_t *)(param_2 + 0xd0);
    if (-1 < (char)bVar4) {
      sVar1 = uVar8;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 != sVar2) {
      return;
    }
    pvVar11 = *(void **)(param_2 + 200);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_2 + 200);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
        return;
      }
      pbVar9 = (byte *)(param_2 + 0xc9);
      while( true ) {
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
        if (uVar8 == 0) break;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        if (bVar4 != *pbVar10) {
          return;
        }
      }
    }
    if (*(char *)(param_1 + 0x1371d8) == '\0') {
      return;
    }
    uVar6 = FUN_10002f320();
    pcVar7 = "vainglory://PEOPLE/FRIENDS";
  }
  else {
    bVar4 = *(byte *)(param_2 + 0xa7);
    uVar8 = (ulong)bVar4;
    sVar1 = *(size_t *)(param_2 + 0x98);
    if (-1 < (char)bVar4) {
      sVar1 = uVar8;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 != sVar2) {
      return;
    }
    pvVar11 = *(void **)(param_2 + 0x90);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_2 + 0x90);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
        return;
      }
      pbVar9 = (byte *)(param_2 + 0x91);
      while( true ) {
        uVar8 = uVar8 - 1;
        pbVar10 = pbVar10 + 1;
        if (uVar8 == 0) break;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        if (bVar4 != *pbVar10) {
          return;
        }
      }
    }
    if (*(char *)(param_1 + 0x11e2b0) == '\0') {
      return;
    }
    uVar6 = FUN_10002f320();
    pcVar7 = "vainglory://PEOPLE/GUILD";
  }
  FUN_10001549c(local_38,pcVar7);
  FUN_1000312cc(uVar6,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1002678b8(long param_1)

{
  FUN_10026769c(param_1 + -0x2c30);
  return;
}




void FUN_1002678c4(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  void *pvVar12;
  
  if ((*(byte *)(param_1 + 0x2c2c) >> 2 & 1) == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x1d0) == '\0') && ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) == 0)) {
    return;
  }
  pbVar9 = (byte *)(param_2 + 0x180);
  bVar4 = *(byte *)(param_2 + 0x197);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar11 = *(byte **)pbVar9;
    if (-1 < (char)bVar4) {
      pbVar11 = pbVar9;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(pbVar11,pbVar10,sVar1);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)*(byte **)pbVar9 & 0xff)) {
        pbVar11 = (byte *)(param_2 + 0x181);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar7 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar7 + 0x548f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar7 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  bVar5 = *(byte *)(param_2 + 0x197);
  sVar2 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar12 = *(void **)(lVar7 + 0x5478);
    puVar3 = pvVar12;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar7 + 0x5478);
    }
    pbVar11 = *(byte **)pbVar9;
    if (-1 < (char)bVar5) {
      pbVar11 = pbVar9;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar11,sVar1), iVar6 != 0)) goto LAB_100267a68;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar11 == ((uint)pvVar12 & 0xff)) {
        pbVar9 = (byte *)(lVar7 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar8 == 0) goto LAB_100267a60;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar11);
      }
      goto LAB_100267a68;
    }
LAB_100267a60:
    if ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) == 0) {
      return;
    }
  }
LAB_100267a68:
  FUN_100272528(param_1 + 0x2c80,0);
  FUN_10023c69c(param_1 + 0xb9c78,param_2);
  return;
}




void FUN_100267a98(long param_1)

{
  FUN_1002678c4(param_1 + -0x2c30);
  return;
}




void FUN_100267aa4(long param_1)

{
  FUN_100283764(param_1 + 0x15238);
  return;
}




void FUN_100267ab4(long param_1)

{
  FUN_100283764(param_1 + 0x12608);
  return;
}




void thunk_FUN_100267ac8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) != 0)) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      FUN_10023cf74(param_1 + 0xb9c78,param_2);
      return;
    }
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    uVar3 = FUN_10002f320();
    FUN_10001549c(apvStack_38,"vainglory://PEOPLE/GUILD");
    FUN_1000312cc(uVar3,apvStack_38,&DAT_101d91198,0,0);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  return;
}




void FUN_100267ac8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) != 0)) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      FUN_10023cf74(param_1 + 0xb9c78,param_2);
      return;
    }
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    uVar3 = FUN_10002f320();
    FUN_10001549c(local_38,"vainglory://PEOPLE/GUILD");
    FUN_1000312cc(uVar3,local_38,&DAT_101d91198,0,0);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100267b84(long param_1)

{
  FUN_100267ac8(param_1 + -0x2c30);
  return;
}




void thunk_FUN_100267ac8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) != 0)) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      FUN_10023cf74(param_1 + 0xb9c78,param_2);
      return;
    }
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    uVar3 = FUN_10002f320();
    FUN_10001549c(apvStack_38,"vainglory://PEOPLE/GUILD");
    FUN_1000312cc(uVar3,apvStack_38,&DAT_101d91198,0,0);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  return;
}




void FUN_100267b94(long param_1)

{
  FUN_100267ac8(param_1 + -0x2c30);
  return;
}




void thunk_FUN_100267ba4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if (((iVar1 != 0) && ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_10023cf74(param_1 + 0xb9c78,param_2);
    uVar2 = FUN_10002f320();
    FUN_10001549c(apvStack_38,"vainglory://PEOPLE/GUILD");
    FUN_1000312cc(uVar2,apvStack_38,&DAT_101d91198,0,0);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  return;
}




void FUN_100267ba4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if (((iVar1 != 0) && ((*(byte *)(param_1 + 0xbc8a4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_10023cf74(param_1 + 0xb9c78,param_2);
    uVar2 = FUN_10002f320();
    FUN_10001549c(local_38,"vainglory://PEOPLE/GUILD");
    FUN_1000312cc(uVar2,local_38,&DAT_101d91198,0,0);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100267c48(long param_1)

{
  FUN_100267ba4(param_1 + -0x2c30);
  return;
}




void FUN_100267c54(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  void *pvVar12;
  
  if ((*(byte *)(param_1 + 0x2c2c) >> 2 & 1) == 0) {
    return;
  }
  if ((*(char *)(param_2 + 0x90) == '\0') && ((*(byte *)(param_1 + 0x120ee4) >> 1 & 1) == 0)) {
    return;
  }
  pbVar9 = (byte *)(param_2 + 0x28);
  bVar4 = *(byte *)(param_2 + 0x3f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 0x30);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar11 = *(byte **)pbVar9;
    if (-1 < (char)bVar4) {
      pbVar11 = pbVar9;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(pbVar11,pbVar10,sVar1);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)*(byte **)pbVar9 & 0xff)) {
        pbVar11 = (byte *)(param_2 + 0x29);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar7 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar7 + 0x54a7);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar7 + 0x5498);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  bVar5 = *(byte *)(param_2 + 0x3f);
  sVar2 = *(size_t *)(param_2 + 0x30);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar12 = *(void **)(lVar7 + 0x5490);
    puVar3 = pvVar12;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar7 + 0x5490);
    }
    pbVar11 = *(byte **)pbVar9;
    if (-1 < (char)bVar5) {
      pbVar11 = pbVar9;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar11,sVar1), iVar6 != 0)) goto LAB_100267df8;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar11 == ((uint)pvVar12 & 0xff)) {
        pbVar9 = (byte *)(lVar7 + 0x5491);
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar8 == 0) goto LAB_100267df0;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar11);
      }
      goto LAB_100267df8;
    }
LAB_100267df0:
    if ((*(byte *)(param_1 + 0x120ee4) >> 1 & 1) == 0) {
      return;
    }
  }
LAB_100267df8:
  FUN_100272528(param_1 + 0x2c80,0);
  FUN_1002656cc(param_1 + 0x11e2b8,param_2);
  FUN_10021de00(param_1 + 0x11e2b8);
  return;
}




void FUN_100267e34(long param_1)

{
  FUN_100267c54(param_1 + -0x2c30);
  return;
}




void thunk_FUN_100267e44(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((((iVar1 != 0) && (iVar1 = FUN_1004f1680(param_2), iVar1 != 0)) &&
      ((*(byte *)(param_1 + 0x120ee4) >> 1 & 1) != 0)) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    uVar3 = FUN_10002f320();
    FUN_10001549c(apvStack_38,"vainglory://PEOPLE/TEAM");
    FUN_1000312cc(uVar3,apvStack_38,&DAT_101d91198,0,0);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  return;
}




void FUN_100267e44(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((((iVar1 != 0) && (iVar1 = FUN_1004f1680(param_2), iVar1 != 0)) &&
      ((*(byte *)(param_1 + 0x120ee4) >> 1 & 1) != 0)) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    uVar3 = FUN_10002f320();
    FUN_10001549c(local_38,"vainglory://PEOPLE/TEAM");
    FUN_1000312cc(uVar3,local_38,&DAT_101d91198,0,0);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100267eec(long param_1)

{
  FUN_100267e44(param_1 + -0x2c30);
  return;
}




void thunk_FUN_100267efc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if (((iVar1 != 0) && ((*(byte *)(param_1 + 0x120ee4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    uVar2 = FUN_10002f320();
    FUN_10001549c(apvStack_38,"vainglory://PEOPLE/TEAM");
    FUN_1000312cc(uVar2,apvStack_38,&DAT_101d91198,0,0);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  return;
}




void FUN_100267efc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1004f1680(param_2);
  if (((iVar1 != 0) && ((*(byte *)(param_1 + 0x120ee4) >> 1 & 1) != 0)) &&
     (*(char *)(param_2 + 0x44) != '\0')) {
    uVar2 = FUN_10002f320();
    FUN_10001549c(local_38,"vainglory://PEOPLE/TEAM");
    FUN_1000312cc(uVar2,local_38,&DAT_101d91198,0,0);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100267f8c(long param_1)

{
  FUN_100267efc(param_1 + -0x2c30);
  return;
}




void FUN_100267f98(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_100267fa8(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_100267fb8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001c3fc8(param_2,"FRIENDS.*");
  FUN_1001c3fc8(param_2,"GUILD.*");
  FUN_1001c3fc8(param_2,"TEAM.*");
  return;
}




void thunk_FUN_100267fb8(void)

{
  FUN_100267fb8();
  return;
}




void FUN_100268004(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ******ppppppuVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *****local_38;
  size_t local_30;
  byte local_21;
  
  FUN_10027a0c4(&local_38,param_1 + 0x590);
  uVar8 = (ulong)local_21;
  uVar7 = (uint)(char)local_21;
  sVar2 = local_30;
  if (-1 < (int)uVar7) {
    sVar2 = uVar8;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar1) {
    ppppppuVar3 = (undefined8 ******)local_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &local_38;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar7 < 0) {
      if ((sVar2 == 0) || (iVar5 = _memcmp(ppppppuVar3,pbVar10,sVar2), iVar5 == 0))
      goto LAB_100268194;
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)local_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&local_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268190;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar6 = FUN_10015d3ec();
  uVar8 = (ulong)local_21;
  uVar7 = (uint)(char)local_21;
  bVar4 = *(byte *)(lVar6 + 0x548f);
  if (-1 < (int)uVar7) {
    local_30 = uVar8;
  }
  sVar2 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (local_30 == sVar2) {
    ppppppuVar3 = (undefined8 ******)local_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &local_38;
    }
    pbVar10 = *(byte **)(lVar6 + 0x5478);
    if (-1 < (char)bVar4) {
      pbVar10 = (byte *)(lVar6 + 0x5478);
    }
    if ((int)uVar7 < 0) {
      if ((local_30 != 0) && (iVar5 = _memcmp(ppppppuVar3,pbVar10,local_30), iVar5 != 0))
      goto LAB_100268194;
    }
    else if (local_30 != 0) {
      if ((uint)*pbVar10 == ((uint)local_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&local_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268170;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
      goto LAB_100268190;
    }
LAB_100268170:
    (**(code **)(*param_1 + 0x178))(param_1,2,&DAT_101d91198);
    uVar7 = (uint)local_21;
  }
LAB_100268190:
  if ((uVar7 >> 7 & 1) == 0) {
    return;
  }
LAB_100268194:
  operator_delete(local_38);
  return;
}




void FUN_1002681ac(long *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ******ppppppuVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *****local_38;
  size_t local_30;
  byte local_21;
  
  FUN_10027a0f0(&local_38,param_1 + 0x590);
  uVar8 = (ulong)local_21;
  uVar7 = (uint)(char)local_21;
  sVar2 = local_30;
  if (-1 < (int)uVar7) {
    sVar2 = uVar8;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar1) {
    ppppppuVar3 = (undefined8 ******)local_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &local_38;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar7 < 0) {
      if ((sVar2 == 0) || (iVar5 = _memcmp(ppppppuVar3,pbVar10,sVar2), iVar5 == 0))
      goto LAB_10026833c;
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)local_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&local_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268338;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar6 = FUN_10015d3ec();
  uVar8 = (ulong)local_21;
  uVar7 = (uint)(char)local_21;
  bVar4 = *(byte *)(lVar6 + 0x54a7);
  if (-1 < (int)uVar7) {
    local_30 = uVar8;
  }
  sVar2 = *(size_t *)(lVar6 + 0x5498);
  if (-1 < (char)bVar4) {
    sVar2 = (ulong)bVar4;
  }
  if (local_30 == sVar2) {
    ppppppuVar3 = (undefined8 ******)local_38;
    if (-1 < (int)uVar7) {
      ppppppuVar3 = &local_38;
    }
    pbVar10 = *(byte **)(lVar6 + 0x5490);
    if (-1 < (char)bVar4) {
      pbVar10 = (byte *)(lVar6 + 0x5490);
    }
    if ((int)uVar7 < 0) {
      if ((local_30 != 0) && (iVar5 = _memcmp(ppppppuVar3,pbVar10,local_30), iVar5 != 0))
      goto LAB_10026833c;
    }
    else if (local_30 != 0) {
      if ((uint)*pbVar10 == ((uint)local_38 & 0xff)) {
        pbVar9 = (byte *)((ulong)&local_38 | 1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100268318;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
      goto LAB_100268338;
    }
LAB_100268318:
    (**(code **)(*param_1 + 0x178))(param_1,3,&DAT_101d91198);
    uVar7 = (uint)local_21;
  }
LAB_100268338:
  if ((uVar7 >> 7 & 1) == 0) {
    return;
  }
LAB_10026833c:
  operator_delete(local_38);
  return;
}




void FUN_100268354(void)

{
  return;
}




char * FUN_100268358(void)

{
  return "main_nav_social";
}




void FUN_100268364(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100268370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,1);
  return;
}




void FUN_100268374(undefined8 param_1)

{
  FUN_1001e6da4(param_1,1);
  return;
}




void FUN_10026837c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100268388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,0);
  return;
}




void FUN_10026838c(undefined8 param_1)

{
  FUN_1001e6da4(param_1,0);
  return;
}




long FUN_100268394(long param_1)

{
  return param_1 + -0x2c48;
}




void FUN_1002683a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002683b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c48) + 0x148))((long *)(param_1 + -0x2c48),1);
  return;
}




void FUN_1002683b8(long param_1)

{
  FUN_1001e6da4(param_1 + -0x2c48,1);
  return;
}




void FUN_1002683c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002683dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c48) + 0x148))((long *)(param_1 + -0x2c48),0);
  return;
}




void FUN_1002683e0(long param_1)

{
  FUN_1001e6da4(param_1 + -0x2c48,0);
  return;
}




char * FUN_1002683f0(void)

{
  return "main_nav_social";
}




undefined8 FUN_1002683fc(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,2,&DAT_101d91198);
  return 0;
}




undefined8 FUN_100268428(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,1,&DAT_101d91198);
  return 0;
}




undefined8 FUN_100268454(long *param_1)

{
  (**(code **)(*param_1 + 0x178))(param_1,3,&DAT_101d91198);
  return 0;
}




undefined8 * FUN_100268480(undefined8 *param_1)

{
  long lVar1;
  code *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_100533dfc();
  FUN_100308410(lVar1 + 0xd8);
  *param_1 = &PTR_thunk_FUN_10026857c_10147cc48;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = &PTR_FUN_10147cdc8;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  thunk_FUN_1005324bc(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x53) = 0;
  local_38 = DAT_101d918ac;
  local_60 = FUN_100268554;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  local_38 = DAT_101d918a8;
  local_60 = thunk_FUN_100268900;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  puStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  FUN_10030842c(lVar1 + 0xd8);
  return param_1;
}




void FUN_100268554(long param_1)

{
  FUN_1001e7eb0(param_1 + 0xf8);
  FUN_1001e56a0(0);
  FUN_100120594();
  return;
}




void thunk_FUN_100268900(long param_1)

{
  FUN_1002685dc();
  FUN_1001e56a0(1);
  FUN_10053255c(param_1 + 0xf8);
  FUN_1001e7eb0(0);
  return;
}




undefined8 * thunk_FUN_100268480(undefined8 *param_1)

{
  long lVar1;
  code *pcStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar1 = FUN_100533dfc();
  FUN_100308410(lVar1 + 0xd8);
  *param_1 = &PTR_thunk_FUN_10026857c_10147cc48;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = &PTR_FUN_10147cdc8;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  thunk_FUN_1005324bc(param_1 + 0x1f);
  *(undefined1 *)(param_1 + 0x53) = 0;
  uStack_38 = DAT_101d918ac;
  pcStack_60 = FUN_100268554;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  uStack_38 = DAT_101d918a8;
  pcStack_60 = thunk_FUN_100268900;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  puStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  FUN_10030842c(lVar1 + 0xd8);
  return param_1;
}




void FUN_10026857c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_10026857c_10147cc48;
  puVar1 = param_1 + 0x1b;
  *puVar1 = &PTR_FUN_10147cdc8;
  FUN_1002685dc();
  FUN_100308438(puVar1);
  thunk_FUN_100532514(param_1 + 0x1f);
  FUN_100308420(puVar1);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void FUN_1002685dc(long param_1)

{
  long *plVar1;
  
  if (*(long **)(param_1 + 0xe8) == (long *)0x0) {
    plVar1 = *(long **)(param_1 + 0xe0);
    if (plVar1 == (long *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x50))();
    plVar1 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (plVar1 == (long *)0x0) goto LAB_100268628;
  }
  (**(code **)(*plVar1 + 0x68))();
LAB_100268628:
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_10030842c(param_1 + 0xd8);
  return;
}




void thunk_FUN_10026857c(void)

{
  FUN_10026857c();
  return;
}




void FUN_10026864c(long param_1)

{
  FUN_10026857c(param_1 + -0xd8);
  return;
}




void FUN_100268654(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026857c();
  operator_delete(pvVar1);
  return;
}




void FUN_100268668(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026857c(param_1 + -0xd8);
  operator_delete(pvVar1);
  return;
}




void FUN_100268680(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_100533fe4();
  if (iVar2 != 0) {
    lVar1 = FUN_1004f0338();
    if (((*(int *)(lVar1 + 0x98) != 6) && (lVar1 = FUN_1004f0338(), *(int *)(lVar1 + 0x98) != 7)) &&
       (*(char *)(param_1 + 0x298) == '\0')) {
      uVar3 = FUN_10002f320();
      FUN_1000304f8(uVar3,PTR_s_screen_main_hub_101854a90,0);
      return;
    }
  }
  return;
}




void FUN_1002686ec(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  *(int *)(param_1 + 0x1e) = param_2;
  *(char *)(param_1 + 0x53) = (char)param_3;
  if ((param_2 != 2) && (iVar1 = FUN_100533fe4(param_1), iVar1 != 0)) {
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_entered.mp3",0,0);
    FUN_1001015c0();
  }
  FUN_1002685dc(param_1);
  switch((int)param_1[0x1e]) {
  case 0:
  case 3:
    FUN_100308438(param_1 + 0x1b);
    pvVar2 = operator_new(0x1658);
    lVar3 = thunk_FUN_1001f9230(pvVar2,param_3);
    param_1[0x1d] = lVar3;
    break;
  case 1:
  case 4:
    FUN_100308438(param_1 + 0x1b);
    pvVar2 = operator_new(0x1428);
    lVar3 = thunk_FUN_1001ebce0(pvVar2,(int)param_1[0x1e],param_3);
    param_1[0x1c] = lVar3;
    break;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002687c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(lVar3 + 8),1);
  return;
}




void FUN_1002687d0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_2 + 1);
  FUN_10034cc50(local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_1001148bc();
  FUN_1001162b8();
  uVar2 = *param_2;
  switch(uVar2) {
  case 0:
    break;
  case 1:
    FUN_1003467f8();
    iVar1 = FUN_10034ced0();
    uVar2 = 4;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    break;
  case 2:
    uVar2 = 2;
    break;
  case 3:
  case 4:
    uVar2 = 3;
    break;
  default:
    goto switchD_100268834_default;
  }
  FUN_1002686ec(param_1,uVar2,0);
switchD_100268834_default:
  return;
}




void FUN_100268878(long param_1)

{
  FUN_1002687d0(param_1 + -0xd8);
  return;
}




void FUN_100268880(void)

{
  return;
}




void FUN_100268884(void)

{
  return;
}




void FUN_100268888(void)

{
  return;
}




void FUN_10026888c(void)

{
  return;
}




void FUN_100268890(void)

{
  return;
}




void FUN_100268894(void)

{
  return;
}




void FUN_100268898(long param_1)

{
  undefined1 auStack_40 [32];
  
  if (((*(byte *)(param_1 + 0x84) >> 3 & 1) != 0) || (*(int *)(param_1 + 0xf0) == 2)) {
    FUN_100644aec(auStack_40,DAT_101d23654,0);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_1002688f8(long param_1)

{
  FUN_100268898(param_1 + -0xd8);
  return;
}




void FUN_100268900(long param_1)

{
  FUN_1002685dc();
  FUN_1001e56a0(1);
  FUN_10053255c(param_1 + 0xf8);
  FUN_1001e7eb0(0);
  return;
}




void FUN_100268934(void)

{
  return;
}




void FUN_100268938(void)

{
  return;
}




void FUN_10026893c(void)

{
  return;
}




void FUN_100268940(void)

{
  return;
}




long * FUN_100268944(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_100268a70_10147ce20;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  thunk_FUN_1001c0c34(param_1 + 0x5b,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b,1);
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar2,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar3 = FUN_1004e0150("MENU_CONNECTING_TO_GAME",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




long * thunk_FUN_100268944(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_thunk_FUN_100268a70_10147ce20;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  thunk_FUN_1001c0c34(param_1 + 0x5b,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5b,1);
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar2,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar3 = FUN_1004e0150("MENU_CONNECTING_TO_GAME",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




void FUN_100268a70(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100268a70_10147ce20;
  param_1[0x5b] = &PTR_FUN_10145e588;
  lVar1 = 0x4b0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2a0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x358) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x370);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x2a0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != 0);
  FUN_10064e2bc(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100268a70(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100268a70_10147ce20;
  param_1[0x5b] = &PTR_FUN_10145e588;
  lVar1 = 0x4b0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2a0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x358) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x370);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x2a0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != 0);
  FUN_10064e2bc(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100268b30(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100268a70();
  operator_delete(pvVar1);
  return;
}




void FUN_100268b44(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if ((param_2 & 1) != 0) {
    FUN_1001c0e10();
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
    return;
  }
  FUN_1001c102c(param_1 + 0x2d8);
  FUN_100642324(param_1);
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063fcac(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3f800000,puVar3);
  FUN_10063f130(puVar3,FUN_10001f4ac);
  FUN_10063fce0(0,puVar3);
  FUN_100642b14(param_1,puVar3);
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar3 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
  if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = *puVar3;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  FUN_10063ee9c(puVar3);
  *(undefined ***)puVar3 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  FUN_100642b14(param_1,puVar3);
  return;
}




void FUN_100268cb4(long param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  bool bVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  FUN_10064142c(&uStack_5c,&local_60);
  FUN_10064e47c(uStack_5c,local_60,param_1 + 0xb8);
  FUN_10064e6d8(0,0,param_1 + 0xb8,0);
  lVar1 = param_1 + 0x2d8;
  fVar6 = *(float *)(param_1 + 0x324);
  bVar4 = false;
  if ((*(float *)(param_1 + 800) == 3.0) && (bVar4 = false, !NAN(fVar6))) {
    bVar4 = fVar6 == 3.0;
  }
  if (!bVar4) {
    uVar5 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 800) = uVar5;
    FUN_1000200a0(lVar1);
  }
  fVar3 = DAT_101854a7c;
  FUN_10064e3cc(lVar1);
  local_60 = local_60 - (DAT_101854a7c + fVar6);
  fVar6 = *(float *)(param_1 + 0x318);
  bVar4 = false;
  if ((fVar6 == fVar3) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x31c)) && !NAN(local_60))) {
    bVar4 = *(float *)(param_1 + 0x31c) == local_60;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x318) = fVar3;
    *(float *)(param_1 + 0x31c) = local_60;
    FUN_1000200a0(lVar1);
  }
  local_58 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar1,&local_58);
  fVar3 = DAT_101854a7c;
  plVar2 = (long *)(param_1 + 0x1a8);
  fVar7 = *(float *)(param_1 + 0x31c);
  FUN_10064e3cc(lVar1);
  fVar6 = (fVar7 - fVar6) + -20.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x1e8) == fVar3) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x1ec)) && !NAN(fVar6))) {
    bVar4 = *(float *)(param_1 + 0x1ec) == fVar6;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x1e8) = fVar3;
    *(float *)(param_1 + 0x1ec) = fVar6;
    FUN_1000200a0(plVar2);
  }
  local_58 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
  return;
}




long FUN_100268e10(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_thunk_FUN_1002694e0_10147cf68;
  FUN_10064e264(puVar1 + 0x19);
  FUN_10064e264(param_1 + 0x180);
  thunk_FUN_100652c08(param_1 + 0x238);
  thunk_FUN_100652c08(param_1 + 0x328);
  thunk_FUN_100652c08(param_1 + 0x418);
  thunk_FUN_100652c08(param_1 + 0x508);
  thunk_FUN_100650e64(param_1 + 0x5f8);
  thunk_FUN_100650e64(param_1 + 0x728);
  thunk_FUN_100181304(param_1 + 0x858,0);
  FUN_100268e98(param_1);
  FUN_1002691d0(param_1);
  return param_1;
}




void FUN_100268e98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  plVar1 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x65;
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,param_1 + 0x47,1);
  plVar3 = param_1 + 0x83;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,param_1 + 0xa1,1);
  plVar4 = param_1 + 0xbf;
  FUN_100642bd8(plVar1,plVar4,1);
  plVar5 = param_1 + 0xe5;
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(plVar1,param_1 + 0x10b,1);
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 0x10;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_shadow");
  uVar6 = *(uint *)((long)param_1 + 0x3ac);
  if ((uVar6 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x3ac) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652dd4(plVar2,&DAT_10115a170,2);
  FUN_100652cac(param_1 + 0x47,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_deserter_icon_backdrop");
  FUN_100652dd4(plVar3,&DAT_10115a168,2);
  if ((*(uint *)((long)param_1 + 0x49c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x49c) = *(uint *)((long)param_1 + 0x49c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(param_1 + 0xa1,PTR_s_build___Splash_GameOverLose_tga_10184e0d0,"Splash_GameOverLose"
               );
  FUN_100651038(plVar4,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e298);
  uVar7 = FUN_1004e0150("MAIN_DESERTER_TITLE",0);
  FUN_1006513c0(plVar4,uVar7);
  uVar6 = *(uint *)((long)param_1 + 0x67c);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x67c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_1000200a0(plVar4);
  }
  FUN_100651460(plVar4,&DAT_10115a170);
  uVar7 = FUN_1004e0150("MAIN_DESERTER_FULL_WARNING_TEXT",0);
  FUN_1006513c0(plVar5,uVar7);
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8,&DAT_10115a168);
  FUN_100651700(plVar5,3);
  FUN_100651708(0x44580000,plVar5,1);
  uVar7 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1001816d4(0x42800000,0x42c80000,0x43c80000,param_1 + 0x10b,0,uVar7,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  local_68 = DAT_101d91884;
  local_90 = FUN_100269760;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x10c,&local_90);
  lVar8 = NEON_fmov(0x41c00000,4);
  param_1[0x116] = lVar8;
  return;
}




void FUN_1002691d0(long param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  float local_50;
  float local_4c;
  undefined1 *local_48;
  
  FUN_100641464(&local_4c,&local_50);
  FUN_10064e47c(local_4c,local_50,param_1 + 200);
  lVar1 = param_1 + 0x180;
  if ((*(float *)(param_1 + 0x1c0) != local_4c * 0.5) || (*(float *)(param_1 + 0x1c4) != 0.0)) {
    *(float *)(param_1 + 0x1c0) = local_4c * 0.5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_1000200a0(lVar1);
  }
  local_48 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(lVar1,&local_48);
  FUN_10064e47c(local_4c,local_50,lVar1);
  lVar1 = param_1 + 0x238;
  FUN_10064e47c(0x44900000,local_50,lVar1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x27c) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x278)))) {
    bVar3 = *(float *)(param_1 + 0x278) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x278) = 0;
    FUN_1000200a0(lVar1);
  }
  local_48 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x238) + 0x28))(lVar1,&local_48);
  lVar1 = param_1 + 0x328;
  if ((*(float *)(param_1 + 0x368) != 0.0) || (*(float *)(param_1 + 0x36c) != local_50 * 0.5)) {
    *(undefined4 *)(param_1 + 0x368) = 0;
    *(float *)(param_1 + 0x36c) = local_50 * 0.5;
    FUN_1000200a0(lVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x328) + 0x28))(lVar1,&local_48);
  FUN_10064e47c(local_4c,local_4c,lVar1);
  if ((*(float *)(param_1 + 0x458) != 0.0) || (*(float *)(param_1 + 0x45c) != 576.0)) {
    *(undefined8 *)(param_1 + 0x458) = 0x4410000000000000;
    FUN_1000200a0(param_1 + 0x418);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x418) + 0x28))(param_1 + 0x418,&local_48);
  if ((*(float *)(param_1 + 0x548) != 0.0) || (*(float *)(param_1 + 0x54c) != 576.0)) {
    *(undefined8 *)(param_1 + 0x548) = 0x4410000000000000;
    FUN_1000200a0(param_1 + 0x508);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x508) + 0x28))(param_1 + 0x508,&local_48);
  if ((*(float *)(param_1 + 0x638) != 0.0) || (*(float *)(param_1 + 0x63c) != 205.0)) {
    *(undefined8 *)(param_1 + 0x638) = 0x434d000000000000;
    FUN_1000200a0(param_1 + 0x5f8);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5f8) + 0x28))(param_1 + 0x5f8,&local_48);
  if ((*(float *)(param_1 + 0x768) != 0.0) || (*(float *)(param_1 + 0x76c) != 931.0)) {
    *(undefined8 *)(param_1 + 0x768) = 0x4468c00000000000;
    FUN_1000200a0(param_1 + 0x728);
  }
  local_48 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x728) + 0x28))(param_1 + 0x728,&local_48);
  plVar2 = (long *)(param_1 + 0x858);
  if ((*(float *)(param_1 + 0x898) != 0.0) || (*(float *)(param_1 + 0x89c) != local_50 + -162.0)) {
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(float *)(param_1 + 0x89c) = local_50 + -162.0;
    FUN_1000200a0(plVar2);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_48);
  return;
}




long thunk_FUN_100268e10(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_thunk_FUN_1002694e0_10147cf68;
  FUN_10064e264(puVar1 + 0x19);
  FUN_10064e264(param_1 + 0x180);
  thunk_FUN_100652c08(param_1 + 0x238);
  thunk_FUN_100652c08(param_1 + 0x328);
  thunk_FUN_100652c08(param_1 + 0x418);
  thunk_FUN_100652c08(param_1 + 0x508);
  thunk_FUN_100650e64(param_1 + 0x5f8);
  thunk_FUN_100650e64(param_1 + 0x728);
  thunk_FUN_100181304(param_1 + 0x858,0);
  FUN_100268e98(param_1);
  FUN_1002691d0(param_1);
  return param_1;
}




void FUN_1002694e0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002694e0_10147cf68;
  FUN_10003bd40(param_1 + 0x10b);
  thunk_FUN_100651068(param_1 + 0xe5);
  thunk_FUN_100651068(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_1014a7108;
  param_1[0xb8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb);
  FUN_10064e2bc(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_1014a7108;
  param_1[0x9a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9d);
  FUN_10064e2bc(param_1 + 0x83);
  param_1[0x65] = &PTR_FUN_1014a7108;
  param_1[0x7c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7f);
  FUN_10064e2bc(param_1 + 0x65);
  param_1[0x47] = &PTR_FUN_1014a7108;
  param_1[0x5e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002694e0(void)

{
  FUN_1002694e0();
  return;
}




void FUN_1002695c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002694e0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002695d4(void)

{
  return;
}




void FUN_1002695d8(void)

{
  return;
}




void FUN_1002695dc(long param_1,undefined8 param_2)

{
  if ((int)param_2 == 0) {
    FUN_1001e56a0(1);
    FUN_1001b4c0c(param_1 + 0x858,1);
    *(uint *)(param_1 + 0x8dc) = *(uint *)(param_1 + 0x8dc) | 4;
    FUN_1002691d0(param_1);
  }
  else {
    FUN_1001b4c0c(param_1 + 0x858,1);
    *(uint *)(param_1 + 0x8dc) = *(uint *)(param_1 + 0x8dc) | 4;
    FUN_1002691d0(param_1);
    FUN_1001e56a0(0);
  }
  FUN_10026965c(param_1,param_2);
  return;
}




void FUN_10026965c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,&local_38);
  uVar1 = FUN_10018eed4();
  FUN_10063f0e8(0x3f000000);
  param_1 = param_1 + 0x180;
  if (param_2 == 0) {
    local_40 = 0;
    local_3c = local_38;
    FUN_100640428(uVar1,param_1,&local_40);
    FUN_10063f130(uVar1,FUN_10001f160);
    FUN_100642324(param_1);
    FUN_100642b14(param_1,uVar1);
  }
  else {
    local_40 = 0x44700000;
    local_3c = local_38;
    FUN_100640428(uVar1,param_1,&local_40);
    FUN_10063f130(uVar1,FUN_10006bf9c);
    FUN_10064e47c(0,local_38,param_1);
    FUN_100642324(param_1);
    FUN_100642b14(param_1,uVar1);
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_sting_deserter_screen.mp3",0,0);
  }
  return;
}




void FUN_100269760(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23554,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002697ac(uint *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x77) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x60));
        }
        if (*(char *)(lVar1 + 0x5f) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x48));
        }
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x47) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x30));
        }
        if (*(char *)(lVar1 + 0x2f) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x18));
        }
        FUN_100128504(lVar3 + lVar4,*(undefined8 *)(lVar3 + lVar4 + 8));
        lVar4 = lVar4 + 0x88;
      } while ((ulong)uVar2 * 0x88 - lVar4 != 0);
    }
    if (param_2 != 0) {
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




void FUN_10026987c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar4 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        lVar3 = lVar3 + -0xc;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100269908(uint *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  if (param_1[1] < param_2) {
    puVar3 = operator_new__((ulong)param_2 * 0x88);
    puVar7 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar10 = puVar7 + (ulong)*param_1 * 0x11;
      puVar8 = puVar3;
      do {
        puVar9 = puVar8 + 1;
        *puVar9 = 0;
        puVar8[2] = 0;
        *puVar8 = puVar9;
        plVar11 = (long *)*puVar7;
        while (plVar11 != puVar7 + 1) {
          FUN_100269af0(puVar8,puVar9,plVar11 + 4,plVar11 + 4);
          plVar4 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            plVar4 = plVar11 + 2;
            bVar2 = *(long **)*plVar4 != plVar11;
            plVar11 = (long *)*plVar4;
            if (bVar2) {
              do {
                lVar6 = *plVar4;
                plVar4 = (long *)(lVar6 + 0x10);
                plVar11 = (long *)*plVar4;
              } while (*plVar11 != lVar6);
            }
          }
          else {
            do {
              plVar11 = plVar4;
              plVar4 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
        }
        FUN_10003330c(puVar8 + 3,puVar7 + 3);
        FUN_10003330c(puVar8 + 6,puVar7 + 6);
        FUN_10003330c(puVar8 + 9,puVar7 + 9);
        FUN_10003330c(puVar8 + 0xc,puVar7 + 0xc);
        uVar5 = puVar7[0xf];
        *(undefined1 *)(puVar8 + 0x10) = *(undefined1 *)(puVar7 + 0x10);
        puVar8[0xf] = uVar5;
        puVar7 = puVar7 + 0x11;
        puVar8 = puVar8 + 0x11;
      } while (puVar7 != puVar10);
      puVar7 = *(undefined8 **)(param_1 + 2);
      uVar1 = *param_1;
      param_1[1] = param_2;
      if (uVar1 != 0) {
        lVar6 = 0;
        do {
          if (*(char *)((long)puVar7 + lVar6 + 0x77) < '\0') {
            operator_delete(*(void **)((long)puVar7 + lVar6 + 0x60));
          }
          if (*(char *)((long)puVar7 + lVar6 + 0x5f) < '\0') {
            operator_delete(*(void **)((long)puVar7 + lVar6 + 0x48));
          }
          if (*(char *)((long)puVar7 + lVar6 + 0x47) < '\0') {
            operator_delete(*(void **)((long)puVar7 + lVar6 + 0x30));
          }
          if (*(char *)((long)puVar7 + lVar6 + 0x2f) < '\0') {
            operator_delete(*(void **)((long)puVar7 + lVar6 + 0x18));
          }
          FUN_100128504((long)puVar7 + lVar6,*(undefined8 *)((long)puVar7 + lVar6 + 8));
          lVar6 = lVar6 + 0x88;
        } while ((ulong)uVar1 * 0x88 - lVar6 != 0);
        puVar7 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete__(puVar7);
    }
    *(undefined8 **)(param_1 + 2) = puVar3;
  }
  return;
}




undefined1  [16]
FUN_100269af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_100269b80(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x40);
    FUN_10003330c((long)pvVar3 + 0x20,param_4);
    *(undefined4 *)((long)pvVar3 + 0x38) = *(undefined4 *)(param_4 + 0x18);
    FUN_100128778(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_100269b80(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 1 != param_2) {
    iVar2 = FUN_100269d28(param_5,param_2 + 4);
    if (iVar2 == 0) {
      iVar2 = FUN_100269d28(param_2 + 4,param_5);
      if (iVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (iVar2 = FUN_100269d28(param_5,plVar5 + 4), iVar2 != 0)) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_100269ce0;
    }
  }
  plVar5 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar1 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
        } while (*(long *)*plVar3 == lVar4);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    iVar2 = FUN_100269d28(plVar3 + 4,param_5);
    if (iVar2 == 0) {
LAB_100269ce0:
      plVar3 = (long *)FUN_1001286d4(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




uint FUN_100269d28(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_100269d98;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_100269d98:
  return uVar8 >> 0x1f;
}




void FUN_100269da8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_10147d0d0;
  puVar1[0x17] = 0;
  *(byte *)(puVar1 + 0x18) = *(byte *)(puVar1 + 0x18) & 0xfe;
  *(uint *)((long)puVar1 + 0x84) = *(uint *)((long)puVar1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_100269de4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_10064e2bc_10147d0d0;
  puVar1[0x17] = 0;
  *(byte *)(puVar1 + 0x18) = *(byte *)(puVar1 + 0x18) & 0xfe;
  *(uint *)((long)puVar1 + 0x84) = *(uint *)((long)puVar1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_100269e20(long *param_1,ulong param_2,undefined4 param_3,int param_4)

{
  ushort *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  
  if ((((uint)((*(byte *)(param_1 + 0x18) & 1) == 0) ^ (uint)param_2) & 1) != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    uVar4 = 0;
    break;
  case 1:
    uVar4 = 1;
    break;
  case 2:
    uVar4 = 2;
    break;
  case 3:
    uVar4 = 3;
    break;
  case 4:
    FUN_10026a264(param_1,param_2);
    goto switchD_100269e88_default;
  case 5:
    uVar4 = 1;
    goto LAB_100269efc;
  case 6:
    uVar4 = 0;
LAB_100269efc:
    uVar5 = 0;
    goto LAB_100269f00;
  default:
    goto switchD_100269e88_default;
  }
  uVar5 = 1;
LAB_100269f00:
  FUN_100269fe0(param_1,param_2,uVar4,uVar5);
switchD_100269e88_default:
  lVar3 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar6 * 0x40);
  if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
  *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_10144bff8;
  *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  pcVar2 = FUN_10026a4c4;
  if ((uint)param_2 == 0) {
    pcVar2 = FUN_10026a4dc;
  }
  *(code **)(puVar1 + 8) = pcVar2;
  *(long **)(puVar1 + 0x10) = param_1;
  FUN_100642b14(param_1,puVar1);
  if (((param_2 & 1) == 0) && (param_4 != 0)) {
    uVar4 = FUN_100047398();
    FUN_100642b14(param_1,uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000100269fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1,param_2);
  return;
}




void FUN_100269fe0(undefined8 param_1,long param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  undefined1 auStack_5c [4];
  float local_58;
  float local_54;
  
  if ((((*(byte *)(param_2 + 0xc0) & 1) == 0 ^ param_3) & 1) != 0) {
    return;
  }
  uVar2 = FUN_100126b4c();
  FUN_1001e35ec(param_2,uVar2,&local_54,&local_58,auStack_5c);
  if (param_4 == 2) {
    fVar6 = *(float *)(param_2 + 0xb8);
    fVar7 = -0.35;
LAB_10026a0ac:
    fVar7 = local_58 * fVar7;
  }
  else {
    if (param_4 == 1) {
      fVar6 = 0.35;
    }
    else {
      if (param_4 != 0) {
        fVar6 = *(float *)(param_2 + 0xb8);
        fVar7 = 0.35;
        goto LAB_10026a0ac;
      }
      fVar6 = -0.35;
    }
    fVar6 = local_54 * fVar6;
    fVar7 = *(float *)(param_2 + 0xbc);
  }
  fVar8 = (float)param_1 * 0.5;
  local_68 = fVar6;
  fStack_64 = fVar7;
  FUN_100642324(param_2);
  if (param_3 == 0) {
    uVar2 = FUN_1000b50a8();
    FUN_10063fb90(uVar2,&local_68);
    FUN_10063f0e8(param_1,uVar2);
    FUN_10063f130(uVar2,FUN_10001f218);
    if (param_5 != 0) {
      uVar3 = FUN_100047714();
      FUN_10063fce0(0);
      FUN_10063f0e8(fVar8,uVar3);
      uVar3 = FUN_10001f4d4();
      FUN_10063f2a4(uVar3,uVar2);
      uVar2 = uVar3;
    }
    FUN_100642b14(param_2,uVar2);
    uVar2 = FUN_100047300();
    FUN_100642b14(param_2,uVar2);
    bVar4 = *(byte *)(param_2 + 0xc0) & 0xfe;
  }
  else {
    bVar1 = false;
    if ((*(float *)(param_2 + 0x40) == fVar6) &&
       (bVar1 = false, !NAN(*(float *)(param_2 + 0x44)) && !NAN(fVar7))) {
      bVar1 = *(float *)(param_2 + 0x44) == fVar7;
    }
    if (!bVar1) {
      *(ulong *)(param_2 + 0x40) = CONCAT44(fStack_64,local_68);
      FUN_1000200a0(param_2);
    }
    uVar5 = *(uint *)(param_2 + 0x84);
    if ((uVar5 & 0x7f80) != 0) {
      *(uint *)(param_2 + 0x84) = uVar5 & 0xffff807f;
      FUN_1000200a0(param_2);
      uVar5 = *(uint *)(param_2 + 0x84);
    }
    *(uint *)(param_2 + 0x84) = uVar5 | 0xc;
    uVar2 = FUN_1000b50a8();
    FUN_10063fb90(uVar2,param_2 + 0xb8);
    FUN_10063f0e8(param_1,uVar2);
    FUN_10063f130(uVar2,FUN_10001f160);
    if (param_5 == 0) {
      if ((~*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
        *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x7f80;
        FUN_1000200a0(param_2);
      }
    }
    else {
      uVar3 = FUN_100047714();
      FUN_10063fce0(0x3f800000);
      FUN_10063f0e8(fVar8,uVar3);
      uVar3 = FUN_10001f4d4();
      FUN_10063f2a4(uVar3,uVar2);
      uVar2 = uVar3;
    }
    FUN_100642b14(param_2,uVar2);
    bVar4 = *(byte *)(param_2 + 0xc0) | 1;
  }
  *(byte *)(param_2 + 0xc0) = bVar4;
  return;
}




void FUN_10026a264(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if ((((*(byte *)(param_2 + 0xc0) & 1) == 0 ^ param_3) & 1) != 0) {
    return;
  }
  FUN_100642324();
  lVar2 = DAT_101dbd2f8;
  if (param_3 == 0) {
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar5);
      *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a5410;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f0e8(param_1,puVar5);
    FUN_100047300();
    FUN_100047398();
    FUN_100642b7c(param_2,puVar5);
    bVar3 = *(byte *)(param_2 + 0xc0) & 0xfe;
    goto LAB_10026a4a8;
  }
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 8;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f | 8;
    FUN_1000200a0(param_2);
  }
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
LAB_10026a3d4:
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 == 0xffff) goto LAB_10026a3d4;
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f0f0(puVar6);
    *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f0e8(param_1,puVar6);
  FUN_100642b7c(param_2,puVar5);
  bVar3 = *(byte *)(param_2 + 0xc0) | 1;
LAB_10026a4a8:
  *(byte *)(param_2 + 0xc0) = bVar3;
  return;
}




void FUN_10026a4c4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010026a4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1,1);
    return;
  }
  return;
}




void FUN_10026a4dc(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010026a4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1,0);
    return;
  }
  return;
}




void FUN_10026a4f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




long * FUN_10026a50c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_10147d238;
  puVar4 = puVar4 + 0x11;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_100650e64(param_1 + 0x6b);
  *(undefined1 *)(param_1 + 0x91) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6b,1);
  local_48 = DAT_101dbd458;
  local_70 = FUN_10026a72c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  local_48 = DAT_101dbd484;
  local_70 = FUN_10026a72c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  FUN_100652e40(puVar4,0);
  FUN_100652dd4(puVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar4);
  }
  FUN_100652e40(plVar1,0);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
  FUN_100652e40(plVar2,0);
  if ((*(uint *)((long)param_1 + 0x2ec) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2ec) = *(uint *)((long)param_1 + 0x2ec) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  uVar3 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar3 & 0xfffffffb;
  if ((uVar3 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar3 & 0xffff807b;
    FUN_1000200a0(param_1);
  }
  FUN_10026a730(param_1);
  return param_1;
}




void FUN_10026a72c(void)

{
  return;
}




void FUN_10026a730(long param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  float local_40;
  float fStack_3c;
  undefined1 *local_38;
  
  FUN_100641464(&fStack_3c,&local_40);
  FUN_10064e47c(fStack_3c,local_40,param_1 + 0x88);
  lVar1 = param_1 + 0x178;
  FUN_10064e47c(fStack_3c,local_40 * 0.5,lVar1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1bc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x1b8)))) {
    bVar3 = *(float *)(param_1 + 0x1b8) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    FUN_1000200a0(lVar1);
  }
  local_38 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x178) + 0x28))(lVar1,&local_38);
  lVar1 = param_1 + 0x268;
  FUN_10064e47c(fStack_3c,local_40 * 0.5,lVar1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x2a8) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x2ac)) && !NAN(local_40))) {
    bVar3 = *(float *)(param_1 + 0x2ac) == local_40;
  }
  if (!bVar3) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(float *)(param_1 + 0x2ac) = local_40;
    FUN_1000200a0(lVar1);
  }
  local_38 = (undefined1 *)0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x268) + 0x28))(lVar1,&local_38);
  plVar2 = (long *)(param_1 + 0x358);
  local_40 = local_40 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x398) == fStack_3c * 0.5) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x39c)) && !NAN(local_40))) {
    bVar3 = *(float *)(param_1 + 0x39c) == local_40;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x398) = fStack_3c * 0.5;
    *(float *)(param_1 + 0x39c) = local_40;
    FUN_1000200a0(plVar2);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_38);
  return;
}




long * thunk_FUN_10026a50c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_10147d238;
  puVar4 = puVar4 + 0x11;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_100650e64(param_1 + 0x6b);
  *(undefined1 *)(param_1 + 0x91) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6b,1);
  uStack_48 = DAT_101dbd458;
  pcStack_70 = FUN_10026a72c;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_70);
  uStack_48 = DAT_101dbd484;
  pcStack_70 = FUN_10026a72c;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_70);
  FUN_100652e40(puVar4,0);
  FUN_100652dd4(puVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar4);
  }
  FUN_100652e40(plVar1,0);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
  FUN_100652e40(plVar2,0);
  if ((*(uint *)((long)param_1 + 0x2ec) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2ec) = *(uint *)((long)param_1 + 0x2ec) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  uVar3 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar3 & 0xfffffffb;
  if ((uVar3 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar3 & 0xffff807b;
    FUN_1000200a0(param_1);
  }
  FUN_10026a730(param_1);
  return param_1;
}




void thunk_FUN_10026a730(void)

{
  FUN_10026a730();
  return;
}




void FUN_10026a880(long param_1,uint param_2)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ushort uVar5;
  uint uVar6;
  
  if (*(byte *)(param_1 + 0x488) != param_2) {
    FUN_100642324();
    if (param_2 == 0) {
      lVar2 = FUN_10008e900();
      *(code **)(lVar2 + 0x10) = FUN_10026aacc;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      uVar3 = FUN_100047714();
      FUN_10063f0e8(0x3dcccccd);
      FUN_10063fce0(0,uVar3);
      lVar4 = DAT_101dbd2f8;
      uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar5 != 0xffff) {
        puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar1;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_10063ee9c(puVar1);
        *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      lVar4 = FUN_10008e900();
      *(code **)(lVar4 + 0x10) = FUN_10026aad4;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      FUN_100642b7c(param_1,lVar2);
      *(undefined1 *)(param_1 + 0x488) = 0;
      uVar6 = *(uint *)(param_1 + 0x10c) & 0xffffffef;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x84);
      if ((uVar6 & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x84) = uVar6 & 0xffff807f;
        FUN_1000200a0(param_1);
        uVar6 = *(uint *)(param_1 + 0x84);
      }
      *(uint *)(param_1 + 0x84) = uVar6 | 0x10;
      lVar2 = FUN_10008e900();
      *(code **)(lVar2 + 0x10) = FUN_10026aacc;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      lVar4 = DAT_101dbd2f8;
      uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar5 != 0xffff) {
        puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar1;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_10063ee9c(puVar1);
        *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      uVar3 = FUN_100047714();
      FUN_10063f0e8(0x3dcccccd);
      FUN_10063fce0(0x3f800000,uVar3);
      FUN_100642b7c(param_1,lVar2);
      *(undefined1 *)(param_1 + 0x488) = 1;
      uVar6 = *(uint *)(param_1 + 0x10c) | 0x10;
    }
    *(uint *)(param_1 + 0x10c) = uVar6;
  }
  return;
}




void FUN_10026aacc(undefined8 param_1,undefined8 param_2)

{
  FUN_10026aadc(param_2);
  return;
}




void FUN_10026aad4(undefined8 param_1,undefined8 param_2)

{
  FUN_10026ac20(param_2);
  return;
}




void FUN_10026aadc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float local_38;
  undefined4 uStack_34;
  
  FUN_100641464(&uStack_34,&local_38);
  if (*(long *)(param_1 + 0x158) == 0) {
    FUN_100652cac(param_1 + 0x88,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  }
  FUN_10064e47c(uStack_34,local_38,param_1 + 0x88);
  lVar1 = param_1 + 0x178;
  if (*(long *)(param_1 + 0x248) == 0) {
    FUN_100652cac(lVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
    FUN_100652dd4(lVar1,&DAT_10115a164,2);
  }
  FUN_10064e47c(uStack_34,local_38 * 0.5,lVar1);
  lVar1 = param_1 + 0x268;
  if (*(long *)(param_1 + 0x338) == 0) {
    FUN_100652cac(lVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
    FUN_100652dd4(lVar1,&DAT_10115a164,2);
  }
  FUN_10064e47c(uStack_34,local_38 * 0.5,lVar1);
  FUN_100651594(param_1 + 0x358,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar2 = FUN_1004e0150("HUD_PAUSED_SCREEN_MESSAGE",0);
  FUN_1006513c0(param_1 + 0x358,uVar2);
  return;
}




void FUN_10026ac20(long param_1)

{
  FUN_100652d8c(param_1 + 0x88);
  FUN_100652d8c(param_1 + 0x178);
  FUN_100652d8c(param_1 + 0x268);
  FUN_1006510f8(param_1 + 0x358);
  return;
}




void FUN_10026ac58(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10147d238;
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10026acfc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100533dfc();
  FUN_1001e1b34(lVar1 + 0xd8);
  *param_1 = &PTR_thunk_FUN_10026af2c_10147d338;
  param_1[0x1b] = &PTR_FUN_10147d488;
  thunk_FUN_100652c08(param_1 + 0x1e);
  thunk_FUN_1001ae894(param_1 + 0x3c);
  FUN_1006421a8(param_1 + 0x17b);
  param_1[0x17b] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1005324bc(param_1 + 0x18c);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 0;
  FUN_10026ad88(param_1);
  return param_1;
}




void FUN_10026ad88(long *param_1)

{
  long *plVar1;
  long *plVar2;
  code *local_60;
  long *plStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17b,1);
  plVar1 = param_1 + 0x1e;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x3c;
  FUN_100642bd8(plVar1,plVar2,1);
  local_38 = DAT_101d918ac;
  local_60 = thunk_FUN_10026b3b8;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  local_38 = DAT_101d918a8;
  local_60 = FUN_10026b224;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  FUN_100652cac(plVar1,PTR_s_build___RewardScreenBackground_p_101854998,"full_splash_1k");
  if ((*(float *)(param_1 + 0x28) != 0.5) || (*(float *)((long)param_1 + 0x144) != 0.0)) {
    param_1[0x28] = 0x3f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_10001549c(&local_60,"battered");
  FUN_1001aefd4(plVar2,&local_60);
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  FUN_10001549c(&local_60,"IDLE_CLOSED");
  FUN_1001aeb7c(0xbf800000,plVar2,&local_60);
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  FUN_1002340fc(0x3f800000,plVar2);
  FUN_1001af9fc(plVar2,0);
  *(uint *)((long)param_1 + 0x264) = *(uint *)((long)param_1 + 0x264) & 0xfffffffb;
  return;
}




undefined8 * thunk_FUN_10026acfc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100533dfc();
  FUN_1001e1b34(lVar1 + 0xd8);
  *param_1 = &PTR_thunk_FUN_10026af2c_10147d338;
  param_1[0x1b] = &PTR_FUN_10147d488;
  thunk_FUN_100652c08(param_1 + 0x1e);
  thunk_FUN_1001ae894(param_1 + 0x3c);
  FUN_1006421a8(param_1 + 0x17b);
  param_1[0x17b] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1005324bc(param_1 + 0x18c);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 0;
  FUN_10026ad88(param_1);
  return param_1;
}




void FUN_10026af2c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10026af2c_10147d338;
  param_1[0x1b] = &PTR_FUN_10147d488;
  if (*(char *)((long)param_1 + 0xe3f) < '\0') {
    operator_delete((void *)param_1[0x1c5]);
  }
  if (*(char *)((long)param_1 + 0xe27) < '\0') {
    operator_delete((void *)param_1[0x1c2]);
  }
  FUN_1000ec1cc(param_1 + 0x1c0,1);
  thunk_FUN_100532514(param_1 + 0x18c);
  FUN_10064221c(param_1 + 0x17b);
  FUN_1001afa60(param_1 + 0x3c);
  param_1[0x1e] = &PTR_FUN_1014a7108;
  param_1[0x35] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x38);
  FUN_10064e2bc(param_1 + 0x1e);
  FUN_1001e1bb0(param_1 + 0x1b);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10026af2c(void)

{
  FUN_10026af2c();
  return;
}




void FUN_10026afe8(long param_1)

{
  FUN_10026af2c(param_1 + -0xd8);
  return;
}




void FUN_10026aff0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026af2c();
  operator_delete(pvVar1);
  return;
}




void FUN_10026b004(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026af2c(param_1 + -0xd8);
  operator_delete(pvVar1);
  return;
}




void FUN_10026b01c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_10011a354(0);
  if ((iVar1 != 0) && (iVar1 = FUN_100533fe4(param_1), iVar1 != 0)) {
    lVar2 = FUN_10002f320();
    FUN_1001a3dd0(lVar2 + 0xc6d0);
    return;
  }
  return;
}




void FUN_10026b068(long param_1)

{
  FUN_1000ec30c(param_1 + 0xe00);
  if (*(char *)(param_1 + 0xe40) != '\0') {
    FUN_10026b0a4(param_1);
    return;
  }
  return;
}




void FUN_10026b0a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_1001af430(param_1 + 0x1e0,1,1,1);
  lVar1 = param_1 + 0xbd8;
  FUN_100642324(lVar1);
  uVar2 = FUN_10064081c(0);
  FUN_100642b14(lVar1,uVar2);
  lVar3 = FUN_10008e900();
  *(code **)(lVar3 + 0x10) = FUN_10026ba20;
  *(long *)(lVar3 + 0x20) = param_1;
  FUN_100642b14(lVar1,lVar3);
  return;
}




void FUN_10026b110(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xe00) != 0) {
    return;
  }
  uVar1 = FUN_10002f320();
  FUN_1000304f8(uVar1,PTR_s_screen_main_hub_101854a90,1);
  return;
}




void FUN_10026b144(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  bVar4 = param_2[0x17];
  uVar9 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar9;
  }
  bVar5 = *(byte *)(param_1 + 0xe27);
  sVar2 = *(size_t *)(param_1 + 0xe18);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pbVar3 = *(byte **)param_2;
    if (-1 < (char)bVar4) {
      pbVar3 = param_2;
    }
    pbVar8 = *(byte **)(param_1 + 0xe10);
    if (-1 < (char)bVar5) {
      pbVar8 = (byte *)(param_1 + 0xe10);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(pbVar3,pbVar8,sVar1), iVar6 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar8 != ((uint)*(byte **)param_2 & 0xff)) {
        return;
      }
      while( true ) {
        uVar9 = uVar9 - 1;
        param_2 = param_2 + 1;
        pbVar8 = pbVar8 + 1;
        if (uVar9 == 0) break;
        if (*param_2 != *pbVar8) {
          return;
        }
      }
    }
    FUN_10032523c();
    iVar6 = FUN_100325318();
    if (iVar6 != 0) {
      uVar7 = FUN_10002f320();
      FUN_1000304f8(uVar7,PTR_s_screen_main_hub_101854a90,1);
      return;
    }
  }
  return;
}




void FUN_10026b218(long param_1)

{
  FUN_10026b144(param_1 + -0xd8);
  return;
}




void thunk_FUN_10026b3b8(long param_1)

{
  FUN_1001ad5c0();
  FUN_1001e7eb0(param_1 + 0xc60);
  FUN_10026b260(param_1);
  if (*(char *)(param_1 + 0xe3f) < '\0') {
    if (*(long *)(param_1 + 0xe30) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0xe3f) == '\0') {
    return;
  }
  FUN_10026b410(param_1);
  return;
}




void FUN_10026b224(long param_1)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) & 0xfffffffb;
  lVar1 = FUN_10002f320();
  FUN_1001a4ac8(lVar1 + 0xc6d0);
  FUN_10026b7a4(param_1);
  return;
}




void FUN_10026b260(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  void *local_d0 [2];
  char local_b9;
  void *local_b8;
  char local_a1;
  void *local_a0;
  char local_89;
  void *local_88;
  char local_71;
  void *local_70;
  char local_59;
  void *local_58;
  char local_41;
  undefined1 auStack_40 [8];
  float local_38;
  float fStack_34;
  
  FUN_100641464(&local_38,(ulong)&local_38 | 4);
  uVar3 = FUN_100331578();
  FUN_10033122c(local_d0,uVar3,param_1 + 0xe28);
  lVar1 = param_1 + 0xf0;
  FUN_100652dd4(lVar1,auStack_40,2);
  FUN_10064e47c(local_38 * 1.01,local_38 * 1.01,lVar1);
  fVar4 = local_38 * -0.01;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x130) == local_38 * 0.5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x134)) && !NAN(fVar4))) {
    bVar2 = *(float *)(param_1 + 0x134) == fVar4;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x130) = local_38 * 0.5;
    *(float *)(param_1 + 0x134) = fVar4;
    FUN_1000200a0(lVar1);
  }
  FUN_1001af2f0(param_1 + 0x1e0);
  fStack_34 = fStack_34 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x220) == local_38 * 0.5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x224)) && !NAN(fStack_34))) {
    bVar2 = *(float *)(param_1 + 0x224) == fStack_34;
  }
  if (!bVar2) {
    *(ulong *)(param_1 + 0x220) = CONCAT44(fStack_34,local_38 * 0.5);
    FUN_1000200a0(param_1 + 0x1e0);
  }
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  if (local_59 < '\0') {
    operator_delete(local_70);
  }
  if (local_71 < '\0') {
    operator_delete(local_88);
  }
  if (local_89 < '\0') {
    operator_delete(local_a0);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8);
  }
  if (local_b9 < '\0') {
    operator_delete(local_d0[0]);
  }
  return;
}




void FUN_10026b3b8(long param_1)

{
  FUN_1001ad5c0();
  FUN_1001e7eb0(param_1 + 0xc60);
  FUN_10026b260(param_1);
  if (*(char *)(param_1 + 0xe3f) < '\0') {
    if (*(long *)(param_1 + 0xe30) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0xe3f) == '\0') {
    return;
  }
  FUN_10026b410(param_1);
  return;
}




void FUN_10026b410(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_80;
  float fStack_7c;
  char local_69;
  float local_68 [2];
  
  *(undefined1 *)(param_3 + 0xe40) = 0;
  FUN_100641464(local_68,(ulong)local_68 | 4);
  FUN_10026b7e8(param_3);
  uVar5 = FUN_10026b8d0(param_3);
  uVar5 = FUN_1006408f4(uVar5,param_2,0x3e800000,FUN_10001f218);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_101469878;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10001549c(&local_80,"build://Sounds/UI.assetbundle/sfx_chest_land.mp3");
  FUN_1001e1e48(puVar4,&local_80,0,0);
  if (local_69 < '\0') {
    operator_delete((void *)CONCAT44(fStack_7c,local_80));
  }
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3f051eb8,puVar4);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f564(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f614(puVar4,uVar5);
  lVar1 = param_3 + 0x1e0;
  FUN_100642b14(lVar1,puVar4);
  FUN_10001549c(&local_80,"DROP_LANDING");
  FUN_1001aeb7c(0xbf800000,lVar1,&local_80);
  if (local_69 < '\0') {
    operator_delete((void *)CONCAT44(fStack_7c,local_80));
  }
  lVar2 = FUN_10008e900();
  *(code **)(lVar2 + 0x10) = FUN_10026b948;
  *(long *)(lVar2 + 0x20) = param_3;
  FUN_100642b14(lVar1,lVar2);
  fVar6 = local_68[0] * 0.03;
  param_3 = param_3 + 0xf0;
  FUN_100642324(param_3);
  uVar5 = FUN_10064081c(0x3e800000);
  FUN_100642b14(param_3,uVar5);
  uVar5 = FUN_10001f0d8();
  FUN_10063f0e8(0x3d4ccccd);
  fVar7 = -(local_68[0] * 0.03);
  local_80 = fVar7;
  fStack_7c = fVar6;
  FUN_10063f984(uVar5,&local_80);
  FUN_100642b14(param_3,uVar5);
  uVar5 = FUN_10001f0d8();
  FUN_10063f0e8(0x3d4ccccd);
  local_80 = fVar6;
  fStack_7c = fVar7;
  FUN_10063f984(uVar5,&local_80);
  FUN_100642b14(param_3,uVar5);
  uVar5 = FUN_10001f0d8();
  FUN_10063f0e8(0x3d4ccccd);
  local_80 = fVar7;
  fStack_7c = fVar7;
  FUN_10063f984(uVar5,&local_80);
  FUN_100642b14(param_3,uVar5);
  uVar5 = FUN_10001f0d8();
  FUN_10063f0e8(0x3d4ccccd);
  local_80 = fVar6;
  fStack_7c = fVar6;
  FUN_10063f984(uVar5,&local_80);
  FUN_100642b14(param_3,uVar5);
  return;
}




void FUN_10026b7a4(long param_1)

{
  std::string::operator=((string *)(param_1 + 0xe10),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0xe28),(string *)&DAT_101d91198);
  FUN_1000ec1cc(param_1 + 0xe00,0);
  return;
}




void FUN_10026b7e8(long param_1)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *local_48 [2];
  char local_31;
  
  lVar1 = param_1 + 0x1e0;
  FUN_100642324(lVar1);
  fVar3 = (float)FUN_1001afa0c(lVar1);
  fVar4 = *(float *)(param_1 + 0x130);
  fVar5 = fVar3 * 0.5 - fVar4;
  FUN_1001afa0c(lVar1);
  fVar3 = -(fVar4 + *(float *)(param_1 + 0x134));
  bVar2 = false;
  if ((*(float *)(param_1 + 0x220) == fVar5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x224)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_1 + 0x224) == fVar3;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x220) = fVar5;
    *(float *)(param_1 + 0x224) = fVar3;
    FUN_1000200a0(lVar1);
  }
  *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) | 4;
  if (*(char *)(param_1 + 0xe3f) < '\0') {
    if (*(long *)(param_1 + 0xe30) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0xe3f) == '\0') {
    return;
  }
  FUN_1001aefd4(lVar1,param_1 + 0xe28);
  FUN_10001549c(local_48,"DROP");
  FUN_1001aeb7c(0xbf800000,lVar1,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




float FUN_10026b8d0(long param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_48 [8];
  
  FUN_100641464(auStack_48,(ulong)auStack_48 | 4);
  fVar1 = (float)FUN_1001afa0c(param_1 + 0x1e0);
  fVar2 = *(float *)(param_1 + 0x130);
  FUN_1001afa0c(param_1 + 0x1e0);
  return -(fVar1 * -0.5) - fVar2;
}




void FUN_10026b948(long param_1)

{
  if (param_1 != 0) {
    FUN_10026b954();
    return;
  }
  return;
}




void FUN_10026b954(long param_1)

{
  long lVar1;
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0xe40) = 1;
  lVar1 = param_1 + 0x1e0;
  FUN_10001549c(local_38,"CHEST_LAND");
  FUN_1001afa30(lVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"CHEST_LAND");
  FUN_1001afa18(lVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  if (*(int *)(param_1 + 0xe00) == 0) {
    FUN_10001549c(local_38,"RUMBLE");
    FUN_1001aeb7c(0xbf800000,lVar1,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  else {
    FUN_10026b0a4(param_1);
  }
  return;
}




void FUN_10026ba20(long param_1)

{
  if (param_1 != 0) {
    FUN_10026ba2c();
    return;
  }
  return;
}




void FUN_10026ba2c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = FUN_10003d5bc(param_1 + 0x1e0);
  lVar2 = FUN_10003d5bc(param_1 + 0x1e0);
  fVar3 = (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) /
          (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) + -100.0;
  FUN_1000e6f00(CONCAT44(fVar3,(float)*(undefined8 *)(lVar1 + 8) /
                               (float)*(undefined8 *)(lVar2 + 0x10) + 100.0),fVar3,0x3e4ccccd,
                param_1 + 0xe00,param_1 + 0xe10,0);
  return;
}




long * FUN_10026ba98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_100533dfc();
  *puVar4 = &PTR_thunk_FUN_10026bd2c_10147d4b0;
  puVar4 = puVar4 + 0x1b;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x39;
  thunk_FUN_1001fc280(plVar1,0,1);
  plVar2 = param_1 + 0x42;
  FUN_1006421a8(plVar2);
  param_1[0x42] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x53;
  FUN_10064e264(plVar3);
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6d) = DAT_101dc0b88;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,puVar4,1);
  FUN_100642bd8(plVar2,param_1[0x3a],1);
  FUN_100642bd8(plVar2,plVar3,1);
  uVar5 = thunk_FUN_10064de70();
  FUN_10064a8f8(uVar5,5);
  FUN_10064e524(plVar3,uVar5);
  FUN_100652cac(puVar4,PTR_s_build___RewardScreenBackground_p_101854998,"full_splash_1k");
  if ((*(float *)(param_1 + 0x25) != 0.5) || (*(float *)((long)param_1 + 300) != 0.5)) {
    param_1[0x25] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_1001fc710(plVar1);
  *(uint *)(param_1[0x3a] + 0x84) = *(uint *)(param_1[0x3a] + 0x84) & 0xffffffef;
  FUN_1001fc794(plVar1,0);
  *(undefined1 *)(param_1[0x3a] + 0x4339) = 1;
  local_48 = DAT_101d918ac;
  local_70 = FUN_10026bcdc;
  plVar1 = param_1 + 1;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&local_70);
  local_48 = DAT_101d918a8;
  local_70 = thunk_FUN_10026c38c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&local_70);
  local_48 = DAT_101dbd460;
  local_70 = thunk_FUN_10026c480;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = thunk_FUN_10026c480;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&local_70);
  return param_1;
}




void FUN_10026bcdc(long *param_1)

{
  FUN_1001ad5c0();
  FUN_1001e7eb0(0);
  *(uint *)(param_1[0x3a] + 0x84) = *(uint *)(param_1[0x3a] + 0x84) | 4;
                    /* WARNING: Could not recover jumptable at 0x00010026bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void thunk_FUN_10026c38c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) & 0xfffffffb;
  FUN_10026c294();
  FUN_100642324(param_1);
  FUN_100642324(param_1 + 0xd8);
  plVar1 = *(long **)(param_1 + 0x360);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x360);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x360) = 0;
            *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3f000000,uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
    }
  }
  uVar3 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar3);
  uVar3 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644bb0(param_1,uVar3);
  return;
}




void thunk_FUN_10026c480(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x350) != 0) &&
     ((float)(*(uint *)(*(long *)(*(long *)(param_1 + 0x358) +
                                 (ulong)(*(int *)(param_1 + 0x350) - 1) * 8) + 0x84) >> 7 & 0xff) *
      0.003921569 < 1.0)) {
    FUN_1002c00f8(*(undefined8 *)(param_1 + 0x1d0));
    FUN_10026c548(0x3f800000,0x3f800000,param_1);
    FUN_10026c60c(param_1);
    return;
  }
  uVar1 = FUN_10002f320();
  FUN_1000304f8(uVar1,PTR_s_screen_main_hub_101854a90,1);
  FUN_100642324(*(undefined8 *)(param_1 + 0x1d0));
  uVar1 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar1);
  uVar1 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644bb0(param_1,uVar1);
  return;
}




long * thunk_FUN_10026ba98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_100533dfc();
  *puVar4 = &PTR_thunk_FUN_10026bd2c_10147d4b0;
  puVar4 = puVar4 + 0x1b;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x39;
  thunk_FUN_1001fc280(plVar1,0,1);
  plVar2 = param_1 + 0x42;
  FUN_1006421a8(plVar2);
  param_1[0x42] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x53;
  FUN_10064e264(plVar3);
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6d) = DAT_101dc0b88;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,puVar4,1);
  FUN_100642bd8(plVar2,param_1[0x3a],1);
  FUN_100642bd8(plVar2,plVar3,1);
  uVar5 = thunk_FUN_10064de70();
  FUN_10064a8f8(uVar5,5);
  FUN_10064e524(plVar3,uVar5);
  FUN_100652cac(puVar4,PTR_s_build___RewardScreenBackground_p_101854998,"full_splash_1k");
  if ((*(float *)(param_1 + 0x25) != 0.5) || (*(float *)((long)param_1 + 300) != 0.5)) {
    param_1[0x25] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_1001fc710(plVar1);
  *(uint *)(param_1[0x3a] + 0x84) = *(uint *)(param_1[0x3a] + 0x84) & 0xffffffef;
  FUN_1001fc794(plVar1,0);
  *(undefined1 *)(param_1[0x3a] + 0x4339) = 1;
  uStack_48 = DAT_101d918ac;
  pcStack_70 = FUN_10026bcdc;
  plVar1 = param_1 + 1;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&pcStack_70);
  uStack_48 = DAT_101d918a8;
  pcStack_70 = thunk_FUN_10026c38c;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&pcStack_70);
  uStack_48 = DAT_101dbd460;
  pcStack_70 = thunk_FUN_10026c480;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&pcStack_70);
  uStack_48 = DAT_101dbd48c;
  pcStack_70 = thunk_FUN_10026c480;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(plVar1,&pcStack_70);
  return param_1;
}




void FUN_10026bd2c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10026bd2c_10147d4b0;
  if ((void *)param_1[0x6b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6b]);
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
  }
  thunk_FUN_10064e2bc(param_1 + 0x53);
  FUN_10064221c(param_1 + 0x42);
  thunk_FUN_1001fc594(param_1 + 0x39);
  param_1[0x1b] = &PTR_FUN_1014a7108;
  param_1[0x32] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x35);
  FUN_10064e2bc(param_1 + 0x1b);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10026bd2c(void)

{
  FUN_10026bd2c();
  return;
}




void FUN_10026bdb4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026bd2c();
  operator_delete(pvVar1);
  return;
}




void FUN_10026bdc8(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10109c4ac(0x17);
  if (iVar1 != 0) {
    uVar2 = FUN_10002f320();
    FUN_1000304f8(uVar2,PTR_s_screen_main_hub_101854a90,1);
    return;
  }
  return;
}




void FUN_10026be00(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float fStack_3c;
  undefined1 *local_38;
  
  FUN_100641464(&local_40,(ulong)&local_40 | 4);
  fVar5 = fStack_3c;
  fVar6 = fStack_3c * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x250) == local_40 * 0.5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x254)) && !NAN(fVar6))) {
    bVar2 = *(float *)(param_1 + 0x254) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x250) = local_40 * 0.5;
    *(float *)(param_1 + 0x254) = fVar6;
    FUN_1000200a0(param_1 + 0x210);
  }
  FUN_10064e48c(param_1 + 0xd8,&local_38);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x118) == (float)DAT_101dc1cb8) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x11c)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar2 = *(float *)(param_1 + 0x11c) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar2) {
    *(ulong *)(param_1 + 0x118) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0xd8);
  }
  plVar4 = *(long **)(param_1 + 0x1d0);
  FUN_10064e47c(0x442f0000,fVar6,plVar4);
  fVar5 = fStack_3c * -0.5 + 100.0 + fVar5 * 0.25;
  bVar2 = false;
  if ((*(float *)(plVar4 + 8) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)((long)plVar4 + 0x44)) && !NAN(fVar5))) {
    bVar2 = *(float *)((long)plVar4 + 0x44) == fVar5;
  }
  if (!bVar2) {
    *(undefined4 *)(plVar4 + 8) = 0;
    *(float *)((long)plVar4 + 0x44) = fVar5;
    FUN_1000200a0(plVar4);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_38);
  fVar5 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
  fVar6 = *(float *)((long)plVar4 + 0x2254) + 140.0;
  lVar1 = param_1 + 0x298;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x2d8) == fVar5 * -0.5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x2dc)) && !NAN(fVar6))) {
    bVar2 = *(float *)(param_1 + 0x2dc) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x2d8) = fVar5 * -0.5;
    *(float *)(param_1 + 0x2dc) = fVar6;
    FUN_1000200a0(lVar1);
  }
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x350));
  FUN_10064e4a0(lVar1,(ulong)(uint)(int)(fVar5 * 60.0) << 0x20 | 0x578);
  FUN_10064e32c(lVar1);
  iVar3 = FUN_100533fe4(param_1);
  if (iVar3 != 0) {
    FUN_10026bfb8(param_1);
  }
  return;
}




void FUN_10026bfb8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x5b4) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x5b4) & 0xfffffffb;
  plVar3 = *(long **)(param_1 + 0x1d0);
  uVar1 = *(uint *)((long)plVar3 + 0x5b4);
  if ((uVar1 & 0x7f80) != 0x4c80) {
    *(uint *)((long)plVar3 + 0x5b4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3 + 0xa6);
    plVar3 = *(long **)(param_1 + 0x1d0);
  }
  (**(code **)(*plVar3 + 0x150))();
  FUN_10026c548(0,0x3f800000,param_1);
  lVar4 = FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sting_upgrade_talent.mp3",0,0);
  if (lVar4 != 0) {
    uVar2 = *(undefined4 *)(lVar4 + 0x30);
    *(long *)(param_1 + 0x360) = lVar4 + 0x28;
    *(undefined4 *)(param_1 + 0x368) = uVar2;
  }
  local_28 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  local_50 = thunk_FUN_10026c6d0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&local_50);
  return;
}




void FUN_10026c098(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_88;
  
  lVar4 = FUN_100341d58(param_2);
  if ((lVar4 != 0) && ((*(ushort *)(lVar4 + 0xb0) >> 8 & 1) != 0)) {
    lVar5 = FUN_100343694(lVar4);
    uVar11 = *(int *)(lVar5 + 0x18) - 1;
    if (uVar11 < 3) {
      FUN_100652dd4(param_1 + 0x1b,(&PTR_DAT_10147d5e8)[(int)uVar11],2);
    }
    FUN_1001fc3d8(param_1 + 0x39,param_2);
    FUN_10026c294(param_1);
    plVar6 = (long *)FUN_10064e5a0(param_1 + 0x53);
    lVar5 = FUN_100343694(lVar4);
    lVar10 = **(long **)(lVar5 + 0x28);
    if (lVar10 != 0) {
      uVar11 = 0;
      plVar3 = *(long **)(lVar5 + 0x28);
      do {
        if ((*(char *)(lVar10 + 0x34) == '\0') && (*(float *)(lVar10 + 0xc) != 0.0)) {
          pvVar7 = operator_new(0x538);
          local_88 = thunk_FUN_100303d74();
          lVar5 = *plVar3;
          fVar12 = *(float *)(lVar5 + 0xc);
          iVar9 = (int)(char)*(undefined2 *)(lVar4 + 0xb0);
          fVar14 = 0.0;
          if ((0 < iVar9) &&
             (fVar14 = 0.0,
             (short)((ulong)*(undefined8 *)(lVar4 + 0xa8) >> 0x10) <=
             (short)*(undefined8 *)(lVar4 + 0xa8))) {
            fVar14 = fVar12;
          }
          uVar1 = *(undefined4 *)(lVar5 + 0x2c);
          uVar2 = *(undefined4 *)(lVar5 + 0x30);
          fVar13 = *(float *)(lVar5 + 8);
          uVar8 = FUN_1000eff68();
          FUN_100303f38(fVar13 + fVar12 * (float)(iVar9 + -1),fVar14,pvVar7,uVar2,uVar1,uVar8);
          FUN_10064e47c(0x44af0000,0x42700000,local_88);
          *(uint *)(local_88 + 0x84) =
               *(uint *)(local_88 + 0x84) & 0x80000000 |
               *(uint *)(local_88 + 0x84) & 0x7fff | (uVar11 & 0xffff) << 0xf;
          FUN_10026c30c(param_1 + 0x6a,&local_88);
          FUN_100642bd8(param_1 + 0x53,local_88,1);
          (**(code **)(*plVar6 + 0x68))(plVar6,local_88,0,9);
          uVar11 = uVar11 + 1;
        }
        lVar10 = plVar3[1];
        plVar3 = plVar3 + 1;
      } while (lVar10 != 0);
    }
    (**(code **)(*param_1 + 0xe8))(param_1);
  }
  return;
}




void FUN_10026c294(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x350) != 0) {
    uVar3 = 0;
    do {
      FUN_100642324(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar3 * 8));
      lVar2 = *(long *)(param_1 + 0x358);
      plVar1 = *(long **)(lVar2 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar2 = *(long *)(param_1 + 0x358);
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x350));
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  FUN_100642378(param_1 + 0x298,1);
  return;
}




void FUN_10026c30c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10026ca54(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10026c38c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x84) & 0xfffffffb;
  FUN_10026c294();
  FUN_100642324(param_1);
  FUN_100642324(param_1 + 0xd8);
  plVar1 = *(long **)(param_1 + 0x360);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x360);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x368) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x360) = 0;
            *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3f000000,uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x368) = DAT_101dc0b88;
    }
  }
  uVar3 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar3);
  uVar3 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644bb0(param_1,uVar3);
  return;
}




void FUN_10026c480(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x350) != 0) &&
     ((float)(*(uint *)(*(long *)(*(long *)(param_1 + 0x358) +
                                 (ulong)(*(int *)(param_1 + 0x350) - 1) * 8) + 0x84) >> 7 & 0xff) *
      0.003921569 < 1.0)) {
    FUN_1002c00f8(*(undefined8 *)(param_1 + 0x1d0));
    FUN_10026c548(0x3f800000,0x3f800000,param_1);
    FUN_10026c60c(param_1);
    return;
  }
  uVar1 = FUN_10002f320();
  FUN_1000304f8(uVar1,PTR_s_screen_main_hub_101854a90,1);
  FUN_100642324(*(undefined8 *)(param_1 + 0x1d0));
  uVar1 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar1);
  uVar1 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644bb0(param_1,uVar1);
  return;
}




void FUN_10026c548(float param_1,float param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_3 + 0x350) != 0) {
    uVar4 = 0;
    do {
      FUN_100642324(*(undefined8 *)(*(long *)(param_3 + 0x358) + uVar4 * 8));
      lVar2 = *(long *)(*(long *)(param_3 + 0x358) + uVar4 * 8);
      if ((int)(param_1 * 255.0) != (*(uint *)(lVar2 + 0x84) >> 7 & 0xff)) {
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffff807f | (int)(param_1 * 255.0) << 7
        ;
        FUN_1000200a0();
        lVar2 = *(long *)(*(long *)(param_3 + 0x358) + uVar4 * 8);
      }
      bVar1 = false;
      if ((*(float *)(lVar2 + 0x48) == param_2) &&
         (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)) && !NAN(param_2))) {
        bVar1 = *(float *)(lVar2 + 0x4c) == param_2;
      }
      if (!bVar1) {
        *(float *)(lVar2 + 0x48) = param_2;
        *(float *)(lVar2 + 0x4c) = param_2;
        FUN_1000200a0();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x350));
  }
  plVar3 = (long *)FUN_10064e5a0(param_3 + 0x298);
                    /* WARNING: Could not recover jumptable at 0x00010026c608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))();
  return;
}




void FUN_10026c60c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10064081c(0x40a00000);
  FUN_100642b14(param_1,uVar1);
  lVar2 = FUN_10008e900();
  *(code **)(lVar2 + 0x10) = FUN_10026ca30;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  FUN_100642b14(param_1,lVar2);
  return;
}




void thunk_FUN_10026c6d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar1 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar1);
  FUN_10026c65c(param_1);
  lVar2 = *(long *)(param_1 + 0x1d0);
  uStack_28 = FUN_100644a94("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  pcStack_50 = thunk_FUN_10026c784;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&pcStack_50);
  lVar2 = *(long *)(param_1 + 0x1d0);
  uStack_28 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  pcStack_50 = thunk_FUN_10026c7cc;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&pcStack_50);
  return;
}




void FUN_10026c65c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x210;
  FUN_100642324(param_1);
  uVar1 = FUN_100640db8(0x3f666666,0x3f666666,0x3d800000,0);
  FUN_100642b14(param_1,uVar1);
  uVar1 = FUN_100640db8(0x3f800000,0x3f800000,0x3d800000,0);
  FUN_100642b14(param_1,uVar1);
  return;
}




void FUN_10026c6d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uVar1 = FUN_100644a94("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  FUN_100644bb0(param_1,uVar1);
  FUN_10026c65c(param_1);
  lVar2 = *(long *)(param_1 + 0x1d0);
  local_28 = FUN_100644a94("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  local_50 = thunk_FUN_10026c784;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&local_50);
  lVar2 = *(long *)(param_1 + 0x1d0);
  local_28 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  local_50 = thunk_FUN_10026c7cc;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(lVar2 + 8,&local_50);
  return;
}




void thunk_FUN_10026c784(void)

{
  FUN_10026c784();
  return;
}




void thunk_FUN_10026c7cc(void)

{
  FUN_10026c7cc();
  return;
}




void FUN_10026c784(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  uVar1 = FUN_100644a94("UI::EVENT_SCREEN_PROGRESS_BAR_ANIMATION_BEGIN");
  FUN_100644bb0(uVar2,uVar1);
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_upgrade_level_bar.mp3",0,0);
  return;
}




void FUN_10026c7cc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 0x1d0);
  uVar2 = FUN_100644a94("EVENT_SCREEN_PROGRESS_BAR_EMPTIED");
  FUN_100644bb0(uVar5,uVar2);
  FUN_1002c08f8(*(undefined8 *)(param_1 + 0x1d0));
  if (*(int *)(param_1 + 0x350) != 0) {
    uVar7 = 0;
    uVar2 = NEON_fmov(0x40400000,4);
    do {
      FUN_100642324(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar7 * 8));
      lVar3 = *(long *)(*(long *)(param_1 + 0x358) + uVar7 * 8);
      if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0) {
        *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f;
        FUN_1000200a0();
        lVar3 = *(long *)(*(long *)(param_1 + 0x358) + uVar7 * 8);
      }
      bVar1 = false;
      if ((*(float *)(lVar3 + 0x48) == 3.0) && (bVar1 = false, !NAN(*(float *)(lVar3 + 0x4c)))) {
        bVar1 = *(float *)(lVar3 + 0x4c) == 3.0;
      }
      if (!bVar1) {
        *(undefined8 *)(lVar3 + 0x48) = uVar2;
        FUN_1000200a0();
      }
      uVar5 = FUN_10064081c((float)(uVar7 & 0xffffffff) * 0.6);
      FUN_100642b14(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar7 * 8),uVar5);
      uVar5 = FUN_100640db8(0x3f800000,0x3f800000,0x3e000000,FUN_10006bf9c);
      FUN_100640840(0x3f800000,0x3e000000,FUN_10001f4ac);
      lVar3 = FUN_10008e900();
      *(code **)(lVar3 + 0x10) = FUN_10026c9bc;
      *(long *)(lVar3 + 0x20) = param_1;
      lVar3 = DAT_101dbd2f8;
      uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar4 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
        if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar4 = 0xffff;
        }
        else {
          uVar4 = *puVar6;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_10063f1bc(puVar6);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_10063f2a4(puVar6,uVar5);
      FUN_100642b14(*(undefined8 *)(*(long *)(param_1 + 0x358) + uVar7 * 8),puVar6);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x350));
  }
  return;
}




void FUN_10026c9bc(long param_1,long param_2)

{
  if (param_1 != 0) {
    FUN_10026c65c();
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_stats_slam_in2.mp3",0,0);
    if (((*(uint *)(param_2 + 0x84) ^
         *(uint *)(*(long *)(*(long *)(param_1 + 0x358) + (ulong)(*(int *)(param_1 + 0x350) - 1) * 8
                            ) + 0x84)) & 0x7fff8000) == 0) {
      FUN_10026c60c(param_1);
      return;
    }
  }
  return;
}




void FUN_10026ca30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10002f320();
  FUN_1000304f8(uVar1,PTR_s_screen_main_hub_101854a90,1);
  return;
}




void FUN_10026ca54(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10026cad0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10064221c_10147d610;
  puVar1[0x11] = 0;
  *(byte *)(puVar1 + 0x12) = *(byte *)(puVar1 + 0x12) & 0xfc;
  return;
}




void FUN_10026cb00(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  *(uint *)(param_2 + 0x84) =
       *(uint *)(param_2 + 0x84) & 0x80000000 |
       *(uint *)(param_2 + 0x84) & 0x7fff | (param_3 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  uVar1 = *(uint *)(param_2 + 0x84);
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f;
    FUN_1000200a0(param_2);
    uVar1 = *(uint *)(param_2 + 0x84);
  }
  *(uint *)(param_2 + 0x84) = uVar1 & 0xfffffff3;
  return;
}




void FUN_10026cb64(undefined8 param_1,long *param_2,int param_3,int param_4,undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_70 [32];
  
  plVar3 = (long *)param_2[5];
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3;
    plVar5 = (long *)0x0;
    do {
      plVar1 = plVar4;
      if (param_3 != (*(int *)((long)plVar4 + 0x84) << 1) >> 0x10) {
        plVar1 = plVar5;
      }
      plVar4 = (long *)plVar4[6];
      plVar5 = plVar1;
    } while (plVar4 != (long *)0x0);
    if (plVar1 != (long *)0x0) {
      do {
        plVar4 = plVar3;
        if (plVar4 == (long *)0x0) break;
        plVar3 = (long *)plVar4[6];
      } while ((long *)plVar4[6] != (long *)0x0);
      plVar3 = (long *)0x0;
      if ((*(byte *)((long)plVar4 + 0x84) & 8) != 0) {
        plVar3 = plVar4;
      }
      if (plVar1 != plVar3) {
        FUN_1006423ec(plVar1,1);
        uVar2 = (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
        param_2[0x11] = (long)plVar1;
        if (param_4 == 1) {
          FUN_10026cd94(param_1,param_2,plVar1,plVar3,param_5);
        }
        else if (param_4 == 0) {
          FUN_10026ccc4(uVar2,plVar1,plVar3,0);
        }
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x140))(plVar3,0);
        }
        (**(code **)(*plVar1 + 0x140))(plVar1,1);
        uVar2 = FUN_100644a94("EVENT_TAB_SELECTED");
        FUN_100644aec(auStack_70,uVar2,0);
        FUN_100644c34(plVar1,auStack_70,0);
        *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 1;
      }
    }
  }
  return;
}




void FUN_10026ccc4(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  
  FUN_100642324(param_2);
  uVar1 = *(uint *)((long)param_2 + 0x84);
  if ((~uVar1 & 0x7f80) == 0) {
    uVar1 = uVar1 | 8;
  }
  else {
    *(uint *)((long)param_2 + 0x84) = uVar1 | 0x7f88;
    FUN_1000200a0(param_2);
    uVar1 = *(uint *)((long)param_2 + 0x84);
  }
  *(uint *)((long)param_2 + 0x84) = uVar1 | 4;
  (**(code **)(*param_2 + 0x148))(param_2,1);
  if (param_3 != (long *)0x0) {
    FUN_100642324(param_3);
    uVar1 = *(uint *)((long)param_3 + 0x84);
    if ((uVar1 & 0x7f80) == 0) {
      uVar1 = uVar1 & 0xfffffff7;
    }
    else {
      *(uint *)((long)param_3 + 0x84) = uVar1 & 0xffff8077;
      FUN_1000200a0(param_3);
      uVar1 = *(uint *)((long)param_3 + 0x84);
    }
    *(uint *)((long)param_3 + 0x84) = uVar1 & 0xfffffffb;
                    /* WARNING: Could not recover jumptable at 0x00010026cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x148))(param_3,0);
    return;
  }
  return;
}




void FUN_10026cd94(undefined8 param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  FUN_100642324(param_3);
  uVar1 = *(uint *)(param_3 + 0x84);
  *(uint *)(param_3 + 0x84) = uVar1 | 8;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x84) = uVar1 & 0xffff807f | 8;
    FUN_1000200a0(param_3);
  }
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 != 0xffff) {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar6);
      *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_10026cef4;
    }
  }
  puVar6 = (ushort *)0x0;
LAB_10026cef4:
  FUN_10063f0e8(param_1,puVar6);
  FUN_100642b7c(param_3,puVar5);
  lVar2 = FUN_10008e900();
  *(code **)(lVar2 + 0x10) = FUN_10026d1b4;
  *(long *)(lVar2 + 0x20) = param_2;
  FUN_100642b14(param_3,lVar2);
  lVar2 = DAT_101dbd2f8;
  if (param_4 != 0) {
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar5);
      *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_10144b270;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f0e8(param_1,puVar5);
    lVar2 = DAT_101dbd2f8;
    uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar4 != 0xffff) {
      if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      puVar3 = (undefined8 *)FUN_10063ee9c();
      *puVar3 = &PTR_thunk_FUN_10063eeb4_1014a5338;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_100642b7c(param_4,puVar5);
    lVar2 = FUN_10008e900();
    *(code **)(lVar2 + 0x10) = FUN_10026d1c8;
    *(long *)(lVar2 + 0x20) = param_2;
    FUN_100642b14(param_4,lVar2);
    lVar2 = DAT_101dbd2f8;
    if ((param_5 != 0) && ((*(byte *)(param_2 + 0x90) >> 1 & 1) == 0)) {
      uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063ee9c(puVar5);
      *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52a8;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      FUN_100642b14(param_4,puVar5);
      return;
    }
  }
  return;
}




void FUN_10026d11c(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (param_2 == (*(int *)((long)plVar1 + 0x84) << 1) >> 0x10) break;
    plVar1 = (long *)plVar1[6];
  }
                    /* WARNING: Could not recover jumptable at 0x00010026d14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x168))(plVar1,param_3);
  return;
}




void FUN_10026d150(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (param_2 == (*(int *)((long)plVar1 + 0x84) << 1) >> 0x10) break;
    plVar1 = (long *)plVar1[6];
  }
                    /* WARNING: Could not recover jumptable at 0x00010026d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x158))(plVar1,param_3);
  return;
}




void FUN_10026d184(long param_1,long param_2)

{
  ulong uVar1;
  
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010026d1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x88) + 0x160))();
      return;
    }
  }
  return;
}




void FUN_10026d1b4(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010026d1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))(param_2,1);
  return;
}




void FUN_10026d1c8(undefined8 param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010026d1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))(param_2,0);
  return;
}




void FUN_10026d1e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064221c();
  operator_delete(pvVar1);
  return;
}




long * FUN_10026d1f4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100269da8();
  *puVar4 = &PTR_thunk_FUN_10026d344_10147d718;
  FUN_10064e264(puVar4 + 0x19);
  plVar1 = param_1 + 0x30;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4e;
  thunk_FUN_100652c08(plVar2);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x204);
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x204) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_10026d344(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10026d344_10147d718;
  param_1[0x4e] = &PTR_FUN_1014a7108;
  param_1[0x65] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x68);
  FUN_10064e2bc(param_1 + 0x4e);
  param_1[0x30] = &PTR_FUN_1014a7108;
  param_1[0x47] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4a);
  FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10026d344(void)

{
  FUN_10026d344();
  return;
}




void FUN_10026d3cc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026d344();
  operator_delete(pvVar1);
  return;
}




void FUN_10026d3e0(long *param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010026d3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))();
    return;
  }
  return;
}




void FUN_10026d3f4(void)

{
  return;
}




void FUN_10026d3f8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010026d400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_10026d404(long param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  
  uVar4 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar4,&local_2c,&local_30,&local_34);
  lVar1 = param_1 + 0x270;
  FUN_10064e47c(0x41f00000,local_30,lVar1);
  if ((*(float *)(param_1 + 0x2b0) != local_34) || (*(float *)(param_1 + 0x2b4) != 0.0)) {
    *(float *)(param_1 + 0x2b0) = local_34;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    FUN_1000200a0(lVar1);
  }
  local_28 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x270) + 0x28))(lVar1,&local_28);
  plVar2 = (long *)(param_1 + 0x180);
  FUN_10064e47c(local_2c - local_34,0x43480000,plVar2);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1c0) == local_34) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x1c4)) && !NAN(local_30))) {
    bVar3 = *(float *)(param_1 + 0x1c4) == local_30;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x1c0) = local_34;
    *(float *)(param_1 + 0x1c4) = local_30;
    FUN_1000200a0(plVar2);
  }
  local_28 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_28);
  return;
}




undefined8 * FUN_10026d50c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10026d1f4();
  FUN_1004f0a20(lVar1 + 0x368);
  FUN_10014f4a0(param_1 + 0x70);
  param_1[0x73] = &PTR_FUN_10147e208;
  FUN_10032b50c(param_1 + 0x74);
  param_1[0x78] = 0;
  *param_1 = &PTR_thunk_FUN_10026f59c_10147d898;
  param_1[0x6d] = &PTR_FUN_10147dab0;
  param_1[0x70] = &PTR_FUN_10147dae0;
  param_1[0x73] = &PTR_FUN_10147de78;
  param_1[0x74] = &PTR_FUN_10147ded8;
  param_1[0x77] = &PTR_FUN_10147df00;
  FUN_10064e264(param_1 + 0x79);
  thunk_FUN_100652c08(param_1 + 0x90);
  thunk_FUN_100652c08(param_1 + 0xae);
  thunk_FUN_100650e64(param_1 + 0xcc);
  thunk_FUN_100650e64(param_1 + 0xf2);
  thunk_FUN_100181304(param_1 + 0x118,0);
  thunk_FUN_100181304(param_1 + 0x3cf,0);
  thunk_FUN_1006543ec(param_1 + 0x686);
  thunk_FUN_100650e64(param_1 + 0x6ba);
  thunk_FUN_1006543ec(param_1 + 0x6e0);
  FUN_10053077c(param_1 + 0x714,0);
  FUN_10064e264(param_1 + 0x7bb);
  thunk_FUN_100652c08(param_1 + 0x7d2);
  thunk_FUN_100652c08(param_1 + 0x7f0);
  thunk_FUN_100652c08(param_1 + 0x80e);
  thunk_FUN_100650e64(param_1 + 0x82c);
  thunk_FUN_100650e64(param_1 + 0x852);
  FUN_1006421a8(param_1 + 0x878);
  param_1[0x878] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x889);
  thunk_FUN_100650e64(param_1 + 0x8d6);
  thunk_FUN_100652c08(param_1 + 0x8fc);
  FUN_1002774c8(param_1 + 0x91a);
  FUN_1006421a8(param_1 + 0x9d8);
  param_1[0x9d8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x9e9);
  thunk_FUN_100650e64(param_1 + 0xa36);
  thunk_FUN_100652c08(param_1 + 0xa5c);
  FUN_1002774c8(param_1 + 0xa7a);
  FUN_1006421a8(param_1 + 0xb38);
  param_1[0xb38] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xb49);
  thunk_FUN_100650e64(param_1 + 0xb96);
  thunk_FUN_100652c08(param_1 + 0xbbc);
  FUN_1002774c8(param_1 + 0xbda);
  FUN_1006421a8(param_1 + 0xc98);
  param_1[0xc98] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xca9);
  thunk_FUN_100650e64(param_1 + 0xcf6);
  thunk_FUN_100652c08(param_1 + 0xd1c);
  FUN_1002774c8(param_1 + 0xd3a);
  FUN_1006421a8(param_1 + 0xdf8);
  param_1[0xdf8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xe09);
  thunk_FUN_100650e64(param_1 + 0xe56);
  thunk_FUN_100652c08(param_1 + 0xe7c);
  FUN_1002774c8(param_1 + 0xe9a);
  FUN_1006421a8(param_1 + 0xf58);
  param_1[0xf58] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xf69);
  thunk_FUN_100650e64(param_1 + 0xfb6);
  thunk_FUN_100652c08(param_1 + 0xfdc);
  FUN_1002774c8(param_1 + 0xffa);
  FUN_1006421a8(param_1 + 0x10b8);
  param_1[0x10b8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x10c9);
  thunk_FUN_100650e64(param_1 + 0x1116);
  thunk_FUN_100652c08(param_1 + 0x113c);
  FUN_1002774c8(param_1 + 0x115a);
  thunk_FUN_1001c0c34(param_1 + 0x1218,0);
  thunk_FUN_100652c08(param_1 + 0x12c7);
  thunk_FUN_100650e64(param_1 + 0x12e5);
  FUN_1006421a8(param_1 + 0x130b);
  param_1[0x130b] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x131c);
  FUN_1006421a8(param_1 + 0x133a);
  param_1[0x133a] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x134b);
  thunk_FUN_100650e64(param_1 + 0x1369);
  thunk_FUN_100183990(param_1 + 0x138f,0);
  thunk_FUN_100183990(param_1 + 0x144d,0);
  thunk_FUN_100183990(param_1 + 0x150b,0);
  thunk_FUN_100183990(param_1 + 0x15c9,0);
  thunk_FUN_100650e64(param_1 + 0x1687);
  thunk_FUN_10018ceb0(param_1 + 0x16ad);
  thunk_FUN_1001862ec(param_1 + 0x1bd3,param_1 + 0x73);
  param_1[0x23fe] = 0;
  param_1[0x23fb] = 0;
  param_1[0x23fa] = 0;
  param_1[0x23fd] = 0;
  param_1[0x23fc] = 0;
  param_1[0x23f7] = 0;
  param_1[0x23f6] = 0;
  param_1[0x23f9] = 0;
  param_1[0x23f8] = 0;
  param_1[0x23f3] = 0;
  param_1[0x23f2] = 0;
  param_1[0x23f5] = 0;
  param_1[0x23f4] = 0;
  param_1[0x23f1] = 0;
  param_1[0x23f0] = 0;
  FUN_1006421a8(param_1 + 0x23ff);
  param_1[0x23ff] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x2410);
  thunk_FUN_100650e64(param_1 + 0x242e);
  thunk_FUN_1001ceb64(param_1 + 0x2454,0);
  thunk_FUN_1001ceb64(param_1 + 0x2471,0);
  param_1[0x249c] = 0;
  param_1[0x249b] = 0;
  param_1[0x248f] = 0;
  param_1[0x248e] = 0;
  param_1[0x2491] = 0;
  param_1[0x2490] = 0;
  param_1[0x2493] = 0;
  param_1[0x2492] = 0;
  param_1[0x2495] = 0;
  param_1[0x2494] = 0;
  param_1[0x2497] = 0;
  param_1[0x2496] = 0;
  param_1[0x2499] = 0;
  param_1[0x2498] = 0;
  *(undefined4 *)(param_1 + 0x249a) = 0;
  *(undefined4 *)(param_1 + 0x249d) = 0xffffffff;
  FUN_1001e7abc(param_1 + 0x249e);
  FUN_1004e313c(param_1 + 0x249f);
  FUN_10003330c(param_1 + 0x24a1,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a4,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a7,&DAT_101d91198);
  thunk_FUN_1004e439c(param_1 + 0x24aa,&DAT_101d91650);
  FUN_10003330c(param_1 + 0x24ac,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24af,&DAT_101d91198);
  param_1[0x24b2] = 0x43840000443e0000;
  param_1[0x24b4] = 0;
  param_1[0x24b3] = 0xa0000001e;
  *(undefined2 *)((long)param_1 + 0x125a9) = 0;
  *(undefined8 *)((long)param_1 + 0x125ab) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0x125b3) = 1;
  FUN_10026dad4(param_1);
  FUN_1001116f8(param_1 + 0x77);
  return param_1;
}




undefined8 * thunk_FUN_10026d50c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10026d1f4();
  FUN_1004f0a20(lVar1 + 0x368);
  FUN_10014f4a0(param_1 + 0x70);
  param_1[0x73] = &PTR_FUN_10147e208;
  FUN_10032b50c(param_1 + 0x74);
  param_1[0x78] = 0;
  *param_1 = &PTR_thunk_FUN_10026f59c_10147d898;
  param_1[0x6d] = &PTR_FUN_10147dab0;
  param_1[0x70] = &PTR_FUN_10147dae0;
  param_1[0x73] = &PTR_FUN_10147de78;
  param_1[0x74] = &PTR_FUN_10147ded8;
  param_1[0x77] = &PTR_FUN_10147df00;
  FUN_10064e264(param_1 + 0x79);
  thunk_FUN_100652c08(param_1 + 0x90);
  thunk_FUN_100652c08(param_1 + 0xae);
  thunk_FUN_100650e64(param_1 + 0xcc);
  thunk_FUN_100650e64(param_1 + 0xf2);
  thunk_FUN_100181304(param_1 + 0x118,0);
  thunk_FUN_100181304(param_1 + 0x3cf,0);
  thunk_FUN_1006543ec(param_1 + 0x686);
  thunk_FUN_100650e64(param_1 + 0x6ba);
  thunk_FUN_1006543ec(param_1 + 0x6e0);
  FUN_10053077c(param_1 + 0x714,0);
  FUN_10064e264(param_1 + 0x7bb);
  thunk_FUN_100652c08(param_1 + 0x7d2);
  thunk_FUN_100652c08(param_1 + 0x7f0);
  thunk_FUN_100652c08(param_1 + 0x80e);
  thunk_FUN_100650e64(param_1 + 0x82c);
  thunk_FUN_100650e64(param_1 + 0x852);
  FUN_1006421a8(param_1 + 0x878);
  param_1[0x878] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x889);
  thunk_FUN_100650e64(param_1 + 0x8d6);
  thunk_FUN_100652c08(param_1 + 0x8fc);
  FUN_1002774c8(param_1 + 0x91a);
  FUN_1006421a8(param_1 + 0x9d8);
  param_1[0x9d8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x9e9);
  thunk_FUN_100650e64(param_1 + 0xa36);
  thunk_FUN_100652c08(param_1 + 0xa5c);
  FUN_1002774c8(param_1 + 0xa7a);
  FUN_1006421a8(param_1 + 0xb38);
  param_1[0xb38] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xb49);
  thunk_FUN_100650e64(param_1 + 0xb96);
  thunk_FUN_100652c08(param_1 + 0xbbc);
  FUN_1002774c8(param_1 + 0xbda);
  FUN_1006421a8(param_1 + 0xc98);
  param_1[0xc98] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xca9);
  thunk_FUN_100650e64(param_1 + 0xcf6);
  thunk_FUN_100652c08(param_1 + 0xd1c);
  FUN_1002774c8(param_1 + 0xd3a);
  FUN_1006421a8(param_1 + 0xdf8);
  param_1[0xdf8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xe09);
  thunk_FUN_100650e64(param_1 + 0xe56);
  thunk_FUN_100652c08(param_1 + 0xe7c);
  FUN_1002774c8(param_1 + 0xe9a);
  FUN_1006421a8(param_1 + 0xf58);
  param_1[0xf58] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xf69);
  thunk_FUN_100650e64(param_1 + 0xfb6);
  thunk_FUN_100652c08(param_1 + 0xfdc);
  FUN_1002774c8(param_1 + 0xffa);
  FUN_1006421a8(param_1 + 0x10b8);
  param_1[0x10b8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x10c9);
  thunk_FUN_100650e64(param_1 + 0x1116);
  thunk_FUN_100652c08(param_1 + 0x113c);
  FUN_1002774c8(param_1 + 0x115a);
  thunk_FUN_1001c0c34(param_1 + 0x1218,0);
  thunk_FUN_100652c08(param_1 + 0x12c7);
  thunk_FUN_100650e64(param_1 + 0x12e5);
  FUN_1006421a8(param_1 + 0x130b);
  param_1[0x130b] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x131c);
  FUN_1006421a8(param_1 + 0x133a);
  param_1[0x133a] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x134b);
  thunk_FUN_100650e64(param_1 + 0x1369);
  thunk_FUN_100183990(param_1 + 0x138f,0);
  thunk_FUN_100183990(param_1 + 0x144d,0);
  thunk_FUN_100183990(param_1 + 0x150b,0);
  thunk_FUN_100183990(param_1 + 0x15c9,0);
  thunk_FUN_100650e64(param_1 + 0x1687);
  thunk_FUN_10018ceb0(param_1 + 0x16ad);
  thunk_FUN_1001862ec(param_1 + 0x1bd3,param_1 + 0x73);
  param_1[0x23fe] = 0;
  param_1[0x23fb] = 0;
  param_1[0x23fa] = 0;
  param_1[0x23fd] = 0;
  param_1[0x23fc] = 0;
  param_1[0x23f7] = 0;
  param_1[0x23f6] = 0;
  param_1[0x23f9] = 0;
  param_1[0x23f8] = 0;
  param_1[0x23f3] = 0;
  param_1[0x23f2] = 0;
  param_1[0x23f5] = 0;
  param_1[0x23f4] = 0;
  param_1[0x23f1] = 0;
  param_1[0x23f0] = 0;
  FUN_1006421a8(param_1 + 0x23ff);
  param_1[0x23ff] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x2410);
  thunk_FUN_100650e64(param_1 + 0x242e);
  thunk_FUN_1001ceb64(param_1 + 0x2454,0);
  thunk_FUN_1001ceb64(param_1 + 0x2471,0);
  param_1[0x249c] = 0;
  param_1[0x249b] = 0;
  param_1[0x248f] = 0;
  param_1[0x248e] = 0;
  param_1[0x2491] = 0;
  param_1[0x2490] = 0;
  param_1[0x2493] = 0;
  param_1[0x2492] = 0;
  param_1[0x2495] = 0;
  param_1[0x2494] = 0;
  param_1[0x2497] = 0;
  param_1[0x2496] = 0;
  param_1[0x2499] = 0;
  param_1[0x2498] = 0;
  *(undefined4 *)(param_1 + 0x249a) = 0;
  *(undefined4 *)(param_1 + 0x249d) = 0xffffffff;
  FUN_1001e7abc(param_1 + 0x249e);
  FUN_1004e313c(param_1 + 0x249f);
  FUN_10003330c(param_1 + 0x24a1,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a4,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24a7,&DAT_101d91198);
  thunk_FUN_1004e439c(param_1 + 0x24aa,&DAT_101d91650);
  FUN_10003330c(param_1 + 0x24ac,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x24af,&DAT_101d91198);
  param_1[0x24b2] = 0x43840000443e0000;
  param_1[0x24b4] = 0;
  param_1[0x24b3] = 0xa0000001e;
  *(undefined2 *)((long)param_1 + 0x125a9) = 0;
  *(undefined8 *)((long)param_1 + 0x125ab) = 0x1010101;
  *(undefined2 *)((long)param_1 + 0x125b3) = 1;
  FUN_10026dad4(param_1);
  FUN_1001116f8(param_1 + 0x77);
  return param_1;
}




void FUN_10026f59c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10026f59c_10147d898;
  param_1[0x6d] = &PTR_FUN_10147dab0;
  param_1[0x70] = &PTR_FUN_10147dae0;
  param_1[0x73] = &PTR_FUN_10147de78;
  param_1[0x74] = &PTR_FUN_10147ded8;
  param_1[0x77] = &PTR_FUN_10147df00;
  FUN_100111728(param_1 + 0x77);
  FUN_100270380(param_1);
  FUN_100270410(param_1);
  FUN_1002704a0(param_1);
  *(undefined1 *)((long)param_1 + 0x125b4) = 0;
  if (*(char *)((long)param_1 + 0x1258f) < '\0') {
    operator_delete((void *)param_1[0x24af]);
  }
  if (*(char *)((long)param_1 + 0x12577) < '\0') {
    operator_delete((void *)param_1[0x24ac]);
  }
  if ((void *)param_1[0x24ab] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24ab]);
    param_1[0x24ab] = 0;
    param_1[0x24aa] = 0;
  }
  if (*(char *)((long)param_1 + 0x1254f) < '\0') {
    operator_delete((void *)param_1[0x24a7]);
  }
  if (*(char *)((long)param_1 + 0x12537) < '\0') {
    operator_delete((void *)param_1[0x24a4]);
  }
  if (*(char *)((long)param_1 + 0x1251f) < '\0') {
    operator_delete((void *)param_1[0x24a1]);
  }
  if ((void *)param_1[0x24a0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24a0]);
    param_1[0x24a0] = 0;
    param_1[0x249f] = 0;
  }
  FUN_1001e7b3c(param_1 + 0x249e);
  FUN_10027db20(param_1 + 0x2498);
  FUN_10027c3ac(param_1 + 0x2496,1);
  FUN_10027da74(param_1 + 0x2494,1);
  FUN_1001107e4(param_1 + 0x2492,1);
  FUN_100110778(param_1 + 0x2490,1);
  FUN_100110778(param_1 + 0x248e,1);
  thunk_FUN_1001cec4c(param_1 + 0x2471);
  thunk_FUN_1001cec4c(param_1 + 0x2454);
  thunk_FUN_100651068(param_1 + 0x242e);
  param_1[0x2410] = &PTR_FUN_1014a7108;
  param_1[0x2427] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x242a);
  FUN_10064e2bc(param_1 + 0x2410);
  FUN_10064221c(param_1 + 0x23ff);
  if ((void *)param_1[0x23fd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23fd]);
    param_1[0x23fd] = 0;
    param_1[0x23fc] = 0;
  }
  if ((void *)param_1[0x23fb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23fb]);
    param_1[0x23fb] = 0;
    param_1[0x23fa] = 0;
  }
  if ((void *)param_1[0x23f9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f9]);
    param_1[0x23f9] = 0;
    param_1[0x23f8] = 0;
  }
  if ((void *)param_1[0x23f7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f7]);
    param_1[0x23f7] = 0;
    param_1[0x23f6] = 0;
  }
  if ((void *)param_1[0x23f5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f5]);
    param_1[0x23f5] = 0;
    param_1[0x23f4] = 0;
  }
  if ((void *)param_1[0x23f3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f3]);
    param_1[0x23f3] = 0;
    param_1[0x23f2] = 0;
  }
  if ((void *)param_1[0x23f1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f1]);
    param_1[0x23f1] = 0;
    param_1[0x23f0] = 0;
  }
  thunk_FUN_100186554(param_1 + 0x1bd3);
  thunk_FUN_10018d500(param_1 + 0x16ad);
  thunk_FUN_100651068(param_1 + 0x1687);
  param_1[0x15c9] = &PTR_FUN_10145f300;
  param_1[0x1663] = &PTR_FUN_1014a7108;
  param_1[0x167a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x167d);
  FUN_10064e2bc(param_1 + 0x1663);
  param_1[0x1645] = &PTR_FUN_1014a7108;
  param_1[0x165c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x165f);
  FUN_10064e2bc(param_1 + 0x1645);
  param_1[0x1627] = &PTR_FUN_1014a7108;
  param_1[0x163e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1641);
  FUN_10064e2bc(param_1 + 0x1627);
  FUN_10064221c(param_1 + 0x1616);
  FUN_10003bec8(param_1 + 0x15c9);
  param_1[0x150b] = &PTR_FUN_10145f300;
  param_1[0x15a5] = &PTR_FUN_1014a7108;
  param_1[0x15bc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15bf);
  FUN_10064e2bc(param_1 + 0x15a5);
  param_1[0x1587] = &PTR_FUN_1014a7108;
  param_1[0x159e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15a1);
  FUN_10064e2bc(param_1 + 0x1587);
  param_1[0x1569] = &PTR_FUN_1014a7108;
  param_1[0x1580] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1583);
  FUN_10064e2bc(param_1 + 0x1569);
  FUN_10064221c(param_1 + 0x1558);
  FUN_10003bec8(param_1 + 0x150b);
  param_1[0x144d] = &PTR_FUN_10145f300;
  param_1[0x14e7] = &PTR_FUN_1014a7108;
  param_1[0x14fe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1501);
  FUN_10064e2bc(param_1 + 0x14e7);
  param_1[0x14c9] = &PTR_FUN_1014a7108;
  param_1[0x14e0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14e3);
  FUN_10064e2bc(param_1 + 0x14c9);
  param_1[0x14ab] = &PTR_FUN_1014a7108;
  param_1[0x14c2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14c5);
  FUN_10064e2bc(param_1 + 0x14ab);
  FUN_10064221c(param_1 + 0x149a);
  FUN_10003bec8(param_1 + 0x144d);
  param_1[0x138f] = &PTR_FUN_10145f300;
  param_1[0x1429] = &PTR_FUN_1014a7108;
  param_1[0x1440] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1443);
  FUN_10064e2bc(param_1 + 0x1429);
  param_1[0x140b] = &PTR_FUN_1014a7108;
  param_1[0x1422] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1425);
  FUN_10064e2bc(param_1 + 0x140b);
  param_1[0x13ed] = &PTR_FUN_1014a7108;
  param_1[0x1404] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1407);
  FUN_10064e2bc(param_1 + 0x13ed);
  FUN_10064221c(param_1 + 0x13dc);
  FUN_10003bec8(param_1 + 0x138f);
  thunk_FUN_100651068(param_1 + 0x1369);
  param_1[0x134b] = &PTR_FUN_1014a7108;
  param_1[0x1362] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1365);
  FUN_10064e2bc(param_1 + 0x134b);
  FUN_10064221c(param_1 + 0x133a);
  param_1[0x131c] = &PTR_FUN_1014a7108;
  param_1[0x1333] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1336);
  FUN_10064e2bc(param_1 + 0x131c);
  FUN_10064221c(param_1 + 0x130b);
  thunk_FUN_100651068(param_1 + 0x12e5);
  param_1[0x12c7] = &PTR_FUN_1014a7108;
  param_1[0x12de] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12e1);
  FUN_10064e2bc(param_1 + 0x12c7);
  lVar1 = 0;
  param_1[0x1218] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x9538) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x95f0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x9608);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x9538);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x1218);
  param_1[0x115a] = &PTR_FUN_10145f300;
  param_1[0x11f4] = &PTR_FUN_1014a7108;
  param_1[0x120b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x120e);
  FUN_10064e2bc(param_1 + 0x11f4);
  param_1[0x11d6] = &PTR_FUN_1014a7108;
  param_1[0x11ed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11f0);
  FUN_10064e2bc(param_1 + 0x11d6);
  param_1[0x11b8] = &PTR_FUN_1014a7108;
  param_1[0x11cf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11d2);
  FUN_10064e2bc(param_1 + 0x11b8);
  FUN_10064221c(param_1 + 0x11a7);
  FUN_10003bec8(param_1 + 0x115a);
  param_1[0x113c] = &PTR_FUN_1014a7108;
  param_1[0x1153] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1156);
  FUN_10064e2bc(param_1 + 0x113c);
  thunk_FUN_100651068(param_1 + 0x1116);
  FUN_10003bec8(param_1 + 0x10c9);
  FUN_10064221c(param_1 + 0x10b8);
  param_1[0xffa] = &PTR_FUN_10145f300;
  param_1[0x1094] = &PTR_FUN_1014a7108;
  param_1[0x10ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10ae);
  FUN_10064e2bc(param_1 + 0x1094);
  param_1[0x1076] = &PTR_FUN_1014a7108;
  param_1[0x108d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1090);
  FUN_10064e2bc(param_1 + 0x1076);
  param_1[0x1058] = &PTR_FUN_1014a7108;
  param_1[0x106f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1072);
  FUN_10064e2bc(param_1 + 0x1058);
  FUN_10064221c(param_1 + 0x1047);
  FUN_10003bec8(param_1 + 0xffa);
  param_1[0xfdc] = &PTR_FUN_1014a7108;
  param_1[0xff3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xff6);
  FUN_10064e2bc(param_1 + 0xfdc);
  thunk_FUN_100651068(param_1 + 0xfb6);
  FUN_10003bec8(param_1 + 0xf69);
  FUN_10064221c(param_1 + 0xf58);
  param_1[0xe9a] = &PTR_FUN_10145f300;
  param_1[0xf34] = &PTR_FUN_1014a7108;
  param_1[0xf4b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf4e);
  FUN_10064e2bc(param_1 + 0xf34);
  param_1[0xf16] = &PTR_FUN_1014a7108;
  param_1[0xf2d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf30);
  FUN_10064e2bc(param_1 + 0xf16);
  param_1[0xef8] = &PTR_FUN_1014a7108;
  param_1[0xf0f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf12);
  FUN_10064e2bc(param_1 + 0xef8);
  FUN_10064221c(param_1 + 0xee7);
  FUN_10003bec8(param_1 + 0xe9a);
  param_1[0xe7c] = &PTR_FUN_1014a7108;
  param_1[0xe93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe96);
  FUN_10064e2bc(param_1 + 0xe7c);
  thunk_FUN_100651068(param_1 + 0xe56);
  FUN_10003bec8(param_1 + 0xe09);
  FUN_10064221c(param_1 + 0xdf8);
  param_1[0xd3a] = &PTR_FUN_10145f300;
  param_1[0xdd4] = &PTR_FUN_1014a7108;
  param_1[0xdeb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdee);
  FUN_10064e2bc(param_1 + 0xdd4);
  param_1[0xdb6] = &PTR_FUN_1014a7108;
  param_1[0xdcd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdd0);
  FUN_10064e2bc(param_1 + 0xdb6);
  param_1[0xd98] = &PTR_FUN_1014a7108;
  param_1[0xdaf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdb2);
  FUN_10064e2bc(param_1 + 0xd98);
  FUN_10064221c(param_1 + 0xd87);
  FUN_10003bec8(param_1 + 0xd3a);
  param_1[0xd1c] = &PTR_FUN_1014a7108;
  param_1[0xd33] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd36);
  FUN_10064e2bc(param_1 + 0xd1c);
  thunk_FUN_100651068(param_1 + 0xcf6);
  FUN_10003bec8(param_1 + 0xca9);
  FUN_10064221c(param_1 + 0xc98);
  param_1[0xbda] = &PTR_FUN_10145f300;
  param_1[0xc74] = &PTR_FUN_1014a7108;
  param_1[0xc8b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc8e);
  FUN_10064e2bc(param_1 + 0xc74);
  param_1[0xc56] = &PTR_FUN_1014a7108;
  param_1[0xc6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc70);
  FUN_10064e2bc(param_1 + 0xc56);
  param_1[0xc38] = &PTR_FUN_1014a7108;
  param_1[0xc4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc52);
  FUN_10064e2bc(param_1 + 0xc38);
  FUN_10064221c(param_1 + 0xc27);
  FUN_10003bec8(param_1 + 0xbda);
  param_1[0xbbc] = &PTR_FUN_1014a7108;
  param_1[0xbd3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbd6);
  FUN_10064e2bc(param_1 + 0xbbc);
  thunk_FUN_100651068(param_1 + 0xb96);
  FUN_10003bec8(param_1 + 0xb49);
  FUN_10064221c(param_1 + 0xb38);
  param_1[0xa7a] = &PTR_FUN_10145f300;
  param_1[0xb14] = &PTR_FUN_1014a7108;
  param_1[0xb2b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb2e);
  FUN_10064e2bc(param_1 + 0xb14);
  param_1[0xaf6] = &PTR_FUN_1014a7108;
  param_1[0xb0d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb10);
  FUN_10064e2bc(param_1 + 0xaf6);
  param_1[0xad8] = &PTR_FUN_1014a7108;
  param_1[0xaef] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaf2);
  FUN_10064e2bc(param_1 + 0xad8);
  FUN_10064221c(param_1 + 0xac7);
  FUN_10003bec8(param_1 + 0xa7a);
  param_1[0xa5c] = &PTR_FUN_1014a7108;
  param_1[0xa73] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa76);
  FUN_10064e2bc(param_1 + 0xa5c);
  thunk_FUN_100651068(param_1 + 0xa36);
  FUN_10003bec8(param_1 + 0x9e9);
  FUN_10064221c(param_1 + 0x9d8);
  param_1[0x91a] = &PTR_FUN_10145f300;
  param_1[0x9b4] = &PTR_FUN_1014a7108;
  param_1[0x9cb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9ce);
  FUN_10064e2bc(param_1 + 0x9b4);
  param_1[0x996] = &PTR_FUN_1014a7108;
  param_1[0x9ad] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9b0);
  FUN_10064e2bc(param_1 + 0x996);
  param_1[0x978] = &PTR_FUN_1014a7108;
  param_1[0x98f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x992);
  FUN_10064e2bc(param_1 + 0x978);
  FUN_10064221c(param_1 + 0x967);
  FUN_10003bec8(param_1 + 0x91a);
  param_1[0x8fc] = &PTR_FUN_1014a7108;
  param_1[0x913] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x916);
  FUN_10064e2bc(param_1 + 0x8fc);
  thunk_FUN_100651068(param_1 + 0x8d6);
  FUN_10003bec8(param_1 + 0x889);
  FUN_10064221c(param_1 + 0x878);
  thunk_FUN_100651068(param_1 + 0x852);
  thunk_FUN_100651068(param_1 + 0x82c);
  param_1[0x80e] = &PTR_FUN_1014a7108;
  param_1[0x825] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x828);
  FUN_10064e2bc(param_1 + 0x80e);
  param_1[0x7f0] = &PTR_FUN_1014a7108;
  param_1[0x807] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x80a);
  FUN_10064e2bc(param_1 + 0x7f0);
  param_1[0x7d2] = &PTR_FUN_1014a7108;
  param_1[0x7e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7ec);
  FUN_10064e2bc(param_1 + 0x7d2);
  thunk_FUN_10064e2bc(param_1 + 0x7bb);
  thunk_FUN_100530784(param_1 + 0x714);
  FUN_10064e2bc(param_1 + 0x6e0);
  thunk_FUN_100651068(param_1 + 0x6ba);
  FUN_10064e2bc(param_1 + 0x686);
  FUN_10003bd40(param_1 + 0x3cf);
  FUN_10003bd40(param_1 + 0x118);
  thunk_FUN_100651068(param_1 + 0xf2);
  thunk_FUN_100651068(param_1 + 0xcc);
  param_1[0xae] = &PTR_FUN_1014a7108;
  param_1[0xc5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_1014a7108;
  param_1[0xa7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaa);
  FUN_10064e2bc(param_1 + 0x90);
  thunk_FUN_10064e2bc(param_1 + 0x79);
  FUN_10032b588(param_1 + 0x74);
  FUN_10014f51c(param_1 + 0x70);
  FUN_1004f0a9c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void thunk_FUN_10026f59c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10026f59c_10147d898;
  param_1[0x6d] = &PTR_FUN_10147dab0;
  param_1[0x70] = &PTR_FUN_10147dae0;
  param_1[0x73] = &PTR_FUN_10147de78;
  param_1[0x74] = &PTR_FUN_10147ded8;
  param_1[0x77] = &PTR_FUN_10147df00;
  FUN_100111728(param_1 + 0x77);
  FUN_100270380(param_1);
  FUN_100270410(param_1);
  FUN_1002704a0(param_1);
  *(undefined1 *)((long)param_1 + 0x125b4) = 0;
  if (*(char *)((long)param_1 + 0x1258f) < '\0') {
    operator_delete((void *)param_1[0x24af]);
  }
  if (*(char *)((long)param_1 + 0x12577) < '\0') {
    operator_delete((void *)param_1[0x24ac]);
  }
  if ((void *)param_1[0x24ab] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24ab]);
    param_1[0x24ab] = 0;
    param_1[0x24aa] = 0;
  }
  if (*(char *)((long)param_1 + 0x1254f) < '\0') {
    operator_delete((void *)param_1[0x24a7]);
  }
  if (*(char *)((long)param_1 + 0x12537) < '\0') {
    operator_delete((void *)param_1[0x24a4]);
  }
  if (*(char *)((long)param_1 + 0x1251f) < '\0') {
    operator_delete((void *)param_1[0x24a1]);
  }
  if ((void *)param_1[0x24a0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x24a0]);
    param_1[0x24a0] = 0;
    param_1[0x249f] = 0;
  }
  FUN_1001e7b3c(param_1 + 0x249e);
  FUN_10027db20(param_1 + 0x2498);
  FUN_10027c3ac(param_1 + 0x2496,1);
  FUN_10027da74(param_1 + 0x2494,1);
  FUN_1001107e4(param_1 + 0x2492,1);
  FUN_100110778(param_1 + 0x2490,1);
  FUN_100110778(param_1 + 0x248e,1);
  thunk_FUN_1001cec4c(param_1 + 0x2471);
  thunk_FUN_1001cec4c(param_1 + 0x2454);
  thunk_FUN_100651068(param_1 + 0x242e);
  param_1[0x2410] = &PTR_FUN_1014a7108;
  param_1[0x2427] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x242a);
  FUN_10064e2bc(param_1 + 0x2410);
  FUN_10064221c(param_1 + 0x23ff);
  if ((void *)param_1[0x23fd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23fd]);
    param_1[0x23fd] = 0;
    param_1[0x23fc] = 0;
  }
  if ((void *)param_1[0x23fb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23fb]);
    param_1[0x23fb] = 0;
    param_1[0x23fa] = 0;
  }
  if ((void *)param_1[0x23f9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f9]);
    param_1[0x23f9] = 0;
    param_1[0x23f8] = 0;
  }
  if ((void *)param_1[0x23f7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f7]);
    param_1[0x23f7] = 0;
    param_1[0x23f6] = 0;
  }
  if ((void *)param_1[0x23f5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f5]);
    param_1[0x23f5] = 0;
    param_1[0x23f4] = 0;
  }
  if ((void *)param_1[0x23f3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f3]);
    param_1[0x23f3] = 0;
    param_1[0x23f2] = 0;
  }
  if ((void *)param_1[0x23f1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23f1]);
    param_1[0x23f1] = 0;
    param_1[0x23f0] = 0;
  }
  thunk_FUN_100186554(param_1 + 0x1bd3);
  thunk_FUN_10018d500(param_1 + 0x16ad);
  thunk_FUN_100651068(param_1 + 0x1687);
  param_1[0x15c9] = &PTR_FUN_10145f300;
  param_1[0x1663] = &PTR_FUN_1014a7108;
  param_1[0x167a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x167d);
  FUN_10064e2bc(param_1 + 0x1663);
  param_1[0x1645] = &PTR_FUN_1014a7108;
  param_1[0x165c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x165f);
  FUN_10064e2bc(param_1 + 0x1645);
  param_1[0x1627] = &PTR_FUN_1014a7108;
  param_1[0x163e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1641);
  FUN_10064e2bc(param_1 + 0x1627);
  FUN_10064221c(param_1 + 0x1616);
  FUN_10003bec8(param_1 + 0x15c9);
  param_1[0x150b] = &PTR_FUN_10145f300;
  param_1[0x15a5] = &PTR_FUN_1014a7108;
  param_1[0x15bc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15bf);
  FUN_10064e2bc(param_1 + 0x15a5);
  param_1[0x1587] = &PTR_FUN_1014a7108;
  param_1[0x159e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15a1);
  FUN_10064e2bc(param_1 + 0x1587);
  param_1[0x1569] = &PTR_FUN_1014a7108;
  param_1[0x1580] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1583);
  FUN_10064e2bc(param_1 + 0x1569);
  FUN_10064221c(param_1 + 0x1558);
  FUN_10003bec8(param_1 + 0x150b);
  param_1[0x144d] = &PTR_FUN_10145f300;
  param_1[0x14e7] = &PTR_FUN_1014a7108;
  param_1[0x14fe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1501);
  FUN_10064e2bc(param_1 + 0x14e7);
  param_1[0x14c9] = &PTR_FUN_1014a7108;
  param_1[0x14e0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14e3);
  FUN_10064e2bc(param_1 + 0x14c9);
  param_1[0x14ab] = &PTR_FUN_1014a7108;
  param_1[0x14c2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x14c5);
  FUN_10064e2bc(param_1 + 0x14ab);
  FUN_10064221c(param_1 + 0x149a);
  FUN_10003bec8(param_1 + 0x144d);
  param_1[0x138f] = &PTR_FUN_10145f300;
  param_1[0x1429] = &PTR_FUN_1014a7108;
  param_1[0x1440] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1443);
  FUN_10064e2bc(param_1 + 0x1429);
  param_1[0x140b] = &PTR_FUN_1014a7108;
  param_1[0x1422] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1425);
  FUN_10064e2bc(param_1 + 0x140b);
  param_1[0x13ed] = &PTR_FUN_1014a7108;
  param_1[0x1404] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1407);
  FUN_10064e2bc(param_1 + 0x13ed);
  FUN_10064221c(param_1 + 0x13dc);
  FUN_10003bec8(param_1 + 0x138f);
  thunk_FUN_100651068(param_1 + 0x1369);
  param_1[0x134b] = &PTR_FUN_1014a7108;
  param_1[0x1362] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1365);
  FUN_10064e2bc(param_1 + 0x134b);
  FUN_10064221c(param_1 + 0x133a);
  param_1[0x131c] = &PTR_FUN_1014a7108;
  param_1[0x1333] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1336);
  FUN_10064e2bc(param_1 + 0x131c);
  FUN_10064221c(param_1 + 0x130b);
  thunk_FUN_100651068(param_1 + 0x12e5);
  param_1[0x12c7] = &PTR_FUN_1014a7108;
  param_1[0x12de] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x12e1);
  FUN_10064e2bc(param_1 + 0x12c7);
  lVar1 = 0;
  param_1[0x1218] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x9538) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x95f0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x9608);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x9538);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x1218);
  param_1[0x115a] = &PTR_FUN_10145f300;
  param_1[0x11f4] = &PTR_FUN_1014a7108;
  param_1[0x120b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x120e);
  FUN_10064e2bc(param_1 + 0x11f4);
  param_1[0x11d6] = &PTR_FUN_1014a7108;
  param_1[0x11ed] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11f0);
  FUN_10064e2bc(param_1 + 0x11d6);
  param_1[0x11b8] = &PTR_FUN_1014a7108;
  param_1[0x11cf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11d2);
  FUN_10064e2bc(param_1 + 0x11b8);
  FUN_10064221c(param_1 + 0x11a7);
  FUN_10003bec8(param_1 + 0x115a);
  param_1[0x113c] = &PTR_FUN_1014a7108;
  param_1[0x1153] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1156);
  FUN_10064e2bc(param_1 + 0x113c);
  thunk_FUN_100651068(param_1 + 0x1116);
  FUN_10003bec8(param_1 + 0x10c9);
  FUN_10064221c(param_1 + 0x10b8);
  param_1[0xffa] = &PTR_FUN_10145f300;
  param_1[0x1094] = &PTR_FUN_1014a7108;
  param_1[0x10ab] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10ae);
  FUN_10064e2bc(param_1 + 0x1094);
  param_1[0x1076] = &PTR_FUN_1014a7108;
  param_1[0x108d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1090);
  FUN_10064e2bc(param_1 + 0x1076);
  param_1[0x1058] = &PTR_FUN_1014a7108;
  param_1[0x106f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1072);
  FUN_10064e2bc(param_1 + 0x1058);
  FUN_10064221c(param_1 + 0x1047);
  FUN_10003bec8(param_1 + 0xffa);
  param_1[0xfdc] = &PTR_FUN_1014a7108;
  param_1[0xff3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xff6);
  FUN_10064e2bc(param_1 + 0xfdc);
  thunk_FUN_100651068(param_1 + 0xfb6);
  FUN_10003bec8(param_1 + 0xf69);
  FUN_10064221c(param_1 + 0xf58);
  param_1[0xe9a] = &PTR_FUN_10145f300;
  param_1[0xf34] = &PTR_FUN_1014a7108;
  param_1[0xf4b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf4e);
  FUN_10064e2bc(param_1 + 0xf34);
  param_1[0xf16] = &PTR_FUN_1014a7108;
  param_1[0xf2d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf30);
  FUN_10064e2bc(param_1 + 0xf16);
  param_1[0xef8] = &PTR_FUN_1014a7108;
  param_1[0xf0f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf12);
  FUN_10064e2bc(param_1 + 0xef8);
  FUN_10064221c(param_1 + 0xee7);
  FUN_10003bec8(param_1 + 0xe9a);
  param_1[0xe7c] = &PTR_FUN_1014a7108;
  param_1[0xe93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe96);
  FUN_10064e2bc(param_1 + 0xe7c);
  thunk_FUN_100651068(param_1 + 0xe56);
  FUN_10003bec8(param_1 + 0xe09);
  FUN_10064221c(param_1 + 0xdf8);
  param_1[0xd3a] = &PTR_FUN_10145f300;
  param_1[0xdd4] = &PTR_FUN_1014a7108;
  param_1[0xdeb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdee);
  FUN_10064e2bc(param_1 + 0xdd4);
  param_1[0xdb6] = &PTR_FUN_1014a7108;
  param_1[0xdcd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdd0);
  FUN_10064e2bc(param_1 + 0xdb6);
  param_1[0xd98] = &PTR_FUN_1014a7108;
  param_1[0xdaf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xdb2);
  FUN_10064e2bc(param_1 + 0xd98);
  FUN_10064221c(param_1 + 0xd87);
  FUN_10003bec8(param_1 + 0xd3a);
  param_1[0xd1c] = &PTR_FUN_1014a7108;
  param_1[0xd33] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd36);
  FUN_10064e2bc(param_1 + 0xd1c);
  thunk_FUN_100651068(param_1 + 0xcf6);
  FUN_10003bec8(param_1 + 0xca9);
  FUN_10064221c(param_1 + 0xc98);
  param_1[0xbda] = &PTR_FUN_10145f300;
  param_1[0xc74] = &PTR_FUN_1014a7108;
  param_1[0xc8b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc8e);
  FUN_10064e2bc(param_1 + 0xc74);
  param_1[0xc56] = &PTR_FUN_1014a7108;
  param_1[0xc6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc70);
  FUN_10064e2bc(param_1 + 0xc56);
  param_1[0xc38] = &PTR_FUN_1014a7108;
  param_1[0xc4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc52);
  FUN_10064e2bc(param_1 + 0xc38);
  FUN_10064221c(param_1 + 0xc27);
  FUN_10003bec8(param_1 + 0xbda);
  param_1[0xbbc] = &PTR_FUN_1014a7108;
  param_1[0xbd3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbd6);
  FUN_10064e2bc(param_1 + 0xbbc);
  thunk_FUN_100651068(param_1 + 0xb96);
  FUN_10003bec8(param_1 + 0xb49);
  FUN_10064221c(param_1 + 0xb38);
  param_1[0xa7a] = &PTR_FUN_10145f300;
  param_1[0xb14] = &PTR_FUN_1014a7108;
  param_1[0xb2b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb2e);
  FUN_10064e2bc(param_1 + 0xb14);
  param_1[0xaf6] = &PTR_FUN_1014a7108;
  param_1[0xb0d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb10);
  FUN_10064e2bc(param_1 + 0xaf6);
  param_1[0xad8] = &PTR_FUN_1014a7108;
  param_1[0xaef] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaf2);
  FUN_10064e2bc(param_1 + 0xad8);
  FUN_10064221c(param_1 + 0xac7);
  FUN_10003bec8(param_1 + 0xa7a);
  param_1[0xa5c] = &PTR_FUN_1014a7108;
  param_1[0xa73] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa76);
  FUN_10064e2bc(param_1 + 0xa5c);
  thunk_FUN_100651068(param_1 + 0xa36);
  FUN_10003bec8(param_1 + 0x9e9);
  FUN_10064221c(param_1 + 0x9d8);
  param_1[0x91a] = &PTR_FUN_10145f300;
  param_1[0x9b4] = &PTR_FUN_1014a7108;
  param_1[0x9cb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9ce);
  FUN_10064e2bc(param_1 + 0x9b4);
  param_1[0x996] = &PTR_FUN_1014a7108;
  param_1[0x9ad] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9b0);
  FUN_10064e2bc(param_1 + 0x996);
  param_1[0x978] = &PTR_FUN_1014a7108;
  param_1[0x98f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x992);
  FUN_10064e2bc(param_1 + 0x978);
  FUN_10064221c(param_1 + 0x967);
  FUN_10003bec8(param_1 + 0x91a);
  param_1[0x8fc] = &PTR_FUN_1014a7108;
  param_1[0x913] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x916);
  FUN_10064e2bc(param_1 + 0x8fc);
  thunk_FUN_100651068(param_1 + 0x8d6);
  FUN_10003bec8(param_1 + 0x889);
  FUN_10064221c(param_1 + 0x878);
  thunk_FUN_100651068(param_1 + 0x852);
  thunk_FUN_100651068(param_1 + 0x82c);
  param_1[0x80e] = &PTR_FUN_1014a7108;
  param_1[0x825] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x828);
  FUN_10064e2bc(param_1 + 0x80e);
  param_1[0x7f0] = &PTR_FUN_1014a7108;
  param_1[0x807] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x80a);
  FUN_10064e2bc(param_1 + 0x7f0);
  param_1[0x7d2] = &PTR_FUN_1014a7108;
  param_1[0x7e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7ec);
  FUN_10064e2bc(param_1 + 0x7d2);
  thunk_FUN_10064e2bc(param_1 + 0x7bb);
  thunk_FUN_100530784(param_1 + 0x714);
  FUN_10064e2bc(param_1 + 0x6e0);
  thunk_FUN_100651068(param_1 + 0x6ba);
  FUN_10064e2bc(param_1 + 0x686);
  FUN_10003bd40(param_1 + 0x3cf);
  FUN_10003bd40(param_1 + 0x118);
  thunk_FUN_100651068(param_1 + 0xf2);
  thunk_FUN_100651068(param_1 + 0xcc);
  param_1[0xae] = &PTR_FUN_1014a7108;
  param_1[0xc5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xae);
  param_1[0x90] = &PTR_FUN_1014a7108;
  param_1[0xa7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaa);
  FUN_10064e2bc(param_1 + 0x90);
  thunk_FUN_10064e2bc(param_1 + 0x79);
  FUN_10032b588(param_1 + 0x74);
  FUN_10014f51c(param_1 + 0x70);
  FUN_1004f0a9c(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}

