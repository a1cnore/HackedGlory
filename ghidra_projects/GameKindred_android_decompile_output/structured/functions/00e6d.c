// functions/00e6d — 24 functions
#include "libGameKindred.h"




undefined8 * FUN_00e6d040(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00e6d0f8(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_00e6d0f8(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00e6d16c:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_00e6d16c;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




long * FUN_00e6d1a8(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  FUN_00e6cfd4((long)param_2 + 0x38,*(undefined8 *)((long)param_2 + 0x40));
  if ((*(byte *)((long)param_2 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_2 + 0x30));
  }
  operator_delete(param_2);
  return plVar3;
}




undefined8 * FUN_00e6d258(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00e6d310(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_00e6d310(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00e6d384:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_00e6d384;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void * FUN_00e6d3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00e6d47c(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x50);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x40) = 0;
    *(undefined8 *)((long)pvVar4 + 0x48) = 0;
    *(undefined8 **)((long)pvVar4 + 0x38) = (undefined8 *)((long)pvVar4 + 0x40);
    puVar3 = (undefined8 *)FUN_00e6d5a8(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00e6d47c(long param_1,undefined8 *param_2,byte *param_3)

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
LAB_00e6d4e0:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00e6d4fc;
          if (iVar4 < 0) goto LAB_00e6d504;
          goto LAB_00e6d57c;
        }
LAB_00e6d568:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00e6d568;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00e6d4e0;
      }
LAB_00e6d4fc:
      if (uVar2 <= uVar1) break;
LAB_00e6d504:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00e6d57c:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00e6d5a8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void * FUN_00e6d5fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00e6d6b4(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x48);
    FUN_008fcdb8((long)pvVar4 + 0x20,param_3);
    thunk_FUN_00e7051c((long)pvVar4 + 0x38,param_3 + 0x18);
    puVar3 = (undefined8 *)FUN_00e6d7e0(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00e6d6b4(long param_1,undefined8 *param_2,byte *param_3)

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
LAB_00e6d718:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00e6d734;
          if (iVar4 < 0) goto LAB_00e6d73c;
          goto LAB_00e6d7b4;
        }
LAB_00e6d7a0:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00e6d7a0;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00e6d718;
      }
LAB_00e6d734:
      if (uVar2 <= uVar1) break;
LAB_00e6d73c:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00e6d7b4:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00e6d7e0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void thunk_FUN_00e6dd88(undefined8 *param_1)

{
  param_1[1] = 0xefcdab8967452301;
  *param_1 = 0;
  param_1[2] = 0x1032547698badcfe;
  return;
}




void thunk_FUN_00e6ddac(uint *param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < (int)param_3) {
    uVar2 = *param_1;
    uVar3 = uVar2 >> 3 & 0x3f;
    uVar4 = param_1[1] + (param_3 >> 0x1d);
    *param_1 = uVar2 + param_3 * 8;
    param_1[1] = uVar4;
    if (CARRY4(uVar2,param_3 * 8)) {
      param_1[1] = uVar4 + 1;
    }
    if (uVar3 != 0) {
      uVar4 = 0x40 - uVar3;
      if ((int)(uVar3 + param_3) < 0x41) {
        uVar4 = param_3;
      }
      memcpy((void *)((long)param_1 + (ulong)uVar3 + 0x18),param_2,(long)(int)uVar4);
      if ((int)(uVar4 + uVar3) < 0x40) {
        return;
      }
      param_2 = (void *)((long)param_2 + (long)(int)uVar4);
      param_3 = param_3 - uVar4;
      FUN_00e6ded8(param_1,param_1 + 6);
    }
    if (0x3f < (int)param_3) {
      uVar4 = 0xffffff80;
      if (-0x80 < (int)~param_3) {
        uVar4 = ~param_3;
      }
      uVar4 = param_3 + uVar4 + 0x40 & 0xffffffc0;
      pvVar1 = (void *)((long)param_2 + (ulong)uVar4 + 0x40);
      iVar5 = param_3 + 0x40;
      do {
        FUN_00e6ded8(param_1,param_2);
        iVar5 = iVar5 + -0x40;
        param_2 = (void *)((long)param_2 + 0x40);
      } while (0x7f < iVar5);
      param_3 = (param_3 - 0x40) - uVar4;
      param_2 = pvVar1;
    }
    if (param_3 != 0) {
      memcpy(param_1 + 6,param_2,(long)(int)param_3);
      return;
    }
  }
  return;
}




void FUN_00e6d83c(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  bVar2 = (*param_2 & 1) == 0;
  if (bVar2) {
    pbVar3 = param_2 + 1;
  }
  uVar1 = (uint)(*param_2 >> 1);
  if (!bVar2) {
    uVar1 = *(uint *)(param_2 + 8);
  }
  FUN_00e6ddac(param_1,pbVar3,uVar1);
  return;
}




void FUN_00e6d85c(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20);
  while (iVar1 == 0) {
    FUN_00e6d8f8(param_2,auStack_448,0x400);
    FUN_00e6ddac(param_1,auStack_448,(int)param_2[1]);
    iVar1 = *(int *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_00e6d8f8(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ios_base *this;
  uint uVar3;
  char local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  FUN_00e6da14(local_40,param_1,1);
  this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
  if (local_40[0] == '\0') {
    uVar3 = *(uint *)(this + 0x20) | 4;
  }
  else {
    lVar2 = (**(code **)(**(long **)(this + 0x28) + 0x40))(*(long **)(this + 0x28),param_2,param_3);
    param_1[1] = lVar2;
    if (lVar2 == param_3) goto LAB_00e6d994;
    this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
    uVar3 = *(uint *)(this + 0x20) | 6;
  }
  std::__ndk1::ios_base::clear(this,uVar3);
LAB_00e6d994:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6d9c4(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  
  lVar4 = 0;
  pcVar2 = "0123456789abcdef";
  if ((param_3 & 1) == 0) {
    pcVar2 = "0123456789ABCDEF0123456789abcdef";
  }
  pcVar5 = (char *)(param_2 + 1);
  do {
    pbVar1 = (byte *)(param_1 + lVar4);
    lVar4 = lVar4 + 1;
    cVar3 = pcVar2[(ulong)*pbVar1 & 0xf];
    pcVar5[-1] = pcVar2[*pbVar1 >> 4];
    *pcVar5 = cVar3;
    pcVar5 = pcVar5 + 2;
  } while (lVar4 != 0x10);
  *(undefined1 *)(param_2 + 0x20) = 0;
  return;
}




void FUN_00e6da14(undefined1 *param_1,long *param_2,uint param_3)

{
  ios_base *piVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  piVar1 = (ios_base *)((long)param_2 + *(long *)(*param_2 + -0x18));
  if (*(uint *)(piVar1 + 0x20) != 0) {
    std::__ndk1::ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) | 4);
    goto LAB_00e6dbbc;
  }
  if (*(long *)(piVar1 + 0x88) != 0) {
    FUN_00e6dbf0();
  }
  if (((param_3 & 1) == 0) &&
     ((*(byte *)((long)param_2 + *(long *)(*param_2 + -0x18) + 9) >> 4 & 1) != 0)) {
    std::__ndk1::ios_base::getloc();
    lVar5 = std::__ndk1::locale::use_facet(alStack_50,(id *)&std::__ndk1::ctype<char>::id);
    std::__ndk1::locale::~locale(alStack_50);
    plVar6 = *(long **)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x28);
    while (plVar7 = plVar6, plVar6 != (long *)0x0) {
      if ((plVar6[3] == plVar6[4]) && (iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar4 == -1))
      {
        plVar7 = (long *)0x0;
        break;
      }
      if ((byte *)plVar6[3] == (byte *)plVar6[4]) {
        bVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
      }
      else {
        bVar3 = *(byte *)plVar6[3];
      }
      if (((char)bVar3 < '\0') || ((*(byte *)(*(long *)(lVar5 + 0x10) + (ulong)bVar3 * 8) & 1) == 0)
         ) {
        if (plVar6 == (long *)0x0) goto LAB_00e6db88;
        goto LAB_00e6db68;
      }
      if (plVar6[3] == plVar6[4]) {
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      else {
        plVar6[3] = plVar6[3] + 1;
      }
    }
    plVar6 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
LAB_00e6db68:
      if ((plVar6[3] != plVar6[4]) || (iVar4 = (**(code **)(*plVar7 + 0x48))(), iVar4 != -1))
      goto LAB_00e6dba0;
    }
LAB_00e6db88:
    piVar1 = (ios_base *)((long)param_2 + *(long *)(*param_2 + -0x18));
    std::__ndk1::ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) | 6);
  }
LAB_00e6dba0:
  *param_1 = *(int *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20) == 0;
LAB_00e6dbbc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_00e6dbf0(long *param_1)

{
  ios_base *this;
  long lVar1;
  int iVar2;
  char local_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28) != 0) {
    FUN_00e6dca4(local_38,param_1);
    if ((local_38[0] != '\0') &&
       (iVar2 = (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28) + 0x30)
                )(), iVar2 == -1)) {
      this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
      std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 1);
    }
    FUN_00e6dcf0(local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6dca4(undefined1 *param_1,long *param_2)

{
  *param_1 = 0;
  *(long **)(param_1 + 8) = param_2;
  if (*(int *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_2 + *(long *)(*param_2 + -0x18) + 0x88) != 0) {
      FUN_00e6dbf0();
    }
    *param_1 = 1;
  }
  return;
}




void FUN_00e6dcf0(long param_1)

{
  ios_base *this;
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar3 + -0x18);
  if ((((*(long *)((long)plVar3 + lVar4 + 0x28) != 0) &&
       (*(int *)((long)plVar3 + lVar4 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar3 + lVar4 + 9) >> 5 & 1) != 0)) &&
     ((uVar2 = std::uncaught_exception(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)((long)*(long **)(param_1 + 8) +
                                       *(long *)(**(long **)(param_1 + 8) + -0x18) + 0x28) + 0x30))
                         (), iVar1 == -1)))) {
    this = (ios_base *)((long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18))
    ;
    std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 1);
    return;
  }
  return;
}




void FUN_00e6dd88(undefined8 *param_1)

{
  param_1[1] = 0xefcdab8967452301;
  *param_1 = 0;
  param_1[2] = 0x1032547698badcfe;
  return;
}




void FUN_00e6ddac(uint *param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < (int)param_3) {
    uVar2 = *param_1;
    uVar3 = uVar2 >> 3 & 0x3f;
    uVar4 = param_1[1] + (param_3 >> 0x1d);
    *param_1 = uVar2 + param_3 * 8;
    param_1[1] = uVar4;
    if (CARRY4(uVar2,param_3 * 8)) {
      param_1[1] = uVar4 + 1;
    }
    if (uVar3 != 0) {
      uVar4 = 0x40 - uVar3;
      if ((int)(uVar3 + param_3) < 0x41) {
        uVar4 = param_3;
      }
      memcpy((void *)((long)param_1 + (ulong)uVar3 + 0x18),param_2,(long)(int)uVar4);
      if ((int)(uVar4 + uVar3) < 0x40) {
        return;
      }
      param_2 = (void *)((long)param_2 + (long)(int)uVar4);
      param_3 = param_3 - uVar4;
      FUN_00e6ded8(param_1,param_1 + 6);
    }
    if (0x3f < (int)param_3) {
      uVar4 = 0xffffff80;
      if (-0x80 < (int)~param_3) {
        uVar4 = ~param_3;
      }
      uVar4 = param_3 + uVar4 + 0x40 & 0xffffffc0;
      pvVar1 = (void *)((long)param_2 + (ulong)uVar4 + 0x40);
      iVar5 = param_3 + 0x40;
      do {
        FUN_00e6ded8(param_1,param_2);
        iVar5 = iVar5 + -0x40;
        param_2 = (void *)((long)param_2 + 0x40);
      } while (0x7f < iVar5);
      param_3 = (param_3 - 0x40) - uVar4;
      param_2 = pvVar1;
    }
    if (param_3 != 0) {
      memcpy(param_1 + 6,param_2,(long)(int)param_3);
      return;
    }
  }
  return;
}




void FUN_00e6ded8(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar24 = tpidr_el0;
  local_68 = *(long *)(lVar24 + 0x28);
  uVar14 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar15 = *(uint *)(param_1 + 0x14);
  if (((ulong)param_2 & 3) != 0) {
    uStack_78 = *(undefined8 *)(param_2 + 0xe);
    local_80 = *(undefined8 *)(param_2 + 0xc);
    uStack_88 = *(undefined8 *)(param_2 + 10);
    local_90 = *(undefined8 *)(param_2 + 8);
    uStack_98 = *(undefined8 *)(param_2 + 6);
    local_a0 = *(undefined8 *)(param_2 + 4);
    uStack_a8 = *(undefined8 *)(param_2 + 2);
    local_b0 = *(undefined8 *)param_2;
    param_2 = (int *)&local_b0;
  }
  iVar6 = *param_2;
  iVar16 = param_2[1];
  uVar1 = *(int *)(param_1 + 8) + (uVar15 & (uVar14 ^ 0xffffffff) | uVar5 & uVar14) + iVar6 +
          0xd76aa478;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar14;
  iVar7 = param_2[2];
  iVar17 = param_2[3];
  uVar2 = uVar15 + iVar16 + (uVar1 & uVar14 | uVar5 & (uVar1 ^ 0xffffffff)) + 0xe8c7b756;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = uVar5 + iVar7 + (uVar2 & uVar1 | uVar14 & (uVar2 ^ 0xffffffff)) + 0x242070db;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  iVar8 = param_2[4];
  iVar18 = param_2[5];
  uVar4 = uVar14 + iVar17 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0xc1bdceee;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = uVar1 + iVar8 + (uVar4 & uVar3 | uVar2 & (uVar4 ^ 0xffffffff)) + 0xf57c0faf;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  iVar9 = param_2[6];
  iVar19 = param_2[7];
  uVar2 = iVar18 + uVar2 + (uVar1 & uVar4 | uVar3 & (uVar1 ^ 0xffffffff)) + 0x4787c62a;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = iVar9 + uVar3 + (uVar2 & uVar1 | uVar4 & (uVar2 ^ 0xffffffff)) + 0xa8304613;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  iVar10 = param_2[8];
  iVar20 = param_2[9];
  uVar4 = iVar19 + uVar4 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0xfd469501;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = iVar10 + uVar1 + (uVar4 & uVar3 | uVar2 & (uVar4 ^ 0xffffffff)) + 0x698098d8;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  iVar11 = param_2[10];
  iVar21 = param_2[0xb];
  uVar2 = iVar20 + uVar2 + (uVar1 & uVar4 | uVar3 & (uVar1 ^ 0xffffffff)) + 0x8b44f7af;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = (iVar11 + uVar3 + (uVar2 & uVar1 | uVar4 & (uVar2 ^ 0xffffffff))) - 0xa44f;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  iVar12 = param_2[0xc];
  iVar22 = param_2[0xd];
  uVar4 = iVar21 + uVar4 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0x895cd7be;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = iVar12 + uVar1 + (uVar4 & uVar3 | uVar2 & (uVar4 ^ 0xffffffff)) + 0x6b901122;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar22 + uVar2 + (uVar1 & uVar4 | uVar3 & (uVar1 ^ 0xffffffff)) + 0xfd987193;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar13 = param_2[0xe];
  iVar23 = param_2[0xf];
  uVar3 = iVar13 + uVar3 + (uVar2 & uVar1 | uVar4 & (uVar2 ^ 0xffffffff)) + 0xa679438e;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar23 + uVar4 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0x49b40821;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = iVar16 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xf61e2562;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar9 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xc040b340;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0x265e5a51;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar6 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0xe9b6c7aa;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar18 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xd62f105d;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar11 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0x2441453;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0xd8a1e681;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar8 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0xe7d3fbc8;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0x21e1cde6;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar13 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xc33707d6;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0xf4d50d87;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar10 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0x455a14ed;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xa9e3e905;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar7 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xfcefa3f8;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0x676f02d9;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar12 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0x8d2a4c8a;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = (iVar18 + uVar1 + (uVar4 ^ uVar3 ^ uVar2)) - 0x5c6be;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar10 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x8771f681;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x6d9d6122;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar13 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xfde5380c;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar16 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xa4beea44;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar8 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x4bdecfa9;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xf6bb4b60;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar11 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xbebfbc70;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0x289b7ec6;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar6 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xeaa127fa;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xd4ef3085;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar9 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0x4881d05;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xd9d4d039;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar12 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xe6db99e5;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x1fa27cf8;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar7 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xc4ac5665;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar6 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf4292244;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar19 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x432aff97;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar13 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xab9423a7;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar18 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xfc93a039;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar12 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x655b59c3;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar17 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x8f0ccc92;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = (iVar11 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1)) - 0x100b83;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar16 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x85845dd1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar10 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x6fa87e4f;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar23 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xfe2ce6e0;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar9 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xa3014314;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar22 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x4e0811a1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar8 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf7537e82;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar21 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xbd3af235;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar7 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0x2ad7d2bb;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  *(uint *)(param_1 + 0x10) = uVar3 + uVar5;
  *(uint *)(param_1 + 0x14) = uVar2 + uVar15;
  uVar5 = iVar20 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xeb86d391;
  *(uint *)(param_1 + 8) = uVar1 + *(int *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar3 + uVar14 + (uVar5 >> 0xb | uVar5 * 0x200000);
  if (*(long *)(lVar24 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

