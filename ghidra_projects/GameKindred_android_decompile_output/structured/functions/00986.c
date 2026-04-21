// functions/00986 — 27 functions
#include "libGameKindred.h"




void FUN_00986040(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_027be7a8;
  *(undefined1 *)((long)puVar1 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
  uVar2 = *(undefined8 *)(param_1 + 0x19);
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = uVar2;
  *(undefined2 *)((long)puVar1 + 0x29) = *(undefined2 *)(param_1 + 0x29);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009860c0(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027be7e0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_009860e0(void)

{
  return;
}




void FUN_009860e4(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  FUN_019889cc(&local_30,1,DAT_02c091a0,0);
  if (local_30 != 0) {
    FUN_00a0ab28(local_30,*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00986158(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_027be7e0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_009861c8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00986730();
  FUN_00986770(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar2 = FUN_00986cdc();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d17b44(uVar2,"ab_test_tutorial_05_less_dialog");
  uVar2 = FUN_00986ddc();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d181b8(uVar2,"ab_test_tutorial_05_less_dialog",0);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00986770(param_1);
  FUN_009867f0(param_1);
  uVar2 = FUN_00986ee0();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d17440(uVar2,0xd);
  uVar2 = FUN_00986fe0();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00998c48(uVar2,0);
  uVar2 = FUN_009870e0();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00998ca8(uVar2,0);
  uVar2 = FUN_009871e0();
  FUN_00d0aaac(param_1,uVar2);
  FUN_0099bb14(uVar2,PTR_s_Tut05_Dialog_Closed_02bedeb0);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  uVar2 = FUN_009872e0();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d18994(0x3f800000,uVar2,1);
  FUN_00987ffc(param_1,4,"ab_test_tutorial_05_less_dialog");
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  FUN_00986830(param_1);
  uVar2 = FUN_009874f4();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d188dc(uVar2,"ab_test_tutorial_05_less_dialog");
  FUN_00d0aa9c(param_1);
  uVar2 = FUN_009875f4();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00999e0c(uVar2,"*Cutscene_Tutorial05_Intro*",1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  FUN_00986830(param_1);
  uVar2 = FUN_009876f4();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d0aa9c(param_1);
  uVar2 = FUN_009877f4();
  FUN_00d0aaac(param_1,uVar2);
  uVar3 = FUN_00e6ce7c("TUTORIAL4_TOOLTIP_DESTROY_5V5_VAIN",0);
  FUN_00999c6c(uVar2,uVar3);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar2 = FUN_009878f8();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00986830(param_1);
  uVar2 = FUN_009879f8();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d0aa9c(param_1);
  FUN_0098827c(param_1,"ab_test_tutorial_05_less_dialog","*Sidebar_Tutorial05_ExplainBrush_2*",
               "*Sidebar_Tutorial05_ExplainBrush*");
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar2 = FUN_00987af8();
  FUN_00d0aaac(param_1,uVar2);
  thunk_FUN_00d9ff34(auStack_40,PTR_s_Buff_GameObjectives_River5v5Bonu_02beb580);
  uVar2 = FUN_00d1f578(uVar2,auStack_40);
  FUN_00d1f58c(uVar2,0);
  FUN_00986830(param_1);
  uVar2 = FUN_009878f8();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d0aa9c(param_1);
  FUN_00986830(param_1);
  uVar2 = FUN_009879f8();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d0aa9c(param_1);
  FUN_0098827c(param_1,"ab_test_tutorial_05_less_dialog","*Sidebar_Tutorial05_ExplainRiver_2*",
               "*Sidebar_Tutorial05_ExplainRiver*");
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar2 = FUN_00987bfc();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d1e53c(uVar2,FUN_00caa738);
  FUN_00986830(param_1);
  uVar2 = FUN_009879f8();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d0aa9c(param_1);
  FUN_0098827c(param_1,"ab_test_tutorial_05_less_dialog","*Sidebar_Tutorial05_ExplainVisionItems_2*"
               ,"*Sidebar_Tutorial05_ExplainVisionItems*");
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar2 = FUN_00987af8();
  FUN_00d0aaac(param_1,uVar2);
  uVar2 = FUN_00d1f578(uVar2,&DAT_0315cf48);
  FUN_00d1f58c(uVar2,0);
  uVar2 = FUN_00987bfc();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d1e53c(uVar2,FUN_00caa828);
  FUN_00986830(param_1);
  uVar2 = FUN_009879f8();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d0aa9c(param_1);
  uVar2 = FUN_00987cfc();
  FUN_00d0aaac(param_1,uVar2);
  FUN_0099a090(uVar2,"*Sidebar_Tutorial05_ExplainJungleShop*");
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_009867b0(param_1);
  FUN_009867f0(param_1);
  uVar2 = FUN_00987dfc();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00d20e98(uVar2,PTR_s_Koshka_02beb308);
  uVar2 = FUN_00987efc();
  FUN_00d0aaac(param_1,uVar2);
  FUN_00988108(param_1,"ab_test_tutorial_05_less_dialog","*Cutscene_Tutorial05_ExplainDeath_2*",
               "*Cutscene_Tutorial05_ExplainDeath*",1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00986730(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009868ac();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d0aa94(param_1,uVar1);
  return uVar1;
}




undefined8 FUN_00986770(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009869bc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d0aa94(param_1,uVar1);
  return uVar1;
}




undefined8 FUN_009867b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00986acc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d0aa94(param_1,uVar1);
  return uVar1;
}




undefined8 FUN_009867f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00986bcc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d0aa94(param_1,uVar1);
  return uVar1;
}




undefined8 FUN_00986830(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009873e4();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d0aa94(param_1,uVar1);
  return uVar1;
}




undefined * FUN_00986870(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = strcmp(PTR_s_Tutorial05_5v5_Client_02be31b8,param_1);
  puVar1 = PTR_FUN_02be31c0;
  if (iVar2 != 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}




void FUN_009868ac(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009868d8(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009868d8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_0281a310;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009869bc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_009869e8(DAT_02e3efb8);
  return;
}




undefined8 * FUN_009869e8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_0281a750;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00986acc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00986af8(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00986af8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d22364(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00986bcc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00986bf8(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00986bf8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_0281a288;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00986cdc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00986d08(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00986d08(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d17b10(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00986ddc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00986e08(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00986e08(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d18180(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00986ee0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00986f0c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00986f0c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d1740c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00986fe0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098700c(DAT_02e3efb8);
  return;
}

