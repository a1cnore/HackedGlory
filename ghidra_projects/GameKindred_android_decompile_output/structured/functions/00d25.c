// functions/00d25 — 25 functions
#include "libGameKindred.h"




void FUN_00d250ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  
  lVar5 = param_1 + 0x18;
  uVar2 = FUN_00d25d08(lVar5,param_1 + 0x70,*(undefined4 *)(param_1 + 0x270));
  if ((((uVar2 & 1) != 0) ||
      (uVar2 = FUN_00d25d08(lVar5,param_1 + 0x380,*(undefined4 *)(param_1 + 0x680)),
      (uVar2 & 1) != 0)) ||
     (uVar2 = FUN_00d25d08(lVar5,param_1 + 0x890,*(undefined4 *)(param_1 + 0xa10)), (uVar2 & 1) != 0
     )) {
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
  }
  puVar9 = (uint *)(param_1 + 0x680);
  if (*puVar9 != 0) {
    uVar2 = 0;
    lVar5 = param_1 + 0x380;
    do {
      uVar3 = FUN_00d25d08(lVar5,param_1 + 0x688,*(undefined4 *)(param_1 + 0x888));
      if (((uVar3 & 1) != 0) ||
         (uVar3 = FUN_00d25d08(lVar5,param_1 + 0x278,*(undefined4 *)(param_1 + 0x378)),
         (uVar3 & 1) != 0)) {
        *(byte *)(lVar5 + 0x3c) = *(byte *)(lVar5 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar2 < *puVar9);
  }
  if (*(int *)(param_1 + 0x270) != 0) {
    uVar2 = 0;
    lVar5 = param_1 + 0x70;
    do {
      uVar3 = FUN_00d25d08(lVar5,param_1 + 0x688,*(undefined4 *)(param_1 + 0x888));
      if (((uVar3 & 1) != 0) ||
         (uVar3 = FUN_00d25d08(lVar5,param_1 + 0x278,*(undefined4 *)(param_1 + 0x378)),
         (uVar3 & 1) != 0)) {
        *(byte *)(lVar5 + 0x3c) = *(byte *)(lVar5 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x270));
  }
  if (*(uint *)(param_1 + 0x378) != 0) {
    uVar2 = 0;
    lVar5 = param_1 + 0x278;
    do {
      uVar3 = FUN_00d25d08(lVar5,param_1 + 0x380,*puVar9);
      if ((((uVar3 & 1) != 0) ||
          (uVar3 = FUN_00d25d08(lVar5,param_1 + 0x70,*(undefined4 *)(param_1 + 0x270)),
          (uVar3 & 1) != 0)) ||
         (uVar3 = FUN_00d25d08(lVar5,param_1 + 0x890,*(undefined4 *)(param_1 + 0xa10)),
         (uVar3 & 1) != 0)) {
        *(byte *)(lVar5 + 0x3c) = *(byte *)(lVar5 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x378));
  }
  if (*(int *)(param_1 + 0x1020) != 0) {
    uVar2 = 0;
    lVar5 = param_1 + 0xd20;
    do {
      uVar3 = FUN_00d25d08(lVar5,param_1 + 0x380,*puVar9);
      if (((uVar3 & 1) != 0) ||
         (uVar3 = FUN_00d25d08(lVar5,param_1 + 0x1028,*(undefined4 *)(param_1 + 0x1228)),
         (uVar3 & 1) != 0)) {
        *(byte *)(lVar5 + 0x3c) = *(byte *)(lVar5 + 0x3c) | 8;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x1020));
  }
  if (*(long *)(param_1 + 0x1478) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1480) != *(int *)(*(long *)(param_1 + 0x1478) + 8)) {
    *(undefined8 *)(param_1 + 0x1478) = 0;
    *(undefined4 *)(param_1 + 0x1480) = DAT_03214ce8;
    return;
  }
  plVar7 = (long *)(param_1 + 0x1478);
  uVar2 = FUN_00d25d08(plVar7,param_1 + 0x380,*(undefined4 *)(param_1 + 0x680));
  if (((uVar2 & 1) != 0) ||
     (uVar2 = FUN_00d25d08(plVar7,param_1 + 0x1028,*(undefined4 *)(param_1 + 0x1228)),
     (uVar2 & 1) != 0)) goto LAB_00d25314;
  if (*(char *)(param_1 + 5000) == '\0') {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x1348);
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else if (*(int *)(param_1 + 0x1350) == (int)plVar4[1]) {
    lVar5 = (**(code **)(*plVar4 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x1348) = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x1350) = DAT_03214ce8;
  }
  plVar4 = *(long **)(lVar5 + 0x2b0);
  if (plVar4 == (long *)0x0) {
LAB_00d25470:
    lVar8 = 0;
  }
  else if (*(int *)(lVar5 + 0x2b8) == (int)plVar4[1]) {
    lVar6 = (**(code **)(*plVar4 + 0x10))();
    if (lVar6 == 0) goto LAB_00d25470;
    plVar4 = *(long **)(lVar5 + 0x2b0);
    lVar6 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(lVar5 + 0x2b8) == (int)plVar4[1]) {
        lVar6 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(lVar5 + 0x2b0) = 0;
        lVar6 = 0;
        *(undefined4 *)(lVar5 + 0x2b8) = DAT_03214ce8;
      }
    }
    uVar1 = *(ushort *)(lVar6 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (lVar8 = 0, 1 < *(ushort *)(lVar6 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
      plVar4 = *(long **)(lVar5 + 0x2b0);
      if (plVar4 == (long *)0x0) goto LAB_00d25470;
      if (*(int *)(lVar5 + 0x2b8) != (int)plVar4[1]) goto LAB_00d25478;
      lVar8 = (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
LAB_00d25478:
    *(undefined8 *)(lVar5 + 0x2b0) = 0;
    lVar8 = 0;
    *(undefined4 *)(lVar5 + 0x2b8) = DAT_03214ce8;
  }
  plVar7 = (long *)*plVar7;
  lVar5 = 0;
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1480) == (int)plVar7[1]) {
      lVar5 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x1478) = 0;
      lVar5 = 0;
      *(undefined4 *)(param_1 + 0x1480) = DAT_03214ce8;
    }
  }
  if (lVar8 != lVar5) {
    return;
  }
LAB_00d25314:
  *(byte *)(param_1 + 0x14b4) = *(byte *)(param_1 + 0x14b4) | 8;
  return;
}




void FUN_00d254dc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x195c);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x1938);
      if (iVar2 < 8) {
        uVar1 = *(undefined4 *)(param_1 + 0x1960 + uVar3 * 4);
        *(int *)(param_1 + 0x1938) = iVar2 + 1;
        *(undefined4 *)(param_1 + (long)iVar2 * 4 + 0x193c) = uVar1;
        uVar4 = *(uint *)(param_1 + 0x195c);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined4 *)(param_1 + 0x195c) = 0;
  return;
}




void FUN_00d25528(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_01988c78();
  *(float *)(param_1 + 0x6c) = fVar1 + *(float *)(param_1 + 0x6c);
  return;
}




void FUN_00d25554(long param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}




void FUN_00d2555c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return;
}




undefined8 FUN_00d25570(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)*param_1;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] != (int)plVar1[1]) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  return uVar2;
}




bool FUN_00d255c4(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] != (int)plVar2[1]) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
      return false;
    }
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}




void FUN_00d25620(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined8 FUN_00d25628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00d25630(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)*param_1;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      *param_1 = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  FUN_00d55870(uVar2);
  FUN_00d25ff0();
  return;
}




void FUN_00d2568c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x143c) = *param_2;
  *(undefined4 *)(param_1 + 0x1444) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x1448) = 1;
  uVar1 = FUN_009bc24c();
  *(undefined4 *)(param_1 + 0x144c) = uVar1;
  return;
}




void FUN_00d256d0(long param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1938);
  if (iVar1 < 8) {
    *(int *)(param_1 + 0x1938) = iVar1 + 1;
    *(undefined4 *)(param_1 + (long)iVar1 * 4 + 0x193c) = param_2;
  }
  return;
}




void FUN_00d256f0(long param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1938) < 8) {
    iVar1 = *(int *)(param_1 + 0x195c);
    *(int *)(param_1 + 0x195c) = iVar1 + 1;
    *(undefined4 *)(param_1 + (long)iVar1 * 4 + 0x1960) = param_2;
  }
  return;
}




void FUN_00d25714(long param_1)

{
  *(undefined8 *)(param_1 + 0x1950) = 0;
  *(undefined8 *)(param_1 + 0x1948) = 0;
  *(undefined8 *)(param_1 + 0x1940) = 0;
  *(undefined8 *)(param_1 + 0x1938) = 0;
  *(undefined4 *)(param_1 + 0x1958) = 0;
  return;
}




void FUN_00d25730(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1984) = param_2 & 1;
  return;
}




void FUN_00d25740(long *param_1,int param_2,int param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if ((int)param_1[0x3bb] == param_2) {
    if (param_4 != 0) {
      plVar2 = (long *)param_1[0x3bd];
      lVar3 = 0;
      if (plVar2 != (long *)0x0) {
        if ((int)param_1[0x3be] == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          param_1[0x3bd] = 0;
          lVar3 = 0;
          *(undefined4 *)(param_1 + 0x3be) = DAT_03214ce8;
        }
      }
      if (lVar3 != param_4) goto LAB_00d257cc;
    }
    if (param_3 == -1) {
      return;
    }
    if (*(int *)((long)param_1 + 0x1de4) == param_3) {
      return;
    }
  }
LAB_00d257cc:
  lVar3 = param_1[0x3bb];
  *(int *)(param_1 + 0x3bb) = param_2;
  *(int *)((long)param_1 + 0x1de4) = param_3;
  *(int *)((long)param_1 + 0x1ddc) = (int)lVar3;
  uVar1 = DAT_03214ce8;
  if (param_4 == 0) {
    param_1[0x3bd] = 0;
    *(undefined4 *)(param_1 + 0x3be) = uVar1;
  }
  else {
    plVar2 = (long *)*param_1;
    if (plVar2 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if ((int)param_1[1] == (int)plVar2[1]) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
      plVar4 = plVar2;
    }
    else {
      *param_1 = 0;
      plVar4 = (long *)0x0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
    FUN_00d24960(plVar2,plVar4,param_4,param_1 + 0x3bd);
  }
  *(int *)(param_1 + 0x3bc) = (int)param_1[0x3bc] + 1;
  return;
}




void FUN_00d25870(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x1de8) = 0;
  *(undefined4 *)(param_1 + 0x1df0) = uVar1;
  return;
}




void FUN_00d25888(long param_1,int param_2,int param_3,long *param_4,int param_5)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  switch(param_5) {
  case 2:
    lVar4 = 0x19d0;
    break;
  case 3:
    uVar7 = 0;
    plVar3 = (long *)(param_1 + 0x1a10);
    do {
      plVar8 = plVar3;
      if ((char)plVar8[7] == '\0') break;
      plVar3 = (long *)*plVar8;
      if (plVar3 != (long *)0x0) {
        if ((int)plVar8[1] == (int)plVar3[1]) {
          lVar4 = (**(code **)(*plVar3 + 0x10))();
          if (*(int *)(lVar4 + 0x260) == param_2) break;
        }
        else {
          *plVar8 = 0;
          *(int *)(plVar8 + 1) = DAT_03214ce8;
        }
      }
      uVar7 = uVar7 + 1;
      plVar3 = plVar8 + 8;
    } while (uVar7 < 4);
    goto LAB_00d25900;
  case 4:
    lVar4 = 0x1b10;
    break;
  case 5:
    lVar4 = 0x1b50;
    break;
  case 6:
    lVar4 = 0x1b90;
    break;
  default:
    goto switchD_00d258dc_default;
  }
  plVar8 = (long *)(param_1 + lVar4);
LAB_00d25900:
  lVar4 = FUN_00d9e390(param_2);
  if (lVar4 != 0) {
    local_60 = (undefined4)param_4[1];
    lVar6 = 0;
    local_68 = *param_4;
    if ((param_3 != -1) && (lVar6 = FUN_00d9e390(param_3), lVar6 != 0)) {
      FUN_00d55794(lVar6,&local_68,0);
    }
    iVar2 = DAT_03214ce8;
    uVar10 = *(undefined4 *)(lVar4 + 0x30);
    *plVar8 = lVar4 + 0x28;
    lVar4 = 0;
    if (lVar6 != 0) {
      lVar4 = lVar6 + 0x28;
    }
    *(undefined4 *)(plVar8 + 1) = uVar10;
    if ((lVar6 == 0) || (iVar5 = *(int *)(lVar4 + 8), *(int *)(lVar4 + 8) == iVar2)) {
      iVar5 = iVar2;
    }
    plVar8[2] = lVar4;
    *(int *)(plVar8 + 3) = iVar5;
    *(undefined4 *)(plVar8 + 5) = local_60;
    plVar8[4] = local_68;
    uVar9 = FUN_009bc24c();
    uVar10 = 0x41f00000;
    if (param_5 != 3) {
      uVar10 = 0x42700000;
    }
    *(undefined1 *)(plVar8 + 7) = 1;
    *(undefined4 *)((long)plVar8 + 0x2c) = uVar9;
    *(undefined4 *)(plVar8 + 6) = uVar10;
    *(int *)((long)plVar8 + 0x3c) = param_5;
  }
switchD_00d258dc_default:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d25a78(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float extraout_s0;
  float fVar11;
  undefined8 local_780;
  undefined1 auStack_778 [16];
  undefined1 auStack_768 [96];
  undefined1 auStack_708 [96];
  undefined8 local_6a8 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    uVar6 = 0;
  }
  else if ((int)param_1[1] == (int)plVar5[1]) {
    uVar6 = (**(code **)(*plVar5 + 0x10))();
  }
  else {
    *param_1 = 0;
    uVar6 = 0;
    *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
  }
  plVar5 = (long *)param_1[0x297];
  if (plVar5 == (long *)0x0) {
LAB_00d25b8c:
    FUN_00d55794(uVar6,auStack_778,0);
    FUN_00d4d9e8(auStack_708);
    FUN_00d4d9e8(auStack_768);
    local_780 = 0;
    FUN_00d4dabc(auStack_708,0x8000);
    FUN_00d4daf4(auStack_708,0,1,0,uVar6);
    FUN_00d4d364(auStack_708,0);
    iVar3 = FUN_00d9e840(auStack_708,&local_780,1,0);
    if (iVar3 == 0) goto LAB_00d25cd4;
    FUN_00d4dabc(auStack_768,0x10);
    FUN_00d4daf4(auStack_768,1,0,0,uVar6);
    FUN_00d4d364(auStack_768,0);
    uVar4 = FUN_00d9e840(auStack_768,local_6a8,200,0);
    if (uVar4 != 0) {
      plVar5 = (long *)0x0;
      uVar9 = (ulong)uVar4;
      puVar10 = local_6a8;
      fVar11 = 3.4028235e+38;
      do {
        plVar8 = (long *)FUN_00d9e0c4(*puVar10,local_780);
        if (extraout_s0 < fVar11) {
          plVar5 = (long *)*puVar10;
          fVar11 = extraout_s0;
        }
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + 1;
      } while (uVar9 != 0);
      if (plVar5 != (long *)0x0) goto LAB_00d25ccc;
    }
    uVar2 = DAT_03214ce8;
    param_1[0x297] = 0;
    *(undefined4 *)(param_1 + 0x298) = uVar2;
  }
  else {
    if ((int)param_1[0x298] != (int)plVar5[1]) {
      param_1[0x297] = 0;
      *(undefined4 *)(param_1 + 0x298) = DAT_03214ce8;
      goto LAB_00d25b8c;
    }
    lVar7 = (**(code **)(*plVar5 + 0x10))();
    uVar4 = *(ushort *)(lVar7 + 0x88) & 0x1f;
    if ((uVar4 != 0x1f) && (*(ushort *)(lVar7 + (ulong)uVar4 * 0x38 + 0x90) - 3 < 2))
    goto LAB_00d25b8c;
    plVar8 = (long *)param_1[0x297];
    if (plVar8 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else if ((int)param_1[0x298] == (int)plVar8[1]) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x10))();
      plVar5 = plVar8;
    }
    else {
      param_1[0x297] = 0;
      plVar5 = (long *)0x0;
      *(undefined4 *)(param_1 + 0x298) = DAT_03214ce8;
    }
LAB_00d25ccc:
    FUN_00d24960(plVar8,uVar6,plVar5,param_1 + 0x297);
  }
LAB_00d25cd4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d25d08(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    lVar2 = 0;
  }
  else if ((int)param_1[1] == (int)plVar6[1]) {
    lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  else {
    *param_1 = 0;
    lVar2 = 0;
    *(int *)(param_1 + 1) = DAT_03214ce8;
  }
  if (0 < param_3) {
    lVar8 = 0;
    piVar7 = (int *)(param_2 + 8);
    do {
      plVar6 = *(long **)(piVar7 + -2);
      if (plVar6 == (long *)0x0) {
        lVar3 = 0;
      }
      else if (*piVar7 == (int)plVar6[1]) {
        lVar3 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        piVar7[-2] = 0;
        piVar7[-1] = 0;
        lVar3 = 0;
        *piVar7 = DAT_03214ce8;
      }
      plVar6 = *(long **)(lVar3 + 0x2b0);
      lVar5 = 0;
      if (plVar6 != (long *)0x0) {
        if (*(int *)(lVar3 + 0x2b8) == (int)plVar6[1]) {
          lVar4 = (**(code **)(*plVar6 + 0x10))();
          lVar5 = 0;
          if (lVar4 != 0) {
            plVar6 = *(long **)(lVar3 + 0x2b0);
            lVar4 = 0;
            if (plVar6 != (long *)0x0) {
              if (*(int *)(lVar3 + 0x2b8) == (int)plVar6[1]) {
                lVar4 = (**(code **)(*plVar6 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar3 + 0x2b0) = 0;
                lVar4 = 0;
                *(int *)(lVar3 + 0x2b8) = DAT_03214ce8;
              }
            }
            uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
            if ((uVar1 == 0x1f) ||
               (lVar5 = 0, 1 < *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
              plVar6 = *(long **)(lVar3 + 0x2b0);
              lVar5 = 0;
              if (plVar6 != (long *)0x0) {
                if (*(int *)(lVar3 + 0x2b8) != (int)plVar6[1]) goto LAB_00d25e90;
                lVar5 = (**(code **)(*plVar6 + 0x10))();
              }
            }
          }
        }
        else {
LAB_00d25e90:
          *(undefined8 *)(lVar3 + 0x2b0) = 0;
          lVar5 = 0;
          *(int *)(lVar3 + 0x2b8) = DAT_03214ce8;
        }
      }
      if (lVar5 == lVar2) {
        return 1;
      }
      lVar8 = lVar8 + 1;
      piVar7 = piVar7 + 0x10;
    } while (lVar8 < param_3);
  }
  return 0;
}




void FUN_00d25edc(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x00d25f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar1);
  return;
}




int FUN_00d25f28(long param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1e8);
  piVar2 = (int *)(param_1 + 8);
  if ((ulong)bVar1 == 0) {
    cVar3 = '\x01';
  }
  else {
    uVar4 = 0;
    do {
      if (*piVar2 == param_2) {
        return param_2;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < bVar1);
    cVar3 = bVar1 + 1;
  }
  *piVar2 = param_2;
  *(char *)(param_1 + 0x1e8) = cVar3;
  return param_2;
}




long FUN_00d25f70(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x1e8) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x68;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x1e8));
  }
  return 0;
}




long FUN_00d25fb0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x1e8) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x68;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x1e8));
  }
  return 0;
}




undefined * FUN_00d25ff0(ulong param_1)

{
  return &DAT_03150650 + (param_1 & 0xff) * 0xbf8;
}

