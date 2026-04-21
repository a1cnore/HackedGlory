// functions/00cc1 — 36 functions
#include "libGameKindred.h"




void FUN_00cc100c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a09558();
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_008fa54c(local_68,&DAT_01e277f2);
  FUN_00a09850(uVar2,local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc10bc(long param_1)

{
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),1);
  return;
}




void FUN_00cc10c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c168;
  if ((*(byte *)(param_1 + 0x3a7) & 1) != 0) {
    operator_delete((void *)param_1[0x3a9]);
  }
  if ((*(byte *)(param_1 + 0x3a4) & 1) != 0) {
    operator_delete((void *)param_1[0x3a6]);
  }
  param_1[0x39e] = &PTR_FUN_027ee770;
  if ((void *)param_1[0x3a3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a3]);
    param_1[0x3a3] = 0;
    param_1[0x3a2] = 0;
  }
  if ((void *)param_1[0x3a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a1]);
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
  }
  param_1[0x39e] = &PTR___cxa_pure_virtual_027ee7a0;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc1180(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c168;
  if ((*(byte *)(param_1 + 0x3a7) & 1) != 0) {
    operator_delete((void *)param_1[0x3a9]);
  }
  if ((*(byte *)(param_1 + 0x3a4) & 1) != 0) {
    operator_delete((void *)param_1[0x3a6]);
  }
  param_1[0x39e] = &PTR_FUN_027ee770;
  if ((void *)param_1[0x3a3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a3]);
    param_1[0x3a3] = 0;
    param_1[0x3a2] = 0;
  }
  if ((void *)param_1[0x3a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a1]);
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
  }
  param_1[0x39e] = &PTR___cxa_pure_virtual_027ee7a0;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc1240(uint *param_1,undefined8 *param_2)

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
    FUN_00cc12d4(param_1,uVar2);
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




void FUN_00cc12d4(uint *param_1,uint param_2)

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




void FUN_00cc1368(long param_1)

{
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),1);
  return;
}




void thunk_FUN_00cc100c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte abStack_68 [16];
  void *pvStack_58;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a09558();
  FUN_008fa54c(abStack_50,&DAT_01e277f2);
  FUN_008fa54c(abStack_68,&DAT_01e277f2);
  FUN_00a09850(uVar2,abStack_50,abStack_68);
  if ((abStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if ((abStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  FUN_00c4bcc0(*(undefined8 *)(param_1 + 0x1cf8),0);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc1378(long *param_1)

{
  undefined8 uVar1;
  
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280c298;
  FUN_00bdf760(param_1 + 0x39e);
  FUN_00b0780c(param_1,param_1[0x39f]);
  uVar1 = FUN_00e6ce7c("MARKET_DESC_BATTLE_PASS_-_SPRING_2019",0);
  FUN_00b078b8(param_1,uVar1);
  FUN_00b075b8(param_1,1);
  FUN_00bdf8b4(param_1 + 0x39e);
                    /* WARNING: Could not recover jumptable at 0x00cc13fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00cc1400(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cc1408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_00cc140c(long param_1)

{
  long lVar1;
  float fVar2;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  fVar2 = fStack_3c + -140.0;
  if (3000.0 < fStack_3c + -140.0) {
    fVar2 = 3000.0;
  }
  FUN_00b07d08(fVar2,local_40 + -140.0,param_1,0);
  local_48 = NEON_fmov(0x40a00000,4);
  FUN_00b0877c(param_1,&local_48);
  FUN_00b07b80(fVar2,local_40 + -140.0,param_1);
  FUN_00f13f08(*(undefined8 *)(param_1 + 0x1cf8));
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc14cc(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d28);
  FUN_00cc1378();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cc1518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c298;
  FUN_00bdf7cc(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc1554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c298;
  FUN_00bdf7cc(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




uint FUN_00cc1598(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_00a099f8();
  if (*(char *)(lVar3 + 0x60) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_00aa19fc("SKILL_RESET_NOTIFICATION");
    uVar2 = 0;
    if ((uVar4 & 1) == 0) {
      lVar3 = FUN_00940b98(0);
      iVar1 = *(int *)(lVar3 + 0x10);
      uVar5 = FUN_00a099f8();
      lVar3 = FUN_00a09da4(uVar5,iVar1 + -1);
      uVar2 = 0;
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 100) < 0) {
          uVar2 = *(uint *)(lVar3 + 0x68) >> 0x1f ^ 1;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}




void * FUN_00cc1610(void)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00cc1598();
  pvVar2 = (void *)0x0;
  if ((uVar1 & 1) != 0) {
    pvVar2 = operator_new(0x1df0);
    FUN_00cc1664();
    FUN_00aa18e0(pvVar2,"SKILL_RESET_NOTIFICATION",1,0,1);
  }
  return pvVar2;
}




void FUN_00cc1664(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b06f74();
  plVar1 = param_1 + 0x39e;
  *param_1 = (long)&PTR_FUN_0280c3c8;
  FUN_00f0e4a8(plVar1);
  FUN_00be0c80(param_1 + 0x3bc);
  uVar3 = FUN_00e6ce7c("SKILL_RESET_TITLE",0);
  thunk_FUN_00e7051c(&local_48,uVar3);
  FUN_00e705c8(&local_58,"[NEW_SEASON]");
  lVar4 = FUN_00940b98();
  FUN_00cb47e8(&local_68,*(undefined4 *)(lVar4 + 0x10),0,0,1);
  FUN_00e71248(&local_48,0,&local_58,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00b078b8(param_1,&local_48);
  FUN_00b075b8(param_1,1);
  FUN_00b0780c(param_1,plVar1);
  FUN_00b0780c(param_1,param_1[0x3bd]);
  FUN_00f0e548(plVar1,"build://MenuBackground_SeasonTrans.png","full_splash_512");
  (**(code **)(*param_1 + 0x118))(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc17c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cc17cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_00cc17d0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  fStack_3c = fStack_3c + -200.0;
  local_40 = local_40 + -200.0;
  fVar3 = fStack_3c / local_40;
  if (1.7777778 <= fVar3) {
    if (1.7777778 < fVar3) {
      fStack_3c = fStack_3c * (1.7777778 / fVar3);
    }
  }
  else {
    local_40 = local_40 * (fVar3 / 1.7777778);
  }
  local_48 = 0;
  FUN_00b0877c(param_1,&local_48);
  FUN_00b07d08(fStack_3c,local_40,param_1,0);
  uVar2 = FUN_00b07b80(fStack_3c,param_1);
  local_48 = CONCAT44(local_40,uVar2);
  FUN_00f13f18(*(undefined8 *)(param_1 + 0x1de8),&local_48);
  (**(code **)(**(long **)(param_1 + 0x1de8) + 0x90))();
  FUN_00f13f18(param_1 + 0x1cf0,&local_48);
  FUN_00b0828c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc18d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c3c8;
  FUN_00be0d44(param_1 + 0x3bc);
  param_1[0x39e] = &PTR_FUN_028266f0;
  param_1[0x3b5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3b8);
  FUN_00f13d08(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc1944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c3c8;
  FUN_00be0d44(param_1 + 0x3bc);
  param_1[0x39e] = &PTR_FUN_028266f0;
  param_1[0x3b5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3b8);
  FUN_00f13d08(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc19bc(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1d40);
  FUN_00cc1a00(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cc1a00(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280c500;
  FUN_00be29f4(param_1 + 0x39e);
  local_50 = FUN_00f048a4("UI::SKIN_VIEWER::DIALOG_GET_OPALS");
  local_78 = thunk_FUN_00b07af8;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  local_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  local_50 = FUN_00f048a4("UI::SKIN_VIEWER::ON_SKIN_CRAFTED");
  local_78 = thunk_FUN_00b07af8;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  local_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  FUN_00be2cdc(param_1 + 0x39e,param_2);
  if ((*(int *)(param_2 + 0x20) < 1) &&
     (lVar2 = FUN_00ce9b48(*(undefined8 *)(param_2 + 0x10)), lVar2 != 0)) {
    uVar3 = FUN_00e6ce7c(*(undefined8 *)(lVar2 + 0x18),0);
    FUN_00b078b8(param_1,uVar3);
  }
  else {
    FUN_00cc78d0(&local_78,param_2,1);
    FUN_00b078b8(param_1,&local_78);
    if (local_70 != (long *)0x0) {
      operator_delete__(local_70);
      local_78 = (code *)0x0;
      local_70 = (long *)0x0;
    }
  }
  if (*(char *)(param_2 + 0x35) == '\0') {
    if (*(char *)(param_2 + 0x34) == '\0') {
      switch(*(undefined4 *)(param_2 + 0x20)) {
      case 0:
        uVar3 = 2;
        break;
      case 1:
        uVar3 = 3;
        break;
      case 2:
        uVar3 = 4;
        break;
      case 3:
        uVar3 = 5;
        break;
      default:
        goto switchD_00cc1b9c_default;
      }
    }
    else {
      uVar3 = 7;
    }
  }
  else {
    uVar3 = 6;
  }
  FUN_00b075b8(param_1,uVar3);
switchD_00cc1b9c_default:
  FUN_00b0780c(param_1,param_1[0x39f]);
  (**(code **)(*param_1 + 0x118))(param_1);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cc1bc8(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ulong uVar6;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&fStack_4c,&local_50);
  uVar6 = (ulong)(uint)(local_50 + -100.0);
  uVar5 = FUN_00b07b80(fStack_4c + -200.0,param_1);
  fVar3 = (float)FUN_00c576c0(uVar6,*(undefined8 *)(param_1 + 0x1cf8));
  fVar4 = (float)FUN_00c57694(uVar5,*(undefined8 *)(param_1 + 0x1cf8));
  fVar2 = (float)uVar5;
  if (fVar3 <= (float)uVar5) {
    fVar2 = fVar3;
  }
  fVar3 = (float)uVar6;
  if (fVar4 <= (float)uVar6) {
    fVar3 = fVar4;
  }
  FUN_00b07b44(fVar2,fVar3,param_1);
  FUN_00b07d08(param_1,0);
  FUN_00b0828c(param_1);
  FUN_00c57634(fVar2,fVar3,*(undefined8 *)(param_1 + 0x1cf8));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc1cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c500;
  FUN_00be2b50(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc1cf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280c500;
  FUN_00be2b50(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void * FUN_00cc1d38(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00be7654();
  pvVar2 = (void *)0x0;
  if ((uVar1 & 1) != 0) {
    pvVar2 = operator_new(0x9a8);
    FUN_00cc1db0(pvVar2,param_1,param_2);
    FUN_00aa18e0(pvVar2,"SPOILS_OF_WAR",1,0,1);
  }
  return pvVar2;
}




void FUN_00cc1da4(void)

{
  FUN_00aa1954("SPOILS_OF_WAR");
  return;
}




void FUN_00cc1db0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00accedc();
  *param_1 = (long)&PTR_FUN_0280c630;
  FUN_00be80ec(param_1 + 0x4f);
  (**(code **)(*param_1 + 0x110))(param_1);
  FUN_00acd1bc(param_1,param_1[0x50]);
  FUN_00be9a70(param_1 + 0x4f,param_2,param_3);
  local_50 = FUN_00f048a4("UI::HIDE_SILK_SCREEN");
  local_78 = FUN_00cc1e88;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc1e88(long param_1)

{
  *(uint *)(param_1 + 0x19c) = *(uint *)(param_1 + 0x19c) & 0xfffffffb;
  return;
}




void FUN_00cc1e98(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_0280c630;
  uVar1 = FUN_00f048a4("UI::HIDE_SILK_SCREEN");
  FUN_00cc1ef4(param_1,uVar1,FUN_00cc1e88,param_1);
  FUN_00be9214(param_1 + 0x4f);
  FUN_00acd0c0(param_1);
  return;
}




void FUN_00cc1ef4(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00cc1f48(void *param_1)

{
  FUN_00cc1e98();
  operator_delete(param_1);
  return;
}




void FUN_00cc1f6c(long param_1)

{
  *(uint *)(param_1 + 0x19c) = *(uint *)(param_1 + 0x19c) & 0xfffffffb;
  return;
}




void FUN_00cc1f7c(long param_1)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&uStack_2c,&local_30);
  FUN_00f13f08(uStack_2c,local_30,*(undefined8 *)(param_1 + 0x280));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc1fd8(long *param_1)

{
  thunk_FUN_00acd41c();
                    /* WARNING: Could not recover jumptable at 0x00cc2000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}

