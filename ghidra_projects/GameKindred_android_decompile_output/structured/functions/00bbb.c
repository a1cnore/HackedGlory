// functions/00bbb — 13 functions
#include "libGameKindred.h"




void thunk_FUN_00bbb09c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x1d858) == '\0') {
    FUN_00cbec10(param_1);
  }
  else {
    *(char *)(param_1 + 0x1d858) = '\0';
    *(undefined8 *)(param_1 + 0x1d770) = *(undefined8 *)(param_1 + 0x1d688);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d690) >> 1);
    lVar3 = param_1 + 0x1d691;
    if ((*(byte *)(param_1 + 0x1d690) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d698);
      lVar3 = *(long *)(param_1 + 0x1d6a0);
    }
    FUN_008fcea8(param_1 + 0x1d778,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6a8) >> 1);
    lVar3 = param_1 + 0x1d6a9;
    if ((*(byte *)(param_1 + 0x1d6a8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6b0);
      lVar3 = *(long *)(param_1 + 0x1d6b8);
    }
    FUN_008fcea8(param_1 + 0x1d790,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6c0) >> 1);
    lVar3 = param_1 + 0x1d6c1;
    if ((*(byte *)(param_1 + 0x1d6c0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6c8);
      lVar3 = *(long *)(param_1 + 0x1d6d0);
    }
    FUN_008fcea8(param_1 + 0x1d7a8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6d8) >> 1);
    lVar3 = param_1 + 0x1d6d9;
    if ((*(byte *)(param_1 + 0x1d6d8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6e0);
      lVar3 = *(long *)(param_1 + 0x1d6e8);
    }
    FUN_008fcea8(param_1 + 0x1d7c0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6f0) >> 1);
    lVar3 = param_1 + 0x1d6f1;
    if ((*(byte *)(param_1 + 0x1d6f0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6f8);
      lVar3 = *(long *)(param_1 + 0x1d700);
    }
    FUN_008fcea8(param_1 + 0x1d7d8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d708) >> 1);
    lVar3 = param_1 + 0x1d709;
    if ((*(byte *)(param_1 + 0x1d708) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d710);
      lVar3 = *(long *)(param_1 + 0x1d718);
    }
    FUN_008fcea8(param_1 + 0x1d7f0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d720) >> 1);
    lVar3 = param_1 + 0x1d721;
    if ((*(byte *)(param_1 + 0x1d720) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d728);
      lVar3 = *(long *)(param_1 + 0x1d730);
    }
    FUN_008fcea8(param_1 + 0x1d808,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d738) >> 1);
    lVar3 = param_1 + 0x1d739;
    if ((*(byte *)(param_1 + 0x1d738) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d740);
      lVar3 = *(long *)(param_1 + 0x1d748);
    }
    FUN_008fcea8(param_1 + 0x1d820,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d750) >> 1);
    lVar3 = param_1 + 0x1d751;
    if ((*(byte *)(param_1 + 0x1d750) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d758);
      lVar3 = *(long *)(param_1 + 0x1d760);
    }
    FUN_008fcea8(param_1 + 0x1d838,lVar3,uVar1);
    *(undefined1 *)(param_1 + 0x1d850) = *(undefined1 *)(param_1 + 0x1d768);
    uVar4 = FUN_00f048a4("UI::GUILD_SETTINGS_CHANGED");
    FUN_00f048e0(auStack_48,uVar4,0);
    FUN_00f04760(param_1,auStack_48,0);
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bbb09c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x1d858) == '\0') {
    FUN_00cbec10(param_1);
  }
  else {
    *(char *)(param_1 + 0x1d858) = '\0';
    *(undefined8 *)(param_1 + 0x1d770) = *(undefined8 *)(param_1 + 0x1d688);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d690) >> 1);
    lVar3 = param_1 + 0x1d691;
    if ((*(byte *)(param_1 + 0x1d690) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d698);
      lVar3 = *(long *)(param_1 + 0x1d6a0);
    }
    FUN_008fcea8(param_1 + 0x1d778,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6a8) >> 1);
    lVar3 = param_1 + 0x1d6a9;
    if ((*(byte *)(param_1 + 0x1d6a8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6b0);
      lVar3 = *(long *)(param_1 + 0x1d6b8);
    }
    FUN_008fcea8(param_1 + 0x1d790,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6c0) >> 1);
    lVar3 = param_1 + 0x1d6c1;
    if ((*(byte *)(param_1 + 0x1d6c0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6c8);
      lVar3 = *(long *)(param_1 + 0x1d6d0);
    }
    FUN_008fcea8(param_1 + 0x1d7a8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6d8) >> 1);
    lVar3 = param_1 + 0x1d6d9;
    if ((*(byte *)(param_1 + 0x1d6d8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6e0);
      lVar3 = *(long *)(param_1 + 0x1d6e8);
    }
    FUN_008fcea8(param_1 + 0x1d7c0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d6f0) >> 1);
    lVar3 = param_1 + 0x1d6f1;
    if ((*(byte *)(param_1 + 0x1d6f0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d6f8);
      lVar3 = *(long *)(param_1 + 0x1d700);
    }
    FUN_008fcea8(param_1 + 0x1d7d8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d708) >> 1);
    lVar3 = param_1 + 0x1d709;
    if ((*(byte *)(param_1 + 0x1d708) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d710);
      lVar3 = *(long *)(param_1 + 0x1d718);
    }
    FUN_008fcea8(param_1 + 0x1d7f0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d720) >> 1);
    lVar3 = param_1 + 0x1d721;
    if ((*(byte *)(param_1 + 0x1d720) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d728);
      lVar3 = *(long *)(param_1 + 0x1d730);
    }
    FUN_008fcea8(param_1 + 0x1d808,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d738) >> 1);
    lVar3 = param_1 + 0x1d739;
    if ((*(byte *)(param_1 + 0x1d738) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d740);
      lVar3 = *(long *)(param_1 + 0x1d748);
    }
    FUN_008fcea8(param_1 + 0x1d820,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0x1d750) >> 1);
    lVar3 = param_1 + 0x1d751;
    if ((*(byte *)(param_1 + 0x1d750) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x1d758);
      lVar3 = *(long *)(param_1 + 0x1d760);
    }
    FUN_008fcea8(param_1 + 0x1d838,lVar3,uVar1);
    *(undefined1 *)(param_1 + 0x1d850) = *(undefined1 *)(param_1 + 0x1d768);
    uVar4 = FUN_00f048a4("UI::GUILD_SETTINGS_CHANGED");
    FUN_00f048e0(auStack_48,uVar4,0);
    FUN_00f04760(param_1,auStack_48,0);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bbb430(void *param_1)

{
  FUN_00b3f690();
  operator_delete(param_1);
  return;
}




void FUN_00bbb454(long *param_1)

{
  long *plVar1;
  uint uVar2;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027ead80;
  FUN_00f0e4a8(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar2 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar2 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x13c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x1980;
    FUN_0091ada4(plVar1);
    uVar2 = *(uint *)((long)param_1 + 0x13c);
  }
  *(uint *)((long)param_1 + 0x13c) = uVar2 & 0xfffffffb;
  return;
}




void FUN_00bbb50c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (**(code **)(*param_3 + 0x48))();
  uStack_2c = param_2;
  FUN_00f13f18(param_3 + 0x17,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbb56c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00bbb454();
  plVar1 = param_1 + 0x35;
  *param_1 = (long)&PTR_FUN_027e1260;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x5b;
  FUN_00ac7e14(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  if ((*(uint *)((long)param_1 + 0x22c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar1);
  }
  FUN_00aca914(plVar2,1,1);
  FUN_00aca7b8(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00aca750(0x3f666666,0x3f4ccccd,plVar2);
  return;
}




void FUN_00bbb660(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar7 = FUN_0092ea9c();
  bVar6 = (uVar7 & 1) == 0;
  lVar1 = param_5 + 0x1a8;
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar6) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar2 = param_5 + 0x2d8;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if (bVar6) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(lVar1,*ppuVar3);
  FUN_00aca7b8(lVar2,*ppuVar4);
  fVar8 = (float)param_1 * 0.5 - param_2;
  FUN_00ac9d00(0,fVar8,fVar8,lVar2);
  if ((*(float *)(param_5 + 0x1e8) != param_2) || (*(float *)(param_5 + 0x1ec) != param_3)) {
    *(float *)(param_5 + 0x1e8) = param_2;
    *(float *)(param_5 + 0x1ec) = param_3;
    FUN_0091ada4(lVar1);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_5 + 0x1a8) + 0x28))(lVar1,&local_80);
  fVar9 = 0.0;
  FUN_00f0db64((float)param_1 - (param_2 + param_2),0,0x3f800000,lVar1);
  fVar8 = (float)FUN_00aca658(lVar2);
  fVar10 = *(float *)(param_5 + 0x1ec);
  param_2 = fVar8 * 0.5 + param_2;
  fVar8 = fVar9;
  FUN_00f01c20(lVar1);
  fVar8 = fVar9 * 0.5 + fVar10 + fVar8 + param_4;
  if ((*(float *)(param_5 + 0x318) != param_2) || (*(float *)(param_5 + 0x31c) != fVar8)) {
    *(float *)(param_5 + 0x318) = param_2;
    *(float *)(param_5 + 0x31c) = fVar8;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_5 + 0x2d8) + 0x28))(lVar2,&local_80);
  FUN_00f13f08(param_1,fVar9 + *(float *)(param_5 + 0x31c) + param_4,param_5);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbb828(long *param_1)

{
  long *plVar1;
  
  FUN_00bbb56c();
  plVar1 = param_1 + 0x582;
  *param_1 = (long)&PTR_FUN_027eaec8;
  FUN_00ac7e14(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00aca914(plVar1,1,1);
  FUN_00aca7b8(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00aca750(0x3f666666,0x3f4ccccd,plVar1);
  return;
}




void FUN_00bbb8b8(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  uVar8 = FUN_0092ea9c();
  bVar7 = (uVar8 & 1) == 0;
  lVar1 = param_5 + 0x1a8;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar7) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar2 = param_5 + 0x2d8;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if (bVar7) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(lVar1,*ppuVar4);
  FUN_00aca7b8(lVar2,*ppuVar5);
  lVar3 = param_5 + 0x2c10;
  FUN_00aca7b8(lVar3,*ppuVar5);
  fVar11 = ((float)param_1 * 0.5 - param_2) * 0.5 + -17.0;
  FUN_00ac9d00(0,fVar11,fVar11,lVar2);
  FUN_00ac9d00(0,fVar11,fVar11,lVar3);
  if ((*(float *)(param_5 + 0x1e8) != param_2) || (*(float *)(param_5 + 0x1ec) != param_3)) {
    *(float *)(param_5 + 0x1e8) = param_2;
    *(float *)(param_5 + 0x1ec) = param_3;
    FUN_0091ada4(lVar1);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_5 + 0x1a8) + 0x28))(lVar1,&local_80);
  fVar10 = 0.0;
  FUN_00f0db64((float)param_1 - (param_2 + param_2),0,0x3f800000,lVar1);
  fVar11 = (float)FUN_00aca658(lVar2);
  fVar12 = *(float *)(param_5 + 0x1ec);
  param_2 = fVar11 * 0.5 + param_2;
  fVar11 = fVar10;
  FUN_00f01c20(lVar1);
  fVar11 = fVar10 * 0.5 + fVar12 + fVar11 + param_4;
  if ((*(float *)(param_5 + 0x318) != param_2) || (*(float *)(param_5 + 0x31c) != fVar11)) {
    *(float *)(param_5 + 0x318) = param_2;
    *(float *)(param_5 + 0x31c) = fVar11;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_5 + 0x2d8) + 0x28))(lVar2,&local_80);
  fVar11 = (float)FUN_00aca658(lVar2);
  fVar12 = (float)FUN_00aca658(lVar3);
  fVar9 = *(float *)(param_5 + 0x31c);
  fVar11 = *(float *)(param_5 + 0x318) + fVar11 * 0.5 + 8.5 + fVar12 * 0.5;
  if ((*(float *)(param_5 + 0x2c50) != fVar11) || (*(float *)(param_5 + 0x2c54) != fVar9 + 0.0)) {
    *(float *)(param_5 + 0x2c50) = fVar11;
    *(float *)(param_5 + 0x2c54) = fVar9 + 0.0;
    FUN_0091ada4(lVar3);
    fVar9 = *(float *)(param_5 + 0x31c);
  }
  FUN_00f13f08(param_1,fVar10 + fVar9 + param_4,param_5);
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbbb18(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00bbb454();
  plVar1 = param_1 + 0x35;
  *param_1 = (long)&PTR_FUN_027e13a8;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x5b;
  FUN_00b038f4(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  if ((*(uint *)((long)param_1 + 0x22c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar1);
  }
  FUN_00b042b4(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00b0426c(0x3f666666,0x3f4ccccd,plVar2);
  return;
}




void FUN_00bbbbfc(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar7 = FUN_0092ea9c();
  bVar6 = (uVar7 & 1) == 0;
  lVar1 = param_5 + 0x1a8;
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar6) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar2 = param_5 + 0x2d8;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if (bVar6) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  FUN_00f0d378(lVar1,*ppuVar3);
  FUN_00b042b4(lVar2,*ppuVar4);
  FUN_00b03dfc(((float)param_1 * 0.5 - param_2) + -244.0,lVar2);
  if ((*(float *)(param_5 + 0x1e8) != param_2) || (*(float *)(param_5 + 0x1ec) != param_3)) {
    *(float *)(param_5 + 0x1e8) = param_2;
    *(float *)(param_5 + 0x1ec) = param_3;
    FUN_0091ada4(lVar1);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_5 + 0x1a8) + 0x28))(lVar1,&local_80);
  fVar9 = 0.0;
  FUN_00f0db64((float)param_1 - (param_2 + param_2),0,0x3f800000,lVar1);
  FUN_00f13e54(lVar2);
  fVar10 = *(float *)(param_5 + 0x1ec);
  fVar8 = fVar9;
  FUN_00f01c20(lVar1);
  fVar8 = fVar9 * 0.5 + fVar10 + fVar8 + param_4;
  if ((*(float *)(param_5 + 0x318) != param_2) || (*(float *)(param_5 + 0x31c) != fVar8)) {
    *(float *)(param_5 + 0x318) = param_2;
    *(float *)(param_5 + 0x31c) = fVar8;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_5 + 0x2d8) + 0x28))(lVar2,&local_80);
  FUN_00f13f08(param_1,fVar9 + *(float *)(param_5 + 0x31c) + param_4,param_5);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bbbdc0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_00bbb454();
  plVar1 = param_1 + 0x35;
  *param_1 = (long)&PTR_FUN_027e1118;
  FUN_00f0bdbc(plVar1,1);
  plVar2 = param_1 + 0x4e;
  param_1[0x35] = (long)&PTR_FUN_027ccd08;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x74;
  FUN_00abbf0c(plVar3);
  plVar4 = param_1 + 0x413;
  FUN_00abbf0c(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  if ((*(uint *)((long)param_1 + 0x2f4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00abcec0(plVar3,1);
  FUN_00abced0(plVar3,1,1);
  FUN_00abcf28(plVar3,1);
  FUN_00abcec0(plVar4,1);
  FUN_00abced0(plVar4,1,5);
  FUN_00abcf28(plVar4,1);
  return;
}




void FUN_00bbbf18(undefined8 param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0092ea9c();
  ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar4 & 1) == 0) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  FUN_00f0d378(param_5 + 0x270,*ppuVar2);
  FUN_00f0db64((float)param_1 - (param_2 + param_2),0,0x3f800000,param_5 + 0x270);
  lVar1 = param_5 + 0x1a8;
  if ((*(float *)(param_5 + 0x1e8) != param_2) || (*(float *)(param_5 + 0x1ec) != param_3)) {
    *(float *)(param_5 + 0x1e8) = param_2;
    *(float *)(param_5 + 0x1ec) = param_3;
    FUN_0091ada4(lVar1);
  }
  fVar5 = 0.0;
  FUN_00f0bc10(0,0,0x42a00000,auStack_68);
  FUN_00f0c168(lVar1,auStack_68);
  (**(code **)(*(long *)(param_5 + 0x1a8) + 0x90))(lVar1);
  fVar6 = *(float *)(param_5 + 0x20dc);
  FUN_00abcf80(param_5 + 0x2098);
  FUN_00f13f08(param_1,fVar6 + fVar5 + param_4 + param_3,param_5);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

