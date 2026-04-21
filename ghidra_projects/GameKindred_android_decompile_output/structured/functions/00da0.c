// functions/00da0 — 45 functions
#include "libGameKindred.h"




void thunk_FUN_00da03b8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x00da0404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void thunk_FUN_00da03b8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x00da0404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




uint FUN_00da000c(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  uVar5 = FUN_00d6bbac(lVar7,DAT_031b9be0,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
    *param_2 = 0xffffffff;
  }
  else {
    uVar3 = FUN_00d6b630(lVar7,DAT_031b9be0,0xffffffff);
    puVar2 = PTR_s_freehooks_02bede98;
    lVar7 = FUN_00d6b5b0(lVar7,uVar3);
    uVar3 = FUN_00e6a474(puVar2);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    puVar6 = (uint *)(**(code **)(*(long *)(lVar7 + 0x168) + 0x18))(lVar7 + 0x168,uVar3);
    uVar1 = *puVar6;
    uVar4 = 0;
    *param_2 = uVar1;
    do {
      if ((1 << (ulong)(uVar4 & 0x1f) & uVar1) != 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x20);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}




void FUN_00da0118(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_e8 [96];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_e8);
  FUN_00d4d364(auStack_e8,1);
  FUN_00d4dca4(auStack_e8,"PetalMinion",0);
  FUN_00d4daf4(auStack_e8,1,0,0,param_1);
  FUN_00d4ddc4(auStack_e8);
  FUN_00d9e840(auStack_e8,auStack_88,0xc,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00da01b8(void)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = FUN_00da01e4();
  puVar1 = &DAT_01bc8f90;
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(lVar2 + 0x260);
  }
  return *puVar1;
}




void FUN_00da01e4(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_a0;
  undefined1 auStack_98 [112];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4e934(auStack_98,DAT_031bb088);
  FUN_00d4e980(auStack_98,*(undefined4 *)(param_1 + 0x260));
  FUN_00d4daf4(auStack_98,0,1,0,param_1);
  iVar2 = FUN_00d9e840(auStack_98,&local_a0,1,0);
  if (iVar2 == 0) {
    local_a0 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_a0);
  }
  return;
}




bool FUN_00da0288(float param_1)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 + 0.0 <= param_1;
}




void FUN_00da02c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = FUN_00d2d01c(param_1 + 0x10);
  uVar2 = FUN_00d9b294();
  FUN_00d9b610(uVar2,param_2);
  FUN_00d9b744();
  FUN_00d9b5b0(uVar1);
  plVar3 = (long *)FUN_00d2945c();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x00da033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  return;
}




void FUN_00da0340(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = FUN_00d2d01c(param_1 + 0x10);
  uVar2 = FUN_00d9b294();
  FUN_00d9b610(uVar2,param_2);
  FUN_00d9b744();
  FUN_00d9b5b0(uVar1);
  plVar3 = (long *)FUN_00d2945c();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_TalentStrong");
                    /* WARNING: Could not recover jumptable at 0x00da03b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  return;
}




void FUN_00da03b8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x00da0404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00da0408(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d64080();
  FUN_00da02c8(uVar1,param_2);
  return;
}




void FUN_00da042c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x00da0478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00da047c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d64080();
  FUN_00da0340(uVar1,param_2);
  return;
}




void FUN_00da04a0(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031abcd0 <= fVar2) {
    fVar2 = DAT_031abcd0;
  }
  fVar3 = DAT_031abc10;
  if (DAT_031abc10 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_00da0530(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d5048c();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031abcd0 <= fVar3) {
    fVar3 = DAT_031abcd0;
  }
  fVar4 = DAT_031abc10;
  if (DAT_031abc10 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_3 = fVar4;
  *param_4 = 0;
  *param_5 = 0;
  FUN_00cfb800(lVar1,param_3,param_6,0);
  return;
}




void FUN_00da05d0(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d5048c();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031abcd0 <= fVar3) {
    fVar3 = DAT_031abcd0;
  }
  fVar4 = DAT_031abc10;
  if (DAT_031abc10 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_3 = fVar4;
  *param_4 = 0;
  *param_5 = 0;
  FUN_00cfb800(lVar1,param_3,param_6,1);
  return;
}




undefined8 FUN_00da0670(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cf9f34();
  FUN_00d9ab8c(uVar1,param_2);
  return uVar1;
}




undefined8 FUN_00da06a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00cf9f34();
  uVar2 = FUN_00d9ab88();
  FUN_00d9b128(uVar2,param_2);
  return uVar1;
}




undefined8 FUN_00da06d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00cf9f34();
  uVar2 = FUN_00d9ab88();
  FUN_00d9b128(uVar2,param_2);
  FUN_00d9b108();
  return uVar1;
}




bool FUN_00da070c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00d50ef8();
  lVar2 = FUN_00d517cc(param_1);
  return lVar2 == lVar1;
}




undefined8 FUN_00da0740(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00cf9f34();
  uVar2 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar2,FUN_00da070c);
  FUN_00d9b108();
  return uVar1;
}




void FUN_00da0778(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00cfa6cc();
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(param_1);
  FUN_00cf7b3c(uVar2,1);
  return;
}




void FUN_00da07ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00cfa6cc();
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(param_1);
  FUN_00cf7b3c(uVar2,2);
  return;
}




void FUN_00da07e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00cfa6cc();
  *(undefined1 *)(lVar1 + 0x10) = 0;
  FUN_00cfb5c4(param_1);
  return;
}




void FUN_00da0808(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cfa294();
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar1,0);
  FUN_00cfb56c(param_1);
  return;
}




void FUN_00da0848(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cfa294();
  FUN_00cf7478(param_1);
  FUN_00cf7578(uVar1,0);
  FUN_00cfb56c(param_2);
  return;
}




void FUN_00da0890(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cfa294();
  FUN_00cf7570(uVar1,param_2);
  FUN_00cfb56c(param_1);
  return;
}




void FUN_00da08c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cfa294();
  FUN_00cf7580(uVar1,param_2);
  FUN_00cf7578(uVar1,0);
  FUN_00cfb56c(param_1);
  return;
}




void FUN_00da0908(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00cfab04();
                    /* WARNING: Could not recover jumptable at 0x00da0920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))();
  return;
}




void FUN_00da0924(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar2 = FUN_00d9ab88();
  FUN_00d9b128(uVar2,param_2);
  FUN_00d9b108();
  FUN_00d9b0f8(uVar1);
  plVar3 = (long *)FUN_00cfab04();
                    /* WARNING: Could not recover jumptable at 0x00da0968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x70))();
  return;
}




void FUN_00da096c(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00cfab04();
                    /* WARNING: Could not recover jumptable at 0x00da0984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))();
  return;
}




void FUN_00da0988(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar1 = FUN_00cf9f34();
  uVar2 = FUN_00d9ab88();
  FUN_00d9b128(uVar2,param_2);
  FUN_00d9b108();
  FUN_00d9b0f8(uVar1);
  plVar3 = (long *)FUN_00cfab04();
                    /* WARNING: Could not recover jumptable at 0x00da09cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x78))();
  return;
}




void FUN_00da09d0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4dabc(auStack_88,1);
  FUN_00d4daf4(auStack_88,0,1,0,0);
  uVar2 = FUN_00cfaf84(param_1);
  FUN_00cf5460(0x44fa0000,uVar2,auStack_88,0,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0a68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  uVar2 = FUN_00cfaf84(param_1);
  FUN_00cf5504(uVar2,auStack_98,0,param_2,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0b08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  uVar2 = FUN_00cfaf84(param_2);
  FUN_00cf5460(param_1,uVar2,auStack_98,0,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0ba8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4dabc(auStack_88,1);
  FUN_00d4daf4(auStack_88,1,0,0,0);
  uVar2 = FUN_00cfaf84(param_1);
  FUN_00cf5460(0x44fa0000,uVar2,auStack_88,0,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0c40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4daf4(auStack_98,1,0,0,0);
  uVar2 = FUN_00cfaf84(param_1);
  FUN_00cf5504(uVar2,auStack_98,0,param_2,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0ce0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4daf4(auStack_98,1,0,0,0);
  uVar2 = FUN_00cfaf84(param_2);
  FUN_00cf5460(param_1,uVar2,auStack_98,0,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0d80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4daf4(auStack_98,1,0,0,0);
  uVar2 = FUN_00cfaf84(param_1);
  FUN_00cf5504(uVar2,auStack_98,0,param_2,0,1,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0e20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4daf4(auStack_98,1,0,0,0);
  uVar2 = FUN_00cfaf84(param_2);
  FUN_00cf5460(param_1,uVar2,auStack_98,0,0,1,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da0ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00cf98bc();
  uVar1 = FUN_00cf9ab4(param_1);
  FUN_00cf44e8(0xbf800000,uVar1,param_2,1,0);
  FUN_00cf9eec(param_1);
  return;
}




void FUN_00da0f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00cf98bc();
  uVar1 = FUN_00cf9ab4(param_2);
  FUN_00cf44e8(param_1,uVar1,param_3,1,0);
  FUN_00cf9eec(param_2);
  return;
}




void FUN_00da0f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00cf98bc();
  uVar1 = FUN_00cf9ab4(param_1);
  FUN_00cf456c(uVar1,param_2,param_3,1,0);
  FUN_00cf9eec(param_1);
  return;
}




void FUN_00da0fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00cf99dc();
  uVar1 = FUN_00cf9ab4(param_2);
  FUN_00cf44e8(param_1,uVar1,param_3,1,0);
  FUN_00cf9eec(param_2);
  return;
}




void FUN_00da0ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00cf99dc();
  uVar1 = FUN_00cf9ab4(param_1);
  FUN_00cf456c(uVar1,param_2,param_3,1,0);
  FUN_00cf9eec(param_1);
  return;
}

