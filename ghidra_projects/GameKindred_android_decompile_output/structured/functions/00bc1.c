// functions/00bc1 — 20 functions
#include "libGameKindred.h"




void FUN_00bc1028(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x1628);
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    uVar5 = 0;
    lVar6 = param_1 + 0x1f0;
    do {
      if (*(short *)(lVar6 + 8) < 0) {
        FUN_00bc2228(lVar6 + -0x148);
        uVar3 = FUN_00cec840();
        thunk_FUN_00e7051c(&local_58,uVar3);
        uVar4 = FUN_00e70b88(&local_58,&DAT_03210450);
        if ((uVar4 & 1) != 0) {
          FUN_00e815b0(&local_58,param_1 + 0x1640);
          FUN_0090470c();
        }
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_58 = 0;
          local_50 = (void *)0x0;
        }
        uVar4 = (ulong)*(byte *)(param_1 + 0x1628);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x158;
    } while (uVar5 < uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc110c(undefined4 param_1,long param_2)

{
  *(byte *)(param_2 + 0x16e8) = *(byte *)(param_2 + 0x16e8) | 8;
  *(undefined4 *)(param_2 + 0x16e4) = param_1;
  return;
}




void FUN_00bc1124(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00bc18fc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x18;
  thunk_FUN_00e7051c(lVar4 + -0x18,param_2);
  *(undefined1 *)(lVar4 + -4) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x10);
  return;
}




void FUN_00bc11c8(long param_1)

{
  FUN_00c0bf84(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc11d0(long param_1)

{
  FUN_00c0bf84(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_00bc11d8(long param_1)

{
  FUN_00c0bfc4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc11e0(long param_1)

{
  FUN_00c0bfc4(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_00bc1724(uint *param_1,uint param_2)

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
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
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




void FUN_00bc17a4(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00bc1724(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00bc182c(long param_1)

{
  FUN_00bc11e8(param_1 + -0x18);
  return;
}




void FUN_00bc1834(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb4e8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc1878(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbc187c);
  (*pcVar1)();
}




void FUN_00bc187c(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x18;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        lVar1 = lVar1 + -0x18;
        puVar2 = puVar2 + 3;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
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




void FUN_00bc18fc(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x18);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x18);
      pvVar6 = pvVar2;
      do {
        thunk_FUN_00e7051c(pvVar6,pvVar3);
        *(undefined1 *)((long)pvVar6 + 0x14) = *(undefined1 *)((long)pvVar3 + 0x14);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x10);
        pvVar3 = (void *)((long)pvVar3 + 0x18);
        *(undefined4 *)((long)pvVar6 + 0x10) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x18);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x18;
        puVar4 = (undefined8 *)((long)pvVar3 + 8);
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            operator_delete__((void *)*puVar4);
            puVar4[-1] = 0;
            *puVar4 = 0;
          }
          lVar5 = lVar5 + -0x18;
          puVar4 = puVar4 + 3;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00bc19e0(uint *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar2 = *param_1;
  iVar3 = (int)((ulong)((long)param_3 - param_2) >> 3);
  if (uVar2 != iVar3 * -0x55555555) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x18);
    lVar1 = (long)puVar6 - (long)param_3;
    lVar5 = param_2;
    if (lVar1 != 0) {
      do {
        FUN_00910394(lVar5,param_3);
        *(undefined1 *)(lVar5 + 0x14) = *(undefined1 *)((long)param_3 + 0x14);
        puVar4 = param_3 + 2;
        param_3 = param_3 + 3;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)puVar4;
        lVar5 = lVar5 + 0x18;
      } while (param_3 != puVar6);
      uVar2 = *param_1;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x18);
    }
    puVar4 = (undefined8 *)(param_2 + ((lVar1 >> 3) * -0x5555555555555555 & 0xffffffffU) * 0x18);
    if (puVar4 != puVar6) {
      do {
        if ((void *)puVar4[1] != (void *)0x0) {
          operator_delete__((void *)puVar4[1]);
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        puVar4 = puVar4 + 3;
      } while (puVar6 != puVar4);
      uVar2 = *param_1;
    }
    *param_1 = uVar2 + iVar3 * 0x55555555;
    return;
  }
  FUN_00bc187c(param_1,1);
  return;
}




void FUN_00bc1afc(undefined8 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb5f8;
  pvVar2 = operator_new(0x9258);
  FUN_00c0d6fc();
  param_1[1] = pvVar2;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_027eb560;
  uVar1 = DAT_03214ce8;
  *(undefined1 *)((long)param_1 + 0x3c) = 0xff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar1;
  FUN_00d9ff2c((long)param_1 + 0x13c);
  *(undefined2 *)(param_1 + 0x2a) = 0xff;
  param_1[0x28] = 0xbf80000000000000;
  param_1[0x29] = 0xffffffff00000000;
  *(byte *)((long)param_1 + 0x152) = *(byte *)((long)param_1 + 0x152) & 0xe0;
  FUN_00bc1bbc(param_1);
  return;
}




void FUN_00bc1bbc(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x144) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x148) = 0xffffffff00000000;
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar2 = *(uint3 *)(param_1 + 0x150) & 0xe09f00;
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  *(char *)(param_1 + 0x152) = (char)(uVar2 >> 0x10);
  *(ushort *)(param_1 + 0x150) = (ushort)uVar2 | 0xff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  do {
    lVar1 = param_1 + lVar4;
    lVar4 = lVar4 + 0x28;
    *(undefined4 *)(lVar1 + 0x40) = 0xffff;
    *(undefined4 *)(lVar1 + 0x44) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x54) = 0xffff;
    *(undefined4 *)(lVar1 + 0x58) = 0xffffffff;
    *(undefined2 *)(lVar1 + 0x50) = 0;
    *(undefined4 *)(lVar1 + 0x5c) = 0;
    *(undefined4 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
  } while (lVar4 != 0xf0);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00c12770(*(undefined8 *)(param_1 + 8));
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




void FUN_00bc1cb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb560;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x58))();
    param_1[2] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027eb5f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc1d1c(void *param_1)

{
  FUN_00bc1cb0();
  operator_delete(param_1);
  return;
}




void FUN_00bc1d40(long param_1,long param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  byte local_88 [16];
  void *local_78;
  undefined4 local_70 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00bc1bbc();
  lVar15 = 0;
  if (param_2 != 0) {
    lVar15 = param_2 + 0x28;
  }
  puVar1 = &DAT_03214ce8;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(lVar15 + 8);
  }
  uVar6 = *puVar1;
  *(long *)(param_1 + 0x18) = lVar15;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  uVar10 = FUN_00ceab64();
  uVar5 = param_5;
  if ((param_2 != 0) && ((uVar10 & 1) != 0)) {
    cVar3 = FUN_00d55870(param_2);
    uVar5 = (uint)(cVar3 == '\x02');
  }
  *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_1 + 0x150);
  *(int *)(param_1 + 0x38) = param_3;
  *(byte *)(param_1 + 0x152) =
       *(byte *)(param_1 + 0x152) & 0xfd | (byte)(((uVar5 & 1) << 0x11) >> 0x10);
  *(char *)(param_1 + 0x3c) = (char)param_4;
  FUN_00c112b0(*(undefined8 *)(param_1 + 8),param_3,param_4,param_5 & 1);
  FUN_00c12530(*(undefined8 *)(param_1 + 8),~param_5 & 1,0);
  lVar15 = *(long *)(param_1 + 8);
  FUN_00ceace8();
  bVar4 = FUN_00ceb05c();
  *(byte *)(lVar15 + 0x924f) = bVar4 & 1;
  uVar16 = *(undefined8 *)(param_1 + 8);
  FUN_00ceace8();
  uVar5 = FUN_00ceb054();
  FUN_00c11ba0(uVar16,uVar5 & 1);
  uVar16 = *(undefined8 *)(param_1 + 8);
  FUN_00ceace8();
  uVar5 = FUN_00ceb064();
  FUN_00c11bb4(uVar16,~uVar5 & 1);
  uVar16 = *(undefined8 *)(param_1 + 8);
  FUN_00ceace8();
  uVar5 = FUN_00ceb064();
  FUN_00c11bc8(uVar16,~uVar5 & 1);
  FUN_00c11e10(*(undefined8 *)(param_1 + 8),(*(byte *)(param_1 + 0x152) & 2) == 0);
  if (param_2 == 0) goto LAB_00bc2198;
  lVar11 = FUN_00d9eae0(param_2);
  lVar15 = 0;
  if (lVar11 != 0) {
    lVar15 = lVar11 + 0x28;
  }
  puVar1 = &DAT_03214ce8;
  if (lVar11 != 0) {
    puVar1 = (undefined4 *)(lVar15 + 8);
  }
  uVar6 = *puVar1;
  *(long *)(param_1 + 0x28) = lVar15;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  FUN_00c125cc(*(undefined8 *)(param_1 + 8),6);
  uVar16 = *(undefined8 *)(param_1 + 8);
  uVar10 = 0;
  lVar15 = param_1 + 0x5c;
  do {
    FUN_00c1142c(0x3f800000,uVar16,uVar10 & 0xffffffff,lVar15);
    FUN_00bc21e0(param_1,uVar10 & 0xffffffff);
    uVar16 = *(undefined8 *)(param_1 + 8);
    uVar10 = uVar10 + 1;
    lVar15 = lVar15 + 0x28;
  } while (uVar10 != 6);
  uVar12 = FUN_00d5bc38(param_2);
  FUN_00c11bdc(uVar16,uVar12);
  local_70[0] = FUN_00d5bab4(param_2);
  lVar15 = FUN_00cc767c(local_70);
  uVar16 = FUN_009e7240();
  uVar12 = FUN_00cece44(*(undefined4 *)(param_2 + 0x260));
  FUN_008fcdb8(local_88,uVar12);
  uVar6 = FUN_009e6cac(uVar16,local_88,*(undefined8 *)(lVar15 + 0x10));
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x923c) = uVar6;
  FUN_00bc2228(param_1);
  uVar10 = FUN_00ced270();
  uVar13 = FUN_0094276c();
  if ((uVar13 & 1) == 0) {
    if ((uVar10 & 1) == 0) goto LAB_00bc1fec;
LAB_00bc1fdc:
    uVar5 = 0;
    iVar7 = 1;
  }
  else {
    iVar7 = FUN_00cedce4();
    iVar8 = FUN_00bc2228(param_1);
    if (iVar7 == iVar8) goto LAB_00bc1fdc;
LAB_00bc1fec:
    FUN_00bc2228(param_1);
    uVar10 = FUN_00ced678();
    if ((uVar10 & 1) == 0) {
      iVar7 = 0;
      uVar5 = 1;
    }
    else {
      FUN_00ceace8();
      uVar5 = FUN_00ceb04c();
      iVar7 = 0;
    }
  }
  FUN_00c126ec(*(undefined8 *)(param_1 + 8),uVar5 & 1);
  uVar16 = *(undefined8 *)(param_1 + 8);
  iVar8 = FUN_00cedce4();
  if (iVar8 == *(int *)(param_2 + 0x260)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if ((param_5 & 1) == 0) {
      uVar5 = FUN_00ceab64();
      uVar5 = uVar5 ^ 1;
    }
  }
  FUN_00c12720(uVar16,uVar5 & 1);
  FUN_00c0ebb8(*(undefined8 *)(param_1 + 8),iVar7);
  if ((((iVar7 != 0) && (uVar10 = FUN_0092e920(), (uVar10 & 1) != 0)) &&
      (uVar10 = FUN_00931d34(), (uVar10 & 1) != 0)) && (uVar10 = FUN_0094276c(), (uVar10 & 1) == 0))
  {
    pvVar14 = operator_new(0x38);
    FUN_00bf16fc();
    uVar6 = 1;
    if (param_3 != 0) {
      uVar6 = 2;
    }
    *(void **)(param_1 + 0x10) = pvVar14;
    FUN_00bf1850(pvVar14,uVar6);
    FUN_00c12738(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  }
  lVar15 = *(long *)(param_2 + 0x18);
  while ((lVar15 != 0 && (*(int *)(*(long *)(lVar15 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar15 = *(long *)(lVar15 + 0x20);
  }
  iVar7 = FUN_00bc22a4(param_2);
  if (-1 < iVar7) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar16 = FUN_00d5bc38(param_2);
    uVar6 = FUN_00d53954(lVar15,iVar7);
    FUN_00c11c58(uVar12,uVar16,uVar6,param_1 + 0x134);
  }
  if ((((uint)*(byte *)(param_1 + 0x152) << 0x10) >> 0x11 & 1) == 0) {
    FUN_00ceace8();
    uVar10 = FUN_00ceb05c();
    if ((uVar10 & 1) == 0) {
      lVar15 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      uVar6 = *(undefined4 *)(lVar15 + 0x260);
      uVar16 = *(undefined8 *)(param_1 + 8);
      uVar9 = FUN_00ced0c8(uVar6);
      uVar6 = FUN_00ced12c(uVar6);
      FUN_00c12090(uVar16,uVar9,uVar6);
    }
  }
  uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x84);
  if ((~uVar5 & 0x7f80) != 0) {
    *(uint *)(*(long *)(param_1 + 8) + 0x84) = uVar5 | 0x7f80;
    FUN_0091ada4();
  }
LAB_00bc2198:
  FUN_00bc2324(param_1);
  FUN_00bc24ac(param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

