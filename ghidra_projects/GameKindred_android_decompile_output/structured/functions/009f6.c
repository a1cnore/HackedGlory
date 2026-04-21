// functions/009f6 — 27 functions
#include "libGameKindred.h"




undefined8 * FUN_009f60b0(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (param_3 != param_4) {
    uVar1 = *param_1;
    uVar7 = (ulong)uVar1;
    uVar5 = param_1[1];
    puVar13 = *(undefined8 **)(param_1 + 2);
    uVar15 = (ulong)((long)param_4 - (long)param_3) >> 3;
    uVar14 = (uint)uVar15;
    uVar16 = (long)param_2 - (long)puVar13;
    if (uVar5 - uVar1 < uVar14) {
      uVar1 = uVar1 + uVar14;
      if (uVar5 < 0x20) {
        uVar5 = uVar5 << 1;
      }
      else if (uVar5 == 0xffffffff) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uVar5 + 0x10) - (uVar5 & 0xf);
      }
      uVar14 = uVar1;
      if (uVar1 <= uVar5) {
        uVar14 = uVar5;
      }
      puVar3 = operator_new__((ulong)uVar14 << 3);
      puVar6 = puVar3;
      for (; puVar13 != param_2; puVar13 = puVar13 + 1) {
        *puVar6 = *puVar13;
        puVar6 = puVar6 + 1;
      }
      puVar13 = puVar3 + (uVar16 >> 3 & 0xffffffff);
      puVar6 = puVar13;
      do {
        puVar8 = param_3 + 1;
        *puVar6 = *param_3;
        puVar6 = puVar6 + 1;
        param_3 = puVar8;
      } while (param_4 != puVar8);
      pvVar4 = *(void **)(param_1 + 2);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar7 * 8);
      if (puVar6 != param_2) {
        puVar8 = puVar13 + (uVar15 & 0xffffffff);
        do {
          puVar12 = param_2 + 1;
          *puVar8 = *param_2;
          puVar8 = puVar8 + 1;
          param_2 = puVar12;
        } while (puVar6 != puVar12);
        pvVar4 = *(void **)(param_1 + 2);
      }
      if (pvVar4 != (void *)0x0) {
        operator_delete__(pvVar4);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      *(undefined8 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar14;
      param_2 = puVar13;
    }
    else {
      puVar13 = puVar13 + uVar7;
      uVar9 = (long)puVar13 - (long)param_2;
      uVar10 = uVar9 >> 3;
      uVar15 = (ulong)((long)param_4 - (long)param_3) >> 3 & 0xffffffff;
      if (uVar14 < (uint)uVar10) {
        puVar6 = puVar13 + -uVar15;
        if (uVar15 != 0) {
          lVar11 = 0;
          do {
            *(undefined8 *)((long)puVar13 + lVar11) = *(undefined8 *)((long)puVar6 + lVar11);
            lVar11 = lVar11 + 8;
          } while (lVar11 != uVar15 * 8);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 8 + uVar15 * -8);
        }
        lVar11 = (long)puVar6 - (long)param_2;
        if (lVar11 != 0) {
          do {
            puVar6 = puVar6 + -1;
            lVar2 = lVar11 + uVar15 * 8;
            lVar11 = lVar11 + -8;
            *(undefined8 *)((long)param_2 + lVar2 + -8) = *puVar6;
          } while (lVar11 != 0);
        }
        do {
          puVar13 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar13;
        } while (param_4 != puVar13);
      }
      else {
        puVar6 = param_2;
        if (puVar13 != param_2) {
          do {
            puVar6[uVar15] = *puVar6;
            puVar6 = puVar6 + 1;
          } while (puVar13 != puVar6);
          puVar13 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 8);
        }
        uVar7 = uVar9 >> 3 & 0xffffffff;
        for (puVar6 = param_3 + (uVar10 & 0xffffffff); puVar6 != param_4; puVar6 = puVar6 + 1) {
          *puVar13 = *puVar6;
          puVar13 = puVar13 + 1;
        }
        if (uVar7 != 0) {
          lVar11 = uVar7 << 3;
          do {
            lVar11 = lVar11 + -8;
            *param_2 = *param_3;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar11 != 0);
        }
      }
      *param_1 = uVar1 + uVar14;
      param_2 = (undefined8 *)(*(long *)(param_1 + 2) + (uVar16 >> 3 & 0xffffffff) * 8);
    }
  }
  return param_2;
}




long FUN_009f62f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_00e6a474(uVar7);
  uVar4 = FUN_0091ed5c(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar6 = (ulong)uVar1 * (ulong)uVar4 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar4 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar6 * 4) <= uVar4) break;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
    }
    if ((int)uVar1 <= (int)uVar6) {
      return 0;
    }
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4);
      if (uVar4 <= uVar2) {
        if (uVar2 != uVar4) {
          return 0;
        }
        return *(long *)(param_1 + 6) + uVar6 * 8;
      }
      uVar2 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar2;
    } while ((int)uVar2 < (int)uVar1);
  }
  return 0;
}




void FUN_009f63a0(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0xa0000000a;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_00e70510(param_1 + 0xf);
  FUN_00e70510(param_1 + 0x11);
  FUN_00e70510(param_1 + 0x13);
  FUN_00e70510(param_1 + 0x15);
  FUN_00e70510(param_1 + 0x17);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)((long)param_1 + 0xda) = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  return;
}




void FUN_009f641c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c(param_3,0);
  thunk_FUN_00e7051c(param_1,uVar2);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0xd4));
  FUN_00e705c8(&local_58,"[PROGRESSSTATE]");
  FUN_00e713f0(param_1,0,&local_58,&local_48);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70e18(&local_48,&DAT_01bb6d43,*(undefined4 *)(param_2 + 0xd0));
  FUN_00e705c8(&local_58,"[PROGRESSMAX]");
  FUN_00e713f0(param_1,0,&local_58,&local_48);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_009f652c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(int *)(param_1 + 200);
  if (-1 < *(int *)(param_1 + 200)) {
    lVar1 = FUN_00e85318(0);
    uVar2 = uVar2 - lVar1 & ((long)(uVar2 - lVar1) >> 0x3f ^ 0xffffffffffffffffU);
  }
  return uVar2;
}




void FUN_009f6560(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_009f65b0(param_1 + 0x10,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_009f65b0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 4;
    }
  }
  return 0;
}




byte FUN_009f6658(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xda) == '\0') {
    uVar2 = FUN_009580b8();
    bVar1 = FUN_00962b48(uVar2,param_1 + 0x48);
    *(byte *)(param_1 + 0xda) = bVar1 & 1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}




void FUN_009f669c(void)

{
  long lVar1;
  void *pvVar2;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  memcpy(auStack_88,&PTR_s_battered_027c56d0,0x60);
  pvVar2 = operator_new(0x20);
  FUN_009f670c(pvVar2,auStack_88);
  DAT_031308a8 = pvVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f670c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar3 = param_1 + 2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  *puVar3 = 0;
  FUN_0091f484(param_1,6);
  FUN_009f6e50(puVar3,6);
  lVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  do {
    uVar4 = *(undefined8 *)(param_2 + lVar5);
    uVar2 = FUN_00e6a474(uVar4);
    local_5c = FUN_0091ed5c(uVar4,uVar2,0x12345678);
    if (local_5c < uVar7) goto LAB_009f67cc;
    FUN_0091f584(param_1,&local_5c);
    FUN_009f6ed0(puVar3,param_2 + lVar5 + 8);
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x10;
    uVar7 = local_5c;
  } while (uVar6 < 6);
LAB_009f67e8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_009f67cc:
  do {
    FUN_009f6f58(param_1,param_2 + lVar5,param_2 + lVar5 + 8);
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x60);
  goto LAB_009f67e8;
}




void FUN_009f6818(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_031308a8;
  if (DAT_031308a8 != (void *)0x0) {
    if (*(void **)((long)DAT_031308a8 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_031308a8 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_031308a8 = (void *)0x0;
  return;
}




void FUN_009f6864(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
  case 5:
    FUN_008fa54c(param_1,"build://Sounds/UI.assetbundle/sfx_common_chest_opens.mp3");
    return;
  default:
    FUN_008fa54c(param_1,"build://Sounds/UI.assetbundle/sfx_rare_chest_opens.mp3");
    return;
  case 3:
    FUN_008fa54c(param_1,"build://Sounds/UI.assetbundle/sfx_epic_chest_opens.mp3");
    return;
  case 4:
    FUN_008fa54c(param_1,"build://Sounds/UI.assetbundle/sfx_legendary_chest_opens.mp3");
    return;
  }
}




void FUN_009f68b8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_1 - 1U < 10) {
    pcVar2 = (&PTR_s__KindredMenuRewardsChestBattered_027c5730)[(int)(param_1 - 1U)];
  }
  else {
    pcVar2 = "*KindredMenuRewardsChest*";
  }
  uVar1 = FUN_00d6eb50();
  FUN_00d6eb5c(uVar1,pcVar2);
  return;
}




void FUN_009f68fc(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}




void FUN_009f691c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_008fa54c();
  FUN_008fa54c(param_1 + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x30) = param_4;
  FUN_008fa54c(param_1 + 0x38,param_5);
  FUN_008fa54c(param_1 + 0x50,param_6);
  *(undefined4 *)(param_1 + 0x68) = param_7;
  return;
}




void FUN_009f698c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_008fa54c();
  FUN_008fa54c(param_1 + 0x18,param_3);
  FUN_008fcdb8(param_1 + 0x30,param_4);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}




void FUN_009f69d8(byte *param_1)

{
  FUN_009f6aa0(param_1 + 0x48,1);
  if ((param_1[0x30] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_009f6a38(long param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_008fcea8(param_1 + 0x18,param_2,sVar1);
  return;
}




void FUN_009f6a6c(long param_1,undefined4 param_2)

{
  FUN_009f6aa0(param_1 + 0x48,0);
  FUN_009f6b4c(param_1 + 0x48,param_2);
  return;
}




void FUN_009f6aa0(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x70;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x38);
      do {
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x20] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x10));
        }
        if ((pbVar2[-0x38] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x28));
        }
        lVar1 = lVar1 + -0x70;
        pbVar2 = pbVar2 + 0x70;
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




void FUN_009f6b4c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x70);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x70);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        *(undefined4 *)((long)pvVar6 + 0x30) = *(undefined4 *)((long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x38,(long)pvVar3 + 0x38);
        FUN_008fcdb8((long)pvVar6 + 0x50,(long)pvVar3 + 0x50);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x68);
        pvVar3 = (void *)((long)pvVar3 + 0x70);
        *(undefined4 *)((long)pvVar6 + 0x68) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x70);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x70;
        pbVar4 = (byte *)((long)pvVar3 + 0x38);
        do {
          if ((pbVar4[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x28));
          }
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x20] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x10));
          }
          if ((pbVar4[-0x38] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x28));
          }
          lVar5 = lVar5 + -0x70;
          pbVar4 = pbVar4 + 0x70;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_009f6c84(long param_1)

{
  long lVar1;
  byte local_98 [16];
  void *local_88;
  byte local_80;
  void *local_70;
  byte local_60;
  void *local_50;
  byte local_48;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_009f691c(local_98);
  FUN_009f6d1c(param_1 + 0x48,local_98);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009f6d1c(uint *param_1,long param_2)

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
    FUN_009f6b4c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x70;
  FUN_008fcdb8(lVar4 + -0x70,param_2);
  FUN_008fcdb8(lVar4 + -0x58,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -0x40) = *(undefined4 *)(param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x38);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x50);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x68);
  return;
}




void FUN_009f6de4(undefined8 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_34 = 0;
  local_30 = param_1;
  puVar3 = (undefined4 *)FUN_009f7280(DAT_031308a8,&local_30);
  puVar1 = &local_34;
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = puVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*puVar1);
}




void FUN_009f6e50(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_009f6ed0(uint *param_1,undefined4 *param_2)

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
    FUN_009f6e50(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_009f6f58(uint *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  local_3c = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar1 = *param_1;
  lVar5 = *(long *)(param_1 + 2);
  if (uVar1 == 0) {
    iVar6 = 0;
  }
  else {
    uVar8 = (ulong)uVar1 * (ulong)local_3c >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)local_3c >> 0x20)) {
      do {
        if (*(uint *)(lVar5 + uVar8 * 4) <= local_3c) break;
        iVar6 = (int)uVar8;
        uVar2 = iVar6 - 1;
        uVar8 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar6);
    }
    while ((iVar6 = (int)uVar8, iVar6 < (int)uVar1 && (*(uint *)(lVar5 + uVar8 * 4) < local_3c))) {
      uVar8 = (ulong)(iVar6 + 1);
    }
  }
  FUN_0091f770(param_1,lVar5 + (long)iVar6 * 4,&local_3c,&local_38);
  FUN_009f7054(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar6 * 4,param_3,param_3 + 4);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

