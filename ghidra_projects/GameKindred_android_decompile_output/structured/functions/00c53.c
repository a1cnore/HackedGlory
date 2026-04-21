// functions/00c53 — 20 functions
#include "libGameKindred.h"




void FUN_00c53154(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x9930);
  *(byte *)(param_1 + 0x9930) = bVar1 ^ 1;
  *(uint *)(param_1 + 0x8b14) =
       *(uint *)(param_1 + 0x8b14) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  FUN_00c52e88();
  return;
}




void FUN_00c53188(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xb0e0);
  *(byte *)(param_1 + 0xb0e0) = bVar1 ^ 1;
  *(uint *)(param_1 + 0xa2c4) =
       *(uint *)(param_1 + 0xa2c4) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  FUN_00c52e88();
  return;
}




void FUN_00c531bc(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xc890);
  *(byte *)(param_1 + 0xc890) = bVar1 ^ 1;
  *(uint *)(param_1 + 0xba74) =
       *(uint *)(param_1 + 0xba74) & 0xfffffffb | ((uint)bVar1 << 2 ^ 4) & 0xfc;
  return;
}




void FUN_00c531f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c531fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c53200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c5320c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c53210(undefined8 param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  
  if ((param_3 & 1) != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fe4);
    if ((((uVar1 & 1) != 0) || (DAT_03210fe4 == DAT_03210f50)) && (param_2[4] != 0)) {
      FUN_00b037f8(param_2[4],1);
    }
  }
  FUN_00c52e88(param_1);
  return;
}




uint FUN_00c53288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = FUN_00e70b14(param_2);
  iVar4 = FUN_00e70b14(param_3);
  if (iVar3 + 1 != iVar4) {
    uVar6 = 0;
    do {
      iVar3 = FUN_00e70b14(param_3);
      uVar7 = 0;
      if (iVar3 != 0) {
        do {
          sVar1 = FUN_00e70b1c(param_2,uVar6 + uVar7);
          sVar2 = FUN_00e70b1c(param_3,uVar7);
          if (sVar1 != sVar2) break;
          uVar7 = uVar7 + 1;
          uVar5 = FUN_00e70b14(param_3);
        } while (uVar7 < uVar5);
      }
      uVar5 = FUN_00e70b14(param_3);
      if (uVar7 == uVar5) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      iVar3 = FUN_00e70b14(param_2);
      iVar4 = FUN_00e70b14(param_3);
    } while (uVar6 < (uint)((iVar3 + 1) - iVar4));
  }
  return 0xffffffff;
}




undefined8 FUN_00c53364(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00f08be8(param_1 + 0xda8 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0x1e0);
  uVar1 = FUN_00e70b04();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00f08be8(param_1 + 0xda8 + ((ulong)*(byte *)(param_1 + 0x1118) & 1) * 0x130 + 0x1e0);
  uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x2e10) & 1) * 0x130 + 0x2c80);
  uVar2 = FUN_00e70b34(uVar2,uVar3);
  return uVar2;
}




undefined8 FUN_00c53408(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00f08be8(param_1 + 0x4798 + ((ulong)*(byte *)(param_1 + 0x4b08) & 1) * 0x130 + 0x1e0);
  uVar1 = FUN_00e70b04();
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar2 = FUN_00f08be8(param_1 + 0x4798 + ((ulong)*(byte *)(param_1 + 0x4b08) & 1) * 0x130 + 0x1e0);
  uVar3 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6800) & 1) * 0x130 + 0x6670);
  uVar2 = FUN_00e70b34(uVar2,uVar3);
  return uVar2;
}




void FUN_00c534b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c534bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c534c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c534cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c534d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fda18;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x2cf;
  FUN_00f0d160(plVar2);
  *(undefined1 *)(param_1 + 0x2f5) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  uVar4 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar4);
  plVar5 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,0,2);
  plVar5 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar5 + 0x70))(plVar5,0xe);
  plVar5 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar2,1,10);
  local_68 = (code *)CONCAT44(local_68._4_4_,0xffc0c0c0);
  FUN_00ab703c(0,0x42280000,0x42280000,plVar1,2,&DAT_03210450,&local_68,&DAT_03218ef8,0);
  FUN_00f13f08(0x42a00000,0x42a00000,plVar1);
  FUN_00ab7628(0x4280cccd,plVar1);
  FUN_00f0e578(param_1 + 0x121,"circle_button_x");
  *(uint *)((long)param_1 + 0x98c) = *(uint *)((long)param_1 + 0x98c) & 0xfffffffb;
  FUN_00b09144(0xbf800000,plVar1);
  local_40 = DAT_03210c64;
  local_68 = FUN_00c536ac;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_68);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c536ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00f04760(param_1,param_4,0);
  return;
}




void FUN_00c536b8(long param_1)

{
  *(undefined1 *)(param_1 + 0x17a8) = 0;
  *(uint *)(param_1 + 0x98c) = *(uint *)(param_1 + 0x98c) & 0xfffffffb;
  return;
}




void FUN_00c536d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00f04760(param_1,param_2,0);
  return;
}




void FUN_00c536d8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_027fd8d0;
  FUN_00f0d3a4(param_1 + 0x1cf6);
  FUN_00f0d3a4(param_1 + 0x1cd0);
  FUN_00f0d3a4(param_1 + 0x1caa);
  param_1[0x1c8c] = &PTR_FUN_028266f0;
  param_1[0x1ca3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ca6);
  FUN_00f13d08(param_1 + 0x1c8c);
  param_1[0x1c6e] = &PTR_FUN_028266f0;
  param_1[0x1c85] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c88);
  FUN_00f13d08(param_1 + 0x1c6e);
  FUN_00f13d08(param_1 + 0x1c57);
  lVar1 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1 + 0xe188);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x5f0);
  param_1[0x1b6e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1b85);
  FUN_00f13d08(param_1 + 0x1b6e);
  puVar2 = param_1 + 0x1b4e;
  lVar1 = -0x4b0;
  param_1[0x1abf] = &PTR_FUN_027d47d0;
  do {
    *puVar2 = &PTR_FUN_028266f0;
    puVar2[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar2 + 0x1a);
    FUN_00f13d08(puVar2);
    lVar1 = lVar1 + 0xf0;
    puVar2 = puVar2 + -0x1e;
  } while (lVar1 != 0);
  FUN_00f13d08(param_1 + 0x1abf);
  FUN_00f0d3a4(param_1 + 0x1a99);
  FUN_00f13d08(param_1 + 0x1a82);
  FUN_00f0d3a4(param_1 + 0x1a5c);
  param_1[0x1913] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x1a34);
  FUN_00c925cc(param_1 + 0x1913);
  param_1[0x161d] = &PTR_FUN_027fda18;
  FUN_00f0d3a4(param_1 + 0x18ec);
  FUN_009c7fa8(param_1 + 0x1634);
  FUN_00f13d08(param_1 + 0x161d);
  param_1[0x1327] = &PTR_FUN_027fda18;
  FUN_00f0d3a4(param_1 + 0x15f6);
  FUN_009c7fa8(param_1 + 0x133e);
  FUN_00f13d08(param_1 + 0x1327);
  param_1[0x1031] = &PTR_FUN_027fda18;
  FUN_00f0d3a4(param_1 + 0x1300);
  FUN_009c7fa8(param_1 + 0x1048);
  FUN_00f13d08(param_1 + 0x1031);
  param_1[0xc92] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x102b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x102b]);
    param_1[0x102b] = 0;
    param_1[0x102a] = 0;
  }
  if ((void *)param_1[0x1029] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1029]);
    param_1[0x1029] = 0;
    param_1[0x1028] = 0;
  }
  if ((void *)param_1[0x1027] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1027]);
    param_1[0x1027] = 0;
    param_1[0x1026] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1000);
  FUN_00f13d08(param_1 + 0xfe5);
  FUN_00f13d08(param_1 + 0xfca);
  FUN_009c7fa8(param_1 + 0xd12);
  FUN_00abd150(param_1 + 0xc92);
  param_1[0x8f3] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xc8c] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc8c]);
    param_1[0xc8c] = 0;
    param_1[0xc8b] = 0;
  }
  if ((void *)param_1[0xc8a] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc8a]);
    param_1[0xc8a] = 0;
    param_1[0xc89] = 0;
  }
  if ((void *)param_1[0xc88] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc88]);
    param_1[0xc88] = 0;
    param_1[0xc87] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xc61);
  FUN_00f13d08(param_1 + 0xc46);
  FUN_00f13d08(param_1 + 0xc2b);
  FUN_009c7fa8(param_1 + 0x973);
  FUN_00abd150(param_1 + 0x8f3);
  param_1[0x554] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x8ed] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8ed]);
    param_1[0x8ed] = 0;
    param_1[0x8ec] = 0;
  }
  if ((void *)param_1[0x8eb] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8eb]);
    param_1[0x8eb] = 0;
    param_1[0x8ea] = 0;
  }
  if ((void *)param_1[0x8e9] != (void *)0x0) {
    operator_delete__((void *)param_1[0x8e9]);
    param_1[0x8e9] = 0;
    param_1[0x8e8] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x8c2);
  FUN_00f13d08(param_1 + 0x8a7);
  FUN_00f13d08(param_1 + 0x88c);
  FUN_009c7fa8(param_1 + 0x5d4);
  FUN_00abd150(param_1 + 0x554);
  param_1[0x1b5] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x54e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x54e]);
    param_1[0x54e] = 0;
    param_1[0x54d] = 0;
  }
  if ((void *)param_1[0x54c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x54c]);
    param_1[0x54c] = 0;
    param_1[0x54b] = 0;
  }
  if ((void *)param_1[0x54a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x54a]);
    param_1[0x54a] = 0;
    param_1[0x549] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x523);
  FUN_00f13d08(param_1 + 0x508);
  FUN_00f13d08(param_1 + 0x4ed);
  FUN_009c7fa8(param_1 + 0x235);
  FUN_00abd150(param_1 + 0x1b5);
  FUN_00f13d08(param_1 + 0x19e);
  FUN_00f13d08(param_1 + 0x187);
  param_1[0x3e] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x15f);
  FUN_00c925cc(param_1 + 0x3e);
  FUN_00f0d3a4(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c53b94(void *param_1)

{
  FUN_00c536d8();
  operator_delete(param_1);
  return;
}




void FUN_00c53bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fda18;
  FUN_00f0d3a4(param_1 + 0x2cf);
  FUN_009c7fa8(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c53c00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fda18;
  FUN_00f0d3a4(param_1 + 0x2cf);
  FUN_009c7fa8(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c53c50(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  undefined2 local_70 [4];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027fdb60;
  FUN_00f0e4a8(param_1 + 0x18);
  plVar1 = param_1 + 0x36;
  FUN_00c543fc(plVar1);
  plVar2 = param_1 + 0x5c1;
  FUN_00c543fc(plVar2);
  plVar11 = param_1 + 0xb4c;
  FUN_00f13ca4(plVar11);
  plVar3 = param_1 + 0xb63;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0xb89;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0xba0;
  FUN_00f0e4a8(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x18,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_00f023ec(plVar11,plVar5,1);
  FUN_00f023ec(plVar11,plVar3,1);
  FUN_00f023ec(plVar11,plVar4,1);
  uVar8 = FUN_00f136e0();
  FUN_00f13fd8(param_1,uVar8);
  plVar9 = (long *)FUN_00f13624();
  (**(code **)(*plVar9 + 0x58))(plVar9,plVar1);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x46);
  (**(code **)(*plVar9 + 0x58))(plVar9,plVar2);
  plVar10 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar10 + 0x80))(plVar10,plVar9,1);
  plVar9 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x2d);
  uVar8 = FUN_00f13624();
  FUN_00f13fd8(plVar11,uVar8);
  plVar9 = (long *)FUN_00f14058(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,100);
  plVar9 = (long *)FUN_00f14058(plVar11);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar5,1,0x12);
  plVar9 = (long *)FUN_00f14058(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,0x14);
  plVar9 = (long *)FUN_00f14058(plVar11);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar4,1,2);
  plVar9 = (long *)FUN_00f14058(plVar11);
  (**(code **)(*plVar9 + 0x70))(plVar9,100);
  plVar9 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar9 + 0x68))(plVar9,plVar11,0,2);
  plVar11 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar11 + 0x70))(plVar11,0x2d);
  local_70[0] = 0x77;
  FUN_00f14070(plVar2,local_70);
  local_70[0] = 0x77;
  FUN_00f14070(plVar1,local_70);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_exclamation_point_circle")
  ;
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  pfVar6 = (float *)(param_1 + 0xba9);
  fVar13 = *pfVar6;
  if ((fVar13 != 2.0) || (fVar13 = *(float *)((long)param_1 + 0x5d4c), fVar13 != 2.0)) {
    pfVar6[0] = 2.0;
    pfVar6[1] = 2.0;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  uVar8 = FUN_00e6ce7c("MENU_SKILL_RESET_WHERE_TO_FIND",0);
  FUN_00f0d75c(plVar3,uVar8);
  FUN_00f0d7fc(plVar3,&DAT_01bee7f6);
  local_70[0] = 0x77;
  FUN_00f14070(plVar4,local_70);
  fVar12 = (float)FUN_00f0d4e0(plVar3);
  FUN_00f13f68(plVar4,CONCAT44((int)fVar13,(int)fVar12));
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

