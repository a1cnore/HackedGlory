// functions/00d51 — 51 functions
#include "libGameKindred.h"




bool FUN_00d51194(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00d509fc();
  return (*(uint *)(param_2 + 0x2f4) & uVar1) != 0;
}




bool FUN_00d511c0(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_00d50cd4(param_1 + 0x220,param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  fVar3 = (float)FUN_00d9df64(lVar1,param_2);
  return fVar3 <= fVar2 + 0.5;
}




undefined4 FUN_00d51234(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x38) + 100);
}




undefined4 FUN_00d51240(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x78);
}




int FUN_00d5124c(long param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x8d) != '\0') {
    iVar1 = 3;
  }
  return iVar1 + *(int *)(*(long *)(param_1 + 0x38) + 0x78);
}




void FUN_00d51270(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5066c(param_1,"Energy Cost",&local_2c);
  if ((uVar2 & 1) == 0) {
    fVar3 = *(float *)(*(long *)(param_1 + 0x38) + 0x68);
  }
  else {
    fVar3 = (float)FUN_00d506d8(param_1,local_2c,0);
  }
  if (ABS(fVar3) < 1.1920929e-07) {
    uVar2 = FUN_00d5066c(param_1,"Alt Energy Cost",&local_2c);
    if ((uVar2 & 1) == 0) {
      fVar3 = *(float *)(*(long *)(param_1 + 0x38) + 0x6c);
    }
    else {
      fVar3 = (float)FUN_00d506d8(param_1,local_2c,0);
    }
    if (0.0 < fVar3) {
      *(ushort *)(param_1 + 0x21e) = *(ushort *)(param_1 + 0x21e) | 0x8000;
    }
  }
  *(short *)(param_1 + 0x21c) = (short)(int)fVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00d5134c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  iVar1 = (1 - *(int *)(lVar2 + 0x78)) + (*(uint *)(param_1 + 0x238) >> 10 & 7);
  if (*(char *)(lVar2 + 0x8d) == '\0') {
    switch(iVar1) {
    case 1:
      iVar1 = 1;
      if (*(char *)(lVar2 + 0x93) != '\0') {
        iVar1 = 2;
      }
      return iVar1;
    case 2:
      goto switchD_00d513a4_caseD_2;
    case 3:
      return 4;
    case 4:
      return 6;
    case 5:
      return 8;
    default:
      goto switchD_00d513a4_default;
    }
  }
  if (iVar1 - 1U < 3) {
    iVar1 = (iVar1 - 1U) * 3 + 6;
switchD_00d513a4_caseD_2:
    return iVar1;
  }
switchD_00d513a4_default:
  return 0xff;
}




undefined4 FUN_00d513dc(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x98);
}




void FUN_00d513e8(long param_1)

{
  FUN_00cf2c08(param_1 + 0x48,param_1);
  return;
}




uint FUN_00d513f4(long param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  lVar6 = *(long *)(param_1 + 0x10);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  if ((*(byte *)(param_1 + 0x239) & 0x1c) == 0) {
    uVar7 = 1;
  }
  else {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x1e8 + uVar5 * 8);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x6a) == '\0')) {
        fVar9 = (float)FUN_00d6da08();
        if (fVar9 <= 0.0) {
          uVar7 = 0x400;
        }
        else {
          uVar7 = 4;
        }
        goto LAB_00d51488;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    uVar7 = 0;
  }
LAB_00d51488:
  uVar3 = *(ushort *)(lVar6 + 0x88) & 0x1f;
  if ((uVar3 != 0x1f) && (*(ushort *)(lVar6 + (ulong)uVar3 * 0x38 + 0x90) - 3 < 2)) {
    uVar7 = uVar7 | 0x20;
  }
  uVar3 = *(ushort *)(param_1 + 0x68) & 0x1f;
  uVar7 = *(uint *)(param_1 + 0x238) >> 9 & 0x10 | uVar7;
  if (uVar3 == 0x1f) {
LAB_00d51508:
    uVar7 = uVar7 | 0x400;
  }
  else {
    sVar1 = *(short *)(param_1 + (ulong)uVar3 * 0x38 + 0x70);
    if (sVar1 != 1) {
      if (sVar1 == 5) {
        uVar7 = uVar7 | 4;
      }
      else {
        if (sVar1 != 2) goto LAB_00d51508;
        uVar7 = uVar7 | 2;
      }
    }
  }
  uVar3 = FUN_00cf2c08(param_1 + 0x48,param_1);
  uVar3 = uVar3 | uVar7;
  if ((*(byte *)(param_1 + 0x239) & 0x1c) != 0) {
    sVar1 = *(short *)(param_1 + 0x21e);
    if (sVar1 < 0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = *(float *)(param_1 + 0x218) *
              (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar1 << 0x11) >> 0x11));
    }
    if (fVar9 <= *(float *)(*(long *)(lVar6 + 0x40) + 0x310)) {
      fVar9 = 0.0;
      if (sVar1 < 0) {
        fVar9 = *(float *)(param_1 + 0x218) *
                (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar1 << 0x11) >> 0x11));
      }
      if (fVar9 <= *(float *)(*(long *)(lVar6 + 0x40) + 0x314)) goto LAB_00d51590;
    }
    uVar3 = uVar3 | 8;
  }
LAB_00d51590:
  uVar7 = *(ushort *)(lVar6 + 0x88) & 0x1f;
  uVar8 = uVar3;
  if ((((uVar7 != 0x1f) && (*(short *)(lVar6 + (ulong)uVar7 * 0x38 + 0x90) == 5)) &&
      ((lVar4 = *(long *)(param_1 + 0x38), *(char *)(lVar4 + 0x54) == '\0' ||
       (*(char *)(lVar4 + 0x55) == '\0')))) &&
     (uVar8 = uVar3 | 0x40, *(char *)(lVar4 + 0x5b) != '\0')) {
    uVar8 = uVar3;
  }
  uVar2 = *(ushort *)(lVar6 + 0x2f8);
  uVar7 = uVar8;
  if (((uVar2 >> 7 & 1) != 0) &&
     (uVar7 = uVar8 | 0x40, *(char *)(*(long *)(param_1 + 0x38) + 0x5c) != '\0')) {
    uVar7 = uVar8;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if ((((~uVar2 & 0x1e) == 0) && (*(char *)(lVar4 + 0x5d) == '\0')) &&
     ((*(char *)(lVar4 + 0x54) == '\0' || (*(char *)(lVar4 + 0x56) == '\0')))) {
    uVar7 = uVar7 | 0x80;
  }
  if (*(char *)(lVar4 + 0x8c) == '\0') {
    if ((((uVar2 >> 3 & 1) != 0) && (*(char *)(lVar4 + 0x5e) == '\0')) &&
       ((*(char *)(lVar4 + 0x54) == '\0' || (*(char *)(lVar4 + 0x58) == '\0')))) {
      uVar7 = uVar7 | 0x100;
    }
    if ((((uVar2 >> 5 & 1) != 0) && (*(char *)(lVar4 + 0x5f) == '\0')) &&
       ((*(char *)(lVar4 + 0x54) == '\0' || (*(char *)(lVar4 + 0x59) == '\0')))) {
      uVar7 = uVar7 | 0x200;
    }
  }
  else {
    uVar7 = uVar7 | (uVar2 & 0x10) << 4;
  }
  if (((((uint)*(byte *)(lVar6 + 0x303) << 0x10) >> 0x12 & 1) != 0) &&
     ((*(char *)(lVar4 + 0x54) == '\0' || (*(char *)(lVar4 + 0x5a) == '\0')))) {
    uVar7 = uVar7 | 0x400;
  }
  uVar5 = FUN_00d58580(lVar6);
  uVar3 = uVar7 | 0x400;
  if ((uVar5 & 1) == 0) {
    uVar3 = uVar7;
  }
  return uVar3;
}




byte FUN_00d516d0(long param_1)

{
  return *(byte *)(param_1 + 0x239) >> 5 & 1;
}




undefined1 FUN_00d516dc(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8f);
}




long FUN_00d516e8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 0xb0);
  if (*plVar3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (plVar3[lVar1] != 0);
    return lVar2;
  }
  return 0;
}




undefined8 FUN_00d51718(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00d4c67c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0));
  uVar2 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}




undefined4 FUN_00d5173c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00d4c67c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0));
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x2c);
  }
  return uVar1;
}




long FUN_00d51760(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x70) != '\0') {
    lVar1 = *(long *)(param_1 + 0x38) + 0xb8;
  }
  return lVar1;
}




undefined8 FUN_00d51778(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x1c8);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




undefined8 FUN_00d517cc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x1c8);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) != (int)plVar1[1]) {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




undefined4 FUN_00d51820(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}




undefined4 FUN_00d51830(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}




void thunk_FUN_00d51844(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x1c8) = *param_2;
  lVar2 = param_2[1];
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xffffffc7 | 8;
  *(int *)(param_1 + 0x1d0) = (int)lVar2;
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        FUN_00d55794(lVar2,param_1 + 0x1d8,0);
        return;
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d51844(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x1c8) = *param_2;
  lVar2 = param_2[1];
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xffffffc7 | 8;
  *(int *)(param_1 + 0x1d0) = (int)lVar2;
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        FUN_00d55794(lVar2,param_1 + 0x1d8,0);
        return;
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d518d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 1);
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xffffffc7 | 0x10;
  *(undefined8 *)(param_1 + 0x1d8) = uVar1;
  return;
}




void FUN_00d518f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
    lVar1 = FUN_01985d44(param_1,DAT_031a94d0);
    *(long *)(param_1 + 0x60) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  FUN_00d5ee28(lVar1,param_2);
  return;
}




void FUN_00d51944(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d5eebc();
    return;
  }
  return;
}




void FUN_00d51954(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d5eebc();
    return;
  }
  return;
}




void FUN_00d51964(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d5ef64();
    return;
  }
  return;
}




void FUN_00d51974(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_019888e0();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}




void FUN_00d519a0(long param_1)

{
  FUN_00cf2af0(param_1 + 0x48,param_1);
  return;
}




void FUN_00d519ac(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00d6dc30();
    return;
  }
  FUN_00d6e0b0(*(undefined8 *)(param_1 + 0x1f8));
  return;
}




void FUN_00d519bc(long param_1)

{
  FUN_00d6dc30(0,*(undefined8 *)(param_1 + 0x1f8));
  return;
}




void FUN_00d519c8(long param_1,short param_2)

{
  *(ushort *)(param_1 + 0x21e) =
       *(ushort *)(param_1 + 0x21e) & 0x8000 | *(ushort *)(param_1 + 0x21e) + param_2 & 0x7fff;
  return;
}




void FUN_00d519dc(float param_1,long param_2)

{
  *(float *)(param_2 + 0x218) = *(float *)(param_2 + 0x218) * param_1;
  return;
}




void FUN_00d519ec(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x22c) = param_1;
  return;
}




void FUN_00d519f4(long param_1)

{
  *(undefined4 *)(param_1 + 0x22c) = 0xbf800000;
  return;
}




void FUN_00d51a00(float param_1,long param_2)

{
  *(float *)(param_2 + 0x230) = *(float *)(param_2 + 0x230) + param_1;
  return;
}




void FUN_00d51a10(long param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_00d6e30c();
    return;
  }
  FUN_00d6dc14(*(undefined8 *)(param_1 + 0x1f8));
  return;
}




void FUN_00d51a20(long param_1)

{
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x4000;
  return;
}




byte FUN_00d51a30(long param_1)

{
  return *(byte *)(param_1 + 0x239) >> 6 & 1;
}




void FUN_00d51a3c(long param_1)

{
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x8000;
  return;
}




byte FUN_00d51a4c(long param_1)

{
  return *(byte *)(param_1 + 0x239) >> 7;
}




bool FUN_00d51a58(long param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != 1) {
    bVar1 = false;
    if (param_2 == 0) {
      bVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x80) < 2;
    }
    return bVar1;
  }
  return *(uint *)(*(long *)(param_1 + 0x38) + 0x80) < 3;
}




uint FUN_00d51a94(long param_1)

{
  return *(uint *)(param_1 + 0x238) >> 3 & 7;
}




void FUN_00d51aa0(long param_1)

{
  uint uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if (uVar1 != 0x1f) {
    sVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70);
    if (sVar2 == 1) {
      return;
    }
    if (sVar2 == 2) {
      FUN_00d51b0c();
    }
  }
  FUN_00d4f8a8((ushort *)(param_1 + 0x68),1,0,0);
  return;
}




void FUN_00d51b0c(long param_1)

{
  long lVar1;
  uint uVar2;
  
  FUN_00cf2c6c(param_1 + 0x48,param_1);
  if ((*(ushort *)(param_1 + 0x238) & 0x3c0) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x10);
      while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220))) {
        lVar1 = *(long *)(lVar1 + 0x10);
      }
      FUN_00d5b038();
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)(param_1 + 0x238) >> 6 & 0xf));
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfffffc3f;
  }
  return;
}




void FUN_00d51b94(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_01988c78();
    uVar1 = FUN_00cf29e0((long *)(param_1 + 0x48),param_1);
    if ((uVar1 & 1) != 0) {
      FUN_00d51be0(param_1);
      return;
    }
  }
  return;
}




void FUN_00d51be0(long param_1)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = 0;
  bVar3 = false;
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x4000;
  do {
    lVar4 = *(long *)(param_1 + 0x1e8 + lVar6);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x6a) == '\0') {
        bVar3 = true;
      }
      else {
        FUN_00d6db98();
      }
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x10);
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if (uVar1 != 0x1f) {
    sVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70);
    if ((sVar2 == 2) || (sVar2 == 4)) {
      if (bVar3) {
        uVar5 = 5;
      }
      else {
        uVar5 = 1;
      }
      FUN_00d4f8a8(param_1 + 0x68,uVar5,0,0);
      return;
    }
  }
  return;
}




void FUN_00d51ca0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if (((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70) == 2)) &&
     ((*(uint *)(param_1 + 0x238) & 0x38) == 8)) {
    plVar3 = *(long **)(param_1 + 0x1c8);
    lVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(int *)(param_1 + 0x1d0) == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        lVar4 = 0;
        *(undefined4 *)(param_1 + 0x1d0) = DAT_03214ce8;
      }
    }
    if (lVar4 == param_2) {
      local_48 = param_3 + 0x28;
      local_40 = *(undefined4 *)(param_3 + 0x30);
      FUN_00d51844(param_1,&local_48);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d51d90(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  *(undefined4 *)(param_1 + 0x1e0) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x1d8) = DAT_03218f30;
  return;
}




void FUN_00d51dc0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x23c) = param_2;
  return;
}




void FUN_00d51dc8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_108 [88];
  undefined1 auStack_b0 [88];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(*(long *)(param_1 + 0x38) + 0x7e) != '\0') &&
     (uVar7 = FUN_00ceab48(), puVar3 = PTR_s_Buff_Revealed_02bebaf8, (uVar7 & 1) != 0)) {
    plVar10 = (long *)(param_1 + 0x10);
    plVar8 = plVar10;
    do {
      lVar11 = *plVar8;
      plVar8 = (long *)(lVar11 + 0x10);
    } while (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_02c09220);
    uVar1 = *(undefined4 *)(lVar11 + 0x260);
    uVar6 = FUN_00ceb350();
    FUN_00cfe864(0x400ccccd,0,0,auStack_b0,uVar1,uVar1,puVar3,uVar6,1,0,0);
    FUN_00ce20fc(auStack_b0);
    plVar8 = plVar10;
    do {
      lVar11 = *plVar8;
      plVar8 = (long *)(lVar11 + 0x10);
    } while (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_02c09220);
    if ((((*(byte *)(lVar11 + 0x2f4) & 1) != 0) && ((*(uint *)(param_1 + 0x238) & 0x38) == 8)) &&
       (plVar8 = *(long **)(param_1 + 0x1c8), plVar8 != (long *)0x0)) {
      if (*(int *)(param_1 + 0x1d0) == (int)plVar8[1]) {
        lVar11 = (**(code **)(*plVar8 + 0x10))();
        if (lVar11 != 0) {
          lVar11 = *plVar10;
          while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_02c09220))) {
            lVar11 = *(long *)(lVar11 + 0x10);
          }
          cVar4 = FUN_00d55870();
          plVar10 = *(long **)(param_1 + 0x1c8);
          if (plVar10 == (long *)0x0) {
            uVar9 = 0;
          }
          else if (*(int *)(param_1 + 0x1d0) == (int)plVar10[1]) {
            uVar9 = (**(code **)(*plVar10 + 0x10))(plVar10);
          }
          else {
            *(undefined8 *)(param_1 + 0x1c8) = 0;
            uVar9 = 0;
            *(undefined4 *)(param_1 + 0x1d0) = DAT_03214ce8;
          }
          cVar5 = FUN_00d55870(uVar9);
          if ((cVar4 != cVar5) &&
             (lVar11 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))(),
             puVar3 = PTR_s_Buff_GloballyVisible_02bebad8,
             (*(uint *)(lVar11 + 0x2f4) & 0x20101001) != 0)) {
            uVar6 = FUN_00ceb350();
            FUN_00cfe864(0x400ccccd,0,0,auStack_108,uVar1,uVar1,puVar3,uVar6,1,0,0);
            FUN_00ce20fc(auStack_108);
          }
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x1c8) = 0;
        *(undefined4 *)(param_1 + 0x1d0) = DAT_03214ce8;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

