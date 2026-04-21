// functions/00b0c — 13 functions
#include "libGameKindred.h"




void FUN_00b0c060(undefined4 param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  undefined4 uVar1;
  
  FUN_00ab9298(param_2,0);
  param_2[0x3df] = 0;
  *param_2 = &PTR_FUN_027dc200;
  param_2[0x3de] = &PTR_FUN_027dc3d8;
  FUN_00f0e4a8(param_2 + 0x3e0);
  FUN_00f017e8(param_2 + 0x3fe);
  param_2[0x3fe] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_2 + 0x40f);
  FUN_00f0d160(param_2 + 0x42d);
  FUN_00f0e4a8(param_2 + 0x453);
  FUN_00f0e4a8(param_2 + 0x471);
  param_2[0x492] = 0;
  param_2[0x491] = 0;
  param_2[0x490] = 0;
  param_2[0x48f] = 0;
  param_2[0x493] = 0;
  FUN_008fcdb8(param_2 + 0x494,&DAT_0320ffa8);
  FUN_008fcdb8(param_2 + 0x497,param_3);
  FUN_00e70510(param_2 + 0x49a);
  FUN_00e70510(param_2 + 0x49c);
  *(undefined4 *)(param_2 + 0x49e) = 0xffffffff;
  *(byte *)((long)param_2 + 0x24f4) = param_4 & 1;
  *(undefined2 *)((long)param_2 + 0x24f5) = 0;
  FUN_00b0bc0c(param_2);
  uVar1 = 0;
  if (*(char *)((long)param_2 + 0x24f4) != '\0') {
    uVar1 = param_1;
  }
  FUN_00ab95f4(uVar1,param_2);
  return;
}




void FUN_00b0c19c(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined4 uVar1;
  
  FUN_00ab9298(param_2,0);
  param_2[0x3df] = 0;
  *param_2 = &PTR_FUN_027dc200;
  param_2[0x3de] = &PTR_FUN_027dc3d8;
  FUN_00f0e4a8(param_2 + 0x3e0);
  FUN_00f017e8(param_2 + 0x3fe);
  param_2[0x3fe] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_2 + 0x40f);
  FUN_00f0d160(param_2 + 0x42d);
  FUN_00f0e4a8(param_2 + 0x453);
  FUN_00f0e4a8(param_2 + 0x471);
  param_2[0x490] = 0;
  param_2[0x48f] = 0;
  FUN_008fcdb8(param_2 + 0x491,param_3);
  FUN_008fcdb8(param_2 + 0x494,param_4);
  FUN_008fcdb8(param_2 + 0x497,&DAT_0320ffa8);
  FUN_00e70510(param_2 + 0x49a);
  FUN_00e70510(param_2 + 0x49c);
  *(undefined4 *)(param_2 + 0x49e) = 0xffffffff;
  *(byte *)((long)param_2 + 0x24f4) = param_5 & 1;
  *(undefined2 *)((long)param_2 + 0x24f5) = 0;
  FUN_00b0bc0c(param_2);
  uVar1 = 0;
  if (*(char *)((long)param_2 + 0x24f4) != '\0') {
    uVar1 = param_1;
  }
  FUN_00ab95f4(uVar1,param_2);
  FUN_009307c8(param_2 + 0x3de);
  return;
}




void FUN_00b0c2f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dc200;
  param_1[0x3de] = &PTR_FUN_027dc3d8;
  FUN_00930530(param_1 + 0x3de);
  if ((void *)param_1[0x49d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x49d]);
    param_1[0x49d] = 0;
    param_1[0x49c] = 0;
  }
  if ((void *)param_1[0x49b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x49b]);
    param_1[0x49b] = 0;
    param_1[0x49a] = 0;
  }
  if ((*(byte *)(param_1 + 0x497) & 1) != 0) {
    operator_delete((void *)param_1[0x499]);
  }
  if ((*(byte *)(param_1 + 0x494) & 1) != 0) {
    operator_delete((void *)param_1[0x496]);
  }
  if ((*(byte *)(param_1 + 0x491) & 1) != 0) {
    operator_delete((void *)param_1[0x493]);
  }
  FUN_00ae2d9c(param_1 + 0x48f,1);
  param_1[0x471] = &PTR_FUN_028266f0;
  param_1[0x488] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48b);
  FUN_00f13d08(param_1 + 0x471);
  param_1[0x453] = &PTR_FUN_028266f0;
  param_1[0x46a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x46d);
  FUN_00f13d08(param_1 + 0x453);
  FUN_00f0d3a4(param_1 + 0x42d);
  param_1[0x40f] = &PTR_FUN_028266f0;
  param_1[0x426] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x429);
  FUN_00f13d08(param_1 + 0x40f);
  FUN_00f01868(param_1 + 0x3fe);
  param_1[0x3e0] = &PTR_FUN_028266f0;
  param_1[0x3f7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3fa);
  FUN_00f13d08(param_1 + 0x3e0);
  FUN_0093051c(param_1 + 0x3de);
  *param_1 = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x3a7);
  FUN_00f01868(param_1 + 0x396);
  FUN_00f13d08(param_1 + 0x362);
  FUN_00f01868(param_1 + 0x351);
  FUN_00f0d3a4(param_1 + 0x32b);
  FUN_00f0d3a4(param_1 + 0x305);
  param_1[0x2e7] = &PTR_FUN_028266f0;
  param_1[0x2fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x301);
  FUN_00f13d08(param_1 + 0x2e7);
  param_1[0x2c9] = &PTR_FUN_028266f0;
  param_1[0x2e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2e3);
  FUN_00f13d08(param_1 + 0x2c9);
  FUN_00f01868(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  return;
}




void FUN_00b0c530(long param_1)

{
  FUN_00b0c2f8(param_1 + -0x1ef0);
  return;
}




void FUN_00b0c53c(void *param_1)

{
  FUN_00b0c2f8();
  operator_delete(param_1);
  return;
}




void FUN_00b0c560(long param_1)

{
  FUN_00b0c2f8((void *)(param_1 + -0x1ef0));
  operator_delete((void *)(param_1 + -0x1ef0));
  return;
}




void FUN_00b0c58c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0096bc2c();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00cc7c38();
    if (*(char *)(lVar3 + 0x38) != '\0') {
      FUN_00b0c61c(param_1);
      FUN_00b0ca24(param_1);
      uVar1 = FUN_00e70b04(param_1 + 0x24d0);
      FUN_00b0cb60(param_1,uVar1 & 1,&DAT_03210450);
      FUN_00b0cbbc(param_1);
      *(undefined1 *)(param_1 + 0x24f5) = 1;
      return;
    }
  }
  FUN_00b0cb60(param_1,1,&DAT_03210450);
  return;
}




void FUN_00b0c61c(long param_1)

{
  char *__s1;
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *__s2;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  size_t sVar10;
  size_t sVar11;
  byte bVar12;
  size_t sVar13;
  char *pcVar14;
  char *pcVar15;
  byte bVar16;
  size_t sVar17;
  byte local_98 [16];
  void *local_88;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_008fcdb8(local_80,&DAT_0320ffa8);
  FUN_008fa54c(local_98,"gold");
  uVar5 = FUN_00b0cf7c(param_1,local_98);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((uVar5 & 1) == 0) {
    FUN_008fa54c(local_98,"silver");
    uVar5 = FUN_00b0cf7c(param_1,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((uVar5 & 1) != 0) {
      pcVar15 = "glory_icon_small";
      goto LAB_00b0c75c;
    }
    FUN_008fa54c(local_98,"opal");
    uVar5 = FUN_00b0cf7c(param_1,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((uVar5 & 1) != 0) {
      pcVar15 = "opal_icon_small";
      goto LAB_00b0c75c;
    }
    FUN_008fa54c(local_98,"essence");
    uVar5 = FUN_00b0cf7c(param_1,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    if ((uVar5 & 1) != 0) {
      pcVar15 = "essence_icon_small";
      goto LAB_00b0c75c;
    }
  }
  else {
    pcVar15 = "ice_icon_small";
LAB_00b0c75c:
    FUN_008fa54c(local_98,pcVar15);
    FUN_008fce60(local_80,local_98);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
  }
  pcVar15 = local_70;
  sVar11 = DAT_0320ffb0;
  sVar13 = (size_t)(DAT_0320ffa8 >> 1);
  sVar2 = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    sVar2 = local_78;
  }
  sVar10 = sVar13;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar10 = DAT_0320ffb0;
  }
  if (sVar2 == sVar10) {
    bVar12 = DAT_0320ffa8 & 1;
    pcVar14 = (char *)((ulong)local_80 | 1);
    __s1 = pcVar14;
    if ((local_80[0] & 1) != 0) {
      __s1 = local_70;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_80[0] & 1) == 0) {
      if (sVar2 != 0) {
        lVar9 = -(ulong)(local_80[0] >> 1);
        do {
          if (*pcVar14 != *__s2) goto LAB_00b0c804;
          pcVar14 = pcVar14 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar4 = memcmp(__s1,__s2,sVar2), iVar4 != 0)) goto LAB_00b0c844;
  }
  else {
LAB_00b0c804:
    if ((local_80[0] & 1) == 0) {
      pcVar15 = (char *)((ulong)local_80 | 1);
      pcVar14 = pcVar15;
    }
    else {
      pcVar14 = (char *)((ulong)local_80 | 1);
    }
LAB_00b0c844:
    FUN_00f0e578(param_1 + 0x1f00,pcVar15);
    if ((local_80[0] & 1) != 0) {
      pcVar14 = local_70;
    }
    FUN_00f0e578(param_1 + 0x2078,pcVar14);
    bVar12 = DAT_0320ffa8 & 1;
    sVar13 = (size_t)(DAT_0320ffa8 >> 1);
    sVar11 = DAT_0320ffb0;
  }
  bVar16 = *(byte *)(param_1 + 0x2488);
  sVar17 = *(size_t *)(param_1 + 0x2490);
  sVar10 = (size_t)(bVar16 >> 1);
  sVar2 = sVar10;
  if ((bVar16 & 1) != 0) {
    sVar2 = sVar17;
  }
  sVar1 = sVar13;
  if (bVar12 != 0) {
    sVar1 = sVar11;
  }
  if (sVar2 == sVar1) {
    pvVar7 = *(void **)(param_1 + 0x2498);
    if ((bVar16 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 0x2489);
    }
    pcVar15 = DAT_0320ffb8;
    if (bVar12 == 0) {
      pcVar15 = &DAT_0320ffa9;
    }
    if ((bVar16 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar14 = (char *)(param_1 + 0x2489);
        lVar9 = -sVar10;
        do {
          if (*pcVar14 != *pcVar15) goto LAB_00b0c8f0;
          pcVar14 = pcVar14 + 1;
          lVar9 = lVar9 + 1;
          pcVar15 = pcVar15 + 1;
        } while (lVar9 != 0);
      }
    }
    else if (sVar2 != 0) {
      iVar4 = memcmp(pvVar7,pcVar15,sVar2);
      uVar8 = 0;
      if (iVar4 != 0) goto LAB_00b0c938;
    }
    iVar4 = FUN_00b0d110(param_1);
    bVar16 = *(byte *)(param_1 + 0x2488);
    sVar17 = *(size_t *)(param_1 + 0x2490);
    uVar8 = (uint)(0 < iVar4) << 2;
    sVar10 = (size_t)(bVar16 >> 1);
    bVar12 = DAT_0320ffa8 & 1;
    sVar13 = (size_t)(DAT_0320ffa8 >> 1);
    sVar11 = DAT_0320ffb0;
  }
  else {
LAB_00b0c8f0:
    uVar8 = 0;
  }
LAB_00b0c938:
  sVar2 = sVar10;
  if ((bVar16 & 1) != 0) {
    sVar2 = sVar17;
  }
  if (bVar12 != 0) {
    sVar13 = sVar11;
  }
  uVar6 = 0;
  *(uint *)(param_1 + 0x1f84) = *(uint *)(param_1 + 0x1f84) & 0xfffffffb | uVar8;
  if (sVar2 == sVar13) {
    pvVar7 = *(void **)(param_1 + 0x2498);
    if ((bVar16 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 0x2489);
    }
    pcVar15 = DAT_0320ffb8;
    if (bVar12 == 0) {
      pcVar15 = &DAT_0320ffa9;
    }
    if ((bVar16 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar14 = (char *)(param_1 + 0x2489);
        do {
          if (*pcVar14 != *pcVar15) {
            uVar6 = 0;
            goto LAB_00b0c9d0;
          }
          sVar10 = sVar10 - 1;
          pcVar14 = pcVar14 + 1;
          pcVar15 = pcVar15 + 1;
        } while (sVar10 != 0);
      }
    }
    else if (sVar2 != 0) {
      iVar4 = memcmp(pvVar7,pcVar15,sVar2);
      uVar6 = (uint)(iVar4 == 0) << 2;
      goto LAB_00b0c9d0;
    }
    uVar6 = 4;
  }
LAB_00b0c9d0:
  *(uint *)(param_1 + 0x20fc) = *(uint *)(param_1 + 0x20fc) & 0xfffffffb | uVar6;
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b0ca24(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0097b388(local_90);
  uVar3 = FUN_00930790(param_1 + 0x2488,local_90);
  if ((uVar3 & 1) == 0) {
    iVar2 = FUN_00b0d110(param_1);
    if (iVar2 != 0) {
      if (iVar2 == -1) {
        FUN_00b09454(param_1,0);
      }
      else {
        FUN_00e70e18(param_1 + 0x24d0,&DAT_01bb6d43);
      }
      goto LAB_00b0cac0;
    }
    puVar4 = (undefined8 *)FUN_00e6ce7c("MENU_MARKET_CTA_FREE",0);
  }
  else {
    puVar4 = &local_58;
  }
  FUN_00910394(param_1 + 0x24d0,puVar4);
LAB_00b0cac0:
  uVar3 = FUN_00e70b04(param_1 + 0x24d0);
  if ((uVar3 & 1) == 0) {
    FUN_00ab7498(param_1,param_1 + 0x24d0);
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0cb60(long param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e70b88(param_3,&DAT_03210450);
  if ((uVar1 & 1) != 0) {
    FUN_00910394(param_1 + 0x24e0,param_3);
  }
  FUN_00b09454(param_1,~param_2 & 1);
  return;
}




void FUN_00b0cbbc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  size_t sVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  char *__s2;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  void *__s1;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar7 = FUN_0092ea9c();
  plVar2 = param_1 + 0x3e0;
  fVar14 = 204.0;
  if ((uVar7 & 1) == 0) {
    fVar14 = 174.0;
  }
  fVar11 = (float)FUN_00f0eac0(plVar2);
  plVar1 = param_1 + 0xe4;
  fVar12 = (float)FUN_00f0d4e0(plVar1);
  fVar12 = (fVar14 - (fVar11 + fVar12 + 4.0)) * 0.5;
  fVar11 = (float)FUN_00f0d4e0(plVar1);
  uVar10 = 0;
  if ((*(byte *)((long)param_1 + 0x26c) & 1) != 0) {
    bVar4 = *(byte *)(param_1 + 0x491);
    __n = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      __n = param_1[0x492];
    }
    sVar3 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    uVar10 = 0;
    if (__n == sVar3) {
      __s1 = (void *)param_1[0x493];
      if ((bVar4 & 1) == 0) {
        __s1 = (void *)((long)param_1 + 0x2489);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar4 & 1) == 0) {
        if (__n != 0) {
          pcVar8 = (char *)((long)param_1 + 0x2489);
          lVar9 = -(ulong)(bVar4 >> 1);
          do {
            if (*pcVar8 != *__s2) {
              uVar10 = 0;
              goto LAB_00b0cd0c;
            }
            pcVar8 = pcVar8 + 1;
            lVar9 = lVar9 + 1;
            __s2 = __s2 + 1;
          } while (lVar9 != 0);
        }
      }
      else if (__n != 0) {
        iVar6 = memcmp(__s1,__s2,__n);
        uVar10 = 0;
        if (iVar6 != 0) goto LAB_00b0cd0c;
      }
      iVar6 = FUN_00b0d110(param_1);
      uVar10 = (uint)(0 < iVar6) << 2;
    }
  }
LAB_00b0cd0c:
  *(uint *)((long)param_1 + 0x1f84) = *(uint *)((long)param_1 + 0x1f84) & 0xfffffffb | uVar10;
  fVar13 = (float)FUN_00f0eac0(plVar2);
  fVar13 = fVar12 + (fVar13 * 0.5 - fVar14 * 0.5) + -6.0;
  if ((*(float *)(param_1 + 1000) != fVar13) || (*(float *)((long)param_1 + 0x1f44) != 3.0)) {
    *(float *)(param_1 + 1000) = fVar13;
    *(undefined4 *)((long)param_1 + 0x1f44) = 0x40400000;
    FUN_0091ada4(plVar2);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(param_1[0x3e0] + 0x28))(plVar2,&local_70);
  fVar13 = 0.0;
  if (((*(byte *)((long)param_1 + 0x1f84) >> 2 & 1) != 0) &&
     (fVar13 = ((fVar14 - fVar11) * 0.5 - fVar12) + -4.0, fVar13 <= 0.0)) {
    fVar13 = 0.0;
  }
  FUN_00ab74fc(fVar13,0,param_1);
  fVar14 = 0.0;
  FUN_00f0db64(*(float *)((long)param_1 + 0x1594) -
               (*(float *)((long)param_1 + 0x158c) + *(float *)((long)param_1 + 0x158c)),0,
               0x3f800000,plVar1);
  if ((*(byte *)((long)param_1 + 0x20fc) >> 2 & 1) != 0) {
    fVar12 = *(float *)(param_1 + 0x417);
    fVar11 = (float)FUN_00f0e700(param_1 + 0x40f);
    fVar14 = *(float *)(param_1 + 0x435);
    fVar11 = fVar12 + fVar11 + 6.0;
    if (fVar14 != fVar11) {
      *(float *)(param_1 + 0x435) = fVar11;
      FUN_0091ada4(param_1 + 0x42d);
    }
  }
  plVar2 = param_1 + 0x42d;
  fVar11 = (float)FUN_00f0d548(plVar2);
  FUN_00f0d548(plVar2);
  fVar14 = fVar14 + -10.0;
  FUN_00f13f08(fVar11 + -10.0,param_1 + 0x453);
  fVar11 = (float)FUN_00f0d548(plVar2);
  FUN_00f0d548(plVar2);
  fVar14 = fVar14 + -10.0;
  FUN_00f13f08(fVar11 + -10.0,param_1 + 0x471);
  plVar2 = param_1 + 0x3fe;
  fVar11 = (float)FUN_00f01c54(plVar2,0,0,1,1);
  FUN_00f01c20(param_1 + 0x4e);
  fVar12 = fVar14 * -0.5;
  FUN_00f01c54(plVar2,0,0,1,1);
  fVar12 = fVar12 + fVar14 * -0.5;
  if ((*(float *)(param_1 + 0x406) != fVar11 * -0.5) ||
     (*(float *)((long)param_1 + 0x2034) != fVar12)) {
    *(float *)(param_1 + 0x406) = fVar11 * -0.5;
    *(float *)((long)param_1 + 0x2034) = fVar12;
    FUN_0091ada4(plVar2);
  }
  uVar10 = 0;
  if ((*(byte *)((long)param_1 + 0x26c) & 1) != 0) {
    uVar10 = (uint)(0 < (int)param_1[0x49e]) << 2;
  }
  *(uint *)((long)param_1 + 0x2074) = *(uint *)((long)param_1 + 0x2074) & 0xfffffffb | uVar10;
  (**(code **)(*param_1 + 0x170))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00b0cf7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  byte local_80 [16];
  void *local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa718(local_80);
  uVar3 = FUN_00b0d010(param_1,local_80);
  uVar2 = 0;
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00cab9fc(auStack_68,param_2);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b0c58c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0096bc2c();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00cc7c38();
    if (*(char *)(lVar3 + 0x38) != '\0') {
      FUN_00b0c61c(param_1);
      FUN_00b0ca24(param_1);
      uVar1 = FUN_00e70b04(param_1 + 0x24d0);
      FUN_00b0cb60(param_1,uVar1 & 1,&DAT_03210450);
      FUN_00b0cbbc(param_1);
      *(undefined1 *)(param_1 + 0x24f5) = 1;
      return;
    }
  }
  FUN_00b0cb60(param_1,1,&DAT_03210450);
  return;
}

