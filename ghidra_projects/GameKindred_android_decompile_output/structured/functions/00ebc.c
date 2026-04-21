// functions/00ebc — 4 functions
#include "libGameKindred.h"




void FUN_00ebc290(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x1a0);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (ulong)*param_1 * 0x1a0;
      pvVar3 = pvVar1;
      do {
        FUN_00ebc35c(pvVar3,pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x1a0);
        lVar4 = lVar4 + -0x1a0;
        pvVar3 = (void *)((long)pvVar3 + 0x1a0);
      } while (lVar4 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x1a0;
        do {
          FUN_00964d08(pvVar2);
          lVar4 = lVar4 + -0x1a0;
          pvVar2 = (void *)((long)pvVar2 + 0x1a0);
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




void FUN_00ebc35c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  thunk_FUN_00e7051c();
  FUN_008fcdb8(param_1 + 0x10,param_2 + 0x10);
  FUN_008fcdb8(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  FUN_008fcdb8(param_1 + 0x48,param_2 + 0x48);
  FUN_008fcdb8(param_1 + 0x60,param_2 + 0x60);
  FUN_008fcdb8(param_1 + 0x78,param_2 + 0x78);
  FUN_008fcdb8(param_1 + 0x90,param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_008fcdb8(param_1 + 0xc0,param_2 + 0xc0);
  FUN_008fcdb8(param_1 + 0xd8,param_2 + 0xd8);
  FUN_008fcdb8(param_1 + 0xf0,param_2 + 0xf0);
  FUN_008fcdb8(param_1 + 0x108,param_2 + 0x108);
  FUN_008fcdb8(param_1 + 0x120,param_2 + 0x120);
  FUN_008fcdb8(param_1 + 0x138,param_2 + 0x138);
  FUN_008fcdb8(param_1 + 0x150,param_2 + 0x150);
  FUN_008fcdb8(param_1 + 0x168,param_2 + 0x168);
  FUN_008fcdb8(param_1 + 0x180,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
  return;
}




void FUN_00ebc454(ulong param_1,ulong param_2,undefined8 *param_3)

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
LAB_00ebc6f8:
  uVar9 = param_2 - 0x50;
  uVar7 = param_1;
LAB_00ebc720:
  param_1 = uVar7;
  uVar7 = param_2 - param_1;
  if ((ulong)(((long)uVar7 >> 4) * -0x3333333333333333) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00ebcbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bf0778 + *(int *)(&DAT_01bf0778 + ((long)uVar7 >> 4) * 0x3333333333333334)))()
    ;
    return;
  }
  if ((long)uVar7 < 0x230) {
    FUN_00ebd99c(param_1,param_2,param_3);
    goto LAB_00ebccb0;
  }
  uVar10 = param_1 + (uVar7 / 0xa0) * 0x50;
  if ((long)uVar7 < 0x13831) {
    iVar3 = FUN_00ebcd3c(param_1,uVar10,uVar9,param_3);
  }
  else {
    lVar8 = (uVar7 / 0x140) * 4 + uVar7 / 0x140;
    iVar3 = FUN_00ebd54c(param_1,param_1 + lVar8 * 0x10,uVar10,uVar10 + lVar8 * 0x10,uVar9,param_3);
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
        if ((uVar10 & 1) != 0) goto LAB_00ebcb98;
        if (uVar7 == uVar9) goto LAB_00ebccb0;
        uVar7 = param_1 + 0xa0;
        goto LAB_00ebc5e8;
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
  if (iVar3 != 0) goto LAB_00ebcb40;
  uVar10 = FUN_00ebdb64(param_1,uVar4,param_3);
  uVar7 = FUN_00ebdb64(uVar4 + 0x50,param_2,param_3);
  if ((uVar7 & 1) == 0) goto code_r0x00ebcb3c;
  bVar2 = (uVar10 & 1) == 0;
  if (bVar2) {
    param_2 = uVar4;
  }
  uVar6 = 1;
  if (bVar2) {
    uVar6 = 2;
  }
  goto LAB_00ebc5b8;
LAB_00ebc5e8:
  lVar8 = uVar7 - 0x50;
  uVar10 = (*(code *)*param_3)(param_1,lVar8);
  if ((uVar10 & 1) != 0) goto LAB_00ebc610;
  uVar7 = uVar7 + 0x50;
  if (param_2 == uVar7) goto LAB_00ebccb0;
  goto LAB_00ebc5e8;
LAB_00ebc610:
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
LAB_00ebcb98:
  if (uVar7 == uVar9) {
LAB_00ebccb0:
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
LAB_00ebc5b8:
  if ((4 < uVar6) || ((1 << (ulong)uVar6 & 0x15U) == 0)) goto LAB_00ebccb0;
  goto LAB_00ebc6f8;
code_r0x00ebcb3c:
  uVar7 = uVar4 + 0x50;
  if ((uVar10 & 1) == 0) {
LAB_00ebcb40:
    if (((long)(param_2 - uVar4) >> 4) * -0x3333333333333333 <=
        ((long)(uVar4 - param_1) >> 4) * -0x3333333333333333) {
      FUN_00ebc454(uVar4 + 0x50,param_2,param_3);
      param_2 = uVar4;
      goto LAB_00ebc6f8;
    }
    FUN_00ebc454(param_1,uVar4,param_3);
    uVar7 = uVar4 + 0x50;
  }
  goto LAB_00ebc720;
}




void FUN_00ebcd3c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar4 = (*(code *)*param_4)(param_2,param_1);
  uVar5 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
    if ((uVar5 & 1) == 0) goto LAB_00ebd1c4;
    FUN_008fcdb8(local_b8,param_2);
    lVar1 = param_2 + 0x18;
    FUN_008fcdb8(local_a0,lVar1);
    lVar2 = param_2 + 0x30;
    FUN_008fcdb8(local_88,lVar2);
    local_70 = *(undefined8 *)(param_2 + 0x48);
    FUN_008fce60(param_2,param_3);
    FUN_008fce60(lVar1,param_3 + 0x18);
    FUN_008fce60(lVar2,param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    FUN_008fce60(param_3,local_b8);
    FUN_008fce60(param_3 + 0x18,local_a0);
    FUN_008fce60(param_3 + 0x30,local_88);
    *(undefined8 *)(param_3 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    uVar4 = (*(code *)*param_4)(param_2,param_1);
    if ((uVar4 & 1) != 0) {
      FUN_008fcdb8(local_b8,param_1);
      FUN_008fcdb8(local_a0,param_1 + 0x18);
      FUN_008fcdb8(local_88,param_1 + 0x30);
      local_70 = *(undefined8 *)(param_1 + 0x48);
      FUN_008fce60(param_1,param_2);
      FUN_008fce60(param_1 + 0x18,lVar1);
      FUN_008fce60(param_1 + 0x30,lVar2);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      FUN_008fce60(param_2,local_b8);
      FUN_008fce60(lVar1,local_a0);
      FUN_008fce60(lVar2,local_88);
      *(undefined8 *)(param_2 + 0x48) = local_70;
      goto LAB_00ebd188;
    }
  }
  else if ((uVar5 & 1) == 0) {
    FUN_008fcdb8(local_b8,param_1);
    FUN_008fcdb8(local_a0,param_1 + 0x18);
    FUN_008fcdb8(local_88,param_1 + 0x30);
    local_70 = *(undefined8 *)(param_1 + 0x48);
    FUN_008fce60(param_1,param_2);
    lVar1 = param_2 + 0x18;
    FUN_008fce60(param_1 + 0x18,lVar1);
    lVar2 = param_2 + 0x30;
    FUN_008fce60(param_1 + 0x30,lVar2);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    FUN_008fce60(param_2,local_b8);
    FUN_008fce60(lVar1,local_a0);
    FUN_008fce60(lVar2,local_88);
    *(undefined8 *)(param_2 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    uVar4 = (*(code *)*param_4)(param_3,param_2);
    if ((uVar4 & 1) != 0) {
      FUN_008fcdb8(local_b8,param_2);
      FUN_008fcdb8(local_a0,lVar1);
      FUN_008fcdb8(local_88,lVar2);
      local_70 = *(undefined8 *)(param_2 + 0x48);
      FUN_008fce60(param_2,param_3);
      FUN_008fce60(lVar1,param_3 + 0x18);
      FUN_008fce60(lVar2,param_3 + 0x30);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
      FUN_008fce60(param_3,local_b8);
      FUN_008fce60(param_3 + 0x18,local_a0);
      FUN_008fce60(param_3 + 0x30,local_88);
      *(undefined8 *)(param_3 + 0x48) = local_70;
LAB_00ebd188:
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      uVar6 = 2;
      goto LAB_00ebd1c4;
    }
  }
  else {
    FUN_008fcdb8(local_b8,param_1);
    FUN_008fcdb8(local_a0,param_1 + 0x18);
    FUN_008fcdb8(local_88,param_1 + 0x30);
    local_70 = *(undefined8 *)(param_1 + 0x48);
    FUN_008fce60(param_1,param_3);
    FUN_008fce60(param_1 + 0x18,param_3 + 0x18);
    FUN_008fce60(param_1 + 0x30,param_3 + 0x30);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    FUN_008fce60(param_3,local_b8);
    FUN_008fce60(param_3 + 0x18,local_a0);
    FUN_008fce60(param_3 + 0x30,local_88);
    *(undefined8 *)(param_3 + 0x48) = local_70;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  uVar6 = 1;
LAB_00ebd1c4:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

