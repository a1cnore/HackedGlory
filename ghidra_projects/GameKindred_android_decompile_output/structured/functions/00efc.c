// functions/00efc — 84 functions
#include "libGameKindred.h"




undefined8 FUN_00efc0a0(void)

{
  return 0;
}




void FUN_00efc0a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00f20ed8(param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00f20ebc(param_2,1);
  thunk_FUN_00e7a1c0();
  return;
}




void FUN_00efc0ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_02824970;
  param_1[1] = param_3;
  return;
}




void FUN_00efc100(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f20ad8(*(undefined8 *)(param_1 + 8),"meshData",param_2,param_3,0);
  return;
}




void FUN_00efc120(void)

{
  return;
}




void thunk_FUN_00efc130(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  FUN_00efc240();
  DAT_03210cd8 = pvVar1;
  return;
}




void thunk_FUN_00efc160(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03210cd8;
  if (DAT_03210cd8 != (void *)0x0) {
    if (*(void **)((long)DAT_03210cd8 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_03210cd8 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_03210cd8 = (void *)0x0;
  return;
}




void FUN_00efc130(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  FUN_00efc240();
  DAT_03210cd8 = pvVar1;
  return;
}




void FUN_00efc160(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03210cd8;
  if (DAT_03210cd8 != (void *)0x0) {
    if (*(void **)((long)DAT_03210cd8 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_03210cd8 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_03210cd8 = (void *)0x0;
  return;
}




void FUN_00efc1ac(void)

{
  FUN_00efc250(DAT_03210cd8);
  return;
}




void FUN_00efc1b8(undefined4 param_1)

{
  FUN_00efc254(DAT_03210cd8,param_1);
  return;
}




void FUN_00efc1cc(undefined4 param_1)

{
  FUN_00efc328(DAT_03210cd8,param_1);
  return;
}




void FUN_00efc1e0(undefined4 param_1,undefined4 param_2)

{
  FUN_00efc384(DAT_03210cd8,param_1,param_2);
  return;
}




void FUN_00efc20c(undefined4 param_1)

{
  FUN_00efc528(DAT_03210cd8,param_1);
  return;
}




undefined4 FUN_00efc220(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00efc530(DAT_03210cd8);
  return uVar1;
}




void FUN_00efc240(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00efc250(void)

{
  return;
}




uint FUN_00efc254(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  puVar3 = (undefined8 *)FUN_00efc2b0(param_1,local_30);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = FUN_00efc780(*puVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00efc2b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar5 = (ulong)uVar1 * (ulong)uVar2 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar2 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar5 * 4) <= uVar2) break;
        iVar4 = (int)uVar5;
        uVar3 = iVar4 - 1;
        uVar5 = (ulong)uVar3;
      } while (uVar3 != 0 && 0 < iVar4);
    }
    if ((int)uVar1 <= (int)uVar5) {
      return 0;
    }
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 2) + uVar5 * 4);
      if (uVar2 <= uVar3) {
        if (uVar3 != uVar2) {
          return 0;
        }
        return *(long *)(param_1 + 6) + uVar5 * 8;
      }
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar3;
    } while ((int)uVar3 < (int)uVar1);
  }
  return 0;
}




uint FUN_00efc328(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  puVar3 = (undefined8 *)FUN_00efc2b0(param_1,local_30);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = FUN_00efc788(*puVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efc384(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  void *pvVar2;
  void *local_58;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50[0] = param_2;
  pvVar2 = operator_new(8);
  FUN_00efc778(pvVar2,param_1,param_2,param_3);
  local_58 = pvVar2;
  FUN_00efc44c(param_1,local_50,&local_58);
  if ((*(int *)(param_1 + 0x20) == -0x7ee3623b) || (*(int *)(param_1 + 0x20) == 0)) {
    *(undefined4 *)(param_1 + 0x20) = local_50[0];
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_58);
}




void FUN_00efc44c(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c = *param_2;
  uVar1 = *param_1;
  lVar4 = *(long *)(param_1 + 2);
  if (uVar1 == 0) {
    iVar5 = 0;
  }
  else {
    uVar6 = (ulong)uVar1 * (ulong)local_3c >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)local_3c >> 0x20)) {
      do {
        if (*(uint *)(lVar4 + uVar6 * 4) <= local_3c) break;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
    }
    while ((iVar5 = (int)uVar6, iVar5 < (int)uVar1 && (*(uint *)(lVar4 + uVar6 * 4) < local_3c))) {
      uVar6 = (ulong)(iVar5 + 1);
    }
  }
  FUN_0091f770(param_1,lVar4 + (long)iVar5 * 4,&local_3c,&local_38);
  FUN_00efc538(param_1 + 4,*(long *)(param_1 + 6) + (long)iVar5 * 8,param_3,param_3 + 8);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00efc528(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




undefined4 FUN_00efc530(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




undefined8 * FUN_00efc538(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_00efc778(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}




undefined8 FUN_00efc780(void)

{
  return 1;
}




undefined8 FUN_00efc788(void)

{
  return 1;
}




void FUN_00efc790(void)

{
  return;
}




void FUN_00efc794(void)

{
  return;
}




void FUN_00efc798(void)

{
  return;
}




void FUN_00efc79c(byte param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  FUN_00e7bdec(puVar1,1);
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_028249a8;
  *(byte *)(puVar1 + 4) = param_1 & 1;
  FUN_00e7bd4c(puVar1);
  FUN_00e7be08(puVar1);
  return;
}




void FUN_00efc7f4(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  FUN_00e7bdec();
  param_1[3] = 0;
  *param_1 = &PTR_FUN_028249a8;
  *(byte *)(param_1 + 4) = param_3 & 1;
  return;
}




void FUN_00efc830(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028249a8;
  return;
}




void FUN_00efc848(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00f1c750();
  if ((uVar1 & 1) == 0) {
    FUN_00f1c618(*(undefined1 *)(param_1 + 0x20));
  }
  pvVar2 = operator_new(0x20);
  FUN_00f20890();
  *(void **)(param_1 + 0x18) = pvVar2;
  return;
}




void FUN_00efc888(long param_1)

{
  FUN_00f20c14(*(undefined8 *)(param_1 + 0x18));
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00f1c764();
  return;
}




void FUN_00efc8c4(void)

{
  return;
}




void FUN_00efc8c8(long param_1)

{
  FUN_00f20c14(*(undefined8 *)(param_1 + 0x18));
  return;
}




undefined8 FUN_00efc8d0(void)

{
  return 1;
}




void FUN_00efc8d8(long param_1)

{
  FUN_00f20930(*(undefined8 *)(param_1 + 0x18));
  return;
}




undefined8 FUN_00efc8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00efc8e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028249f8;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  return;
}




void FUN_00efc904(void)

{
  return;
}




void FUN_00efc908(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xefc90c);
  (*pcVar1)();
}




void FUN_00efc90c(long param_1)

{
  *(undefined2 *)(param_1 + 8) = 0xffff;
  FUN_00efffa8(DAT_03210d00,param_1);
  return;
}




undefined8 FUN_00efc928(void)

{
  return 1;
}




void FUN_00efc930(long param_1,long param_2)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = (undefined2)((ulong)(param_2 - (DAT_03210d00 + 0x10)) >> 6);
  }
  *(undefined2 *)(param_1 + 8) = uVar1;
  return;
}




long FUN_00efc95c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ushort *)(param_1 + 8) != 0xffff) {
    lVar1 = DAT_03210d00 + (ulong)*(ushort *)(param_1 + 8) * 0x40 + 0x10;
  }
  return lVar1;
}




void FUN_00efc984(void)

{
  return;
}




undefined8 FUN_00efc988(void)

{
  return 1;
}




void FUN_00efc990(undefined8 param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffff7;
  return;
}




void FUN_00efc9a0(undefined8 param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 4;
  return;
}




void FUN_00efc9b0(undefined8 param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00efc9c0(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_02824a40;
  *(undefined1 *)((long)param_1 + 10) = 1;
  return;
}




void FUN_00efc9f8(long param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) =
       *(uint *)(param_2 + 0x84) & 0xfffffffb | (uint)*(byte *)(param_1 + 10) << 2;
  return;
}




void FUN_00efca10(long param_1,byte param_2)

{
  *(byte *)(param_1 + 10) = param_2 & 1;
  return;
}




void FUN_00efca1c(undefined8 param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) ^ 4;
  return;
}




void FUN_00efca2c(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_02824a88;
  *(undefined1 *)((long)param_1 + 10) = 1;
  return;
}




void FUN_00efca64(long param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) =
       *(uint *)(param_2 + 0x84) & 0xffffffef | (uint)*(byte *)(param_1 + 10) << 4;
  return;
}




void FUN_00efca7c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 10) = param_2 & 1;
  return;
}




void FUN_00efca88(undefined8 param_1,undefined8 param_2)

{
  FUN_00f01af4(param_2);
  return;
}




void FUN_00efca90(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_028252b0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}




void FUN_00efcac4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




undefined4 FUN_00efcacc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




void FUN_00efcad4(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02824ad0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}




bool FUN_00efcb10(long param_1)

{
  return *(float *)(param_1 + 0x18) == *(float *)(param_1 + 0xc);
}




void FUN_00efcb24(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined4 FUN_00efcb2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




float FUN_00efcb34(long param_1)

{
  if (*(float *)(param_1 + 0xc) == 0.0) {
    return 1.0;
  }
  return *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0xc);
}




void FUN_00efcb54(long param_1)

{
  float fVar1;
  
  if (*(float *)(param_1 + 0xc) == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0xc);
  }
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00efcb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(fVar1,0,0x3f800000,0x3f800000);
    return;
  }
  return;
}




void FUN_00efcb8c(float param_1,long param_2)

{
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (*(float *)(param_2 + 0xc) <= param_1) {
    param_1 = *(float *)(param_2 + 0xc);
  }
  *(float *)(param_2 + 0x18) = param_1;
  return;
}




void FUN_00efcba8(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_00efcbb0(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_02824b18;
  *(undefined4 *)(param_1 + 5) = 0xffff0000;
  return;
}




void FUN_00efcbf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02824b18;
  if (param_1[4] != 0) {
    FUN_00efc90c();
    param_1[4] = 0;
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00efcc38(void *param_1)

{
  FUN_00efcbf8();
  operator_delete(param_1);
  return;
}




void FUN_00efcc5c(long param_1,undefined8 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x2a) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




ulong FUN_00efcc68(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0xfffeffff < *(uint *)(param_1 + 0x28)) {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if (-0x10001 < (int)(*(uint *)(param_1 + 0x28) * 0x10000)) {
                    /* WARNING: Could not recover jumptable at 0x00efcc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
        return uVar1;
      }
    }
  }
  return (ulong)uVar2;
}




void FUN_00efcca8(float param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_2 + 0x28);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (*(float *)(param_2 + 0xc) <= param_1) {
    param_1 = *(float *)(param_2 + 0xc);
  }
  *(float *)(param_2 + 0x18) = param_1;
  if ((*(long **)(param_2 + 0x20) == (long *)0x0) || (uVar2 < 0x10000)) {
    *(uint *)(param_2 + 0x28) = uVar2 & 0xffff0000 | uVar2 >> 0x10;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x18))();
    if ((*(long **)(param_2 + 0x20) != (long *)0x0) &&
       (uVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(), (uVar4 & 1) != 0)) {
      sVar3 = (short)*(int *)(param_2 + 0x28) + 1;
      iVar1 = *(int *)(param_2 + 0x28) >> 0x10;
      *(short *)(param_2 + 0x28) = sVar3;
      if ((iVar1 == -1) || (sVar3 < iVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00efcd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_2 + 0x20) + 0x20))();
        return;
      }
    }
  }
  return;
}




void FUN_00efcd58(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xffff0000;
  return;
}




void FUN_00efcd98(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_02824b60;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}




void FUN_00efcddc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_02824b60;
  plVar2 = (long *)param_1[5];
  if ((long *)param_1[5] != (long *)0x0) {
    do {
      plVar1 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_00efc90c(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  plVar2 = (long *)param_1[7];
  if ((long *)param_1[7] != (long *)0x0) {
    do {
      plVar1 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_00efc90c(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00efce74(void *param_1)

{
  FUN_00efcddc();
  operator_delete(param_1);
  return;
}




void FUN_00efce98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}




void FUN_00efcea4(ushort *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  long lVar8;
  long *plVar9;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x30;
  plVar9 = (long *)register0x00000008;
  while( true ) {
    lVar3 = (long)iVar1;
    if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
      plVar4 = (long *)(&stack0xffffffffffffff70 + lVar3);
    }
    else {
      plVar4 = plVar9;
      plVar9 = plVar9 + 1;
    }
    lVar8 = *plVar4;
    *(long *)(param_1 + 0x10) = param_2;
    *(long *)(param_1 + 0x14) = param_2;
    *(long *)(param_1 + 0x18) = lVar8;
    *(long *)(param_1 + 0x1c) = lVar8;
    lVar3 = DAT_03210d00;
    if (lVar8 == 0) break;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      *(undefined ***)puVar7 = &PTR_FUN_02824b60;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0;
      puVar7[0x16] = 0;
      puVar7[0x17] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x1d] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x18] = 0;
      puVar7[0x19] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x1b] = 0;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    *(ushort **)(param_1 + 0x18) = puVar7;
    *(ushort **)(param_1 + 0x1c) = puVar7;
    param_2 = lVar8;
    param_1 = puVar7;
  }
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

