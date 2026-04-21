// functions/00d5d — 19 functions
#include "libGameKindred.h"




void FUN_00d5d314(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if (((param_2 & 1) != 0) &&
     ((uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d58a04(param_1);
  }
  for (lVar2 = *(long *)(param_1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_031a96c0) {
      if ((param_2 >> 10 & 1) == 0) {
        return;
      }
      FUN_01985ca8();
      return;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if (uVar1 == 0x1f) {
    if ((param_2 >> 10 & 1) == 0) {
LAB_00d5d3c4:
      FUN_00d5ad88(param_1);
      return;
    }
  }
  else if (((param_2 >> 10 & 1) == 0) &&
          (1 < (ushort)(*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3U))) goto LAB_00d5d3c4;
  return;
}




void FUN_00d5d3f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) == 0) {
switchD_00d5d440_caseD_4:
    return;
  }
  lVar2 = FUN_00d70a78();
  FUN_00d5ce44(param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x88));
  switch(**(undefined4 **)(param_1 + 0x38)) {
  case 0:
    uVar3 = *(undefined8 *)(lVar2 + 0x100);
    break;
  case 1:
    uVar3 = *(undefined8 *)(lVar2 + 0x108);
    break;
  case 2:
    uVar3 = *(undefined8 *)(lVar2 + 0x120);
    break;
  case 3:
    uVar3 = *(undefined8 *)(lVar2 + 0x118);
    break;
  default:
    goto switchD_00d5d440_caseD_4;
  case 5:
  case 9:
    uVar3 = *(undefined8 *)(lVar2 + 0x110);
  }
  FUN_00d5ce44(param_1,uVar3);
  return;
}




void FUN_00d5d484(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onLeaveCombatName_02bed5a8);
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5d500:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x28d80521), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5d500;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d5d56c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 3) {
    lVar2 = *(long *)(param_1 + 0x40);
    fVar5 = (*(float *)(lVar2 + 0x1d4) + 1.0) *
            (*(float *)(lVar2 + 0x6c) +
            *(float *)(lVar2 + 0x120) * (*(float *)(lVar2 + 0x288) + 1.0));
    fVar8 = (*(float *)(lVar2 + 0x1d8) + 1.0) *
            (*(float *)(lVar2 + 0x70) +
            *(float *)(lVar2 + 0x124) * (*(float *)(lVar2 + 0x28c) + 1.0));
    if (DAT_031a95e4 <= fVar5) {
      fVar5 = DAT_031a95e4;
    }
    fVar4 = (float)DAT_031a9524;
    if ((float)DAT_031a9524 <= fVar5) {
      fVar4 = fVar5;
    }
    if (DAT_031a95e8 <= fVar8) {
      fVar8 = DAT_031a95e8;
    }
    fVar5 = DAT_031a9524._4_4_;
    if (DAT_031a9524._4_4_ <= fVar8) {
      fVar5 = fVar8;
    }
    *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + (fVar4 + fVar5) * 0.5;
    fVar5 = (*(float *)(lVar2 + 0x1c4) + 1.0) *
            (*(float *)(lVar2 + 0x5c) +
            *(float *)(lVar2 + 0x110) * (*(float *)(lVar2 + 0x278) + 1.0));
    fVar8 = (*(float *)(lVar2 + 0x1cc) + 1.0) *
            (*(float *)(lVar2 + 100) + *(float *)(lVar2 + 0x118) * (*(float *)(lVar2 + 0x280) + 1.0)
            );
    if (DAT_031a95d4 <= fVar5) {
      fVar5 = DAT_031a95d4;
    }
    fVar4 = DAT_031a9514;
    if (DAT_031a9514 <= fVar5) {
      fVar4 = fVar5;
    }
    if (DAT_031a95dc <= fVar8) {
      fVar8 = DAT_031a95dc;
    }
    fVar5 = DAT_031a951c;
    if (DAT_031a951c <= fVar8) {
      fVar5 = fVar8;
    }
    *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) + (fVar4 + fVar5) * 0.5;
    fVar8 = (*(float *)(lVar2 + 0x1c8) + 1.0) *
            (*(float *)(lVar2 + 0x60) +
            *(float *)(lVar2 + 0x114) * (*(float *)(lVar2 + 0x27c) + 1.0));
    fVar5 = (*(float *)(lVar2 + 0x1d0) + 1.0) *
            (*(float *)(lVar2 + 0x68) +
            *(float *)(lVar2 + 0x11c) * (*(float *)(lVar2 + 0x284) + 1.0));
    if (DAT_031a95d8 <= fVar8) {
      fVar8 = DAT_031a95d8;
    }
    fVar4 = DAT_031a9518;
    if (DAT_031a9518 <= fVar8) {
      fVar4 = fVar8;
    }
    if (DAT_031a95e0 <= fVar5) {
      fVar5 = DAT_031a95e0;
    }
    fVar8 = DAT_031a9520;
    if (DAT_031a9520 <= fVar5) {
      fVar8 = fVar5;
    }
    fVar5 = (fVar4 + fVar8) * 0.5;
    pfVar3 = (float *)(param_2 + 0x40);
  }
  else {
    if (iVar1 == 1) {
      lVar2 = *(long *)(param_1 + 0x40);
      fVar5 = (*(float *)(lVar2 + 0x1d8) + 1.0) *
              (*(float *)(lVar2 + 0x70) +
              *(float *)(lVar2 + 0x124) * (*(float *)(lVar2 + 0x28c) + 1.0));
      if (DAT_031a95e8 <= fVar5) {
        fVar5 = DAT_031a95e8;
      }
      fVar8 = DAT_031a9524._4_4_;
      if (DAT_031a9524._4_4_ <= fVar5) {
        fVar8 = fVar5;
      }
      *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + fVar8;
      fVar5 = (*(float *)(lVar2 + 0x1cc) + 1.0) *
              (*(float *)(lVar2 + 100) +
              *(float *)(lVar2 + 0x118) * (*(float *)(lVar2 + 0x280) + 1.0));
      if (DAT_031a95dc <= fVar5) {
        fVar5 = DAT_031a95dc;
      }
      fVar8 = DAT_031a951c;
      if (DAT_031a951c <= fVar5) {
        fVar8 = fVar5;
      }
      *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) + fVar8;
      fVar5 = (*(float *)(lVar2 + 0x1d0) + 1.0) *
              (*(float *)(lVar2 + 0x68) +
              *(float *)(lVar2 + 0x11c) * (*(float *)(lVar2 + 0x284) + 1.0));
      if (DAT_031a95e0 <= fVar5) {
        fVar5 = DAT_031a95e0;
      }
      fVar8 = DAT_031a9520;
      if (DAT_031a9520 <= fVar5) {
        fVar8 = fVar5;
      }
      *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) + fVar8;
      fVar6 = *(float *)(lVar2 + 0x200);
      fVar7 = *(float *)(lVar2 + 0x98);
      fVar4 = *(float *)(lVar2 + 0x14c) * (*(float *)(lVar2 + 0x2b4) + 1.0);
      fVar8 = DAT_031a9610;
      fVar5 = DAT_031a9550;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x40);
      fVar5 = (*(float *)(lVar2 + 0x1d4) + 1.0) *
              (*(float *)(lVar2 + 0x6c) +
              *(float *)(lVar2 + 0x120) * (*(float *)(lVar2 + 0x288) + 1.0));
      if (DAT_031a95e4 <= fVar5) {
        fVar5 = DAT_031a95e4;
      }
      fVar8 = (float)DAT_031a9524;
      if ((float)DAT_031a9524 <= fVar5) {
        fVar8 = fVar5;
      }
      *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + fVar8;
      fVar5 = (*(float *)(lVar2 + 0x1c4) + 1.0) *
              (*(float *)(lVar2 + 0x5c) +
              *(float *)(lVar2 + 0x110) * (*(float *)(lVar2 + 0x278) + 1.0));
      if (DAT_031a95d4 <= fVar5) {
        fVar5 = DAT_031a95d4;
      }
      fVar8 = DAT_031a9514;
      if (DAT_031a9514 <= fVar5) {
        fVar8 = fVar5;
      }
      *(float *)(param_2 + 0x3c) = *(float *)(param_2 + 0x3c) + fVar8;
      fVar5 = (*(float *)(lVar2 + 0x1c8) + 1.0) *
              (*(float *)(lVar2 + 0x60) +
              *(float *)(lVar2 + 0x114) * (*(float *)(lVar2 + 0x27c) + 1.0));
      if (DAT_031a95d8 <= fVar5) {
        fVar5 = DAT_031a95d8;
      }
      fVar8 = DAT_031a9518;
      if (DAT_031a9518 <= fVar5) {
        fVar8 = fVar5;
      }
      *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) + fVar8;
      fVar6 = *(float *)(lVar2 + 0x1fc);
      fVar7 = *(float *)(lVar2 + 0x94);
      fVar4 = *(float *)(lVar2 + 0x148) * (*(float *)(lVar2 + 0x2b0) + 1.0);
      fVar8 = DAT_031a960c;
      fVar5 = DAT_031a954c;
    }
    fVar4 = (fVar6 + 1.0) * (fVar7 + fVar4);
    if (fVar8 <= fVar4) {
      fVar4 = fVar8;
    }
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    pfVar3 = (float *)(param_2 + 0x38);
  }
  *pfVar3 = *pfVar3 + fVar5;
  return;
}




void FUN_00d5d988(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  fVar2 = (float)FUN_00d5cfc4(param_1,uVar1,1);
  fVar3 = (float)FUN_00d5cfc4(param_1,uVar1,0);
  fVar4 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x40),0x3f800000);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x3c),0x3f800000);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_2 + 0x34) = (1.0 - fVar5) * (fVar2 + (fVar3 - fVar2) * (1.0 - fVar4));
  return;
}




void FUN_00d5da14(long param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x230);
  return;
}




void FUN_00d5da24(long param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x22c);
  return;
}




void FUN_00d5da34(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x228) + 1.0) *
          (*(float *)(lVar1 + 0xc0) + *(float *)(lVar1 + 0x174) * (*(float *)(lVar1 + 0x2dc) + 1.0))
  ;
  if (DAT_031a9638 <= fVar2) {
    fVar2 = DAT_031a9638;
  }
  fVar3 = DAT_031a9578;
  if (DAT_031a9578 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(param_2 + 0x20) = fVar3;
  return;
}




void FUN_00d5da90(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x224) + 1.0) *
          (*(float *)(lVar1 + 0xbc) + *(float *)(lVar1 + 0x170) * (*(float *)(lVar1 + 0x2d8) + 1.0))
  ;
  if (DAT_031a9634 <= fVar2) {
    fVar2 = DAT_031a9634;
  }
  fVar3 = DAT_031a9574;
  if (DAT_031a9574 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(param_2 + 0x24) = fVar3;
  return;
}




void FUN_00d5daec(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00d9e390(param_2);
  uVar2 = DAT_03214ce8;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  else {
    *(long *)(param_1 + 0x2d0) = lVar1 + 0x28;
    uVar2 = *(undefined4 *)(lVar1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar2;
  return;
}




void FUN_00d5db38(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5dbac:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x83fa09cd), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2,param_3 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5dbac;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d5dc24(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5dc90:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0xd9580cbc), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5dc90;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d5dd00(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5dd6c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0xa72e0b14), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5dd6c;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d5dddc(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5de48:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x284e050e), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5de48;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d5deb8(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6c3b0();
    return;
  }
  return;
}




void FUN_00d5dec8(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6c710(*(long *)(param_1 + 0x60),PTR_s_onActorDieName_02bed590,param_2);
    FUN_00d6c3e8(*(undefined8 *)(param_1 + 0x60),param_2);
    return;
  }
  return;
}




int FUN_00d5df18(long param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  iVar3 = 0;
  if (uVar1 != 0x1f) {
    sVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90);
    if (sVar2 != 3) {
      return (uint)(sVar2 == 4) << 1;
    }
    iVar3 = 1;
  }
  return iVar3;
}




void FUN_00d5df60(long param_1)

{
  FUN_00d5538c(param_1 + 0x88,4,0,0);
  return;
}




void FUN_00d5df74(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5dfe0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x299d0531), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5dfe0;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}

