// functions/00a17 — 32 functions
#include "libGameKindred.h"




void FUN_00a1704c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x340) != 0) && (lVar2 = FUN_00d9eb38(), lVar2 != 0)) {
    uVar1 = FUN_00d54968();
    FUN_00d59a60(*(undefined8 *)(param_1 + 0x340),uVar1,3,0);
    return;
  }
  return;
}




void FUN_00a1709c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312f134) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_009c0474();
  return;
}




void FUN_00a170cc(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_009f1f64();
  uVar3 = FUN_009f1f64();
  uVar1 = FUN_009f1f88(uVar3,6);
  FUN_009f2198(uVar2,6,~uVar1 & 1);
  return;
}




void FUN_00a1710c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01980590();
  if ((uVar1 & 1) != 0) {
    FUN_00a1bddc(param_1 + 0x188);
    return;
  }
  return;
}




undefined8 FUN_00a17140(long param_1,int *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined **local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = *param_2;
  if (iVar3 == 1) {
    FUN_009c61c0(*(undefined8 *)(param_1 + 0x348));
    iVar3 = *param_2;
  }
  if (iVar3 == 1) {
    if (param_1 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 2);
      iVar3 = param_2[1];
      uVar7 = 0x10000;
      lVar4 = param_1;
LAB_00a172dc:
      do {
        do {
          lVar5 = lVar4;
          if ((lVar5 != param_1) &&
             (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x8b950a0d), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar5,param_3,uVar6,iVar3);
          }
          if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
            uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
            goto LAB_00a172dc;
          }
          if ((uVar7 & 0xffff) == 0) goto LAB_00a173e8;
          lVar4 = *(long *)(lVar5 + 0x20);
        } while (*(long *)(lVar5 + 0x20) != 0);
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((lVar5 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
        uVar7 = uVar1 | uVar7 & 0xffff0000;
        while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
          if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00a173e8;
          lVar5 = *(long *)(lVar5 + 0x10);
          uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
          if (lVar5 == 0) goto LAB_00a173e8;
        }
      } while( true );
    }
  }
  else if (iVar3 == 2) {
    if (param_1 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 2);
      iVar3 = param_2[1];
      uVar7 = 0x10000;
      lVar4 = param_1;
LAB_00a17234:
      do {
        do {
          lVar5 = lVar4;
          if ((lVar5 != param_1) &&
             (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x5ae807ed), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar5,param_3,uVar6,iVar3);
          }
          if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
            uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
            goto LAB_00a17234;
          }
          if ((uVar7 & 0xffff) == 0) goto LAB_00a173e8;
          lVar4 = *(long *)(lVar5 + 0x20);
        } while (*(long *)(lVar5 + 0x20) != 0);
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((lVar5 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
        uVar7 = uVar1 | uVar7 & 0xffff0000;
        while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
          if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00a173e8;
          lVar5 = *(long *)(lVar5 + 0x10);
          uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
          if (lVar5 == 0) goto LAB_00a173e8;
        }
      } while( true );
    }
  }
  else if ((iVar3 == 3) && (param_1 != 0)) {
    uVar6 = *(undefined8 *)(param_2 + 2);
    iVar3 = param_2[1];
    uVar7 = 0x10000;
    lVar4 = param_1;
LAB_00a17384:
    do {
      do {
        lVar5 = lVar4;
        if ((lVar5 != param_1) &&
           (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x80a40995), lVar4 != 0)) {
          (**(code **)(lVar4 + 8))(lVar5,param_3,uVar6,iVar3);
        }
        if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
          uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
          goto LAB_00a17384;
        }
        if ((uVar7 & 0xffff) == 0) goto LAB_00a173e8;
        lVar4 = *(long *)(lVar5 + 0x20);
      } while (*(long *)(lVar5 + 0x20) != 0);
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((lVar5 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
      uVar7 = uVar1 | uVar7 & 0xffff0000;
      while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
        if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00a173e8;
        lVar5 = *(long *)(lVar5 + 0x10);
        uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
        if (lVar5 == 0) goto LAB_00a173e8;
      }
    } while( true );
  }
LAB_00a173e8:
  iVar3 = FUN_009f1f94(3);
  if (*param_2 == 1) {
    if (iVar3 == 0) {
      if (param_2[1] != 2) goto LAB_00a17438;
    }
    else if ((param_2[1] != 1) || ((param_4 & 1) == 0)) goto LAB_00a17438;
    local_70 = 1;
    local_78 = &PTR_FUN_027c84a0;
    FUN_00a1a334(param_1 + 0x260,&local_78);
  }
LAB_00a17438:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}




undefined8 FUN_00a1747c(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 4) != 4) {
    FUN_00a1bd34();
  }
  return 1;
}




void FUN_00a174a0(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x36a) == '\0') {
LAB_00a1756c:
    if (*param_2 == 3) {
      uVar4 = 0;
      if (param_2[1] != 1) goto LAB_00a17618;
      local_48 = &DAT_027c8628;
      local_40 = CONCAT44(local_40._4_4_,0x1d);
    }
    else {
      uVar4 = 0;
      if ((*param_2 != 1) || (uVar4 = 0, param_2[1] != 1)) goto LAB_00a17618;
      uVar3 = FUN_01980644(0x50);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_01980644(0x4e);
        uVar4 = 0;
        if ((uVar3 & 1) == 0) goto LAB_00a17618;
        local_40 = 0x40000001d;
      }
      else {
        local_40 = 0x20000001d;
      }
      local_48 = &DAT_027c8610;
    }
    local_48 = local_48 + 0x10;
    FUN_00a1a334(param_1 + 0x260,&local_48);
  }
  else {
    for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_0312f134) goto LAB_00a17504;
    }
    uVar3 = FUN_00a1bd34();
    if ((uVar3 & 1) == 0) {
LAB_00a17510:
      for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
        if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_0312f134) goto LAB_00a1756c;
      }
      uVar3 = FUN_00a1bd34();
      if (((uVar3 & 1) != 0) || (*param_2 != 1)) goto LAB_00a1756c;
    }
    else {
LAB_00a17504:
      if (*param_2 != 3) goto LAB_00a17510;
    }
    bVar2 = FUN_00a1472c(param_1,param_3,*(undefined4 *)(param_1 + 0x36c));
    *(byte *)(param_1 + 0x36a) = ~bVar2 & 1;
  }
  uVar4 = 1;
LAB_00a17618:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00a17640(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    FUN_00965940(param_1 + 0x1e8);
    uVar1 = DAT_03214ce8;
    lVar2 = *(long *)(param_1 + 0x340);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x2b0) = 0;
      *(undefined4 *)(lVar2 + 0x2b8) = uVar1;
    }
  }
  return;
}




void FUN_00a17684(long param_1)

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
LAB_00a176ec:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0xdc302c4), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00a176ec;
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




void FUN_00a17758(long param_1)

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
LAB_00a177c0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x163803be), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00a177c0;
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




void FUN_00a1782c(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    FUN_00965940(param_1 + 0x1e8);
    uVar1 = DAT_03214ce8;
    lVar2 = *(long *)(param_1 + 0x340);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x2b0) = 0;
      *(undefined4 *)(lVar2 + 0x2b8) = uVar1;
    }
  }
  return;
}




void FUN_00a17870(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    do {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_02e8b430) {
        uVar3 = FUN_00a0d99c(lVar5);
        iVar2 = FUN_008ff0d4();
        if (((iVar2 == 0) && (iVar2 = FUN_008ff0dc(uVar3), iVar2 == param_2)) ||
           ((iVar2 = FUN_008ff0d4(uVar3), iVar2 == 1 &&
            (iVar2 = FUN_008ff0e4(uVar3), iVar2 == param_2)))) {
          FUN_019888e0(lVar5);
          FUN_009c61b8(*(undefined8 *)(param_1 + 0x348));
          goto LAB_00a17914;
        }
        break;
      }
      lVar5 = *(long *)(lVar5 + 0x20);
    } while (lVar5 != 0);
    if (param_1 == 0) {
      return;
    }
  }
LAB_00a17914:
  uVar6 = 0x10000;
  lVar5 = param_1;
LAB_00a17960:
  do {
    do {
      lVar4 = lVar5;
      if ((lVar4 != param_1) &&
         (lVar5 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x295f0542), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar4,param_2);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar5 = *(long *)(lVar4 + 0x18), lVar5 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00a17960;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar5 = *(long *)(lVar4 + 0x20), lVar5 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00a179d0(undefined8 param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(param_3 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_3 + 1) >> 0x20);
  if (400.0 < (*param_2 - *param_3) * (*param_2 - *param_3) + fVar2 * fVar2 + fVar3 * fVar3) {
    FUN_009bbfb0();
    FUN_009bd5c8();
    FUN_009bbfb0();
    uVar1 = FUN_009bd5c8();
    FUN_009b81fc(uVar1,param_3,2);
    return;
  }
  return;
}




void FUN_00a17a4c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  FUN_00a11d98(param_1 + 0x28,uVar1,0,0);
  return;
}




void FUN_00a17a6c(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x36a) = 1;
  *(undefined4 *)(param_1 + 0x36c) = param_2;
  FUN_009c4eb0(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a17a84(long param_1)

{
  *(undefined1 *)(param_1 + 0x36a) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  FUN_009c4ee0(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a17a98(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a1ae38();
  FUN_00a1b09c(uVar1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_00a17aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  FUN_009c4f08(*(undefined8 *)(param_1 + 0x348));
  uVar5 = FUN_00d9eb38(*(undefined8 *)(param_1 + 0x340));
  iVar2 = FUN_00d5401c(uVar5,param_2);
  uVar3 = FUN_00d5401c(uVar5,param_3);
  uVar6 = 0;
  while( true ) {
    lVar1 = param_1 + 0x248 + uVar6 * 4;
    if (*(int *)(lVar1 + 0x108) == iVar2) {
      *(undefined4 *)(lVar1 + 0x108) = uVar3;
    }
    if ((*(long *)(param_1 + 0x248 + uVar6 * 8) != 0) && (iVar4 = FUN_009df7dc(), iVar4 == iVar2))
    break;
    uVar6 = uVar6 + 1;
    if (2 < uVar6) {
      return;
    }
  }
  FUN_009df764(*(undefined8 *)(param_1 + uVar6 * 8 + 0x248),uVar3);
  return;
}




void FUN_00a17bac(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  FUN_009bbfb0();
  uVar1 = FUN_009bd5c8();
  FUN_009b84e8(uVar1,param_2,param_3 & 1);
  return;
}




void FUN_00a17bdc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  FUN_009bbfb0();
  uVar1 = FUN_009bd5c8();
  FUN_009b851c(uVar1,param_2,param_3 & 1);
  return;
}




void FUN_00a17c0c(void)

{
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b8540();
  return;
}




void FUN_00a17c24(void)

{
  FUN_009bbfb0();
  FUN_009bd5c8();
  FUN_009b8558();
  return;
}




void FUN_00a17c3c(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + 0x28);
  if (((*puVar5 & 0x1f) == 0x1f) ||
     (*(short *)(param_1 + (ulong)(*puVar5 & 0x1f) * 0x38 + 0x30) != 2)) {
    lVar4 = param_1 + 0x1e8;
    lVar2 = FUN_00ceb7b0(lVar4);
    if (lVar2 != 0) {
      lVar2 = FUN_00ceb7b0(lVar4);
      if ((*(int *)(lVar2 + 0x260) == param_2) || (param_2 == -1)) {
        FUN_00965940(lVar4);
        uVar1 = DAT_03214ce8;
        lVar4 = *(long *)(param_1 + 0x340);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x2b0) = 0;
          *(undefined4 *)(lVar4 + 0x2b8) = uVar1;
        }
      }
    }
    uVar3 = FUN_00a14ed8(puVar5,0);
    if ((uVar3 & 1) != 0) {
      FUN_00a11d98(puVar5,0,0,0);
      return;
    }
  }
  return;
}




void FUN_00a17d1c(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02e8b430) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_019806a4();
  FUN_00a0d444(lVar1,param_2);
  return;
}




void FUN_00a17d78(long param_1)

{
  FUN_009c61b8(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a17d80(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  FUN_009c61b8(*(undefined8 *)(param_1 + 0x348));
  cVar2 = FUN_00d55870(param_2);
  cVar3 = FUN_00d55870(*(undefined8 *)(param_1 + 0x340));
  if (cVar2 != cVar3) {
    lVar5 = param_1 + 0x1e8;
    lVar4 = FUN_00ceb7b0(lVar5);
    if (lVar4 != 0) {
      lVar4 = FUN_00ceb7b0(lVar5);
      if (*(int *)(lVar4 + 0x260) != *(int *)(param_2 + 0x260)) {
        FUN_00965940(lVar5);
        uVar1 = DAT_03214ce8;
        lVar4 = *(long *)(param_1 + 0x340);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x2b0) = 0;
          *(undefined4 *)(lVar4 + 0x2b8) = uVar1;
        }
      }
    }
    FUN_009658fc(lVar5,param_2,1);
    lVar5 = *(long *)(param_1 + 0x340);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      *(long *)(lVar5 + 0x2b0) = param_2 + 0x28;
      *(undefined4 *)(lVar5 + 0x2b8) = uVar1;
    }
  }
  return;
}




void FUN_00a17e44(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_00a1a500(param_1 + 0x1f8,param_2,param_3,1,param_4 & 1);
  return;
}




void FUN_00a17e54(long param_1,undefined8 param_2)

{
  FUN_00a1a500(param_1 + 0x1f8,param_2,3,0,0);
  return;
}




void FUN_00a17e68(long param_1)

{
  FUN_009c61b8(*(undefined8 *)(param_1 + 0x348));
  return;
}




void FUN_00a17e70(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (((param_2 != 0) && (lVar1 = FUN_00ceb7b0(param_1 + 0x1e8), param_3 != 0)) &&
     (lVar1 == param_2)) {
    FUN_00a153f0(param_1,param_3,0,0);
    return;
  }
  return;
}




void FUN_00a17ed4(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xf4269e13) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xf4269e13];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xf4269e14)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])
                  (*(undefined8 *)(plVar4[6] + lVar1),param_2);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_00a17f74(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar2 = FUN_00d7e3d0();
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x340) + 0x260);
  plVar3 = (long *)(lVar2 + 0x10);
  plVar4 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= 0xe4cbad13) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0xe4cbad13];
    } while (plVar4 != (long *)0x0);
    if (((plVar5 != plVar3) && (*(uint *)(plVar5 + 4) < 0xe4cbad14)) && ((int)plVar5[5] != 0)) {
      lVar2 = 0;
      uVar6 = 0;
      do {
        (*(code *)((undefined8 *)(plVar5[6] + lVar2))[1])
                  (*(undefined8 *)(plVar5[6] + lVar2),uVar1,param_2,param_3);
        uVar6 = uVar6 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar6 < *(uint *)(plVar5 + 5));
    }
  }
  FUN_00a14348(param_1);
  return;
}

