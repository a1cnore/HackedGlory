// functions/00c8b — 23 functions
#include "libGameKindred.h"




void FUN_00c8b050(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      plVar2 = (long *)plVar1[1];
      *plVar1 = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}




long * FUN_00c8b0ac(long param_1,long *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  long *plVar5;
  void *__s2;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = (long)plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar5 = plVar6;
        bVar3 = *(byte *)(plVar5 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar5[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar5[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar5 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (iVar4 < 0) goto LAB_00c8b140;
LAB_00c8b12c:
        plVar6 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          *param_2 = (long)plVar5;
          return plVar5 + 1;
        }
      }
      if (uVar1 <= uVar2) goto LAB_00c8b12c;
LAB_00c8b140:
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    *param_2 = (long)plVar5;
  }
  return plVar5;
}




void * FUN_00c8b180(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x40);
  FUN_008fcdb8((long)pvVar2 + 0x20,param_2);
  *(undefined4 *)((long)pvVar2 + 0x38) = *(undefined4 *)(param_2 + 0x18);
  uVar3 = FUN_00c8b0ac(param_1,&local_50,(long)pvVar2 + 0x20);
  FUN_009ed724(param_1,local_50,uVar3,pvVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8b224(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,byte *param_6)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *__s2;
  ushort uVar8;
  long lVar9;
  byte *pbVar10;
  ushort *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte local_b0 [16];
  void *local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  FUN_00f01980();
  if ((*(uint *)(param_5 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_5 + 0x84) = *(uint *)(param_5 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_5);
  }
  fVar14 = *(float *)(param_5 + 0x48);
  fVar13 = *(float *)(param_5 + 0x4c);
  if ((fVar14 != fVar14 * 0.85) || (fVar13 != fVar13 * 0.85)) {
    *(float *)(param_5 + 0x48) = fVar14 * 0.85;
    *(float *)(param_5 + 0x4c) = fVar13 * 0.85;
    FUN_0091ada4(param_5);
  }
  fVar12 = *(float *)(param_5 + 0x44) + param_1;
  if ((NAN(*(float *)(param_5 + 0x40))) || (*(float *)(param_5 + 0x44) != fVar12)) {
    *(float *)(param_5 + 0x44) = fVar12;
    FUN_0091ada4(param_5);
  }
  lVar9 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efcad4(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_027c1a60;
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3dcccccd,puVar11);
  FUN_00f022a0(param_5,puVar11);
  uVar5 = FUN_00efee28(0x3f800000,param_4,FUN_00c58a18);
  uVar6 = FUN_00eff008(0,-param_1,param_4,FUN_00a269a4);
  uVar7 = FUN_00eff63c(fVar14,fVar13,param_4,FUN_00a269a4);
  lVar9 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efcd98(puVar11);
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar11,uVar5,uVar6,uVar7,0);
  FUN_00f022a0(param_5,puVar11);
  bVar2 = *param_6;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_6 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar10 = *(byte **)(param_6 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_6 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar9 = -(ulong)(bVar2 >> 1);
        pbVar10 = param_6;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *__s2) goto LAB_00c8b52c;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00c8b618;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar10,__s2,__n), iVar4 == 0)) goto LAB_00c8b618;
  }
LAB_00c8b52c:
  lVar9 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar8 * 0x40);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efc8e8(puVar11);
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x14] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    *(undefined ***)puVar11 = &PTR_FUN_027d0db0;
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
    bVar2 = *param_6;
  }
  pbVar10 = *(byte **)(param_6 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar10 = param_6 + 1;
  }
  FUN_008fa54c(local_b0,pbVar10);
  FUN_00a99c48(puVar11,local_b0,0,0);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  FUN_00f022a0(param_5,puVar11);
LAB_00c8b618:
  uVar5 = FUN_00eff008(0,param_2,param_3,FUN_00aa89f4);
  uVar6 = FUN_00eff008(0,-(float)param_2,param_3,FUN_00aa89f4);
  lVar9 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar9 + 0x20014) = *(int *)(lVar9 + 0x20014) + 1;
    FUN_00efd208(puVar11);
    *(int *)(lVar9 + 0x20020) = *(int *)(lVar9 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar11,uVar5,uVar6,0);
  FUN_00efd3bc(puVar11);
  FUN_00f022a0(param_5,puVar11);
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8b73c(long param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x60);
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x30));
  FUN_008fce60(param_1 + 0x40,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x18));
  FUN_008fce60(param_1 + 0xa8,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x40));
  FUN_008fce60(param_1 + 0x60,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x48));
  FUN_008fce60(param_1 + 0x78,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x50));
  FUN_008fce60(param_1 + 0x90,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 100);
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x38));
  FUN_008fce60(param_1 + 0x28,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 0x20));
  FUN_008fce60(param_1 + 0xc0,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8b8b4(long param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c8b73c();
  FUN_008fa54c(local_50,*(undefined8 *)(param_2 + 8));
  FUN_008fce60(param_1 + 0xf8,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8b930(void *param_1)

{
  FUN_00beb548();
  operator_delete(param_1);
  return;
}




void FUN_00c8b954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028057c0;
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  FUN_00beb548(param_1);
  return;
}




void FUN_00c8b9a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028057c0;
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  FUN_00beb548(param_1);
  operator_delete(param_1);
  return;
}




long * FUN_00c8b9fc(long param_1)

{
  long *plVar1;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    plVar1 = operator_new(0x848);
    FUN_00c8cc60();
    break;
  case 1:
    plVar1 = operator_new(0x4c0);
    FUN_00c8c130();
    break;
  case 2:
    plVar1 = operator_new(0x2e88);
    FUN_00c90940();
    break;
  case 3:
    plVar1 = operator_new(0x16a8);
    FUN_00c8f4d0();
    break;
  case 4:
    plVar1 = operator_new(0xfe0);
    FUN_00c8dac8();
    break;
  default:
    return (long *)0x0;
  }
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




long * FUN_00c8bab8(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = operator_new(0x4c0);
  FUN_00c8c130();
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




long * FUN_00c8bafc(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = operator_new(0x848);
  FUN_00c8cc60();
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




long * FUN_00c8bb40(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = operator_new(0x2e88);
  FUN_00c90940();
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




long * FUN_00c8bb84(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = operator_new(0x16a8);
  FUN_00c8f4d0();
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




long * FUN_00c8bbc8(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = operator_new(0xfe0);
  FUN_00c8dac8();
  (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  return plVar1;
}




void FUN_00c8bc0c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_028057e8;
  uVar1 = DAT_03214ce8;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  return;
}




void FUN_00c8bc58(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_028057e8;
  FUN_00c8be40();
  plVar1 = (long *)param_1[0x19];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1a) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = (long *)param_1[0x19];
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x1a) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            param_1[0x19] = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x1a) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar3);
      }
    }
    else {
      param_1[0x19] = 0;
      *(undefined4 *)(param_1 + 0x1a) = DAT_03214ce8;
    }
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c8bd14(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xc8bd18);
  (*pcVar1)();
}




void FUN_00c8bd18(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0xb8);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0xc0) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0xb8) = 0;
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  lVar3 = FUN_00aa12a8(0x3e000000,"build://Sounds/UI.assetbundle/sfx_spoils_countup_sparkle.ogg",1,1
                      );
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x30);
    *(long *)(param_1 + 0xb8) = lVar3 + 0x28;
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
  }
  return;
}




void FUN_00c8bde8(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x170))();
  if ((uVar1 & 1) != 0) {
    FUN_00f01980(param_1);
                    /* WARNING: Could not recover jumptable at 0x00c8be24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




void FUN_00c8be34(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8be3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00c8be40(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0xb8);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xc0) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0xb8) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00c8bee8(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uStack_7c = (undefined4)param_2;
  local_80 = param_1;
  uVar7 = FUN_00f08664(&local_80,*(undefined8 *)(param_4 + 0x20));
  *(uint *)(param_4 + 0x84) = *(uint *)(param_4 + 0x84) | 4;
  uVar3 = FUN_00efee28(0,param_3,FUN_009a7608);
  uVar7 = FUN_00efef08(uVar7,param_2,param_3,FUN_009a7624);
  uVar4 = FUN_00eff63c(0,0,param_3,FUN_009a7624);
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
    FUN_00efcd98(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar6,uVar3,uVar7,uVar4,0);
  FUN_00f022a0(param_4,puVar6);
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
    FUN_00efc9c0(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efca10(puVar6,0);
  FUN_00f022a0(param_4,puVar6);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

