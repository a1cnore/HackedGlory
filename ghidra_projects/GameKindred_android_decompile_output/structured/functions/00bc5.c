// functions/00bc5 — 34 functions
#include "libGameKindred.h"




void FUN_00bc5078(void *param_1)

{
  FUN_00bc4f74();
  operator_delete(param_1);
  return;
}




void FUN_00bc509c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bc50a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}




void FUN_00bc50ac(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    param_1 = param_1 + 0x11;
  }
  else {
    param_1 = *(long *)(param_1 + 0x20);
  }
  FUN_0090dca4(param_1,param_2,0);
  return;
}




void FUN_00bc50cc(undefined8 param_1,undefined8 param_2)

{
  FUN_0090db90(param_2);
  return;
}




void FUN_00bc50d4(undefined8 param_1,undefined8 param_2)

{
  FUN_0090dbac(param_2);
  return;
}




void FUN_00bc50dc(long param_1)

{
  FUN_00bc5104();
  FUN_00c19a0c(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
  return;
}




void FUN_00bc5104(long param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  int extraout_w8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  double dVar14;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar12 = param_1 + 0x11;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x20);
  }
  piVar4 = (int *)FUN_0090ddb0(lVar12);
  iVar9 = extraout_w8;
  if ((piVar4 != (int *)0x0) && (iVar9 = *piVar4, iVar9 == 0)) goto LAB_00bc52f8;
  lVar12 = *(long *)(piVar4 + 2);
  uVar13 = (ulong)(iVar9 - 1);
  lVar10 = lVar12 + uVar13 * 0x88;
  uVar3 = FUN_00e70b04(lVar10);
  bVar1 = *(byte *)(lVar10 + 0x50);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_00bc5190;
LAB_00bc51ac:
    dVar14 = 0.0;
  }
  else {
    if (*(long *)(lVar12 + uVar13 * 0x88 + 0x58) == 0) goto LAB_00bc51ac;
LAB_00bc5190:
    if ((bVar1 & 1) == 0) {
      lVar5 = lVar10 + 0x51;
    }
    else {
      lVar5 = *(long *)(lVar12 + uVar13 * 0x88 + 0x60);
    }
    dVar14 = (double)FUN_00e6bdf4(lVar5);
  }
  puVar11 = &local_68;
  thunk_FUN_00e7051c(&local_68,lVar10);
  uVar6 = FUN_00e70b34(param_1 + 0x38,&local_68);
  if ((uVar6 & 1) != 0) {
    if (*(double *)(param_1 + 0x48) + 300.0 <= dVar14) {
      puVar11 = &local_68;
    }
    else {
      puVar11 = &DAT_03210450;
    }
  }
  FUN_00910394(param_1 + 0x38,&local_68);
  *(double *)(param_1 + 0x48) = dVar14;
  FUN_00910394(&local_68,puVar11);
  pvVar7 = operator_new(0x318);
  lVar12 = lVar12 + uVar13 * 0x88;
  FUN_00c1a3e4(pvVar7,&local_68,lVar12 + 0x10,*(undefined1 *)(lVar12 + 0x81),
               *(undefined1 *)(lVar12 + 0x82),uVar3 & 1);
  local_70 = pvVar7;
  FUN_00bc532c(param_1 + 0x28,&local_70);
  uVar3 = *(uint *)(param_1 + 0x28) - *(uint *)(param_1 + 0x50);
  if ((*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x28) && uVar3 != 0) && (0 < (int)uVar3)) {
    lVar10 = 0;
    lVar12 = 0;
    uVar13 = (ulong)uVar3;
    do {
      plVar8 = *(long **)(*(long *)(param_1 + 0x30) + lVar10);
      if (plVar8 == (long *)0x0) {
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar12 * 8);
      }
      else {
        (**(code **)(*plVar8 + 8))();
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar10);
      }
      lVar12 = lVar12 + 1;
      uVar13 = uVar13 - 1;
      lVar10 = lVar10 + 8;
      *puVar11 = 0;
    } while (uVar13 != 0);
    if (0 < (int)uVar3) {
      FUN_00bc53b4(param_1 + 0x28,*(long *)(param_1 + 0x30),
                   *(long *)(param_1 + 0x30) + (long)(int)uVar3 * 8);
    }
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
LAB_00bc52f8:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc532c(uint *param_1,undefined8 *param_2)

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
    FUN_00bc5520(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bc53b4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_00bc5420(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb728;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc5464(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbc5468);
  (*pcVar1)();
}




void FUN_00bc5468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_70);
  lVar2 = FUN_0090e774(param_1,local_70);
  uStack_50 = 0;
  pcStack_40 = FUN_00bc54f8;
  local_58 = param_3;
  local_48 = param_3;
  FUN_009e4694(lVar2 + 0x10,&local_58);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc54f8(long param_1)

{
  FUN_00bc5104();
  FUN_00c19a0c(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
  return;
}




void FUN_00bc5520(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00bc55a0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_027eb7a0;
  pvVar3 = operator_new(200);
  FUN_00c1a748();
  param_1[1] = pvVar3;
  *(undefined8 **)((long)pvVar3 + 0xb8) = param_1;
  puVar10 = param_1 + 2;
  *puVar10 = &PTR_FUN_027eb778;
  *param_1 = &PTR_FUN_027eb750;
  plVar4 = operator_new(0x168);
  FUN_00bdb170();
  param_1[3] = plVar4;
  FUN_0096bba8(local_60);
  lVar5 = FUN_00e85318(0);
  (**(code **)(*plVar4 + 0x30))(plVar4,local_60,param_2,0,lVar5 + 1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00c1a7bc(param_1[1],*(undefined8 *)(param_1[3] + 8));
  lVar5 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
  lVar6 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))((long *)(param_1[3] + 0x10));
  FUN_0096bce8(lVar5 + 0x600,puVar10,lVar6 + 0x178);
  puVar7 = (uint *)(**(code **)(*(long *)(param_1[3] + 0x10) + 0x28))();
  if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
    plVar4 = *(long **)(puVar7 + 2);
    lVar5 = (ulong)*puVar7 << 3;
    do {
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        pbVar8 = (byte *)FUN_00af6c04(lVar6);
        uVar1 = (ulong)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar8 + 8);
        }
        if (uVar1 != 0) {
          uVar9 = FUN_00af6c04(lVar6);
          FUN_0096bce8(uVar9,puVar10,lVar6);
        }
      }
      lVar5 = lVar5 + -8;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc5744(void)

{
  return;
}




void FUN_00bc5748(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb750;
  param_1[2] = &PTR_FUN_027eb778;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x28))();
  }
  param_1[2] = &PTR_FUN_027e0a68;
  param_1[3] = 0;
  FUN_0096bd60(param_1 + 2);
  *param_1 = &PTR_FUN_027eb7a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc57d4(long param_1)

{
  FUN_00bc5748(param_1 + -0x10);
  return;
}




void FUN_00bc57dc(void *param_1)

{
  FUN_00bc5748();
  operator_delete(param_1);
  return;
}




void FUN_00bc5800(long param_1)

{
  FUN_00bc5748((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bc5828(long param_1)

{
  undefined8 in_x4;
  
  FUN_00af5c10(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00bc5860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 8) + 0x90))();
  return;
}




void FUN_00bc5864(long param_1)

{
  undefined8 in_x4;
  
  FUN_00af5c10(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00bc589c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 8) + 0x90))();
  return;
}




void FUN_00bc58a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb7a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc58e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb7a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc5928(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027eb800;
  pvVar1 = operator_new(200);
  FUN_00c1a82c();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027eb7c0;
  FUN_00e70510(param_1 + 5);
  param_1[7] = 0;
  return;
}




void FUN_00bc598c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = (uint *)param_1[7];
  *param_1 = &PTR_FUN_027eb7c0;
  if (puVar2 != (uint *)0x0) {
    lVar4 = (ulong)*puVar2 << 5;
    puVar1 = *(undefined8 **)(puVar2 + 2);
    do {
      puVar3 = puVar1;
      if (lVar4 == 0) goto LAB_00bc59dc;
      lVar4 = lVar4 + -0x20;
      puVar1 = puVar3 + 4;
    } while ((undefined8 *)*puVar3 != param_1);
    FUN_00910480(puVar2,puVar3);
LAB_00bc59dc:
    param_1[7] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR_FUN_027eb800;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc5a34(void *param_1)

{
  FUN_00bc598c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00bc5a5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_009f739c();
  lVar2 = FUN_009f7adc(uVar1,param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_00c1a904(*(undefined8 *)(param_1 + 8),param_1 + 0x28,param_1 + 0x10,lVar2);
    return;
  }
  return;
}




void FUN_00bc5a5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_009f739c();
  lVar2 = FUN_009f7adc(uVar1,param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_00c1a904(*(undefined8 *)(param_1 + 8),param_1 + 0x28,param_1 + 0x10,lVar2);
    return;
  }
  return;
}




void FUN_00bc5aa8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long local_68 [3];
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = *(uint **)(param_1 + 0x38);
  if (puVar3 != (uint *)0x0) {
    lVar5 = (ulong)*puVar3 << 5;
    plVar2 = *(long **)(puVar3 + 2);
    do {
      plVar4 = plVar2;
      if (lVar5 == 0) goto LAB_00bc5b0c;
      lVar5 = lVar5 + -0x20;
      plVar2 = plVar4 + 4;
    } while (*plVar4 != param_1);
    FUN_00910480(puVar3,plVar4);
LAB_00bc5b0c:
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_008fce60(param_1 + 0x10,param_2);
  FUN_00910394(param_1 + 0x28,param_3);
  FUN_00c1a904(*(undefined8 *)(param_1 + 8),param_1 + 0x28,param_2,param_4);
  *(long *)(param_1 + 0x38) = param_4 + 8;
  local_68[1] = 0;
  pcStack_50 = thunk_FUN_00bc5a5c;
  local_68[0] = param_1;
  local_68[2] = param_1;
  FUN_009e4694(param_4 + 8,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc5b8c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_027eb7e0;
  puVar3 = (uint *)(param_1 + 2);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[3] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    *puVar3 = 0;
    operator_delete__((void *)param_1[3]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_027eb820;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc5c34(void *param_1)

{
  FUN_00bc5b8c();
  operator_delete(param_1);
  return;
}




void FUN_00bc5c58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint local_c0 [2];
  long local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_009f739c();
  if (lVar3 != 0) {
    FUN_008fa54c(&local_80,"reserved_friends");
    lVar4 = FUN_009f7adc(lVar3,&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (lVar4 != 0) {
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS",0);
      thunk_FUN_00e7051c(&local_90,uVar5);
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_FRIENDS",0);
      thunk_FUN_00e7051c(&local_a0,uVar5);
      pvVar6 = operator_new(0x40);
      FUN_00bc5928();
      local_a8 = pvVar6;
      FUN_008fa54c(&local_80,"reserved_friends");
      FUN_008fa54c(local_c0,"reserved_friends");
      uVar5 = FUN_009f7adc(lVar3,local_c0);
      FUN_00bc5aa8(pvVar6,&local_80,&local_a0,uVar5);
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      FUN_00bc62c4(param_1 + 0x10,&local_a8);
      FUN_00c1c94c(*(undefined8 *)(param_1 + 8),&local_90,0,
                   *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x10) - 1) * 8
                              ) + 8),"reserved_friends");
      FUN_009f7a78(lVar3);
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
    }
    FUN_008fa54c(&local_80,"reserved_guild");
    lVar4 = FUN_009f7adc(lVar3,&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (lVar4 != 0) {
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD",0);
      thunk_FUN_00e7051c(&local_90,uVar5);
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_GUILD",0);
      thunk_FUN_00e7051c(&local_a0,uVar5);
      pvVar6 = operator_new(0x40);
      FUN_00bc5928();
      local_a8 = pvVar6;
      FUN_008fa54c(&local_80,"reserved_guild");
      FUN_008fa54c(local_c0,"reserved_guild");
      uVar5 = FUN_009f7adc(lVar3,local_c0);
      FUN_00bc5aa8(pvVar6,&local_80,&local_a0,uVar5);
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      FUN_00bc62c4(param_1 + 0x10,&local_a8);
      FUN_00c1c94c(*(undefined8 *)(param_1 + 8),&local_90,0,
                   *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x10) - 1) * 8
                              ) + 8),"reserved_guild");
      FUN_009f7ac0(lVar3);
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
    }
    FUN_008fa54c(&local_80,"reserved_vainglorious100");
    lVar4 = FUN_009f7adc(lVar3,&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (lVar4 != 0) {
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100",0);
      thunk_FUN_00e7051c(&local_90,uVar5);
      uVar5 = FUN_00e6ce7c("MENU_LEADERBOARDS_LEADERBOARD_TITLE_TOP_100",0);
      thunk_FUN_00e7051c(&local_a0,uVar5);
      FUN_00e705c8(&local_80,"[REGION_NAME]");
      uVar5 = FUN_00966e38();
      FUN_00e71248(&local_a0,0,&local_80,uVar5);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
        local_80 = 0;
        local_78 = (void *)0x0;
      }
      pvVar6 = operator_new(0x40);
      FUN_00bc5928();
      local_a8 = pvVar6;
      FUN_008fa54c(&local_80,"reserved_vainglorious100");
      FUN_008fa54c(local_c0,"reserved_vainglorious100");
      uVar5 = FUN_009f7adc(lVar3,local_c0);
      FUN_00bc5aa8(pvVar6,&local_80,&local_a0,uVar5);
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      FUN_00bc62c4(param_1 + 0x10,&local_a8);
      FUN_00c1c94c(*(undefined8 *)(param_1 + 8),&local_90,0,
                   *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x10) - 1) * 8
                              ) + 8),"reserved_vainglorious100");
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
    }
    lVar4 = FUN_009fa72c();
    if (lVar4 != 0) {
      uVar5 = FUN_009fa72c();
      FUN_009fb34c(local_c0,uVar5,1);
      if (local_c0[0] != 0) {
        uVar10 = 0;
        lVar4 = local_b8;
        uVar8 = local_c0[0];
        do {
          if (*(int *)(lVar4 + uVar10 * 0x98 + 0x48) != 0) {
            uVar11 = 0;
            lVar12 = 0x40;
            do {
              lVar9 = *(long *)(lVar4 + uVar10 * 0x98 + 0x50);
              if ((*(int *)(lVar9 + lVar12 + -0x40) == 1) && (*(int *)(lVar9 + lVar12 + -0x3c) == 1)
                 ) {
                lVar1 = lVar9 + lVar12;
                if ((*(byte *)(lVar1 + -0x38) & 1) == 0) {
                  if (*(byte *)(lVar1 + -0x38) >> 1 != 0) {
LAB_00bc6120:
                    if (*(int *)(lVar9 + lVar12 + -8) != 0) {
                      FUN_008fcdb8(&local_80,*(undefined8 *)(lVar9 + lVar12));
                      lVar4 = FUN_009f7adc(lVar3,&local_80);
                      if (lVar4 != 0) {
                        if ((*(byte *)(lVar1 + -0x38) & 1) == 0) {
                          lVar7 = lVar9 + lVar12 + -0x37;
                        }
                        else {
                          lVar7 = *(long *)(lVar9 + lVar12 + -0x28);
                        }
                        uVar5 = FUN_00e6ce7c(lVar7,0);
                        thunk_FUN_00e7051c(&local_90,uVar5);
                        lVar7 = lVar9 + lVar12;
                        if ((*(byte *)(lVar7 + -0x20) & 1) == 0) {
                          lVar7 = lVar7 + -0x1f;
                        }
                        else {
                          lVar7 = *(long *)(lVar7 + -0x10);
                        }
                        uVar5 = FUN_00e6ce7c(lVar7,0);
                        thunk_FUN_00e7051c(&local_a0,uVar5);
                        pvVar6 = operator_new(0x40);
                        FUN_00bc5928();
                        local_a8 = pvVar6;
                        FUN_00bc5aa8(pvVar6,*(undefined8 *)(lVar9 + lVar12),&local_a0,lVar4);
                        FUN_00bc62c4(param_1 + 0x10,&local_a8);
                        if ((*(byte *)(lVar1 + -0x38) & 1) == 0) {
                          lVar4 = lVar9 + lVar12 + -0x37;
                        }
                        else {
                          lVar4 = *(long *)(lVar9 + lVar12 + -0x28);
                        }
                        FUN_00c1c94c(*(undefined8 *)(param_1 + 8),&local_90,0,
                                     *(undefined8 *)((long)local_a8 + 8),lVar4);
                        if (local_98 != (void *)0x0) {
                          operator_delete__(local_98);
                          local_a0 = 0;
                          local_98 = (void *)0x0;
                        }
                        if (local_88 != (void *)0x0) {
                          operator_delete__(local_88);
                          local_90 = 0;
                          local_88 = (void *)0x0;
                        }
                      }
                      lVar4 = local_b8;
                      if ((local_80 & 1) != 0) {
                        operator_delete(local_70);
                        lVar4 = local_b8;
                      }
                    }
                  }
                }
                else if (*(long *)(lVar1 + -0x30) != 0) goto LAB_00bc6120;
              }
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + 0x58;
              uVar8 = local_c0[0];
            } while (uVar11 < *(uint *)(lVar4 + uVar10 * 0x98 + 0x48));
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar8);
      }
      FUN_00956964(local_c0,1);
    }
    FUN_00c1ca50(*(undefined8 *)(param_1 + 8),0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00bc5a5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_009f739c();
  lVar2 = FUN_009f7adc(uVar1,param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_00c1a904(*(undefined8 *)(param_1 + 8),param_1 + 0x28,param_1 + 0x10,lVar2);
    return;
  }
  return;
}

