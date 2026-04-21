// functions/00c51 — 9 functions
#include "libGameKindred.h"




void FUN_00c519f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c51a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c51a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c53210(param_1,param_4,param_5);
  return;
}




void FUN_00c51a14(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0d75c(param_3 + 0x1678);
  FUN_00f0d548(param_3 + 0x1678);
  param_2 = param_2 * 1.1;
  if (0.0 < param_2) {
    local_40 = param_2;
    fStack_3c = param_2;
    FUN_00f13f18(param_3 + 0xb8,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c51a9c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0d378(param_3 + 0x1678);
  FUN_00f0d548(param_3 + 0x1678);
  param_2 = param_2 * 1.1;
  if (0.0 < param_2) {
    local_40 = param_2;
    fStack_3c = param_2;
    FUN_00f13f18(param_3 + 0xb8,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c51b24(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x9930);
  *(byte *)(param_1 + 0x9930) = bVar1 ^ 1;
  *(uint *)(param_1 + 0x8b14) =
       *(uint *)(param_1 + 0x8b14) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  FUN_00c52e88();
  return;
}




void FUN_00c51b58(undefined1 param_1 [16],float param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_3 + 0x78))(param_3,param_4,1);
  *(uint *)((long)param_3 + 0x16fc) = *(uint *)((long)param_3 + 0x16fc) & 0xfffffffb;
  plVar2 = (long *)FUN_00f14058(param_3);
  (**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)FUN_00f14058(param_3);
  (**(code **)(*plVar2 + 0x68))(plVar2,param_3 + 0x17,0,2);
  plVar2 = (long *)FUN_00f14058(param_3);
  (**(code **)(*plVar2 + 0x70))(plVar2,0xe);
  plVar2 = (long *)FUN_00f14058(param_3);
  (**(code **)(*plVar2 + 0x68))(plVar2,param_4,1,10);
  (**(code **)(*param_4 + 0x48))(param_4);
  param_2 = param_2 * 1.1;
  if (0.0 < param_2) {
    local_40 = param_2;
    fStack_3c = param_2;
    FUN_00f13f18(param_3 + 0x17,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c51c68(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xb0e0);
  *(byte *)(param_1 + 0xb0e0) = bVar1 ^ 1;
  *(uint *)(param_1 + 0xa2c4) =
       *(uint *)(param_1 + 0xa2c4) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  FUN_00c52e88();
  return;
}




void FUN_00c51c9c(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xc890);
  *(byte *)(param_1 + 0xc890) = bVar1 ^ 1;
  *(uint *)(param_1 + 0xba74) =
       *(uint *)(param_1 + 0xba74) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  return;
}




void FUN_00c51cd4(void *param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined2 local_9c;
  undefined2 local_9a;
  code *local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar13 = 0;
  do {
    FUN_00f0d378((long)param_1 + lVar13 + 0xdcc8,*(undefined8 *)((long)param_1 + 0xe8e8));
    lVar13 = lVar13 + 0x130;
  } while (lVar13 != 0x5f0);
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_I_AGREE",0);
  uVar11 = FUN_00e705c8(&local_98,"[TERMS_OF_SERVICE]");
  iVar5 = FUN_00c53288(uVar11,uVar10,&local_98);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = (code *)0x0;
    local_90 = (void *)0x0;
  }
  iVar6 = FUN_00e6a474("[TERMS_OF_SERVICE]");
  uVar11 = FUN_00e705c8(&local_98,"[PRIVACY_POLICY]");
  iVar7 = FUN_00c53288(uVar11,uVar10,&local_98);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = (code *)0x0;
    local_90 = (void *)0x0;
  }
  iVar6 = iVar6 + iVar5;
  iVar8 = FUN_00e6a474("[PRIVACY_POLICY]");
  iVar8 = iVar8 + iVar7;
  iVar2 = iVar5;
  if (iVar7 <= iVar5) {
    iVar2 = iVar7;
  }
  FUN_00e71810(&local_98,uVar10,0,iVar2);
  (**(code **)(*(long *)((long)param_1 + 0xdcc8) + 0x138))
            ((long *)((long)param_1 + 0xdcc8),&local_98);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = (code *)0x0;
    local_90 = (void *)0x0;
  }
  plVar1 = (long *)((long)param_1 + 0xddf8);
  *(uint *)((long)param_1 + 0xde7c) = *(uint *)((long)param_1 + 0xde7c) | 0x10;
  local_98._0_4_ = 0xfffac832;
  FUN_00f0d7fc(plVar1,&local_98);
  plVar15 = (long *)((long)param_1 + 0xe058);
  *(uint *)((long)param_1 + 0xe0dc) = *(uint *)((long)param_1 + 0xe0dc) | 0x10;
  local_98 = (code *)CONCAT44(local_98._4_4_,0xfffac832);
  FUN_00f0d7fc(plVar15,&local_98);
  plVar14 = (long *)((long)param_1 + 0xdf28);
  if (iVar5 < iVar7) {
    FUN_00e71810(&local_98,uVar10,iVar6,iVar7 - iVar6);
    (**(code **)(*plVar14 + 0x138))(plVar14,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = (code *)0x0;
      local_90 = (void *)0x0;
    }
    iVar5 = FUN_00e70b14(uVar10);
    FUN_00e71810(&local_98,uVar10,iVar8,iVar5 - iVar8);
    (**(code **)(*(long *)((long)param_1 + 0xe188) + 0x138))
              ((long *)((long)param_1 + 0xe188),&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = (code *)0x0;
      local_90 = (void *)0x0;
    }
    lVar16 = 1;
    lVar13 = 3;
    plVar14 = plVar15;
    plVar15 = plVar1;
  }
  else {
    FUN_00e71810(&local_98,uVar10,iVar8,iVar5 - iVar8);
    (**(code **)(*plVar14 + 0x138))(plVar14,&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = (code *)0x0;
      local_90 = (void *)0x0;
    }
    iVar5 = FUN_00e70b14(uVar10);
    FUN_00e71810(&local_98,uVar10,iVar6,iVar5 - iVar6);
    (**(code **)(*(long *)((long)param_1 + 0xe188) + 0x138))
              ((long *)((long)param_1 + 0xe188),&local_98);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = (code *)0x0;
      local_90 = (void *)0x0;
    }
    lVar16 = 3;
    lVar13 = 1;
    plVar14 = plVar1;
  }
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_TERMS_OF_SERVICE",0);
  (**(code **)(*plVar15 + 0x138))(plVar15,uVar10);
  uVar9 = DAT_03210f60;
  lVar16 = (long)param_1 + lVar16 * 0x130 + 0xdcd0;
  local_98 = FUN_00c534b0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(lVar16,&local_98);
  local_98 = FUN_00c534b0;
  uVar3 = DAT_03210f8c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar3;
  FUN_009693a0(lVar16,&local_98);
  uVar10 = FUN_00e6ce7c("MAIN_PROFILE_SIGNUP_PRIVACY_POLICY",0);
  (**(code **)(*plVar14 + 0x138))(plVar14,uVar10);
  lVar13 = (long)param_1 + lVar13 * 0x130 + 0xdcd0;
  local_98 = FUN_00c534c0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(lVar13,&local_98);
  local_98 = FUN_00c534c0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar3;
  FUN_009693a0(lVar13,&local_98);
  lVar16 = 4;
  lVar13 = (long)param_1 + 0xdd98;
  do {
    uVar10 = FUN_00f08be8(lVar13);
    uVar12 = FUN_00e70b04();
    if ((uVar12 & 1) == 0) {
      iVar5 = FUN_00e70b14(uVar10);
      uVar9 = FUN_00e70b1c(uVar10,iVar5 + -1);
      uVar12 = FUN_00e7107c(&DAT_03210440,0,uVar9,0);
      if ((uVar12 & 1) != 0) {
        iVar5 = FUN_00e70b14(uVar10);
        local_9c = FUN_00e70b1c(uVar10,iVar5 + -1);
        local_9a = 0;
        FUN_00e707d0(&local_98,&local_9c);
        uVar10 = FUN_00f08be8(lVar13 + 0x130);
        FUN_00e70c34(&local_98,uVar10);
        (**(code **)(*(long *)(lVar13 + 0x60) + 0x138))((long *)(lVar13 + 0x60),&local_98);
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = (code *)0x0;
          local_90 = (void *)0x0;
        }
      }
    }
    lVar16 = lVar16 + -1;
    lVar13 = lVar13 + 0x130;
  } while (lVar16 != 0);
  lVar13 = (long)param_1 + 0xddf8;
  lVar16 = 4;
  do {
    FUN_00f07b18(0,lVar13,3,lVar13 + -0x130,1);
    lVar16 = lVar16 + -1;
    lVar13 = lVar13 + 0x130;
  } while (lVar16 != 0);
  FUN_00f13238((long)param_1 + 0xdb70);
  FUN_00f14070((long)param_1 + 0xdb70,&DAT_03211038);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

