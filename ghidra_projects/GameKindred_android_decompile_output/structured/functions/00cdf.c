// functions/00cdf — 34 functions
#include "libGameKindred.h"




void thunk_FUN_00cdf6a4(void)

{
  FUN_009580b8();
  FUN_009601dc();
  return;
}




void FUN_00cdf2cc(undefined8 param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  byte local_140 [16];
  void *local_130;
  long local_128;
  ulong local_120;
  int local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  void *local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  char *local_c0;
  char *local_b8;
  void *local_b0;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  byte local_78;
  void *local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (void *)0x0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  local_d8 = 0x400;
  local_d0 = 0;
  local_c8 = 0;
  local_110 = operator_new(0x28);
  local_110[3] = 0;
  local_110[4] = 0;
  local_110[1] = 0x10000;
  local_110[2] = 0;
  *local_110 = 0;
  local_c0 = (char *)(param_2 + 0x29);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_c0 = *(char **)(param_2 + 0x38);
  }
  local_108 = local_110;
  local_b8 = local_c0;
  FUN_008fd344(&local_128,&local_c0);
  if ((local_d0 != 0) || (local_118 != 3)) {
    FUN_00cde990(0,&DAT_0320ffa8,0);
    goto LAB_00cdf464;
  }
  lVar3 = FUN_008fd190(&local_128,"errorCode");
  if (local_128 + (local_120 & 0xffffffff) * 0x30 == lVar3) {
LAB_00cdf3c4:
    puVar4 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_c0 = "errorCode";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = (char *)0x9;
    lVar3 = FUN_008feca4(&local_128,&local_c0);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00cdf3c4;
    local_c0 = "errorCode";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = (char *)0x9;
    puVar4 = (undefined8 *)FUN_008feca4(&local_128,&local_c0);
    if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  FUN_008fa54c(local_140,puVar4);
  lVar3 = FUN_008fd190(&local_128,"success");
  if (local_128 + (local_120 & 0xffffffff) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_c0 = "success";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = (char *)0x7;
    lVar3 = FUN_008feca4(&local_128,&local_c0);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) & 1) != 0) {
      local_c0 = "success";
      local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
      local_b8 = (char *)0x7;
      lVar3 = FUN_008feca4(&local_128,&local_c0);
      bVar2 = *(int *)(lVar3 + 0x10) == 0x102;
    }
  }
  lVar3 = FUN_008fd190(&local_128,"quantity");
  if (local_128 + (local_120 & 0xffffffff) * 0x30 == lVar3) {
LAB_00cdf50c:
    uVar7 = 1;
  }
  else {
    local_c0 = "quantity";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = (char *)0x8;
    lVar3 = FUN_008feca4(&local_128,&local_c0);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_00cdf50c;
    local_c0 = "quantity";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = (char *)0x8;
    puVar5 = (undefined4 *)FUN_008feca4(&local_128,&local_c0);
    uVar7 = *puVar5;
  }
  lVar3 = FUN_008fd190(&local_128,"talentData");
  if (local_128 + (local_120 & 0xffffffff) * 0x30 != lVar3) {
    local_c0 = "talentData";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = (char *)0xa;
    uVar6 = FUN_008feca4(&local_128,&local_c0);
    memset(&local_c0,0,0x60);
    FUN_00eb35e8(uVar6,&local_c0);
    uVar6 = FUN_00cdbb18();
    FUN_00cdd418(uVar6,&local_c0);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (((ulong)local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  lVar3 = FUN_008fd190(&local_128,"currency");
  if (local_128 + (local_120 & 0xffffffff) * 0x30 != lVar3) {
    local_c0 = "currency";
    local_b0 = (void *)CONCAT44(local_b0._4_4_,0x100005);
    local_b8 = (char *)0x8;
    uVar6 = FUN_008feca4(&local_128,&local_c0);
    local_c0 = (char *)0x0;
    local_b8 = (char *)0x0;
    local_b0 = (void *)0x0;
    FUN_00ea1950(uVar6,&local_c0);
    uVar6 = FUN_009580b8();
    FUN_0095e1c8(uVar6,&local_c0);
  }
  FUN_009580b8();
  FUN_009601dc();
  FUN_00cde990(bVar2,local_140,uVar7);
  if ((local_140[0] & 1) != 0) {
    operator_delete(local_130);
  }
LAB_00cdf464:
  puVar4 = local_108;
  if (local_108 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_108);
    operator_delete(puVar4);
  }
  free(local_f0);
  if (local_f8 != (void *)0x0) {
    operator_delete(local_f8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cdf6a4(void)

{
  FUN_009580b8();
  FUN_009601dc();
  return;
}




void FUN_00cdf6b8(void)

{
  FUN_009580b8();
  FUN_009601dc();
  return;
}




void FUN_00cdf6cc(void)

{
  FUN_009580b8();
  FUN_009601dc();
  return;
}




void FUN_00cdf6e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_009580b8();
  uVar1 = FUN_0095e478();
  if ((2 < uVar1) && (uVar2 = FUN_00cdfb00(param_1 + 0x30), (uVar2 & 1) == 0)) {
    FUN_009580b8();
    FUN_009601dc();
    return;
  }
  return;
}




void FUN_00cdf728(void)

{
  undefined8 *__s;
  
  __s = operator_new(0x2b0);
  memset(__s,0,0x2b0);
  FUN_00948cd8(__s);
  FUN_00e83560(__s + 3);
  *__s = &PTR_FUN_0280eac8;
  __s[3] = &PTR_FUN_0280ee68;
  FUN_00cdfa08(__s + 6);
  DAT_0313e3a8 = __s;
  return;
}




void FUN_00cdf790(void)

{
  if (DAT_0313e3a8 != (long *)0x0) {
    (**(code **)(*DAT_0313e3a8 + 8))();
  }
  DAT_0313e3a8 = (long *)0x0;
  return;
}




long FUN_00cdf7c4(void)

{
  return DAT_0313e3a8 + 0x30;
}




void FUN_00cdf7d4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00960220(uVar1,param_1,param_2 & 1);
  return;
}




void FUN_00cdf800(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_0280eac8;
  param_1[3] = &PTR_FUN_0280ee68;
  lVar1 = 0x270;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + -0x18) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -8));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x60) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x50));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x78) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x68));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x90) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x80));
    }
    lVar1 = lVar1 + -0xd0;
  } while (lVar1 != 0);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_00cdf8a8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_0280eac8;
  param_1[3] = &PTR_FUN_0280ee68;
  lVar1 = 0x270;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + -0x18) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -8));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x60) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x50));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x78) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x68));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x90) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x80));
    }
    lVar1 = lVar1 + -0xd0;
  } while (lVar1 != 0);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cdf958(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-3] = &PTR_FUN_0280eac8;
  lVar1 = 0x270;
  *param_1 = &PTR_FUN_0280ee68;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + -0x30) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x20));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x78) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x68));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0x90) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x80));
    }
    if ((*(byte *)((long)param_1 + lVar1 + -0xa8) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + -0x98));
    }
    lVar1 = lVar1 + -0xd0;
  } while (lVar1 != 0);
  FUN_00e835e0(param_1);
  FUN_00948d58(param_1 + -3);
  return;
}




void FUN_00cdfa00(long param_1)

{
  FUN_00cdf8a8(param_1 + -0x18);
  return;
}




void FUN_00cdfa08(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  do {
    FUN_00cde568((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  lVar1 = 0x10;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  do {
    FUN_00cde5a4((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  return;
}




void FUN_00cdfa64(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  do {
    FUN_00cde5a4((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  return;
}




void FUN_00cdfaa0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}




bool FUN_00cdfaac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_00e85318(0);
  lVar3 = FUN_00e85318(0);
  lVar4 = (long)(int)param_1[1];
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar3 / lVar4;
  }
  return *param_1 < lVar2 - (lVar3 - lVar1 * lVar4);
}




void FUN_00cdfaf8(void)

{
  FUN_00e85318(0);
  return;
}




undefined8 FUN_00cdfb00(long *param_1)

{
  ulong uVar1;
  
  if ((*param_1 != 0) && ((int)param_1[1] != 0)) {
    uVar1 = 0;
    param_1 = param_1 + 3;
    do {
      if ((*(byte *)(param_1 + -1) & 1) == 0) {
        if (*(byte *)(param_1 + -1) >> 1 != 0) {
          return 1;
        }
      }
      else if (*param_1 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x1a;
    } while (uVar1 < 3);
  }
  return 0;
}




long FUN_00cdfb54(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_00e85318(0);
    lVar4 = (long)*(int *)(param_1 + 8);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar2 / lVar4;
    }
    lVar3 = (long)iVar1 - (lVar2 - lVar3 * lVar4);
  }
  return lVar3;
}




long FUN_00cdfb9c(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0xd0 + 0x10;
}




long FUN_00cdfbac(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0xd0 + 0x10;
}




void FUN_00cdfbbc(long param_1)

{
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 * FUN_00cdfbe8(void)

{
  void *pvVar1;
  
  if (DAT_0313e540 == (undefined8 *)0x0) {
    DAT_0313e540 = operator_new(0x18);
    *(undefined4 *)(DAT_0313e540 + 2) = 0;
    *DAT_0313e540 = 0;
    DAT_0313e540[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_0313e548 = pvVar1;
  }
  return DAT_0313e540;
}




int FUN_00cdfc40(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_0280ee98;
  plVar3 = (long *)FUN_00cdfbe8();
  __mutex = DAT_0313e548;
  pthread_mutex_lock(DAT_0313e548);
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




int FUN_00cdfcc0(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_0280ee98;
  uVar2 = FUN_00cdfbe8();
  __mutex = DAT_0313e548;
  pthread_mutex_lock(DAT_0313e548);
  FUN_00cdfd1c(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00cdfd1c(long *param_1,long param_2)

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




void FUN_00cdfd7c(void *param_1)

{
  FUN_00cdfcc0();
  operator_delete(param_1);
  return;
}




void FUN_00cdfda0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00cdfbe8();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_00cdfddc(uint param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_00cdfbe8();
  plVar2 = (long *)*puVar1;
  if (plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1 & 1,param_2);
      plVar2 = (long *)plVar2[2];
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_00cdfe34(void)

{
  return;
}




void FUN_00cdfe38(void)

{
  return;
}




void FUN_00cdfe3c(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  ulong uVar10;
  double dVar11;
  long local_d8;
  ulong local_d0;
  int local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  char *local_70;
  char *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 0x30;
  FUN_00ce0754(param_1);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_88 = 0x400;
  local_80 = 0;
  local_78 = 0;
  local_c0 = operator_new(0x28);
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[1] = 0x10000;
  local_c0[2] = 0;
  *local_c0 = 0;
  local_70 = (char *)(param_2 + 0x29);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_70 = *(char **)(param_2 + 0x38);
  }
  local_b8 = local_c0;
  local_68 = local_70;
  FUN_008fd344(&local_d8,&local_70);
  if ((local_80 == 0) && (local_c8 == 3)) {
    lVar5 = FUN_008fd190(&local_d8,"lastCollectTime");
    if (local_d8 + (local_d0 & 0xffffffff) * 0x30 == lVar5) {
      lVar5 = 0;
    }
    else {
      local_70 = "lastCollectTime";
      local_60 = 0x100005;
      local_68 = (char *)0xf;
      lVar6 = FUN_008feca4(&local_d8,&local_70);
      lVar5 = 0;
      if ((*(byte *)(lVar6 + 0x11) >> 1 & 1) != 0) {
        local_70 = "lastCollectTime";
        local_60 = 0x100005;
        local_68 = (char *)0xf;
        FUN_008feca4(&local_d8,&local_70);
        dVar11 = (double)FUN_008fc0f0();
        lVar5 = (long)dVar11;
      }
    }
    lVar6 = FUN_008fd190(&local_d8,"refreshInterval");
    if (local_d8 + (local_d0 & 0xffffffff) * 0x30 == lVar6) {
      uVar9 = 0;
    }
    else {
      local_70 = "refreshInterval";
      local_60 = 0x100005;
      local_68 = (char *)0xf;
      lVar6 = FUN_008feca4(&local_d8,&local_70);
      uVar9 = 0;
      if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) != 0) {
        local_70 = "refreshInterval";
        local_60 = 0x100005;
        local_68 = (char *)0xf;
        puVar7 = (undefined4 *)FUN_008feca4(&local_d8,&local_70);
        uVar9 = *puVar7;
      }
    }
    lVar6 = FUN_008fd190(&local_d8,"canCollect");
    if (local_d8 + (local_d0 & 0xffffffff) * 0x30 == lVar6) {
      bVar3 = false;
    }
    else {
      local_70 = "canCollect";
      local_60 = 0x100005;
      local_68 = (char *)0xa;
      lVar6 = FUN_008feca4(&local_d8,&local_70);
      bVar3 = false;
      if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
        local_70 = "canCollect";
        local_60 = 0x100005;
        local_68 = (char *)0xa;
        lVar6 = FUN_008feca4(&local_d8,&local_70);
        bVar3 = *(int *)(lVar6 + 0x10) == 0x102;
      }
    }
    lVar6 = FUN_008fd190(&local_d8,"isOnCooldown");
    if (local_d8 + (local_d0 & 0xffffffff) * 0x30 == lVar6) {
      bVar4 = false;
    }
    else {
      local_70 = "isOnCooldown";
      local_60 = 0x100005;
      local_68 = (char *)0xc;
      lVar6 = FUN_008feca4(&local_d8,&local_70);
      bVar4 = false;
      if ((*(byte *)(lVar6 + 0x11) & 1) != 0) {
        local_70 = "isOnCooldown";
        local_60 = 0x100005;
        local_68 = (char *)0xc;
        lVar6 = FUN_008feca4(&local_d8,&local_70);
        bVar4 = *(int *)(lVar6 + 0x10) == 0x102;
      }
    }
    FUN_00ce0774(param_1,lVar5,uVar9,bVar3,bVar4);
    lVar5 = FUN_008fd190(&local_d8,"entries");
    if (local_d8 + (local_d0 & 0xffffffff) * 0x30 != lVar5) {
      local_70 = "entries";
      local_60 = 0x100005;
      local_68 = (char *)0x7;
      lVar5 = FUN_008feca4(&local_d8,&local_70);
      if (*(int *)(lVar5 + 0x10) == 4) {
        local_70 = "entries";
        local_60 = 0x100005;
        local_68 = (char *)0x7;
        plVar8 = (long *)FUN_008feca4(&local_d8,&local_70);
        if ((int)plVar8[1] != 0) {
          lVar5 = 0;
          uVar10 = 0;
          do {
            local_70 = (char *)(*plVar8 + lVar5);
            if (((byte)local_70[0x12] >> 6 & 1) == 0) {
              local_70 = *(char **)(*plVar8 + lVar5);
            }
            FUN_009f5f2c(param_1,&local_70);
            uVar10 = uVar10 + 1;
            lVar5 = lVar5 + 0x18;
          } while (uVar10 < *(uint *)(plVar8 + 1));
        }
      }
    }
    FUN_00cdfda0();
  }
  puVar2 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_b8);
    operator_delete(puVar2);
  }
  free(local_a0);
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

