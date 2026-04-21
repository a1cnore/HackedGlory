// functions/00af3 — 10 functions
#include "libGameKindred.h"




void FUN_00af3418(long param_1,uint param_2,undefined4 param_3)

{
  long *plVar1;
  
  if (((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1a28))) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x1a30) + (ulong)param_2 * 8), plVar1 != (long *)0x0))
  {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00af3464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_3);
    return;
  }
  return;
}




void FUN_00af3474(long param_1)

{
  if ((*(char *)(param_1 + 0x1aed) == '\0') && (*(int *)(param_1 + 0x1a28) != 0)) {
    FUN_00af1fb4(param_1);
  }
  FUN_00af1e10(param_1);
  return;
}




void FUN_00af34b0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00af455c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x48;
  *(undefined4 *)(lVar4 + -0x48) = *param_2;
  FUN_00af4108(lVar4 + -0x40,param_2 + 2);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 6);
  *(undefined8 *)(lVar4 + -0xb) = *(undefined8 *)((long)param_2 + 0x3d);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_00af3564(long param_1,uint *param_2)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  void *__s1;
  undefined4 uVar19;
  byte *pbVar20;
  float fVar21;
  float fVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  uVar10 = FUN_0092ea9c();
  pbVar20 = (byte *)(param_1 + 0x1ad0);
  fVar22 = 0.6;
  bVar5 = *pbVar20;
  fVar21 = 0.75;
  if ((uVar10 & 1) == 0) {
    fVar21 = fVar22;
  }
  sVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x1ad8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    __s1 = *(void **)(param_1 + 0x1ae0);
    if ((bVar5 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x1ad1);
    }
    pbVar15 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar15 = &DAT_0320ffa9;
    }
    if ((bVar5 & 1) == 0) {
      if (sVar1 != 0) {
        pbVar18 = (byte *)(param_1 + 0x1ad1);
        lVar14 = -(ulong)(bVar5 >> 1);
        do {
          if (*pbVar18 != *pbVar15) goto LAB_00af3658;
          pbVar18 = pbVar18 + 1;
          lVar14 = lVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while (lVar14 != 0);
      }
      goto LAB_00af3668;
    }
    if ((sVar1 == 0) || (iVar9 = memcmp(__s1,pbVar15,sVar1), iVar9 == 0)) goto LAB_00af3668;
  }
LAB_00af3658:
  FUN_008fce60(pbVar20,&DAT_0320ffa8);
LAB_00af3668:
  FUN_008fce60(pbVar20,param_2 + 4);
  FUN_00af07b8(param_1);
  *(uint *)(param_1 + 0x1784) = *(uint *)(param_1 + 0x1784) | 4;
  *(undefined1 *)(param_1 + 0x1aed) = 0;
  uVar3 = *param_2;
  if (uVar3 != 0) {
    uVar10 = 0;
    do {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
      lVar14 = *(long *)(param_2 + 2);
      pbVar20 = (byte *)(lVar14 + uVar10 * 0x70);
      bVar5 = pbVar20[0x38];
      uVar8 = (ulong)(bVar5 >> 1);
      sVar1 = uVar8;
      if ((bVar5 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar20 + 0x40);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (sVar1 == sVar2) {
        pbVar15 = *(byte **)(lVar14 + uVar10 * 0x70 + 0x48);
        if ((bVar5 & 1) == 0) {
          pbVar15 = pbVar20 + 0x39;
        }
        pbVar18 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pbVar18 = &DAT_0320ffa9;
        }
        if ((bVar5 & 1) == 0) {
          if (sVar1 != 0) {
            pbVar15 = pbVar20 + 0x39;
            lVar16 = -uVar8;
            do {
              if (*pbVar15 != *pbVar18) goto LAB_00af3780;
              pbVar15 = pbVar15 + 1;
              lVar16 = lVar16 + 1;
              pbVar18 = pbVar18 + 1;
            } while (lVar16 != 0);
          }
        }
        else if ((sVar1 != 0) && (iVar9 = memcmp(pbVar15,pbVar18,sVar1), iVar9 != 0))
        goto LAB_00af3780;
LAB_00af3824:
        FUN_008fce60(&local_90,pbVar20);
        lVar14 = *(long *)(param_2 + 2);
        uVar19 = 0;
        puVar17 = (undefined4 *)(lVar14 + uVar10 * 0x70 + 0x30);
      }
      else {
LAB_00af3780:
        bVar6 = *pbVar20;
        sVar2 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar2 = *(size_t *)(lVar14 + uVar10 * 0x70 + 8);
        }
        if (sVar1 == sVar2) {
          lVar14 = lVar14 + uVar10 * 0x70;
          pbVar18 = *(byte **)(lVar14 + 0x48);
          pbVar15 = *(byte **)(lVar14 + 0x10);
          if ((bVar5 & 1) == 0) {
            pbVar18 = pbVar20 + 0x39;
          }
          if ((bVar6 & 1) == 0) {
            pbVar15 = pbVar20 + 1;
          }
          if ((bVar5 & 1) == 0) {
            if (sVar1 != 0) {
              pbVar18 = pbVar20 + 0x39;
              lVar14 = -uVar8;
              do {
                if (*pbVar18 != *pbVar15) goto LAB_00af3804;
                pbVar18 = pbVar18 + 1;
                lVar14 = lVar14 + 1;
                pbVar15 = pbVar15 + 1;
              } while (lVar14 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar9 = memcmp(pbVar18,pbVar15,sVar1), iVar9 != 0))
          goto LAB_00af3804;
          goto LAB_00af3824;
        }
LAB_00af3804:
        FUN_008fce60(&local_90,pbVar20 + 0x38);
        lVar14 = *(long *)(param_2 + 2);
        uVar19 = 1;
        puVar17 = (undefined4 *)(lVar14 + uVar10 * 0x70 + 0x68);
      }
      lVar14 = lVar14 + uVar10 * 0x70;
      uVar4 = *puVar17;
      pbVar20 = (byte *)(lVar14 + 0x18);
      bVar5 = *pbVar20;
      uVar8 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar8 = *(ulong *)(lVar14 + 0x20);
      }
      if ((uVar8 == 6) &&
         (iVar9 = FUN_0090d610(pbVar20,0,0xffffffffffffffff,"talent",6), iVar9 == 0)) {
        FUN_00af39c4(fVar21,param_1,param_2,uVar10 & 0xffffffff);
      }
      else {
        FUN_00af3b90(fVar21,param_1,param_2,uVar10 & 0xffffffff,&local_90,uVar4,uVar19);
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
    fVar21 = (float)FUN_00f13e54(param_1 + 0x1960);
    local_90 = CONCAT44(fVar22 * 0.5,fVar21 * 0.5);
    FUN_00af2300(param_2[0xe],param_1,param_2 + 10,&local_90);
  }
  if (*(int *)(param_1 + 0x1a28) == 0) {
    uVar11 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    uVar12 = FUN_00e6ce7c("MENU_DIALOG_LOOT_CATALOG_ERROR",0);
    uVar13 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar11,uVar12,uVar13,0,0);
    *(uint *)(param_1 + 0x1784) = *(uint *)(param_1 + 0x1784) & 0xfffffffb;
  }
  else {
    uVar11 = FUN_009b8d90();
    FUN_009baadc(uVar11,&DAT_0320ffa8);
    uVar11 = FUN_009b8d90();
    FUN_009ba61c(uVar11,&DAT_0320ffa8);
    uVar11 = FUN_009b8d90();
    FUN_009badcc(uVar11,&DAT_0320ffa8);
  }
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00af39c4(float param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  code *local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pvVar3 = operator_new(0x48);
  FUN_00bd6a08(pvVar3,*(long *)(param_3 + 8) + (ulong)param_4 * 0x70,0,1);
  plVar4 = *(long **)((long)pvVar3 + 8);
  local_70 = FUN_00f048a4("CoinInspect");
  local_98 = FUN_00af3f58;
  local_88 = 0;
  uStack_80 = 0;
  lStack_90 = param_2;
  local_78 = (code *)((long)pvVar3 + 0x10);
  FUN_009693a0(plVar4[0x5d] + 8,&local_98);
  local_70 = FUN_00f048a4("FinishedInspecting");
  local_98 = FUN_00af3f60;
  local_88 = 0;
  uStack_80 = 0;
  lStack_90 = param_2;
  local_78 = (code *)plVar4;
  FUN_009693a0(plVar4[0x5d] + 8,&local_98);
  FUN_00f13f08(350.0 / param_1,450.0 / param_1,plVar4);
  FUN_00c3b59c(plVar4,*(undefined4 *)(*(long *)(param_3 + 8) + (ulong)param_4 * 0x70 + 0x30));
  (**(code **)(*plVar4 + 0x140))(plVar4);
  uVar1 = *(uint *)((long)plVar4 + 0x5b4);
  *(uint *)((long)plVar4 + 0x5b4) = uVar1 & 0xfffffffb;
  if ((uVar1 & 0x7f80) != 0x4c80) {
    *(uint *)((long)plVar4 + 0x5b4) = uVar1 & 0xffff807b | 0x4c80;
    FUN_0091ada4(plVar4 + 0xa6);
  }
  *(uint *)((long)plVar4 + 0x624) = param_4;
  local_98 = (code *)0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_98);
  FUN_00f023ec(param_2 + 0x1960,plVar4,1);
  local_98 = (code *)((long)pvVar3 + 0x10);
  FUN_00af3f68(param_2 + 0x1a28,&local_98);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af3b90(undefined8 param_1,long param_2,int *param_3,uint param_4,byte *param_5,
                 undefined4 param_6,uint param_7)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  void *pvVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  byte local_c0 [16];
  void *local_b0;
  code *local_a8;
  long lStack_a0;
  void *local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  lVar12 = *(long *)(param_3 + 2);
  iVar2 = *param_3;
  lVar7 = lVar12 + (ulong)param_4 * 0x70;
  pbVar8 = (byte *)(lVar7 + 0x18);
  bVar4 = *pbVar8;
  uVar11 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar11 = *(ulong *)(lVar7 + 0x20);
  }
  if (uVar11 == 9) {
    iVar6 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"blueprint",9);
    if (iVar6 != 0) {
      lVar12 = *(long *)(param_3 + 2);
      goto LAB_00af3c2c;
    }
  }
  else {
LAB_00af3c2c:
    lVar12 = lVar12 + (ulong)param_4 * 0x70;
    pbVar8 = (byte *)(lVar12 + 0x50);
    bVar4 = *pbVar8;
    uVar11 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar11 = *(ulong *)(lVar12 + 0x58);
    }
    if ((uVar11 != 9) ||
       (iVar6 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"blueprint",9), iVar6 != 0)) {
      uVar9 = FUN_00cc7b20(param_5);
      pvVar10 = operator_new(0x18);
      FUN_00af3ff0();
      FUN_00bd6970(pvVar10,uVar9,0,0);
      goto LAB_00af3d30;
    }
  }
  FUN_0090dab8(local_c0,"card_skin_",param_5);
  FUN_008fcdb8(&local_a8,local_c0);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  uVar9 = FUN_00cc7b20(&local_a8);
  pbVar8 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar8 = param_5 + 1;
  }
  lVar7 = FUN_00cc7618(pbVar8);
  pvVar10 = operator_new(0x18);
  FUN_00af3ff0();
  FUN_00bd6970(pvVar10,uVar9,1,*(undefined4 *)(lVar7 + 0x20));
  if (((byte)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
LAB_00af3d30:
  plVar13 = *(long **)((long)pvVar10 + 8);
  if ((param_7 & 1) != 0) {
    lVar7 = *(long *)(param_3 + 2) + (ulong)param_4 * 0x70;
    (**(code **)(*plVar13 + 0x1d0))(plVar13,lVar7,*(undefined4 *)(lVar7 + 0x30));
  }
  uVar11 = (**(code **)(*plVar13 + 0x1c8))(plVar13);
  if ((uVar11 & 1) == 0) {
    (**(code **)(*plVar13 + 0x160))(plVar13,param_6,1,0);
  }
  else {
    (**(code **)(*plVar13 + 0x170))(plVar13,param_6);
  }
  local_80 = FUN_00f048a4("CardReveal");
  pcVar1 = (code *)((long)pvVar10 + 0x10);
  local_a8 = FUN_00af4054;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  lStack_a0 = param_2;
  local_88 = pcVar1;
  FUN_009693a0(plVar13[0x5d] + 8,&local_a8);
  local_80 = FUN_00f048a4("CardInspect");
  local_a8 = FUN_00af3f58;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  lStack_a0 = param_2;
  local_88 = pcVar1;
  FUN_009693a0(plVar13[0x5d] + 8,&local_a8);
  local_80 = FUN_00f048a4("FinishedInspecting");
  local_a8 = FUN_00af3f60;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  lStack_a0 = param_2;
  local_88 = (code *)plVar13;
  FUN_009693a0(plVar13[0x5d] + 8,&local_a8);
  (**(code **)(*plVar13 + 0x1e0))(param_1,plVar13);
  (**(code **)(*plVar13 + 0x1b0))(plVar13,1 < iVar2);
  (**(code **)(*plVar13 + 0x140))(plVar13);
  (**(code **)(*plVar13 + 0x1a8))(plVar13,1);
  uVar3 = *(uint *)((long)plVar13 + 0x5b4);
  *(uint *)((long)plVar13 + 0x5b4) = uVar3 & 0xfffffffb;
  if ((uVar3 & 0x7f80) != 0x4c80) {
    *(uint *)((long)plVar13 + 0x5b4) = uVar3 & 0xffff807b | 0x4c80;
    FUN_0091ada4(plVar13 + 0xa6);
  }
  *(uint *)((long)plVar13 + 0x624) = param_4;
  local_a8 = (code *)0x3f0000003f000000;
  (**(code **)(*plVar13 + 0x28))(plVar13,&local_a8);
  (**(code **)(*plVar13 + 0x1b8))(plVar13,0);
  FUN_00f023ec(param_2 + 0x1960,plVar13,1);
  local_a8 = pcVar1;
  FUN_00af3f68(param_2 + 0x1a28,&local_a8);
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00af3f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00af1708(param_1,param_2,param_5);
  return;
}




void FUN_00af3f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00af189c(param_1,param_2,param_5);
  return;
}




void FUN_00af3f68(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00af47a4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00af3ff0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027d9d98;
  pvVar1 = operator_new(0x670);
  FUN_00c38bc0();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x648) = param_1;
  FUN_00bd7114(param_1 + 2);
  *param_1 = &PTR_FUN_027d9d30;
  param_1[2] = &PTR_FUN_027d9d60;
  return;
}

