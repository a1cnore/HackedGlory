// functions/1001e — 464 functions
#include "GameKindred.h"




void thunk_FUN_1001e2180(void)

{
  FUN_1001e2180();
  return;
}




void thunk_FUN_1001e3fd8(void)

{
  FUN_1001e3fd8();
  return;
}




void FUN_1001e0318(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_10015c5b8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10015c6ac(lVar4 + -0x30,param_2);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x10);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x28);
  return;
}




byte FUN_1001e03b4(long param_1,undefined8 param_2)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  
  uVar8 = FUN_100131560();
  if ((((uVar8 & 1) == 0) && (lVar9 = FUN_1001dfd18(param_1,param_2), lVar9 != 0)) &&
     (iVar7 = FUN_1001e1a40(), iVar7 != 0)) {
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (uVar3 == 0) {
      bVar6 = false;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x460);
      if (uVar4 != 0) {
        uVar8 = 0;
        lVar9 = *(long *)(lVar9 + 0x18);
        lVar15 = *(long *)(param_1 + 0x468);
        bVar6 = true;
        do {
          uVar18 = 0;
          pbVar14 = (byte *)0x0;
          pbVar17 = *(byte **)(lVar9 + uVar8 * 8);
          bVar10 = pbVar17[0x17];
          sVar1 = *(size_t *)(pbVar17 + 8);
          if (-1 < (char)bVar10) {
            sVar1 = (ulong)bVar10;
          }
          do {
            pbVar16 = *(byte **)(lVar15 + uVar18 * 8);
            bVar5 = pbVar16[0x17];
            uVar11 = (ulong)bVar5;
            sVar2 = *(size_t *)(pbVar16 + 8);
            if (-1 < (char)bVar5) {
              sVar2 = uVar11;
            }
            if (sVar2 == sVar1) {
              pbVar12 = *(byte **)pbVar16;
              if (-1 < (char)bVar5) {
                pbVar12 = pbVar16;
              }
              pbVar13 = *(byte **)pbVar17;
              if (-1 < (char)bVar10) {
                pbVar13 = pbVar17;
              }
              if ((char)bVar5 < '\0') {
                if ((sVar1 == 0) || (iVar7 = _memcmp(pbVar12,pbVar13,sVar1), iVar7 == 0))
                goto LAB_1001e04d4;
              }
              else if (sVar1 == 0) {
LAB_1001e04d4:
                pbVar14 = pbVar16;
              }
              else {
                pbVar12 = pbVar16;
                if ((uint)*pbVar13 == ((uint)*(byte **)pbVar16 & 0xff)) {
                  do {
                    uVar11 = uVar11 - 1;
                    pbVar13 = pbVar13 + 1;
                    pbVar12 = pbVar12 + 1;
                    if (uVar11 == 0) goto LAB_1001e04d4;
                  } while (*pbVar12 == *pbVar13);
                }
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar4);
          if ((pbVar14 == (byte *)0x0) || (*(int *)(pbVar14 + 0x60) < *(int *)(pbVar17 + 0x18)))
          goto LAB_1001e0548;
          uVar8 = uVar8 + 1;
          bVar6 = uVar8 < uVar3;
          if ((uVar8 == uVar3) || (uVar4 == 0)) goto LAB_1001e0548;
        } while( true );
      }
      bVar6 = true;
    }
LAB_1001e0548:
    bVar10 = bVar6 ^ 1;
  }
  else {
    bVar10 = 0;
  }
  return bVar10;
}




void FUN_1001e0f38(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x460);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x468);
      puVar3 = *(undefined8 **)(lVar2 + uVar4 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        if (*(char *)((long)puVar3 + 0x5f) < '\0') {
          operator_delete((void *)puVar3[9]);
        }
        if (*(char *)((long)puVar3 + 0x47) < '\0') {
          operator_delete((void *)puVar3[6]);
        }
        if (*(char *)((long)puVar3 + 0x2f) < '\0') {
          operator_delete((void *)puVar3[3]);
        }
        if (*(char *)((long)puVar3 + 0x17) < '\0') {
          operator_delete((void *)*puVar3);
        }
        operator_delete(puVar3);
        lVar2 = *(long *)(param_1 + 0x468);
        uVar1 = *(uint *)(param_1 + 0x460);
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (*(long *)(param_1 + 0x468) != 0) {
    *(undefined4 *)(param_1 + 0x460) = 0;
  }
  return;
}




void FUN_1001e0fe0(uint *param_1,undefined8 *param_2)

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
    FUN_1001e14f0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




long FUN_1001e1060(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_1001e156c(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined8 *)((long)pvVar2 + 0x38) = 0;
    FUN_1001e1610(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_1001e10dc(uint *param_1,undefined8 *param_2)

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
    FUN_1001e1764(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001e115c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *local_78 [2];
  char local_61;
  
  *(undefined8 *)(param_1 + 0x470) = 0;
  iVar2 = FUN_100131560();
  if (iVar2 != 0) {
    FUN_1001dfe10(param_1,&DAT_101d91198);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x40);
      lVar1 = lVar7 + lVar5;
      lVar3 = FUN_1001dfd18(param_1,lVar1 + 0x10);
      if (lVar3 != 0) {
        if (*(char *)(lVar1 + 0x28) == '\0') {
          if (*(char *)(lVar7 + lVar5 + 0x29) == '\0') {
            iVar2 = FUN_1001e03b4(param_1,lVar3 + 0x20);
            if (iVar2 == 0) {
              *(undefined4 *)(lVar3 + 0x98) = 4;
            }
            else {
              *(undefined4 *)(lVar3 + 0x98) = 3;
            }
          }
          else {
            *(undefined4 *)(lVar3 + 0x98) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar3 + 0x98) = 0;
          *(long *)(param_1 + 0x470) = lVar3;
          plVar4 = (long *)(lVar3 + 0x20);
          if (*(char *)(lVar3 + 0x37) < '\0') {
            plVar4 = (long *)*plVar4;
          }
          FUN_10001549c(local_78,plVar4);
          FUN_1001dfe10(param_1,local_78);
          if (local_61 < '\0') {
            operator_delete(local_78[0]);
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x30;
    } while (uVar6 < *(uint *)(param_2 + 0x38));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    do {
      if (*(code **)(lVar5 + 8) == (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
      }
      else {
        (**(code **)(lVar5 + 8))();
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x28) * 0x20);
  }
  return;
}




void FUN_1001e12c0(void)

{
  uint uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10015d3ec();
  FUN_100166ab8();
  return;
}




void FUN_1001e12e4(uint *param_1,undefined8 *param_2)

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
    FUN_1001e17e0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001e1364(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1001e1a40(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    FUN_10001549c(local_38,"");
    FUN_1001663b8(uVar2,param_2 + 0x80,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_1001e13d0(void)

{
  operator_new(0x478);
  DAT_101d23648 = FUN_1001df760();
  return;
}




void FUN_1001e13f4(void)

{
  if (DAT_101d23648 != (long *)0x0) {
    (**(code **)(*DAT_101d23648 + 8))();
  }
  DAT_101d23648 = (long *)0x0;
  return;
}




undefined8 FUN_1001e1428(void)

{
  return DAT_101d23648;
}




long FUN_1001e1434(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  
  lVar1 = FUN_10003330c();
  FUN_10003330c(lVar1 + 0x18,param_3);
  FUN_10003330c(param_1 + 0x30,param_4);
  FUN_10003330c(param_1 + 0x48,param_5);
  *(undefined4 *)(param_1 + 0x60) = param_6;
  return param_1;
}




void FUN_1001e14a0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1001e14a0(param_1,*param_2);
    FUN_1001e14a0(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1001e14f0(uint *param_1,uint param_2)

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




long * FUN_1001e156c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_1001e1664(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1001e1664(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_1001e1610(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




uint FUN_1001e1664(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_1001e16d4;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_1001e16d4:
  return uVar8 >> 0x1f;
}




long * FUN_1001e16e4(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_1001e1664(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1001e1664(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




void FUN_1001e1764(uint *param_1,uint param_2)

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




void FUN_1001e17e0(uint *param_1,uint param_2)

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




void FUN_1001e185c(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x13) = 4;
  return;
}




long FUN_1001e1884(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ulong uVar4;
  
  puVar3 = (uint *)(param_1 + 0x10);
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          operator_delete((void *)*puVar2);
        }
        operator_delete(puVar2);
        uVar1 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_10001629c(param_1,1);
  return param_1;
}




long thunk_FUN_1001e1884(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  ulong uVar4;
  
  puVar3 = (uint *)(param_1 + 0x10);
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          operator_delete((void *)*puVar2);
        }
        operator_delete(puVar2);
        uVar1 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_10001629c(param_1,1);
  return param_1;
}




void FUN_1001e1960(long param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                  undefined8 param_6)

{
  std::string::operator=((string *)(param_1 + 0x20),param_2);
  std::string::operator=((string *)(param_1 + 0x38),param_3);
  std::string::operator=((string *)(param_1 + 0x50),param_4);
  FUN_100169740(param_1,param_6);
  std::string::operator=((string *)(param_1 + 0x68),param_5);
  return;
}




void FUN_1001e19d0(long param_1,int param_2,undefined8 param_3,string *param_4)

{
  if (param_2 != 0) {
    FUN_1001e1a70(param_1 + 0x10,param_3);
    std::string::operator=((string *)(param_1 + 0x80),param_4);
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    **(undefined1 **)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x97) = 0;
  }
  return;
}




bool FUN_1001e1a40(long param_1)

{
  if (*(char *)(param_1 + 0x97) < '\0') {
    if (*(long *)(param_1 + 0x88) == 0) {
      return false;
    }
  }
  else if (*(char *)(param_1 + 0x97) == '\0') {
    return false;
  }
  return *(int *)(param_1 + 0x10) != 0;
}




void FUN_1001e1a70(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1001e1764(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




undefined8 * FUN_1001e1adc(void)

{
  void *pvVar1;
  
  if (DAT_101e436f0 == (undefined8 *)0x0) {
    DAT_101e436f0 = operator_new(0x18);
    *DAT_101e436f0 = 0;
    DAT_101e436f0[1] = 0;
    *(undefined4 *)(DAT_101e436f0 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,1);
    DAT_101e436f8 = pvVar1;
  }
  return DAT_101e436f0;
}




undefined8 * FUN_1001e1b34(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_1001e1bb0_1014697c0;
  plVar5 = (long *)FUN_1001e1adc();
  ppVar4 = DAT_101e436f8;
  _pthread_mutex_lock(DAT_101e436f8);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_1001e1bb0(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1001e1bb0_1014697c0;
  uVar2 = FUN_1001e1adc();
  ppVar1 = DAT_101e436f8;
  _pthread_mutex_lock(DAT_101e436f8);
  FUN_1001e1c10(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_1001e1c10(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_1001e1bb0(void)

{
  FUN_1001e1bb0();
  return;
}




void FUN_1001e1c74(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e1bb0();
  operator_delete(pvVar1);
  return;
}




int FUN_1001e1c88(undefined8 param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_1001e1adc();
  ppVar1 = DAT_101e436f8;
  _pthread_mutex_lock(DAT_101e436f8);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




void FUN_1001e1cec(void)

{
  return;
}




void FUN_1001e1cf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014697e8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}




void FUN_1001e1d14(long param_1)

{
  undefined8 *puVar1;
  
  FUN_1001a86c8(*(undefined8 *)(param_1 + 0x10),0);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  FUN_1001a8e34(*(undefined4 *)(puVar1 + 2),*(undefined8 *)(param_1 + 0x10),*puVar1,
                *(undefined1 *)((long)puVar1 + 0x14),0);
  return;
}




void FUN_1001e1d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_1001e1d58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *puVar1 = &PTR_FUN_101469830;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  return;
}




void FUN_1001e1d84(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    if (-1 < *(char *)(param_1 + 0x37)) {
      FUN_1001aae30();
      return;
    }
    FUN_1001aae30(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (-1 < *(char *)(param_1 + 0x37)) {
    FUN_1001a9200();
    return;
  }
  FUN_1001a9200(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_1001e1dcc(long param_1,undefined8 param_2,string *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  std::string::operator=((string *)(param_1 + 0x20),param_3);
  return;
}




void FUN_1001e1ddc(long param_1,undefined8 param_2,string *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  std::string::operator=((string *)(param_1 + 0x20),param_3);
  return;
}




void FUN_1001e1dec(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    plVar1 = (long *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_100094b5c(0x3f800000,plVar1);
    return;
  }
  plVar1 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (-1 < *(char *)(param_1 + 0x27)) {
      FUN_1001e7a40();
      return;
    }
    FUN_1001e7a40(*plVar1);
    return;
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_1001e79b8(0x3f800000,plVar1,0,0);
  return;
}




void FUN_1001e1e48(long param_1,string *param_2,undefined1 param_3,undefined1 param_4)

{
  std::string::operator=((string *)(param_1 + 0x10),param_2);
  *(undefined1 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x29) = param_4;
  return;
}




void FUN_1001e1e84(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_1001e1e8c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_1001e1e94(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    auVar1 = FUN_10063f138();
                    /* WARNING: Could not recover jumptable at 0x0001001e1ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar1,0,0x3f800000,0x3f800000);
    return;
  }
  FUN_10063f158();
  return;
}




void FUN_1001e1ed8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    auVar1 = FUN_10063f138();
                    /* WARNING: Could not recover jumptable at 0x0001001e1f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar1,0,0x3f800000,0x3f800000);
    return;
  }
  FUN_10063f158();
  return;
}




void FUN_1001e1f1c(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  FUN_10063f19c();
  FUN_10063f19c(param_1,param_2,param_3);
  if (*(char *)(param_2 + 0x2c) == '\0') {
    *(ulong *)(param_2 + 0x24) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                  (float)*(undefined8 *)(param_3 + 0x40) - (float)*(undefined8 *)(param_2 + 0x1c));
    *(undefined1 *)(param_2 + 0x2c) = 1;
  }
  fVar2 = (float)FUN_1001e1e94(param_2);
  fVar3 = (float)FUN_1001e1ed8(param_2);
  uVar4 = NEON_fmov(0x3f800000,4);
  fVar2 = (float)*(undefined8 *)(param_2 + 0x1c) +
          ((float)uVar4 - fVar2) * (float)*(undefined8 *)(param_2 + 0x24);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20) +
          ((float)((ulong)uVar4 >> 0x20) - fVar3) *
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20);
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x44)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_3 + 0x44) == fVar3;
  }
  if (!bVar1) {
    *(ulong *)(param_3 + 0x40) = CONCAT44(fVar3,fVar2);
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_1001e1fe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101469878;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  FUN_10063eeb4(param_1);
  return;
}




void FUN_1001e2020(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101469878;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  pvVar1 = (void *)FUN_10063eeb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001e2064(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e2078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101469830;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  FUN_10063eeb4(param_1);
  return;
}




void FUN_1001e20b4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101469830;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  pvVar1 = (void *)FUN_10063eeb4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001e20f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063eeb4();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_1001e210c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_thunk_FUN_1001e2180_101469908;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN_1010eb520(3);
  uVar1 = FUN_1010efa64();
  param_1[0xd] = uVar1;
  return param_1;
}




undefined8 * FUN_1001e2180(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001e2180_101469908;
  FUN_1001e21e0();
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}




void FUN_1001e21e0(long param_1)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  FUN_1001e2a7c();
  FUN_1004e6858();
  FUN_1004e51fc();
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    do {
      if (*(long *)(param_1 + 0x50) == lVar2) {
        *(long *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x50);
        *(long *)(param_1 + 0x58) = lVar2;
        *(undefined8 *)(lVar2 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      FUN_1001e2938(param_1);
      lVar2 = *(long *)(param_1 + 0x58);
    } while (lVar2 != 0);
  }
  pvVar1 = *(void **)(param_1 + 8);
  while (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar1 + 0x58);
    FUN_1001e26e4((undefined8 *)(param_1 + 8),pvVar1);
    if (*(void **)((long)pvVar1 + 0x68) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x68));
      *(undefined8 *)((long)pvVar1 + 0x60) = 0;
      *(undefined8 *)((long)pvVar1 + 0x68) = 0;
    }
    if (*(char *)((long)pvVar1 + 0x27) < '\0') {
      operator_delete(*(void **)((long)pvVar1 + 0x10));
    }
    operator_delete(pvVar1);
    pvVar1 = pvVar3;
  }
  FUN_1010f19a0(*(undefined8 *)(param_1 + 0x68));
  FUN_1010eb5dc();
  return;
}




void thunk_FUN_1001e2180(void)

{
  FUN_1001e2180();
  return;
}




void FUN_1001e22b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e2180();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e22c4(long param_1,char *param_2)

{
  string *this;
  int iVar1;
  string *psVar2;
  undefined8 uVar3;
  void *local_48 [2];
  char local_31;
  
  this = (string *)(param_1 + 0x78);
  psVar2 = this;
  if (*(char *)(param_1 + 0x8f) < '\0') {
    psVar2 = *(string **)this;
  }
  iVar1 = _strcmp((char *)psVar2,param_2);
  if (iVar1 != 0) {
    FUN_10001549c(local_48,param_2);
    std::string::operator=(this,(string *)local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_1001e2364(param_1,param_2,1,0);
    uVar3 = FUN_1004d29d0();
    *(undefined8 *)(param_1 + 0x90) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}




void FUN_1001e2364(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  void *local_58 [2];
  char local_41;
  
  if (((param_2 != 0) && (iVar1 = FUN_1004d2524(param_2), iVar1 != 0)) &&
     (puVar2 = (undefined4 *)FUN_1001e2bcc(param_1), puVar2 != (undefined4 *)0x0)) {
    *puVar2 = param_3;
    FUN_10001549c(local_58,param_2);
    std::string::operator=((string *)(puVar2 + 4),(string *)local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
    *(undefined8 *)(puVar2 + 0xe) = param_4;
    *(undefined8 *)(puVar2 + 2) = 0;
    plVar3 = (long *)(param_1 + 0x20);
    lVar4 = *plVar3;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(long *)(puVar2 + 0x16) = lVar4;
    if (lVar4 == 0) {
      *(undefined4 **)(param_1 + 0x20) = puVar2;
      plVar3 = (long *)(param_1 + 0x28);
    }
    else {
      *(undefined4 **)(lVar4 + 0x50) = puVar2;
    }
    *plVar3 = (long)puVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return;
}




void FUN_1001e242c(long *param_1,undefined8 param_2)

{
  void *local_38 [2];
  char local_21;
  
  if ((char)param_1[0x13] != '\0') {
    FUN_10001549c(local_38,"");
    std::string::operator=((string *)(param_1 + 0xf),(string *)local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
  }
  return;
}




void FUN_1001e26e4(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x58);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x50);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x58) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x50);
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(long *)(*(long *)(param_2 + 0x58) + 0x50) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_1001e2744(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if ((*param_2 == 2) && (iVar3 = FUN_10034ca9c(param_2 + 4,param_2 + 0x18), iVar3 != 0)) {
    FUN_1001e289c(param_1,param_2);
    return;
  }
  lVar4 = FUN_1010eb624();
  if (lVar4 != 0) {
    *(long *)(param_2 + 10) = lVar4;
    FUN_1010eb66c(lVar4,0x2712);
    FUN_1010eb66c(lVar4,0x4e2b);
    FUN_1010eb66c(lVar4,0x2711);
    FUN_1010eb66c(lVar4,0xd);
    FUN_1010eb66c(lVar4,0x2776);
    FUN_1010eb66c(lVar4,99);
    FUN_1010d05bc(lVar4);
    FUN_1010efa70(*(undefined8 *)(param_1 + 0x68),lVar4);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x40);
    *(long *)(param_2 + 0x14) = lVar2;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    plVar1 = (long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar2 + 0x58);
    }
    *plVar1 = (long)param_2;
    *(int **)(param_1 + 0x40) = param_2;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    return;
  }
  FUN_1001e2938(param_1,param_2);
  return;
}




void FUN_1001e289c(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x50);
  lVar3 = *(long *)(param_1 + 0x58);
  *(long *)(param_2 + 0x14) = lVar3;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  plVar1 = (long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x58);
  }
  *plVar1 = (long)param_2;
  *(int **)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (*param_2 == 2) {
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0x40000000;
    if (param_2[0x18] != 0) {
      param_2[0x12] = 0;
      uVar4 = FUN_1004e6858();
      FUN_1004e57e0(uVar4,FUN_1001e2cd8,param_2);
      return;
    }
  }
  else if (*param_2 == 1) {
    param_2[0x12] = param_2[0x12] | 0x40000000;
  }
  return;
}




void FUN_1001e2938(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0x40));
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(undefined4 *)(param_2 + 0x60) = 0;
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_2 + 0x50) = lVar3;
  *(undefined8 *)(param_2 + 0x58) = 0;
  plVar1 = (long *)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x58);
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}




void FUN_1001e2998(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  while (lVar1 = lVar2, lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x58);
    if (*(long *)(lVar1 + 0x30) == param_2) {
      FUN_1001e26e4((long *)(param_1 + 0x20),lVar1);
      FUN_1001e2938(param_1,lVar1);
    }
  }
  lVar2 = *(long *)(param_1 + 0x38);
  while (lVar1 = lVar2, lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x58);
    if (*(long *)(lVar1 + 0x30) == param_2) {
      FUN_1010efe70(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar1 + 0x28));
      FUN_1010eb86c(*(undefined8 *)(lVar1 + 0x28));
      FUN_1001e26e4((long *)(param_1 + 0x38),lVar1);
      FUN_1001e2938(param_1,lVar1);
    }
  }
  for (lVar2 = *(long *)(param_1 + 0x50); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x58)) {
    if (*(long *)(lVar2 + 0x30) == param_2) {
      *(uint *)(lVar2 + 0x48) = *(uint *)(lVar2 + 0x48) | 0x80000000;
    }
  }
  return;
}




void FUN_1001e2a7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    do {
      if (*(long *)(param_1 + 0x20) == lVar1) {
        *(long *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      else {
        lVar1 = *(long *)(lVar1 + 0x50);
        *(long *)(param_1 + 0x28) = lVar1;
        *(undefined8 *)(lVar1 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      FUN_1001e2938(param_1);
      lVar1 = *(long *)(param_1 + 0x28);
    } while (lVar1 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    do {
      if (*(long *)(param_1 + 0x38) == lVar1) {
        *(long *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      else {
        lVar2 = *(long *)(lVar1 + 0x50);
        *(long *)(param_1 + 0x40) = lVar2;
        *(undefined8 *)(lVar2 + 0x58) = 0;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      FUN_1010efe70(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar1 + 0x28));
      FUN_1010eb86c(*(undefined8 *)(lVar1 + 0x28));
      FUN_1001e2938(param_1,lVar1);
      lVar1 = *(long *)(param_1 + 0x40);
    } while (lVar1 != 0);
  }
  for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x58)) {
    *(uint *)(lVar1 + 0x48) = *(uint *)(lVar1 + 0x48) | 0x80000000;
  }
  return;
}




void FUN_1001e2b64(void)

{
  return;
}




void FUN_1001e2b68(void)

{
  return;
}




undefined4 * FUN_1001e2b6c(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  std::string::operator=((string *)(param_1 + 4),(string *)&DAT_101d91198);
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  if (*(long *)(param_1 + 0x1a) != 0) {
    param_1[0x18] = 0;
  }
  return param_1;
}




undefined4 * FUN_1001e2bcc(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = operator_new(0x70);
    FUN_1001e2b6c();
  }
  else {
    if (*(undefined4 **)(param_1 + 8) == puVar2) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      lVar1 = *(long *)(puVar2 + 0x14);
      *(long *)(param_1 + 0x10) = lVar1;
      *(undefined8 *)(lVar1 + 0x58) = 0;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    std::string::operator=((string *)(puVar2 + 4),(string *)&DAT_101d91198);
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    puVar2[0x12] = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    if (*(long *)(puVar2 + 0x1a) != 0) {
      puVar2[0x18] = 0;
    }
  }
  *(undefined8 *)(puVar2 + 0x14) = 0;
  *(undefined8 *)(puVar2 + 0x16) = 0;
  return puVar2;
}




uint FUN_1001e2c70(void *param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 * param_2;
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_4 + 0x60);
    FUN_100116af8((uint *)(param_4 + 0x60),uVar1 + uVar2,0);
    _memmove((void *)(*(long *)(param_4 + 0x68) + (ulong)uVar1),param_1,(ulong)uVar2);
  }
  return uVar2;
}




void FUN_1001e2cd8(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  if (-1 < (int)uVar3) {
    local_30 = 0;
    local_28 = 0;
    iVar1 = FUN_100539110(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60),&local_28,
                          (long)&local_30 + 4,&local_30);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_10034ca9c(param_1 + 0x10,0);
      if ((uVar2 & 1) == 0) {
        FUN_10034c944(param_1 + 0x10,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x60)
                     );
      }
      uVar3 = 0x20000000;
    }
    *(undefined8 *)(param_1 + 0x40) = local_28;
    *(uint *)(param_1 + 0x48) =
         *(uint *)(param_1 + 0x48) & 0xc0000000 | local_30._4_4_ & 0x3fff | uVar3 |
         ((uint)local_30 & 0x3fff) << 0xe;
    iVar1 = FUN_100126c6c();
    if ((iVar1 == 0) || (iVar1 = FUN_100126c4c(), iVar1 == 0)) {
      FUN_1004dfd68(local_28,local_28,local_30._4_4_,local_30 & 0xffffffff);
      uVar3 = *(uint *)(param_1 + 0x48) | 0x10000000;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x48);
    }
  }
  *(uint *)(param_1 + 0x48) = uVar3 | 0x40000000;
  return;
}




void FUN_1001e2db4(long *param_1,long param_2)

{
  void *pvVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_40;
  undefined8 local_38;
  ulong local_30;
  ulong uStack_28;
  
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_30 = local_30 & 0xffffffffffffff00;
  local_78 = local_80;
  FUN_1000cad70(param_2 + 0x60,&local_30);
  local_30 = *(ulong *)(param_2 + 0x68);
  uStack_28 = local_30;
  FUN_1000f7bd0(&local_98,&local_30);
  if (local_40 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_98,*(undefined8 *)(param_2 + 0x38));
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar1 = (void *)FUN_1000f7b54();
    operator_delete(pvVar1);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




void FUN_1001e2e80(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (*(int *)(param_2 + 0x60) != 0) {
    uVar1 = *(uint *)(param_2 + 0x48);
    if ((uVar1 >> 0x1d & 1) != 0) {
      plVar2 = *(long **)(param_2 + 0x30);
      if (plVar2 == (long *)0x0) {
        (**(code **)(*param_1 + 0x28))
                  (param_1,*(undefined8 *)(param_2 + 0x40),uVar1 & 0x3fff,uVar1 >> 0xe & 0x3fff,
                   *(undefined8 *)(param_2 + 0x38),uVar1 >> 0x1c & 1);
      }
      else {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (*(void **)(param_2 + 0x40) != (void *)0x0) {
      operator_delete__(*(void **)(param_2 + 0x40));
    }
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  return;
}




void FUN_1001e2efc(long param_1,long param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  void *local_68 [2];
  char local_51;
  
  if (((param_2 != 0) && (iVar1 = FUN_1004d2524(param_2), iVar1 != 0)) &&
     (puVar2 = (undefined4 *)FUN_1001e2bcc(param_1), puVar2 != (undefined4 *)0x0)) {
    *puVar2 = param_3;
    FUN_10001549c(local_68,param_2);
    std::string::operator=((string *)(puVar2 + 4),(string *)local_68);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    *(undefined8 *)(puVar2 + 0xc) = param_4;
    *(undefined8 *)(puVar2 + 0xe) = param_5;
    *(undefined8 *)(puVar2 + 2) = 0;
    plVar3 = (long *)(param_1 + 0x20);
    lVar4 = *plVar3;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(long *)(puVar2 + 0x16) = lVar4;
    if (lVar4 == 0) {
      *(undefined4 **)(param_1 + 0x20) = puVar2;
      plVar3 = (long *)(param_1 + 0x28);
    }
    else {
      *(undefined4 **)(lVar4 + 0x50) = puVar2;
    }
    *plVar3 = (long)puVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return;
}




void FUN_1001e2fd0(long *param_1)

{
  operator_new(0x50b0);
  DAT_101e43700 = thunk_FUN_10018b7ec();
                    /* WARNING: Could not recover jumptable at 0x0001001e3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,DAT_101e43700 + 0x30,1);
  return;
}




void FUN_1001e3014(void)

{
  int iVar1;
  
  iVar1 = FUN_100642d08(DAT_101e43700 + 6);
  if (iVar1 != 0) {
    FUN_1006423ec(DAT_101e43700 + 6,1);
  }
  if (DAT_101e43700 != (long *)0x0) {
    (**(code **)(*DAT_101e43700 + 0x60))();
  }
  DAT_101e43700 = (long *)0x0;
  return;
}




bool FUN_1001e3068(void)

{
  return DAT_101e43700 != 0;
}




void FUN_1001e307c(void)

{
  if (DAT_101e43700 != 0) {
    FUN_100530354();
    return;
  }
  return;
}




void FUN_1001e3090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  uVar1 = FUN_100530354(DAT_101e43700);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10018bee8(DAT_101e43700,param_1,param_2,param_3);
  FUN_10053035c(DAT_101e43700,param_4,param_5,0,0);
  FUN_1005302d0(DAT_101e43700);
  return;
}




void FUN_1001e3120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  
  uVar1 = FUN_100530354(DAT_101e43700);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10018bf50(DAT_101e43700,param_1,param_2,param_3,param_4);
  FUN_10053035c(DAT_101e43700,param_5,param_6,param_7,0);
  FUN_1005302d0(DAT_101e43700);
  return;
}




void FUN_1001e31c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  
  uVar1 = FUN_100530354(DAT_101e43700);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10018bfbc(DAT_101e43700,param_1,param_2,param_3,param_4,param_5);
  FUN_10053035c(DAT_101e43700,param_6,param_7,param_8,param_9);
  FUN_1005302d0(DAT_101e43700);
  return;
}




void FUN_1001e3288(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  
  uVar1 = FUN_100530354(DAT_101e43700);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10018bee8(DAT_101e43700,param_1,param_2,param_3);
  FUN_10053035c(DAT_101e43700,param_5,param_6,0,0);
  (**(code **)(*DAT_101e43700 + 0x18))((float)param_4);
  FUN_1005302d0(DAT_101e43700);
  return;
}




void FUN_1001e333c(void)

{
  int iVar1;
  
  if ((DAT_101e43700 != 0) && (iVar1 = FUN_100530354(), iVar1 != 0)) {
    FUN_100530308(DAT_101e43700,1);
    return;
  }
  return;
}




long FUN_1001e337c(void)

{
  return DAT_101e43700 + 0xb8;
}




void FUN_1001e338c(void)

{
  DAT_101d23650 = FUN_100644a94("UI::EVENT_MENU_ENTER_LOBBY");
  DAT_101d23654 = FUN_100644a94("UI::EVENT_MENU_LOBBY_FINISHED");
  DAT_101d23658 = FUN_100644a94("UI::EVENT_MENU_REQUEST_ENTER_PROFILE");
  DAT_101d2365c = FUN_100644a94("UI::EVENT_MENU_REQUEST_PLATFORM_NOTIFICATION");
  DAT_101d23660 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CLOSE_PLATFORM_NOTIFICATION");
  DAT_101d23664 = FUN_100644a94("UI::EVENT_MENU_OPEN_URL");
  DAT_101d23668 = FUN_100644a94("UI::EVENT_MENU_PANEL_CHANGE");
  DAT_101d2366c = FUN_100644a94("UI::EVENT_MENU_YOU_ARE_READY");
  DAT_101d23670 = FUN_100644a94("UI::EVENT_MENU_PLAYER_NAME_UPDATED");
  DAT_101d23674 = FUN_100644a94("UI::EVENT_MENU_SEASON_REWARD_NOTIFICATION");
  DAT_101d23678 = FUN_100644a94("UI::EVENT_MENU_SHOW_ROOT");
  DAT_101d2367c = FUN_100644a94("UI::EVENT_MENU_LOG_OUT");
  DAT_101d23680 = FUN_100644a94("UI::EVENT_MENU_REQUEST_CACHE_URL_IMAGE");
  DAT_101d23684 = FUN_100644a94("UI::EVENT_MENU_CHECK_TODAY_IN_VAINGLORY");
  DAT_101d23688 = FUN_100644a94("UI::EVENT_USER_INTENT_PLAY_NOPLAT");
  DAT_101d2368c = DAT_101d23650;
  return;
}




void FUN_1001e34dc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  
  FUN_100657568(auStack_40);
  FUN_1006575f4(auStack_40,PTR_s_build___MenuCharPortraitsHD_png_1018549d0);
  lVar2 = FUN_1006575c4(auStack_40,param_2);
  ppuVar1 = &PTR_s_build___MenuCharPortraitsHD2_atl_1018549d8;
  if (lVar2 != 0) {
    ppuVar1 = &PTR_s_build___MenuCharPortraitsHD_png_1018549d0;
  }
  FUN_100652d20(param_1,*ppuVar1,param_2);
  thunk_FUN_100657580(auStack_40);
  return;
}




void FUN_1001e355c(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,"build://Splash_");
  std::string::append((char *)local_48);
  std::string::append((char *)local_48);
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100652cac(param_1,pppuVar1,"full_splash_1k");
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1001e35ec(undefined1 param_1 [16],undefined4 param_2,long *param_3,int param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  
  *param_7 = 0;
  if (param_4 == 0) {
    FUN_100641464(param_5,param_6);
    *param_7 = DAT_101d236ac;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x48))();
    *param_5 = uVar1;
    (**(code **)(*param_3 + 0x48))(param_3);
    *param_6 = param_2;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001e3664(void)

{
  DAT_101e43708 = 0xff;
  DAT_101e4370a = 0xffff;
  DAT_101e4370c = 0xffff;
  DAT_101e43710 = 0x4326000041900000;
  DAT_101e43718 = 0x4326000041c00000;
  DAT_101e43720 = 0xffbc9c44;
  DAT_101e43724 = 0xff1166f2;
  DAT_101e43728 = 0xffe0e0e0;
  DAT_101e4372c = 0xffa0a0a0;
  DAT_101e43730 = 0xff8c8c8c;
  DAT_101e43734 = 0xff322213;
  DAT_101e43738 = 0xff091911;
  DAT_101e4373c = 0xff170c19;
  DAT_101e43740 = 0xff241a14;
  DAT_101e43744 = 0xff14171c;
  DAT_101e43748 = 0xff221911;
  DAT_101e4374c = 0xff1a1416;
  DAT_101e43750 = 0xff121414;
  DAT_101e43754 = 0xff1a1809;
  DAT_101e43758 = 0xff141414;
  DAT_101e4375c = 0xff141414;
  DAT_101e43760 = 0xff2929c0;
  DAT_101e43764 = 0xff283082;
  DAT_101e43768 = 0xff5262cc;
  DAT_101e4376c = 0xff283082;
  DAT_101e43770 = 0xff5262cc;
  DAT_101e43774 = 0xff745c42;
  DAT_101e43778 = 0xff184155;
  DAT_101e4377c = 0xff92665e;
  DAT_101e43780 = 0xffbc9c44;
  DAT_101e43784 = 0xffbbae56;
  DAT_101e43788 = 0xff8b7b01;
  DAT_101e4378c = 0xff90b3ef;
  DAT_101e43790 = 0xff728ebe;
  DAT_101e43794 = 0xff19459d;
  DAT_101e43798 = 0xff9d877b;
  DAT_101e4379c = 0xffcbb1a3;
  DAT_101e437a0 = 0xff3f6fb5;
  DAT_101e437a4 = 0xffc5c5c5;
  DAT_101e437a8 = 0xff4fc1f1;
  DAT_101e437ac = 0xff606060;
  DAT_101e437b0 = 0xffc5ff7b;
  DAT_101e437b4 = 0xff5271eb;
  DAT_101e437b8 = 0xfffae076;
  DAT_101e437bc = 0xff3ac8f6;
  DAT_101e437c0 = 0xffaaaaaa;
  DAT_101e437c4 = 0xffe19400;
  DAT_101e437c8 = 0xffe19400;
  DAT_101e437cc = 0xffe550b2;
  DAT_101e437d0 = 0xfff22ae8;
  DAT_101e437d4 = 0xff005ae1;
  DAT_101e437d8 = 0xff1addfa;
  DAT_101e437dc = 0xff2424b3;
  DAT_101e437e0 = 0xff2424b3;
  DAT_101e437e4 = 0xff646464;
  DAT_101e437e8 = 0xff92665e;
  DAT_101e437ec = 0xff646037;
  DAT_101e437f0 = 0xffffffff;
  DAT_101e437f4 = 0xff1111a1;
  DAT_101e437f8 = 0xff321ee1;
  DAT_101e437fc = 0xffc8c8c8;
  DAT_101e43800 = 0xff321ee1;
  DAT_101e43804 = 0xff7fe801;
  DAT_101e43808 = 0xffffffff;
  DAT_101e4380c = 0xff6259b3;
  DAT_101e43810 = 0xff506e73;
  DAT_101e43814 = 0xff9dbf86;
  DAT_101e43818 = 0xffa35244;
  DAT_101e4381c = 0xffca828e;
  DAT_101e43820 = 0xffa6a6a6;
  DAT_101e43824 = 0xffa6a6a6;
  DAT_101e43828 = 0xffffffff;
  DAT_101e4382c = 0xff88ea2f;
  DAT_101e43834 = 0xffffb400;
  DAT_101e43838 = 0xffff00ff;
  DAT_101e4383c = 0xff00aded;
  DAT_101e43840 = 0xff33d3ff;
  DAT_101e43844 = 0xff7fe801;
  DAT_101e43848 = 0xff282828;
  DAT_101e4384c = 0xfff0f0f0;
  DAT_101e43850 = 0xffa4781e;
  DAT_101e43854 = 0xffa6654b;
  DAT_101e43858 = 0xff93435b;
  DAT_101e4385c = 0xff387f9c;
  DAT_101e43860 = 0xffa3781e;
  DAT_101e43864 = 0xffffd18a;
  DAT_101e43868 = 0xffff61f7;
  DAT_101e4386c = 0xff5de1f2;
  DAT_101e43870 = 0xff80eaff;
  DAT_101e43874 = 0xff32e00e;
  DAT_101e43878 = 0xff5a3c10;
  DAT_101e4387c = 0xff330b03;
  DAT_101e43880 = 0xff33031d;
  DAT_101e43884 = 0xff032433;
  DAT_101e43888 = 0xff9e8e8d;
  DAT_101e43830 = 0xff8c8c8c;
  DAT_101e43890 = "build://MenuTabSideGlow.tga";
  DAT_101e43898 = "quest_icons_atlas_test";
  uRam0000000101e438a8 = 0x800000003c;
  _DAT_101e438a0 = 0x3b00000000;
  DAT_101e438b0 = 0x80;
  DAT_101e438b8 = "build://MenuTabSideGlow.tga";
  DAT_101e438c0 = "quest_icons_atlas_test";
  uRam0000000101e438d0 = 0x800000003c;
  _DAT_101e438c8 = 0x3b00000000;
  DAT_101e438d8 = 0x80;
  DAT_101e438e0 = "build://BorderAni.tga";
  DAT_101e438e8 = "draft_highlight";
  uRam0000000101e438f8 = 0x8000000030;
  _DAT_101e438f0 = 0x2f00000000;
  DAT_101e43900 = 0x80;
  DAT_101d23690 = PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8;
  DAT_101d23698 = PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  DAT_101d236a0 = 0xffffffff;
  DAT_101d236a4 = 0xb2ffffff;
  DAT_101d236a8 = 0xff8c8c8c;
  DAT_101d236ac = DAT_101854a7c + DAT_101854a7c;
  DAT_101d236b0 = 0xff0020d0;
  DAT_101d236b4 = 0xff777777;
  DAT_101d236b8 = 0xffb4a22b;
  DAT_101d236bc = 0xffdcdcdc;
  DAT_101d236c0 = 0xff3b912e;
  DAT_101d236c4 = 0xff241ced;
  DAT_101d236c8 = 0xff65bdce;
  FUN_10001549c(&DAT_101d236d0,"[STATICCONTENTURL]d4a92ef83cb4ca553a0d268eb7c16c5e.jpg");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d236d0,0x100000000);
  FUN_10001549c(&DAT_101d236e8,"[STATICCONTENTURL]532e7dd7ba0fbf7f614c3fe5147484f1.jpg");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d236e8,0x100000000);
  FUN_10001549c(&DAT_101d23700,"[STATICCONTENTURL]dce7a851855d787b09227550599c787b.jpg");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23700,0x100000000);
  FUN_10001549c(&DAT_101d23718,"build://Sounds/UI.assetbundle/ui_vg3_general_click.mp3");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23718,0x100000000);
  FUN_10001549c(&DAT_101d23730,"build://Sounds/UI.assetbundle/ui_vg3_main_nav_icon.mp3");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23730,0x100000000);
  FUN_10001549c(&DAT_101d23748,"build://Sounds/UI.assetbundle/ui_vg3_play_button.mp3");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23748,0x100000000);
  FUN_10001549c(&DAT_101d23760,"build://Sounds/UI.assetbundle/ui_vg3_play_mode_tile.mp3");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23760,0x100000000);
  return;
}




void FUN_1001e3fd8(void)

{
  FUN_1001db0bc("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/in_app_purchase",0);
  return;
}




long * FUN_1001e3fe8(long *param_1)

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
  undefined8 *puVar10;
  float fVar11;
  long lVar12;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_1001e5908_101469960;
  puVar10 = puVar10 + 0x17;
  FUN_1006421a8(puVar10);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x46;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 100;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x82;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xa8;
  thunk_FUN_100183990(plVar5,0);
  FUN_10064e264();
  plVar6 = param_1 + 0x17d;
  thunk_FUN_100183990(plVar6,0);
  plVar7 = param_1 + 0x23b;
  thunk_FUN_100183990(plVar7,0);
  plVar8 = param_1 + 0x2f9;
  thunk_FUN_100652c08(plVar8);
  FUN_10064e264();
  *(undefined4 *)(param_1 + 0x32e) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1974) = 0;
  *(undefined4 *)(param_1 + 0x32f) = 0xbf800000;
  *(undefined1 *)((long)param_1 + 0x197c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(puVar10,plVar4,1);
  FUN_100642bd8(puVar10,plVar5,1);
  FUN_100642bd8(puVar10,plVar6,1);
  FUN_100642bd8(puVar10,plVar7,1);
  FUN_100642bd8(puVar10,plVar8,1);
  FUN_100642bd8(puVar10,param_1 + 0x166,1);
  FUN_100642bd8(puVar10,param_1 + 0x317,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"alert_top");
  if ((*(float *)(param_1 + 0x31) != 2.0) || (*(float *)((long)param_1 + 0x18c) != 2.0)) {
    param_1[0x31] = 0x4000000040000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar9 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x1c4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7900;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"alert_mid");
  if ((*(float *)(param_1 + 0x4f) != 2.0) || (*(float *)((long)param_1 + 0x27c) != 2.0)) {
    param_1[0x4f] = 0x4000000040000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x2b4);
  if ((uVar9 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x2b4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7900;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"alert_bot");
  if ((*(float *)(param_1 + 0x6d) != 2.0) || (*(float *)((long)param_1 + 0x36c) != 2.0)) {
    param_1[0x6d] = 0x4000000040000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar9 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar9 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x3a4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x7900;
    FUN_1000200a0(plVar3);
  }
  fVar11 = (float)FUN_100652e60(plVar1);
  DAT_101d23778 = fVar11 * *(float *)(param_1 + 0x31);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x8a) != 42.0) || (*(float *)((long)param_1 + 0x454) != 30.0)) {
    param_1[0x8a] = 0x41f0000042280000;
    FUN_1000200a0(plVar4);
  }
  FUN_100651708(0x43f28000,plVar4,1);
  FUN_100652cdc(param_1 + 0x142,"generic_x");
  *(uint *)((long)param_1 + 0x8b4) = *(uint *)((long)param_1 + 0x8b4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x9a4) = *(uint *)((long)param_1 + 0x9a4) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar5);
  lVar12 = NEON_fmov(0xc1200000,4);
  param_1[0xb3] = lVar12;
  FUN_100652cdc(param_1 + 0x217,"generic_check");
  *(uint *)((long)param_1 + 0xf5c) = *(uint *)((long)param_1 + 0xf5c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x104c) = *(uint *)((long)param_1 + 0x104c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar6);
  param_1[0x188] = lVar12;
  FUN_100652cdc(param_1 + 0x2d5,"generic_x");
  *(uint *)((long)param_1 + 0x154c) = *(uint *)((long)param_1 + 0x154c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x163c) = *(uint *)((long)param_1 + 0x163c) & 0xfffffffb;
  FUN_1001b495c(0x3ecccccd,plVar7);
  param_1[0x246] = lVar12;
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar9 = *(uint *)((long)param_1 + 0x184c);
  if ((uVar9 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x184c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2600;
    FUN_1000200a0(plVar8);
  }
  FUN_10064e47c(0x40000000,0x429a0000,plVar8);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  return param_1;
}




void FUN_1001e44f8(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(param_2 + 0x197c) != '\0') {
    if (0.0 <= *(float *)(param_2 + 0x1978)) {
      *(float *)(param_2 + 0x1978) = *(float *)(param_2 + 0x1978) - param_1;
    }
    else if (*(int *)(param_2 + 0x1970) != -1) {
      FUN_1001e4578(DAT_101e43908,param_2);
    }
  }
  iVar1 = FUN_100642bc8(param_2);
  uVar2 = 0x10;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_2 + 0x193c) = *(uint *)(param_2 + 0x193c) & 0xffffffef | uVar2;
  return;
}




void FUN_1001e4578(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  FUN_1001e4dd8(param_2,0,1);
  iVar1 = *(int *)(param_2 + 0x1970);
  *(undefined4 *)(param_2 + 0x1970) = 0xffffffff;
  *(uint *)(param_2 + 0x5c4) = *(uint *)(param_2 + 0x5c4) & 0xffffffef;
  *(uint *)(param_2 + 0x125c) = *(uint *)(param_2 + 0x125c) & 0xffffffef;
  *(uint *)(param_2 + 0xc6c) = *(uint *)(param_2 + 0xc6c) & 0xffffffef;
  lVar3 = 0x19f8;
  lVar4 = 7;
  do {
    iVar2 = *(int *)(param_1 + lVar3);
    if (iVar2 != -1 && iVar1 < iVar2) {
      *(int *)(param_1 + lVar3) = iVar2 + -1;
    }
    lVar3 = lVar3 + 0x1988;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar3 = 0;
  lVar4 = 0x19f8;
  do {
    if (*(int *)(param_1 + lVar4) != -1 && iVar1 <= *(int *)(param_1 + lVar4)) {
      FUN_1001e5350(param_1,lVar3);
    }
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + 0x1988;
  } while (lVar3 != 7);
  return;
}




void FUN_1001e4650(long param_1)

{
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_38;
  
  local_38 = DAT_101dbd460;
  local_60 = FUN_1001e46e4;
  uStack_58 = DAT_101e43908;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = param_1;
  FUN_10001554c(param_1 + 0x548,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = FUN_1001e46e4;
  uStack_58 = DAT_101e43908;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = param_1;
  FUN_10001554c(param_1 + 0x548,&local_60);
  return;
}




void FUN_1001e46e4(undefined8 param_1)

{
  long in_x4;
  
  if (*(int *)(in_x4 + 0x1970) != -1) {
    FUN_1001e4578(param_1,in_x4);
    return;
  }
  return;
}




void FUN_1001e46fc(float param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,int param_9,char param_10)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined4 local_88;
  
  *(undefined4 *)(param_2 + 0x32e) = 0;
  if (param_1 != -1.0) {
    *(float *)(param_2 + 0x32f) = param_1;
  }
  *(bool *)((long)param_2 + 0x197c) = param_1 != -1.0;
  plVar1 = param_2 + 0x82;
  bVar9 = param_9 == 0;
  fVar16 = 550.0;
  uVar7 = 0x44098000;
  if (bVar9) {
    uVar7 = 0x43f28000;
  }
  uVar10 = 0;
  if (bVar9) {
    uVar10 = 0x14;
  }
  uVar11 = 4;
  uVar5 = uVar11;
  if (bVar9) {
    uVar5 = 0;
    uVar11 = 0x10;
  }
  FUN_100651708(uVar7,plVar1,1);
  FUN_1006513c0(plVar1,param_3);
  FUN_1006511d0(plVar1);
  *(uint *)((long)param_2 + 0x5c4) = uVar10 | *(uint *)((long)param_2 + 0x5c4) & 0xffffffeb;
  plVar2 = param_2 + 0x17d;
  *(uint *)((long)param_2 + 0xc6c) = uVar11 | *(uint *)((long)param_2 + 0xc6c) & 0xffffffeb;
  plVar3 = param_2 + 0x23b;
  *(uint *)((long)param_2 + 0x125c) = uVar11 | *(uint *)((long)param_2 + 0x125c) & 0xffffffeb;
  *(uint *)((long)param_2 + 0x184c) = *(uint *)((long)param_2 + 0x184c) & 0xfffffffb | uVar5;
  if (param_9 != 0) {
    fVar16 = fVar16 + 80.0;
    bVar9 = false;
    if ((*(float *)(param_2 + 0x243) == DAT_101d23778 * 0.25) &&
       (bVar9 = false, !NAN(*(float *)((long)param_2 + 0x121c)) && !NAN(fVar16))) {
      bVar9 = *(float *)((long)param_2 + 0x121c) == fVar16;
    }
    if (!bVar9) {
      *(float *)(param_2 + 0x243) = DAT_101d23778 * 0.25;
      *(float *)((long)param_2 + 0x121c) = fVar16;
      FUN_1000200a0(plVar3);
    }
    plVar4 = param_2 + 0x2f9;
    fVar12 = *(float *)(param_2 + 0x185);
    bVar9 = false;
    if ((fVar12 == DAT_101d23778 * 0.75) &&
       (bVar9 = false, !NAN(*(float *)((long)param_2 + 0xc2c)) && !NAN(fVar16))) {
      bVar9 = *(float *)((long)param_2 + 0xc2c) == fVar16;
    }
    if (!bVar9) {
      *(float *)(param_2 + 0x185) = DAT_101d23778 * 0.75;
      *(float *)((long)param_2 + 0xc2c) = fVar16;
      FUN_1000200a0(plVar2);
      fVar12 = *(float *)(param_2 + 0x185);
    }
    fVar15 = *(float *)((long)param_2 + 0x121c);
    fVar12 = (fVar12 + *(float *)(param_2 + 0x243)) * 0.5;
    bVar9 = false;
    if ((*(float *)(param_2 + 0x301) == fVar12) &&
       (bVar9 = false, !NAN(*(float *)((long)param_2 + 0x180c)) && !NAN(fVar15))) {
      bVar9 = *(float *)((long)param_2 + 0x180c) == fVar15;
    }
    if (!bVar9) {
      *(float *)(param_2 + 0x301) = fVar12;
      *(float *)((long)param_2 + 0x180c) = fVar15;
      FUN_1000200a0(plVar4);
    }
    local_b0 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_b0);
  }
  puVar6 = &DAT_101d236b0;
  if (param_10 == '\0') {
    puVar6 = &DAT_10115a168;
  }
  FUN_100651460(plVar1,puVar6);
  fVar12 = fVar16;
  FUN_10064e47c(0x44100000,param_2);
  plVar1 = param_2 + 0x28;
  FUN_100652e60(plVar1);
  fVar15 = *(float *)((long)param_2 + 0x18c);
  bVar9 = false;
  if ((*(float *)((long)param_2 + 0x184) == 0.0) &&
     (bVar9 = false, !NAN(*(float *)(param_2 + 0x30)))) {
    bVar9 = *(float *)(param_2 + 0x30) == 0.0;
  }
  if (!bVar9) {
    param_2[0x30] = 0;
    FUN_1000200a0(plVar1);
  }
  plVar4 = param_2 + 0xa8;
  fVar12 = fVar12 * fVar15;
  if ((*(float *)(param_2 + 0x4e) != 0.0) || (*(float *)((long)param_2 + 0x274) != fVar12)) {
    *(undefined4 *)(param_2 + 0x4e) = 0;
    *(float *)((long)param_2 + 0x274) = fVar12;
    FUN_1000200a0(param_2 + 0x46);
  }
  local_b0 = (code *)CONCAT44(fVar16 * 0.5,0xbf800000);
  FUN_10064e48c(param_2 + 0x46,&local_b0);
  if ((*(float *)(param_2 + 0x6c) != 0.0) || (*(float *)((long)param_2 + 0x364) != fVar12 + fVar16))
  {
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(float *)((long)param_2 + 0x364) = fVar12 + fVar16;
    FUN_1000200a0(param_2 + 100);
  }
  *(uint *)((long)param_2 + 0x1c4) = *(uint *)((long)param_2 + 0x1c4) | 0x10;
  *(uint *)((long)param_2 + 0x2b4) = *(uint *)((long)param_2 + 0x2b4) | 0x10;
  *(uint *)((long)param_2 + 0x3a4) = *(uint *)((long)param_2 + 0x3a4) | 0x10;
  fVar15 = DAT_101d23778;
  fVar13 = (float)FUN_10064e3cc(plVar4);
  fVar15 = fVar15 + -10.0 + fVar13 * -0.5;
  fVar12 = fVar12 + fVar16 * 0.5;
  bVar9 = false;
  if ((*(float *)(param_2 + 0xb0) == fVar15) &&
     (bVar9 = false, !NAN(*(float *)((long)param_2 + 0x584)) && !NAN(fVar12))) {
    bVar9 = *(float *)((long)param_2 + 0x584) == fVar12;
  }
  if (!bVar9) {
    *(float *)(param_2 + 0xb0) = fVar15;
    *(float *)((long)param_2 + 0x584) = fVar12;
    FUN_1000200a0(plVar4);
  }
  uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  fVar16 = fVar12;
  FUN_100652e60(plVar1);
  fVar12 = fVar12 + fVar16 * (*(float *)((long)param_2 + 0x18c) + *(float *)((long)param_2 + 0x18c))
  ;
  FUN_10064e47c(uVar14,fVar12,param_2 + 0x166);
  uVar14 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*param_2 + 0x48))(param_2);
  fVar16 = fVar12;
  FUN_100652e60(plVar1);
  FUN_10064e47c(uVar14,fVar12 + fVar16 * (*(float *)((long)param_2 + 0x18c) +
                                         *(float *)((long)param_2 + 0x18c)),param_2 + 0x317);
  *(uint *)((long)param_2 + 0xbb4) = *(uint *)((long)param_2 + 0xbb4) & 0xffffffef;
  FUN_100644c24(param_2 + 0x166);
  FUN_100644c24(plVar4);
  FUN_100644c24(plVar2);
  FUN_100644c24(plVar3);
  uVar7 = DAT_101dbd460;
  local_88 = DAT_101dbd460;
  local_b0 = FUN_1001e46e4;
  lStack_a8 = DAT_101e43908;
  local_a0 = 0;
  uStack_98 = 0;
  plVar1 = param_2 + 0xa9;
  local_90 = param_2;
  FUN_10001554c(plVar1,&local_b0);
  uVar8 = DAT_101dbd48c;
  local_88 = DAT_101dbd48c;
  local_b0 = FUN_1001e46e4;
  lStack_a8 = DAT_101e43908;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = param_2;
  FUN_10001554c(plVar1,&local_b0);
  if (param_8 != 0) {
    lStack_a8 = param_8;
    if (param_4 != 0) {
      local_b0 = (code *)param_4;
      local_90 = (long *)param_5;
      if (param_9 == 0) {
        local_88 = uVar7;
        local_a0 = 0;
        uStack_98 = 0;
        plVar2 = param_2 + 0x167;
        FUN_10001554c(plVar2,&local_b0);
        local_88 = uVar8;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_4;
        lStack_a8 = param_8;
        local_90 = (long *)param_5;
        FUN_10001554c(plVar2,&local_b0);
        local_88 = uVar7;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar2,&local_b0);
        local_88 = uVar8;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar2,&local_b0);
        uVar10 = *(uint *)((long)param_2 + 0xbb4) | 0x10;
      }
      else {
        local_88 = uVar7;
        local_a0 = 0;
        uStack_98 = 0;
        plVar4 = param_2 + 0x17e;
        FUN_10001554c(plVar4,&local_b0);
        local_88 = uVar8;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_4;
        lStack_a8 = param_8;
        local_90 = (long *)param_5;
        FUN_10001554c(plVar4,&local_b0);
        local_88 = uVar7;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar4,&local_b0);
        local_88 = uVar8;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar4,&local_b0);
        FUN_1001b46f0(plVar2);
        *(uint *)((long)param_2 + 0xc6c) = *(uint *)((long)param_2 + 0xc6c) | 0x10;
        uVar10 = *(uint *)((long)param_2 + 0xbb4) & 0xffffffef;
      }
      *(uint *)((long)param_2 + 0xbb4) = uVar10;
    }
    if (param_6 != 0) {
      local_88 = uVar7;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = (code *)param_6;
      lStack_a8 = param_8;
      local_90 = (long *)param_7;
      FUN_10001554c(plVar1,&local_b0);
      local_88 = uVar8;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = (code *)param_6;
      lStack_a8 = param_8;
      local_90 = (long *)param_7;
      FUN_10001554c(plVar1,&local_b0);
      if (param_9 != 0) {
        local_88 = uVar7;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        plVar1 = param_2 + 0x23c;
        local_90 = param_2;
        FUN_10001554c(plVar1,&local_b0);
        local_88 = uVar8;
        local_b0 = FUN_1001e46e4;
        lStack_a8 = DAT_101e43908;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = param_2;
        FUN_10001554c(plVar1,&local_b0);
        local_88 = uVar7;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_6;
        lStack_a8 = param_8;
        local_90 = (long *)param_7;
        FUN_10001554c(plVar1,&local_b0);
        local_88 = uVar8;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (code *)param_6;
        lStack_a8 = param_8;
        local_90 = (long *)param_7;
        FUN_10001554c(plVar1,&local_b0);
        FUN_1001b46f0(plVar3);
        *(uint *)((long)param_2 + 0x125c) = *(uint *)((long)param_2 + 0x125c) | 0x10;
      }
    }
  }
  return;
}




void FUN_1001e4dd8(undefined1 param_1 [16],float param_2,long param_3,uint param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  float fVar8;
  float local_68;
  undefined4 uStack_64;
  
  if (*(byte *)(param_3 + 0x1974) != param_4) {
    FUN_100652e60(param_3 + 0x140);
    if (param_4 == 0) {
      uVar2 = FUN_1000b50a8();
      uStack_64 = *(undefined4 *)(param_3 + 0xfc);
      local_68 = DAT_101d23778 + 100.0;
      FUN_10063fb90(uVar2,&local_68);
      FUN_10063f0e8(0x3ec00000,uVar2);
      FUN_10063f130(uVar2,FUN_10001f218);
      uVar3 = FUN_100047714();
      FUN_10063fce0(0);
      FUN_10063f0e8(0x3ec00000,uVar3);
      uVar3 = FUN_10001f4d4();
      FUN_10063f2a4(uVar3,uVar2);
      FUN_100047300();
      FUN_100642b7c(param_3 + 0xb8,uVar3);
      bVar6 = 0;
      *(uint *)(param_3 + 0x5c4) = *(uint *)(param_3 + 0x5c4) & 0xffffffef;
      *(uint *)(param_3 + 0xc6c) = *(uint *)(param_3 + 0xc6c) & 0xffffffef;
      *(uint *)(param_3 + 0x125c) = *(uint *)(param_3 + 0x125c) & 0xffffffef;
    }
    else {
      fVar8 = -(param_2 * *(float *)(param_3 + 0x18c)) - 100.0;
      lVar5 = param_3 + 0xb8;
      FUN_100642324(lVar5);
      bVar1 = false;
      if ((*(float *)(param_3 + 0xf8) == -80.0) &&
         (bVar1 = false, !NAN(*(float *)(param_3 + 0xfc)) && !NAN(fVar8))) {
        bVar1 = *(float *)(param_3 + 0xfc) == fVar8;
      }
      if (!bVar1) {
        *(undefined4 *)(param_3 + 0xf8) = 0xc2a00000;
        *(float *)(param_3 + 0xfc) = fVar8;
        FUN_1000200a0(lVar5);
      }
      uVar7 = *(uint *)(param_3 + 0x13c);
      if ((uVar7 & 0x7f80) != 0) {
        *(uint *)(param_3 + 0x13c) = uVar7 & 0xffff807f;
        FUN_1000200a0(lVar5);
        uVar7 = *(uint *)(param_3 + 0x13c);
      }
      *(uint *)(param_3 + 0x13c) = uVar7 | 8;
      uVar2 = FUN_10004767c();
      *(undefined8 *)(param_3 + 0x1980) = 0x41a00000c2a00000;
      uVar3 = FUN_1000b50a8();
      FUN_10063fb90(uVar3,param_3 + 0x1980);
      FUN_10063f0e8(0x3f400000,uVar3);
      FUN_10063f130(uVar3,FUN_10001f160);
      uVar4 = FUN_100047714();
      FUN_10063fce0(0x3f800000);
      FUN_10063f0e8(0x3ec00000,uVar4);
      uVar4 = FUN_10001f4d4();
      FUN_10063f2a4(uVar4,uVar3);
      FUN_100642b7c(lVar5,uVar2);
      if (param_5 != 0) {
        uVar2 = FUN_10002f320();
        lVar5 = FUN_1010a0298(uVar2,DAT_10184dd48);
        if (lVar5 != 0) {
          FUN_10004b038(0x3f800000,lVar5,"build://Sounds/UI.assetbundle/ui_notification_general.mp3"
                        ,0,0,0);
          FUN_10004b148(lVar5);
        }
      }
      bVar6 = 1;
    }
    *(byte *)(param_3 + 0x1974) = bVar6;
  }
  return;
}




long * FUN_1001e503c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  lVar2 = 0;
  *puVar1 = &PTR_FUN_101469aa8;
  do {
    FUN_1001e3fe8((long)param_1 + lVar2 + 0x88);
    lVar2 = lVar2 + 0x1988;
  } while (lVar2 != 0xb2b8);
  plVar3 = param_1 + 0x11;
  lVar2 = 7;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
    plVar3 = plVar3 + 0x331;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}




void FUN_1001e50c8(long param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_38 [4];
  float local_34;
  
  FUN_100641464(&local_34,auStack_38);
  iVar2 = FUN_100126c88();
  fVar3 = DAT_101854a78;
  if (iVar2 == 0) {
    fVar3 = 1.0;
  }
  bVar1 = false;
  if ((*(float *)(param_1 + 0x48) == fVar3) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x4c)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_1 + 0x4c) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_1 + 0x48) = fVar3;
    *(float *)(param_1 + 0x4c) = fVar3;
    FUN_1000200a0(param_1);
  }
  local_34 = local_34 + fVar3 * -576.0;
  if ((*(float *)(param_1 + 0x40) != local_34) || (*(float *)(param_1 + 0x44) != 0.0)) {
    *(float *)(param_1 + 0x40) = local_34;
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_1000200a0(param_1);
  }
  return;
}




void FUN_1001e5170(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  uVar3 = 0;
  plVar4 = param_2 + -800;
  do {
    plVar6 = plVar4 + 0x65f;
    plVar4 = plVar4 + 0x331;
    if (5 < uVar3) break;
    uVar3 = uVar3 + 1;
  } while ((int)*plVar6 != -1);
  if ((int)*plVar6 != -1) {
    plVar4 = param_2 + 0x11;
  }
  bVar2 = false;
  if ((*(float *)(plVar4 + 8) == (float)DAT_101dc1cb8) &&
     (bVar2 = false, !NAN(*(float *)((long)plVar4 + 0x44)) && !NAN(DAT_101dc1cb8._4_4_))) {
    bVar2 = *(float *)((long)plVar4 + 0x44) == DAT_101dc1cb8._4_4_;
  }
  if (!bVar2) {
    plVar4[8] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar4);
  }
  FUN_1001e46fc(param_1,plVar4,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                (undefined1)param_10);
  FUN_1001e4dd8(plVar4,1,param_10._1_1_);
  FUN_1006423ec(plVar4,1);
  (**(code **)(*param_2 + 0x78))(param_2,plVar4,1);
  lVar5 = 0;
  plVar6 = param_2;
  do {
    if ((plVar6 + 0x11 != plVar4) && ((int)plVar6[0x33f] != -1)) {
      FUN_100642324(plVar6 + 0x11);
      iVar1 = (int)plVar6[0x33f] + 1;
      *(int *)(plVar6 + 0x33f) = iVar1;
      if (iVar1 == 6) {
        FUN_1001e4dd8(plVar6 + 0x11,0,1);
        *(undefined4 *)(plVar6 + 0x33f) = 0xffffffff;
        *(uint *)((long)plVar6 + 0x64c) = *(uint *)((long)plVar6 + 0x64c) & 0xffffffef;
        *(uint *)((long)plVar6 + 0x12e4) = *(uint *)((long)plVar6 + 0x12e4) & 0xffffffef;
        *(uint *)((long)plVar6 + 0xcf4) = *(uint *)((long)plVar6 + 0xcf4) & 0xffffffef;
      }
      else {
        FUN_1001e5350(param_2,lVar5);
      }
    }
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 0x331;
  } while (lVar5 != 7);
  return;
}




void FUN_1001e5350(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 local_78;
  float local_74;
  
  local_78 = 0;
  fVar7 = 0.0;
  lVar5 = 7;
  fVar8 = 0.0;
  lVar6 = param_3;
  do {
    if (*(int *)(lVar6 + 0x19f8) != -1 &&
        *(int *)(lVar6 + 0x19f8) < *(int *)(param_3 + (param_4 & 0xffffffff) * 0x1988 + 0x19f8)) {
      (**(code **)(*(long *)(lVar6 + 0x88) + 0x48))();
      fVar8 = param_2 + 68.0 + fVar8;
      fVar7 = fVar7 + 0.01;
    }
    lVar1 = DAT_101dbd2f8;
    lVar6 = lVar6 + 0x1988;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  local_74 = fVar8;
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(fVar7,puVar4);
  uVar2 = FUN_1000b50a8();
  FUN_10063fb90(uVar2,&local_78);
  FUN_10063f0e8(0x3f400000,uVar2);
  FUN_10063f130(uVar2,FUN_1000917d4);
  lVar6 = param_3 + (param_4 & 0xffffffff) * 0x1988 + 0x88;
  FUN_100642324(lVar6);
  FUN_100642b7c(lVar6,puVar4);
  return;
}




void FUN_1001e54f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  operator_new(0xb340);
  DAT_101e43908 = FUN_1001e503c();
  lVar1 = DAT_101e43908 + 0x88;
  lVar2 = 7;
  do {
    FUN_1001e4650(lVar1);
    lVar1 = lVar1 + 0x1988;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x0001001e5560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,DAT_101e43908,1);
  return;
}




void FUN_1001e5564(void)

{
  int iVar1;
  
  iVar1 = FUN_100642d08(DAT_101e43908);
  if (iVar1 != 0) {
    FUN_1006423ec(DAT_101e43908,1);
  }
  if (DAT_101e43908 != (long *)0x0) {
    (**(code **)(*DAT_101e43908 + 8))();
  }
  DAT_101e43908 = (long *)0x0;
  return;
}




void FUN_1001e55b0(undefined8 param_1,undefined1 param_2)

{
  if (DAT_101e43908 != 0) {
    FUN_1001e5170(DAT_101e43908,param_1,0,0,0,0,0,0,param_2);
  }
  return;
}




void FUN_1001e5600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  if (DAT_101e43908 != 0) {
    FUN_1001e5170(DAT_101e43908,param_1,param_2,param_3,0,0,param_4,0,param_5);
  }
  return;
}




void FUN_1001e564c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  if (DAT_101e43908 != 0) {
    FUN_1001e5170(DAT_101e43908,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}




void FUN_1001e56a0(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  FUN_100642324(DAT_101e43908);
  lVar1 = DAT_101dbd2f8;
  if (param_1 == 0) {
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063f0f0(puVar4);
      *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5410;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_10063f0e8(0x3f000000,puVar4);
    FUN_100642b14(DAT_101e43908,puVar4);
    puVar4 = (ushort *)FUN_100047300();
  }
  else {
    uVar2 = FUN_10004767c();
    FUN_100642b14(DAT_101e43908,uVar2);
    lVar1 = DAT_101dbd2f8;
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063f0f0(puVar4);
      *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_10063f0e8(0x3f000000,puVar4);
  }
  FUN_100642b14(DAT_101e43908,puVar4);
  return;
}




bool FUN_1001e5828(void)

{
  return DAT_101e43908 != 0;
}




void thunk_FUN_1001e5908(void)

{
  FUN_1001e5908();
  return;
}




void FUN_1001e5840(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e5908();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e5854(undefined8 *param_1)

{
  long lVar1;
  long lVar3;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_101469aa8;
  puVar2 = param_1 + 0x1337;
  lVar3 = -0xb2b8;
  do {
    lVar1 = FUN_1001e5908(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x1988);
    lVar3 = lVar3 + 0x1988;
  } while (lVar3 != 0);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001e58ac(undefined8 *param_1)

{
  long lVar1;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_101469aa8;
  puVar2 = param_1 + 0x1337;
  lVar4 = -0xb2b8;
  do {
    lVar1 = FUN_1001e5908(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x1988);
    lVar4 = lVar4 + 0x1988;
  } while (lVar4 != 0);
  pvVar3 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar3);
  return;
}




void FUN_1001e5908(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001e5908_101469960;
  thunk_FUN_10064e2bc(param_1 + 0x317);
  param_1[0x2f9] = &PTR_FUN_1014a7108;
  param_1[0x310] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x313);
  FUN_10064e2bc(param_1 + 0x2f9);
  param_1[0x23b] = &PTR_FUN_10145f300;
  param_1[0x2d5] = &PTR_FUN_1014a7108;
  param_1[0x2ec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2ef);
  FUN_10064e2bc(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_1014a7108;
  param_1[0x2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d1);
  FUN_10064e2bc(param_1 + 0x2b7);
  param_1[0x299] = &PTR_FUN_1014a7108;
  param_1[0x2b0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b3);
  FUN_10064e2bc(param_1 + 0x299);
  FUN_10064221c(param_1 + 0x288);
  FUN_10003bec8(param_1 + 0x23b);
  param_1[0x17d] = &PTR_FUN_10145f300;
  param_1[0x217] = &PTR_FUN_1014a7108;
  param_1[0x22e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x231);
  FUN_10064e2bc(param_1 + 0x217);
  param_1[0x1f9] = &PTR_FUN_1014a7108;
  param_1[0x210] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x213);
  FUN_10064e2bc(param_1 + 0x1f9);
  param_1[0x1db] = &PTR_FUN_1014a7108;
  param_1[0x1f2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1f5);
  FUN_10064e2bc(param_1 + 0x1db);
  FUN_10064221c(param_1 + 0x1ca);
  FUN_10003bec8(param_1 + 0x17d);
  thunk_FUN_10064e2bc(param_1 + 0x166);
  param_1[0xa8] = &PTR_FUN_10145f300;
  param_1[0x142] = &PTR_FUN_1014a7108;
  param_1[0x159] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15c);
  FUN_10064e2bc(param_1 + 0x142);
  param_1[0x124] = &PTR_FUN_1014a7108;
  param_1[0x13b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13e);
  FUN_10064e2bc(param_1 + 0x124);
  param_1[0x106] = &PTR_FUN_1014a7108;
  param_1[0x11d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x120);
  FUN_10064e2bc(param_1 + 0x106);
  FUN_10064221c(param_1 + 0xf5);
  FUN_10003bec8(param_1 + 0xa8);
  thunk_FUN_100651068(param_1 + 0x82);
  param_1[100] = &PTR_FUN_1014a7108;
  param_1[0x7b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x7e);
  FUN_10064e2bc(param_1 + 100);
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001e5b6c(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




long * FUN_1001e5b98(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 *local_50;
  undefined4 local_48 [2];
  
  puVar2 = (undefined8 *)FUN_1001b4648();
  *puVar2 = &PTR_FUN_101469ba8;
  puVar2 = puVar2 + 0x4d;
  thunk_FUN_100650e64(puVar2);
  thunk_FUN_1001c397c(param_1 + 0x73);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  local_50 = &DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_50);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x57) == 0.5) && (bVar1 = false, !NAN(*(float *)((long)param_1 + 700))))
  {
    bVar1 = *(float *)((long)param_1 + 700) == 0.5;
  }
  if (!bVar1) {
    param_1[0x57] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar2);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x73,1);
  FUN_1001b495c(0xbf800000,param_1);
  local_48[0] = 0xff808080;
  FUN_100651460(puVar2,local_48);
  (**(code **)(*param_1 + 0x38))(0x41000000,0x41b00000,param_1);
  return param_1;
}




void FUN_1001e5ca4(long param_1,int param_2)

{
  undefined4 local_18 [2];
  
  if (param_2 != 0) {
    FUN_100651460(param_1 + 0x268,&DAT_10115a168);
    return;
  }
  local_18[0] = 0xff808080;
  FUN_100651460(param_1 + 0x268,local_18);
  return;
}




void FUN_1001e5ce4(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = param_1 + 0x268;
  FUN_1006513c0(lVar1);
  fVar3 = (float)FUN_100651184(lVar1);
  fVar2 = 48.0;
  FUN_100651184(lVar1);
  FUN_10064e47c(fVar3 + 48.0,fVar2 + 32.0,param_1);
  return;
}




void FUN_1001e5d44(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined8 local_58;
  
  plVar1 = (long *)(param_3 + 0x398);
  fVar4 = *(float *)(param_3 + 0x2a8);
  fVar3 = (float)FUN_10064259c(param_3 + 0x268);
  fVar4 = fVar4 + fVar3 * 0.5;
  fVar3 = *(float *)(param_3 + 0x2ac);
  FUN_10064259c(param_3 + 0x268);
  fVar3 = fVar3 - param_2 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x3d8) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0x3dc)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_3 + 0x3dc) == fVar3;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x3d8) = fVar4;
    *(float *)(param_3 + 0x3dc) = fVar3;
    FUN_1000200a0(plVar1);
  }
  local_58 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_58);
  return;
}




void FUN_1001e5dec(long param_1)

{
  if ((*(float *)(param_1 + 0x2b0) == 0.93) && (*(float *)(param_1 + 0x2b4) == 0.93)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0x3f6e147b3f6e147b;
  FUN_1000200a0(param_1 + 0x268);
  return;
}




void FUN_1001e5e2c(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 0x2b0) == 1.0) && (bVar1 = false, !NAN(*(float *)(param_1 + 0x2b4)))) {
    bVar1 = *(float *)(param_1 + 0x2b4) == 1.0;
  }
  if (!bVar1) {
    uVar2 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x2b0) = uVar2;
    FUN_1000200a0(param_1 + 0x268);
    return;
  }
  return;
}




long * FUN_1001e5e5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_1001e5ff0_101469d28;
  FUN_1006421a8(puVar3 + 0x17);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x46;
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_1001c9e20(param_1 + 100);
  param_1[0x4ee] = 0;
  param_1[0x4ed] = 0;
  param_1[0x4ef] = 0x44bb8000;
  *(undefined2 *)(param_1 + 0x4f0) = 0xffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 100,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar4 = *(uint *)((long)param_1 + 0x1c4);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1c4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
    uVar4 = *(uint *)((long)param_1 + 0x1c4);
  }
  *(uint *)((long)param_1 + 0x1c4) = uVar4 | 0x10;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_brushstroke_h_bot");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar4 = *(uint *)((long)param_1 + 0x2b4);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2b4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
    uVar4 = *(uint *)((long)param_1 + 0x2b4);
  }
  *(uint *)((long)param_1 + 0x2b4) = uVar4 | 0x10;
  *(undefined4 *)((long)param_1 + 0x277c) = DAT_101854a80;
  return param_1;
}




void FUN_1001e5ff0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001e5ff0_101469d28;
  FUN_1001e6098();
  if ((void *)param_1[0x4ee] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4ee]);
    param_1[0x4ee] = 0;
    param_1[0x4ed] = 0;
  }
  thunk_FUN_1001ca1a4(param_1 + 100);
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001e6098(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x2768);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x2770);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x2770);
        uVar2 = *(uint *)(param_1 + 0x2768);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x2770) != 0) {
    *(undefined4 *)(param_1 + 0x2768) = 0;
  }
  FUN_1001ca27c(param_1 + 800);
  return;
}




void thunk_FUN_1001e5ff0(void)

{
  FUN_1001e5ff0();
  return;
}




void FUN_1001e6104(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e5ff0();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1001e611c(void)

{
  FUN_1001e611c();
  return;
}




void FUN_1001e611c(long param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_8c;
  undefined1 auStack_88 [4];
  float local_84;
  
  uVar5 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar5,&local_84,auStack_88,&local_8c);
  iVar3 = FUN_100126c88();
  FUN_10064e47c(local_84 - local_8c,*(undefined4 *)(param_1 + 0x277c),param_1 + 0x140);
  FUN_10064e47c(local_84 - local_8c,0x41d00000,param_1 + 0x230);
  fVar10 = *(float *)(param_1 + 0x277c);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x270) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x274)) && !NAN(fVar10))) {
    bVar2 = *(float *)(param_1 + 0x274) == fVar10;
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x270) = 0;
    *(float *)(param_1 + 0x274) = fVar10;
    FUN_1000200a0(param_1 + 0x230);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x2768);
  if (*(uint *)(param_1 + 0x2768) != 0) {
    uVar9 = 0;
    fVar10 = DAT_101854a78 * 44.0;
    if (iVar3 == 0) {
      fVar10 = 44.0;
    }
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x2770) + uVar9 * 8);
      if ((*(byte *)(lVar7 + 0x84) >> 2 & 1) != 0) {
        ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
        if (iVar3 == 0) {
          ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
        }
        FUN_100651038(lVar7 + 0x268,*ppuVar1);
        lVar7 = *(long *)(*(long *)(param_1 + 0x2770) + uVar9 * 8);
        fVar11 = (float)FUN_100651184(lVar7 + 0x268);
        fVar12 = 48.0;
        FUN_100651184(*(long *)(*(long *)(param_1 + 0x2770) + uVar9 * 8) + 0x268);
        FUN_10064e47c(fVar11 + 48.0,fVar12 + 32.0,lVar7);
        plVar8 = *(long **)(*(long *)(param_1 + 0x2770) + uVar9 * 8);
        fVar12 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
        fVar12 = fVar10 + fVar12 * 0.5;
        fVar11 = *(float *)(param_1 + 0x277c) * 0.5;
        bVar2 = false;
        if ((*(float *)(plVar8 + 8) == fVar12) &&
           (bVar2 = false, !NAN(*(float *)((long)plVar8 + 0x44)) && !NAN(fVar11))) {
          bVar2 = *(float *)((long)plVar8 + 0x44) == fVar11;
        }
        if (!bVar2) {
          *(float *)(plVar8 + 8) = fVar12;
          *(float *)((long)plVar8 + 0x44) = fVar11;
          FUN_1000200a0(plVar8);
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x2770) + uVar9 * 8);
        *(uint *)(lVar7 + 0x84) = *(uint *)(lVar7 + 0x84) | 4;
        fVar12 = (float)(**(code **)(**(long **)(*(long *)(param_1 + 0x2770) + uVar9 * 8) + 0x48))()
        ;
        fVar10 = fVar10 + 16.0 + fVar12;
        uVar6 = (ulong)*(uint *)(param_1 + 0x2768);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  lVar7 = param_1 + 800;
  FUN_1001ca27c(lVar7);
  iVar3 = FUN_1001e6400(0,param_1);
  iVar4 = FUN_10018b61c(param_1 + 0x1a80);
  *(uint *)(param_1 + 0x3a4) =
       *(uint *)(param_1 + 0x3a4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3a4) & 3 | (uint)(iVar4 != 0) << 2;
  FUN_1001ca2a8(lVar7,(long)*(short *)(param_1 + 0x2780));
  if (0 < iVar3) {
    iVar4 = FUN_100126c88();
    fVar10 = DAT_101854a78 * 44.0;
    if (iVar4 == 0) {
      fVar10 = 44.0;
    }
    if (*(int *)(param_1 + 0x2768) != 0) {
      plVar8 = *(long **)(*(long *)(param_1 + 0x2770) + (ulong)(iVar3 - 1) * 8);
      fVar12 = *(float *)(plVar8 + 8);
      fVar10 = (float)(**(code **)(*plVar8 + 0x50))();
      fVar10 = fVar12 + 16.0 + fVar10 * 0.5;
    }
    fVar12 = (float)FUN_10064259c(lVar7);
    fVar10 = fVar10 + fVar12 * 0.5;
    fVar12 = *(float *)(param_1 + 0x277c) * 0.5;
    bVar2 = false;
    if ((*(float *)(param_1 + 0x360) == fVar10) &&
       (bVar2 = false, !NAN(*(float *)(param_1 + 0x364)) && !NAN(fVar12))) {
      bVar2 = *(float *)(param_1 + 0x364) == fVar12;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x360) = fVar10;
      *(float *)(param_1 + 0x364) = fVar12;
      FUN_1000200a0(lVar7);
    }
  }
  return;
}




ulong FUN_1001e6400(float param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
LAB_1001e6438:
  iVar2 = FUN_100126c88();
  uVar4 = *(uint *)(param_2 + 0x2768);
  if (uVar4 != 0) {
    uVar5 = 0;
    fVar6 = DAT_101854a78 * 44.0;
    if (iVar2 == 0) {
      fVar6 = 44.0;
    }
    do {
      plVar3 = *(long **)(*(long *)(param_2 + 0x2770) + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        fVar7 = (float)(**(code **)(*plVar3 + 0x48))();
        if (*(float *)(param_2 + 0x2778) - param_1 < fVar7 + fVar6) goto LAB_1001e64a0;
        fVar6 = fVar7 + fVar6 + 16.0;
        uVar4 = *(uint *)(param_2 + 0x2768);
      }
      uVar5 = uVar5 + 1;
      if (uVar4 <= uVar5) break;
    } while( true );
  }
  uVar5 = 0xffffffff;
  goto LAB_1001e64d8;
LAB_1001e64a0:
  fVar6 = (float)(**(code **)(**(long **)(*(long *)(param_2 + 0x2770) + uVar5 * 8) + 0x48))();
  FUN_1001ca344(param_2 + 800);
  bVar1 = fVar6 <= param_1;
  param_1 = fVar6;
  if (bVar1) {
LAB_1001e64d8:
    FUN_1001e6504(param_2,uVar5);
    return uVar5;
  }
  goto LAB_1001e6438;
}




void FUN_1001e6504(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((int)param_2 < 0) {
    param_2 = *(uint *)(param_1 + 0x4ed);
  }
  else {
    FUN_1001ca27c(param_1 + 100);
    if (param_2 < *(uint *)(param_1 + 0x4ed)) {
      uVar5 = (ulong)param_2;
      do {
        lVar4 = *(long *)(param_1[0x4ee] + uVar5 * 8);
        if (lVar4 != 0) {
          iVar1 = *(int *)(lVar4 + 0x84);
          uVar2 = FUN_100655b6c(lVar4 + 0x338);
          FUN_1001ca250(0x3dcccccd,param_1 + 100,(iVar1 << 1) >> 0x10,uVar2,&DAT_101d91198,1,1);
          iVar1 = FUN_100642d08(lVar4);
          if (iVar1 != 0) {
            FUN_1006423ec(*(undefined8 *)(param_1[0x4ee] + uVar5 * 8),1);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x4ed));
    }
  }
  if (0 < (int)param_2) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_1[0x4ee] + lVar4);
      if ((lVar3 != 0) && (uVar5 = FUN_100642d08(lVar3), (uVar5 & 1) == 0)) {
        (**(code **)(*param_1 + 0x78))(param_1,lVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((ulong)param_2 * 8 - lVar4 != 0);
  }
  return;
}




void FUN_1001e6634(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  long local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong uStack_50;
  undefined4 local_48;
  
  pvVar1 = operator_new(0xa38);
  local_78 = FUN_1001e5b98();
  uStack_50 = (ulong)param_2;
  local_48 = DAT_101d91884;
  uStack_60 = 0;
  pcStack_70 = FUN_1001e66fc;
  local_58 = 0;
  local_68 = param_4;
  FUN_10001554c(local_78 + 8,&pcStack_70);
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0x80000000 |
       *(uint *)((long)pvVar1 + 0x84) & 0x7fff | (param_2 & 0xffff) << 0xf;
  FUN_1001e6714(param_1 + 0x4ed,&local_78);
  (**(code **)(*param_1 + 0x78))(param_1,local_78,1);
  FUN_1001e5ce4(local_78,param_3);
  return;
}




void FUN_1001e66fc(long *param_1)

{
  short in_w4;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e6710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,(int)in_w4,&DAT_101d91198);
  return;
}




void FUN_1001e6714(uint *param_1,undefined8 *param_2)

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
    FUN_1001e741c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001e6794(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x2768);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      iVar4 = (int)uVar5;
      plVar2 = *(long **)(*(long *)(param_1 + 0x2770) + uVar5 * 8);
      if (plVar2 == (long *)0x0) {
        return;
      }
      if (param_2 == (*(int *)((long)plVar2 + 0x84) << 1) >> 0x10) {
        (**(code **)(*plVar2 + 8))();
        lVar1 = *(long *)(param_1 + 0x2770) + uVar5 * 8;
        FUN_1001e7498(param_1 + 0x2768,lVar1,lVar1 + 8);
        iVar4 = iVar4 + -1;
        uVar3 = *(uint *)(param_1 + 0x2768);
      }
      uVar5 = (ulong)(iVar4 + 1U);
    } while (iVar4 + 1U < uVar3);
  }
  return;
}




void FUN_1001e682c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(short *)(param_1 + 0x2780) = (short)param_2;
  if (*(int *)(param_1 + 0x2768) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x2770) + uVar2 * 8);
      FUN_1001e5ca4(lVar1,(int)param_2 == (*(int *)(lVar1 + 0x84) << 1) >> 0x10);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x2768));
  }
  FUN_1001ca2a8(param_1 + 800,param_2);
  FUN_1001e611c(param_1);
  return;
}




void FUN_1001e68a4(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x2768);
  if (*(uint *)(param_1 + 0x2768) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x2770) + uVar3 * 8);
      if (param_2 == (*(int *)(lVar2 + 0x84) << 1) >> 0x10) {
        FUN_1001c3fc8(lVar2 + 0x398,param_3);
        uVar1 = (ulong)*(uint *)(param_1 + 0x2768);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}




long * FUN_1001e6910(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_thunk_FUN_1001e6bb0_101469e70;
  FUN_10064e264(puVar4 + 0x17);
  plVar1 = param_1 + 0x2e;
  thunk_FUN_1006543ec(plVar1);
  FUN_1001e5e5c(param_1 + 0x62);
  FUN_10026cad0(param_1 + 0x553);
  plVar2 = param_1 + 0x566;
  thunk_FUN_100652c08(plVar2);
  *(undefined2 *)(param_1 + 0x584) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x2c24) = DAT_101dc1cb8;
  *(byte *)((long)param_1 + 0x2c2c) = *(byte *)((long)param_1 + 0x2c2c) & 0xf0 | 8;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x553,1);
  FUN_100642bd8(plVar1,param_1 + 0x62,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) | 0x10;
  FUN_100654488(plVar1,1);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  *(byte *)(param_1 + 0x581) = *(byte *)(param_1 + 0x581) | 2;
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_1 + 0x2bb4);
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x2bb4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_1000200a0(plVar2);
  }
  local_58 = FUN_100644a94("EVENT_SELECT_CONTEXT_MENU_ITEM");
  local_80 = FUN_1001e6b4c;
  plVar1 = param_1 + 1;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  local_58 = DAT_101d918d8;
  local_80 = FUN_1001e6b88;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  local_58 = DAT_101d918d4;
  local_80 = FUN_1001e6b9c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(plVar1,&local_80);
  return param_1;
}




void FUN_1001e6b4c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  
  sVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001001e6b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,(int)sVar1,&DAT_101d91198);
  return;
}




void FUN_1001e6b88(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,param_4,param_5);
  return;
}




void FUN_1001e6b9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1,param_4,param_5);
  return;
}




void FUN_1001e6bb0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001e6bb0_101469e70;
  param_1[0x566] = &PTR_FUN_1014a7108;
  param_1[0x57d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x580);
  FUN_10064e2bc(param_1 + 0x566);
  FUN_10064221c(param_1 + 0x553);
  FUN_1001e5ff0(param_1 + 0x62);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001e6bb0(void)

{
  FUN_1001e6bb0();
  return;
}




void FUN_1001e6c38(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e6bb0();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e6c4c(long param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = 0;
  }
  else {
    FUN_1001e6c94(param_1);
    bVar1 = 4;
  }
  *(byte *)(param_1 + 0x2c2c) = *(byte *)(param_1 + 0x2c2c) & 0xfb | bVar1;
  return;
}




void FUN_1001e6c94(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  
  uVar3 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar3,&local_3c,&local_40,&local_44);
  fVar4 = *(float *)(param_1 + 0x2c24) + local_44;
  FUN_10064e47c(local_3c - fVar4,local_40,param_1 + 0x170);
  if ((*(float *)(param_1 + 0x1b0) != fVar4) || (*(float *)(param_1 + 0x1b4) != 0.0)) {
    *(float *)(param_1 + 0x1b0) = fVar4;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    FUN_1000200a0(param_1 + 0x170);
  }
  lVar1 = param_1 + 0x2b30;
  FUN_10064e47c(local_3c - fVar4,0x43480000,lVar1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x2b70) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x2b74)) && !NAN(local_40))) {
    bVar2 = *(float *)(param_1 + 0x2b74) == local_40;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x2b70) = fVar4;
    *(float *)(param_1 + 0x2b74) = local_40;
    FUN_1000200a0(lVar1);
  }
  local_38 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x2b30) + 0x28))(lVar1,&local_38);
  FUN_10064e47c(local_3c,local_40,param_1 + 0x310);
  FUN_1001e611c(param_1 + 0x310);
  return;
}




void FUN_1001e6da4(void)

{
  return;
}




void FUN_1001e6da8(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if ((int)param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x2c2c) = *(byte *)(param_1 + 0x2c2c) & 0xfd | bVar1;
  if (*(short *)(param_1 + 0x2c20) != -1) {
    FUN_10026d150(param_1 + 0x2a98,(int)*(short *)(param_1 + 0x2c20),param_2);
    return;
  }
  return;
}




void FUN_1001e6df4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,1);
  return;
}




void FUN_1001e6e04(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,0);
  return;
}




void FUN_1001e6e14(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float local_2c;
  undefined1 auStack_28 [4];
  float local_24;
  
  uVar2 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar2,&local_24,auStack_28,&local_2c);
  iVar1 = FUN_100126c88();
  fVar3 = 1.5;
  if (iVar1 == 0) {
    fVar3 = 1.0;
  }
  *(float *)(param_1 + 0x2a88) = (local_24 - local_2c) + (DAT_101854a7c * -0.5) / fVar3;
  FUN_1001e6c94(param_1);
  return;
}




void FUN_1001e6e9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_1001e6634(param_1 + 0x310,param_2,param_3,param_1);
  if (param_4 != 0) {
    FUN_10026cb00(param_1 + 0x2a98,param_4,param_2);
    return;
  }
  return;
}




void FUN_1001e6ef8(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x2a78);
  if (*(uint *)(param_1 + 0x2a78) != 0) {
    plVar2 = *(long **)(param_1 + 0x2a80);
    do {
      if (*plVar2 == 0) break;
      if (param_2 == (*(int *)(*plVar2 + 0x84) << 1) >> 0x10) {
        FUN_1001e6794(param_1 + 0x310);
        break;
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  iVar1 = FUN_100642d08(param_3);
  if (iVar1 == 0) {
    return;
  }
  FUN_1006423ec(param_3,1);
  return;
}




void FUN_1001e6f74(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x2c2c) & 1) == 0) {
    *(short *)(param_1 + 0x2c20) = (short)param_2;
    FUN_10026cb64(0x3e4ccccd,param_1 + 0x2a98,param_2,1,1);
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    if (uVar1 != 0) {
      FUN_10026d184(param_1 + 0x2a98,param_3);
    }
    FUN_1001e682c(param_1 + 0x310,param_2);
    return;
  }
  return;
}




void FUN_1001e7014(long param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 0x2c2c) = *(byte *)(param_1 + 0x2c2c) & 0xfe | (byte)param_2;
  if (*(short *)(param_1 + 0x2c20) != -1) {
    FUN_10026d11c(param_1 + 0x2a98,(int)*(short *)(param_1 + 0x2c20),param_2);
    return;
  }
  return;
}




void FUN_1001e7054(undefined8 param_1,long param_2,long param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ushort uVar6;
  float fVar7;
  undefined1 auStack_5c [4];
  float local_58;
  undefined1 auStack_54 [4];
  
  uVar5 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar5,auStack_54,&local_58,auStack_5c);
  if (param_5 == 0) {
    if (param_4 != (*(uint *)(param_2 + 0x84) & 4) >> 2) {
      lVar3 = param_2;
      if (param_4 == 0) {
        lVar3 = param_3;
      }
      uVar5 = FUN_1006408f4(0,0,0x3f4ccccd,FUN_1000917d4);
      FUN_100642324(lVar3);
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) | 4;
      FUN_100642b14(lVar3,uVar5);
      if (param_4 == 0) {
        param_3 = param_2;
      }
      if (param_4 == 0) {
        local_58 = -local_58;
      }
      uVar5 = FUN_1006408f4(0,local_58,0x3f4ccccd,FUN_1000917d4);
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
        FUN_10063ee9c(puVar1);
        *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_100642324(param_3);
      FUN_100642b7c(param_3,uVar5);
    }
  }
  else {
    bVar4 = param_4 == 0;
    uVar2 = 4;
    if (bVar4) {
      uVar2 = 0;
    }
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb | uVar2;
    uVar2 = 0;
    if (bVar4) {
      uVar2 = 4;
    }
    *(uint *)(param_3 + 0x84) = *(uint *)(param_3 + 0x84) & 0xfffffffb | uVar2;
    fVar7 = 0.0;
    if (bVar4) {
      fVar7 = -local_58;
    }
    if (*(float *)(param_2 + 0x44) != fVar7) {
      *(float *)(param_2 + 0x44) = fVar7;
      FUN_1000200a0(param_2);
    }
    if (param_4 == 0) {
      local_58 = 0.0;
    }
    if (*(float *)(param_3 + 0x44) != local_58) {
      *(float *)(param_3 + 0x44) = local_58;
      FUN_1000200a0(param_3);
    }
  }
  return;
}




void FUN_1001e7260(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x2c24) = *param_2;
  FUN_1001e6c94();
  return;
}




void FUN_1001e7270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101469ba8;
  param_1[0x73] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x13f);
  thunk_FUN_100651068(param_1 + 0x118);
  thunk_FUN_100651068(param_1 + 0xf2);
  thunk_FUN_100651068(param_1 + 0xcc);
  param_1[0xae] = &PTR_FUN_1014a7108;
  param_1[0xc5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xae);
  param_1[0x84] = &PTR_FUN_1014a6db0;
  param_1[0x9b] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9e);
  FUN_10064e2bc(param_1 + 0x84);
  FUN_10064221c(param_1 + 0x73);
  thunk_FUN_100651068(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void FUN_1001e733c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101469ba8;
  param_1[0x73] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x13f);
  thunk_FUN_100651068(param_1 + 0x118);
  thunk_FUN_100651068(param_1 + 0xf2);
  thunk_FUN_100651068(param_1 + 0xcc);
  param_1[0xae] = &PTR_FUN_1014a7108;
  param_1[0xc5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 200);
  FUN_10064e2bc(param_1 + 0xae);
  param_1[0x84] = &PTR_FUN_1014a6db0;
  param_1[0x9b] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9e);
  FUN_10064e2bc(param_1 + 0x84);
  FUN_10064221c(param_1 + 0x73);
  thunk_FUN_100651068(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001e740c(void)

{
  return;
}




void FUN_1001e7410(void)

{
  return;
}




undefined8 FUN_1001e7414(void)

{
  return 1;
}




void FUN_1001e741c(uint *param_1,uint param_2)

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




void FUN_1001e7498(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




undefined8 FUN_1001e7504(void)

{
  return DAT_101e43910;
}




void FUN_1001e7510(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x90);
    do {
      plVar5 = (long *)*puVar4;
      if ((int)plVar5[0x1b] == param_3) goto LAB_1001e754c;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  plVar5 = (long *)0x0;
LAB_1001e754c:
  iVar1 = (**(code **)(*(long *)plVar5[0x19] + 0x170))();
  uVar3 = 5;
  if (iVar1 != 0) {
    uVar3 = 1;
  }
  (**(code **)(*plVar5 + 0x138))(0x3eb33333,plVar5,param_2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x0001001e75a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar5[0x19] + 0x148))((long *)plVar5[0x19],param_2);
  return;
}




void FUN_1001e75a4(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0) {
    *(int *)(param_1 + 0xac) = param_2;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x90);
    do {
      if (*(int *)(*plVar3 + 0xd8) == *(int *)(param_1 + 0xac)) {
        plVar3 = *(long **)(*plVar3 + 200);
        (**(code **)(*plVar3 + 0x158))(plVar3,0);
        uVar1 = *(uint *)(param_1 + 0x88);
        break;
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(int *)(param_1 + 0xac) = param_2;
    if (uVar1 != 0) {
      plVar3 = *(long **)(param_1 + 0x90);
      uVar2 = (ulong)uVar1;
      do {
        lVar4 = *plVar3;
        if (*(int *)(lVar4 + 0xd8) == param_2) {
          *(uint *)(*(long *)(lVar4 + 200) + 0x84) = *(uint *)(*(long *)(lVar4 + 200) + 0x84) | 4;
                    /* WARNING: Could not recover jumptable at 0x0001001e766c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(lVar4 + 200) + 0x158))(*(long **)(lVar4 + 200),1);
          return;
        }
        plVar3 = plVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}




undefined4 FUN_1001e7670(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}




void FUN_1001e7678(long param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x90);
  do {
    lVar4 = *plVar3;
    if (*(int *)(lVar4 + 0xd8) == param_2) {
      uVar1 = (ulong)*(uint *)(param_1 + 0x98);
      if (*(uint *)(param_1 + 0x98) == 0) {
        return;
      }
      piVar2 = *(int **)(param_1 + 0xa0);
      do {
        if (*piVar2 == *(int *)(lVar4 + 0xd0)) {
          while( true ) {
            if (piVar2[1] == param_2) {
              return;
            }
            if (piVar2[1] == *piVar2) break;
            FUN_1001e7744(param_1);
            uVar1 = (ulong)*(uint *)(param_1 + 0x98);
            if (*(uint *)(param_1 + 0x98) == 0) {
              return;
            }
            piVar2 = *(int **)(param_1 + 0xa0);
            while (*piVar2 != *(int *)(lVar4 + 0xd0)) {
              piVar2 = piVar2 + 2;
              uVar1 = uVar1 - 1;
              if (uVar1 == 0) {
                return;
              }
            }
          }
          return;
        }
        piVar2 = piVar2 + 2;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      return;
    }
    plVar3 = plVar3 + 1;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}




void FUN_1001e7744(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  
  if (param_2 == -1) {
    if (*(int *)(param_1 + 0xa8) == -1) {
      return;
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x98);
    if (*(uint *)(param_1 + 0x98) != 0) {
      piVar5 = *(int **)(param_1 + 0xa0);
      do {
        if (*piVar5 == *(int *)(param_1 + 0xa8)) goto LAB_1001e77b8;
        piVar5 = piVar5 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    uVar3 = (ulong)*(uint *)(param_1 + 0x98);
    if (*(uint *)(param_1 + 0x98) != 0) {
      piVar5 = *(int **)(param_1 + 0xa0);
      do {
        if (*piVar5 == param_2) goto LAB_1001e77b8;
        piVar5 = piVar5 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  piVar5 = (int *)0x0;
LAB_1001e77b8:
  iVar1 = piVar5[1];
  plVar4 = *(long **)(param_1 + 0x90);
  do {
    lVar6 = *plVar4;
    plVar4 = plVar4 + 1;
  } while (*(int *)(lVar6 + 0xd8) != iVar1);
  lVar6 = *(long *)(lVar6 + 0x20);
  if (lVar6 == param_1) {
    if (lVar6 != 0) {
      if (param_2 != -1) {
        return;
      }
      FUN_1001e7848(param_1);
      return;
    }
  }
  else {
    iVar2 = *(int *)(lVar6 + 0xd8);
    piVar5[1] = iVar2;
    if ((param_2 == -1) || (*(int *)(param_1 + 0xa8) == param_2)) {
      FUN_1001e75a4(param_1,iVar2);
    }
  }
  FUN_1001e7510(param_1,0,iVar1);
  return;
}




void FUN_1001e7848(long param_1)

{
  if (*(int *)(param_1 + 0xa8) != -1) {
    FUN_1001e7510(param_1,0);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  FUN_1001e75a4(param_1,0xffffffff);
  return;
}




long FUN_1001e788c(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_100345b94();
  plVar3 = (long *)FUN_10034c450(uVar2,"*LocalizedUISounds*");
  puVar4 = *(undefined8 **)*plVar3;
  plVar3 = (long *)*plVar3;
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _strcmp((char *)*puVar4,param_1);
    if (iVar1 == 0) break;
    puVar4 = (undefined8 *)plVar3[1];
    plVar3 = plVar3 + 1;
  }
  return *plVar3;
}




undefined8 FUN_1001e78ec(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _strcmp((char *)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)param_1[1];
    param_1 = param_1 + 1;
  }
  return *(undefined8 *)(*param_1 + 8);
}




void FUN_1001e793c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  iVar1 = FUN_100126d70();
  if (iVar1 == 6) {
    pcVar3 = "ja";
  }
  else if (iVar1 == 0xf) {
    pcVar3 = "zh";
  }
  else {
    if (iVar1 != 8) goto LAB_1001e79a0;
    pcVar3 = "ko";
  }
  lVar2 = FUN_1001e78ec(param_1,pcVar3);
  if (lVar2 != 0) {
    return;
  }
LAB_1001e79a0:
  FUN_1001e78ec(param_1,"en");
  return;
}




long FUN_1001e79b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = FUN_10002f32c();
  if (iVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_10002f320();
    lVar3 = FUN_1010a0298(uVar2,DAT_10184dd48);
    if (lVar3 != 0) {
      FUN_10004b038(param_1,lVar3,param_2,param_3,param_4,0);
      FUN_10004b148(lVar3);
    }
  }
  return lVar3;
}




void FUN_1001e7a40(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1001e788c();
  lVar2 = FUN_1001e793c(*(undefined8 *)(lVar2 + 8));
  if ((lVar2 != 0) && (iVar1 = FUN_1004d2524(), iVar1 != 0)) {
    FUN_1001e79b8(0x3f800000,lVar2,0,0);
    return;
  }
  return;
}




void FUN_1001e7a90(void)

{
  if ((DAT_10184dd50 & 1) == 0) {
    DAT_10184dd48 = DAT_101872e38;
    DAT_10184dd50 = 1;
  }
  return;
}




void FUN_1001e7abc(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_1001e7ac4(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    lVar2 = DAT_101d23788;
    if ((DAT_101d23788 != 0) && (*(int *)(DAT_101d23788 + 0x1134) != iVar1)) {
      lVar2 = 0;
    }
    if (((DAT_101d23780 != 0) && (lVar3 = DAT_101d23780, *(int *)(DAT_101d23780 + 0x1134) == iVar1))
       || (lVar3 = lVar2, lVar2 != 0)) {
      *(undefined4 *)(lVar3 + 0x1134) = 0;
      *param_1 = 0;
      FUN_100536b20(lVar3);
      FUN_100536b78(lVar3);
      return;
    }
  }
  return;
}




int * FUN_1001e7b3c(int *param_1)

{
  if (*param_1 != 0) {
    FUN_1001e7ac4(param_1);
  }
  return param_1;
}




void FUN_1001e7b6c(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1140);
  DAT_101d23780 = (long *)thunk_FUN_1001cc2f0();
  (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  (**(code **)(*DAT_101d23780 + 0x178))();
  pvVar1 = operator_new(0x1230);
  DAT_101d23788 = (long *)FUN_100189eb4();
  (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0001001e7c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101d23788 + 0x178))();
  return;
}




void FUN_1001e7c0c(void)

{
  int iVar1;
  
  FUN_100536b78(DAT_101d23780);
  *(undefined4 *)((long)DAT_101d23780 + 0x1134) = 0;
  iVar1 = FUN_100642d08();
  if (iVar1 != 0) {
    FUN_1006423ec(DAT_101d23780,1);
  }
  if (DAT_101d23780 != (long *)0x0) {
    (**(code **)(*DAT_101d23780 + 8))();
  }
  DAT_101d23780 = (long *)0x0;
  FUN_100536b78(DAT_101d23788);
  *(undefined4 *)((long)DAT_101d23788 + 0x1134) = 0;
  iVar1 = FUN_100642d08();
  if (iVar1 != 0) {
    FUN_1006423ec(DAT_101d23788,1);
  }
  if (DAT_101d23788 != (long *)0x0) {
    (**(code **)(*DAT_101d23788 + 8))();
  }
  DAT_101d23788 = (long *)0x0;
  return;
}




void FUN_1001e7ca4(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = &DAT_101d23788;
  if (param_6 == 0) {
    plVar1 = &DAT_101d23780;
  }
  lVar3 = *plVar1;
  uVar2 = FUN_100536bb4(lVar3);
  if ((uVar2 & 1) != 0) {
    *param_1 = 0;
    return;
  }
  DAT_101854ab8 = DAT_101854ab8 + 1;
  *param_1 = DAT_101854ab8;
  FUN_1001cc8a4(lVar3,param_2,param_3,param_4,param_5,param_7,param_8,param_12);
  FUN_100536c54(lVar3,param_9,param_10,param_11);
  *(int *)(lVar3 + 0x1134) = *param_1;
  FUN_100536b40(lVar3);
  return;
}




undefined1  [16] FUN_1001e7db0(int param_1)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  plVar1 = &DAT_101d23788;
  if (param_1 == 0) {
    plVar1 = &DAT_101d23780;
  }
  if ((long *)*plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001e7dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar1 + 0x188))();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




void FUN_1001e7de4(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_101d23790 != 0) && (iVar1 = FUN_10011a354(0), iVar1 != 0)) &&
     (lVar2 = FUN_100532f64(DAT_101d23790), lVar2 != 0)) {
    FUN_100532d78(DAT_101d23790,lVar2);
    return;
  }
  return;
}




void FUN_1001e7e34(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  local_20 = 0;
  pcStack_18 = thunk_FUN_1001e7de4;
  DAT_101d23798 = param_1;
  FUN_100643618(0xbf800000,&local_20,0,1);
  return;
}




void FUN_1001e7e74(void)

{
  undefined8 local_20;
  code *pcStack_18;
  
  DAT_101d23790 = 0;
  DAT_101d23798 = 0;
  local_20 = 0;
  pcStack_18 = thunk_FUN_1001e7de4;
  FUN_100643a8c(&local_20);
  return;
}




void FUN_1001e7eb0(long param_1)

{
  ulong uVar1;
  
  if (DAT_101d23790 != 0) {
    *(uint *)(DAT_101d23790 + 0x84) = *(uint *)(DAT_101d23790 + 0x84) & 0xfffffffb;
  }
  DAT_101d23790 = param_1;
  if (param_1 != 0) {
    uVar1 = FUN_100642d08();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*DAT_101d23798 + 0x78))(DAT_101d23798,DAT_101d23790,1);
    }
    *(uint *)(DAT_101d23790 + 0x84) = *(uint *)(DAT_101d23790 + 0x84) | 4;
  }
  return;
}




bool FUN_1001e7f1c(void)

{
  return DAT_101d23790 != 0;
}




void FUN_1001e7f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (DAT_101d23790 != 0) {
    FUN_100532ab4(DAT_101d23790,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}




void FUN_1001e7f58(undefined8 param_1)

{
  if (DAT_101d23790 != 0) {
    FUN_100532af8(DAT_101d23790,param_1);
    return;
  }
  return;
}




void FUN_1001e7f70(undefined8 param_1)

{
  if (DAT_101d23790 != 0) {
    FUN_100532f2c(DAT_101d23790,param_1);
    return;
  }
  return;
}




void FUN_1001e7f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (DAT_101d23790 != 0) {
    FUN_100532970(DAT_101d23790,param_1,param_2,param_3,param_4,param_5);
    return;
  }
  return;
}




bool FUN_1001e7fb0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (DAT_101d23790 != 0) {
    lVar2 = FUN_100532ca4(DAT_101d23790,param_1);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}




void thunk_FUN_1001e7de4(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_101d23790 != 0) && (iVar1 = FUN_10011a354(0), iVar1 != 0)) &&
     (lVar2 = FUN_100532f64(DAT_101d23790), lVar2 != 0)) {
    FUN_100532d78(DAT_101d23790,lVar2);
    return;
  }
  return;
}




void FUN_1001e7fe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10014f4a0();
  *puVar1 = &PTR_FUN_10146a010;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  return;
}




void FUN_1001e83d8(long param_1,string *param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  std::string::operator=((string *)(param_1 + 0x18),param_2);
  uVar1 = FUN_10015d3ec();
  FUN_10001549c(local_38,"");
  FUN_1001663b8(uVar1,param_2,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1001e843c(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  undefined8 local_a8 [2];
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined8 local_4c;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = 0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158308);
  local_4c = 0xffa3781effa4781e;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,1);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}




void FUN_1001e8538(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e8540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x388))();
  return;
}




void FUN_1001e8544(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e854c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x390))();
  return;
}




void FUN_1001e8550(void)

{
  FUN_10002f320();
  FUN_10003190c();
  return;
}




void FUN_1001e8564(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146a010;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_10014f51c(param_1);
  return;
}




void FUN_1001e85a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10146a010;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001e85e0(void)

{
  return;
}




undefined8 * FUN_1001e85e4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146a7c8;
  operator_new(0xb88);
  lVar1 = thunk_FUN_10028d14c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001e8844_10146a3b8;
  param_1[2] = &PTR_FUN_10146a3f8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_10146a790;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001e867c,0);
  FUN_1001e867c(param_1);
  return param_1;
}




void thunk_FUN_1001e867c(void)

{
  FUN_1001e867c();
  return;
}




void FUN_1001e867c(long param_1)

{
  undefined8 ****ppppuVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 ***local_88 [2];
  char local_71;
  ulong local_70;
  long local_68;
  
  FUN_10028d4c8(*(undefined8 *)(param_1 + 8));
  local_70 = 0;
  local_68 = 0;
  FUN_100136cac(&local_70);
  if ((int)local_70 != 0) {
    uVar8 = 0;
    do {
      lVar7 = local_68;
      FUN_10001549c(local_88,"card_image_");
      bVar2 = *(byte *)(lVar7 + uVar8 * 0xe8 + 0xa7);
      if ((char)bVar2 < '\0') {
        lVar5 = *(long *)(lVar7 + uVar8 * 0xe8 + 0x98);
        if (lVar5 != 0 && 0x12 < (uint)lVar5) goto LAB_1001e8714;
      }
      else if (0x12 < bVar2) {
LAB_1001e8714:
        std::string::push_back((char)local_88);
        lVar11 = lVar7 + uVar8 * 0xe8;
        plVar12 = (long *)(lVar11 + 0x10);
        lVar5 = *plVar12;
        puVar9 = (uint *)(lVar11 + 8);
        if (*puVar9 != 0) {
          lVar11 = 0;
          uVar10 = 1;
          lVar6 = lVar5;
          while( true ) {
            uVar3 = FUN_1000e7cb0(lVar6 + lVar11 + 0x30);
            uVar4 = FUN_1000e7cb0(lVar5 + 0x30);
            if (uVar4 < uVar3) {
              lVar5 = *plVar12 + lVar11;
            }
            if (*puVar9 <= uVar10) break;
            lVar6 = *plVar12;
            lVar11 = lVar11 + 0xa0;
            uVar10 = uVar10 + 1;
          }
        }
        lVar7 = lVar7 + uVar8 * 0xe8;
        ppppuVar1 = (undefined8 ****)local_88[0];
        if (-1 < local_71) {
          ppppuVar1 = local_88;
        }
        FUN_10028d5a4(*(undefined8 *)(param_1 + 8),lVar7 + 0xa8,lVar7 + 0x18,ppppuVar1,0,0,0,lVar5);
      }
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (local_70 & 0xffffffff));
  }
  FUN_1001e8970(param_1,param_1 + 0x30);
  FUN_100144b1c(&local_70,1);
  return;
}




undefined8 * thunk_FUN_1001e85e4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146a7c8;
  operator_new(0xb88);
  lVar1 = thunk_FUN_10028d14c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001e8844_10146a3b8;
  param_1[2] = &PTR_FUN_10146a3f8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_10146a790;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001e867c,0);
  FUN_1001e867c(param_1);
  return param_1;
}




undefined8 * FUN_1001e8844(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001e8844_10146a3b8;
  param_1[2] = &PTR_FUN_10146a3f8;
  param_1[5] = &PTR_FUN_10146a790;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  FUN_100155eac(param_1 + 6,1);
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146a7c8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001e8844(void)

{
  FUN_1001e8844();
  return;
}




void FUN_1001e88d8(long param_1)

{
  FUN_1001e8844(param_1 + -0x10);
  return;
}




void FUN_1001e88e0(long param_1)

{
  FUN_1001e8844(param_1 + -0x28);
  return;
}




void FUN_1001e88e8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e8844();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e88fc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e8844(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001e8914(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e8844(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001e892c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001e8934(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_1001e893c(long param_1,long param_2)

{
  FUN_1001e8c28(param_1 + 0x30,param_2 + 0x28);
  FUN_1001e8970(param_1,param_1 + 0x30);
  return;
}




void FUN_1001e8970(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (0 < *param_2) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(long *)(param_2 + 2) + lVar6;
      lVar1 = *(long *)(lVar4 + 0x20);
      lVar2 = *(long *)(lVar4 + 0x28);
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      uVar3 = *(undefined4 *)(lVar4 + 0x30);
      lVar4 = FUN_1004f1a74(0);
      FUN_10028d98c(*(undefined8 *)(param_1 + 8),*(long *)(param_2 + 2) + lVar6,
                    (lVar1 - lVar2) + lVar4,lVar1,uVar5,uVar3);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar7 < *param_2);
  }
  return;
}




void FUN_1001e8a10(long param_1,long param_2)

{
  FUN_1001e8c28(param_1 + 0x20,param_2 + 0x28);
  FUN_1001e8970(param_1 + -0x10,param_1 + 0x20);
  return;
}




void FUN_1001e8a44(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_1004f1680(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_10028daec(*(undefined8 *)(param_1 + 8),param_2 + 0x48);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_2 + 0x28);
      if (iVar1 == -0x18) {
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar3 = "MENU_DIALOG_SKU_UNAVAILABLE";
      }
      else if (iVar1 == -0x16) {
        uVar4 = FUN_1004e0150("MENU_DIALOG_BOOST_CANT_AFFORD_TITLE",0);
        pcVar3 = "MENU_DIALOG_BOOST_CANT_AFFORD";
      }
      else {
        if (iVar1 == 0) {
          FUN_10028dc18(*(undefined8 *)(param_1 + 8),param_2 + 0x48);
          lVar2 = FUN_10015d3ec();
          FUN_100169cec(lVar2 + 0x18);
          return;
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar3 = "MENU_DIALOG_PURCHASE_FAILED";
      }
      uVar5 = FUN_1004e0150(pcVar3,0);
      uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
      return;
    }
  }
  return;
}




void FUN_1001e8b64(long param_1)

{
  FUN_1001e8a44(param_1 + -0x10);
  return;
}




void FUN_1001e8b6c(void)

{
  FUN_1004e0150("INVENTORY_BOOSTS_TAB_TITLE",0);
  return;
}




char * FUN_1001e8b7c(void)

{
  return "";
}




void FUN_1001e8b88(void)

{
  FUN_1004e0150("INVENTORY_BOOSTS_TAB_TITLE",0);
  return;
}




void FUN_1001e8b98(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_1001e8ba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146a7c8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001e8be8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146a7c8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




uint * FUN_1001e8c28(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    FUN_100155eac(param_1,1);
    puVar5 = (uint *)FUN_1001559a4(param_1,*param_2);
    uVar4 = *param_2;
    uVar7 = 0;
    if (uVar4 != 0) {
      lVar11 = 0;
      lVar12 = *(long *)(param_2 + 2);
      lVar13 = *(long *)(param_1 + 2);
      do {
        puVar9 = (undefined8 *)(lVar12 + lVar11);
        if ((char)*(byte *)((long)puVar9 + 0x17) < '\0') {
          uVar8 = puVar9[1];
          if (0xffffffffffffffef < uVar8) {
            puVar5 = (uint *)FUN_1001e8b98();
            *(undefined ***)puVar5 = &PTR____cxa_pure_virtual_10146a810;
            operator_new(0x41e0);
            lVar11 = thunk_FUN_10028f5d0();
            *(uint **)(lVar11 + 0xb8) = puVar5;
            *(undefined ***)puVar5 = &PTR_FUN_10146a7e8;
            *(long *)(puVar5 + 2) = lVar11;
            FUN_10003330c(puVar5 + 4,&DAT_101d91198);
            puVar5[10] = 0;
            puVar5[0xb] = 0;
            puVar5[0xc] = 0;
            puVar5[0xd] = 0;
            FUN_1004e313c(puVar5 + 0xe);
            puVar5[0x12] = 0;
            puVar5[0x13] = 0;
            puVar5[0x14] = 100;
            *(undefined1 *)(puVar5 + 0x15) = 0;
            return puVar5;
          }
          puVar9 = (undefined8 *)*puVar9;
        }
        else {
          uVar8 = (ulong)*(byte *)((long)puVar9 + 0x17);
        }
        if (uVar8 < 0x17) {
          pvVar6 = (void *)(lVar13 + lVar11);
          *(char *)((long)pvVar6 + 0x17) = (char)uVar8;
          if (uVar8 != 0) goto LAB_1001e8ce4;
        }
        else {
          uVar10 = uVar8 + 0x10 & 0xfffffffffffffff0;
          pvVar6 = operator_new(uVar10);
          puVar1 = (undefined8 *)(lVar13 + lVar11);
          puVar1[1] = uVar8;
          puVar1[2] = uVar10 | 0x8000000000000000;
          *puVar1 = pvVar6;
LAB_1001e8ce4:
          puVar5 = _memcpy(pvVar6,puVar9,uVar8);
        }
        *(undefined1 *)((long)pvVar6 + uVar8) = 0;
        lVar2 = lVar13 + lVar11;
        lVar3 = lVar12 + lVar11;
        uVar15 = *(undefined8 *)(lVar3 + 0x20);
        uVar14 = *(undefined8 *)(lVar3 + 0x18);
        uVar16 = *(undefined8 *)(lVar3 + 0x28);
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
        *(undefined8 *)(lVar2 + 0x28) = uVar16;
        *(undefined8 *)(lVar2 + 0x20) = uVar15;
        *(undefined8 *)(lVar2 + 0x18) = uVar14;
        lVar11 = lVar11 + 0x38;
      } while ((ulong)uVar4 * 0x38 - lVar11 != 0);
      uVar7 = *param_2;
    }
    *param_1 = uVar7;
  }
  return puVar5;
}




undefined8 * FUN_1001e8d44(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146a810;
  operator_new(0x41e0);
  lVar1 = thunk_FUN_10028f5d0();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_10146a7e8;
  param_1[1] = lVar1;
  FUN_10003330c(param_1 + 2,&DAT_101d91198);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1004e313c(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 100;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  return param_1;
}




undefined8 * FUN_1001e8db8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146a810;
  operator_new(0x41e0);
  lVar1 = thunk_FUN_10028f5d0();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_10146a7e8;
  param_1[1] = lVar1;
  FUN_10003330c(param_1 + 2,&DAT_101d91198);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1004e313c(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 100;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  return param_1;
}




void FUN_1001e8dbc(long param_1,string *param_2)

{
  string *this;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    this = (string *)(param_1 + 0x10);
    std::string::operator=(this,param_2);
    if (*(char *)(param_1 + 0x27) < '\0') {
      this = *(string **)this;
    }
    if (DAT_101d230a8 != 0) {
      FUN_1001e9214(DAT_101d230a8,this,param_1);
    }
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}




undefined8 * FUN_1001e8e1c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_10146a7e8;
  if (*(char *)((long)param_1 + 0x54) != '\0') {
    plVar1 = param_1 + 2;
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_10010a820(plVar1,param_1);
  }
  puVar4 = (uint *)(param_1 + 5);
  uVar3 = *puVar4;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[6] + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(param_1[6] + uVar5 * 8) = 0;
        uVar3 = *(uint *)(param_1 + 5);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  pvVar2 = (void *)param_1[6];
  if (pvVar2 != (void *)0x0) {
    *puVar4 = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
    pvVar2 = (void *)param_1[6];
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[6] = 0;
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_10146a810;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001e8e1c(void)

{
  FUN_1001e8e1c();
  return;
}




void FUN_1001e8f18(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e8e1c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e8f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e8f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}




void FUN_1001e8f3c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_10010a728(plVar1,param_2,0);
  return;
}




void FUN_1001e8f58(undefined8 param_1,undefined8 param_2)

{
  FUN_10010a660(param_2);
  return;
}




void FUN_1001e8f60(undefined8 param_1,undefined8 param_2)

{
  FUN_10010a678(param_2);
  return;
}




void FUN_1001e8f68(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  void *pvVar6;
  int extraout_w8;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  
  plVar3 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar3 = (long *)*plVar3;
  }
  piVar4 = (int *)FUN_10010a7ec(plVar3);
  iVar2 = extraout_w8;
  if ((piVar4 != (int *)0x0) && (iVar2 = *piVar4, iVar2 == 0)) {
    return;
  }
  uVar9 = (ulong)(iVar2 - 1);
  lVar10 = *(long *)(piVar4 + 2);
  lVar7 = lVar10 + uVar9 * 0x88;
  uVar5 = FUN_1004e3624(lVar7);
  plVar3 = (long *)(lVar7 + 0x50);
  if (*(char *)(lVar7 + 0x67) < '\0') {
    if (*(long *)(lVar10 + uVar9 * 0x88 + 0x58) == 0) goto LAB_1001e8ffc;
    plVar3 = (long *)*plVar3;
  }
  else if (*(char *)(lVar7 + 0x67) == '\0') {
LAB_1001e8ffc:
    dVar11 = 0.0;
    goto LAB_1001e9000;
  }
  dVar11 = (double)FUN_1004d2f54(plVar3);
LAB_1001e9000:
  thunk_FUN_1004e439c(&uStack_60,lVar7);
  iVar2 = FUN_1004e3654(param_1 + 0x38,&uStack_60);
  puVar8 = &uStack_60;
  if (iVar2 != 0) {
    puVar8 = &uStack_60;
    if (dVar11 < *(double *)(param_1 + 0x48) + 300.0) {
      puVar8 = &DAT_101d91650;
    }
  }
  FUN_1000153b4(param_1 + 0x38,&uStack_60);
  *(double *)(param_1 + 0x48) = dVar11;
  FUN_1000153b4(&uStack_60,puVar8);
  pvVar6 = operator_new(0x318);
  lVar10 = lVar10 + uVar9 * 0x88;
  local_68 = thunk_FUN_100290ac0(pvVar6,&uStack_60,lVar10 + 0x10,*(undefined1 *)(lVar10 + 0x81),
                                 *(undefined1 *)(lVar10 + 0x82),uVar5);
  FUN_1001e9128(param_1 + 0x28,&local_68);
  uVar1 = *(uint *)(param_1 + 0x28) - *(uint *)(param_1 + 0x50);
  if ((*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x28) && uVar1 != 0) && (0 < (int)uVar1)) {
    lVar10 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x30);
      if (*(long **)(lVar7 + lVar10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + lVar10) + 8))();
        lVar7 = *(long *)(param_1 + 0x30);
      }
      *(undefined8 *)(lVar7 + lVar10) = 0;
      lVar10 = lVar10 + 8;
    } while ((ulong)uVar1 * 8 - lVar10 != 0);
    FUN_1001e91a8(param_1 + 0x28,*(long *)(param_1 + 0x30),
                  *(long *)(param_1 + 0x30) + (ulong)uVar1 * 8);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void FUN_1001e9128(uint *param_1,undefined8 *param_2)

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
    FUN_1001e92a4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001e91a8(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_1001e9214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10001549c(local_58);
  lVar1 = FUN_10010ae48(param_1,local_58);
  uStack_38 = 0;
  pcStack_28 = FUN_1001e927c;
  local_40 = param_3;
  local_30 = param_3;
  FUN_1000be5e4(lVar1 + 0x10,&local_40);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_1001e927c(long param_1)

{
  FUN_1001e8f68();
  FUN_10029016c(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
  return;
}




void FUN_1001e92a4(uint *param_1,uint param_2)

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




undefined8 * FUN_1001e9320(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146a858;
  operator_new(0x598);
  lVar1 = thunk_FUN_100291d38();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001e94b8_10146a838;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_1001e9380(param_1);
  return param_1;
}




void FUN_1001e9380(long param_1)

{
  undefined8 ***pppuVar1;
  void **ppvVar2;
  long lVar3;
  ulong uVar4;
  void *local_70 [2];
  char local_59;
  undefined8 **local_58 [2];
  char local_41;
  
  lVar3 = FUN_1000f7ab0();
  FUN_1000165f0(lVar3 + 0x48,0);
  lVar3 = FUN_1000f7ab0();
  FUN_1001e9908((uint *)(param_1 + 0x10),lVar3 + 0x28);
  lVar3 = FUN_1000f7ab0();
  FUN_1001e9974(param_1 + 0x20,lVar3 + 0x38);
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    do {
      if (0 < *(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8) + 0xb0)) {
        FUN_1001e9560(param_1);
      }
      FUN_10001549c(local_58,"Inventory_Chest_");
      FUN_10003330c(local_70,*(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8) + 0x20);
      ppvVar2 = local_70[0];
      if (-1 < local_59) {
        ppvVar2 = local_70;
      }
      std::string::append((char *)local_58,(ulong)ppvVar2);
      pppuVar1 = (undefined8 ***)local_58[0];
      if (-1 < local_41) {
        pppuVar1 = local_58;
      }
      FUN_100102240(pppuVar1,*(undefined4 *)
                              (*(long *)(*(long *)(param_1 + 0x18) + uVar4 * 8) + 0xb0),1);
      if (local_59 < '\0') {
        operator_delete(local_70[0]);
      }
      if (local_41 < '\0') {
        operator_delete(local_58[0]);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  return;
}




undefined8 * thunk_FUN_1001e9320(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146a858;
  operator_new(0x598);
  lVar1 = thunk_FUN_100291d38();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001e94b8_10146a838;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_1001e9380(param_1);
  return param_1;
}




undefined8 * FUN_1001e94b8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001e94b8_10146a838;
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146a858;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001e94b8(void)

{
  FUN_1001e94b8();
  return;
}




void FUN_1001e954c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e94b8();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e9560(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  uint local_40 [2];
  long local_38;
  
  FUN_1000f9d14(local_40);
  if (local_40[0] == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = 0;
    lVar3 = 0x18;
    do {
      uVar1 = FUN_1001e95f8(param_1,local_38 + lVar3);
      if ((int)uVar1 != 0) break;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar2 < local_40[0]);
  }
  FUN_100292284(*(undefined8 *)(param_1 + 8),param_2,uVar1,param_1 + 0x30);
  FUN_1000f950c(local_40,1);
  return;
}




bool FUN_1001e95f8(long param_1,uint *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  size_t sVar12;
  byte bVar13;
  size_t sVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  size_t sVar21;
  void *local_78 [2];
  char local_61;
  
  if (*param_2 == 0) {
    return true;
  }
  uVar15 = 0;
  lVar16 = 1;
LAB_1001e963c:
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 != 0) {
    uVar18 = 0;
    lVar20 = *(long *)(param_2 + 2);
    lVar19 = *(long *)(param_1 + 0x28);
    sVar21 = *(size_t *)(lVar20 + uVar15 * 0x20 + 8);
    do {
      puVar2 = (undefined8 *)(lVar20 + uVar15 * 0x20);
      pbVar17 = *(byte **)(lVar19 + uVar18 * 8);
      bVar7 = *(byte *)((long)puVar2 + 0x17);
      uVar9 = (ulong)bVar7;
      sVar4 = sVar21;
      if (-1 < (char)bVar7) {
        sVar4 = uVar9;
      }
      bVar13 = pbVar17[0x17];
      sVar14 = (size_t)bVar13;
      sVar12 = *(size_t *)(pbVar17 + 8);
      sVar3 = sVar12;
      if (-1 < (char)bVar13) {
        sVar3 = sVar14;
      }
      if (sVar4 == sVar3) {
        puVar5 = (void *)*puVar2;
        if (-1 < (char)bVar7) {
          puVar5 = puVar2;
        }
        pbVar10 = *(byte **)pbVar17;
        if (-1 < (char)bVar13) {
          pbVar10 = pbVar17;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar4 == 0) || (iVar8 = _memcmp(puVar5,pbVar10,sVar4), iVar8 == 0))
          goto LAB_1001e9700;
        }
        else if (sVar4 == 0) {
LAB_1001e9700:
          FUN_10003330c(local_78,pbVar17 + 0x30);
          std::string::operator=((string *)(param_1 + 0x30),(string *)local_78);
          if (local_61 < '\0') {
            operator_delete(local_78[0]);
          }
          lVar19 = *(long *)(param_1 + 0x28);
          pbVar17 = *(byte **)(lVar19 + uVar18 * 8);
          lVar20 = *(long *)(param_2 + 2);
          sVar21 = *(size_t *)(lVar20 + uVar15 * 0x20 + 8);
          bVar13 = pbVar17[0x17];
          sVar14 = (size_t)bVar13;
          sVar12 = *(size_t *)(pbVar17 + 8);
        }
        else {
          lVar11 = lVar16;
          if ((uint)*pbVar10 == ((uint)(void *)*puVar2 & 0xff)) {
            do {
              uVar9 = uVar9 - 1;
              pbVar10 = pbVar10 + 1;
              if (uVar9 == 0) goto LAB_1001e9700;
              pbVar1 = (byte *)(lVar20 + lVar11);
              lVar11 = lVar11 + 1;
            } while (*pbVar1 == *pbVar10);
          }
        }
      }
      puVar2 = (undefined8 *)(lVar20 + uVar15 * 0x20);
      bVar7 = *(byte *)((long)puVar2 + 0x17);
      uVar9 = (ulong)bVar7;
      sVar4 = sVar21;
      if (-1 < (char)bVar7) {
        sVar4 = uVar9;
      }
      if (-1 < (char)bVar13) {
        sVar12 = sVar14;
      }
      if (sVar4 == sVar12) {
        puVar5 = (void *)*puVar2;
        if (-1 < (char)bVar7) {
          puVar5 = puVar2;
        }
        pbVar10 = *(byte **)pbVar17;
        if (-1 < (char)bVar13) {
          pbVar10 = pbVar17;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar4 == 0) || (iVar8 = _memcmp(puVar5,pbVar10,sVar4), iVar8 == 0))
          goto LAB_1001e97e0;
        }
        else if (sVar4 == 0) {
LAB_1001e97e0:
          if (*(int *)(lVar20 + uVar15 * 0x20 + 0x18) <= *(int *)(pbVar17 + 0x48))
          goto LAB_1001e9808;
        }
        else {
          lVar11 = lVar20;
          if ((uint)*pbVar10 == ((uint)(void *)*puVar2 & 0xff)) {
            do {
              uVar9 = uVar9 - 1;
              pbVar10 = pbVar10 + 1;
              if (uVar9 == 0) goto LAB_1001e97e0;
              pbVar1 = (byte *)(lVar11 + lVar16);
              lVar11 = lVar11 + 1;
            } while (*pbVar1 == *pbVar10);
          }
        }
      }
      uVar18 = uVar18 + 1;
      if (*(uint *)(param_1 + 0x20) <= uVar18) {
        return false;
      }
    } while( true );
  }
  goto LAB_1001e9820;
LAB_1001e9808:
  uVar15 = uVar15 + 1;
  lVar16 = lVar16 + 0x20;
  if (*param_2 <= uVar15) {
LAB_1001e9820:
    return iVar6 != 0;
  }
  goto LAB_1001e963c;
}




void FUN_1001e985c(long param_1)

{
  FUN_10029221c(*(undefined8 *)(param_1 + 8));
  FUN_1001e9380(param_1);
  return;
}




undefined8 * FUN_1001e9884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146a858;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001e98c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146a858;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001e9908(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1000f9e24(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1001e9974(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1000f9ea0(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




undefined8 * FUN_1001e99e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146ac80;
  operator_new(0xc80);
  lVar1 = thunk_FUN_100292408();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001e9ab4_10146a878;
  param_1[2] = &PTR_FUN_10146a8b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_10146ac48;
  operator_new(0x48);
  uVar2 = thunk_FUN_1001e9320();
  param_1[6] = uVar2;
  operator_new(0x20);
  uVar2 = thunk_FUN_1001f69d0();
  param_1[7] = uVar2;
  FUN_10029258c(param_1[1],*(undefined8 *)(param_1[6] + 8));
  FUN_10029259c(param_1[1],*(undefined8 *)(param_1[7] + 8));
  lVar1 = FUN_1000f7ab0();
  uStack_38 = 0;
  pcStack_28 = FUN_1001e9cb0;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x18,&local_40);
  return param_1;
}




undefined8 * thunk_FUN_1001e99e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146ac80;
  operator_new(0xc80);
  lVar1 = thunk_FUN_100292408();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001e9ab4_10146a878;
  param_1[2] = &PTR_FUN_10146a8b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_10146ac48;
  operator_new(0x48);
  uVar2 = thunk_FUN_1001e9320();
  param_1[6] = uVar2;
  operator_new(0x20);
  uVar2 = thunk_FUN_1001f69d0();
  param_1[7] = uVar2;
  FUN_10029258c(param_1[1],*(undefined8 *)(param_1[6] + 8));
  FUN_10029259c(param_1[1],*(undefined8 *)(param_1[7] + 8));
  lVar1 = FUN_1000f7ab0();
  uStack_38 = 0;
  pcStack_28 = FUN_1001e9cb0;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x18,&puStack_40);
  return param_1;
}




undefined8 * FUN_1001e9ab4(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1001e9ab4_10146a878;
  param_1[2] = &PTR_FUN_10146a8b0;
  param_1[5] = &PTR_FUN_10146ac48;
  lVar2 = FUN_1000f7ab0();
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x18),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
    param_1[6] = 0;
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
    param_1[7] = 0;
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146ac80;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001e9ab4(void)

{
  FUN_1001e9ab4();
  return;
}




void FUN_1001e9b90(long param_1)

{
  FUN_1001e9ab4(param_1 + -0x10);
  return;
}




void FUN_1001e9b98(long param_1)

{
  FUN_1001e9ab4(param_1 + -0x28);
  return;
}




void FUN_1001e9ba0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e9ab4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001e9bb4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e9ab4(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001e9bcc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e9ab4(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001e9be4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001e9bec(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




char * FUN_1001e9bf4(void)

{
  return "INVENTORYCHEST";
}




void FUN_1001e9c00(void)

{
  FUN_1004e0150("INVENTORY_CHEST_KEY_TAB_TITLE",0);
  return;
}




char * FUN_1001e9c10(void)

{
  return "INVENTORYCHEST";
}




void FUN_1001e9c1c(void)

{
  FUN_1004e0150("INVENTORY_CHEST_KEY_TAB_TITLE",0);
  return;
}




undefined8 * FUN_1001e9c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146ac80;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001e9c70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146ac80;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001e9cb0(long param_1)

{
  FUN_1001f6c2c(*(undefined8 *)(param_1 + 0x38));
  FUN_1001e985c(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001001e9ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}




undefined8 * FUN_1001e9ce8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b068;
  operator_new(0xf920);
  lVar1 = thunk_FUN_1002926b8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146aca0;
  param_1[2] = &PTR_FUN_10146acd0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xffffffffffffffff;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001e9d8c,0);
  FUN_1001e9d8c(param_1);
  return param_1;
}




void thunk_FUN_1001e9d8c(void)

{
  FUN_1001e9d8c();
  return;
}




void FUN_1001e9d8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong local_70;
  long local_68;
  
  local_70 = 0;
  local_68 = 0;
  FUN_100136ce8(&local_70);
  if ((int)local_70 != 0) {
    uVar12 = 0;
    do {
      lVar8 = local_68;
      lVar5 = local_68 + uVar12 * 0xe8;
      uVar6 = *(ulong *)(lVar5 + 200);
      if (-1 < (char)*(byte *)(lVar5 + 0xd7)) {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xd7);
      }
      if ((uVar6 == 0xb) &&
         (iVar4 = std::string::compare(lVar5 + 0xc0,0,(char *)0xffffffffffffffff,0x1013e3bb6),
         iVar4 == 0)) {
        lVar8 = lVar8 + uVar12 * 0xe8;
        puVar9 = (uint *)(lVar8 + 8);
        uVar3 = *puVar9;
        uVar6 = (ulong)uVar3;
        if (uVar3 != 0) {
          uVar13 = 0;
          do {
            lVar5 = *(long *)(lVar8 + 0x10) + uVar13 * 0xa0;
            if (*(uint *)(lVar5 + 8) != 0) {
              lVar15 = 0;
              uVar6 = 0;
              do {
                lVar14 = *(long *)(lVar5 + 0x10);
                uVar1 = lVar14 + lVar15;
                bVar11 = *(byte *)(uVar1 + 0x17);
                uVar7 = (ulong)bVar11;
                uVar10 = *(ulong *)(uVar1 + 8);
                uVar2 = uVar10;
                if (-1 < (char)bVar11) {
                  uVar2 = uVar7;
                }
                if (uVar2 == 6) {
                  iVar4 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d247a);
                  if (iVar4 != 0) {
                    bVar11 = *(byte *)(uVar1 + 0x17);
                    uVar7 = (ulong)bVar11;
                    uVar10 = *(ulong *)(uVar1 + 8);
                    goto LAB_1001e9ebc;
                  }
                  std::string::operator=((string *)(param_1 + 0x40),(string *)(lVar5 + 0x60));
                  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar14 + lVar15 + 0x18);
                }
                else {
LAB_1001e9ebc:
                  if (-1 < (char)bVar11) {
                    uVar10 = uVar7;
                  }
                  if ((uVar10 == 4) &&
                     (iVar4 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013d24d0),
                     iVar4 == 0)) {
                    std::string::operator=((string *)(param_1 + 0x28),(string *)(lVar5 + 0x60));
                    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar14 + lVar15 + 0x18);
                  }
                }
                uVar6 = uVar6 + 1;
                lVar15 = lVar15 + 0x20;
              } while (uVar6 < *(uint *)(lVar5 + 8));
              uVar6 = (ulong)*puVar9;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar6);
        }
        FUN_1002946ec(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x58),
                      *(undefined4 *)(param_1 + 0x5c));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (local_70 & 0xffffffff));
  }
  FUN_100144b1c(&local_70,1);
  return;
}




undefined8 * thunk_FUN_1001e9ce8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b068;
  operator_new(0xf920);
  lVar1 = thunk_FUN_1002926b8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146aca0;
  param_1[2] = &PTR_FUN_10146acd0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xffffffffffffffff;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001e9d8c,0);
  FUN_1001e9d8c(param_1);
  return param_1;
}




undefined8 * FUN_1001e9fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146aca0;
  param_1[2] = &PTR_FUN_10146acd0;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146b068;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001e9fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146aca0;
  param_1[2] = &PTR_FUN_10146acd0;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146b068;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001ea048(long param_1)

{
  FUN_1001e9fa8(param_1 + -0x10);
  return;
}




void FUN_1001ea050(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e9fa8();
  operator_delete(pvVar1);
  return;
}




void FUN_1001ea064(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e9fa8(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001ea07c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  
  if (param_2 == 0) {
    puVar15 = (undefined8 *)(param_1 + 0x40);
    bVar5 = *(byte *)(param_1 + 0x57);
    uVar12 = (ulong)bVar5;
    sVar1 = *(size_t *)(param_1 + 0x48);
    if (-1 < (char)bVar5) {
      sVar1 = uVar12;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      puVar3 = (undefined8 *)*puVar15;
      if (-1 < (char)bVar5) {
        puVar3 = puVar15;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar5 < '\0') {
        if (sVar1 == 0) {
          return;
        }
        iVar6 = _memcmp(puVar3,pbVar14,sVar1);
        if (iVar6 == 0) {
          return;
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar15 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x41);
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) {
              return;
            }
            bVar5 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar5 == *pbVar14);
        }
      }
    }
    uVar4 = *(uint *)(param_1 + 0x5c);
    lVar7 = FUN_10015d3ec();
    if (uVar4 <= *(uint *)(lVar7 + 0x5454)) goto LAB_1001ea298;
    uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
    pcVar9 = "MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_GLORY_DIALOG_TEXT";
  }
  else {
    puVar15 = (undefined8 *)(param_1 + 0x28);
    bVar5 = *(byte *)(param_1 + 0x3f);
    uVar12 = (ulong)bVar5;
    sVar1 = *(size_t *)(param_1 + 0x30);
    if (-1 < (char)bVar5) {
      sVar1 = uVar12;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      puVar3 = (void *)*puVar15;
      if (-1 < (char)bVar5) {
        puVar3 = puVar15;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar5 < '\0') {
        if (sVar1 == 0) {
          return;
        }
        iVar6 = _memcmp(puVar3,pbVar14,sVar1);
        if (iVar6 == 0) {
          return;
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar15 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x29);
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) {
              return;
            }
            bVar5 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar5 == *pbVar14);
        }
      }
    }
    uVar4 = *(uint *)(param_1 + 0x58);
    lVar7 = FUN_10015d3ec();
    if (uVar4 <= *(uint *)(lVar7 + 0x5450)) {
LAB_1001ea298:
      uVar8 = FUN_10015d3ec();
      FUN_100167014(uVar8,puVar15,param_3,param_4,param_5,param_6);
      return;
    }
    uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_DIALOG_TITLE",0);
    pcVar9 = "MENU_PROFILE_GUILD_CREATE_CANT_AFFORD_ICE_DIALOG_TEXT";
  }
  uVar10 = FUN_1004e0150(pcVar9,0);
  uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar8,uVar10,uVar11,0,0);
  return;
}




void FUN_1001ea2d8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x25) != '\0') {
    lVar4 = FUN_10015d3ec();
    FUN_100169cec(lVar4 + 0x18);
    FUN_100104af0();
    FUN_100294f90(*(undefined8 *)(param_1 + 8));
    return;
  }
  uVar1 = param_2 + 0x30;
  bVar11 = *(byte *)(param_2 + 0x47);
  uVar9 = (ulong)bVar11;
  uVar10 = *(ulong *)(param_2 + 0x38);
  uVar2 = uVar10;
  if (-1 < (char)bVar11) {
    uVar2 = uVar9;
  }
  if (uVar2 == 0x10) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
    if (iVar3 != 0) {
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
      goto LAB_1001ea37c;
    }
    uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
    pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_ALREADY_IN";
  }
  else {
LAB_1001ea37c:
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 0xb) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c29);
      if (iVar3 == 0) {
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_LENGTH";
        goto LAB_1001ea5f4;
      }
      bVar11 = *(byte *)(param_2 + 0x47);
      uVar9 = (ulong)bVar11;
      uVar10 = *(ulong *)(param_2 + 0x38);
    }
    uVar2 = uVar10;
    if (-1 < (char)bVar11) {
      uVar2 = uVar9;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c66);
      if (iVar3 != 0) {
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
        goto LAB_1001ea3fc;
      }
LAB_1001ea558:
      uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
      pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_NAME_TAKEN";
    }
    else {
LAB_1001ea3fc:
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 0xd) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3c71);
        if (iVar3 == 0) goto LAB_1001ea558;
        bVar11 = *(byte *)(param_2 + 0x47);
        uVar9 = (ulong)bVar11;
        uVar10 = *(ulong *)(param_2 + 0x38);
      }
      uVar2 = uVar10;
      if (-1 < (char)bVar11) {
        uVar2 = uVar9;
      }
      if (uVar2 == 9) {
        iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cb0);
        if (iVar3 != 0) {
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
          goto LAB_1001ea47c;
        }
LAB_1001ea5b8:
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_PROFILE_GUILD_CANT_CREATE_REASON_TAG_TAKEN";
      }
      else {
LAB_1001ea47c:
        uVar2 = uVar10;
        if (-1 < (char)bVar11) {
          uVar2 = uVar9;
        }
        if (uVar2 == 0xc) {
          iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cba);
          if (iVar3 == 0) goto LAB_1001ea5b8;
          bVar11 = *(byte *)(param_2 + 0x47);
          uVar9 = (ulong)bVar11;
          uVar10 = *(ulong *)(param_2 + 0x38);
        }
        if (-1 < (char)bVar11) {
          uVar10 = uVar9;
        }
        if ((uVar10 != 0x12) ||
           (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3cf7), iVar3 != 0
           )) {
          FUN_1004e313c(auStack_40);
          uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR_TITLE",0);
          uVar6 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_ERROR",0);
          uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
          if (local_38 != (void *)0x0) {
            operator_delete__(local_38);
          }
          goto LAB_1001ea628;
        }
        uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_CREATE_TITLE",0);
        pcVar8 = "MENU_GUILD_ERROR_PROFANITY";
      }
    }
  }
LAB_1001ea5f4:
  uVar6 = FUN_1004e0150(pcVar8,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar5,uVar6,uVar7,0,0);
LAB_1001ea628:
  FUN_100294960(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001ea644(long param_1)

{
  FUN_1001ea2d8(param_1 + -0x10);
  return;
}




undefined8 * FUN_1001ea64c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b1f8;
  operator_new(0x1180);
  lVar1 = thunk_FUN_100296204();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  puVar2 = param_1 + 0x13;
  *puVar2 = &PTR____cxa_pure_virtual_10146b1b8;
  param_1[0x14] = &PTR____cxa_pure_virtual_10146b1d0;
  FUN_10033f558(param_1 + 0x15);
  *param_1 = &PTR_FUN_10146b090;
  param_1[2] = &PTR_FUN_10146b108;
  *puVar2 = &PTR_thunk_FUN_1001eb16c_10146b148;
  param_1[0x14] = &PTR_FUN_10146b160;
  param_1[0x15] = &PTR_FUN_10146b188;
  *(undefined8 **)(param_1[1] + 0x1160) = puVar2;
  lVar1 = FUN_100341d4c();
  local_40 = 0;
  pcStack_28 = FUN_1001eb68c;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_100198790(lVar1 + 0x30,&local_40);
  return param_1;
}




undefined8 * thunk_FUN_1001ea64c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b1f8;
  operator_new(0x1180);
  lVar1 = thunk_FUN_100296204();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  puVar2 = param_1 + 0x13;
  *puVar2 = &PTR____cxa_pure_virtual_10146b1b8;
  param_1[0x14] = &PTR____cxa_pure_virtual_10146b1d0;
  FUN_10033f558(param_1 + 0x15);
  *param_1 = &PTR_FUN_10146b090;
  param_1[2] = &PTR_FUN_10146b108;
  *puVar2 = &PTR_thunk_FUN_1001eb16c_10146b148;
  param_1[0x14] = &PTR_FUN_10146b160;
  param_1[0x15] = &PTR_FUN_10146b188;
  *(undefined8 **)(param_1[1] + 0x1160) = puVar2;
  lVar1 = FUN_100341d4c();
  uStack_40 = 0;
  pcStack_28 = FUN_1001eb68c;
  puStack_38 = param_1;
  puStack_30 = param_1;
  FUN_100198790(lVar1 + 0x30,&uStack_40);
  return param_1;
}




undefined8 * FUN_1001ea714(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *local_48 [2];
  char local_31;
  
  *param_1 = &PTR_FUN_10146b090;
  param_1[2] = &PTR_FUN_10146b108;
  param_1[0x13] = &PTR_thunk_FUN_1001eb16c_10146b148;
  param_1[0x14] = &PTR_FUN_10146b160;
  param_1[0x15] = &PTR_FUN_10146b188;
  lVar2 = FUN_100341d4c();
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar4 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      puVar1 = (undefined8 *)(lVar4 + 8);
      lVar4 = lVar4 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100198894();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  FUN_10001549c(local_48,"MENU_TALENT_PURCHASE_POPUP");
  FUN_1001ad598(local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar3 = FUN_1000eaaec();
  FUN_10001549c(local_48,uVar3);
  FUN_1001ad598(local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10001549c(local_48,PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0);
  FUN_1001ad598(local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10033f5d4(param_1 + 0x15);
  FUN_1001ea85c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146b1f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * FUN_1001ea85c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146b550;
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void thunk_FUN_1001ea714(void)

{
  FUN_1001ea714();
  return;
}




void FUN_1001ea8e0(long param_1)

{
  FUN_1001ea714(param_1 + -0x10);
  return;
}




void FUN_1001ea8e8(long param_1)

{
  FUN_1001ea714(param_1 + -0xa8);
  return;
}




void FUN_1001ea8f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ea714();
  operator_delete(pvVar1);
  return;
}




void FUN_1001ea904(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ea714(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001ea91c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ea714(param_1 + -0xa8);
  operator_delete(pvVar1);
  return;
}




void FUN_1001ea934(long param_1)

{
  FUN_1002966e8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001ea93c(long param_1)

{
  FUN_1002966e8(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_1001ea944(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1001efc24(param_1 + 0x10);
  FUN_10034055c();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_100340938();
  FUN_100296b1c(uVar2,uVar1);
  FUN_1002966e8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001ea984(long param_1)

{
  FUN_1001ea944(param_1 + -0x10);
  return;
}




void FUN_1001ea98c(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  void *local_a8 [2];
  char local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar6 = FUN_100341d58(param_2);
  if ((lVar6 != 0) && ((*(ushort *)(lVar6 + 0xb0) >> 8 & 1) != 0)) {
    FUN_1000fd6fc(local_a8);
    lVar7 = FUN_10034055c();
    uVar14 = 0;
    pbVar1 = *(byte **)param_2;
    sVar4 = *(size_t *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      pbVar1 = param_2;
      sVar4 = (ulong)param_2[0x17];
    }
    pbVar15 = (byte *)(lVar7 + 0x11);
    do {
      lVar10 = lVar7 + uVar14 * 0xd0;
      bVar3 = *(byte *)(lVar10 + 0x27);
      uVar8 = (ulong)bVar3;
      sVar2 = *(size_t *)(lVar10 + 0x18);
      if (-1 < (char)bVar3) {
        sVar2 = uVar8;
      }
      if (sVar2 == sVar4) {
        if ((char)bVar3 < '\0') {
          if ((sVar4 == 0) || (iVar5 = _memcmp(*(void **)(lVar10 + 0x10),pbVar1,sVar4), iVar5 == 0))
          {
LAB_1001eaa98:
            lVar7 = lVar7 + (uVar14 & 0xffffffff) * 0xd0;
            std::string::operator=((string *)local_a8,(string *)(lVar7 + 0x40));
            uStack_88 = *(undefined8 *)(lVar7 + 0x60);
            local_90 = *(undefined8 *)(lVar7 + 0x58);
            uStack_78 = *(undefined8 *)(lVar7 + 0x70);
            uStack_80 = *(undefined8 *)(lVar7 + 0x68);
            uStack_68 = *(undefined8 *)(lVar7 + 0x80);
            local_70 = *(undefined8 *)(lVar7 + 0x78);
            break;
          }
        }
        else {
          if (sVar4 == 0) goto LAB_1001eaa98;
          pbVar11 = pbVar15;
          pbVar9 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar10 + 0x10) & 0xff)) {
            do {
              uVar8 = uVar8 - 1;
              pbVar9 = pbVar9 + 1;
              if (uVar8 == 0) goto LAB_1001eaa98;
              bVar3 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar3 == *pbVar9);
          }
        }
      }
      uVar14 = uVar14 + 1;
      pbVar15 = pbVar15 + 0xd0;
    } while (uVar14 != 3);
    iVar5 = FUN_1000e7eb0(local_a8);
    if (iVar5 == 0) {
      FUN_1001eab54();
    }
    else {
      FUN_10034056c(param_2,0);
      plVar12 = (long *)(lVar6 + 0x78);
      if (*(char *)(lVar6 + 0x8f) < '\0') {
        plVar12 = (long *)*plVar12;
      }
      plVar13 = (long *)(lVar6 + 0x90);
      if (*(char *)(lVar6 + 0xa7) < '\0') {
        plVar13 = (long *)*plVar13;
      }
      lVar6 = FUN_100343694(lVar6);
      FUN_100106228(plVar12,plVar13,*(undefined4 *)(lVar6 + 0x18),1,local_90._4_4_);
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  return;
}




void FUN_1001eab54(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  void *local_b0;
  void *local_a8 [2];
  undefined1 auStack_98 [7];
  char local_91;
  void *local_90;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined8 local_4c;
  undefined4 local_44;
  void *local_40;
  char local_29;
  
  FUN_10001549c(local_a8,"MENU_TALENT_PURCHASE_POPUP");
  FUN_1001ad598(local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  thunk_FUN_1001ad400(local_a8);
  uVar1 = FUN_1004e0150("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_b8,uVar1);
  FUN_1000153b4(auStack_98,auStack_b8);
  local_a8[0] = (void *)0x447a000044c80000;
  local_44 = 1;
  FUN_1001ad494(local_a8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_10115830c);
  local_4c = 0xffa3781effa4781e;
  uVar1 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_a8);
  FUN_10021fea0(uVar1,0);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  return;
}




void FUN_1001eac78(long param_1)

{
  FUN_1001ea98c(param_1 + -0xa0);
  return;
}




void FUN_1001eac80(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  void *local_a8 [2];
  char local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar7 = FUN_100341d58(param_2);
  if (lVar7 != 0) {
    FUN_1000fd6fc(local_a8);
    lVar8 = FUN_10034055c();
    uVar15 = 0;
    pbVar1 = *(byte **)param_2;
    sVar4 = *(size_t *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      pbVar1 = param_2;
      sVar4 = (ulong)param_2[0x17];
    }
    pbVar16 = (byte *)(lVar8 + 0x11);
    do {
      lVar11 = lVar8 + uVar15 * 0xd0;
      bVar3 = *(byte *)(lVar11 + 0x27);
      uVar9 = (ulong)bVar3;
      sVar2 = *(size_t *)(lVar11 + 0x18);
      if (-1 < (char)bVar3) {
        sVar2 = uVar9;
      }
      if (sVar2 == sVar4) {
        if ((char)bVar3 < '\0') {
          if ((sVar4 == 0) || (iVar5 = _memcmp(*(void **)(lVar11 + 0x10),pbVar1,sVar4), iVar5 == 0))
          {
LAB_1001ead88:
            lVar8 = lVar8 + (uVar15 & 0xffffffff) * 0xd0;
            iVar5 = *(int *)(lVar8 + 0xd8) - *(int *)(lVar8 + 0xd4);
            std::string::operator=((string *)local_a8,(string *)(lVar8 + 0x88));
            uStack_88 = *(undefined8 *)(lVar8 + 0xa8);
            local_90 = *(undefined8 *)(lVar8 + 0xa0);
            uStack_78 = *(undefined8 *)(lVar8 + 0xb8);
            uStack_80 = *(undefined8 *)(lVar8 + 0xb0);
            uStack_68 = *(undefined8 *)(lVar8 + 200);
            local_70 = *(undefined8 *)(lVar8 + 0xc0);
            goto LAB_1001eadb8;
          }
        }
        else {
          if (sVar4 == 0) goto LAB_1001ead88;
          pbVar12 = pbVar16;
          pbVar10 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar11 + 0x10) & 0xff)) {
            do {
              uVar9 = uVar9 - 1;
              pbVar10 = pbVar10 + 1;
              if (uVar9 == 0) goto LAB_1001ead88;
              bVar3 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar3 == *pbVar10);
          }
        }
      }
      uVar15 = uVar15 + 1;
      pbVar16 = pbVar16 + 0xd0;
    } while (uVar15 != 3);
    iVar5 = 0;
LAB_1001eadb8:
    iVar6 = FUN_1000e7eb0(local_a8);
    if (iVar6 == 0) {
      FUN_1001eab54();
    }
    else {
      FUN_10034056c(param_2,1);
      plVar13 = (long *)(lVar7 + 0x78);
      if (*(char *)(lVar7 + 0x8f) < '\0') {
        plVar13 = (long *)*plVar13;
      }
      plVar14 = (long *)(lVar7 + 0x90);
      if (*(char *)(lVar7 + 0xa7) < '\0') {
        plVar14 = (long *)*plVar14;
      }
      lVar7 = FUN_100343694(lVar7);
      FUN_100106228(plVar13,plVar14,*(undefined4 *)(lVar7 + 0x18),iVar5,local_90._4_4_);
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  return;
}




void thunk_FUN_1001eac80(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  byte *pbVar16;
  void *apvStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = FUN_100341d58(param_2);
  if (lVar7 != 0) {
    FUN_1000fd6fc(apvStack_a8);
    lVar8 = FUN_10034055c();
    uVar15 = 0;
    pbVar1 = *(byte **)param_2;
    sVar4 = *(size_t *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      pbVar1 = param_2;
      sVar4 = (ulong)param_2[0x17];
    }
    pbVar16 = (byte *)(lVar8 + 0x11);
    do {
      lVar11 = lVar8 + uVar15 * 0xd0;
      bVar3 = *(byte *)(lVar11 + 0x27);
      uVar9 = (ulong)bVar3;
      sVar2 = *(size_t *)(lVar11 + 0x18);
      if (-1 < (char)bVar3) {
        sVar2 = uVar9;
      }
      if (sVar2 == sVar4) {
        if ((char)bVar3 < '\0') {
          if ((sVar4 == 0) || (iVar5 = _memcmp(*(void **)(lVar11 + 0x10),pbVar1,sVar4), iVar5 == 0))
          {
LAB_1001ead88:
            lVar8 = lVar8 + (uVar15 & 0xffffffff) * 0xd0;
            iVar5 = *(int *)(lVar8 + 0xd8) - *(int *)(lVar8 + 0xd4);
            std::string::operator=((string *)apvStack_a8,(string *)(lVar8 + 0x88));
            uStack_88 = *(undefined8 *)(lVar8 + 0xa8);
            uStack_90 = *(undefined8 *)(lVar8 + 0xa0);
            uStack_78 = *(undefined8 *)(lVar8 + 0xb8);
            uStack_80 = *(undefined8 *)(lVar8 + 0xb0);
            uStack_68 = *(undefined8 *)(lVar8 + 200);
            uStack_70 = *(undefined8 *)(lVar8 + 0xc0);
            goto LAB_1001eadb8;
          }
        }
        else {
          if (sVar4 == 0) goto LAB_1001ead88;
          pbVar12 = pbVar16;
          pbVar10 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar11 + 0x10) & 0xff)) {
            do {
              uVar9 = uVar9 - 1;
              pbVar10 = pbVar10 + 1;
              if (uVar9 == 0) goto LAB_1001ead88;
              bVar3 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar3 == *pbVar10);
          }
        }
      }
      uVar15 = uVar15 + 1;
      pbVar16 = pbVar16 + 0xd0;
    } while (uVar15 != 3);
    iVar5 = 0;
LAB_1001eadb8:
    iVar6 = FUN_1000e7eb0(apvStack_a8);
    if (iVar6 == 0) {
      FUN_1001eab54();
    }
    else {
      FUN_10034056c(param_2,1);
      plVar13 = (long *)(lVar7 + 0x78);
      if (*(char *)(lVar7 + 0x8f) < '\0') {
        plVar13 = (long *)*plVar13;
      }
      plVar14 = (long *)(lVar7 + 0x90);
      if (*(char *)(lVar7 + 0xa7) < '\0') {
        plVar14 = (long *)*plVar14;
      }
      lVar7 = FUN_100343694(lVar7);
      FUN_100106228(plVar13,plVar14,*(undefined4 *)(lVar7 + 0x18),iVar5,uStack_90._4_4_);
    }
    if (cStack_91 < '\0') {
      operator_delete(apvStack_a8[0]);
    }
  }
  return;
}




void FUN_1001eae4c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"MENU_TALENT_PURCHASE_POPUP");
  FUN_1001ad598(local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  lVar1 = FUN_100341d58(param_2);
  if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0xb0) >> 8 & 1) != 0)) {
    FUN_1000ea998(0x44e10000,0x44960000,param_2,1,0);
    (**(code **)*param_1)(param_1,param_2);
  }
  return;
}




void FUN_1001eaee0(long param_1)

{
  FUN_1001eae4c(param_1 + -0xa0);
  return;
}




void FUN_1001eaee8(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *local_f0 [2];
  char local_d9;
  undefined1 auStack_d8 [24];
  void *local_c0;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_70;
  char local_59;
  
  lVar7 = FUN_100341d58(param_2);
  if ((lVar7 != 0) && ((*(ushort *)(lVar7 + 0xb0) >> 8 & 1) != 0)) {
    FUN_1000ea654(auStack_d8,0x44af0000,0x447a0000,param_2,1);
    lVar8 = FUN_1001eb0f4("MENU_TALENT_PURCHASE_POPUP",auStack_d8);
    FUN_1001cb164(lVar8,param_2);
    lVar9 = FUN_10034055c();
    lVar7 = 0;
    pbVar15 = (byte *)(lVar9 + 0x11);
    do {
      lVar11 = lVar9 + lVar7 * 0xd0;
      bVar4 = *(byte *)(lVar11 + 0x27);
      uVar10 = (ulong)bVar4;
      sVar1 = *(size_t *)(lVar11 + 0x18);
      if (-1 < (char)bVar4) {
        sVar1 = uVar10;
      }
      bVar5 = param_2[0x17];
      sVar2 = *(size_t *)(param_2 + 8);
      if (-1 < (char)bVar5) {
        sVar2 = (ulong)bVar5;
      }
      if (sVar1 == sVar2) {
        pvVar12 = *(void **)(lVar11 + 0x10);
        puVar3 = pvVar12;
        if (-1 < (char)bVar4) {
          puVar3 = (undefined8 *)(lVar11 + 0x10);
        }
        pbVar13 = *(byte **)param_2;
        if (-1 < (char)bVar5) {
          pbVar13 = param_2;
        }
        if ((char)bVar4 < '\0') {
          if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar13,sVar1), iVar6 == 0))
          goto LAB_1001eb010;
        }
        else if (sVar1 == 0) {
LAB_1001eb010:
          FUN_10001549c(local_f0,"glory_icon_small");
          FUN_1001cb1e8(lVar8,local_f0,*(undefined4 *)(lVar9 + lVar7 * 0xd0 + 0x5c));
          if (local_d9 < '\0') {
            operator_delete(local_f0[0]);
          }
          FUN_10001549c(local_f0,"glory_icon_small");
          FUN_1001cb300(lVar8,local_f0,*(undefined4 *)(lVar9 + lVar7 * 0xd0 + 0xa4));
          if (local_d9 < '\0') {
            operator_delete(local_f0[0]);
          }
          lVar11 = lVar9 + lVar7 * 0xd0;
          FUN_1001cb41c(lVar8,*(int *)(lVar11 + 0xd8) - *(int *)(lVar11 + 0xd4));
        }
        else {
          pbVar14 = pbVar15;
          if ((uint)*pbVar13 == ((uint)pvVar12 & 0xff)) {
            do {
              uVar10 = uVar10 - 1;
              pbVar13 = pbVar13 + 1;
              if (uVar10 == 0) goto LAB_1001eb010;
              bVar4 = *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (bVar4 == *pbVar13);
          }
        }
      }
      lVar7 = lVar7 + 1;
      pbVar15 = pbVar15 + 0xd0;
    } while (lVar7 != 3);
    *(long *)(lVar8 + 0x5650) = param_1 + 0xa0;
    if (local_59 < '\0') {
      operator_delete(local_70);
    }
    if (local_81 < '\0') {
      operator_delete(local_98);
    }
    if (local_99 < '\0') {
      operator_delete(local_b0);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
    }
  }
  return;
}




undefined8 FUN_1001eb0f4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_1);
  std::string::operator=((string *)(param_2 + 0x68),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  operator_new(0x5670);
  uVar1 = thunk_FUN_1001ca764();
  *(undefined8 *)(param_2 + 0x80) = uVar1;
  FUN_1001ad7b8(DAT_101d23560,param_2);
  return *(undefined8 *)(param_2 + 0x80);
}




void FUN_1001eb16c(int *param_1)

{
  string *psVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  void *local_c8 [2];
  char local_b1;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined4 local_81;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001eb364(param_1,3);
  lVar4 = FUN_100341d4c();
  if (*(char *)(lVar4 + 200) != '\0') {
    lVar5 = FUN_10034055c();
    lVar4 = 0;
    do {
      lVar6 = lVar5 + lVar4 * 0xd0;
      cVar2 = *(char *)(lVar6 + 0x27);
      if (cVar2 < '\0') {
        if (*(long *)(lVar5 + lVar4 * 0xd0 + 0x18) != 0) goto LAB_1001eb1f0;
      }
      else if (cVar2 != '\0') {
LAB_1001eb1f0:
        psVar1 = (string *)(lVar6 + 0x10);
        pvStack_98 = (void *)0x0;
        local_a0 = 0;
        uStack_88 = 0;
        local_81 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        local_b0 = (void *)0x0;
        local_7d = 0xff;
        local_7c = 0;
        uStack_78 = 0;
        uStack_76 = 0;
        local_74 = 0;
        local_70 = 0;
        local_6f = 0;
        std::string::operator=((string *)&pvStack_98,psVar1);
        FUN_10001549c(local_c8,"glory_icon_small");
        std::string::operator=((string *)&local_b0,(string *)local_c8);
        if (local_b1 < '\0') {
          operator_delete(local_c8[0]);
        }
        lVar7 = lVar5 + lVar4 * 0xd0;
        uVar8 = *(uint *)(lVar7 + 0x5c);
        uStack_78 = (undefined2)uVar8;
        uStack_76 = (undefined2)(uVar8 >> 0x10);
        lVar6 = FUN_10015d3ec();
        uVar3 = 0xff1111a1;
        if (uVar8 <= *(uint *)(lVar6 + 0x5454)) {
          uVar3 = 0xffffffff;
        }
        local_70 = *(undefined1 *)(lVar7 + 0xd0);
        local_74 = *(undefined4 *)(lVar7 + 0xd4);
        local_81._1_3_ = (undefined3)uVar3;
        local_7d = (undefined1)((uint)uVar3 >> 0x18);
        lVar6 = FUN_100341d58(psVar1);
        if ((lVar6 != 0) && ((*(ushort *)(lVar6 + 0xb0) >> 8 & 1) != 0)) {
          local_6f = FUN_100342adc(lVar6);
          lVar6 = FUN_100343694(lVar6);
          local_7c = *(undefined4 *)(lVar6 + 0x18);
        }
        FUN_1001eb468(param_1,&local_b0);
        uVar8 = *param_1 - 1;
        if (0 < (int)uVar8) {
          lVar7 = (ulong)(*param_1 - 2) * 0x48;
          lVar6 = (ulong)uVar8 * 0x48;
          do {
            if (*(int *)(*(long *)(param_1 + 2) + lVar6 + 0x34) <
                *(int *)(*(long *)(param_1 + 2) + lVar7 + 0x34)) {
              FUN_1001eb50c();
            }
            uVar8 = uVar8 - 1;
            lVar7 = lVar7 + -0x48;
            lVar6 = lVar6 + -0x48;
          } while (0 < (int)uVar8);
        }
        if ((char)local_81 < '\0') {
          operator_delete(pvStack_98);
        }
        if (local_a0 < 0) {
          operator_delete(local_b0);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
  }
  return;
}




void FUN_1001eb364(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x48);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (long)pvVar1 + 0x18;
      lVar6 = (ulong)*param_1 * 0x48;
      lVar5 = (long)pvVar2 + 0x18;
      do {
        FUN_10003330c(lVar4 + -0x18,lVar5 + -0x18);
        FUN_10003330c(lVar4,lVar5);
        uVar8 = *(undefined8 *)(lVar5 + 0x20);
        uVar7 = *(undefined8 *)(lVar5 + 0x18);
        *(undefined2 *)(lVar4 + 0x28) = *(undefined2 *)(lVar5 + 0x28);
        *(undefined8 *)(lVar4 + 0x20) = uVar8;
        *(undefined8 *)(lVar4 + 0x18) = uVar7;
        lVar4 = lVar4 + 0x48;
        lVar5 = lVar5 + 0x48;
        lVar6 = lVar6 + -0x48;
      } while (lVar6 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar4 = (ulong)*param_1 * 0x48;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x48;
          lVar4 = lVar4 + -0x48;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_1001eb468(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
    FUN_1001eb364(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x48;
  FUN_10003330c(lVar4 + -0x48,param_2);
  FUN_10003330c(lVar4 + -0x30,param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x40);
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_1001eb50c(string *param_1,string *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  void *pvStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined4 local_61;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 local_50;
  
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_61 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_5d = 0xff;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  uStack_54 = 0;
  local_50 = 0;
  std::string::operator=((string *)&local_90,param_1);
  std::string::operator=((string *)&pvStack_78,param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = (undefined2)uVar3;
  uStack_56 = (undefined2)((ulong)uVar3 >> 0x10);
  uStack_54 = (undefined4)((ulong)uVar3 >> 0x20);
  local_61._1_3_ = (undefined3)uVar2;
  uStack_5d = (undefined1)((ulong)uVar2 >> 0x18);
  uStack_5c = (undefined4)((ulong)uVar2 >> 0x20);
  local_50 = *(undefined2 *)(param_1 + 0x40);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined2 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  std::string::operator=(param_2,(string *)&local_90);
  std::string::operator=(param_2 + 0x18,(string *)&pvStack_78);
  *(ulong *)(param_2 + 0x38) = CONCAT44(uStack_54,CONCAT22(uStack_56,uStack_58));
  *(ulong *)(param_2 + 0x30) = CONCAT44(uStack_5c,CONCAT13(uStack_5d,local_61._1_3_));
  *(undefined2 *)(param_2 + 0x40) = local_50;
  if ((char)local_61 < '\0') {
    operator_delete(pvStack_78);
  }
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  return;
}




void thunk_FUN_1001eb16c(void)

{
  FUN_1001eb16c();
  return;
}




void FUN_1001eb610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1002966e8(*(undefined8 *)(param_1 + 8));
  FUN_10034055c();
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_100340938();
  FUN_100296b1c(uVar2,uVar1);
  return;
}




void FUN_1001eb648(long param_1)

{
  FUN_1001eb610(param_1 + -0xa8);
  return;
}




void FUN_1001eb650(void)

{
  return;
}




void FUN_1001eb654(void)

{
  return;
}




undefined8 FUN_1001eb658(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001eb660(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_1001eb668(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001001eb688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf8))();
  return;
}




void FUN_1001eb68c(long param_1)

{
  FUN_1002966e8(*(undefined8 *)(param_1 + 8));
  return;
}




undefined8 * FUN_1001eb694(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b250;
  operator_new(0x28f8);
  lVar1 = thunk_FUN_1002973d8();
  *(undefined8 **)(lVar1 + 0x9b8) = param_1;
  *param_1 = &PTR_FUN_10146b228;
  param_1[1] = lVar1;
  param_1[2] = 0;
  pcStack_28 = thunk_FUN_1001ebb90;
  local_30 = param_1;
  FUN_100643618(0x3f000000,&local_30,0,1);
  return param_1;
}




undefined8 * thunk_FUN_1001eb694(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b250;
  operator_new(0x28f8);
  lVar1 = thunk_FUN_1002973d8();
  *(undefined8 **)(lVar1 + 0x9b8) = param_1;
  *param_1 = &PTR_FUN_10146b228;
  param_1[1] = lVar1;
  param_1[2] = 0;
  pcStack_28 = thunk_FUN_1001ebb90;
  puStack_30 = param_1;
  FUN_100643618(0x3f000000,&puStack_30,0,1);
  return param_1;
}




undefined8 * FUN_1001eb70c(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146b228;
  pcStack_28 = thunk_FUN_1001ebb90;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x20);
    if (uVar1 != 0) {
      lVar3 = (ulong)uVar1 << 5;
      puVar4 = *(undefined8 **)(lVar2 + 0x28);
      do {
        if ((undefined8 *)*puVar4 == param_1) {
          FUN_1000c044c((uint *)(lVar2 + 0x20),puVar4,puVar4 + 4);
          break;
        }
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
      } while (lVar3 != 0);
    }
  }
  *param_1 = &PTR____cxa_pure_virtual_10146b250;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001eb70c(void)

{
  FUN_1001eb70c();
  return;
}




void FUN_1001eb7bc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001eb70c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001eb7d0(long param_1,long param_2)

{
  long local_40 [3];
  code *pcStack_28;
  
  *(long *)(param_1 + 0x10) = param_2;
  local_40[1] = 0;
  pcStack_28 = thunk_FUN_1001eb81c;
  local_40[0] = param_1;
  local_40[2] = param_1;
  FUN_1000be5e4(param_2 + 0x20,local_40);
  FUN_1001eb81c(param_1);
  return;
}




void FUN_1001eb81c(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined1 auStack_e8 [64];
  long local_a8;
  code *pcStack_a0;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_100297c68(*(undefined8 *)(param_1 + 8));
  iVar4 = FUN_10030a7ec(*(undefined8 *)(param_1 + 0x10));
  if (iVar4 != 0) {
    uVar6 = FUN_10030a86c(*(undefined8 *)(param_1 + 0x10));
    if ((uVar6 & 1) == 0) {
      pcStack_a0 = thunk_FUN_1001ebb90;
      local_a8 = param_1;
      FUN_100643618(0x3f000000,&local_a8,0,1);
    }
    FUN_100297b4c(*(undefined8 *)(param_1 + 8));
    uVar5 = FUN_10030a7ac(*(undefined8 *)(param_1 + 0x10));
    uVar6 = FUN_10030a7f4(*(undefined8 *)(param_1 + 0x10));
    bVar3 = FUN_10030a86c(*(undefined8 *)(param_1 + 0x10));
    if ((bVar3 & 1) == 0) {
      uVar6 = (ulong)((int)uVar6 - 1);
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar10 = FUN_10030a820(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar10 = 0;
    }
    FUN_100298078(uVar7,uVar10);
    if (uVar5 != 0) {
      uVar12 = 0;
      do {
        uVar11 = (uint)uVar6;
        bVar13 = 1;
        if (uVar11 <= uVar12) {
          bVar13 = uVar11 == uVar12 & (bVar3 ^ 1);
        }
        if (uVar11 == uVar12) {
          FUN_10030a920(*(undefined8 *)(param_1 + 0x10),uVar6);
          uVar8 = FUN_1004d2538();
          puVar1 = PTR_s_build___DailyLogin_7Day_tga_1018549f8;
          if ((uVar8 & 1) == 0) {
            uVar7 = *(undefined8 *)(param_1 + 8);
            uVar10 = FUN_10030a920(*(undefined8 *)(param_1 + 0x10),uVar6);
            uVar9 = FUN_10030a960(*(undefined8 *)(param_1 + 0x10),uVar6);
            FUN_1002fc7a8(uVar7,puVar1,uVar10,uVar9);
          }
          else {
            uVar7 = FUN_10030a960(*(undefined8 *)(param_1 + 0x10),uVar6);
            FUN_1004e34d8(uVar7,&local_a8,0xffffffff);
            FUN_100102450(auStack_e8,"*%s*");
            iVar4 = FUN_10034be94(auStack_e8);
            if (iVar4 == 0) {
              uVar7 = FUN_10030a960(*(undefined8 *)(param_1 + 0x10),uVar6);
              uVar10 = FUN_10030a8e0(*(undefined8 *)(param_1 + 0x10),uVar6);
              FUN_1001ebb40(param_1,uVar7,uVar10);
            }
            else {
              FUN_1001eba8c(param_1,auStack_e8);
            }
          }
          bVar2 = bVar13 != 0;
          bVar13 = 2;
          if (bVar2) {
            bVar13 = 3;
          }
        }
        uVar7 = *(undefined8 *)(param_1 + 8);
        uVar10 = FUN_10030a8e0(*(undefined8 *)(param_1 + 0x10),uVar12);
        uVar9 = FUN_10030a920(*(undefined8 *)(param_1 + 0x10),uVar12);
        FUN_100297e54(uVar7,bVar13,uVar10,uVar9);
        uVar12 = uVar12 + 1;
      } while (uVar5 != uVar12);
    }
    FUN_100297c68(*(undefined8 *)(param_1 + 8));
    iVar4 = FUN_10030a7f4(*(undefined8 *)(param_1 + 0x10));
    if (iVar4 == 0) {
      FUN_1002980d4(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_100297bf8();
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1001eba8c(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar1 = FUN_10034be08(param_2);
  FUN_100102450(auStack_78,"portrait_%s");
  pvVar2 = operator_new(0x690);
  thunk_FUN_100296f70(pvVar2,auStack_78,0);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_1004e0150(*(undefined8 *)(lVar1 + 0x18),0);
  FUN_1002fc7a0(uVar4,pvVar2,uVar3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001ebb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x690);
  thunk_FUN_100296f70(pvVar1,param_3,1);
  FUN_1002fc7a0(*(undefined8 *)(param_1 + 8),pvVar1,param_2);
  return;
}




void FUN_1001ebb90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  code *pcStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_10030a86c();
    if (iVar1 == 0) {
      uVar2 = FUN_10030a820(*(undefined8 *)(param_1 + 0x10));
      FUN_100298078(*(undefined8 *)(param_1 + 8),uVar2);
      return;
    }
    FUN_100298078(*(undefined8 *)(param_1 + 8),0);
    pcStack_28 = thunk_FUN_1001ebb90;
    local_30 = param_1;
    FUN_100643a8c(&local_30);
  }
  return;
}




ulong FUN_1001ebc04(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = FUN_10030a7ec(), (int)uVar3 != 0)) {
    iVar1 = FUN_10030a7f4(*(undefined8 *)(param_1 + 0x10));
    iVar2 = FUN_10030a7ac(*(undefined8 *)(param_1 + 0x10));
    uVar3 = (ulong)(iVar2 <= iVar1);
  }
  return uVar3;
}




void FUN_1001ebc4c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_40 [3];
  code *pcStack_28;
  
  FUN_10030a894(*(undefined8 *)(param_1 + 0x10));
  lVar2 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    plVar4 = *(long **)(lVar2 + 0x28);
    do {
      if (*plVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x20),plVar4,plVar4 + 4);
        lVar2 = *(long *)(param_1 + 0x10);
        break;
      }
      lVar3 = lVar3 + -0x20;
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
  local_40[1] = 0;
  pcStack_28 = thunk_FUN_1001eb81c;
  local_40[0] = param_1;
  local_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x20,local_40);
  return;
}




void thunk_FUN_1001ebb90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lStack_30;
  code *pcStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_10030a86c();
    if (iVar1 == 0) {
      uVar2 = FUN_10030a820(*(undefined8 *)(param_1 + 0x10));
      FUN_100298078(*(undefined8 *)(param_1 + 8),uVar2);
      return;
    }
    FUN_100298078(*(undefined8 *)(param_1 + 8),0);
    pcStack_28 = thunk_FUN_1001ebb90;
    lStack_30 = param_1;
    FUN_100643a8c(&lStack_30);
  }
  return;
}




void thunk_FUN_1001eb81c(void)

{
  FUN_1001eb81c();
  return;
}




code * FUN_1001ebce0(code *param_1,undefined4 param_2,code param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *local_70;
  code *pcStack_68;
  code *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146b358;
  operator_new(0x7048);
  lVar2 = thunk_FUN_100298a8c();
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146b308;
  *(code **)(lVar2 + 0xd8) = param_1;
  *(undefined ***)param_1 = &PTR_thunk_FUN_1001ee2bc_10146b278;
  *(long *)(param_1 + 8) = lVar2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = 0x28;
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0xf0);
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x1b8);
  FUN_1001fba98(param_1 + 0x1b8,param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x1350) = 0;
  *(undefined8 *)(param_1 + 0x1348) = 0;
  _bzero(param_1 + 0x1e8,0x1152);
  *(code **)(param_1 + 0x1340) = param_1 + 0x1348;
  *(undefined8 *)(param_1 + 0x1368) = 0;
  *(undefined8 *)(param_1 + 0x1360) = 0;
  *(code **)(param_1 + 0x1358) = param_1 + 0x1360;
  *(undefined8 *)(param_1 + 0x13c8) = 0;
  FUN_10003330c(param_1 + 0x13d0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  *(undefined8 *)(param_1 + 0x13f0) = 0;
  *(undefined8 *)(param_1 + 0x13e8) = 0;
  *(undefined8 *)(param_1 + 0x1408) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x1400) = 0xffffffffff;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  *(undefined4 *)(param_1 + 0x1414) = 0xffff;
  *(undefined4 *)(param_1 + 0x1418) = 0xffff;
  *(undefined4 *)(param_1 + 0x141c) = 0xffffffff;
  param_1[0x1420] = param_3;
  *(undefined4 *)(param_1 + 0x1421) = 0;
  operator_new(0x98);
  uVar3 = FUN_100308444();
  *(undefined8 *)(param_1 + 0x13c8) = uVar3;
  lVar2 = -0x38;
  do {
    *(undefined4 *)(param_1 + lVar2 + 0x13a8) = 0xffff;
    *(undefined4 *)(param_1 + lVar2 + 0x13ac) = 0xff;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  FUN_1001ec03c(param_1);
  local_70 = (code *)0x0;
  local_58 = thunk_FUN_1001ec300;
  pcStack_68 = param_1;
  local_60 = param_1;
  FUN_1001eee94(*(long *)(param_1 + 0x13c8) + 0x18,&local_70);
  pcStack_68 = (code *)0x0;
  local_58 = FUN_1001eef94;
  local_70 = param_1;
  local_60 = param_1;
  FUN_1000be5e4(*(long *)(param_1 + 0x13c8) + 0x48,&local_70);
  operator_new(0x58);
  lVar2 = FUN_1001e8db8();
  *(long *)(param_1 + 0x13e8) = lVar2;
  *(undefined4 *)(lVar2 + 0x50) = 100;
  FUN_1002903a8(*(undefined8 *)(lVar2 + 8),0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x13e8) + 8) + 0x41c0) = 0;
  FUN_100299bd0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x13e8) + 8),1,0);
  FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x13e8));
  operator_new(0x58);
  lVar2 = FUN_1001e8db8();
  *(long *)(param_1 + 0x13f0) = lVar2;
  *(undefined4 *)(lVar2 + 0x50) = 10;
  FUN_1002903a8(*(undefined8 *)(lVar2 + 8),1);
  FUN_100299bd0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x13f0) + 8),0,1);
  FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x13f0));
  FUN_100299cb4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1c0));
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 0x1c0),0);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = FUN_1003467f8();
    FUN_1003467f8();
    uVar4 = FUN_10034cdd0();
    FUN_1001d5ff0(lVar2 + 0xd98,uVar3,uVar4);
  }
  local_48 = DAT_101d237e0;
  local_70 = FUN_1001ec09c;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_60 = (code *)0x0;
  pcStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_70);
  local_48 = DAT_101d237e4;
  local_70 = FUN_1001ec0b0;
  local_58 = (code *)0x0;
  uStack_50 = 0;
  local_60 = (code *)0x0;
  pcStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_70);
  pcStack_68 = thunk_FUN_1001ee514;
  local_70 = param_1;
  FUN_100643618(0xbf800000,&local_70,0,1);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cdd8();
    if (iVar1 != 0) {
      FUN_1003467f8();
      FUN_100106b14();
    }
  }
  return param_1;
}




void FUN_1001ec03c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_10034bdb4();
  lVar3 = *(long *)*plVar2;
  plVar2 = (long *)*plVar2;
  while (lVar3 != 0) {
    iVar1 = FUN_1001311c4();
    if ((iVar1 == 0) || (*(char *)(*plVar2 + 8) != '\0')) {
      FUN_100299e78(*(undefined8 *)(param_1 + 8));
    }
    lVar3 = plVar2[1];
    plVar2 = plVar2 + 1;
  }
  FUN_100299cfc(*(undefined8 *)(param_1 + 8));
  FUN_10029a2a0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001ec09c(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) | 4;
  return;
}




void FUN_1001ec0b0(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb
  ;
  return;
}




code * thunk_FUN_1001ebce0(code *param_1,undefined4 param_2,code param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146b358;
  operator_new(0x7048);
  lVar2 = thunk_FUN_100298a8c();
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146b308;
  *(code **)(lVar2 + 0xd8) = param_1;
  *(undefined ***)param_1 = &PTR_thunk_FUN_1001ee2bc_10146b278;
  *(long *)(param_1 + 8) = lVar2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = 0x28;
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0xf0);
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x1b8);
  FUN_1001fba98(param_1 + 0x1b8,param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x1350) = 0;
  *(undefined8 *)(param_1 + 0x1348) = 0;
  _bzero(param_1 + 0x1e8,0x1152);
  *(code **)(param_1 + 0x1340) = param_1 + 0x1348;
  *(undefined8 *)(param_1 + 0x1368) = 0;
  *(undefined8 *)(param_1 + 0x1360) = 0;
  *(code **)(param_1 + 0x1358) = param_1 + 0x1360;
  *(undefined8 *)(param_1 + 0x13c8) = 0;
  FUN_10003330c(param_1 + 0x13d0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  *(undefined8 *)(param_1 + 0x13f0) = 0;
  *(undefined8 *)(param_1 + 0x13e8) = 0;
  *(undefined8 *)(param_1 + 0x1408) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x1400) = 0xffffffffff;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  *(undefined4 *)(param_1 + 0x1414) = 0xffff;
  *(undefined4 *)(param_1 + 0x1418) = 0xffff;
  *(undefined4 *)(param_1 + 0x141c) = 0xffffffff;
  param_1[0x1420] = param_3;
  *(undefined4 *)(param_1 + 0x1421) = 0;
  operator_new(0x98);
  uVar3 = FUN_100308444();
  *(undefined8 *)(param_1 + 0x13c8) = uVar3;
  lVar2 = -0x38;
  do {
    *(undefined4 *)(param_1 + lVar2 + 0x13a8) = 0xffff;
    *(undefined4 *)(param_1 + lVar2 + 0x13ac) = 0xff;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  FUN_1001ec03c(param_1);
  pcStack_70 = (code *)0x0;
  pcStack_58 = thunk_FUN_1001ec300;
  pcStack_68 = param_1;
  pcStack_60 = param_1;
  FUN_1001eee94(*(long *)(param_1 + 0x13c8) + 0x18,&pcStack_70);
  pcStack_68 = (code *)0x0;
  pcStack_58 = FUN_1001eef94;
  pcStack_70 = param_1;
  pcStack_60 = param_1;
  FUN_1000be5e4(*(long *)(param_1 + 0x13c8) + 0x48,&pcStack_70);
  operator_new(0x58);
  lVar2 = FUN_1001e8db8();
  *(long *)(param_1 + 0x13e8) = lVar2;
  *(undefined4 *)(lVar2 + 0x50) = 100;
  FUN_1002903a8(*(undefined8 *)(lVar2 + 8),0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x13e8) + 8) + 0x41c0) = 0;
  FUN_100299bd0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x13e8) + 8),1,0);
  FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x13e8));
  operator_new(0x58);
  lVar2 = FUN_1001e8db8();
  *(long *)(param_1 + 0x13f0) = lVar2;
  *(undefined4 *)(lVar2 + 0x50) = 10;
  FUN_1002903a8(*(undefined8 *)(lVar2 + 8),1);
  FUN_100299bd0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x13f0) + 8),0,1);
  FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x13f0));
  FUN_100299cb4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1c0));
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 0x1c0),0);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = FUN_1003467f8();
    FUN_1003467f8();
    uVar4 = FUN_10034cdd0();
    FUN_1001d5ff0(lVar2 + 0xd98,uVar3,uVar4);
  }
  uStack_48 = DAT_101d237e0;
  pcStack_70 = FUN_1001ec09c;
  pcStack_58 = (code *)0x0;
  uStack_50 = 0;
  pcStack_60 = (code *)0x0;
  pcStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_70);
  uStack_48 = DAT_101d237e4;
  pcStack_70 = FUN_1001ec0b0;
  pcStack_58 = (code *)0x0;
  uStack_50 = 0;
  pcStack_60 = (code *)0x0;
  pcStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_70);
  pcStack_68 = thunk_FUN_1001ee514;
  pcStack_70 = param_1;
  FUN_100643618(0xbf800000,&pcStack_70,0,1);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cdd8();
    if (iVar1 != 0) {
      FUN_1003467f8();
      FUN_100106b14();
    }
  }
  return param_1;
}




undefined8 * FUN_1001ec0c8(undefined8 *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1001ee2bc_10146b278;
  param_1[2] = &PTR_FUN_10146b308;
  if ((*(char *)((long)param_1 + 0xa3c) == '\x02') && (lVar4 = FUN_1003467f8(), lVar4 != 0)) {
    FUN_1003467f8();
    iVar3 = FUN_10034ce20();
    if ((iVar3 != 0) && (*(char *)((long)param_1 + 0x1337) == '\0')) {
      uVar2 = *(undefined1 *)((long)param_1 + 0xa3d);
      uVar5 = FUN_1003467f8();
      FUN_1001072c0(uVar2,uVar5);
    }
  }
  pcStack_28 = thunk_FUN_1001ee514;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  lVar4 = param_1[0x279];
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 != 0) {
    lVar6 = *(long *)(lVar4 + 0x20);
    lVar7 = (ulong)uVar1 << 5;
    do {
      puVar8 = (undefined8 *)(lVar6 + 8);
      lVar6 = lVar6 + 0x20;
      if ((undefined8 *)*puVar8 == param_1) {
        FUN_1001eefe4((uint *)(lVar4 + 0x18));
        lVar4 = param_1[0x279];
        break;
      }
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(lVar4 + 0x48);
  if (uVar1 != 0) {
    lVar6 = (ulong)uVar1 << 5;
    puVar8 = *(undefined8 **)(lVar4 + 0x50);
    do {
      if ((undefined8 *)*puVar8 == param_1) {
        FUN_1000c044c((uint *)(lVar4 + 0x48),puVar8,puVar8 + 4);
        break;
      }
      lVar6 = lVar6 + -0x20;
      puVar8 = puVar8 + 4;
    } while (lVar6 != 0);
  }
  if ((long *)param_1[0x27e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27e] + 0x10))();
  }
  param_1[0x27e] = 0;
  if ((long *)param_1[0x27d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27d] + 0x10))();
  }
  param_1[0x27d] = 0;
  if ((long *)param_1[0x279] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x279] + 8))();
  }
  param_1[0x279] = 0;
  if (*(char *)((long)param_1 + 0x13e7) < '\0') {
    operator_delete((void *)param_1[0x27a]);
  }
  FUN_1001eee08(param_1 + 0x26b,param_1[0x26c]);
  FUN_1001eee54(param_1 + 0x268,param_1[0x269]);
  param_1[0x37] = &PTR_FUN_10146e8c8;
  if ((void *)param_1[0x3a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a]);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  param_1[0x37] = &PTR____cxa_pure_virtual_10146b328;
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 8))();
  }
  param_1[0x38] = 0;
  lVar4 = 400;
  do {
    thunk_FUN_1001fb190((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x28;
  } while (lVar4 != 200);
  do {
    thunk_FUN_1001fb190((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x28;
  } while (lVar4 != 0);
  *param_1 = &PTR____cxa_pure_virtual_10146b358;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001ec0c8(void)

{
  FUN_1001ec0c8();
  return;
}




void FUN_1001ec2ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ec0c8();
  operator_delete(pvVar1);
  return;
}




void FUN_1001ec300(long param_1,void *param_2)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  pvVar1 = (void *)(param_1 + 0x1e8);
  FUN_1001ec43c(param_1,pvVar1,param_2);
  _memcpy((void *)(param_1 + 0xa3e),pvVar1,0x856);
  _memcpy(pvVar1,param_2,0x856);
  FUN_100299cfc(*(undefined8 *)(param_1 + 8));
  uVar6 = FUN_1001ec558(param_1);
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1421) = 1;
  }
  fVar4 = *(float *)((long)param_2 + 0x850);
  if (1.0 < ABS(*(float *)(param_1 + 0x1410) - fVar4)) {
    uVar7 = SUB41(fVar4,0);
    uVar8 = (undefined1)((uint)fVar4 >> 8);
    uVar9 = (undefined1)((uint)fVar4 >> 0x10);
    uVar10 = (undefined1)((uint)fVar4 >> 0x18);
    if (fVar4 <= 0.0) {
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    *(uint *)(param_1 + 0x1410) = CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
  }
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  if ((*(char *)(param_1 + 0x1421) != '\0') && (*(char *)(param_1 + 0x1424) == '\0')) {
    FUN_100299d84(*(undefined8 *)(param_1 + 8));
  }
  FUN_1001ec8b8(param_1);
  FUN_1001eca94(param_1);
  FUN_1001ecd0c(param_1);
  FUN_1001ecf18(param_1);
  FUN_1001ed078(param_1);
  bVar2 = *(byte *)(param_1 + 0x1335);
  uVar5 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = bVar2 / uVar5;
  }
  *(ulong *)(param_1 + 0x20) = param_1 + (ulong)((uint)bVar2 - uVar3 * uVar5) * 0x28 + 0x28;
  FUN_1001ed260(param_1);
  FUN_1001ed508(param_1);
  FUN_10029a35c((char)*(undefined4 *)((long)param_2 + 0x850),*(undefined8 *)(param_1 + 8));
  FUN_1001ed580(param_1);
  return;
}




void FUN_1001ec43c(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = FUN_1001ed87c();
  if ((int)uVar2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_2 + (ulong)uVar2 * 0xa6 + 0x108) != '\0';
  }
  lVar3 = 0;
  do {
    if (((bVar1) && (*(char *)(param_2 + 0x14 + lVar3) == '\0')) &&
       (*(char *)(param_3 + 0x14 + lVar3) != '\0')) {
      FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_hero_ban.mp3",0,0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  lVar3 = 0x10b;
  do {
    if (((bVar1) && (*(char *)(param_2 + lVar3) == '\0')) && (*(char *)(param_3 + lVar3) != '\0')) {
      FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_lock_in_confirm.mp3",0,0);
    }
    lVar3 = lVar3 + 0xa6;
  } while (lVar3 != 0x787);
  if ((*(char *)(param_3 + 0x854) == '\x03') && (*(char *)(param_2 + 0x854) != '\x03')) {
    FUN_1001e7a40("VO_Vainglory_SwapHeroes");
    return;
  }
  return;
}




void FUN_1001ec558(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined6 uStack_118;
  undefined2 local_112;
  undefined2 uStack_110;
  byte bStack_10e;
  char cStack_10d;
  undefined1 uStack_10c;
  char cStack_10b;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  iVar4 = FUN_1001ed87c();
  if (iVar4 == -1) goto LAB_1001ec878;
  uStack_78 = *(undefined8 *)(param_1 + 0x131c);
  local_80 = *(undefined8 *)(param_1 + 0x1314);
  uStack_70 = *(undefined8 *)(param_1 + 0x1324);
  uStack_68 = (undefined6)*(undefined8 *)(param_1 + 0x132c);
  uVar9 = *(undefined8 *)(param_1 + 0x1332);
  local_62 = (undefined2)uVar9;
  uStack_60 = (undefined4)((ulong)uVar9 >> 0x10);
  uStack_5c = (undefined2)((ulong)uVar9 >> 0x30);
  uStack_b8 = *(undefined8 *)(param_1 + 0x12dc);
  local_c0 = *(undefined8 *)(param_1 + 0x12d4);
  uStack_a8 = *(undefined8 *)(param_1 + 0x12ec);
  uStack_b0 = *(undefined8 *)(param_1 + 0x12e4);
  uStack_98 = *(undefined8 *)(param_1 + 0x12fc);
  local_a0 = *(undefined8 *)(param_1 + 0x12f4);
  uStack_88 = *(undefined8 *)(param_1 + 0x130c);
  uStack_90 = *(undefined8 *)(param_1 + 0x1304);
  uStack_f8 = *(undefined8 *)(param_1 + 0x129c);
  local_100 = *(undefined8 *)(param_1 + 0x1294);
  uStack_e8 = *(undefined8 *)(param_1 + 0x12ac);
  uStack_f0 = *(undefined8 *)(param_1 + 0x12a4);
  uStack_d8 = *(undefined8 *)(param_1 + 0x12bc);
  local_e0 = *(undefined8 *)(param_1 + 0x12b4);
  uStack_c8 = *(undefined8 *)(param_1 + 0x12cc);
  uStack_d0 = *(undefined8 *)(param_1 + 0x12c4);
  lVar10 = param_1 + (long)iVar4 * 0xa6;
  uStack_128 = *(undefined8 *)(lVar10 + 0x378);
  local_130 = *(undefined8 *)(lVar10 + 0x370);
  uStack_120 = *(undefined8 *)(lVar10 + 0x380);
  uStack_118 = (undefined6)*(undefined8 *)(lVar10 + 0x388);
  uVar9 = *(undefined8 *)(lVar10 + 0x38e);
  local_112 = (undefined2)uVar9;
  uStack_110 = (undefined2)((ulong)uVar9 >> 0x10);
  bStack_10e = (byte)((ulong)uVar9 >> 0x20);
  cStack_10d = (char)((ulong)uVar9 >> 0x28);
  uStack_10c = (undefined1)((ulong)uVar9 >> 0x30);
  cStack_10b = (char)((ulong)uVar9 >> 0x38);
  uStack_168 = *(undefined8 *)(lVar10 + 0x338);
  local_170 = *(undefined8 *)(lVar10 + 0x330);
  uStack_158 = *(undefined8 *)(lVar10 + 0x348);
  uStack_160 = *(undefined8 *)(lVar10 + 0x340);
  uStack_148 = *(undefined8 *)(lVar10 + 0x358);
  local_150 = *(undefined8 *)(lVar10 + 0x350);
  uStack_138 = *(undefined8 *)(lVar10 + 0x368);
  uStack_140 = *(undefined8 *)(lVar10 + 0x360);
  uStack_1a8 = *(undefined8 *)(lVar10 + 0x2f8);
  local_1b0 = *(undefined8 *)(lVar10 + 0x2f0);
  uStack_198 = *(undefined8 *)(lVar10 + 0x308);
  uStack_1a0 = *(undefined8 *)(lVar10 + 0x300);
  uStack_188 = *(undefined8 *)(lVar10 + 0x318);
  local_190 = *(undefined8 *)(lVar10 + 0x310);
  uStack_178 = *(undefined8 *)(lVar10 + 0x328);
  uStack_180 = *(undefined8 *)(lVar10 + 800);
  if (((*(char *)(param_1 + 0xa3c) == '\x02') &&
      (bStack_10e - 1 == (uint)*(byte *)(param_1 + 0xa3d))) &&
     ((uint)*(byte *)(param_1 + 0xa3d) != (uint)*(byte *)(param_1 + 0x1293))) {
    FUN_1001ed8c8(param_1);
  }
  *(uint *)(param_1 + 0x1400) = (uint)local_1b0._1_1_;
  FUN_1001ed9cc(param_1,&local_100,&local_1b0);
  if (uStack_60._3_1_ == '\0') {
    if (cStack_10d == '\0') goto LAB_1001ec6d8;
    FUN_100299e34(*(undefined8 *)(param_1 + 8));
    uVar7 = FUN_1001edafc(param_1,*(undefined4 *)(param_1 + 0x1414));
    if ((uVar7 & 1) == 0) {
      FUN_100299e40(*(undefined8 *)(param_1 + 8));
    }
    FUN_10021c2c8();
    if (*(char *)(param_1 + 0xa3c) == '\x01') {
      if (cStack_10b != '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0x1414);
        iVar5 = FUN_1001edba8(param_1,uVar1);
        if (iVar5 != 0) {
          FUN_10030876c(*(undefined8 *)(param_1 + 0x13c8),uVar1);
        }
      }
    }
    else if ((*(char *)(param_1 + 0xa3c) == '\x02') &&
            (iVar5 = FUN_1001edafc(param_1,*(undefined4 *)(param_1 + 0x1414)), iVar5 != 0)) {
      FUN_1003086d8(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1414));
    }
    *(uint *)(*(long *)(param_1 + 8) + 0x32c) =
         *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb;
  }
  else if (cStack_10d == '\0') {
LAB_1001ec6d8:
    FUN_10029986c(*(undefined8 *)(param_1 + 8));
  }
  if (local_1b0._3_1_ == '\0') {
    if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
       (lVar10 = FUN_10029a0e8(*(undefined8 *)(param_1 + 8)), lVar10 != 0)) {
      FUN_1001d1b9c();
    }
    *(undefined4 *)(param_1 + 0x1418) = 0xffff;
  }
  else {
    if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
       (lVar10 = FUN_10029a0e8(*(undefined8 *)(param_1 + 8)), lVar10 != 0)) {
      FUN_1001d1b38();
    }
    *(uint *)(param_1 + 0x1418) = (uint)uStack_1a8._1_2_;
    if (((local_100._3_1_ == '\0') || ((uint)uStack_f8._1_2_ != (uint)uStack_1a8._1_2_)) &&
       (puVar8 = (undefined8 *)FUN_10034be60(param_1 + 0x1418), *(char *)(param_1 + 0x1420) == '\0')
       ) {
      FUN_1001fbddc(param_1 + 0x1b8,1);
      FUN_1001fbb58(param_1 + 0x1b8,*puVar8);
    }
  }
  FUN_1001edc54(param_1,&local_1b0);
  *(undefined4 *)(param_1 + 0x1404) = *(undefined4 *)(param_1 + 0x1408);
  *(uint *)(param_1 + 0x1408) = (uint)local_1b0._5_1_;
  *(uint *)(param_1 + 0x140c) = (uint)local_1b0._6_1_;
  if (*(long *)(param_1 + 0x13f8) != 0) {
    FUN_100220b58();
  }
  *(undefined8 *)(param_1 + 0x12dc) = uStack_168;
  *(undefined8 *)(param_1 + 0x12d4) = local_170;
  *(undefined8 *)(param_1 + 0x12ec) = uStack_158;
  *(undefined8 *)(param_1 + 0x12e4) = uStack_160;
  *(ulong *)(param_1 + 0x1332) =
       CONCAT17(cStack_10b,
                CONCAT16(uStack_10c,
                         CONCAT15(cStack_10d,CONCAT14(bStack_10e,CONCAT22(uStack_110,local_112)))));
  *(undefined8 *)(param_1 + 0x131c) = uStack_128;
  *(undefined8 *)(param_1 + 0x1314) = local_130;
  *(ulong *)(param_1 + 0x132c) = CONCAT26(local_112,uStack_118);
  *(undefined8 *)(param_1 + 0x1324) = uStack_120;
  *(undefined8 *)(param_1 + 0x12fc) = uStack_148;
  *(undefined8 *)(param_1 + 0x12f4) = local_150;
  *(undefined8 *)(param_1 + 0x130c) = uStack_138;
  *(undefined8 *)(param_1 + 0x1304) = uStack_140;
  *(undefined8 *)(param_1 + 0x129c) = uStack_1a8;
  *(undefined8 *)(param_1 + 0x1294) = local_1b0;
  *(undefined8 *)(param_1 + 0x12ac) = uStack_198;
  *(undefined8 *)(param_1 + 0x12a4) = uStack_1a0;
  *(undefined8 *)(param_1 + 0x12bc) = uStack_188;
  *(undefined8 *)(param_1 + 0x12b4) = local_190;
  *(undefined8 *)(param_1 + 0x12cc) = uStack_178;
  *(undefined8 *)(param_1 + 0x12c4) = uStack_180;
  FUN_100530068(*(long *)(param_1 + 8) + 0x25f0,*(char *)(param_1 + 0x1297) != '\0');
  iVar5 = FUN_100126b8c();
  if ((iVar5 != 0) && (iVar5 = FUN_100299bc4(*(undefined8 *)(param_1 + 8)), iVar5 != 0)) {
    bVar2 = *(byte *)(param_1 + 0x1335);
    uVar6 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
    if (*(long *)(param_1 + 0x13c8) != 0) {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = bVar2 / uVar6;
      }
      FUN_1001fb98c(param_1 + (ulong)((uint)bVar2 - uVar3 * uVar6) * 0x28 + 0x28);
    }
  }
LAB_1001ec878:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(iVar4 != -1);
  }
  return;
}




void FUN_1001ec8b8(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  void *local_78 [2];
  char local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0x1424) == '\0') {
    lVar5 = 0;
    iVar2 = 0;
    iVar6 = 0;
    local_60 = 0;
    uStack_58 = 0;
    do {
      if (*(char *)(param_1 + lVar5 + 0x2f0) != '\0') {
        cVar1 = *(char *)(param_1 + lVar5 + 0x2f8);
        if (cVar1 == '\x02') {
          lVar4 = param_1 + (long)iVar6 * 0x28;
          lVar7 = lVar4 + 0xf0;
          FUN_100299b34(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar4 + 0xf8));
          FUN_1001fb218(lVar7,1);
          iVar6 = iVar6 + 1;
          uVar3 = 0;
LAB_1001ec9a8:
          FUN_1001fb210(lVar7,uVar3);
        }
        else if (cVar1 == '\x01') {
          lVar7 = param_1 + (long)iVar2 * 0x28;
          plVar8 = (long *)(lVar7 + 0x30);
          lVar7 = lVar7 + 0x28;
          FUN_100299a40(*(undefined8 *)(param_1 + 8),*plVar8);
          if (*(char *)(param_1 + 0x1421) != '\0') {
            *(uint *)(*plVar8 + 0x84) = *(uint *)(*plVar8 + 0x84) & 0xffffffef;
          }
          FUN_1002b9884(*plVar8,*(int *)(param_1 + 0x18) == 4);
          FUN_1001fb218(lVar7,1);
          iVar2 = iVar2 + 1;
          uVar3 = 1;
          goto LAB_1001ec9a8;
        }
        FUN_10001549c(local_78,param_1 + lVar5 + 0x351);
        FUN_10001617c(&local_60,local_78);
        if (local_61 < '\0') {
          operator_delete(local_78[0]);
        }
      }
      lVar5 = lVar5 + 0xa6;
    } while (lVar5 != 0x67c);
    if (*(char *)(param_1 + 0x1420) == '\0') {
      uVar3 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
      FUN_1001ed648(param_1,uVar3);
    }
    iVar2 = FUN_100126b8c();
    if ((iVar2 != 0) && (iVar2 = thunk_FUN_10052bc30(), iVar2 != 0)) {
      FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
      FUN_100129c9c();
    }
    FUN_1001ed750(param_1);
    *(undefined1 *)(param_1 + 0x1424) = 1;
    uVar3 = FUN_10015d3ec();
    FUN_100166b08(uVar3,&local_60);
    lVar5 = FUN_1003467f8();
    if (lVar5 != 0) {
      FUN_1003467f8();
      FUN_100106c68();
    }
    if (*(char *)(param_1 + 0x1420) == '\0') {
      FUN_1003467f8();
      iVar2 = FUN_10034cdd0();
      if (iVar2 != 0) {
        FUN_100102cdc();
      }
    }
    FUN_1002994a0(*(undefined8 *)(param_1 + 8),1);
    FUN_10001629c(&local_60,1);
  }
  return;
}




void FUN_1001eca94(long param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte bVar18;
  long lVar19;
  
  uVar9 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
  bVar18 = 0;
  bVar5 = false;
  lVar19 = 0x2f0;
  do {
    pcVar1 = (char *)(param_1 + lVar19);
    if (*pcVar1 != '\0') {
      uVar13 = (uint)uVar9;
      if ((uVar13 == (byte)pcVar1[8]) || (*(char *)(param_1 + 0x1421) != '\0')) {
        if (*(char *)(param_1 + lVar19 + 0xa3) == '\0') {
          bVar12 = 0;
        }
        else {
          bVar12 = *(byte *)(param_1 + 0x1421) ^ 1;
        }
        bVar6 = false;
        bVar18 = bVar12 & 1 | bVar18;
        bVar14 = true;
      }
      else {
        bVar14 = false;
        bVar6 = *(char *)(param_1 + lVar19 + 0xa3) != '\0';
      }
      bVar5 = bVar6 || bVar5 != false;
      bVar12 = *(byte *)(param_1 + lVar19 + 0xa1);
      uVar7 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
      uVar4 = 0;
      uVar15 = (uint)bVar12;
      if (uVar7 != 0) {
        uVar4 = uVar15 / uVar7;
      }
      uVar15 = uVar15 - uVar4 * uVar7;
      uVar16 = (ulong)uVar15;
      if (uVar13 == (byte)pcVar1[8]) {
        lVar10 = param_1 + uVar16 * 0x28 + 0x28;
        bVar6 = *(uint *)(param_1 + 0x1400) == (uint)*(byte *)(param_1 + lVar19 + 1);
      }
      else {
        lVar10 = param_1 + uVar16 * 0x28 + 0xf0;
        bVar6 = false;
      }
      FUN_1001fb66c(lVar10,pcVar1,uVar9,bVar6);
      if (bVar14) {
        lVar10 = param_1 + lVar19;
        bVar12 = *(byte *)(lVar10 + 5);
        uVar16 = (ulong)bVar12;
        if (uVar16 != 0xff) {
          lVar2 = param_1 + uVar16 * 4;
          *(int *)(lVar2 + 0x13a8) = *(int *)(lVar2 + 0x13a8) + 1;
        }
        if (((*(char *)(lVar10 + 0xa4) != '\0') && (*(char *)(param_1 + lVar19 + 3) != '\0')) &&
           (bVar12 < 6)) {
          lVar2 = param_1 + uVar16 * 8;
          *(uint *)(lVar2 + 0x1370) = (uint)*(ushort *)(param_1 + lVar19 + 9);
          *(uint *)(lVar2 + 0x1374) = (uint)*(byte *)(param_1 + lVar19 + 6);
          if (*(long *)(param_1 + 0x13f8) != 0) {
            FUN_100220b98();
            FUN_100220ba4(*(undefined8 *)(param_1 + 0x13f8),*(undefined1 *)(lVar10 + 5),
                          *(undefined4 *)(lVar2 + 0x1374));
          }
        }
        cVar3 = *(char *)(param_1 + lVar19 + 3);
        if ((cVar3 != '\0') && (*(char *)(param_1 + lVar19 + 0x859) != cVar3)) {
          if ((*(uint *)(param_1 + 0x1404) == (uint)*(byte *)(lVar10 + 5)) &&
             (*(uint *)(param_1 + 0x1404) != *(uint *)(param_1 + 0x1408))) {
            uVar11 = FUN_1003467f8();
            FUN_100109f0c(uVar11,*(undefined1 *)(lVar10 + 5));
          }
          FUN_1001edd68(param_1,pcVar1);
        }
      }
      else if (*(char *)(param_1 + 0x1420) == '\0') {
        FUN_1003467f8();
        iVar8 = FUN_10034cdd0();
        if (iVar8 != 0) {
          FUN_1001fb224(param_1 + uVar16 * 0x28 + 0xf0,uVar15 + 1);
        }
      }
      bVar12 = pcVar1[8];
      uVar17 = *(undefined8 *)(param_1 + 8);
      uVar11 = FUN_10034ea2c(*(undefined2 *)(param_1 + lVar19 + 0xb));
      FUN_10029a2ac(uVar17,uVar13 == bVar12,uVar11,pcVar1);
    }
    lVar19 = lVar19 + 0xa6;
  } while (lVar19 != 0x96c);
  FUN_100299de8(*(undefined8 *)(param_1 + 8),bVar18,bVar5);
  return;
}




void FUN_1001ecd0c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  uint local_68 [2];
  
  puVar1 = (undefined8 *)(param_1 + 0x1340);
  plVar2 = (long *)(param_1 + 0x1348);
  FUN_1001eee54(puVar1,*(undefined8 *)(param_1 + 0x1348));
  *(long **)(param_1 + 0x1340) = plVar2;
  *(undefined8 *)(param_1 + 0x1350) = 0;
  *(undefined8 *)(param_1 + 0x1348) = 0;
  uVar7 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
  lVar13 = 0;
  do {
    lVar9 = param_1 + lVar13 * 0xa6;
    if (*(byte *)(lVar9 + 0x2f8) == uVar7) {
      lVar12 = 0;
      do {
        lVar3 = param_1 + lVar13 * 0x18 + lVar12 * 4;
        uVar4 = *(uint *)(lVar3 + 0x200);
        if (uVar4 != 0xffff) {
          uVar5 = *(uint *)(lVar3 + 0xa56);
          plVar10 = (long *)*plVar2;
          plVar11 = plVar2;
          if (plVar10 == (long *)0x0) {
LAB_1001ecdf4:
            local_68[1] = 1;
            local_68[0] = uVar4;
            FUN_1001ef0c8(puVar1,local_68,local_68);
          }
          else {
            do {
              bVar6 = *(uint *)((long)plVar10 + 0x1c) < uVar4;
              if (!bVar6) {
                plVar11 = plVar10;
              }
              plVar10 = (long *)plVar10[bVar6];
            } while (plVar10 != (long *)0x0);
            if ((plVar11 == plVar2) || (uVar4 < *(uint *)((long)plVar11 + 0x1c)))
            goto LAB_1001ecdf4;
            *(int *)(plVar11 + 4) = (int)plVar11[4] + 1;
          }
          if ((uVar4 != uVar5) && (*(char *)(param_1 + 0xa3c) == '\x01')) {
            uVar8 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = (uint)lVar13 / uVar8;
            }
            if (*(char *)(param_1 + (ulong)((uint)lVar13 - uVar5 * uVar8) * 0x28 + 0x4b) == '\0') {
              FUN_1001ee0c0(param_1,uVar4,lVar9 + 0x2f0);
            }
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 6);
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 10) {
      if (*(char *)(param_1 + 0xa3c) == '\x01') {
        plVar11 = (long *)*puVar1;
        while (plVar11 != plVar2) {
          lVar13 = FUN_10029a0e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)((long)plVar11 + 0x1c))
          ;
          if (lVar13 != 0) {
            FUN_1001d1a30(lVar13,(int)plVar11[4]);
          }
          plVar10 = (long *)plVar11[1];
          if ((long *)plVar11[1] == (long *)0x0) {
            plVar10 = plVar11 + 2;
            bVar6 = *(long **)*plVar10 != plVar11;
            plVar11 = (long *)*plVar10;
            if (bVar6) {
              do {
                lVar13 = *plVar10;
                plVar10 = (long *)(lVar13 + 0x10);
                plVar11 = (long *)*plVar10;
              } while (*plVar11 != lVar13);
            }
          }
          else {
            do {
              plVar11 = plVar10;
              plVar10 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
        }
      }
      return;
    }
  } while( true );
}




void FUN_1001ecf18(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 uVar10;
  
  if (*(char *)(param_1 + 0x1421) == '\0') {
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar1 = param_1 + lVar9;
      bVar2 = *(byte *)(lVar1 + 0x391);
      uVar5 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
      if ((*(char *)(lVar1 + 0x2f0) != '\0') &&
         (bVar3 = *(byte *)(lVar1 + 0x2f8), uVar6 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8))
         , bVar3 == uVar6)) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = bVar2 / uVar5;
        }
        uVar5 = (uint)bVar2 - uVar6 * uVar5;
        lVar7 = param_1 + (ulong)uVar5 * 0x28;
        lVar1 = lVar7 + 0x28;
        cVar4 = *(char *)(lVar7 + 0x4b);
        uVar8 = (ulong)*(byte *)(param_1 + lVar9 + 0x2f1);
        if ((*(char *)(param_1 + 0x96c + uVar8 * 10 + (long)*(int *)(param_1 + 0x1400)) == '\0') ||
           (cVar4 != '\0')) {
          if (*(uint *)(param_1 + 0x141c) != uVar5) {
            if (*(char *)(param_1 + 0x96c + (long)*(int *)(param_1 + 0x1400) * 10 + uVar8) == '\0'
                || cVar4 != '\0') {
              FUN_1001fb3a0(lVar1,0,0);
            }
            else {
              FUN_1001fb404(lVar1,1);
            }
          }
        }
        else {
          if (*(char *)(param_1 + 0x1423) == '\0') {
            FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_trade_want.mp3",0,0)
            ;
          }
          uVar10 = 1;
          if (*(uint *)(param_1 + 0x141c) != uVar5) {
            FUN_1001fb3f4(lVar1,1);
          }
        }
      }
      lVar9 = lVar9 + 0xa6;
    } while (lVar9 != 0x67c);
    *(undefined1 *)(param_1 + 0x1423) = uVar10;
  }
  return;
}




void FUN_1001ed078(long param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_40 [8];
  void *local_38;
  
  thunk_FUN_1004e439c(auStack_40,&DAT_101d91650);
  lVar6 = 0;
  iVar5 = -1;
  lVar7 = 0x393;
  do {
    if (*(char *)(param_1 + lVar7) != '\0') {
      iVar5 = (int)lVar6;
    }
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 0xa6;
  } while (lVar6 != 10);
  if (iVar5 == -1) {
    if (*(char *)(param_1 + 0xa3c) != '\x03') goto LAB_1001ed1f8;
    pcVar3 = "MENU_DRAFT_LOBBY_HERO_SWAP_PROMPT";
    goto LAB_1001ed1e4;
  }
  lVar6 = param_1 + (long)iVar5 * 0xa6 + 0x2f0;
  if (*(char *)(param_1 + 0xa3c) == '\x02') {
    if (*(char *)(param_1 + 0x1337) != '\0') {
      if (*(int *)(param_1 + 0x1414) == 0xffff) {
        pcVar3 = "MENU_DRAFT_LOBBY_LABEL_SELECT_A_HERO";
      }
      else {
        if (*(char *)(param_1 + 0x1297) != '\0') goto LAB_1001ed18c;
        pcVar3 = "MENU_DRAFT_LOBBY_LABEL_LOCK_IN_A_HERO";
      }
LAB_1001ed1e4:
      uVar4 = FUN_1004e0150(pcVar3,0);
      FUN_1000153b4(auStack_40,uVar4);
      goto LAB_1001ed1f8;
    }
LAB_1001ed18c:
    bVar1 = *(byte *)(param_1 + (long)iVar5 * 0xa6 + 0x2f8);
    uVar2 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
    if ((bVar1 != uVar2) && (*(char *)(param_1 + 0x1421) == '\0')) {
      pcVar3 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ENEMY_SELECTING";
LAB_1001ed238:
      uVar4 = FUN_1004e0150(pcVar3,0);
      FUN_1000153b4(auStack_40,uVar4);
      FUN_1001ee024(param_1,auStack_40,lVar6);
      goto LAB_1001ed1f8;
    }
    pcVar3 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ALLY_SELECTING";
  }
  else {
    if (*(char *)(param_1 + 0xa3c) != '\x01') goto LAB_1001ed1f8;
    if (*(char *)(param_1 + 0x1337) != '\0') {
      pcVar3 = "MENU_DRAFT_LOBBY_LABEL_BAN_A_HERO";
      goto LAB_1001ed1e4;
    }
    bVar1 = *(byte *)(param_1 + (long)iVar5 * 0xa6 + 0x2f8);
    uVar2 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
    if ((bVar1 != uVar2) && (*(char *)(param_1 + 0x1421) == '\0')) {
      pcVar3 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ENEMY_BANNING";
      goto LAB_1001ed238;
    }
    pcVar3 = "MENU_DRAFT_LOBBY_LABEL_NAMED_ALLY_BANNING";
  }
  uVar4 = FUN_1004e0150(pcVar3,0);
  uVar4 = FUN_1000153b4(auStack_40,uVar4);
  FUN_1001edf0c(uVar4,auStack_40,lVar6);
LAB_1001ed1f8:
  FUN_10029a350(*(undefined8 *)(param_1 + 8),auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001ed260(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  void **ppvVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  undefined1 local_b9;
  void *local_b8 [2];
  char local_a1;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  lVar9 = FUN_1003467f8();
  if (lVar9 == 0) {
    lVar9 = 4;
  }
  else {
    FUN_1003467f8();
    iVar4 = FUN_10034ced0();
    lVar9 = 4;
    if (iVar4 == 0) {
      lVar9 = 2;
    }
  }
  lVar14 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar14 + 0x1e8);
    uVar5 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
    iVar4 = *(int *)(param_1 + lVar14 * 4 + 0x1ec);
    uVar7 = (uint)bVar1;
    iVar6 = 0xffff;
    if (((iVar4 != 0xffff) &&
        (lVar10 = FUN_10029a0e8(*(undefined8 *)(param_1 + 8),iVar4), iVar6 = iVar4, lVar10 != 0)) &&
       (*(char *)(param_1 + lVar14 + 0x1fc) != '\0')) {
      FUN_1001d1c94(lVar10,uVar7 == uVar5);
    }
    FUN_1000ea5b4(local_b8,iVar6);
    if (uVar7 == uVar5) {
      FUN_10001617c(&local_70,local_b8);
      local_b9 = *(char *)(param_1 + lVar14 + 0x1fc) != '\0';
      FUN_1001ed7fc(&local_80,&local_b9);
    }
    else {
      if (*(char *)(param_1 + lVar14 + 0x1fc) == '\0') {
        local_b9 = 0;
        FUN_1001ed7fc(&local_a0,&local_b9);
        ppvVar11 = (void **)&DAT_101d91198;
      }
      else {
        local_b9 = 1;
        FUN_1001ed7fc(&local_a0,&local_b9);
        ppvVar11 = local_b8;
      }
      FUN_10001617c(&local_90,ppvVar11);
    }
    if (local_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
    lVar14 = lVar14 + 1;
  } while (lVar9 != lVar14);
  FUN_10029a368(*(undefined8 *)(param_1 + 8),&local_70,&local_80,0);
  FUN_10029a368(*(undefined8 *)(param_1 + 8),&local_90,&local_a0,1);
  bVar2 = *(byte *)((ulong)*(byte *)(param_1 + 0xa3d) + param_1 + 0x1e7);
  uVar7 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
  bVar1 = *(byte *)(param_1 + 0x1e8);
  uVar8 = FUN_10030884c(*(undefined8 *)(param_1 + 0x13c8));
  bVar3 = *(byte *)(param_1 + 0xa3d) >> 1;
  uVar5 = (uint)bVar3;
  uVar13 = (uint)bVar2;
  if (bVar1 == uVar8) {
    if (uVar13 == uVar7) {
LAB_1001ed458:
      uVar12 = 0;
      goto LAB_1001ed464;
    }
    uVar5 = bVar3 - 1;
  }
  else if (uVar13 == uVar7) {
    uVar5 = bVar3 - 1;
    goto LAB_1001ed458;
  }
  uVar12 = 1;
LAB_1001ed464:
  FUN_100299d9c(*(undefined8 *)(param_1 + 8),uVar5,uVar12);
  iVar4 = FUN_1001ed87c(param_1);
  if (((iVar4 == -1) && (*(char *)(param_1 + 0xb43) != '\0')) &&
     ((*(char *)(param_1 + 0x1292) == '\x01' &&
      ((*(byte *)(param_1 + 0x1293) != *(byte *)(param_1 + 0xa3d) &&
       (*(char *)((ulong)*(byte *)(param_1 + 0x1293) + param_1 + 0x1fb) == '\0')))))) {
    uVar12 = FUN_1003467f8();
    FUN_100106ea8(uVar12,*(undefined1 *)(param_1 + 0x1293));
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_10001629c(&local_90,1);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  FUN_10001629c(&local_70,1);
  return;
}




void FUN_1001ed508(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x13f8) != 0) {
    lVar4 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    do {
      if (iVar1 == 4) {
        uVar3 = FUN_10034cc1c();
        if ((uVar3 & 1) != 0) {
LAB_1001ed554:
          FUN_100220bb0(*(undefined8 *)(param_1 + 0x13f8),lVar4,
                        *(undefined4 *)(param_1 + 0x13a8 + lVar4 * 4));
        }
      }
      else {
        iVar2 = FUN_10034cc04(lVar4);
        if (iVar2 != 0) goto LAB_1001ed554;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 7);
  }
  return;
}




void FUN_1001ed580(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  do {
    lVar3 = *(long *)(param_1 + lVar2 + 0x30);
    uVar1 = *(uint *)(lVar3 + 0x121c);
    *(uint *)(lVar3 + 0x121c) =
         uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(*(char *)(param_1 + 0xa3c) == '\x02') << 2;
    lVar3 = *(long *)(param_1 + lVar2 + 0xf8);
    uVar1 = *(uint *)(lVar3 + 0x121c);
    *(uint *)(lVar3 + 0x121c) =
         uVar1 & 0xfffffff8 | uVar1 & 3 | (uint)(*(char *)(param_1 + 0xa3c) == '\x02') << 2;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 200);
  if (*(char *)(param_1 + 0xa3c) != '\x01') {
    FUN_100299d9c(*(undefined8 *)(param_1 + 8),0xffffffff,1);
    FUN_100299d9c(*(undefined8 *)(param_1 + 8),0xffffffff,0);
    if (*(char *)(param_1 + 0xa3c) == '\x03') {
      FUN_1001ee2bc(param_1,0xffff);
      FUN_1002994a0(*(undefined8 *)(param_1 + 8),0);
      return;
    }
  }
  return;
}




void FUN_1001ed750(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar5 = (undefined8 *)FUN_10034bdb4();
  plVar7 = (long *)*puVar5;
  if (*plVar7 != 0) {
    do {
      iVar2 = FUN_1001311c4();
      if ((iVar2 == 0) || (*(char *)((undefined8 *)*plVar7 + 1) != '\0')) {
        uVar3 = (**(code **)(**(long **)(param_1 + 0x13c8) + 0x48))
                          (*(long **)(param_1 + 0x13c8),*(undefined8 *)*plVar7);
        uVar4 = FUN_1004eef10();
        cVar1 = *(char *)(param_1 + 0x1421);
        uVar6 = FUN_100345b94();
        uVar6 = FUN_1003b1948(uVar6,*(undefined8 *)*plVar7);
        FUN_10029a0a0(*(undefined8 *)(param_1 + 8),uVar6,(uint)(cVar1 != '\0') | uVar4 ^ 1 | uVar3);
      }
      plVar7 = plVar7 + 1;
    } while (*plVar7 != 0);
  }
  return;
}




void FUN_1001ed7fc(uint *param_1,undefined1 *param_2)

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
    FUN_1001ef054(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined1 *)((ulong)(uVar3 + 1) + *(long *)(param_1 + 2) + -1) = *param_2;
  return;
}




long FUN_1001ed87c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined2 *puVar3;
  
  lVar2 = 0;
  puVar3 = (undefined2 *)(param_1 + 0x2fb);
  while ((*(char *)((long)puVar3 + -0xb) == '\0' ||
         (uVar1 = FUN_10034ea2c(*puVar3), (uVar1 & 1) == 0))) {
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0x53;
    if (lVar2 == 10) {
      return 0xffffffff;
    }
  }
  return lVar2;
}




void FUN_1001ed8c8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_DRAFT_LOBBY_NEXT_TURN_MESSAGE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[EM]");
  FUN_1004e3120(auStack_50,"{210, 180, 39, 255}");
  FUN_1004e3d50(auStack_30,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,"[/EM]");
  FUN_1004e3120(auStack_50,"{\\}");
  FUN_1004e3d50(auStack_30,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  plVar2 = (long *)(param_1 + 0x13d0);
  if (*(char *)(param_1 + 0x13e7) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10010a794(plVar2,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1001ed9cc(long param_1,long param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  
  if ((*(char *)(param_1 + 0x1424) == '\0') && (*(char *)(param_3 + 0xa3) == '\0')) {
    FUN_1001e7a40("VO_Vainglory_Draft_Begins");
  }
  if ((*(char *)(param_3 + 0xa3) == '\0') || (*(char *)(param_2 + 0xa3) != '\0'))
  goto LAB_1001edab0;
  bVar2 = *(byte *)(param_1 + 0xa3c);
  if (bVar2 - 1 < 2) {
    iVar1 = FUN_100126a84();
    if (iVar1 != 0) {
      thunk_FUN_10052a3d4();
    }
    bVar2 = *(byte *)(param_1 + 0xa3c);
  }
  if (bVar2 == 1) {
    pcVar3 = "VO_Vainglory_Draft_Ban";
LAB_1001eda90:
    FUN_1001e7a40(pcVar3);
  }
  else if (bVar2 == 2) {
    pcVar3 = "VO_Vainglory_LockInHero";
    if (*(short *)(param_3 + 9) == -1) {
      iVar1 = FUN_1001edafc(param_1,*(undefined4 *)(param_1 + 0x1414));
      if (iVar1 == 0) {
        pcVar3 = "VO_Vainglory_SelectHero";
      }
    }
    goto LAB_1001eda90;
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_alert_turn.mp3",0,0);
LAB_1001edab0:
  if ((*(char *)(param_2 + 3) != '\0') && (*(short *)(param_2 + 9) != *(short *)(param_3 + 9))) {
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_trade.mp3",0,0);
    return;
  }
  return;
}




undefined8 FUN_1001edafc(long param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  
  if (param_2 != 0xffff) {
    uVar4 = 0;
    bVar1 = true;
    do {
      if ((*(uint *)(param_1 + 0x1fc + uVar4 * 4 + -0x10) == param_2) &&
         (*(char *)(param_1 + 0x1fc + uVar4) != '\0')) break;
      bVar1 = uVar4 < 3;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 4);
    if (!bVar1) {
      uVar4 = 0;
      pcVar3 = (char *)(param_1 + 0x2f0);
      bVar1 = true;
      do {
        if (((*pcVar3 != '\0') && (pcVar3[3] != '\0')) && (*(ushort *)(pcVar3 + 9) == param_2))
        break;
        bVar1 = uVar4 < 0xf;
        uVar4 = uVar4 + 1;
        pcVar3 = pcVar3 + 0xa6;
      } while (uVar4 != 0x10);
      if (!bVar1) {
        uVar2 = FUN_10030865c(*(undefined8 *)(param_1 + 0x13c8));
        return uVar2;
      }
    }
  }
  return 0;
}




byte FUN_1001edba8(long param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (param_2 != 0xffff) {
    uVar3 = 0;
    bVar1 = true;
    do {
      if ((*(uint *)(param_1 + 0x1fc + uVar3 * 4 + -0x10) == param_2) &&
         (*(char *)(param_1 + 0x1fc + uVar3) != '\0')) break;
      bVar1 = uVar3 < 3;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 4);
    if (!bVar1) {
      uVar3 = 0;
      pcVar2 = (char *)(param_1 + 0x2f0);
      bVar1 = true;
      do {
        if (((*pcVar2 != '\0') && (pcVar2[3] != '\0')) && (*(ushort *)(pcVar2 + 9) == param_2))
        break;
        bVar1 = uVar3 < 0xf;
        uVar3 = uVar3 + 1;
        pcVar2 = pcVar2 + 0xa6;
      } while (uVar3 != 0x10);
      return bVar1 ^ 1;
    }
  }
  return 0;
}




void FUN_1001edc54(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0xa3c) == '\x01') {
    lVar5 = 0;
    do {
      if ((*(int *)(param_1 + 0x1ec + lVar5 * 4) == *(int *)(param_1 + 0x1414)) &&
         (*(char *)(param_1 + 0x1ec + lVar5 + 0x10) != '\0')) {
        bVar1 = false;
        goto LAB_1001edce0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
    bVar1 = *(int *)(param_1 + 0x1414) != 0xffff;
LAB_1001edce0:
    if (*(char *)(param_2 + 0xa5) != '\0') {
      bVar1 = (bool)(bVar1 & *(char *)(param_2 + 0xa3) != '\0');
    }
  }
  else {
    iVar3 = FUN_1001edafc(param_1);
    if ((iVar3 == 0) || (*(char *)(param_2 + 3) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(param_2 + 0xa3) != '\0';
    }
  }
  uVar4 = FUN_10030865c(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1414));
  if ((uVar4 & 1) == 0) {
    bVar2 = *(int *)(param_1 + 0x1414) == 0xffff;
  }
  else {
    bVar2 = true;
  }
  FUN_10029a334(*(undefined8 *)(param_1 + 8),bVar1,*(char *)(param_1 + 0xa3c) == '\x01',
                *(char *)(param_2 + 0xa5) != '\0',bVar2);
  return;
}




void FUN_1001edd68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  uint local_40 [2];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_DRAFT_LOBBY_LOCK_IN_HERO_MESSAGE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  if (*(ushort *)(param_2 + 9) != 0xffff) {
    local_40[0] = (uint)*(ushort *)(param_2 + 9);
    puVar2 = (undefined8 *)FUN_10034be60(local_40);
    lVar3 = FUN_10034bf64(*puVar2);
    if (lVar3 == 0) {
      puVar2 = &DAT_101d91650;
    }
    else {
      puVar2 = (undefined8 *)FUN_1004e0150(*(undefined8 *)(lVar3 + 0x28),0);
    }
    uVar1 = thunk_FUN_1004e439c(local_40,puVar2);
    FUN_1001edf0c(uVar1,auStack_30,param_2);
    FUN_1004e3120(auStack_50,"[HERO NAME]");
    FUN_1004e3bc4(auStack_30,0,auStack_50,local_40);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1004e3120(auStack_50,"[EM]");
    FUN_1004e3120(auStack_60,"{210, 180, 39, 255}");
    FUN_1004e3bc4(auStack_30,4,auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1004e3120(auStack_50,"[/EM]");
    FUN_1004e3120(auStack_60,"{\\}");
    FUN_1004e3bc4(auStack_30,0x16,auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    plVar4 = (long *)(param_1 + 0x13d0);
    if (*(char *)(param_1 + 0x13e7) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    FUN_10010a794(plVar4,auStack_30);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1001edf0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  thunk_FUN_1004e439c(auStack_30,&DAT_101d91650);
  FUN_1004e3148(auStack_30,param_3 + 0x11);
  FUN_1004e3120(auStack_40,"[PLAYER NAME]");
  FUN_1004e3bc4(param_2,0,auStack_40,auStack_30);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,"[EM]");
  FUN_1004e3120(auStack_50,"{68, 156, 188, 255}");
  FUN_1004e3bc4(param_2,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,"[/EM]");
  FUN_1004e3120(auStack_50,"{\\}");
  FUN_1004e3bc4(param_2,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1001ee024(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_100299bc4(*(undefined8 *)(param_1 + 8));
  thunk_FUN_1004e439c(auStack_30,&DAT_101d91650);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1004e3120(auStack_40,"[NUM]");
  FUN_1004e3bc4(param_2,0,auStack_40,auStack_30);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1001ee0c0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  uint local_58 [2];
  void *local_50;
  undefined1 auStack_48 [8];
  void *local_40;
  int local_34;
  
  local_34 = param_2;
  uVar2 = FUN_1004e0150("MENU_DRAFT_LOBBY_BAN_HERO_MESSAGE",0);
  thunk_FUN_1004e439c(auStack_48,uVar2);
  if (param_2 != 0xffff) {
    local_58[0] = (uint)*(byte *)(param_3 + 1);
    puVar3 = (uint *)FUN_1001ee458(param_1 + 0x1358,local_58);
    uVar1 = *puVar3;
    uVar7 = (ulong)uVar1;
    if ((int)uVar1 < 3) {
      if (0 < (int)uVar1) {
        piVar8 = *(int **)(puVar3 + 2);
        do {
          if (*piVar8 == param_2) goto LAB_1001ee29c;
          piVar8 = piVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      FUN_1000228fc(puVar3,&local_34);
      puVar4 = (undefined8 *)FUN_10034be60(&local_34);
      lVar5 = FUN_10034bf64(*puVar4);
      if (lVar5 == 0) {
        puVar4 = &DAT_101d91650;
      }
      else {
        puVar4 = (undefined8 *)FUN_1004e0150(*(undefined8 *)(lVar5 + 0x28),0);
      }
      uVar2 = thunk_FUN_1004e439c(local_58,puVar4);
      FUN_1001edf0c(uVar2,auStack_48,param_3);
      FUN_1004e3120(auStack_68,"[HERO NAME]");
      FUN_1004e3bc4(auStack_48,0,auStack_68,local_58);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1004e3120(auStack_68,"[EM]");
      FUN_1004e3120(auStack_78,"{210, 180, 39, 255}");
      FUN_1004e3bc4(auStack_48,4,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      FUN_1004e3120(auStack_68,"[/EM]");
      FUN_1004e3120(auStack_78,"{\\}");
      FUN_1004e3bc4(auStack_48,0x16,auStack_68,auStack_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
      }
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
      }
      plVar6 = (long *)(param_1 + 0x13d0);
      if (*(char *)(param_1 + 0x13e7) < '\0') {
        plVar6 = (long *)*plVar6;
      }
      FUN_10010a794(plVar6,auStack_48);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
      }
    }
  }
LAB_1001ee29c:
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  return;
}




void FUN_1001ee2bc(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (*(char *)(param_1 + 0xa3c) == '\x03' && iVar2 != 0xffff) {
    return;
  }
  if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
     (lVar1 = FUN_10029a0e8(*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    FUN_1001d1b38();
  }
  *(int *)(param_1 + 0x1414) = iVar2;
  FUN_100530068(*(long *)(param_1 + 8) + 0x1ec0,iVar2 != 0xffff);
  if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
     (lVar1 = FUN_10029a0e8(*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    FUN_1001d1b9c();
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
    FUN_10029986c(*(undefined8 *)(param_1 + 8));
  }
  FUN_1001edc54(param_1,param_1 + 0x1294);
  if (*(byte *)(param_1 + 0xa3c) == 1) {
    if (*(char *)(param_1 + 0x1339) != '\0') {
      FUN_10030876c(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1414));
      return;
    }
  }
  else if (1 < *(byte *)(param_1 + 0xa3c) - 1) {
    return;
  }
  FUN_1003086d8(*(undefined8 *)(param_1 + 0x13c8),param_2);
  return;
}




void FUN_1001ee3d4(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_100644b2c(param_2);
  iVar1 = FUN_10034cbf8();
  if ((iVar1 != 0) && (*(int *)(param_1 + (uVar2 & 0xffffffff) * 8 + 0x1370) != 0xffff)) {
    uVar2 = 0xff;
    FUN_100220b58(*(undefined8 *)(param_1 + 0x13f8),0xff,*(undefined4 *)(param_1 + 0x140c));
  }
  FUN_100308788(*(undefined8 *)(param_1 + 0x13c8),uVar2);
  return;
}




void FUN_1001ee43c(long param_1)

{
  FUN_100308780(*(undefined8 *)(param_1 + 0x13c8));
  return;
}




void FUN_1001ee444(long param_1)

{
  FUN_100308780(*(undefined8 *)(param_1 + 0x13b8));
  return;
}




void FUN_1001ee44c(void)

{
  return;
}




void FUN_1001ee450(void)

{
  return;
}




void thunk_FUN_1001ee2bc(void)

{
  FUN_1001ee2bc();
  return;
}




undefined8 * FUN_1001ee458(long param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1001ee4d0:
    iVar4 = *param_2;
  }
  else {
    iVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, *(int *)(puVar2 + 4) <= iVar4) {
        if (iVar4 <= *(int *)(puVar2 + 4)) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_1001ee4fc;
          goto LAB_1001ee4d0;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_1001ee4d4;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_1001ee4d4:
  puVar3 = operator_new(0x38);
  *(int *)(puVar3 + 4) = iVar4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  FUN_1001ef1e4(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_1001ee4fc:
  return puVar2 + 5;
}




void FUN_1001ee514(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_2 + 0x1410) - param_1;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_2 + 0x1410) = fVar7;
  if (*(char *)(param_2 + 0x1337) == '\0') {
    return;
  }
  fVar7 = fVar7 + -1.0;
  param_1 = fVar7 + param_1;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar7 <= 10.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 10.0;
      bVar2 = param_1 == 10.0;
      bVar3 = false;
    }
  }
  if ((bVar2 || bVar1 != bVar3) || (fVar7 == 0.0)) {
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar7 <= 5.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 5.0;
        bVar2 = param_1 == 5.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 < fVar7) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar7)) {
          bVar1 = fVar7 < 4.0;
          bVar2 = fVar7 == 4.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        return;
      }
      iVar4 = 0;
      do {
        fVar6 = (float)iVar4;
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (fVar7 <= fVar6) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_1) && !NAN(fVar6)) {
            bVar1 = param_1 < fVar6;
            bVar2 = param_1 == fVar6;
            bVar3 = false;
          }
        }
        if (!bVar2 && bVar1 == bVar3) {
          FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_timer_count_down.mp3",
                        0,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 5);
      return;
    }
    iVar4 = FUN_100126a84();
    if (iVar4 != 0) {
      thunk_FUN_10052a3d4();
    }
    pcVar5 = "VO_Vainglory_Draft_5_Seconds";
  }
  else {
    pcVar5 = "VO_Vainglory_Draft_10_Seconds";
  }
  FUN_1001e7a40(pcVar5);
  return;
}




void FUN_1001ee604(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x1414) != 0xffff) {
    if (*(char *)(param_1 + 0x1337) == '\0') {
      if ((*(char *)(param_1 + 0x1339) == '\0') && (*(char *)(param_1 + 0xa3c) == '\x01')) {
        FUN_100308778(*(undefined8 *)(param_1 + 0x13c8));
        return;
      }
      FUN_1003086d8(*(undefined8 *)(param_1 + 0x13c8));
      return;
    }
    puVar2 = (undefined8 *)FUN_10034be60(param_1 + 0x1414);
    if (*(char *)(param_1 + 0x1339) != '\0' && *(char *)(param_1 + 0xa3c) == '\x01') {
      thunk_FUN_100120e18(*(undefined8 *)(param_1 + 0x13c8));
      uVar4 = *puVar2;
      uVar3 = FUN_1003467f8();
      FUN_100106d60(uVar4,uVar3,*(undefined1 *)(param_1 + 0xa3d));
      return;
    }
    if ((*(char *)(param_1 + 0xa3c) == '\x02') &&
       (iVar1 = FUN_1001edafc(param_1,*(undefined4 *)(param_1 + 0x1414)), iVar1 != 0)) {
      thunk_FUN_100120c08(*(undefined8 *)(param_1 + 0x13c8));
      uVar4 = *puVar2;
      uVar3 = FUN_1003467f8();
      FUN_100106fb0(uVar4,uVar3,*(undefined1 *)(param_1 + 0xa3d));
      return;
    }
  }
  return;
}




void FUN_1001ee720(long *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 + (long)param_2 * 5 + 5 != (long *)param_1[4]) {
    if (*(char *)((long)param_1 + (long)param_2 * 0x28 + 0x4a) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)((long)param_1 + 0x1297) != '\0';
    }
    iVar2 = *(int *)((long)param_1 + 0x141c);
    if (iVar2 != -1) {
      FUN_1001fb3a0(param_1 + (long)iVar2 * 5 + 5,0,0);
      *(undefined4 *)((long)param_1 + 0x141c) = 0xffffffff;
    }
    if ((iVar2 != param_2) &&
       (iVar2 = FUN_1001fb3a0(param_1 + (long)param_2 * 5 + 5,1,bVar1), iVar2 != 0)) {
      *(int *)((long)param_1 + 0x141c) = param_2;
    }
    FUN_1001ecf18(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001ee798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}




void FUN_1001ee804(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  FUN_100308560(*(undefined8 *)(param_1 + 0x13c8),*(undefined1 *)(param_1 + 0x1400),
                *(undefined1 *)(param_1 + (ulong)(param_2 - uVar1 * uVar2) * 0x28 + 0x48));
  FUN_1003467f8();
  FUN_1001070f8();
  return;
}




void FUN_1001ee854(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  FUN_10030856c(*(undefined8 *)(param_1 + 0x13c8),*(undefined1 *)(param_1 + 0x1400),
                *(undefined1 *)(param_1 + (ulong)(param_2 - uVar1 * uVar2) * 0x28 + 0x48));
  return;
}




void FUN_1001ee89c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  FUN_10030856c(*(undefined8 *)(param_1 + 0x13c8),
                *(undefined1 *)(param_1 + (ulong)(param_2 - uVar1 * uVar2) * 0x28 + 0x48),
                *(undefined1 *)(param_1 + 0x1400));
  FUN_1003467f8();
  FUN_1001071dc();
  return;
}




void FUN_1001ee8ec(long *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar3 = FUN_100299bc4(param_1[1]);
  uVar2 = 0;
  uVar5 = (uint)param_2;
  if (uVar3 != 0) {
    uVar2 = uVar5 / uVar3;
  }
  uVar2 = uVar5 - uVar2 * uVar3;
  thunk_FUN_1004e439c(auStack_40,&DAT_101d91650);
  FUN_1004e3148(auStack_40,(long)param_1 + (long)(int)uVar5 * 0xa6 + 0x301);
  if (*(uint *)((long)param_1 + 0x141c) == uVar2) {
    cVar1 = *(char *)((long)param_1 + (ulong)uVar2 * 0x28 + 0x4b);
    if (cVar1 == '\0') {
      FUN_1001e8f60(param_1[0x27d],auStack_40);
    }
    else {
      (**(code **)(*param_1 + 0x20))(param_1,param_2);
      FUN_1001e8f58(param_1[0x27d],auStack_40);
    }
    uVar4 = FUN_1003467f8();
    FUN_1001073d8(uVar4,cVar1 != '\0');
    FUN_1001fb3a0(param_1 + (ulong)uVar2 * 5 + 5,0,0);
    *(undefined4 *)((long)param_1 + 0x141c) = 0xffffffff;
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001ee9d8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  uVar3 = (ulong)(param_2 - uVar1 * uVar2);
  if ((*(char *)(param_1 + uVar3 * 0x28 + 0x4a) != '\0') && (*(char *)(param_1 + 0x1297) != '\0')) {
    FUN_100308578(*(undefined8 *)(param_1 + 0x13c8),*(undefined1 *)(param_1 + 0x1400),
                  *(undefined1 *)(param_1 + uVar3 * 0x28 + 0x48));
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_trade_want.mp3",0,0);
  }
  *(undefined4 *)(param_1 + 0x141c) = 0xffffffff;
  return;
}




void FUN_1001eea60(long param_1)

{
  undefined8 uVar1;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  if (*(int *)(param_1 + 0x1414) != 0xffff) {
    uVar1 = FUN_100345b94();
    uVar1 = FUN_100345ba0(uVar1,*(undefined4 *)(param_1 + 0x1414));
    FUN_10001549c(local_38,uVar1);
    FUN_10001549c(local_50,"");
    FUN_10021c264(local_38,local_50,1,&DAT_101873a48);
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_1001eeafc(long param_1)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x1297) != '\0') {
    puVar1 = (undefined8 *)FUN_10034be60(param_1 + 0x1418);
    FUN_1001fbddc(param_1 + 0x1b8,1);
    FUN_1001fbb58(param_1 + 0x1b8,*puVar1);
    return;
  }
  return;
}




void FUN_1001eeb58(long param_1)

{
  FUN_1003087a4(*(undefined8 *)(param_1 + 0x13c8));
  return;
}




void FUN_1001eeb60(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  code **ppcVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 uVar8;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if (*(long *)(param_3 + 0x13f8) == 0) {
    iVar2 = FUN_10030884c(*(undefined8 *)(param_3 + 0x13c8));
    if (*(long *)(param_3 + 0x20) == 0) {
      if (*(int *)(param_3 + 0x18) == 4) {
        ppcVar5 = (code **)&DAT_101873a48;
        uVar1 = 0;
      }
      else if (*(int *)(param_3 + 0x18) == 3) {
        ppcVar5 = (code **)&DAT_101873a48;
        uVar1 = 2;
      }
      else {
        ppcVar5 = (code **)&DAT_101873a48;
        uVar1 = 1;
      }
    }
    else {
      puVar3 = (undefined8 *)FUN_10003d5bc(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
      uVar8 = *puVar3;
      fVar7 = (float)(**(code **)(**(long **)(*(long *)(param_3 + 0x20) + 8) + 0x48))();
      lVar4 = FUN_10003d5bc(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
      local_80 = (code *)CONCAT44((float)((ulong)uVar8 >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) *
                                  param_2 * 0.5,
                                  (float)uVar8 + (float)*(undefined8 *)(lVar4 + 0x10) * fVar7 * 0.5)
      ;
      uVar1 = 2;
      if (*(int *)(param_3 + 0x18) != 3) {
        uVar1 = *(int *)(param_3 + 0x18) != 4;
      }
      ppcVar5 = &local_80;
    }
    lVar4 = FUN_100220a38(uVar1,iVar2 == 1,1,ppcVar5);
    *(long *)(param_3 + 0x13f8) = lVar4;
    local_58 = DAT_101d23830;
    local_80 = FUN_1001eedcc;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_3;
    FUN_10001554c(lVar4 + 8,&local_80);
    local_58 = DAT_101d23834;
    local_80 = FUN_1001eedd4;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_3;
    FUN_10001554c(*(long *)(param_3 + 0x13f8) + 8,&local_80);
    local_58 = DAT_101d91894;
    local_80 = FUN_1001eee00;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    lStack_78 = param_3;
    FUN_10001554c(*(long *)(param_3 + 0x13f8) + 8,&local_80);
    FUN_100220b8c(*(undefined8 *)(param_3 + 0x13f8),*(char *)(param_3 + 0x1338) != '\0');
    FUN_100220b58(*(undefined8 *)(param_3 + 0x13f8),*(undefined4 *)(param_3 + 0x1408),
                  *(undefined4 *)(param_3 + 0x140c));
    lVar4 = 0;
    puVar6 = (undefined4 *)(param_3 + 0x1374);
    do {
      if (puVar6[-1] != 0xffff) {
        FUN_100220b98(*(undefined8 *)(param_3 + 0x13f8),lVar4);
        FUN_100220ba4(*(undefined8 *)(param_3 + 0x13f8),lVar4,*puVar6);
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar6 + 2;
    } while (lVar4 != 7);
    FUN_1001ed508(param_3);
    if (*(char *)(param_3 + 0x1422) == '\0') {
      FUN_1001e7a40("VO_Vainglory_PositionBuildpath");
    }
    *(undefined1 *)(param_3 + 0x1422) = 1;
  }
  return;
}




void FUN_1001eedcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001ee3d4(param_1,param_4);
  return;
}




void FUN_1001eedd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_100308790(*(undefined8 *)(param_1 + 0x13c8),uVar1);
  return;
}




void FUN_1001eee00(long param_1)

{
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  return;
}




void FUN_1001eee08(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1001eee08(param_1,*param_2);
    FUN_1001eee08(param_1,param_2[1]);
    if ((void *)param_2[6] != (void *)0x0) {
      operator_delete__((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1001eee54(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1001eee54(param_1,*param_2);
    FUN_1001eee54(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1001eee94(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_1001eef18(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1001ec300(long param_1,void *param_2)

{
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  pvVar1 = (void *)(param_1 + 0x1e8);
  FUN_1001ec43c(param_1,pvVar1,param_2);
  _memcpy((void *)(param_1 + 0xa3e),pvVar1,0x856);
  _memcpy(pvVar1,param_2,0x856);
  FUN_100299cfc(*(undefined8 *)(param_1 + 8));
  uVar6 = FUN_1001ec558(param_1);
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1421) = 1;
  }
  fVar4 = *(float *)((long)param_2 + 0x850);
  if (1.0 < ABS(*(float *)(param_1 + 0x1410) - fVar4)) {
    uVar7 = SUB41(fVar4,0);
    uVar8 = (undefined1)((uint)fVar4 >> 8);
    uVar9 = (undefined1)((uint)fVar4 >> 0x10);
    uVar10 = (undefined1)((uint)fVar4 >> 0x18);
    if (fVar4 <= 0.0) {
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
    }
    *(uint *)(param_1 + 0x1410) = CONCAT13(uVar10,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)));
  }
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  if ((*(char *)(param_1 + 0x1421) != '\0') && (*(char *)(param_1 + 0x1424) == '\0')) {
    FUN_100299d84(*(undefined8 *)(param_1 + 8));
  }
  FUN_1001ec8b8(param_1);
  FUN_1001eca94(param_1);
  FUN_1001ecd0c(param_1);
  FUN_1001ecf18(param_1);
  FUN_1001ed078(param_1);
  bVar2 = *(byte *)(param_1 + 0x1335);
  uVar5 = FUN_100299bc4(*(undefined8 *)(param_1 + 8));
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = bVar2 / uVar5;
  }
  *(ulong *)(param_1 + 0x20) = param_1 + (ulong)((uint)bVar2 - uVar3 * uVar5) * 0x28 + 0x28;
  FUN_1001ed260(param_1);
  FUN_1001ed508(param_1);
  FUN_10029a35c((char)*(undefined4 *)((long)param_2 + 0x850),*(undefined8 *)(param_1 + 8));
  FUN_1001ed580(param_1);
  return;
}




void FUN_1001eef18(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
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




void FUN_1001eef94(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23654,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void thunk_FUN_1001ee514(float param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_2 + 0x1410) - param_1;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_2 + 0x1410) = fVar7;
  if (*(char *)(param_2 + 0x1337) == '\0') {
    return;
  }
  fVar7 = fVar7 + -1.0;
  param_1 = fVar7 + param_1;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (fVar7 <= 10.0) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 10.0;
      bVar2 = param_1 == 10.0;
      bVar3 = false;
    }
  }
  if ((bVar2 || bVar1 != bVar3) || (fVar7 == 0.0)) {
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (fVar7 <= 5.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 5.0;
        bVar2 = param_1 == 5.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = false;
      if (0.0 < fVar7) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar7)) {
          bVar1 = fVar7 < 4.0;
          bVar2 = fVar7 == 4.0;
          bVar3 = false;
        }
      }
      if (!bVar2 && bVar1 == bVar3) {
        return;
      }
      iVar4 = 0;
      do {
        fVar6 = (float)iVar4;
        bVar1 = false;
        bVar2 = true;
        bVar3 = false;
        if (fVar7 <= fVar6) {
          bVar1 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(param_1) && !NAN(fVar6)) {
            bVar1 = param_1 < fVar6;
            bVar2 = param_1 == fVar6;
            bVar3 = false;
          }
        }
        if (!bVar2 && bVar1 == bVar3) {
          FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_timer_count_down.mp3",
                        0,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 5);
      return;
    }
    iVar4 = FUN_100126a84();
    if (iVar4 != 0) {
      thunk_FUN_10052a3d4();
    }
    pcVar5 = "VO_Vainglory_Draft_5_Seconds";
  }
  else {
    pcVar5 = "VO_Vainglory_Draft_10_Seconds";
  }
  FUN_1001e7a40(pcVar5);
  return;
}




void FUN_1001eefe4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_1001ef054(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2);
    puVar2 = *(undefined1 **)(param_1 + 2);
    uVar3 = (ulong)*param_1;
    puVar4 = puVar1;
    puVar5 = puVar2;
    if (*param_1 != 0) {
      do {
        *puVar4 = *puVar5;
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined1 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined1 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined1  [16] FUN_1001ef0c8(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)((long)puVar3 + 0x1c)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1001ef13c;
      }
      if (*param_2 <= *(uint *)((long)puVar3 + 0x1c)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1001ef13c:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x28);
    *(undefined8 *)((long)pvVar5 + 0x1c) = *param_3;
    FUN_1001ef190(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_1001ef190(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_1001ef1e4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 * FUN_1001ef238(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b450;
  operator_new(0xc38);
  lVar2 = thunk_FUN_10029a420();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  iVar1 = 0;
  *param_1 = &PTR_FUN_10146b3d8;
  param_1[2] = &PTR_FUN_10146b410;
  do {
    uVar5 = param_1[1];
    uVar3 = FUN_10030b868(iVar1);
    uVar4 = FUN_10030b880(iVar1);
    FUN_10029a680(uVar5,uVar3,uVar4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xf);
  lVar2 = FUN_10030b85c();
  if (lVar2 != 0) {
    FUN_10030b85c();
    FUN_10030bbc8();
    lVar2 = FUN_10030b85c();
    local_50 = 0;
    pcStack_38 = thunk_FUN_1001ef328;
    puStack_48 = param_1;
    local_40 = param_1;
    FUN_1001ef548(lVar2 + 0x18,&local_50);
    FUN_10030b85c();
    iVar1 = FUN_10030bbc0();
    if (iVar1 != 0) {
      uVar3 = FUN_10030b85c();
      FUN_1001ef328(param_1,uVar3);
    }
  }
  return param_1;
}




void FUN_1001ef328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar1 = FUN_10030b868(iVar4);
    uVar2 = FUN_10030bc08(param_2,uVar1);
    FUN_10029a8f4(*(undefined8 *)(param_1 + 8),uVar1,uVar2);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xf);
  uVar3 = FUN_10030bbe4(param_2);
  if ((uVar3 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_10030bbec(param_2);
    FUN_10029aa3c(uVar2,uVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_10030bbec(param_2);
    uVar1 = FUN_10030bc08(param_2,uVar1);
    FUN_10029aabc(uVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001ef3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x100))();
  return;
}




undefined8 * thunk_FUN_1001ef238(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b450;
  operator_new(0xc38);
  lVar2 = thunk_FUN_10029a420();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  iVar1 = 0;
  *param_1 = &PTR_FUN_10146b3d8;
  param_1[2] = &PTR_FUN_10146b410;
  do {
    uVar5 = param_1[1];
    uVar3 = FUN_10030b868(iVar1);
    uVar4 = FUN_10030b880(iVar1);
    FUN_10029a680(uVar5,uVar3,uVar4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xf);
  lVar2 = FUN_10030b85c();
  if (lVar2 != 0) {
    FUN_10030b85c();
    FUN_10030bbc8();
    lVar2 = FUN_10030b85c();
    uStack_50 = 0;
    pcStack_38 = thunk_FUN_1001ef328;
    puStack_48 = param_1;
    puStack_40 = param_1;
    FUN_1001ef548(lVar2 + 0x18,&uStack_50);
    FUN_10030b85c();
    iVar1 = FUN_10030bbc0();
    if (iVar1 != 0) {
      uVar3 = FUN_10030b85c();
      FUN_1001ef328(param_1,uVar3);
    }
  }
  return param_1;
}




undefined8 * FUN_1001ef3e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_10146b3d8;
  param_1[2] = &PTR_FUN_10146b410;
  lVar2 = FUN_10030b85c();
  if (lVar2 != 0) {
    lVar2 = FUN_10030b85c();
    if (*(uint *)(lVar2 + 0x18) != 0) {
      lVar3 = *(long *)(lVar2 + 0x20);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_1001ef648();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  FUN_1001ea85c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146b450;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001ef3e0(void)

{
  FUN_1001ef3e0();
  return;
}




void FUN_1001ef488(long param_1)

{
  FUN_1001ef3e0(param_1 + -0x10);
  return;
}




void FUN_1001ef490(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ef3e0();
  operator_delete(pvVar1);
  return;
}




void FUN_1001ef4a4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ef3e0(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001ef4bc(long param_1)

{
  FUN_1001efc24(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001001ef4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x100))();
  return;
}




void FUN_1001ef4ec(long param_1)

{
  FUN_1001efc24();
                    /* WARNING: Could not recover jumptable at 0x0001001ef514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -8) + 0x100))();
  return;
}




void FUN_1001ef518(void)

{
  FUN_10030b85c();
  FUN_10030bbdc();
  FUN_10030b85c();
  FUN_10030bbc8();
  return;
}




undefined8 FUN_1001ef534(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001ef53c(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_1001ef544(void)

{
  return;
}




void FUN_1001ef548(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_1001ef5cc(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1001ef328(void)

{
  FUN_1001ef328();
  return;
}




void FUN_1001ef5cc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
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




void FUN_1001ef648(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




undefined8 * FUN_1001ef6b8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146b498;
  operator_new(200);
  lVar1 = FUN_10029b118();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001ef708_10146b478;
  param_1[1] = lVar1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}




undefined8 * FUN_1001ef708(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001ef708_10146b478;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_FUN_10146b498;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001ef708(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001ef708_10146b478;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_FUN_10146b498;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001ef770(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ef708();
  operator_delete(pvVar1);
  return;
}




void FUN_1001ef784(long param_1,undefined8 param_2)

{
  code *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_10029b280(*(undefined8 *)(param_1 + 8),param_2);
  local_38 = DAT_101d91884;
  local_60 = thunk_FUN_100219efc;
  local_50 = 0;
  uStack_48 = 0;
  lStack_58 = param_1;
  local_40 = param_2;
  FUN_10001554c(*(long *)(param_1 + 0x10) + 8,&local_60);
  local_38 = DAT_101d23568;
  local_60 = thunk_FUN_100219efc;
  local_50 = 0;
  uStack_48 = 0;
  lStack_58 = param_1;
  local_40 = param_2;
  FUN_10001554c(*(long *)(param_1 + 0x10) + 8,&local_60);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




undefined8 * FUN_1001ef844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146b498;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001ef888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146b498;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1001ef8c8(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  void *local_58 [2];
  char local_41;
  
  *param_1 = &PTR_FUN_10146b530;
  operator_new(200);
  lVar2 = FUN_10029b408();
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  puVar8 = param_1 + 2;
  *puVar8 = &PTR_FUN_10146b4e0;
  *param_1 = &PTR_thunk_FUN_1001efa40_10146b4b8;
  param_1[1] = lVar2;
  plVar3 = operator_new(0x168);
  uVar4 = thunk_FUN_100200b50();
  param_1[3] = uVar4;
  FUN_100136a88(local_58);
  lVar2 = FUN_1004f1a74(0);
  (**(code **)(*plVar3 + 0x30))(plVar3,local_58,param_2,0,lVar2 + 1);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_10029b46c(param_1[1],*(undefined8 *)(param_1[3] + 8));
  lVar2 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
  lVar5 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
  FUN_100136b6c(lVar2 + 0x618,puVar8,lVar5 + 0x178);
  puVar6 = (uint *)(**(code **)(*(long *)(param_1[3] + 0x10) + 0x28))();
  if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
    plVar3 = *(long **)(puVar6 + 2);
    lVar2 = (ulong)*puVar6 << 3;
    do {
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        lVar7 = FUN_1001a678c(lVar5);
        uVar1 = *(ulong *)(lVar7 + 8);
        if (-1 < (char)*(byte *)(lVar7 + 0x17)) {
          uVar1 = (ulong)*(byte *)(lVar7 + 0x17);
        }
        if (uVar1 != 0) {
          uVar4 = FUN_1001a678c(lVar5);
          FUN_100136b6c(uVar4,puVar8,lVar5);
        }
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}




undefined8 * thunk_FUN_1001ef8c8(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined8 *puVar8;
  void *apvStack_58 [2];
  char cStack_41;
  
  *param_1 = &PTR_FUN_10146b530;
  operator_new(200);
  lVar2 = FUN_10029b408();
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  puVar8 = param_1 + 2;
  *puVar8 = &PTR_FUN_10146b4e0;
  *param_1 = &PTR_thunk_FUN_1001efa40_10146b4b8;
  param_1[1] = lVar2;
  plVar3 = operator_new(0x168);
  uVar4 = thunk_FUN_100200b50();
  param_1[3] = uVar4;
  FUN_100136a88(apvStack_58);
  lVar2 = FUN_1004f1a74(0);
  (**(code **)(*plVar3 + 0x30))(plVar3,apvStack_58,param_2,0,lVar2 + 1);
  if (cStack_41 < '\0') {
    operator_delete(apvStack_58[0]);
  }
  FUN_10029b46c(param_1[1],*(undefined8 *)(param_1[3] + 8));
  lVar2 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
  lVar5 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
  FUN_100136b6c(lVar2 + 0x618,puVar8,lVar5 + 0x178);
  puVar6 = (uint *)(**(code **)(*(long *)(param_1[3] + 0x10) + 0x28))();
  if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
    plVar3 = *(long **)(puVar6 + 2);
    lVar2 = (ulong)*puVar6 << 3;
    do {
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        lVar7 = FUN_1001a678c(lVar5);
        uVar1 = *(ulong *)(lVar7 + 8);
        if (-1 < (char)*(byte *)(lVar7 + 0x17)) {
          uVar1 = (ulong)*(byte *)(lVar7 + 0x17);
        }
        if (uVar1 != 0) {
          uVar4 = FUN_1001a678c(lVar5);
          FUN_100136b6c(uVar4,puVar8,lVar5);
        }
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}




undefined8 * FUN_1001efa40(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001efa40_10146b4b8;
  param_1[2] = &PTR_FUN_10146b4e0;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x28))();
  }
  param_1[2] = &PTR_FUN_10146b508;
  param_1[3] = 0;
  FUN_100136bd8(param_1 + 2);
  *param_1 = &PTR_FUN_10146b530;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001efa40(void)

{
  FUN_1001efa40();
  return;
}




void FUN_1001efac8(long param_1)

{
  FUN_1001efa40(param_1 + -0x10);
  return;
}




void FUN_1001efad0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001efa40();
  operator_delete(pvVar1);
  return;
}




void FUN_1001efae4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001efa40(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001efafc(long param_1)

{
  undefined8 in_x4;
  
  FUN_1001a621c(in_x4);
                    /* WARNING: Could not recover jumptable at 0x0001001efb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 8) + 0x90))();
  return;
}




void FUN_1001efb34(long param_1)

{
  undefined8 in_x4;
  
  FUN_1001a621c(in_x4);
                    /* WARNING: Could not recover jumptable at 0x0001001efb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 8) + 0x90))();
  return;
}




undefined8 * FUN_1001efb6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146b530;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001efbb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146b530;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001efbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146b550;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  return;
}




void FUN_1001efc24(long *param_1,string *param_2,long param_3,int param_4,long param_5)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  void *local_90 [2];
  char local_79;
  void *local_78;
  void *local_70;
  char local_61;
  
  std::string::operator=((string *)(param_1 + 1),param_2);
  std::string::operator=((string *)(param_1 + 0xd),(string *)(param_3 + 0x378));
  std::string::operator=((string *)(param_1 + 10),(string *)(param_3 + 0x390));
  FUN_1004e3170(&local_78,param_3 + 0x438);
  FUN_1001efe08(param_1,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  std::string::operator=((string *)(param_1 + 4),(string *)(param_3 + 0x3f0));
  std::string::operator=((string *)(param_1 + 7),(string *)(param_3 + 0x450));
  FUN_10003330c(&local_78,&DAT_101d91198);
  FUN_10003330c(local_90,&DAT_101d91198);
  plVar4 = (long *)(param_3 + 0x3c0);
  bVar2 = *(byte *)(param_3 + 0x3d7);
  if ((char)bVar2 < '\0') {
    uVar5 = *(ulong *)(param_3 + 0x3c8);
    if (uVar5 == 0) goto LAB_1001efd7c;
    plVar7 = (long *)*plVar4;
  }
  else {
    uVar5 = (ulong)bVar2;
    plVar7 = plVar4;
    if (bVar2 == 0) goto LAB_1001efd7c;
  }
  if (7 < (long)uVar5) {
    plVar1 = (long *)((long)plVar7 + uVar5);
    plVar3 = plVar7;
    while (plVar3 = _memchr(plVar3,0x62,uVar5 - 7), plVar3 != (long *)0x0) {
      if (*plVar3 == 0x2f2f3a646c697562) {
        if ((plVar3 != plVar1) && (plVar3 == plVar7)) {
          std::string::operator=((string *)local_90,(string *)(param_3 + 0x468));
          goto LAB_1001efd7c;
        }
        break;
      }
      plVar3 = (long *)((long)plVar3 + 1);
      uVar5 = (long)plVar1 - (long)plVar3;
      if ((long)uVar5 < 8) break;
    }
  }
  FUN_100136638((string *)(param_1 + 1),plVar4,&local_78);
LAB_1001efd7c:
  lVar6 = param_1[0x10];
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*plVar4 + 0xf0))
            (plVar4,*(undefined4 *)(param_3 + 0x4fc),*(int *)(param_3 + 0x500) - param_4,
             *(undefined4 *)(param_3 + 0x504),*(undefined4 *)(param_3 + 0x508),param_3 + 0x3a8,
             &local_78,local_90,param_5 < lVar6);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  return;
}




void FUN_1001efe08(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e34d8(param_2,auStack_68,0xffffffff);
  iVar1 = FUN_1004d2524(auStack_68);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  }
  else {
    FUN_1004d2864(auStack_68,"%lld");
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_1001efe9c(long param_1)

{
  return *(int *)(param_1 + 0x4fc) < 6 && *(int *)(param_1 + 0x504) < 7;
}




undefined8 * FUN_1001efebc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b638;
  operator_new(0x7d30);
  lVar1 = thunk_FUN_10029bffc();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_1003383c8(param_1 + 2);
  FUN_1001e1b34(param_1 + 5);
  *param_1 = &PTR_FUN_10146b590;
  param_1[2] = &PTR_FUN_10146b5e0;
  param_1[5] = &PTR_FUN_10146b610;
  FUN_1001eff30(param_1);
  return param_1;
}




void FUN_1001eff30(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_100331578();
    if (*(char *)(lVar2 + 0x20) != '\0') {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = FUN_100339bc8();
      FUN_10029c728(uVar4,uVar3);
      return;
    }
  }
  return;
}




undefined8 * thunk_FUN_1001efebc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b638;
  operator_new(0x7d30);
  lVar1 = thunk_FUN_10029bffc();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_1003383c8(param_1 + 2);
  FUN_1001e1b34(param_1 + 5);
  *param_1 = &PTR_FUN_10146b590;
  param_1[2] = &PTR_FUN_10146b5e0;
  param_1[5] = &PTR_FUN_10146b610;
  FUN_1001eff30(param_1);
  return param_1;
}




undefined8 * FUN_1001eff80(undefined8 *param_1)

{
  FUN_1001e1bb0(param_1 + 5);
  FUN_100338444(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146b638;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001eff80(undefined8 *param_1)

{
  FUN_1001e1bb0(param_1 + 5);
  FUN_100338444(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146b638;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001effd8(long param_1)

{
  FUN_1001eff80(param_1 + -0x10);
  return;
}




void FUN_1001effe0(long param_1)

{
  FUN_1001eff80(param_1 + -0x28);
  return;
}




void FUN_1001effe8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001eff80();
  operator_delete(pvVar1);
  return;
}




void FUN_1001efffc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001eff80(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1001e3fd8(void)

{
  FUN_1001e3fd8();
  return;
}




void thunk_FUN_1001e6da4(void)

{
  return;
}




void thunk_FUN_1001e6da8(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if ((int)param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x2c2c) = *(byte *)(param_1 + 0x2c2c) & 0xfd | bVar1;
  if (*(short *)(param_1 + 0x2c20) != -1) {
    FUN_10026d150(param_1 + 0x2a98,(int)*(short *)(param_1 + 0x2c20),param_2);
    return;
  }
  return;
}




void thunk_FUN_1001e3fd8(void)

{
  FUN_1001e3fd8();
  return;
}




void thunk_FUN_1001e3fd8(void)

{
  FUN_1001e3fd8();
  return;
}

