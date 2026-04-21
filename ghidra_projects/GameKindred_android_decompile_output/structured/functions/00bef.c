// functions/00bef — 12 functions
#include "libGameKindred.h"




void FUN_00bef128(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
LAB_00bef1e0:
  puVar11 = param_2 + -1;
  puVar12 = param_1;
LAB_00bef200:
  param_1 = puVar12;
  lVar7 = (long)param_2 - (long)param_1;
  uVar6 = lVar7 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    uVar6 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar6 & 1) != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
      return;
    }
    return;
  case 3:
    FUN_00bef544(param_1,param_1 + 1,puVar11,param_3);
    return;
  case 4:
    FUN_00bef63c(param_1,param_1 + 1,param_1 + 2,puVar11,param_3);
    return;
  case 5:
    FUN_00bef70c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11,param_3);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_00bef814(param_1,param_2,param_3);
    return;
  }
  uVar4 = uVar6;
  if ((long)uVar6 < 0) {
    uVar4 = uVar6 + 1;
  }
  puVar12 = (undefined8 *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar3 = FUN_00bef544(param_1,puVar12,puVar11,param_3);
  }
  else {
    uVar4 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar4 = uVar6;
    }
    lVar7 = (uVar4 & 0x7ffffffffffffffc) * 2;
    iVar3 = FUN_00bef70c(param_1,(long)param_1 + lVar7,puVar12,(long)puVar12 + lVar7,puVar11,param_3
                        );
  }
  uVar6 = (*(code *)*param_3)(*param_1,*puVar12);
  puVar13 = puVar11;
  puVar10 = param_2 + -2;
  if ((uVar6 & 1) == 0) {
LAB_00bef2a4:
    puVar13 = puVar10;
    if (param_1 != puVar13) goto code_r0x00bef2ac;
    puVar12 = param_1 + 1;
    uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
    if ((uVar6 & 1) == 0) {
      if (puVar12 == puVar11) {
        return;
      }
      puVar12 = param_1 + 2;
      while (uVar6 = (*(code *)*param_3)(*param_1,puVar12[-1]), (uVar6 & 1) == 0) {
        puVar12 = puVar12 + 1;
        if (param_2 == puVar12) {
          return;
        }
      }
      uVar8 = puVar12[-1];
      puVar12[-1] = *puVar11;
      *puVar11 = uVar8;
    }
    if (puVar12 == puVar11) {
      return;
    }
    while( true ) {
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar13);
      } while ((uVar6 & 1) == 0);
      puVar12 = puVar12 + 2;
      do {
        puVar11 = puVar11 + -1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
      } while ((uVar6 & 1) != 0);
      if (puVar11 <= puVar13) break;
      uVar8 = *puVar13;
      *puVar13 = *puVar11;
      *puVar11 = uVar8;
    }
    uVar5 = 4;
    param_1 = puVar13;
    goto LAB_00bef1a4;
  }
  goto LAB_00bef2d4;
code_r0x00bef2ac:
  uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
  puVar10 = puVar13 + -1;
  if ((uVar6 & 1) != 0) goto code_r0x00bef2c0;
  goto LAB_00bef2a4;
code_r0x00bef2c0:
  uVar8 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar13;
  *puVar13 = uVar8;
LAB_00bef2d4:
  puVar10 = param_1 + 1;
  puVar9 = puVar10;
  puVar1 = puVar12;
  if (puVar10 < puVar13) {
    while( true ) {
      puVar12 = puVar1;
      puVar10 = puVar9 + -1;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + 1;
        uVar6 = (*(code *)*param_3)(*puVar10,*puVar12);
      } while ((uVar6 & 1) != 0);
      puVar9 = puVar9 + 2;
      do {
        puVar13 = puVar13 + -1;
        uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
      } while ((uVar6 & 1) == 0);
      if (puVar13 < puVar10) break;
      uVar8 = *puVar10;
      iVar3 = iVar3 + 1;
      *puVar10 = *puVar13;
      *puVar13 = uVar8;
      puVar1 = puVar13;
      if (puVar12 != puVar10) {
        puVar1 = puVar12;
      }
    }
  }
  if ((puVar10 != puVar12) && (uVar6 = (*(code *)*param_3)(*puVar12,*puVar10), (uVar6 & 1) != 0)) {
    uVar8 = *puVar10;
    iVar3 = iVar3 + 1;
    *puVar10 = *puVar12;
    *puVar12 = uVar8;
  }
  if (iVar3 == 0) {
    uVar6 = FUN_00bef8e4(param_1,puVar10,param_3);
    uVar4 = FUN_00bef8e4(puVar10 + 1,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00bef1c8;
    puVar12 = puVar10 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00bef200;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_00bef128(puVar10 + 1,param_2,param_3);
    param_2 = puVar10;
    goto LAB_00bef1e0;
  }
  FUN_00bef128(param_1,puVar10,param_3);
  puVar12 = puVar10 + 1;
  goto LAB_00bef200;
LAB_00bef1c8:
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    param_2 = puVar10;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 2;
  }
LAB_00bef1a4:
  if (4 < uVar5) {
    return;
  }
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00bef1e0;
}




undefined8
FUN_00bef544(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_4)(*param_2,*param_1);
  uVar2 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_4)(*param_3);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  return 1;
}




int FUN_00bef63c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00bef544();
  uVar2 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar2 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar2 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar1;
}




int FUN_00bef70c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00bef63c();
  uVar2 = (*(code *)*param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar2 = (*(code *)*param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar2 = (*(code *)*param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar2 = (*(code *)*param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          uVar3 = *param_1;
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}




void FUN_00bef814(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_00bef544(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar3 = puVar4;
      uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
      if ((uVar2 & 1) != 0) {
        uVar6 = *puVar3;
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          puVar4 = param_1;
          if (lVar8 == -0x10) goto LAB_00bef8b8;
          uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar8 + 8));
          lVar1 = lVar8 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
LAB_00bef8b8:
        *puVar4 = uVar6;
      }
      lVar7 = lVar7 + 8;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}




bool FUN_00bef8e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    FUN_00bef544(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00bef63c(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00bef70c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00bef544(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar4 = param_1 + 3;
      puVar5 = param_1 + 2;
      do {
        puVar3 = puVar4;
        uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
        if ((uVar2 & 1) != 0) {
          uVar6 = *puVar3;
          lVar1 = lVar7;
          do {
            lVar9 = lVar1;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            puVar4 = param_1;
            if (lVar9 == -0x10) goto LAB_00bef9e0;
            uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
            lVar1 = lVar9 + -8;
          } while ((uVar2 & 1) != 0);
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_00bef9e0:
          iVar8 = iVar8 + 1;
          *puVar4 = uVar6;
          if (iVar8 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        puVar4 = puVar3 + 1;
        puVar5 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  return true;
}




void FUN_00befa80(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027efd98;
  pvVar1 = operator_new(0x1fed0);
  FUN_00c5ed90();
  *(undefined8 **)((long)pvVar1 + 0x148) = param_1;
  *param_1 = &PTR_FUN_027efd78;
  param_1[1] = pvVar1;
  param_1[2] = 0;
  return;
}




void FUN_00befad8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027efd78;
  FUN_00c60064(param_1[1],0);
  FUN_00c5fecc(param_1[1],0);
  FUN_00c6024c(param_1[1],0);
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    FUN_00b79bd4(pvVar1);
    operator_delete(pvVar1);
    param_1[2] = 0;
  }
  *param_1 = &PTR_FUN_027efd98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00befb6c(void *param_1)

{
  FUN_00befad8();
  operator_delete(param_1);
  return;
}




void FUN_00befb90(long param_1)

{
  FUN_00befbe0();
  FUN_00c5f430(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  FUN_00c610ac(*(undefined8 *)(param_1 + 8));
  FUN_00c60064(*(undefined8 *)(param_1 + 8),1);
  FUN_00c5fecc(*(undefined8 *)(param_1 + 8),1);
  FUN_00c6024c(*(undefined8 *)(param_1 + 8),1);
  return;
}




void FUN_00befbe0(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  long lVar8;
  byte local_2f8 [16];
  void *local_2e8;
  ulong local_2e0 [2];
  void *local_2d0;
  ulong local_2c8 [2];
  void *local_2b8;
  ulong local_2b0 [2];
  void *local_2a0;
  undefined1 auStack_298 [8];
  uint local_290;
  long local_288;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [112];
  undefined **local_1b0;
  undefined1 auStack_1a8 [16];
  byte local_198 [16];
  void *local_188;
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  byte local_150 [16];
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined4 auStack_118 [2];
  undefined **local_110;
  undefined1 auStack_108 [16];
  byte local_f8 [16];
  void *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0 [16];
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined4 local_78 [2];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_00975578(&local_110);
  FUN_00975578(&local_1b0);
  local_2b0[0] = 0;
  local_2b0[1] = 0;
  local_2a0 = (void *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_2b8 = (void *)0x0;
  local_2e0[0] = 0;
  local_2e0[1] = 0;
  local_2d0 = (void *)0x0;
  FUN_00976588(auStack_298);
  uVar4 = FUN_0096bf64(param_2,auStack_298);
  if ((uVar4 & 1) != 0) {
    if (local_290 != 0) {
      lVar8 = 0;
      uVar4 = 0;
      do {
        lVar3 = local_288;
        lVar1 = local_288 + lVar8 + 0x30;
        FUN_008fa54c(local_2f8,"silver");
        uVar5 = FUN_00cab9fc(lVar1,local_2f8);
        if ((local_2f8[0] & 1) != 0) {
          operator_delete(local_2e8);
        }
        if ((uVar5 & 1) == 0) {
          FUN_008fa54c(local_2f8,"gold");
          uVar5 = FUN_00cab9fc(lVar1,local_2f8);
          if ((local_2f8[0] & 1) != 0) {
            operator_delete(local_2e8);
          }
          if ((uVar5 & 1) != 0) {
            lVar1 = lVar3 + lVar8;
            FUN_0097b658(auStack_1a8,lVar1 + 8);
            FUN_008fce60(local_198,lVar1 + 0x18);
            uStack_178 = *(undefined8 *)(lVar1 + 0x38);
            local_180 = *(ulong *)(lVar1 + 0x30);
            uStack_168 = *(undefined8 *)(lVar1 + 0x48);
            local_170 = *(undefined8 *)(lVar1 + 0x40);
            uStack_158 = *(undefined8 *)(lVar1 + 0x58);
            local_160 = *(undefined8 *)(lVar1 + 0x50);
            FUN_008fce60(local_150,lVar1 + 0x60);
            FUN_00910394(&local_138,lVar1 + 0x78);
            FUN_00910394(&local_128,lVar1 + 0x88);
            puVar6 = auStack_118;
            goto LAB_00befe04;
          }
        }
        else {
          lVar1 = lVar3 + lVar8;
          FUN_0097b658(auStack_108,lVar1 + 8);
          FUN_008fce60(local_f8,lVar1 + 0x18);
          uStack_d8 = *(undefined8 *)(lVar1 + 0x38);
          local_e0 = *(undefined8 *)(lVar1 + 0x30);
          uStack_c8 = *(undefined8 *)(lVar1 + 0x48);
          local_d0 = *(undefined8 *)(lVar1 + 0x40);
          uStack_b8 = *(undefined8 *)(lVar1 + 0x58);
          local_c0 = *(undefined8 *)(lVar1 + 0x50);
          FUN_008fce60(local_b0,lVar1 + 0x60);
          FUN_00910394(&local_98,lVar1 + 0x78);
          FUN_00910394(&local_88,lVar1 + 0x88);
          puVar6 = local_78;
LAB_00befe04:
          *puVar6 = *(undefined4 *)(lVar3 + lVar8 + 0x98);
        }
        uVar4 = uVar4 + 1;
        lVar8 = lVar8 + 0xa0;
      } while (uVar4 < local_290);
    }
    FUN_008fce60(local_2b0,auStack_250);
    FUN_008fce60(local_2c8,auStack_238);
    FUN_008fce60(local_2e0,auStack_220);
  }
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  FUN_00beffc0(param_1,pbVar7,local_b0,local_e0._4_4_,local_150,local_180 & 0xffffffff,local_2b0,
               local_2c8,local_2e0);
  FUN_009767f4(auStack_298);
  if ((local_2e0[0] & 1) != 0) {
    operator_delete(local_2d0);
  }
  if ((local_2c8[0] & 1) != 0) {
    operator_delete(local_2b8);
  }
  if ((local_2b0[0] & 1) != 0) {
    operator_delete(local_2a0);
  }
  local_1b0 = &PTR_FUN_027bca90;
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_120 = (void *)0x0;
    local_128 = 0;
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_130 = (void *)0x0;
    local_138 = 0;
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  FUN_00977ea0(auStack_1a8,1);
  local_110 = &PTR_FUN_027bca90;
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_f8[0] & 1) != 0) {
    operator_delete(local_e8);
  }
  FUN_00977ea0(auStack_108,1);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00beffc0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  void *__s;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x10) == 0) {
    __s = operator_new(0xe8);
    memset(__s,0,0xe8);
    FUN_00e70510((long)__s + 0x28);
    *(undefined8 *)((long)__s + 0x80) = 0;
    *(undefined8 *)((long)__s + 0x88) = 0;
    *(undefined8 *)((long)__s + 0x90) = 0;
    *(undefined8 *)((long)__s + 0x68) = 0;
    *(undefined8 *)((long)__s + 0x70) = 0;
    *(undefined8 *)((long)__s + 0x58) = 0;
    *(undefined8 *)((long)__s + 0x60) = 0;
    *(undefined8 *)((long)__s + 0x50) = 0;
    memset((void *)((long)__s + 0xa0),0,0x48);
    *(void **)(param_1 + 0x10) = __s;
  }
  FUN_008fa54c(local_80,param_2);
  FUN_008fce60(*(undefined8 *)(param_1 + 0x10),local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  lVar2 = FUN_00ce9b48(param_2);
  *(long *)(*(long *)(param_1 + 0x10) + 0x18) = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_00ce9cb8(param_2);
    *(long *)(*(long *)(param_1 + 0x10) + 0x20) = lVar2;
    uVar3 = FUN_00e6ce7c(*(undefined8 *)(lVar2 + 0x28),0);
    FUN_00910394(*(long *)(param_1 + 0x10) + 0x28,uVar3);
    FUN_00ce9d88(param_2,*(long *)(param_1 + 0x10) + 0x38,3);
    FUN_00951534(*(long *)(param_1 + 0x10) + 0x50,0);
    uVar3 = FUN_00cdbb18();
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar6 = pbVar6 + 1;
    }
    else {
      pbVar6 = *(byte **)(pbVar6 + 0x10);
    }
    puVar4 = (uint *)FUN_00cdc678(uVar3,pbVar6);
    if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
      lVar2 = 0;
      uVar8 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)(puVar4 + 2) + lVar2;
        if ((*(byte *)(*(long *)(puVar4 + 2) + lVar2) & 1) == 0) {
          lVar5 = lVar5 + 1;
        }
        else {
          lVar5 = *(long *)(lVar5 + 0x10);
        }
        FUN_008fa54c(local_80,lVar5);
        FUN_0096204c(lVar7 + 0x50,local_80);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        uVar8 = uVar8 + 1;
        lVar2 = lVar2 + 0x18;
      } while (uVar8 < *puVar4);
    }
    FUN_008fce60(*(long *)(param_1 + 0x10) + 0x60,param_3);
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0x78) = param_4;
    FUN_008fce60(lVar2 + 0x80,param_5);
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0x98) = param_6;
    FUN_008fce60(lVar2 + 0xa0,param_7);
    FUN_008fce60(*(long *)(param_1 + 0x10) + 0xb8,param_8);
    FUN_008fce60(*(long *)(param_1 + 0x10) + 0xd0,param_9);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

