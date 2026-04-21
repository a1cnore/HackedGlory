// functions/00d73 — 59 functions
#include "libGameKindred.h"




undefined8 FUN_00d73004(long param_1,int param_2)

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
        iVar1 = FUN_00d71764();
        if (iVar1 == param_2) {
          uVar2 = FUN_00d7175c(*(undefined8 *)(param_1 + uVar4 * 8 + 0x38));
          return uVar2;
        }
        uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar3 >> 8 & 0x7f));
  }
  return 0xffffffff;
}




undefined8 FUN_00d73084(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x38) != 0) {
    uVar1 = FUN_00d7175c();
    return uVar1;
  }
  return 0xffffffff;
}




void FUN_00d730a4(void)

{
  FUN_00d730b8();
  FUN_00d71684();
  return;
}




undefined8 FUN_00d730b8(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar3 * 8) != 0) {
        iVar1 = FUN_00d7175c();
        if (iVar1 == param_2) {
          return *(undefined8 *)(param_1 + uVar3 * 8 + 0x38);
        }
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar2 >> 8 & 0x7f));
  }
  return 0;
}




void FUN_00d7312c(void)

{
  FUN_00d730b8();
  FUN_00d7169c();
  return;
}




void FUN_00d73140(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d73164();
  FUN_00d71740(uVar1,param_3);
  return;
}




undefined8 FUN_00d73164(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar3 * 8) != 0) {
        iVar1 = FUN_00d7175c();
        if (iVar1 == param_2) {
          return *(undefined8 *)(param_1 + uVar3 * 8 + 0x38);
        }
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar2 >> 8 & 0x7f));
  }
  return 0;
}




void FUN_00d731d8(void)

{
  FUN_00d730b8();
  FUN_00d716a4();
  return;
}




void FUN_00d731ec(void)

{
  FUN_00d730b8();
  FUN_00d716b0();
  return;
}




void FUN_00d73200(void)

{
  FUN_00d730b8();
  FUN_00d716b8();
  return;
}




void FUN_00d73214(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00d730b8();
  uVar3 = FUN_00d6eb50();
  uVar1 = FUN_00d71764(uVar2);
  FUN_00d6eb88(uVar3,uVar1);
  return;
}




int FUN_00d73250(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar4 * 8) != 0) {
        lVar1 = FUN_00d7167c();
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
        if (*(int *)(lVar1 + 0x1a0) == param_2) {
          iVar3 = iVar3 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar2 >> 8 & 0x7f));
  }
  return iVar3;
}




undefined8 FUN_00d732d0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  switch(param_2) {
  case 0:
    goto switchD_00d73304_caseD_0;
  case 1:
    lVar2 = FUN_00ceace8();
    uVar4 = *(uint *)(lVar2 + 0x60);
    break;
  case 2:
    lVar2 = FUN_00ceace8();
    uVar4 = *(uint *)(lVar2 + 0x5c);
    break;
  case 3:
    lVar2 = FUN_00ceace8();
    uVar4 = *(uint *)(lVar2 + 100);
    break;
  default:
    uVar4 = 0;
  }
  uVar1 = FUN_00d73250(param_1,param_2);
  if (uVar1 < uVar4) {
switchD_00d73304_caseD_0:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00d73360(void)

{
  FUN_00d730b8();
  FUN_00d717a4();
  return;
}




void FUN_00d73374(void)

{
  FUN_00d730b8();
  FUN_00d71d28();
  return;
}




void FUN_00d73388(void)

{
  FUN_00d730b8();
  FUN_00d71d8c();
  return;
}




void FUN_00d7339c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  int local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d730b8();
  uVar6 = FUN_00d717a4();
  if (((uVar6 & 1) != 0) && (fVar7 = (float)FUN_00d71fb0(uVar5), 0.0 < fVar7)) {
    uVar5 = FUN_00d71670(uVar5);
    thunk_FUN_00d9ff34(local_50,uVar5);
    iVar3 = local_50[0];
    if (*(char *)(param_1 + 0xdc) != '\0') {
      uVar6 = 0;
      lVar1 = param_1 + 0x38;
      do {
        if ((*(long *)(lVar1 + uVar6 * 8) != 0) && (iVar4 = FUN_00d7175c(), iVar4 != param_2)) {
          uVar5 = FUN_00d71670(*(undefined8 *)(lVar1 + uVar6 * 8));
          thunk_FUN_00d9ff34(local_50,uVar5);
          if (iVar3 == local_50[0]) {
            FUN_00d71f88(*(undefined8 *)(lVar1 + uVar6 * 8));
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(byte *)(param_1 + 0xdc));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d73488(void)

{
  FUN_00d730b8();
  FUN_00d71f90();
  return;
}




void FUN_00d7349c(void)

{
  FUN_00d730b8();
  FUN_00d71fb0();
  return;
}




void FUN_00d734b0(void)

{
  FUN_00d730b8();
  FUN_00d71fb8();
  return;
}




void FUN_00d734c4(void)

{
  FUN_00d730b8();
  FUN_00d72058();
  return;
}




void FUN_00d734d8(void)

{
  FUN_00d730b8();
  FUN_00d7209c();
  return;
}




void FUN_00d734ec(void)

{
  FUN_00d730b8();
  FUN_00d72248();
  return;
}




void FUN_00d73500(void)

{
  FUN_00d730b8();
  FUN_00d720a4();
  return;
}




void FUN_00d73514(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d730b8();
  FUN_00d720ac(uVar1,param_3);
  return;
}




void FUN_00d73538(void)

{
  FUN_00d730b8();
  FUN_00d72120();
  return;
}




void FUN_00d7354c(void)

{
  FUN_00d730b8();
  FUN_00d72148();
  return;
}




void FUN_00d73560(void)

{
  FUN_00d730b8();
  FUN_00d72270();
  return;
}




bool FUN_00d73574(void)

{
  long lVar1;
  
  lVar1 = FUN_00d730b8();
  return lVar1 != 0;
}




undefined8 FUN_00d73590(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar3 * 8) != 0) {
        iVar1 = FUN_00d71764();
        if (iVar1 == param_2) {
          return 1;
        }
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar2 >> 8 & 0x7f));
  }
  return 0;
}




void FUN_00d73600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x38 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_00d722a8(lVar1,param_2,param_3);
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar2 >> 8 & 0x7f));
  }
  return;
}




void FUN_00d73670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x38 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_00d72394(lVar1,param_2,param_3);
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar2 >> 8 & 0x7f));
  }
  return;
}




void FUN_00d736e0(void)

{
  FUN_00d730b8();
  FUN_00d7176c();
  return;
}




void FUN_00d736f4(void)

{
  FUN_00d730b8();
  FUN_00d71790();
  return;
}




void FUN_00d73708(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d73164();
  FUN_00d717b4(uVar1,param_3,1);
  return;
}




void FUN_00d73730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d73164();
  FUN_00d719e4(uVar1,param_3,1);
  return;
}




void FUN_00d73758(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d73164();
  FUN_00d7339c(param_1,param_2);
  FUN_00d71da8(uVar1);
  return;
}




void FUN_00d73798(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d73164();
  FUN_00d7339c(param_1,param_2);
  FUN_00d71df0(uVar1,param_3);
  return;
}




void FUN_00d737e0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d73164();
  FUN_00d7339c(param_1,param_2);
  FUN_00d71ec4(uVar1,param_3);
  return;
}




void FUN_00d73828(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  
  lVar1 = FUN_00d73164();
  FUN_00d71f50();
  if ((((param_3 & 1) != 0) && (piVar2 = (int *)FUN_00d72280(lVar1), *piVar2 != 0x377db359)) &&
     ((*(byte *)(param_1 + 0xdd) & 0x7f) != 0)) {
    uVar4 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar4 * 8) != 0) {
        piVar3 = (int *)FUN_00d72280();
        if ((*piVar3 == *piVar2) && (*(long *)(param_1 + 0x38 + uVar4 * 8) != lVar1)) {
          FUN_00d71f50();
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < ((ulong)*(byte *)(param_1 + 0xdd) & 0x7f));
  }
  return;
}




void FUN_00d738e0(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = FUN_00d73164();
  if (lVar3 != 0) {
    FUN_00d71d38(lVar3);
    uVar4 = FUN_00d71d74(lVar3);
    if ((uVar4 & 1) != 0) {
      FUN_00d71370(lVar3,param_3 & 1);
      *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xdc) + -1;
      uVar2 = FUN_00d71764(lVar3);
      uVar5 = *(ushort *)(param_1 + 0xdc);
      uVar6 = (uint)uVar5;
      if ((uVar5 & 0x7f00) != 0) {
        uVar4 = 0;
        do {
          if (*(long *)(param_1 + 0x38 + uVar4 * 8) == lVar3) {
            *(undefined8 *)(param_1 + 0x38 + uVar4 * 8) = 0;
            uVar6 = (uint)*(ushort *)(param_1 + 0xdc);
          }
          uVar5 = (ushort)uVar6;
          uVar4 = uVar4 + 1;
          uVar1 = uVar6 >> 8 & 0x7f;
        } while (uVar4 < uVar1);
        if (uVar1 != 0) {
          lVar8 = 0;
          do {
            if (*(long *)(param_1 + 0x88 + lVar8 * 8) == 0) {
              *(long *)(param_1 + lVar8 * 8 + 0x88) = lVar3;
              uVar5 = *(ushort *)(param_1 + 0xdc);
              break;
            }
            lVar8 = lVar8 + 1;
          } while ((uint)lVar8 < uVar1);
        }
      }
      lVar3 = *(long *)(param_1 + 0x10);
      *(ushort *)(param_1 + 0xdc) = uVar5 | 0x8000;
      if (lVar3 != 0) {
        uVar6 = 0x10000;
        lVar8 = lVar3;
LAB_00d73a08:
        do {
          do {
            lVar7 = lVar8;
            if ((lVar7 != lVar3) &&
               (lVar8 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x3bb20643), lVar8 != 0)) {
              (**(code **)(lVar8 + 8))(lVar7,uVar2,0xffffffff);
            }
            if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar8 = *(long *)(lVar7 + 0x18), lVar8 != 0))
            {
              uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
              goto LAB_00d73a08;
            }
            if ((uVar6 & 0xffff) == 0) {
              return;
            }
            lVar8 = *(long *)(lVar7 + 0x20);
          } while (*(long *)(lVar7 + 0x20) != 0);
          lVar7 = *(long *)(lVar7 + 0x10);
          if (lVar7 == 0) {
            return;
          }
          uVar1 = uVar6 - 1 & 0xffff;
          if (uVar1 == 0) {
            return;
          }
          uVar6 = uVar1 | uVar6 & 0xffff0000;
          while (lVar8 = *(long *)(lVar7 + 0x20), lVar8 == 0) {
            if ((uVar6 - 1 & 0xffff) == 0) {
              return;
            }
            lVar7 = *(long *)(lVar7 + 0x10);
            uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
            if (lVar7 == 0) {
              return;
            }
          }
        } while( true );
      }
    }
  }
  return;
}




bool FUN_00d73a7c(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xdc);
  *(ushort *)(param_1 + 0xdc) = uVar1 & 0x7fff;
  return (short)uVar1 < 0;
}




uint FUN_00d73a9c(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar4 * 8) != 0) {
        uVar1 = FUN_00d71764();
        *(undefined4 *)(param_2 + (ulong)uVar3 * 4) = uVar1;
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar2 >> 8 & 0x7f));
  }
  return uVar3;
}




uint FUN_00d73b18(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar4 * 8) != 0) {
        uVar1 = FUN_00d7175c();
        *(undefined4 *)(param_2 + (ulong)uVar3 * 4) = uVar1;
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar2 >> 8 & 0x7f));
  }
  return uVar3;
}




uint FUN_00d73b94(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar4 * 8) != 0) {
        uVar1 = FUN_00d71670();
        *(undefined8 *)(param_2 + (ulong)uVar3 * 8) = uVar1;
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar2 >> 8 & 0x7f));
  }
  return uVar3;
}




void FUN_00d73c10(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar3 * 8) != 0) {
        uVar1 = FUN_00d7169c();
        *(undefined4 *)(param_2 + (ulong)uVar4 * 4) = uVar1;
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
        uVar4 = uVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar2 >> 8 & 0x7f));
  }
  return;
}




void FUN_00d73c80(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar3 * 8) != 0) {
        uVar1 = FUN_00d717a4();
        uVar5 = 0;
        if ((uVar1 & 1) != 0) {
          uVar5 = FUN_00d71fcc(*(undefined8 *)(param_1 + 0x38 + uVar3 * 8));
        }
        *(undefined4 *)(param_2 + (ulong)uVar4 * 4) = uVar5;
        uVar2 = (uint)*(ushort *)(param_1 + 0xdc);
        uVar4 = uVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uVar2 >> 8 & 0x7f));
  }
  return;
}




void FUN_00d73d00(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
  if ((*(ushort *)(param_1 + 0xdc) & 0x7f00) != 0) {
    uVar4 = 0;
    uVar5 = 0;
    do {
      if (*(long *)(param_1 + 0x38 + uVar4 * 8) != 0) {
        uVar2 = FUN_00d717a4();
        uVar1 = 0;
        if ((uVar2 & 1) != 0) {
          uVar1 = FUN_00d716b0(*(undefined8 *)(param_1 + 0x38 + uVar4 * 8));
        }
        *(undefined4 *)(param_2 + (ulong)uVar5 * 4) = uVar1;
        uVar3 = (uint)*(ushort *)(param_1 + 0xdc);
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar3 >> 8 & 0x7f));
  }
  return;
}




void FUN_00d73d84(void)

{
  FUN_00d730b8();
  FUN_00d71bb4();
  return;
}




void FUN_00d73d98(void)

{
  FUN_00d730b8();
  FUN_00d71bc4();
  return;
}




void FUN_00d73db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d73164();
  FUN_00d71bdc(uVar1,param_3,param_4);
  return;
}




void FUN_00d73ddc(long param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x38);
  if (lVar1 != 0) {
    FUN_00d72480(lVar1,param_3);
    return;
  }
  return;
}




long FUN_00d73df4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d73dfc(long param_1)

{
  return param_1 + -0x28;
}




undefined8 FUN_00d73e04(undefined8 param_1)

{
  FUN_00d72550();
  return param_1;
}




void FUN_00d73e28(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d73e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d73e34(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  param_1[5] = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281e2e0;
  uVar1 = DAT_03214ce8;
  puVar5 = param_1 + 8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  do {
    *(undefined4 *)puVar5 = 0;
    puVar5[1] = 0;
    memset(puVar5 + 2,0xff,0x80);
    puVar5 = puVar5 + 0x12;
  } while (puVar5 != param_1 + 0x9e0);
  lVar6 = 0;
  lVar7 = (long)param_1 + 0x4f04;
  lVar8 = (long)param_1 + 0x513c;
  do {
    lVar2 = 0;
    *(undefined4 *)((long)param_1 + lVar6 * 0x1344 + 0x4f00) = 0xffff;
    do {
      ((undefined8 *)(lVar7 + lVar2))[1] = 0xffff0000ffff;
      *(undefined8 *)(lVar7 + lVar2) = 0xffff0000ffff;
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != 0x230);
    lVar2 = 0;
    *(undefined4 *)((long)param_1 + lVar6 * 0x1344 + 0x5134) = 0;
    lVar3 = lVar8;
    do {
      lVar4 = 0;
      do {
        *(undefined4 *)((long)param_1 + lVar2 * 0x2c0 + lVar6 * 0x1344 + 0x5138) = 0;
        *(undefined4 *)(lVar3 + lVar4) = 0xffff;
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0x230);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x2c0;
    } while (lVar2 != 6);
    memset((void *)((long)param_1 + lVar6 * 0x1344 + 0x61b8),0,0x8c);
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 0x1344;
    lVar8 = lVar8 + 0x1344;
  } while (lVar6 != 2);
  return;
}




void FUN_00d73fa0(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d73fc4(long param_1)

{
  long lVar1;
  
  DAT_031328d8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031328d8 + 1;
  lVar1 = param_1 + (ulong)DAT_031328d8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d754d8;
  *(code **)(lVar1 + 0xb8) = FUN_00d754fc;
  *(uint *)(lVar1 + 0xa4) = DAT_031328d8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x7588;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}

