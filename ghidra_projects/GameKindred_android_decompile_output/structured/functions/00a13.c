// functions/00a13 — 12 functions
#include "libGameKindred.h"




void FUN_00a13114(long param_1)

{
  FUN_009c30d0(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a133d4(long param_1)

{
  FUN_009c61b8(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a13878(long param_1)

{
  FUN_009c61b8(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a13b34(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x37e) == '\0') {
    uVar1 = FUN_019886f4();
    if ((uVar1 & 1) != 0) {
      FUN_00a13d48(param_1);
      *(undefined1 *)(param_1 + 0x37e) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x37e) == '\0') {
      return;
    }
  }
  uVar1 = FUN_019886f4();
  if ((uVar1 & 1) == 0) {
    FUN_00a13dd4(param_1,0);
    *(undefined1 *)(param_1 + 0x37e) = 0;
  }
  return;
}




void FUN_00a13b98(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 0x37d) == '\0') {
    puVar6 = (ushort *)(param_1 + 0x28);
    if (((*puVar6 & 0x1f) == 0x1f) || (puVar6[(ulong)(*puVar6 & 0x1f) * 0x1c + 4] != 3)) {
      fVar8 = *(float *)(param_1 + 0x364);
      fVar7 = (float)FUN_01988c78();
      fVar8 = fVar8 - fVar7;
      fVar7 = *(float *)(param_1 + 0x370);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      *(float *)(param_1 + 0x364) = fVar8;
      fVar8 = (float)FUN_01988c78();
      fVar7 = fVar7 - fVar8;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)(param_1 + 0x370) = fVar7;
      FUN_00a13e94(param_1);
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x340) + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) &&
         (*(ushort *)(*(long *)(param_1 + 0x340) + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
        FUN_00a11d98(puVar6,2,0,0);
      }
      lVar5 = param_1 + 0x1e8;
      lVar3 = FUN_00ceb7b0(lVar5);
      if (lVar3 != 0) {
        lVar3 = FUN_00ceb7b0(lVar5);
        if ((*(byte *)(lVar3 + 0x2fc) & 0x1f) == 0) {
          FUN_00965940(lVar5);
          uVar2 = DAT_03214ce8;
          lVar5 = *(long *)(param_1 + 0x340);
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x2b0) = 0;
            *(undefined4 *)(lVar5 + 0x2b8) = uVar2;
          }
        }
      }
      plVar4 = *(long **)(param_1 + 0x1d8);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(param_1 + 0x1e0) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 != 0) {
            lVar5 = (**(code **)(**(long **)(param_1 + 0x1d8) + 0x10))();
            if ((*(byte *)(lVar5 + 0x2fc) & 0x1f) == 0) {
              FUN_00a1ab9c(param_1 + 0x1b8,0);
            }
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x1d8) = 0;
          *(undefined4 *)(param_1 + 0x1e0) = DAT_03214ce8;
        }
      }
      FUN_00a13f14(puVar6);
      lVar5 = FUN_00a1ae38();
      if (lVar5 != 0) {
        FUN_00a1ae38();
        FUN_00a1af9c();
        return;
      }
    }
  }
  return;
}




void FUN_00a13d48(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_03130df0) {
        FUN_019888f4(lVar3);
        lVar2 = *(long *)(param_1 + 0x18);
        break;
      }
      plVar1 = (long *)(lVar3 + 0x20);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
    for (; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_03130a98) {
        FUN_019888f4();
        return;
      }
    }
  }
  return;
}




void FUN_00a13dd4(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x28) & 0x1f;
  if (((uVar1 == 0x1f) || (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x30) != 2)) ||
     ((param_2 & 1) != 0)) {
    FUN_00a13d48(param_1);
    uVar2 = FUN_00a1bcd8();
    if ((((uVar2 & 1) != 0) && (uVar2 = FUN_00a1bd00(), (uVar2 & 1) != 0)) &&
       (uVar2 = FUN_00a1bd34(), (uVar2 & 1) == 0)) {
      uVar3 = FUN_01985d44(param_1,DAT_03130a98);
      FUN_00a0ad04(uVar3,param_1,*(undefined8 *)(param_1 + 0x340));
      return;
    }
    uVar2 = FUN_00a1bcd8();
    if (((uVar2 & 1) != 0) || (uVar2 = FUN_00a1bcec(), (uVar2 & 1) != 0)) {
      uVar3 = FUN_01985d44(param_1,DAT_03130df0);
      FUN_00a195c4(uVar3,param_1,*(undefined8 *)(param_1 + 0x340));
      return;
    }
  }
  return;
}




void FUN_00a13e94(long param_1)

{
  ulong uVar1;
  
  FUN_019806a4();
  uVar1 = FUN_01980590();
  if ((uVar1 & 1) != 0) {
    FUN_00a1bddc(param_1 + 0x188);
    return;
  }
  return;
}




void FUN_00a13ecc(long param_1)

{
  FUN_00ceb7b0(param_1 + 0x1e8);
  return;
}




void FUN_00a13ed4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_00965940(param_1 + 0x1e8);
  uVar1 = DAT_03214ce8;
  lVar2 = *(long *)(param_1 + 0x340);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x2b0) = 0;
    *(undefined4 *)(lVar2 + 0x2b8) = uVar1;
  }
  return;
}




void FUN_00a13f14(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00a13f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a13f5c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  float fVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *pvVar6;
  float fVar7;
  undefined8 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(long *)(param_2 + 0x340) = param_3;
  FUN_00a1add0();
  lVar3 = FUN_00a1ae38();
  if (lVar3 != 0) {
    uVar4 = FUN_00a1ae38();
    FUN_00a1b094(uVar4,param_3);
  }
  FUN_00a141b4(param_2);
  FUN_00a142b0(param_2);
  if (*(long *)(param_2 + 0x310) != 0) {
    FUN_019888f4();
    *(undefined8 *)(param_2 + 0x310) = 0;
  }
  if (*(long *)(param_2 + 0x348) != 0) {
    FUN_019888e0();
    *(undefined8 *)(param_2 + 0x348) = 0;
  }
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_01985d44(param_2,DAT_0312f158);
    *(undefined8 *)(param_2 + 0x348) = uVar4;
    FUN_009c382c(uVar4,param_3);
    uVar5 = 0;
    do {
      lVar3 = param_2 + uVar5 * 8;
      pvVar6 = *(void **)(lVar3 + 0x248);
      if (pvVar6 == (void *)0x0) {
        pvVar6 = operator_new(0x68);
        FUN_009df5a0();
        *(void **)(lVar3 + 0x248) = pvVar6;
      }
      FUN_009df6c4(pvVar6,uVar5 & 0xffffffff,param_3,param_2 + 0x1f8);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 3);
    FUN_009c30e0(param_1,*(undefined8 *)(param_2 + 0x348),param_3,param_2,1);
    uVar4 = FUN_00d9eb38(param_3);
    lVar3 = FUN_00d532e4();
    *(undefined4 *)(param_2 + 0x350) = *(undefined4 *)(lVar3 + 0x48);
    lVar3 = FUN_00d532e4(uVar4);
    *(undefined4 *)(param_2 + 0x354) = *(undefined4 *)(lVar3 + 0x4c);
    lVar3 = FUN_00d532e4(uVar4);
    *(undefined4 *)(param_2 + 0x358) = *(undefined4 *)(lVar3 + 0x50);
    FUN_00a14348(param_2);
    lVar3 = *(long *)(param_3 + 0x40);
    fVar7 = (*(float *)(lVar3 + 0x1e0) + 1.0) *
            (*(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0))
    ;
    if (DAT_03130d50 <= fVar7) {
      fVar7 = DAT_03130d50;
    }
    fVar2 = DAT_03130c90;
    if (DAT_03130c90 <= fVar7) {
      fVar2 = fVar7;
    }
    uVar4 = FUN_01985d44(param_2,DAT_0312eaf0);
    local_68 = param_3 + 0x28;
    *(undefined8 *)(param_2 + 0x310) = uVar4;
    local_60 = *(undefined4 *)(param_3 + 0x30);
    FUN_009d8b0c(fVar2,uVar4,&local_68,*(undefined8 *)(*(long *)(param_2 + 0x318) + 8));
    uVar4 = *(undefined8 *)(param_2 + 0x348);
  }
  FUN_00a1a3b0(param_2 + 0x1f8,uVar4);
  FUN_00a1f488(param_2 + 0x218);
  local_70 = 0xffffffff;
  FUN_00a1a0f4(param_2 + 0x260,&local_70);
  uVar4 = FUN_01985d44(param_2,DAT_0312f178);
  *(undefined8 *)(param_2 + 0x308) = uVar4;
  FUN_009c8918(uVar4,0,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

