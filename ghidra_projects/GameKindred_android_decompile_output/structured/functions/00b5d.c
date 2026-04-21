// functions/00b5d — 11 functions
#include "libGameKindred.h"




void thunk_FUN_00b5d9a0(long param_1)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  ulong uStack_70;
  void *pvStack_68;
  void *pvStack_60;
  long lStack_58;
  
  lVar6 = tpidr_el0;
  lStack_58 = *(long *)(lVar6 + 0x28);
  lVar1 = param_1 + 0xb110;
  FUN_00ac9cd0(lVar1);
  piVar9 = (int *)FUN_00cead68();
  uVar10 = FUN_00ceae78();
  if ((uVar10 & 1) == 0) {
    bVar7 = FUN_00ceaf14(piVar9);
    bVar7 = bVar7 & 1;
  }
  else {
    bVar7 = 1;
  }
  *(byte *)(param_1 + 0x2cf9b) = bVar7;
  piVar2 = (int *)(param_1 + 0x2cfc8);
  *(bool *)(param_1 + 0x2cf9c) = *piVar9 == 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  puVar16 = *(undefined8 **)(piVar9 + 10);
  puVar3 = (uint *)(param_1 + 0x2cfcc);
  piVar17 = (int *)*puVar16;
  if (piVar17 != (int *)0x0) {
    piVar15 = (int *)(param_1 + 0x2cfd0);
    do {
      puVar16 = puVar16 + 1;
      iVar5 = *piVar17;
      *piVar15 = iVar5;
      *puVar3 = *puVar3 + iVar5;
      *piVar2 = *piVar2 + 1;
      if (bVar7 != 0) break;
      piVar17 = (int *)*puVar16;
      piVar15 = piVar15 + 1;
    } while (piVar17 != (int *)0x0);
  }
  FUN_00b60784(param_1);
  uVar10 = FUN_00ceae78(piVar9);
  if ((((uVar10 & 1) == 0) && (uVar10 = FUN_00ceaf14(piVar9), (uVar10 & 1) == 0)) ||
     (*(uint *)(param_1 + 0x2cf88) <= *puVar3)) {
    pbVar4 = (byte *)(param_1 + 0x2cf98);
    if (*pbVar4 == 0) {
      uVar10 = FUN_0093dbe8();
      if ((uVar10 & 1) == 0) {
        FUN_00ceae10(&uStack_70,piVar9);
        FUN_00f0d75c(param_1 + 0x84c0,&uStack_70);
        if (pvStack_68 != (void *)0x0) {
          operator_delete__(pvStack_68);
          uStack_70 = 0;
          pvStack_68 = (void *)0x0;
        }
      }
      FUN_00f0db64(*(undefined4 *)(param_1 + 0x2d028),0,0x3f800000,param_1 + 0x84c0);
      FUN_00b61524(param_1);
    }
    else {
      if (*(byte *)(param_1 + 0x2cf9b) == 0) {
        FUN_00b63a74(param_1);
        lVar14 = FUN_009580b8();
        if (*(int *)(lVar14 + 0x55dc) == 2) {
          uVar11 = FUN_009580b8();
          FUN_009606dc(uVar11,1);
        }
      }
      else {
        puVar3 = (uint *)(param_1 + 0x105e4);
        uVar8 = *puVar3;
        if ((uVar8 & 0x7f80) != 0) {
          *puVar3 = uVar8 & 0xffff807f;
          FUN_0091ada4(param_1 + 0x10560);
          uVar8 = *puVar3;
        }
        *puVar3 = uVar8 | 4;
        FUN_00f01980(param_1 + 0x10560);
      }
      FUN_00ceade0(&uStack_70,piVar9);
      FUN_00ab7498(param_1 + 0x10808,&uStack_70);
      if (pvStack_68 != (void *)0x0) {
        operator_delete__(pvStack_68);
        uStack_70 = 0;
        pvStack_68 = (void *)0x0;
      }
    }
    lVar14 = FUN_009580b8();
    if (*(char *)(lVar14 + 0x568a) != '\0') {
      uVar11 = FUN_00ceadd0(piVar9);
      FUN_008fa54c(&uStack_70,uVar11);
      lVar14 = FUN_009fece0();
      FUN_00b63be8(lVar14 + 0x60,&uStack_70);
      if ((uStack_70 & 1) != 0) {
        operator_delete(pvStack_60);
      }
    }
    uVar10 = FUN_00ceaf14(piVar9);
    uVar8 = FUN_00b5d95c(param_1);
    FUN_00ed04d8(param_1 + 0x7f88,0,uVar8 & 1);
    if (*(float *)(param_1 + 0x7fcc) != 0.0) {
      *(float *)(param_1 + 0x7fcc) = 0.0;
      FUN_0091ada4(param_1 + 0x7f88);
    }
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb | (uint)*pbVar4 << 2;
      uVar8 = ((uint)*pbVar4 << 2 ^ 4) & 0xfc;
    }
    *(uint *)(param_1 + 0x8674) = *(uint *)(param_1 + 0x8674) & 0xfffffffb | uVar8;
    FUN_00b5acf8(param_1);
    if (*pbVar4 != 0) {
      uVar11 = FUN_009580b8();
      iVar5 = *piVar9;
      if ((*(byte *)(param_1 + 0xdacc) >> 2 & 1) == 0) {
        puVar18 = &DAT_0320ffa8;
      }
      else {
        puVar18 = (undefined1 *)FUN_00ac9cd0(param_1 + 0xda48);
      }
      lVar14 = FUN_009fece0();
      FUN_00960f28(uVar11,iVar5,puVar18,lVar14 + 0x88);
    }
    uVar11 = FUN_00ac9cd0(lVar1);
    FUN_008fce60(param_1 + 0x2cfb0,uVar11);
    uVar11 = FUN_009fece0();
    FUN_00a000f0(uVar11,*(undefined4 *)(param_1 + 0x2cfd0));
  }
  else {
    uVar11 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar12 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar13 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar11,uVar12,uVar13,0,0);
    FUN_00ac9b64(lVar1,param_1 + 0x2cfb0,0,0);
  }
  if (*(long *)(lVar6 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b5d9a0(long param_1)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  ulong uStack_70;
  void *pvStack_68;
  void *pvStack_60;
  long lStack_58;
  
  lVar6 = tpidr_el0;
  lStack_58 = *(long *)(lVar6 + 0x28);
  lVar1 = param_1 + 0xb110;
  FUN_00ac9cd0(lVar1);
  piVar9 = (int *)FUN_00cead68();
  uVar10 = FUN_00ceae78();
  if ((uVar10 & 1) == 0) {
    bVar7 = FUN_00ceaf14(piVar9);
    bVar7 = bVar7 & 1;
  }
  else {
    bVar7 = 1;
  }
  *(byte *)(param_1 + 0x2cf9b) = bVar7;
  piVar2 = (int *)(param_1 + 0x2cfc8);
  *(bool *)(param_1 + 0x2cf9c) = *piVar9 == 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  puVar16 = *(undefined8 **)(piVar9 + 10);
  puVar3 = (uint *)(param_1 + 0x2cfcc);
  piVar17 = (int *)*puVar16;
  if (piVar17 != (int *)0x0) {
    piVar15 = (int *)(param_1 + 0x2cfd0);
    do {
      puVar16 = puVar16 + 1;
      iVar5 = *piVar17;
      *piVar15 = iVar5;
      *puVar3 = *puVar3 + iVar5;
      *piVar2 = *piVar2 + 1;
      if (bVar7 != 0) break;
      piVar17 = (int *)*puVar16;
      piVar15 = piVar15 + 1;
    } while (piVar17 != (int *)0x0);
  }
  FUN_00b60784(param_1);
  uVar10 = FUN_00ceae78(piVar9);
  if ((((uVar10 & 1) == 0) && (uVar10 = FUN_00ceaf14(piVar9), (uVar10 & 1) == 0)) ||
     (*(uint *)(param_1 + 0x2cf88) <= *puVar3)) {
    pbVar4 = (byte *)(param_1 + 0x2cf98);
    if (*pbVar4 == 0) {
      uVar10 = FUN_0093dbe8();
      if ((uVar10 & 1) == 0) {
        FUN_00ceae10(&uStack_70,piVar9);
        FUN_00f0d75c(param_1 + 0x84c0,&uStack_70);
        if (pvStack_68 != (void *)0x0) {
          operator_delete__(pvStack_68);
          uStack_70 = 0;
          pvStack_68 = (void *)0x0;
        }
      }
      FUN_00f0db64(*(undefined4 *)(param_1 + 0x2d028),0,0x3f800000,param_1 + 0x84c0);
      FUN_00b61524(param_1);
    }
    else {
      if (*(byte *)(param_1 + 0x2cf9b) == 0) {
        FUN_00b63a74(param_1);
        lVar14 = FUN_009580b8();
        if (*(int *)(lVar14 + 0x55dc) == 2) {
          uVar11 = FUN_009580b8();
          FUN_009606dc(uVar11,1);
        }
      }
      else {
        puVar3 = (uint *)(param_1 + 0x105e4);
        uVar8 = *puVar3;
        if ((uVar8 & 0x7f80) != 0) {
          *puVar3 = uVar8 & 0xffff807f;
          FUN_0091ada4(param_1 + 0x10560);
          uVar8 = *puVar3;
        }
        *puVar3 = uVar8 | 4;
        FUN_00f01980(param_1 + 0x10560);
      }
      FUN_00ceade0(&uStack_70,piVar9);
      FUN_00ab7498(param_1 + 0x10808,&uStack_70);
      if (pvStack_68 != (void *)0x0) {
        operator_delete__(pvStack_68);
        uStack_70 = 0;
        pvStack_68 = (void *)0x0;
      }
    }
    lVar14 = FUN_009580b8();
    if (*(char *)(lVar14 + 0x568a) != '\0') {
      uVar11 = FUN_00ceadd0(piVar9);
      FUN_008fa54c(&uStack_70,uVar11);
      lVar14 = FUN_009fece0();
      FUN_00b63be8(lVar14 + 0x60,&uStack_70);
      if ((uStack_70 & 1) != 0) {
        operator_delete(pvStack_60);
      }
    }
    uVar10 = FUN_00ceaf14(piVar9);
    uVar8 = FUN_00b5d95c(param_1);
    FUN_00ed04d8(param_1 + 0x7f88,0,uVar8 & 1);
    if (*(float *)(param_1 + 0x7fcc) != 0.0) {
      *(float *)(param_1 + 0x7fcc) = 0.0;
      FUN_0091ada4(param_1 + 0x7f88);
    }
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb | (uint)*pbVar4 << 2;
      uVar8 = ((uint)*pbVar4 << 2 ^ 4) & 0xfc;
    }
    *(uint *)(param_1 + 0x8674) = *(uint *)(param_1 + 0x8674) & 0xfffffffb | uVar8;
    FUN_00b5acf8(param_1);
    if (*pbVar4 != 0) {
      uVar11 = FUN_009580b8();
      iVar5 = *piVar9;
      if ((*(byte *)(param_1 + 0xdacc) >> 2 & 1) == 0) {
        puVar18 = &DAT_0320ffa8;
      }
      else {
        puVar18 = (undefined1 *)FUN_00ac9cd0(param_1 + 0xda48);
      }
      lVar14 = FUN_009fece0();
      FUN_00960f28(uVar11,iVar5,puVar18,lVar14 + 0x88);
    }
    uVar11 = FUN_00ac9cd0(lVar1);
    FUN_008fce60(param_1 + 0x2cfb0,uVar11);
    uVar11 = FUN_009fece0();
    FUN_00a000f0(uVar11,*(undefined4 *)(param_1 + 0x2cfd0));
  }
  else {
    uVar11 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar12 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar13 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar11,uVar12,uVar13,0,0);
    FUN_00ac9b64(lVar1,param_1 + 0x2cfb0,0,0);
  }
  if (*(long *)(lVar6 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5d348(long param_1)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x2cf9d) == '\0') goto LAB_00b5d6f0;
  if (*(long *)(param_1 + 0x255b8) == 0) {
    uVar5 = FUN_019807a4();
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_019806b8(0);
      if ((uVar5 & 1) != 0) goto LAB_00b5d3dc;
    }
    else {
      iVar4 = FUN_019807b8();
      if (iVar4 != 0) {
        puVar6 = (uint *)FUN_019807cc(0);
        if ((0xf < (int)*puVar6) && ((*puVar6 & 1) != 0)) goto LAB_00b5d3dc;
      }
    }
    FUN_00b5f024(param_1);
  }
LAB_00b5d3dc:
  if (*(char *)(param_1 + 0x2cf9d) == '\0') goto LAB_00b5d6f0;
  local_68 = 0;
  uVar5 = FUN_019807a4();
  if ((uVar5 & 1) == 0) {
    FUN_01980738((long)&local_68 + 4,&local_68,0,0);
  }
  else {
    iVar4 = FUN_019807b8();
    if (iVar4 == 0) {
      FUN_00b5f024(param_1);
      goto LAB_00b5d6f0;
    }
    lVar7 = FUN_019807cc(0);
    local_68 = CONCAT44(*(undefined4 *)(lVar7 + 4),*(undefined4 *)(lVar7 + 8));
  }
  lVar7 = FUN_00965ecc(param_1 + 0x7a40);
  fVar11 = *(float *)(lVar7 + 0x10);
  fVar12 = *(float *)(lVar7 + 0x14);
  pfVar8 = (float *)FUN_00965ecc(param_1 + 0x7a40);
  fVar12 = ((float)local_68 - pfVar8[1]) / fVar12;
  fVar11 = (local_68._4_4_ - *pfVar8) / fVar11;
  fVar9 = fVar12;
  if (*(char *)(param_1 + 0x2cfa6) == '\0') {
    *(char *)(param_1 + 0x2cfa6) = '\x01';
    fVar10 = *(float *)(param_1 + 0x135e8) + *(float *)(param_1 + 0x2d038);
    fVar9 = fVar10 + 30.0;
    if (fVar11 <= fVar10) {
      fVar9 = *(float *)(param_1 + 0x135e8);
    }
    fVar9 = fVar11 - fVar9;
    *(float *)(param_1 + 0x2d03c) = fVar9;
  }
  pcVar1 = (char *)(param_1 + 0x2cfa4);
  if (*pcVar1 == '\0') {
    local_68 = CONCAT44(*(undefined4 *)(param_1 + 0x135e8),fVar12);
  }
  else {
    fVar11 = fVar11 - *(float *)(param_1 + 0x2d03c);
    local_68 = CONCAT44(fVar11,fVar12);
    fVar9 = *(float *)(param_1 + 0x135e8);
    if ((fVar11 < fVar9) || (fVar9 = fVar9 + *(float *)(param_1 + 0x2d038) + 30.0, fVar9 < fVar11))
    {
      local_68 = CONCAT44(fVar9,fVar12);
    }
  }
  uVar5 = FUN_00b5d95c(param_1);
  if ((uVar5 & 1) == 0) {
LAB_00b5d60c:
    fVar12 = *(float *)(param_1 + 0x135ec);
    fVar11 = fVar12 + -30.0;
    fVar10 = (float)local_68;
    if (*pcVar1 != '\0') goto LAB_00b5d62c;
    fVar12 = fVar12 + *(float *)(param_1 + 0x1e30c);
  }
  else {
    if (*pcVar1 == '\0') {
      fVar11 = *(float *)(param_1 + 0x135ec);
      pfVar8 = (float *)(param_1 + 0x7fcc);
      fVar9 = *pfVar8;
      if (fVar11 + -30.0 <= (float)local_68) {
        fVar11 = fVar11 + *(float *)(param_1 + 0x1e30c);
        if (fVar11 < (float)local_68) {
          fVar12 = -10.0;
          goto LAB_00b5d5c0;
        }
      }
      else {
        fVar12 = 10.0;
LAB_00b5d5c0:
        fVar9 = fVar9 + fVar12;
      }
      FUN_00ed0464(param_1 + 0x7f88);
      fVar10 = fVar11;
      FUN_00f13e54(param_1 + 0x7de8);
      fVar9 = (float)NEON_fminnm(fVar9,0);
      fVar12 = -(fVar11 - fVar10);
      if (-(fVar11 - fVar10) <= fVar9) {
        fVar12 = fVar9;
      }
      if (*pfVar8 != fVar12) {
        *pfVar8 = fVar12;
        FUN_0091ada4(param_1 + 0x7f88);
      }
      goto LAB_00b5d60c;
    }
    fVar12 = *(float *)(param_1 + 0x135ec);
    fVar11 = fVar12 + -30.0;
    fVar10 = (float)local_68;
LAB_00b5d62c:
    FUN_00f13e54(param_1 + 0x7de8);
    fVar12 = fVar12 + fVar9;
  }
  fVar9 = fVar12 + 40.0 + -4.0;
  if (fVar9 <= fVar10) {
    fVar10 = fVar9;
  }
  if (fVar11 <= fVar10) {
    fVar11 = fVar10;
  }
  local_68 = CONCAT44(local_68._4_4_,fVar11);
  plVar2 = (long *)(param_1 + 0x24290);
  if ((*(float *)(param_1 + 0x242d0) != local_68._4_4_) || (*(float *)(param_1 + 0x242d4) != fVar11)
     ) {
    *(float *)(param_1 + 0x242d0) = local_68._4_4_;
    *(float *)(param_1 + 0x242d4) = fVar11;
    FUN_0091ada4(plVar2);
  }
  local_60 = NEON_fmov(0x3f800000,4);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
LAB_00b5d6f0:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5d724(undefined8 param_1)

{
  FUN_00a9f7e0();
  FUN_00b5acf8(param_1);
  return;
}




void FUN_00b5d748(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_2 & 1) != 0) {
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    *(undefined8 *)(param_1 + 0x2d020) = 0;
    *(undefined8 *)(param_1 + 0x2d018) = 0;
    uVar5 = FUN_0093dbe8();
    plVar1 = (long *)(param_1 + 0x2d010);
    if ((uVar5 & 1) == 0) {
      FUN_00b5cb68(param_1,*(undefined8 *)(*plVar1 + 0x10),&local_58,&local_68);
    }
    FUN_00b5cb68(param_1,*(undefined8 *)(*plVar1 + 8),&local_58,&local_68);
    FUN_00b5cb68(param_1,*(undefined8 *)*plVar1,&local_58,&local_68);
    lVar2 = param_1 + 0xb110;
    *(undefined1 *)(param_1 + 0xda40) = *(undefined1 *)(param_1 + 0x2cfa4);
    uVar5 = FUN_0093dbe8();
    if ((uVar5 & 1) == 0) {
      FUN_00aca97c(lVar2,0,*(undefined4 *)(param_1 + 0x2d01c));
    }
    uVar4 = FUN_0093dbe8();
    FUN_00aca97c(lVar2,~uVar4 & 1,*(undefined4 *)(param_1 + 0x2d020));
    uVar5 = FUN_0093dbe8();
    uVar6 = 1;
    if ((uVar5 & 1) == 0) {
      uVar6 = 2;
    }
    FUN_00aca97c(lVar2,uVar6,*(undefined4 *)(param_1 + 0x2d024));
    FUN_00ac876c(*(undefined4 *)(param_1 + 0x2d028),*(undefined4 *)(param_1 + 0x2d028),0,0x3f800000,
                 0x3f8ccccd,lVar2,&local_58,&local_68,1,1,1);
    FUN_00ac9b64(lVar2,param_1 + 0x2cfb0,1,0);
    uVar4 = FUN_00b5d95c(param_1);
    FUN_00ed04d8(param_1 + 0x7f88,0,uVar4 & 1);
    FUN_00b5d9a0(param_1);
    uVar5 = FUN_0092e920();
    if ((uVar5 & 1) != 0) {
      FUN_00bf1c44(param_1 + 0x2c70);
    }
    FUN_00951534(&local_68,1);
    FUN_0090eb54(&local_58,1);
  }
  FUN_00a9f604(param_1,param_2 & 1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00b5d95c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d800();
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    FUN_00ac9cd0(param_1 + 0xb110);
    FUN_00cead68();
    uVar1 = FUN_00ceae78();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}




void FUN_00b5d9a0(long param_1)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  ulong local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar1 = param_1 + 0xb110;
  FUN_00ac9cd0(lVar1);
  piVar9 = (int *)FUN_00cead68();
  uVar10 = FUN_00ceae78();
  if ((uVar10 & 1) == 0) {
    bVar7 = FUN_00ceaf14(piVar9);
    bVar7 = bVar7 & 1;
  }
  else {
    bVar7 = 1;
  }
  *(byte *)(param_1 + 0x2cf9b) = bVar7;
  piVar2 = (int *)(param_1 + 0x2cfc8);
  *(bool *)(param_1 + 0x2cf9c) = *piVar9 == 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  puVar16 = *(undefined8 **)(piVar9 + 10);
  puVar3 = (uint *)(param_1 + 0x2cfcc);
  piVar17 = (int *)*puVar16;
  if (piVar17 != (int *)0x0) {
    piVar15 = (int *)(param_1 + 0x2cfd0);
    do {
      puVar16 = puVar16 + 1;
      iVar5 = *piVar17;
      *piVar15 = iVar5;
      *puVar3 = *puVar3 + iVar5;
      *piVar2 = *piVar2 + 1;
      if (bVar7 != 0) break;
      piVar17 = (int *)*puVar16;
      piVar15 = piVar15 + 1;
    } while (piVar17 != (int *)0x0);
  }
  FUN_00b60784(param_1);
  uVar10 = FUN_00ceae78(piVar9);
  if ((((uVar10 & 1) == 0) && (uVar10 = FUN_00ceaf14(piVar9), (uVar10 & 1) == 0)) ||
     (*(uint *)(param_1 + 0x2cf88) <= *puVar3)) {
    pbVar4 = (byte *)(param_1 + 0x2cf98);
    if (*pbVar4 == 0) {
      uVar10 = FUN_0093dbe8();
      if ((uVar10 & 1) == 0) {
        FUN_00ceae10(&local_70,piVar9);
        FUN_00f0d75c(param_1 + 0x84c0,&local_70);
        if (local_68 != (void *)0x0) {
          operator_delete__(local_68);
          local_70 = 0;
          local_68 = (void *)0x0;
        }
      }
      FUN_00f0db64(*(undefined4 *)(param_1 + 0x2d028),0,0x3f800000,param_1 + 0x84c0);
      FUN_00b61524(param_1);
    }
    else {
      if (*(byte *)(param_1 + 0x2cf9b) == 0) {
        FUN_00b63a74(param_1);
        lVar14 = FUN_009580b8();
        if (*(int *)(lVar14 + 0x55dc) == 2) {
          uVar11 = FUN_009580b8();
          FUN_009606dc(uVar11,1);
        }
      }
      else {
        puVar3 = (uint *)(param_1 + 0x105e4);
        uVar8 = *puVar3;
        if ((uVar8 & 0x7f80) != 0) {
          *puVar3 = uVar8 & 0xffff807f;
          FUN_0091ada4(param_1 + 0x10560);
          uVar8 = *puVar3;
        }
        *puVar3 = uVar8 | 4;
        FUN_00f01980(param_1 + 0x10560);
      }
      FUN_00ceade0(&local_70,piVar9);
      FUN_00ab7498(param_1 + 0x10808,&local_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
        local_70 = 0;
        local_68 = (void *)0x0;
      }
    }
    lVar14 = FUN_009580b8();
    if (*(char *)(lVar14 + 0x568a) != '\0') {
      uVar11 = FUN_00ceadd0(piVar9);
      FUN_008fa54c(&local_70,uVar11);
      lVar14 = FUN_009fece0();
      FUN_00b63be8(lVar14 + 0x60,&local_70);
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
    uVar10 = FUN_00ceaf14(piVar9);
    uVar8 = FUN_00b5d95c(param_1);
    FUN_00ed04d8(param_1 + 0x7f88,0,uVar8 & 1);
    if (*(float *)(param_1 + 0x7fcc) != 0.0) {
      *(float *)(param_1 + 0x7fcc) = 0.0;
      FUN_0091ada4(param_1 + 0x7f88);
    }
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb | (uint)*pbVar4 << 2;
      uVar8 = ((uint)*pbVar4 << 2 ^ 4) & 0xfc;
    }
    *(uint *)(param_1 + 0x8674) = *(uint *)(param_1 + 0x8674) & 0xfffffffb | uVar8;
    FUN_00b5acf8(param_1);
    if (*pbVar4 != 0) {
      uVar11 = FUN_009580b8();
      iVar5 = *piVar9;
      if ((*(byte *)(param_1 + 0xdacc) >> 2 & 1) == 0) {
        puVar18 = &DAT_0320ffa8;
      }
      else {
        puVar18 = (undefined1 *)FUN_00ac9cd0(param_1 + 0xda48);
      }
      lVar14 = FUN_009fece0();
      FUN_00960f28(uVar11,iVar5,puVar18,lVar14 + 0x88);
    }
    uVar11 = FUN_00ac9cd0(lVar1);
    FUN_008fce60(param_1 + 0x2cfb0,uVar11);
    uVar11 = FUN_009fece0();
    FUN_00a000f0(uVar11,*(undefined4 *)(param_1 + 0x2cfd0));
  }
  else {
    uVar11 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar12 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar13 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar11,uVar12,uVar13,0,0);
    FUN_00ac9b64(lVar1,param_1 + 0x2cfb0,0,0);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5de08(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00a9f784(param_1,param_2 & 1);
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009580b8();
    if ((param_2 & 1) == 0) {
      FUN_00963a5c(uVar2,0);
      FUN_00915fac(0);
    }
    else {
      FUN_00963a5c(uVar2,1);
      lVar3 = FUN_009580b8();
      if (*(char *)(lVar3 + 0x568a) != '\0') {
        lVar3 = FUN_009580b8();
        FUN_009658c8(lVar3 + 0x278);
        FUN_00915fac(1);
      }
      FUN_00b09454(param_1 + 0x10808,1);
    }
    if (*(char *)(param_1 + 0x2cf9a) != '\0') {
      FUN_0099cf94(param_1 + 0x2cee0,0);
      return;
    }
  }
  return;
}




void FUN_00b5dec0(long param_1,byte *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar7 = FUN_009580b8();
  if ((*(int *)(lVar7 + 0x55dc) == 2) || (*(char *)(param_1 + 0x2cf98) == '\0')) goto LAB_00b5e160;
  bVar4 = *param_2;
  uVar10 = *(ulong *)(param_2 + 8);
  uVar11 = (ulong)(bVar4 >> 1);
  uVar1 = uVar11;
  if ((bVar4 & 1) != 0) {
    uVar1 = uVar10;
  }
  if (uVar1 == 6) {
    iVar6 = FUN_0090d610(param_2,0,0xffffffffffffffff,"casual",6);
    if (iVar6 != 0) {
      bVar4 = *param_2;
      uVar10 = *(ulong *)(param_2 + 8);
      uVar11 = (ulong)(bVar4 >> 1);
      goto LAB_00b5df60;
    }
  }
  else {
LAB_00b5df60:
    uVar1 = uVar11;
    if ((bVar4 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 6) {
      iVar6 = FUN_0090d610(param_2,0,0xffffffffffffffff,"ranked",6);
      if (iVar6 == 0) goto LAB_00b5dfd0;
      bVar4 = *param_2;
      uVar10 = *(ulong *)(param_2 + 8);
      uVar11 = (ulong)(bVar4 >> 1);
    }
    if ((bVar4 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 != 0xb) ||
       (iVar6 = FUN_0090d610(param_2,0,0xffffffffffffffff,"casual_aral",0xb), iVar6 != 0))
    goto LAB_00b5e160;
  }
LAB_00b5dfd0:
  uVar2 = *(uint *)(param_1 + 0xdacc);
  uVar3 = *(uint *)(param_1 + 0x8674);
  if (((uVar2 | uVar3) >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0xdacc) = uVar2 & 0xfffffffb;
    *(uint *)(param_1 + 0x8674) = uVar3 & 0xfffffffb;
    FUN_00b5acf8(param_1);
  }
  bVar4 = *param_2;
  uVar10 = *(ulong *)(param_2 + 8);
  uVar11 = (ulong)(bVar4 >> 1);
  uVar1 = uVar11;
  if ((bVar4 & 1) != 0) {
    uVar1 = uVar10;
  }
  if (uVar1 == 6) {
    iVar6 = FUN_0090d610(param_2,0,0xffffffffffffffff,"casual",6);
    if (iVar6 != 0) {
      bVar4 = *param_2;
      uVar10 = *(ulong *)(param_2 + 8);
      uVar11 = (ulong)(bVar4 >> 1);
      goto LAB_00b5e05c;
    }
    pcVar9 = "*GameMode_HF_Casual*";
LAB_00b5e0ec:
    FUN_008fa54c(local_50,pcVar9);
    FUN_00ac9b64(param_1 + 0xb110,local_50,0,0);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
LAB_00b5e05c:
    uVar1 = uVar11;
    if ((bVar4 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 6) {
      iVar6 = FUN_0090d610(param_2,0,0xffffffffffffffff,"ranked",6);
      if (iVar6 == 0) {
        pcVar9 = "*GameMode_HF_Ranked*";
        goto LAB_00b5e0ec;
      }
      bVar4 = *param_2;
      uVar10 = *(ulong *)(param_2 + 8);
      uVar11 = (ulong)(bVar4 >> 1);
    }
    if ((bVar4 & 1) != 0) {
      uVar11 = uVar10;
    }
    if ((uVar11 == 0xb) &&
       (iVar6 = FUN_0090d610(param_2,0,0xffffffffffffffff,"casual_aral",0xb), iVar6 == 0)) {
      pcVar9 = "*GameMode_Aral_Casual*";
      goto LAB_00b5e0ec;
    }
  }
  uVar8 = FUN_009580b8();
  pbVar12 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar12 = param_2 + 1;
  }
  FUN_008fa54c(local_50,pbVar12);
  FUN_00961014(uVar8,local_50,&DAT_0320ffa8);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00b5e160:
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00b5d9a0(long param_1)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  ulong uStack_70;
  void *pvStack_68;
  void *pvStack_60;
  long lStack_58;
  
  lVar6 = tpidr_el0;
  lStack_58 = *(long *)(lVar6 + 0x28);
  lVar1 = param_1 + 0xb110;
  FUN_00ac9cd0(lVar1);
  piVar9 = (int *)FUN_00cead68();
  uVar10 = FUN_00ceae78();
  if ((uVar10 & 1) == 0) {
    bVar7 = FUN_00ceaf14(piVar9);
    bVar7 = bVar7 & 1;
  }
  else {
    bVar7 = 1;
  }
  *(byte *)(param_1 + 0x2cf9b) = bVar7;
  piVar2 = (int *)(param_1 + 0x2cfc8);
  *(bool *)(param_1 + 0x2cf9c) = *piVar9 == 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  puVar16 = *(undefined8 **)(piVar9 + 10);
  puVar3 = (uint *)(param_1 + 0x2cfcc);
  piVar17 = (int *)*puVar16;
  if (piVar17 != (int *)0x0) {
    piVar15 = (int *)(param_1 + 0x2cfd0);
    do {
      puVar16 = puVar16 + 1;
      iVar5 = *piVar17;
      *piVar15 = iVar5;
      *puVar3 = *puVar3 + iVar5;
      *piVar2 = *piVar2 + 1;
      if (bVar7 != 0) break;
      piVar17 = (int *)*puVar16;
      piVar15 = piVar15 + 1;
    } while (piVar17 != (int *)0x0);
  }
  FUN_00b60784(param_1);
  uVar10 = FUN_00ceae78(piVar9);
  if ((((uVar10 & 1) == 0) && (uVar10 = FUN_00ceaf14(piVar9), (uVar10 & 1) == 0)) ||
     (*(uint *)(param_1 + 0x2cf88) <= *puVar3)) {
    pbVar4 = (byte *)(param_1 + 0x2cf98);
    if (*pbVar4 == 0) {
      uVar10 = FUN_0093dbe8();
      if ((uVar10 & 1) == 0) {
        FUN_00ceae10(&uStack_70,piVar9);
        FUN_00f0d75c(param_1 + 0x84c0,&uStack_70);
        if (pvStack_68 != (void *)0x0) {
          operator_delete__(pvStack_68);
          uStack_70 = 0;
          pvStack_68 = (void *)0x0;
        }
      }
      FUN_00f0db64(*(undefined4 *)(param_1 + 0x2d028),0,0x3f800000,param_1 + 0x84c0);
      FUN_00b61524(param_1);
    }
    else {
      if (*(byte *)(param_1 + 0x2cf9b) == 0) {
        FUN_00b63a74(param_1);
        lVar14 = FUN_009580b8();
        if (*(int *)(lVar14 + 0x55dc) == 2) {
          uVar11 = FUN_009580b8();
          FUN_009606dc(uVar11,1);
        }
      }
      else {
        puVar3 = (uint *)(param_1 + 0x105e4);
        uVar8 = *puVar3;
        if ((uVar8 & 0x7f80) != 0) {
          *puVar3 = uVar8 & 0xffff807f;
          FUN_0091ada4(param_1 + 0x10560);
          uVar8 = *puVar3;
        }
        *puVar3 = uVar8 | 4;
        FUN_00f01980(param_1 + 0x10560);
      }
      FUN_00ceade0(&uStack_70,piVar9);
      FUN_00ab7498(param_1 + 0x10808,&uStack_70);
      if (pvStack_68 != (void *)0x0) {
        operator_delete__(pvStack_68);
        uStack_70 = 0;
        pvStack_68 = (void *)0x0;
      }
    }
    lVar14 = FUN_009580b8();
    if (*(char *)(lVar14 + 0x568a) != '\0') {
      uVar11 = FUN_00ceadd0(piVar9);
      FUN_008fa54c(&uStack_70,uVar11);
      lVar14 = FUN_009fece0();
      FUN_00b63be8(lVar14 + 0x60,&uStack_70);
      if ((uStack_70 & 1) != 0) {
        operator_delete(pvStack_60);
      }
    }
    uVar10 = FUN_00ceaf14(piVar9);
    uVar8 = FUN_00b5d95c(param_1);
    FUN_00ed04d8(param_1 + 0x7f88,0,uVar8 & 1);
    if (*(float *)(param_1 + 0x7fcc) != 0.0) {
      *(float *)(param_1 + 0x7fcc) = 0.0;
      FUN_0091ada4(param_1 + 0x7f88);
    }
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb | (uint)*pbVar4 << 2;
      uVar8 = ((uint)*pbVar4 << 2 ^ 4) & 0xfc;
    }
    *(uint *)(param_1 + 0x8674) = *(uint *)(param_1 + 0x8674) & 0xfffffffb | uVar8;
    FUN_00b5acf8(param_1);
    if (*pbVar4 != 0) {
      uVar11 = FUN_009580b8();
      iVar5 = *piVar9;
      if ((*(byte *)(param_1 + 0xdacc) >> 2 & 1) == 0) {
        puVar18 = &DAT_0320ffa8;
      }
      else {
        puVar18 = (undefined1 *)FUN_00ac9cd0(param_1 + 0xda48);
      }
      lVar14 = FUN_009fece0();
      FUN_00960f28(uVar11,iVar5,puVar18,lVar14 + 0x88);
    }
    uVar11 = FUN_00ac9cd0(lVar1);
    FUN_008fce60(param_1 + 0x2cfb0,uVar11);
    uVar11 = FUN_009fece0();
    FUN_00a000f0(uVar11,*(undefined4 *)(param_1 + 0x2cfd0));
  }
  else {
    uVar11 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar12 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar13 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar11,uVar12,uVar13,0,0);
    FUN_00ac9b64(lVar1,param_1 + 0x2cfb0,0,0);
  }
  if (*(long *)(lVar6 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b5d9a0(long param_1)

{
  long lVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined1 *puVar18;
  ulong uStack_70;
  void *pvStack_68;
  void *pvStack_60;
  long lStack_58;
  
  lVar6 = tpidr_el0;
  lStack_58 = *(long *)(lVar6 + 0x28);
  lVar1 = param_1 + 0xb110;
  FUN_00ac9cd0(lVar1);
  piVar9 = (int *)FUN_00cead68();
  uVar10 = FUN_00ceae78();
  if ((uVar10 & 1) == 0) {
    bVar7 = FUN_00ceaf14(piVar9);
    bVar7 = bVar7 & 1;
  }
  else {
    bVar7 = 1;
  }
  *(byte *)(param_1 + 0x2cf9b) = bVar7;
  piVar2 = (int *)(param_1 + 0x2cfc8);
  *(bool *)(param_1 + 0x2cf9c) = *piVar9 == 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  puVar16 = *(undefined8 **)(piVar9 + 10);
  puVar3 = (uint *)(param_1 + 0x2cfcc);
  piVar17 = (int *)*puVar16;
  if (piVar17 != (int *)0x0) {
    piVar15 = (int *)(param_1 + 0x2cfd0);
    do {
      puVar16 = puVar16 + 1;
      iVar5 = *piVar17;
      *piVar15 = iVar5;
      *puVar3 = *puVar3 + iVar5;
      *piVar2 = *piVar2 + 1;
      if (bVar7 != 0) break;
      piVar17 = (int *)*puVar16;
      piVar15 = piVar15 + 1;
    } while (piVar17 != (int *)0x0);
  }
  FUN_00b60784(param_1);
  uVar10 = FUN_00ceae78(piVar9);
  if ((((uVar10 & 1) == 0) && (uVar10 = FUN_00ceaf14(piVar9), (uVar10 & 1) == 0)) ||
     (*(uint *)(param_1 + 0x2cf88) <= *puVar3)) {
    pbVar4 = (byte *)(param_1 + 0x2cf98);
    if (*pbVar4 == 0) {
      uVar10 = FUN_0093dbe8();
      if ((uVar10 & 1) == 0) {
        FUN_00ceae10(&uStack_70,piVar9);
        FUN_00f0d75c(param_1 + 0x84c0,&uStack_70);
        if (pvStack_68 != (void *)0x0) {
          operator_delete__(pvStack_68);
          uStack_70 = 0;
          pvStack_68 = (void *)0x0;
        }
      }
      FUN_00f0db64(*(undefined4 *)(param_1 + 0x2d028),0,0x3f800000,param_1 + 0x84c0);
      FUN_00b61524(param_1);
    }
    else {
      if (*(byte *)(param_1 + 0x2cf9b) == 0) {
        FUN_00b63a74(param_1);
        lVar14 = FUN_009580b8();
        if (*(int *)(lVar14 + 0x55dc) == 2) {
          uVar11 = FUN_009580b8();
          FUN_009606dc(uVar11,1);
        }
      }
      else {
        puVar3 = (uint *)(param_1 + 0x105e4);
        uVar8 = *puVar3;
        if ((uVar8 & 0x7f80) != 0) {
          *puVar3 = uVar8 & 0xffff807f;
          FUN_0091ada4(param_1 + 0x10560);
          uVar8 = *puVar3;
        }
        *puVar3 = uVar8 | 4;
        FUN_00f01980(param_1 + 0x10560);
      }
      FUN_00ceade0(&uStack_70,piVar9);
      FUN_00ab7498(param_1 + 0x10808,&uStack_70);
      if (pvStack_68 != (void *)0x0) {
        operator_delete__(pvStack_68);
        uStack_70 = 0;
        pvStack_68 = (void *)0x0;
      }
    }
    lVar14 = FUN_009580b8();
    if (*(char *)(lVar14 + 0x568a) != '\0') {
      uVar11 = FUN_00ceadd0(piVar9);
      FUN_008fa54c(&uStack_70,uVar11);
      lVar14 = FUN_009fece0();
      FUN_00b63be8(lVar14 + 0x60,&uStack_70);
      if ((uStack_70 & 1) != 0) {
        operator_delete(pvStack_60);
      }
    }
    uVar10 = FUN_00ceaf14(piVar9);
    uVar8 = FUN_00b5d95c(param_1);
    FUN_00ed04d8(param_1 + 0x7f88,0,uVar8 & 1);
    if (*(float *)(param_1 + 0x7fcc) != 0.0) {
      *(float *)(param_1 + 0x7fcc) = 0.0;
      FUN_0091ada4(param_1 + 0x7f88);
    }
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb;
    }
    else {
      *(uint *)(param_1 + 0xdacc) = *(uint *)(param_1 + 0xdacc) & 0xfffffffb | (uint)*pbVar4 << 2;
      uVar8 = ((uint)*pbVar4 << 2 ^ 4) & 0xfc;
    }
    *(uint *)(param_1 + 0x8674) = *(uint *)(param_1 + 0x8674) & 0xfffffffb | uVar8;
    FUN_00b5acf8(param_1);
    if (*pbVar4 != 0) {
      uVar11 = FUN_009580b8();
      iVar5 = *piVar9;
      if ((*(byte *)(param_1 + 0xdacc) >> 2 & 1) == 0) {
        puVar18 = &DAT_0320ffa8;
      }
      else {
        puVar18 = (undefined1 *)FUN_00ac9cd0(param_1 + 0xda48);
      }
      lVar14 = FUN_009fece0();
      FUN_00960f28(uVar11,iVar5,puVar18,lVar14 + 0x88);
    }
    uVar11 = FUN_00ac9cd0(lVar1);
    FUN_008fce60(param_1 + 0x2cfb0,uVar11);
    uVar11 = FUN_009fece0();
    FUN_00a000f0(uVar11,*(undefined4 *)(param_1 + 0x2cfd0));
  }
  else {
    uVar11 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_TITLE",0);
    uVar12 = FUN_00e6ce7c("MENU_PARTY_CANT_SWITCH_TYPE_MSG",0);
    uVar13 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar11,uVar12,uVar13,0,0);
    FUN_00ac9b64(lVar1,param_1 + 0x2cfb0,0,0);
  }
  if (*(long *)(lVar6 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

