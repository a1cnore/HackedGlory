// functions/00a30 — 17 functions
#include "libGameKindred.h"




void FUN_00a300dc(undefined8 param_1,int *param_2)

{
  if ((*param_2 != 0x22) && (*param_2 != 0x1b)) {
    return;
  }
  FUN_00a2fdf0();
  return;
}




void FUN_00a300f8(code *param_1,long param_2,undefined4 param_3,byte param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  code *pcVar8;
  char *pcVar9;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_00f1306c();
  pcVar8 = param_1 + 0x158;
  *(undefined ***)param_1 = &PTR_FUN_027c9198;
  FUN_00f0e4a8(pcVar8);
  pcVar1 = param_1 + 0x248;
  FUN_00f0e4a8(pcVar1);
  pcVar2 = param_1 + 0x338;
  FUN_00f0eda4(pcVar2);
  pcVar3 = param_1 + 0x438;
  FUN_00f0d160(pcVar3);
  pcVar4 = param_1 + 0x568;
  FUN_00f0d160(pcVar4);
  FUN_00f13ca4(param_1 + 0x698);
  *(long *)(param_1 + 0x750) = 0;
  *(long *)(param_1 + 0x758) = param_2;
  FUN_00e70314(param_1 + 0x760);
  *(undefined4 *)(param_1 + 0x770) = param_3;
  *(undefined4 *)(param_1 + 0x774) = 0;
  param_1[0x778] = (code)0x0;
  local_90 = thunk_FUN_00a30720;
  local_98 = param_1;
  FUN_00f02e98(0xbf800000,&local_98,0,1);
  param_1[0x778] = (code)(param_4 & 1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar8,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar2,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar3,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar4,1);
  (**(code **)(*(long *)param_1 + 0x78))(param_1,param_1 + 0x698,1);
  FUN_00f0e548(pcVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_ability_shoulder");
  FUN_00f0e548(pcVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_ability_shoulder");
  if ((param_4 & 1) == 0) {
    pcVar8 = FUN_00a30518;
  }
  else {
    param_1[0x230] = (code)((byte)param_1[0x230] | 1);
    param_1[800] = (code)((byte)param_1[800] | 1);
    param_1[0x410] = (code)((byte)param_1[0x410] | 1);
    pcVar8 = FUN_00a30468;
  }
  FUN_00f0eea0(pcVar2,pcVar8,param_1 + 0x774);
  FUN_00f0e540(pcVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  puVar7 = (undefined8 *)FUN_00d73214(param_2,param_3);
  iVar6 = strcmp((char *)*puVar7,PTR_s_Healing_Flask_02be3428);
  if (iVar6 == 0) {
    pcVar9 = "hud_ability_healFlask";
  }
  else {
    puVar7 = (undefined8 *)FUN_00d73214(param_2,param_3);
    iVar6 = strcmp((char *)*puVar7,PTR_s_Vision_Totem_02be3430);
    if (iVar6 != 0) goto LAB_00a30368;
    pcVar9 = "hud_ability_visionTotem";
  }
  FUN_00f0e578(pcVar1,pcVar9);
LAB_00a30368:
  *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffffb;
  FUN_00f0d378(pcVar3,PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10);
  FUN_00f0d378(pcVar4,PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
  FUN_00e705c8(&local_98,"0");
  FUN_00f0d75c(pcVar4,&local_98);
  if (local_90 != (code *)0x0) {
    operator_delete__(local_90);
  }
  local_70 = DAT_03210f58;
  local_98 = FUN_00a305c8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_009693a0(param_1 + 0x6a0,&local_98);
  local_98 = FUN_00a305c8;
  local_70 = DAT_03210f84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_009693a0(param_1 + 0x6a0,&local_98);
  *(uint *)(param_1 + 0x71c) = *(uint *)(param_1 + 0x71c) | 0x10;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a30468(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"hud_ability_shoulder");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3ee66666,0x3f19999a,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,1,0,param_8,0x3f800000);
  return;
}




void FUN_00a30518(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"hud_ability_shoulder");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f0ccccd,0x3f19999a,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00a305c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a3102c(param_1,param_4);
  return;
}




void FUN_00a305d0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c9198;
  pcStack_50 = thunk_FUN_00a30720;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  if ((long *)param_1[0xea] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xea] + 8))();
    param_1[0xea] = 0;
  }
  FUN_00f13d08(param_1 + 0xd3);
  FUN_00f0d3a4(param_1 + 0xad);
  FUN_00f0d3a4(param_1 + 0x87);
  param_1[0x67] = &PTR_FUN_028266f0;
  param_1[0x7e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x81);
  FUN_00f13d08(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a306fc(void *param_1)

{
  FUN_00a305d0();
  operator_delete(param_1);
  return;
}




void FUN_00a30720(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30 [2];
  long local_28;
  
  puVar3 = local_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0xff808080;
  iVar2 = FUN_00d736f4(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
  if (iVar2 == 0) {
    puVar3 = &DAT_01bee7fa;
  }
  FUN_00f0e670(param_1 + 0x248,puVar3,2);
  FUN_00a307b0(param_1);
  FUN_00a308dc(param_1);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a307b0(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_1 + 0x758) != 0) &&
     (uVar3 = FUN_00d73360(*(long *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770)),
     (uVar3 & 1) != 0)) {
    FUN_00f0d75c(param_1 + 0x438,&DAT_03210450);
    *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) & 0xfffffffb;
    *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) & 0xfffffffb;
    uVar2 = FUN_00d736f4(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
    if ((uVar2 >> 2 & 1) != 0) {
      fVar4 = (float)FUN_00d734b0(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770))
      ;
      FUN_00e70510(&local_48);
      FUN_00e70e18(&local_48,&DAT_01bb6d43,(int)(fVar4 + 0.99));
      FUN_00f0d75c(param_1 + 0x438,&local_48);
      *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) | 4;
      fVar5 = (float)FUN_00d7349c(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770))
      ;
      *(float *)(param_1 + 0x774) = 1.0 - fVar4 / fVar5;
      *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) | 4;
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a308dc(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(long *)(param_1 + 0x758) != 0) &&
     (uVar3 = FUN_00d73360(*(long *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770)),
     (uVar3 & 1) != 0)) {
    uVar3 = FUN_00d73374(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
    if ((uVar3 & 1) != 0) {
      iVar1 = FUN_00d731ec(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
      fVar4 = (float)FUN_00d73200(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770))
      ;
      if (0 < iVar1) {
        if (0.0 < fVar4) {
          fVar5 = (float)FUN_00d7349c(*(undefined8 *)(param_1 + 0x758),
                                      *(undefined4 *)(param_1 + 0x770));
          *(float *)(param_1 + 0x774) = 1.0 - fVar4 / fVar5;
          *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) | 4;
        }
        *(uint *)(param_1 + 0x5ec) = *(uint *)(param_1 + 0x5ec) | 4;
        goto LAB_00a309bc;
      }
    }
    uVar2 = FUN_00d7312c(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
    if (1 < uVar2) {
      *(uint *)(param_1 + 0x5ec) = *(uint *)(param_1 + 0x5ec) | 4;
      iVar1 = FUN_00d7312c(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
LAB_00a309bc:
      FUN_00a30c90(param_1,iVar1);
      return;
    }
    *(uint *)(param_1 + 0x5ec) = *(uint *)(param_1 + 0x5ec) & 0xfffffffb;
  }
  return;
}




void FUN_00a309e4(long *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = 0x3f0000003f000000;
  plVar1 = param_1 + 0x49;
  fVar7 = *(float *)(&DAT_01b9f9a8 + (ulong)((char)param_1[0xef] == '\0') * 4);
  (**(code **)(param_1[0x49] + 0x28))(plVar1,&local_60);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x87] + 0x28))(param_1 + 0x87,&local_60);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0xad] + 0x28))(param_1 + 0xad,&local_60);
  uVar4 = 2;
  if ((char)param_1[0xef] != '\0') {
    uVar4 = 3;
  }
  FUN_00f07940(0,0,plVar1,uVar4,param_1 + 0x2b,uVar4);
  fVar5 = (float)FUN_00f0e700(plVar1);
  fVar6 = -6.0;
  FUN_00f07940(fVar7 * fVar5,param_1 + 0xad,6,plVar1,6);
  fVar5 = (float)FUN_00f0e700(plVar1);
  FUN_00f0e700(plVar1);
  fVar6 = fVar6 * 0.05;
  FUN_00f07940(fVar7 * fVar5,param_1 + 0x87,8,plVar1,8);
  if ((*(uint *)((long)param_1 + 0x3bc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3bc) = *(uint *)((long)param_1 + 0x3bc) & 0xffff807f | 0x3f80;
    FUN_0091ada4(param_1 + 0x67);
  }
  *(uint *)((long)param_1 + 0x71c) = *(uint *)((long)param_1 + 0x71c) & 0xffffffbf;
  FUN_00f13238(param_1);
  fVar7 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  local_60 = CONCAT44(fVar6 + 6.0,fVar7 + 36.0);
  FUN_00f13f18(param_1 + 0xd3,&local_60);
  uVar4 = 2;
  if ((char)param_1[0xef] != '\0') {
    uVar4 = 3;
  }
  FUN_00f07940(0,0,param_1 + 0xd3,uVar4,param_1,uVar4);
  if (param_1[0xea] != 0) {
    bVar3 = (char)param_1[0xef] == '\0';
    uVar4 = 0x40c00000;
    if (bVar3) {
      uVar4 = 0xc0c00000;
    }
    FUN_00f07940(uVar4,0x42380000,param_1[0xea],bVar3,plVar1,bVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a30bfc(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  
  uVar2 = FUN_01980628();
  if ((((uVar2 & 1) != 0) || (iVar1 = FUN_0092f28c(), iVar1 == 1)) &&
     (uVar2 = FUN_00ceab64(), (uVar2 & 1) == 0)) {
    pvVar3 = operator_new(0x200);
    FUN_00c81dd8(pvVar3,param_2);
    *(void **)(param_1 + 0x750) = pvVar3;
    FUN_00f023ec(param_1 + 0x248,pvVar3,1);
    return;
  }
  return;
}




void FUN_00a30c74(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x750);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) =
         *(uint *)(lVar1 + 0x84) & 0xfffffff8 | *(uint *)(lVar1 + 0x84) & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00a30c90(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x568,&local_48);
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




void FUN_00a30d18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  long *plVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    FUN_00f01a4c(param_1,1);
    (**(code **)(*plVar5 + 0x78))(plVar5,param_1,1);
  }
  lVar1 = param_1 + 0x248;
  FUN_00f01980(lVar1);
  lVar3 = DAT_03210d00;
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efe530(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  uVar7 = NEON_fmov(0x3fe00000,4);
  local_50 = CONCAT44((float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar7 >> 0x20),
                      (float)uVar8 * (float)uVar7);
  FUN_00efe58c(puVar6,&local_50);
  FUN_00efcac4(0x3c23d70a,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efe530(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  local_50 = uVar8;
  FUN_00efe58c(puVar6,&local_50);
  FUN_00efcac4(0x3e800000,puVar6);
  FUN_00efcb24(puVar6,FUN_00a269a4);
  FUN_00f022a0(lVar1,puVar6);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a30f2c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **local_50 [2];
  undefined1 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((((*(int *)(param_1 + 0x770) != -1) && (*(long *)(param_1 + 0x758) != 0)) &&
      (lVar5 = *(long *)(*(long *)(param_1 + 0x758) + 0x10), lVar5 != 0)) &&
     (((uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f, uVar1 == 0x1f ||
       (1 < *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
      ((uVar3 = FUN_00d73574(), (uVar3 & 1) != 0 &&
       (uVar3 = FUN_00d736e0(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770)),
       (uVar3 & 1) != 0)))))) {
    uVar4 = FUN_00a1f33c();
    FUN_00a19d20(local_50,*(undefined1 *)(param_1 + 0x778));
    local_3c = 0;
    local_50[0] = &PTR_FUN_027c84b8;
    uVar3 = FUN_00a1a334(uVar4,local_50);
    if ((uVar3 & 1) != 0) {
      FUN_00a30d18(param_1);
    }
    FUN_00e70314(param_1 + 0x760);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a30720(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_30 [2];
  long lStack_28;
  
  puVar3 = auStack_30;
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  auStack_30[0] = 0xff808080;
  iVar2 = FUN_00d736f4(*(undefined8 *)(param_1 + 0x758),*(undefined4 *)(param_1 + 0x770));
  if (iVar2 == 0) {
    puVar3 = &DAT_01bee7fa;
  }
  FUN_00f0e670(param_1 + 0x248,puVar3,2);
  FUN_00a307b0(param_1);
  FUN_00a308dc(param_1);
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

