// functions/00dcd — 8 functions
#include "libGameKindred.h"




void FUN_00dcd47c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float local_a28;
  float local_a24;
  float local_a20;
  undefined1 auStack_a18 [8];
  undefined1 local_a10 [8];
  float local_a08;
  float local_9fc;
  float local_9f8;
  float fStack_9f4;
  float local_9f0;
  float local_9e8;
  float fStack_9e4;
  float local_9e0;
  undefined1 auStack_9d8 [88];
  undefined1 auStack_980 [88];
  undefined1 auStack_928 [112];
  undefined1 auStack_8b8 [60];
  undefined4 local_87c;
  undefined1 auStack_848 [88];
  undefined1 auStack_7f0 [40];
  undefined1 auStack_7c8 [120];
  undefined1 auStack_750 [64];
  undefined4 local_710;
  long local_6f0 [200];
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d5048c(param_1);
    FUN_00dcce24(param_1,&local_9e8);
    FUN_00d4d9e8(auStack_750);
    FUN_00d4dabc(auStack_750,0x2000000);
    FUN_00d4daf4(auStack_750,0,1,0,lVar8);
    FUN_00d4dcdc(auStack_750,1);
    local_710 = 0x3f800000;
    FUN_00d4e61c(auStack_7c8,auStack_750);
    FUN_00d55794(lVar8,&local_9f8,0);
    local_a08 = local_9f0;
    local_9fc = local_9e0;
    FUN_00d4e838(0x3f800000,auStack_7c8,local_a10);
    FUN_00d4eb08(auStack_7f0,&local_9f8,200,0);
    uVar4 = FUN_00d9e840(auStack_7c8,local_6f0,200,auStack_7f0);
    puVar3 = PTR_s_Buff_Kestrel_C_ClientImpact_02bf0a58;
    if ((int)uVar4 < 1) {
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0x3f800000,local_9e8,local_9e0,auStack_8b8,uVar1,uVar1,puVar3,uVar6,1,0,0);
      FUN_00ce20fc(auStack_8b8);
    }
    else {
      uVar7 = (ulong)uVar4;
      plVar11 = local_6f0;
      do {
        puVar3 = PTR_s_Buff_GloballyVisible_02bebad8;
        lVar10 = *plVar11;
        uVar1 = *(undefined4 *)(lVar8 + 0x260);
        uVar6 = *(undefined4 *)(lVar10 + 0x260);
        uVar16 = FUN_00d59f54(lVar8,2,8,0x19,0);
        uVar5 = FUN_00ceb350();
        FUN_00cfe864(uVar16,0,0,auStack_848,uVar1,uVar6,puVar3,uVar5,1,0,0);
        FUN_00ce20fc(auStack_848);
        fVar12 = (float)FUN_00d59f54(lVar8,2,5,5,0);
        fVar13 = (float)FUN_00d5a3d0(lVar8,DAT_0320e69c,0,9);
        fVar12 = fVar12 * fVar13;
        fVar13 = (float)FUN_00d59f54(lVar8,2,5,8,0);
        fVar14 = (float)FUN_00d5a3d0(lVar8,DAT_0320e69c,0,9);
        fVar13 = fVar13 * fVar14;
        if ((*(byte *)(lVar10 + 0x2f5) >> 4 & 1) != 0) {
          fVar14 = (float)FUN_00d59f54(lVar8,2,7,0x19,0);
          fVar15 = (float)FUN_00d5a3d0(lVar8,DAT_0320e69c,2,9);
          fVar12 = fVar12 * fVar14 * fVar15;
          fVar14 = (float)FUN_00d59f54(lVar8,2,7,0x19,0);
          fVar15 = (float)FUN_00d5a3d0(lVar8,DAT_0320e69c,2,9);
          fVar13 = fVar13 * fVar14 * fVar15;
        }
        FUN_00d9e1e0(lVar8,lVar10,auStack_a18);
        uVar1 = *(undefined4 *)(lVar8 + 0x260);
        uVar6 = *(undefined4 *)(lVar10 + 0x260);
        lVar9 = FUN_00d5029c(param_1);
        FUN_00daa148(fVar12,auStack_8b8,uVar1,uVar6,0,2,auStack_a18,*(undefined8 *)(lVar9 + 8),0,1);
        local_87c = FUN_00d59f54(lVar8,2,6,0x19,0);
        FUN_00910c08(auStack_8b8);
        uVar1 = *(undefined4 *)(lVar8 + 0x260);
        uVar6 = *(undefined4 *)(lVar10 + 0x260);
        lVar9 = FUN_00d5029c(param_1);
        FUN_00daa148(fVar13,auStack_928,uVar1,uVar6,1,2,auStack_a18,*(undefined8 *)(lVar9 + 8),0,1);
        FUN_00910c08(auStack_928);
        fVar15 = local_9e8 - local_9f8;
        fVar17 = local_9e0 - local_9f0;
        fVar14 = fVar15 * fVar15 + (fStack_9e4 - fStack_9f4) * (fStack_9e4 - fStack_9f4) +
                 fVar17 * fVar17;
        fVar12 = (float)DAT_03218f68;
        fVar13 = DAT_03218f70;
        if (1e-08 <= fVar14) {
          fVar13 = SQRT(fVar14);
          if (NAN(fVar13)) {
            fVar13 = sqrtf(fVar14);
          }
          fVar12 = fVar15 / fVar13;
          fVar13 = fVar17 / fVar13;
        }
        FUN_00d55794(lVar10,&local_a28,0);
        fVar15 = (local_a28 - local_9f8) * (local_a28 - local_9f8) +
                 (local_a24 - fStack_9f4) * (local_a24 - fStack_9f4) +
                 (local_a20 - local_9f0) * (local_a20 - local_9f0);
        fVar14 = SQRT(fVar15);
        if (NAN(fVar14)) {
          fVar14 = sqrtf(fVar15);
        }
        puVar3 = PTR_s_Buff_Kestrel_C_ClientImpact_02bf0a58;
        local_a28 = local_9f8 + fVar12 * fVar14;
        local_a20 = fVar13 * fVar14 + local_9f0;
        local_a24 = 1.2;
        uVar1 = *(undefined4 *)(lVar8 + 0x260);
        uVar6 = *(undefined4 *)(lVar10 + 0x260);
        uVar5 = FUN_00ceb350();
        FUN_00cfe864(0x3f800000,local_a28,local_a20,auStack_980,uVar1,uVar6,puVar3,uVar5,1,0,0);
        FUN_00ce20fc(auStack_980);
        puVar3 = PTR_s_Buff_Kestrel_C_ClientImpactTarge_02bf0a60;
        uVar1 = *(undefined4 *)(lVar8 + 0x260);
        uVar6 = *(undefined4 *)(lVar10 + 0x260);
        uVar5 = FUN_00ceb350();
        FUN_00cfe864(0x3f800000,local_a28,local_a20,auStack_9d8,uVar1,uVar6,puVar3,uVar5,1,1,0);
        FUN_00ce20fc(auStack_9d8);
        uVar7 = uVar7 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dcd9f0(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Kestrel_Reloading_02bf0a10);
  FUN_00cf9eec(auStack_58);
  FUN_00cfa6cc(auStack_58);
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfaa74(auStack_58);
  uVar2 = FUN_00cf32cc(0xbf800000,uVar3,"Effect_Kestrel_C_Charging",1,0,1,1,0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x270));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Kestrel_Ability_C_Activate",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f4ccccd,uVar3,"Effect_Kestrel_C_Aiming",1,0,1,0,0);
  FUN_00cf34dc(uVar3,FUN_00dcce24);
  FUN_00cf34e4(uVar3,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00dcddc4);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_58);
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Kestrel_Stealth_02bf0a50);
  uVar3 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar3,PTR_s_Buff_GloballyVisible_02bebad8,FUN_00dccf28,1,0);
  FUN_00cf9eec(auStack_58);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x270));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Kestrel_Ability_C_Rampup",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f4ccccd,uVar3,"Effect_Kestrel_C_Warning",1,0,0,0,"Effect_Kestrel_C_Warning_Ally");
  FUN_00cf34dc(uVar3,FUN_00dcce24);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00dccf8c);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x270));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Kestrel_Ability_C_Fire",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar3,"Effect_Kestrel_C_Shot_Burst",0,0,1,0,0);
  lVar4 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kestrel_Talent_PiercingShot_02bf1f18;
  uVar3 = FUN_00cf9cf4(lVar4 + 200);
  FUN_00cf2e48(uVar3,FUN_00dccfb4);
  uVar3 = FUN_00cf9cf4(lVar4 + 0xb0);
  FUN_00cf2e48(uVar3,FUN_00dcd47c);
  uVar3 = FUN_00cfb29c(auStack_58);
  FUN_00cf3f74(uVar3,uVar2,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00dccfa0);
  FUN_00cf7578(uVar3,0);
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar3,FUN_00dcc16c);
  FUN_00cf2e50();
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcddc4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




float FUN_00dcddd8(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,0);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d53a18(lVar2,0);
    fVar4 = (float)FUN_00d5a3d0(param_1,DAT_0320e840,1,9);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




float FUN_00dcde6c(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,1);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d53a18(lVar2,1);
    fVar4 = (float)FUN_00d5a3d0(param_1,DAT_0320e840,2,9);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




float FUN_00dcdf00(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d535a4(lVar2,2);
  if (iVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_00d53a18(lVar2,2);
    fVar4 = (float)FUN_00d5a3d0(param_1,DAT_0320e840,3,9);
    fVar3 = -(fVar3 * fVar4);
  }
  return fVar3;
}




void FUN_00dcdf94(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_00d5048c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  bVar1 = FUN_00d6bbac(lVar2,DAT_031ba1e8,0);
  *param_2 = bVar1 & 1;
  return;
}




void FUN_00dcdff8(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_00d5048c();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  bVar1 = FUN_00d6bbac(lVar2,DAT_031ba1e8,0);
  *param_2 = ~bVar1 & 1;
  return;
}

