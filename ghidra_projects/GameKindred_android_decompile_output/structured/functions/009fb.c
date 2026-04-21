// functions/009fb — 34 functions
#include "libGameKindred.h"




void FUN_009fb010(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c5cb0;
  param_1[3] = &PTR_FUN_027c6050;
  pcStack_40 = thunk_FUN_009fb14c;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  if ((void *)param_1[0x13] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13]);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  FUN_00956438(param_1 + 0x10,1);
  FUN_00956964(param_1 + 0xe,1);
  param_1[6] = &PTR_FUN_027bbb98;
  FUN_00956964(param_1 + 0xb,1);
  FUN_00e84dd8(param_1 + 6);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fb0ec(long param_1)

{
  FUN_009fb010(param_1 + -0x18);
  return;
}




void FUN_009fb0f4(void *param_1)

{
  FUN_009fb010();
  operator_delete(param_1);
  return;
}




void FUN_009fb118(long param_1)

{
  FUN_009fb010((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




undefined1 FUN_009fb140(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb0);
}




void thunk_FUN_009fb14c(long param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  
  lVar2 = FUN_00e85318(0);
  if (lVar2 <= *(long *)(param_1 + 0xa0)) {
    uVar3 = FUN_00e84e74(param_1 + 0x30);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00e84e5c(param_1 + 0x30);
      if ((uVar3 & 1) == 0) {
        *(long *)(param_1 + 0xa0) = lVar2 + 10;
      }
      else {
        puVar1 = (uint *)(param_1 + 0x70);
        FUN_00956964(puVar1,0);
        FUN_009fbb24(puVar1,param_1 + 0x58);
        FUN_00956438(param_1 + 0x80,0);
        uVar4 = *(uint *)(param_1 + 0x70);
        if (uVar4 != 0) {
          uVar3 = 0;
          do {
            lVar7 = *(long *)(param_1 + 0x78);
            puVar11 = (uint *)(lVar7 + uVar3 * 0x98 + 0x48);
            uVar6 = *puVar11;
            if (uVar6 != 0) {
              uVar12 = 0;
              do {
                lVar5 = *(long *)(lVar7 + uVar3 * 0x98 + 0x50);
                puVar8 = (uint *)(lVar5 + uVar12 * 0x58 + 0x48);
                if (*puVar8 != 0) {
                  lVar9 = 0;
                  uVar10 = 0;
                  do {
                    FUN_009fb674(param_1 + 0x80,*(long *)(lVar5 + uVar12 * 0x58 + 0x50) + lVar9);
                    uVar10 = uVar10 + 1;
                    lVar9 = lVar9 + 0x20;
                  } while (uVar10 < *puVar8);
                  uVar6 = *puVar11;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar6);
              uVar4 = *puVar1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
        }
        lVar7 = (long)*(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x68) < 0) {
          lVar7 = 600;
        }
        *(undefined1 *)(param_1 + 0xb0) = 1;
        *(long *)(param_1 + 0xa0) = lVar7 + lVar2;
        *(long *)(param_1 + 0xa8) = lVar2;
        if (*(int *)(param_1 + 0x90) != 0) {
          lVar2 = *(long *)(param_1 + 0x98);
          do {
            if (*(code **)(lVar2 + 8) == (code *)0x0) {
              (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
            }
            else {
              (**(code **)(lVar2 + 8))();
            }
            lVar2 = lVar2 + 0x20;
          } while (lVar2 != *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x90) * 0x20);
        }
      }
    }
    return;
  }
  FUN_009fa744(param_1);
  return;
}




void FUN_009fb14c(long param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  
  lVar2 = FUN_00e85318(0);
  if (lVar2 <= *(long *)(param_1 + 0xa0)) {
    uVar3 = FUN_00e84e74(param_1 + 0x30);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00e84e5c(param_1 + 0x30);
      if ((uVar3 & 1) == 0) {
        *(long *)(param_1 + 0xa0) = lVar2 + 10;
      }
      else {
        puVar1 = (uint *)(param_1 + 0x70);
        FUN_00956964(puVar1,0);
        FUN_009fbb24(puVar1,param_1 + 0x58);
        FUN_00956438(param_1 + 0x80,0);
        uVar4 = *(uint *)(param_1 + 0x70);
        if (uVar4 != 0) {
          uVar3 = 0;
          do {
            lVar7 = *(long *)(param_1 + 0x78);
            puVar11 = (uint *)(lVar7 + uVar3 * 0x98 + 0x48);
            uVar6 = *puVar11;
            if (uVar6 != 0) {
              uVar12 = 0;
              do {
                lVar5 = *(long *)(lVar7 + uVar3 * 0x98 + 0x50);
                puVar8 = (uint *)(lVar5 + uVar12 * 0x58 + 0x48);
                if (*puVar8 != 0) {
                  lVar9 = 0;
                  uVar10 = 0;
                  do {
                    FUN_009fb674(param_1 + 0x80,*(long *)(lVar5 + uVar12 * 0x58 + 0x50) + lVar9);
                    uVar10 = uVar10 + 1;
                    lVar9 = lVar9 + 0x20;
                  } while (uVar10 < *puVar8);
                  uVar6 = *puVar11;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar6);
              uVar4 = *puVar1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
        }
        lVar7 = (long)*(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x68) < 0) {
          lVar7 = 600;
        }
        *(undefined1 *)(param_1 + 0xb0) = 1;
        *(long *)(param_1 + 0xa0) = lVar7 + lVar2;
        *(long *)(param_1 + 0xa8) = lVar2;
        if (*(int *)(param_1 + 0x90) != 0) {
          lVar2 = *(long *)(param_1 + 0x98);
          do {
            if (*(code **)(lVar2 + 8) == (code *)0x0) {
              (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
            }
            else {
              (**(code **)(lVar2 + 8))();
            }
            lVar2 = lVar2 + 0x20;
          } while (lVar2 != *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x90) * 0x20);
        }
      }
    }
    return;
  }
  FUN_009fa744(param_1);
  return;
}




void FUN_009fb330(long param_1)

{
  if (*(char *)(param_1 + 0xb0) != '\0') {
    return;
  }
  FUN_009fa744();
  return;
}




void FUN_009fb340(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}




void FUN_009fb34c(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulong)*(uint *)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x70) != 0) {
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(param_2 + 0x78) + uVar5 * 0x98 + 0x48);
      if (uVar1 != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(*(long *)(param_2 + 0x78) + uVar5 * 0x98 + 0x50) + 4);
        do {
          if (*piVar4 == param_3) {
            FUN_009fb3f0(param_1);
            uVar2 = (ulong)*(uint *)(param_2 + 0x70);
            break;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 0x16;
        } while (uVar3 < uVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}




void FUN_009fb3f0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00955df0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x98;
  FUN_008fcdb8(lVar4 + -0x98,param_2);
  FUN_008fcdb8(lVar4 + -0x80,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x68,param_2 + 0x30);
  FUN_00955f70(lVar4 + -0x50,param_2 + 0x48);
  FUN_00956024(lVar4 + -0x40,param_2 + 0x58);
  FUN_009560a4(lVar4 + -0x30,param_2 + 0x68);
  FUN_00956124(lVar4 + -0x20,param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




ulong FUN_009fb4d4(long param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  char *__s1;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x80);
  if (uVar3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x88);
      bVar1 = *(byte *)(lVar4 + lVar5);
      if ((bVar1 & 1) == 0) {
        if (bVar1 >> 1 != 0) {
LAB_009fb510:
          if ((bVar1 & 1) == 0) {
            __s1 = (char *)(lVar4 + lVar5 + 1);
          }
          else {
            __s1 = *(char **)(lVar4 + lVar5 + 0x10);
          }
          iVar2 = strcmp(__s1,param_2);
          if (iVar2 == 0) {
            return (ulong)*(byte *)(*(long *)(param_1 + 0x88) + lVar5 + 0x18);
          }
          uVar3 = *(uint *)(param_1 + 0x80);
        }
      }
      else if ((int)*(undefined8 *)(lVar4 + lVar5 + 8) != 0) goto LAB_009fb510;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar6 < uVar3);
  }
  return 0xffffffff;
}




byte * FUN_009fb57c(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  size_t sVar7;
  int iVar8;
  byte *__s2;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  
  uVar3 = *(uint *)(param_1 + 0x70);
  if (uVar3 != 0) {
    bVar4 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_1 + 0x78);
    uVar10 = 0;
    if ((bVar4 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar4 >> 1);
    }
    do {
      pbVar9 = (byte *)(lVar11 + uVar10 * 0x98);
      bVar5 = *pbVar9;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(pbVar9 + 8);
      }
      if (__n == uVar2) {
        __s2 = *(byte **)(lVar11 + uVar10 * 0x98 + 0x10);
        if ((bVar5 & 1) == 0) {
          __s2 = pbVar9 + 1;
        }
        sVar1 = -(ulong)(bVar4 >> 1);
        pbVar6 = param_2;
        sVar7 = __n;
        if ((bVar4 & 1) == 0) {
          while( true ) {
            if (sVar7 == 0) {
              return pbVar9;
            }
            if (pbVar6[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar6 = pbVar6 + 1;
            sVar7 = sVar1;
          }
        }
        else {
          if (__n == 0) {
            return pbVar9;
          }
          iVar8 = memcmp(__s1,__s2,__n);
          if (iVar8 == 0) {
            return pbVar9;
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  return (byte *)0x0;
}




void FUN_009fb674(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00956360(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(param_2 + 0x18);
  return;
}




void FUN_009fb708(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_009fa744();
  return;
}




void FUN_009fb714(long param_1)

{
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_009fa744(param_1 + -0x18);
  return;
}




void FUN_009fb728(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_009fa744();
  return;
}




void FUN_009fb734(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar1 = *(long *)(param_1 + 0x98);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x90) * 0x20);
  }
  return;
}




long FUN_009fb78c(long param_1)

{
  return param_1 + 0x90;
}




void FUN_009fb794(undefined8 *param_1,int *param_2)

{
  FUN_00b56364();
  *param_1 = &PTR_FUN_027c6080;
  param_1[0x6d] = &PTR_FUN_027c6268;
  param_1[0x17e] = &PTR_FUN_027c6290;
  param_1[0x182] = 0;
  param_1[0x181] = 0;
  if (*param_2 == 3) {
    FUN_00965324(param_1 + 0x181,param_2 + 0xe);
    return;
  }
  return;
}




undefined4 FUN_009fb800(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *__s2;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = *(uint *)(param_1 + 0xc08);
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      bVar2 = *(byte *)(param_2 + 0x378);
      pbVar7 = (byte *)(*(long *)(param_1 + 0xc10) + uVar9 * 0x18);
      bVar3 = *pbVar7;
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 0x380);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar7 + 8);
      }
      if (__n == sVar1) {
        __s2 = *(byte **)(*(long *)(param_1 + 0xc10) + uVar9 * 0x18 + 0x10);
        pbVar6 = (byte *)(param_2 + 0x379);
        if ((bVar2 & 1) != 0) {
          pbVar6 = *(byte **)(param_2 + 0x388);
        }
        if ((bVar3 & 1) == 0) {
          __s2 = pbVar7 + 1;
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return 1;
          }
          lVar5 = -(ulong)(bVar2 >> 1);
          pbVar6 = (byte *)(param_2 + 0x379);
          while (*pbVar6 == *__s2) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
            if (lVar5 == 0) {
              return 1;
            }
          }
        }
        else {
          if (__n == 0) {
            return 1;
          }
          iVar4 = memcmp(pbVar6,__s2,__n);
          if (iVar4 == 0) {
            return 1;
          }
        }
      }
      if (sVar1 == 1) {
        iVar4 = FUN_0090d610(pbVar7,0,0xffffffffffffffff,&DAT_01e26823,1);
        if (iVar4 == 0) {
          return 1;
        }
        uVar8 = *(uint *)(param_1 + 0xc08);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  return 0;
}




void FUN_009fb940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c6080;
  param_1[0x6d] = &PTR_FUN_027c6268;
  param_1[0x17e] = &PTR_FUN_027c6290;
  FUN_00951534(param_1 + 0x181,1);
  FUN_00b563ac(param_1);
  return;
}




void FUN_009fb98c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c6080;
  param_1[0x6d] = &PTR_FUN_027c6268;
  param_1[0x17e] = &PTR_FUN_027c6290;
  FUN_00951534(param_1 + 0x181,1);
  FUN_00b563ac(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009fb9e0(undefined8 *param_1)

{
  param_1[-0x6d] = &PTR_FUN_027c6080;
  *param_1 = &PTR_FUN_027c6268;
  param_1[0x111] = &PTR_FUN_027c6290;
  FUN_00951534(param_1 + 0x114,1);
  FUN_00b563ac(param_1 + -0x6d);
  return;
}




void FUN_009fba2c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x6d;
  *puVar1 = &PTR_FUN_027c6080;
  *param_1 = &PTR_FUN_027c6268;
  param_1[0x111] = &PTR_FUN_027c6290;
  FUN_00951534(param_1 + 0x114,1);
  FUN_00b563ac(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_009fba80(undefined8 *param_1)

{
  param_1[-0x17e] = &PTR_FUN_027c6080;
  param_1[-0x111] = &PTR_FUN_027c6268;
  *param_1 = &PTR_FUN_027c6290;
  FUN_00951534(param_1 + 3,1);
  FUN_00b563ac(param_1 + -0x17e);
  return;
}




void FUN_009fbacc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17e;
  *puVar1 = &PTR_FUN_027c6080;
  param_1[-0x111] = &PTR_FUN_027c6268;
  *param_1 = &PTR_FUN_027c6290;
  FUN_00951534(param_1 + 3,1);
  FUN_00b563ac(puVar1);
  operator_delete(puVar1);
  return;
}




void thunk_FUN_009fb14c(long param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  
  lVar2 = FUN_00e85318(0);
  if (lVar2 <= *(long *)(param_1 + 0xa0)) {
    uVar3 = FUN_00e84e74(param_1 + 0x30);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00e84e5c(param_1 + 0x30);
      if ((uVar3 & 1) == 0) {
        *(long *)(param_1 + 0xa0) = lVar2 + 10;
      }
      else {
        puVar1 = (uint *)(param_1 + 0x70);
        FUN_00956964(puVar1,0);
        FUN_009fbb24(puVar1,param_1 + 0x58);
        FUN_00956438(param_1 + 0x80,0);
        uVar4 = *(uint *)(param_1 + 0x70);
        if (uVar4 != 0) {
          uVar3 = 0;
          do {
            lVar7 = *(long *)(param_1 + 0x78);
            puVar11 = (uint *)(lVar7 + uVar3 * 0x98 + 0x48);
            uVar6 = *puVar11;
            if (uVar6 != 0) {
              uVar12 = 0;
              do {
                lVar5 = *(long *)(lVar7 + uVar3 * 0x98 + 0x50);
                puVar8 = (uint *)(lVar5 + uVar12 * 0x58 + 0x48);
                if (*puVar8 != 0) {
                  lVar9 = 0;
                  uVar10 = 0;
                  do {
                    FUN_009fb674(param_1 + 0x80,*(long *)(lVar5 + uVar12 * 0x58 + 0x50) + lVar9);
                    uVar10 = uVar10 + 1;
                    lVar9 = lVar9 + 0x20;
                  } while (uVar10 < *puVar8);
                  uVar6 = *puVar11;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar6);
              uVar4 = *puVar1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar4);
        }
        lVar7 = (long)*(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x68) < 0) {
          lVar7 = 600;
        }
        *(undefined1 *)(param_1 + 0xb0) = 1;
        *(long *)(param_1 + 0xa0) = lVar7 + lVar2;
        *(long *)(param_1 + 0xa8) = lVar2;
        if (*(int *)(param_1 + 0x90) != 0) {
          lVar2 = *(long *)(param_1 + 0x98);
          do {
            if (*(code **)(lVar2 + 8) == (code *)0x0) {
              (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
            }
            else {
              (**(code **)(lVar2 + 8))();
            }
            lVar2 = lVar2 + 0x20;
          } while (lVar2 != *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x90) * 0x20);
        }
      }
    }
    return;
  }
  FUN_009fa744(param_1);
  return;
}




void FUN_009fbb24(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_00956964(param_1,1);
    FUN_00955df0(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x98;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
        FUN_00955f70(lVar4 + 0x48,lVar3 + 0x48);
        FUN_00956024(lVar4 + 0x58,lVar3 + 0x58);
        FUN_009560a4(lVar4 + 0x68,lVar3 + 0x68);
        FUN_00956124(lVar4 + 0x78,lVar3 + 0x78);
        puVar1 = (undefined8 *)(lVar3 + 0x90);
        uVar6 = *(undefined8 *)(lVar3 + 0x88);
        lVar3 = lVar3 + 0x98;
        *(undefined8 *)(lVar4 + 0x90) = *puVar1;
        *(undefined8 *)(lVar4 + 0x88) = uVar6;
        lVar4 = lVar4 + 0x98;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_009fbc00(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_130 [2];
  undefined1 auStack_128 [192];
  undefined4 local_68;
  undefined1 local_64;
  undefined2 local_62;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e70510();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar2 = FUN_00ced6f8();
  local_130[0] = 0xffffffff;
  memset(auStack_128,0,0xc0);
  local_68 = 0xffffffff;
  local_64 = 0;
  local_62 = 0;
  local_60 = 0;
  local_5c = 0x3f000000;
  local_58 = 0;
  uStack_50 = 0;
  FUN_009fbcd8((undefined8 *)(param_1 + 0x10),uVar2,local_130);
  FUN_009fca7c(local_130);
  FUN_009fbe94(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fbcd8(uint *param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 2);
    if (lVar3 != 0) {
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0xe8;
        do {
          FUN_009fca7c(lVar3);
          lVar4 = lVar4 + -0xe8;
          lVar3 = lVar3 + 0xe8;
        } while (lVar4 != 0);
      }
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_009fcc20(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 * 0xe8 + 0x68;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar1 = *(long *)(param_1 + 2) + lVar3;
        *(undefined4 *)(lVar1 + -0x68) = *param_3;
        FUN_008fcdb8(lVar1 + -0x60,param_3 + 2);
        FUN_008fcdb8(lVar1 + -0x48,param_3 + 8);
        FUN_008fcdb8(lVar1 + -0x30,param_3 + 0xe);
        FUN_008fcdb8(lVar1 + -0x18,param_3 + 0x14);
        FUN_008fcdb8(lVar1,param_3 + 0x1a);
        FUN_008fcdb8(lVar1 + 0x18,param_3 + 0x20);
        FUN_008fcdb8(lVar1 + 0x30,param_3 + 0x26);
        FUN_008fcdb8(lVar1 + 0x48,param_3 + 0x2c);
        uVar5 = *(undefined8 *)(param_3 + 0x36);
        lVar4 = lVar4 + -1;
        lVar3 = lVar3 + 0xe8;
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_3 + 0x38);
        *(undefined8 *)(lVar1 + 0x70) = uVar5;
        uVar5 = *(undefined8 *)(param_3 + 0x32);
        *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_3 + 0x34);
        *(undefined8 *)(lVar1 + 0x60) = uVar5;
      } while (lVar4 != 0);
      uVar2 = *param_1;
    }
    if (param_2 < uVar2) {
      lVar4 = (ulong)uVar2 * 0xe8 + (ulong)param_2 * -0xe8;
      lVar3 = *(long *)(param_1 + 2) + (ulong)param_2 * 0xe8;
      do {
        FUN_009fca7c(lVar3);
        lVar4 = lVar4 + -0xe8;
        lVar3 = lVar3 + 0xe8;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_009fbe94(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = FUN_00cedca4(uVar2 & 0xffffffff);
      FUN_009fbf2c(*(long *)(param_1 + 0x18) + lVar3,uVar1);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0xe8;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  return;
}




void FUN_009fbef4(undefined8 *param_1)

{
  FUN_009fcbb0(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_009fbf2c(undefined4 *param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  byte local_110 [16];
  void *local_100;
  ulong local_f8;
  void *local_f0;
  void *local_e8;
  undefined4 local_e0 [2];
  byte local_d8 [16];
  void *local_c8;
  undefined1 auStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = param_2;
  cVar2 = FUN_00cecb68(param_2);
  *(char *)(param_1 + 0x33) = cVar2;
  FUN_00cedce4();
  cVar3 = FUN_00cecb68();
  *(bool *)((long)param_1 + 0xcf) = cVar2 != cVar3;
  bVar4 = FUN_00ced528(param_2);
  *(byte *)((long)param_1 + 0xcd) = bVar4 & 1;
  bVar4 = FUN_00cedff4(param_2);
  *(byte *)(param_1 + 0x34) = bVar4 & 1;
  cVar2 = FUN_00cecf84(param_2);
  param_1[0x37] = (int)cVar2;
  param_1[0x38] = 0;
  FUN_00ceace8();
  uVar8 = FUN_00ceaf9c();
  if ((uVar8 & 1) != 0) {
    cVar2 = FUN_00cee064(param_2);
    param_1[0x37] = (int)cVar2;
  }
  lVar9 = FUN_00ceace8();
  if (((*(char *)(lVar9 + 0x3b) != '\0') && (iVar6 = FUN_00ceacf4(), iVar6 != 0x3e)) &&
     (iVar6 = FUN_00ceacf4(), iVar6 != 0x3f)) {
    sVar5 = FUN_00cecf20(param_2);
    param_1[0x37] = 0xffffffff;
    param_1[0x38] = (int)sVar5;
  }
  uVar10 = FUN_00cec840(param_2);
  FUN_00e70a24(uVar10,param_1 + 0x1a);
  uVar10 = FUN_00cec9a0(param_2);
  FUN_00e70a24(uVar10,param_1 + 8);
  uVar10 = FUN_00cec930(param_2);
  FUN_00e70a24(uVar10,param_1 + 0xe);
  local_e0[0] = FUN_00cecc50(param_2);
  lVar9 = FUN_00cc767c(local_e0);
  if (lVar9 != 0) {
    FUN_008fff20(auStack_98,"build://Splash_%s.png",*(undefined8 *)(lVar9 + 0x28));
    FUN_008fff20(local_d8,"loading_vert_%s_5v5",*(undefined8 *)(lVar9 + 0x28));
    if (((*(char *)(lVar9 + 0x34) == '\0') && (*(char *)(lVar9 + 0x35) == '\0')) &&
       (*(int *)(lVar9 + 0x20) < 1)) {
      lVar11 = FUN_00ce9b48(*(undefined8 *)(lVar9 + 0x10));
      if (lVar11 != 0) {
        uVar10 = FUN_00e6ce7c(*(undefined8 *)(lVar11 + 0x18),0);
        FUN_00e70a24(uVar10,param_1 + 0x26);
      }
    }
    else {
      FUN_00cc78d0(&local_f8,lVar9,1);
      FUN_00e70a24(&local_f8,param_1 + 0x26);
      if (local_f0 != (void *)0x0) {
        operator_delete__(local_f0);
        local_f8 = 0;
        local_f0 = (void *)0x0;
      }
    }
    FUN_008fa54c(&local_f8,auStack_98);
    FUN_008fce60(param_1 + 0x20,&local_f8);
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    FUN_008fa54c(&local_f8,local_d8);
    FUN_008fce60(param_1 + 0x2c,&local_f8);
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    *(undefined1 *)((long)param_1 + 0xce) = *(undefined1 *)(lVar9 + 0x34);
    param_1[0x35] = *(undefined4 *)(lVar9 + 0x30);
    FUN_00cb0394(lVar9,param_1 + 0x32);
    uVar10 = FUN_00cece44(param_2);
    FUN_008fce60(param_1 + 2,uVar10);
    uVar10 = FUN_009e7240();
    FUN_008fcdb8(local_110,param_1 + 2);
    uVar7 = FUN_009e6cac(uVar10,local_110,*(undefined8 *)(lVar9 + 0x10));
    param_1[0x39] = uVar7;
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
  }
  uVar10 = FUN_00ceca10(param_2);
  FUN_00e70570(&local_f8,uVar10);
  FUN_00e70a24(&local_f8,param_1 + 0x14);
  bVar4 = *(byte *)(param_1 + 0x14);
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) goto LAB_009fc208;
  }
  else if ((int)*(undefined8 *)(param_1 + 0x16) == 0) goto LAB_009fc208;
  if ((bVar4 & 1) == 0) {
    lVar9 = (long)param_1 + 0x51;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x18);
  }
  FUN_008fff20(auStack_98,"logo_%s",lVar9);
  FUN_008fa54c(local_d8,auStack_98);
  FUN_008fce60(param_1 + 0x14,local_d8);
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
LAB_009fc208:
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

