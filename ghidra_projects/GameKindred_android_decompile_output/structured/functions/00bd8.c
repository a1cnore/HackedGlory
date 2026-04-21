// functions/00bd8 — 47 functions
#include "libGameKindred.h"




void thunk_FUN_00bd81f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_48 [3];
  code *pcStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00969248();
  FUN_009683b8(uVar2,1);
  uVar2 = FUN_00aa323c();
  alStack_48[1] = 0;
  pcStack_30 = thunk_FUN_00bd8314;
  alStack_48[0] = param_1;
  alStack_48[2] = param_1;
  FUN_009e4694(uVar2,alStack_48);
  FUN_00bd8284(param_1);
  FUN_00bd8314(param_1);
  FUN_00bd83bc(param_1);
  FUN_00bda0e0(param_1 + 0xa0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bd848c(long param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = (uint *)FUN_00aa323c();
  lVar6 = (ulong)*puVar1 << 5;
  plVar4 = *(long **)(puVar1 + 2);
  do {
    plVar5 = plVar4;
    if (lVar6 == 0) goto LAB_00bd84c8;
    lVar6 = lVar6 + -0x20;
    plVar4 = plVar5 + 4;
  } while (*plVar5 != param_1);
  FUN_00910480(puVar1,plVar5);
LAB_00bd84c8:
  uVar2 = FUN_00969248();
  FUN_009683b8(uVar2,0);
  uVar3 = FUN_0092e900();
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0xf8);
    if ((*(byte *)((long)plVar4 + 0x2c34) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bd8530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x148))(plVar4,0);
      return;
    }
  }
  else {
    uVar3 = FUN_00be3ffc(*(undefined8 *)(param_1 + 0xf0));
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bd84fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x40))();
      return;
    }
  }
  return;
}




void thunk_FUN_00bd8314(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_0093b510();
  lVar3 = FUN_00e6b5e4();
  if ((((lVar2 + 0x1c20 <= lVar3) && (*(char *)(param_1 + 0x130) != '\0')) &&
      (uVar4 = FUN_00ed4748(*(undefined8 *)(param_1 + 8)), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_00bd21d0(*(undefined8 *)(param_1 + 0xe0)), (uVar4 & 1) != 0)) {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_00ed30c4();
    if (iVar1 == 0) {
      FUN_00aa323c();
      if (DAT_03133c90 == '\0') {
        FUN_00aa323c();
        uVar4 = FUN_00aa31d0();
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_00aa2a7c(), (uVar4 & 1) == 0)) {
          FUN_00cc2004(&DAT_01e277f2);
          FUN_00aa323c();
          DAT_03133c90 = '\x01';
        }
      }
    }
  }
  return;
}




void FUN_00bd81f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_48 [3];
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00969248();
  FUN_009683b8(uVar2,1);
  uVar2 = FUN_00aa323c();
  local_48[1] = 0;
  pcStack_30 = thunk_FUN_00bd8314;
  local_48[0] = param_1;
  local_48[2] = param_1;
  FUN_009e4694(uVar2,local_48);
  FUN_00bd8284(param_1);
  FUN_00bd8314(param_1);
  FUN_00bd83bc(param_1);
  FUN_00bda0e0(param_1 + 0xa0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd8284(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0093d84c();
  if (((uVar1 & 1) != 0) && ((DAT_0313a8c8 & 1) == 0)) {
    uVar2 = FUN_00e6ce7c("MAIN_NDA_WARNING_TITLE",0);
    uVar3 = FUN_00e6ce7c("MAIN_NDA_WARNING_DIALOG_TEXT",0);
    uVar4 = FUN_00e6ce7c("MAIN_NDA_WARNING_ACCEPT",0);
    FUN_00a9b8b8(uVar2,uVar3,uVar4,param_1,0);
    DAT_0313a8c8 = 1;
  }
  return;
}




void FUN_00bd8314(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_0093b510();
  lVar3 = FUN_00e6b5e4();
  if ((((lVar2 + 0x1c20 <= lVar3) && (*(char *)(param_1 + 0x130) != '\0')) &&
      (uVar4 = FUN_00ed4748(*(undefined8 *)(param_1 + 8)), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_00bd21d0(*(undefined8 *)(param_1 + 0xe0)), (uVar4 & 1) != 0)) {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_00ed30c4();
    if (iVar1 == 0) {
      FUN_00aa323c();
      if (DAT_03133c90 == '\0') {
        FUN_00aa323c();
        uVar4 = FUN_00aa31d0();
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_00aa2a7c(), (uVar4 & 1) == 0)) {
          FUN_00cc2004(&DAT_01e277f2);
          FUN_00aa323c();
          DAT_03133c90 = '\x01';
        }
      }
    }
  }
  return;
}




void FUN_00bd83bc(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  
  FUN_00c3df08(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_00ed30c4();
  lVar3 = FUN_00a1ffc0();
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = *(undefined1 *)(param_1 + 0x131);
  plVar4 = (long *)(lVar3 + 0x10);
  plVar5 = (long *)*plVar4;
  plVar7 = plVar4;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= 0xd1bb1e68) {
        plVar7 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < 0xd1bb1e68];
    } while (plVar5 != (long *)0x0);
    if (((plVar7 != plVar4) && (*(uint *)(plVar7 + 4) < 0xd1bb1e69)) && ((int)plVar7[5] != 0)) {
      lVar3 = 0;
      uVar8 = 0;
      do {
        (*(code *)((undefined8 *)(plVar7[6] + lVar3))[1])
                  (*(undefined8 *)(plVar7[6] + lVar3),uVar6,iVar2 == 0,uVar1);
        uVar8 = uVar8 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar8 < *(uint *)(plVar7 + 5));
    }
  }
  return;
}




void FUN_00bd848c(long param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = (uint *)FUN_00aa323c();
  lVar6 = (ulong)*puVar1 << 5;
  plVar4 = *(long **)(puVar1 + 2);
  do {
    plVar5 = plVar4;
    if (lVar6 == 0) goto LAB_00bd84c8;
    lVar6 = lVar6 + -0x20;
    plVar4 = plVar5 + 4;
  } while (*plVar5 != param_1);
  FUN_00910480(puVar1,plVar5);
LAB_00bd84c8:
  uVar2 = FUN_00969248();
  FUN_009683b8(uVar2,0);
  uVar3 = FUN_0092e900();
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0xf8);
    if ((*(byte *)((long)plVar4 + 0x2c34) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bd8530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x148))(plVar4,0);
      return;
    }
  }
  else {
    uVar3 = FUN_00be3ffc(*(undefined8 *)(param_1 + 0xf0));
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bd84fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x40))();
      return;
    }
  }
  return;
}




void thunk_FUN_00bd8314(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_0093b510();
  lVar3 = FUN_00e6b5e4();
  if ((((lVar2 + 0x1c20 <= lVar3) && (*(char *)(param_1 + 0x130) != '\0')) &&
      (uVar4 = FUN_00ed4748(*(undefined8 *)(param_1 + 8)), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_00bd21d0(*(undefined8 *)(param_1 + 0xe0)), (uVar4 & 1) != 0)) {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_00ed30c4();
    if (iVar1 == 0) {
      FUN_00aa323c();
      if (DAT_03133c90 == '\0') {
        FUN_00aa323c();
        uVar4 = FUN_00aa31d0();
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_00aa2a7c(), (uVar4 & 1) == 0)) {
          FUN_00cc2004(&DAT_01e277f2);
          FUN_00aa323c();
          DAT_03133c90 = '\x01';
        }
      }
    }
  }
  return;
}




void FUN_00bd8538(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
                    /* WARNING: Could not recover jumptable at 0x00bd8568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  return;
}




void FUN_00bd856c(long param_1)

{
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void FUN_00bd8578(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bd9fc8(param_1 + 0x70);
  FUN_00c3dcbc(*(undefined8 *)(param_1 + 8),iVar1 != 0 || *(char *)(param_1 + 0x133) != '\0',
               iVar1 != 0);
  return;
}




void FUN_00bd85bc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bd9fc8(param_1 + 0x70);
  FUN_00c3dcbc(*(undefined8 *)(param_1 + 8),iVar1 != 0 || *(char *)(param_1 + 0x133) != '\0',
               iVar1 != 0);
  return;
}




void FUN_00bd8600(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x134) = 1;
  }
  return;
}




void FUN_00bd8630(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009e80b8();
  FUN_009e8824(uVar1,(undefined2 *)(param_1 + 0x118));
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x118) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void FUN_00bd8680(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009e80b8();
  FUN_009e8824(uVar1,(undefined2 *)(param_1 + 0x118));
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x118) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void FUN_00bd86d0(long param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x110) != 0) {
    local_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    FUN_00cc1d38(*(long *)(param_1 + 0x110),&local_50);
    FUN_00bd98dc(&local_50,local_48);
    pvVar2 = *(void **)(param_1 + 0x110);
    if (pvVar2 != (void *)0x0) {
      if ((*(byte *)((long)pvVar2 + 0x88) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + 0x98));
      }
      FUN_009ec250((long)pvVar2 + 0x20,1);
      FUN_009ec324((long)pvVar2 + 0x10,1);
      FUN_009ec3a8(pvVar2,1);
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00bd8790(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = &local_38;
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_00cc1d38(param_2,&local_40);
  FUN_00bd98dc(&local_40,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd8800(undefined8 param_1)

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




void FUN_00bd8860(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_00a099f8();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
  plVar1 = *(long **)(lVar2 + 0x38);
  do {
    plVar3 = plVar1;
    if (lVar4 == 0) goto LAB_00bd889c;
    lVar4 = lVar4 + -0x20;
    plVar1 = plVar3 + 4;
  } while (*plVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x30),plVar3);
LAB_00bd889c:
  FUN_00bd88ac(param_1);
  return;
}




void FUN_00bd88ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = 0;
  if ((DAT_0313a8c9 & 1) == 0) {
    DAT_0313a8c9 = 1;
    lVar3 = FUN_00cc1610(0);
    if (lVar3 == 0) {
      FUN_00bd8680(param_1);
    }
    else {
      local_30 = DAT_03210c2c;
      local_58 = thunk_FUN_00bd8680;
      local_40 = 0;
      uStack_38 = 0;
      local_48 = 0;
      uStack_50 = param_1;
      FUN_009693a0(lVar3 + 8,&local_58);
    }
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00bd8950(long param_1)

{
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void thunk_FUN_00bd8630(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009e80b8();
  FUN_009e8824(uVar1,(undefined2 *)(param_1 + 0x118));
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x118) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void * FUN_00bd8960(void)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = operator_new(0x1e18);
  FUN_00b7dedc();
  *(uint *)((long)plVar1 + 0x84) = *(uint *)((long)plVar1 + 0x84) | 0x20;
  pvVar2 = operator_new(0x278);
  FUN_00accedc();
  FUN_00acd1bc(pvVar2,plVar1);
  (**(code **)(*plVar1 + 0x138))(0x3f000000,plVar1,1,4,1);
  FUN_00aa18e0(pvVar2,0,1,0,1);
  return pvVar2;
}




void FUN_00bd89ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_TOASTIE_INVITED_TO_GUILD_NO_PLAYER",0);
  thunk_FUN_00e7051c(&local_38,uVar2);
  FUN_00e705c8(&local_48,"[GUILD_NAME]");
  FUN_00e71248(&local_38,0,&local_48,param_2);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00a9da50(0xbf800000,&local_38,0,1);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bd89ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  void *pvStack_40;
  undefined8 uStack_38;
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_TOASTIE_INVITED_TO_GUILD_NO_PLAYER",0);
  thunk_FUN_00e7051c(&uStack_38,uVar2);
  FUN_00e705c8(&uStack_48,"[GUILD_NAME]");
  FUN_00e71248(&uStack_38,0,&uStack_48,param_2);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  FUN_00a9da50(0xbf800000,&uStack_38,0,1);
  if (pvStack_30 != (void *)0x0) {
    operator_delete__(pvStack_30);
    uStack_38 = 0;
    pvStack_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd8aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_TOASTIE_INVITED_TO_USER_TEAM",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  FUN_00e705c8(&local_58,"[TEAM_NAME]");
  FUN_00e71248(&local_48,0,&local_58,param_2);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e705c8(&local_58,"[PLAYER_HANDLE]");
  FUN_00e71248(&local_48,0,&local_58,param_3);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00a9da50(0xbf800000,&local_48,0,1);
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




void thunk_FUN_00bd8aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_TOASTIE_INVITED_TO_USER_TEAM",0);
  thunk_FUN_00e7051c(&uStack_48,uVar2);
  FUN_00e705c8(&uStack_58,"[TEAM_NAME]");
  FUN_00e71248(&uStack_48,0,&uStack_58,param_2);
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  FUN_00e705c8(&uStack_58,"[PLAYER_HANDLE]");
  FUN_00e71248(&uStack_48,0,&uStack_58,param_3);
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  FUN_00a9da50(0xbf800000,&uStack_48,0,1);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd8ba4(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aa323c();
  DAT_03133c90 = 0;
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_008fcdb8(local_50,&DAT_0320ffa8);
    FUN_00e81200(local_50);
    FUN_0096204c(&local_38,local_50);
    uVar3 = FUN_009580b8();
    FUN_00962178(uVar3,&local_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_00951534(&local_38,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bd8ba4(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte abStack_50 [16];
  void *pvStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00aa323c();
  DAT_03133c90 = 0;
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_008fcdb8(abStack_50,&DAT_0320ffa8);
    FUN_00e81200(abStack_50);
    FUN_0096204c(&uStack_38,abStack_50);
    uVar3 = FUN_009580b8();
    FUN_00962178(uVar3,&uStack_38);
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
    FUN_00951534(&uStack_38,1);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd8c50(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00cb013c();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 8)), (uVar1 & 1) != 0))
  {
    lVar2 = FUN_00940b98();
    if ((0 < *(int *)(lVar2 + 0x10)) &&
       (uVar1 = FUN_00aa19fc("SEASON_REWARDS_NOTIFICATION_POPUP"), (uVar1 & 1) == 0)) {
      FUN_00bd8cac();
      return;
    }
  }
  return;
}




void FUN_00bd8cac(void)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = operator_new(0x2f30);
  FUN_00b6f310();
  *(uint *)((long)plVar1 + 0x84) = *(uint *)((long)plVar1 + 0x84) | 0x20;
  pvVar2 = operator_new(0x278);
  FUN_00accedc();
  FUN_00acd1bc(pvVar2,plVar1);
  (**(code **)(*plVar1 + 0x138))(0x3f000000,plVar1,1,4,1);
  FUN_00aa18e0(pvVar2,"SEASON_REWARDS_NOTIFICATION_POPUP",1,0,1);
  return;
}




void FUN_00bd8d34(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00bd83bc();
  FUN_00bd8314(param_1);
  uVar1 = FUN_00aa1880();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_009580c4(), (uVar1 & 1) != 0)) {
    lVar2 = FUN_00940bf8();
    if ((*(char *)(lVar2 + 8) != '\0') && (uVar1 = FUN_0093aef4(), (uVar1 & 1) == 0)) {
      lVar2 = FUN_009580b8();
      if (*(int *)(lVar2 + 0x55e0) == 4) {
        uVar1 = FUN_009f1f70(0x19);
        if ((uVar1 & 1) != 0) {
          FUN_00cc3520();
        }
        FUN_0093ae2c(1);
      }
    }
    if ((*(char *)(param_1 + 0x135) == '\0') &&
       (uVar1 = FUN_0093734c("AutoBuySettingPopupShown",0), (uVar1 & 1) == 0)) {
      lVar2 = FUN_009580b8();
      if (1 < *(uint *)(lVar2 + 0x55e0)) {
        FUN_00cc3728();
        FUN_00936e48("AutoBuySettingPopupShown",1);
        *(undefined1 *)(param_1 + 0x135) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x136) == '\0') &&
       (uVar1 = FUN_0093734c("AutoLevelSettingPopupShown",0), (uVar1 & 1) == 0)) {
      lVar2 = FUN_009580b8();
      if (1 < *(uint *)(lVar2 + 0x55e0)) {
        FUN_00cc38d8();
        FUN_00936e48("AutoLevelSettingPopupShown",1);
        *(undefined1 *)(param_1 + 0x136) = 1;
      }
    }
  }
  return;
}




void thunk_FUN_00bd83bc(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  
  FUN_00c3df08(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_00ed30c4();
  lVar3 = FUN_00a1ffc0();
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  uVar1 = *(undefined1 *)(param_1 + 0x131);
  plVar4 = (long *)(lVar3 + 0x10);
  plVar5 = (long *)*plVar4;
  plVar7 = plVar4;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= 0xd1bb1e68) {
        plVar7 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < 0xd1bb1e68];
    } while (plVar5 != (long *)0x0);
    if (((plVar7 != plVar4) && (*(uint *)(plVar7 + 4) < 0xd1bb1e69)) && ((int)plVar7[5] != 0)) {
      lVar3 = 0;
      uVar8 = 0;
      do {
        (*(code *)((undefined8 *)(plVar7[6] + lVar3))[1])
                  (*(undefined8 *)(plVar7[6] + lVar3),uVar6,iVar2 == 0,uVar1);
        uVar8 = uVar8 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar8 < *(uint *)(plVar7 + 5));
    }
  }
  return;
}




long FUN_00bd8e48(long param_1)

{
  long lVar1;
  
  FUN_00c3df08(*(undefined8 *)(param_1 + 8));
  FUN_00ed2508();
  FUN_00bd9e88(param_1 + 0x70,0);
  *(undefined1 *)(param_1 + 0x132) = 1;
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




void FUN_00bd8e94(long param_1)

{
  FUN_00c3df08(*(undefined8 *)(param_1 + 8));
  FUN_00ed2508();
  return;
}




undefined8 FUN_00bd8eac(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    FUN_00bd9e88(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  return 0;
}




undefined8 FUN_00bd8ef4(long param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    FUN_00bd9e88(param_1 + 0x70,2);
    *(undefined1 *)(param_1 + 0x132) = 1;
    if (*param_2 != 0) {
      (**(code **)(**(long **)(param_1 + 0x100) + 0x198))(*(long **)(param_1 + 0x100),param_2);
    }
  }
  return 0;
}




long FUN_00bd8f5c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    FUN_00bd9e88(param_1 + 0x70,1);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar1 = *(long *)(param_1 + 0x108) + 0x30;
  }
  return lVar1;
}




long FUN_00bd8fb0(long param_1,int *param_2)

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
    FUN_00bd21e4(*(undefined8 *)(param_1 + 0xe0),puVar2);
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




void thunk_FUN_00bd8680(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009e80b8();
  FUN_009e8824(uVar1,(undefined2 *)(param_1 + 0x118));
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x118) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




long thunk_FUN_00bd8e48(long param_1)

{
  long lVar1;
  
  FUN_00c3df08(*(undefined8 *)(param_1 + 8));
  FUN_00ed2508();
  FUN_00bd9e88(param_1 + 0x70,0);
  *(undefined1 *)(param_1 + 0x132) = 1;
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




long thunk_FUN_00bd8f5c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    FUN_00ed2508();
    FUN_00bd9e88(param_1 + 0x70,1);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar1 = *(long *)(param_1 + 0x108) + 0x30;
  }
  return lVar1;
}




long thunk_FUN_00bd8fb0(long param_1,int *param_2)

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
    FUN_00bd21e4(*(undefined8 *)(param_1 + 0xe0),puVar2);
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




void thunk_FUN_00bd8c50(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00cb013c();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00ed4748(*(undefined8 *)(param_1 + 8)), (uVar1 & 1) != 0))
  {
    lVar2 = FUN_00940b98();
    if ((0 < *(int *)(lVar2 + 0x10)) &&
       (uVar1 = FUN_00aa19fc("SEASON_REWARDS_NOTIFICATION_POPUP"), (uVar1 & 1) == 0)) {
      FUN_00bd8cac();
      return;
    }
  }
  return;
}




void thunk_FUN_00bd8314(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_0093b510();
  lVar3 = FUN_00e6b5e4();
  if ((((lVar2 + 0x1c20 <= lVar3) && (*(char *)(param_1 + 0x130) != '\0')) &&
      (uVar4 = FUN_00ed4748(*(undefined8 *)(param_1 + 8)), (uVar4 & 1) != 0)) &&
     (uVar4 = FUN_00bd21d0(*(undefined8 *)(param_1 + 0xe0)), (uVar4 & 1) != 0)) {
    FUN_00c3df08(*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_00ed30c4();
    if (iVar1 == 0) {
      FUN_00aa323c();
      if (DAT_03133c90 == '\0') {
        FUN_00aa323c();
        uVar4 = FUN_00aa31d0();
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_00aa2a7c(), (uVar4 & 1) == 0)) {
          FUN_00cc2004(&DAT_01e277f2);
          FUN_00aa323c();
          DAT_03133c90 = '\x01';
        }
      }
    }
  }
  return;
}




void thunk_FUN_00bd8860(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_00a099f8();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
  plVar1 = *(long **)(lVar2 + 0x38);
  do {
    plVar3 = plVar1;
    if (lVar4 == 0) goto LAB_00bd889c;
    lVar4 = lVar4 + -0x20;
    plVar1 = plVar3 + 4;
  } while (*plVar3 != param_1);
  FUN_00910480((uint *)(lVar2 + 0x30),plVar3);
LAB_00bd889c:
  FUN_00bd88ac(param_1);
  return;
}

