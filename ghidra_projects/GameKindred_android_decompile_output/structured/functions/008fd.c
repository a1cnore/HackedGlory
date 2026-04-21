// functions/008fd — 16 functions
#include "libGameKindred.h"




void FUN_008fd0a0(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_008fd118(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




long FUN_008fd190(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  long local_50;
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)(param_2 + -1);
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  local_40 = 0x100005;
  local_48 = (ulong)(uint)((int)pcVar3 - (int)param_2);
  lVar4 = *param_1;
  local_50 = param_2;
  if ((int)param_1[1] != 0) {
    do {
      uVar2 = FUN_008fd23c(&local_50,lVar4);
      if ((uVar2 & 1) != 0) break;
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}




bool FUN_008fd23c(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 2) >> 0x16 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 1);
  }
  else {
    uVar4 = 0xf - *(byte *)((long)param_1 + 0xf);
  }
  if ((*(uint *)(param_2 + 2) >> 0x16 & 1) == 0) {
    uVar3 = *(uint *)(param_2 + 1);
  }
  else {
    uVar3 = 0xf - *(byte *)((long)param_2 + 0xf);
  }
  bVar1 = false;
  if (uVar4 == uVar3) {
    if ((*(uint *)(param_1 + 2) >> 0x16 & 1) == 0) {
      param_1 = (undefined8 *)*param_1;
    }
    if ((*(uint *)(param_2 + 2) >> 0x16 & 1) == 0) {
      param_2 = (undefined8 *)*param_2;
    }
    if (param_1 == param_2) {
      bVar1 = true;
    }
    else {
      iVar2 = memcmp(param_1,param_2,(ulong)uVar4);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}




void FUN_008fd2c4(long param_1)

{
  FUN_008fd2f8();
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_008fd2f8(undefined8 *param_1)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)*param_1;
  while( true ) {
    if (__ptr == (void *)0x0) {
      return;
    }
    if ((void *)param_1[2] == __ptr) break;
    pvVar1 = *(void **)((long)__ptr + 0x10);
    free(__ptr);
    *param_1 = pvVar1;
    __ptr = pvVar1;
  }
  *(undefined8 *)((long)__ptr + 8) = 0;
  return;
}




undefined8 * FUN_008fd344(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_78;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78 = param_1[5];
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  local_70 = (void *)0x0;
  local_50 = 0x100;
  local_48 = 0;
  local_40 = 0;
  auVar4 = FUN_008fd410(&local_78,param_2,param_1);
  *(undefined1 (*) [16])(param_1 + 0xb) = auVar4;
  if (auVar4._0_4_ == 0) {
    lVar2 = param_1[8];
    param_1[8] = lVar2 + -0x18;
    uVar3 = *(undefined8 *)(lVar2 + -0x18);
    param_1[1] = *(undefined8 *)(lVar2 + -0x10);
    *param_1 = uVar3;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + -8);
    *(undefined4 *)(lVar2 + -8) = 0;
  }
  param_1[8] = param_1[7];
  FUN_008fec5c(param_1 + 5);
  free(local_68);
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_008fd410(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pbVar1 = (byte *)*param_2;
  while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
    pbVar1 = pbVar1 + 1;
  }
  *param_2 = pbVar1;
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_008fd4e8;
  if (*pbVar1 == 0) {
    lVar2 = param_2[1];
    uVar3 = 1;
  }
  else {
    FUN_008fd500(param_1,param_2);
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_008fd4e8;
    pbVar1 = (byte *)*param_2;
    while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
      pbVar1 = pbVar1 + 1;
    }
    *param_2 = pbVar1;
    if ((*(int *)(param_1 + 0x30) != 0) || (*pbVar1 == 0)) goto LAB_008fd4e8;
    lVar2 = param_2[1];
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(long *)(param_1 + 0x38) = (long)pbVar1 - lVar2;
LAB_008fd4e8:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return *(undefined1 (*) [16])(param_1 + 0x30);
}




void FUN_008fd500(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  if (bVar1 < 0x6e) {
    if (bVar1 == 0x22) {
      FUN_008fd774();
      return;
    }
    if (bVar1 == 0x5b) {
      FUN_008fdaa0();
      return;
    }
    if (bVar1 == 0x66) {
      FUN_008fd6b4();
      return;
    }
  }
  else {
    if (bVar1 == 0x7b) {
      FUN_008fd834();
      return;
    }
    if (bVar1 == 0x74) {
      FUN_008fd608();
      return;
    }
    if (bVar1 == 0x6e) {
      FUN_008fd560();
      return;
    }
  }
  FUN_008fdc54();
  return;
}




void FUN_008fd560(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'u') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'l') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 'l') {
        puVar1 = *(undefined8 **)(param_3 + 0x40);
        puVar4 = puVar1 + 3;
        if (*(undefined8 **)(param_3 + 0x48) <= puVar4) {
          FUN_008fe2e0(param_3 + 0x28,1);
          puVar1 = *(undefined8 **)(param_3 + 0x40);
          puVar4 = puVar1 + 3;
        }
        *(undefined8 **)(param_3 + 0x40) = puVar4;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        return;
      }
    }
  }
  lVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(long *)(param_1 + 0x38) = (lVar2 + -1) - lVar3;
  return;
}




void FUN_008fd608(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'r') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'u') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 'e') {
        puVar1 = *(undefined8 **)(param_3 + 0x40);
        puVar4 = puVar1 + 3;
        if (*(undefined8 **)(param_3 + 0x48) <= puVar4) {
          FUN_008fe2e0(param_3 + 0x28,1);
          puVar1 = *(undefined8 **)(param_3 + 0x40);
          puVar4 = puVar1 + 3;
        }
        *(undefined8 **)(param_3 + 0x40) = puVar4;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0x102;
        return;
      }
    }
  }
  lVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(long *)(param_1 + 0x38) = (lVar2 + -1) - lVar3;
  return;
}




void FUN_008fd6b4(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'a') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'l') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 's') {
        lVar2 = lVar3 + 5;
        *param_2 = lVar2;
        if (*(char *)(lVar3 + 4) == 'e') {
          puVar1 = *(undefined8 **)(param_3 + 0x40);
          puVar4 = puVar1 + 3;
          if (*(undefined8 **)(param_3 + 0x48) <= puVar4) {
            FUN_008fe2e0(param_3 + 0x28,1);
            puVar1 = *(undefined8 **)(param_3 + 0x40);
            puVar4 = puVar1 + 3;
          }
          *(undefined8 **)(param_3 + 0x40) = puVar4;
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0x101;
          return;
        }
      }
    }
  }
  lVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(long *)(param_1 + 0x38) = (lVar2 + -1) - lVar3;
  return;
}




void FUN_008fd774(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_60;
  long lStack_58;
  long *local_50;
  long local_48;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lStack_58 = param_2[1];
  local_60 = *param_2;
  local_40 = 0;
  local_50 = param_2;
  local_48 = param_1;
  FUN_008fe3b4(param_1,&local_60,&local_48);
  if (*(int *)(param_1 + 0x30) == 0) {
    lVar3 = *(long *)(local_48 + 0x18) - (ulong)local_40;
    *(long *)(local_48 + 0x18) = lVar3;
    uVar2 = FUN_008fe574(param_3,lVar3,local_40 - 1,1);
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(long *)(param_1 + 0x38) = local_60 - lStack_58;
    }
  }
  local_50[1] = lStack_58;
  *local_50 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_008fd834(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  
  *param_2 = *param_2 + 1;
  puVar2 = *(undefined8 **)(param_3 + 0x40);
  puVar5 = puVar2 + 3;
  if (*(undefined8 **)(param_3 + 0x48) <= puVar5) {
    FUN_008fe2e0(param_3 + 0x28,1);
    puVar2 = *(undefined8 **)(param_3 + 0x40);
    puVar5 = puVar2 + 3;
  }
  *(undefined8 **)(param_3 + 0x40) = puVar5;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 3;
  pbVar3 = (byte *)*param_2;
  while ((*pbVar3 < 0x21 && ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0))) {
    pbVar3 = pbVar3 + 1;
  }
  *param_2 = (long)pbVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar3 == 0x22) {
      iVar8 = 0;
      do {
        FUN_008fd774(param_1,param_2,param_3,1);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar6 = (byte *)*param_2;
        while ((*pbVar6 < 0x21 && ((1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0))) {
          pbVar6 = pbVar6 + 1;
        }
        *param_2 = (long)pbVar6;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = pbVar6 + 1;
        *param_2 = (long)pbVar3;
        if (*pbVar6 != 0x3a) {
          lVar4 = param_2[1];
          uVar7 = 5;
          goto LAB_008fda3c;
        }
        while ((*pbVar3 < 0x21 && ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0))) {
          pbVar3 = pbVar3 + 1;
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_008fd500(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar6 = (byte *)*param_2;
        while ((*pbVar6 < 0x21 && ((1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0))) {
          pbVar6 = pbVar6 + 1;
        }
        *param_2 = (long)pbVar6;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = pbVar6 + 1;
        *param_2 = (long)pbVar3;
        iVar8 = iVar8 + 1;
        if (*pbVar6 != 0x2c) {
          if (*pbVar6 != 0x7d) {
            uVar7 = 6;
            pbVar3 = pbVar6 + (1 - param_2[1]);
            goto LAB_008fda40;
          }
          uVar1 = FUN_008fe978(param_3,iVar8);
          if ((uVar1 & 1) != 0) {
            return;
          }
          pbVar3 = (byte *)*param_2;
          lVar4 = param_2[1];
          uVar7 = 0x10;
          goto LAB_008fda3c;
        }
        while ((*pbVar3 < 0x21 && ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0))) {
          pbVar3 = pbVar3 + 1;
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
      } while (*pbVar3 == 0x22);
    }
    else if (*pbVar3 == 0x7d) {
      *param_2 = (long)(pbVar3 + 1);
      lVar4 = *(long *)(param_3 + 0x40);
      *(undefined4 *)(lVar4 + -8) = 3;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
      return;
    }
    lVar4 = param_2[1];
    uVar7 = 4;
LAB_008fda3c:
    pbVar3 = pbVar3 + -lVar4;
LAB_008fda40:
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    *(byte **)(param_1 + 0x38) = pbVar3;
  }
  return;
}




void FUN_008fdaa0(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  
  *param_2 = *param_2 + 1;
  puVar2 = *(undefined8 **)(param_3 + 0x40);
  puVar5 = puVar2 + 3;
  if (*(undefined8 **)(param_3 + 0x48) <= puVar5) {
    FUN_008fe2e0(param_3 + 0x28,1);
    puVar2 = *(undefined8 **)(param_3 + 0x40);
    puVar5 = puVar2 + 3;
  }
  *(undefined8 **)(param_3 + 0x40) = puVar5;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 4;
  pbVar3 = (byte *)*param_2;
  while ((*pbVar3 < 0x21 && ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0))) {
    pbVar3 = pbVar3 + 1;
  }
  *param_2 = (long)pbVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar3 == 0x5d) {
      *param_2 = (long)(pbVar3 + 1);
      lVar4 = *(long *)(param_3 + 0x40);
      *(undefined4 *)(lVar4 + -8) = 4;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
    }
    else {
      iVar8 = 0;
      do {
        FUN_008fd500(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = (byte *)*param_2;
        while ((*pbVar3 < 0x21 && ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0))) {
          pbVar3 = pbVar3 + 1;
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar6 = pbVar3 + 1;
        *param_2 = (long)pbVar6;
        iVar8 = iVar8 + 1;
        if (*pbVar3 != 0x2c) {
          if (*pbVar3 == 0x5d) {
            uVar1 = FUN_008fe9f4(param_3,iVar8);
            if ((uVar1 & 1) != 0) {
              return;
            }
            pbVar3 = (byte *)*param_2;
            lVar4 = param_2[1];
            uVar7 = 0x10;
          }
          else {
            lVar4 = param_2[1];
            pbVar3 = pbVar3 + 1;
            uVar7 = 7;
          }
          *(undefined4 *)(param_1 + 0x30) = uVar7;
          *(long *)(param_1 + 0x38) = (long)pbVar3 - lVar4;
          return;
        }
        while ((*pbVar6 < 0x21 && ((1L << ((ulong)*pbVar6 & 0x3f) & 0x100002600U) != 0))) {
          pbVar6 = pbVar6 + 1;
        }
        *param_2 = (long)pbVar6;
      } while (*(int *)(param_1 + 0x30) == 0);
    }
  }
  return;
}




void FUN_008fdc54(long param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  undefined4 uVar11;
  double *pdVar12;
  ulong uVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  double dVar20;
  double dVar21;
  
  pbVar14 = (byte *)*param_2;
  lVar1 = param_2[1];
  bVar2 = *pbVar14;
  pbVar19 = pbVar14 + 1;
  if (bVar2 != 0x2d) {
    pbVar19 = pbVar14;
  }
  uVar17 = *pbVar19 - 0x30;
  uVar7 = (ulong)uVar17;
  if (uVar17 == 0) {
    uVar8 = 0;
    bVar4 = false;
    uVar13 = 0;
    bVar5 = false;
    pbVar14 = pbVar19 + 1;
    dVar20 = 0.0;
    goto LAB_008fdf4c;
  }
  if (*pbVar19 - 0x31 < 9) {
    pbVar14 = pbVar19 + 1;
    uVar17 = (uint)*pbVar14;
    bVar3 = *pbVar14 - 0x30;
    if (bVar2 == 0x2d) {
      if (bVar3 < 10) {
        uVar13 = 0;
LAB_008fdcf4:
        uVar6 = (uint)uVar7;
        if (uVar6 < 0xccccccc) {
LAB_008fdd14:
          pbVar14 = pbVar19 + uVar13 + 2;
          uVar7 = (ulong)((uVar6 * 10 + uVar17) - 0x30);
          uVar17 = (uint)*pbVar14;
          uVar13 = uVar13 + 1;
          if (9 < uVar17 - 0x30) goto LAB_008fddb0;
          goto LAB_008fdcf4;
        }
        if (uVar6 != 0xccccccc) goto LAB_008fddec;
        if (uVar17 < 0x39) goto LAB_008fdd14;
        uVar7 = 0xccccccc;
LAB_008fddec:
        uVar17 = (uint)*pbVar14;
        bVar3 = *pbVar14 - 0x30;
        uVar8 = uVar7;
        if (bVar2 == 0x2d) {
          if (9 < bVar3) {
LAB_008fdee4:
            dVar20 = 0.0;
            bVar4 = false;
            goto LAB_008fdf48;
          }
          pbVar19 = pbVar14 + 1;
          do {
            if ((0xccccccccccccccb < uVar8) && ((uVar8 != 0xccccccccccccccc || (0x38 < uVar17))))
            goto LAB_008fdeec;
            uVar6 = uVar17 - 0x30;
            pbVar18 = pbVar19 + 1;
            uVar17 = (uint)*pbVar19;
            uVar8 = (ulong)uVar6 + uVar8 * 10;
            uVar13 = (ulong)((int)uVar13 + 1);
            pbVar14 = pbVar19;
            pbVar19 = pbVar18;
          } while (uVar17 - 0x30 < 10);
        }
        else {
          if (9 < bVar3) goto LAB_008fdee4;
          pbVar19 = pbVar14 + 1;
          do {
            if ((0x1999999999999998 < uVar8) && ((uVar8 != 0x1999999999999999 || (0x35 < uVar17))))
            goto LAB_008fdeec;
            uVar6 = uVar17 - 0x30;
            pbVar18 = pbVar19 + 1;
            uVar17 = (uint)*pbVar19;
            uVar8 = (ulong)uVar6 + uVar8 * 10;
            uVar13 = (ulong)((int)uVar13 + 1);
            pbVar14 = pbVar19;
            pbVar19 = pbVar18;
          } while (uVar17 - 0x30 < 10);
        }
        dVar20 = 0.0;
        bVar4 = false;
        pbVar14 = pbVar18 + -1;
        goto LAB_008fdf48;
      }
    }
    else if (bVar3 < 10) {
      uVar13 = 0;
      do {
        uVar6 = (uint)uVar7;
        if (0x19999998 < uVar6) {
          if (uVar6 != 0x19999999) goto LAB_008fddec;
          if (0x35 < uVar17) {
            uVar7 = 0x19999999;
            goto LAB_008fddec;
          }
        }
        pbVar14 = pbVar19 + uVar13 + 2;
        uVar7 = (ulong)((uVar6 * 10 + uVar17) - 0x30);
        uVar17 = (uint)*pbVar14;
        uVar13 = uVar13 + 1;
      } while (uVar17 - 0x30 < 10);
LAB_008fddb0:
      dVar20 = 0.0;
      uVar8 = 0;
      bVar4 = false;
      bVar5 = false;
      pbVar14 = pbVar19 + uVar13 + 1;
      goto LAB_008fdf4c;
    }
    dVar20 = 0.0;
    uVar8 = 0;
    bVar4 = false;
    uVar13 = 0;
    bVar5 = false;
    goto LAB_008fdf4c;
  }
  lVar9 = (long)pbVar19 - lVar1;
  uVar11 = 3;
  goto LAB_008fe2a4;
LAB_008fdeec:
  dVar20 = (double)uVar8;
  bVar3 = *pbVar14;
  while (bVar3 - 0x30 < 10) {
    if (1.7976931348623158e+307 <= dVar20) {
      *(undefined4 *)(param_1 + 0x30) = 0xd;
      *(long *)(param_1 + 0x38) = (long)pbVar14 - lVar1;
      goto LAB_008fe2ac;
    }
    dVar20 = dVar20 * 10.0 + (double)(int)(bVar3 - 0x30);
    bVar3 = pbVar14[1];
    pbVar14 = pbVar14 + 1;
  }
  bVar4 = true;
LAB_008fdf48:
  bVar5 = true;
LAB_008fdf4c:
  uVar17 = (uint)*pbVar14;
  if (*pbVar14 == 0x2e) {
    pbVar19 = pbVar14 + 1;
    bVar3 = *pbVar19;
    if (9 < bVar3 - 0x30) {
      lVar9 = (long)pbVar19 - lVar1;
      uVar11 = 0xe;
      goto LAB_008fe2a4;
    }
    if (bVar4) {
      iVar15 = 0;
    }
    else {
      lVar9 = 0;
      if (!bVar5) {
        uVar8 = uVar7;
      }
      do {
        lVar16 = lVar9;
        uVar17 = (uint)bVar3;
        lVar9 = lVar16;
        if ((uVar8 >> 0x35 != 0) || (0x39 < uVar17)) goto LAB_008fdfec;
        pbVar19 = pbVar14 + lVar16 + 2;
        bVar3 = *pbVar19;
        uVar8 = (ulong)(uVar17 - 0x30) + uVar8 * 10;
        uVar17 = (uint)uVar13;
        if (uVar8 != 0) {
          uVar17 = uVar17 + 1;
        }
        uVar13 = (ulong)uVar17;
        lVar9 = lVar16 + 1;
      } while (0x2f < bVar3);
      pbVar19 = pbVar14 + lVar16 + 2;
LAB_008fdfec:
      iVar15 = -(int)lVar9;
      dVar20 = (double)uVar8;
    }
    bVar3 = *pbVar19;
    while (uVar17 = (uint)bVar3, uVar17 - 0x30 < 10) {
      if ((int)uVar13 < 0x11) {
        dVar20 = dVar20 * 10.0 + (double)(int)(uVar17 - 0x30);
        iVar15 = iVar15 + -1;
        if (0.0 < dVar20) {
          uVar13 = (ulong)((int)uVar13 + 1);
        }
      }
      pbVar19 = pbVar19 + 1;
      bVar3 = *pbVar19;
    }
    bVar4 = true;
  }
  else {
    iVar15 = 0;
    pbVar19 = pbVar14;
  }
  if ((uVar17 | 0x20) == 0x65) {
    if (!bVar5) {
      uVar8 = uVar7;
    }
    bVar3 = pbVar19[1];
    if (!bVar4) {
      dVar20 = (double)uVar8;
    }
    if (bVar3 == 0x2d) {
      pbVar19 = pbVar19 + 2;
      bVar4 = true;
    }
    else if (bVar3 == 0x2b) {
      bVar4 = false;
      pbVar19 = pbVar19 + 2;
    }
    else {
      bVar4 = false;
      pbVar19 = pbVar19 + 1;
    }
    uVar6 = *pbVar19 - 0x30;
    if (uVar6 < 10) {
      pbVar19 = pbVar19 + 1;
      if (bVar4) {
        bVar3 = *pbVar19;
        while (bVar3 - 0x30 < 10) {
          uVar6 = (uVar6 * 10 + (uint)bVar3) - 0x30;
          pbVar19 = pbVar19 + 1;
          if (0xccccccb < (int)uVar6) {
            bVar3 = *pbVar19;
            while (bVar3 - 0x30 < 10) {
              pbVar19 = pbVar19 + 1;
              bVar3 = *pbVar19;
            }
          }
          bVar3 = *pbVar19;
        }
LAB_008fe1a4:
        uVar17 = -uVar6;
        if (!bVar4) {
          uVar17 = uVar6;
        }
        goto LAB_008fe1ac;
      }
      do {
        if (9 < *pbVar19 - 0x30) goto LAB_008fe1a4;
        uVar6 = ((uint)*pbVar19 + uVar6 * 10) - 0x30;
        pbVar19 = pbVar19 + 1;
      } while ((int)uVar6 <= 0x134 - iVar15);
      lVar9 = (long)pbVar19 - lVar1;
      uVar11 = 0xd;
    }
    else {
      lVar9 = (long)pbVar19 - lVar1;
      uVar11 = 0xf;
    }
  }
  else {
    if (bVar4) {
      uVar17 = 0;
LAB_008fe1ac:
      iVar15 = uVar17 + iVar15;
      if (iVar15 < -0x134) {
        dVar21 = 0.0;
        if (-0x269 < iVar15) {
          dVar21 = (dVar20 / 1e+308) / *(double *)(&DAT_01b90e20 + (long)(-0x134 - iVar15) * 8);
        }
      }
      else if (iVar15 < 0) {
        dVar21 = dVar20 / *(double *)(&DAT_01b90e20 + (long)iVar15 * -8);
      }
      else {
        dVar21 = dVar20 * *(double *)(&DAT_01b90e20 + (long)iVar15 * 8);
      }
      pdVar10 = *(double **)(param_3 + 0x40);
      dVar20 = -dVar21;
      if (bVar2 != 0x2d) {
        dVar20 = dVar21;
      }
      pdVar12 = pdVar10 + 3;
      if (*(double **)(param_3 + 0x48) <= pdVar12) {
        FUN_008fe2e0(param_3 + 0x28,1);
        pdVar10 = *(double **)(param_3 + 0x40);
        pdVar12 = pdVar10 + 3;
      }
      *(double **)(param_3 + 0x40) = pdVar12;
      pdVar10[1] = 0.0;
      *(undefined4 *)(pdVar10 + 2) = 0x4206;
      *pdVar10 = dVar20;
      pbVar14 = pbVar19;
      goto LAB_008fe2ac;
    }
    if (bVar5) {
      if (bVar2 == 0x2d) {
        uVar7 = FUN_008fea70(param_3,-uVar8);
      }
      else {
        uVar7 = FUN_008feb08(param_3,uVar8);
      }
    }
    else if (bVar2 == 0x2d) {
      uVar7 = FUN_008feb8c(param_3,-(int)uVar7);
    }
    else {
      uVar7 = FUN_008febf4(param_3);
    }
    pbVar14 = pbVar19;
    if ((uVar7 & 1) != 0) goto LAB_008fe2ac;
    lVar9 = (long)pbVar19 - lVar1;
    uVar11 = 0x10;
  }
LAB_008fe2a4:
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(long *)(param_1 + 0x38) = lVar9;
  pbVar14 = pbVar19;
LAB_008fe2ac:
  *param_2 = (long)pbVar14;
  param_2[1] = lVar1;
  return;
}

