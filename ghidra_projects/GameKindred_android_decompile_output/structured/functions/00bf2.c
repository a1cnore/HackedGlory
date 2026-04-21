// functions/00bf2 — 59 functions
#include "libGameKindred.h"




void FUN_00bf2000(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0092e920();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00931cd0(param_2), lVar2 != 0)) {
    FUN_00931ff8(lVar2,1);
    FUN_00c669f4(*(undefined8 *)(param_1 + 8),param_2,1);
    return;
  }
  return;
}




void FUN_00bf2054(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0092e920();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00931cd0(param_2), lVar2 != 0)) {
    FUN_00931ff8(lVar2,0);
    FUN_00c669f4(*(undefined8 *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}




void FUN_00bf20a8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f0080;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf20ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf20f0);
  (*pcVar1)();
}




void FUN_00bf20f0(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f0560;
  pvVar2 = operator_new(0x2ca8);
  FUN_00c66df4();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027f00f0;
  param_1[2] = &PTR_FUN_027f0158;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &UNK_027f0548;
  param_1[5] = &PTR_FUN_027f04f0;
  piVar8 = (int *)(param_1 + 9);
  piVar8[0] = 0;
  piVar8[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  pvVar2 = operator_new(0x38);
  FUN_00bf71e0();
  local_70[0] = (long)pvVar2 + 0x28;
  FUN_00bf2458(piVar8,local_70);
  pvVar2 = operator_new(0x38);
  FUN_00bf2c00();
  local_70[0] = (long)pvVar2 + 0x28;
  FUN_00bf2458(piVar8,local_70);
  pvVar2 = operator_new(0x38);
  FUN_00bf2fe4();
  local_70[0] = (long)pvVar2 + 0x28;
  FUN_00bf2458(piVar8,local_70);
  pvVar2 = operator_new(0x48);
  FUN_00bf6dfc();
  local_70[0] = (long)pvVar2 + 0x28;
  FUN_00bf2458(piVar8,local_70);
  pvVar2 = operator_new(0x40);
  FUN_00bf5f3c();
  local_70[0] = (long)pvVar2 + 0x28;
  FUN_00bf2458(piVar8,local_70);
  pvVar2 = operator_new(0x40);
  FUN_00bf62e0();
  local_70[0] = (long)pvVar2 + 0x28;
  FUN_00bf2458(piVar8,local_70);
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    pvVar2 = operator_new(0x40);
    FUN_00bf3c6c();
    local_70[0] = (long)pvVar2 + 0x28;
    FUN_00bf2458(piVar8,local_70);
    pvVar2 = operator_new(0x50);
    FUN_00bf5314();
    local_70[0] = (long)pvVar2 + 0x28;
    param_1[0xb] = pvVar2;
    FUN_00bf2458(piVar8,local_70);
    pvVar2 = operator_new(0x40);
    FUN_00bf4b5c();
    local_70[0] = (long)pvVar2 + 0x28;
    FUN_00bf2458(piVar8,local_70);
    pvVar2 = operator_new(0x50);
    FUN_00bf4004();
    local_70[0] = (long)pvVar2 + 0x28;
    FUN_00bf2458(piVar8,local_70);
  }
  if (*piVar8 != 0) {
    uVar3 = 0;
    do {
      uVar4 = (**(code **)(**(long **)(param_1[10] + uVar3 * 8) + 0x10))();
      uVar9 = param_1[1];
      plVar7 = *(long **)(param_1[10] + uVar3 * 8);
      uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7);
      plVar7 = *(long **)(param_1[10] + uVar3 * 8);
      uVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
      FUN_00c67934(uVar9,uVar5,0,uVar4,uVar6);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 9));
  }
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00c6ec94(*(undefined8 *)(param_1[0xb] + 8));
    FUN_008fcdb8(local_70,uVar4);
    pvVar2 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar2 = local_60;
    }
    FUN_008ffc4c("blueprintsOwned",pvVar2,1);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  FUN_00c679b0(param_1[1],0);
  FUN_009580b8();
  FUN_009620d8();
  FUN_00aa218c(param_1 + 6,"TALENTS",param_1,FUN_00bf2bac);
  FUN_00aa218c(param_1 + 6,"HERO",param_1,FUN_00bf2be8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf2458(uint *param_1,undefined8 *param_2)

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
    FUN_00bf2b2c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bf24e0(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_027f00f0;
  param_1[2] = &PTR_FUN_027f0158;
  param_1[6] = &UNK_027f0548;
  param_1[5] = &PTR_FUN_027f04f0;
  param_1[0xb] = 0;
  puVar4 = (uint *)(param_1 + 9);
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      plVar1 = *(long **)(param_1[10] + lVar5);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[10] + uVar6 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 9);
        puVar3 = (undefined8 *)(param_1[10] + lVar5);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
      *puVar3 = 0;
    } while (uVar6 < uVar2);
  }
  if ((void *)param_1[10] != (void *)0x0) {
    *puVar4 = 0;
    operator_delete__((void *)param_1[10]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[10] = 0;
  }
  param_1[6] = &PTR_FUN_027e76c0;
  FUN_00b7d304(param_1 + 7,1);
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f0560;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf25f4(long param_1)

{
  FUN_00bf24e0(param_1 + -0x10);
  return;
}




void FUN_00bf25fc(void *param_1)

{
  FUN_00bf24e0();
  operator_delete(param_1);
  return;
}




void FUN_00bf2620(long param_1)

{
  FUN_00bf24e0((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf2648(void)

{
  FUN_009580b8();
  FUN_009620d8();
  return;
}




void FUN_00bf265c(void)

{
  FUN_009580b8();
  FUN_009620d8();
  return;
}




void FUN_00bf2670(void)

{
  FUN_009580b8();
  FUN_009620d8();
  return;
}




void FUN_00bf2684(void)

{
  FUN_00e6ce7c("MAIN_MENU_BAG",0);
  return;
}




void FUN_00bf26a4(void)

{
  FUN_00e6ce7c("MAIN_MENU_BAG",0);
  return;
}




void FUN_00bf26c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar2 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x50) + uVar2 * 8) + 0x18))();
      FUN_00b1a8e8(param_2,uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x48));
  }
  return;
}




void FUN_00bf2728(long param_1)

{
  FUN_00bf26c4(param_1 + -0x28);
  return;
}




undefined8 FUN_00bf2730(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
  FUN_00c679cc(uVar2,uVar1);
  return 0;
}




undefined8 FUN_00bf276c(undefined8 param_1,long param_2)

{
  void *pvVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  byte local_68 [16];
  void *local_58;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_008fa54c(local_50,&DAT_01e26823);
  pbVar8 = *(byte **)(param_2 + 8);
  uVar5 = *(ulong *)(pbVar8 + 8);
  pbVar2 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar2 = pbVar8 + 1;
    uVar5 = (ulong)(*pbVar8 >> 1);
  }
  FUN_0090de84(local_50,pbVar2,uVar5);
  FUN_0090de84(local_50,&DAT_01e26823,1);
  uVar9 = (ulong)(local_50[0] >> 1);
  uVar5 = uVar9;
  if ((local_50[0] & 1) != 0) {
    uVar5 = local_48;
  }
  if (uVar5 == 6) {
    iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"*Taka*",6);
    if (iVar4 != 0) {
      uVar9 = (ulong)(local_50[0] >> 1);
      goto LAB_00bf282c;
    }
    pcVar7 = "*Sayoc*";
  }
  else {
LAB_00bf282c:
    uVar5 = uVar9;
    if ((local_50[0] & 1) != 0) {
      uVar5 = local_48;
    }
    if (uVar5 == 6) {
      iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"*Krul*",6);
      if (iVar4 == 0) {
        pcVar7 = "*Hero009*";
        goto LAB_00bf2908;
      }
      uVar9 = (ulong)(local_50[0] >> 1);
    }
    uVar5 = uVar9;
    if ((local_50[0] & 1) != 0) {
      uVar5 = local_48;
    }
    if (uVar5 == 8) {
      iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"*Skaarf*",8);
      if (iVar4 == 0) {
        pcVar7 = "*Hero010*";
        goto LAB_00bf2908;
      }
      uVar9 = (ulong)(local_50[0] >> 1);
    }
    if ((local_50[0] & 1) != 0) {
      uVar9 = local_48;
    }
    if ((uVar9 != 6) || (iVar4 = FUN_0090d610(local_50,0,0xffffffffffffffff,"*Rona*",6), iVar4 != 0)
       ) goto LAB_00bf292c;
    pcVar7 = "*Hero016*";
  }
LAB_00bf2908:
  FUN_008fa54c(local_68,pcVar7);
  FUN_008fce60(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
LAB_00bf292c:
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  uVar5 = FUN_00ce9bf0(pvVar1);
  if ((uVar5 & 1) != 0) {
    uVar6 = FUN_00cdbb18();
    uVar5 = FUN_00cdcaac(uVar6,local_50);
    pcVar7 = "Talents";
    if ((uVar5 & 1) == 0) {
      pcVar7 = "";
    }
    FUN_008fa54c(local_68,pcVar7);
    FUN_00cbc1d0(local_50,local_68,0,&DAT_03218f18);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00bf29dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




char * FUN_00bf29e4(void)

{
  return "main_nav_heroes";
}




void FUN_00bf29f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(*(long **)(param_1 + 8),1);
  return;
}




void FUN_00bf2a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x140))(*(long **)(param_1 + 8),1);
  return;
}




void FUN_00bf2a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(*(long **)(param_1 + 8),0);
  return;
}




void FUN_00bf2a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x140))(*(long **)(param_1 + 8),0);
  return;
}




undefined8 FUN_00bf2a40(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf2a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x138))(*(long **)(param_1 + -0x20),1);
  return;
}




void FUN_00bf2a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x140))(*(long **)(param_1 + -0x20),1);
  return;
}




void FUN_00bf2a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x138))(*(long **)(param_1 + -0x20),0);
  return;
}




void FUN_00bf2a84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x140))(*(long **)(param_1 + -0x20),0);
  return;
}




char * FUN_00bf2a98(void)

{
  return "main_nav_heroes";
}




void FUN_00bf2aa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0560;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf2ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f0560;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf2b2c(uint *param_1,uint param_2)

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




undefined8 FUN_00bf2bac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
  FUN_00c679cc(uVar2,uVar1);
  return 0;
}




undefined8 FUN_00bf2be8(void)

{
  FUN_00bf276c();
  return 0;
}




void FUN_00bf2c00(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027f0990;
  pvVar2 = operator_new(0x2d68);
  FUN_00c67ae8();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x148) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027f0580;
  param_1[2] = &PTR_FUN_027f05c0;
  param_1[5] = &PTR_FUN_027f0958;
  param_1[6] = 0;
  pvVar2 = operator_new(0x28);
  FUN_00be1840();
  param_1[6] = pvVar2;
  FUN_00c681f8(param_1[1],*(undefined8 *)((long)pvVar2 + 8));
  lVar3 = FUN_00a07af0();
  if (lVar3 != 0) {
    lVar3 = FUN_00a07af0();
    local_58 = 0;
    pcStack_40 = thunk_FUN_00bf2ecc;
    puStack_50 = param_1;
    local_48 = param_1;
    FUN_00be1490(lVar3 + 0x28,&local_58);
    lVar3 = FUN_00a07af0();
    local_58 = 0;
    pcStack_40 = thunk_FUN_00bf2d20;
    puStack_50 = param_1;
    local_48 = param_1;
    FUN_00be1490(lVar3 + 0x18,&local_58);
  }
  FUN_00be1994(param_1[6],0);
  FUN_00c68170(param_1[1]);
  FUN_00bf2d20(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf2d20(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_009580b8();
  uVar1 = FUN_00961900(uVar3,1);
  FUN_00cc7c38();
  uVar2 = FUN_00cc97cc();
  FUN_00c680ec(uVar4,uVar1,uVar2,0);
  return;
}




void FUN_00bf2d64(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f0580;
  param_1[2] = &PTR_FUN_027f05c0;
  param_1[5] = &PTR_FUN_027f0958;
  FUN_00be1904(param_1[6]);
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
    param_1[6] = 0;
  }
  lVar1 = FUN_00a07af0();
  if (lVar1 != 0) {
    lVar2 = FUN_00a07af0();
    lVar4 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
    lVar1 = *(long *)(lVar2 + 0x30);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00bf2df0;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00be15b0((uint *)(lVar2 + 0x28),lVar3);
  }
LAB_00bf2df0:
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f0990;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf2e2c(long param_1)

{
  FUN_00bf2d64(param_1 + -0x10);
  return;
}




void FUN_00bf2e34(long param_1)

{
  FUN_00bf2d64(param_1 + -0x28);
  return;
}




void FUN_00bf2e3c(void *param_1)

{
  FUN_00bf2d64();
  operator_delete(param_1);
  return;
}




void FUN_00bf2e60(long param_1)

{
  FUN_00bf2d64((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf2e88(long param_1)

{
  FUN_00bf2d64((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void thunk_FUN_00bf2d20(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_009580b8();
  uVar1 = FUN_00961900(uVar3,1);
  FUN_00cc7c38();
  uVar2 = FUN_00cc97cc();
  FUN_00c680ec(uVar4,uVar1,uVar2,0);
  return;
}




void FUN_00bf2eb4(long param_1)

{
  FUN_00bf2d20(param_1 + -0x10);
  return;
}




undefined8 FUN_00bf2ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf2ec4(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf2ecc(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00bf2d20();
  lVar3 = FUN_00a07af0();
  FUN_008fcdb8(local_40,lVar3 + 0x210);
  lVar3 = FUN_00cc8184(local_40);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_009035a4(pvVar1,*(undefined4 *)(lVar3 + 0xa0),1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bf2d20(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_009580b8();
  uVar1 = FUN_00961900(uVar3,1);
  FUN_00cc7c38();
  uVar2 = FUN_00cc97cc();
  FUN_00c680ec(uVar4,uVar1,uVar2,0);
  return;
}




undefined8 FUN_00bf2f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




void FUN_00bf2f68(void)

{
  FUN_00e6ce7c("MENU_HERO_TAB_NAME_SKINS",0);
  return;
}




undefined1 * FUN_00bf2f78(void)

{
  return &DAT_01e277f2;
}




void FUN_00bf2f84(void)

{
  FUN_00e6ce7c("MENU_HERO_TAB_NAME_SKINS",0);
  return;
}




void FUN_00bf2f94(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f0990;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf2fd8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf2fdc);
  (*pcVar1)();
}




void thunk_FUN_00bf2ecc(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  FUN_00bf2d20();
  lVar3 = FUN_00a07af0();
  FUN_008fcdb8(abStack_40,lVar3 + 0x210);
  lVar3 = FUN_00cc8184(abStack_40);
  pvVar1 = (void *)((ulong)abStack_40 | 1);
  if ((abStack_40[0] & 1) != 0) {
    pvVar1 = pvStack_30;
  }
  FUN_009035a4(pvVar1,*(undefined4 *)(lVar3 + 0xa0),1);
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bf2d20(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_009580b8();
  uVar1 = FUN_00961900(uVar3,1);
  FUN_00cc7c38();
  uVar2 = FUN_00cc97cc();
  FUN_00c680ec(uVar4,uVar1,uVar2,0);
  return;
}




void FUN_00bf2fe4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027f0dd0;
  pvVar1 = operator_new(0x2d68);
  FUN_00c68780();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x148) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027f09b8;
  param_1[2] = &PTR_FUN_027f0a00;
  param_1[5] = &PTR_FUN_027f0d98;
  param_1[6] = 0;
  pvVar1 = operator_new(0x10);
  FUN_00bf0a34();
  param_1[6] = pvVar1;
  FUN_00c68e24(param_1[1],*(undefined8 *)((long)pvVar1 + 8));
  FUN_00bf0b7c(param_1[6]);
  FUN_00c68e0c(param_1[1]);
  FUN_00bf3084(param_1);
  return;
}

