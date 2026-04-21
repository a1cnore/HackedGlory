// functions/00c8f — 8 functions
#include "libGameKindred.h"




void FUN_00c8f2f4(long param_1)

{
  FUN_00c8bee8();
  *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) & 0xfffffffb;
  *(uint *)(param_1 + 0x53c) = *(uint *)(param_1 + 0x53c) & 0xfffffffb;
  *(uint *)(param_1 + 0x44c) = *(uint *)(param_1 + 0x44c) & 0xfffffffb;
  return;
}




void FUN_00c8f338(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_02805c80;
  param_1[0x1d5] = &PTR_FUN_027efcf0;
  if ((*(byte *)(param_1 + 0x1f8) & 1) != 0) {
    operator_delete((void *)param_1[0x1fa]);
  }
  if ((*(byte *)(param_1 + 0x1f5) & 1) != 0) {
    operator_delete((void *)param_1[0x1f7]);
  }
  if ((void *)param_1[500] != (void *)0x0) {
    operator_delete__((void *)param_1[500]);
    param_1[500] = 0;
    param_1[499] = 0;
  }
  FUN_00beb548(param_1 + 0x1d5);
  FUN_00f0d3a4(param_1 + 0x1af);
  FUN_00f0d3a4(param_1 + 0x189);
  FUN_00f13d08(param_1 + 0x172);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xaa0) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xb58) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xb70);
    FUN_00f13d08((long)param_1 + lVar1 + 0xaa0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_00f13d08(param_1 + 0xc5);
  FUN_00f13d08(param_1 + 0xae);
  FUN_00f13d08(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_028266f0;
  param_1[0x90] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x93);
  FUN_00f13d08(param_1 + 0x79);
  FUN_00f0d3a4(param_1 + 0x53);
  param_1[0x32] = &PTR_FUN_02827290;
  param_1[0x49] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_028266f0;
  param_1[0x49] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x1b);
  FUN_00c8bc58(param_1);
  return;
}




void FUN_00c8f4a0(void *param_1)

{
  FUN_00c8f338();
  operator_delete(param_1);
  return;
}




void FUN_00c8f4c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8f4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00c8f4d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00c8bc0c();
  plVar1 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_02805e08;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x41;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x58;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x7e;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xa4;
  FUN_00ca2d70(plVar5);
  param_1[0x2b2] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b3] = 0;
  *(undefined8 *)((long)param_1 + 0x15cc) = 0;
  *(undefined8 *)((long)param_1 + 0x15c4) = 0;
  *(undefined8 *)((long)param_1 + 0x15bc) = 0;
  *(undefined8 *)((long)param_1 + 0x15b4) = 0;
  *(undefined8 *)((long)param_1 + 0x15ac) = 0;
  *(undefined8 *)((long)param_1 + 0x15a4) = 0;
  *(undefined4 *)((long)param_1 + 0x15d4) = 0;
  memset(param_1 + 700,0,0x78);
  *(undefined4 *)(param_1 + 699) = 0x3f800000;
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2b0] = (long)&PTR_FUN_027efbe0;
  param_1[0x2cb] = 0;
  FUN_00e70510(param_1 + 0x2cf);
  FUN_00e70510(param_1 + 0x2d1);
  *(undefined4 *)(param_1 + 0x2b4) = 3;
  param_1[0x2d3] = 0x42a0000044960000;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0);
  local_60 = 0x3f2666663f000000;
  (**(code **)(param_1[0x1b] + 0x28))(plVar1,&local_60);
  FUN_00f0da30(plVar1,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_400_f_02be9cc0);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x58] + 0x28))(plVar3,&local_60);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_100_f_02be9ca8);
  FUN_00ca30d0(plVar5,0);
  FUN_00ca311c(plVar5,1);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8f734(long param_1)

{
  FUN_00ca3308(param_1 + 0x520);
  return;
}




void FUN_00c8f73c(long *param_1,long param_2)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  undefined4 uVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  void *pvVar12;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_008fce60(param_1 + 0x2b1,param_2 + 8);
  param_1[0x2b4] = *(long *)(param_2 + 0x20);
  FUN_008fce60(param_1 + 0x2b5,param_2 + 0x28);
  FUN_008fce60(param_1 + 0x2b8,param_2 + 0x40);
  *(undefined4 *)(param_1 + 699) = *(undefined4 *)(param_2 + 0x58);
  FUN_008fce60(param_1 + 700,param_2 + 0x60);
  FUN_008fce60(param_1 + 0x2bf,param_2 + 0x78);
  FUN_008fce60(param_1 + 0x2c2,param_2 + 0x90);
  FUN_008fce60(param_1 + 0x2c5,param_2 + 0xa8);
  FUN_008fce60(param_1 + 0x2c8,param_2 + 0xc0);
  lVar11 = *(long *)(param_2 + 0xd8);
  param_1[0x2cc] = *(long *)(param_2 + 0xe0);
  param_1[0x2cb] = lVar11;
  lVar11 = *(long *)(param_2 + 0xe8);
  param_1[0x2ce] = *(long *)(param_2 + 0xf0);
  param_1[0x2cd] = lVar11;
  FUN_00910394(param_1 + 0x2cf,param_2 + 0xf8);
  FUN_00910394(param_1 + 0x2d1,param_2 + 0x108);
  plVar1 = param_1 + 0xa4;
  FUN_00ca3130((float)(int)param_1[0x2cb],(float)*(int *)((long)param_1 + 0x165c),plVar1);
  FUN_00ca3280((float)(int)param_1[0x2cc],plVar1);
  *(float *)(param_1 + 0x2d4) = (float)(int)param_1[0x2ce];
  FUN_00ca3288(plVar1,*(undefined4 *)((long)param_1 + 0x1664));
  FUN_00e70510(&local_78);
  FUN_00e70e18(&local_78,&DAT_01bb6d43,*(undefined4 *)((long)param_1 + 0x1664));
  FUN_00f0d75c(param_1 + 0x58,&local_78);
  FUN_00f0d75c(param_1 + 0x1b,param_1 + 0x2d1);
  *(uint *)((long)param_1 + 0x15c) = *(uint *)((long)param_1 + 0x15c) & 0xfffffffb;
  FUN_00f0d75c(param_1 + 0x7e,param_1 + 0x2cf);
  FUN_00f0da30(param_1 + 0x7e,1);
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_00c8b224(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x58,param_1 + 0x2c5);
  bVar6 = *(byte *)(param_1 + 0x2b5);
  sVar2 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar2 = param_1[0x2b6];
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    pvVar12 = (void *)param_1[0x2b7];
    pvVar4 = pvVar12;
    if ((bVar6 & 1) == 0) {
      pvVar4 = (void *)((long)param_1 + 0x15a9);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar6 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar10 = (char *)((long)param_1 + 0x15a9);
        lVar11 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar10 != *pcVar9) goto LAB_00c8f9bc;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pvVar4,pcVar9,sVar2), iVar8 != 0)) goto LAB_00c8f9dc;
  }
  else {
LAB_00c8f9bc:
    if ((bVar6 & 1) == 0) {
      pvVar12 = (void *)((long)param_1 + 0x15a9);
    }
    else {
      pvVar12 = (void *)param_1[0x2b7];
    }
LAB_00c8f9dc:
    FUN_00aa12a8(0x3f800000,pvVar12,0,1);
  }
  if ((int)param_1[0x2cc] < (int)param_1[0x2ce]) {
    bVar6 = *(byte *)(param_1 + 0x2bf);
    sVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar2 = param_1[0x2c0];
    }
    sVar3 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    if (sVar2 == sVar3) {
      pvVar12 = (void *)param_1[0x2c1];
      pvVar4 = pvVar12;
      if ((bVar6 & 1) == 0) {
        pvVar4 = (void *)((long)param_1 + 0x15f9);
      }
      pcVar9 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar9 = &DAT_0320ffa9;
      }
      if ((bVar6 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar10 = (char *)((long)param_1 + 0x15f9);
          lVar11 = -(ulong)(bVar6 >> 1);
          do {
            if (*pcVar10 != *pcVar9) goto LAB_00c8faf8;
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_00c8fb70;
      }
      if (sVar2 == 0) goto LAB_00c8fb70;
      iVar8 = memcmp(pvVar4,pcVar9,sVar2);
joined_r0x00c8fb44:
      if (iVar8 == 0) goto LAB_00c8fb70;
    }
    else {
LAB_00c8faf8:
      if ((bVar6 & 1) == 0) {
        pvVar12 = (void *)((long)param_1 + 0x15f9);
      }
      else {
        pvVar12 = (void *)param_1[0x2c1];
      }
    }
  }
  else {
    bVar6 = *(byte *)(param_1 + 700);
    sVar2 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar2 = param_1[0x2bd];
    }
    sVar3 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar3 = DAT_0320ffb0;
    }
    if (sVar2 == sVar3) {
      pvVar12 = (void *)param_1[0x2be];
      pvVar4 = pvVar12;
      if ((bVar6 & 1) == 0) {
        pvVar4 = (void *)((long)param_1 + 0x15e1);
      }
      pcVar9 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar9 = &DAT_0320ffa9;
      }
      if ((bVar6 & 1) == 0) {
        if (sVar2 != 0) {
          pcVar10 = (char *)((long)param_1 + 0x15e1);
          lVar11 = -(ulong)(bVar6 >> 1);
          do {
            if (*pcVar10 != *pcVar9) goto LAB_00c8fb04;
            pcVar10 = pcVar10 + 1;
            lVar11 = lVar11 + 1;
            pcVar9 = pcVar9 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_00c8fb70;
      }
      if (sVar2 == 0) goto LAB_00c8fb70;
      iVar8 = memcmp(pvVar4,pcVar9,sVar2);
      goto joined_r0x00c8fb44;
    }
LAB_00c8fb04:
    if ((bVar6 & 1) == 0) {
      pvVar12 = (void *)((long)param_1 + 0x15e1);
    }
    else {
      pvVar12 = (void *)param_1[0x2be];
    }
  }
  lVar11 = FUN_00aa12a8(0x3f400000,pvVar12,0,1);
  if (lVar11 != 0) {
    uVar5 = *(undefined4 *)(lVar11 + 0x30);
    param_1[0x19] = lVar11 + 0x28;
    *(undefined4 *)(param_1 + 0x1a) = uVar5;
  }
LAB_00c8fb70:
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c8fbb4(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  long local_78;
  code *pcStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00c8bd18();
  FUN_00c8bde8(param_1);
  pcStack_70 = FUN_00c90934;
  local_78 = param_1;
  FUN_00f02e98(0xbf800000,&local_78,0,1);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar4);
  FUN_00f022a0(param_1,puVar4);
  lVar2 = DAT_03210d00;
  fVar8 = *(float *)(param_1 + 0x16a0);
  fVar9 = (float)*(int *)(param_1 + 0x165c);
  if ((fVar8 <= fVar9) || (fVar9 <= *(float *)(param_1 + 0x1578))) {
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efeb30(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      fVar8 = *(float *)(param_1 + 0x16a0);
    }
    FUN_00efeba8(fVar8,puVar5,param_1 + 0x1578);
    FUN_00efcb24(puVar5,FUN_00c8d764);
    FUN_00efcac4(0x3fc00000,puVar5);
  }
  else {
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efeb30(puVar4);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efeba8(fVar9,puVar4,param_1 + 0x1578);
    FUN_00efcb24(puVar4,FUN_00c8d764);
    FUN_00efcac4(0x3f400000,puVar4);
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar6 = (ushort *)0x0;
      puVar7 = (ushort *)0x0;
      _DAT_00000010 = FUN_00c90214;
      _DAT_00000020 = param_1;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
      puVar6[0x10] = 0;
      puVar6[0x11] = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      lVar2 = DAT_03210d00;
      puVar5 = (ushort *)(DAT_03210d00 + 0x20010);
      uVar3 = *puVar5;
      *(code **)(puVar6 + 8) = FUN_00c90214;
      *(long *)(puVar6 + 0x10) = param_1;
      if ((ulong)uVar3 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(lVar2 + (ulong)uVar3 * 0x40 + 0x10);
        if (uVar3 == *(ushort *)(lVar2 + 0x20012)) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = *puVar7;
        }
        *puVar5 = uVar3;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efeb30(puVar7);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
    }
    FUN_00efeba8(*(undefined4 *)(param_1 + 0x16a0),puVar7,param_1 + 0x1578);
    FUN_00efcb24(puVar7,FUN_00c8d764);
    FUN_00efcac4(0x3f400000,puVar7);
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efd208(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar5,puVar4,puVar6,puVar7,0);
  }
  FUN_00f022a0(param_1,puVar5);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(long *)(puVar4 + 0x10) = param_1;
  *(code **)(puVar4 + 8) = FUN_00c8be34;
  FUN_00f022a0(param_1,puVar4);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f400000,puVar4);
  FUN_00f022a0(param_1,puVar4);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

