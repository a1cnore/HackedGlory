// functions/00966 — 23 functions
#include "libGameKindred.h"




void FUN_00966074(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_00f1c904(param_2,local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_00f1c8ec(pvVar1,param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00966108(long param_1)

{
  FUN_00966074(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00966110(long param_1)

{
  FUN_00966074(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00966118(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_1 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 != (undefined8 *)0x0) {
    do {
      uVar4 = FUN_00965f68(*puVar6);
      if ((uVar4 & 1) == 0) {
        puVar6 = (undefined8 *)*param_1;
        plVar7 = (long *)puVar6[2];
        if (*plVar7 != 0) {
          do {
            local_50 = 0;
            uVar3 = FUN_00f1c800(*(undefined8 *)(*plVar7 + 8),&local_50,0);
            FUN_00966074(local_68,*(undefined8 *)(*plVar7 + 8));
            uVar5 = FUN_00f3428c();
            pvVar1 = (void *)((ulong)local_68 | 1);
            if ((local_68[0] & 1) != 0) {
              pvVar1 = local_58;
            }
            FUN_00f335cc(uVar5,pvVar1,local_50,uVar3);
            FUN_0096204c(&DAT_02c7ed18,local_68);
            if ((local_68[0] & 1) != 0) {
              operator_delete(local_58);
            }
            plVar7 = plVar7 + 1;
          } while (*plVar7 != 0);
          puVar6 = (undefined8 *)*param_1;
        }
        FUN_00965ffc(*puVar6);
      }
      param_1 = param_1 + 1;
      puVar6 = (undefined8 *)*param_1;
    } while (puVar6 != (undefined8 *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00966224(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,"*KindredEffects*");
  FUN_00966254(uVar1,param_1);
  return;
}




void FUN_00966254(long *param_1,char *param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  byte local_78 [16];
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar8 = (long *)*param_1;
  puVar7 = (undefined8 *)*plVar8;
  while( true ) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_009662b4;
    iVar3 = strcmp((char *)*puVar7,param_2);
    if ((iVar3 == 0) && (uVar5 = FUN_00965f68(param_2), (uVar5 & 1) == 0)) break;
    plVar8 = plVar8 + 1;
    puVar7 = (undefined8 *)*plVar8;
  }
  puVar7 = (undefined8 *)*plVar8;
  plVar9 = (long *)puVar7[2];
  if (*plVar9 != 0) {
    do {
      local_60 = 0;
      uVar4 = FUN_00f1c800(*(undefined8 *)(*plVar9 + 8),&local_60,0);
      FUN_00966074(local_78,*(undefined8 *)(*plVar9 + 8));
      uVar6 = FUN_00f3428c();
      pvVar1 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar1 = local_68;
      }
      FUN_00f335cc(uVar6,pvVar1,local_60,uVar4);
      FUN_0096204c(&DAT_02c7ed18,local_78);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      plVar9 = plVar9 + 1;
    } while (*plVar9 != 0);
    puVar7 = (undefined8 *)*plVar8;
  }
  FUN_00965ffc(*puVar7);
  if ((*(long *)(*plVar8 + 8) != 0) && (uVar5 = FUN_00e6a488(), (uVar5 & 1) == 0)) {
    FUN_00966254(param_1,*(undefined8 *)(*plVar8 + 8));
  }
LAB_009662b4:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_009663a8(char *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((param_1 != (char *)0x0) && (uVar2 = FUN_00e6a488(param_1), (uVar2 & 1) == 0)) {
    uVar3 = FUN_00d6eb50(0);
    plVar4 = (long *)FUN_00d6eb5c(uVar3,"*KindredEffects*");
    puVar5 = *(undefined8 **)*plVar4;
    plVar4 = (long *)*plVar4;
    while (puVar5 != (undefined8 *)0x0) {
      iVar1 = strcmp((char *)*puVar5,param_1);
      if ((iVar1 == 0) && (uVar2 = FUN_00965f68(param_1), (uVar2 & 1) == 0)) {
        return *plVar4;
      }
      puVar5 = (undefined8 *)plVar4[1];
      plVar4 = plVar4 + 1;
    }
  }
  return 0;
}




void FUN_0096642c(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 2) != 0) {
    *param_2 = 0;
  }
  lVar2 = FUN_009663a8();
  if (lVar2 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0xffffffff;
    do {
      plVar4 = *(long **)(lVar2 + 0x10);
      lVar3 = *plVar4;
      while (lVar3 != 0) {
        plVar4 = plVar4 + 1;
        FUN_00966570(&local_68,lVar3,lVar3);
        lVar3 = *plVar4;
      }
      lVar2 = FUN_009663a8(*(undefined8 *)(lVar2 + 8));
    } while (lVar2 != 0);
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar5 = (ulong)uVar6;
      if ((uint)local_68 <= uVar6) break;
      uVar7 = uVar6 + 1;
    } while (*(int *)(local_60 + uVar5 * 8 + 4) == -1);
    if ((uint)local_68 != uVar6) {
      do {
        FUN_0091f584(param_2,local_48 + (ulong)*(uint *)(local_60 + uVar5 * 8 + 4) * 4);
        uVar7 = (uint)uVar5;
        do {
          uVar7 = uVar7 + 1;
          uVar5 = (ulong)uVar7;
          if ((uint)local_68 <= uVar7) break;
        } while (*(int *)(local_60 + uVar5 * 8 + 4) == -1);
      } while ((uint)local_68 != uVar7);
    }
    FUN_00966798(&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00966570(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar8 = *param_1;
  uVar1 = *param_2;
  if (uVar8 != 0) {
    lVar9 = *(long *)(param_1 + 2);
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = uVar1 / uVar8;
    }
    uVar10 = uVar1 - uVar10 * uVar8;
    while ((*(uint *)(lVar9 + (ulong)uVar10 * 8) != uVar1 &&
           (*(int *)(lVar9 + (ulong)uVar10 * 8 + 4) != -1))) {
      uVar11 = uVar8;
      if (0 < (int)uVar10) {
        uVar11 = uVar10;
      }
      uVar10 = uVar11 - 1;
    }
    if ((uVar10 != 0xffffffff) &&
       (uVar10 = *(uint *)(lVar9 + (ulong)uVar10 * 8 + 4), uVar10 != 0xffffffff)) {
      uVar6 = 0;
      *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar10 * 4) = *param_3;
      goto LAB_0096676c;
    }
  }
  uVar10 = param_1[4];
  param_1[4] = uVar10 + 1;
  if (uVar8 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar5 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar3 = 0;
          if ((uint)local_58 != 0) {
            uVar3 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar3 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar2 = *piVar13;
          while (iVar2 != -1) {
            uVar3 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar3 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar3 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar2 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar5;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar9 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar8 != 0) {
    uVar10 = uVar1 / uVar8;
  }
  uVar12 = (ulong)(uVar1 - uVar10 * uVar8);
  piVar13 = (int *)(lVar9 + uVar12 * 8 + 4);
  iVar5 = *piVar13;
  while (iVar5 != -1) {
    uVar10 = uVar8;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar9 + uVar12 * 8 + 4);
    iVar5 = *piVar13;
  }
  *(uint *)(lVar9 + uVar12 * 8) = uVar1;
  iVar5 = FUN_00966b90(param_1,param_3);
  *piVar13 = iVar5;
  uVar6 = 1;
LAB_0096676c:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00966798(uint *param_1)

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
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
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




void FUN_00966818(undefined8 param_1,uint *param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  byte local_78 [16];
  void *local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)FUN_009663a8();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00965ffc(*puVar4);
    do {
      plVar9 = (long *)puVar4[2];
      piVar8 = (int *)*plVar9;
      while (piVar8 != (int *)0x0) {
        uVar7 = (ulong)*param_2;
        if (*param_2 != 0) {
          lVar10 = 0;
          do {
            if (*piVar8 == *(int *)(*(long *)(param_2 + 2) + lVar10)) {
              local_60 = 0;
              uVar3 = FUN_00f1c800(*(undefined8 *)(*plVar9 + 8),&local_60,0);
              FUN_00966074(local_78,*(undefined8 *)(*plVar9 + 8));
              uVar5 = FUN_00f3428c();
              pvVar1 = (void *)((ulong)local_78 | 1);
              if ((local_78[0] & 1) != 0) {
                pvVar1 = local_68;
              }
              FUN_00f335cc(uVar5,pvVar1,local_60,uVar3);
              FUN_0096204c(&DAT_02c7ed18,local_78);
              uVar6 = *param_2;
              if ((ulong)uVar6 * 4 + -4 != lVar10) {
                *(undefined4 *)(*(long *)(param_2 + 2) + lVar10) =
                     *(undefined4 *)(*(long *)(param_2 + 2) + -4 + (ulong)uVar6 * 4);
                uVar6 = *param_2;
              }
              *param_2 = uVar6 - 1;
              if ((local_78[0] & 1) != 0) {
                operator_delete(local_68);
              }
              break;
            }
            uVar7 = uVar7 - 1;
            lVar10 = lVar10 + 4;
          } while (uVar7 != 0);
        }
        plVar9 = plVar9 + 1;
        piVar8 = (int *)*plVar9;
      }
      puVar4 = (undefined8 *)FUN_009663a8(puVar4[1]);
    } while (puVar4 != (undefined8 *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00966984(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,"*KindredEffects*");
  puVar2 = (undefined8 *)*param_1;
  while (puVar2 != (undefined8 *)0x0) {
    param_1 = param_1 + 1;
    FUN_00966254(uVar1,*puVar2);
    puVar2 = (undefined8 *)*param_1;
  }
  return;
}




void FUN_009669d4(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  while (puVar1 != (undefined8 *)0x0) {
    param_2 = param_2 + 1;
    FUN_00966254(param_1,*puVar1);
    puVar1 = (undefined8 *)*param_2;
  }
  return;
}




void FUN_00966a10(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)*param_1;
  if (*plVar5 != 0) {
    do {
      local_50 = 0;
      uVar3 = FUN_00f1c800(*(undefined8 *)(*plVar5 + 8),&local_50,0);
      FUN_00966074(local_68,*(undefined8 *)(*plVar5 + 8));
      uVar4 = FUN_00f3428c();
      pvVar1 = (void *)((ulong)local_68 | 1);
      if ((local_68[0] & 1) != 0) {
        pvVar1 = local_58;
      }
      FUN_00f335cc(uVar4,pvVar1,local_50,uVar3);
      FUN_0096204c(&DAT_02c7ed18,local_68);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      plVar5 = plVar5 + 1;
    } while (*plVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00966aec(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((uint)DAT_02c7ed18 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = DAT_02c7ed20;
      uVar1 = FUN_00f3428c();
      if ((*(byte *)(lVar2 + lVar3) & 1) == 0) {
        lVar2 = lVar2 + lVar3 + 1;
      }
      else {
        lVar2 = *(long *)(lVar2 + lVar3 + 0x10);
      }
      FUN_00f336dc(uVar1,lVar2);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < (uint)DAT_02c7ed18);
  }
  FUN_00951534(&DAT_02c7ed08,0);
  FUN_00951534(&DAT_02c7ed18,0);
  FUN_00f3428c();
  FUN_00f31f0c();
  return;
}




void FUN_00966b90(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00966c24(param_1 + 0x18,auStack_40);
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 4);
  }
  else {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 4);
    *(undefined4 *)(param_1 + 0x28) = *puVar2;
  }
  *puVar2 = *param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00966c24(uint *param_1,undefined4 *param_2)

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
    FUN_00966cac(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00966cac(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined4 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00966d2c(char *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  
  DAT_02be3110 = 0;
  if ((param_1 != (char *)0x0) && (DAT_02be3118 != -1)) {
    ppuVar3 = &PTR_s_unknown_02be3120;
    do {
      iVar2 = strcmp(param_1,*ppuVar3);
      if (iVar2 == 0) {
        DAT_02be3110 = *(undefined4 *)(ppuVar3 + -1);
        return;
      }
      ppuVar1 = ppuVar3 + 1;
      ppuVar3 = ppuVar3 + 2;
    } while (*(int *)ppuVar1 != -1);
  }
  return;
}




undefined4 FUN_00966da4(void)

{
  return DAT_02be3110;
}




undefined8 FUN_00966db0(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_02be3118 != -1) {
    iVar2 = DAT_02be3118;
    piVar1 = &DAT_02be3118;
    do {
      if (iVar2 == DAT_02be3110) {
        return *(undefined8 *)(piVar1 + 2);
      }
      iVar2 = piVar1[4];
      piVar1 = piVar1 + 4;
    } while (iVar2 != -1);
  }
  return 0;
}




undefined8 FUN_00966df8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_02be3118 != -1) {
    iVar2 = DAT_02be3118;
    piVar1 = &DAT_02be3118;
    do {
      if (iVar2 == param_1) {
        return *(undefined8 *)(piVar1 + 2);
      }
      iVar2 = piVar1[4];
      piVar1 = piVar1 + 4;
    } while (iVar2 != -1);
  }
  return 0;
}




void FUN_00966e38(void)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(DAT_02be3110) {
  case 2:
    pcVar3 = "PROFILE_REGION_NAME_ACC";
    break;
  case 3:
    pcVar3 = "PROFILE_REGION_NAME_NA";
    break;
  case 4:
    pcVar3 = "PROFILE_REGION_NAME_SA";
    break;
  case 5:
    pcVar3 = "PROFILE_REGION_NAME_EU";
    break;
  case 6:
    pcVar3 = "PROFILE_REGION_NAME_SEA";
    break;
  case 7:
    pcVar3 = "PROFILE_REGION_NAME_CN";
    break;
  case 8:
    pcVar3 = "PROFILE_REGION_NAME_EA";
    break;
  default:
    if (((DAT_02c7ed38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02c7ed38), iVar2 != 0)) {
      FUN_00e70510(&DAT_02c7ed28);
      __cxa_atexit(FUN_0090e338,&DAT_02c7ed28,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_02c7ed38);
    }
    if (((DAT_02c7ed58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02c7ed58), iVar2 != 0)) {
      DAT_02c7ed40 = 0;
      DAT_02c7ed48 = 0;
      DAT_02c7ed50 = 0;
      __cxa_atexit(FUN_008fa5ec,&DAT_02c7ed40,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_02c7ed58);
    }
    FUN_00e8138c(0,&DAT_02c7ed40,0);
    FUN_00e70570(&local_38,&DAT_02c7ed40);
    FUN_00910394(&DAT_02c7ed28,&local_38);
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
    FUN_00e705c8(&local_38,".superevilmegacorp.net");
    FUN_00e705c8(&local_48,&DAT_01e4a398);
    FUN_00e71248(&DAT_02c7ed28,0,&local_38,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
    puVar4 = &DAT_02c7ed28;
    goto LAB_00966f9c;
  }
  puVar4 = (undefined *)FUN_00e6ce7c(pcVar3,0);
LAB_00966f9c:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar4);
  }
  return;
}

