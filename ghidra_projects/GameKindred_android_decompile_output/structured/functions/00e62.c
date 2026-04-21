// functions/00e62 — 39 functions
#include "libGameKindred.h"




void FUN_00e62030(void)

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
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3e800000,uVar3,0x17,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e620ac(void)

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
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3e800000,uVar3,0x18,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62128(void)

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
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x42c80000,uVar3,1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e621a8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40e24(0x3f000000,uVar3,0x19,1);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40e24(0x3f000000,uVar3,0xf,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6225c(void)

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
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Flicker__BBurst");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e622e4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e622e4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e63c,0,9);
  return;
}




void FUN_00e622f8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Flicker__A_02beea00);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00e62428;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Flicker__A_02beea00,&local_58,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00e6243c;
  local_50 = 3;
  FUN_00d97d24(uVar2,"Flicker_A_RecastDelay",&local_58,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_58 = FUN_00e62450;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Flicker__A_02beea00,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Flicker__A_02beea00);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e62478;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62428(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e644,2,0x41);
  return;
}




void FUN_00e6243c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e644,3,9);
  return;
}




int FUN_00e62450(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e644,1,9);
  return (int)fVar1;
}




void FUN_00e62478(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e644,0,9);
  return;
}




void FUN_00e6248c(undefined8 param_1)

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
  FUN_00d5a3d0(uVar2,DAT_0320e64c,1,9);
  FUN_00d40e24(uVar4,5,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62534(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00da4ee4(lVar2);
  uVar3 = FUN_00d986e0(uVar3,PTR_s_Ability__Fortress__A_02beea38);
  local_48 = FUN_00e62618;
  local_40 = 3;
  FUN_00d98704(uVar3,&local_48);
  plVar4 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e6262c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,4,2,&local_48);
  plVar4 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e62640;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0xf,1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62618(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e654,0,9);
  return;
}




void FUN_00e6262c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e654,1,9);
  return;
}




void FUN_00e62640(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e654,2,9);
  return;
}




void FUN_00e62654(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00e62708;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Fortress__C_02beea48,&local_48,1);
  plVar4 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e6271c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x1f,1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62708(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e65c,2,9);
  return;
}




void FUN_00e6271c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e65c,1,9);
  return;
}




void FUN_00e62730(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_6a0 [40];
  undefined1 auStack_678 [1600];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d66d28(*param_1);
  FUN_00d4d634(auStack_6a0);
  FUN_00d4d66c(auStack_6a0,uVar3);
  FUN_00d4d678(auStack_6a0,"FortressMinion");
  uVar2 = FUN_00d9e840(auStack_6a0,auStack_678,200,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2 < 3);
}




void FUN_00e627c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = FUN_00d2d01c(param_1 + 0x10);
  uVar2 = FUN_00d9b294();
  FUN_00d9b5c0(uVar2,FUN_00e62730);
  FUN_00d9b5b0(uVar1);
  plVar3 = (long *)FUN_00d45354();
  plVar4 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"*FortressMinion*",1);
  (**(code **)(*plVar4 + 0x18))(plVar4,"SecondWolf");
  FUN_00d9b5b0(uVar1);
  plVar4 = (long *)FUN_00e2144c();
  plVar3 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_FortressMinion_Lifetime_02bf0640,plVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x00e62868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_00e6053c);
  return;
}




void FUN_00e6286c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_58 = FUN_00e62990;
  local_50 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Fortress__A_02beea38,&local_58,1);
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_58 = FUN_00e62990;
  local_50 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Fortress__B_02beea40,&local_58,1);
  uVar3 = FUN_00d64464(param_1);
  uVar3 = FUN_00d4bbf8(uVar3,3);
  lVar2 = FUN_00d4bc60(uVar3,"Ability__Fortress__BBleed");
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00e629a4;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  uVar3 = FUN_00d634b4(param_1);
  FUN_00d4aa10(uVar3,PTR_s_Ability__Fortress__A_02beea38);
  FUN_00e627c4();
  uVar3 = FUN_00d634b4(param_1);
  FUN_00d4aa10(uVar3,PTR_s_Ability__Fortress__B_02beea40);
  FUN_00e627c4();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62990(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e664,1,9);
  return;
}




void FUN_00e629a4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e664,0,9);
  return;
}




void FUN_00e629b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00e62a3c;
  local_30 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x1e,1,&local_38);
  (**(code **)(*plVar3 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62a3c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e65c,0,9);
  return;
}




void FUN_00e62a50(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64980();
  FUN_00e0c91c(lVar2 + 0x10);
  plVar3 = (long *)FUN_00e58154(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Fortress_CriticalWoundsStac_02bf1ec8);
  local_38[0] = 0xffffffff;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62adc(void)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Grace__C_02beeb40);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e62b5c;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Grace__C_02beeb40,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62b5c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e674,1,9);
  return;
}




void FUN_00e62b70(void)

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
  FUN_00d4b23c(uVar2,PTR_s_Ability__Grace__A_02beeb30);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e62c50;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Grace__A_02beeb30,&local_48,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e62c64;
  local_40 = 3;
  FUN_00d97d24(uVar2,"Grace_A_RecastDelay",&local_48,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_48 = FUN_00e62c78;
  local_40 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Grace__A_02beeb30,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e62c50(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e67c,2,9);
  return;
}




void FUN_00e62c64(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e67c,3,9);
  return;
}




int FUN_00e62c78(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e67c,1,9);
  return (int)fVar1;
}




void FUN_00e62ca0(undefined8 param_1)

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
  FUN_00d5a3d0(uVar2,DAT_0320e684,1,9);
  FUN_00d40e24(uVar4,5,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e62d48(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_00d59f54(param_2,0,3,9,1);
  fVar3 = *(float *)(*(long *)(param_2 + 0x40) + 0x128);
  fVar2 = (float)FUN_00d59f54(param_2,0,4,9,1);
  return fVar1 / (fVar3 * fVar2 + 1.0);
}




void FUN_00e62db8(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,1,1,1,1);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e694,3,9);
  *param_2 = -(fVar2 * (1.0 - fVar3));
  return;
}




void FUN_00e62e28(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e694,3,9);
  return;
}




void FUN_00e62e3c(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,0,1,1,1);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e694,3,9);
  *param_2 = -(fVar2 * (1.0 - fVar3));
  return;
}




void FUN_00e62eac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Kestrel__A_02beef68);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_58 = FUN_00e640a0;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Kestrel__A_02beef68,&local_58);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_58 = FUN_00e640c8;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Kestrel__B_02beef90,&local_58,1);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Kestrel__B_02beef90);
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_58 = FUN_00e62e28;
  local_50 = 3;
  FUN_00d98490(uVar2,PTR_s_Ability__Kestrel__B_02beef90,&local_58);
  FUN_00d984c8();
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_58 = FUN_00e62e28;
  local_50 = 3;
  FUN_00d98490(uVar2,PTR_s_Ability__Kestrel__A_02beef68,&local_58);
  FUN_00d984c8();
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Kestrel__A_02beef68);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e640dc;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kestrel_Reloading_02bf0a10);
  local_58 = FUN_00e62d48;
  local_50 = 5;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar2 = FUN_00d635f4(param_1);
  lVar3 = FUN_00d4ac24(uVar2,PTR_s_Ability__Kestrel__A_02beef68);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kestrel_Reloading_02bf0a10);
  local_58 = FUN_00e62d48;
  local_50 = 5;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

