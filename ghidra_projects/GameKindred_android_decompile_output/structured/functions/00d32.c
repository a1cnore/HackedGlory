// functions/00d32 — 6 functions
#include "libGameKindred.h"




void FUN_00d32484(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  code *local_90;
  undefined4 local_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_CrystalInfusion__02beb068);
  fVar5 = (float)FUN_00d08524(uVar2,2,1);
  fVar6 = (float)FUN_00d08524(uVar2,1,1);
  fVar12 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,4,1);
  fVar6 = (float)FUN_00d08524(uVar2,3,1);
  fVar11 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,6,1);
  fVar6 = (float)FUN_00d08524(uVar2,5,1);
  fVar10 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,8,1);
  fVar6 = (float)FUN_00d08524(uVar2,7,1);
  fVar9 = (fVar5 - fVar6) / 11.0;
  fVar5 = (float)FUN_00d08524(uVar2,1,1);
  fVar5 = fVar5 - fVar12;
  fVar6 = (float)FUN_00d08524(uVar2,3,1);
  fVar6 = fVar6 - fVar11;
  fVar7 = (float)FUN_00d08524(uVar2,5,1);
  fVar7 = fVar7 - fVar10;
  fVar8 = (float)FUN_00d08524(uVar2,7,1);
  fVar8 = fVar8 - fVar9;
  lVar3 = FUN_00d64080(param_1);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_90 = FUN_00d31ed8;
  local_88 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_90);
  uVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(&local_90,uVar2);
  uVar2 = FUN_00d47c14(uVar2);
  FUN_00da2040(uVar2,"Effect_Crisis_Crystal");
  uVar2 = FUN_00da2058(0x40400000);
  FUN_00da2070(uVar2,1);
  FUN_00da20b8(0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar5,uVar2,5,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar6,uVar2,0x19,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar7,uVar2,7,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(fVar8,uVar2,8,1,0,0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,lVar3 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d294ac();
  FUN_00d42654(&local_90,uVar2);
  uVar2 = FUN_00d47dec(uVar2,"Bone_CenterMass");
  FUN_00da2040(uVar2,"Effect_Crisis_Crystal_Con");
  FUN_00da20b8(0);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar12,uVar2,5,1);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar11,uVar2,0x19,1);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar10,uVar2,7,1);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40e24(fVar9,uVar2,8,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2965c();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(&local_90,uVar2);
  uVar2 = FUN_00d47c14(uVar2);
  FUN_00da2040(uVar2,"Effect_Crisis_Crystal");
  uVar2 = FUN_00da2058(0x40400000);
  FUN_00da2070(uVar2,1);
  FUN_00da20b8(0);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_90,lVar3 + 0x18);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar5,uVar2,5,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar6,uVar2,0x19,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar7,uVar2,7,1,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(&local_90,uVar2);
  FUN_00d40cd4(-fVar8,uVar2,8,1,0,0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d329c0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *__s1;
  long lVar8;
  uint uVar9;
  int local_188 [2];
  int local_180 [2];
  undefined8 local_178;
  undefined1 auStack_170 [96];
  long local_110 [20];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_178);
    FUN_00d66d28(local_178);
    FUN_00d5cf60();
    uVar6 = FUN_00d9e390();
    uVar7 = FUN_00d66d28(local_178);
    FUN_00d4d9e8(auStack_170);
    FUN_00d4db40(auStack_170,uVar6);
    FUN_00d4daf4(auStack_170,1,1,1,0);
    FUN_00d55794(uVar7,local_110,0);
    FUN_00d4db48(0x41200000,auStack_170,local_110);
    FUN_00d4dabc(auStack_170,0x40000);
    uVar2 = FUN_00d9e840(auStack_170,local_110,0x14,0);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar6 = FUN_00d5baf8(local_110[uVar5]);
        thunk_FUN_00d9ff34(local_180,uVar6);
        iVar3 = local_180[0];
        thunk_FUN_00d9ff34(local_188,"Idle");
        if (iVar3 == local_188[0]) {
          lVar8 = *(long *)(local_110[uVar5] + 0x18);
          while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02e3ef78))) {
            lVar8 = *(long *)(lVar8 + 0x20);
          }
          iVar3 = FUN_00d5359c(lVar8);
          if (iVar3 != 0) {
            uVar9 = 0;
            do {
              __s1 = (char *)FUN_00d53920(lVar8,uVar9);
              iVar3 = strcmp(__s1,"Emote_Dance");
              if (iVar3 == 0) {
                FUN_008ff6e4(local_110[uVar5],uVar9);
                break;
              }
              uVar9 = uVar9 + 1;
              uVar4 = FUN_00d5359c(lVar8);
            } while (uVar9 < uVar4);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d32b9c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d32c00(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  float *pfVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined8 local_178;
  undefined1 auStack_170 [96];
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [128];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_178);
  lVar6 = FUN_00d66d28(local_178);
  uVar3 = FUN_00e6a474("bArmed");
  uVar3 = FUN_0091ed5c("bArmed",uVar3,0x12345678);
  pcVar7 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  uVar3 = FUN_00e6a474("spawnTime");
  uVar3 = FUN_0091ed5c("spawnTime",uVar3,0x12345678);
  pfVar8 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  fVar13 = (float)FUN_009bc24c();
  fVar15 = *pfVar8;
  uVar9 = FUN_00d6eb50();
  uVar9 = FUN_00d6eb5c(uVar9,PTR_s__Item_ScoutTrap__02beb108);
  fVar14 = (float)FUN_00d08524(uVar9,3,1);
  if ((fVar13 - fVar15 < fVar14) || (*pcVar7 == '\0')) {
    uVar3 = FUN_00e6a474("bDecloaked");
    uVar3 = FUN_0091ed5c("bDecloaked",uVar3,0x12345678);
    pcVar11 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    FUN_00d4d9e8(auStack_e8);
    FUN_00d4db40(auStack_e8,lVar6);
    FUN_00d4dca4(auStack_e8,"FlareGun",0);
    FUN_00d4daf4(auStack_e8,0,1,0,0);
    FUN_00d55794(lVar6,auStack_170,0);
    uVar3 = FUN_00e6a474("flareVisionRange");
    uVar3 = FUN_0091ed5c("flareVisionRange",uVar3,0x12345678);
    puVar12 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    FUN_00d4db48(*puVar12,auStack_e8,auStack_170);
    iVar4 = FUN_00d9e840(auStack_e8,auStack_110,1,0);
    if (iVar4 != 0) {
      *pcVar11 = '\x01';
    }
    fVar14 = (float)FUN_00d08524(uVar9,3,1);
    if (fVar14 <= fVar13 - fVar15) {
      *pcVar7 = '\x01';
      puVar2 = PTR_s_Buff_Stealth_02bebaf0;
      if (*pcVar11 != '\x01') {
        uVar3 = *(undefined4 *)(lVar6 + 0x260);
        uVar5 = FUN_00ceb350();
        FUN_00cfe864(0xbf800000,0,0,auStack_170,uVar3,uVar3,puVar2,uVar5,1,0,0);
        FUN_00ce20fc(auStack_170);
      }
      FUN_00d67b04(0x3e4ccccd,local_178);
    }
  }
  else {
    FUN_00d4d9e8(auStack_170);
    FUN_00d55794(lVar6,auStack_188,0);
    FUN_00d4db40(auStack_170,lVar6);
    FUN_00d4daf4(auStack_170,0,1,0,0);
    FUN_00d4dabc(auStack_170,1);
    FUN_00d08524(uVar9,4,1);
    FUN_00d4db48(auStack_170,auStack_188);
    FUN_00d4dd44(auStack_170,1);
    FUN_00ceace8();
    uVar10 = FUN_00ceaf8c();
    if ((uVar10 & 1) != 0) {
      FUN_00d4dabc(auStack_170,0x40000);
    }
    iVar4 = FUN_00d9e840(auStack_170,auStack_e8,0x10,0);
    if (iVar4 != 0) {
      FUN_00d55794(lVar6,auStack_198,0);
      uVar3 = *(undefined4 *)(lVar6 + 0x260);
      uVar5 = FUN_00d66d34(local_178);
      FUN_00d009d0(auStack_110,uVar3,uVar5);
      FUN_00ce20fc(auStack_110);
      FUN_008ff6f4(lVar6,0,auStack_198);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d32f9c(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,PTR_s__Item_ScoutTrap__02beb108);
  uVar2 = FUN_00d08524(uVar1,3,1);
  *param_2 = uVar2;
  return;
}




void FUN_00d32fdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,PTR_s__Item_ScoutTrap__02beb108);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d08524(uVar1,8,1);
  FUN_00d5b68c(uVar2,0x11,0,0xffffffff);
  return;
}

