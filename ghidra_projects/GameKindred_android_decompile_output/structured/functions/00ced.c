// functions/00ced — 35 functions
#include "libGameKindred.h"




byte FUN_00ced058(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc3) >> 4 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




undefined4 FUN_00ced0c8(int param_1)

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
        return *(undefined4 *)(lVar1 + 0x94);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0xff;
}




undefined4 FUN_00ced12c(int param_1)

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
        return *(undefined4 *)(lVar1 + 0x98);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0xff;
}




byte FUN_00ced190(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc3) >> 5 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




bool FUN_00ced200(int param_1)

{
  ulong uVar1;
  int *piVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar1 = 0;
    piVar2 = (int *)(DAT_0314f350 + 8);
    do {
      if (*piVar2 == param_1) {
        return piVar2 != (int *)0x8;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x32;
    } while (uVar1 < 0x10);
  }
  return false;
}




byte FUN_00ced270(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc3) >> 1 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




bool FUN_00ced2e0(int param_1,undefined8 param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = FUN_00ceab64();
  if ((uVar5 & 1) == 0) {
    bVar2 = false;
    if ((param_1 != -1) && (bVar2 = false, DAT_0314f358 == '\x01')) {
      uVar5 = 0;
      lVar6 = DAT_0314f350;
      do {
        if (*(int *)(lVar6 + 8) == param_1) {
          if (lVar6 != 0) {
            uVar1 = *(ushort *)(lVar6 + 0xc2);
            uVar4 = FUN_00d55870(param_2);
            bVar2 = (uVar1 & 0xf) == (uVar4 & 0xff);
            goto LAB_00ced30c;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 200;
      } while (uVar5 < 0x10);
      bVar2 = false;
    }
  }
  else {
    cVar3 = FUN_00d55870(param_2);
    bVar2 = cVar3 == '\x01';
LAB_00ced30c:
    bVar2 = !bVar2;
  }
  return bVar2;
}




uint FUN_00ced398(void)

{
  uint uVar1;
  
  uVar1 = FUN_00ced2e0();
  return ~uVar1 & 1;
}




bool FUN_00ced3b4(int param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_00ceab64();
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
    if ((param_1 != -1) && (lVar3 = 0, DAT_0314f358 == '\x01')) {
      uVar2 = 0;
      lVar3 = DAT_0314f350;
      do {
        if (*(int *)(lVar3 + 8) == param_1) goto LAB_00ced474;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 200;
      } while (uVar2 < 0x10);
      lVar3 = 0;
    }
LAB_00ced474:
    if (param_2 == -1) {
      return false;
    }
    if (DAT_0314f358 != '\x01') {
      return false;
    }
    uVar2 = 0;
    lVar4 = DAT_0314f350;
    do {
      if (*(int *)(lVar4 + 8) == param_2) {
        if (lVar3 == 0) {
          return false;
        }
        if (lVar4 == 0) {
          return false;
        }
        bVar1 = ((*(ulong *)(lVar4 + 0xbc) ^ *(ulong *)(lVar3 + 0xbc)) & 0xf000000000000) == 0;
        goto LAB_00ced4f4;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 200;
    } while (uVar2 < 0x10);
  }
  else {
    if (param_2 == -1) {
      return false;
    }
    if (DAT_0314f358 != '\x01') {
      return false;
    }
    uVar2 = 0;
    lVar3 = DAT_0314f350;
    do {
      if (*(int *)(lVar3 + 8) == param_2) {
        if (lVar3 == 0) {
          return false;
        }
        bVar1 = (*(ulong *)(lVar3 + 0xbc) & 0xf000000000000) == 0x1000000000000;
LAB_00ced4f4:
        return !bVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 200;
    } while (uVar2 < 0x10);
  }
  return false;
}




uint FUN_00ced50c(void)

{
  uint uVar1;
  
  uVar1 = FUN_00ced3b4();
  return ~uVar1 & 1;
}




byte FUN_00ced528(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc2) >> 5 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




byte FUN_00ced598(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc2) >> 6 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




byte FUN_00ced608(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc3) >> 2 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




bool FUN_00ced678(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return (*(ulong *)(lVar1 + 0xbc) & 0x440000000000000) == 0x40000000000000;
        }
        return false;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return false;
}




int FUN_00ced6f8(void)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  iVar1 = 0;
  if (DAT_0314f358 == '\x01') {
    uVar2 = 0;
    iVar1 = 0;
    piVar3 = (int *)(DAT_0314f350 + 8);
    do {
      uVar2 = uVar2 + 1;
      if (*piVar3 != -1) {
        iVar1 = iVar1 + 1;
      }
      piVar3 = piVar3 + 0x32;
    } while (uVar2 < 0x10);
  }
  return iVar1;
}




int FUN_00ced748(void)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  
  iVar1 = 0;
  if (DAT_0314f358 == '\x01') {
    uVar2 = 0;
    iVar1 = 0;
    puVar3 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if ((*(int *)((long)puVar3 + -0xb4) != -1) &&
         ((*puVar3 & 0x440000000000000) == 0x40000000000000)) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x19;
    } while (uVar2 < 0x10);
  }
  return iVar1;
}




undefined1 FUN_00ced7b4(ulong param_1)

{
  return (&DAT_0314f370)[param_1 & 0xff];
}




int FUN_00ced7c8(ushort param_1)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  
  iVar1 = 0;
  if (DAT_0314f358 == '\x01') {
    uVar2 = 0;
    iVar1 = 0;
    puVar3 = (ulong *)(DAT_0314f350 + 0xbc);
    do {
      if (*(int *)((long)puVar3 + -0xb4) != -1) {
        iVar1 = iVar1 + (uint)((*puVar3 & 0x440000000000000) == 0x40000000000000 &&
                              ((ushort)(*puVar3 >> 0x30) & 0xf) == (param_1 & 0xff));
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x19;
    } while (uVar2 < 0x10);
  }
  return iVar1;
}




long FUN_00ced850(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}




undefined4 * FUN_00ced8b0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00ced908;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00ced908:
  puVar1 = (undefined4 *)(lVar2 + (ulong)param_2 * 4 + 0x9c);
  if (lVar2 == 0 || 7 < param_2) {
    puVar1 = &DAT_01bee8c0;
  }
  return puVar1;
}




undefined4 * FUN_00ced928(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00ced980;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00ced980:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0x9c);
  }
  return puVar1;
}




undefined4 * FUN_00ced998(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00ced9f0;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00ced9f0:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0xa0);
  }
  return puVar1;
}




undefined4 * FUN_00ceda08(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00ceda60;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00ceda60:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0xa4);
  }
  return puVar1;
}




undefined4 * FUN_00ceda78(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cedad0;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cedad0:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0xa8);
  }
  return puVar1;
}




undefined4 * FUN_00cedae8(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cedb40;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cedb40:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0xac);
  }
  return puVar1;
}




undefined4 * FUN_00cedb58(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cedbb0;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cedbb0:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0xb8);
  }
  return puVar1;
}




undefined4 * FUN_00cedbc8(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  if ((param_1 != -1) && (lVar2 = 0, DAT_0314f358 == '\x01')) {
    uVar3 = 0;
    lVar2 = DAT_0314f350;
    do {
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_00cedc20;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (uVar3 < 0x10);
    lVar2 = 0;
  }
LAB_00cedc20:
  puVar1 = &DAT_01bee8c0;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0xb0);
  }
  return puVar1;
}




undefined8 FUN_00cedc38(int param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    puVar1 = DAT_0314f350;
    do {
      if (*(int *)(puVar1 + 1) == param_1) {
        if (puVar1 != (undefined8 *)0x0) {
          return *puVar1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return 0;
}




undefined4 FUN_00cedca4(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0x10;
  if (DAT_0314f358 == '\0') {
    uVar2 = 0;
  }
  puVar1 = (undefined4 *)(DAT_0314f350 + (ulong)param_1 * 200 + 8);
  if (uVar2 <= param_1) {
    puVar1 = &DAT_01bc8f90;
  }
  return *puVar1;
}




ulong FUN_00cedce4(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = FUN_00ceab64();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00cedd7c();
    return uVar1;
  }
  if (DAT_0314f360 == 0) {
    if ((DAT_0314f358 & 1) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0xffffffff;
      uVar3 = 0;
      lVar2 = DAT_0314f350;
      do {
        if ((*(uint *)(lVar2 + 8) != 0xffffffff) && ((*(byte *)(lVar2 + 0xc3) >> 1 & 1) != 0)) {
          DAT_0314f360 = lVar2;
          return (ulong)*(uint *)(lVar2 + 8);
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 200;
      } while (uVar3 < 0x10);
    }
  }
  else {
    uVar1 = (ulong)*(uint *)(DAT_0314f360 + 8);
  }
  return uVar1;
}




int FUN_00cedd7c(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte bVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  if (DAT_0314f368 != (int *)0x0) {
    return DAT_0314f368[2];
  }
  FUN_00ceabb4();
  iVar2 = FUN_00e70b14();
  if (iVar2 == 0) {
    uVar7 = 0x10;
    if (DAT_0314f358 == 0) {
      uVar7 = 0;
    }
    if (DAT_0314f358 == 0) goto LAB_00cedec4;
    uVar8 = 0;
    lVar9 = DAT_0314f350;
    do {
      if ((*(int *)(lVar9 + 8) != -1) &&
         ((*(ulong *)(lVar9 + 0xbc) & 0xf000000000000) == 0x1000000000000)) {
        DAT_0314f368 = (int *)lVar9;
        return *(int *)(lVar9 + 8);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 200;
    } while (uVar8 < uVar7);
    if (DAT_0314f358 == 0) goto LAB_00cedec4;
    uVar8 = 0;
    lVar9 = DAT_0314f350;
    do {
      if ((*(int *)(lVar9 + 8) != -1) &&
         ((*(ulong *)(lVar9 + 0xbc) & 0xf000000000000) == 0x2000000000000)) {
        DAT_0314f368 = (int *)lVar9;
        return *(int *)(lVar9 + 8);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 200;
    } while (uVar8 < uVar7);
  }
  if ((DAT_0314f358 & 1) != 0) {
    uVar8 = 0;
    lVar9 = 8;
    bVar5 = 1;
    do {
      if (*(int *)(DAT_0314f350 + lVar9) != -1) {
        lVar1 = DAT_0314f350 + lVar9 + 8;
        uVar3 = FUN_00ceabb4();
        uVar4 = FUN_00e70b34(lVar1,uVar3);
        bVar5 = DAT_0314f358;
        if ((uVar4 & 1) != 0) {
          piVar6 = (int *)(DAT_0314f350 + lVar9);
          DAT_0314f368 = piVar6 + -2;
          goto LAB_00cedecc;
        }
      }
      uVar8 = uVar8 + 1;
      uVar4 = 0x10;
      if ((bVar5 & 1) == 0) {
        uVar4 = 0;
      }
      lVar9 = lVar9 + 200;
      if (uVar4 <= uVar8) {
        return -1;
      }
    } while( true );
  }
LAB_00cedec4:
  piVar6 = &DAT_01bc8f90;
LAB_00cedecc:
  return *piVar6;
}




ulong FUN_00cedf10(void)

{
  ulong uVar1;
  
  if (DAT_0314f360 != 0) {
    return (ulong)(*(byte *)(DAT_0314f360 + 0xc2) & 0xf);
  }
  FUN_00cedce4();
  uVar1 = FUN_00cecb68();
  return uVar1;
}




bool FUN_00cedf3c(void)

{
  int *piVar1;
  
  FUN_00cedce4();
  piVar1 = (int *)FUN_00cecdb0();
  return *piVar1 != -0x7ee3623b && *piVar1 != 0;
}




void FUN_00cedf84(int param_1,uint param_2)

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
        *puVar1 = *puVar1 & 0xf000000000000000 |
                  *puVar1 & 0x7ffffffffffffff | (ulong)(param_2 & 1) << 0x3b;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x19;
    } while (uVar2 < 0x10);
  }
  return;
}




byte FUN_00cedff4(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != -1) && (DAT_0314f358 == '\x01')) {
    uVar2 = 0;
    lVar1 = DAT_0314f350;
    do {
      if (*(int *)(lVar1 + 8) == param_1) {
        if (lVar1 != 0) {
          return *(byte *)(lVar1 + 0xc3) >> 3 & 1;
        }
        return 0;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 200;
    } while (uVar2 < 0x10);
  }
  return 0;
}

