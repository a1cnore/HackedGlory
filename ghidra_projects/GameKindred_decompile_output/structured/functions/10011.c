// functions/10011 — 306 functions
#include "GameKindred.h"




long FUN_10011049c(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  
  uVar3 = *(uint *)(param_1 + 0x290);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar12 = 0;
    lVar11 = *(long *)(param_1 + 0x298);
    pbVar13 = (byte *)(lVar11 + 9);
    do {
      lVar9 = lVar11 + uVar12 * 0x38;
      bVar4 = *(byte *)(lVar9 + 0x1f);
      uVar7 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar9 + 0x10);
      if (-1 < (char)bVar4) {
        sVar2 = uVar7;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(lVar9 + 8),pbVar1,sVar5), iVar6 == 0)) {
LAB_100110584:
            return lVar11 + (uVar12 & 0xffffffff) * 0x38;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_100110584;
          pbVar10 = pbVar13;
          pbVar8 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 8) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) goto LAB_100110584;
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      uVar12 = uVar12 + 1;
      pbVar13 = pbVar13 + 0x38;
    } while (uVar12 != uVar3);
  }
  return 0;
}




void FUN_1001105a8(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = FUN_10011049c(param_1,param_2 + 8);
  if ((lVar4 == 0) && (lVar4 = FUN_10010f920(param_1,param_2 + 8), lVar4 == 0)) {
    piVar2 = (int *)(param_1 + 0x290);
    if (0x18 < *(uint *)(param_1 + 0x290)) {
      lVar4 = *(long *)(param_1 + 0x298);
      lVar6 = (ulong)*(uint *)(param_1 + 0x290) - 1;
      pvVar5 = *(void **)(lVar4 + lVar6 * 0x38 + 0x28);
      if (pvVar5 != (void *)0x0) {
        lVar7 = lVar4 + lVar6 * 0x38;
        operator_delete__(pvVar5);
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
      }
      lVar4 = lVar4 + lVar6 * 0x38;
      if (*(char *)(lVar4 + 0x1f) < '\0') {
        operator_delete(*(void **)(lVar4 + 8));
      }
      *piVar2 = *piVar2 + -1;
    }
    FUN_100112040(piVar2,*(undefined8 *)(param_1 + 0x298),param_2,param_2 + 0x38);
    if (DAT_101d230b0 != 0) {
      plVar3 = (long *)(DAT_101d230b0 + -8);
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_1001106a0(undefined8 param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_10010f758(param_1,1);
  return;
}




void FUN_1001106b4(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  FUN_10010f758(param_1 + -0x18,1);
  return;
}




void FUN_1001106cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10010f758(param_1,0);
  FUN_1004f15d8(param_1 + 0x90);
  FUN_1004f15d8(param_1 + 0xf0);
  FUN_1004f15d8(param_1 + 0x150);
  FUN_1004f15d8(param_1 + 0x1b0);
  FUN_1004f15d8(param_1 + 0x210);
  lVar1 = *(long *)(param_1 + 0x278);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x270) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x270) * 0x188;
      do {
        lVar1 = FUN_100111a80(lVar1);
        lVar1 = lVar1 + 0x188;
        lVar2 = lVar2 + -0x188;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x280) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x280) * 0x188;
      do {
        lVar1 = FUN_100111a80(lVar1);
        lVar1 = lVar1 + 0x188;
        lVar2 = lVar2 + -0x188;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  FUN_1001107e4(param_1 + 0x290,0);
  return;
}




void FUN_100110778(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x188;
      do {
        lVar1 = FUN_100111a80(lVar1);
        lVar1 = lVar1 + 0x188;
        lVar2 = lVar2 + -0x188;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1001107e4(uint *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      pcVar2 = (char *)(*(long *)(param_1 + 2) + 0x1f);
      do {
        if (*(void **)(pcVar2 + 9) != (void *)0x0) {
          operator_delete__(*(void **)(pcVar2 + 9));
          pcVar2[9] = '\0';
          pcVar2[10] = '\0';
          pcVar2[0xb] = '\0';
          pcVar2[0xc] = '\0';
          pcVar2[0xd] = '\0';
          pcVar2[0xe] = '\0';
          pcVar2[0xf] = '\0';
          pcVar2[0x10] = '\0';
          pcVar2[1] = '\0';
          pcVar2[2] = '\0';
          pcVar2[3] = '\0';
          pcVar2[4] = '\0';
          pcVar2[5] = '\0';
          pcVar2[6] = '\0';
          pcVar2[7] = '\0';
          pcVar2[8] = '\0';
        }
        if (*pcVar2 < '\0') {
          operator_delete(*(void **)(pcVar2 + -0x17));
        }
        pcVar2 = pcVar2 + 0x38;
        lVar1 = lVar1 + -0x38;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100110874(long param_1)

{
  FUN_1001106cc(param_1 + -0x18);
  return;
}




void FUN_10011087c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  uVar2 = FUN_10015d3ec();
  local_24 = 7;
  iVar1 = FUN_100164e00(uVar2,&local_24);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100169cec(param_1 + 0x30);
  }
  return;
}




void FUN_1001108c4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_10015d3ec();
  uVar1 = *(int *)(lVar2 + 0x55cc) - 4;
  if (uVar1 < 5) {
    FUN_10010f758(param_1,(uVar1 & 0x1f) == 4);
    return;
  }
  return;
}




undefined8 FUN_100110914(double *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    FUN_100112734(param_2,0);
    uVar4 = FUN_1001127fc(param_2);
    return uVar4;
  case 1:
    FUN_100112734(param_2,1);
    uVar4 = 0;
    break;
  case 2:
    FUN_100112734(param_2,2);
    uVar4 = 1;
    break;
  case 3:
    uVar4 = FUN_100112618(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar14 = (undefined8 *)*param_1;
      do {
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          iVar2 = *(int *)(puVar14 + 1);
          puVar13 = (undefined8 *)*puVar14;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar14 + 0xf);
          puVar13 = puVar14;
        }
        FUN_100112734(param_2,5);
        uVar4 = FUN_100112b14(param_2,puVar13,iVar2);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100110914(puVar14 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar14 = puVar14 + 6;
      } while (puVar14 != (undefined8 *)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x7d;
    goto LAB_100110ba0;
  case 4:
    uVar4 = FUN_1001126a4(param_2);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(int *)(param_1 + 1) != 0) {
      dVar15 = *param_1;
      do {
        uVar3 = FUN_100110914(dVar15,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        dVar15 = (double)((long)dVar15 + 0x18);
      } while (dVar15 != (double)((long)*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x18));
    }
    param_2[4] = param_2[4] + -0x10;
    lVar11 = *param_2;
    puVar6 = *(undefined1 **)(lVar11 + 0x18);
    if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 1) {
      FUN_1000f9034(lVar11,1);
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
    }
    *(undefined1 **)(lVar11 + 0x18) = puVar6 + 1;
    uVar10 = 0x5d;
LAB_100110ba0:
    *puVar6 = uVar10;
    return 1;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 1);
      param_1 = (double *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    FUN_100112734(param_2,5);
    uVar4 = FUN_100112b14(param_2,param_1,iVar2);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xb & 1) == 0) {
        if ((uVar1 >> 0xc & 1) == 0) {
          if ((uVar1 >> 0xd & 1) == 0) {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar11 = *param_2;
            puVar12 = *(undefined2 **)(lVar11 + 0x18);
            if (*(undefined1 **)(lVar11 + 0x20) <= (undefined1 *)((long)puVar12 + 0x19)) {
              FUN_1000f9034(lVar11,0x19);
              puVar12 = *(undefined2 **)(lVar11 + 0x18);
            }
            *(undefined1 **)(lVar11 + 0x18) = (undefined1 *)((long)puVar12 + 0x19);
            if (ABS(dVar15) == 0.0) {
              puVar8 = puVar12;
              if ((long)dVar15 < 0) {
                puVar8 = (undefined2 *)((long)puVar12 + 1);
                *(undefined1 *)puVar12 = 0x2d;
              }
              *puVar8 = 0x2e30;
              *(undefined1 *)(puVar8 + 1) = 0x30;
              puVar6 = (undefined1 *)((long)puVar8 + 3);
            }
            else {
              puVar8 = puVar12;
              if (dVar15 < 0.0) {
                *(undefined1 *)puVar12 = 0x2d;
                dVar15 = -dVar15;
                puVar8 = (undefined2 *)((long)puVar12 + 1);
              }
              FUN_100113658(dVar15,puVar8,&uStack_64,&local_68);
              puVar6 = (undefined1 *)FUN_10011381c(puVar8,uStack_64,local_68);
            }
            lVar9 = *param_2;
            puVar6 = puVar6 + (*(long *)(lVar9 + 0x18) - (long)puVar12) + -0x19;
          }
          else {
            dVar15 = *param_1;
            FUN_100112734(param_2,6);
            lVar9 = *param_2;
            lVar11 = *(long *)(lVar9 + 0x18);
            if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 0x14U) {
              FUN_1000f9034(lVar9,0x14);
              lVar11 = *(long *)(lVar9 + 0x18);
            }
            *(long *)(lVar9 + 0x18) = lVar11 + 0x14;
            lVar5 = FUN_100113028(dVar15,lVar11);
            lVar9 = *param_2;
            puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -0x14);
          }
        }
        else {
          dVar15 = *param_1;
          FUN_100112734(param_2,6);
          lVar11 = *param_2;
          puVar6 = *(undefined1 **)(lVar11 + 0x18);
          if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0x15) {
            FUN_1000f9034(lVar11,0x15);
            puVar6 = *(undefined1 **)(lVar11 + 0x18);
          }
          *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0x15;
          puVar7 = puVar6;
          if ((long)dVar15 < 0) {
            puVar7 = puVar6 + 1;
            *puVar6 = 0x2d;
            dVar15 = (double)-(long)dVar15;
          }
          lVar11 = FUN_100113028(dVar15,puVar7);
          lVar9 = *param_2;
          puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0x15);
        }
      }
      else {
        iVar2 = *(int *)param_1;
        FUN_100112734(param_2,6);
        lVar9 = *param_2;
        lVar11 = *(long *)(lVar9 + 0x18);
        if (*(ulong *)(lVar9 + 0x20) <= lVar11 + 10U) {
          FUN_1000f9034(lVar9,10);
          lVar11 = *(long *)(lVar9 + 0x18);
        }
        *(long *)(lVar9 + 0x18) = lVar11 + 10;
        lVar5 = FUN_100112d5c(iVar2,lVar11);
        lVar9 = *param_2;
        puVar6 = (undefined1 *)((lVar5 - lVar11) + *(long *)(lVar9 + 0x18) + -10);
      }
    }
    else {
      iVar2 = *(int *)param_1;
      FUN_100112734(param_2,6);
      lVar11 = *param_2;
      puVar6 = *(undefined1 **)(lVar11 + 0x18);
      if (*(undefined1 **)(lVar11 + 0x20) <= puVar6 + 0xb) {
        FUN_1000f9034(lVar11,0xb);
        puVar6 = *(undefined1 **)(lVar11 + 0x18);
      }
      *(undefined1 **)(lVar11 + 0x18) = puVar6 + 0xb;
      puVar7 = puVar6;
      if (iVar2 < 0) {
        puVar7 = puVar6 + 1;
        *puVar6 = 0x2d;
        iVar2 = -iVar2;
      }
      lVar11 = FUN_100112d5c(iVar2,puVar7);
      lVar9 = *param_2;
      puVar6 = (undefined1 *)((lVar11 - (long)puVar6) + *(long *)(lVar9 + 0x18) + -0xb);
    }
    *(undefined1 **)(lVar9 + 0x18) = puVar6;
    return 1;
  }
  uVar4 = FUN_1001128e8(param_2,uVar4);
  return uVar4;
}




undefined8 FUN_100110e38(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  if (*(undefined1 **)(param_1 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(param_1,1);
    puVar1 = *(undefined1 **)(param_1 + 0x18);
  }
  *(undefined1 **)(param_1 + 0x18) = puVar1 + 1;
  *puVar1 = 0;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_100110e8c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100113e14(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x188;
  uVar3 = *param_2;
  *(undefined1 *)(lVar5 + -0x184) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(lVar5 + -0x188) = uVar3;
  FUN_10003330c(lVar5 + -0x180,param_2 + 2);
  thunk_FUN_1004e439c(lVar5 + -0x168,param_2 + 8);
  thunk_FUN_1004e439c(lVar5 + -0x158,param_2 + 0xc);
  thunk_FUN_1004e439c(lVar5 + -0x148,param_2 + 0x10);
  FUN_10003330c(lVar5 + -0x138,param_2 + 0x14);
  thunk_FUN_1004e439c(lVar5 + -0x120,param_2 + 0x1a);
  thunk_FUN_1004e439c(lVar5 + -0x110,param_2 + 0x1e);
  FUN_10003330c(lVar5 + -0x100,param_2 + 0x22);
  uVar7 = *(undefined8 *)(param_2 + 0x2a);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x2e);
  uVar8 = *(undefined8 *)(param_2 + 0x2c);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar5 + -0xc0) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(lVar5 + -200) = uVar10;
  *(undefined8 *)(lVar5 + -0xd0) = uVar9;
  *(undefined8 *)(lVar5 + -0xd8) = uVar8;
  *(undefined8 *)(lVar5 + -0xe0) = uVar7;
  *(undefined8 *)(lVar5 + -0xe8) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x36);
  uVar6 = *(undefined8 *)(param_2 + 0x34);
  uVar9 = *(undefined8 *)(param_2 + 0x3a);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x3e);
  uVar10 = *(undefined8 *)(param_2 + 0x3c);
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar5 + -0x80) = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(lVar5 + -0x88) = uVar12;
  *(undefined8 *)(lVar5 + -0x90) = uVar11;
  *(undefined8 *)(lVar5 + -0x98) = uVar10;
  *(undefined8 *)(lVar5 + -0xa0) = uVar9;
  *(undefined8 *)(lVar5 + -0xa8) = uVar8;
  *(undefined8 *)(lVar5 + -0xb0) = uVar7;
  *(undefined8 *)(lVar5 + -0xb8) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x46);
  uVar6 = *(undefined8 *)(param_2 + 0x44);
  uVar9 = *(undefined8 *)(param_2 + 0x4a);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  uVar11 = *(undefined8 *)(param_2 + 0x4e);
  uVar10 = *(undefined8 *)(param_2 + 0x4c);
  uVar12 = *(undefined8 *)(param_2 + 0x4f);
  *(undefined8 *)(lVar5 + -0x44) = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(lVar5 + -0x4c) = uVar12;
  *(undefined8 *)(lVar5 + -0x50) = uVar11;
  *(undefined8 *)(lVar5 + -0x58) = uVar10;
  *(undefined8 *)(lVar5 + -0x60) = uVar9;
  *(undefined8 *)(lVar5 + -0x68) = uVar8;
  *(undefined8 *)(lVar5 + -0x70) = uVar7;
  *(undefined8 *)(lVar5 + -0x78) = uVar6;
  FUN_100113fb8(lVar5 + -0x38,param_2 + 0x54);
  *(undefined4 *)(lVar5 + -0x28) = param_2[0x58];
  FUN_10003330c(lVar5 + -0x20,param_2 + 0x5a);
  *(undefined2 *)(lVar5 + -8) = *(undefined2 *)(param_2 + 0x60);
  return;
}




void FUN_100110ff8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined4 *)FUN_10010f8ac(param_1,param_2 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
    *puVar2 = uVar1;
    std::string::operator=((string *)(puVar2 + 2),(string *)(param_2 + 2));
    FUN_1000153b4(puVar2 + 8,param_2 + 8);
    FUN_1000153b4(puVar2 + 0xc,param_2 + 0xc);
    FUN_1000153b4(puVar2 + 0x10,param_2 + 0x10);
    std::string::operator=((string *)(puVar2 + 0x14),(string *)(param_2 + 0x14));
    FUN_1000153b4(puVar2 + 0x1a,param_2 + 0x1a);
    FUN_1000153b4(puVar2 + 0x1e,param_2 + 0x1e);
    std::string::operator=((string *)(puVar2 + 0x22),(string *)(param_2 + 0x22));
    uVar6 = *(undefined8 *)(param_2 + 0x2e);
    uVar5 = *(undefined8 *)(param_2 + 0x2c);
    uVar4 = *(undefined8 *)(param_2 + 0x32);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(puVar2 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(puVar2 + 0x28) = uVar7;
    *(undefined8 *)(puVar2 + 0x2e) = uVar6;
    *(undefined8 *)(puVar2 + 0x2c) = uVar5;
    *(undefined8 *)(puVar2 + 0x32) = uVar4;
    *(undefined8 *)(puVar2 + 0x30) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x3c);
    uVar5 = *(undefined8 *)(param_2 + 0x42);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    uVar9 = *(undefined8 *)(param_2 + 0x36);
    uVar8 = *(undefined8 *)(param_2 + 0x34);
    uVar7 = *(undefined8 *)(param_2 + 0x3a);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(puVar2 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
    *(undefined8 *)(puVar2 + 0x3c) = uVar3;
    *(undefined8 *)(puVar2 + 0x42) = uVar5;
    *(undefined8 *)(puVar2 + 0x40) = uVar4;
    *(undefined8 *)(puVar2 + 0x36) = uVar9;
    *(undefined8 *)(puVar2 + 0x34) = uVar8;
    *(undefined8 *)(puVar2 + 0x3a) = uVar7;
    *(undefined8 *)(puVar2 + 0x38) = uVar6;
    uVar7 = *(undefined8 *)(param_2 + 0x4a);
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x4e);
    uVar3 = *(undefined8 *)(param_2 + 0x4c);
    uVar5 = *(undefined8 *)(param_2 + 0x4f);
    uVar9 = *(undefined8 *)(param_2 + 0x46);
    uVar8 = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(puVar2 + 0x51) = *(undefined8 *)(param_2 + 0x51);
    *(undefined8 *)(puVar2 + 0x4f) = uVar5;
    *(undefined8 *)(puVar2 + 0x4a) = uVar7;
    *(undefined8 *)(puVar2 + 0x48) = uVar6;
    *(undefined8 *)(puVar2 + 0x4e) = uVar4;
    *(undefined8 *)(puVar2 + 0x4c) = uVar3;
    *(undefined8 *)(puVar2 + 0x46) = uVar9;
    *(undefined8 *)(puVar2 + 0x44) = uVar8;
    FUN_100111b3c(puVar2 + 0x54,param_2 + 0x54);
    puVar2[0x58] = param_2[0x58];
    std::string::operator=((string *)(puVar2 + 0x5a),(string *)(param_2 + 0x5a));
    *(undefined2 *)(puVar2 + 0x60) = *(undefined2 *)(param_2 + 0x60);
    return;
  }
  FUN_100110e8c(param_1 + 0x270,param_2);
  return;
}




ulong FUN_100111120(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint *puVar3;
  size_t sVar4;
  int *piVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  uint *puVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *puVar20;
  ulong uVar21;
  int *piVar22;
  
  sVar8 = *(short *)*param_1;
  sVar9 = *(short *)*param_2;
  if (sVar8 != sVar9) {
    if (sVar8 == 0) {
      return 1;
    }
    if (sVar9 == 0) {
      return 0xffffffff;
    }
    if (sVar8 == 2) {
      return 1;
    }
    if (sVar9 == 2) {
      return 0xffffffff;
    }
    if (sVar8 == 4) {
      return 1;
    }
    if (sVar9 == 4) {
      return 0xffffffff;
    }
    if (sVar8 == 3) {
      return 1;
    }
    if (sVar9 == 3) {
      return 0xffffffff;
    }
  }
  lVar14 = FUN_10015d3ec();
  pbVar17 = (byte *)(lVar14 + 0x5490);
  bVar7 = *(byte *)(lVar14 + 0x54a7);
  uVar21 = (ulong)bVar7;
  sVar2 = *(size_t *)(lVar14 + 0x5498);
  if (-1 < (char)bVar7) {
    sVar2 = uVar21;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar4) {
    pbVar19 = *(byte **)pbVar17;
    if (-1 < (char)bVar7) {
      pbVar19 = pbVar17;
    }
    pbVar18 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar18 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar2 != 0) && (iVar13 = _memcmp(pbVar19,pbVar18,sVar2), iVar13 != 0))
      goto LAB_10011124c;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar18 == ((uint)*(byte **)pbVar17 & 0xff)) {
        pbVar19 = (byte *)(lVar14 + 0x5491);
        do {
          uVar21 = uVar21 - 1;
          pbVar18 = pbVar18 + 1;
          if (uVar21 == 0) goto LAB_1001113d0;
          bVar6 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar6 == *pbVar18);
      }
      goto LAB_10011124c;
    }
  }
  else {
LAB_10011124c:
    puVar20 = (uint *)*param_1;
    bVar6 = *(byte *)((long)puVar20 + 0x9f);
    uVar21 = (ulong)bVar6;
    sVar4 = *(size_t *)(puVar20 + 0x24);
    if (-1 < (char)bVar6) {
      sVar4 = uVar21;
    }
    if (sVar4 == sVar2) {
      puVar15 = *(uint **)(puVar20 + 0x22);
      puVar3 = puVar15;
      if (-1 < (char)bVar6) {
        puVar3 = puVar20 + 0x22;
      }
      pbVar19 = *(byte **)pbVar17;
      if (-1 < (char)bVar7) {
        pbVar19 = pbVar17;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_1001112f4;
        iVar13 = _memcmp(puVar3,pbVar19,sVar2);
        bVar11 = iVar13 == 0;
      }
      else if (sVar2 == 0) {
LAB_1001112f4:
        bVar11 = true;
      }
      else {
        if ((uint)*pbVar19 != ((uint)puVar15 & 0xff)) goto LAB_1001112d4;
        pbVar18 = (byte *)((long)puVar20 + 0x89);
        do {
          uVar21 = uVar21 - 1;
          pbVar19 = pbVar19 + 1;
          bVar11 = uVar21 == 0;
          if (uVar21 == 0) break;
          bVar6 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar6 == *pbVar19);
      }
    }
    else {
LAB_1001112d4:
      bVar11 = false;
    }
    piVar22 = (int *)*param_2;
    bVar6 = *(byte *)((long)piVar22 + 0x9f);
    uVar21 = (ulong)bVar6;
    sVar4 = *(size_t *)(piVar22 + 0x24);
    if (-1 < (char)bVar6) {
      sVar4 = uVar21;
    }
    if (sVar4 == sVar2) {
      piVar16 = *(int **)(piVar22 + 0x22);
      piVar5 = piVar16;
      if (-1 < (char)bVar6) {
        piVar5 = piVar22 + 0x22;
      }
      pbVar19 = *(byte **)pbVar17;
      if (-1 < (char)bVar7) {
        pbVar19 = pbVar17;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_10011139c;
        iVar13 = _memcmp(piVar5,pbVar19,sVar2);
        bVar12 = iVar13 == 0;
        if (bVar11 != bVar12) goto LAB_100111650;
      }
      else {
        if (sVar2 != 0) {
          if ((uint)*pbVar19 == ((uint)piVar16 & 0xff)) {
            pbVar17 = (byte *)((long)piVar22 + 0x89);
            do {
              uVar21 = uVar21 - 1;
              pbVar19 = pbVar19 + 1;
              if (uVar21 == 0) goto LAB_10011139c;
              bVar7 = *pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (bVar7 == *pbVar19);
          }
          goto LAB_100111374;
        }
LAB_10011139c:
        if (bVar11 == false) goto LAB_100111650;
        bVar12 = true;
      }
      if ((bVar11 & bVar12) == 1) {
        uVar10 = *puVar20 >> 0x1f;
        if (uVar10 == -(*piVar22 >> 0x1f)) {
          puVar20 = puVar20 + 8;
          piVar22 = piVar22 + 8;
          goto LAB_1001115d8;
        }
        goto LAB_100111660;
      }
    }
    else {
LAB_100111374:
      if (bVar11 != false) goto LAB_100111650;
    }
  }
LAB_1001113d0:
  lVar14 = FUN_10015d3ec();
  pbVar17 = (byte *)(lVar14 + 0x5478);
  bVar7 = *(byte *)(lVar14 + 0x548f);
  uVar21 = (ulong)bVar7;
  sVar2 = *(size_t *)(lVar14 + 0x5480);
  if (-1 < (char)bVar7) {
    sVar2 = uVar21;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar4) {
    pbVar19 = *(byte **)pbVar17;
    if (-1 < (char)bVar7) {
      pbVar19 = pbVar17;
    }
    pbVar18 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar18 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar2 != 0) && (iVar13 = _memcmp(pbVar19,pbVar18,sVar2), iVar13 != 0))
      goto LAB_100111488;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar18 == ((uint)*(byte **)pbVar17 & 0xff)) {
        pbVar19 = (byte *)(lVar14 + 0x5479);
        do {
          uVar21 = uVar21 - 1;
          pbVar18 = pbVar18 + 1;
          if (uVar21 == 0) goto LAB_1001115b4;
          bVar6 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (bVar6 == *pbVar18);
      }
      goto LAB_100111488;
    }
  }
  else {
LAB_100111488:
    puVar20 = (uint *)*param_1;
    bVar6 = *(byte *)((long)puVar20 + 0x67);
    uVar21 = (ulong)bVar6;
    sVar4 = *(size_t *)(puVar20 + 0x16);
    if (-1 < (char)bVar6) {
      sVar4 = uVar21;
    }
    if (sVar4 == sVar2) {
      puVar15 = *(uint **)(puVar20 + 0x14);
      puVar3 = puVar15;
      if (-1 < (char)bVar6) {
        puVar3 = puVar20 + 0x14;
      }
      pbVar19 = *(byte **)pbVar17;
      if (-1 < (char)bVar7) {
        pbVar19 = pbVar17;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_100111530;
        iVar13 = _memcmp(puVar3,pbVar19,sVar2);
        bVar11 = iVar13 == 0;
      }
      else if (sVar2 == 0) {
LAB_100111530:
        bVar11 = true;
      }
      else {
        if ((uint)*pbVar19 != ((uint)puVar15 & 0xff)) goto LAB_100111510;
        pbVar18 = (byte *)((long)puVar20 + 0x51);
        do {
          uVar21 = uVar21 - 1;
          pbVar19 = pbVar19 + 1;
          bVar11 = uVar21 == 0;
          if (uVar21 == 0) break;
          bVar6 = *pbVar18;
          pbVar18 = pbVar18 + 1;
        } while (bVar6 == *pbVar19);
      }
    }
    else {
LAB_100111510:
      bVar11 = false;
    }
    piVar22 = (int *)*param_2;
    bVar6 = *(byte *)((long)piVar22 + 0x67);
    uVar21 = (ulong)bVar6;
    sVar4 = *(size_t *)(piVar22 + 0x16);
    if (-1 < (char)bVar6) {
      sVar4 = uVar21;
    }
    if (sVar4 == sVar2) {
      piVar16 = *(int **)(piVar22 + 0x14);
      piVar5 = piVar16;
      if (-1 < (char)bVar6) {
        piVar5 = piVar22 + 0x14;
      }
      pbVar19 = *(byte **)pbVar17;
      if (-1 < (char)bVar7) {
        pbVar19 = pbVar17;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_100111628;
        iVar13 = _memcmp(piVar5,pbVar19,sVar2);
        if (bVar11 != (iVar13 == 0)) goto LAB_100111650;
        if (bVar11 == false) goto LAB_1001115b4;
      }
      else {
        if (sVar2 != 0) {
          if ((uint)*pbVar19 == ((uint)piVar16 & 0xff)) {
            pbVar17 = (byte *)((long)piVar22 + 0x51);
            do {
              uVar21 = uVar21 - 1;
              pbVar19 = pbVar19 + 1;
              if (uVar21 == 0) goto LAB_100111628;
              bVar7 = *pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (bVar7 == *pbVar19);
          }
          goto LAB_1001115b0;
        }
LAB_100111628:
        if (bVar11 == false) goto LAB_100111650;
      }
      uVar10 = *puVar20 >> 0x1f;
      if (uVar10 == -(*piVar22 >> 0x1f)) {
        puVar20 = puVar20 + 8;
        piVar22 = piVar22 + 8;
        goto LAB_1001115d8;
      }
      goto LAB_100111660;
    }
LAB_1001115b0:
    if (bVar11 != false) {
LAB_100111650:
      uVar10 = 1;
      if (bVar11 != false) {
        uVar10 = 0xffffffff;
      }
      return (ulong)uVar10;
    }
  }
LAB_1001115b4:
  uVar10 = -(*(int *)*param_1 >> 0x1f);
  if (uVar10 == -(*(int *)*param_2 >> 0x1f)) {
    puVar20 = (uint *)((int *)*param_1 + 8);
    piVar22 = (int *)*param_2 + 8;
LAB_1001115d8:
    uVar21 = FUN_1004e37f8(puVar20,piVar22,1,0xffffffff);
    return uVar21;
  }
LAB_100111660:
  uVar1 = 0xffffffff;
  if (uVar10 == 0) {
    uVar1 = 1;
  }
  return (ulong)uVar1;
}




void FUN_100111694(void)

{
  operator_new(0x300);
  DAT_101dc75b0 = FUN_10010d478();
  return;
}




void FUN_1001116b8(void)

{
  if (DAT_101dc75b0 != (long *)0x0) {
    (**(code **)(*DAT_101dc75b0 + 8))();
  }
  DAT_101dc75b0 = (long *)0x0;
  return;
}




void FUN_1001116ec(void)

{
  FUN_10010d860(DAT_101dc75b0);
  return;
}




void FUN_1001116f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  puVar1 = &DAT_101d230b0;
  if (DAT_101d230b0 != 0) {
    puVar1 = DAT_101d230b8;
  }
  *puVar1 = puVar2;
  DAT_101d230b8 = puVar2;
  DAT_101d230c0 = DAT_101d230c0 + 1;
  return;
}




void FUN_100111728(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = DAT_101d230b0 + -8;
  if (DAT_101d230b0 != 0 && lVar2 != 0) {
    do {
      if (lVar2 == param_1) {
        FUN_100111770(&DAT_101d230b0);
        return;
      }
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100111770(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_1001117cc(undefined1 param_1)

{
  long lVar1;
  
  lVar1 = DAT_101dc75b0 + 0x30;
  *(undefined1 *)(DAT_101dc75b0 + 0x89) = param_1;
  FUN_100169cec(lVar1);
  return;
}




void FUN_1001117e4(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_101dc75b0;
  uVar2 = 0x40000000;
  if (param_1 == 0) {
    uVar2 = 0x41a00000;
  }
  *(undefined4 *)(DAT_101dc75b0 + 0x2f0) = uVar2;
  FUN_100169cf8(lVar1 + 0x30);
  return;
}




void FUN_100111808(undefined1 param_1)

{
  *(undefined1 *)(DAT_101dc75b0 + 0x88) = param_1;
  return;
}




undefined4 FUN_100111818(void)

{
  return *(undefined4 *)(DAT_101dc75b0 + 0x2f4);
}




undefined4 FUN_100111828(void)

{
  return *(undefined4 *)(DAT_101dc75b0 + 0x270);
}




long FUN_100111838(ulong param_1)

{
  return *(long *)(DAT_101dc75b0 + 0x278) + (param_1 & 0xffffffff) * 0x188;
}




void FUN_100111850(undefined8 param_1)

{
  FUN_10010f8ac(DAT_101dc75b0,param_1);
  return;
}




void FUN_100111860(undefined8 param_1)

{
  FUN_10010f920(DAT_101dc75b0,param_1);
  return;
}




void FUN_100111870(undefined8 param_1)

{
  FUN_10010fa2c(DAT_101dc75b0,param_1);
  return;
}




void FUN_100111880(undefined8 param_1)

{
  FUN_10010fb14(DAT_101dc75b0,param_1);
  return;
}




void FUN_100111890(undefined8 param_1)

{
  FUN_10010fb90(DAT_101dc75b0,param_1);
  return;
}




void FUN_1001118a0(undefined8 param_1)

{
  FUN_10010fbd8(DAT_101dc75b0,param_1);
  return;
}




undefined4 FUN_1001118b0(void)

{
  return *(undefined4 *)(DAT_101dc75b0 + 0x280);
}




long FUN_1001118c0(ulong param_1)

{
  return *(long *)(DAT_101dc75b0 + 0x288) + (param_1 & 0xffffffff) * 0x188;
}




void FUN_1001118d8(undefined8 param_1)

{
  FUN_10010fc20(DAT_101dc75b0,param_1);
  return;
}




void FUN_1001118e8(undefined8 param_1)

{
  FUN_10010fd2c(DAT_101dc75b0,param_1);
  return;
}




void FUN_1001118f8(undefined8 param_1)

{
  FUN_10010fd90(DAT_101dc75b0,param_1);
  return;
}




void FUN_100111908(undefined8 param_1,undefined8 param_2)

{
  FUN_10010fdf0(param_1,param_1,param_2);
  return;
}




undefined4 FUN_100111914(void)

{
  return *(undefined4 *)(DAT_101dc75b0 + 0x290);
}




long FUN_100111924(ulong param_1)

{
  return *(long *)(DAT_101dc75b0 + 0x298) + (param_1 & 0xffffffff) * 0x38;
}




void FUN_10011193c(undefined8 param_1)

{
  FUN_1001105a8(DAT_101dc75b0,param_1);
  return;
}




void FUN_10011194c(undefined8 param_1)

{
  FUN_10010fa84(DAT_101dc75b0,param_1);
  return;
}




void FUN_10011195c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101459980;
  param_1[3] = &PTR_FUN_1014599b8;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_1004f15a8(param_1 + 3);
  operator_delete(param_1);
  return;
}




void FUN_1001119b0(long param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x59) == '\0') {
    bVar1 = *(char *)(param_1 + 0x58) != '\0';
  }
  else {
    bVar1 = false;
  }
  FUN_1004ef3dc(param_1 + 0x18,bVar1);
  *(undefined1 *)(param_1 + 0x59) = 0;
  return;
}




long FUN_1001119f4(long param_1)

{
  return param_1 + 0x18;
}




void FUN_1001119fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014599b8;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100111a38(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014599b8;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100111a78(void)

{
  return 7;
}




long FUN_100111a80(long param_1)

{
  if (*(char *)(param_1 + 0x17f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x168));
  }
  FUN_10010b1a8(param_1 + 0x150,1);
  if (*(char *)(param_1 + 0x9f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)(param_1 + 8));
  }
  return param_1;
}




void FUN_100111b3c(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_10010b1a8(param_1,1);
    FUN_10010c894(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar1 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 4;
      do {
        lVar1 = thunk_FUN_1004e439c(lVar1,lVar3);
        lVar3 = lVar3 + 0x10;
        lVar1 = lVar1 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




undefined8 * FUN_100111bb4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 uStack_60;
  void *local_58;
  void *pvStack_50;
  long local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  uVar2 = *(uint *)(param_2 + 2);
  if ((uVar2 & 0xff) - 3 < 2) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_60 = 0;
    local_68 = 0;
    pvStack_50 = (void *)0x0;
    local_58 = (void *)0x0;
    uStack_40 = 0;
    local_48 = 0;
    local_38 = 0x400;
    local_30 = 0;
    local_28 = 0;
    local_70 = param_3;
    FUN_100111cd0(param_2,&local_88);
    lVar5 = local_48 + -0x18;
    uVar6 = *(undefined8 *)(local_48 + -0x18);
    param_1[1] = *(undefined8 *)(local_48 + -0x10);
    *param_1 = uVar6;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(local_48 + -8);
    *(undefined4 *)(local_48 + -8) = 0;
    local_48 = lVar5;
    if (local_68 != 0) {
      pvVar4 = (void *)FUN_1000f7b54();
      operator_delete(pvVar4);
    }
    _free(pvStack_50);
    if (local_58 != (void *)0x0) {
      operator_delete(local_58);
    }
  }
  else {
    if ((uVar2 & 0xff) == 5) {
      if (uVar2 != 0x100005) {
        iVar1 = (int)param_2[1];
        plVar3 = (long *)*param_2;
        if ((uVar2 & 0x400000) != 0) {
          iVar1 = 0xf - *(char *)((long)param_2 + 0xf);
          plVar3 = param_2;
        }
        FUN_1000f90a4(param_1,plVar3,iVar1);
        return param_1;
      }
      *(undefined4 *)(param_1 + 2) = 0x100005;
    }
    else {
      *(uint *)(param_1 + 2) = uVar2;
    }
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
  }
  return param_1;
}




undefined8 FUN_100111cd0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    return 1;
  case 1:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x101;
    break;
  case 2:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    uVar8 = 0x102;
    break;
  case 3:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 3;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar6 = (undefined8 *)*param_1;
      do {
        if ((*(uint *)(puVar6 + 2) >> 0x16 & 1) == 0) {
          iVar2 = *(int *)(puVar6 + 1);
          puVar5 = (undefined8 *)*puVar6;
        }
        else {
          iVar2 = 0xf - *(char *)((long)puVar6 + 0xf);
          puVar5 = puVar6;
        }
        uVar4 = FUN_1000f8dcc(param_2,puVar5,iVar2,*(uint *)(puVar6 + 2) >> 0x15 & 1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar3 = FUN_100111cd0(puVar6 + 3,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        puVar6 = puVar6 + 6;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (puVar6 != (undefined8 *)(*param_1 + uVar3 * 0x30));
    }
    uVar4 = FUN_1000f91e8(param_2,uVar3);
    return uVar4;
  case 4:
    puVar6 = *(undefined8 **)(param_2 + 0x40);
    if (*(undefined8 **)(param_2 + 0x48) <= puVar6 + 3) {
      FUN_1000f8b34(param_2 + 0x28,1);
      puVar6 = *(undefined8 **)(param_2 + 0x40);
    }
    *(undefined8 **)(param_2 + 0x40) = puVar6 + 3;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 4;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = *param_1;
      do {
        uVar3 = FUN_100111cd0(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar9 = lVar9 + 0x18;
        uVar3 = (ulong)*(uint *)(param_1 + 1);
      } while (lVar9 != *param_1 + uVar3 * 0x18);
    }
    uVar4 = FUN_1000f9260(param_2,uVar3);
    return uVar4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = (int)param_1[1];
      param_1 = (long *)*param_1;
    }
    else {
      iVar2 = 0xf - *(char *)((long)param_1 + 0xf);
    }
    uVar4 = FUN_1000f8dcc(param_2,param_1,iVar2,uVar1 >> 0x15 & 1);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = FUN_1000f93f4(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = FUN_1000f945c(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = FUN_1000f92d8(param_2,*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xd & 1) == 0) {
      lVar9 = *param_1;
      plVar7 = *(long **)(param_2 + 0x40);
      if (*(long **)(param_2 + 0x48) <= plVar7 + 3) {
        FUN_1000f8b34(param_2 + 0x28,1);
        plVar7 = *(long **)(param_2 + 0x40);
      }
      *(long **)(param_2 + 0x40) = plVar7 + 3;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0x4206;
      *plVar7 = lVar9;
      return 1;
    }
    uVar4 = FUN_1000f9370(param_2,*param_1);
    return uVar4;
  }
  *(undefined4 *)(puVar6 + 2) = uVar8;
  return 1;
}




undefined4 *
FUN_100112040(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  
  if (param_3 != param_4) {
    uVar17 = ((long)param_4 - (long)param_3 >> 3) * 0x6db6db6db6db6db7;
    puVar12 = *(undefined4 **)(param_1 + 2);
    uVar15 = ((long)param_2 - (long)puVar12 >> 3) * 0x6db6db6db6db6db7;
    uVar3 = *param_1;
    uVar13 = (ulong)uVar3;
    uVar4 = param_1[1];
    uVar16 = (uint)uVar17;
    if (uVar4 - uVar3 < uVar16) {
      uVar3 = uVar3 + uVar16;
      uVar16 = 0;
      if (uVar4 != 0xffffffff) {
        uVar16 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
      }
      if (uVar4 < 0x20) {
        uVar16 = uVar4 << 1;
      }
      uVar4 = uVar3;
      if (uVar3 <= uVar16) {
        uVar4 = uVar16;
      }
      pvVar7 = operator_new__((ulong)uVar4 * 0x38);
      if (puVar12 != param_2) {
        lVar14 = (long)pvVar7 + 0x20;
        puVar12 = puVar12 + 8;
        do {
          *(undefined4 *)(lVar14 + -0x20) = puVar12[-8];
          FUN_10003330c(lVar14 + -0x18,puVar12 + -6);
          thunk_FUN_1004e439c(lVar14,puVar12);
          uVar5 = puVar12[4];
          *(undefined2 *)(lVar14 + 0x14) = *(undefined2 *)(puVar12 + 5);
          *(undefined4 *)(lVar14 + 0x10) = uVar5;
          lVar14 = lVar14 + 0x38;
          puVar9 = puVar12 + 6;
          puVar12 = puVar12 + 0xe;
        } while (puVar9 != param_2);
      }
      uVar13 = uVar15 & 0xffffffff;
      lVar14 = (long)pvVar7 + uVar13 * 0x38 + 0x20;
      param_3 = param_3 + 8;
      do {
        *(undefined4 *)(lVar14 + -0x20) = param_3[-8];
        FUN_10003330c(lVar14 + -0x18,param_3 + -6);
        thunk_FUN_1004e439c(lVar14,param_3);
        *(undefined4 *)(lVar14 + 0x10) = param_3[4];
        *(undefined2 *)(lVar14 + 0x14) = *(undefined2 *)(param_3 + 5);
        lVar14 = lVar14 + 0x38;
        puVar12 = param_3 + 6;
        param_3 = param_3 + 0xe;
      } while (puVar12 != param_4);
      puVar12 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x38);
      if (puVar12 != param_2) {
        lVar10 = 0;
        lVar8 = (uVar17 & 0xffffffff) * 0x38;
        lVar14 = (long)pvVar7 + lVar8 + uVar13 * 0x38;
        do {
          puVar9 = (undefined4 *)((long)pvVar7 + lVar10 + lVar8 + uVar13 * 0x38);
          puVar1 = (undefined4 *)((long)param_2 + lVar10);
          *puVar9 = *puVar1;
          FUN_10003330c(puVar9 + 2,puVar1 + 2);
          thunk_FUN_1004e439c(puVar9 + 8,puVar1 + 8);
          *(undefined4 *)(lVar14 + 0x30) = puVar1[0xc];
          *(undefined2 *)(lVar14 + 0x34) = *(undefined2 *)(puVar1 + 0xd);
          lVar14 = lVar14 + 0x38;
          lVar10 = lVar10 + 0x38;
        } while (puVar1 + 0xe != puVar12);
      }
      FUN_1001107e4(param_1,1);
      *(void **)(param_1 + 2) = pvVar7;
      *param_1 = uVar3;
      param_1[1] = uVar4;
    }
    else {
      puVar9 = puVar12 + uVar13 * 0xe;
      uVar11 = ((long)puVar9 - (long)param_2 >> 3) * 0x6db6db6db6db6db7;
      if (uVar16 < (uint)uVar11) {
        uVar17 = uVar17 & 0xffffffff;
        if (uVar17 != 0) {
          lVar14 = 0;
          do {
            puVar12 = (undefined4 *)((long)puVar9 + lVar14);
            puVar1 = (undefined4 *)((long)puVar9 + lVar14 + uVar17 * -0x38);
            *puVar12 = *puVar1;
            FUN_10003330c(puVar12 + 2,puVar1 + 2);
            thunk_FUN_1004e439c(puVar12 + 8,puVar1 + 8);
            uVar5 = puVar1[0xc];
            *(undefined2 *)(puVar12 + 0xd) = *(undefined2 *)(puVar1 + 0xd);
            puVar12[0xc] = uVar5;
            lVar14 = lVar14 + 0x38;
          } while (uVar17 * 0x38 - lVar14 != 0);
          uVar13 = (ulong)*param_1;
          puVar12 = *(undefined4 **)(param_1 + 2);
        }
        lVar14 = (long)puVar12 + ((uVar13 - uVar17) * 0x38 - (long)param_2);
        if (lVar14 != 0) {
          lVar10 = 0;
          do {
            lVar8 = lVar10 + (uVar13 - uVar17) * 0x38;
            lVar6 = lVar10 + lVar14 + uVar17 * 0x38;
            *(undefined4 *)((long)param_2 + lVar6 + -0x38) =
                 *(undefined4 *)((long)puVar12 + lVar8 + -0x38);
            std::string::operator=
                      ((string *)((long)param_2 + lVar6 + -0x30),
                       (string *)((long)puVar12 + lVar8 + -0x30));
            FUN_1000153b4((long)param_2 + lVar6 + -0x18,(long)puVar12 + lVar8 + -0x18);
            uVar5 = *(undefined4 *)((long)puVar12 + lVar8 + -8);
            *(undefined2 *)((long)param_2 + lVar6 + -4) =
                 *(undefined2 *)((long)puVar12 + lVar8 + -4);
            *(undefined4 *)((long)param_2 + lVar6 + -8) = uVar5;
            lVar10 = lVar10 + -0x38;
          } while (-lVar10 != lVar14);
        }
        do {
          *param_2 = *param_3;
          std::string::operator=((string *)(param_2 + 2),(string *)(param_3 + 2));
          FUN_1000153b4(param_2 + 8,param_3 + 8);
          uVar5 = param_3[0xc];
          *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)(param_3 + 0xd);
          param_2[0xc] = uVar5;
          param_3 = param_3 + 0xe;
          param_2 = param_2 + 0xe;
        } while (param_3 != param_4);
      }
      else {
        if (puVar9 != param_2) {
          puVar12 = param_2;
          do {
            puVar1 = puVar12 + (uVar17 & 0xffffffff) * 0xe;
            *puVar1 = *puVar12;
            FUN_10003330c(puVar1 + 2,puVar12 + 2);
            thunk_FUN_1004e439c(puVar1 + 8,puVar12 + 8);
            uVar5 = puVar12[0xc];
            *(undefined2 *)(puVar1 + 0xd) = *(undefined2 *)(puVar12 + 0xd);
            puVar1[0xc] = uVar5;
            puVar12 = puVar12 + 0xe;
          } while (puVar12 != puVar9);
          uVar13 = (ulong)*param_1;
          puVar12 = *(undefined4 **)(param_1 + 2);
        }
        uVar11 = uVar11 & 0xffffffff;
        puVar9 = param_3 + uVar11 * 0xe;
        if (puVar9 != param_4) {
          lVar14 = 0;
          do {
            puVar1 = (undefined4 *)((long)puVar12 + lVar14 + uVar13 * 0x38);
            puVar2 = (undefined4 *)((long)puVar9 + lVar14);
            *puVar1 = *puVar2;
            FUN_10003330c(puVar1 + 2,puVar2 + 2);
            thunk_FUN_1004e439c(puVar1 + 8,puVar2 + 8);
            uVar5 = puVar2[0xc];
            *(undefined2 *)(puVar1 + 0xd) = *(undefined2 *)(puVar2 + 0xd);
            puVar1[0xc] = uVar5;
            lVar14 = lVar14 + 0x38;
          } while (puVar2 + 0xe != param_4);
        }
        if (uVar11 != 0) {
          do {
            *param_2 = *param_3;
            std::string::operator=((string *)(param_2 + 2),(string *)(param_3 + 2));
            FUN_1000153b4(param_2 + 8,param_3 + 8);
            uVar5 = param_3[0xc];
            *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)(param_3 + 0xd);
            param_2[0xc] = uVar5;
            param_3 = param_3 + 0xe;
            param_2 = param_2 + 0xe;
          } while (param_3 != puVar9);
        }
      }
      *param_1 = *param_1 + uVar16;
      pvVar7 = *(void **)(param_1 + 2);
    }
    param_2 = (undefined4 *)((long)pvVar7 + (uVar15 & 0xffffffff) * 0x38);
  }
  return param_2;
}




void FUN_1001124d4(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  uVar4 = (ulong)*param_1;
  if (*param_1 != iVar3 * -0x49249249) {
    lVar5 = *(long *)(param_1 + 2);
    puVar7 = (undefined4 *)(lVar5 + uVar4 * 0x38);
    lVar2 = (long)puVar7 - (long)param_3;
    puVar6 = param_2;
    if (lVar2 != 0) {
      do {
        *puVar6 = *param_3;
        std::string::operator=((string *)(puVar6 + 2),(string *)(param_3 + 2));
        FUN_1000153b4(puVar6 + 8,param_3 + 8);
        uVar1 = param_3[0xc];
        *(undefined2 *)(puVar6 + 0xd) = *(undefined2 *)(param_3 + 0xd);
        puVar6[0xc] = uVar1;
        param_3 = param_3 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (param_3 != puVar7);
      uVar4 = (ulong)*param_1;
      lVar5 = *(long *)(param_1 + 2);
    }
    param_2 = param_2 + ((lVar2 >> 3) * 0xb6db6db7 & 0xffffffffU) * 0xe;
    puVar6 = (undefined4 *)(lVar5 + uVar4 * 0x38);
    if (param_2 != puVar6) {
      do {
        if (*(void **)(param_2 + 10) != (void *)0x0) {
          operator_delete__(*(void **)(param_2 + 10));
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 10) = 0;
        }
        if (*(char *)((long)param_2 + 0x1f) < '\0') {
          operator_delete(*(void **)(param_2 + 2));
        }
        param_2 = param_2 + 0xe;
      } while (param_2 != puVar6);
      uVar4 = (ulong)*param_1;
    }
    *param_1 = (int)uVar4 + iVar3 * 0x49249249;
    return;
  }
  FUN_1001107e4(param_1,1);
  return;
}




undefined8 FUN_100112618(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  FUN_100112734(param_1,3);
  puVar1 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[5] <= puVar1 + 2) {
    FUN_100112aa4(param_1 + 1,1);
    puVar1 = (undefined8 *)param_1[4];
  }
  param_1[4] = (long)(puVar1 + 2);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  lVar3 = *param_1;
  puVar2 = *(undefined1 **)(lVar3 + 0x18);
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2 + 1) {
    FUN_1000f9034(lVar3,1);
    puVar2 = *(undefined1 **)(lVar3 + 0x18);
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2 + 1;
  *puVar2 = 0x7b;
  return 1;
}




undefined8 FUN_1001126a4(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  FUN_100112734(param_1,4);
  puVar1 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[5] <= puVar1 + 2) {
    FUN_100112aa4(param_1 + 1,1);
    puVar1 = (undefined8 *)param_1[4];
  }
  param_1[4] = (long)(puVar1 + 2);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar3 = *param_1;
  puVar2 = *(undefined1 **)(lVar3 + 0x18);
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2 + 1) {
    FUN_1000f9034(lVar3,1);
    puVar2 = *(undefined1 **)(lVar3 + 0x18);
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2 + 1;
  *puVar2 = 0x5b;
  return 1;
}




void FUN_100112734(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar1 = param_1[4];
  if (lVar1 == param_1[3]) {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    if (*(ulong *)(lVar1 + -0x10) != 0) {
      lVar4 = *param_1;
      if (*(char *)(lVar1 + -8) == '\0') {
        uVar3 = 0x2c;
        if ((*(ulong *)(lVar1 + -0x10) & 1) != 0) {
          uVar3 = 0x3a;
        }
        puVar2 = *(undefined1 **)(lVar4 + 0x18);
        if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
          FUN_1000f9034(lVar4,1);
          puVar2 = *(undefined1 **)(lVar4 + 0x18);
        }
        *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
        *puVar2 = uVar3;
      }
      else {
        puVar2 = *(undefined1 **)(lVar4 + 0x18);
        if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
          FUN_1000f9034(lVar4,1);
          puVar2 = *(undefined1 **)(lVar4 + 0x18);
        }
        *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
        *puVar2 = 0x2c;
      }
    }
    *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
  }
  return;
}




undefined8 FUN_1001127fc(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(lVar2,1);
    puVar1 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1 + 1;
  *puVar1 = 0x6e;
  lVar2 = *param_1;
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(lVar2,1);
    puVar1 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1 + 1;
  *puVar1 = 0x75;
  lVar2 = *param_1;
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(lVar2,1);
    puVar1 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1 + 1;
  *puVar1 = 0x6c;
  lVar2 = *param_1;
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(lVar2,1);
    puVar1 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1 + 1;
  *puVar1 = 0x6c;
  return 1;
}




undefined8 FUN_1001128e8(long *param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  puVar2 = *(undefined1 **)(lVar4 + 0x18);
  bVar1 = *(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1;
  if (param_2 == 0) {
    if (bVar1) {
      FUN_1000f9034(lVar4,1);
      puVar2 = *(undefined1 **)(lVar4 + 0x18);
    }
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    *puVar2 = 0x66;
    lVar4 = *param_1;
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
    if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
      FUN_1000f9034(lVar4,1);
      puVar2 = *(undefined1 **)(lVar4 + 0x18);
    }
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    *puVar2 = 0x61;
    lVar4 = *param_1;
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
    if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
      FUN_1000f9034(lVar4,1);
      puVar2 = *(undefined1 **)(lVar4 + 0x18);
    }
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    *puVar2 = 0x6c;
    lVar4 = *param_1;
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
    if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
      FUN_1000f9034(lVar4,1);
      puVar2 = *(undefined1 **)(lVar4 + 0x18);
    }
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    uVar3 = 0x73;
  }
  else {
    if (bVar1) {
      FUN_1000f9034(lVar4,1);
      puVar2 = *(undefined1 **)(lVar4 + 0x18);
    }
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    *puVar2 = 0x74;
    lVar4 = *param_1;
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
    if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
      FUN_1000f9034(lVar4,1);
      puVar2 = *(undefined1 **)(lVar4 + 0x18);
    }
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    *puVar2 = 0x72;
    lVar4 = *param_1;
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
    if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
      FUN_1000f9034(lVar4,1);
      puVar2 = *(undefined1 **)(lVar4 + 0x18);
    }
    *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
    uVar3 = 0x75;
  }
  *puVar2 = uVar3;
  lVar4 = *param_1;
  puVar2 = *(undefined1 **)(lVar4 + 0x18);
  if (*(undefined1 **)(lVar4 + 0x20) <= puVar2 + 1) {
    FUN_1000f9034(lVar4,1);
    puVar2 = *(undefined1 **)(lVar4 + 0x18);
  }
  *(undefined1 **)(lVar4 + 0x18) = puVar2 + 1;
  *puVar2 = 0x65;
  return 1;
}




void FUN_100112aa4(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    if (*param_1 == 0) {
      pvVar2 = operator_new(1);
      *param_1 = (long)pvVar2;
      param_1[1] = (long)pvVar2;
    }
    lVar3 = 0;
    uVar4 = param_1[5];
  }
  else {
    uVar4 = (param_1[4] - lVar3) + ((param_1[4] - lVar3) + 1U >> 1);
  }
  uVar1 = (param_1[3] - lVar3) + param_2 * 0x10;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  FUN_1000f8ba8(param_1,uVar1);
  return;
}




undefined8 FUN_100112b14(long *param_1,long param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *param_1;
  puVar4 = *(undefined1 **)(lVar7 + 0x18);
  if (*(undefined1 **)(lVar7 + 0x20) <= puVar4 + 1) {
    FUN_1000f9034(lVar7,1);
    puVar4 = *(undefined1 **)(lVar7 + 0x18);
  }
  *(undefined1 **)(lVar7 + 0x18) = puVar4 + 1;
  *puVar4 = 0x22;
  if (param_3 != 0) {
    uVar8 = 0;
    do {
      bVar1 = *(byte *)(param_2 + uVar8);
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      lVar7 = *param_1;
      pbVar5 = *(byte **)(lVar7 + 0x18);
      bVar3 = *(byte **)(lVar7 + 0x20) <= pbVar5 + 1;
      if (cVar2 == '\0') {
        if (bVar3) {
          FUN_1000f9034(lVar7,1);
          pbVar5 = *(byte **)(lVar7 + 0x18);
        }
        *(byte **)(lVar7 + 0x18) = pbVar5 + 1;
        *pbVar5 = bVar1;
      }
      else {
        if (bVar3) {
          FUN_1000f9034(lVar7,1);
          pbVar5 = *(byte **)(lVar7 + 0x18);
        }
        *(byte **)(lVar7 + 0x18) = pbVar5 + 1;
        *pbVar5 = 0x5c;
        lVar7 = *param_1;
        pcVar6 = *(char **)(lVar7 + 0x18);
        if (*(char **)(lVar7 + 0x20) <= pcVar6 + 1) {
          FUN_1000f9034(lVar7,1);
          pcVar6 = *(char **)(lVar7 + 0x18);
        }
        *(char **)(lVar7 + 0x18) = pcVar6 + 1;
        *pcVar6 = cVar2;
        if (cVar2 == 'u') {
          lVar7 = *param_1;
          puVar4 = *(undefined1 **)(lVar7 + 0x18);
          if (*(undefined1 **)(lVar7 + 0x20) <= puVar4 + 1) {
            FUN_1000f9034(lVar7,1);
            puVar4 = *(undefined1 **)(lVar7 + 0x18);
          }
          *(undefined1 **)(lVar7 + 0x18) = puVar4 + 1;
          *puVar4 = 0x30;
          lVar7 = *param_1;
          puVar4 = *(undefined1 **)(lVar7 + 0x18);
          if (*(undefined1 **)(lVar7 + 0x20) <= puVar4 + 1) {
            FUN_1000f9034(lVar7,1);
            puVar4 = *(undefined1 **)(lVar7 + 0x18);
          }
          *(undefined1 **)(lVar7 + 0x18) = puVar4 + 1;
          *puVar4 = 0x30;
          lVar7 = *param_1;
          pcVar6 = *(char **)(lVar7 + 0x18);
          if (*(char **)(lVar7 + 0x20) <= pcVar6 + 1) {
            FUN_1000f9034(lVar7,1);
            pcVar6 = *(char **)(lVar7 + 0x18);
          }
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
          *(char **)(lVar7 + 0x18) = pcVar6 + 1;
          *pcVar6 = cVar2;
          lVar7 = *param_1;
          pcVar6 = *(char **)(lVar7 + 0x18);
          if (*(char **)(lVar7 + 0x20) <= pcVar6 + 1) {
            FUN_1000f9034(lVar7,1);
            pcVar6 = *(char **)(lVar7 + 0x18);
          }
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
          *(char **)(lVar7 + 0x18) = pcVar6 + 1;
          *pcVar6 = cVar2;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  lVar7 = *param_1;
  puVar4 = *(undefined1 **)(lVar7 + 0x18);
  if (*(undefined1 **)(lVar7 + 0x20) <= puVar4 + 1) {
    FUN_1000f9034(lVar7,1);
    puVar4 = *(undefined1 **)(lVar7 + 0x18);
  }
  *(undefined1 **)(lVar7 + 0x18) = puVar4 + 1;
  *puVar4 = 0x22;
  return 1;
}




char * FUN_100112d5c(ulong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar4 = (uint)param_1;
  if (0x270 < ((uint)(param_1 >> 4) & 0xfffffff)) {
    if (99999999 < uVar4) {
      uVar2 = uVar4 % 100000000;
      if (uVar4 < 1000000000) {
        pcVar5 = param_2 + 1;
        *param_2 = (char)(uVar4 / 100000000) + '0';
      }
      else {
        lVar6 = (ulong)(uVar4 / 100000000) * 2;
        *param_2 = (&DAT_10114cf58)[lVar6];
        pcVar5 = param_2 + 2;
        param_2[1] = (&DAT_10114cf59)[lVar6];
      }
      lVar6 = (ulong)((uVar2 % 10000) % 100) * 2;
      *(undefined2 *)pcVar5 = *(undefined2 *)(&DAT_10114cf58 + ((ulong)uVar2 / 500000 & 0x3ffe));
      *(undefined2 *)(pcVar5 + 2) =
           *(undefined2 *)
            (&DAT_10114cf58 + ((ulong)(uVar2 / 10000 + (uVar2 / 1000000) * -100) & 0xffff) * 2);
      *(undefined2 *)(pcVar5 + 4) =
           *(undefined2 *)(&DAT_10114cf58 + (ulong)((uVar2 % 10000) / 100) * 2);
      pcVar5[6] = (&DAT_10114cf58)[lVar6];
      pcVar5[7] = (&DAT_10114cf59)[lVar6];
      return pcVar5 + 8;
    }
    uVar7 = param_1 & 0xffffffff;
    uVar3 = uVar4 + (int)(uVar7 / 10000) * -10000;
    uVar9 = (param_1 & 0xffffffff) / 500000 & 0x3ffe;
    lVar8 = ((ulong)((int)(uVar7 / 10000) + (((uint)(uVar7 / 40000) & 0x3fff) / 0x19) * -100) &
            0xffff) * 2;
    uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
    uVar7 = (ulong)uVar2 * 2;
    lVar6 = ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2;
    if (uVar4 < 10000000) {
      if (999999 < uVar4) goto LAB_100112eec;
      pcVar5 = param_2;
      if (uVar4 >> 5 < 0xc35) goto LAB_100112f14;
    }
    else {
      *param_2 = (&DAT_10114cf58)[uVar9];
      param_2 = param_2 + 1;
LAB_100112eec:
      *param_2 = (&DAT_10114cf58)[uVar9 | 1];
      pcVar5 = param_2 + 1;
    }
    param_2 = pcVar5 + 1;
    *pcVar5 = (&DAT_10114cf58)[lVar8];
LAB_100112f14:
    *param_2 = (&DAT_10114cf58)[(ulong)((uint)lVar8 | 1) & 0xffff];
    cVar1 = (&DAT_10114cf58)[uVar7 | 1];
    param_2[1] = (&DAT_10114cf58)[uVar7];
    param_2[2] = cVar1;
    param_2[3] = (&DAT_10114cf58)[lVar6];
    param_2[4] = (&DAT_10114cf58)[(ulong)((uint)lVar6 | 1) & 0xffff];
    return param_2 + 5;
  }
  uVar2 = (uVar4 >> 2 & 0x3fff) / 0x19;
  uVar7 = (ulong)uVar2 * 2;
  lVar6 = ((ulong)(uVar4 + uVar2 * -100) & 0xffff) * 2;
  if (uVar4 < 1000) {
    if (99 < uVar4) goto LAB_100112e4c;
    pcVar5 = param_2;
    if (uVar4 < 10) goto LAB_100112e74;
  }
  else {
    *param_2 = (&DAT_10114cf58)[uVar7];
    param_2 = param_2 + 1;
LAB_100112e4c:
    *param_2 = (&DAT_10114cf58)[uVar7 | 1];
    pcVar5 = param_2 + 1;
  }
  param_2 = pcVar5 + 1;
  *pcVar5 = (&DAT_10114cf58)[lVar6];
LAB_100112e74:
  *param_2 = (&DAT_10114cf58)[(ulong)((uint)lVar6 | 1) & 0xffff];
  return param_2 + 1;
}




char * FUN_100113028(ulong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  if (param_1 < 100000000) {
    uVar6 = (uint)param_1;
    if (0x270 < ((uint)(param_1 >> 4) & 0xfffffff)) {
      uVar7 = param_1 & 0xffffffff;
      uVar6 = uVar6 + (int)(uVar7 / 10000) * -10000;
      uVar9 = (param_1 & 0xffffffff) / 500000 & 0x3ffe;
      lVar8 = ((ulong)((int)(uVar7 / 10000) + (((uint)(uVar7 / 40000) & 0x3fff) / 0x19) * -100) &
              0xffff) * 2;
      uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
      uVar7 = (ulong)uVar2 * 2;
      lVar5 = ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2;
      if (param_1 < 10000000) {
        if (999999 < param_1) goto LAB_1001133a0;
        pcVar4 = param_2;
        if (param_1 >> 5 < 0xc35) goto LAB_1001133c8;
      }
      else {
        *param_2 = (&DAT_10114cf58)[uVar9];
        param_2 = param_2 + 1;
LAB_1001133a0:
        *param_2 = (&DAT_10114cf58)[uVar9 | 1];
        pcVar4 = param_2 + 1;
      }
      param_2 = pcVar4 + 1;
      *pcVar4 = (&DAT_10114cf58)[lVar8];
LAB_1001133c8:
      *param_2 = (&DAT_10114cf58)[(ulong)((uint)lVar8 | 1) & 0xffff];
      cVar1 = (&DAT_10114cf58)[uVar7 | 1];
      param_2[1] = (&DAT_10114cf58)[uVar7];
      param_2[2] = cVar1;
      param_2[3] = (&DAT_10114cf58)[lVar5];
      param_2[4] = (&DAT_10114cf58)[(ulong)((uint)lVar5 | 1) & 0xffff];
      return param_2 + 5;
    }
    uVar2 = (uVar6 >> 2 & 0x3fff) / 0x19;
    uVar7 = (ulong)uVar2 * 2;
    lVar5 = ((ulong)(uVar6 + uVar2 * -100) & 0xffff) * 2;
    if (uVar6 < 1000) {
      if (99 < uVar6) goto LAB_100113240;
      pcVar4 = param_2;
      if (uVar6 < 10) goto LAB_100113268;
    }
    else {
      *param_2 = (&DAT_10114cf58)[uVar7];
      param_2 = param_2 + 1;
LAB_100113240:
      *param_2 = (&DAT_10114cf58)[uVar7 | 1];
      pcVar4 = param_2 + 1;
    }
    param_2 = pcVar4 + 1;
    *pcVar4 = (&DAT_10114cf58)[lVar5];
LAB_100113268:
    *param_2 = (&DAT_10114cf58)[(ulong)((uint)lVar5 | 1) & 0xffff];
    return param_2 + 1;
  }
  if (9999999999999999 < param_1) {
    uVar7 = param_1 / 10000000000000000;
    uVar6 = (uint)uVar7;
    if (uVar6 < 10) {
      pcVar4 = param_2 + 1;
      *param_2 = (char)uVar7 + '0';
    }
    else if (uVar6 < 100) {
      *param_2 = (&DAT_10114cf58)[uVar7 * 2];
      pcVar4 = param_2 + 2;
      param_2[1] = (&DAT_10114cf59)[uVar7 * 2];
    }
    else if (uVar6 < 1000) {
      *param_2 = (char)(uVar6 / 100) + '0';
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(&DAT_10114cf58 + (ulong)(uVar6 % 100) * 2);
      pcVar4 = param_2 + 3;
    }
    else {
      lVar5 = (ulong)(uVar6 % 100) * 2;
      *(undefined2 *)param_2 = *(undefined2 *)(&DAT_10114cf58 + (ulong)(uVar6 / 100) * 2);
      param_2[2] = (&DAT_10114cf58)[lVar5];
      pcVar4 = param_2 + 4;
      param_2[3] = (&DAT_10114cf59)[lVar5];
    }
    uVar7 = (param_1 % 10000000000000000) / 100000000;
    uVar9 = (param_1 % 10000000000000000) % 100000000;
    uVar2 = (int)uVar7 + (int)(uVar7 / 10000) * -10000;
    uVar6 = (uVar2 >> 2 & 0x3fff) / 0x19;
    uVar11 = ((ulong)(uVar2 + uVar6 * -100) & 0xffff) * 2;
    uVar3 = (int)uVar9 + (int)(uVar9 / 10000) * -10000;
    uVar2 = (uVar3 >> 2 & 0x3fff) / 0x19;
    *(undefined2 *)pcVar4 = *(undefined2 *)(&DAT_10114cf58 + (uVar7 / 500000 & 0x3ffe));
    *(undefined2 *)(pcVar4 + 2) =
         *(undefined2 *)
          (&DAT_10114cf58 +
          ((ulong)((int)(uVar7 / 10000) + ((uint)(uVar7 / 40000) / 0x19) * -100) & 0xffff) * 2);
    *(undefined2 *)(pcVar4 + 4) = *(undefined2 *)(&DAT_10114cf58 + (ulong)uVar6 * 2);
    uVar7 = ((ulong)(uVar3 + uVar2 * -100) & 0xffff) * 2;
    pcVar4[6] = (&DAT_10114cf58)[uVar11];
    pcVar4[7] = (&DAT_10114cf59)[uVar11 & 0xfffe];
    *(undefined2 *)(pcVar4 + 8) = *(undefined2 *)(&DAT_10114cf58 + (uVar9 / 500000 & 0x3ffe));
    *(undefined2 *)(pcVar4 + 10) =
         *(undefined2 *)
          (&DAT_10114cf58 +
          ((ulong)((int)(uVar9 / 10000) + ((uint)(uVar9 / 40000) / 0x19) * -100) & 0xffff) * 2);
    *(undefined2 *)(pcVar4 + 0xc) = *(undefined2 *)(&DAT_10114cf58 + (ulong)uVar2 * 2);
    pcVar4[0xe] = (&DAT_10114cf58)[uVar7];
    pcVar4[0xf] = (&DAT_10114cf59)[uVar7 & 0xfffe];
    return pcVar4 + 0x10;
  }
  uVar9 = param_1 % 100000000;
  uVar7 = param_1 / 100000000 & 0xffffffff;
  uVar2 = (int)(param_1 / 100000000) + (int)(uVar7 / 10000) * -10000;
  uVar13 = uVar7 / 500000 & 0x3ffe;
  lVar12 = ((ulong)((int)(uVar7 / 10000) + (((uint)(uVar7 / 40000) & 0x3fff) / 0x19) * -100) &
           0xffff) * 2;
  uVar6 = (uVar2 >> 2 & 0x3fff) / 0x19;
  uVar11 = (ulong)uVar6 * 2;
  lVar8 = ((ulong)(uVar2 + uVar6 * -100) & 0xffff) * 2;
  uVar2 = (int)uVar9 + (int)(uVar9 / 10000) * -10000;
  uVar7 = uVar9 / 500000 & 0x3ffe;
  lVar10 = ((ulong)((int)(uVar9 / 10000) + ((uint)(uVar9 / 40000) / 0x19) * -100) & 0xffff) * 2;
  uVar6 = (uVar2 >> 2 & 0x3fff) / 0x19;
  uVar9 = (ulong)uVar6 * 2;
  lVar5 = ((ulong)(uVar2 + uVar6 * -100) & 0xffff) * 2;
  if (param_1 < 1000000000000000) {
    if (99999999999999 < param_1) goto LAB_100113298;
    pcVar4 = param_2;
    if (9999999999999 < param_1) goto LAB_1001132b0;
    if (999999999999 < param_1) goto LAB_1001132c0;
    if (99999999999 < param_1) goto LAB_1001132d8;
    if (9999999999 < param_1) goto LAB_1001132e8;
    if (param_1 < 1000000000) goto LAB_100113310;
  }
  else {
    *param_2 = (&DAT_10114cf58)[uVar13];
    param_2 = param_2 + 1;
LAB_100113298:
    *param_2 = (&DAT_10114cf58)[uVar13 | 1];
    pcVar4 = param_2 + 1;
LAB_1001132b0:
    param_2 = pcVar4 + 1;
    *pcVar4 = (&DAT_10114cf58)[lVar12];
LAB_1001132c0:
    *param_2 = (&DAT_10114cf58)[(ulong)((uint)lVar12 | 1) & 0xffff];
    pcVar4 = param_2 + 1;
LAB_1001132d8:
    param_2 = pcVar4 + 1;
    *pcVar4 = (&DAT_10114cf58)[uVar11];
LAB_1001132e8:
    *param_2 = (&DAT_10114cf58)[uVar11 | 1];
    pcVar4 = param_2 + 1;
  }
  param_2 = pcVar4 + 1;
  *pcVar4 = (&DAT_10114cf58)[lVar8];
LAB_100113310:
  *param_2 = (&DAT_10114cf58)[(ulong)((uint)lVar8 | 1) & 0xffff];
  param_2[1] = (&DAT_10114cf58)[uVar7];
  param_2[2] = (&DAT_10114cf58)[uVar7 | 1];
  param_2[3] = (&DAT_10114cf58)[lVar10];
  param_2[4] = (&DAT_10114cf58)[(ulong)((uint)lVar10 | 1) & 0xffff];
  cVar1 = (&DAT_10114cf58)[uVar9 | 1];
  param_2[5] = (&DAT_10114cf58)[uVar9];
  param_2[6] = cVar1;
  param_2[7] = (&DAT_10114cf58)[lVar5];
  param_2[8] = (&DAT_10114cf58)[(ulong)((uint)lVar5 | 1) & 0xffff];
  return param_2 + 9;
}




void FUN_100113658(ulong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 local_a8 [12];
  ulong local_98;
  int local_90;
  long local_88;
  ulong local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  long local_58;
  
  uVar6 = (uint)(param_1 >> 0x34);
  bVar3 = (uVar6 & 0x7ff) != 0;
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = param_1 & 0xfffffffffffff;
  if (bVar3) {
    uVar4 = param_1 & 0xfffffffffffff | 0x10000000000000;
  }
  iVar1 = -0x432;
  if (bVar3) {
    iVar1 = (uVar6 & 0x7ff) - 0x433;
  }
  local_98 = uVar4 << 1 | 1;
  local_90 = iVar1 + -1;
  local_a8 = FUN_100113dd4(&local_98);
  local_90 = local_a8._8_4_;
  iVar5 = -2;
  if (uVar4 != 0x10000000000000) {
    iVar5 = -1;
  }
  lVar2 = 0x3fffffffffffff;
  if (uVar4 != 0x10000000000000) {
    lVar2 = uVar4 * 2 + -1;
  }
  local_98 = lVar2 << ((ulong)(uint)((iVar5 + iVar1) - local_90) & 0x3f);
  dVar7 = (double)(-0x3d - local_90) * 0.30102999566398114 + 347.0;
  iVar5 = (int)dVar7;
  if (0.0 < dVar7 - (double)(long)dVar7) {
    iVar5 = iVar5 + 1;
  }
  uVar6 = (iVar5 >> 3) + 1;
  *param_4 = uVar6 * -8 + 0x15c;
  local_68 = *(undefined8 *)(&DAT_10114d020 + (ulong)uVar6 * 8);
  uStack_60 = (long)*(short *)(&DAT_10114d2d8 + (ulong)uVar6 * 2) & 0xffffffff;
  local_88 = uVar4 << (LZCOUNT(uVar4) & 0x3fU);
  local_80 = (ulong)(uint)(iVar1 - (int)LZCOUNT(uVar4));
  local_78 = FUN_1001139ec(&local_88,&local_68);
  auVar8 = FUN_1001139ec(local_a8,&local_68);
  local_80 = auVar8._8_8_;
  uVar4 = FUN_1001139ec(&local_98,&local_68);
  local_88 = auVar8._0_8_ + -1;
  FUN_100113a4c(local_78,&local_88,local_88 + ~uVar4,param_2,param_3,param_4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




char * FUN_10011381c(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar1 = param_3 + param_2;
  if ((-1 < param_3) && ((int)uVar1 < 0x16)) {
    if (0 < param_3) {
      uVar5 = uVar1;
      if ((int)uVar1 <= (int)(param_2 + 1)) {
        uVar5 = param_2 + 1;
      }
      _memset((void *)((long)param_1 + (long)(int)param_2),0x30,(ulong)(uVar5 + ~param_2) + 1);
    }
    pcVar2 = (char *)((long)param_1 + (long)(int)uVar1);
    uVar3 = 0x302e;
    goto LAB_100113878;
  }
  uVar5 = uVar1 - 1;
  if (uVar5 < 0x15) {
    _memmove((void *)((long)param_1 + (ulong)(uVar1 + 1)),
             (undefined1 *)((long)param_1 + (ulong)uVar1),(long)-param_3);
    *(undefined1 *)((long)param_1 + (ulong)uVar1) = 0x2e;
    return (char *)((long)param_1 + (long)(int)param_2 + 1);
  }
  if (uVar1 + 5 < 6) {
    uVar6 = 2 - (long)(int)uVar1;
    _memmove((void *)((long)param_1 + (uVar6 & 0xffffffff)),param_1,(long)(int)param_2);
    *param_1 = 0x2e30;
    if ((int)uVar1 < 0) {
      iVar4 = (int)uVar6;
      if (iVar4 < 4) {
        iVar4 = 3;
      }
      _memset(param_1 + 1,0x30,(ulong)(iVar4 - 2));
    }
    return (char *)((long)param_1 + uVar6 + (long)(int)param_2);
  }
  if (param_2 - 1 == 0) {
    *(undefined1 *)((long)param_1 + 1) = 0x65;
    if ((int)uVar5 < 0) {
      *(undefined1 *)(param_1 + 1) = 0x2d;
LAB_100113974:
      pcVar2 = (char *)((long)param_1 + 3);
      uVar5 = 1 - uVar1;
    }
    else {
      pcVar2 = (char *)(param_1 + 1);
    }
  }
  else {
    _memmove(param_1 + 1,(void *)((long)param_1 + 1),(long)(int)(param_2 - 1));
    *(undefined1 *)((long)param_1 + 1) = 0x2e;
    param_1 = (undefined2 *)((long)param_1 + (long)(int)param_2);
    *(undefined1 *)((long)param_1 + 1) = 0x65;
    pcVar2 = (char *)(param_1 + 1);
    if ((int)uVar5 < 0) {
      *pcVar2 = '-';
      goto LAB_100113974;
    }
  }
  if (99 < (int)uVar5) {
    *pcVar2 = (char)(uVar5 / 100) + '0';
    *(undefined2 *)(pcVar2 + 1) = *(undefined2 *)(&DAT_10114cf58 + (ulong)(uVar5 % 100) * 2);
    return pcVar2 + 3;
  }
  if ((int)uVar5 < 10) {
    *pcVar2 = (char)uVar5 + '0';
    return pcVar2 + 1;
  }
  uVar3 = *(undefined2 *)(&DAT_10114cf58 + (ulong)uVar5 * 2);
LAB_100113878:
  *(undefined2 *)pcVar2 = uVar3;
  return pcVar2 + 2;
}




undefined1  [16] FUN_1001139ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  uVar3 = (uVar4 >> 0x20) * (uVar1 & 0xffffffff);
  uVar2 = (uVar4 & 0xffffffff) * (uVar1 >> 0x20);
  auVar5._8_4_ = (int)param_1[1] + (int)param_2[1] + 0x40;
  auVar5._0_8_ = (uVar4 >> 0x20) * (uVar1 >> 0x20) + (uVar2 >> 0x20) + (uVar3 >> 0x20) +
                 (((uVar4 & 0xffffffff) * (uVar1 & 0xffffffff) >> 0x20) + (uVar2 & 0xffffffff) +
                  (uVar3 & 0xffffffff) + 0x80000000 >> 0x20);
  auVar5._12_4_ = 0;
  return auVar5;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100113a4c(long *param_1,ulong *param_2,ulong param_3,long param_4,int *param_5,int *param_6
                  )

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  
  uVar7 = (ulong)(uint)-(int)param_2[1];
  uVar5 = 1L << (uVar7 & 0x3f);
  uVar8 = *param_2;
  lVar3 = *param_1;
  uVar4 = uVar8 - lVar3;
  uVar13 = uVar8 >> (uVar7 & 0x3f);
  uVar6 = uVar5 - 1 & uVar8;
  uVar12 = (uint)uVar13;
  uVar10 = 8;
  if (99999999 < uVar12) {
    uVar10 = 9;
  }
  uVar2 = 7;
  if (9999999 < uVar12) {
    uVar2 = uVar10;
  }
  uVar10 = 6;
  if (999999 < uVar12) {
    uVar10 = uVar2;
  }
  uVar2 = 5;
  if (99999 < uVar12) {
    uVar2 = uVar10;
  }
  uVar10 = 4;
  if (0x270 < ((uint)(uVar13 >> 4) & 0xfffffff)) {
    uVar10 = uVar2;
  }
  uVar2 = 3;
  if (999 < uVar12) {
    uVar2 = uVar10;
  }
  uVar10 = 2;
  if (99 < uVar12) {
    uVar10 = uVar2;
  }
  uVar2 = 1;
  if (9 < uVar12) {
    uVar2 = uVar10;
  }
  *param_5 = 0;
  do {
    uVar12 = (uint)uVar13;
    uVar14 = 0;
    uVar10 = uVar12;
    switch(uVar2) {
    case 0:
      iVar15 = -uVar2;
      do {
        uVar13 = param_3;
        uVar8 = uVar6 * 10 >> (uVar7 & 0x3f);
        iVar1 = *param_5;
        if ((uVar8 & 0xff) != 0 || iVar1 != 0) {
          *param_5 = iVar1 + 1;
          *(char *)(param_4 + iVar1) = (char)uVar8 + '0';
        }
        param_3 = uVar13 * 10;
        uVar6 = uVar6 * 10 & uVar5 - 1;
        iVar15 = iVar15 + 1;
      } while (param_3 < uVar6 || param_3 - uVar6 == 0);
      *param_6 = *param_6 - iVar15;
      uVar10 = *(uint *)(&UNK_10114d388 + (long)iVar15 * 4);
      uVar7 = uVar4 * uVar10;
      if (uVar7 <= uVar6 || param_3 - uVar6 < uVar5) {
        return;
      }
      iVar15 = *param_5;
      lVar3 = -uVar6;
      do {
        uVar6 = uVar5 + uVar6;
        if ((uVar7 <= uVar6) && (uVar7 + lVar3 <= uVar6 - uVar4 * uVar10)) {
          return;
        }
        *(char *)(param_4 + (long)iVar15 + -1) = *(char *)(param_4 + (long)iVar15 + -1) + -1;
        if (uVar7 <= uVar6) {
          return;
        }
        uVar8 = (uVar13 * 10 - uVar5) + lVar3;
        lVar3 = lVar3 - uVar5;
      } while (uVar5 <= uVar8);
      return;
    case 2:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 10);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 10) * -10);
      break;
    case 3:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 100);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 100) * -100);
      break;
    case 4:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 1000);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 1000) * -1000);
      break;
    case 5:
      uVar10 = (uint)((uVar13 & 0xffffffff) / 10000);
      uVar13 = (ulong)(uVar12 + (int)((uVar13 & 0xffffffff) / 10000) * -10000);
      break;
    case 6:
      uVar10 = uVar12 / 100000;
      uVar13 = (ulong)(uVar12 % 100000);
      break;
    case 7:
      uVar10 = uVar12 / 1000000;
      uVar13 = (ulong)(uVar12 % 1000000);
      break;
    case 8:
      uVar10 = uVar12 / 10000000;
      uVar14 = (ulong)(uVar12 % 10000000);
    case 1:
      uVar13 = uVar14;
      break;
    case 9:
      uVar10 = uVar12 / 100000000;
      uVar13 = (ulong)(uVar12 % 100000000);
      break;
    default:
      goto switchD_100113b6c_default;
    }
    if (uVar10 == 0) {
switchD_100113b6c_default:
      iVar15 = *param_5;
      if (iVar15 != 0) {
        cVar11 = '\0';
        goto LAB_100113bf8;
      }
    }
    else {
      cVar11 = (char)uVar10;
      iVar15 = *param_5;
LAB_100113bf8:
      *param_5 = iVar15 + 1;
      *(char *)(param_4 + iVar15) = cVar11 + '0';
    }
    uVar2 = uVar2 - 1;
    lVar16 = (uVar13 & 0xffffffff) << (uVar7 & 0x3f);
    uVar14 = lVar16 + uVar6;
    if (uVar14 <= param_3) {
      *param_6 = *param_6 + uVar2;
      if ((uVar14 < uVar4) &&
         (uVar13 = (ulong)*(uint *)(&UNK_10114d388 + (ulong)uVar2 * 4) << (uVar7 & 0x3f),
         uVar13 <= param_3 - uVar14)) {
        iVar15 = *param_5;
        lVar9 = -lVar16;
        uVar5 = uVar6 + uVar13 + lVar16;
        do {
          if ((uVar4 <= uVar5) && ((uVar4 - uVar6) + lVar9 <= (lVar3 - uVar8) + uVar5)) {
            return;
          }
          *(char *)(param_4 + (long)iVar15 + -1) = *(char *)(param_4 + (long)iVar15 + -1) + -1;
          if (uVar4 <= uVar5) {
            return;
          }
          uVar7 = ((param_3 - uVar6) - uVar13) + lVar9;
          lVar9 = lVar9 - uVar13;
          uVar5 = uVar5 + uVar13;
        } while (uVar13 <= uVar7);
      }
      return;
    }
  } while( true );
}




undefined1  [16] FUN_100113dd4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  if ((uVar2 >> 0x35 & 1) == 0) {
    uVar3 = LZCOUNT(uVar2 & 0x1fffffffffffff) - 10;
    uVar2 = uVar2 << (uVar3 & 0x3f);
    do {
      uVar1 = (ulong)((int)uVar1 - 1) | uVar1 & 0xffffffff00000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  auVar4._0_8_ = uVar2 << 10;
  auVar4._8_8_ = (ulong)((int)uVar1 - 10) | uVar1 & 0xffffffff00000000;
  return auVar4;
}




void FUN_100113e14(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1[1] < param_2) {
    pvVar5 = operator_new__((ulong)param_2 * 0x188);
    pvVar6 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar7 = 0;
      do {
        puVar1 = (undefined4 *)((long)pvVar5 + lVar7);
        puVar2 = (undefined4 *)((long)pvVar6 + lVar7);
        uVar4 = *puVar2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
        *puVar1 = uVar4;
        FUN_10003330c(puVar1 + 2,puVar2 + 2);
        thunk_FUN_1004e439c(puVar1 + 8,puVar2 + 8);
        thunk_FUN_1004e439c(puVar1 + 0xc,puVar2 + 0xc);
        thunk_FUN_1004e439c(puVar1 + 0x10,puVar2 + 0x10);
        FUN_10003330c(puVar1 + 0x14,puVar2 + 0x14);
        thunk_FUN_1004e439c(puVar1 + 0x1a,puVar2 + 0x1a);
        thunk_FUN_1004e439c(puVar1 + 0x1e,puVar2 + 0x1e);
        FUN_10003330c(puVar1 + 0x22,puVar2 + 0x22);
        uVar9 = *(undefined8 *)(puVar2 + 0x2a);
        uVar8 = *(undefined8 *)(puVar2 + 0x28);
        uVar10 = *(undefined8 *)(puVar2 + 0x2c);
        uVar12 = *(undefined8 *)(puVar2 + 0x32);
        uVar11 = *(undefined8 *)(puVar2 + 0x30);
        *(undefined8 *)(puVar1 + 0x2e) = *(undefined8 *)(puVar2 + 0x2e);
        *(undefined8 *)(puVar1 + 0x2c) = uVar10;
        *(undefined8 *)(puVar1 + 0x32) = uVar12;
        *(undefined8 *)(puVar1 + 0x30) = uVar11;
        *(undefined8 *)(puVar1 + 0x2a) = uVar9;
        *(undefined8 *)(puVar1 + 0x28) = uVar8;
        uVar9 = *(undefined8 *)(puVar2 + 0x36);
        uVar8 = *(undefined8 *)(puVar2 + 0x34);
        uVar11 = *(undefined8 *)(puVar2 + 0x3a);
        uVar10 = *(undefined8 *)(puVar2 + 0x38);
        uVar12 = *(undefined8 *)(puVar2 + 0x3c);
        uVar14 = *(undefined8 *)(puVar2 + 0x42);
        uVar13 = *(undefined8 *)(puVar2 + 0x40);
        *(undefined8 *)(puVar1 + 0x3e) = *(undefined8 *)(puVar2 + 0x3e);
        *(undefined8 *)(puVar1 + 0x3c) = uVar12;
        *(undefined8 *)(puVar1 + 0x42) = uVar14;
        *(undefined8 *)(puVar1 + 0x40) = uVar13;
        *(undefined8 *)(puVar1 + 0x36) = uVar9;
        *(undefined8 *)(puVar1 + 0x34) = uVar8;
        *(undefined8 *)(puVar1 + 0x3a) = uVar11;
        *(undefined8 *)(puVar1 + 0x38) = uVar10;
        uVar9 = *(undefined8 *)(puVar2 + 0x46);
        uVar8 = *(undefined8 *)(puVar2 + 0x44);
        uVar11 = *(undefined8 *)(puVar2 + 0x4a);
        uVar10 = *(undefined8 *)(puVar2 + 0x48);
        uVar13 = *(undefined8 *)(puVar2 + 0x4e);
        uVar12 = *(undefined8 *)(puVar2 + 0x4c);
        uVar14 = *(undefined8 *)(puVar2 + 0x4f);
        *(undefined8 *)(puVar1 + 0x51) = *(undefined8 *)(puVar2 + 0x51);
        *(undefined8 *)(puVar1 + 0x4f) = uVar14;
        *(undefined8 *)(puVar1 + 0x4a) = uVar11;
        *(undefined8 *)(puVar1 + 0x48) = uVar10;
        *(undefined8 *)(puVar1 + 0x4e) = uVar13;
        *(undefined8 *)(puVar1 + 0x4c) = uVar12;
        *(undefined8 *)(puVar1 + 0x46) = uVar9;
        *(undefined8 *)(puVar1 + 0x44) = uVar8;
        FUN_100113fb8(puVar1 + 0x54,puVar2 + 0x54);
        puVar1[0x58] = puVar2[0x58];
        FUN_10003330c(puVar1 + 0x5a,puVar2 + 0x5a);
        *(undefined2 *)(puVar1 + 0x60) = *(undefined2 *)(puVar2 + 0x60);
        lVar7 = lVar7 + 0x188;
      } while (puVar2 + 0x62 != (undefined4 *)((long)pvVar6 + (ulong)uVar3 * 0x188));
      pvVar6 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar7 = (ulong)*param_1 * 0x188;
        do {
          FUN_100111a80(pvVar6);
          pvVar6 = (void *)((long)pvVar6 + 0x188);
          lVar7 = lVar7 + -0x188;
        } while (lVar7 != 0);
        pvVar6 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
    }
    *(void **)(param_1 + 2) = pvVar5;
  }
  return;
}




uint * FUN_100113fb8(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10010c894(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 4;
    do {
      lVar1 = thunk_FUN_1004e439c(lVar1,lVar3);
      lVar3 = lVar3 + 0x10;
      lVar1 = lVar1 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_100114024(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar3 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  uVar4 = (ulong)*param_1;
  if (*param_1 != iVar3 * 0x1a1f58d1) {
    lVar5 = *(long *)(param_1 + 2);
    puVar7 = (undefined4 *)(lVar5 + uVar4 * 0x188);
    lVar2 = (long)puVar7 - (long)param_3;
    puVar6 = param_2;
    if (lVar2 != 0) {
      do {
        uVar1 = *param_3;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(param_3 + 1);
        *puVar6 = uVar1;
        std::string::operator=((string *)(puVar6 + 2),(string *)(param_3 + 2));
        FUN_1000153b4(puVar6 + 8,param_3 + 8);
        FUN_1000153b4(puVar6 + 0xc,param_3 + 0xc);
        FUN_1000153b4(puVar6 + 0x10,param_3 + 0x10);
        std::string::operator=((string *)(puVar6 + 0x14),(string *)(param_3 + 0x14));
        FUN_1000153b4(puVar6 + 0x1a,param_3 + 0x1a);
        FUN_1000153b4(puVar6 + 0x1e,param_3 + 0x1e);
        std::string::operator=((string *)(puVar6 + 0x22),(string *)(param_3 + 0x22));
        uVar11 = *(undefined8 *)(param_3 + 0x2e);
        uVar10 = *(undefined8 *)(param_3 + 0x2c);
        uVar9 = *(undefined8 *)(param_3 + 0x32);
        uVar8 = *(undefined8 *)(param_3 + 0x30);
        uVar12 = *(undefined8 *)(param_3 + 0x28);
        *(undefined8 *)(puVar6 + 0x2a) = *(undefined8 *)(param_3 + 0x2a);
        *(undefined8 *)(puVar6 + 0x28) = uVar12;
        *(undefined8 *)(puVar6 + 0x2e) = uVar11;
        *(undefined8 *)(puVar6 + 0x2c) = uVar10;
        *(undefined8 *)(puVar6 + 0x32) = uVar9;
        *(undefined8 *)(puVar6 + 0x30) = uVar8;
        uVar8 = *(undefined8 *)(param_3 + 0x3c);
        uVar10 = *(undefined8 *)(param_3 + 0x42);
        uVar9 = *(undefined8 *)(param_3 + 0x40);
        uVar14 = *(undefined8 *)(param_3 + 0x36);
        uVar13 = *(undefined8 *)(param_3 + 0x34);
        uVar12 = *(undefined8 *)(param_3 + 0x3a);
        uVar11 = *(undefined8 *)(param_3 + 0x38);
        *(undefined8 *)(puVar6 + 0x3e) = *(undefined8 *)(param_3 + 0x3e);
        *(undefined8 *)(puVar6 + 0x3c) = uVar8;
        *(undefined8 *)(puVar6 + 0x42) = uVar10;
        *(undefined8 *)(puVar6 + 0x40) = uVar9;
        *(undefined8 *)(puVar6 + 0x36) = uVar14;
        *(undefined8 *)(puVar6 + 0x34) = uVar13;
        *(undefined8 *)(puVar6 + 0x3a) = uVar12;
        *(undefined8 *)(puVar6 + 0x38) = uVar11;
        uVar12 = *(undefined8 *)(param_3 + 0x4a);
        uVar11 = *(undefined8 *)(param_3 + 0x48);
        uVar9 = *(undefined8 *)(param_3 + 0x4e);
        uVar8 = *(undefined8 *)(param_3 + 0x4c);
        uVar10 = *(undefined8 *)(param_3 + 0x4f);
        uVar14 = *(undefined8 *)(param_3 + 0x46);
        uVar13 = *(undefined8 *)(param_3 + 0x44);
        *(undefined8 *)(puVar6 + 0x51) = *(undefined8 *)(param_3 + 0x51);
        *(undefined8 *)(puVar6 + 0x4f) = uVar10;
        *(undefined8 *)(puVar6 + 0x4a) = uVar12;
        *(undefined8 *)(puVar6 + 0x48) = uVar11;
        *(undefined8 *)(puVar6 + 0x4e) = uVar9;
        *(undefined8 *)(puVar6 + 0x4c) = uVar8;
        *(undefined8 *)(puVar6 + 0x46) = uVar14;
        *(undefined8 *)(puVar6 + 0x44) = uVar13;
        FUN_100111b3c(puVar6 + 0x54,param_3 + 0x54);
        puVar6[0x58] = param_3[0x58];
        std::string::operator=((string *)(puVar6 + 0x5a),(string *)(param_3 + 0x5a));
        *(undefined2 *)(puVar6 + 0x60) = *(undefined2 *)(param_3 + 0x60);
        param_3 = param_3 + 0x62;
        puVar6 = puVar6 + 0x62;
      } while (param_3 != puVar7);
      uVar4 = (ulong)*param_1;
      lVar5 = *(long *)(param_1 + 2);
    }
    puVar6 = (undefined4 *)(lVar5 + uVar4 * 0x188);
    if (param_2 + ((lVar2 >> 3) * 0x1a1f58d1 & 0xffffffffU) * 0x62 != puVar6) {
      do {
        lVar2 = FUN_100111a80();
      } while ((undefined4 *)(lVar2 + 0x188) != puVar6);
      uVar4 = (ulong)*param_1;
    }
    *param_1 = (int)uVar4 + iVar3 * -0x1a1f58d1;
    return;
  }
  FUN_100110778(param_1,1);
  return;
}




void FUN_1001141f4(void)

{
  DAT_101dc7438 = 0xff;
  DAT_101dc743a = 0xffff;
  DAT_101dc743c = 0xffff;
  DAT_101dc743e = 0xffbc9c44;
  DAT_101dc7442 = 0xff1166f2;
  DAT_101dc7446 = 0xffe0e0e0;
  DAT_101dc744a = 0xffa0a0a0;
  DAT_101dc744e = 0xff8c8c8c;
  DAT_101dc7452 = 0xff322213;
  DAT_101dc7456 = 0xff091911;
  DAT_101dc745a = 0xff170c19;
  DAT_101dc745e = 0xff241a14;
  DAT_101dc7462 = 0xff14171c;
  DAT_101dc7466 = 0xff221911;
  DAT_101dc746a = 0xff1a1416;
  DAT_101dc746e = 0xff121414;
  DAT_101dc7472 = 0xff1a1809;
  DAT_101dc7476 = 0xff141414;
  DAT_101dc747a = 0xff141414;
  DAT_101dc747e = 0xff2929c0;
  DAT_101dc7482 = 0xff283082;
  DAT_101dc7486 = 0xff5262cc;
  DAT_101dc748a = 0xff283082;
  DAT_101dc748e = 0xff5262cc;
  DAT_101dc7492 = 0xff745c42;
  DAT_101dc7496 = 0xff184155;
  DAT_101dc749a = 0xff92665e;
  DAT_101dc749e = 0xffbc9c44;
  DAT_101dc74a2 = 0xffbbae56;
  DAT_101dc74a6 = 0xff8b7b01;
  DAT_101dc74aa = 0xff90b3ef;
  DAT_101dc74ae = 0xff728ebe;
  DAT_101dc74b2 = 0xff19459d;
  DAT_101dc74b6 = 0xff9d877b;
  DAT_101dc74ba = 0xffcbb1a3;
  DAT_101dc74be = 0xff3f6fb5;
  DAT_101dc74c2 = 0xffc5c5c5;
  DAT_101dc74c6 = 0xff4fc1f1;
  DAT_101dc74ca = 0xff606060;
  DAT_101dc74ce = 0xffc5ff7b;
  DAT_101dc74d2 = 0xff5271eb;
  DAT_101dc74d6 = 0xfffae076;
  DAT_101dc74da = 0xff3ac8f6;
  DAT_101dc74de = 0xffaaaaaa;
  DAT_101dc74e2 = 0xffe19400;
  DAT_101dc74e6 = 0xffe19400;
  DAT_101dc74ea = 0xffe550b2;
  DAT_101dc74ee = 0xfff22ae8;
  DAT_101dc74f2 = 0xff005ae1;
  DAT_101dc74f6 = 0xff1addfa;
  DAT_101dc74fa = 0xff2424b3;
  DAT_101dc74fe = 0xff2424b3;
  DAT_101dc7502 = 0xff646464;
  DAT_101dc7506 = 0xff92665e;
  DAT_101dc750a = 0xff646037;
  DAT_101dc7510 = 0xffffffff;
  DAT_101dc7514 = 0xff1111a1;
  DAT_101dc7518 = 0xff321ee1;
  DAT_101dc751c = 0xffc8c8c8;
  DAT_101dc7520 = 0xff321ee1;
  DAT_101dc7524 = 0xff7fe801;
  DAT_101dc7528 = 0xffffffff;
  DAT_101dc752c = 0xff6259b3;
  DAT_101dc7530 = 0xff506e73;
  DAT_101dc7534 = 0xff9dbf86;
  DAT_101dc7538 = 0xffa35244;
  DAT_101dc753c = 0xffca828e;
  DAT_101dc7540 = 0xffa6a6a6;
  DAT_101dc7544 = 0xffa6a6a6;
  DAT_101dc7548 = 0xffffffff;
  DAT_101dc754c = 0xff88ea2f;
  DAT_101dc7550 = 0xff8c8c8c;
  DAT_101dc7554 = 0xffffb400;
  DAT_101dc7558 = 0xffff00ff;
  DAT_101dc755c = 0xff00aded;
  DAT_101dc7560 = 0xff33d3ff;
  DAT_101dc7564 = 0xff7fe801;
  DAT_101dc7568 = 0xff282828;
  DAT_101dc756c = 0xfff0f0f0;
  DAT_101dc7570 = 0xffa4781e;
  DAT_101dc7574 = 0xffa6654b;
  DAT_101dc7578 = 0xff93435b;
  DAT_101dc757c = 0xff387f9c;
  DAT_101dc7580 = 0xffa3781e;
  DAT_101dc7584 = 0xffffd18a;
  DAT_101dc7588 = 0xffff61f7;
  DAT_101dc758c = 0xff5de1f2;
  DAT_101dc7590 = 0xff80eaff;
  DAT_101dc7594 = 0xff32e00e;
  DAT_101dc7598 = 0xff5a3c10;
  DAT_101dc759c = 0xff330b03;
  DAT_101dc75a0 = 0xff33031d;
  DAT_101dc75a4 = 0xff032433;
  DAT_101dc75a8 = 0xff9e8e8d;
  DAT_101d230b0 = 0;
  DAT_101d230b8 = 0;
  DAT_101d230c0 = 0;
  return;
}




undefined8 FUN_1001148bc(void)

{
  return DAT_101dc75b8;
}




void FUN_1001148c8(undefined8 param_1)

{
  FUN_100164e14(DAT_101dc75b8 + 0x1a60,param_1);
  return;
}




undefined8 FUN_1001148e0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_100147980();
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_1003467f8();
    uVar2 = 0;
    if (lVar3 != 0) {
      FUN_1003467f8();
      uVar2 = FUN_10034cf48();
      return uVar2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 * FUN_100114914(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x39] = param_1;
  *(ushort *)(param_1 + 0x3a) = *(ushort *)(param_1 + 0x3a) & 0x8000 | 0x3ff;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  puVar1 = param_1 + 0x3b;
  param_1[0x69] = param_1;
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0x8000 | 0x3ff;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3c] = 0;
  *puVar1 = 0;
  param_1[0x6b] = param_2;
  thunk_FUN_10012949c(param_1 + 0x6c);
  thunk_FUN_100144018(param_1 + 0x31a,param_1 + 0x6c);
  thunk_FUN_10015d410(param_1 + 0x34c);
  *(undefined4 *)(param_1 + 0xe36) = 0;
  param_1[0xe1f] = 0;
  param_1[0xe1e] = 0;
  *(undefined4 *)(param_1 + 0xe37) = 0;
  *(undefined2 *)((long)param_1 + 0x71bc) = 1;
  FUN_100114c70(param_1,0,FUN_100114cc0,0,FUN_100114d18,0,0,0);
  FUN_100114c70(param_1,1,FUN_100114db4,0,FUN_100114e70,0,FUN_100114ec8,0);
  FUN_100114c70(param_1,2,FUN_100114edc,0,FUN_100114f1c,0,0,0);
  FUN_100114f68(param_1,3,FUN_100114ff8,0,FUN_1001151a0,0,FUN_100115260,0);
  FUN_100114c70(param_1,4,0,0,0,0,0,0);
  FUN_100115294(param_1,0,2);
  FUN_100115294(param_1,0,1);
  FUN_100115294(param_1,1,2);
  FUN_100115294(param_1,1,0);
  FUN_100115294(param_1,3,0);
  FUN_100115294(param_1,2,3);
  FUN_100115294(param_1,2,0);
  FUN_100115294(param_1,0,4);
  FUN_100115294(param_1,2,4);
  FUN_100115294(param_1,1,4);
  FUN_100115294(param_1,3,4);
  FUN_100115318(puVar1,0,FUN_100115368,0,0,0,0,0);
  FUN_100115410(puVar1,1,FUN_1001154a0,0,FUN_100115588,0,0,0);
  FUN_100115318(puVar1,2,0,0,0,0,FUN_1001155b0,0);
  FUN_100115318(puVar1,3,0,0,0,0,0,0);
  FUN_1001155c4(puVar1,0,1);
  FUN_1001155c4(puVar1,1,2);
  FUN_1001155c4(puVar1,1,0);
  FUN_1001155c4(puVar1,2,0);
  FUN_1001155c4(puVar1,0,3);
  FUN_1001155c4(puVar1,1,3);
  FUN_1001155c4(puVar1,2,3);
  DAT_101dc75b8 = param_1;
  return param_1;
}




void FUN_100114c70(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + ((ulong)(*(ushort *)(param_1 + 0x1d0) >> 10) & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x48) = FUN_100116a3c;
  *(code **)(lVar1 + 0x50) = FUN_100116a3c;
  *(code **)(lVar1 + 0x58) = FUN_100116a3c;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x1d0) =
       *(ushort *)(param_1 + 0x1d0) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x1d0) & 0x83ff;
  return;
}




void FUN_100114cc0(long param_1)

{
  long lVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x71b9) == '\0') && (*(char *)(param_1 + 0x71bd) == '\0')) &&
     (iVar2 = FUN_1004eef10(), iVar2 != 0)) {
    lVar1 = FUN_1004f0338();
    if (*(int *)(lVar1 + 0x98) == 8) {
      FUN_10015d3ec();
      FUN_10016636c();
      *(undefined1 *)(param_1 + 0x71bd) = 1;
    }
  }
  return;
}




void FUN_100114d18(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_10034d950();
  FUN_1004e949c(*(undefined8 *)(param_1 + 0x358));
  FUN_100116318(param_1);
  FUN_100115be4(param_1 + 0x1d8,0);
  FUN_1001446f4(param_1 + 0x18d0);
  if (*(char *)(param_1 + 0x71b9) == '\0') {
    iVar1 = FUN_100147980();
    if (iVar1 == 0) goto LAB_100114d9c;
    uVar2 = 0;
  }
  else {
    FUN_1010a1854(DAT_10184dd68);
    FUN_10034d950();
    uVar2 = 1;
  }
  FUN_1001478d8();
  FUN_100147834();
  FUN_100147774(uVar2);
LAB_100114d9c:
  *(undefined1 *)(param_1 + 0x71bd) = 0;
  FUN_100129794(param_1 + 0x360);
  return;
}




void FUN_100114db4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    if (*(int *)(lVar2 + 0x98) == 7) {
      uVar3 = 1;
      goto LAB_100114de8;
    }
  }
  uVar3 = FUN_1001148e0();
LAB_100114de8:
  FUN_10034cb64(uVar3,&DAT_101d91650);
  iVar1 = FUN_1000304e0(*(undefined8 *)(param_1 + 0x70f0));
  if (iVar1 != 0) {
    iVar1 = FUN_1004eef10();
    if ((iVar1 == 0) || (lVar2 = FUN_1004f0338(), *(int *)(lVar2 + 0x98) != 0)) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
    FUN_100115ad0(param_1,uVar3);
  }
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    if (*(int *)(lVar2 + 0x98) != 6) {
      lVar2 = FUN_1004f0338();
      if (*(int *)(lVar2 + 0x98) != 7) {
        FUN_100115ad0(param_1,0);
        return;
      }
    }
  }
  return;
}




void FUN_100114e70(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_10052ba84();
  FUN_1000304ec(*(undefined8 *)(param_1 + 0x70f0));
  FUN_100120594();
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    if (*(int *)(lVar2 + 0x98) == 7) {
      uVar3 = 1;
      goto LAB_100114eb4;
    }
  }
  uVar3 = FUN_1001148e0();
LAB_100114eb4:
  FUN_10034cb64(uVar3,&DAT_101d91650);
  return;
}




void FUN_100114ec8(void)

{
  FUN_10015d3ec();
  FUN_100167ce0();
  return;
}




void FUN_100114edc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100144730(param_1 + 0x18d0);
  if (iVar1 != 0) {
    FUN_100115ad0(param_1,3);
    return;
  }
  return;
}




void FUN_100114f1c(long param_1)

{
  int iVar1;
  
  FUN_100144650(param_1 + 0x18d0);
  FUN_100104efc();
  *(undefined1 *)(param_1 + 0x71bb) = 0;
  iVar1 = FUN_100147c10(1);
  if (iVar1 != 0) {
    FUN_100147994();
    return;
  }
  return;
}




void FUN_100114f68(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(ushort)((ushort)param_1[0x74] >> 10) & 0x1f;
  param_1[uVar2 * 0x16 + 4] = param_2;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 6) = param_3;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 8) = param_4;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 10) = param_5;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xc) = param_6;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xe) = param_7;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0x10) = param_8;
  *(code **)(param_1 + uVar2 * 0x16 + 0x12) = FUN_100116a60;
  *(code **)(param_1 + uVar2 * 0x16 + 0x14) = FUN_100116a8c;
  *(code **)(param_1 + uVar2 * 0x16 + 0x16) = FUN_100116acc;
  param_1[uVar2 * 0x16 + 0x18] = 0;
  uVar1 = *param_1;
  if (uVar1 < 0x11) {
    uVar1 = 0x10;
  }
  FUN_100116af8(param_1,uVar1,0);
  *(ushort *)(param_1 + 0x74) =
       (ushort)param_1[0x74] + 0x400 & 0x7c00 | (ushort)param_1[0x74] & 0x83ff;
  return;
}




void FUN_100114ff8(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(char *)(param_1 + 0x71b9) != '\0') && (*(char *)(param_1 + 0x71b8) != '\0')) {
    *(undefined1 *)(param_1 + 0x71b8) = 0;
    FUN_1001478ec();
    FUN_100345584();
    FUN_100147c28(*(undefined4 *)(param_1 + 0x71b0));
    FUN_10034d950();
    plVar2 = (long *)*param_2;
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar3 = 0;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
      }
    }
    FUN_1000335e0(uVar3,0);
    plVar2 = (long *)*param_2;
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar3 = 0;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
      }
    }
    FUN_1000335e0(uVar3,1);
    return;
  }
  uVar5 = (ulong)*(ushort *)(param_1 + 0x350) & 0x1f;
  if ((((int)uVar5 != 0x1f) && (*(int *)(param_1 + uVar5 * 0x58 + 0x1e8) == 2)) ||
     ((iVar1 = FUN_1004eef10(), iVar1 != 0 &&
      (lVar4 = FUN_1004f0338(),
      *(uint *)(lVar4 + 0x98) < 9 && (1 << (ulong)(*(uint *)(lVar4 + 0x98) & 0x1f) & 0x1c1U) != 0)))
     ) {
    plVar2 = (long *)*param_2;
    uVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar2[1]) {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        uVar3 = 0;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
      }
    }
    iVar1 = FUN_100033518(uVar3);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_100115ad0(param_1,0);
  return;
}




void FUN_1001151a0(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  FUN_1004e94b0(*(undefined8 *)(param_1 + 0x358));
  FUN_100115e04(param_1);
  FUN_100116404(param_1,param_2);
  uVar2 = (**(code **)(*(long *)*param_2 + 0x10))();
  FUN_1001297e8(param_1 + 0x360,uVar2);
  FUN_100121cd0();
  iVar1 = FUN_10034cb58();
  if (iVar1 != 0) {
    plVar3 = (long *)*param_2;
    if (plVar3 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar3[1]) {
        (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *param_2 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
      }
    }
    FUN_10003378c(0,0xffffffff);
  }
  uVar2 = FUN_1004e96fc();
  FUN_1004e9514(uVar2,1);
  return;
}




void FUN_100115260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100346810(0x3ff0000000000000);
  FUN_100116578(uVar1,param_2);
  FUN_10015d3ec();
  FUN_100167ce0();
  FUN_10034ccf0();
  return;
}




void FUN_100115294(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x1d0) >> 10) & 0x1f;
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    uVar1 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_2) goto LAB_1001152c8;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar3 != uVar1);
    uVar1 = 0xffffffff;
LAB_1001152c8:
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_3) {
        if ((int)uVar1 == -1) {
          return;
        }
        param_1 = param_1 + (long)(int)uVar1 * 0x58;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar4 & 0x1f);
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar2 != uVar4);
  }
  return;
}




void FUN_100115318(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = param_1 + ((ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f) * 0x58;
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(undefined8 *)(lVar1 + 0x30) = param_6;
  *(undefined8 *)(lVar1 + 0x38) = param_7;
  *(undefined8 *)(lVar1 + 0x40) = param_8;
  *(code **)(lVar1 + 0x48) = FUN_100116a3c;
  *(code **)(lVar1 + 0x50) = FUN_100116a3c;
  *(code **)(lVar1 + 0x58) = FUN_100116a3c;
  *(undefined4 *)(lVar1 + 0x60) = 0;
  *(ushort *)(param_1 + 0x178) =
       *(ushort *)(param_1 + 0x178) + 0x400 & 0x7c00 | *(ushort *)(param_1 + 0x178) & 0x83ff;
  return;
}




void FUN_100115368(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_1004f0338();
  if (*(int *)(lVar3 + 0x98) != 6) {
    lVar3 = FUN_1004f0338();
    if ((*(int *)(lVar3 + 0x98) != 7) && (iVar2 = FUN_1001148e0(), iVar2 == 0)) {
      return;
    }
  }
  lVar3 = FUN_1004f0338();
  if (*(int *)(lVar3 + 0x98) == 7) {
    uVar4 = 1;
  }
  else {
    uVar4 = FUN_1001148e0();
  }
  FUN_10034cb64(uVar4,&DAT_101d91650);
  lVar3 = FUN_1004f0338();
  uVar1 = *(uint *)(lVar3 + 0xc0);
  if (-1 < (char)*(byte *)(lVar3 + 0xcf)) {
    uVar1 = (uint)*(byte *)(lVar3 + 0xcf);
  }
  if (uVar1 != 0) {
    lVar3 = FUN_1004f0338();
    FUN_10034cb90(lVar3 + 0xb8);
  }
  FUN_100115be4(param_1 + 0x1d8,1);
  return;
}




void FUN_100115410(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(ushort)((ushort)param_1[0x5e] >> 10) & 0x1f;
  param_1[uVar2 * 0x16 + 4] = param_2;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 6) = param_3;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 8) = param_4;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 10) = param_5;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xc) = param_6;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0xe) = param_7;
  *(undefined8 *)(param_1 + uVar2 * 0x16 + 0x10) = param_8;
  *(code **)(param_1 + uVar2 * 0x16 + 0x12) = FUN_100116b78;
  *(code **)(param_1 + uVar2 * 0x16 + 0x14) = FUN_100116ba4;
  *(code **)(param_1 + uVar2 * 0x16 + 0x16) = FUN_100116bd4;
  param_1[uVar2 * 0x16 + 0x18] = 0;
  uVar1 = *param_1;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_100116af8(param_1,uVar1,0);
  *(ushort *)(param_1 + 0x5e) =
       (ushort)param_1[0x5e] + 0x400 & 0x7c00 | (ushort)param_1[0x5e] & 0x83ff;
  return;
}




void FUN_1001154a0(long param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  
  lVar2 = FUN_1004f0338();
  if (((*(int *)(lVar2 + 0x98) != 6) && (uVar3 = FUN_1001148e0(), (uVar3 & 1) == 0)) &&
     (lVar2 = FUN_1004f0338(), *(int *)(lVar2 + 0x98) != 7)) {
    FUN_1001478d8();
    FUN_1001478ec();
    FUN_100115be4(param_1 + 0x1d8,0);
    return;
  }
  uVar3 = FUN_1001478b0();
  if ((((uVar3 & 1) == 0) && (uVar3 = FUN_1001478c4(), (uVar3 & 1) == 0)) && (*param_2 == 0.0)) {
    FUN_10014789c();
    *param_2 = 0.5;
  }
  fVar5 = (float)FUN_1010a1ce0();
  fVar5 = *param_2 - fVar5;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *param_2 = fVar5;
  iVar1 = FUN_1004eef10();
  if ((iVar1 == 0) || (lVar2 = FUN_1004f0338(), *(int *)(lVar2 + 0x98) != 7)) {
    uVar4 = FUN_1001148e0();
  }
  else {
    uVar4 = 1;
  }
  FUN_10034cb64(uVar4,&DAT_101d91650);
  iVar1 = FUN_100147980();
  if (iVar1 != 0) {
    FUN_100147924();
    return;
  }
  return;
}




void FUN_100115588(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    FUN_100346650(lVar2 + 0xa0);
    return;
  }
  return;
}




void FUN_1001155b0(void)

{
  FUN_1001478d8();
  FUN_1001478ec();
  return;
}




void FUN_1001155c4(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x178) >> 10) & 0x1f;
  uVar2 = (uint)uVar3;
  if (uVar2 != 0) {
    uVar1 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_2) goto LAB_1001155f8;
      uVar1 = uVar1 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar3 != uVar1);
    uVar1 = 0xffffffff;
LAB_1001155f8:
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x10);
    do {
      if (*piVar5 == param_3) {
        if ((int)uVar1 == -1) {
          return;
        }
        param_1 = param_1 + (long)(int)uVar1 * 0x58;
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (ulong)(uVar4 & 0x1f);
        return;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x16;
    } while (uVar2 != uVar4);
  }
  return;
}




undefined8 * thunk_FUN_100114914(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[0x39] = param_1;
  *(ushort *)(param_1 + 0x3a) = *(ushort *)(param_1 + 0x3a) & 0x8000 | 0x3ff;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  puVar1 = param_1 + 0x3b;
  param_1[0x69] = param_1;
  *(ushort *)(param_1 + 0x6a) = *(ushort *)(param_1 + 0x6a) & 0x8000 | 0x3ff;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3c] = 0;
  *puVar1 = 0;
  param_1[0x6b] = param_2;
  thunk_FUN_10012949c(param_1 + 0x6c);
  thunk_FUN_100144018(param_1 + 0x31a,param_1 + 0x6c);
  thunk_FUN_10015d410(param_1 + 0x34c);
  *(undefined4 *)(param_1 + 0xe36) = 0;
  param_1[0xe1f] = 0;
  param_1[0xe1e] = 0;
  *(undefined4 *)(param_1 + 0xe37) = 0;
  *(undefined2 *)((long)param_1 + 0x71bc) = 1;
  FUN_100114c70(param_1,0,FUN_100114cc0,0,FUN_100114d18,0,0,0);
  FUN_100114c70(param_1,1,FUN_100114db4,0,FUN_100114e70,0,FUN_100114ec8,0);
  FUN_100114c70(param_1,2,FUN_100114edc,0,FUN_100114f1c,0,0,0);
  FUN_100114f68(param_1,3,FUN_100114ff8,0,FUN_1001151a0,0,FUN_100115260,0);
  FUN_100114c70(param_1,4,0,0,0,0,0,0);
  FUN_100115294(param_1,0,2);
  FUN_100115294(param_1,0,1);
  FUN_100115294(param_1,1,2);
  FUN_100115294(param_1,1,0);
  FUN_100115294(param_1,3,0);
  FUN_100115294(param_1,2,3);
  FUN_100115294(param_1,2,0);
  FUN_100115294(param_1,0,4);
  FUN_100115294(param_1,2,4);
  FUN_100115294(param_1,1,4);
  FUN_100115294(param_1,3,4);
  FUN_100115318(puVar1,0,FUN_100115368,0,0,0,0,0);
  FUN_100115410(puVar1,1,FUN_1001154a0,0,FUN_100115588,0,0,0);
  FUN_100115318(puVar1,2,0,0,0,0,FUN_1001155b0,0);
  FUN_100115318(puVar1,3,0,0,0,0,0,0);
  FUN_1001155c4(puVar1,0,1);
  FUN_1001155c4(puVar1,1,2);
  FUN_1001155c4(puVar1,1,0);
  FUN_1001155c4(puVar1,2,0);
  FUN_1001155c4(puVar1,0,3);
  FUN_1001155c4(puVar1,1,3);
  FUN_1001155c4(puVar1,2,3);
  DAT_101dc75b8 = param_1;
  return param_1;
}




void FUN_10011564c(long param_1)

{
  DAT_101dc75b8 = 0;
  thunk_FUN_10015ead0(param_1 + 0x1a60);
  FUN_10011687c(param_1 + 0x18d0);
  *(undefined ***)(param_1 + 0x360) = &PTR_FUN_10145a060;
  *(undefined ***)(param_1 + 0x1440) = &PTR_FUN_10147d238;
  thunk_FUN_100651068(param_1 + 0x1798);
  *(undefined ***)(param_1 + 0x16a8) = &PTR_FUN_1014a7108;
  *(undefined ***)(param_1 + 0x1760) = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1778);
  FUN_10064e2bc(param_1 + 0x16a8);
  *(undefined ***)(param_1 + 0x15b8) = &PTR_FUN_1014a7108;
  *(undefined ***)(param_1 + 0x1670) = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1688);
  FUN_10064e2bc(param_1 + 0x15b8);
  *(undefined ***)(param_1 + 0x14c8) = &PTR_FUN_1014a7108;
  *(undefined ***)(param_1 + 0x1580) = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1598);
  FUN_10064e2bc(param_1 + 0x14c8);
  FUN_10064221c(param_1 + 0x1440);
  thunk_FUN_100534090(param_1 + 0x11c8);
  FUN_1001168e4(param_1 + 0xf28);
  FUN_10064e2bc(param_1 + 0xd88);
  thunk_FUN_10064e2bc(param_1 + 0xcd0);
  thunk_FUN_100119aa4(param_1 + 0x500);
  FUN_10064e2bc(param_1 + 0x360);
  FUN_1001169d8(param_1 + 0x1d8);
  FUN_100116974(param_1);
  return;
}




void thunk_FUN_10011564c(long param_1)

{
  DAT_101dc75b8 = 0;
  thunk_FUN_10015ead0(param_1 + 0x1a60);
  FUN_10011687c(param_1 + 0x18d0);
  *(undefined ***)(param_1 + 0x360) = &PTR_FUN_10145a060;
  *(undefined ***)(param_1 + 0x1440) = &PTR_FUN_10147d238;
  thunk_FUN_100651068(param_1 + 0x1798);
  *(undefined ***)(param_1 + 0x16a8) = &PTR_FUN_1014a7108;
  *(undefined ***)(param_1 + 0x1760) = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1778);
  FUN_10064e2bc(param_1 + 0x16a8);
  *(undefined ***)(param_1 + 0x15b8) = &PTR_FUN_1014a7108;
  *(undefined ***)(param_1 + 0x1670) = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1688);
  FUN_10064e2bc(param_1 + 0x15b8);
  *(undefined ***)(param_1 + 0x14c8) = &PTR_FUN_1014a7108;
  *(undefined ***)(param_1 + 0x1580) = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1598);
  FUN_10064e2bc(param_1 + 0x14c8);
  FUN_10064221c(param_1 + 0x1440);
  thunk_FUN_100534090(param_1 + 0x11c8);
  FUN_1001168e4(param_1 + 0xf28);
  FUN_10064e2bc(param_1 + 0xd88);
  thunk_FUN_10064e2bc(param_1 + 0xcd0);
  thunk_FUN_100119aa4(param_1 + 0x500);
  FUN_10064e2bc(param_1 + 0x360);
  FUN_1001169d8(param_1 + 0x1d8);
  FUN_100116974(param_1);
  return;
}




void FUN_10011584c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60 [2];
  char local_49;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012d198();
  FUN_10034cb4c(0);
  FUN_100346524(0,0);
  FUN_10034d8dc();
  FUN_100147774(0);
  thunk_FUN_1004edbec();
  FUN_10014e1b8();
  FUN_10014e418(FUN_1001148c8);
  FUN_10109c330();
  FUN_100316524();
  FUN_10011a274();
  local_70 = 0;
  uStack_68 = 0;
  local_78 = &local_70;
  FUN_100115798(&local_78);
  FUN_10052beb4(&local_78,0x53fbf);
  operator_new(0x50);
  uVar2 = thunk_FUN_10016b950();
  *(undefined8 *)(param_1 + 0x70f8) = uVar2;
  FUN_100111694();
  FUN_100101b24();
  FUN_100128230();
  FUN_100327c94();
  FUN_10032b9d0();
  FUN_100134030();
  FUN_10032b3d4();
  FUN_1000bdb28();
  FUN_1004731c4();
  FUN_10030c0b8();
  FUN_10030b7f4();
  FUN_10011b974();
  FUN_1000496ac();
  iVar1 = FUN_10052b284();
  if (iVar1 != 0) {
    FUN_10001549c(local_60,PTR_s_CONFIG_CRASH_REPORTING_KEY_APP_I_1018675f0);
    puVar3 = (undefined8 *)FUN_100116d10(&local_78,local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
    if (&local_70 != puVar3) {
      FUN_10001549c(local_60,PTR_s_CONFIG_CRASH_REPORTING_KEY_APP_I_1018675f0);
      lVar4 = FUN_100116d10(&local_78,local_60);
      uVar2 = FUN_10052b19c(lVar4 + 0x38);
      FUN_10052b28c(uVar2,0);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
      FUN_100115aa0(local_60,"%d");
      FUN_10052b290("kindred_revision",local_60);
    }
  }
  uVar2 = FUN_1004e96fc();
  uVar5 = FUN_10031615c(0);
  FUN_1004e9504(uVar2,uVar5);
  FUN_10032516c();
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129a68();
  }
  FUN_100101da0(param_2);
  FUN_10010208c();
  FUN_10010d3e4();
  FUN_1000fe3f0();
  FUN_1001355f8();
  FUN_100125f80();
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    FUN_10010a464();
  }
  FUN_10011bd34();
  FUN_10016fcf0();
  FUN_10033e958();
  FUN_10012951c(param_1 + 0x360);
  FUN_10014e16c();
  FUN_100115ad0(param_1,0);
  FUN_100115be4(param_1 + 0x1d8,0);
  FUN_1001022a0();
  FUN_10010c800(&local_78,local_70);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100115aa0(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,0x10,param_2,&stack0x00000000);
  return;
}




void FUN_100115ad0(int *param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x74);
  if ((uVar2 >> 10 & 0x1f) != 0) {
    uVar3 = 0;
    piVar5 = param_1 + 4;
    do {
      if (*piVar5 == param_2) goto LAB_100115b14;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 0x16;
    } while ((uVar2 >> 10 & 0x1f) != uVar3);
  }
  uVar3 = 0x1f;
LAB_100115b14:
  uVar4 = (ulong)uVar2 & 0x1f;
  if ((uint)uVar4 == 0x1f) {
    uVar2 = uVar2 & 0xfc1f;
  }
  else {
    if (uVar3 == (uint)uVar4) {
      return;
    }
    if (((uint)param_1[uVar4 * 0x16 + 0x18] >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x74) = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar4 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + uVar4 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar4 * 0x16 + 0x10),uVar1);
    uVar2 = *(ushort *)(param_1 + 0x74);
  }
  uVar3 = uVar3 & 0x1f;
  *(ushort *)(param_1 + 0x74) = (ushort)uVar3 | uVar2 & 0xfc00 | 0x3e0;
  if (uVar3 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100115be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar3 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 0xc),uVar1);
  return;
}




void FUN_100115be4(int *param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  if ((uVar2 >> 10 & 0x1f) != 0) {
    uVar3 = 0;
    piVar5 = param_1 + 4;
    do {
      if (*piVar5 == param_2) goto LAB_100115c28;
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 0x16;
    } while ((uVar2 >> 10 & 0x1f) != uVar3);
  }
  uVar3 = 0x1f;
LAB_100115c28:
  uVar4 = (ulong)uVar2 & 0x1f;
  if ((uint)uVar4 == 0x1f) {
    uVar2 = uVar2 & 0xfc1f;
  }
  else {
    if (uVar3 == (uint)uVar4) {
      return;
    }
    if (((uint)param_1[uVar4 * 0x16 + 0x18] >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      return;
    }
    *(ushort *)(param_1 + 0x5e) = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    if (*param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + uVar4 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar4 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + uVar4 * 0x16 + 0x10),uVar1);
    uVar2 = *(ushort *)(param_1 + 0x5e);
  }
  uVar3 = uVar3 & 0x1f;
  *(ushort *)(param_1 + 0x5e) = (ushort)uVar3 | uVar2 & 0xfc00 | 0x3e0;
  if (uVar3 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100115cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar3 * 0x16 + 0x14))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 10),
             *(undefined8 *)(param_1 + (ulong)uVar3 * 0x16 + 0xc),uVar1);
  return;
}




void FUN_100115cf8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  FUN_100115ad0(param_1,4);
  FUN_100115be4(param_1 + 0x1d8,3);
  FUN_10030b828();
  FUN_10030c0f4();
  FUN_1000496d0();
  FUN_100473200();
  FUN_1000bdb64();
  FUN_10033e980();
  FUN_100170868();
  FUN_10011bd58();
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    FUN_10010a4c4();
  }
  FUN_100125f84();
  FUN_1001355fc();
  FUN_1001013a4();
  FUN_10010d40c();
  FUN_100115e04(param_1);
  FUN_100129770(param_1 + 0x360);
  FUN_100101e24();
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129aa0();
  }
  FUN_1003251f0();
  FUN_1010a152c(0);
  uVar2 = FUN_1001478b0();
  if (((uVar2 & 1) != 0) || (iVar1 = FUN_1001478c4(), iVar1 != 0)) {
    FUN_1001478d8();
  }
  FUN_10014e160();
  FUN_10032b424();
  FUN_100134064();
  FUN_10032ba00();
  FUN_100327dcc();
  FUN_100128274();
  FUN_100101b94();
  FUN_1001116b8();
  if (*(long **)(param_1 + 0x70f8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70f8) + 8))();
  }
  *(undefined8 *)(param_1 + 0x70f8) = 0;
  FUN_10052bf7c();
  FUN_100316694();
  FUN_10109c330();
  FUN_10014e418(0);
  FUN_10014e1dc();
  thunk_FUN_1004edc64();
  FUN_100147834();
  FUN_10034dabc();
  FUN_10034661c();
  FUN_10011b9cc();
  return;
}




void FUN_100115e04(long param_1)

{
  FUN_10014e2b8(0);
  if (*(long *)(param_1 + 0x70f0) != 0) {
    FUN_1010a1830();
    *(undefined8 *)(param_1 + 0x70f0) = 0;
  }
  FUN_1010a197c(DAT_10184e398);
  FUN_1010a152c(0);
  FUN_1001491d4(1);
  return;
}




void FUN_100115e50(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x71b9) = 0;
  FUN_10011ca58();
  if (*(long *)(param_1 + 0x70f0) != 0) {
    FUN_100030714();
  }
  iVar1 = FUN_10052ba68();
  if (iVar1 != 0) {
    FUN_10052ba84();
  }
  FUN_10030c13c();
  FUN_10010141c();
  FUN_100101e64();
  FUN_100101e24();
  uVar2 = FUN_1001478b0();
  if (((uVar2 & 1) != 0) || (iVar1 = FUN_1001478c4(), iVar1 != 0)) {
    FUN_1001478d8();
  }
  FUN_10014e160();
  thunk_FUN_1004edcc8();
  FUN_1001478ec();
  FUN_100148f60();
  FUN_10034d950();
  FUN_100128274();
  FUN_10052bf7c();
  return;
}




void FUN_100115ecc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x71b9) = param_2;
  return;
}




void FUN_100115ed8(long param_1)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined1 *local_50 [2];
  char local_39;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_10034d950();
  FUN_10014e16c();
  local_30 = 0;
  uStack_28 = 0;
  local_38 = &local_30;
  FUN_100115798(&local_38);
  FUN_10052beb4(&local_38,0x53fbf);
  FUN_100128230();
  FUN_100126050();
  FUN_100126d98(local_50);
  ppuVar1 = (undefined1 **)local_50[0];
  if (-1 < local_39) {
    ppuVar1 = local_50;
  }
  FUN_1004ebe60(ppuVar1);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_100148a7c(3000);
  FUN_10010206c();
  FUN_100101420();
  FUN_10030c158();
  iVar2 = FUN_10052ba68();
  if (iVar2 != 0) {
    FUN_10052ba84();
  }
  iVar2 = FUN_1000320e8();
  if (iVar2 != 0) {
    FUN_1000320fc();
    iVar2 = FUN_1000334e8();
    if (iVar2 != 0) {
      FUN_100115ad0(param_1,0);
    }
  }
  if (*(long *)(param_1 + 0x70f0) != 0) {
    FUN_100030640();
  }
  FUN_10011ca58();
  FUN_10010c800(&local_38,local_30);
  return;
}




void FUN_100115fc0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x71b4) = param_2;
  return;
}




bool FUN_100115fcc(long param_1)

{
  return *(int *)(param_1 + 0x71b4) != 0;
}




void FUN_100115fe0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  FUN_1001282ac();
  thunk_FUN_1004edcbc();
  FUN_10010d438(param_1);
  FUN_100147924();
  if (*(int *)(param_3 + 0x71b4) == 1) {
    FUN_1001160b4(DAT_101dc75b8,0);
  }
  *(int *)(param_3 + 0x71b4) = 0;
  FUN_10014e250();
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    if (*(uint *)(lVar2 + 0x98) < 2) {
      FUN_1004e949c();
    }
    else {
      FUN_1004e94b0(*(undefined8 *)(param_3 + 0x358));
    }
  }
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    FUN_100129a8c();
  }
  FUN_10010a488();
  FUN_100125fb0(param_2);
  thunk_FUN_10014460c(param_3 + 0x18d0);
  FUN_100116104(param_3);
  FUN_100116148(param_3 + 0x1d8);
  FUN_100160c50(param_3 + 0x1a60);
  FUN_1001116ec();
  return;
}




void FUN_1001160b4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_100116214(param_1,0);
  FUN_1001478d8();
  iVar1 = FUN_1000320e8();
  if (iVar1 != 0) {
    uVar2 = FUN_1000320fc();
    FUN_1000335e0(uVar2,0);
  }
  FUN_100115ad0(param_1,0);
  FUN_10014e240(param_2);
  return;
}




void FUN_100116104(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x74) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100116144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + uVar2 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + uVar2 * 0x16 + 6),
             *(undefined8 *)(param_1 + uVar2 * 0x16 + 8),uVar1);
  return;
}




void FUN_100116148(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x5e) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100116188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + uVar2 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + uVar2 * 0x16 + 6),
             *(undefined8 *)(param_1 + uVar2 * 0x16 + 8),uVar1);
  return;
}




void FUN_10011618c(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_100115be4(param_1 + 0x1d8,2);
  uVar3 = (ulong)*(ushort *)(param_1 + 0x1d0) & 0x1f;
  if (((int)uVar3 != 0x1f) && (*(int *)(param_1 + uVar3 * 0x58 + 0x10) == 0)) {
    if (param_2 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
    FUN_100115ad0(param_1,uVar2);
    return;
  }
  iVar1 = FUN_1000320e8();
  if (iVar1 != 0) {
    uVar2 = FUN_1000320fc();
    FUN_1000335e0(uVar2,1);
    return;
  }
  return;
}




void FUN_100116214(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1000320e8();
  if (iVar1 != 0) {
    FUN_1003467f8();
    uVar2 = FUN_10034cdd0();
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  FUN_1010a14e4(param_2);
  iVar1 = FUN_1000320e8();
  if (iVar1 != 0) {
    FUN_1003467f8();
    uVar2 = FUN_10034cde0();
    if ((uVar2 & 1) == 0) {
      FUN_10012983c(param_1 + 0x360,param_2);
      return;
    }
  }
  return;
}




void FUN_100116278(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_100116214(param_1,0);
  iVar1 = FUN_1000320e8();
  if (iVar1 != 0) {
    uVar2 = FUN_1000320fc();
    FUN_1000335e0(uVar2,0);
  }
  FUN_100115be4(param_1 + 0x1d8,0);
  return;
}




void FUN_1001162b8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    if (*(int *)(lVar2 + 0x98) == 7) {
      uVar3 = 1;
      goto LAB_1001162e4;
    }
  }
  uVar3 = FUN_1001148e0();
LAB_1001162e4:
  FUN_10034cb64(uVar3,&DAT_101d91650);
  return;
}




void FUN_1001162f4(undefined4 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x71b8) = 1;
  *(undefined4 *)(param_2 + 0x71b0) = param_1;
  return;
}




undefined1 FUN_10011630c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71b9);
}




void FUN_100116318(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredManifest*",0);
  if (lVar2 == 0) {
    FUN_1010a14fc(0,"build://Levels/DefinitionManifest.def");
    FUN_1010a15e0("*KindredManifest*",0,0xffffffff,0);
  }
  if (*(long *)(param_1 + 0x70f0) == 0) {
    FUN_100030480();
    uVar1 = FUN_1010a1540(DAT_10184de30,0);
    *(undefined8 *)(param_1 + 0x70f0) = uVar1;
    uVar3 = FUN_100129848(param_1 + 0x360);
    FUN_10002fa74(uVar1,uVar3,*(undefined1 *)(param_1 + 0x71bc));
    *(undefined1 *)(param_1 + 0x71bc) = 0;
  }
  else {
    FUN_10002fe08(*(long *)(param_1 + 0x70f0),0);
  }
  uVar1 = FUN_100640840(0x3f800000,0x3f800000,FUN_10001f160);
  FUN_100642b14(param_1 + 0x360,uVar1);
  FUN_10014e2b8(1);
  FUN_1001491d4(0);
  uVar1 = FUN_1004e96fc();
  FUN_1004e9514(uVar1,0);
  return;
}




void FUN_100116404(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredManifest*",0);
  if (lVar6 == 0) {
    FUN_1010a14fc(0,"build://Levels/DefinitionManifest.def");
    FUN_1010a15e0("*KindredManifest*",0,0xffffffff,0);
  }
  FUN_10034cc6c();
  lVar6 = FUN_1010a1540(DAT_10184de40,0);
  plVar7 = (long *)0x0;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x28);
  }
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar6 != 0) {
    plVar1 = plVar7 + 1;
  }
  lVar2 = *plVar1;
  *param_2 = (long)plVar7;
  *(int *)(param_2 + 1) = (int)lVar2;
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else if ((int)lVar2 == (int)plVar7[1]) {
    uVar5 = (**(code **)(*plVar7 + 0x10))();
  }
  else {
    uVar5 = 0;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
  }
  FUN_100032e68(uVar5,param_1 + 0x18d0);
  plVar7 = (long *)*param_2;
  uVar5 = 0;
  if (plVar7 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar7[1]) {
      uVar5 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      uVar5 = 0;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  uVar8 = (ulong)*(ushort *)(param_1 + 0x350) & 0x1f;
  if ((int)uVar8 == 0x1f) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + uVar8 * 0x58 + 0x1e8) == 2;
  }
  FUN_1000335e0(uVar5,bVar3);
  FUN_1003467f8();
  FUN_100102380();
  iVar4 = FUN_100147c10(1);
  if (iVar4 != 0) {
    FUN_1001479a8();
  }
  FUN_10109c5ac();
  FUN_1001491d4(1);
  return;
}




void FUN_100116578(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_1003467f8();
  FUN_1001023c0();
  plVar2 = (long *)*param_2;
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar3 = 0;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  FUN_100033144(uVar3);
  (**(code **)(*(long *)*param_2 + 0x10))();
  FUN_1010a1830();
  uVar1 = DAT_101dc0b88;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  FUN_1010a197c(DAT_10184e398);
  FUN_1010a152c(0);
  FUN_10109c120();
  FUN_1001491d4(0);
  return;
}




void FUN_10011661c(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_1001e3068();
  if (iVar1 != 0) {
    FUN_1003467f8();
    uVar2 = FUN_10034cdd8();
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDED_TITLE",0);
      uVar4 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDEDNOTENOUGHPLAYERS_MSG",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
      return;
    }
  }
  return;
}




void FUN_1001166a0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1001e3068();
  if (iVar1 != 0) {
    uVar2 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDED_TITLE",0);
    uVar3 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDEDTEAMOVERLOADED_MSG",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
    return;
  }
  return;
}




void FUN_100116718(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_1001e3068();
  if ((iVar1 != 0) && (lVar2 = FUN_1003467f8(), lVar2 != 0)) {
    FUN_1003467f8();
    uVar3 = FUN_10034cdd0();
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDED_TITLE",0);
      uVar5 = FUN_1004e0150("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDEDPLAYERNOTLOCKED_PRIVATE_MSG",0
                           );
      uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
      return;
    }
  }
  return;
}




bool FUN_1001167a4(long param_1)

{
  return *(long *)(param_1 + 0x70f0) != 0;
}




void FUN_1001167b4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  switch((int)param_2) {
  case 5:
    FUN_10011661c();
    return;
  case 6:
    FUN_1001166a0();
    return;
  case 7:
    FUN_100116718();
    return;
  case 8:
    goto switchD_1001167e0_caseD_8;
  default:
    iVar1 = FUN_1000320e8();
    if (iVar1 != 0) {
      FUN_10011eea8(0);
      uVar2 = FUN_1000320fc();
      FUN_10003318c(uVar2,param_1,param_2);
      return;
    }
switchD_1001167e0_caseD_8:
    return;
  }
}




void FUN_100116844(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1000320e8();
  if (iVar1 != 0) {
    uVar2 = FUN_1000320fc();
    FUN_100033970(uVar2,param_1);
    return;
  }
  return;
}




int * FUN_10011687c(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  *(ushort *)(param_1 + 0x5e) = uVar2 | 0x3e0;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0x1f) {
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar3);
  }
  return param_1;
}




void thunk_FUN_1001168e4(void)

{
  FUN_1001168e4();
  return;
}




void FUN_1001168e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001168e4_1014599e8;
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100116960(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001168e4();
  operator_delete(pvVar1);
  return;
}




int * FUN_100116974(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x74);
  *(ushort *)(param_1 + 0x74) = uVar2 | 0x3e0;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0x1f) {
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar3);
  }
  return param_1;
}




int * FUN_1001169d8(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x5e);
  *(ushort *)(param_1 + 0x5e) = uVar2 | 0x3e0;
  uVar1 = uVar2 & 0x1f;
  if (uVar1 != 0x1f) {
    if (*param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
    }
    (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
              (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
               *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar3);
  }
  return param_1;
}




void FUN_100116a3c(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(long *)(param_1 + ((long)param_3 >> 1)) +
                     ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100116a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




void FUN_100116a60(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100116a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_100116a8c(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(param_4 + 1) = DAT_101dc0b88;
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100116ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_100116acc(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100116af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_100116af8(uint *param_1,ulong param_2,undefined1 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_2;
  if (uVar1 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar1) {
      FUN_1000cb364(param_1,param_2);
    }
    uVar2 = (ulong)*param_1;
    if (*param_1 < uVar1) {
      do {
        *(undefined1 *)(*(long *)(param_1 + 2) + uVar2) = param_3;
        uVar2 = uVar2 + 1;
      } while ((param_2 & 0xffffffff) != uVar2);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_100116b78(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100116b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_100116ba4(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  
  *param_4 = 0;
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100116bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_100116bd4(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
    }
                    /* WARNING: Could not recover jumptable at 0x000100116bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




undefined1  [16] FUN_100116c00(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_1000be7f0(param_1,&local_38,param_2);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x60);
    FUN_10003330c((long)pvVar3 + 0x20,param_3);
    FUN_10052b068((long)pvVar3 + 0x38,param_3 + 0x18);
    FUN_10010ca44(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




uint FUN_100116c90(undefined8 *param_1,undefined8 *param_2)

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
    if (uVar8 != 0) goto LAB_100116d00;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_100116d00:
  return uVar8 >> 0x1f;
}




long * FUN_100116d10(long param_1,undefined8 param_2)

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
      iVar2 = FUN_100116c90(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_100116c90(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




void FUN_100116d90(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_100116dbc(void)

{
  if ((DAT_10184de38 & 1) == 0) {
    DAT_10184de30 = DAT_101872e38;
    DAT_10184de38 = 1;
  }
  return;
}




void FUN_100116de8(void)

{
  if ((DAT_10184e3a0 & 1) == 0) {
    DAT_10184e398 = DAT_101872e38;
    DAT_10184e3a0 = 1;
  }
  return;
}




void FUN_100116e14(void)

{
  if ((DAT_10184de48 & 1) == 0) {
    DAT_10184de40 = DAT_101872e38;
    DAT_10184de48 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100116e40(void)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = 0;
  puVar2 = &DAT_101dc7734;
  do {
    lVar3 = 0;
    (&DAT_101dc7734)[lVar1 * 0x1c] = 0xffffffff;
    (&DAT_101dc7738)[lVar1 * 0x70] = 0xff;
    (&DAT_101dc773c)[lVar1 * 0x1c] = 0xff;
    uVar4 = 0;
    uVar5 = 1;
    do {
      if (uVar4 < 10) {
        *(undefined4 *)((long)puVar2 + lVar3 + 0xc) = 0xffff;
      }
      if (uVar5 < 10) {
        *(undefined4 *)((long)puVar2 + lVar3 + 0x10) = 0xffff;
      }
      uVar4 = uVar4 + 2;
      uVar5 = uVar5 + 2;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x28);
    *(undefined8 *)(&DAT_101dc779c + lVar1 * 0x1c) = 0;
    *(undefined8 *)(&DAT_101dc7794 + lVar1 * 0x1c) = 0;
    *(undefined8 *)(&DAT_101dc7790 + lVar1 * 0x1c) = 0;
    *(undefined8 *)(&DAT_101dc7788 + lVar1 * 0x1c) = 0;
    *(undefined8 *)(&DAT_101dc7780 + lVar1 * 0x1c) = 0;
    *(undefined8 *)(&DAT_101dc7778 + lVar1 * 0x1c) = 0;
    *(undefined8 *)(&DAT_101dc7770 + lVar1 * 0x1c) = 0;
    *(undefined8 *)(&DAT_101dc7768 + lVar1 * 0x1c) = 0;
    lVar1 = lVar1 + 1;
    puVar2 = puVar2 + 0x1c;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  do {
    (&DAT_101dc7e34)[lVar1] = 0xff;
    *(undefined8 *)((long)&DAT_101dc7e40 + lVar1) = 0;
    *(undefined8 *)((long)&DAT_101dc7e38 + lVar1) = 0;
    *(undefined8 *)((long)&DAT_101dc7e50 + lVar1) = 0;
    *(undefined8 *)((long)&DAT_101dc7e48 + lVar1) = 0;
    *(undefined8 *)((long)&DAT_101dc7e60 + lVar1) = 0;
    *(undefined8 *)((long)&DAT_101dc7e58 + lVar1) = 0;
    *(undefined8 *)((long)&DAT_101dc7e70 + lVar1) = 0;
    *(undefined8 *)((long)&DAT_101dc7e68 + lVar1) = 0;
    lVar3 = lVar1 + 0x48;
    *(undefined4 *)((long)&DAT_101dc7e78 + lVar1) = 0;
    lVar1 = lVar3;
  } while (lVar3 != 0x480);
  DAT_101dc82b4 = 1;
  _DAT_101dc82b8 = 0xffffffff00000000;
  DAT_101dc82c0 = 0;
  _DAT_101dc82cc = 0;
  _DAT_101dc82c4 = 0;
  uRam0000000101dc82dc = 0;
  _DAT_101dc82d4 = 0;
  uRam0000000101dc82ec = 0;
  _DAT_101dc82e4 = 0;
  uRam0000000101dc82fc = 0;
  _DAT_101dc82f4 = 0;
  uRam0000000101dc830c = 0;
  _DAT_101dc8304 = 0;
  uRam0000000101dc8318 = 0;
  _DAT_101dc8310 = 0;
  uRam0000000101dc8314 = 0;
  return;
}




void thunk_FUN_100116f88(void)

{
  char *****pppppcVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  ulong uVar26;
  int *piVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  char *pcStack_228;
  char ****appppcStack_220 [2];
  char cStack_209;
  char ****appppcStack_208 [2];
  char cStack_1f1;
  char ****appppcStack_1f0 [2];
  char cStack_1d9;
  char ****ppppcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long alStack_130 [16];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = FUN_100119128();
  lVar19 = 0;
  do {
    iVar8 = *(int *)((long)&DAT_101dc7734 + lVar19);
    iVar6 = FUN_10034ee90();
    if (iVar8 == iVar6) {
      piVar27 = (int *)((long)&DAT_101dc7734 + lVar19);
      goto LAB_100117004;
    }
    lVar19 = lVar19 + 0x70;
  } while (lVar19 != 0x700);
  piVar27 = (int *)0x0;
LAB_100117004:
  lVar19 = FUN_100119188();
  if (((lVar11 == 0) || (piVar27 == (int *)0x0)) || (lVar19 == 0)) goto LAB_100118d58;
  puStack_148 = &uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_150 = 0;
  puStack_160 = &uStack_158;
  uStack_158 = 0;
  puVar12 = (undefined8 *)FUN_100465e48(lVar11);
  if (puVar12 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_10032bbf4(*puVar12);
  }
  thunk_FUN_10045cc04(auStack_1c0);
  FUN_1003a2644(auStack_1c0,1);
  FUN_1003c3608(auStack_1c0,1);
  FUN_1003bc030(auStack_1c0,0);
  uVar7 = FUN_1003a6ce4(auStack_1c0,alStack_130,0x10,0);
  fVar29 = (float)FUN_100032228();
  fVar29 = fVar29 * 0.016666668;
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  ppppcStack_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar15,uVar14);
  ppppcStack_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  ppppcStack_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  ppppcStack_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  ppppcStack_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  ppppcStack_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  ppppcStack_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  ppppcStack_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  ppppcStack_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&puStack_148,&ppppcStack_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "support";
    break;
  case 1:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "top";
    break;
  case 3:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "laner";
    break;
  default:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&ppppcStack_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  ppppcStack_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar15,uVar14);
  ppppcStack_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  ppppcStack_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  ppppcStack_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  ppppcStack_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  ppppcStack_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  ppppcStack_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  ppppcStack_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  ppppcStack_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&puStack_160,&ppppcStack_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "support";
    break;
  case 1:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "top";
    break;
  case 3:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "laner";
    break;
  default:
    ppppcStack_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_160,&ppppcStack_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  ppppcStack_1d8 = (char ****)0x0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lVar13 = 0xc;
  do {
    iVar8 = *(int *)((long)piVar27 + lVar13);
    if (iVar8 != 0xffff) {
      uVar14 = FUN_100345b94();
      lVar16 = FUN_10046c858(uVar14,iVar8,PTR_DAT_1018573e8);
      if (lVar16 != 0) {
        uVar24 = (uint)uStack_1d0;
        if (-1 < uStack_1c8) {
          uVar24 = (uint)uStack_1c8._7_1_;
        }
        if (uVar24 != 0) {
          std::string::append((char *)&ppppcStack_1d8);
        }
        std::string::append((char *)&ppppcStack_1d8);
      }
    }
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x34);
  pppppcVar1 = (char *****)ppppcStack_1d8;
  if (-1 < uStack_1c8) {
    pppppcVar1 = &ppppcStack_1d8;
  }
  appppcStack_1f0[0] = (char ****)0x1013db37b;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b124(uVar14,pppppcVar1);
  if ((int)uVar7 < 1) {
    uVar22 = 0;
    uVar24 = 0;
    bVar28 = *(byte *)(piVar27 + 1);
    fVar34 = 0.0;
    fVar36 = 0.0;
    fVar31 = 0.0;
    fVar37 = 0.0;
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    fVar37 = 0.0;
    plVar20 = alStack_130;
    fVar31 = 0.0;
    fVar36 = 0.0;
    uVar26 = (ulong)uVar7;
    fVar34 = 0.0;
    do {
      uVar9 = FUN_100345bbc(*plVar20);
      bVar28 = *(byte *)(piVar27 + 1);
      lVar13 = *(long *)(*plVar20 + 0x40);
      fVar30 = *(float *)(lVar13 + 0xdc) +
               *(float *)(lVar13 + 400) * (*(float *)(lVar13 + 0x2f8) + 1.0);
      if (uVar9 == bVar28) {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar37 = DAT_101dc83c4 + fVar37;
        fVar36 = *(float *)(lVar13 + 0x324) + fVar36;
        uVar24 = uVar24 + 1;
      }
      else {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar31 = DAT_101dc83c4 + fVar31;
        fVar34 = *(float *)(lVar13 + 0x324) + fVar34;
        uVar22 = uVar22 + 1;
      }
      plVar20 = plVar20 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  lVar13 = 0;
  fVar40 = 0.0;
  fVar35 = 0.0;
  fVar30 = 0.0;
  do {
    if ((&DAT_101dc7738)[lVar13] == bVar28) {
      fVar40 = *(float *)((long)&DAT_101dc777c + lVar13) + fVar40;
      fVar35 = *(float *)((long)&DAT_101dc7768 + lVar13) + fVar35;
      fVar30 = *(float *)((long)&DAT_101dc7778 + lVar13) + fVar30;
    }
    lVar13 = lVar13 + 0x70;
  } while (lVar13 != 0x700);
  fVar38 = fVar37 + fVar31;
  fVar33 = 0.0;
  fVar32 = fVar37 / fVar38;
  if (fVar38 <= 0.0) {
    fVar32 = 0.0;
  }
  appppcStack_1f0[0] = (char ****)0x1013db381;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar24);
  appppcStack_1f0[0] = (char ****)0x1013db38b;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar22);
  appppcStack_1f0[0] = (char ****)0x1013dabd6;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar38);
  appppcStack_1f0[0] = (char ****)0x1013db396;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar37);
  appppcStack_1f0[0] = (char ****)0x1013db3a2;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar32);
  appppcStack_1f0[0] = (char ****)0x1013db3b0;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar31);
  appppcStack_1f0[0] = (char ****)0x1013db3bf;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar36);
  appppcStack_1f0[0] = (char ****)0x1013db3c8;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar34);
  fVar40 = fVar40 / fVar36;
  if (fVar36 <= 0.0) {
    fVar40 = 0.0;
  }
  appppcStack_1f0[0] = (char ****)0x1013db3d4;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar40);
  uVar39 = *(undefined4 *)(lVar19 + 0x44);
  appppcStack_1f0[0] = (char ****)0x1013db3e9;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x2c);
  appppcStack_1f0[0] = (char ****)0x1013db3fe;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x30);
  appppcStack_1f0[0] = (char ****)0x1013db419;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 8);
  appppcStack_1f0[0] = (char ****)0x1013db434;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x18);
  appppcStack_1f0[0] = (char ****)0x1013db449;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 4);
  appppcStack_1f0[0] = (char ****)0x1013db45f;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x14);
  appppcStack_1f0[0] = (char ****)0x1013db477;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0xc);
  appppcStack_1f0[0] = (char ****)0x1013db490;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x1c);
  appppcStack_1f0[0] = (char ****)0x1013db4a6;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x20);
  appppcStack_1f0[0] = (char ****)0x1013db4bd;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar39);
  appppcStack_1f0[0] = (char ****)0x1013dabd6;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(fVar38);
  appppcStack_1f0[0] = (char ****)0x1013db396;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(fVar37);
  appppcStack_1f0[0] = (char ****)0x1013db3b0;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(fVar31);
  appppcStack_1f0[0] = (char ****)0x1013db3bf;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(fVar36);
  appppcStack_1f0[0] = (char ****)0x1013db3c8;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(fVar34);
  uVar39 = *(undefined4 *)(lVar19 + 0x44);
  appppcStack_1f0[0] = (char ****)0x1013db3e9;
  uVar14 = FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b17c(uVar14,uVar39);
  lVar13 = FUN_10011920c();
  if (lVar13 == 0) {
    uVar39 = *(undefined4 *)(lVar19 + 0x24);
    appppcStack_1f0[0] = (char ****)0x1013db5ee;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(uVar39);
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x44);
    appppcStack_1f0[0] = (char ****)0x1013db4d9;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b17c(uVar14,uVar39);
    uVar39 = *(undefined4 *)(lVar13 + 0x44);
    appppcStack_1f0[0] = (char ****)0x1013db4d9;
    uVar14 = FUN_100101fac(&puStack_160,appppcStack_1f0);
    FUN_10052b17c(uVar14,uVar39);
    uVar39 = *(undefined4 *)(lVar13 + 0x2c);
    appppcStack_1f0[0] = (char ****)0x1013db4f1;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b17c(uVar14,uVar39);
    uVar39 = *(undefined4 *)(lVar13 + 0x30);
    appppcStack_1f0[0] = (char ****)0x1013db50f;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b17c(uVar14,uVar39);
    fVar31 = *(float *)(lVar19 + 8);
    fVar37 = *(float *)(lVar13 + 8);
    appppcStack_1f0[0] = (char ****)0x1013db52d;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    fVar31 = *(float *)(lVar19 + 0x18);
    fVar37 = *(float *)(lVar13 + 0x18);
    appppcStack_1f0[0] = (char ****)0x1013db546;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    fVar31 = *(float *)(lVar19 + 4);
    fVar37 = *(float *)(lVar13 + 4);
    appppcStack_1f0[0] = (char ****)0x1013db560;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    fVar31 = *(float *)(lVar19 + 0x14);
    fVar37 = *(float *)(lVar13 + 0x14);
    appppcStack_1f0[0] = (char ****)0x1013db57c;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    iVar8 = *(int *)(lVar19 + 0xc);
    iVar6 = *(int *)(lVar13 + 0xc);
    appppcStack_1f0[0] = (char ****)0x1013db599;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b17c(uVar14,iVar8 - iVar6);
    iVar8 = *(int *)(lVar19 + 0x1c);
    iVar6 = *(int *)(lVar13 + 0x1c);
    appppcStack_1f0[0] = (char ****)0x1013db5b3;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b17c(uVar14,iVar8 - iVar6);
    iVar8 = *(int *)(lVar19 + 0x20);
    iVar6 = *(int *)(lVar13 + 0x20);
    appppcStack_1f0[0] = (char ****)0x1013db5ce;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b17c(uVar14,iVar8 - iVar6);
    fVar37 = *(float *)(lVar13 + 0x24);
    fVar40 = *(float *)(lVar19 + 0x24);
    fVar31 = fVar37;
    if (fVar37 <= 0.0) {
      fVar31 = fVar40;
    }
    bVar5 = false;
    bVar3 = true;
    bVar4 = false;
    if (0.0 < fVar40) {
      bVar5 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar37)) {
        bVar5 = fVar37 < 0.0;
        bVar3 = fVar37 == 0.0;
        bVar4 = false;
      }
    }
    fVar37 = (float)NEON_fminnm(fVar37,fVar40);
    if (bVar3 || bVar5 != bVar4) {
      fVar37 = fVar31;
    }
    appppcStack_1f0[0] = (char ****)0x1013db5ee;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar37);
    fVar33 = *(float *)(lVar13 + 0x28);
  }
  fVar37 = *(float *)(lVar19 + 0x28);
  fVar31 = fVar33;
  if (fVar33 <= 0.0) {
    fVar31 = fVar37;
  }
  fVar40 = 0.0;
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar37) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar33)) {
      bVar5 = fVar33 < 0.0;
      bVar3 = fVar33 == 0.0;
      bVar4 = false;
    }
  }
  fVar37 = (float)NEON_fminnm(fVar33,fVar37);
  if (bVar3 || bVar5 != bVar4) {
    fVar37 = fVar31;
  }
  appppcStack_1f0[0] = (char ****)0x1013db608;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar37);
  fVar31 = 0.0;
  if (lVar13 != 0) {
    fVar31 = *(float *)(lVar13 + 0x34);
  }
  fVar32 = *(float *)(lVar19 + 0x34);
  fVar37 = fVar31;
  if (fVar31 <= 0.0) {
    fVar37 = fVar32;
  }
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar32) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar31)) {
      bVar5 = fVar31 < 0.0;
      bVar3 = fVar31 == 0.0;
      bVar4 = false;
    }
  }
  fVar31 = (float)NEON_fminnm(fVar31,fVar32);
  if (bVar3 || bVar5 != bVar4) {
    fVar31 = fVar37;
  }
  appppcStack_1f0[0] = (char ****)0x1013db622;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar31);
  if (lVar13 != 0) {
    fVar40 = *(float *)(lVar13 + 0x38);
  }
  fVar32 = *(float *)(lVar19 + 0x38);
  fVar37 = fVar40;
  if (fVar40 <= 0.0) {
    fVar37 = fVar32;
  }
  fVar33 = 0.0;
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar32) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar40)) {
      bVar5 = fVar40 < 0.0;
      bVar3 = fVar40 == 0.0;
      bVar4 = false;
    }
  }
  fVar40 = (float)NEON_fminnm(fVar40,fVar32);
  if (bVar3 || bVar5 != bVar4) {
    fVar40 = fVar37;
  }
  appppcStack_1f0[0] = (char ****)0x1013db63b;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar40);
  fVar37 = 0.0;
  if (lVar13 != 0) {
    fVar37 = *(float *)(lVar13 + 0x3c);
  }
  fVar38 = *(float *)(lVar19 + 0x3c);
  fVar32 = fVar37;
  if (fVar37 <= 0.0) {
    fVar32 = fVar38;
  }
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar38) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar37)) {
      bVar5 = fVar37 < 0.0;
      bVar3 = fVar37 == 0.0;
      bVar4 = false;
    }
  }
  fVar37 = (float)NEON_fminnm(fVar37,fVar38);
  if (bVar3 || bVar5 != bVar4) {
    fVar37 = fVar32;
  }
  appppcStack_1f0[0] = (char ****)0x1013db658;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar37);
  if (lVar13 != 0) {
    fVar33 = *(float *)(lVar13 + 0x40);
  }
  fVar38 = *(float *)(lVar19 + 0x40);
  fVar32 = fVar33;
  if (fVar33 <= 0.0) {
    fVar32 = fVar38;
  }
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar38) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar33)) {
      bVar5 = fVar33 < 0.0;
      bVar3 = fVar33 == 0.0;
      bVar4 = false;
    }
  }
  fVar33 = (float)NEON_fminnm(fVar33,fVar38);
  if (bVar3 || bVar5 != bVar4) {
    fVar33 = fVar32;
  }
  appppcStack_1f0[0] = (char ****)0x1013db671;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar33);
  appppcStack_1f0[0] = (char ****)0x1013db685;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar40 - fVar31);
  appppcStack_1f0[0] = (char ****)0x1013db6a9;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar37 - fVar40);
  appppcStack_1f0[0] = (char ****)0x1013db6cd;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar33 - fVar37);
  fVar31 = fVar29 - fVar33;
  if (fVar33 <= 0.0) {
    fVar31 = 0.0;
  }
  appppcStack_1f0[0] = (char ****)0x1013db6ee;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar31);
  lVar19 = *(long *)(lVar11 + 0x40);
  uVar14 = NEON_fmov(0x3f800000,4);
  fVar31 = (float)*(undefined8 *)(lVar19 + 0xdc) +
           (float)*(undefined8 *)(lVar19 + 400) *
           ((float)*(undefined8 *)(lVar19 + 0x2f8) + (float)uVar14);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar19 + 0xdc) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar19 + 400) >> 0x20) *
           ((float)((ulong)*(undefined8 *)(lVar19 + 0x2f8) >> 0x20) + (float)((ulong)uVar14 >> 0x20)
           );
  uVar14 = NEON_fminnm(CONCAT44(fVar37 + fVar37 * (float)((ulong)*(undefined8 *)(lVar19 + 0x244) >>
                                                         0x20),
                                fVar31 + fVar31 * (float)*(undefined8 *)(lVar19 + 0x244)),
                       CONCAT44(DAT_101dc8488,DAT_101dc8484),4);
  uVar14 = NEON_fmaxnm(CONCAT44((float)DAT_101dc83c8,DAT_101dc83c4),uVar14,4);
  fVar41 = *(float *)(lVar19 + 0x334);
  fVar32 = *(float *)(lVar19 + 0x324);
  fVar40 = (float)((ulong)uVar14 >> 0x20);
  fVar37 = (float)uVar14;
  fVar33 = fVar37 + fVar40;
  fVar38 = fVar33 + fVar41;
  fVar31 = 0.0;
  if (0.0 < fVar38) {
    fVar31 = (fVar41 + fVar37) / fVar38;
  }
  appppcStack_1f0[0] = (char ****)0x1013d9ac6;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(uVar14);
  appppcStack_1f0[0] = (char ****)0x1013db70f;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar40);
  appppcStack_1f0[0] = (char ****)0x1013d9ac6;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(uVar14);
  appppcStack_1f0[0] = (char ****)0x1013db70f;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(fVar40);
  appppcStack_1f0[0] = (char ****)0x1013db718;
  FUN_100101fac(&puStack_160,appppcStack_1f0);
  FUN_10052b18c(fVar41);
  appppcStack_1f0[0] = (char ****)0x1013db718;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar41);
  appppcStack_1f0[0] = (char ****)0x1013dabe1;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar31);
  appppcStack_1f0[0] = (char ****)0x1013dabea;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar38);
  fVar31 = fVar37 / fVar33;
  if (fVar33 <= 0.0) {
    fVar31 = 0.0;
  }
  appppcStack_1f0[0] = (char ****)0x1013d9abe;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar31);
  appppcStack_1f0[0] = (char ****)0x1013db722;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar33);
  appppcStack_1f0[0] = (char ****)0x1013db72c;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar32);
  fVar31 = -1.0;
  fVar37 = -1.0;
  if ((0.0 < fVar36) && (fVar37 = -1.0, uVar24 != 0)) {
    fVar37 = (fVar32 * (float)uVar24) / fVar36;
  }
  appppcStack_1f0[0] = (char ****)0x1013db731;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar37);
  if ((0.0 < fVar34) && (uVar22 != 0)) {
    fVar31 = (fVar32 * (float)uVar22) / fVar34;
  }
  appppcStack_1f0[0] = (char ****)0x1013db741;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar31);
  fVar34 = (float)piVar27[0x12];
  appppcStack_1f0[0] = (char ****)0x1013db754;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar34 / fVar32);
  iVar8 = piVar27[0xd];
  appppcStack_1f0[0] = (char ****)0x1013db765;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(iVar8);
  fVar36 = 0.0;
  fVar34 = 0.0;
  if (0.0 < fVar35) {
    fVar34 = (float)piVar27[0xd] / fVar35;
  }
  appppcStack_1f0[0] = (char ****)0x1013db776;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar34);
  iVar8 = piVar27[0xe];
  appppcStack_1f0[0] = (char ****)0x1013db790;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(iVar8);
  iVar8 = piVar27[0xf];
  appppcStack_1f0[0] = (char ****)0x1013db7a3;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(iVar8);
  iVar8 = piVar27[0x10];
  appppcStack_1f0[0] = (char ****)0x1013db7b6;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(iVar8);
  if (0.0 < (float)piVar27[0xd]) {
    fVar36 = (float)piVar27[0xe] / (float)piVar27[0xd];
  }
  appppcStack_1f0[0] = (char ****)0x1013db7cb;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar36);
  fVar34 = 0.0;
  fVar36 = 0.0;
  if (0.0 < (float)piVar27[0xd]) {
    fVar36 = (float)piVar27[0xf] / (float)piVar27[0xd];
  }
  appppcStack_1f0[0] = (char ****)0x1013db7e1;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar36);
  if (0.0 < (float)piVar27[0xd]) {
    fVar34 = (float)piVar27[0x10] / (float)piVar27[0xd];
  }
  appppcStack_1f0[0] = (char ****)0x1013db7f7;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar34);
  iVar8 = piVar27[0x11];
  appppcStack_1f0[0] = (char ****)0x1013db80f;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(iVar8);
  fVar34 = 0.0;
  if (0.0 < fVar30) {
    fVar34 = (float)piVar27[0xd] / fVar30;
  }
  appppcStack_1f0[0] = (char ****)0x1013db824;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(fVar34);
  if (0.0 < fVar29) {
    fVar29 = 1.0 / fVar29;
    appppcStack_1f0[0] = (char ****)0x1013db842;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar32 * fVar29);
    fVar34 = (float)piVar27[0xd];
    appppcStack_1f0[0] = (char ****)0x1013db84d;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar34 * fVar29);
    fVar34 = (float)piVar27[0x11];
    appppcStack_1f0[0] = (char ****)0x1013db864;
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar34 * fVar29);
  }
  iVar8 = piVar27[0x13];
  appppcStack_1f0[0] = (char ****)0x1013db87f;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x14];
  appppcStack_1f0[0] = (char ****)0x1013db891;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x15];
  appppcStack_1f0[0] = (char ****)0x1013db8a5;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x16];
  appppcStack_1f0[0] = (char ****)0x1013db8b7;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x17];
  appppcStack_1f0[0] = (char ****)0x1013db8cb;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x18];
  appppcStack_1f0[0] = (char ****)0x1013db8dc;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x19];
  appppcStack_1f0[0] = (char ****)0x1013db8eb;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(iVar8);
  iVar8 = piVar27[0x1a];
  appppcStack_1f0[0] = (char ****)0x1013db8f8;
  FUN_100101fac(&puStack_148,appppcStack_1f0);
  FUN_10052b18c(iVar8);
  switch((char)piVar27[0x1b]) {
  case '\0':
    appppcStack_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    pcVar25 = "unknown";
    break;
  case '\x01':
    appppcStack_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    pcVar25 = "weapon";
    break;
  case '\x02':
    appppcStack_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    pcVar25 = "crystal";
    break;
  case '\x03':
    appppcStack_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    pcVar25 = "support";
    break;
  case '\x04':
    appppcStack_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,appppcStack_1f0);
    pcVar25 = "hybrid";
    break;
  default:
    goto switchD_1001185b0_default;
  }
  FUN_10052b124(uVar14,pcVar25);
switchD_1001185b0_default:
  if (0.0 < DAT_101dc82c8 + DAT_101dc82c4) {
    appppcStack_1f0[0] = (char ****)0x1013db936;
    fVar29 = DAT_101dc82c4 / (DAT_101dc82c8 + DAT_101dc82c4);
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar29);
  }
  if (0.0 < DAT_101dc82d0 + DAT_101dc82cc) {
    appppcStack_1f0[0] = (char ****)0x1013db951;
    fVar29 = DAT_101dc82cc / (DAT_101dc82d0 + DAT_101dc82cc);
    FUN_100101fac(&puStack_148,appppcStack_1f0);
    FUN_10052b18c(fVar29);
  }
  FUN_10003330c(appppcStack_1f0,&DAT_101d91198);
  FUN_10003330c(appppcStack_208,&DAT_101d91198);
  if (0 < (int)uVar7) {
    uVar26 = (ulong)uVar7;
    plVar20 = alStack_130;
    do {
      uVar7 = FUN_100345bbc(*plVar20);
      plVar20 = plVar20 + 1;
      pppppcVar1 = appppcStack_1f0;
      if (uVar7 != *(byte *)(piVar27 + 1)) {
        pppppcVar1 = appppcStack_208;
      }
      std::string::append((char *)pppppcVar1);
      std::string::append((char *)pppppcVar1);
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  pppppcVar1 = (char *****)appppcStack_1f0[0];
  if (-1 < cStack_1d9) {
    pppppcVar1 = appppcStack_1f0;
  }
  appppcStack_220[0] = (char ****)0x1013db96e;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b124(uVar14,pppppcVar1);
  pppppcVar1 = (char *****)appppcStack_208[0];
  if (-1 < cStack_1f1) {
    pppppcVar1 = appppcStack_208;
  }
  appppcStack_220[0] = (char ****)0x1013db97b;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b124(uVar14,pppppcVar1);
  pppppcVar1 = (char *****)appppcStack_1f0[0];
  if (-1 < cStack_1d9) {
    pppppcVar1 = appppcStack_1f0;
  }
  appppcStack_220[0] = (char ****)0x1013db96e;
  uVar14 = FUN_100101fac(&puStack_160,appppcStack_220);
  FUN_10052b124(uVar14,pppppcVar1);
  pppppcVar1 = (char *****)appppcStack_208[0];
  if (-1 < cStack_1f1) {
    pppppcVar1 = appppcStack_208;
  }
  appppcStack_220[0] = (char ****)0x1013db97b;
  uVar14 = FUN_100101fac(&puStack_160,appppcStack_220);
  FUN_10052b124(uVar14,pppppcVar1);
  lVar19 = 0;
  iVar8 = 0;
  iVar23 = 0;
  bVar28 = 0;
  iVar18 = 0;
  iVar6 = 0;
  iVar21 = 0;
  do {
    iVar10 = FUN_10034e19c(*(undefined4 *)((long)&DAT_101dc7734 + lVar19));
    if (iVar10 != 0) {
      iVar8 = iVar8 + 1;
      if ((&DAT_101dc7738)[lVar19] == (char)piVar27[1]) {
        iVar23 = iVar23 + 1;
      }
      else {
        iVar21 = iVar21 + 1;
      }
    }
    lVar11 = FUN_100345d90(*(undefined4 *)((long)&DAT_101dc7734 + lVar19));
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x40);
      fVar29 = *(float *)(lVar11 + 0xdc) +
               *(float *)(lVar11 + 400) * (*(float *)(lVar11 + 0x2f8) + 1.0);
      NEON_fminnm(fVar29 + fVar29 * *(float *)(lVar11 + 0x244),DAT_101dc8484);
      fVar29 = *(float *)(lVar11 + 0xe0) +
               *(float *)(lVar11 + 0x194) * (*(float *)(lVar11 + 0x2fc) + 1.0);
      NEON_fminnm(fVar29 + fVar29 * *(float *)(lVar11 + 0x248),DAT_101dc8488);
      if ((&DAT_101dc7738)[lVar19] == (char)piVar27[1]) {
        if ((DAT_101dc83c4 == 0.0 || 4.0 <= (float)DAT_101dc83c8 / DAT_101dc83c4) &&
           (4.0 <= (float)DAT_101dc83c8)) {
          bVar5 = *(int *)((long)&DAT_101dc7734 + lVar19) == *piVar27;
          if (!bVar5) {
            iVar18 = iVar18 + 1;
          }
          bVar28 = bVar5 | bVar28;
        }
      }
      else {
        iVar6 = iVar6 + (uint)(((float)DAT_101dc83c8 == 0.0 ||
                               5.0 <= DAT_101dc83c4 / (float)DAT_101dc83c8) && 8.0 <= DAT_101dc83c4)
        ;
      }
    }
    lVar19 = lVar19 + 0x70;
  } while (lVar19 != 0x700);
  appppcStack_220[0] = (char ****)0x1013db98b;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b17c(uVar14,iVar8);
  appppcStack_220[0] = (char ****)0x1013db993;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b17c(uVar14,iVar23);
  appppcStack_220[0] = (char ****)0x1013db9a2;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b17c(uVar14,iVar21);
  appppcStack_220[0] = (char ****)0x1013db9b2;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b17c(uVar14,iVar6);
  appppcStack_220[0] = (char ****)0x1013db9c6;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b17c(uVar14,iVar18);
  appppcStack_220[0] = (char ****)0x1013db9d6;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b17c(uVar14,bVar28);
  iVar8 = 0;
  do {
    puVar17 = (undefined4 *)FUN_100315be0(iVar8);
    iVar6 = puVar17[6];
    if (iVar6 == 2) {
      uVar14 = FUN_100316150();
      uVar39 = FUN_100316174(uVar14,*puVar17);
      FUN_100101fac(&puStack_148,puVar17 + 2);
      FUN_10052b18c(uVar39);
    }
    else {
      if (iVar6 == 1) {
        uVar14 = FUN_100316150();
        uVar26 = FUN_100316174(uVar14,*puVar17);
      }
      else {
        if (iVar6 != 0) goto LAB_100118a9c;
        uVar14 = FUN_100316150();
        uVar7 = FUN_100316174(uVar14,*puVar17);
        uVar26 = (ulong)(uVar7 & 1);
      }
      uVar14 = FUN_100101fac(&puStack_148,puVar17 + 2);
      FUN_10052b17c(uVar14,uVar26);
    }
LAB_100118a9c:
    uVar2 = DAT_101dc82c0;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x22);
  appppcStack_220[0] = (char ****)0x1013db9df;
  uVar14 = FUN_100101fac(&puStack_148,appppcStack_220);
  FUN_10052b17c(uVar14,uVar2);
  FUN_10034ee90();
  FUN_10034ee4c();
  puVar12 = (undefined8 *)FUN_1003318a0();
  FUN_10001549c(appppcStack_220,*puVar12);
  pppppcVar1 = (char *****)appppcStack_220[0];
  if (-1 < cStack_209) {
    pppppcVar1 = appppcStack_220;
  }
  pcStack_228 = "SocialPingPackEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pppppcVar1);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,1);
  puVar12 = (undefined8 *)FUN_100331a84();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  pcStack_228 = "HatEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,2);
  puVar12 = (undefined8 *)FUN_100331b6c();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  pcStack_228 = "PlayerTitleEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,3);
  puVar12 = (undefined8 *)FUN_100331c54();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  pcStack_228 = "PlayerAvatarEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,4);
  puVar12 = (undefined8 *)FUN_100331ec4();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  pcStack_228 = "AnnouncerVOPackEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,6);
  puVar12 = (undefined8 *)FUN_10033199c();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  pcStack_228 = "CharmEmojiEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,7);
  puVar12 = (undefined8 *)FUN_100331f50();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  pcStack_228 = "CharmVOLineEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,5);
  puVar12 = (undefined8 *)FUN_100331fdc();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  pcStack_228 = "CharmAnimationEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&pcStack_228);
  FUN_10052b124(uVar14,pcVar25);
  FUN_1001030fc(&puStack_160);
  if (cStack_209 < '\0') {
    operator_delete(appppcStack_220[0]);
  }
  if (cStack_1f1 < '\0') {
    operator_delete(appppcStack_208[0]);
  }
  if (cStack_1d9 < '\0') {
    operator_delete(appppcStack_1f0[0]);
  }
  if (uStack_1c8 < 0) {
    operator_delete(ppppcStack_1d8);
  }
  FUN_10010a220(&puStack_160,uStack_158);
  FUN_10010a220(&puStack_148,uStack_140);
LAB_100118d58:
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100116f88(void)

{
  char *****pppppcVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  ulong uVar26;
  int *piVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  char *local_228;
  char ****local_220 [2];
  char local_209;
  char ****local_208 [2];
  char local_1f1;
  char ****local_1f0 [2];
  char local_1d9;
  char ****local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130 [16];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = FUN_100119128();
  lVar19 = 0;
  do {
    iVar8 = *(int *)((long)&DAT_101dc7734 + lVar19);
    iVar6 = FUN_10034ee90();
    if (iVar8 == iVar6) {
      piVar27 = (int *)((long)&DAT_101dc7734 + lVar19);
      goto LAB_100117004;
    }
    lVar19 = lVar19 + 0x70;
  } while (lVar19 != 0x700);
  piVar27 = (int *)0x0;
LAB_100117004:
  lVar19 = FUN_100119188();
  if (((lVar11 == 0) || (piVar27 == (int *)0x0)) || (lVar19 == 0)) goto LAB_100118d58;
  puStack_148 = &local_140;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  local_160 = &local_158;
  local_158 = 0;
  puVar12 = (undefined8 *)FUN_100465e48(lVar11);
  if (puVar12 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_10032bbf4(*puVar12);
  }
  thunk_FUN_10045cc04(auStack_1c0);
  FUN_1003a2644(auStack_1c0,1);
  FUN_1003c3608(auStack_1c0,1);
  FUN_1003bc030(auStack_1c0,0);
  uVar7 = FUN_1003a6ce4(auStack_1c0,local_130,0x10,0);
  fVar29 = (float)FUN_100032228();
  fVar29 = fVar29 * 0.016666668;
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  local_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar15,uVar14);
  local_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  local_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  local_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  local_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  local_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  local_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "support";
    break;
  case 1:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "top";
    break;
  case 3:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "laner";
    break;
  default:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  local_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar15,uVar14);
  local_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  local_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  local_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  local_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  local_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  local_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "support";
    break;
  case 1:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "top";
    break;
  case 3:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "laner";
    break;
  default:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&local_160,&local_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  local_1d8 = (char ****)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  lVar13 = 0xc;
  do {
    iVar8 = *(int *)((long)piVar27 + lVar13);
    if (iVar8 != 0xffff) {
      uVar14 = FUN_100345b94();
      lVar16 = FUN_10046c858(uVar14,iVar8,PTR_DAT_1018573e8);
      if (lVar16 != 0) {
        uVar24 = (uint)local_1d0;
        if (-1 < local_1c8) {
          uVar24 = (uint)local_1c8._7_1_;
        }
        if (uVar24 != 0) {
          std::string::append((char *)&local_1d8);
        }
        std::string::append((char *)&local_1d8);
      }
    }
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x34);
  pppppcVar1 = (char *****)local_1d8;
  if (-1 < local_1c8) {
    pppppcVar1 = &local_1d8;
  }
  local_1f0[0] = (char ****)0x1013db37b;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b124(uVar14,pppppcVar1);
  if ((int)uVar7 < 1) {
    uVar22 = 0;
    uVar24 = 0;
    bVar28 = *(byte *)(piVar27 + 1);
    fVar34 = 0.0;
    fVar36 = 0.0;
    fVar31 = 0.0;
    fVar37 = 0.0;
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    fVar37 = 0.0;
    plVar20 = local_130;
    fVar31 = 0.0;
    fVar36 = 0.0;
    uVar26 = (ulong)uVar7;
    fVar34 = 0.0;
    do {
      uVar9 = FUN_100345bbc(*plVar20);
      bVar28 = *(byte *)(piVar27 + 1);
      lVar13 = *(long *)(*plVar20 + 0x40);
      fVar30 = *(float *)(lVar13 + 0xdc) +
               *(float *)(lVar13 + 400) * (*(float *)(lVar13 + 0x2f8) + 1.0);
      if (uVar9 == bVar28) {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar37 = DAT_101dc83c4 + fVar37;
        fVar36 = *(float *)(lVar13 + 0x324) + fVar36;
        uVar24 = uVar24 + 1;
      }
      else {
        NEON_fminnm(fVar30 + fVar30 * *(float *)(lVar13 + 0x244),DAT_101dc8484);
        fVar31 = DAT_101dc83c4 + fVar31;
        fVar34 = *(float *)(lVar13 + 0x324) + fVar34;
        uVar22 = uVar22 + 1;
      }
      plVar20 = plVar20 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  lVar13 = 0;
  fVar40 = 0.0;
  fVar35 = 0.0;
  fVar30 = 0.0;
  do {
    if ((&DAT_101dc7738)[lVar13] == bVar28) {
      fVar40 = *(float *)((long)&DAT_101dc777c + lVar13) + fVar40;
      fVar35 = *(float *)((long)&DAT_101dc7768 + lVar13) + fVar35;
      fVar30 = *(float *)((long)&DAT_101dc7778 + lVar13) + fVar30;
    }
    lVar13 = lVar13 + 0x70;
  } while (lVar13 != 0x700);
  fVar38 = fVar37 + fVar31;
  fVar33 = 0.0;
  fVar32 = fVar37 / fVar38;
  if (fVar38 <= 0.0) {
    fVar32 = 0.0;
  }
  local_1f0[0] = (char ****)0x1013db381;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar24);
  local_1f0[0] = (char ****)0x1013db38b;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar22);
  local_1f0[0] = (char ****)0x1013dabd6;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar38);
  local_1f0[0] = (char ****)0x1013db396;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar37);
  local_1f0[0] = (char ****)0x1013db3a2;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar32);
  local_1f0[0] = (char ****)0x1013db3b0;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar31);
  local_1f0[0] = (char ****)0x1013db3bf;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar36);
  local_1f0[0] = (char ****)0x1013db3c8;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar34);
  fVar40 = fVar40 / fVar36;
  if (fVar36 <= 0.0) {
    fVar40 = 0.0;
  }
  local_1f0[0] = (char ****)0x1013db3d4;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar40);
  uVar39 = *(undefined4 *)(lVar19 + 0x44);
  local_1f0[0] = (char ****)0x1013db3e9;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x2c);
  local_1f0[0] = (char ****)0x1013db3fe;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x30);
  local_1f0[0] = (char ****)0x1013db419;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 8);
  local_1f0[0] = (char ****)0x1013db434;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x18);
  local_1f0[0] = (char ****)0x1013db449;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 4);
  local_1f0[0] = (char ****)0x1013db45f;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x14);
  local_1f0[0] = (char ****)0x1013db477;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0xc);
  local_1f0[0] = (char ****)0x1013db490;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x1c);
  local_1f0[0] = (char ****)0x1013db4a6;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar39);
  uVar39 = *(undefined4 *)(lVar19 + 0x20);
  local_1f0[0] = (char ****)0x1013db4bd;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,uVar39);
  local_1f0[0] = (char ****)0x1013dabd6;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(fVar38);
  local_1f0[0] = (char ****)0x1013db396;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(fVar37);
  local_1f0[0] = (char ****)0x1013db3b0;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(fVar31);
  local_1f0[0] = (char ****)0x1013db3bf;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(fVar36);
  local_1f0[0] = (char ****)0x1013db3c8;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(fVar34);
  uVar39 = *(undefined4 *)(lVar19 + 0x44);
  local_1f0[0] = (char ****)0x1013db3e9;
  uVar14 = FUN_100101fac(&local_160,local_1f0);
  FUN_10052b17c(uVar14,uVar39);
  lVar13 = FUN_10011920c();
  if (lVar13 == 0) {
    uVar39 = *(undefined4 *)(lVar19 + 0x24);
    local_1f0[0] = (char ****)0x1013db5ee;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(uVar39);
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x44);
    local_1f0[0] = (char ****)0x1013db4d9;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b17c(uVar14,uVar39);
    uVar39 = *(undefined4 *)(lVar13 + 0x44);
    local_1f0[0] = (char ****)0x1013db4d9;
    uVar14 = FUN_100101fac(&local_160,local_1f0);
    FUN_10052b17c(uVar14,uVar39);
    uVar39 = *(undefined4 *)(lVar13 + 0x2c);
    local_1f0[0] = (char ****)0x1013db4f1;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b17c(uVar14,uVar39);
    uVar39 = *(undefined4 *)(lVar13 + 0x30);
    local_1f0[0] = (char ****)0x1013db50f;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b17c(uVar14,uVar39);
    fVar31 = *(float *)(lVar19 + 8);
    fVar37 = *(float *)(lVar13 + 8);
    local_1f0[0] = (char ****)0x1013db52d;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    fVar31 = *(float *)(lVar19 + 0x18);
    fVar37 = *(float *)(lVar13 + 0x18);
    local_1f0[0] = (char ****)0x1013db546;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    fVar31 = *(float *)(lVar19 + 4);
    fVar37 = *(float *)(lVar13 + 4);
    local_1f0[0] = (char ****)0x1013db560;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    fVar31 = *(float *)(lVar19 + 0x14);
    fVar37 = *(float *)(lVar13 + 0x14);
    local_1f0[0] = (char ****)0x1013db57c;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar31 - fVar37);
    iVar8 = *(int *)(lVar19 + 0xc);
    iVar6 = *(int *)(lVar13 + 0xc);
    local_1f0[0] = (char ****)0x1013db599;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b17c(uVar14,iVar8 - iVar6);
    iVar8 = *(int *)(lVar19 + 0x1c);
    iVar6 = *(int *)(lVar13 + 0x1c);
    local_1f0[0] = (char ****)0x1013db5b3;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b17c(uVar14,iVar8 - iVar6);
    iVar8 = *(int *)(lVar19 + 0x20);
    iVar6 = *(int *)(lVar13 + 0x20);
    local_1f0[0] = (char ****)0x1013db5ce;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b17c(uVar14,iVar8 - iVar6);
    fVar37 = *(float *)(lVar13 + 0x24);
    fVar40 = *(float *)(lVar19 + 0x24);
    fVar31 = fVar37;
    if (fVar37 <= 0.0) {
      fVar31 = fVar40;
    }
    bVar5 = false;
    bVar3 = true;
    bVar4 = false;
    if (0.0 < fVar40) {
      bVar5 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar37)) {
        bVar5 = fVar37 < 0.0;
        bVar3 = fVar37 == 0.0;
        bVar4 = false;
      }
    }
    fVar37 = (float)NEON_fminnm(fVar37,fVar40);
    if (bVar3 || bVar5 != bVar4) {
      fVar37 = fVar31;
    }
    local_1f0[0] = (char ****)0x1013db5ee;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar37);
    fVar33 = *(float *)(lVar13 + 0x28);
  }
  fVar37 = *(float *)(lVar19 + 0x28);
  fVar31 = fVar33;
  if (fVar33 <= 0.0) {
    fVar31 = fVar37;
  }
  fVar40 = 0.0;
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar37) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar33)) {
      bVar5 = fVar33 < 0.0;
      bVar3 = fVar33 == 0.0;
      bVar4 = false;
    }
  }
  fVar37 = (float)NEON_fminnm(fVar33,fVar37);
  if (bVar3 || bVar5 != bVar4) {
    fVar37 = fVar31;
  }
  local_1f0[0] = (char ****)0x1013db608;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar37);
  fVar31 = 0.0;
  if (lVar13 != 0) {
    fVar31 = *(float *)(lVar13 + 0x34);
  }
  fVar32 = *(float *)(lVar19 + 0x34);
  fVar37 = fVar31;
  if (fVar31 <= 0.0) {
    fVar37 = fVar32;
  }
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar32) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar31)) {
      bVar5 = fVar31 < 0.0;
      bVar3 = fVar31 == 0.0;
      bVar4 = false;
    }
  }
  fVar31 = (float)NEON_fminnm(fVar31,fVar32);
  if (bVar3 || bVar5 != bVar4) {
    fVar31 = fVar37;
  }
  local_1f0[0] = (char ****)0x1013db622;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar31);
  if (lVar13 != 0) {
    fVar40 = *(float *)(lVar13 + 0x38);
  }
  fVar32 = *(float *)(lVar19 + 0x38);
  fVar37 = fVar40;
  if (fVar40 <= 0.0) {
    fVar37 = fVar32;
  }
  fVar33 = 0.0;
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar32) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar40)) {
      bVar5 = fVar40 < 0.0;
      bVar3 = fVar40 == 0.0;
      bVar4 = false;
    }
  }
  fVar40 = (float)NEON_fminnm(fVar40,fVar32);
  if (bVar3 || bVar5 != bVar4) {
    fVar40 = fVar37;
  }
  local_1f0[0] = (char ****)0x1013db63b;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar40);
  fVar37 = 0.0;
  if (lVar13 != 0) {
    fVar37 = *(float *)(lVar13 + 0x3c);
  }
  fVar38 = *(float *)(lVar19 + 0x3c);
  fVar32 = fVar37;
  if (fVar37 <= 0.0) {
    fVar32 = fVar38;
  }
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar38) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar37)) {
      bVar5 = fVar37 < 0.0;
      bVar3 = fVar37 == 0.0;
      bVar4 = false;
    }
  }
  fVar37 = (float)NEON_fminnm(fVar37,fVar38);
  if (bVar3 || bVar5 != bVar4) {
    fVar37 = fVar32;
  }
  local_1f0[0] = (char ****)0x1013db658;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar37);
  if (lVar13 != 0) {
    fVar33 = *(float *)(lVar13 + 0x40);
  }
  fVar38 = *(float *)(lVar19 + 0x40);
  fVar32 = fVar33;
  if (fVar33 <= 0.0) {
    fVar32 = fVar38;
  }
  bVar5 = false;
  bVar3 = true;
  bVar4 = false;
  if (0.0 < fVar38) {
    bVar5 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar33)) {
      bVar5 = fVar33 < 0.0;
      bVar3 = fVar33 == 0.0;
      bVar4 = false;
    }
  }
  fVar33 = (float)NEON_fminnm(fVar33,fVar38);
  if (bVar3 || bVar5 != bVar4) {
    fVar33 = fVar32;
  }
  local_1f0[0] = (char ****)0x1013db671;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar33);
  local_1f0[0] = (char ****)0x1013db685;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar40 - fVar31);
  local_1f0[0] = (char ****)0x1013db6a9;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar37 - fVar40);
  local_1f0[0] = (char ****)0x1013db6cd;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar33 - fVar37);
  fVar31 = fVar29 - fVar33;
  if (fVar33 <= 0.0) {
    fVar31 = 0.0;
  }
  local_1f0[0] = (char ****)0x1013db6ee;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar31);
  lVar19 = *(long *)(lVar11 + 0x40);
  uVar14 = NEON_fmov(0x3f800000,4);
  fVar31 = (float)*(undefined8 *)(lVar19 + 0xdc) +
           (float)*(undefined8 *)(lVar19 + 400) *
           ((float)*(undefined8 *)(lVar19 + 0x2f8) + (float)uVar14);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar19 + 0xdc) >> 0x20) +
           (float)((ulong)*(undefined8 *)(lVar19 + 400) >> 0x20) *
           ((float)((ulong)*(undefined8 *)(lVar19 + 0x2f8) >> 0x20) + (float)((ulong)uVar14 >> 0x20)
           );
  uVar14 = NEON_fminnm(CONCAT44(fVar37 + fVar37 * (float)((ulong)*(undefined8 *)(lVar19 + 0x244) >>
                                                         0x20),
                                fVar31 + fVar31 * (float)*(undefined8 *)(lVar19 + 0x244)),
                       CONCAT44(DAT_101dc8488,DAT_101dc8484),4);
  uVar14 = NEON_fmaxnm(CONCAT44((float)DAT_101dc83c8,DAT_101dc83c4),uVar14,4);
  fVar41 = *(float *)(lVar19 + 0x334);
  fVar32 = *(float *)(lVar19 + 0x324);
  fVar40 = (float)((ulong)uVar14 >> 0x20);
  fVar37 = (float)uVar14;
  fVar33 = fVar37 + fVar40;
  fVar38 = fVar33 + fVar41;
  fVar31 = 0.0;
  if (0.0 < fVar38) {
    fVar31 = (fVar41 + fVar37) / fVar38;
  }
  local_1f0[0] = (char ****)0x1013d9ac6;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(uVar14);
  local_1f0[0] = (char ****)0x1013db70f;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar40);
  local_1f0[0] = (char ****)0x1013d9ac6;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(uVar14);
  local_1f0[0] = (char ****)0x1013db70f;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(fVar40);
  local_1f0[0] = (char ****)0x1013db718;
  FUN_100101fac(&local_160,local_1f0);
  FUN_10052b18c(fVar41);
  local_1f0[0] = (char ****)0x1013db718;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar41);
  local_1f0[0] = (char ****)0x1013dabe1;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar31);
  local_1f0[0] = (char ****)0x1013dabea;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar38);
  fVar31 = fVar37 / fVar33;
  if (fVar33 <= 0.0) {
    fVar31 = 0.0;
  }
  local_1f0[0] = (char ****)0x1013d9abe;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar31);
  local_1f0[0] = (char ****)0x1013db722;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar33);
  local_1f0[0] = (char ****)0x1013db72c;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar32);
  fVar31 = -1.0;
  fVar37 = -1.0;
  if ((0.0 < fVar36) && (fVar37 = -1.0, uVar24 != 0)) {
    fVar37 = (fVar32 * (float)uVar24) / fVar36;
  }
  local_1f0[0] = (char ****)0x1013db731;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar37);
  if ((0.0 < fVar34) && (uVar22 != 0)) {
    fVar31 = (fVar32 * (float)uVar22) / fVar34;
  }
  local_1f0[0] = (char ****)0x1013db741;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar31);
  fVar34 = (float)piVar27[0x12];
  local_1f0[0] = (char ****)0x1013db754;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar34 / fVar32);
  iVar8 = piVar27[0xd];
  local_1f0[0] = (char ****)0x1013db765;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(iVar8);
  fVar36 = 0.0;
  fVar34 = 0.0;
  if (0.0 < fVar35) {
    fVar34 = (float)piVar27[0xd] / fVar35;
  }
  local_1f0[0] = (char ****)0x1013db776;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar34);
  iVar8 = piVar27[0xe];
  local_1f0[0] = (char ****)0x1013db790;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(iVar8);
  iVar8 = piVar27[0xf];
  local_1f0[0] = (char ****)0x1013db7a3;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(iVar8);
  iVar8 = piVar27[0x10];
  local_1f0[0] = (char ****)0x1013db7b6;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(iVar8);
  if (0.0 < (float)piVar27[0xd]) {
    fVar36 = (float)piVar27[0xe] / (float)piVar27[0xd];
  }
  local_1f0[0] = (char ****)0x1013db7cb;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar36);
  fVar34 = 0.0;
  fVar36 = 0.0;
  if (0.0 < (float)piVar27[0xd]) {
    fVar36 = (float)piVar27[0xf] / (float)piVar27[0xd];
  }
  local_1f0[0] = (char ****)0x1013db7e1;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar36);
  if (0.0 < (float)piVar27[0xd]) {
    fVar34 = (float)piVar27[0x10] / (float)piVar27[0xd];
  }
  local_1f0[0] = (char ****)0x1013db7f7;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar34);
  iVar8 = piVar27[0x11];
  local_1f0[0] = (char ****)0x1013db80f;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(iVar8);
  fVar34 = 0.0;
  if (0.0 < fVar30) {
    fVar34 = (float)piVar27[0xd] / fVar30;
  }
  local_1f0[0] = (char ****)0x1013db824;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(fVar34);
  if (0.0 < fVar29) {
    fVar29 = 1.0 / fVar29;
    local_1f0[0] = (char ****)0x1013db842;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar32 * fVar29);
    fVar34 = (float)piVar27[0xd];
    local_1f0[0] = (char ****)0x1013db84d;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar34 * fVar29);
    fVar34 = (float)piVar27[0x11];
    local_1f0[0] = (char ****)0x1013db864;
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar34 * fVar29);
  }
  iVar8 = piVar27[0x13];
  local_1f0[0] = (char ****)0x1013db87f;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x14];
  local_1f0[0] = (char ****)0x1013db891;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x15];
  local_1f0[0] = (char ****)0x1013db8a5;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x16];
  local_1f0[0] = (char ****)0x1013db8b7;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x17];
  local_1f0[0] = (char ****)0x1013db8cb;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x18];
  local_1f0[0] = (char ****)0x1013db8dc;
  uVar14 = FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b17c(uVar14,iVar8);
  iVar8 = piVar27[0x19];
  local_1f0[0] = (char ****)0x1013db8eb;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(iVar8);
  iVar8 = piVar27[0x1a];
  local_1f0[0] = (char ****)0x1013db8f8;
  FUN_100101fac(&puStack_148,local_1f0);
  FUN_10052b18c(iVar8);
  switch((char)piVar27[0x1b]) {
  case '\0':
    local_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    pcVar25 = "unknown";
    break;
  case '\x01':
    local_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    pcVar25 = "weapon";
    break;
  case '\x02':
    local_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    pcVar25 = "crystal";
    break;
  case '\x03':
    local_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    pcVar25 = "support";
    break;
  case '\x04':
    local_1f0[0] = (char ****)0x1013db914;
    uVar14 = FUN_100101fac(&puStack_148,local_1f0);
    pcVar25 = "hybrid";
    break;
  default:
    goto switchD_1001185b0_default;
  }
  FUN_10052b124(uVar14,pcVar25);
switchD_1001185b0_default:
  if (0.0 < DAT_101dc82c8 + DAT_101dc82c4) {
    local_1f0[0] = (char ****)0x1013db936;
    fVar29 = DAT_101dc82c4 / (DAT_101dc82c8 + DAT_101dc82c4);
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar29);
  }
  if (0.0 < DAT_101dc82d0 + DAT_101dc82cc) {
    local_1f0[0] = (char ****)0x1013db951;
    fVar29 = DAT_101dc82cc / (DAT_101dc82d0 + DAT_101dc82cc);
    FUN_100101fac(&puStack_148,local_1f0);
    FUN_10052b18c(fVar29);
  }
  FUN_10003330c(local_1f0,&DAT_101d91198);
  FUN_10003330c(local_208,&DAT_101d91198);
  if (0 < (int)uVar7) {
    uVar26 = (ulong)uVar7;
    plVar20 = local_130;
    do {
      uVar7 = FUN_100345bbc(*plVar20);
      plVar20 = plVar20 + 1;
      pppppcVar1 = local_1f0;
      if (uVar7 != *(byte *)(piVar27 + 1)) {
        pppppcVar1 = local_208;
      }
      std::string::append((char *)pppppcVar1);
      std::string::append((char *)pppppcVar1);
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  pppppcVar1 = (char *****)local_1f0[0];
  if (-1 < local_1d9) {
    pppppcVar1 = local_1f0;
  }
  local_220[0] = (char ****)0x1013db96e;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b124(uVar14,pppppcVar1);
  pppppcVar1 = (char *****)local_208[0];
  if (-1 < local_1f1) {
    pppppcVar1 = local_208;
  }
  local_220[0] = (char ****)0x1013db97b;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b124(uVar14,pppppcVar1);
  pppppcVar1 = (char *****)local_1f0[0];
  if (-1 < local_1d9) {
    pppppcVar1 = local_1f0;
  }
  local_220[0] = (char ****)0x1013db96e;
  uVar14 = FUN_100101fac(&local_160,local_220);
  FUN_10052b124(uVar14,pppppcVar1);
  pppppcVar1 = (char *****)local_208[0];
  if (-1 < local_1f1) {
    pppppcVar1 = local_208;
  }
  local_220[0] = (char ****)0x1013db97b;
  uVar14 = FUN_100101fac(&local_160,local_220);
  FUN_10052b124(uVar14,pppppcVar1);
  lVar19 = 0;
  iVar8 = 0;
  iVar23 = 0;
  bVar28 = 0;
  iVar18 = 0;
  iVar6 = 0;
  iVar21 = 0;
  do {
    iVar10 = FUN_10034e19c(*(undefined4 *)((long)&DAT_101dc7734 + lVar19));
    if (iVar10 != 0) {
      iVar8 = iVar8 + 1;
      if ((&DAT_101dc7738)[lVar19] == (char)piVar27[1]) {
        iVar23 = iVar23 + 1;
      }
      else {
        iVar21 = iVar21 + 1;
      }
    }
    lVar11 = FUN_100345d90(*(undefined4 *)((long)&DAT_101dc7734 + lVar19));
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x40);
      fVar29 = *(float *)(lVar11 + 0xdc) +
               *(float *)(lVar11 + 400) * (*(float *)(lVar11 + 0x2f8) + 1.0);
      NEON_fminnm(fVar29 + fVar29 * *(float *)(lVar11 + 0x244),DAT_101dc8484);
      fVar29 = *(float *)(lVar11 + 0xe0) +
               *(float *)(lVar11 + 0x194) * (*(float *)(lVar11 + 0x2fc) + 1.0);
      NEON_fminnm(fVar29 + fVar29 * *(float *)(lVar11 + 0x248),DAT_101dc8488);
      if ((&DAT_101dc7738)[lVar19] == (char)piVar27[1]) {
        if ((DAT_101dc83c4 == 0.0 || 4.0 <= (float)DAT_101dc83c8 / DAT_101dc83c4) &&
           (4.0 <= (float)DAT_101dc83c8)) {
          bVar5 = *(int *)((long)&DAT_101dc7734 + lVar19) == *piVar27;
          if (!bVar5) {
            iVar18 = iVar18 + 1;
          }
          bVar28 = bVar5 | bVar28;
        }
      }
      else {
        iVar6 = iVar6 + (uint)(((float)DAT_101dc83c8 == 0.0 ||
                               5.0 <= DAT_101dc83c4 / (float)DAT_101dc83c8) && 8.0 <= DAT_101dc83c4)
        ;
      }
    }
    lVar19 = lVar19 + 0x70;
  } while (lVar19 != 0x700);
  local_220[0] = (char ****)0x1013db98b;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b17c(uVar14,iVar8);
  local_220[0] = (char ****)0x1013db993;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b17c(uVar14,iVar23);
  local_220[0] = (char ****)0x1013db9a2;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b17c(uVar14,iVar21);
  local_220[0] = (char ****)0x1013db9b2;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b17c(uVar14,iVar6);
  local_220[0] = (char ****)0x1013db9c6;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b17c(uVar14,iVar18);
  local_220[0] = (char ****)0x1013db9d6;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b17c(uVar14,bVar28);
  iVar8 = 0;
  do {
    puVar17 = (undefined4 *)FUN_100315be0(iVar8);
    iVar6 = puVar17[6];
    if (iVar6 == 2) {
      uVar14 = FUN_100316150();
      uVar39 = FUN_100316174(uVar14,*puVar17);
      FUN_100101fac(&puStack_148,puVar17 + 2);
      FUN_10052b18c(uVar39);
    }
    else {
      if (iVar6 == 1) {
        uVar14 = FUN_100316150();
        uVar26 = FUN_100316174(uVar14,*puVar17);
      }
      else {
        if (iVar6 != 0) goto LAB_100118a9c;
        uVar14 = FUN_100316150();
        uVar7 = FUN_100316174(uVar14,*puVar17);
        uVar26 = (ulong)(uVar7 & 1);
      }
      uVar14 = FUN_100101fac(&puStack_148,puVar17 + 2);
      FUN_10052b17c(uVar14,uVar26);
    }
LAB_100118a9c:
    uVar2 = DAT_101dc82c0;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x22);
  local_220[0] = (char ****)0x1013db9df;
  uVar14 = FUN_100101fac(&puStack_148,local_220);
  FUN_10052b17c(uVar14,uVar2);
  FUN_10034ee90();
  FUN_10034ee4c();
  puVar12 = (undefined8 *)FUN_1003318a0();
  FUN_10001549c(local_220,*puVar12);
  pppppcVar1 = (char *****)local_220[0];
  if (-1 < local_209) {
    pppppcVar1 = local_220;
  }
  local_228 = "SocialPingPackEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pppppcVar1);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,1);
  puVar12 = (undefined8 *)FUN_100331a84();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_228 = "HatEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,2);
  puVar12 = (undefined8 *)FUN_100331b6c();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_228 = "PlayerTitleEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,3);
  puVar12 = (undefined8 *)FUN_100331c54();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_228 = "PlayerAvatarEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,4);
  puVar12 = (undefined8 *)FUN_100331ec4();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_228 = "AnnouncerVOPackEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,6);
  puVar12 = (undefined8 *)FUN_10033199c();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_228 = "CharmEmojiEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,7);
  puVar12 = (undefined8 *)FUN_100331f50();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_228 = "CharmVOLineEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pcVar25);
  uVar14 = FUN_10034ee90();
  FUN_10034ede0(uVar14,5);
  puVar12 = (undefined8 *)FUN_100331fdc();
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_228 = "CharmAnimationEquipped";
  uVar14 = FUN_100101fac(&puStack_148,&local_228);
  FUN_10052b124(uVar14,pcVar25);
  FUN_1001030fc(&local_160);
  if (local_209 < '\0') {
    operator_delete(local_220[0]);
  }
  if (local_1f1 < '\0') {
    operator_delete(local_208[0]);
  }
  if (local_1d9 < '\0') {
    operator_delete(local_1f0[0]);
  }
  if (local_1c8 < 0) {
    operator_delete(local_1d8);
  }
  FUN_10010a220(&local_160,local_158);
  FUN_10010a220(&puStack_148,local_140);
LAB_100118d58:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100118da4(undefined4 param_1)

{
  DAT_101dc82bc = param_1;
  return;
}




void FUN_100118db0(undefined1 param_1,undefined4 param_2,undefined1 param_3)

{
  DAT_101dc82b4 = param_1;
  DAT_101dc82b8 = param_2;
  DAT_101dc82c0 = param_3;
  return;
}




void FUN_100118dc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  undefined4 *puVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  
  lVar9 = 0;
  lVar12 = param_1 + 0x300;
  puVar10 = &DAT_101dc7740;
  do {
    uVar4 = *(uint *)(param_1 + lVar9 * 4);
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    if (uVar4 != 0xffffffff) {
      lVar13 = 0;
      (&DAT_101dc7734)[lVar9 * 0x1c] = uVar4;
      lVar1 = param_1 + lVar9;
      (&DAT_101dc7738)[lVar9 * 0x70] = *(undefined1 *)(lVar1 + 0x40);
      (&DAT_101dc773c)[lVar9 * 0x1c] = (uint)*(byte *)(lVar1 + 0x50);
      lVar2 = param_1 + lVar9 * 4;
      uVar4 = (*(uint *)(lVar2 + 0x60) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x60) & 0xff00ff) << 8;
      (&DAT_101dc7768)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0xa0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0xa0) & 0xff00ff) << 8;
      (&DAT_101dc776c)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0xe0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0xe0) & 0xff00ff) << 8;
      (&DAT_101dc7770)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x120) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x120) & 0xff00ff) << 8;
      (&DAT_101dc7774)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x160) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x160) & 0xff00ff) << 8;
      (&DAT_101dc7778)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x1a0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x1a0) & 0xff00ff) << 8;
      lVar3 = param_1 + lVar9 * 2;
      uVar6 = *(ushort *)(lVar3 + 0x1e0);
      (&DAT_101dc777c)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_101dc7780)[lVar9 * 0x1c] = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      uVar6 = *(ushort *)(lVar3 + 0x220);
      (&DAT_101dc7784)[lVar9 * 0x1c] =
           (uint)(*(ushort *)(lVar3 + 0x200) >> 8) | (*(ushort *)(lVar3 + 0x200) & 0xff00ff) << 8;
      (&DAT_101dc7788)[lVar9 * 0x1c] = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      (&DAT_101dc778c)[lVar9 * 0x1c] =
           (uint)(*(ushort *)(lVar3 + 0x240) >> 8) | (*(ushort *)(lVar3 + 0x240) & 0xff00ff) << 8;
      (&DAT_101dc7790)[lVar9 * 0x1c] = (uint)*(byte *)(lVar1 + 0x260);
      uVar4 = (*(uint *)(lVar2 + 0x280) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x280) & 0xff00ff) << 8;
      (&DAT_101dc7794)[lVar9 * 0x1c] = (uint)*(byte *)(lVar1 + 0x270);
      (&DAT_101dc7798)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = (*(uint *)(lVar2 + 0x2c0) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar2 + 0x2c0) & 0xff00ff) << 8;
      (&DAT_101dc779c)[lVar9 * 0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_101dc77a0)[lVar9 * 0x70] = *(undefined1 *)(lVar1 + 0x580);
      do {
        uVar4 = (*(uint *)(lVar12 + lVar13) & 0xff00ff00) >> 8 |
                (*(uint *)(lVar12 + lVar13) & 0xff00ff) << 8;
        *(uint *)((long)puVar10 + lVar13) = uVar4 >> 0x10 | uVar4 << 0x10;
        lVar13 = lVar13 + 4;
      } while (lVar13 != 0x28);
    }
    lVar9 = lVar9 + 1;
    lVar12 = lVar12 + 0x28;
    puVar10 = puVar10 + 0x1c;
  } while (lVar9 != 0x10);
  lVar12 = 0;
  bVar8 = true;
  do {
    bVar11 = bVar8;
    lVar9 = param_1 + lVar12;
    if (*(char *)(lVar9 + 0x62c) != -1) {
      (&DAT_101dc7e34)[lVar12 * 0x48] = *(char *)(lVar9 + 0x62c);
      lVar13 = param_1 + lVar12 * 4;
      uVar4 = (*(uint *)(lVar13 + 0x5dc) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x5dc) & 0xff00ff) << 8;
      uVar7 = (*(uint *)(lVar13 + 0x5e4) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x5e4) & 0xff00ff) << 8;
      (&DAT_101dc7e38)[lVar12 * 0x12] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_101dc7e3c)[lVar12 * 0x12] = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar4 = (*(uint *)(lVar13 + 0x5ec) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x5ec) & 0xff00ff) << 8;
      uVar7 = (*(uint *)(lVar13 + 0x5f4) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x5f4) & 0xff00ff) << 8;
      (&DAT_101dc7e48)[lVar12 * 0x12] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_101dc7e4c)[lVar12 * 0x12] = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar4 = (*(uint *)(lVar13 + 0x5fc) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x5fc) & 0xff00ff) << 8;
      uVar7 = (*(uint *)(lVar13 + 0x604) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x604) & 0xff00ff) << 8;
      (&DAT_101dc7e58)[lVar12 * 0x12] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_101dc7e5c)[lVar12 * 0x12] = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar4 = (*(uint *)(lVar13 + 0x60c) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x60c) & 0xff00ff) << 8;
      uVar7 = (*(uint *)(lVar13 + 0x614) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x614) & 0xff00ff) << 8;
      (&DAT_101dc7e68)[lVar12 * 0x12] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_101dc7e6c)[lVar12 * 0x12] = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar4 = (*(uint *)(lVar13 + 0x61c) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x61c) & 0xff00ff) << 8;
      uVar7 = (*(uint *)(lVar13 + 0x624) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar13 + 0x624) & 0xff00ff) << 8;
      (&DAT_101dc7e70)[lVar12 * 0x12] = uVar4 >> 0x10 | uVar4 << 0x10;
      (&DAT_101dc7e74)[lVar12 * 0x12] = uVar7 >> 0x10 | uVar7 << 0x10;
      bVar5 = *(byte *)(lVar9 + 0x630);
      (&DAT_101dc7e40)[lVar12 * 0x12] = (uint)*(byte *)(lVar9 + 0x62e);
      (&DAT_101dc7e44)[lVar12 * 0x12] = (uint)bVar5;
      bVar5 = *(byte *)(lVar9 + 0x634);
      (&DAT_101dc7e50)[lVar12 * 0x12] = (uint)*(byte *)(lVar9 + 0x632);
      (&DAT_101dc7e54)[lVar12 * 0x12] = (uint)bVar5;
      bVar5 = *(byte *)(lVar9 + 0x638);
      (&DAT_101dc7e60)[lVar12 * 0x12] = (uint)*(byte *)(lVar9 + 0x636);
      (&DAT_101dc7e64)[lVar12 * 0x12] = (uint)bVar5;
      (&DAT_101dc7e78)[lVar12 * 0x12] = (uint)*(byte *)(lVar9 + 0x63a);
    }
    lVar12 = 1;
    bVar8 = false;
  } while (bVar11);
  lVar12 = 0;
  uVar4 = (*(uint *)(param_1 + 0x63c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x63c) & 0xff00ff) << 8;
  DAT_101dc82c8 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (*(uint *)(param_1 + 0x640) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x640) & 0xff00ff) << 8;
  DAT_101dc82c4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (*(uint *)(param_1 + 0x644) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x644) & 0xff00ff) << 8;
  DAT_101dc82d0 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar4 = (*(uint *)(param_1 + 0x648) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x648) & 0xff00ff) << 8;
  DAT_101dc82cc = uVar4 >> 0x10 | uVar4 << 0x10;
  do {
    uVar4 = *(uint *)(param_1 + 0x590 + lVar12);
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    *(uint *)((long)&DAT_101dc82d4 + lVar12) = uVar4 >> 0x10 | uVar4 << 0x10;
    lVar12 = lVar12 + 4;
  } while (lVar12 != 0x4c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_10011903c(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 == 0) {
    fVar2 = -1.0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x40);
    uVar5 = NEON_fmov(0x3f800000,4);
    fVar2 = (float)*(undefined8 *)(lVar1 + 0xdc) +
            (float)*(undefined8 *)(lVar1 + 400) *
            ((float)*(undefined8 *)(lVar1 + 0x2f8) + (float)uVar5);
    fVar3 = (float)((ulong)*(undefined8 *)(lVar1 + 0xdc) >> 0x20) +
            (float)((ulong)*(undefined8 *)(lVar1 + 400) >> 0x20) *
            ((float)((ulong)*(undefined8 *)(lVar1 + 0x2f8) >> 0x20) + (float)((ulong)uVar5 >> 0x20))
    ;
    uVar5 = NEON_fminnm(CONCAT44(fVar3 + fVar3 * (float)((ulong)*(undefined8 *)(lVar1 + 0x244) >>
                                                        0x20),
                                 fVar2 + fVar2 * (float)*(undefined8 *)(lVar1 + 0x244)),
                        _DAT_101dc8484,4);
    uVar5 = NEON_fmaxnm(_DAT_101dc83c4,uVar5,4);
    fVar4 = (float)((ulong)uVar5 >> 0x20);
    fVar3 = (float)uVar5;
    fVar2 = fVar3 / (fVar4 + fVar3);
    if (fVar3 + fVar4 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  return fVar2;
}




undefined4 FUN_1001190c4(void)

{
  long lVar1;
  float fVar2;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 == 0) {
    return 0xbf800000;
  }
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0xdc) + *(float *)(lVar1 + 400) * (*(float *)(lVar1 + 0x2f8) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x244),DAT_101dc8484);
  return DAT_101dc83c4;
}




undefined8 FUN_100119128(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0;
  do {
    iVar1 = *(int *)((long)&DAT_101dc7734 + lVar4);
    iVar2 = FUN_10034ee90();
    if (iVar1 == iVar2) {
      uVar3 = FUN_100345d90(*(undefined4 *)((long)&DAT_101dc7734 + lVar4));
      return uVar3;
    }
    lVar4 = lVar4 + 0x70;
  } while (lVar4 != 0x700);
  return 0;
}




undefined1 * FUN_100119188(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  while (iVar1 = *(int *)((long)&DAT_101dc7734 + lVar4), iVar2 = FUN_10034ee90(), iVar1 != iVar2) {
    lVar4 = lVar4 + 0x70;
    if (lVar4 == 0x700) {
      return (undefined1 *)0x0;
    }
  }
  lVar3 = 0;
  do {
    if ((&DAT_101dc7e34)[lVar3] == (&DAT_101dc7738)[lVar4]) {
      return &DAT_101dc7e34 + lVar3;
    }
    lVar3 = lVar3 + 0x48;
  } while (lVar3 != 0x480);
  return (undefined1 *)0x0;
}




undefined1 * FUN_10011920c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  while (iVar1 = *(int *)((long)&DAT_101dc7734 + lVar4), iVar2 = FUN_10034ee90(), iVar1 != iVar2) {
    lVar4 = lVar4 + 0x70;
    if (lVar4 == 0x700) {
      return (undefined1 *)0x0;
    }
  }
  lVar3 = 0;
  do {
    if ((&DAT_101dc7e34)[lVar3] != (&DAT_101dc7738)[lVar4] && (&DAT_101dc7e34)[lVar3] != -1) {
      return &DAT_101dc7e34 + lVar3;
    }
    lVar3 = lVar3 + 0x48;
  } while (lVar3 != 0x480);
  return (undefined1 *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001192a0(void)

{
  DAT_101dc75c0 = 0xff;
  DAT_101dc75c2 = 0xffff;
  DAT_101dc75c4 = 0xffff;
  DAT_101dc75c6 = 0xffbc9c44;
  DAT_101dc75ca = 0xff1166f2;
  DAT_101dc75ce = 0xffe0e0e0;
  DAT_101dc75d2 = 0xffa0a0a0;
  DAT_101dc75d6 = 0xff8c8c8c;
  DAT_101dc75da = 0xff322213;
  DAT_101dc75de = 0xff091911;
  DAT_101dc75e2 = 0xff170c19;
  DAT_101dc75e6 = 0xff241a14;
  DAT_101dc75ea = 0xff14171c;
  DAT_101dc75ee = 0xff221911;
  DAT_101dc75f2 = 0xff1a1416;
  DAT_101dc75f6 = 0xff121414;
  DAT_101dc75fa = 0xff1a1809;
  DAT_101dc75fe = 0xff141414;
  DAT_101dc7602 = 0xff141414;
  DAT_101dc7606 = 0xff2929c0;
  DAT_101dc760a = 0xff283082;
  DAT_101dc760e = 0xff5262cc;
  DAT_101dc7612 = 0xff283082;
  DAT_101dc7616 = 0xff5262cc;
  DAT_101dc761a = 0xff745c42;
  DAT_101dc761e = 0xff184155;
  DAT_101dc7622 = 0xff92665e;
  DAT_101dc7626 = 0xffbc9c44;
  DAT_101dc762a = 0xffbbae56;
  DAT_101dc762e = 0xff8b7b01;
  DAT_101dc7632 = 0xff90b3ef;
  DAT_101dc7636 = 0xff728ebe;
  DAT_101dc763a = 0xff19459d;
  DAT_101dc763e = 0xff9d877b;
  DAT_101dc7642 = 0xffcbb1a3;
  DAT_101dc7646 = 0xff3f6fb5;
  DAT_101dc764a = 0xffc5c5c5;
  DAT_101dc764e = 0xff4fc1f1;
  DAT_101dc7652 = 0xff606060;
  DAT_101dc7656 = 0xffc5ff7b;
  DAT_101dc765a = 0xff5271eb;
  DAT_101dc765e = 0xfffae076;
  DAT_101dc7662 = 0xff3ac8f6;
  DAT_101dc7666 = 0xffaaaaaa;
  DAT_101dc766a = 0xffe19400;
  DAT_101dc766e = 0xffe19400;
  DAT_101dc7672 = 0xffe550b2;
  DAT_101dc7676 = 0xfff22ae8;
  DAT_101dc767a = 0xff005ae1;
  DAT_101dc767e = 0xff1addfa;
  DAT_101dc7682 = 0xff2424b3;
  DAT_101dc7686 = 0xff2424b3;
  DAT_101dc768a = 0xff646464;
  DAT_101dc768e = 0xff92665e;
  DAT_101dc7692 = 0xff646037;
  DAT_101dc7698 = 0xffffffff;
  DAT_101dc769c = 0xff1111a1;
  DAT_101dc76a0 = 0xff321ee1;
  DAT_101dc76a4 = 0xffc8c8c8;
  DAT_101dc76a8 = 0xff321ee1;
  DAT_101dc76ac = 0xff7fe801;
  DAT_101dc76b0 = 0xffffffff;
  DAT_101dc76b4 = 0xff6259b3;
  DAT_101dc76b8 = 0xff506e73;
  DAT_101dc76bc = 0xff9dbf86;
  DAT_101dc76c0 = 0xffa35244;
  DAT_101dc76c4 = 0xffca828e;
  DAT_101dc76c8 = 0xffa6a6a6;
  DAT_101dc76cc = 0xffa6a6a6;
  DAT_101dc76d0 = 0xffffffff;
  DAT_101dc76d4 = 0xff88ea2f;
  DAT_101dc76d8 = 0xff8c8c8c;
  DAT_101dc76dc = 0xffffb400;
  DAT_101dc76e0 = 0xffff00ff;
  DAT_101dc76e4 = 0xff00aded;
  DAT_101dc76e8 = 0xff33d3ff;
  DAT_101dc76ec = 0xff7fe801;
  DAT_101dc76f0 = 0xff282828;
  DAT_101dc76f4 = 0xfff0f0f0;
  DAT_101dc76f8 = 0xffa4781e;
  DAT_101dc76fc = 0xffa6654b;
  DAT_101dc7700 = 0xff93435b;
  DAT_101dc7704 = 0xff387f9c;
  DAT_101dc7708 = 0xffa3781e;
  DAT_101dc770c = 0xffffd18a;
  DAT_101dc7710 = 0xffff61f7;
  DAT_101dc7714 = 0xff5de1f2;
  DAT_101dc7718 = 0xff80eaff;
  DAT_101dc771c = 0xff32e00e;
  DAT_101dc7720 = 0xff5a3c10;
  DAT_101dc7724 = 0xff330b03;
  DAT_101dc7728 = 0xff33031d;
  DAT_101dc772c = 0xff032433;
  DAT_101dc7730 = 0xff9e8e8d;
  uRam0000000101dc83e8 = 0x7f7fffff7f7fffff;
  _DAT_101dc83e0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc83f8 = 0x7f7fffff7f7fffff;
  _DAT_101dc83f0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc8408 = 0x7f7fffff7f7fffff;
  _DAT_101dc8400 = 0x7f7fffff7f7fffff;
  uRam0000000101dc8418 = 0x7f7fffff7f7fffff;
  _DAT_101dc8410 = 0x7f7fffff7f7fffff;
  DAT_101dc8420 = 0x7f7fffff;
  DAT_101dc8424 = 0x7f7fffff;
  DAT_101dc8428 = 0x7f7fffff;
  DAT_101dc842c = 0x3f800000;
  uRam0000000101dc8438 = 0x7f7fffff7f7fffff;
  _DAT_101dc8430 = 0x7f7fffff7f7fffff;
  DAT_101dc8440 = 0x7f7fffff;
  DAT_101dc8444 = 0x3eb33333;
  uRam0000000101dc8450 = 0x7f7fffff7f7fffff;
  _DAT_101dc8448 = 0x7f7fffff7f7fffff;
  uRam0000000101dc8460 = 0x7f7fffff7f7fffff;
  _DAT_101dc8458 = 0x7f7fffff7f7fffff;
  uRam0000000101dc8470 = 0x7f7fffff7f7fffff;
  _DAT_101dc8468 = 0x7f7fffff7f7fffff;
  uRam0000000101dc8480 = 0x7f7fffff7f7fffff;
  _DAT_101dc8478 = 0x7f7fffff7f7fffff;
  DAT_101dc8488 = 0x7f7fffff;
  DAT_101dc848c = 0x7f7fffff;
  DAT_101dc8490 = 0x7f7fffff;
  uRam0000000101dc8328 = 0xff7fffffff7fffff;
  _DAT_101dc8320 = 0xff7fffffff7fffff;
  DAT_101dc8330 = 0;
  DAT_101dc8338 = 0;
  uRam0000000101dc8344 = 0xff7fffffff7fffff;
  _DAT_101dc833c = 0xff7fffffff7fffff;
  DAT_101dc834c = 0xff7fffff;
  DAT_101dc8350 = 0xff7fffff;
  DAT_101dc8354 = NEON_fmov(0xbf800000,4);
  DAT_101dc835c = 0x3f000000;
  DAT_101dc8360 = 0;
  DAT_101dc8368 = 0;
  uRam0000000101dc8378 = 0xff7fffffff7fffff;
  _DAT_101dc8370 = 0xff7fffffff7fffff;
  uRam0000000101dc8388 = 0xff7fffffff7fffff;
  _DAT_101dc8380 = 0xff7fffffff7fffff;
  uRam0000000101dc8398 = 0xff7fffffff7fffff;
  _DAT_101dc8390 = 0xff7fffffff7fffff;
  uRam0000000101dc83a8 = 0xbf800000bf800000;
  _DAT_101dc83a0 = 0xbf80000000000000;
  DAT_101dc83b0 = 0xbf800000;
  DAT_101dc83b4 = 0xff7fffff;
  DAT_101dc83b8 = 0xff7fffff;
  DAT_101dc83bc = 0xff7fffff;
  DAT_101dc83c0 = 0;
  DAT_101dc83c4 = 0xff7fffff;
  DAT_101dc83c8 = 0;
  DAT_101dc83d0 = 0;
  return;
}




long FUN_100119a20(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100119aa4_101459b30;
  thunk_FUN_100655064(puVar1 + 0x17);
  FUN_10064e264(param_1 + 0x370);
  FUN_10064e264(param_1 + 0x428);
  FUN_10064e264(param_1 + 0x4e0);
  FUN_10064e264(param_1 + 0x598);
  FUN_10064e264(param_1 + 0x650);
  FUN_10064e264(param_1 + 0x708);
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  FUN_100654920(puVar1 + 0x17,0);
  return param_1;
}




long thunk_FUN_100119a20(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100119aa4_101459b30;
  thunk_FUN_100655064(puVar1 + 0x17);
  FUN_10064e264(param_1 + 0x370);
  FUN_10064e264(param_1 + 0x428);
  FUN_10064e264(param_1 + 0x4e0);
  FUN_10064e264(param_1 + 0x598);
  FUN_10064e264(param_1 + 0x650);
  FUN_10064e264(param_1 + 0x708);
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  FUN_100654920(puVar1 + 0x17,0);
  return param_1;
}




void FUN_100119aa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_100119aa4_101459b30;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  thunk_FUN_10064e2bc(param_1 + 0xe1);
  thunk_FUN_10064e2bc(param_1 + 0xca);
  thunk_FUN_10064e2bc(param_1 + 0xb3);
  thunk_FUN_10064e2bc(param_1 + 0x9c);
  thunk_FUN_10064e2bc(param_1 + 0x85);
  thunk_FUN_10064e2bc(param_1 + 0x6e);
  puVar1 = param_1 + 0x17;
  *puVar1 = &PTR_FUN_1014a7c78;
  param_1[0x4b] = &PTR_FUN_1014a7df8;
  FUN_100661118(param_1 + 0x6b);
  *puVar1 = &PTR_FUN_1014a7ab8;
  param_1[0x4b] = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 0x54);
  FUN_1010b7434(param_1 + 0x4e);
  FUN_10064e2bc(puVar1);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100119aa4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_100119aa4_101459b30;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  thunk_FUN_10064e2bc(param_1 + 0xe1);
  thunk_FUN_10064e2bc(param_1 + 0xca);
  thunk_FUN_10064e2bc(param_1 + 0xb3);
  thunk_FUN_10064e2bc(param_1 + 0x9c);
  thunk_FUN_10064e2bc(param_1 + 0x85);
  thunk_FUN_10064e2bc(param_1 + 0x6e);
  puVar1 = param_1 + 0x17;
  *puVar1 = &PTR_FUN_1014a7c78;
  param_1[0x4b] = &PTR_FUN_1014a7df8;
  FUN_100661118(param_1 + 0x6b);
  *puVar1 = &PTR_FUN_1014a7ab8;
  param_1[0x4b] = &PTR_FUN_1014a7c30;
  FUN_1010b7434(param_1 + 0x54);
  FUN_1010b7434(param_1 + 0x4e);
  FUN_10064e2bc(puVar1);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100119b60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100119aa4();
  operator_delete(pvVar1);
  return;
}




void FUN_100119b74(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  
  lVar4 = FUN_1004e8338(2);
  param_1[0xf9] = lVar4;
  plVar1 = param_1 + 0x17;
  param_1[0x48] = (long)FUN_100119e04;
  param_1[0x49] = (long)param_1;
  FUN_100654488(plVar1,1);
  uVar2 = FUN_1004d2524("ingame-effects");
  uVar3 = FUN_100015208("ingame-effects",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x3f4) =
       *(uint *)((long)param_1 + 0x3f4) & 0x80000000 |
       *(uint *)((long)param_1 + 0x3f4) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar2 = FUN_1004d2524("ingame-actor-effects");
  uVar3 = FUN_100015208("ingame-actor-effects",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x6d4) =
       *(uint *)((long)param_1 + 0x6d4) & 0x80000000 |
       *(uint *)((long)param_1 + 0x6d4) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar2 = FUN_1004d2524("ingame-ui");
  uVar3 = FUN_100015208("ingame-ui",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x78c) =
       *(uint *)((long)param_1 + 0x78c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x78c) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar2 = FUN_1004d2524("plaques-player");
  uVar3 = FUN_100015208("plaques-player",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x4ac) =
       *(uint *)((long)param_1 + 0x4ac) & 0x80000000 |
       *(uint *)((long)param_1 + 0x4ac) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar2 = FUN_1004d2524("plaques-hero");
  uVar3 = FUN_100015208("plaques-hero",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x564) =
       *(uint *)((long)param_1 + 0x564) & 0x80000000 |
       *(uint *)((long)param_1 + 0x564) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar2 = FUN_1004d2524("plaques-all");
  uVar3 = FUN_100015208("plaques-all",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x61c) =
       *(uint *)((long)param_1 + 0x61c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x61c) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x6e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xb3,1);
  FUN_100642bd8(param_1 + 0xb3,param_1 + 0x9c,1);
  FUN_100642bd8(param_1 + 0x9c,param_1 + 0x85,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xca,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe1,1);
  plVar5 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar5 + 0x58))(plVar5,plVar1);
  FUN_10064e524(param_1,plVar5);
  plVar5 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1 + 0xe1);
  FUN_10064e524(plVar1,plVar5);
  FUN_10016ada0(param_2,plVar5);
  FUN_10064142c(&uStack_64,&local_68);
  FUN_10064e47c(uStack_64,local_68,param_1);
  return;
}




void FUN_100119e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100119eb4(param_3,param_1,param_2);
  return;
}




void FUN_100119e18(undefined8 param_1,long param_2)

{
  FUN_100654920(param_2 + 0xb8,1);
  FUN_1006550dc(param_1,param_2 + 0xb8);
  return;
}




void FUN_100119e54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x7c0) = param_2;
  uVar1 = FUN_100033428(param_2);
  FUN_10002e634(uVar1,param_1);
  FUN_100125fb4(param_1);
  return;
}




void FUN_100119e88(long param_1)

{
  FUN_100125fc8();
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  return;
}




void FUN_100119eac(long param_1)

{
  FUN_10064e3cc(param_1 + 0x708);
  return;
}




void FUN_100119eb4(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1178 [144];
  undefined1 auStack_10e8 [144];
  undefined1 auStack_1058 [4096];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(long *)(param_1 + 0x7c0) == 0) {
    uVar2 = (**(code **)(*param_3 + 0x138))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x140))(param_3);
    FUN_1010b3974(auStack_1058,uVar2,uVar3);
    FUN_1010b3af8(0,0,0,0x3f800000,auStack_1058);
    FUN_1010b3b18(0x3f800000,auStack_1058);
    FUN_1010b36cc(param_2,auStack_1058,1);
  }
  else {
    FUN_100033428();
    uVar2 = FUN_10002e51c();
    iVar1 = FUN_10016b6b8();
    if (iVar1 != 0) {
      FUN_10016b6cc(param_2,uVar2);
    }
    uVar2 = FUN_1010a1bc8(auStack_1058,0x200,1,uVar2);
    uVar3 = FUN_1010b0058(0);
    uVar4 = (**(code **)(*param_3 + 0x138))(param_3);
    FUN_100033428(*(undefined8 *)(param_1 + 0x7c0));
    uVar5 = FUN_10002e62c();
    FUN_1010b24ac(auStack_10e8,"Draw all scene entities",auStack_1058,uVar2,uVar3,uVar4,uVar5,1);
    FUN_1010b3af8(0,0,0,0x3f800000,auStack_10e8);
    FUN_1010b3b18(0x3f800000,auStack_10e8);
    FUN_1010b3b2c(auStack_10e8,thunk_FUN_100142cfc);
    FUN_1010b36cc(param_2,auStack_10e8,0);
    FUN_100033428(*(undefined8 *)(param_1 + 0x7c0));
    uVar2 = FUN_10002e51c();
    uVar2 = FUN_1010a1bc8(auStack_1058,0x200,2,uVar2);
    uVar3 = FUN_1010b0058(0);
    uVar4 = (**(code **)(*param_3 + 0x138))(param_3);
    FUN_100033428(*(undefined8 *)(param_1 + 0x7c0));
    uVar5 = FUN_10002e62c();
    FUN_1010b24ac(auStack_1178,"Draw all particle effects",auStack_1058,uVar2,uVar3,uVar4,uVar5,0);
    FUN_1010b36cc(param_2,auStack_1178,0);
    FUN_1010b2508(auStack_1178);
    FUN_1010b2508(auStack_10e8);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011a108(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  float local_28;
  float local_24;
  
  local_28 = -1.0;
  local_24 = -1.0;
  if (param_3 == 0) {
    FUN_10064142c(&local_24,&local_28);
  }
  else {
    FUN_10064140c();
  }
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  FUN_10002eb28(uVar1,param_1,param_2,(int)local_24,(int)local_28);
  return;
}




void FUN_10011a174(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  float local_28;
  float local_24;
  
  local_28 = -1.0;
  local_24 = -1.0;
  if (param_3 == 0) {
    FUN_10064142c(&local_24,&local_28);
  }
  else {
    FUN_10064140c();
  }
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  FUN_10002ec1c(uVar1,param_1,param_2,(int)local_24,(int)local_28);
  return;
}




float FUN_10011a1e0(float *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_1000320fc();
  FUN_100033428();
  lVar1 = FUN_10002e54c();
  fVar2 = *param_1 - *(float *)(lVar1 + 0x30);
  fVar3 = (float)*(undefined8 *)(param_1 + 1) - (float)*(undefined8 *)(lVar1 + 0x34);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(lVar1 + 0x34) >> 0x20);
  return SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
}




undefined8 * FUN_10011a234(undefined8 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_10011a274(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10109c728(0x491e0a9c);
  *(undefined1 *)(lVar1 + 0x38) = 1;
  FUN_10109cca8(lVar1,0,FUN_10011aa94);
  FUN_10109cb44(lVar1,&DAT_101d23250);
  FUN_10109cb44(lVar1,&DAT_101d23264);
  lVar1 = FUN_10109c728(0xad730ef5);
  *(undefined1 *)(lVar1 + 0x38) = 1;
  FUN_10109cca8(lVar1,0,FUN_10011aa94);
  lVar2 = FUN_10109c728(0x99901bde);
  *(undefined1 *)(lVar2 + 0x38) = 1;
  FUN_10109cca8(lVar2,0,FUN_10011aa94);
  lVar1 = 0;
  do {
    FUN_10109cb44(lVar2,&DAT_101d23278 + lVar1);
    lVar1 = lVar1 + 0x14;
  } while (lVar1 != 100);
  return;
}




void FUN_10011a340(void)

{
  DAT_101d230d4 = 0;
  DAT_101d230d0 = 0;
  return;
}




undefined8 FUN_10011a354(void)

{
  return 0;
}




undefined8 * FUN_10011a35c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint local_44;
  
  puVar2 = param_1 + 2;
  param_1[3] = 0;
  *puVar2 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_100026bb4(param_1,0x2a);
  FUN_10011a430(puVar2,0x2a);
  lVar3 = 0;
  lVar4 = 0;
  uVar1 = 0;
  do {
    local_44 = *(uint *)(param_2 + lVar3);
    if (local_44 < uVar1) {
      if (0x29 < (uint)lVar4) {
        return param_1;
      }
      do {
        FUN_10011a52c(param_1,param_2 + lVar3,param_2 + lVar3 + 4);
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0x150);
      return param_1;
    }
    FUN_1000228fc(param_1,&local_44);
    FUN_10011a4ac(puVar2,param_2 + lVar3 + 4);
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 8;
    uVar1 = local_44;
  } while (lVar4 != 0x2a);
  return param_1;
}




void FUN_10011a430(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10011a4ac(uint *param_1,undefined4 *param_2)

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
    FUN_10011a430(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_10011a52c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint local_34;
  
  local_34 = *param_2;
  lVar3 = *(long *)(param_1 + 2);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar2 * (ulong)local_34 >> 0x20;
    if (0 < (int)((ulong)uVar2 * (ulong)local_34 >> 0x20)) {
      do {
        if (*(uint *)(lVar3 + uVar6 * 4) <= local_34) goto LAB_10011a584;
        iVar4 = (int)uVar6;
        uVar5 = iVar4 - 1;
        uVar6 = (ulong)uVar5;
      } while (uVar5 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_10011a584:
    uVar5 = (uint)uVar6;
    if ((int)(uint)uVar6 < (int)uVar2) {
      do {
        uVar5 = (uint)uVar6;
        if (local_34 <= *(uint *)(lVar3 + uVar6 * 4)) break;
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        uVar5 = uVar2;
      } while (uVar2 != uVar1);
    }
  }
  FUN_10011a5f4(param_1,lVar3 + (long)(int)uVar5 * 4,&local_34,&stack0xffffffffffffffd0);
  FUN_10011a814(param_1 + 4,*(long *)(param_1 + 6) + (long)(int)uVar5 * 4,param_3,param_3 + 4);
  return;
}




undefined4 *
FUN_10011a5f4(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar8 = *(undefined4 **)(param_1 + 2);
    uVar9 = (long)param_2 - (long)puVar8;
    uVar1 = *param_1;
    uVar11 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar4 = (uint)(uVar12 >> 2);
    if (uVar2 - uVar1 < uVar4) {
      uVar1 = uVar1 + uVar4;
      uVar4 = 0;
      if (uVar2 != 0xffffffff) {
        uVar4 = uVar2 + (~uVar2 | 0xfffffff0) + 0x11;
      }
      if (uVar2 < 0x20) {
        uVar4 = uVar2 << 1;
      }
      uVar2 = uVar1;
      if (uVar1 <= uVar4) {
        uVar2 = uVar4;
      }
      puVar3 = operator_new__((ulong)uVar2 << 2);
      puVar7 = puVar3;
      for (puVar5 = puVar8; puVar5 != param_2; puVar5 = puVar5 + 1) {
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
      }
      uVar10 = uVar9 >> 2 & 0xffffffff;
      _memcpy(puVar3 + (uVar9 >> 2 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffffc);
      uVar11 = (long)puVar8 + (uVar11 * 4 - (long)param_2);
      if (uVar11 != 0) {
        _memcpy((void *)((long)puVar3 + (uVar12 & 0x3fffffffc) + uVar10 * 4),param_2,
                uVar11 & 0xfffffffffffffffc);
      }
      if (puVar8 != (undefined4 *)0x0) {
        operator_delete__(puVar8);
      }
      *(undefined4 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      puVar8 = puVar3;
    }
    else {
      puVar5 = puVar8 + uVar11;
      uVar10 = (ulong)((long)puVar5 - (long)param_2) >> 2;
      if (uVar4 < (uint)uVar10) {
        uVar12 = uVar12 >> 2 & 0xffffffff;
        if (uVar12 != 0) {
          lVar6 = 0;
          do {
            *(undefined4 *)((long)puVar5 + lVar6) =
                 *(undefined4 *)((long)puVar5 + lVar6 + uVar12 * -4);
            lVar6 = lVar6 + 4;
          } while (lVar6 != uVar12 * 4);
          uVar11 = (ulong)*param_1;
        }
        puVar5 = puVar8 + (uVar11 - uVar12);
        lVar6 = (long)puVar5 - (long)param_2;
        if (lVar6 != 0) {
          do {
            puVar5 = puVar5 + -1;
            *(undefined4 *)((long)param_2 + lVar6 + uVar12 * 4 + -4) = *puVar5;
            lVar6 = lVar6 + -4;
          } while (lVar6 != 0);
        }
        do {
          puVar5 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar5;
        } while (puVar5 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar7 = param_2;
          do {
            puVar7[uVar12 >> 2 & 0xffffffff] = *puVar7;
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar5);
          uVar11 = (ulong)*param_1;
        }
        uVar12 = (ulong)((long)puVar5 - (long)param_2) >> 2 & 0xffffffff;
        if (param_3 + (uVar10 & 0xffffffff) != param_4) {
          puVar5 = param_3 + (uVar10 & 0xffffffff);
          puVar7 = puVar8 + uVar11;
          do {
            puVar3 = puVar5 + 1;
            *puVar7 = *puVar5;
            puVar5 = puVar3;
            puVar7 = puVar7 + 1;
          } while (puVar3 != param_4);
        }
        if (uVar12 != 0) {
          lVar6 = uVar12 << 2;
          do {
            *param_2 = *param_3;
            lVar6 = lVar6 + -4;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar6 != 0);
        }
      }
      *param_1 = *param_1 + uVar4;
      uVar10 = uVar9 >> 2 & 0xffffffff;
    }
    param_2 = puVar8 + uVar10;
  }
  return param_2;
}




undefined4 *
FUN_10011a814(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined4 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar4 = (uint)(uVar12 >> 2);
    if (uVar2 - uVar1 < uVar4) {
      uVar1 = uVar1 + uVar4;
      uVar4 = 0;
      if (uVar2 != 0xffffffff) {
        uVar4 = uVar2 + (~uVar2 | 0xfffffff0) + 0x11;
      }
      if (uVar2 < 0x20) {
        uVar4 = uVar2 << 1;
      }
      uVar2 = uVar1;
      if (uVar1 <= uVar4) {
        uVar2 = uVar4;
      }
      puVar3 = operator_new__((ulong)uVar2 << 2);
      puVar7 = puVar3;
      for (puVar5 = puVar9; puVar5 != param_2; puVar5 = puVar5 + 1) {
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
      }
      uVar11 = uVar10 >> 2 & 0xffffffff;
      _memcpy(puVar3 + (uVar10 >> 2 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffffc);
      uVar6 = (long)puVar9 + (uVar6 * 4 - (long)param_2);
      if (uVar6 != 0) {
        _memcpy((void *)((long)puVar3 + (uVar12 & 0x3fffffffc) + uVar11 * 4),param_2,
                uVar6 & 0xfffffffffffffffc);
      }
      if (puVar9 != (undefined4 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined4 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      puVar9 = puVar3;
    }
    else {
      puVar5 = puVar9 + uVar6;
      uVar11 = (ulong)((long)puVar5 - (long)param_2) >> 2;
      if (uVar4 < (uint)uVar11) {
        uVar11 = uVar12 >> 2 & 0xffffffff;
        if (uVar11 != 0) {
          lVar8 = 0;
          do {
            *(undefined4 *)((long)puVar5 + lVar8) =
                 *(undefined4 *)((long)puVar5 + lVar8 + uVar11 * -4);
            lVar8 = lVar8 + 4;
          } while (lVar8 != uVar11 * 4);
        }
        lVar8 = (long)puVar5 + ((uVar12 >> 2 & 0xffffffff) * -4 - (long)param_2);
        if (lVar8 != 0) {
          puVar5 = puVar9 + (uVar6 - uVar11);
          do {
            puVar5 = puVar5 + -1;
            *(undefined4 *)((long)param_2 + lVar8 + uVar11 * 4 + -4) = *puVar5;
            lVar8 = lVar8 + -4;
          } while (lVar8 != 0);
        }
        do {
          puVar5 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar5;
        } while (puVar5 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar7 = param_2;
          do {
            puVar7[uVar12 >> 2 & 0xffffffff] = *puVar7;
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar5);
        }
        uVar6 = (ulong)((long)puVar5 - (long)param_2) >> 2 & 0xffffffff;
        for (puVar7 = param_3 + (uVar11 & 0xffffffff); puVar7 != param_4; puVar7 = puVar7 + 1) {
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
        }
        if (uVar6 != 0) {
          lVar8 = uVar6 << 2;
          do {
            *param_2 = *param_3;
            lVar8 = lVar8 + -4;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      *param_1 = uVar1 + uVar4;
      uVar11 = uVar10 >> 2 & 0xffffffff;
    }
    param_2 = puVar9 + uVar11;
  }
  return param_2;
}




long FUN_10011aa24(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2;
    uVar6 = uVar5 >> 0x20;
    if (0 < (int)(uVar5 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar6 * 4) <= uVar2) goto LAB_10011aa5c;
        iVar4 = (int)uVar6;
        uVar3 = iVar4 - 1;
        uVar6 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
      uVar6 = 0;
    }
LAB_10011aa5c:
    uVar5 = uVar6;
    if ((int)uVar6 < (int)uVar1) {
      do {
        uVar5 = uVar6;
        if (uVar2 <= *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4)) break;
        uVar3 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar3;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != uVar3);
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 4;
}




void FUN_10011aa94(void)

{
  uint *puVar1;
  ulong uVar2;
  
  puVar1 = (uint *)FUN_10011aa24(&DAT_101d23230);
  uVar2 = (ulong)(*puVar1 >> 3);
  *(byte *)((long)&DAT_101d230d0 + uVar2) =
       *(byte *)((long)&DAT_101d230d0 + uVar2) | (byte)(1 << ((ulong)*puVar1 & 7));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011aad8(void)

{
  long lVar1;
  
  DAT_101d230d4 = 0;
  DAT_101d230d0 = 0;
  uRam0000000101d230e8 = 0x118892094;
  _DAT_101d230e0 = 0xea5cfda4;
  uRam0000000101d230f8 = 0x31a8923ba;
  _DAT_101d230f0 = 0x21b89254d;
  uRam0000000101d23108 = 0x5d75787f1;
  _DAT_101d23100 = 0x4d4578338;
  uRam0000000101d23118 = 0x7fadd36db;
  _DAT_101d23110 = 0x6d657865e;
  uRam0000000101d23128 = 0x9fcdd3a01;
  _DAT_101d23120 = 0x8fbdd386e;
  uRam0000000101d23138 = 0xbd7c6c33b;
  _DAT_101d23130 = 0xae75c0dcc;
  uRam0000000101d23148 = 0xd8e9a2bfe;
  _DAT_101d23140 = 0xc77e8ff20;
  uRam0000000101d23158 = 0xeac3dcb88;
  _DAT_101d23150 = 0xff8464f5f;
  uRam0000000101d23168 = 0x280b97a396;
  _DAT_101d23160 = 0x2968e0d9db;
  uRam0000000101d23178 = 0x25343b3119;
  _DAT_101d23170 = 0x24ad772661;
  uRam0000000101d23188 = 0x101f60987c;
  _DAT_101d23180 = 0x2648ad620a;
  uRam0000000101d23198 = 0x1221609ba2;
  _DAT_101d23190 = 0x1122609d35;
  uRam0000000101d231a8 = 0x141b609230;
  _DAT_101d231a0 = 0x131c6093c3;
  uRam0000000101d231b8 = 0x16d681c332;
  _DAT_101d231b0 = 0x151e6096e9;
  uRam0000000101d231c8 = 0x18d481c00c;
  _DAT_101d231c0 = 0x17d581c19f;
  uRam0000000101d231d8 = 0x1ad281bce6;
  _DAT_101d231d0 = 0x19d381be79;
  uRam0000000101d231e8 = 0x1c7369679b;
  _DAT_101d231e0 = 0x1bd181bb53;
  uRam0000000101d231f8 = 0x1ed114f869;
  _DAT_101d231f0 = 0x1d1b1b94e4;
  uRam0000000101d23208 = 0x20dd5af3dd;
  _DAT_101d23200 = 0x1fa8ed198a;
  uRam0000000101d23218 = 0x22624c3211;
  _DAT_101d23210 = 0x21415e691c;
  uRam0000000101d23228 = 0x2a07c82b66;
  _DAT_101d23220 = 0x23e080f732;
  FUN_10011a35c(&DAT_101d23230);
  ___cxa_atexit(FUN_10011a234,&DAT_101d23230,0x100000000);
  lVar1 = FUN_10109c8bc(&DAT_101d23250,0xea5cfda4,0,0x3d,0,0);
  FUN_10109c904(lVar1 + 0x14,0xea5cfda4,0,1);
  FUN_10109c8bc(&DAT_101d23278,0xdd5af3dd,0,4,4,0);
  FUN_10109c8bc(&DAT_101d2328c,0x415e691c,0,3,4,0);
  FUN_10109c8bc(&DAT_101d232a0,0x624c3211,0,0x12,4,0);
  FUN_10109c8bc(&DAT_101d232b4,0xe080f732,0,5,4,0);
  FUN_10109c8bc(&DAT_101d232c8,0x7c82b66,0,0x11,1,0);
  return;
}




void * FUN_10011ace4(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x90);
  puVar2 = (undefined8 *)FUN_1004e941c();
  *puVar2 = &PTR_thunk_FUN_1004e9440_101459c78;
  *(undefined2 *)(puVar2 + 3) = 0;
  puVar2[5] = 0;
  thunk_FUN_1010a0ee0(puVar2 + 6);
  *(undefined8 *)((long)pvVar1 + 0x81) = 0;
  *(undefined8 *)((long)pvVar1 + 0x79) = 0;
  *(undefined8 *)((long)pvVar1 + 0x68) = 0;
  *(undefined8 *)((long)pvVar1 + 0x60) = 0;
  *(undefined8 *)((long)pvVar1 + 0x78) = 0;
  *(undefined8 *)((long)pvVar1 + 0x70) = 0;
  return pvVar1;
}




void FUN_10011ad3c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e9440();
  operator_delete(pvVar1);
  return;
}




void FUN_10011ad50(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 **local_48 [2];
  char local_31;
  
  FUN_100658aec(0);
  FUN_1004dfda4();
  uVar2 = FUN_1004e2f20(&DAT_101d911b0);
  if (7 < uVar2) {
    uVar2 = 8;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  FUN_1004e4ad0(uVar2,0x80,0);
  FUN_1004e6874(0x19000);
  FUN_1004e97e8();
  FUN_1004e9474(param_1);
  FUN_1004e94b0(param_1);
  FUN_1004e9544(param_1,0xc);
  FUN_10011aee4();
  FUN_100125ff4();
  FUN_100126d98(local_48);
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_1004ebe2c(pppuVar1);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10011b094();
  FUN_1004e80dc();
  uVar3 = FUN_1004e8338(3);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  uVar3 = FUN_1004e8338(4);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = FUN_1004e8338(1);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  uVar3 = FUN_1004e8338(2);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  FUN_1004e8218();
  FUN_1010a1bb8(0,thunk_FUN_1003454ac);
  FUN_1010a1bb8(1,thunk_FUN_1003454ac);
  FUN_1010a1bb8(2,thunk_FUN_1003454ac);
  FUN_1010a1bb8(3,thunk_FUN_1003454ac);
  FUN_1010a1bb8(4,thunk_FUN_1003454ac);
  FUN_10034c80c();
  FUN_10011b0f4();
  FUN_100315f80();
  FUN_10063ee94(*(undefined8 *)(param_1 + 0x68));
  FUN_10065b560();
  FUN_10030d7cc();
  FUN_10011b1f0(param_1);
  uVar3 = FUN_100127064();
  FUN_1004e946c(param_1,uVar3);
  FUN_10011b2b4(param_1,param_2);
  FUN_10011b2ec(param_1);
  return;
}




void FUN_10011b094(void)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_10063eda0(0);
  FUN_10109bdc0();
  FUN_1005542f0(0x800000,1,FUN_10011b8e0);
  iVar1 = FUN_1003467dc();
  uVar2 = FUN_1003467dc();
  FUN_10054d4d4(iVar1 + 0xa00000,FUN_10011b93c,1,uVar2);
  FUN_10054d38c();
  return;
}




void FUN_10011b0f4(void)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 local_40;
  undefined8 **local_38 [2];
  char local_21;
  
  iVar2 = FUN_100126d70();
  if (iVar2 - 1U < 0x10) {
    pcVar5 = (&PTR_s_localization_de_strings_101459cc8)[(int)(iVar2 - 1U)];
  }
  else {
    pcVar5 = "english.strings";
  }
  FUN_10001549c(local_38,"build://Localization/");
  std::string::append((char *)local_38);
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_1006581d8(pppuVar1,local_38);
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  uVar3 = FUN_100658c88(pppuVar1,1);
  if ((int)uVar3 != -1) {
    local_40 = 0;
    uVar4 = FUN_100658cc4(uVar3,&local_40);
    FUN_1004dfe44("default",local_40,uVar4,pcVar5,1);
    FUN_100658cd8(uVar3,local_40);
    FUN_100658c9c(uVar3);
  }
  FUN_1004e0140("default");
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10011b1f0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_28;
  
  iVar1 = FUN_10012709c();
  uVar2 = 0x45233000;
  if (iVar1 != 1) {
    uVar2 = 0x44c00000;
  }
  FUN_100641420(*(undefined4 *)(&DAT_10114d538 + (ulong)(iVar1 == 1) * 4),uVar2);
  FUN_100127038();
  FUN_1004e9534(param_1);
  FUN_1004e9524(param_1,"Vainglory");
  FUN_1010b48b0();
  FUN_1010b494c();
  FUN_1004e94c4(param_1);
  FUN_1010b48b0();
  FUN_1010b494c();
  FUN_1004e94f4(param_1,0x400,0x300,1);
  local_28 = 0;
  FUN_1004e94e4(param_1,(long)&local_28 + 4,&local_28,1);
  uVar2 = NEON_ucvtf(local_28._4_4_);
  uVar3 = NEON_ucvtf((undefined4)local_28);
  FUN_10011b6fc(uVar2,uVar3);
  return;
}




void FUN_10011b2b4(long param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x71c0);
  uVar2 = thunk_FUN_100114914(pvVar1,param_1);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  FUN_10011584c(uVar2,param_2);
  return;
}




void FUN_10011b2ec(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  if (((DAT_10184e3b0 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_10184e3b0), iVar3 != 0)) {
    DAT_10184e3ac = _getpid();
    ___cxa_guard_release(&DAT_10184e3b0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x10184e3a8,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_10184e3a8 = DAT_10184e3a8 + 1;
    }
  } while (cVar1 != '\0');
  FUN_1004d2698(auStack_a8,"/s-%d-%d");
  uVar4 = _sem_open(auStack_a8,0x200);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _sem_unlink(auStack_a8);
  FUN_1004e9564(param_1);
  FUN_1004e44e8(param_1 + 0x20,FUN_10011b804,param_1,4);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10011b3fc(long param_1)

{
  void *pvVar1;
  
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_10011b478(param_1);
  }
  FUN_100115cf8(*(undefined8 *)(param_1 + 0x80));
  if (*(long *)(param_1 + 0x80) != 0) {
    pvVar1 = (void *)thunk_FUN_10011564c();
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1004ebec0();
  FUN_10031610c();
  FUN_10012642c();
  FUN_10030d810();
  FUN_10034c8a0();
  FUN_1004e826c();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_1004e816c();
  FUN_1004e9820();
  thunk_FUN_1004e68ac();
  FUN_1004e4b5c();
  FUN_1004dfdec(0);
  return;
}




void FUN_10011b478(long param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x18) = 0;
  _sem_post(*(undefined8 *)(param_1 + 0x28));
  FUN_1004e46a0(param_1 + 0x20);
  FUN_1004e9554(param_1);
  iVar1 = _sem_close(*(undefined8 *)(param_1 + 0x28));
  *(long *)(param_1 + 0x28) = (long)iVar1;
  FUN_1010a1d24();
  FUN_1010b2fa4();
  return;
}




void FUN_10011b4c4(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    FUN_10011b478(param_1);
  }
  FUN_10063ee94(*(undefined8 *)(param_1 + 0x68));
  FUN_10065b5a4();
  FUN_1004e948c(param_1);
  FUN_100115e50(*(undefined8 *)(param_1 + 0x80));
  FUN_1010b48a4();
  FUN_1010b48a8();
  FUN_10052c234();
  return;
}




void FUN_10011b514(long param_1)

{
  FUN_10052c258();
  FUN_1010b48ac();
  FUN_10109c330();
  FUN_100115ed8(*(undefined8 *)(param_1 + 0x80));
  FUN_10011b2ec(param_1);
  FUN_1004e9474(param_1);
  return;
}




void FUN_10011b550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10011c0c8(param_2,param_3);
  return;
}




void FUN_10011b55c(long param_1)

{
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_10011b584();
  }
  else {
    _sem_post(*(undefined8 *)(param_1 + 0x28));
  }
  FUN_1004e986c();
  return;
}




void FUN_10011b584(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_48;
  
  uVar3 = thunk_FUN_1010b2ecc(*(undefined8 *)(param_1 + 0x70));
  FUN_10109ba54();
  lVar1 = param_1 + 0x30;
  FUN_100346804();
  FUN_1010a1014(lVar1);
  FUN_1010a0f50(lVar1);
  dVar5 = (double)FUN_1010a0fbc(lVar1);
  dVar6 = (double)FUN_1010a0fc4(lVar1);
  FUN_1010a0fcc(lVar1);
  iVar2 = FUN_10011f120();
  fVar8 = (float)dVar5;
  if (iVar2 != 0) {
    FUN_10011f12c(fVar8);
  }
  FUN_10052c05c();
  FUN_10011a340();
  FUN_10109c26c();
  FUN_10109c270();
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_1 + 0x88) = 0;
    local_48 = 0;
    FUN_1004e94e4(param_1,(long)&local_48 + 4,&local_48,1);
    uVar4 = NEON_ucvtf(local_48._4_4_);
    uVar7 = NEON_ucvtf((undefined4)local_48);
    FUN_10011b6fc(uVar4,uVar7);
  }
  fVar9 = (float)dVar6;
  FUN_100641374(fVar9);
  FUN_100115fe0(fVar9,fVar8,*(undefined8 *)(param_1 + 0x80));
  FUN_1010a1cf0();
  FUN_1010a1a40(fVar9,fVar8);
  FUN_10065f3f0();
  FUN_10054d674(fVar8);
  FUN_1010a1b78();
  FUN_10065f3f4(uVar3);
  FUN_100641614(uVar3);
  FUN_1010a43cc();
  FUN_1010b0008(fVar8);
  FUN_1010a8814(fVar8);
  FUN_10052c27c(fVar9);
  FUN_1004e94c4(param_1);
  FUN_1010a1b88();
  FUN_1010b48b0();
  FUN_1010b2e8c(uVar3);
  FUN_1010a0fcc(lVar1);
  FUN_1010b494c();
  return;
}




void FUN_10011b6e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010011b6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_10011b6f0(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}




void FUN_10011b6fc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_80 [16];
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  fVar2 = (float)param_1;
  if ((fVar2 != 0.0) && (fVar4 = (float)param_2, fVar4 != 0.0)) {
    FUN_1006413a4(param_1,param_2);
    FUN_10016ac70(auStack_80);
    fVar3 = (float)DAT_101873a38 - (local_68 + local_70);
    fVar5 = DAT_101873a38._4_4_ - (fStack_64 + fStack_6c);
    iVar1 = FUN_10012709c();
    fVar6 = 2611.0;
    if (iVar1 != 1) {
      fVar6 = 1536.0;
    }
    fVar7 = *(float *)(&DAT_10114d538 + (ulong)(iVar1 == 1) * 4);
    fVar8 = fVar7 / fVar6;
    fVar5 = (fVar3 * fVar2) / (fVar5 * fVar4);
    fVar3 = (fVar8 * fVar6) / fVar5;
    if (fVar8 <= fVar5) {
      fVar3 = fVar6;
      fVar7 = (fVar5 * fVar7) / fVar8;
    }
    fVar7 = fVar7 / ((float)DAT_101873a38 - (local_68 + local_70));
    fVar3 = fVar3 / (DAT_101873a38._4_4_ - (fStack_64 + fStack_6c));
    FUN_100641420(fVar7,fVar3);
    FUN_100641484(fVar2 / fVar7,fVar4 / fVar3);
  }
  return;
}




undefined8 FUN_10011b804(undefined8 param_1)

{
  FUN_1004e47c8("GameKindred");
  FUN_1010a1d24();
  FUN_1010b2fa4();
  FUN_10011b840(param_1);
  return 0;
}




void FUN_10011b840(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_28 [8];
  
  FUN_10063ee94(*(undefined8 *)(param_1 + 0x68));
  FUN_10065b5a4();
  FUN_1004e9554(param_1);
  do {
    if (*(char *)(param_1 + 0x18) == '\0') {
LAB_10011b8c8:
      FUN_1004e9564(param_1);
      return;
    }
    FUN_1004e1dd4(auStack_28);
    do {
      iVar1 = _sem_wait(*(undefined8 *)(param_1 + 0x28));
      if (iVar1 != -1) break;
      piVar2 = ___error();
    } while (*piVar2 == 4);
    do {
      iVar1 = _sem_trywait(*(undefined8 *)(param_1 + 0x28));
    } while (iVar1 == 0);
    if (*(char *)(param_1 + 0x18) == '\0') {
      FUN_1004e1e14(auStack_28);
      goto LAB_10011b8c8;
    }
    FUN_10011b584(param_1);
    FUN_1004e1e14(auStack_28);
  } while( true );
}




undefined1 FUN_10011b8e0(void)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = FUN_1010b872c();
  uVar1 = iVar2 == 1;
  iVar2 = FUN_100126bfc();
  if (((iVar2 == 0) || (iVar2 = FUN_100142c58(), iVar2 == 0)) ||
     (uVar3 = FUN_10016b660(), (uVar3 & 1) == 0)) {
    iVar2 = FUN_100126c4c();
    if (iVar2 != 0) {
      iVar2 = FUN_100142c58();
      uVar1 = iVar2 != 0 || (bool)uVar1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_10011b93c(undefined8 param_1)

{
  FUN_1004e8750();
  FUN_10046b240(param_1);
  FUN_10002f134(param_1);
  return;
}




void FUN_10011b968(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10011b974(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar4;
  undefined8 *puVar3;
  
  puVar1 = operator_new__(0x5790);
  puVar1[1] = 200;
  *puVar1 = 0x70;
  lVar4 = 0x5780;
  puVar3 = puVar1 + 2;
  do {
    lVar2 = thunk_FUN_10001d6f4(puVar3);
    puVar3 = (undefined8 *)(lVar2 + 0x70);
    lVar4 = lVar4 + -0x70;
  } while (lVar4 != 0);
  DAT_101d232e0 = puVar1 + 2;
  return;
}




undefined8 FUN_10011b9c4(void)

{
  return 200;
}




void FUN_10011b9cc(void)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = DAT_101d232e0;
  if (DAT_101d232e0 != 0) {
    pvVar2 = (void *)(DAT_101d232e0 + -0x10);
    if (*(long *)(DAT_101d232e0 + -8) != 0) {
      lVar3 = *(long *)(DAT_101d232e0 + -8) * 0x70;
      do {
        *(undefined ***)(lVar1 + lVar3 + -0x70) = &PTR_FUN_10144b118;
        thunk_FUN_100657580(lVar1 + lVar3 + -0x68);
        lVar3 = lVar3 + -0x70;
      } while (lVar3 != 0);
    }
    operator_delete__(pvVar2);
  }
  DAT_101d232e0 = 0;
  return;
}




void FUN_10011ba44(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = 200;
  DAT_101d232e8 = param_1;
  do {
    if ((*(byte *)(DAT_101d232e0 + lVar1 + 0x6d) & 1) != 0) {
      FUN_10001e3c0(DAT_101d232e0 + lVar1,DAT_101d232e8);
    }
    lVar1 = lVar1 + 0x70;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}




void FUN_10011ba9c(void)

{
  DAT_101d232e8 = 0;
  return;
}




uint FUN_10011baa8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = DAT_101d232e0;
  do {
    if ((*(byte *)(lVar1 + 0x6d) & 1) == 0) {
      FUN_10001db3c(lVar1,param_1);
      goto LAB_10011bae8;
    }
    lVar2 = lVar2 + 1;
    lVar1 = lVar1 + 0x70;
  } while (lVar2 != 200);
  lVar2 = 0xff;
LAB_10011bae8:
  return (uint)lVar2 & 0xff;
}




void FUN_10011baf8(uint param_1)

{
  long lVar1;
  
  lVar1 = DAT_101d232e0 + (ulong)param_1 * 0x70;
  *(byte *)(lVar1 + 0x6d) = *(byte *)(lVar1 + 0x6d) & 0xfe;
  return;
}




undefined8 FUN_10011bb18(void)

{
  return DAT_101d232e0;
}




undefined8 FUN_10011bb24(void)

{
  return DAT_101d232e8;
}




void FUN_10011bb30(int param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 200;
  while (((*(byte *)(DAT_101d232e0 + lVar2 + 0x6d) & 1) == 0 ||
         (lVar1 = (**(code **)(**(long **)(DAT_101d232e0 + lVar2 + 0x18) + 0x10))(),
         *(int *)(lVar1 + 0x260) != param_1))) {
    lVar2 = lVar2 + 0x70;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      return;
    }
  }
  *(undefined1 *)(DAT_101d232e0 + lVar2 + 0x6c) = *param_2;
  return;
}




void FUN_10011bbb8(int param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 200;
  while (((*(byte *)(DAT_101d232e0 + lVar2 + 0x6d) & 1) == 0 ||
         (lVar1 = (**(code **)(**(long **)(DAT_101d232e0 + lVar2 + 0x18) + 0x10))(),
         *(int *)(lVar1 + 0x260) != param_1))) {
    lVar2 = lVar2 + 0x70;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      return;
    }
  }
  FUN_10001e114(DAT_101d232e0 + lVar2,param_2);
  return;
}




void FUN_10011bc4c(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_14;
  
  local_14 = 0;
  FUN_10011bc70(param_1,param_2,&local_14);
  return;
}




char * FUN_10011bc70(int param_1,long param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  
  uVar3 = param_1 - 1;
  if (uVar3 < 0xc) {
    iVar5 = *(int *)(&DAT_10114d550 + (long)(int)uVar3 * 4);
    pcVar4 = (&PTR_s_hud_minimap_pingicon_avoid_101459d48)[(int)uVar3];
  }
  else {
    iVar5 = 0;
    pcVar4 = "white_background";
  }
  if ((iVar5 != -0x7ee3623b && iVar5 != 0) && param_2 != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x18);
    piVar6 = (int *)*puVar7;
    while (piVar6 != (int *)0x0) {
      puVar7 = puVar7 + 1;
      if (*piVar6 == iVar5) {
        iVar2 = *param_3;
        iVar5 = iVar2 + -2;
        piVar1 = piVar6 + 6;
        if (iVar2 == 2) {
          iVar5 = 1;
          piVar1 = piVar6 + 4;
        }
        if (iVar2 < 2) {
          iVar5 = 1;
          piVar1 = piVar6 + 2;
        }
        pcVar4 = *(char **)piVar1;
        *param_3 = iVar5;
        return pcVar4;
      }
      piVar6 = (int *)*puVar7;
    }
  }
  return pcVar4;
}




void FUN_10011bd34(void)

{
  operator_new(8);
  DAT_101d232f0 = FUN_10011bdbc();
  return;
}




void FUN_10011bd58(void)

{
  void *pvVar1;
  
  if (DAT_101d232f0 != 0) {
    pvVar1 = (void *)FUN_10011bdc8();
    operator_delete(pvVar1);
    DAT_101d232f0 = 0;
  }
  return;
}




void FUN_10011bd88(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d232f0 != 0) {
    FUN_10011bdcc(DAT_101d232f0,param_1,param_2);
    return;
  }
  return;
}




void FUN_10011bda4(undefined8 param_1)

{
  if (DAT_101d232f0 != 0) {
    FUN_10011be24(DAT_101d232f0,param_1);
    return;
  }
  return;
}




void FUN_10011bdbc(undefined8 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}




void FUN_10011bdc8(void)

{
  return;
}




void FUN_10011bdcc(uint *param_1,uint param_2,uint param_3)

{
  if (((int)param_1[1] <= (int)param_3) && (param_1[1] = param_3, *param_1 != param_2)) {
    if (param_2 < 6) {
      FUN_1004ebe24((&PTR_s_cursor_101459da8)[(int)param_2]);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_10011be24(long param_1,int param_2)

{
  if (*(int *)(param_1 + 4) <= param_2) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}




long FUN_10011be38(long param_1)

{
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x31810));
  return param_1;
}




int FUN_10011be68(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  (*(code *)*param_1)(*(undefined4 *)(param_1 + 1),param_1[2]);
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101df9e30);
  if (DAT_101df9e20 == -1) {
    DAT_101df9e20 = (int)((ulong)(param_1 + -0x203b90c4) >> 3) * -0x40a57eb5;
    DAT_101df9e24 = DAT_101df9e20;
  }
  else {
    uVar2 = (ulong)DAT_101df9e24;
    DAT_101df9e24 = (int)((ulong)(param_1 + -0x203b90c4) >> 3) * -0x40a57eb5;
    (&DAT_101dc8620)[uVar2 * 0xc6] = DAT_101df9e24;
  }
  DAT_101df9e28 = DAT_101df9e28 + -1;
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101df9e30);
  return iVar1;
}




ulong FUN_10011bf34(code *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  lVar3 = FUN_1004e6820();
  if (lVar3 == 0) {
    uVar6 = (*param_1)(param_2,param_3);
    return uVar6;
  }
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_101df9e30);
  uVar6 = (ulong)DAT_101df9e20;
  if (DAT_101df9e20 == 0xffffffff) {
    uVar2 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101df9e30);
    return (ulong)uVar2;
  }
  puVar7 = (undefined8 *)(&DAT_101dc8620 + uVar6 * 0xc6);
  if (DAT_101df9e20 == DAT_101df9e24) {
    DAT_101df9e20 = 0xffffffff;
  }
  else {
    DAT_101df9e20 = *(uint *)puVar7;
  }
  lVar3 = uVar6 * 0x318;
  *(undefined4 *)(&DAT_101dc8628 + lVar3) = 0;
  _bzero(&DAT_101dc8630 + lVar3,0x308);
  DAT_101df9e28 = DAT_101df9e28 + 1;
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101df9e30);
  *puVar7 = param_1;
  *(int *)(&DAT_101dc8628 + lVar3) = (int)param_2;
  puVar1 = (undefined8 *)(&DAT_101dc8638 + lVar3);
  *(undefined8 **)(&DAT_101dc8630 + lVar3) = puVar1;
  switch(param_2 & 0xffffffff) {
  case 0:
    *puVar1 = *param_3;
    goto LAB_10011c0a0;
  case 1:
  case 3:
    sVar5 = 0x100;
    break;
  case 2:
    sVar5 = 0x300;
    break;
  default:
    *(undefined8 *)(&DAT_101dc8630 + lVar3) = 0;
    goto LAB_10011c0a0;
  }
  _memmove(puVar1,param_3,sVar5);
LAB_10011c0a0:
  uVar4 = FUN_1004e6820();
  uVar6 = FUN_1004e57e0(uVar4,FUN_10011be68,puVar7);
  return uVar6;
}




void FUN_10011c0c8(undefined8 param_1,undefined8 param_2)

{
  FUN_10011bf34(FUN_10011c0dc,param_1,param_2);
  return;
}




void FUN_10011c0dc(int param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_48;
  void *local_40;
  char local_31;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1001148bc();
  iVar2 = FUN_1001167a4();
  if (iVar2 == 0) {
    return;
  }
  if (param_1 == 1) {
    FUN_10001549c(&local_48,param_2);
    FUN_10014e3a8(&local_48);
    if (local_31 < '\0') {
      operator_delete(local_48);
    }
    iVar2 = thunk_FUN_100529af0();
    if (iVar2 == 0) {
      return;
    }
    thunk_FUN_100529afc(param_2);
    return;
  }
  if (param_1 == 3) {
    FUN_1001db0bc(param_2,0);
    return;
  }
  if (param_1 != 2) {
    return;
  }
  pcVar1 = (char *)(param_2 + 0x100);
  iVar2 = _strcmp(pcVar1,"q");
  if (iVar2 != 0) {
    iVar2 = _strcmp(pcVar1,"a");
    if (iVar2 == 0) {
      FUN_1004e313c(&local_48);
      FUN_1004e3148(&local_48,param_2);
      FUN_1001e55b0(0xbf800000,&local_48,0,1);
    }
    else {
      iVar2 = _strcmp(pcVar1,"f");
      if (iVar2 == 0) {
        FUN_1004e313c(&local_48);
        FUN_1004e3148(&local_48,param_2);
        uVar3 = FUN_10002f320();
        FUN_1001e5600(0xbf800000,&local_48,FUN_10011c2b4,0,uVar3,0,1);
        FUN_1001117cc(0);
      }
      else {
        iVar2 = _strcmp(pcVar1,"p");
        if (iVar2 != 0) goto LAB_10011c298;
        FUN_1004e313c(&local_48);
        FUN_1004e313c(auStack_30);
        FUN_1004e3148(auStack_30,param_2 + 0x200);
        FUN_1004e3148(&local_48,param_2);
        uVar3 = FUN_10002f320();
        FUN_1001e5600(0xbf800000,&local_48,FUN_10011c2c0,0,uVar3,0,1);
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
  }
LAB_10011c298:
  iVar2 = thunk_FUN_100529af0();
  if (iVar2 != 0) {
    thunk_FUN_100529b00();
  }
  return;
}




void FUN_10011c2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10003055c(param_1,param_4,param_5);
  return;
}




void FUN_10011c2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000305ec(param_1,param_4,param_5);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011c2cc(void)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  
  DAT_101dc84a0 = 0xff;
  DAT_101dc84a2 = 0xffff;
  DAT_101dc84a4 = 0xffff;
  DAT_101dc84a6 = 0xffbc9c44;
  DAT_101dc84aa = 0xff1166f2;
  DAT_101dc84ae = 0xffe0e0e0;
  DAT_101dc84b2 = 0xffa0a0a0;
  DAT_101dc84b6 = 0xff8c8c8c;
  DAT_101dc84ba = 0xff322213;
  DAT_101dc84be = 0xff091911;
  DAT_101dc84c2 = 0xff170c19;
  DAT_101dc84c6 = 0xff241a14;
  DAT_101dc84ca = 0xff14171c;
  DAT_101dc84ce = 0xff221911;
  DAT_101dc84d2 = 0xff1a1416;
  DAT_101dc84d6 = 0xff121414;
  DAT_101dc84da = 0xff1a1809;
  DAT_101dc84de = 0xff141414;
  DAT_101dc84e2 = 0xff141414;
  DAT_101dc84e6 = 0xff2929c0;
  DAT_101dc84ea = 0xff283082;
  DAT_101dc84ee = 0xff5262cc;
  DAT_101dc84f2 = 0xff283082;
  DAT_101dc84f6 = 0xff5262cc;
  DAT_101dc84fa = 0xff745c42;
  DAT_101dc84fe = 0xff184155;
  DAT_101dc8502 = 0xff92665e;
  DAT_101dc8506 = 0xffbc9c44;
  DAT_101dc850a = 0xffbbae56;
  DAT_101dc850e = 0xff8b7b01;
  DAT_101dc8512 = 0xff90b3ef;
  DAT_101dc8516 = 0xff728ebe;
  DAT_101dc851a = 0xff19459d;
  DAT_101dc851e = 0xff9d877b;
  DAT_101dc8522 = 0xffcbb1a3;
  DAT_101dc8526 = 0xff3f6fb5;
  DAT_101dc852a = 0xffc5c5c5;
  DAT_101dc852e = 0xff4fc1f1;
  DAT_101dc8532 = 0xff606060;
  DAT_101dc8536 = 0xffc5ff7b;
  DAT_101dc853a = 0xff5271eb;
  DAT_101dc853e = 0xfffae076;
  DAT_101dc8542 = 0xff3ac8f6;
  DAT_101dc8546 = 0xffaaaaaa;
  DAT_101dc854a = 0xffe19400;
  DAT_101dc854e = 0xffe19400;
  DAT_101dc8552 = 0xffe550b2;
  DAT_101dc8556 = 0xfff22ae8;
  DAT_101dc855a = 0xff005ae1;
  DAT_101dc855e = 0xff1addfa;
  DAT_101dc8562 = 0xff2424b3;
  DAT_101dc8566 = 0xff2424b3;
  DAT_101dc856a = 0xff646464;
  DAT_101dc856e = 0xff92665e;
  DAT_101dc8572 = 0xff646037;
  DAT_101dc8578 = 0xffffffff;
  DAT_101dc857c = 0xff1111a1;
  DAT_101dc8580 = 0xff321ee1;
  DAT_101dc8584 = 0xffc8c8c8;
  DAT_101dc8588 = 0xff321ee1;
  DAT_101dc858c = 0xff7fe801;
  DAT_101dc8590 = 0xffffffff;
  DAT_101dc8594 = 0xff6259b3;
  DAT_101dc8598 = 0xff506e73;
  DAT_101dc859c = 0xff9dbf86;
  DAT_101dc85a0 = 0xffa35244;
  DAT_101dc85a4 = 0xffca828e;
  DAT_101dc85a8 = 0xffa6a6a6;
  DAT_101dc85ac = 0xffa6a6a6;
  DAT_101dc85b0 = 0xffffffff;
  DAT_101dc85b4 = 0xff88ea2f;
  DAT_101dc85b8 = 0xff8c8c8c;
  DAT_101dc85bc = 0xffffb400;
  DAT_101dc85c0 = 0xffff00ff;
  DAT_101dc85c4 = 0xff00aded;
  DAT_101dc85c8 = 0xff33d3ff;
  DAT_101dc85cc = 0xff7fe801;
  DAT_101dc85d0 = 0xff282828;
  DAT_101dc85d4 = 0xfff0f0f0;
  DAT_101dc85d8 = 0xffa4781e;
  DAT_101dc85dc = 0xffa6654b;
  DAT_101dc85e0 = 0xff93435b;
  DAT_101dc85e4 = 0xff387f9c;
  DAT_101dc85e8 = 0xffa3781e;
  DAT_101dc85ec = 0xffffd18a;
  DAT_101dc85f0 = 0xffff61f7;
  DAT_101dc85f4 = 0xff5de1f2;
  DAT_101dc85f8 = 0xff80eaff;
  DAT_101dc85fc = 0xff32e00e;
  DAT_101dc8600 = 0xff5a3c10;
  DAT_101dc8604 = 0xff330b03;
  DAT_101dc8608 = 0xff33031d;
  DAT_101dc860c = 0xff032433;
  DAT_101dc8610 = 0xff9e8e8d;
  piVar3 = &DAT_101dc8620;
  lVar2 = -0xff;
  do {
    *piVar3 = (int)lVar2 + 0x100;
    piVar3 = piVar3 + 0xc6;
    bVar1 = lVar2 != -1;
    lVar2 = lVar2 + 1;
  } while (bVar1);
  _DAT_101df9e20 = 0xff00000000;
  DAT_101df9e28 = 0;
  FUN_1004e4464(&DAT_101df9e30,0);
  ___cxa_atexit(FUN_10011be38,&DAT_101dc8620,0x100000000);
  return;
}




undefined8 * FUN_10011ca00(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 FUN_10011ca30(undefined8 param_1)

{
  FUN_10011cbac(param_1,1);
  return param_1;
}




void FUN_10011ca58(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined4 local_50;
  int iStack_4c;
  undefined1 local_48;
  undefined8 *puVar7;
  
  thunk_FUN_100529878();
  thunk_FUN_1005297d4();
  lVar3 = FUN_100134098();
  FUN_10011cbac(&DAT_101d23308,0);
  iVar1 = FUN_10052b3c0();
  if (iVar1 == 0) {
    return;
  }
  if ((uint)DAT_101d232f8 != 0) {
    iVar1 = 0;
    puVar6 = DAT_101d23300;
    do {
      puVar7 = puVar6 + 1;
      plVar5 = (long *)*puVar6;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
      iVar1 = iVar2 + iVar1;
      puVar6 = puVar7;
    } while (puVar7 != DAT_101d23300 + (uint)DAT_101d232f8);
    iVar2 = iVar1;
    if (iVar1 != 0) goto LAB_10011cb24;
  }
  iVar2 = 0;
  iVar1 = 1;
LAB_10011cb24:
  lVar4 = DAT_101d23310;
  if ((uint)DAT_101d23308 != 0) {
    do {
      thunk_FUN_1004e439c(auStack_60,lVar4);
      local_48 = *(undefined1 *)(lVar3 + 0x3f);
      _local_50 = CONCAT44(iVar1,(int)*(undefined8 *)(lVar4 + 0x10));
      thunk_FUN_1005298a8(auStack_60);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != DAT_101d23310 + (ulong)(uint)DAT_101d23308 * 0x20);
  }
  thunk_FUN_100529808(iVar2);
  return;
}




void FUN_10011cbac(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        puVar2 = puVar2 + 4;
        lVar1 = lVar1 + -0x20;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




undefined8 * FUN_10011cc24(undefined8 *param_1)

{
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_101459de8;
  local_28 = param_1;
  FUN_10011cc6c(&DAT_101d232f8,&local_28);
  return param_1;
}




void FUN_10011cc6c(uint *param_1,undefined8 *param_2)

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
    FUN_10011cdf0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10011ccec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_101459de8;
  if ((uint)DAT_101d232f8 != 0) {
    lVar2 = (ulong)(uint)DAT_101d232f8 << 3;
    puVar1 = DAT_101d23300;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23300[(uint)DAT_101d232f8 - 1];
        DAT_101d232f8._0_4_ = (uint)DAT_101d232f8 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_10011cd48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10011cd4c);
  (*pcVar1)();
}




void FUN_10011cd4c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10011cd50);
  (*pcVar1)();
}




void FUN_10011cd50(void)

{
  FUN_10011cd5c(&DAT_101d23308);
  return;
}




void FUN_10011cd5c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_10011ce6c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  thunk_FUN_1004e439c(lVar1 + -0x20,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_10011cdf0(uint *param_1,uint param_2)

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




void FUN_10011ce6c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    pvVar5 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar7 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = thunk_FUN_1004e439c(pvVar2,pvVar5);
        uVar4 = *(undefined8 *)((long)pvVar5 + 0x10);
        *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)((long)pvVar5 + 0x18);
        *(undefined8 *)(lVar3 + 0x10) = uVar4;
        pvVar5 = (void *)((long)pvVar5 + 0x20);
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar7 = (ulong)*param_1 << 5;
        puVar6 = (undefined8 *)((long)pvVar5 + 8);
        do {
          if ((void *)*puVar6 != (void *)0x0) {
            operator_delete__((void *)*puVar6);
            puVar6[-1] = 0;
            *puVar6 = 0;
          }
          puVar6 = puVar6 + 4;
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10011cf48(void)

{
  DAT_101d232f8 = 0;
  DAT_101d23300 = 0;
  ___cxa_atexit(FUN_10011ca00,&DAT_101d232f8,0x100000000);
  DAT_101d23308 = 0;
  DAT_101d23310 = 0;
  ___cxa_atexit(FUN_10011ca30,&DAT_101d23308,0x100000000);
  return;
}




undefined8 * FUN_10011cf9c(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_10011cfcc(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




long FUN_10011cffc(long param_1)

{
  FUN_10011fea4(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}




undefined8
FUN_10011d024(uint param_1,uint param_2,uint param_3,undefined1 param_4,undefined1 param_5,
             uint *param_6,uint *param_7,uint *param_8,ulong param_9,undefined8 param_10,
             undefined8 *param_11,undefined8 *param_12,undefined8 *param_13,uint param_14)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint local_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  undefined6 uStack_b6;
  undefined2 local_b0;
  undefined2 uStack_ae;
  undefined2 local_a4;
  undefined8 local_a2;
  undefined8 uStack_9a;
  undefined8 local_92;
  undefined8 uStack_8a;
  undefined8 local_82;
  undefined8 uStack_7a;
  undefined8 local_72;
  undefined8 uStack_6a;
  undefined8 local_62;
  undefined8 uStack_5a;
  undefined8 local_52;
  undefined8 uStack_4a;
  undefined8 local_42;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_cc = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_ec = 0;
  uStack_e8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uVar3 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uVar4 = (*param_6 & 0xff00ff00) >> 8 | (*param_6 & 0xff00ff) << 8;
  uVar5 = (param_6[1] & 0xff00ff00) >> 8 | (param_6[1] & 0xff00ff) << 8;
  uVar6 = (param_6[2] & 0xff00ff00) >> 8 | (param_6[2] & 0xff00ff) << 8;
  uVar7 = (*param_7 & 0xff00ff00) >> 8 | (*param_7 & 0xff00ff) << 8;
  uVar8 = (param_7[1] & 0xff00ff00) >> 8 | (param_7[1] & 0xff00ff) << 8;
  uVar9 = (param_7[2] & 0xff00ff00) >> 8 | (param_7[2] & 0xff00ff) << 8;
  if ((param_9 & 1) == 0) {
    uVar10 = (*param_8 & 0xff00ff00) >> 8 | (*param_8 & 0xff00ff) << 8;
    uStack_f8 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x2d] & 0xff00ff00) >> 8 | (param_8[0x2d] & 0xff00ff) << 8;
    uStack_f4 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x5a] & 0xff00ff00) >> 8 | (param_8[0x5a] & 0xff00ff) << 8;
    uStack_f0 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x12] & 0xff00ff00) >> 8 | (param_8[0x12] & 0xff00ff) << 8;
    local_ec = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x3f] & 0xff00ff00) >> 8 | (param_8[0x3f] & 0xff00ff) << 8;
    uStack_e8 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x6c] & 0xff00ff00) >> 8 | (param_8[0x6c] & 0xff00ff) << 8;
    uStack_e4 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0xf] & 0xff00ff00) >> 8 | (param_8[0xf] & 0xff00ff) << 8;
    uStack_e0 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x3c] & 0xff00ff00) >> 8 | (param_8[0x3c] & 0xff00ff) << 8;
    local_dc = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x69] & 0xff00ff00) >> 8 | (param_8[0x69] & 0xff00ff) << 8;
    uStack_d8 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x28] & 0xff00ff00) >> 8 | (param_8[0x28] & 0xff00ff) << 8;
    local_cc = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0xb4] & 0xff00ff00) >> 8 | (param_8[0xb4] & 0xff00ff) << 8;
    uStack_fc = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0x20] & 0xff00ff00) >> 8 | (param_8[0x20] & 0xff00ff) << 8;
    uStack_d0 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar10 = (param_8[0xb8] & 0xff00ff00) >> 8 | (param_8[0xb8] & 0xff00ff) << 8;
    uStack_d4 = uVar10 >> 0x10 | uVar10 << 0x10;
  }
  uStack_4a = *param_11;
  local_42 = *param_12;
  uStack_b6 = (undefined6)((ulong)*param_13 >> 0x10);
  uVar10 = (param_14 & 0xff00ff00) >> 8 | (param_14 & 0xff00ff) << 8;
  local_b0 = (undefined2)(uVar10 >> 0x10);
  uStack_ae = (undefined2)uVar10;
  uStack_5a = CONCAT44(uStack_d4,uStack_d8);
  local_62 = CONCAT44(local_dc,uStack_e0);
  local_52 = CONCAT44(local_cc,uStack_d0);
  uStack_3a = (undefined2)*param_13;
  uStack_30 = CONCAT17(param_5,CONCAT16((undefined1)param_10,
                                        CONCAT15(param_10._1_1_,
                                                 CONCAT14(param_9._4_1_,
                                                          CONCAT13((undefined1)param_9,
                                                                   CONCAT12(param_4,uStack_ae))))));
  uStack_38 = uStack_b6;
  uStack_32 = local_b0;
  uStack_9a = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,uVar3 >> 0x10 | uVar3 << 0x10);
  local_a2 = CONCAT44(uVar2 >> 0x10 | uVar2 << 0x10,uVar1 >> 0x10 | uVar1 << 0x10);
  uStack_8a = CONCAT44(uVar8 >> 0x10 | uVar8 << 0x10,uVar7 >> 0x10 | uVar7 << 0x10);
  local_92 = CONCAT44(uVar6 >> 0x10 | uVar6 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10);
  uStack_7a = CONCAT44(uStack_f4,uStack_f8);
  local_82 = CONCAT44(uStack_fc,uVar9 >> 0x10 | uVar9 << 0x10);
  uStack_6a = CONCAT44(uStack_e4,uStack_e8);
  local_72 = CONCAT44(local_ec,uStack_f0);
  local_a4 = 0xf203;
  FUN_10011e8f4(&local_a4,0x7c);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_10011d1f4(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5,uint param_6,
             undefined1 param_7,undefined1 param_8,uint *param_9,uint *param_10,uint *param_11,
             ulong param_12,uint *param_13,uint *param_14,uint *param_15,uint *param_16,
             uint *param_17,uint param_18,uint *param_19,uint *param_20,uint *param_21,
             undefined1 *param_22,ulong param_23,undefined8 param_24,uint *param_25,uint *param_26,
             uint *param_27,undefined8 param_28,undefined8 *param_29,undefined8 *param_30,
             undefined8 *param_31,undefined8 param_32)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint local_658;
  uint uStack_654;
  uint local_650;
  uint uStack_64c;
  undefined1 local_648;
  undefined1 local_647;
  uint local_646;
  uint local_642;
  uint local_63e;
  uint local_63a;
  uint local_636;
  undefined4 local_632;
  uint local_62e;
  uint local_62a;
  uint local_626;
  uint local_622;
  uint local_61e;
  uint local_61a;
  uint local_616;
  uint local_612;
  uint local_60e;
  uint local_60a;
  uint local_606;
  uint local_5f6;
  uint local_5f2;
  uint local_5ee;
  uint local_5ea;
  uint local_5e6;
  uint local_5e2;
  uint local_5de;
  uint local_5da;
  uint local_5d6;
  uint local_5d2;
  uint local_5ce;
  uint local_5ca;
  uint local_5c6;
  uint local_5c2;
  uint local_5be;
  uint local_5ba;
  uint local_5b6;
  uint local_5b2;
  uint local_5ae;
  uint local_5aa;
  uint local_5a6;
  uint local_5a2;
  uint local_59e;
  uint local_59a;
  uint local_596;
  uint local_592;
  uint local_58e;
  uint local_58a;
  uint local_586;
  uint local_582;
  uint local_57e;
  uint local_57a;
  uint local_576;
  uint local_572;
  uint local_56e;
  uint local_56a;
  uint local_566;
  uint local_562;
  uint local_55e;
  uint local_55a;
  uint local_556;
  uint uStack_552;
  uint local_54e;
  uint uStack_54a;
  uint local_546;
  uint uStack_542;
  uint local_53e;
  uint uStack_53a;
  uint local_536;
  uint uStack_532;
  uint local_52e;
  uint uStack_52a;
  uint local_526;
  uint uStack_522;
  uint local_51e;
  uint uStack_51a;
  uint local_516;
  int local_512;
  uint uStack_50e;
  uint local_50a;
  uint local_506;
  uint uStack_502;
  uint local_4fe;
  uint local_4fa;
  uint local_4f6 [10];
  uint local_4ce [10];
  uint local_4a6 [10];
  uint local_47e [10];
  uint local_456 [10];
  uint local_42e [9];
  undefined1 auStack_40a [3];
  uint local_407;
  uint local_3ff [8];
  uint local_3df [8];
  uint auStack_3bf [10];
  uint local_397;
  uint uStack_393;
  undefined8 local_38f;
  undefined8 uStack_387;
  undefined8 local_37f;
  uint local_377;
  uint uStack_373;
  undefined1 local_36f;
  undefined2 local_36c;
  undefined1 auStack_36a [746];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  _bzero((void *)((long)&local_632 + 2),0x29c);
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_658 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_654 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_650 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  uStack_64c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_9 & 0xff00ff00) >> 8 | (*param_9 & 0xff00ff) << 8;
  local_646 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_9[1] & 0xff00ff00) >> 8 | (param_9[1] & 0xff00ff) << 8;
  local_642 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_9[2] & 0xff00ff00) >> 8 | (param_9[2] & 0xff00ff) << 8;
  local_63e = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_10 & 0xff00ff00) >> 8 | (*param_10 & 0xff00ff) << 8;
  local_63a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_10[1] & 0xff00ff00) >> 8 | (param_10[1] & 0xff00ff) << 8;
  local_636 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_10[2] & 0xff00ff00) >> 8 | (param_10[2] & 0xff00ff) << 8;
  local_632 = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((param_12 & 1) == 0) {
    uVar1 = (*param_11 & 0xff00ff00) >> 8 | (*param_11 & 0xff00ff) << 8;
    local_62a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2d] & 0xff00ff00) >> 8 | (param_11[0x2d] & 0xff00ff) << 8;
    local_626 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5a] & 0xff00ff00) >> 8 | (param_11[0x5a] & 0xff00ff) << 8;
    local_622 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2c] & 0xff00ff00) >> 8 | (param_11[0x2c] & 0xff00ff) << 8;
    local_61a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x59] & 0xff00ff00) >> 8 | (param_11[0x59] & 0xff00ff) << 8;
    local_616 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x86] & 0xff00ff00) >> 8 | (param_11[0x86] & 0xff00ff) << 8;
    local_612 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x12] & 0xff00ff00) >> 8 | (param_11[0x12] & 0xff00ff) << 8;
    local_60e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x3f] & 0xff00ff00) >> 8 | (param_11[0x3f] & 0xff00ff) << 8;
    local_60a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x6c] & 0xff00ff00) >> 8 | (param_11[0x6c] & 0xff00ff) << 8;
    local_606 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xf] & 0xff00ff00) >> 8 | (param_11[0xf] & 0xff00ff) << 8;
    local_5f6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x3c] & 0xff00ff00) >> 8 | (param_11[0x3c] & 0xff00ff) << 8;
    local_5f2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x69] & 0xff00ff00) >> 8 | (param_11[0x69] & 0xff00ff) << 8;
    local_5ee = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x1e] & 0xff00ff00) >> 8 | (param_11[0x1e] & 0xff00ff) << 8;
    local_5ea = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x4b] & 0xff00ff00) >> 8 | (param_11[0x4b] & 0xff00ff) << 8;
    local_5e6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x78] & 0xff00ff00) >> 8 | (param_11[0x78] & 0xff00ff) << 8;
    local_5e2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[2] & 0xff00ff00) >> 8 | (param_11[2] & 0xff00ff) << 8;
    local_5da = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2f] & 0xff00ff00) >> 8 | (param_11[0x2f] & 0xff00ff) << 8;
    local_5d6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5c] & 0xff00ff00) >> 8 | (param_11[0x5c] & 0xff00ff) << 8;
    local_5d2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2b] & 0xff00ff00) >> 8 | (param_11[0x2b] & 0xff00ff) << 8;
    local_5ca = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x58] & 0xff00ff00) >> 8 | (param_11[0x58] & 0xff00ff) << 8;
    local_5c6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x85] & 0xff00ff00) >> 8 | (param_11[0x85] & 0xff00ff) << 8;
    local_5c2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[5] & 0xff00ff00) >> 8 | (param_11[5] & 0xff00ff) << 8;
    local_5be = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x32] & 0xff00ff00) >> 8 | (param_11[0x32] & 0xff00ff) << 8;
    local_5ba = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5f] & 0xff00ff00) >> 8 | (param_11[0x5f] & 0xff00ff) << 8;
    local_5b6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[6] & 0xff00ff00) >> 8 | (param_11[6] & 0xff00ff) << 8;
    local_5b2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x33] & 0xff00ff00) >> 8 | (param_11[0x33] & 0xff00ff) << 8;
    local_5ae = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x60] & 0xff00ff00) >> 8 | (param_11[0x60] & 0xff00ff) << 8;
    local_5aa = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x19] & 0xff00ff00) >> 8 | (param_11[0x19] & 0xff00ff) << 8;
    local_5a6 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x46] & 0xff00ff00) >> 8 | (param_11[0x46] & 0xff00ff) << 8;
    local_5a2 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x73] & 0xff00ff00) >> 8 | (param_11[0x73] & 0xff00ff) << 8;
    local_59e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[7] & 0xff00ff00) >> 8 | (param_11[7] & 0xff00ff) << 8;
    local_59a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x34] & 0xff00ff00) >> 8 | (param_11[0x34] & 0xff00ff) << 8;
    local_596 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x61] & 0xff00ff00) >> 8 | (param_11[0x61] & 0xff00ff) << 8;
    local_592 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[8] & 0xff00ff00) >> 8 | (param_11[8] & 0xff00ff) << 8;
    local_58e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x35] & 0xff00ff00) >> 8 | (param_11[0x35] & 0xff00ff) << 8;
    local_58a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x62] & 0xff00ff00) >> 8 | (param_11[0x62] & 0xff00ff) << 8;
    local_586 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[4] & 0xff00ff00) >> 8 | (param_11[4] & 0xff00ff) << 8;
    local_582 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x31] & 0xff00ff00) >> 8 | (param_11[0x31] & 0xff00ff) << 8;
    local_57e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x5e] & 0xff00ff00) >> 8 | (param_11[0x5e] & 0xff00ff) << 8;
    local_57a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x20] & 0xff00ff00) >> 8 | (param_11[0x20] & 0xff00ff) << 8;
    uStack_502 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x1f] & 0xff00ff00) >> 8 | (param_11[0x1f] & 0xff00ff) << 8;
    local_576 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x4c] & 0xff00ff00) >> 8 | (param_11[0x4c] & 0xff00ff) << 8;
    local_572 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x79] & 0xff00ff00) >> 8 | (param_11[0x79] & 0xff00ff) << 8;
    local_56e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[9] & 0xff00ff00) >> 8 | (param_11[9] & 0xff00ff) << 8;
    local_56a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x36] & 0xff00ff00) >> 8 | (param_11[0x36] & 0xff00ff) << 8;
    local_566 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[99] & 0xff00ff00) >> 8 | (param_11[99] & 0xff00ff) << 8;
    local_562 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[10] & 0xff00ff00) >> 8 | (param_11[10] & 0xff00ff) << 8;
    local_55e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x37] & 0xff00ff00) >> 8 | (param_11[0x37] & 0xff00ff) << 8;
    local_55a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[100] & 0xff00ff00) >> 8 | (param_11[100] & 0xff00ff) << 8;
    local_556 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb] & 0xff00ff00) >> 8 | (param_11[0xb] & 0xff00ff) << 8;
    uStack_552 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x38] & 0xff00ff00) >> 8 | (param_11[0x38] & 0xff00ff) << 8;
    local_54e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x65] & 0xff00ff00) >> 8 | (param_11[0x65] & 0xff00ff) << 8;
    uStack_54a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xc] & 0xff00ff00) >> 8 | (param_11[0xc] & 0xff00ff) << 8;
    local_546 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x39] & 0xff00ff00) >> 8 | (param_11[0x39] & 0xff00ff) << 8;
    uStack_542 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x66] & 0xff00ff00) >> 8 | (param_11[0x66] & 0xff00ff) << 8;
    local_53e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x29] & 0xff00ff00) >> 8 | (param_11[0x29] & 0xff00ff) << 8;
    local_52e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x2a] & 0xff00ff00) >> 8 | (param_11[0x2a] & 0xff00ff) << 8;
    uStack_52a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb7] & 0xff00ff00) >> 8 | (param_11[0xb7] & 0xff00ff) << 8;
    local_5ce = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x28] & 0xff00ff00) >> 8 | (param_11[0x28] & 0xff00ff) << 8;
    uStack_532 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x1d] & 0xff00ff00) >> 8 | (param_11[0x1d] & 0xff00ff) << 8;
    local_51e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0x27] & 0xff00ff00) >> 8 | (param_11[0x27] & 0xff00ff) << 8;
    local_516 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb4] & 0xff00ff00) >> 8 | (param_11[0xb4] & 0xff00ff) << 8;
    local_62e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb5] & 0xff00ff00) >> 8 | (param_11[0xb5] & 0xff00ff) << 8;
    local_61e = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb8] & 0xff00ff00) >> 8 | (param_11[0xb8] & 0xff00ff) << 8;
    local_506 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb9] & 0xff00ff00) >> 8 | (param_11[0xb9] & 0xff00ff) << 8;
    local_4fe = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xb6] & 0xff00ff00) >> 8 | (param_11[0xb6] & 0xff00ff) << 8;
    local_5de = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xba] & 0xff00ff00) >> 8 | (param_11[0xba] & 0xff00ff) << 8;
    uStack_53a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xbb] & 0xff00ff00) >> 8 | (param_11[0xbb] & 0xff00ff) << 8;
    local_536 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xbc] & 0xff00ff00) >> 8 | (param_11[0xbc] & 0xff00ff) << 8;
    uStack_51a = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xc2] & 0xff00ff00) >> 8 | (param_11[0xc2] & 0xff00ff) << 8;
    uStack_522 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (param_11[0xbf] & 0xff00ff00) >> 8 | (param_11[0xbf] & 0xff00ff) << 8;
    local_526 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  local_512 = (uint)(byte)param_12 << 0x18;
  uVar1 = (param_12._4_4_ & 0xff00ff00) >> 8 | (param_12._4_4_ & 0xff00ff) << 8;
  uStack_50e = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_50a = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_18 & 0xff00ff00) >> 8 | (param_18 & 0xff00ff) << 8;
  local_4fa = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = ((uint)param_24 & 0xff00ff00) >> 8 | ((uint)param_24 & 0xff00ff) << 8;
  local_397 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_23._4_4_ & 0xff00ff00) >> 8 | (param_23._4_4_ & 0xff00ff) << 8;
  uStack_393 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_32._4_4_ & 0xff00ff00) >> 8 | (param_32._4_4_ & 0xff00ff) << 8;
  local_377 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = ((uint)param_32 & 0xff00ff00) >> 8 | ((uint)param_32 & 0xff00ff) << 8;
  uStack_373 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_38f = *param_29;
  uStack_387 = *param_30;
  local_37f = *param_31;
  local_36f = param_5;
  if (param_18 != 0) {
    uVar2 = (ulong)param_18;
    puVar3 = local_4a6;
    do {
      uVar1 = (*param_13 & 0xff00ff00) >> 8 | (*param_13 & 0xff00ff) << 8;
      puVar3[-0x14] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_14 & 0xff00ff00) >> 8 | (*param_14 & 0xff00ff) << 8;
      puVar3[-10] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_15 & 0xff00ff00) >> 8 | (*param_15 & 0xff00ff) << 8;
      *puVar3 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_16 & 0xff00ff00) >> 8 | (*param_16 & 0xff00ff) << 8;
      puVar3[10] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_17 & 0xff00ff00) >> 8 | (*param_17 & 0xff00ff) << 8;
      puVar3[0x14] = uVar1 >> 0x10 | uVar1 << 0x10;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
      param_17 = param_17 + 1;
      param_16 = param_16 + 1;
      param_15 = param_15 + 1;
      param_14 = param_14 + 1;
      param_13 = param_13 + 1;
    } while (uVar2 != 0);
  }
  uVar1 = ((uint)param_23 & 0xff00ff00) >> 8 | ((uint)param_23 & 0xff00ff) << 8;
  local_407 = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((uint)param_23 != 0) {
    param_23 = param_23 & 0xffffffff;
    puVar3 = local_42e + 3;
    puVar4 = auStack_40a;
    do {
      uVar1 = (*param_20 & 0xff00ff00) >> 8 | (*param_20 & 0xff00ff) << 8;
      *puVar3 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_19 & 0xff00ff00) >> 8 | (*param_19 & 0xff00ff) << 8;
      puVar3[-3] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_21 & 0xff00ff00) >> 8 | (*param_21 & 0xff00ff) << 8;
      puVar3[3] = uVar1 >> 0x10 | uVar1 << 0x10;
      *puVar4 = *param_22;
      puVar3 = puVar3 + 1;
      param_23 = param_23 - 1;
      param_22 = param_22 + 1;
      param_21 = param_21 + 1;
      param_20 = param_20 + 1;
      param_19 = param_19 + 1;
      puVar4 = puVar4 + 1;
    } while (param_23 != 0);
  }
  if (param_24._4_4_ != 0) {
    uVar2 = (ulong)param_24._4_4_;
    puVar3 = auStack_3bf;
    do {
      uVar1 = (*param_25 & 0xff00ff00) >> 8 | (*param_25 & 0xff00ff) << 8;
      puVar3[-0x10] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_26 & 0xff00ff00) >> 8 | (*param_26 & 0xff00ff) << 8;
      puVar3[-8] = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*param_27 & 0xff00ff00) >> 8 | (*param_27 & 0xff00ff) << 8;
      *puVar3 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar2 = uVar2 - 1;
      param_27 = param_27 + 1;
      param_26 = param_26 + 1;
      param_25 = param_25 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  local_36c = 0xf303;
  local_648 = param_7;
  local_647 = param_8;
  _memcpy(auStack_36a,&local_658,0x2ea);
  FUN_10011e8f4(&local_36c,0x2ec);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10011d814(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined2 local_32;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_32 = 0x2204;
  uVar1 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10011e8f4(&local_32,0x1a);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011d89c(undefined8 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined2 local_34;
  undefined1 local_32;
  uint local_31;
  uint local_2d;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1003b7a24();
  puVar3 = (uint *)FUN_10045154c(param_1);
  uVar1 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
  local_31 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar3[2] & 0xff00ff00) >> 8 | (puVar3[2] & 0xff00ff) << 8;
  local_2d = uVar1 >> 0x10 | uVar1 << 0x10;
  local_34 = 0xf803;
  local_32 = uVar2;
  FUN_10011e8f4(&local_34,0xb);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011d92c(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long alStack_2600 [1200];
  undefined2 local_80;
  uint local_7e;
  uint local_7a;
  uint local_76;
  uint local_72;
  undefined1 local_6e;
  undefined1 local_6d;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1010a0258(param_1,alStack_2600,0x4b0,DAT_10184daf8);
  if (uVar3 != 0) {
    uVar6 = (ulong)uVar3;
    plVar5 = alStack_2600;
    do {
      lVar4 = *plVar5;
      uVar3 = *(uint *)(param_1 + 0x260);
      uVar1 = *(uint *)(lVar4 + 0x50);
      uVar7 = FUN_10043eeb4(lVar4);
      local_6e = *(undefined1 *)(lVar4 + 0x6a);
      local_6d = *(undefined1 *)(lVar4 + 0x68);
      bVar2 = *(byte *)(lVar4 + 0x6b);
      local_6c = bVar2 & 3;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_7e = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      local_7a = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      local_76 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = (*(uint *)(lVar4 + 0x54) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar4 + 0x54) & 0xff00ff) << 8;
      local_72 = uVar3 >> 0x10 | uVar3 << 0x10;
      local_6b = bVar2 >> 2 & 1;
      local_6a = bVar2 >> 3 & 1;
      local_80 = 0x8a04;
      local_69 = bVar2 >> 4 & 1;
      FUN_10011e8f4(&local_80,0x18);
      uVar6 = uVar6 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011da54(long param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 in_stack_fffffffffffffa00;
  undefined8 in_stack_fffffffffffffa08;
  undefined4 in_stack_fffffffffffffa10;
  undefined4 local_534;
  undefined4 local_530;
  undefined1 auStack_52b [3];
  undefined1 auStack_528 [736];
  undefined8 local_248;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_18c [8];
  undefined1 auStack_184 [8];
  undefined1 auStack_17c [8];
  undefined1 auStack_174 [12];
  undefined1 auStack_168 [12];
  undefined1 auStack_15c [12];
  undefined1 auStack_150 [40];
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [40];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003c5e30(auStack_528);
  FUN_100345b68(param_1,auStack_200,0);
  FUN_1003a31c8(param_1,auStack_210,&DAT_1013cd824);
  FUN_10046548c(param_1,auStack_528);
  local_248 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x318);
  uVar2 = FUN_100465720(param_1);
  FUN_100465a40(param_1,auStack_b0,10);
  FUN_100465adc(param_1,auStack_d8,10);
  FUN_100465b28(param_1,auStack_100,10);
  FUN_100465b74(param_1,auStack_128,10);
  FUN_100465c08(param_1,auStack_150,10);
  FUN_100465518(param_1,auStack_15c,auStack_168,auStack_174,auStack_52b,&local_530);
  FUN_100465c6c(param_1,auStack_17c,auStack_184,auStack_18c);
  FUN_1003ad14c(param_1);
  uVar14 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  uVar7 = 0xbf800000;
  if ((((int)uVar14 != 0x1f) && (*(ushort *)(param_1 + uVar14 * 0x38 + 0x90) - 3 < 2)) &&
     (iVar3 = FUN_100345ee0(param_1), iVar3 == 0)) {
    for (lVar15 = *(long *)(param_1 + 0x18); lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x20)) {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_10184e110) {
        uVar7 = FUN_1003e1f90();
        break;
      }
    }
  }
  iVar3 = FUN_100345ee0(param_1);
  if (iVar3 == 0) {
    local_534 = 0;
    for (lVar15 = *(long *)(param_1 + 0x18); lVar15 != 0; lVar15 = *(long *)(lVar15 + 0x20)) {
      if (*(int *)(*(long *)(lVar15 + 8) + 0xa4) == DAT_10184dea0) {
        if (lVar15 != 0) {
          FUN_10047229c(lVar15,&local_534,&local_1b0,&local_1d0,&local_1f0,8);
          lVar10 = FUN_100464bb0(param_1);
          if (lVar10 != 0) goto LAB_10011dcf0;
          if (*(char *)(lVar15 + 0x48) != '\0') {
            FUN_1004648c0();
          }
          goto LAB_10011dd00;
        }
        break;
      }
    }
    uStack_1a8 = 0;
    local_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    lVar10 = FUN_100464bb0(param_1);
    if (lVar10 != 0) {
LAB_10011dcf0:
      FUN_1003e0014(lVar10);
      FUN_1004649d8(lVar10);
    }
LAB_10011dd00:
    uVar8 = FUN_100345bb4(param_1);
    uVar5 = FUN_1003c5e58(param_1);
    uVar4 = *(undefined4 *)(param_1 + 0x260);
    uVar9 = FUN_1003b7a24(param_1);
    uVar11 = FUN_100345bbc(param_1);
    uVar12 = FUN_10034e938(*(undefined4 *)(param_1 + 0x260));
    uVar13 = FUN_10034e988(*(undefined4 *)(param_1 + 0x260));
    uVar6 = FUN_100466354(param_1);
    FUN_100465e38(param_1);
    FUN_10011d1f4(uVar7,uVar8,uVar5,uVar4,uVar9,uVar11,uVar12,uVar13,auStack_200,auStack_210,
                  auStack_528,CONCAT44(uVar6,in_stack_fffffffffffffa10) & 0xffffffffffffff00,
                  auStack_b0,auStack_d8,auStack_100,auStack_128,auStack_150,uVar2,auStack_15c,
                  auStack_168,auStack_174,auStack_52b,local_530,1,&local_1b0,&local_1d0,&local_1f0);
    FUN_10011d92c(param_1);
  }
  else {
    uVar7 = FUN_100345bb4(param_1);
    uVar4 = FUN_1003c5e58(param_1);
    uVar2 = *(undefined4 *)(param_1 + 0x260);
    uVar8 = FUN_1003b7a24(param_1);
    uVar9 = FUN_100345bbc(param_1);
    uVar5 = FUN_100466354(param_1);
    uVar1 = FUN_100465e38(param_1);
    uVar6 = FUN_1003461dc(param_1);
    FUN_10011d024(uVar7,uVar4,uVar2,uVar8,uVar9,auStack_200,auStack_210,auStack_528,
                  CONCAT44(uVar5,in_stack_fffffffffffffa00) & 0xffffffffffffff00,
                  CONCAT71((int7)(CONCAT62((int6)((ulong)in_stack_fffffffffffffa08 >> 0x10),0x100)
                                 >> 8),uVar1),auStack_17c,auStack_184,auStack_18c,uVar6);
  }
  uVar14 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((int)uVar14 != 0x1f) && (*(short *)(param_1 + uVar14 * 0x38 + 0x90) == 2)) {
    FUN_10011d89c(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




byte FUN_10011dedc(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long local_6e8 [200];
  undefined2 local_a4;
  uint local_a2;
  uint local_9e;
  ushort local_9a;
  uint local_98;
  ushort local_94;
  ushort local_92;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1010a1958(local_6e8,200,DAT_10184dd68,0);
  if (uVar3 == 0) {
    bVar17 = 0;
  }
  else {
    bVar17 = 0;
    uVar16 = (ulong)uVar3;
    plVar15 = local_6e8;
    uVar18 = uVar16;
    do {
      lVar14 = *plVar15;
      iVar4 = FUN_100345ee0(lVar14);
      if (iVar4 == 0) {
        FUN_10011da54(lVar14);
        bVar17 = *(int *)(lVar14 + 0x260) == param_1 | bVar17;
      }
      plVar15 = plVar15 + 1;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    plVar15 = local_6e8;
    do {
      lVar14 = *plVar15;
      iVar4 = FUN_100345ee0(lVar14);
      if (iVar4 != 0) {
        FUN_10011da54(lVar14);
      }
      plVar15 = plVar15 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
    if (uVar3 != 0) {
      uVar18 = 0;
      do {
        lVar12 = local_6e8[uVar18];
        for (lVar14 = *(long *)(lVar12 + 0x18); lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x20)) {
          if (*(int *)(*(long *)(lVar14 + 8) + 0xa4) == DAT_10184daa8) {
            iVar4 = FUN_1003c2e80(lVar14);
            if (iVar4 != 0) {
              uVar13 = 0;
              do {
                uVar10 = FUN_1003c2e88(lVar14,uVar13);
                iVar4 = FUN_10034624c(lVar14,uVar10);
                if ((iVar4 != 0) &&
                   (lVar11 = FUN_100346280(lVar14,uVar10), *(int *)(lVar11 + 0x3c) != 0)) {
                  uVar5 = FUN_1003c2eec(lVar14,uVar10);
                  uVar1 = *(uint *)(lVar12 + 0x260);
                  FUN_1003c2eb8(lVar14,uVar13);
                  uVar6 = FUN_1003d4e0c();
                  uVar19 = FUN_1003b2c7c(lVar14,uVar10);
                  uVar9 = uVar19 >> 0x10 & 0x8000;
                  uVar2 = uVar19 >> 0x17 & 0xff;
                  if (uVar2 != 0) {
                    if (uVar2 == 0xff) {
                      uVar9 = uVar9 | (uVar19 & 0x7fffff) != 0 | 0x7c00;
                    }
                    else {
                      uVar2 = (uVar19 >> 0x17) * 0x1000000 + 0x81000000;
                      if ((int)uVar2 < -0xe000000) {
                        uVar7 = 0;
                        if (-0x18000001 < (int)uVar2) {
                          uVar7 = (0x400U >> (ulong)(-((int)uVar2 >> 0x18) - 0xeU & 0x1f)) +
                                  ((uVar19 & 0x7fffff) >> (ulong)(~((int)uVar2 >> 0x18) & 0x1f)) &
                                  0x3ff;
                        }
                        uVar9 = uVar7 | uVar9;
                      }
                      else if ((int)uVar2 < 0xf000001) {
                        uVar9 = uVar9 | uVar19 >> 0xd & 0x3ff | (uVar2 >> 0xe) + 0x3c00 & 0x7c00;
                      }
                      else {
                        uVar9 = uVar9 | 0x7c00;
                      }
                    }
                  }
                  uVar19 = FUN_1003c30e0(lVar14,uVar10);
                  uVar20 = FUN_10046afb8(lVar14,uVar10);
                  uVar21 = FUN_10046afd8(lVar14,uVar10);
                  uVar7 = FUN_1003a5100(lVar14,uVar10);
                  uVar8 = FUN_1003c8b48(lVar14,uVar10);
                  local_a4 = 0x3f04;
                  uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  local_9e = uVar2 >> 0x10 | uVar2 << 0x10;
                  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                  local_a2 = uVar1 >> 0x10 | uVar1 << 0x10;
                  local_9a = (ushort)(uVar9 >> 8) | (ushort)((uVar9 & 0xff00ff) << 8);
                  uVar9 = ((uint)uVar10 & 0xff00ff00) >> 8 | ((uint)uVar10 & 0xff00ff) << 8;
                  local_98 = uVar9 >> 0x10 | uVar9 << 0x10;
                  local_94 = (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
                  local_92 = (ushort)(uVar19 >> 8) & 0xff | (ushort)((uVar19 & 0xff00ff) << 8);
                  uVar9 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
                  local_90 = uVar9 >> 0x10 | uVar9 << 0x10;
                  uVar9 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
                  uStack_8c = uVar9 >> 0x10 | uVar9 << 0x10;
                  uVar9 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
                  local_88 = uVar9 >> 0x10 | uVar9 << 0x10;
                  uVar9 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
                  uStack_84 = uVar9 >> 0x10 | uVar9 << 0x10;
                  FUN_10011e8f4(&local_a4,0x24);
                }
                uVar13 = uVar13 + 1;
                uVar9 = FUN_1003c2e80(lVar14);
              } while (uVar13 < uVar9);
            }
            break;
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar17;
}




void FUN_10011e250(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long local_688 [192];
  undefined2 local_88;
  uint local_86;
  uint local_82;
  uint local_7e;
  uint local_7a;
  uint local_76;
  uint local_72;
  uint local_6e;
  byte local_6a;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10011dedc(0xffffffff);
  uVar3 = FUN_1010a1958(local_688,0xc0,DAT_10184e3b8,0);
  if (uVar3 != 0) {
    plVar7 = local_688;
    uVar8 = (ulong)uVar3;
    do {
      lVar9 = *plVar7;
      if ((*(byte *)(lVar9 + 0x78) >> 2 & 1) == 0) {
        plVar4 = *(long **)(lVar9 + 0x40);
        if (plVar4 == (long *)0x0) {
LAB_10011e3b4:
          uVar3 = *(uint *)(lVar9 + 0x28);
          lVar5 = (**(code **)(**(long **)(lVar9 + 0x30) + 0x10))();
          local_6a = *(byte *)(lVar9 + 0x78) & 3;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          local_86 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar5 + 0x260) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar5 + 0x260) & 0xff00ff) << 8;
          local_82 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x50) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x50) & 0xff00ff) << 8;
          local_7e = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x58) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x58) & 0xff00ff) << 8;
          local_7a = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x5c) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x5c) & 0xff00ff) << 8;
          local_76 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x70) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x70) & 0xff00ff) << 8;
          local_72 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x74) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x74) & 0xff00ff) << 8;
          local_6e = uVar3 >> 0x10 | uVar3 << 0x10;
          local_88 = 0x2004;
          uVar6 = 0x1f;
        }
        else {
          if (*(int *)(lVar9 + 0x48) != (int)plVar4[1]) {
            *(undefined8 *)(lVar9 + 0x40) = 0;
            *(undefined4 *)(lVar9 + 0x48) = DAT_101dc0b88;
            goto LAB_10011e3b4;
          }
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 == 0) goto LAB_10011e3b4;
          uVar3 = *(uint *)(lVar9 + 0x28);
          lVar5 = (**(code **)(**(long **)(lVar9 + 0x30) + 0x10))();
          uVar1 = *(uint *)(lVar5 + 0x260);
          lVar5 = (**(code **)(**(long **)(lVar9 + 0x40) + 0x10))();
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          local_86 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          local_82 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar5 + 0x260) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar5 + 0x260) & 0xff00ff) << 8;
          local_7e = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x5c) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x5c) & 0xff00ff) << 8;
          local_7a = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x70) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x70) & 0xff00ff) << 8;
          local_76 = uVar3 >> 0x10 | uVar3 << 0x10;
          uVar3 = (*(uint *)(lVar9 + 0x74) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar9 + 0x74) & 0xff00ff) << 8;
          local_72 = uVar3 >> 0x10 | uVar3 << 0x10;
          local_88 = 0x2104;
          local_6e = CONCAT31(local_6e._1_3_,*(undefined1 *)(lVar9 + 0x78)) & 0xffffff03;
          uVar6 = 0x1b;
        }
        FUN_10011e8f4(&local_88,uVar6);
      }
      else {
        uVar2 = *(undefined4 *)(lVar9 + 0x28);
        lVar5 = (**(code **)(**(long **)(lVar9 + 0x30) + 0x10))();
        FUN_10011d814(uVar2,*(undefined4 *)(lVar5 + 0x260),lVar9 + 0x60,lVar9 + 0x68);
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011e474(void)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  long *plVar8;
  int iVar9;
  ulong local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined5 uStack_238;
  undefined3 local_233;
  uint uStack_230;
  undefined1 uStack_22c;
  ulong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined5 uStack_1c8;
  undefined3 uStack_1c3;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined2 local_142;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined5 uStack_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined3 uStack_db;
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
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  iVar3 = FUN_10034ed9c();
  if (0 < iVar3) {
    iVar9 = 0;
    do {
      uVar5 = FUN_10034ee54(iVar9);
      local_150 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_1c8 = 0;
      uStack_1c3 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      uStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_208 = 0;
      local_210 = 0;
      uStack_1f8 = 0;
      local_200 = 0;
      uStack_218 = 0;
      local_220 = 0;
      uVar6 = FUN_10034e42c();
      FUN_1004e34d8(uVar6,&local_220,0xffffffff);
      uVar6 = FUN_10034e580(uVar5);
      FUN_1004e34d8(uVar6,&uStack_188,8);
      uVar6 = FUN_10034e5dc(uVar5);
      FUN_1004e34d8(uVar6,&local_190,8);
      uVar4 = ((uint)uVar5 & 0xff00ff00) >> 8 | ((uint)uVar5 & 0xff00ff) << 8;
      local_180 = CONCAT44(local_180._4_4_,uVar4 >> 0x10 | uVar4 << 0x10);
      uVar2 = FUN_10034e738(uVar5);
      local_150._0_3_ = CONCAT12(uVar2,(undefined2)local_150);
      uVar4 = FUN_10034e794(uVar5);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_180 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,(undefined4)local_180);
      uVar4 = FUN_10034e7e4(uVar5);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uStack_178 = CONCAT44(uStack_178._4_4_,uVar4 >> 0x10 | uVar4 << 0x10);
      puVar7 = (uint *)FUN_10034ee4c(uVar5);
      uVar4 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      uStack_178 = CONCAT44(uVar4 >> 0x10 | uVar4 << 0x10,(undefined4)uStack_178);
      uVar2 = FUN_10034f1f4(uVar5);
      local_150 = CONCAT71(local_150._1_7_,uVar2);
      uVar2 = FUN_10034f248(uVar5);
      local_150._0_2_ = CONCAT11(uVar2,(undefined1)local_150);
      uVar2 = FUN_10034ec3c(uVar5);
      local_150._0_4_ = CONCAT13(uVar2,(undefined3)local_150);
      uVar2 = FUN_10034ec90(uVar5);
      local_150._0_5_ = CONCAT14(uVar2,(undefined4)local_150);
      uVar2 = FUN_10034ece4(uVar5);
      local_150._0_6_ = CONCAT15(uVar2,(undefined5)local_150);
      uVar2 = FUN_10034f14c(uVar5);
      local_150._0_7_ = CONCAT16(uVar2,(undefined6)local_150);
      uVar2 = FUN_10034e8e4(uVar5);
      local_150 = CONCAT17(uVar2,(undefined7)local_150);
      local_142 = 0xee03;
      uStack_98 = uStack_178;
      local_a0 = local_180;
      uStack_88 = uStack_168;
      uStack_90 = local_170;
      uStack_78 = uStack_158;
      local_80 = local_160;
      local_70 = local_150;
      uStack_d8 = uStack_1b8;
      uStack_e0 = (undefined5)CONCAT44(uStack_1bc,uStack_1c0);
      uStack_db = (undefined3)((uint)uStack_1bc >> 8);
      uStack_c8 = uStack_1a8;
      uStack_d0 = local_1b0;
      uStack_b8 = uStack_198;
      local_c0 = local_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = local_190;
      uStack_118 = uStack_1f8;
      local_120 = local_200;
      uStack_108 = (undefined5)uStack_1e8;
      uStack_103 = (undefined3)((ulong)uStack_1e8 >> 0x28);
      local_110 = local_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = (undefined5)local_1e0;
      uStack_fb = (undefined3)((ulong)local_1e0 >> 0x28);
      uStack_e8 = uStack_1c8;
      uStack_e3 = uStack_1c3;
      local_f0 = local_1d0;
      uStack_138 = uStack_218;
      local_140 = local_220;
      uStack_128 = uStack_208;
      local_130 = local_210;
      FUN_10011e8f4(&local_142,0xda);
      iVar9 = iVar9 + 1;
    } while (iVar3 != iVar9);
  }
  uStack_1c0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1c3 = 0;
  local_1d0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uVar4 = FUN_10034ee90();
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uStack_218 = 0;
  local_220 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
  FUN_10034ee90();
  uVar2 = FUN_10034e738();
  uStack_1bc = CONCAT31(uStack_1bc._1_3_,uVar2);
  plVar8 = (long *)FUN_10034cc60();
  plVar1 = (long *)*plVar8;
  if (-1 < *(char *)((long)plVar8 + 0x17)) {
    plVar1 = plVar8;
  }
  FUN_1004d25b8(&local_200,0x40,plVar1);
  uStack_108 = (undefined5)uStack_1e8;
  uStack_103 = (undefined3)((ulong)uStack_1e8 >> 0x28);
  local_110 = local_1f0;
  uStack_f8 = uStack_1d8;
  uStack_100 = (undefined5)local_1e0;
  uStack_fb = (undefined3)((ulong)local_1e0 >> 0x28);
  uStack_e8 = uStack_1c8;
  local_f0 = local_1d0;
  uStack_138 = uStack_218;
  local_140 = local_220;
  uStack_128 = uStack_208;
  local_130 = local_210;
  local_142 = 0xe903;
  uStack_e3 = uStack_1c3;
  uStack_e0 = (undefined5)(CONCAT17((undefined1)uStack_1bc,CONCAT43(uStack_1c0,uStack_1c3)) >> 0x18)
  ;
  uStack_118 = uStack_1f8;
  local_120 = local_200;
  FUN_10011e8f4(&local_142,0x67);
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_233 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  plVar8 = (long *)FUN_10034cc60();
  plVar1 = (long *)*plVar8;
  if (-1 < *(char *)((long)plVar8 + 0x17)) {
    plVar1 = plVar8;
  }
  FUN_1004d25b8(&local_270,0x40,plVar1);
  FUN_1000320fc();
  uVar4 = FUN_100032244();
  uStack_128 = uStack_258;
  local_130 = uStack_260;
  uStack_118 = uStack_248;
  local_120 = local_250;
  uStack_108 = uStack_238;
  local_110 = uStack_240;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uStack_230 = uVar4 >> 0x10 | uVar4 << 0x10;
  uStack_22c = 1;
  local_142 = 0x6f04;
  uStack_103 = local_233;
  uStack_100 = (undefined5)(CONCAT17(1,CONCAT43(uStack_230,local_233)) >> 0x18);
  uStack_138 = uStack_268;
  local_140 = local_270;
  FUN_10011e8f4(&local_142,0x47);
  FUN_10011e250();
  local_142 = 0x7004;
  local_140 = local_140 & 0xffffffffffffff00;
  FUN_10011e8f4(&local_142,3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10011e798(undefined8 param_1,uint *param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  do {
    if (DAT_101d23318 == (FILE *)0x0) {
      return 0;
    }
    iVar2 = FUN_1004d28a8(param_3,4,1);
    if (iVar2 == 1) {
      uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
      *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
      FUN_1004d28a8(param_2,4,1,DAT_101d23318);
      uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      *param_2 = uVar1;
      iVar2 = FUN_1004d28a8(param_1,uVar1,1,DAT_101d23318);
      if (iVar2 != 1) {
        return 0;
      }
      return 1;
    }
    if ((param_4 & 1) == 0) {
      return 0;
    }
    iVar2 = 0;
    if (DAT_101d23318 != (FILE *)0x0) {
      iVar2 = _fclose(DAT_101d23318);
      DAT_101d23318 = (FILE *)0x0;
    }
    DAT_101e3a050 = DAT_101e3a050 + 1;
    param_4 = 1;
    uVar3 = FUN_10011e878(iVar2);
  } while ((uVar3 & 1) != 0);
  return 0;
}




bool FUN_10011e878(void)

{
  char ***pppcVar1;
  FILE *pFVar2;
  char **local_48 [2];
  char local_31;
  
  FUN_10011ed54(local_48);
  if (DAT_101d23318 == (FILE *)0x0) {
    pppcVar1 = (char ***)local_48[0];
    if (-1 < local_31) {
      pppcVar1 = local_48;
    }
    DAT_101d23318 = _fopen((char *)pppcVar1,"rb");
  }
  pFVar2 = DAT_101d23318;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return pFVar2 != (FILE *)0x0;
}




void FUN_10011e8f4(ushort *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_10034d2d4(&DAT_101df9ea8);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar1 < 0x451) {
    if (uVar1 - 0x411 < 0x3e && (1L << ((ulong)(uVar1 - 0x411) & 0x3f) & 0x2000017420000007U) != 0)
    {
      return;
    }
    if (uVar1 - 0x3ea < 3 || uVar1 == 0) {
      return;
    }
  }
  else {
    uVar1 = uVar1 - 0x451;
    if (uVar1 < 0x2d) {
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x1b140800070dU) != 0) {
        return;
      }
      if ((ulong)uVar1 == 0x1e) {
        DAT_101e3a054 = 1;
      }
    }
  }
  FUN_10034d2e4(DAT_101e3a058,&DAT_101df9ea8,param_1,param_2);
  return;
}




void FUN_10011e9d4(void)

{
  char ***pppcVar1;
  undefined4 uVar2;
  int iVar3;
  FILE *pFVar4;
  char *pcVar5;
  ulong uVar6;
  char **local_888 [2];
  char local_871;
  void *local_870 [2];
  char local_859;
  char **local_858 [2];
  char local_841;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10003330c(local_870,&DAT_101df9e78);
  FUN_10011eb8c(local_858);
  pppcVar1 = (char ***)local_858[0];
  if (-1 < local_841) {
    pppcVar1 = local_858;
  }
  pFVar4 = _fopen((char *)pppcVar1,"r");
  if (local_841 < '\0') {
    operator_delete(local_858[0]);
  }
  if (pFVar4 != (FILE *)0x0) {
    pcVar5 = _fgets((char *)local_858,0x800,pFVar4);
    if (pcVar5 != (char *)0x0) {
      do {
        FUN_10001549c(local_888,local_858);
        std::string::operator=((string *)&DAT_101df9e78,(string *)local_888);
        if (local_871 < '\0') {
          operator_delete(local_888[0]);
        }
        FUN_10011ec38(&DAT_101df9e78,&DAT_101d91180);
        uVar2 = DAT_101e3a050;
        DAT_101e3a050 = 0;
        iVar3 = FUN_10011e878();
        if (iVar3 != 0) {
          do {
            iVar3 = 0;
            if (DAT_101d23318 != (FILE *)0x0) {
              iVar3 = _fclose(DAT_101d23318);
              DAT_101d23318 = (FILE *)0x0;
            }
            FUN_10011ed54(local_888,iVar3);
            pppcVar1 = (char ***)local_888[0];
            if (-1 < local_871) {
              pppcVar1 = local_888;
            }
            _unlink((char *)pppcVar1);
            DAT_101e3a050 = DAT_101e3a050 + 1;
            if (local_871 < '\0') {
              operator_delete(local_888[0]);
            }
            uVar6 = FUN_10011e878();
          } while ((uVar6 & 1) != 0);
        }
        DAT_101e3a050 = uVar2;
        pcVar5 = _fgets((char *)local_858,0x800,pFVar4);
      } while (pcVar5 != (char *)0x0);
    }
    _fclose(pFVar4);
    std::string::operator=((string *)&DAT_101df9e78,(string *)local_870);
  }
  if (local_859 < '\0') {
    operator_delete(local_870[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011eb8c(undefined8 param_1)

{
  undefined1 auStack_538 [256];
  undefined1 auStack_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e20a8(&DAT_101d911b0,2,auStack_438,0x400);
  FUN_1004d2698(auStack_538,"%s/%s");
  FUN_10001549c(param_1,auStack_538);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011ec38(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  
  sVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  uVar2 = param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  do {
    uVar6 = uVar2;
    if ((uVar6 == 0) || (sVar1 == 0)) break;
    pvVar5 = _memchr(puVar3,(uint)*(byte *)((long)puVar4 + (uVar6 - 1)),sVar1);
    uVar2 = uVar6 - 1;
  } while (pvVar5 != (void *)0x0);
  std::string::erase((ulong)param_1,uVar6);
  sVar1 = param_2[1];
  puVar3 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    sVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar3 = param_2;
  }
  uVar2 = param_1[1];
  puVar4 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar4 = param_1;
  }
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      if ((sVar1 == 0) ||
         (pvVar5 = _memchr(puVar3,(uint)*(byte *)((long)puVar4 + uVar6),sVar1),
         pvVar5 == (void *)0x0)) break;
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  std::string::erase((ulong)param_1,0);
  return;
}




void FUN_10011ed54(undefined8 param_1)

{
  undefined1 auStack_538 [256];
  undefined1 auStack_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e20a8(&DAT_101d911b0,2,auStack_438,0x400);
  FUN_1004d2698(auStack_538,"%s/%s.%d.vgr");
  FUN_10001549c(param_1,auStack_538);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10011ee0c(void)

{
  char *****pppppcVar1;
  FILE *pFVar2;
  char ****local_38 [2];
  char local_21;
  
  FUN_10011eb8c(local_38);
  pppppcVar1 = (char *****)local_38[0];
  if (-1 < local_21) {
    pppppcVar1 = local_38;
  }
  pFVar2 = _fopen((char *)pppppcVar1,"w");
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  if (pFVar2 != (FILE *)0x0) {
    FUN_1004d2934(pFVar2,"%s\n");
    _fclose(pFVar2);
  }
  return;
}




void FUN_10011eea8(byte param_1)

{
  DAT_101e3a05c = param_1;
  if ((param_1 & 1) != 0) {
    return;
  }
  DAT_101e3a05d = 0;
  FUN_10011f1dc();
  FUN_10034d18c(&DAT_101df9ea8);
  return;
}




void FUN_10011eee0(void)

{
  DAT_101e3a05d = 0;
  FUN_10011f1dc();
  FUN_10034d18c(&DAT_101df9ea8);
  return;
}




void FUN_10011ef04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *local_50 [2];
  char local_39;
  void *local_38;
  ulong local_30;
  byte local_21;
  
  uVar2 = FUN_10034d2c4(&DAT_101df9ea8);
  if ((uVar2 & 1) == 0) {
    FUN_10003330c(&local_38,param_1);
    if (-1 < (char)local_21) {
      local_30 = (ulong)local_21;
    }
    if (local_30 != 0) {
      std::string::append((char *)&local_38);
      puVar1 = (undefined8 *)*param_2;
      if (-1 < *(char *)((long)param_2 + 0x17)) {
        puVar1 = param_2;
      }
      std::string::append((char *)&local_38,(ulong)puVar1);
      std::string::operator=((string *)&DAT_101df9e78,(string *)&local_38);
      FUN_10001549c(local_50,"replayManifest-");
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      std::string::append((char *)local_50,(ulong)puVar1);
      std::string::append((char *)local_50);
      std::string::operator=((string *)&DAT_101df9e90,(string *)local_50);
      if (local_39 < '\0') {
        operator_delete(local_50[0]);
      }
    }
    DAT_101e3a058 = 0;
    DAT_101e3a050 = 0;
    DAT_101e3a05c = 1;
    FUN_10011e9d4();
    FUN_10011ee0c();
    FUN_10034d138(&DAT_101df9ea8);
    FUN_10011f048();
    FUN_10011e474();
    if ((char)local_21 < '\0') {
      operator_delete(local_38);
    }
  }
  return;
}




void FUN_10011f048(void)

{
  char ***pppcVar1;
  tm *ptVar2;
  ulong uVar3;
  FILE *pFVar4;
  time_t tStack_88;
  char **local_80 [2];
  char local_69;
  char acStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10011ed54(local_80);
  _time(&tStack_88);
  ptVar2 = _localtime(&tStack_88);
  _strftime(acStack_68,0x40,"_%Y-%m-%dT%H-%M-%S.dat",ptVar2);
  uVar3 = FUN_10034d2d4(&DAT_101df9ea8);
  if ((uVar3 & 1) == 0) {
    pppcVar1 = (char ***)local_80[0];
    if (-1 < local_69) {
      pppcVar1 = local_80;
    }
    pFVar4 = _fopen((char *)pppcVar1,"wb");
    FUN_10034d1cc(&DAT_101df9ea8,pFVar4);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1 FUN_10011f114(void)

{
  return DAT_101e3a05d;
}




undefined1 FUN_10011f120(void)

{
  return DAT_101e3a05c;
}




void FUN_10011f12c(float param_1)

{
  int iVar1;
  
  iVar1 = FUN_10034d2c4(&DAT_101df9ea8);
  if (((iVar1 != 0) && (DAT_101e3a054 == '\x01')) &&
     (DAT_101e3a058 = DAT_101e3a058 + param_1, (float)(DAT_101e3a050 + 1) * 10.0 < DAT_101e3a058)) {
    FUN_10034d1d4(&DAT_101df9ea8,0);
    DAT_101e3a050 = DAT_101e3a050 + 1;
    FUN_10011f048();
    FUN_10011e474();
    return;
  }
  return;
}




undefined4 FUN_10011f1d0(void)

{
  return DAT_101e3a060;
}




void FUN_10011f1dc(void)

{
  int iVar1;
  
  iVar1 = FUN_10034d2d4(&DAT_101df9ea8);
  if (iVar1 != 0) {
    FUN_10034d1d4(&DAT_101df9ea8,1);
    return;
  }
  return;
}




void FUN_10011f210(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_850;
  undefined4 local_84c;
  undefined1 auStack_848 [2048];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101e3a020 != 0) {
    DAT_101e3a018._0_4_ = 0;
  }
  if (DAT_101e3a030 != 0) {
    DAT_101e3a028._0_4_ = 0;
  }
  FUN_10011fea4(&DAT_101e3a038,DAT_101e3a040);
  DAT_101e3a038 = &DAT_101e3a040;
  DAT_101e3a048 = 0;
  DAT_101e3a040 = 0;
  DAT_101e3a050 = 0;
  DAT_101e3a05d = 1;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredManifest*",0);
  if (lVar3 == 0) {
    FUN_1010a14fc(0,"build://Levels/DefinitionManifest.def");
    FUN_1010a15e0("*KindredManifest*",0,0xffffffff,0);
    FUN_10034cc6c();
  }
  iVar1 = FUN_10011e878();
  if (iVar1 != 0) {
    do {
      iVar1 = FUN_10011e798(auStack_848,&local_84c,&local_850,0);
      if (iVar1 != 0) {
        FUN_10011f3e8(&DAT_101e3a018,&local_850);
        do {
          FUN_10011f468(local_850,auStack_848,local_84c);
          uVar4 = FUN_10011e798(auStack_848,&local_84c,&local_850,0);
        } while ((uVar4 & 1) != 0);
      }
      DAT_101e3a050 = DAT_101e3a050 + 1;
      iVar1 = 0;
      if (DAT_101d23318 != (FILE *)0x0) {
        iVar1 = _fclose(DAT_101d23318);
        DAT_101d23318 = (FILE *)0x0;
      }
      uVar4 = FUN_10011e878(iVar1);
    } while ((uVar4 & 1) != 0);
  }
  DAT_101e3a050 = (int)DAT_101e3a018 + -1;
  iVar1 = FUN_10011e878();
  if ((iVar1 != 0) && (iVar1 = FUN_10011e798(auStack_848,&local_84c,&local_850,1), iVar1 != 0)) {
    do {
      DAT_101e3a060 = local_850;
      uVar4 = FUN_10011e798(auStack_848,&local_84c,&local_850,1);
    } while ((uVar4 & 1) != 0);
  }
  DAT_101e3a050 = 0;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10011f3e8(uint *param_1,undefined4 *param_2)

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
    FUN_10011fee4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_10011f468(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint auStack_368 [10];
  undefined2 local_340;
  undefined2 uStack_33e;
  undefined2 uStack_33c;
  undefined2 uStack_33a;
  undefined2 local_338;
  undefined2 uStack_336;
  undefined2 uStack_334;
  undefined2 local_332;
  undefined2 uStack_330;
  undefined2 uStack_32e;
  undefined2 uStack_32c;
  undefined2 uStack_32a;
  undefined2 uStack_328;
  undefined2 uStack_326;
  undefined2 uStack_324;
  undefined2 uStack_322;
  undefined2 uStack_320;
  undefined2 uStack_31e;
  undefined2 uStack_31c;
  undefined2 uStack_31a;
  undefined2 local_318;
  undefined2 uStack_316;
  undefined2 uStack_314;
  undefined2 local_312;
  undefined2 uStack_310;
  undefined2 uStack_30e;
  undefined2 uStack_30c;
  undefined2 uStack_30a;
  undefined2 uStack_308;
  undefined2 uStack_306;
  undefined2 uStack_304;
  undefined2 uStack_302;
  undefined2 uStack_300;
  undefined2 uStack_2fe;
  undefined2 uStack_2fc;
  undefined2 local_2fa;
  undefined2 uStack_2f8;
  uint local_2f6;
  undefined2 local_2f2;
  undefined2 uStack_2f0;
  uint uStack_2ee;
  undefined2 uStack_2ea;
  undefined2 uStack_2e8;
  uint uStack_2e6;
  undefined2 uStack_2e2;
  undefined2 uStack_2e0;
  undefined2 uStack_2de;
  undefined2 uStack_2dc;
  uint uStack_2da;
  uint local_2d6;
  uint local_2d2;
  uint local_2ce;
  uint local_2ca;
  uint local_2c6;
  uint local_2c2;
  uint local_2be;
  uint local_2ba;
  uint local_2b6;
  uint local_2b2;
  uint local_2ae;
  uint local_29e;
  uint local_29a;
  uint local_296;
  uint local_292;
  uint local_28e;
  uint local_28a;
  uint local_286;
  uint local_282;
  uint local_27e;
  uint local_27a;
  uint local_276;
  uint local_272;
  uint local_26e;
  uint local_26a;
  uint local_266;
  uint local_262;
  uint local_25e;
  uint local_25a;
  uint local_256;
  uint local_252;
  uint local_24e;
  uint uStack_24a;
  uint local_246;
  uint uStack_242;
  uint local_23e;
  uint uStack_23a;
  uint local_236;
  uint uStack_232;
  uint local_22e;
  uint uStack_22a;
  uint local_226;
  uint uStack_222;
  uint local_21e;
  uint uStack_21a;
  uint local_216;
  uint uStack_212;
  uint local_20e;
  uint uStack_20a;
  uint local_206;
  uint uStack_202;
  uint local_1fe;
  uint uStack_1fa;
  uint local_1f6;
  uint uStack_1f2;
  uint local_1ee [10];
  uint local_1c6 [10];
  uint local_19e [10];
  uint local_176 [20];
  uint local_126 [3];
  uint local_11a [3];
  uint local_10e [3];
  uint local_ff;
  uint local_fb;
  uint local_f7 [8];
  uint local_d7 [8];
  uint local_b7 [8];
  uint local_97;
  uint uStack_93;
  uint local_8f;
  uint uStack_8b;
  uint local_6f;
  uint uStack_6b;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  puVar7 = (uint *)(param_2 + 1);
  uVar1 = *param_2 >> 8 | *param_2 << 8;
  if (DAT_101e3a05c != '\0') {
    FUN_10011e8f4();
  }
  if (uVar1 == 0x430) {
    uVar2 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    uVar3 = (*(uint *)(param_2 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 3) & 0xff00ff) << 8;
    auStack_368[7] = uVar3 >> 0x10 | uVar3 << 0x10;
    auStack_368[6] = uVar2 >> 0x10 | uVar2 << 0x10;
    FUN_10011fc98(param_1,auStack_368 + 6);
  }
  else if (uVar1 == 0x3f3) {
    _memcpy(auStack_368 + 6,puVar7,0x2ea);
    uVar2 = (auStack_368[6] & 0xff00ff00) >> 8 | (auStack_368[6] & 0xff00ff) << 8;
    uVar3 = (auStack_368[7] & 0xff00ff00) >> 8 | (auStack_368[7] & 0xff00ff) << 8;
    auStack_368[7] = uVar3 >> 0x10 | uVar3 << 0x10;
    auStack_368[6] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (auStack_368[8] & 0xff00ff00) >> 8 | (auStack_368[8] & 0xff00ff) << 8;
    uVar3 = (auStack_368[9] & 0xff00ff00) >> 8 | (auStack_368[9] & 0xff00ff) << 8;
    auStack_368[9] = uVar3 >> 0x10 | uVar3 << 0x10;
    auStack_368[8] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (CONCAT22(uStack_33c,uStack_33e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_33c,uStack_33e) & 0xff00ff) << 8;
    uStack_33e = (undefined2)(uVar2 >> 0x10);
    uStack_33c = (undefined2)uVar2;
    uVar2 = (CONCAT22(local_338,uStack_33a) & 0xff00ff00) >> 8 |
            (CONCAT22(local_338,uStack_33a) & 0xff00ff) << 8;
    uStack_33a = (undefined2)(uVar2 >> 0x10);
    local_338 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_334,uStack_336) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_334,uStack_336) & 0xff00ff) << 8;
    uStack_336 = (undefined2)(uVar2 >> 0x10);
    uStack_334 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_330,local_332) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_330,local_332) & 0xff00ff) << 8;
    local_332 = (undefined2)(uVar2 >> 0x10);
    uStack_330 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_32c,uStack_32e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_32c,uStack_32e) & 0xff00ff) << 8;
    uStack_32e = (undefined2)(uVar2 >> 0x10);
    uStack_32c = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_328,uStack_32a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_328,uStack_32a) & 0xff00ff) << 8;
    uStack_32a = (undefined2)(uVar2 >> 0x10);
    uStack_328 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_324,uStack_326) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_324,uStack_326) & 0xff00ff) << 8;
    uStack_326 = (undefined2)(uVar2 >> 0x10);
    uStack_324 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_320,uStack_322) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_320,uStack_322) & 0xff00ff) << 8;
    uStack_322 = (undefined2)(uVar2 >> 0x10);
    uStack_320 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_31c,uStack_31e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_31c,uStack_31e) & 0xff00ff) << 8;
    uStack_31e = (undefined2)(uVar2 >> 0x10);
    uStack_31c = (undefined2)uVar2;
    uVar2 = (CONCAT22(local_318,uStack_31a) & 0xff00ff00) >> 8 |
            (CONCAT22(local_318,uStack_31a) & 0xff00ff) << 8;
    uStack_31a = (undefined2)(uVar2 >> 0x10);
    local_318 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_314,uStack_316) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_314,uStack_316) & 0xff00ff) << 8;
    uStack_316 = (undefined2)(uVar2 >> 0x10);
    uStack_314 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_310,local_312) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_310,local_312) & 0xff00ff) << 8;
    local_312 = (undefined2)(uVar2 >> 0x10);
    uStack_310 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_30c,uStack_30e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_30c,uStack_30e) & 0xff00ff) << 8;
    uStack_30e = (undefined2)(uVar2 >> 0x10);
    uStack_30c = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_308,uStack_30a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_308,uStack_30a) & 0xff00ff) << 8;
    uStack_30a = (undefined2)(uVar2 >> 0x10);
    uStack_308 = (undefined2)uVar2;
    uVar2 = (local_1fe & 0xff00ff00) >> 8 | (local_1fe & 0xff00ff) << 8;
    local_1fe = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_1fa & 0xff00ff00) >> 8 | (uStack_1fa & 0xff00ff) << 8;
    uStack_1fa = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_1f6 & 0xff00ff00) >> 8 | (local_1f6 & 0xff00ff) << 8;
    local_1f6 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (CONCAT22(uStack_304,uStack_306) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_304,uStack_306) & 0xff00ff) << 8;
    uStack_306 = (undefined2)(uVar2 >> 0x10);
    uStack_304 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_300,uStack_302) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_300,uStack_302) & 0xff00ff) << 8;
    uStack_302 = (undefined2)(uVar2 >> 0x10);
    uStack_300 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_2fc,uStack_2fe) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2fc,uStack_2fe) & 0xff00ff) << 8;
    uStack_2fe = (undefined2)(uVar2 >> 0x10);
    uStack_2fc = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_2f8,local_2fa) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2f8,local_2fa) & 0xff00ff) << 8;
    local_2fa = (undefined2)(uVar2 >> 0x10);
    uStack_2f8 = (undefined2)uVar2;
    uVar2 = (local_2f6 & 0xff00ff00) >> 8 | (local_2f6 & 0xff00ff) << 8;
    local_2f6 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (CONCAT22(uStack_2f0,local_2f2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2f0,local_2f2) & 0xff00ff) << 8;
    local_2f2 = (undefined2)(uVar2 >> 0x10);
    uStack_2f0 = (undefined2)uVar2;
    uVar2 = (uStack_2ee & 0xff00ff00) >> 8 | (uStack_2ee & 0xff00ff) << 8;
    uStack_2ee = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (CONCAT22(uStack_2e8,uStack_2ea) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2e8,uStack_2ea) & 0xff00ff) << 8;
    uStack_2ea = (undefined2)(uVar2 >> 0x10);
    uStack_2e8 = (undefined2)uVar2;
    uVar2 = (uStack_2e6 & 0xff00ff00) >> 8 | (uStack_2e6 & 0xff00ff) << 8;
    uStack_2e6 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (CONCAT22(uStack_2e0,uStack_2e2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2e0,uStack_2e2) & 0xff00ff) << 8;
    uStack_2e2 = (undefined2)(uVar2 >> 0x10);
    uStack_2e0 = (undefined2)uVar2;
    uVar2 = (CONCAT22(uStack_2dc,uStack_2de) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2dc,uStack_2de) & 0xff00ff) << 8;
    uStack_2de = (undefined2)(uVar2 >> 0x10);
    uStack_2dc = (undefined2)uVar2;
    uVar2 = (uStack_2da & 0xff00ff00) >> 8 | (uStack_2da & 0xff00ff) << 8;
    uStack_2da = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2d6 & 0xff00ff00) >> 8 | (local_2d6 & 0xff00ff) << 8;
    local_2d6 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2d2 & 0xff00ff00) >> 8 | (local_2d2 & 0xff00ff) << 8;
    local_2d2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2ce & 0xff00ff00) >> 8 | (local_2ce & 0xff00ff) << 8;
    local_2ce = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2ca & 0xff00ff00) >> 8 | (local_2ca & 0xff00ff) << 8;
    local_2ca = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2c6 & 0xff00ff00) >> 8 | (local_2c6 & 0xff00ff) << 8;
    local_2c6 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2c2 & 0xff00ff00) >> 8 | (local_2c2 & 0xff00ff) << 8;
    local_2c2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2be & 0xff00ff00) >> 8 | (local_2be & 0xff00ff) << 8;
    local_2be = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2ba & 0xff00ff00) >> 8 | (local_2ba & 0xff00ff) << 8;
    local_2ba = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2b6 & 0xff00ff00) >> 8 | (local_2b6 & 0xff00ff) << 8;
    local_2b6 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2b2 & 0xff00ff00) >> 8 | (local_2b2 & 0xff00ff) << 8;
    local_2b2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_2ae & 0xff00ff00) >> 8 | (local_2ae & 0xff00ff) << 8;
    local_2ae = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_29e & 0xff00ff00) >> 8 | (local_29e & 0xff00ff) << 8;
    local_29e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_29a & 0xff00ff00) >> 8 | (local_29a & 0xff00ff) << 8;
    local_29a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_296 & 0xff00ff00) >> 8 | (local_296 & 0xff00ff) << 8;
    local_296 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_292 & 0xff00ff00) >> 8 | (local_292 & 0xff00ff) << 8;
    local_292 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_28e & 0xff00ff00) >> 8 | (local_28e & 0xff00ff) << 8;
    local_28e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_28a & 0xff00ff00) >> 8 | (local_28a & 0xff00ff) << 8;
    local_28a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_286 & 0xff00ff00) >> 8 | (local_286 & 0xff00ff) << 8;
    local_286 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_282 & 0xff00ff00) >> 8 | (local_282 & 0xff00ff) << 8;
    local_282 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_27e & 0xff00ff00) >> 8 | (local_27e & 0xff00ff) << 8;
    local_27e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_27a & 0xff00ff00) >> 8 | (local_27a & 0xff00ff) << 8;
    local_27a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_276 & 0xff00ff00) >> 8 | (local_276 & 0xff00ff) << 8;
    local_276 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_272 & 0xff00ff00) >> 8 | (local_272 & 0xff00ff) << 8;
    local_272 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_26e & 0xff00ff00) >> 8 | (local_26e & 0xff00ff) << 8;
    local_26e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_26a & 0xff00ff00) >> 8 | (local_26a & 0xff00ff) << 8;
    local_26a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_266 & 0xff00ff00) >> 8 | (local_266 & 0xff00ff) << 8;
    local_266 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_262 & 0xff00ff00) >> 8 | (local_262 & 0xff00ff) << 8;
    local_262 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_25e & 0xff00ff00) >> 8 | (local_25e & 0xff00ff) << 8;
    local_25e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_25a & 0xff00ff00) >> 8 | (local_25a & 0xff00ff) << 8;
    local_25a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_256 & 0xff00ff00) >> 8 | (local_256 & 0xff00ff) << 8;
    local_256 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_252 & 0xff00ff00) >> 8 | (local_252 & 0xff00ff) << 8;
    local_252 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_24e & 0xff00ff00) >> 8 | (local_24e & 0xff00ff) << 8;
    local_24e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_24a & 0xff00ff00) >> 8 | (uStack_24a & 0xff00ff) << 8;
    uStack_24a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_246 & 0xff00ff00) >> 8 | (local_246 & 0xff00ff) << 8;
    local_246 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_242 & 0xff00ff00) >> 8 | (uStack_242 & 0xff00ff) << 8;
    uStack_242 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_23e & 0xff00ff00) >> 8 | (local_23e & 0xff00ff) << 8;
    local_23e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_23a & 0xff00ff00) >> 8 | (uStack_23a & 0xff00ff) << 8;
    uStack_23a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_236 & 0xff00ff00) >> 8 | (local_236 & 0xff00ff) << 8;
    local_236 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_232 & 0xff00ff00) >> 8 | (uStack_232 & 0xff00ff) << 8;
    uStack_232 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_22e & 0xff00ff00) >> 8 | (local_22e & 0xff00ff) << 8;
    local_22e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_22a & 0xff00ff00) >> 8 | (uStack_22a & 0xff00ff) << 8;
    uStack_22a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_226 & 0xff00ff00) >> 8 | (local_226 & 0xff00ff) << 8;
    local_226 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_222 & 0xff00ff00) >> 8 | (uStack_222 & 0xff00ff) << 8;
    uStack_222 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_21e & 0xff00ff00) >> 8 | (local_21e & 0xff00ff) << 8;
    local_21e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_21a & 0xff00ff00) >> 8 | (uStack_21a & 0xff00ff) << 8;
    uStack_21a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_216 & 0xff00ff00) >> 8 | (local_216 & 0xff00ff) << 8;
    local_216 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_212 & 0xff00ff00) >> 8 | (uStack_212 & 0xff00ff) << 8;
    uStack_212 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_20e & 0xff00ff00) >> 8 | (local_20e & 0xff00ff) << 8;
    local_20e = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_20a & 0xff00ff00) >> 8 | (uStack_20a & 0xff00ff) << 8;
    uStack_20a = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (local_206 & 0xff00ff00) >> 8 | (local_206 & 0xff00ff) << 8;
    local_206 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_202 & 0xff00ff00) >> 8 | (uStack_202 & 0xff00ff) << 8;
    uStack_202 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uStack_1f2 & 0xff00ff00) >> 8 | (uStack_1f2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar3 = (local_ff & 0xff00ff00) >> 8 | (local_ff & 0xff00ff) << 8;
    local_ff = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (local_8f & 0xff00ff00) >> 8 | (local_8f & 0xff00ff) << 8;
    uVar4 = (uStack_8b & 0xff00ff00) >> 8 | (uStack_8b & 0xff00ff) << 8;
    local_8f = uVar3 >> 0x10 | uVar3 << 0x10;
    uStack_8b = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar3 = (local_6f & 0xff00ff00) >> 8 | (local_6f & 0xff00ff) << 8;
    uVar4 = (uStack_6b & 0xff00ff00) >> 8 | (uStack_6b & 0xff00ff) << 8;
    local_6f = uVar3 >> 0x10 | uVar3 << 0x10;
    uStack_6b = uVar4 >> 0x10 | uVar4 << 0x10;
    if (uStack_1f2 != 0) {
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 1;
      }
      uVar5 = (ulong)uVar3;
      puVar7 = local_19e;
      do {
        uVar3 = (puVar7[-0x14] & 0xff00ff00) >> 8 | (puVar7[-0x14] & 0xff00ff) << 8;
        puVar7[-0x14] = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (puVar7[-10] & 0xff00ff00) >> 8 | (puVar7[-10] & 0xff00ff) << 8;
        puVar7[-10] = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
        *puVar7 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (puVar7[10] & 0xff00ff00) >> 8 | (puVar7[10] & 0xff00ff) << 8;
        puVar7[10] = uVar3 >> 0x10 | uVar3 << 0x10;
        puVar7 = puVar7 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar6 = 0x242;
    do {
      puVar7 = (uint *)((long)auStack_368 + lVar6 + 0x18);
      uVar3 = (*(uint *)((long)auStack_368 + lVar6) & 0xff00ff00) >> 8 |
              (*(uint *)((long)auStack_368 + lVar6) & 0xff00ff) << 8;
      *(uint *)((long)auStack_368 + lVar6) = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *(uint *)((long)auStack_368 + lVar6 + 0xc);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      *(uint *)((long)auStack_368 + lVar6 + 0xc) = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar3 = *puVar7;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      *puVar7 = uVar3 >> 0x10 | uVar3 << 0x10;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x24e);
    uVar5 = (ulong)local_fb;
    if (local_fb != 0) {
      puVar7 = local_b7;
      do {
        uVar3 = (puVar7[-0x10] & 0xff00ff00) >> 8 | (puVar7[-0x10] & 0xff00ff) << 8;
        puVar7[-0x10] = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (puVar7[-8] & 0xff00ff00) >> 8 | (puVar7[-8] & 0xff00ff) << 8;
        puVar7[-8] = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
        *puVar7 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    uVar3 = (local_97 & 0xff00ff00) >> 8 | (local_97 & 0xff00ff) << 8;
    local_97 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (uStack_93 & 0xff00ff00) >> 8 | (uStack_93 & 0xff00ff) << 8;
    uStack_93 = uVar3 >> 0x10 | uVar3 << 0x10;
    uStack_1f2 = uVar2;
    FUN_10011fc48(auStack_368 + 6);
  }
  else if (uVar1 == 0x3f2) {
    uVar8 = *(undefined8 *)(param_2 + 0x2d);
    uStack_2f8 = (undefined2)uVar8;
    local_2f6 = (uint)((ulong)uVar8 >> 0x10);
    local_2f2 = (undefined2)((ulong)uVar8 >> 0x30);
    uVar8 = *(undefined8 *)(param_2 + 0x31);
    uStack_2e8 = (undefined2)*(undefined8 *)(param_2 + 0x35);
    uStack_2f0 = (undefined2)uVar8;
    uStack_2ee = (uint)((ulong)uVar8 >> 0x10);
    uStack_2ea = (undefined2)((ulong)uVar8 >> 0x30);
    uVar9 = *(undefined8 *)(param_2 + 0x3a);
    uVar8 = *(undefined8 *)(param_2 + 0x36);
    uStack_2de = (undefined2)uVar9;
    uStack_2dc = (undefined2)((ulong)uVar9 >> 0x10);
    uStack_2da = (uint)((ulong)uVar9 >> 0x20);
    uStack_2e6 = (uint)uVar8;
    uStack_2e2 = (undefined2)((ulong)uVar8 >> 0x20);
    uStack_2e0 = (undefined2)((ulong)uVar8 >> 0x30);
    auStack_368[6] = (uint)*(undefined8 *)puVar7;
    auStack_368[7] = (uint)((ulong)*(undefined8 *)puVar7 >> 0x20);
    uVar2 = (auStack_368[6] & 0xff00ff00) >> 8 | (auStack_368[6] & 0xff00ff) << 8;
    uVar3 = (auStack_368[7] & 0xff00ff00) >> 8 | (auStack_368[7] & 0xff00ff) << 8;
    auStack_368[7] = uVar3 >> 0x10 | uVar3 << 0x10;
    auStack_368[6] = uVar2 >> 0x10 | uVar2 << 0x10;
    auStack_368[8] = (uint)*(undefined8 *)(param_2 + 5);
    auStack_368[9] = (uint)((ulong)*(undefined8 *)(param_2 + 5) >> 0x20);
    uVar2 = (auStack_368[8] & 0xff00ff00) >> 8 | (auStack_368[8] & 0xff00ff) << 8;
    uVar3 = (auStack_368[9] & 0xff00ff00) >> 8 | (auStack_368[9] & 0xff00ff) << 8;
    auStack_368[9] = uVar3 >> 0x10 | uVar3 << 0x10;
    auStack_368[8] = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uint)*(undefined8 *)(param_2 + 9);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 9) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_340 = (undefined2)(uVar2 >> 0x10);
    uStack_33e = (undefined2)uVar2;
    uStack_33c = (undefined2)(uVar3 >> 0x10);
    uStack_33a = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0xd);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0xd) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_338 = (undefined2)(uVar2 >> 0x10);
    uStack_336 = (undefined2)uVar2;
    uStack_334 = (undefined2)(uVar3 >> 0x10);
    local_332 = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x11);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0x11) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uStack_330 = (undefined2)(uVar2 >> 0x10);
    uStack_32e = (undefined2)uVar2;
    uStack_32c = (undefined2)(uVar3 >> 0x10);
    uStack_32a = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x15);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0x15) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uStack_328 = (undefined2)(uVar2 >> 0x10);
    uStack_326 = (undefined2)uVar2;
    uStack_324 = (undefined2)(uVar3 >> 0x10);
    uStack_322 = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x19);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0x19) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uStack_320 = (undefined2)(uVar2 >> 0x10);
    uStack_31e = (undefined2)uVar2;
    uStack_31c = (undefined2)(uVar3 >> 0x10);
    uStack_31a = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x1d);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0x1d) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_318 = (undefined2)(uVar2 >> 0x10);
    uStack_316 = (undefined2)uVar2;
    uStack_314 = (undefined2)(uVar3 >> 0x10);
    local_312 = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x21);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0x21) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uStack_310 = (undefined2)(uVar2 >> 0x10);
    uStack_30e = (undefined2)uVar2;
    uStack_30c = (undefined2)(uVar3 >> 0x10);
    uStack_30a = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x25);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0x25) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uStack_308 = (undefined2)(uVar2 >> 0x10);
    uStack_306 = (undefined2)uVar2;
    uStack_304 = (undefined2)(uVar3 >> 0x10);
    uStack_302 = (undefined2)uVar3;
    uVar2 = (uint)*(undefined8 *)(param_2 + 0x29);
    uVar3 = (uint)((ulong)*(undefined8 *)(param_2 + 0x29) >> 0x20);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uStack_300 = (undefined2)(uVar2 >> 0x10);
    uStack_2fe = (undefined2)uVar2;
    uStack_2fc = (undefined2)(uVar3 >> 0x10);
    local_2fa = (undefined2)uVar3;
    uVar2 = (CONCAT22(uStack_2de,uStack_2e0) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2de,uStack_2e0) & 0xff00ff) << 8;
    uStack_2e0 = (undefined2)(uVar2 >> 0x10);
    uStack_2de = (undefined2)uVar2;
    FUN_10011fbf8(auStack_368 + 6);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_10011fac8(void)

{
  int iVar1;
  
  DAT_101e3a05d = 0;
  iVar1 = 0;
  if (DAT_101d23318 != (FILE *)0x0) {
    iVar1 = _fclose(DAT_101d23318);
    DAT_101d23318 = (FILE *)0x0;
  }
  return iVar1;
}




bool thunk_FUN_10011e878(void)

{
  char ***pppcVar1;
  FILE *pFVar2;
  char **appcStack_48 [2];
  char cStack_31;
  
  FUN_10011ed54(appcStack_48);
  if (DAT_101d23318 == (FILE *)0x0) {
    pppcVar1 = (char ***)appcStack_48[0];
    if (-1 < cStack_31) {
      pppcVar1 = appcStack_48;
    }
    DAT_101d23318 = _fopen((char *)pppcVar1,"rb");
  }
  pFVar2 = DAT_101d23318;
  if (cStack_31 < '\0') {
    operator_delete(appcStack_48[0]);
  }
  return pFVar2 != (FILE *)0x0;
}




void FUN_10011fb00(void)

{
  DAT_101e3a05d = 0;
  FUN_10011e9d4();
  DAT_101e3a05c = 1;
  return;
}




void FUN_10011fb28(void)

{
  DAT_101e3a05c = 1;
  return;
}




float FUN_10011fb38(float param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if ((uint)DAT_101e3a018 == 0) {
    uVar4 = 0;
    fVar6 = 0.0;
  }
  else {
    uVar2 = 0;
    fVar6 = 0.0;
    uVar3 = 0;
    do {
      fVar5 = *(float *)(DAT_101e3a020 + uVar2 * 4);
      uVar4 = (int)uVar2;
      if (ABS(param_1 - fVar6) <= ABS(param_1 - fVar5)) {
        uVar4 = uVar3;
        fVar5 = fVar6;
      }
      fVar6 = fVar5;
      uVar2 = uVar2 + 1;
      uVar3 = uVar4;
    } while ((uint)DAT_101e3a018 != uVar2);
  }
  iVar1 = 0;
  if (DAT_101d23318 != (FILE *)0x0) {
    iVar1 = _fclose(DAT_101d23318);
    DAT_101d23318 = (FILE *)0x0;
  }
  DAT_101e3a05d = 1;
  DAT_101e3a050 = uVar4;
  FUN_10011e878(iVar1);
  return fVar6;
}




undefined4 FUN_10011fbd8(void)

{
  return (undefined4)DAT_101e3a028;
}




long FUN_10011fbe4(ulong param_1)

{
  return DAT_101e3a030 + (param_1 & 0xffffffff) * 0xc;
}




void FUN_10011fbf8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_100345b94();
  puVar4 = (undefined4 *)FUN_10034e548(uVar3,*param_1);
  uVar2 = *(undefined1 *)((long)param_1 + 0x79);
  uVar1 = *puVar4;
  puVar4 = (undefined4 *)FUN_10011fd5c(&DAT_101e3a038,param_1 + 2);
  *puVar4 = uVar1;
  *(undefined1 *)(puVar4 + 1) = uVar2;
  return;
}




void FUN_10011fc48(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = FUN_100345b94();
  puVar4 = (undefined4 *)FUN_10034e548(uVar3,*param_1);
  uVar1 = param_1[3];
  uVar2 = *puVar4;
  puVar4 = (undefined4 *)FUN_10011fd5c(&DAT_101e3a038,param_1 + 2);
  *puVar4 = uVar2;
  *(char *)(puVar4 + 1) = (char)uVar1;
  return;
}




void FUN_10011fc98(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  
  puVar1 = (undefined4 *)FUN_10011fd5c(&DAT_101e3a038,param_2);
  lVar2 = FUN_10011fd5c(&DAT_101e3a038,param_2 + 4);
  local_48 = *(undefined1 *)(lVar2 + 4);
  switch(*puVar1) {
  case 0:
    local_50 = 4;
    break;
  default:
    goto switchD_10011fd08_caseD_1;
  case 2:
    local_50 = 3;
    break;
  case 3:
    local_50 = 0;
    break;
  case 4:
    local_50 = 1;
    break;
  case 9:
    local_50 = 2;
  }
  local_4c = param_1;
  FUN_10011fe18(&DAT_101e3a028,&local_50);
switchD_10011fd08_caseD_1:
  return;
}




undefined8 * FUN_10011fd5c(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_10011fdd4:
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, *(uint *)((long)puVar2 + 0x1c) <= uVar4) {
        if (uVar4 <= *(uint *)((long)puVar2 + 0x1c)) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_10011fe00;
          goto LAB_10011fdd4;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_10011fdd8;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_10011fdd8:
  puVar3 = operator_new(0x28);
  *(uint *)((long)puVar3 + 0x1c) = uVar4;
  puVar3[4] = 0;
  FUN_10011ff60(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_10011fe00:
  return puVar2 + 4;
}




void FUN_10011fe18(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_10011ffb4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xc;
  uVar5 = *param_2;
  *(undefined4 *)(lVar4 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + -0xc) = uVar5;
  return;
}




void FUN_10011fea4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10011fea4(param_1,*param_2);
    FUN_10011fea4(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_10011fee4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10011ff60(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_10011ffb4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
        *puVar4 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        lVar3 = lVar3 + -0xc;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
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




void thunk_FUN_10011fac8(void)

{
  FUN_10011fac8();
  return;
}

