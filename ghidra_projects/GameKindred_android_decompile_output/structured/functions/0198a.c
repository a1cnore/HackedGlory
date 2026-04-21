// functions/0198a — 47 functions
#include "libGameKindred.h"




undefined8 thunk_FUN_0198ab78(void)

{
  return DAT_03214e28;
}




undefined8 thunk_FUN_0198ab84(void)

{
  return DAT_03214e30;
}




void FUN_0198a0a4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double local_e0;
  char acStack_d8 [32];
  char local_b8 [64];
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sscanf(*(char **)(param_1 + 0x410),"TOK_ATOM typeinfo=%s field=%s value=%s",auStack_78,local_b8,
         acStack_d8);
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar5 = strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar5;
  }
  uVar2 = FUN_00e6a474(auStack_78);
  FUN_0091ed5c(auStack_78,uVar2,0x12345678);
  auVar8 = FUN_0198a75c();
  puVar6 = auVar8._0_8_;
  uVar3 = 0;
  if (local_b8[0] != '!') {
    uVar2 = FUN_00e6a474(local_b8,auVar8._8_8_,0);
    uVar3 = FUN_0091ed5c(local_b8,uVar2,0x12345678);
    uVar3 = uVar3 & 0xffffff;
  }
  FUN_0198a794(param_1,puVar6,uVar3,0);
  switch(*puVar6 >> 0x15) {
  case 0:
  case 1:
    iVar4 = atoi(acStack_d8);
    local_e0 = (double)CONCAT71(local_e0._1_7_,(char)iVar4);
    break;
  case 2:
  case 3:
    iVar4 = atoi(acStack_d8);
    local_e0 = (double)CONCAT62(local_e0._2_6_,(short)iVar4);
    break;
  case 4:
  case 5:
    iVar4 = atoi(acStack_d8);
    local_e0 = (double)CONCAT44(local_e0._4_4_,iVar4);
    break;
  case 6:
    dVar7 = atof(acStack_d8);
    local_e0 = (double)CONCAT44(local_e0._4_4_,(float)dVar7);
    break;
  case 7:
    local_e0 = atof(acStack_d8);
    break;
  case 8:
    iVar4 = atoi(acStack_d8);
    local_e0 = (double)CONCAT71(local_e0._1_7_,iVar4 != 0);
    break;
  default:
    goto switchD_0198a184_default;
  }
  FUN_0198a924(param_1,puVar6,&local_e0);
switchD_0198a184_default:
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -1;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0198a234(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined4 local_bc;
  char local_b8 [64];
  undefined1 auStack_78 [72];
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  sscanf(*(char **)(param_1 + 0x410),"TOK_RAW typeinfo=%s field=%s bytes=%d",auStack_78,local_b8,
         &local_bc);
  uVar2 = FUN_00e6a474(auStack_78);
  FUN_0091ed5c(auStack_78,uVar2,0x12345678);
  auVar8 = FUN_0198a75c();
  lVar5 = auVar8._0_8_;
  uVar3 = 0;
  if (local_b8[0] != '!') {
    uVar2 = FUN_00e6a474(local_b8,auVar8._8_8_,0);
    uVar3 = FUN_0091ed5c(local_b8,uVar2,0x12345678);
    uVar3 = uVar3 & 0xffffff;
  }
  FUN_0198a794(param_1,lVar5,uVar3,0);
  if (((DAT_03214e08 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_03214e08), iVar4 != 0)) {
    DAT_03214e00 = FUN_00e6a474("value=");
    __cxa_guard_release(&DAT_03214e08);
  }
  if ((*(int *)(lVar5 + 4) == *(int *)(PTR_DAT_02bf27e0 + 4)) &&
     (pcVar6 = strstr(*(char **)(param_1 + 0x410),"value="), pcVar6 != (char *)0x0)) {
    FUN_0198a998(param_1,lVar5,pcVar6 + DAT_03214e00,local_bc);
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar6 = strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar6;
  }
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -1;
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198a3bc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  undefined1 auVar7 [16];
  uint local_10c;
  char local_108 [64];
  char local_c8 [64];
  undefined1 auStack_88 [72];
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  local_10c = 0;
  iVar2 = sscanf(*(char **)(param_1 + 0x410),"TOK_TYPE typeinfo=%s field=%s members=%d symbol=%s",
                 auStack_88,local_c8,&local_10c,local_108);
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar5 = strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar5;
  }
  uVar3 = FUN_00e6a474(auStack_88);
  FUN_0091ed5c(auStack_88,uVar3,0x12345678);
  auVar7 = FUN_0198a75c();
  uVar4 = 0;
  if (local_c8[0] != '!') {
    uVar3 = FUN_00e6a474(local_c8,auVar7._8_8_,0);
    uVar4 = FUN_0091ed5c(local_c8,uVar3,0x12345678);
    uVar4 = uVar4 & 0xffffff;
  }
  pcVar5 = (char *)0x0;
  if (iVar2 == 4) {
    pcVar5 = (char *)0x0;
    if (local_108[0] != '!') {
      pcVar5 = local_108;
    }
  }
  FUN_0198a794(param_1,auVar7._0_8_,uVar4,pcVar5);
  if (local_10c != 0) {
    uVar4 = 0;
    do {
      FUN_01989fc8(param_1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_10c);
  }
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -1;
  if (*(long *)(lVar1 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0198a504(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined1 auVar11 [16];
  int local_cc;
  char local_c8 [64];
  undefined1 auStack_88 [72];
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  sscanf(*(char **)(param_1 + 0x410),"TOK_ARRAY typeinfo=%s field=%s length=%d",auStack_88,local_c8,
         &local_cc);
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar5 = strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar5;
  }
  uVar3 = FUN_00e6a474(auStack_88);
  FUN_0091ed5c(auStack_88,uVar3,0x12345678);
  auVar11 = FUN_0198a75c();
  uVar4 = 0;
  if (local_c8[0] != '!') {
    uVar3 = FUN_00e6a474(local_c8,auVar11._8_8_,0);
    uVar4 = FUN_0091ed5c(local_c8,uVar3,0x12345678);
    uVar4 = uVar4 & 0xffffff;
  }
  FUN_0198a794(param_1,auVar11._0_8_,uVar4,0);
  uVar8 = *(undefined8 *)(auVar11._0_8_ + 0x10);
  FUN_0198a8b4(param_1,uVar8,local_cc);
  iVar6 = *(int *)(param_1 + 0x408);
  if (0 < local_cc) {
    lVar9 = *(long *)(param_1 + (long)iVar6 * 0x10 + 8);
    iVar10 = 0;
    do {
      *(int *)(param_1 + 0x408) = (int)((long)iVar6 + 1);
      lVar1 = param_1 + ((long)iVar6 + 1) * 0x10;
      *(long *)(lVar1 + 8) = lVar9;
      *(undefined8 *)(lVar1 + 0x10) = uVar8;
      FUN_01989fc8(param_1);
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
      iVar6 = *(int *)(param_1 + 0x408) + -1;
      *(int *)(param_1 + 0x408) = iVar6;
    } while (iVar10 < local_cc);
  }
  *(int *)(param_1 + 0x408) = iVar6 + -2;
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0198a670(long param_1)

{
  char *pcVar1;
  
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar1 = strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar1;
  }
  return;
}




void FUN_0198a6a8(uint *param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *param_1 = param_2 & 7 | (param_4 & 0x3fff) << 3 | (param_5 & 0xf) << 0x11;
  uVar2 = FUN_00e6a474(param_3);
  uVar3 = FUN_0091ed5c(param_3,uVar2,0x12345678);
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = &DAT_03214e10;
  if (DAT_03214e10 != 0) {
    puVar1 = (undefined8 *)((long)DAT_03214e18 + 8);
  }
  *puVar1 = param_1;
  DAT_03214e18 = param_1;
  return;
}




byte * FUN_0198a724(byte *param_1)

{
  if ((*param_1 & 7) != 0) {
    param_1 = (byte *)0x0;
  }
  return param_1;
}




uint * FUN_0198a734(uint *param_1)

{
  if ((*param_1 & 7) != 1) {
    param_1 = (uint *)0x0;
  }
  return param_1;
}




uint * FUN_0198a748(uint *param_1)

{
  if ((*param_1 & 7) != 3) {
    param_1 = (uint *)0x0;
  }
  return param_1;
}




long FUN_0198a75c(int param_1)

{
  long lVar1;
  
  for (lVar1 = DAT_03214e10; (lVar1 != 0 && (*(int *)(lVar1 + 4) != param_1));
      lVar1 = *(long *)(lVar1 + 8)) {
  }
  return lVar1;
}




void FUN_0198a784(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  return;
}




void FUN_0198a794(undefined8 *param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[(long)*(int *)(param_1 + 0x81) * 2 + 1];
  if (plVar6 == (long *)0x0) {
    lVar2 = FUN_01989ba0(*param_1,param_2);
  }
  else {
    puVar3 = (uint *)param_1[(long)*(int *)(param_1 + 0x81) * 2 + 2];
    if ((*puVar3 & 7) == 3) {
      lVar2 = FUN_01989ba0(*param_1,param_2);
      *plVar6 = lVar2;
    }
    else {
      if ((*puVar3 & 7) != 1) {
        return;
      }
      if (**(uint **)(puVar3 + 6) == 0) {
        return;
      }
      uVar5 = 0;
      plVar4 = (long *)(*(long *)(puVar3 + 4) + 8);
      while (*(int *)(*(long *)(puVar3 + 4) + (ulong)uVar5 * 0x10) != param_3) {
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 2;
        if (**(uint **)(puVar3 + 6) <= uVar5) {
          return;
        }
      }
      if (*(int *)(*plVar4 + 4) != *(int *)(param_2 + 4)) {
        return;
      }
      lVar2 = (long)plVar6 + (ulong)*(ushort *)((long)plVar4 + -4);
    }
  }
  if (lVar2 != 0) {
    if (param_4 != 0) {
      FUN_01989cf0(*param_1,param_4,lVar2,param_2);
    }
    lVar1 = (long)*(int *)(param_1 + 0x81) + 1;
    *(int *)(param_1 + 0x81) = (int)lVar1;
    param_1[lVar1 * 2 + 1] = lVar2;
    param_1[lVar1 * 2 + 2] = param_2;
  }
  return;
}




void FUN_0198a8b4(undefined8 *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN_01989c44(*param_1,(*param_2 >> 3 & 0x3fff) * (param_3 + 1),*param_2 >> 0x11 & 0xf);
  *(undefined8 *)(lVar2 + (ulong)param_3 * 8) = 0;
  lVar1 = (long)*(int *)(param_1 + 0x81) + 1;
  *(long *)param_1[(long)*(int *)(param_1 + 0x81) * 2 + 1] = lVar2;
  *(int *)(param_1 + 0x81) = (int)lVar1;
  param_1[lVar1 * 2 + 1] = lVar2;
  (param_1 + lVar1 * 2 + 1)[1] = param_2;
  return;
}




void FUN_0198a924(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  param_1 = param_1 + (long)*(int *)(param_1 + 0x408) * 0x10;
  puVar3 = *(uint **)(param_1 + 0x10);
  if ((*(uint *)(param_2 + 4) == puVar3[1]) && (uVar1 = *puVar3 >> 0x15, uVar1 < 9)) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    switch(uVar1) {
    default:
      *(undefined1 *)puVar2 = *(undefined1 *)param_3;
      break;
    case 2:
    case 3:
      *(undefined2 *)puVar2 = *(undefined2 *)param_3;
      return;
    case 4:
    case 5:
    case 6:
      *(undefined4 *)puVar2 = *(undefined4 *)param_3;
      return;
    case 7:
      *puVar2 = *param_3;
      return;
    }
  }
  return;
}




void FUN_0198a998(undefined8 *param_1,long param_2,undefined1 *param_3,uint param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  puVar1 = (undefined1 *)
           FUN_01989c44(*param_1,param_4 + 1,**(uint **)(param_2 + 0x10) >> 0x11 & 0xf);
  if (param_4 != 0) {
    lVar2 = -(ulong)param_4;
    puVar3 = puVar1;
    do {
      lVar2 = lVar2 + 1;
      *puVar3 = *param_3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    } while (lVar2 != 0);
  }
  puVar1[param_4] = 0;
  *(undefined1 **)param_1[(long)*(int *)(param_1 + 0x81) * 2 + 1] = puVar1;
  return;
}




void FUN_0198aa10(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar1 = operator_new(0x38);
  FUN_0198ad24(pvVar1,param_2);
  DAT_03214e20 = pvVar1;
  pvVar2 = operator_new(0x20);
  FUN_0198dab4(pvVar2,pvVar1,param_1);
  DAT_03214e28 = pvVar2;
  pvVar1 = operator_new(0x98);
  FUN_0198c418(pvVar1,DAT_03214e20,param_1,0);
  DAT_03214e30 = pvVar1;
  uVar3 = FUN_00e78248();
  if ((uVar3 & 1) != 0) {
    FUN_0198c87c();
  }
  *(byte *)((long)DAT_03214e30 + 0x90) = *(byte *)((long)DAT_03214e30 + 0x90) | 4;
  return;
}




void FUN_0198aab4(void)

{
  void *pvVar1;
  
  FUN_0198c8b4();
  if (DAT_03214e30 != (long *)0x0) {
    (**(code **)(*DAT_03214e30 + 8))();
  }
  DAT_03214e30 = (long *)0x0;
  if (DAT_03214e28 != (long *)0x0) {
    (**(code **)(*DAT_03214e28 + 8))();
  }
  pvVar1 = DAT_03214e20;
  DAT_03214e28 = (long *)0x0;
  if (DAT_03214e20 != (void *)0x0) {
    FUN_0198ad80(DAT_03214e20);
    operator_delete(pvVar1);
  }
  DAT_03214e20 = (void *)0x0;
  return;
}




void FUN_0198ab30(void)

{
  FUN_0198b230(DAT_03214e20);
  return;
}




void FUN_0198ab3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0198ade4(DAT_03214e20,param_1,param_2,param_3);
  return;
}




void FUN_0198ab58(undefined8 param_1)

{
  FUN_0198af94(DAT_03214e20,param_1);
  return;
}




undefined8 FUN_0198ab6c(void)

{
  return DAT_03214e20;
}




undefined8 FUN_0198ab78(void)

{
  return DAT_03214e28;
}




undefined8 FUN_0198ab84(void)

{
  return DAT_03214e30;
}




void FUN_0198ab90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void thunk_FUN_0198aba0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_0198bab8(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}




void FUN_0198aba0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_0198bab8(pvVar1);
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}




bool FUN_0198abd8(long *param_1)

{
  return *param_1 != 0;
}




void FUN_0198abe8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_0198abf0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_0198abf8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




undefined8 FUN_0198ac00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




long FUN_0198ac08(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(*param_1 + 8) == 1) {
    lVar2 = *(long *)(*param_1 + 0x28);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x80;
    }
    return lVar1;
  }
  return 0;
}




void FUN_0198ac34(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  FUN_0198ba40(pvVar1,*param_1,param_2);
  param_1[2] = pvVar1;
  return;
}




void FUN_0198ac78(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  plVar3 = (long *)(lVar2 + 0x10);
  lVar4 = *plVar3;
  plVar1 = (long *)(param_2 + 8);
  *plVar1 = lVar4;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (lVar4 == 0) {
    *(long **)(lVar2 + 0x10) = plVar1;
    plVar3 = (long *)(lVar2 + 0x18);
  }
  else {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *plVar3 = (long)plVar1;
  *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  return;
}




void FUN_0198acb4(long *param_1)

{
  FUN_0198acc0(*param_1 + 0x10);
  return;
}




void FUN_0198acc0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 8);
  if ((long *)*param_1 == plVar1) {
    if (plVar1 == (long *)param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *plVar1;
    }
  }
  else if ((long *)param_1[1] == plVar1) {
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    *puVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 **)(*(long *)(param_2 + 8) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_0198ad24(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  *param_1 = param_1 + 1;
  *(undefined4 *)(param_1 + 6) = 0;
  pvVar1 = operator_new(0x80);
  FUN_0198de0c(pvVar1,param_2);
  param_1[3] = pvVar1;
  return;
}




void FUN_0198ad7c(void)

{
  return;
}




void FUN_0198ad80(long param_1)

{
  void *pvVar1;
  
  FUN_0198de80(*(undefined8 *)(param_1 + 0x18),0);
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_0198dec0(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_0198b544(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_0198adc8(long param_1,uint param_2)

{
  FUN_0198de80(*(undefined8 *)(param_1 + 0x18),param_2 & 1);
  return;
}




void FUN_0198add4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_0198addc(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0198ade4(long param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_68 [2];
  undefined4 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar3 = (undefined4 *)FUN_0198af28(param_1,param_3);
    bVar1 = puVar3 == (undefined4 *)0x0;
    if (bVar1) {
      puVar3 = (undefined4 *)FUN_0198e210(*(undefined8 *)(param_1 + 0x18));
      FUN_0198f000(puVar3,param_3);
      local_68[0] = *puVar3;
      local_60 = puVar3;
      FUN_0198b590(param_1,local_68,local_68);
    }
    *param_2 = puVar3;
    FUN_0198f0ac(puVar3);
    if (param_4 == (long *)0x0) {
      if (!bVar1) goto LAB_0198aef8;
    }
    else {
      plVar5 = (long *)(puVar3 + 4);
      lVar6 = *plVar5;
      plVar4 = param_4 + 1;
      *plVar4 = lVar6;
      param_4[2] = 0;
      if (lVar6 == 0) {
        *(long **)(puVar3 + 4) = plVar4;
        plVar5 = (long *)(puVar3 + 6);
      }
      else {
        *(long **)(lVar6 + 8) = plVar4;
      }
      *plVar5 = (long)plVar4;
      puVar3[8] = puVar3[8] + 1;
      if (!bVar1) {
        (**(code **)(*param_4 + 0x10))(param_4,puVar3[2]);
        goto LAB_0198aef8;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(*(long **)(param_1 + 0x20),param_3,puVar3);
  }
LAB_0198aef8:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0198af28(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  uVar1 = FUN_0198efa8(param_2);
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar4;
  plVar2 = plVar4;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= uVar1) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < uVar1];
    } while (plVar3 != (long *)0x0);
    if (plVar2 != plVar4) {
      if (uVar1 < *(uint *)(plVar2 + 4)) {
        return 0;
      }
      return plVar2[5];
    }
  }
  return 0;
}




void FUN_0198af94(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  FUN_0198f0bc(lVar1);
  if (0 < *(int *)(lVar1 + 4)) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_0198b734(param_1,lVar1);
    FUN_0198e668(*(undefined8 *)(param_1 + 0x18),lVar1);
  }
  FUN_0198abe8(param_2);
  return;
}

