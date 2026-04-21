// functions/00d72 — 42 functions
#include "libGameKindred.h"




long FUN_00d72058(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = FUN_00d5029c();
    if (*(char *)(lVar1 + 0x70) == '\0') {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_00d5029c(*(undefined8 *)(param_1 + 0x30));
      lVar1 = lVar1 + 0xb8;
    }
  }
  return lVar1;
}




void FUN_00d7209c(long param_1)

{
  FUN_00d50cc8(*(undefined8 *)(param_1 + 0x30));
  return;
}




void FUN_00d720a4(long param_1)

{
  FUN_00d50de8(*(undefined8 *)(param_1 + 0x30));
  return;
}




undefined8 FUN_00d720ac(long param_1,int param_2)

{
  ulong uVar1;
  
  if ((*(uint *)(param_1 + 0x50) & 0x7fff0000) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(param_1 + 0x38 + uVar1 * 4) == param_2) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (*(uint *)(param_1 + 0x50) >> 0x10 & 0x7fff));
  }
  return 0;
}




undefined4 FUN_00d720ec(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x1a8);
  lVar1 = *plVar2;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    plVar2 = plVar2 + 1;
    if (param_2 == 0) break;
    lVar1 = *plVar2;
    param_2 = param_2 + -1;
  }
  return *(undefined4 *)(lVar1 + 8);
}




bool FUN_00d72120(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x54) != '\0';
  }
  return bVar1;
}




void FUN_00d72148(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d509d4();
    return;
  }
  return;
}




bool FUN_00d72158(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x55) != '\0';
  }
  return bVar1;
}




bool FUN_00d72180(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x56) != '\0';
  }
  return bVar1;
}




bool FUN_00d721a8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x57) != '\0';
  }
  return bVar1;
}




bool FUN_00d721d0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x58) != '\0';
  }
  return bVar1;
}




bool FUN_00d721f8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x59) != '\0';
  }
  return bVar1;
}




bool FUN_00d72220(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x5a) != '\0';
  }
  return bVar1;
}




bool FUN_00d72248(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_00d5029c();
    bVar1 = *(char *)(lVar2 + 0x9c) != '\0';
  }
  return bVar1;
}




void FUN_00d72270(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00d5029c();
    return;
  }
  return;
}




undefined4 * FUN_00d72280(long param_1)

{
  undefined4 *puVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = (undefined4 *)FUN_00d50ad4();
    return puVar1;
  }
  return &DAT_01bee8c4;
}




void FUN_00d722a8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_031a9d50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031a9d50), iVar2 != 0)) {
    uVar1 = FUN_00e6a474("collectAttackParameters");
    DAT_031a9d48 = FUN_0091ed5c("collectAttackParameters",uVar1,0x12345678);
    __cxa_guard_release(&DAT_031a9d50);
  }
  if (((DAT_031a9d60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031a9d60), iVar2 != 0)) {
    uVar1 = FUN_00e6a474("collectDefenseParameters");
    DAT_031a9d58 = FUN_0091ed5c("collectDefenseParameters",uVar1,0x12345678);
    __cxa_guard_release(&DAT_031a9d60);
  }
  uVar1 = FUN_00e6a474(param_2);
  FUN_0091ed5c(param_2,uVar1,0x12345678);
  return;
}




void FUN_00d72394(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_031a9d70 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031a9d70), iVar2 != 0)) {
    uVar1 = FUN_00e6a474("collectAttackParameters");
    DAT_031a9d68 = FUN_0091ed5c("collectAttackParameters",uVar1,0x12345678);
    __cxa_guard_release(&DAT_031a9d70);
  }
  if (((DAT_031a9d80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031a9d80), iVar2 != 0)) {
    uVar1 = FUN_00e6a474("collectDefenseParameters");
    DAT_031a9d78 = FUN_0091ed5c("collectDefenseParameters",uVar1,0x12345678);
    __cxa_guard_release(&DAT_031a9d80);
  }
  uVar1 = FUN_00e6a474(param_2);
  FUN_0091ed5c(param_2,uVar1,0x12345678);
  return;
}




void FUN_00d72480(long param_1)

{
  FUN_00d51dc0(*(undefined8 *)(param_1 + 0x30));
  return;
}




undefined8 FUN_00d72488(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x1a8);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = 0;
    do {
      iVar1 = strcasecmp(param_2,(char *)*puVar2);
      if (iVar1 == 0) {
        *param_3 = (int)lVar4;
        return 1;
      }
      puVar2 = (undefined8 *)puVar3[lVar4 + 1];
      lVar4 = lVar4 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00d724f4(undefined8 *param_1)

{
  long lVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e250;
  lVar1 = 0x38;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  do {
    ((undefined8 *)((long)param_1 + lVar1))[1] = 0xffffffffffffffff;
    *(undefined8 *)((long)param_1 + lVar1) = 0xffffffffffffffff;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x48);
  return;
}




void FUN_00d72544(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d7254c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d72550(undefined8 *param_1)

{
  ushort uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *(undefined2 *)((long)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2000;
  *param_1 = &PTR_FUN_0281e280;
  param_1[5] = &PTR_FUN_0281e2b0;
  memset(param_1 + 7,0,0xa0);
  FUN_00ceace8();
  uVar1 = FUN_00ceb16c();
  *(ushort *)((long)param_1 + 0xdc) =
       (uVar1 & 0x7f) << 8 | *(ushort *)((long)param_1 + 0xdc) & 0x80ff;
  return;
}




void FUN_00d725d0(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d725f8(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d7261c(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d7264c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d72678(long param_1)

{
  long lVar1;
  
  DAT_03130aa8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_03130aa8 + 1;
  lVar1 = param_1 + (ulong)DAT_03130aa8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d73e04;
  *(code **)(lVar1 + 0xb8) = FUN_00d73e28;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 10;
  *(uint *)(lVar1 + 0xa4) = DAT_03130aa8;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe0;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00d726e8,0);
  return;
}




void FUN_00d726e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1 = param_1 + 0x88;
  do {
    if ((*(long *)(param_1 + lVar2) != 0) && (uVar1 = FUN_00d71d8c(), (uVar1 & 1) == 0)) {
      FUN_01985ca8(*(undefined8 *)(param_1 + lVar2));
      *(undefined8 *)(param_1 + lVar2) = 0;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x50);
  return;
}




void FUN_00d72730(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0xdd) & 0x7f) != 0) {
    uVar8 = 0;
    do {
      if (((*(long *)(param_1 + 0x38 + uVar8 * 8) != 0) &&
          (iVar2 = FUN_00d71764(), iVar2 == param_2)) &&
         (uVar3 = FUN_00d71684(*(undefined8 *)(param_1 + 0x38 + uVar8 * 8)), (uVar3 & 1) != 0)) {
        FUN_00d716c0(*(undefined8 *)(param_1 + uVar8 * 8 + 0x38));
        lVar7 = *(long *)(param_1 + 0x10);
        if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c09220) {
          lVar7 = 0;
        }
        FUN_00d03154(auStack_70,*(undefined4 *)(lVar7 + 0x260),param_2,0xffffffff);
        FUN_00ce20fc(auStack_70);
        goto LAB_00d72914;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < ((ulong)*(byte *)(param_1 + 0xdd) & 0x7f));
  }
  uVar4 = FUN_00d6eb50();
  lVar5 = FUN_00d6eb88(uVar4,param_2);
  uVar4 = FUN_01985d44(param_1,DAT_031a9d88);
  iVar2 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = iVar2 + 1;
  FUN_00d70fc4(uVar4,lVar5,iVar2,param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c09220) {
    lVar7 = 0;
  }
  FUN_00d03154(auStack_70,*(undefined4 *)(lVar7 + 0x260),param_2,iVar2);
  FUN_00ce20fc(auStack_70);
  if ((*(char *)(lVar5 + 0x19d) == '\0') &&
     (uVar8 = FUN_00d72978(param_1,param_2), (uVar8 & 1) != 0)) {
    FUN_00d71108(uVar4);
    uVar6 = *(ushort *)(param_1 + 0xdc);
    if ((uVar6 & 0x7f00) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(param_1 + 0x38 + lVar7 * 8) == 0) {
          *(undefined8 *)(param_1 + lVar7 * 8 + 0x38) = uVar4;
          uVar6 = *(ushort *)(param_1 + 0xdc);
          break;
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < (uVar6 >> 8 & 0x7f));
    }
    *(ushort *)(param_1 + 0xdc) = uVar6 & 0xff00 | uVar6 + 1 & 0xff;
  }
  else {
    uVar8 = FUN_00d71d1c(uVar4);
    if (((uVar8 & 1) != 0) &&
       ((*(char *)(lVar5 + 0x19b) != '\0' && (uVar8 = FUN_00d7176c(uVar4), (uVar8 & 1) != 0)))) {
      FUN_00d717b4(uVar4,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x260),0);
      FUN_01985ca8(uVar4);
    }
  }
LAB_00d72914:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




byte FUN_00d72940(long param_1)

{
  return *(byte *)(param_1 + 0xdd) & 0x7f;
}




long FUN_00d7294c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




bool FUN_00d72978(long param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = *(ushort *)(param_1 + 0xdc);
  if ((uVar2 & 0x7f00) == 0) {
    uVar5 = uVar2 >> 8 & 0x7f;
  }
  else {
    uVar6 = 0;
    lVar1 = param_1 + 0x38;
    do {
      if ((*(long *)(lVar1 + uVar6 * 8) != 0) && (iVar3 = FUN_00d71764(), iVar3 == param_2)) {
        uVar4 = FUN_00d71d80(*(undefined8 *)(lVar1 + uVar6 * 8));
        if ((uVar4 & 1) != 0) {
          return false;
        }
        uVar4 = FUN_00d71684(*(undefined8 *)(lVar1 + uVar6 * 8));
        if ((uVar4 & 1) != 0) {
          return true;
        }
      }
      uVar2 = *(ushort *)(param_1 + 0xdc);
      uVar6 = uVar6 + 1;
      uVar5 = uVar2 >> 8 & 0x7f;
    } while (uVar6 < uVar5);
  }
  return (uVar2 & 0xff) < uVar5;
}




void FUN_00d72a18(undefined8 param_1,long param_2,int param_3,int param_4,ulong param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  long lVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_4 == -1) {
    if ((*(byte *)(param_2 + 0xdd) & 0x7f) != 0) {
      uVar11 = 0;
      do {
        if (((*(long *)(param_2 + 0x38 + uVar11 * 8) != 0) &&
            (iVar2 = FUN_00d71764(), iVar2 == param_3)) &&
           (uVar4 = FUN_00d71684(*(undefined8 *)(param_2 + 0x38 + uVar11 * 8)), (uVar4 & 1) != 0)) {
          FUN_00d716c0(*(undefined8 *)(param_2 + uVar11 * 8 + 0x38));
          lVar12 = *(long *)(param_2 + 0x10);
          if (lVar12 == 0) {
            return;
          }
          uVar10 = 0x10000;
          lVar6 = lVar12;
LAB_00d72ca8:
          do {
            do {
              lVar8 = lVar6;
              if ((lVar8 != lVar12) &&
                 (lVar6 = FUN_019865b4(*(undefined8 *)(lVar8 + 8),0x3bb20643), lVar6 != 0)) {
                (**(code **)(lVar6 + 8))(lVar8,param_3,1);
              }
              if (((uVar10 & 0xffff) < uVar10 >> 0x10) &&
                 (lVar6 = *(long *)(lVar8 + 0x18), lVar6 != 0)) {
                uVar10 = uVar10 & 0xffff0000 | uVar10 + 1 & 0xffff;
                goto LAB_00d72ca8;
              }
              if ((uVar10 & 0xffff) == 0) {
                return;
              }
              lVar6 = *(long *)(lVar8 + 0x20);
            } while (*(long *)(lVar8 + 0x20) != 0);
            lVar8 = *(long *)(lVar8 + 0x10);
            if (lVar8 == 0) {
              return;
            }
            uVar1 = uVar10 - 1 & 0xffff;
            if (uVar1 == 0) {
              return;
            }
            uVar10 = uVar1 | uVar10 & 0xffff0000;
            while (lVar6 = *(long *)(lVar8 + 0x20), lVar6 == 0) {
              if ((uVar10 - 1 & 0xffff) == 0) {
                return;
              }
              lVar8 = *(long *)(lVar8 + 0x10);
              uVar10 = uVar10 & 0xffff0000 | uVar10 - 1 & 0xffff;
              if (lVar8 == 0) {
                return;
              }
            }
          } while( true );
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < ((ulong)*(byte *)(param_2 + 0xdd) & 0x7f));
    }
  }
  else {
    uVar5 = FUN_00d6eb50();
    lVar12 = FUN_00d6eb88(uVar5,param_3);
    if ((*(char *)(lVar12 + 0x19d) == '\0') &&
       (uVar11 = FUN_00d72978(param_2,param_3), (uVar11 & 1) != 0)) {
      uVar5 = FUN_01985d44(param_2,DAT_031a9d88);
      FUN_00d70fc4(uVar5,lVar12,param_4,param_3);
      FUN_00d71108(uVar5);
      FUN_00d71740(uVar5,param_6);
      if (((param_5 & 1) == 0) && (uVar11 = FUN_00d717a4(uVar5), (uVar11 & 1) != 0)) {
        FUN_00d71fec(param_1,uVar5,param_7);
      }
      uVar9 = *(ushort *)(param_2 + 0xdc);
      uVar7 = uVar9 & 0x7f00;
      if ((uVar9 & 0x7f00) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(param_2 + 0x38 + lVar12 * 8) == 0) {
            *(undefined8 *)(param_2 + lVar12 * 8 + 0x38) = uVar5;
            uVar9 = *(ushort *)(param_2 + 0xdc);
            uVar7 = uVar9 & 0x7f00;
            break;
          }
          lVar12 = lVar12 + 1;
        } while ((uint)lVar12 < (uVar9 >> 8 & 0x7f));
      }
      lVar12 = *(long *)(param_2 + 0x10);
      *(ushort *)(param_2 + 0xdc) = uVar7 | uVar9 + 1 & 0xff | 0x8000;
      uVar3 = FUN_00d71764(uVar5);
      if (lVar12 != 0) {
        uVar10 = 0x10000;
        lVar6 = lVar12;
LAB_00d72c04:
        do {
          do {
            lVar8 = lVar6;
            if ((lVar8 != lVar12) &&
               (lVar6 = FUN_019865b4(*(undefined8 *)(lVar8 + 8),0x3bb20643), lVar6 != 0)) {
              (**(code **)(lVar6 + 8))(lVar8,uVar3,1);
            }
            if (((uVar10 & 0xffff) < uVar10 >> 0x10) &&
               (lVar6 = *(long *)(lVar8 + 0x18), lVar6 != 0)) {
              uVar10 = uVar10 & 0xffff0000 | uVar10 + 1 & 0xffff;
              goto LAB_00d72c04;
            }
            if ((uVar10 & 0xffff) == 0) {
              return;
            }
            lVar6 = *(long *)(lVar8 + 0x20);
          } while (*(long *)(lVar8 + 0x20) != 0);
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            return;
          }
          uVar1 = uVar10 - 1 & 0xffff;
          if (uVar1 == 0) {
            return;
          }
          uVar10 = uVar1 | uVar10 & 0xffff0000;
          while (lVar6 = *(long *)(lVar8 + 0x20), lVar6 == 0) {
            if ((uVar10 - 1 & 0xffff) == 0) {
              return;
            }
            lVar8 = *(long *)(lVar8 + 0x10);
            uVar10 = uVar10 & 0xffff0000 | uVar10 - 1 & 0xffff;
            if (lVar8 == 0) {
              return;
            }
          }
        } while( true );
      }
    }
  }
  return;
}




undefined8 FUN_00d72d24(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00d6eb50();
  lVar3 = FUN_00d6eb88(uVar2,param_2);
  if ((((*(char *)(lVar3 + 0x34) != '\0') && (*(char *)(lVar3 + 0x19b) != '\0')) &&
      (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) &&
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    return 1;
  }
  uVar2 = FUN_00d72978(param_1,param_2);
  return uVar2;
}




undefined1 FUN_00d72dac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xdc);
}




void FUN_00d72db4(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = param_1 + 0x38;
  uVar4 = *(undefined8 *)(lVar5 + (param_2 & 0xffffffff) * 8);
  *(undefined8 *)(lVar5 + (param_2 & 0xffffffff) * 8) =
       *(undefined8 *)(lVar5 + (param_3 & 0xffffffff) * 8);
  lVar2 = param_1 + 0x88;
  *(undefined8 *)(lVar5 + (param_3 & 0xffffffff) * 8) = uVar4;
  uVar4 = *(undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 8);
  *(undefined8 *)(lVar2 + (param_2 & 0xffffffff) * 8) =
       *(undefined8 *)(lVar2 + (param_3 & 0xffffffff) * 8);
  *(undefined8 *)(lVar2 + (param_3 & 0xffffffff) * 8) = uVar4;
  lVar5 = *(long *)(param_1 + 0x10);
  *(ushort *)(param_1 + 0xdc) = *(ushort *)(param_1 + 0xdc) | 0x8000;
  if (lVar5 == 0) {
    return;
  }
  uVar6 = 0x10000;
  lVar2 = lVar5;
LAB_00d72e5c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != lVar5) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x3bb20643), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,0xffff,0);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d72e5c;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d72ed0(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x38 + uVar2 * 8);
      if (lVar1 != 0) {
        if (param_2 == 0) goto LAB_00d72f08;
        param_2 = param_2 + -1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(ushort *)(param_1 + 0xdc) >> 8 & 0x7f));
  }
  lVar1 = 0;
LAB_00d72f08:
  FUN_00d7175c(lVar1);
  return;
}




void FUN_00d72f0c(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x38 + uVar2 * 8);
      if (lVar1 != 0) {
        if (param_2 == 0) goto LAB_00d72f44;
        param_2 = param_2 + -1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(ushort *)(param_1 + 0xdc) >> 8 & 0x7f));
  }
  lVar1 = 0;
LAB_00d72f44:
  FUN_00d71764(lVar1);
  return;
}




undefined8 FUN_00d72f48(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar4 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar4 * 8) != 0) {
        iVar1 = FUN_00d7175c();
        if (iVar1 == param_2) {
          uVar2 = FUN_00d71764(*(undefined8 *)(param_1 + uVar4 * 8 + 0x38));
          return uVar2;
        }
        uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar3 >> 8 & 0x7f));
  }
  return 0xffff;
}




undefined8 FUN_00d72fd0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x38) != 0) {
    uVar1 = FUN_00d71764();
    return uVar1;
  }
  return 0xffff;
}




bool FUN_00d72ff0(long param_1,uint param_2)

{
  return *(long *)(param_1 + (ulong)param_2 * 8 + 0x38) != 0;
}

