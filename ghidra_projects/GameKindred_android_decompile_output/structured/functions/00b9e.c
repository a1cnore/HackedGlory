// functions/00b9e — 2 functions
#include "libGameKindred.h"




void FUN_00b9e9bc(long param_1)

{
  long *plVar1;
  void *pvVar2;
  size_t sVar3;
  size_t sVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  void *pvVar14;
  float fVar15;
  float fVar16;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar1 = (long *)(param_1 + 0x120b0);
  lVar10 = *plVar1;
  if ((lVar10 == 0) || (*(char *)(lVar10 + 0x3dc2) != '\0')) {
    *(uint *)(param_1 + 0xa96c) = *(uint *)(param_1 + 0xa96c) & 0xfffffffb;
    *(uint *)(param_1 + 0xaf64) = *(uint *)(param_1 + 0xaf64) & 0xfffffffb;
    goto LAB_00b9ea2c;
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  FUN_00e70a24(lVar10 + 0x3ce0,&local_70);
  pvVar14 = (void *)((ulong)&local_70 | 1);
  uVar11 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    pvVar14 = local_60;
    uVar11 = local_68;
  }
  if (5 < (long)uVar11) {
    pvVar2 = (void *)((long)pvVar14 + uVar11);
    pvVar8 = pvVar14;
    do {
      if ((uVar11 - 5 == 0) || (pvVar8 = memchr(pvVar8,0x47,uVar11 - 5), pvVar8 == (void *)0x0))
      break;
      iVar7 = memcmp(pvVar8,"Guest_",6);
      if (iVar7 == 0) {
        if ((pvVar8 != pvVar2) && ((long)pvVar8 - (long)pvVar14 != -1)) {
          *(uint *)(param_1 + 0xa96c) = *(uint *)(param_1 + 0xa96c) & 0xfffffffb;
          *(uint *)(param_1 + 0xaf64) = *(uint *)(param_1 + 0xaf64) & 0xfffffffb;
          goto LAB_00b9ed60;
        }
        break;
      }
      pvVar8 = (void *)((long)pvVar8 + 1);
      uVar11 = (long)pvVar2 - (long)pvVar8;
    } while (5 < (long)uVar11);
  }
  lVar10 = *plVar1;
  bVar5 = *(byte *)(lVar10 + 0x3d60);
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(lVar10 + 0x3d68);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pvVar14 = *(void **)(lVar10 + 0x3d70);
    if ((bVar5 & 1) == 0) {
      pvVar14 = (void *)(lVar10 + 0x3d61);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar12 = (char *)(lVar10 + 0x3d61);
        lVar10 = -(ulong)(bVar5 >> 1);
        do {
          if (*pcVar12 != *pcVar9) goto LAB_00b9ebc0;
          pcVar12 = pcVar12 + 1;
          lVar10 = lVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar14,pcVar9,sVar3), iVar7 != 0)) goto LAB_00b9ebc0;
    if (*(char *)(param_1 + 0x12671) != '\0') {
      pcVar9 = "generic_team_outline";
      goto LAB_00b9ebf4;
    }
    uVar13 = *(uint *)(param_1 + 0xaf64) & 0xfffffffb;
  }
  else {
LAB_00b9ebc0:
    pcVar9 = "generic_team";
LAB_00b9ebf4:
    FUN_00f0e578(param_1 + 0xb3b8,pcVar9);
    uVar13 = *(uint *)(param_1 + 0xaf64) | 4;
  }
  *(uint *)(param_1 + 0xaf64) = uVar13;
  lVar10 = *plVar1;
  bVar5 = *(byte *)(lVar10 + 0x3d28);
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(lVar10 + 0x3d30);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pvVar14 = *(void **)(lVar10 + 0x3d38);
    if ((bVar5 & 1) == 0) {
      pvVar14 = (void *)(lVar10 + 0x3d29);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar12 = (char *)(lVar10 + 0x3d29);
        lVar10 = -(ulong)(bVar5 >> 1);
        do {
          if (*pcVar12 != *pcVar9) goto LAB_00b9ec9c;
          pcVar12 = pcVar12 + 1;
          lVar10 = lVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar14,pcVar9,sVar3), iVar7 != 0)) goto LAB_00b9ec9c;
    if (*(char *)(param_1 + 0x12670) != '\0') {
      pcVar9 = "generic_guild_outline";
      goto LAB_00b9ecd0;
    }
    uVar13 = *(uint *)(param_1 + 0xa96c) & 0xfffffffb;
  }
  else {
LAB_00b9ec9c:
    pcVar9 = "generic_guild";
LAB_00b9ecd0:
    FUN_00f0e578(param_1 + 0xadc0,pcVar9);
    uVar13 = *(uint *)(param_1 + 0xa96c) | 4;
  }
  *(uint *)(param_1 + 0xa96c) = uVar13;
  fVar16 = *(float *)(param_1 + 0xaf20);
  if ((*(byte *)(param_1 + 0xaf64) >> 2 & 1) == 0) {
    if (*(float *)(param_1 + 0xa928) != fVar16) {
      *(float *)(param_1 + 0xa928) = fVar16;
LAB_00b9ed58:
      FUN_0091ada4(param_1 + 0xa8e8);
    }
  }
  else {
    fVar15 = (float)FUN_00f13e54(param_1 + 0xaee0);
    fVar16 = fVar16 + fVar15 * -0.5 + -48.0;
    if (*(float *)(param_1 + 0xa928) != fVar16) {
      *(float *)(param_1 + 0xa928) = fVar16;
      goto LAB_00b9ed58;
    }
  }
LAB_00b9ed60:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00b9ea2c:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b9ed98(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  size_t sVar12;
  size_t sVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  undefined8 uVar17;
  size_t sVar18;
  byte *pbVar19;
  byte bVar20;
  ulong uVar21;
  byte bVar22;
  undefined4 uVar23;
  void *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00b91984();
  if (*(uint *)(param_1 + 0x12550) != 0) {
    plVar1 = (long *)(param_1 + 0x12048);
    uVar21 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x12558);
      pvVar8 = operator_new(0x3dc8);
      FUN_00ae2fb0();
      local_80 = pvVar8;
      FUN_00b9f100(param_1 + 0x12040,&local_80);
      lVar15 = lVar14 + uVar21 * 0x38;
      sVar16 = *(size_t *)(lVar15 + 0x10);
      pbVar19 = (byte *)(lVar15 + 8);
      bVar20 = *pbVar19;
      sVar13 = (size_t)(bVar20 >> 1);
      bVar4 = *(byte *)(param_1 + 0x12638);
      sVar18 = *(size_t *)(param_1 + 0x12640);
      sVar3 = sVar13;
      if ((bVar20 & 1) != 0) {
        sVar3 = sVar16;
      }
      sVar12 = (size_t)(bVar4 >> 1);
      sVar2 = sVar12;
      if ((bVar4 & 1) != 0) {
        sVar2 = sVar18;
      }
      bVar22 = bVar4 & 1;
      if (sVar3 == sVar2) {
        pvVar8 = *(void **)(lVar14 + uVar21 * 0x38 + 0x18);
        if ((bVar20 & 1) == 0) {
          pvVar8 = (void *)(lVar15 + 9);
        }
        pcVar9 = (char *)(param_1 + 0x12639);
        if ((bVar4 & 1) != 0) {
          pcVar9 = *(char **)(param_1 + 0x12648);
        }
        if ((bVar20 & 1) == 0) {
          if (sVar3 != 0) {
            pcVar10 = (char *)(lVar15 + 9);
            lVar11 = -sVar13;
            do {
              if (*pcVar10 != *pcVar9) goto LAB_00b9efb0;
              pcVar10 = pcVar10 + 1;
              lVar11 = lVar11 + 1;
              pcVar9 = pcVar9 + 1;
            } while (lVar11 != 0);
          }
        }
        else if ((sVar3 != 0) && (iVar7 = memcmp(pvVar8,pcVar9,sVar3), iVar7 != 0))
        goto LAB_00b9efb0;
        lVar11 = *(long *)(*plVar1 + uVar21 * 8);
        *(long *)(param_1 + 0x120b0) = lVar11;
        FUN_00f0d75c(param_1 + 0x9bc8,lVar11 + 0x3ce0);
        bVar20 = *pbVar19;
        sVar16 = *(size_t *)(lVar15 + 0x10);
        bVar4 = *(byte *)(param_1 + 0x12638);
        sVar18 = *(size_t *)(param_1 + 0x12640);
        sVar13 = (size_t)(bVar20 >> 1);
        bVar22 = bVar4 & 1;
        sVar12 = (size_t)(bVar4 >> 1);
      }
LAB_00b9efb0:
      sVar3 = sVar13;
      if ((bVar20 & 1) != 0) {
        sVar3 = sVar16;
      }
      uVar23 = *(undefined4 *)(param_1 + 0x12650);
      uVar17 = *(undefined8 *)(*plVar1 + uVar21 * 8);
      if (bVar22 != 0) {
        sVar12 = sVar18;
      }
      bVar6 = false;
      if (sVar3 == sVar12) {
        pvVar8 = *(void **)(lVar14 + uVar21 * 0x38 + 0x18);
        if ((bVar20 & 1) == 0) {
          pvVar8 = (void *)(lVar15 + 9);
        }
        pcVar9 = (char *)(param_1 + 0x12639);
        if (bVar22 != 0) {
          pcVar9 = *(char **)(param_1 + 0x12648);
        }
        if ((bVar20 & 1) == 0) {
          if (sVar3 != 0) {
            pcVar10 = (char *)(lVar15 + 9);
            do {
              if (*pcVar10 != *pcVar9) {
                bVar6 = false;
                goto LAB_00b9f060;
              }
              sVar13 = sVar13 - 1;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            } while (sVar13 != 0);
          }
        }
        else if (sVar3 != 0) {
          iVar7 = memcmp(pvVar8,pcVar9,sVar3);
          bVar6 = iVar7 == 0;
          goto LAB_00b9f060;
        }
        bVar6 = true;
      }
LAB_00b9f060:
      FUN_00ae5f98(uVar23,uVar17,lVar14 + uVar21 * 0x38 + 0x20,pbVar19,bVar6,
                   *(undefined1 *)(lVar14 + uVar21 * 0x38 + 0x35));
      FUN_00ae6448(*(undefined4 *)(param_1 + 0x12650),DAT_0313a260,
                   *(undefined8 *)(*plVar1 + uVar21 * 8));
      FUN_00f023ec(param_1 + 0x43d0,*(undefined8 *)(*plVar1 + uVar21 * 8),1);
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(uint *)(param_1 + 0x12550));
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

