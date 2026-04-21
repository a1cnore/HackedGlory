// functions/00b6a — 20 functions
#include "libGameKindred.h"




void thunk_FUN_00b6a218(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *__s2;
  char *pcVar13;
  long lVar14;
  void *__s1;
  byte abStack_78 [16];
  void *pvStack_68;
  byte abStack_60 [16];
  void *pvStack_50;
  long lStack_48;
  
  lVar6 = tpidr_el0;
  lStack_48 = *(long *)(lVar6 + 0x28);
  uVar4 = *(uint *)(param_1 + 0xe604);
  if ((int)uVar4 < 0) {
    bVar7 = true;
  }
  else {
    bVar7 = *(uint *)(param_1 + 0x2a28) <= uVar4;
  }
  pbVar1 = (byte *)(param_1 + 0xe5e0);
  bVar5 = *pbVar1;
  __n = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xe5e8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n != sVar2) goto LAB_00b6a3f4;
  __s1 = *(void **)(param_1 + 0xe5f0);
  if ((bVar5 & 1) == 0) {
    __s1 = (void *)(param_1 + 0xe5e1);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar5 & 1) == 0) {
    if (__n != 0) {
      pcVar13 = (char *)(param_1 + 0xe5e1);
      lVar14 = -(ulong)(bVar5 >> 1);
      do {
        if (*pcVar13 != *__s2) goto LAB_00b6a3f4;
        pcVar13 = pcVar13 + 1;
        lVar14 = lVar14 + 1;
        __s2 = __s2 + 1;
      } while (lVar14 != 0);
    }
LAB_00b6a308:
    bVar8 = false;
  }
  else {
    if (__n == 0) goto LAB_00b6a308;
    iVar9 = memcmp(__s1,__s2,__n);
    bVar8 = iVar9 != 0;
  }
  if ((!bVar7 && !bVar8) &&
     (lVar14 = *(long *)(*(long *)(param_1 + 0x2a30) + (ulong)uVar4 * 8), lVar14 != 0)) {
    FUN_008fcdb8(abStack_60,lVar14 + 0x5d8);
    if ((*(byte *)(lVar14 + 0x5d8) & 1) == 0) {
      lVar10 = lVar14 + 0x5d9;
    }
    else {
      lVar10 = *(long *)(lVar14 + 0x5e8);
    }
    lVar10 = FUN_00a016b4(lVar10);
    if (lVar10 != 0) {
      uVar11 = FUN_009f6658();
      if ((uVar11 & 1) != 0) {
        FUN_008fce60(pbVar1,abStack_60);
        FUN_00b028dc(param_1 + 0x2c28,0);
        uVar12 = FUN_009b8d90();
        bVar5 = *(byte *)(param_1 + 0x3538);
        if ((bVar5 & 1) == 0) {
          uVar11 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar11 = *(ulong *)(param_1 + 0x3540);
        }
        pbVar3 = (byte *)(param_1 + 0x35e8);
        if (uVar11 != 0) {
          pbVar3 = (byte *)(param_1 + 0x3538);
        }
        FUN_009bb728(uVar12,pbVar1,pbVar3);
      }
      FUN_00b6995c(lVar14);
      uVar12 = FUN_009b8d90();
      FUN_008fa54c(abStack_78,"layer_player_profile_prog");
      FUN_009baadc(uVar12,abStack_78);
      if ((abStack_78[0] & 1) != 0) {
        operator_delete(pvStack_68);
      }
    }
    if ((abStack_60[0] & 1) != 0) {
      operator_delete(pvStack_50);
    }
  }
LAB_00b6a3f4:
  if (*(long *)(lVar6 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00b6a4cc(void)

{
  long lVar1;
  undefined8 uVar2;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(abStack_40,"layer_player_profile_prog");
  FUN_009baadc(uVar2,abStack_40);
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6a218(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *__s2;
  char *pcVar13;
  long lVar14;
  void *__s1;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar4 = *(uint *)(param_1 + 0xe604);
  if ((int)uVar4 < 0) {
    bVar7 = true;
  }
  else {
    bVar7 = *(uint *)(param_1 + 0x2a28) <= uVar4;
  }
  pbVar1 = (byte *)(param_1 + 0xe5e0);
  bVar5 = *pbVar1;
  __n = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xe5e8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n != sVar2) goto LAB_00b6a3f4;
  __s1 = *(void **)(param_1 + 0xe5f0);
  if ((bVar5 & 1) == 0) {
    __s1 = (void *)(param_1 + 0xe5e1);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar5 & 1) == 0) {
    if (__n != 0) {
      pcVar13 = (char *)(param_1 + 0xe5e1);
      lVar14 = -(ulong)(bVar5 >> 1);
      do {
        if (*pcVar13 != *__s2) goto LAB_00b6a3f4;
        pcVar13 = pcVar13 + 1;
        lVar14 = lVar14 + 1;
        __s2 = __s2 + 1;
      } while (lVar14 != 0);
    }
LAB_00b6a308:
    bVar8 = false;
  }
  else {
    if (__n == 0) goto LAB_00b6a308;
    iVar9 = memcmp(__s1,__s2,__n);
    bVar8 = iVar9 != 0;
  }
  if ((!bVar7 && !bVar8) &&
     (lVar14 = *(long *)(*(long *)(param_1 + 0x2a30) + (ulong)uVar4 * 8), lVar14 != 0)) {
    FUN_008fcdb8(local_60,lVar14 + 0x5d8);
    if ((*(byte *)(lVar14 + 0x5d8) & 1) == 0) {
      lVar10 = lVar14 + 0x5d9;
    }
    else {
      lVar10 = *(long *)(lVar14 + 0x5e8);
    }
    lVar10 = FUN_00a016b4(lVar10);
    if (lVar10 != 0) {
      uVar11 = FUN_009f6658();
      if ((uVar11 & 1) != 0) {
        FUN_008fce60(pbVar1,local_60);
        FUN_00b028dc(param_1 + 0x2c28,0);
        uVar12 = FUN_009b8d90();
        bVar5 = *(byte *)(param_1 + 0x3538);
        if ((bVar5 & 1) == 0) {
          uVar11 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar11 = *(ulong *)(param_1 + 0x3540);
        }
        pbVar3 = (byte *)(param_1 + 0x35e8);
        if (uVar11 != 0) {
          pbVar3 = (byte *)(param_1 + 0x3538);
        }
        FUN_009bb728(uVar12,pbVar1,pbVar3);
      }
      FUN_00b6995c(lVar14);
      uVar12 = FUN_009b8d90();
      FUN_008fa54c(local_78,"layer_player_profile_prog");
      FUN_009baadc(uVar12,local_78);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
LAB_00b6a3f4:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b6a420(void)

{
  return;
}




void FUN_00b6a424(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00b67f8c(param_1,uVar1);
  return;
}




void FUN_00b6a450(long param_1)

{
  FUN_00ed4308(param_1 + 0x2448);
  return;
}




void FUN_00b6a45c(long param_1)

{
  FUN_00ed42e4(param_1 + 0x2448);
  return;
}




bool FUN_00b6a468(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)FUN_009f6560(param_1,"level");
  piVar3 = (int *)FUN_009f6560(param_2,"level");
  bVar1 = false;
  if ((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) {
    bVar1 = *piVar2 < *piVar3;
  }
  return bVar1;
}




void FUN_00b6a4cc(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_40,"layer_player_profile_prog");
  FUN_009baadc(uVar2,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6a540(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b6a548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b6a54c(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  void *__s1;
  byte bVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar1 = (byte *)(param_1 + 0xe5e0);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xe5e8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pvVar10 = *(void **)(param_1 + 0xe5f0);
    __s1 = pvVar10;
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xe5e1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0xe5e1);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00b6a600;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00b6a628;
  }
  else {
LAB_00b6a600:
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_1 + 0xe5e1);
    }
    else {
      pvVar10 = *(void **)(param_1 + 0xe5f0);
    }
LAB_00b6a628:
    lVar9 = FUN_00a016b4(pvVar10);
    if (lVar9 != 0) {
      local_48 = 0;
      uStack_40 = 0;
      uVar6 = FUN_00cab1e4(lVar9,&local_48);
      if ((uVar6 & 1) != 0) {
        uVar7 = FUN_009b8d90();
        FUN_009bb7d4(uVar7,pbVar1,&local_48);
      }
      FUN_008fefd4(&local_48,1);
      goto LAB_00b6a670;
    }
  }
  uVar7 = FUN_009b8d90();
  FUN_009bb89c(uVar7,pbVar1);
LAB_00b6a670:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b6a698(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_009b8d90();
  FUN_009bb89c(uVar1,param_1 + 0xe5e0);
  FUN_008fce60(param_1 + 0xe5e0,&DAT_0320ffa8);
  uVar1 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_00e6ce7c("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  FUN_00b67cb8(param_1);
  return;
}




void FUN_00b6a738(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    FUN_00b69074(param_1,*param_2);
    return;
  }
  return;
}




void FUN_00b6a74c(uint *param_1,uint param_2)

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




void FUN_00b6a7cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
LAB_00b6a884:
  puVar11 = param_2 + -1;
  puVar12 = param_1;
LAB_00b6a8a4:
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
    FUN_00b6abe8(param_1,param_1 + 1,puVar11,param_3);
    return;
  case 4:
    FUN_00b6ace0(param_1,param_1 + 1,param_1 + 2,puVar11,param_3);
    return;
  case 5:
    FUN_00b6adb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11,param_3);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_00b6aeb8(param_1,param_2,param_3);
    return;
  }
  uVar4 = uVar6;
  if ((long)uVar6 < 0) {
    uVar4 = uVar6 + 1;
  }
  puVar12 = (undefined8 *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar3 = FUN_00b6abe8(param_1,puVar12,puVar11,param_3);
  }
  else {
    uVar4 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar4 = uVar6;
    }
    lVar7 = (uVar4 & 0x7ffffffffffffffc) * 2;
    iVar3 = FUN_00b6adb0(param_1,(long)param_1 + lVar7,puVar12,(long)puVar12 + lVar7,puVar11,param_3
                        );
  }
  uVar6 = (*(code *)*param_3)(*param_1,*puVar12);
  puVar13 = puVar11;
  puVar10 = param_2 + -2;
  if ((uVar6 & 1) == 0) {
LAB_00b6a948:
    puVar13 = puVar10;
    if (param_1 != puVar13) goto code_r0x00b6a950;
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
    goto LAB_00b6a848;
  }
  goto LAB_00b6a978;
code_r0x00b6a950:
  uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
  puVar10 = puVar13 + -1;
  if ((uVar6 & 1) != 0) goto code_r0x00b6a964;
  goto LAB_00b6a948;
code_r0x00b6a964:
  uVar8 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar13;
  *puVar13 = uVar8;
LAB_00b6a978:
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
    uVar6 = FUN_00b6af88(param_1,puVar10,param_3);
    uVar4 = FUN_00b6af88(puVar10 + 1,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00b6a86c;
    puVar12 = puVar10 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00b6a8a4;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_00b6a7cc(puVar10 + 1,param_2,param_3);
    param_2 = puVar10;
    goto LAB_00b6a884;
  }
  FUN_00b6a7cc(param_1,puVar10,param_3);
  puVar12 = puVar10 + 1;
  goto LAB_00b6a8a4;
LAB_00b6a86c:
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    param_2 = puVar10;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 2;
  }
LAB_00b6a848:
  if (4 < uVar5) {
    return;
  }
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00b6a884;
}




undefined8
FUN_00b6abe8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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




int FUN_00b6ace0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00b6abe8();
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




int FUN_00b6adb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00b6ace0();
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




void FUN_00b6aeb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_00b6abe8(param_1,param_1 + 1,param_1 + 2,param_3);
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
          if (lVar8 == -0x10) goto LAB_00b6af5c;
          uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar8 + 8));
          lVar1 = lVar8 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
LAB_00b6af5c:
        *puVar4 = uVar6;
      }
      lVar7 = lVar7 + 8;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}




bool FUN_00b6af88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    FUN_00b6abe8(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00b6ace0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00b6adb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00b6abe8(param_1,param_1 + 1,param_1 + 2,param_3);
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
            if (lVar9 == -0x10) goto LAB_00b6b084;
            uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
            lVar1 = lVar9 + -8;
          } while ((uVar2 & 1) != 0);
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_00b6b084:
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

