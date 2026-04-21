// functions/00b11 — 17 functions
#include "libGameKindred.h"




void FUN_00b110d8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00969248();
  if (((*(int *)(lVar2 + 0x38) < 1) && (-1 < (int)param_3)) &&
     (param_3 < *(uint *)(param_1 + 0x2410))) {
    FUN_008fce60(param_1 + 0x2510,
                 *(long *)(*(long *)(param_1 + 0x2418) + (ulong)param_3 * 8) + 0x1cb8);
    *(undefined4 *)(param_1 + 0x2540) =
         *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x2418) + (ulong)param_3 * 8) + 0x1ce8);
    uVar3 = FUN_00e6ce7c("MENU_DIALOG_BOOSTS_PURCHASE_TITLE",0);
    thunk_FUN_00e7051c(&local_48,uVar3);
    uVar3 = FUN_00e6ce7c("MENU_DIALOG_BOOSTS_PURCHASE_BODY",0);
    thunk_FUN_00e7051c(&local_58,uVar3);
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x2540));
    FUN_00e70510(&local_78);
    auVar6 = FUN_009580c4();
    uVar5 = 0;
    if ((auVar6._0_8_ & 1) != 0) {
      lVar2 = FUN_009580b8(auVar6._0_8_,auVar6._8_8_,0);
      uVar5 = *(undefined4 *)(lVar2 + 0x5450);
    }
    FUN_00e70e18(&local_78,"%u",uVar5);
    thunk_FUN_00e7051c(&local_88,&DAT_03210450);
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_00910394(&local_88,*(undefined8 *)(param_1 + 200));
    }
    FUN_00e705c8(&local_98,"[BOOST_NAME]");
    FUN_00e71248(&local_58,0,&local_98,&local_88);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00e705c8(&local_98,"[UNLOCK_AMOUNT]");
    FUN_00e71248(&local_58,0,&local_98,&local_68);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00e705c8(&local_98,"[UNLOCK_CURRENCY]");
    uVar3 = FUN_00e6ce7c("MENU_GENERIC_GOLD_NAME",0);
    FUN_00e71248(&local_58,0,&local_98,uVar3);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00e705c8(&local_98,"[BALANCE_AMOUNT]");
    FUN_00e71248(&local_58,0,&local_98,&local_78);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00e705c8(&local_98,"[BALANCE_CURRENCY]");
    uVar3 = FUN_00e6ce7c("MENU_GENERIC_GOLD_NAME",0);
    FUN_00e71248(&local_58,0,&local_98,uVar3);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    FUN_00a9b9f8(&local_48,&local_58,uVar3,uVar4,&DAT_03210450,param_1,thunk_FUN_00b113f8,
                 thunk_FUN_00b114f4,0);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
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
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b113f8(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  
  pbVar1 = (byte *)(param_1 + 0x2510);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2518);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x2520);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x2511);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)(param_1 + 0x2511);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *__s2) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        __s2 = __s2 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar5 = FUN_009580b8();
  FUN_00961494(uVar5,pbVar1,param_1 + 0x2528);
  FUN_008fce60(pbVar1,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x2540) = 0xffffffff;
  FUN_008fce60(param_1 + 0x2528,&DAT_0320ffa8);
  return;
}




void thunk_FUN_00b114f4(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *__s1;
  
  bVar2 = *(byte *)(param_1 + 0x2510);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2518);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x2520);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x2511);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar4 = (char *)(param_1 + 0x2511);
      lVar5 = -(ulong)(bVar2 >> 1);
      while (*pcVar4 == *__s2) {
        pcVar4 = pcVar4 + 1;
        lVar5 = lVar5 + 1;
        __s2 = __s2 + 1;
        if (lVar5 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar3 = memcmp(__s1,__s2,__n);
      if (iVar3 == 0) {
        return;
      }
    }
  }
  FUN_008fce60((byte *)(param_1 + 0x2510),&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x2540) = 0xffffffff;
  FUN_008fce60(param_1 + 0x2528,&DAT_0320ffa8);
  return;
}




void FUN_00b113f8(long param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *__s1;
  
  pbVar1 = (byte *)(param_1 + 0x2510);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2518);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x2520);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x2511);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar6 = (char *)(param_1 + 0x2511);
      lVar7 = -(ulong)(bVar3 >> 1);
      while (*pcVar6 == *__s2) {
        pcVar6 = pcVar6 + 1;
        lVar7 = lVar7 + 1;
        __s2 = __s2 + 1;
        if (lVar7 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar5 = FUN_009580b8();
  FUN_00961494(uVar5,pbVar1,param_1 + 0x2528);
  FUN_008fce60(pbVar1,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x2540) = 0xffffffff;
  FUN_008fce60(param_1 + 0x2528,&DAT_0320ffa8);
  return;
}




void FUN_00b114f4(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *__s1;
  
  bVar2 = *(byte *)(param_1 + 0x2510);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2518);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x2520);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x2511);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      pcVar4 = (char *)(param_1 + 0x2511);
      lVar5 = -(ulong)(bVar2 >> 1);
      while (*pcVar4 == *__s2) {
        pcVar4 = pcVar4 + 1;
        lVar5 = lVar5 + 1;
        __s2 = __s2 + 1;
        if (lVar5 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar3 = memcmp(__s1,__s2,__n);
      if (iVar3 == 0) {
        return;
      }
    }
  }
  FUN_008fce60((byte *)(param_1 + 0x2510),&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x2540) = 0xffffffff;
  FUN_008fce60(param_1 + 0x2528,&DAT_0320ffa8);
  return;
}




void FUN_00b115dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x17;
  lVar2 = 0x6fd8;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *param_1 = (long)&PTR_FUN_027dc578;
  do {
    FUN_00b0ff28(plVar1);
    lVar2 = lVar2 + -0x2548;
    plVar1 = plVar1 + 0x4a9;
  } while (lVar2 != 0);
  plVar1 = param_1 + 0x17;
  lVar2 = 3;
  *(undefined4 *)(param_1 + 0xe12) = 0;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    *(uint *)((long)plVar1 + 0x84) = *(uint *)((long)plVar1 + 0x84) & 0xfffffffb;
    FUN_00b27024(plVar1);
    lVar2 = lVar2 + -1;
    plVar1 = plVar1 + 0x4a9;
  } while (lVar2 != 0);
  return;
}




void FUN_00b116a0(float param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  
  uVar4 = 0;
  lVar5 = param_2;
  do {
    if (*(int *)(lVar5 + 0x220) == 1) {
      FUN_00b26c0c(lVar5 + 0xb8,0);
    }
    else {
      if ((0.0 < *(float *)(lVar5 + 0x20c)) &&
         (fVar6 = *(float *)(lVar5 + 0x20c) - param_1, *(float *)(lVar5 + 0x20c) = fVar6,
         fVar6 <= 0.0)) {
        *(undefined4 *)(lVar5 + 0x220) = 1;
        return;
      }
      if (((*(int *)(lVar5 + 0x220) == 2) && (*(long *)(lVar5 + 0xd8) != 0)) &&
         ((*(byte *)(*(long *)(param_2 + 0x20) + 0x84) >> 2 & 1) != 0)) {
        uVar2 = FUN_019807a4();
        if ((((uVar2 & 1) != 0) && (iVar1 = FUN_019807b8(), iVar1 != 0)) &&
           ((*(char *)(lVar5 + 0x21c) != '\0' &&
            (pbVar3 = (byte *)FUN_019807cc(0), (*pbVar3 & 1) == 0)))) {
          *(undefined4 *)(lVar5 + 0x220) = 1;
        }
        uVar2 = FUN_019806a4();
        if ((((uVar2 & 1) != 0) && (*(char *)(lVar5 + 0x21c) != '\0')) &&
           (uVar2 = FUN_019806f8(0), (uVar2 & 1) != 0)) {
          *(undefined4 *)(lVar5 + 0x220) = 1;
        }
        if (*(char *)(lVar5 + 0x21d) != '\0') {
          FUN_00b2760c(lVar5 + 0xb8);
        }
      }
    }
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x2548;
    if (2 < uVar4) {
      return;
    }
  } while( true );
}




void FUN_00b117b8(long param_1)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)(param_1 + 0x220);
  lVar2 = 3;
  do {
    if (*piVar1 == 2) {
      FUN_00b26c0c(piVar1 + -0x5a,0);
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 0x952;
  } while (lVar2 != 0);
  return;
}




void FUN_00b11808(long param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_40 = param_2 + 1;
  }
  uVar2 = FUN_00b118a0(param_1 + 0x88,&local_40);
  if ((uVar2 & 1) != 0) {
    local_40 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_40 = *(byte **)(param_2 + 0x10);
    }
    FUN_00b11940(param_1 + 0x88,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00b118a0(uint *param_1,undefined8 *param_2)

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
    if (uVar3 != 0xffffffff) {
      return *(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1;
    }
  }
  return false;
}




void FUN_00b11940(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  void *pvVar10;
  int *piVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar14 = *param_2;
  uVar7 = FUN_00e6a474(uVar14);
  uVar8 = FUN_0091ed5c(uVar14,uVar7,0x12345678);
  uVar16 = *param_1;
  if (uVar16 == 0) {
    lVar9 = *(long *)(param_1 + 2);
    uVar17 = 0xffffffff;
  }
  else {
    lVar9 = *(long *)(param_1 + 2);
    uVar4 = 0;
    if (uVar16 != 0) {
      uVar4 = uVar8 / uVar16;
    }
    uVar4 = uVar8 - uVar4 * uVar16;
    while ((uVar17 = (ulong)uVar4, *(uint *)(lVar9 + uVar17 * 8) != uVar8 &&
           (*(int *)(lVar9 + uVar17 * 8 + 4) != -1))) {
      uVar12 = uVar16;
      if (0 < (int)uVar4) {
        uVar12 = uVar4;
      }
      uVar4 = uVar12 - 1;
    }
  }
  puVar15 = param_1 + 2;
  uVar16 = *(uint *)(lVar9 + uVar17 * 8 + 4);
  *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar16 * 4) = param_1[10];
  pvVar10 = *(void **)(param_1 + 2);
  param_1[10] = uVar16;
  *(undefined4 *)((long)pvVar10 + uVar17 * 8 + 4) = 0xffffffff;
  while( true ) {
    uVar16 = (uint)uVar17;
    if ((int)uVar16 < 1) {
      uVar16 = *param_1;
    }
    uVar17 = (ulong)(uVar16 - 1);
    piVar11 = (int *)((long)pvVar10 + uVar17 * 8 + 4);
    iVar3 = *piVar11;
    if (iVar3 == -1) break;
    *piVar11 = -1;
    uVar16 = param_1[4];
    uVar8 = *param_1;
    uVar4 = *(uint *)((long)pvVar10 + uVar17 * 8);
    param_1[4] = uVar16 + 1;
    if (uVar8 >> 1 < uVar16 + 1) {
      local_68 = 0;
      local_60 = (void *)0x0;
      FUN_009348c8(&local_68,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
      uVar16 = *param_1;
      uVar12 = uVar16 - 1;
      uVar8 = (uint)local_68;
      if ((int)uVar12 < 0) {
        pvVar10 = *(void **)puVar15;
      }
      else {
        pvVar10 = *(void **)puVar15;
        do {
          iVar1 = *(int *)((long)pvVar10 + (ulong)uVar12 * 8 + 4);
          if (iVar1 != -1) {
            uVar16 = *(uint *)((long)pvVar10 + (ulong)uVar12 * 8);
            uVar5 = 0;
            if ((uint)local_68 != 0) {
              uVar5 = uVar16 / (uint)local_68;
            }
            uVar13 = (ulong)(uVar16 - uVar5 * (uint)local_68);
            piVar11 = (int *)((long)local_60 + uVar13 * 8 + 4);
            iVar2 = *piVar11;
            while (iVar2 != -1) {
              uVar5 = (uint)local_68;
              if (0 < (int)(uint)uVar13) {
                uVar5 = (uint)uVar13;
              }
              uVar13 = (ulong)(uVar5 - 1);
              piVar11 = (int *)((long)local_60 + uVar13 * 8 + 4);
              iVar2 = *piVar11;
            }
            *(uint *)((long)local_60 + uVar13 * 8) = uVar16;
            *piVar11 = iVar1;
          }
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
        uVar16 = *param_1;
      }
      *(undefined8 *)param_1 = local_68;
      local_68 = CONCAT44(param_1[1],uVar16);
      *(void **)puVar15 = local_60;
      if (pvVar10 == (void *)0x0) {
        pvVar10 = local_60;
        local_60 = (void *)0;
      }
      else {
        local_60 = pvVar10;
        operator_delete__(pvVar10);
        local_68 = 0;
        local_60 = (void *)0x0;
        uVar8 = *param_1;
        pvVar10 = (void *)*(long *)(param_1 + 2);
      }
    }
    uVar16 = 0;
    if (uVar8 != 0) {
      uVar16 = uVar4 / uVar8;
    }
    uVar13 = (ulong)(uVar4 - uVar16 * uVar8);
    piVar11 = (int *)((long)pvVar10 + uVar13 * 8 + 4);
    iVar1 = *piVar11;
    while (iVar1 != -1) {
      uVar16 = uVar8;
      if (0 < (int)(uint)uVar13) {
        uVar16 = (uint)uVar13;
      }
      uVar13 = (ulong)(uVar16 - 1);
      piVar11 = (int *)((long)pvVar10 + uVar13 * 8 + 4);
      iVar1 = *piVar11;
    }
    *(uint *)((long)pvVar10 + uVar13 * 8) = uVar4;
    *piVar11 = iVar3;
  }
  param_1[4] = param_1[4] - 1;
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b11bc0(long param_1,byte *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_40 = param_2 + 1;
  }
  uVar3 = FUN_00b118a0(param_1 + 0x88,&local_40);
  bVar2 = false;
  if ((uVar3 & 1) != 0) {
    local_40 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_40 = *(byte **)(param_2 + 0x10);
    }
    piVar4 = (int *)FUN_00b1231c(param_1 + 0x88,&local_40);
    bVar2 = *(int *)(param_1 + (long)*piVar4 * 0x2548 + 0x220) == 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00b11c7c(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  void *__s1;
  ulong uVar7;
  
  __n = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  uVar7 = 0;
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    __n = (ulong)(*param_2 >> 1);
  }
  do {
    lVar5 = param_1 + uVar7 * 0x2548;
    bVar2 = *(byte *)(lVar5 + 0xe60);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(lVar5 + 0xe68);
    }
    if (uVar1 == __n) {
      __s1 = *(void **)(param_1 + uVar7 * 0x2548 + 0xe70);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0xe61);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pbVar4 = (byte *)(lVar5 + 0xe61);
          lVar5 = -(ulong)(bVar2 >> 1);
          pbVar6 = __s2;
          do {
            if (*pbVar4 != *pbVar6) goto LAB_00b11d44;
            pbVar4 = pbVar4 + 1;
            lVar5 = lVar5 + 1;
            pbVar6 = pbVar6 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b11d44;
      if (*(int *)(param_1 + uVar7 * 0x2548 + 0x220) == 2) {
        FUN_00b26c0c(param_1 + (uVar7 & 0xffffffff) * 0x2548 + 0xb8,0);
        return;
      }
    }
LAB_00b11d44:
    uVar7 = uVar7 + 1;
    if (2 < uVar7) {
      return;
    }
  } while( true );
}




void FUN_00b11d8c(long param_1,byte *param_2,undefined8 param_3)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_60 = param_2 + 1;
  }
  uVar3 = FUN_00b118a0(param_1 + 0x88,&local_60);
  if ((uVar3 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x7090);
    uVar5 = *puVar1;
    uVar4 = 0xffffffff;
    do {
      if (*(int *)(param_1 + (long)(int)uVar5 * 0x2548 + 0x220) == 0) {
        FUN_00b10114(param_1 + (long)(int)uVar5 * 0x2548 + 0xb8,param_2,param_3,0);
        local_60 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          local_60 = *(byte **)(param_2 + 0x10);
        }
        FUN_00a00cbc(param_1 + 0x88,&local_60,puVar1);
        break;
      }
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 + 1) % 3;
      *puVar1 = uVar5;
    } while (uVar4 < 2);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00b11eb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x7090);
  uVar1 = 0xffffffff;
  do {
    if (*(int *)(param_1 + (long)(int)uVar2 * 0x2548 + 0x220) == 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    uVar2 = (uVar2 + 1) % 3;
    *(uint *)(param_1 + 0x7090) = uVar2;
  } while (uVar1 < 2);
  return 0;
}




void FUN_00b11f0c(long param_1,byte *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  byte *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_50 = param_2 + 1;
  }
  uVar2 = FUN_00b118a0(param_1 + 0x88,&local_50);
  if ((uVar2 & 1) != 0) {
    local_50 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_50 = *(byte **)(param_2 + 0x10);
    }
    piVar3 = (int *)FUN_00b1231c(param_1 + 0x88,&local_50);
    FUN_00b10114(param_1 + (long)*piVar3 * 0x2548 + 0xb8,param_2,param_3,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b11fd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = -0x6fd8;
  puVar1 = param_1 + 0x969;
  *param_1 = &PTR_FUN_027dc578;
  do {
    FUN_00b10040(puVar1);
    lVar2 = lVar2 + 0x2548;
    puVar1 = puVar1 + -0x4a9;
  } while (lVar2 != 0);
  FUN_00a02470(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}

