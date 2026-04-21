// functions/00bbc — 44 functions
#include "libGameKindred.h"




void FUN_00bbc050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00bbc0ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00bbc110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eaec8;
  FUN_00ac848c(param_1 + 0x582);
  *param_1 = &PTR_FUN_027e1260;
  FUN_00ac848c(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00bbc1a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eaec8;
  FUN_00ac848c(param_1 + 0x582);
  *param_1 = &PTR_FUN_027e1260;
  FUN_00ac848c(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  *param_1 = &PTR_FUN_027ead80;
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00bbc248(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb040;
  pvVar1 = operator_new(0xf88);
  FUN_00bfbb30();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027eb010;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




void FUN_00bbc2a4(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb040;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbc2e8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb040;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bbc32c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,param_2);
  FUN_00bfc780(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}




void FUN_00bbc36c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00bfca0c(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}




void FUN_00bbc380(void)

{
  return;
}




void FUN_00bbc384(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00bfcaac(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_00bbc3c0(param_1,lVar1 + 0x20);
    return;
  }
  return;
}




void FUN_00bbc3c0(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long alStack_730 [2];
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [96];
  long local_688;
  undefined4 local_680;
  long local_48;
  
  plVar5 = alStack_730;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = *param_2;
  if (iVar2 - 2U < 2) {
    FUN_00cedce4();
    lVar3 = FUN_00d9e390();
    if (lVar3 == 0) goto LAB_00bbc574;
    FUN_00d4d9e8(auStack_6e8);
    FUN_00d4db40(auStack_6e8,lVar3);
    FUN_00d4dca4(auStack_6e8,*(undefined8 *)(param_2 + 2),0);
    if (*param_2 == 3) {
      uVar6 = 1;
      uVar4 = 0;
LAB_00bbc4ec:
      FUN_00d4daf4(auStack_6e8,uVar4,uVar6,0,0);
    }
    else if (*param_2 == 2) {
      uVar4 = 1;
      uVar6 = 0;
      goto LAB_00bbc4ec;
    }
    FUN_00d55794(lVar3,auStack_720,0);
    FUN_00d4eb08(auStack_710,auStack_720,200,0);
    iVar2 = FUN_00d9e840(auStack_6e8,&local_688,200,auStack_710);
    if ((iVar2 == 0) || (local_688 == 0)) goto LAB_00bbc574;
    FUN_009bbfb0();
    uVar4 = FUN_009bd5c8();
    *(undefined1 *)(param_1 + 0x28) = 1;
    FUN_009b8570();
    FUN_00d55794(local_688,alStack_730,0);
  }
  else {
    if (iVar2 == 1) {
      FUN_00cedce4();
      lVar3 = FUN_00d9e390();
      if (lVar3 == 0) goto LAB_00bbc574;
      FUN_009bbfb0();
      uVar4 = FUN_009bd5c8();
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_009b8570();
      FUN_00d55794(lVar3,&local_688,0);
    }
    else {
      if (iVar2 != 0) goto LAB_00bbc574;
      lVar3 = FUN_00da2698(*(undefined8 *)(param_2 + 2));
      FUN_009bbfb0();
      uVar4 = FUN_009bd5c8();
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_009b8570();
      local_688 = *(long *)(lVar3 + 0x10);
      local_680 = *(undefined4 *)(lVar3 + 0x18);
    }
    plVar5 = &local_688;
  }
  FUN_009b81fc(uVar4,plVar5,2);
LAB_00bbc574:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbc5a0(long param_1)

{
  long lVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),0);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_009bbfb0();
    lVar1 = FUN_009bd5c8();
    FUN_009b8248(lVar1,lVar1 + 0x70);
    FUN_009b850c(lVar1);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00bbc5fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




void FUN_00bbc604(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00bbc610(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb040;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbc654(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbc658);
  (*pcVar1)();
}




void FUN_00bbc658(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb098;
  plVar1 = operator_new(0x648);
  FUN_00bfcfa0();
  plVar1[0x19] = (long)param_1;
  *param_1 = &PTR_FUN_027eb070;
  param_1[1] = plVar1;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00bbc6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x138))(0,plVar1,0,4,1);
  return;
}




void FUN_00bbc6c8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb098;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbc70c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb098;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bbc750(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  if (param_2 == 1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    ppuVar3 = &PTR_s_build___HUDJoystickChoice_Joysti_02be34d0;
    pcVar2 = "HUDJoystickChoice_Joystick";
  }
  else if (param_2 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    ppuVar3 = &PTR_s_build___HUDJoystickChoice_Tap_tg_02be34d8;
    pcVar2 = "HUDJoystickChoice_Tap";
  }
  else {
    if (param_2 != 3) goto LAB_00bbc7d8;
    uVar1 = *(undefined8 *)(param_1 + 8);
    ppuVar3 = &PTR_s_build___HUDPartsTutorial_PopUp_C_02be34b8;
    pcVar2 = "popup_tablet";
  }
  FUN_00bfd4d4(uVar1,*ppuVar3,pcVar2,param_3);
LAB_00bbc7d8:
                    /* WARNING: Could not recover jumptable at 0x00bbc800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0x3ecccccd,*(long **)(param_1 + 8),1,4,1);
  return;
}




void FUN_00bbc804(long param_1)

{
  FUN_00bfd5d0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bbc80c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0x3ecccccd,*(long **)(param_1 + 8),0,4,1);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),0);
  }
  FUN_009253e0(0);
  return;
}




void FUN_00bbc864(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb098;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbc8a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbc8ac);
  (*pcVar1)();
}




void FUN_00bbc8ac(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb0e8;
  pvVar1 = operator_new(0x1688);
  FUN_00bfd880();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb0c0;
  param_1[1] = pvVar1;
  FUN_008fcdb8(param_1 + 2,&DAT_0320ffa8);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00bbc914(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb0e8;
  pvVar1 = operator_new(0x1688);
  FUN_00bfd880();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb0c0;
  param_1[1] = pvVar1;
  FUN_008fcdb8(param_1 + 2,param_2);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00bbc98c(param_1,param_2);
  return;
}




void FUN_00bbc98c(long param_1)

{
  byte *pbVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    pbVar1 = (byte *)(param_1 + 0x10);
    FUN_008fce60(pbVar1);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      lVar2 = param_1 + 0x11;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
    }
    lVar2 = FUN_0090d8b8(lVar2);
    if (lVar2 == 0) {
      if ((*pbVar1 & 1) == 0) {
        lVar2 = param_1 + 0x11;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x20);
      }
      FUN_0090d918(lVar2);
    }
    if ((*pbVar1 & 1) == 0) {
      lVar2 = param_1 + 0x11;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
    }
    if (DAT_02c091c0 != 0) {
      FUN_00bbce54(DAT_02c091c0,lVar2,param_1);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}




void FUN_00bbca24(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027eb0c0;
  if (*(char *)(param_1 + 6) != '\0') {
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      lVar1 = (long)param_1 + 0x11;
    }
    else {
      lVar1 = param_1[4];
    }
    FUN_0090de08(lVar1,param_1);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR___cxa_pure_virtual_027eb0e8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbcab0(void *param_1)

{
  FUN_00bbca24();
  operator_delete(param_1);
  return;
}




void FUN_00bbcad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bbcae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}




void FUN_00bbcae4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      param_1 = param_1 + 0x11;
    }
    else {
      param_1 = *(long *)(param_1 + 0x20);
    }
    uVar1 = FUN_00cedce4();
    FUN_0090dc1c(param_1,param_2,uVar1);
    return;
  }
  return;
}




void FUN_00bbcb3c(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_0090db90(param_2);
    return;
  }
  return;
}




void FUN_00bbcb50(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_0090dbac(param_2);
    return;
  }
  return;
}




void FUN_00bbcb64(long param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int extraout_w8;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  ulong local_98;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar11 = param_1 + 0x11;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20);
  }
  piVar5 = (int *)FUN_0090ddb0(lVar11);
  iVar10 = extraout_w8;
  if ((piVar5 != (int *)0x0) && (iVar10 = *piVar5, iVar10 == 0)) goto LAB_00bbcdac;
  lVar12 = *(long *)(piVar5 + 2);
  uVar13 = (ulong)(iVar10 - 1);
  lVar11 = lVar12 + uVar13 * 0x88;
  uVar3 = FUN_00e70b04(lVar11);
  bVar1 = *(byte *)(lVar11 + 0x50);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00bbcc10;
LAB_00bbcbf4:
    if ((bVar1 & 1) == 0) {
      lVar6 = lVar11 + 0x51;
    }
    else {
      lVar6 = *(long *)(lVar12 + uVar13 * 0x88 + 0x60);
    }
    uVar16 = FUN_00e6bdf4(lVar6);
  }
  else {
    if (*(long *)(lVar12 + uVar13 * 0x88 + 0x58) != 0) goto LAB_00bbcbf4;
LAB_00bbcc10:
    uVar16 = 0;
  }
  pcVar14 = (char *)(lVar12 + uVar13 * 0x88 + 0x82);
  if (*pcVar14 != '\0') {
    lVar11 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
  }
  thunk_FUN_00e7051c(&local_80,lVar11);
  FUN_00ac3dec(&local_98);
  lVar15 = lVar12 + uVar13 * 0x88;
  lVar11 = lVar15 + 0x68;
  lVar6 = FUN_009e2b04(lVar11,&local_98);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (lVar15 + 0x70 != lVar6) {
    FUN_00ac3dec(&local_98);
    plVar7 = (long *)FUN_0091092c(lVar11,auStack_70,&local_98);
    uVar4 = FUN_00ec3f24(*plVar7 + 0x38);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    uVar8 = FUN_00cee2c4(uVar4);
    if ((uVar8 & 1) != 0) {
      uVar4 = FUN_00cecbe0(uVar4);
      uVar9 = FUN_00d6eb50();
      lVar11 = FUN_00d6eb88(uVar9,uVar4);
      if (lVar11 != 0) {
        FUN_00e705c8(&local_98," (");
        FUN_00e70c34(&local_80,&local_98);
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
        uVar9 = FUN_00e6ce7c(*(undefined8 *)(lVar11 + 0x28),0);
        FUN_00e70c34(&local_80,uVar9);
        FUN_00e705c8(&local_98,&DAT_01e2fd76);
        FUN_00e70c34(&local_80,&local_98);
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar16;
  lVar12 = lVar12 + uVar13 * 0x88;
  FUN_00bfded0(*(undefined8 *)(param_1 + 8),&local_80,lVar12 + 0x10,*(undefined1 *)(lVar12 + 0x81),
               *pcVar14,uVar3 & 1);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
LAB_00bbcdac:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bbcde4(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x84);
  *(uint *)(*(long *)(param_1 + 8) + 0x84) = uVar1 & 0xfffffff8 | uVar1 & 3 | (param_2 & 1) << 2;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00bfe684(*(undefined8 *)(param_1 + 8),1);
  return;
}




void FUN_00bbce0c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb0e8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbce50(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbbce54);
  (*pcVar1)();
}




void FUN_00bbce54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = thunk_FUN_00bbcb64;
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




void thunk_FUN_00bbcb64(long param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  int extraout_w8;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uStack_98;
  void *pvStack_90;
  void *pvStack_88;
  undefined8 uStack_80;
  void *pvStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar11 = param_1 + 0x11;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x20);
  }
  piVar5 = (int *)FUN_0090ddb0(lVar11);
  iVar10 = extraout_w8;
  if ((piVar5 != (int *)0x0) && (iVar10 = *piVar5, iVar10 == 0)) goto LAB_00bbcdac;
  lVar12 = *(long *)(piVar5 + 2);
  uVar13 = (ulong)(iVar10 - 1);
  lVar11 = lVar12 + uVar13 * 0x88;
  uVar3 = FUN_00e70b04(lVar11);
  bVar1 = *(byte *)(lVar11 + 0x50);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_00bbcc10;
LAB_00bbcbf4:
    if ((bVar1 & 1) == 0) {
      lVar6 = lVar11 + 0x51;
    }
    else {
      lVar6 = *(long *)(lVar12 + uVar13 * 0x88 + 0x60);
    }
    uVar16 = FUN_00e6bdf4(lVar6);
  }
  else {
    if (*(long *)(lVar12 + uVar13 * 0x88 + 0x58) != 0) goto LAB_00bbcbf4;
LAB_00bbcc10:
    uVar16 = 0;
  }
  pcVar14 = (char *)(lVar12 + uVar13 * 0x88 + 0x82);
  if (*pcVar14 != '\0') {
    lVar11 = FUN_00e6ce7c("MENU_CHAT_PLAYER_LABEL_YOU",0);
  }
  thunk_FUN_00e7051c(&uStack_80,lVar11);
  FUN_00ac3dec(&uStack_98);
  lVar15 = lVar12 + uVar13 * 0x88;
  lVar11 = lVar15 + 0x68;
  lVar6 = FUN_009e2b04(lVar11,&uStack_98);
  if ((uStack_98 & 1) != 0) {
    operator_delete(pvStack_88);
  }
  if (lVar15 + 0x70 != lVar6) {
    FUN_00ac3dec(&uStack_98);
    plVar7 = (long *)FUN_0091092c(lVar11,auStack_70,&uStack_98);
    uVar4 = FUN_00ec3f24(*plVar7 + 0x38);
    if ((uStack_98 & 1) != 0) {
      operator_delete(pvStack_88);
    }
    uVar8 = FUN_00cee2c4(uVar4);
    if ((uVar8 & 1) != 0) {
      uVar4 = FUN_00cecbe0(uVar4);
      uVar9 = FUN_00d6eb50();
      lVar11 = FUN_00d6eb88(uVar9,uVar4);
      if (lVar11 != 0) {
        FUN_00e705c8(&uStack_98," (");
        FUN_00e70c34(&uStack_80,&uStack_98);
        if (pvStack_90 != (void *)0x0) {
          operator_delete__(pvStack_90);
          uStack_98 = 0;
          pvStack_90 = (void *)0x0;
        }
        uVar9 = FUN_00e6ce7c(*(undefined8 *)(lVar11 + 0x28),0);
        FUN_00e70c34(&uStack_80,uVar9);
        FUN_00e705c8(&uStack_98,&DAT_01e2fd76);
        FUN_00e70c34(&uStack_80,&uStack_98);
        if (pvStack_90 != (void *)0x0) {
          operator_delete__(pvStack_90);
          uStack_98 = 0;
          pvStack_90 = (void *)0x0;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar16;
  lVar12 = lVar12 + uVar13 * 0x88;
  FUN_00bfded0(*(undefined8 *)(param_1 + 8),&uStack_80,lVar12 + 0x10,*(undefined1 *)(lVar12 + 0x81),
               *pcVar14,uVar3 & 1);
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
LAB_00bbcdac:
  if (*(long *)(lVar2 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bbcee8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb138;
  pvVar1 = operator_new(0x4c8);
  FUN_00bfecf8();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0x158) = param_1;
  *param_1 = &PTR_FUN_027eb110;
  *(undefined4 *)(param_1 + 3) = DAT_03214ce8;
  return;
}




void FUN_00bbcf4c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb138;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bbcf90(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb138;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bbcfd4(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_00cedce4();
  FUN_00ced928();
  uVar2 = FUN_00cce8a4();
  FUN_00bfef18(*(undefined8 *)(param_1 + 8),uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00cedf3c();
  FUN_00bff418(uVar2,0xc,uVar1 & 1);
  return;
}

