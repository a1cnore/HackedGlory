// functions/01981 — 49 functions
#include "libGameKindred.h"




int FUN_01981004(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_02baeae8;
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x80c));
  return iVar1;
}




void FUN_01981020(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baeae8;
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x80c));
  operator_delete(param_1);
  return;
}




int FUN_01981058(long param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar11;
  undefined8 uVar10;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80c));
  lVar5 = -0x800;
  do {
    lVar1 = param_1 + lVar5;
    *(undefined8 *)(lVar1 + 0x820) = *(undefined8 *)(lVar1 + 0x840);
    *(undefined8 *)(lVar1 + 0x818) = *(undefined8 *)(lVar1 + 0x838);
    lVar5 = lVar5 + 0x40;
    *(undefined8 *)(lVar1 + 0x810) = *(undefined8 *)(lVar1 + 0x830);
    *(undefined8 *)(lVar1 + 0x808) = *(undefined8 *)(lVar1 + 0x828);
  } while (lVar5 != 0);
  iVar9 = 0;
  iVar11 = 0;
  lVar5 = 0x20;
  do {
    plVar2 = (long *)(param_1 + lVar5);
    lVar5 = lVar5 + 0x80;
    lVar1 = -(ulong)(*plVar2 == 0);
    lVar4 = -(ulong)((long)*(unkbyte9 *)(plVar2 + 8) == 0);
    iVar9 = iVar9 - CONCAT13(~(byte)((ulong)lVar1 >> 0x18),
                             CONCAT12(~(byte)((ulong)lVar1 >> 0x10),
                                      CONCAT11(~(byte)((ulong)lVar1 >> 8),~(byte)lVar1)));
    iVar11 = iVar11 - CONCAT13(~(byte)((ulong)lVar4 >> 0x18),
                               CONCAT12(~(byte)((ulong)lVar4 >> 0x10),
                                        CONCAT11(~(byte)((ulong)lVar4 >> 8),~(byte)lVar4)));
  } while (lVar5 != 0x7a0);
  iVar9 = iVar9 + iVar11;
  lVar5 = 0;
  do {
    plVar2 = (long *)(param_1 + 0x7a0 + lVar5);
    lVar5 = lVar5 + 0x40;
    if (*plVar2 != 0) {
      iVar9 = iVar9 + 1;
    }
  } while (lVar5 != 0x80);
  lVar5 = 0;
  *(int *)(param_1 + 0x808) = iVar9;
  do {
    if ((*(byte *)(param_1 + lVar5 + 0x28) & 1) == 0) {
      *(undefined8 *)(param_1 + lVar5 + 0x40) = 0;
    }
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    if (*(long *)(lVar1 + 0x40) != 0) {
      uVar3 = *(uint *)(lVar1 + 0x28);
      uVar7 = uVar3 & 0xfffffffe;
      if (uVar3 < 0xfffffff8) {
        uVar7 = uVar3 + 8;
      }
      *(uint *)(lVar1 + 0x28) = uVar7;
    }
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x800);
  uVar6 = 0;
  uVar7 = 0;
  puVar8 = (undefined8 *)(param_1 + 0x28);
  do {
    if (puVar8[3] != 0) {
      uVar10 = puVar8[2];
      lVar5 = param_1 + (ulong)uVar7 * 0x40;
      *(undefined8 *)(lVar5 + 0x40) = puVar8[3];
      *(undefined8 *)(lVar5 + 0x38) = uVar10;
      uVar10 = *puVar8;
      *(undefined8 *)(lVar5 + 0x30) = puVar8[1];
      *(undefined8 *)(lVar5 + 0x28) = uVar10;
      if (uVar6 != uVar7) {
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 2) = 0;
      }
      uVar7 = uVar7 + 1;
    }
    uVar6 = uVar6 + 1;
    puVar8 = puVar8 + 8;
  } while (uVar6 != 0x20);
  iVar9 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80c));
  return iVar9;
}




void FUN_019811e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    if (*(long *)(lVar1 + 0x20) == 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x800);
  return;
}




void FUN_01981214(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + (ulong)param_2 * 0x20 + lVar2;
    lVar2 = lVar2 + 0x40;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
  } while (lVar2 != 0x800);
  if (param_2 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x808) = 0;
  return;
}




undefined4 FUN_0198124c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x808);
}




long FUN_01981254(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  plVar3 = (long *)(param_1 + 0x20);
  do {
    if (*plVar3 != 0) {
      if (uVar2 == param_2) {
        param_2 = (uint)uVar1;
        break;
      }
      uVar2 = uVar2 + 1;
    }
    uVar1 = uVar1 + 1;
    plVar3 = plVar3 + 8;
  } while (uVar1 < 0x20);
  return param_1 + (ulong)param_2 * 0x40 + 8;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0198129c(void)

{
  DAT_03214400 = 0;
  DAT_0321440c = 0;
  _DAT_03214404 = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019812b4(void)

{
  DAT_03214400 = 0;
  DAT_0321440c = 0;
  _DAT_03214404 = 0;
  return;
}




void FUN_019812cc(void)

{
  FUN_019812ec(0x3727c5ac);
  FUN_019813ec(0x40a00000);
  return;
}




void FUN_019812ec(float param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  float __x;
  
  iVar1 = FUN_019807b8();
  if (iVar1 == 2) {
    puVar2 = (uint *)FUN_019807cc(0);
    puVar3 = (uint *)FUN_019807cc(1);
    __x = ((float)puVar2[1] - (float)puVar3[1]) * ((float)puVar2[1] - (float)puVar3[1]) +
          ((float)puVar2[2] - (float)puVar3[2]) * ((float)puVar2[2] - (float)puVar3[2]);
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    if ((((0xf < (int)*puVar2) && ((*puVar2 & 1) != 0)) && (0xf < (int)*puVar3)) &&
       ((*puVar3 & 1) != 0)) {
      DAT_03214408 = fVar4 - DAT_03214404;
    }
    DAT_03214404 = fVar4;
    if (((0xf < (int)*puVar2) && ((*puVar2 & 1) != 0)) &&
       ((0xf < (int)*puVar3 && ((*puVar3 & 1) != 0)))) {
      DAT_03214400 = param_1 < ABS(DAT_03214408);
    }
  }
  else {
    DAT_03214400 = 0;
    DAT_03214404 = 0.0;
    DAT_03214408 = 0.0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019813ec(float param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  iVar3 = FUN_019807b8();
  if (iVar3 == 0) {
    DAT_0321440c = 0;
    _DAT_03214418 = 0;
    DAT_03214420 = 0;
    return;
  }
  puVar4 = (uint *)FUN_019807cc(0);
  uVar1 = *puVar4;
  uVar7 = *(undefined8 *)(puVar4 + 1);
  if ((int)uVar1 >> 3 != 1) {
    if ((int)uVar1 >> 3 != -1) {
      if ((int)uVar1 < 0x10) {
        return;
      }
      if ((uVar1 & 1) == 0) {
        return;
      }
      fVar6 = (float)((ulong)uVar7 >> 0x20);
      if (DAT_0321440c != '\0') {
        fVar5 = (float)_DAT_03214418;
        uVar2 = (ulong)_DAT_03214418 >> 0x20;
        _DAT_03214418 = uVar7;
        DAT_03214420 = CONCAT44(fVar6 - (float)uVar2,(float)uVar7 - fVar5);
        return;
      }
      fVar5 = (float)uVar7 - DAT_03214410;
      fVar6 = fVar6 - DAT_03214414;
      fVar5 = fVar5 * fVar5 + fVar6 * fVar6;
      fVar6 = SQRT(fVar5);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar5);
      }
      if (fVar6 <= param_1) {
        return;
      }
      DAT_0321440c = 1;
      _DAT_03214418 = uVar7;
      DAT_03214420 = 0;
      return;
    }
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  _DAT_03214410 = uVar7;
  return;
}




void FUN_019814e8(void)

{
  DAT_03214400 = 0;
  DAT_03214404 = 0;
  DAT_03214408 = 0;
  return;
}




void FUN_019814fc(void)

{
  DAT_0321440c = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0198150c(void)

{
  DAT_03214400 = 0;
  DAT_0321440c = 0;
  _DAT_03214404 = 0;
  return;
}




undefined4 FUN_01981524(void)

{
  return DAT_03214408;
}




undefined1 FUN_01981534(void)

{
  return DAT_03214400;
}




bool FUN_01981540(ulong param_1)

{
  if ((DAT_03214400 != '\0') && ((param_1 & 1) != 0)) {
    return false;
  }
  return DAT_0321440c != '\0';
}




undefined8 FUN_01981574(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (DAT_0321440c != '\0') {
    *param_1 = DAT_03214410;
    *param_2 = DAT_03214414;
    *param_3 = DAT_03214418;
    *param_3 = DAT_0321441c;
    return 1;
  }
  return 0;
}




void FUN_019815b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baeb08;
  FUN_0198095c();
  return;
}




void FUN_019815c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baeb08;
  FUN_0198095c();
  operator_delete(param_1);
  return;
}




void FUN_019815fc(void)

{
  return;
}




void FUN_01981600(void)

{
  return;
}




void FUN_01981604(void)

{
  return;
}




void FUN_01981608(void)

{
  return;
}




void FUN_0198160c(void)

{
  return;
}




void FUN_01981610(void)

{
  return;
}




void FUN_01981614(void)

{
  return;
}




void FUN_01981618(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  param_1[1] = 1;
  param_1[2] = param_4;
  *(undefined1 *)((long)param_1 + 0xd) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = param_6;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 3) = 0xff;
  param_1[4] = param_3;
  return;
}




void FUN_0198163c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  param_1[1] = 2;
  param_1[2] = param_4;
  *(undefined1 *)((long)param_1 + 0xd) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = param_6;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 3) = 0xff;
  param_1[4] = param_3;
  return;
}




void FUN_01981660(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 3;
  param_1[2] = param_4;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = 0xff;
  param_1[4] = param_3;
  return;
}




void FUN_01981680(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_50;
  void *pvStack_48;
  undefined8 local_40;
  void *local_38;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 8;
  local_30[0] = param_2;
  uVar2 = FUN_0198171c(param_1,local_30);
  if ((uVar2 & 1) == 0) {
    pvStack_48 = (void *)0x0;
    local_50 = 0;
    local_38 = (void *)0x0;
    local_40 = 0;
    FUN_01981784(param_1,local_30,&local_50);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
      local_40 = 0;
      local_38 = (void *)0x0;
    }
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
      local_50 = 0;
      pvStack_48 = (void *)0x0;
    }
  }
  FUN_01981864(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0198171c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar2) break;
        iVar4 = (int)uVar5;
        uVar3 = iVar4 - 1;
        uVar5 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
    }
    if ((int)uVar1 <= (int)uVar5) {
      return false;
    }
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
      if (uVar2 <= uVar3) {
        return uVar3 == uVar2;
      }
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar3;
    } while ((int)uVar3 < (int)uVar1);
  }
  return false;
}




void FUN_01981784(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c = *param_2;
  uVar1 = *param_1;
  lVar4 = *(long *)(param_1 + 2);
  if (uVar1 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar1 * (ulong)local_3c >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)local_3c >> 0x20)) {
      do {
        if (*(uint *)(lVar4 + uVar6 * 4) <= local_3c) break;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
    }
    while ((iVar5 = (int)uVar6, iVar5 < (int)uVar1 && (*(uint *)(lVar4 + uVar6 * 4) < local_3c))) {
      uVar6 = (ulong)(iVar5 + 1);
    }
  }
  FUN_0091f770(param_1,lVar4 + (long)iVar5 * 4,&local_3c,&local_38);
  FUN_01981fa0(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar5 * 0x20,param_3,param_3 + 0x20);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_01981864(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar2) break;
        iVar4 = (int)uVar5;
        uVar3 = iVar4 - 1;
        uVar5 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
    }
    for (; ((int)uVar5 < (int)uVar1 && (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) < uVar2));
        uVar5 = (ulong)((int)uVar5 + 1)) {
    }
  }
  return *(long *)(param_1 + 6) + uVar5 * 0x20;
}




void FUN_019818cc(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01981680(param_1,*param_2);
  FUN_019818f4(uVar1,param_2);
  return;
}




void FUN_019818f4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_01982430(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x14;
  *(undefined4 *)(lVar2 + -4) = *(undefined4 *)(param_2 + 2);
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0xc) = param_2[1];
  *(undefined8 *)(lVar2 + -0x14) = uVar5;
  return;
}




void FUN_01981988(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_3;
  uStack_30 = param_4;
  lVar2 = FUN_01981680(param_1,param_2);
  FUN_019819e0(lVar2 + 0x10,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019819e0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_019824c0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_01981a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
  FUN_019819e0(param_1 + 0x28,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01981ab8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  FUN_019822d4(param_1 + 0x18,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




undefined8 FUN_01981af8(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0198057c();
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_01980590(0);
    uVar3 = 0;
    if ((uVar2 & 1) != 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        uVar2 = FUN_019805d4(*(undefined4 *)(param_2 + 8));
      }
      else {
        if (*(int *)(param_2 + 0x10) != 1) {
          return 0;
        }
        uVar2 = FUN_019805b4(*(undefined4 *)(param_2 + 8));
      }
      uVar3 = 0;
      if ((uVar2 & 1) != 0) {
        *param_4 = 0;
        uVar1 = *(undefined4 *)(param_2 + 8);
        uVar3 = 1;
        *(undefined1 *)(param_4 + 2) = 0;
        param_4[1] = uVar1;
      }
    }
  }
  return uVar3;
}




undefined8 FUN_01981b80(undefined8 param_1,long param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_01980614();
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_01980628(0);
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      iVar2 = *(int *)(param_2 + 0x10);
      if (iVar2 == 0) {
        uVar4 = FUN_01980664(*(undefined4 *)(param_2 + 8));
      }
      else if (iVar2 == 2) {
        uVar4 = FUN_01980684(*(undefined4 *)(param_2 + 8));
      }
      else {
        if (iVar2 != 1) {
          return 0;
        }
        uVar4 = FUN_01980644(*(undefined4 *)(param_2 + 8));
      }
      uVar5 = 0;
      if ((uVar4 & 1) != 0) {
        if ((*(byte *)(param_2 + 0xd) & (*param_3 ^ 0xff)) == 0) {
          bVar1 = *param_3 & (*(byte *)(param_2 + 0xd) ^ 0xff);
          uVar5 = 0;
          if ((bVar1 & *(byte *)(param_2 + 0xe)) == bVar1) {
            uVar5 = 1;
            *param_4 = 1;
            uVar3 = *(undefined4 *)(param_2 + 8);
            *(undefined2 *)(param_4 + 1) = 0;
            param_4[2] = uVar3;
            *(byte *)(param_4 + 3) = *param_3;
          }
        }
        else {
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}




undefined8 FUN_01981c64(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01980b08();
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      uVar1 = FUN_01980b3c(*(undefined4 *)(param_2 + 8));
    }
    else {
      if (*(int *)(param_2 + 0x10) != 1) {
        return 0;
      }
      uVar1 = FUN_01980b1c(*(undefined4 *)(param_2 + 8));
    }
    uVar2 = 0;
    if ((uVar1 & 1) != 0) {
      *param_4 = 3;
      uVar2 = 1;
      param_4[1] = *(undefined4 *)(param_2 + 8);
    }
  }
  return uVar2;
}




void FUN_01981cdc(undefined8 param_1,long param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_019806a4();
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 == 0) {
      uVar4 = FUN_019806d8(*(undefined4 *)(param_2 + 8));
    }
    else if (iVar2 == 2) {
      uVar4 = FUN_019806f8(*(undefined4 *)(param_2 + 8));
    }
    else {
      uVar5 = 0;
      if (iVar2 != 1) goto LAB_01981dd4;
      uVar4 = FUN_019806b8(*(undefined4 *)(param_2 + 8));
    }
    uVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if ((*(byte *)(param_2 + 0xd) & (*param_3 ^ 0xff)) == 0) {
        bVar1 = *param_3 & (*(byte *)(param_2 + 0xd) ^ 0xff);
        uVar5 = 0;
        if ((bVar1 & *(byte *)(param_2 + 0xe)) == bVar1) {
          FUN_01980738(&local_3c,&local_40,auStack_44,auStack_48);
          *param_4 = 2;
          uVar5 = 1;
          param_4[1] = *(undefined4 *)(param_2 + 8);
          *(byte *)(param_4 + 2) = *param_3;
          param_4[3] = local_3c;
          param_4[4] = local_40;
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
LAB_01981dd4:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




undefined8 FUN_01981dfc(void)

{
  return 0;
}




undefined8 FUN_01981e04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    uVar1 = FUN_01981af8();
    return uVar1;
  case 1:
    uVar1 = FUN_01981b80();
    return uVar1;
  case 2:
    uVar1 = FUN_01981cdc();
    return uVar1;
  case 3:
    uVar1 = FUN_01981c64();
    return uVar1;
  default:
    return 0;
  }
}




void FUN_01981e3c(ulong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 != 0) {
    uVar6 = 0;
    uVar4 = param_1;
    do {
      puVar1 = (uint *)(*(long *)(param_1 + 0x20) + uVar6 * 0x20);
      if (*puVar1 != 0) {
        uVar10 = 0;
        do {
          lVar7 = *(long *)(puVar1 + 2) + uVar10 * 0x14;
          uVar4 = FUN_01981e04(uVar4,lVar7,param_2,auStack_80);
          if ((uVar4 & 1) != 0) {
            if (puVar1[4] != 0) {
              lVar8 = 0;
              uVar9 = 0;
              do {
                uVar4 = (*(code *)((undefined8 *)(*(long *)(puVar1 + 6) + lVar8))[1])
                                  (*(undefined8 *)(*(long *)(puVar1 + 6) + lVar8),lVar7,auStack_80);
                uVar9 = uVar9 + 1;
                lVar8 = lVar8 + 0x10;
              } while (uVar9 < puVar1[4]);
            }
            if (*(int *)(param_1 + 0x28) != 0) {
              lVar8 = 0;
              uVar9 = 0;
              do {
                puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar8);
                uVar4 = (*(code *)puVar2[1])(*puVar2,lVar7,auStack_80);
                uVar9 = uVar9 + 1;
                lVar8 = lVar8 + 0x10;
              } while (uVar9 < *(uint *)(param_1 + 0x28));
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *puVar1);
        iVar5 = *(int *)(param_1 + 8);
      }
      uVar10 = uVar6 + 1;
      uVar6 = uVar10 & 0xffffffff;
    } while (iVar5 != (int)uVar10);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_01981fa0(uint *param_1,void *param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    pvVar9 = *(void **)(param_1 + 2);
    uVar13 = param_4 - param_3;
    uVar6 = (uint)(uVar13 >> 5);
    uVar5 = (long)param_2 - (long)pvVar9;
    if (uVar4 - uVar1 < uVar6) {
      uVar1 = uVar1 + uVar6;
      if (uVar4 < 0x20) {
        uVar4 = uVar4 << 1;
      }
      else if (uVar4 == 0xffffffff) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uVar4 + 0x10) - (uVar4 & 0xf);
      }
      uVar6 = uVar1;
      if (uVar1 <= uVar4) {
        uVar6 = uVar4;
      }
      pvVar3 = operator_new__((ulong)uVar6 << 5);
      pvVar10 = pvVar3;
      for (; pvVar9 != param_2; pvVar9 = (void *)((long)pvVar9 + 0x20)) {
        FUN_0198235c(pvVar10,pvVar9);
        FUN_019823cc((long)pvVar10 + 0x10,(long)pvVar9 + 0x10);
        pvVar10 = (void *)((long)pvVar10 + 0x20);
      }
      pvVar10 = (void *)((long)pvVar3 + (uVar5 >> 5 & 0xffffffff) * 0x20);
      pvVar9 = pvVar10;
      do {
        FUN_0198235c(pvVar9,param_3);
        FUN_019823cc((long)pvVar9 + 0x10,param_3 + 0x10);
        param_3 = param_3 + 0x20;
        pvVar9 = (void *)((long)pvVar9 + 0x20);
      } while (param_3 != param_4);
      pvVar9 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
      if (pvVar9 != param_2) {
        pvVar7 = (void *)((long)pvVar10 + (uVar13 >> 5 & 0xffffffff) * 0x20);
        do {
          FUN_0198235c(pvVar7,param_2);
          FUN_019823cc((long)pvVar7 + 0x10,(long)param_2 + 0x10);
          param_2 = (void *)((long)param_2 + 0x20);
          pvVar7 = (void *)((long)pvVar7 + 0x20);
        } while (param_2 != pvVar9);
      }
      FUN_019822d4(param_1,1);
      *(void **)(param_1 + 2) = pvVar3;
      *param_1 = uVar1;
      param_1[1] = uVar6;
      param_2 = pvVar10;
    }
    else {
      pvVar9 = (void *)((long)pvVar9 + (ulong)uVar1 * 0x20);
      uVar12 = (long)pvVar9 - (long)param_2;
      uVar13 = uVar13 >> 5 & 0xffffffff;
      if (uVar6 < (uint)(uVar12 >> 5)) {
        if (uVar13 != 0) {
          pvVar10 = pvVar9;
          do {
            pvVar3 = (void *)((long)pvVar10 + uVar13 * -0x20);
            FUN_0198235c(pvVar10,pvVar3);
            FUN_019823cc((long)pvVar10 + 0x10,(long)pvVar3 + 0x10);
            pvVar10 = (void *)((long)pvVar10 + 0x20);
          } while ((void *)((long)pvVar3 + 0x20) != pvVar9);
          pvVar9 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20 + uVar13 * -0x20);
        }
        lVar11 = (long)pvVar9 - (long)param_2;
        if (lVar11 != 0) {
          lVar8 = (long)pvVar9 + -0x10;
          do {
            lVar2 = lVar11 + uVar13 * 0x20;
            FUN_01982544((long)param_2 + lVar2 + -0x20,lVar8 + -0x10);
            FUN_019825cc((long)param_2 + lVar2 + -0x10,lVar8);
            lVar11 = lVar11 + -0x20;
            lVar8 = lVar8 + -0x20;
          } while (lVar11 != 0);
        }
        do {
          FUN_01982544(param_2,param_3);
          FUN_019825cc((long)param_2 + 0x10,param_3 + 0x10);
          param_3 = param_3 + 0x20;
          param_2 = (void *)((long)param_2 + 0x20);
        } while (param_3 != param_4);
      }
      else {
        if (pvVar9 != param_2) {
          pvVar10 = param_2;
          do {
            pvVar3 = (void *)((long)pvVar10 + uVar13 * 0x20);
            FUN_0198235c(pvVar3,pvVar10);
            FUN_019823cc((long)pvVar3 + 0x10,(long)pvVar10 + 0x10);
            pvVar10 = (void *)((long)pvVar10 + 0x20);
          } while (pvVar10 != pvVar9);
          pvVar9 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
        }
        uVar13 = uVar12 >> 5 & 0xffffffff;
        lVar8 = param_3 + uVar13 * 0x20;
        for (lVar11 = lVar8; lVar11 != param_4; lVar11 = lVar11 + 0x20) {
          FUN_0198235c(pvVar9,lVar11);
          FUN_019823cc((long)pvVar9 + 0x10,lVar11 + 0x10);
          pvVar9 = (void *)((long)pvVar9 + 0x20);
        }
        if (uVar13 != 0) {
          do {
            FUN_01982544(param_2,param_3);
            FUN_019825cc((long)param_2 + 0x10,param_3 + 0x10);
            param_3 = param_3 + 0x20;
            param_2 = (void *)((long)param_2 + 0x20);
          } while (param_3 != lVar8);
        }
      }
      param_2 = (void *)(*(long *)(param_1 + 2) + (uVar5 >> 5 & 0xffffffff) * 0x20);
      *param_1 = *param_1 + uVar6;
    }
  }
  return param_2;
}

