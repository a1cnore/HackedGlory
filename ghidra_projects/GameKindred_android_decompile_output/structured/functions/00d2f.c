// functions/00d2f — 13 functions
#include "libGameKindred.h"




void FUN_00d2f0cc(void)

{
  return;
}




void FUN_00d2f0d0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long local_60;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&local_58,&local_60);
  lVar4 = FUN_00d66d28(local_58);
  uVar5 = FUN_00daa578(local_60,lVar4);
  if (((uVar5 & 1) != 0) && ((*(byte *)(*(long *)(local_60 + 0x20) + 0x2f4) & 1) != 0)) {
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    uVar3 = FUN_00d66d34(local_58);
    FUN_00d009d0(auStack_50,uVar1,uVar3);
    FUN_00ce20fc(auStack_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2f170(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2f0d0;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d2f1e0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_80;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_80);
    uVar6 = FUN_00d6eb50();
    uVar6 = FUN_00d6eb5c(uVar6,PTR_s__Item_SerpentMask__02beb110);
    fVar8 = (float)FUN_00d08524(uVar6,1,1);
    fVar9 = (float)FUN_00d08524(uVar6,2,1);
    lVar7 = FUN_00d66d28(local_80);
    lVar7 = *(long *)(lVar7 + 0x40);
    fVar10 = (*(float *)(lVar7 + 0x240) + 1.0) *
             (*(float *)(lVar7 + 0xd8) +
             *(float *)(lVar7 + 0x18c) * (*(float *)(lVar7 + 0x2f4) + 1.0));
    if (DAT_0315ced0 <= fVar10) {
      fVar10 = DAT_0315ced0;
    }
    fVar11 = DAT_0315ce10;
    if (DAT_0315ce10 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar10 = (fVar11 + -1.0) / 11.0;
    fVar10 = (float)(uint)(int)(fVar9 * fVar10 + fVar8 * (1.0 - fVar10));
    uVar3 = FUN_00d66cf4(local_80);
    fVar8 = (float)FUN_00d08524(uVar6,3,1);
    fVar8 = fVar10 / fVar8 + (float)uVar3;
    if (fVar8 <= fVar10) {
      fVar10 = fVar8;
    }
    lVar7 = FUN_00d66d28(local_80);
    uVar1 = *(undefined4 *)(lVar7 + 0x260);
    uVar4 = FUN_00d66d34(local_80);
    FUN_00d048bc(auStack_78,uVar1,uVar4,(int)fVar10,1);
    FUN_00ce20fc(auStack_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2f36c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_78;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d69294(param_1,&local_70,&local_78);
    lVar7 = FUN_00d66d28(local_70);
    uVar6 = FUN_00daa578(local_78,lVar7);
    if ((((uVar6 & 1) != 0) && ((*(byte *)(*(long *)(local_78 + 0x20) + 0x2f4) & 1) != 0)) &&
       (*(int *)(local_78 + 8) == 0)) {
      uVar8 = FUN_00d6eb50();
      uVar8 = FUN_00d6eb5c(uVar8,PTR_s__Item_SerpentMask__02beb110);
      uVar3 = FUN_00d66cf4(local_70);
      fVar9 = (float)FUN_00d08524(uVar8,0,1);
      lVar7 = *(long *)(lVar7 + 0x40);
      fVar12 = fVar9 * *(float *)(local_78 + 0x54);
      if (*(float *)(local_78 + 0x54) <= 0.0) {
        fVar12 = 0.0;
      }
      fVar10 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
               (*(float *)(lVar7 + 0x38) +
               *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
      if (DAT_0315ce30 <= fVar10) {
        fVar10 = DAT_0315ce30;
      }
      fVar11 = DAT_0315cd70;
      if (DAT_0315cd70 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar11 = fVar11 - *(float *)(lVar7 + 0x308);
      if (fVar11 <= fVar12) {
        fVar12 = fVar11;
      }
      if (fVar9 * (float)uVar3 <= fVar12) {
        fVar12 = fVar9 * (float)uVar3;
      }
      *(float *)(local_78 + 0x5c) = *(float *)(local_78 + 0x5c) + fVar12;
      lVar7 = FUN_00d66d28(local_70);
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar4 = FUN_00d66d34(local_70);
      iVar5 = FUN_00d66cf4(local_70);
      FUN_00d048bc(auStack_68,uVar1,uVar4,iVar5 - (int)(fVar12 / fVar9),1);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2f51c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_00d66d04(param_1,1,1);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2f1e0;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2f36c;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00d2f60c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67c60();
  FUN_00d425ec(auStack_60,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_60,uVar3);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_SerpentMask__02beb110);
  FUN_00d3e534();
  uVar4 = FUN_00d2cb84();
  FUN_00d42654(auStack_60,uVar4);
  puVar2 = PTR_s_Buff_Item_SerpentMask_02beb670;
  fVar6 = (float)FUN_00d08524(uVar3,2,1);
  FUN_00d3e888(0xbf800000,0,0,uVar4,puVar2,(int)fVar6,0xffffffff,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_60,uVar3);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_60,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_60,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Item_SerpentMask_02beb670);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_60,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2f770(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_80;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_80);
    uVar6 = FUN_00d6eb50();
    uVar6 = FUN_00d6eb5c(uVar6,PTR_s__Item_EveOfHarvest__02beb078);
    fVar8 = (float)FUN_00d08524(uVar6,1,1);
    fVar9 = (float)FUN_00d08524(uVar6,2,1);
    lVar7 = FUN_00d66d28(local_80);
    lVar7 = *(long *)(lVar7 + 0x40);
    fVar10 = (*(float *)(lVar7 + 0x240) + 1.0) *
             (*(float *)(lVar7 + 0xd8) +
             *(float *)(lVar7 + 0x18c) * (*(float *)(lVar7 + 0x2f4) + 1.0));
    if (DAT_0315ced0 <= fVar10) {
      fVar10 = DAT_0315ced0;
    }
    fVar11 = DAT_0315ce10;
    if (DAT_0315ce10 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar10 = (fVar11 + -1.0) / 11.0;
    fVar10 = (float)(uint)(int)(fVar9 * fVar10 + fVar8 * (1.0 - fVar10));
    uVar3 = FUN_00d66cf4(local_80);
    fVar8 = (float)FUN_00d08524(uVar6,3,1);
    fVar8 = fVar10 / fVar8 + (float)uVar3;
    if (fVar8 <= fVar10) {
      fVar10 = fVar8;
    }
    lVar7 = FUN_00d66d28(local_80);
    uVar1 = *(undefined4 *)(lVar7 + 0x260);
    uVar4 = FUN_00d66d34(local_80);
    FUN_00d048bc(auStack_78,uVar1,uVar4,(int)fVar10,1);
    FUN_00ce20fc(auStack_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2f8fc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_78;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d69294(param_1,&local_70,&local_78);
    lVar7 = FUN_00d66d28(local_70);
    uVar6 = FUN_00daa578(local_78,lVar7);
    if ((((uVar6 & 1) != 0) && ((*(byte *)(*(long *)(local_78 + 0x20) + 0x2f4) & 1) != 0)) &&
       (*(int *)(local_78 + 8) == 1)) {
      uVar3 = FUN_00d66cf4(local_70);
      uVar8 = FUN_00d6eb50();
      uVar8 = FUN_00d6eb5c(uVar8,PTR_s__Item_EveOfHarvest__02beb078);
      fVar9 = (float)FUN_00d08524(uVar8,0,1);
      lVar7 = *(long *)(lVar7 + 0x40);
      fVar12 = fVar9 * *(float *)(local_78 + 0x54);
      if (*(float *)(local_78 + 0x54) <= 0.0) {
        fVar12 = 0.0;
      }
      fVar10 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
               (*(float *)(lVar7 + 0x38) +
               *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
      if (DAT_0315ce30 <= fVar10) {
        fVar10 = DAT_0315ce30;
      }
      fVar11 = DAT_0315cd70;
      if (DAT_0315cd70 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar11 = fVar11 - *(float *)(lVar7 + 0x308);
      if (fVar11 <= fVar12) {
        fVar12 = fVar11;
      }
      if (fVar9 * (float)uVar3 <= fVar12) {
        fVar12 = fVar9 * (float)uVar3;
      }
      *(float *)(local_78 + 0x5c) = *(float *)(local_78 + 0x5c) + fVar12;
      lVar7 = FUN_00d66d28(local_70);
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar4 = FUN_00d66d34(local_70);
      iVar5 = FUN_00d66cf4(local_70);
      FUN_00d048bc(auStack_68,uVar1,uVar4,iVar5 - (int)(fVar12 / fVar9),1);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2faa4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_00d66d04(param_1,1,1);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2f770;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2f8fc;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00d2fb94(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67c60();
  FUN_00d425ec(auStack_60,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_60,uVar3);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_EveOfHarvest__02beb078);
  FUN_00d3e534();
  uVar4 = FUN_00d2cb84();
  FUN_00d42654(auStack_60,uVar4);
  puVar2 = PTR_s_Buff_Item_EveOfHarvest_02beb680;
  fVar6 = (float)FUN_00d08524(uVar3,2,1);
  FUN_00d3e888(0xbf800000,0,0,uVar4,puVar2,(int)fVar6,0xffffffff,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_60,uVar3);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_60,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_60,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Item_EveOfHarvest_02beb680);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_60,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2fcf8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *puVar8;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_98,&local_a0);
  lVar5 = FUN_00d66d28(local_98);
  uVar6 = FUN_00daa578(local_a0,lVar5);
  if (((uVar6 & 1) != 0) && ((*(byte *)(local_a0 + 0xc) >> 2 & 1) != 0)) {
    uVar3 = FUN_00e6a474("attackCounter");
    uVar3 = FUN_0091ed5c("attackCounter",uVar3,0x12345678);
    piVar7 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    puVar2 = PTR_s_Buff_Item_AlternatingCurrent_02beb690;
    if (*piVar7 == 0) {
      uVar3 = *(undefined4 *)(lVar5 + 0x260);
      uVar4 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar3,uVar3,puVar2,uVar4,1,0,0);
      FUN_00ce20fc(auStack_90);
      uVar3 = FUN_00e6a474("attackCounter");
      uVar3 = FUN_0091ed5c("attackCounter",uVar3,0x12345678);
      piVar7 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
      *piVar7 = *piVar7 + 1;
    }
    else {
      uVar3 = FUN_00e6a474("attackCounter");
      uVar3 = FUN_0091ed5c("attackCounter",uVar3,0x12345678);
      puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
      *puVar8 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2fe88(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d2fcf8;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("attackCounter");
  uVar4 = FUN_0091ed5c("attackCounter",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar5 + 0x100) + 8))(lVar5 + 0x100,uVar4);
  lVar5 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("attackCounter");
  uVar4 = FUN_0091ed5c("attackCounter",uVar4,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar4);
  *puVar6 = 0;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar5 + 0x18);
  FUN_00d3e534();
  uVar7 = FUN_00d2a504();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2a994();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d46fc0(uVar7,PTR_s_Buff_Item_AlternatingCurrent_02beb690);
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(auStack_60,uVar7);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

