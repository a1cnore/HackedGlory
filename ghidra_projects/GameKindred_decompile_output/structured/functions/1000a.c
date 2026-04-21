// functions/1000a — 240 functions
#include "GameKindred.h"




void thunk_FUN_1000a1d70(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [48];
  
  lVar1 = *(long *)(param_1 + 0x24d90);
  if (lVar1 != 0) {
    FUN_10009d910(lVar1,0);
  }
  *(long *)(param_1 + 0x24d90) = 0;
  if (*(int *)(param_1 + 0x298cc) != 0) {
    *(undefined8 *)(param_1 + 0x24d98) = 0;
  }
  FUN_1000a0df4(param_1);
  FUN_100530200(auStack_60,DAT_101d91884,0xffffffff,0);
  FUN_100644c34(param_1,auStack_60,1);
  return;
}




void thunk_FUN_1000a1e08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_CLOSE_SHOP_AND_OPEN_RECOMMENDED_PATH_SELECTOR");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000a00d0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  float *pfVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined1 *local_58;
  
  plVar2 = param_1 + 0x4c6c;
  uVar10 = (ulong)*(uint *)(param_1 + 0x531a);
  if (1 < *(uint *)(param_1 + 0x531a)) {
    uVar11 = 0;
    do {
      if ((param_1[uVar11 + 0x4cbf] != 0) && (param_1[uVar11 + 0x4cbe] != 0)) {
        FUN_10064e72c(DAT_10184e138,param_1[uVar11 + 0x4cbf],3,param_1[uVar11 + 0x4cbe],1);
        uVar10 = (ulong)*(uint *)(param_1 + 0x531a);
      }
    } while ((uVar11 + 1 < 7) && (uVar1 = uVar11 + 2, uVar11 = uVar11 + 1, uVar1 < uVar10));
  }
  FUN_10064e72c(0,param_1 + 0x4c96,3,param_1 + 0xb7,3);
  FUN_10064e72c(0x42820000,param_1 + 0x4c96,0,param_1,0);
  fVar12 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(fVar12 * 0.9,0x40000000,plVar2);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x4c76) == (float)DAT_101873a40) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x263b4)) && !NAN(DAT_101873a40._4_4_))) {
    bVar4 = *(float *)((long)param_1 + 0x263b4) == DAT_101873a40._4_4_;
  }
  if (!bVar4) {
    param_1[0x4c76] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar2);
  }
  pfVar3 = (float *)(param_1 + 0x49be);
  fVar12 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar13 = *(float *)((long)param_1 + 0x264f4) + 210.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x4c74) == fVar12 * 0.5) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x263a4)) && !NAN(fVar13))) {
    bVar4 = *(float *)((long)param_1 + 0x263a4) == fVar13;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x4c74) = fVar12 * 0.5;
    *(float *)((long)param_1 + 0x263a4) = fVar13;
    FUN_1000200a0(plVar2);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
  if (((param_1[0x1a] == 0) || (lVar5 = FUN_1003de46c(), lVar5 == 0)) ||
     (*(int *)(lVar5 + 0x28) == 0xfe)) {
    if ((*pfVar3 != 1.25) || (*(float *)((long)param_1 + 0x24df4) != 1.25)) {
      lVar5 = NEON_fmov(0x3fa00000,4);
      *(long *)pfVar3 = lVar5;
      FUN_1000200a0(param_1 + 0x49b5);
    }
    FUN_10064e5ec(0,0,param_1 + 0x49b5,8,param_1,8);
  }
  else {
    plVar2 = param_1 + 0x49b5;
    if ((*pfVar3 != 1.0) || (*(float *)((long)param_1 + 0x24df4) != 1.0)) {
      lVar5 = NEON_fmov(0x3f800000,4);
      *(long *)pfVar3 = lVar5;
      FUN_1000200a0(plVar2);
    }
    if ((int)param_1[0x531a] == 0) {
      uVar9 = 0x42820000;
      uVar6 = 0;
      uVar8 = 0;
      plVar7 = param_1;
    }
    else {
      uVar9 = 0;
      uVar6 = 5;
      uVar8 = 5;
      plVar7 = (long *)param_1[0x4cbe];
    }
    FUN_10064e72c(uVar9,plVar2,uVar6,plVar7,uVar8);
    FUN_10064e72c(0,plVar2,1,param_1,1);
  }
  return;
}




void FUN_1000a0390(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x24d90);
  if (lVar1 != 0) {
    FUN_10009d910(lVar1,0);
  }
  *(long *)(param_1 + 0x24d90) = 0;
  if (*(int *)(param_1 + 0x298cc) != 0) {
    *(undefined8 *)(param_1 + 0x24d98) = 0;
  }
  return;
}




void FUN_1000a03e0(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  piVar1 = (int *)(param_1 + 0x298c4);
  if (*(long *)(param_1 + 0x24d90) == 0) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = FUN_10009d9bc();
  }
  FUN_10009f9d8(param_1);
  FUN_1003e0adc(*(undefined8 *)(param_1 + 0xd0),&local_64);
  uVar7 = FUN_10046ef44(*(undefined8 *)(param_1 + 0xd8),local_64);
  if ((uVar7 & 1) == 0) {
    thunk_FUN_10046eadc(*(undefined8 *)(param_1 + 0xd8),local_64);
  }
  *(undefined4 *)(param_1 + 0x298c8) = local_64;
  if (*(int *)(param_1 + 0x298cc) == 0) {
    lVar9 = FUN_1003de46c(*(undefined8 *)(param_1 + 0xd0));
    if (*(int *)(lVar9 + 0x28) == 0xfe) {
      *(uint *)(param_1 + 0x26534) = *(uint *)(param_1 + 0x26534) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0x26534) = *(uint *)(param_1 + 0x26534) | 4;
      iVar4 = FUN_10049152c();
      *piVar1 = iVar4;
      if (iVar4 == 0xffff) {
        iVar4 = FUN_1003e0bf8(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                              local_64,0,0);
        *piVar1 = iVar4;
      }
      if (iVar4 != 0xffff) {
        iVar4 = FUN_10046f708(*(undefined8 *)(param_1 + 0xd8));
        if (iVar4 != 0) {
          uVar11 = 0;
          do {
            uVar6 = FUN_10046ef9c(*(undefined8 *)(param_1 + 0xd8),uVar11);
            iVar4 = FUN_10046f108(*(undefined8 *)(param_1 + 0xd8),uVar6,*piVar1);
            if ((0 < iVar4) || ((int)uVar6 == *piVar1)) {
              uVar8 = FUN_10046ef8c(*(undefined8 *)(param_1 + 0xd8),uVar11);
              uVar10 = FUN_10046ef9c(*(undefined8 *)(param_1 + 0xd8),uVar11);
              uVar8 = FUN_1000a0810(param_1,uVar10,uVar8,1);
              if ((int)uVar6 == *piVar1) {
                *(undefined8 *)(param_1 + 0x24d98) = uVar8;
              }
            }
            uVar11 = uVar11 + 1;
            uVar5 = FUN_10046f708(*(undefined8 *)(param_1 + 0xd8));
          } while (uVar11 < uVar5);
        }
        FUN_1000a0a24(param_1,*piVar1);
        uVar6 = 0xffff;
      }
    }
    FUN_1003467f8();
    iVar4 = FUN_10034cf98();
    if (iVar4 == 0) {
      uVar11 = *(uint *)(param_1 + 0x265ec) | 4;
    }
    else {
      uVar11 = *(uint *)(param_1 + 0x265ec) & 0xfffffffb;
    }
    *(uint *)(param_1 + 0x265ec) = uVar11;
  }
  else {
    *piVar1 = 0xffff;
    iVar4 = *(int *)(param_1 + 0x298cc) + -1;
    iVar2 = FUN_10046f710(*(undefined8 *)(param_1 + 0xd8),local_64,iVar4);
    if (iVar2 != 0) {
      iVar12 = 0;
      do {
        uVar8 = FUN_10046f758(*(undefined8 *)(param_1 + 0xd8),local_64,iVar4,iVar12);
        local_65 = 1;
        lVar9 = FUN_10046ef8c(*(undefined8 *)(param_1 + 0xd8),uVar8);
        if (((*(char *)(lVar9 + 0x199) == '\0') &&
            (((*(char *)(lVar9 + 0x19a) == '\0' || (iVar3 = FUN_10034cc34(), iVar3 == 2)) &&
             (*(char *)(lVar9 + 0x198) == '\0')))) &&
           (iVar3 = FUN_10046efe4(*(undefined8 *)(param_1 + 0xd8),uVar8,iVar4,
                                  *(undefined4 *)(param_1 + 0x298c8),&local_65), iVar3 != 0)) {
          uVar8 = FUN_10046ef9c(*(undefined8 *)(param_1 + 0xd8),uVar8);
          FUN_1000a0810(param_1,uVar8,lVar9,local_65);
        }
        iVar12 = iVar12 + 1;
      } while (iVar2 != iVar12);
    }
    *(uint *)(param_1 + 0x265ec) = *(uint *)(param_1 + 0x265ec) & 0xfffffffb;
    *(uint *)(param_1 + 0x26534) = *(uint *)(param_1 + 0x26534) & 0xfffffffb;
  }
  if ((*(int *)(param_1 + 0x298cc) != 0) &&
     (iVar4 = FUN_10046f708(*(undefined8 *)(param_1 + 0xd8)), iVar4 != 0)) {
    uVar11 = 0;
    do {
      iVar4 = FUN_10046ee2c(*(undefined8 *)(param_1 + 0xd8),uVar11,local_64);
      if (iVar4 != 0) {
        lVar9 = FUN_10046ef8c(*(undefined8 *)(param_1 + 0xd8),uVar11);
        uVar8 = FUN_10046ef9c(*(undefined8 *)(param_1 + 0xd8),uVar11);
        local_66 = 1;
        uVar7 = FUN_10046efe4(*(undefined8 *)(param_1 + 0xd8),uVar11,
                              *(int *)(param_1 + 0x298cc) + -1,local_64,&local_66);
        if ((((uVar7 & 1) == 0) && (*(int *)(lVar9 + 0x30) < 3)) &&
           (iVar4 = FUN_10046f2c4(*(undefined8 *)(param_1 + 0xd8),uVar8,
                                  *(int *)(param_1 + 0x298cc) + -1,local_64), iVar4 != 0)) {
          FUN_1000a0810(param_1,uVar8,lVar9,local_66);
        }
      }
      uVar11 = uVar11 + 1;
      uVar5 = FUN_10046f708(*(undefined8 *)(param_1 + 0xd8));
    } while (uVar11 < uVar5);
  }
  if ((int)uVar6 != 0xffff) {
    uVar8 = FUN_10046efac(*(undefined8 *)(param_1 + 0xd8),uVar6);
    local_67 = 1;
    iVar4 = FUN_10046ee2c(*(undefined8 *)(param_1 + 0xd8),uVar8,local_64);
    if (((iVar4 != 0) &&
        (iVar4 = FUN_10046efe4(*(undefined8 *)(param_1 + 0xd8),uVar8,
                               *(int *)(param_1 + 0x298cc) + -1,local_64,&local_67), iVar4 != 0)) &&
       (lVar9 = FUN_1000a0a74(param_1,uVar6), lVar9 != 0)) {
      FUN_1000a0af0(param_1,lVar9,1);
    }
  }
  FUN_1000a0be8(param_1);
  FUN_10009fe58(param_1);
  FUN_1000a0df4(param_1);
  if (*(int *)(param_1 + 0x298cc) == 0) {
    FUN_1000a10f4(param_1,*piVar1);
  }
  return;
}




ushort * FUN_1000a0810(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ushort *local_50;
  undefined4 local_48;
  
  uVar3 = *(ushort *)(param_1 + 0x24ba0);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(param_1 + (ulong)uVar3 * 3000 + 0x1920);
    if (uVar3 == *(ushort *)(param_1 + 0x24ba2)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(param_1 + 0x24ba0) = uVar3;
    thunk_FUN_10009ce4c(puVar4);
    *(int *)(param_1 + 0x24ba4) = *(int *)(param_1 + 0x24ba4) + 1;
  }
  FUN_10009da8c(puVar4,param_3,param_2,0,*(undefined4 *)(param_1 + 0x1908));
  local_48 = DAT_101dbd48c;
  local_70 = FUN_1000a1e58;
  local_60 = 0;
  uStack_58 = 0;
  puVar1 = puVar4 + 4;
  lStack_68 = param_1;
  local_50 = puVar4;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd460;
  local_70 = FUN_1000a1e58;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = puVar4;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd458;
  local_70 = FUN_1000a1e88;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = puVar4;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd484;
  local_70 = FUN_1000a1e88;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = puVar4;
  FUN_10001554c(puVar1,&local_70);
  local_48 = DAT_101dbd470;
  local_70 = FUN_1000a1e94;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  local_50 = puVar4;
  FUN_10001554c(puVar1,&local_70);
  *(uint *)(puVar4 + 0x42) = *(uint *)(puVar4 + 0x42) | 0x10;
  FUN_10009d910(puVar4,0);
  FUN_10009dc78(puVar4,param_4);
  lVar5 = (long)*(int *)(param_3 + 0x30) + -1;
  FUN_1005308f8(param_1 + lVar5 * 0x538 + 0x7e0,puVar4,1);
  uVar2 = *(uint *)(param_1 + 0x1908);
  *(ushort **)(param_1 + (ulong)uVar2 * 8 + 0x1788) = puVar4;
  *(uint *)(param_1 + 0x1908) = uVar2 + 1;
  param_1 = param_1 + lVar5 * 4;
  *(int *)(param_1 + 0x190c) = *(int *)(param_1 + 0x190c) + 1;
  FUN_10009d210(puVar4);
  return puVar4;
}




void FUN_1000a0a24(undefined8 param_1,int param_2)

{
  long lVar1;
  
  if ((param_2 != 0xffff) && (lVar1 = FUN_1000a0a74(), lVar1 != 0)) {
    FUN_1000a0af0(param_1,lVar1,1);
    return;
  }
  return;
}




undefined8 FUN_1000a0a74(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1908) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    while (iVar1 = FUN_10009d9bc(*(undefined8 *)(param_1 + 0x1788 + uVar3 * 8)), iVar1 != param_2) {
      if (0x2e < uVar3) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 0x1908) <= uVar3) {
        return 0;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + uVar3 * 8 + 0x1788);
  }
  return uVar2;
}




void FUN_1000a0af0(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_70 [48];
  
  lVar1 = FUN_10009d9b4(param_2);
  lVar1 = param_1 + (long)*(int *)(lVar1 + 0x30) * 0x538 + 0x2a8;
  uVar2 = FUN_100530d94(lVar1);
  if ((((uVar2 & 1) == 0) && (uVar2 = FUN_100530dd4(lVar1), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_100530da0(lVar1), (uVar2 & 1) == 0)) {
    lVar1 = *(long *)(param_1 + 0x24d90);
    if (lVar1 != param_2) {
      if (lVar1 != 0) {
        FUN_10009d910(lVar1,0);
      }
      FUN_10009d910(param_2,1);
      FUN_100530200(auStack_70,DAT_101d91884,param_3,param_2);
      FUN_100644c34(param_1,auStack_70,1);
      *(long *)(param_1 + 0x24d90) = param_2;
      if (*(int *)(param_1 + 0x298cc) != 0) {
        *(long *)(param_1 + 0x24d98) = param_2;
      }
      FUN_1000a0df4(param_1);
    }
  }
  return;
}




void FUN_1000a0be8(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = FUN_10046f7a4(*(undefined8 *)(param_1 + 0xd8));
  lVar7 = *(long *)(lVar4 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184e000))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  lVar9 = 0;
  uVar8 = (uint)*(float *)(*(long *)(lVar4 + 0x40) + 800);
  do {
    if (lVar9 == 0) {
      FUN_1003467f8();
      uVar2 = FUN_10034cec8();
    }
    else {
      uVar2 = 0;
    }
    for (lVar5 = FUN_100530908(param_1 + lVar9 * 0x538 + 0x7e0); lVar5 != 0;
        lVar5 = *(long *)(lVar5 + 0x30)) {
      local_b0 = 0;
      uStack_70 = 0;
      uStack_74 = 0;
      uStack_8c = 0;
      local_94 = 0;
      uStack_7c = 0;
      local_78 = 0;
      uStack_84 = 0;
      uStack_9c = 0;
      local_a4 = 0;
      local_a8 = 0xffffffff;
      uVar10 = *(undefined8 *)(param_1 + 0xd8);
      uVar6 = FUN_10009d9bc(lVar5);
      iVar3 = FUN_1003e1f98(uVar10,uVar6,uVar8,(long)&local_b0 + 4,&local_a8,&local_b0,1);
      uVar6 = FUN_10009d9bc(lVar5);
      bVar1 = FUN_1003db280(lVar7,uVar6);
      FUN_10009d9c4(lVar5,local_b0._4_4_);
      if (iVar3 == 0) {
        if (local_b0._4_4_ <= uVar8) goto LAB_1000a0d30;
LAB_1000a0d44:
        uVar6 = 0;
      }
      else {
        if (((int)local_b0 == 0 & (bVar1 ^ 0xff)) != 0 || (uVar2 & 1) != 0) goto LAB_1000a0d44;
LAB_1000a0d30:
        uVar6 = 1;
      }
      FUN_10009d928(lVar5,uVar6);
      lVar11 = *(long *)(lVar4 + 0x18);
      while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_10184e000))) {
        lVar11 = *(long *)(lVar11 + 0x20);
      }
      uVar6 = FUN_10009d9bc(lVar5);
      uVar6 = FUN_1003e1b2c(lVar11,uVar6);
      FUN_10009da08(lVar5,uVar6);
    }
    lVar9 = lVar9 + 1;
    if (lVar9 == 3) {
      FUN_1000a0df4(param_1);
      if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_1000a0df4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long local_70;
  
  lVar8 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    for (lVar3 = FUN_100530908(param_1 + lVar8 * 0x538 + 0x7e0); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x30)) {
      if (*(long *)(param_1 + 0x24d98) == 0) {
        FUN_10009d910(lVar3,0);
        FUN_10009d95c(lVar3,0);
      }
      else {
        if (*(long *)(param_1 + 0x24d98) == lVar3) {
LAB_1000a0e8c:
          FUN_10009d95c(lVar3,1);
          if (*(long *)(param_1 + 0x24d90) != lVar3) {
            uVar4 = 0;
            goto LAB_1000a0eec;
          }
LAB_1000a0ef4:
          FUN_10009d910(lVar3,1);
          FUN_10009d95c(lVar3,1);
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0xd8);
          uVar4 = FUN_10009d9bc(lVar3);
          uVar5 = FUN_10009d9bc(*(undefined8 *)(param_1 + 0x24d98));
          iVar2 = FUN_10046f108(uVar6,uVar4,uVar5);
          if (iVar2 != 0) goto LAB_1000a0e8c;
          FUN_10009d95c(lVar3,0);
          if (*(long *)(param_1 + 0x24d90) == lVar3) goto LAB_1000a0ef4;
          uVar4 = 2;
LAB_1000a0eec:
          FUN_10009d910(lVar3,uVar4);
        }
        FUN_10009da34(lVar3,0);
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 3) {
      FUN_10009f7a0(param_1);
      if ((*(long *)(param_1 + 0x24d98) != 0) &&
         (FUN_1000a25dc(param_1,*(long *)(param_1 + 0x24d98),1,1), *(long *)(param_1 + 0x24d98) != 0
         )) {
        uStack_78 = 0;
        uStack_7c = 0;
        uStack_84 = 0;
        local_80 = 0;
        uStack_8c = 0;
        uStack_94 = 0;
        local_9c = 0;
        uStack_a4 = 0;
        local_ac = 0;
        local_b0 = 0xffff;
        local_f4 = 0;
        uVar5 = *(undefined8 *)(param_1 + 0xd8);
        uVar4 = FUN_10009d9bc();
        FUN_10046f420(uVar5,uVar4,1,&local_b0,&local_f4);
        if (local_f4 != 0) {
          uVar9 = 0;
          do {
            lVar8 = FUN_1000a0a74(param_1,(&local_b0)[uVar9]);
            if (lVar8 != 0) {
              iVar2 = FUN_10009da28(*(undefined8 *)(param_1 + 0x24d98));
              if ((iVar2 != 0) &&
                 (lVar3 = FUN_10009d9b4(*(undefined8 *)(param_1 + 0x24d98)),
                 *(int *)(lVar3 + 0x30) != 3)) {
                FUN_10009da3c(lVar8,1);
              }
              lVar3 = FUN_10009d9b4(*(undefined8 *)(param_1 + 0x24d98));
              if (*(int *)(lVar3 + 0x30) == 3) {
                uStack_b8 = 0;
                uStack_bc = 0;
                uStack_d4 = 0;
                local_dc = 0;
                uStack_c4 = 0;
                local_c0 = 0;
                uStack_cc = 0;
                uStack_e4 = 0;
                local_ec = 0;
                local_f0 = 0xffff;
                local_f8 = 0;
                uVar5 = *(undefined8 *)(param_1 + 0xd8);
                uVar4 = FUN_10009d9bc(lVar8);
                FUN_10046f420(uVar5,uVar4,1,&local_f0,&local_f8);
                if (local_f8 != 0) {
                  uVar7 = 0;
                  do {
                    lVar3 = FUN_1000a0a74(param_1,(&local_f0)[uVar7]);
                    if (lVar3 != 0) {
                      iVar2 = FUN_10009da28(lVar8);
                      uVar1 = 0xffffffff;
                      if (iVar2 != 0) {
                        uVar1 = 1;
                      }
                      FUN_10009da3c(lVar3,uVar1);
                    }
                  } while ((uVar7 < 0xf) && (uVar7 = uVar7 + 1, uVar7 < local_f8));
                }
              }
            }
          } while ((uVar9 < 0xf) && (uVar9 = uVar9 + 1, uVar9 < local_f4));
        }
      }
      if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_1000a10f4(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  uint local_ac;
  uint local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  ulong local_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(int *)(param_1 + 0x298cc) == 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18), lVar7 != 0)) {
    while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184e000) {
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto LAB_1000a1138;
    }
    lVar6 = 0;
    do {
      lVar3 = FUN_100530908(param_1 + lVar6 * 0x538 + 0x7e0);
      while (lVar1 = lVar3, lVar1 != 0) {
        lVar3 = *(long *)(lVar1 + 0x30);
        uVar4 = FUN_10009d9bc(lVar1);
        uStack_70 = 0;
        uStack_74 = 0;
        uStack_8c = 0;
        local_94 = 0;
        uStack_7c = 0;
        local_78 = 0;
        local_84 = 0;
        uStack_9c = 0;
        local_a4 = 0;
        local_ac = 0;
        local_a8 = 0xffff;
        FUN_10046f420(*(undefined8 *)(param_1 + 0xd8),uVar4,0,&local_a8,&local_ac);
        if (local_ac == 0) {
          iVar9 = 0;
          iVar10 = 0;
        }
        else {
          uVar8 = 0;
          iVar10 = 0;
          iVar9 = 0;
          do {
            uVar5 = param_2;
            if ((&local_a8)[uVar8] == (uint)param_2) {
LAB_1000a1268:
              iVar9 = iVar9 + 1;
              iVar2 = FUN_1003e1b2c(lVar7,uVar5);
              iVar10 = iVar10 + iVar2;
            }
            else {
              iVar2 = FUN_10046f108(*(undefined8 *)(param_1 + 0xd8),(&local_a8)[uVar8],param_2);
              if (0 < iVar2) {
                uVar5 = (ulong)(&local_a8)[uVar8];
                goto LAB_1000a1268;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_ac);
        }
        uVar8 = FUN_1003e1b2c(lVar7,uVar4);
        if (((uVar8 & 1) != 0) || ((iVar9 != 0 && (iVar9 == iVar10)))) {
          FUN_10009da4c(lVar1,1);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    local_84 = local_84 & 0xffffffff00000000;
    uStack_8c = 0;
    local_94 = 0;
    uStack_9c = 0;
    local_a4 = 0;
    local_a8 = 0xffff;
    FUN_100465a8c(lVar7,&local_a8,10);
    if (*(int *)(param_1 + 0x298d0) != 0) {
      uVar8 = 0;
      do {
        FUN_10009e4c0(*(undefined8 *)(param_1 + 0x265f0 + uVar8 * 8),0);
        uVar5 = (ulong)*(uint *)(param_1 + 0x298d0);
        if (6 < uVar8) break;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
      if (*(uint *)(param_1 + 0x298d0) != 0) {
        uVar8 = 0;
        do {
          lVar7 = 0;
          lVar6 = *(long *)(param_1 + uVar8 * 8 + 0x265f0);
          do {
            if (*(int *)(lVar6 + 0x63c) == *(int *)((long)&local_a8 + lVar7)) {
              *(undefined4 *)((long)&local_a8 + lVar7) = 0xffff;
              FUN_10009e4c0(lVar6,1);
              uVar5 = (ulong)*(uint *)(param_1 + 0x298d0);
              break;
            }
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0x28);
        } while ((uVar8 < 7) && (uVar8 = uVar8 + 1, uVar8 < uVar5));
      }
    }
  }
LAB_1000a1138:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_1000a13b0(long param_1)

{
  bool bVar1;
  int local_24;
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    bVar1 = true;
  }
  else {
    FUN_1003e0adc(*(long *)(param_1 + 0xd0),&local_24);
    bVar1 = *(int *)(param_1 + 0x298c8) != local_24;
  }
  return bVar1;
}




void FUN_1000a1404(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    lVar3 = FUN_100530908(param_1 + lVar4 * 0x538 + 0x7e0);
    while (lVar1 = lVar3, lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + 0x30);
      iVar2 = FUN_10009d9bc(lVar1);
      if (iVar2 == param_2) {
        *(long *)(param_1 + 0x24d98) = lVar1;
        FUN_1000a0df4(param_1);
      }
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  return;
}




void FUN_1000a1498(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    lVar2 = FUN_100530908(param_1 + lVar4 * 0x538 + 0x7e0);
    while (lVar3 = lVar2, lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x30);
      iVar1 = FUN_10009d9bc(lVar3);
      if (iVar1 == param_2) {
        FUN_10009dbcc(lVar3);
        if (*(int *)(param_1 + 0x298cc) != 0) {
          return;
        }
        iVar1 = FUN_10009d9bc(lVar3);
        if (iVar1 != *(int *)(param_1 + 0x298c4)) {
          return;
        }
        FUN_100491520(0xffff);
        lVar4 = *(long *)(param_1 + 0x24da0);
        if (lVar4 != 0) {
          FUN_10009e4d4(lVar4,0);
          *(long *)(param_1 + 0x24da0) = 0;
        }
        *(undefined1 *)(param_1 + 0x298d4) = 1;
        *(undefined4 *)(param_1 + 0x298c0) = 0x3e99999a;
        return;
      }
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 3) {
      return;
    }
  } while( true );
}




void FUN_1000a158c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x24da0);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_10009e4d4(lVar1,0);
    }
    if (param_2 != 0) {
      FUN_10009e4d4(param_2,1);
    }
    *(long *)(param_1 + 0x24da0) = param_2;
  }
  return;
}




void FUN_1000a15e0(float param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = (float *)(param_2 + 0x298c0);
  FUN_1000a0be8();
  if (*(int *)(param_2 + 0x298cc) == 0) {
    FUN_1000a10f4(param_2,*(undefined4 *)(param_2 + 0x298c4));
  }
  if (*(char *)(param_2 + 0x298d4) != '\0') {
    if (*pfVar1 <= 0.0) {
      *pfVar1 = 0.0;
      *(undefined1 *)(param_2 + 0x298d4) = 0;
      if ((*(int *)(param_2 + 0x298d0) != 0) && (iVar2 = FUN_10049152c(), iVar2 != 0xffff)) {
        FUN_1000a1694(param_2);
      }
      FUN_1000a03e0(param_2);
      return;
    }
    *pfVar1 = *pfVar1 - param_1;
  }
  return;
}




undefined8 FUN_1000a1694(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x298d0);
  if (*(uint *)(param_1 + 0x298d0) != 0) {
    lVar4 = 0x265f0;
    do {
      lVar3 = *(long *)(param_1 + lVar4);
      if (*(char *)(lVar3 + 0x648) == '\0') {
        iVar1 = FUN_10049152c();
        FUN_1000a1e9c(param_1,lVar3,iVar1 != 0xffff);
        return *(undefined8 *)(param_1 + lVar4);
      }
      lVar4 = lVar4 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}




undefined8 FUN_1000a1718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x24d90);
}




void FUN_1000a1728(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_d0 [4];
  float local_cc;
  float local_c8;
  float local_c4;
  undefined1 auStack_c0 [4];
  float local_bc;
  undefined1 auStack_b8 [4];
  float local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  
  lVar4 = FUN_10003d5bc();
  if (param_1[0x49b3] != 0) {
    fVar17 = *(float *)(lVar4 + 0x10);
    fVar18 = *(float *)(lVar4 + 0x14);
    FUN_100641464(auStack_a4,auStack_a8);
    lVar4 = FUN_10003d5bc(param_1);
    fVar10 = (float)NEON_fminnm((int)(*(float *)(lVar4 + 0x18) * 255.0),0x437f0000);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    local_b0 = 0xffff;
    local_ae = 0xff;
    local_ad = (undefined1)(int)fVar10;
    plVar7 = param_1 + 0x1c;
    (**(code **)(*param_1 + 0x68))(param_1,auStack_b8,auStack_c0);
    lVar4 = 0;
    fVar10 = fVar17 * 36.0;
    plVar6 = param_1;
    do {
      lVar9 = 0;
      do {
        plVar1 = *(long **)((long)plVar6 + lVar9 + 0xf0);
        plVar2 = *(long **)((long)plVar6 + lVar9 + 0xf8);
        if (plVar1 != (long *)0x0 && plVar2 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x68))(plVar1,&local_c8,auStack_d0);
          fVar12 = local_c8;
          fVar19 = (local_cc + local_c4) * 0.5;
          (**(code **)(*plVar2 + 0x68))(plVar2,&local_c8,auStack_d0);
          fVar13 = (local_cc + local_c4) * 0.5;
          fVar11 = (float)NEON_fminnm(fVar19,fVar13);
          fVar14 = ABS(fVar19 - fVar13);
          fVar19 = fVar14 + fVar18 + fVar18;
          fVar13 = (fVar11 - local_b4) + fVar19;
          if (local_b4 <= fVar11) {
            fVar13 = fVar19;
          }
          if (0.5 < fVar14) {
            fVar19 = fVar12 - fVar10;
            if (fVar12 - fVar10 <= local_c8 - fVar10) {
              fVar19 = local_c8 - fVar10;
            }
            if (fVar11 <= local_b4) {
              fVar11 = local_b4;
            }
            fVar12 = local_bc - fVar11;
            if (fVar13 + fVar11 <= local_bc) {
              fVar12 = fVar13;
            }
            lVar5 = FUN_1006575c4(plVar7,"hud_store_connector_fill");
            fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
            NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
            fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
            fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
            fVar16 = 1.0 / (float)*(int *)(*(long *)(*plVar7 + 8) + 0x48);
            FUN_100043664(fVar19,fVar11,SUB42(fVar19 + fVar17 * 4.0,0),fVar12 + fVar11,0,
                          fVar16 * fVar14,
                          1.0 - fVar15 * (1.0 / (float)*(int *)(*(long *)(*plVar7 + 8) + 0x4c)),
                          fVar16 * (fVar13 + fVar14),param_2,&local_b0,0);
          }
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar9 != 0x200);
      lVar4 = lVar4 + 1;
      plVar6 = plVar6 + 0x40;
    } while (lVar4 != 2);
    uVar8 = 0;
    do {
      for (plVar6 = (long *)FUN_100530900(param_1 + uVar8 * 0xa7 + 0xfc); plVar6 != (long *)0x0;
          plVar6 = (long *)plVar6[6]) {
        iVar3 = FUN_10009d97c(plVar6);
        if ((iVar3 != 0) && (iVar3 = FUN_10009d9a8(plVar6), iVar3 != 0)) {
          (**(code **)(*plVar6 + 0x68))(plVar6,&local_c8,auStack_d0);
          fVar11 = local_c8;
          fVar12 = (local_cc + local_c4) * 0.5;
          fVar13 = fVar12;
          if (fVar12 <= local_b4) {
            fVar13 = local_b4;
          }
          fVar19 = (fVar18 * 4.0 - local_b4) + fVar12;
          if (local_b4 <= fVar12) {
            fVar19 = fVar18 * 4.0;
          }
          fVar12 = local_bc - fVar13;
          if (fVar19 + fVar13 <= local_bc) {
            fVar12 = fVar19;
          }
          if (0.0 < fVar12) {
            if (uVar8 != 0) {
              fVar20 = local_c8 - fVar10;
              lVar4 = FUN_1006575c4(plVar7,"hud_store_connector_fill");
              fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
              NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
              fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
              fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
              fVar16 = 1.0 / (float)*(int *)(*(long *)(*plVar7 + 8) + 0x48);
              FUN_100043664(fVar20,fVar13,SUB42(fVar11 + 2.0,0),fVar12 + fVar13,0,fVar16 * fVar14,
                            1.0 - fVar15 * (1.0 / (float)*(int *)(*(long *)(*plVar7 + 8) + 0x4c)),
                            fVar16 * (fVar19 + fVar14),param_2,&local_b0,0);
            }
            if (uVar8 < 2) {
              fVar11 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
              fVar14 = DAT_10184e130 + -128.0;
              fVar21 = local_c8 + fVar17 * 128.0;
              lVar4 = FUN_1006575c4(plVar7,"hud_store_connector_gradient");
              fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
              NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
              fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
              fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
              fVar20 = 1.0 / (float)*(int *)(*(long *)(*plVar7 + 8) + 0x48);
              FUN_100043664(fVar21,fVar13,SUB42((fVar21 - fVar10) + fVar17 * (fVar11 + fVar14),0),
                            fVar12 + fVar13,0,fVar20 * fVar15,
                            1.0 - fVar16 * (1.0 / (float)*(int *)(*(long *)(*plVar7 + 8) + 0x4c)),
                            fVar20 * (fVar19 + fVar15),param_2,&local_b0,0);
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 3);
  }
  return;
}




void FUN_1000a1be0(long param_1)

{
  FUN_1000a1728(param_1 + -0xb8);
  return;
}




undefined8 FUN_1000a1be8(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xe0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_1000a1c00(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30;
  return 1;
}




void FUN_1000a1c18(long param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_60 [48];
  
  if (((*(long *)(param_1 + 0x24d90) == param_3) &&
      (((uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8), (uVar2 & 1) != 0 ||
        (DAT_101dbd4d8 == DAT_101dbd450)) && (iVar1 = FUN_100644ecc(param_2), iVar1 != 0)))) &&
     (*(char *)(param_1 + 0x298d4) == '\0')) {
    FUN_100530200(auStack_60,DAT_101d918d0,0xffffffff,param_3);
    FUN_100644c34(param_1,auStack_60,1);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1000a1cf0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  if (param_3 != 0) {
    FUN_1000a0af0(param_1,param_3,0);
  }
  if (*(long *)(param_1 + 0x24d90) == param_3) {
    uVar1 = FUN_100644a94("EVENT_SHOP_RIGHT_CLICK_BUY_ITEM");
    FUN_100530200(auStack_50,uVar1,0xffffffff,param_3);
    FUN_100644c34(param_1,auStack_50,1);
  }
  return;
}




void FUN_1000a1d70(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [48];
  
  lVar1 = *(long *)(param_1 + 0x24d90);
  if (lVar1 != 0) {
    FUN_10009d910(lVar1,0);
  }
  *(long *)(param_1 + 0x24d90) = 0;
  if (*(int *)(param_1 + 0x298cc) != 0) {
    *(undefined8 *)(param_1 + 0x24d98) = 0;
  }
  FUN_1000a0df4(param_1);
  FUN_100530200(auStack_60,DAT_101d91884,0xffffffff,0);
  FUN_100644c34(param_1,auStack_60,1);
  return;
}




void FUN_1000a1e08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_CLOSE_SHOP_AND_OPEN_RECOMMENDED_PATH_SELECTOR");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000a1e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 != 0) {
    FUN_1000a0af0(param_1,param_5,0);
  }
  FUN_100644b14(param_4);
  return;
}




void FUN_1000a1e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000a1c18(param_1,param_4,param_5);
  return;
}




void FUN_1000a1e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000a1cf0(param_1,param_2,param_5);
  return;
}




void FUN_1000a1e9c(long param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = &DAT_101159fc8;
    if (param_2 != 0) {
      puVar1 = (undefined4 *)(param_2 + 0x63c);
    }
    FUN_100491520(*puVar1);
  }
  FUN_1000a158c(param_1,param_2);
  if (*(int *)(param_1 + 0x298cc) != 0) {
    return;
  }
  FUN_1000a0a24(param_1,*(undefined4 *)(param_2 + 0x63c));
  return;
}




void FUN_1000a1f0c(long param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_60 [48];
  
  if (((*(long *)(param_1 + 0x24da0) != 0 && *(long *)(param_1 + 0x24da0) == param_3) &&
      (((uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8), (uVar2 & 1) != 0 ||
        (DAT_101dbd4d8 == DAT_101dbd450)) && (iVar1 = FUN_100644ecc(param_2), iVar1 != 0)))) &&
     (*(char *)(param_1 + 0x298d4) == '\0')) {
    FUN_100530200(auStack_60,DAT_101d918d0,0xffffffff,param_3);
    FUN_100644c34(param_1,auStack_60,1);
  }
  return;
}




void FUN_1000a1fdc(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 local_a8 [20];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (((*(long *)(param_1 + 0xd8) != 0) && (param_2 != 0)) &&
     (uVar2 = FUN_100470864(param_2,local_a8,0x14), uVar2 != 0)) {
    lVar4 = FUN_100490234(*(undefined8 *)(param_1 + 0xd0));
    uVar6 = (ulong)uVar2;
    puVar7 = local_a8;
    do {
      uVar1 = *puVar7;
      iVar3 = FUN_10046f4b0(*(undefined8 *)(param_1 + 0xd8),uVar1);
      if (iVar3 != 0) {
        uVar5 = FUN_100345b94();
        uVar5 = FUN_10034e548(uVar5,uVar1);
        uVar5 = FUN_1000a2130(param_1,uVar1,uVar5,0);
        if (((*(long *)(param_1 + 0x24da0) == 0) && (iVar3 = FUN_10049152c(), iVar3 != 0xffff)) &&
           ((lVar4 != 0 &&
            (iVar3 = FUN_1004915d0(0,uVar1,local_a8,lVar4,*(undefined8 *)(param_1 + 0xd8)),
            iVar3 != 0)))) {
          FUN_1000a1e9c(param_1,uVar5,0);
        }
      }
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    FUN_1000a00d0(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




ushort * FUN_1000a2130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ushort *local_60;
  undefined4 local_58;
  
  uVar4 = *(ushort *)(param_1 + 0x298b0);
  uVar6 = (ulong)uVar4;
  if (uVar6 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(param_1 + 0x26630 + uVar6 * 0x650);
    if (uVar4 == *(ushort *)(param_1 + 0x298b2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(param_1 + 0x298b0) = uVar4;
    uVar3 = thunk_FUN_10009dca4(puVar5);
    *(int *)(param_1 + 0x298b4) = *(int *)(param_1 + 0x298b4) + 1;
    FUN_10009e3d4(uVar3,param_3,param_2,*(undefined4 *)(param_1 + 0x298d0));
    local_58 = DAT_101dbd48c;
    local_80 = FUN_1000a2300;
    local_70 = 0;
    uStack_68 = 0;
    lVar7 = param_1 + 0x26630 + uVar6 * 0x650;
    lVar1 = lVar7 + 8;
    lStack_78 = param_1;
    local_60 = puVar5;
    FUN_10001554c(lVar1,&local_80);
    local_58 = DAT_101dbd460;
    local_80 = FUN_1000a2300;
    local_70 = 0;
    uStack_68 = 0;
    lStack_78 = param_1;
    local_60 = puVar5;
    FUN_10001554c(lVar1,&local_80);
    local_58 = DAT_101dbd458;
    local_80 = FUN_1000a2334;
    local_70 = 0;
    uStack_68 = 0;
    lStack_78 = param_1;
    local_60 = puVar5;
    FUN_10001554c(lVar1,&local_80);
    local_58 = DAT_101dbd484;
    local_80 = FUN_1000a2334;
    local_70 = 0;
    uStack_68 = 0;
    lStack_78 = param_1;
    local_60 = puVar5;
    FUN_10001554c(lVar1,&local_80);
    *(uint *)(lVar7 + 0x84) = *(uint *)(lVar7 + 0x84) | 0x10;
    FUN_10009e4d4(puVar5,0);
    FUN_100642bd8(param_1 + 0x264b0,puVar5,1);
    uVar2 = *(uint *)(param_1 + 0x298d0);
    *(uint *)(param_1 + 0x298d0) = uVar2 + 1;
    *(ushort **)(param_1 + (ulong)uVar2 * 8 + 0x265f0) = puVar5;
    FUN_10009dfac(puVar5);
  }
  return puVar5;
}




void FUN_1000a2300(undefined8 param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
    FUN_1000a1e9c(param_1,in_x4,1);
    FUN_1000a03e0(param_1);
    return;
  }
  return;
}




void FUN_1000a2334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000a1f0c(param_1,param_4,param_5);
  return;
}




void FUN_1000a2340(long param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  
  iVar3 = FUN_10034ea2c(param_2);
  if (((iVar3 != 0) && (*(long *)(param_1 + 0xd0) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0xd0) + 0x260) == (int)param_2)) {
    piVar1 = (int *)(param_1 + 0x298cc);
    FUN_10009fb18(param_1);
    lVar4 = FUN_1003de46c(*(undefined8 *)(param_1 + 0xd0));
    pcVar5 = "HUD_CHOOSE_A_BUILD_BUTTON";
    if (lVar4 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = *(int *)(lVar4 + 0x28) == 0xfe;
      if (!bVar2) {
        pcVar5 = "HUD_SWITCH_BUILD_BUTTON";
      }
    }
    uVar6 = FUN_1004e0150(pcVar5,0);
    FUN_100181af8(param_1 + 0x24da8,uVar6);
    iVar3 = *piVar1;
    uVar7 = 0;
    if (!bVar2 && iVar3 == 0) {
      uVar7 = 4;
    }
    *(uint *)(param_1 + 0x263e4) = uVar7 | *(uint *)(param_1 + 0x263e4) & 0xfffffffb;
    if (lVar4 != 0) {
      if (!bVar2) {
        FUN_1000a1fdc(param_1,lVar4);
        iVar3 = *piVar1;
      }
      if (iVar3 == 0) {
        FUN_1000a03e0(param_1);
        if ((*(long *)(param_1 + 0x24da0) != 0) && (*piVar1 == 0)) {
          FUN_1000a0a24(param_1,*(undefined4 *)(*(long *)(param_1 + 0x24da0) + 0x63c));
        }
      }
      FUN_1000a2490(param_1);
      return;
    }
  }
  return;
}




void FUN_1000a2490(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0xd0) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184e000) {
        uVar1 = *(uint *)(param_1 + 0x298d0);
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0) {
          return;
        }
        uVar4 = 0;
        while( true ) {
          lVar2 = *(long *)(param_1 + 0x265f0 + uVar4 * 8);
          if (lVar2 != 0) {
            local_38 = 0;
            FUN_10046f508(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(lVar2 + 0x63c),
                          (long)&local_38 + 4,&local_38);
            FUN_10009e4c8(*(undefined8 *)(param_1 + 0x265f0 + uVar4 * 8),local_38._4_4_,
                          local_38 & 0xffffffff);
            uVar3 = (ulong)*(uint *)(param_1 + 0x298d0);
          }
          if (6 < uVar4) break;
          uVar4 = uVar4 + 1;
          if (uVar3 <= uVar4) {
            return;
          }
        }
        return;
      }
    }
  }
  return;
}




void FUN_1000a255c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_10034ea2c(param_2);
  if (iVar1 != 0) {
    if ((0 < param_4) && (*(int *)(param_1 + 0x298c4) == param_3)) {
      *(undefined1 *)(param_1 + 0x298d4) = 1;
      *(undefined4 *)(param_1 + 0x298c0) = 0x3e99999a;
    }
    FUN_1000a2490(param_1);
    return;
  }
  return;
}




void FUN_1000a25dc(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uStack_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  local_88 = 0xffffffff;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  local_98 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  local_b4 = 0;
  uStack_bc = 0;
  local_c4 = 0;
  local_c8 = 0xffffffff;
  local_d0 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  uVar1 = FUN_10009d9bc(param_2);
  FUN_10046f420(uVar4,uVar1,0,&local_88,(long)&local_d0 + 4);
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  uVar1 = FUN_10009d9bc(param_2);
  FUN_10046f420(uVar4,uVar1,1,&local_c8,&local_d0);
  if ((param_3 != 0) && (local_d0._4_4_ != 0)) {
    uVar5 = 0;
    do {
      lVar2 = FUN_1000a0a74(param_1,(&local_88)[uVar5]);
      if (lVar2 != 0) {
        lVar3 = FUN_10009d9b4(param_2);
        FUN_1000a27b8(param_1,*(undefined4 *)(lVar3 + 0x30),param_2,lVar2);
        lVar3 = FUN_10009d9b4(lVar2);
        if (*(int *)(lVar3 + 0x30) < 3) {
          FUN_1000a25dc(param_1,lVar2,1,0);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_d0 >> 0x20);
  }
  if ((param_4 != 0) && ((int)local_d0 != 0)) {
    uVar5 = 0;
    do {
      lVar2 = FUN_1000a0a74(param_1,(&local_c8)[uVar5]);
      if (lVar2 != 0) {
        lVar3 = FUN_10009d9b4();
        FUN_1000a27b8(param_1,*(undefined4 *)(lVar3 + 0x30),lVar2,param_2);
        lVar3 = FUN_10009d9b4(lVar2);
        if (1 < *(int *)(lVar3 + 0x30)) {
          FUN_1000a25dc(param_1,lVar2,0,1);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (local_d0 & 0xffffffff));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000a27b8(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  while ((lVar1 = param_1 + (ulong)(param_2 - 1) * 0x200 + lVar2, *(long *)(lVar1 + 0xf0) != 0 ||
         (*(long *)(lVar1 + 0xf8) != 0))) {
    lVar2 = lVar2 + 0x10;
    if (lVar2 == 0x200) {
      return;
    }
  }
  lVar2 = param_1 + (ulong)(param_2 - 1) * 0x200 + lVar2;
  *(undefined8 *)(lVar2 + 0xf0) = param_3;
  *(undefined8 *)(lVar2 + 0xf8) = param_4;
  FUN_10009d988(param_3,1);
  FUN_10009d988(param_4,1);
  return;
}




void FUN_1000a282c(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




long * FUN_1000a2858(long *param_1)

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
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  code *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  puVar18 = (undefined8 *)FUN_100655644();
  *puVar18 = &PTR_thunk_FUN_10004eb90_101451538;
  puVar18 = puVar18 + 0x2b;
  FUN_100269de4(puVar18);
  plVar1 = param_1 + 0x44;
  FUN_1006421a8(plVar1);
  param_1[0x44] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x55;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x73;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x91;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xaf;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0xd5;
  FUN_1006421a8(plVar6);
  param_1[0xd5] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0xe6;
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x10c;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x132;
  thunk_FUN_100181304(plVar9,1);
  plVar10 = param_1 + 0x3e9;
  thunk_FUN_100181304(plVar10,1);
  plVar11 = param_1 + 0x6a0;
  FUN_1006421a8(plVar11);
  param_1[0x6a0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64();
  lVar20 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar20 + 0x36b8);
    lVar20 = lVar20 + 0xf0;
  } while (lVar20 != 0x4b0);
  plVar12 = param_1 + 0x76d;
  FUN_1006421a8(plVar12);
  param_1[0x76d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar13 = param_1 + 0x77e;
  thunk_FUN_100650e64(plVar13);
  param_1[0x7a4] = 0;
  *(undefined4 *)(param_1 + 0x7a5) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0x7a6);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)((long)param_1 + 0x3d44) = 0;
  *(undefined4 *)((long)param_1 + 0x3d4c) = 5;
  (**(code **)(*param_1 + 0x78))(param_1,puVar18,1);
  FUN_100642bd8(puVar18,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar9,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar1,plVar11,1);
  FUN_100642bd8(plVar11,param_1 + 0x6b1,1);
  FUN_100642bd8(plVar1,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  lVar20 = 0;
  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x10;
  *(uint *)((long)param_1 + 0x50c) = *(uint *)((long)param_1 + 0x50c) | 0x10;
  do {
    lVar14 = (long)param_1 + lVar20 + 0x36b8;
    FUN_100642bd8(plVar11,lVar14,1);
    FUN_100652cac(lVar14,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_surrender_pending");
    lVar20 = lVar20 + 0xf0;
  } while (lVar20 != 0x4b0);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"surrender_box_top");
  uVar15 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar15 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x32c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6b00;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x41c);
  if ((uVar15 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x41c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6b00;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"surrender_box_top");
  uVar15 = *(uint *)((long)param_1 + 0x50c);
  if ((uVar15 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x50c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6b00;
    FUN_1000200a0(plVar4);
  }
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) | 2;
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  uVar19 = FUN_1004e0150("HUD_SURRENDER_VOTE_EXPLAIN",0);
  FUN_1006513c0(plVar7,uVar19);
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_1004e3120(&local_a0,"15");
  FUN_1006513c0(plVar5,&local_a0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  uVar19 = FUN_1004e0150("HUD_SURRENDER_HOLD_TO_CONFIRM",0);
  FUN_1006513c0(plVar8,uVar19);
  if ((*(uint *)((long)param_1 + 0x8e4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x8e4) = *(uint *)((long)param_1 + 0x8e4) & 0xffff807f;
    FUN_1000200a0(plVar8);
  }
  uVar15 = *(uint *)((long)param_1 + 0x3584);
  *(uint *)((long)param_1 + 0x3584) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3584) = uVar15 & 0xffff807b;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(param_1 + 0x6b1,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x3bec) = *(uint *)((long)param_1 + 0x3bec) & 0xfffffffb;
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  local_a0._0_4_ = 0xffc0c0c0;
  FUN_1001816d4(0,0x42600000,0x42600000,plVar10,2,&DAT_101d91650,&local_a0,&DAT_101dc1cb8,0);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xffc0c0c0);
  FUN_1001816d4(0,0x42600000,0x42600000,plVar9,1,&DAT_101d91650,&local_a0,&DAT_101dc1cb8,0);
  if ((*(float *)(param_1 + 0x4fb) != 0.41379312) ||
     (*(float *)((long)param_1 + 0x27dc) != 0.41379312)) {
    param_1[0x4fb] = 0x3ed3dcb13ed3dcb1;
    FUN_1000200a0(param_1 + 0x4f2);
  }
  FUN_100181bd0(0,plVar10,&DAT_10115a164);
  FUN_100181bd0(0,plVar9,&DAT_10115a164);
  uVar16 = DAT_101dbd460;
  local_78 = DAT_101dbd460;
  local_a0 = FUN_1000a2f5c;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x3ea,&local_a0);
  uVar17 = DAT_101dbd48c;
  local_78 = DAT_101dbd48c;
  local_a0 = FUN_1000a2f5c;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x3ea,&local_a0);
  local_78 = uVar16;
  local_a0 = FUN_1000a2f5c;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x133,&local_a0);
  local_78 = uVar17;
  local_a0 = FUN_1000a2f5c;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x133,&local_a0);
  local_78 = uVar16;
  local_a0 = thunk_FUN_1000a42c8;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x74,&local_a0);
  local_78 = uVar17;
  local_a0 = thunk_FUN_1000a42c8;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x74,&local_a0);
  local_78 = uVar16;
  local_a0 = thunk_FUN_1000a42c8;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x92,&local_a0);
  local_78 = uVar17;
  local_a0 = thunk_FUN_1000a42c8;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x92,&local_a0);
  return param_1;
}




void FUN_1000a2f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000a427c(param_1,param_4,param_5);
  return;
}




void thunk_FUN_1000a42c8(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(param_1 + 0x3d48) != 0) &&
      (uVar1 = FUN_100642bc8(param_1 + 0x990), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_100642bc8(param_1 + 0x1f48), (uVar1 & 1) == 0)) {
    FUN_1000a34e0(param_1);
    return;
  }
  return;
}




long * thunk_FUN_1000a2858(long *param_1)

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
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar18 = (undefined8 *)FUN_100655644();
  *puVar18 = &PTR_thunk_FUN_10004eb90_101451538;
  puVar18 = puVar18 + 0x2b;
  FUN_100269de4(puVar18);
  plVar1 = param_1 + 0x44;
  FUN_1006421a8(plVar1);
  param_1[0x44] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x55;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x73;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x91;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0xaf;
  thunk_FUN_100650e64();
  plVar6 = param_1 + 0xd5;
  FUN_1006421a8(plVar6);
  param_1[0xd5] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0xe6;
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x10c;
  thunk_FUN_100650e64();
  plVar9 = param_1 + 0x132;
  thunk_FUN_100181304(plVar9,1);
  plVar10 = param_1 + 0x3e9;
  thunk_FUN_100181304(plVar10,1);
  plVar11 = param_1 + 0x6a0;
  FUN_1006421a8(plVar11);
  param_1[0x6a0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64();
  lVar20 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar20 + 0x36b8);
    lVar20 = lVar20 + 0xf0;
  } while (lVar20 != 0x4b0);
  plVar12 = param_1 + 0x76d;
  FUN_1006421a8(plVar12);
  param_1[0x76d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar13 = param_1 + 0x77e;
  thunk_FUN_100650e64(plVar13);
  param_1[0x7a4] = 0;
  *(undefined4 *)(param_1 + 0x7a5) = DAT_101dc0b88;
  FUN_1004e313c(param_1 + 0x7a6);
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)((long)param_1 + 0x3d44) = 0;
  *(undefined4 *)((long)param_1 + 0x3d4c) = 5;
  (**(code **)(*param_1 + 0x78))(param_1,puVar18,1);
  FUN_100642bd8(puVar18,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar1,plVar5,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar9,1);
  FUN_100642bd8(plVar6,plVar10,1);
  FUN_100642bd8(plVar1,plVar11,1);
  FUN_100642bd8(plVar11,param_1 + 0x6b1,1);
  FUN_100642bd8(plVar1,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  lVar20 = 0;
  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 0x10;
  *(uint *)((long)param_1 + 0x50c) = *(uint *)((long)param_1 + 0x50c) | 0x10;
  do {
    lVar14 = (long)param_1 + lVar20 + 0x36b8;
    FUN_100642bd8(plVar11,lVar14,1);
    FUN_100652cac(lVar14,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_surrender_pending");
    lVar20 = lVar20 + 0xf0;
  } while (lVar20 != 0x4b0);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"surrender_box_top");
  uVar15 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar15 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x32c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6b00;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar15 = *(uint *)((long)param_1 + 0x41c);
  if ((uVar15 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x41c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6b00;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"surrender_box_top");
  uVar15 = *(uint *)((long)param_1 + 0x50c);
  if ((uVar15 & 0x7f80) != 0x6b00) {
    *(uint *)((long)param_1 + 0x50c) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x6b00;
    FUN_1000200a0(plVar4);
  }
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) | 2;
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  uVar19 = FUN_1004e0150("HUD_SURRENDER_VOTE_EXPLAIN",0);
  FUN_1006513c0(plVar7,uVar19);
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_1004e3120(&pcStack_a0,"15");
  FUN_1006513c0(plVar5,&pcStack_a0);
  if (plStack_98 != (void *)0x0) {
    operator_delete__(plStack_98);
  }
  FUN_100651594(plVar8,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  uVar19 = FUN_1004e0150("HUD_SURRENDER_HOLD_TO_CONFIRM",0);
  FUN_1006513c0(plVar8,uVar19);
  if ((*(uint *)((long)param_1 + 0x8e4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x8e4) = *(uint *)((long)param_1 + 0x8e4) & 0xffff807f;
    FUN_1000200a0(plVar8);
  }
  uVar15 = *(uint *)((long)param_1 + 0x3584);
  *(uint *)((long)param_1 + 0x3584) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3584) = uVar15 & 0xffff807b;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(param_1 + 0x6b1,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x3bec) = *(uint *)((long)param_1 + 0x3bec) & 0xfffffffb;
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  pcStack_a0._0_4_ = 0xffc0c0c0;
  FUN_1001816d4(0,0x42600000,0x42600000,plVar10,2,&DAT_101d91650,&pcStack_a0,&DAT_101dc1cb8,0);
  pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,0xffc0c0c0);
  FUN_1001816d4(0,0x42600000,0x42600000,plVar9,1,&DAT_101d91650,&pcStack_a0,&DAT_101dc1cb8,0);
  if ((*(float *)(param_1 + 0x4fb) != 0.41379312) ||
     (*(float *)((long)param_1 + 0x27dc) != 0.41379312)) {
    param_1[0x4fb] = 0x3ed3dcb13ed3dcb1;
    FUN_1000200a0(param_1 + 0x4f2);
  }
  FUN_100181bd0(0,plVar10,&DAT_10115a164);
  FUN_100181bd0(0,plVar9,&DAT_10115a164);
  uVar16 = DAT_101dbd460;
  uStack_78 = DAT_101dbd460;
  pcStack_a0 = FUN_1000a2f5c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x3ea,&pcStack_a0);
  uVar17 = DAT_101dbd48c;
  uStack_78 = DAT_101dbd48c;
  pcStack_a0 = FUN_1000a2f5c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x3ea,&pcStack_a0);
  uStack_78 = uVar16;
  pcStack_a0 = FUN_1000a2f5c;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 1;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x133,&pcStack_a0);
  uStack_78 = uVar17;
  pcStack_a0 = FUN_1000a2f5c;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 1;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x133,&pcStack_a0);
  uStack_78 = uVar16;
  pcStack_a0 = thunk_FUN_1000a42c8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x74,&pcStack_a0);
  uStack_78 = uVar17;
  pcStack_a0 = thunk_FUN_1000a42c8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x74,&pcStack_a0);
  uStack_78 = uVar16;
  pcStack_a0 = thunk_FUN_1000a42c8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x92,&pcStack_a0);
  uStack_78 = uVar17;
  pcStack_a0 = thunk_FUN_1000a42c8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x92,&pcStack_a0);
  return param_1;
}




void FUN_1000a2f70(long param_1,long param_2)

{
  *(long *)(param_1 + 0x3d20) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x3d28) = *(undefined4 *)(param_2 + 0x30);
  FUN_1000a2f84();
  return;
}




void FUN_1000a2f84(long *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  long lVar9;
  undefined1 *local_68;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 0x34) == 1.5) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x1a4)))) {
    bVar1 = *(float *)((long)param_1 + 0x1a4) == 1.5;
  }
  if (!bVar1) {
    lVar9 = NEON_fmov(0x3fc00000,4);
    param_1[0x34] = lVar9;
    FUN_1000200a0(param_1 + 0x2b);
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x4c) == -153.0) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x264)))) {
    bVar1 = *(float *)((long)param_1 + 0x264) == -280.0;
  }
  if (!bVar1) {
    param_1[0x4c] = -0x3c73ffff3ce70000;
    FUN_1000200a0(param_1 + 0x44);
  }
  bVar1 = false;
  if ((*(float *)((long)param_1 + 0x2ec) == 0.0) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x5d)))) {
    bVar1 = *(float *)(param_1 + 0x5d) == 0.0;
  }
  if (!bVar1) {
    param_1[0x5d] = 0;
    FUN_1000200a0(param_1 + 0x55);
  }
  local_68 = (undefined1 *)0x3f80000000000000;
  (**(code **)(param_1[0x55] + 0x28))(param_1 + 0x55,&local_68);
  if ((*(float *)(param_1 + 0x7b) != 2.0) || (*(float *)((long)param_1 + 0x3dc) != 0.0)) {
    param_1[0x7b] = 0x40000000;
    FUN_1000200a0(param_1 + 0x73);
  }
  FUN_10064e47c(0x43970000,0x438c0000,param_1 + 0x73);
  if ((*(float *)(param_1 + 0x99) != 0.0) || (*(float *)((long)param_1 + 0x4cc) != 280.0)) {
    param_1[0x99] = 0x438c000000000000;
    FUN_1000200a0(param_1 + 0x91);
  }
  plVar6 = param_1 + 0xe6;
  if ((*(float *)(param_1 + 0xee) != 153.0) || (*(float *)((long)param_1 + 0x774) != 58.0)) {
    param_1[0xee] = 0x4268000043190000;
    FUN_1000200a0(plVar6);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0xe6] + 0x28))(plVar6,&local_68);
  FUN_100651708(0x43840000,plVar6,1);
  FUN_100651700(plVar6,3);
  plVar6 = param_1 + 0x10c;
  if ((*(float *)(param_1 + 0x114) != 153.0) || (*(float *)((long)param_1 + 0x8a4) != 58.0)) {
    param_1[0x114] = 0x4268000043190000;
    FUN_1000200a0(plVar6);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x10c] + 0x28))(plVar6,&local_68);
  FUN_100651708(0x43840000,plVar6,1);
  FUN_100651700(plVar6,3);
  plVar6 = param_1 + 0x6b1;
  if ((*(float *)(param_1 + 0x6b9) != 153.0) || (*(float *)((long)param_1 + 0x35cc) != 58.0)) {
    param_1[0x6b9] = 0x4268000043190000;
    FUN_1000200a0(plVar6);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x6b1] + 0x28))(plVar6,&local_68);
  FUN_100651708(0x43840000,plVar6,1);
  FUN_100651700(plVar6,3);
  plVar6 = param_1 + 0x77e;
  if ((*(float *)(param_1 + 0x786) != 153.0) || (*(float *)((long)param_1 + 0x3c34) != 58.0)) {
    param_1[0x786] = 0x4268000043190000;
    FUN_1000200a0(plVar6);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x77e] + 0x28))(plVar6,&local_68);
  FUN_100651708(0x43840000,plVar6,1);
  FUN_100651700(plVar6,3);
  if ((*(float *)(param_1 + 0xb7) != 153.0) || (*(float *)((long)param_1 + 0x5bc) != 140.0)) {
    param_1[0xb7] = 0x430c000043190000;
    FUN_1000200a0(param_1 + 0xaf);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0xaf] + 0x28))(param_1 + 0xaf,&local_68);
  if ((*(float *)(param_1 + 0x3f1) != 84.0) || (*(float *)((long)param_1 + 0x1f8c) != 214.0)) {
    param_1[0x3f1] = 0x4356000042a80000;
    FUN_1000200a0(param_1 + 0x3e9);
  }
  if ((*(float *)(param_1 + 0x13a) != 222.0) || (*(float *)((long)param_1 + 0x9d4) != 214.0)) {
    param_1[0x13a] = 0x43560000435e0000;
    FUN_1000200a0(param_1 + 0x132);
  }
  uVar2 = FUN_1003467f8();
  uVar3 = FUN_10034cf08(uVar2,1);
  *(int *)((long)param_1 + 0x3d4c) = (int)uVar3;
  uVar7 = 0;
  if ((int)uVar3 != 0) {
    plVar6 = param_1 + 0x6d7;
    do {
      fVar8 = 132.0 / (float)(int)uVar3 + 21.0 +
              ((float)(uVar7 & 0xffffffff) * 264.0) / (float)(int)uVar3;
      bVar1 = false;
      if ((*(float *)(plVar6 + 8) == fVar8) &&
         (bVar1 = false, !NAN(*(float *)((long)plVar6 + 0x44)))) {
        bVar1 = *(float *)((long)plVar6 + 0x44) == 214.0;
      }
      if (!bVar1) {
        *(float *)(plVar6 + 8) = fVar8;
        *(undefined4 *)((long)plVar6 + 0x44) = 0x43560000;
        FUN_1000200a0(plVar6);
      }
      local_68 = &DAT_3f0000003f000000;
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_68);
      uVar7 = uVar7 + 1;
      uVar3 = (ulong)*(uint *)((long)param_1 + 0x3d4c);
      plVar6 = plVar6 + 0x1e;
    } while (uVar7 < uVar3);
    if (4 < (uint)uVar7) goto LAB_1000a3474;
  }
  iVar5 = (int)uVar7 + -5;
  puVar4 = (uint *)((long)param_1 + uVar7 * 0xf0 + 0x373c);
  do {
    *puVar4 = *puVar4 & 0xfffffffb;
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0x3c;
  } while (bVar1);
LAB_1000a3474:
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_1000a34a4(long param_1,int param_2)

{
  FUN_100269e20(param_1 + 0x158);
  if (param_2 != 0) {
    FUN_1000a34e0(param_1);
    return;
  }
  return;
}




void FUN_1000a34e0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x3d48) = 0;
  uVar1 = FUN_1000a4174(0x3eb33333,0,param_1,param_1 + 0x860,0);
  uVar1 = FUN_1000a4174(0x3eb33333,0x3eb33333,uVar1,param_1 + 0x730,1);
  uVar1 = FUN_1000a4174(0x3eb33333,0,uVar1,param_1 + 0x1f48,1);
  uVar1 = FUN_1000a4174(0x3eb33333,0,uVar1,param_1 + 0x990,1);
  *(uint *)(param_1 + 0x1fcc) = *(uint *)(param_1 + 0x1fcc) | 0x10;
  *(uint *)(param_1 + 0xa14) = *(uint *)(param_1 + 0xa14) | 0x10;
  uVar1 = FUN_1000a4174(0x3eb33333,0,uVar1,param_1 + 0x860,0);
  FUN_1000a4174(0x3eb33333,0x3eb33333,uVar1,param_1 + 0x730,1);
  return;
}




void FUN_1000a35b0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  
  if (0.0 <= *(float *)(param_1 + 0x3d40)) {
    FUN_1004e38ac(param_1 + 0x3d30,"%d");
    FUN_1006513c0(param_1 + 0x578,param_1 + 0x3d30);
    fVar7 = (float)FUN_1010a1cd4();
    *(float *)(param_1 + 0x3d40) = *(float *)(param_1 + 0x3d40) - fVar7;
  }
  else {
    lVar2 = FUN_1000bdb98();
    plVar3 = (long *)(lVar2 + 0x10);
    plVar4 = (long *)*plVar3;
    plVar5 = plVar3;
    if (plVar4 != (long *)0x0) {
      do {
        if (*(uint *)(plVar4 + 4) >= 0xe5d47eef) {
          plVar5 = plVar4;
        }
        plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0xe5d47eef];
      } while (plVar4 != (long *)0x0);
      if (((plVar5 != plVar3) && (*(uint *)(plVar5 + 4) < 0xe5d47ef0)) && ((int)plVar5[5] != 0)) {
        lVar2 = 0;
        uVar6 = 0;
        do {
          (*(code *)((undefined8 *)(plVar5[6] + lVar2))[1])(*(undefined8 *)(plVar5[6] + lVar2));
          uVar6 = uVar6 + 1;
          lVar2 = lVar2 + 0x10;
        } while (uVar6 < *(uint *)(plVar5 + 5));
      }
    }
  }
  if ((((*(byte *)(param_1 + 0x218) & 1) != 0) && (iVar1 = FUN_10109c6e4(), iVar1 != 0)) &&
     (iVar1 = FUN_10109c710(1), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x3d48) == 1) {
      FUN_1000a34e0(param_1);
      return;
    }
    FUN_1000a3708(param_1,0,param_1 + 0x1f48,param_1 + 0x990);
    return;
  }
  return;
}




void FUN_1000a3708(long param_1,int param_2,long param_3,long param_4)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined1 auStack_80 [32];
  
  iVar2 = *(int *)(param_1 + 0x3d48);
  if (iVar2 == 0) {
    uVar4 = FUN_1000a4174(0x3eb33333,0,param_1,param_1 + 0x730,0);
    uVar4 = FUN_1000a4174(0x3eb33333,0x3eb33333,uVar4,param_1 + 0x860,1);
    FUN_1000a4174(0x3eb33333,0,uVar4,param_4,0);
    *(uint *)(param_4 + 0x84) = *(uint *)(param_4 + 0x84) & 0xffffffef;
    uVar4 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_10063f0e8(0x3eb33333,uVar4);
    FUN_10063f130(uVar4,FUN_10001f160);
    uVar5 = FUN_100047714();
    FUN_10063fce0(0x3f800000);
    FUN_10063f0e8(0x3eb33333,uVar5);
    FUN_10063f130(uVar5,FUN_10001f160);
    lVar3 = DAT_101dbd2f8;
    uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar6 != 0xffff) {
      puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar1;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_10063f098(puVar1);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xffffffef;
    FUN_100642324(param_3);
    FUN_100642b7c(param_3,uVar4);
    uVar7 = 1;
    if (param_2 == 0) {
      uVar7 = 2;
    }
    *(undefined4 *)(param_1 + 0x3d48) = uVar7;
  }
  else {
    if (((param_2 == 0) && (iVar2 == 2)) || ((param_2 != 0 && (iVar2 == 1)))) {
      uVar4 = FUN_100644a94("EVENT_SELECT_SURRENDER");
      FUN_100644aec(auStack_80,uVar4,0);
      FUN_100644b24(auStack_80,param_2);
      param_1 = FUN_100644c34(param_1,auStack_80,1);
    }
    uVar4 = FUN_1000a4174(0x3eb33333,0,param_1,param_3,0);
    FUN_1000a4174(0x3eb33333,0,uVar4,param_4,0);
  }
  return;
}




void FUN_1000a3938(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000a3940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_1000a3948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1000a34e0();
    return;
  }
  return;
}




void FUN_1000a3954(long param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float local_a8 [2];
  void *local_a0;
  float local_98 [2];
  void *local_90;
  float local_88;
  int local_84;
  
  fVar14 = *(float *)(param_2 + 0x98);
  FUN_1000320fc();
  fVar12 = (float)FUN_100032244();
  fVar14 = fVar14 - fVar12;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  *(float *)(param_1 + 0x3d40) = fVar14;
  iVar2 = FUN_10034cb58();
  if (iVar2 == 0) {
    plVar4 = *(long **)(param_1 + 0x3d20);
    if (plVar4 == (long *)0x0) {
      lVar10 = 0;
    }
    else if (*(int *)(param_1 + 0x3d28) == (int)plVar4[1]) {
      lVar10 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      lVar10 = 0;
      *(undefined8 *)(param_1 + 0x3d20) = 0;
      *(undefined4 *)(param_1 + 0x3d28) = DAT_101dc0b88;
    }
    uVar3 = FUN_100345bbc(lVar10);
    if (uVar3 == *param_2) {
      lVar11 = 0;
      lVar6 = param_1 + 0x36b8;
      uVar15 = NEON_fmov(0x3f800000,4);
      do {
        if (*(int *)(param_2 + lVar11 * 4 + 8) != -1) {
          switch(param_2[lVar11 + 0x48]) {
          case 0:
            pcVar5 = "hud_surrender_pending";
            break;
          case 1:
          case 3:
            pcVar5 = "capsule_button_check";
            break;
          case 2:
            FUN_100652cdc(lVar6,"capsule_button_x");
            pfVar7 = (float *)(lVar6 + 0x48);
            lVar8 = lVar6;
            uVar13 = 0x3ed3dcb13ed3dcb1;
            if ((*pfVar7 == 0.41379312) && (*(float *)(lVar6 + 0x4c) == 0.41379312))
            goto switchD_1000a3c68_default;
            goto LAB_1000a3ca8;
          default:
            goto switchD_1000a3c68_default;
          }
          FUN_100652cdc(lVar6,pcVar5);
          bVar1 = false;
          if ((*(float *)(lVar6 + 0x48) == 1.0) && (bVar1 = false, !NAN(*(float *)(lVar6 + 0x4c))))
          {
            bVar1 = *(float *)(lVar6 + 0x4c) == 1.0;
          }
          if (!bVar1) {
            lVar8 = param_1 + lVar11 * 0xf0;
            pfVar7 = (float *)(lVar8 + 0x3700);
            lVar8 = lVar8 + 0x36b8;
            uVar13 = uVar15;
LAB_1000a3ca8:
            *(undefined8 *)pfVar7 = uVar13;
            FUN_1000200a0(lVar8);
          }
        }
switchD_1000a3c68_default:
        lVar11 = lVar11 + 1;
        lVar6 = lVar6 + 0xf0;
      } while (lVar11 != 5);
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 1) {
        FUN_1004e313c(local_98);
        FUN_1004e38ac(local_98,"%d");
        uVar15 = FUN_1004e0150("HUD_SURRENDER_NEED_VOTES",0);
        lVar11 = param_1 + 0x3d30;
        FUN_1000153b4(lVar11,uVar15);
        FUN_1004e3120(local_a8,"[VOTES]");
        FUN_1004e3bc4(lVar11,0,local_a8,local_98);
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
        }
        FUN_1006513c0(param_1 + 0x3588,lVar11);
        uVar9 = 0;
        bVar1 = true;
        do {
          if ((*(int *)(param_2 + uVar9 * 4 + 8) == *(int *)(lVar10 + 0x260)) &&
             (param_2[uVar9 + 0x48] != 0)) break;
          bVar1 = uVar9 < 4;
          uVar9 = uVar9 + 1;
        } while (uVar9 != 5);
        FUN_1000a3f1c(param_1,bVar1);
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
        }
        goto LAB_1000a3eec;
      }
      if (iVar2 == 2) {
        FUN_1000a3f1c(param_1,1);
        lVar10 = param_1 + 0x3588;
        pcVar5 = "HUD_SURRENDER_PASSED";
      }
      else {
        if (iVar2 != 3) goto LAB_1000a3eec;
        FUN_1000a3f1c(param_1,1);
        lVar10 = param_1 + 0x3588;
        pcVar5 = "HUD_SURRENDER_REFUSED";
      }
    }
    else {
      if (*(int *)(param_2 + 4) != 2) goto LAB_1000a3eec;
      FUN_1000a3f1c(param_1,2);
      lVar10 = param_1 + 0x3bf0;
      pcVar5 = "HUD_SURRENDER_ENEMY_SURRENDERED";
    }
    uVar15 = FUN_1004e0150(pcVar5,0);
    FUN_1006513c0(lVar10,uVar15);
  }
  else if (*(int *)(param_2 + 4) == 2) {
    lVar10 = 0;
    lVar11 = param_1 + 0x36b8;
    uVar15 = NEON_fmov(0x3f800000,4);
    do {
      switch(param_2[lVar10 + 0x48]) {
      case 0:
        pcVar5 = "hud_surrender_pending";
        break;
      case 1:
      case 3:
        pcVar5 = "capsule_button_check";
        break;
      case 2:
        FUN_100652cdc(lVar11,"capsule_button_x");
        pfVar7 = (float *)(lVar11 + 0x48);
        lVar6 = lVar11;
        uVar13 = 0x3ed3dcb13ed3dcb1;
        if ((*pfVar7 == 0.41379312) && (*(float *)(lVar11 + 0x4c) == 0.41379312))
        goto switchD_1000a3a10_default;
        goto LAB_1000a3a50;
      default:
        goto switchD_1000a3a10_default;
      }
      FUN_100652cdc(lVar11,pcVar5);
      bVar1 = false;
      if ((*(float *)(lVar11 + 0x48) == 1.0) && (bVar1 = false, !NAN(*(float *)(lVar11 + 0x4c)))) {
        bVar1 = *(float *)(lVar11 + 0x4c) == 1.0;
      }
      if (!bVar1) {
        lVar6 = param_1 + lVar10 * 0xf0;
        pfVar7 = (float *)(lVar6 + 0x3700);
        lVar6 = lVar6 + 0x36b8;
        uVar13 = uVar15;
LAB_1000a3a50:
        *(undefined8 *)pfVar7 = uVar13;
        FUN_1000200a0(lVar6);
      }
switchD_1000a3a10_default:
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0xf0;
    } while (lVar10 != 5);
    FUN_100641464(local_98,local_a8);
    iVar2 = FUN_100126c88();
    fVar12 = 245.76;
    if (iVar2 == 0) {
      fVar12 = 192.0;
    }
    fVar14 = 422.4;
    if (iVar2 == 0) {
      fVar14 = 330.0;
    }
    local_88 = 1.0;
    local_84 = 0;
    FUN_10012e9ac(&local_84,0,&local_88,0,0,0,0,0);
    FUN_1003467f8();
    iVar2 = FUN_10034ced0();
    fVar16 = local_88 * fVar14;
    if (iVar2 == 0 && local_84 != 1) {
      fVar16 = fVar14;
    }
    if (*param_2 == 1) {
      if (*(int *)(param_2 + 4) == 2) {
        FUN_1000a3f1c(param_1,1);
        uVar15 = FUN_1004e0150("HUD_SURRENDER_PASSED",0);
        FUN_1006513c0(param_1 + 0x3588,uVar15);
      }
    }
    else {
      FUN_1000a3f1c(param_1,2);
      uVar15 = FUN_1004e0150("HUD_SURRENDER_ENEMY_SURRENDERED",0);
      FUN_1006513c0(param_1 + 0x3bf0,uVar15);
      fVar12 = local_98[0] - fVar12;
    }
    local_a8[0] = local_a8[0] - fVar16;
    bVar1 = false;
    if ((*(float *)(param_1 + 0x198) == fVar12) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x19c)) && !NAN(local_a8[0]))) {
      bVar1 = *(float *)(param_1 + 0x19c) == local_a8[0];
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x198) = fVar12;
      *(float *)(param_1 + 0x19c) = local_a8[0];
      FUN_1000200a0(param_1 + 0x158);
    }
  }
LAB_1000a3eec:
  FUN_1006557ec(param_1);
  return;
}




void FUN_1000a3f1c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (*(int *)(param_1 + 0x3d44) == param_2) {
    return;
  }
  if (param_2 == 0) {
    lVar10 = param_1 + 0x6a8;
    lVar9 = param_1 + 0x3500;
    lVar8 = param_1 + 0x3b68;
    *(uint *)(param_1 + 0x7b4) = *(uint *)(param_1 + 0x7b4) | 4;
    FUN_1001b4c0c(param_1 + 0x1f48,1);
    FUN_1001b4c0c(param_1 + 0x990,1);
    *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) | 0x10;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) | 0x10;
    if ((~*(uint *)(param_1 + 0x1dc) & 0x7f80) == 0) goto LAB_1000a4040;
    uVar7 = *(uint *)(param_1 + 0x1dc) | 0x7f80;
  }
  else {
    bVar4 = param_2 == 1;
    lVar1 = 0;
    if (bVar4) {
      lVar1 = param_1 + 0x3b68;
    }
    lVar2 = 0;
    if (bVar4) {
      lVar2 = param_1 + 0x6a8;
    }
    lVar3 = 0;
    if (bVar4) {
      lVar3 = param_1 + 0x3500;
    }
    lVar10 = param_1 + 0x3b68;
    lVar9 = param_1 + 0x3500;
    lVar8 = param_1 + 0x6a8;
    if (param_2 != 2) {
      lVar10 = lVar3;
      lVar9 = lVar2;
      lVar8 = lVar1;
    }
    *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) & 0xffffffef;
    *(uint *)(param_1 + 0x50c) = *(uint *)(param_1 + 0x50c) & 0xffffffef;
    uVar7 = *(uint *)(param_1 + 0x1dc);
    if ((uVar7 & 0x7f80) == 0x5900) goto LAB_1000a4040;
    uVar7 = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5900;
  }
  *(uint *)(param_1 + 0x1dc) = uVar7;
  FUN_1000200a0(param_1 + 0x158);
LAB_1000a4040:
  uVar5 = FUN_10001f55c();
  FUN_10063f0e8(0x3f000000);
  uVar6 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3f000000,uVar6);
  FUN_10063f130(uVar6,FUN_10001f160);
  uVar7 = *(uint *)(lVar10 + 0x84);
  if ((uVar7 & 0x7f80) != 0) {
    *(uint *)(lVar10 + 0x84) = uVar7 & 0xffff807f;
    FUN_1000200a0(lVar10);
    uVar7 = *(uint *)(lVar10 + 0x84);
  }
  *(uint *)(lVar10 + 0x84) = uVar7 | 4;
  FUN_100642324(lVar10);
  FUN_100642b7c(lVar10,uVar5);
  uVar5 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3f000000,uVar5);
  FUN_10063f130(uVar5,FUN_10001f160);
  FUN_100047300();
  FUN_100642324(lVar9);
  FUN_100642b7c(lVar9,uVar5);
  uVar5 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3f000000,uVar5);
  FUN_10063f130(uVar5,FUN_10001f160);
  FUN_100047300();
  FUN_100642324(lVar8);
  FUN_100642b7c(lVar8,uVar5);
  *(int *)(param_1 + 0x3d44) = param_2;
  return;
}




void FUN_1000a4174(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(param_2);
  uVar2 = FUN_100047714();
  if (param_5 == 0) {
    FUN_10063fce0(0,uVar2);
    FUN_10063f0e8(param_1,uVar2);
    FUN_10063f130(uVar2,FUN_10001f160);
    FUN_100047300();
    FUN_100642324(param_4);
  }
  else {
    FUN_10063fce0(0x3f800000,uVar2);
    FUN_10063f0e8(param_1,uVar2);
    FUN_10063f130(uVar2,FUN_10001f160);
    uVar3 = *(uint *)(param_4 + 0x84);
    if ((uVar3 & 0x7f80) != 0) {
      *(uint *)(param_4 + 0x84) = uVar3 & 0xffff807f;
      FUN_1000200a0(param_4);
      uVar3 = *(uint *)(param_4 + 0x84);
    }
    *(uint *)(param_4 + 0x84) = uVar3 | 4;
    FUN_100642324(param_4);
  }
  FUN_100642b7c(param_4,uVar1);
  return;
}




void FUN_1000a427c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar1 = param_1 + 0x1f48;
    lVar2 = param_1 + 0x990;
  }
  else {
    lVar1 = param_1 + 0x990;
    lVar2 = param_1 + 0x1f48;
  }
  FUN_1000a3708(param_1,param_3 != 0,lVar1,lVar2);
  FUN_100644b08(param_2);
  return;
}




void FUN_1000a42c8(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(param_1 + 0x3d48) != 0) &&
      (uVar1 = FUN_100642bc8(param_1 + 0x990), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_100642bc8(param_1 + 0x1f48), (uVar1 & 1) == 0)) {
    FUN_1000a34e0(param_1);
    return;
  }
  return;
}




void FUN_1000a431c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004eb90();
  operator_delete(pvVar1);
  return;
}




long * FUN_1000a4330(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1000a4554_101451690;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0xffffffff;
  *(undefined4 *)(puVar5 + 0x1a) = 4;
  *(undefined1 *)((long)puVar5 + 0xd4) = 0;
  puVar5[0x1b] = 0;
  puVar5 = puVar5 + 0x1c;
  FUN_1006421a8(puVar5);
  param_1[0x1c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x2d;
  FUN_1006421a8(plVar1);
  param_1[0x2d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001bd4e0(param_1 + 0x3e,1);
  plVar2 = param_1 + 0xd4;
  FUN_1006421a8(plVar2);
  param_1[0xd4] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0xe5);
  plVar3 = param_1 + 0x10b;
  FUN_10064fd54(plVar3,0);
  param_1[0x10b] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar4 = param_1 + 0x124;
  thunk_FUN_100652c08(plVar4);
  thunk_FUN_100650e64(param_1 + 0x142);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x3e,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0xe5,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,param_1 + 0x142,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_100652444(param_1 + 0x55,0,0,0,0,0,0,0,0,0,0,"white_background");
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"ability_lock");
  if ((*(float *)(param_1 + 0x12e) != 0.5) || (*(float *)((long)param_1 + 0x974) != 0.5)) {
    param_1[0x12e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  *(uint *)((long)param_1 + 0x9a4) = *(uint *)((long)param_1 + 0x9a4) & 0xfffffffb;
  return param_1;
}




void FUN_1000a4554(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000a4554_101451690;
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 8))();
    param_1[0x1b] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x142);
  param_1[0x124] = &PTR_FUN_1014a7108;
  param_1[0x13b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13e);
  FUN_10064e2bc(param_1 + 0x124);
  FUN_10064e2bc(param_1 + 0x10b);
  thunk_FUN_100651068(param_1 + 0xe5);
  FUN_10064221c(param_1 + 0xd4);
  param_1[0x3e] = &PTR_FUN_101464e50;
  param_1[0xa9] = &PTR_FUN_1014a6db0;
  param_1[0xc0] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xc3);
  FUN_10064e2bc(param_1 + 0xa9);
  param_1[0x7f] = &PTR_FUN_1014a6db0;
  param_1[0x96] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x99);
  FUN_10064e2bc(param_1 + 0x7f);
  param_1[0x55] = &PTR_FUN_1014a6db0;
  param_1[0x6c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x6f);
  FUN_10064e2bc(param_1 + 0x55);
  FUN_10064e2bc(param_1 + 0x3e);
  FUN_10064221c(param_1 + 0x2d);
  FUN_10064221c(param_1 + 0x1c);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000a4554(void)

{
  FUN_1000a4554();
  return;
}




void FUN_1000a4688(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000a4554();
  operator_delete(pvVar1);
  return;
}




void FUN_1000a469c(long param_1,long param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 200) = param_3;
  *(int *)(param_1 + 0xcc) = param_5;
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  *(long *)(param_1 + 0xc0) = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_1004649d8(param_2);
    if (iVar1 == 0) {
      lVar2 = 1;
      goto LAB_1000a46dc;
    }
    param_5 = *(int *)(param_1 + 0xcc);
  }
  lVar2 = (ulong)(param_5 == 0) << 1;
LAB_1000a46dc:
  FUN_1000a46ec(param_1,lVar2);
  return;
}




void FUN_1000a46ec(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 *local_68;
  void *local_60;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined1 auStack_48 [8];
  void *local_40;
  undefined4 local_34;
  
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  local_34 = 0xffc8c8c8;
  switch(param_2) {
  case 0:
    puVar1 = (undefined8 *)FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
    uVar3 = FUN_1004e0150(*puVar1,0);
    FUN_1006513c0(param_1 + 0x728,uVar3);
    lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
    if (*(int *)(lVar2 + 0x18) == 1) {
      local_34 = 0xffe19400;
    }
    else {
      lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
      if (*(int *)(lVar2 + 0x18) == 2) {
        local_34 = 0xffe550b2;
      }
      else {
        lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
        if (*(int *)(lVar2 + 0x18) == 3) {
          local_34 = 0xff005ae1;
        }
      }
    }
    FUN_1001bdb04(0x3f666666,param_1 + 0x1f0,&local_34);
    uVar3 = FUN_1004e0150("MENU_TALENTS_TALENT_LEVEL",0);
    thunk_FUN_1004e439c(auStack_48,uVar3);
    FUN_1004e313c(auStack_58);
    FUN_1003e0014(*(undefined8 *)(param_1 + 0xc0));
    FUN_1004e38ac(auStack_58,"%u");
    FUN_1004e3120(&local_68,"[VALUE]");
    FUN_1004e3bc4(auStack_48,0,&local_68,auStack_58);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    FUN_1006513c0(param_1 + 0xa10,auStack_48);
    FUN_100651460(param_1 + 0x728,&DAT_10115a168);
    FUN_100651460(param_1 + 0xa10,&DAT_10115a168);
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) & 0xfffffffb;
    lVar2 = *(long *)(param_1 + 0xd8);
    if (lVar2 != 0) {
      uVar3 = 1;
LAB_1000a4bcc:
      FUN_1002f8ad4(lVar2,uVar3);
    }
    goto LAB_1000a4bd0;
  case 1:
    uVar3 = FUN_1004e0150("MENU_TALENTS_TALENT_USED",0);
    FUN_1006513c0(param_1 + 0x728,uVar3);
    lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
    if (*(int *)(lVar2 + 0x18) == 1) {
      local_34 = 0xffe19400;
    }
    else {
      lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
      if (*(int *)(lVar2 + 0x18) == 2) {
        local_34 = 0xffe550b2;
      }
      else {
        lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
        if (*(int *)(lVar2 + 0x18) == 3) {
          local_34 = 0xff005ae1;
        }
      }
    }
    FUN_1001bdb04(0x3f666666,param_1 + 0x1f0,&local_34);
    uVar3 = FUN_1004e0150("MENU_TALENTS_TALENT_LEVEL",0);
    thunk_FUN_1004e439c(auStack_48,uVar3);
    FUN_1004e313c(auStack_58);
    FUN_1003e0014(*(undefined8 *)(param_1 + 0xc0));
    FUN_1004e38ac(auStack_58,"%u");
    FUN_1004e3120(&local_68,"[VALUE]");
    FUN_1004e3bc4(auStack_48,0,&local_68,auStack_58);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    FUN_1006513c0(param_1 + 0xa10,auStack_48);
    FUN_100651460(param_1 + 0x728,&DAT_10115a16c);
    FUN_100651460(param_1 + 0xa10,&DAT_10115a16c);
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) | 4;
    lVar2 = param_1 + 0x858;
    FUN_10064fc74(0,0x3f000000,0x41200000,&local_68);
    FUN_100650064(lVar2,&local_68);
    (**(code **)(*(long *)(param_1 + 0x858) + 0x90))(lVar2);
    FUN_10064ff6c(0x3f000000,lVar2,0);
    fVar4 = (float)*(undefined8 *)(param_1 + 0xb40) * 0.5;
    fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xb40) >> 0x20) * 0.85;
    if ((*(float *)(param_1 + 0x898) != fVar4) || (*(float *)(param_1 + 0x89c) != fVar5)) {
      *(ulong *)(param_1 + 0x898) = CONCAT44(fVar5,fVar4);
      FUN_1000200a0(lVar2);
    }
    local_68 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x858) + 0x28))(lVar2,&local_68);
    lVar2 = *(long *)(param_1 + 0xd8);
    if (lVar2 != 0) {
      uVar3 = 0;
      goto LAB_1000a4bcc;
    }
LAB_1000a4bd0:
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
    break;
  case 2:
    puVar1 = (undefined8 *)FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
    uVar3 = FUN_1004e0150(*puVar1,0);
    FUN_1006513c0(param_1 + 0x728,uVar3);
    lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
    if (*(int *)(lVar2 + 0x18) == 1) {
      local_34 = 0xffe19400;
    }
    else {
      lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
      if (*(int *)(lVar2 + 0x18) == 2) {
        local_34 = 0xffe550b2;
      }
      else {
        lVar2 = FUN_1003e000c(*(undefined8 *)(param_1 + 0xc0));
        if (*(int *)(lVar2 + 0x18) == 3) {
          local_34 = 0xff005ae1;
        }
      }
    }
    FUN_1001bdb04(0x3f666666,param_1 + 0x1f0,&local_34);
    uVar3 = FUN_1004e0150("MENU_TALENTS_LABEL_UNDISCOVERED",0);
    FUN_1006513c0(param_1 + 0xa10,uVar3);
    FUN_100651460(param_1 + 0x728,&DAT_10115a16c);
    FUN_100651460(param_1 + 0xa10,&DAT_10115a16c);
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) | 4;
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_1002f8ad4(*(long *)(param_1 + 0xd8),0);
    }
    break;
  case 3:
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0xff;
    uVar3 = FUN_1004e0150("TALENT_CHOOSER_NONE",0);
    FUN_1006513c0(param_1 + 0x728,uVar3);
    FUN_1001bdb04(0x3f666666,param_1 + 0x1f0,&local_34);
    uVar3 = FUN_1004e0150("TALENT_CHOOSER_NONE_DESCRIPTION",0);
    FUN_1006513c0(param_1 + 0xa10,uVar3);
  }
  FUN_1000a4ed0(param_1,0);
  return;
}




void FUN_1000a4c08(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 *local_48 [2];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0xb40),*(undefined4 *)(param_1 + 0xb44),param_1);
  fVar4 = *(float *)(param_1 + 0xb40);
  fVar5 = *(float *)(param_1 + 0xb44);
  fVar6 = fVar5 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x120) == fVar4 * 0.5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x124)) && !NAN(fVar6))) {
    bVar2 = *(float *)(param_1 + 0x124) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x120) = fVar4 * 0.5;
    *(float *)(param_1 + 0x124) = fVar6;
    FUN_1000200a0(param_1 + 0xe0);
    fVar4 = *(float *)(param_1 + 0xb40);
    fVar5 = *(float *)(param_1 + 0xb44);
  }
  fVar6 = fVar5 * -0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1a8) == fVar4 * -0.5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x1ac)) && !NAN(fVar6))) {
    bVar2 = *(float *)(param_1 + 0x1ac) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x1a8) = fVar4 * -0.5;
    *(float *)(param_1 + 0x1ac) = fVar6;
    FUN_1000200a0(param_1 + 0x168);
    fVar4 = *(float *)(param_1 + 0xb40);
    fVar5 = *(float *)(param_1 + 0xb44);
  }
  FUN_10064e47c(fVar4 + 80.0,fVar5 + 80.0,param_1 + 0x1f0);
  fVar4 = *(float *)(param_1 + 0xb40) * 0.5;
  fVar5 = *(float *)(param_1 + 0xb44);
  fVar6 = fVar5 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x230) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x234)) && !NAN(fVar6))) {
    bVar2 = *(float *)(param_1 + 0x234) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x230) = fVar4;
    *(float *)(param_1 + 0x234) = fVar6;
    FUN_1000200a0(param_1 + 0x1f0);
    fVar5 = *(float *)(param_1 + 0xb44);
    fVar4 = *(float *)(param_1 + 0xb40) * 0.5;
  }
  lVar1 = param_1 + 0x728;
  fVar5 = fVar5 * 0.15;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x768) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x76c)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_1 + 0x76c) == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x768) = fVar4;
    *(float *)(param_1 + 0x76c) = fVar5;
    FUN_1000200a0(lVar1);
  }
  local_48[0] = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x728) + 0x28))(lVar1,local_48);
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651700(lVar1,3);
  FUN_100651708(*(float *)(param_1 + 0xb40) * 0.85,lVar1,1);
  plVar3 = *(long **)(param_1 + 0xd8);
  if (plVar3 != (long *)0x0) {
    fVar4 = (float)*(undefined8 *)(param_1 + 0xb40) * 0.5;
    fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xb40) >> 0x20) * 0.5;
    if ((*(float *)(plVar3 + 8) != fVar4) || (*(float *)((long)plVar3 + 0x44) != fVar5)) {
      plVar3[8] = CONCAT44(fVar5,fVar4);
      FUN_1000200a0(plVar3);
    }
    local_48[0] = &DAT_3f0000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_48);
    fVar4 = *(float *)(param_1 + 0xb40) * 0.95;
    FUN_1002f8928(fVar4,fVar4,*(undefined8 *)(param_1 + 0xd8));
  }
  FUN_100651038(param_1 + 0xa10,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  plVar3 = (long *)(param_1 + 0x858);
  FUN_10064fc74(0,0x3f000000,0x41200000,local_48);
  FUN_100650064(plVar3,local_48);
  (**(code **)(*(long *)(param_1 + 0x858) + 0x90))(plVar3);
  FUN_10064ff6c(0x3f000000,plVar3,0);
  fVar4 = (float)*(undefined8 *)(param_1 + 0xb40) * 0.5;
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xb40) >> 0x20) * 0.85;
  if ((*(float *)(param_1 + 0x898) != fVar4) || (*(float *)(param_1 + 0x89c) != fVar5)) {
    *(ulong *)(param_1 + 0x898) = CONCAT44(fVar5,fVar4);
    FUN_1000200a0(plVar3);
  }
  local_48[0] = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,local_48);
  return;
}




void FUN_1000a4ed0(undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 local_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  *(char *)(param_3 + 0xd4) = (char)param_4;
  lVar1 = param_3 + 0x3f8;
  if (param_4 == 0) {
    pcVar12 = "build_talent_chooser_frame_off_bottom_corners";
    pcVar11 = "build_talent_chooser_frame_off_bottom_edge";
    pcVar10 = "build_talent_chooser_frame_off_bottom_corners";
    pcVar6 = "build_talent_chooser_frame_off_vertical_edges";
    pcVar9 = "build_talent_chooser_frame_off_vertical_edges";
    pcVar4 = "build_talent_chooser_frame_off_top_corners";
    pcVar5 = "build_talent_chooser_frame_off_top_edge";
  }
  else {
    pcVar12 = "build_talent_chooser_frame_on_bottom_corners";
    pcVar11 = "build_talent_chooser_frame_on_bottom_edge";
    pcVar10 = "build_talent_chooser_frame_on_bottom_corners";
    pcVar6 = "build_talent_chooser_frame_on_vertical_edges";
    pcVar9 = "build_talent_chooser_frame_on_vertical_edges";
    pcVar4 = "build_talent_chooser_frame_on_top_corners";
    pcVar5 = "build_talent_chooser_frame_on_top_edge";
  }
  FUN_100651f94(lVar1,pcVar4,0,0,0,pcVar5,0,0,0,pcVar4,1,pcVar6,0,0,0,pcVar9,1,pcVar10,0,pcVar11,0,
                pcVar12,1);
  uVar8 = FUN_100652390(lVar1,0);
  FUN_1006525c4((int)uVar8,0,uVar8,param_2,0,param_2,param_3 + 0x2a8);
  if (param_4 == 0) {
    FUN_1001bdb78(0x3ecccccd,param_3 + 0x1f0,&DAT_10115a164);
    uVar7 = 0x3f800000;
  }
  else {
    puVar3 = (uint *)FUN_1006525bc(lVar1);
    uVar2 = *puVar3;
    uStack_31 = (undefined1)(uVar2 >> 0x18);
    _local_34 = CONCAT12((char)(int)((float)(uVar2 >> 0x10 & 0xff) * 0.25),
                         CONCAT11((char)(int)((float)(uVar2 >> 8 & 0xff) * 0.25),
                                  (char)(int)((float)(uVar2 & 0xff) * 0.25)));
    FUN_1001bdb78(0x3f400000,param_3 + 0x1f0,&local_34);
    uVar7 = 0x3f866666;
  }
  uVar8 = FUN_100640db8(uVar7,uVar7,0x3e19999a,FUN_10001f160);
  FUN_100642324(param_3 + 0xe0);
  FUN_100642b14(param_3 + 0xe0,uVar8);
  return;
}




void FUN_1000a510c(long param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
  }
  else {
    FUN_1000a5154(param_1);
  }
  FUN_1000a525c(param_1);
  return;
}




void FUN_1000a5154(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  char *pcVar5;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_1[0x1b] == 0) && (param_1[0x18] != 0)) {
    pvVar3 = operator_new(0x610);
    lVar4 = thunk_FUN_1002f84e4(pvVar3,1);
    param_1[0x1b] = lVar4;
    FUN_100642bd8(param_1 + 0xd4,pvVar3,1);
    lVar4 = FUN_1003e000c(param_1[0x18]);
    FUN_1004d2698(auStack_a8,PTR_s_build___HUDPartsHero__s_png_10184e0b8);
    uVar1 = *(int *)(lVar4 + 0x18) - 1;
    if (uVar1 < 3) {
      pcVar5 = (&PTR_s_rare_101451b78)[(int)uVar1];
    }
    else {
      pcVar5 = "";
    }
    FUN_1002f8c30(param_1[0x1b],auStack_a8,*(undefined8 *)(lVar4 + 0x10),pcVar5);
    (**(code **)(*param_1 + 0x90))(param_1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




void FUN_1000a525c(long param_1)

{
  if (*(int *)(param_1 + 0xd0) - 3U < 2) {
    return;
  }
  FUN_1000a469c(param_1,*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200),
                *(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xcc));
  return;
}




long * FUN_1000a527c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 local_60 [2];
  void *local_58;
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_FUN_1014517d8;
  puVar2 = puVar2 + 0x11;
  thunk_FUN_100650e64(puVar2);
  plVar1 = param_2 + 0x37;
  thunk_FUN_100650e64(plVar1);
  param_2[0x5d] = DAT_101dc1cb8;
  (**(code **)(*param_2 + 0x78))(param_2,puVar2,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  FUN_100651038(puVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208);
  local_60[0] = 0xffc0c0c0;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,local_60);
  FUN_1004e313c(local_60);
  FUN_1000ee590(param_1,param_4,local_60,0);
  FUN_1006513c0(puVar2,local_60);
  FUN_1006513c0(plVar1,param_5);
  (**(code **)(*param_2 + 0xe8))(param_2);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return param_2;
}




undefined4 FUN_1000a53b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2e8);
}




void FUN_1000a53c4(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined4 uVar1;
  
  FUN_100651184(param_3 + 0x11);
  if (*(float *)((long)param_3 + 0x1fc) != param_2 + 2.0) {
    *(float *)((long)param_3 + 0x1fc) = param_2 + 2.0;
    FUN_1000200a0(param_3 + 0x37);
  }
  uVar1 = 0;
  FUN_10065179c((int)param_3[0x5d],0,0x3f800000,param_3 + 0x11);
  FUN_100651708((int)param_3[0x5d],param_3 + 0x37,1);
  (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  *(undefined4 *)((long)param_3 + 0x2ec) = uVar1;
  return;
}




long FUN_1000a5460(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100269da8();
  *puVar3 = &PTR_thunk_FUN_1000a5a94_1014518d8;
  FUN_10064e264(puVar3 + 0x19);
  FUN_10064e264(param_1 + 0x180);
  FUN_100269de4(param_1 + 0x238);
  thunk_FUN_1000dee58(param_1 + 0x300);
  FUN_1006421a8(param_1 + 0x688);
  *(undefined ***)(param_1 + 0x688) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x710);
  thunk_FUN_1006543ec(param_1 + 0x840);
  FUN_10053077c(param_1 + 0x9e0,0);
  FUN_10064fd54(param_1 + 0xf18,0);
  *(undefined ***)(param_1 + 0xf18) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  FUN_1006421a8(param_1 + 0xff0);
  *(undefined ***)(param_1 + 0xff0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x1078);
  thunk_FUN_100652c08(param_1 + 0x1168);
  thunk_FUN_100652c08(param_1 + 0x1258);
  thunk_FUN_100652c08(param_1 + 0x1348);
  FUN_1006421a8(param_1 + 0x1438);
  *(undefined ***)(param_1 + 0x1438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x14c0);
  FUN_10053077c(param_1 + 0x1660,0);
  thunk_FUN_100650e64(param_1 + 0x1b98);
  FUN_10064fd54(param_1 + 0x1cc8,1);
  *(undefined ***)(param_1 + 0x1cc8) = &PTR_thunk_FUN_10064e2bc_101451a40;
  *(undefined8 *)(param_1 + 0x1d98) = 0;
  *(undefined8 *)(param_1 + 0x1d90) = 0;
  thunk_FUN_100650e64(param_1 + 0x1da0);
  thunk_FUN_100181304(param_1 + 0x1ed0,1);
  *(undefined8 *)(param_1 + 0x3488) = 0;
  *(undefined4 *)(param_1 + 0x3490) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x3498) = 0xffffffff;
  uVar1 = FUN_1004d2524("HUD_TalentSelector");
  uVar2 = FUN_100015208("HUD_TalentSelector",uVar1,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_1000a5600(param_1);
  return param_1;
}




void FUN_1000a5600(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x47,1);
  FUN_100642bd8(param_1 + 0x47,param_1 + 0x60,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x30,1);
  plVar1 = param_1 + 0xd1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x108;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x13c;
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_1005308f8(plVar3,param_1 + 0x1e3,1);
  plVar4 = param_1 + 0x1fe;
  FUN_100642bd8(plVar1,plVar4,1);
  plVar5 = param_1 + 0x20f;
  FUN_100642bd8(plVar4,plVar5,1);
  plVar6 = param_1 + 0x22d;
  FUN_100642bd8(plVar4,plVar6,1);
  plVar7 = param_1 + 0x24b;
  FUN_100642bd8(plVar4,plVar7,1);
  plVar8 = param_1 + 0x269;
  FUN_100642bd8(plVar4,plVar8,1);
  plVar1 = param_1 + 0x287;
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x298,1);
  plVar4 = param_1 + 0x2cc;
  FUN_100642bd8(param_1 + 0x298,plVar4,1);
  FUN_1005308f8(plVar4,param_1 + 0x373,1);
  FUN_1005308f8(plVar4,param_1 + 0x3b4,1);
  FUN_1005308f8(plVar4,param_1 + 0x399,1);
  FUN_100642bd8(plVar1,param_1 + 0x3da,1);
  plVar1 = param_1 + 0xe2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 0x10;
  FUN_100651038(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290);
  uVar10 = FUN_1004e0150("HUD_TALENT_SELECTOR_TITLE",0);
  FUN_1006513c0(plVar1,uVar10);
  *(uint *)((long)param_1 + 0x794) = *(uint *)((long)param_1 + 0x794) | 0x10;
  FUN_100654488(plVar2,1);
  FUN_100530adc(plVar3,1,0);
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_horizontal");
  *(byte *)(param_1 + 0x22a) = *(byte *)(param_1 + 0x22a) | 1;
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x10fc);
  if ((uVar9 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x10fc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x5900;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  *(byte *)(param_1 + 0x266) = *(byte *)(param_1 + 0x266) | 2;
  uVar9 = *(uint *)((long)param_1 + 0x12dc);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x12dc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_1000200a0(plVar7);
  }
  uVar9 = *(uint *)((long)param_1 + 0x13cc);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x13cc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_1000200a0(plVar8);
  }
  *(uint *)((long)param_1 + 0x16e4) = *(uint *)((long)param_1 + 0x16e4) & 0xfffffffb;
  uVar9 = *(uint *)((long)param_1 + 0x1c1c);
  if ((uVar9 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c1c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
    FUN_1000200a0(param_1 + 0x373);
  }
  uVar9 = *(uint *)((long)param_1 + 0x1e24);
  if ((uVar9 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1e24) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x6600;
    FUN_1000200a0(param_1 + 0x3b4);
  }
  uVar10 = FUN_1004e0150("HUD_PATH_SELECTOR_SELECT",0);
  FUN_1001816d4(0x42800000,0,0x44480000,param_1 + 0x3da,0,uVar10,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1000a6e28;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x3db,&local_90);
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




long thunk_FUN_1000a5460(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100269da8();
  *puVar3 = &PTR_thunk_FUN_1000a5a94_1014518d8;
  FUN_10064e264(puVar3 + 0x19);
  FUN_10064e264(param_1 + 0x180);
  FUN_100269de4(param_1 + 0x238);
  thunk_FUN_1000dee58(param_1 + 0x300);
  FUN_1006421a8(param_1 + 0x688);
  *(undefined ***)(param_1 + 0x688) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x710);
  thunk_FUN_1006543ec(param_1 + 0x840);
  FUN_10053077c(param_1 + 0x9e0,0);
  FUN_10064fd54(param_1 + 0xf18,0);
  *(undefined ***)(param_1 + 0xf18) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  *(undefined8 *)(param_1 + 0xfe8) = 0;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  FUN_1006421a8(param_1 + 0xff0);
  *(undefined ***)(param_1 + 0xff0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x1078);
  thunk_FUN_100652c08(param_1 + 0x1168);
  thunk_FUN_100652c08(param_1 + 0x1258);
  thunk_FUN_100652c08(param_1 + 0x1348);
  FUN_1006421a8(param_1 + 0x1438);
  *(undefined ***)(param_1 + 0x1438) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x14c0);
  FUN_10053077c(param_1 + 0x1660,0);
  thunk_FUN_100650e64(param_1 + 0x1b98);
  FUN_10064fd54(param_1 + 0x1cc8,1);
  *(undefined ***)(param_1 + 0x1cc8) = &PTR_thunk_FUN_10064e2bc_101451a40;
  *(undefined8 *)(param_1 + 0x1d98) = 0;
  *(undefined8 *)(param_1 + 0x1d90) = 0;
  thunk_FUN_100650e64(param_1 + 0x1da0);
  thunk_FUN_100181304(param_1 + 0x1ed0,1);
  *(undefined8 *)(param_1 + 0x3488) = 0;
  *(undefined4 *)(param_1 + 0x3490) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x3498) = 0xffffffff;
  uVar1 = FUN_1004d2524("HUD_TalentSelector");
  uVar2 = FUN_100015208("HUD_TalentSelector",uVar1,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_1000a5600(param_1);
  return param_1;
}




void FUN_1000a5a94(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1000a5a94_1014518d8;
  FUN_1000a5ce8();
  uVar2 = *(uint *)(param_1 + 0x3b2);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x3b3];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0x3b3];
        uVar2 = *(uint *)(param_1 + 0x3b2);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  FUN_10003bd40(param_1 + 0x3da);
  thunk_FUN_100651068(param_1 + 0x3b4);
  if ((void *)param_1[0x3b3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3b3]);
    param_1[0x3b2] = 0;
    param_1[0x3b3] = 0;
  }
  FUN_10064e2bc(param_1 + 0x399);
  thunk_FUN_100651068(param_1 + 0x373);
  thunk_FUN_100530784(param_1 + 0x2cc);
  FUN_10064e2bc(param_1 + 0x298);
  FUN_10064221c(param_1 + 0x287);
  param_1[0x269] = &PTR_FUN_1014a7108;
  param_1[0x280] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x283);
  FUN_10064e2bc(param_1 + 0x269);
  param_1[0x24b] = &PTR_FUN_1014a7108;
  param_1[0x262] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x265);
  FUN_10064e2bc(param_1 + 0x24b);
  param_1[0x22d] = &PTR_FUN_1014a7108;
  param_1[0x244] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x247);
  FUN_10064e2bc(param_1 + 0x22d);
  param_1[0x20f] = &PTR_FUN_1014a7108;
  param_1[0x226] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x229);
  FUN_10064e2bc(param_1 + 0x20f);
  FUN_10064221c(param_1 + 0x1fe);
  if ((void *)param_1[0x1fd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1fd]);
    param_1[0x1fd] = 0;
    param_1[0x1fc] = 0;
  }
  FUN_10064e2bc(param_1 + 0x1e3);
  thunk_FUN_100530784(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x108);
  thunk_FUN_100651068(param_1 + 0xe2);
  FUN_10064221c(param_1 + 0xd1);
  param_1[0x60] = &PTR_FUN_101457060;
  param_1[0xb3] = &PTR_FUN_1014a7108;
  param_1[0xca] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcd);
  FUN_10064e2bc(param_1 + 0xb3);
  param_1[0x95] = &PTR_FUN_1014a7108;
  param_1[0xac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaf);
  FUN_10064e2bc(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_1014a7108;
  param_1[0x8e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x91);
  FUN_10064e2bc(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000a5ce8(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xfe0);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0xfe8) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0xfe8) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0xfe0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0xfe8) != 0) {
    *(undefined4 *)(param_1 + 0xfe0) = 0;
  }
  return;
}




void thunk_FUN_1000a5a94(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1000a5a94_1014518d8;
  FUN_1000a5ce8();
  uVar2 = *(uint *)(param_1 + 0x3b2);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = param_1[0x3b3];
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[0x3b3];
        uVar2 = *(uint *)(param_1 + 0x3b2);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  FUN_10003bd40(param_1 + 0x3da);
  thunk_FUN_100651068(param_1 + 0x3b4);
  if ((void *)param_1[0x3b3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3b3]);
    param_1[0x3b2] = 0;
    param_1[0x3b3] = 0;
  }
  FUN_10064e2bc(param_1 + 0x399);
  thunk_FUN_100651068(param_1 + 0x373);
  thunk_FUN_100530784(param_1 + 0x2cc);
  FUN_10064e2bc(param_1 + 0x298);
  FUN_10064221c(param_1 + 0x287);
  param_1[0x269] = &PTR_FUN_1014a7108;
  param_1[0x280] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x283);
  FUN_10064e2bc(param_1 + 0x269);
  param_1[0x24b] = &PTR_FUN_1014a7108;
  param_1[0x262] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x265);
  FUN_10064e2bc(param_1 + 0x24b);
  param_1[0x22d] = &PTR_FUN_1014a7108;
  param_1[0x244] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x247);
  FUN_10064e2bc(param_1 + 0x22d);
  param_1[0x20f] = &PTR_FUN_1014a7108;
  param_1[0x226] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x229);
  FUN_10064e2bc(param_1 + 0x20f);
  FUN_10064221c(param_1 + 0x1fe);
  if ((void *)param_1[0x1fd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1fd]);
    param_1[0x1fd] = 0;
    param_1[0x1fc] = 0;
  }
  FUN_10064e2bc(param_1 + 0x1e3);
  thunk_FUN_100530784(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x108);
  thunk_FUN_100651068(param_1 + 0xe2);
  FUN_10064221c(param_1 + 0xd1);
  param_1[0x60] = &PTR_FUN_101457060;
  param_1[0xb3] = &PTR_FUN_1014a7108;
  param_1[0xca] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcd);
  FUN_10064e2bc(param_1 + 0xb3);
  param_1[0x95] = &PTR_FUN_1014a7108;
  param_1[0xac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaf);
  FUN_10064e2bc(param_1 + 0x95);
  param_1[0x77] = &PTR_FUN_1014a7108;
  param_1[0x8e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x91);
  FUN_10064e2bc(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x47);
  thunk_FUN_10064e2bc(param_1 + 0x30);
  thunk_FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000a5d54(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000a5a94();
  operator_delete(pvVar1);
  return;
}




void FUN_1000a5d68(long param_1,long param_2)

{
  int iVar1;
  
  FUN_1003467f8();
  iVar1 = FUN_10034cf60();
  if (iVar1 != 0) {
    *(long *)(param_1 + 0x3488) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x3490) = *(undefined4 *)(param_2 + 0x30);
    FUN_1000a5db4(param_1);
    return;
  }
  return;
}




void FUN_1000a5db4(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 local_b0 [2];
  uint local_a8 [2];
  long local_a0;
  code *local_98 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1000a5ce8();
  plVar2 = (long *)param_1[0x691];
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[0x692] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar4 = FUN_100345b94();
        uVar5 = FUN_100345bb4(lVar3);
        uVar4 = FUN_100345ba0(uVar4,uVar5);
        lVar3 = *(long *)(lVar3 + 0x18);
        while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dea0))) {
          lVar3 = *(long *)(lVar3 + 0x20);
        }
        uVar5 = FUN_100341d4c();
        lVar6 = FUN_100342508(uVar5,uVar4);
        if (lVar6 != 0) {
          FUN_1000a72a4(local_a8,lVar6);
          local_98[0] = FUN_100341d78;
          FUN_1000a7314(local_a0,local_a0 + (ulong)local_a8[0] * 0x18,local_98);
          if (lVar3 != 0) {
            uVar1 = FUN_1004647ec(lVar3,local_98,8);
            if (local_a8[0] != 0) {
              lVar6 = 0;
              uVar9 = 0;
              do {
                uVar4 = FUN_100341d4c();
                lVar8 = local_a0 + lVar6;
                if (*(char *)(lVar8 + 0x17) < '\0') {
                  lVar8 = *(long *)(local_a0 + lVar6);
                }
                lVar8 = FUN_1003424b8(uVar4,lVar8);
                if (lVar8 != 0) {
                  plVar2 = (long *)(lVar8 + 0x60);
                  if (*(char *)(lVar8 + 0x77) < '\0') {
                    plVar2 = (long *)*plVar2;
                  }
                  uVar4 = FUN_100461300(plVar2);
                  FUN_1003ba954(local_b0,uVar4);
                  uVar7 = FUN_10047220c(lVar3,local_b0[0]);
                  if ((-1 < (int)(uint)uVar7) && ((uint)uVar7 < uVar1)) {
                    FUN_1000a6900(param_1,local_98[uVar7 & 0xffffffff],uVar7,
                                  (ulong)(long)(short)(*(short *)(lVar8 + 0xb0) << 8) >> 8);
                  }
                }
                uVar9 = uVar9 + 1;
                lVar6 = lVar6 + 0x18;
              } while (uVar9 < local_a8[0]);
            }
            (**(code **)(*param_1 + 0x150))(param_1);
          }
          FUN_10001629c(local_a8,1);
        }
        FUN_1000a6900(param_1,0,0xffffffff,0);
        FUN_1000a6aa4(param_1,0);
      }
    }
    else {
      param_1[0x691] = 0;
      *(undefined4 *)(param_1 + 0x692) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000a5fe4(long *param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_100269e20(0x3e19999a,param_1 + 0x47,param_2,1,1);
  (**(code **)(*param_1 + 0x150))(param_1);
  uVar4 = 0;
  if ((int)param_1[0x1fc] != 0) {
    uVar6 = 0;
    bVar1 = false;
    lVar5 = param_1[0x1fd];
    do {
      FUN_1000a510c(*(undefined8 *)(lVar5 + uVar6 * 8),param_2);
      lVar5 = param_1[0x1fd];
      bVar1 = (bool)(bVar1 | *(char *)(*(long *)(lVar5 + uVar6 * 8) + 0xd4) != '\0');
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x1fc));
    uVar4 = 4;
    if (!bVar1) {
      uVar4 = 0;
    }
  }
  *(uint *)((long)param_1 + 0x1f54) = *(uint *)((long)param_1 + 0x1f54) & 0xfffffffb | uVar4;
  if ((param_2 & 1) == 0) {
    *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
  }
  else {
    *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
    uVar2 = FUN_10001f55c();
    FUN_10063f0e8(0x3d4ccccd);
    uVar3 = FUN_10006bf14();
    FUN_10063f0d8(uVar3,1);
    FUN_100642b7c(param_1 + 0x19,uVar2);
    *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) & 0xffffffef;
    uVar2 = FUN_10001f55c();
    FUN_10063f0e8(0x3d4ccccd);
    uVar3 = FUN_10006bf14();
    FUN_10063f0d8(uVar3,1);
    FUN_100642b7c(param_1 + 0x30,uVar2);
  }
  return;
}




void FUN_1000a6150(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000a6158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void thunk_FUN_1000a6e28(void)

{
  FUN_1000a6e28();
  return;
}




void FUN_1000a6160(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a8 [2];
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  undefined1 auStack_88 [4];
  undefined4 local_84;
  
  uVar4 = FUN_100641574("root-layer");
  FUN_10064142c(&local_84,auStack_88);
  FUN_100641464(&local_8c,&local_90);
  FUN_10016ae00(&local_94,0,&local_98,0);
  fVar11 = *(float *)(param_1 + 0x40);
  fVar12 = *(float *)(param_1 + 0x44);
  bVar3 = false;
  if ((fVar11 == (float)DAT_101dc1cb8) && (bVar3 = false, !NAN(fVar12) && !NAN(DAT_101dc1cb8._4_4_))
     ) {
    bVar3 = fVar12 == DAT_101dc1cb8._4_4_;
  }
  fVar13 = fVar11;
  fVar10 = fVar12;
  if (!bVar3) {
    *(ulong *)(param_1 + 0x40) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1);
    fVar13 = *(float *)(param_1 + 0x40);
    fVar10 = *(float *)(param_1 + 0x44);
  }
  bVar3 = false;
  if ((*(float *)(param_1 + 0x278) == (float)DAT_101dc1cb8) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x27c)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar3 = *(float *)(param_1 + 0x27c) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar3) {
    *(ulong *)(param_1 + 0x278) = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(param_1 + 0x238);
  }
  FUN_10064e47c(local_8c,local_90,param_1);
  lVar1 = param_1 + 0x300;
  FUN_10064e47c(local_84,0x44924000,lVar1);
  FUN_10064e72c(0,lVar1,3,uVar4,3);
  FUN_10064e72c(0,lVar1,5,param_1,5);
  fVar8 = *(float *)(param_1 + 0x344);
  FUN_10064e47c(local_8c,fVar8,param_1 + 200);
  if (*(float *)(param_1 + 0x1c4) != local_90 + -142.0) {
    *(float *)(param_1 + 0x1c4) = local_90 + -142.0;
    FUN_1000200a0(param_1 + 0x180);
  }
  FUN_10064e47c(local_8c,0x430e0000,param_1 + 0x180);
  if ((*(float *)(param_1 + 0x750) != 80.0) || (*(float *)(param_1 + 0x754) != fVar8 + -79.0)) {
    *(undefined4 *)(param_1 + 0x750) = 0x42a00000;
    *(float *)(param_1 + 0x754) = fVar8 + -79.0;
    FUN_1000200a0(param_1 + 0x710);
  }
  if ((*(float *)(param_1 + 0x6c8) != 0.0) || (*(float *)(param_1 + 0x6cc) != fVar8)) {
    *(undefined4 *)(param_1 + 0x6c8) = 0;
    *(float *)(param_1 + 0x6cc) = fVar8;
    FUN_1000200a0(param_1 + 0x688);
  }
  FUN_10064e47c(local_8c + -625.0 + (float)local_94,0x44924000,param_1 + 0x840);
  if (*(float *)(param_1 + 0x880) != (float)-local_94) {
    *(float *)(param_1 + 0x880) = (float)-local_94;
    FUN_1000200a0(param_1 + 0x840);
  }
  lVar1 = param_1 + 0xf18;
  if ((*(float *)(param_1 + 0xf58) != 80.0) || (*(float *)(param_1 + 0xf5c) != 160.0)) {
    *(undefined8 *)(param_1 + 0xf58) = 0x4320000042a00000;
    FUN_1000200a0(lVar1);
  }
  FUN_10064fc74((float)local_94,0,0x42a00000,local_a8);
  FUN_100650064(lVar1,local_a8);
  (**(code **)(*(long *)(param_1 + 0xf18) + 0x90))(lVar1);
  if (*(int *)(param_1 + 0xfe0) != 0) {
    uVar6 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0xfe8) + uVar6 * 8);
      plVar5[0x168] = 0x446d8000440c0000;
      (**(code **)(*plVar5 + 0x90))();
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xfe0));
  }
  FUN_100530a48(param_1 + 0x9e0,1);
  FUN_100530ad0(0x42a00000,0,param_1 + 0x9e0);
  if ((*(float *)(param_1 + 0x1030) != local_8c + -625.0) || (*(float *)(param_1 + 0x1034) != 0.0))
  {
    *(float *)(param_1 + 0x1030) = local_8c + -625.0;
    *(undefined4 *)(param_1 + 0x1034) = 0;
    FUN_1000200a0(param_1 + 0xff0);
  }
  FUN_10064e47c((float)local_98 + 625.0,0x44924000,param_1 + 0x1168);
  lVar1 = param_1 + 0x1078;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x10bc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x10b8))))
  {
    bVar3 = *(float *)(param_1 + 0x10b8) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x10b8) = 0;
    FUN_1000200a0(lVar1);
  }
  local_a8[0] = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x1078) + 0x28))(lVar1,local_a8);
  FUN_10064e47c(0x42c80000,0x44924000,lVar1);
  lVar1 = param_1 + 0x1258;
  if ((*(float *)(param_1 + 0x1298) != 0.0) || (*(float *)(param_1 + 0x129c) != 585.0)) {
    *(undefined8 *)(param_1 + 0x1298) = 0x4412400000000000;
    FUN_1000200a0(lVar1);
  }
  local_a8[0] = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x1258) + 0x28))(lVar1,local_a8);
  lVar2 = param_1 + 0x1348;
  if ((*(float *)(param_1 + 5000) != 0.0) || (*(float *)(param_1 + 0x138c) != 585.0)) {
    *(undefined8 *)(param_1 + 5000) = 0x4412400000000000;
    FUN_1000200a0(lVar2);
  }
  local_a8[0] = 0;
  (**(code **)(*(long *)(param_1 + 0x1348) + 0x28))(lVar2,local_a8);
  FUN_10064e47c(0x40800000,0x44124000,lVar1);
  FUN_10064e47c(0x40800000,0x44124000,lVar2);
  if ((*(float *)(param_1 + 0x1478) != 48.0) || (*(float *)(param_1 + 0x147c) != 160.0)) {
    *(undefined8 *)(param_1 + 0x1478) = 0x4320000042400000;
    FUN_1000200a0(param_1 + 0x1438);
  }
  lVar1 = param_1 + 0x1b98;
  fVar7 = 0.0;
  FUN_10065179c(0x44074000,0,0x3f800000,lVar1);
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10064259c(lVar1);
  lVar1 = param_1 + 0x1da0;
  fVar8 = *(float *)(param_1 + 0x1de0);
  if ((fVar8 != 0.0) || (fVar8 = *(float *)(param_1 + 0x1de4), fVar8 != fVar7 + 24.0)) {
    *(undefined4 *)(param_1 + 0x1de0) = 0;
    *(float *)(param_1 + 0x1de4) = fVar7 + 24.0;
    FUN_1000200a0(lVar1);
  }
  FUN_100651708(0x44074000,lVar1,1);
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100651184(lVar1);
  fVar8 = fVar7 + 48.0 + fVar8;
  lVar1 = param_1 + 0x1cc8;
  if (*(float *)(param_1 + 0x1d0c) != fVar8) {
    *(float *)(param_1 + 0x1d0c) = fVar8;
    FUN_1000200a0(lVar1);
  }
  FUN_10064fc74(0,0,0x41c00000,local_a8);
  FUN_100650064(lVar1,local_a8);
  FUN_10064fd88(lVar1);
  if (*(int *)(param_1 + 0x1d90) != 0) {
    uVar6 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x1d98) + uVar6 * 8);
      *(undefined4 *)(plVar5 + 0x5d) = 0x44074000;
      (**(code **)(*plVar5 + 0xe8))(plVar5);
      (**(code **)(*plVar5 + 0x90))(plVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x1d90));
  }
  lVar1 = param_1 + 0x1ed0;
  lVar2 = param_1 + 0x25e8;
  FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100181b70(0x43f58000,lVar1);
  fVar8 = (float)FUN_1006511d0(lVar2);
  fVar7 = 140.0;
  uVar9 = NEON_fminnm(fVar8 + 140.0,0x44074000);
  FUN_1006511d0(lVar2);
  fVar7 = fVar7 + 60.0;
  FUN_10064e47c(uVar9,param_1 + 0x2138);
  FUN_10064259c(param_1 + 0x2138);
  fVar8 = fVar7 * -0.5 + 950.0;
  fVar7 = *(float *)(param_1 + 0x1f10);
  if ((fVar7 != 270.5) || (fVar7 = *(float *)(param_1 + 0x1f14), fVar7 != fVar8)) {
    *(undefined4 *)(param_1 + 0x1f10) = 0x43874000;
    *(float *)(param_1 + 0x1f14) = fVar8;
    FUN_1000200a0(lVar1);
  }
  FUN_10064259c(lVar1);
  FUN_10064e47c(0x44074000,890.0 - fVar7,param_1 + 0x14c0);
  FUN_100654488(param_1 + 0x14c0,1);
  FUN_100530a48(param_1 + 0x1660,1);
  FUN_100530adc(param_1 + 0x1660,0,1);
  if ((*(float *)(param_1 + 0x40) != fVar11) || (*(float *)(param_1 + 0x44) != fVar12)) {
    *(float *)(param_1 + 0x40) = fVar11;
    *(float *)(param_1 + 0x44) = fVar12;
    FUN_1000200a0(param_1);
  }
  if ((*(float *)(param_1 + 0x278) != fVar13) || (*(float *)(param_1 + 0x27c) != fVar10)) {
    *(float *)(param_1 + 0x278) = fVar13;
    *(float *)(param_1 + 0x27c) = fVar10;
    FUN_1000200a0(param_1 + 0x238);
  }
  return;
}




void FUN_1000a6900(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_78;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  pvVar1 = operator_new(0xb48);
  local_78 = FUN_1000a4330();
  plVar2 = *(long **)(param_1 + 0x3488);
  lVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x3490) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      lVar3 = 0;
      *(undefined8 *)(param_1 + 0x3488) = 0;
      *(undefined4 *)(param_1 + 0x3490) = DAT_101dc0b88;
    }
  }
  if (param_2 == 0) {
    FUN_1000a46ec(pvVar1,3);
  }
  else {
    FUN_1000a469c(pvVar1,param_2,param_3,*(undefined8 *)(lVar3 + 0x38),param_4);
  }
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd458;
  local_70 = FUN_1000a6b0c;
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = (long)pvVar1 + 8;
  lStack_68 = param_1;
  FUN_10001554c(lVar3,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd484;
  local_70 = FUN_1000a6b0c;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar3,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd460;
  local_70 = FUN_1000a6b18;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar3,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0xfe0);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_1000a6b18;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar3,&local_70);
  FUN_1000a6b40(param_1 + 0xfe0,&local_78);
  FUN_100642bd8(param_1 + 0xf18,local_78,1);
  return;
}




void FUN_1000a6aa4(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3498);
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0xfe0))) {
    FUN_1000a4ed0(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)uVar1 * 8),0);
  }
  *(uint *)(param_1 + 0x3498) = param_2;
  FUN_1000a4ed0(*(undefined8 *)(*(long *)(param_1 + 0xfe8) + (ulong)param_2 * 8),1);
  *(uint *)(param_1 + 0x16e4) = *(uint *)(param_1 + 0x16e4) | 4;
  FUN_1000a6f98(param_1);
  return;
}




void FUN_1000a6b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000a6da0(param_1,param_4,param_5);
  return;
}




void FUN_1000a6b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000a6aa4(param_1,param_5);
  FUN_100644b14(param_4);
  return;
}




void FUN_1000a6b40(uint *param_1,undefined8 *param_2)

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
    FUN_1000a7f10(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000a6bc0(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  void *local_68;
  
  FUN_1000a6cc4();
  lVar4 = FUN_1003e000c(param_2);
  plVar6 = *(long **)(lVar4 + 0x28);
  lVar4 = *plVar6;
  if (lVar4 != 0) {
    do {
      if (*(char *)(lVar4 + 0x34) == '\0') {
        pvVar5 = operator_new(0x2f0);
        uVar1 = *(undefined4 *)(*plVar6 + 0x2c);
        fVar8 = *(float *)(*plVar6 + 8);
        iVar3 = FUN_1003e0014(param_2);
        fVar2 = (float)(iVar3 - 1);
        if ((float)(iVar3 - 1) <= 0.0) {
          fVar2 = 0.0;
        }
        fVar7 = *(float *)(*plVar6 + 0xc);
        auVar9 = FUN_1000eff68();
        FUN_1000a527c(fVar8 + fVar7 * fVar2,pvVar5,auVar9._8_8_,uVar1,auVar9._0_8_);
        local_68 = pvVar5;
        FUN_1000a6d20(param_1 + 0x3b2,&local_68);
        FUN_100642bd8(param_1 + 0x399,local_68,1);
      }
      plVar6 = plVar6 + 1;
      lVar4 = *plVar6;
    } while (lVar4 != 0);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_1000a6cc4(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1d90);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1d98) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x1d90);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x1d98) != 0) {
    *(undefined4 *)(param_1 + 0x1d90) = 0;
  }
  return;
}




void FUN_1000a6d20(uint *param_1,undefined8 *param_2)

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
    FUN_1000a7f8c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000a6da0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
     (iVar1 = FUN_100644ecc(param_2), iVar1 != 0)) {
    FUN_1000a6aa4(param_1,param_3);
    FUN_1000a6e28(param_1);
  }
  FUN_100644b14(param_2);
  return;
}




void FUN_1000a6e28(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  lVar9 = *(long *)(*(long *)(param_1 + 0xfe8) + (ulong)*(uint *)(param_1 + 0x3498) * 8);
  if (((*(long *)(lVar9 + 0xc0) == 0) || (iVar2 = FUN_1004649d8(), iVar2 != 0)) &&
     ((lVar8 = *(long *)(lVar9 + 0xc0), *(int *)(lVar9 + 0xcc) != 0 || (lVar8 == 0)))) {
    uVar1 = *(uint *)(lVar9 + 200);
    plVar3 = *(long **)(param_1 + 0x3488);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)(param_1 + 0x3490) == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x3488) = 0;
      *(undefined4 *)(param_1 + 0x3490) = DAT_101dc0b88;
    }
    uVar5 = FUN_100345b94();
    uVar4 = FUN_100345bb4(uVar4);
    uVar4 = FUN_100345ba0(uVar5,uVar4);
    FUN_100011484(auStack_60,uVar1 & 0xff);
    FUN_100345498(auStack_60);
    if (lVar8 == 0) {
      uVar6 = FUN_1003467f8();
      pcVar10 = "talent_none";
      uVar7 = 0;
      uVar5 = 0;
    }
    else {
      pcVar10 = *(char **)(lVar8 + 0x38);
      lVar9 = FUN_1003e000c(lVar8);
      uVar7 = *(undefined4 *)(lVar9 + 0x18);
      uVar5 = FUN_1003e0014(lVar8);
      uVar6 = FUN_1003467f8();
    }
    FUN_10010643c(uVar4,pcVar10,uVar7,uVar5,uVar6);
    uVar4 = FUN_100644a94("EVENT_CLOSE_TALENT_SELECTOR");
    FUN_100644aec(auStack_80,uVar4,0);
    FUN_100644c34(param_1,auStack_80,1);
  }
  return;
}




void FUN_1000a6f98(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_60 [8];
  void *local_58;
  
  plVar7 = *(long **)(param_1[0x1fd] + (ulong)*(uint *)(param_1 + 0x693) * 8);
  lVar8 = plVar7[0x18];
  if (lVar8 == 0) {
    FUN_1006513c0(param_1 + 0x373,&DAT_101d91650);
    FUN_1006513c0(param_1 + 0x3b4,&DAT_101d91650);
    *(uint *)((long)param_1 + 0x1f54) = *(uint *)((long)param_1 + 0x1f54) | 4;
    FUN_1000a6cc4(param_1);
    goto LAB_1000a7114;
  }
  puVar1 = (undefined8 *)FUN_1003e000c(lVar8);
  uVar2 = FUN_1004e0150(*puVar1,0);
  FUN_1006513c0(param_1 + 0x373,uVar2);
  lVar3 = FUN_1003e000c(lVar8);
  uVar2 = FUN_1004e0150(*(undefined8 *)(lVar3 + 8),0);
  thunk_FUN_1004e439c(auStack_60,uVar2);
  uVar2 = FUN_1003e000c(lVar8);
  FUN_1000ef9dc(auStack_60,uVar2);
  FUN_1000f2b7c(auStack_60);
  FUN_1006513c0(param_1 + 0x3b4,auStack_60);
  FUN_1000a6bc0(param_1,lVar8);
  if (*(float *)((long)param_1 + 0x16a4) != 0.0) {
    *(undefined4 *)((long)param_1 + 0x16a4) = 0;
    FUN_1000200a0(param_1 + 0x2cc);
  }
  if ((plVar7[0x18] == 0) || (uVar4 = FUN_1004649d8(), (uVar4 & 1) != 0)) {
    if (*(int *)((long)plVar7 + 0xcc) == 0) {
      uVar5 = *(uint *)((long)param_1 + 0x1f54);
      if (plVar7[0x18] != 0) {
        uVar6 = 0;
        goto LAB_1000a70fc;
      }
    }
    else {
      uVar5 = *(uint *)((long)param_1 + 0x1f54);
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 0;
    uVar5 = *(uint *)((long)param_1 + 0x1f54);
  }
LAB_1000a70fc:
  *(uint *)((long)param_1 + 0x1f54) = uVar6 | uVar5 & 0xfffffffb;
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
LAB_1000a7114:
  (**(code **)(*param_1 + 0x150))(param_1);
  fVar9 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
  fVar12 = *(float *)(param_1 + 0x1eb);
  fVar13 = *(float *)(plVar7 + 8);
  fVar10 = (float)FUN_10064e3cc(param_1 + 0x108);
  fVar11 = *(float *)(param_1 + 0x144);
  fVar13 = fVar13 + fVar12 + fVar11;
  if (0.0 <= fVar13) {
    fVar9 = (fVar13 + fVar9) - fVar10;
    fVar13 = 0.0;
    if (0.0 < fVar9) {
      fVar13 = -200.0 - fVar9;
    }
  }
  else {
    fVar13 = 200.0 - fVar13;
  }
  if (2.0 <= ABS(fVar13)) {
    param_1 = param_1 + 0x13c;
    fVar12 = (float)FUN_100530a94(param_1);
    fVar11 = (float)NEON_fminnm(fVar13 + fVar11,0);
    fVar9 = fVar10 - fVar12;
    if (fVar10 - fVar12 <= fVar11) {
      fVar9 = fVar11;
    }
    uVar2 = FUN_1006408f4(fVar9,0,0x3e4ccccd,FUN_1000917d4);
    FUN_100642324(param_1);
    FUN_100642b14(param_1,uVar2);
  }
  return;
}




void FUN_1000a720c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014517d8;
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000a724c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014517d8;
  thunk_FUN_100651068(param_1 + 0x37);
  thunk_FUN_100651068(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000a7290(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064e2bc();
  operator_delete(pvVar1);
  return;
}




uint * FUN_1000a72a4(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100016390(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x18;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      lVar3 = lVar3 + 0x18;
      lVar1 = lVar1 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_1000a7314(string *param_1,string *param_2,undefined8 *param_3)

{
  string *psVar1;
  long lVar2;
  string *psVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  string *this;
  string *psVar7;
  string *psVar8;
  string *psVar9;
  void *local_78 [2];
  char local_61;
  
LAB_1000a734c:
  this = param_2 + -0x18;
  psVar7 = param_1;
LAB_1000a7354:
  while( true ) {
    param_1 = psVar7;
    uVar6 = (long)param_2 - (long)param_1;
    switch(((long)uVar6 >> 3) * -0x5555555555555555) {
    case 0:
    case 1:
      return;
    case 2:
      iVar4 = (*(code *)*param_3)(this,param_1);
      if (iVar4 == 0) {
        return;
      }
      FUN_10003330c(local_78,param_1);
      std::string::operator=(param_1,this);
      std::string::operator=(this,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
        return;
      }
      return;
    case 3:
      FUN_1000a77ac(param_1,param_1 + 0x18,this,param_3);
      return;
    case 4:
      FUN_1000a7948(param_1,param_1 + 0x18,param_1 + 0x30,this,param_3);
      return;
    case 5:
      FUN_1000a7a88(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,this,param_3);
      return;
    }
    if ((long)uVar6 < 0xa8) {
      FUN_1000a7c24(param_1,param_2,param_3);
      return;
    }
    if ((long)uVar6 < 0x5da9) {
      psVar7 = param_1 + (ulong)(((uint)uVar6 & 0xffff) / 0x30) * 0x18;
      iVar4 = FUN_1000a77ac(param_1,psVar7,this,param_3);
    }
    else {
      psVar7 = param_1 + (uVar6 / 0x30) * 0x18;
      lVar2 = (uVar6 / 0x60) * 2 + uVar6 / 0x60;
      iVar4 = FUN_1000a7a88(param_1,param_1 + lVar2 * 8,psVar7,psVar7 + lVar2 * 8,this,param_3);
    }
    uVar6 = (*(code *)*param_3)(param_1,psVar7);
    psVar9 = this;
    if ((uVar6 & 1) != 0) break;
    while (psVar9 = psVar9 + -0x18, psVar9 != param_1) {
      iVar5 = (*(code *)*param_3)(psVar9,psVar7);
      if (iVar5 != 0) goto code_r0x0001000a7420;
    }
    psVar9 = param_1 + 0x18;
    uVar6 = (*(code *)*param_3)(param_1,this);
    if ((uVar6 & 1) == 0) {
      while( true ) {
        if (psVar9 == this) {
          return;
        }
        iVar4 = (*(code *)*param_3)(param_1,psVar9);
        if (iVar4 != 0) break;
        psVar9 = psVar9 + 0x18;
      }
      FUN_10003330c(local_78,psVar9);
      std::string::operator=(psVar9,this);
      std::string::operator=(this,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
      psVar9 = psVar9 + 0x18;
    }
    psVar8 = this;
    if (psVar9 == this) {
      return;
    }
    while( true ) {
      do {
        psVar7 = psVar9;
        iVar4 = (*(code *)*param_3)(param_1,psVar7);
        psVar9 = psVar7 + 0x18;
      } while (iVar4 == 0);
      do {
        psVar8 = psVar8 + -0x18;
        uVar6 = (*(code *)*param_3)(param_1,psVar8);
      } while ((uVar6 & 1) != 0);
      if (psVar8 <= psVar7) break;
      FUN_10003330c(local_78,psVar7);
      std::string::operator=(psVar7,psVar8);
      std::string::operator=(psVar8,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
  }
  goto LAB_1000a7458;
code_r0x0001000a7420:
  FUN_10003330c(local_78,param_1);
  std::string::operator=(param_1,psVar9);
  std::string::operator=(psVar9,(string *)local_78);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  iVar4 = iVar4 + 1;
LAB_1000a7458:
  psVar8 = param_1 + 0x18;
  psVar3 = psVar7;
  psVar1 = psVar8;
  if (psVar8 < psVar9) {
    while( true ) {
      do {
        psVar8 = psVar1;
        psVar7 = psVar3;
        uVar6 = (*(code *)*param_3)(psVar8,psVar7);
        psVar1 = psVar8 + 0x18;
        psVar3 = psVar7;
      } while ((uVar6 & 1) != 0);
      do {
        psVar9 = psVar9 + -0x18;
        iVar5 = (*(code *)*param_3)(psVar9,psVar7);
      } while (iVar5 == 0);
      if (psVar9 < psVar8) break;
      FUN_10003330c(local_78,psVar8);
      std::string::operator=(psVar8,psVar9);
      std::string::operator=(psVar9,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar9;
      if (psVar8 != psVar7) {
        psVar3 = psVar7;
      }
    }
  }
  if ((psVar8 != psVar7) && (iVar5 = (*(code *)*param_3)(psVar7,psVar8), iVar5 != 0)) {
    FUN_10003330c(local_78,psVar8);
    std::string::operator=(psVar8,psVar7);
    std::string::operator=(psVar7,(string *)local_78);
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
    iVar4 = iVar4 + 1;
  }
  if (iVar4 == 0) {
    uVar6 = FUN_1000a7d14(param_1,psVar8,param_3);
    iVar4 = FUN_1000a7d14(psVar8 + 0x18,param_2,param_3);
    if (iVar4 != 0) goto LAB_1000a76b8;
    psVar7 = psVar8 + 0x18;
    if ((uVar6 & 1) != 0) goto LAB_1000a7354;
  }
  if (((long)param_2 - (long)psVar8 >> 3) * -0x5555555555555555 <=
      ((long)psVar8 - (long)param_1 >> 3) * -0x5555555555555555) {
    FUN_1000a7314(psVar8 + 0x18,param_2,param_3);
    param_2 = psVar8;
    goto LAB_1000a734c;
  }
  FUN_1000a7314(param_1,psVar8,param_3);
  psVar7 = psVar8 + 0x18;
  goto LAB_1000a7354;
LAB_1000a76b8:
  param_2 = psVar8;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_1000a734c;
}




undefined8 FUN_1000a77ac(string *param_1,string *param_2,string *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_58 [2];
  char local_41;
  
  uVar2 = (*(code *)*param_4)(param_2,param_1);
  uVar3 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_10003330c(local_58,param_2);
    std::string::operator=(param_2,param_3);
    std::string::operator=(param_3,(string *)local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
    iVar1 = (*(code *)*param_4)(param_2,param_1);
    if (iVar1 != 0) {
      FUN_10003330c(local_58,param_1);
      std::string::operator=(param_1,param_2);
LAB_1000a7910:
      std::string::operator=(param_2,(string *)local_58);
      if (local_41 < '\0') {
        operator_delete(local_58[0]);
      }
      return 2;
    }
  }
  else if ((int)uVar3 == 0) {
    FUN_10003330c(local_58,param_1);
    std::string::operator=(param_1,param_2);
    std::string::operator=(param_2,(string *)local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
    iVar1 = (*(code *)*param_4)(param_3,param_2);
    if (iVar1 != 0) {
      FUN_10003330c(local_58,param_2);
      std::string::operator=(param_2,param_3);
      param_2 = param_3;
      goto LAB_1000a7910;
    }
  }
  else {
    FUN_10003330c(local_58,param_1);
    std::string::operator=(param_1,param_3);
    std::string::operator=(param_3,(string *)local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  return 1;
}




ulong FUN_1000a7948(string *param_1,string *param_2,string *param_3,string *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  void *local_58 [2];
  char local_41;
  
  uVar2 = FUN_1000a77ac();
  iVar1 = (*(code *)*param_5)(param_4,param_3);
  if (iVar1 != 0) {
    FUN_10003330c(local_58,param_3);
    std::string::operator=(param_3,param_4);
    std::string::operator=(param_4,(string *)local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
    iVar1 = (*(code *)*param_5)(param_3,param_2);
    iVar3 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar3 + 1);
    }
    else {
      FUN_10003330c(local_58,param_2);
      std::string::operator=(param_2,param_3);
      std::string::operator=(param_3,(string *)local_58);
      if (local_41 < '\0') {
        operator_delete(local_58[0]);
      }
      iVar1 = (*(code *)*param_5)(param_2,param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar3 + 2);
      }
      else {
        FUN_10003330c(local_58,param_1);
        std::string::operator=(param_1,param_2);
        std::string::operator=(param_2,(string *)local_58);
        if (local_41 < '\0') {
          operator_delete(local_58[0]);
        }
        uVar2 = (ulong)(iVar3 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_1000a7a88(string *param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                   undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  void *local_68 [2];
  char local_51;
  
  uVar2 = FUN_1000a7948();
  iVar1 = (*(code *)*param_6)(param_5,param_4);
  if (iVar1 != 0) {
    FUN_10003330c(local_68,param_4);
    std::string::operator=(param_4,param_5);
    std::string::operator=(param_5,(string *)local_68);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    iVar1 = (*(code *)*param_6)(param_4,param_3);
    iVar3 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar3 + 1);
    }
    else {
      FUN_10003330c(local_68,param_3);
      std::string::operator=(param_3,param_4);
      std::string::operator=(param_4,(string *)local_68);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      iVar1 = (*(code *)*param_6)(param_3,param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar3 + 2);
      }
      else {
        FUN_10003330c(local_68,param_2);
        std::string::operator=(param_2,param_3);
        std::string::operator=(param_3,(string *)local_68);
        if (local_51 < '\0') {
          operator_delete(local_68[0]);
        }
        iVar1 = (*(code *)*param_6)(param_2,param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar3 + 3);
        }
        else {
          FUN_10003330c(local_68,param_1);
          std::string::operator=(param_1,param_2);
          std::string::operator=(param_2,(string *)local_68);
          if (local_51 < '\0') {
            operator_delete(local_68[0]);
          }
          uVar2 = (ulong)(iVar3 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_1000a7c24(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *local_68 [2];
  char local_51;
  
  FUN_1000a77ac(param_1,param_1 + 0x18,param_1 + 0x30,param_3);
  if (param_1 + 0x48 != param_2) {
    lVar5 = 0;
    lVar6 = param_1 + 0x48;
    lVar4 = param_1 + 0x30;
    do {
      lVar3 = lVar6;
      iVar1 = (*(code *)*param_3)(lVar3,lVar4);
      if (iVar1 != 0) {
        FUN_10003330c(local_68,lVar3);
        lVar6 = lVar5;
        do {
          lVar4 = param_1 + lVar6;
          std::string::operator=((string *)(lVar4 + 0x48),(string *)(lVar4 + 0x30));
          if (lVar6 == -0x30) break;
          uVar2 = (*(code *)*param_3)(local_68,lVar4 + 0x18);
          lVar6 = lVar6 + -0x18;
        } while ((uVar2 & 1) != 0);
        std::string::operator=((string *)(lVar4 + 0x30),(string *)local_68);
        if (local_51 < '\0') {
          operator_delete(local_68[0]);
        }
      }
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar3 + 0x18;
      lVar4 = lVar3;
    } while (lVar3 + 0x18 != param_2);
  }
  return;
}




bool FUN_1000a7d14(string *param_1,string *param_2,undefined8 *param_3)

{
  long lVar1;
  string *psVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  string *psVar6;
  string *psVar7;
  long lVar8;
  long lVar9;
  void *local_78 [2];
  char local_61;
  
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    param_2 = param_2 + -0x18;
    iVar3 = (*(code *)*param_3)(param_2,param_1);
    if (iVar3 != 0) {
      FUN_10003330c(local_78,param_1);
      std::string::operator=(param_1,param_2);
      std::string::operator=(param_2,(string *)local_78);
      if (local_61 < '\0') {
        operator_delete(local_78[0]);
      }
    }
    break;
  case 3:
    FUN_1000a77ac(param_1,param_1 + 0x18,param_2 + -0x18,param_3);
    break;
  case 4:
    FUN_1000a7948(param_1,param_1 + 0x18,param_1 + 0x30,param_2 + -0x18,param_3);
    break;
  case 5:
    FUN_1000a7a88(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2 + -0x18,param_3);
    break;
  default:
    FUN_1000a77ac(param_1,param_1 + 0x18,param_1 + 0x30,param_3);
    if (param_1 + 0x48 != param_2) {
      lVar8 = 0;
      iVar3 = 0;
      psVar2 = param_1 + 0x48;
      psVar7 = param_1 + 0x30;
      do {
        psVar6 = psVar2;
        iVar4 = (*(code *)*param_3)(psVar6,psVar7);
        if (iVar4 != 0) {
          FUN_10003330c(local_78,psVar6);
          lVar9 = lVar8;
          do {
            lVar1 = lVar9 + 0x30;
            std::string::operator=(param_1 + lVar9 + 0x48,param_1 + lVar1);
            if (lVar9 == -0x30) break;
            uVar5 = (*(code *)*param_3)(local_78,param_1 + lVar9 + 0x18);
            lVar9 = lVar9 + -0x18;
          } while ((uVar5 & 1) != 0);
          std::string::operator=(param_1 + lVar1,(string *)local_78);
          if (local_61 < '\0') {
            operator_delete(local_78[0]);
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 8) {
            return psVar6 + 0x18 == param_2;
          }
        }
        lVar8 = lVar8 + 0x18;
        psVar2 = psVar6 + 0x18;
        psVar7 = psVar6;
      } while (psVar6 + 0x18 != param_2);
    }
  }
  return true;
}




void FUN_1000a7f10(uint *param_1,uint param_2)

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




void FUN_1000a7f8c(uint *param_1,uint param_2)

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




void FUN_1000a8008(void)

{
  if ((DAT_10184dea8 & 1) == 0) {
    DAT_10184dea0 = DAT_101872e38;
    DAT_10184dea8 = 1;
  }
  return;
}




long * FUN_1000a8034(long *param_1,byte param_2)

{
  undefined8 *puVar1;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  plStack_58 = (long *)FUN_1000a883c();
  *plStack_58 = (long)&PTR_thunk_FUN_1000a88b4_101451ba0;
  plStack_58[0x17] = (long)&PTR_FUN_101451d00;
  *(byte *)(plStack_58 + 0x20) = *(byte *)(plStack_58 + 0x20) & 0xfe | param_2;
  *(uint *)((long)plStack_58 + 0x84) = *(uint *)((long)plStack_58 + 0x84) & 0xffffffef;
  local_38 = DAT_101dbd458;
  local_60 = FUN_1000a8114;
  puVar1 = plStack_58 + 1;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  FUN_10001554c(puVar1,&local_60);
  local_38 = DAT_101dbd484;
  local_60 = FUN_1000a8114;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(puVar1,&local_60);
  local_60 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_60);
  return param_1;
}




void FUN_1000a8114(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d91884,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * thunk_FUN_1000a8034(long *param_1,byte param_2)

{
  undefined8 *puVar1;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  plStack_58 = (long *)FUN_1000a883c();
  *plStack_58 = (long)&PTR_thunk_FUN_1000a88b4_101451ba0;
  plStack_58[0x17] = (long)&PTR_FUN_101451d00;
  *(byte *)(plStack_58 + 0x20) = *(byte *)(plStack_58 + 0x20) & 0xfe | param_2;
  *(uint *)((long)plStack_58 + 0x84) = *(uint *)((long)plStack_58 + 0x84) & 0xffffffef;
  uStack_38 = DAT_101dbd458;
  pcStack_60 = FUN_1000a8114;
  puVar1 = plStack_58 + 1;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_10001554c(puVar1,&pcStack_60);
  uStack_38 = DAT_101dbd484;
  pcStack_60 = FUN_1000a8114;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(puVar1,&pcStack_60);
  pcStack_60 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&pcStack_60);
  return param_1;
}




void FUN_1000a8164(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfe | param_2;
  return;
}




void thunk_FUN_1000a88b4(void)

{
  FUN_1000a88b4();
  return;
}




void FUN_1000a817c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000a88b4();
  operator_delete(pvVar1);
  return;
}




void FUN_1000a8190(long param_1)

{
  FUN_1000a88b4(param_1 + -0xb8);
  return;
}




void FUN_1000a8198(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000a88b4(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




long FUN_1000a81b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_10144cbe8;
  puVar5 = (ushort *)(puVar4 + 0x11);
  *puVar5 = *puVar5 & 0x8000 | 0x3ff;
  puVar4[0x27] = puVar4;
  *(undefined1 *)((long)puVar4 + 0x92) = 0;
  puVar6 = puVar4 + 0x12;
  *(undefined2 *)puVar6 = 0;
  thunk_FUN_100652c08(puVar4 + 0x28);
  thunk_FUN_100652c08(param_1 + 0x230);
  uVar3 = *puVar5;
  puVar4 = puVar6 + ((ulong)(uVar3 >> 10) & 0x1f) * 7;
  *(undefined4 *)puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = FUN_1000a8304;
  puVar4[4] = 0;
  puVar4[5] = FUN_1000a8320;
  puVar4[6] = 0;
  uVar1 = uVar3 + 0x400;
  uVar2 = uVar3 & 0xffff83ff;
  puVar4 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar4 = 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  uVar3 = (ushort)uVar2;
  puVar4[3] = FUN_1000a833c;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar6 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 2;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = FUN_1000a836c;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  *puVar5 = ((ushort)uVar1 & 0x7c00 | uVar3) + 0x400 & 0x7c00 | uVar3;
  FUN_1000a8394(puVar5,0,2);
  FUN_1000a8394(puVar5,2,1);
  FUN_1000a8394(puVar5,1,2);
  FUN_1000a8418(puVar5,0,0,0);
  return param_1;
}




void FUN_1000a8304(long param_1)

{
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffffb;
  return;
}




void FUN_1000a8320(long param_1)

{
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) | 4;
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) | 4;
  return;
}




void FUN_1000a833c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2b4);
  if ((uVar1 & 0x7f80) == 0x1980) {
    return;
  }
  *(uint *)(param_1 + 0x2b4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1980;
  FUN_1000200a0(param_1 + 0x230);
  return;
}




void FUN_1000a836c(long param_1)

{
  if ((~*(uint *)(param_1 + 0x2b4) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) | 0x7f80;
  FUN_1000200a0(param_1 + 0x230);
  return;
}




void FUN_1000a8394(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_1000a83c8;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_1000a83c8:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_1000a8418(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_1000a845c;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_1000a845c:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x58) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x58) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x0001000a84c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long thunk_FUN_1000a81b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_10144cbe8;
  puVar5 = (ushort *)(puVar4 + 0x11);
  *puVar5 = *puVar5 & 0x8000 | 0x3ff;
  puVar4[0x27] = puVar4;
  *(undefined1 *)((long)puVar4 + 0x92) = 0;
  puVar6 = puVar4 + 0x12;
  *(undefined2 *)puVar6 = 0;
  thunk_FUN_100652c08(puVar4 + 0x28);
  thunk_FUN_100652c08(param_1 + 0x230);
  uVar3 = *puVar5;
  puVar4 = puVar6 + ((ulong)(uVar3 >> 10) & 0x1f) * 7;
  *(undefined4 *)puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = FUN_1000a8304;
  puVar4[4] = 0;
  puVar4[5] = FUN_1000a8320;
  puVar4[6] = 0;
  uVar1 = uVar3 + 0x400;
  uVar2 = uVar3 & 0xffff83ff;
  puVar4 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar4 = 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  uVar3 = (ushort)uVar2;
  puVar4[3] = FUN_1000a833c;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar6 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 2;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = FUN_1000a836c;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  *puVar5 = ((ushort)uVar1 & 0x7c00 | uVar3) + 0x400 & 0x7c00 | uVar3;
  FUN_1000a8394(puVar5,0,2);
  FUN_1000a8394(puVar5,2,1);
  FUN_1000a8394(puVar5,1,2);
  FUN_1000a8418(puVar5,0,0,0);
  return param_1;
}




void FUN_1000a8538(long *param_1)

{
  long *plVar1;
  bool bVar2;
  
  plVar1 = param_1 + 0x28;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"plaque_ult_frame");
  bVar2 = false;
  if ((*(float *)(param_1 + 0x32) == (float)DAT_101dc1cb8) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x194)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar2 = *(float *)((long)param_1 + 0x194) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar2) {
    param_1[0x32] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar1);
  }
  bVar2 = false;
  if ((*(float *)(param_1 + 0x30) == (float)DAT_101dc1cb8) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x184)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar2 = *(float *)((long)param_1 + 0x184) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar2) {
    param_1[0x30] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x31) != 1.0) || (*(float *)((long)param_1 + 0x18c) != 1.4)) {
    param_1[0x31] = 0x3fb333333f800000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  plVar1 = param_1 + 0x46;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"plaque_ult_pip");
  bVar2 = false;
  if ((*(float *)(param_1 + 0x50) == (float)DAT_101dc1cb8) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x284)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar2 = *(float *)((long)param_1 + 0x284) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar2) {
    param_1[0x50] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x4e) != 7.0) || (*(float *)((long)param_1 + 0x274) != 8.0)) {
    param_1[0x4e] = 0x4100000040e00000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x4f) == 1.4) && (*(float *)((long)param_1 + 0x27c) == 1.4)) {
    return;
  }
  param_1[0x4f] = 0x3fb333333fb33333;
  FUN_1000200a0(plVar1);
  return;
}




void FUN_1000a870c(long param_1,uint param_2,ulong param_3)

{
  ushort *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  if ((param_3 & 1) == 0) {
    if (param_2 < 7) {
      iVar4 = *(int *)(&DAT_10114bdd0 + (long)(int)param_2 * 4);
    }
    else {
      iVar4 = 3;
    }
  }
  else {
    iVar4 = 1;
  }
  puVar1 = (ushort *)(param_1 + 0x88);
  iVar2 = FUN_1000a87b0(puVar1,iVar4);
  if (iVar2 != 0) {
    uVar3 = (ulong)*puVar1 & 0x1f;
    if ((int)uVar3 != 0x1f) {
      uVar3 = (ulong)*(ushort *)(param_1 + uVar3 * 0x38 + 0x90);
    }
    if (iVar4 != (int)uVar3) {
      FUN_1000a8418(puVar1,iVar4,0,0);
      return;
    }
  }
  return;
}




ushort FUN_1000a87b0(ushort *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar2 = (ulong)*param_1 & 0x1f;
  uVar1 = (uint)uVar2;
  if (uVar1 != 0x1f) {
    uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
    if ((int)uVar4 != 0) {
      uVar3 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_1000a87f0;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 != uVar3);
    }
    uVar3 = 0x1f;
LAB_1000a87f0:
    if ((uint)uVar3 != uVar1) {
      return param_1[uVar2 * 0x1c + 5] >> (ulong)((uint)uVar3 & 0x1f) & 1;
    }
  }
  return 1;
}




void FUN_1000a8818(long param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_10115a168;
  if (param_2 == 0) {
    puVar1 = &DAT_10115a164;
  }
  FUN_100652dd4(param_1 + 0x140,puVar1,2);
  return;
}




long FUN_1000a883c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_100652c08();
  *puVar2 = &PTR_thunk_FUN_1000a88b4_101451d48;
  puVar2[0x17] = &PTR_FUN_101451ea8;
  puVar2[0x1f] = 0x3f8000003fe00000;
  *(uint *)((long)puVar2 + 0x84) = *(uint *)((long)puVar2 + 0x84) & 0xffffffef;
  bVar1 = false;
  if ((*(float *)(puVar2 + 10) == 0.5) && (bVar1 = false, !NAN(*(float *)((long)puVar2 + 0x54)))) {
    bVar1 = *(float *)((long)puVar2 + 0x54) == 0.5;
  }
  if (!bVar1) {
    *(undefined1 **)(param_1 + 0x50) = &DAT_3f0000003f000000;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




long thunk_FUN_1000a883c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_100652c08();
  *puVar2 = &PTR_thunk_FUN_1000a88b4_101451d48;
  puVar2[0x17] = &PTR_FUN_101451ea8;
  puVar2[0x1f] = 0x3f8000003fe00000;
  *(uint *)((long)puVar2 + 0x84) = *(uint *)((long)puVar2 + 0x84) & 0xffffffef;
  bVar1 = false;
  if ((*(float *)(puVar2 + 10) == 0.5) && (bVar1 = false, !NAN(*(float *)((long)puVar2 + 0x54)))) {
    bVar1 = *(float *)((long)puVar2 + 0x54) == 0.5;
  }
  if (!bVar1) {
    *(undefined1 **)(param_1 + 0x50) = &DAT_3f0000003f000000;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




void FUN_1000a88b4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000a88b4_101451d48;
  param_1[0x17] = &PTR_FUN_101451ea8;
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
    param_1[0x1e] = 0;
  }
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000a88b4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000a88b4_101451d48;
  param_1[0x17] = &PTR_FUN_101451ea8;
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
    param_1[0x1e] = 0;
  }
  *param_1 = &PTR_FUN_1014a7108;
  param_1[0x17] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1a);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000a8924(long param_1)

{
  FUN_1000a88b4(param_1 + -0xb8);
  return;
}




void FUN_1000a892c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000a88b4();
  operator_delete(pvVar1);
  return;
}




void FUN_1000a8940(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000a88b4(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_1000a8958(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 0x48) == 1.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x4c)))) {
    bVar1 = *(float *)(param_1 + 0x4c) == 1.0;
  }
  if (!bVar1) {
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    FUN_1000200a0(param_1);
  }
  uVar3 = FUN_10001f424();
  local_38 = *(undefined4 *)(param_1 + 0xf8);
  uStack_34 = local_38;
  FUN_10064025c(uVar3,&local_38);
  FUN_10063f0e8(0x3c23d70a,uVar3);
  uVar2 = FUN_10001f424();
  local_38 = *(undefined4 *)(param_1 + 0xfc);
  uStack_34 = local_38;
  FUN_10064025c(uVar2,&local_38);
  FUN_10063f0e8(0x3e800000,uVar2);
  FUN_10063f130(uVar2,FUN_10006bf9c);
  FUN_100642324(param_1);
  FUN_100642b7c(param_1,uVar3);
  return;
}




void FUN_1000a8a1c(undefined8 param_1)

{
  FUN_1000a8a28(0x3f800000,param_1);
  return;
}




void FUN_1000a8a28(float param_1,undefined4 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  float local_38;
  float fStack_34;
  
  if (*(float *)(param_3 + 0xfc) != param_1) {
    iVar2 = FUN_100642bc8(param_3);
    if (iVar2 == 0) {
      bVar1 = false;
      if ((*(float *)(param_3 + 0x48) == param_1) &&
         (bVar1 = false, !NAN(*(float *)(param_3 + 0x4c)) && !NAN(param_1))) {
        bVar1 = *(float *)(param_3 + 0x4c) == param_1;
      }
      if (!bVar1) {
        *(float *)(param_3 + 0x48) = param_1;
        *(float *)(param_3 + 0x4c) = param_1;
        FUN_1000200a0(param_3);
      }
    }
    else {
      FUN_100642324(param_3);
      uVar3 = FUN_10001f424();
      local_38 = param_1;
      fStack_34 = param_1;
      FUN_10064025c(uVar3,&local_38);
      FUN_10063f0e8(0x3e800000,uVar3);
      FUN_10063f130(uVar3,FUN_10006bf9c);
      FUN_100642b14(param_3,uVar3);
    }
  }
  *(undefined4 *)(param_3 + 0xf8) = param_2;
  *(float *)(param_3 + 0xfc) = param_1;
  return;
}




void FUN_1000a8adc(long param_1)

{
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_10064e68c(0,0,*(long *)(param_1 + 0xf0),6);
    return;
  }
  return;
}




void FUN_1000a8af8(long *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = param_1[0x1e];
  if (lVar1 == 0) {
    pvVar2 = operator_new(0x200);
    lVar1 = thunk_FUN_1000de11c(pvVar2,param_2);
    param_1[0x1e] = lVar1;
    (**(code **)(*param_1 + 0x78))(param_1,pvVar2,1);
    lVar1 = param_1[0x1e];
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_10064e68c(0,0,lVar1,6);
  return;
}




long * FUN_1000a8b7c(long *param_1)

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
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar18 = (undefined8 *)FUN_10064e20c();
  *puVar18 = &PTR_thunk_FUN_10007cce4_101451ef0;
  puVar18[0x17] = 0;
  *(undefined4 *)(puVar18 + 0x18) = DAT_101dc0b88;
  puVar18 = puVar18 + 0x19;
  FUN_100269de4(puVar18);
  plVar1 = param_1 + 0x32;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x49;
  thunk_FUN_1000a883c();
  plVar3 = param_1 + 0x69;
  thunk_FUN_1000a883c();
  plVar4 = param_1 + 0x89;
  thunk_FUN_1000a883c(plVar4);
  plVar5 = param_1 + 0xa9;
  thunk_FUN_1000a883c();
  plVar6 = param_1 + 0xc9;
  thunk_FUN_1000a883c();
  thunk_FUN_10008cb4c();
  FUN_1006421a8();
  param_1[0x5e7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0x5f8;
  FUN_1006421a8(plVar7);
  param_1[0x5f8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x609;
  FUN_1000aa678(plVar8);
  plVar9 = param_1 + 0x65f;
  FUN_1000aa678(plVar9);
  plVar10 = param_1 + 0x6b5;
  FUN_1000aa678(plVar10);
  plVar11 = param_1 + 0x70b;
  FUN_1000aa678(plVar11);
  param_1[0x761] = 0;
  plVar12 = param_1 + 0x764;
  *(short *)plVar12 = 0;
  *(byte *)((long)param_1 + 0x3b22) =
       (byte)(((uint)(*(byte *)((long)param_1 + 0x3b22) >> 4) << 0x14) >> 0x10) | 1;
  uVar14 = FUN_1004d2524("HUD_Utils");
  uVar15 = FUN_100015208("HUD_Utils",uVar14,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  FUN_1000a944c(param_1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar18,1);
  FUN_100642bd8(puVar18,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar1,param_1 + 0xe9,1);
  FUN_100642bd8(plVar1,param_1 + 0x5e7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar7,plVar10,1);
  FUN_100642bd8(plVar7,plVar11,1);
  *(uint *)((long)param_1 + 0x214) = *(uint *)((long)param_1 + 0x214) | 4;
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_recall");
  FUN_1003467f8();
  iVar16 = FUN_10034ceb0();
  if (iVar16 == 0) {
    uVar15 = *(uint *)((long)param_1 + 0x2cc) & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) | 0x10;
    (**(code **)(param_1[0x49] + 0x40))(0x40e00000,plVar2);
    if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.5)) {
      param_1[0x53] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar2);
    }
    local_68 = DAT_101dbd458;
    local_90 = FUN_1000a94bc;
    local_78 = 0;
    local_70 = 0;
    local_80 = 0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x4a,&local_90);
    local_68 = DAT_101dbd484;
    local_90 = FUN_1000a94bc;
    local_78 = 0;
    local_70 = 0;
    local_80 = 0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x4a,&local_90);
    uVar14 = FUN_1004d2524("HUD_Utils_Button_Withdraw");
    uVar15 = FUN_100015208("HUD_Utils_Button_Withdraw",uVar14,0x1234);
    uVar15 = *(uint *)((long)param_1 + 0x2cc) & 0x80000000 |
             *(uint *)((long)param_1 + 0x2cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  }
  *(uint *)((long)param_1 + 0x2cc) = uVar15;
  *(short *)plVar12 = (short)*plVar12 + 1;
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_score");
  *(uint *)((long)param_1 + 0x3cc) = *(uint *)((long)param_1 + 0x3cc) | 0x10;
  (**(code **)(param_1[0x69] + 0x40))(0x40e00000,plVar3);
  if ((*(float *)(param_1 + 0x73) != 0.5) || (*(float *)((long)param_1 + 0x39c) != 0.5)) {
    param_1[0x73] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  uVar14 = DAT_101dbd458;
  local_68 = DAT_101dbd458;
  local_90 = FUN_1000a94c4;
  plVar1 = param_1 + 0x6a;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  uVar13 = DAT_101dbd484;
  local_68 = DAT_101dbd484;
  local_90 = FUN_1000a94c4;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd460;
  local_90 = FUN_1000a94d0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1000a94d0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  uVar17 = FUN_1004d2524("HUD_Utils_Button_Scoreboard");
  uVar15 = FUN_100015208("HUD_Utils_Button_Scoreboard",uVar17,0x1234);
  *(uint *)((long)param_1 + 0x3cc) =
       *(uint *)((long)param_1 + 0x3cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x3cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  *(short *)plVar12 = (short)*plVar12 + 1;
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_shop");
  *(uint *)((long)param_1 + 0x4cc) = *(uint *)((long)param_1 + 0x4cc) | 0x10;
  (**(code **)(param_1[0x89] + 0x40))(0x40e00000,plVar4);
  if ((*(float *)(param_1 + 0x93) != 0.5) || (*(float *)((long)param_1 + 0x49c) != 0.5)) {
    param_1[0x93] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  local_68 = uVar14;
  local_90 = FUN_1000a94bc;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8a,&local_90);
  local_68 = uVar13;
  local_90 = FUN_1000a94bc;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8a,&local_90);
  uVar17 = FUN_1004d2524("HUD_Utils_Button_Shop");
  uVar15 = FUN_100015208("HUD_Utils_Button_Shop",uVar17,0x1234);
  *(uint *)((long)param_1 + 0x4cc) =
       *(uint *)((long)param_1 + 0x4cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x4cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_shopGlow");
  if ((*(uint *)((long)param_1 + 0x5cc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5cc) = *(uint *)((long)param_1 + 0x5cc) & 0xffff807f;
    FUN_1000200a0(plVar5);
  }
  if ((*(float *)(param_1 + 0xb3) != 0.5) || (*(float *)((long)param_1 + 0x59c) != 0.5)) {
    param_1[0xb3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  *(short *)plVar12 = (short)*plVar12 + 1;
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_help");
  *(uint *)((long)param_1 + 0x6cc) = *(uint *)((long)param_1 + 0x6cc) | 0x10;
  (**(code **)(param_1[0xc9] + 0x40))(0x40e00000,plVar6);
  if ((*(float *)(param_1 + 0xd3) != 0.5) || (*(float *)((long)param_1 + 0x69c) != 0.5)) {
    param_1[0xd3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar6);
  }
  local_68 = uVar14;
  local_90 = FUN_1000a94bc;
  local_80 = 0;
  local_78 = 0;
  plVar1 = param_1 + 0xca;
  local_70 = 3;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = uVar13;
  local_90 = FUN_1000a94bc;
  local_80 = 0;
  local_78 = 0;
  local_70 = 3;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  iVar16 = FUN_100131208();
  if (iVar16 != 0) {
    local_68 = DAT_101dbd4a4;
    local_90 = FUN_1000a94dc;
    local_80 = 0;
    local_78 = 0;
    local_70 = 3;
    plStack_88 = param_1;
    FUN_10001554c(plVar1,&local_90);
  }
  uVar14 = FUN_1004d2524("HUD_Utils_Button_Help");
  uVar15 = FUN_100015208("HUD_Utils_Button_Help",uVar14,0x1234);
  *(uint *)((long)param_1 + 0x6cc) =
       *(uint *)((long)param_1 + 0x6cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x6cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  *(short *)plVar12 = (short)*plVar12 + 1;
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_LEARN",0);
  FUN_1006513c0(param_1 + 0x638,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x30cc);
  *(uint *)((long)param_1 + 0x30cc) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x30cc) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar8);
  }
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_SCORE",0);
  FUN_1006513c0(param_1 + 0x68e,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x337c);
  *(uint *)((long)param_1 + 0x337c) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x337c) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar9);
  }
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_SHOP",0);
  FUN_1006513c0(param_1 + 0x6e4,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x362c);
  *(uint *)((long)param_1 + 0x362c) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x362c) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar10);
  }
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_RECALL",0);
  FUN_1006513c0(param_1 + 0x73a,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x38dc);
  *(uint *)((long)param_1 + 0x38dc) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x38dc) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar11);
  }
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 8;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  return param_1;
}




void FUN_1000a944c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_10109c478();
  if ((((uVar2 & 1) != 0) || (iVar1 = FUN_10012709c(), iVar1 == 1)) &&
     (uVar2 = FUN_10034cb58(), (uVar2 & 1) == 0)) {
    FUN_1000a8af8(param_1 + 0x248,0xd);
    FUN_1000a8af8(param_1 + 0x348,0xc);
    FUN_1000a8af8(param_1 + 0x448,0xe);
    FUN_10008e00c(param_1 + 0x748,0xf);
    return;
  }
  return;
}




void FUN_1000a94bc(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_1000aa2c4(param_1,in_x4);
  return;
}




void FUN_1000a94c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000aa490(param_1,param_4,param_5);
  return;
}




void FUN_1000a94d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000aa558(param_1,param_4,param_5);
  return;
}




void FUN_1000a94dc(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_1000aa37c(param_1,in_x4);
  return;
}




long * thunk_FUN_1000a8b7c(long *param_1)

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
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar18 = (undefined8 *)FUN_10064e20c();
  *puVar18 = &PTR_thunk_FUN_10007cce4_101451ef0;
  puVar18[0x17] = 0;
  *(undefined4 *)(puVar18 + 0x18) = DAT_101dc0b88;
  puVar18 = puVar18 + 0x19;
  FUN_100269de4(puVar18);
  plVar1 = param_1 + 0x32;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x49;
  thunk_FUN_1000a883c();
  plVar3 = param_1 + 0x69;
  thunk_FUN_1000a883c();
  plVar4 = param_1 + 0x89;
  thunk_FUN_1000a883c(plVar4);
  plVar5 = param_1 + 0xa9;
  thunk_FUN_1000a883c();
  plVar6 = param_1 + 0xc9;
  thunk_FUN_1000a883c();
  thunk_FUN_10008cb4c();
  FUN_1006421a8();
  param_1[0x5e7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0x5f8;
  FUN_1006421a8(plVar7);
  param_1[0x5f8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x609;
  FUN_1000aa678(plVar8);
  plVar9 = param_1 + 0x65f;
  FUN_1000aa678(plVar9);
  plVar10 = param_1 + 0x6b5;
  FUN_1000aa678(plVar10);
  plVar11 = param_1 + 0x70b;
  FUN_1000aa678(plVar11);
  param_1[0x761] = 0;
  plVar12 = param_1 + 0x764;
  *(short *)plVar12 = 0;
  *(byte *)((long)param_1 + 0x3b22) =
       (byte)(((uint)(*(byte *)((long)param_1 + 0x3b22) >> 4) << 0x14) >> 0x10) | 1;
  uVar14 = FUN_1004d2524("HUD_Utils");
  uVar15 = FUN_100015208("HUD_Utils",uVar14,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  FUN_1000a944c(param_1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar18,1);
  FUN_100642bd8(puVar18,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar1,param_1 + 0xe9,1);
  FUN_100642bd8(plVar1,param_1 + 0x5e7,1);
  FUN_100642bd8(plVar7,plVar8,1);
  FUN_100642bd8(plVar7,plVar9,1);
  FUN_100642bd8(plVar7,plVar10,1);
  FUN_100642bd8(plVar7,plVar11,1);
  *(uint *)((long)param_1 + 0x214) = *(uint *)((long)param_1 + 0x214) | 4;
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_recall");
  FUN_1003467f8();
  iVar16 = FUN_10034ceb0();
  if (iVar16 == 0) {
    uVar15 = *(uint *)((long)param_1 + 0x2cc) & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x2cc) = *(uint *)((long)param_1 + 0x2cc) | 0x10;
    (**(code **)(param_1[0x49] + 0x40))(0x40e00000,plVar2);
    if ((*(float *)(param_1 + 0x53) != 0.5) || (*(float *)((long)param_1 + 0x29c) != 0.5)) {
      param_1[0x53] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar2);
    }
    uStack_68 = DAT_101dbd458;
    pcStack_90 = FUN_1000a94bc;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x4a,&pcStack_90);
    uStack_68 = DAT_101dbd484;
    pcStack_90 = FUN_1000a94bc;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    plStack_88 = param_1;
    FUN_10001554c(param_1 + 0x4a,&pcStack_90);
    uVar14 = FUN_1004d2524("HUD_Utils_Button_Withdraw");
    uVar15 = FUN_100015208("HUD_Utils_Button_Withdraw",uVar14,0x1234);
    uVar15 = *(uint *)((long)param_1 + 0x2cc) & 0x80000000 |
             *(uint *)((long)param_1 + 0x2cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  }
  *(uint *)((long)param_1 + 0x2cc) = uVar15;
  *(short *)plVar12 = (short)*plVar12 + 1;
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_score");
  *(uint *)((long)param_1 + 0x3cc) = *(uint *)((long)param_1 + 0x3cc) | 0x10;
  (**(code **)(param_1[0x69] + 0x40))(0x40e00000,plVar3);
  if ((*(float *)(param_1 + 0x73) != 0.5) || (*(float *)((long)param_1 + 0x39c) != 0.5)) {
    param_1[0x73] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  uVar14 = DAT_101dbd458;
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_1000a94c4;
  plVar1 = param_1 + 0x6a;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uVar13 = DAT_101dbd484;
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_1000a94c4;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd460;
  pcStack_90 = FUN_1000a94d0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = FUN_1000a94d0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 1;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uVar17 = FUN_1004d2524("HUD_Utils_Button_Scoreboard");
  uVar15 = FUN_100015208("HUD_Utils_Button_Scoreboard",uVar17,0x1234);
  *(uint *)((long)param_1 + 0x3cc) =
       *(uint *)((long)param_1 + 0x3cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x3cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  *(short *)plVar12 = (short)*plVar12 + 1;
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_shop");
  *(uint *)((long)param_1 + 0x4cc) = *(uint *)((long)param_1 + 0x4cc) | 0x10;
  (**(code **)(param_1[0x89] + 0x40))(0x40e00000,plVar4);
  if ((*(float *)(param_1 + 0x93) != 0.5) || (*(float *)((long)param_1 + 0x49c) != 0.5)) {
    param_1[0x93] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  uStack_68 = uVar14;
  pcStack_90 = FUN_1000a94bc;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 2;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8a,&pcStack_90);
  uStack_68 = uVar13;
  pcStack_90 = FUN_1000a94bc;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 2;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x8a,&pcStack_90);
  uVar17 = FUN_1004d2524("HUD_Utils_Button_Shop");
  uVar15 = FUN_100015208("HUD_Utils_Button_Shop",uVar17,0x1234);
  *(uint *)((long)param_1 + 0x4cc) =
       *(uint *)((long)param_1 + 0x4cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x4cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_shopGlow");
  if ((*(uint *)((long)param_1 + 0x5cc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5cc) = *(uint *)((long)param_1 + 0x5cc) & 0xffff807f;
    FUN_1000200a0(plVar5);
  }
  if ((*(float *)(param_1 + 0xb3) != 0.5) || (*(float *)((long)param_1 + 0x59c) != 0.5)) {
    param_1[0xb3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  *(short *)plVar12 = (short)*plVar12 + 1;
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_icon_help");
  *(uint *)((long)param_1 + 0x6cc) = *(uint *)((long)param_1 + 0x6cc) | 0x10;
  (**(code **)(param_1[0xc9] + 0x40))(0x40e00000,plVar6);
  if ((*(float *)(param_1 + 0xd3) != 0.5) || (*(float *)((long)param_1 + 0x69c) != 0.5)) {
    param_1[0xd3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar6);
  }
  uStack_68 = uVar14;
  pcStack_90 = FUN_1000a94bc;
  uStack_80 = 0;
  uStack_78 = 0;
  plVar1 = param_1 + 0xca;
  uStack_70 = 3;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = uVar13;
  pcStack_90 = FUN_1000a94bc;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  iVar16 = FUN_100131208();
  if (iVar16 != 0) {
    uStack_68 = DAT_101dbd4a4;
    pcStack_90 = FUN_1000a94dc;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 3;
    plStack_88 = param_1;
    FUN_10001554c(plVar1,&pcStack_90);
  }
  uVar14 = FUN_1004d2524("HUD_Utils_Button_Help");
  uVar15 = FUN_100015208("HUD_Utils_Button_Help",uVar14,0x1234);
  *(uint *)((long)param_1 + 0x6cc) =
       *(uint *)((long)param_1 + 0x6cc) & 0x80000000 |
       *(uint *)((long)param_1 + 0x6cc) & 0x7fff | (uVar15 & 0xffff) << 0xf;
  *(short *)plVar12 = (short)*plVar12 + 1;
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_LEARN",0);
  FUN_1006513c0(param_1 + 0x638,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x30cc);
  *(uint *)((long)param_1 + 0x30cc) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x30cc) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar8);
  }
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_SCORE",0);
  FUN_1006513c0(param_1 + 0x68e,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x337c);
  *(uint *)((long)param_1 + 0x337c) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x337c) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar9);
  }
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_SHOP",0);
  FUN_1006513c0(param_1 + 0x6e4,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x362c);
  *(uint *)((long)param_1 + 0x362c) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x362c) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar10);
  }
  uVar19 = FUN_1004e0150("HUD_TOOLTIP_RECALL",0);
  FUN_1006513c0(param_1 + 0x73a,uVar19);
  uVar15 = *(uint *)((long)param_1 + 0x38dc);
  *(uint *)((long)param_1 + 0x38dc) = uVar15 & 0xfffffffb;
  if ((uVar15 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x38dc) = uVar15 & 0xffff807b | 0x3300;
    FUN_1000200a0(plVar11);
  }
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 8;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  return param_1;
}




void FUN_1000a94e8(long param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long local_50;
  undefined4 local_48;
  
  *(long *)(param_1 + 0xb8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x30);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x1e0) == 1.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x1e4)))) {
    bVar1 = *(float *)(param_1 + 0x1e4) == 0.5;
  }
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x1e0) = 0x3f0000003f800000;
    FUN_1000200a0(param_1 + 400);
  }
  FUN_1003467f8();
  uVar4 = FUN_10034cde0();
  if ((int)uVar4 != 0) {
    *(undefined1 *)(param_1 + 0x32f0) = 1;
    *(undefined1 *)(param_1 + 0x35a0) = 1;
    *(undefined1 *)(param_1 + 0x3850) = 1;
    *(undefined1 *)(param_1 + 0x3b00) = 1;
    uVar4 = FUN_1000a9618(uVar4,param_1 + 0x3048,1);
    uVar4 = FUN_1000a9618(uVar4,param_1 + 0x32f8,1);
    uVar4 = FUN_1000a9618(uVar4,param_1 + 0x35a8,1);
    FUN_1000a9618(uVar4,param_1 + 0x3858,1);
  }
  local_48 = *(undefined4 *)(param_2 + 0x30);
  local_50 = param_2 + 0x28;
  FUN_10008df58(param_1 + 0x748,&local_50);
  uVar2 = FUN_1004d2524("HUD_Utils_Quickbuy");
  uVar3 = FUN_100015208("HUD_Utils_Quickbuy",uVar2,0x1234);
  *(uint *)(param_1 + 0x7cc) =
       *(uint *)(param_1 + 0x7cc) & 0x80000000 |
       *(uint *)(param_1 + 0x7cc) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  return;
}




void FUN_1000a9618(undefined8 param_1,long param_2,uint param_3)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  
  lVar2 = DAT_101dbd2f8;
  if (((param_3 & 1) == 0) && (*(char *)(param_2 + 0x2a8) == '\0')) {
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar7);
      *(undefined ***)puVar7 = &PTR_thunk_FUN_10063eeb4_1014a5410;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f0e8(0x3f800000,puVar7);
    lVar2 = DAT_101dbd2f8;
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
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063ee9c(puVar1);
      *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
  }
  else {
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar7);
      *(undefined ***)puVar7 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10063f0e8(0x3f800000,puVar7);
    uVar3 = FUN_100047714();
    FUN_10063fce0(0x3e4ccccd);
    FUN_10063f0e8(0x3f800000,uVar3);
    uVar4 = FUN_100047714();
    FUN_10063fce0(0x3ecccccd);
    FUN_10063f0e8(0x3f800000,uVar4);
    uVar4 = FUN_10008cac4();
    FUN_10063f614(uVar4,uVar3);
    uVar6 = *(uint *)(param_2 + 0x84);
    if ((uVar6 & 0x7f80) != 0) {
      *(uint *)(param_2 + 0x84) = uVar6 & 0xffff807f;
      FUN_1000200a0(param_2);
      uVar6 = *(uint *)(param_2 + 0x84);
    }
    *(uint *)(param_2 + 0x84) = uVar6 | 4;
  }
  FUN_100642324(param_2);
  FUN_100642b7c(param_2,puVar7);
  return;
}




void FUN_1000a988c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != (int)plVar2[1]) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    return;
  }
  lVar3 = (**(code **)(*plVar2 + 0x10))();
  if (lVar3 == 0) {
    return;
  }
  FUN_1003467f8();
  uVar4 = FUN_10034cde0();
  if ((int)uVar4 == 0) {
    uVar4 = FUN_1001269b8();
    uVar6 = 4;
    if ((int)uVar4 == 0) {
      uVar6 = 0;
    }
    uVar6 = *(uint *)(param_1 + 0x2fbc) & 0xfffffffb | uVar6;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x2fbc) | 4;
  }
  *(uint *)(param_1 + 0x2fbc) = uVar6;
  uVar6 = (uint)*(byte *)(param_1 + 0x3b22) << 0x10;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
  if ((int)uVar8 == 0x1f) {
    if ((uVar6 & 0x40000) == 0) goto LAB_1000a99cc;
    bVar1 = false;
    bVar5 = 0;
  }
  else {
    uVar7 = (uint)*(ushort *)(lVar3 + uVar8 * 0x38 + 0x90);
    if ((uint)(1 < uVar7 - 3) != (uVar6 & 0x40000) >> 0x12) goto LAB_1000a99cc;
    bVar1 = uVar7 == 4;
    bVar5 = (byte)(((uint)bVar1 << 0x12) >> 0x10);
  }
  *(undefined2 *)(param_1 + 0x3b20) = *(undefined2 *)(param_1 + 0x3b20);
  *(byte *)(param_1 + 0x3b22) = bVar5 | *(byte *)(param_1 + 0x3b22) & 0xfb;
  uVar4 = FUN_1000a9618(uVar4,param_1 + 0x3048,bVar1);
  uVar4 = FUN_1000a9618(uVar4,param_1 + 0x32f8,*(byte *)(param_1 + 0x3b22) >> 2 & 1);
  uVar4 = FUN_1000a9618(uVar4,param_1 + 0x35a8,*(byte *)(param_1 + 0x3b22) >> 2 & 1);
LAB_1000a99cc:
  lVar3 = *(long *)(lVar3 + 0x40);
  fVar9 = *(float *)(lVar3 + 0xac) + *(float *)(lVar3 + 0x160) * (*(float *)(lVar3 + 0x2c8) + 1.0);
  NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar3 + 0x214),DAT_101dc5784);
  if ((DAT_101dc56c4 <= 0.0) || ((((uint)*(byte *)(param_1 + 0x3b22) << 0x10) >> 0x13 & 1) != 0)) {
    if (DAT_101dc56c4 != 0.0) {
      return;
    }
    if ((((uint)*(byte *)(param_1 + 0x3b22) << 0x10) >> 0x13 & 1) == 0) {
      return;
    }
    FUN_1000a9618(DAT_101dc56c4,DAT_101dc56c4,DAT_101dc5784,0x3f800000,uVar4,param_1 + 0x3048,0);
    bVar5 = *(byte *)(param_1 + 0x3b22) & 0xf7;
  }
  else {
    FUN_1000a9618(DAT_101dc56c4,DAT_101dc56c4,DAT_101dc5784,0x3f800000,uVar4,param_1 + 0x3048,1);
    bVar5 = *(byte *)(param_1 + 0x3b22) | 8;
  }
  *(byte *)(param_1 + 0x3b22) = bVar5;
  return;
}




void FUN_1000a9a8c(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ushort *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  float fVar12;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  long *plStack_70;
  long *local_68;
  long *plStack_60;
  long local_58;
  
  uVar11 = param_2._2_2_;
  uVar10 = param_2._0_2_;
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  puVar5 = (ushort *)(param_3 + 0x764);
  if ((*(byte *)((long)param_3 + 0x3b22) & 1) == 0) goto LAB_1000a9f20;
  plVar1 = param_3 + 0x32;
  uVar6 = (**(code **)(*param_3 + 0x48))();
  local_78 = (long *)CONCAT44(CONCAT22(uVar11,uVar10),uVar6);
  FUN_10064e48c(plVar1,&local_78);
  uVar10 = 0;
  uVar11 = 0x4180;
  fVar12 = (float)(int)(*puVar5 - 1) * 16.0;
  FUN_10064e3cc(plVar1);
  fVar7 = (float)FUN_10064e3cc(plVar1);
  fVar8 = (float)NEON_ucvtf((uint)*puVar5);
  fVar8 = ((fVar7 - fVar12) * (float)CONCAT22(uVar11,uVar10)) / fVar8;
  fVar7 = SQRT(fVar8);
  fVar9 = fVar7;
  if (fVar8 <= 0.0) {
    fVar9 = fVar8;
  }
  FUN_10064e3cc(plVar1);
  uVar6 = NEON_fminnm(fVar7,fVar9);
  fVar7 = (float)FUN_10064e3cc(plVar1);
  fVar8 = (float)NEON_ucvtf((uint)*puVar5);
  uVar6 = NEON_fminnm((fVar7 - fVar12) / fVar8,uVar6);
  local_80 = (float)NEON_fminnm(uVar6,0x43300000);
  fVar8 = *(float *)(param_3 + 0x3a);
  uVar10 = SUB42(fVar8,0);
  uVar11 = (undefined2)((uint)fVar8 >> 0x10);
  fStack_7c = local_80;
  if (fVar8 == 0.0) {
    fVar8 = *(float *)((long)param_3 + 0x1d4);
    uVar10 = SUB42(fVar8,0);
    uVar11 = (undefined2)((uint)fVar8 >> 0x10);
    if (fVar8 != local_80 * -0.5) goto LAB_1000a9b94;
  }
  else {
LAB_1000a9b94:
    *(undefined4 *)(param_3 + 0x3a) = 0;
    *(float *)((long)param_3 + 0x1d4) = local_80 * -0.5;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_3 + 0x89;
  FUN_1000a8a1c(0x3fe00000,plVar1);
  FUN_10064e48c(plVar1,&local_80);
  plVar2 = param_3 + 0xa9;
  fVar7 = (float)FUN_10065317c(plVar1);
  fVar8 = (float)CONCAT22(uVar11,uVar10);
  fVar9 = (float)FUN_100652e60(plVar2);
  fVar9 = (fVar7 * 1.25) / fVar9;
  fVar8 = (fVar8 * 1.25) / (float)CONCAT22(uVar11,uVar10);
  if ((*(float *)(param_3 + 0xb2) != fVar9) || (*(float *)((long)param_3 + 0x594) != fVar8)) {
    *(float *)(param_3 + 0xb2) = fVar9;
    *(float *)((long)param_3 + 0x594) = fVar8;
    FUN_1000200a0(plVar2);
  }
  FUN_1000a8a1c(0x3fe00000,plVar2);
  uVar6 = FUN_10065317c(plVar1);
  local_78 = (long *)CONCAT44(fVar8,uVar6);
  FUN_10064e48c(param_3 + 0x6c6,&local_78);
  FUN_1000a8adc(plVar1);
  plVar2 = param_3 + 0x69;
  FUN_1000a8a1c(0x3fe00000,plVar2);
  FUN_10064e48c(plVar2,&local_80);
  FUN_1000a8adc(plVar2);
  plVar3 = param_3 + 0xc9;
  FUN_1000a8a1c(0x3fe00000,plVar3);
  FUN_10064e48c(plVar3,&local_80);
  FUN_1000a8adc(plVar3);
  plVar4 = param_3 + 0x49;
  FUN_1000a8a1c(0x3fe00000,plVar4);
  FUN_10064e48c(plVar4,&local_80);
  FUN_1000a8adc(plVar4);
  local_78 = plVar1;
  plStack_70 = plVar2;
  local_68 = plVar3;
  plStack_60 = plVar4;
  FUN_1000a9f58(param_3,&local_78);
  fVar7 = *(float *)(param_3 + 0x91);
  fVar8 = *(float *)((long)param_3 + 0x48c);
  uVar10 = SUB42(fVar8,0);
  uVar11 = (undefined2)((uint)fVar8 >> 0x10);
  if ((*(float *)(param_3 + 0x6ce) != fVar7) ||
     (*(float *)((long)param_3 + 0x3674) != fVar8 + -92.0)) {
    *(float *)(param_3 + 0x6ce) = fVar7;
    *(float *)((long)param_3 + 0x3674) = fVar8 + -92.0;
    FUN_1000200a0(param_3 + 0x6c6);
    fVar7 = *(float *)(param_3 + 0x91);
    uVar10 = (undefined2)*(undefined4 *)((long)param_3 + 0x48c);
    uVar11 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x48c) >> 0x10);
  }
  fVar8 = (float)CONCAT22(uVar11,uVar10) + -100.0;
  if ((*(float *)(param_3 + 0x6ec) != fVar7) || (*(float *)((long)param_3 + 0x3764) != fVar8)) {
    *(float *)(param_3 + 0x6ec) = fVar7;
    *(float *)((long)param_3 + 0x3764) = fVar8;
    FUN_1000200a0(param_3 + 0x6e4);
  }
  fVar7 = *(float *)(param_3 + 0x71);
  fVar8 = *(float *)((long)param_3 + 0x38c);
  uVar10 = SUB42(fVar8,0);
  uVar11 = (undefined2)((uint)fVar8 >> 0x10);
  if ((*(float *)(param_3 + 0x678) != fVar7) ||
     (*(float *)((long)param_3 + 0x33c4) != fVar8 + -92.0)) {
    *(float *)(param_3 + 0x678) = fVar7;
    *(float *)((long)param_3 + 0x33c4) = fVar8 + -92.0;
    FUN_1000200a0(param_3 + 0x670);
    fVar7 = *(float *)(param_3 + 0x71);
    uVar10 = (undefined2)*(undefined4 *)((long)param_3 + 0x38c);
    uVar11 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x38c) >> 0x10);
  }
  fVar8 = (float)CONCAT22(uVar11,uVar10) + -100.0;
  if ((*(float *)(param_3 + 0x696) != fVar7) || (*(float *)((long)param_3 + 0x34b4) != fVar8)) {
    *(float *)(param_3 + 0x696) = fVar7;
    *(float *)((long)param_3 + 0x34b4) = fVar8;
    FUN_1000200a0(param_3 + 0x68e);
  }
  fVar7 = *(float *)(param_3 + 0xd1);
  fVar8 = *(float *)((long)param_3 + 0x68c);
  uVar10 = SUB42(fVar8,0);
  uVar11 = (undefined2)((uint)fVar8 >> 0x10);
  if ((*(float *)(param_3 + 0x622) != fVar7) ||
     (*(float *)((long)param_3 + 0x3114) != fVar8 + -92.0)) {
    *(float *)(param_3 + 0x622) = fVar7;
    *(float *)((long)param_3 + 0x3114) = fVar8 + -92.0;
    FUN_1000200a0(param_3 + 0x61a);
    fVar7 = *(float *)(param_3 + 0xd1);
    uVar10 = (undefined2)*(undefined4 *)((long)param_3 + 0x68c);
    uVar11 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x68c) >> 0x10);
  }
  fVar8 = (float)CONCAT22(uVar11,uVar10) + -100.0;
  if ((*(float *)(param_3 + 0x640) != fVar7) || (*(float *)((long)param_3 + 0x3204) != fVar8)) {
    *(float *)(param_3 + 0x640) = fVar7;
    *(float *)((long)param_3 + 0x3204) = fVar8;
    FUN_1000200a0(param_3 + 0x638);
  }
  fVar7 = *(float *)(param_3 + 0x51);
  fVar8 = *(float *)((long)param_3 + 0x28c);
  uVar10 = SUB42(fVar8,0);
  uVar11 = (undefined2)((uint)fVar8 >> 0x10);
  if ((*(float *)(param_3 + 0x724) != fVar7) ||
     (*(float *)((long)param_3 + 0x3924) != fVar8 + -92.0)) {
    *(float *)(param_3 + 0x724) = fVar7;
    *(float *)((long)param_3 + 0x3924) = fVar8 + -92.0;
    FUN_1000200a0(param_3 + 0x71c);
    fVar7 = *(float *)(param_3 + 0x51);
    uVar10 = (undefined2)*(undefined4 *)((long)param_3 + 0x28c);
    uVar11 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x28c) >> 0x10);
  }
  fVar8 = (float)CONCAT22(uVar11,uVar10) + -100.0;
  if ((*(float *)(param_3 + 0x742) != fVar7) || (*(float *)((long)param_3 + 0x3a14) != fVar8)) {
    *(float *)(param_3 + 0x742) = fVar7;
    *(float *)((long)param_3 + 0x3a14) = fVar8;
    FUN_1000200a0(param_3 + 0x73a);
  }
  fVar9 = *(float *)(param_3 + 0x91);
  FUN_10065317c(plVar1);
  fVar7 = *(float *)(param_3 + 0xf1);
  uVar10 = SUB42(fVar7,0);
  uVar11 = (undefined2)((uint)fVar7 >> 0x10);
  if (fVar7 == fVar9) {
    fVar7 = *(float *)((long)param_3 + 0x78c);
    uVar10 = SUB42(fVar7,0);
    uVar11 = (undefined2)((uint)fVar7 >> 0x10);
    uVar6 = 0;
    if (fVar7 != fVar8 * -1.1) goto LAB_1000a9ef4;
  }
  else {
LAB_1000a9ef4:
    uVar6 = 0;
    *(float *)(param_3 + 0xf1) = fVar9;
    *(float *)((long)param_3 + 0x78c) = fVar8 * -1.1;
    FUN_1000200a0(param_3 + 0xe9);
  }
  FUN_10065317c(plVar1);
  FUN_10008dfd8(CONCAT44(uVar6,CONCAT22(uVar11,uVar10)),param_3 + 0xe9);
  param_3[0x761] = CONCAT44(fStack_7c,local_80);
LAB_1000a9f20:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000a9f58(long param_1,long param_2)

{
  uint3 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = (uint3 *)(param_1 + 0x3b20);
  uVar4 = (ulong)*puVar1;
  fVar9 = 0.0;
  if (*(ushort *)puVar1 != 0) {
    uVar5 = 0;
    fVar9 = 0.0;
    do {
      plVar2 = *(long **)(param_2 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        fVar6 = (float)(**(code **)(*plVar2 + 0x50))();
        fVar9 = fVar6 + fVar9;
        uVar4 = (ulong)*puVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar4 & 0xffff));
  }
  fVar6 = (float)FUN_10064e3cc(param_1 + 400);
  if (*(ushort *)puVar1 != 0) {
    uVar4 = 0;
    fVar6 = fVar6 - fVar9;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar9 = (float)(int)(*(ushort *)puVar1 - 1);
    if (fVar9 <= 1.0) {
      fVar9 = 1.0;
    }
    fVar9 = (float)NEON_fminnm(fVar6 / fVar9,0x41c00000);
    do {
      plVar2 = *(long **)(param_2 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        if (uVar4 == 0) {
          fVar6 = (float)(**(code **)(*plVar2 + 0x50))(plVar2);
          fVar6 = fVar6 * -0.5;
        }
        else {
          plVar3 = *(long **)(param_2 + (ulong)((int)uVar4 - 1) * 8);
          fVar6 = *(float *)(plVar3 + 8);
          fVar7 = (float)(**(code **)(*plVar3 + 0x50))();
          fVar8 = (float)(**(code **)(*plVar2 + 0x50))(plVar2);
          fVar6 = (fVar8 + fVar7) * -0.5 - (ABS(fVar6) + fVar9);
        }
        if ((*(float *)(plVar2 + 8) != fVar6) || (*(float *)((long)plVar2 + 0x44) != 0.0)) {
          *(float *)(plVar2 + 8) = fVar6;
          *(undefined4 *)((long)plVar2 + 0x44) = 0;
          FUN_1000200a0(plVar2);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)puVar1);
  }
  return;
}




void FUN_1000aa0c0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000aa0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void thunk_FUN_1000a9a8c(void)

{
  FUN_1000a9a8c();
  return;
}




undefined4 FUN_1000aa0d0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3b08);
}




void FUN_1000aa0dc(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  bVar1 = *(byte *)(param_3 + 0x3b22);
  if (param_4 == 0) {
    if ((bVar1 & 2) != 0) {
      FUN_1000a9618(param_3,param_3 + 0x35a8,0);
      uVar3 = FUN_100047714();
      FUN_10063fce0(0);
      FUN_10063f0e8(0x3ea8f5c3,uVar3);
      FUN_100642324(param_3 + 0x548);
      FUN_100642b14(param_3 + 0x548,uVar3);
      *(byte *)(param_3 + 0x3b22) = *(byte *)(param_3 + 0x3b22) & 0xfd;
    }
  }
  else if ((bVar1 & 2) == 0) {
    *(undefined2 *)(param_3 + 0x3b20) = *(undefined2 *)(param_3 + 0x3b20);
    *(byte *)(param_3 + 0x3b22) = bVar1 | 2;
    FUN_1000a9618(param_3,param_3 + 0x35a8,1);
    uVar3 = FUN_100047714();
    FUN_10063fce0(0x3f266666);
    FUN_10063f0e8(0x3f800000,uVar3);
    FUN_10063f130(uVar3,FUN_1000657e0);
    uVar4 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_10063f0e8(0x3f800000,uVar4);
    FUN_10063f130(uVar4,FUN_1000657e0);
    uVar4 = FUN_10008cac4();
    FUN_10063f614(uVar4,uVar3);
    FUN_10063f664(uVar4);
    FUN_100642324(param_3 + 0x548);
    FUN_100642b14(param_3 + 0x548,uVar4);
  }
  fVar5 = (float)FUN_10065317c(param_3 + 0x448);
  fVar7 = param_2 * 1.25;
  fVar6 = (float)FUN_100652e60(param_3 + 0x548);
  fVar6 = (fVar5 * 1.25) / fVar6;
  fVar7 = fVar7 / param_2;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x590) == fVar6) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0x594)) && !NAN(fVar7))) {
    bVar2 = *(float *)(param_3 + 0x594) == fVar7;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x590) = fVar6;
    *(float *)(param_3 + 0x594) = fVar7;
    FUN_1000200a0(param_3 + 0x548);
    return;
  }
  return;
}




void FUN_1000aa2a4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x3044) = *(uint *)(param_1 + 0x3044) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000aa2c4(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [32];
  
  uVar2 = FUN_100644a94("EVENT_UTILS_SELECT_ITEM");
  FUN_100644aec(auStack_50,uVar2,param_2 & 0xffffffff);
  FUN_100644c34(param_1,auStack_50,1);
  FUN_1003467f8();
  iVar1 = FUN_10034cde0();
  if (iVar1 != 0) {
    FUN_1000aa3d0(param_1,param_2);
  }
  switch(param_2 & 0xffffffff) {
  case 0:
    param_1 = param_1 + 0x248;
    break;
  case 1:
    param_1 = param_1 + 0x348;
    break;
  case 2:
    param_1 = param_1 + 0x448;
    break;
  case 3:
    param_1 = param_1 + 0x648;
    break;
  default:
    goto switchD_1000aa344_default;
  }
  FUN_1000a8958(param_1);
switchD_1000aa344_default:
  return;
}




void FUN_1000aa37c(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_UTILS_FOCUS_KILLED");
  FUN_100644aec(auStack_40,uVar1,param_2);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1000aa3d0(long param_1,uint param_2)

{
  if (param_2 < 4) {
    switch(param_2) {
    case 0:
      if (*(char *)(param_1 + 0x3b00) != '\0') {
        *(undefined1 *)(param_1 + 0x3b00) = 0;
        FUN_1000a9618(param_1,param_1 + 0x3858,0);
        return;
      }
      break;
    case 1:
      if (*(char *)(param_1 + 0x35a0) != '\0') {
        *(undefined1 *)(param_1 + 0x35a0) = 0;
        FUN_1000a9618(param_1,param_1 + 0x32f8,*(byte *)(param_1 + 0x3b22) >> 2 & 1);
        return;
      }
      break;
    case 2:
      if (*(char *)(param_1 + 0x3850) != '\0') {
        *(undefined1 *)(param_1 + 0x3850) = 0;
        FUN_1000a9618(param_1,param_1 + 0x35a8,(*(byte *)(param_1 + 0x3b22) & 6) != 0);
        return;
      }
      break;
    case 3:
      if (*(char *)(param_1 + 0x32f0) != '\0') {
        *(char *)(param_1 + 0x32f0) = '\0';
        FUN_1000a9618(param_1,param_1 + 0x3048,*(byte *)(param_1 + 0x3b22) >> 3 & 1);
        return;
      }
    }
  }
  return;
}




void FUN_1000aa490(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **local_40;
  undefined4 local_38;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if (((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
    uVar3 = FUN_100061db0();
    local_38 = 0x1a;
    local_40 = &PTR_FUN_10144d768;
    FUN_10005f394(uVar3,&local_40);
    if (((param_3 & 1) != 0) && (iVar1 = FUN_10031615c(0x12), iVar1 != 0)) {
      FUN_100641584(param_2[4],param_1 + 0x348);
      FUN_1006428bc(param_1 + 0x348,param_1 + 0x3b10,param_1 + 0x3b18);
    }
  }
  return;
}




void FUN_1000aa558(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_40;
  undefined4 local_38;
  
  if (((param_3 & 1) != 0) && (iVar1 = FUN_10031615c(0x12), iVar1 != 0)) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
    if (((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) {
      iVar1 = FUN_1006415d4(param_1 + 0x348);
      if ((((iVar1 != 0) && (lVar3 = FUN_1006415c4(param_1 + 0x348), lVar3 == param_2[4])) &&
          (*(float *)(param_1 + 0x3b10) <= (float)(int)*(float *)(param_2 + 5))) &&
         ((((float)(int)*(float *)(param_2 + 5) <= *(float *)(param_1 + 0x3b18) &&
           (*(float *)(param_1 + 0x3b14) <= (float)(int)*(float *)((long)param_2 + 0x2c))) &&
          ((float)(int)*(float *)((long)param_2 + 0x2c) <= *(float *)(param_1 + 0x3b1c))))) {
        uVar4 = FUN_100061db0();
        local_38 = 0x1a;
        local_40 = &PTR_FUN_10144d798;
        FUN_10005f394(uVar4,&local_40);
      }
    }
    FUN_1006415a8(param_1 + 0x348);
  }
  return;
}




void FUN_1000aa664(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10007cce4();
  operator_delete(pvVar1);
  return;
}




long * FUN_1000aa678(long *param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_10144e688;
  puVar4 = puVar4 + 0x11;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  *(undefined1 *)(param_1 + 0x55) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652cac(puVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"util_button_bubble");
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1b) == 0.5) && (bVar3 = false, !NAN(*(float *)((long)param_1 + 0xdc)))
     ) {
    bVar3 = *(float *)((long)param_1 + 0xdc) == 0.5;
  }
  if (!bVar3) {
    param_1[0x1b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
  uVar2 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar2 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000aa7a4(void)

{
  DAT_101dc54d0 = 0xff;
  DAT_101dc54d2 = 0xffff;
  DAT_101dc54d4 = 0xffff;
  DAT_101dc54d6 = 0xffbc9c44;
  DAT_101dc54da = 0xff1166f2;
  DAT_101dc54de = 0xffe0e0e0;
  DAT_101dc54e2 = 0xffa0a0a0;
  DAT_101dc54e6 = 0xff8c8c8c;
  DAT_101dc54ea = 0xff322213;
  DAT_101dc54ee = 0xff091911;
  DAT_101dc54f2 = 0xff170c19;
  DAT_101dc54f6 = 0xff241a14;
  DAT_101dc54fa = 0xff14171c;
  DAT_101dc54fe = 0xff221911;
  DAT_101dc5502 = 0xff1a1416;
  DAT_101dc5506 = 0xff121414;
  DAT_101dc550a = 0xff1a1809;
  DAT_101dc550e = 0xff141414;
  DAT_101dc5512 = 0xff141414;
  DAT_101dc5516 = 0xff2929c0;
  DAT_101dc551a = 0xff283082;
  DAT_101dc551e = 0xff5262cc;
  DAT_101dc5522 = 0xff283082;
  DAT_101dc5526 = 0xff5262cc;
  DAT_101dc552a = 0xff745c42;
  DAT_101dc552e = 0xff184155;
  DAT_101dc5532 = 0xff92665e;
  DAT_101dc5536 = 0xffbc9c44;
  DAT_101dc553a = 0xffbbae56;
  DAT_101dc553e = 0xff8b7b01;
  DAT_101dc5542 = 0xff90b3ef;
  DAT_101dc5546 = 0xff728ebe;
  DAT_101dc554a = 0xff19459d;
  DAT_101dc554e = 0xff9d877b;
  DAT_101dc5552 = 0xffcbb1a3;
  DAT_101dc5556 = 0xff3f6fb5;
  DAT_101dc555a = 0xffc5c5c5;
  DAT_101dc555e = 0xff4fc1f1;
  DAT_101dc5562 = 0xff606060;
  DAT_101dc5566 = 0xffc5ff7b;
  DAT_101dc556a = 0xff5271eb;
  DAT_101dc556e = 0xfffae076;
  DAT_101dc5572 = 0xff3ac8f6;
  DAT_101dc5576 = 0xffaaaaaa;
  DAT_101dc557a = 0xffe19400;
  DAT_101dc557e = 0xffe19400;
  DAT_101dc5582 = 0xffe550b2;
  DAT_101dc5586 = 0xfff22ae8;
  DAT_101dc558a = 0xff005ae1;
  DAT_101dc558e = 0xff1addfa;
  DAT_101dc5592 = 0xff2424b3;
  DAT_101dc5596 = 0xff2424b3;
  DAT_101dc559a = 0xff646464;
  DAT_101dc559e = 0xff92665e;
  DAT_101dc55a2 = 0xff646037;
  DAT_101dc55a8 = 0xffffffff;
  DAT_101dc55ac = 0xff1111a1;
  DAT_101dc55b0 = 0xff321ee1;
  DAT_101dc55b4 = 0xffc8c8c8;
  DAT_101dc55b8 = 0xff321ee1;
  DAT_101dc55bc = 0xff7fe801;
  DAT_101dc55c0 = 0xffffffff;
  DAT_101dc55c4 = 0xff6259b3;
  DAT_101dc55c8 = 0xff506e73;
  DAT_101dc55cc = 0xff9dbf86;
  DAT_101dc55d0 = 0xffa35244;
  DAT_101dc55d4 = 0xffca828e;
  DAT_101dc55d8 = 0xffa6a6a6;
  DAT_101dc55dc = 0xffa6a6a6;
  DAT_101dc55e0 = 0xffffffff;
  DAT_101dc55e4 = 0xff88ea2f;
  DAT_101dc55e8 = 0xff8c8c8c;
  DAT_101dc55ec = 0xffffb400;
  DAT_101dc55f0 = 0xffff00ff;
  DAT_101dc55f4 = 0xff00aded;
  DAT_101dc55f8 = 0xff33d3ff;
  DAT_101dc55fc = 0xff7fe801;
  DAT_101dc5600 = 0xff282828;
  DAT_101dc5604 = 0xfff0f0f0;
  DAT_101dc5608 = 0xffa4781e;
  DAT_101dc560c = 0xffa6654b;
  DAT_101dc5610 = 0xff93435b;
  DAT_101dc5614 = 0xff387f9c;
  DAT_101dc5618 = 0xffa3781e;
  DAT_101dc561c = 0xffffd18a;
  DAT_101dc5620 = 0xffff61f7;
  DAT_101dc5624 = 0xff5de1f2;
  DAT_101dc5628 = 0xff80eaff;
  DAT_101dc562c = 0xff32e00e;
  DAT_101dc5630 = 0xff5a3c10;
  DAT_101dc5634 = 0xff330b03;
  DAT_101dc5638 = 0xff33031d;
  DAT_101dc563c = 0xff032433;
  DAT_101dc5640 = 0xff9e8e8d;
  uRam0000000101dc5718 = 0x7f7fffff7f7fffff;
  _DAT_101dc5710 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5728 = 0x7f7fffff7f7fffff;
  _DAT_101dc5720 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5738 = 0x7f7fffff7f7fffff;
  _DAT_101dc5730 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5748 = 0x7f7fffff7f7fffff;
  _DAT_101dc5740 = 0x7f7fffff7f7fffff;
  DAT_101dc5750 = 0x7f7fffff;
  DAT_101dc5754 = 0x7f7fffff;
  DAT_101dc5758 = 0x7f7fffff;
  DAT_101dc575c = 0x3f800000;
  uRam0000000101dc5768 = 0x7f7fffff7f7fffff;
  _DAT_101dc5760 = 0x7f7fffff7f7fffff;
  DAT_101dc5770 = 0x7f7fffff;
  DAT_101dc5774 = 0x3eb33333;
  uRam0000000101dc5780 = 0x7f7fffff7f7fffff;
  _DAT_101dc5778 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5790 = 0x7f7fffff7f7fffff;
  _DAT_101dc5788 = 0x7f7fffff7f7fffff;
  uRam0000000101dc57a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc5798 = 0x7f7fffff7f7fffff;
  uRam0000000101dc57b0 = 0x7f7fffff7f7fffff;
  _DAT_101dc57a8 = 0x7f7fffff7f7fffff;
  DAT_101dc57b8 = 0x7f7fffff;
  DAT_101dc57bc = 0x7f7fffff;
  DAT_101dc57c0 = 0x7f7fffff;
  uRam0000000101dc5658 = 0xff7fffffff7fffff;
  _DAT_101dc5650 = 0xff7fffffff7fffff;
  DAT_101dc5660 = 0;
  DAT_101dc5668 = 0;
  uRam0000000101dc5674 = 0xff7fffffff7fffff;
  _DAT_101dc566c = 0xff7fffffff7fffff;
  DAT_101dc567c = 0xff7fffff;
  DAT_101dc5680 = 0xff7fffff;
  DAT_101dc5684 = NEON_fmov(0xbf800000,4);
  DAT_101dc568c = 0x3f000000;
  DAT_101dc5690 = 0;
  DAT_101dc5698 = 0;
  uRam0000000101dc56a8 = 0xff7fffffff7fffff;
  _DAT_101dc56a0 = 0xff7fffffff7fffff;
  uRam0000000101dc56b8 = 0xff7fffffff7fffff;
  _DAT_101dc56b0 = 0xff7fffffff7fffff;
  uRam0000000101dc56c8 = 0xff7fffffff7fffff;
  _DAT_101dc56c0 = 0xff7fffffff7fffff;
  uRam0000000101dc56d8 = 0xbf800000bf800000;
  _DAT_101dc56d0 = 0xbf80000000000000;
  DAT_101dc56e0 = 0xbf800000;
  DAT_101dc56e4 = 0xff7fffff;
  DAT_101dc56e8 = 0xff7fffff;
  DAT_101dc56ec = 0xff7fffff;
  DAT_101dc56f0 = 0;
  DAT_101dc56f4 = 0xff7fffff;
  DAT_101dc56f8 = 0;
  DAT_101dc5700 = 0;
  return;
}




long FUN_1000aaf24(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x12) = 0x7000000;
  puVar1[0x13] = uVar2;
  *puVar1 = &PTR_FUN_101452038;
  puVar1[0x11] = &PTR_FUN_101452148;
  puVar1 = puVar1 + 0x14;
  uVar2 = FUN_100657568(puVar1);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0x3f0000003f800000;
  FUN_1006575f4(uVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar2 = FUN_1006575c4(puVar1,"hud_vignette");
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"vignette_fog_top");
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"vignette_fog_left");
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"vignette_fog_right");
  *(undefined8 *)(param_1 + 200) = uVar2;
  if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




long thunk_FUN_1000aaf24(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x12) = 0x7000000;
  puVar1[0x13] = uVar2;
  *puVar1 = &PTR_FUN_101452038;
  puVar1[0x11] = &PTR_FUN_101452148;
  puVar1 = puVar1 + 0x14;
  uVar2 = FUN_100657568(puVar1);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0x3f0000003f800000;
  FUN_1006575f4(uVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar2 = FUN_1006575c4(puVar1,"hud_vignette");
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"vignette_fog_top");
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"vignette_fog_left");
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"vignette_fog_right");
  *(undefined8 *)(param_1 + 200) = uVar2;
  if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




void FUN_1000ab014(long param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  float local_78;
  float local_74;
  
  if ((0.0 < *(float *)(param_1 + 0xd0)) && (0.0 < *(float *)(param_1 + 0xd4))) {
    FUN_10064142c(&local_74,&local_78);
    lVar2 = FUN_10003d5bc(param_1);
    fVar10 = local_74 * *(float *)(lVar2 + 0x10);
    fVar13 = local_78 * *(float *)(lVar2 + 0x14);
    fVar15 = *(float *)(param_1 + 0xd0);
    fVar14 = *(float *)(param_1 + 0xd4);
    fVar11 = *(float *)(lVar2 + 0x10) * 600.0;
    fVar6 = (float)NEON_fminnm((int)(*(float *)(lVar2 + 0x18) * 204.0),0x437f0000);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar12 = *(float *)(lVar2 + 0x14) * 409.6;
    local_80 = 0xdcc8;
    local_7e = 0xff;
    local_7d = (undefined1)(int)fVar6;
    lVar3 = *(long *)(param_1 + 0xb8);
    lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
    fVar9 = 1.0 / (float)*(int *)(lVar4 + 0x48);
    local_78 = fVar13;
    local_74 = fVar10;
    FUN_100043664(0,0,fVar10,fVar11,0,SUB42(fVar9 * fVar7,0),
                  SUB42(1.0 - fVar8 * (1.0 / (float)*(int *)(lVar4 + 0x4c)),0),
                  SUB42(fVar9 * (fVar6 + fVar7),0),param_2,&local_80,0);
    lVar3 = *(long *)(param_1 + 0xc0);
    lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
    fVar7 = 1.0 / (float)*(int *)(lVar4 + 0x48);
    FUN_100043664(0,fVar11,fVar12,local_78,0,SUB42(fVar7 * fVar8,0),
                  SUB42(1.0 - fVar9 * (1.0 / (float)*(int *)(lVar4 + 0x4c)),0),
                  SUB42(fVar7 * (fVar6 + fVar8),0),param_2,&local_80,0);
    lVar3 = *(long *)(param_1 + 200);
    lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
    fVar7 = 1.0 / (float)*(int *)(lVar4 + 0x48);
    FUN_100043664(SUB42(local_74 - fVar12,0),fVar11,local_74,local_78,0,SUB42(fVar7 * fVar6,0),
                  SUB42(1.0 - fVar9 * (1.0 / (float)*(int *)(lVar4 + 0x4c)),0),
                  SUB42(fVar7 * (fVar8 + fVar6),0),param_2,&local_80,0);
    if (6 < *(int *)((long)param_2 + 0xc) - (int)param_2[1]) {
      fVar10 = fVar10 * fVar15 * 0.5;
      fVar6 = (float)NEON_fminnm((int)(*(float *)(lVar2 + 0x18) * 255.0),0x437f0000);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x48));
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x4c));
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb0) + 4));
      fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb0) + 6));
      puVar5 = (undefined4 *)*param_2;
      *puVar5 = 0;
      puVar5[1] = local_78;
      puVar5[2] = 0;
      *(undefined2 *)(puVar5 + 3) = 0;
      *(undefined1 *)((long)puVar5 + 0xe) = 10;
      uVar1 = (undefined1)(int)fVar6;
      *(undefined1 *)((long)puVar5 + 0xf) = uVar1;
      puVar5[4] = fVar15 / fVar7;
      puVar5[5] = 1.0 - fVar9 / fVar11;
      lVar2 = *param_2;
      *(float *)(lVar2 + 0x18) = fVar10;
      fVar13 = fVar13 * fVar14 * 0.5;
      *param_2 = lVar2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar3 = *(long *)(param_1 + 0xb0);
      lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
      *(float *)(lVar2 + 0x1c) = local_78;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined2 *)(lVar2 + 0x24) = 0;
      *(undefined1 *)(lVar2 + 0x26) = 10;
      *(undefined1 *)(lVar2 + 0x27) = uVar1;
      *(float *)(lVar2 + 0x28) = fVar11 / fVar6;
      *(float *)(lVar2 + 0x2c) = 1.0 - (fVar15 + fVar14) / fVar9;
      lVar2 = *param_2;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *param_2 = lVar2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar3 = *(long *)(param_1 + 0xb0);
      lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
      *(float *)(lVar2 + 0x1c) = local_78 - fVar13;
      fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined2 *)(lVar2 + 0x24) = 0;
      *(undefined1 *)(lVar2 + 0x26) = 10;
      *(undefined1 *)(lVar2 + 0x27) = uVar1;
      *(float *)(lVar2 + 0x28) = (fVar9 + fVar14) / fVar6;
      *(float *)(lVar2 + 0x2c) = 1.0 - fVar15 / fVar11;
      lVar2 = *param_2;
      *param_2 = lVar2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x48));
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x4c));
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb0) + 4));
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb0) + 6));
      *(float *)(lVar2 + 0x18) = local_74;
      *(float *)(lVar2 + 0x1c) = local_78;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined2 *)(lVar2 + 0x24) = 0;
      *(undefined1 *)(lVar2 + 0x26) = 10;
      *(undefined1 *)(lVar2 + 0x27) = uVar1;
      *(float *)(lVar2 + 0x28) = fVar14 / fVar6;
      *(float *)(lVar2 + 0x2c) = 1.0 - fVar15 / fVar11;
      lVar2 = *param_2;
      *(float *)(lVar2 + 0x18) = local_74;
      *param_2 = lVar2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar3 = *(long *)(param_1 + 0xb0);
      lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
      fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
      *(float *)(lVar2 + 0x1c) = local_78 - fVar13;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined2 *)(lVar2 + 0x24) = 0;
      *(undefined1 *)(lVar2 + 0x26) = 10;
      *(undefined1 *)(lVar2 + 0x27) = uVar1;
      *(float *)(lVar2 + 0x28) = fVar11 / fVar9;
      *(float *)(lVar2 + 0x2c) = 1.0 - (fVar15 + fVar14) / fVar6;
      lVar2 = *param_2;
      *(float *)(lVar2 + 0x18) = local_74 - fVar10;
      *param_2 = lVar2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar3 = *(long *)(param_1 + 0xb0);
      lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 4));
      fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 6));
      fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      *(float *)(lVar2 + 0x1c) = local_78;
      *(undefined4 *)(lVar2 + 0x20) = 0;
      *(undefined2 *)(lVar2 + 0x24) = 0;
      *(undefined1 *)(lVar2 + 0x26) = 10;
      *(undefined1 *)(lVar2 + 0x27) = uVar1;
      *(float *)(lVar2 + 0x28) = (fVar6 + fVar11) / fVar10;
      *(float *)(lVar2 + 0x2c) = 1.0 - fVar14 / fVar13;
      *param_2 = *param_2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    }
  }
  return;
}




void FUN_1000ab57c(long param_1)

{
  FUN_1000ab014(param_1 + -0x88);
  return;
}




undefined8 FUN_1000ab584(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_1000ab59c(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_1000ab5b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101452038;
  param_1[0x11] = &PTR_FUN_101452148;
  thunk_FUN_100657580(param_1 + 0x14);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000ab5f0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101452038;
  param_1[0x11] = &PTR_FUN_101452148;
  thunk_FUN_100657580(param_1 + 0x14);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000ab630(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_101452038;
  *param_1 = &PTR_FUN_101452148;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064221c(param_1 + -0x11);
  return;
}




void FUN_1000ab668(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x11] = &PTR_FUN_101452038;
  *param_1 = &PTR_FUN_101452148;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064221c(param_1 + -0x11);
  operator_delete(pvVar1);
  return;
}




long FUN_1000ab6a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x12) = 0x7000000;
  puVar1[0x13] = uVar2;
  *puVar1 = &PTR_FUN_101452190;
  puVar1[0x11] = &PTR_FUN_1014522a0;
  puVar1 = puVar1 + 0x14;
  uVar2 = FUN_100657568(puVar1);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc4) = 0xff000000ff000000;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_1006575f4(uVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar2 = FUN_1006575c4(puVar1,"generic_gradient_vertical");
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"hud_vignette");
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




long thunk_FUN_1000ab6a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  uVar2 = DAT_101dbd2f0;
  *(undefined4 *)(puVar1 + 0x12) = 0x7000000;
  puVar1[0x13] = uVar2;
  *puVar1 = &PTR_FUN_101452190;
  puVar1[0x11] = &PTR_FUN_1014522a0;
  puVar1 = puVar1 + 0x14;
  uVar2 = FUN_100657568(puVar1);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc4) = 0xff000000ff000000;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_1006575f4(uVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar2 = FUN_1006575c4(puVar1,"generic_gradient_vertical");
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_1006575c4(puVar1,"hud_vignette");
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  return param_1;
}




void FUN_1000ab770(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],long param_4,
                  undefined4 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = (float)(*(uint *)(param_4 + 0x84) >> 7 & 0xff) * 0.003921569;
  if (fVar3 <= param_3._0_4_) {
    *(undefined4 *)(param_4 + 200) = param_5;
    if (0.05 <= fVar3) {
      *(undefined4 *)(param_4 + 0xcc) = 0x3e4ccccd;
    }
    else {
      *(undefined4 *)(param_4 + 0xc4) = param_5;
    }
    FUN_100642324(param_4);
    if (param_6 == 0) {
      uVar1 = FUN_100047714();
      FUN_10063fce0(param_3._0_8_);
      FUN_10063f0e8(param_1,uVar1);
      uVar2 = FUN_100047714();
      FUN_10063fce0(0);
      FUN_10063f0e8(param_2,uVar2);
      FUN_100642b7c(param_4,uVar1);
    }
  }
  return;
}




void FUN_1000ab858(long param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_3c [2];
  undefined1 uStack_3a;
  undefined1 uStack_39;
  float local_38;
  float local_34;
  
  if (0.0 < *(float *)(param_1 + 0xc0)) {
    FUN_10064142c(&local_34,&local_38);
    lVar4 = FUN_10003d5bc(param_1);
    local_34 = local_34 * *(float *)(lVar4 + 0x10);
    local_38 = local_38 * *(float *)(lVar4 + 0x14);
    fVar11 = *(float *)(lVar4 + 0x14) * 200.0;
    _local_3c = CONCAT13((char)(int)(*(float *)(lVar4 + 0x18) * 255.0),
                         (int3)*(undefined4 *)(param_1 + 0xc4));
    lVar4 = *(long *)(param_1 + 0xb0);
    lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
    fVar3 = 1.0 / (float)*(int *)(lVar5 + 0x48);
    FUN_100043664(0,0,local_34,fVar11,0,SUB42(fVar3 * fVar8,0),
                  SUB42(1.0 - fVar2 * (1.0 / (float)*(int *)(lVar5 + 0x4c)),0),
                  SUB42(fVar3 * (fVar1 + fVar8),0),param_2,local_3c,0);
    lVar4 = *(long *)(param_1 + 0xb0);
    lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
    fVar10 = 1.0 / (float)*(int *)(lVar5 + 0x48);
    FUN_100043664(0,SUB42(local_38 - fVar11,0),local_34,local_38,0,SUB42(fVar10 * fVar3,0),
                  SUB42(1.0 - (fVar2 + fVar8) * (1.0 / (float)*(int *)(lVar5 + 0x4c)),0),
                  SUB42(fVar10 * (fVar1 + fVar3),0),param_2,local_3c,0);
    if (6 < *(int *)((long)param_2 + 0xc) - (int)param_2[1]) {
      fVar2 = local_38 * 0.6666667;
      fVar1 = local_34 * 0.25;
      lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 6));
      puVar6 = (undefined4 *)*param_2;
      *puVar6 = 0;
      puVar6[1] = local_38;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = local_3c[0];
      *(undefined1 *)((long)puVar6 + 0xd) = local_3c[1];
      *(undefined1 *)((long)puVar6 + 0xe) = uStack_3a;
      *(undefined1 *)((long)puVar6 + 0xf) = uStack_39;
      puVar6[4] = fVar8 / fVar11;
      puVar6[5] = 1.0 - fVar10 / fVar3;
      lVar4 = *param_2;
      *(float *)(lVar4 + 0x18) = fVar1;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x48));
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
      *(float *)(lVar4 + 0x1c) = local_38;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = fVar8 / fVar3;
      *(float *)(lVar4 + 0x2c) = 1.0 - (fVar11 + fVar10) / fVar9;
      lVar7 = *param_2;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *param_2 = lVar7 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar4 = *(long *)(param_1 + 0xb8);
      lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x48));
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x4c));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
      fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
      *(float *)(lVar7 + 0x1c) = local_38 - fVar2;
      *(undefined4 *)(lVar7 + 0x20) = 0;
      *(undefined1 *)(lVar7 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar7 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar7 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar7 + 0x27) = uStack_39;
      *(float *)(lVar7 + 0x28) = (fVar9 + fVar10) / fVar3;
      *(float *)(lVar7 + 0x2c) = 1.0 - fVar11 / fVar8;
      lVar4 = *param_2;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x48));
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x4c));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 4));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 6));
      *(float *)(lVar4 + 0x18) = local_34;
      *(float *)(lVar4 + 0x1c) = local_38;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = fVar10 / fVar3;
      *(float *)(lVar4 + 0x2c) = 1.0 - fVar11 / fVar8;
      lVar4 = *param_2;
      *(float *)(lVar4 + 0x18) = local_34;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x48));
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x4c));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      *(float *)(lVar4 + 0x1c) = local_38 - fVar2;
      fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = fVar11 / fVar8;
      *(float *)(lVar4 + 0x2c) = 1.0 - (fVar3 + fVar9) / fVar10;
      lVar4 = *param_2;
      *(float *)(lVar4 + 0x18) = local_34 - fVar1;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x48));
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
      *(float *)(lVar4 + 0x1c) = local_38;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = (fVar11 + fVar8) / fVar9;
      *(float *)(lVar4 + 0x2c) = 1.0 - fVar10 / fVar3;
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x48));
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 6));
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = fVar8 / fVar11;
      *(float *)(lVar4 + 0x2c) = 1.0 - fVar10 / fVar3;
      lVar4 = *param_2;
      *(float *)(lVar4 + 0x18) = fVar1;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x48));
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
      *(undefined8 *)(lVar4 + 0x1c) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = fVar8 / fVar9;
      *(float *)(lVar4 + 0x2c) = 1.0 - (fVar11 + fVar10) / fVar3;
      lVar4 = *param_2;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x48));
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
      *(float *)(lVar4 + 0x1c) = fVar2;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = (fVar11 + fVar8) / fVar9;
      *(float *)(lVar4 + 0x2c) = 1.0 - fVar10 / fVar3;
      lVar4 = *param_2;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar11 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x48));
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xb8) + 6));
      *(float *)(lVar4 + 0x18) = local_34;
      *(undefined8 *)(lVar4 + 0x1c) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = fVar8 / fVar11;
      *(float *)(lVar4 + 0x2c) = 1.0 - fVar10 / fVar3;
      lVar4 = *param_2;
      *(float *)(lVar4 + 0x18) = local_34;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x48));
      fVar3 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x4c));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
      *(float *)(lVar4 + 0x1c) = fVar2;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = fVar8 / fVar9;
      *(float *)(lVar4 + 0x2c) = 1.0 - (fVar11 + fVar10) / fVar3;
      lVar4 = *param_2;
      *(float *)(lVar4 + 0x18) = local_34 - fVar1;
      *param_2 = lVar4 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar5 = *(long *)(param_1 + 0xb8);
      lVar7 = *(long *)(*(long *)(param_1 + 0xa0) + 8);
      fVar1 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x48));
      fVar2 = (float)NEON_ucvtf(*(undefined4 *)(lVar7 + 0x4c));
      fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
      fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
      fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
      *(undefined8 *)(lVar4 + 0x1c) = 0;
      *(undefined1 *)(lVar4 + 0x24) = local_3c[0];
      *(undefined1 *)(lVar4 + 0x25) = local_3c[1];
      *(undefined1 *)(lVar4 + 0x26) = uStack_3a;
      *(undefined1 *)(lVar4 + 0x27) = uStack_39;
      *(float *)(lVar4 + 0x28) = (fVar8 + fVar10) / fVar1;
      *(float *)(lVar4 + 0x2c) = 1.0 - fVar3 / fVar2;
      *param_2 = *param_2 + 0x18;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    }
  }
  return;
}




void FUN_1000abfc4(long param_1)

{
  FUN_1000ab858(param_1 + -0x88);
  return;
}




void FUN_1000abfcc(float param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0xcc);
  if (fVar2 < param_1) {
    *(undefined4 *)(param_2 + 0xcc) = 0;
    *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 200);
    uVar1 = *(uint *)(param_2 + 0x84);
    if ((float)(uVar1 >> 7 & 0xff) * 0.003921569 == 0.0) {
      uVar1 = uVar1 & 0xfffffffb;
    }
    else {
      uVar1 = uVar1 | 4;
    }
    *(uint *)(param_2 + 0x84) = uVar1;
    return;
  }
  fVar3 = param_1 / fVar2;
  *(char *)(param_2 + 0xc4) =
       (char)(int)((float)*(byte *)(param_2 + 0xc4) +
                  (float)(int)((uint)*(byte *)(param_2 + 200) - (uint)*(byte *)(param_2 + 0xc4)) *
                  fVar3);
  *(char *)(param_2 + 0xc5) =
       (char)(int)((float)*(byte *)(param_2 + 0xc5) +
                  (float)(int)((uint)*(byte *)(param_2 + 0xc9) - (uint)*(byte *)(param_2 + 0xc5)) *
                  fVar3);
  *(char *)(param_2 + 0xc6) =
       (char)(int)((float)*(byte *)(param_2 + 0xc6) +
                  (float)(int)((uint)*(byte *)(param_2 + 0xca) - (uint)*(byte *)(param_2 + 0xc6)) *
                  fVar3);
  *(float *)(param_2 + 0xcc) = fVar2 - param_1;
  return;
}




undefined8 FUN_1000ac088(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xa0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_1000ac0a0(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30;
  return 1;
}




void FUN_1000ac0b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101452190;
  param_1[0x11] = &PTR_FUN_1014522a0;
  thunk_FUN_100657580(param_1 + 0x14);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000ac0f4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101452190;
  param_1[0x11] = &PTR_FUN_1014522a0;
  thunk_FUN_100657580(param_1 + 0x14);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1000ac134(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_101452190;
  *param_1 = &PTR_FUN_1014522a0;
  thunk_FUN_100657580(param_1 + 3);
  FUN_10064221c(param_1 + -0x11);
  return;
}




void FUN_1000ac16c(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x11] = &PTR_FUN_101452190;
  *param_1 = &PTR_FUN_1014522a0;
  thunk_FUN_100657580(param_1 + 3);
  pvVar1 = (void *)FUN_10064221c(param_1 + -0x11);
  operator_delete(pvVar1);
  return;
}




long * FUN_1000ac1a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *local_40;
  code *pcStack_38;
  
  puVar5 = (undefined8 *)FUN_100655644();
  *puVar5 = &PTR_thunk_FUN_1000ac310_1014522e8;
  puVar5 = puVar5 + 0x2b;
  FUN_100269de4(puVar5);
  plVar1 = param_1 + 0x44;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x62;
  thunk_FUN_100650e64(plVar2);
  FUN_1004e313c(param_1 + 0x88);
  FUN_1004e313c(param_1 + 0x8a);
  *(undefined4 *)(param_1 + 0x8c) = 0x40000000;
  pcStack_38 = thunk_FUN_1000ac3f0;
  local_40 = param_1;
  FUN_100643618(0xbf800000,&local_40,0,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(puVar5,plVar2,1);
  uVar3 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1dc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_1000200a0(puVar5);
  }
  puVar4 = PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0;
  FUN_100652ca4(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar1,"hud_warning");
  FUN_100651038(plVar2,puVar4);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




long * thunk_FUN_1000ac1a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plStack_40;
  code *pcStack_38;
  
  puVar5 = (undefined8 *)FUN_100655644();
  *puVar5 = &PTR_thunk_FUN_1000ac310_1014522e8;
  puVar5 = puVar5 + 0x2b;
  FUN_100269de4(puVar5);
  plVar1 = param_1 + 0x44;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x62;
  thunk_FUN_100650e64(plVar2);
  FUN_1004e313c(param_1 + 0x88);
  FUN_1004e313c(param_1 + 0x8a);
  *(undefined4 *)(param_1 + 0x8c) = 0x40000000;
  pcStack_38 = thunk_FUN_1000ac3f0;
  plStack_40 = param_1;
  FUN_100643618(0xbf800000,&plStack_40,0,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  FUN_100642bd8(puVar5,plVar2,1);
  uVar3 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar3 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1dc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x7280;
    FUN_1000200a0(puVar5);
  }
  puVar4 = PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0;
  FUN_100652ca4(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar1,"hud_warning");
  FUN_100651038(plVar2,puVar4);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




void FUN_1000ac310(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1000ac310_1014522e8;
  pcStack_28 = thunk_FUN_1000ac3f0;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  if ((void *)param_1[0x8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b]);
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  if ((void *)param_1[0x89] != (void *)0x0) {
    operator_delete__((void *)param_1[0x89]);
    param_1[0x89] = 0;
    param_1[0x88] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x62);
  param_1[0x44] = &PTR_FUN_1014a7108;
  param_1[0x5b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e);
  FUN_10064e2bc(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000ac310(undefined8 *param_1)

{
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1000ac310_1014522e8;
  pcStack_28 = thunk_FUN_1000ac3f0;
  puStack_30 = param_1;
  FUN_100643a8c(&puStack_30);
  if ((void *)param_1[0x8b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8b]);
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  if ((void *)param_1[0x89] != (void *)0x0) {
    operator_delete__((void *)param_1[0x89]);
    param_1[0x89] = 0;
    param_1[0x88] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x62);
  param_1[0x44] = &PTR_FUN_1014a7108;
  param_1[0x5b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e);
  FUN_10064e2bc(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000ac3dc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000ac310();
  operator_delete(pvVar1);
  return;
}




void FUN_1000ac3f0(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1001311d4();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(float *)(param_2 + 0x460) = *(float *)(param_2 + 0x460) - param_1;
  fVar3 = (float)FUN_100147b08();
  if (*(float *)(param_2 + 0x460) <= 0.0) {
    FUN_1001479bc();
    *(undefined4 *)(param_2 + 0x460) = 0x40000000;
  }
  if (250.0 <= (float)(int)(fVar3 * 1000.0)) {
    if ((*(byte *)(param_2 + 0x218) & 1) != 0) goto LAB_1000ac490;
    uVar4 = 0x3f800000;
    uVar2 = 1;
  }
  else {
    if ((*(byte *)(param_2 + 0x218) & 1) == 0) goto LAB_1000ac490;
    uVar4 = 0x3f000000;
    uVar2 = 0;
  }
  FUN_100269e20(uVar4,param_2 + 0x158,uVar2,4,0);
LAB_1000ac490:
  if ((*(byte *)(param_2 + 0x218) & 1) == 0) {
    return;
  }
  FUN_1004e38ac(param_2 + 0x440,"%d ms");
  FUN_1006513c0(param_2 + 0x310,param_2 + 0x440);
  return;
}




void FUN_1000ac4e4(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  
  uVar3 = *(uint *)(param_1 + 0x84);
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)(param_1 + 0x84) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_1000200a0(param_1);
  }
  lVar1 = param_1 + 0x158;
  FUN_10064e47c(0x41200000,0x41200000,lVar1);
  if (*(float *)(param_1 + 0x264) != 2.0) {
    *(undefined4 *)(param_1 + 0x264) = 0x40000000;
    FUN_1000200a0(param_1 + 0x220);
  }
  lVar2 = param_1 + 0x310;
  FUN_10064e72c(0x41200000,lVar2,3,param_1 + 0x220,1);
  fVar5 = *(float *)(param_1 + 0x198);
  fVar6 = *(float *)(param_1 + 0x19c);
  bVar4 = false;
  if ((fVar6 == 0.0) && (bVar4 = false, !NAN(fVar5))) {
    bVar4 = fVar5 == 0.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    FUN_1000200a0(lVar1);
  }
  FUN_1004e3120(auStack_50,"9999 ms");
  FUN_1006513c0(lVar2,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1006557ec(param_1);
  FUN_1006513c0(lVar2,param_1 + 0x440);
  if ((*(float *)(param_1 + 0x198) != fVar5) || (*(float *)(param_1 + 0x19c) != fVar6)) {
    *(float *)(param_1 + 0x198) = fVar5;
    *(float *)(param_1 + 0x19c) = fVar6;
    FUN_1000200a0(lVar1);
  }
  return;
}




void FUN_1000ac61c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ac624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void thunk_FUN_1000ac3f0(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1001311d4();
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(float *)(param_2 + 0x460) = *(float *)(param_2 + 0x460) - param_1;
  fVar3 = (float)FUN_100147b08();
  if (*(float *)(param_2 + 0x460) <= 0.0) {
    FUN_1001479bc();
    *(undefined4 *)(param_2 + 0x460) = 0x40000000;
  }
  if (250.0 <= (float)(int)(fVar3 * 1000.0)) {
    if ((*(byte *)(param_2 + 0x218) & 1) != 0) goto LAB_1000ac490;
    uVar4 = 0x3f800000;
    uVar2 = 1;
  }
  else {
    if ((*(byte *)(param_2 + 0x218) & 1) == 0) goto LAB_1000ac490;
    uVar4 = 0x3f000000;
    uVar2 = 0;
  }
  FUN_100269e20(uVar4,param_2 + 0x158,uVar2,4,0);
LAB_1000ac490:
  if ((*(byte *)(param_2 + 0x218) & 1) == 0) {
    return;
  }
  FUN_1004e38ac(param_2 + 0x440,"%d ms");
  FUN_1006513c0(param_2 + 0x310,param_2 + 0x440);
  return;
}




long FUN_1000ac62c(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100183990();
  *puVar4 = &PTR_FUN_101452438;
  puVar4 = puVar4 + 0xbe;
  FUN_1006533a4(puVar4);
  lVar1 = param_1 + 0x6f0;
  thunk_FUN_100650e64(lVar1);
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x828) = 0;
  *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) & 0xfe;
  *(undefined8 *)(param_1 + 0x830) = 0;
  FUN_100642bd8(param_1 + 0x1a0,puVar4,1);
  FUN_100642bd8(param_1 + 0x1a0,lVar1,1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x640) == 0.5) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x644)))) {
    bVar3 = *(float *)(param_1 + 0x644) == 0.5;
  }
  if (!bVar3) {
    *(undefined1 **)(param_1 + 0x640) = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_100652ca4(puVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(puVar4,"circle_button_fill");
  FUN_100652dd4(puVar4,&DAT_10115a164,2);
  uVar2 = *(uint *)(param_1 + 0x674);
  if ((uVar2 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x674) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5f80;
    FUN_1000200a0(puVar4);
  }
  FUN_100653464(puVar4,FUN_1000ac7b0,param_1);
  FUN_100651594(lVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x740) != 0.5) || (*(float *)(param_1 + 0x744) != 0.5)) {
    *(undefined1 **)(param_1 + 0x740) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  FUN_100655b9c(param_1 + 0x7c0,0);
  return param_1;
}




void FUN_1000ac7b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x828),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"circle_button_fill");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




long thunk_FUN_1000ac62c(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_100183990();
  *puVar4 = &PTR_FUN_101452438;
  puVar4 = puVar4 + 0xbe;
  FUN_1006533a4(puVar4);
  lVar1 = param_1 + 0x6f0;
  thunk_FUN_100650e64(lVar1);
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x828) = 0;
  *(byte *)(param_1 + 0x82c) = *(byte *)(param_1 + 0x82c) & 0xfe;
  *(undefined8 *)(param_1 + 0x830) = 0;
  FUN_100642bd8(param_1 + 0x1a0,puVar4,1);
  FUN_100642bd8(param_1 + 0x1a0,lVar1,1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x640) == 0.5) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x644)))) {
    bVar3 = *(float *)(param_1 + 0x644) == 0.5;
  }
  if (!bVar3) {
    *(undefined1 **)(param_1 + 0x640) = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar4);
  }
  FUN_100652ca4(puVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(puVar4,"circle_button_fill");
  FUN_100652dd4(puVar4,&DAT_10115a164,2);
  uVar2 = *(uint *)(param_1 + 0x674);
  if ((uVar2 & 0x7f80) != 0x5f80) {
    *(uint *)(param_1 + 0x674) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5f80;
    FUN_1000200a0(puVar4);
  }
  FUN_100653464(puVar4,FUN_1000ac7b0,param_1);
  FUN_100651594(lVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x740) != 0.5) || (*(float *)(param_1 + 0x744) != 0.5)) {
    *(undefined1 **)(param_1 + 0x740) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  FUN_100655b9c(param_1 + 0x7c0,0);
  return param_1;
}




void FUN_1000ac860(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101452438;
  thunk_FUN_100651068(param_1 + 0xde);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void FUN_1000ac934(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101452438;
  thunk_FUN_100651068(param_1 + 0xde);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1000aca0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_1014525b8;
  puVar4 = puVar4 + 0x11;
  FUN_100269de4(puVar4);
  plVar1 = param_1 + 0x2a;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x48;
  FUN_100269de4(plVar2);
  thunk_FUN_1000b23dc(param_1 + 0x61,1);
  thunk_FUN_1000b23dc(param_1 + 0x110,2);
  thunk_FUN_1000867d4(param_1 + 0x1bf);
  thunk_FUN_100070a7c(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x25b) = 0x3f800000;
  *(byte *)((long)param_1 + 0x12dc) = *(byte *)((long)param_1 + 0x12dc) | 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1bf,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x228,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x61,1);
  FUN_100642bd8(plVar2,param_1 + 0x110,1);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 8;
  *(uint *)((long)param_1 + 0x11c4) = *(uint *)((long)param_1 + 0x11c4) | 8;
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x1d4);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1d4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x34) != 0.5) || (*(float *)((long)param_1 + 0x1a4) != 1.0)) {
    param_1[0x34] = 0x3f8000003f000000;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




long * thunk_FUN_1000aca0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_1014525b8;
  puVar4 = puVar4 + 0x11;
  FUN_100269de4(puVar4);
  plVar1 = param_1 + 0x2a;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x48;
  FUN_100269de4(plVar2);
  thunk_FUN_1000b23dc(param_1 + 0x61,1);
  thunk_FUN_1000b23dc(param_1 + 0x110,2);
  thunk_FUN_1000867d4(param_1 + 0x1bf);
  thunk_FUN_100070a7c(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x25b) = 0x3f800000;
  *(byte *)((long)param_1 + 0x12dc) = *(byte *)((long)param_1 + 0x12dc) | 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_100642bd8(puVar4,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1bf,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x228,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x61,1);
  FUN_100642bd8(plVar2,param_1 + 0x110,1);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 8;
  *(uint *)((long)param_1 + 0x11c4) = *(uint *)((long)param_1 + 0x11c4) | 8;
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x1d4);
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1d4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x34) != 0.5) || (*(float *)((long)param_1 + 0x1a4) != 1.0)) {
    param_1[0x34] = 0x3f8000003f000000;
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_1000acc10(long param_1)

{
  FUN_100086940(param_1 + 0xdf8,0);
  FUN_1000acc3c(param_1);
  return;
}




void FUN_1000acc3c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  
  FUN_100641464(&local_4c,&local_50);
  uVar6 = FUN_100641574("root-layer");
  local_58 = 1.0;
  local_54 = 0x3f800000;
  local_5c = 0.0;
  pbVar3 = (byte *)(param_3 + 0x12dc);
  if ((*pbVar3 & 1) == 0) {
    local_48 = (ulong)local_48._4_4_ << 0x20;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,1);
  }
  FUN_10012e9ac(&local_48,0,&local_54,&local_58,&local_5c,0,0,0);
  lVar1 = param_3 + 0xdf8;
  uVar7 = FUN_100126c88();
  fVar8 = (float)FUN_100086b0c(lVar1,uVar7);
  fVar11 = param_2;
  uVar9 = FUN_100086afc(lVar1);
  local_48 = CONCAT44(fVar11,uVar9);
  FUN_10064e48c(lVar1,&local_48);
  if ((*pbVar3 & 1) == 0) {
    local_48 = 0x3f800000;
    FUN_10064f27c(lVar1,&local_48);
    fVar10 = local_5c + 10.0;
    bVar4 = false;
    if ((*(float *)(param_3 + 0xe38) == local_4c + -10.0) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0xe3c)) && !NAN(fVar10))) {
      bVar4 = *(float *)(param_3 + 0xe3c) == fVar10;
    }
    fVar11 = local_58;
    if (!bVar4) {
      *(float *)(param_3 + 0xe38) = local_4c + -10.0;
      *(float *)(param_3 + 0xe3c) = fVar10;
      FUN_1000200a0(lVar1);
      fVar11 = local_58;
    }
LAB_1000acdb4:
    fVar8 = fVar11 * fVar8;
    fVar11 = fVar11 * param_2;
    bVar4 = false;
    if ((*(float *)(param_3 + 0xe40) == fVar8) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0xe44)) && !NAN(fVar11))) {
      bVar4 = *(float *)(param_3 + 0xe44) == fVar11;
    }
    if (bVar4) goto LAB_1000acde0;
  }
  else {
    iVar5 = FUN_100440cb4();
    if (iVar5 == 2) {
      local_48 = 0;
      FUN_10064f27c(lVar1,&local_48);
      if ((*(float *)(param_3 + 0xe38) != 10.0) || (*(float *)(param_3 + 0xe3c) != 10.0)) {
        uVar7 = NEON_fmov(0x41200000,4);
        *(undefined8 *)(param_3 + 0xe38) = uVar7;
        FUN_1000200a0(lVar1);
      }
      fVar11 = local_58 * 1.2;
      goto LAB_1000acdb4;
    }
    local_48 = 0x3f8000003f000000;
    FUN_10064f27c(lVar1,&local_48);
    fVar11 = (local_50 + -10.0) - local_5c;
    bVar4 = false;
    if ((*(float *)(param_3 + 0xe38) == local_4c * 0.5) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0xe3c)) && !NAN(fVar11))) {
      bVar4 = *(float *)(param_3 + 0xe3c) == fVar11;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0xe38) = local_4c * 0.5;
      *(float *)(param_3 + 0xe3c) = fVar11;
      FUN_1000200a0(lVar1);
    }
    fVar8 = local_58 * fVar8;
    fVar11 = local_58 * param_2;
    if ((*(float *)(param_3 + 0xe40) == fVar8) && (*(float *)(param_3 + 0xe44) == fVar11))
    goto LAB_1000acde0;
  }
  *(float *)(param_3 + 0xe40) = fVar8;
  *(float *)(param_3 + 0xe44) = fVar11;
  FUN_1000200a0(lVar1);
LAB_1000acde0:
  FUN_100086a78(lVar1);
  FUN_100072598(param_3 + 0x1140);
  FUN_10064e5ec(0,0,param_3 + 0x1140,5,uVar6,5);
  uVar9 = *(undefined4 *)(&DAT_10114be10 + (ulong)((*pbVar3 & 1) == 0) * 4);
  iVar5 = FUN_100440cb4();
  fVar11 = local_4c * 0.5;
  if (iVar5 != 2) {
    fVar11 = local_4c * 0.38;
  }
  uVar12 = NEON_fminnm(fVar11,local_4c * 0.5 + -40.0);
  lVar1 = param_3 + 0x308;
  FUN_1000b2720(local_54,lVar1);
  plVar2 = (long *)(param_3 + 0x880);
  FUN_1000b2720(local_54,plVar2);
  FUN_10064e47c(uVar12,uVar9,lVar1);
  FUN_10064e47c(uVar12,uVar9,plVar2);
  if ((*(float *)(param_3 + 0x348) != 0.0) || (*(float *)(param_3 + 0x34c) != local_50)) {
    *(undefined4 *)(param_3 + 0x348) = 0;
    *(float *)(param_3 + 0x34c) = local_50;
    FUN_1000200a0(lVar1);
  }
  local_48 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_3 + 0x308) + 0x28))(lVar1,&local_48);
  if ((*(float *)(param_3 + 0x8c0) != local_4c) || (*(float *)(param_3 + 0x8c4) != local_50)) {
    *(float *)(param_3 + 0x8c0) = local_4c;
    *(float *)(param_3 + 0x8c4) = local_50;
    FUN_1000200a0(plVar2);
  }
  local_48 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_48);
  FUN_1000b2790(lVar1);
  FUN_1000b2790(plVar2);
  if ((*pbVar3 & 1) != 0) {
    if ((*(float *)(param_3 + 400) != local_4c * 0.5) || (*(float *)(param_3 + 0x194) != local_50))
    {
      *(float *)(param_3 + 400) = local_4c * 0.5;
      *(float *)(param_3 + 0x194) = local_50;
      FUN_1000200a0(param_3 + 0x150);
    }
    FUN_100650ddc(lVar1);
    FUN_10064e47c(local_4c,local_50 * 1.2,param_3 + 0x150);
  }
  return;
}




void FUN_1000ad044(long param_1,int param_2)

{
  uint uVar1;
  
  *(byte *)(param_1 + 0x12dc) = *(byte *)(param_1 + 0x12dc) & 0xfe | (byte)param_2;
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x1d4) = *(uint *)(param_1 + 0x1d4) & 0xfffffffb | uVar1;
  return;
}




void FUN_1000ad078(float param_1,long param_2)

{
  bool bVar1;
  
  *(float *)(param_2 + 0x12d8) = param_1;
  bVar1 = false;
  if ((*(float *)(param_2 + 0x350) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x354)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0x354) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0x350) = param_1;
    *(float *)(param_2 + 0x354) = param_1;
    FUN_1000200a0(param_2 + 0x308);
    param_1 = *(float *)(param_2 + 0x12d8);
  }
  bVar1 = false;
  if ((*(float *)(param_2 + 0x8c8) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x8cc)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0x8cc) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0x8c8) = param_1;
    *(float *)(param_2 + 0x8cc) = param_1;
    FUN_1000200a0(param_2 + 0x880);
    return;
  }
  return;
}




void FUN_1000ad0ec(long param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 2) {
    *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) & 0xfffffffb;
    *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) & 0xfffffffb;
    return;
  }
  uVar1 = (uint)(0.0 < *(float *)(param_1 + 0x12d8));
  *(uint *)(param_1 + 0x38c) =
       *(uint *)(param_1 + 0x38c) & 0xfffffff8 | *(uint *)(param_1 + 0x38c) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x904) =
       *(uint *)(param_1 + 0x904) & 0xfffffff8 | *(uint *)(param_1 + 0x904) & 3 | uVar1 << 2;
  return;
}




void thunk_FUN_1000acc3c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  FUN_100641464(&fStack_4c,&fStack_50);
  uVar6 = FUN_100641574("root-layer");
  fStack_58 = 1.0;
  uStack_54 = 0x3f800000;
  fStack_5c = 0.0;
  pbVar3 = (byte *)(param_3 + 0x12dc);
  if ((*pbVar3 & 1) == 0) {
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
  }
  else {
    uStack_48 = CONCAT44(uStack_48._4_4_,1);
  }
  FUN_10012e9ac(&uStack_48,0,&uStack_54,&fStack_58,&fStack_5c,0,0,0);
  lVar1 = param_3 + 0xdf8;
  uVar7 = FUN_100126c88();
  fVar8 = (float)FUN_100086b0c(lVar1,uVar7);
  fVar11 = param_2;
  uVar9 = FUN_100086afc(lVar1);
  uStack_48 = CONCAT44(fVar11,uVar9);
  FUN_10064e48c(lVar1,&uStack_48);
  if ((*pbVar3 & 1) == 0) {
    uStack_48 = 0x3f800000;
    FUN_10064f27c(lVar1,&uStack_48);
    fVar10 = fStack_5c + 10.0;
    bVar4 = false;
    if ((*(float *)(param_3 + 0xe38) == fStack_4c + -10.0) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0xe3c)) && !NAN(fVar10))) {
      bVar4 = *(float *)(param_3 + 0xe3c) == fVar10;
    }
    fVar11 = fStack_58;
    if (!bVar4) {
      *(float *)(param_3 + 0xe38) = fStack_4c + -10.0;
      *(float *)(param_3 + 0xe3c) = fVar10;
      FUN_1000200a0(lVar1);
      fVar11 = fStack_58;
    }
LAB_1000acdb4:
    fVar8 = fVar11 * fVar8;
    fVar11 = fVar11 * param_2;
    bVar4 = false;
    if ((*(float *)(param_3 + 0xe40) == fVar8) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0xe44)) && !NAN(fVar11))) {
      bVar4 = *(float *)(param_3 + 0xe44) == fVar11;
    }
    if (bVar4) goto LAB_1000acde0;
  }
  else {
    iVar5 = FUN_100440cb4();
    if (iVar5 == 2) {
      uStack_48 = 0;
      FUN_10064f27c(lVar1,&uStack_48);
      if ((*(float *)(param_3 + 0xe38) != 10.0) || (*(float *)(param_3 + 0xe3c) != 10.0)) {
        uVar7 = NEON_fmov(0x41200000,4);
        *(undefined8 *)(param_3 + 0xe38) = uVar7;
        FUN_1000200a0(lVar1);
      }
      fVar11 = fStack_58 * 1.2;
      goto LAB_1000acdb4;
    }
    uStack_48 = 0x3f8000003f000000;
    FUN_10064f27c(lVar1,&uStack_48);
    fVar11 = (fStack_50 + -10.0) - fStack_5c;
    bVar4 = false;
    if ((*(float *)(param_3 + 0xe38) == fStack_4c * 0.5) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0xe3c)) && !NAN(fVar11))) {
      bVar4 = *(float *)(param_3 + 0xe3c) == fVar11;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0xe38) = fStack_4c * 0.5;
      *(float *)(param_3 + 0xe3c) = fVar11;
      FUN_1000200a0(lVar1);
    }
    fVar8 = fStack_58 * fVar8;
    fVar11 = fStack_58 * param_2;
    if ((*(float *)(param_3 + 0xe40) == fVar8) && (*(float *)(param_3 + 0xe44) == fVar11))
    goto LAB_1000acde0;
  }
  *(float *)(param_3 + 0xe40) = fVar8;
  *(float *)(param_3 + 0xe44) = fVar11;
  FUN_1000200a0(lVar1);
LAB_1000acde0:
  FUN_100086a78(lVar1);
  FUN_100072598(param_3 + 0x1140);
  FUN_10064e5ec(0,0,param_3 + 0x1140,5,uVar6,5);
  uVar9 = *(undefined4 *)(&DAT_10114be10 + (ulong)((*pbVar3 & 1) == 0) * 4);
  iVar5 = FUN_100440cb4();
  fVar11 = fStack_4c * 0.5;
  if (iVar5 != 2) {
    fVar11 = fStack_4c * 0.38;
  }
  uVar12 = NEON_fminnm(fVar11,fStack_4c * 0.5 + -40.0);
  lVar1 = param_3 + 0x308;
  FUN_1000b2720(uStack_54,lVar1);
  plVar2 = (long *)(param_3 + 0x880);
  FUN_1000b2720(uStack_54,plVar2);
  FUN_10064e47c(uVar12,uVar9,lVar1);
  FUN_10064e47c(uVar12,uVar9,plVar2);
  if ((*(float *)(param_3 + 0x348) != 0.0) || (*(float *)(param_3 + 0x34c) != fStack_50)) {
    *(undefined4 *)(param_3 + 0x348) = 0;
    *(float *)(param_3 + 0x34c) = fStack_50;
    FUN_1000200a0(lVar1);
  }
  uStack_48 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_3 + 0x308) + 0x28))(lVar1,&uStack_48);
  if ((*(float *)(param_3 + 0x8c0) != fStack_4c) || (*(float *)(param_3 + 0x8c4) != fStack_50)) {
    *(float *)(param_3 + 0x8c0) = fStack_4c;
    *(float *)(param_3 + 0x8c4) = fStack_50;
    FUN_1000200a0(plVar2);
  }
  uStack_48 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_48);
  FUN_1000b2790(lVar1);
  FUN_1000b2790(plVar2);
  if ((*pbVar3 & 1) != 0) {
    if ((*(float *)(param_3 + 400) != fStack_4c * 0.5) || (*(float *)(param_3 + 0x194) != fStack_50)
       ) {
      *(float *)(param_3 + 400) = fStack_4c * 0.5;
      *(float *)(param_3 + 0x194) = fStack_50;
      FUN_1000200a0(param_3 + 0x150);
    }
    FUN_100650ddc(lVar1);
    FUN_10064e47c(fStack_4c,fStack_50 * 1.2,param_3 + 0x150);
  }
  return;
}




void FUN_1000ad13c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  undefined4 uVar1;
  
  FUN_100269e20(param_2 + 0x240,param_3,3);
  uVar1 = 3;
  if ((*(byte *)(param_2 + 0x12dc) & 1) == 0) {
    uVar1 = 1;
  }
  FUN_1000868bc(param_1,param_2 + 0xdf8,(uint)param_3 | param_6,uVar1,1);
  FUN_100070cb4(param_1,param_2 + 0x1140,param_3,1,1);
  if ((*(byte *)(param_2 + 0x12dc) & 1) == 0) {
    return;
  }
  FUN_100269e20(param_1,param_2 + 0x88,param_3,3,param_5);
  return;
}




void FUN_1000ad204(long param_1,undefined8 param_2)

{
  FUN_1000b2b2c(param_1 + 0x308);
  FUN_1000b2b2c(param_1 + 0x880,param_2);
  return;
}




void FUN_1000ad234(long param_1,undefined8 param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_100345bbc(param_2);
  if (iVar1 == 1) {
    FUN_1000b2994(param_1 + 0x308,param_2);
    puVar2 = (uint *)(param_1 + 0x38c);
  }
  else {
    iVar1 = FUN_100345bbc(param_2);
    if (iVar1 != 2) goto LAB_1000ad2a4;
    FUN_1000b2994(param_1 + 0x880,param_2);
    puVar2 = (uint *)(param_1 + 0x904);
  }
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(0.0 < *(float *)(param_1 + 0x12d8)) << 2;
LAB_1000ad2a4:
  FUN_1000acc3c(param_1);
  return;
}




void FUN_1000ad2b4(long param_1)

{
  FUN_100071508(param_1 + 0x1140);
  return;
}




void FUN_1000ad2c0(long param_1)

{
  FUN_100071f20(param_1 + 0x1140);
  return;
}




void FUN_1000ad2cc(long param_1)

{
  FUN_100072370(param_1 + 0x1140);
  return;
}




void FUN_1000ad2d8(long param_1)

{
  thunk_FUN_1000b2660(param_1 + 0x308);
  thunk_FUN_1000b2660(param_1 + 0x880);
  return;
}




void FUN_1000ad300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014525b8;
  thunk_FUN_100070b80(param_1 + 0x228);
  thunk_FUN_1000868c8(param_1 + 0x1bf);
  thunk_FUN_1000b2598(param_1 + 0x110);
  thunk_FUN_1000b2598(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_1014a7108;
  param_1[0x41] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2a);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1000ad38c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014525b8;
  thunk_FUN_100070b80(param_1 + 0x228);
  thunk_FUN_1000868c8(param_1 + 0x1bf);
  thunk_FUN_1000b2598(param_1 + 0x110);
  thunk_FUN_1000b2598(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_1014a7108;
  param_1[0x41] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2a);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1000ad41c(long *param_1)

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
  uint uVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float local_7c;
  undefined1 *local_78;
  
  puVar14 = (undefined8 *)FUN_10064e20c();
  *puVar14 = &PTR_thunk_FUN_10004ed14_1014526b8;
  puVar14 = puVar14 + 0x17;
  FUN_100269de4(puVar14);
  plVar1 = param_1 + 0x30;
  FUN_1006421a8(plVar1);
  param_1[0x30] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x41;
  FUN_1006421a8(plVar2);
  param_1[0x41] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x52;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x70;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x8e;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xac;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0xca;
  FUN_1000ae5b8(plVar7,1);
  plVar8 = param_1 + 0x192;
  FUN_1000ae5b8(plVar8,0);
  plVar9 = param_1 + 0x25a;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x278;
  thunk_FUN_100650e64(plVar10);
  FUN_1004e313c(param_1 + 0x29e);
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  FUN_100642bd8(puVar14,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar9,1);
  FUN_100642bd8(plVar1,plVar7,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x314);
  if ((uVar11 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x314) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2c80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar11 = *(uint *)((long)param_1 + 0x404);
  if ((uVar11 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x404) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar11 = *(uint *)((long)param_1 + 0x4f4);
  if ((uVar11 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x4f4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar11 = *(uint *)((long)param_1 + 0x5e4);
  if ((uVar11 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x5e4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
    FUN_1000200a0(plVar6);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar11 = *(uint *)((long)param_1 + 0x1444);
  if ((uVar11 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1444) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x6600;
    FUN_1000200a0(plVar10);
  }
  FUN_1006516bc(plVar10,&DAT_101d22fe8);
  FUN_10065165c(plVar10,1);
  bVar12 = false;
  if ((*(float *)((long)param_1 + 0x1414) == 0.0) &&
     (bVar12 = false, !NAN(*(float *)(param_1 + 0x282)))) {
    bVar12 = *(float *)(param_1 + 0x282) == 0.0;
  }
  if (!bVar12) {
    param_1[0x282] = 0;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_scoreboard_cross_swords");
  fVar15 = *(float *)((long)param_1 + 0x1314);
  bVar12 = false;
  if ((fVar15 == 0.0) && (bVar12 = false, !NAN(*(float *)(param_1 + 0x262)))) {
    bVar12 = *(float *)(param_1 + 0x262) == 0.0;
  }
  if (!bVar12) {
    param_1[0x262] = 0;
    FUN_1000200a0(plVar9);
  }
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x25a] + 0x28))(plVar9,&local_78);
  FUN_100652e60(plVar9);
  fVar15 = 28.0 / fVar15;
  if ((*(float *)(param_1 + 0x263) != fVar15) || (*(float *)((long)param_1 + 0x131c) != fVar15)) {
    *(float *)(param_1 + 0x263) = fVar15;
    *(float *)((long)param_1 + 0x131c) = fVar15;
    FUN_1000200a0(plVar9);
  }
  fVar15 = (float)FUN_10065317c(plVar9);
  fVar16 = fVar15 * 0.5 + 10.0;
  fVar15 = -(fVar15 * 0.5) - 10.0;
  if ((*(float *)(param_1 + 0xd2) != fVar15) || (*(float *)((long)param_1 + 0x694) != 0.0)) {
    *(float *)(param_1 + 0xd2) = fVar15;
    *(undefined4 *)((long)param_1 + 0x694) = 0;
    FUN_1000200a0(plVar7);
  }
  local_78 = (undefined1 *)0x3f0000003f800000;
  (**(code **)(param_1[0xca] + 0x28))(plVar7,&local_78);
  if ((*(float *)(param_1 + 0x19a) != fVar16) || (*(float *)((long)param_1 + 0xcd4) != 0.0)) {
    *(float *)(param_1 + 0x19a) = fVar16;
    *(undefined4 *)((long)param_1 + 0xcd4) = 0;
    FUN_1000200a0(plVar8);
  }
  local_78 = (undefined1 *)0x3f00000000000000;
  (**(code **)(param_1[0x192] + 0x28))(plVar8,&local_78);
  FUN_1000ad980(param_1);
  local_7c = 1.0;
  local_78 = (undefined1 *)((ulong)local_78 & 0xffffffff00000000);
  FUN_10012e9ac(&local_78,&local_7c,0,0,0,0,0,0);
  FUN_1003467f8();
  iVar13 = FUN_10034ced0();
  if (iVar13 == 0) {
    if ((int)local_78 != 1) goto LAB_1000ad950;
  }
  else {
    local_78 = (undefined1 *)CONCAT44(local_78._4_4_,1);
  }
  if (local_7c <= 0.0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  }
  else {
    fVar15 = (float)NEON_fminnm(local_7c,0x40800000);
    if (fVar15 <= 0.5) {
      fVar15 = 0.5;
    }
    if ((*(float *)(param_1 + 9) != fVar15) || (*(float *)((long)param_1 + 0x4c) != fVar15)) {
      *(float *)(param_1 + 9) = fVar15;
      *(float *)((long)param_1 + 0x4c) = fVar15;
      FUN_1000200a0(param_1);
    }
  }
LAB_1000ad950:
  FUN_1000ada38(param_1);
  return param_1;
}




void FUN_1000ad980(long param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1000ae058(0x47c15c00,param_1 + 0x650,6,99);
  FUN_1000ae058(0x47c15c00,param_1 + 0xc90,6,99);
  lVar1 = param_1 + 0x13c0;
  FUN_1004e3120(auStack_40,"99:99");
  FUN_1006513c0(lVar1,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  fVar2 = (float)FUN_100651184(lVar1);
  fVar2 = fVar2 * -0.5 + -2.5;
  if (*(float *)(param_1 + 0x1400) != fVar2) {
    *(float *)(param_1 + 0x1400) = fVar2;
    FUN_1000200a0(lVar1);
  }
  return;
}




void FUN_1000ada38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_60 [4];
  float local_5c;
  undefined8 local_58;
  
  FUN_1000ad980();
  FUN_100641464(&local_5c,auStack_60);
  fVar9 = (local_5c * 0.5) / *(float *)(param_1 + 0x48);
  lVar1 = param_1 + 0x650;
  fVar6 = (float)FUN_100651184(param_1 + 0xb48);
  fVar6 = fVar6 * 0.5 + 10.0;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1c0) == fVar9) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x1c4)) && !NAN(fVar6))) {
    bVar5 = *(float *)(param_1 + 0x1c4) == fVar6;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x1c0) = fVar9;
    *(float *)(param_1 + 0x1c4) = fVar6;
    FUN_1000200a0(param_1 + 0x180);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(param_1 + 0x180,&local_58);
  FUN_1000ae1c0(lVar1);
  FUN_1000ae1c0(param_1 + 0xc90);
  lVar2 = param_1 + 0x290;
  fVar6 = (float)FUN_10064e3cc(lVar1);
  fVar9 = (float)FUN_10064e3cc(param_1 + 0xc90);
  fVar6 = fVar6 + 120.0;
  fVar9 = fVar6 + fVar9;
  FUN_10064e3cc(lVar1);
  fVar6 = fVar6 + -5.0;
  FUN_10064e47c(fVar9,lVar2);
  lVar1 = param_1 + 0x380;
  FUN_100652e60(lVar2);
  fVar6 = fVar6 + -2.0;
  FUN_10064e47c(0x40000000,lVar1);
  lVar3 = param_1 + 0x470;
  uVar7 = FUN_100652e60(lVar1);
  local_58 = (undefined1 *)CONCAT44(fVar6,uVar7);
  FUN_10064e48c(lVar3,&local_58);
  lVar4 = param_1 + 0x560;
  uVar8 = FUN_100652e60(lVar2);
  FUN_10064e47c(uVar8,0x40000000,lVar4);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x2d4) == 0.0) && (bVar5 = false, !NAN(*(float *)(param_1 + 0x2d0)))) {
    bVar5 = *(float *)(param_1 + 0x2d0) == 0.0;
  }
  if (!bVar5) {
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    FUN_1000200a0(lVar2);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x290) + 0x28))(lVar2,&local_58);
  fVar6 = (float)FUN_100652e60(lVar2);
  if ((*(float *)(param_1 + 0x3c0) != fVar6 * -0.5) || (*(float *)(param_1 + 0x3c4) != 0.0)) {
    *(float *)(param_1 + 0x3c0) = fVar6 * -0.5;
    *(undefined4 *)(param_1 + 0x3c4) = 0;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x380) + 0x28))(lVar1,&local_58);
  fVar6 = (float)FUN_100652e60(lVar2);
  fVar9 = *(float *)(param_1 + 0x4b0);
  if ((fVar9 != fVar6 * 0.5) || (fVar9 = *(float *)(param_1 + 0x4b4), fVar9 != 0.0)) {
    *(float *)(param_1 + 0x4b0) = fVar6 * 0.5;
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    FUN_1000200a0(lVar3);
  }
  local_58 = (undefined1 *)0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x470) + 0x28))(lVar3,&local_58);
  FUN_100652e60(lVar2);
  fVar6 = *(float *)(param_1 + 0x5a0);
  if ((fVar6 != 0.0) || (fVar6 = *(float *)(param_1 + 0x5a4), fVar6 != fVar9 * 0.5)) {
    *(undefined4 *)(param_1 + 0x5a0) = 0;
    *(float *)(param_1 + 0x5a4) = fVar9 * 0.5;
    FUN_1000200a0(lVar4);
  }
  local_58 = (undefined1 *)0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0x560) + 0x28))(lVar4,&local_58);
  fVar9 = *(float *)(param_1 + 0x2d4);
  FUN_10065317c(lVar2);
  fVar6 = fVar9 + 10.0 + fVar6 * 0.5;
  if (*(float *)(param_1 + 0x1404) != fVar6) {
    *(float *)(param_1 + 0x1404) = fVar6;
    FUN_1000200a0(param_1 + 0x13c0);
  }
  return;
}




long * thunk_FUN_1000ad41c(long *param_1)

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
  uint uVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fStack_7c;
  undefined1 *puStack_78;
  
  puVar14 = (undefined8 *)FUN_10064e20c();
  *puVar14 = &PTR_thunk_FUN_10004ed14_1014526b8;
  puVar14 = puVar14 + 0x17;
  FUN_100269de4(puVar14);
  plVar1 = param_1 + 0x30;
  FUN_1006421a8(plVar1);
  param_1[0x30] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x41;
  FUN_1006421a8(plVar2);
  param_1[0x41] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x52;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x70;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x8e;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xac;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0xca;
  FUN_1000ae5b8(plVar7,1);
  plVar8 = param_1 + 0x192;
  FUN_1000ae5b8(plVar8,0);
  plVar9 = param_1 + 0x25a;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x278;
  thunk_FUN_100650e64(plVar10);
  FUN_1004e313c(param_1 + 0x29e);
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  FUN_100642bd8(puVar14,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar9,1);
  FUN_100642bd8(plVar1,plVar7,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x314);
  if ((uVar11 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x314) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2c80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar11 = *(uint *)((long)param_1 + 0x404);
  if ((uVar11 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x404) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar11 = *(uint *)((long)param_1 + 0x4f4);
  if ((uVar11 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x4f4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  uVar11 = *(uint *)((long)param_1 + 0x5e4);
  if ((uVar11 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x5e4) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x1980;
    FUN_1000200a0(plVar6);
  }
  FUN_100651594(plVar10,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar11 = *(uint *)((long)param_1 + 0x1444);
  if ((uVar11 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1444) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x6600;
    FUN_1000200a0(plVar10);
  }
  FUN_1006516bc(plVar10,&DAT_101d22fe8);
  FUN_10065165c(plVar10,1);
  bVar12 = false;
  if ((*(float *)((long)param_1 + 0x1414) == 0.0) &&
     (bVar12 = false, !NAN(*(float *)(param_1 + 0x282)))) {
    bVar12 = *(float *)(param_1 + 0x282) == 0.0;
  }
  if (!bVar12) {
    param_1[0x282] = 0;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_scoreboard_cross_swords");
  fVar15 = *(float *)((long)param_1 + 0x1314);
  bVar12 = false;
  if ((fVar15 == 0.0) && (bVar12 = false, !NAN(*(float *)(param_1 + 0x262)))) {
    bVar12 = *(float *)(param_1 + 0x262) == 0.0;
  }
  if (!bVar12) {
    param_1[0x262] = 0;
    FUN_1000200a0(plVar9);
  }
  puStack_78 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x25a] + 0x28))(plVar9,&puStack_78);
  FUN_100652e60(plVar9);
  fVar15 = 28.0 / fVar15;
  if ((*(float *)(param_1 + 0x263) != fVar15) || (*(float *)((long)param_1 + 0x131c) != fVar15)) {
    *(float *)(param_1 + 0x263) = fVar15;
    *(float *)((long)param_1 + 0x131c) = fVar15;
    FUN_1000200a0(plVar9);
  }
  fVar15 = (float)FUN_10065317c(plVar9);
  fVar16 = fVar15 * 0.5 + 10.0;
  fVar15 = -(fVar15 * 0.5) - 10.0;
  if ((*(float *)(param_1 + 0xd2) != fVar15) || (*(float *)((long)param_1 + 0x694) != 0.0)) {
    *(float *)(param_1 + 0xd2) = fVar15;
    *(undefined4 *)((long)param_1 + 0x694) = 0;
    FUN_1000200a0(plVar7);
  }
  puStack_78 = (undefined1 *)0x3f0000003f800000;
  (**(code **)(param_1[0xca] + 0x28))(plVar7,&puStack_78);
  if ((*(float *)(param_1 + 0x19a) != fVar16) || (*(float *)((long)param_1 + 0xcd4) != 0.0)) {
    *(float *)(param_1 + 0x19a) = fVar16;
    *(undefined4 *)((long)param_1 + 0xcd4) = 0;
    FUN_1000200a0(plVar8);
  }
  puStack_78 = (undefined1 *)0x3f00000000000000;
  (**(code **)(param_1[0x192] + 0x28))(plVar8,&puStack_78);
  FUN_1000ad980(param_1);
  fStack_7c = 1.0;
  puStack_78 = (undefined1 *)((ulong)puStack_78 & 0xffffffff00000000);
  FUN_10012e9ac(&puStack_78,&fStack_7c,0,0,0,0,0,0);
  FUN_1003467f8();
  iVar13 = FUN_10034ced0();
  if (iVar13 == 0) {
    if ((int)puStack_78 != 1) goto LAB_1000ad950;
  }
  else {
    puStack_78 = (undefined1 *)CONCAT44(puStack_78._4_4_,1);
  }
  if (fStack_7c <= 0.0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  }
  else {
    fVar15 = (float)NEON_fminnm(fStack_7c,0x40800000);
    if (fVar15 <= 0.5) {
      fVar15 = 0.5;
    }
    if ((*(float *)(param_1 + 9) != fVar15) || (*(float *)((long)param_1 + 0x4c) != fVar15)) {
      *(float *)(param_1 + 9) = fVar15;
      *(float *)((long)param_1 + 0x4c) = fVar15;
      FUN_1000200a0(param_1);
    }
  }
LAB_1000ad950:
  FUN_1000ada38(param_1);
  return param_1;
}




void FUN_1000add20(long param_1)

{
  FUN_1000adda0();
  FUN_1000320fc();
  FUN_100032244();
  FUN_1004e38ac(param_1 + 0x14f0,"%d:%02d");
  FUN_1006513c0(param_1 + 0x13c0,param_1 + 0x14f0);
  return;
}




void FUN_1000adda0(long param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  long local_230 [3];
  undefined **local_218 [3];
  long local_200 [16];
  long local_180 [32];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10045c684(local_218);
  local_218[0] = &PTR_FUN_10149d248;
  uVar2 = FUN_1003a6ce4(local_218,local_180,0x20,0);
  if (uVar2 == 0) {
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    iVar9 = 0;
    plVar12 = local_180;
    uVar13 = (ulong)uVar2;
    do {
      uVar7 = (ulong)*(ushort *)(*plVar12 + 0x88) & 0x1f;
      if (((int)uVar7 == 0x1f) || (1 < *(ushort *)(*plVar12 + uVar7 * 0x38 + 0x90) - 3)) {
        iVar3 = FUN_100345bbc();
        if (iVar3 == 1) {
          iVar10 = iVar10 + 1;
        }
        else {
          iVar9 = iVar9 + 1;
        }
      }
      plVar12 = plVar12 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_1003a8de8(local_230);
  uVar2 = FUN_1003a6ce4(local_230,local_200,0x10,0);
  FUN_1003467f8();
  uVar13 = FUN_10034cf58();
  if ((uVar13 & 1) == 0) {
    iVar11 = 0;
    iVar3 = 0;
    if (uVar2 != 0) {
      plVar12 = local_200;
      uVar13 = (ulong)uVar2;
      do {
        iVar4 = FUN_100345bbc(*plVar12);
        lVar8 = *(long *)(*plVar12 + 0x40);
        fVar14 = *(float *)(lVar8 + 0xdc) +
                 *(float *)(lVar8 + 400) * (*(float *)(lVar8 + 0x2f8) + 1.0);
        if (iVar4 == 1) {
          NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar8 + 0x244),DAT_101dc5ab4);
          iVar3 = (int)(DAT_101dc59f4 + (float)iVar3);
        }
        else {
          NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar8 + 0x244),DAT_101dc5ab4);
          iVar11 = (int)(DAT_101dc59f4 + (float)iVar11);
        }
        plVar12 = plVar12 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      goto LAB_1000adfa0;
    }
  }
  else {
    local_230[0] = 0;
    FUN_1010a1958(local_230,1,DAT_10184de50,0);
    lVar8 = local_230[0];
    uVar5 = FUN_10046ccac(1);
    plVar12 = (long *)(lVar8 + 0x28);
    piVar6 = (int *)(**(code **)(*plVar12 + 0x18))(plVar12,uVar5);
    iVar3 = *piVar6;
    uVar5 = FUN_10046ccac(2);
    piVar6 = (int *)(**(code **)(*plVar12 + 0x18))(plVar12,uVar5);
    iVar11 = *piVar6;
LAB_1000adfa0:
    if (uVar2 != 0) {
      uVar13 = (ulong)uVar2;
      fVar16 = 0.0;
      fVar14 = 0.0;
      plVar12 = local_200;
      do {
        iVar4 = FUN_100345bbc(*plVar12);
        fVar15 = *(float *)(*(long *)(*plVar12 + 0x40) + 0x324);
        fVar1 = fVar15 + fVar14;
        if (iVar4 != 1) {
          fVar1 = fVar14;
          fVar16 = fVar15 + fVar16;
        }
        fVar14 = fVar1;
        uVar13 = uVar13 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar13 != 0);
      goto LAB_1000adff0;
    }
  }
  fVar14 = 0.0;
  fVar16 = 0.0;
LAB_1000adff0:
  FUN_1000ae058(fVar14,param_1 + 0x650,iVar10,iVar3);
  FUN_1000ae058(fVar16,param_1 + 0xc90,iVar9,iVar11);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1000ae058(float param_1,long param_2)

{
  long lVar1;
  void *local_70 [2];
  char local_59;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = param_2 + 0x628;
  FUN_1004e38ac(lVar1,"%d");
  FUN_1006513c0(param_2 + 0x1a8,lVar1);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_1 <= 1e+06) {
    if (1000.0 < param_1) {
      FUN_10001549c(local_70,"k");
      std::string::operator=((string *)&local_58,(string *)local_70);
      if (local_59 < '\0') {
        operator_delete(local_70[0]);
      }
    }
  }
  else {
    FUN_10001549c(local_70,"M");
    std::string::operator=((string *)&local_58,(string *)local_70);
    if (local_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  FUN_1004e38ac(lVar1,"%.1f%s");
  FUN_1006513c0(param_2 + 0x3c8,lVar1);
  FUN_1004e38ac(lVar1,"%d");
  FUN_1006513c0(param_2 + 0x4f8,lVar1);
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void thunk_FUN_1000ada38(void)

{
  FUN_1000ada38();
  return;
}




void FUN_1000ae1c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 local_48;
  
  lVar1 = param_1 + 0x4f8;
  bVar5 = *(float *)(param_1 + 0x538) != 0.0;
  bVar4 = *(float *)(param_1 + 0x53c) != 0.0;
  if (*(char *)(param_1 + 0x638) == '\0') {
    if (bVar5 || bVar4) {
      *(undefined8 *)(param_1 + 0x538) = 0;
      FUN_1000200a0(lVar1);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x4f8) + 0x28))(lVar1,&local_48);
    lVar2 = param_1 + 0x2d8;
    fVar6 = (float)FUN_100651184(lVar1);
    if ((*(float *)(param_1 + 0x318) != fVar6 + 20.0) || (*(float *)(param_1 + 0x31c) != 0.0)) {
      *(float *)(param_1 + 0x318) = fVar6 + 20.0;
      *(undefined4 *)(param_1 + 0x31c) = 0;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar2,&local_48);
    lVar3 = param_1 + 0x3c8;
    fVar7 = *(float *)(param_1 + 0x318);
    fVar6 = (float)FUN_10065317c(lVar2);
    fVar7 = fVar7 + fVar6 + 4.0;
    bVar5 = false;
    if ((*(float *)(param_1 + 0x408) == fVar7) && (bVar5 = false, !NAN(*(float *)(param_1 + 0x40c)))
       ) {
      bVar5 = *(float *)(param_1 + 0x40c) == -3.0;
    }
    if (!bVar5) {
      *(float *)(param_1 + 0x408) = fVar7;
      *(undefined4 *)(param_1 + 0x40c) = 0xc0400000;
      FUN_1000200a0(lVar3);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3c8) + 0x28))(lVar3,&local_48);
    lVar2 = param_1 + 0xb8;
    fVar7 = *(float *)(param_1 + 0x408);
    fVar6 = (float)FUN_100651184(lVar3);
    fVar7 = fVar7 + fVar6 + 17.0;
    if ((*(float *)(param_1 + 0xf8) != fVar7) || (*(float *)(param_1 + 0xfc) != 0.0)) {
      *(float *)(param_1 + 0xf8) = fVar7;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0xb8) + 0x28))(lVar2,&local_48);
    lVar3 = param_1 + 0x1a8;
    fVar7 = *(float *)(param_1 + 0xf8);
    fVar6 = (float)FUN_10065317c(lVar2);
    fVar7 = fVar7 + fVar6 + 4.0;
    if ((*(float *)(param_1 + 0x1e8) != fVar7) || (*(float *)(param_1 + 0x1ec) != -3.0)) {
      *(float *)(param_1 + 0x1e8) = fVar7;
      *(undefined4 *)(param_1 + 0x1ec) = 0xc0400000;
      FUN_1000200a0(lVar3);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x1a8) + 0x28))(lVar3,&local_48);
    fVar7 = *(float *)(param_1 + 0x1e8);
    fVar6 = (float)FUN_100651184(lVar3);
    fVar6 = fVar6 + fVar7;
  }
  else {
    if (bVar5 || bVar4) {
      *(undefined8 *)(param_1 + 0x538) = 0;
      FUN_1000200a0(lVar1);
    }
    local_48 = 0x3f0000003f800000;
    (**(code **)(*(long *)(param_1 + 0x4f8) + 0x28))(lVar1,&local_48);
    lVar2 = param_1 + 0x3c8;
    fVar6 = (float)FUN_100651184(lVar1);
    fVar7 = (float)FUN_100651184(lVar2);
    fVar6 = -17.0 - (fVar6 + fVar7);
    bVar5 = false;
    if ((*(float *)(param_1 + 0x408) == fVar6) && (bVar5 = false, !NAN(*(float *)(param_1 + 0x40c)))
       ) {
      bVar5 = *(float *)(param_1 + 0x40c) == -3.0;
    }
    if (!bVar5) {
      *(float *)(param_1 + 0x408) = fVar6;
      *(undefined4 *)(param_1 + 0x40c) = 0xc0400000;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3c8) + 0x28))(lVar2,&local_48);
    lVar2 = param_1 + 0x2d8;
    fVar7 = *(float *)(param_1 + 0x408);
    fVar6 = (float)FUN_10065317c(lVar2);
    fVar6 = (fVar7 - fVar6) + -4.0;
    if ((*(float *)(param_1 + 0x318) != fVar6) || (*(float *)(param_1 + 0x31c) != 0.0)) {
      *(float *)(param_1 + 0x318) = fVar6;
      *(undefined4 *)(param_1 + 0x31c) = 0;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar2,&local_48);
    lVar2 = param_1 + 0x1a8;
    fVar6 = *(float *)(param_1 + 0x318);
    fVar7 = (float)FUN_100651184(lVar2);
    fVar7 = (fVar6 + -20.0) - fVar7;
    bVar5 = false;
    if ((*(float *)(param_1 + 0x1e8) == fVar7) && (bVar5 = false, !NAN(*(float *)(param_1 + 0x1ec)))
       ) {
      bVar5 = *(float *)(param_1 + 0x1ec) == -3.0;
    }
    if (!bVar5) {
      *(float *)(param_1 + 0x1e8) = fVar7;
      *(undefined4 *)(param_1 + 0x1ec) = 0xc0400000;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x1a8) + 0x28))(lVar2,&local_48);
    lVar2 = param_1 + 0xb8;
    fVar7 = *(float *)(param_1 + 0x1e8);
    fVar6 = (float)FUN_10065317c(lVar2);
    fVar6 = (fVar7 - fVar6) + -4.0;
    if ((*(float *)(param_1 + 0xf8) != fVar6) || (*(float *)(param_1 + 0xfc) != 0.0)) {
      *(float *)(param_1 + 0xf8) = fVar6;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      FUN_1000200a0(lVar2);
    }
    local_48 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0xb8) + 0x28))(lVar2,&local_48);
    fVar6 = -*(float *)(param_1 + 0xf8);
  }
  FUN_100651184(lVar1);
  FUN_10064e47c(fVar6,param_1);
  return;
}




void FUN_1000ae5b0(long param_1)

{
  FUN_100269e20(param_1 + 0xb8);
  return;
}




long * FUN_1000ae5b8(undefined1 param_1 [16],float param_2,long *param_3,undefined1 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 local_70;
  undefined4 local_64;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_10004ee3c_10144cfd0;
  puVar7 = puVar7 + 0x17;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_3 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_3 + 0x5b;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_3 + 0x79;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_3 + 0x9f;
  thunk_FUN_100650e64(plVar4);
  FUN_1004e313c(param_3 + 0xc5);
  *(undefined1 *)(param_3 + 199) = param_4;
  (**(code **)(*param_3 + 0x78))(param_3,puVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  puVar5 = &DAT_101dc57dc;
  if ((char)param_3[199] != '\0') {
    puVar5 = &DAT_101dc57d8;
  }
  local_64 = *puVar5;
  FUN_100652cac(puVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_pingicon_action_turret");
  FUN_100652dd4(puVar7,&local_64,2);
  FUN_100652e60(puVar7);
  param_2 = 28.0 / param_2;
  fVar8 = *(float *)(param_3 + 0x20);
  bVar6 = false;
  if ((fVar8 == param_2) &&
     (bVar6 = false, !NAN(*(float *)((long)param_3 + 0x104)) && !NAN(param_2))) {
    bVar6 = *(float *)((long)param_3 + 0x104) == param_2;
  }
  if (!bVar6) {
    *(float *)(param_3 + 0x20) = param_2;
    *(float *)((long)param_3 + 0x104) = param_2;
    FUN_1000200a0(puVar7);
  }
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&local_64);
  FUN_10065165c(plVar1,1);
  FUN_1006516bc(plVar1,&DAT_10115a164);
  local_70 = 0x4000000040000000;
  FUN_1006516c8(plVar3,&local_70);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_store_gold_icon_large");
  FUN_100652dd4(plVar2,&local_64,2);
  FUN_100652e60(plVar2);
  fVar8 = 28.0 / fVar8;
  bVar6 = false;
  if ((*(float *)(param_3 + 100) == fVar8) &&
     (bVar6 = false, !NAN(*(float *)((long)param_3 + 0x324)) && !NAN(fVar8))) {
    bVar6 = *(float *)((long)param_3 + 0x324) == fVar8;
  }
  if (!bVar6) {
    *(float *)(param_3 + 100) = fVar8;
    *(float *)((long)param_3 + 0x324) = fVar8;
    FUN_1000200a0(plVar2);
  }
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&local_64);
  FUN_10065165c(plVar3,1);
  FUN_1006516bc(plVar3,&DAT_10115a164);
  local_70 = 0x4000000040000000;
  FUN_1006516c8(plVar3,&local_70);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240,&local_64);
  FUN_10065165c(plVar4,1);
  FUN_1006516bc(plVar4,&DAT_10115a164);
  local_70 = 0x4000000040000000;
  FUN_1006516c8(plVar4,&local_70);
  FUN_1000ae1c0(param_3);
  return param_3;
}




void FUN_1000ae880(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10004ed14();
  operator_delete(pvVar1);
  return;
}




void FUN_1000ae894(void)

{
  if ((DAT_10184de58 & 1) == 0) {
    DAT_10184de50 = DAT_101872e38;
    DAT_10184de58 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000ae8c0(void)

{
  DAT_101dc57d0 = 0xff;
  DAT_101dc57d2 = 0xffff;
  DAT_101dc57d4 = 0xffff;
  DAT_101dc57d8 = 0xffbc9c44;
  DAT_101dc57dc = 0xff1166f2;
  DAT_101dc57e0 = 0xffe0e0e0;
  DAT_101dc57e4 = 0xffa0a0a0;
  DAT_101dc57e8 = 0xff8c8c8c;
  DAT_101dc57ec = 0xff322213;
  DAT_101dc57f0 = 0xff091911;
  DAT_101dc57f4 = 0xff170c19;
  DAT_101dc57f8 = 0xff241a14;
  DAT_101dc57fc = 0xff14171c;
  DAT_101dc5800 = 0xff221911;
  DAT_101dc5804 = 0xff1a1416;
  DAT_101dc5808 = 0xff121414;
  DAT_101dc580c = 0xff1a1809;
  DAT_101dc5810 = 0xff141414;
  DAT_101dc5814 = 0xff141414;
  DAT_101dc5818 = 0xff2929c0;
  DAT_101dc581c = 0xff283082;
  DAT_101dc5820 = 0xff5262cc;
  DAT_101dc5824 = 0xff283082;
  DAT_101dc5828 = 0xff5262cc;
  DAT_101dc582c = 0xff745c42;
  DAT_101dc5830 = 0xff184155;
  DAT_101dc5834 = 0xff92665e;
  DAT_101dc5838 = 0xffbc9c44;
  DAT_101dc583c = 0xffbbae56;
  DAT_101dc5840 = 0xff8b7b01;
  DAT_101dc5844 = 0xff90b3ef;
  DAT_101dc5848 = 0xff728ebe;
  DAT_101dc584c = 0xff19459d;
  DAT_101dc5850 = 0xff9d877b;
  DAT_101dc5854 = 0xffcbb1a3;
  DAT_101dc5858 = 0xff3f6fb5;
  DAT_101dc585c = 0xffc5c5c5;
  DAT_101dc5860 = 0xff4fc1f1;
  DAT_101dc5864 = 0xff606060;
  DAT_101dc5868 = 0xffc5ff7b;
  DAT_101dc586c = 0xff5271eb;
  DAT_101dc5870 = 0xfffae076;
  DAT_101dc5874 = 0xff3ac8f6;
  DAT_101dc5878 = 0xffaaaaaa;
  DAT_101dc587c = 0xffe19400;
  DAT_101dc5880 = 0xffe19400;
  DAT_101dc5884 = 0xffe550b2;
  DAT_101dc5888 = 0xfff22ae8;
  DAT_101dc588c = 0xff005ae1;
  DAT_101dc5890 = 0xff1addfa;
  DAT_101dc5894 = 0xff2424b3;
  DAT_101dc5898 = 0xff2424b3;
  DAT_101dc589c = 0xff646464;
  DAT_101dc58a0 = 0xff92665e;
  DAT_101dc58a4 = 0xff646037;
  DAT_101dc58a8 = 0xffffffff;
  DAT_101dc58ac = 0xff1111a1;
  DAT_101dc58b0 = 0xff321ee1;
  DAT_101dc58b4 = 0xffc8c8c8;
  DAT_101dc58b8 = 0xff321ee1;
  DAT_101dc58bc = 0xff7fe801;
  DAT_101dc58c0 = 0xffffffff;
  DAT_101dc58c4 = 0xff6259b3;
  DAT_101dc58c8 = 0xff506e73;
  DAT_101dc58cc = 0xff9dbf86;
  DAT_101dc58d0 = 0xffa35244;
  DAT_101dc58d4 = 0xffca828e;
  DAT_101dc58d8 = 0xffa6a6a6;
  DAT_101dc58dc = 0xffa6a6a6;
  DAT_101dc58e0 = 0xffffffff;
  DAT_101dc58e4 = 0xff88ea2f;
  DAT_101dc58e8 = 0xff8c8c8c;
  DAT_101dc58ec = 0xffffb400;
  DAT_101dc58f0 = 0xffff00ff;
  DAT_101dc58f4 = 0xff00aded;
  DAT_101dc58f8 = 0xff33d3ff;
  DAT_101dc58fc = 0xff7fe801;
  DAT_101dc5900 = 0xff282828;
  DAT_101dc5904 = 0xfff0f0f0;
  DAT_101dc5908 = 0xffa4781e;
  DAT_101dc590c = 0xffa6654b;
  DAT_101dc5910 = 0xff93435b;
  DAT_101dc5914 = 0xff387f9c;
  DAT_101dc5918 = 0xffa3781e;
  DAT_101dc591c = 0xffffd18a;
  DAT_101dc5920 = 0xffff61f7;
  DAT_101dc5924 = 0xff5de1f2;
  DAT_101dc5928 = 0xff80eaff;
  DAT_101dc592c = 0xff32e00e;
  DAT_101dc5930 = 0xff5a3c10;
  DAT_101dc5934 = 0xff330b03;
  DAT_101dc5938 = 0xff33031d;
  DAT_101dc593c = 0xff032433;
  DAT_101dc5940 = 0xff9e8e8d;
  uRam0000000101dc5a18 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a10 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5a28 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a20 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5a38 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a30 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5a48 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a40 = 0x7f7fffff7f7fffff;
  DAT_101dc5a50 = 0x7f7fffff;
  DAT_101dc5a54 = 0x7f7fffff;
  DAT_101dc5a58 = 0x7f7fffff;
  DAT_101dc5a5c = 0x3f800000;
  uRam0000000101dc5a68 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a60 = 0x7f7fffff7f7fffff;
  DAT_101dc5a70 = 0x7f7fffff;
  DAT_101dc5a74 = 0x3eb33333;
  uRam0000000101dc5a80 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a78 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5a90 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a88 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5aa0 = 0x7f7fffff7f7fffff;
  _DAT_101dc5a98 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5ab0 = 0x7f7fffff7f7fffff;
  _DAT_101dc5aa8 = 0x7f7fffff7f7fffff;
  DAT_101dc5ab8 = 0x7f7fffff;
  DAT_101dc5abc = 0x7f7fffff;
  DAT_101dc5ac0 = 0x7f7fffff;
  uRam0000000101dc5958 = 0xff7fffffff7fffff;
  _DAT_101dc5950 = 0xff7fffffff7fffff;
  DAT_101dc5960 = 0;
  DAT_101dc5968 = 0;
  uRam0000000101dc5974 = 0xff7fffffff7fffff;
  _DAT_101dc596c = 0xff7fffffff7fffff;
  DAT_101dc597c = 0xff7fffff;
  DAT_101dc5980 = 0xff7fffff;
  DAT_101dc5984 = NEON_fmov(0xbf800000,4);
  DAT_101dc598c = 0x3f000000;
  DAT_101dc5990 = 0;
  DAT_101dc5998 = 0;
  uRam0000000101dc59a8 = 0xff7fffffff7fffff;
  _DAT_101dc59a0 = 0xff7fffffff7fffff;
  uRam0000000101dc59b8 = 0xff7fffffff7fffff;
  _DAT_101dc59b0 = 0xff7fffffff7fffff;
  uRam0000000101dc59c8 = 0xff7fffffff7fffff;
  _DAT_101dc59c0 = 0xff7fffffff7fffff;
  uRam0000000101dc59d8 = 0xbf800000bf800000;
  _DAT_101dc59d0 = 0xbf80000000000000;
  DAT_101dc59e0 = 0xbf800000;
  DAT_101dc59e4 = 0xff7fffff;
  DAT_101dc59e8 = 0xff7fffff;
  DAT_101dc59ec = 0xff7fffff;
  DAT_101dc59f0 = 0;
  DAT_101dc59f4 = 0xff7fffff;
  DAT_101dc59f8 = 0;
  DAT_101dc5a00 = 0;
  return;
}




void FUN_1000afc84(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_34 [4];
  
  puVar1 = (uint *)(param_1 + 0xfccc);
  uVar3 = (**(code **)(**(long **)(param_1 + 0x11270) + 0x10))();
  iVar2 = FUN_1004902b8(uVar3,PTR_s__Item_HealingFlask__10185aaf0,auStack_34);
  if (iVar2 == 0) {
    uVar4 = *puVar1 & 0xfffffffb;
  }
  else {
    if ((*puVar1 >> 2 & 1) != 0) {
      return;
    }
    uVar3 = (**(code **)(**(long **)(param_1 + 0x11270) + 0x10))();
    FUN_100083680(param_1 + 0xfc48,uVar3,DAT_101d239f1,auStack_34,"icon_buff_healing_flask",1,1);
    uVar4 = *puVar1 | 4;
  }
  *puVar1 = uVar4;
  return;
}




void FUN_1000afd4c(long param_1)

{
  if (*(char *)(param_1 + 0x11280) != '\0') {
    FUN_1000b01c4();
    return;
  }
  FUN_1000b0b68();
  return;
}




void FUN_1000afd64(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_1000b1b78(param_1,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_1000afd9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_70;
  
  *param_1 = &PTR_thunk_FUN_1000afd9c_101452800;
  uVar2 = FUN_1003da398();
  FUN_1004e1b58(uVar2,param_1);
  if ((void *)param_1[0x224d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x224d]);
    param_1[0x224d] = 0;
    param_1[0x224c] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x2226);
  thunk_FUN_100651068(param_1 + 0x2200);
  thunk_FUN_100651068(param_1 + 0x21da);
  thunk_FUN_10064e2bc(param_1 + 0x21c3);
  thunk_FUN_100651068(param_1 + 0x219d);
  param_1[0x217f] = &PTR_FUN_1014a7108;
  param_1[0x2196] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2199);
  FUN_10064e2bc(param_1 + 0x217f);
  param_1[0x2161] = &PTR_FUN_1014a7108;
  param_1[0x2178] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x217b);
  FUN_10064e2bc(param_1 + 0x2161);
  param_1[0x2143] = &PTR_FUN_1014a7108;
  param_1[0x215a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x215d);
  FUN_10064e2bc(param_1 + 0x2143);
  thunk_FUN_10064e2bc(param_1 + 0x212c);
  param_1[0x210e] = &PTR_FUN_1014a7108;
  param_1[0x2125] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2128);
  FUN_10064e2bc(param_1 + 0x210e);
  param_1[0x20f0] = &PTR_FUN_1014a7108;
  param_1[0x2107] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x210a);
  FUN_10064e2bc(param_1 + 0x20f0);
  param_1[0x20d2] = &PTR_FUN_1014a7108;
  param_1[0x20e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20ec);
  FUN_10064e2bc(param_1 + 0x20d2);
  param_1[0x20b4] = &PTR_FUN_1014a7108;
  param_1[0x20cb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20ce);
  FUN_10064e2bc(param_1 + 0x20b4);
  param_1[0x2096] = &PTR_FUN_1014a7108;
  param_1[0x20ad] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x20b0);
  FUN_10064e2bc(param_1 + 0x2096);
  FUN_10064221c(param_1 + 0x2085);
  thunk_FUN_100083570(param_1 + 0x1f89);
  FUN_1000968a8(param_1 + 0x1def);
  thunk_FUN_10006cb70(param_1 + 0xd46);
  param_1[0x754] = &PTR_FUN_10144e3f8;
  lVar3 = -0x2c00;
  lVar8 = 0x6560;
  lVar11 = 0x66b8;
  local_70 = 0x66d8;
  lVar12 = 0x65e8;
  lVar5 = 0x67c0;
  lVar9 = 0x64a8;
  lVar10 = 0x66f0;
  lVar4 = 0x68c0;
  lVar6 = 0x68e0;
  lVar7 = 0x67f0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar9);
    *puVar1 = &PTR_FUN_10144e2b0;
    thunk_FUN_100651068((long)param_1 + lVar6);
    puVar1[0x69] = &PTR_FUN_1014a7108;
    puVar1[0x80] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar4);
    FUN_10064e2bc((long)param_1 + lVar7);
    puVar1[0x49] = &PTR_FUN_1014a7108;
    puVar1[0x60] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar5);
    FUN_10064e2bc((long)param_1 + lVar10);
    puVar1[0x28] = &PTR_FUN_1014a77a8;
    puVar1[0x3f] = &PTR_FUN_1014a7910;
    thunk_FUN_100657580((long)param_1 + local_70);
    puVar1[0x28] = &PTR_FUN_1014a7108;
    puVar1[0x3f] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar11);
    FUN_10064e2bc((long)param_1 + lVar12);
    FUN_10064221c((long)param_1 + lVar8);
    FUN_10064e2bc(puVar1);
    lVar8 = lVar8 + -0x580;
    lVar11 = lVar11 + -0x580;
    local_70 = local_70 + -0x580;
    lVar12 = lVar12 + -0x580;
    lVar5 = lVar5 + -0x580;
    lVar9 = lVar9 + -0x580;
    lVar10 = lVar10 + -0x580;
    lVar4 = lVar4 + -0x580;
    lVar6 = lVar6 + -0x580;
    lVar7 = lVar7 + -0x580;
    lVar3 = lVar3 + 0x580;
  } while (lVar3 != 0);
  thunk_FUN_10064e2bc(param_1 + 0x7a4);
  FUN_10064e2bc(param_1 + 0x78b);
  thunk_FUN_1001cec4c(param_1 + 0x76e);
  FUN_10064e2bc(param_1 + 0x754);
  thunk_FUN_100080e94(param_1 + 0x6e);
  FUN_10007d730(param_1 + 0x45);
  thunk_FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000afd9c(void)

{
  FUN_1000afd9c();
  return;
}

