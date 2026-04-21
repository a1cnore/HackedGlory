// functions/10018 — 354 functions
#include "GameKindred.h"




undefined8 FUN_100180320(long param_1,byte *param_2,string *param_3,undefined4 *param_4)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  void *pvVar13;
  byte *pbVar14;
  ulong uVar15;
  void *local_c0 [2];
  char local_a9;
  void *local_a8 [2];
  char local_91;
  undefined1 auStack_90 [48];
  
  iVar7 = *(int *)(param_1 + 0x1ad8);
  if (0 < iVar7) {
    uVar15 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x1ae0) + uVar15 * 8);
      if (lVar10 != 0) {
        bVar5 = *(byte *)(lVar10 + 0x24bf);
        uVar12 = (ulong)bVar5;
        sVar1 = *(size_t *)(lVar10 + 0x24b0);
        if (-1 < (char)bVar5) {
          sVar1 = uVar12;
        }
        bVar4 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar4) {
          sVar2 = (ulong)bVar4;
        }
        if (sVar1 == sVar2) {
          pvVar13 = *(void **)(lVar10 + 0x24a8);
          puVar3 = pvVar13;
          if (-1 < (char)bVar5) {
            puVar3 = (undefined8 *)(lVar10 + 0x24a8);
          }
          pbVar14 = *(byte **)param_2;
          if (-1 < (char)bVar4) {
            pbVar14 = param_2;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar14,sVar1), iVar6 == 0))
            goto LAB_100180410;
          }
          else if (sVar1 == 0) {
LAB_100180410:
            FUN_1000fd6fc(local_a8);
            iVar7 = FUN_1001b7cfc(*(undefined8 *)(*(long *)(param_1 + 0x1ae0) + uVar15 * 8),local_a8
                                 );
            if (iVar7 != 0) {
              uVar9 = FUN_1000e7ce4(auStack_90);
              FUN_10001549c(local_c0,uVar9);
              std::string::operator=(param_3,(string *)local_c0);
              if (local_a9 < '\0') {
                operator_delete(local_c0[0]);
              }
              uVar8 = FUN_1001b7dd4(*(undefined8 *)
                                     (*(long *)(param_1 + 0x1ae0) + (uVar15 & 0xffffffff) * 8));
              *param_4 = uVar8;
              if (local_91 < '\0') {
                operator_delete(local_a8[0]);
              }
              return 1;
            }
            if (local_91 < '\0') {
              operator_delete(local_a8[0]);
            }
            iVar7 = *(int *)(param_1 + 0x1ad8);
          }
          else if ((uint)*pbVar14 == ((uint)pvVar13 & 0xff)) {
            pbVar11 = (byte *)(lVar10 + 0x24a9);
            do {
              uVar12 = uVar12 - 1;
              pbVar14 = pbVar14 + 1;
              if (uVar12 == 0) goto LAB_100180410;
              bVar5 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar5 == *pbVar14);
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while ((long)uVar15 < (long)iVar7);
  }
  return 0;
}




ulong FUN_1001804d0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  void *local_28;
  
  local_30 = 0;
  local_28 = (void *)0x0;
  FUN_10017f9a4(param_1,&local_30);
  uVar1 = local_30 & 0xffffffff;
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return uVar1;
}




bool FUN_100180510(long param_1)

{
  if ((*(float *)(param_1 + 0x1aec) <= 0.01) &&
     ((*(long *)(param_1 + 0x1af0) != -1 || (*(long *)(param_1 + 0x1b08) == 0)))) {
    return 0 < *(int *)(param_1 + 0x1b00);
  }
  return true;
}




void thunk_FUN_100180554(long param_1)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  
  lVar2 = param_1 + 0x15e8;
  FUN_100642324(lVar2);
  uVar6 = *(uint *)(param_1 + 0x166c);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x166c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(lVar2);
    uVar6 = *(uint *)(param_1 + 0x166c);
  }
  *(uint *)(param_1 + 0x166c) = uVar6 | 4;
  uVar4 = FUN_100640840(0x3dcccccd,0x3e4ccccd,FUN_10001f4ac);
  FUN_100642b14(lVar2,uVar4);
  uVar4 = FUN_100640840(0,0x3e4ccccd,FUN_10001f4ac);
  FUN_100642b14(lVar2,uVar4);
  lVar3 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
  if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
  *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  FUN_100642b14(lVar2,puVar1);
  FUN_1001c4648(0,param_1 + 0x16d8);
  return;
}




void FUN_100180554(long param_1)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  
  lVar2 = param_1 + 0x15e8;
  FUN_100642324(lVar2);
  uVar6 = *(uint *)(param_1 + 0x166c);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x166c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(lVar2);
    uVar6 = *(uint *)(param_1 + 0x166c);
  }
  *(uint *)(param_1 + 0x166c) = uVar6 | 4;
  uVar4 = FUN_100640840(0x3dcccccd,0x3e4ccccd,FUN_10001f4ac);
  FUN_100642b14(lVar2,uVar4);
  uVar4 = FUN_100640840(0,0x3e4ccccd,FUN_10001f4ac);
  FUN_100642b14(lVar2,uVar4);
  lVar3 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
  if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
  *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  FUN_100642b14(lVar2,puVar1);
  FUN_1001c4648(0,param_1 + 0x16d8);
  return;
}




void FUN_100180698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145e6d0;
  param_1[0x3dc] = &PTR_FUN_10145e8a8;
  thunk_FUN_100651068(param_1 + 0x4fb);
  param_1[0x4dd] = &PTR_FUN_1014a7108;
  param_1[0x4f4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f7);
  FUN_10064e2bc(param_1 + 0x4dd);
  param_1[0x4bf] = &PTR_FUN_1014a7108;
  param_1[0x4d6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d9);
  FUN_10064e2bc(param_1 + 0x4bf);
  FUN_10064221c(param_1 + 0x4ae);
  FUN_10064221c(param_1 + 0x49d);
  FUN_1001b7044(param_1);
  return;
}




void FUN_100180750(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145e6d0;
  param_1[0x3dc] = &PTR_FUN_10145e8a8;
  thunk_FUN_100651068(param_1 + 0x4fb);
  param_1[0x4dd] = &PTR_FUN_1014a7108;
  param_1[0x4f4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f7);
  FUN_10064e2bc(param_1 + 0x4dd);
  param_1[0x4bf] = &PTR_FUN_1014a7108;
  param_1[0x4d6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d9);
  FUN_10064e2bc(param_1 + 0x4bf);
  FUN_10064221c(param_1 + 0x4ae);
  FUN_10064221c(param_1 + 0x49d);
  pvVar1 = (void *)FUN_1001b7044(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10018080c(undefined8 *param_1)

{
  param_1[-0x3dc] = &PTR_FUN_10145e6d0;
  *param_1 = &PTR_FUN_10145e8a8;
  thunk_FUN_100651068(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_1014a7108;
  param_1[0x118] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11b);
  FUN_10064e2bc(param_1 + 0x101);
  param_1[0xe3] = &PTR_FUN_1014a7108;
  param_1[0xfa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfd);
  FUN_10064e2bc(param_1 + 0xe3);
  FUN_10064221c(param_1 + 0xd2);
  FUN_10064221c(param_1 + 0xc1);
  FUN_1001b7044(param_1 + -0x3dc);
  return;
}




void FUN_1001808b8(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x3dc] = &PTR_FUN_10145e6d0;
  *param_1 = &PTR_FUN_10145e8a8;
  thunk_FUN_100651068(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_1014a7108;
  param_1[0x118] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11b);
  FUN_10064e2bc(param_1 + 0x101);
  param_1[0xe3] = &PTR_FUN_1014a7108;
  param_1[0xfa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfd);
  FUN_10064e2bc(param_1 + 0xe3);
  FUN_10064221c(param_1 + 0xd2);
  FUN_10064221c(param_1 + 0xc1);
  pvVar1 = (void *)FUN_1001b7044(param_1 + -0x3dc);
  operator_delete(pvVar1);
  return;
}




void FUN_100180968(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145ea78;
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  param_1[0x40] = &PTR_FUN_1014a7108;
  param_1[0x57] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5a);
  FUN_10064e2bc(param_1 + 0x40);
  FUN_10064221c(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100180a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ecf0;
  param_1[-0x17] = &PTR_FUN_10145eb78;
  if ((void *)param_1[0x11] != (void *)0x0) {
    operator_delete__((void *)param_1[0x11]);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  FUN_100651068(param_1 + -0x17);
  return;
}




void FUN_100180a50(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145eb78;
  param_1[0x17] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x28] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28]);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
  }
  pvVar1 = (void *)FUN_100651068(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100180a98(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145ecf0;
  param_1[-0x17] = &PTR_FUN_10145eb78;
  if ((void *)param_1[0x11] != (void *)0x0) {
    operator_delete__((void *)param_1[0x11]);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  pvVar1 = (void *)FUN_100651068(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




void FUN_100180ae0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_100180b5c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *local_70;
  undefined4 local_68 [2];
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_thunk_FUN_1001811e4_10145ed38;
  puVar2 = puVar2 + 0x11;
  FUN_1006421a8(puVar2);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  lVar3 = 0x110;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar3);
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x6b0);
  param_1[0xd7] = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  lVar3 = 0x110;
  do {
    FUN_100642bd8(puVar2,(long)param_1 + lVar3,1);
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x6b0);
  lVar3 = 0;
  do {
    lVar1 = (long)param_1 + lVar3 + 0x110;
    FUN_100652cac(lVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_sparkle");
    local_68[0] = 0xffbef1ff;
    FUN_100652dd4(lVar1,local_68,2);
    local_70 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar3 + 0x110) + 0x28))(lVar1,&local_70);
    *(uint *)((long)param_1 + lVar3 + 0x194) = *(uint *)((long)param_1 + lVar3 + 0x194) & 0xffffffbf
    ;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x5a0);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  lVar3 = 0x110;
  do {
    FUN_100642324((long)param_1 + lVar3);
    *(undefined4 *)((long)param_1 + 0x6bc) = 0;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x6b0);
  return param_1;
}




void FUN_100180cc8(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = 4;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb | uVar2;
  if ((param_2 & 1) == 0) {
    lVar3 = 0x110;
    do {
      FUN_100642324(param_1 + lVar3);
      *(undefined4 *)(param_1 + 0x6bc) = 0;
      lVar3 = lVar3 + 0xf0;
    } while (lVar3 != 0x6b0);
  }
  else {
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x6b0) = uVar1;
    lVar3 = 0x110;
    do {
      FUN_100652dd4(param_1 + lVar3,param_3 + 1,2);
      FUN_100180d6c(param_1);
      lVar3 = lVar3 + 0xf0;
    } while (lVar3 != 0x6b0);
  }
  return;
}




long * thunk_FUN_100180b5c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puStack_70;
  undefined4 auStack_68 [2];
  
  puVar2 = (undefined8 *)FUN_1006421a8();
  *puVar2 = &PTR_thunk_FUN_1001811e4_10145ed38;
  puVar2 = puVar2 + 0x11;
  FUN_1006421a8(puVar2);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  lVar3 = 0x110;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar3);
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x6b0);
  param_1[0xd7] = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  lVar3 = 0x110;
  do {
    FUN_100642bd8(puVar2,(long)param_1 + lVar3,1);
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x6b0);
  lVar3 = 0;
  do {
    lVar1 = (long)param_1 + lVar3 + 0x110;
    FUN_100652cac(lVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_sparkle");
    auStack_68[0] = 0xffbef1ff;
    FUN_100652dd4(lVar1,auStack_68,2);
    puStack_70 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)((long)param_1 + lVar3 + 0x110) + 0x28))(lVar1,&puStack_70);
    *(uint *)((long)param_1 + lVar3 + 0x194) = *(uint *)((long)param_1 + lVar3 + 0x194) & 0xffffffbf
    ;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x5a0);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  lVar3 = 0x110;
  do {
    FUN_100642324((long)param_1 + lVar3);
    *(undefined4 *)((long)param_1 + 0x6bc) = 0;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0x6b0);
  return param_1;
}




void FUN_100180d6c(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar2 = _rand();
  iVar3 = _rand();
  iVar4 = _rand();
  uVar5 = _rand();
  uVar9 = *(uint *)(param_1 + 0x6bc);
  if (uVar9 < 6) {
    iVar6 = _rand();
    iVar6 = iVar6 % 4;
    if (iVar6 == 2) {
      fVar14 = *(float *)(param_1 + 0x6b0);
      iVar6 = _rand();
      fVar14 = fVar14 * 4.656613e-10 * (float)iVar6;
      fVar16 = 0.0;
    }
    else if (iVar6 == 1) {
      fVar14 = *(float *)(param_1 + 0x6b0);
      fVar16 = *(float *)(param_1 + 0x6b4);
      iVar6 = _rand();
      fVar16 = fVar16 * 4.656613e-10 * (float)iVar6;
    }
    else if (iVar6 == 0) {
      fVar14 = *(float *)(param_1 + 0x6b4);
      iVar6 = _rand();
      fVar16 = fVar14 * 4.656613e-10 * (float)iVar6;
      fVar14 = 0.0;
    }
    else {
      fVar14 = *(float *)(param_1 + 0x6b0);
      iVar6 = _rand();
      fVar14 = fVar14 * 4.656613e-10 * (float)iVar6;
      fVar16 = *(float *)(param_1 + 0x6b4);
    }
    uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
    lVar11 = param_1 + uVar10 * 0xf0;
    uVar9 = *(uint *)(lVar11 + 0x194);
    if ((uVar9 & 0x7f80) != 0) {
      *(uint *)(lVar11 + 0x194) = uVar9 & 0xffff807f;
      FUN_1000200a0(param_1 + uVar10 * 0xf0 + 0x110);
      uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
    }
    fVar15 = (float)iVar2 * 1.3969839e-10 + 0.5;
    lVar11 = param_1 + uVar10 * 0xf0;
    bVar1 = false;
    if ((*(float *)(lVar11 + 0x150) == fVar14) &&
       (bVar1 = false, !NAN(*(float *)(lVar11 + 0x154)) && !NAN(fVar16))) {
      bVar1 = *(float *)(lVar11 + 0x154) == fVar16;
    }
    if (!bVar1) {
      *(float *)(lVar11 + 0x150) = fVar14;
      *(float *)(lVar11 + 0x154) = fVar16;
      FUN_1000200a0(param_1 + uVar10 * 0xf0 + 0x110);
      uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
    }
    lVar11 = param_1 + uVar10 * 0xf0;
    bVar1 = false;
    if ((*(float *)(lVar11 + 0x15c) == 0.0) && (bVar1 = false, !NAN(*(float *)(lVar11 + 0x158)))) {
      bVar1 = *(float *)(lVar11 + 0x158) == 0.0;
    }
    if (!bVar1) {
      *(undefined8 *)(lVar11 + 0x158) = 0;
      FUN_1000200a0(param_1 + uVar10 * 0xf0 + 0x110);
      uVar10 = (ulong)*(uint *)(param_1 + 0x6bc);
    }
    fVar14 = (float)iVar3 * 3.4924597e-10 + 3.5;
    lVar11 = param_1 + uVar10 * 0xf0;
    *(byte *)(lVar11 + 0x1e8) =
         (byte)iVar4 & 1 | (byte)((uVar5 & 1) << 1) | *(byte *)(lVar11 + 0x1e8) & 0xfc;
    uVar7 = FUN_100640840(0x3f800000,fVar15 * 0.67,FUN_10001f218);
    FUN_100640840(0,fVar15,FUN_10008f084);
    lVar11 = DAT_101dbd2f8;
    uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar12 = (ushort *)0x0;
    }
    else {
      puVar12 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar12;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
      *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
      FUN_10063f564(puVar12);
      *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
    }
    FUN_10063f614(puVar12,uVar7);
    FUN_100640db8(fVar14,fVar14,fVar15 * 1.6700001,FUN_10001f218);
    lVar11 = DAT_101dbd2f8;
    uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar13;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
      *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
      FUN_10063f1bc(puVar13);
      *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
    }
    FUN_10063f2a4(puVar13,puVar12);
    lVar11 = DAT_101dbd2f8;
    uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    puVar12 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar12;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar11 + 0x20014) = *(int *)(lVar11 + 0x20014) + 1;
    FUN_10063ee9c(puVar12);
    puVar12[0xc] = 0;
    puVar12[0xd] = 0;
    puVar12[0xe] = 0;
    puVar12[0xf] = 0;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    puVar12[0x13] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    *(undefined ***)puVar12 = &PTR_thunk_FUN_10063eeb4_10144bff8;
    *(int *)(lVar11 + 0x20020) = *(int *)(lVar11 + 0x20020) + 1;
    *(code **)(puVar12 + 8) = FUN_1001811c0;
    *(long *)(puVar12 + 0x10) = param_1;
    FUN_100642324(param_1 + 0x110 + (ulong)*(uint *)(param_1 + 0x6bc) * 0xf0);
    FUN_100642b7c(param_1 + 0x110 + (ulong)*(uint *)(param_1 + 0x6bc) * 0xf0,puVar13);
    uVar9 = *(uint *)(param_1 + 0x6bc);
  }
  *(uint *)(param_1 + 0x6bc) = (uVar9 + 1) % 6;
  return;
}




void FUN_1001811c0(long param_1)

{
  if (param_1 != 0) {
    FUN_100180d6c();
    return;
  }
  return;
}




void thunk_FUN_1001811e4(void)

{
  FUN_1001811e4();
  return;
}




void FUN_1001811d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001811e4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001811e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_1001811e4_10145ed38;
  lVar2 = 0x5a0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x20);
    *puVar1 = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0xd8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0xf0);
    FUN_10064e2bc(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  FUN_10064221c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_100181258(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x828),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"circle_button_fill");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




long * FUN_100181304(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar8 = (undefined8 *)FUN_1001b4648();
  *puVar8 = &PTR_thunk_FUN_10003bd40_10145ee38;
  puVar8 = puVar8 + 0x4d;
  thunk_FUN_1001bd4e0(puVar8,param_2);
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  param_1[0x127] = 0;
  plVar1 = param_1 + 0x128;
  thunk_FUN_1001bdbf8(plVar1,param_2);
  plVar3 = param_1 + 0x233;
  FUN_1006421a8(plVar3);
  param_1[0x233] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0x244;
  thunk_FUN_100651ebc(plVar4);
  plVar5 = param_1 + 0x26e;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x28c;
  thunk_FUN_100652c08(plVar6);
  FUN_1004e313c(param_1 + 0x2aa);
  *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1564) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ad) = 0xff000000;
  *(undefined4 *)((long)param_1 + 0x156c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ae) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1574) = 0xffffffff;
  param_1[0x2af] = 0x300000000;
  *(undefined8 *)((long)param_1 + 0x158c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1584) = 0;
  *(undefined8 *)((long)param_1 + 0x159c) = 0x3f8000003f4ccccd;
  *(undefined8 *)((long)param_1 + 0x1594) = 0x3f4ccccd3f800000;
  *(undefined8 *)((long)param_1 + 0x15a4) = 0x42b800003f800000;
  *(undefined4 *)((long)param_1 + 0x15ac) = 0;
  *(undefined1 *)(param_1 + 0x2b6) = 0;
  *(undefined1 *)((long)param_1 + 0x15b2) = 1;
  plVar2 = param_1 + 0x34;
  *(char *)((long)param_1 + 0x15b1) = (char)param_2;
  FUN_100642bd8(plVar2,puVar8,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,param_1 + 0xe3,1);
  FUN_100642bd8(plVar2,param_1 + 0x109,1);
  *(uint *)((long)param_1 + 0x121c) = *(uint *)((long)param_1 + 0x121c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x9c4) = *(uint *)((long)param_1 + 0x9c4) & 0xffffffbf;
  puVar7 = PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if ((int)param_2 == 0) {
    puVar7 = PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  if ((param_2 & 1) == 0) {
    FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_starburst");
    if ((*(float *)(param_1 + 0x295) != 3.0) || (*(float *)((long)param_1 + 0x14ac) != 3.0)) {
      lVar9 = NEON_fmov(0x40400000,4);
      param_1[0x295] = lVar9;
      FUN_1000200a0(plVar6);
    }
    if ((*(float *)(param_1 + 0x296) != 0.48) || (*(float *)((long)param_1 + 0x14b4) != 0.48)) {
      param_1[0x296] = 0x3ef5c28f3ef5c28f;
      FUN_1000200a0(plVar6);
    }
    FUN_100651f8c(plVar4,puVar7);
  }
  local_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_a0);
  local_a0 = (code *)&DAT_3f0000003f000000;
  FUN_1001bd8b4(puVar8,&local_a0);
  if ((*(float *)(param_1 + 0x132) != 0.5) || (*(float *)((long)param_1 + 0x994) != 0.5)) {
    param_1[0x132] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_1001be4f4(*(undefined4 *)((long)param_1 + 0x15a4),plVar1,(long)param_1 + 0x1574);
  *(uint *)((long)param_1 + 0x9c4) = *(uint *)((long)param_1 + 0x9c4) & 0xfffffffb;
  FUN_100652ca4(param_1 + 0x109,puVar7);
  FUN_100652ca4(plVar5,puVar7);
  FUN_1001bdbb4((int)param_1[0x2b3],puVar8);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  local_78 = DAT_101d91884;
  local_a0 = FUN_1001816c4;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&local_a0);
  FUN_1001b4c68(param_1,&DAT_101e3d410);
  (**(code **)(*param_1 + 0x168))(param_1);
  return param_1;
}




void FUN_1001816c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001816cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))();
  return;
}




long * thunk_FUN_100181304(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar8 = (undefined8 *)FUN_1001b4648();
  *puVar8 = &PTR_thunk_FUN_10003bd40_10145ee38;
  puVar8 = puVar8 + 0x4d;
  thunk_FUN_1001bd4e0(puVar8,param_2);
  thunk_FUN_100650e64();
  thunk_FUN_100652c08();
  param_1[0x127] = 0;
  plVar1 = param_1 + 0x128;
  thunk_FUN_1001bdbf8(plVar1,param_2);
  plVar3 = param_1 + 0x233;
  FUN_1006421a8(plVar3);
  param_1[0x233] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0x244;
  thunk_FUN_100651ebc(plVar4);
  plVar5 = param_1 + 0x26e;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x28c;
  thunk_FUN_100652c08(plVar6);
  FUN_1004e313c(param_1 + 0x2aa);
  *(undefined4 *)(param_1 + 0x2ac) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1564) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ad) = 0xff000000;
  *(undefined4 *)((long)param_1 + 0x156c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2ae) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1574) = 0xffffffff;
  param_1[0x2af] = 0x300000000;
  *(undefined8 *)((long)param_1 + 0x158c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1584) = 0;
  *(undefined8 *)((long)param_1 + 0x159c) = 0x3f8000003f4ccccd;
  *(undefined8 *)((long)param_1 + 0x1594) = 0x3f4ccccd3f800000;
  *(undefined8 *)((long)param_1 + 0x15a4) = 0x42b800003f800000;
  *(undefined4 *)((long)param_1 + 0x15ac) = 0;
  *(undefined1 *)(param_1 + 0x2b6) = 0;
  *(undefined1 *)((long)param_1 + 0x15b2) = 1;
  plVar2 = param_1 + 0x34;
  *(char *)((long)param_1 + 0x15b1) = (char)param_2;
  FUN_100642bd8(plVar2,puVar8,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,param_1 + 0xe3,1);
  FUN_100642bd8(plVar2,param_1 + 0x109,1);
  *(uint *)((long)param_1 + 0x121c) = *(uint *)((long)param_1 + 0x121c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x9c4) = *(uint *)((long)param_1 + 0x9c4) & 0xffffffbf;
  puVar7 = PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if ((int)param_2 == 0) {
    puVar7 = PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  if ((param_2 & 1) == 0) {
    FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_starburst");
    if ((*(float *)(param_1 + 0x295) != 3.0) || (*(float *)((long)param_1 + 0x14ac) != 3.0)) {
      lVar9 = NEON_fmov(0x40400000,4);
      param_1[0x295] = lVar9;
      FUN_1000200a0(plVar6);
    }
    if ((*(float *)(param_1 + 0x296) != 0.48) || (*(float *)((long)param_1 + 0x14b4) != 0.48)) {
      param_1[0x296] = 0x3ef5c28f3ef5c28f;
      FUN_1000200a0(plVar6);
    }
    FUN_100651f8c(plVar4,puVar7);
  }
  pcStack_a0 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&pcStack_a0);
  pcStack_a0 = (code *)&DAT_3f0000003f000000;
  FUN_1001bd8b4(puVar8,&pcStack_a0);
  if ((*(float *)(param_1 + 0x132) != 0.5) || (*(float *)((long)param_1 + 0x994) != 0.5)) {
    param_1[0x132] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_1001be4f4(*(undefined4 *)((long)param_1 + 0x15a4),plVar1,(long)param_1 + 0x1574);
  *(uint *)((long)param_1 + 0x9c4) = *(uint *)((long)param_1 + 0x9c4) & 0xfffffffb;
  FUN_100652ca4(param_1 + 0x109,puVar7);
  FUN_100652ca4(plVar5,puVar7);
  FUN_1001bdbb4((int)param_1[0x2b3],puVar8);
  FUN_10064e5b8(param_1,&DAT_101dbd510);
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_1001816c4;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_a0);
  FUN_1001b4c68(param_1,&DAT_101e3d410);
  (**(code **)(*param_1 + 0x168))(param_1);
  return param_1;
}




void FUN_1001816d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 *param_7,long *param_8,
                  undefined *param_9)

{
  undefined **ppuVar1;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  
  if (param_9 == (undefined *)0x0) {
    iVar2 = FUN_100126c88();
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    if (iVar2 == 0) {
      ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
    }
    param_9 = *ppuVar1;
  }
  FUN_100651038(param_4 + 0xe3,param_9);
  pcVar3 = "capsule_button_check";
  switch(param_5) {
  case 0:
    FUN_1006513c0(param_4 + 0xe3,param_6);
    *(uint *)((long)param_4 + 0x79c) = *(uint *)((long)param_4 + 0x79c) | 4;
    puVar4 = (uint *)((long)param_4 + 0x8cc);
    goto LAB_1001817dc;
  case 1:
    break;
  case 2:
    pcVar3 = "capsule_button_x";
    break;
  case 3:
    pcVar3 = "capsule_button_plus";
    break;
  case 4:
    pcVar3 = "capsule_button_star";
    break;
  default:
    goto switchD_100181774_caseD_5;
  case 6:
    pcVar3 = "arrow_right";
  }
  FUN_100652cdc(param_4 + 0x109,pcVar3);
switchD_100181774_caseD_5:
  *(uint *)((long)param_4 + 0x8cc) = *(uint *)((long)param_4 + 0x8cc) | 4;
  puVar4 = (uint *)((long)param_4 + 0x79c);
LAB_1001817dc:
  *puVar4 = *puVar4 & 0xfffffffb;
  *(undefined4 *)(param_4 + 0x2b0) = 0;
  (**(code **)(*param_4 + 0x180))(param_4);
  FUN_100651460(param_4 + 0xe3,param_7);
  FUN_100652dd4(param_4 + 0x109,param_7,2);
  *(undefined4 *)(param_4 + 0x2af) = param_5;
  FUN_1000153b4(param_4 + 0x2aa,param_6);
  *(undefined4 *)(param_4 + 0x2ac) = *param_7;
  *(undefined4 *)((long)param_4 + 0x1584) = param_1;
  *(undefined4 *)(param_4 + 0x2b1) = param_2;
  *(undefined4 *)((long)param_4 + 0x158c) = param_3;
  param_4[0x127] = *param_8;
  *(undefined1 *)(param_4 + 0x2b6) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100181878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x180))(param_4);
  return;
}




void FUN_10018187c(long *param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  
  *(int *)(param_1 + 0x2b0) = param_2;
  if (param_2 == 0) goto LAB_100181a1c;
  if (param_2 == 2) {
    FUN_100652cdc(param_1 + 0x26e,"button_decorative_fill_upgrade");
    FUN_100652444(param_1 + 0x244,"button_green_top_left",0,0,0,"button_green_top_middle",0,0,0,
                  "button_green_middle_left",0,0);
    puVar1 = &DAT_101e3d3f4;
LAB_1001819d4:
    *(undefined4 *)((long)param_1 + 0x1574) = *puVar1;
    *(undefined4 *)((long)param_1 + 0x15a4) = 0x3f800000;
    FUN_1001be4f4(0x3f800000,param_1 + 0x128,(long)param_1 + 0x1574);
  }
  else if (param_2 == 1) {
    FUN_100652cdc(param_1 + 0x26e,"button_decorative_fill_purchase");
    FUN_100651f94(param_1 + 0x244,"button_lively_top_left",0,0,0,"button_lively_top_middle",0,0,0,
                  "button_lively_top_left",1,"button_lively_middle_left",0,0,0,
                  "button_lively_middle_left",1,"button_lively_bottom_left",0,
                  "button_lively_bottom_middle",0,"button_lively_bottom_left",1);
    puVar1 = &DAT_101e3d3f0;
    goto LAB_1001819d4;
  }
  fVar2 = *(float *)(param_1 + 0x2b5);
  if (fVar2 <= 50.0) {
    fVar2 = 50.0;
  }
  *(float *)(param_1 + 0x2b5) = fVar2;
  (**(code **)(*param_1 + 0x180))(param_1);
LAB_100181a1c:
                    /* WARNING: Could not recover jumptable at 0x000100181a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_100181a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001816d4(param_1,5,&DAT_101d91650,param_3,&DAT_101dc1cb8,0);
  FUN_100652cdc(param_1 + 0x848,param_2);
  return;
}




undefined8 FUN_100181a80(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




undefined8 FUN_100181aa8(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




undefined8 FUN_100181ad0(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




void FUN_100181af8(long *param_1)

{
  FUN_1006513c0(param_1 + 0xe3);
                    /* WARNING: Could not recover jumptable at 0x000100181b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_100181b28(long *param_1,undefined4 param_2)

{
  *(undefined4 *)((long)param_1 + 0x157c) = param_2;
  FUN_100651700(param_1 + 0xe3);
                    /* WARNING: Could not recover jumptable at 0x000100181b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_100181b5c(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x127) = param_1;
  *(undefined4 *)((long)param_3 + 0x93c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100181b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x180))();
  return;
}




void FUN_100181b70(undefined4 param_1,long *param_2)

{
  *(undefined4 *)((long)param_2 + 0x15ac) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100181b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x180))();
  return;
}




void FUN_100181b80(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) & 0xfffffffb | uVar1;
  return;
}




void FUN_100181ba0(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x2ae) = *param_3;
  *(undefined4 *)(param_2 + 0x2b4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100181bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_100181bb8(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x2ac) = *param_3;
  *(undefined4 *)(param_2 + 0x2b2) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100181bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_100181bd0(undefined4 param_1,long param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x1564) = *param_3;
  *(undefined4 *)(param_2 + 0x1594) = param_1;
  return;
}




void FUN_100181be0(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x2ad) = *param_3;
  *(undefined4 *)(param_2 + 0x2b3) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100181bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_100181bf8(undefined4 param_1,long param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x156c) = *param_3;
  *(undefined4 *)(param_2 + 0x159c) = param_1;
  return;
}




void FUN_100181c08(undefined4 param_1,long *param_2)

{
  *(undefined4 *)((long)param_2 + 0x1584) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100181c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x180))();
  return;
}




void FUN_100181c18(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  *(undefined4 *)((long)param_4 + 0x1584) = param_1;
  *(undefined4 *)(param_4 + 0x2b1) = param_2;
  *(undefined4 *)((long)param_4 + 0x158c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100181c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x180))();
  return;
}




void FUN_100181c30(long *param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_100651038(param_1 + 0xe3);
                    /* WARNING: Could not recover jumptable at 0x000100181c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x180))(param_1);
    return;
  }
  return;
}




void FUN_100181c68(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x2b5) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100181c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x180))();
  return;
}




void FUN_100181c78(float param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_2 + 0x14a8) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x14ac)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0x14ac) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0x14a8) = param_1;
    *(float *)(param_2 + 0x14ac) = param_1;
    FUN_1000200a0(param_2 + 0x1460);
    return;
  }
  return;
}




void FUN_100181ca8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  
  lVar1 = param_1 + 0x940;
  FUN_100642324(lVar1);
  uVar5 = *(uint *)(param_1 + 0x9c4) | 4;
  *(uint *)(param_1 + 0x9c4) = uVar5;
  if ((*(float *)(param_1 + 0x988) != 1.2) || (*(float *)(param_1 + 0x98c) != 1.2)) {
    *(undefined8 *)(param_1 + 0x988) = 0x3f99999a3f99999a;
    FUN_1000200a0(lVar1);
    uVar5 = *(uint *)(param_1 + 0x9c4);
  }
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x9c4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_1000200a0(lVar1);
  }
  uVar3 = FUN_100640840(0,0x3f000000,FUN_10001f160);
  FUN_100640db8(0x40000000,0x40000000,0x3f000000,FUN_10001f160);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f1bc(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar6,uVar3);
  FUN_100642b14(lVar1,puVar6);
  uVar3 = FUN_100047300();
  FUN_100642b14(lVar1,uVar3);
  return;
}




void FUN_100181e24(long param_1)

{
  *(undefined8 *)(param_1 + 0x1588) = 0;
  return;
}




void FUN_100181e30(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_1001bdb04(*(undefined4 *)(param_1 + 0x15a4),param_1 + 0x268,param_1 + 0x1574);
  FUN_1001bdb78(*(undefined4 *)(param_1 + 0x159c),param_1 + 0x268,param_1 + 0x156c);
  FUN_100652dd4(param_1 + 0x848,param_1 + 0x1564,2);
  if (*(float *)(param_1 + 0x1594) != -1.0) {
    uVar2 = (uint)(*(float *)(param_1 + 0x1594) * 255.0);
    uVar1 = *(uint *)(param_1 + 0x8cc);
    if (uVar2 != (uVar1 >> 7 & 0xff)) {
      *(uint *)(param_1 + 0x8cc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
      FUN_1000200a0(param_1 + 0x848);
    }
  }
  FUN_100651460(param_1 + 0x718,param_1 + 0x1564);
  if (*(char *)(param_1 + 0x15b2) != '\0') {
    FUN_100181f08(param_1);
    return;
  }
  return;
}




void FUN_100181f08(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  long *plVar4;
  void *local_48 [2];
  char local_31;
  
  FUN_100181ca8();
  if ((*(float *)(param_1 + 0x1e8) != 0.95) || (*(float *)(param_1 + 0x1ec) != 0.95)) {
    *(undefined8 *)(param_1 + 0x1e8) = 0x3f7333333f733333;
    FUN_1000200a0(param_1 + 0x1a0);
  }
  if (*(char *)(param_1 + 0x25f) < '\0') {
    if (*(long *)(param_1 + 0x250) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x25f) == '\0') {
    return;
  }
  plVar4 = (long *)(param_1 + 0x248);
  FUN_100642324(param_1);
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_101469878;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  if (*(char *)(param_1 + 0x25f) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  FUN_10001549c(local_48,plVar4);
  FUN_1001e1e48(puVar3,local_48,*(undefined1 *)(param_1 + 0x15b1),0);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100642b14(param_1,puVar3);
  return;
}




void FUN_100182074(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_1001bdb04(*(undefined4 *)(param_1 + 0x15a0),param_1 + 0x268,param_1 + 0x1570);
  FUN_1001bdb78(*(undefined4 *)(param_1 + 0x1598),param_1 + 0x268,param_1 + 0x1568);
  FUN_100652dd4(param_1 + 0x848,param_1 + 0x1560,2);
  if (*(float *)(param_1 + 0x1590) != -1.0) {
    uVar2 = (uint)(*(float *)(param_1 + 0x1590) * 255.0);
    uVar1 = *(uint *)(param_1 + 0x8cc);
    if (uVar2 != (uVar1 >> 7 & 0xff)) {
      *(uint *)(param_1 + 0x8cc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
      FUN_1000200a0(param_1 + 0x848);
    }
  }
  FUN_100651460(param_1 + 0x718,param_1 + 0x1560);
  return;
}




void FUN_100182128(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) & 0xfe | param_2;
                    /* WARNING: Could not recover jumptable at 0x000100182140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))();
  return;
}




void FUN_100182144(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x15b2) != '\0') {
    uVar1 = FUN_100640db8(0x3f800000,0x3f800000,0x3e4ccccd,FUN_10001f160);
    FUN_100642b14(param_1 + 0x1a0,uVar1);
    return;
  }
  return;
}




void FUN_10018219c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_68;
  
  lVar5 = param_1[0x2b0];
  fVar9 = *(float *)((long)param_1 + 0x15ac);
  if (fVar9 <= 0.0) {
    if (0.0 < *(float *)((long)param_1 + 0x158c)) {
      fVar9 = *(float *)((long)param_1 + 0x158c) + *(float *)((long)param_1 + 0x1584) * -2.0;
      goto LAB_1001821f4;
    }
  }
  else {
LAB_1001821f4:
    FUN_10065179c(fVar9,0,0x3f800000,param_1 + 0xe3);
  }
  if ((int)param_1[0x2af] == 0) {
    fVar9 = (float)FUN_10064259c(param_1 + 0xe3);
  }
  else {
    fVar9 = (float)FUN_10065317c(param_1 + 0x109);
  }
  fVar10 = (float)NEON_fminnm(fVar9 + *(float *)((long)param_1 + 0x1584) * 2.0,
                              *(undefined4 *)((long)param_1 + 0x158c));
  fVar9 = *(float *)(param_1 + 0x2b1);
  if (*(float *)(param_1 + 0x2b1) <= fVar10) {
    fVar9 = fVar10;
  }
  plVar1 = param_1 + 0x4d;
  fVar10 = (float)FUN_100652390(param_1 + 0x8e,0);
  fVar10 = fVar10 * *(float *)(param_1 + 0xe2);
  FUN_10064e47c(fVar9 + fVar10 * 2.0,(int)param_1[0x2b5],plVar1);
  uVar12 = FUN_10064e3cc(plVar1);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar12,param_1 + 0x128);
  plVar2 = param_1 + 0xe3;
  if (*(int *)((long)param_1 + 0x157c) == 1) {
    fVar13 = *(float *)(param_1 + 0x55);
    fVar9 = (float)FUN_10064259c(plVar1);
    fVar10 = (fVar13 - fVar10) + *(float *)(param_1 + 0x127);
    fVar13 = 0.5;
  }
  else {
    if (*(int *)((long)param_1 + 0x157c) != 0) {
      if ((*(float *)(param_1 + 0xeb) != *(float *)(param_1 + 0x127)) ||
         (*(float *)((long)param_1 + 0x75c) != *(float *)((long)param_1 + 0x93c))) {
        *(float *)(param_1 + 0xeb) = *(float *)(param_1 + 0x127);
        *(float *)((long)param_1 + 0x75c) = *(float *)((long)param_1 + 0x93c);
        FUN_1000200a0(plVar2);
      }
      local_68 = &DAT_3f0000003f000000;
      goto LAB_100182340;
    }
    fVar13 = *(float *)(param_1 + 0x55);
    fVar9 = (float)FUN_10064259c(plVar1);
    fVar10 = fVar13 + fVar10 + *(float *)(param_1 + 0x127);
    fVar13 = -0.5;
  }
  fVar10 = fVar10 + fVar13 * fVar9;
  fVar9 = *(float *)((long)param_1 + 0x93c);
  bVar6 = false;
  if ((*(float *)(param_1 + 0xeb) == fVar10) &&
     (bVar6 = false, !NAN(*(float *)((long)param_1 + 0x75c)) && !NAN(fVar9))) {
    bVar6 = *(float *)((long)param_1 + 0x75c) == fVar9;
  }
  if (!bVar6) {
    *(float *)(param_1 + 0xeb) = fVar10;
    *(float *)((long)param_1 + 0x75c) = fVar9;
    FUN_1000200a0(plVar2);
  }
  local_68 = (undefined1 *)0x3f00000000000000;
LAB_100182340:
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_68);
  fVar9 = 0.0;
  bVar6 = false;
  if ((*(float *)((long)param_1 + 0x88c) == 0.0) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x111)))) {
    bVar6 = *(float *)(param_1 + 0x111) == 0.0;
  }
  if (!bVar6) {
    param_1[0x111] = 0;
    fVar9 = 0.0;
    FUN_1000200a0(param_1 + 0x109);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x109] + 0x28))(param_1 + 0x109,&local_68);
  if ((int)param_1[0x2b0] != 0) {
    if ((int)param_1[0x2b0] == 1) {
      uVar7 = *(byte *)((long)param_1 + 0x264) >> 2 & 4;
    }
    else {
      uVar7 = 0;
    }
    *(uint *)((long)param_1 + 0x14e4) = *(uint *)((long)param_1 + 0x14e4) & 0xfffffffb | uVar7;
    plVar2 = param_1 + 0x244;
    fVar10 = (float)FUN_100652390(plVar2,0);
    fVar14 = fVar9 * 1.2;
    fVar13 = (float)FUN_10064259c(plVar1);
    FUN_1006525c4(fVar10 * 1.2,fVar13 + -50.0,fVar10 * 1.2,fVar14,fVar9 + -40.0,fVar14,plVar2);
    fVar10 = 0.0;
    FUN_10064e5ec(0,plVar2,8,plVar1,8);
    fVar9 = (float)FUN_10064259c(plVar1);
    local_68 = (undefined1 *)CONCAT44(fVar10 + -20.0,fVar9 + -20.0);
    FUN_10064e48c(param_1 + 0x26e,&local_68);
    FUN_10064e5ec(0,0,param_1 + 0x26e,8,plVar1,8);
    fVar9 = 0.5;
    FUN_10064e784(0x3f000000,0x3f000000,0,0,0x41600000,0x41400000,param_1 + 0x28c,plVar1);
  }
  if ((*(byte *)((long)param_1 + 0x264) >> 4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2ae) = DAT_101e3d3c8;
    *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
    (**(code **)(*param_1 + 0x168))(param_1);
    uVar11 = DAT_101e3d3cc;
  }
  else {
    *(undefined4 *)(param_1 + 0x2ae) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
    (**(code **)(*param_1 + 0x168))(param_1);
    uVar11 = 0xffffffff;
  }
  *(undefined4 *)((long)param_1 + 0x1574) = uVar11;
  bVar6 = (int)lVar5 == 0;
  *(undefined4 *)((long)param_1 + 0x15a4) = 0x3f800000;
  FUN_1001be4f4(0x3f800000,param_1 + 0x128,(long)param_1 + 0x1574);
  *(uint *)((long)param_1 + 0x2ec) =
       *(uint *)((long)param_1 + 0x2ec) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2ec) & 3 | (uint)bVar6 << 2;
  *(uint *)((long)param_1 + 0x121c) =
       *(uint *)((long)param_1 + 0x121c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x121c) & 3 | (uint)!bVar6 << 2;
  uVar11 = 0;
  if ((*(byte *)((long)param_1 + 0x264) & 0x10) != 0) {
    uVar11 = 0x3f800000;
  }
  FUN_100652e14(uVar11,param_1 + 0x26e);
  uVar11 = 0;
  if ((*(byte *)((long)param_1 + 0x264) & 0x10) != 0) {
    uVar11 = 0x3f800000;
  }
  FUN_10065260c(uVar11,param_1 + 0x244);
  bVar4 = *(byte *)((long)param_1 + 0x264);
  uVar8 = 0xb2;
  uVar7 = uVar8;
  if ((bVar4 & 1) != 0) {
    uVar7 = 0xff;
  }
  uVar3 = *(uint *)((long)param_1 + 0x13f4);
  if (uVar7 != (uVar3 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x13f4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar7 << 7;
    FUN_1000200a0(param_1 + 0x26e);
    bVar4 = *(byte *)((long)param_1 + 0x264);
  }
  if ((bVar4 & 1) != 0) {
    uVar8 = 0xff;
  }
  uVar7 = *(uint *)((long)param_1 + 0x2ec);
  if (uVar8 != (uVar7 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x2ec) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar8 << 7;
    FUN_1000200a0(plVar1);
    bVar4 = *(byte *)((long)param_1 + 0x264);
  }
  uVar7 = 0x99;
  if ((bVar4 & 1) != 0) {
    uVar7 = 0xff;
  }
  uVar8 = *(uint *)((long)param_1 + 0x79c);
  if (uVar7 != (uVar8 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x79c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | uVar7 << 7;
    FUN_1000200a0(param_1 + 0xe3);
  }
  uVar11 = FUN_10064259c(plVar1);
  local_68 = (undefined1 *)CONCAT44(fVar9,uVar11);
  FUN_10064e48c(param_1,&local_68);
  return;
}




long * FUN_100182684(long *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_100181304();
  *puVar11 = &PTR_FUN_10145efd0;
  puVar1 = puVar11 + 0x2b7;
  FUN_1006421a8(puVar1);
  param_1[0x2b7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x2c8;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x2e6;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x304;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x32a;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x350;
  FUN_1006421a8(plVar6);
  param_1[0x350] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x361);
  plVar7 = param_1 + 0x395;
  FUN_1006421a8(plVar7);
  param_1[0x395] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x3a6;
  thunk_FUN_1006543ec(plVar8);
  FUN_1004e3004(param_1 + 0x3da);
  *(undefined4 *)(param_1 + 0x3db) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1edc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar6,1);
  FUN_100642bd8(plVar6,plVar2,1);
  FUN_100642bd8(plVar6,plVar4,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar7,plVar3,1);
  FUN_100642bd8(plVar7,plVar5,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xffffffbf;
  ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar13 = *ppuVar9;
  FUN_100652cac(plVar2,puVar13,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a16c,2);
  iVar10 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar10 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  puVar14 = *ppuVar9;
  FUN_100651594(plVar4,puVar14,&DAT_10115a168);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar4,uVar12);
  FUN_100652cac(plVar3,puVar13,"white_background");
  FUN_100651594(plVar5,puVar14,&DAT_10115a164);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar5,uVar12);
  FUN_100654488(plVar8,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xfffffffb;
  local_68 = DAT_101dbd458;
  local_90 = FUN_10018297c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_10018297c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  return param_1;
}




void FUN_10018297c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1001b4980(param_1,param_4,param_5);
  FUN_100181f08(param_1);
  FUN_100182f38(param_1);
  return;
}




long * thunk_FUN_100182684(long *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_100181304();
  *puVar11 = &PTR_FUN_10145efd0;
  puVar1 = puVar11 + 0x2b7;
  FUN_1006421a8(puVar1);
  param_1[0x2b7] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x2c8;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x2e6;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x304;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x32a;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x350;
  FUN_1006421a8(plVar6);
  param_1[0x350] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x361);
  plVar7 = param_1 + 0x395;
  FUN_1006421a8(plVar7);
  param_1[0x395] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0x3a6;
  thunk_FUN_1006543ec(plVar8);
  FUN_1004e3004(param_1 + 0x3da);
  *(undefined4 *)(param_1 + 0x3db) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x1edc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,plVar6,1);
  FUN_100642bd8(plVar6,plVar2,1);
  FUN_100642bd8(plVar6,plVar4,1);
  FUN_100642bd8(puVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar7,plVar3,1);
  FUN_100642bd8(plVar7,plVar5,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xffffffbf;
  ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar13 = *ppuVar9;
  FUN_100652cac(plVar2,puVar13,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a16c,2);
  iVar10 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar10 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  puVar14 = *ppuVar9;
  FUN_100651594(plVar4,puVar14,&DAT_10115a168);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar4,uVar12);
  FUN_100652cac(plVar3,puVar13,"white_background");
  FUN_100651594(plVar5,puVar14,&DAT_10115a164);
  uVar12 = FUN_1004e0150("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_1006513c0(plVar5,uVar12);
  FUN_100654488(plVar8,1);
  *(uint *)((long)puVar11 + 0x163c) = *(uint *)((long)puVar11 + 0x163c) & 0xfffffffb;
  uStack_68 = DAT_101dbd458;
  pcStack_90 = FUN_10018297c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  uStack_68 = DAT_101dbd484;
  pcStack_90 = FUN_10018297c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  return param_1;
}




void FUN_1001829b4(float param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  
  *(float *)(param_2 + 0x3db) = param_1;
  plVar1 = param_2 + 0x2b7;
  uVar2 = FUN_100642d08(plVar1);
  if (param_1 <= 0.0) {
    if (uVar2 != 0) {
      FUN_1006423ec(plVar1,1);
      return;
    }
  }
  else if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100182a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
    return;
  }
  return;
}




void FUN_100182a3c(long *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 *local_58;
  
  FUN_10018219c();
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(uVar3,0x42700000,param_1 + 0x2c8);
  plVar1 = param_1 + 0x304;
  fVar5 = (float)uVar3 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x30c) == fVar5) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x1864)))) {
    bVar2 = *(float *)((long)param_1 + 0x1864) == 30.0;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x30c) = fVar5;
    *(undefined4 *)((long)param_1 + 0x1864) = 0x41f00000;
    FUN_1000200a0(plVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x304] + 0x28))(plVar1,&local_58);
  fVar4 = (float)uVar3 + -8.0;
  FUN_10065179c(fVar4,0,0x3f800000,plVar1);
  FUN_10064e47c(uVar3,0x42700000,param_1 + 0x2e6);
  plVar1 = param_1 + 0x32a;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x332) == fVar5) &&
     (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x1994)))) {
    bVar2 = *(float *)((long)param_1 + 0x1994) == 30.0;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x332) = fVar5;
    *(undefined4 *)((long)param_1 + 0x1994) = 0x41f00000;
    FUN_1000200a0(plVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x32a] + 0x28))(plVar1,&local_58);
  FUN_10065179c(fVar4,0,0x3f800000,plVar1);
  FUN_10064e47c(uVar3,0x42700000,param_1 + 0x3a6);
  return;
}




void FUN_100182ba4(long param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_1001b485c();
  if (*(char *)(param_1 + 0x1edc) != '\0') {
    iVar1 = FUN_10109c574();
    if (iVar1 == 0) {
      uVar2 = FUN_10109c4f0();
    }
    else {
      iVar1 = FUN_10109c588();
      if (iVar1 != 1) goto LAB_100182c04;
      puVar3 = (uint *)FUN_10109c59c(0);
      if ((int)*puVar3 < 0x10) goto LAB_100182c04;
      uVar2 = *puVar3 & 1;
    }
    if ((uVar2 == 0) || ((*(byte *)(param_1 + 0x264) >> 1 & 1) == 0)) {
LAB_100182c04:
      FUN_100182c48(param_1);
      return;
    }
    if ((*(float *)(param_1 + 0x1d70) == 0.0) && (0.0 < *(float *)(param_1 + 0x1ed8))) {
      FUN_100182dfc(param_1);
      return;
    }
  }
  return;
}




void FUN_100182c48(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  float local_70 [8];
  
  (**(code **)(*param_1 + 0x168))();
  uVar3 = FUN_100640db8(0x3f800000,0x3f800000,0x3e4ccccd,FUN_10001f160);
  FUN_100642b14(param_1 + 0x34,uVar3);
  *(undefined1 *)((long)param_1 + 0x1edc) = 0;
  plVar1 = param_1 + 0x2b7;
  FUN_100642324(plVar1);
  plVar2 = param_1 + 0x3a6;
  FUN_100642324(plVar2);
  FUN_100642324(param_1 + 0x395);
  uVar4 = *(uint *)((long)param_1 + 0x163c);
  if ((~uVar4 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x163c) = uVar4 | 0x7f80;
    FUN_1000200a0(plVar1);
    uVar4 = *(uint *)((long)param_1 + 0x163c);
  }
  *(uint *)((long)param_1 + 0x163c) = uVar4 | 4;
  uVar3 = FUN_100047714();
  FUN_10063f0e8(0x3fa00000);
  FUN_10063fce0(0,uVar3);
  FUN_100642b14(plVar1,uVar3);
  uVar3 = FUN_100047300();
  FUN_100642b14(plVar1,uVar3);
  uVar3 = FUN_1000b50a8();
  FUN_10063f0e8(0x3e4ccccd);
  local_70[0] = (float)FUN_10064e3cc(plVar2);
  local_70[0] = -local_70[0];
  local_70[1] = 0.0;
  FUN_10063fb90(uVar3,local_70);
  FUN_100642b14(plVar2,uVar3);
  uVar3 = FUN_1000b50a8();
  FUN_10063f0e8(0x3e4ccccd);
  local_70[0] = (float)FUN_10064e3cc(plVar2);
  local_70[0] = local_70[0] + 2.0;
  local_70[1] = 0.0;
  FUN_10063fb90(uVar3,local_70);
  FUN_100642b14(param_1 + 0x395,uVar3);
  FUN_100644aec(local_70,DAT_101d918e4,0);
  FUN_100644c34(param_1,local_70,1);
  return;
}




void FUN_100182dfc(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_50 [32];
  
  (**(code **)(*param_1 + 0x168))();
  uVar2 = FUN_100640db8(0x3f800000,0x3f800000,0x3e4ccccd,FUN_10001f160);
  FUN_100642b14(param_1 + 0x34,uVar2);
  *(undefined1 *)((long)param_1 + 0x1edc) = 0;
  if ((*(uint *)((long)param_1 + 0x1b04) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1b04) = *(uint *)((long)param_1 + 0x1b04) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x350);
  }
  plVar1 = param_1 + 0x2b7;
  FUN_100642324(plVar1);
  FUN_100642324(param_1 + 0x3a6);
  FUN_100642324(param_1 + 0x395);
  uVar3 = *(uint *)((long)param_1 + 0x163c);
  if ((~uVar3 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x163c) = uVar3 | 0x7f80;
    FUN_1000200a0(plVar1);
    uVar3 = *(uint *)((long)param_1 + 0x163c);
  }
  *(uint *)((long)param_1 + 0x163c) = uVar3 | 4;
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3fa00000);
  FUN_10063fce0(0,uVar2);
  FUN_100642b14(plVar1,uVar2);
  uVar2 = FUN_100047300();
  FUN_100642b14(plVar1,uVar2);
  FUN_100644aec(auStack_50,DAT_101d918e8,0);
  FUN_100644c34(param_1,auStack_50,1);
  return;
}




void FUN_100182f38(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70 [4];
  
  if ((*(char *)(param_3 + 0x1edc) == '\0') &&
     (*(char *)(param_3 + 0x1edc) = '\x01', 0.0 < *(float *)(param_3 + 0x1ed8))) {
    lVar1 = param_3 + 0x15b8;
    FUN_100642324(lVar1);
    lVar2 = param_3 + 0x1d30;
    FUN_100642324(lVar2);
    lVar3 = param_3 + 0x1ca8;
    FUN_100642324(lVar3);
    fVar6 = (float)FUN_100652e60(param_3 + 0x1640);
    FUN_10064259c(param_3 + 0x268);
    fVar7 = param_2 * -0.5 + -56.0;
    bVar4 = false;
    if ((*(float *)(param_3 + 0x15f8) == fVar6 * -0.5) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0x15fc)) && !NAN(fVar7))) {
      bVar4 = *(float *)(param_3 + 0x15fc) == fVar7;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0x15f8) = fVar6 * -0.5;
      *(float *)(param_3 + 0x15fc) = fVar7;
      FUN_1000200a0(lVar1);
    }
    *(uint *)(param_3 + 0x163c) = *(uint *)(param_3 + 0x163c) | 4;
    if ((~*(uint *)(param_3 + 0x1b04) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x1b04) = *(uint *)(param_3 + 0x1b04) | 0x7f80;
      FUN_1000200a0(param_3 + 0x1a80);
    }
    fVar6 = (float)FUN_10064e3cc(lVar2);
    if (*(float *)(param_3 + 0x1d70) != -fVar6) {
      *(float *)(param_3 + 0x1d70) = -fVar6;
      FUN_1000200a0(lVar2);
    }
    *(uint *)(param_3 + 0x1db4) = *(uint *)(param_3 + 0x1db4) | 0x10;
    fVar6 = (float)FUN_10064e3cc(lVar2);
    if (*(float *)(param_3 + 0x1ce8) != fVar6 + 2.0) {
      *(float *)(param_3 + 0x1ce8) = fVar6 + 2.0;
      FUN_1000200a0(lVar3);
    }
    uVar5 = FUN_100047714();
    FUN_10063f0e8(0x3e19999a);
    FUN_10063fce0(0x3f800000,uVar5);
    FUN_100642b14(lVar1,uVar5);
    uVar5 = FUN_1000b50a8();
    FUN_10063f0e8(*(undefined4 *)(param_3 + 0x1ed8));
    local_70[0] = 0;
    FUN_10063fb90(uVar5,local_70);
    FUN_100642b14(lVar2,uVar5);
    uVar5 = FUN_1000b50a8();
    FUN_10063f0e8(*(undefined4 *)(param_3 + 0x1ed8));
    local_70[0] = 0;
    FUN_10063fb90(uVar5,local_70);
    FUN_100642b14(lVar3,uVar5);
    FUN_100644aec(local_70,DAT_101d918e0,0);
    FUN_100644c34(param_3,local_70,1);
  }
  return;
}




void FUN_10018314c(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x1ed8)) {
    return;
  }
  FUN_100182dfc();
  return;
}




long FUN_100183160(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  code *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar8 = (undefined8 *)FUN_100182684();
  *puVar8 = &PTR_FUN_10145f168;
  puVar8 = puVar8 + 0x3dc;
  thunk_FUN_100652c08(puVar8);
  lVar1 = param_1 + 0x1fd0;
  FUN_1006421a8(lVar1);
  *(undefined ***)(param_1 + 0x1fd0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  lVar2 = param_1 + 0x2058;
  thunk_FUN_100652c08(lVar2);
  lVar3 = param_1 + 0x2148;
  thunk_FUN_100650e64(lVar3);
  lVar4 = param_1 + 0x2278;
  thunk_FUN_100652c08(lVar4);
  lVar5 = param_1 + 0x2368;
  thunk_FUN_100652c08(lVar5);
  *(undefined8 *)(param_1 + 0x2458) = DAT_101dc1cb8;
  FUN_100642bd8(param_1 + 0x1a0,puVar8,1);
  FUN_100642bd8(param_1 + 0x1a0,lVar1,1);
  FUN_100642bd8(lVar1,lVar2,1);
  FUN_100642bd8(lVar1,lVar3,1);
  FUN_100642bd8(lVar3,lVar4,1);
  FUN_100642bd8(lVar3,lVar5,1);
  *(uint *)(param_1 + 0x1f64) = *(uint *)(param_1 + 0x1f64) & 0xffffffbf;
  *(uint *)(param_1 + 0x2054) = *(uint *)(param_1 + 0x2054) & 0xffffffbf;
  iVar7 = FUN_100126c88();
  ppuVar6 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar6 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar9 = *ppuVar6;
  FUN_100652ca4(puVar8,puVar9);
  FUN_100652ca4(lVar2,puVar9);
  if ((*(float *)(param_1 + 0x20a8) != 0.0) || (*(float *)(param_1 + 0x20ac) != 0.5)) {
    *(undefined8 *)(param_1 + 0x20a8) = 0x3f00000000000000;
    FUN_1000200a0(lVar2);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar7 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_100651038(lVar3,*ppuVar6);
  if ((*(float *)(param_1 + 0x2198) != 0.0) || (*(float *)(param_1 + 0x219c) != 0.5)) {
    *(undefined8 *)(param_1 + 0x2198) = 0x3f00000000000000;
    FUN_1000200a0(lVar3);
  }
  FUN_100652cac(lVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_telestration_ban");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff2909cc);
  FUN_100652dd4(lVar4,&local_90,2);
  if ((*(float *)(param_1 + 0x22c8) != 0.0) || (*(float *)(param_1 + 0x22cc) != 0.5)) {
    *(undefined8 *)(param_1 + 0x22c8) = 0x3f00000000000000;
    FUN_1000200a0(lVar4);
  }
  FUN_100652cac(lVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_telestration_ban");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff2909cc);
  FUN_100652dd4(lVar5,&local_90,2);
  if ((*(float *)(param_1 + 0x23b8) != 0.0) || (*(float *)(param_1 + 0x23bc) != 0.5)) {
    *(undefined8 *)(param_1 + 0x23b8) = 0x3f00000000000000;
    FUN_1000200a0(lVar5);
  }
  if (*(float *)(param_1 + 0x23a8) != 4.0) {
    *(undefined4 *)(param_1 + 0x23a8) = 0x40800000;
    FUN_1000200a0(lVar5);
  }
  *(uint *)(param_1 + 0x2054) = *(uint *)(param_1 + 0x2054) & 0xffffffbb;
  local_68 = DAT_101d918e0;
  local_90 = thunk_FUN_1001837fc;
  lVar1 = param_1 + 8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  lStack_88 = param_1;
  FUN_10001554c(lVar1,&local_90);
  local_68 = DAT_101d918e4;
  local_90 = thunk_FUN_10018384c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  lStack_88 = param_1;
  FUN_10001554c(lVar1,&local_90);
  local_68 = DAT_101d918e8;
  local_90 = FUN_1001834f4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  lStack_88 = param_1;
  FUN_10001554c(lVar1,&local_90);
  return param_1;
}




void thunk_FUN_1001837fc(long param_1)

{
  FUN_100642324(param_1 + 0x1fd0);
  if ((*(uint *)(param_1 + 0x2054) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2054) = *(uint *)(param_1 + 0x2054) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x1fd0);
    return;
  }
  return;
}




void thunk_FUN_10018384c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f800000);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3f000000);
  FUN_10063fce0(0x3f800000,uVar2);
  param_1 = param_1 + 0x1fd0;
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1001834f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001838c0(param_1,param_4);
  return;
}




long thunk_FUN_100183160(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  code *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar8 = (undefined8 *)FUN_100182684();
  *puVar8 = &PTR_FUN_10145f168;
  puVar8 = puVar8 + 0x3dc;
  thunk_FUN_100652c08(puVar8);
  lVar1 = param_1 + 0x1fd0;
  FUN_1006421a8(lVar1);
  *(undefined ***)(param_1 + 0x1fd0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  lVar2 = param_1 + 0x2058;
  thunk_FUN_100652c08(lVar2);
  lVar3 = param_1 + 0x2148;
  thunk_FUN_100650e64(lVar3);
  lVar4 = param_1 + 0x2278;
  thunk_FUN_100652c08(lVar4);
  lVar5 = param_1 + 0x2368;
  thunk_FUN_100652c08(lVar5);
  *(undefined8 *)(param_1 + 0x2458) = DAT_101dc1cb8;
  FUN_100642bd8(param_1 + 0x1a0,puVar8,1);
  FUN_100642bd8(param_1 + 0x1a0,lVar1,1);
  FUN_100642bd8(lVar1,lVar2,1);
  FUN_100642bd8(lVar1,lVar3,1);
  FUN_100642bd8(lVar3,lVar4,1);
  FUN_100642bd8(lVar3,lVar5,1);
  *(uint *)(param_1 + 0x1f64) = *(uint *)(param_1 + 0x1f64) & 0xffffffbf;
  *(uint *)(param_1 + 0x2054) = *(uint *)(param_1 + 0x2054) & 0xffffffbf;
  iVar7 = FUN_100126c88();
  ppuVar6 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar6 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar9 = *ppuVar6;
  FUN_100652ca4(puVar8,puVar9);
  FUN_100652ca4(lVar2,puVar9);
  if ((*(float *)(param_1 + 0x20a8) != 0.0) || (*(float *)(param_1 + 0x20ac) != 0.5)) {
    *(undefined8 *)(param_1 + 0x20a8) = 0x3f00000000000000;
    FUN_1000200a0(lVar2);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar7 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_100651038(lVar3,*ppuVar6);
  if ((*(float *)(param_1 + 0x2198) != 0.0) || (*(float *)(param_1 + 0x219c) != 0.5)) {
    *(undefined8 *)(param_1 + 0x2198) = 0x3f00000000000000;
    FUN_1000200a0(lVar3);
  }
  FUN_100652cac(lVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_telestration_ban");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff2909cc);
  FUN_100652dd4(lVar4,&pcStack_90,2);
  if ((*(float *)(param_1 + 0x22c8) != 0.0) || (*(float *)(param_1 + 0x22cc) != 0.5)) {
    *(undefined8 *)(param_1 + 0x22c8) = 0x3f00000000000000;
    FUN_1000200a0(lVar4);
  }
  FUN_100652cac(lVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_telestration_ban");
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff2909cc);
  FUN_100652dd4(lVar5,&pcStack_90,2);
  if ((*(float *)(param_1 + 0x23b8) != 0.0) || (*(float *)(param_1 + 0x23bc) != 0.5)) {
    *(undefined8 *)(param_1 + 0x23b8) = 0x3f00000000000000;
    FUN_1000200a0(lVar5);
  }
  if (*(float *)(param_1 + 0x23a8) != 4.0) {
    *(undefined4 *)(param_1 + 0x23a8) = 0x40800000;
    FUN_1000200a0(lVar5);
  }
  *(uint *)(param_1 + 0x2054) = *(uint *)(param_1 + 0x2054) & 0xffffffbb;
  uStack_68 = DAT_101d918e0;
  pcStack_90 = thunk_FUN_1001837fc;
  lVar1 = param_1 + 8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  lStack_88 = param_1;
  FUN_10001554c(lVar1,&pcStack_90);
  uStack_68 = DAT_101d918e4;
  pcStack_90 = thunk_FUN_10018384c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  lStack_88 = param_1;
  FUN_10001554c(lVar1,&pcStack_90);
  uStack_68 = DAT_101d918e8;
  pcStack_90 = FUN_1001834f4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  lStack_88 = param_1;
  FUN_10001554c(lVar1,&pcStack_90);
  return param_1;
}




void FUN_100183500(long *param_1,undefined8 param_2)

{
  FUN_100652cdc(param_1 + 0x3dc);
  FUN_100652cdc(param_1 + 0x40b,param_2);
                    /* WARNING: Could not recover jumptable at 0x000100183544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_100183548(long *param_1,undefined8 param_2)

{
  FUN_10064e48c(param_1 + 0x3dc);
  FUN_10064e48c(param_1 + 0x40b,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010018358c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_100183590(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *local_58;
  
  fVar4 = (float)(**(code **)(*param_1 + 0x48))();
  plVar2 = param_1 + 0x3dc;
  fVar5 = (float)FUN_10065317c(plVar2);
  plVar1 = param_1 + 0xe3;
  fVar6 = (float)FUN_100651184(plVar1);
  fVar6 = ((fVar4 + -4.0) - (fVar5 + fVar6)) * 0.5;
  fVar5 = (float)FUN_100651184(plVar1);
  fVar5 = (-4.0 - fVar6) + (fVar4 - fVar5) * 0.5;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar7 = 0.0;
  if ((*(byte *)((long)param_1 + 0x1f64) & 4) != 0) {
    fVar7 = fVar5;
  }
  *(float *)(param_1 + 0x127) = fVar7;
  fVar5 = (float)FUN_10065317c(plVar2);
  fVar4 = fVar6 + -6.0 + *(float *)(param_1 + 0x48b) + (fVar5 - fVar4) * 0.5;
  fVar5 = *(float *)((long)param_1 + 0x93c) + *(float *)((long)param_1 + 0x245c);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x3e4) == fVar4) &&
     (bVar3 = false, !NAN(*(float *)((long)param_1 + 0x1f24)) && !NAN(fVar5))) {
    bVar3 = *(float *)((long)param_1 + 0x1f24) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x3e4) = fVar4;
    *(float *)((long)param_1 + 0x1f24) = fVar5;
    FUN_1000200a0(plVar2);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x3dc] + 0x28))(plVar2,&local_58);
  FUN_10065179c(*(float *)((long)param_1 + 0x158c) + *(float *)((long)param_1 + 0x1584) * -2.0,0,
                0x3f800000,plVar1);
  *(uint *)((long)param_1 + 0x20dc) = *(uint *)((long)param_1 + 0x20dc) | 0x10;
  plVar1 = param_1 + 0x429;
  *(uint *)((long)param_1 + 0x21cc) = *(uint *)((long)param_1 + 0x21cc) | 0x10;
  fVar6 = *(float *)(param_1 + 0x413);
  fVar4 = (float)FUN_100652e60(param_1 + 0x40b);
  fVar5 = *(float *)(param_1 + 0x431);
  if (fVar5 != fVar4 + fVar6) {
    *(float *)(param_1 + 0x431) = fVar4 + fVar6;
    FUN_1000200a0(plVar1);
  }
  fVar4 = (float)FUN_1006511d0(plVar1);
  FUN_1006511d0(plVar1);
  fVar5 = fVar5 + -10.0;
  FUN_10064e47c(fVar4 + -10.0,param_1 + 0x44f);
  fVar4 = (float)FUN_1006511d0(plVar1);
  FUN_1006511d0(plVar1);
  fVar5 = fVar5 + -10.0;
  FUN_10064e47c(fVar4 + -10.0,param_1 + 0x46d);
  plVar1 = param_1 + 0x3fa;
  fVar6 = (float)FUN_1006425d0(plVar1,0,0,1,1);
  FUN_10064259c(param_1 + 0x4d);
  fVar4 = fVar5;
  FUN_1006425d0(plVar1,0,0,1,1);
  fVar4 = fVar4 * -0.5 + fVar5 * -0.5;
  if ((*(float *)(param_1 + 0x402) != fVar6 * -0.5) || (*(float *)((long)param_1 + 0x2014) != fVar4)
     ) {
    *(float *)(param_1 + 0x402) = fVar6 * -0.5;
    *(float *)((long)param_1 + 0x2014) = fVar4;
    FUN_1000200a0(plVar1);
  }
  FUN_100182a3c(param_1);
  return;
}




void FUN_1001837fc(long param_1)

{
  FUN_100642324(param_1 + 0x1fd0);
  if ((*(uint *)(param_1 + 0x2054) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2054) = *(uint *)(param_1 + 0x2054) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x1fd0);
    return;
  }
  return;
}




void FUN_10018384c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f800000);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3f000000);
  FUN_10063fce0(0x3f800000,uVar2);
  param_1 = param_1 + 0x1fd0;
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1001838c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100644b14(param_2);
  uVar1 = FUN_10001f55c();
  FUN_10063f0e8(0x3f800000);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3f000000);
  FUN_10063fce0(0x3f800000,uVar2);
  param_1 = param_1 + 0x1fd0;
  FUN_100642324(param_1);
  FUN_100642b14(param_1,uVar1);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_10018393c(long *param_1,int param_2)

{
  undefined4 uVar1;
  
  *(byte *)((long)param_1 + 0x264) = *(byte *)((long)param_1 + 0x264) & 0xfe | (byte)param_2;
  (**(code **)(*param_1 + 0x180))();
  uVar1 = 0x3f800000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  FUN_100652e14(uVar1,param_1 + 0x3dc);
  return;
}




long * FUN_100183990(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *local_58;
  
  puVar5 = (undefined8 *)FUN_1001b4648();
  *puVar5 = &PTR_FUN_10145f300;
  puVar1 = puVar5 + 0x4d;
  FUN_1006421a8(puVar1);
  param_1[0x4d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x5e;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x7c;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x9a;
  thunk_FUN_100652c08(plVar4);
  *(undefined4 *)(param_1 + 0xb8) = 0xff000000;
  *(undefined4 *)((long)param_1 + 0x5c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5cc) = 0xffffffff;
  param_1[0xbb] = -0x407fffff40800000;
  param_1[0xba] = 0x3eb333333e4ccccd;
  lVar6 = NEON_fmov(0x3f800000,4);
  param_1[0xbc] = lVar6;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  FUN_100642bd8(param_1 + 0x34,puVar1,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(puVar1,plVar2,1);
  FUN_100642bd8(puVar1,plVar4,1);
  *(uint *)((long)param_1 + 0x464) = *(uint *)((long)param_1 + 0x464) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x554) = *(uint *)((long)param_1 + 0x554) & 0xffffffbf;
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_58);
  FUN_100183bb0(param_1,param_2);
  if ((*(float *)(param_1 + 0x57) != 0.5) || (*(float *)((long)puVar5 + 700) != 0.5)) {
    param_1[0x57] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar1);
  }
  if ((*(float *)(param_1 + 0x86) != 0.5) || (*(float *)((long)param_1 + 0x434) != 0.5)) {
    param_1[0x86] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x68) != 0.5) || (*(float *)((long)param_1 + 0x344) != 0.5)) {
    param_1[0x68] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0xa4) != 0.5) || (*(float *)((long)param_1 + 0x524) != 0.5)) {
    param_1[0xa4] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  (**(code **)(*param_1 + 0x40))(0x41400000,param_1);
  (**(code **)(*param_1 + 0x168))(param_1);
  return param_1;
}




void FUN_100183bb0(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  puVar2 = *ppuVar1;
  FUN_100652d8c(param_1 + 0x3e0);
  FUN_100652cac(param_1 + 0x3e0,puVar2,"circle_button_fill");
  FUN_100652d8c(param_1 + 0x2f0);
  FUN_100652cac(param_1 + 0x2f0,puVar2,"circle_button_frame");
  FUN_100652d8c(param_1 + 0x4d0);
  FUN_100652cac(param_1 + 0x4d0,puVar2,"circle_button_chevron");
  return;
}




long * thunk_FUN_100183990(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puStack_58;
  
  puVar5 = (undefined8 *)FUN_1001b4648();
  *puVar5 = &PTR_FUN_10145f300;
  puVar1 = puVar5 + 0x4d;
  FUN_1006421a8(puVar1);
  param_1[0x4d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x5e;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x7c;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x9a;
  thunk_FUN_100652c08(plVar4);
  *(undefined4 *)(param_1 + 0xb8) = 0xff000000;
  *(undefined4 *)((long)param_1 + 0x5c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb9) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x5cc) = 0xffffffff;
  param_1[0xbb] = -0x407fffff40800000;
  param_1[0xba] = 0x3eb333333e4ccccd;
  lVar6 = NEON_fmov(0x3f800000,4);
  param_1[0xbc] = lVar6;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  FUN_100642bd8(param_1 + 0x34,puVar1,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(puVar1,plVar2,1);
  FUN_100642bd8(puVar1,plVar4,1);
  *(uint *)((long)param_1 + 0x464) = *(uint *)((long)param_1 + 0x464) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x554) = *(uint *)((long)param_1 + 0x554) & 0xffffffbf;
  puStack_58 = &DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&puStack_58);
  FUN_100183bb0(param_1,param_2);
  if ((*(float *)(param_1 + 0x57) != 0.5) || (*(float *)((long)puVar5 + 700) != 0.5)) {
    param_1[0x57] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar1);
  }
  if ((*(float *)(param_1 + 0x86) != 0.5) || (*(float *)((long)param_1 + 0x434) != 0.5)) {
    param_1[0x86] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x68) != 0.5) || (*(float *)((long)param_1 + 0x344) != 0.5)) {
    param_1[0x68] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0xa4) != 0.5) || (*(float *)((long)param_1 + 0x524) != 0.5)) {
    param_1[0xa4] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  (**(code **)(*param_1 + 0x40))(0x41400000,param_1);
  (**(code **)(*param_1 + 0x168))(param_1);
  return param_1;
}




void FUN_100183c50(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0xb8) = *param_3;
  *(undefined4 *)(param_2 + 0xba) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100183c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_100183c68(undefined4 param_1,long param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x5c4) = *param_3;
  *(undefined4 *)(param_2 + 0x5d4) = param_1;
  return;
}




void FUN_100183c78(float param_1,float param_2,long param_3)

{
  bool bVar1;
  
  *(float *)(param_3 + 0x5e0) = param_1;
  *(float *)(param_3 + 0x5e4) = param_2;
  *(bool *)(param_3 + 0x5e8) = param_1 != param_2;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x48) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x4c)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_3 + 0x4c) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x48) = param_1;
    *(float *)(param_3 + 0x4c) = param_1;
    FUN_1000200a0();
    return;
  }
  return;
}




void FUN_100183ca8(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x374) = *(uint *)(param_1 + 0x374) & 0xfffffffb | uVar1;
  return;
}




void FUN_100183cc8(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(float *)(param_1 + 0x5d4) * 255.0);
  uVar1 = *(uint *)(param_1 + 0x464);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x464) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0x3e0);
  }
  FUN_100652dd4(param_1 + 0x3e0,param_1 + 0x5c4,2);
  FUN_100183d30(param_1);
  return;
}




void FUN_100183d30(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_1 + 0x5e8) != '\0') {
    fVar4 = *(float *)(param_1 + 0x5e0);
    bVar1 = false;
    if ((*(float *)(param_1 + 0x48) == fVar4) &&
       (bVar1 = false, !NAN(*(float *)(param_1 + 0x4c)) && !NAN(fVar4))) {
      bVar1 = *(float *)(param_1 + 0x4c) == fVar4;
    }
    if (!bVar1) {
      *(float *)(param_1 + 0x48) = fVar4;
      *(float *)(param_1 + 0x4c) = fVar4;
      FUN_1000200a0(param_1);
    }
    uVar2 = FUN_10001f424();
    local_38 = *(undefined4 *)(param_1 + 0x5e4);
    uStack_34 = local_38;
    FUN_10064025c(uVar2,&local_38);
    FUN_10063f0e8(0x3c23d70a,uVar2);
    uVar3 = FUN_10001f424();
    local_38 = *(undefined4 *)(param_1 + 0x5e0);
    uStack_34 = local_38;
    FUN_10064025c(uVar3,&local_38);
    FUN_10063f0e8(0x3e800000,uVar3);
    FUN_10063f130(uVar3,FUN_10006bf9c);
    FUN_100642324(param_1);
    FUN_100642b7c(param_1,uVar2);
  }
  return;
}




void FUN_100183df8(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(float *)(param_1 + 0x5d0) * 255.0);
  uVar1 = *(uint *)(param_1 + 0x464);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x464) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0x3e0);
  }
  FUN_100652dd4(param_1 + 0x3e0,param_1 + 0x5c0,2);
  return;
}




long FUN_100183e58(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100183990();
  *puVar3 = &PTR_FUN_10144f3b0;
  puVar3 = puVar3 + 0xbe;
  FUN_1006533a4(puVar3);
  lVar1 = param_1 + 0x6f0;
  thunk_FUN_100650e64(lVar1);
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x828) = 0;
  FUN_100642bd8(param_1 + 0x1a0,puVar3,1);
  FUN_100642bd8(param_1 + 0x1a0,lVar1,1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x640) == 0.5) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x644)))) {
    bVar2 = *(float *)(param_1 + 0x644) == 0.5;
  }
  if (!bVar2) {
    *(undefined1 **)(param_1 + 0x640) = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar3);
  }
  FUN_100652ca4(puVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(puVar3,"circle_button_fill");
  FUN_100652dd4(puVar3,&DAT_10115a164,2);
  if ((*(uint *)(param_1 + 0x674) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar3);
  }
  FUN_100653464(puVar3,FUN_100181258,param_1);
  FUN_100651594(lVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x740) != 0.5) || (*(float *)(param_1 + 0x744) != 0.5)) {
    *(undefined1 **)(param_1 + 0x740) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  FUN_100655b9c(param_1 + 0x7c0,0);
  return param_1;
}




long thunk_FUN_100183e58(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_100183990();
  *puVar3 = &PTR_FUN_10144f3b0;
  puVar3 = puVar3 + 0xbe;
  FUN_1006533a4(puVar3);
  lVar1 = param_1 + 0x6f0;
  thunk_FUN_100650e64(lVar1);
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x828) = 0;
  FUN_100642bd8(param_1 + 0x1a0,puVar3,1);
  FUN_100642bd8(param_1 + 0x1a0,lVar1,1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x640) == 0.5) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x644)))) {
    bVar2 = *(float *)(param_1 + 0x644) == 0.5;
  }
  if (!bVar2) {
    *(undefined1 **)(param_1 + 0x640) = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar3);
  }
  FUN_100652ca4(puVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(puVar3,"circle_button_fill");
  FUN_100652dd4(puVar3,&DAT_10115a164,2);
  if ((*(uint *)(param_1 + 0x674) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) & 0xffff807f | 0x3f80;
    FUN_1000200a0(puVar3);
  }
  FUN_100653464(puVar3,FUN_100181258,param_1);
  FUN_100651594(lVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  if ((*(float *)(param_1 + 0x740) != 0.5) || (*(float *)(param_1 + 0x744) != 0.5)) {
    *(undefined1 **)(param_1 + 0x740) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  FUN_100655b9c(param_1 + 0x7c0,0);
  return param_1;
}




void FUN_100183fcc(float param_1,long param_2)

{
  float fVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if ((*(float *)(param_2 + 0x824) == 0.0 && 0.0 < param_1) ||
     ((0.0 < *(float *)(param_2 + 0x824) && (param_1 <= 0.0)))) {
    FUN_1001840bc(param_2);
  }
  if (param_1 == 0.0) {
    *(undefined8 *)(param_2 + 0x820) = 0;
    *(undefined4 *)(param_2 + 0x828) = 0;
    FUN_1004e3120(auStack_40,"");
  }
  else {
    fVar1 = *(float *)(param_2 + 0x820);
    if (*(float *)(param_2 + 0x820) < param_1) {
      *(float *)(param_2 + 0x820) = param_1;
      fVar1 = param_1;
    }
    *(float *)(param_2 + 0x824) = param_1;
    *(float *)(param_2 + 0x828) = param_1 / fVar1;
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
  }
  FUN_1006513c0(param_2 + 0x6f0,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001840bc(long param_1,int param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  lVar2 = DAT_101dbd2f8;
  puVar1 = (ushort *)(DAT_101dbd2f8 + 0x20010);
  uVar3 = *puVar1;
  if (param_2 == 0) {
    if (uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *puVar1 = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar4);
      *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a5410;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    uVar5 = 0x3eb33333;
  }
  else {
    if (uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *puVar1 = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063f0f0(puVar4);
      *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a53c8;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    uVar5 = 0x3ba3d70a;
  }
  FUN_10063f0e8(uVar5,puVar4);
  FUN_100642b14(param_1 + 0x6f0,puVar4);
  return;
}




void FUN_1001841f0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10003bd40();
  operator_delete(pvVar1);
  return;
}




void FUN_100184204(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x3a6);
  FUN_10064221c(param_1 + 0x395);
  FUN_10064e2bc(param_1 + 0x361);
  FUN_10064221c(param_1 + 0x350);
  thunk_FUN_100651068(param_1 + 0x32a);
  thunk_FUN_100651068(param_1 + 0x304);
  param_1[0x2e6] = &PTR_FUN_1014a7108;
  param_1[0x2fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x300);
  FUN_10064e2bc(param_1 + 0x2e6);
  param_1[0x2c8] = &PTR_FUN_1014a7108;
  param_1[0x2df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e2);
  FUN_10064e2bc(param_1 + 0x2c8);
  FUN_10064221c(param_1 + 0x2b7);
  FUN_10003bd40(param_1);
  return;
}




void FUN_1001842e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x3a6);
  FUN_10064221c(param_1 + 0x395);
  FUN_10064e2bc(param_1 + 0x361);
  FUN_10064221c(param_1 + 0x350);
  thunk_FUN_100651068(param_1 + 0x32a);
  thunk_FUN_100651068(param_1 + 0x304);
  param_1[0x2e6] = &PTR_FUN_1014a7108;
  param_1[0x2fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x300);
  FUN_10064e2bc(param_1 + 0x2e6);
  param_1[0x2c8] = &PTR_FUN_1014a7108;
  param_1[0x2df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e2);
  FUN_10064e2bc(param_1 + 0x2c8);
  FUN_10064221c(param_1 + 0x2b7);
  pvVar1 = (void *)FUN_10003bd40(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001843c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145f168;
  param_1[0x46d] = &PTR_FUN_1014a7108;
  param_1[0x484] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x487);
  FUN_10064e2bc(param_1 + 0x46d);
  param_1[0x44f] = &PTR_FUN_1014a7108;
  param_1[0x466] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x469);
  FUN_10064e2bc(param_1 + 0x44f);
  thunk_FUN_100651068(param_1 + 0x429);
  param_1[0x40b] = &PTR_FUN_1014a7108;
  param_1[0x422] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x425);
  FUN_10064e2bc(param_1 + 0x40b);
  FUN_10064221c(param_1 + 0x3fa);
  param_1[0x3dc] = &PTR_FUN_1014a7108;
  param_1[0x3f3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3f6);
  FUN_10064e2bc(param_1 + 0x3dc);
  FUN_100184790(param_1);
  return;
}




void FUN_1001844b4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145f168;
  param_1[0x46d] = &PTR_FUN_1014a7108;
  param_1[0x484] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x487);
  FUN_10064e2bc(param_1 + 0x46d);
  param_1[0x44f] = &PTR_FUN_1014a7108;
  param_1[0x466] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x469);
  FUN_10064e2bc(param_1 + 0x44f);
  thunk_FUN_100651068(param_1 + 0x429);
  param_1[0x40b] = &PTR_FUN_1014a7108;
  param_1[0x422] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x425);
  FUN_10064e2bc(param_1 + 0x40b);
  FUN_10064221c(param_1 + 0x3fa);
  param_1[0x3dc] = &PTR_FUN_1014a7108;
  param_1[0x3f3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3f6);
  FUN_10064e2bc(param_1 + 0x3dc);
  *param_1 = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x3a6);
  FUN_10064221c(param_1 + 0x395);
  FUN_10064e2bc(param_1 + 0x361);
  FUN_10064221c(param_1 + 0x350);
  thunk_FUN_100651068(param_1 + 0x32a);
  thunk_FUN_100651068(param_1 + 0x304);
  param_1[0x2e6] = &PTR_FUN_1014a7108;
  param_1[0x2fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x300);
  FUN_10064e2bc(param_1 + 0x2e6);
  param_1[0x2c8] = &PTR_FUN_1014a7108;
  param_1[0x2df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e2);
  FUN_10064e2bc(param_1 + 0x2c8);
  FUN_10064221c(param_1 + 0x2b7);
  pvVar1 = (void *)FUN_10003bd40(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10018464c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void FUN_1001846ec(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100184790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x3a6);
  FUN_10064221c(param_1 + 0x395);
  FUN_10064e2bc(param_1 + 0x361);
  FUN_10064221c(param_1 + 0x350);
  thunk_FUN_100651068(param_1 + 0x32a);
  thunk_FUN_100651068(param_1 + 0x304);
  param_1[0x2e6] = &PTR_FUN_1014a7108;
  param_1[0x2fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x300);
  FUN_10064e2bc(param_1 + 0x2e6);
  param_1[0x2c8] = &PTR_FUN_1014a7108;
  param_1[0x2df] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e2);
  FUN_10064e2bc(param_1 + 0x2c8);
  FUN_10064221c(param_1 + 0x2b7);
  FUN_10003bd40(param_1);
  return;
}




void FUN_100184870(void)

{
  DAT_101e3d288 = 0xff;
  DAT_101e3d28a = 0xffff;
  DAT_101e3d28c = 0xffff;
  DAT_101e3d290 = 0x4326000041900000;
  DAT_101e3d298 = 0x4326000041c00000;
  DAT_101e3d2a0 = 0xffbc9c44;
  DAT_101e3d2a4 = 0xff1166f2;
  DAT_101e3d2a8 = 0xffe0e0e0;
  DAT_101e3d2ac = 0xffa0a0a0;
  DAT_101e3d2b0 = 0xff8c8c8c;
  DAT_101e3d2b4 = 0xff322213;
  DAT_101e3d2b8 = 0xff091911;
  DAT_101e3d2bc = 0xff170c19;
  DAT_101e3d2c0 = 0xff241a14;
  DAT_101e3d2c4 = 0xff14171c;
  DAT_101e3d2c8 = 0xff221911;
  DAT_101e3d2cc = 0xff1a1416;
  DAT_101e3d2d0 = 0xff121414;
  DAT_101e3d2d4 = 0xff1a1809;
  DAT_101e3d2d8 = 0xff141414;
  DAT_101e3d2dc = 0xff141414;
  DAT_101e3d2e0 = 0xff2929c0;
  DAT_101e3d2e4 = 0xff283082;
  DAT_101e3d2e8 = 0xff5262cc;
  DAT_101e3d2ec = 0xff283082;
  DAT_101e3d2f0 = 0xff5262cc;
  DAT_101e3d2f4 = 0xff745c42;
  DAT_101e3d2f8 = 0xff184155;
  DAT_101e3d2fc = 0xff92665e;
  DAT_101e3d300 = 0xffbc9c44;
  DAT_101e3d304 = 0xffbbae56;
  DAT_101e3d308 = 0xff8b7b01;
  DAT_101e3d30c = 0xff90b3ef;
  DAT_101e3d310 = 0xff728ebe;
  DAT_101e3d314 = 0xff19459d;
  DAT_101e3d318 = 0xff9d877b;
  DAT_101e3d31c = 0xffcbb1a3;
  DAT_101e3d320 = 0xff3f6fb5;
  DAT_101e3d324 = 0xffc5c5c5;
  DAT_101e3d328 = 0xff4fc1f1;
  DAT_101e3d32c = 0xff606060;
  DAT_101e3d330 = 0xffc5ff7b;
  DAT_101e3d334 = 0xff5271eb;
  DAT_101e3d338 = 0xfffae076;
  DAT_101e3d33c = 0xff3ac8f6;
  DAT_101e3d340 = 0xffaaaaaa;
  DAT_101e3d344 = 0xffe19400;
  DAT_101e3d348 = 0xffe19400;
  DAT_101e3d34c = 0xffe550b2;
  DAT_101e3d350 = 0xfff22ae8;
  DAT_101e3d354 = 0xff005ae1;
  DAT_101e3d358 = 0xff1addfa;
  DAT_101e3d35c = 0xff2424b3;
  DAT_101e3d360 = 0xff2424b3;
  DAT_101e3d364 = 0xff646464;
  DAT_101e3d368 = 0xff92665e;
  DAT_101e3d36c = 0xff646037;
  DAT_101e3d374 = 0xff1111a1;
  DAT_101e3d37c = 0xffc8c8c8;
  DAT_101e3d378 = 0xff321ee1;
  DAT_101e3d380 = 0xff321ee1;
  DAT_101e3d38c = 0xff6259b3;
  DAT_101e3d390 = 0xff506e73;
  DAT_101e3d370 = 0xffffffff;
  DAT_101e3d394 = 0xff9dbf86;
  DAT_101e3d384 = 0xff7fe801;
  DAT_101e3d398 = 0xffa35244;
  DAT_101e3d388 = 0xffffffff;
  DAT_101e3d39c = 0xffca828e;
  DAT_101e3d3a0 = 0xffa6a6a6;
  DAT_101e3d3a4 = 0xffa6a6a6;
  DAT_101e3d3a8 = 0xffffffff;
  DAT_101e3d3ac = 0xff88ea2f;
  DAT_101e3d3b0 = 0xff8c8c8c;
  DAT_101e3d3b4 = 0xffffb400;
  DAT_101e3d3b8 = 0xffff00ff;
  DAT_101e3d3bc = 0xff00aded;
  DAT_101e3d3c0 = 0xff33d3ff;
  DAT_101e3d3c4 = 0xff7fe801;
  DAT_101e3d3c8 = 0xff282828;
  DAT_101e3d3cc = 0xfff0f0f0;
  DAT_101e3d3d0 = 0xffa4781e;
  DAT_101e3d3d4 = 0xffa6654b;
  DAT_101e3d3d8 = 0xff93435b;
  DAT_101e3d3dc = 0xff387f9c;
  DAT_101e3d3e0 = 0xffa3781e;
  DAT_101e3d3e4 = 0xffffd18a;
  DAT_101e3d3e8 = 0xffff61f7;
  DAT_101e3d3ec = 0xff5de1f2;
  DAT_101e3d3f0 = 0xff80eaff;
  DAT_101e3d3f4 = 0xff32e00e;
  DAT_101e3d3f8 = 0xff5a3c10;
  DAT_101e3d3fc = 0xff330b03;
  DAT_101e3d400 = 0xff33031d;
  DAT_101e3d404 = 0xff032433;
  DAT_101e3d408 = 0xff9e8e8d;
  FUN_10001549c(&DAT_101e3d410,"build://Sounds/UI.assetbundle/sfx_button_press.mp3");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e3d410,0x100000000);
  return;
}




long * FUN_100184f78(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar8 = (undefined8 *)FUN_1001afbc0();
  *puVar8 = &PTR_FUN_10145f480;
  puVar8 = puVar8 + 0x80;
  thunk_FUN_100181304(puVar8,0);
  plVar1 = param_1 + 0x337;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x352;
  FUN_1006505b8(plVar2);
  plVar3 = param_1 + 0x36d;
  thunk_FUN_100650e64(plVar3);
  FUN_1004e313c(param_1 + 0x393);
  FUN_1004e313c(param_1 + 0x395);
  FUN_1004e313c(param_1 + 0x397);
  param_1[0x399] = 0x41000000447a0000;
  param_1[0x39a] = 0x1000000003;
  param_1[0x39b] = 0;
  *(undefined8 *)((long)param_1 + 0x1ce2) = 0;
  *(undefined2 *)(param_1 + 0x39c) = 0x100;
  local_80 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_80);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  *(uint *)((long)param_1 + 0x1b14) = *(uint *)((long)param_1 + 0x1b14) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x484) = *(uint *)((long)param_1 + 0x484) & 0xffffffbf;
  iVar7 = FUN_100126c88();
  FUN_1001816d4(0,0x447a0000,0x447a0000,puVar8,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  if ((*(uint *)((long)param_1 + 0x484) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x484) = *(uint *)((long)param_1 + 0x484) & 0xffff807f;
    FUN_1000200a0(puVar8);
  }
  FUN_100650608(plVar1,&DAT_10115a164);
  uVar5 = *(uint *)((long)param_1 + 0x1a3c);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1a3c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  local_80 = (code *)CONCAT44(local_80._4_4_,0xffe0e0e0);
  FUN_100650608(plVar2,&local_80);
  uVar5 = *(uint *)((long)param_1 + 0x1b14);
  if ((uVar5 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1b14) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
  }
  plVar1 = param_1 + 0x22;
  bVar6 = false;
  if ((*(float *)((long)param_1 + 0x154) == 0.0) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x2a)))) {
    bVar6 = *(float *)(param_1 + 0x2a) == 0.0;
  }
  if (!bVar6) {
    param_1[0x2a] = 0;
    FUN_1000200a0(plVar1);
  }
  local_80 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x22] + 0x28))(plVar1,&local_80);
  plVar2 = param_1 + 0x48;
  bVar6 = false;
  if ((*(float *)((long)param_1 + 0x284) == 0.0) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x50)))) {
    bVar6 = *(float *)(param_1 + 0x50) == 0.0;
  }
  if (!bVar6) {
    param_1[0x50] = 0;
    FUN_1000200a0(plVar2);
  }
  local_80 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x48] + 0x28))(plVar2,&local_80);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar7 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_1001b060c(param_1,*ppuVar4,&DAT_10115a168);
  FUN_1001b0764(param_1,3);
  FUN_1001afc3c(param_1,1);
  FUN_1006515d8(plVar1,0);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffef;
  FUN_100644c24(plVar1);
  FUN_1006515d8(plVar2,0);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_100644c24(plVar2);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_101d236b0);
  if ((*(uint *)((long)param_1 + 0x1bec) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1bec) = *(uint *)((long)param_1 + 0x1bec) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  local_58 = DAT_101d91884;
  local_80 = thunk_FUN_1001afe48;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x81,&local_80);
  FUN_1001b4964(puVar8,1);
  local_58 = DAT_101dbd4b0;
  local_80 = thunk_FUN_100185edc;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  local_58 = DAT_101dbd4ac;
  local_80 = thunk_FUN_10018577c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  FUN_1001853c0(0x447a0000,0xbf800000,param_1);
  return param_1;
}




void thunk_FUN_100185edc(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x3f5) == '\0') {
    lVar2 = param_1 + 0x3c0;
    iVar1 = FUN_1004e36c0(lVar2,&DAT_101d91650);
    if (iVar1 != 0) goto LAB_100185f24;
  }
  lVar2 = param_1 + 0x1c98;
LAB_100185f24:
  FUN_1001b0198(param_1,lVar2,0);
  FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  return;
}




void thunk_FUN_10018577c(void)

{
  FUN_10018577c();
  return;
}




void FUN_1001853c0(undefined4 param_1,undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 local_58;
  float local_54;
  
  *(undefined4 *)(param_3 + 0x1cc8) = param_1;
  fVar6 = *(float *)(param_3 + 0x54);
  if (0.0 < param_2._0_4_) {
    FUN_100181c68(param_2._0_8_,param_3 + 0x400);
  }
  lVar1 = param_3 + 0x400;
  bVar3 = false;
  if ((*(float *)(param_3 + 0x444) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_3 + 0x440)))) {
    bVar3 = *(float *)(param_3 + 0x440) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_3 + 0x440) = 0;
    FUN_1000200a0(lVar1);
  }
  local_58 = 0;
  local_54 = fVar6;
  (**(code **)(*(long *)(param_3 + 0x400) + 0x28))(lVar1,&local_58);
  FUN_100181c18(0,*(undefined4 *)(param_3 + 0x1cc8),*(undefined4 *)(param_3 + 0x1cc8),lVar1);
  lVar2 = param_3 + 0x19b8;
  uVar5 = *(undefined4 *)(param_3 + 0x1cc8);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(uVar5,lVar2);
  bVar3 = false;
  if ((*(float *)(param_3 + 0x19fc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_3 + 0x19f8))))
  {
    bVar3 = *(float *)(param_3 + 0x19f8) == 0.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_3 + 0x19f8) = 0;
    FUN_1000200a0(lVar2);
  }
  local_58 = 0;
  local_54 = fVar6;
  (**(code **)(*(long *)(param_3 + 0x19b8) + 0x28))(lVar2,&local_58);
  lVar2 = param_3 + 0x1a90;
  fVar4 = 2.0;
  FUN_10064e47c(*(undefined4 *)(param_3 + 0x1cc8),lVar2);
  FUN_10064e3cc(lVar1);
  fVar4 = fVar4 - fVar4 * fVar6;
  if ((*(float *)(param_3 + 0x1ad0) != 0.0) || (*(float *)(param_3 + 0x1ad4) != fVar4)) {
    *(undefined4 *)(param_3 + 0x1ad0) = 0;
    *(float *)(param_3 + 0x1ad4) = fVar4;
    FUN_1000200a0(lVar2);
  }
  local_58 = 0;
  local_54 = fVar6;
  (**(code **)(*(long *)(param_3 + 0x1a90) + 0x28))(lVar2,&local_58);
  if (*(float *)(param_3 + 200) != 12.0) {
    *(undefined4 *)(param_3 + 200) = 0x41400000;
    FUN_1000200a0(param_3 + 0x88);
  }
  FUN_1001b06ec(*(float *)(param_3 + 0x1cc8) + -24.0,0,param_3);
  FUN_10065179c(*(float *)(param_3 + 0x1cc8) + -24.0,0,0x3f800000,param_3 + 0x1b68);
  *(uint *)(param_3 + 0x1bec) = *(uint *)(param_3 + 0x1bec) & 0xffffffbf;
  fVar6 = *(float *)(param_3 + 0x1ccc) + *(float *)(param_3 + 0x1ad4);
  if ((*(float *)(param_3 + 0x1ba8) != 12.0) || (*(float *)(param_3 + 0x1bac) != fVar6)) {
    *(undefined4 *)(param_3 + 0x1ba8) = 0x41400000;
    *(float *)(param_3 + 0x1bac) = fVar6;
    FUN_1000200a0(param_3 + 0x1b68);
  }
  return;
}




long * thunk_FUN_100184f78(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar8 = (undefined8 *)FUN_1001afbc0();
  *puVar8 = &PTR_FUN_10145f480;
  puVar8 = puVar8 + 0x80;
  thunk_FUN_100181304(puVar8,0);
  plVar1 = param_1 + 0x337;
  FUN_1006505b8(plVar1);
  plVar2 = param_1 + 0x352;
  FUN_1006505b8(plVar2);
  plVar3 = param_1 + 0x36d;
  thunk_FUN_100650e64(plVar3);
  FUN_1004e313c(param_1 + 0x393);
  FUN_1004e313c(param_1 + 0x395);
  FUN_1004e313c(param_1 + 0x397);
  param_1[0x399] = 0x41000000447a0000;
  param_1[0x39a] = 0x1000000003;
  param_1[0x39b] = 0;
  *(undefined8 *)((long)param_1 + 0x1ce2) = 0;
  *(undefined2 *)(param_1 + 0x39c) = 0x100;
  pcStack_80 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&pcStack_80);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  *(uint *)((long)param_1 + 0x1b14) = *(uint *)((long)param_1 + 0x1b14) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x484) = *(uint *)((long)param_1 + 0x484) & 0xffffffbf;
  iVar7 = FUN_100126c88();
  FUN_1001816d4(0,0x447a0000,0x447a0000,puVar8,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  if ((*(uint *)((long)param_1 + 0x484) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x484) = *(uint *)((long)param_1 + 0x484) & 0xffff807f;
    FUN_1000200a0(puVar8);
  }
  FUN_100650608(plVar1,&DAT_10115a164);
  uVar5 = *(uint *)((long)param_1 + 0x1a3c);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1a3c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,0xffe0e0e0);
  FUN_100650608(plVar2,&pcStack_80);
  uVar5 = *(uint *)((long)param_1 + 0x1b14);
  if ((uVar5 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1b14) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
  }
  plVar1 = param_1 + 0x22;
  bVar6 = false;
  if ((*(float *)((long)param_1 + 0x154) == 0.0) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x2a)))) {
    bVar6 = *(float *)(param_1 + 0x2a) == 0.0;
  }
  if (!bVar6) {
    param_1[0x2a] = 0;
    FUN_1000200a0(plVar1);
  }
  pcStack_80 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x22] + 0x28))(plVar1,&pcStack_80);
  plVar2 = param_1 + 0x48;
  bVar6 = false;
  if ((*(float *)((long)param_1 + 0x284) == 0.0) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x50)))) {
    bVar6 = *(float *)(param_1 + 0x50) == 0.0;
  }
  if (!bVar6) {
    param_1[0x50] = 0;
    FUN_1000200a0(plVar2);
  }
  pcStack_80 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x48] + 0x28))(plVar2,&pcStack_80);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar7 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_1001b060c(param_1,*ppuVar4,&DAT_10115a168);
  FUN_1001b0764(param_1,3);
  FUN_1001afc3c(param_1,1);
  FUN_1006515d8(plVar1,0);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffef;
  FUN_100644c24(plVar1);
  FUN_1006515d8(plVar2,0);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_100644c24(plVar2);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_101d236b0);
  if ((*(uint *)((long)param_1 + 0x1bec) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x1bec) = *(uint *)((long)param_1 + 0x1bec) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  uStack_58 = DAT_101d91884;
  pcStack_80 = thunk_FUN_1001afe48;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x81,&pcStack_80);
  FUN_1001b4964(puVar8,1);
  uStack_58 = DAT_101dbd4b0;
  pcStack_80 = thunk_FUN_100185edc;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_80);
  uStack_58 = DAT_101dbd4ac;
  pcStack_80 = thunk_FUN_10018577c;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_80);
  FUN_1001853c0(0x447a0000,0xbf800000,param_1);
  return param_1;
}




void FUN_1001855dc(long param_1)

{
  FUN_100185630(param_1,0);
  FUN_1001b0198(param_1,param_1 + 0x1c98,0);
  FUN_1000153b4(param_1 + 0x378,&DAT_101d91650);
  FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  return;
}




void FUN_100185630(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 local_44;
  
  local_44 = DAT_101d236b0;
  if (param_2 == 0) {
    local_44 = 0xffe0e0e0;
  }
  FUN_100650608(param_1 + 0x1a90,&local_44);
  if (param_2 == 0) {
    local_48 = 0xffe0e0e0;
    uVar3 = 0;
  }
  else {
    local_48 = DAT_101d236b0;
    uVar3 = 0x3f333333;
  }
  FUN_1001b05ac(param_1,&local_48);
  uVar2 = FUN_100640840(uVar3,0x3eb33333,FUN_10001f160);
  lVar1 = param_1 + 0x1b68;
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar2);
  if ((param_2 & 1) == 0) {
    FUN_1006513c0(lVar1,&DAT_101d91650);
  }
  *(char *)(param_1 + 0x1ce0) = (char)param_2;
  FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  return;
}




void FUN_100185730(long param_1,undefined8 param_2)

{
  FUN_1001b0198(param_1,param_2,0);
  FUN_1000153b4(param_1 + 0x1c98,param_2);
  FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  return;
}




void FUN_100185774(long param_1)

{
  FUN_1004e3624(param_1 + 0x378);
  return;
}




void FUN_10018577c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((((((*(char *)(param_1 + 0x1ce1) == '\0') || (iVar1 = FUN_10018588c(param_1), iVar1 != 0)) &&
        ((*(char *)(param_1 + 0x1ce2) == '\0' ||
         (iVar1 = FUN_100185914(param_1,*(undefined4 *)(param_1 + 0x1cd0)), iVar1 != 0)))) &&
       ((*(char *)(param_1 + 0x1ce3) == '\0' ||
        (iVar1 = FUN_100185a0c(param_1,*(undefined4 *)(param_1 + 0x1cd4)), iVar1 != 0)))) &&
      ((*(char *)(param_1 + 0x1ce4) == '\0' || (iVar1 = FUN_100185b04(param_1), iVar1 != 0)))) &&
     (((((*(char *)(param_1 + 0x1ce5) == '\0' || (iVar1 = FUN_100185b70(param_1), iVar1 != 0)) &&
        ((*(char *)(param_1 + 0x1ce6) == '\0' || (iVar1 = FUN_100185bdc(param_1), iVar1 != 0)))) &&
       ((*(char *)(param_1 + 0x1ce7) == '\0' || (iVar1 = FUN_100185c48(param_1), iVar1 != 0)))) &&
      (((*(char *)(param_1 + 0x1ce8) == '\0' || (iVar1 = FUN_100185cb4(param_1), iVar1 != 0)) &&
       ((*(char *)(param_1 + 0x1ce9) == '\0' || (iVar1 = FUN_100185d48(param_1), iVar1 != 0))))))))
  {
    pcVar3 = *(code **)(param_1 + 0x1cd8);
    if (pcVar3 != (code *)0x0) {
      uVar2 = FUN_1001afee4(param_1);
      iVar1 = (*pcVar3)(uVar2,param_1);
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_100185630(param_1,0);
    return;
  }
  return;
}




undefined8 FUN_10018588c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_1001afee4();
  uVar3 = FUN_1004e3654(uVar2,&DAT_101d91650);
  if ((uVar3 & 1) == 0) {
    FUN_1001afee4(param_1);
    iVar1 = FUN_1004e3634();
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_100185630(param_1,1);
  uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_EMPTY",0);
  FUN_1006513c0(param_1 + 0x1b68,uVar2);
  FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  return 0;
}




bool FUN_100185914(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1001afee4();
  uVar1 = FUN_1004e3634();
  if (uVar1 < param_2) {
    FUN_100185630(param_1,1);
    uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_TOO_SHORT",0);
    thunk_FUN_1004e439c(auStack_40,uVar2);
    FUN_1004e313c(auStack_50);
    FUN_1004e38ac(auStack_50,"%d");
    FUN_1004e3120(auStack_60,"[LEN]");
    FUN_1004e3bc4(auStack_40,0,auStack_60,auStack_50);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1006513c0(param_1 + 0x1b68,auStack_40);
    FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return param_2 <= uVar1;
}




bool FUN_100185a0c(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1001afee4();
  uVar1 = FUN_1004e3634();
  if (param_2 < uVar1) {
    FUN_100185630(param_1,1);
    uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_TOO_LONG",0);
    thunk_FUN_1004e439c(auStack_40,uVar2);
    FUN_1004e313c(auStack_50);
    FUN_1004e38ac(auStack_50,"%d");
    FUN_1004e3120(auStack_60,"[LEN]");
    FUN_1004e3bc4(auStack_40,0,auStack_60,auStack_50);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1006513c0(param_1 + 0x1b68,auStack_40);
    FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return uVar1 <= param_2;
}




ulong FUN_100185b04(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_1001afee4();
  uVar1 = FUN_1000f1c50();
  if ((uVar1 & 1) == 0) {
    FUN_100185630(param_1,1);
    uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_NO_SPACES",0);
    FUN_1006513c0(param_1 + 0x1b68,uVar2);
    FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  }
  return uVar1;
}




ulong FUN_100185b70(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_1001afee4();
  uVar1 = FUN_1000f1cbc();
  if ((uVar1 & 1) == 0) {
    FUN_100185630(param_1,1);
    uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_ALPHA_NUM",0);
    FUN_1006513c0(param_1 + 0x1b68,uVar2);
    FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  }
  return uVar1;
}




ulong FUN_100185bdc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_1001afee4();
  uVar1 = FUN_1000f1d48();
  if ((uVar1 & 1) == 0) {
    FUN_100185630(param_1,1);
    uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_NUM",0);
    FUN_1006513c0(param_1 + 0x1b68,uVar2);
    FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  }
  return uVar1;
}




ulong FUN_100185c48(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_1001afee4();
  uVar1 = FUN_1000f1db4();
  if ((uVar1 & 1) == 0) {
    FUN_100185630(param_1,1);
    uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_ASCII",0);
    FUN_1006513c0(param_1 + 0x1b68,uVar2);
    FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  }
  return uVar1;
}




undefined8 FUN_100185cb4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1004e36c0(param_1 + 0x1ca8,&DAT_101d91650);
  if (iVar1 != 0) {
    uVar2 = FUN_1001afee4(param_1);
    iVar1 = FUN_1004e36c0(uVar2,param_1 + 0x1ca8);
    if (iVar1 != 0) {
      FUN_100185630(param_1,1);
      uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_DOES_NOT_MATCH",0);
      FUN_1006513c0(param_1 + 0x1b68,uVar2);
      FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
      return 0;
    }
  }
  return 1;
}




undefined8 FUN_100185d48(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1004e36c0(param_1 + 0x1cb8,&DAT_101d91650);
  if (iVar1 != 0) {
    uVar2 = FUN_1001afee4(param_1);
    iVar1 = FUN_1004e3654(uVar2,param_1 + 0x1cb8);
    if (iVar1 != 0) {
      FUN_100185630(param_1,1);
      uVar2 = FUN_1004e0150("GENERIC_FORM_ERROR_DOES_NOT_CHANGE",0);
      FUN_1006513c0(param_1 + 0x1b68,uVar2);
      FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
      return 0;
    }
  }
  return 1;
}




undefined1 FUN_100185ddc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ce0);
}




void FUN_100185de8(long param_1)

{
  FUN_1006513c0(param_1 + 0x1b68);
  FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  return;
}




void FUN_100185e1c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1ccc) = param_1;
  FUN_1001853c0(*(undefined4 *)(param_2 + 0x1cc8),0xbf800000);
  return;
}




void FUN_100185e2c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1ce1) = param_2;
  return;
}




void FUN_100185e38(long param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1ce2) = param_2;
  *(undefined4 *)(param_1 + 0x1cd0) = param_3;
  return;
}




void FUN_100185e48(long param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1ce3) = param_2;
  *(undefined4 *)(param_1 + 0x1cd4) = param_3;
  return;
}




void FUN_100185e58(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1ce5) = param_2;
  return;
}




void FUN_100185e64(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1ce6) = param_2;
  return;
}




void FUN_100185e70(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1ce7) = param_2;
  return;
}




void FUN_100185e7c(long param_1,undefined1 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x1ce8) = param_2;
  FUN_1000153b4(param_1 + 0x1ca8,param_3);
  return;
}




void FUN_100185e94(long param_1,undefined1 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x1ce9) = param_2;
  FUN_1000153b4(param_1 + 0x1cb8,param_3);
  return;
}




void FUN_100185eac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1cd8) = param_2;
  return;
}




undefined4 FUN_100185eb4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1cc8);
  FUN_10064259c(param_1 + 0x400);
  return uVar1;
}




void FUN_100185edc(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x3f5) == '\0') {
    lVar2 = param_1 + 0x3c0;
    iVar1 = FUN_1004e36c0(lVar2,&DAT_101d91650);
    if (iVar1 != 0) goto LAB_100185f24;
  }
  lVar2 = param_1 + 0x1c98;
LAB_100185f24:
  FUN_1001b0198(param_1,lVar2,0);
  FUN_1001853c0(*(undefined4 *)(param_1 + 0x1cc8),0xbf800000,param_1);
  return;
}




void FUN_100185f44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145f480;
  if ((void *)param_1[0x398] != (void *)0x0) {
    operator_delete__((void *)param_1[0x398]);
    param_1[0x398] = 0;
    param_1[0x397] = 0;
  }
  if ((void *)param_1[0x396] != (void *)0x0) {
    operator_delete__((void *)param_1[0x396]);
    param_1[0x396] = 0;
    param_1[0x395] = 0;
  }
  if ((void *)param_1[0x394] != (void *)0x0) {
    operator_delete__((void *)param_1[0x394]);
    param_1[0x394] = 0;
    param_1[0x393] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x36d);
  FUN_10064e2bc(param_1 + 0x352);
  FUN_10064e2bc(param_1 + 0x337);
  FUN_10003bd40(param_1 + 0x80);
  FUN_100186088(param_1);
  return;
}




void FUN_100185fe4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145f480;
  if ((void *)param_1[0x398] != (void *)0x0) {
    operator_delete__((void *)param_1[0x398]);
    param_1[0x398] = 0;
    param_1[0x397] = 0;
  }
  if ((void *)param_1[0x396] != (void *)0x0) {
    operator_delete__((void *)param_1[0x396]);
    param_1[0x396] = 0;
    param_1[0x395] = 0;
  }
  if ((void *)param_1[0x394] != (void *)0x0) {
    operator_delete__((void *)param_1[0x394]);
    param_1[0x394] = 0;
    param_1[0x393] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x36d);
  FUN_10064e2bc(param_1 + 0x352);
  FUN_10064e2bc(param_1 + 0x337);
  FUN_10003bd40(param_1 + 0x80);
  pvVar1 = (void *)FUN_100186088(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100186088(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100186088_10145f580;
  FUN_1001e7b3c(param_1 + 0x7e);
  if ((void *)param_1[0x79] != (void *)0x0) {
    operator_delete__((void *)param_1[0x79]);
    param_1[0x79] = 0;
    param_1[0x78] = 0;
  }
  if ((void *)param_1[0x77] != (void *)0x0) {
    operator_delete__((void *)param_1[0x77]);
    param_1[0x77] = 0;
    param_1[0x76] = 0;
  }
  if ((void *)param_1[0x75] != (void *)0x0) {
    operator_delete__((void *)param_1[0x75]);
    param_1[0x75] = 0;
    param_1[0x74] = 0;
  }
  if ((void *)param_1[0x73] != (void *)0x0) {
    operator_delete__((void *)param_1[0x73]);
    param_1[0x73] = 0;
    param_1[0x72] = 0;
  }
  if ((void *)param_1[0x70] != (void *)0x0) {
    operator_delete__((void *)param_1[0x70]);
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
  }
  *param_1 = &PTR_FUN_101463a58;
  lVar1 = 0x240;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x20);
  FUN_10064230c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100186088(void)

{
  FUN_100186088();
  return;
}




void FUN_100186158(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100186088();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10018616c(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_1001e1cf0();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




undefined8 FUN_1001861f4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_100126d70();
  if ((iVar3 == 0xf) || (iVar3 == 8)) {
    uVar4 = FUN_1004e3634(param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    ppuVar1 = &PTR_DAT_10184e4d8;
    if (iVar3 != 8) {
      ppuVar1 = (undefined **)0x0;
    }
    ppuVar2 = &PTR_DAT_10184e788;
    if (iVar3 != 0xf) {
      ppuVar2 = ppuVar1;
    }
    FUN_1004e313c(auStack_40);
    if (*ppuVar2 != (undefined *)0x0) {
      uVar5 = 1;
      do {
        FUN_1004e3318(auStack_40);
        iVar3 = FUN_1004e3940(param_1,0,auStack_40);
        if (iVar3 != 0) {
          if (local_38 != (void *)0x0) {
            operator_delete__(local_38);
          }
          return 1;
        }
        ppuVar1 = ppuVar2 + uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (*ppuVar1 != (undefined *)0x0);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return 0;
}




void FUN_1001862c4(undefined8 param_1)

{
  FUN_10001549c(param_1,"guid");
  return;
}




void FUN_1001862d4(undefined8 param_1)

{
  FUN_10001549c(param_1,"useKarmaFiltering");
  return;
}




long * FUN_1001862ec(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar1[0x11] = &PTR_FUN_10145fe30;
  FUN_10014f4a0(puVar1 + 0x12);
  *param_1 = (long)&PTR_thunk_FUN_100186554_10145f680;
  param_1[0x11] = (long)&PTR_FUN_10145f7f0;
  param_1[0x12] = (long)&PTR_FUN_10145f850;
  FUN_1006421a8(param_1 + 0x15);
  param_1[0x15] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x26);
  FUN_10053077c(param_1 + 0x5a,0);
  FUN_1001890a0(param_1 + 0x101);
  FUN_1006421a8(param_1 + 0x438);
  param_1[0x438] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x449);
  thunk_FUN_1001c0c34(param_1 + 0x46f,0);
  FUN_1006421a8(param_1 + 0x51e);
  param_1[0x51e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x52f);
  thunk_FUN_100181304(param_1 + 0x555,0);
  param_1[0x80e] = 0;
  param_1[0x80d] = 0;
  param_1[0x80c] = 0;
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar3 = DAT_101d911a0;
    puVar1 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001896c0();
    }
  }
  else {
    uVar3 = (ulong)DAT_101d911a8._7_1_;
    puVar1 = &DAT_101d91198;
  }
  if (uVar3 < 0x17) {
    plVar2 = param_1 + 0x80f;
    *(char *)((long)param_1 + 0x408f) = (char)uVar3;
    if (uVar3 == 0) goto LAB_10018645c;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    plVar2 = operator_new(uVar4);
    param_1[0x80f] = (long)plVar2;
    param_1[0x811] = uVar4 | 0x8000000000000000;
    param_1[0x810] = uVar3;
  }
  _memcpy(plVar2,puVar1,uVar3);
LAB_10018645c:
  *(undefined1 *)((long)plVar2 + uVar3) = 0;
  param_1[0x815] = 0;
  param_1[0x814] = 0;
  param_1[0x813] = 0;
  param_1[0x812] = 0;
  param_1[0x816] = param_2;
  FUN_1004e313c(param_1 + 0x817);
  param_1[0x819] = 0;
  param_1[0x81a] = 0xc8000003e8;
  *(undefined4 *)(param_1 + 0x81b) = 0x100;
  FUN_1004e3004(param_1 + 0x81c);
  *(undefined1 *)((long)param_1 + 0x40d9) = 1;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  (**(code **)(*param_1 + 0xf0))(param_1);
  return param_1;
}




void FUN_1001864e4(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  *(char *)(param_1 + 0x40d9) = (char)param_2;
  if (param_2 == 0) {
    uVar1 = FUN_10015d3f8();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      uVar1 = *(uint *)(param_1 + 0x84);
      goto LAB_100186538;
    }
    FUN_10015d3ec();
    dVar3 = (double)FUN_1001664b0();
    uVar1 = *(uint *)(param_1 + 0x84);
    if (dVar3 <= 0.0) {
      uVar2 = 0;
      goto LAB_100186538;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x84);
  }
  uVar2 = 4;
LAB_100186538:
  *(uint *)(param_1 + 0x84) = uVar2 | uVar1 & 0xfffffffb;
  return;
}




long * thunk_FUN_1001862ec(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar1[0x11] = &PTR_FUN_10145fe30;
  FUN_10014f4a0(puVar1 + 0x12);
  *param_1 = (long)&PTR_thunk_FUN_100186554_10145f680;
  param_1[0x11] = (long)&PTR_FUN_10145f7f0;
  param_1[0x12] = (long)&PTR_FUN_10145f850;
  FUN_1006421a8(param_1 + 0x15);
  param_1[0x15] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x26);
  FUN_10053077c(param_1 + 0x5a,0);
  FUN_1001890a0(param_1 + 0x101);
  FUN_1006421a8(param_1 + 0x438);
  param_1[0x438] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x449);
  thunk_FUN_1001c0c34(param_1 + 0x46f,0);
  FUN_1006421a8(param_1 + 0x51e);
  param_1[0x51e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x52f);
  thunk_FUN_100181304(param_1 + 0x555,0);
  param_1[0x80e] = 0;
  param_1[0x80d] = 0;
  param_1[0x80c] = 0;
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar3 = DAT_101d911a0;
    puVar1 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001896c0();
    }
  }
  else {
    uVar3 = (ulong)DAT_101d911a8._7_1_;
    puVar1 = &DAT_101d91198;
  }
  if (uVar3 < 0x17) {
    plVar2 = param_1 + 0x80f;
    *(char *)((long)param_1 + 0x408f) = (char)uVar3;
    if (uVar3 == 0) goto LAB_10018645c;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    plVar2 = operator_new(uVar4);
    param_1[0x80f] = (long)plVar2;
    param_1[0x811] = uVar4 | 0x8000000000000000;
    param_1[0x810] = uVar3;
  }
  _memcpy(plVar2,puVar1,uVar3);
LAB_10018645c:
  *(undefined1 *)((long)plVar2 + uVar3) = 0;
  param_1[0x815] = 0;
  param_1[0x814] = 0;
  param_1[0x813] = 0;
  param_1[0x812] = 0;
  param_1[0x816] = param_2;
  FUN_1004e313c(param_1 + 0x817);
  param_1[0x819] = 0;
  param_1[0x81a] = 0xc8000003e8;
  *(undefined4 *)(param_1 + 0x81b) = 0x100;
  FUN_1004e3004(param_1 + 0x81c);
  *(undefined1 *)((long)param_1 + 0x40d9) = 1;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 4;
  (**(code **)(*param_1 + 0xf0))(param_1);
  return param_1;
}




void FUN_100186554(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_60;
  code *pcStack_58;
  
  *param_1 = &PTR_thunk_FUN_100186554_10145f680;
  param_1[0x11] = &PTR_FUN_10145f7f0;
  param_1[0x12] = &PTR_FUN_10145f850;
  FUN_100186730(param_1,1);
  pcStack_58 = thunk_FUN_100186ba4;
  local_60 = param_1;
  FUN_100643a8c(&local_60);
  if ((long *)param_1[0x80c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x80c] + 8))();
  }
  if ((void *)param_1[0x818] != (void *)0x0) {
    operator_delete__((void *)param_1[0x818]);
    param_1[0x818] = 0;
    param_1[0x817] = 0;
  }
  if (*(char *)((long)param_1 + 0x40a7) < '\0') {
    operator_delete((void *)param_1[0x812]);
  }
  if (*(char *)((long)param_1 + 0x408f) < '\0') {
    operator_delete((void *)param_1[0x80f]);
  }
  if ((void *)param_1[0x80e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x80e]);
    param_1[0x80e] = 0;
    param_1[0x80d] = 0;
  }
  FUN_10003bd40(param_1 + 0x555);
  thunk_FUN_100651068(param_1 + 0x52f);
  FUN_10064221c(param_1 + 0x51e);
  lVar1 = 0;
  param_1[0x46f] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x27f0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x28a8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x28c0);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x27f0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x46f);
  thunk_FUN_100651068(param_1 + 0x449);
  FUN_10064221c(param_1 + 0x438);
  param_1[0x101] = &PTR_FUN_10145fbe8;
  FUN_10003bd40(param_1 + 0x181);
  FUN_100186088(param_1 + 0x101);
  thunk_FUN_100530784(param_1 + 0x5a);
  FUN_10064e2bc(param_1 + 0x26);
  FUN_10064221c(param_1 + 0x15);
  FUN_10014f51c(param_1 + 0x12);
  FUN_10064221c(param_1);
  return;
}




void FUN_100186730(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    FUN_1001876ec(param_1);
  }
  if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x30))(), iVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x4060) + 0x28))();
  }
  std::string::operator=((string *)(param_1 + 0x4078),(string *)&DAT_101d91198);
  return;
}




void FUN_100186790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145fbe8;
  FUN_10003bd40(param_1 + 0x80);
  FUN_100186088(param_1);
  return;
}




void thunk_FUN_100186554(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_60;
  code *pcStack_58;
  
  *param_1 = &PTR_thunk_FUN_100186554_10145f680;
  param_1[0x11] = &PTR_FUN_10145f7f0;
  param_1[0x12] = &PTR_FUN_10145f850;
  FUN_100186730(param_1,1);
  pcStack_58 = thunk_FUN_100186ba4;
  puStack_60 = param_1;
  FUN_100643a8c(&puStack_60);
  if ((long *)param_1[0x80c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x80c] + 8))();
  }
  if ((void *)param_1[0x818] != (void *)0x0) {
    operator_delete__((void *)param_1[0x818]);
    param_1[0x818] = 0;
    param_1[0x817] = 0;
  }
  if (*(char *)((long)param_1 + 0x40a7) < '\0') {
    operator_delete((void *)param_1[0x812]);
  }
  if (*(char *)((long)param_1 + 0x408f) < '\0') {
    operator_delete((void *)param_1[0x80f]);
  }
  if ((void *)param_1[0x80e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x80e]);
    param_1[0x80e] = 0;
    param_1[0x80d] = 0;
  }
  FUN_10003bd40(param_1 + 0x555);
  thunk_FUN_100651068(param_1 + 0x52f);
  FUN_10064221c(param_1 + 0x51e);
  lVar1 = 0;
  param_1[0x46f] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x27f0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x28a8) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x28c0);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x27f0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x46f);
  thunk_FUN_100651068(param_1 + 0x449);
  FUN_10064221c(param_1 + 0x438);
  param_1[0x101] = &PTR_FUN_10145fbe8;
  FUN_10003bd40(param_1 + 0x181);
  FUN_100186088(param_1 + 0x101);
  thunk_FUN_100530784(param_1 + 0x5a);
  FUN_10064e2bc(param_1 + 0x26);
  FUN_10064221c(param_1 + 0x15);
  FUN_10014f51c(param_1 + 0x12);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001867c8(long param_1)

{
  FUN_100186554(param_1 + -0x90);
  return;
}




void FUN_1001867d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100186554();
  operator_delete(pvVar1);
  return;
}




void FUN_1001867e4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100186554(param_1 + -0x90);
  operator_delete(pvVar1);
  return;
}




void FUN_1001867fc(code *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  pcVar1 = param_1 + 0xa8;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  pcVar2 = param_1 + 0x130;
  FUN_100642bd8(pcVar1,pcVar2,1);
  FUN_100642bd8(pcVar2,param_1 + 0x2d0,1);
  pcVar3 = param_1 + 0x808;
  FUN_100642bd8(pcVar1,pcVar3,1);
  pcVar1 = param_1 + 0x21c0;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  FUN_100642bd8(pcVar1,param_1 + 0x2248,1);
  FUN_100642bd8(pcVar1,param_1 + 0x2378,1);
  pcVar1 = param_1 + 0x28f0;
  (**(code **)(*(long *)param_1 + 0x78))(param_1,pcVar1,1);
  FUN_100642bd8(pcVar1,param_1 + 0x2978,1);
  pcVar4 = param_1 + 0x2aa8;
  FUN_100642bd8(pcVar1,pcVar4,1);
  uVar6 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(pcVar3,uVar6,0);
  local_58 = DAT_101dbd4ac;
  local_80 = thunk_FUN_1001886fc;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0x810,&local_80);
  local_58 = DAT_101dbd4b0;
  local_80 = thunk_FUN_100188b18;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0x810,&local_80);
  uVar5 = DAT_101d91884;
  local_58 = DAT_101d91884;
  local_80 = thunk_FUN_100188c14;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0xc10,&local_80);
  param_1[0x21ba] = (code)0x0;
  FUN_100654488(pcVar2,1);
  FUN_100530adc(param_1 + 0x2d0,0,1);
  *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & 0xfffffffb;
  uVar6 = FUN_1004e0150("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_1006513c0(param_1 + 0x2248,uVar6);
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xfffffffb;
  uVar6 = FUN_1004e0150("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_1006513c0(param_1 + 0x2978,uVar6);
  uVar6 = FUN_1004e0150("MENU_PARTY_RECONNECT_BUTTON",0);
  FUN_1001816d4(0,DAT_101854908,DAT_101854908,pcVar4,0,uVar6,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100651594(param_1 + 0x31c0,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  local_80 = (code *)CONCAT44(local_80._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,pcVar4,&local_80);
  local_58 = uVar5;
  local_80 = FUN_100186b68;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  pcStack_78 = param_1;
  FUN_10001554c(param_1 + 0x2ab0,&local_80);
  FUN_1001b495c(0,pcVar4);
  FUN_1001afd98(pcVar3,&DAT_101d91650,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0x101);
  pcStack_78 = thunk_FUN_100186ba4;
  local_80 = param_1;
  FUN_100643618(0x3f000000,&local_80,0,1);
  return;
}




void thunk_FUN_1001886fc(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_180 [8];
  void *pvStack_178;
  undefined1 auStack_170 [8];
  void *pvStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  void *pvStack_140;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(long **)(param_1 + 0x4060) == (long *)0x0) ||
     (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x38))(), iVar5 == 0))
  goto LAB_100188a54;
  plVar13 = (long *)(param_1 + 0x4078);
  bVar4 = *(byte *)(param_1 + 0x408f);
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x4080);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar14 = (long *)*plVar13;
    if (-1 < (char)bVar4) {
      plVar14 = plVar13;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(plVar14,pbVar12,sVar1), iVar5 == 0)) goto LAB_100188a54;
    }
    else {
      if (sVar1 == 0) goto LAB_100188a54;
      if ((uint)*pbVar12 == ((uint)(long *)*plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x4079);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_100188a54;
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar12);
      }
    }
  }
  pppuStack_160 = (undefined8 ****)0x0;
  uStack_158 = 0;
  lStack_150 = 0;
  uVar7 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xb78) & 1) * 0x130 + 0x9e8);
  thunk_FUN_1004e439c(auStack_170,uVar7);
  iVar5 = FUN_1004e3634(auStack_170);
  if (iVar5 != 0) {
    iVar5 = FUN_1004e3648(auStack_170,0);
    if (iVar5 == 0x2f) {
      FUN_1004e3120(auStack_148,"/");
      FUN_1004e3120(auStack_180,"\\");
      FUN_1004e3bc4(auStack_170,0,auStack_148,auStack_180);
      if (pvStack_178 != (void *)0x0) {
        operator_delete__(pvStack_178);
      }
      if (pvStack_140 != (void *)0x0) {
        operator_delete__(pvStack_140);
      }
    }
    uVar6 = FUN_1004e3634(auStack_170);
    if (*(uint *)(param_1 + 0x40d0) < uVar6) {
      FUN_1004e4154(auStack_148,auStack_170,0);
      FUN_1000153b4(auStack_170,auStack_148);
      if (pvStack_140 != (void *)0x0) {
        operator_delete__(pvStack_140);
      }
    }
    uVar10 = FUN_1001861f4(auStack_170);
    if ((uVar10 & 1) == 0) {
      FUN_1004e357c(auStack_170,&pppuStack_160);
      plVar14 = plVar13;
      if (*(char *)(param_1 + 0x408f) < '\0') {
        plVar14 = (long *)*plVar13;
      }
      ppppuVar3 = (undefined8 ****)pppuStack_160;
      if (-1 < lStack_150) {
        ppppuVar3 = &pppuStack_160;
      }
      (**(code **)(**(long **)(param_1 + 0x4060) + 0x70))
                (*(long **)(param_1 + 0x4060),plVar14,ppppuVar3);
      plVar14 = *(long **)(param_1 + 0x40b0);
      if (plVar14 != (long *)0x0) {
        uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
        if (*(char *)(param_1 + 0x408f) < '\0') {
          plVar13 = (long *)*plVar13;
        }
        ppppuVar3 = (undefined8 ****)pppuStack_160;
        if (-1 < lStack_150) {
          ppppuVar3 = &pppuStack_160;
        }
        uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,uVar7,plVar13,ppppuVar3);
        if ((uVar10 & 1) != 0) goto LAB_100188a38;
      }
      auStack_148[0] = 0;
      if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
         (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))(), iVar5 == 2)) {
        lVar8 = FUN_1004f1a74(0);
        FUN_1004d3350((double)lVar8,auStack_148,0x100);
      }
      uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar9 = auStack_170;
    }
    else {
      if (((DAT_101e3d5c0 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101e3d5c0), iVar5 != 0))
      {
        FUN_1004e3340(&DAT_101e3d5b0,&DAT_101157f90);
        ___cxa_atexit(FUN_100046198,&DAT_101e3d5b0,0x100000000);
        ___cxa_guard_release(&DAT_101e3d5c0);
      }
      auStack_148[0] = 0;
      if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
         (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))(), iVar5 == 2)) {
        lVar8 = FUN_1004f1a74(0);
        FUN_1004d3350((double)lVar8,auStack_148,0x100);
      }
      uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar9 = &DAT_101e3d5b0;
    }
    FUN_100187144(param_1,uVar7,puVar9,auStack_148,1,0);
  }
LAB_100188a38:
  if (pvStack_168 != (void *)0x0) {
    operator_delete__(pvStack_168);
  }
  if (lStack_150 < 0) {
    operator_delete(pppuStack_160);
  }
LAB_100188a54:
  uVar7 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(param_1 + 0x808,uVar7,0);
  *(undefined1 *)(param_1 + 0x40da) = 0;
  FUN_100530ad0(0,0,param_1 + 0x2d0);
  FUN_10018762c(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 != lStack_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void thunk_FUN_100188b18(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  thunk_FUN_1004e439c(auStack_40,param_1 + 0xbc8);
  iVar1 = FUN_1004e36c0(auStack_40,&DAT_101d91650);
  if (iVar1 == 0) {
    uVar3 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
    FUN_1001b0198(param_1 + 0x808,uVar3,0);
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_1004e3634(auStack_40);
    if (*(uint *)(param_1 + 0x40d0) < uVar2) {
      FUN_1004e4154(auStack_50,auStack_40,0);
      FUN_1000153b4(auStack_40,auStack_50);
      if (pvStack_48 != (void *)0x0) {
        operator_delete__(pvStack_48);
      }
    }
    FUN_1001b0198(param_1 + 0x808,param_1 + 0xbc8,0);
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x40da) = uVar4;
  FUN_100530ad0(0,0,param_1 + 0x2d0);
  FUN_10018762c(param_1);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  return;
}




void thunk_FUN_100188c14(undefined8 param_1)

{
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_28 = FUN_100644a94("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_101d23788 != 0) {
    pcStack_50 = thunk_FUN_100188c7c;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    uStack_48 = param_1;
    FUN_10001554c(DAT_101d23788 + 8,&pcStack_50);
  }
  return;
}




void FUN_100186b68(long param_1)

{
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xfffffffb;
  FUN_100186730(param_1,1);
  FUN_100186c14(param_1,&DAT_101d91650);
  return;
}




void FUN_100186ba4(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x40db) != '\0') {
    FUN_100186c14(param_1,&DAT_101d91650);
  }
  if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x30))(), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100186c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4060) + 0x68))(0x3a83126f);
    return;
  }
  return;
}




void FUN_100186f58(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100186f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100186f64(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      FUN_1001afec8(param_1 + 0x101,1);
    }
    else if (((long *)param_1[0x80c] == (long *)0x0) ||
            (uVar2 = (**(code **)(*(long *)param_1[0x80c] + 0x30))(), (uVar2 & 1) == 0)) {
      FUN_100186c14(param_1,&DAT_101d91650);
    }
                    /* WARNING: Could not recover jumptable at 0x000100186fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




void FUN_100186fe0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      FUN_1001afec8(param_1 + 0x808,1);
      FUN_1000153b4(param_1 + 0xbc8,&DAT_101d91650);
      *(undefined1 *)(param_1 + 0x40da) = 0;
    }
    else if ((*(long **)(param_1 + 0x4060) == (long *)0x0) ||
            (uVar2 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x30))(), (uVar2 & 1) == 0)) {
      FUN_100186c14(param_1,&DAT_101d91650);
      return;
    }
  }
  return;
}




void FUN_100187060(long param_1)

{
  FUN_1000153b4(param_1 + 0xbc8,&DAT_101d91650);
  *(undefined1 *)(param_1 + 0x40da) = 0;
  return;
}




void FUN_100187094(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x815) = param_1;
  *(undefined4 *)((long)param_3 + 0x40ac) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001001870ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x150))();
  return;
}




void FUN_1001870b0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_1001afc3c(param_1 + 0x808);
  uVar1 = *(uint *)(param_1 + 0x88c);
  uVar2 = 0xff;
  if (param_2 == 0) {
    uVar2 = 0x4c;
  }
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0x88c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_1000200a0(param_1 + 0x808);
  return;
}




void FUN_100187120(long param_1,undefined8 param_2,int param_3)

{
  if (*(char *)(param_1 + 0x40da) == '\0' || param_3 != 0) {
    FUN_1001b0198(param_1 + 0x808,param_2,0);
    return;
  }
  return;
}




void FUN_100187144(long param_1,undefined8 *param_2,undefined8 param_3,char *param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  double dVar14;
  float fVar15;
  undefined8 local_a0;
  void *local_98 [2];
  char local_81;
  long *local_80;
  void *local_78;
  
  dVar14 = 0.0;
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    bVar5 = false;
  }
  else {
    dVar14 = (double)FUN_1004d2f54(param_4);
    bVar5 = true;
  }
  iVar6 = FUN_1004e3654(param_1 + 0x40b8,param_2);
  puVar10 = param_2;
  if (((iVar6 != 0) && (dVar14 < *(double *)(param_1 + 0x40c8) + 300.0)) && ((int)param_6 == 0)) {
    puVar10 = &DAT_101d91650;
  }
  if ((param_6 & 1) == 0) {
    FUN_1000153b4(param_1 + 0x40b8,param_2);
    *(double *)(param_1 + 0x40c8) = dVar14;
  }
  plVar7 = operator_new(0x408);
  if (bVar5) {
    FUN_1001874c8(local_98,param_1,param_4);
    FUN_1004e3170(&local_80,local_98);
  }
  else {
    thunk_FUN_1004e439c(&local_80,&DAT_101d91650);
  }
  FUN_1001892e8(plVar7,puVar10,param_3,&local_80,param_5,param_6);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = (long *)0x0;
    local_78 = (void *)0x0;
  }
  puVar2 = (uint *)(param_1 + 0x4068);
  if ((bVar5) && (local_81 < '\0')) {
    operator_delete(local_98[0]);
  }
  local_80 = plVar7;
  fVar11 = (float)FUN_10064e3cc(param_1 + 0x130);
  uVar13 = 0x3f4ccccd;
  uVar12 = FUN_1006511d0(plVar7 + 0x5b);
  uVar12 = NEON_fminnm(fVar11 * 0.8,uVar12);
  FUN_100651708(uVar12,plVar7 + 0x5b,1);
  uVar12 = (**(code **)(*plVar7 + 0x58))(plVar7,0,0,1,1);
  local_a0 = CONCAT44((int)uVar13,uVar12);
  FUN_10064e48c(plVar7,&local_a0);
  if ((int)param_5 == 0) {
    local_a0 = 0;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_a0);
    if (*(float *)(plVar7 + 8) == 0.0) goto LAB_1001873a4;
    *(undefined4 *)(plVar7 + 8) = 0;
  }
  else {
    if ((*(float *)(plVar7 + 0x65) != 1.0) || (*(float *)((long)plVar7 + 0x32c) != 0.0)) {
      plVar7[0x65] = 0x3f800000;
      FUN_1000200a0(plVar7 + 0x5b);
    }
    if ((*(float *)(plVar7 + 0x3f) != 1.0) || (*(float *)((long)plVar7 + 0x1fc) != 0.0)) {
      plVar7[0x3f] = 0x3f800000;
      FUN_1000200a0(plVar7 + 0x35);
    }
    fVar11 = (float)FUN_10064e3cc(param_1 + 0x130);
    uVar13 = (ulong)(uint)*(float *)(plVar7 + 8);
    if (*(float *)(plVar7 + 8) == fVar11) goto LAB_1001873a4;
    *(float *)(plVar7 + 8) = fVar11;
  }
  FUN_1000200a0(plVar7);
LAB_1001873a4:
  FUN_100187540(puVar2,&local_80);
  FUN_1005308f8(param_1 + 0x2d0,local_80,1);
  uVar4 = *puVar2 - *(int *)(param_1 + 0x40d4);
  if (0 < (int)uVar4) {
    lVar9 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x4070);
      if (*(long **)(lVar8 + lVar9) != (long *)0x0) {
        (**(code **)(**(long **)(lVar8 + lVar9) + 8))();
        lVar8 = *(long *)(param_1 + 0x4070);
      }
      *(undefined8 *)(lVar8 + lVar9) = 0;
      lVar9 = lVar9 + 8;
    } while ((ulong)uVar4 * 8 - lVar9 != 0);
    FUN_1001875c0(puVar2,*(long *)(param_1 + 0x4070),*(long *)(param_1 + 0x4070) + (ulong)uVar4 * 8)
    ;
  }
  if (*(float *)(**(long **)(param_1 + 0x4070) + 0x44) != 0.0) {
    *(undefined4 *)(**(long **)(param_1 + 0x4070) + 0x44) = 0;
    FUN_1000200a0();
  }
  if (1 < *puVar2) {
    lVar9 = 0;
    do {
      fVar11 = (float)uVar13;
      plVar7 = (long *)(*(long *)(param_1 + 0x4070) + lVar9 * 8);
      plVar3 = (long *)*plVar7;
      lVar8 = plVar7[1];
      fVar15 = *(float *)((long)plVar3 + 0x44);
      (**(code **)(*plVar3 + 0x48))();
      fVar11 = fVar15 + 20.0 + fVar11;
      uVar13 = (ulong)(uint)*(float *)(lVar8 + 0x44);
      if (*(float *)(lVar8 + 0x44) != fVar11) {
        *(float *)(lVar8 + 0x44) = fVar11;
        FUN_1000200a0(lVar8);
      }
      uVar1 = lVar9 + 2;
      lVar9 = lVar9 + 1;
    } while (uVar1 < *puVar2);
  }
  FUN_10018762c(param_1);
  return;
}




void FUN_1001874c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2f54(param_3);
  FUN_1004d32ec(auStack_128,0x100,"%H:%M %Y-%m-%d");
  FUN_10001549c(param_1,auStack_128);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100187540(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1001896d0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001875c0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_10018762c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_3 + 0x2d0;
  lVar2 = param_3 + 0x130;
  uVar3 = FUN_10064e3cc(lVar2);
  FUN_100530aa0(lVar1,1,0,1,1);
  FUN_10053093c(uVar3,lVar1);
  FUN_100530a94(lVar1);
  fVar4 = param_2;
  FUN_10064e3cc(lVar2);
  if (fVar4 < param_2) {
    FUN_10064e3cc(lVar2);
    fVar5 = fVar4;
    FUN_100530a94(lVar1);
    if (*(float *)(param_3 + 0x314) != fVar4 - fVar5) {
      *(float *)(param_3 + 0x314) = fVar4 - fVar5;
      FUN_1000200a0(lVar1);
      return;
    }
  }
  return;
}




void FUN_1001876ec(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)(param_1 + 0x4068);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x4070) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x4070) + uVar4 * 8) = 0;
        uVar3 = *puVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x4070) != 0) {
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x40c8) = 0;
  FUN_1000153b4(param_1 + 0x40b8,&DAT_101d91650);
  return;
}




void FUN_100187774(long param_1,string *param_2)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  
  this = (string *)(param_1 + 0x4078);
  std::string::operator=(this,param_2);
  bVar4 = *(byte *)(param_1 + 0x408f);
  uVar6 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x4080);
  if (-1 < (char)bVar4) {
    sVar1 = uVar6;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar3 = *(string **)this;
    if (-1 < (char)bVar4) {
      psVar3 = this;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if (-1 < (char)bVar4) {
      if (sVar1 == 0) {
LAB_100187854:
        uVar9 = 0;
        uVar7 = *(uint *)(param_1 + 0x88c);
        goto LAB_100187860;
      }
      if ((uint)*pbVar10 == ((uint)*(string **)this & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x4079);
        do {
          uVar6 = uVar6 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar6 == 0) goto LAB_100187854;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar10);
      }
      goto LAB_100187828;
    }
    if (sVar1 == 0) goto LAB_100187854;
    iVar5 = _memcmp(psVar3,pbVar10,sVar1);
    uVar7 = *(uint *)(param_1 + 0x88c);
    if (iVar5 == 0) {
      uVar9 = 0;
      goto LAB_100187860;
    }
  }
  else {
LAB_100187828:
    uVar7 = *(uint *)(param_1 + 0x88c);
  }
  uVar9 = 4;
LAB_100187860:
  *(uint *)(param_1 + 0x88c) = uVar9 | uVar7 & 0xfffffffb;
  return;
}




void FUN_100187878(long param_1,string *param_2,ulong param_3)

{
  size_t sVar1;
  size_t sVar2;
  string sVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  string *psVar8;
  byte *pbVar9;
  uint uVar10;
  string *psVar11;
  byte *pbVar12;
  
  if ((param_3 & 1) == 0) {
    sVar3 = param_2[0x17];
    uVar6 = (ulong)(byte)sVar3;
    sVar1 = *(size_t *)(param_2 + 8);
    if (-1 < (char)sVar3) {
      sVar1 = uVar6;
    }
    bVar4 = *(byte *)(param_1 + 0x408f);
    sVar2 = *(size_t *)(param_1 + 0x4080);
    if (-1 < (char)bVar4) {
      sVar2 = (ulong)bVar4;
    }
    if (sVar1 == sVar2) {
      psVar8 = *(string **)param_2;
      if (-1 < (char)sVar3) {
        psVar8 = param_2;
      }
      psVar11 = *(string **)(param_1 + 0x4078);
      if (-1 < (char)bVar4) {
        psVar11 = (string *)(param_1 + 0x4078);
      }
      if ((char)sVar3 < '\0') {
        if (sVar1 == 0) {
          return;
        }
        iVar5 = _memcmp(psVar8,psVar11,sVar1);
        if (iVar5 == 0) {
          return;
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        psVar8 = param_2;
        if ((uint)(byte)*psVar11 == ((uint)*(string **)param_2 & 0xff)) {
          do {
            uVar6 = uVar6 - 1;
            psVar11 = psVar11 + 1;
            psVar8 = psVar8 + 1;
            if (uVar6 == 0) {
              return;
            }
          } while (*psVar8 == *psVar11);
        }
      }
    }
  }
  psVar8 = (string *)(param_1 + 0x4078);
  std::string::operator=(psVar8,param_2);
  *(undefined1 *)(param_1 + 0x40d9) = 1;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  if ((*(long **)(param_1 + 0x4060) == (long *)0x0) ||
     (uVar6 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x30))(), (uVar6 & 1) == 0)) {
    FUN_100186c14(param_1,&DAT_101d91650);
  }
  else {
    psVar11 = psVar8;
    if (*(char *)(param_1 + 0x408f) < '\0') {
      psVar11 = *(string **)psVar8;
    }
    (**(code **)(**(long **)(param_1 + 0x4060) + 0x48))(*(long **)(param_1 + 0x4060),psVar11,0);
  }
  bVar4 = *(byte *)(param_1 + 0x408f);
  uVar6 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x4080);
  if (-1 < (char)bVar4) {
    sVar1 = uVar6;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar11 = *(string **)psVar8;
    if (-1 < (char)bVar4) {
      psVar11 = psVar8;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 != 0) {
        iVar5 = _memcmp(psVar11,pbVar12,sVar1);
        uVar7 = *(uint *)(param_1 + 0x88c);
        if (iVar5 == 0) {
          uVar10 = 0;
          goto LAB_100187a74;
        }
        goto LAB_100187a44;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar12 == ((uint)*(string **)psVar8 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x4079);
        do {
          uVar6 = uVar6 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar6 == 0) goto LAB_100187a68;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar12);
      }
      goto LAB_100187a3c;
    }
LAB_100187a68:
    uVar10 = 0;
    uVar7 = *(uint *)(param_1 + 0x88c);
  }
  else {
LAB_100187a3c:
    uVar7 = *(uint *)(param_1 + 0x88c);
LAB_100187a44:
    uVar10 = 4;
  }
LAB_100187a74:
  *(uint *)(param_1 + 0x88c) = uVar10 | uVar7 & 0xfffffffb;
  return;
}




void FUN_100187a90(long param_1)

{
  FUN_1006513c0(param_1 + 0x2248);
  return;
}




void FUN_100187a9c(long param_1)

{
  FUN_1006513c0(param_1 + 0x2978);
  return;
}




void FUN_100187aa8(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  uint64_t uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  double dVar15;
  undefined4 local_64;
  undefined8 ***local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 ***local_48;
  undefined8 uStack_40;
  long local_38;
  
  *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x2378);
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xfffffffb;
  *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 4;
  plVar14 = (long *)(param_1 + 0x4078);
  bVar6 = *(byte *)(param_1 + 0x408f);
  uVar10 = (ulong)bVar6;
  sVar1 = *(size_t *)(param_1 + 0x4080);
  if (-1 < (char)bVar6) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar13 = (long *)*plVar14;
    plVar8 = plVar13;
    if (-1 < (char)bVar6) {
      plVar8 = plVar14;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar1 == 0) || (iVar7 = _memcmp(plVar8,pbVar12,sVar1), iVar7 == 0)) goto LAB_100187bcc;
      plVar8 = *(long **)(param_1 + 0x4060);
      plVar14 = plVar13;
    }
    else {
      if (sVar1 == 0) goto LAB_100187bcc;
      if ((uint)*pbVar12 == ((uint)plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x4079);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_100187bcc;
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *pbVar12);
        goto LAB_100187b8c;
      }
      plVar8 = *(long **)(param_1 + 0x4060);
    }
  }
  else {
LAB_100187b8c:
    plVar8 = *(long **)(param_1 + 0x4060);
    if ((char)bVar6 < '\0') {
      plVar14 = (long *)*plVar14;
    }
  }
  (**(code **)(*plVar8 + 0x48))(plVar8,plVar14,0);
LAB_100187bcc:
  if (*(long **)(param_1 + 0x40b0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40b0) + 0x30))();
  }
  uVar9 = _mach_absolute_time();
  dVar15 = (double)((uVar9 - *(long *)(param_1 + 0x40e0)) * DAT_101d91638) * 1e-09;
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  local_60 = (undefined8 ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_10014e338(&local_48,&local_60,&local_64);
  ppppuVar3 = (undefined8 ****)local_48;
  if (-1 < local_38) {
    ppppuVar3 = &local_48;
  }
  ppppuVar4 = (undefined8 ****)local_60;
  if (-1 < local_50) {
    ppppuVar4 = &local_60;
  }
  FUN_100109c74(ppppuVar3,ppppuVar4,local_64,(int)(dVar15 * 1000.0));
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_100187cac(long param_1)

{
  FUN_100187aa8(param_1 + -0x88);
  return;
}




void FUN_100187cb4(long param_1)

{
  *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) | 4;
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x40db) = 1;
  if (*(long **)(param_1 + 0x40b0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100187ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x40b0) + 0x38))();
    return;
  }
  return;
}




void FUN_100187cf0(long param_1)

{
  *(uint *)(param_1 + 0x21bc) = *(uint *)(param_1 + 0x21bc) | 4;
  *(uint *)(param_1 + 0x28ec) = *(uint *)(param_1 + 0x28ec) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x4053) = 1;
  if (*(long **)(param_1 + 0x4028) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100187d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4028) + 0x38))();
    return;
  }
  return;
}




void FUN_100187d2c(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined4 local_54;
  undefined8 **local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) & 0xfffffffb;
  *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & 0xfffffffb;
  FUN_1001c102c(param_1 + 0x2378);
  *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) | 4;
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_50 = (undefined8 ***)0x0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_10014e338(&local_38,&local_50,&local_54);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  pppuVar2 = (undefined8 ***)local_50;
  if (-1 < local_40) {
    pppuVar2 = &local_50;
  }
  FUN_100109d70(pppuVar1,pppuVar2,local_54);
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}



pointer PTR_s_build://Fonts/Brandon-Regular-30_10184e1e8;
string s_C0123456789ABCDEF_10185490f;
undefined *PTR_FUN_10145fce8;
pointer PTR_s_build://Fonts/Brandon-Bold-40.fo_10184e230;
undefined4 DAT_101e3d42e;
undefined4 DAT_101e3d432;
undefined4 DAT_101e3d43a;
undefined1 DAT_101e3d428;
undefined2 DAT_101e3d42a;
undefined2 DAT_101e3d42c;
undefined4 DAT_101e3d436;
undefined4 DAT_101e3d43e;
undefined4 DAT_101e3d442;
undefined4 DAT_101e3d446;
undefined4 DAT_101e3d44a;
undefined4 DAT_101e3d44e;
undefined4 DAT_101e3d452;
undefined4 DAT_101e3d456;
undefined4 DAT_101e3d45a;
undefined4 DAT_101e3d45e;
undefined4 DAT_101e3d462;
undefined4 DAT_101e3d466;
undefined4 DAT_101e3d46a;
undefined4 DAT_101e3d46e;
undefined4 DAT_101e3d472;
undefined4 DAT_101e3d476;
undefined4 DAT_101e3d47a;
undefined4 DAT_101e3d47e;
undefined4 DAT_101e3d482;
undefined4 DAT_101e3d486;
undefined4 DAT_101e3d48a;
undefined4 DAT_101e3d48e;
undefined4 DAT_101e3d492;
undefined4 DAT_101e3d496;
undefined4 DAT_101e3d49a;
undefined4 DAT_101e3d49e;
undefined4 DAT_101e3d4a2;
undefined4 DAT_101e3d4a6;
undefined4 DAT_101e3d4aa;
undefined4 DAT_101e3d4ae;
undefined4 DAT_101e3d4b2;
undefined4 DAT_101e3d4b6;
undefined4 DAT_101e3d4ba;
undefined4 DAT_101e3d4be;
undefined4 DAT_101e3d4c2;
undefined4 DAT_101e3d4c6;
undefined4 DAT_101e3d4ca;
undefined4 DAT_101e3d4ce;
undefined4 DAT_101e3d4d2;
undefined4 DAT_101e3d4d6;
undefined4 DAT_101e3d4da;
undefined4 DAT_101e3d4de;
undefined4 DAT_101e3d4e2;
undefined4 DAT_101e3d4e6;
undefined4 DAT_101e3d4ea;
undefined4 DAT_101e3d4ee;
undefined4 DAT_101e3d4f2;
undefined4 DAT_101e3d4f6;
undefined4 DAT_101e3d4fa;
undefined4 DAT_101e3d500;
undefined4 DAT_101e3d504;
undefined4 DAT_101e3d508;
undefined4 DAT_101e3d50c;
undefined4 DAT_101e3d510;
undefined4 DAT_101e3d514;
undefined4 DAT_101e3d518;
undefined4 DAT_101e3d51c;
undefined4 DAT_101e3d520;
undefined4 DAT_101e3d524;
undefined4 DAT_101e3d528;
undefined4 DAT_101e3d52c;
undefined4 DAT_101e3d530;
undefined4 DAT_101e3d534;
undefined4 DAT_101e3d538;
undefined4 DAT_101e3d53c;
undefined4 DAT_101e3d540;
undefined4 DAT_101e3d544;
undefined4 DAT_101e3d548;
undefined4 DAT_101e3d54c;
undefined4 DAT_101e3d550;
undefined4 DAT_101e3d554;
undefined4 DAT_101e3d558;
undefined4 DAT_101e3d55c;
undefined4 DAT_101e3d560;
undefined4 DAT_101e3d564;
undefined4 DAT_101e3d568;
undefined4 DAT_101e3d56c;
undefined4 DAT_101e3d570;
undefined4 DAT_101e3d574;
undefined4 DAT_101e3d578;
undefined4 DAT_101e3d57c;
undefined4 DAT_101e3d580;
undefined4 DAT_101e3d584;
undefined4 DAT_101e3d588;
undefined4 DAT_101e3d58c;
undefined4 DAT_101e3d590;
undefined4 DAT_101e3d594;
undefined4 DAT_101e3d598;
undefined8 DAT_101e3d5a0;
undefined8 DAT_101e3d5a8;
float DAT_101d2354c;
float DAT_101854908;
undefined DAT_10185490c;
float DAT_101d23550;
undefined *PTR_FUN_10145fe90;
undefined *PTR_FUN_101460050;
undefined FUN_10018a0f8;
undefined thunk_FUN_10018a36c;
undefined *PTR_thunk_FUN_10018b684_101460098;
pointer PTR_s_build://Fonts/Brandon-Bold-60.fo_10184e240;
undefined FUN_10018afc0;
undefined *PTR_thunk_FUN_10018b08c_101460230;
undefined *PTR_s_build://Fonts/Brandon-Bold-130.f_10184e260;
undefined *PTR_FUN_101460330;
undefined *PTR_FUN_1014603a8;
undefined FUN_10018bedc;
undefined FUN_10018cc34;
long DAT_101873a38;
undefined *PTR_s_build://Fonts/Brandon-Light-60.f_10184e1c8;
undefined thunk_FUN_10018f164;
undefined *PTR_thunk_FUN_10018d500_1014604a8;
undefined FUN_10018e154;
undefined FUN_10018fd04;
undefined FUN_10018fd40;
undefined4 DAT_101d23554;
undefined *PTR_thunk_FUN_100190868_101460898;
undefined FUN_10019082c;
undefined thunk_FUN_1001908d4;
undefined FUN_100190ae0;
undefined1 DAT_101e3d5c8;
undefined2 DAT_101e3d5ca;
undefined2 DAT_101e3d5cc;
undefined *PTR_FUN_1014609b8;
undefined *PTR_FUN_101460ab8;
undefined *PTR_thunk_FUN_100191808_101460c00;
undefined *PTR_thunk_FUN_1001941e4_101460d00;
undefined *PTR_thunk_FUN_10019422c_101460e48;
undefined thunk_FUN_100194050;
undefined FUN_100192d44;
undefined *PTR_thunk_FUN_10019427c_101460f90;
undefined thunk_FUN_1001940a0;
undefined thunk_FUN_1001940f0;
undefined thunk_FUN_100194000;
undefined thunk_FUN_100194140;
pointer PTR_s_build://Fonts/Brandon-Bold-80.fo_10184e250;
undefined *PTR_FUN_1014627f8;
undefined *PTR_thunk_FUN_100195ff4_1014610d8;
undefined *PTR_thunk_FUN_1001958d8_101461258;
undefined FUN_100195da0;
undefined thunk_FUN_100195e84;
undefined *PTR_s_MENU_HERO_INSPECTOR_ABILITY_A_LA_101461390;
undefined *PTR_FUN_101464d00;
undefined *PTR_thunk_FUN_100196370_1014613b8;
undefined *PTR_s_stat_offense_101461780;
undefined *PTR_s_MENU_HERO_ATTRIBUTES_LABEL_OFFEN_1014617a0;
undefined *PTR_thunk_FUN_100196788_101461500;
undefined *PTR_thunk_FUN_100196a8c_101461648;
undefined *PTR_s_MENU_HERO_ATTRIBUTES_LABEL_DIFFI_1014617c0;
undefined *PTR_thunk_FUN_100196fa4_1014645b0;
undefined *PTR_thunk_FUN_100197c4c_1014617e8;
undefined thunk_FUN_10019868c;
undefined thunk_FUN_10019860c;
undefined thunk_FUN_100197fd8;
undefined thunk_FUN_100198034;
undefined4 DAT_10115a174;
undefined8 DAT_101854a08;
undefined *PTR_thunk_FUN_100198b18_101461968;
undefined FUN_100198b0c;
undefined FUN_100198eec;
undefined DAT_101872ba4;
undefined UNK_101158024;
undefined DAT_101158028;
undefined *PTR_FUN_101461ab0;
undefined *PTR_FUN_101461c10;
undefined *PTR_FUN_101461c58;
pointer PTR_s_build://Fonts/Brandon-Regular-40_10184e1f8;
pointer PTR_s_build://Fonts/Brandon-Bold-72.fo_10184e248;
undefined *PTR_FUN_101461d58;
undefined *PTR_FUN_101461dd0;
undefined FUN_10019a8ac;
undefined FUN_10019a900;
undefined8 DAT_101d23558;
undefined1 DAT_101e3d5d0;
undefined2 DAT_101e3d5d2;
undefined2 DAT_101e3d5d4;
undefined4 DAT_101e3d5d6;
undefined4 DAT_101e3d5da;
undefined4 DAT_101e3d5de;
undefined4 DAT_101e3d5e2;
undefined4 DAT_101e3d5e6;
undefined4 DAT_101e3d5ea;
undefined4 DAT_101e3d5ee;
undefined4 DAT_101e3d5f2;
undefined4 DAT_101e3d5f6;
undefined4 DAT_101e3d5fa;
undefined4 DAT_101e3d5fe;
undefined4 DAT_101e3d602;
undefined4 DAT_101e3d606;
undefined4 DAT_101e3d60a;
undefined4 DAT_101e3d60e;
undefined4 DAT_101e3d612;
undefined4 DAT_101e3d616;
undefined4 DAT_101e3d61a;
undefined4 DAT_101e3d622;
undefined4 DAT_101e3d61e;
undefined4 DAT_101e3d626;
undefined4 DAT_101e3d62a;
undefined4 DAT_101e3d62e;
undefined4 DAT_101e3d632;
undefined4 DAT_101e3d636;
undefined4 DAT_101e3d63a;
undefined4 DAT_101e3d63e;
undefined4 DAT_101e3d642;
undefined4 DAT_101e3d646;
undefined4 DAT_101e3d64a;
undefined4 DAT_101e3d64e;
undefined4 DAT_101e3d652;
undefined4 DAT_101e3d656;
undefined4 DAT_101e3d65a;
undefined4 DAT_101e3d65e;
undefined4 DAT_101e3d662;
undefined4 DAT_101e3d666;
undefined4 DAT_101e3d66a;
undefined4 DAT_101e3d66e;
undefined4 DAT_101e3d672;
undefined4 DAT_101e3d676;
undefined4 DAT_101e3d67a;
undefined4 DAT_101e3d67e;
undefined4 DAT_101e3d682;
undefined4 DAT_101e3d686;
undefined4 DAT_101e3d68a;
undefined4 DAT_101e3d68e;
undefined4 DAT_101e3d692;
undefined4 DAT_101e3d696;
undefined4 DAT_101e3d69a;
undefined4 DAT_101e3d69e;
undefined4 DAT_101e3d6a2;
undefined4 DAT_101e3d6ac;
undefined4 DAT_101e3d6a8;
undefined4 DAT_101e3d6b4;
undefined4 DAT_101e3d6b0;
undefined4 DAT_101e3d6b8;
undefined4 DAT_101e3d6bc;
undefined4 DAT_101e3d6c0;
undefined4 DAT_101e3d6c4;
undefined4 DAT_101e3d6c8;
undefined4 DAT_101e3d6cc;
undefined4 DAT_101e3d6d0;
undefined4 DAT_101e3d6d4;
undefined4 DAT_101e3d6d8;
undefined4 DAT_101e3d6dc;
undefined4 DAT_101e3d6e0;
undefined4 DAT_101e3d6e4;
undefined4 DAT_101e3d6e8;
undefined4 DAT_101e3d6ec;
undefined4 DAT_101e3d6f0;
undefined4 DAT_101e3d6f4;
undefined4 DAT_101e3d6f8;
undefined4 DAT_101e3d6fc;
undefined4 DAT_101e3d700;
undefined4 DAT_101e3d704;
undefined4 DAT_101e3d708;
undefined4 DAT_101e3d70c;
undefined4 DAT_101e3d710;
undefined4 DAT_101e3d714;
undefined4 DAT_101e3d718;
undefined4 DAT_101e3d71c;
undefined4 DAT_101e3d720;
undefined4 DAT_101e3d724;
undefined4 DAT_101e3d728;
undefined4 DAT_101e3d72c;
undefined4 DAT_101e3d730;
undefined4 DAT_101e3d734;
undefined4 DAT_101e3d738;
undefined4 DAT_101e3d73c;
undefined4 DAT_101e3d740;
undefined8 DAT_101e3d748;
undefined8 DAT_101e3d750;
undefined *DAT_101d23558;
undefined *PTR_s_build://Fonts/Brandon-Light-96.f_10184e1d8;
undefined *PTR_FUN_101461ed0;
undefined *PTR_thunk_FUN_10019c7c8_101462020;
undefined thunk_FUN_10019fdb0;
undefined FUN_10019d7e4;
undefined thunk_FUN_10019fdfc;
undefined *PTR_thunk_FUN_10019d7f0_101462120;
undefined *PTR_FUN_101462268;
undefined *PTR_FUN_1014623b0;
undefined4 DAT_101d236b8;
undefined4 DAT_101d236c4;
undefined *PTR_thunk_FUN_1001a040c_1014624f8;
undefined *PTR_FUN_1014625f8;
undefined4 DAT_101d236b4;
undefined *PTR_thunk_FUN_1001a1404_1014626f8;
undefined thunk_FUN_1001a2258;
undefined *PTR_thunk_FUN_1001a7dd8_101462990;
undefined *PTR_thunk_FUN_1001a2954_101462af0;
undefined thunk_FUN_1001a3dd0;
undefined thunk_FUN_1001a3fa0;
undefined DAT_101158080;
undefined FUN_1001a4848;
undefined FUN_1001a4898;
undefined FUN_1001a48a8;
undefined FUN_1001a5534;
undefined FUN_1001a553c;
undefined FUN_1001a5620;
undefined *PTR_FUN_101462bf0;
undefined *PTR_FUN_101462c20;
pointer PTR_FUN_101462c58;
undefined *PTR_FUN_101462c78;
undefined *PTR_FUN_101462d90;
undefined thunk_FUN_1001a5e74;
undefined *PTR_s_build://MenuBackground_Form.png_1018549b8;
undefined *PTR_FUN_101462dd8;
undefined1 DAT_101e3d760;
undefined2 DAT_101e3d762;
undefined2 DAT_101e3d764;
undefined8 DAT_101e3d768;
undefined8 DAT_101e3d770;
undefined8 DAT_101e42b80;
undefined4 DAT_101e42b88;
undefined4 DAT_101e3d780;
undefined thunk_FUN_1001e3fd8;
undefined thunk_FUN_1001a7788;
undefined *PTR_thunk_FUN_1001a7058_1014630b0;
undefined thunk_FUN_1001a77cc;
undefined FUN_1001a7874;
undefined *PTR_thunk_FUN_1001a791c_1014631f8;
undefined *PTR_FUN_101463238;
undefined *PTR_FUN_101463260;
undefined *PTR_thunk_FUN_1001a7dd8_101463288;
undefined FUN_1001a7dc0;
undefined4 DAT_101873a60;
undefined4 DAT_101873a64;
undefined4 DAT_101873a70;
undefined4 DAT_101873a74;
undefined4 DAT_101873a68;
undefined4 DAT_101873a6c;
undefined4 DAT_101873a78;
undefined4 DAT_101873a7c;
float DAT_101873a98;
undefined4 DAT_101873a9c;
undefined *PTR_FUN_1014633e8;
float DAT_101873a90;
float DAT_101873a94;
undefined *PTR_thunk_FUN_1001aa23c_101463418;
undefined FUN_1001aa1c0;
float DAT_101873a78;
float DAT_101873a7c;
float DAT_101873a80;
undefined8 DAT_101873a84;
float DAT_101873a8c;
float DAT_101873a68;
undefined *PTR_FUN_101463578;
float DAT_101873a60;
float DAT_101873a64;
float DAT_101873a6c;
float DAT_101873a9c;
undefined4 DAT_101dbd454;
undefined4 DAT_101dbd480;
undefined *PTR_thunk_FUN_1001abf40_1014635a8;
undefined thunk_FUN_1001acbb8;
undefined FUN_1001abf38;
undefined *PTR_FUN_101465108;
undefined DAT_101e42d18;
undefined DAT_101e42d30;
undefined *PTR_thunk_FUN_1001acc08_10148b538;
undefined1 DAT_101e42b90;
undefined2 DAT_101e42b92;
undefined2 DAT_101e42b94;
undefined4 DAT_101e42b96;
undefined4 DAT_101e42b9a;
undefined4 DAT_101e42b9e;
undefined4 DAT_101e42ba2;
undefined4 DAT_101e42ba6;
undefined4 DAT_101e42baa;
undefined4 DAT_101e42bae;
undefined4 DAT_101e42bb2;
undefined4 DAT_101e42bb6;
undefined4 DAT_101e42bba;
undefined4 DAT_101e42bbe;
undefined4 DAT_101e42bc2;
undefined4 DAT_101e42bc6;
undefined4 DAT_101e42bca;
undefined4 DAT_101e42bce;
undefined4 DAT_101e42bd2;
undefined4 DAT_101e42bd6;
undefined4 DAT_101e42bda;
undefined4 DAT_101e42bde;
undefined4 DAT_101e42be2;
undefined4 DAT_101e42be6;
undefined4 DAT_101e42bea;
undefined4 DAT_101e42bee;
undefined4 DAT_101e42bf2;
undefined4 DAT_101e42bf6;
undefined4 DAT_101e42bfa;
undefined4 DAT_101e42bfe;
undefined4 DAT_101e42c02;
undefined4 DAT_101e42c06;
undefined4 DAT_101e42c0a;
undefined4 DAT_101e42c0e;
undefined4 DAT_101e42c12;
undefined4 DAT_101e42c16;
undefined4 DAT_101e42c1a;
undefined4 DAT_101e42c1e;
undefined4 DAT_101e42c22;
undefined4 DAT_101e42c26;
undefined4 DAT_101e42c2a;
undefined4 DAT_101e42c2e;
undefined4 DAT_101e42c32;
undefined4 DAT_101e42c36;
undefined4 DAT_101e42c3a;
undefined4 DAT_101e42c3e;
undefined4 DAT_101e42c42;
undefined4 DAT_101e42c46;
undefined4 DAT_101e42c4a;
undefined4 DAT_101e42c4e;
undefined4 DAT_101e42c52;
undefined4 DAT_101e42c56;
undefined4 DAT_101e42c5a;
undefined4 DAT_101e42c5e;
undefined4 DAT_101e42c62;
undefined4 DAT_101e42c6c;
undefined4 DAT_101e42c74;
undefined4 DAT_101e42c70;
undefined4 DAT_101e42c78;
undefined4 DAT_101e42c84;
undefined4 DAT_101e42c88;
undefined4 DAT_101e42c68;
undefined4 DAT_101e42c8c;
undefined4 DAT_101e42c7c;
undefined4 DAT_101e42c90;
undefined4 DAT_101e42c80;
undefined4 DAT_101e42c94;
undefined4 DAT_101e42c98;
undefined4 DAT_101e42c9c;
undefined4 DAT_101e42ca0;
undefined4 DAT_101e42ca4;
undefined4 DAT_101e42ca8;
undefined4 DAT_101e42cac;
undefined4 DAT_101e42cb0;
undefined4 DAT_101e42cb4;
undefined4 DAT_101e42cb8;
undefined4 DAT_101e42cbc;
undefined4 DAT_101e42cc0;
undefined4 DAT_101e42cc4;
undefined4 DAT_101e42cc8;
undefined4 DAT_101e42ccc;
undefined4 DAT_101e42cd0;
undefined4 DAT_101e42cd4;
undefined4 DAT_101e42cd8;
undefined4 DAT_101e42cdc;
undefined4 DAT_101e42ce0;
undefined4 DAT_101e42ce4;
undefined4 DAT_101e42ce8;
undefined4 DAT_101e42cec;
undefined4 DAT_101e42cf0;
undefined4 DAT_101e42cf4;
undefined4 DAT_101e42cf8;
undefined4 DAT_101e42cfc;
undefined4 DAT_101e42d00;
undefined8 DAT_101e42d08;
undefined8 DAT_101e42d10;
long *DAT_101d23560;
long DAT_101d23560;
undefined *PTR_thunk_FUN_10064e2bc_1014636f8;
undefined *PTR_thunk_FUN_1001ad700_101463850;
undefined thunk_FUN_1001adb84;
undefined thunk_FUN_1001af360;
undefined *PTR_thunk_FUN_1001afa60_101463950;
undefined thunk_FUN_1001af3b4;
undefined1 DAT_101e42d48;
undefined2 DAT_101e42d4a;
undefined2 DAT_101e42d4c;
undefined8 DAT_101e42d50;
undefined8 DAT_101e42d58;
undefined DAT_101e42d60;
undefined thunk_FUN_1001afef4;
undefined thunk_FUN_1001affa4;
undefined FUN_1001b0ae8;
undefined *PTR_thunk_FUN_1001b0af4_101463b58;
undefined *PTR_thunk_FUN_1001b1228_101463cb8;
undefined4 DAT_101d918a8;
undefined4 DAT_101d918ac;
undefined *PTR_thunk_FUN_1001b1de4_101463e00;
undefined *PTR_FUN_101463f68;
undefined DAT_1011580f8;
undefined FUN_1001b2680;
undefined FUN_1001b2678;
undefined thunk_FUN_1001b26c0;
undefined thunk_FUN_1001b2710;
undefined4 DAT_101d23670;
undefined1 DAT_101e42d88;
undefined1 DAT_101e42da0;
undefined DAT_101e42d78;
undefined DAT_101e42d90;
undefined thunk_FUN_1001b22d4;
int DAT_101dbd4e4;
undefined thunk_FUN_1001b2950;
undefined thunk_FUN_1001b29b4;
undefined DAT_101873a48;
undefined thunk_FUN_1001b43ec;
undefined *PTR_thunk_FUN_1001b4464_101464300;
undefined4 DAT_101873a48;
undefined4 DAT_101873a4c;
float DAT_101873a48;
float DAT_101873a4c;
undefined FUN_1001b494c;
undefined FUN_1001b48f4;
undefined FUN_1001b4944;
undefined FUN_1001b4954;
undefined FUN_1001b67a8;
undefined FUN_1001b60a0;
undefined FUN_1001b60a8;
undefined *PTR_thunk_FUN_1001b7044_101464728;
undefined *PTR_FUN_101464900;
undefined thunk_FUN_1001b87b8;
undefined thunk_FUN_1001b875c;
undefined FUN_1001b8754;
undefined4 DAT_101d2365c;
undefined4 DAT_101d23568;
undefined thunk_FUN_1001ba584;
undefined thunk_FUN_1001ba5e8;
undefined FUN_1001ba580;
undefined1 DAT_101e42da8;
undefined2 DAT_101e42daa;
undefined2 DAT_101e42dac;
undefined4 DAT_101e42dae;
undefined4 DAT_101e42db2;
undefined4 DAT_101e42db6;
undefined4 DAT_101e42dba;
undefined4 DAT_101e42dbe;
undefined4 DAT_101e42dc2;
undefined4 DAT_101e42dc6;
undefined4 DAT_101e42dca;
undefined4 DAT_101e42dce;
undefined4 DAT_101e42dd2;
undefined4 DAT_101e42dd6;
undefined4 DAT_101e42dda;
undefined4 DAT_101e42dde;
undefined4 DAT_101e42de2;
undefined4 DAT_101e42de6;
undefined4 DAT_101e42dea;
undefined4 DAT_101e42dee;
undefined4 DAT_101e42df2;
undefined4 DAT_101e42df6;
undefined4 DAT_101e42dfa;
undefined4 DAT_101e42dfe;
undefined4 DAT_101e42e02;
undefined4 DAT_101e42e06;
undefined4 DAT_101e42e0a;
undefined4 DAT_101e42e0e;
undefined4 DAT_101e42e12;
undefined4 DAT_101e42e16;
undefined4 DAT_101e42e1a;
undefined4 DAT_101e42e1e;
undefined4 DAT_101e42e22;
undefined4 DAT_101e42e26;
undefined4 DAT_101e42e2a;
undefined4 DAT_101e42e2e;
undefined4 DAT_101e42e32;
undefined4 DAT_101e42e36;
undefined4 DAT_101e42e3a;
undefined4 DAT_101e42e3e;
undefined4 DAT_101e42e42;
undefined4 DAT_101e42e46;
undefined4 DAT_101e42e4a;
undefined4 DAT_101e42e4e;
undefined4 DAT_101e42e52;
undefined4 DAT_101e42e56;
undefined4 DAT_101e42e5a;
undefined4 DAT_101e42e5e;
undefined4 DAT_101e42e62;
undefined4 DAT_101e42e66;
undefined4 DAT_101e42e6a;
undefined4 DAT_101e42e6e;
undefined4 DAT_101e42e72;
undefined4 DAT_101e42e76;
undefined4 DAT_101e42e7a;
undefined4 DAT_101e42e84;
undefined4 DAT_101e42e8c;
undefined4 DAT_101e42e88;
undefined4 DAT_101e42e90;
undefined4 DAT_101e42e9c;
undefined4 DAT_101e42ea0;
undefined4 DAT_101e42e80;
undefined4 DAT_101e42ea4;
undefined4 DAT_101e42e94;
undefined4 DAT_101e42ea8;
undefined4 DAT_101e42e98;
undefined4 DAT_101e42eac;
undefined4 DAT_101e42eb0;
undefined4 DAT_101e42eb4;
undefined4 DAT_101e42eb8;
undefined4 DAT_101e42ebc;
undefined4 DAT_101e42ec0;
undefined4 DAT_101e42ec4;
undefined4 DAT_101e42ec8;
undefined4 DAT_101e42ecc;
undefined4 DAT_101e42ed0;
undefined4 DAT_101e42ed4;
undefined4 DAT_101e42ed8;
undefined4 DAT_101e42edc;
undefined4 DAT_101e42ee0;
undefined4 DAT_101e42ee4;
undefined4 DAT_101e42ee8;
undefined4 DAT_101e42eec;
undefined4 DAT_101e42ef0;
undefined4 DAT_101e42ef4;
undefined4 DAT_101e42ef8;
undefined4 DAT_101e42efc;
undefined4 DAT_101e42f00;
undefined4 DAT_101e42f04;
undefined4 DAT_101e42f08;
undefined4 DAT_101e42f0c;
undefined4 DAT_101e42f10;
undefined4 DAT_101e42f14;
undefined4 DAT_101e42f18;
undefined8 DAT_101e42f20;
undefined8 DAT_101e42f28;
undefined *PTR_s_build://BoostBadges.tga_1018549b0;
undefined *PTR_thunk_FUN_1001baec8_101464948;
undefined FUN_1001bb3ec;
undefined FUN_1001bb478;
undefined *PTR_thunk_FUN_1001bcd78_101464aa0;
undefined thunk_FUN_1001bc178;
undefined thunk_FUN_1001bc294;
undefined *PTR_FUN_101464be8;
char DAT_101d23570;
undefined8 DAT_101d23578;
undefined8 DAT_101d235a8;
undefined1 DAT_101e42f30;
undefined2 DAT_101e42f32;
undefined2 DAT_101e42f34;
undefined8 DAT_101e42f38;
undefined8 DAT_101e42f40;
undefined8 DAT_101d235b0;
undefined4 DAT_101d235b8;
undefined8 DAT_101d235c0;
undefined8 DAT_101d235c8;
undefined thunk_FUN_1001bf868;
undefined4 DAT_101d235d0;
undefined8 DAT_101d23580;
undefined4 DAT_101d23588;
undefined8 DAT_101d23590;
undefined8 DAT_101d23598;
undefined4 DAT_101d235a0;
undefined *PTR_FUN_101465268;
undefined *PTR_FUN_1014653b8;
undefined thunk_FUN_1001c0e10;
undefined8 DAT_101d235d8;
undefined thunk_FUN_1001c3fd0;
undefined *PTR_FUN_1014654b8;
undefined *PTR_FUN_101465600;
undefined thunk_FUN_1001c51d0;
undefined *PTR_thunk_FUN_1001c58e4_101465750;
undefined *PTR_FUN_101465898;
undefined1 DAT_101e42f48;
undefined2 DAT_101e42f4a;
undefined2 DAT_101e42f4c;
undefined4 DAT_101e42f4e;
undefined4 DAT_101e42f52;
undefined4 DAT_101e42f56;
undefined4 DAT_101e42f5a;
undefined4 DAT_101e42f5e;
undefined4 DAT_101e42f62;
undefined4 DAT_101e42f66;
undefined4 DAT_101e42f6a;
undefined4 DAT_101e42f6e;
undefined4 DAT_101e42f72;
undefined4 DAT_101e42f76;
undefined4 DAT_101e42f7a;
undefined4 DAT_101e42f7e;
undefined4 DAT_101e42f82;
undefined4 DAT_101e42f86;
undefined4 DAT_101e42f8a;
undefined4 DAT_101e42f8e;
undefined4 DAT_101e42f92;
undefined4 DAT_101e42f9a;
undefined4 DAT_101e42f96;
undefined4 DAT_101e42f9e;
undefined4 DAT_101e42fa2;
undefined4 DAT_101e42fa6;
undefined4 DAT_101e42faa;
undefined4 DAT_101e42fae;
undefined4 DAT_101e42fb2;
undefined4 DAT_101e42fb6;
undefined4 DAT_101e42fba;
undefined4 DAT_101e42fbe;
undefined4 DAT_101e42fc2;
undefined4 DAT_101e42fc6;
undefined4 DAT_101e42fca;
undefined4 DAT_101e42fce;
undefined4 DAT_101e42fd2;
undefined4 DAT_101e42fd6;
undefined4 DAT_101e42fda;
undefined4 DAT_101e42fde;
undefined4 DAT_101e42fe2;
undefined4 DAT_101e42fe6;
undefined4 DAT_101e42fea;
undefined4 DAT_101e42fee;
undefined4 DAT_101e42ff2;
undefined4 DAT_101e42ff6;
undefined4 DAT_101e42ffa;
undefined4 DAT_101e42ffe;
undefined4 DAT_101e43002;
undefined4 DAT_101e43006;
undefined4 DAT_101e4300a;
undefined4 DAT_101e4300e;
undefined4 DAT_101e43012;
undefined4 DAT_101e43016;
undefined4 DAT_101e4301a;
undefined4 DAT_101e43024;
undefined4 DAT_101e43020;
undefined4 DAT_101e4302c;
undefined4 DAT_101e43028;
undefined4 DAT_101e43030;
undefined4 DAT_101e43034;
undefined4 DAT_101e43038;
undefined4 DAT_101e4303c;
undefined4 DAT_101e43040;
undefined4 DAT_101e43044;
undefined4 DAT_101e43048;
undefined4 DAT_101e4304c;
undefined4 DAT_101e43050;
undefined4 DAT_101e43054;
undefined4 DAT_101e43058;
undefined4 DAT_101e4305c;
undefined4 DAT_101e43060;
undefined4 DAT_101e43064;
undefined4 DAT_101e43068;
undefined4 DAT_101e4306c;
undefined4 DAT_101e43070;
undefined4 DAT_101e43074;
undefined4 DAT_101e43078;
undefined4 DAT_101e4307c;
undefined4 DAT_101e43080;
undefined4 DAT_101e43084;
undefined4 DAT_101e43088;
undefined4 DAT_101e4308c;
undefined4 DAT_101e43090;
undefined4 DAT_101e43094;
undefined4 DAT_101e43098;
undefined4 DAT_101e4309c;
undefined4 DAT_101e430a0;
undefined4 DAT_101e430a4;
undefined4 DAT_101e430a8;
undefined4 DAT_101e430ac;
undefined4 DAT_101e430b0;
undefined4 DAT_101e430b4;
undefined4 DAT_101e430b8;
undefined8 DAT_101e430c0;
undefined8 DAT_101e430c8;
undefined *DAT_101d235d8;
undefined *PTR_thunk_FUN_1001c80b4_101465998;
undefined *PTR_s_build://Fonts/Brandon-Light-48.f_10184e1c0;
undefined DAT_1011581d0;
undefined DAT_1011581d4;
undefined DAT_1011581d8;
undefined DAT_1011581dc;
undefined *PTR_thunk_FUN_1001c768c_101465be0;
undefined1 DAT_101e430e0;
undefined DAT_101e430d0;
undefined *PTR_thunk_FUN_1001c859c_101465ce0;
undefined FUN_1001c8afc;
undefined4 DAT_101d235e0;
undefined1 DAT_101e430e8;
undefined2 DAT_101e430ea;
undefined2 DAT_101e430ec;
undefined4 DAT_101e430ee;
undefined4 DAT_101e430f2;
undefined4 DAT_101e430f6;
undefined4 DAT_101e430fa;
undefined4 DAT_101e430fe;
undefined4 DAT_101e43102;
undefined4 DAT_101e43106;
undefined4 DAT_101e4310a;
undefined4 DAT_101e4310e;
undefined4 DAT_101e43112;
undefined4 DAT_101e43116;
undefined4 DAT_101e4311a;
undefined4 DAT_101e4311e;
undefined4 DAT_101e43122;
undefined4 DAT_101e43126;
undefined4 DAT_101e4312a;
undefined4 DAT_101e4312e;
undefined4 DAT_101e43132;
undefined4 DAT_101e43136;
undefined4 DAT_101e4313a;
undefined4 DAT_101e4313e;
undefined4 DAT_101e43142;
undefined4 DAT_101e43146;
undefined4 DAT_101e4314a;
undefined4 DAT_101e4314e;
undefined4 DAT_101e43152;
undefined4 DAT_101e43156;
undefined4 DAT_101e4315a;
undefined4 DAT_101e4315e;
undefined4 DAT_101e43162;
undefined4 DAT_101e43166;
undefined4 DAT_101e4316a;
undefined4 DAT_101e4316e;
undefined4 DAT_101e43172;
undefined4 DAT_101e43176;
undefined4 DAT_101e4317a;
undefined4 DAT_101e4317e;
undefined4 DAT_101e43182;
undefined4 DAT_101e43186;
undefined4 DAT_101e4318a;
undefined4 DAT_101e4318e;
undefined4 DAT_101e43192;
undefined4 DAT_101e43196;
undefined4 DAT_101e4319a;
undefined4 DAT_101e4319e;
undefined4 DAT_101e431a2;
undefined4 DAT_101e431a6;
undefined4 DAT_101e431aa;
undefined4 DAT_101e431ae;
undefined4 DAT_101e431b2;
undefined4 DAT_101e431b6;
undefined4 DAT_101e431ba;
undefined4 DAT_101e431c4;
undefined4 DAT_101e431cc;
undefined4 DAT_101e431c8;
undefined4 DAT_101e431d0;
undefined4 DAT_101e431dc;
undefined4 DAT_101e431e0;
undefined4 DAT_101e431c0;
undefined4 DAT_101e431e4;
undefined4 DAT_101e431d4;
undefined4 DAT_101e431e8;
undefined4 DAT_101e431d8;
undefined4 DAT_101e431ec;
undefined4 DAT_101e431f0;
undefined4 DAT_101e431f4;
undefined4 DAT_101e431f8;
undefined4 DAT_101e431fc;
undefined4 DAT_101e43200;
undefined4 DAT_101e43204;
undefined4 DAT_101e43208;
undefined4 DAT_101e4320c;
undefined4 DAT_101e43210;
undefined4 DAT_101e43214;
undefined4 DAT_101e43218;
undefined4 DAT_101e4321c;
undefined4 DAT_101e43220;
undefined4 DAT_101e43224;
undefined4 DAT_101e43228;
undefined4 DAT_101e4322c;
undefined4 DAT_101e43230;
undefined4 DAT_101e43234;
undefined4 DAT_101e43238;
undefined4 DAT_101e4323c;
undefined4 DAT_101e43240;
undefined4 DAT_101e43244;
undefined4 DAT_101e43248;
undefined4 DAT_101e4324c;
undefined4 DAT_101e43250;
undefined4 DAT_101e43254;
undefined4 DAT_101e43258;
undefined8 DAT_101e43260;
undefined8 DAT_101e43268;
undefined thunk_FUN_1001ca378;
undefined *PTR_thunk_FUN_1001ca1a4_101465de0;
undefined *PTR_FUN_101465f28;
undefined FUN_1001cadc8;
undefined FUN_1001cada4;
undefined FUN_1001cadec;
undefined DAT_101158208;
undefined *PTR_thunk_FUN_1001cae14_101466088;
undefined *PTR_FUN_1014661f0;
undefined DAT_101158200;
undefined DAT_101158204;
byte DAT_101d23917;
size_t DAT_101d23908;
undefined8 DAT_101d23900;
byte DAT_101d2392f;
size_t DAT_101d23920;
undefined8 DAT_101d23918;
undefined *PTR_FUN_101466220;
undefined FUN_1001cbb54;
undefined *PTR_FUN_101466398;
undefined FUN_1001cc4f8;
undefined FUN_1001cc4f0;
undefined *PTR_thunk_FUN_1001cc504_1014664e0;
undefined *PTR_FUN_101466698;
undefined FUN_1001cc4e4;
undefined thunk_FUN_100536b78;
undefined *PTR_thunk_FUN_1001cd8c0_1014666f8;
undefined FUN_1001cd8a4;
undefined FUN_1001cdb1c;
undefined8 DAT_101d235e8;
undefined *PTR_thunk_FUN_1001cec4c_101466850;
undefined1 DAT_101e43270;
undefined2 DAT_101e43272;
undefined2 DAT_101e43274;
undefined4 DAT_101e43276;
undefined4 DAT_101e4327a;
undefined4 DAT_101e4327e;
undefined4 DAT_101e43282;
undefined4 DAT_101e43286;
undefined4 DAT_101e4328a;
undefined4 DAT_101e4328e;
undefined4 DAT_101e43292;
undefined4 DAT_101e43296;
undefined4 DAT_101e4329a;
undefined4 DAT_101e4329e;
undefined4 DAT_101e432a2;
undefined4 DAT_101e432a6;
undefined4 DAT_101e432aa;
undefined4 DAT_101e432ae;
undefined4 DAT_101e432b2;
undefined4 DAT_101e432b6;
undefined4 DAT_101e432ba;
undefined4 DAT_101e432c2;
undefined4 DAT_101e432be;
undefined4 DAT_101e432c6;
undefined4 DAT_101e432ca;
undefined4 DAT_101e432ce;
undefined4 DAT_101e432d2;
undefined4 DAT_101e432d6;
undefined4 DAT_101e432da;
undefined4 DAT_101e432de;
undefined4 DAT_101e432e2;
undefined4 DAT_101e432e6;
undefined4 DAT_101e432ea;
undefined4 DAT_101e432ee;
undefined4 DAT_101e432f2;
undefined4 DAT_101e432f6;
undefined4 DAT_101e432fa;
undefined4 DAT_101e432fe;
undefined4 DAT_101e43302;
undefined4 DAT_101e43306;
undefined4 DAT_101e4330a;
undefined4 DAT_101e4330e;
undefined4 DAT_101e43312;
undefined4 DAT_101e43316;
undefined4 DAT_101e4331a;
undefined4 DAT_101e4331e;
undefined4 DAT_101e43322;
undefined4 DAT_101e43326;
undefined4 DAT_101e4332a;
undefined4 DAT_101e4332e;
undefined4 DAT_101e43332;
undefined4 DAT_101e43336;
undefined4 DAT_101e4333a;
undefined4 DAT_101e4333e;
undefined4 DAT_101e43342;
undefined4 DAT_101e4334c;
undefined4 DAT_101e43348;
undefined4 DAT_101e43354;
undefined4 DAT_101e43350;
undefined4 DAT_101e43358;
undefined4 DAT_101e4335c;
undefined4 DAT_101e43360;
undefined4 DAT_101e43364;
undefined4 DAT_101e43368;
undefined4 DAT_101e4336c;
undefined4 DAT_101e43370;
undefined4 DAT_101e43374;
undefined4 DAT_101e43378;
undefined4 DAT_101e4337c;
undefined4 DAT_101e43380;
undefined4 DAT_101e43384;
undefined4 DAT_101e43388;
undefined4 DAT_101e4338c;
undefined4 DAT_101e43390;
undefined4 DAT_101e43394;
undefined4 DAT_101e43398;
undefined4 DAT_101e4339c;
undefined4 DAT_101e433a0;
undefined4 DAT_101e433a4;
undefined4 DAT_101e433a8;
undefined4 DAT_101e433ac;
undefined4 DAT_101e433b0;
undefined4 DAT_101e433b4;
undefined4 DAT_101e433b8;
undefined4 DAT_101e433bc;
undefined4 DAT_101e433c0;
undefined4 DAT_101e433c4;
undefined4 DAT_101e433c8;
undefined4 DAT_101e433cc;
undefined4 DAT_101e433d0;
undefined4 DAT_101e433d4;
undefined4 DAT_101e433d8;
undefined4 DAT_101e433dc;
undefined4 DAT_101e433e0;
undefined8 DAT_101e433e8;
undefined8 DAT_101e433f0;
undefined *DAT_101d235e8;
undefined *PTR_FUN_101466950;
undefined *PTR_FUN_101466ab8;
undefined *PTR_FUN_101466c20;
undefined *PTR_s_build://MenuDraftPartsCommon.tga_101854a38;
undefined *PTR_FUN_101466d88;
undefined FUN_1000d05c0;
undefined DAT_1011582a4;
undefined DAT_1011582a8;
undefined DAT_10115828c;
undefined DAT_101158298;
undefined *PTR_thunk_FUN_1001d78dc_101466ed0;
undefined DAT_101158290;
undefined DAT_101158294;
undefined *PTR_DAT_101854950;
undefined *PTR_FUN_101467028;
undefined *PTR_FUN_101467188;
undefined DAT_10115827c;
undefined DAT_101158280;
undefined DAT_10115829c;
undefined DAT_1011582a0;
undefined *PTR_FUN_1014671d0;
undefined DAT_101158284;
undefined DAT_101158288;
undefined *PTR_thunk_FUN_1001d7ab4_101467318;
undefined *PTR_FUN_101467478;
undefined *PTR_FUN_1014674c0;
undefined *PTR_FUN_101467610;
undefined *PTR_FUN_101467768;
undefined *PTR_FUN_101467900;
undefined4 DAT_101d918b8;
undefined DAT_1011582ac;
undefined *PTR_thunk_FUN_1001d7bcc_101467a50;
undefined FUN_1001d46f4;
undefined *PTR_FUN_101467be8;
undefined DAT_1011582b0;
undefined *PTR_thunk_FUN_1001d5000_101467d30;
undefined *PTR_PTR_101468260;
undefined *PTR_s_lobby_position_captain_101468298;
undefined DAT_101158270;
undefined DAT_101158274;
undefined DAT_101158278;
undefined *PTR_thunk_FUN_1001d7d6c_101467e80;
undefined *PTR_thunk_FUN_10064e2bc_101468128;
undefined *PTR_s_build://MenuDraftPartsCommon_Ico_101854a40;
undefined *PTR_thunk_FUN_1001d81b8_101467fc8;
undefined thunk_FUN_1001d869c;
undefined *PTR_thunk_FUN_1001d8544_1014682e0;
undefined *PTR_FUN_101468328;
undefined *PTR_FUN_1014686c0;
undefined1 DAT_101854938;
undefined *PTR_FUN_1014686f0;
undefined *PTR_FUN_101468838;
undefined FUN_1001d8aa0;
undefined *PTR_FUN_101468988;
undefined *PTR_thunk_FUN_1001d8e48_101468ad8;
undefined FUN_1001d8e3c;
char DAT_101854940;
long DAT_101d235f0;
undefined *PTR_thunk_FUN_1001d9e70_101468c20;
undefined8 DAT_101d235f0;
undefined8 DAT_101d235f8;
undefined4 DAT_101d23600;
undefined8 *DAT_101d235f8;
int DAT_101d23600;
undefined1 DAT_101e433f8;
undefined2 DAT_101e433fa;
undefined2 DAT_101e433fc;
undefined8 DAT_101e43400;
undefined8 DAT_101e43408;
undefined4 DAT_101e43410;
undefined4 DAT_101e43414;
undefined4 DAT_101e43418;
undefined4 DAT_101e4341c;
undefined4 DAT_101e43420;
undefined4 DAT_101e43424;
undefined4 DAT_101e43428;
undefined4 DAT_101e4342c;
undefined4 DAT_101e43430;
undefined4 DAT_101e43434;
undefined4 DAT_101e43438;
undefined4 DAT_101e4343c;
undefined4 DAT_101e43440;
undefined4 DAT_101e43444;
undefined4 DAT_101e43448;
undefined4 DAT_101e4344c;
undefined4 DAT_101e43450;
undefined4 DAT_101e43454;
undefined4 DAT_101e43458;
undefined4 DAT_101e4345c;
undefined4 DAT_101e43460;
undefined4 DAT_101e43464;
undefined4 DAT_101e43468;
undefined4 DAT_101e4346c;
undefined4 DAT_101e43470;
undefined4 DAT_101e43474;
undefined4 DAT_101e43478;
undefined4 DAT_101e4347c;
undefined4 DAT_101e43480;
undefined4 DAT_101e43484;
undefined4 DAT_101e43488;
undefined4 DAT_101e4348c;
undefined4 DAT_101e43490;
undefined4 DAT_101e43494;
undefined4 DAT_101e43498;
undefined4 DAT_101e4349c;
undefined4 DAT_101e434a0;
undefined4 DAT_101e434a4;
undefined4 DAT_101e434a8;
undefined4 DAT_101e434ac;
undefined4 DAT_101e434b0;
undefined4 DAT_101e434b4;
undefined4 DAT_101e434b8;
undefined4 DAT_101e434bc;
undefined4 DAT_101e434c0;
undefined4 DAT_101e434c4;
undefined4 DAT_101e434c8;
undefined4 DAT_101e434cc;
undefined4 DAT_101e434d0;
undefined4 DAT_101e434d4;
undefined4 DAT_101e434d8;
undefined4 DAT_101e434dc;
undefined4 DAT_101e434e0;
undefined4 DAT_101e434e4;
undefined4 DAT_101e434e8;
undefined4 DAT_101e434ec;
undefined4 DAT_101e434f0;
undefined4 DAT_101e434f4;
undefined4 DAT_101e434f8;
undefined4 DAT_101e434fc;
undefined4 DAT_101e43500;
undefined4 DAT_101e43504;
undefined4 DAT_101e43508;
undefined4 DAT_101e4350c;
undefined4 DAT_101e43510;
undefined4 DAT_101e43514;
undefined4 DAT_101e43518;
undefined4 DAT_101e4351c;
undefined4 DAT_101e43520;
undefined4 DAT_101e43524;
undefined4 DAT_101e43528;
undefined4 DAT_101e4352c;
undefined4 DAT_101e43530;
undefined4 DAT_101e43534;
undefined4 DAT_101e43538;
undefined4 DAT_101e4353c;
undefined4 DAT_101e43540;
undefined4 DAT_101e43544;
undefined4 DAT_101e43548;
undefined4 DAT_101e4354c;
undefined4 DAT_101e43550;
undefined4 DAT_101e43554;
undefined4 DAT_101e43558;
undefined4 DAT_101e4355c;
undefined4 DAT_101e43560;
undefined4 DAT_101e43564;
undefined4 DAT_101e43568;
undefined4 DAT_101e4356c;
undefined4 DAT_101e43570;
undefined4 DAT_101e43574;
undefined4 DAT_101e43578;
undefined8 DAT_101d23608;
undefined thunk_FUN_1001db9e8;
undefined1 DAT_101d23641;
undefined8 DAT_101d23628;
undefined FUN_1001db9b0;
undefined FUN_1001db92c;
undefined8 DAT_101d23610;
undefined DAT_101d23638;
ulong DAT_101d23630;
char DAT_101d23640;
long DAT_101d23608;
undefined DAT_101d23620;
ulong DAT_101d23618;
undefined DAT_101d23610;
undefined8 DAT_101d23618;
long DAT_101d23630;
undefined1 DAT_101e4357c;
undefined2 DAT_101e4357e;
undefined2 DAT_101e43580;
undefined4 DAT_101e43582;
undefined4 DAT_101e43586;
undefined4 DAT_101e4358a;
undefined4 DAT_101e4358e;
undefined4 DAT_101e43592;
undefined4 DAT_101e43596;
undefined4 DAT_101e4359a;
undefined4 DAT_101e4359e;
undefined4 DAT_101e435a2;
undefined4 DAT_101e435a6;
undefined4 DAT_101e435aa;
undefined4 DAT_101e435ae;
undefined4 DAT_101e435b2;
undefined4 DAT_101e435b6;
undefined4 DAT_101e435ba;
undefined4 DAT_101e435be;
undefined4 DAT_101e435c2;
undefined4 DAT_101e435c6;
undefined4 DAT_101e435ca;
undefined4 DAT_101e435ce;
undefined4 DAT_101e435d2;
undefined4 DAT_101e435d6;
undefined4 DAT_101e435da;
undefined4 DAT_101e435de;
undefined4 DAT_101e435e2;
undefined4 DAT_101e435e6;
undefined4 DAT_101e435ea;
undefined4 DAT_101e435ee;
undefined4 DAT_101e435f2;
undefined4 DAT_101e435f6;
undefined4 DAT_101e435fa;
undefined4 DAT_101e435fe;
undefined4 DAT_101e43602;
undefined4 DAT_101e43606;
undefined4 DAT_101e4360a;
undefined4 DAT_101e4360e;
undefined4 DAT_101e43612;
undefined4 DAT_101e43616;
undefined4 DAT_101e4361a;
undefined4 DAT_101e4361e;
undefined4 DAT_101e43622;
undefined4 DAT_101e43626;
undefined4 DAT_101e4362a;
undefined4 DAT_101e4362e;
undefined4 DAT_101e43632;
undefined4 DAT_101e43636;
undefined4 DAT_101e4363a;
undefined4 DAT_101e4363e;
undefined4 DAT_101e43642;
undefined4 DAT_101e43646;
undefined4 DAT_101e4364a;
undefined4 DAT_101e4364e;
undefined4 DAT_101e43654;
undefined4 DAT_101e43658;
undefined4 DAT_101e4365c;
undefined4 DAT_101e43660;
undefined4 DAT_101e43664;
undefined4 DAT_101e43668;
undefined4 DAT_101e4366c;
undefined4 DAT_101e43670;
undefined4 DAT_101e43674;
undefined4 DAT_101e43678;
undefined4 DAT_101e4367c;
undefined4 DAT_101e43680;
undefined4 DAT_101e43684;
undefined4 DAT_101e43688;
undefined4 DAT_101e4368c;
undefined4 DAT_101e43690;
undefined4 DAT_101e43694;
undefined4 DAT_101e43698;
undefined4 DAT_101e4369c;
undefined4 DAT_101e436a0;
undefined4 DAT_101e436a4;
undefined4 DAT_101e436a8;
undefined4 DAT_101e436ac;
undefined4 DAT_101e436b0;
undefined4 DAT_101e436b4;
undefined4 DAT_101e436b8;
undefined4 DAT_101e436bc;
undefined4 DAT_101e436c0;
undefined4 DAT_101e436c4;
undefined4 DAT_101e436c8;
undefined4 DAT_101e436cc;
undefined4 DAT_101e436d0;
undefined4 DAT_101e436d4;
undefined4 DAT_101e436d8;
undefined4 DAT_101e436dc;
undefined4 DAT_101e436e0;
undefined4 DAT_101e436e4;
undefined4 DAT_101e436e8;
undefined4 DAT_101e436ec;
undefined8 DAT_101d23620;
undefined8 DAT_101d23630;
undefined8 DAT_101d23638;
undefined *PTR_FUN_101468d68;
undefined *PTR_FUN_1014692b8;
undefined *PTR_FUN_101468eb0;
undefined FUN_1001dce54;
undefined FUN_1001dd038;
undefined FUN_1001dd150;
undefined *PTR_thunk_FUN_1001de800_101468ff8;
undefined FUN_1001dd294;
undefined thunk_FUN_1001de2b8;
undefined thunk_FUN_1001de39c;
undefined thunk_FUN_1001de314;
undefined FUN_1001dd3ec;
undefined FUN_1001dd3e4;
undefined thunk_FUN_1001de658;
undefined *PTR_thunk_FUN_1001deab0_101469170;
undefined *PTR_thunk_FUN_1001dfc14_101469428;
undefined8 DAT_101d23648;
long *DAT_101d23648;
undefined8 *DAT_101e436f0;
void *DAT_101e436f8;
pthread_mutex_t *DAT_101e436f8;
undefined *PTR_thunk_FUN_1001e1bb0_1014697c0;
undefined *PTR_thunk_FUN_10063eeb4_1014697e8;
undefined *PTR_FUN_101469830;
undefined *PTR_thunk_FUN_1001e2180_101469908;
undefined *PTR_s_gzip_101854948;
undefined FUN_1001e2cd8;
long DAT_101e43700;
long *DAT_101e43700;
undefined8 DAT_101e43700;
undefined4 DAT_101d23650;
undefined4 DAT_101d23658;
undefined4 DAT_101d23660;
undefined4 DAT_101d23664;
undefined4 DAT_101d2366c;
undefined4 DAT_101d23674;
undefined4 DAT_101d23678;
undefined4 DAT_101d2367c;
undefined4 DAT_101d23680;
undefined4 DAT_101d23684;
undefined4 DAT_101d2368c;
pointer PTR_s_build://MenuCharPortraitsHD.png_1018549d0;
pointer PTR_s_build://MenuCharPortraitsHD2.atl_1018549d8;
undefined4 DAT_101d236ac;
undefined1 DAT_101e43708;
undefined2 DAT_101e4370a;
undefined2 DAT_101e4370c;
undefined8 DAT_101e43710;
undefined8 DAT_101e43718;
undefined4 DAT_101e43720;
undefined4 DAT_101e43724;
undefined4 DAT_101e43728;
undefined4 DAT_101e4372c;
undefined4 DAT_101e43730;
undefined4 DAT_101e43734;
undefined4 DAT_101e43738;
undefined4 DAT_101e4373c;
undefined4 DAT_101e43740;
undefined4 DAT_101e43744;
undefined4 DAT_101e43748;
undefined4 DAT_101e4374c;
undefined4 DAT_101e43750;
undefined4 DAT_101e43754;
undefined4 DAT_101e43758;
undefined4 DAT_101e4375c;
undefined4 DAT_101e43760;
undefined4 DAT_101e43764;
undefined4 DAT_101e43768;
undefined4 DAT_101e4376c;
undefined4 DAT_101e43770;
undefined4 DAT_101e43774;
undefined4 DAT_101e43778;
undefined4 DAT_101e4377c;
undefined4 DAT_101e43780;
undefined4 DAT_101e43784;
undefined4 DAT_101e43788;
undefined4 DAT_101e4378c;
undefined4 DAT_101e43790;
undefined4 DAT_101e43794;
undefined4 DAT_101e43798;
undefined4 DAT_101e4379c;
undefined4 DAT_101e437a0;
undefined4 DAT_101e437a4;
undefined4 DAT_101e437a8;
undefined4 DAT_101e437ac;
undefined4 DAT_101e437b0;
undefined4 DAT_101e437b4;
undefined4 DAT_101e437b8;
undefined4 DAT_101e437bc;
undefined4 DAT_101e437c0;
undefined4 DAT_101e437c4;
undefined4 DAT_101e437c8;
undefined4 DAT_101e437cc;
undefined4 DAT_101e437d0;
undefined4 DAT_101e437d4;
undefined4 DAT_101e437d8;
undefined4 DAT_101e437dc;
undefined4 DAT_101e437e0;
undefined4 DAT_101e437e4;
undefined4 DAT_101e437e8;
undefined4 DAT_101e437ec;
undefined4 DAT_101e437f0;
undefined4 DAT_101e437f4;
undefined4 DAT_101e437f8;
undefined4 DAT_101e437fc;
undefined4 DAT_101e43800;
undefined4 DAT_101e43804;
undefined4 DAT_101e43808;
undefined4 DAT_101e4380c;
undefined4 DAT_101e43810;
undefined4 DAT_101e43814;
undefined4 DAT_101e43818;
undefined4 DAT_101e4381c;
undefined4 DAT_101e43820;
undefined4 DAT_101e43824;
undefined4 DAT_101e43828;
undefined4 DAT_101e4382c;
undefined4 DAT_101e43834;
undefined4 DAT_101e43838;
undefined4 DAT_101e4383c;
undefined4 DAT_101e43840;
undefined4 DAT_101e43844;
undefined4 DAT_101e43848;
undefined4 DAT_101e4384c;
undefined4 DAT_101e43850;
undefined4 DAT_101e43854;
undefined4 DAT_101e43858;
undefined4 DAT_101e4385c;
undefined4 DAT_101e43860;
undefined4 DAT_101e43864;
undefined4 DAT_101e43868;
undefined4 DAT_101e4386c;
undefined4 DAT_101e43870;
undefined4 DAT_101e43874;
undefined4 DAT_101e43878;
undefined4 DAT_101e4387c;
undefined4 DAT_101e43880;
undefined4 DAT_101e43884;
undefined4 DAT_101e43888;
undefined4 DAT_101e43830;
char *DAT_101e43890;
char *DAT_101e43898;
undefined DAT_101e438a0;
undefined4 DAT_101e438b0;
char *DAT_101e438b8;
char *DAT_101e438c0;
undefined DAT_101e438c8;
undefined4 DAT_101e438d8;
char *DAT_101e438e0;
char *DAT_101e438e8;
undefined DAT_101e438f0;
undefined4 DAT_101e43900;
undefined *DAT_101d23690;
undefined *DAT_101d23698;
undefined4 DAT_101d236a0;
undefined4 DAT_101d236a4;
undefined4 DAT_101d236a8;
undefined4 DAT_101d236bc;
undefined4 DAT_101d236c0;
undefined4 DAT_101d236c8;
undefined DAT_101d236d0;
undefined DAT_101d236e8;
undefined DAT_101d23700;
undefined DAT_101d23718;
undefined DAT_101d23730;
undefined DAT_101d23748;
undefined DAT_101d23760;
undefined8 UNK_101e438a8;
undefined8 UNK_101e438d0;
undefined8 UNK_101e438f8;
float DAT_101d23778;
undefined *PTR_thunk_FUN_1001e5908_101469960;
undefined8 DAT_101e43908;
undefined FUN_1001e46e4;
undefined *PTR_FUN_101469aa8;
long DAT_101e43908;
long *DAT_101e43908;
undefined *PTR_FUN_101469ba8;
undefined *PTR_thunk_FUN_1001e5ff0_101469d28;
undefined FUN_1001e66fc;
undefined4 DAT_101d918d8;
undefined4 DAT_101d918d4;
undefined FUN_1001e6b4c;
undefined FUN_1001e6b88;
undefined *PTR_thunk_FUN_1001e6bb0_101469e70;
undefined FUN_1001e6b9c;
undefined8 DAT_101e43910;
long DAT_101d23780;
long *DAT_101d23780;
long *DAT_101d23788;
int DAT_101854ab8;
undefined8 DAT_101d23780;
undefined8 DAT_101d23788;
long DAT_101d23790;
undefined8 DAT_101d23798;
undefined thunk_FUN_1001e7de4;
undefined8 DAT_101d23790;
long *DAT_101d23798;
undefined *PTR_FUN_10146a010;
undefined FUN_1001e8538;
undefined DAT_101158308;
undefined *PTR_thunk_FUN_1001e8844_10146a3b8;
undefined *PTR_FUN_10146a3f8;
undefined *PTR_FUN_10146a790;
pointer PTR_FUN_10146a7c8;
undefined thunk_FUN_1001e867c;
undefined *PTR_FUN_10146a7e8;
undefined *PTR____cxa_pure_virtual_10146a810;
undefined FUN_1001e927c;
pointer PTR_thunk_FUN_1001e94b8_10146a838;
pointer PTR_FUN_10146a858;
undefined *PTR_thunk_FUN_1001e9ab4_10146a878;
undefined *PTR_FUN_10146a8b0;
undefined *PTR_FUN_10146ac48;
pointer PTR_FUN_10146ac80;
undefined FUN_1001e9cb0;
undefined *PTR_FUN_10146aca0;
undefined *PTR_FUN_10146acd0;
undefined *PTR____cxa_pure_virtual_10146b068;
undefined thunk_FUN_1001e9d8c;
undefined *PTR_FUN_10146b090;
undefined *PTR_FUN_10146b108;
undefined FUN_1001eb68c;
pointer PTR_thunk_FUN_1001eb16c_10146b148;
undefined *PTR_FUN_10146b160;
undefined *PTR_FUN_10146b188;
pointer PTR____cxa_pure_virtual_10146b1b8;
undefined *PTR____cxa_pure_virtual_10146b1d0;
undefined *PTR____cxa_pure_virtual_10146b1f8;
undefined *PTR_FUN_10146b550;
undefined DAT_10115830c;
undefined *PTR_FUN_10146b228;
undefined *PTR____cxa_pure_virtual_10146b250;
undefined thunk_FUN_1001ebb90;
undefined thunk_FUN_1001eb81c;
undefined *PTR_s_build://DailyLogin_7Day.tga_1018549f8;
undefined4 DAT_101d237e0;
undefined thunk_FUN_1001ec300;
undefined4 DAT_101d237e4;
undefined *PTR_thunk_FUN_1001ee2bc_10146b278;
pointer PTR_FUN_10146b308;
undefined thunk_FUN_1001ee514;
undefined *PTR____cxa_pure_virtual_10146b358;
undefined FUN_1001ec0b0;
undefined FUN_1001eef94;
undefined FUN_1001ec09c;
undefined *PTR____cxa_pure_virtual_10146b328;
undefined *PTR_FUN_10146e8c8;
undefined4 DAT_101d23830;
undefined4 DAT_101d23834;
undefined FUN_1001eedcc;
undefined4 DAT_101d91894;
undefined FUN_1001eee00;
undefined FUN_1001eedd4;
undefined *PTR_FUN_10146b3d8;
undefined *PTR_FUN_10146b410;
undefined *PTR____cxa_pure_virtual_10146b450;
undefined thunk_FUN_1001ef328;
pointer PTR_thunk_FUN_1001ef708_10146b478;
pointer PTR_FUN_10146b498;
undefined thunk_FUN_100219efc;
undefined *PTR_thunk_FUN_1001efa40_10146b4b8;
undefined *PTR_FUN_10146b4e0;
pointer PTR_FUN_10146b530;
undefined *PTR_FUN_10146b508;
undefined *PTR_FUN_10146b590;
undefined *PTR_FUN_10146b5e0;
undefined *PTR_FUN_10146b610;
undefined *PTR____cxa_pure_virtual_10146b638;
byte DAT_101d238c7;
size_t DAT_101d238b8;
undefined8 DAT_101d238b0;
byte DAT_101d238df;
size_t DAT_101d238d0;
undefined8 DAT_101d238c8;
byte DAT_101d238f7;
size_t DAT_101d238e8;
undefined8 DAT_101d238e0;
undefined *PTR_FUN_10146b668;
undefined *PTR____cxa_pure_virtual_10146b690;
undefined *PTR_FUN_10146b6b8;
undefined *PTR_FUN_10146b6f0;
undefined *PTR____cxa_pure_virtual_10146ba88;
undefined *PTR_FUN_10146bab8;
undefined *PTR_FUN_10146bb18;
undefined *PTR____cxa_pure_virtual_10146beb0;
undefined FUN_1001f0964;
undefined FUN_1001f0960;
undefined DAT_101e43a90;
undefined1 DAT_101e43918;
undefined2 DAT_101e4391a;
undefined2 DAT_101e4391c;
undefined4 DAT_101e4391e;
undefined4 DAT_101e43922;
undefined4 DAT_101e43926;
undefined4 DAT_101e4392a;
undefined4 DAT_101e4392e;
undefined4 DAT_101e43932;
undefined4 DAT_101e43936;
undefined4 DAT_101e4393a;
undefined4 DAT_101e4393e;
undefined4 DAT_101e43942;
undefined4 DAT_101e43946;
undefined4 DAT_101e4394a;
undefined4 DAT_101e4394e;
undefined4 DAT_101e43952;
undefined4 DAT_101e43956;
undefined4 DAT_101e4395a;
undefined4 DAT_101e4395e;
undefined4 DAT_101e43962;
undefined4 DAT_101e43966;
undefined4 DAT_101e4396a;
undefined4 DAT_101e4396e;
undefined4 DAT_101e43972;
undefined4 DAT_101e43976;
undefined4 DAT_101e4397a;
undefined4 DAT_101e4397e;
undefined4 DAT_101e43982;
undefined4 DAT_101e43986;
undefined4 DAT_101e4398a;
undefined4 DAT_101e4398e;
undefined4 DAT_101e43992;
undefined4 DAT_101e43996;
undefined4 DAT_101e4399a;
undefined4 DAT_101e4399e;
undefined4 DAT_101e439a2;
undefined4 DAT_101e439a6;
undefined4 DAT_101e439aa;
undefined4 DAT_101e439ae;
undefined4 DAT_101e439b2;
undefined4 DAT_101e439b6;
undefined4 DAT_101e439ba;
undefined4 DAT_101e439be;
undefined4 DAT_101e439c2;
undefined4 DAT_101e439c6;
undefined4 DAT_101e439ca;
undefined4 DAT_101e439ce;
undefined4 DAT_101e439d2;
undefined4 DAT_101e439d6;
undefined4 DAT_101e439da;
undefined4 DAT_101e439de;
undefined4 DAT_101e439e2;
undefined4 DAT_101e439e6;
undefined4 DAT_101e439ea;
undefined4 DAT_101e439f4;
undefined4 DAT_101e439f8;
undefined4 DAT_101e439fc;
undefined4 DAT_101e43a00;
undefined4 DAT_101e43a0c;
undefined4 DAT_101e43a10;
undefined4 DAT_101e43a14;
undefined4 DAT_101e439f0;
undefined4 DAT_101e43a18;
undefined4 DAT_101e43a04;
undefined4 DAT_101e43a1c;
undefined4 DAT_101e43a08;
undefined4 DAT_101e43a20;
undefined4 DAT_101e43a24;
undefined4 DAT_101e43a28;
undefined4 DAT_101e43a2c;
undefined4 DAT_101e43a30;
undefined4 DAT_101e43a34;
undefined4 DAT_101e43a38;
undefined4 DAT_101e43a3c;
undefined4 DAT_101e43a40;
undefined4 DAT_101e43a44;
undefined4 DAT_101e43a48;
undefined4 DAT_101e43a4c;
undefined4 DAT_101e43a50;
undefined4 DAT_101e43a54;
undefined4 DAT_101e43a58;
undefined4 DAT_101e43a5c;
undefined4 DAT_101e43a60;
undefined4 DAT_101e43a64;
undefined4 DAT_101e43a68;
undefined4 DAT_101e43a6c;
undefined4 DAT_101e43a70;
undefined4 DAT_101e43a74;
undefined4 DAT_101e43a78;
undefined4 DAT_101e43a7c;
undefined4 DAT_101e43a80;
undefined4 DAT_101e43a84;
undefined4 DAT_101e43a88;
undefined *PTR_FUN_10146bf00;
undefined *PTR_FUN_10146bf38;
undefined *PTR____cxa_pure_virtual_10146bf68;
undefined thunk_FUN_1001f1bf8;
undefined *PTR_FUN_10146bf90;
undefined *PTR_FUN_10146bfd0;
undefined *PTR____cxa_pure_virtual_10146c368;
undefined *PTR_FUN_10146c3a0;
undefined *PTR_FUN_10146c3e0;
undefined *PTR_FUN_10146c778;
undefined *PTR____cxa_pure_virtual_10146c7b0;
pointer PTR_FUN_10146c7d8;
pointer PTR_FUN_10146c7f8;
pointer PTR_thunk_FUN_1001f2c64_10146c818;
pointer PTR_FUN_10146c838;
undefined *PTR_FUN_10146c858;
undefined thunk_FUN_1001f392c;
undefined *PTR_FUN_10146c8c0;
pointer PTR_FUN_10146c918;
undefined *PTR____cxa_pure_virtual_10146c948;
undefined thunk_FUN_1001f3a48;
undefined FUN_1001f3c5c;
undefined FUN_1001f3d84;
undefined FUN_1001f3d9c;
undefined FUN_1001f3db4;
pointer PTR_FUN_10146c930;
undefined FUN_1001f4134;
undefined *PTR_FUN_10146c978;
undefined *PTR_FUN_10146c9a8;
undefined *PTR____cxa_pure_virtual_10146c9d8;
undefined thunk_FUN_1001f3f84;
undefined *PTR_FUN_10146ca00;
undefined thunk_FUN_1001f4228;
undefined *PTR_FUN_10146ca30;
undefined *PTR____cxa_pure_virtual_10146ca60;
undefined thunk_FUN_1001f4444;
undefined *PTR_FUN_10146ca88;
undefined *PTR_FUN_10146cab8;
undefined *PTR____cxa_pure_virtual_10146cae8;
undefined *PTR_FUN_10146cb10;
undefined *PTR_FUN_10146cb78;
undefined *PTR_FUN_10146cf10;
undefined *PTR____cxa_pure_virtual_10146cf40;
undefined *PTR_FUN_10146cf98;
undefined *PTR_FUN_10146cfd0;
undefined *PTR_FUN_10146d368;
undefined *PTR____cxa_pure_virtual_10146d398;
undefined *PTR_thunk_FUN_1001f53b4_10146d3c0;
undefined *PTR_FUN_10146d3f0;
undefined FUN_1001f53a8;
undefined *PTR_FUN_10146d788;
pointer PTR_FUN_10146d7c0;
undefined FUN_1001f5644;
undefined *PTR_thunk_FUN_1001f5760_10146d7e0;
undefined *PTR_FUN_10146d810;
undefined *PTR_FUN_10146dba8;
undefined thunk_FUN_1001f5720;
pointer PTR_FUN_10146dbe0;
undefined *PTR_thunk_FUN_1001f5dd4_10146dc00;
undefined *PTR_FUN_10146dc68;
undefined *PTR_FUN_10146e000;
pointer PTR_FUN_10146e058;
pointer PTR_FUN_10146e070;
undefined FUN_1001f63c8;
undefined FUN_1001f6404;
undefined *PTR_thunk_FUN_1001f64ec_10146e090;
undefined *PTR_FUN_10146e0c0;
undefined *PTR_FUN_10146e458;
pointer PTR_FUN_10146e490;
undefined FUN_1001f67ec;
undefined *PTR_FUN_10146e4b0;
pointer PTR_thunk_FUN_1001f6bac_10146e4e8;
pointer PTR_FUN_10146e508;
pointer PTR_thunk_FUN_1001f6d44_10146e528;
pointer PTR_FUN_10146e568;
undefined thunk_FUN_1001f6e10;
pointer PTR_thunk_FUN_1001f6f30_10146e548;
pointer PTR_FUN_10146e588;
undefined *PTR_thunk_FUN_1001f78f4_10146e5a8;
undefined FUN_1001f8880;
undefined *PTR_thunk_FUN_1001f7d30_10146e5d8;
undefined *PTR_FUN_10146e600;
pointer PTR_FUN_10146e6b0;
undefined FUN_1001f7d18;
undefined FUN_1001f898c;
pointer PTR_thunk_FUN_1001f8044_10146e630;
pointer PTR_FUN_10146e6d0;
undefined *PTR_FUN_10146e650;
undefined *PTR_FUN_10146e680;
pointer PTR_thunk_FUN_1001f8b80_10146e6f0;
pointer PTR_FUN_10146e710;
undefined *PTR_FUN_10146e730;
pointer PTR_FUN_10146e7b0;
undefined thunk_FUN_1001f9f00;
undefined *PTR____cxa_pure_virtual_10146e7d0;
undefined thunk_FUN_1001f97d8;
undefined thunk_FUN_1001fa130;
undefined FUN_1001f95ec;
undefined FUN_1001f9600;
undefined FUN_1001fb074;
undefined FUN_1001fa99c;
undefined FUN_1001fa944;
undefined FUN_1001fa970;
undefined *PTR_FUN_10146e838;
undefined *PTR____cxa_pure_virtual_10146e880;
undefined1 DAT_101e43ab8;
undefined1 DAT_101e43ad0;
undefined DAT_101e43aa8;
undefined DAT_101e43ac0;
undefined *PTR____cxa_pure_virtual_10146e960;
undefined *PTR_FUN_10146e990;
undefined *PTR_FUN_10146e9d0;
undefined *PTR____cxa_pure_virtual_10146ea08;
undefined FUN_1001fc850;
undefined *PTR_s_rare_10146ea28;
undefined *PTR_FUN_10146ea50;
undefined *PTR_FUN_10146ea88;
undefined *PTR____cxa_pure_virtual_10146eab0;
undefined4 DAT_101d237a0;
undefined1 DAT_101e43ad8;
undefined2 DAT_101e43ada;
undefined2 DAT_101e43adc;
undefined4 DAT_101e43ade;
undefined4 DAT_101e43ae2;
undefined4 DAT_101e43ae6;
undefined4 DAT_101e43aea;
undefined4 DAT_101e43aee;
undefined4 DAT_101e43af2;
undefined4 DAT_101e43af6;
undefined4 DAT_101e43afa;
undefined4 DAT_101e43afe;
undefined4 DAT_101e43b02;
undefined4 DAT_101e43b06;
undefined4 DAT_101e43b0a;
undefined4 DAT_101e43b0e;
undefined4 DAT_101e43b12;
undefined4 DAT_101e43b16;
undefined4 DAT_101e43b1a;
undefined4 DAT_101e43b1e;
undefined4 DAT_101e43b22;
undefined4 DAT_101e43b26;
undefined4 DAT_101e43b2a;
undefined4 DAT_101e43b2e;
undefined4 DAT_101e43b32;
undefined4 DAT_101e43b36;
undefined4 DAT_101e43b3a;
undefined4 DAT_101e43b3e;
undefined4 DAT_101e43b42;
undefined4 DAT_101e43b46;
undefined4 DAT_101e43b4a;
undefined4 DAT_101e43b4e;
undefined4 DAT_101e43b52;
undefined4 DAT_101e43b56;
undefined4 DAT_101e43b5a;
undefined4 DAT_101e43b5e;
undefined4 DAT_101e43b62;
undefined4 DAT_101e43b66;
undefined4 DAT_101e43b6a;
undefined4 DAT_101e43b6e;
undefined4 DAT_101e43b72;
undefined4 DAT_101e43b76;
undefined4 DAT_101e43b7a;
undefined4 DAT_101e43b7e;
undefined4 DAT_101e43b82;
undefined4 DAT_101e43b86;
undefined4 DAT_101e43b8a;
undefined4 DAT_101e43b8e;
undefined4 DAT_101e43b92;
undefined4 DAT_101e43b96;
undefined4 DAT_101e43b9a;
undefined4 DAT_101e43b9e;
undefined4 DAT_101e43ba2;
undefined4 DAT_101e43ba6;
undefined4 DAT_101e43baa;
undefined4 DAT_101e43bb4;
undefined4 DAT_101e43bb8;
undefined4 DAT_101e43bbc;
undefined4 DAT_101e43bc0;
undefined4 DAT_101e43bcc;
undefined4 DAT_101e43bd0;
undefined4 DAT_101e43bd4;
undefined4 DAT_101e43bb0;
undefined4 DAT_101e43bd8;
undefined4 DAT_101e43bc4;
undefined4 DAT_101e43bdc;
undefined4 DAT_101e43bc8;
undefined4 DAT_101e43be0;
undefined4 DAT_101e43be4;
undefined4 DAT_101e43be8;
undefined4 DAT_101e43bec;
undefined4 DAT_101e43bf0;
undefined4 DAT_101e43bf4;
undefined4 DAT_101e43bf8;
undefined4 DAT_101e43bfc;
undefined4 DAT_101e43c00;
undefined4 DAT_101e43c04;
undefined4 DAT_101e43c08;
undefined4 DAT_101e43c0c;
undefined4 DAT_101e43c10;
undefined4 DAT_101e43c14;
undefined4 DAT_101e43c18;
undefined4 DAT_101e43c1c;
undefined4 DAT_101e43c20;
undefined4 DAT_101e43c24;
undefined4 DAT_101e43c28;
undefined4 DAT_101e43c2c;
undefined4 DAT_101e43c30;
undefined4 DAT_101e43c34;
undefined4 DAT_101e43c38;
undefined4 DAT_101e43c3c;
undefined4 DAT_101e43c40;
undefined4 DAT_101e43c44;
undefined4 DAT_101e43c48;
pointer PTR_FUN_10146ead8;
pointer PTR_FUN_10146eaf8;
undefined FUN_1001fdb84;
undefined FUN_1001fdc74;
undefined thunk_FUN_1001fe0d4;
undefined thunk_FUN_1001feee8;
undefined thunk_FUN_1001fedec;
undefined thunk_FUN_1001fefac;
undefined thunk_FUN_1001fef3c;
undefined *PTR_FUN_10146eb18;
undefined thunk_FUN_1001ff26c;
pointer PTR_FUN_10146eb78;
undefined thunk_FUN_1001ff088;
undefined *PTR_FUN_10146eb90;
undefined thunk_FUN_1001febf8;
undefined *PTR_FUN_10146ebc0;
undefined thunk_FUN_1001ff2c4;
undefined *PTR_FUN_10146ef58;
undefined thunk_FUN_1001ff5c0;
undefined *PTR____cxa_pure_virtual_10146ef88;
undefined thunk_FUN_1001ff430;
undefined FUN_1001ff8e4;
undefined FUN_1001ff8fc;
undefined FUN_1001ff920;
undefined FUN_1001ff93c;
undefined FUN_1001ff954;
undefined FUN_1001ff96c;
undefined FUN_1001ff988;
undefined FUN_1001ffa48;
undefined thunk_FUN_1001fe4cc;
undefined thunk_FUN_1001fe5c8;
undefined thunk_FUN_1001fe744;
undefined FUN_1001ffb74;
undefined thunk_FUN_1001fe7fc;
undefined FUN_1001fe980;
byte DAT_101e43c4c;
char DAT_101d23848;
byte DAT_101e43c4d;
undefined thunk_FUN_1001fe850;
undefined1 DAT_101d23848;
undefined FUN_1001ff424;
undefined thunk_FUN_1001fe8a4;
undefined *PTR_FUN_10146efc8;
undefined *PTR_FUN_10146f000;
undefined *PTR_FUN_10146f4e0;
undefined thunk_FUN_1002006a8;
undefined *PTR____cxa_pure_virtual_10146f510;
undefined thunk_FUN_100200708;
undefined thunk_FUN_1001fff28;
undefined thunk_FUN_1002008bc;
undefined *PTR_FUN_10146f398;
undefined thunk_FUN_100200938;
undefined *PTR_FUN_10146f540;
undefined *PTR_FUN_10146f590;
undefined *PTR____cxa_pure_virtual_10146f5d0;
undefined thunk_FUN_1002015f8;
undefined *PTR_FUN_10146f610;
undefined *PTR_FUN_10146f658;
undefined *PTR_FUN_10146f688;
undefined *PTR____cxa_pure_virtual_10146f6b0;
undefined DAT_101e43dc8;
undefined4 DAT_101d237a4;
undefined *PTR_s_5v5_standard_10146f6d8;
undefined4 DAT_101d23804;
undefined *PTR_s_very_easy_10146f710;
undefined1 DAT_101e43c50;
undefined2 DAT_101e43c52;
undefined2 DAT_101e43c54;
undefined4 DAT_101e43c56;
undefined4 DAT_101e43c5a;
undefined4 DAT_101e43c5e;
undefined4 DAT_101e43c62;
undefined4 DAT_101e43c66;
undefined4 DAT_101e43c6a;
undefined4 DAT_101e43c6e;
undefined4 DAT_101e43c72;
undefined4 DAT_101e43c76;
undefined4 DAT_101e43c7a;
undefined4 DAT_101e43c7e;
undefined4 DAT_101e43c82;
undefined4 DAT_101e43c86;
undefined4 DAT_101e43c8a;
undefined4 DAT_101e43c8e;
undefined4 DAT_101e43c92;
undefined4 DAT_101e43c96;
undefined4 DAT_101e43c9a;
undefined4 DAT_101e43c9e;
undefined4 DAT_101e43ca2;
undefined4 DAT_101e43ca6;
undefined4 DAT_101e43caa;
undefined4 DAT_101e43cae;
undefined4 DAT_101e43cb2;
undefined4 DAT_101e43cb6;
undefined4 DAT_101e43cba;
undefined4 DAT_101e43cbe;
undefined4 DAT_101e43cc2;
undefined4 DAT_101e43cc6;
undefined4 DAT_101e43cca;
undefined4 DAT_101e43cce;
undefined4 DAT_101e43cd2;
undefined4 DAT_101e43cd6;
undefined4 DAT_101e43cda;
undefined4 DAT_101e43cde;
undefined4 DAT_101e43ce2;
undefined4 DAT_101e43ce6;
undefined4 DAT_101e43cea;
undefined4 DAT_101e43cee;
undefined4 DAT_101e43cf2;
undefined4 DAT_101e43cf6;
undefined4 DAT_101e43cfa;
undefined4 DAT_101e43cfe;
undefined4 DAT_101e43d02;
undefined4 DAT_101e43d06;
undefined4 DAT_101e43d0a;
undefined4 DAT_101e43d0e;
undefined4 DAT_101e43d12;
undefined4 DAT_101e43d16;
undefined4 DAT_101e43d1a;
undefined4 DAT_101e43d1e;
undefined4 DAT_101e43d22;
undefined4 DAT_101e43d2c;
undefined4 DAT_101e43d30;
undefined4 DAT_101e43d34;
undefined4 DAT_101e43d38;
undefined4 DAT_101e43d44;
undefined4 DAT_101e43d48;
undefined4 DAT_101e43d4c;
undefined4 DAT_101e43d28;
undefined4 DAT_101e43d50;
undefined4 DAT_101e43d3c;
undefined4 DAT_101e43d54;
undefined4 DAT_101e43d40;
undefined4 DAT_101e43d58;
undefined4 DAT_101e43d5c;
undefined4 DAT_101e43d60;
undefined4 DAT_101e43d64;
undefined4 DAT_101e43d68;
undefined4 DAT_101e43d6c;
undefined4 DAT_101e43d70;
undefined4 DAT_101e43d74;
undefined4 DAT_101e43d78;
undefined4 DAT_101e43d7c;
undefined4 DAT_101e43d80;
undefined4 DAT_101e43d84;
undefined4 DAT_101e43d88;
undefined4 DAT_101e43d8c;
undefined4 DAT_101e43d90;
undefined4 DAT_101e43d94;
undefined4 DAT_101e43d98;
undefined4 DAT_101e43d9c;
undefined4 DAT_101e43da0;
undefined4 DAT_101e43da4;
undefined4 DAT_101e43da8;
undefined4 DAT_101e43dac;
undefined4 DAT_101e43db0;
undefined4 DAT_101e43db4;
undefined4 DAT_101e43db8;
undefined4 DAT_101e43dbc;
undefined4 DAT_101e43dc0;
pointer PTR_FUN_10146f748;
pointer PTR_FUN_10146f768;
undefined DAT_10115834f;
undefined *PTR_FUN_10146f788;
undefined *PTR_FUN_10146f7e0;
undefined *PTR_FUN_10146f820;
undefined *PTR_FUN_10146f850;
undefined *PTR____cxa_pure_virtual_10146f878;
undefined DAT_101158353;
undefined thunk_FUN_100204720;
undefined *PTR_FUN_10146f8a8;
undefined *PTR____cxa_pure_virtual_10146f8d8;
undefined *PTR_FUN_10146f908;
undefined *PTR_FUN_10146f930;
pointer PTR_FUN_10146fcc8;
undefined *PTR_thunk_FUN_100205540_10146fce8;
undefined thunk_FUN_1002054cc;
undefined thunk_FUN_1002057d4;
pointer PTR_thunk_FUN_100205b8c_10146fd18;
pointer PTR_FUN_10146fd38;
undefined thunk_FUN_100205e98;
undefined *PTR_thunk_FUN_10020698c_10146fd58;
undefined *PTR_FUN_10146fd80;
pointer PTR_FUN_10146fda8;
undefined *PTR_FUN_10146fdc8;
undefined *PTR____cxa_pure_virtual_10146fdf8;
undefined *PTR_FUN_10146fe28;
undefined *PTR_FUN_10146fe78;
undefined *PTR_FUN_10146fea8;
undefined *PTR____cxa_pure_virtual_101470240;
pointer PTR_FUN_101470280;
pointer PTR_FUN_1014702a0;
undefined *PTR_thunk_FUN_100207574_1014702c0;
pointer PTR_FUN_101470300;
undefined *PTR_FUN_101470320;
pointer PTR____cxa_pure_virtual_1014706b8;
pointer PTR_FUN_1014706d8;
undefined thunk_FUN_1002077f0;
undefined thunk_FUN_100207880;
undefined *PTR_thunk_FUN_100207dd4_1014706f8;
undefined *PTR_FUN_101470730;
undefined *PTR_FUN_101470ac8;
undefined *PTR_FUN_101470b00;
undefined *PTR_FUN_101470b30;
pointer PTR_FUN_101470b68;
undefined thunk_FUN_100208000;
undefined FUN_10034bef0;
undefined *PTR_thunk_FUN_100208b4c_101470b88;
pointer PTR_FUN_101470bb8;
pointer PTR_FUN_101470bd8;
undefined thunk_FUN_100208ec8;
undefined thunk_FUN_100208d44;
undefined *PTR_FUN_101470bf8;
undefined *PTR____cxa_pure_virtual_101470c28;
undefined *PTR_FUN_101470c58;
undefined *PTR____cxa_pure_virtual_101470c80;
undefined DAT_101470ca8;
undefined *PTR_FUN_101470ce8;
undefined *PTR_FUN_101471080;
undefined *PTR____cxa_pure_virtual_1014710b8;
undefined thunk_FUN_1002099d0;
undefined thunk_FUN_100209b58;
undefined FUN_10020a598;
undefined *PTR_FUN_1014710e0;
undefined *PTR_FUN_101471130;
undefined thunk_FUN_10020a3d8;
pointer PTR_FUN_1014714d8;
undefined *PTR____cxa_pure_virtual_1014714f8;
undefined thunk_FUN_10020a080;
undefined FUN_10020a560;
undefined *PTR_FUN_101471528;
undefined *PTR_FUN_1014715a0;
undefined *PTR_FUN_1014715d0;
undefined *PTR____cxa_pure_virtual_101471968;
undefined thunk_FUN_10020b280;
undefined FUN_10020b910;
undefined thunk_FUN_10020c964;
undefined thunk_FUN_10020c7b4;
undefined thunk_FUN_10020c88c;
undefined thunk_FUN_10020b3c0;
undefined thunk_FUN_10020b41c;
undefined *PTR_FUN_101471b00;
undefined *PTR_FUN_101471b30;
pointer PTR_FUN_101471ec8;
undefined DAT_101471ee0;
undefined *PTR_FUN_101471f38;
undefined *PTR____cxa_pure_virtual_101471f78;
undefined *PTR_FUN_1014719a8;
undefined *PTR_FUN_101471a68;
undefined *PTR_FUN_101471ac0;
undefined thunk_FUN_10020dbd0;
undefined FUN_10020dbc4;
undefined FUN_100111120;
undefined thunk_FUN_10020ff34;
undefined FUN_1002104c4;
undefined FUN_1002104d0;
undefined thunk_FUN_10020fc14;
undefined thunk_FUN_10020fdf0;
pointer PTR_FUN_101471ff8;
undefined FUN_100211ec0;
undefined FUN_100212748;
undefined FUN_1002127ac;
undefined FUN_100211fb8;
undefined FUN_1002127f4;
undefined *PTR_FUN_101471fc0;
undefined FUN_100211fb4;
pointer PTR_FUN_101472020;
undefined FUN_100211fe0;
pointer PTR_FUN_101472040;
undefined FUN_100211fbc;
pointer PTR_FUN_101472060;
undefined FUN_1002122ec;
pointer PTR_FUN_101472080;
undefined FUN_100212260;
pointer PTR_FUN_1014720a0;
undefined FUN_1002123b0;
pointer PTR_FUN_1014720c0;
undefined FUN_1002122fc;
undefined *PTR____cxa_pure_virtual_101472158;
undefined FUN_1002123c4;
undefined FUN_1002123b4;
undefined FUN_100212650;
undefined FUN_10021258c;
undefined FUN_1002127e4;
undefined FUN_10021270c;
undefined FUN_1002127f0;
undefined FUN_10021551c;
undefined FUN_100211ee0;
undefined FUN_100211f18;
undefined FUN_100211f4c;
undefined FUN_100211f84;
undefined FUN_100211fe4;
undefined FUN_10021201c;
undefined FUN_100212264;
undefined FUN_10021229c;
undefined FUN_100212300;
undefined FUN_1002123c8;
undefined FUN_100212400;
undefined FUN_100212548;
undefined FUN_100212590;
undefined FUN_100212654;
undefined FUN_10021268c;
undefined FUN_100212710;
undefined FUN_1002154f8;
undefined FUN_100211850;
undefined *PTR_s_build://MenuCharPortraitsHD.png_1018549d0;
undefined *PTR_s_build://MenuCharPortraitsHD2.atl_1018549d8;
undefined *PTR_s_build://SpoilsOfWarPartsCommon.t_101854a50;
pointer PTR_thunk_FUN_100214410_1014720e0;
pointer PTR_FUN_101472108;
pointer PTR_FUN_101472130;
pointer PTR_FUN_10148df60;
undefined FUN_10021183c;
undefined *PTR_thunk_FUN_100214410_10148df38;
undefined *PTR_FUN_101472190;
undefined *PTR____cxa_pure_virtual_1014721c0;
undefined thunk_FUN_100217520;
undefined DAT_101158388;
undefined *PTR_FUN_1014721f0;
undefined *PTR____cxa_pure_virtual_101472220;
undefined thunk_FUN_10021780c;
undefined *PTR_FUN_101472250;
undefined *PTR_FUN_101472298;
undefined *PTR_FUN_101472630;
undefined *PTR____cxa_pure_virtual_101472668;
undefined *PTR_FUN_101472690;
undefined *PTR____cxa_pure_virtual_1014726c8;
undefined *PTR_FUN_101472700;
undefined FUN_100217fa4;
undefined *PTR____cxa_pure_virtual_101472728;
undefined *PTR_FUN_101472750;
undefined *PTR_FUN_101472780;
pointer PTR_FUN_1014727b0;
undefined thunk_FUN_1002e905c;
undefined *PTR_thunk_FUN_1002184bc_1014727d0;
undefined *PTR_FUN_101472808;
undefined *PTR_FUN_101472ba0;
pointer PTR_FUN_101472bd8;
undefined *PTR_FUN_101472bf8;
undefined *PTR_FUN_101472c80;
undefined *PTR____cxa_pure_virtual_101472cc0;
undefined *PTR_FUN_101472d30;
undefined4 DAT_101d237ec;
undefined *PTR_FUN_101472e60;
undefined thunk_FUN_1001b3648;
undefined *PTR_FUN_101472f90;
undefined *PTR_FUN_1014730f0;
undefined *PTR_FUN_101473220;
undefined4 DAT_101d237f0;
undefined *PTR_FUN_101473378;
undefined *PTR_thunk_FUN_10021a6bc_1014734a8;
long DAT_101d237a8;
undefined *PTR_FUN_1014735f0;
undefined *PTR_FUN_101473728;
undefined8 DAT_101d237a8;
undefined4 DAT_101d237f4;
undefined *PTR_FUN_101473ac0;
undefined *PTR_FUN_101473bf0;
undefined *PTR_thunk_FUN_10021c120_101473d20;
undefined *PTR_s_build://SpoilsOfWarBg.png_101854a58;
undefined thunk_FUN_10021d18c;
undefined thunk_FUN_10021d134;
undefined thunk_FUN_10021d1e4;
undefined *PTR_thunk_FUN_10021ccfc_101473e70;
undefined thunk_FUN_10021d23c;
undefined4 DAT_101d23814;
undefined FUN_10021d474;
undefined FUN_10021d5d4;
undefined *PTR_s_build://ModalCommon.atlas_101854a68;
undefined FUN_10021d604;
undefined4 DAT_101d23818;
undefined FUN_10021d764;
undefined FUN_10021d794;
undefined *PTR_FUN_101473fa0;
undefined DAT_101158398;
undefined *PTR_FUN_10148bdf0;
undefined *PTR_FUN_1014740d0;
long DAT_101d237b0;
undefined *PTR_thunk_FUN_1001b4464_101474200;
undefined8 DAT_101d237b0;
undefined FUN_10021e964;
undefined thunk_FUN_10021f4a0;
undefined thunk_FUN_10021f400;
undefined FUN_10021e97c;
undefined *PTR_thunk_FUN_10021ec78_101474330;
undefined *PTR_FUN_101474468;
undefined *PTR_s_build://Frames.tga_101854a00;
undefined *PTR_FUN_101474490;
undefined *PTR_FUN_1014745d8;
undefined *PTR_FUN_101474708;
undefined thunk_FUN_100220084;
undefined *PTR_thunk_FUN_1002204a0_101474860;
undefined *PTR_FUN_101474990;
undefined *PTR_FUN_101474ac0;
undefined *PTR_FUN_101474bf0;
undefined thunk_FUN_100221158;
undefined FUN_100221068;
undefined *PTR_FUN_10146e8f8;
undefined *PTR_FUN_10146e930;
undefined *PTR_thunk_FUN_100221254_101474d20;
undefined thunk_FUN_100221fe4;
long DAT_101d237b8;
undefined *PTR_FUN_101474e50;
undefined8 DAT_101d237b8;
undefined *PTR_FUN_101474f80;
undefined *PTR_thunk_FUN_100221b6c_1014750b0;
undefined FUN_100221b64;
undefined FUN_100221f88;
undefined FUN_10022254c;
undefined FUN_100222544;
undefined *PTR_FUN_1014751e0;
undefined *PTR_FUN_101475318;
undefined *PTR_FUN_1014756b0;
undefined *PTR_FUN_1014757e0;
undefined thunk_FUN_10022325c;
undefined thunk_FUN_1002230f4;
undefined FUN_100223768;
undefined thunk_FUN_1002233a4;
undefined thunk_FUN_10022344c;
undefined *PTR_FUN_101475910;
undefined *PTR_FUN_101475a48;
undefined *PTR_thunk_FUN_100223f58_101475b78;
undefined FUN_100223f48;
long DAT_101d237c0;
undefined *PTR_FUN_101475ca0;
undefined *PTR_FUN_101475dd8;
undefined8 DAT_101d237c0;
undefined *PTR_FUN_101476170;
undefined DAT_1011583cc;
undefined *PTR_FUN_1014762a0;
undefined DAT_1011583d4;
undefined thunk_FUN_100225238;
undefined *PTR_thunk_FUN_100225310_1014763d0;
undefined thunk_FUN_100225298;
undefined DAT_1011583dc;
undefined *PTR_thunk_FUN_10022542c_101476500;
undefined FUN_100225794;
undefined FUN_100225a8c;
undefined FUN_100225a78;
undefined *PTR_thunk_FUN_100225acc_101476630;
undefined *PTR_FUN_101476810;
undefined *PTR_thunk_FUN_100225acc_101476838;
undefined *PTR_FUN_101476a18;
undefined *PTR_FUN_101476a40;
undefined thunk_FUN_10022675c;
undefined *PTR_s_build://NeteaseLogo.png_1018549c0;
undefined *PTR_s_build://NeteaseChinaPublishing.p_1018549c8;
undefined FUN_100226570;
undefined FUN_100226690;
undefined thunk_FUN_10022a690;
undefined thunk_FUN_10022a54c;
undefined *PTR_thunk_FUN_10022ae54_101476ba8;
undefined *PTR_FUN_101476ca8;
undefined *PTR_FUN_101476cd8;
undefined thunk_FUN_10022a47c;
undefined FUN_1002295cc;
undefined thunk_FUN_10022a7e4;
undefined thunk_FUN_10022a92c;
undefined FUN_10022aa6c;
undefined FUN_10022aa68;
undefined thunk_FUN_10022aa70;
undefined thunk_FUN_10022abac;
undefined thunk_FUN_10022aca8;
undefined thunk_FUN_10022acf8;
undefined FUN_10022b2f0;
undefined *PTR_thunk_FUN_10022b2fc_101477070;
undefined *PTR_FUN_101477240;
undefined thunk_FUN_100231480;
undefined thunk_FUN_100231764;
undefined FUN_10022e360;
undefined thunk_FUN_100231900;
undefined *PTR_thunk_FUN_10022e36c_101477268;
undefined thunk_FUN_100231648;
undefined FUN_10022e32c;
undefined thunk_FUN_100231a5c;
undefined thunk_FUN_100231bcc;
undefined thunk_FUN_100231d94;
undefined thunk_FUN_100231c1c;
undefined thunk_FUN_100231cd8;
undefined FUN_10022f884;
undefined4 DAT_101158460;
undefined FUN_100230d40;
undefined *PTR_s_MENU_GUILD_AVAILABILITY_OFFLINE_1014774c0;
undefined *PTR_DAT_1014774e8;
undefined thunk_FUN_100232720;
undefined *PTR_thunk_FUN_100232c30_1014773d0;
undefined thunk_FUN_1002327cc;
pointer PTR_FUN_101464ce8;
undefined thunk_FUN_1002362dc;
undefined thunk_FUN_100236284;
undefined DAT_1011584ba;
undefined FUN_1002340f0;
undefined thunk_FUN_100236d08;
undefined thunk_FUN_1002365d8;
undefined thunk_FUN_100236dac;
undefined FUN_1002341f0;
undefined thunk_FUN_100236334;
undefined thunk_FUN_100236f6c;
undefined FUN_1002341f8;
undefined *PTR_thunk_FUN_1002342b0_101477520;
undefined *PTR_FUN_1014776a0;
undefined *PTR_FUN_1014776c8;
undefined FUN_100234180;
undefined FUN_1002341b0;
undefined FUN_100234200;
undefined FUN_100238170;
undefined FUN_1002381f4;
undefined FUN_10023816c;
undefined FUN_10023812c;
undefined *PTR_FUN_1014776f8;
undefined FUN_100238160;
undefined FUN_100237f54;
undefined FUN_100237f50;
undefined thunk_FUN_10023a3f8;
undefined *PTR_thunk_FUN_100238998_101477840;
undefined FUN_10023a5f0;
undefined *PTR_FUN_101477aa8;
undefined FUN_10023ac78;
undefined *PTR_thunk_FUN_10023b344_1014779a8;
undefined FUN_10023baec;
undefined thunk_FUN_10023cd58;
undefined thunk_FUN_10023ccdc;
undefined thunk_FUN_10023ce64;
undefined thunk_FUN_10023cdd4;
undefined *PTR_thunk_FUN_10023bbe4_101477bf0;
undefined thunk_FUN_10023cef4;
undefined *PTR_FUN_101477e00;
undefined FUN_10023bac0;
undefined FUN_10023bb80;
undefined FUN_10023bb14;
undefined FUN_10023bb88;
undefined thunk_FUN_10023c094;
undefined FUN_10023c04c;
undefined FUN_10023c048;
undefined FUN_10023e144;
undefined FUN_10023e08c;
undefined FUN_10023d1ec;
undefined thunk_FUN_10023c050;
undefined thunk_FUN_10023f2f4;
undefined thunk_FUN_10023f358;
undefined *PTR_thunk_FUN_10023f914_101478198;
undefined4 DAT_101854ac8;
undefined4 DAT_101854acc;
undefined4 DAT_101854ad0;
undefined4 DAT_101854ad4;
undefined4 DAT_101854ad8;
undefined4 DAT_101854adc;
undefined *PTR_FUN_1014782e0;
undefined *PTR_thunk_FUN_100240838_101478430;
undefined DAT_1011584d8;
undefined *PTR_FUN_101478578;
undefined *PTR_FUN_101478678;
undefined *PTR_thunk_FUN_100241754_101478778;
undefined *PTR_s_build://LowPriorityQueue.tga_1018549e8;
undefined FUN_1002416c4;
undefined thunk_FUN_100242b28;
undefined thunk_FUN_100242ad8;
undefined *PTR_s_MENU_LPQ_NOTIFICATION_DESCRIPTIO_1014788d0;
undefined *PTR_s_build://MenuBackground_HeroHub.p_101854990;
undefined DAT_101158514;
undefined *PTR_thunk_FUN_100243220_101478920;
undefined *PTR_FUN_101478b68;
undefined *PTR_FUN_101478f00;
undefined *PTR_FUN_101478f48;
undefined FUN_100243200;
undefined *PTR_FUN_101478fa0;
undefined thunk_FUN_100246a3c;
undefined FUN_1002469bc;
undefined FUN_100245a14;
undefined *PTR_thunk_FUN_100246ba4_101479a98;
undefined *PTR_thunk_FUN_100246f28_101478fc8;
undefined *PTR_FUN_101479158;
undefined *PTR_FUN_1014794f0;
undefined *PTR_FUN_1014796d8;
undefined *PTR_FUN_101479700;
undefined DAT_101158528;
undefined FUN_100247ed4;
undefined *PTR_FUN_101479c18;
undefined FUN_100248318;
undefined *PTR_thunk_FUN_100225acc_101479dd0;
undefined *PTR_FUN_101479fb0;
undefined *PTR_thunk_FUN_10024b44c_101479fd8;
undefined *PTR_FUN_10147a228;
undefined *PTR_FUN_10147a5c0;
undefined thunk_FUN_1002194d0;
undefined *PTR_FUN_10147a620;
undefined *PTR_FUN_10147a678;
undefined thunk_FUN_100252b24;
undefined thunk_FUN_100252a20;
undefined FUN_10024b3c4;
undefined thunk_FUN_10024e69c;
undefined FUN_10024b3d4;
undefined DAT_101158538;
undefined FUN_10024b3e4;
undefined DAT_101158540;
undefined FUN_10024b3dc;
undefined DAT_101158590;
undefined thunk_FUN_100252bb8;
undefined FUN_10024b388;
undefined thunk_FUN_100251990;
undefined FUN_10024b400;
undefined FUN_10024b440;
undefined FUN_10024b438;
undefined DAT_101158584;
undefined FUN_10024f37c;
undefined FUN_10024f384;
undefined *PTR_FUN_10147a6b8;
undefined FUN_1002501b4;
undefined *PTR_s_MENU_PARTY_COULD_NOT_INVITE_NOT__10147a828;
undefined *PTR_thunk_FUN_1002546e8_10147a850;
undefined *PTR_FUN_10147a9c0;
undefined thunk_FUN_100254ed8;
undefined FUN_100254f48;
undefined thunk_FUN_1002587e8;
undefined *PTR_thunk_FUN_100256f78_10147a9e8;
undefined *PTR_FUN_10147ab58;
undefined DAT_101158614;
undefined thunk_FUN_1002599f8;
undefined FUN_100256b68;
undefined FUN_100256ba0;
undefined FUN_100256b6c;
undefined thunk_FUN_100259c48;
undefined FUN_100259be0;
undefined *PTR_s_build://Chests.tga_1018549e0;
undefined *PTR_thunk_FUN_100259034_10147ab80;
undefined FUN_10025b11c;
undefined thunk_FUN_10025bee4;
undefined thunk_FUN_10025b448;
undefined *PTR_thunk_FUN_10025b12c_10147ac80;
undefined *PTR_thunk_FUN_10025cfb8_10147ade8;
undefined *PTR_FUN_10147af98;
undefined *PTR_FUN_10147b330;
undefined thunk_FUN_10025e0c4;
undefined FUN_10025cd4c;
undefined FUN_10025cd68;
undefined thunk_FUN_10025e16c;
undefined thunk_FUN_10025d244;
undefined FUN_10025cfa0;
undefined FUN_10025cd14;
undefined8 DAT_101d237c8;
undefined1 DAT_101e43de0;
undefined2 DAT_101e43de2;
undefined2 DAT_101e43de4;
undefined4 DAT_101e43de6;
undefined4 DAT_101e43dea;
undefined4 DAT_101e43dee;
undefined4 DAT_101e43df2;
undefined4 DAT_101e43df6;
undefined4 DAT_101e43dfa;
undefined4 DAT_101e43dfe;
undefined4 DAT_101e43e02;
undefined4 DAT_101e43e06;
undefined4 DAT_101e43e0a;
undefined4 DAT_101e43e0e;
undefined4 DAT_101e43e12;
undefined4 DAT_101e43e16;
undefined4 DAT_101e43e1a;
undefined4 DAT_101e43e1e;
undefined4 DAT_101e43e22;
undefined4 DAT_101e43e26;
undefined4 DAT_101e43e2a;
undefined4 DAT_101e43e2e;
undefined4 DAT_101e43e32;
undefined4 DAT_101e43e36;
undefined4 DAT_101e43e3a;
undefined4 DAT_101e43e3e;
undefined4 DAT_101e43e42;
undefined4 DAT_101e43e46;
undefined4 DAT_101e43e4a;
undefined4 DAT_101e43e4e;
undefined4 DAT_101e43e52;
undefined4 DAT_101e43e56;
undefined4 DAT_101e43e5a;
undefined4 DAT_101e43e5e;
undefined4 DAT_101e43e62;
undefined4 DAT_101e43e66;
undefined4 DAT_101e43e6a;
undefined4 DAT_101e43e6e;
undefined4 DAT_101e43e72;
undefined4 DAT_101e43e76;
undefined4 DAT_101e43e7a;
undefined4 DAT_101e43e7e;
undefined4 DAT_101e43e82;
undefined4 DAT_101e43e86;
undefined4 DAT_101e43e8a;
undefined4 DAT_101e43e8e;
undefined4 DAT_101e43e92;
undefined4 DAT_101e43e96;
undefined4 DAT_101e43e9a;
undefined4 DAT_101e43e9e;
undefined4 DAT_101e43ea2;
undefined4 DAT_101e43ea6;
undefined4 DAT_101e43eaa;
undefined4 DAT_101e43eae;
undefined4 DAT_101e43eb2;
undefined4 DAT_101e43ebc;
undefined4 DAT_101e43ec4;
undefined4 DAT_101e43ec0;
undefined4 DAT_101e43ec8;
undefined4 DAT_101e43ed4;
undefined4 DAT_101e43ed8;
undefined4 DAT_101e43eb8;
undefined4 DAT_101e43edc;
undefined4 DAT_101e43ecc;
undefined4 DAT_101e43ee0;
undefined4 DAT_101e43ed0;
undefined4 DAT_101e43ee4;
undefined4 DAT_101e43ee8;
undefined4 DAT_101e43eec;
undefined4 DAT_101e43ef0;
undefined4 DAT_101e43ef4;
undefined4 DAT_101e43ef8;
undefined4 DAT_101e43efc;
undefined4 DAT_101e43f00;
undefined4 DAT_101e43f04;
undefined4 DAT_101e43f08;
undefined4 DAT_101e43f0c;
undefined4 DAT_101e43f10;
undefined4 DAT_101e43f14;
undefined4 DAT_101e43f18;
undefined4 DAT_101e43f1c;
undefined4 DAT_101e43f20;
undefined4 DAT_101e43f24;
undefined4 DAT_101e43f28;
undefined4 DAT_101e43f2c;
undefined4 DAT_101e43f30;
undefined4 DAT_101e43f34;
undefined4 DAT_101e43f38;
undefined4 DAT_101e43f3c;
undefined4 DAT_101e43f40;
undefined4 DAT_101e43f44;
undefined4 DAT_101e43f48;
undefined4 DAT_101e43f4c;
undefined4 DAT_101e43f50;
undefined8 DAT_101e43f58;
undefined8 DAT_101e43f60;
undefined *PTR_thunk_FUN_10025f468_10147b360;
undefined *PTR_FUN_10147b4d0;
undefined DAT_101158624;
undefined FUN_10025fb48;
undefined FUN_100260220;
char DAT_101854ae0;
undefined FUN_100260230;
undefined FUN_100260228;
undefined FUN_100260238;
undefined *PTR_thunk_FUN_100260244_10147b868;
undefined FUN_100261b5c;
undefined FUN_100261ba0;
undefined thunk_FUN_1002629d0;
undefined thunk_FUN_100262898;
undefined thunk_FUN_1002642f0;
undefined FUN_100261bd4;
undefined FUN_100261d7c;
undefined thunk_FUN_1002643c4;
undefined *PTR_thunk_FUN_100261d9c_10147b9d0;
undefined FUN_1002645cc;
undefined *PTR_FUN_10147bb38;
undefined thunk_FUN_100262a8c;
undefined FUN_100264250;
undefined thunk_FUN_100264b5c;
undefined *PTR_thunk_FUN_100264cdc_10147bc38;
undefined *PTR_thunk_FUN_1002650dc_10147bd38;
undefined *PTR_FUN_10147bef0;
undefined FUN_1002650d0;
undefined *PTR_FUN_10147c288;
undefined thunk_FUN_10026645c;
undefined *PTR_thunk_FUN_1002667f0_10147c438;
pointer PTR_FUN_10147cc30;
undefined FUN_1002683fc;
undefined FUN_100268428;
undefined FUN_100268454;
undefined thunk_FUN_100268004;
undefined thunk_FUN_1002681ac;
undefined *PTR_thunk_FUN_100266d04_10147c5e0;
undefined *PTR_FUN_10147c810;
undefined *PTR_FUN_10147cba8;
undefined *PTR_FUN_10147cc00;
undefined *PTR_thunk_FUN_10026857c_10147cc48;
undefined *PTR_FUN_10147cdc8;
undefined FUN_100268554;
undefined thunk_FUN_100268900;
undefined *PTR_thunk_FUN_100268a70_10147ce20;
undefined *PTR_thunk_FUN_1002694e0_10147cf68;
undefined *PTR_s_build://Splash_GameOverLose.tga_10184e0d0;
undefined FUN_100269760;
undefined *PTR_thunk_FUN_10064e2bc_10147d0d0;
undefined FUN_10026a4c4;
undefined FUN_10026a4dc;
undefined FUN_10026a72c;
undefined FUN_10026aad4;
undefined FUN_10026aacc;
undefined *PTR_thunk_FUN_10026af2c_10147d338;
undefined *PTR_FUN_10147d488;
undefined *PTR_s_build://RewardScreenBackground.p_101854998;
undefined FUN_10026b224;
undefined thunk_FUN_10026b3b8;
undefined FUN_10026ba20;
undefined FUN_10026b948;
undefined thunk_FUN_10026c38c;
undefined thunk_FUN_10026c480;
undefined *PTR_thunk_FUN_10026bd2c_10147d4b0;
undefined FUN_10026bcdc;
undefined thunk_FUN_10026c6d0;
undefined *PTR_DAT_10147d5e8;
undefined FUN_10026ca30;
undefined thunk_FUN_10026c7cc;
undefined thunk_FUN_10026c784;
undefined FUN_10026c9bc;
undefined *PTR_thunk_FUN_10064221c_10147d610;
undefined FUN_10026d1b4;
undefined FUN_10026d1c8;
undefined *PTR_thunk_FUN_10026d344_10147d718;
undefined *PTR_thunk_FUN_10026f59c_10147d898;
undefined *PTR_FUN_10147dab0;
undefined *PTR_FUN_10147dae0;
undefined *PTR_FUN_10147de78;
undefined *PTR_FUN_10147ded8;
undefined *PTR_FUN_10147df00;
undefined *PTR_FUN_10147e208;
undefined *PTR_s_all_101854bb0;
undefined *PTR_s_throttled_101854bb8;
undefined *PTR_s_off_101854bc0;
undefined thunk_FUN_10027c440;
undefined thunk_FUN_10027c59c;
undefined thunk_FUN_10027c4dc;
undefined thunk_FUN_10027c674;
undefined FUN_100277548;
undefined thunk_FUN_10027c8b8;
undefined thunk_FUN_10027d0ac;
undefined thunk_FUN_10027cbb0;
undefined FUN_100277564;
undefined thunk_FUN_10027d744;
float DAT_101854aec;
float DAT_101d237d0;
float DAT_101854ae8;
float DAT_101854ae4;
undefined FUN_100274710;
undefined FUN_10027471c;
undefined *PTR_FUN_10147df40;
undefined *PTR_FUN_1014a5530;
undefined *PTR_FUN_1014a5658;
undefined *PTR_thunk_FUN_10064e2bc_1014a5ca0;
undefined *PTR_FUN_10147e088;
undefined FUN_10027c4d8;
undefined thunk_FUN_10027d778;
undefined FUN_10027c588;
undefined thunk_FUN_10027ca60;
undefined FUN_10027ca14;
undefined thunk_FUN_10027cfb0;
undefined thunk_FUN_10027d4ac;
undefined4 DAT_101d237d0;
undefined FUN_10027c43c;
undefined *PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_10147e258;
undefined thunk_FUN_10028425c;
undefined thunk_FUN_1002841f0;
undefined thunk_FUN_1002842c8;
undefined *PTR_thunk_FUN_100280618_10147e408;
undefined thunk_FUN_100284428;
undefined *PTR_FUN_10147e5c8;
undefined FUN_10028033c;
undefined FUN_10028034c;
undefined thunk_FUN_1002847f8;
undefined FUN_1002849f4;
undefined thunk_FUN_100284bcc;
undefined thunk_FUN_100284a1c;
undefined FUN_1002841a4;
undefined FUN_100284fe0;
undefined *PTR_thunk_FUN_100285020_10147e960;
undefined thunk_FUN_10028a9cc;
undefined thunk_FUN_10028a890;
undefined thunk_FUN_10028aaa4;
undefined thunk_FUN_10028aa38;
undefined FUN_100286b4c;
undefined thunk_FUN_10028ae74;
undefined FUN_100286e08;
undefined thunk_FUN_10028b25c;
undefined *PTR_thunk_FUN_100286e10_10147ea60;
undefined *PTR_FUN_10147ec28;
undefined FUN_10028a980;
undefined FUN_10028b07c;
undefined thunk_FUN_10028b0a4;
undefined thunk_FUN_10028b180;
undefined FUN_10028b5c0;
undefined *PTR_FUN_10147efc0;
undefined *PTR_thunk_FUN_10028bb80_10147f0c0;
undefined8 DAT_101d237d8;
long *DAT_101d237d8;
undefined *PTR_thunk_FUN_10028d478_10147f458;
undefined DAT_101e440f0;
undefined DAT_101e44108;
undefined *PTR_thunk_FUN_10028e4c4_10147f5a0;
undefined FUN_10028e4a4;
undefined FUN_10028e434;
undefined thunk_FUN_10028e8b4;
undefined1 DAT_101e43f68;
undefined2 DAT_101e43f6a;
undefined2 DAT_101e43f6c;
undefined4 DAT_101e43f6e;
undefined4 DAT_101e43f72;
undefined4 DAT_101e43f76;
undefined4 DAT_101e43f7a;
undefined4 DAT_101e43f7e;
undefined4 DAT_101e43f82;
undefined4 DAT_101e43f86;
undefined4 DAT_101e43f8a;
undefined4 DAT_101e43f8e;
undefined4 DAT_101e43f92;
undefined4 DAT_101e43f96;
undefined4 DAT_101e43f9a;
undefined4 DAT_101e43f9e;
undefined4 DAT_101e43fa2;
undefined4 DAT_101e43fa6;
undefined4 DAT_101e43faa;
undefined4 DAT_101e43fae;
undefined4 DAT_101e43fb2;
undefined4 DAT_101e43fb6;
undefined4 DAT_101e43fba;
undefined4 DAT_101e43fbe;
undefined4 DAT_101e43fc2;
undefined4 DAT_101e43fc6;
undefined4 DAT_101e43fca;
undefined4 DAT_101e43fce;
undefined4 DAT_101e43fd2;
undefined4 DAT_101e43fd6;
undefined4 DAT_101e43fda;
undefined4 DAT_101e43fde;
undefined4 DAT_101e43fe2;
undefined4 DAT_101e43fe6;
undefined4 DAT_101e43fea;
undefined4 DAT_101e43fee;
undefined4 DAT_101e43ff2;
undefined4 DAT_101e43ff6;
undefined4 DAT_101e43ffa;
undefined4 DAT_101e43ffe;
undefined4 DAT_101e44002;
undefined4 DAT_101e44006;
undefined4 DAT_101e4400a;
undefined4 DAT_101e4400e;
undefined4 DAT_101e44012;
undefined4 DAT_101e44016;
undefined4 DAT_101e4401a;
undefined4 DAT_101e4401e;
undefined4 DAT_101e44022;
undefined4 DAT_101e44026;
undefined4 DAT_101e4402a;
undefined4 DAT_101e4402e;
undefined4 DAT_101e44032;
undefined4 DAT_101e44036;
undefined4 DAT_101e4403a;
undefined4 DAT_101e44044;
undefined4 DAT_101e4404c;
undefined4 DAT_101e44048;
undefined4 DAT_101e44050;
undefined4 DAT_101e4405c;
undefined4 DAT_101e44060;
undefined4 DAT_101e44040;
undefined4 DAT_101e44064;
undefined4 DAT_101e44054;
undefined4 DAT_101e44068;
undefined4 DAT_101e44058;
undefined4 DAT_101e4406c;
undefined4 DAT_101e44070;
undefined4 DAT_101e44074;
undefined4 DAT_101e44078;
undefined4 DAT_101e4407c;
undefined4 DAT_101e44080;
undefined4 DAT_101e44084;
undefined4 DAT_101e44088;
undefined4 DAT_101e4408c;
undefined4 DAT_101e44090;
undefined4 DAT_101e44094;
undefined4 DAT_101e44098;
undefined4 DAT_101e4409c;
undefined4 DAT_101e440a0;
undefined4 DAT_101e440a4;
undefined4 DAT_101e440a8;
undefined4 DAT_101e440ac;
undefined4 DAT_101e440b0;
undefined4 DAT_101e440b4;
undefined4 DAT_101e440b8;
undefined4 DAT_101e440bc;
undefined4 DAT_101e440c0;
undefined4 DAT_101e440c4;
undefined4 DAT_101e440c8;
undefined4 DAT_101e440cc;
undefined4 DAT_101e440d0;
undefined4 DAT_101e440d4;
undefined4 DAT_101e440d8;
undefined8 DAT_101e440e0;
undefined8 DAT_101e440e8;
undefined *PTR_thunk_FUN_10028fccc_10147f6f0;
undefined thunk_FUN_10029009c;
undefined FUN_10028fbd8;
undefined thunk_FUN_10028ff08;
undefined FUN_10028fc20;
undefined FUN_10028fc70;
undefined4 DAT_101d237e8;
undefined FUN_100290140;
undefined4 DAT_101e44144;
undefined4 DAT_101e44180;
undefined *PTR_FUN_10147f948;
undefined4 DAT_101e44138;
undefined *PTR_FUN_10147f848;
undefined1 DAT_101e44120;
undefined2 DAT_101e44122;
undefined2 DAT_101e44124;
undefined8 DAT_101e44128;
undefined8 DAT_101e44130;
undefined4 DAT_101e4413c;
undefined4 DAT_101e44140;
undefined4 DAT_101e44148;
undefined4 DAT_101e4414c;
undefined4 DAT_101e44150;
undefined4 DAT_101e44154;
undefined4 DAT_101e44158;
undefined4 DAT_101e4415c;
undefined4 DAT_101e44160;
undefined4 DAT_101e44164;
undefined4 DAT_101e44168;
undefined4 DAT_101e4416c;
undefined4 DAT_101e44170;
undefined4 DAT_101e44174;
undefined4 DAT_101e44178;
undefined4 DAT_101e4417c;
undefined4 DAT_101e44184;
undefined4 DAT_101e44188;
undefined4 DAT_101e4418c;
undefined4 DAT_101e44190;
undefined4 DAT_101e44194;
undefined4 DAT_101e44198;
undefined4 DAT_101e4419c;
undefined4 DAT_101e441a0;
undefined4 DAT_101e441a4;
undefined4 DAT_101e441a8;
undefined4 DAT_101e441ac;
undefined4 DAT_101e441b0;
undefined4 DAT_101e441b4;
undefined4 DAT_101e441b8;
undefined4 DAT_101e441bc;
undefined4 DAT_101e441c0;
undefined4 DAT_101e441c4;
undefined4 DAT_101e441c8;
undefined4 DAT_101e441cc;
undefined4 DAT_101e441d0;
undefined4 DAT_101e441d4;
undefined4 DAT_101e441d8;
undefined4 DAT_101e441dc;
undefined4 DAT_101e441e0;
undefined4 DAT_101e441e4;
undefined4 DAT_101e441e8;
undefined4 DAT_101e441ec;
undefined4 DAT_101e441f0;
undefined4 DAT_101e441f4;
undefined4 DAT_101e441f8;
undefined4 DAT_101e441fc;
undefined4 DAT_101e44200;
undefined4 DAT_101e44204;
undefined4 DAT_101e4420c;
undefined4 DAT_101e44210;
undefined4 DAT_101e44214;
undefined4 DAT_101e44218;
undefined4 DAT_101e44224;
undefined4 DAT_101e44228;
undefined4 DAT_101e4422c;
undefined4 DAT_101e44208;
undefined4 DAT_101e44230;
undefined4 DAT_101e4421c;
undefined4 DAT_101e44234;
undefined4 DAT_101e44220;
undefined4 DAT_101e44238;
undefined4 DAT_101e4423c;
undefined4 DAT_101e44240;
undefined4 DAT_101e44244;
undefined4 DAT_101e44248;
undefined4 DAT_101e4424c;
undefined4 DAT_101e44250;
undefined4 DAT_101e44254;
undefined4 DAT_101e44258;
undefined4 DAT_101e4425c;
undefined4 DAT_101e44260;
undefined4 DAT_101e44264;
undefined4 DAT_101e44268;
undefined4 DAT_101e4426c;
undefined4 DAT_101e44270;
undefined4 DAT_101e44274;
undefined4 DAT_101e44278;
undefined4 DAT_101e4427c;
undefined4 DAT_101e44280;
undefined4 DAT_101e44284;
undefined4 DAT_101e44288;
undefined4 DAT_101e4428c;
undefined4 DAT_101e44290;
undefined4 DAT_101e44294;
undefined4 DAT_101e44298;
undefined4 DAT_101e4429c;
undefined4 DAT_101e442a0;
undefined thunk_FUN_1002918c0;
undefined *PTR_thunk_FUN_100291784_10147fa90;
undefined *PTR_FUN_10147fbe8;
undefined *PTR_thunk_FUN_100292138_10147fc10;
undefined *PTR_thunk_FUN_1002924e4_10147fd58;
undefined thunk_FUN_100294ad0;
undefined thunk_FUN_100294a6c;
undefined thunk_FUN_100294b34;
undefined FUN_100293be4;
undefined FUN_100293bd8;
undefined FUN_100293c2c;
undefined *PTR_thunk_FUN_100294ff0_10147fea8;
undefined thunk_FUN_100294f00;
undefined thunk_FUN_100294e70;
undefined1 DAT_101e442a8;
undefined2 DAT_101e442aa;
undefined2 DAT_101e442ac;
undefined4 DAT_101e442ae;
undefined4 DAT_101e442b2;
undefined4 DAT_101e442b6;
undefined4 DAT_101e442ba;
undefined4 DAT_101e442be;
undefined4 DAT_101e442c2;
undefined4 DAT_101e442c6;
undefined4 DAT_101e442ca;
undefined4 DAT_101e442ce;
undefined4 DAT_101e442d2;
undefined4 DAT_101e442d6;
undefined4 DAT_101e442da;
undefined4 DAT_101e442de;
undefined4 DAT_101e442e2;
undefined4 DAT_101e442e6;
undefined4 DAT_101e442ea;
undefined4 DAT_101e442ee;
undefined4 DAT_101e442f2;
undefined4 DAT_101e442f6;
undefined4 DAT_101e442fa;
undefined4 DAT_101e442fe;
undefined4 DAT_101e44302;
undefined4 DAT_101e44306;
undefined4 DAT_101e4430a;
undefined4 DAT_101e4430e;
undefined4 DAT_101e44312;
undefined4 DAT_101e44316;
undefined4 DAT_101e4431a;
undefined4 DAT_101e4431e;
undefined4 DAT_101e44322;
undefined4 DAT_101e44326;
undefined4 DAT_101e4432a;
undefined4 DAT_101e4432e;
undefined4 DAT_101e44332;
undefined4 DAT_101e44336;
undefined4 DAT_101e4433a;
undefined4 DAT_101e4433e;
undefined4 DAT_101e44342;
undefined4 DAT_101e44346;
undefined4 DAT_101e4434a;
undefined4 DAT_101e4434e;
undefined4 DAT_101e44352;
undefined4 DAT_101e44356;
undefined4 DAT_101e4435a;
undefined4 DAT_101e4435e;
undefined4 DAT_101e44362;
undefined4 DAT_101e44366;
undefined4 DAT_101e4436a;
undefined4 DAT_101e4436e;
undefined4 DAT_101e44372;
undefined4 DAT_101e44376;
undefined4 DAT_101e4437a;
undefined4 DAT_101e44384;
undefined4 DAT_101e4438c;
undefined4 DAT_101e44388;
undefined4 DAT_101e44390;
undefined4 DAT_101e4439c;
undefined4 DAT_101e443a0;
undefined4 DAT_101e44380;
undefined4 DAT_101e443a4;
undefined4 DAT_101e44394;
undefined4 DAT_101e443a8;
undefined4 DAT_101e44398;
undefined4 DAT_101e443ac;
undefined4 DAT_101e443b0;
undefined4 DAT_101e443b4;
undefined4 DAT_101e443b8;
undefined4 DAT_101e443bc;
undefined4 DAT_101e443c0;
undefined4 DAT_101e443c4;
undefined4 DAT_101e443c8;
undefined4 DAT_101e443cc;
undefined4 DAT_101e443d0;
undefined4 DAT_101e443d4;
undefined4 DAT_101e443d8;
undefined4 DAT_101e443dc;
undefined4 DAT_101e443e0;
undefined4 DAT_101e443e4;
undefined4 DAT_101e443e8;
undefined4 DAT_101e443ec;
undefined4 DAT_101e443f0;
undefined4 DAT_101e443f4;
undefined4 DAT_101e443f8;
undefined4 DAT_101e443fc;
undefined4 DAT_101e44400;
undefined4 DAT_101e44404;
undefined4 DAT_101e44408;
undefined4 DAT_101e4440c;
undefined4 DAT_101e44410;
undefined4 DAT_101e44414;
undefined4 DAT_101e44418;
undefined8 DAT_101e44420;
undefined8 DAT_101e44428;
undefined *PTR_s_build://Credits.atlas_101854a70;
undefined *PTR_thunk_FUN_100296114_10147fff8;
undefined *PTR_thunk_FUN_100296510_101480140;
undefined *PTR_thunk_FUN_10064e2bc_1014a64d8;
undefined FUN_100296d14;
undefined *PTR_thunk_FUN_100296d58_101480c98;
undefined *PTR_FUN_101480260;
undefined DAT_101158808;
undefined *PTR_thunk_FUN_1002979c4_1014803a8;
undefined FUN_1002979a8;
undefined DAT_101158804;
undefined DAT_10115880c;
undefined *PTR_FUN_10148d378;
undefined DAT_101158810;
undefined DAT_101158814;
undefined DAT_101158818;
undefined *PTR_thunk_FUN_100298604_1014804f0;
undefined FUN_1002993d0;
undefined4 DAT_101d23820;
undefined FUN_100299404;
undefined4 DAT_101d23824;
undefined FUN_100299438;
undefined4 DAT_101d23828;
undefined FUN_10029946c;
undefined4 DAT_101d2382c;
undefined4 DAT_101d2381c;
undefined *PTR_s_build://DraftCenter_Background.p_1018549a8;
undefined *PTR_thunk_FUN_100299544_101480650;
undefined DAT_101872b94;
undefined DAT_101872b9c;
undefined FUN_10029939c;
undefined FUN_10029998c;
undefined FUN_10029997c;
undefined FUN_1002999ac;
undefined FUN_10029999c;
undefined FUN_10029a414;
undefined FUN_100299b20;
undefined FUN_100299fd0;
undefined *PTR_s_build://FranchiseLogos.tga_101854a30;
undefined *PTR_thunk_FUN_10029a580_101480798;
undefined FUN_10029a864;
undefined *PTR_thunk_FUN_10029aea0_1014808b8;
undefined *PTR_thunk_FUN_10064e2bc_101480a08;
undefined DAT_101158840;
undefined *PTR_thunk_FUN_10064e2bc_101480b50;
undefined *PTR_FUN_101480db8;
undefined *PTR_FUN_101480ed0;
undefined FUN_10029b654;
undefined *PTR_s_build://VGX_common.atlas_101854980;
undefined *PTR_thunk_FUN_10029c398_101480f18;
undefined *PTR_FUN_101481068;
undefined *PTR_thunk_FUN_100333c98_101493ee0;
undefined FUN_10029c37c;
undefined FUN_10029c364;
undefined *PTR_FUN_1014810b8;
undefined DAT_10115885c;
undefined DAT_101158858;
undefined FUN_10029d198;
undefined thunk_FUN_10029dba8;
undefined FUN_10029d1c4;
undefined *PTR_thunk_FUN_10029d220_101481250;
undefined4 DAT_101854af0;
undefined thunk_FUN_10029ece0;
undefined1 DAT_101e44430;
undefined2 DAT_101e44432;
undefined2 DAT_101e44434;
undefined4 DAT_101e44436;
undefined4 DAT_101e4443a;
undefined4 DAT_101e4443e;
undefined4 DAT_101e44442;
undefined4 DAT_101e44446;
undefined4 DAT_101e4444a;
undefined4 DAT_101e4444e;
undefined4 DAT_101e44452;
undefined4 DAT_101e44456;
undefined4 DAT_101e4445a;
undefined4 DAT_101e4445e;
undefined4 DAT_101e44462;
undefined4 DAT_101e44466;
undefined4 DAT_101e4446a;
undefined4 DAT_101e4446e;
undefined4 DAT_101e44472;
undefined4 DAT_101e44476;
undefined4 DAT_101e4447a;
undefined4 DAT_101e4447e;
undefined4 DAT_101e44482;
undefined4 DAT_101e44486;
undefined4 DAT_101e4448a;
undefined4 DAT_101e4448e;
undefined4 DAT_101e44492;
undefined4 DAT_101e44496;
undefined4 DAT_101e4449a;
undefined4 DAT_101e4449e;
undefined4 DAT_101e444a2;
undefined4 DAT_101e444a6;
undefined4 DAT_101e444aa;
undefined4 DAT_101e444ae;
undefined4 DAT_101e444b2;
undefined4 DAT_101e444b6;
undefined4 DAT_101e444ba;
undefined4 DAT_101e444be;
undefined4 DAT_101e444c2;
undefined4 DAT_101e444c6;
undefined4 DAT_101e444ca;
undefined4 DAT_101e444ce;
undefined4 DAT_101e444d2;
undefined4 DAT_101e444d6;
undefined4 DAT_101e444da;
undefined4 DAT_101e444de;
undefined4 DAT_101e444e2;
undefined4 DAT_101e444e6;
undefined4 DAT_101e444ea;
undefined4 DAT_101e444ee;
undefined4 DAT_101e444f2;
undefined4 DAT_101e444f6;
undefined4 DAT_101e444fa;
undefined4 DAT_101e444fe;
undefined4 DAT_101e44502;
undefined4 DAT_101e4450c;
undefined4 DAT_101e44510;
undefined4 DAT_101e44514;
undefined4 DAT_101e44518;
undefined4 DAT_101e44524;
undefined4 DAT_101e44528;
undefined4 DAT_101e4452c;
undefined4 DAT_101e44508;
undefined4 DAT_101e44530;
undefined4 DAT_101e4451c;
undefined4 DAT_101e44534;
undefined4 DAT_101e44520;
undefined4 DAT_101e44538;
undefined4 DAT_101e4453c;
undefined4 DAT_101e44540;
undefined4 DAT_101e44544;
undefined4 DAT_101e44548;
undefined4 DAT_101e4454c;
undefined4 DAT_101e44550;
undefined4 DAT_101e44554;
undefined4 DAT_101e44558;
undefined4 DAT_101e4455c;
undefined4 DAT_101e44560;
undefined4 DAT_101e44564;
undefined4 DAT_101e44568;
undefined4 DAT_101e4456c;
undefined4 DAT_101e44570;
undefined4 DAT_101e44574;
undefined4 DAT_101e44578;
undefined4 DAT_101e4457c;
undefined4 DAT_101e44580;
undefined4 DAT_101e44584;
undefined4 DAT_101e44588;
undefined4 DAT_101e4458c;
undefined4 DAT_101e44590;
undefined4 DAT_101e44594;
undefined4 DAT_101e44598;
undefined4 DAT_101e4459c;
undefined4 DAT_101e445a0;
undefined *PTR_FUN_1014813a0;
undefined FUN_10029f698;
undefined FUN_10029f64c;
undefined FUN_10029f654;
undefined1 DAT_101e445a4;
undefined2 DAT_101e445a6;
undefined2 DAT_101e445a8;
undefined4 DAT_101e445aa;
undefined4 DAT_101e445ae;
undefined4 DAT_101e445b2;
undefined4 DAT_101e445b6;
undefined4 DAT_101e445ba;
undefined4 DAT_101e445be;
undefined4 DAT_101e445c2;
undefined4 DAT_101e445c6;
undefined4 DAT_101e445ca;
undefined4 DAT_101e445ce;
undefined4 DAT_101e445d2;
undefined4 DAT_101e445d6;
undefined4 DAT_101e445da;
undefined4 DAT_101e445de;
undefined4 DAT_101e445e2;
undefined4 DAT_101e445e6;
undefined4 DAT_101e445ea;
undefined4 DAT_101e445ee;
undefined4 DAT_101e445f2;
undefined4 DAT_101e445f6;
undefined4 DAT_101e445fa;
undefined4 DAT_101e445fe;
undefined4 DAT_101e44602;
undefined4 DAT_101e44606;
undefined4 DAT_101e4460a;
undefined4 DAT_101e4460e;
undefined4 DAT_101e44612;
undefined4 DAT_101e44616;
undefined4 DAT_101e4461a;
undefined4 DAT_101e4461e;
undefined4 DAT_101e44622;
undefined4 DAT_101e44626;
undefined4 DAT_101e4462a;
undefined4 DAT_101e4462e;
undefined4 DAT_101e44632;
undefined4 DAT_101e44636;
undefined4 DAT_101e4463a;
undefined4 DAT_101e4463e;
undefined4 DAT_101e44642;
undefined4 DAT_101e44646;
undefined4 DAT_101e4464a;
undefined4 DAT_101e4464e;
undefined4 DAT_101e44652;
undefined4 DAT_101e44656;
undefined4 DAT_101e4465a;
undefined4 DAT_101e4465e;
undefined4 DAT_101e44662;
undefined4 DAT_101e44666;
undefined4 DAT_101e4466a;
undefined4 DAT_101e4466e;
undefined4 DAT_101e44672;
undefined4 DAT_101e44676;
undefined4 DAT_101e44680;
undefined4 DAT_101e44684;
undefined4 DAT_101e44688;
undefined4 DAT_101e4468c;
undefined4 DAT_101e44698;
undefined4 DAT_101e4469c;
undefined4 DAT_101e446a0;
undefined4 DAT_101e4467c;
undefined4 DAT_101e446a4;
undefined4 DAT_101e44690;
undefined4 DAT_101e446a8;
undefined4 DAT_101e44694;
undefined4 DAT_101e446ac;
undefined4 DAT_101e446b0;
undefined4 DAT_101e446b4;
undefined4 DAT_101e446b8;
undefined4 DAT_101e446bc;
undefined4 DAT_101e446c0;
undefined4 DAT_101e446c4;
undefined4 DAT_101e446c8;
undefined4 DAT_101e446cc;
undefined4 DAT_101e446d0;
undefined4 DAT_101e446d4;
undefined4 DAT_101e446d8;
undefined4 DAT_101e446dc;
undefined4 DAT_101e446e0;
undefined4 DAT_101e446e4;
undefined4 DAT_101e446e8;
undefined4 DAT_101e446ec;
undefined4 DAT_101e446f0;
undefined4 DAT_101e446f4;
undefined4 DAT_101e446f8;
undefined4 DAT_101e446fc;
undefined4 DAT_101e44700;
undefined4 DAT_101e44704;
undefined4 DAT_101e44708;
undefined4 DAT_101e4470c;
undefined4 DAT_101e44710;
undefined4 DAT_101e44714;
undefined FUN_1002a028c;
undefined FUN_1002a027c;
undefined FUN_1002a02ac;
undefined FUN_1002a029c;
undefined FUN_1002a026c;
undefined *PTR_thunk_FUN_1002a04c4_1014814e8;
undefined *PTR_FUN_10148b6d0;
undefined DAT_101158878;
undefined *PTR_thunk_FUN_1002a0c60_101481630;
undefined FUN_1002a0c44;
undefined FUN_1002a0c2c;
undefined *PTR_thunk_FUN_1002a1380_101481778;
undefined *PTR_FUN_10148b9c0;
undefined *PTR_thunk_FUN_1002a152c_1014818c0;
float DAT_101854af4;
undefined4 DAT_101854af8;
undefined FUN_1002a18cc;
undefined FUN_1002a1d24;
undefined *PTR_thunk_FUN_1002a1d30_101481a30;
undefined DAT_10115887c;
undefined DAT_101158880;
undefined FUN_1002a2130;
undefined *PTR_thunk_FUN_1002a2930_101481b80;
undefined DAT_101158884;
undefined *PTR_thunk_FUN_1002a25b8_101481cc8;
undefined *PTR_thunk_FUN_1002a2b84_101481dc8;
undefined *PTR_FUN_101481f20;
undefined *PTR_FUN_1014822b8;
undefined thunk_FUN_1002a56cc;
undefined thunk_FUN_1002a5cac;
undefined thunk_FUN_1002a5ad0;
undefined FUN_1002a38dc;
undefined thunk_FUN_1002a5de0;
undefined thunk_FUN_1002a5d64;
undefined thunk_FUN_1002a5e5c;
undefined FUN_1002a38ec;
undefined DAT_101158890;
undefined thunk_FUN_1002a4cd4;
undefined FUN_1002a5660;
undefined *PTR_s_build://Fonts/Brandon-Bold-100.f_10184e258;
undefined *PTR_thunk_FUN_1002a6738_101482408;
undefined4 DAT_101e44726;
undefined4 DAT_101e448a8;
undefined FUN_1002a666c;
undefined FUN_1002a6684;
undefined thunk_FUN_1002a7060;
undefined DAT_101e448b0;
undefined4 DAT_101e448a0;
undefined4 DAT_101e448a4;
undefined1 DAT_101e448f0;
undefined DAT_101e448e0;
undefined1 DAT_101e44718;
undefined2 DAT_101e4471a;
undefined2 DAT_101e4471c;
undefined4 DAT_101e4471e;
undefined4 DAT_101e44722;
undefined4 DAT_101e4472a;
undefined4 DAT_101e4472e;
undefined4 DAT_101e44732;
undefined4 DAT_101e44736;
undefined4 DAT_101e4473a;
undefined4 DAT_101e4473e;
undefined4 DAT_101e44742;
undefined4 DAT_101e44746;
undefined4 DAT_101e4474a;
undefined4 DAT_101e4474e;
undefined4 DAT_101e44752;
undefined4 DAT_101e44756;
undefined4 DAT_101e4475a;
undefined4 DAT_101e4475e;
undefined4 DAT_101e44762;
undefined4 DAT_101e44766;
undefined4 DAT_101e4476a;
undefined4 DAT_101e4476e;
undefined4 DAT_101e44772;
undefined4 DAT_101e44776;
undefined4 DAT_101e4477a;
undefined4 DAT_101e4477e;
undefined4 DAT_101e44782;
undefined4 DAT_101e44786;
undefined4 DAT_101e4478a;
undefined4 DAT_101e4478e;
undefined4 DAT_101e44792;
undefined4 DAT_101e44796;
undefined4 DAT_101e4479a;
undefined4 DAT_101e4479e;
undefined4 DAT_101e447a2;
undefined4 DAT_101e447a6;
undefined4 DAT_101e447aa;
undefined4 DAT_101e447ae;
undefined4 DAT_101e447b2;
undefined4 DAT_101e447b6;
undefined4 DAT_101e447ba;
undefined4 DAT_101e447be;
undefined4 DAT_101e447c2;
undefined4 DAT_101e447c6;
undefined4 DAT_101e447ca;
undefined4 DAT_101e447ce;
undefined4 DAT_101e447d2;
undefined4 DAT_101e447d6;
undefined4 DAT_101e447da;
undefined4 DAT_101e447de;
undefined4 DAT_101e447e2;
undefined4 DAT_101e447e6;
undefined4 DAT_101e447ea;
undefined4 DAT_101e447f0;
undefined4 DAT_101e447f4;
undefined4 DAT_101e447f8;
undefined4 DAT_101e447fc;
undefined4 DAT_101e44800;
undefined4 DAT_101e44804;
undefined4 DAT_101e44808;
undefined4 DAT_101e4480c;
undefined4 DAT_101e44810;
undefined4 DAT_101e44814;
undefined4 DAT_101e44818;
undefined4 DAT_101e4481c;
undefined4 DAT_101e44820;
undefined4 DAT_101e44824;
undefined4 DAT_101e44828;
undefined4 DAT_101e4482c;
undefined4 DAT_101e44830;
undefined4 DAT_101e44834;
undefined4 DAT_101e44838;
undefined4 DAT_101e4483c;
undefined4 DAT_101e44840;
undefined4 DAT_101e44844;
undefined4 DAT_101e44848;
undefined4 DAT_101e4484c;
undefined4 DAT_101e44850;
undefined4 DAT_101e44854;
undefined4 DAT_101e44858;
undefined4 DAT_101e4485c;
undefined4 DAT_101e44860;
undefined4 DAT_101e44864;
undefined4 DAT_101e44868;
undefined4 DAT_101e4486c;
undefined4 DAT_101e44870;
undefined4 DAT_101e44874;
undefined4 DAT_101e44878;
undefined4 DAT_101e4487c;
undefined4 DAT_101e44880;
undefined4 DAT_101e44884;
undefined4 DAT_101e44888;
undefined8 DAT_101e44890;
undefined8 DAT_101e44898;
undefined DAT_101e448a0;
undefined DAT_101e448c8;
undefined DAT_1011588a0;
undefined *PTR_thunk_FUN_1002a7c60_101482550;
undefined FUN_1002a7c4c;
undefined DAT_1011588a4;
undefined *PTR_thunk_FUN_1002a81d8_1014826a8;
undefined FUN_1002a81c4;
undefined FUN_1002a86d8;
undefined DAT_1011588a8;
undefined *PTR_thunk_FUN_1002a86ec_101482800;
undefined *PTR_thunk_FUN_10064e2bc_101482958;
undefined FUN_1002a8e70;
undefined FUN_1002a8e90;
undefined FUN_1002a8e80;
undefined FUN_1002a8eb0;
undefined FUN_1002a8ea0;
undefined FUN_1002a8ed0;
undefined FUN_1002a8ec0;
undefined FUN_1002a9828;
undefined DAT_1011588ac;
undefined FUN_1002a9874;
undefined FUN_1002a97dc;
undefined FUN_1002a97cc;
undefined *PTR_thunk_FUN_1002a99a8_101482aa0;
undefined *PTR_thunk_FUN_1002aa04c_101482be8;
undefined *PTR_thunk_FUN_1002aa5e8_101482d30;
undefined thunk_FUN_1002aa8f4;
undefined *PTR_thunk_FUN_1002aada4_101482e80;
undefined FUN_1002acf50;
undefined *PTR_thunk_FUN_1002ab490_101482fc8;
undefined thunk_FUN_1002ad048;
undefined FUN_1002ac0c8;
undefined *PTR_thunk_FUN_1002ac0d8_101483110;
undefined FUN_1002ac0b4;
undefined *PTR_thunk_FUN_1002ad590_101483258;
undefined FUN_1002ad3e8;
undefined *PTR_thunk_FUN_1002ae3d0_1014833a0;
undefined thunk_FUN_1002aeb64;
undefined *PTR_thunk_FUN_1002aed70_1014834e8;
undefined thunk_FUN_1002aeef4;
undefined FUN_1002af438;
undefined FUN_1002af428;
undefined *PTR_thunk_FUN_1002af4f0_101483630;
undefined *PTR_FUN_101483790;
undefined *PTR_thunk_FUN_10064e2bc_101483ca8;
undefined *PTR_FUN_101483b28;
undefined thunk_FUN_1002b0b4c;
undefined *PTR_thunk_FUN_1002b0078_101483df0;
undefined8 DAT_101e44a90;
undefined4 DAT_101e44a98;
undefined thunk_FUN_1002b0a94;
undefined FUN_1002b0068;
undefined thunk_FUN_1002b0af0;
undefined4 DAT_101e44a9c;
undefined4 DAT_101e44a80;
undefined4 DAT_1011588dc;
undefined4 DAT_101e44a84;
undefined4 DAT_101e44a7c;
undefined *PTR_FUN_101483f38;
undefined FUN_1002b1228;
undefined4 DAT_101e44a88;
undefined FUN_1002b1420;
undefined FUN_1002b1418;
undefined FUN_1002b1430;
undefined FUN_1002b1428;
undefined *PTR_thunk_FUN_1002b143c_101484080;
undefined1 DAT_101e448f8;
undefined2 DAT_101e448fa;
undefined2 DAT_101e448fc;
undefined8 DAT_101e44900;
undefined8 DAT_101e44908;
undefined4 DAT_101e44910;
undefined4 DAT_101e44914;
undefined4 DAT_101e44918;
undefined4 DAT_101e4491c;
undefined4 DAT_101e44920;
undefined4 DAT_101e44924;
undefined4 DAT_101e44928;
undefined4 DAT_101e4492c;
undefined4 DAT_101e44930;
undefined4 DAT_101e44934;
undefined4 DAT_101e44938;
undefined4 DAT_101e4493c;
undefined4 DAT_101e44940;
undefined4 DAT_101e44944;
undefined4 DAT_101e44948;
undefined4 DAT_101e4494c;
undefined4 DAT_101e44950;
undefined4 DAT_101e44954;
undefined4 DAT_101e44958;
undefined4 DAT_101e4495c;
undefined4 DAT_101e44960;
undefined4 DAT_101e44964;
undefined4 DAT_101e44968;
undefined4 DAT_101e4496c;
undefined4 DAT_101e44970;
undefined4 DAT_101e44974;
undefined4 DAT_101e44978;
undefined4 DAT_101e4497c;
undefined4 DAT_101e44980;
undefined4 DAT_101e44984;
undefined4 DAT_101e44988;
undefined4 DAT_101e4498c;
undefined4 DAT_101e44990;
undefined4 DAT_101e44994;
undefined4 DAT_101e44998;
undefined4 DAT_101e4499c;
undefined4 DAT_101e449a0;
undefined4 DAT_101e449a4;
undefined4 DAT_101e449a8;
undefined4 DAT_101e449ac;
undefined4 DAT_101e449b0;
undefined4 DAT_101e449b4;
undefined4 DAT_101e449b8;
undefined4 DAT_101e449bc;
undefined4 DAT_101e449c0;
undefined4 DAT_101e449c4;
undefined4 DAT_101e449c8;
undefined4 DAT_101e449cc;
undefined4 DAT_101e449d0;
undefined4 DAT_101e449d4;
undefined4 DAT_101e449d8;
undefined4 DAT_101e449dc;
undefined4 DAT_101e449e4;
undefined4 DAT_101e449e8;
undefined4 DAT_101e449ec;
undefined4 DAT_101e449f0;
undefined4 DAT_101e449fc;
undefined4 DAT_101e44a00;
undefined4 DAT_101e44a04;
undefined4 DAT_101e449e0;
undefined4 DAT_101e44a08;
undefined4 DAT_101e449f4;
undefined4 DAT_101e44a0c;
undefined4 DAT_101e449f8;
undefined4 DAT_101e44a10;
undefined4 DAT_101e44a14;
undefined4 DAT_101e44a18;
undefined4 DAT_101e44a1c;
undefined4 DAT_101e44a20;
undefined4 DAT_101e44a24;
undefined4 DAT_101e44a28;
undefined4 DAT_101e44a2c;
undefined4 DAT_101e44a30;
undefined4 DAT_101e44a34;
undefined4 DAT_101e44a38;
undefined4 DAT_101e44a3c;
undefined4 DAT_101e44a40;
undefined4 DAT_101e44a44;
undefined4 DAT_101e44a48;
undefined4 DAT_101e44a4c;
undefined4 DAT_101e44a50;
undefined4 DAT_101e44a54;
undefined4 DAT_101e44a58;
undefined4 DAT_101e44a5c;
undefined4 DAT_101e44a60;
undefined4 DAT_101e44a64;
undefined4 DAT_101e44a68;
undefined4 DAT_101e44a6c;
undefined4 DAT_101e44a70;
undefined4 DAT_101e44a74;
undefined4 DAT_101e44a78;
undefined8 DAT_101e44aa0;
undefined *PTR_thunk_FUN_1002b2534_1014841c8;
undefined *PTR_FUN_101484320;
undefined *PTR_thunk_FUN_1002b2d00_101484348;
undefined *PTR_FUN_101484490;
undefined8 DAT_101e44c48;
undefined *PTR_thunk_FUN_1002b4fb4_1014845d8;
undefined DAT_101872ba0;
undefined4 DAT_101e44ab6;
undefined *PTR_thunk_FUN_1002b3500_101484720;
undefined FUN_1002b3950;
undefined *PTR_FUN_101484868;
undefined8 DAT_101e44c50;
undefined *PTR_DAT_101485008;
undefined4 DAT_101e44c30;
undefined4 DAT_101e44c34;
undefined *PTR_thunk_FUN_10064e2bc_1014849b0;
undefined *PTR_thunk_FUN_10064e2bc_101484af8;
undefined8 DAT_101e44c58;
undefined *PTR_thunk_FUN_1002b489c_101484c40;
undefined *PTR_thunk_FUN_10064e2bc_101484ed0;
undefined thunk_FUN_1002b4c10;
undefined *PTR_FUN_101484d88;
undefined1 DAT_101e44aa8;
undefined2 DAT_101e44aaa;
undefined2 DAT_101e44aac;
undefined4 DAT_101e44aae;
undefined4 DAT_101e44ab2;
undefined4 DAT_101e44aba;
undefined4 DAT_101e44abe;
undefined4 DAT_101e44ac2;
undefined4 DAT_101e44ac6;
undefined4 DAT_101e44aca;
undefined4 DAT_101e44ace;
undefined4 DAT_101e44ad2;
undefined4 DAT_101e44ad6;
undefined4 DAT_101e44ada;
undefined4 DAT_101e44ade;
undefined4 DAT_101e44ae2;
undefined4 DAT_101e44ae6;
undefined4 DAT_101e44aea;
undefined4 DAT_101e44aee;
undefined4 DAT_101e44af2;
undefined4 DAT_101e44af6;
undefined4 DAT_101e44afa;
undefined4 DAT_101e44afe;
undefined4 DAT_101e44b02;
undefined4 DAT_101e44b06;
undefined4 DAT_101e44b0a;
undefined4 DAT_101e44b0e;
undefined4 DAT_101e44b12;
undefined4 DAT_101e44b16;
undefined4 DAT_101e44b1a;
undefined4 DAT_101e44b1e;
undefined4 DAT_101e44b22;
undefined4 DAT_101e44b26;
undefined4 DAT_101e44b2a;
undefined4 DAT_101e44b2e;
undefined4 DAT_101e44b32;
undefined4 DAT_101e44b36;
undefined4 DAT_101e44b3a;
undefined4 DAT_101e44b3e;
undefined4 DAT_101e44b42;
undefined4 DAT_101e44b46;
undefined4 DAT_101e44b4a;
undefined4 DAT_101e44b4e;
undefined4 DAT_101e44b52;
undefined4 DAT_101e44b56;
undefined4 DAT_101e44b5a;
undefined4 DAT_101e44b5e;
undefined4 DAT_101e44b62;
undefined4 DAT_101e44b66;
undefined4 DAT_101e44b6a;
undefined4 DAT_101e44b6e;
undefined4 DAT_101e44b72;
undefined4 DAT_101e44b76;
undefined4 DAT_101e44b7a;
undefined4 DAT_101e44b80;
undefined4 DAT_101e44b84;
undefined4 DAT_101e44b88;
undefined4 DAT_101e44b8c;
undefined4 DAT_101e44b90;
undefined4 DAT_101e44b94;
undefined4 DAT_101e44b98;
undefined4 DAT_101e44b9c;
undefined4 DAT_101e44ba0;
undefined4 DAT_101e44ba4;
undefined4 DAT_101e44ba8;
undefined4 DAT_101e44bac;
undefined4 DAT_101e44bb0;
undefined4 DAT_101e44bb4;
undefined4 DAT_101e44bb8;
undefined4 DAT_101e44bbc;
undefined4 DAT_101e44bc0;
undefined4 DAT_101e44bc4;
undefined4 DAT_101e44bc8;
undefined4 DAT_101e44bcc;
undefined4 DAT_101e44bd0;
undefined4 DAT_101e44bd4;
undefined4 DAT_101e44bd8;
undefined4 DAT_101e44bdc;
undefined4 DAT_101e44be0;
undefined4 DAT_101e44be4;
undefined4 DAT_101e44be8;
undefined4 DAT_101e44bec;
undefined4 DAT_101e44bf0;
undefined4 DAT_101e44bf4;
undefined4 DAT_101e44bf8;
undefined4 DAT_101e44bfc;
undefined4 DAT_101e44c00;
undefined4 DAT_101e44c04;
undefined4 DAT_101e44c08;
undefined4 DAT_101e44c0c;
undefined4 DAT_101e44c10;
undefined4 DAT_101e44c14;
undefined4 DAT_101e44c18;
undefined8 DAT_101e44c20;
undefined8 DAT_101e44c28;
undefined *DAT_101e44c58;
undefined *DAT_101e44c48;
undefined *DAT_101e44c50;
undefined4 DAT_101e44c38;
undefined4 DAT_101e44c3c;
undefined4 DAT_101e44c40;
undefined *PTR_thunk_FUN_10064e2bc_101485030;
undefined *PTR_thunk_FUN_1002b5a74_101485190;
undefined DAT_10115890c;
undefined *PTR_thunk_FUN_1002b8628_1014852d8;
undefined DAT_101158910;
undefined UNK_101158914;
undefined DAT_101158918;
undefined DAT_10115891c;
undefined1 DAT_101e44c70;
undefined DAT_101e44c60;
undefined *PTR_s_build://MenuBackground_Loading.p_1018549f0;
undefined *PTR_thunk_FUN_1002b8990_101485420;
undefined *PTR_s_build://Fonts/Brandon-Light-150._10184e1e0;
undefined DAT_1011588f0;
undefined *PTR_s_build://ChooseYourHero.png_1018549a0;
undefined *PTR_thunk_FUN_1002b919c_101485568;
undefined FUN_1002b94dc;
undefined FUN_1002b94c8;
undefined FUN_1002b9504;
undefined FUN_1002b94f0;
undefined FUN_1002b9518;
undefined UNK_10115893b;
undefined DAT_10115893f;
undefined DAT_101158933;
undefined DAT_101158937;
undefined DAT_101158943;
undefined DAT_101158947;
undefined DAT_101158927;
undefined UNK_10115892b;
undefined DAT_10115892f;
undefined1 DAT_101e44c88;
undefined DAT_101e44c78;
pointer PTR_s_build://MenuDraftPartsCommon.tga_101854a38;
undefined *PTR_thunk_FUN_1002babb8_1014856c0;
undefined FUN_1002baba4;
undefined FUN_1002bb07c;
undefined *PTR_thunk_FUN_1002bb8a0_101485810;
undefined *PTR_thunk_FUN_1002bc16c_101485960;
undefined FUN_1002bc07c;
undefined FUN_1002bc0bc;
undefined FUN_1002bc134;
undefined FUN_1002bc104;
undefined FUN_1002bc0f4;
undefined FUN_1002bc124;
undefined FUN_1002bc114;
undefined FUN_1002bc644;
undefined FUN_1002bcd08;
undefined *PTR_thunk_FUN_1002bdaa4_101485aa8;
undefined FUN_1002bd59c;
undefined thunk_FUN_1002bd814;
undefined FUN_1002bd5ac;
undefined *PTR_thunk_FUN_1002bdcf0_101485bf0;
undefined FUN_1002be9cc;
undefined FUN_1002be9b8;
undefined DAT_101158980;
undefined DAT_101158984;
undefined *PTR_thunk_FUN_1002bf428_101485e40;
undefined thunk_FUN_1002c0f3c;
undefined FUN_1002c1124;
undefined *PTR_s_build://Sounds/UI.assetbundle/sf_101486188;
undefined FUN_1002c0b9c;
undefined thunk_FUN_1002c11b8;
undefined FUN_1002c1400;
undefined FUN_1002c1440;
undefined FUN_1002c1224;
undefined *PTR_thunk_FUN_10064221c_101486098;
undefined FUN_1002c1be0;
undefined FUN_1002c1bcc;
undefined FUN_1002c1ea4;
undefined FUN_1002c1c70;
undefined FUN_1002c1bf4;
undefined *PTR_thunk_FUN_1002c1eb8_1014861b0;
undefined thunk_FUN_1002c2598;
undefined FUN_1002c25f4;
undefined *PTR_thunk_FUN_1002c3c64_1014863f8;
undefined FUN_10002d3f4;
undefined *PTR_thunk_FUN_1002c33dc_101486540;
undefined thunk_FUN_1002c3764;
undefined thunk_FUN_1002c383c;
undefined FUN_1002c3748;
undefined *PTR_FUN_101486688;
undefined *PTR_thunk_FUN_1002c43e4_1014867f0;
undefined *PTR_s_build://VGX_splash.tga_101854978;
undefined4 DAT_101d918a4;
undefined4 DAT_101d918a0;
undefined *PTR_thunk_FUN_1002c4a94_101486938;
undefined thunk_FUN_1002c525c;
undefined FUN_1002c4a80;
undefined FUN_1002c4a70;
undefined FUN_1002c56d8;
undefined FUN_1002c570c;
undefined *PTR_thunk_FUN_1002c5744_101486ac0;
undefined *PTR_FUN_101486d50;
undefined *PTR_FUN_101486c08;
undefined thunk_FUN_1002c6780;
undefined FUN_1002c52b4;
undefined *PTR_thunk_FUN_1002c752c_101486e98;
undefined DAT_101158a40;
undefined *PTR_thunk_FUN_1002c7b74_101486fe0;
undefined FUN_1002c7b58;
undefined *PTR_thunk_FUN_1002c8478_101487100;
undefined FUN_1002c90cc;
undefined FUN_1002c99cc;
undefined FUN_1002c99d8;
undefined *PTR_FUN_101487248;
undefined *PTR_thunk_FUN_1002ca92c_1014873e0;
undefined FUN_1002ca920;
undefined DAT_101e44e18;
undefined FUN_1002cb49c;
undefined DAT_101158a68;
undefined DAT_101158c80;
undefined4 DAT_101e44cb8;
undefined *PTR_PTR_101487680;
undefined FUN_1002caec8;
undefined FUN_1002cb1cc;
undefined thunk_FUN_1002cb204;
undefined FUN_1002cb320;
undefined4 DAT_101d237f8;
undefined4 DAT_101e44e18;
undefined4 DAT_101e44e1c;
undefined4 DAT_101d23800;
undefined4 DAT_101d237fc;
undefined *PTR_s_build://Fonts/Brandon-Regular-12_10184e210;
undefined DAT_101158a48;
undefined *PTR_FUN_101487548;
undefined1 DAT_101e44c90;
undefined2 DAT_101e44c92;
undefined2 DAT_101e44c94;
undefined8 DAT_101e44c98;
undefined8 DAT_101e44ca0;
undefined4 DAT_101e44ca8;
undefined4 DAT_101e44cac;
undefined4 DAT_101e44cb0;
undefined4 DAT_101e44cb4;
undefined4 DAT_101e44cbc;
undefined4 DAT_101e44cc0;
undefined4 DAT_101e44cc4;
undefined4 DAT_101e44cc8;
undefined4 DAT_101e44ccc;
undefined4 DAT_101e44cd0;
undefined4 DAT_101e44cd4;
undefined4 DAT_101e44cd8;
undefined4 DAT_101e44cdc;
undefined4 DAT_101e44ce0;
undefined4 DAT_101e44ce4;
undefined4 DAT_101e44ce8;
undefined4 DAT_101e44cec;
undefined4 DAT_101e44cf0;
undefined4 DAT_101e44cf4;
undefined4 DAT_101e44cf8;
undefined4 DAT_101e44cfc;
undefined4 DAT_101e44d00;
undefined4 DAT_101e44d04;
undefined4 DAT_101e44d08;
undefined4 DAT_101e44d0c;
undefined4 DAT_101e44d10;
undefined4 DAT_101e44d14;
undefined4 DAT_101e44d18;
undefined4 DAT_101e44d1c;
undefined4 DAT_101e44d20;
undefined4 DAT_101e44d24;
undefined4 DAT_101e44d28;
undefined4 DAT_101e44d2c;
undefined4 DAT_101e44d30;
undefined4 DAT_101e44d34;
undefined4 DAT_101e44d38;
undefined4 DAT_101e44d3c;
undefined4 DAT_101e44d40;
undefined4 DAT_101e44d44;
undefined4 DAT_101e44d48;
undefined4 DAT_101e44d4c;
undefined4 DAT_101e44d50;
undefined4 DAT_101e44d54;
undefined4 DAT_101e44d58;
undefined4 DAT_101e44d5c;
undefined4 DAT_101e44d60;
undefined4 DAT_101e44d64;
undefined4 DAT_101e44d68;
undefined4 DAT_101e44d6c;
undefined4 DAT_101e44d70;
undefined4 DAT_101e44d74;
undefined4 DAT_101e44d7c;
undefined4 DAT_101e44d80;
undefined4 DAT_101e44d84;
undefined4 DAT_101e44d88;
undefined4 DAT_101e44d94;
undefined4 DAT_101e44d98;
undefined4 DAT_101e44d9c;
undefined4 DAT_101e44d78;
undefined4 DAT_101e44da0;
undefined4 DAT_101e44d8c;
undefined4 DAT_101e44da4;
undefined4 DAT_101e44d90;
undefined4 DAT_101e44da8;
undefined4 DAT_101e44dac;
undefined4 DAT_101e44db0;
undefined4 DAT_101e44db4;
undefined4 DAT_101e44db8;
undefined4 DAT_101e44dbc;
undefined4 DAT_101e44dc0;
undefined4 DAT_101e44dc4;
undefined4 DAT_101e44dc8;
undefined4 DAT_101e44dcc;
undefined4 DAT_101e44dd0;
undefined4 DAT_101e44dd4;
undefined4 DAT_101e44dd8;
undefined4 DAT_101e44ddc;
undefined4 DAT_101e44de0;
undefined4 DAT_101e44de4;
undefined4 DAT_101e44de8;
undefined4 DAT_101e44dec;
undefined4 DAT_101e44df0;
undefined4 DAT_101e44df4;
undefined4 DAT_101e44df8;
undefined4 DAT_101e44dfc;
undefined4 DAT_101e44e00;
undefined4 DAT_101e44e04;
undefined4 DAT_101e44e08;
undefined4 DAT_101e44e0c;
undefined4 DAT_101e44e10;
undefined *PTR_thunk_FUN_1002cca00_1014876b0;
undefined *PTR_FUN_1014877f8;
undefined thunk_FUN_1002cd2d4;
undefined FUN_1002cc9f4;
undefined thunk_FUN_1002cd0f4;
undefined FUN_1002ccd0c;
undefined FUN_1002ccd74;
undefined FUN_1002ccd40;
undefined FUN_1002ccfd0;
undefined1 DAT_101e44e20;
undefined2 DAT_101e44e22;
undefined2 DAT_101e44e24;
undefined4 DAT_101e44e26;
undefined4 DAT_101e44e2a;
undefined4 DAT_101e44e2e;
undefined4 DAT_101e44e32;
undefined4 DAT_101e44e36;
undefined4 DAT_101e44e3a;
undefined4 DAT_101e44e3e;
undefined4 DAT_101e44e42;
undefined4 DAT_101e44e46;
undefined4 DAT_101e44e4a;
undefined4 DAT_101e44e4e;
undefined4 DAT_101e44e52;
undefined4 DAT_101e44e56;
undefined4 DAT_101e44e5a;
undefined4 DAT_101e44e5e;
undefined4 DAT_101e44e62;
undefined4 DAT_101e44e66;
undefined4 DAT_101e44e6a;
undefined4 DAT_101e44e6e;
undefined4 DAT_101e44e72;
undefined4 DAT_101e44e76;
undefined4 DAT_101e44e7a;
undefined4 DAT_101e44e7e;
undefined4 DAT_101e44e82;
undefined4 DAT_101e44e86;
undefined4 DAT_101e44e8a;
undefined4 DAT_101e44e8e;
undefined4 DAT_101e44e92;
undefined4 DAT_101e44e96;
undefined4 DAT_101e44e9a;
undefined4 DAT_101e44e9e;
undefined4 DAT_101e44ea2;
undefined4 DAT_101e44ea6;
undefined4 DAT_101e44eaa;
undefined4 DAT_101e44eae;
undefined4 DAT_101e44eb2;
undefined4 DAT_101e44eb6;
undefined4 DAT_101e44eba;
undefined4 DAT_101e44ebe;
undefined4 DAT_101e44ec2;
undefined4 DAT_101e44ec6;
undefined4 DAT_101e44eca;
undefined4 DAT_101e44ece;
undefined4 DAT_101e44ed2;
undefined4 DAT_101e44ed6;
undefined4 DAT_101e44eda;
undefined4 DAT_101e44ede;
undefined4 DAT_101e44ee2;
undefined4 DAT_101e44ee6;
undefined4 DAT_101e44eea;
undefined4 DAT_101e44eee;
undefined4 DAT_101e44ef2;
undefined4 DAT_101e44efc;
undefined4 DAT_101e44f04;
undefined4 DAT_101e44f00;
undefined4 DAT_101e44f08;
undefined4 DAT_101e44f14;
undefined4 DAT_101e44f18;
undefined4 DAT_101e44ef8;
undefined4 DAT_101e44f1c;
undefined4 DAT_101e44f0c;
undefined4 DAT_101e44f20;
undefined4 DAT_101e44f10;
undefined4 DAT_101e44f24;
undefined4 DAT_101e44f28;
undefined4 DAT_101e44f2c;
undefined4 DAT_101e44f30;
undefined4 DAT_101e44f34;
undefined4 DAT_101e44f38;
undefined4 DAT_101e44f3c;
undefined4 DAT_101e44f40;
undefined4 DAT_101e44f44;
undefined4 DAT_101e44f48;
undefined4 DAT_101e44f4c;
undefined4 DAT_101e44f50;
undefined4 DAT_101e44f54;
undefined4 DAT_101e44f58;
undefined4 DAT_101e44f5c;
undefined4 DAT_101e44f60;
undefined4 DAT_101e44f64;
undefined4 DAT_101e44f68;
undefined4 DAT_101e44f6c;
undefined4 DAT_101e44f70;
undefined4 DAT_101e44f74;
undefined4 DAT_101e44f78;
undefined4 DAT_101e44f7c;
undefined4 DAT_101e44f80;
undefined4 DAT_101e44f84;
undefined4 DAT_101e44f88;
undefined4 DAT_101e44f8c;
undefined4 DAT_101e44f90;
undefined8 DAT_101e44f98;
undefined8 DAT_101e44fa0;
undefined *PTR_thunk_FUN_1002ce350_101487990;
undefined *PTR_thunk_FUN_100333c98_101494028;
undefined *PTR_thunk_FUN_100333c98_101494170;
undefined FUN_1002ce344;
undefined FUN_1002ce33c;
undefined *PTR_thunk_FUN_1002ce8d0_101487ab0;
undefined *PTR_thunk_FUN_1002ceae0_101487bf8;
undefined DAT_101158a80;
undefined DAT_101158a84;
undefined FUN_1002cf064;
undefined *PTR_thunk_FUN_1002cf080_101487d40;
undefined FUN_1002cf040;
undefined *PTR_s_build://SophomoreQuestBackground_101854a60;
undefined *PTR_thunk_FUN_1002cfdc0_101487e88;
undefined *PTR_thunk_FUN_10064e2bc_101487fe8;
undefined FUN_1002d0bbc;
undefined *PTR_thunk_FUN_1002d1220_101488130;
undefined FUN_1002d0bb8;
undefined FUN_1002d0be8;
undefined thunk_FUN_1002d104c;
undefined DAT_101158a88;
undefined1 DAT_101e44fa8;
undefined2 DAT_101e44faa;
undefined2 DAT_101e44fac;
undefined8 DAT_101e44fb0;
undefined8 DAT_101e44fb8;
undefined4 DAT_101e44fc0;
undefined4 DAT_101e44fc4;
undefined4 DAT_101e44fc8;
undefined4 DAT_101e44fcc;
undefined4 DAT_101e44fd0;
undefined4 DAT_101e44fd4;
undefined4 DAT_101e44fd8;
undefined4 DAT_101e44fdc;
undefined4 DAT_101e44fe0;
undefined4 DAT_101e44fe4;
undefined4 DAT_101e44fe8;
undefined4 DAT_101e44fec;
undefined4 DAT_101e44ff0;
undefined4 DAT_101e44ff4;
undefined4 DAT_101e44ff8;
undefined4 DAT_101e44ffc;
undefined4 DAT_101e45000;
undefined4 DAT_101e45004;
undefined4 DAT_101e45008;
undefined4 DAT_101e4500c;
undefined4 DAT_101e45010;
undefined4 DAT_101e45014;
undefined4 DAT_101e45018;
undefined4 DAT_101e4501c;
undefined4 DAT_101e45020;
undefined4 DAT_101e45024;
undefined4 DAT_101e45028;
undefined4 DAT_101e4502c;
undefined4 DAT_101e45030;
undefined4 DAT_101e45034;
undefined4 DAT_101e45038;
undefined4 DAT_101e4503c;
undefined4 DAT_101e45040;
undefined4 DAT_101e45044;
undefined4 DAT_101e45048;
undefined4 DAT_101e4504c;
undefined4 DAT_101e45050;
undefined4 DAT_101e45054;
undefined4 DAT_101e45058;
undefined4 DAT_101e4505c;
undefined4 DAT_101e45060;
undefined4 DAT_101e45064;
undefined4 DAT_101e45068;
undefined4 DAT_101e4506c;
undefined4 DAT_101e45070;
undefined4 DAT_101e45074;
undefined4 DAT_101e45078;
undefined4 DAT_101e4507c;
undefined4 DAT_101e45080;
undefined4 DAT_101e45084;
undefined4 DAT_101e45088;
undefined4 DAT_101e4508c;
undefined4 DAT_101e45090;
undefined4 DAT_101e45094;
undefined4 DAT_101e45098;
undefined4 DAT_101e4509c;
undefined4 DAT_101e450a0;
undefined4 DAT_101e450a4;
undefined4 DAT_101e450a8;
undefined4 DAT_101e450ac;
undefined4 DAT_101e450b0;
undefined4 DAT_101e450b4;
undefined4 DAT_101e450b8;
undefined4 DAT_101e450bc;
undefined4 DAT_101e450c0;
undefined4 DAT_101e450c4;
undefined4 DAT_101e450c8;
undefined4 DAT_101e450cc;
undefined4 DAT_101e450d0;
undefined4 DAT_101e450d4;
undefined4 DAT_101e450d8;
undefined4 DAT_101e450dc;
undefined4 DAT_101e450e0;
undefined4 DAT_101e450e4;
undefined4 DAT_101e450e8;
undefined4 DAT_101e450ec;
undefined4 DAT_101e450f0;
undefined4 DAT_101e450f4;
undefined4 DAT_101e450f8;
undefined4 DAT_101e450fc;
undefined4 DAT_101e45100;
undefined4 DAT_101e45104;
undefined4 DAT_101e45108;
undefined4 DAT_101e4510c;
undefined4 DAT_101e45110;
undefined4 DAT_101e45114;
undefined4 DAT_101e45118;
undefined4 DAT_101e4511c;
undefined4 DAT_101e45120;
undefined4 DAT_101e45124;
undefined4 DAT_101e45128;
undefined *DAT_101e45180;
undefined *DAT_101e45168;
undefined *DAT_101e45158;
undefined *DAT_101e45160;
undefined *PTR_s_build://Fonts/Brandon-Bold-190.f_10184e268;
undefined *DAT_101e451a0;
undefined *DAT_101e451a8;
undefined *DAT_101e45188;
undefined *DAT_101e45190;
undefined *DAT_101e45198;
undefined4 DAT_101e4512c;
undefined4 DAT_101e45130;
undefined4 DAT_101e45134;
undefined4 DAT_101e45138;
undefined4 DAT_101e4513c;
undefined4 DAT_101e45140;
undefined4 DAT_101e45144;
undefined4 DAT_101e45148;
undefined4 DAT_101e4514c;
undefined *DAT_101e45170;
undefined *DAT_101e45178;
undefined4 DAT_101e45150;
undefined4 DAT_101e45154;
undefined FUN_1002d2c1c;
undefined FUN_1002d2b00;
undefined FUN_1002d2c48;
undefined thunk_FUN_1002d3930;
undefined *PTR_thunk_FUN_1002d422c_101488278;
undefined FUN_1002d2a34;
undefined FUN_1002d2a24;
undefined FUN_1002d3fb0;
undefined FUN_1002d3fa0;
undefined8 DAT_101d91640;
undefined *PTR_FUN_1014883c0;
undefined FUN_1002d417c;
undefined *PTR_thunk_FUN_1002d4a80_101488508;
undefined *PTR_thunk_FUN_1002d5948_101488650;
undefined4 DAT_101d23838;
undefined4 DAT_101d2383c;
undefined *PTR_thunk_FUN_1002d5c34_101488798;
undefined FUN_1002d5b94;
undefined FUN_1002d5be4;
undefined4 DAT_101d2380c;
undefined4 DAT_101d23808;
undefined4 DAT_101d23810;
undefined1 DAT_101e451b0;
undefined2 DAT_101e451b2;
undefined2 DAT_101e451b4;
undefined4 DAT_101e451b6;
undefined4 DAT_101e451ba;
undefined4 DAT_101e451be;
undefined4 DAT_101e451c2;
undefined4 DAT_101e451c6;
undefined4 DAT_101e451ca;
undefined4 DAT_101e451ce;
undefined4 DAT_101e451d2;
undefined4 DAT_101e451d6;
undefined4 DAT_101e451da;
undefined4 DAT_101e451de;
undefined4 DAT_101e451e2;
undefined4 DAT_101e451e6;
undefined4 DAT_101e451ea;
undefined4 DAT_101e451ee;
undefined4 DAT_101e451f2;
undefined4 DAT_101e451f6;
undefined4 DAT_101e451fa;
undefined4 DAT_101e451fe;
undefined4 DAT_101e45202;
undefined4 DAT_101e45206;
undefined4 DAT_101e4520a;
undefined4 DAT_101e4520e;
undefined4 DAT_101e45212;
undefined4 DAT_101e45216;
undefined4 DAT_101e4521a;
undefined4 DAT_101e4521e;
undefined4 DAT_101e45222;
undefined4 DAT_101e45226;
undefined4 DAT_101e4522a;
undefined4 DAT_101e4522e;
undefined4 DAT_101e45232;
undefined4 DAT_101e45236;
undefined4 DAT_101e4523a;
undefined4 DAT_101e4523e;
undefined4 DAT_101e45242;
undefined4 DAT_101e45246;
undefined4 DAT_101e4524a;
undefined4 DAT_101e4524e;
undefined4 DAT_101e45252;
undefined4 DAT_101e45256;
undefined4 DAT_101e4525a;
undefined4 DAT_101e4525e;
undefined4 DAT_101e45262;
undefined4 DAT_101e45266;
undefined4 DAT_101e4526a;
undefined4 DAT_101e4526e;
undefined4 DAT_101e45272;
undefined4 DAT_101e45276;
undefined4 DAT_101e4527a;
undefined4 DAT_101e4527e;
undefined4 DAT_101e45282;
undefined4 DAT_101e4528c;
undefined4 DAT_101e45290;
undefined4 DAT_101e45294;
undefined4 DAT_101e45298;
undefined4 DAT_101e452a4;
undefined4 DAT_101e452a8;
undefined4 DAT_101e452ac;
undefined4 DAT_101e45288;
undefined4 DAT_101e452b0;
undefined4 DAT_101e4529c;
undefined4 DAT_101e452b4;
undefined4 DAT_101e452a0;
undefined4 DAT_101e452b8;
undefined4 DAT_101e452bc;
undefined4 DAT_101e452c0;
undefined4 DAT_101e452c4;
undefined4 DAT_101e452c8;
undefined4 DAT_101e452cc;
undefined4 DAT_101e452d0;
undefined4 DAT_101e452d4;
undefined4 DAT_101e452d8;
undefined4 DAT_101e452dc;
undefined4 DAT_101e452e0;
undefined4 DAT_101e452e4;
undefined4 DAT_101e452e8;
undefined4 DAT_101e452ec;
undefined4 DAT_101e452f0;
undefined4 DAT_101e452f4;
undefined4 DAT_101e452f8;
undefined4 DAT_101e452fc;
undefined4 DAT_101e45300;
undefined4 DAT_101e45304;
undefined4 DAT_101e45308;
undefined4 DAT_101e4530c;
undefined4 DAT_101e45310;
undefined4 DAT_101e45314;
undefined4 DAT_101e45318;
undefined4 DAT_101e4531c;
undefined4 DAT_101e45320;
undefined thunk_FUN_1002d6910;
undefined4 DAT_101e454b0;
undefined *PTR_thunk_FUN_1002d6a94_1014888e8;
undefined thunk_FUN_1002d7068;
undefined thunk_FUN_1002d6f70;
undefined thunk_FUN_1002d7774;
undefined thunk_FUN_1002d78dc;
undefined *PTR_thunk_FUN_1002d7278_101488a30;
undefined1 DAT_101e45328;
undefined2 DAT_101e4532a;
undefined2 DAT_101e4532c;
undefined4 DAT_101e4532e;
undefined4 DAT_101e45332;
undefined4 DAT_101e45336;
undefined4 DAT_101e4533a;
undefined4 DAT_101e4533e;
undefined4 DAT_101e45342;
undefined4 DAT_101e45346;
undefined4 DAT_101e4534a;
undefined4 DAT_101e4534e;
undefined4 DAT_101e45352;
undefined4 DAT_101e45356;
undefined4 DAT_101e4535a;
undefined4 DAT_101e4535e;
undefined4 DAT_101e45362;
undefined4 DAT_101e45366;
undefined4 DAT_101e4536a;
undefined4 DAT_101e4536e;
undefined4 DAT_101e45372;
undefined4 DAT_101e45376;
undefined4 DAT_101e4537a;
undefined4 DAT_101e4537e;
undefined4 DAT_101e45382;
undefined4 DAT_101e45386;
undefined4 DAT_101e4538a;
undefined4 DAT_101e4538e;
undefined4 DAT_101e45392;
undefined4 DAT_101e45396;
undefined4 DAT_101e4539a;
undefined4 DAT_101e4539e;
undefined4 DAT_101e453a2;
undefined4 DAT_101e453a6;
undefined4 DAT_101e453aa;
undefined4 DAT_101e453ae;
undefined4 DAT_101e453b2;
undefined4 DAT_101e453b6;
undefined4 DAT_101e453ba;
undefined4 DAT_101e453be;
undefined4 DAT_101e453c2;
undefined4 DAT_101e453c6;
undefined4 DAT_101e453ca;
undefined4 DAT_101e453ce;
undefined4 DAT_101e453d2;
undefined4 DAT_101e453d6;
undefined4 DAT_101e453da;
undefined4 DAT_101e453de;
undefined4 DAT_101e453e2;
undefined4 DAT_101e453e6;
undefined4 DAT_101e453ea;
undefined4 DAT_101e453ee;
undefined4 DAT_101e453f2;
undefined4 DAT_101e453f6;
undefined4 DAT_101e453fa;
undefined4 DAT_101e45404;
undefined4 DAT_101e4540c;
undefined4 DAT_101e45408;
undefined4 DAT_101e45410;
undefined4 DAT_101e4541c;
undefined4 DAT_101e45420;
undefined4 DAT_101e45400;
undefined4 DAT_101e45424;
undefined4 DAT_101e45414;
undefined4 DAT_101e45428;
undefined4 DAT_101e45418;
undefined4 DAT_101e4542c;
undefined4 DAT_101e45430;
undefined4 DAT_101e45434;
undefined4 DAT_101e45438;
undefined4 DAT_101e4543c;
undefined4 DAT_101e45440;
undefined4 DAT_101e45444;
undefined4 DAT_101e45448;
undefined4 DAT_101e4544c;
undefined4 DAT_101e45450;
undefined4 DAT_101e45454;
undefined4 DAT_101e45458;
undefined4 DAT_101e4545c;
undefined4 DAT_101e45460;
undefined4 DAT_101e45464;
undefined4 DAT_101e45468;
undefined4 DAT_101e4546c;
undefined4 DAT_101e45470;
undefined4 DAT_101e45474;
undefined4 DAT_101e45478;
undefined4 DAT_101e4547c;
undefined4 DAT_101e45480;
undefined4 DAT_101e45484;
undefined4 DAT_101e45488;
undefined4 DAT_101e4548c;
undefined4 DAT_101e45490;
undefined4 DAT_101e45494;
undefined4 DAT_101e45498;
undefined8 DAT_101e454a0;
undefined8 DAT_101e454a8;
undefined *PTR_thunk_FUN_1002d87cc_101488b80;
undefined FUN_1002d8c24;
undefined *PTR_thunk_FUN_1002d9368_101488cd0;
undefined1 DAT_101e454c8;
undefined DAT_101e454b8;
undefined *PTR_FUN_101488e50;
undefined *PTR_thunk_FUN_1002d9b9c_101488fb8;
undefined FUN_1002d9b64;
undefined FUN_1002d9b6c;
undefined DAT_101158ab0;
undefined DAT_101158ab4;
undefined thunk_FUN_1002db898;
undefined FUN_1002daee4;
undefined FUN_1002daef4;
undefined thunk_FUN_1002db62c;
undefined *PTR_thunk_FUN_1002dc608_101489108;
undefined FUN_1002dc168;
undefined FUN_1002dc12c;
undefined DAT_101158ab8;
undefined DAT_101158abc;
undefined DAT_101158ac0;
undefined *PTR_FUN_101489258;
undefined DAT_101158ac4;
undefined DAT_101158acc;
undefined *PTR_FUN_1014893a0;
undefined DAT_101158ac8;
undefined FUN_1002dd9f0;
undefined DAT_101158ad0;
undefined FUN_1002dda10;
undefined DAT_101158ad4;
undefined FUN_1002dda00;
undefined DAT_101158ad8;
undefined FUN_1002dda5c;
undefined DAT_101158adc;
undefined thunk_FUN_1002de66c;
undefined DAT_101158ae0;
undefined *PTR_thunk_FUN_1002de910_1014894e8;
undefined FUN_1002dda24;
undefined *PTR_FUN_101489630;
undefined FUN_1002dec98;
undefined FUN_1002dec8c;
undefined FUN_1002def24;
undefined FUN_1002def18;
undefined *PTR_FUN_101489778;
undefined *PTR_FUN_1014898c0;
undefined DAT_101158af5;
undefined4 DAT_10115a160;
undefined *PTR_thunk_FUN_1002e2d24_101489a08;
undefined DAT_101158aed;
undefined FUN_1002e1154;
undefined DAT_101158af1;
undefined *PTR_thunk_FUN_1002e30a4_101489b58;
undefined *PTR_FUN_101489cb0;
undefined FUN_1002e10fc;
undefined FUN_1002e112c;
undefined FUN_1002e1114;
undefined FUN_1002e1148;
undefined thunk_FUN_1002e2948;
undefined *PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_101489cd0;
undefined FUN_1002e29d4;
undefined thunk_FUN_1002e3844;
undefined *PTR_thunk_FUN_1002e34d8_101489e80;
undefined *PTR_thunk_FUN_1002e3ae8_101489fc8;
undefined FUN_1002e3db8;
undefined *PTR_thunk_FUN_1002e3ff4_10148a110;
undefined FUN_1002e4510;
undefined DAT_101158b10;
undefined FUN_1002e55bc;
undefined FUN_1002e55a4;
undefined *PTR_thunk_FUN_1002e55f0_10148a258;
undefined FUN_1002e55d4;
undefined thunk_FUN_1002e5740;
undefined FUN_1002e5f48;
undefined FUN_1002e5f30;
undefined *PTR_FUN_10148a3a0;
undefined DAT_101158b20;
undefined DAT_101158b24;
undefined DAT_101158b18;
undefined DAT_101158b1c;
undefined *PTR_thunk_FUN_1002e68f0_10148a4e8;
undefined FUN_1002e7240;
undefined FUN_1002e720c;
undefined *PTR_thunk_FUN_1002e7258_10148a648;
undefined FUN_1002e7214;
undefined DAT_101158b28;
undefined DAT_101158b2c;
undefined *PTR_thunk_FUN_1002e7b38_10148a798;
undefined FUN_1002e7f48;
undefined FUN_1002e8594;
undefined *PTR_FUN_10148a8f0;
undefined FUN_1002e8584;
undefined *PTR_FUN_10148aa38;
undefined *PTR_thunk_FUN_1002e8f8c_10148ab88;
undefined *PTR_thunk_FUN_1002e9314_10148acd8;
undefined DAT_101157fe8;
undefined *PTR_thunk_FUN_1002e9988_10148ae20;
undefined *PTR_FUN_10148af70;
undefined *PTR_thunk_FUN_1002ea1b4_10148b0b8;
undefined FUN_1002eaa6c;
undefined FUN_1002eaa8c;
undefined DAT_101158b50;
undefined FUN_1002eaa7c;
undefined FUN_1002eaaac;
undefined FUN_1002eaa9c;
undefined FUN_1002eaacc;
undefined FUN_1002eaabc;
undefined FUN_1002eaadc;
undefined DAT_101872ba8;
undefined FUN_1002eb50c;
undefined FUN_1002eb520;
undefined *PTR_thunk_FUN_1002ebc50_10148b208;
undefined *PTR_thunk_FUN_1002ed9a4_10148b868;
undefined thunk_FUN_1002edb88;
undefined *PTR_thunk_FUN_1002eea14_10148bb10;
undefined *PTR_FUN_10148bc58;
undefined FUN_1002ef168;
undefined FUN_1002ef1b0;
undefined1 DAT_101e454d0;
undefined2 DAT_101e454d2;
undefined2 DAT_101e454d4;
undefined8 DAT_101e454d8;
undefined8 DAT_101e454e0;
undefined4 DAT_101e454e8;
undefined4 DAT_101e454ec;
undefined4 DAT_101e454f0;
undefined4 DAT_101e454f4;
undefined4 DAT_101e454f8;
undefined4 DAT_101e454fc;
undefined4 DAT_101e45500;
undefined4 DAT_101e45504;
undefined4 DAT_101e45508;
undefined4 DAT_101e4550c;
undefined4 DAT_101e45510;
undefined4 DAT_101e45514;
undefined4 DAT_101e45518;
undefined4 DAT_101e4551c;
undefined4 DAT_101e45520;
undefined4 DAT_101e45524;
undefined4 DAT_101e45528;
undefined4 DAT_101e4552c;
undefined4 DAT_101e45530;
undefined4 DAT_101e45534;
undefined4 DAT_101e45538;
undefined4 DAT_101e4553c;
undefined4 DAT_101e45540;
undefined4 DAT_101e45544;
undefined4 DAT_101e45548;
undefined4 DAT_101e4554c;
undefined4 DAT_101e45550;
undefined4 DAT_101e45554;
undefined4 DAT_101e45558;
undefined4 DAT_101e4555c;
undefined4 DAT_101e45560;
undefined4 DAT_101e45564;
undefined4 DAT_101e45568;
undefined4 DAT_101e4556c;
undefined4 DAT_101e45570;
undefined4 DAT_101e45574;
undefined4 DAT_101e45578;
undefined4 DAT_101e4557c;
undefined4 DAT_101e45580;
undefined4 DAT_101e45584;
undefined4 DAT_101e45588;
undefined4 DAT_101e4558c;
undefined4 DAT_101e45590;
undefined4 DAT_101e45594;
undefined4 DAT_101e45598;
undefined4 DAT_101e4559c;
undefined4 DAT_101e455a0;
undefined4 DAT_101e455a4;
undefined4 DAT_101e455a8;
undefined4 DAT_101e455ac;
undefined4 DAT_101e455b0;
undefined4 DAT_101e455b4;
undefined4 DAT_101e455bc;
undefined4 DAT_101e455c0;
undefined4 DAT_101e455c4;
undefined4 DAT_101e455c8;
undefined4 DAT_101e455d4;
undefined4 DAT_101e455d8;
undefined4 DAT_101e455dc;
undefined4 DAT_101e455b8;
undefined4 DAT_101e455e0;
undefined4 DAT_101e455cc;
undefined4 DAT_101e455e4;
undefined4 DAT_101e455d0;
undefined4 DAT_101e455e8;
undefined4 DAT_101e455ec;
undefined4 DAT_101e455f0;
undefined4 DAT_101e455f4;
undefined4 DAT_101e455f8;
undefined4 DAT_101e455fc;
undefined4 DAT_101e45600;
undefined4 DAT_101e45604;
undefined4 DAT_101e45608;
undefined4 DAT_101e4560c;
undefined4 DAT_101e45610;
undefined4 DAT_101e45614;
undefined4 DAT_101e45618;
undefined4 DAT_101e4561c;
undefined4 DAT_101e45620;
undefined4 DAT_101e45624;
undefined4 DAT_101e45628;
undefined4 DAT_101e4562c;
undefined4 DAT_101e45630;
undefined4 DAT_101e45634;
undefined4 DAT_101e45638;
undefined4 DAT_101e4563c;
undefined4 DAT_101e45640;
undefined4 DAT_101e45644;
undefined4 DAT_101e45648;
undefined4 DAT_101e4564c;
undefined4 DAT_101e45650;
undefined FUN_1002f0110;
undefined FUN_1002f0158;
undefined FUN_1002f01a0;
undefined FUN_1002f01f0;
undefined *PTR_thunk_FUN_1002f023c_10148bf40;
undefined FUN_1002f00c8;
undefined1 DAT_101e45658;
undefined2 DAT_101e4565a;
undefined2 DAT_101e4565c;
undefined8 DAT_101e45660;
undefined8 DAT_101e45668;
undefined4 DAT_101e45670;
undefined4 DAT_101e45674;
undefined4 DAT_101e45678;
undefined4 DAT_101e4567c;
undefined4 DAT_101e45680;
undefined4 DAT_101e45684;
undefined4 DAT_101e45688;
undefined4 DAT_101e4568c;
undefined4 DAT_101e45690;
undefined4 DAT_101e45694;
undefined4 DAT_101e45698;
undefined4 DAT_101e4569c;
undefined4 DAT_101e456a0;
undefined4 DAT_101e456a4;
undefined4 DAT_101e456a8;
undefined4 DAT_101e456ac;
undefined4 DAT_101e456b0;
undefined4 DAT_101e456b4;
undefined4 DAT_101e456b8;
undefined4 DAT_101e456bc;
undefined4 DAT_101e456c0;
undefined4 DAT_101e456c4;
undefined4 DAT_101e456c8;
undefined4 DAT_101e456cc;
undefined4 DAT_101e456d0;
undefined4 DAT_101e456d4;
undefined4 DAT_101e456d8;
undefined4 DAT_101e456dc;
undefined4 DAT_101e456e0;
undefined4 DAT_101e456e4;
undefined4 DAT_101e456e8;
undefined4 DAT_101e456ec;
undefined4 DAT_101e456f0;
undefined4 DAT_101e456f4;
undefined4 DAT_101e456f8;
undefined4 DAT_101e456fc;
undefined4 DAT_101e45700;
undefined4 DAT_101e45704;
undefined4 DAT_101e45708;
undefined4 DAT_101e4570c;
undefined4 DAT_101e45710;
undefined4 DAT_101e45714;
undefined4 DAT_101e45718;
undefined4 DAT_101e4571c;
undefined4 DAT_101e45720;
undefined4 DAT_101e45724;
undefined4 DAT_101e45728;
undefined4 DAT_101e4572c;
undefined4 DAT_101e45730;
undefined4 DAT_101e45734;
undefined4 DAT_101e45738;
undefined4 DAT_101e4573c;
undefined4 DAT_101e45744;
undefined4 DAT_101e45748;
undefined4 DAT_101e4574c;
undefined4 DAT_101e45750;
undefined4 DAT_101e4575c;
undefined4 DAT_101e45760;
undefined4 DAT_101e45764;
undefined4 DAT_101e45740;
undefined4 DAT_101e45768;
undefined4 DAT_101e45754;
undefined4 DAT_101e4576c;
undefined4 DAT_101e45758;
undefined4 DAT_101e45770;
undefined4 DAT_101e45774;
undefined4 DAT_101e45778;
undefined4 DAT_101e4577c;
undefined4 DAT_101e45780;
undefined4 DAT_101e45784;
undefined4 DAT_101e45788;
undefined4 DAT_101e4578c;
undefined4 DAT_101e45790;
undefined4 DAT_101e45794;
undefined4 DAT_101e45798;
undefined4 DAT_101e4579c;
undefined4 DAT_101e457a0;
undefined4 DAT_101e457a4;
undefined4 DAT_101e457a8;
undefined4 DAT_101e457ac;
undefined4 DAT_101e457b0;
undefined4 DAT_101e457b4;
undefined4 DAT_101e457b8;
undefined4 DAT_101e457bc;
undefined4 DAT_101e457c0;
undefined4 DAT_101e457c4;
undefined4 DAT_101e457c8;
undefined4 DAT_101e457cc;
undefined4 DAT_101e457d0;
undefined4 DAT_101e457d4;
undefined4 DAT_101e457d8;
undefined4 DAT_101e457f2;
undefined thunk_FUN_1002f225c;
undefined thunk_FUN_1002f2200;
undefined thunk_FUN_1002f22bc;
undefined *PTR_thunk_FUN_1002f172c_10148c088;
undefined FUN_1002f2174;
undefined1 DAT_101e457e0;
undefined2 DAT_101e457e2;
undefined2 DAT_101e457e4;
undefined4 DAT_101e457e6;
undefined4 DAT_101e457ea;
undefined4 DAT_101e457ee;
undefined4 DAT_101e457f6;
undefined4 DAT_101e457fa;
undefined4 DAT_101e457fe;
undefined4 DAT_101e45802;
undefined4 DAT_101e45806;
undefined4 DAT_101e4580a;
undefined4 DAT_101e4580e;
undefined4 DAT_101e45812;
undefined4 DAT_101e45816;
undefined4 DAT_101e4581a;
undefined4 DAT_101e4581e;
undefined4 DAT_101e45822;
undefined4 DAT_101e45826;
undefined4 DAT_101e4582a;
undefined4 DAT_101e4582e;
undefined4 DAT_101e45832;
undefined4 DAT_101e45836;
undefined4 DAT_101e4583a;
undefined4 DAT_101e4583e;
undefined4 DAT_101e45842;
undefined4 DAT_101e45846;
undefined4 DAT_101e4584a;
undefined4 DAT_101e4584e;
undefined4 DAT_101e45852;
undefined4 DAT_101e45856;
undefined4 DAT_101e4585a;
undefined4 DAT_101e4585e;
undefined4 DAT_101e45862;
undefined4 DAT_101e45866;
undefined4 DAT_101e4586a;
undefined4 DAT_101e4586e;
undefined4 DAT_101e45872;
undefined4 DAT_101e45876;
undefined4 DAT_101e4587a;
undefined4 DAT_101e4587e;
undefined4 DAT_101e45882;
undefined4 DAT_101e45886;
undefined4 DAT_101e4588a;
undefined4 DAT_101e4588e;
undefined4 DAT_101e45892;
undefined4 DAT_101e45896;
undefined4 DAT_101e4589a;
undefined4 DAT_101e4589e;
undefined4 DAT_101e458a2;
undefined4 DAT_101e458a6;
undefined4 DAT_101e458aa;
undefined4 DAT_101e458ae;
undefined4 DAT_101e458b2;
undefined4 DAT_101e458bc;
undefined4 DAT_101e458c4;
undefined4 DAT_101e458c0;
undefined4 DAT_101e458c8;
undefined4 DAT_101e458d4;
undefined4 DAT_101e458d8;
undefined4 DAT_101e458b8;
undefined4 DAT_101e458dc;
undefined4 DAT_101e458cc;
undefined4 DAT_101e458e0;
undefined4 DAT_101e458d0;
undefined4 DAT_101e458e4;
undefined4 DAT_101e458e8;
undefined4 DAT_101e458ec;
undefined4 DAT_101e458f0;
undefined4 DAT_101e458f4;
undefined4 DAT_101e458f8;
undefined4 DAT_101e458fc;
undefined4 DAT_101e45900;
undefined4 DAT_101e45904;
undefined4 DAT_101e45908;
undefined4 DAT_101e4590c;
undefined4 DAT_101e45910;
undefined4 DAT_101e45914;
undefined4 DAT_101e45918;
undefined4 DAT_101e4591c;
undefined4 DAT_101e45920;
undefined4 DAT_101e45924;
undefined4 DAT_101e45928;
undefined4 DAT_101e4592c;
undefined4 DAT_101e45930;
undefined4 DAT_101e45934;
undefined4 DAT_101e45938;
undefined4 DAT_101e4593c;
undefined4 DAT_101e45940;
undefined4 DAT_101e45944;
undefined4 DAT_101e45948;
undefined4 DAT_101e4594c;
undefined4 DAT_101e45950;
undefined8 DAT_101e45958;
undefined8 DAT_101e45960;
undefined *PTR_thunk_FUN_1002f3570_10148c1d0;
undefined *PTR_s_build://MenuSkinsHeroesBlueprint_101854a48;
undefined *PTR_thunk_FUN_1002f7c44_10148c318;
undefined *PTR_thunk_FUN_1002f7860_10148c460;
undefined FUN_1002f5edc;
undefined thunk_FUN_1002f7700;
undefined thunk_FUN_1002f7408;
undefined FUN_1002f5efc;
undefined thunk_FUN_1002f7624;
undefined FUN_1002f5f10;
undefined4 DAT_101e45a14;
undefined4 DAT_101e45a1c;
undefined4 DAT_101e45a24;
undefined DAT_101158c50;
undefined *PTR_s_COMMON_10148c5e8;
undefined FUN_1002f6694;
undefined FUN_1002f6da4;
undefined FUN_1002f6684;
undefined FUN_1002f6d90;
undefined1 DAT_101e45968;
undefined2 DAT_101e4596a;
undefined2 DAT_101e4596c;
undefined4 DAT_101e4596e;
undefined4 DAT_101e45972;
undefined4 DAT_101e45976;
undefined4 DAT_101e4597a;
undefined4 DAT_101e4597e;
undefined4 DAT_101e45982;
undefined4 DAT_101e45986;
undefined4 DAT_101e4598a;
undefined4 DAT_101e4598e;
undefined4 DAT_101e45992;
undefined4 DAT_101e45996;
undefined4 DAT_101e4599a;
undefined4 DAT_101e4599e;
undefined4 DAT_101e459a2;
undefined4 DAT_101e459a6;
undefined4 DAT_101e459aa;
undefined4 DAT_101e459ae;
undefined4 DAT_101e459b2;
undefined4 DAT_101e459b6;
undefined4 DAT_101e459ba;
undefined4 DAT_101e459be;
undefined4 DAT_101e459c2;
undefined4 DAT_101e459c6;
undefined4 DAT_101e459ca;
undefined4 DAT_101e459ce;
undefined4 DAT_101e459d2;
undefined4 DAT_101e459d6;
undefined4 DAT_101e459da;
undefined4 DAT_101e459de;
undefined4 DAT_101e459e2;
undefined4 DAT_101e459e6;
undefined4 DAT_101e459ea;
undefined4 DAT_101e459ee;
undefined4 DAT_101e459f2;
undefined4 DAT_101e459f6;
undefined4 DAT_101e459fa;
undefined4 DAT_101e459fe;
undefined4 DAT_101e45a02;
undefined4 DAT_101e45a06;
undefined4 DAT_101e45a0a;
undefined4 DAT_101e45a0e;
undefined4 DAT_101e45a18;
undefined4 DAT_101e45a20;
undefined4 DAT_101e45a28;
undefined4 DAT_101e45a2c;
undefined4 DAT_101e45a30;
undefined4 DAT_101e45a34;
undefined4 DAT_101e45a38;
undefined4 DAT_101e45a3c;
undefined4 DAT_101e45a44;
undefined4 DAT_101e45a4c;
undefined4 DAT_101e45a48;
undefined4 DAT_101e45a50;
undefined4 DAT_101e45a5c;
undefined4 DAT_101e45a60;
undefined4 DAT_101e45a40;
undefined4 DAT_101e45a64;
undefined4 DAT_101e45a54;
undefined4 DAT_101e45a68;
undefined4 DAT_101e45a58;
undefined4 DAT_101e45a6c;
undefined4 DAT_101e45a70;
undefined4 DAT_101e45a74;
undefined4 DAT_101e45a78;
undefined4 DAT_101e45a7c;
undefined4 DAT_101e45a80;
undefined4 DAT_101e45a84;
undefined4 DAT_101e45a88;
undefined4 DAT_101e45a8c;
undefined4 DAT_101e45a90;
undefined4 DAT_101e45a94;
undefined4 DAT_101e45a98;
undefined4 DAT_101e45a9c;
undefined4 DAT_101e45aa0;
undefined4 DAT_101e45aa4;
undefined4 DAT_101e45aa8;
undefined4 DAT_101e45aac;
undefined4 DAT_101e45ab0;
undefined4 DAT_101e45ab4;
undefined4 DAT_101e45ab8;
undefined4 DAT_101e45abc;
undefined4 DAT_101e45ac0;
undefined4 DAT_101e45ac4;
undefined4 DAT_101e45ac8;
undefined4 DAT_101e45acc;
undefined4 DAT_101e45ad0;
undefined4 DAT_101e45ad4;
undefined4 DAT_101e45ad8;
undefined8 DAT_101e45ae0;
undefined8 DAT_101e45ae8;
pointer PTR_s_build://Talent_Coins.tga_101854a28;
undefined *PTR_FUN_10148c770;
undefined *PTR_s_rare_10148c8f8;
undefined FUN_1002f9480;
undefined FUN_1002f9470;
undefined FUN_1002f9460;
undefined *PTR_FUN_10148c920;
undefined *PTR_FUN_10148ca68;
undefined1 DAT_101e45b00;
undefined1 DAT_101e45b18;
undefined DAT_101e45af0;
undefined DAT_101e45b08;
undefined1 DAT_101e45b30;
undefined1 DAT_101e45b48;
undefined DAT_101e45b20;
undefined DAT_101e45b38;
undefined DAT_101158c70;
undefined *PTR_FUN_10148cbb0;
undefined1 DAT_101e45b60;
undefined *PTR_DAT_10148cf78;
undefined DAT_101e45b50;
undefined *PTR_FUN_10148ccf8;
undefined1 DAT_101e45b78;
undefined DAT_101e45b68;
undefined *PTR_FUN_10148ce40;
undefined *PTR_thunk_FUN_1002fc050_10148d230;
undefined *PTR_FUN_10148d0e8;
undefined *PTR_thunk_FUN_1002fcb10_10148d4c0;
undefined *PTR_FUN_10148d608;
undefined *PTR_thunk_FUN_1002fdd28_10148d790;
undefined *PTR_thunk_FUN_1002fe914_10148d918;
undefined FUN_1002fd208;
undefined FUN_1002fe6fc;
undefined FUN_1002fea08;
undefined *PTR_thunk_FUN_1002ffc28_10148daa0;
undefined1 DAT_101e45b90;
undefined DAT_101e45b80;
undefined FUN_1002ff6d4;
undefined FUN_1002ffd88;
undefined *PTR_s_build://Fonts/Brandon-Bold-400.f_10184e270;
undefined *PTR_thunk_FUN_100300b58_10148dc28;
undefined FUN_1003005fc;
undefined FUN_100300bf0;
undefined *PTR_FUN_10148ddb0;
undefined FUN_100301598;
undefined FUN_10030168c;
undefined FUN_100301ac4;
undefined *PTR_thunk_FUN_100302904_10148df88;
undefined *PTR_thunk_FUN_100303c10_10148e0d0;
undefined *PTR_FUN_10148e240;
undefined *PTR_FUN_10148e268;
undefined *PTR_FUN_10148e3d8;
undefined DAT_101158cb0;
undefined *PTR_FUN_10148e400;
undefined *PTR_s_stat_offense_10148e538;
undefined *PTR_thunk_FUN_100304844_10148e568;
undefined DAT_101158cd0;
undefined thunk_FUN_100304f5c;
undefined thunk_FUN_1003050b8;
undefined FUN_100305370;
undefined1 DAT_101e45b98;
undefined2 DAT_101e45b9a;
undefined2 DAT_101e45b9c;
undefined4 DAT_101e45b9e;
undefined4 DAT_101e45ba2;
undefined4 DAT_101e45ba6;
undefined4 DAT_101e45baa;
undefined4 DAT_101e45bae;
undefined4 DAT_101e45bb2;
undefined4 DAT_101e45bb6;
undefined4 DAT_101e45bba;
undefined4 DAT_101e45bbe;
undefined4 DAT_101e45bc2;
undefined4 DAT_101e45bc6;
undefined4 DAT_101e45bca;
undefined4 DAT_101e45bce;
undefined4 DAT_101e45bd2;
undefined4 DAT_101e45bd6;
undefined4 DAT_101e45bda;
undefined4 DAT_101e45bde;
undefined4 DAT_101e45be2;
undefined4 DAT_101e45be6;
undefined4 DAT_101e45bea;
undefined4 DAT_101e45bee;
undefined4 DAT_101e45bf2;
undefined4 DAT_101e45bf6;
undefined4 DAT_101e45bfa;
undefined4 DAT_101e45bfe;
undefined4 DAT_101e45c02;
undefined4 DAT_101e45c06;
undefined4 DAT_101e45c0a;
undefined4 DAT_101e45c0e;
undefined4 DAT_101e45c12;
undefined4 DAT_101e45c16;
undefined4 DAT_101e45c1a;
undefined4 DAT_101e45c1e;
undefined4 DAT_101e45c22;
undefined4 DAT_101e45c26;
undefined4 DAT_101e45c2a;
undefined4 DAT_101e45c2e;
undefined4 DAT_101e45c32;
undefined4 DAT_101e45c36;
undefined4 DAT_101e45c3a;
undefined4 DAT_101e45c3e;
undefined4 DAT_101e45c42;
undefined4 DAT_101e45c46;
undefined4 DAT_101e45c4a;
undefined4 DAT_101e45c4e;
undefined4 DAT_101e45c52;
undefined4 DAT_101e45c56;
undefined4 DAT_101e45c5a;
undefined4 DAT_101e45c5e;
undefined4 DAT_101e45c62;
undefined4 DAT_101e45c66;
undefined4 DAT_101e45c6a;
undefined4 DAT_101e45c74;
undefined4 DAT_101e45c78;
undefined4 DAT_101e45c7c;
undefined4 DAT_101e45c80;
undefined4 DAT_101e45c8c;
undefined4 DAT_101e45c90;
undefined4 DAT_101e45c94;
undefined4 DAT_101e45c70;
undefined4 DAT_101e45c98;
undefined4 DAT_101e45c84;
undefined4 DAT_101e45c9c;
undefined4 DAT_101e45c88;
undefined4 DAT_101e45ca0;
undefined4 DAT_101e45ca4;
undefined4 DAT_101e45ca8;
undefined4 DAT_101e45cac;
undefined4 DAT_101e45cb0;
undefined4 DAT_101e45cb4;
undefined4 DAT_101e45cb8;
undefined4 DAT_101e45cbc;
undefined4 DAT_101e45cc0;
undefined4 DAT_101e45cc4;
undefined4 DAT_101e45cc8;
undefined4 DAT_101e45ccc;
undefined4 DAT_101e45cd0;
undefined4 DAT_101e45cd4;
undefined4 DAT_101e45cd8;
undefined4 DAT_101e45cdc;
undefined4 DAT_101e45ce0;
undefined4 DAT_101e45ce4;
undefined4 DAT_101e45ce8;
undefined4 DAT_101e45cec;
undefined4 DAT_101e45cf0;
undefined4 DAT_101e45cf4;
undefined4 DAT_101e45cf8;
undefined4 DAT_101e45cfc;
undefined4 DAT_101e45d00;
undefined4 DAT_101e45d04;
undefined4 DAT_101e45d08;
undefined *PTR_FUN_10148e998;
undefined *PTR_FUN_10148eae0;
undefined1 DAT_101872b98;
undefined FUN_100306174;
undefined *PTR_FUN_10148ec40;
undefined *PTR_thunk_FUN_10064e2bc_10148eda0;
undefined *PTR_FUN_10148ef00;
undefined *PTR_thunk_FUN_1003064f4_10148ef48;
undefined *PTR_FUN_10148e838;
undefined thunk_FUN_1003079ac;
undefined *PTR_thunk_FUN_100307cd4_10148f090;
undefined1 DAT_101e45d20;
undefined DAT_101e45d10;
undefined8 DAT_101e45d30;
undefined8 DAT_101d23850;
undefined8 *DAT_101d23850;
void *DAT_101d23850;
long DAT_101e45d38;
undefined DAT_101e45d30;
undefined1 DAT_101e45d28;
undefined2 DAT_101e45d2a;
undefined2 DAT_101e45d2c;
undefined8 DAT_101e45d38;
undefined FUN_100308068;
long *DAT_101e45d40;
undefined *PTR_FUN_10148f210;
undefined8 DAT_101e45d40;
undefined8 *DAT_101e45d40;
undefined *PTR_thunk_FUN_1003084c0_10148f268;
undefined *PTR_FUN_10148f2c8;
pointer PTR_FUN_10148f308;
undefined *PTR_thunk_FUN_10030a674_10148f320;
undefined *PTR_FUN_10148f6c0;
undefined8 DAT_101d91160;
undefined thunk_FUN_10030b608;
undefined thunk_FUN_10030a53c;
undefined FUN_10030a534;
long DAT_101e45d48;
long *DAT_101e45d48;
undefined8 DAT_101e45d48;
pointer PTR_s_cloud9_10148f6e0;
pointer PTR_s_com.superevilmegacorp.vg.esports_10148f6e8;
undefined *PTR_thunk_FUN_10030bab4_10148f7e0;
undefined *PTR_FUN_10148f810;
undefined thunk_FUN_10030bc7c;
long DAT_101d23858;
long *DAT_101d23858;
undefined *PTR_FUN_10148f840;
undefined FUN_10030c1cc;
undefined *PTR_thunk_FUN_100247a5c_10148fbd8;
undefined *PTR_FUN_10148fdc0;
undefined *PTR_FUN_10148fde8;
undefined8 DAT_101d23860;
void *DAT_101e45d50;
long *DAT_101d23860;
pthread_mutex_t *DAT_101e45d50;
long DAT_101d23860;
undefined *PTR_thunk_FUN_10030c9d4_101490180;
undefined *PTR_FUN_1014901b8;
undefined FUN_10030d0ac;
undefined thunk_FUN_10021a248;
undefined *PTR_thunk_FUN_10030d220_101490550;
undefined8 *DAT_101d23868;
long *DAT_101d23868;
undefined8 DAT_101d23868;
undefined8 *DAT_101e45d58;
undefined *PTR_FUN_1014908e8;
long *DAT_101e45d58;
undefined8 DAT_101e45d58;
undefined DAT_101158ce2;
undefined DAT_101e45d60;
mach_header __mh_execute_header;
undefined4 DAT_101e46800;
undefined FUN_100312e98;
long DAT_101e468e0;
undefined8 DAT_101e468e0;
undefined FUN_100316500;
undefined8 *DAT_101e468e8;
void *DAT_101e468e8;
undefined8 DAT_101e468e8;
undefined FUN_100317a80;
undefined FUN_100317abc;
undefined FUN_100317af8;
undefined FUN_100317b34;
undefined4 DAT_101158f00;
undefined4 DAT_101158f04;
undefined4 DAT_101158f08;
undefined4 DAT_101158f0c;
undefined FUN_1003185f8;
undefined FUN_100318634;
undefined FUN_100318670;
undefined FUN_1003186ac;
undefined FUN_1003186e8;
undefined FUN_100318724;
undefined FUN_100318760;
undefined FUN_10031879c;
undefined FUN_100317bc8;
undefined FUN_100317c24;
undefined FUN_100317c88;
undefined FUN_100317ce4;
undefined FUN_100317d48;
undefined FUN_100317da4;
undefined FUN_100317df0;
undefined FUN_100317e3c;
undefined FUN_100317e88;
undefined FUN_100317eec;
undefined FUN_100317f48;
undefined FUN_100317fac;
undefined FUN_100318014;
undefined FUN_100318008;
undefined FUN_100318120;
undefined FUN_10031817c;
undefined FUN_1003181e0;
undefined FUN_10031823c;
undefined FUN_1003182a0;
undefined FUN_1003182fc;
undefined FUN_100318360;
undefined FUN_1003183bc;
undefined FUN_100318420;
undefined FUN_10031847c;
undefined FUN_1003184e0;
undefined FUN_100318548;
undefined FUN_10031853c;
undefined FUN_100318050;
undefined FUN_10031808c;
undefined FUN_100318584;
undefined FUN_1003185bc;
pointer PTR_FUN_10144d720;
pointer PTR_FUN_10144d750;
pointer PTR_FUN_10144d780;
pointer PTR_FUN_10144d648;
pointer PTR_FUN_10144d660;
pointer PTR_FUN_10144d630;
pointer PTR_FUN_10144d6c0;
pointer PTR_FUN_10144d6f0;
pointer PTR_FUN_10144d7b0;
undefined8 DAT_101d23870;
undefined *PTR_s_vainglory://video/welcome_101490c70;
void *DAT_101d23870;
undefined *PTR_s_.de_101490e60;
undefined8 DAT_101d23878;
void *DAT_101d23878;
long DAT_101e468f0;
long *DAT_101e468f0;
undefined8 DAT_101e468f0;
undefined thunk_FUN_10031ba0c;
undefined thunk_FUN_10031b2a4;
undefined *PTR_thunk_FUN_10031acac_101490f50;
undefined *PTR_FUN_1014912f8;
undefined *PTR_FUN_101491328;
undefined *PTR_thunk_FUN_10031b974_101491368;
undefined *PTR_FUN_1014913c0;
undefined *PTR_thunk_FUN_10031b974_101491418;
undefined FUN_10031af08;
undefined FUN_10031af04;
undefined FUN_10031bda0;
undefined FUN_10031bd8c;
undefined FUN_10031bdc8;
undefined FUN_10031bdb4;
long DAT_101e468f8;
long *DAT_101e468f8;
undefined8 DAT_101e468f8;
undefined *PTR_thunk_FUN_10031dd68_101491470;
undefined *PTR_FUN_101491810;
undefined thunk_FUN_10031de54;
undefined *PTR_FUN_101491840;
undefined *PTR_FUN_101491a28;
undefined *PTR_FUN_101491a50;
long DAT_101e46900;
long *DAT_101e46900;
undefined8 DAT_101e46900;
undefined *PTR_thunk_FUN_10031f3e8_101491de8;
undefined *PTR_FUN_1014921a0;
undefined *PTR_FUN_1014921d0;
undefined FUN_10031fdec;
undefined8 *DAT_101d23880;
undefined *PTR_thunk_FUN_100321204_101492208;
undefined *PTR_FUN_101492278;
long *DAT_101d23880;
long DAT_101d23880;
undefined8 DAT_101d23880;
undefined FUN_100320130;
undefined FUN_100320128;
undefined DAT_101158fd0;
undefined *PTR_s_tutorialLevelGwen_101854b08;
undefined *PTR_s_tutorialLevelKoshka_101854b00;
undefined8 *DAT_101e46a90;
undefined *PTR_thunk_FUN_100325248_101492610;
undefined *PTR_FUN_1014929b0;
undefined8 DAT_101e46a80;
long *DAT_101e46a90;
undefined8 DAT_101e46a90;
undefined DAT_101e46a80;
int *DAT_101e46a88;
long DAT_101e46a88;
undefined thunk_FUN_1003257fc;
undefined1 DAT_101e46908;
undefined2 DAT_101e4690a;
undefined2 DAT_101e4690c;
undefined4 DAT_101e4690e;
undefined4 DAT_101e46912;
undefined4 DAT_101e46916;
undefined4 DAT_101e4691a;
undefined4 DAT_101e4691e;
undefined4 DAT_101e46922;
undefined4 DAT_101e46926;
undefined4 DAT_101e4692a;
undefined4 DAT_101e4692e;
undefined4 DAT_101e46932;
undefined4 DAT_101e46936;
undefined4 DAT_101e4693a;
undefined4 DAT_101e4693e;
undefined4 DAT_101e46942;
undefined4 DAT_101e46946;
undefined4 DAT_101e4694a;
undefined4 DAT_101e4694e;
undefined4 DAT_101e46952;
undefined4 DAT_101e46956;
undefined4 DAT_101e4695a;
undefined4 DAT_101e4695e;
undefined4 DAT_101e46962;
undefined4 DAT_101e46966;
undefined4 DAT_101e4696a;
undefined4 DAT_101e4696e;
undefined4 DAT_101e46972;
undefined4 DAT_101e46976;
undefined4 DAT_101e4697a;
undefined4 DAT_101e4697e;
undefined4 DAT_101e46982;
undefined4 DAT_101e46986;
undefined4 DAT_101e4698a;
undefined4 DAT_101e4698e;
undefined4 DAT_101e46992;
undefined4 DAT_101e46996;
undefined4 DAT_101e4699a;
undefined4 DAT_101e4699e;
undefined4 DAT_101e469a2;
undefined4 DAT_101e469a6;
undefined4 DAT_101e469aa;
undefined4 DAT_101e469ae;
undefined4 DAT_101e469b2;
undefined4 DAT_101e469b6;
undefined4 DAT_101e469ba;
undefined4 DAT_101e469be;
undefined4 DAT_101e469c2;
undefined4 DAT_101e469c6;
undefined4 DAT_101e469ca;
undefined4 DAT_101e469ce;
undefined4 DAT_101e469d2;
undefined4 DAT_101e469d6;
undefined4 DAT_101e469da;
undefined4 DAT_101e469e0;
undefined4 DAT_101e469e4;
undefined4 DAT_101e469e8;
undefined4 DAT_101e469ec;
undefined4 DAT_101e469f0;
undefined4 DAT_101e469f4;
undefined4 DAT_101e469f8;
undefined4 DAT_101e469fc;
undefined4 DAT_101e46a00;
undefined4 DAT_101e46a04;
undefined4 DAT_101e46a08;
undefined4 DAT_101e46a0c;
undefined4 DAT_101e46a10;
undefined4 DAT_101e46a14;
undefined4 DAT_101e46a18;
undefined4 DAT_101e46a1c;
undefined4 DAT_101e46a20;
undefined4 DAT_101e46a24;
undefined4 DAT_101e46a28;
undefined4 DAT_101e46a2c;
undefined4 DAT_101e46a30;
undefined4 DAT_101e46a34;
undefined4 DAT_101e46a38;
undefined4 DAT_101e46a3c;
undefined4 DAT_101e46a40;
undefined4 DAT_101e46a44;
undefined4 DAT_101e46a48;
undefined4 DAT_101e46a4c;
undefined4 DAT_101e46a50;
undefined4 DAT_101e46a54;
undefined4 DAT_101e46a58;
undefined4 DAT_101e46a5c;
undefined4 DAT_101e46a60;
undefined4 DAT_101e46a64;
undefined4 DAT_101e46a68;
undefined4 DAT_101e46a6c;
undefined4 DAT_101e46a70;
undefined4 DAT_101e46a74;
undefined4 DAT_101e46a78;
undefined8 DAT_101e46a88;
undefined FUN_100325144;
long DAT_101e46a98;
pointer PTR_s_player_101854b10;
pointer PTR_s_generic_quest_101854b60;
undefined8 DAT_101e46a98;
undefined8 DAT_101e46aa0;
long *DAT_101e46aa0;
long *DAT_101e46a98;
undefined *PTR_FUN_1014929e0;
undefined *PTR_FUN_101492d88;
long *DAT_101e46aa8;
undefined8 DAT_101e46aa8;
undefined *PTR_thunk_FUN_100327ea8_101492db8;
long DAT_101e46ab0;
long *DAT_101e46ab0;
undefined8 DAT_101e46ab0;
undefined *PTR_thunk_FUN_1003284b4_101493150;
undefined *PTR_FUN_101493180;
undefined *PTR_FUN_1014931b0;
undefined FUN_10032982c;
undefined8 DAT_101d23888;
void *DAT_101e46ab8;
long *DAT_101d23888;
pthread_mutex_t *DAT_101e46ab8;
pointer PTR_thunk_FUN_100329d50_1014931e0;
undefined *PTR_thunk_FUN_1004f15a8_101493200;
undefined thunk_FUN_100329dc4;
undefined thunk_FUN_100329f18;
undefined8 *DAT_101e46ac0;
undefined *PTR_FUN_101493230;
undefined *PTR_FUN_1014935d0;
long *DAT_101e46ac0;
undefined8 DAT_101e46ac0;
undefined *PTR_FUN_101493600;
undefined DAT_101d23890;
char DAT_101e46ac8;
undefined1 DAT_101e46ac8;
byte DAT_101e46ac8;
undefined8 *DAT_101d238a8;
undefined *PTR_FUN_1014939c0;
undefined *PTR_FUN_101493a00;
long *DAT_101d238a8;
undefined8 *DAT_101e46ad0;
void *DAT_101e46ad8;
pthread_mutex_t *DAT_101e46ad8;
undefined *PTR_thunk_FUN_10032b588_101493998;
undefined FUN_10032add4;
undefined DAT_101e46c88;
undefined8 DAT_101e46cc8;
undefined1 DAT_101e46cc0;
uint DAT_101e46c98;
long DAT_101e46ca0;
char DAT_101e46cc0;
uint DAT_101e46ca8;
long DAT_101e46cb0;
undefined FUN_10032c9cc;
undefined FUN_10032f5a8;
undefined FUN_10032f7a0;
undefined FUN_10032f84c;
undefined8 DAT_101e46c70;
undefined8 DAT_101e46c58;
undefined4 DAT_101e46bb4;
undefined DAT_101e46d00;
undefined1 DAT_101e46ae0;
undefined2 DAT_101e46ae2;
undefined2 DAT_101e46ae4;
undefined4 DAT_101e46ae6;
undefined4 DAT_101e46aea;
undefined4 DAT_101e46aee;
undefined4 DAT_101e46af2;
undefined4 DAT_101e46af6;
undefined4 DAT_101e46afa;
undefined4 DAT_101e46afe;
undefined4 DAT_101e46b02;
undefined4 DAT_101e46b06;
undefined4 DAT_101e46b0a;
undefined4 DAT_101e46b0e;
undefined4 DAT_101e46b12;
undefined4 DAT_101e46b16;
undefined4 DAT_101e46b1a;
undefined4 DAT_101e46b1e;
undefined4 DAT_101e46b22;
undefined4 DAT_101e46b26;
undefined4 DAT_101e46b2a;
undefined4 DAT_101e46b2e;
undefined4 DAT_101e46b32;
undefined4 DAT_101e46b36;
undefined4 DAT_101e46b3a;
undefined4 DAT_101e46b3e;
undefined4 DAT_101e46b42;
undefined4 DAT_101e46b46;
undefined4 DAT_101e46b4a;
undefined4 DAT_101e46b4e;
undefined4 DAT_101e46b52;
undefined FUN_10032b8c8;
undefined4 DAT_101e46b56;
undefined FUN_10032b8f8;
undefined4 DAT_101e46b5a;
undefined FUN_10032b920;
undefined4 DAT_101e46b5e;
undefined FUN_10032b970;
undefined4 DAT_101e46b62;
undefined FUN_10032b998;
undefined4 DAT_101e46b66;
undefined4 DAT_101e46b6a;
undefined4 DAT_101e46b6e;
undefined4 DAT_101e46b72;
undefined4 DAT_101e46b76;
undefined4 DAT_101e46b7a;
undefined4 DAT_101e46b7e;
undefined4 DAT_101e46b82;
undefined4 DAT_101e46b86;
undefined4 DAT_101e46b8a;
undefined4 DAT_101e46b8e;
undefined4 DAT_101e46b92;
undefined4 DAT_101e46b96;
undefined4 DAT_101e46b9a;
undefined4 DAT_101e46b9e;
undefined4 DAT_101e46ba2;
undefined4 DAT_101e46ba6;
undefined4 DAT_101e46baa;
undefined4 DAT_101e46bae;
undefined4 DAT_101e46bb8;
undefined4 DAT_101e46bbc;
undefined4 DAT_101e46bc0;
undefined4 DAT_101e46bc4;
undefined4 DAT_101e46bc8;
undefined4 DAT_101e46bcc;
undefined4 DAT_101e46bd0;
undefined4 DAT_101e46bd4;
undefined4 DAT_101e46bd8;
undefined4 DAT_101e46bdc;
undefined4 DAT_101e46be0;
undefined4 DAT_101e46be4;
undefined4 DAT_101e46be8;
undefined4 DAT_101e46bec;
undefined4 DAT_101e46bf0;
undefined4 DAT_101e46bf4;
undefined4 DAT_101e46bf8;
undefined4 DAT_101e46bfc;
undefined4 DAT_101e46c00;
undefined4 DAT_101e46c04;
undefined4 DAT_101e46c08;
undefined4 DAT_101e46c0c;
undefined4 DAT_101e46c10;
undefined4 DAT_101e46c14;
undefined4 DAT_101e46c18;
undefined4 DAT_101e46c1c;
undefined4 DAT_101e46c20;
undefined4 DAT_101e46c24;
undefined4 DAT_101e46c28;
undefined4 DAT_101e46c2c;
undefined4 DAT_101e46c30;
undefined4 DAT_101e46c34;
undefined4 DAT_101e46c38;
undefined4 DAT_101e46c3c;
undefined4 DAT_101e46c40;
undefined4 DAT_101e46c44;
undefined4 DAT_101e46c48;
undefined4 DAT_101e46c4c;
undefined4 DAT_101e46c50;
undefined8 DAT_101e46c60;
undefined8 DAT_101e46c78;
undefined8 DAT_101e46ca0;
undefined DAT_101e46c98;
undefined DAT_101e46cb0;
undefined DAT_101e46ca8;
undefined8 DAT_101e46cd0;
undefined8 DAT_101e46ce0;
undefined8 DAT_101e46ce8;
undefined1 DAT_101e46cf8;
undefined8 DAT_101e46cf0;
undefined DAT_101e46d10;
undefined1 DAT_101e46d20;
undefined8 DAT_101e46d30;
undefined8 DAT_101e46d38;
undefined8 DAT_101e46d28;
undefined DAT_101e46cd8;
undefined DAT_101e46d40;
undefined8 UNK_101e46c90;
undefined1 UNK_101e46cb8;
undefined8 UNK_101e46cb9;
undefined8 UNK_101e46d08;
undefined8 UNK_101e46d18;
undefined *PTR_thunk_FUN_100333c98_101493d98;
undefined FUN_1003350ac;
undefined FUN_1003350a0;
undefined *PTR_thunk_FUN_1003367ac_1014942b8;
undefined *PTR_FUN_1014943c0;
undefined thunk_FUN_10033777c;
undefined thunk_FUN_1003379f4;
undefined thunk_FUN_1003379a0;
undefined thunk_FUN_100337a44;
char DAT_101e46ee7;
undefined8 DAT_101e46ed0;
char DAT_101e46f17;
undefined8 DAT_101e46f00;
undefined4 DAT_101e46e20;
undefined4 DAT_101e46e24;
undefined1 DAT_101e46d48;
undefined2 DAT_101e46d4a;
undefined2 DAT_101e46d4c;
undefined4 DAT_101e46d4e;
undefined4 DAT_101e46d52;
undefined4 DAT_101e46d56;
undefined4 DAT_101e46d5a;
undefined4 DAT_101e46d5e;
undefined4 DAT_101e46d62;
undefined4 DAT_101e46d66;
undefined4 DAT_101e46d6a;
undefined4 DAT_101e46d6e;
undefined4 DAT_101e46d72;
undefined4 DAT_101e46d76;
undefined4 DAT_101e46d7a;
undefined4 DAT_101e46d7e;
undefined4 DAT_101e46d82;
undefined4 DAT_101e46d86;
undefined4 DAT_101e46d8a;
undefined4 DAT_101e46d8e;
undefined4 DAT_101e46d92;
undefined4 DAT_101e46d96;
undefined4 DAT_101e46d9a;
undefined4 DAT_101e46d9e;
undefined4 DAT_101e46da2;
undefined4 DAT_101e46da6;
undefined4 DAT_101e46daa;
undefined4 DAT_101e46dae;
undefined4 DAT_101e46db2;
undefined4 DAT_101e46db6;
undefined4 DAT_101e46dba;
undefined4 DAT_101e46dbe;
undefined4 DAT_101e46dc2;
undefined4 DAT_101e46dc6;
undefined4 DAT_101e46dca;
undefined4 DAT_101e46dce;
undefined4 DAT_101e46dd2;
undefined4 DAT_101e46dd6;
undefined4 DAT_101e46dda;
undefined4 DAT_101e46dde;
undefined4 DAT_101e46de2;
undefined4 DAT_101e46de6;
undefined4 DAT_101e46dea;
undefined4 DAT_101e46dee;
undefined4 DAT_101e46df2;
undefined4 DAT_101e46df6;
undefined4 DAT_101e46dfa;
undefined4 DAT_101e46dfe;
undefined4 DAT_101e46e02;
undefined4 DAT_101e46e06;
undefined4 DAT_101e46e0a;
undefined4 DAT_101e46e0e;
undefined4 DAT_101e46e12;
undefined4 DAT_101e46e16;
undefined4 DAT_101e46e1a;
undefined4 DAT_101e46e2c;
undefined4 DAT_101e46e28;
undefined4 DAT_101e46e30;
undefined4 DAT_101e46e3c;
undefined4 DAT_101e46e40;
undefined4 DAT_101e46e44;
undefined4 DAT_101e46e34;
undefined4 DAT_101e46e48;
undefined4 DAT_101e46e38;
undefined4 DAT_101e46e4c;
undefined4 DAT_101e46e50;
undefined4 DAT_101e46e54;
undefined4 DAT_101e46e58;
undefined4 DAT_101e46e5c;
undefined4 DAT_101e46e60;
undefined4 DAT_101e46e64;
undefined4 DAT_101e46e68;
undefined4 DAT_101e46e6c;
undefined4 DAT_101e46e70;
undefined4 DAT_101e46e74;
undefined4 DAT_101e46e78;
undefined4 DAT_101e46e7c;
undefined4 DAT_101e46e80;
undefined4 DAT_101e46e84;
undefined4 DAT_101e46e88;
undefined4 DAT_101e46e8c;
undefined4 DAT_101e46e90;
undefined4 DAT_101e46e94;
undefined4 DAT_101e46e98;
undefined4 DAT_101e46e9c;
undefined4 DAT_101e46ea0;
undefined4 DAT_101e46ea4;
undefined4 DAT_101e46ea8;
undefined4 DAT_101e46eac;
undefined4 DAT_101e46eb0;
undefined4 DAT_101e46eb4;
undefined4 DAT_101e46eb8;
undefined8 DAT_101e46ec0;
undefined8 DAT_101e46ec8;
undefined DAT_101e46ee8;
undefined8 *DAT_101e46f18;
void *DAT_101e46f20;
pthread_mutex_t *DAT_101e46f20;
undefined *PTR_thunk_FUN_100338444_1014943e8;
undefined *PTR_FUN_101494418;
undefined *PTR_FUN_1014947c8;
undefined *PTR_FUN_1014947f8;
undefined FUN_100338e48;
long DAT_101d238f8;
undefined8 DAT_101d238f8;
long *DAT_101d238f8;
undefined1 DAT_101e46f28;
undefined2 DAT_101e46f2a;
undefined2 DAT_101e46f2c;
undefined4 DAT_101e46f2e;
undefined4 DAT_101e46f32;
undefined4 DAT_101e46f36;
undefined4 DAT_101e46f3a;
undefined4 DAT_101e46f3e;
undefined4 DAT_101e46f42;
undefined4 DAT_101e46f46;
undefined4 DAT_101e46f4a;
undefined4 DAT_101e46f4e;
undefined4 DAT_101e46f52;
undefined4 DAT_101e46f56;
undefined4 DAT_101e46f5a;
undefined4 DAT_101e46f5e;
undefined4 DAT_101e46f62;
undefined4 DAT_101e46f66;
undefined4 DAT_101e46f6a;
undefined4 DAT_101e46f6e;
undefined4 DAT_101e46f72;
undefined4 DAT_101e46f76;
undefined4 DAT_101e46f7a;
undefined4 DAT_101e46f7e;
undefined4 DAT_101e46f82;
undefined4 DAT_101e46f86;
undefined4 DAT_101e46f8a;
undefined4 DAT_101e46f8e;
undefined4 DAT_101e46f92;
undefined4 DAT_101e46f96;
undefined4 DAT_101e46f9a;
undefined4 DAT_101e46f9e;
undefined4 DAT_101e46fa2;
undefined4 DAT_101e46fa6;
undefined4 DAT_101e46faa;
undefined4 DAT_101e46fae;
undefined4 DAT_101e46fb2;
undefined4 DAT_101e46fb6;
undefined4 DAT_101e46fba;
undefined4 DAT_101e46fbe;
undefined4 DAT_101e46fc2;
undefined4 DAT_101e46fc6;
undefined4 DAT_101e46fca;
undefined4 DAT_101e46fce;
undefined4 DAT_101e46fd2;
undefined4 DAT_101e46fd6;
undefined4 DAT_101e46fda;
undefined4 DAT_101e46fde;
undefined4 DAT_101e46fe2;
undefined4 DAT_101e46fe6;
undefined4 DAT_101e46fea;
undefined4 DAT_101e46fee;
undefined4 DAT_101e46ff2;
undefined4 DAT_101e46ff6;
undefined4 DAT_101e46ffa;
undefined4 DAT_101e47004;
undefined4 DAT_101e47008;
undefined4 DAT_101e4700c;
undefined4 DAT_101e47010;
undefined4 DAT_101e4701c;
undefined4 DAT_101e47020;
undefined4 DAT_101e47024;
undefined4 DAT_101e47000;
undefined4 DAT_101e47028;
undefined4 DAT_101e47014;
undefined4 DAT_101e4702c;
undefined4 DAT_101e47018;
undefined4 DAT_101e47030;
undefined4 DAT_101e47034;
undefined4 DAT_101e47038;
undefined4 DAT_101e4703c;
undefined4 DAT_101e47040;
undefined4 DAT_101e47044;
undefined4 DAT_101e47048;
undefined4 DAT_101e4704c;
undefined4 DAT_101e47050;
undefined4 DAT_101e47054;
undefined4 DAT_101e47058;
undefined4 DAT_101e4705c;
undefined4 DAT_101e47060;
undefined4 DAT_101e47064;
undefined4 DAT_101e47068;
undefined4 DAT_101e4706c;
undefined4 DAT_101e47070;
undefined4 DAT_101e47074;
undefined4 DAT_101e47078;
undefined4 DAT_101e4707c;
undefined4 DAT_101e47080;
undefined4 DAT_101e47084;
undefined4 DAT_101e47088;
undefined4 DAT_101e4708c;
undefined4 DAT_101e47090;
undefined4 DAT_101e47094;
undefined4 DAT_101e47098;
undefined *PTR_FUN_101494828;
undefined DAT_101e47240;
undefined *PTR_thunk_FUN_10033b0e8_101494850;
undefined1 DAT_101e470a0;
undefined2 DAT_101e470a2;
undefined2 DAT_101e470a4;
undefined4 DAT_101e470a6;
undefined4 DAT_101e470aa;
undefined4 DAT_101e470ae;
undefined4 DAT_101e470b2;
undefined4 DAT_101e470b6;
undefined4 DAT_101e470ba;
undefined4 DAT_101e470be;
undefined4 DAT_101e470c2;
undefined4 DAT_101e470c6;
undefined4 DAT_101e470ca;
undefined4 DAT_101e470ce;
undefined4 DAT_101e470d2;
undefined4 DAT_101e470d6;
undefined4 DAT_101e470da;
undefined4 DAT_101e470de;
undefined4 DAT_101e470e2;
undefined4 DAT_101e470e6;
undefined4 DAT_101e470ea;
undefined4 DAT_101e470ee;
undefined4 DAT_101e470f2;
undefined4 DAT_101e470f6;
undefined4 DAT_101e470fa;
undefined4 DAT_101e470fe;
undefined4 DAT_101e47102;
undefined4 DAT_101e47106;
undefined4 DAT_101e4710a;
undefined4 DAT_101e4710e;
undefined4 DAT_101e47112;
undefined4 DAT_101e47116;
undefined4 DAT_101e4711a;
undefined4 DAT_101e4711e;
undefined4 DAT_101e47122;
undefined4 DAT_101e47126;
undefined4 DAT_101e4712a;
undefined4 DAT_101e4712e;
undefined4 DAT_101e47132;
undefined4 DAT_101e47136;
undefined4 DAT_101e4713a;
undefined4 DAT_101e4713e;
undefined4 DAT_101e47142;
undefined4 DAT_101e47146;
undefined4 DAT_101e4714a;
undefined4 DAT_101e4714e;
undefined4 DAT_101e47152;
undefined4 DAT_101e47156;
undefined4 DAT_101e4715a;
undefined4 DAT_101e4715e;
undefined4 DAT_101e47162;
undefined4 DAT_101e47166;
undefined4 DAT_101e4716a;
undefined4 DAT_101e4716e;
undefined4 DAT_101e47172;
undefined4 DAT_101e4717c;
undefined4 DAT_101e47184;
undefined4 DAT_101e47180;
undefined4 DAT_101e47188;
undefined4 DAT_101e47194;
undefined4 DAT_101e47198;
undefined4 DAT_101e47178;
undefined4 DAT_101e4719c;
undefined4 DAT_101e4718c;
undefined4 DAT_101e471a0;
undefined4 DAT_101e47190;
undefined4 DAT_101e471a4;
undefined4 DAT_101e471a8;
undefined4 DAT_101e471ac;
undefined4 DAT_101e471b0;
undefined4 DAT_101e471b4;
undefined4 DAT_101e471b8;
undefined4 DAT_101e471bc;
undefined4 DAT_101e471c0;
undefined4 DAT_101e471c4;
undefined4 DAT_101e471c8;
undefined4 DAT_101e471cc;
undefined4 DAT_101e471d0;
undefined4 DAT_101e471d4;
undefined4 DAT_101e471d8;
undefined4 DAT_101e471dc;
undefined4 DAT_101e471e0;
undefined4 DAT_101e471e4;
undefined4 DAT_101e471e8;
undefined4 DAT_101e471ec;
undefined4 DAT_101e471f0;
undefined4 DAT_101e471f4;
undefined4 DAT_101e471f8;
undefined4 DAT_101e471fc;
undefined4 DAT_101e47200;
undefined4 DAT_101e47204;
undefined4 DAT_101e47208;
undefined4 DAT_101e4720c;
undefined4 DAT_101e47210;
undefined8 DAT_101e47218;
undefined8 DAT_101e47220;
undefined DAT_101e47228;
undefined DAT_101e473e0;
undefined FUN_10033cae8;
undefined thunk_FUN_10033cd9c;
undefined thunk_FUN_10033ccd4;
undefined thunk_FUN_10033cec4;
undefined thunk_FUN_10033ce30;
undefined thunk_FUN_10033cf00;
undefined FUN_10033cadc;
undefined1 DAT_101e47258;
undefined2 DAT_101e4725a;
undefined2 DAT_101e4725c;
undefined4 DAT_101e4725e;
undefined4 DAT_101e47262;
undefined4 DAT_101e47266;
undefined4 DAT_101e4726a;
undefined4 DAT_101e4726e;
undefined4 DAT_101e47272;
undefined4 DAT_101e47276;
undefined4 DAT_101e4727a;
undefined4 DAT_101e4727e;
undefined4 DAT_101e47282;
undefined4 DAT_101e47286;
undefined4 DAT_101e4728a;
undefined4 DAT_101e4728e;
undefined4 DAT_101e47292;
undefined4 DAT_101e47296;
undefined4 DAT_101e4729a;
undefined4 DAT_101e4729e;
undefined4 DAT_101e472a2;
undefined4 DAT_101e472a6;
undefined4 DAT_101e472aa;
undefined4 DAT_101e472ae;
undefined4 DAT_101e472b2;
undefined4 DAT_101e472b6;
undefined4 DAT_101e472ba;
undefined4 DAT_101e472be;
undefined4 DAT_101e472c2;
undefined4 DAT_101e472c6;
undefined4 DAT_101e472ca;
undefined4 DAT_101e472ce;
undefined4 DAT_101e472d2;
undefined4 DAT_101e472d6;
undefined4 DAT_101e472da;
undefined4 DAT_101e472de;
undefined4 DAT_101e472e2;
undefined4 DAT_101e472e6;
undefined4 DAT_101e472ea;
undefined4 DAT_101e472ee;
undefined4 DAT_101e472f2;
undefined4 DAT_101e472f6;
undefined4 DAT_101e472fa;
undefined4 DAT_101e472fe;
undefined4 DAT_101e47302;
undefined4 DAT_101e47306;
undefined4 DAT_101e4730a;
undefined4 DAT_101e4730e;
undefined4 DAT_101e47312;
undefined4 DAT_101e47316;
undefined4 DAT_101e4731a;
undefined4 DAT_101e4731e;
undefined4 DAT_101e47322;
undefined4 DAT_101e47326;
undefined4 DAT_101e4732a;
undefined4 DAT_101e47334;
undefined4 DAT_101e4733c;
undefined4 DAT_101e47338;
undefined4 DAT_101e47340;
undefined4 DAT_101e4734c;
undefined4 DAT_101e47350;
undefined4 DAT_101e47330;
undefined4 DAT_101e47354;
undefined4 DAT_101e47344;
undefined4 DAT_101e47358;
undefined4 DAT_101e47348;
undefined4 DAT_101e4735c;
undefined4 DAT_101e47360;
undefined4 DAT_101e47364;
undefined4 DAT_101e47368;
undefined4 DAT_101e4736c;
undefined4 DAT_101e47370;
undefined4 DAT_101e47374;
undefined4 DAT_101e47378;
undefined4 DAT_101e4737c;
undefined4 DAT_101e47380;
undefined4 DAT_101e47384;
undefined4 DAT_101e47388;
undefined4 DAT_101e4738c;
undefined4 DAT_101e47390;
undefined4 DAT_101e47394;
undefined4 DAT_101e47398;
undefined4 DAT_101e4739c;
undefined4 DAT_101e473a0;
undefined4 DAT_101e473a4;
undefined4 DAT_101e473a8;
undefined4 DAT_101e473ac;
undefined4 DAT_101e473b0;
undefined4 DAT_101e473b4;
undefined4 DAT_101e473b8;
undefined4 DAT_101e473bc;
undefined4 DAT_101e473c0;
undefined4 DAT_101e473c4;
undefined4 DAT_101e473c8;
undefined8 DAT_101e473d0;
undefined8 DAT_101e473d8;
long DAT_101e473f8;
undefined *PTR_FUN_1014949b0;
pointer PTR_thunk_FUN_10033eb8c_1014949d8;
undefined *PTR_FUN_101494a18;
undefined *PTR_FUN_101494a68;
undefined *PTR_FUN_101494ae0;
undefined *PTR_FUN_101494b30;
undefined *PTR_FUN_101494b80;
undefined *PTR_FUN_101494bd0;
undefined *PTR_FUN_101494c80;
undefined *PTR_FUN_101494ce8;
undefined *PTR_FUN_101494d80;
undefined *PTR_FUN_101494dc8;
undefined *PTR_FUN_101494e38;
undefined *PTR_FUN_101494e80;
undefined *PTR_FUN_101494ea8;
undefined *PTR_FUN_10149d2b0;
undefined *PTR_FUN_10149d308;
undefined8 DAT_101e473f8;
void *DAT_101e473f8;
undefined8 DAT_101854bc8;
undefined8 DAT_101854bd0;
undefined8 DAT_101854bd8;
pointer PTR_FUN_101494950;
pointer PTR_FUN_101494970;
pointer PTR_FUN_101494990;
undefined8 *DAT_101854bd8;
undefined8 *DAT_101854bd0;
undefined8 *DAT_101854bc8;
pointer PTR_thunk_FUN_10033eb8c_1014949f8;
undefined8 *DAT_101e47400;
void *DAT_101e47408;
pthread_mutex_t *DAT_101e47408;
undefined *PTR_thunk_FUN_10033f5d4_101494ed0;
undefined FUN_1003400b4;
undefined8 *DAT_101d23930;
undefined *PTR_FUN_101494f00;
undefined *PTR_FUN_1014952a0;
long *DAT_101d23930;
long DAT_101d23930;
undefined8 *DAT_101e475a0;
void *DAT_101e475a8;
pthread_mutex_t *DAT_101e475a8;
undefined *PTR_thunk_FUN_100340b20_1014952d0;
undefined1 DAT_101e47410;
undefined2 DAT_101e47412;
undefined2 DAT_101e47414;
undefined4 DAT_101e47416;
undefined4 DAT_101e4741a;
undefined4 DAT_101e4741e;
undefined4 DAT_101e47422;
undefined4 DAT_101e47426;
undefined4 DAT_101e4742a;
undefined4 DAT_101e4742e;
undefined4 DAT_101e47432;
undefined4 DAT_101e47436;
undefined4 DAT_101e4743a;
undefined4 DAT_101e4743e;
undefined4 DAT_101e47442;
undefined4 DAT_101e47446;
undefined4 DAT_101e4744a;
undefined4 DAT_101e4744e;
undefined4 DAT_101e47452;
undefined4 DAT_101e47456;
undefined4 DAT_101e4745a;
undefined4 DAT_101e4745e;
undefined4 DAT_101e47462;
undefined4 DAT_101e47466;
undefined4 DAT_101e4746a;
undefined4 DAT_101e4746e;
undefined4 DAT_101e47472;
undefined4 DAT_101e47476;
undefined4 DAT_101e4747a;
undefined4 DAT_101e4747e;
undefined4 DAT_101e47482;
undefined4 DAT_101e47486;
undefined4 DAT_101e4748a;
undefined4 DAT_101e4748e;
undefined4 DAT_101e47492;
undefined4 DAT_101e47496;
undefined4 DAT_101e4749a;
undefined4 DAT_101e4749e;
undefined4 DAT_101e474a2;
undefined4 DAT_101e474a6;
undefined4 DAT_101e474aa;
undefined4 DAT_101e474ae;
undefined4 DAT_101e474b2;
undefined4 DAT_101e474b6;
undefined4 DAT_101e474ba;
undefined4 DAT_101e474be;
undefined4 DAT_101e474c2;
undefined4 DAT_101e474c6;
undefined4 DAT_101e474ca;
undefined4 DAT_101e474ce;
undefined4 DAT_101e474d2;
undefined4 DAT_101e474d6;
undefined4 DAT_101e474da;
undefined4 DAT_101e474de;
undefined4 DAT_101e474e2;
undefined4 DAT_101e474ec;
undefined4 DAT_101e474f0;
undefined4 DAT_101e474f4;
undefined4 DAT_101e474f8;
undefined4 DAT_101e47504;
undefined4 DAT_101e47508;
undefined4 DAT_101e4750c;
undefined4 DAT_101e474e8;
undefined4 DAT_101e47510;
undefined4 DAT_101e474fc;
undefined4 DAT_101e47514;
undefined4 DAT_101e47500;
undefined4 DAT_101e47518;
undefined4 DAT_101e4751c;
undefined4 DAT_101e47520;
undefined4 DAT_101e47524;
undefined4 DAT_101e47528;
undefined4 DAT_101e4752c;
undefined4 DAT_101e47530;
undefined4 DAT_101e47534;
undefined4 DAT_101e47538;
undefined4 DAT_101e4753c;
undefined4 DAT_101e47540;
undefined4 DAT_101e47544;
undefined4 DAT_101e47548;
undefined4 DAT_101e4754c;
undefined4 DAT_101e47550;
undefined4 DAT_101e47554;
undefined4 DAT_101e47558;
undefined4 DAT_101e4755c;
undefined4 DAT_101e47560;
undefined4 DAT_101e47564;
undefined4 DAT_101e47568;
undefined4 DAT_101e4756c;
undefined4 DAT_101e47570;
undefined4 DAT_101e47574;
undefined4 DAT_101e47578;
undefined4 DAT_101e4757c;
undefined4 DAT_101e47580;
undefined DAT_101e47588;
undefined8 *DAT_101d23938;
undefined *PTR_FUN_101495300;
undefined *PTR_FUN_1014956a0;
long *DAT_101d23938;
long DAT_101d23938;
void *DAT_101d23940;
undefined FUN_100341e20;
long DAT_101d23940;
undefined8 DAT_101d23940;
undefined *PTR_thunk_FUN_100341ed8_1014956d0;
undefined *PTR_FUN_101495a78;
undefined thunk_FUN_100342370;
pointer PTR_s_Adagio_101854c40;
undefined8 DAT_101854c48;
float DAT_101e475b0;
undefined4 DAT_101e47670;
undefined DAT_101e47670;
undefined DAT_101e47680;
undefined DAT_101e47690;
undefined DAT_101e476a0;
undefined4 DAT_101e476b0;
undefined4 DAT_101e476b4;
undefined4 DAT_101e476b8;
undefined4 DAT_101e476bc;
undefined DAT_101e476c0;
undefined4 DAT_101e476d0;
undefined4 DAT_101e476d4;
undefined DAT_101e476d8;
undefined DAT_101e476e8;
undefined DAT_101e476f8;
undefined DAT_101e47708;
undefined4 DAT_101e47718;
undefined4 DAT_101e4771c;
undefined4 DAT_101e47720;
undefined DAT_101e475b0;
undefined8 DAT_101e475c0;
undefined4 DAT_101e475c8;
undefined DAT_101e475cc;
undefined4 DAT_101e475dc;
undefined4 DAT_101e475e0;
undefined8 DAT_101e475e4;
undefined4 DAT_101e475ec;
undefined8 DAT_101e475f0;
undefined8 DAT_101e475f8;
undefined DAT_101e47600;
undefined DAT_101e47610;
undefined DAT_101e47620;
undefined DAT_101e47630;
undefined4 DAT_101e47640;
undefined4 DAT_101e47644;
undefined4 DAT_101e47648;
undefined4 DAT_101e4764c;
undefined4 DAT_101e47650;
undefined4 DAT_101e47654;
undefined8 DAT_101e47658;
undefined4 DAT_101e47660;
undefined8 UNK_101e475b8;
undefined8 UNK_101e475d4;
undefined8 UNK_101e47608;
undefined8 UNK_101e47618;
undefined8 UNK_101e47628;
undefined8 UNK_101e47638;
undefined8 UNK_101e47678;
undefined8 UNK_101e47688;
undefined8 UNK_101e47698;
undefined8 UNK_101e476a8;
undefined8 UNK_101e476c8;
undefined8 UNK_101e476e0;
undefined8 UNK_101e476f0;
undefined8 UNK_101e47700;
undefined8 UNK_101e47710;
undefined DAT_101e47740;
undefined4 DAT_101e47800;
undefined DAT_101e477f0;
undefined DAT_101e47800;
undefined DAT_101e47810;
undefined DAT_101e47820;
undefined4 DAT_101e47830;
undefined4 DAT_101e47834;
undefined4 DAT_101e47838;
undefined4 DAT_101e4783c;
undefined DAT_101e47840;
undefined4 DAT_101e47850;
undefined4 DAT_101e47854;
undefined DAT_101e47858;
undefined DAT_101e47868;
undefined DAT_101e47878;
undefined DAT_101e47888;
undefined4 DAT_101e47898;
undefined4 DAT_101e4789c;
undefined4 DAT_101e478a0;
undefined DAT_101e47730;
undefined8 DAT_101e47740;
undefined4 DAT_101e47748;
undefined DAT_101e4774c;
undefined4 DAT_101e4775c;
undefined4 DAT_101e47760;
undefined8 DAT_101e47764;
undefined4 DAT_101e4776c;
undefined8 DAT_101e47770;
undefined8 DAT_101e47778;
undefined DAT_101e47780;
undefined DAT_101e47790;
undefined DAT_101e477a0;
undefined DAT_101e477b0;
undefined4 DAT_101e477c0;
undefined4 DAT_101e477c4;
undefined4 DAT_101e477c8;
undefined4 DAT_101e477cc;
undefined4 DAT_101e477d0;
undefined4 DAT_101e477d4;
undefined8 DAT_101e477d8;
undefined4 DAT_101e477e0;
undefined8 UNK_101e47738;
undefined8 UNK_101e47754;
undefined8 UNK_101e47788;
undefined8 UNK_101e47798;
undefined8 UNK_101e477a8;
undefined8 UNK_101e477b8;
undefined8 UNK_101e477f8;
undefined8 UNK_101e47808;
undefined8 UNK_101e47818;
undefined8 UNK_101e47828;
undefined8 UNK_101e47848;
undefined8 UNK_101e47860;
undefined8 UNK_101e47870;
undefined8 UNK_101e47880;
undefined8 UNK_101e47890;
float DAT_101e47950;
undefined4 DAT_101e47a10;
float DAT_101e478b0;
undefined4 DAT_101e47970;
undefined DAT_101e478c0;
undefined4 DAT_101e47980;
undefined4 DAT_101e47984;
undefined DAT_101e47970;
undefined DAT_101e47980;
undefined DAT_101e47990;
undefined DAT_101e479a0;
undefined4 DAT_101e479b0;
undefined4 DAT_101e479b4;
undefined4 DAT_101e479b8;
undefined4 DAT_101e479bc;
undefined DAT_101e479c0;
undefined4 DAT_101e479d0;
undefined4 DAT_101e479d4;
undefined DAT_101e479d8;
undefined DAT_101e479e8;
undefined DAT_101e479f8;
undefined DAT_101e47a10;
undefined DAT_101e47a08;
undefined4 DAT_101e47a18;
undefined4 DAT_101e47a1c;
undefined4 DAT_101e47a20;
undefined DAT_101e478b0;
undefined8 DAT_101e478c0;
undefined4 DAT_101e478c8;
undefined DAT_101e478cc;
undefined4 DAT_101e478dc;
undefined4 DAT_101e478e0;
undefined8 DAT_101e478e4;
undefined4 DAT_101e478ec;
undefined8 DAT_101e478f0;
undefined8 DAT_101e478f8;
undefined DAT_101e47900;
undefined DAT_101e47910;
undefined DAT_101e47920;
undefined DAT_101e47930;
undefined4 DAT_101e47940;
undefined4 DAT_101e47944;
undefined4 DAT_101e47948;
undefined4 DAT_101e4794c;
undefined4 DAT_101e47950;
undefined4 DAT_101e47954;
undefined8 DAT_101e47958;
undefined4 DAT_101e47960;
undefined8 UNK_101e478b8;
undefined8 UNK_101e478d4;
undefined8 UNK_101e47908;
undefined8 UNK_101e47918;
undefined8 UNK_101e47928;
undefined8 UNK_101e47938;
undefined8 UNK_101e47978;
undefined8 UNK_101e47988;
undefined8 UNK_101e47998;
undefined8 UNK_101e479a8;
undefined8 UNK_101e479c8;
undefined8 UNK_101e479e0;
undefined8 UNK_101e479f0;
undefined8 UNK_101e47a00;
undefined DAT_101e47af0;
undefined DAT_101e47b00;
undefined DAT_101e47b10;
undefined DAT_101e47b20;
undefined4 DAT_101e47b30;
undefined4 DAT_101e47b34;
undefined4 DAT_101e47b38;
undefined4 DAT_101e47b3c;
undefined DAT_101e47b40;
undefined4 DAT_101e47b50;
undefined4 DAT_101e47b54;
undefined DAT_101e47b58;
undefined DAT_101e47b68;
undefined DAT_101e47b78;
undefined DAT_101e47b88;
undefined4 DAT_101e47b98;
undefined4 DAT_101e47b9c;
undefined4 DAT_101e47ba0;
undefined DAT_101e47a30;
undefined8 DAT_101e47a40;
undefined4 DAT_101e47a48;
undefined DAT_101e47a4c;
undefined4 DAT_101e47a5c;
undefined4 DAT_101e47a60;
undefined8 DAT_101e47a64;
undefined4 DAT_101e47a6c;
undefined8 DAT_101e47a70;
undefined8 DAT_101e47a78;
undefined DAT_101e47a80;
undefined DAT_101e47a90;
undefined DAT_101e47aa0;
undefined DAT_101e47ab0;
undefined4 DAT_101e47ac0;
undefined4 DAT_101e47ac4;
undefined4 DAT_101e47ac8;
undefined4 DAT_101e47acc;
undefined4 DAT_101e47ad0;
undefined4 DAT_101e47ad4;
undefined8 DAT_101e47ad8;
undefined4 DAT_101e47ae0;
undefined8 UNK_101e47a38;
undefined8 UNK_101e47a54;
undefined8 UNK_101e47a88;
undefined8 UNK_101e47a98;
undefined8 UNK_101e47aa8;
undefined8 UNK_101e47ab8;
undefined8 UNK_101e47af8;
undefined8 UNK_101e47b08;
undefined8 UNK_101e47b18;
undefined8 UNK_101e47b28;
undefined8 UNK_101e47b48;
undefined8 UNK_101e47b60;
undefined8 UNK_101e47b70;
undefined8 UNK_101e47b80;
undefined8 UNK_101e47b90;
undefined DAT_101e47bc0;
undefined4 DAT_101e47c84;
undefined DAT_101e47c70;
undefined DAT_101e47c80;
undefined DAT_101e47c90;
undefined DAT_101e47ca0;
undefined4 DAT_101e47cb0;
undefined4 DAT_101e47cb4;
undefined4 DAT_101e47cb8;
undefined4 DAT_101e47cbc;
undefined DAT_101e47cc0;
undefined4 DAT_101e47cd0;
undefined4 DAT_101e47cd4;
undefined DAT_101e47cd8;
undefined DAT_101e47ce8;
undefined DAT_101e47cf8;
undefined DAT_101e47d08;
undefined4 DAT_101e47d18;
undefined4 DAT_101e47d1c;
undefined4 DAT_101e47d20;
undefined DAT_101e47bb0;
undefined8 DAT_101e47bc0;
undefined4 DAT_101e47bc8;
undefined DAT_101e47bcc;
undefined4 DAT_101e47bdc;
undefined4 DAT_101e47be0;
undefined8 DAT_101e47be4;
undefined4 DAT_101e47bec;
undefined8 DAT_101e47bf0;
undefined8 DAT_101e47bf8;
undefined DAT_101e47c00;
undefined DAT_101e47c10;
undefined DAT_101e47c20;
undefined DAT_101e47c30;
undefined4 DAT_101e47c40;
undefined4 DAT_101e47c44;
undefined4 DAT_101e47c48;
undefined4 DAT_101e47c4c;
undefined4 DAT_101e47c50;
undefined4 DAT_101e47c54;
undefined8 DAT_101e47c58;
undefined4 DAT_101e47c60;
undefined8 UNK_101e47bb8;
undefined8 UNK_101e47bd4;
undefined8 UNK_101e47c08;
undefined8 UNK_101e47c18;
undefined8 UNK_101e47c28;
undefined8 UNK_101e47c38;
undefined8 UNK_101e47c78;
undefined8 UNK_101e47c88;
undefined8 UNK_101e47c98;
undefined8 UNK_101e47ca8;
undefined8 UNK_101e47cc8;
undefined8 UNK_101e47ce0;
undefined8 UNK_101e47cf0;
undefined8 UNK_101e47d00;
undefined8 UNK_101e47d10;
undefined DAT_101e47d30;
char DAT_101d23a38;
char DAT_101e47e88;
long DAT_101e47e80;
long DAT_101d90978;
undefined8 DAT_101d90978;
undefined *PTR_s_Neutral_10149dc48;
byte DAT_101e47da0;
undefined4 DAT_101e47da8;
char *DAT_101e47db0;
undefined8 DAT_101e47db8;
undefined8 DAT_101e47dc0;
undefined8 DAT_101e47dc8;
undefined4 DAT_101e47dd0;
undefined4 DAT_101e47dd8;
undefined1 DAT_101e47ddc;
undefined8 DAT_101e47de0;
undefined1 DAT_101e47de8;
undefined1 DAT_101e47dea;
undefined4 DAT_101e47df4;
undefined4 DAT_101e47df8;
undefined4 DAT_101e47ded;
undefined4 DAT_101e47dfc;
undefined1 DAT_101e47e00;
undefined8 DAT_101e47e20;
long *DAT_101e47e20;
undefined DAT_101e47e18;
size_t DAT_101e47e10;
undefined8 DAT_101e47e08;
long DAT_101e47e20;
long DAT_101d23a68;
undefined8 DAT_101d23a68;
ulong DAT_1018589c0;
double DAT_1018589c0;
undefined8 *DAT_101e47e70;
ulong DAT_101e47e70;
undefined8 DAT_101e47e70;
long DAT_101e47e70;
string s_0123456789ABCDEF_101867290;
undefined1 DAT_101d23a38;
undefined1 DAT_101d23a39;
undefined DAT_101d23a40;
undefined4 DAT_1018589d0;
undefined8 DAT_101d23a50;
undefined4 *DAT_101d23a68;
undefined8 DAT_101d23a70;
undefined DAT_101d23a80;
undefined4 DAT_1018589d4;
int DAT_1018589d8;
pointer PTR_FUN_101495aa8;
undefined FUN_10034d3a0;
undefined8 *DAT_101e47e80;
undefined1 DAT_101e47e88;
undefined DAT_101e47ea0;
undefined8 DAT_101e47ea8;
undefined8 DAT_101e47e90;
undefined8 DAT_101e47e98;
undefined4 DAT_101e47e8c;
undefined1 DAT_101e47ea0;
uint DAT_101e47e8c;
byte DAT_101e47e88;
char DAT_101d23a39;
long DAT_101e47e90;
int *DAT_101e47e98;
undefined4 DAT_101d2aab8;
undefined4 DAT_101d2aac0;
undefined FUN_1003a70d8;
undefined *PTR_s_Buff_Withdraw_10185a458;
undefined *PTR_s_Buff_Emote_Dance_10185a570;
undefined *PTR_s_Buff_Emote_Taunt_10185a578;
undefined FUN_1003a70e0;
undefined FUN_1003a98dc;
undefined FUN_1003a999c;
undefined FUN_1003a9abc;
undefined FUN_1003a9b28;
undefined FUN_1003a9a08;
undefined *PTR_s_Buff_Debug_Camera_10185a580;
undefined FUN_1003a7428;
undefined *PTR_s_Buff_Invulnerable_10185a588;
undefined *PTR_s_Buff_Debug_CrowdControl_10185a598;
undefined FUN_1003a7490;
undefined8 DAT_10185a468;
undefined *PTR_s_Buff_Fear_10185a5b8;
undefined *PTR_s_Buff_Silence_10185a560;
undefined *PTR_s_Buff_ItemSilence_10185a5a8;
undefined *PTR_s_Buff_Slow_10185a5a0;
undefined *PTR_s_Buff_Blind_10185a5b0;
undefined FUN_1003a7150;
undefined *PTR_s_Buff_Stasis_10185a590;
undefined FUN_1003a7480;
undefined *PTR_s_Buff_Minion_Ace_10185a5c0;
undefined FUN_1003a749c;
undefined FUN_1003a758c;
undefined *PTR_s_Buff_Debug_FortifiedHealth_10185a5c8;
undefined FUN_10048fb04;
undefined8 DAT_10185a5d0;
undefined FUN_1003a7680;
undefined FUN_1003bfce4;
undefined *PTR_s_Buff_Nexus_5v5_Target_Laser_10185b148;
undefined *PTR_s_Buff_Nexus_5v5_Target_Warning_10185b150;
undefined *PTR_s_Buff_Nexus_VainNodeSupport_10185b158;
undefined FUN_1003bfd88;
undefined FUN_1003bfdf0;
undefined FUN_1003b7180;
undefined *PTR_s_Buff_Minion_TutorialSpeedBoost_10185ada0;
undefined FUN_1003b72fc;
undefined FUN_1003b2704;
undefined FUN_1003b26d0;
undefined *PTR_s_*JungleMinion_TreeEnt_RootField*_10185ac20;
undefined FUN_1003b2780;
undefined *PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185ac28;
undefined FUN_1003b2830;
undefined FUN_1003b283c;
undefined *PTR_s_Buff_JungleMinion_5v5_WeaponOrb_10185ac30;
undefined FUN_1003b2558;
undefined FUN_1003b2668;
undefined FUN_1003b24f0;
undefined FUN_1003b4d30;
undefined FUN_1003a3a5c;
undefined *PTR_s_build://Sounds/Kraken.assetbundl_10185acc8;
undefined FUN_1003a3acc;
undefined *PTR_s_build://Sounds/5v5/SFX/sfx_black_10185a470;
pointer PTR_s_build://Sounds/5v5/SFX/sfx_black_10185a488;
pointer PTR_s_build://Sounds/5v5/SFX/sfx_black_10185a498;
undefined *PTR_s_Buff_Kraken5v5_BlackclawUncaptur_10185a4a0;
undefined *PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
undefined *PTR_s_build://Sounds/5v5/SFX/sfx_ghost_10185a700;
undefined *PTR_s_Buff_Kraken5v5_UncapturedColor_10185a4b0;
undefined FUN_1003a5ce0;
undefined *PTR_s_Buff_Item_HealingFlask_10185aaf8;
undefined *PTR_s_*Item_SprintBoots*_10185ab00;
undefined *PTR_s_Buff_Item_SprintBootsSprint_10185ab08;
undefined *PTR_s_*Item_TravelBoots*_10185ab10;
undefined *PTR_s_Buff_Item_TravelBootsSprint_10185ab18;
undefined *PTR_s_*Item_JourneyBoots*_10185ab20;
undefined *PTR_s_Buff_Item_JourneyBootsSprint_10185ab28;
undefined *PTR_s_*Item_HalcyonChargers*_10185ab30;
undefined *PTR_s_Buff_Item_HalcyonChargersSprint_10185ab38;
undefined *PTR_s_*Item_MinionCandy*_10185ab40;
undefined *PTR_s_Buff_Item_MinionCandy_10185ab48;
undefined FUN_1003b01e8;
undefined FUN_1003b0260;
undefined *PTR_s_*Item_ReflexBlock*_10185ab50;
undefined *PTR_s_Buff_Item_ReflexBlock_10185ab58;
undefined *PTR_s_Buff_BlockDebuffs_10185a528;
undefined *PTR_s_Buff_Item_FountainOfRenewal_10185ab60;
undefined *PTR_s_*Item_FountainOfRenewal*_10185ba58;
undefined FUN_1003b06c4;
undefined *PTR_s_*Item_Crucible*_10185ab68;
undefined *PTR_s_*Item_WeaponInfusion*_10185ab70;
undefined *PTR_s_*Item_CrystalInfusion*_10185ab88;
undefined FUN_1003b0b48;
undefined *PTR_s_*Item_WarTreads*_10185aba8;
undefined *PTR_s_Buff_Item_WarTreads_Speed_10185abb0;
undefined *PTR_s_Buff_Stealth_10185aba0;
undefined *PTR_s_*Item_ScoutTrap*_10185ab90;
undefined *PTR_s_Buff_GloballyVisibleTrueSight_10185a878;
undefined *PTR_s_Buff_ShowGloballyVisible_10185a880;
undefined FUN_1003b06d8;
undefined FUN_1003b074c;
undefined *PTR_s_*Item_AtlasPauldron*_10185abb8;
undefined *PTR_s_Buff_Item_AtlasPauldronSlow_10185abc0;
undefined *PTR_s_Buff_Item_Shiversteel_10185abd0;
undefined FUN_1003b0c4c;
undefined FUN_1003b0658;
undefined *PTR_s_*VisionTotem*_10185abd8;
undefined FUN_1003b0c7c;
undefined *PTR_s_*Item_TeleportBoots*_10185bad0;
undefined *PTR_s_Buff_Item_TeleportBoots_EndPoint_10185abe0;
undefined FUN_1003b1464;
undefined *PTR_s_Buff_Item_TeleportBoots_Channeli_10185abe8;
undefined *PTR_s_Buff_Item_TeleportBoots_Structur_10185abf0;
undefined FUN_1003b1660;
undefined FUN_1003b1278;
undefined FUN_1003b16a8;
undefined FUN_1003c5148;
undefined *PTR_s_Buff_Catherine_MercilessPursuit__10185a540;
undefined *PTR_s_Buff_Catherine_MercilessPursuit__10185a548;
undefined FUN_1003a6edc;
undefined FUN_1003a6ec8;
undefined FUN_1003a6ef0;
undefined FUN_1003a6f04;
undefined *PTR_s_Buff_Catherine_Stormguard_10185a550;
undefined FUN_1003a6f2c;
undefined *PTR_s_Buff_Revealed_10185a448;
undefined FUN_1003a6f18;
undefined FUN_1003a6fa8;
undefined FUN_1003a6f40;
undefined FUN_1003a6fbc;
undefined *PTR_s_Buff_Catherine_Talent_Shockwave_10185a558;
undefined *PTR_s_Buff_GloballyVisible_10185a1f0;
undefined FUN_1003a6f74;
undefined FUN_1003bbad4;
undefined FUN_1003bbb84;
undefined FUN_1003bbc34;
undefined *PTR_s_Buff_Ringo_TwirlingSilver_10185af80;
undefined FUN_1003bc42c;
undefined FUN_1003a2660;
undefined *PTR_s_Buff_Adagio_VerseOfJudgement_For_10185a1e8;
undefined FUN_1003a264c;
undefined *PTR_s_Buff_Adagio_Talent_HealingVerse_10185a1f8;
undefined *PTR_s_Buff_Adagio_ArcaneFire_10185a200;
undefined FUN_1003a2550;
undefined8 DAT_10185a210;
undefined FUN_1003b4260;
undefined FUN_1003b42e4;
undefined *PTR_s_Buff_Koshka_TwirlEmpoweredAttack_10185ac98;
undefined *PTR_s_Buff_Koshka_Claws_10185aca0;
undefined FUN_1003b47d0;
undefined FUN_1003b4534;
undefined FUN_1003b474c;
undefined FUN_1003b4800;
undefined *PTR_s_Buff_Koshka_B_Barrier_10185aca8;
undefined *PTR_s_Buff_Koshka_Talent_TwirlyLife_10185acb0;
undefined FUN_1003b48a0;
undefined *PTR_s_Buff_Koshka_FortifiedHealthTwirl_10185acb8;
undefined FUN_1003b4814;
undefined FUN_1003b488c;
undefined FUN_1003b48d4;
undefined FUN_1003b48fc;
undefined8 DAT_10185acc0;
undefined FUN_1003b4910;
undefined FUN_1003b4938;
undefined FUN_1003b4a54;
undefined FUN_1003b491c;
undefined FUN_1003b4c3c;
undefined *PTR_s_Ability__Koshka__Fakeout_101858ff0;
undefined *PTR_s_Ability__Koshka__A_101858fd8;
undefined *PTR_s_Ability__Koshka__C_101858fe8;
undefined *PTR_s_Buff_Glaive_Crit_PFX_10185a718;
undefined FUN_1003aa4e8;
undefined *PTR_s_Buff_SelfProjectile_10185a530;
undefined *PTR_s_Buff_Glaive_Afterburn_KnockbackW_10185a720;
undefined FUN_1003aa718;
undefined FUN_1003aa74c;
undefined FUN_10049ae44;
undefined FUN_1003aa4fc;
undefined FUN_1003aa680;
undefined FUN_1003aa868;
undefined *PTR_s_Buff_Glaive_Talent_ViolentAfterb_10185a728;
undefined *PTR_s_Buff_Glaive_ViolentAfterburnTarg_10185a730;
undefined FUN_1003aa7dc;
undefined FUN_1003aa760;
undefined FUN_1003aa804;
undefined FUN_1003aa7f0;
undefined FUN_1003aa87c;
undefined *PTR_s_Buff_Glaive_Talent_TwistedPursui_10185a738;
undefined FUN_1003aab38;
undefined FUN_1003aab24;
undefined FUN_1003aab80;
undefined *PTR_s_Buff_Glaive_Talent_StunningBlood_10185a740;
undefined FUN_1003aab4c;
undefined FUN_1003aaba8;
undefined4 DAT_101d2c65c;
undefined FUN_1003aab94;
undefined FUN_1003aa9ec;
undefined FUN_1003aaa54;
undefined FUN_1003aaabc;
undefined *PTR_s_Buff_Glaive_Withdraw_10185a748;
undefined *PTR_s_Buff_PetalMinion_Frenzy_10185aec8;
undefined *PTR_s_Buff_Petal_Talent_Bouncer_10185aed0;
undefined *PTR_s_Buff_Petal_Talent_Bouncer_Energy_10185aed8;
undefined FUN_1003ba9c4;
undefined *PTR_s_Buff_Petal_B_Amp_10185aee0;
undefined FUN_1003ba95c;
undefined FUN_1003ba9d8;
undefined FUN_1003baa74;
undefined FUN_1003baa3c;
undefined FUN_1003baa88;
undefined FUN_1003babf0;
undefined FUN_1003ba22c;
undefined FUN_1003ba61c;
undefined *PTR_s_Buff_PetalSeed_LandMine_ReduceDa_10185aea8;
undefined *PTR_s_Buff_PetalSeed_LandMine_Expiry_10185aeb0;
undefined *PTR_s_Buff_Petal_Talent_KaboomSeeds_10185aea0;
undefined *PTR_s_Buff_DisplacementLock_10185a678;
undefined FUN_1003ba6d0;
undefined FUN_1003ba144;
undefined FUN_1003ba6f8;
undefined FUN_1003ba6e4;
undefined FUN_1003ba3b4;
undefined FUN_1003ba5b0;
undefined FUN_1003ba70c;
undefined FUN_1003baec8;
undefined *PTR_s_Buff_PetalMinion_Explosion_Slow_10185af00;
undefined FUN_1003baf40;
undefined FUN_1003bb590;
undefined FUN_1003bb57c;
undefined8 DAT_10185af08;
undefined FUN_1003bb5a4;
undefined FUN_1003bafc0;
undefined FUN_1003bb0a8;
undefined FUN_1003bb4c8;
undefined FUN_1003bb290;
undefined FUN_1003bb45c;
undefined *PTR_s_Buff_Petal_Perk_SpawnMunion_10185aef8;
undefined *PTR_s_Buff_SAW_RoadieRun_10185b060;
undefined *PTR_s_Buff_SAW_Talent_RoadRage_10185b058;
undefined *PTR_s_Buff_SAW_HeroicPerk_SpinUp_10185b040;
undefined FUN_1003bd4c0;
undefined FUN_1003bdc04;
undefined FUN_1003bdbf0;
undefined FUN_1003bdc18;
undefined *PTR_s_Buff_SAW_Strafe_10185b050;
undefined FUN_1003bdbdc;
undefined *PTR_s_*SAW*_10185b068;
undefined *PTR_s_Buff_SAW_SuppressingFire_SoundFx_10185b070;
undefined *PTR_s_Buff_SAW_SuppressingFire_BuildSp_10185b078;
undefined *PTR_s_Buff_SAW_SuppressingFire_Slow_10185b080;
undefined *PTR_s_Ability__SAW__A_1018590e0;
undefined FUN_1003bdc50;
undefined FUN_1003bdc9c;
undefined FUN_1003bde20;
undefined FUN_1003bdf50;
undefined FUN_1003bdfa8;
undefined FUN_1003be0b8;
undefined *PTR_s_Ability__SAW__B_1018590e8;
undefined *PTR_s_Buff_SAW_Withdraw_10185b088;
undefined FUN_1003b1a18;
undefined *PTR_s_Buff_Joule_Talent_RocketLeapfrog_10185ac00;
undefined FUN_1003b1a9c;
undefined FUN_1003b1a88;
undefined FUN_1003b1b18;
undefined FUN_1003b1aac;
undefined FUN_1003b1d00;
undefined *PTR_FUN_101499960;
undefined FUN_1003b1e5c;
undefined *PTR_s_Buff_Joule_Thunderstrike_10185ac08;
undefined FUN_1003b1d14;
undefined FUN_1003b2128;
undefined FUN_1003b1fe0;
undefined FUN_1003b22ac;
undefined FUN_1003b2440;
undefined *PTR_s_Buff_Joule_Withdraw_10185ac18;
undefined *PTR_s_Buff_Krul_DeadMansRush_Barrier_10185ace0;
undefined FUN_1003b509c;
undefined FUN_1003b537c;
undefined FUN_1003b5400;
undefined *PTR_s_Buff_Krul_Spectral_Smite_Debuf_10185acf0;
undefined FUN_1003b550c;
undefined FUN_1003b5554;
undefined FUN_1003b5414;
undefined *PTR_s_Buff_Krul_Withdraw_10185acf8;

void FUN_100187df0(long param_1)

{
  FUN_100187d2c(param_1 + -0x88);
  return;
}




void FUN_100187df8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 ****ppppuVar1;
  undefined8 ***local_58;
  uint local_50;
  byte local_41;
  
  if (*(long *)(param_1 + 0x40b0) != 0) {
    FUN_10001549c(&local_58,param_5);
    if (-1 < (char)local_41) {
      local_50 = (uint)local_41;
    }
    if (*(uint *)(param_1 + 0x40d0) < local_50) {
      std::string::erase((ulong)&local_58,(ulong)*(uint *)(param_1 + 0x40d0));
    }
    ppppuVar1 = (undefined8 ****)local_58;
    if (-1 < (char)local_41) {
      ppppuVar1 = &local_58;
    }
    (**(code **)(**(long **)(param_1 + 0x40b0) + 0x28))
              (*(long **)(param_1 + 0x40b0),param_3,param_4,ppppuVar1,param_6,param_7);
    *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & 0xfffffffb;
    *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xfffffffb;
    if ((char)local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  return;
}




void FUN_100187ee4(long param_1)

{
  FUN_100187df8(param_1 + -0x88);
  return;
}




void FUN_100187eec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  plVar2 = *(long **)(param_1 + 0x40b0);
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_3,param_4), (uVar3 & 1) == 0)) {
    uVar4 = FUN_1004e0150("MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE",0);
    thunk_FUN_1004e439c(auStack_30,uVar4);
    FUN_1004e313c(auStack_40);
    FUN_100188028(param_1,param_3,auStack_40);
    iVar1 = FUN_1004e3654(auStack_40,&DAT_101d91650);
    if (iVar1 != 0) {
      FUN_1004e3120(auStack_50,"[?]");
      FUN_1000153b4(auStack_40,auStack_50);
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
    }
    FUN_1004e3120(auStack_50,"[PLAYER_HANDLE]");
    FUN_1004e3bc4(auStack_30,0,auStack_50,auStack_40);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_100187144(param_1,auStack_30,&DAT_101d91650,"",0,1);
    *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & 0xfffffffb;
    *(uint *)(param_1 + 0x2974) = *(uint *)(param_1 + 0x2974) & 0xfffffffb;
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_100188028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  void *local_38 [2];
  char local_21;
  
  plVar1 = *(long **)(param_1 + 0x40b0);
  if (plVar1 != (long *)0x0) {
    FUN_10001549c(local_38);
    (**(code **)(*plVar1 + 0x10))(plVar1,local_38,param_3);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100188084(long param_1)

{
  FUN_100187eec(param_1 + -0x88);
  return;
}




void FUN_10018808c(void)

{
  return;
}




void FUN_100188090(void)

{
  return;
}




void FUN_100188094(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010018809c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))();
  return;
}




void FUN_1001880a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001880a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x88) + 0x148))();
  return;
}




void FUN_1001880ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 ****ppppuVar1;
  undefined8 ***local_58;
  uint local_50;
  byte local_41;
  
  if (*(long *)(param_1 + 0x40b0) != 0) {
    FUN_10001549c(&local_58,param_5);
    if (-1 < (char)local_41) {
      local_50 = (uint)local_41;
    }
    if (*(uint *)(param_1 + 0x40d0) < local_50) {
      std::string::erase((ulong)&local_58,(ulong)*(uint *)(param_1 + 0x40d0));
    }
    ppppuVar1 = (undefined8 ****)local_58;
    if (-1 < (char)local_41) {
      ppppuVar1 = &local_58;
    }
    (**(code **)(**(long **)(param_1 + 0x40b0) + 0x18))
              (*(long **)(param_1 + 0x40b0),param_3,param_4,ppppuVar1,param_6,param_7);
    if ((char)local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  return;
}




void FUN_100188180(long param_1)

{
  FUN_1001880ac(param_1 + -0x88);
  return;
}




void FUN_100188188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  plVar1 = *(long **)(param_1 + 0x40b0);
  if ((plVar1 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,param_3,param_4), (uVar2 & 1) == 0)) {
    uVar3 = FUN_1004e0150("MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE",0);
    thunk_FUN_1004e439c(auStack_30,uVar3);
    FUN_1004e313c(auStack_40);
    FUN_100188028(param_1,param_3,auStack_40);
    FUN_1004e3120(auStack_50,"[PLAYER_HANDLE]");
    FUN_1004e3bc4(auStack_30,0,auStack_50,auStack_40);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_100187144(param_1,auStack_30,&DAT_101d91650,"",0,1);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_100188270(long param_1)

{
  FUN_100188188(param_1 + -0x88);
  return;
}




void FUN_100188278(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long *plVar4;
  undefined **ppuVar5;
  bool bVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_6c;
  undefined1 *local_68;
  
  pfVar3 = (float *)(param_1 + 0x40a8);
  iVar7 = FUN_100126c88();
  lVar1 = param_1 + 0x808;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  }
  FUN_1001b060c(lVar1,*ppuVar5,&DAT_10115a168);
  lVar2 = param_1 + 0xc08;
  FUN_100181c18(0x41400000,*pfVar3,*pfVar3,lVar2);
  fVar8 = *(float *)(param_1 + 0xc48);
  if ((fVar8 != *pfVar3 * 0.5) || (fVar8 = *(float *)(param_1 + 0xc4c), fVar8 != 0.0)) {
    *(float *)(param_1 + 0xc48) = *pfVar3 * 0.5;
    *(undefined4 *)(param_1 + 0xc4c) = 0;
    FUN_1000200a0(lVar2);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xc08) + 0x28))(lVar2,&local_68);
  local_6c = 0;
  FUN_10016aeec(0,0,0,&local_6c);
  fVar9 = *(float *)(param_1 + 0x40ac);
  FUN_1001b0130(lVar1);
  fVar8 = (fVar9 + -20.0) - (fVar8 + (float)local_6c);
  fVar9 = *(float *)(param_1 + 0x848);
  if ((fVar9 != 0.0) || (fVar9 = *(float *)(param_1 + 0x84c), fVar9 != fVar8)) {
    *(undefined4 *)(param_1 + 0x848) = 0;
    *(float *)(param_1 + 0x84c) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_68 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x808) + 0x28))(lVar1,&local_68);
  fVar8 = *pfVar3;
  fVar10 = *(float *)(param_1 + 0x84c);
  FUN_1001b0130(lVar1);
  FUN_10064e47c(fVar8,fVar10 + -30.0 + fVar9 * -0.5,param_1 + 0x130);
  fVar8 = *(float *)(param_1 + 0xec);
  bVar6 = false;
  if ((fVar8 == 0.0) && (bVar6 = false, !NAN(*(float *)(param_1 + 0xe8)))) {
    bVar6 = *(float *)(param_1 + 0xe8) == 0.0;
  }
  if (!bVar6) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    FUN_1000200a0(param_1 + 0xa8);
    fVar8 = *(float *)(param_1 + 0xec);
  }
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x10;
  if ((*(float *)(param_1 + 0x2200) != 0.0) || (*(float *)(param_1 + 0x2204) != fVar8 + 60.0)) {
    *(undefined4 *)(param_1 + 0x2200) = 0;
    *(float *)(param_1 + 0x2204) = fVar8 + 60.0;
    FUN_1000200a0(param_1 + 0x21c0);
  }
  fVar8 = *pfVar3 * 0.9;
  if (*pfVar3 * 0.9 <= 50.0) {
    fVar8 = 50.0;
  }
  lVar1 = param_1 + 0x2248;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(lVar1,*ppuVar5,&DAT_10115a168);
  fVar9 = (float)FUN_10064e3cc(param_1 + 0x130);
  fVar10 = *(float *)(param_1 + 0x2288);
  if ((fVar10 != fVar9 * 0.5) || (fVar10 = *(float *)(param_1 + 0x228c), fVar10 != 0.0)) {
    *(float *)(param_1 + 0x2288) = fVar9 * 0.5;
    *(undefined4 *)(param_1 + 0x228c) = 0;
    FUN_1000200a0(lVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2248) + 0x28))(lVar1,&local_68);
  FUN_100651708(fVar8,lVar1,1);
  FUN_100651700(lVar1,3);
  lVar2 = param_1 + 0x2378;
  fVar11 = *(float *)(param_1 + 0x2288);
  fVar9 = (float)FUN_1006425d0(lVar2,0,0,1,1);
  fVar11 = fVar11 - fVar9 * 0.5;
  fVar9 = *(float *)(param_1 + 0x228c);
  FUN_100651184(lVar1);
  fVar9 = fVar9 + 30.0 + fVar10 * 0.5;
  if ((*(float *)(param_1 + 0x23b8) != fVar11) || (*(float *)(param_1 + 0x23bc) != fVar9)) {
    *(float *)(param_1 + 0x23b8) = fVar11;
    *(float *)(param_1 + 0x23bc) = fVar9;
    FUN_1000200a0(lVar2);
  }
  local_68 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x2378) + 0x28))(lVar2,&local_68);
  if ((*(float *)(param_1 + 0x2930) != *(float *)(param_1 + 0x2200)) ||
     (*(float *)(param_1 + 0x2934) != *(float *)(param_1 + 0x2204))) {
    *(float *)(param_1 + 0x2930) = *(float *)(param_1 + 0x2200);
    *(float *)(param_1 + 0x2934) = *(float *)(param_1 + 0x2204);
    FUN_1000200a0(param_1 + 0x28f0);
  }
  lVar1 = param_1 + 0x2978;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar7 == 0) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(lVar1,*ppuVar5,&DAT_10115a168);
  fVar9 = *(float *)(param_1 + 0x228c);
  if ((*(float *)(param_1 + 0x29b8) != *(float *)(param_1 + 0x2288)) ||
     (*(float *)(param_1 + 0x29bc) != fVar9)) {
    *(float *)(param_1 + 0x29b8) = *(float *)(param_1 + 0x2288);
    *(float *)(param_1 + 0x29bc) = fVar9;
    FUN_1000200a0(lVar1);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2978) + 0x28))(lVar1,&local_68);
  FUN_100651708(fVar8,lVar1,1);
  FUN_100651700(lVar1,3);
  plVar4 = (long *)(param_1 + 0x2aa8);
  fVar10 = *(float *)(param_1 + 0x29b8);
  fVar11 = *(float *)(param_1 + 0x29bc);
  FUN_100651184(lVar1);
  fVar8 = fVar9;
  FUN_10064e3cc(plVar4);
  fVar8 = fVar11 + 30.0 + (fVar8 + fVar9) * 0.5;
  if ((*(float *)(param_1 + 0x2ae8) != fVar10) || (*(float *)(param_1 + 0x2aec) != fVar8)) {
    *(float *)(param_1 + 0x2ae8) = fVar10;
    *(float *)(param_1 + 0x2aec) = fVar8;
    FUN_1000200a0(plVar4);
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_68);
  return;
}




void FUN_1001886f8(void)

{
  return;
}




void FUN_1001886fc(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_180 [8];
  void *local_178;
  undefined1 auStack_170 [8];
  void *local_168;
  undefined8 ***local_160;
  undefined8 uStack_158;
  long local_150;
  undefined1 local_148 [8];
  void *local_140;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*(long **)(param_1 + 0x4060) == (long *)0x0) ||
     (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x38))(), iVar5 == 0))
  goto LAB_100188a54;
  plVar13 = (long *)(param_1 + 0x4078);
  bVar4 = *(byte *)(param_1 + 0x408f);
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x4080);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar14 = (long *)*plVar13;
    if (-1 < (char)bVar4) {
      plVar14 = plVar13;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(plVar14,pbVar12,sVar1), iVar5 == 0)) goto LAB_100188a54;
    }
    else {
      if (sVar1 == 0) goto LAB_100188a54;
      if ((uint)*pbVar12 == ((uint)(long *)*plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x4079);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_100188a54;
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar12);
      }
    }
  }
  local_160 = (undefined8 ****)0x0;
  uStack_158 = 0;
  local_150 = 0;
  uVar7 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0xb78) & 1) * 0x130 + 0x9e8);
  thunk_FUN_1004e439c(auStack_170,uVar7);
  iVar5 = FUN_1004e3634(auStack_170);
  if (iVar5 != 0) {
    iVar5 = FUN_1004e3648(auStack_170,0);
    if (iVar5 == 0x2f) {
      FUN_1004e3120(local_148,"/");
      FUN_1004e3120(auStack_180,"\\");
      FUN_1004e3bc4(auStack_170,0,local_148,auStack_180);
      if (local_178 != (void *)0x0) {
        operator_delete__(local_178);
      }
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
      }
    }
    uVar6 = FUN_1004e3634(auStack_170);
    if (*(uint *)(param_1 + 0x40d0) < uVar6) {
      FUN_1004e4154(local_148,auStack_170,0);
      FUN_1000153b4(auStack_170,local_148);
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
      }
    }
    uVar10 = FUN_1001861f4(auStack_170);
    if ((uVar10 & 1) == 0) {
      FUN_1004e357c(auStack_170,&local_160);
      plVar14 = plVar13;
      if (*(char *)(param_1 + 0x408f) < '\0') {
        plVar14 = (long *)*plVar13;
      }
      ppppuVar3 = (undefined8 ****)local_160;
      if (-1 < local_150) {
        ppppuVar3 = &local_160;
      }
      (**(code **)(**(long **)(param_1 + 0x4060) + 0x70))
                (*(long **)(param_1 + 0x4060),plVar14,ppppuVar3);
      plVar14 = *(long **)(param_1 + 0x40b0);
      if (plVar14 != (long *)0x0) {
        uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
        if (*(char *)(param_1 + 0x408f) < '\0') {
          plVar13 = (long *)*plVar13;
        }
        ppppuVar3 = (undefined8 ****)local_160;
        if (-1 < local_150) {
          ppppuVar3 = &local_160;
        }
        uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,uVar7,plVar13,ppppuVar3);
        if ((uVar10 & 1) != 0) goto LAB_100188a38;
      }
      local_148[0] = 0;
      if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
         (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))(), iVar5 == 2)) {
        lVar8 = FUN_1004f1a74(0);
        FUN_1004d3350((double)lVar8,local_148,0x100);
      }
      uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar9 = auStack_170;
    }
    else {
      if (((DAT_101e3d5c0 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101e3d5c0), iVar5 != 0))
      {
        FUN_1004e3340(&DAT_101e3d5b0,&DAT_101157f90);
        ___cxa_atexit(FUN_100046198,&DAT_101e3d5b0,0x100000000);
        ___cxa_guard_release(&DAT_101e3d5c0);
      }
      local_148[0] = 0;
      if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
         (iVar5 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))(), iVar5 == 2)) {
        lVar8 = FUN_1004f1a74(0);
        FUN_1004d3350((double)lVar8,local_148,0x100);
      }
      uVar7 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
      puVar9 = &DAT_101e3d5b0;
    }
    FUN_100187144(param_1,uVar7,puVar9,local_148,1,0);
  }
LAB_100188a38:
  if (local_168 != (void *)0x0) {
    operator_delete__(local_168);
  }
  if (local_150 < 0) {
    operator_delete(local_160);
  }
LAB_100188a54:
  uVar7 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_1001b0198(param_1 + 0x808,uVar7,0);
  *(undefined1 *)(param_1 + 0x40da) = 0;
  FUN_100530ad0(0,0,param_1 + 0x2d0);
  FUN_10018762c(param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100188b18(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  thunk_FUN_1004e439c(auStack_40,param_1 + 0xbc8);
  iVar1 = FUN_1004e36c0(auStack_40,&DAT_101d91650);
  if (iVar1 == 0) {
    uVar3 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
    FUN_1001b0198(param_1 + 0x808,uVar3,0);
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_1004e3634(auStack_40);
    if (*(uint *)(param_1 + 0x40d0) < uVar2) {
      FUN_1004e4154(auStack_50,auStack_40,0);
      FUN_1000153b4(auStack_40,auStack_50);
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
    }
    FUN_1001b0198(param_1 + 0x808,param_1 + 0xbc8,0);
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x40da) = uVar4;
  FUN_100530ad0(0,0,param_1 + 0x2d0);
  FUN_10018762c(param_1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100188c14(undefined8 param_1)

{
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_28 = FUN_100644a94("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_101d23788 != 0) {
    local_50 = thunk_FUN_100188c7c;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    uStack_48 = param_1;
    FUN_10001554c(DAT_101d23788 + 8,&local_50);
  }
  return;
}




void thunk_FUN_100188c7c(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  uVar1 = FUN_100644a94("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_101d23788 != 0) {
    FUN_10018974c(DAT_101d23788,uVar1,thunk_FUN_100188c7c,param_1);
  }
  FUN_100641464(auStack_34,auStack_38);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x174);
  fVar2 = (float)FUN_1001e7db0(1);
  FUN_100530ad0(0,(54.0 - (fVar3 + fVar4)) + fVar2,param_1 + 0x2d0);
  FUN_10018762c(param_1);
  return;
}




void FUN_100188c7c(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  uVar1 = FUN_100644a94("UI::EVENT_KEYBOARD_OPENED");
  if (DAT_101d23788 != 0) {
    FUN_10018974c(DAT_101d23788,uVar1,thunk_FUN_100188c7c,param_1);
  }
  FUN_100641464(auStack_34,auStack_38);
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x174);
  fVar2 = (float)FUN_1001e7db0(1);
  FUN_100530ad0(0,(54.0 - (fVar3 + fVar4)) + fVar2,param_1 + 0x2d0);
  FUN_10018762c(param_1);
  return;
}




undefined8 FUN_100188d1c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))();
  if (iVar1 == 2) {
    uVar2 = FUN_1004ef16c(param_3);
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    iVar1 = FUN_1004e3624(param_2);
    if (iVar1 != 0) {
      param_2 = FUN_1004f0338();
      param_2 = param_2 + 0xd0;
    }
    FUN_100188e18(param_1,param_2,param_3);
    uVar2 = 1;
  }
  FUN_10014e384(param_4);
  return uVar2;
}




void FUN_100188db8(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  
  if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x30))(), iVar2 != 0)) {
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x000100188e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4060) + 0x50))(*(long **)(param_1 + 0x4060),plVar1);
    return;
  }
  return;
}




void FUN_100188e18(long param_1,undefined8 param_2,string *param_3)

{
  undefined8 *****pppppuVar1;
  undefined1 **ppuVar2;
  uint uVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  void *pvVar7;
  size_t sVar8;
  ulong uVar9;
  undefined1 *local_a0;
  size_t local_98;
  undefined8 local_90;
  void *local_88 [2];
  char local_71;
  undefined8 ****local_70;
  ulong uStack_68;
  ulong local_60;
  char acStack_51 [8];
  undefined1 local_49;
  long local_48;
  
  ppuVar2 = &local_a0;
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  local_70 = (undefined8 *****)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_1004e357c(param_2,&local_70);
  uVar9 = uStack_68;
  pppppuVar1 = (undefined8 *****)local_70;
  if (-1 < (long)local_60) {
    uVar9 = local_60 >> 0x38;
    pppppuVar1 = &local_70;
  }
  uVar3 = FUN_100015208(pppppuVar1,uVar9 & 0xffffffff,0x12345678);
  lVar5 = 0;
  pcVar6 = acStack_51;
  do {
    *pcVar6 = s_C0123456789ABCDEF_10185490f
              [((ulong)(uVar3 >> (ulong)((uint)lVar5 & 0x1f)) & 0xf) + 1];
    lVar5 = lVar5 + 4;
    pcVar6 = pcVar6 + 1;
  } while (lVar5 != 0x20);
  local_49 = 0;
  local_a0 = (undefined1 *)0x0;
  local_98 = 0;
  local_90 = 0;
  if ((char)*(byte *)(param_1 + 0x40a7) < '\0') {
    sVar8 = *(size_t *)(param_1 + 0x4098);
    sVar4 = _strlen(acStack_51);
    pvVar7 = *(void **)(param_1 + 0x4090);
  }
  else {
    pvVar7 = (void *)(param_1 + 0x4090);
    sVar8 = (size_t)*(byte *)(param_1 + 0x40a7);
    sVar4 = _strlen(acStack_51);
  }
  uVar9 = sVar8 + sVar4;
  if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1001896c0();
  }
  if (uVar9 < 0x17) {
    local_90 = CONCAT17((char)sVar8,(undefined7)local_90);
  }
  else {
    uVar9 = uVar9 + 0x10 & 0xfffffffffffffff0;
    local_a0 = operator_new(uVar9);
    local_90 = uVar9 | 0x8000000000000000;
    ppuVar2 = (undefined1 **)local_a0;
    local_98 = sVar8;
  }
  if (sVar8 != 0) {
    _memcpy(ppuVar2,pvVar7,sVar8);
  }
  *(undefined1 *)((long)ppuVar2 + sVar8) = 0;
  std::string::append((char *)&local_a0,(ulong)acStack_51);
  std::string::string((string *)local_88,(string *)&local_a0);
  std::string::operator=(param_3,(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100188fec(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  int iVar2;
  ulong uVar3;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (((*(long **)(param_1 + 0x4060) == (long *)0x0) ||
      (iVar2 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x40))(), iVar2 != 2)) &&
     (uVar3 = FUN_1004e3624(param_2), (uVar3 & 1) == 0)) {
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_100188e18(param_1,param_2,&local_38);
    if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
       (iVar2 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x30))(), iVar2 != 0)) {
      pppuVar1 = (undefined8 ***)local_38;
      if (-1 < local_28) {
        pppuVar1 = &local_38;
      }
      (**(code **)(**(long **)(param_1 + 0x4060) + 0x58))(*(long **)(param_1 + 0x4060),pppuVar1);
    }
    if (local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return;
}




long * FUN_1001890a0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_1001afbc0();
  *puVar4 = &PTR_FUN_10145fbe8;
  puVar4 = puVar4 + 0x80;
  thunk_FUN_100181304(puVar4,0);
  *(undefined1 *)(param_1 + 0x71) = 1;
  local_70 = (code *)0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_70);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  FUN_1001816d4(0,0x44750000,0x44750000,puVar4,0,&DAT_101d91650,&DAT_10115a168,&DAT_101dc1cb8,0);
  if ((*(float *)(param_1 + 0x88) != 490.0) || (*(float *)((long)param_1 + 0x444) != 0.0)) {
    param_1[0x88] = 0x43f50000;
    FUN_1000200a0(puVar4);
  }
  local_70 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x80] + 0x28))(puVar4,&local_70);
  plVar1 = param_1 + 0x22;
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x154) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x2a)))) {
    bVar3 = *(float *)(param_1 + 0x2a) == 0.0;
  }
  if (!bVar3) {
    param_1[0x2a] = 0;
    FUN_1000200a0(plVar1);
  }
  local_70 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x22] + 0x28))(plVar1,&local_70);
  plVar2 = param_1 + 0x48;
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x284) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x50)))) {
    bVar3 = *(float *)(param_1 + 0x50) == 0.0;
  }
  if (!bVar3) {
    param_1[0x50] = 0;
    FUN_1000200a0(plVar2);
  }
  local_70 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x48] + 0x28))(plVar2,&local_70);
  FUN_1001b060c(param_1,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  FUN_1001b0764(param_1,3);
  FUN_1001afc3c(param_1,1);
  *(uint *)((long)param_1 + 0x194) = *(uint *)((long)param_1 + 0x194) & 0xffffffef;
  FUN_100644c24(plVar1);
  FUN_1006515d8(plVar1,0);
  *(uint *)((long)param_1 + 0x2c4) = *(uint *)((long)param_1 + 0x2c4) & 0xffffffef;
  FUN_100644c24(plVar2);
  FUN_1006515d8(plVar2,0);
  local_48 = DAT_101d91884;
  local_70 = thunk_FUN_1001afe48;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x81,&local_70);
  return param_1;
}




long * FUN_1001892e8(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,int param_7,int param_8)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined4 local_80;
  float fStack_7c;
  void *local_78;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_FUN_10145fce8;
  thunk_FUN_100652c08(puVar7 + 0x17);
  plVar1 = param_3 + 0x35;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_3 + 0x5b;
  thunk_FUN_100650e64(plVar2);
  (**(code **)(*param_3 + 0x78))(param_3,puVar7 + 0x17,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  iVar5 = FUN_100126c88();
  uVar8 = FUN_1004e36c0(param_4,&DAT_101d91650);
  if (((uVar8 & 1) != 0) || (param_8 != 0)) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
    if (iVar5 == 0) {
      ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
    }
    puVar4 = &DAT_101e3d432;
    if (param_8 == 0) {
      puVar4 = &DAT_101e3d42e;
    }
    FUN_100651594(plVar1,*ppuVar3,puVar4);
    if (param_7 != 0) {
      param_4 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
    }
    thunk_FUN_1004e439c(&local_80,param_4);
    iVar6 = FUN_1004e36c0(param_6,&DAT_101d91650);
    if (iVar6 != 0) {
      FUN_1004e3120(auStack_90,"   ([TIMESTAMP_VAL])");
      FUN_1004e3120(auStack_a0,"[TIMESTAMP_VAL]");
      FUN_1004e3bc4(auStack_90,0,auStack_a0,param_6);
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
      FUN_1004e372c(&local_80,auStack_90);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
    }
    FUN_1006513c0(plVar1,&local_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
  }
  FUN_1006515d8(plVar2,0);
  fVar10 = *(float *)(param_3 + 0x3d);
  FUN_100651184(plVar1);
  fVar9 = *(float *)(param_3 + 99);
  if ((fVar9 != fVar10) || (fVar9 = *(float *)((long)param_3 + 0x31c), fVar9 != param_2 + 4.0)) {
    *(float *)(param_3 + 99) = fVar10;
    *(float *)((long)param_3 + 0x31c) = param_2 + 4.0;
    FUN_1000200a0(plVar2);
  }
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar5 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  puVar4 = &DAT_101e3d43a;
  if (param_7 == 0) {
    puVar4 = &DAT_10115a168;
  }
  FUN_100651594(plVar2,*ppuVar3,puVar4);
  FUN_1006513c0(plVar2,param_5);
  local_80 = (**(code **)(*param_3 + 0x58))(param_3,0,0,1,1);
  fStack_7c = fVar9;
  FUN_10064e48c(param_3,&local_80);
  return param_3;
}




void FUN_10018958c(void)

{
  return;
}




void FUN_100189590(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145fbe8;
  FUN_10003bd40(param_1 + 0x80);
  pvVar1 = (void *)FUN_100186088(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001895c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145fce8;
  thunk_FUN_100651068(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100189630(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145fce8;
  thunk_FUN_100651068(param_1 + 0x5b);
  thunk_FUN_100651068(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10018969c(void)

{
  return;
}




void FUN_1001896a0(void)

{
  return;
}




void FUN_1001896a4(void)

{
  return;
}




void FUN_1001896a8(void)

{
  return;
}




void FUN_1001896ac(void)

{
  return;
}




void FUN_1001896b0(void)

{
  return;
}




void FUN_1001896b4(void)

{
  return;
}




void FUN_1001896b8(void)

{
  return;
}




void FUN_1001896bc(void)

{
  return;
}




void FUN_1001896c0(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void thunk_FUN_100186ba4(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x40db) != '\0') {
    FUN_100186c14(param_1,&DAT_101d91650);
  }
  if ((*(long **)(param_1 + 0x4060) != (long *)0x0) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x4060) + 0x30))(), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100186c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4060) + 0x68))(0x3a83126f);
    return;
  }
  return;
}




void FUN_1001896d0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10018974c(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001897a0(void)

{
  DAT_101e3d428 = 0xff;
  DAT_101e3d42a = 0xffff;
  DAT_101e3d42c = 0xffff;
  DAT_101e3d42e = 0xffbc9c44;
  DAT_101e3d432 = 0xff1166f2;
  DAT_101e3d436 = 0xffe0e0e0;
  DAT_101e3d43a = 0xffa0a0a0;
  DAT_101e3d43e = 0xff8c8c8c;
  DAT_101e3d442 = 0xff322213;
  DAT_101e3d446 = 0xff091911;
  DAT_101e3d44a = 0xff170c19;
  DAT_101e3d44e = 0xff241a14;
  DAT_101e3d452 = 0xff14171c;
  DAT_101e3d456 = 0xff221911;
  DAT_101e3d45a = 0xff1a1416;
  DAT_101e3d45e = 0xff121414;
  DAT_101e3d462 = 0xff1a1809;
  DAT_101e3d466 = 0xff141414;
  DAT_101e3d46a = 0xff141414;
  DAT_101e3d46e = 0xff2929c0;
  DAT_101e3d472 = 0xff283082;
  DAT_101e3d476 = 0xff5262cc;
  DAT_101e3d47a = 0xff283082;
  DAT_101e3d47e = 0xff5262cc;
  DAT_101e3d482 = 0xff745c42;
  DAT_101e3d486 = 0xff184155;
  DAT_101e3d48a = 0xff92665e;
  DAT_101e3d48e = 0xffbc9c44;
  DAT_101e3d492 = 0xffbbae56;
  DAT_101e3d496 = 0xff8b7b01;
  DAT_101e3d49a = 0xff90b3ef;
  DAT_101e3d49e = 0xff728ebe;
  DAT_101e3d4a2 = 0xff19459d;
  DAT_101e3d4a6 = 0xff9d877b;
  DAT_101e3d4aa = 0xffcbb1a3;
  DAT_101e3d4ae = 0xff3f6fb5;
  DAT_101e3d4b2 = 0xffc5c5c5;
  DAT_101e3d4b6 = 0xff4fc1f1;
  DAT_101e3d4ba = 0xff606060;
  DAT_101e3d4be = 0xffc5ff7b;
  DAT_101e3d4c2 = 0xff5271eb;
  DAT_101e3d4c6 = 0xfffae076;
  DAT_101e3d4ca = 0xff3ac8f6;
  DAT_101e3d4ce = 0xffaaaaaa;
  DAT_101e3d4d2 = 0xffe19400;
  DAT_101e3d4d6 = 0xffe19400;
  DAT_101e3d4da = 0xffe550b2;
  DAT_101e3d4de = 0xfff22ae8;
  DAT_101e3d4e2 = 0xff005ae1;
  DAT_101e3d4e6 = 0xff1addfa;
  DAT_101e3d4ea = 0xff2424b3;
  DAT_101e3d4ee = 0xff2424b3;
  DAT_101e3d4f2 = 0xff646464;
  DAT_101e3d4f6 = 0xff92665e;
  DAT_101e3d4fa = 0xff646037;
  DAT_101e3d500 = 0xffffffff;
  DAT_101e3d504 = 0xff1111a1;
  DAT_101e3d508 = 0xff321ee1;
  DAT_101e3d50c = 0xffc8c8c8;
  DAT_101e3d510 = 0xff321ee1;
  DAT_101e3d514 = 0xff7fe801;
  DAT_101e3d518 = 0xffffffff;
  DAT_101e3d51c = 0xff6259b3;
  DAT_101e3d520 = 0xff506e73;
  DAT_101e3d524 = 0xff9dbf86;
  DAT_101e3d528 = 0xffa35244;
  DAT_101e3d52c = 0xffca828e;
  DAT_101e3d530 = 0xffa6a6a6;
  DAT_101e3d534 = 0xffa6a6a6;
  DAT_101e3d538 = 0xffffffff;
  DAT_101e3d53c = 0xff88ea2f;
  DAT_101e3d540 = 0xff8c8c8c;
  DAT_101e3d544 = 0xffffb400;
  DAT_101e3d548 = 0xffff00ff;
  DAT_101e3d54c = 0xff00aded;
  DAT_101e3d550 = 0xff33d3ff;
  DAT_101e3d554 = 0xff7fe801;
  DAT_101e3d558 = 0xff282828;
  DAT_101e3d55c = 0xfff0f0f0;
  DAT_101e3d560 = 0xffa4781e;
  DAT_101e3d564 = 0xffa6654b;
  DAT_101e3d568 = 0xff93435b;
  DAT_101e3d56c = 0xff387f9c;
  DAT_101e3d570 = 0xffa3781e;
  DAT_101e3d574 = 0xffffd18a;
  DAT_101e3d578 = 0xffff61f7;
  DAT_101e3d57c = 0xff5de1f2;
  DAT_101e3d580 = 0xff80eaff;
  DAT_101e3d584 = 0xff32e00e;
  DAT_101e3d588 = 0xff5a3c10;
  DAT_101e3d58c = 0xff330b03;
  DAT_101e3d590 = 0xff33031d;
  DAT_101e3d594 = 0xff032433;
  DAT_101e3d598 = 0xff9e8e8d;
  DAT_101e3d5a0 = 0x4326000041900000;
  DAT_101e3d5a8 = 0x4326000041c00000;
  DAT_101d2354c = DAT_101854a7c * 0.5;
  DAT_101d23550 = (DAT_101854908 - _DAT_10185490c) * 0.5;
  return;
}




long FUN_100189eb4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001cc2f0();
  *puVar1 = &PTR_FUN_10145fe90;
  puVar1[0x17] = &PTR_FUN_101460050;
  thunk_FUN_100652c08(puVar1 + 0x228);
  *(byte *)(param_1 + 0xa70) = *(byte *)(param_1 + 0xa70) | 0x40;
  return param_1;
}




void FUN_100189f04(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  float local_78;
  undefined1 auStack_74 [4];
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  plVar1 = param_1 + 0xba;
  FUN_100651700(param_1 + 0xf3,0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x150,1);
  plVar2 = param_1 + 0x20;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  FUN_100642bd8(plVar2,param_1 + 0x167,1);
  FUN_1006575f4(param_1 + 0x1e,PTR_s_build___MenuPartsCommon_tga_101854970);
  uVar3 = FUN_1010b0260("dialog_background");
  *(undefined4 *)(param_1 + 0x227) = uVar3;
  FUN_10064142c(auStack_74,&local_78);
  FUN_100536f90(plVar1,0);
  FUN_100651038(param_1 + 0xf3,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  if ((*(float *)(param_1 + 0xc2) != 16.0) ||
     (*(float *)((long)param_1 + 0x614) != local_78 + -30.0)) {
    *(undefined4 *)(param_1 + 0xc2) = 0x41800000;
    *(float *)((long)param_1 + 0x614) = local_78 + -30.0;
    FUN_1000200a0(plVar1);
  }
  local_70 = (code *)0x3f80000000000000;
  (**(code **)(param_1[0xba] + 0x28))(plVar1,&local_70);
  FUN_1006423ec(param_1 + 0x167,1);
  *(uint *)((long)param_1 + 0xb04) = *(uint *)((long)param_1 + 0xb04) | 0x10;
  local_48 = DAT_101dbd458;
  local_70 = thunk_FUN_10018a36c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x151,&local_70);
  local_48 = DAT_101dbd484;
  local_70 = thunk_FUN_10018a36c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x151,&local_70);
  local_48 = DAT_101dbd4c0;
  local_70 = FUN_10018a0f8;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0xbb,&local_70);
  return;
}




void thunk_FUN_10018a36c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  FUN_100536e94(param_1 + 0x5d0,0);
  FUN_100536b78(param_1);
  uVar1 = FUN_100651904(param_1 + 0x798);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_100655b6c(param_1 + 0x868);
  }
  else {
    puVar2 = &DAT_101d91650;
  }
  FUN_100536c08(param_1,puVar2);
  return;
}




void FUN_10018a0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10018a3c4(param_1,param_4);
  return;
}




void FUN_10018a100(long param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_10064142c(&uStack_24,&local_28);
  FUN_10064e47c(uStack_24,local_28,param_1 + 0xa80);
  return;
}




void FUN_10018a13c(long param_1)

{
  FUN_100536e94(param_1 + 0x5d0,1);
  FUN_1001ccb24(param_1);
  return;
}




void FUN_10018a168(long param_1)

{
  FUN_1001ccc40();
  FUN_100536e94(param_1 + 0x5d0,0);
  return;
}




void FUN_10018a190(void)

{
  return;
}




void FUN_10018a194(long param_1,undefined8 param_2)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  
  if (*(int *)(param_1 + 0x1138) != 0) {
    lVar2 = FUN_10003d5bc();
    local_58 = 0xffff;
    local_56 = 0xff;
    local_55 = (undefined1)(int)(*(float *)(lVar2 + 0x18) * 255.0);
    FUN_10064142c(&local_5c,&local_60);
    fVar4 = *(float *)(lVar2 + 0x10);
    fVar8 = (-(*(float *)(param_1 + 0x1130) * local_60) - (180.0 - local_60)) *
            *(float *)(lVar2 + 0x14);
    lVar2 = FUN_1006575b8(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x1138));
    lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 8);
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 4));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
    fVar7 = 1.0 / (float)*(int *)(lVar3 + 0x48);
    FUN_100043664(0,fVar8,fVar4 * local_5c,SUB42(fVar8 + 180.0,0),0,fVar7 * fVar5,
                  1.0 - fVar6 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar7 * (fVar1 + fVar5),
                  param_2,&local_58,0);
  }
  return;
}




void FUN_10018a2cc(long param_1)

{
  FUN_10018a194(param_1 + -0xb8);
  return;
}




float FUN_10018a2d4(long param_1)

{
  float local_28;
  undefined1 auStack_24 [4];
  
  FUN_10064142c(auStack_24,&local_28);
  return *(float *)(param_1 + 0x1130) * local_28;
}




float FUN_10018a310(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x180))();
  return fVar1 + 180.0;
}




float FUN_10018a338(void)

{
  undefined1 auStack_18 [4];
  float local_14;
  
  FUN_10064142c(&local_14,auStack_18);
  return local_14 + -32.0;
}




void FUN_10018a36c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  FUN_100536e94(param_1 + 0x5d0,0);
  FUN_100536b78(param_1);
  uVar1 = FUN_100651904(param_1 + 0x798);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)FUN_100655b6c(param_1 + 0x868);
  }
  else {
    puVar2 = &DAT_101d91650;
  }
  FUN_100536c08(param_1,puVar2);
  return;
}




void FUN_10018a3c4(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  float local_58;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [40];
  undefined8 local_28;
  
  uVar3 = FUN_100644b2c(param_2);
  *(undefined4 *)(param_1 + 0x1130) = uVar3;
  uVar4 = FUN_100644a94("UI::EVENT_KEYBOARD_OPENED");
  FUN_100644f6c(auStack_50,uVar4,param_1);
  FUN_100644c34(param_1,auStack_50,1);
  FUN_10064142c(auStack_54,&local_58);
  plVar1 = (long *)(param_1 + 0x5d0);
  fVar5 = (local_58 - local_58 * *(float *)(param_1 + 0x1130)) + -80.0;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x610) == 16.0) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x614)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_1 + 0x614) == fVar5;
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x610) = 0x41800000;
    *(float *)(param_1 + 0x614) = fVar5;
    FUN_1000200a0(plVar1);
  }
  local_28 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
  return;
}




void FUN_10018a494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145fe90;
  param_1[0x17] = &PTR_FUN_101460050;
  param_1[0x228] = &PTR_FUN_1014a7108;
  param_1[0x23f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x242);
  FUN_10064e2bc(param_1 + 0x228);
  FUN_1001cc504(param_1);
  return;
}




void FUN_10018a4fc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145fe90;
  param_1[0x17] = &PTR_FUN_101460050;
  param_1[0x228] = &PTR_FUN_1014a7108;
  param_1[0x23f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x242);
  FUN_10064e2bc(param_1 + 0x228);
  pvVar1 = (void *)FUN_1001cc504(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10018a568(void)

{
  return;
}




void FUN_10018a56c(void)

{
  return;
}




void FUN_10018a570(void)

{
  return;
}




void FUN_10018a574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101460050;
  param_1[0x211] = &PTR_FUN_1014a7108;
  param_1[0x228] = &PTR_FUN_1014a7268;
  param_1[-0x17] = &PTR_FUN_10145fe90;
  thunk_FUN_100657580(param_1 + 0x22b);
  FUN_10064e2bc(param_1 + 0x211);
  FUN_1001cc504(param_1 + -0x17);
  return;
}




void FUN_10018a5dc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101460050;
  param_1[0x211] = &PTR_FUN_1014a7108;
  param_1[0x228] = &PTR_FUN_1014a7268;
  param_1[-0x17] = &PTR_FUN_10145fe90;
  thunk_FUN_100657580(param_1 + 0x22b);
  FUN_10064e2bc(param_1 + 0x211);
  pvVar1 = (void *)FUN_1001cc504(param_1 + -0x17);
  operator_delete(pvVar1);
  return;
}




long FUN_10018a648(long param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)FUN_100181304();
  *puVar1 = &PTR_thunk_FUN_10018b684_101460098;
  thunk_FUN_100652c08(puVar1 + 0x2b7);
  FUN_1006421a8(param_1 + 0x16a8);
  *(undefined ***)(param_1 + 0x16a8) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x1730);
  thunk_FUN_100652c08(param_1 + 0x1820);
  thunk_FUN_1004e439c(param_1 + 0x1910,param_4);
  if ((char)*(byte *)((long)param_5 + 0x17) < '\0') {
    uVar3 = param_5[1];
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_10018b678();
    }
    param_5 = (undefined8 *)*param_5;
  }
  else {
    uVar3 = (ulong)*(byte *)((long)param_5 + 0x17);
  }
  if (uVar3 < 0x17) {
    pvVar2 = (void *)(param_1 + 0x1920);
    *(char *)(param_1 + 0x1937) = (char)uVar3;
    if (uVar3 == 0) goto LAB_10018a750;
  }
  else {
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar4);
    *(void **)(param_1 + 0x1920) = pvVar2;
    *(ulong *)(param_1 + 0x1930) = uVar4 | 0x8000000000000000;
    *(ulong *)(param_1 + 0x1928) = uVar3;
  }
  _memcpy(pvVar2,param_5,uVar3);
LAB_10018a750:
  *(undefined1 *)((long)pvVar2 + uVar3) = 0;
  *(undefined4 *)(param_1 + 0x1938) = param_3;
  *(undefined1 *)(param_1 + 0x193c) = param_2;
  *(undefined1 *)(param_1 + 0x193d) = param_6;
  FUN_10018a78c(param_1);
  return param_1;
}




void FUN_10018a78c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  long *plVar6;
  undefined **ppuVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined *puVar14;
  long *plVar15;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68;
  
  plVar1 = param_3 + 0x2b7;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  ppuVar7 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)((long)param_3 + 0x193c) != '\0') {
    ppuVar7 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar14 = *ppuVar7;
  plVar15 = param_3 + 0x324;
  bVar9 = *(byte *)((long)param_3 + 0x1937);
  uVar11 = (ulong)bVar9;
  sVar4 = param_3[0x325];
  if (-1 < (char)bVar9) {
    sVar4 = uVar11;
  }
  sVar5 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar5 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar4 == sVar5) {
    plVar6 = (long *)*plVar15;
    if (-1 < (char)bVar9) {
      plVar6 = plVar15;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if ((sVar4 == 0) || (iVar10 = _memcmp(plVar6,pbVar13,sVar4), iVar10 == 0)) goto LAB_10018aa58;
    }
    else {
      if (sVar4 == 0) goto LAB_10018aa58;
      if ((uint)*pbVar13 == ((uint)(long *)*plVar15 & 0xff)) {
        pbVar12 = (byte *)((long)param_3 + 0x1921);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_10018aa58;
          bVar9 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar9 == *pbVar13);
      }
    }
  }
  plVar6 = param_3 + 0x2d5;
  (**(code **)(*param_3 + 0x78))(param_3,plVar6,1);
  plVar2 = param_3 + 0x2e6;
  FUN_100642bd8(plVar6,plVar2,1);
  plVar3 = param_3 + 0x304;
  FUN_100642bd8(plVar6,plVar3,1);
  if (*(char *)((long)param_3 + 0x1937) < '\0') {
    plVar15 = (long *)*plVar15;
  }
  FUN_100652cac(plVar2,puVar14,plVar15);
  if ((*(float *)(param_3 + 0x2f0) != 0.5) || (*(float *)((long)param_3 + 0x1784) != 0.5)) {
    param_3[0x2f0] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_3 + 0x2ef) != 0.9) || (*(float *)((long)param_3 + 0x177c) != 0.9)) {
    param_3[0x2ef] = 0x3f6666663f666666;
    FUN_1000200a0(plVar2);
  }
  uVar8 = *(uint *)((long)param_3 + 0x17b4);
  if ((uVar8 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_3 + 0x17b4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,puVar14,"circle_button_frame");
  param_2 = *(float *)(param_3 + 0x30e);
  if ((param_2 != 0.5) || (param_2 = *(float *)((long)param_3 + 0x1874), param_2 != 0.5)) {
    param_3[0x30e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_3 + 0x30d) != 0.9) || (*(float *)((long)param_3 + 0x186c) != 0.9)) {
    param_3[0x30d] = 0x3f6666663f666666;
    FUN_1000200a0(plVar3);
  }
  uVar8 = *(uint *)((long)param_3 + 0x18a4);
  if ((uVar8 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_3 + 0x18a4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0xc80;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_3 + 0x2de) != 0.9) || (*(float *)((long)param_3 + 0x16f4) != 0.9)) {
    param_3[0x2de] = 0x3f6666663f666666;
    FUN_1000200a0(plVar6);
  }
LAB_10018aa58:
  iVar10 = FUN_1004e36c0(param_3 + 0x322,&DAT_101d91650);
  if (iVar10 != 0) {
    param_2 = 32.0;
    FUN_1001816d4(0,0x42000000,0x44480000,param_3,0,param_3 + 0x322,&DAT_10115a168,&DAT_101dc1cb8,0)
    ;
  }
  FUN_100181b80(param_3,1);
  FUN_100181bd0(0x3f800000,param_3,&DAT_10115a164);
  FUN_100181bf8(0x3f000000,param_3,&DAT_10115a168);
  FUN_1001b495c(0,param_3);
  iVar10 = FUN_100126c88();
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar10 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651038(param_3 + 0xe3,*ppuVar7);
  local_70 = (ulong)*(uint *)(param_3 + 0x327);
  local_68 = DAT_101d91884;
  local_90 = FUN_10018afc0;
  local_80 = 0;
  uStack_78 = 0;
  plStack_88 = param_3;
  FUN_10001554c(param_3 + 1,&local_90);
  FUN_100652cac(plVar1,puVar14,"white_background");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xffa6a6a6);
  FUN_100652dd4(plVar1,&local_90,2);
  uVar8 = *(uint *)((long)param_3 + 0x163c);
  if ((uVar8 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x163c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  (**(code **)(*param_3 + 0x50))(param_3);
  if ((*(float *)(param_3 + 0x2bf) != 0.0) || (*(float *)((long)param_3 + 0x15fc) != param_2 * -0.5)
     ) {
    *(undefined4 *)(param_3 + 0x2bf) = 0;
    *(float *)((long)param_3 + 0x15fc) = param_2 * -0.5;
    FUN_1000200a0(plVar1);
  }
  local_90 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_3[0x2b7] + 0x28))(plVar1,&local_90);
  *(uint *)((long)param_3 + 0x163c) = *(uint *)((long)param_3 + 0x163c) & 0xfffffffb;
  FUN_10018ac78(0x41f00000,param_3);
  return;
}




void FUN_10018ac38(long param_1)

{
  FUN_1000153b4(param_1 + 0x1910);
  FUN_100181af8(param_1,param_1 + 0x1910);
  FUN_10018ac78(0x41f00000,param_1);
  return;
}




void FUN_10018ac78(float param_1,long *param_2)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  
  plVar1 = param_2 + 0x2d5;
  fVar11 = (float)FUN_100642888(plVar1,0,0,1,1);
  fVar12 = (float)FUN_1006511d0(param_2 + 0xe3);
  fVar12 = fVar12 + fVar11 * 1.25;
  if (fVar12 <= param_1) {
    fVar12 = param_1;
  }
  FUN_100181c18(0,fVar12,fVar12,param_2);
  uVar13 = (**(code **)(*param_2 + 0x50))(param_2);
  FUN_10064e47c(uVar13,0x40800000,param_2 + 0x2b7);
  fVar12 = (float)(**(code **)(*param_2 + 0x50))(param_2);
  if (*(float *)(param_2 + 8) != fVar12 * 0.5) {
    *(float *)(param_2 + 8) = fVar12 * 0.5;
    FUN_1000200a0(param_2);
  }
  bVar5 = *(byte *)((long)param_2 + 0x1937);
  uVar7 = (ulong)bVar5;
  sVar2 = param_2[0x325];
  if (-1 < (char)bVar5) {
    sVar2 = uVar7;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar10 = (long *)param_2[0x324];
    plVar4 = plVar10;
    if (-1 < (char)bVar5) {
      plVar4 = param_2 + 0x324;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar6 = _memcmp(plVar4,pbVar9,sVar2);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar9 == ((uint)plVar10 & 0xff)) {
        pbVar8 = (byte *)((long)param_2 + 0x1921);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) {
            return;
          }
          bVar5 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar5 == *pbVar9);
      }
    }
  }
  FUN_100181b28(param_2,0);
  fVar11 = *(float *)(param_2 + 8);
  fVar12 = (float)FUN_100642888(plVar1,0,0,1,1);
  fVar11 = fVar12 * 0.75 - fVar11;
  if (*(float *)(param_2 + 0x2dd) != fVar11) {
    *(float *)(param_2 + 0x2dd) = fVar11;
    FUN_1000200a0(plVar1);
  }
  fVar12 = (float)FUN_100642888(plVar1,0,0,1,1);
  FUN_100181b5c(fVar12 * 1.25,0,param_2);
  return;
}




void FUN_10018ae74(long param_1,string *param_2)

{
  string *this;
  
  this = (string *)(param_1 + 0x1920);
  std::string::operator=(this,param_2);
  if (*(char *)(param_1 + 0x1937) < '\0') {
    this = *(string **)this;
  }
  FUN_100652cdc(param_1 + 0x848,this);
  FUN_10018ac78(0x41f00000,param_1);
  return;
}




void FUN_10018aec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_SELECT_CONTEXT_MENU_ITEM");
  FUN_100644aec(auStack_40,uVar1,param_3);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10018af18(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x264) = *(byte *)(param_1 + 0x264) & 0xfe | (byte)param_2;
  uVar1 = *(uint *)(param_1 + 0x224);
  uVar2 = 0xff;
  if (param_2 == 0) {
    uVar2 = 0x66;
  }
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x224) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0x1a0);
  }
  uVar1 = *(uint *)(param_1 + 0x172c);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x172c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
    FUN_1000200a0(param_1 + 0x16a8);
  }
  if ((~*(uint *)(param_1 + 0x79c) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x79c) = *(uint *)(param_1 + 0x79c) | 0x7f80;
  FUN_1000200a0(param_1 + 0x718);
  return;
}




void FUN_10018afc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10018aec4(param_1,param_2,param_5);
  return;
}




long * FUN_10018afc8(undefined4 param_1,long *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10018b08c_101460230;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  FUN_1006421a8(puVar1 + 0x13);
  param_2[0x13] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001c10a4(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x198) = param_1;
  *(undefined4 *)((long)param_2 + 0xcc4) = param_4;
  *(undefined4 *)(param_2 + 0x199) = 0;
  *(undefined1 *)((long)param_2 + 0xccc) = param_3;
  *(undefined1 *)((long)param_2 + 0xccd) = 0;
  (**(code **)(*param_2 + 0x78))(param_2,param_2 + 0x24,1);
  (**(code **)(*param_2 + 0x78))(param_2,puVar1 + 0x13,1);
  return param_2;
}




long * thunk_FUN_10018afc8(undefined4 param_1,long *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10018b08c_101460230;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  FUN_1006421a8(puVar1 + 0x13);
  param_2[0x13] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001c10a4(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x198) = param_1;
  *(undefined4 *)((long)param_2 + 0xcc4) = param_4;
  *(undefined4 *)(param_2 + 0x199) = 0;
  *(undefined1 *)((long)param_2 + 0xccc) = param_3;
  *(undefined1 *)((long)param_2 + 0xccd) = 0;
  (**(code **)(*param_2 + 0x78))(param_2,param_2 + 0x24,1);
  (**(code **)(*param_2 + 0x78))(param_2,puVar1 + 0x13,1);
  return param_2;
}




void FUN_10018b08c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10018b08c_101460230;
  FUN_10018b0dc();
  FUN_1000cbf18(param_1 + 0x24);
  FUN_10064221c(param_1 + 0x13);
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void FUN_10018b0dc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar4 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x90) + uVar4 * 8) != 0) {
        FUN_100644c24();
        lVar3 = *(long *)(param_1 + 0x90);
        plVar1 = *(long **)(lVar3 + uVar4 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
          lVar3 = *(long *)(param_1 + 0x90);
        }
        *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}




void thunk_FUN_10018b08c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10018b08c_101460230;
  FUN_10018b0dc();
  FUN_1000cbf18(param_1 + 0x24);
  FUN_10064221c(param_1 + 0x13);
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void FUN_10018b154(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10018b08c();
  operator_delete(pvVar1);
  return;
}




void FUN_10018b168(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if (*(char *)(param_1 + 0xccd) != '\0') {
    uVar1 = uVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x84) = uVar1;
    *(undefined1 *)(param_1 + 0xccd) = 0;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    return;
  }
  FUN_10018b18c();
  return;
}




void FUN_10018b18c(long param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_10109c574();
  if (((iVar1 != 0) && (iVar1 = FUN_10109c588(), iVar1 != 0)) &&
     (pbVar2 = (byte *)FUN_10109c59c(0), (*pbVar2 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xccd) = 1;
  }
  iVar1 = FUN_10109c4dc();
  if ((iVar1 != 0) && (iVar1 = FUN_10109c520(0), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xccd) = 1;
  }
  return;
}




void FUN_10018b1ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_68;
  
  if (*(uint *)(param_2 + 0x88) != 0) {
    plVar2 = *(long **)(param_2 + 0x90);
    lVar3 = (ulong)*(uint *)(param_2 + 0x88) << 3;
    do {
      lVar4 = *plVar2;
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x1938) == (int)param_3)) {
        *(int *)(lVar4 + 0x1938) = (int)param_3;
        local_68 = lVar4;
        FUN_10018ac38(lVar4,param_4);
        FUN_10018ae74(lVar4,param_5);
        goto LAB_10018b2c4;
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  pvVar1 = operator_new(0x1940);
  local_68 = FUN_10018a648(pvVar1,*(undefined1 *)(param_2 + 0xccc),param_3,param_4,param_5,param_7);
  FUN_100642bd8(param_2 + 0x98,pvVar1,1);
  FUN_10018b360(param_2 + 0x88,&local_68);
  lVar4 = local_68;
LAB_10018b2c4:
  *(undefined1 *)(lVar4 + 0x15b2) = 0;
  FUN_1001b495c(param_1,lVar4);
  FUN_1001b4c0c(local_68,param_6);
  *(uint *)(local_68 + 0x84) = *(uint *)(local_68 + 0x84) | 4;
  FUN_10018b3e0(param_2);
  return;
}




long FUN_10018b31c(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    plVar2 = *(long **)(param_1 + 0x90);
    lVar3 = (ulong)*(uint *)(param_1 + 0x88) << 3;
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1938) == param_2)) {
        if (param_3 == 0) {
          return lVar1;
        }
        if ((*(byte *)(lVar1 + 0x84) >> 2 & 1) != 0) {
          return lVar1;
        }
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0;
}




void FUN_10018b360(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10018b770(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10018b3e0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    lVar4 = 0;
    lVar3 = (ulong)*(uint *)(param_1 + 0x88) * 8;
    fVar10 = 0.0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x90) + lVar4);
      if ((plVar1 != (long *)0x0) && ((*(byte *)((long)plVar1 + 0x84) >> 2 & 1) != 0)) {
        fVar6 = (float)(**(code **)(*plVar1 + 0x50))(plVar1);
        fVar8 = *(float *)(param_1 + 0xcc8);
        if (fVar8 < fVar6) {
          uVar7 = (**(code **)(*plVar1 + 0x50))(plVar1);
          *(undefined4 *)(param_1 + 0xcc8) = uVar7;
        }
        (**(code **)(*plVar1 + 0x50))(plVar1);
        fVar10 = fVar10 + fVar8 * 0.5;
        if (*(float *)((long)plVar1 + 0x44) != fVar10) {
          *(float *)((long)plVar1 + 0x44) = fVar10;
          FUN_1000200a0(plVar1);
        }
        (**(code **)(*plVar1 + 0x50))(plVar1);
        fVar10 = fVar10 + fVar8 * 0.5;
        uVar5 = 4;
        if (lVar4 == 0 || *(char *)((long)plVar1 + 0x193d) == '\0') {
          uVar5 = 0;
        }
        *(uint *)((long)plVar1 + 0x163c) = uVar5 | *(uint *)((long)plVar1 + 0x163c) & 0xfffffffb;
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 - lVar4 != 0);
    lVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + lVar4);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x84) >> 2 & 1) != 0)) {
        fVar6 = *(float *)(param_1 + 0xcc8);
        fVar10 = (float)FUN_100652390(lVar2 + 0x470,0);
        FUN_10018ac78(fVar6 - fVar10 * (*(float *)(lVar2 + 0x710) + *(float *)(lVar2 + 0x710)),lVar2
                     );
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 - lVar4 != 0);
  }
  uVar7 = *(undefined4 *)(param_1 + 0xcc4);
  uVar9 = *(undefined4 *)(param_1 + 0xcc0);
  lVar4 = param_1 + 0x98;
  fVar10 = (float)FUN_100642888(lVar4,1,0,1,1);
  fVar6 = 16.0;
  FUN_100642888(lVar4,1,0,1,1);
  FUN_1001c1270(uVar9,fVar10 + 16.0,fVar6 + 20.0,param_1 + 0x120,uVar7,
                *(undefined1 *)(param_1 + 0xccc));
  FUN_1001c34ac(0x41000000,0x41200000,(undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,param_1 + 0x120,
                lVar4);
  return;
}




void FUN_10018b5b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + uVar3 * 8);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
        FUN_100181e24(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar3 * 8));
        uVar1 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  FUN_10018b3e0(param_1);
  return;
}




void FUN_10018b614(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xcc4) = param_2;
  FUN_10018b3e0();
  return;
}




int FUN_10018b61c(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x88) != 0) {
    iVar1 = 0;
    plVar2 = *(long **)(param_1 + 0x90);
    lVar3 = (ulong)*(uint *)(param_1 + 0x88) << 3;
    do {
      if (*plVar2 != 0) {
        iVar1 = (*(uint *)(*plVar2 + 0x84) >> 2 & 1) + iVar1;
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    return iVar1;
  }
  return 0;
}




void thunk_FUN_10018b684(void)

{
  FUN_10018b684();
  return;
}




void FUN_10018b664(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10018b684();
  operator_delete(pvVar1);
  return;
}




void FUN_10018b678(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10018b684(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10018b684_101460098;
  if (*(char *)((long)param_1 + 0x1937) < '\0') {
    operator_delete((void *)param_1[0x324]);
  }
  if ((void *)param_1[0x323] != (void *)0x0) {
    operator_delete__((void *)param_1[0x323]);
    param_1[0x323] = 0;
    param_1[0x322] = 0;
  }
  param_1[0x304] = &PTR_FUN_1014a7108;
  param_1[0x31b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31e);
  FUN_10064e2bc(param_1 + 0x304);
  param_1[0x2e6] = &PTR_FUN_1014a7108;
  param_1[0x2fd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x300);
  FUN_10064e2bc(param_1 + 0x2e6);
  FUN_10064221c(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_1014a7108;
  param_1[0x2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d1);
  FUN_10064e2bc(param_1 + 0x2b7);
  FUN_10003bd40(param_1);
  return;
}




void FUN_10018b770(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_10018b7ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  code *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  lVar17 = FUN_1005302b0();
  lVar17 = lVar17 + 0x30;
  FUN_1006421a8(lVar17);
  *param_1 = &PTR_FUN_101460330;
  param_1[6] = &PTR_FUN_1014603a8;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  thunk_FUN_100652c08();
  puVar1 = param_1 + 0x37;
  thunk_FUN_1006543ec(puVar1);
  puVar2 = param_1 + 0x6b;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  puVar3 = param_1 + 0xc5;
  FUN_1006421a8(puVar3);
  param_1[0xc5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar4 = param_1 + 0xd6;
  FUN_1006421a8(puVar4);
  param_1[0xd6] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar5 = param_1 + 0xe7;
  thunk_FUN_1001b0004(puVar5);
  puVar6 = param_1 + 0x156;
  thunk_FUN_1001b0004();
  puVar7 = param_1 + 0x1c5;
  thunk_FUN_100181304(puVar7,0);
  puVar8 = param_1 + 0x47c;
  thunk_FUN_100181304(puVar8,0);
  puVar9 = param_1 + 0x733;
  thunk_FUN_100181304(puVar9,0);
  puVar10 = param_1 + 0x9ea;
  thunk_FUN_1001cd1dc(puVar10);
  *(undefined4 *)(param_1 + 0xa15) = 0;
  (**(code **)(param_1[6] + 0x78))(lVar17,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(lVar17,puVar1,1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar1,puVar3,1);
  FUN_100642bd8(puVar3,puVar5,1);
  FUN_100642bd8(puVar3,puVar6,1);
  FUN_100642bd8(puVar1,puVar4,1);
  FUN_100642bd8(puVar4,puVar7,1);
  FUN_100642bd8(puVar4,puVar8,1);
  FUN_100642bd8(puVar4,puVar9,1);
  FUN_100642bd8(puVar1,puVar10,1);
  (**(code **)(param_1[6] + 0x78))(lVar17,param_1 + 0x89,1);
  (**(code **)(param_1[6] + 0x78))(lVar17,param_1 + 0xa7,1);
  iVar16 = FUN_100126c88();
  *(uint *)((long)param_1 + 0xb4) = *(uint *)((long)param_1 + 0xb4) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_100654488(puVar1,1);
  uVar13 = *(uint *)((long)param_1 + 0x3dc);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x3dc) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_1000200a0(puVar2);
  }
  FUN_100652cac(param_1 + 0x89,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(param_1 + 0xa7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x1cf) != 0.5) || (*(float *)((long)param_1 + 0xe7c) != 0.5)) {
    param_1[0x1cf] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar7);
  }
  if ((*(float *)(param_1 + 0x486) != 0.5) || (*(float *)((long)param_1 + 0x2434) != 0.5)) {
    param_1[0x486] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar8);
  }
  if ((*(float *)(param_1 + 0x73d) != 0.5) || (*(float *)((long)param_1 + 0x39ec) != 0.5)) {
    param_1[0x73d] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar9);
  }
  FUN_1001b067c(puVar5,0);
  FUN_1001b067c(puVar6,3);
  FUN_100651700(param_1 + 0x2a8,0);
  FUN_100651700(param_1 + 0x55f,0);
  FUN_100651700(param_1 + 0x816,0);
  uVar13 = *(uint *)((long)param_1 + 0x7bc);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x7bc) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar5);
  }
  uVar13 = *(uint *)((long)param_1 + 0xb34);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xb34) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar6);
  }
  uVar13 = *(uint *)((long)param_1 + 0xeac);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeac) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar7);
  }
  uVar13 = *(uint *)((long)param_1 + 0x2464);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2464) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar8);
  }
  uVar13 = *(uint *)((long)param_1 + 0x3a1c);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a1c) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar9);
  }
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  ppuVar11 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar16 == 0) {
    ppuVar11 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar16 == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_1001b05dc(puVar5,*ppuVar11);
  FUN_1001b05dc(puVar6,*ppuVar12);
  FUN_1001816d4(0x41c00000,0x42c80000,0x43c80000,puVar7,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_1001816d4(0x41c00000,0x42c80000,0x43c80000,puVar8,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_1001816d4(0x41c00000,0x42c80000,0x43c80000,puVar9,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  uVar15 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = FUN_10018bedc;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x1c6,&local_a0);
  local_78 = uVar15;
  local_a0 = FUN_10018bedc;
  local_90 = 0;
  local_88 = 0;
  local_80 = 1;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x47d,&local_a0);
  local_78 = uVar15;
  local_a0 = FUN_10018bedc;
  local_90 = 0;
  local_88 = 0;
  local_80 = 2;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0x734,&local_a0);
  iVar16 = FUN_100126c88();
  fVar18 = 1.2;
  fVar14 = 1.5;
  if (iVar16 == 0) {
    fVar14 = fVar18;
  }
  if ((*(float *)(param_1 + 0x1ce) != fVar14) || (*(float *)((long)param_1 + 0xe74) != fVar14)) {
    *(float *)(param_1 + 0x1ce) = fVar14;
    *(float *)((long)param_1 + 0xe74) = fVar14;
    FUN_1000200a0(puVar7);
  }
  iVar16 = FUN_100126c88();
  fVar14 = 1.5;
  if (iVar16 == 0) {
    fVar14 = fVar18;
  }
  if ((*(float *)(param_1 + 0x485) != fVar14) || (*(float *)((long)param_1 + 0x242c) != fVar14)) {
    *(float *)(param_1 + 0x485) = fVar14;
    *(float *)((long)param_1 + 0x242c) = fVar14;
    FUN_1000200a0(puVar8);
  }
  iVar16 = FUN_100126c88();
  fVar14 = 1.5;
  if (iVar16 == 0) {
    fVar14 = fVar18;
  }
  if ((*(float *)(param_1 + 0x73c) != fVar14) || (*(float *)((long)param_1 + 0x39e4) != fVar14)) {
    *(float *)(param_1 + 0x73c) = fVar14;
    *(float *)((long)param_1 + 0x39e4) = fVar14;
    FUN_1000200a0(puVar9);
  }
  FUN_100651038(puVar10,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1004e3120(&local_a0,"[NUMBER_SECONDS]");
  FUN_1001cd23c(puVar10,&local_a0,0,1);
  if (local_98 != (undefined8 *)0x0) {
    operator_delete__(local_98);
  }
  *(uint *)((long)param_1 + 0x4fd4) = *(uint *)((long)param_1 + 0x4fd4) & 0xfffffffb;
  return param_1;
}




void FUN_10018bedc(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_100530368(param_1,in_x4);
  return;
}




undefined8 * thunk_FUN_10018b7ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar17 = FUN_1005302b0();
  lVar17 = lVar17 + 0x30;
  FUN_1006421a8(lVar17);
  *param_1 = &PTR_FUN_101460330;
  param_1[6] = &PTR_FUN_1014603a8;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  thunk_FUN_100652c08();
  puVar1 = param_1 + 0x37;
  thunk_FUN_1006543ec(puVar1);
  puVar2 = param_1 + 0x6b;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  puVar3 = param_1 + 0xc5;
  FUN_1006421a8(puVar3);
  param_1[0xc5] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar4 = param_1 + 0xd6;
  FUN_1006421a8(puVar4);
  param_1[0xd6] = &PTR_thunk_FUN_10064221c_10144b7e8;
  puVar5 = param_1 + 0xe7;
  thunk_FUN_1001b0004(puVar5);
  puVar6 = param_1 + 0x156;
  thunk_FUN_1001b0004();
  puVar7 = param_1 + 0x1c5;
  thunk_FUN_100181304(puVar7,0);
  puVar8 = param_1 + 0x47c;
  thunk_FUN_100181304(puVar8,0);
  puVar9 = param_1 + 0x733;
  thunk_FUN_100181304(puVar9,0);
  puVar10 = param_1 + 0x9ea;
  thunk_FUN_1001cd1dc(puVar10);
  *(undefined4 *)(param_1 + 0xa15) = 0;
  (**(code **)(param_1[6] + 0x78))(lVar17,param_1 + 0x19,1);
  (**(code **)(param_1[6] + 0x78))(lVar17,puVar1,1);
  FUN_100642bd8(puVar1,puVar2,1);
  FUN_100642bd8(puVar1,puVar3,1);
  FUN_100642bd8(puVar3,puVar5,1);
  FUN_100642bd8(puVar3,puVar6,1);
  FUN_100642bd8(puVar1,puVar4,1);
  FUN_100642bd8(puVar4,puVar7,1);
  FUN_100642bd8(puVar4,puVar8,1);
  FUN_100642bd8(puVar4,puVar9,1);
  FUN_100642bd8(puVar1,puVar10,1);
  (**(code **)(param_1[6] + 0x78))(lVar17,param_1 + 0x89,1);
  (**(code **)(param_1[6] + 0x78))(lVar17,param_1 + 0xa7,1);
  iVar16 = FUN_100126c88();
  *(uint *)((long)param_1 + 0xb4) = *(uint *)((long)param_1 + 0xb4) & 0xfffffffb;
  FUN_100652cac(param_1 + 0x19,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_100654488(puVar1,1);
  uVar13 = *(uint *)((long)param_1 + 0x3dc);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x3dc) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_1000200a0(puVar2);
  }
  FUN_100652cac(param_1 + 0x89,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(param_1 + 0xa7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x1cf) != 0.5) || (*(float *)((long)param_1 + 0xe7c) != 0.5)) {
    param_1[0x1cf] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar7);
  }
  if ((*(float *)(param_1 + 0x486) != 0.5) || (*(float *)((long)param_1 + 0x2434) != 0.5)) {
    param_1[0x486] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar8);
  }
  if ((*(float *)(param_1 + 0x73d) != 0.5) || (*(float *)((long)param_1 + 0x39ec) != 0.5)) {
    param_1[0x73d] = &DAT_3f0000003f000000;
    FUN_1000200a0(puVar9);
  }
  FUN_1001b067c(puVar5,0);
  FUN_1001b067c(puVar6,3);
  FUN_100651700(param_1 + 0x2a8,0);
  FUN_100651700(param_1 + 0x55f,0);
  FUN_100651700(param_1 + 0x816,0);
  uVar13 = *(uint *)((long)param_1 + 0x7bc);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x7bc) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar5);
  }
  uVar13 = *(uint *)((long)param_1 + 0xb34);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xb34) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar6);
  }
  uVar13 = *(uint *)((long)param_1 + 0xeac);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xeac) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar7);
  }
  uVar13 = *(uint *)((long)param_1 + 0x2464);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x2464) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar8);
  }
  uVar13 = *(uint *)((long)param_1 + 0x3a1c);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x3a1c) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_1000200a0(puVar9);
  }
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  ppuVar11 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar16 == 0) {
    ppuVar11 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar16 == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_1001b05dc(puVar5,*ppuVar11);
  FUN_1001b05dc(puVar6,*ppuVar12);
  FUN_1001816d4(0x41c00000,0x42c80000,0x43c80000,puVar7,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_1001816d4(0x41c00000,0x42c80000,0x43c80000,puVar8,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_1001816d4(0x41c00000,0x42c80000,0x43c80000,puVar9,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  uVar15 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  pcStack_a0 = FUN_10018bedc;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x1c6,&pcStack_a0);
  uStack_78 = uVar15;
  pcStack_a0 = FUN_10018bedc;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 1;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x47d,&pcStack_a0);
  uStack_78 = uVar15;
  pcStack_a0 = FUN_10018bedc;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 2;
  puStack_98 = param_1;
  FUN_10001554c(param_1 + 0x734,&pcStack_a0);
  iVar16 = FUN_100126c88();
  fVar18 = 1.2;
  fVar14 = 1.5;
  if (iVar16 == 0) {
    fVar14 = fVar18;
  }
  if ((*(float *)(param_1 + 0x1ce) != fVar14) || (*(float *)((long)param_1 + 0xe74) != fVar14)) {
    *(float *)(param_1 + 0x1ce) = fVar14;
    *(float *)((long)param_1 + 0xe74) = fVar14;
    FUN_1000200a0(puVar7);
  }
  iVar16 = FUN_100126c88();
  fVar14 = 1.5;
  if (iVar16 == 0) {
    fVar14 = fVar18;
  }
  if ((*(float *)(param_1 + 0x485) != fVar14) || (*(float *)((long)param_1 + 0x242c) != fVar14)) {
    *(float *)(param_1 + 0x485) = fVar14;
    *(float *)((long)param_1 + 0x242c) = fVar14;
    FUN_1000200a0(puVar8);
  }
  iVar16 = FUN_100126c88();
  fVar14 = 1.5;
  if (iVar16 == 0) {
    fVar14 = fVar18;
  }
  if ((*(float *)(param_1 + 0x73c) != fVar14) || (*(float *)((long)param_1 + 0x39e4) != fVar14)) {
    *(float *)(param_1 + 0x73c) = fVar14;
    *(float *)((long)param_1 + 0x39e4) = fVar14;
    FUN_1000200a0(puVar9);
  }
  FUN_100651038(puVar10,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1004e3120(&pcStack_a0,"[NUMBER_SECONDS]");
  FUN_1001cd23c(puVar10,&pcStack_a0,0,1);
  if (puStack_98 != (undefined8 *)0x0) {
    operator_delete__(puStack_98);
  }
  *(uint *)((long)param_1 + 0x4fd4) = *(uint *)((long)param_1 + 0x4fd4) & 0xfffffffb;
  return param_1;
}




void FUN_10018bee8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)*param_1)();
  (**(code **)(*param_1 + 8))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010018bf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,&DAT_101d91650,&DAT_101d91650);
  return;
}




void FUN_10018bf50(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (**(code **)*param_1)();
  (**(code **)(*param_1 + 8))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010018bfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5,&DAT_101d91650);
  return;
}




void FUN_10018bfbc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)*param_1)();
  (**(code **)(*param_1 + 8))(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010018c02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_5,param_6);
  return;
}




void FUN_10018c030(long param_1,undefined8 param_2)

{
  FUN_1001b0198(param_1 + 0x738,param_2,3);
  FUN_1000200a0(param_1 + 0x30);
  return;
}




void FUN_10018c05c(long param_1,undefined8 param_2)

{
  FUN_1001b0198(param_1 + 0xab0,param_2,3);
  FUN_1000200a0(param_1 + 0x30);
  return;
}




void FUN_10018c088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_100181af8(param_1 + 0xe28);
  FUN_100181af8(param_1 + 0x23e0,param_3);
  FUN_100181af8(param_1 + 0x3998,param_4);
  iVar2 = FUN_1004e3624(param_2);
  uVar3 = 4;
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) & 0xfffffffb | uVar1;
  iVar2 = FUN_1004e3624(param_3);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x2464) = *(uint *)(param_1 + 0x2464) & 0xfffffffb | uVar1;
  iVar2 = FUN_1004e3624(param_4);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = uVar3;
  }
  *(uint *)(param_1 + 0x3a1c) = *(uint *)(param_1 + 0x3a1c) & 0xfffffffb | uVar1;
  FUN_1000200a0(param_1 + 0x30);
  return;
}




void FUN_10018c148(float param_1,long param_2)

{
  long local_28;
  
  if (0.0 < param_1) {
    *(float *)(param_2 + 0x50a8) = param_1;
    *(uint *)(param_2 + 0x4fd4) = *(uint *)(param_2 + 0x4fd4) | 4;
    local_28 = (long)param_1;
    FUN_1001cd374(param_2 + 0x4f50,&local_28);
    *(uint *)(param_2 + 0x734) = *(uint *)(param_2 + 0x734) & 0xfffffffb;
  }
  return;
}




void thunk_FUN_10018c1b4(void)

{
  FUN_10018c1b4();
  return;
}




void FUN_10018c1b4(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  float fVar5;
  float local_50;
  float local_4c;
  undefined1 *local_48;
  
  FUN_100641464(&local_4c,&local_50);
  lVar1 = param_1 + 200;
  FUN_10064e47c(local_4c,local_50,lVar1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x10c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x108)))) {
    bVar2 = *(float *)(param_1 + 0x108) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    FUN_1000200a0(lVar1);
  }
  local_48 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 200) + 0x28))(lVar1,&local_48);
  fVar5 = local_50 * 0.5;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1f8) == local_4c * 0.5) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x1fc)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_1 + 0x1fc) == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x1f8) = local_4c * 0.5;
    *(float *)(param_1 + 0x1fc) = fVar5;
    FUN_1000200a0(param_1 + 0x1b8);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x28))(param_1 + 0x1b8,&local_48);
  lVar1 = param_1 + 0x358;
  FUN_10064e47c(local_4c,local_50,lVar1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x39c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x398)))) {
    bVar2 = *(float *)(param_1 + 0x398) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x398) = 0;
    FUN_1000200a0(lVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x358) + 0x28))(lVar1,&local_48);
  FUN_10064e47c(local_4c,0x40800000,param_1 + 0x448);
  FUN_10064e47c(local_4c,0x40800000,param_1 + 0x538);
  if ((*(float *)(param_1 + 0x778) != 0.0) || (*(float *)(param_1 + 0x77c) != -468.0)) {
    *(undefined8 *)(param_1 + 0x778) = 0xc3ea000000000000;
    FUN_1000200a0(param_1 + 0x738);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x738) + 0x28))(param_1 + 0x738,&local_48);
  lVar1 = param_1 + 0xab0;
  bVar2 = false;
  if ((*(float *)(param_1 + 0xaf4) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0xaf0)))) {
    bVar2 = *(float *)(param_1 + 0xaf0) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0xaf0) = 0;
    FUN_1000200a0(lVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xab0) + 0x28))(lVar1,&local_48);
  FUN_1001b06ac(local_4c * 0.9,lVar1);
  if ((*(float *)(param_1 + 0x6f0) != 0.0) || (*(float *)(param_1 + 0x6f4) != 468.0)) {
    *(undefined8 *)(param_1 + 0x6f0) = 0x43ea000000000000;
    FUN_1000200a0(param_1 + 0x6b0);
  }
  FUN_100655b6c(param_1 + 0x2bc8);
  iVar3 = FUN_1004e3624();
  if (iVar3 == 0) {
LAB_10018c424:
    plVar4 = (long *)(param_1 + 0x23e0);
    FUN_100655b6c(param_1 + 0x4180);
    iVar3 = FUN_1004e3624();
    if (iVar3 == 0) {
      if ((*(float *)(param_1 + 0xe68) != local_4c * 0.25) || (*(float *)(param_1 + 0xe6c) != 0.0))
      {
        *(float *)(param_1 + 0xe68) = local_4c * 0.25;
        *(undefined4 *)(param_1 + 0xe6c) = 0;
        FUN_1000200a0(param_1 + 0xe28);
      }
      local_48 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0xe28) + 0x28))(param_1 + 0xe28,&local_48);
      bVar2 = false;
      if ((*(float *)(param_1 + 0x39dc) == 0.0) &&
         (bVar2 = false, !NAN(*(float *)(param_1 + 0x39d8)))) {
        bVar2 = *(float *)(param_1 + 0x39d8) == 0.0;
      }
      if (!bVar2) {
        *(undefined8 *)(param_1 + 0x39d8) = 0;
        FUN_1000200a0(param_1 + 0x3998);
      }
      local_48 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x3998) + 0x28))(param_1 + 0x3998,&local_48);
      if ((*(float *)(param_1 + 0x2420) == local_4c * -0.25) &&
         (*(float *)(param_1 + 0x2424) == 0.0)) goto LAB_10018c59c;
      *(float *)(param_1 + 0x2420) = local_4c * -0.25;
      *(undefined4 *)(param_1 + 0x2424) = 0;
    }
    else {
      if ((*(float *)(param_1 + 0x2420) != local_4c * -0.166) ||
         (*(float *)(param_1 + 0x2424) != 0.0)) {
        *(float *)(param_1 + 0x2420) = local_4c * -0.166;
        *(undefined4 *)(param_1 + 0x2424) = 0;
        FUN_1000200a0(plVar4);
      }
      local_48 = &DAT_3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x23e0) + 0x28))(plVar4,&local_48);
      plVar4 = (long *)(param_1 + 0xe28);
      if ((*(float *)(param_1 + 0xe68) == local_4c * 0.166) && (*(float *)(param_1 + 0xe6c) == 0.0))
      goto LAB_10018c59c;
      *(float *)(param_1 + 0xe68) = local_4c * 0.166;
      *(undefined4 *)(param_1 + 0xe6c) = 0;
    }
  }
  else {
    FUN_100655b6c(param_1 + 0x4180);
    iVar3 = FUN_1004e3624();
    if (iVar3 == 0) goto LAB_10018c424;
    plVar4 = (long *)(param_1 + 0xe28);
    bVar2 = false;
    if ((*(float *)(param_1 + 0xe6c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0xe68))))
    {
      bVar2 = *(float *)(param_1 + 0xe68) == 0.0;
    }
    if (bVar2) goto LAB_10018c59c;
    *(undefined8 *)(param_1 + 0xe68) = 0;
  }
  FUN_1000200a0(plVar4);
LAB_10018c59c:
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_48);
  FUN_10064e5ec(0,0,param_1 + 0x4f50,8,param_1 + 0x6b0,8);
  return;
}




void FUN_10018c5f0(long param_1)

{
  FUN_10018c1b4(param_1 + -0x30);
  return;
}




void FUN_10018c5f8(float param_1,float param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_60;
  undefined1 auStack_5c [4];
  undefined8 local_58;
  
  iVar2 = FUN_100530354();
  if (((iVar2 != 0) && (iVar2 = FUN_10109c6e4(), iVar2 != 0)) &&
     (iVar2 = FUN_10109c710(1), iVar2 != 0)) {
    FUN_100655b6c(param_3 + 0x2bc8);
    iVar2 = FUN_1004e3624();
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      FUN_100655b6c(param_3 + 0x1610);
      uVar3 = FUN_1004e3624();
      if ((uVar3 & 1) != 0) goto LAB_10018c678;
      uVar4 = 0;
    }
    FUN_100530368(param_3,uVar4);
  }
LAB_10018c678:
  FUN_100641464(auStack_5c,&local_60);
  fVar5 = local_60;
  FUN_10064e3cc(param_3 + 0x1b8);
  fVar5 = (fVar5 - param_2) * 0.5;
  fVar6 = *(float *)(param_3 + 0x488);
  bVar1 = false;
  if ((fVar6 == 0.0) && (bVar1 = false, !NAN(*(float *)(param_3 + 0x48c)) && !NAN(fVar5))) {
    bVar1 = *(float *)(param_3 + 0x48c) == fVar5;
  }
  if (!bVar1) {
    *(undefined4 *)(param_3 + 0x488) = 0;
    *(float *)(param_3 + 0x48c) = fVar5;
    FUN_1000200a0(param_3 + 0x448);
  }
  local_58 = 0;
  (**(code **)(*(long *)(param_3 + 0x448) + 0x28))(param_3 + 0x448,&local_58);
  FUN_10064e3cc(param_3 + 0x1b8);
  fVar5 = (fVar6 + local_60) * 0.5;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x578) == 0.0) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x57c)) && !NAN(fVar5))) {
    bVar1 = *(float *)(param_3 + 0x57c) == fVar5;
  }
  if (!bVar1) {
    *(undefined4 *)(param_3 + 0x578) = 0;
    *(float *)(param_3 + 0x57c) = fVar5;
    FUN_1000200a0(param_3 + 0x538);
  }
  local_58 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_3 + 0x538) + 0x28))(param_3 + 0x538,&local_58);
  FUN_1001cd27c(param_3 + 0x4f50);
  param_1 = *(float *)(param_3 + 0x50a8) - param_1;
  *(float *)(param_3 + 0x50a8) = param_1;
  if (param_1 <= 1.0) {
    *(uint *)(param_3 + 0x734) = *(uint *)(param_3 + 0x734) | 4;
    *(uint *)(param_3 + 0x4fd4) = *(uint *)(param_3 + 0x4fd4) & 0xfffffffb;
  }
  return;
}




void FUN_10018c798(long param_1)

{
  FUN_10018c5f8(param_1 + -0x30);
  return;
}




void FUN_10018c7a0(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_59;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  
  FUN_10018c1b4();
  FUN_100641464(&local_54,auStack_58);
  uVar3 = FUN_100530354(param_1);
  if ((uVar3 & 1) == 0) {
    FUN_100642324(param_1 + 0x30);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 4;
    lVar1 = param_1 + 200;
    uVar2 = *(uint *)(param_1 + 0x14c);
    *(uint *)(param_1 + 0x14c) = uVar2 | 0x10;
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x14c) = uVar2 & 0xffff807f | 0x10;
      FUN_1000200a0(lVar1);
    }
    uVar4 = FUN_100640840(0x3f000000,0x3f0ccccd,0);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar4);
    lVar1 = param_1 + 0x538;
    uVar2 = *(uint *)(param_1 + 0x5bc);
    if ((uVar2 & 0x7f80) != 0xc80) {
      *(uint *)(param_1 + 0x5bc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xc80;
      FUN_1000200a0(lVar1);
    }
    uVar4 = FUN_100640840(0x3f59999a,0x3f0ccccd,0);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar4);
    lVar1 = param_1 + 0x448;
    uVar2 = *(uint *)(param_1 + 0x4cc);
    if ((uVar2 & 0x7f80) != 0xc80) {
      *(uint *)(param_1 + 0x4cc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xc80;
      FUN_1000200a0(lVar1);
    }
    uVar4 = FUN_100640840(0x3f59999a,0x3f0ccccd,0);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar4);
    lVar1 = param_1 + 0x1b8;
    if ((*(uint *)(param_1 + 0x23c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xffff807f;
      FUN_1000200a0(lVar1);
    }
    FUN_10064e47c(local_54,0,lVar1);
    uVar4 = FUN_100640e7c(local_54,0x44910000,0x3f0ccccd,lVar1,FUN_10006bf9c);
    FUN_100640840(0x3f800000,0x3f0ccccd,0);
    uVar5 = FUN_10001f4d4();
    FUN_10063f2a4(uVar5,uVar4);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
  }
  local_59 = 1;
  if (*(int *)(param_1 + 0xb8) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0xc0);
    do {
      if ((code *)*puVar6 == (code *)0x0) {
        (*(code *)puVar6[3])(puVar6[2],&local_59);
      }
      else {
        (*(code *)*puVar6)(&local_59);
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (undefined8 *)
                       (*(long *)(param_1 + 0xc0) + (ulong)*(uint *)(param_1 + 0xb8) * 0x20));
  }
  return;
}




void FUN_10018c9e8(long param_1)

{
  long lVar1;
  ushort *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined1 local_59;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  
  FUN_100641464(&local_54,auStack_58);
  iVar3 = FUN_100530354(param_1);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xffffffef;
    lVar1 = param_1 + 0x1b8;
    uVar4 = FUN_100640e7c(local_54,0,0x3f0ccccd,lVar1,FUN_10018cc34);
    FUN_100640840(0,0x3eef5c2a,0);
    uVar5 = FUN_10001f4d4();
    FUN_10063f2a4(uVar5,uVar4);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar5);
    uVar4 = FUN_100640840(0x3dcccccd,0x3f0ccccd,0);
    FUN_100642324(param_1 + 0x538);
    FUN_100642b14(param_1 + 0x538,uVar4);
    uVar4 = FUN_100640840(0x3dcccccd,0x3f0ccccd,0);
    FUN_100642324(param_1 + 0x448);
    FUN_100642b14(param_1 + 0x448,uVar4);
    uVar4 = FUN_100640840(0,0x3f0ccccd,0);
    FUN_100642324(param_1 + 200);
    FUN_100642b14(param_1 + 200,uVar4);
    uVar4 = FUN_10064081c(0x3f0ccccd);
    lVar1 = DAT_101dbd2f8;
    uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar6 != 0xffff) {
      puVar2 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar2;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063ee9c(puVar2);
      *(undefined ***)puVar2 = &PTR_thunk_FUN_10063eeb4_1014a5338;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_100642324(param_1 + 0x30);
    FUN_100642b7c(param_1 + 0x30,uVar4);
  }
  local_59 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0xc0);
    do {
      if ((code *)*puVar7 == (code *)0x0) {
        (*(code *)puVar7[3])(puVar7[2],&local_59);
      }
      else {
        (*(code *)*puVar7)(&local_59);
      }
      puVar7 = puVar7 + 4;
    } while (puVar7 != (undefined8 *)
                       (*(long *)(param_1 + 0xc0) + (ulong)*(uint *)(param_1 + 0xb8) * 0x20));
  }
  return;
}




float FUN_10018cc34(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  param_1 = param_1 / (param_4 * 0.5);
  if (1.0 <= param_1) {
    param_1 = param_1 + -2.0;
    fVar1 = param_3 * 0.5 * ((param_1 * 3.5949094 + 2.5949094) * param_1 * param_1 + 2.0);
  }
  else {
    fVar1 = param_1 * param_1 * param_3 * 0.5 * (param_1 * 3.5949094 + -2.5949094);
  }
  return fVar1 + param_2;
}




void FUN_10018ccac(void)

{
  return;
}




void FUN_10018ccb0(void)

{
  return;
}




void FUN_10018ccb4(void)

{
  return;
}




void thunk_FUN_10018ccf0(void)

{
  FUN_10018ccf0();
  return;
}




void FUN_10018ccbc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10018ccf0();
  operator_delete(pvVar1);
  return;
}




void FUN_10018ccd0(long param_1)

{
  FUN_10018ccf0(param_1 + -0x30);
  return;
}




void FUN_10018ccd8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10018ccf0(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10018ccf0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101460330;
  param_1[6] = &PTR_FUN_1014603a8;
  param_1[0x9ea] = &PTR_FUN_10145eb78;
  param_1[0xa01] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0xa12] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa12]);
    param_1[0xa12] = 0;
    param_1[0xa11] = 0;
  }
  FUN_100651068(param_1 + 0x9ea);
  FUN_10003bd40(param_1 + 0x733);
  FUN_10003bd40(param_1 + 0x47c);
  FUN_10003bd40(param_1 + 0x1c5);
  param_1[0x156] = &PTR_FUN_101463a58;
  lVar1 = 0xcf0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0xa90);
  FUN_10064230c(param_1 + 0x167);
  FUN_10064221c(param_1 + 0x156);
  param_1[0xe7] = &PTR_FUN_101463a58;
  lVar1 = 0x978;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x718);
  FUN_10064230c(param_1 + 0xf8);
  FUN_10064221c(param_1 + 0xe7);
  FUN_10064221c(param_1 + 0xd6);
  FUN_10064221c(param_1 + 0xc5);
  param_1[0xa7] = &PTR_FUN_1014a7108;
  param_1[0xbe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1);
  FUN_10064e2bc(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_10064221c(param_1 + 6);
  return param_1;
}




long * FUN_10018ceb0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  code *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar14 = (undefined8 *)FUN_1006421a8();
  puVar15 = puVar14 + 0x11;
  *puVar14 = &PTR_thunk_FUN_10018d500_1014604a8;
  thunk_FUN_1001bd4e0(puVar15,0);
  plVar1 = param_1 + 0xa7;
  thunk_FUN_100181304(plVar1,0);
  param_1[0x35f] = 0;
  param_1[0x35e] = 0;
  plVar2 = param_1 + 0x360;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x37e;
  thunk_FUN_100652c08(plVar3);
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x3ba;
  FUN_10064fd54(plVar4,0);
  param_1[0x3ba] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar5 = param_1 + 0x3d3;
  FUN_10064fd54(plVar5,1);
  param_1[0x3d3] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar6 = param_1 + 0x3ec;
  FUN_10064fd54(plVar6,1);
  param_1[0x3ec] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar7 = param_1 + 0x405;
  FUN_10064fd54(plVar7,1);
  param_1[0x405] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar8 = param_1 + 0x41e;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x43c;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x45a;
  thunk_FUN_100650e64(plVar10);
  plVar11 = param_1 + 0x480;
  thunk_FUN_100650e64(plVar11);
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x4cf;
  thunk_FUN_1006543ec(plVar12);
  plVar13 = param_1 + 0x503;
  FUN_10064fd54(plVar13,1);
  param_1[0x503] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  param_1[0x51d] = 0;
  param_1[0x51c] = 0;
  param_1[0x51e] = DAT_101873a38;
  param_1[0x51f] = 0;
  param_1[0x521] = 0;
  param_1[0x520] = 0;
  *(undefined4 *)(param_1 + 0x522) = 0;
  param_1[0x524] = 3;
  *(undefined1 *)(param_1 + 0x525) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar13,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar10,1);
  FUN_100642bd8(plVar4,plVar8,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar6,plVar11,1);
  FUN_100642bd8(plVar4,plVar9,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar7,param_1 + 0x4a6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  local_a0 = (code *)&DAT_3f0000003f000000;
  FUN_1001bd8b4(puVar15,&local_a0);
  uVar16 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x10c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar15);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x36a) != 0.5) || (*(float *)((long)param_1 + 0x1b54) != 0.5)) {
    param_1[0x36a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100654488(plVar12,1);
  FUN_100651594(param_1 + 0x18a,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar1,&local_a0);
  FUN_1001b495c(0,plVar1);
  FUN_100181bf8(0x3f000000,plVar1,&DAT_10115a168);
  local_78 = DAT_101d91884;
  local_a0 = thunk_FUN_10018f164;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  FUN_10001554c(param_1 + 0xa8,&local_a0);
  FUN_1004e3120(&local_a0,"<empty>");
  FUN_1001816d4(0x41f00000,0x43c80000,0x43c80000,plVar1,0,&local_a0,&DAT_10115a168,&DAT_101dc1cb8,0)
  ;
  if (local_98 != (long *)0x0) {
    operator_delete__(local_98);
  }
  FUN_100181b80(plVar1,1);
  if ((*(float *)(param_1 + 0xb1) != 0.5) || (*(float *)((long)param_1 + 0x58c) != 0.5)) {
    param_1[0xb1] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100181b5c(0x41200000,0,plVar1);
  FUN_100181b28(plVar1,0);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  FUN_100652cac(param_1 + 0x39c,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_check");
  uVar16 = *(uint *)((long)param_1 + 0x1d64);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1d64) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_1000200a0(param_1 + 0x39c);
    uVar16 = *(uint *)((long)param_1 + 0x1d64);
  }
  *(uint *)((long)param_1 + 0x1d64) = uVar16 | 4;
  FUN_1001b4c68(plVar1,&DAT_101d91198);
  *(undefined1 *)((long)param_1 + 0x1aea) = 0;
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x428) != 0.5) || (*(float *)((long)param_1 + 0x2144) != 0.5)) {
    param_1[0x428] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x446) != 0.5) || (*(float *)((long)param_1 + 0x2234) != 0.5)) {
    param_1[0x446] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
  }
  param_1[0x4cc] = (long)plVar10;
  param_1[0x4cd] = (long)plVar11;
  param_1[0x4ce] = (long)(param_1 + 0x4a6);
  if (0 < (int)param_1[0x524]) {
    lVar17 = 0;
    do {
      *(uint *)(param_1[lVar17 + 0x4cc] + 0x84) =
           *(uint *)(param_1[lVar17 + 0x4cc] + 0x84) & 0xffffffef;
      FUN_100651460(param_1[lVar17 + 0x4cc],&DAT_10115a168);
      FUN_100651038(param_1[lVar17 + 0x4cc],PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x524]);
  }
  return param_1;
}




void thunk_FUN_10018f164(long param_1)

{
  if (*(char *)(param_1 + 0x2924) != '\0') {
    FUN_10018e440(param_1,0);
    return;
  }
  FUN_10018eaf4(param_1,0);
  return;
}




long * thunk_FUN_10018ceb0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar14 = (undefined8 *)FUN_1006421a8();
  puVar15 = puVar14 + 0x11;
  *puVar14 = &PTR_thunk_FUN_10018d500_1014604a8;
  thunk_FUN_1001bd4e0(puVar15,0);
  plVar1 = param_1 + 0xa7;
  thunk_FUN_100181304(plVar1,0);
  param_1[0x35f] = 0;
  param_1[0x35e] = 0;
  plVar2 = param_1 + 0x360;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x37e;
  thunk_FUN_100652c08(plVar3);
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x3ba;
  FUN_10064fd54(plVar4,0);
  param_1[0x3ba] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar5 = param_1 + 0x3d3;
  FUN_10064fd54(plVar5,1);
  param_1[0x3d3] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar6 = param_1 + 0x3ec;
  FUN_10064fd54(plVar6,1);
  param_1[0x3ec] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar7 = param_1 + 0x405;
  FUN_10064fd54(plVar7,1);
  param_1[0x405] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar8 = param_1 + 0x41e;
  thunk_FUN_100652c08(plVar8);
  plVar9 = param_1 + 0x43c;
  thunk_FUN_100652c08(plVar9);
  plVar10 = param_1 + 0x45a;
  thunk_FUN_100650e64(plVar10);
  plVar11 = param_1 + 0x480;
  thunk_FUN_100650e64(plVar11);
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x4cf;
  thunk_FUN_1006543ec(plVar12);
  plVar13 = param_1 + 0x503;
  FUN_10064fd54(plVar13,1);
  param_1[0x503] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  param_1[0x51d] = 0;
  param_1[0x51c] = 0;
  param_1[0x51e] = DAT_101873a38;
  param_1[0x51f] = 0;
  param_1[0x521] = 0;
  param_1[0x520] = 0;
  *(undefined4 *)(param_1 + 0x522) = 0;
  param_1[0x524] = 3;
  *(undefined1 *)(param_1 + 0x525) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar15,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar13,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar10,1);
  FUN_100642bd8(plVar4,plVar8,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar6,plVar11,1);
  FUN_100642bd8(plVar4,plVar9,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar7,param_1 + 0x4a6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  pcStack_a0 = (code *)&DAT_3f0000003f000000;
  FUN_1001bd8b4(puVar15,&pcStack_a0);
  uVar16 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x10c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar15);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x36a) != 0.5) || (*(float *)((long)param_1 + 0x1b54) != 0.5)) {
    param_1[0x36a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100654488(plVar12,1);
  FUN_100651594(param_1 + 0x18a,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,0xff404040);
  FUN_100181bd0(0x3f800000,plVar1,&pcStack_a0);
  FUN_1001b495c(0,plVar1);
  FUN_100181bf8(0x3f000000,plVar1,&DAT_10115a168);
  uStack_78 = DAT_101d91884;
  pcStack_a0 = thunk_FUN_10018f164;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xa8,&pcStack_a0);
  FUN_1004e3120(&pcStack_a0,"<empty>");
  FUN_1001816d4(0x41f00000,0x43c80000,0x43c80000,plVar1,0,&pcStack_a0,&DAT_10115a168,&DAT_101dc1cb8,
                0);
  if (plStack_98 != (long *)0x0) {
    operator_delete__(plStack_98);
  }
  FUN_100181b80(plVar1,1);
  if ((*(float *)(param_1 + 0xb1) != 0.5) || (*(float *)((long)param_1 + 0x58c) != 0.5)) {
    param_1[0xb1] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100181b5c(0x41200000,0,plVar1);
  FUN_100181b28(plVar1,0);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  FUN_100652cac(param_1 + 0x39c,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_check");
  uVar16 = *(uint *)((long)param_1 + 0x1d64);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x1d64) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_1000200a0(param_1 + 0x39c);
    uVar16 = *(uint *)((long)param_1 + 0x1d64);
  }
  *(uint *)((long)param_1 + 0x1d64) = uVar16 | 4;
  FUN_1001b4c68(plVar1,&DAT_101d91198);
  *(undefined1 *)((long)param_1 + 0x1aea) = 0;
  FUN_100652cac(plVar8,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x428) != 0.5) || (*(float *)((long)param_1 + 0x2144) != 0.5)) {
    param_1[0x428] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  FUN_100652cac(plVar9,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(float *)(param_1 + 0x446) != 0.5) || (*(float *)((long)param_1 + 0x2234) != 0.5)) {
    param_1[0x446] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
  }
  param_1[0x4cc] = (long)plVar10;
  param_1[0x4cd] = (long)plVar11;
  param_1[0x4ce] = (long)(param_1 + 0x4a6);
  if (0 < (int)param_1[0x524]) {
    lVar17 = 0;
    do {
      *(uint *)(param_1[lVar17 + 0x4cc] + 0x84) =
           *(uint *)(param_1[lVar17 + 0x4cc] + 0x84) & 0xffffffef;
      FUN_100651460(param_1[lVar17 + 0x4cc],&DAT_10115a168);
      FUN_100651038(param_1[lVar17 + 0x4cc],PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8);
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x524]);
  }
  return param_1;
}




void FUN_10018d500(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10018d500_1014604a8;
  FUN_10018d738();
  if (*(char *)((long)param_1 + 0x290f) < '\0') {
    operator_delete((void *)param_1[0x51f]);
  }
  FUN_10001629c(param_1 + 0x51c,1);
  FUN_10064e2bc(param_1 + 0x503);
  FUN_10064e2bc(param_1 + 0x4cf);
  thunk_FUN_100651068(param_1 + 0x4a6);
  thunk_FUN_100651068(param_1 + 0x480);
  thunk_FUN_100651068(param_1 + 0x45a);
  param_1[0x43c] = &PTR_FUN_1014a7108;
  param_1[0x453] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x456);
  FUN_10064e2bc(param_1 + 0x43c);
  param_1[0x41e] = &PTR_FUN_1014a7108;
  param_1[0x435] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x438);
  FUN_10064e2bc(param_1 + 0x41e);
  FUN_10064e2bc(param_1 + 0x405);
  FUN_10064e2bc(param_1 + 0x3ec);
  FUN_10064e2bc(param_1 + 0x3d3);
  FUN_10064e2bc(param_1 + 0x3ba);
  param_1[0x39c] = &PTR_FUN_1014a7108;
  param_1[0x3b3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3b6);
  FUN_10064e2bc(param_1 + 0x39c);
  param_1[0x37e] = &PTR_FUN_1014a7108;
  param_1[0x395] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x398);
  FUN_10064e2bc(param_1 + 0x37e);
  param_1[0x360] = &PTR_FUN_1014a7108;
  param_1[0x377] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37a);
  FUN_10064e2bc(param_1 + 0x360);
  if ((void *)param_1[0x35f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x35f]);
    param_1[0x35f] = 0;
    param_1[0x35e] = 0;
  }
  FUN_10003bd40(param_1 + 0xa7);
  param_1[0x11] = &PTR_FUN_101464e50;
  param_1[0x7c] = &PTR_FUN_1014a6db0;
  param_1[0x93] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x52] = &PTR_FUN_1014a6db0;
  param_1[0x69] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  param_1[0x28] = &PTR_FUN_1014a6db0;
  param_1[0x3f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10018d738(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x1af0);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x1af8) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x1af8) + uVar3 * 8) = 0;
        uVar2 = *(uint *)(param_1 + 0x1af0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x1af8) != 0) {
    *(undefined4 *)(param_1 + 0x1af0) = 0;
  }
  FUN_10001629c(param_1 + 0x28e0,0);
  *(undefined4 *)(param_1 + 0x2910) = 0;
  FUN_100181af8(param_1 + 0x538,&DAT_101d91650);
  return;
}




void thunk_FUN_10018d500(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10018d500_1014604a8;
  FUN_10018d738();
  if (*(char *)((long)param_1 + 0x290f) < '\0') {
    operator_delete((void *)param_1[0x51f]);
  }
  FUN_10001629c(param_1 + 0x51c,1);
  FUN_10064e2bc(param_1 + 0x503);
  FUN_10064e2bc(param_1 + 0x4cf);
  thunk_FUN_100651068(param_1 + 0x4a6);
  thunk_FUN_100651068(param_1 + 0x480);
  thunk_FUN_100651068(param_1 + 0x45a);
  param_1[0x43c] = &PTR_FUN_1014a7108;
  param_1[0x453] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x456);
  FUN_10064e2bc(param_1 + 0x43c);
  param_1[0x41e] = &PTR_FUN_1014a7108;
  param_1[0x435] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x438);
  FUN_10064e2bc(param_1 + 0x41e);
  FUN_10064e2bc(param_1 + 0x405);
  FUN_10064e2bc(param_1 + 0x3ec);
  FUN_10064e2bc(param_1 + 0x3d3);
  FUN_10064e2bc(param_1 + 0x3ba);
  param_1[0x39c] = &PTR_FUN_1014a7108;
  param_1[0x3b3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3b6);
  FUN_10064e2bc(param_1 + 0x39c);
  param_1[0x37e] = &PTR_FUN_1014a7108;
  param_1[0x395] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x398);
  FUN_10064e2bc(param_1 + 0x37e);
  param_1[0x360] = &PTR_FUN_1014a7108;
  param_1[0x377] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37a);
  FUN_10064e2bc(param_1 + 0x360);
  if ((void *)param_1[0x35f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x35f]);
    param_1[0x35f] = 0;
    param_1[0x35e] = 0;
  }
  FUN_10003bd40(param_1 + 0xa7);
  param_1[0x11] = &PTR_FUN_101464e50;
  param_1[0x7c] = &PTR_FUN_1014a6db0;
  param_1[0x93] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x52] = &PTR_FUN_1014a6db0;
  param_1[0x69] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x6c);
  FUN_10064e2bc(param_1 + 0x52);
  param_1[0x28] = &PTR_FUN_1014a6db0;
  param_1[0x3f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10018d7c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10018d500();
  operator_delete(pvVar1);
  return;
}




void FUN_10018d7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined8 param_11)

{
  *(undefined1 *)(param_6 + 0x2925) = 1;
  *(undefined1 *)(param_6 + 0x2926) = param_9;
  *(undefined1 *)(param_6 + 0x2927) = param_10;
  *(undefined4 *)(param_6 + 0x28f0) = param_4;
  *(undefined4 *)(param_6 + 0x28f4) = param_5;
  FUN_100181c18(param_3,param_1,param_2,param_6 + 0x538);
  FUN_10018d854(param_6,param_7,param_8,param_11);
  FUN_10018dc54(param_6);
  return;
}




void FUN_10018d854(long param_1,uint *param_2,undefined8 param_3,ulong param_4)

{
  undefined **ppuVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  undefined **ppuVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  undefined **ppuVar18;
  float fVar19;
  float fVar20;
  long local_c0;
  code *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined4 local_90;
  
  if ((*(char *)(param_1 + 0x2925) != '\0') && (FUN_10018d738(), *param_2 != 0)) {
    FUN_100169740(param_1 + 0x28e0,param_3);
    *(uint *)(param_1 + 0x1e54) =
         *(uint *)(param_1 + 0x1e54) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x2928) << 2;
    uVar8 = DAT_101d91884;
    fVar19 = *(float *)(param_1 + 0x1ac0);
    if (*(byte *)(param_1 + 0x2928) == 0) {
      fVar20 = *(float *)(param_1 + 0x1ac4);
    }
    else {
      fVar19 = fVar19 * 0.5;
      fVar20 = *(float *)(param_1 + 0x1ac4) * 0.5;
    }
    if (*param_2 != 0) {
      uVar15 = 0;
      ppuVar1 = (undefined **)(param_1 + 0x28f8);
      uVar16 = param_4;
      do {
        pvVar10 = operator_new(0x15b8);
        local_c0 = thunk_FUN_100181304(pvVar10,0);
        FUN_1001816d4(*(undefined4 *)(param_1 + 0x1abc),fVar19,fVar20,local_c0,0,
                      *(long *)(param_2 + 2) + uVar15 * 0x10,&DAT_10115a168,&DAT_101dc1cb8,0);
        local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff404040);
        FUN_100181bd0(0x3f800000,local_c0,&local_b8);
        FUN_1001b495c(0,local_c0);
        uVar16 = uVar16 & 0xffffffff00000000 | uVar15;
        local_90 = uVar8;
        local_b8 = FUN_10018e154;
        local_a8 = 0;
        uStack_a0 = 0;
        lStack_b0 = param_1;
        local_98 = uVar16;
        FUN_10001554c(local_c0 + 8,&local_b8);
        FUN_100181bf8(0x3f000000,local_c0,&DAT_10115a168);
        FUN_1001b4c68(local_c0,&DAT_101d91198);
        *(undefined1 *)(local_c0 + 0x15b2) = 0;
        FUN_100181c68(*(float *)(param_1 + 0x28f4) * 80.04);
        lVar11 = local_c0;
        bVar7 = *(byte *)(param_1 + 0x290f);
        uVar12 = (ulong)bVar7;
        sVar3 = *(size_t *)(param_1 + 0x2900);
        if (-1 < (char)bVar7) {
          sVar3 = uVar12;
        }
        sVar4 = DAT_101d911a0;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          sVar4 = (ulong)DAT_101d911a8._7_1_;
        }
        if (sVar3 == sVar4) {
          ppuVar18 = (undefined **)*ppuVar1;
          ppuVar5 = ppuVar18;
          if (-1 < (char)bVar7) {
            ppuVar5 = ppuVar1;
          }
          pbVar13 = DAT_101d91198;
          if (-1 < (char)DAT_101d911a8._7_1_) {
            pbVar13 = (byte *)&DAT_101d91198;
          }
          if ((char)bVar7 < '\0') {
            if ((sVar3 == 0) || (iVar9 = _memcmp(ppuVar5,pbVar13,sVar3), iVar9 == 0))
            goto LAB_10018db0c;
          }
          else {
            if (sVar3 == 0) {
LAB_10018db0c:
              ppuVar18 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
              goto LAB_10018db14;
            }
            uVar17 = (uint)ppuVar18;
            pbVar14 = (byte *)(param_1 + 0x28f9);
            ppuVar18 = ppuVar1;
            if ((uint)*pbVar13 == (uVar17 & 0xff)) {
              do {
                uVar12 = uVar12 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar12 == 0) goto LAB_10018db0c;
                bVar6 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar6 == *pbVar13);
              goto LAB_10018daf0;
            }
          }
        }
        else {
LAB_10018daf0:
          ppuVar18 = ppuVar1;
          if (-1 < (char)bVar7) goto LAB_10018db18;
LAB_10018db14:
          ppuVar18 = (undefined **)*ppuVar18;
        }
LAB_10018db18:
        FUN_100651594(lVar11 + 0x718,ppuVar18,&DAT_10115a168);
        FUN_100181b28(local_c0,0);
        FUN_100181b5c(0x41200000,0,local_c0);
        *(uint *)(local_c0 + 0x4f4) = *(uint *)(local_c0 + 0x4f4) & 0xfffffffb;
        FUN_10018e15c(param_1);
        FUN_10018e1d4(param_1 + 0x1af0,&local_c0);
        lVar11 = param_1 + 0x2818;
        if ((((*(char *)(param_1 + 0x2928) == '\0') ||
             (lVar11 = param_1 + 0x1e98, (long)uVar15 < (long)*(int *)(param_1 + 0x2914))) ||
            (lVar2 = (long)*(int *)(param_1 + 0x2918) + (long)*(int *)(param_1 + 0x2914),
            lVar11 = param_1 + 0x1f60, (long)uVar15 < lVar2)) ||
           (lVar11 = param_1 + 0x2028,
           (long)uVar15 < (long)*(int *)(param_1 + 0x291c) + (long)(int)lVar2)) {
          FUN_100642bd8(lVar11,local_c0,1);
        }
        if (uVar15 < *(uint *)(param_1 + 0x1af0)) {
          FUN_100181be0(0,*(undefined8 *)(*(long *)(param_1 + 0x1af8) + uVar15 * 8),&DAT_10115a170);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *param_2);
    }
    if ((param_4 & 1) == 0) {
      FUN_10018e340(param_1,0,0);
    }
    FUN_10018e440(param_1,1);
  }
  return;
}




void FUN_10018dc54(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 *local_70 [2];
  
  lVar1 = param_1 + 0x538;
  FUN_100181c68(*(float *)(param_1 + 0x28f4) * 92.0,lVar1);
  FUN_10018e15c(param_1);
  uVar13 = FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(uVar13,param_1 + 0x88);
  fVar10 = (float)FUN_10064e3cc(lVar1);
  fVar11 = 2.0;
  FUN_10064e47c(fVar10 + -4.0,param_1 + 0x1b00);
  FUN_10064259c(lVar1);
  if (*(float *)(param_1 + 0x1b44) != fVar11 * 0.5) {
    *(float *)(param_1 + 0x1b44) = fVar11 * 0.5;
    FUN_1000200a0(param_1 + 0x1b00);
  }
  lVar8 = param_1 + 0x1bf0;
  fVar10 = (float)FUN_10064e3cc(lVar1);
  fVar11 = (float)FUN_100652e60(lVar8);
  fVar10 = (fVar10 - fVar11) * 0.5 + -20.0;
  if ((*(float *)(param_1 + 0x1c30) != fVar10) || (*(float *)(param_1 + 0x1c34) != 0.0)) {
    *(float *)(param_1 + 0x1c30) = fVar10;
    *(undefined4 *)(param_1 + 0x1c34) = 0;
    FUN_1000200a0(lVar8);
  }
  local_70[0] = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1bf0) + 0x28))(lVar8,local_70);
  pcVar2 = (char *)(param_1 + 0x2928);
  cVar6 = *pcVar2;
  fVar10 = *(float *)(param_1 + 0x1ac0);
  if (cVar6 == '\0') {
    fVar11 = *(float *)(param_1 + 0x1ac4);
  }
  else {
    fVar10 = fVar10 * 0.333;
    fVar11 = *(float *)(param_1 + 0x1ac4) * 0.333;
  }
  if (*(int *)(param_1 + 0x1af0) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x1af8);
    do {
      FUN_100181c18(*(undefined4 *)(param_1 + 0x1abc),fVar10,fVar11,*puVar9);
      plVar7 = (long *)*puVar9;
      fVar12 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
      if (*(float *)(plVar7 + 8) != fVar12 * 0.5) {
        *(float *)(plVar7 + 8) = fVar12 * 0.5;
        FUN_1000200a0(plVar7);
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined8 *)
                       (*(long *)(param_1 + 0x1af8) + (ulong)*(uint *)(param_1 + 0x1af0) * 8));
    cVar6 = *pcVar2;
  }
  if (cVar6 != '\0') {
    FUN_10064fc74(0,0,0,local_70);
    FUN_100650064(param_1 + 0x1e98,local_70);
    (**(code **)(*(long *)(param_1 + 0x1e98) + 0x90))(param_1 + 0x1e98);
    FUN_10064fc74(0,0,0,local_70);
    FUN_100650064(param_1 + 0x1f60,local_70);
    (**(code **)(*(long *)(param_1 + 0x1f60) + 0x90))(param_1 + 0x1f60);
    FUN_10064fc74(0,0,0,local_70);
    FUN_100650064(param_1 + 0x2028,local_70);
    (**(code **)(*(long *)(param_1 + 0x2028) + 0x90))(param_1 + 0x2028);
    lVar8 = param_1 + 0x1dd0;
    fVar11 = 0.0;
    FUN_10064fc74(0,0,0,local_70);
    FUN_100650064(lVar8,local_70);
    (**(code **)(*(long *)(param_1 + 0x1dd0) + 0x90))(lVar8);
    FUN_10064e3cc(lVar8);
    fVar10 = fVar11;
    FUN_10064e3cc(lVar1);
    fVar11 = fVar11 + fVar10 * -0.5;
    lVar3 = param_1 + 0x21e0;
    fVar10 = fVar11;
    FUN_10064e47c(0x40000000,lVar3);
    uVar4 = *(uint *)(param_1 + 0x2264);
    if ((uVar4 & 0x7f80) != 0x4c80) {
      *(uint *)(param_1 + 0x2264) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar3);
    }
    fVar14 = *(float *)(param_1 + 0x1e14);
    FUN_10064e3cc(lVar8);
    fVar12 = fVar10 * 0.5;
    FUN_10064e3cc(lVar1);
    fVar10 = fVar14 + fVar12 + fVar10 * 0.25;
    if (*(float *)(param_1 + 0x2224) != fVar10) {
      *(float *)(param_1 + 0x2224) = fVar10;
      FUN_1000200a0(lVar3);
    }
    lVar3 = param_1 + 0x20f0;
    FUN_10064e47c(0x40000000,lVar3);
    uVar4 = *(uint *)(param_1 + 0x2174);
    if ((uVar4 & 0x7f80) != 0x4c80) {
      *(uint *)(param_1 + 0x2174) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar3);
    }
    fVar12 = *(float *)(param_1 + 0x1e14);
    FUN_10064e3cc(lVar8);
    fVar10 = fVar11 * 0.5;
    FUN_10064e3cc(lVar1);
    fVar10 = fVar12 + fVar10 + fVar11 * 0.25;
    if (*(float *)(param_1 + 0x2134) != fVar10) {
      *(float *)(param_1 + 0x2134) = fVar10;
      FUN_1000200a0(lVar3);
    }
    if (0 < *(int *)(param_1 + 0x2920)) {
      lVar8 = 0;
      do {
        FUN_10064e68c(0,0x41200000,*(undefined8 *)(param_1 + 0x2660 + lVar8 * 8),4);
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x2920));
    }
  }
  FUN_10064fc74(0,0,0,local_70);
  FUN_100650064(param_1 + 0x2818,local_70);
  (**(code **)(*(long *)(param_1 + 0x2818) + 0x90))(param_1 + 0x2818);
  lVar8 = param_1 + 0x2678;
  fVar10 = 0.0;
  FUN_10064e47c(0,0,lVar8);
  iVar5 = *(int *)(param_1 + 0x1af0);
  if (iVar5 != 0) {
    if (*pcVar2 == '\0') {
      uVar13 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x1af8) + 0x48))();
      plVar7 = *(long **)(*(long *)(param_1 + 0x1af8) + (ulong)(iVar5 - 1) * 8);
      fVar11 = *(float *)((long)plVar7 + 0x44);
      (**(code **)(*plVar7 + 0x48))();
    }
    else {
      uVar13 = FUN_10064e3cc(param_1 + 0x1dd0);
      fVar11 = *(float *)(param_1 + 0x1e14);
      FUN_10064e3cc(param_1 + 0x1dd0);
    }
    FUN_10064e47c(uVar13,fVar10 + fVar11,lVar8);
  }
  FUN_10064e5ec(0,0,lVar8,0,lVar1,3);
  return;
}




void FUN_10018e154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10018f180(param_1,param_2,param_5);
  return;
}




void FUN_10018e15c(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x2926) != '\0') {
    fVar1 = (float)FUN_10064e3cc(param_1 + 0x538);
    fVar2 = (float)FUN_10065317c(param_1 + 0x1bf0);
    FUN_10065179c((fVar1 + -36.0) - fVar2,0,0x3f800000,param_1 + 0xc50);
    return;
  }
  return;
}




void FUN_10018e1d4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10018f1a0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10018e254(long param_1,uint param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((-1 < (int)param_2) && (param_2 < *(uint *)(param_1 + 0x1af0))) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x1af8) + (ulong)param_2 * 8);
    if (param_3 == 0) {
      FUN_100181be0(0,uVar3,&DAT_10115a170);
      return;
    }
    FUN_100181be0(0x3e4ccccd,uVar3,&DAT_10115a168);
    if (*(char *)(param_1 + 0x2928) != '\0') {
      lVar1 = param_1 + 0x1ce0;
      iVar2 = FUN_100642d08(lVar1);
      if (iVar2 != 0) {
        FUN_1006423ec(lVar1,1);
      }
      plVar4 = *(long **)(*(long *)(param_1 + 0x1af8) + (ulong)param_2 * 8);
      (**(code **)(*plVar4 + 0x78))(plVar4,lVar1,1);
      FUN_10064e5ec(0xc1700000,0,lVar1,5,
                    *(undefined8 *)(*(long *)(param_1 + 0x1af8) + (ulong)param_2 * 8),5);
      return;
    }
  }
  return;
}




bool FUN_10018e340(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_60 [32];
  
  uVar1 = *(uint *)(param_1 + 0x1af0);
  uVar4 = (uint)param_2;
  if (uVar4 < uVar1) {
    uVar2 = *(uint *)(param_1 + 0x2910);
    if ((-1 < (int)uVar2) && (uVar2 < uVar1)) {
      FUN_100181be0(0,*(undefined8 *)(*(long *)(param_1 + 0x1af8) + (ulong)uVar2 * 8),&DAT_10115a170
                   );
    }
    *(uint *)(param_1 + 0x2910) = uVar4;
    FUN_10018e254(param_1,param_2,1);
    uVar3 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1af8) +
                                   (ulong)*(uint *)(param_1 + 0x2910) * 8) + 0x7e8);
    FUN_100181af8(param_1 + 0x538,uVar3);
    FUN_10018dc54(param_1);
    if (*(char *)(param_1 + 0x2924) != '\0') {
      FUN_10018e440(param_1,0);
    }
    if ((param_3 & 1) == 0) {
      uVar3 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
      FUN_100644aec(auStack_60,uVar3,*(undefined4 *)(param_1 + 0x2910));
      FUN_100644c34(param_1,auStack_60,1);
    }
  }
  return uVar4 < uVar1;
}




void FUN_10018e440(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 local_80;
  float local_7c;
  
  pcVar1 = (char *)(param_3 + 0x2924);
  if (*(int *)(param_3 + 0x1af0) != 0) {
    plVar6 = *(long **)(*(long *)(param_3 + 0x1af8) + (ulong)(*(int *)(param_3 + 0x1af0) - 1) * 8);
    if (plVar6 != (long *)0x0) {
      lVar2 = param_3 + 0x2818;
      FUN_100642324(lVar2);
      fVar8 = *(float *)((long)plVar6 + 0x44);
      (**(code **)(*plVar6 + 0x48))(plVar6);
      if (*(char *)(param_3 + 0x2928) == '\0') {
        fVar8 = fVar8 + param_2 * 0.5;
      }
      else {
        fVar8 = *(float *)(param_3 + 0x1e14);
        FUN_10064e3cc(param_3 + 0x1dd0);
        fVar8 = param_2 + fVar8;
      }
      param_2 = -10.0;
      fVar8 = -10.0 - fVar8;
      if (param_4 == 0) {
        uVar7 = FUN_1000b50a8();
        local_80 = *(undefined4 *)(param_3 + 0x2858);
        local_7c = fVar8;
        FUN_10063fb90(uVar7,&local_80);
        FUN_10063f0e8(0x3dcccccd,uVar7);
        FUN_100642b14(lVar2,uVar7);
      }
      else if (*(float *)(param_3 + 0x285c) != fVar8) {
        *(float *)(param_3 + 0x285c) = fVar8;
        FUN_1000200a0(lVar2);
      }
    }
    FUN_10018ee7c(param_3,0);
  }
  lVar2 = param_3 + 0x88;
  FUN_100642324(lVar2);
  lVar3 = param_3 + 0x1b00;
  FUN_100642324(lVar3);
  if (param_4 == 0) {
    uVar7 = FUN_10018eed4();
    local_80 = FUN_10064e3cc(param_3 + 0x538);
    local_7c = param_2;
    FUN_100640428(uVar7,lVar2,&local_80);
    FUN_10063f0e8(0x3dcccccd,uVar7);
    uVar5 = FUN_1000b50a8();
    local_80 = *(undefined4 *)(param_3 + 0x578);
    local_7c = 0.0;
    FUN_10063fb90(uVar5,&local_80);
    FUN_10063f0e8(0x3dcccccd,uVar5);
    uVar5 = FUN_100047714();
    FUN_10063fce0(0x3f19999a);
    FUN_10063f0e8(0x3dcccccd,uVar5);
    uVar5 = FUN_10001f4d4();
    FUN_10063f2a4(uVar5,uVar7);
    FUN_100642b14(lVar2,uVar5);
    uVar7 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_10063f0e8(0x3dcccccd,uVar7);
    FUN_100642b14(param_3 + 0x1ce0,uVar7);
    uVar7 = FUN_100047714();
    FUN_10063f0e8(0x3dcccccd);
    FUN_10063fce0(0,uVar7);
    FUN_100642b14(lVar3,uVar7);
  }
  else {
    uVar7 = FUN_10064e3cc(param_3 + 0x538);
    FUN_10064e3cc(param_3 + 0x538);
    FUN_10064e47c(uVar7,lVar2);
    if ((*(float *)(param_3 + 200) != *(float *)(param_3 + 0x578)) ||
       (*(float *)(param_3 + 0xcc) != 0.0)) {
      *(float *)(param_3 + 200) = *(float *)(param_3 + 0x578);
      *(undefined4 *)(param_3 + 0xcc) = 0;
      FUN_1000200a0(lVar2);
    }
    if ((*(uint *)(param_3 + 0x1b84) & 0x7f80) != 0) {
      *(uint *)(param_3 + 0x1b84) = *(uint *)(param_3 + 0x1b84) & 0xffff807f;
      FUN_1000200a0(lVar3);
    }
  }
  cVar4 = *pcVar1;
  *pcVar1 = '\0';
  if (cVar4 != '\0') {
    uVar7 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
    FUN_100644aec(&local_80,uVar7,*pcVar1);
    FUN_100644c34(param_3,&local_80,1);
  }
  return;
}




undefined8 FUN_10018e71c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x2910) == (int)param_2) && ((param_3 & 1) == 0)) {
    FUN_10018e440(param_1,0);
    return 1;
  }
  uVar1 = FUN_10018e340(param_1,param_2,param_4);
  return uVar1;
}




void FUN_10018e754(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_10018e7c0();
  if (((int)(uint)uVar1 < 0) || (*(uint *)(param_1 + 0x35e) <= (uint)uVar1)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf8);
    uVar1 = 0;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010018e7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,param_3,param_4);
  return;
}




ulong FUN_10018e7c0(long param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  size_t sVar7;
  size_t sVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  
  uVar3 = *(uint *)(param_1 + 0x28e0);
  if (uVar3 != 0) {
    uVar11 = 0;
    bVar4 = param_2[0x17];
    pcVar2 = *(char **)param_2;
    sVar7 = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar4) {
      pcVar2 = param_2;
      sVar7 = (ulong)bVar4;
    }
    lVar12 = *(long *)(param_1 + 0x28e8);
    do {
      pcVar10 = (char *)(lVar12 + uVar11 * 0x18);
      bVar5 = pcVar10[0x17];
      sVar6 = *(size_t *)(pcVar10 + 8);
      if (-1 < (char)bVar5) {
        sVar6 = (ulong)bVar5;
      }
      if (sVar7 == sVar6) {
        pcVar1 = *(char **)pcVar10;
        if (-1 < (char)bVar5) {
          pcVar1 = pcVar10;
        }
        sVar6 = (ulong)bVar4;
        pcVar10 = param_2;
        sVar8 = sVar7;
        if ((char)bVar4 < '\0') {
          if (sVar7 == 0) {
            return uVar11;
          }
          iVar9 = _memcmp(pcVar2,pcVar1,sVar7);
          if (iVar9 == 0) {
            return uVar11;
          }
        }
        else {
          while( true ) {
            if (sVar8 == 0) {
              return uVar11;
            }
            if (*pcVar10 != *pcVar1) break;
            pcVar1 = pcVar1 + 1;
            sVar6 = sVar6 - 1;
            pcVar10 = pcVar10 + 1;
            sVar8 = sVar6;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
  }
  return 0xffffffff;
}




undefined8 * FUN_10018e8a8(long param_1)

{
  if ((*(uint *)(param_1 + 0x28e0) != 0) &&
     (*(uint *)(param_1 + 0x2910) < *(uint *)(param_1 + 0x28e0))) {
    return (undefined8 *)(*(long *)(param_1 + 0x28e8) + (ulong)*(uint *)(param_1 + 0x2910) * 0x18);
  }
  return &DAT_101d91198;
}




void FUN_10018e8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 *local_58;
  
  lVar1 = param_4 + 0x538;
  FUN_100181c18(lVar1);
  FUN_10018e15c(param_4);
  FUN_100642324(param_4 + 0x88);
  uVar7 = FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  FUN_10064e47c(uVar7,param_4 + 0x88);
  FUN_100642324(param_4 + 0x1b00);
  fVar5 = (float)FUN_10064e3cc(lVar1);
  FUN_10064e47c(fVar5 + -4.0,0x40000000,param_4 + 0x1b00);
  lVar2 = param_4 + 0x1bf0;
  fVar5 = (float)FUN_10064e3cc(lVar1);
  fVar6 = (float)FUN_100652e60(lVar2);
  fVar5 = (fVar5 - fVar6) * 0.5 + -20.0;
  if ((*(float *)(param_4 + 0x1c30) != fVar5) || (*(float *)(param_4 + 0x1c34) != 0.0)) {
    *(float *)(param_4 + 0x1c30) = fVar5;
    *(undefined4 *)(param_4 + 0x1c34) = 0;
    FUN_1000200a0(lVar2);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_4 + 0x1bf0) + 0x28))(lVar2,&local_58);
  uVar3 = (ulong)*(uint *)(param_4 + 0x1af0);
  if (*(uint *)(param_4 + 0x1af0) != 0) {
    uVar4 = 0;
    do {
      if (*(long *)(*(long *)(param_4 + 0x1af8) + uVar4 * 8) != 0) {
        FUN_100181c18(param_1,param_2,param_3);
        FUN_10018ea74(param_4,*(undefined8 *)(*(long *)(param_4 + 0x1af8) + uVar4 * 8));
        uVar3 = (ulong)*(uint *)(param_4 + 0x1af0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_10018dc54(param_4);
  if (*(char *)(param_4 + 0x2924) == '\0') {
    FUN_10018e440(param_4,1);
  }
  else {
    FUN_10018eaf4(param_4,1);
  }
  return;
}




void FUN_10018ea74(long param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x2927) != '\0') {
    fVar1 = (float)FUN_10064eb7c(param_2 + 0xe3,0,param_2,0);
    fVar2 = (float)(**(code **)(*param_2 + 0x48))(param_2);
    FUN_10065179c(fVar2 + ABS(fVar1) * -2.0,0,0x3f800000,param_2 + 0xe3);
    return;
  }
  return;
}




void FUN_10018eaf4(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a0;
  float local_9c;
  
  FUN_10018dc54();
  if (*(int *)(param_3 + 0x1af0) != 0) {
    lVar2 = param_3 + 0x2818;
    FUN_100642324(lVar2);
    if (param_4 == 0) {
      uVar6 = FUN_1000b50a8();
      local_a0 = *(float *)(param_3 + 0x2858);
      local_9c = 0.0;
      FUN_10063fb90(uVar6,&local_a0);
      FUN_10063f0e8(0x3dcccccd,uVar6);
      FUN_100642b14(lVar2,uVar6);
    }
    else if (*(float *)(param_3 + 0x285c) != 0.0) {
      *(undefined4 *)(param_3 + 0x285c) = 0;
      FUN_1000200a0(lVar2);
    }
    lVar2 = param_3 + 0x88;
    FUN_100642324(lVar2);
    lVar3 = param_3 + 0x1b00;
    FUN_100642324(lVar3);
    fVar10 = *(float *)(param_3 + 0x26bc);
    FUN_10064e3cc(param_3 + 0x2678);
    fVar11 = fVar10 + 10.0 + param_2;
    lVar1 = param_3 + 0x538;
    FUN_10064e3cc(lVar1);
    fVar10 = (fVar11 - param_2) * 0.5;
    uVar8 = FUN_10064e3cc(lVar2);
    if (param_4 == 0) {
      if (*(char *)(param_3 + 0x2928) == '\0') {
        fVar12 = *(float *)(param_3 + 200);
      }
      else {
        fVar10 = (float)FUN_10064e3cc(param_3 + 0x2678);
        fVar9 = 10.0;
        uVar8 = (ulong)(uint)(fVar10 + 10.0);
        fVar11 = *(float *)(param_3 + 0x26bc);
        FUN_10064e3cc(param_3 + 0x1dd0);
        fVar11 = fVar11 + -4.0 + fVar9;
        fVar12 = *(float *)(param_3 + 0x578);
        fVar7 = (float)FUN_10064e3cc(lVar1);
        fVar12 = fVar12 + ((fVar10 + 10.0) - fVar7) * 0.5;
        FUN_10064e3cc(lVar1);
        fVar10 = 0.0;
        FUN_10064e3cc(lVar1);
        fVar10 = fVar10 - (fVar9 * 0.5 + fVar11 * -0.5);
      }
      uVar6 = FUN_10018eed4();
      local_a0 = (float)uVar8;
      local_9c = fVar11;
      FUN_100640428(uVar6,lVar2,&local_a0);
      FUN_10063f0e8(0x3dcccccd,uVar6);
      uVar5 = FUN_1000b50a8();
      local_a0 = fVar12;
      local_9c = fVar10;
      FUN_10063fb90(uVar5,&local_a0);
      FUN_10063f0e8(0x3dcccccd,uVar5);
      uVar5 = FUN_100047714();
      FUN_10063fce0(0x3f800000);
      FUN_10063f0e8(0x3dcccccd,uVar5);
      uVar5 = FUN_10001f4d4();
      FUN_10063f2a4(uVar5,uVar6);
      FUN_100642b14(lVar2,uVar5);
      uVar6 = FUN_100047714();
      FUN_10063fce0(0x3f19999a);
      FUN_10063f0e8(0x3dcccccd,uVar6);
      FUN_100642b14(param_3 + 0x1ce0,uVar6);
      uVar6 = FUN_100047714();
      FUN_10063f0e8(0x3dcccccd);
      FUN_10063fce0(0x3f4ccccd,uVar6);
      FUN_100642b14(lVar3,uVar6);
    }
    else {
      FUN_10064e47c(uVar8,fVar11,lVar2);
      if ((*(float *)(param_3 + 200) != *(float *)(param_3 + 0x578)) ||
         (*(float *)(param_3 + 0xcc) != fVar10)) {
        *(float *)(param_3 + 200) = *(float *)(param_3 + 0x578);
        *(float *)(param_3 + 0xcc) = fVar10;
        FUN_1000200a0(lVar2);
      }
      uVar4 = *(uint *)(param_3 + 0x1b84);
      if ((uVar4 & 0x7f80) != 0x6600) {
        *(uint *)(param_3 + 0x1b84) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
        FUN_1000200a0(lVar3);
      }
    }
    *(undefined1 *)(param_3 + 0x2924) = 1;
    uVar6 = FUN_100644a94("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
    FUN_100644aec(&local_a0,uVar6,*(undefined1 *)(param_3 + 0x2924));
    FUN_100644c34(param_3,&local_a0,1);
    FUN_10018ee7c(param_3,1);
  }
  return;
}




undefined1  [16] FUN_10018ee40(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = FUN_10064259c(param_1 + 0x538);
  uVar2 = auVar1._8_8_;
  FUN_10064259c(param_1 + 0x538);
  auVar1._8_8_ = uVar2;
  return auVar1;
}




void FUN_10018ee7c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x1af0);
  if (*(uint *)(param_1 + 0x1af0) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x1af8) + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_1001b4c0c(lVar1,param_2);
        uVar2 = (ulong)*(uint *)(param_1 + 0x1af0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}




undefined8 FUN_10018eed4(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_1006403f0();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




void FUN_10018ef5c(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  FUN_1001bdb78(param_3 + 0x88,&DAT_10115a164);
  FUN_1001bdb04(param_2,param_3 + 0x88,&DAT_10115a168);
  return;
}




void FUN_10018efa4(long param_1)

{
  FUN_100181b80(param_1 + 0x538);
  return;
}




void FUN_10018efac(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x8dc) = *(uint *)(param_1 + 0x8dc) & 0xfffffffb | uVar1;
  return;
}




void FUN_10018efcc(long param_1,undefined8 param_2)

{
  FUN_100181c30(param_1 + 0x538);
  FUN_10018e15c(param_1);
  FUN_10018f004(param_1,param_2);
  return;
}




void FUN_10018f004(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48);
  std::string::operator=((string *)(param_1 + 0x28f8),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x1af0);
  if (*(uint *)(param_1 + 0x1af0) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 0x1af8) + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_100181c30(lVar1,param_2);
        FUN_10018ea74(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1af8) + uVar3 * 8));
        uVar2 = (ulong)*(uint *)(param_1 + 0x1af0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}




void FUN_10018f09c(long param_1,ulong param_2)

{
  if ((*(char *)(param_1 + 0x2924) != '\0') && ((param_2 & 1) == 0)) {
    FUN_10018e440(param_1,0);
  }
  FUN_1001b4c0c(param_1 + 0x538,param_2);
  return;
}




void FUN_10018f0e0(long param_1,undefined1 param_2,undefined1 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  *(undefined1 *)(param_1 + 0x2926) = param_2;
  *(undefined1 *)(param_1 + 0x2927) = param_3;
  FUN_10018e15c();
  uVar1 = (ulong)*(uint *)(param_1 + 0x1af0);
  if (*(uint *)(param_1 + 0x1af0) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x1af8) + uVar2 * 8) != 0) {
        FUN_10018ea74(param_1);
        uVar1 = (ulong)*(uint *)(param_1 + 0x1af0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_10018f140(long param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + (long)param_2 * 4 + 0x2914) = param_3;
  return;
}




void FUN_10018f14c(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (long)param_2 * 8 + 0x2660);
                    /* WARNING: Could not recover jumptable at 0x00010018f160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x138))(plVar1,param_3);
  return;
}




void FUN_10018f164(long param_1)

{
  if (*(char *)(param_1 + 0x2924) != '\0') {
    FUN_10018e440(param_1,0);
    return;
  }
  FUN_10018eaf4(param_1,0);
  return;
}




void FUN_10018f180(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x2910) == (int)param_3) {
    FUN_10018e440(param_1,0);
    return;
  }
  FUN_10018e340(param_1,param_3,0);
  return;
}




void FUN_10018f1a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_10018f21c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001b4648();
  *puVar1 = &PTR_FUN_1014605c8;
  thunk_FUN_1001a66f4(puVar1 + 0x4d);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x4d,1);
  FUN_1001b4964(param_1,1);
  return param_1;
}




void FUN_10018f27c(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = param_1 + 0x268;
  FUN_1001a679c(lVar1);
  *(undefined1 *)(param_1 + 0x360) = 1;
  FUN_1001a6880((float)param_3,(float)param_4,lVar1);
  if ((~*(uint *)(param_1 + 0x2ec) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) | 0x7f80;
  FUN_1000200a0(lVar1);
  return;
}




void FUN_10018f2f8(long param_1)

{
  FUN_1001a6784(param_1 + 0x268);
  return;
}




void FUN_10018f300(long param_1)

{
  FUN_1001a678c(param_1 + 0x268);
  return;
}




void FUN_10018f308(long param_1)

{
  FUN_1001a6794(param_1 + 0x268);
  return;
}




void FUN_10018f310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014605c8;
  param_1[0x4d] = &PTR_FUN_101462f50;
  param_1[0x5e] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0x34f) < '\0') {
    operator_delete((void *)param_1[0x67]);
  }
  FUN_1010b7434(param_1 + 0x61);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void FUN_10018f378(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014605c8;
  param_1[0x4d] = &PTR_FUN_101462f50;
  param_1[0x5e] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0x34f) < '\0') {
    operator_delete((void *)param_1[0x67]);
  }
  FUN_1010b7434(param_1 + 0x61);
  FUN_10064221c(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_10018f3e4(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 *local_68;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100031c68_101460750;
  puVar1 = puVar1 + 0x17;
  FUN_1006421a8(puVar1);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x28);
  thunk_FUN_100652c08(param_1 + 0x46);
  thunk_FUN_100652c08(param_1 + 100);
  thunk_FUN_100652c08(param_1 + 0x82);
  thunk_FUN_100652c08(param_1 + 0xa0);
  thunk_FUN_100652c08(param_1 + 0xbe);
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  *(undefined8 *)((long)param_1 + 0x6ec) = DAT_101dc1cb8;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x71c) = 0;
  *(undefined1 *)((long)param_1 + 0x71e) = 1;
  thunk_FUN_1001ceb64(param_1 + 0xe4,param_2);
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3fe66666;
  bVar2 = 2;
  if ((int)param_2 == 0) {
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + 0x824) = *(byte *)((long)param_1 + 0x824) & 0xf8 | bVar2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe4,1);
  FUN_100642bd8(puVar1,param_1 + 0xbe,1);
  FUN_100642bd8(puVar1,param_1 + 0x28,1);
  FUN_100642bd8(puVar1,param_1 + 0x46,1);
  FUN_100642bd8(puVar1,param_1 + 100,1);
  FUN_100642bd8(puVar1,param_1 + 0x82,1);
  FUN_100642bd8(puVar1,param_1 + 0xa0,1);
  FUN_10064e47c(0x43300000,0x43300000,param_1);
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_68);
  return param_1;
}




long * thunk_FUN_10018f3e4(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 *puStack_68;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_100031c68_101460750;
  puVar1 = puVar1 + 0x17;
  FUN_1006421a8(puVar1);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x28);
  thunk_FUN_100652c08(param_1 + 0x46);
  thunk_FUN_100652c08(param_1 + 100);
  thunk_FUN_100652c08(param_1 + 0x82);
  thunk_FUN_100652c08(param_1 + 0xa0);
  thunk_FUN_100652c08(param_1 + 0xbe);
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  *(undefined8 *)((long)param_1 + 0x6ec) = DAT_101dc1cb8;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x71c) = 0;
  *(undefined1 *)((long)param_1 + 0x71e) = 1;
  thunk_FUN_1001ceb64(param_1 + 0xe4,param_2);
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x3fe66666;
  bVar2 = 2;
  if ((int)param_2 == 0) {
    bVar2 = 0;
  }
  *(byte *)((long)param_1 + 0x824) = *(byte *)((long)param_1 + 0x824) & 0xf8 | bVar2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe4,1);
  FUN_100642bd8(puVar1,param_1 + 0xbe,1);
  FUN_100642bd8(puVar1,param_1 + 0x28,1);
  FUN_100642bd8(puVar1,param_1 + 0x46,1);
  FUN_100642bd8(puVar1,param_1 + 100,1);
  FUN_100642bd8(puVar1,param_1 + 0x82,1);
  FUN_100642bd8(puVar1,param_1 + 0xa0,1);
  FUN_10064e47c(0x43300000,0x43300000,param_1);
  puStack_68 = &DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&puStack_68);
  return param_1;
}




void FUN_10018f600(long param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined **ppuVar5;
  bool bVar6;
  byte bVar7;
  
  bVar7 = 2;
  if (param_2 == 0) {
    bVar7 = 0;
  }
  bVar7 = *(byte *)(param_1 + 0x824) & 0xfd | bVar7;
  *(byte *)(param_1 + 0x824) = bVar7;
  lVar1 = param_1 + 0x140;
  if (*(long *)(param_1 + 0x210) != 0) {
    FUN_100652d8c(lVar1);
    bVar7 = *(byte *)(param_1 + 0x824);
  }
  bVar6 = (bVar7 & 2) != 0;
  ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  pcVar2 = "hud_store_item_node_highlighted";
  pcVar3 = "focus_indicator_ring";
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_100652cac(lVar1,*ppuVar5,pcVar4);
  bVar6 = false;
  if ((*(float *)(param_1 + 400) == 0.5) && (bVar6 = false, !NAN(*(float *)(param_1 + 0x194)))) {
    bVar6 = *(float *)(param_1 + 0x194) == 0.5;
  }
  if (!bVar6) {
    *(undefined1 **)(param_1 + 400) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 0x230;
  if (*(long *)(param_1 + 0x300) != 0) {
    FUN_100652d8c(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) != 0;
  ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_100652cac(lVar1,*ppuVar5,pcVar4);
  if ((*(float *)(param_1 + 0x280) != 0.5) || (*(float *)(param_1 + 0x284) != 0.5)) {
    *(undefined1 **)(param_1 + 0x280) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 800;
  if (*(long *)(param_1 + 0x3f0) != 0) {
    FUN_100652d8c(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) != 0;
  ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_100652cac(lVar1,*ppuVar5,pcVar4);
  if ((*(float *)(param_1 + 0x370) != 0.5) || (*(float *)(param_1 + 0x374) != 0.5)) {
    *(undefined1 **)(param_1 + 0x370) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 0x410;
  if (*(long *)(param_1 + 0x4e0) != 0) {
    FUN_100652d8c(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) != 0;
  ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  pcVar4 = pcVar3;
  if (bVar6) {
    pcVar4 = pcVar2;
  }
  FUN_100652cac(lVar1,*ppuVar5,pcVar4);
  if ((*(float *)(param_1 + 0x460) != 0.5) || (*(float *)(param_1 + 0x464) != 0.5)) {
    *(undefined1 **)(param_1 + 0x460) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 0x500;
  if (*(long *)(param_1 + 0x5d0) != 0) {
    FUN_100652d8c(lVar1);
  }
  bVar6 = (*(byte *)(param_1 + 0x824) & 2) != 0;
  ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  if (bVar6) {
    pcVar3 = pcVar2;
  }
  FUN_100652cac(lVar1,*ppuVar5,pcVar3);
  if ((*(float *)(param_1 + 0x550) != 0.5) || (*(float *)(param_1 + 0x554) != 0.5)) {
    *(undefined1 **)(param_1 + 0x550) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  lVar1 = param_1 + 0x5f0;
  if (*(long *)(param_1 + 0x6c0) != 0) {
    FUN_100652d8c(lVar1);
  }
  ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if ((*(byte *)(param_1 + 0x824) & 2) != 0) {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  FUN_100652cac(lVar1,*ppuVar5,"tutorial_arrow");
  if ((*(float *)(param_1 + 0x640) != 0.5) || (*(float *)(param_1 + 0x644) != 0.5)) {
    *(undefined1 **)(param_1 + 0x640) = &DAT_3f0000003f000000;
    FUN_1000200a0(lVar1);
  }
  *(byte *)(param_1 + 0x824) = *(byte *)(param_1 + 0x824) | 4;
  return;
}




undefined8 FUN_10018f89c(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_10063fdf4();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




void FUN_10018f924(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_48;
  
  lVar1 = param_1 + 800;
  FUN_100642324(lVar1);
  if ((*(float *)(param_1 + 0x368) != 0.06) || (*(float *)(param_1 + 0x36c) != 0.06)) {
    *(undefined8 *)(param_1 + 0x368) = 0x3d75c28f3d75c28f;
    FUN_1000200a0(lVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x3a4);
  if ((uVar5 & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x3a4) = uVar5 & 0xffff807f | 0x3f80;
    FUN_1000200a0(lVar1);
    uVar5 = *(uint *)(param_1 + 0x3a4);
  }
  *(uint *)(param_1 + 0x3a4) = uVar5 & 0xfffffffb;
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(0);
  FUN_100642b14(lVar1,uVar2);
  uVar2 = FUN_10004767c();
  FUN_100642b14(lVar1,uVar2);
  uVar2 = FUN_10001f424();
  local_48 = 0x40547ae140547ae1;
  FUN_10064025c(uVar2,&local_48);
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.27,uVar2);
  FUN_10063f130(uVar2,FUN_10001f160);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.1,uVar3);
  FUN_10063f130(uVar3,FUN_10001f160);
  uVar4 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.17,uVar4);
  FUN_10063f130(uVar4,FUN_10001f160);
  uVar4 = FUN_10008cac4();
  FUN_10063f614(uVar4,uVar3);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b14(lVar1,uVar3);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.33);
  FUN_100642b14(lVar1,uVar2);
  return;
}




void FUN_10018fb0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_48;
  
  lVar1 = param_1 + 0x410;
  FUN_100642324(lVar1);
  if ((*(float *)(param_1 + 0x458) != 0.06) || (*(float *)(param_1 + 0x45c) != 0.06)) {
    *(undefined8 *)(param_1 + 0x458) = 0x3d75c28f3d75c28f;
    FUN_1000200a0(lVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x494);
  if ((uVar5 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x494) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x2600;
    FUN_1000200a0(lVar1);
    uVar5 = *(uint *)(param_1 + 0x494);
  }
  *(uint *)(param_1 + 0x494) = uVar5 & 0xfffffffb;
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.04);
  FUN_100642b14(lVar1,uVar2);
  uVar2 = FUN_10004767c();
  FUN_100642b14(lVar1,uVar2);
  uVar2 = FUN_10001f424();
  local_48 = 0x40547ae140547ae1;
  FUN_10064025c(uVar2,&local_48);
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.45,uVar2);
  FUN_10063f130(uVar2,FUN_10001f160);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0x3ecccccd);
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.11,uVar3);
  FUN_10063f130(uVar3,FUN_10001f160);
  uVar4 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.34,uVar4);
  FUN_10063f130(uVar4,FUN_10001f160);
  uVar4 = FUN_10008cac4();
  FUN_10063f614(uVar4,uVar3);
  uVar3 = FUN_10001f4d4();
  FUN_10063f2a4(uVar3,uVar2);
  FUN_100642b14(lVar1,uVar3);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(*(float *)(param_1 + 0x820) * 0.1);
  FUN_100642b14(lVar1,uVar2);
  return;
}




void FUN_10018fd04(long param_1)

{
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffffb;
  FUN_10018f924();
  FUN_10018fb0c(param_1);
  return;
}




void FUN_10018fd40(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_90;
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  float fStack_7c;
  undefined4 local_78 [2];
  
  local_78[0] = 0x705e4040;
  lVar1 = param_1 + 0x5f0;
  fVar7 = *(float *)(param_1 + 0x63c);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x638) == 1.0) && (bVar3 = false, !NAN(fVar7))) {
    bVar3 = fVar7 == 1.0;
  }
  if (!bVar3) {
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x638) = uVar6;
    FUN_1000200a0(lVar1);
  }
  cVar2 = *(char *)(param_1 + 0x71d);
  FUN_100652e60(lVar1);
  if (cVar2 == '\0') {
    fVar8 = -100.0 - fVar7 * 1.5;
    local_80 = 0;
    fStack_7c = fVar8;
    FUN_100652e60(lVar1);
    local_84 = -(fVar7 * 1.5) - 15.0;
  }
  else {
    fVar8 = fVar7 * 1.5 + 100.0;
    local_80 = 0;
    fStack_7c = fVar8;
    FUN_100652e60(lVar1);
    local_84 = fVar7 * 1.5 + 15.0;
  }
  local_88 = 0;
  FUN_100642324(lVar1);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x638) == 3.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x63c)))) {
    bVar3 = *(float *)(param_1 + 0x63c) == 3.0;
  }
  uVar6 = NEON_fmov(0x40400000,4);
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x638) = uVar6;
    FUN_1000200a0(lVar1);
  }
  if ((~*(uint *)(param_1 + 0x674) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) | 0x7f80;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0x630) != 0.0) || (*(float *)(param_1 + 0x634) != fVar8)) {
    *(ulong *)(param_1 + 0x630) = CONCAT44(fStack_7c,local_80);
    FUN_1000200a0(lVar1);
  }
  *(byte *)(param_1 + 0x6c8) =
       *(byte *)(param_1 + 0x6c8) & 0xfd | (*(char *)(param_1 + 0x71d) == '\0') << 1;
  *(uint *)(param_1 + 0x674) = *(uint *)(param_1 + 0x674) | 4;
  FUN_100652dd4(lVar1,local_78,2);
  uVar4 = FUN_10001f55c();
  FUN_10063f0e8(0);
  FUN_100642b14(lVar1,uVar4);
  uVar4 = FUN_10001f424();
  local_90 = uVar6;
  FUN_10064025c(uVar4,&local_90);
  FUN_10063f0e8(0x3f4ccccd,uVar4);
  FUN_10063f130(uVar4,FUN_10001f4ac);
  uVar5 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3f4ccccd,uVar5);
  FUN_10063f130(uVar5,FUN_10001f4ac);
  uVar5 = FUN_1000b50a8();
  FUN_10063fb90(uVar5,&local_88);
  FUN_10063f0e8(0x3f4ccccd,uVar5);
  FUN_10063f130(uVar5,FUN_10006bf9c);
  uVar5 = FUN_10018f89c();
  FUN_10063fe34(uVar5,lVar1,&DAT_10115a168,2);
  FUN_10063f0e8(0x3f4ccccd,uVar5);
  FUN_10063f130(uVar5,FUN_10017e164);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b14(lVar1,uVar5);
  uVar4 = FUN_10001f55c();
  FUN_10063f0e8(0);
  FUN_100642b14(lVar1,uVar4);
  uVar4 = FUN_10001f424();
  local_90 = uVar6;
  FUN_10064025c(uVar4,&local_90);
  FUN_10063f0e8(0x3f800000,uVar4);
  FUN_10063f130(uVar4,FUN_10001f4ac);
  uVar6 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3f800000,uVar6);
  FUN_10063f130(uVar6,FUN_10001f4ac);
  uVar6 = FUN_1000b50a8();
  FUN_10063fb90(uVar6,&local_80);
  FUN_10063f0e8(0x3f800000,uVar6);
  FUN_10063f130(uVar6,FUN_10006bf9c);
  uVar6 = FUN_10018f89c();
  FUN_10063fe34(uVar6,lVar1,local_78,2);
  FUN_10063f0e8(0x3f800000,uVar6);
  FUN_10063f130(uVar6,FUN_10017e164);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar4);
  FUN_100642b14(lVar1,uVar6);
  uVar6 = FUN_10001f55c();
  FUN_10063f0e8(0);
  FUN_100642b14(lVar1,uVar6);
  return;
}

