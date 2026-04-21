// functions/00c64 — 25 functions
#include "libGameKindred.h"




void FUN_00c64104(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x788);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x790) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = *(uint *)(param_1 + 0x788);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x790) != 0) {
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}




void FUN_00c64160(void *param_1)

{
  FUN_00c63fb0();
  operator_delete(param_1);
  return;
}




void FUN_00c64184(long param_1)

{
  FUN_00f0d75c(param_1 + 0x510);
  return;
}




void FUN_00c6418c(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00a9bbc4(param_1 + 0x408,pbVar1);
  return;
}




void FUN_00c641a4(long *param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *local_b0;
  code *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((int)param_1[0xf1] == 0) {
    if (*param_2 != 0) {
      uVar1 = DAT_03210f8c;
      uVar2 = DAT_03210f60;
      lVar5 = 0;
      uVar6 = 0;
      do {
        pvVar4 = operator_new(0x48);
        FUN_00bd6a08(pvVar4,*(long *)(param_2 + 2) + lVar5,1,0);
        local_b0 = pvVar4;
        FUN_00c64384(param_1 + 0xf1,&local_b0);
        lStack_a0 = param_1[0x29];
        local_a8 = FUN_00c6440c;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = uVar6;
        local_80 = uVar1;
        FUN_009693a0(*(long *)((long)local_b0 + 8) + 8,&local_a8);
        lStack_a0 = param_1[0x29];
        local_a8 = FUN_00c6440c;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = uVar6;
        local_80 = uVar2;
        FUN_009693a0(*(long *)((long)local_b0 + 8) + 8,&local_a8);
        (**(code **)(**(long **)((long)local_b0 + 8) + 0x138))();
        local_a8 = (code *)0x3f0000003f000000;
        (**(code **)(**(long **)((long)local_b0 + 8) + 0x28))
                  (*(long **)((long)local_b0 + 8),&local_a8);
        *(uint *)(*(long *)((long)local_b0 + 8) + 0xec4) =
             *(uint *)(*(long *)((long)local_b0 + 8) + 0xec4) & 0xfffffffb;
        FUN_00c3ba10(*(undefined8 *)((long)local_b0 + 8),1);
        FUN_00c3ba3c(*(undefined8 *)((long)local_b0 + 8),1);
        FUN_00f0ad88(param_1 + 200,*(undefined8 *)((long)local_b0 + 8),1);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar6 < *param_2);
    }
    (**(code **)(*param_1 + 0x138))(param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c64384(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c647f8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c6440c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00c6441c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_4,param_5);
  return;
}




void FUN_00c64420(long param_1)

{
  *(undefined1 *)(param_1 + 0x798) = 1;
  return;
}




void FUN_00c6442c(long *param_1)

{
  if (*(char *)((long)param_1 + 0x79a) != '\0') {
    (**(code **)(*param_1 + 0x140))(param_1);
    (**(code **)(*(long *)param_1[0x29] + 0x10))();
    *(undefined1 *)((long)param_1 + 0x79a) = 0;
  }
  return;
}




void thunk_FUN_00c64104(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x788);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x790) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = *(uint *)(param_1 + 0x788);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x790) != 0) {
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}




void FUN_00c64478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c64484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  return;
}




void FUN_00c64488(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0x81;
  FUN_00f13f08(0x43960000,0x43960000,plVar1);
  plVar2 = param_1 + 99;
  FUN_00f13f08(0x43480000,0x43960000,plVar2);
  fVar9 = (float)FUN_00f0e700(plVar1);
  fVar10 = (float)FUN_00f0e700(plVar1);
  fVar10 = ((fVar9 + -200.0) * 0.5) / fVar10;
  param_1[0xa0] = CONCAT44(fVar10,fVar10);
  param_1[0x9f] = CONCAT44(fVar10,fVar10);
  FUN_00f07940(0x41200000,0x41200000,param_1 + 0xa2,0,param_1,0);
  FUN_00f07940(0,0x41a00000,plVar2,0,param_1 + 0xa2,3);
  fVar12 = 0.0;
  FUN_00f07940(0,0,plVar1,8,plVar2,8);
  plVar3 = param_1 + 200;
  fVar9 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = (float)FUN_00f0e700(plVar1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar9 - fVar10,fVar12 * 0.75,plVar3);
  fVar9 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = 0.8;
  (**(code **)(*param_1 + 0x48))(param_1);
  fStack_7c = fVar10 * 0.85;
  local_80 = fVar9 * 0.8;
  FUN_00f13f18(param_1 + 0x2a,&local_80);
  plVar1 = param_1 + 0x48;
  FUN_00f13f18(plVar1,&local_80);
  uVar11 = FUN_00f13e54(plVar3);
  if ((int)param_1[0xf1] != 0) {
    fVar9 = (float)NEON_fminnm(uVar11,0x45074000);
    uVar8 = 0;
    uVar11 = NEON_fminnm(fVar10,0x447a0000);
    do {
      FUN_00f13f08((fVar9 + -60.0) * 0.25,uVar11,
                   *(undefined8 *)(*(long *)(param_1[0xf2] + uVar8 * 8) + 8));
      (**(code **)(**(long **)(*(long *)(param_1[0xf2] + uVar8 * 8) + 8) + 0x90))();
      if (uVar8 == 0) {
        uVar5 = 0;
        uVar7 = 0;
        plVar6 = plVar3;
      }
      else {
        uVar5 = 7;
        uVar7 = 5;
        plVar6 = *(long **)(*(long *)(param_1[0xf2] + (ulong)((int)uVar8 - 1) * 8) + 8);
      }
      FUN_00f07940(0x41a00000,0,*(undefined8 *)(*(long *)(param_1[0xf2] + uVar8 * 8) + 8),uVar5,
                   plVar6,uVar7);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0xf1));
  }
  FUN_00f07940(0x42200000,0,plVar1,0,plVar2,1);
  FUN_00f07940(0,0,param_1 + 0x2a,8,plVar1,8);
  FUN_00f07940(0x43480000,0,plVar3,8,plVar1,8);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6477c(long param_1)

{
  byte bVar1;
  
  bVar1 = FUN_00f08470();
  bVar1 = bVar1 & 1;
  if (bVar1 != *(byte *)(param_1 + 0x799)) {
    if (bVar1 == 0) {
      FUN_00c64104(param_1);
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x148) + 8))();
    }
    *(byte *)(param_1 + 0x799) = bVar1;
  }
  return;
}




void FUN_00c647d0(long param_1)

{
  FUN_00f02914();
  *(undefined1 *)(param_1 + 0x79a) = 1;
  return;
}




void FUN_00c647f8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00c64878(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00ed45a4();
  plVar1 = param_1 + 0x1c;
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_027ff5b0;
  FUN_00f0e4a8(plVar1);
  FUN_00f0d160(param_1 + 0x3a);
  plVar2 = param_1 + 0x60;
  FUN_00f1306c(plVar2);
  FUN_00f0d160(param_1 + 0x8b);
  FUN_00c64fc0(param_1 + 0xb1);
  plVar3 = param_1 + 0x187;
  FUN_00ab6c24(plVar3,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3a,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f133d8(plVar2,param_1 + 0x8b,1);
  FUN_00f133d8(plVar2,param_1 + 0xb1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___RewardScreenBackground_p_02be3560,"full_splash_1k");
  local_88 = (code *)CONCAT44(local_88._4_4_,0xffffa800);
  FUN_00f0e670(plVar1,&local_88,2);
  FUN_00ab703c(0x42000000,0x42c80000,0x447a0000,plVar3,0,&DAT_03210450,&DAT_01bee7fa,&DAT_03218ef8,0
              );
  FUN_00ab71fc(plVar3,1);
  FUN_00f0da30(param_1 + 0x26b,1);
  local_60 = DAT_03210c64;
  local_88 = FUN_00c64aa8;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x188,&local_88);
  local_60 = DAT_03210c7c;
  local_88 = FUN_00c64ab8;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c64aa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c64ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))();
  return;
}




void FUN_00c64ab8(long *param_1)

{
  FUN_00aa1814(0);
                    /* WARNING: Could not recover jumptable at 0x00c64ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c64ae8(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  FUN_00f0d378(param_1 + 0x3a,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8);
  uVar1 = FUN_00e6ce7c("TALENT_REFUND_SCREEN_TITLE",0);
  FUN_00f0d75c(param_1 + 0x3a,uVar1);
  FUN_00f0d378(param_1 + 0x8b,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  uVar1 = FUN_00e6ce7c("TALENT_REFUND_SCREEN_DESCRIPTION",0);
  FUN_00f0d75c(param_1 + 0x8b,uVar1);
  FUN_00c64bc4(param_1 + 0xb1,param_2);
  FUN_00ab75e8(param_1 + 0x187,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  uVar1 = FUN_00e6ce7c("TALENT_REFUND_SCREEN_CLAIM_REFUND",0);
  FUN_00ab7498(param_1 + 0x187,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00c64bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c64bc4(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  plVar1 = param_1 + 0xb0;
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0db24(0x40000000,plVar1);
  FUN_00f0d75c(plVar1,&local_48);
  (**(code **)(*param_1 + 0xe8))(param_1);
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




void FUN_00c64c80(long *param_1)

{
  FUN_00aa1814(0);
                    /* WARNING: Could not recover jumptable at 0x00c64cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c64cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c64cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xd8))();
  return;
}




void FUN_00c64cc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&fStack_4c,&local_50);
  FUN_00f13f08(fStack_4c,local_50,param_1 + 0xe0);
  FUN_00f07a18(0,0,param_1 + 0xe0,8);
  lVar1 = param_1 + 0x588;
  FUN_00c64e70(lVar1);
  fVar4 = (float)FUN_00f13e54(lVar1);
  lVar2 = param_1 + 0x458;
  FUN_00f0dad0(fStack_4c * 0.55 - fVar4,lVar2,1);
  FUN_00f0dc4c(local_50 * 0.5,0,0x3f800000,lVar2);
  FUN_00f13db4(lVar2);
  FUN_00f07a18(0,0,lVar2,0);
  FUN_00f07940(0x42700000,0x41f00000,lVar1,0,lVar2,1);
  lVar1 = param_1 + 0x1d0;
  FUN_00f13db4(lVar1);
  FUN_00f07a18(0,0x42a00000,lVar1,4);
  FUN_00f13238(param_1 + 0x300);
  fVar4 = 40.0;
  FUN_00f07940(0,0x42200000,param_1 + 0x300,4,lVar1,6);
  lVar1 = param_1 + 0xc38;
  FUN_00f13db4(param_1 + 0x1358);
  FUN_00f0d4e0(param_1 + 0x1358);
  FUN_00ab7628(fVar4 * 1.5,lVar1);
  FUN_00f13db4(lVar1);
  FUN_00f07a18(0,0xc2a00000,lVar1,6);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c64e70(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = param_3 + 0x158;
  FUN_00f13db4(lVar1);
  lVar2 = param_3 + 0x248;
  fVar5 = (float)FUN_00f0eac0(lVar1);
  uVar6 = NEON_fmov(0x41200000,4);
  local_50 = CONCAT44((int)(param_2 + (float)((ulong)uVar6 >> 0x20)),(int)(fVar5 + (float)uVar6));
  FUN_00f13f18(lVar2,&local_50);
  uVar3 = *(uint *)(param_3 + 0x2cc);
  if ((uVar3 & 0x7f80) != 0x2c80) {
    *(uint *)(param_3 + 0x2cc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x2c80;
    FUN_0091ada4(lVar2);
  }
  FUN_00f13db4(lVar2);
  FUN_00f13db4(param_3 + 0x490);
  FUN_00f13db4(param_3 + 0x580);
  FUN_00f07a18(0,0,lVar2,0);
  FUN_00f07940(0,0,lVar1,8,lVar2,8);
  FUN_00f07940(0,0,param_3 + 0x580,7,param_3 + 0x490,5);
  FUN_00f13238(param_3 + 0x338);
  FUN_00f07940(0,0x41200000,param_3 + 0x338,4,lVar2,6);
  FUN_00f13238(param_3);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c64fc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_00f1306c();
  puVar1 = param_1 + 0x2b;
  *param_1 = &PTR_FUN_027ff6f8;
  FUN_00f0e4a8(puVar1);
  puVar2 = param_1 + 0x49;
  FUN_00f0e4a8(puVar2);
  puVar3 = param_1 + 0x67;
  FUN_00f1306c(puVar3);
  puVar4 = param_1 + 0x92;
  FUN_00f0e4a8(puVar4);
  FUN_00f0d160(param_1 + 0xb0);
  FUN_00f133d8(param_1,puVar2,1);
  FUN_00f133d8(param_1,puVar1,1);
  FUN_00f133d8(param_1,puVar3,1);
  FUN_00f133a4(puVar3,puVar4,1);
  FUN_00f133a4(puVar3,param_1 + 0xb0,1);
  FUN_00f0e548(puVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(puVar1,"build://Currency.png","card_image_2");
  if ((*(float *)(param_1 + 0x34) != 1.4) || (*(float *)((long)param_1 + 0x1a4) != 1.4)) {
    param_1[0x34] = 0x3fb333333fb33333;
    FUN_0091ada4(puVar1);
  }
  FUN_00f0e548(puVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  if ((*(float *)(param_1 + 0x9b) == 1.6) && (*(float *)((long)param_1 + 0x4dc) == 1.6)) {
    return;
  }
  param_1[0x9b] = 0x3fcccccd3fcccccd;
  FUN_0091ada4(puVar4);
  return;
}

