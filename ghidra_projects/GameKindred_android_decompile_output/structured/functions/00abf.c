// functions/00abf — 17 functions
#include "libGameKindred.h"




void thunk_FUN_00abff10(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_PEEK_IN_BOX");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if ((*(byte *)(param_1 + 0x4a00) & 1) == 0) {
    lVar3 = param_1 + 0x4a01;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x4a10);
  }
  if (*(char *)(param_1 + 0x4a28) == '\0') {
    FUN_00904498(lVar3);
  }
  else {
    FUN_0090439c();
  }
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00abffb4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(param_1 + 0x1a0) == 0) || (uVar4 = FUN_00ccc0dc(), (uVar4 & 1) != 0)) {
    uVar5 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_BOX_EXPIRED_TITLE",0);
    pcVar6 = "MENU_DIALOG_CARD_PACK_BOX_EXPIRED";
LAB_00ac0008:
    uVar7 = FUN_00e6ce7c(pcVar6,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar5,uVar7,uVar8,0,0);
    goto LAB_00ac00c0;
  }
  lVar9 = FUN_009580b8();
  if (*(char *)(lVar9 + 0x568c) == '\0') {
    if (*(char *)(param_1 + 0x4a28) == '\0') {
LAB_00ac0178:
      uVar1 = *(uint *)(*(long *)(param_1 + 0x1a0) + 0xd4);
      lVar9 = FUN_009580b8();
      if (*(uint *)(lVar9 + 0x5454) < uVar1) {
        uVar5 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_CANT_AFFORD_TITLE",0);
        pcVar6 = "MENU_DIALOG_CARD_PACK_CANT_AFFORD_GLORY";
        goto LAB_00ac0008;
      }
    }
    else {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x1a0) + 0xd4);
      lVar9 = FUN_009580b8();
      if (*(uint *)(lVar9 + 0x5450) < uVar1) {
        uVar5 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_CANT_AFFORD_TITLE",0);
        uVar7 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_CANT_AFFORD_ICE",0);
        uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar10 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
        pcVar11 = thunk_FUN_00a9bda0;
        goto LAB_00ac00a8;
      }
      if (*(char *)(param_1 + 0x4a28) == '\0') goto LAB_00ac0178;
    }
    uVar3 = FUN_00f048a4("UI::EVENT_ATTEMPTING_CARD_PACK_PURCHASE");
    FUN_00f048e0(auStack_68,uVar3,param_1);
    FUN_00f04760(param_1,auStack_68,1);
    uVar5 = FUN_009580b8();
    FUN_00962500(uVar5,*(undefined8 *)(param_1 + 0x1a0));
  }
  else {
    uVar5 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar7 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar10 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
    pcVar11 = FUN_00ac01f4;
LAB_00ac00a8:
    FUN_00a9b94c(uVar5,uVar7,uVar8,uVar10,param_1,0,pcVar11);
  }
LAB_00ac00c0:
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00abf404(void)

{
  return;
}




void FUN_00abf408(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027d5708;
  FUN_00afc73c(param_1 + 0x80e);
  FUN_00afc73c(param_1 + 0x84a);
  FUN_00afc73c(param_1 + 0x886);
  FUN_00afc73c(param_1 + 0x8c2);
  param_1[0x34] = 0;
  if ((*(byte *)(param_1 + 0x940) & 1) != 0) {
    operator_delete((void *)param_1[0x942]);
  }
  puVar1 = param_1 + 0x93f;
  lVar2 = -0xd8;
  do {
    if ((*(byte *)(puVar1 + -2) & 1) != 0) {
      operator_delete((void *)*puVar1);
    }
    if ((*(byte *)(puVar1 + -5) & 1) != 0) {
      operator_delete((void *)puVar1[-3]);
    }
    if ((*(byte *)(puVar1 + -8) & 1) != 0) {
      operator_delete((void *)puVar1[-6]);
    }
    lVar2 = lVar2 + 0x48;
    puVar1 = puVar1 + -9;
  } while (lVar2 != 0);
  puVar1 = param_1 + 0x924;
  lVar2 = -0xd8;
  do {
    if ((*(byte *)(puVar1 + -2) & 1) != 0) {
      operator_delete((void *)*puVar1);
    }
    if ((*(byte *)(puVar1 + -5) & 1) != 0) {
      operator_delete((void *)puVar1[-3]);
    }
    if ((*(byte *)(puVar1 + -8) & 1) != 0) {
      operator_delete((void *)puVar1[-6]);
    }
    lVar2 = lVar2 + 0x48;
    puVar1 = puVar1 + -9;
  } while (lVar2 != 0);
  FUN_00f0a79c(param_1 + 0x908);
  FUN_00f0a79c(param_1 + 0x906);
  lVar2 = 0;
  do {
    FUN_00f0a79c((long)param_1 + lVar2 + 0x4820);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != -0x30);
  FUN_00f0a79c(param_1 + 0x8fe);
  FUN_00afc0a4(param_1 + 0x8c2);
  FUN_00afc0a4(param_1 + 0x886);
  FUN_00afc0a4(param_1 + 0x84a);
  FUN_00afc0a4(param_1 + 0x80e);
  FUN_00f0d3a4(param_1 + 0x7e8);
  FUN_00f0d3a4(param_1 + 0x7c2);
  FUN_00f0d3a4(param_1 + 0x79c);
  FUN_00f0d3a4(param_1 + 0x776);
  param_1[0x758] = &PTR_FUN_028266f0;
  param_1[0x76f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x772);
  FUN_00f13d08(param_1 + 0x758);
  param_1[0x73a] = &PTR_FUN_028266f0;
  param_1[0x751] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x754);
  FUN_00f13d08(param_1 + 0x73a);
  param_1[0x71c] = &PTR_FUN_028266f0;
  param_1[0x733] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x736);
  FUN_00f13d08(param_1 + 0x71c);
  param_1[0x6fe] = &PTR_FUN_028266f0;
  param_1[0x715] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x718);
  FUN_00f13d08(param_1 + 0x6fe);
  FUN_00f13d08(param_1 + 0x6e7);
  param_1[0x6c9] = &PTR_FUN_028266f0;
  param_1[0x6e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6e3);
  FUN_00f13d08(param_1 + 0x6c9);
  FUN_00f0d3a4(param_1 + 0x6a3);
  FUN_00f13d08(param_1 + 0x68c);
  param_1[0x66d] = &PTR_FUN_028266f0;
  param_1[0x684] = &PTR_FUN_02826850;
  param_1[0x1fe] = &PTR_FUN_027d51f0;
  FUN_00f0a79c(param_1 + 0x687);
  FUN_00f13d08(param_1 + 0x66d);
  param_1[0x64f] = &PTR_FUN_028266f0;
  param_1[0x666] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x669);
  FUN_00f13d08(param_1 + 0x64f);
  FUN_00f0d3a4(param_1 + 0x629);
  param_1[0x60b] = &PTR_FUN_028266f0;
  param_1[0x622] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x625);
  FUN_00f13d08(param_1 + 0x60b);
  FUN_00f01868(param_1 + 0x5fa);
  param_1[0x5dc] = &PTR_FUN_028266f0;
  param_1[0x5f3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5f6);
  FUN_00f13d08(param_1 + 0x5dc);
  param_1[0x1fe] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x5a5);
  FUN_00f01868(param_1 + 0x594);
  FUN_00f13d08(param_1 + 0x560);
  FUN_00f01868(param_1 + 0x54f);
  FUN_00f0d3a4(param_1 + 0x529);
  FUN_00f0d3a4(param_1 + 0x503);
  param_1[0x4e5] = &PTR_FUN_028266f0;
  param_1[0x4fc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4ff);
  FUN_00f13d08(param_1 + 0x4e5);
  param_1[0x4c7] = &PTR_FUN_028266f0;
  param_1[0x4de] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e1);
  FUN_00f13d08(param_1 + 0x4c7);
  FUN_00f01868(param_1 + 0x4b6);
  FUN_009c7fa8(param_1 + 0x1fe);
  param_1[0x1d2] = &PTR_FUN_027d3cc8;
  param_1[0x1e9] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x1fb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1fb]);
    param_1[0x1fb] = 0;
    param_1[0x1fa] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1d2);
  FUN_00f0d3a4(param_1 + 0x1ac);
  FUN_00f0d3a4(param_1 + 0x186);
  param_1[0x168] = &PTR_FUN_028266f0;
  param_1[0x17f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x182);
  FUN_00f13d08(param_1 + 0x168);
  FUN_009c825c(param_1 + 0x11a);
  FUN_00f01868(param_1 + 0x109);
  FUN_00f0d3a4(param_1 + 0xe3);
  FUN_00f0d3a4(param_1 + 0xbd);
  FUN_00f01868(param_1 + 0xac);
  FUN_00af8c0c(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_027da660;
  param_1[0x28] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x2e) & 1) != 0) {
    operator_delete((void *)param_1[0x30]);
  }
  FUN_0199fb94(param_1 + 0x2b);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00abf8f4(void *param_1)

{
  FUN_00abf408();
  operator_delete(param_1);
  return;
}




void FUN_00abf918(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x1a0) == 0) || (uVar3 = FUN_00ccc0dc(), (uVar3 & 1) != 0)) {
    FUN_00b09454(param_1 + 0xff0,0);
    bVar2 = false;
  }
  else {
    local_40 = FUN_00ccc1d4(*(undefined8 *)(param_1 + 0x1a0));
    FUN_00b25438(param_1 + 0xe90,&local_40);
    lVar4 = FUN_00ccc1d4(*(undefined8 *)(param_1 + 0x1a0));
    bVar2 = 0 < lVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00abf9b4(long param_1,uint param_2)

{
  FUN_00b09454(param_1 + 0xff0,param_2 & 1);
  return;
}




undefined4 FUN_00abf9c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  
  FUN_00f01980();
  lVar1 = param_1 + 0x1a8;
  FUN_00af97f4(lVar1,0);
  FUN_00afa680(lVar1);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  lVar2 = 0x50;
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) != '\0') {
    lVar2 = 0x38;
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x558) + 8) + lVar2);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00a99928(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00a99998(puVar6,lVar1,uVar5);
  FUN_00f022a0(param_1,puVar6);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x404ccccd,puVar6);
  FUN_00f022a0(param_1,puVar6);
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00a99a74(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00a99ab4(puVar6,lVar1);
  FUN_00f022a0(param_1,puVar6);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  lVar2 = 0x48;
  if (*(char *)(*(long *)(param_1 + 0x1a0) + 0xed) != '\0') {
    lVar2 = 0x30;
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x558) + 8) + lVar2);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00a99928(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00a99998(puVar6,lVar1,uVar5);
  FUN_00f022a0(param_1,puVar6);
  return 0x3f99999a;
}




void FUN_00abfcec(void)

{
  return;
}




void FUN_00abfcf0(long *param_1)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  plVar1 = param_1 + 0x17;
  FUN_00af6c14(plVar1);
  *(undefined1 *)(param_1 + 0x33) = 1;
  if ((*(uint *)((long)param_1 + 0x13c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00af6d64(plVar1);
  FUN_00f01980(plVar1);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00abfe78;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00abfe78:
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3f000000,puVar5);
  FUN_00f02308(plVar1,puVar4,puVar5,0);
  return;
}




void FUN_00abfeb0(long param_1)

{
  FUN_00af6bfc(param_1 + 0xb8);
  return;
}




void FUN_00abfeb8(long param_1)

{
  FUN_00af6c04(param_1 + 0xb8);
  return;
}




void FUN_00abfed0(long param_1)

{
  FUN_00af6c0c(param_1 + 0xb8);
  return;
}




undefined1 FUN_00abfed8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0xed);
}




undefined4 FUN_00abfee4(long *param_1)

{
  (**(code **)(*param_1 + 0x48))();
  return 0x44098000;
}




void FUN_00abff10(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_PEEK_IN_BOX");
  FUN_00f048e0(auStack_48,uVar2,param_1);
  FUN_00f04760(param_1,auStack_48,1);
  if ((*(byte *)(param_1 + 0x4a00) & 1) == 0) {
    lVar3 = param_1 + 0x4a01;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x4a10);
  }
  if (*(char *)(param_1 + 0x4a28) == '\0') {
    FUN_00904498(lVar3);
  }
  else {
    FUN_0090439c();
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00abffb4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(param_1 + 0x1a0) == 0) || (uVar4 = FUN_00ccc0dc(), (uVar4 & 1) != 0)) {
    uVar5 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_BOX_EXPIRED_TITLE",0);
    pcVar6 = "MENU_DIALOG_CARD_PACK_BOX_EXPIRED";
LAB_00ac0008:
    uVar7 = FUN_00e6ce7c(pcVar6,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar5,uVar7,uVar8,0,0);
    goto LAB_00ac00c0;
  }
  lVar9 = FUN_009580b8();
  if (*(char *)(lVar9 + 0x568c) == '\0') {
    if (*(char *)(param_1 + 0x4a28) == '\0') {
LAB_00ac0178:
      uVar1 = *(uint *)(*(long *)(param_1 + 0x1a0) + 0xd4);
      lVar9 = FUN_009580b8();
      if (*(uint *)(lVar9 + 0x5454) < uVar1) {
        uVar5 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_CANT_AFFORD_TITLE",0);
        pcVar6 = "MENU_DIALOG_CARD_PACK_CANT_AFFORD_GLORY";
        goto LAB_00ac0008;
      }
    }
    else {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x1a0) + 0xd4);
      lVar9 = FUN_009580b8();
      if (*(uint *)(lVar9 + 0x5450) < uVar1) {
        uVar5 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_CANT_AFFORD_TITLE",0);
        uVar7 = FUN_00e6ce7c("MENU_DIALOG_CARD_PACK_CANT_AFFORD_ICE",0);
        uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        uVar10 = FUN_00e6ce7c("MARKET_DIALOG_BUY_ICE",0);
        pcVar11 = thunk_FUN_00a9bda0;
        goto LAB_00ac00a8;
      }
      if (*(char *)(param_1 + 0x4a28) == '\0') goto LAB_00ac0178;
    }
    uVar3 = FUN_00f048a4("UI::EVENT_ATTEMPTING_CARD_PACK_PURCHASE");
    FUN_00f048e0(auStack_68,uVar3,param_1);
    FUN_00f04760(param_1,auStack_68,1);
    uVar5 = FUN_009580b8();
    FUN_00962500(uVar5,*(undefined8 *)(param_1 + 0x1a0));
  }
  else {
    uVar5 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar7 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar10 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
    pcVar11 = FUN_00ac01f4;
LAB_00ac00a8:
    FUN_00a9b94c(uVar5,uVar7,uVar8,uVar10,param_1,0,pcVar11);
  }
LAB_00ac00c0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

