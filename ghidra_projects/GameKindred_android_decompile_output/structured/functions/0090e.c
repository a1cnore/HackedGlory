// functions/0090e — 40 functions
#include "libGameKindred.h"




void FUN_0090e0a0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x180) = param_2 & 1;
  return;
}




void FUN_0090e0ac(long param_1)

{
  FUN_00ec7034(*(undefined8 *)(param_1 + 200));
  return;
}




void FUN_0090e0b4(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  param_1[1] = &PTR_FUN_027b90f8;
  *param_1 = &PTR_FUN_027b9068;
  param_1[4] = &PTR_FUN_027b9128;
  FUN_00ec710c(param_1[0x19],param_1 + 10);
  puVar10 = (uint *)(param_1 + 7);
  if (*puVar10 != 0) {
    uVar9 = 0;
    do {
      lVar8 = *(long *)(param_1[8] + uVar9 * 8);
      FUN_008fcdb8(local_70,lVar8 + 0x40);
      pvVar1 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar1 = local_60;
      }
      FUN_00ec6d20(param_1[0x19],lVar8,pvVar1);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      plVar4 = *(long **)(param_1[8] + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *puVar10);
  }
  if (param_1[8] != 0) {
    *puVar10 = 0;
  }
  FUN_00ec684c(param_1[0x19],param_1);
  *(undefined1 *)((long)param_1 + 0x17d) = 0;
  bVar3 = FUN_0092e644();
  *(byte *)((long)param_1 + 0x17e) = ~bVar3 & 1;
  (**(code **)(*(long *)param_1[0x19] + 0x58))((long *)param_1[0x19]);
  FUN_00ec50fc(param_1[0x19]);
  puVar5 = (uint *)FUN_009f1f64();
  lVar7 = (ulong)*puVar5 << 5;
  lVar8 = *(long *)(puVar5 + 2);
  do {
    lVar6 = lVar8;
    if (lVar7 == 0) goto LAB_0090e214;
    lVar7 = lVar7 + -0x20;
    lVar8 = lVar6 + 0x20;
  } while (*(undefined8 **)(lVar6 + 8) != param_1);
  FUN_0091064c(puVar5,lVar6);
LAB_0090e214:
  if ((*(byte *)(param_1 + 0x2b) & 1) != 0) {
    operator_delete((void *)param_1[0x2d]);
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete((void *)param_1[0x2a]);
  }
  if ((*(byte *)(param_1 + 0x25) & 1) != 0) {
    operator_delete((void *)param_1[0x27]);
  }
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    operator_delete((void *)param_1[0x24]);
  }
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    operator_delete((void *)param_1[0x1c]);
  }
  FUN_0090eb54(param_1 + 0x17,1);
  FUN_009e16b0(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_1[8] = 0;
  }
  FUN_00948d58(param_1 + 4);
  FUN_00e835e0(param_1 + 1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090e2e8(long param_1)

{
  FUN_00ec710c(*(undefined8 *)(param_1 + 200));
  return;
}




void FUN_0090e2f0(long param_1)

{
  FUN_00ec6d20(*(undefined8 *)(param_1 + 200));
  return;
}




void FUN_0090e2f8(long param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x17d) = 0;
  bVar1 = FUN_0092e644();
  *(byte *)(param_1 + 0x17e) = ~bVar1 & 1;
                    /* WARNING: Could not recover jumptable at 0x0090e334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x58))(*(long **)(param_1 + 200));
  return;
}




void FUN_0090e338(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_0090e364(long param_1)

{
  FUN_0090e0b4(param_1 + -8);
  return;
}




void FUN_0090e36c(long param_1)

{
  FUN_0090e0b4(param_1 + -0x20);
  return;
}




void FUN_0090e374(void *param_1)

{
  FUN_0090e0b4();
  operator_delete(param_1);
  return;
}




void FUN_0090e398(long param_1)

{
  FUN_0090e0b4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}




void FUN_0090e3c0(long param_1)

{
  FUN_0090e0b4((void *)(param_1 + -0x20));
  operator_delete((void *)(param_1 + -0x20));
  return;
}




void FUN_0090e3e8(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x60))();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0090e428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0xb0))(0x3a83126f);
    return;
  }
  return;
}




void FUN_0090e438(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_0090e53c();
  if (*(char *)(param_1 + 0x17e) == '\0') {
    uVar3 = FUN_00e70b04(param_1 + 0xe8);
    if ((uVar3 & 1) == 0) {
      local_50[0] = 0;
      local_50[1] = 0;
      local_40 = (void *)0x0;
      FUN_00e70a24(param_1 + 0xe8,local_50);
      if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
        lVar4 = param_1 + 0xd1;
      }
      else {
        lVar4 = *(long *)(param_1 + 0xe0);
      }
      if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
        lVar5 = param_1 + 0x111;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x120);
      }
      if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
        lVar6 = param_1 + 0x129;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x138);
      }
      pvVar1 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar1 = local_40;
      }
      (**(code **)(**(long **)(param_1 + 200) + 0x48))
                (*(long **)(param_1 + 200),lVar4,*(undefined4 *)(param_1 + 0x170),lVar5,lVar6,pvVar1
                 ,*(undefined1 *)(param_1 + 0x17c));
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090e53c(long param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_00948284(local_50,param_1 + 0xd0,(int *)(param_1 + 0x170));
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    uVar3 = (ulong)(*(byte *)(param_1 + 0xd0) >> 1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0xd8);
  }
  if ((uVar3 == 0) || (*(int *)(param_1 + 0x170) < 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = FUN_0092e644();
    bVar2 = ~bVar2 & 1;
  }
  *(byte *)(param_1 + 0x17e) = bVar2;
  FUN_009482d0(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x17d) = 1;
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090e5fc(long param_1)

{
  FUN_0090e438();
  *(undefined1 *)(param_1 + 0x17f) = 0;
  return;
}




void FUN_0090e620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090e62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x50))();
  return;
}




void FUN_0090e630(long param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x17d) = 0;
  bVar1 = FUN_0092e644();
  *(byte *)(param_1 + 0x17e) = ~bVar1 & 1;
                    /* WARNING: Could not recover jumptable at 0x0090e66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x58))(*(long **)(param_1 + 200));
  return;
}




void FUN_0090e670(long param_1)

{
  FUN_00ec6774(*(undefined8 *)(param_1 + 200));
  return;
}




void FUN_0090e678(long param_1)

{
  FUN_00ec684c(*(undefined8 *)(param_1 + 200));
  return;
}




void FUN_0090e680(long param_1)

{
  FUN_00ec6878(*(undefined8 *)(param_1 + 200));
  return;
}




undefined1 FUN_0090e688(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17e);
}




void FUN_0090e690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090e69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x68))();
  return;
}




void FUN_0090e6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090e6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x70))();
  return;
}




void FUN_0090e6b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090e6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x90))();
  return;
}




void FUN_0090e6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090e6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x98))();
  return;
}




void FUN_0090e6d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_0090e774(param_1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    lVar2 = param_1 + 0x129;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x138);
  }
  (**(code **)(**(long **)(param_1 + 200) + 0x78))(*(long **)(param_1 + 200),param_2,lVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090e774(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte *__s1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  byte *__s2;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  uint *puVar10;
  ulong uVar11;
  byte local_98 [16];
  void *local_88;
  void *local_80;
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar10 = (uint *)(param_1 + 0x38);
  if (*puVar10 != 0) {
    uVar11 = 0;
    do {
      FUN_008fcdb8(&local_80,*(long *)(*(long *)(param_1 + 0x40) + uVar11 * 8) + 0x40);
      pbVar9 = local_70;
      bVar2 = *param_2;
      uVar7 = (ulong)local_80 >> 1 & 0x7f;
      __n = uVar7;
      if (((ulong)local_80 & 1) != 0) {
        __n = local_78;
      }
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
      }
      bVar4 = false;
      if (__n == sVar1) {
        __s1 = (byte *)((ulong)&local_80 | 1);
        if (((ulong)local_80 & 1) != 0) {
          __s1 = local_70;
        }
        __s2 = param_2 + 1;
        if ((bVar2 & 1) != 0) {
          __s2 = *(byte **)(param_2 + 0x10);
        }
        if (((ulong)local_80 & 1) == 0) {
          if (__n != 0) {
            lVar8 = -uVar7;
            pbVar9 = (byte *)((ulong)&local_80 | 1);
            do {
              if (*pbVar9 != *__s2) {
                bVar4 = false;
                if (((ulong)local_80 & 1) == 0) goto LAB_0090e874;
                goto LAB_0090e86c;
              }
              pbVar9 = pbVar9 + 1;
              lVar8 = lVar8 + 1;
              __s2 = __s2 + 1;
            } while (lVar8 != 0);
            bVar4 = true;
            goto LAB_0090e868;
          }
        }
        else if (__n == 0) {
          operator_delete(local_70);
        }
        else {
          iVar5 = memcmp(__s1,__s2,__n);
          operator_delete(pbVar9);
          if (iVar5 != 0) goto LAB_0090e894;
        }
LAB_0090e918:
        pvVar6 = *(void **)(*(long *)(param_1 + 0x40) + (uVar11 & 0xffffffff) * 8);
        goto LAB_0090e920;
      }
LAB_0090e868:
      if (((ulong)local_80 & 1) != 0) {
LAB_0090e86c:
        operator_delete(local_70);
      }
LAB_0090e874:
      if (bVar4) goto LAB_0090e918;
LAB_0090e894:
      uVar11 = uVar11 + 1;
    } while (uVar11 < *puVar10);
  }
  pvVar6 = operator_new(0x70);
  FUN_009e1664();
  local_80 = pvVar6;
  FUN_008fcdb8(local_98,param_2);
  FUN_008fce60((long)pvVar6 + 0x40,local_98);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  FUN_0091022c(puVar10,&local_80);
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  FUN_00ec6878(*(undefined8 *)(param_1 + 200),local_80,pbVar9);
  pvVar6 = local_80;
LAB_0090e920:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar6);
  }
  return;
}




bool FUN_0090e954(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x98))();
  return *(int *)(lVar1 + 0x28) == 2;
}




void FUN_0090e980(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0090e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x80))(*(long **)(param_1 + 200),param_2,0);
  return;
}




void FUN_0090e994(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0090e9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),param_2,0);
  return;
}




void FUN_0090e9a8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = (uint *)(param_1 + 0xb8);
  if (*puVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0xc0) + lVar3,param_2);
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < *puVar2);
  }
  FUN_0090ea30(puVar2,param_2);
  return;
}




void FUN_0090ea30(uint *param_1,undefined8 param_2)

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
    FUN_009106c4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  thunk_FUN_00e7051c(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x10 + -0x10,param_2);
  return;
}




void FUN_0090eab8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = (uint *)(param_1 + 0xb8);
  if (*puVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0xc0) + lVar3,param_2);
      if ((uVar1 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0xc0) + lVar3;
        FUN_00910794(puVar2,lVar3,lVar3 + 0x10);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 < *puVar2);
  }
  return;
}




void FUN_0090eb48(long param_1)

{
  FUN_0090eb54(param_1 + 0xb8,0);
  return;
}




void FUN_0090eb54(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 4;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        lVar1 = lVar1 + -0x10;
        puVar2 = puVar2 + 2;
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




undefined8 FUN_0090ebcc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0xc0) + lVar2,param_2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0xb8));
  }
  return 0;
}




bool FUN_0090ec38(long param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = FUN_00cee134(param_2);
  uVar3 = FUN_00ced270(param_2);
  FUN_00cec840(param_2);
  lVar4 = FUN_00916020();
  lVar5 = FUN_00ceace8();
  bVar1 = false;
  if (lVar5 != 0) {
    FUN_00ceace8();
    uVar6 = FUN_00ceae78();
    if ((lVar4 == 0) && ((uVar3 & 1) == 0 && *(char *)(param_1 + 0x180) != '\0')) {
      bVar1 = false;
      if ((uVar6 & 1) != 0) {
        bVar1 = (int)(uVar2 & 0xff) < *(int *)(param_1 + 0x174);
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}




void FUN_0090ecd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_c0;
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  byte *local_78;
  undefined4 local_70 [2];
  byte local_68 [16];
  void *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_98 = &local_90;
  local_90 = 0;
  uStack_88 = 0;
  FUN_00ec3e30(local_70,param_4);
  FUN_00ac3dec(local_b0);
  local_78 = local_b0;
  lVar2 = FUN_00910878(&local_98,local_b0,&DAT_01b934dc,&local_78,auStack_80);
  *(undefined4 *)(lVar2 + 0x38) = local_70[0];
  FUN_008fce60(lVar2 + 0x40,local_68);
  *(undefined4 *)(lVar2 + 0x58) = local_50;
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00ec3e30(local_70,1);
  FUN_00ac3dfc(local_b0);
  local_78 = local_b0;
  lVar2 = FUN_00910878(&local_98,local_b0,&DAT_01b934dc,&local_78,auStack_80);
  *(undefined4 *)(lVar2 + 0x38) = local_70[0];
  FUN_008fce60(lVar2 + 0x40,local_68);
  *(undefined4 *)(lVar2 + 0x58) = local_50;
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  thunk_FUN_00e7051c(&local_c0,param_3);
  FUN_0090ee78(param_1,param_2,&local_c0,0,&local_98);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  FUN_00910328(&local_98,local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090ee78(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 undefined8 *param_5)

{
  void *pvVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  ulong local_180;
  void *local_178;
  void *local_170;
  ulong local_168;
  void *local_160;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar4 = FUN_00e70b14(param_3);
  if (iVar4 == 0) goto LAB_0090f1b8;
  sVar3 = FUN_00e70b28(param_3,0);
  if (sVar3 == 0x2f) {
    FUN_00e705c8(&local_168,"/");
    FUN_00e705c8(&local_180,&DAT_01e45acc);
    FUN_00e71248(param_3,0,&local_168,&local_180);
    if (local_178 != (void *)0x0) {
      operator_delete__(local_178);
      local_180 = 0;
      local_178 = (void *)0x0;
    }
    if (local_160 != (void *)0x0) {
      operator_delete__(local_160);
      local_168 = 0;
      local_160 = (void *)0x0;
    }
  }
  uVar5 = FUN_00e70b14(param_3);
  if (*(uint *)(param_1 + 0x178) < uVar5) {
    FUN_00e71810(&local_168,param_3,0,*(uint *)(param_1 + 0x178) - 3);
    FUN_00910394(param_3,&local_168);
    if (local_160 != (void *)0x0) {
      operator_delete__(local_160);
      local_168 = 0;
      local_160 = (void *)0x0;
    }
    FUN_00e705c8(&local_168,"...");
    FUN_00e70c34(param_3,&local_168);
    if (local_160 != (void *)0x0) {
      operator_delete__(local_160);
      local_168 = 0;
      local_160 = (void *)0x0;
    }
  }
  local_168 = local_168 & 0xffffffffffffff00;
  iVar4 = (**(code **)(**(long **)(param_1 + 200) + 0x70))();
  if (iVar4 == 0) {
    lVar6 = FUN_00e85318(0);
    FUN_00e6c2cc((double)lVar6,&local_168,0x100);
    if ((param_4 & 1) == 0) goto LAB_0090efe0;
LAB_0090efbc:
    lVar6 = param_1 + 0x48;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_0090efbc;
LAB_0090efe0:
    FUN_008fa54c(&local_180,param_2);
    lVar6 = FUN_0090e774(param_1,&local_180);
    if ((local_180 & 1) != 0) {
      operator_delete(local_170);
    }
  }
  uVar7 = FUN_00ac04b0(param_3);
  if ((uVar7 & 1) == 0) {
    local_180 = 0;
    local_178 = (void *)0x0;
    local_170 = (void *)0x0;
    FUN_00e70a24(param_3,&local_180);
    pvVar1 = (void *)((ulong)&local_180 | 1);
    if ((local_180 & 1) != 0) {
      pvVar1 = local_170;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xb8))
              (*(long **)(param_1 + 200),param_2,pvVar1,param_5);
    if (param_5 == (undefined8 *)0x0) {
      param_5 = operator_new(0x18);
      param_5[1] = 0;
      param_5[2] = 0;
      *param_5 = param_5 + 1;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xd0))(*(long **)(param_1 + 200),param_5);
    lVar8 = FUN_009580b8();
    FUN_008fa54c(local_198,param_2);
    FUN_008fa54c(local_1b0,&local_168);
    FUN_009e184c(lVar6,param_3,lVar8 + 0x5508,local_198,&DAT_0320ffa8,local_1b0,0,param_4 & 1,1,
                 param_5);
    if ((local_1b0[0] & 1) != 0) {
      operator_delete(local_1a0);
    }
  }
  else {
    if (param_5 == (undefined8 *)0x0) {
      param_5 = operator_new(0x18);
      param_5[1] = 0;
      param_5[2] = 0;
      *param_5 = param_5 + 1;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0xd0))(*(long **)(param_1 + 200),param_5);
    if (((DAT_02c091d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02c091d8), iVar4 != 0)) {
      FUN_00e70770(&DAT_02c091c8,&DAT_01b934d4);
      __cxa_atexit(FUN_0090e338,&DAT_02c091c8,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_02c091d8);
    }
    lVar8 = FUN_009580b8();
    FUN_008fa54c(&local_180,param_2);
    FUN_008fa54c(local_198,&local_168);
    FUN_009e184c(lVar6,&DAT_02c091c8,lVar8 + 0x5508,&local_180,&DAT_0320ffa8,local_198,0,param_4 & 1
                 ,0,param_5);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if ((local_180 & 1) != 0) {
    operator_delete(local_170);
  }
LAB_0090f1b8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

