// functions/00b9d — 6 functions
#include "libGameKindred.h"




void FUN_00b9d0a0(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar13 = *param_2;
  uVar7 = FUN_00e6a474(uVar13);
  uVar8 = FUN_0091ed5c(uVar13,uVar7,0x12345678);
  uVar15 = *param_1;
  if (uVar15 == 0) {
    lVar10 = *(long *)(param_1 + 2);
    uVar16 = 0xffffffff;
  }
  else {
    lVar10 = *(long *)(param_1 + 2);
    uVar4 = 0;
    if (uVar15 != 0) {
      uVar4 = uVar8 / uVar15;
    }
    uVar4 = uVar8 - uVar4 * uVar15;
    while ((uVar16 = (ulong)uVar4, *(uint *)(lVar10 + uVar16 * 8) != uVar8 &&
           (*(int *)(lVar10 + uVar16 * 8 + 4) != -1))) {
      uVar12 = uVar15;
      if (0 < (int)uVar4) {
        uVar12 = uVar4;
      }
      uVar4 = uVar12 - 1;
    }
  }
  puVar14 = param_1 + 2;
  uVar15 = *(uint *)(lVar10 + uVar16 * 8 + 4);
  uVar17 = (ulong)uVar15;
  lVar10 = *(long *)(param_1 + 8);
  pbVar18 = (byte *)(lVar10 + uVar17 * 0x38);
  pvVar9 = *(void **)(pbVar18 + 0x30);
  if (pvVar9 != (void *)0x0) {
    lVar19 = lVar10 + uVar17 * 0x38;
    operator_delete__(pvVar9);
    *(undefined8 *)(lVar19 + 0x28) = 0;
    *(undefined8 *)(lVar19 + 0x30) = 0;
  }
  pvVar9 = *(void **)(lVar10 + uVar17 * 0x38 + 0x20);
  if (pvVar9 != (void *)0x0) {
    lVar19 = lVar10 + uVar17 * 0x38;
    operator_delete__(pvVar9);
    *(undefined8 *)(lVar19 + 0x18) = 0;
    *(undefined8 *)(lVar19 + 0x20) = 0;
  }
  if ((*pbVar18 & 1) != 0) {
    operator_delete(*(void **)(lVar10 + uVar17 * 0x38 + 0x10));
  }
  *(uint *)(lVar10 + uVar17 * 0x38) = param_1[10];
  pvVar9 = *(void **)(param_1 + 2);
  param_1[10] = uVar15;
  *(undefined4 *)((long)pvVar9 + uVar16 * 8 + 4) = 0xffffffff;
  while( true ) {
    uVar15 = (uint)uVar16;
    if ((int)uVar15 < 1) {
      uVar15 = *param_1;
    }
    uVar16 = (ulong)(uVar15 - 1);
    piVar11 = (int *)((long)pvVar9 + uVar16 * 8 + 4);
    iVar3 = *piVar11;
    if (iVar3 == -1) break;
    *piVar11 = -1;
    uVar15 = param_1[4];
    uVar8 = *param_1;
    uVar4 = *(uint *)((long)pvVar9 + uVar16 * 8);
    param_1[4] = uVar15 + 1;
    if (uVar8 >> 1 < uVar15 + 1) {
      local_78 = 0;
      local_70 = (void *)0x0;
      FUN_009348c8(&local_78,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
      uVar15 = *param_1;
      uVar12 = uVar15 - 1;
      uVar8 = (uint)local_78;
      if ((int)uVar12 < 0) {
        pvVar9 = *(void **)puVar14;
      }
      else {
        pvVar9 = *(void **)puVar14;
        do {
          iVar1 = *(int *)((long)pvVar9 + (ulong)uVar12 * 8 + 4);
          if (iVar1 != -1) {
            uVar15 = *(uint *)((long)pvVar9 + (ulong)uVar12 * 8);
            uVar5 = 0;
            if ((uint)local_78 != 0) {
              uVar5 = uVar15 / (uint)local_78;
            }
            uVar17 = (ulong)(uVar15 - uVar5 * (uint)local_78);
            piVar11 = (int *)((long)local_70 + uVar17 * 8 + 4);
            iVar2 = *piVar11;
            while (iVar2 != -1) {
              uVar5 = (uint)local_78;
              if (0 < (int)(uint)uVar17) {
                uVar5 = (uint)uVar17;
              }
              uVar17 = (ulong)(uVar5 - 1);
              piVar11 = (int *)((long)local_70 + uVar17 * 8 + 4);
              iVar2 = *piVar11;
            }
            *(uint *)((long)local_70 + uVar17 * 8) = uVar15;
            *piVar11 = iVar1;
          }
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
        uVar15 = *param_1;
      }
      *(undefined8 *)param_1 = local_78;
      local_78 = CONCAT44(param_1[1],uVar15);
      *(void **)puVar14 = local_70;
      if (pvVar9 == (void *)0x0) {
        pvVar9 = local_70;
        local_70 = (void *)0;
      }
      else {
        local_70 = pvVar9;
        operator_delete__(pvVar9);
        local_78 = 0;
        local_70 = (void *)0x0;
        uVar8 = *param_1;
        pvVar9 = (void *)*(long *)(param_1 + 2);
      }
    }
    uVar15 = 0;
    if (uVar8 != 0) {
      uVar15 = uVar4 / uVar8;
    }
    uVar17 = (ulong)(uVar4 - uVar15 * uVar8);
    piVar11 = (int *)((long)pvVar9 + uVar17 * 8 + 4);
    iVar1 = *piVar11;
    while (iVar1 != -1) {
      uVar15 = uVar8;
      if (0 < (int)(uint)uVar17) {
        uVar15 = (uint)uVar17;
      }
      uVar17 = (ulong)(uVar15 - 1);
      piVar11 = (int *)((long)pvVar9 + uVar17 * 8 + 4);
      iVar1 = *piVar11;
    }
    *(uint *)((long)pvVar9 + uVar17 * 8) = uVar4;
    *piVar11 = iVar3;
  }
  param_1[4] = param_1[4] - 1;
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b9d38c(long param_1)

{
  FUN_00b9fc80(param_1 + 0x12570,0);
  return;
}




undefined8 FUN_00b9d3a0(void)

{
  return 0;
}




void FUN_00b9d3a8(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x120b0) != 0) {
    FUN_008fcdb8(param_1,*(long *)(param_2 + 0x120b0) + 0x3d28);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




void FUN_00b9d3d4(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x120b0) != 0) {
    FUN_008fcdb8(param_1,*(long *)(param_2 + 0x120b0) + 0x3d60);
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




void FUN_00b9d400(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  size_t sVar5;
  size_t sVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  undefined8 uVar20;
  char *pcVar21;
  char *pcVar22;
  ulong *puVar23;
  short sVar24;
  ulong uVar25;
  byte *pbVar26;
  void *pvVar27;
  byte *pbVar28;
  uint uVar29;
  long lVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  long lVar33;
  char *pcVar34;
  size_t sVar35;
  size_t *psVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong uVar39;
  long lVar40;
  byte bVar41;
  size_t *psVar42;
  byte *pbVar43;
  size_t sVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined8 uVar48;
  uint local_d4;
  void *local_b8 [2];
  void *local_a8;
  ulong local_a0;
  void *local_98;
  char *local_90;
  void *local_88;
  long local_80;
  
  lVar9 = tpidr_el0;
  local_80 = *(long *)(lVar9 + 0x28);
  FUN_00b9ed98();
  local_d4 = FUN_00b9f188(param_1);
  lVar17 = FUN_009580b8();
  lVar18 = FUN_009580b8();
  FUN_00b91ae4(param_1);
  uVar15 = *(uint *)(param_1 + 0x12580);
  plVar1 = (long *)(param_1 + 0x12588);
  uVar13 = 0;
  do {
    uVar29 = uVar13;
    uVar25 = (ulong)uVar29;
    if (uVar15 <= uVar29) break;
    uVar13 = uVar29 + 1;
  } while (*(int *)(*plVar1 + uVar25 * 8 + 4) == -1);
  if (uVar15 != uVar29) {
    do {
      lVar40 = *(long *)(param_1 + 0x125a0);
      uVar37 = (ulong)*(uint *)(*plVar1 + uVar25 * 8 + 4);
      pbVar43 = (byte *)(lVar40 + uVar37 * 0x38);
      uVar13 = FUN_00b943e0(param_1,pbVar43);
      pvVar19 = operator_new(0x3dc8);
      FUN_00ae2fb0();
      local_b8[0] = pvVar19;
      if ((local_d4 & 1) == 0) {
        bVar7 = *pbVar43;
        psVar42 = (size_t *)(lVar40 + uVar37 * 0x38 + 8);
        bVar8 = *(byte *)(param_1 + 0x12638);
        sVar44 = (size_t)(bVar8 >> 1);
        sVar35 = *(size_t *)(param_1 + 0x12640);
        sVar6 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar6 = *psVar42;
        }
        sVar5 = sVar44;
        if ((bVar8 & 1) != 0) {
          sVar5 = sVar35;
        }
        bVar41 = bVar8 & 1;
        if (sVar6 == sVar5) {
          pbVar26 = *(byte **)(lVar40 + uVar37 * 0x38 + 0x10);
          if ((bVar7 & 1) == 0) {
            pbVar26 = pbVar43 + 1;
          }
          pbVar28 = (byte *)(param_1 + 0x12639);
          if ((bVar8 & 1) != 0) {
            pbVar28 = *(byte **)(param_1 + 0x12648);
          }
          if ((bVar7 & 1) == 0) {
            if (sVar6 != 0) {
              lVar33 = -(ulong)(bVar7 >> 1);
              pbVar26 = pbVar43;
              do {
                pbVar26 = pbVar26 + 1;
                if (*pbVar26 != *pbVar28) goto LAB_00b9d708;
                lVar33 = lVar33 + 1;
                pbVar28 = pbVar28 + 1;
              } while (lVar33 != 0);
            }
          }
          else if ((sVar6 != 0) && (iVar16 = memcmp(pbVar26,pbVar28,sVar6), iVar16 != 0)) {
LAB_00b9d708:
            local_d4 = 0;
            goto LAB_00b9d724;
          }
          *(void **)(param_1 + 0x120b0) = pvVar19;
          local_d4 = 1;
        }
        else {
          local_d4 = 0;
        }
      }
      else {
        bVar7 = *(byte *)(param_1 + 0x12638);
        sVar35 = *(size_t *)(param_1 + 0x12640);
        psVar42 = (size_t *)(lVar40 + uVar37 * 0x38 + 8);
        bVar41 = bVar7 & 1;
        sVar44 = (size_t)(bVar7 >> 1);
        local_d4 = 1;
      }
LAB_00b9d724:
      bVar7 = *pbVar43;
      lVar33 = lVar40 + uVar37 * 0x38;
      uVar46 = *(undefined4 *)(param_1 + 0x12650);
      sVar6 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        sVar6 = *psVar42;
      }
      if (bVar41 != 0) {
        sVar44 = sVar35;
      }
      bVar12 = false;
      if (sVar6 == sVar44) {
        pbVar26 = *(byte **)(lVar40 + uVar37 * 0x38 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar26 = pbVar43 + 1;
        }
        pbVar28 = (byte *)(param_1 + 0x12639);
        if (bVar41 != 0) {
          pbVar28 = *(byte **)(param_1 + 0x12648);
        }
        if ((bVar7 & 1) == 0) {
          if (sVar6 != 0) {
            lVar30 = -(ulong)(bVar7 >> 1);
            pbVar26 = pbVar43;
            do {
              pbVar26 = pbVar26 + 1;
              if (*pbVar26 != *pbVar28) {
                bVar12 = false;
                goto LAB_00b9d7e0;
              }
              lVar30 = lVar30 + 1;
              pbVar28 = pbVar28 + 1;
            } while (lVar30 != 0);
          }
        }
        else if (sVar6 != 0) {
          iVar16 = memcmp(pbVar26,pbVar28,sVar6);
          bVar12 = iVar16 == 0;
          goto LAB_00b9d7e0;
        }
        bVar12 = true;
      }
LAB_00b9d7e0:
      if (uVar13 == 0xffffffff) {
        bVar10 = false;
        uVar31 = 0;
      }
      else {
        lVar30 = *(long *)(param_1 + 0x12578) + (ulong)uVar13 * 0x50;
        uVar31 = *(undefined4 *)(lVar30 + 0x18);
        bVar10 = *(char *)(lVar30 + 0x4c) != '\0';
      }
      FUN_00ae3e70(0,uVar46,pvVar19,lVar33 + 0x18,1,0,0,0,0,pbVar43,lVar33 + 0x28,&DAT_03210450,
                   &DAT_0320ffa8,&DAT_03210450,&DAT_03210450,&DAT_0320ffa8,bVar12,0,1,bVar10,uVar31,
                   1,0,0,0);
      bVar7 = *pbVar43;
      bVar8 = *(byte *)(param_1 + 0x125e0);
      uVar39 = (ulong)(bVar7 >> 1);
      sVar6 = uVar39;
      if ((bVar7 & 1) != 0) {
        sVar6 = *psVar42;
      }
      sVar44 = (ulong)(bVar8 >> 1);
      if ((bVar8 & 1) != 0) {
        sVar44 = *(size_t *)(param_1 + 0x125e8);
      }
      if (sVar6 == sVar44) {
        pbVar26 = *(byte **)(lVar40 + uVar37 * 0x38 + 0x10);
        if ((bVar7 & 1) == 0) {
          pbVar26 = pbVar43 + 1;
        }
        pbVar28 = (byte *)(param_1 + 0x125e1);
        if ((bVar8 & 1) != 0) {
          pbVar28 = *(byte **)(param_1 + 0x125f0);
        }
        if ((bVar7 & 1) == 0) {
          if (sVar6 != 0) {
            lVar33 = -uVar39;
            pbVar26 = pbVar43;
            do {
              pbVar26 = pbVar26 + 1;
              if (*pbVar26 != *pbVar28) goto LAB_00b9d938;
              lVar33 = lVar33 + 1;
              pbVar28 = pbVar28 + 1;
            } while (lVar33 != 0);
          }
        }
        else if ((sVar6 != 0) && (iVar16 = memcmp(pbVar26,pbVar28,sVar6), iVar16 != 0))
        goto LAB_00b9d938;
        pvVar19 = local_b8[0];
        lVar40 = FUN_009580b8();
        FUN_00e70570(&local_a0,lVar40 + 0x50c8);
        puVar23 = &DAT_03210450;
        puVar38 = &local_a0;
LAB_00b9da0c:
        FUN_00ae6d08(pvVar19,puVar38,puVar23);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
          local_a0 = 0;
          local_98 = (void *)0x0;
        }
      }
      else {
LAB_00b9d938:
        bVar8 = *(byte *)(param_1 + 0x125f8);
        sVar44 = (ulong)(bVar8 >> 1);
        if ((bVar8 & 1) != 0) {
          sVar44 = *(size_t *)(param_1 + 0x12600);
        }
        if (sVar6 == sVar44) {
          pbVar26 = *(byte **)(lVar40 + uVar37 * 0x38 + 0x10);
          if ((bVar7 & 1) == 0) {
            pbVar26 = pbVar43 + 1;
          }
          pbVar28 = (byte *)(param_1 + 0x125f9);
          if ((bVar8 & 1) != 0) {
            pbVar28 = *(byte **)(param_1 + 0x12608);
          }
          if ((bVar7 & 1) == 0) {
            if (sVar6 != 0) {
              lVar40 = -uVar39;
              do {
                pbVar43 = pbVar43 + 1;
                if (*pbVar43 != *pbVar28) goto LAB_00b9da24;
                lVar40 = lVar40 + 1;
                pbVar28 = pbVar28 + 1;
              } while (lVar40 != 0);
            }
          }
          else if ((sVar6 != 0) && (iVar16 = memcmp(pbVar26,pbVar28,sVar6), iVar16 != 0))
          goto LAB_00b9da24;
          pvVar19 = local_b8[0];
          lVar40 = FUN_009580b8();
          FUN_00e70570(&local_a0,lVar40 + 0x5308);
          puVar38 = &DAT_03210450;
          puVar23 = &local_a0;
          goto LAB_00b9da0c;
        }
      }
LAB_00b9da24:
      FUN_00ae6448(*(undefined4 *)(param_1 + 0x12650),DAT_0313a260,local_b8[0]);
      FUN_00b9f100(param_1 + 0x12080,local_b8);
      FUN_00f023ec(param_1 + 0x59f0,local_b8[0],1);
      uVar13 = (uint)uVar25;
      do {
        uVar13 = uVar13 + 1;
        uVar25 = (ulong)uVar13;
        if (*(uint *)(param_1 + 0x12580) <= uVar13) break;
      } while (*(int *)(*plVar1 + uVar25 * 8 + 4) == -1);
    } while (uVar15 != uVar13);
  }
  if (*(uint *)(param_1 + 0x12530) == 0) {
    iVar16 = 0;
  }
  else {
    pbVar43 = (byte *)(param_1 + 0x12638);
    psVar42 = (size_t *)(param_1 + 0x12640);
    puVar2 = (undefined8 *)(param_1 + 0x12648);
    pcVar21 = (char *)(param_1 + 0x12639);
    puVar3 = (undefined4 *)(param_1 + 0x12650);
    uVar25 = 0;
    iVar16 = 0;
    do {
      pvVar19 = operator_new(0x3dc8);
      FUN_00ae2fb0();
      local_90 = (char *)0x0;
      lVar40 = *(long *)(param_1 + 0x12538);
      local_a0 = 0;
      local_98 = (void *)0x0;
      puVar38 = (ulong *)(lVar40 + uVar25 * 0x188);
      local_88 = pvVar19;
      if ((*(long **)(param_1 + 0x11fb0) == (long *)0x0) ||
         (iVar14 = (**(code **)(**(long **)(param_1 + 0x11fb0) + 0x40))(), iVar14 != 2)) {
        FUN_00ac3418(param_1 + 0xdf40,lVar40 + uVar25 * 0x188 + 0x20,&local_a0);
      }
      else {
        FUN_008fce60(&local_a0,lVar40 + uVar25 * 0x188 + 8);
      }
      lVar33 = lVar40 + uVar25 * 0x188;
      pbVar26 = (byte *)(lVar33 + 8);
      bVar7 = *pbVar26;
      psVar36 = (size_t *)(lVar33 + 0x10);
      bVar8 = *pbVar43;
      sVar6 = (ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        sVar6 = *psVar36;
      }
      sVar44 = (ulong)(bVar8 >> 1);
      if ((bVar8 & 1) != 0) {
        sVar44 = *psVar42;
      }
      if (sVar6 == sVar44) {
        pvVar19 = *(void **)(lVar40 + uVar25 * 0x188 + 0x18);
        if ((bVar7 & 1) == 0) {
          pvVar19 = (void *)(lVar33 + 9);
        }
        pcVar34 = pcVar21;
        if ((bVar8 & 1) != 0) {
          pcVar34 = (char *)*puVar2;
        }
        if ((bVar7 & 1) == 0) {
          if (sVar6 != 0) {
            pcVar22 = (char *)(lVar33 + 9);
            lVar30 = -(ulong)(bVar7 >> 1);
            do {
              if (*pcVar22 != *pcVar34) goto LAB_00b9de4c;
              pcVar22 = pcVar22 + 1;
              lVar30 = lVar30 + 1;
              pcVar34 = pcVar34 + 1;
            } while (lVar30 != 0);
          }
        }
        else if ((sVar6 != 0) && (iVar14 = memcmp(pvVar19,pcVar34,sVar6), iVar14 != 0))
        goto LAB_00b9de4c;
        *(long *)(param_1 + 0x120b0) = (long)local_88;
        if ((int)*puVar38 < 0) {
          pcVar34 = "generic_star";
        }
        else {
          pcVar34 = "generic_star_outline";
        }
        FUN_00f0e578(param_1 + 0xa1d0,pcVar34);
        iVar14 = *(int *)(lVar40 + uVar25 * 0x188 + 0xac);
        lVar30 = *(long *)(param_1 + 0x120b0);
        if (*(int *)(lVar30 + 0x3d78) != iVar14) {
          *(int *)(lVar30 + 0x3d78) = iVar14;
        }
        local_d4 = 1;
      }
LAB_00b9de4c:
      uVar15 = FUN_00b943e0(param_1,&local_a0);
      pvVar19 = local_88;
      uVar37 = (ulong)uVar15;
      if ((uVar15 == 0xffffffff) ||
         (lVar30 = *(long *)(param_1 + 0x12578), *(int *)(lVar30 + uVar37 * 0x50 + 0x38) == 0)) {
        uVar39 = *puVar38;
        if ((uVar39 & 0xffff) != 0) {
          bVar12 = false;
          goto LAB_00b9dec0;
        }
        FUN_00b9f100(param_1 + 0x12070,&local_88);
        pvVar19 = local_88;
        bVar7 = *pbVar43;
        uVar47 = *puVar3;
        bVar8 = *pbVar26;
        lVar30 = lVar40 + uVar25 * 0x188;
        uVar37 = *puVar38;
        uVar46 = *(undefined4 *)(lVar30 + 0xe8);
        uVar31 = *(undefined4 *)(lVar30 + 0xb8);
        uVar48 = *(undefined8 *)(lVar30 + 0xa0);
        sVar6 = (ulong)(bVar8 >> 1);
        if ((bVar8 & 1) != 0) {
          sVar6 = *psVar36;
        }
        sVar44 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar44 = *psVar42;
        }
        bVar12 = false;
        uVar15 = (uint)uVar37;
        if (sVar6 == sVar44) {
          pvVar27 = *(void **)(lVar40 + uVar25 * 0x188 + 0x18);
          if ((bVar8 & 1) == 0) {
            pvVar27 = (void *)(lVar33 + 9);
          }
          pcVar34 = pcVar21;
          if ((bVar7 & 1) != 0) {
            pcVar34 = (char *)*puVar2;
          }
          if ((bVar8 & 1) == 0) {
            if (sVar6 != 0) {
              pcVar22 = (char *)(lVar33 + 9);
              lVar33 = -(ulong)(bVar8 >> 1);
              do {
                if (*pcVar22 != *pcVar34) {
                  bVar12 = false;
                  goto LAB_00b9e484;
                }
                pcVar22 = pcVar22 + 1;
                lVar33 = lVar33 + 1;
                pcVar34 = pcVar34 + 1;
              } while (lVar33 != 0);
            }
          }
          else if (sVar6 != 0) {
            iVar14 = memcmp(pvVar27,pcVar34,sVar6);
            bVar12 = iVar14 == 0;
            goto LAB_00b9e484;
          }
          bVar12 = true;
        }
LAB_00b9e484:
        lVar40 = lVar40 + uVar25 * 0x188;
        FUN_00ae3e70(uVar48,uVar47,pvVar19,lVar30 + 0x20,uVar15 & 0xffff,uVar15 >> 0x18 & 0x7f,
                     uVar46,uVar31,uVar15 >> 0x1f,pbVar26,lVar30 + 0x30,lVar30 + 0x40,lVar30 + 0x50,
                     lVar30 + 0x68,lVar30 + 0x78,lVar30 + 0x88,bVar12,(byte)(uVar37 >> 0x20) & 1,0,0
                     ,0,0,uVar15 >> 0x10 & 0xff,*(undefined4 *)(lVar40 + 0xa8),
                     *(undefined4 *)(lVar40 + 0xac));
        FUN_00ae6448(*puVar3,DAT_0313a260,local_88);
        FUN_00f023ec(param_1 + 0x8630,local_88,1);
      }
      else {
        uVar39 = *puVar38;
        bVar12 = true;
        iVar16 = iVar16 + (uint)*(byte *)(lVar30 + uVar37 * 0x50 + 0x4c);
LAB_00b9dec0:
        bVar7 = *pbVar43;
        uVar47 = *puVar3;
        bVar8 = *pbVar26;
        lVar30 = lVar40 + uVar25 * 0x188;
        uVar46 = *(undefined4 *)(lVar30 + 0xe8);
        uVar31 = *(undefined4 *)(lVar30 + 0xb8);
        uVar48 = *(undefined8 *)(lVar30 + 0xa0);
        sVar6 = (ulong)(bVar8 >> 1);
        if ((bVar8 & 1) != 0) {
          sVar6 = *psVar36;
        }
        sVar44 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar44 = *psVar42;
        }
        bVar10 = false;
        uVar15 = (uint)uVar39;
        if (sVar6 == sVar44) {
          pvVar27 = *(void **)(lVar40 + uVar25 * 0x188 + 0x18);
          if ((bVar8 & 1) == 0) {
            pvVar27 = (void *)(lVar33 + 9);
          }
          pcVar34 = pcVar21;
          if ((bVar7 & 1) != 0) {
            pcVar34 = (char *)*puVar2;
          }
          if ((bVar8 & 1) == 0) {
            if (sVar6 != 0) {
              pcVar22 = (char *)(lVar33 + 9);
              lVar33 = -(ulong)(bVar8 >> 1);
              do {
                if (*pcVar22 != *pcVar34) {
                  bVar10 = false;
                  goto joined_r0x00b9e30c;
                }
                pcVar22 = pcVar22 + 1;
                lVar33 = lVar33 + 1;
                pcVar34 = pcVar34 + 1;
              } while (lVar33 != 0);
            }
          }
          else if (sVar6 != 0) {
            iVar14 = memcmp(pvVar27,pcVar34,sVar6);
            bVar10 = iVar14 == 0;
            goto LAB_00b9e0d0;
          }
          bVar10 = true;
joined_r0x00b9e30c:
          if (bVar12) goto LAB_00b9e0d4;
LAB_00b9e104:
          bVar11 = false;
          uVar32 = 0;
        }
        else {
LAB_00b9e0d0:
          if (!bVar12) goto LAB_00b9e104;
LAB_00b9e0d4:
          lVar33 = *(long *)(param_1 + 0x12578) + uVar37 * 0x50;
          uVar32 = *(undefined4 *)(lVar33 + 0x18);
          bVar11 = *(char *)(lVar33 + 0x4c) != '\0';
        }
        lVar33 = lVar40 + uVar25 * 0x188;
        FUN_00ae3e70(uVar48,uVar47,pvVar19,lVar30 + 0x20,uVar15 & 0xffff,uVar15 >> 0x18 & 0x7f,
                     uVar46,uVar31,uVar15 >> 0x1f,pbVar26,lVar30 + 0x30,lVar30 + 0x40,
                     (byte *)(lVar30 + 0x50),lVar30 + 0x68,lVar30 + 0x78,(byte *)(lVar30 + 0x88),
                     bVar10,(byte)(uVar39 >> 0x20) & 1,bVar12,bVar11,uVar32,0,uVar15 >> 0x10 & 0xff,
                     *(undefined4 *)(lVar33 + 0xa8),*(undefined4 *)(lVar33 + 0xac));
        sVar24 = (short)*puVar38;
        iVar14 = 0x41;
        if (*(int *)(lVar33 + 0x148) != -1) {
          iVar14 = *(int *)(lVar33 + 0x148);
        }
        if (sVar24 == 2) {
          lVar33 = lVar40 + uVar25 * 0x188;
          FUN_00ae6cb4(local_88,iVar14,lVar33 + 0x150,lVar33 + 0x160,lVar33 + 0x168);
          sVar24 = (short)*puVar38;
        }
        pvVar19 = local_88;
        if (sVar24 == 3) {
          lVar33 = lVar40 + uVar25 * 0x188;
          FUN_008fa54c(local_b8,&DAT_01e277f2);
          FUN_00ae6cb4(pvVar19,iVar14,lVar33 + 0x150,lVar33 + 0x160,local_b8);
          if (((ulong)local_b8[0] & 1) != 0) {
            operator_delete(local_a8);
          }
        }
        FUN_00ae6448(*puVar3,DAT_0313a260,local_88);
        if (bVar12) {
          FUN_00b9f100(param_1 + 0x12080,&local_88);
          FUN_00f023ec(param_1 + 0x59f0,local_88,1);
        }
        else {
          bVar7 = *(byte *)(lVar18 + 0x5490);
          if ((bVar7 & 1) == 0) {
            uVar37 = (ulong)(bVar7 >> 1);
          }
          else {
            uVar37 = *(ulong *)(lVar18 + 0x5498);
          }
          if (uVar37 == 0) {
LAB_00b9e324:
            bVar7 = *(byte *)(lVar17 + 0x5478);
            if ((bVar7 & 1) == 0) {
              if (bVar7 >> 1 != 0) {
LAB_00b9e348:
                bVar8 = *(byte *)(lVar30 + 0x50);
                sVar6 = (ulong)(bVar7 >> 1);
                if ((bVar7 & 1) != 0) {
                  sVar6 = *(size_t *)(lVar17 + 0x5480);
                }
                sVar44 = (ulong)(bVar8 >> 1);
                if ((bVar8 & 1) != 0) {
                  sVar44 = *(size_t *)(lVar40 + uVar25 * 0x188 + 0x58);
                }
                if (sVar6 == sVar44) {
                  pcVar34 = *(char **)(lVar40 + uVar25 * 0x188 + 0x60);
                  pcVar22 = (char *)(lVar17 + 0x5479);
                  if ((bVar7 & 1) != 0) {
                    pcVar22 = *(char **)(lVar17 + 0x5488);
                  }
                  if ((bVar8 & 1) == 0) {
                    pcVar34 = (char *)(lVar30 + 0x51);
                  }
                  if ((bVar7 & 1) == 0) {
                    if (sVar6 != 0) {
                      lVar40 = -(ulong)(bVar7 >> 1);
                      pcVar22 = (char *)(lVar17 + 0x5479);
                      do {
                        if (*pcVar22 != *pcVar34) goto LAB_00b9e444;
                        pcVar22 = pcVar22 + 1;
                        lVar40 = lVar40 + 1;
                        pcVar34 = pcVar34 + 1;
                      } while (lVar40 != 0);
                    }
                  }
                  else if ((sVar6 != 0) && (iVar14 = memcmp(pcVar22,pcVar34,sVar6), iVar14 != 0))
                  goto LAB_00b9e444;
                  FUN_00b9f100(param_1 + 0x12090,&local_88);
                  lVar40 = param_1 + 0x7010;
                  goto LAB_00b9e470;
                }
              }
            }
            else if (*(long *)(lVar17 + 0x5480) != 0) goto LAB_00b9e348;
LAB_00b9e444:
            FUN_00b9f100(param_1 + 0x12050,&local_88);
            lVar40 = param_1 + 0x6500;
          }
          else {
            bVar8 = *(byte *)(lVar30 + 0x88);
            sVar6 = (ulong)(bVar7 >> 1);
            if ((bVar7 & 1) != 0) {
              sVar6 = *(size_t *)(lVar18 + 0x5498);
            }
            sVar44 = (ulong)(bVar8 >> 1);
            if ((bVar8 & 1) != 0) {
              sVar44 = *(size_t *)(lVar40 + uVar25 * 0x188 + 0x90);
            }
            if (sVar6 != sVar44) goto LAB_00b9e324;
            pcVar34 = *(char **)(lVar40 + uVar25 * 0x188 + 0x98);
            pcVar22 = (char *)(lVar18 + 0x5491);
            if ((bVar7 & 1) != 0) {
              pcVar22 = *(char **)(lVar18 + 0x54a0);
            }
            if ((bVar8 & 1) == 0) {
              pcVar34 = (char *)(lVar30 + 0x89);
            }
            if ((bVar7 & 1) == 0) {
              if (sVar6 != 0) {
                lVar33 = -(ulong)(bVar7 >> 1);
                pcVar22 = (char *)(lVar18 + 0x5491);
                do {
                  if (*pcVar22 != *pcVar34) goto LAB_00b9e324;
                  pcVar22 = pcVar22 + 1;
                  lVar33 = lVar33 + 1;
                  pcVar34 = pcVar34 + 1;
                } while (lVar33 != 0);
              }
            }
            else if ((sVar6 != 0) && (iVar14 = memcmp(pcVar22,pcVar34,sVar6), iVar14 != 0))
            goto LAB_00b9e324;
            FUN_00b9f100(param_1 + 0x120a0,&local_88);
            lVar40 = param_1 + 0x7b20;
          }
LAB_00b9e470:
          FUN_00f023ec(lVar40,local_88,1);
        }
      }
      bVar7 = *(byte *)(param_1 + 0x125c8);
      pvVar19 = (void *)(ulong)((byte)local_a0 >> 1);
      if ((local_a0 & 1) != 0) {
        pvVar19 = local_98;
      }
      pvVar27 = (void *)(ulong)(bVar7 >> 1);
      if ((bVar7 & 1) != 0) {
        pvVar27 = *(void **)(param_1 + 0x125d0);
      }
      if (pvVar19 == pvVar27) {
        pcVar34 = (char *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          pcVar34 = local_90;
        }
        pcVar22 = (char *)(param_1 + 0x125c9);
        if ((bVar7 & 1) != 0) {
          pcVar22 = *(char **)(param_1 + 0x125d8);
        }
        if ((local_a0 & 1) == 0) {
          if (pvVar19 != (void *)0x0) {
            lVar40 = -(long)(ulong)((byte)local_a0 >> 1);
            pcVar34 = (char *)((ulong)&local_a0 | 1);
            do {
              if (*pcVar34 != *pcVar22) goto LAB_00b9e5d4;
              pcVar34 = pcVar34 + 1;
              lVar40 = lVar40 + 1;
              pcVar22 = pcVar22 + 1;
            } while (lVar40 != 0);
          }
LAB_00b9e5b4:
          FUN_00b9f588(param_1,puVar38);
          goto LAB_00b9e5c8;
        }
        if ((pvVar19 == (void *)0x0) ||
           (iVar14 = memcmp(pcVar34,pcVar22,(size_t)pvVar19), iVar14 == 0)) goto LAB_00b9e5b4;
LAB_00b9e5cc:
        operator_delete(local_90);
      }
      else {
LAB_00b9e5c8:
        if (((byte)local_a0 & 1) != 0) goto LAB_00b9e5cc;
      }
LAB_00b9e5d4:
      uVar25 = uVar25 + 1;
    } while (uVar25 < *(uint *)(param_1 + 0x12530));
  }
  if (*(uint *)(param_1 + 0x12570) == 0) {
    iVar14 = 0;
  }
  else {
    uVar25 = 0;
    iVar14 = 0;
    pbVar43 = (byte *)(*(long *)(param_1 + 0x12578) + 0x4c);
    do {
      uVar25 = uVar25 + 1;
      iVar14 = iVar14 + (uint)*pbVar43;
      pbVar43 = pbVar43 + 0x50;
    } while (uVar25 < *(uint *)(param_1 + 0x12570));
  }
  *(int *)(param_1 + 0x12664) = iVar14 - iVar16;
  puVar4 = (uint *)(param_1 + 0x973c);
  if (iVar14 - iVar16 == 0) {
    *puVar4 = *puVar4 & 0xfffffffb;
    *(uint *)(param_1 + 0x982c) = *(uint *)(param_1 + 0x982c) & 0xfffffffb;
  }
  else {
    *puVar4 = *puVar4 | 4;
    *(uint *)(param_1 + 0x982c) = *(uint *)(param_1 + 0x982c) | 4;
    FUN_00e70510(&local_a0);
    FUN_00e70e18(&local_a0,&DAT_01bb6d43,*(int *)(param_1 + 0x12664));
    FUN_00f0d75c(param_1 + 0x97a8,&local_a0);
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
  }
  pbVar43 = (byte *)(param_1 + 0x125c8);
  bVar7 = *pbVar43;
  bVar8 = *(byte *)(param_1 + 0x125e0);
  uVar25 = (ulong)(bVar7 >> 1);
  sVar6 = uVar25;
  if ((bVar7 & 1) != 0) {
    sVar6 = *(size_t *)(param_1 + 0x125d0);
  }
  sVar44 = (ulong)(bVar8 >> 1);
  if ((bVar8 & 1) != 0) {
    sVar44 = *(size_t *)(param_1 + 0x125e8);
  }
  if (sVar6 == sVar44) {
    pvVar19 = *(void **)(param_1 + 0x125d8);
    pbVar26 = *(byte **)(param_1 + 0x125f0);
    if ((bVar7 & 1) == 0) {
      pvVar19 = (void *)(param_1 + 0x125c9);
    }
    if ((bVar8 & 1) == 0) {
      pbVar26 = (byte *)(param_1 + 0x125e1);
    }
    if ((bVar7 & 1) == 0) {
      if (sVar6 != 0) {
        lVar17 = -uVar25;
        pbVar28 = pbVar43;
        do {
          pbVar28 = pbVar28 + 1;
          if (*pbVar28 != *pbVar26) goto LAB_00b9e794;
          lVar17 = lVar17 + 1;
          pbVar26 = pbVar26 + 1;
        } while (lVar17 != 0);
      }
    }
    else if ((sVar6 != 0) && (iVar16 = memcmp(pvVar19,pbVar26,sVar6), iVar16 != 0))
    goto LAB_00b9e794;
  }
  else {
LAB_00b9e794:
    bVar8 = *(byte *)(param_1 + 0x125f8);
    sVar44 = (ulong)(bVar8 >> 1);
    if ((bVar8 & 1) != 0) {
      sVar44 = *(size_t *)(param_1 + 0x12600);
    }
    if (sVar6 != sVar44) goto LAB_00b9e91c;
    pvVar19 = *(void **)(param_1 + 0x125d8);
    pbVar26 = *(byte **)(param_1 + 0x12608);
    if ((bVar7 & 1) == 0) {
      pvVar19 = (void *)(param_1 + 0x125c9);
    }
    if ((bVar8 & 1) == 0) {
      pbVar26 = (byte *)(param_1 + 0x125f9);
    }
    if ((bVar7 & 1) == 0) {
      if (sVar6 != 0) {
        lVar17 = -uVar25;
        do {
          pbVar43 = pbVar43 + 1;
          if (*pbVar43 != *pbVar26) goto LAB_00b9e91c;
          lVar17 = lVar17 + 1;
          pbVar26 = pbVar26 + 1;
        } while (lVar17 != 0);
      }
    }
    else if ((sVar6 != 0) && (iVar16 = memcmp(pvVar19,pbVar26,sVar6), iVar16 != 0))
    goto LAB_00b9e91c;
  }
  uVar25 = FUN_009580c4();
  if ((uVar25 & 1) != 0) {
    FUN_009580b8();
    dVar45 = (double)FUN_00961684();
    lVar17 = param_1 + 0xdf40;
    if (dVar45 <= 0.0) {
      FUN_00ac13a4(lVar17,1);
      uVar48 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xeab8) & 1) * 0x130 + 0xe928);
      uVar20 = FUN_00e6ce7c("MENU_FRIENDS_PLAYER_BANNED",0);
      uVar25 = FUN_00e70b34(uVar48,uVar20);
      if ((uVar25 & 1) == 0) goto LAB_00b9e91c;
      pcVar21 = "MENU_CHAT_ENTER_YOUR_CHAT";
    }
    else {
      FUN_00ac13a4(lVar17,0);
      uVar48 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0xeab8) & 1) * 0x130 + 0xe928);
      uVar20 = FUN_00e6ce7c("MENU_FRIENDS_PLAYER_BANNED",0);
      uVar25 = FUN_00e70b88(uVar48,uVar20);
      if ((uVar25 & 1) == 0) goto LAB_00b9e91c;
      pcVar21 = "MENU_FRIENDS_PLAYER_BANNED";
    }
    uVar48 = FUN_00e6ce7c(pcVar21,0);
    FUN_00ac1418(lVar17,uVar48,0);
  }
LAB_00b9e91c:
  plVar1 = (long *)(param_1 + 0x120b0);
  if (*plVar1 != 0) {
    uVar48 = FUN_00f08be8(param_1 + 0x9c98);
    uVar25 = FUN_00e70b88(uVar48,*plVar1 + 0x3ce0);
    if ((uVar25 & 1) != 0) {
      FUN_00b9c524(param_1,*plVar1,1);
    }
  }
  FUN_00b9f910(param_1);
  *(uint *)(param_1 + 0x9ad4) =
       *(uint *)(param_1 + 0x9ad4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x9ad4) & 3 | (local_d4 & 1) << 2;
  if (*(long *)(lVar9 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

