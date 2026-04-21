// functions/00ae5 — 8 functions
#include "libGameKindred.h"




void FUN_00ae55c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong local_60;
  ulong local_58;
  void *local_50;
  undefined1 auStack_44 [8];
  undefined1 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  FUN_00e70a24(param_3,&local_60);
  pvVar1 = (void *)((ulong)&local_60 | 1);
  uVar4 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    pvVar1 = local_50;
    uVar4 = local_58;
  }
  uVar5 = FUN_0091ed5c(pvVar1,uVar4 & 0xffffffff,0x12345678);
  lVar6 = 0;
  puVar7 = auStack_44;
  do {
    uVar3 = (uint)lVar6;
    lVar6 = lVar6 + 4;
    *puVar7 = (&DAT_02be9bbc)[uVar5 >> (ulong)(uVar3 & 0x1f) & 0xf];
    puVar7 = puVar7 + 1;
  } while (lVar6 != 0x20);
  local_3c = 0;
  FUN_008fa54c(param_1,auStack_44);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ae56a0(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 local_30 [2];
  long local_28;
  
  puVar3 = local_30;
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x3da8) = param_2;
  if ((*(char *)(param_1 + 0x3dbd) == '\0') || (*(char *)(param_1 + 0x3dbe) == '\0')) {
    switch(param_2) {
    case 0:
      uVar1 = *(uint *)(param_1 + 0x2e4);
      if ((uVar1 & 0x7f80) != 0x5900) {
        *(uint *)(param_1 + 0x2e4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5900;
        FUN_0091ada4(param_1 + 0x260);
      }
      local_30[0] = 0xffdcdcdc;
      break;
    case 1:
      if ((~*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x7f80;
        FUN_0091ada4(param_1 + 0x260);
      }
      local_30[0] = 0xff3b912e;
      puVar3 = local_30;
      break;
    case 2:
      if ((~*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x7f80;
        FUN_0091ada4(param_1 + 0x260);
      }
      puVar3 = &DAT_031339ec;
      break;
    case 3:
    case 4:
      if ((~*(uint *)(param_1 + 0x2e4) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x2e4) = *(uint *)(param_1 + 0x2e4) | 0x7f80;
        FUN_0091ada4(param_1 + 0x260);
      }
      local_30[0] = 0xff65bdce;
      puVar3 = local_30;
      break;
    default:
      goto switchD_00ae56f8_default;
    }
    FUN_00f0e670(param_1 + 0x170,puVar3,2);
  }
switchD_00ae56f8_default:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00ae57f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e70b04(param_1 + 0x3d40);
  lVar1 = param_1 + 0x3d08;
  if ((uVar2 & 1) == 0) {
    lVar1 = param_1 + 0x3d40;
  }
  return lVar1;
}




void FUN_00ae5830(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  uint uVar4;
  undefined **ppuVar5;
  
  *(char *)(param_1 + 0x3dbf) = (char)(param_2 & 1);
  uVar1 = *(uint *)(param_1 + 0x2e4);
  uVar4 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar4 = 0xb2;
  }
  if ((uVar1 >> 7 & 0xff) != uVar4) {
    *(uint *)(param_1 + 0x2e4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar4 << 7;
    FUN_0091ada4(param_1 + 0x260);
  }
  uVar4 = ~param_2 & 1;
  *(uint *)(param_1 + 0x1224) =
       *(uint *)(param_1 + 0x1224) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1224) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x1314) =
       *(uint *)(param_1 + 0x1314) & 0xfffffff8 | *(uint *)(param_1 + 0x1314) & 3 | uVar4 << 2;
  *(uint *)(param_1 + 0x1404) =
       *(uint *)(param_1 + 0x1404) & 0xfffffff8 | *(uint *)(param_1 + 0x1404) & 3 | uVar4 << 2;
  *(uint *)(param_1 + 0x3c3c) =
       *(uint *)(param_1 + 0x3c3c) & 0xfffffff8 | *(uint *)(param_1 + 0x3c3c) & 3 | uVar4 << 2;
  uVar2 = FUN_0092ea9c();
  if ((uVar2 & 1) == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  else {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  }
  if ((param_2 & 1) == 0) {
    ppuVar3 = ppuVar5;
  }
  FUN_00f0d378(param_1 + 0x260,*ppuVar3);
  return;
}




void FUN_00ae590c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x323c) =
       *(uint *)(param_1 + 0x323c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x323c) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x373c) =
       *(uint *)(param_1 + 0x373c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x373c) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x310c) =
       *(uint *)(param_1 + 0x310c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x310c) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x360c) =
       *(uint *)(param_1 + 0x360c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x360c) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x2e2c) =
       *(uint *)(param_1 + 0x2e2c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2e2c) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00ae594c(long param_1,ulong param_2,ulong param_3,int param_4)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar1 = "generic_chat_bubble";
  if ((param_3 & 1) == 0) {
    pcVar1 = "generic_chat_bubble_outline";
  }
  FUN_00f0e578(param_1 + 0x390,pcVar1);
  uVar4 = 0;
  if ((param_2 & 1) != 0) {
    uVar4 = ~*(uint *)(param_1 + 0x2cfc) & 4;
  }
  *(uint *)(param_1 + 0x414) = *(uint *)(param_1 + 0x414) & 0xfffffffb | uVar4;
  if (((param_4 < 1) || ((param_2 & 1) == 0)) || ((*(byte *)(param_1 + 0x2cfc) >> 2 & 1) != 0)) {
    *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x504) = *(uint *)(param_1 + 0x504) | 4;
    FUN_00e70510(&local_48);
    if (param_4 < 99) {
      puVar3 = &DAT_01bb6d43;
    }
    else {
      puVar3 = &DAT_01bb02c9;
      param_4 = 99;
    }
    FUN_00e70e18(&local_48,puVar3,param_4);
    FUN_00f0d75c(param_1 + 0x480,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae5a70(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,byte param_11,byte param_12)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  size_t sVar6;
  size_t sVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  char *pcVar14;
  long lVar15;
  void *pvVar16;
  char *pcVar17;
  float fVar18;
  byte local_90 [16];
  void *local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  *(undefined1 *)(param_2 + 0x3dbd) = 1;
  lVar1 = param_2 + 0x3ce0;
  FUN_00910394(lVar1);
  FUN_00910394(param_2 + 0x3d08,param_5);
  lVar2 = param_2 + 0x3d18;
  FUN_00910394(lVar2,param_6);
  pbVar3 = (byte *)(param_2 + 0x3d28);
  FUN_008fce60(pbVar3,param_7);
  FUN_00910394(param_2 + 0x3d40,param_8);
  lVar15 = param_2 + 0x3d50;
  FUN_00910394(lVar15,param_9);
  pbVar4 = (byte *)(param_2 + 0x3d60);
  FUN_008fce60(pbVar4,param_10);
  FUN_00f0d75c(param_2 + 0x260,lVar1);
  puVar5 = &DAT_031339e0;
  if ((param_12 & 1) == 0) {
    puVar5 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_2 + 0x260,puVar5);
  FUN_00ac5fdc(param_2 + 0x1470,lVar2);
  uVar11 = FUN_00e70b88(lVar2,&DAT_03210450);
  *(uint *)(param_2 + 0x14f4) =
       *(uint *)(param_2 + 0x14f4) & 0xfffffff8 |
       *(uint *)(param_2 + 0x14f4) & 3 | (uVar11 & 1) << 2;
  FUN_00b2a900(param_2 + 0x2078,lVar15);
  uVar11 = FUN_00e70b88(lVar15,&DAT_03210450);
  *(uint *)(param_2 + 0x20fc) =
       *(uint *)(param_2 + 0x20fc) & 0xfffffff8 |
       *(uint *)(param_2 + 0x20fc) & 3 | (uVar11 & 1) << 2;
  *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) | 4;
  bVar8 = *pbVar4;
  lVar2 = param_2 + 0x170;
  sVar6 = (ulong)(bVar8 >> 1);
  if ((bVar8 & 1) != 0) {
    sVar6 = *(size_t *)(param_2 + 0x3d68);
  }
  sVar7 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar7 = DAT_0320ffb0;
  }
  if (sVar6 == sVar7) {
    pvVar16 = *(void **)(param_2 + 0x3d70);
    if ((bVar8 & 1) == 0) {
      pvVar16 = (void *)(param_2 + 0x3d61);
    }
    pcVar17 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar17 = &DAT_0320ffa9;
    }
    if ((bVar8 & 1) == 0) {
      if (sVar6 != 0) {
        pcVar14 = (char *)(param_2 + 0x3d61);
        lVar15 = -(ulong)(bVar8 >> 1);
        do {
          if (*pcVar14 != *pcVar17) goto LAB_00ae5c88;
          pcVar14 = pcVar14 + 1;
          lVar15 = lVar15 + 1;
          pcVar17 = pcVar17 + 1;
        } while (lVar15 != 0);
      }
    }
    else if ((sVar6 != 0) && (iVar12 = memcmp(pvVar16,pcVar17,sVar6), iVar12 != 0))
    goto LAB_00ae5c88;
LAB_00ae5d1c:
    bVar8 = *pbVar3;
    sVar6 = (ulong)(bVar8 >> 1);
    if ((bVar8 & 1) != 0) {
      sVar6 = *(size_t *)(param_2 + 0x3d30);
    }
    sVar7 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar7 = DAT_0320ffb0;
    }
    if (sVar6 == sVar7) {
      pvVar16 = *(void **)(param_2 + 0x3d38);
      if ((bVar8 & 1) == 0) {
        pvVar16 = (void *)(param_2 + 0x3d29);
      }
      pcVar17 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar17 = &DAT_0320ffa9;
      }
      if ((bVar8 & 1) == 0) {
        if (sVar6 != 0) {
          pcVar14 = (char *)(param_2 + 0x3d29);
          lVar15 = -(ulong)(bVar8 >> 1);
          do {
            if (*pcVar14 != *pcVar17) goto LAB_00ae5dc4;
            pcVar14 = pcVar14 + 1;
            lVar15 = lVar15 + 1;
            pcVar17 = pcVar17 + 1;
          } while (lVar15 != 0);
        }
      }
      else if (sVar6 != 0) {
        uVar11 = memcmp(pvVar16,pcVar17,sVar6);
        pvVar16 = (void *)(ulong)uVar11;
        if (uVar11 != 0) goto LAB_00ae5dc4;
      }
    }
    else {
LAB_00ae5dc4:
      pvVar13 = (void *)FUN_009580b8();
      bVar8 = *pbVar3;
      bVar9 = *(byte *)((long)pvVar13 + 0x5478);
      sVar6 = (ulong)(bVar8 >> 1);
      if ((bVar8 & 1) != 0) {
        sVar6 = *(size_t *)(param_2 + 0x3d30);
      }
      sVar7 = (ulong)(bVar9 >> 1);
      if ((bVar9 & 1) != 0) {
        sVar7 = *(size_t *)((long)pvVar13 + 0x5480);
      }
      pvVar16 = pvVar13;
      if (sVar6 == sVar7) {
        pvVar16 = *(void **)(param_2 + 0x3d38);
        pcVar17 = *(char **)((long)pvVar13 + 0x5488);
        if ((bVar8 & 1) == 0) {
          pvVar16 = (void *)(param_2 + 0x3d29);
        }
        if ((bVar9 & 1) == 0) {
          pcVar17 = (char *)((long)pvVar13 + 0x5479);
        }
        if ((bVar8 & 1) == 0) {
          if (sVar6 != 0) {
            pcVar14 = (char *)(param_2 + 0x3d29);
            lVar15 = -(ulong)(bVar8 >> 1);
            do {
              if (*pcVar14 != *pcVar17) goto LAB_00ae5e58;
              pcVar14 = pcVar14 + 1;
              lVar15 = lVar15 + 1;
              pcVar17 = pcVar17 + 1;
            } while (lVar15 != 0);
          }
        }
        else if (sVar6 != 0) {
          uVar11 = memcmp(pvVar16,pcVar17,sVar6);
          pvVar16 = (void *)(ulong)uVar11;
          if (uVar11 != 0) goto LAB_00ae5e58;
        }
        pvVar16 = (void *)FUN_00f0e578(lVar2,"generic_guild");
        fVar18 = *(float *)(param_2 + 0x1b8);
        goto LAB_00ae5e7c;
      }
    }
LAB_00ae5e58:
    *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) & 0xfffffffb;
  }
  else {
LAB_00ae5c88:
    lVar15 = FUN_009580b8();
    bVar8 = *pbVar4;
    bVar9 = *(byte *)(lVar15 + 0x5490);
    sVar6 = (ulong)(bVar8 >> 1);
    if ((bVar8 & 1) != 0) {
      sVar6 = *(size_t *)(param_2 + 0x3d68);
    }
    sVar7 = (ulong)(bVar9 >> 1);
    if ((bVar9 & 1) != 0) {
      sVar7 = *(size_t *)(lVar15 + 0x5498);
    }
    if (sVar6 != sVar7) goto LAB_00ae5d1c;
    pvVar16 = *(void **)(param_2 + 0x3d70);
    pcVar17 = *(char **)(lVar15 + 0x54a0);
    if ((bVar8 & 1) == 0) {
      pvVar16 = (void *)(param_2 + 0x3d61);
    }
    if ((bVar9 & 1) == 0) {
      pcVar17 = (char *)(lVar15 + 0x5491);
    }
    if ((bVar8 & 1) == 0) {
      if (sVar6 != 0) {
        pcVar14 = (char *)(param_2 + 0x3d61);
        lVar15 = -(ulong)(bVar8 >> 1);
        do {
          if (*pcVar14 != *pcVar17) goto LAB_00ae5d1c;
          pcVar14 = pcVar14 + 1;
          lVar15 = lVar15 + 1;
          pcVar17 = pcVar17 + 1;
        } while (lVar15 != 0);
      }
    }
    else if ((sVar6 != 0) && (iVar12 = memcmp(pvVar16,pcVar17,sVar6), iVar12 != 0))
    goto LAB_00ae5d1c;
    pvVar16 = (void *)FUN_00f0e578(lVar2,"generic_team");
    fVar18 = *(float *)(param_2 + 0x1b8);
LAB_00ae5e7c:
    if ((fVar18 != 0.5) || (*(float *)(param_2 + 0x1bc) != 0.5)) {
      *(undefined8 *)(param_2 + 0x1b8) = 0x3f0000003f000000;
      pvVar16 = (void *)FUN_0091ada4(lVar2);
    }
  }
  FUN_00ae55c0(local_90,pvVar16,lVar1);
  FUN_008fce60(param_2 + 0x3cf0,local_90);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  *(uint *)(param_2 + 0x414) = *(uint *)(param_2 + 0x414) & 0xfffffffb;
  *(uint *)(param_2 + 0x634) = *(uint *)(param_2 + 0x634) | 4;
  *(uint *)(param_2 + 0xc2c) = *(uint *)(param_2 + 0xc2c) | 4;
  *(uint *)(param_2 + 0x323c) = *(uint *)(param_2 + 0x323c) & 0xfffffffb;
  *(uint *)(param_2 + 0x373c) = *(uint *)(param_2 + 0x373c) & 0xfffffffb;
  *(uint *)(param_2 + 0x310c) = *(uint *)(param_2 + 0x310c) & 0xfffffffb;
  *(uint *)(param_2 + 0x360c) = *(uint *)(param_2 + 0x360c) & 0xfffffffb;
  *(uint *)(param_2 + 0x2e2c) = *(uint *)(param_2 + 0x2e2c) & 0xfffffffb;
  *(uint *)(param_2 + 0x2cfc) = *(uint *)(param_2 + 0x2cfc) & 0xfffffffb;
  FUN_008fce60(param_2 + 0x3d80,param_4);
  *(undefined4 *)(param_2 + 0x3da0) = param_1;
  FUN_00ae5830(param_2,param_11 & 1);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ae5f98(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,uint param_6)

{
  long lVar1;
  undefined4 *puVar2;
  size_t sVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  char *pcVar11;
  long lVar12;
  void *pvVar13;
  char *pcVar14;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar1 = param_2 + 0x3ce0;
  *(undefined1 *)(param_2 + 0x3dbe) = 1;
  FUN_00910394(lVar1);
  FUN_00f0d75c(param_2 + 0x260,lVar1);
  puVar2 = &DAT_031339e0;
  if ((param_6 & 1) == 0) {
    puVar2 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_2 + 0x260,puVar2);
  FUN_00ac5fdc(param_2 + 0x1470,param_2 + 0x3d18);
  uVar8 = FUN_00e70b88(param_2 + 0x3d18,&DAT_03210450);
  *(uint *)(param_2 + 0x14f4) =
       *(uint *)(param_2 + 0x14f4) & 0xfffffff8 | *(uint *)(param_2 + 0x14f4) & 3 | (uVar8 & 1) << 2
  ;
  FUN_00b2a900(param_2 + 0x2078,param_2 + 0x3d50);
  uVar8 = FUN_00e70b88(param_2 + 0x3d50,&DAT_03210450);
  *(uint *)(param_2 + 0x20fc) =
       *(uint *)(param_2 + 0x20fc) & 0xfffffff8 | *(uint *)(param_2 + 0x20fc) & 3 | (uVar8 & 1) << 2
  ;
  *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) | 4;
  bVar5 = *(byte *)(param_2 + 0x3d60);
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(param_2 + 0x3d68);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pvVar13 = *(void **)(param_2 + 0x3d70);
    if ((bVar5 & 1) == 0) {
      pvVar13 = (void *)(param_2 + 0x3d61);
    }
    pcVar14 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar14 = &DAT_0320ffa9;
    }
    if ((bVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar11 = (char *)(param_2 + 0x3d61);
        lVar12 = -(ulong)(bVar5 >> 1);
        do {
          if (*pcVar11 != *pcVar14) goto LAB_00ae613c;
          pcVar11 = pcVar11 + 1;
          lVar12 = lVar12 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar12 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar9 = memcmp(pvVar13,pcVar14,sVar3), iVar9 != 0)) goto LAB_00ae613c;
LAB_00ae61d0:
    bVar5 = *(byte *)(param_2 + 0x3d28);
    sVar3 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar3 = *(size_t *)(param_2 + 0x3d30);
    }
    sVar4 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar4 = DAT_0320ffb0;
    }
    if (sVar3 == sVar4) {
      pvVar13 = *(void **)(param_2 + 0x3d38);
      if ((bVar5 & 1) == 0) {
        pvVar13 = (void *)(param_2 + 0x3d29);
      }
      pcVar14 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar14 = &DAT_0320ffa9;
      }
      if ((bVar5 & 1) == 0) {
        if (sVar3 != 0) {
          pcVar11 = (char *)(param_2 + 0x3d29);
          lVar12 = -(ulong)(bVar5 >> 1);
          do {
            if (*pcVar11 != *pcVar14) goto LAB_00ae626c;
            pcVar11 = pcVar11 + 1;
            lVar12 = lVar12 + 1;
            pcVar14 = pcVar14 + 1;
          } while (lVar12 != 0);
        }
      }
      else if (sVar3 != 0) {
        uVar8 = memcmp(pvVar13,pcVar14,sVar3);
        pvVar13 = (void *)(ulong)uVar8;
        if (uVar8 != 0) goto LAB_00ae626c;
      }
    }
    else {
LAB_00ae626c:
      pvVar10 = (void *)FUN_009580b8();
      bVar5 = *(byte *)(param_2 + 0x3d28);
      bVar6 = *(byte *)((long)pvVar10 + 0x5478);
      sVar3 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar3 = *(size_t *)(param_2 + 0x3d30);
      }
      sVar4 = (ulong)(bVar6 >> 1);
      if ((bVar6 & 1) != 0) {
        sVar4 = *(size_t *)((long)pvVar10 + 0x5480);
      }
      pvVar13 = pvVar10;
      if (sVar3 == sVar4) {
        pvVar13 = *(void **)(param_2 + 0x3d38);
        pcVar14 = *(char **)((long)pvVar10 + 0x5488);
        if ((bVar5 & 1) == 0) {
          pvVar13 = (void *)(param_2 + 0x3d29);
        }
        if ((bVar6 & 1) == 0) {
          pcVar14 = (char *)((long)pvVar10 + 0x5479);
        }
        if ((bVar5 & 1) == 0) {
          if (sVar3 != 0) {
            pcVar11 = (char *)(param_2 + 0x3d29);
            lVar12 = -(ulong)(bVar5 >> 1);
            do {
              if (*pcVar11 != *pcVar14) goto LAB_00ae6300;
              pcVar11 = pcVar11 + 1;
              lVar12 = lVar12 + 1;
              pcVar14 = pcVar14 + 1;
            } while (lVar12 != 0);
          }
        }
        else if (sVar3 != 0) {
          uVar8 = memcmp(pvVar13,pcVar14,sVar3);
          pvVar13 = (void *)(ulong)uVar8;
          if (uVar8 != 0) goto LAB_00ae6300;
        }
        pcVar14 = "generic_guild";
        goto LAB_00ae6318;
      }
    }
LAB_00ae6300:
    *(uint *)(param_2 + 500) = *(uint *)(param_2 + 500) & 0xfffffffb;
  }
  else {
LAB_00ae613c:
    lVar12 = FUN_009580b8();
    bVar5 = *(byte *)(param_2 + 0x3d60);
    bVar6 = *(byte *)(lVar12 + 0x5490);
    sVar3 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar3 = *(size_t *)(param_2 + 0x3d68);
    }
    sVar4 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar4 = *(size_t *)(lVar12 + 0x5498);
    }
    if (sVar3 != sVar4) goto LAB_00ae61d0;
    pvVar13 = *(void **)(param_2 + 0x3d70);
    pcVar14 = *(char **)(lVar12 + 0x54a0);
    if ((bVar5 & 1) == 0) {
      pvVar13 = (void *)(param_2 + 0x3d61);
    }
    if ((bVar6 & 1) == 0) {
      pcVar14 = (char *)(lVar12 + 0x5491);
    }
    if ((bVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar11 = (char *)(param_2 + 0x3d61);
        lVar12 = -(ulong)(bVar5 >> 1);
        do {
          if (*pcVar11 != *pcVar14) goto LAB_00ae61d0;
          pcVar11 = pcVar11 + 1;
          lVar12 = lVar12 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar12 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar9 = memcmp(pvVar13,pcVar14,sVar3), iVar9 != 0)) goto LAB_00ae61d0;
    pcVar14 = "generic_team";
LAB_00ae6318:
    pvVar13 = (void *)FUN_00f0e578(param_2 + 0x170,pcVar14);
    if ((*(float *)(param_2 + 0x1b8) != 0.5) || (*(float *)(param_2 + 0x1bc) != 0.5)) {
      *(undefined8 *)(param_2 + 0x1b8) = 0x3f0000003f000000;
      pvVar13 = (void *)FUN_0091ada4(param_2 + 0x170);
    }
  }
  FUN_00ae55c0(local_80,pvVar13,lVar1);
  FUN_008fce60(param_2 + 0x3cf0,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  *(uint *)(param_2 + 0x414) = *(uint *)(param_2 + 0x414) & 0xfffffffb;
  *(uint *)(param_2 + 0x634) = *(uint *)(param_2 + 0x634) | 4;
  FUN_00f0e578(param_2 + 0xa88,"generic_invite_friend");
  *(uint *)(param_2 + 0xc2c) = *(uint *)(param_2 + 0xc2c) | 4;
  *(uint *)(param_2 + 0x323c) = *(uint *)(param_2 + 0x323c) & 0xfffffffb;
  *(uint *)(param_2 + 0x310c) = *(uint *)(param_2 + 0x310c) & 0xfffffffb;
  *(uint *)(param_2 + 0x373c) = *(uint *)(param_2 + 0x373c) & 0xfffffffb;
  *(uint *)(param_2 + 0x2cfc) = *(uint *)(param_2 + 0x2cfc) & 0xfffffffb;
  *(uint *)(param_2 + 0x360c) = *(uint *)(param_2 + 0x360c) & 0xfffffffb;
  *(uint *)(param_2 + 0x2e2c) = *(uint *)(param_2 + 0x2e2c) & 0xfffffffb;
  FUN_008fce60(param_2 + 0x3d80,param_4);
  *(undefined4 *)(param_2 + 0x3da0) = param_1;
  FUN_00ae5830(param_2,param_5 & 1);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

