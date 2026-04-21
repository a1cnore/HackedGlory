// functions/00e9a — 23 functions
#include "libGameKindred.h"




void FUN_00e9a074(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar9;
  ulong local_60;
  ulong local_58;
  undefined1 *local_50;
  long local_48;
  undefined1 *puVar8;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined1 *)*param_2;
  puVar2 = (undefined1 *)param_2[1];
  local_60 = 0;
  local_58 = 0;
  local_50 = (undefined1 *)0x0;
  uVar9 = (long)puVar2 - (long)puVar1;
  if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar9 < 0x17) {
    local_60 = (ulong)(byte)((int)uVar9 << 1);
    puVar4 = (undefined1 *)((ulong)&local_60 | 1);
  }
  else {
    uVar6 = uVar9 + 0x10 & 0xfffffffffffffff0;
    puVar4 = operator_new(uVar6);
    local_60 = uVar6 | 1;
    local_58 = uVar9;
    local_50 = puVar4;
  }
  if (puVar1 != puVar2) {
    puVar5 = puVar4;
    puVar8 = puVar1;
    do {
      puVar7 = puVar8 + 1;
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
      puVar8 = puVar7;
    } while (puVar2 != puVar7);
    puVar4 = puVar4 + ((long)puVar2 - (long)puVar1);
  }
  *puVar4 = 0;
  (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9a16c(undefined8 *param_1,long *param_2)

{
  size_t __n;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_00e99978(param_1,param_2[1] - *param_2);
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy((void *)param_1[1],(void *)*param_2,__n);
      param_1[1] = param_1[1] + __n;
    }
  }
  return;
}




void FUN_00e9a1d0(void)

{
  return;
}




void FUN_00e9a1d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe9a1d8);
  (*pcVar1)();
}




undefined8 FUN_00e9a1d8(void)

{
  return 0;
}




undefined8 FUN_00e9a1e0(void)

{
  return 0xfffffff9;
}




undefined8 FUN_00e9a1e8(void)

{
  return 0;
}




void FUN_00e9a1f0(void)

{
  return;
}




void FUN_00e9a1f4(long param_1)

{
  if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x130));
  }
  if ((*(byte *)(param_1 + 0x108) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x118));
  }
  if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if ((*(byte *)(param_1 + 0xc0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xd0));
  }
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb8));
  }
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x28));
  return;
}




undefined8 FUN_00e9a2b8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  param_1[4] = param_1[4] + -0x10;
  puVar1 = *(undefined1 **)(lVar3 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2) {
    FUN_008fe7c0(lVar3,1);
    puVar1 = *(undefined1 **)(lVar3 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2;
  *puVar1 = 0x5d;
  return 1;
}




long FUN_00e9a314(long param_1,byte *param_2)

{
  uint uVar1;
  long lVar2;
  byte *local_40;
  ulong local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (uint)*(undefined8 *)(param_2 + 8);
  local_40 = *(byte **)(param_2 + 0x10);
  local_30 = 0x100005;
  if ((*param_2 & 1) == 0) {
    local_40 = param_2 + 1;
    uVar1 = (uint)(*param_2 >> 1);
  }
  local_38 = (ulong)uVar1;
  FUN_00ceeba8(param_1 + 0x68,&local_40,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00e9a398(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_b0 [16];
  void *local_a0;
  undefined8 local_98;
  void *pvStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0;
  uStack_70 = 0x100;
  local_68 = &local_98;
  uStack_60 = 0;
  uStack_80 = 0;
  local_88 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  local_98 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  local_50 = (void *)0x0;
  local_38 = 0x200;
  local_30 = 0;
  FUN_00914ff4(param_1 + 0x68,&local_68);
  uVar2 = FUN_009155f8(&local_98);
  FUN_008fa54c(local_b0,uVar2);
  FUN_008fce60(param_1 + 0x80,local_b0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  free(local_50);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  free(local_88);
  if (pvStack_90 != (void *)0x0) {
    operator_delete(pvStack_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1 + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00e9a478(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long local_50;
  ulong local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != 0) {
    uVar2 = FUN_00e6a474(param_2);
    local_40 = 0x100005;
    local_48 = (ulong)uVar2;
    local_50 = param_2;
    FUN_00ceeba8(param_1 + 0x68,&local_50,*(undefined8 *)(param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00e9a4fc(long param_1,int param_2)

{
  long lVar1;
  long local_40 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = (long)param_2;
  local_40[1] = 0;
  local_30 = 0x1606;
  if (-1 < param_2) {
    local_30 = 0x3e06;
  }
  FUN_00ceeba8(param_1 + 0x68,local_40,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00e9a570(long param_1,undefined8 *param_2)

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
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_00e9a648;
  if (*pbVar1 == 0) {
    lVar2 = param_2[1];
    uVar3 = 1;
  }
  else {
    FUN_00e9a660(param_1,param_2);
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_00e9a648;
    pbVar1 = (byte *)*param_2;
    while ((*pbVar1 < 0x21 && ((1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0))) {
      pbVar1 = pbVar1 + 1;
    }
    *param_2 = pbVar1;
    if ((*(int *)(param_1 + 0x30) != 0) || (*pbVar1 == 0)) goto LAB_00e9a648;
    lVar2 = param_2[1];
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(long *)(param_1 + 0x38) = (long)pbVar1 - lVar2;
LAB_00e9a648:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return *(undefined1 (*) [16])(param_1 + 0x30);
}




void FUN_00e9a660(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)*param_2;
  if (bVar1 < 0x6e) {
    if (bVar1 == 0x22) {
      FUN_00e9a8d4();
      return;
    }
    if (bVar1 == 0x5b) {
      FUN_00e9abe4();
      return;
    }
    if (bVar1 == 0x66) {
      FUN_00e9a814();
      return;
    }
  }
  else {
    if (bVar1 == 0x7b) {
      FUN_00e9a9a8();
      return;
    }
    if (bVar1 == 0x74) {
      FUN_00e9a768();
      return;
    }
    if (bVar1 == 0x6e) {
      FUN_00e9a6c0();
      return;
    }
  }
  FUN_00e9ad68();
  return;
}




void FUN_00e9a6c0(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
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
        FUN_00916f0c(param_3,0);
        uVar1 = FUN_00916fd4(param_3);
        if ((uVar1 & 1) != 0) {
          return;
        }
        lVar2 = *param_2;
        lVar3 = param_2[1];
        uVar4 = 0x10;
        goto LAB_00e9a74c;
      }
    }
  }
  lVar3 = param_2[1];
  lVar2 = lVar2 + -1;
  uVar4 = 3;
LAB_00e9a74c:
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(long *)(param_1 + 0x38) = lVar2 - lVar3;
  return;
}




void FUN_00e9a768(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
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
        FUN_00916f0c(param_3,2);
        uVar1 = FUN_009170c0(param_3,1);
        if ((uVar1 & 1) != 0) {
          return;
        }
        lVar2 = *param_2;
        lVar3 = param_2[1];
        uVar4 = 0x10;
        goto LAB_00e9a7f8;
      }
    }
  }
  lVar3 = param_2[1];
  lVar2 = lVar2 + -1;
  uVar4 = 3;
LAB_00e9a7f8:
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(long *)(param_1 + 0x38) = lVar2 - lVar3;
  return;
}




void FUN_00e9a814(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
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
          FUN_00916f0c(param_3,1);
          uVar1 = FUN_009170c0(param_3,0);
          if ((uVar1 & 1) != 0) {
            return;
          }
          lVar2 = *param_2;
          lVar3 = param_2[1];
          uVar4 = 0x10;
          goto LAB_00e9a8b8;
        }
      }
    }
  }
  lVar3 = param_2[1];
  lVar2 = lVar2 + -1;
  uVar4 = 3;
LAB_00e9a8b8:
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(long *)(param_1 + 0x38) = lVar2 - lVar3;
  return;
}




void FUN_00e9a8d4(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_70;
  long lStack_68;
  long *local_60;
  long local_58;
  uint local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lStack_68 = param_2[1];
  local_70 = *param_2;
  local_50 = 0;
  local_60 = param_2;
  local_58 = param_1;
  FUN_008fe3b4(param_1,&local_70,&local_58);
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = local_50 - 1;
    lVar4 = *(long *)(local_58 + 0x18) - (ulong)local_50;
    *(long *)(local_58 + 0x18) = lVar4;
    FUN_00916f0c(param_3,5);
    uVar3 = FUN_009172e8(param_3,lVar4,iVar1);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(long *)(param_1 + 0x38) = local_70 - lStack_68;
    }
  }
  local_60[1] = lStack_68;
  *local_60 = local_70;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e9a9a8(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  
  *param_2 = *param_2 + 1;
  uVar1 = FUN_00916df0(param_3);
  if ((uVar1 & 1) == 0) {
LAB_00e9aa48:
    pbVar2 = (byte *)*param_2;
    lVar4 = param_2[1];
    uVar5 = 0x10;
  }
  else {
    pbVar2 = (byte *)*param_2;
    while ((*pbVar2 < 0x21 && ((1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0))) {
      pbVar2 = pbVar2 + 1;
    }
    *param_2 = (long)pbVar2;
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    if (*pbVar2 == 0x22) {
      iVar6 = 0;
      do {
        FUN_00e9a8d4(param_1,param_2,param_3,1);
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
        pbVar2 = pbVar3 + 1;
        *param_2 = (long)pbVar2;
        if (*pbVar3 != 0x3a) {
          lVar4 = param_2[1];
          uVar5 = 5;
          goto LAB_00e9aa50;
        }
        while ((*pbVar2 < 0x21 && ((1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0))) {
          pbVar2 = pbVar2 + 1;
        }
        *param_2 = (long)pbVar2;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_00e9a660(param_1,param_2,param_3);
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
        pbVar2 = pbVar3 + 1;
        *param_2 = (long)pbVar2;
        iVar6 = iVar6 + 1;
        if (*pbVar3 != 0x2c) {
          if (*pbVar3 == 0x7d) goto LAB_00e9aa40;
          uVar5 = 6;
          pbVar2 = pbVar3 + (1 - param_2[1]);
          goto LAB_00e9aa54;
        }
        while ((*pbVar2 < 0x21 && ((1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0))) {
          pbVar2 = pbVar2 + 1;
        }
        *param_2 = (long)pbVar2;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
      } while (*pbVar2 == 0x22);
    }
    else if (*pbVar2 == 0x7d) {
      *param_2 = (long)(pbVar2 + 1);
      iVar6 = 0;
LAB_00e9aa40:
      uVar1 = FUN_00e86ecc(param_3,iVar6);
      if ((uVar1 & 1) != 0) {
        return;
      }
      goto LAB_00e9aa48;
    }
    lVar4 = param_2[1];
    uVar5 = 4;
  }
LAB_00e9aa50:
  pbVar2 = pbVar2 + -lVar4;
LAB_00e9aa54:
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(byte **)(param_1 + 0x38) = pbVar2;
  return;
}




void FUN_00e9abe4(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  
  *param_2 = *param_2 + 1;
  uVar1 = FUN_00916e7c(param_3);
  if ((uVar1 & 1) != 0) {
    pbVar2 = (byte *)*param_2;
    while ((*pbVar2 < 0x21 && ((1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0))) {
      pbVar2 = pbVar2 + 1;
    }
    *param_2 = (long)pbVar2;
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    if (*pbVar2 == 0x5d) {
      *param_2 = (long)(pbVar2 + 1);
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      while( true ) {
        FUN_00e9a660(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar2 = (byte *)*param_2;
        while ((*pbVar2 < 0x21 && ((1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0))) {
          pbVar2 = pbVar2 + 1;
        }
        *param_2 = (long)pbVar2;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = pbVar2 + 1;
        *param_2 = (long)pbVar3;
        iVar6 = iVar6 + 1;
        if (*pbVar2 != 0x2c) break;
        while ((*pbVar3 < 0x21 && ((1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0))) {
          pbVar3 = pbVar3 + 1;
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
      }
      if (*pbVar2 != 0x5d) {
        lVar4 = param_2[1];
        pbVar2 = pbVar2 + 1;
        uVar5 = 7;
        goto LAB_00e9ac84;
      }
    }
    uVar1 = FUN_00e9a2b8(param_3,iVar6);
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  pbVar2 = (byte *)*param_2;
  lVar4 = param_2[1];
  uVar5 = 0x10;
LAB_00e9ac84:
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(long *)(param_1 + 0x38) = (long)pbVar2 - lVar4;
  return;
}




void FUN_00e9ad68(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  undefined2 *puVar18;
  uint uVar19;
  ulong uVar20;
  undefined2 *puVar21;
  byte *pbVar22;
  undefined1 *puVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  int local_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [8];
  int local_d0;
  undefined1 auStack_c8 [16];
  ulong local_b8;
  int local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  ulong uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulong uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pbVar14 = (byte *)*param_2;
  lVar2 = param_2[1];
  bVar3 = *pbVar14;
  pbVar22 = pbVar14 + 1;
  if (bVar3 != 0x2d) {
    pbVar22 = pbVar14;
  }
  uVar19 = *pbVar22 - 0x30;
  if (uVar19 == 0) {
    uVar20 = 0;
    bVar7 = false;
    uVar12 = 0;
    bVar6 = false;
    pbVar14 = pbVar22 + 1;
    dVar24 = 0.0;
    goto LAB_00e9addc;
  }
  if (*pbVar22 - 0x31 < 9) {
    pbVar14 = pbVar22 + 1;
    uVar15 = (uint)*pbVar14;
    bVar4 = *pbVar14 - 0x30;
    if (bVar3 == 0x2d) {
      if (bVar4 < 10) {
        uVar12 = 0;
        do {
          if ((0xccccccb < uVar19) &&
             ((uVar1 = uVar19, uVar19 != 0xccccccc || (uVar1 = 0xccccccc, 0x38 < uVar15))))
          goto LAB_00e9b52c;
          pbVar14 = pbVar22 + uVar12 + 2;
          uVar19 = (uVar19 * 10 + uVar15) - 0x30;
          uVar15 = (uint)*pbVar14;
          uVar12 = uVar12 + 1;
        } while (uVar15 - 0x30 < 10);
LAB_00e9af1c:
        dVar24 = 0.0;
        uVar20 = 0;
        bVar7 = false;
        bVar6 = false;
        pbVar14 = pbVar22 + uVar12 + 1;
        goto LAB_00e9addc;
      }
    }
    else if (bVar4 < 10) {
      uVar12 = 0;
      do {
        if (0x19999998 < uVar19) {
          uVar1 = uVar19;
          if (uVar19 != 0x19999999) goto LAB_00e9b52c;
          if (0x35 < uVar15) {
            uVar1 = 0x19999999;
            goto LAB_00e9b52c;
          }
        }
        pbVar14 = pbVar22 + uVar12 + 2;
        uVar19 = (uVar19 * 10 + uVar15) - 0x30;
        uVar15 = (uint)*pbVar14;
        uVar12 = uVar12 + 1;
      } while (uVar15 - 0x30 < 10);
      goto LAB_00e9af1c;
    }
    dVar24 = 0.0;
    uVar20 = 0;
    bVar7 = false;
    uVar12 = 0;
    bVar6 = false;
    goto LAB_00e9addc;
  }
  lVar17 = (long)pbVar22 - lVar2;
  uVar10 = 3;
  goto LAB_00e9b0fc;
LAB_00e9b52c:
  uVar19 = uVar1;
  uVar15 = (uint)*pbVar14;
  uVar20 = (ulong)uVar19;
  bVar4 = *pbVar14 - 0x30;
  if (bVar3 == 0x2d) {
    if (9 < bVar4) {
LAB_00e9b624:
      dVar24 = 0.0;
      bVar7 = false;
      goto LAB_00e9b688;
    }
    pbVar22 = pbVar14 + 1;
    do {
      if ((0xccccccccccccccb < uVar20) && ((uVar20 != 0xccccccccccccccc || (0x38 < uVar15))))
      goto LAB_00e9b62c;
      uVar1 = uVar15 - 0x30;
      pbVar16 = pbVar22 + 1;
      uVar15 = (uint)*pbVar22;
      uVar20 = (ulong)uVar1 + uVar20 * 10;
      uVar12 = (ulong)((int)uVar12 + 1);
      pbVar14 = pbVar22;
      pbVar22 = pbVar16;
    } while (uVar15 - 0x30 < 10);
  }
  else {
    if (9 < bVar4) goto LAB_00e9b624;
    pbVar22 = pbVar14 + 1;
    do {
      if ((0x1999999999999998 < uVar20) && ((uVar20 != 0x1999999999999999 || (0x35 < uVar15))))
      goto LAB_00e9b62c;
      uVar1 = uVar15 - 0x30;
      pbVar16 = pbVar22 + 1;
      uVar15 = (uint)*pbVar22;
      uVar20 = (ulong)uVar1 + uVar20 * 10;
      uVar12 = (ulong)((int)uVar12 + 1);
      pbVar14 = pbVar22;
      pbVar22 = pbVar16;
    } while (uVar15 - 0x30 < 10);
  }
  dVar24 = 0.0;
  bVar7 = false;
  pbVar14 = pbVar16 + -1;
  goto LAB_00e9b688;
LAB_00e9b62c:
  dVar24 = (double)uVar20;
  bVar4 = *pbVar14;
  while (bVar4 - 0x30 < 10) {
    if (1.7976931348623158e+307 <= dVar24) {
      *(undefined4 *)(param_1 + 0x30) = 0xd;
      *(long *)(param_1 + 0x38) = (long)pbVar14 - lVar2;
      goto LAB_00e9b43c;
    }
    dVar24 = dVar24 * 10.0 + (double)(int)(bVar4 - 0x30);
    bVar4 = pbVar14[1];
    pbVar14 = pbVar14 + 1;
  }
  bVar7 = true;
LAB_00e9b688:
  bVar6 = true;
LAB_00e9addc:
  uVar15 = (uint)*pbVar14;
  if (*pbVar14 == 0x2e) {
    pbVar22 = pbVar14 + 1;
    bVar4 = *pbVar22;
    if (bVar4 - 0x30 < 10) {
      if (bVar7) {
        iVar11 = 0;
      }
      else {
        lVar17 = 0;
        if (!bVar6) {
          uVar20 = (ulong)uVar19;
        }
        do {
          lVar9 = lVar17;
          uVar15 = (uint)bVar4;
          lVar17 = lVar9;
          if ((uVar20 >> 0x35 != 0) || (0x39 < uVar15)) goto LAB_00e9afa4;
          pbVar22 = pbVar14 + lVar9 + 2;
          bVar4 = *pbVar22;
          uVar20 = (ulong)(uVar15 - 0x30) + uVar20 * 10;
          uVar15 = (uint)uVar12;
          if (uVar20 != 0) {
            uVar15 = uVar15 + 1;
          }
          uVar12 = (ulong)uVar15;
          lVar17 = lVar9 + 1;
        } while (0x2f < bVar4);
        pbVar22 = pbVar14 + lVar9 + 2;
LAB_00e9afa4:
        iVar11 = -(int)lVar17;
        dVar24 = (double)uVar20;
      }
      bVar4 = *pbVar22;
      while (uVar15 = (uint)bVar4, uVar15 - 0x30 < 10) {
        if ((int)uVar12 < 0x11) {
          dVar24 = dVar24 * 10.0 + (double)(int)(uVar15 - 0x30);
          iVar11 = iVar11 + -1;
          if (0.0 < dVar24) {
            uVar12 = (ulong)((int)uVar12 + 1);
          }
        }
        pbVar22 = pbVar22 + 1;
        bVar4 = *pbVar22;
      }
      bVar7 = true;
      goto LAB_00e9b010;
    }
    lVar17 = (long)pbVar22 - lVar2;
    uVar10 = 0xe;
  }
  else {
    iVar11 = 0;
    pbVar22 = pbVar14;
LAB_00e9b010:
    if ((uVar15 | 0x20) != 0x65) {
      if (bVar7) {
        uVar19 = 0;
LAB_00e9b1c4:
        iVar11 = uVar19 + iVar11;
        if (iVar11 < -0x134) {
          dVar25 = 0.0;
          if (-0x269 < iVar11) {
            dVar25 = (dVar24 / 1e+308) / *(double *)(&DAT_01b90e20 + (long)(-0x134 - iVar11) * 8);
          }
        }
        else if (iVar11 < 0) {
          dVar25 = dVar24 / *(double *)(&DAT_01b90e20 + (long)iVar11 * -8);
        }
        else {
          dVar25 = dVar24 * *(double *)(&DAT_01b90e20 + (long)iVar11 * 8);
        }
        dVar24 = -dVar25;
        if (bVar3 != 0x2d) {
          dVar24 = dVar25;
        }
        FUN_00916f0c(param_3,6);
        lVar17 = *param_3;
        puVar21 = *(undefined2 **)(lVar17 + 0x18);
        puVar8 = (undefined1 *)((long)puVar21 + 0x19);
        if (*(undefined1 **)(lVar17 + 0x20) <= puVar8) {
          FUN_008fe7c0(lVar17,0x19);
          puVar21 = *(undefined2 **)(lVar17 + 0x18);
          puVar8 = (undefined1 *)((long)puVar21 + 0x19);
        }
        *(undefined1 **)(lVar17 + 0x18) = puVar8;
        if (ABS(dVar24) == 0.0) {
          puVar18 = puVar21;
          if ((long)dVar24 < 0) {
            puVar18 = (undefined2 *)((long)puVar21 + 1);
            *(undefined1 *)puVar21 = 0x2d;
          }
          *puVar18 = 0x2e30;
          *(undefined1 *)(puVar18 + 1) = 0x30;
          puVar8 = (undefined1 *)((long)puVar18 + 3);
        }
        else {
          puVar18 = puVar21;
          if (dVar24 < 0.0) {
            puVar18 = (undefined2 *)((long)puVar21 + 1);
            *(undefined1 *)puVar21 = 0x2d;
          }
          bVar7 = ((ulong)dVar24 >> 0x34 & 0x7ff) != 0;
          local_b8 = (ulong)dVar24 & 0xfffffffffffff;
          if (bVar7) {
            local_b8 = (ulong)dVar24 & 0xfffffffffffff | 0x10000000000000;
          }
          local_b0 = -0x432;
          if (bVar7) {
            local_b0 = ((uint)((ulong)dVar24 >> 0x34) & 0x7ff) - 0x433;
          }
          FUN_00918050(&local_b8,auStack_c8,auStack_d8);
          local_98 = local_b8 << (LZCOUNT(local_b8) & 0x3fU);
          uStack_90 = (ulong)(uint)(local_b0 - (int)LZCOUNT(local_b8));
          dVar24 = (double)(-0x3d - local_d0) * 0.30102999566398114 + 347.0;
          iVar11 = (int)dVar24;
          uVar19 = ((int)((uint)(0.0 < dVar24 - (double)iVar11) + iVar11) >> 3) + 1;
          local_78 = *(undefined8 *)(&DAT_01b93840 + (ulong)uVar19 * 8);
          local_e0 = uVar19 * -8 + 0x15c;
          uStack_70 = (long)*(short *)(&DAT_01b93af8 + (ulong)uVar19 * 2) & 0xffffffff;
          local_88 = FUN_0091810c(&local_98,&local_78);
          auVar26 = FUN_0091810c(auStack_d8,&local_78);
          local_a0 = auVar26._8_8_;
          uVar12 = FUN_0091810c(auStack_c8,&local_78);
          local_a8 = auVar26._0_8_ + -1;
          FUN_00918168(local_88,&local_a8,local_a8 + ~uVar12,puVar18,&uStack_dc,&local_e0);
          puVar8 = (undefined1 *)FUN_00917e7c(puVar18,uStack_dc,local_e0);
        }
        lVar9 = *param_3;
        lVar17 = -0x19;
LAB_00e9b428:
        lVar13 = *(long *)(lVar9 + 0x18);
        lVar17 = lVar17 - (long)puVar21;
      }
      else {
        if (!bVar6) {
          if (bVar3 == 0x2d) {
            uVar12 = FUN_00e86e2c(param_3,-uVar19);
            pbVar14 = pbVar22;
            if ((uVar12 & 1) != 0) goto LAB_00e9b43c;
            lVar17 = (long)pbVar22 - lVar2;
            uVar10 = 0x10;
            goto LAB_00e9b0fc;
          }
          FUN_00916f0c(param_3,6);
          lVar17 = *param_3;
          puVar21 = *(undefined2 **)(lVar17 + 0x18);
          puVar18 = puVar21 + 5;
          if (*(undefined2 **)(lVar17 + 0x20) <= puVar18) {
            FUN_008fe7c0(lVar17,10);
            puVar21 = *(undefined2 **)(lVar17 + 0x18);
            puVar18 = puVar21 + 5;
          }
          *(undefined2 **)(lVar17 + 0x18) = puVar18;
          puVar8 = (undefined1 *)FUN_0091754c(uVar19,puVar21);
          lVar9 = *param_3;
          lVar17 = -10;
          goto LAB_00e9b428;
        }
        if (bVar3 == 0x2d) {
          FUN_00916f0c(param_3,6);
          lVar17 = *param_3;
          puVar23 = *(undefined1 **)(lVar17 + 0x18);
          puVar8 = puVar23 + 0x15;
          if (*(undefined1 **)(lVar17 + 0x20) <= puVar8) {
            FUN_008fe7c0(lVar17,0x15);
            puVar23 = *(undefined1 **)(lVar17 + 0x18);
            puVar8 = puVar23 + 0x15;
          }
          *(undefined1 **)(lVar17 + 0x18) = puVar8;
          puVar8 = puVar23;
          uVar12 = -uVar20;
          if ((long)-uVar20 < 0) {
            puVar8 = puVar23 + 1;
            *puVar23 = 0x2d;
            uVar12 = uVar20;
          }
          puVar8 = (undefined1 *)FUN_00917824(uVar12,puVar8);
          lVar9 = *param_3;
          lVar17 = -0x15 - (long)puVar23;
        }
        else {
          FUN_00916f0c(param_3,6);
          lVar9 = *param_3;
          lVar17 = *(long *)(lVar9 + 0x18);
          uVar12 = lVar17 + 0x14;
          if (*(ulong *)(lVar9 + 0x20) <= uVar12) {
            FUN_008fe7c0(lVar9,0x14);
            lVar17 = *(long *)(lVar9 + 0x18);
            uVar12 = lVar17 + 0x14;
          }
          *(ulong *)(lVar9 + 0x18) = uVar12;
          puVar8 = (undefined1 *)FUN_00917824(uVar20,lVar17);
          lVar9 = *param_3;
          lVar17 = -0x14 - lVar17;
        }
        lVar13 = *(long *)(lVar9 + 0x18);
      }
      *(undefined1 **)(lVar9 + 0x18) = puVar8 + lVar13 + lVar17;
      pbVar14 = pbVar22;
      goto LAB_00e9b43c;
    }
    if (!bVar6) {
      uVar20 = (ulong)uVar19;
    }
    bVar4 = pbVar22[1];
    if (!bVar7) {
      dVar24 = (double)uVar20;
    }
    if (bVar4 == 0x2d) {
      pbVar22 = pbVar22 + 2;
      bVar7 = true;
    }
    else if (bVar4 == 0x2b) {
      bVar7 = false;
      pbVar22 = pbVar22 + 2;
    }
    else {
      bVar7 = false;
      pbVar22 = pbVar22 + 1;
    }
    uVar15 = *pbVar22 - 0x30;
    if (uVar15 < 10) {
      pbVar22 = pbVar22 + 1;
      if (bVar7) {
        bVar4 = *pbVar22;
        while (bVar4 - 0x30 < 10) {
          uVar15 = (uVar15 * 10 + (uint)bVar4) - 0x30;
          pbVar22 = pbVar22 + 1;
          if (0xccccccb < (int)uVar15) {
            bVar4 = *pbVar22;
            while (bVar4 - 0x30 < 10) {
              pbVar22 = pbVar22 + 1;
              bVar4 = *pbVar22;
            }
          }
          bVar4 = *pbVar22;
        }
LAB_00e9b1bc:
        uVar19 = -uVar15;
        if (!bVar7) {
          uVar19 = uVar15;
        }
        goto LAB_00e9b1c4;
      }
      do {
        if (9 < *pbVar22 - 0x30) goto LAB_00e9b1bc;
        uVar15 = ((uint)*pbVar22 + uVar15 * 10) - 0x30;
        pbVar22 = pbVar22 + 1;
      } while ((int)uVar15 <= 0x134 - iVar11);
      lVar17 = (long)pbVar22 - lVar2;
      uVar10 = 0xd;
    }
    else {
      lVar17 = (long)pbVar22 - lVar2;
      uVar10 = 0xf;
    }
  }
LAB_00e9b0fc:
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  *(long *)(param_1 + 0x38) = lVar17;
  pbVar14 = pbVar22;
LAB_00e9b43c:
  *param_2 = (long)pbVar14;
  param_2[1] = lVar2;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

