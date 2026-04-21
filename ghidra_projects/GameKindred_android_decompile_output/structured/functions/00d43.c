// functions/00d43 — 15 functions
#include "libGameKindred.h"




void FUN_00d43058(long *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_a0;
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar11 = FUN_00ceab48();
  if ((uVar11 & 1) == 0) goto LAB_00d432f0;
  FUN_00d69224(param_1,&local_a0);
  lVar12 = FUN_00d66d28(local_a0);
  fVar17 = (float)FUN_009bc24c();
  puVar4 = PTR_s_timeOfLastDamageExchange_02bebb40;
  uVar5 = FUN_00e6a474(PTR_s_timeOfLastDamageExchange_02bebb40);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  pfVar13 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  puVar4 = PTR_s_lastStackTime_02bebb48;
  fVar18 = *pfVar13;
  uVar5 = FUN_00e6a474(PTR_s_lastStackTime_02bebb48);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  pfVar13 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  puVar4 = PTR_s_stackRate_02bebb50;
  uVar5 = FUN_00e6a474(PTR_s_stackRate_02bebb50);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  pfVar14 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  puVar4 = PTR_s_decayTime_02bebb58;
  fVar20 = *pfVar14;
  uVar5 = FUN_00e6a474(PTR_s_decayTime_02bebb58);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  pfVar14 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  puVar4 = PTR_s_stackFalloff_02bebb70;
  fVar19 = *pfVar14;
  uVar5 = FUN_00e6a474(PTR_s_stackFalloff_02bebb70);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  piVar15 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  puVar4 = PTR_s_bDecayAllStacks_02bebb68;
  iVar1 = *piVar15;
  uVar5 = FUN_00e6a474(PTR_s_bDecayAllStacks_02bebb68);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  pcVar16 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  if (fVar17 < fVar20 + *pfVar13) goto LAB_00d432f0;
  cVar2 = *pcVar16;
  if (fVar18 < *pfVar13) {
LAB_00d43284:
    if ((fVar17 <= fVar18 + fVar19) || (iVar10 = FUN_00d66cf4(local_a0), iVar10 < 1))
    goto LAB_00d432f0;
    iVar9 = 0;
    if (cVar2 == '\0') {
      fVar17 = (float)(iVar10 - iVar1);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      iVar9 = (int)fVar17;
    }
    uVar5 = *(undefined4 *)(lVar12 + 0x260);
    uVar8 = FUN_00d66d34(local_a0);
  }
  else {
    uVar6 = FUN_00d66cf4(local_a0);
    uVar7 = FUN_00d66cfc(local_a0);
    if (uVar7 <= uVar6) goto LAB_00d43284;
    uVar5 = *(undefined4 *)(lVar12 + 0x260);
    uVar8 = FUN_00d66d34(local_a0);
    iVar9 = FUN_00d66cf4(local_a0);
    iVar9 = iVar9 + 1;
  }
  FUN_00d048bc(auStack_98,uVar5,uVar8,iVar9,1);
  FUN_00ce20fc(auStack_98);
  fVar17 = (float)FUN_009bc24c();
  *pfVar13 = fVar17;
LAB_00d432f0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d43324(undefined4 param_1,undefined4 param_2,undefined8 param_3,uint param_4,byte param_5
                 ,undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  float fVar9;
  undefined4 uVar10;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d42ee8;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_3);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d43058;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_3);
  lVar4 = lVar5 + 0x100;
  fVar9 = (float)FUN_009bc24c();
  uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar4,PTR_s_timeOfLastDamageExchange_02bebb40)
  ;
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar4,uVar3);
  *pfVar6 = fVar9 + -0.1;
  uVar10 = FUN_009bc24c();
  uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar4,PTR_s_lastStackTime_02bebb48);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar4,uVar3);
  *puVar7 = uVar10;
  uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar4,PTR_s_stackRate_02bebb50);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar4,uVar3);
  *puVar7 = param_1;
  uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar4,PTR_s_decayTime_02bebb58);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar4,uVar3);
  *puVar7 = param_2;
  uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar4,PTR_s_bStackOnDefend_02bebb60);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar4,uVar3);
  *pfVar6 = (float)(param_4 & 1);
  uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar4,PTR_s_bDecayAllStacks_02bebb68);
  pbVar8 = (byte *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar4,uVar3);
  *pbVar8 = param_5 & 1;
  uVar3 = (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar4,PTR_s_stackFalloff_02bebb70);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar4,uVar3);
  *puVar7 = param_6;
  return;
}




void FUN_00d435a4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d66d28(param_1);
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar3 = FUN_00d66d34(param_1);
    iVar4 = FUN_00d66cf4(param_1);
    FUN_00d048bc(auStack_68,uVar1,uVar3,iVar4 + 1,1);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d43638(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d66d28(param_1);
    iVar3 = FUN_00d66cf4(param_1);
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar4 = FUN_00d66d34(param_1);
    fVar7 = (float)(iVar3 + -1);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    FUN_00d048bc(auStack_68,uVar1,uVar4,(int)fVar7,1);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d436dc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d66d28(param_1);
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar3 = FUN_00d66d34(param_1);
    FUN_00d009d0(auStack_60,uVar1,uVar3);
    FUN_00ce20fc(auStack_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4375c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_40);
  lVar4 = FUN_00d66d28(local_40);
  uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) == 1)) {
    FUN_00d5a450(0x3f800000,lVar4,"Idle",1,0,0);
  }
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    uVar3 = FUN_00d5ba88(lVar4);
    uVar6 = FUN_00da2d50(lVar4);
    FUN_00d0565c(auStack_68,uVar3,uVar6);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00d43834(undefined8 param_1,long *param_2)

{
  return *(char *)(*param_2 + 0x8e) == '\0';
}




void FUN_00d43848(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_00d66d28(*param_4);
  if ((*(byte *)(lVar1 + 0x2f4) & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_00ceceb4(*(undefined4 *)(lVar1 + 0x260));
  }
  uVar2 = FUN_00d55870(lVar1);
  FUN_00d79d64(uVar2,uVar3);
  uVar3 = FUN_00d79c84();
  *param_5 = uVar3;
  param_5[1] = param_2;
  param_5[2] = param_3;
  *param_6 = 0;
  return;
}




void FUN_00d438b8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00ceacf4();
  if (iVar1 == 0x34) {
    uVar4 = 0xc2b40000;
    param_2 = 0;
    param_3 = 0;
    goto LAB_00d43948;
  }
  if ((*(byte *)(param_5 + 0x2f4) & 1) == 0) {
    iVar1 = FUN_00d5cf60(param_5);
    if (iVar1 != -1) {
      uVar2 = FUN_00d5cf60(param_5);
      goto LAB_00d4392c;
    }
    uVar4 = 1;
  }
  else {
    uVar2 = (ulong)*(uint *)(param_5 + 0x260);
LAB_00d4392c:
    uVar4 = FUN_00ceceb4(uVar2);
  }
  uVar3 = FUN_00d55870(param_5);
  FUN_00d79d64(uVar3,uVar4);
  uVar4 = FUN_00d79c84();
LAB_00d43948:
  *param_6 = uVar4;
  param_6[1] = param_2;
  param_6[2] = param_3;
  return;
}




void FUN_00d43960(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d66d28(*param_1);
  cVar2 = FUN_00d55870();
  if (cVar2 == '\x01') {
    local_30 = DAT_03218f70;
    local_38 = DAT_03218f68;
  }
  else {
    local_38 = CONCAT44(-(float)((ulong)DAT_03218f68 >> 0x20),-(float)DAT_03218f68);
    local_30 = -DAT_03218f70;
  }
  FUN_00d580b0(uVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d43a04(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031a9220 <= fVar2) {
    fVar2 = DAT_031a9220;
  }
  fVar3 = DAT_031a9160;
  if (DAT_031a9160 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 * 0.25;
}




float FUN_00d43a70(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a8) + 1.0) *
          (*(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0));
  if (DAT_031a9228 <= fVar2) {
    fVar2 = DAT_031a9228;
  }
  fVar3 = DAT_031a9168;
  if (DAT_031a9168 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 * 0.25;
}




bool FUN_00d43ae4(undefined8 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = FUN_00d66d28(*param_1);
  uVar5 = FUN_00ced058(*(undefined4 *)(lVar4 + 0x260));
  bVar1 = false;
  if ((uVar5 & 1) != 0) {
    FUN_00ceace8(0);
    uVar5 = thunk_FUN_00da17a0();
    bVar1 = false;
    if ((uVar5 & 1) != 0) {
      FUN_00d67b84(*param_1);
      uVar2 = FUN_00cee0c8();
      uVar3 = FUN_00ceac18();
      bVar1 = uVar3 <= (uVar2 & 0xff);
    }
  }
  return bVar1;
}




void FUN_00d43b4c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  FUN_00ceace8();
  uVar3 = thunk_FUN_00da17a0();
  if ((uVar3 & 1) != 0) {
    FUN_00d67b84(*param_1);
    bVar1 = FUN_00cee0c8();
    if ((bVar1 < 7) && (uVar2 = FUN_00ceac18(), uVar2 <= bVar1)) {
      FUN_00e6a584(param_2,(&PTR_s_Effect_Nothing_0281b798)[bVar1],param_3);
      return;
    }
  }
  return;
}




void FUN_00d43bd4(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00d66d04(param_1,8,1);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d66d28(param_1);
    puVar4 = PTR_s_Buff_Tutorial_RecallUncancellabl_02bf10e8;
    lVar7 = FUN_00d9e390(*(undefined4 *)(lVar7 + 0x260));
    if ((lVar7 == 0) || (uVar6 = FUN_00d44be0(lVar7,puVar4), (uVar6 & 1) == 0)) {
      uVar8 = FUN_00d64464(param_1);
      FUN_00d4bbf8(uVar8,5);
      lVar7 = FUN_00d4bc24();
      FUN_00d2a320(lVar7 + 0x10);
    }
    uVar8 = FUN_00d634b4(param_1);
    lVar7 = FUN_00d4aab0(uVar8,FUN_00d43834);
    FUN_00d2a320(lVar7 + 0x10);
    lVar7 = FUN_00d67c60(param_1);
    puVar4 = PTR_s_onCancelName_02bed510;
    uVar5 = FUN_00e6a474(PTR_s_onCancelName_02bed510);
    uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar5;
    uVar2 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar2 * 8 + 0x40) = FUN_00d4375c;
    *(uint *)(lVar7 + 0xf8) = uVar2 + 1;
  }
  lVar7 = FUN_00d65010(param_1);
  plVar9 = (long *)FUN_00d44e48(lVar7 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))();
  (**(code **)(*plVar9 + 0x38))(plVar9,"Withdraw");
  plVar9 = (long *)FUN_00d2df94(lVar7 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))
                             (plVar9,"build://Sounds/Environment.assetbundle/sfx_teleport.mp3");
  (**(code **)(*plVar9 + 0x28))(0x3f666666);
  lVar7 = FUN_00d65010(param_1);
  uVar8 = FUN_00d2d01c(lVar7 + 0x10);
  uVar10 = FUN_00d9b294();
  FUN_00d9b5c0(uVar10,FUN_00d43ae4);
  FUN_00d9b744();
  FUN_00d9b5b0(uVar8);
  plVar9 = (long *)FUN_00d2945c();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x60))();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x58))(plVar9,FUN_00d43b4c);
  plVar9 = (long *)(**(code **)(*plVar9 + 0xb0))(plVar9,1);
  plVar9 = (long *)(**(code **)(*plVar9 + 0xf0))();
  (**(code **)(*plVar9 + 0x90))();
  lVar7 = FUN_00d63f30(param_1);
  plVar9 = (long *)FUN_00d2887c(lVar7 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Withdraw_Ping_02beb460);
  uVar5 = FUN_00d67b3c(param_1);
  local_68 = (code *)CONCAT44(local_68._4_4_,uVar5);
  local_60 = 1;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_68);
  plVar9 = (long *)FUN_00d2cc5c(lVar7 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))
                             (plVar9,"build://Sounds/Environment.assetbundle/sfx_teleport_start.mp3"
                             );
  (**(code **)(*plVar9 + 0x28))(0x3e4ccccd);
  lVar7 = FUN_00d6624c(param_1);
  lVar7 = lVar7 + 0x10;
  bVar1 = (param_2 & 1) != 0;
  if (bVar1) {
    plVar9 = (long *)FUN_00d44e98(lVar7);
    (**(code **)(*plVar9 + 0x30))(plVar9,"Effect_Withdraw_Finish",FUN_00d43848);
  }
  FUN_00d39534(lVar7);
  FUN_00d44ee8(lVar7);
  FUN_00d9c6b0();
  plVar9 = (long *)FUN_00d44f38(lVar7);
  (**(code **)(*plVar9 + 0x30))(plVar9,FUN_00d438b8);
  uVar8 = FUN_00d39a54(lVar7);
  FUN_00d3e604(uVar8,FUN_00d43960);
  if (bVar1) {
    plVar9 = (long *)FUN_00d2945c(lVar7);
    plVar9 = (long *)(**(code **)(*plVar9 + 0x60))();
    (**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Withdraw_Channel_End");
    plVar9 = (long *)FUN_00d2cc5c(lVar7);
    plVar9 = (long *)(**(code **)(*plVar9 + 0x38))
                               (plVar9,
                                "build://Sounds/Environment.assetbundle/sfx_teleport_land.mp3");
    (**(code **)(*plVar9 + 0x28))(0x3f4ccccd);
  }
  lVar7 = FUN_00d29e8c(lVar7);
  lVar11 = FUN_00d2a370(lVar7 + 0x10);
  *(undefined **)(lVar11 + 8) = PTR_s_Buff_SpawnStage_Recharge_02bf1068;
  plVar9 = (long *)FUN_00d39584(lVar7 + 0xa0);
  local_68 = FUN_00d43a04;
  local_60 = 4;
  (**(code **)(*plVar9 + 0x30))(plVar9,&local_68);
  plVar9 = (long *)FUN_00d2a464(lVar7 + 0xa0);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))();
  local_68 = FUN_00d43a70;
  local_60 = 4;
  (**(code **)(*plVar9 + 0x10))(plVar9,2,&local_68);
  lVar7 = FUN_00d65d0c(param_1);
  FUN_00d2a320(lVar7 + 0x10);
  lVar7 = FUN_00d64980(param_1);
  plVar9 = (long *)FUN_00d2a160(lVar7 + 0x10);
  (**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Withdraw_Ping_02beb460);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

