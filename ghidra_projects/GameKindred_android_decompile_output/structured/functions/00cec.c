// functions/00cec — 37 functions
#include "libGameKindred.h"




void FUN_00cec04c(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0x30;
    do {
      if (*(int *)(lVar1 + -0x28) == param_1) {
        if (lVar1 == 0x30) {
          return;
        }
        FUN_00910394(lVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec0b4(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0x58;
    do {
      if (*(int *)(lVar1 + -0x50) == param_1) {
        if (lVar1 == 0x58) {
          return;
        }
        FUN_008fce60(lVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec128(int param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = *puVar1 & 0xffc0000000000000 |
                  *puVar1 & 0x1fffffffffffff | (ulong)(param_2 & 1) << 0x35;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec198(int param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (undefined2 *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)(puVar1 + -0x5a) == param_1) {
        if (puVar1 == (undefined2 *)0xbc) {
          return;
        }
        *puVar1 = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 100;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec1fc(int param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0xbc;
    do {
      if (*(int *)(lVar1 + -0xb4) == param_1) {
        if (lVar1 == 0xbc) {
          return;
        }
        *(undefined1 *)(lVar1 + 2) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec260(int param_1,uint param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = (ulong)(param_2 & 1) << 0x36 | (ulong)(param_3 & 1) << 0x3a |
                  *puVar1 & 0xfbbfffffffffffff;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec2e4(int param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return;
        }
        *(undefined4 *)(lVar1 + 0x8c) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec340(int param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return;
        }
        *(undefined4 *)(lVar1 + 0x90) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec39c(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0x70;
    do {
      if (*(int *)(lVar1 + -0x68) == param_1) {
        if (lVar1 == 0x70) {
          return;
        }
        FUN_008fce60(lVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec410(int param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = *puVar1 & 0xff00000000000000 |
                  *puVar1 & 0x7fffffffffffff | (ulong)(param_2 & 1) << 0x37;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




byte FUN_00cec480(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc2) >> 7;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




void FUN_00cec4f0(int param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = *puVar1 & 0xfe00000000000000 |
                  *puVar1 & 0xffffffffffffff | (ulong)(param_2 & 1) << 0x38;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec560(int param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = *puVar1 & 0xffe0000000000000 |
                  *puVar1 & 0xfffffffffffff | (ulong)(param_2 & 1) << 0x34;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec5d0(int param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = *puVar1 & 0xe000000000000000 |
                  *puVar1 & 0xfffffffffffffff | (ulong)(param_2 & 1) << 0x3c;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec640(int param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0x9c;
    do {
      if (*(int *)(lVar1 + -0x94) == param_1) {
        if (lVar1 == 0x9c) {
          return;
        }
        *(undefined4 *)(lVar1 + (ulong)param_2 * 4) = *param_3;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec6a8(int param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return;
        }
        *(undefined4 *)(lVar1 + 0x94) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec704(int param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return;
        }
        *(undefined4 *)(lVar1 + 0x98) = param_2;
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cec760(int param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = *puVar1 & 0xc000000000000000 |
                  *puVar1 & 0x1fffffffffffffff | (ulong)(param_2 & 1) << 0x3d;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




byte FUN_00cec7d0(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc3) & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




undefined8 * FUN_00cec840(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar4 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) {
        if (lVar2 != 0) {
          uVar4 = FUN_00ceab48(&DAT_03210450);
          if ((uVar4 & 1) == 0) {
            if (((*(ulong *)(lVar2 + 0xbc) & 0x440000000000000) == 0x40000000000000) &&
               (uVar4 = FUN_009bbf9c(), (uVar4 & 1) != 0)) {
              FUN_00ceace8();
              uVar4 = FUN_00ceb04c();
              if ((uVar4 & 1) == 0) goto LAB_00cec8f4;
            }
            uVar4 = FUN_009bbf9c();
            if ((uVar4 & 1) != 0) {
              FUN_00ceace8();
              uVar4 = FUN_00ceae88();
              if ((uVar4 & 1) != 0) {
LAB_00cec8f4:
                uVar1 = FUN_00d6eb50();
                lVar2 = FUN_00d6eb88(uVar1,*(undefined4 *)(lVar2 + 0x8c));
                puVar3 = (undefined8 *)FUN_00e6ce7c(*(undefined8 *)(lVar2 + 0x28),0);
                return puVar3;
              }
            }
          }
          return (undefined8 *)(lVar2 + 0x10);
        }
        break;
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar4 < 0x10);
  }
  return &DAT_03210450;
}




undefined8 * FUN_00cec930(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cec988;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cec988:
  puVar1 = &DAT_03210450;
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x20);
  }
  return puVar1;
}




undefined8 * FUN_00cec9a0(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cec9f8;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cec9f8:
  puVar1 = &DAT_03210450;
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 0x30);
  }
  return puVar1;
}




undefined1 * FUN_00ceca10(int param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00ceca68;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00ceca68:
  puVar1 = &DAT_0320ffa8;
  if (lVar2 != 0) {
    puVar1 = (undefined1 *)(lVar2 + 0x40);
  }
  return puVar1;
}




void FUN_00ceca80(int param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar1 + -0xb4) == param_1) {
        if (puVar1 == (ulong *)0xbc) {
          return;
        }
        *puVar1 = *puVar1 & 0xfff0000000000000 |
                  *puVar1 & 0xffffffffffff | (ulong)(param_2 & 0xf) << 0x30;
        FUN_00cebc08();
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




void FUN_00cecaf4(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350 + 0x40;
    do {
      if (*(int *)(lVar1 + -0x38) == param_1) {
        if (lVar1 == 0x40) {
          return;
        }
        FUN_008fce60(lVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return;
}




byte FUN_00cecb68(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 == -1) {
    return 1;
  }
  if (DAT_0314f358 == '\x01') {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return 0xff;
        }
        return *(byte *)(lVar1 + 0xc2) & 0xf;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0xff;
}




undefined4 FUN_00cecbe0(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_01bc8f98;
  if (param_1 != -1) {
    lVar2 = 0;
    if (DAT_0314f358 == '\x01') {
      uVar3 = 0;
      lVar2 = DAT_0314f350;
      do {
        if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cecc3c;
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 200;
      } while (uVar3 < 0x10);
      lVar2 = 0;
    }
LAB_00cecc3c:
    if (lVar2 != 0) {
      puVar1 = (undefined4 *)(lVar2 + 0x8c);
    }
  }
  return *puVar1;
}




void FUN_00cecc50(int param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) {
        if (lVar2 != 0) {
          local_30[0] = *(undefined4 *)(lVar2 + 0x90);
          goto LAB_00ceccd4;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
  }
  FUN_00d9ff2c(local_30);
LAB_00ceccd4:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30[0]);
  }
  return;
}




undefined1 * FUN_00ceccfc(int param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_0320ffa8;
  if (param_1 != -1) {
    lVar2 = 0;
    if (DAT_0314f358 == '\x01') {
      uVar3 = 0;
      lVar2 = DAT_0314f350;
      do {
        if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cecd5c;
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 200;
      } while (uVar3 < 0x10);
      lVar2 = 0;
    }
LAB_00cecd5c:
    if (lVar2 != 0) {
      puVar1 = (undefined1 *)(lVar2 + 0x70);
    }
  }
  return puVar1;
}




bool FUN_00cecd6c(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00cecdb0();
  return *piVar1 != -0x7ee3623b && *piVar1 != 0;
}




undefined4 * FUN_00cecdb0(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cece08;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cece08:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0xb4);
  }
  return puVar1;
}




undefined4 FUN_00cece20(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00cecb68();
  uVar2 = 1;
  if (cVar1 == '\x01') {
    uVar2 = 2;
  }
  return uVar2;
}




undefined1 * FUN_00cece44(int param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cece9c;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cece9c:
  puVar1 = &DAT_0320ffa8;
  if (lVar2 != 0) {
    puVar1 = (undefined1 *)(lVar2 + 0x58);
  }
  return puVar1;
}




undefined4 FUN_00ceceb4(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(undefined4 *)(lVar1 + 0x88);
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




undefined2 FUN_00cecf20(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return 0xffff;
        }
        return *(undefined2 *)(lVar1 + 0xbc);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0xffff;
}




undefined1 FUN_00cecf84(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 == 0) {
          return 0xff;
        }
        return *(undefined1 *)(lVar1 + 0xbe);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0xff;
}




byte FUN_00cecfe8(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc2) >> 4 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}

