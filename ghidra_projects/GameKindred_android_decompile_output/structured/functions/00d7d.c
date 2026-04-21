// functions/00d7d — 48 functions
#include "libGameKindred.h"




long FUN_00d7d040(long param_1)

{
  return param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + 0x28;
}




bool FUN_00d7d054(long param_1,long param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + param_3) == *(char *)(param_2 + param_3)) {
    param_1 = param_1 + param_3;
    param_2 = param_2 + param_3;
    bVar1 = false;
    if (*(char *)(param_1 + 8) == *(char *)(param_2 + 8)) {
      bVar1 = *(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10);
    }
  }
  return bVar1;
}




bool FUN_00d7d0a0(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + (ulong)param_2;
  return (*(byte *)(lVar1 + 0x28) & ((*(byte *)(lVar1 + 0x38) | *(byte *)(lVar1 + 0x30)) ^ 0xff)) ==
         0;
}




void FUN_00d7d0cc(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = FUN_00ceab64();
  if ((uVar5 & 1) == 0) {
    iVar4 = FUN_00cedce4();
    uVar5 = 0;
    uVar6 = 0;
    if (iVar4 != -1) {
      uVar5 = FUN_00cecb68(iVar4);
      uVar6 = FUN_00cece20(iVar4);
      uVar5 = uVar5 & 0xff;
      uVar6 = uVar6 & 0xff;
    }
    lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + uVar5;
    bVar2 = *(byte *)(lVar1 + 0x28);
    if ((bVar2 & ((*(byte *)(lVar1 + 0x38) | *(byte *)(lVar1 + 0x30)) ^ 0xff)) != 0)
    goto LAB_00d7d164;
    lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + uVar6;
    bVar3 = *(byte *)(lVar1 + 0x30);
    if ((((*(byte *)(lVar1 + 0x28) & (bVar3 ^ 0xff)) != 0) && (1 < bVar2)) &&
       ((bVar2 & (bVar3 ^ 0xff) & 0xfe) != 0)) {
      FUN_00d5b1c8(uVar7);
      return;
    }
  }
  else {
    uVar5 = FUN_009bc1a4(param_1);
    if ((uVar5 & 1) == 0) {
LAB_00d7d164:
      FUN_00d5b2bc(uVar7);
      return;
    }
  }
  FUN_00d5b0d4(uVar7);
  return;
}




void FUN_00d7d1d4(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  do {
    lVar2 = param_1 + 0x28 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19;
    *(byte *)(lVar2 + lVar1) = *(byte *)(lVar2 + lVar1) | param_2;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  return;
}




void FUN_00d7d20c(long param_1,byte param_2,byte param_3)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)param_2;
  *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) | param_3;
  return;
}




bool FUN_00d7d234(long param_1,byte param_2,byte param_3,uint param_4)

{
  long lVar1;
  byte *pbVar2;
  
  lVar1 = param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)param_2;
  pbVar2 = (byte *)(lVar1 + 0x38);
  if ((param_4 & 1) == 0) {
    pbVar2 = (byte *)(lVar1 + 0x30);
  }
  return (*pbVar2 & param_3) != 0;
}




long FUN_00d7d26c(long param_1)

{
  return param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + 0x28;
}




bool FUN_00d7d288(long param_1,byte param_2,byte param_3)

{
  return (*(byte *)(param_1 + (ulong)(~*(uint *)(param_1 + 0x5c) & 1) * 0x19 + (ulong)param_2 + 0x28
                   ) & param_3) != 0;
}




long FUN_00d7d2b0(long param_1)

{
  return param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + 0x28;
}




bool FUN_00d7d2c4(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + (ulong)param_2;
  return (*(byte *)(lVar1 + 0x28) & (*(byte *)(lVar1 + 0x30) ^ 0xff)) == 0;
}




undefined4 FUN_00d7d2ec(long param_1,byte param_2)

{
  return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x6c);
}




void FUN_00d7d2f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




bool FUN_00d7d300(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) {
    iVar2 = FUN_00cedce4();
    uVar3 = 0;
    if (iVar2 != -1) {
      uVar3 = FUN_00cecb68();
      uVar3 = uVar3 & 0xff;
    }
    bVar1 = (bool)(*(byte *)(param_1 + (ulong)*(uint *)(param_1 + 0x5c) * 0x19 + uVar3 + 0x28) >> 1
                  & 1);
  }
  else {
    bVar1 = *(long *)(param_1 + 0x60) != 0;
  }
  return bVar1;
}




undefined8 FUN_00d7d370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}




void FUN_00d7d378(long param_1,byte param_2,uint param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x5c);
  pbVar8 = (byte *)(param_1 + uVar4 * 0x19 + (ulong)param_2 + 0x28);
  uVar6 = (ulong)param_2;
  bVar2 = (byte)param_3;
  if (((param_3 & 0xff) == 2) || ((*pbVar8 >> 1 & 1) == 0)) {
    if (*pbVar8 == 2) {
      *pbVar8 = bVar2;
      lVar5 = param_1 + uVar4 * 0x19 + uVar6;
      *(undefined1 *)(lVar5 + 0x30) = param_4;
      *(undefined1 *)(lVar5 + 0x38) = param_5;
      return;
    }
    *pbVar8 = bVar2;
    lVar5 = param_1 + uVar4 * 0x19 + uVar6;
    *(undefined1 *)(lVar5 + 0x30) = param_4;
    *(undefined1 *)(lVar5 + 0x38) = param_5;
    if ((param_3 >> 1 & 1) == 0) {
      return;
    }
  }
  else {
    *pbVar8 = bVar2;
    lVar5 = param_1 + uVar4 * 0x19 + uVar6;
    *(undefined1 *)(lVar5 + 0x30) = param_4;
    *(undefined1 *)(lVar5 + 0x38) = param_5;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220) {
    lVar5 = 0;
  }
  if ((param_3 >> 1 & 1) == 0) {
    if (lVar5 != 0) {
      uVar9 = 0x10000;
      lVar3 = lVar5;
LAB_00d7d49c:
      do {
        do {
          lVar7 = lVar3;
          if ((lVar7 != lVar5) &&
             (lVar3 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x1f1b047c), lVar3 != 0)) {
            (**(code **)(lVar3 + 8))(lVar7);
          }
          if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar3 = *(long *)(lVar7 + 0x18), lVar3 != 0)) {
            uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
            goto LAB_00d7d49c;
          }
          if ((uVar9 & 0xffff) == 0) {
            return;
          }
          lVar3 = *(long *)(lVar7 + 0x20);
        } while (*(long *)(lVar7 + 0x20) != 0);
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        uVar1 = uVar9 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar9 = uVar1 | uVar9 & 0xffff0000;
        while (lVar3 = *(long *)(lVar7 + 0x20), lVar3 == 0) {
          if ((uVar9 - 1 & 0xffff) == 0) {
            return;
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
          if (lVar7 == 0) {
            return;
          }
        }
      } while( true );
    }
  }
  else if (lVar5 != 0) {
    uVar9 = 0x10000;
    lVar3 = lVar5;
LAB_00d7d538:
    do {
      do {
        lVar7 = lVar3;
        if ((lVar7 != lVar5) &&
           (lVar3 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x243804e0), lVar3 != 0)) {
          (**(code **)(lVar3 + 8))(lVar7);
        }
        if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar3 = *(long *)(lVar7 + 0x18), lVar3 != 0)) {
          uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
          goto LAB_00d7d538;
        }
        if ((uVar9 & 0xffff) == 0) {
          return;
        }
        lVar3 = *(long *)(lVar7 + 0x20);
      } while (*(long *)(lVar7 + 0x20) != 0);
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        return;
      }
      uVar1 = uVar9 - 1 & 0xffff;
      if (uVar1 == 0) {
        return;
      }
      uVar9 = uVar1 | uVar9 & 0xffff0000;
      while (lVar3 = *(long *)(lVar7 + 0x20), lVar3 == 0) {
        if ((uVar9 - 1 & 0xffff) == 0) {
          return;
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
        if (lVar7 == 0) {
          return;
        }
      }
    } while( true );
  }
  return;
}




void FUN_00d7d5a4(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  lVar3 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + (ulong)uVar2 * 0x19 + 0x38 + lVar3);
    *(undefined1 *)(param_2 + lVar3) = puVar1[-0x10];
    *(undefined1 *)(param_3 + lVar3) = puVar1[-8];
    *(undefined1 *)(param_4 + lVar3) = *puVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  return;
}




void FUN_00d7d5e4(long param_1)

{
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x01';
  return;
}




void FUN_00d7d5f4(long param_1)

{
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + -1;
  return;
}




bool FUN_00d7d604(long param_1)

{
  return *(char *)(param_1 + 0x68) != '\0';
}




void FUN_00d7d614(long param_1)

{
  *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
  return;
}




void FUN_00d7d624(long param_1)

{
  *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + -1;
  return;
}




bool FUN_00d7d634(long param_1)

{
  return *(char *)(param_1 + 0x69) != '\0';
}




void FUN_00d7d644(ulong param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(byte *)(param_2 + lVar1) = *(byte *)(param_2 + lVar1) | 1;
    *(undefined1 *)(param_3 + lVar1) = 0;
    *(undefined1 *)(param_4 + lVar1) = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  *(byte *)(param_3 + (param_1 & 0xff)) = *(byte *)(param_3 + (param_1 & 0xff)) | 1;
  return;
}




void FUN_00d7d67c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0x101010101010101;
  return;
}




void FUN_00d7d68c(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d7d6b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0x28;
  *param_1 = &PTR_FUN_0281e730;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0x101010101010101;
    lVar2 = lVar2 + 0x19;
  } while ((long)puVar1 + 0x19 != (long)param_1 + 0x5a);
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  return;
}




void FUN_00d7d6fc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7d704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7d708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)(param_1 + 7) = 1;
  *param_1 = &PTR_FUN_0281e760;
  param_1[5] = &PTR_FUN_0281e790;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}




void FUN_00d7d76c(long param_1)

{
  long lVar1;
  
  DAT_031aa234 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031aa234 + 1;
  lVar1 = param_1 + (ulong)DAT_031aa234 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d7d8d4;
  *(code **)(lVar1 + 0xb8) = FUN_00d7d93c;
  *(uint *)(lVar1 + 0xa4) = DAT_031aa234;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 800;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d7d7cc(long param_1,undefined1 param_2,undefined4 param_3,byte param_4)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(byte *)(param_1 + 0x3c) = param_4 & 1;
  return;
}




bool FUN_00d7d7e0(long param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0x34);
  bVar2 = FUN_00ceab2c(param_2);
  return (bVar2 & bVar1) != 0;
}




undefined4 FUN_00d7d80c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




undefined1 FUN_00d7d814(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}




void FUN_00d7d81c(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d7d844(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d7d874(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d7d898(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d7d8c4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d7d8cc(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d7d8d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined4 *)(param_1 + 7) = 1;
  *param_1 = &PTR_FUN_0281e760;
  param_1[5] = &PTR_FUN_0281e790;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return param_1;
}




void FUN_00d7d93c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7d944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7d948(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[6] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e7c0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar1 = DAT_03214ce8;
  uVar3 = NEON_fmov(0xbf800000,4);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)(param_1 + 9) = uVar1;
  *(undefined4 *)(param_1 + 0xb) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[10] = uVar2;
  uVar2 = _DAT_03218ef8;
  param_1[0xe] = uVar3;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar2;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf8;
  return;
}




void FUN_00d7d9c8(long param_1)

{
  long lVar1;
  
  DAT_02c7bf58 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c7bf58 + 1;
  lVar1 = param_1 + (ulong)DAT_02c7bf58 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d7e2d4;
  *(code **)(lVar1 + 0xb8) = FUN_00d7e354;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0xc0;
  *(uint *)(lVar1 + 0xa4) = DAT_02c7bf58;
  *(undefined4 *)(lVar1 + 0xa8) = 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_00d7da38,0);
  return;
}




void FUN_00d7da38(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_02c7bf58) {
    param_1 = 0;
  }
  FUN_00d7da54(param_1);
  return;
}




void FUN_00d7da54(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x40);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
          }
        }
        FUN_00d55794(uVar4,local_38,0);
        local_38[1] = 0;
        *(uint *)(param_1 + 0x58) = local_38[2];
        *(ulong *)(param_1 + 0x50) = (ulong)local_38[0];
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d7db38(char param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float __x;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_684;
  long local_680 [194];
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  fVar13 = 3.4028235e+38;
  uVar3 = FUN_019889cc(local_680,0xc0,DAT_02c7bf58,0);
  if ((int)uVar3 < 1) {
    uVar11 = 0;
    uVar6 = DAT_03218f68;
    fVar14 = DAT_03218f70;
  }
  else {
    uVar11 = 0;
    uVar12 = (ulong)uVar3;
    plVar10 = local_680;
    do {
      lVar9 = *plVar10;
      if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02c7bf58) {
        lVar9 = 0;
      }
      plVar4 = *(long **)(lVar9 + 0x30);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(lVar9 + 0x38) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 != 0) {
            plVar4 = *(long **)(lVar9 + 0x30);
            uVar6 = 0;
            if (plVar4 != (long *)0x0) {
              if (*(int *)(lVar9 + 0x38) == (int)plVar4[1]) {
                uVar6 = (**(code **)(*plVar4 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar9 + 0x30) = 0;
                uVar6 = 0;
                *(undefined4 *)(lVar9 + 0x38) = DAT_03214ce8;
              }
            }
            cVar2 = FUN_00d55870(uVar6);
            if (((cVar2 != param_1) &&
                (uVar7 = FUN_00d7dd80(lVar9,param_2,param_3,&local_684), (uVar7 & 1) != 0)) &&
               (uVar11 = 1, local_684 < fVar13)) {
              fVar13 = local_684;
            }
          }
        }
        else {
          *(undefined8 *)(lVar9 + 0x30) = 0;
          *(undefined4 *)(lVar9 + 0x38) = DAT_03214ce8;
        }
      }
      uVar12 = uVar12 - 1;
      plVar10 = plVar10 + 1;
      uVar6 = DAT_03218f68;
      fVar14 = DAT_03218f70;
    } while (uVar12 != 0);
  }
  DAT_03218f68 = uVar6;
  DAT_03218f70 = fVar14;
  if (param_4 != (undefined8 *)0x0) {
    uVar15 = *param_2;
    fVar16 = *(float *)(param_2 + 1);
    fVar18 = (float)*param_3 - (float)uVar15;
    fVar19 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
    fVar17 = *(float *)(param_3 + 1) - fVar16;
    __x = fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17;
    if (1e-08 <= __x) {
      fVar14 = SQRT(__x);
      if (NAN(fVar14)) {
        fVar14 = sqrtf(__x);
      }
      uVar15 = *param_2;
      fVar16 = *(float *)(param_2 + 1);
      uVar6 = CONCAT44(fVar19 / fVar14,fVar18 / fVar14);
      fVar14 = fVar17 / fVar14;
    }
    *param_4 = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar13 + (float)((ulong)uVar15 >> 0x20),
                        (float)uVar6 * fVar13 + (float)uVar15);
    *(float *)(param_4 + 1) = fVar13 * fVar14 + fVar16;
  }
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7dd80(long param_1,float *param_2,float *param_3,float *param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float __x;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar6 = *param_2;
  fVar7 = *(float *)(param_1 + 0x54);
  fVar13 = *param_3;
  fVar9 = param_2[2];
  fVar14 = param_3[2];
  fVar11 = fVar7 - fVar7;
  fVar12 = fVar13 - fVar6;
  fVar10 = fVar14 - fVar9;
  __x = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
  fVar8 = SQRT(__x);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(__x);
  }
  if (1.1920929e-07 <= ABS(fVar8)) {
    if ((*(byte *)(param_1 + 0x78) >> 2 & 1) == 0) {
      local_84 = SQRT(__x);
      local_98 = fVar6;
      fStack_94 = fVar7;
      local_90 = fVar9;
      if (NAN(local_84)) {
        local_84 = sqrtf(__x);
      }
      local_8c = fVar12 / local_84;
      fStack_88 = fVar11 / local_84;
      local_84 = fVar10 / local_84;
      iVar3 = FUN_019bac60(&local_98,param_1 + 0x50,&local_80,&local_9c);
      if (((iVar3 != 0) && (local_80 <= fVar8)) && (0.0 <= local_9c)) {
        bVar1 = *(byte *)(param_1 + 0x78);
        if (0.0 <= local_80) {
          if ((~bVar1 & 3) == 0) {
            if (fVar8 <= local_9c) goto LAB_00d7e02c;
            local_a8 = CONCAT44(fVar7 + fStack_88 * local_9c,fVar6 + local_8c * local_9c);
          }
          else {
            local_a8 = CONCAT44(fVar7 + fStack_88 * local_80,fVar6 + local_8c * local_80);
            local_9c = local_80;
          }
          local_a0 = fVar9 + local_9c * local_84;
          uVar4 = FUN_00d7e214(param_1,&local_a8);
          local_9c = local_80;
joined_r0x00d7e018:
          if ((uVar4 & 1) != 0) {
            if (param_4 != (float *)0x0) {
              *param_4 = local_9c;
            }
            goto LAB_00d7dfa4;
          }
        }
        else if ((bVar1 & 3) != 2) {
          if ((bVar1 & 3) == 0) goto LAB_00d7de64;
          if (local_9c < fVar8) {
            local_a8 = CONCAT44(fVar7 + fStack_88 * local_9c,fVar6 + local_8c * local_9c);
            local_a0 = fVar9 + local_9c * local_84;
            uVar4 = FUN_00d7e214(param_1,&local_a8);
            goto joined_r0x00d7e018;
          }
        }
      }
    }
    else {
      local_a8 = CONCAT44(fVar9,fVar6);
      local_80 = fVar13;
      fStack_7c = fVar14;
      uVar4 = FUN_019bb8ec(param_1 + 0x60,param_1 + 0x68,&local_a8,&local_80,&local_98);
      if ((uVar4 & 1) != 0) {
        if (param_4 != (float *)0x0) {
          fVar6 = (local_98 - fVar6) * (local_98 - fVar6) +
                  (fStack_94 - fVar9) * (fStack_94 - fVar9);
          fVar8 = SQRT(fVar6);
          if (NAN(fVar8)) {
            fVar8 = sqrtf(fVar6);
          }
          *param_4 = fVar8;
        }
        goto LAB_00d7dfa4;
      }
    }
  }
  else if (((*(byte *)(param_1 + 0x78) & 3) == 0) &&
          (fVar6 = fVar6 - *(float *)(param_1 + 0x50), fVar7 = fVar7 - *(float *)(param_1 + 0x54),
          fVar9 = fVar9 - *(float *)(param_1 + 0x58),
          fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9 <
          *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x5c))) {
LAB_00d7de64:
    if (param_4 != (float *)0x0) {
      *param_4 = 0.0;
    }
LAB_00d7dfa4:
    uVar5 = 1;
    goto LAB_00d7e050;
  }
LAB_00d7e02c:
  if (param_4 == (float *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    *param_4 = -3.4028235e+38;
  }
LAB_00d7e050:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

