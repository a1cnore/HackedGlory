// functions/00eba — 8 functions
#include "libGameKindred.h"




void FUN_00eba290(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00957ee4(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_00eba324(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00957d80(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_00957e68(lVar4 + -0x28,param_2);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x10);
  return;
}




void FUN_00eba3c0(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((param_1[0x18] & 1) == 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x28) = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  if ((param_1[0x30] & 1) == 0) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x40) = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  if ((param_1[0x48] & 1) == 0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x58) = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
  }
  if ((param_1[0x60] & 1) == 0) {
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x70) = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
  }
  param_1[0x88] = 0xff;
  param_1[0x89] = 0xff;
  param_1[0x8a] = 0xff;
  param_1[0x8b] = 0xff;
  param_1[0x78] = 0xff;
  param_1[0x79] = 0xff;
  param_1[0x7a] = 0xff;
  param_1[0x7b] = 0xff;
  param_1[0x7c] = 0xff;
  param_1[0x7d] = 0xff;
  param_1[0x7e] = 0xff;
  param_1[0x7f] = 0xff;
  param_1[0x80] = 0xff;
  param_1[0x81] = 0xff;
  param_1[0x82] = 0xff;
  param_1[0x83] = 0xff;
  param_1[0x84] = 0xff;
  param_1[0x85] = 0xff;
  param_1[0x86] = 0xff;
  param_1[0x87] = 0xff;
  return;
}




void FUN_00eba460(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x38);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        *(undefined4 *)((long)pvVar5 + 0x18) = *(undefined4 *)((long)pvVar2 + 0x18);
        FUN_008fcdb8((long)pvVar5 + 0x20,(long)pvVar2 + 0x20);
        pvVar2 = (void *)((long)pvVar2 + 0x38);
        pvVar5 = (void *)((long)pvVar5 + 0x38);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x38;
        pbVar3 = (byte *)((long)pvVar2 + 0x20);
        do {
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x10));
          }
          if ((pbVar3[-0x20] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -0x10));
          }
          lVar4 = lVar4 + -0x38;
          pbVar3 = pbVar3 + 0x38;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00eba558(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0xc);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0xc;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0xc;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar4 = *puVar2;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00eba5e8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x30);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        thunk_FUN_00e7051c((long)pvVar5 + 0x18,(long)pvVar2 + 0x18);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x28);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        *(undefined8 *)((long)pvVar5 + 0x28) = *puVar3;
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            operator_delete__((void *)*puVar3);
            puVar3[-1] = 0;
            *puVar3 = 0;
          }
          if ((*(byte *)(puVar3 + -4) & 1) != 0) {
            operator_delete((void *)puVar3[-2]);
          }
          lVar4 = lVar4 + -0x30;
          puVar3 = puVar3 + 6;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00eba6e0(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x58);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x58);
      pvVar5 = pvVar1;
      do {
        thunk_FUN_00e7051c(pvVar5,pvVar2);
        FUN_008fcdb8((long)pvVar5 + 0x10,(long)pvVar2 + 0x10);
        FUN_008fcdb8((long)pvVar5 + 0x28,(long)pvVar2 + 0x28);
        FUN_008fcdb8((long)pvVar5 + 0x40,(long)pvVar2 + 0x40);
        pvVar2 = (void *)((long)pvVar2 + 0x58);
        pvVar5 = (void *)((long)pvVar5 + 0x58);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x58;
        pbVar3 = (byte *)((long)pvVar2 + 0x28);
        do {
          if ((pbVar3[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x28));
          }
          if ((*pbVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + 0x10));
          }
          if ((pbVar3[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          if (*(void **)(pbVar3 + -0x20) != (void *)0x0) {
            operator_delete__(*(void **)(pbVar3 + -0x20));
            pbVar3[-0x28] = 0;
            pbVar3[-0x27] = 0;
            pbVar3[-0x26] = 0;
            pbVar3[-0x25] = 0;
            pbVar3[-0x24] = 0;
            pbVar3[-0x23] = 0;
            pbVar3[-0x22] = 0;
            pbVar3[-0x21] = 0;
            pbVar3[-0x20] = 0;
            pbVar3[-0x1f] = 0;
            pbVar3[-0x1e] = 0;
            pbVar3[-0x1d] = 0;
            pbVar3[-0x1c] = 0;
            pbVar3[-0x1b] = 0;
            pbVar3[-0x1a] = 0;
            pbVar3[-0x19] = 0;
          }
          lVar4 = lVar4 + -0x58;
          pbVar3 = pbVar3 + 0x58;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00eba808(ulong param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
LAB_00ebaaac:
  uVar9 = param_2 - 0x50;
  uVar7 = param_1;
LAB_00ebaad4:
  param_1 = uVar7;
  uVar7 = param_2 - param_1;
  if ((ulong)(((long)uVar7 >> 4) * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00ebaf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bf0748 + *(int *)(&DAT_01bf0748 + ((long)uVar7 >> 4) * 0x3333333333333334)))()
    ;
    return;
  }
  if ((long)uVar7 < 0x230) {
    FUN_00ebbd50(param_1,param_2,param_3);
    goto LAB_00ebb064;
  }
  uVar10 = param_1 + (uVar7 / 0xa0) * 0x50;
  if ((long)uVar7 < 0x13831) {
    iVar3 = FUN_00ebb0f0(param_1,uVar10,uVar9,param_3);
  }
  else {
    lVar8 = (uVar7 / 0x140) * 4 + uVar7 / 0x140;
    iVar3 = FUN_00ebb900(param_1,param_1 + lVar8 * 0x10,uVar10,uVar10 + lVar8 * 0x10,uVar9,param_3);
  }
  uVar4 = (*(code *)*param_3)(param_1,uVar10);
  uVar7 = param_2 - 0xa0;
  uVar13 = uVar9;
  if ((uVar4 & 1) == 0) {
    do {
      uVar13 = uVar7;
      if (param_1 == uVar13) {
        uVar7 = param_1 + 0x50;
        uVar10 = (*(code *)*param_3)(param_1,uVar9);
        if ((uVar10 & 1) != 0) goto LAB_00ebaf4c;
        if (uVar7 == uVar9) goto LAB_00ebb064;
        uVar7 = param_1 + 0xa0;
        goto LAB_00eba99c;
      }
      uVar4 = (*(code *)*param_3)(uVar13,uVar10);
      uVar7 = uVar13 - 0x50;
    } while ((uVar4 & 1) == 0);
    FUN_008fcdb8(local_c0,param_1);
    FUN_008fcdb8(local_a8,param_1 + 0x18);
    FUN_008fcdb8(local_90);
    local_78 = *(undefined8 *)(param_1 + 0x48);
    FUN_008fce60(param_1,uVar13);
    FUN_008fce60(param_1 + 0x18,uVar13 + 0x18);
    FUN_008fce60(param_1 + 0x30,uVar13 + 0x30);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(uVar13 + 0x48);
    FUN_008fce60(uVar13,local_c0);
    FUN_008fce60(uVar13 + 0x18,local_a8);
    FUN_008fce60(uVar13 + 0x30,local_90);
    *(undefined8 *)(uVar13 + 0x48) = local_78;
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    iVar3 = iVar3 + 1;
  }
  uVar7 = param_1 + 0x50;
  uVar4 = uVar7;
  uVar11 = uVar10;
  if (uVar7 < uVar13) {
    while( true ) {
      uVar10 = uVar11;
      uVar4 = uVar7 - 0x50;
      do {
        uVar11 = uVar4;
        uVar4 = uVar11 + 0x50;
        uVar7 = (*(code *)*param_3)(uVar4,uVar10);
      } while ((uVar7 & 1) != 0);
      uVar7 = uVar11 + 0xa0;
      do {
        uVar12 = uVar13;
        uVar13 = uVar12 - 0x50;
        uVar5 = (*(code *)*param_3)(uVar13,uVar10);
      } while ((uVar5 & 1) == 0);
      if (uVar13 < uVar4) break;
      FUN_008fcdb8(local_c0,uVar4);
      FUN_008fcdb8(local_a8,uVar11 + 0x68);
      FUN_008fcdb8(local_90,uVar11 + 0x80);
      local_78 = *(undefined8 *)(uVar11 + 0x98);
      FUN_008fce60(uVar4,uVar13);
      FUN_008fce60(uVar11 + 0x68,uVar12 - 0x38);
      FUN_008fce60(uVar11 + 0x80,uVar12 - 0x20);
      *(undefined8 *)(uVar11 + 0x98) = *(undefined8 *)(uVar12 - 8);
      FUN_008fce60(uVar13,local_c0);
      FUN_008fce60(uVar12 - 0x38,local_a8);
      FUN_008fce60(uVar12 - 0x20,local_90);
      *(undefined8 *)(uVar12 - 8) = local_78;
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      iVar3 = iVar3 + 1;
      uVar11 = uVar13;
      if (uVar10 != uVar4) {
        uVar11 = uVar10;
      }
    }
  }
  if ((uVar4 != uVar10) && (uVar7 = (*(code *)*param_3)(uVar10,uVar4), (uVar7 & 1) != 0)) {
    FUN_008fcdb8(local_c0,uVar4);
    FUN_008fcdb8(local_a8,uVar4 + 0x18);
    FUN_008fcdb8(local_90,uVar4 + 0x30);
    local_78 = *(undefined8 *)(uVar4 + 0x48);
    FUN_008fce60(uVar4,uVar10);
    FUN_008fce60(uVar4 + 0x18,uVar10 + 0x18);
    FUN_008fce60(uVar4 + 0x30,uVar10 + 0x30);
    *(undefined8 *)(uVar4 + 0x48) = *(undefined8 *)(uVar10 + 0x48);
    FUN_008fce60(uVar10,local_c0);
    FUN_008fce60(uVar10 + 0x18,local_a8);
    FUN_008fce60(uVar10 + 0x30,local_90);
    *(undefined8 *)(uVar10 + 0x48) = local_78;
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != 0) goto LAB_00ebaef4;
  uVar10 = FUN_00ebbf18(param_1,uVar4,param_3);
  uVar7 = FUN_00ebbf18(uVar4 + 0x50,param_2,param_3);
  if ((uVar7 & 1) == 0) goto code_r0x00ebaef0;
  bVar2 = (uVar10 & 1) == 0;
  if (bVar2) {
    param_2 = uVar4;
  }
  uVar6 = 1;
  if (bVar2) {
    uVar6 = 2;
  }
  goto LAB_00eba96c;
LAB_00eba99c:
  lVar8 = uVar7 - 0x50;
  uVar10 = (*(code *)*param_3)(param_1,lVar8);
  if ((uVar10 & 1) != 0) goto LAB_00eba9c4;
  uVar7 = uVar7 + 0x50;
  if (param_2 == uVar7) goto LAB_00ebb064;
  goto LAB_00eba99c;
LAB_00eba9c4:
  FUN_008fcdb8(local_c0,lVar8);
  FUN_008fcdb8(local_a8,uVar7 - 0x38);
  FUN_008fcdb8(local_90,uVar7 - 0x20);
  local_78 = *(undefined8 *)(uVar7 - 8);
  FUN_008fce60(lVar8,uVar9);
  FUN_008fce60(uVar7 - 0x38,param_2 - 0x38);
  FUN_008fce60(uVar7 - 0x20,param_2 - 0x20);
  *(undefined8 *)(uVar7 - 8) = *(undefined8 *)(param_2 - 8);
  FUN_008fce60(uVar9,local_c0);
  FUN_008fce60(param_2 - 0x38,local_a8);
  FUN_008fce60(param_2 - 0x20,local_90);
  *(undefined8 *)(param_2 - 8) = local_78;
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_00ebaf4c:
  if (uVar7 == uVar9) {
LAB_00ebb064:
    if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  while( true ) {
    do {
      uVar13 = uVar7;
      uVar10 = (*(code *)*param_3)(param_1,uVar13);
      uVar7 = uVar13 + 0x50;
    } while ((uVar10 & 1) == 0);
    do {
      uVar4 = uVar9;
      uVar9 = uVar4 - 0x50;
      uVar10 = (*(code *)*param_3)(param_1,uVar9);
    } while ((uVar10 & 1) != 0);
    if (uVar9 <= uVar13) break;
    FUN_008fcdb8(local_c0,uVar13);
    FUN_008fcdb8(local_a8,uVar13 + 0x18);
    FUN_008fcdb8(local_90,uVar13 + 0x30);
    local_78 = *(undefined8 *)(uVar13 + 0x48);
    FUN_008fce60(uVar13,uVar9);
    FUN_008fce60(uVar13 + 0x18,uVar4 - 0x38);
    FUN_008fce60(uVar13 + 0x30,uVar4 - 0x20);
    *(undefined8 *)(uVar13 + 0x48) = *(undefined8 *)(uVar4 - 8);
    FUN_008fce60(uVar9,local_c0);
    FUN_008fce60(uVar4 - 0x38,local_a8);
    FUN_008fce60(uVar4 - 0x20,local_90);
    *(undefined8 *)(uVar4 - 8) = local_78;
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  uVar6 = 4;
  param_1 = uVar13;
LAB_00eba96c:
  if ((4 < uVar6) || ((1 << (ulong)uVar6 & 0x15U) == 0)) goto LAB_00ebb064;
  goto LAB_00ebaaac;
code_r0x00ebaef0:
  uVar7 = uVar4 + 0x50;
  if ((uVar10 & 1) == 0) {
LAB_00ebaef4:
    if (((long)(param_2 - uVar4) >> 4) * -0x3333333333333333 <=
        ((long)(uVar4 - param_1) >> 4) * -0x3333333333333333) {
      FUN_00eba808(uVar4 + 0x50,param_2,param_3);
      param_2 = uVar4;
      goto LAB_00ebaaac;
    }
    FUN_00eba808(param_1,uVar4,param_3);
    uVar7 = uVar4 + 0x50;
  }
  goto LAB_00ebaad4;
}

