// functions/00910 — 61 functions
#include "libGameKindred.h"




void FUN_00910040(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  lVar3 = FUN_0090e774(param_1,local_50);
  lVar5 = (ulong)*(uint *)(lVar3 + 0x20) << 5;
  lVar2 = *(long *)(lVar3 + 0x28);
  do {
    lVar4 = lVar2;
    if (lVar5 == 0) goto LAB_009100a8;
    lVar5 = lVar5 + -0x20;
    lVar2 = lVar4 + 0x20;
  } while (*(long *)(lVar4 + 8) != param_3);
  FUN_00910b10((uint *)(lVar3 + 0x20),lVar4);
LAB_009100a8:
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009100e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  lVar3 = FUN_0090e774(param_1,local_50);
  lVar5 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
  lVar2 = *(long *)(lVar3 + 0x38);
  do {
    lVar4 = lVar2;
    if (lVar5 == 0) goto LAB_00910148;
    lVar5 = lVar5 + -0x20;
    lVar2 = lVar4 + 0x20;
  } while (*(long *)(lVar4 + 8) != param_3);
  FUN_00910b10((uint *)(lVar3 + 0x30),lVar4);
LAB_00910148:
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00910180(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = (ulong)*(uint *)(param_1 + 0x58) << 5;
  plVar1 = *(long **)(param_1 + 0x60);
  do {
    plVar2 = plVar1;
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + -0x20;
    plVar1 = plVar2 + 4;
  } while (*plVar2 != param_2);
  FUN_00910480((uint *)(param_1 + 0x58),plVar2);
  return;
}




long FUN_009101ac(long param_1)

{
  return param_1 + 0x48;
}




long FUN_009101b4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40);
  lVar2 = FUN_0090e774(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return lVar2 + 0x58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00910224(long param_1)

{
  return param_1 + 0xa0;
}




void FUN_0091022c(uint *param_1,undefined8 *param_2)

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
    FUN_00910b88(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_009102b4(long param_1,int *param_2)

{
  byte bVar1;
  
  if (*param_2 == 0x10) {
    bVar1 = FUN_009f1f70(0x10);
    *(byte *)(param_1 + 0x180) = bVar1 & 1;
  }
  return;
}




void FUN_009102ec(void)

{
  return;
}




void FUN_009102f0(void)

{
  return;
}




void FUN_009102f4(void)

{
  return;
}




void FUN_009102f8(void)

{
  return;
}




void FUN_009102fc(void)

{
  return;
}




void FUN_00910300(void)

{
  return;
}




void FUN_00910304(void)

{
  return;
}




void FUN_00910308(void)

{
  return;
}




void FUN_0091030c(void)

{
  return;
}




void FUN_00910310(void)

{
  return;
}




void FUN_00910314(void)

{
  return;
}




void FUN_00910318(void)

{
  return;
}




void FUN_0091031c(void)

{
  return;
}




void FUN_00910320(void)

{
  return;
}




void FUN_00910324(void)

{
  return;
}




void FUN_00910328(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00910328(param_1,*param_2);
    FUN_00910328(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      operator_delete((void *)param_2[10]);
    }
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00910394(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_00910400(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 1;
      puVar2 = *(undefined2 **)(param_2 + 2);
      puVar3 = *(undefined2 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -2;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00910400(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 1);
    puVar2 = *(undefined2 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 1;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -2;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined2 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined2 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00910480(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_009104f8(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_009105c0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00910588(long param_1,int *param_2)

{
  byte bVar1;
  
  if (*param_2 == 0x10) {
    bVar1 = FUN_009f1f70(0x10);
    *(byte *)(param_1 + 0x180) = bVar1 & 1;
  }
  return;
}




void FUN_009105c0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_0091064c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_009106c4(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 4);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 4;
      pvVar4 = pvVar1;
      do {
        thunk_FUN_00e7051c(pvVar4,pvVar2);
        pvVar2 = (void *)((long)pvVar2 + 0x10);
        lVar5 = lVar5 + -0x10;
        pvVar4 = (void *)((long)pvVar4 + 0x10);
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 4;
        puVar3 = (undefined8 *)((long)pvVar2 + 8);
        do {
          if ((void *)*puVar3 != (void *)0x0) {
            operator_delete__((void *)*puVar3);
            puVar3[-1] = 0;
            *puVar3 = 0;
          }
          lVar5 = lVar5 + -0x10;
          puVar3 = puVar3 + 2;
        } while (lVar5 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00910794(uint *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar2 = *param_1;
  uVar5 = (uint)((ulong)((long)param_3 - param_2) >> 4);
  if (uVar2 != uVar5) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x10);
    uVar1 = (long)puVar6 - (long)param_3;
    lVar4 = param_2;
    if (uVar1 != 0) {
      do {
        FUN_00910394(lVar4,param_3);
        param_3 = param_3 + 2;
        lVar4 = lVar4 + 0x10;
      } while (puVar6 != param_3);
      uVar2 = *param_1;
      puVar6 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x10);
    }
    puVar3 = (undefined8 *)(param_2 + (uVar1 >> 4 & 0xffffffff) * 0x10);
    if (puVar3 != puVar6) {
      do {
        if ((void *)puVar3[1] != (void *)0x0) {
          operator_delete__((void *)puVar3[1]);
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 2;
      } while (puVar6 != puVar3);
      uVar2 = *param_1;
    }
    *param_1 = uVar2 - uVar5;
    return;
  }
  FUN_0090eb54(param_1,1);
  return;
}




void * FUN_00910878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_0091092c(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x60);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    FUN_00ec3d6c((long)pvVar4 + 0x38);
    puVar3 = (undefined8 *)FUN_00910a58(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_0091092c(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_00910990:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_009109ac;
          if (iVar4 < 0) goto LAB_009109b4;
          goto LAB_00910a2c;
        }
LAB_00910a18:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00910a18;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00910990;
      }
LAB_009109ac:
      if (uVar2 <= uVar1) break;
LAB_009109b4:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00910a2c:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00910a58(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_00910aac(long param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x17d) = 0;
  bVar1 = FUN_0092e644();
  *(byte *)(param_1 + 0x17e) = ~bVar1 & 1;
                    /* WARNING: Could not recover jumptable at 0x00910ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x58))(*(long **)(param_1 + 200));
  return;
}




void FUN_00910aec(long param_1)

{
  FUN_0090e438();
  *(undefined1 *)(param_1 + 0x17f) = 0;
  return;
}




void FUN_00910b10(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00910b88(uint *param_1,uint param_2)

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




void FUN_00910c08(void)

{
  return;
}




void FUN_00910c0c(void)

{
  return;
}




undefined1  [16] FUN_00910c10(void)

{
  return ZEXT816(0);
}




undefined1  [16] FUN_00910c18(void)

{
  return ZEXT816(0);
}




undefined1  [16] FUN_00910c20(void)

{
  return ZEXT816(0);
}




void FUN_00910c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9508;
  memset(param_1 + 1,0,0x2805);
  return;
}




void FUN_00910c54(void)

{
  return;
}




undefined8 FUN_00910c58(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 local_44;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0x280c) = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  thunk_FUN_00e82a5c(local_40,&local_44);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_00928f20(pvVar1,local_44);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00910ce8(long param_1)

{
  *(undefined1 *)(param_1 + 0x280c) = 0;
  FUN_009188a4();
  FUN_0091a4cc();
  return;
}




void FUN_00910d04(void)

{
  return;
}




void FUN_00910d08(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 auStack_90 [8];
  uint local_88 [4];
  void *local_78;
  int local_6c;
  long local_68;
  
  puVar9 = auStack_90;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_6c = 1;
  iVar5 = FUN_00e7df5c(param_2,param_1 + 8 + (long)*(int *)(param_1 + 0x2808),
                       0x2800 - *(int *)(param_1 + 0x2808),&local_6c);
  if (local_6c == 0) {
    iVar5 = *(int *)(param_1 + 0x2808) + iVar5;
    *(int *)(param_1 + 0x2808) = iVar5;
    if (2 < iVar5) {
      puVar2 = (undefined1 *)(param_1 + 10);
      do {
        FUN_009188a4();
        uVar6 = FUN_0091a214();
        if ((((uVar6 & 1) != 0) || (uVar6 = FUN_00e7daf0(param_2), (uVar6 & 1) != 0)) ||
           (uVar6 = (**(code **)(*param_2 + 0x28))(param_2), (uVar6 & 1) == 0)) {
          *(undefined4 *)(param_1 + 0x2808) = 0;
          break;
        }
        uVar3 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
        uVar1 = uVar3 + 2;
        if (*(int *)(param_1 + 0x2808) < (int)uVar1) break;
        uVar6 = FUN_00ce271c();
        puVar7 = puVar2;
        uVar8 = uVar3;
        if (((uVar6 & 1) == 0) || (*(char *)(param_1 + 0x280c) == '\0')) {
LAB_00910e54:
          FUN_0092b85c(puVar7,uVar8);
        }
        else {
          uVar6 = FUN_00ce274c(uVar3);
          puVar9 = puVar9 + -((uVar6 & 0xffffffff) + 0xf & 0x1fffffff0);
          uVar6 = FUN_00ce2790(puVar2,uVar3,puVar9,local_88);
          puVar7 = puVar9;
          uVar8 = local_88[0];
          if ((uVar6 & 1) != 0) goto LAB_00910e54;
          FUN_00ce274c(uVar3);
        }
        if (*(int *)(param_1 + 0x2808) < 1) break;
        memmove((void *)(param_1 + 8),(void *)(param_1 + (ulong)uVar1 + 8),
                (ulong)(*(int *)(param_1 + 0x2808) - uVar1));
        iVar5 = *(int *)(param_1 + 0x2808) - uVar1;
        *(int *)(param_1 + 0x2808) = iVar5;
      } while (2 < iVar5);
    }
  }
  else {
    FUN_00e6f9a8(local_88,param_2 + 1);
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    FUN_009426bc();
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00910ed4(undefined8 param_1,undefined8 param_2)

{
  FUN_00e7e094(param_2,1);
  return;
}




void FUN_00910ee0(void)

{
  return;
}




void FUN_00910ee4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x280c) = param_2 & 1;
  return;
}




undefined1 FUN_00910ef4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x280c);
}




void FUN_00910f04(void)

{
  return;
}




void FUN_00910f08(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(byte *)((long)param_1 + 0xc) = *(byte *)((long)param_1 + 0xc) & 0xfe;
  return;
}




void FUN_00910f20(void)

{
  return;
}




undefined8 FUN_00910f24(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00ceab64();
  if ((((uVar2 & 1) == 0) &&
      (uVar2 = FUN_00ced270(*(undefined4 *)(param_1 + 0x260)), (uVar2 & 1) != 0)) ||
     ((uVar2 = FUN_00ceab64(), (uVar2 & 1) != 0 &&
      (iVar1 = FUN_00ceab94(), iVar1 == *(int *)(param_1 + 0x260))))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_00910f78(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float extraout_s0;
  long local_f8 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00911134(DAT_02c091e0);
  uVar3 = FUN_019889cc(local_f8,0x10,DAT_02c091e8,0);
  uVar5 = uVar3 & 0xffffffff;
  iVar2 = (int)uVar3;
  uVar6 = uVar5;
  if (iVar2 != 0) {
    uVar9 = 0;
    do {
      uVar7 = *(undefined8 *)(*(long *)(local_f8[uVar9] + 0x10) + 0x10);
      uVar3 = FUN_00910f24(uVar7);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_009111c4(DAT_02c091e0,uVar7,local_f8,uVar5);
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
    if (iVar2 != 0) {
      uVar9 = 0;
      uVar6 = 0;
      do {
        uVar4 = (uint)uVar6;
        lVar8 = local_f8[uVar9];
        lVar10 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10);
        uVar3 = FUN_00ceab64();
        if ((((uVar3 & 1) == 0) &&
            (uVar3 = FUN_00ced270(*(undefined4 *)(lVar10 + 0x260)), (uVar3 & 1) != 0)) &&
           (uVar3 = FUN_009bf710(lVar8), (uVar3 & 1) != 0)) {
          uVar6 = 4;
          break;
        }
        if (((*(byte *)(lVar10 + 0x2f4) >> 2 & 1) != 0) &&
           (uVar3 = FUN_009bf704(lVar8), (uVar3 & 1) != 0)) {
          uVar6 = 3;
          break;
        }
        FUN_009bbfb0();
        uVar3 = FUN_009bc268();
        if (1200.0 <= extraout_s0) {
          uVar4 = 3;
        }
        else if (900.0 <= extraout_s0) {
          uVar4 = 2;
        }
        else if (420.0 <= extraout_s0) {
          uVar4 = 1;
        }
        uVar9 = uVar9 + 1;
        uVar6 = (ulong)(uVar4 + (*(byte *)(param_1 + 0xc) & uVar4 < 3));
      } while (uVar9 < uVar5);
    }
  }
  FUN_00911408(uVar3,uVar6);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00910400(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 1);
    puVar2 = *(undefined2 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 1;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -2;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined2 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined2 **)(param_1 + 2) = puVar1;
  }
  return;
}

