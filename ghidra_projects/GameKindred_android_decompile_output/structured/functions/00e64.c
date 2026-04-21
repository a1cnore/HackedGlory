// functions/00e64 — 50 functions
#include "libGameKindred.h"




int FUN_00e640a0(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e694,1,9);
  return (int)fVar1;
}




void FUN_00e640c8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e694,0,9);
  return;
}




void FUN_00e640dc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e694,2,9);
  return;
}




void FUN_00e640f0(void)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Kestrel__C_02beefa8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e64170;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Kestrel__C_02beefa8,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64170(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e69c,1,9);
  return;
}




void FUN_00e64184(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Kestrel__A_02beef68);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Kestrel__A_02beef68);
  local_48 = FUN_00e64254;
  local_40 = 3;
  FUN_00d986e8(uVar2,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Kestrel__A_02beef68);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e64268;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64254(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e6a4,1,9);
  return;
}




void FUN_00e64268(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e6a4,0,9);
  return;
}




void FUN_00e6427c(void)

{
  return;
}




void FUN_00e64280(undefined8 *param_1,float *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_0320e910 <= fVar3) {
    fVar3 = DAT_0320e910;
  }
  fVar4 = DAT_0320e850;
  if (DAT_0320e850 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320e838,0,9);
  *param_2 = fVar3 * fVar4;
  *param_3 = fVar3 * fVar4;
  return;
}




void FUN_00e64320(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d657dc();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e64280);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e6436c(void)

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
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Koshka__BTwirl");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e643f4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e643f4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e838,1,9);
  return;
}




void FUN_00e64408(void)

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
  lVar3 = FUN_00d4bc48(uVar2,2);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e6448c;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6448c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e840,0,9);
  return;
}




void FUN_00e644a0(undefined8 param_1)

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
  local_48 = FUN_00e64568;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Koshka__C_02beefc0,&local_48,1);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,PTR_s_Ability__Koshka__C_02beefc0);
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e6457c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64568(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e848,2,9);
  return;
}




void FUN_00e6457c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e848,1,9);
  return;
}




void FUN_00e64590(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d69294(param_1,&local_98,&local_a0);
    lVar7 = FUN_00d66d28(local_98);
    if ((((int)local_a0[2] == *(int *)(lVar7 + 0x260)) && (*local_a0 != 0)) &&
       (iVar4 = FUN_00d9ff9c(), puVar3 = PTR_s_Buff_Joule_JumpReset_02bf1f80, iVar4 == DAT_031b0ca4)
       ) {
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar5 = FUN_00ceb350();
      FUN_00cfe864(0x40000000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar5,1,0,0);
      FUN_00ce20fc(auStack_90);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6467c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e64590;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d65010(param_1);
  plVar6 = (long *)FUN_00d2a110(lVar5 + 0x10);
  local_48 = FUN_00e647fc;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x30))(plVar6,7,2,&local_48);
  plVar6 = (long *)FUN_00d2a110(lVar5 + 0x10);
  local_48 = FUN_00e64810;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x30))(plVar6,8,2,&local_48);
  uVar7 = FUN_00d6639c(param_1);
  lVar5 = FUN_00d4b23c(uVar7,PTR_s_Ability__Joule__A_02beee88);
  uVar7 = FUN_00da4b70(lVar5 + 0x10);
  local_48 = FUN_00e64824;
  local_40 = 3;
  FUN_00d98490(uVar7,PTR_s_Ability__Joule__A_02beee88,&local_48);
  FUN_00d984c8();
  uVar7 = FUN_00d2dea4(lVar5 + 0x10);
  local_48 = FUN_00e64838;
  local_40 = 3;
  FUN_00d97d24(uVar7,PTR_s_Ability__Joule__A_02beee88,&local_48,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e647fc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9c8,0,9);
  return;
}




void FUN_00e64810(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9c8,1,9);
  return;
}




void FUN_00e64824(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9c8,3,9);
  return;
}




void FUN_00e64838(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9c8,2,9);
  return;
}




void FUN_00e6484c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Joule__A_02beee88);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48);
  lVar2 = FUN_00d65010(param_1);
  uVar4 = FUN_00d2dea4(lVar2 + 0x10);
  local_48[0] = 0;
  local_40 = 1;
  FUN_00d97d24(uVar4,PTR_s_Ability__Joule__A_02beee88,local_48,2);
  uVar4 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar4,PTR_s_Ability__Joule__A_02beee88);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64918(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(&local_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_0320e9d4,2,9);
  FUN_00d40e24(uVar4,4,2);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Joule__B_02beee90);
  plVar5 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Joule_ThunderingStepsBonuse_02bf1fa8);
  local_50 = FUN_00e64a24;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64a24(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9d4,1,9);
  return;
}




void FUN_00e64a38(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00e64ac4;
  local_30 = 3;
  FUN_00d47690(uVar3,1,&local_38);
  plVar4 = (long *)FUN_00d2ccfc(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Effect_GoFast");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64ac4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9d4,0,9);
  return;
}




void FUN_00e64ad8(void)

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
  FUN_00d4b23c(uVar2,PTR_s_Ability__Joule__C_02beee98);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e64bb8;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Joule__C_02beee98,&local_48,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e64bcc;
  local_40 = 3;
  FUN_00d97d24(uVar2,"Joule_C_RecastDelay",&local_48,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_48 = FUN_00e64be0;
  local_40 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Joule__C_02beee98,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64bb8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9e0,2,9);
  return;
}




void FUN_00e64bcc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9e0,1,9);
  return;
}




int FUN_00e64be0(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e9e0,0,9);
  return (int)fVar1;
}




void FUN_00e64c08(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d5a3d0(uVar1,DAT_0320e9e8,2,9);
  *param_2 = (int)fVar2;
  return;
}




int FUN_00e64c48(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e9e8,2,9);
  return (int)fVar1;
}




void FUN_00e64c70(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,8,0,0x19,0);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e9e8,1,9);
  *param_2 = fVar2 * fVar3;
  return;
}




void FUN_00e64cd8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9e8,1,9);
  return;
}




void FUN_00e64cec(undefined8 param_1)

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
  FUN_00d4b23c(uVar2,PTR_s_Ability__Ozo__C_02bef270);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00e64cd8;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ozo__C_02bef270,&local_58,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00e64e1c;
  local_50 = 3;
  FUN_00d97d24(uVar2,"Ozo_C_RecastDelay",&local_58,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_58 = FUN_00e64c48;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Ozo__C_02bef270,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Ozo__C_02bef270);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e64e30;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64e1c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9e8,3,9);
  return;
}




void FUN_00e64e30(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e9e8,0,9);
  return;
}




void FUN_00e64e44(void)

{
  return;
}




void FUN_00e64e48(void)

{
  return;
}




void FUN_00e64e4c(void)

{
  return;
}




void FUN_00e64e50(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Petal__B_02bef2a8);
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_48 = FUN_00e64eec;
  local_40 = 3;
  FUN_00d98490(uVar2,PTR_s_Ability__Petal__B_02bef2a8,&local_48);
  FUN_00d984c8();
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64eec(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ea0c,1,9);
  return;
}




void FUN_00e64f00(void)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Petal__B_02bef2a8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e64f80;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Petal__B_02bef2a8,&local_38,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e64f80(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ea0c,0,9);
  return;
}




void FUN_00e64f94(void)

{
  return;
}




float FUN_00e64f98(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d5a3d0(uVar1,DAT_0320ea24,1,9);
  return 1.0 - fVar2;
}




void FUN_00e64fcc(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Phinn__A_02bee9d0);
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_58 = FUN_00e64f98;
  local_50 = 4;
  FUN_00d98490(uVar2,PTR_s_Ability__Phinn__A_02bee9d0,&local_58);
  FUN_00d984c8();
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_58 = FUN_00e64f98;
  local_50 = 4;
  FUN_00d98490(uVar2,PTR_s_Ability__Phinn__B_02bee9d8,&local_58);
  FUN_00d984c8();
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Phinn__A_02bee9d0);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e66110;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Phinn__B_02bee9d8);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e66110;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

