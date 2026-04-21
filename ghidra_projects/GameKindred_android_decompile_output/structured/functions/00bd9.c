// functions/00bd9 — 52 functions
#include "libGameKindred.h"




long FUN_00bd9028(long param_1,int *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    if (*param_2 == 0) {
      puVar2 = &DAT_0320ffa8;
    }
    else {
      puVar2 = (undefined1 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_00bd21f8(*(undefined8 *)(param_1 + 0xe0),puVar2);
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




undefined8 FUN_00bd90a0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e900();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x130) != '\0')) {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    FUN_00bd9e88(param_1 + 0x70,4);
    *(undefined1 *)(param_1 + 0x132) = 1;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x178))(*(long **)(param_1 + 0xf8),1,&DAT_0320ffa8);
  }
  return 0;
}




long FUN_00bd910c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0092e900();
  lVar2 = 0;
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_00c3df08(*(undefined8 *)(param_1 + 8));
      FUN_00ed2508();
      FUN_00bd9e88(param_1 + 0x70,5);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    lVar2 = 0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      lVar2 = *(long *)(param_1 + 0xf8) + 0x2c70;
    }
  }
  return lVar2;
}




long FUN_00bd9174(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0092e900();
  lVar2 = 0;
  if ((uVar1 & 1) != 0) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_00c3df08(*(undefined8 *)(param_1 + 8));
      FUN_00ed2508();
      FUN_00bd9e88(param_1 + 0x70,4);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    lVar2 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar2 = *(long *)(param_1 + 0xf0) + 0x58;
    }
  }
  return lVar2;
}




undefined8 FUN_00bd91d8(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    FUN_00bd9e88(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_00bd223c(*(undefined8 *)(param_1 + 0xe0));
  }
  return 0;
}




undefined8 FUN_00bd9228(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x130) != '\0') {
    uVar3 = FUN_009580b8();
    iVar1 = *param_2;
    lVar4 = *(long *)(param_2 + 2);
    FUN_008fa54c(local_50,&DAT_01e277f2);
    FUN_00961494(uVar3,lVar4 + (ulong)(iVar1 - 1) * 0x18,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00bd92cc(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    FUN_00bd9e88(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_00bd2660(*(undefined8 *)(param_1 + 0xe0));
  }
  return 0;
}




void FUN_00bd931c(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00bd9e88(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  return;
}




void FUN_00bd9354(long param_1)

{
  FUN_00c3dbf0(*(undefined8 *)(param_1 + 8));
  FUN_00bd2194(*(undefined8 *)(param_1 + 0xe0));
  return;
}




void FUN_00bd937c(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_00bd9e88(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_00bd83bc(param_1);
    FUN_00b61724(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void FUN_00bd93d4(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_00bd9e88(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_00bd83bc(param_1);
    FUN_00b61724(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void FUN_00bd942c(undefined8 param_1,ulong param_2)

{
  FUN_00bd77c0(param_1,(uint)(param_2 >> 0x1f) & 1 ^ 1);
  return;
}




void FUN_00bd9438(long param_1,ulong param_2)

{
  FUN_00bd77c0(param_1 + -0x28,(uint)(param_2 >> 0x1f) & 1 ^ 1);
  return;
}




void FUN_00bd9448(long param_1)

{
  FUN_00aa2aa4();
  *(undefined1 *)(param_1 + 0x134) = 1;
  FUN_00bd8c50(param_1);
  return;
}




void FUN_00bd9474(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  code *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x5558);
  FUN_00b64064();
  *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
  FUN_00b64d20(pvVar2,param_2);
  *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0xc;
  FUN_00b65a74(pvVar2,1);
  pvVar3 = operator_new(0x278);
  FUN_00accedc();
  FUN_00acd1bc(pvVar3,pvVar2);
  local_40 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_68 = FUN_00bd9564;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  pvStack_60 = pvVar3;
  FUN_009693a0((long)pvVar3 + 8,&local_68);
  FUN_00aa18e0(pvVar3,0,1,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd9564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00acd498(param_1,param_4,param_5);
  return;
}




void FUN_00bd9570(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_00a06b24();
  iVar1 = FUN_00a06c4c();
  *(bool *)(param_1 + 0x133) = iVar1 == 1;
  iVar1 = FUN_00bd9fc8(param_1 + 0x70);
  FUN_00c3dcbc(*(undefined8 *)(param_1 + 8),iVar1 != 0 || *(char *)(param_1 + 0x133) != '\0',
               iVar1 != 0);
  if (*param_2 - 2U < 2) {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
  }
  else if (*param_2 == 1) {
    lVar2 = FUN_00e829e0();
    lVar4 = *(long *)(lVar2 + 0x140);
    lVar3 = FUN_00e85318(0);
    if (lVar3 < lVar4) {
      FUN_00bd9628(lVar3,lVar2);
    }
  }
  FUN_00bd83bc(param_1);
  return;
}




void FUN_00bd9628(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  code *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = operator_new(0x3530);
  FUN_00b4e9ec();
  *(uint *)((long)plVar2 + 0x84) = *(uint *)((long)plVar2 + 0x84) | 0x20;
  FUN_00b4faa0(plVar2,*(undefined4 *)(param_2 + 0x138),*(undefined8 *)(param_2 + 0x140),
               *(undefined4 *)(param_2 + 0x148),*(undefined4 *)(param_2 + 0x14c),param_2 + 0x120);
  pvVar3 = operator_new(0x278);
  FUN_00accedc();
  FUN_00acd1bc(pvVar3,plVar2);
  local_40 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_68 = FUN_00bd9564;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  pvStack_60 = pvVar3;
  FUN_009693a0((long)pvVar3 + 8,&local_68);
  (**(code **)(*plVar2 + 0x138))(0x3f000000,plVar2,1,4,1);
  FUN_00aa18e0(pvVar3,0,1,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd9734(void)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte local_58 [16];
  void *local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((int)DAT_0313d188 != 0) {
    lVar4 = FUN_009b8d90();
    bVar1 = *(byte *)(lVar4 + 0xe1b8);
    uVar5 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar5 = *(ulong *)(lVar4 + 0xe1c0);
    }
    if ((uVar5 != 0x12) ||
       (iVar3 = FUN_0090d610((byte *)(lVar4 + 0xe1b8),0,0xffffffffffffffff,"endOfSeasonRewards",0x12
                            ), iVar3 != 0)) {
      FUN_00f00298(&fStack_3c,&local_40);
      FUN_008fa54c(local_58,"endOfSeasonRewards");
      uVar5 = FUN_00cab60c(fStack_3c * 0.5,local_40 * 0.5,0x3f99999a,&DAT_0313d188,local_58,1);
      if ((local_58[0] & 1) != 0) {
        operator_delete(local_48);
      }
      if ((uVar5 & 1) != 0) {
        FUN_008fefd4(&DAT_0313d188,0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd9850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027edd70;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bd9894(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027edd90;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd98d8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd98dc);
  (*pcVar1)();
}




void FUN_00bd98dc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00bd98dc(param_1,*param_2);
    FUN_00bd98dc(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00bd9928(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eddb8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd996c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd9970);
  (*pcVar1)();
}




undefined8 FUN_00bd9978(void)

{
  FUN_00bd8eac();
  return 0;
}




undefined8 FUN_00bd9990(void)

{
  FUN_00bd8ef4();
  return 0;
}




long thunk_FUN_00bd9028(long param_1,int *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    if (*param_2 == 0) {
      puVar2 = &DAT_0320ffa8;
    }
    else {
      puVar2 = (undefined1 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_00bd21f8(*(undefined8 *)(param_1 + 0xe0),puVar2);
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




undefined8 FUN_00bd99b4(void)

{
  FUN_00bd90a0();
  return 0;
}




long thunk_FUN_00bd910c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0092e900();
  lVar2 = 0;
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_00c3df08(*(undefined8 *)(param_1 + 8));
      FUN_00ed2508();
      FUN_00bd9e88(param_1 + 0x70,5);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    lVar2 = 0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      lVar2 = *(long *)(param_1 + 0xf8) + 0x2c70;
    }
  }
  return lVar2;
}




undefined8 FUN_00bd99d0(void)

{
  FUN_00bd91d8();
  return 0;
}




undefined8 FUN_00bd99e8(void)

{
  FUN_00bd9228();
  return 0;
}




undefined8 FUN_00bd9a00(void)

{
  FUN_00bd92cc();
  return 0;
}




void thunk_FUN_00bd937c(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_00bd9e88(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_00bd83bc(param_1);
    FUN_00b61724(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void FUN_00bd9a1c(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00bd9e88(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  return;
}




void thunk_FUN_00bd93d4(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_00bd9e88(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_00bd83bc(param_1);
    FUN_00b61724(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void FUN_00bd9a5c(uint *param_1,undefined8 *param_2)

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
    FUN_00bd9b1c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00bd9aec(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x134) = 1;
  }
  return;
}




void FUN_00bd9b1c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void thunk_FUN_00bd9570(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_00a06b24();
  iVar1 = FUN_00a06c4c();
  *(bool *)(param_1 + 0x133) = iVar1 == 1;
  iVar1 = FUN_00bd9fc8(param_1 + 0x70);
  FUN_00c3dcbc(*(undefined8 *)(param_1 + 8),iVar1 != 0 || *(char *)(param_1 + 0x133) != '\0',
               iVar1 != 0);
  if (*param_2 - 2U < 2) {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
  }
  else if (*param_2 == 1) {
    lVar2 = FUN_00e829e0();
    lVar4 = *(long *)(lVar2 + 0x140);
    lVar3 = FUN_00e85318(0);
    if (lVar3 < lVar4) {
      FUN_00bd9628(lVar3,lVar2);
    }
  }
  FUN_00bd83bc(param_1);
  return;
}




void thunk_FUN_00bd9734(void)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte abStack_58 [16];
  void *pvStack_48;
  float fStack_40;
  float fStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  if ((int)DAT_0313d188 != 0) {
    lVar4 = FUN_009b8d90();
    bVar1 = *(byte *)(lVar4 + 0xe1b8);
    uVar5 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar5 = *(ulong *)(lVar4 + 0xe1c0);
    }
    if ((uVar5 != 0x12) ||
       (iVar3 = FUN_0090d610((byte *)(lVar4 + 0xe1b8),0,0xffffffffffffffff,"endOfSeasonRewards",0x12
                            ), iVar3 != 0)) {
      FUN_00f00298(&fStack_3c,&fStack_40);
      FUN_008fa54c(abStack_58,"endOfSeasonRewards");
      uVar5 = FUN_00cab60c(fStack_3c * 0.5,fStack_40 * 0.5,0x3f99999a,&DAT_0313d188,abStack_58,1);
      if ((abStack_58[0] & 1) != 0) {
        operator_delete(pvStack_48);
      }
      if ((uVar5 & 1) != 0) {
        FUN_008fefd4(&DAT_0313d188,0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd9bb0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00bd9c30(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_00bd8860;
  local_38 = param_1;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd9c90(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027edd90;
  pvVar1 = operator_new(0x298);
  FUN_00c3ea6c();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_027eddf8;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  return;
}




void FUN_00bd9cf4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined4
FUN_00bd9cfc(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 *param_4,
            undefined4 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00c3ed4c(*(undefined8 *)(param_3 + 8));
  local_58 = param_4;
  local_50 = param_5;
  uStack_4c = uVar2;
  uVar3 = (**(code **)*param_4)(param_4);
  plVar4 = *(long **)(*(long *)(param_3 + 0x10) + 8);
  local_60 = (**(code **)(*plVar4 + 0x48))(plVar4);
  uStack_5c = param_2;
  FUN_00f13f18(uVar3,&local_60);
  FUN_00bd9dc4(param_3 + 0x18,&local_58);
  FUN_00c3f5a8(*(undefined8 *)(param_3 + 8),*(undefined1 *)(param_3 + 0x2c));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd9dc4(uint *param_1,undefined8 *param_2)

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
    FUN_00bda000(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00bd9e4c(long param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    uVar1 = 0;
    piVar2 = (int *)(*(long *)(param_1 + 0x20) + 0xc);
    do {
      if (*piVar2 == param_2) {
        FUN_00bd9e88(param_1,piVar2[-1]);
        return;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  return;
}




void FUN_00bd9e88(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x2c) != '\0') && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar9 = 0;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0xc);
      do {
        if (puVar5[-1] == param_2) {
          uVar7 = *(undefined8 *)(puVar5 + -3);
          FUN_00c3f2c0(*(undefined8 *)(param_1 + 8),*puVar5);
          lVar2 = *(long *)(param_1 + 0x10);
          iVar6 = param_2;
          goto LAB_00bd9f20;
        }
        lVar9 = lVar9 + 1;
        puVar5 = puVar5 + 4;
      } while (lVar9 < *(int *)(param_1 + 0x18));
    }
    uVar7 = 0;
    lVar9 = 0xffffffff;
    iVar6 = 0;
LAB_00bd9f20:
    uVar8 = (uint)lVar9;
    uVar3 = 2;
    if (uVar8 <= *(uint *)(param_1 + 0x28)) {
      uVar3 = 3;
    }
    uVar4 = 2;
    if (*(uint *)(param_1 + 0x28) < uVar8) {
      uVar4 = 3;
    }
    FUN_00bda0d4(lVar2,uVar7,uVar3,uVar4,param_2 != 0);
    *(uint *)(param_1 + 0x28) = uVar8;
    FUN_00f048e0(auStack_68,DAT_0313aa44,iVar6);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_68,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd9f98(long param_1,byte param_2)

{
  FUN_00c3f5a8(*(undefined8 *)(param_1 + 8),param_2 & 1);
  *(byte *)(param_1 + 0x2c) = param_2 & 1;
  return;
}




undefined4 FUN_00bd9fc8(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 0x10 + 8);
}




void FUN_00bd9fdc(void *param_1)

{
  FUN_00bd7c84();
  operator_delete(param_1);
  return;
}

