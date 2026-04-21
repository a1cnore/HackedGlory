// functions/00e84 — 45 functions
#include "libGameKindred.h"




void FUN_00e84028(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"orderid");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "orderid";
    local_50 = 0x100005;
    local_58 = 7;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "orderid";
      local_50 = 0x100005;
      local_58 = 7;
      plVar3 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
      FUN_008fa54c(&local_60,plVar3);
      FUN_008fce60(param_2,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  lVar2 = FUN_008fd190(param_1,"steamid");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "steamid";
    local_50 = 0x100005;
    local_58 = 7;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "steamid";
      local_50 = 0x100005;
      local_58 = 7;
      plVar3 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
      FUN_008fa54c(&local_60,plVar3);
      FUN_008fce60(param_2 + 0x18,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  lVar2 = FUN_008fd190(param_1,"language");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "language";
    local_50 = 0x100005;
    local_58 = 8;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "language";
      local_50 = 0x100005;
      local_58 = 8;
      plVar3 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
      FUN_008fa54c(&local_60,plVar3);
      FUN_008fce60(param_2 + 0x30,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  lVar2 = FUN_008fd190(param_1,"currency");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "currency";
    local_50 = 0x100005;
    local_58 = 8;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "currency";
      local_50 = 0x100005;
      local_58 = 8;
      plVar3 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
      FUN_008fa54c(&local_60,plVar3);
      FUN_008fce60(param_2 + 0x48,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  lVar2 = FUN_008fd190(param_1,"amount");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "amount";
    local_50 = 0x100005;
    local_58 = 6;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "amount";
      local_50 = 0x100005;
      local_58 = 6;
      plVar3 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
      FUN_008fa54c(&local_60,plVar3);
      FUN_008fce60(param_2 + 0x60,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  lVar2 = FUN_008fd190(param_1,"product_id");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "product_id";
    local_50 = 0x100005;
    local_58 = 10;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "product_id";
      local_50 = 0x100005;
      local_58 = 10;
      plVar3 = (long *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)plVar3 + 0x12) >> 6 & 1) == 0) {
        plVar3 = (long *)*plVar3;
      }
      FUN_008fa54c(&local_60,plVar3);
      FUN_008fce60(param_2 + 0x78,&local_60);
      if (((ulong)local_60 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_4c,local_50));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e8442c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = 0x2820c48;
  puVar1[0xe] = 0x2820c70;
  puVar1[1] = &PTR_FUN_02820ce0;
  if ((*(byte *)(puVar1 + 9) & 1) != 0) {
    operator_delete((void *)puVar1[0xb]);
  }
  puVar1[1] = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(puVar1 + 2));
  std::__ndk1::ios_base::~ios_base((ios_base *)(puVar1 + 0xe));
  return;
}




void FUN_00e844a8(long param_1)

{
  std::__ndk1::ios_base::~ios_base((ios_base *)(param_1 + 8));
  return;
}




void FUN_00e844b0(void *param_1)

{
  std::__ndk1::ios_base::~ios_base((ios_base *)((long)param_1 + 8));
  operator_delete(param_1);
  return;
}




void FUN_00e844d8(long *param_1)

{
  std::__ndk1::ios_base::~ios_base((ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18) + 8));
  return;
}




void FUN_00e844ec(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  std::__ndk1::ios_base::~ios_base((ios_base *)((long)pvVar1 + 8));
  operator_delete(pvVar1);
  return;
}




void FUN_00e8451c(undefined8 *param_1)

{
  param_1[0xe] = 0x2820c70;
  *param_1 = 0x2820c48;
  param_1[1] = &PTR_FUN_02820ce0;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  param_1[1] = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  std::__ndk1::ios_base::~ios_base((ios_base *)(param_1 + 0xe));
  operator_delete(param_1);
  return;
}




void FUN_00e84590(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = 0x2820c48;
  puVar1[0xe] = 0x2820c70;
  puVar1[1] = &PTR_FUN_02820ce0;
  if ((*(byte *)(puVar1 + 9) & 1) != 0) {
    operator_delete((void *)puVar1[0xb]);
  }
  puVar1[1] = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(puVar1 + 2));
  std::__ndk1::ios_base::~ios_base((ios_base *)(puVar1 + 0xe));
  operator_delete(puVar1);
  return;
}




void FUN_00e84614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820ce0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  *param_1 = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(param_1 + 1));
  return;
}




void FUN_00e84664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820ce0;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  *param_1 = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(param_1 + 1));
  operator_delete(param_1);
  return;
}




void FUN_00e846bc(void)

{
  return;
}




void FUN_00e846c0(void)

{
  return;
}




undefined1  [16] FUN_00e846c4(long param_1,long param_2,int param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar5) {
    *(ulong *)(param_1 + 0x58) = uVar5;
    uVar4 = uVar5;
  }
  if (((param_4 & 0x18) != 0) && ((param_3 != 1 || ((param_4 & 0x18) != 0x18)))) {
    if (uVar4 == 0) {
      lVar6 = 0;
      if (param_3 != 0) goto LAB_00e84728;
LAB_00e84714:
      lVar7 = 0;
    }
    else {
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
        lVar6 = param_1 + 0x41;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x50);
      }
      lVar6 = uVar4 - lVar6;
      if (param_3 == 0) goto LAB_00e84714;
LAB_00e84728:
      lVar7 = lVar6;
      if (param_3 != 2) {
        if (param_3 != 1) goto LAB_00e84784;
        if ((param_4 >> 3 & 1) == 0) {
          lVar7 = uVar5 - *(long *)(param_1 + 0x28);
        }
        else {
          lVar7 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        }
      }
    }
    uVar1 = lVar7 + param_2;
    uVar3 = 0xffffffffffffffff;
    if (((long)uVar1 < 0) || (lVar6 < (long)uVar1)) goto LAB_00e84788;
    if ((uVar1 == 0) ||
       ((((param_4 >> 3 & 1) == 0 || (*(long *)(param_1 + 0x18) != 0)) &&
        (((param_4 >> 4 & 1) == 0 || (uVar5 != 0)))))) {
      if ((param_4 >> 3 & 1) != 0) {
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x10) + uVar1;
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      uVar3 = uVar1;
      if ((param_4 >> 4 & 1) != 0) {
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28) + (long)(int)uVar1;
      }
      goto LAB_00e84788;
    }
  }
LAB_00e84784:
  uVar3 = 0xffffffffffffffff;
LAB_00e84788:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  return auVar2 << 0x40;
}




void FUN_00e847b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00e847c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3,0);
  return;
}




undefined8 FUN_00e847cc(void)

{
  return 0;
}




undefined8 FUN_00e847d4(void)

{
  return 0;
}




long FUN_00e847dc(long *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  void *__src;
  size_t sVar2;
  long lVar3;
  undefined1 *puVar4;
  size_t __n;
  
  lVar3 = 0;
  if (0 < param_3) {
    do {
      __src = (void *)param_1[3];
      if (__src < (void *)param_1[4]) {
        sVar2 = param_1[4] - (long)__src;
        __n = param_3 - lVar3;
        if ((long)sVar2 <= param_3 - lVar3) {
          __n = sVar2;
        }
        if (0x7ffffffe < (long)__n) {
          __n = 0x7fffffff;
        }
        if (__n != 0) {
          memcpy(param_2,__src,__n);
          __src = (void *)param_1[3];
        }
        puVar4 = param_2 + __n;
        param_1[3] = (long)__src + (long)(int)__n;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar1 == -1) {
          return lVar3;
        }
        puVar4 = param_2 + 1;
        *param_2 = (char)iVar1;
        __n = 1;
      }
      lVar3 = __n + lVar3;
      param_2 = puVar4;
    } while (lVar3 < param_3);
  }
  return lVar3;
}




ulong FUN_00e84898(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x30);
  pbVar1 = *(byte **)(param_1 + 0x58);
  if (*(byte **)(param_1 + 0x58) < pbVar2) {
    *(byte **)(param_1 + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if ((*(byte *)(param_1 + 0x60) >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (*(byte **)(param_1 + 0x20) < pbVar1) {
      *(byte **)(param_1 + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(param_1 + 0x18) < pbVar2) {
      return (ulong)**(byte **)(param_1 + 0x18);
    }
  }
  return 0xffffffff;
}




ulong FUN_00e848e8(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((int)uVar1 != -1) {
    pbVar2 = (byte *)param_1[3];
    param_1[3] = (long)(pbVar2 + 1);
    uVar1 = (ulong)*pbVar2;
  }
  return uVar1;
}




uint FUN_00e84928(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(ulong *)(param_1 + 0x58);
  if (*(ulong *)(param_1 + 0x58) < uVar2) {
    *(ulong *)(param_1 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) < uVar2) {
    if (param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar2 - 1;
      *(ulong *)(param_1 + 0x20) = uVar1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar2 - 1) == (param_2 & 0xff))) {
      *(undefined1 **)(param_1 + 0x18) = (undefined1 *)(uVar2 - 1);
      *(ulong *)(param_1 + 0x20) = uVar1;
      *(undefined1 *)(uVar2 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}




long FUN_00e84998(long *param_1,undefined1 *param_2,long param_3)

{
  size_t __n;
  int iVar1;
  void *__dest;
  size_t sVar2;
  long lVar3;
  
  lVar3 = 0;
  if (0 < param_3) {
    do {
      __dest = (void *)param_1[6];
      if (__dest < (void *)param_1[7]) {
        sVar2 = param_1[7] - (long)__dest;
        __n = param_3 - lVar3;
        if ((long)sVar2 <= param_3 - lVar3) {
          __n = sVar2;
        }
        if (__n != 0) {
          memcpy(__dest,param_2,__n);
          __dest = (void *)param_1[6];
        }
        param_2 = param_2 + __n;
        lVar3 = __n + lVar3;
        param_1[6] = (long)__dest + __n;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
        if (iVar1 == -1) {
          return lVar3;
        }
        param_2 = param_2 + 1;
        lVar3 = lVar3 + 1;
      }
    } while (lVar3 < param_3);
  }
  return lVar3;
}




void FUN_00e84a4c(long *param_1,uint param_2)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_2 == 0xffffffff) {
    uVar5 = 0;
  }
  else {
    puVar11 = (undefined1 *)param_1[6];
    puVar7 = (undefined1 *)param_1[7];
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    if (puVar11 == puVar7) {
      if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
        uVar5 = 0xffffffff;
        goto LAB_00e84bc0;
      }
      lVar9 = param_1[0xb];
      lVar12 = param_1[5];
      puVar10 = (ulong *)(param_1 + 8);
      FUN_0093de70(puVar10,0);
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        lVar6 = 0x16;
      }
      else {
        lVar6 = (*puVar10 & 0xfffffffffffffffe) - 1;
      }
      FUN_008f68f8(puVar10,lVar6,0);
      if (((byte)*puVar10 & 1) == 0) {
        lVar6 = (long)param_1 + 0x41;
        uVar5 = (ulong)(byte)((byte)*puVar10 >> 1);
      }
      else {
        uVar5 = param_1[9];
        lVar6 = param_1[10];
      }
      puVar7 = (undefined1 *)(lVar6 + uVar5);
      puVar11 = puVar11 + (lVar6 - lVar12);
      puVar8 = (undefined1 *)(lVar6 + (lVar9 - lVar12));
      param_1[6] = (long)puVar11;
      param_1[7] = (long)puVar7;
      param_1[5] = lVar6;
      param_1[0xb] = (long)puVar8;
    }
    else {
      puVar8 = (undefined1 *)param_1[0xb];
    }
    local_70 = puVar11 + 1;
    ppuVar1 = (undefined1 **)(param_1 + 0xb);
    if (puVar8 <= local_70) {
      ppuVar1 = &local_70;
    }
    puVar8 = *ppuVar1;
    param_1[0xb] = (long)puVar8;
    if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        lVar9 = (long)param_1 + 0x41;
      }
      else {
        lVar9 = param_1[10];
      }
      param_1[2] = lVar9;
      param_1[3] = lVar9 + (lVar3 - lVar2);
      param_1[4] = (long)puVar8;
    }
    if (puVar11 == puVar7) {
      uVar5 = (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
    }
    else {
      param_1[6] = (long)local_70;
      *puVar11 = (char)param_2;
      uVar5 = (ulong)(param_2 & 0xff);
    }
  }
LAB_00e84bc0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00e84bf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(param_1 + 1));
  return;
}




void FUN_00e84c08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(param_1 + 1));
  operator_delete(param_1);
  return;
}




undefined1  [16] FUN_00e84c3c(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}




undefined1  [16] FUN_00e84c48(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}




undefined8 FUN_00e84c54(void)

{
  return 0xffffffff;
}




undefined8 FUN_00e84c5c(void)

{
  return 0xffffffff;
}




undefined8 FUN_00e84c64(void)

{
  return 0xffffffff;
}




void FUN_00e84c6c(ulong *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  if ((*(uint *)(param_2 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x60) >> 3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar4 = *(undefined1 **)(param_2 + 0x10);
    puVar6 = *(undefined1 **)(param_2 + 0x20);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar7 = (long)puVar6 - (long)puVar4;
    if (0xffffffffffffffef < uVar7) {
LAB_00e84da8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar7 < 0x17) {
      puVar2 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar7 << 1);
    }
    else {
      uVar3 = uVar7 + 0x10 & 0xfffffffffffffff0;
      puVar2 = operator_new(uVar3);
      param_1[1] = uVar7;
      param_1[2] = (ulong)puVar2;
      *param_1 = uVar3 | 1;
    }
    puVar1 = puVar2;
    if (puVar4 == puVar6) goto LAB_00e84d90;
    do {
      puVar5 = puVar4 + 1;
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
      puVar4 = puVar5;
    } while (puVar6 != puVar5);
  }
  else {
    puVar6 = *(undefined1 **)(param_2 + 0x30);
    puVar4 = *(undefined1 **)(param_2 + 0x58);
    if (*(undefined1 **)(param_2 + 0x58) < puVar6) {
      *(undefined1 **)(param_2 + 0x58) = puVar6;
      puVar4 = puVar6;
    }
    puVar6 = *(undefined1 **)(param_2 + 0x28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar7 = (long)puVar4 - (long)puVar6;
    if (0xffffffffffffffef < uVar7) goto LAB_00e84da8;
    if (uVar7 < 0x17) {
      puVar2 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar7 << 1);
    }
    else {
      uVar3 = uVar7 + 0x10 & 0xfffffffffffffff0;
      puVar2 = operator_new(uVar3);
      param_1[1] = uVar7;
      param_1[2] = (ulong)puVar2;
      *param_1 = uVar3 | 1;
    }
    puVar1 = puVar2;
    if (puVar6 == puVar4) goto LAB_00e84d90;
    do {
      puVar5 = puVar6 + 1;
      *puVar1 = *puVar6;
      puVar1 = puVar1 + 1;
      puVar6 = puVar5;
    } while (puVar4 != puVar5);
  }
  puVar2 = puVar2 + uVar7;
LAB_00e84d90:
  *puVar2 = 0;
  return;
}




void FUN_00e84dac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820de0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf8;
  return;
}




void FUN_00e84dd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820de0;
  FUN_00e84dec();
  return;
}




void FUN_00e84dec(long *param_1)

{
  undefined4 uVar1;
  
  if (param_1[3] != 0) {
    FUN_00e8500c(param_1[3],param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = DAT_02bf251c;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf8;
  *(undefined4 *)(param_1 + 4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00e84e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}




void FUN_00e84e48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe84e4c);
  (*pcVar1)();
}




bool FUN_00e84e4c(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}




byte FUN_00e84e5c(long param_1)

{
  return *(byte *)(param_1 + 0x24) >> 1 & 1;
}




byte FUN_00e84e68(long param_1)

{
  return *(byte *)(param_1 + 0x24) & 1;
}




byte FUN_00e84e74(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if ((bVar1 >> 2 & 1) != 0) {
    *(byte *)(param_1 + 0x24) = bVar1 & 0xfb;
  }
  return bVar1 >> 2 & 1;
}




void FUN_00e84e8c(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 7;
  return;
}




void FUN_00e84e9c(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xf8 | 5;
  return;
}




void FUN_00e84eb4(long param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00e84dec();
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




undefined4 FUN_00e84eec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




void FUN_00e84ef4(long param_1)

{
  FUN_00e77acc(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}




int FUN_00e84f24(pthread_mutex_t *param_1)

{
  long lVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  
  pthread_mutex_lock(param_1);
  ppVar3 = param_1 + 1;
  lVar1 = ppVar3->__align;
  while (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_00e84dec();
    lVar1 = lVar4;
  }
  ppVar3->__align = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x38) = 0;
  pthread_mutex_unlock(param_1);
  ppVar3->__align = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x38) = 0;
  iVar2 = pthread_mutex_destroy(param_1);
  return iVar2;
}




void FUN_00e84f88(pthread_mutex_t *param_1,long param_2)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  
  FUN_00e84eb4(param_2,param_1,*(undefined4 *)((long)param_1 + 0x40));
  pthread_mutex_lock(param_1);
  *(int *)((long)param_1 + 0x40) = *(int *)((long)param_1 + 0x40) + 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar2 = *(long *)((long)param_1 + 0x30);
  *(long *)(param_2 + 8) = lVar2;
  ppVar1 = param_1 + 1;
  if (param_1[1].__align != 0) {
    ppVar1 = (pthread_mutex_t *)(lVar2 + 0x10);
  }
  ppVar1->__align = param_2;
  *(long *)((long)param_1 + 0x30) = param_2;
  *(int *)((long)param_1 + 0x38) = *(int *)((long)param_1 + 0x38) + 1;
  pthread_mutex_unlock(param_1);
  FUN_00e84eec(param_2);
  return;
}

