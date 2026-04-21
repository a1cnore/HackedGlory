// functions/00b86 — 2 functions
#include "libGameKindred.h"




void FUN_00b86344(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  ushort uVar14;
  void *pvVar15;
  ushort *puVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_009580c4();
  uVar12 = 0;
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_009580b8();
    bVar3 = *(byte *)(lVar7 + 0x5320);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(lVar7 + 0x5328);
    }
    sVar2 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar2 = DAT_0320ffb0;
    }
    if (sVar1 == sVar2) {
      pvVar15 = *(void **)(lVar7 + 0x5330);
      if ((bVar3 & 1) == 0) {
        pvVar15 = (void *)(lVar7 + 0x5321);
      }
      pcVar10 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar10 = &DAT_0320ffa9;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          pcVar13 = (char *)(lVar7 + 0x5321);
          lVar7 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar13 != *pcVar10) goto LAB_00b86410;
            pcVar13 = pcVar13 + 1;
            lVar7 = lVar7 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar7 != 0);
        }
      }
      else if (sVar1 != 0) {
        iVar11 = memcmp(pvVar15,pcVar10,sVar1);
        uVar12 = (uint)(iVar11 != 0) << 2;
        goto LAB_00b86434;
      }
      uVar12 = 0;
    }
    else {
LAB_00b86410:
      uVar12 = 4;
    }
  }
LAB_00b86434:
  *(uint *)(param_1 + 0x7434) = *(uint *)(param_1 + 0x7434) & 0xfffffffb | uVar12;
  uVar6 = FUN_009580c4();
  if ((uVar6 & 1) == 0) {
    puVar9 = &DAT_0320ffa8;
  }
  else {
    lVar7 = FUN_009580b8();
    puVar9 = (undefined1 *)(lVar7 + 0x5320);
  }
  FUN_00e70570(&local_58,puVar9);
  FUN_00b2a900(param_1 + 0x73b0,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar17 = FUN_00b2a97c(param_1 + 0x73b0);
  *(undefined4 *)(param_1 + 0xdd80) = uVar17;
  uVar12 = *(uint *)(param_1 + 0x73ac);
  lVar7 = param_1 + 0x7328;
  if ((uVar12 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x73ac) = uVar12 & 0xffff807f;
    FUN_0091ada4(lVar7);
  }
  lVar5 = DAT_03210d00;
  uVar14 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar14 == 0xffff) {
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar16 = (ushort *)(DAT_03210d00 + (ulong)uVar14 * 0x40 + 0x10);
    if (uVar14 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar14 = 0xffff;
    }
    else {
      uVar14 = *puVar16;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar14;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar16);
    *(undefined ***)puVar16 = &PTR_FUN_02825100;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar7,puVar16);
  uVar8 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*(undefined4 *)(param_1 + 0xdd78),uVar8);
  FUN_00efcb24(uVar8,FUN_009a7608);
  FUN_00f022a0(lVar7,uVar8);
  lVar7 = FUN_009580b8();
  bVar3 = *(byte *)(lVar7 + 0x5308);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar7 + 0x5310);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar15 = *(void **)(lVar7 + 0x5318);
    if ((bVar3 & 1) == 0) {
      pvVar15 = (void *)(lVar7 + 0x5309);
    }
    pcVar10 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar10 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar13 = (char *)(lVar7 + 0x5309);
        lVar7 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar13 != *pcVar10) goto LAB_00b8664c;
          pcVar13 = pcVar13 + 1;
          lVar7 = lVar7 + 1;
          pcVar10 = pcVar10 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar11 = memcmp(pvVar15,pcVar10,sVar1), iVar11 != 0))
    goto LAB_00b8664c;
    uVar8 = FUN_00e6ce7c("MENU_SPOILS_TITLE_TEAM",0);
    FUN_00b87278(param_1,uVar8);
  }
  else {
LAB_00b8664c:
    lVar7 = FUN_009580b8();
    FUN_00e70570(&local_58,lVar7 + 0x5308);
    FUN_00b87278(param_1,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  uVar8 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*(undefined4 *)(param_1 + 0xdd78),uVar8);
  FUN_00efcb24(uVar8,FUN_009a7608);
  FUN_00f022a0(param_1 + 0x5f0,uVar8);
  FUN_00b1e298(param_1 + 0x7fb0,*(undefined4 *)(param_1 + 0xdc44));
  fVar18 = (float)FUN_00f0e700(param_1 + 800);
  iVar11 = (int)(*(float *)(param_1 + 0xdc34) * 1000.0);
  FUN_00b1cb48(fVar18 * 0.7,0x42300000,param_1 + 0x8b20,0,1000,iVar11,iVar11,0,0);
  FUN_00b1d2b4(*(undefined4 *)(param_1 + 0xdc34),*(undefined4 *)(param_1 + 0xdc38),
               *(undefined4 *)(param_1 + 0xdc3c),*(undefined4 *)(param_1 + 0xdc40),param_1 + 0x8b20,
               *(undefined4 *)(param_1 + 0xdc44));
  FUN_00e70510(&local_58);
  FUN_00e70e18(&local_58,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0xdc48));
  FUN_00f0d75c(param_1 + 0xabd0,&local_58);
  *(uint *)(param_1 + 0xad84) =
       *(uint *)(param_1 + 0xad84) & 0xfffffffb | (uint)*(byte *)(param_1 + 0xdc4c) << 2;
  *(uint *)(param_1 + 0xaeb4) =
       *(uint *)(param_1 + 0xaeb4) & 0xfffffffb | (uint)*(byte *)(param_1 + 0xdc4c) << 2;
  FUN_00e705c8(&local_68,&DAT_01bb6cf3);
  FUN_00f0d75c(param_1 + 0xae30,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00b86838(long param_1)

{
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  size_t sVar4;
  size_t sVar5;
  undefined1 *puVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *__s2;
  char *pcVar16;
  uint uVar17;
  char *pcVar18;
  ushort uVar19;
  long lVar20;
  void *pvVar21;
  ushort *puVar22;
  undefined4 uVar23;
  float fVar24;
  ulong local_128;
  void *local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8 [3];
  ulong local_e0;
  void *local_d8;
  ulong local_d0;
  byte local_c8;
  undefined1 auStack_c7 [15];
  undefined1 *local_b8;
  byte local_98 [16];
  long local_88 [3];
  
  lVar8 = tpidr_el0;
  local_88[1] = *(long *)(lVar8 + 0x28);
  lVar20 = param_1 + 0xbbf0;
  *(uint *)(param_1 + 0xbc74) = *(uint *)(param_1 + 0xbc74) | 4;
  FUN_00f01980(lVar20);
  lVar13 = param_1 + 0xafe8;
  uVar10 = FUN_009580c4();
  uVar17 = 0;
  if ((uVar10 & 1) != 0) {
    lVar11 = FUN_009580b8();
    bVar7 = *(byte *)(lVar11 + 0x50e0);
    sVar4 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      sVar4 = *(size_t *)(lVar11 + 0x50e8);
    }
    sVar5 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar5 = DAT_0320ffb0;
    }
    if (sVar4 == sVar5) {
      pvVar21 = *(void **)(lVar11 + 0x50f0);
      if ((bVar7 & 1) == 0) {
        pvVar21 = (void *)(lVar11 + 0x50e1);
      }
      pcVar14 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar14 = &DAT_0320ffa9;
      }
      if ((bVar7 & 1) == 0) {
        if (sVar4 != 0) {
          pcVar16 = (char *)(lVar11 + 0x50e1);
          lVar11 = -(ulong)(bVar7 >> 1);
          do {
            if (*pcVar16 != *pcVar14) goto LAB_00b86930;
            pcVar16 = pcVar16 + 1;
            lVar11 = lVar11 + 1;
            pcVar14 = pcVar14 + 1;
          } while (lVar11 != 0);
        }
      }
      else if (sVar4 != 0) {
        iVar9 = memcmp(pvVar21,pcVar14,sVar4);
        uVar17 = (uint)(iVar9 != 0);
        goto LAB_00b86950;
      }
      uVar17 = 0;
    }
    else {
LAB_00b86930:
      uVar17 = 1;
    }
  }
LAB_00b86950:
  *(uint *)(param_1 + 0xb06c) =
       *(uint *)(param_1 + 0xb06c) & 0xfffffff8 | *(uint *)(param_1 + 0xb06c) & 3 | uVar17 << 2;
  uVar10 = FUN_009580c4();
  if ((uVar10 & 1) == 0) {
    FUN_00ac5fdc(lVar13,&DAT_03210450);
  }
  else {
    lVar11 = FUN_009580b8();
    FUN_00e70570(&local_e0,lVar11 + 0x50e0);
    FUN_00ac5fdc(lVar13,&local_e0);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
  }
  uVar23 = FUN_00ac6090(lVar13);
  *(undefined4 *)(param_1 + 0xdd80) = uVar23;
  uVar17 = *(uint *)(param_1 + 0xafe4);
  lVar13 = param_1 + 0xaf60;
  if ((uVar17 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0xafe4) = uVar17 & 0xffff807f;
    FUN_0091ada4(lVar13);
  }
  lVar11 = DAT_03210d00;
  uVar19 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar19 == 0xffff) {
    puVar22 = (ushort *)0x0;
  }
  else {
    puVar22 = (ushort *)(DAT_03210d00 + (ulong)uVar19 * 0x40 + 0x10);
    if (uVar19 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar19 = 0xffff;
    }
    else {
      uVar19 = *puVar22;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar19;
    *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
    FUN_00efc8e8(puVar22);
    *(undefined ***)puVar22 = &PTR_FUN_02825100;
    *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar13,puVar22);
  uVar12 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  pfVar1 = (float *)(param_1 + 0xdd78);
  FUN_00efcac4(*pfVar1,uVar12);
  FUN_00efcb24(uVar12,FUN_009a7608);
  FUN_00f022a0(lVar13,uVar12);
  lVar13 = FUN_009580b8();
  bVar7 = *(byte *)(lVar13 + 0x50c8);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = *(size_t *)(lVar13 + 0x50d0);
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar21 = *(void **)(lVar13 + 0x50d8);
    if ((bVar7 & 1) == 0) {
      pvVar21 = (void *)(lVar13 + 0x50c9);
    }
    pcVar14 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar14 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar16 = (char *)(lVar13 + 0x50c9);
        lVar13 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar16 != *pcVar14) goto LAB_00b86b70;
          pcVar16 = pcVar16 + 1;
          lVar13 = lVar13 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar13 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar9 = memcmp(pvVar21,pcVar14,sVar4), iVar9 != 0)) goto LAB_00b86b70;
    uVar12 = FUN_00e6ce7c("MENU_SPOILS_TITLE_GUILD",0);
    FUN_00b87278(param_1,uVar12);
  }
  else {
LAB_00b86b70:
    lVar13 = FUN_009580b8();
    FUN_00e70570(&local_e0,lVar13 + 0x50c8);
    FUN_00b87278(param_1,&local_e0);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
  }
  uVar12 = FUN_00a250a8();
  FUN_00efddc4(0x3f800000);
  FUN_00efcac4(*pfVar1,uVar12);
  FUN_00efcb24(uVar12,FUN_009a7608);
  FUN_00f022a0(param_1 + 0x5f0,uVar12);
  FUN_00e70510(local_f8 + 1);
  piVar2 = (int *)(param_1 + 0xdc54);
  FUN_00e70e18(local_f8 + 1,&DAT_01bb6d43,*piVar2);
  FUN_00f0d75c(param_1 + 0xc1c0,local_f8 + 1);
  fVar24 = 0.8;
  if (*piVar2 < 100) {
    fVar24 = 1.0;
  }
  if ((*(float *)(param_1 + 0xc208) != fVar24) || (*(float *)(param_1 + 0xc20c) != fVar24)) {
    *(float *)(param_1 + 0xc208) = fVar24;
    *(float *)(param_1 + 0xc20c) = fVar24;
    FUN_0091ada4(param_1 + 0xc1c0);
  }
  fVar24 = (float)FUN_00f0e700(param_1 + 800);
  lVar13 = param_1 + 0xc2f0;
  if (*piVar2 < *(int *)(param_1 + 0xdc50)) {
    FUN_00b0a930(fVar24 * 0.8,0x42580000,lVar13,*(undefined4 *)(param_1 + 0xdc64),
                 *(undefined4 *)(param_1 + 0xdc6c),*(undefined4 *)(param_1 + 0xdc60),0);
    FUN_00b0ac1c(0x40000000,*pfVar1 + 1.0,lVar13,
                 *(int *)(param_1 + 0xdc68) - *(int *)(param_1 + 0xdc60),
                 *(undefined4 *)(param_1 + 0xdc70));
    lVar13 = 0xdc5c;
  }
  else {
    FUN_00b0a930(fVar24 * 0.8,0x42580000,lVar13,*(undefined4 *)(param_1 + 0xdc6c),
                 *(undefined4 *)(param_1 + 0xdc70),*(undefined4 *)(param_1 + 0xdc60),0);
    FUN_00b0ac1c(0x40000000,*pfVar1 + 1.0,lVar13,
                 *(int *)(param_1 + 0xdc68) - *(int *)(param_1 + 0xdc60),
                 *(undefined4 *)(param_1 + 0xdc70));
    lVar13 = 0xdc58;
  }
  iVar9 = *(int *)(param_1 + lVar13);
  if ((*(float *)(param_1 + 0xbc38) != 1.0) || (*(float *)(param_1 + 0xbc3c) != 1.0)) {
    uVar12 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0xbc38) = uVar12;
    FUN_0091ada4(lVar20);
  }
  FUN_00af97f4(lVar20,0);
  fVar24 = (float)(iVar9 * 2 + -2);
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  FUN_00afa420(0xbf800000,lVar20,(int)fVar24 + 1,0);
  FUN_00e70510(&local_100);
  switch(iVar9) {
  case 1:
    pcVar14 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar14 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar14 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar14 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar14 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar14 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar14 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar14 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar14 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar14 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar15 = &DAT_03210450;
    goto LAB_00b86e84;
  }
  puVar15 = (undefined8 *)FUN_00e6ce7c(pcVar14,0);
LAB_00b86e84:
  FUN_00910394(&local_100,puVar15);
  FUN_00f0d75c(param_1 + 0xc090,&local_100);
  bVar7 = *(byte *)(param_1 + 0xdc88);
  sVar4 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar4 = *(size_t *)(param_1 + 0xdc90);
  }
  sVar5 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar5 = DAT_0320ffb0;
  }
  if (sVar4 == sVar5) {
    pvVar21 = *(void **)(param_1 + 0xdc98);
    if ((bVar7 & 1) == 0) {
      pvVar21 = (void *)(param_1 + 0xdc89);
    }
    pcVar14 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar14 = &DAT_0320ffa9;
    }
    if ((bVar7 & 1) == 0) {
      if (sVar4 != 0) {
        pcVar16 = (char *)(param_1 + 0xdc89);
        lVar20 = -(ulong)(bVar7 >> 1);
        do {
          if (*pcVar16 != *pcVar14) goto LAB_00b86f34;
          pcVar16 = pcVar16 + 1;
          lVar20 = lVar20 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar20 != 0);
      }
    }
    else if ((sVar4 != 0) && (iVar9 = memcmp(pvVar21,pcVar14,sVar4), iVar9 != 0)) goto LAB_00b86f34;
    FUN_00e70570(&local_e0,&DAT_0320ffa8);
    FUN_00f0d75c(param_1 + 0xd738,&local_e0);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
  }
  else {
LAB_00b86f34:
    FUN_00e70510(&local_110);
    memset(&local_e0,0,0x60);
    lVar20 = 1;
    pcVar14 = ", ";
    do {
      lVar13 = param_1 + lVar20 * 0x18;
      bVar7 = *(byte *)(lVar13 + 0xdc88);
      sVar4 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        sVar4 = *(size_t *)(lVar13 + 0xdc90);
      }
      sVar5 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar5 = DAT_0320ffb0;
      }
      pcVar16 = pcVar14;
      if (sVar4 == sVar5) {
        pvVar21 = *(void **)(param_1 + lVar20 * 0x18 + 0xdc98);
        if ((bVar7 & 1) == 0) {
          pvVar21 = (void *)(lVar13 + 0xdc89);
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar18 = (char *)(lVar13 + 0xdc89);
            lVar13 = -(ulong)(bVar7 >> 1);
            do {
              if (*pcVar18 != *__s2) goto LAB_00b87020;
              pcVar18 = pcVar18 + 1;
              lVar13 = lVar13 + 1;
              __s2 = __s2 + 1;
            } while (lVar13 != 0);
          }
        }
        else if ((sVar4 != 0) && (iVar9 = memcmp(pvVar21,__s2,sVar4), iVar9 != 0))
        goto LAB_00b87020;
        pcVar16 = "";
      }
LAB_00b87020:
      FUN_008fa54c(&local_128,pcVar16);
      FUN_008fce60(local_f8 + lVar20 * 3,&local_128);
      if ((local_128 & 1) != 0) {
        operator_delete(local_118);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 5);
    if ((*(byte *)(param_1 + 0xdc88) & 1) == 0) {
      lVar20 = param_1 + 0xdc89;
    }
    else {
      lVar20 = *(long *)(param_1 + 0xdc98);
    }
    uVar10 = (ulong)&local_e0 | 1;
    if ((local_e0 & 1) != 0) {
      uVar10 = local_d0;
    }
    if ((*(byte *)(param_1 + 0xdca0) & 1) == 0) {
      lVar13 = param_1 + 0xdca1;
    }
    else {
      lVar13 = *(long *)(param_1 + 0xdcb0);
    }
    puVar6 = auStack_c7;
    if ((local_c8 & 1) != 0) {
      puVar6 = local_b8;
    }
    if ((*(byte *)(param_1 + 0xdcb8) & 1) == 0) {
      lVar11 = param_1 + 0xdcb9;
    }
    else {
      lVar11 = *(long *)(param_1 + 0xdcc8);
    }
    FUN_00e70e18(&local_110,"%s%s%s%s%s",lVar20,uVar10,lVar13,puVar6,lVar11);
    thunk_FUN_00e7051c(&local_128,&local_110);
    FUN_00f0d75c(param_1 + 0xd738,&local_128);
    if (local_120 != (void *)0x0) {
      operator_delete__(local_120);
      local_128 = 0;
      local_120 = (void *)0x0;
    }
    lVar20 = 0;
    do {
      if ((local_98[lVar20] & 1) != 0) {
        operator_delete(*(void **)((long)local_88 + lVar20));
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0x60);
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
      local_110 = 0;
      local_108 = (void *)0x0;
    }
  }
  puVar3 = (uint *)(param_1 + 0xda1c);
  if (*(int *)(param_1 + 0xdc74) == 0) {
    *puVar3 = *puVar3 & 0xfffffffb;
    *(uint *)(param_1 + 0xd8ec) = *(uint *)(param_1 + 0xd8ec) & 0xfffffffb;
  }
  else {
    *puVar3 = *puVar3 | 4;
    *(uint *)(param_1 + 0xd8ec) = *(uint *)(param_1 + 0xd8ec) | 4;
    FUN_00e70510(&local_e0);
    FUN_00e70e18(&local_e0,&DAT_01bb6d43,*(int *)(param_1 + 0xdc74));
    FUN_00f0d75c(param_1 + 0xd998,&local_e0);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
  }
  if (local_f8[0] != (void *)0x0) {
    operator_delete__(local_f8[0]);
    local_100 = 0;
    local_f8[0] = (void *)0x0;
  }
  if (local_f8[2] != (void *)0x0) {
    operator_delete__(local_f8[2]);
    local_f8[1] = (void *)0x0;
    local_f8[2] = (void *)0x0;
  }
  if (*(long *)(lVar8 + 0x28) != local_88[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

