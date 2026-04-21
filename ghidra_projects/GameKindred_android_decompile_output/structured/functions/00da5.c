// functions/00da5 — 40 functions
#include "libGameKindred.h"




void FUN_00da50c4(void)

{
  return;
}




void FUN_00da50c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00da51d0();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d419b4(uVar3,0x18);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da513c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Grumpjaw__C_02beebd8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00da51bc;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Grumpjaw__C_02beebd8,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da51bc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfa8,0,9);
  return;
}




undefined8 * FUN_00da51d0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d41964(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00da52a0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Gwen__A_02beaef0);
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_48 = FUN_00da5370;
  local_40 = 3;
  FUN_00d98490(uVar2,PTR_s_Ability__Gwen__A_02beaef0,&local_48);
  FUN_00d984c8();
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Gwen__A_02beaef0);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da5384;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5370(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfb0,1,9);
  return;
}




void FUN_00da5384(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfb0,0,9);
  return;
}




void FUN_00da5398(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Gwen__C_02beaf00);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da546c;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Gwen__C_02beaf00,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Gwen__C");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da5480;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da546c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfb8,1,9);
  return;
}




void FUN_00da5480(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfb8,0,9);
  return;
}




void FUN_00da5494(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,2,4,0x19,0);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_031abfc0,0,9);
  *param_2 = fVar2 + fVar3;
  return;
}




void FUN_00da54fc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Gwen__B_02beaef8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da55c0;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Gwen__B_02beaef8,&local_48,1);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_48 = FUN_00da55d4;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,4,2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da55c0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfc0,1,9);
  return;
}




void FUN_00da55d4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfc0,2,9);
  return;
}




void FUN_00da55e8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Idris__B_02beee50);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da56bc;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Idris__B_02beee50,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Idris__B");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00da56d0;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da56bc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfc8,1,9);
  return;
}




void FUN_00da56d0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfc8,0,9);
  return;
}




void FUN_00da56e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Idris__C_02beedc8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00da5764;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Idris__C_02beedc8,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5764(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfd0,1,9);
  return;
}




void FUN_00da5778(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031abfd8,0,9);
  FUN_00d40e24(uVar4,4,2);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031abfd8,1,9);
  FUN_00d40e24(uVar4,5,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da585c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031abfe0,1,9);
  FUN_00d40e24(uVar4,5,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5904(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Krul__A_02bef0a0);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Krul__A_02bef0a0);
  local_38 = FUN_00da5984;
  local_30 = 3;
  FUN_00d98704(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5984(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfe8,1,9);
  return;
}




void FUN_00da5998(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_38 = FUN_00da5a10;
  local_30 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Krul__C_02bef0b0,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5a10(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abff0,1,9);
  return;
}




void FUN_00da5a24(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Lance__A_02bef0c0);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00da5ab0;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5ab0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac004,0,9);
  return;
}




void FUN_00da5ac4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_38 = FUN_00da5b3c;
  local_30 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Lance__B_02bef118,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5b3c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac00c,2,9);
  return;
}




void FUN_00da5b50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  if (DAT_031ac0e0 <= fVar5) {
    fVar5 = DAT_031ac0e0;
  }
  fVar6 = DAT_031ac020;
  if (DAT_031ac020 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = (float)FUN_00d5a3d0(lVar2,DAT_031ac00c,0,9);
  FUN_00d3e534();
  uVar4 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d40908(fVar5 * fVar6,uVar4,4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5c54(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Lance__C_02bef0c8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da5d08;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Lance__C_02bef0c8,&local_48,1);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Lance__C_02bef0c8);
  local_48 = FUN_00da5d1c;
  local_40 = 3;
  FUN_00d98704(uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5d08(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac018,3,9);
  return;
}




void FUN_00da5d1c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac018,2,9);
  return;
}




void FUN_00da5d30(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00da51d0();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d419b4(uVar3,0x3e);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5da4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031ac1a4,1,9);
  FUN_00d40e24(uVar4,5,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5e4c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Lyra_HeavyAttack");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00da5ed4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da5ed4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac1ac,0,9);
  return;
}




void FUN_00da5ee8(void)

{
  return;
}




void FUN_00da5eec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  if (DAT_031ac280 <= fVar5) {
    fVar5 = DAT_031ac280;
  }
  fVar6 = DAT_031ac1c0;
  if (DAT_031ac1c0 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = (float)FUN_00d5a3d0(lVar2,DAT_031ac1b4,1,9);
  FUN_00d3e534();
  uVar4 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d3e534();
  uVar4 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d46fc8(uVar4,2);
  FUN_00d3e534();
  uVar4 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d40908(fVar5 * fVar6,uVar4,4);
  FUN_00d3e534();
  uVar4 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar4);
  lVar2 = FUN_00d65010(param_1);
  uVar4 = FUN_00d29a18(lVar2 + 0x10);
  FUN_00d46cdc(uVar4,0x11);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

