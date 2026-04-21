// functions/00b69 — 17 functions
#include "libGameKindred.h"




void FUN_00b69060(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    FUN_00b69074(param_1,*param_2);
    return;
  }
  return;
}




void FUN_00b69074(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  void *__s1;
  char *__s2;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 0xd9) == '\0')) {
    FUN_00b6a698(param_1);
    return;
  }
  bVar2 = *(byte *)(param_2 + 0x48);
  bVar3 = *(byte *)(param_1 + 0xe5e0);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x50);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0xe5e8);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_2 + 0x58);
    __s2 = *(char **)(param_1 + 0xe5f0);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_2 + 0x49);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(param_1 + 0xe5e1);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar5 = (char *)(param_2 + 0x49);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar5 != *__s2) {
            return;
          }
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
    FUN_00b6a54c(param_1);
    return;
  }
  return;
}




void FUN_00b69158(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  void *__s1;
  byte *__s2;
  
  bVar2 = *(byte *)(param_1 + 0xe5e0);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xe5e8) == 0) {
    return;
  }
  bVar3 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xe5e8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0xe5f0);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xe5e1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pbVar5 = (byte *)(param_1 + 0xe5e1);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pbVar5 != *__s2) {
            return;
          }
          pbVar5 = pbVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
    FUN_008fce60((byte *)(param_1 + 0xe5e0),&DAT_0320ffa8);
    FUN_00b6924c(param_1,1);
    return;
  }
  return;
}




void FUN_00b6924c(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x2a28) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x2a30) + uVar3 * 8);
      if ((*(byte *)(lVar1 + 0x5d8) & 1) == 0) {
        lVar1 = lVar1 + 0x5d9;
      }
      else {
        lVar1 = *(long *)(lVar1 + 0x5e8);
      }
      lVar1 = FUN_00a016b4(lVar1);
      if (((lVar1 != 0) && (*(char *)(lVar1 + 0xd8) != '\0')) && (*(char *)(lVar1 + 0xd9) == '\0'))
      goto LAB_00b692c8;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x2a28));
  }
  lVar1 = FUN_009580b8();
  uVar3 = (ulong)(*(int *)(lVar1 + 0x55e0) - 1);
LAB_00b692c8:
  uVar2 = (uint)uVar3;
  if ((-1 < (int)uVar2) && (uVar2 < *(uint *)(param_1 + 0x2a28))) {
    FUN_00ed432c(param_1 + 0x2448,uVar3 & 0xffffffff,param_2 & 1);
  }
  if (uVar2 == *(uint *)(param_1 + 0xe604)) {
    FUN_00b67f8c(param_1,uVar3 & 0xffffffff);
    return;
  }
  return;
}




void FUN_00b69324(long param_1)

{
  FUN_00b69158(param_1 + -200);
  return;
}




void FUN_00b6932c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e4f08;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x55;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0x66;
  param_1[0x55] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar4);
  plVar5 = param_1 + 0x77;
  param_1[0x66] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x9d;
  FUN_00f0e4a8(plVar6);
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbd] = 0;
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x81) != 0.5) || (*(float *)((long)param_1 + 0x40c) != 0.5)) {
    param_1[0x81] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  uVar8 = FUN_00e6ce7c("MAIN_PROFILE_LEVEL_CHEST_READY",0);
  FUN_00f0d75c(plVar5,uVar8);
  uVar7 = *(uint *)((long)param_1 + 0x43c);
  if ((uVar7 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x43c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_down");
  if ((*(float *)(param_1 + 0xa7) != 0.5) || (*(float *)((long)param_1 + 0x53c) != 0.0)) {
    param_1[0xa7] = 0x3f000000;
    FUN_0091ada4(plVar6);
  }
  uVar7 = *(uint *)((long)param_1 + 0x56c);
  if ((uVar7 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x56c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e540(plVar1,PTR_s_build___Chests_tga_02be35c0);
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 0x10;
  FUN_00b695fc(param_1,0);
  return;
}




void FUN_00b695fc(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  lVar1 = param_1 + 0x330;
  *(uint *)(param_1 + 0x32c) =
       *(uint *)(param_1 + 0x32c) & 0xfffffff8 | *(uint *)(param_1 + 0x32c) & 3 | (param_2 & 1) << 2
  ;
  FUN_00f01980(lVar1);
  if ((*(float *)(param_1 + 0x370) != 0.0) || (*(float *)(param_1 + 0x374) != 0.0)) {
    *(undefined8 *)(param_1 + 0x370) = 0;
    FUN_0091ada4(lVar1);
  }
  if ((param_2 & 1) != 0) {
    uVar3 = FUN_00efef08(0,0x41200000,0x3f000000,FUN_009a71a4);
    uVar4 = FUN_00efef08(0,0,0x3f000000,FUN_0091aa80);
    lVar2 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efd208(puVar6);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar6,uVar3,uVar4,0);
    FUN_00efd3bc(puVar6);
    FUN_00f022a0(lVar1,puVar6);
    return;
  }
  return;
}




void FUN_00b69780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e4f08;
  if ((*(byte *)(param_1 + 0xbb) & 1) != 0) {
    operator_delete((void *)param_1[0xbd]);
  }
  param_1[0x9d] = &PTR_FUN_028266f0;
  param_1[0xb4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb7);
  FUN_00f13d08(param_1 + 0x9d);
  FUN_00f0d3a4(param_1 + 0x77);
  FUN_00f01868(param_1 + 0x66);
  FUN_00f01868(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b69830(void *param_1)

{
  FUN_00b69780();
  operator_delete(param_1);
  return;
}




void FUN_00b69854(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x18);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x5f0));
  uVar2 = FUN_00e6ce7c("MAIN_PROFILE_LEVEL",0);
  thunk_FUN_00e7051c(&local_58,uVar2);
  FUN_00e705c8(&local_68,"[LEVEL_NUMBER]");
  FUN_00e71248(&local_58,0,&local_68,&local_48);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x178,&local_58);
  FUN_00b6995c(param_1);
  FUN_00b69a34(param_1);
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




void FUN_00b6995c(long param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x5f8) = 0;
  if ((*(byte *)(param_1 + 0x5d8) & 1) == 0) {
    lVar3 = param_1 + 0x5d9;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x5e8);
  }
  lVar3 = FUN_00a016b4(lVar3);
  if (lVar3 == 0) goto LAB_00b69a04;
  FUN_00caa8c8(local_50,lVar3);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f0e578(param_1 + 0x88,pvVar1);
  if (*(char *)(lVar3 + 0xd9) == '\0') {
    if (*(char *)(lVar3 + 0xd8) != '\0') {
      uVar4 = 1;
      goto LAB_00b699f0;
    }
    *(undefined4 *)(param_1 + 0x5fc) = 0;
  }
  else {
    uVar4 = 2;
LAB_00b699f0:
    *(undefined4 *)(param_1 + 0x5fc) = uVar4;
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00b69a04:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b69a34(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  (**(code **)(*param_3 + 0x48))();
  uVar2 = FUN_0092ead0();
  fVar5 = *(float *)((long)param_3 + 0xcc);
  FUN_00f0e700(param_3 + 0x11);
  fVar3 = param_2 * *(float *)((long)param_3 + 0xdc);
  FUN_00f0d4e0(param_3 + 0x2f);
  fVar4 = 0.0;
  if ((uVar2 & 1) == 0) {
    fVar4 = 10.0;
  }
  fVar3 = fVar4 + fVar5 + fVar3 + param_2 * *(float *)((long)param_3 + 0x1cc);
  if (*(float *)((long)param_3 + 0x1bc) != fVar3) {
    *(float *)((long)param_3 + 0x1bc) = fVar3;
    FUN_0091ada4(param_3 + 0x2f);
  }
  fVar6 = *(float *)((long)param_3 + 0xcc);
  plVar1 = param_3 + 0x77;
  FUN_00f0e700(param_3 + 0x11);
  fVar3 = fVar4 * *(float *)((long)param_3 + 0xdc);
  FUN_00f0d4e0(plVar1);
  fVar7 = *(float *)((long)param_3 + 0x3fc);
  fVar5 = -30.0;
  fVar4 = ((fVar6 - fVar3) - fVar4 * *(float *)((long)param_3 + 0x40c)) + -30.0;
  if (fVar7 != fVar4) {
    *(float *)((long)param_3 + 0x3fc) = fVar4;
    FUN_0091ada4(plVar1);
    fVar7 = *(float *)((long)param_3 + 0x3fc);
  }
  FUN_00f0d4e0(plVar1);
  fVar4 = fVar7 + fVar5 * 0.5 + 10.0;
  if (*(float *)((long)param_3 + 0x52c) != fVar4) {
    *(float *)((long)param_3 + 0x52c) = fVar4;
    FUN_0091ada4(param_3 + 0x9d);
    return;
  }
  return;
}




void FUN_00b69b74(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10c) =
       *(uint *)(param_1 + 0x10c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x10c) & 3 | (~param_2 & 1) << 2;
  *(uint *)(param_1 + 0x32c) =
       *(uint *)(param_1 + 0x32c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x32c) & 3 | (uint)(*(int *)(param_1 + 0x5fc) == 1) << 2;
  FUN_00b695fc();
  FUN_00b69a34(param_1);
  return;
}




void FUN_00b69bc4(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_2 + 0x5f0);
  fVar5 = param_1 + 1.0;
  lVar3 = FUN_009580b8();
  fVar6 = 1.0;
  if ((iVar1 != *(int *)(lVar3 + 0x55e0) + 1) &&
     ((*(int *)(param_2 + 0x5fc) == 0 || (fVar6 = 1.0, *(int *)(param_2 + 0x5fc) == 2)))) {
    fVar6 = param_1 * 0.6 + 0.4;
  }
  if ((*(float *)(param_2 + 0x48) != fVar5) || (*(float *)(param_2 + 0x4c) != fVar5)) {
    *(float *)(param_2 + 0x48) = fVar5;
    *(float *)(param_2 + 0x4c) = fVar5;
    FUN_0091ada4(param_2);
  }
  uVar2 = *(uint *)(param_2 + 0x84);
  if ((uVar2 >> 7 & 0xff) != (int)(fVar6 * 255.0)) {
    *(uint *)(param_2 + 0x84) =
         uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar6 * 255.0) & 0xffU) << 7;
    FUN_0091ada4(param_2);
  }
  uVar2 = *(uint *)(param_2 + 0x32c);
  if (((uVar2 >> 2 & 1) != 0) &&
     (uVar4 = (uint)((1.0 - param_1) * 255.0), (uVar2 >> 7 & 0xff) != uVar4)) {
    *(uint *)(param_2 + 0x32c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar4 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x2a8);
    return;
  }
  return;
}




void FUN_00b69cd8(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  void *__s1;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_80;
  long *local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_70 = (void *)0x0;
  uVar2 = *(uint *)(param_1 + 0x2a28);
  if (uVar2 != 0) {
    bVar3 = *param_2;
    lVar11 = *(long *)(param_1 + 0x2a30);
    uVar10 = 0;
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(param_2 + 8);
    }
    do {
      pvVar9 = *(void **)(lVar11 + uVar10 * 8);
      bVar4 = *(byte *)((long)pvVar9 + 0x5d8);
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)((long)pvVar9 + 0x5e0);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)((long)pvVar9 + 0x5e8);
        if ((bVar4 & 1) == 0) {
          __s1 = (void *)((long)pvVar9 + 0x5d9);
        }
        __s2 = param_2 + 1;
        if ((bVar3 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if ((bVar4 & 1) == 0) {
          if (__n == 0) goto LAB_00b69ec8;
          uVar8 = 0;
          while (*(byte *)((long)pvVar9 + uVar8 + 0x5d9) == __s2[uVar8]) {
            uVar8 = uVar8 + 1;
            if (bVar4 >> 1 == uVar8) {
              local_70 = pvVar9;
              if (pvVar9 != (void *)0x0) goto LAB_00b69ec8;
              goto LAB_00b69dcc;
            }
          }
        }
        else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_00b69ec8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
LAB_00b69dcc:
  pvVar9 = operator_new(0x600);
  FUN_00b6932c();
  local_70 = pvVar9;
  FUN_00ed026c(param_1 + 0x2448,pvVar9,1);
  FUN_00b69f10(param_1 + 0x2a28,&local_70);
  *(undefined4 *)(param_1 + 0x299c) = *(undefined4 *)(param_1 + 0x2a28);
  plVar7 = operator_new(0xf0);
  FUN_00f0e4a8();
  local_78 = plVar7;
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f13f08(0x40800000,0x41f80000,plVar7);
  uVar2 = *(uint *)((long)plVar7 + 0x84);
  if ((uVar2 & 0x7f80) != 0x5900) {
    *(uint *)((long)plVar7 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
    FUN_0091ada4(plVar7);
    plVar7 = local_78;
  }
  local_80 = 0x3f8000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_80);
  FUN_00f023ec(param_1 + 0x3628,plVar7,1);
  FUN_009d6990(param_1 + 0x2a38,&local_78);
  pvVar9 = local_70;
  if (local_70 != (void *)0x0) {
LAB_00b69ec8:
    local_70 = pvVar9;
    FUN_00b69854(local_70,param_2);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b69f10(uint *param_1,undefined8 *param_2)

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
    FUN_00b6a74c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b69f98(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined **local_130;
  undefined1 auStack_128 [40];
  long local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0 [16];
  void *local_c0;
  undefined8 local_b0;
  undefined4 local_9c;
  undefined4 local_88;
  undefined1 local_83;
  ulong local_80;
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  undefined4 local_58;
  undefined8 local_54;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x51a4) >> 2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xe604);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x2a28))) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x2a30) + (ulong)uVar1 * 8);
      if ((*(byte *)(lVar6 + 0x5d8) & 1) == 0) {
        lVar6 = lVar6 + 0x5d9;
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x5e8);
      }
      lVar6 = FUN_00a016b4(lVar6);
      if ((((lVar6 != 0) && (*(char *)(lVar6 + 0xd8) != '\0')) && (*(char *)(lVar6 + 0xd9) == '\0'))
         && (uVar3 = FUN_0093bea8("firstLevelChest"), (uVar3 & 1) == 0)) {
        FUN_00b26098(&local_130);
        local_100 = param_1 + 0x2a48;
        local_88 = 2;
        FUN_008fa54c(&local_80,"firstLevelChest");
        FUN_008fce60(local_d0,&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_6f,local_70));
        }
        local_83 = 1;
        local_9c = 0x442f0000;
        local_b0 = 0x43160000;
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_CHEST_UNLOCKED_TOOLTIP_TITLE",0);
        thunk_FUN_00e7051c(&local_80,uVar4);
        FUN_008fcdb8(&local_70,&DAT_0320ffa8);
        local_58 = 0;
        local_54 = 0x41a00000;
        FUN_009c82b4(auStack_128,&local_80);
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
          local_80 = 0;
          local_78 = (void *)0x0;
        }
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_CHEST_UNLOCKED_TOOLTIP",0);
        thunk_FUN_00e7051c(&local_80,uVar4);
        FUN_008fcdb8(&local_70,&DAT_0320ffa8);
        local_58 = 1;
        local_54 = 0x41a00000;
        FUN_009c82b4(auStack_128,&local_80);
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
          local_80 = 0;
          local_78 = (void *)0x0;
        }
        uVar4 = FUN_009b8d90();
        FUN_008fa54c(&local_80,"firstLevelChest");
        FUN_009badc0(uVar4,&local_80,&local_130);
        if ((local_80 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_6f,local_70));
        }
        local_130 = &PTR_FUN_027de7f0;
        if ((local_d0[0] & 1) != 0) {
          operator_delete(local_c0);
        }
        if (local_d8 != (void *)0x0) {
          operator_delete__(local_d8);
          local_e0 = 0;
          local_d8 = (void *)0x0;
        }
        FUN_009c8464(auStack_128,1);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

