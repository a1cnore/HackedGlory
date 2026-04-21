// functions/00d76 — 36 functions
#include "libGameKindred.h"




void FUN_00d76030(long param_1)

{
  if (*(long **)(param_1 + 0x298) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d76040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x298) + 8))();
    return;
  }
  return;
}




void FUN_00d76048(long param_1)

{
  if (*(long **)(param_1 + 0x298) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d76058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x298) + 0x10))();
    return;
  }
  return;
}




void FUN_00d76060(long param_1)

{
  if (*(long **)(param_1 + 0x298) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d76070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x298) + 0x18))();
    return;
  }
  return;
}




void FUN_00d76078(long param_1)

{
  if (*(long **)(param_1 + 0x298) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d76088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x298) + 0x20))();
    return;
  }
  return;
}




void FUN_00d76090(undefined8 param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  FUN_00d76118(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00d76118(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  if (uVar3 != 0) {
    uVar4 = *param_2;
    lVar6 = *(long *)(param_1 + 0x30);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar4 / uVar3;
    }
    uVar5 = uVar4 - uVar5 * uVar3;
    while ((*(uint *)(lVar6 + (ulong)uVar5 * 8) != uVar4 &&
           (*(int *)(lVar6 + (ulong)uVar5 * 8 + 4) != -1))) {
      uVar2 = uVar3;
      if (0 < (int)uVar5) {
        uVar2 = uVar5;
      }
      uVar5 = uVar2 - 1;
    }
    if (((uVar5 != 0xffffffff) &&
        (uVar3 = *(uint *)(lVar6 + (ulong)uVar5 * 8 + 4), uVar3 != 0xffffffff)) &&
       (puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)uVar3 * 8),
       puVar1 != (undefined8 *)0x0)) {
      return *puVar1;
    }
  }
  return 0;
}




void FUN_00d76194(undefined8 param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    local_30[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  FUN_00d7621c(param_1,local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00d7621c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x58);
  if (uVar2 != 0) {
    uVar3 = *param_2;
    lVar5 = *(long *)(param_1 + 0x60);
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    uVar4 = uVar3 - uVar4 * uVar2;
    while ((*(uint *)(lVar5 + (ulong)uVar4 * 8) != uVar3 &&
           (*(int *)(lVar5 + (ulong)uVar4 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 - 1;
    }
    if ((uVar4 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar5 + (ulong)uVar4 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 0x78) + (ulong)uVar2 * 0x10;
    }
  }
  return 0;
}




void FUN_00d76290(uint *param_1,undefined8 *param_2)

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
    FUN_00d767dc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00d76318(void *param_1)

{
  memset(param_1,0,0x204);
  return;
}




uint FUN_00d76334(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  uStack_2c = param_2[2];
  uVar2 = FUN_019bb994(&local_30,param_1,param_1 + 0x100,*(undefined4 *)(param_1 + 0x200),&local_38)
  ;
  if ((uVar2 & 1) == 0) {
    *param_2 = local_38;
    param_2[2] = local_34;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00d763b4(long param_1)

{
  return 3 < *(uint *)(param_1 + 0x200);
}




undefined8 * FUN_00d763c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = &PTR_FUN_0281e310;
  memset(param_1 + 0x11,0,0x204);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  uVar1 = CONCAT44(DAT_02bf257c,DAT_02bf257c);
  param_1[0x55] = CONCAT44(DAT_02bf257c,DAT_02bf257c);
  param_1[0x54] = uVar1;
  return param_1;
}




void FUN_00d76440(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d76448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d7644c(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00d764dc(param_1 + 0x18,auStack_40);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + uVar2 * 8);
  }
  *(undefined8 *)(lVar3 + uVar2 * 8) = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d764dc(uint *param_1,undefined8 *param_2)

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
    FUN_00d76564(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00d76564(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




ulong FUN_00d765e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00d7667c(param_1 + 0x18,auStack_48);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0x10);
  }
  FUN_00d76704(lVar2 + uVar3 * 0x10,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d7667c(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_00d76758(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00d76704(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00d767dc(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      lVar4 = lVar4 + -8;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return;
}




void FUN_00d76758(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_00d767dc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00d7685c(long param_1)

{
  long lVar1;
  
  DAT_031a96a0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a96a0 + 1;
  lVar1 = param_1 + (ulong)DAT_031a96a0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d76e30;
  *(code **)(lVar1 + 0xb8) = FUN_00d76e90;
  *(uint *)(lVar1 + 0xa4) = DAT_031a96a0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x68;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10e;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d768bc(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar9 = (undefined8 *)*param_2;
  if (puVar9 != (undefined8 *)0x0) {
    puVar1 = (uint *)(param_1 + 0x38);
    do {
      pbVar10 = (byte *)*puVar9;
      if (pbVar10 == (byte *)0x0) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0x811c9dc5;
        if (*pbVar10 != 0) {
          uVar15 = 0x811c9dc5;
          uVar7 = (uint)*pbVar10;
          do {
            pbVar10 = pbVar10 + 1;
            uVar15 = (uVar15 ^ uVar7) * 0x1000193;
            uVar7 = (uint)*pbVar10;
          } while (*pbVar10 != 0);
        }
      }
      uVar8 = *(uint *)(param_1 + 0x38);
      uVar7 = *(int *)(param_1 + 0x48) + 1;
      *(uint *)(param_1 + 0x48) = uVar7;
      if (uVar8 >> 1 < uVar7) {
        local_68 = 0;
        local_60 = (void *)0x0;
        FUN_009348c8(&local_68,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
        uVar7 = *puVar1;
        uVar12 = uVar7 - 1;
        uVar8 = (uint)local_68;
        if ((int)uVar12 < 0) {
          pvVar6 = *(void **)(param_1 + 0x40);
        }
        else {
          pvVar6 = *(void **)(param_1 + 0x40);
          do {
            iVar5 = *(int *)((long)pvVar6 + (ulong)uVar12 * 8 + 4);
            if (iVar5 != -1) {
              uVar7 = *(uint *)((long)pvVar6 + (ulong)uVar12 * 8);
              uVar3 = 0;
              if ((uint)local_68 != 0) {
                uVar3 = uVar7 / (uint)local_68;
              }
              uVar13 = (ulong)(uVar7 - uVar3 * (uint)local_68);
              piVar14 = (int *)((long)local_60 + uVar13 * 8 + 4);
              iVar2 = *piVar14;
              while (iVar2 != -1) {
                uVar3 = (uint)local_68;
                if (0 < (int)(uint)uVar13) {
                  uVar3 = (uint)uVar13;
                }
                uVar13 = (ulong)(uVar3 - 1);
                piVar14 = (int *)((long)local_60 + uVar13 * 8 + 4);
                iVar2 = *piVar14;
              }
              *(uint *)((long)local_60 + uVar13 * 8) = uVar7;
              *piVar14 = iVar5;
            }
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
          uVar7 = *puVar1;
        }
        *(undefined8 *)(param_1 + 0x38) = local_68;
        local_68 = CONCAT44(*(undefined4 *)(param_1 + 0x3c),uVar7);
        *(void **)(param_1 + 0x40) = local_60;
        if (pvVar6 == (void *)0x0) {
          local_60 = (void *)0x0;
        }
        else {
          local_60 = pvVar6;
          operator_delete__(pvVar6);
          local_68 = 0;
          local_60 = (void *)0x0;
          uVar8 = *puVar1;
        }
      }
      lVar11 = *(long *)(param_1 + 0x40);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar15 / uVar8;
      }
      uVar13 = (ulong)(uVar15 - uVar7 * uVar8);
      piVar14 = (int *)(lVar11 + uVar13 * 8 + 4);
      iVar5 = *piVar14;
      while (iVar5 != -1) {
        uVar7 = uVar8;
        if (0 < (int)(uint)uVar13) {
          uVar7 = (uint)uVar13;
        }
        uVar13 = (ulong)(uVar7 - 1);
        piVar14 = (int *)(lVar11 + uVar13 * 8 + 4);
        iVar5 = *piVar14;
      }
      *(uint *)(lVar11 + uVar13 * 8) = uVar15;
      iVar5 = FUN_00d77060(puVar1,param_2);
      *piVar14 = iVar5;
      param_2 = param_2 + 1;
      puVar9 = (undefined8 *)*param_2;
    } while (puVar9 != (undefined8 *)0x0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d76acc(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)*param_2;
  do {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    pbVar6 = (byte *)*puVar4;
    if (pbVar6 == (byte *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x811c9dc5;
      if (*pbVar6 != 0) {
        uVar5 = 0x811c9dc5;
        uVar3 = (uint)*pbVar6;
        do {
          pbVar6 = pbVar6 + 1;
          uVar5 = (uVar5 ^ uVar3) * 0x1000193;
          uVar3 = (uint)*pbVar6;
        } while (*pbVar6 != 0);
      }
    }
    uVar3 = *(uint *)(param_1 + 0x38);
    if (uVar3 == 0) {
LAB_00d76b78:
      uVar5 = 0xffffffff;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x40);
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar5 / uVar3;
      }
      uVar2 = uVar5 - uVar2 * uVar3;
      while ((*(uint *)(lVar7 + (ulong)uVar2 * 8) != uVar5 &&
             (*(int *)(lVar7 + (ulong)uVar2 * 8 + 4) != -1))) {
        uVar1 = uVar3;
        if (0 < (int)uVar2) {
          uVar1 = uVar2;
        }
        uVar2 = uVar1 - 1;
      }
      if (uVar2 == 0xffffffff) goto LAB_00d76b78;
      uVar5 = *(uint *)(lVar7 + (ulong)uVar2 * 8 + 4);
    }
    *(undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)uVar5 * 8) = *param_2;
    param_2 = param_2 + 1;
    puVar4 = (undefined8 *)*param_2;
  } while( true );
}




bool FUN_00d76b90(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    uVar3 = *param_2;
    lVar5 = *(long *)(param_1 + 0x40);
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    uVar4 = uVar3 - uVar4 * uVar2;
    while ((*(uint *)(lVar5 + (ulong)uVar4 * 8) != uVar3 &&
           (*(int *)(lVar5 + (ulong)uVar4 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar4 = uVar1 - 1;
    }
    if (uVar4 != 0xffffffff) {
      return *(int *)(lVar5 + (ulong)uVar4 * 8 + 4) != -1;
    }
  }
  return false;
}




undefined8 FUN_00d76bfc(long param_1,uint *param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar3 = *(uint *)(param_1 + 0x38);
  if (uVar3 != 0) {
    uVar4 = *param_2;
    lVar7 = *(long *)(param_1 + 0x40);
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar4 / uVar3;
    }
    uVar6 = uVar4 - uVar6 * uVar3;
    while ((*(uint *)(lVar7 + (ulong)uVar6 * 8) != uVar4 &&
           (*(int *)(lVar7 + (ulong)uVar6 * 8 + 4) != -1))) {
      uVar2 = uVar3;
      if (0 < (int)uVar6) {
        uVar2 = uVar6;
      }
      uVar6 = uVar2 - 1;
    }
    if (((uVar6 != 0xffffffff) &&
        (uVar3 = *(uint *)(lVar7 + (ulong)uVar6 * 8 + 4), uVar3 != 0xffffffff)) &&
       (plVar1 = (long *)(*(long *)(param_1 + 0x58) + (ulong)uVar3 * 8), plVar1 != (long *)0x0)) {
      lVar7 = *plVar1;
      fVar16 = *(float *)(lVar7 + 0x14);
      fVar20 = *(float *)(lVar7 + 0x18);
      fVar19 = *(float *)(lVar7 + 0x1c);
      uVar8 = *(undefined8 *)(lVar7 + 8);
      uVar5 = *(undefined4 *)(lVar7 + 0x10);
      param_3[1] = 0;
      *param_3 = 0x3f800000;
      param_3[3] = 0;
      param_3[2] = 0x3f80000000000000;
      param_3[5] = 0x3f800000;
      param_3[4] = 0;
      param_3[6] = uVar8;
      fVar16 = fVar16 * 0.017453292;
      *(undefined4 *)(param_3 + 7) = uVar5;
      *(undefined4 *)((long)param_3 + 0x3c) = 0x3f800000;
      fVar9 = sinf(fVar16);
      fVar16 = cosf(fVar16);
      fVar20 = fVar20 * 0.017453292;
      fVar10 = (float)param_3[2];
      fVar11 = (float)((ulong)param_3[2] >> 0x20);
      fVar14 = (float)param_3[3];
      fVar15 = (float)((ulong)param_3[3] >> 0x20);
      fVar12 = (float)param_3[4];
      fVar13 = (float)((ulong)param_3[4] >> 0x20);
      fVar17 = (float)param_3[5];
      fVar18 = (float)((ulong)param_3[5] >> 0x20);
      param_3[4] = CONCAT44(fVar13 * fVar16 - fVar11 * fVar9,fVar12 * fVar16 - fVar10 * fVar9);
      param_3[5] = CONCAT44(fVar18 * fVar16 - fVar15 * fVar9,fVar17 * fVar16 - fVar14 * fVar9);
      param_3[2] = CONCAT44(fVar11 * fVar16 + fVar13 * fVar9,fVar10 * fVar16 + fVar12 * fVar9);
      param_3[3] = CONCAT44(fVar15 * fVar16 + fVar18 * fVar9,fVar14 * fVar16 + fVar17 * fVar9);
      fVar9 = sinf(fVar20);
      fVar16 = cosf(fVar20);
      fVar19 = fVar19 * 0.017453292;
      fVar10 = (float)*param_3;
      fVar11 = (float)((ulong)*param_3 >> 0x20);
      fVar14 = (float)param_3[1];
      fVar15 = (float)((ulong)param_3[1] >> 0x20);
      fVar12 = (float)param_3[4];
      fVar13 = (float)((ulong)param_3[4] >> 0x20);
      fVar17 = (float)param_3[5];
      fVar18 = (float)((ulong)param_3[5] >> 0x20);
      *(float *)(param_3 + 5) = fVar9 * fVar14 + fVar16 * fVar17;
      *(float *)((long)param_3 + 0x2c) = fVar9 * fVar15 + fVar16 * fVar18;
      *param_3 = CONCAT44(fVar11 * fVar16 - fVar13 * fVar9,fVar10 * fVar16 - fVar12 * fVar9);
      param_3[1] = CONCAT44(fVar15 * fVar16 - fVar18 * fVar9,fVar14 * fVar16 - fVar17 * fVar9);
      *(float *)(param_3 + 4) = fVar9 * fVar10 + fVar16 * fVar12;
      *(float *)((long)param_3 + 0x24) = fVar9 * fVar11 + fVar16 * fVar13;
      fVar9 = sinf(fVar19);
      fVar16 = cosf(fVar19);
      fVar10 = (float)*param_3;
      fVar11 = (float)((ulong)*param_3 >> 0x20);
      fVar14 = (float)param_3[1];
      fVar15 = (float)((ulong)param_3[1] >> 0x20);
      fVar12 = (float)param_3[2];
      fVar13 = (float)((ulong)param_3[2] >> 0x20);
      fVar17 = (float)param_3[3];
      fVar18 = (float)((ulong)param_3[3] >> 0x20);
      *param_3 = CONCAT44(fVar11 * fVar16 + fVar13 * fVar9,fVar10 * fVar16 + fVar12 * fVar9);
      param_3[1] = CONCAT44(fVar15 * fVar16 + fVar18 * fVar9,fVar14 * fVar16 + fVar17 * fVar9);
      param_3[2] = CONCAT44(fVar13 * fVar16 - fVar11 * fVar9,fVar12 * fVar16 - fVar10 * fVar9);
      param_3[3] = CONCAT44(fVar18 * fVar16 - fVar15 * fVar9,fVar17 * fVar16 - fVar14 * fVar9);
      return 1;
    }
  }
  return 0;
}




undefined8 * FUN_00d76e30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_0281e340;
  param_1[5] = &PTR_FUN_0281e370;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return param_1;
}




void FUN_00d76e90(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d76e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d76e9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e340;
  param_1[5] = &PTR_FUN_0281e370;
  FUN_00d76fdc(param_1 + 7);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d76ee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e340;
  param_1[5] = &PTR_FUN_0281e370;
  FUN_00d76fdc(param_1 + 7);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d76f34(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_0281e340;
  *param_1 = &PTR_FUN_0281e370;
  FUN_00d76fdc(param_1 + 2);
  FUN_0198931c(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_00d76f7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_0281e340;
  *param_1 = &PTR_FUN_0281e370;
  FUN_00d76fdc(param_1 + 2);
  FUN_0198931c(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}




long FUN_00d76fcc(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d76fd4(long param_1)

{
  return param_1 + -0x28;
}




void FUN_00d76fdc(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

