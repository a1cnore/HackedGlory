// functions/00948 — 52 functions
#include "libGameKindred.h"




void FUN_0094800c(void)

{
  FUN_00947490(DAT_02c7ece8);
  return;
}




void FUN_00948018(void)

{
  FUN_009470c0(DAT_02c7ece8,&DAT_0320ffa8,&DAT_0320ffa8);
  return;
}




void FUN_00948030(void)

{
  FUN_00e7d4c4();
  FUN_00e7d210();
  return;
}




void FUN_00948050(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00947d74("Connection%20Dropped");
    return;
  }
  return;
}




void FUN_00948078(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x668);
  FUN_009456b4();
  DAT_02c7ece8 = pvVar1;
  return;
}




void FUN_009480a8(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_02c7ece8;
  if (DAT_02c7ece8 != (void *)0x0) {
    FUN_0094656c(DAT_02c7ece8);
    operator_delete(pvVar1);
  }
  DAT_02c7ece8 = (void *)0x0;
  return;
}




uint FUN_009480e0(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e812cc();
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    uVar1 = thunk_FUN_00ec9510();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}




undefined8 FUN_00948108(void)

{
  return 0;
}




void FUN_00948110(undefined8 param_1,undefined8 param_2)

{
  FUN_009470c0(DAT_02c7ece8,param_1,param_2);
  return;
}




void FUN_00948128(undefined4 param_1)

{
  FUN_009474dc(DAT_02c7ece8,param_1);
  return;
}




void FUN_0094813c(void)

{
  FUN_00946a00(DAT_02c7ece8);
  return;
}




void FUN_00948148(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_00938788(param_1,param_2,local_50,1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009481cc(byte param_1)

{
  *(byte *)(DAT_02c7ece8 + 0x27a) = param_1 & 1;
  return;
}




void FUN_009481e8(byte *param_1,int *param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  *param_3 = 1;
  FUN_00e82a7c();
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((*param_2 == 0) || (uVar1 == 0)) {
    FUN_00e82a5c(param_1,param_2);
    *param_3 = 0;
  }
  return;
}




void FUN_00948250(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = DAT_02c7ece8;
  FUN_008fce60(param_1,DAT_02c7ece8 + 0x198);
  *param_2 = *(undefined4 *)(lVar1 + 0x1b0);
  return;
}




void FUN_00948284(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = DAT_02c7ece8;
  FUN_008fce60(param_1,DAT_02c7ece8 + 0x218);
  FUN_008fce60(param_2,lVar1 + 0x230);
  *param_3 = *(undefined4 *)(lVar1 + 0x248);
  return;
}




void FUN_009482d0(undefined8 param_1)

{
  FUN_008fce60(param_1,DAT_02c7ece8 + 0x250);
  return;
}




long FUN_009482e4(void)

{
  return DAT_02c7ece8 + 0x1b8;
}




void FUN_009482f4(undefined8 param_1)

{
  FUN_00947778(DAT_02c7ece8,param_1);
  return;
}




void FUN_00948308(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  uVar2 = DAT_02c7ece8;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008fcdb8(local_50,param_2);
  FUN_009477e8(uVar2,local_50,param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00948398(undefined8 param_1)

{
  DAT_02c7ece0 = param_1;
  return;
}




undefined1 FUN_009483a4(void)

{
  return *(undefined1 *)(DAT_02c7ece8 + 0x27c);
}




void FUN_009483b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(DAT_02c7ece8 + 0x280) == -1 || param_3 < *(int *)(DAT_02c7ece8 + 0x280)) {
    return;
  }
  FUN_0090c4b8();
  return;
}




void FUN_009483d4(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  byte local_110 [16];
  void *local_100;
  byte local_f8 [16];
  void *local_e8;
  byte local_e0 [16];
  void *local_d0;
  char local_c4 [4];
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00e7fbac();
  if (lVar4 == 200) {
    FUN_00e7fb78(local_60,param_1);
    FUN_00923aa4(local_60,&DAT_0320ff90);
    lVar4 = FUN_00948680(local_60,0x3a,0);
    if (lVar4 == -1) {
      FUN_00e7fb78(local_78,param_1);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      lVar4 = DAT_02c7ece8;
      FUN_008fcdb8(local_90,&DAT_0320ffa8);
      FUN_008fce60(lVar4 + 0x2c8,local_90);
      *(undefined4 *)(lVar4 + 0x2e0) = 0;
      *(undefined1 *)(lVar4 + 0x2e4) = 1;
    }
    else {
      FUN_0093ddb0(local_a8,local_60,0,lVar4,local_60);
      FUN_008fcdb8(local_78,local_a8);
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      FUN_0093ddb0(local_c0,local_60,lVar4 + 1,0xffffffffffffffff,local_60);
      FUN_008fcdb8(local_a8,local_c0);
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      pvVar1 = (void *)((ulong)local_a8 | 1);
      if ((local_a8[0] & 1) != 0) {
        pvVar1 = local_98;
      }
      uVar3 = FUN_00e6ab4c(pvVar1,local_c4);
      lVar4 = DAT_02c7ece8;
      if (local_c4[0] == '\0') {
        FUN_008fcdb8(local_f8,&DAT_0320ffa8);
        FUN_008fce60(lVar4 + 0x2c8,local_f8);
        *(undefined4 *)(lVar4 + 0x2e0) = 0;
        *(undefined1 *)(lVar4 + 0x2e4) = 1;
        if ((local_f8[0] & 1) != 0) {
          operator_delete(local_e8);
        }
        FUN_00e7fb78(local_c0,param_1);
      }
      else {
        FUN_008fcdb8(local_e0,local_78);
        FUN_008fce60(lVar4 + 0x2c8,local_e0);
        *(undefined4 *)(lVar4 + 0x2e0) = uVar3;
        *(undefined1 *)(lVar4 + 0x2e4) = 1;
        local_b0 = local_d0;
        local_c0[0] = local_e0[0];
      }
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      local_80 = local_68;
      local_90[0] = local_78[0];
      if ((local_a8[0] & 1) != 0) {
        operator_delete(local_98);
        local_80 = local_68;
        local_90[0] = local_78[0];
      }
    }
    local_100 = local_50;
    local_110[0] = local_60[0];
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
      local_100 = local_50;
      local_110[0] = local_60[0];
    }
  }
  else {
    FUN_00e7fbac(param_1);
    FUN_00e7fb78(local_60,param_1);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    lVar4 = DAT_02c7ece8;
    FUN_008fcdb8(local_110,&DAT_0320ffa8);
    FUN_008fce60(lVar4 + 0x2c8,local_110);
    *(undefined4 *)(lVar4 + 0x2e0) = 0;
    *(undefined1 *)(lVar4 + 0x2e4) = 1;
  }
  if ((local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00948680(byte *param_1,uint param_2,ulong param_3)

{
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
    uVar2 = (ulong)(*param_1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  __n = uVar2 - param_3;
  if (uVar2 < param_3 || __n == 0) {
    lVar3 = -1;
  }
  else {
    if (__n == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = memchr(pbVar4 + param_3,param_2 & 0xff,__n);
    }
    lVar3 = (long)pvVar1 - (long)pbVar4;
    if (pvVar1 == (void *)0x0) {
      lVar3 = -1;
    }
  }
  return lVar3;
}




void FUN_009486e8(undefined8 param_1)

{
  FUN_008fcdb8(param_1,&DAT_02c7ecc8);
  return;
}




void FUN_009486f8(void *param_1)

{
  FUN_0094669c();
  operator_delete(param_1);
  return;
}




undefined8 FUN_0094871c(void)

{
  return 5;
}




void FUN_00948724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb058;
  FUN_00947050(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00948764(void)

{
  return 0x1c;
}




void FUN_0094876c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x28) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x28) * 0x148;
      do {
        FUN_00948920(lVar1);
        lVar2 = lVar2 + -0x148;
        lVar1 = lVar1 + 0x148;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_009487c0(void)

{
  return;
}




void FUN_009487c4(long param_1)

{
  FUN_009464bc(*(undefined8 *)(param_1 + 8));
  FUN_00e80ed0();
  FUN_009470c0(DAT_02c7ece8,&DAT_0320ffa8,&DAT_0320ffa8);
  return;
}




void FUN_009487f4(long param_1)

{
  FUN_009464bc(*(undefined8 *)(param_1 + 8));
  FUN_00e80ed0();
  FUN_009470c0(DAT_02c7ece8,&DAT_0320ffa8,&DAT_0320ffa8);
  return;
}




void FUN_00948824(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x20] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x10));
        }
        lVar1 = lVar1 + -0x38;
        pbVar2 = pbVar2 + 0x38;
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




void FUN_009488b0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    FUN_008fd2c4(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}




void FUN_009488e8(long param_1)

{
  free(*(void **)(param_1 + 0x10));
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}




void FUN_00948920(byte *param_1)

{
  if ((param_1[0x120] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x130));
  }
  if ((param_1[0x108] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x118));
  }
  FUN_009489b4(param_1 + 0x70);
  FUN_00948a38(param_1 + 0x60,1);
  FUN_00948ab4(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  FUN_00941408(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_009489b4(byte *param_1)

{
  if ((param_1[0x78] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  if ((param_1[0x60] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  if ((param_1[0x48] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  if ((param_1[0x30] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x40));
  }
  if ((param_1[0x18] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_00948a38(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((*(byte *)(puVar2 + -2) & 1) != 0) {
          operator_delete((void *)*puVar2);
        }
        lVar1 = lVar1 + -0x28;
        puVar2 = puVar2 + 5;
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




void FUN_00948ab4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00948ab4(param_1,*param_2);
    FUN_00948ab4(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00948b10(undefined8 param_1,undefined8 param_2)

{
  FUN_009483d4(param_2);
  return;
}




undefined8 * FUN_00948b18(long param_1,byte *param_2)

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
  puVar6 = (undefined8 *)FUN_00948bd0(param_1,param_2,*puVar7,puVar7);
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




long FUN_00948bd0(undefined8 param_1,byte *param_2,long param_3,long param_4)

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
LAB_00948c44:
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
        if (uVar4 == 0) goto LAB_00948c44;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




undefined8 * FUN_00948c80(void)

{
  void *pvVar1;
  
  if (DAT_02c7ecf0 == (undefined8 *)0x0) {
    DAT_02c7ecf0 = operator_new(0x18);
    *(undefined4 *)(DAT_02c7ecf0 + 2) = 0;
    *DAT_02c7ecf0 = 0;
    DAT_02c7ecf0[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_02c7ecf8 = pvVar1;
  }
  return DAT_02c7ecf0;
}




int FUN_00948cd8(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027bb0b0;
  plVar3 = (long *)FUN_00948c80();
  __mutex = DAT_02c7ecf8;
  pthread_mutex_lock(DAT_02c7ecf8);
  param_1[2] = 0;
  lVar4 = plVar3[1];
  param_1[1] = lVar4;
  plVar1 = plVar3;
  if (*plVar3 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar3[1] = (long)param_1;
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




int FUN_00948d58(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_027bb0b0;
  uVar2 = FUN_00948c80();
  __mutex = DAT_02c7ecf8;
  pthread_mutex_lock(DAT_02c7ecf8);
  FUN_00948db4(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00948db4(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00948e14(void *param_1)

{
  FUN_00948d58();
  operator_delete(param_1);
  return;
}




void FUN_00948e38(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_00948e74(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined **local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined8 local_248;
  void *local_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [456];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  FUN_00948f94(&local_290,param_1);
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_290);
      (**(code **)(*plVar3 + 0x38))(plVar3,auStack_228);
      plVar3 = (long *)plVar3[2];
    } while (plVar3 != (long *)0x0);
  }
  local_290 = &PTR_FUN_027bb448;
  FUN_009515b0(auStack_210);
  FUN_00951478(auStack_238,1);
  if (local_240 != (void *)0x0) {
    operator_delete__(local_240);
    local_248 = 0;
    local_240 = (void *)0x0;
  }
  FUN_0095132c(auStack_258,1);
  FUN_009512b0(auStack_268,1);
  FUN_00e84dd8(&local_290);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00948f94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_02820de0;
  uVar1 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_027bb448;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  FUN_00950aa8(param_1 + 5,param_2 + 0x28);
  FUN_00950b30(param_1 + 7,param_2 + 0x38);
  FUN_00950ef4(param_1 + 9,param_2 + 0x48);
  FUN_00950f54(param_1 + 0xb,param_2 + 0x58);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xd] = uVar1;
  thunk_FUN_00e7051c(param_1 + 0x10,param_2 + 0x80);
  FUN_008fcdb8(param_1 + 0x12,param_2 + 0x90);
  thunk_FUN_00e7051c(param_1 + 0x15,param_2 + 0xa8);
  thunk_FUN_00e7051c(param_1 + 0x17,param_2 + 0xb8);
  FUN_008fcdb8(param_1 + 0x19,param_2 + 200);
  thunk_FUN_00e7051c(param_1 + 0x1c,param_2 + 0xe0);
  thunk_FUN_00e7051c(param_1 + 0x1e,param_2 + 0xf0);
  memcpy(param_1 + 0x20,(void *)(param_2 + 0x100),0x83);
  FUN_00951160(param_1 + 0x31,param_2 + 0x188);
  FUN_00951160(param_1 + 0x33,param_2 + 0x198);
  memcpy(param_1 + 0x35,(void *)(param_2 + 0x1a8),0x9c);
  return;
}

