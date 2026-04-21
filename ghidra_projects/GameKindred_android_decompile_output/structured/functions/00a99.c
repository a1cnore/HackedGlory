// functions/00a99 — 47 functions
#include "libGameKindred.h"




undefined8 * FUN_00a99010(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)((long)puVar1 + 0xc) = 1;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027d0b60;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00a99074(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    bVar1 = FUN_00a7eccc(*(undefined4 *)(param_1 + 8));
  }
  else {
    bVar1 = FUN_00a7ec5c();
  }
  return (bVar1 & 1) != *(byte *)(param_1 + 0xd);
}




undefined8 * FUN_00a990b8(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027d0b88;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00a99114(long param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  byte local_168 [16];
  void *local_158;
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [8];
  ulong local_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar10 = false;
  if (param_1 == 0) goto LAB_00a99480;
  iVar5 = FUN_00e6a474(param_1);
  if (iVar5 == 0) {
    bVar10 = false;
    goto LAB_00a99480;
  }
  FUN_008fa54c(local_50,param_1);
  uVar6 = FUN_00e7012c(&DAT_0320ffc0,0);
  FUN_008fa54c(local_68,uVar6);
  pvVar2 = (void *)((ulong)local_68 | 1);
  uVar8 = (ulong)(local_68[0] >> 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
    uVar8 = local_60;
  }
  if (uVar8 == 0) {
LAB_00a991b4:
    uVar8 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar8 == 0) goto LAB_00a991b4;
      lVar9 = uVar8 - 1;
      uVar8 = uVar8 - 1;
    } while (*(char *)((long)pvVar2 + lVar9) != '/');
  }
  FUN_0093ddb0(local_98,local_68,0,uVar8,local_68);
  FUN_008fcdb8(local_80,local_98);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  pvVar2 = (void *)((ulong)local_50 | 1);
  uVar8 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    pvVar2 = local_40;
    uVar8 = local_48;
  }
  if ((long)uVar8 < 1) {
LAB_00a99444:
    bVar10 = false;
  }
  else {
    lVar9 = 0;
    do {
      if (uVar8 + lVar9 == 0) goto LAB_00a99444;
      lVar4 = lVar9 + uVar8;
      lVar9 = lVar9 + -1;
    } while (*(char *)((long)pvVar2 + lVar4 + -1) != '/');
    if (lVar9 == 0) goto LAB_00a99444;
    bVar10 = false;
    if (uVar8 + lVar9 != -1) {
      uVar1 = uVar8 + lVar9 + 1;
      bVar10 = false;
      if (uVar1 < (uVar8 & 0xffffffff)) {
        FUN_0093ddb0(local_b0,local_50,uVar1,uVar8 & 0xffffffff,local_50);
        FUN_008fcdb8(local_98,local_b0);
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        FUN_00a994ac(local_168,local_80,0x2f);
        puVar7 = (ulong *)FUN_0090de84(local_168,"Data",4);
        local_140 = (void *)puVar7[2];
        uStack_148 = puVar7[1];
        local_150 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_0093de70(&local_150,0x2f);
        uStack_128 = uStack_148;
        local_130 = local_150;
        local_150 = 0;
        uStack_148 = 0;
        local_120 = local_140;
        local_140 = (void *)0x0;
        puVar7 = (ulong *)FUN_0090de84(&local_130,"Video",5);
        local_100 = (void *)puVar7[2];
        uStack_108 = puVar7[1];
        local_110 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_0093de70(&local_110,0x2f);
        uStack_e8 = uStack_108;
        local_f0 = local_110;
        local_e0 = local_100;
        uVar8 = (ulong)(local_98[0] >> 1);
        pvVar2 = (void *)((ulong)local_98 | 1);
        if ((local_98[0] & 1) != 0) {
          uVar8 = local_90;
          pvVar2 = local_88;
        }
        local_110 = 0;
        uStack_108 = 0;
        local_100 = (void *)0x0;
        puVar7 = (ulong *)FUN_0090de84(&local_f0,pvVar2,uVar8);
        local_c0 = (void *)puVar7[2];
        uStack_c8 = puVar7[1];
        local_d0 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_008fcdb8(local_b0,&local_d0);
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_f0 & 1) != 0) {
          operator_delete(local_e0);
        }
        if ((local_110 & 1) != 0) {
          operator_delete(local_100);
        }
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
        }
        if ((local_150 & 1) != 0) {
          operator_delete(local_140);
        }
        if ((local_168[0] & 1) != 0) {
          operator_delete(local_158);
        }
        pvVar2 = (void *)((ulong)local_b0 | 1);
        if ((local_b0[0] & 1) != 0) {
          pvVar2 = local_a0;
        }
        uVar8 = FUN_00e6af2c(pvVar2);
        bVar10 = (uVar8 & 1) != 0;
        if (bVar10) {
          FUN_008fce60(param_2,local_b0);
        }
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
      }
    }
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00a99480:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a994ac(ulong *param_1,byte *param_2,undefined4 param_3)

{
  size_t __n;
  byte *__src;
  bool bVar1;
  void *__dest;
  ulong uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  __src = *(byte **)(param_2 + 0x10);
  bVar1 = (*param_2 & 1) != 0;
  __n = (ulong)(*param_2 >> 1);
  if (bVar1) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (!bVar1) {
    __src = param_2 + 1;
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n + 1 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00a99540;
  }
  else {
    uVar2 = __n + 0x11 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_00a99540:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_0093de70(param_1,param_3);
  return;
}




void FUN_00a99564(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,int param_5)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ec5c9c();
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_00ec5ce8(), (uVar3 & 1) == 0)) {
    FUN_00f0048c();
    FUN_008fcdb8(local_70,param_2);
    FUN_009396ec(local_70);
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
    FUN_0090d2a4(pvVar1);
    pvVar1 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar1 = local_60;
    }
    FUN_00ec5cb0(pvVar1,param_3 & 1,param_4 & 1,param_1);
    FUN_008fa130(param_5 == 1,0);
    FUN_008fa19c(param_5 == 2);
    thunk_FUN_00ecb45c(3);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a99668(void)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_019804cc();
  FUN_009b8d90();
  FUN_009ba5b0();
  thunk_FUN_00ecb45c(1);
  FUN_008fa130(0,0);
  FUN_008fa19c(0);
  FUN_008fa0f0();
  lVar1 = FUN_00969248();
  if (*(int *)(lVar1 + 0x38) < 1) {
    return;
  }
  lVar1 = FUN_00969248();
  if ((*(int *)(lVar1 + 0x38) != 7) && (lVar1 = FUN_00969248(), *(int *)(lVar1 + 0x38) != 8)) {
    return;
  }
  uVar2 = FUN_00969248();
  FUN_0096875c(uVar2,1);
  return;
}




void FUN_00a996e4(void *param_1)

{
  FUN_00ec5d8c();
  operator_delete(param_1);
  return;
}




undefined8 * FUN_00a99708(void)

{
  void *pvVar1;
  
  if (DAT_03133740 == (undefined8 *)0x0) {
    DAT_03133740 = operator_new(0x18);
    *(undefined4 *)(DAT_03133740 + 2) = 0;
    *DAT_03133740 = 0;
    DAT_03133740[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,1);
    DAT_03133748 = pvVar1;
  }
  return DAT_03133740;
}




int FUN_00a99760(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027d0bd8;
  plVar3 = (long *)FUN_00a99708();
  __mutex = DAT_03133748;
  pthread_mutex_lock(DAT_03133748);
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




int FUN_00a997e0(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_027d0bd8;
  uVar2 = FUN_00a99708();
  __mutex = DAT_03133748;
  pthread_mutex_lock(DAT_03133748);
  FUN_00a9983c(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00a9983c(long *param_1,long param_2)

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




void FUN_00a9989c(void *param_1)

{
  FUN_00a997e0();
  operator_delete(param_1);
  return;
}




int FUN_00a998c0(undefined8 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00a99708();
  __mutex = DAT_03133748;
  pthread_mutex_lock(DAT_03133748);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00a99924(void)

{
  return;
}




void FUN_00a99928(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_027d0c00;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00a9995c(long param_1)

{
  undefined8 *puVar1;
  
  FUN_00af97f4(*(undefined8 *)(param_1 + 0x10),0);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  FUN_00afa094(*(undefined4 *)(puVar1 + 2),*(undefined8 *)(param_1 + 0x10),*puVar1,
               *(undefined1 *)((long)puVar1 + 0x14),0);
  return;
}




void FUN_00a99998(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_00a999a0(undefined8 *param_1)

{
  FUN_00efc8e8();
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027d0c48;
  param_1[2] = 0;
  return;
}




void FUN_00a999d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00af97f4(*(undefined8 *)(param_1 + 0x10),0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_00950ef4(&local_48,param_1 + 0x18);
  FUN_00afa458(uVar2,&local_48,0);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a99a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_00a9a4a0(param_1 + 0x18,param_3);
  return;
}




void FUN_00a99a74(undefined8 *param_1)

{
  FUN_00efc8e8();
  *param_1 = &PTR_FUN_027d0c90;
  param_1[2] = 0;
  return;
}




void FUN_00a99aa8(long param_1)

{
  FUN_00af97f4(*(undefined8 *)(param_1 + 0x10),0);
  return;
}




void FUN_00a99ab4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00a99abc(undefined8 *param_1)

{
  FUN_00efc8e8();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027d0cd8;
  param_1[2] = 0;
  return;
}




void FUN_00a99af8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      lVar1 = param_1 + 0x21;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    FUN_00afd018(*(long *)(param_1 + 0x10),lVar1);
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      lVar1 = param_1 + 0x21;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x30);
    }
    FUN_00afa5e4(*(long *)(param_1 + 0x18),lVar1);
    return;
  }
  return;
}




void FUN_00a99b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_008fce60(param_1 + 0x20,param_3);
  return;
}




void FUN_00a99b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_008fce60(param_1 + 0x20,param_3);
  return;
}




void FUN_00a99b74(undefined8 *param_1)

{
  FUN_00efc8e8();
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027d0d20;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00a99bac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00af9aa0(lVar1,param_1 + 0x19);
    return;
  }
  FUN_00af9aa0(lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_00a99bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_008fce60(param_1 + 0x18,param_3);
  return;
}




void FUN_00a99bec(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      param_1 = param_1 + 0x11;
    }
    else {
      param_1 = *(long *)(param_1 + 0x20);
    }
    FUN_00a57398(0x3f800000,param_1);
    return;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = param_1 + 0x11;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_00aa132c();
    return;
  }
  FUN_00aa12a8(0x3f800000,lVar1,0,0);
  return;
}




void FUN_00a99c48(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  FUN_008fce60(param_1 + 0x10);
  *(byte *)(param_1 + 0x28) = param_3 & 1;
  *(byte *)(param_1 + 0x29) = param_4 & 1;
  return;
}




void FUN_00a99c84(undefined8 *param_1)

{
  FUN_00efcad4();
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027d0d68;
  *(undefined8 *)((long)param_1 + 0x2d) = 0;
  return;
}




void FUN_00a99cbc(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 )

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(byte *)(param_1 + 0x34) = param_5 & 1;
  return;
}




undefined4 FUN_00a99cd4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




void FUN_00a99cdc(long param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00efcb8c();
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30);
  fVar5 = (float)FUN_00efcb54(param_1);
  *(int *)(param_1 + 0x2c) = iVar2 + (int)(fVar5 * (float)(iVar3 - iVar2));
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00e70510(&local_48);
    if (*(char *)(param_1 + 0x34) == '\0') {
      FUN_00e70e18(&local_48,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      local_60[0] = 0;
      local_60[1] = 0;
      local_50 = (void *)0x0;
      FUN_00cb418c(local_78,*(undefined4 *)(param_1 + 0x2c));
      FUN_008fce60(local_60,local_78);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      pvVar1 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        pvVar1 = local_50;
      }
      FUN_00e70e18(&local_48,"%s",pvVar1);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x138))(*(long **)(param_1 + 0x20),&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a99e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_008fce60(param_1 + 0x18,param_3);
  FUN_008fce60(param_1 + 0x30,param_4);
  return;
}




void FUN_00a99e50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0xd0) != 0) {
    FUN_00f0e628();
    lVar1 = *(long *)(param_1 + 0x10);
  }
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = param_1 + 0x19;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    param_1 = param_1 + 0x31;
  }
  else {
    param_1 = *(long *)(param_1 + 0x40);
  }
  FUN_00f0e548(lVar1,lVar2,param_1);
  return;
}




void FUN_00a99eb0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00a99eb8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00a99ec0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    auVar1 = FUN_00efcb34();
                    /* WARNING: Could not recover jumptable at 0x00a99ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar1,0,0x3f800000,0x3f800000);
    return;
  }
  FUN_00efcb54();
  return;
}




void FUN_00a99efc(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    auVar1 = FUN_00efcb34();
                    /* WARNING: Could not recover jumptable at 0x00a99f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar1,0,0x3f800000,0x3f800000);
    return;
  }
  FUN_00efcb54();
  return;
}




void FUN_00a99f38(long param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_00efcb8c();
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined8 *)(param_1 + 0x1c) = uVar1;
  }
  fVar2 = (float)FUN_00a99ec0(param_1);
  fVar3 = (float)FUN_00a99efc(param_1);
  fVar2 = fVar2 * *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x1c);
  fVar3 = fVar3 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x20);
  if ((*(float *)(param_2 + 0x40) == fVar2) && (*(float *)(param_2 + 0x44) == fVar3)) {
    return;
  }
  *(float *)(param_2 + 0x40) = fVar2;
  *(float *)(param_2 + 0x44) = fVar3;
  FUN_0091ada4(param_2);
  return;
}




void FUN_00a99fd8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00a99fe0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00a99fe8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    auVar1 = FUN_00efcb34();
                    /* WARNING: Could not recover jumptable at 0x00a9a01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar1,0,0x3f800000,0x3f800000);
    return;
  }
  FUN_00efcb54();
  return;
}

