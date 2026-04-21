// functions/00abe — 5 functions
#include "libGameKindred.h"




void thunk_FUN_00abebbc(long param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_00f01980();
  lVar1 = param_1 + 0x1a8;
  FUN_00af97f4(lVar1,0);
  FUN_00afa680(lVar1);
  pcVar2 = "CHEST_GLORY";
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) != '\0') {
    pcVar2 = "CHEST_ICE";
  }
  FUN_00af9aa0(lVar1,pcVar2);
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) == '\0') {
    puVar5 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x558) + 8) + 0x40);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4a1c);
    lVar6 = *(long *)(*(long *)(param_1 + 0x558) + 8);
    iVar4 = rand();
    puVar5 = (undefined8 *)(lVar6 + (long)(iVar4 % 3) * 8);
    if (iVar3 < 1) {
      puVar5 = puVar5 + 3;
    }
  }
  puVar5 = (undefined8 *)*puVar5;
  FUN_00afa094(*(undefined4 *)(puVar5 + 2),lVar1,*puVar5,*(undefined1 *)((long)puVar5 + 0x14),1);
  return;
}




void FUN_00abebbc(long param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_00f01980();
  lVar1 = param_1 + 0x1a8;
  FUN_00af97f4(lVar1,0);
  FUN_00afa680(lVar1);
  pcVar2 = "CHEST_GLORY";
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) != '\0') {
    pcVar2 = "CHEST_ICE";
  }
  FUN_00af9aa0(lVar1,pcVar2);
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) == '\0') {
    puVar5 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x558) + 8) + 0x40);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4a1c);
    lVar6 = *(long *)(*(long *)(param_1 + 0x558) + 8);
    iVar4 = rand();
    puVar5 = (undefined8 *)(lVar6 + (long)(iVar4 % 3) * 8);
    if (iVar3 < 1) {
      puVar5 = puVar5 + 3;
    }
  }
  puVar5 = (undefined8 *)*puVar5;
  FUN_00afa094(*(undefined4 *)(puVar5 + 2),lVar1,*puVar5,*(undefined1 *)((long)puVar5 + 0x14),1);
  return;
}




void FUN_00abeca4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6ce7c("MENU_MARKET_CARD_TILE_CARDS_REMAINING",0);
  thunk_FUN_00e7051c(&local_48,uVar3);
  FUN_00e70510(&local_58);
  local_68 = 0;
  local_60 = 0;
  uVar2 = FUN_00ccbd74(*(undefined8 *)(param_1 + 0x1a0),(long)&local_60 + 4,&local_60,
                       (long)&local_68 + 4,&local_68);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,uVar2);
  FUN_00e705c8(&local_78,"[NUMBER]");
  FUN_00e71248(&local_48,0,&local_78,&local_58);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00e70e18(&local_58,&DAT_01bb6d43,local_60._4_4_);
  FUN_00f0d75c(param_1 + 0x3bb0,&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,local_60 & 0xffffffff);
  FUN_00f0d75c(param_1 + 0x3ce0,&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,local_68._4_4_);
  FUN_00f0d75c(param_1 + 0x3e10,&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,local_68 & 0xffffffff);
  FUN_00f0d75c(param_1 + 0x3f40,&local_58);
  FUN_00f0d75c(param_1 + 0xd60,&local_48);
  FUN_00abf918(param_1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00abee34(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_84 [4];
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  (**(code **)(*param_3 + 0x48))();
  fVar5 = param_2 * 0.5;
  if ((*(float *)(param_3 + 0x3d) != 550.0) ||
     (param_2 = *(float *)((long)param_3 + 0x1ec), param_2 != fVar5)) {
    *(undefined4 *)(param_3 + 0x3d) = 0x44098000;
    *(float *)((long)param_3 + 0x1ec) = fVar5;
    FUN_0091ada4(param_3 + 0x35);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x35] + 0x28))(param_3 + 0x35,&local_80);
  plVar1 = param_3 + 0xbd;
  if ((*(float *)(param_3 + 0xc5) != 0.0) ||
     (fVar5 = *(float *)((long)param_3 + 0x62c), fVar5 != 0.0)) {
    param_3[0xc5] = 0;
    FUN_0091ada4(plVar1);
    fVar5 = *(float *)((long)param_3 + 0x62c);
  }
  FUN_00f0d4e0(plVar1);
  if ((*(float *)(param_3 + 0xeb) != 0.0) ||
     (fVar6 = *(float *)((long)param_3 + 0x75c), fVar6 != fVar5 + param_2)) {
    *(undefined4 *)(param_3 + 0xeb) = 0;
    *(float *)((long)param_3 + 0x75c) = fVar5 + param_2;
    FUN_0091ada4(param_3 + 0xe3);
    fVar6 = *(float *)((long)param_3 + 0x75c);
  }
  plVar2 = param_3 + 0x1ac;
  FUN_00f0d4e0(param_3 + 0xe3);
  fVar6 = fVar6 + param_2;
  if ((*(float *)(param_3 + 0x1b4) != 0.0) ||
     (fVar5 = *(float *)((long)param_3 + 0xda4), fVar5 != fVar6 + 10.0)) {
    *(undefined4 *)(param_3 + 0x1b4) = 0;
    *(float *)((long)param_3 + 0xda4) = fVar6 + 10.0;
    FUN_0091ada4(plVar2);
    fVar5 = *(float *)((long)param_3 + 0xda4);
  }
  FUN_00f0d4e0(plVar2);
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar5 + 10.0;
  if ((*(float *)(param_3 + 0x1da) != 0.0) ||
     (fVar5 = *(float *)((long)param_3 + 0xed4), fVar5 != fVar6)) {
    *(undefined4 *)(param_3 + 0x1da) = 0;
    *(float *)((long)param_3 + 0xed4) = fVar6;
    FUN_0091ada4(param_3 + 0x1d2);
  }
  plVar3 = param_3 + 0x1fe;
  fVar6 = (float)FUN_00f13e54(plVar3);
  fVar8 = *(float *)((long)param_3 + 0xed4);
  FUN_00f0d4e0(param_3 + 0x1d2);
  fVar8 = fVar8 + fVar5;
  fVar5 = fVar8 + 40.0;
  FUN_00f13e54(plVar3);
  fVar8 = fVar8 * 0.5;
  fVar5 = fVar5 + fVar8;
  if ((*(float *)(param_3 + 0x206) != fVar6 * 0.5) ||
     (fVar8 = *(float *)((long)param_3 + 0x1034), fVar8 != fVar5)) {
    *(float *)(param_3 + 0x206) = fVar6 * 0.5;
    *(float *)((long)param_3 + 0x1034) = fVar5;
    FUN_0091ada4(plVar3);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x1fe] + 0x28))(plVar3,&local_80);
  fVar7 = *(float *)(param_3 + 0x1b4);
  fVar5 = (float)FUN_00f0d4e0(plVar2);
  fVar6 = *(float *)((long)param_3 + 0xda4);
  fVar5 = fVar7 + fVar5 + 10.0;
  FUN_00f0d4e0(plVar2);
  fVar6 = fVar6 + fVar8 * 0.5;
  if ((*(float *)(param_3 + 0x6ef) != fVar5) || (*(float *)((long)param_3 + 0x377c) != fVar6)) {
    *(float *)(param_3 + 0x6ef) = fVar5;
    *(float *)((long)param_3 + 0x377c) = fVar6;
    FUN_0091ada4(param_3 + 0x6e7);
  }
  local_80 = 0x3f00000000000000;
  (**(code **)(param_3[0x6e7] + 0x28))(param_3 + 0x6e7,&local_80);
  plVar2 = param_3 + 0x6fe;
  fVar5 = (float)FUN_00f0eac0(plVar2);
  fVar5 = fVar5 * 0.5;
  if (*(float *)(param_3 + 0x706) != fVar5) {
    *(float *)(param_3 + 0x706) = fVar5;
    FUN_0091ada4(plVar2);
  }
  if (*(float *)(param_3 + 0x724) != fVar5 + 94.0) {
    *(float *)(param_3 + 0x724) = fVar5 + 94.0;
    FUN_0091ada4(param_3 + 0x71c);
  }
  if (*(float *)(param_3 + 0x742) != fVar5 + 188.0) {
    *(float *)(param_3 + 0x742) = fVar5 + 188.0;
    FUN_0091ada4(param_3 + 0x73a);
  }
  if (*(float *)(param_3 + 0x760) != fVar5 + 282.0) {
    *(float *)(param_3 + 0x760) = fVar5 + 282.0;
    FUN_0091ada4(param_3 + 0x758);
  }
  fVar6 = *(float *)(param_3 + 0x706);
  fVar5 = (float)FUN_00f0eac0(plVar2);
  fVar5 = fVar6 + fVar5 * 0.5 + 6.0;
  if ((*(float *)(param_3 + 0x77e) != fVar5) || (*(float *)((long)param_3 + 0x3bf4) != 0.0)) {
    *(float *)(param_3 + 0x77e) = fVar5;
    *(undefined4 *)((long)param_3 + 0x3bf4) = 0;
    FUN_0091ada4(param_3 + 0x776);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x776] + 0x28))(param_3 + 0x776,&local_80);
  fVar6 = *(float *)(param_3 + 0x724);
  fVar5 = (float)FUN_00f0eac0(param_3 + 0x71c);
  fVar5 = fVar6 + fVar5 * 0.5 + 6.0;
  if ((*(float *)(param_3 + 0x7a4) != fVar5) || (*(float *)((long)param_3 + 0x3d24) != 0.0)) {
    *(float *)(param_3 + 0x7a4) = fVar5;
    *(undefined4 *)((long)param_3 + 0x3d24) = 0;
    FUN_0091ada4(param_3 + 0x79c);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x79c] + 0x28))(param_3 + 0x79c,&local_80);
  fVar6 = *(float *)(param_3 + 0x742);
  fVar5 = (float)FUN_00f0eac0(param_3 + 0x73a);
  fVar5 = fVar6 + fVar5 * 0.5 + 6.0;
  if ((*(float *)(param_3 + 0x7ca) != fVar5) || (*(float *)((long)param_3 + 0x3e54) != 0.0)) {
    *(float *)(param_3 + 0x7ca) = fVar5;
    *(undefined4 *)((long)param_3 + 0x3e54) = 0;
    FUN_0091ada4(param_3 + 0x7c2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x7c2] + 0x28))(param_3 + 0x7c2,&local_80);
  fVar6 = *(float *)(param_3 + 0x760);
  fVar5 = (float)FUN_00f0eac0(param_3 + 0x758);
  fVar5 = fVar6 + fVar5 * 0.5 + 6.0;
  if ((*(float *)(param_3 + 0x7f0) != fVar5) || (*(float *)((long)param_3 + 0x3f84) != 0.0)) {
    *(float *)(param_3 + 0x7f0) = fVar5;
    *(undefined4 *)((long)param_3 + 0x3f84) = 0;
    FUN_0091ada4(param_3 + 0x7e8);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x7e8] + 0x28))(param_3 + 0x7e8,&local_80);
  fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = 0.57;
  fVar5 = fVar5 * 0.57;
  (**(code **)(*param_3 + 0x48))(param_3);
  plVar2 = param_3 + 0x109;
  fVar6 = fVar8 * 0.5;
  FUN_00f01c54(plVar2,0,0,1,1);
  fVar6 = fVar6 - fVar8 * 0.5;
  if ((*(float *)(param_3 + 0x111) != fVar5) || (*(float *)((long)param_3 + 0x88c) != fVar6)) {
    *(float *)(param_3 + 0x111) = fVar5;
    *(float *)((long)param_3 + 0x88c) = fVar6;
    FUN_0091ada4(plVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0x109] + 0x28))(plVar2,&local_80);
  FUN_00f00298(&local_80,auStack_84);
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0db64((fVar6 - fVar5) + -20.0,0,0x3f800000,plVar1);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00abebbc(long param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_00f01980();
  lVar1 = param_1 + 0x1a8;
  FUN_00af97f4(lVar1,0);
  FUN_00afa680(lVar1);
  pcVar2 = "CHEST_GLORY";
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) != '\0') {
    pcVar2 = "CHEST_ICE";
  }
  FUN_00af9aa0(lVar1,pcVar2);
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) == '\0') {
    puVar5 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x558) + 8) + 0x40);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4a1c);
    lVar6 = *(long *)(*(long *)(param_1 + 0x558) + 8);
    iVar4 = rand();
    puVar5 = (undefined8 *)(lVar6 + (long)(iVar4 % 3) * 8);
    if (iVar3 < 1) {
      puVar5 = puVar5 + 3;
    }
  }
  puVar5 = (undefined8 *)*puVar5;
  FUN_00afa094(*(undefined4 *)(puVar5 + 2),lVar1,*puVar5,*(undefined1 *)((long)puVar5 + 0x14),1);
  return;
}

