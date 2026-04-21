// functions/00e9b — 10 functions
#include "libGameKindred.h"




long FUN_00e9b6ac(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_78;
  ulong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 4;
  if (*param_2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(long *)(param_2 + 2);
      if ((*(byte *)(lVar3 + lVar4) & 1) == 0) {
        local_78 = lVar3 + lVar4 + 1;
        uVar2 = (uint)(*(byte *)(lVar3 + lVar4) >> 1);
      }
      else {
        uVar2 = (uint)*(undefined8 *)(lVar3 + lVar4 + 8);
        local_78 = *(long *)(lVar3 + lVar4 + 0x10);
      }
      local_68 = 0x100005;
      local_70 = (ulong)uVar2;
      FUN_00ceeba8(&local_60,&local_78,*(undefined8 *)(param_1 + 0x18));
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < *param_2);
  }
  FUN_00ceeba8(param_1 + 0x68,&local_60,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00e9b790(undefined8 *param_1,undefined8 param_2)

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
  auVar4 = FUN_00e9b85c(&local_78,param_2,param_1);
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




undefined1  [16] FUN_00e9b85c(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pbVar1 = (byte *)*param_2;
  while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
    pbVar1 = pbVar1 + 1;
  }
  *param_2 = pbVar1;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar1 == 0) {
      lVar2 = param_2[1];
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(long *)(param_1 + 0x38) = (long)pbVar1 - lVar2;
    }
    else {
      FUN_00e9b8f0(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return *(undefined1 (*) [16])(param_1 + 0x30);
}




void FUN_00e9b8f0(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  if (bVar1 < 0x6e) {
    if (bVar1 == 0x22) {
      FUN_00e9bb64();
      return;
    }
    if (bVar1 == 0x5b) {
      FUN_00e9be90();
      return;
    }
    if (bVar1 == 0x66) {
      FUN_00e9baa4();
      return;
    }
  }
  else {
    if (bVar1 == 0x7b) {
      FUN_00e9bc24();
      return;
    }
    if (bVar1 == 0x74) {
      FUN_00e9b9f8();
      return;
    }
    if (bVar1 == 0x6e) {
      FUN_00e9b950();
      return;
    }
  }
  FUN_00e9c044();
  return;
}




void FUN_00e9b950(long param_1,long *param_2,long param_3)

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




void FUN_00e9b9f8(long param_1,long *param_2,long param_3)

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




void FUN_00e9baa4(long param_1,long *param_2,long param_3)

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




void FUN_00e9bb64(long param_1,long *param_2,undefined8 param_3)

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
  FUN_00e9c6d0(param_1,&local_60,&local_48);
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




void FUN_00e9bc24(long param_1,long *param_2,long param_3)

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
        FUN_00e9bb64(param_1,param_2,param_3,1);
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
          goto LAB_00e9be2c;
        }
        while ((*pbVar3 < 0x21 && ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0))) {
          pbVar3 = pbVar3 + 1;
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_00e9b8f0(param_1,param_2,param_3);
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
            goto LAB_00e9be30;
          }
          uVar1 = FUN_008fe978(param_3,iVar8);
          if ((uVar1 & 1) != 0) {
            return;
          }
          pbVar3 = (byte *)*param_2;
          lVar4 = param_2[1];
          uVar7 = 0x10;
          goto LAB_00e9be2c;
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
LAB_00e9be2c:
    pbVar3 = pbVar3 + -lVar4;
LAB_00e9be30:
    *(undefined4 *)(param_1 + 0x30) = uVar7;
    *(byte **)(param_1 + 0x38) = pbVar3;
  }
  return;
}




void FUN_00e9be90(long param_1,long *param_2,long param_3)

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
        FUN_00e9b8f0(param_1,param_2,param_3);
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

