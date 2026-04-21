// functions/10020 — 489 functions
#include "GameKindred.h"




void FUN_1002002f8(long param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_1001e56a0(param_2 ^ 1);
  if (((param_2 ^ 1) & 1) != 0) {
    FUN_1002c63c0(*(undefined8 *)(param_1 + 8));
    lVar4 = FUN_10015d3ec();
    if (1 < *(int *)(lVar4 + 0x55cc) - 5U) {
      pcVar1 = "MAIN_MATCH_CONFIRM_EXPLAIN_FAILED";
      if (*(int *)(param_1 + 0x78) != 1) {
        pcVar1 = "MAIN_MATCH_CONFIRM_EXPLAIN_FAILED_YOURFAULT";
      }
      uVar3 = FUN_1004e0150(pcVar1,0);
      FUN_1001e55b0(0x41400000,uVar3,0,1);
    }
    FUN_100200414(param_1);
    return;
  }
  FUN_1002c6308();
  FUN_100200414(param_1);
  FUN_10032523c();
  uVar3 = FUN_100325300();
  FUN_10020047c(param_1 + 0x28,uVar3,0);
  FUN_10032523c();
  uVar3 = FUN_100325300();
  FUN_100200500(0,param_1 + 0x38,uVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  FUN_10032523c();
  uVar3 = FUN_100325300();
  FUN_1002c5e9c(uVar5,uVar3);
  lVar4 = FUN_1004f0338();
  if (*(int *)(lVar4 + 0x98) != 0) {
    FUN_1004f0108(param_1 + 0x80);
  }
  FUN_1002c5de4(*(undefined8 *)(param_1 + 8));
  iVar2 = FUN_100126a84();
  if (iVar2 != 0) {
    thunk_FUN_10052a3d4();
    return;
  }
  return;
}




void FUN_100200414(long param_1)

{
  std::string::operator=((string *)(param_1 + 0x48),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x70) = 0x41a00000;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_1004f15d8(param_1 + 0xe8);
  FUN_1004f15d8(param_1 + 0x80);
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1002c5c84(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_10020047c(uint *param_1,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_100200ad4(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < uVar2) {
      lVar4 = (param_2 & 0xffffffff) - (ulong)uVar1;
      puVar3 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 4);
      do {
        *puVar3 = param_3;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_100200500(undefined4 param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  uVar2 = (uint)param_3;
  if (uVar2 == 0) {
    if (*(long *)(param_2 + 2) != 0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2[1] < uVar2) {
      FUN_10011fee4(param_2,param_3);
    }
    uVar1 = *param_2;
    if (uVar1 < uVar2) {
      lVar4 = (param_3 & 0xffffffff) - (ulong)uVar1;
      puVar3 = (undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4);
      do {
        *puVar3 = param_1;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_2 = uVar2;
  }
  return;
}




void FUN_100200584(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x78) == 0)) {
    FUN_1004f00a0(param_1 + 0x48,param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x74) = 1;
    FUN_1002c5d24(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_1002005d8(long param_1)

{
  int iVar1;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x78) == 0)) {
    FUN_1004f00d4(param_1 + 0x48,param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x74) = 2;
    FUN_10001549c(local_38,"DECLINED");
    FUN_100102480(local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    FUN_1002c5d24(*(undefined8 *)(param_1 + 8),0);
  }
  return;
}




void FUN_100200654(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    local_24 = 8;
    iVar1 = FUN_100164e00(uVar2,&local_24);
    if (iVar1 != 0) {
      FUN_1004f0108(param_1 + 0x80);
    }
  }
  return;
}




void FUN_1002006a0(long param_1)

{
  FUN_100200654(param_1 + -0x10);
  return;
}




void FUN_1002006a8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar2 = FUN_100325424(plVar1);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar3 = FUN_1003254bc(plVar1);
  FUN_1002c62a8(*(undefined8 *)(param_1 + 8),uVar2,uVar3);
  return;
}




void FUN_100200708(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *****local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  FUN_10032523c();
  iVar1 = FUN_1003252f0();
  if (iVar1 != 1) {
    return;
  }
  lVar2 = FUN_10015d3ec();
  if (*(char *)(lVar2 + 0x567a) != '\0') {
    return;
  }
  lVar2 = FUN_10015d3ec();
  if ((char)*(byte *)(lVar2 + 0x54bf) < '\0') {
    uVar4 = *(ulong *)(lVar2 + 0x54b0);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_100200abc();
    }
    pvVar5 = *(void **)(lVar2 + 0x54a8);
  }
  else {
    pvVar5 = (void *)(lVar2 + 0x54a8);
    uVar4 = (ulong)*(byte *)(lVar2 + 0x54bf);
  }
  if (uVar4 < 0x17) {
    ppppppuVar3 = &local_58;
    uStack_48 = CONCAT17((char)uVar4,(undefined7)uStack_48);
    if (uVar4 == 0) goto LAB_1002007bc;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    ppppppuVar3 = operator_new(uVar6);
    uStack_48 = uVar6 | 0x8000000000000000;
    local_58 = ppppppuVar3;
    local_50 = uVar4;
  }
  _memcpy(ppppppuVar3,pvVar5,uVar4);
LAB_1002007bc:
  *(undefined1 *)((long)ppppppuVar3 + uVar4) = 0;
  FUN_1002006a8(param_1,&local_58);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




long * FUN_1002007f8(long *param_1)

{
  undefined8 *puVar1;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_100533dfc();
  *puVar1 = &PTR_FUN_10146f398;
  FUN_1001ffbac(puVar1 + 0x1b);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1c],1);
  local_28 = DAT_101d918ac;
  local_50 = thunk_FUN_1002008bc;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  local_28 = DAT_101d918a8;
  local_50 = thunk_FUN_100200938;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  return param_1;
}




void thunk_FUN_1002008bc(long param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_1001ad5c0();
  FUN_1001e7eb0(0);
  FUN_1001ffecc(param_1 + 0xd8);
  FUN_100641464(&uStack_24,&uStack_28);
  FUN_10064e47c(uStack_24,uStack_28,*(undefined8 *)(param_1 + 0xe0));
  FUN_1002002f8(param_1 + 0xd8,1);
  FUN_10064e5ec(0,0,*(undefined8 *)(param_1 + 0xe0),8,param_1,8);
  return;
}




void thunk_FUN_100200938(long param_1)

{
  FUN_1002002f8(param_1 + 0xd8,0);
  if (*(char *)(param_1 + 0x138) != '\0') {
    FUN_100643aa4(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}




long * thunk_FUN_1002007f8(long *param_1)

{
  undefined8 *puVar1;
  code *pcStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = (undefined8 *)FUN_100533dfc();
  *puVar1 = &PTR_FUN_10146f398;
  FUN_1001ffbac(puVar1 + 0x1b);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1c],1);
  uStack_28 = DAT_101d918ac;
  pcStack_50 = thunk_FUN_1002008bc;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_50);
  uStack_28 = DAT_101d918a8;
  pcStack_50 = thunk_FUN_100200938;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_50);
  return param_1;
}




void FUN_1002008bc(long param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_1001ad5c0();
  FUN_1001e7eb0(0);
  FUN_1001ffecc(param_1 + 0xd8);
  FUN_100641464(&uStack_24,&local_28);
  FUN_10064e47c(uStack_24,local_28,*(undefined8 *)(param_1 + 0xe0));
  FUN_1002002f8(param_1 + 0xd8,1);
  FUN_10064e5ec(0,0,*(undefined8 *)(param_1 + 0xe0),8,param_1,8);
  return;
}




void FUN_100200938(long param_1)

{
  FUN_1002002f8(param_1 + 0xd8,0);
  if (*(char *)(param_1 + 0x138) != '\0') {
    FUN_100643aa4(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}




void FUN_100200978(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146f398;
  FUN_1001ffcbc(param_1 + 0x1b);
  thunk_FUN_10064e2bc(param_1);
  return;
}




void FUN_1002009a8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10146f398;
  FUN_1001ffcbc(param_1 + 0x1b);
  pvVar1 = (void *)thunk_FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002009dc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10146f4e0;
  FUN_100200a2c(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100200a24(void)

{
  return 10;
}




void FUN_100200a2c(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (*(void **)(pcVar1 + 9) != (void *)0x0) {
          operator_delete__(*(void **)(pcVar1 + 9));
          pcVar1[9] = '\0';
          pcVar1[10] = '\0';
          pcVar1[0xb] = '\0';
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          pcVar1[0x10] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          pcVar1[8] = '\0';
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100200abc(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void thunk_FUN_100200708(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *****pppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  FUN_10032523c();
  iVar1 = FUN_1003252f0();
  if (iVar1 != 1) {
    return;
  }
  lVar2 = FUN_10015d3ec();
  if (*(char *)(lVar2 + 0x567a) != '\0') {
    return;
  }
  lVar2 = FUN_10015d3ec();
  if ((char)*(byte *)(lVar2 + 0x54bf) < '\0') {
    uVar4 = *(ulong *)(lVar2 + 0x54b0);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_100200abc();
    }
    pvVar5 = *(void **)(lVar2 + 0x54a8);
  }
  else {
    pvVar5 = (void *)(lVar2 + 0x54a8);
    uVar4 = (ulong)*(byte *)(lVar2 + 0x54bf);
  }
  if (uVar4 < 0x17) {
    ppppppuVar3 = &pppppuStack_58;
    uStack_48 = CONCAT17((char)uVar4,(undefined7)uStack_48);
    if (uVar4 == 0) goto LAB_1002007bc;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    ppppppuVar3 = operator_new(uVar6);
    uStack_48 = uVar6 | 0x8000000000000000;
    pppppuStack_58 = ppppppuVar3;
    uStack_50 = uVar4;
  }
  _memcpy(ppppppuVar3,pvVar5,uVar4);
LAB_1002007bc:
  *(undefined1 *)((long)ppppppuVar3 + uVar4) = 0;
  FUN_1002006a8(param_1,&pppppuStack_58);
  if ((long)uStack_48 < 0) {
    operator_delete(pppppuStack_58);
  }
  return;
}




void thunk_FUN_1002006a8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar2 = FUN_100325424(plVar1);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar3 = FUN_1003254bc(plVar1);
  FUN_1002c62a8(*(undefined8 *)(param_1 + 8),uVar2,uVar3);
  return;
}




void FUN_100200ad4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_100200b50(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f5d0;
  operator_new(0x38b8);
  lVar1 = thunk_FUN_1002c76f4();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  *param_1 = &PTR_FUN_10146f540;
  param_1[2] = &PTR_FUN_10146f590;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  FUN_1004e313c(param_1 + 0x16);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_1004e313c(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1d);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_1004e313c(param_1 + 0x22);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_1004e313c(param_1 + 0x27);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x15f) = 0;
  param_1[0x2b] = 0;
  lVar1 = FUN_10031f280();
  if (lVar1 != 0) {
    FUN_10031f280();
    lVar1 = FUN_10031f280();
    uStack_38 = 0;
    pcStack_28 = thunk_FUN_1002015f8;
    local_40 = param_1;
    local_30 = param_1;
    FUN_1000be5e4(lVar1 + 0x178,&local_40);
  }
  return param_1;
}




undefined8 * thunk_FUN_100200b50(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f5d0;
  operator_new(0x38b8);
  lVar1 = thunk_FUN_1002c76f4();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  *param_1 = &PTR_FUN_10146f540;
  param_1[2] = &PTR_FUN_10146f590;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  FUN_1004e313c(param_1 + 0x16);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_1004e313c(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1d);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_1004e313c(param_1 + 0x22);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_1004e313c(param_1 + 0x27);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)((long)param_1 + 0x15f) = 0;
  param_1[0x2b] = 0;
  lVar1 = FUN_10031f280();
  if (lVar1 != 0) {
    FUN_10031f280();
    lVar1 = FUN_10031f280();
    uStack_38 = 0;
    pcStack_28 = thunk_FUN_1002015f8;
    puStack_40 = param_1;
    puStack_30 = param_1;
    FUN_1000be5e4(lVar1 + 0x178,&puStack_40);
  }
  return param_1;
}




undefined8 * FUN_100200c3c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_10146f540;
  param_1[2] = &PTR_FUN_10146f590;
  lVar1 = FUN_10031f280();
  if (lVar1 != 0) {
    FUN_10031f280();
    lVar1 = FUN_10031f280();
    if (*(uint *)(lVar1 + 0x178) != 0) {
      lVar2 = (ulong)*(uint *)(lVar1 + 0x178) << 5;
      puVar3 = *(undefined8 **)(lVar1 + 0x180);
      do {
        if ((undefined8 *)*puVar3 == param_1) {
          FUN_1000c044c(lVar1 + 0x178,puVar3,puVar3 + 4);
          break;
        }
        lVar2 = lVar2 + -0x20;
        puVar3 = puVar3 + 4;
      } while (lVar2 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    operator_delete((void *)param_1[0x29]);
  }
  if ((void *)param_1[0x28] != (void *)0x0) {
    operator_delete__((void *)param_1[0x28]);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
  }
  if (*(char *)((long)param_1 + 0x137) < '\0') {
    operator_delete((void *)param_1[0x24]);
  }
  if ((void *)param_1[0x23] != (void *)0x0) {
    operator_delete__((void *)param_1[0x23]);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x1e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1e]);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  if ((void *)param_1[0x1c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1c]);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  if ((void *)param_1[0x17] != (void *)0x0) {
    operator_delete__((void *)param_1[0x17]);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  FUN_1001ea85c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146f5d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_100200c3c(void)

{
  FUN_100200c3c();
  return;
}




void FUN_100200d94(long param_1)

{
  FUN_100200c3c(param_1 + -0x10);
  return;
}




void FUN_100200d9c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100200c3c();
  operator_delete(pvVar1);
  return;
}




void FUN_100200db0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100200c3c(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




bool FUN_1002012a4(long param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  
  bVar4 = *(byte *)(param_1 + 0x1f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x10);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar3) {
    pvVar10 = *(void **)(param_1 + 8);
    puVar2 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar2 = (undefined8 *)(param_1 + 8);
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(puVar2,pbVar9,sVar1), iVar6 != 0)) {
        return true;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar9 != ((uint)pvVar10 & 0xff)) {
        return true;
      }
      pbVar8 = (byte *)(param_1 + 9);
      pbVar11 = pbVar9;
      while( true ) {
        uVar7 = uVar7 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar7 == 0) break;
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (bVar4 != *pbVar11) {
          return true;
        }
      }
    }
    bVar4 = *(byte *)(param_1 + 0x37);
    uVar7 = (ulong)bVar4;
    sVar3 = *(size_t *)(param_1 + 0x28);
    if (-1 < (char)bVar4) {
      sVar3 = uVar7;
    }
    if (sVar3 == sVar1) {
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar6 = _memcmp(*(void **)(param_1 + 0x20),pbVar9,sVar1), iVar6 != 0))
        {
          return true;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar9 != ((uint)*(void **)(param_1 + 0x20) & 0xff)) {
          return true;
        }
        pbVar8 = (byte *)(param_1 + 0x21);
        pbVar11 = pbVar9;
        while( true ) {
          uVar7 = uVar7 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar7 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar11) {
            return true;
          }
        }
      }
      bVar4 = *(byte *)(param_1 + 0x67);
      uVar7 = (ulong)bVar4;
      sVar3 = *(size_t *)(param_1 + 0x58);
      if (-1 < (char)bVar4) {
        sVar3 = uVar7;
      }
      if (sVar3 == sVar1) {
        if ((char)bVar4 < '\0') {
          if (sVar1 != 0) {
            iVar6 = _memcmp(*(void **)(param_1 + 0x50),pbVar9,sVar1);
            bVar5 = iVar6 == 0;
LAB_100201480:
            return !bVar5;
          }
        }
        else if (sVar1 != 0) {
          if ((uint)*pbVar9 != ((uint)*(void **)(param_1 + 0x50) & 0xff)) {
            return true;
          }
          pbVar11 = (byte *)(param_1 + 0x51);
          do {
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            if (uVar7 == 0) break;
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar4 == *pbVar9);
          bVar5 = uVar7 == 0;
          goto LAB_100201480;
        }
        return false;
      }
    }
  }
  return true;
}




bool FUN_100201490(long param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  
  bVar4 = *(byte *)(param_1 + 0x1f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x10);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar3) {
    pvVar10 = *(void **)(param_1 + 8);
    puVar2 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar2 = (undefined8 *)(param_1 + 8);
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(puVar2,pbVar9,sVar1), iVar6 != 0)) {
        return true;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar9 != ((uint)pvVar10 & 0xff)) {
        return true;
      }
      pbVar8 = (byte *)(param_1 + 9);
      pbVar11 = pbVar9;
      while( true ) {
        uVar7 = uVar7 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar7 == 0) break;
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (bVar4 != *pbVar11) {
          return true;
        }
      }
    }
    bVar4 = *(byte *)(param_1 + 0x4f);
    uVar7 = (ulong)bVar4;
    sVar3 = *(size_t *)(param_1 + 0x40);
    if (-1 < (char)bVar4) {
      sVar3 = uVar7;
    }
    if (sVar3 == sVar1) {
      if ((char)bVar4 < '\0') {
        if (sVar1 != 0) {
          iVar6 = _memcmp(*(void **)(param_1 + 0x38),pbVar9,sVar1);
          bVar5 = iVar6 == 0;
LAB_1002015e8:
          return !bVar5;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar9 != ((uint)*(void **)(param_1 + 0x38) & 0xff)) {
          return true;
        }
        pbVar11 = (byte *)(param_1 + 0x39);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) break;
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar9);
        bVar5 = uVar7 == 0;
        goto LAB_1002015e8;
      }
      return false;
    }
  }
  return true;
}




void FUN_1002015f8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_40;
  void *local_38;
  
  lVar2 = FUN_10031f280();
  if (lVar2 != 0) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_1002c9a20(*(undefined8 *)(param_1 + 8),&local_40);
    if ((int)local_40 != 0) {
      uVar3 = 0;
      do {
        lVar4 = *(long *)((long)local_38 + uVar3 * 8);
        iVar1 = FUN_10031f7e4(lVar2,lVar4 + 0x15b8);
        *(uint *)(lVar4 + 0x84) =
             *(uint *)(lVar4 + 0x84) & 0xfffffff0 |
             *(uint *)(lVar4 + 0x84) & 7 | (uint)(iVar1 == 1) << 3;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (local_40 & 0xffffffff));
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_100201694(long param_1,string *param_2,undefined1 param_3)

{
  ulong uVar1;
  
  std::string::operator=((string *)(param_1 + 0x98),param_2);
  *(undefined1 *)(param_1 + 0x162) = param_3;
  if ((char)*(byte *)(param_1 + 0xaf) < '\0') {
    uVar1 = *(ulong *)(param_1 + 0xa0);
  }
  else {
    uVar1 = (ulong)*(byte *)(param_1 + 0xaf);
  }
  FUN_1002c902c(*(undefined8 *)(param_1 + 8),uVar1 != 0);
  return;
}




void FUN_1002016e0(long param_1,undefined8 param_2,string *param_3,undefined8 param_4,
                  undefined8 param_5,string *param_6,undefined8 param_7,string *param_8,
                  undefined8 param_9,string *param_10)

{
  *(undefined1 *)(param_1 + 0x161) = 1;
  FUN_1000153b4(param_1 + 0xb0);
  std::string::operator=((string *)(param_1 + 0xc0),param_3);
  FUN_1000153b4(param_1 + 0xd8,param_4);
  FUN_1000153b4(param_1 + 0xe8,param_5);
  std::string::operator=((string *)(param_1 + 0xf8),param_6);
  FUN_1000153b4(param_1 + 0x110,param_7);
  std::string::operator=((string *)(param_1 + 0x120),param_8);
  FUN_1000153b4(param_1 + 0x138,param_9);
  std::string::operator=((string *)(param_1 + 0x148),param_10);
  return;
}




void FUN_1002017a4(long param_1)

{
  FUN_100200dc8(param_1 + -0x10);
  return;
}




void FUN_1002017ac(long param_1)

{
  FUN_1002c8374(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1002017b4(long param_1)

{
  int iVar1;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [48];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [48];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [96];
  undefined1 auStack_d8 [168];
  
  thunk_FUN_100253c74(auStack_1e8);
  iVar1 = FUN_100201884(param_1,auStack_1e8,auStack_d8,auStack_1d8,auStack_1c8,auStack_1b8,
                        auStack_188,auStack_178,auStack_148,auStack_138);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xaf) < '\0') {
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_10020185c;
    }
    else if (*(char *)(param_1 + 0xaf) == '\0') goto LAB_10020185c;
    FUN_10020195c(param_1,param_1 + 0x98,*(undefined1 *)(param_1 + 0x162),0);
  }
  else {
    FUN_100644aec(auStack_208,DAT_101d2365c,auStack_1e8);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_208,1);
  }
LAB_10020185c:
  FUN_10016c310(auStack_1e8);
  return;
}




bool FUN_100201884(long param_1,undefined8 param_2,string *param_3,undefined8 param_4,
                  undefined8 param_5,string *param_6,undefined8 param_7,string *param_8,
                  undefined8 param_9,string *param_10)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x161);
  if (cVar1 != '\0') {
    FUN_1000153b4(param_2,param_1 + 0xb0);
    std::string::operator=(param_3,(string *)(param_1 + 0xc0));
    FUN_1000153b4(param_4,param_1 + 0xd8);
    FUN_1000153b4(param_5,param_1 + 0xe8);
    std::string::operator=(param_6,(string *)(param_1 + 0xf8));
    FUN_1000153b4(param_7,param_1 + 0x110);
    std::string::operator=(param_8,(string *)(param_1 + 0x120));
    FUN_1000153b4(param_9,param_1 + 0x138);
    std::string::operator=(param_10,(string *)(param_1 + 0x148));
  }
  return cVar1 != '\0';
}




void FUN_10020195c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *plVar14;
  bool bVar15;
  ulong uVar16;
  
  uVar16 = param_2[1];
  plVar14 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar16 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar14 = param_2;
  }
  plVar10 = (long *)((long)plVar14 + uVar16);
  plVar7 = plVar14;
  uVar11 = uVar16;
  uVar5 = uVar16;
  plVar8 = plVar14;
  if (0xb < (long)uVar16) {
    while (plVar7 = _memchr(plVar7,0x76,uVar11 - 0xb), plVar7 != (long *)0x0) {
      if (*plVar7 == 0x726f6c676e696176 && (int)plVar7[1] == 0x2f2f3a79) {
        if ((plVar7 != plVar10) && (plVar7 == plVar14)) {
          bVar15 = false;
          goto LAB_100201a84;
        }
        break;
      }
      uVar11 = (long)plVar10 - ((long)plVar7 + 1);
      plVar7 = (long *)((long)plVar7 + 1);
      if ((long)uVar11 < 0xc) break;
    }
  }
  while (((plVar7 = plVar10, 7 < (long)uVar5 &&
          (plVar8 = _memchr(plVar8,0x76,uVar5 - 7), plVar8 != (long *)0x0)) &&
         (plVar7 = plVar8, *plVar8 != 0x2f2f3a6f65646976))) {
    uVar5 = (long)plVar10 - ((long)plVar8 + 1);
    plVar8 = (long *)((long)plVar8 + 1);
  }
  bVar15 = plVar7 == plVar10 || plVar7 != plVar14;
LAB_100201a84:
  plVar8 = plVar14;
  if (*(char *)(param_1 + 0x160) != '\0' && 7 < (long)uVar16) {
    while (plVar8 = _memchr(plVar8,0x76,uVar16 - 7), plVar8 != (long *)0x0) {
      if (*plVar8 == 0x2f2f3a6f65646976) {
        if ((plVar8 != plVar10) && (plVar8 == plVar14)) {
          FUN_1001014c4(1);
        }
        break;
      }
      uVar16 = (long)plVar10 - ((long)plVar8 + 1);
      plVar8 = (long *)((long)plVar8 + 1);
      if ((long)uVar16 < 8) break;
    }
  }
  uVar9 = FUN_10002f320();
  FUN_1000312cc(uVar9,param_2,&DAT_101d91198,param_3,param_4);
  plVar14 = (long *)(param_1 + 0x30);
  bVar4 = *(byte *)(param_1 + 0x47);
  uVar16 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x38);
  if (-1 < (char)bVar4) {
    sVar1 = uVar16;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar8 = (long *)*plVar14;
    plVar10 = plVar8;
    if (-1 < (char)bVar4) {
      plVar10 = plVar14;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar6 = _memcmp(plVar10,pbVar13,sVar1);
      plVar14 = plVar8;
      if (iVar6 == 0) {
        return;
      }
      goto LAB_100201bb8;
    }
    if (sVar1 == 0) {
      return;
    }
    if ((uint)*pbVar13 != ((uint)plVar8 & 0xff)) goto LAB_100201bb8;
    pbVar12 = (byte *)(param_1 + 0x31);
    do {
      uVar16 = uVar16 - 1;
      pbVar13 = pbVar13 + 1;
      if (uVar16 == 0) {
        return;
      }
      bVar3 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar3 == *pbVar13);
  }
  if ((char)bVar4 < '\0') {
    plVar14 = (long *)*plVar14;
  }
LAB_100201bb8:
  plVar10 = (long *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    plVar10 = (long *)*plVar10;
  }
  FUN_100107734(plVar14,plVar10,bVar15,0);
  return;
}




void FUN_100201c0c(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  
  if (*(char *)(param_1 + 0xaf) < '\0') {
    if (*(long *)(param_1 + 0xa0) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0xaf) == '\0') {
    return;
  }
  plVar12 = (long *)(param_1 + 0x30);
  bVar4 = *(byte *)(param_1 + 0x47);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x38);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar11 = (long *)*plVar12;
    plVar7 = plVar11;
    if (-1 < (char)bVar4) {
      plVar7 = plVar12;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(plVar7,pbVar10,sVar1), plVar12 = plVar11, iVar5 == 0))
      goto LAB_100201d1c;
    }
    else {
      if (sVar1 == 0) goto LAB_100201d1c;
      if ((uint)*pbVar10 == ((uint)plVar11 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x31);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_100201d1c;
          bVar3 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar3 == *pbVar10);
        goto LAB_100201cc4;
      }
    }
  }
  else {
LAB_100201cc4:
    if ((char)bVar4 < '\0') {
      plVar12 = (long *)*plVar12;
    }
  }
  plVar7 = (long *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    plVar7 = (long *)*plVar7;
  }
  FUN_100107734(plVar12,plVar7,0,1);
LAB_100201d1c:
  FUN_1002c8374(*(undefined8 *)(param_1 + 8),0);
  uVar6 = FUN_10002f320();
  FUN_1000312cc(uVar6,param_1 + 0x98,&DAT_101d91198,*(undefined1 *)(param_1 + 0x162),0);
  return;
}




void thunk_FUN_10020195c(void)

{
  FUN_10020195c();
  return;
}




void FUN_100201d54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_10031f280();
  if ((lVar2 != 0) && (iVar1 = FUN_10031f7e4(lVar2,param_3), iVar1 == 1)) {
    FUN_10031fccc(lVar2,param_2,param_3);
    return;
  }
  return;
}




undefined8 FUN_100201db4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_100201dbc(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void thunk_FUN_1002015f8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uStack_40;
  void *pvStack_38;
  
  lVar2 = FUN_10031f280();
  if (lVar2 != 0) {
    uStack_40 = 0;
    pvStack_38 = (void *)0x0;
    FUN_1002c9a20(*(undefined8 *)(param_1 + 8),&uStack_40);
    if ((int)uStack_40 != 0) {
      uVar3 = 0;
      do {
        lVar4 = *(long *)((long)pvStack_38 + uVar3 * 8);
        iVar1 = FUN_10031f7e4(lVar2,lVar4 + 0x15b8);
        *(uint *)(lVar4 + 0x84) =
             *(uint *)(lVar4 + 0x84) & 0xfffffff0 |
             *(uint *)(lVar4 + 0x84) & 7 | (uint)(iVar1 == 1) << 3;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uStack_40 & 0xffffffff));
    }
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
  }
  return;
}




undefined8 * FUN_100201dc8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f6b0;
  operator_new(0x1ea8);
  lVar1 = thunk_FUN_1002cc718();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146f610;
  param_1[2] = &PTR_FUN_10146f658;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_10146f688;
  FUN_1003218a4(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0x200000005;
  param_1[0xc] = 0x500000011;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}




undefined8 * thunk_FUN_100201dc8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f6b0;
  operator_new(0x1ea8);
  lVar1 = thunk_FUN_1002cc718();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146f610;
  param_1[2] = &PTR_FUN_10146f658;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_10146f688;
  FUN_1003218a4(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0x200000005;
  param_1[0xc] = 0x500000011;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}




undefined8 * FUN_100201e64(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_10146f610;
  param_1[2] = &PTR_FUN_10146f658;
  param_1[5] = &PTR_FUN_10146f688;
  puVar3 = (uint *)(param_1 + 6);
  uVar2 = *puVar3;
  plVar1 = (long *)param_1[7];
  plVar4 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
        uVar2 = *(uint *)(param_1 + 6);
        plVar1 = (long *)param_1[7];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *puVar3 = 0;
  }
  FUN_100201f80();
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_1002020dc(param_1 + 10,1);
  FUN_100202c30(param_1 + 8,1);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[7] = 0;
  }
  FUN_10052bac0(param_1 + 5);
  FUN_10016b7e0(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146f6b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100201f80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10002f320();
  FUN_100030cf0(uVar1,&DAT_101e43dc8);
  uVar1 = FUN_10002f320();
  FUN_100030818(uVar1,&DAT_101e43dc8);
  return;
}




undefined8 * thunk_FUN_100201e64(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_10146f610;
  param_1[2] = &PTR_FUN_10146f658;
  param_1[5] = &PTR_FUN_10146f688;
  puVar3 = (uint *)(param_1 + 6);
  uVar2 = *puVar3;
  plVar1 = (long *)param_1[7];
  plVar4 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
        uVar2 = *(uint *)(param_1 + 6);
        plVar1 = (long *)param_1[7];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *puVar3 = 0;
  }
  FUN_100201f80();
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_1002020dc(param_1 + 10,1);
  FUN_100202c30(param_1 + 8,1);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[7] = 0;
  }
  FUN_10052bac0(param_1 + 5);
  FUN_10016b7e0(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146f6b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100201fb8(long param_1)

{
  FUN_100201e64(param_1 + -0x10);
  return;
}




void FUN_100201fc0(long param_1)

{
  FUN_100201e64(param_1 + -0x28);
  return;
}




void FUN_100201fc8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100201e64();
  operator_delete(pvVar1);
  return;
}




void FUN_100201fdc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100201e64(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100201ff4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100201e64(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10020200c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x40;
  FUN_1003219a0(lVar1);
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0x200000005;
  *(undefined8 *)(param_1 + 0x60) = 0x500000011;
  FUN_1002020dc(param_1 + 0x50,0);
  lVar2 = FUN_10016c2f0();
  if (*(int *)(lVar2 + 0x38) < 1) {
    FUN_100321ee0(lVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    FUN_1003251e4();
    lVar2 = FUN_1001340f8();
    if (0 < *(int *)(lVar2 + 0x20)) {
      lVar2 = FUN_10016c2f0();
      if (*(char *)(lVar2 + 0x3e) == '\0') {
        lVar2 = FUN_10016c2f0();
        if (*(int *)(lVar2 + 0x38) == 1) {
          FUN_100323fe4(lVar1);
          goto LAB_1002020bc;
        }
      }
    }
    FUN_100323fdc(lVar1,"tutorialLevel");
  }
LAB_1002020bc:
  uVar3 = FUN_1003218ac(lVar1);
  FUN_100202158(param_1,uVar3,0xffffffff);
  return;
}




void FUN_1002020dc(uint *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      pcVar2 = (char *)(*(long *)(param_1 + 2) + 0x27);
      do {
        if (*pcVar2 < '\0') {
          operator_delete(*(void **)(pcVar2 + -0x17));
        }
        pcVar2 = pcVar2 + 0x28;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100202158(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auStack_70 [32];
  
  lVar6 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_1002cd008(*(undefined8 *)(param_1 + 8));
    if (*(int *)(param_2 + 8) != 0) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        iVar3 = FUN_1003219a8(*(long *)(param_2 + 0x10) + lVar6);
        if (iVar3 != 4) {
          FUN_100202748(param_1,*(long *)(param_2 + 0x10) + lVar6,uVar5);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0xa8;
      } while (uVar5 < *(uint *)(param_2 + 8));
    }
    FUN_1002ccea4(*(undefined8 *)(param_1 + 8));
    uVar8 = 0x3e800000;
    if (param_3 != 0xffffffff) {
      uVar8 = 0;
    }
    FUN_1002cce08(uVar8,*(undefined8 *)(param_1 + 8));
  }
  else if (*(int *)(param_2 + 0x18) == 1) {
    if (*(int *)(lVar6 + 8) == 0 || param_3 == 0) {
      iVar3 = 0;
    }
    else {
      lVar7 = 0;
      iVar3 = 0;
      uVar5 = 1;
      do {
        iVar4 = FUN_1003219a8(*(long *)(lVar6 + 0x10) + lVar7);
        if (iVar4 != 4) {
          iVar3 = iVar3 + 1;
        }
        lVar7 = lVar7 + 0xa8;
        bVar1 = uVar5 < *(uint *)(lVar6 + 8);
        bVar2 = uVar5 < param_3;
        uVar5 = uVar5 + 1;
      } while (bVar1 && bVar2);
    }
    FUN_1002cd140(*(undefined8 *)(param_1 + 8),iVar3);
    if (*(int *)(param_2 + 8) != 0) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        iVar4 = FUN_1003219a8(*(long *)(param_2 + 0x10) + lVar6);
        FUN_1002cd214(*(undefined8 *)(param_1 + 8),*(long *)(param_2 + 0x10) + lVar6 + 0x40,iVar3,
                      uVar5,iVar4 == 0);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0xa8;
      } while (uVar5 < *(uint *)(param_2 + 8));
    }
    FUN_1002cd150(*(undefined8 *)(param_1 + 8),iVar3);
  }
  FUN_100644aec(auStack_70,DAT_101d237a4,param_2);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_70,1);
  return;
}




void FUN_100202310(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x98) + 0x10) + (param_2 & 0xffffffff) * 0xa8;
  iVar1 = FUN_1003219a8(lVar4);
  if (iVar1 == 0) {
    uVar2 = FUN_10002f320();
    FUN_100030cf0(uVar2,&DAT_101e43dc8);
    uVar2 = FUN_10002f320();
    FUN_100030818(uVar2,&DAT_101e43dc8);
    FUN_1002cd244(*(undefined8 *)(param_1 + 8),1);
    uVar3 = FUN_1002023ac(param_1,lVar4);
    if ((uVar3 & 1) == 0) {
      FUN_1002024ec(param_1,lVar4,param_2);
      return;
    }
  }
  return;
}




undefined8 FUN_1002023ac(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  void *local_48 [2];
  char local_31;
  
  switch(*(undefined4 *)(param_2 + 0x38)) {
  case 1:
    lVar1 = FUN_10016c2f0();
    *(undefined1 *)(lVar1 + 0x3e) = 1;
    FUN_100106a68(1);
    break;
  case 2:
    lVar1 = FUN_10016c2f0();
    *(undefined1 *)(lVar1 + 0x3e) = 1;
    FUN_100106a68(0);
    lVar1 = FUN_1001340f8();
    if (*(int *)(lVar1 + 0x20) != 1) {
      return 0;
    }
    FUN_10016c2f0(0);
    FUN_10016bda4();
    *(undefined1 *)(param_1 + 0xa8) = 0;
    return 0;
  case 3:
    lVar1 = FUN_1001340f8();
    pcVar2 = (char *)(lVar1 + 8);
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      if (*(long *)(lVar1 + 0x10) != 0) {
        pcVar2 = *(char **)pcVar2;
        goto LAB_1002024a0;
      }
    }
    else if (*(char *)(lVar1 + 0x1f) != '\0') goto LAB_1002024a0;
    break;
  case 4:
    FUN_100126d70();
    pcVar2 = "pre_gwen_tutorial_1";
    goto LAB_1002024a0;
  case 5:
    FUN_100126d70();
    pcVar2 = "pre_gwen_tutorial_2";
LAB_1002024a0:
    FUN_100136e90(local_48,pcVar2);
    FUN_1001df57c(param_1 + 0x28,local_48,1,1,2);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    *(long *)(param_1 + 0xa0) = param_2;
    return 1;
  }
  return 0;
}




void FUN_1002024ec(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  FUN_100202a44(param_1 + 0x50,lVar1);
  FUN_100202b58(param_1 + 0x88,param_1 + 0x98);
  FUN_100321428(lVar1,param_2);
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_100202958(param_1,lVar1);
    return;
  }
  lVar1 = FUN_1003218b4(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_100202158(param_1,lVar1,param_3);
    return;
  }
  return;
}




void FUN_100202598(long param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  void *local_38;
  ulong local_30;
  byte local_21;
  
  if (((*(long *)(param_1 + 0x98) != 0) && (param_2 < *(uint *)(*(long *)(param_1 + 0x98) + 8))) &&
     (iVar1 = FUN_10052ba28(), iVar1 != 0)) {
    uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + (ulong)param_2 * 0xa8 + 0x30);
    if (uVar3 < 7) {
      pcVar2 = (&PTR_s_5v5_standard_10146f6d8)[(int)uVar3];
    }
    else {
      pcVar2 = "";
    }
    FUN_100136e90(&local_38,pcVar2);
    uVar3 = (uint)(char)local_21;
    if (-1 < (int)uVar3) {
      local_30 = (ulong)local_21;
    }
    if (local_30 != 0) {
      FUN_1001df57c(param_1 + 0x28,&local_38,1,1,2);
      uVar3 = (uint)local_21;
    }
    if ((uVar3 >> 7 & 1) != 0) {
      operator_delete(local_38);
    }
  }
  return;
}




void thunk_FUN_10020265c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)(*(int *)(param_1 + 0x50) - 1) * 0x28);
  uVar3 = *puVar2;
  *(undefined8 *)(param_1 + 0x68) = puVar2[1];
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  std::string::operator=((string *)(param_1 + 0x70),(string *)(puVar2 + 2));
  FUN_1002029f8((int *)(param_1 + 0x50));
  uVar1 = *(int *)(param_1 + 0x88) - 1;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
  *(uint *)(param_1 + 0x88) = uVar1;
  return;
}




void FUN_10020265c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x58) + (ulong)(*(int *)(param_1 + 0x50) - 1) * 0x28);
  uVar3 = *puVar2;
  *(undefined8 *)(param_1 + 0x68) = puVar2[1];
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  std::string::operator=((string *)(param_1 + 0x70),(string *)(puVar2 + 2));
  FUN_1002029f8((int *)(param_1 + 0x50));
  uVar1 = *(int *)(param_1 + 0x88) - 1;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
  *(uint *)(param_1 + 0x88) = uVar1;
  return;
}




void FUN_1002026c0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_1001df6c0(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0xa0);
  if ((lVar2 == 0) || (lVar5 = *(long *)(param_1 + 0x98), lVar5 == 0)) {
    return;
  }
  uVar1 = *(uint *)(lVar5 + 8);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    lVar5 = *(long *)(lVar5 + 0x10) + -0xa8;
    do {
      lVar5 = lVar5 + 0xa8;
      uVar4 = uVar3;
      if (lVar5 == lVar2) break;
      uVar3 = uVar3 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != uVar3);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_1002024ec(param_1,lVar2,uVar4);
  return;
}




void FUN_100202740(long param_1)

{
  FUN_1002026c0(param_1 + -0x28);
  return;
}




void FUN_100202748(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long local_38;
  
  pvVar1 = operator_new(0xb8);
  local_38 = thunk_FUN_1002036e8(pvVar1,param_2);
  FUN_1002028d8(param_1 + 0x30,&local_38);
  FUN_1002ccbf4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_38 + 8),param_3);
  return;
}




undefined8 FUN_1002027b0(long param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = *(long **)(param_1 + 0x38);
    plVar3 = plVar2;
    do {
      if (*(int *)(*plVar3 + 0x10) == *param_2) {
        uVar1 = FUN_1002cd294(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*plVar3 + 8));
        if ((uVar1 & 1) != 0) {
          FUN_1002cac54(*(undefined8 *)(*plVar3 + 8),&DAT_101e43dc8);
          return 1;
        }
        uVar1 = (ulong)*(uint *)(param_1 + 0x30);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar1);
  }
  return 0;
}




undefined8 FUN_100202844(long param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = *(long **)(param_1 + 0x38);
    plVar3 = plVar2;
    do {
      if (*(int *)(*plVar3 + 0x14) == *param_2) {
        uVar1 = FUN_1002cd294(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*plVar3 + 8));
        if ((uVar1 & 1) != 0) {
          FUN_1002cac54(*(undefined8 *)(*plVar3 + 8),&DAT_101e43dc8);
          return 1;
        }
        uVar1 = (ulong)*(uint *)(param_1 + 0x30);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar1);
  }
  return 0;
}




void FUN_1002028d8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100202d74(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100202958(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_50 [32];
  
  uVar1 = FUN_1003253c0(param_2);
  if (*(uint *)(param_2 + 8) < 5) {
    pcVar3 = (&PTR_s_very_easy_10146f710)[(int)*(uint *)(param_2 + 8)];
  }
  else {
    pcVar3 = "";
  }
  uVar2 = FUN_10032523c();
  FUN_100325328(uVar2,uVar1,pcVar3);
  FUN_10012f2d4(1);
  FUN_100644aec(auStack_50,DAT_101d23804,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_50,1);
  return;
}




void FUN_100202a44(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100202df0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar9 = *(long *)(param_1 + 2);
  lVar10 = (ulong)(uVar3 + 1) - 1;
  puVar4 = (undefined8 *)(lVar9 + lVar10 * 0x28);
  uVar11 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar11;
  if ((char)*(byte *)((long)param_2 + 0x27) < '\0') {
    uVar5 = param_2[3];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_100202c24();
    }
    puVar6 = (undefined8 *)param_2[2];
  }
  else {
    puVar6 = param_2 + 2;
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x27);
  }
  puVar7 = puVar4 + 2;
  if (uVar5 < 0x17) {
    *(char *)((long)puVar4 + 0x27) = (char)uVar5;
    puVar4 = puVar7;
    if (uVar5 == 0) goto LAB_100202b3c;
  }
  else {
    uVar8 = uVar5 + 0x10 & 0xfffffffffffffff0;
    puVar4 = operator_new(uVar8);
    *puVar7 = puVar4;
    lVar9 = lVar9 + lVar10 * 0x28;
    *(ulong *)(lVar9 + 0x18) = uVar5;
    *(ulong *)(lVar9 + 0x20) = uVar8 | 0x8000000000000000;
  }
  _memcpy(puVar4,puVar6,uVar5);
  puVar7 = puVar4;
LAB_100202b3c:
  *(undefined1 *)((long)puVar7 + uVar5) = 0;
  return;
}




void FUN_100202b58(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100202f60(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100202bd8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016c2f0();
  if (*(char *)(param_1 + 0xa8) != '\0' || 0 < *(int *)(lVar1 + 0x38)) {
    FUN_10020200c(param_1);
    return;
  }
  return;
}




void FUN_100202c1c(long param_1)

{
  FUN_100202bd8(param_1 + -0x10);
  return;
}




void FUN_100202c24(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100202c30(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x28);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        FUN_100202cb8(puVar2 + -4,1);
        puVar2 = puVar2 + 7;
        lVar1 = lVar1 + -0x38;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
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




void FUN_100202d74(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100202df0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x28);
    pvVar5 = *(void **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar10 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar5 + lVar10);
        uVar11 = *puVar1;
        ((undefined8 *)((long)pvVar3 + lVar10))[1] = puVar1[1];
        *(undefined8 *)((long)pvVar3 + lVar10) = uVar11;
        if ((char)*(byte *)((long)puVar1 + 0x27) < '\0') {
          uVar7 = puVar1[3];
          if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_100202c24();
          }
          puVar8 = (undefined8 *)puVar1[2];
        }
        else {
          uVar7 = (ulong)*(byte *)((long)puVar1 + 0x27);
          puVar8 = puVar1 + 2;
        }
        if (uVar7 < 0x17) {
          *(char *)((long)pvVar3 + lVar10 + 0x27) = (char)uVar7;
          pvVar4 = (void *)((long)pvVar3 + lVar10 + 0x10);
          if (uVar7 != 0) goto LAB_100202ebc;
        }
        else {
          uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
          pvVar4 = operator_new(uVar9);
          *(ulong *)((long)pvVar3 + lVar10 + 0x18) = uVar7;
          *(ulong *)((long)pvVar3 + lVar10 + 0x20) = uVar9 | 0x8000000000000000;
          *(void **)((long)pvVar3 + lVar10 + 0x10) = pvVar4;
LAB_100202ebc:
          _memcpy(pvVar4,puVar8,uVar7);
        }
        *(undefined1 *)((long)pvVar4 + uVar7) = 0;
        lVar10 = lVar10 + 0x28;
      } while (puVar1 + 5 != (undefined8 *)((long)pvVar5 + (ulong)uVar2 * 0x28));
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar10 = (ulong)*param_1 * 0x28;
        pcVar6 = (char *)((long)pvVar5 + 0x27);
        do {
          if (*pcVar6 < '\0') {
            operator_delete(*(void **)(pcVar6 + -0x17));
          }
          pcVar6 = pcVar6 + 0x28;
          lVar10 = lVar10 + -0x28;
        } while (lVar10 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_100202f60(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100202fdc(void)

{
  DAT_101e43c50 = 0xff;
  DAT_101e43c52 = 0xffff;
  DAT_101e43c54 = 0xffff;
  DAT_101e43c56 = 0xffbc9c44;
  DAT_101e43c5a = 0xff1166f2;
  DAT_101e43c5e = 0xffe0e0e0;
  DAT_101e43c62 = 0xffa0a0a0;
  DAT_101e43c66 = 0xff8c8c8c;
  DAT_101e43c6a = 0xff322213;
  DAT_101e43c6e = 0xff091911;
  DAT_101e43c72 = 0xff170c19;
  DAT_101e43c76 = 0xff241a14;
  DAT_101e43c7a = 0xff14171c;
  DAT_101e43c7e = 0xff221911;
  DAT_101e43c82 = 0xff1a1416;
  DAT_101e43c86 = 0xff121414;
  DAT_101e43c8a = 0xff1a1809;
  DAT_101e43c8e = 0xff141414;
  DAT_101e43c92 = 0xff141414;
  DAT_101e43c96 = 0xff2929c0;
  DAT_101e43c9a = 0xff283082;
  DAT_101e43c9e = 0xff5262cc;
  DAT_101e43ca2 = 0xff283082;
  DAT_101e43ca6 = 0xff5262cc;
  DAT_101e43caa = 0xff745c42;
  DAT_101e43cae = 0xff184155;
  DAT_101e43cb2 = 0xff92665e;
  DAT_101e43cb6 = 0xffbc9c44;
  DAT_101e43cba = 0xffbbae56;
  DAT_101e43cbe = 0xff8b7b01;
  DAT_101e43cc2 = 0xff90b3ef;
  DAT_101e43cc6 = 0xff728ebe;
  DAT_101e43cca = 0xff19459d;
  DAT_101e43cce = 0xff9d877b;
  DAT_101e43cd2 = 0xffcbb1a3;
  DAT_101e43cd6 = 0xff3f6fb5;
  DAT_101e43cda = 0xffc5c5c5;
  DAT_101e43cde = 0xff4fc1f1;
  DAT_101e43ce2 = 0xff606060;
  DAT_101e43ce6 = 0xffc5ff7b;
  DAT_101e43cea = 0xff5271eb;
  DAT_101e43cee = 0xfffae076;
  DAT_101e43cf2 = 0xff3ac8f6;
  DAT_101e43cf6 = 0xffaaaaaa;
  DAT_101e43cfa = 0xffe19400;
  DAT_101e43cfe = 0xffe19400;
  DAT_101e43d02 = 0xffe550b2;
  DAT_101e43d06 = 0xfff22ae8;
  DAT_101e43d0a = 0xff005ae1;
  DAT_101e43d0e = 0xff1addfa;
  DAT_101e43d12 = 0xff2424b3;
  DAT_101e43d16 = 0xff2424b3;
  DAT_101e43d1a = 0xff646464;
  DAT_101e43d1e = 0xff92665e;
  DAT_101e43d22 = 0xff646037;
  DAT_101e43d2c = 0xff1111a1;
  DAT_101e43d30 = 0xff321ee1;
  DAT_101e43d34 = 0xffc8c8c8;
  DAT_101e43d38 = 0xff321ee1;
  DAT_101e43d44 = 0xff6259b3;
  DAT_101e43d48 = 0xff506e73;
  DAT_101e43d4c = 0xff9dbf86;
  DAT_101e43d28 = 0xffffffff;
  DAT_101e43d50 = 0xffa35244;
  DAT_101e43d3c = 0xff7fe801;
  DAT_101e43d54 = 0xffca828e;
  DAT_101e43d40 = 0xffffffff;
  DAT_101e43d58 = 0xffa6a6a6;
  DAT_101e43d5c = 0xffa6a6a6;
  DAT_101e43d60 = 0xffffffff;
  DAT_101e43d64 = 0xff88ea2f;
  DAT_101e43d68 = 0xff8c8c8c;
  DAT_101e43d6c = 0xffffb400;
  DAT_101e43d70 = 0xffff00ff;
  DAT_101e43d74 = 0xff00aded;
  DAT_101e43d78 = 0xff33d3ff;
  DAT_101e43d7c = 0xff7fe801;
  DAT_101e43d80 = 0xff282828;
  DAT_101e43d84 = 0xfff0f0f0;
  DAT_101e43d88 = 0xffa4781e;
  DAT_101e43d8c = 0xffa6654b;
  DAT_101e43d90 = 0xff93435b;
  DAT_101e43d94 = 0xff387f9c;
  DAT_101e43d98 = 0xffa3781e;
  DAT_101e43d9c = 0xffffd18a;
  DAT_101e43da0 = 0xffff61f7;
  DAT_101e43da4 = 0xff5de1f2;
  DAT_101e43da8 = 0xff80eaff;
  DAT_101e43dac = 0xff32e00e;
  DAT_101e43db0 = 0xff5a3c10;
  DAT_101e43db4 = 0xff330b03;
  DAT_101e43db8 = 0xff33031d;
  DAT_101e43dbc = 0xff032433;
  DAT_101e43dc0 = 0xff9e8e8d;
  DAT_101d237a4 = FUN_100644a94("UI::EVENT_PLAYMENU_ADVANCE_TO_STEP");
  FUN_10001549c(&DAT_101e43dc8,"PlayMenuKeyhole");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e43dc8,0x100000000);
  return;
}




undefined8 * FUN_1002036e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *param_1 = &PTR_FUN_10146f768;
  operator_new(0x1be0);
  lVar4 = thunk_FUN_1002ca1ac();
  *(undefined8 **)(lVar4 + 0x240) = param_1;
  *param_1 = &PTR_FUN_10146f748;
  param_1[1] = lVar4;
  uVar6 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar6;
  FUN_10003330c(param_1 + 4,param_2 + 2);
  uVar7 = param_2[6];
  uVar6 = param_2[5];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 7);
  param_1[8] = uVar7;
  param_1[7] = uVar6;
  thunk_FUN_1004e439c(param_1 + 10,param_2 + 8);
  puVar1 = param_1 + 0xc;
  thunk_FUN_1004e439c(puVar1,param_2 + 10);
  thunk_FUN_1004e439c(param_1 + 0xe,param_2 + 0xc);
  FUN_10003330c(param_1 + 0x10,param_2 + 0xe);
  uVar7 = param_2[0x12];
  uVar6 = param_2[0x11];
  uVar8 = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)((long)param_1 + 0xa9) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)((long)param_1 + 0xa1) = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x13] = uVar6;
  iVar3 = FUN_1003219a8(param_1 + 2);
  FUN_1002caae4(param_1[1],param_1 + 10);
  FUN_1002cab4c(param_1[1],*(undefined4 *)(param_1 + 0x13),param_1[0x14]);
  FUN_1002cabbc(param_1[1],*(int *)(param_1 + 8) != -1);
  FUN_1002cac14(param_1[1],param_1 + 0xe);
  FUN_1002cac30(param_1[1],*(undefined1 *)((long)param_1 + 0xaf));
  FUN_1002cac1c(param_1[1],*(undefined1 *)((long)param_1 + 0xae));
  FUN_1002cac3c(param_1[1],*(undefined1 *)(param_1 + 0x16));
  uVar5 = 1;
  if (iVar3 == 2) {
    uVar5 = 2;
  }
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = uVar5;
  }
  FUN_1002caadc(param_1[1],uVar2);
  if (*(int *)(param_1 + 0x15) == 0) {
    FUN_1002cab14(param_1[1],puVar1);
  }
  else {
    FUN_1004e313c(auStack_50);
    FUN_1004e38ac(auStack_50,"%d");
    thunk_FUN_1004e439c(auStack_60,puVar1);
    FUN_1004e3120(auStack_70,"[MIN]");
    FUN_1004e3bc4(auStack_60,0,auStack_70,auStack_50);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1002cab14(param_1[1],auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  FUN_1002038ec(param_1,param_1 + 2);
  return param_1;
}




void FUN_1002038ec(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  
  iVar2 = FUN_1003219a8(param_2);
  switch(*(undefined4 *)(param_2 + 0x34)) {
  case 1:
  case 2:
  case 3:
  case 4:
    FUN_100203ac8(param_1,param_2);
    break;
  case 7:
    FUN_100203bf4(param_1,param_2);
    break;
  case 8:
    FUN_100203d28(param_1,param_2);
    break;
  case 9:
    FUN_100203e5c(param_1,param_2);
    break;
  case 10:
    plVar5 = *(long **)(param_1 + 8);
    (**(code **)(*plVar5 + 0xe8))(plVar5);
    FUN_1002040fc(plVar5 + 0x349,1);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 == 2) {
    uVar3 = FUN_100327e00();
    lVar4 = FUN_100327f2c(uVar3,2);
    if ((iVar2 == 0) && (fVar6 = *(float *)(lVar4 + 0x1c), 0 < (int)fVar6)) {
      plVar5 = *(long **)(param_1 + 8);
      (**(code **)(*plVar5 + 0xe8))(plVar5);
      uVar3 = FUN_1002041e4(plVar5 + 0x349,1);
      FUN_1002fa90c(uVar3,(int)fVar6);
      return;
    }
  }
  else if (iVar1 == 1) {
    uVar3 = FUN_100327e00();
    lVar4 = FUN_100327f2c(uVar3,1);
    iVar1 = *(int *)(lVar4 + 4);
    uVar3 = FUN_100327e00();
    lVar4 = FUN_100327f2c(uVar3,1);
    if (((iVar2 == 0) && (-1 < iVar1)) && (iVar2 = (int)*(float *)(lVar4 + 0x1c), -1 < iVar2)) {
LAB_100203a78:
      plVar5 = *(long **)(param_1 + 8);
      (**(code **)(*plVar5 + 0xe8))(plVar5);
      uVar3 = FUN_100204170(plVar5 + 0x349,1);
      FUN_1002fa5cc(uVar3,iVar1,iVar2);
      return;
    }
  }
  else if (iVar1 == 0) {
    uVar3 = FUN_100327e00();
    lVar4 = FUN_100327f2c(uVar3,0);
    iVar1 = *(int *)(lVar4 + 4);
    uVar3 = FUN_100327e00();
    lVar4 = FUN_100327f2c(uVar3,0);
    if (((iVar2 == 0) && (0 < iVar1)) && (iVar2 = (int)*(float *)(lVar4 + 0x1c), 0 < iVar2))
    goto LAB_100203a78;
  }
  return;
}




undefined8 * thunk_FUN_1002036e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  undefined1 auStack_60 [8];
  void *pvStack_58;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  
  *param_1 = &PTR_FUN_10146f768;
  operator_new(0x1be0);
  lVar4 = thunk_FUN_1002ca1ac();
  *(undefined8 **)(lVar4 + 0x240) = param_1;
  *param_1 = &PTR_FUN_10146f748;
  param_1[1] = lVar4;
  uVar6 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar6;
  FUN_10003330c(param_1 + 4,param_2 + 2);
  uVar7 = param_2[6];
  uVar6 = param_2[5];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 7);
  param_1[8] = uVar7;
  param_1[7] = uVar6;
  thunk_FUN_1004e439c(param_1 + 10,param_2 + 8);
  puVar1 = param_1 + 0xc;
  thunk_FUN_1004e439c(puVar1,param_2 + 10);
  thunk_FUN_1004e439c(param_1 + 0xe,param_2 + 0xc);
  FUN_10003330c(param_1 + 0x10,param_2 + 0xe);
  uVar7 = param_2[0x12];
  uVar6 = param_2[0x11];
  uVar8 = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)((long)param_1 + 0xa9) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)((long)param_1 + 0xa1) = uVar8;
  param_1[0x14] = uVar7;
  param_1[0x13] = uVar6;
  iVar3 = FUN_1003219a8(param_1 + 2);
  FUN_1002caae4(param_1[1],param_1 + 10);
  FUN_1002cab4c(param_1[1],*(undefined4 *)(param_1 + 0x13),param_1[0x14]);
  FUN_1002cabbc(param_1[1],*(int *)(param_1 + 8) != -1);
  FUN_1002cac14(param_1[1],param_1 + 0xe);
  FUN_1002cac30(param_1[1],*(undefined1 *)((long)param_1 + 0xaf));
  FUN_1002cac1c(param_1[1],*(undefined1 *)((long)param_1 + 0xae));
  FUN_1002cac3c(param_1[1],*(undefined1 *)(param_1 + 0x16));
  uVar5 = 1;
  if (iVar3 == 2) {
    uVar5 = 2;
  }
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = uVar5;
  }
  FUN_1002caadc(param_1[1],uVar2);
  if (*(int *)(param_1 + 0x15) == 0) {
    FUN_1002cab14(param_1[1],puVar1);
  }
  else {
    FUN_1004e313c(auStack_50);
    FUN_1004e38ac(auStack_50,"%d");
    thunk_FUN_1004e439c(auStack_60,puVar1);
    FUN_1004e3120(auStack_70,"[MIN]");
    FUN_1004e3bc4(auStack_60,0,auStack_70,auStack_50);
    if (pvStack_68 != (void *)0x0) {
      operator_delete__(pvStack_68);
    }
    FUN_1002cab14(param_1[1],auStack_60);
    if (pvStack_58 != (void *)0x0) {
      operator_delete__(pvStack_58);
    }
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
  }
  FUN_1002038ec(param_1,param_1 + 2);
  return param_1;
}




void FUN_100203ac8(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_48;
  void *local_40;
  undefined1 auStack_32 [2];
  
  iVar2 = FUN_1003219a8(param_2);
  if (iVar2 != 2) {
    plVar3 = *(long **)(param_1 + 8);
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    plVar3 = (long *)FUN_100204258(plVar3 + 0x349,1);
    FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
    FUN_10065165c(plVar3,1);
    local_48 = 0x3f8000003f000000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_48);
    puVar1 = &DAT_10115a168;
    if (iVar2 != 0) {
      puVar1 = (undefined4 *)&DAT_10115834f;
    }
    FUN_100651460(plVar3,puVar1);
    FUN_1001340f8();
    FUN_100203f0c(auStack_32,"%d");
    FUN_1004e3120(&local_48,auStack_32);
    (**(code **)(*plVar3 + 0x138))(plVar3,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
    }
  }
  return;
}




void FUN_100203bf4(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  iVar3 = FUN_1003219a8(param_2);
  if (iVar3 == 3) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    FUN_100204340(plVar10 + 0x349,1);
    return;
  }
  if (iVar3 == 1) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    bVar2 = true;
    uVar5 = FUN_1002042cc(plVar10 + 0x349,1);
    FUN_100327e00();
    uVar6 = FUN_100327f1c();
    FUN_100327e00();
    uVar7 = FUN_100327f0c();
    lVar8 = FUN_10015d3ec();
    uVar1 = *(uint *)(lVar8 + 0x55d0);
    FUN_10015d3ec();
    uVar4 = FUN_1001636b0();
    if (uVar4 < (uint)uVar7) {
      lVar8 = FUN_10015d3ec();
      uVar9 = FUN_100131560();
      if ((uVar9 & 1) == 0) {
        bVar2 = *(char *)(lVar8 + 0x5670) != '\0';
      }
      else {
        bVar2 = true;
      }
    }
    FUN_1002f9f54(uVar5,(uint)uVar6 <= uVar1,uVar6);
    FUN_1002fa0f4(uVar5,bVar2,uVar7);
    return;
  }
  return;
}




void FUN_100203d28(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  iVar3 = FUN_1003219a8(param_2);
  if (iVar3 == 3) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    FUN_100204340(plVar10 + 0x349,1);
    return;
  }
  if (iVar3 == 1) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    bVar2 = true;
    uVar5 = FUN_1002042cc(plVar10 + 0x349,1);
    FUN_100327e00();
    uVar6 = FUN_100327f24();
    FUN_100327e00();
    uVar7 = FUN_100327f14();
    lVar8 = FUN_10015d3ec();
    uVar1 = *(uint *)(lVar8 + 0x55d0);
    FUN_10015d3ec();
    uVar4 = FUN_1001636b0();
    if (uVar4 < (uint)uVar7) {
      lVar8 = FUN_10015d3ec();
      uVar9 = FUN_100131560();
      if ((uVar9 & 1) == 0) {
        bVar2 = *(char *)(lVar8 + 0x5670) != '\0';
      }
      else {
        bVar2 = true;
      }
    }
    FUN_1002f9f54(uVar5,(uint)uVar6 <= uVar1,uVar6);
    FUN_1002fa0f4(uVar5,bVar2,uVar7);
    return;
  }
  return;
}




void FUN_100203e5c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = FUN_1003219a8(param_2);
  if (iVar1 == 3) {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0xe8))(plVar4);
    FUN_100204340(plVar4 + 0x349,1);
    return;
  }
  if (iVar1 == 1) {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0xe8))(plVar4);
    uVar2 = FUN_1002042cc(plVar4 + 0x349,1);
    lVar3 = FUN_10015d3ec();
    FUN_1002f9f54(uVar2,4 < *(uint *)(lVar3 + 0x55d0),5);
    return;
  }
  return;
}




void FUN_100203f0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,2,param_2,&stack0x00000000);
  return;
}




undefined8 * FUN_100203f3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146f748;
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR_FUN_10146f768;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100203fdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146f748;
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR_FUN_10146f768;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100204078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146f768;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1002040bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146f768;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void * FUN_1002040fc(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x340);
  lVar2 = thunk_FUN_1002f9be4();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_100204170(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x950);
  lVar2 = thunk_FUN_1002fa510();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_1002041e4(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x430);
  lVar2 = thunk_FUN_1002fa858();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_100204258(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x130);
  lVar2 = thunk_FUN_100650e64();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_1002042cc(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x810);
  lVar2 = thunk_FUN_1002f9cf8();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_100204340(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x340);
  lVar2 = thunk_FUN_1002faae0();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




undefined8 * FUN_1002043b4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f878;
  operator_new(0x123a0);
  lVar1 = thunk_FUN_1002ce17c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  FUN_1003383c8(param_1 + 0x13);
  FUN_1001e1b34(param_1 + 0x16);
  *param_1 = &PTR_FUN_10146f788;
  param_1[2] = &PTR_FUN_10146f7e0;
  param_1[0x13] = &PTR_FUN_10146f820;
  param_1[0x16] = &PTR_FUN_10146f850;
  FUN_10020443c(param_1);
  return param_1;
}




void FUN_10020443c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_100331578();
    if (*(char *)(lVar2 + 0x20) != '\0') {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar3 = FUN_100339bc8();
      uVar4 = FUN_100339ba8();
      uVar5 = FUN_100339bb8();
      FUN_1002ce604(uVar6,uVar3,uVar4,uVar5);
      return;
    }
  }
  return;
}




undefined8 * thunk_FUN_1002043b4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f878;
  operator_new(0x123a0);
  lVar1 = thunk_FUN_1002ce17c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x648) = param_1;
  FUN_1001efbf0(param_1 + 2);
  FUN_1003383c8(param_1 + 0x13);
  FUN_1001e1b34(param_1 + 0x16);
  *param_1 = &PTR_FUN_10146f788;
  param_1[2] = &PTR_FUN_10146f7e0;
  param_1[0x13] = &PTR_FUN_10146f820;
  param_1[0x16] = &PTR_FUN_10146f850;
  FUN_10020443c(param_1);
  return param_1;
}




undefined8 * FUN_1002044b0(undefined8 *param_1)

{
  FUN_1001e1bb0(param_1 + 0x16);
  FUN_100338444(param_1 + 0x13);
  FUN_1001ea85c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146f878;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1002044b0(void)

{
  FUN_1002044b0();
  return;
}




void FUN_100204510(long param_1)

{
  FUN_1002044b0(param_1 + -0x10);
  return;
}




void FUN_100204518(long param_1)

{
  FUN_1002044b0(param_1 + -0x98);
  return;
}




void FUN_100204520(long param_1)

{
  FUN_1002044b0(param_1 + -0xb0);
  return;
}




void FUN_100204528(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002044b0();
  operator_delete(pvVar1);
  return;
}




void FUN_10020453c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002044b0(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100204554(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002044b0(param_1 + -0x98);
  operator_delete(pvVar1);
  return;
}




void FUN_10020456c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002044b0(param_1 + -0xb0);
  operator_delete(pvVar1);
  return;
}




void FUN_100204584(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
  void *local_c0;
  undefined8 local_b8 [2];
  undefined1 auStack_a8 [8];
  void *local_a0;
  void *local_90;
  char local_79;
  void *local_78;
  char local_61;
  undefined8 local_5c;
  undefined4 local_54;
  void *local_50;
  char local_39;
  
  lVar1 = FUN_10015d3ec();
  if (*(char *)(lVar1 + 0x567c) != '\0') {
    uVar2 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar3 = FUN_1004e0150("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("MAIN_PROFILE_LOGIN",0);
    FUN_1001e3120(uVar2,uVar3,uVar4,uVar5,param_1,0,thunk_FUN_100204720);
    return;
  }
  thunk_FUN_1001ad400(local_b8);
  uVar2 = FUN_1004e0150("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_c8,uVar2);
  FUN_1000153b4(auStack_a8,auStack_c8);
  local_b8[0] = 0x447a000044c80000;
  local_54 = 1;
  FUN_1001ad494(local_b8,PTR_s_build___MenuPartsCommon_tga_101854970,"popup_fill",&DAT_101158353);
  local_5c = 0xffa3781effa4781e;
  uVar2 = FUN_1000eb768(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0,local_b8);
  FUN_10021fea0(uVar2,1);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  return;
}




void thunk_FUN_100204720(void)

{
  undefined8 uVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(apvStack_38,"vainglory://Profile");
  FUN_1000312cc(uVar1,apvStack_38,&DAT_101d91198,0,0);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return;
}




void FUN_100204720(void)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_38,"vainglory://Profile");
  FUN_1000312cc(uVar1,local_38,&DAT_101d91198,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100204784(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = FUN_10002f320();
  uVar1 = *(ulong *)(lVar2 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar2 + 0xe1af)) {
    uVar1 = (ulong)*(byte *)(lVar2 + 0xe1af);
  }
  if (uVar1 != 0) {
    return;
  }
  FUN_10020443c(param_1);
  return;
}




void FUN_1002047d4(long param_1)

{
  FUN_100204784(param_1 + -0x98);
  return;
}




void FUN_1002047dc(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_2 + 0x28);
  uVar2 = FUN_10002f320();
  if (cVar1 != '\0') {
    FUN_100031670(uVar2,param_2,param_2 + 0x18);
    return;
  }
  FUN_100030fdc();
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_1004e0150("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
  return;
}




void thunk_FUN_1002047dc(void)

{
  FUN_1002047dc();
  return;
}




void FUN_10020486c(undefined8 param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  
  bVar3 = param_2[0x17];
  uVar8 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d238b8;
  if (-1 < (char)DAT_101d238c7) {
    sVar2 = (ulong)DAT_101d238c7;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d238b0;
    if (-1 < (char)DAT_101d238c7) {
      pbVar7 = (byte *)&DAT_101d238b0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar6,pbVar7,sVar1), iVar5 == 0)) goto LAB_100204a4c;
    }
    else {
      if (sVar1 == 0) goto LAB_100204a4c;
      pbVar6 = param_2;
      uVar4 = uVar8;
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar4 - 1 == 0) goto LAB_100204a4c;
          uVar4 = uVar4 - 1;
        } while (*pbVar6 == *pbVar7);
      }
    }
  }
  sVar2 = DAT_101d238d0;
  if (-1 < (char)DAT_101d238df) {
    sVar2 = (ulong)DAT_101d238df;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d238c8;
    if (-1 < (char)DAT_101d238df) {
      pbVar7 = (byte *)&DAT_101d238c8;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar6,pbVar7,sVar1), iVar5 == 0)) goto LAB_100204a4c;
    }
    else {
      if (sVar1 == 0) goto LAB_100204a4c;
      pbVar6 = param_2;
      uVar4 = uVar8;
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar4 - 1 == 0) goto LAB_100204a4c;
          uVar4 = uVar4 - 1;
        } while (*pbVar6 == *pbVar7);
      }
    }
  }
  sVar2 = DAT_101d238e8;
  if (-1 < (char)DAT_101d238f7) {
    sVar2 = (ulong)DAT_101d238f7;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d238e0;
    if (-1 < (char)DAT_101d238f7) {
      pbVar7 = (byte *)&DAT_101d238e0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar6,pbVar7,sVar1), iVar5 == 0)) goto LAB_100204a4c;
    }
    else {
      if (sVar1 == 0) {
LAB_100204a4c:
        FUN_10020443c(param_1);
        return;
      }
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          pbVar7 = pbVar7 + 1;
          param_2 = param_2 + 1;
          if (uVar8 == 0) goto LAB_100204a4c;
        } while (*param_2 == *pbVar7);
      }
    }
  }
  return;
}




void FUN_100204a60(long param_1)

{
  FUN_10020486c(param_1 + -0xb0);
  return;
}




void FUN_100204a68(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = FUN_10002f320();
  uVar1 = *(ulong *)(lVar2 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar2 + 0xe1af)) {
    uVar1 = (ulong)*(byte *)(lVar2 + 0xe1af);
  }
  if (uVar1 != 0) {
    return;
  }
  FUN_10020443c(param_1);
  return;
}




void FUN_100204ab8(long param_1)

{
  FUN_100204a68(param_1 + -0x10);
  return;
}




void FUN_100204ac0(undefined8 param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  lVar6 = FUN_10002f320();
  uVar10 = *(ulong *)(lVar6 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar6 + 0xe1af)) {
    uVar10 = (ulong)*(byte *)(lVar6 + 0xe1af);
  }
  if (uVar10 != 0) goto LAB_100204afc;
  bVar3 = param_2[0x17];
  uVar10 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d238d0;
  if (-1 < (char)DAT_101d238df) {
    sVar2 = (ulong)DAT_101d238df;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar8 = param_2;
    }
    pbVar9 = DAT_101d238c8;
    if (-1 < (char)DAT_101d238df) {
      pbVar9 = (byte *)&DAT_101d238c8;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(pbVar8,pbVar9,sVar1), iVar5 != 0)) goto LAB_100204bb0;
    }
    else if (sVar1 != 0) {
      pbVar8 = param_2;
      uVar4 = uVar10;
      if ((uint)*pbVar9 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          pbVar9 = pbVar9 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_100204c2c;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar9);
      }
      goto LAB_100204bb0;
    }
LAB_100204c2c:
    lVar6 = FUN_100339ba8();
    iVar5 = FUN_10033a870();
    if (iVar5 == 0) {
LAB_100204c8c:
      FUN_100204584(param_1);
      goto LAB_100204afc;
    }
    FUN_10033a91c(lVar6);
    FUN_100339c04();
  }
  else {
LAB_100204bb0:
    sVar2 = DAT_101d238e8;
    if (-1 < (char)DAT_101d238f7) {
      sVar2 = (ulong)DAT_101d238f7;
    }
    if (sVar1 != sVar2) goto LAB_100204afc;
    pbVar8 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar8 = param_2;
    }
    pbVar9 = DAT_101d238e0;
    if (-1 < (char)DAT_101d238f7) {
      pbVar9 = (byte *)&DAT_101d238e0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(pbVar8,pbVar9,sVar1), iVar5 != 0)) goto LAB_100204afc;
    }
    else if (sVar1 != 0) {
      pbVar8 = param_2;
      if ((uint)*pbVar9 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar10 == 0) goto LAB_100204c5c;
        } while (*pbVar8 == *pbVar9);
      }
      goto LAB_100204afc;
    }
LAB_100204c5c:
    lVar6 = FUN_100339bb8();
    iVar5 = FUN_10033a870();
    if (iVar5 == 0) goto LAB_100204c8c;
    FUN_10033a91c(lVar6);
    FUN_100339c30();
  }
  uVar7 = FUN_10002f320();
  FUN_100031510(uVar7,param_2,lVar6 + 0x10);
LAB_100204afc:
  FUN_10002f320();
  FUN_1000312bc();
  return;
}




void FUN_100204c98(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  
  bVar3 = param_2[0x17];
  uVar11 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar11;
  }
  sVar2 = DAT_101d238d0;
  if (-1 < (char)DAT_101d238df) {
    sVar2 = (ulong)DAT_101d238df;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar8 = param_2;
    }
    pbVar10 = DAT_101d238c8;
    if (-1 < (char)DAT_101d238df) {
      pbVar10 = (byte *)&DAT_101d238c8;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 != 0)) goto LAB_100204d50;
    }
    else if (sVar1 != 0) {
      pbVar8 = param_2;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_100204dcc;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
      goto LAB_100204d50;
    }
LAB_100204dcc:
    uVar6 = FUN_10002f320();
    lVar7 = *(long *)(param_1 + 8);
    lVar9 = 0xc418;
  }
  else {
LAB_100204d50:
    sVar2 = DAT_101d238e8;
    if (-1 < (char)DAT_101d238f7) {
      sVar2 = (ulong)DAT_101d238f7;
    }
    if (sVar1 != sVar2) {
      return;
    }
    pbVar8 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar8 = param_2;
    }
    pbVar10 = DAT_101d238e0;
    if (-1 < (char)DAT_101d238f7) {
      pbVar10 = (byte *)&DAT_101d238e0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 != 0) && (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar10 != ((uint)*(byte **)param_2 & 0xff)) {
        return;
      }
      while( true ) {
        uVar11 = uVar11 - 1;
        pbVar10 = pbVar10 + 1;
        param_2 = param_2 + 1;
        if (uVar11 == 0) break;
        if (*param_2 != *pbVar10) {
          return;
        }
      }
    }
    uVar6 = FUN_10002f320();
    lVar7 = *(long *)(param_1 + 8);
    lVar9 = 0x121e8;
  }
  FUN_10003128c(uVar6,lVar7 + lVar9);
  return;
}




undefined8 FUN_100204e20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_100204e28(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




undefined8 * FUN_100204e30(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f8d8;
  operator_new(0x2cc0);
  lVar1 = thunk_FUN_1002cec5c();
  *(undefined8 **)(lVar1 + 0x9b8) = param_1;
  *param_1 = &PTR_FUN_10146f8a8;
  param_1[1] = lVar1;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return param_1;
}




undefined8 * FUN_100204e7c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_10146f8d8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100204ec0(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_10146f8d8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100204f00(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    FUN_100204f34();
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}




undefined8 FUN_100204f34(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = FUN_10015d3f8();
  if (iVar3 == 7) {
    if (iVar1 != 0) {
      lVar2 = FUN_10015d3ec();
      iVar3 = (int)(*(float *)(lVar2 + 0x5668) * 7.0);
      goto LAB_100204f8c;
    }
  }
  else if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    iVar3 = *(int *)(lVar2 + 0x55fc);
    goto LAB_100204f8c;
  }
  iVar3 = 0;
LAB_100204f8c:
  FUN_1002cf6bc(*(undefined8 *)(param_1 + 8),iVar3,*(undefined4 *)(param_1 + 0x10));
  return 1;
}




void FUN_100204fa8(void)

{
  return;
}




void FUN_100204fac(void)

{
  return;
}




undefined8 * FUN_100204fb0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48 [2];
  char local_31;
  
  *param_1 = &PTR_FUN_10146fcc8;
  operator_new(0x1348);
  lVar1 = thunk_FUN_1002ce70c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146f908;
  param_1[2] = &PTR_FUN_10146f930;
  *(int *)(param_1 + 5) = (int)param_2;
  uVar2 = FUN_10015d3ec();
  uVar3 = FUN_10032721c(param_2);
  FUN_10001549c(local_48,uVar3);
  FUN_100166e70(uVar2,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return param_1;
}




undefined8 * thunk_FUN_100204fb0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *apvStack_48 [2];
  char cStack_31;
  
  *param_1 = &PTR_FUN_10146fcc8;
  operator_new(0x1348);
  lVar1 = thunk_FUN_1002ce70c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146f908;
  param_1[2] = &PTR_FUN_10146f930;
  *(int *)(param_1 + 5) = (int)param_2;
  uVar2 = FUN_10015d3ec();
  uVar3 = FUN_10032721c(param_2);
  FUN_10001549c(apvStack_48,uVar3);
  FUN_100166e70(uVar2,apvStack_48);
  if (cStack_31 < '\0') {
    operator_delete(apvStack_48[0]);
  }
  return param_1;
}




undefined8 * FUN_100205060(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146fcc8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1002050ac(long param_1)

{
  FUN_10014f51c();
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_10146fcc8;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_1002050f0(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146fcc8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100205138(long param_1)

{
  FUN_1002050f0(param_1 + -0x10);
  return;
}




void FUN_100205140(long param_1,long param_2)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  uVar3 = *(uint *)(param_2 + 0x28);
  if (uVar3 == 0) {
    iVar7 = 0;
  }
  else {
    lVar8 = 0;
    iVar7 = 0;
    do {
      lVar9 = *(long *)(param_2 + 0x30);
      lVar1 = lVar9 + lVar8;
      pcVar5 = (char *)FUN_10032721c(*(undefined4 *)(param_1 + 0x28));
      sVar6 = _strlen(pcVar5);
      sVar2 = *(size_t *)(lVar1 + 0x20);
      if (-1 < (char)*(byte *)(lVar1 + 0x2f)) {
        sVar2 = (ulong)*(byte *)(lVar1 + 0x2f);
      }
      if ((sVar6 != sVar2) ||
         (iVar4 = std::string::compare(lVar1 + 0x18,0,(char *)0xffffffffffffffff,(ulong)pcVar5),
         iVar4 != 0)) {
        return;
      }
      if (*(char *)(lVar9 + lVar8 + 0x10c) != '\0') {
        iVar7 = iVar7 + 1;
      }
      lVar8 = lVar8 + 0x110;
    } while ((ulong)uVar3 * 0x110 - lVar8 != 0);
  }
  FUN_1002ce960(*(undefined8 *)(param_1 + 8),iVar7,(ulong)uVar3);
  return;
}




void FUN_100205234(long param_1)

{
  FUN_100205140(param_1 + -0x10);
  return;
}




undefined8 * FUN_10020523c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fcc8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100205280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fcc8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1002052c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f8d8;
  operator_new(0x2cc0);
  lVar1 = thunk_FUN_1002cec5c();
  *(undefined8 **)(lVar1 + 0x9b8) = param_1;
  *param_1 = &PTR_thunk_FUN_100205540_10146fce8;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  pcStack_28 = thunk_FUN_1002054cc;
  local_30 = param_1;
  FUN_100643618(0x3f000000,&local_30,0,1);
  return param_1;
}




undefined8 * thunk_FUN_1002052c0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f8d8;
  operator_new(0x2cc0);
  lVar1 = thunk_FUN_1002cec5c();
  *(undefined8 **)(lVar1 + 0x9b8) = param_1;
  *param_1 = &PTR_thunk_FUN_100205540_10146fce8;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  pcStack_28 = thunk_FUN_1002054cc;
  puStack_30 = param_1;
  FUN_100643618(0x3f000000,&puStack_30,0,1);
  return param_1;
}




undefined8 * FUN_100205340(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_100205540_10146fce8;
  if (*(char *)(param_1 + 5) != '\0') {
    puVar2 = (uint *)FUN_100326d90();
    if (*puVar2 != 0) {
      lVar3 = *(long *)(puVar2 + 2);
      lVar4 = (ulong)*puVar2 << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100205984();
          break;
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
  }
  pcStack_28 = thunk_FUN_1002054cc;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_10146f8d8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_100205340(void)

{
  FUN_100205340();
  return;
}




void FUN_100205400(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100205340();
  operator_delete(pvVar1);
  return;
}




void FUN_100205414(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    std::string::operator=((string *)(param_1 + 0x10),(string *)(param_2 + 0x48));
    FUN_1002cf224(*(undefined8 *)(param_1 + 8),param_2);
    uVar1 = FUN_100326d90();
    local_40 = 0;
    pcStack_28 = thunk_FUN_1002057d4;
    lStack_38 = param_1;
    local_30 = param_1;
    FUN_1002059f4(uVar1,&local_40);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}




bool FUN_100205480(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  lVar2 = FUN_100326d78(plVar1);
  if (lVar2 != 0) {
    FUN_1002cf224(*(undefined8 *)(param_1 + 8),lVar2);
  }
  return lVar2 != 0;
}




void FUN_1002054cc(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_30;
  code *pcStack_28;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  lVar2 = FUN_100326d78(plVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_100319d14();
    if (lVar2 != 0) {
      FUN_1002cf874(*(undefined8 *)(param_1 + 8),lVar2);
      return;
    }
    FUN_100326da8();
    pcStack_28 = thunk_FUN_1002054cc;
    local_30 = param_1;
    FUN_100643a8c(&local_30);
  }
  return;
}




void FUN_100205540(long param_1)

{
  long *******ppppppplVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *******ppppppplVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  size_t sVar16;
  long *******ppppppplVar17;
  undefined1 auStack_78 [32];
  long ******local_58;
  size_t local_50;
  undefined8 local_48;
  long *plVar7;
  
  if (*(char *)(param_1 + 0x29) != '\0') {
    return;
  }
  plVar15 = (long *)(param_1 + 0x10);
  plVar7 = plVar15;
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar7 = (long *)*plVar15;
  }
  lVar6 = FUN_100326d78(plVar7);
  if (lVar6 == 0) {
    return;
  }
  if ((*(char *)(lVar6 + 0xd8) != '\0') && (*(char *)(lVar6 + 0xd9) == '\0')) {
    iVar5 = FUN_100319e28(lVar6);
    if (iVar5 != 0) {
      uVar9 = FUN_10002f320();
      FUN_1000315c4(uVar9,plVar15,*(long *)(lVar6 + 8) + 0x30);
    }
    *(bool *)(param_1 + 0x29) = iVar5 != 0;
    uVar9 = FUN_10002f320();
    FUN_100030818(uVar9,&DAT_101d91198);
    uVar9 = FUN_10002f320();
    FUN_100030cf0(uVar9,&DAT_101d91198);
    uVar9 = FUN_10002f320();
    FUN_100030e80(uVar9,&DAT_101d91198);
    return;
  }
  local_58 = (long ******)0x0;
  local_50 = 0;
  plVar15 = (long *)(lVar6 + 0x60);
  local_48 = 0;
  FUN_1003195f0(plVar15,&local_58,1);
  sVar16 = local_50;
  ppppppplVar17 = (long *******)local_58;
  uVar10 = (ulong)local_48._7_1_;
  uVar11 = (uint)(char)local_48._7_1_;
  sVar2 = local_50;
  if (-1 < (int)uVar11) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    ppppppplVar8 = (long *******)local_58;
    if (-1 < (int)uVar11) {
      ppppppplVar8 = &local_58;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if (-1 < (int)uVar11) {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)local_58 & 0xff)) {
        pbVar13 = (byte *)((ulong)&local_58 | 1);
        uVar12 = uVar10;
        do {
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar12 == 0) goto LAB_100205740;
          bVar4 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar4 == *pbVar14);
        goto LAB_10020565c;
      }
      goto LAB_100205660;
    }
    if ((sVar2 == 0) || (iVar5 = _memcmp(ppppppplVar8,pbVar14,sVar2), iVar5 == 0))
    goto LAB_100205744;
  }
  else {
LAB_10020565c:
    if (-1 < (int)uVar11) {
LAB_100205660:
      ppppppplVar17 = &local_58;
      sVar16 = uVar10;
    }
  }
  if (7 < (long)sVar16) {
    ppppppplVar1 = (long *******)((long)ppppppplVar17 + sVar16);
    ppppppplVar8 = ppppppplVar17;
    while (ppppppplVar8 = _memchr(ppppppplVar8,0x76,sVar16 - 7), ppppppplVar8 != (long *******)0x0)
    {
      if (*ppppppplVar8 == (long ******)0x2f2f3a6f65646976) {
        if ((ppppppplVar8 != ppppppplVar1) && (ppppppplVar8 == ppppppplVar17)) {
          if (*(char *)(lVar6 + 0x77) < '\0') {
            plVar15 = (long *)*plVar15;
          }
          FUN_1003274d4("watch_video",plVar15);
          FUN_100326da8();
          goto LAB_100205720;
        }
        break;
      }
      ppppppplVar8 = (long *******)((long)ppppppplVar8 + 1);
      sVar16 = (long)ppppppplVar1 - (long)ppppppplVar8;
      if ((long)sVar16 < 8) break;
    }
  }
  uVar9 = FUN_100644a94("UI::EVENT_TILE_NAVIGATING_TO_LINK");
  FUN_100644aec(auStack_78,uVar9,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_78,1);
LAB_100205720:
  uVar9 = FUN_10002f320();
  FUN_1000312cc(uVar9,&local_58,&DAT_101d91198,0,0);
  uVar11 = (uint)local_48._7_1_;
LAB_100205740:
  if ((uVar11 >> 7 & 1) == 0) {
    return;
  }
LAB_100205744:
  operator_delete(local_58);
  return;
}




void thunk_FUN_100205540(void)

{
  FUN_100205540();
  return;
}




void thunk_FUN_100205540(void)

{
  FUN_100205540();
  return;
}




void FUN_1002057d4(long param_1,long *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((char)param_2[1] == '\0') || (lVar15 = *param_2, lVar15 == 0)) {
    uVar8 = FUN_10002f320();
    FUN_100031740(uVar8,param_1 + 0x10);
    return;
  }
  bVar5 = *(byte *)(lVar15 + 0x5f);
  uVar11 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar15 + 0x50);
  if (-1 < (char)bVar5) {
    sVar2 = uVar11;
  }
  bVar6 = *(byte *)(param_1 + 0x27);
  sVar3 = *(size_t *)(param_1 + 0x18);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    pbVar1 = (byte *)(param_1 + 0x10);
    pvVar13 = *(void **)(lVar15 + 0x48);
    puVar4 = pvVar13;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar15 + 0x48);
    }
    pbVar14 = *(byte **)pbVar1;
    if (-1 < (char)bVar6) {
      pbVar14 = pbVar1;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar14,sVar2), iVar7 != 0)) {
        return;
      }
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar14 != ((uint)pvVar13 & 0xff)) {
        return;
      }
      pbVar12 = (byte *)(lVar15 + 0x49);
      while( true ) {
        uVar11 = uVar11 - 1;
        pbVar14 = pbVar14 + 1;
        if (uVar11 == 0) break;
        bVar5 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (bVar5 != *pbVar14) {
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(lVar15 + 0xd9) == '\0') {
      uVar8 = FUN_10002f320();
      FUN_100031740(uVar8,pbVar1);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      uVar9 = FUN_1004e0150("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
      uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
      return;
    }
    local_40 = 0;
    uStack_38 = 0;
    iVar7 = FUN_1000e6ae0(lVar15,&local_40);
    uVar8 = FUN_10002f320();
    if (iVar7 == 0) {
      FUN_100031740(uVar8,pbVar1);
    }
    else {
      FUN_100031670(uVar8,pbVar1,&local_40);
    }
    FUN_1000ec1cc(&local_40,1);
  }
  return;
}




void thunk_FUN_1002054cc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  code *pcStack_28;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  lVar2 = FUN_100326d78(plVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_100319d14();
    if (lVar2 != 0) {
      FUN_1002cf874(*(undefined8 *)(param_1 + 8),lVar2);
      return;
    }
    FUN_100326da8();
    pcStack_28 = thunk_FUN_1002054cc;
    lStack_30 = param_1;
    FUN_100643a8c(&lStack_30);
  }
  return;
}




void FUN_100205984(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_1002059f4(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100205a78(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1002057d4(long param_1,long *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((char)param_2[1] == '\0') || (lVar15 = *param_2, lVar15 == 0)) {
    uVar8 = FUN_10002f320();
    FUN_100031740(uVar8,param_1 + 0x10);
    return;
  }
  bVar5 = *(byte *)(lVar15 + 0x5f);
  uVar11 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar15 + 0x50);
  if (-1 < (char)bVar5) {
    sVar2 = uVar11;
  }
  bVar6 = *(byte *)(param_1 + 0x27);
  sVar3 = *(size_t *)(param_1 + 0x18);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    pbVar1 = (byte *)(param_1 + 0x10);
    pvVar13 = *(void **)(lVar15 + 0x48);
    puVar4 = pvVar13;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar15 + 0x48);
    }
    pbVar14 = *(byte **)pbVar1;
    if (-1 < (char)bVar6) {
      pbVar14 = pbVar1;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar14,sVar2), iVar7 != 0)) {
        return;
      }
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar14 != ((uint)pvVar13 & 0xff)) {
        return;
      }
      pbVar12 = (byte *)(lVar15 + 0x49);
      while( true ) {
        uVar11 = uVar11 - 1;
        pbVar14 = pbVar14 + 1;
        if (uVar11 == 0) break;
        bVar5 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        if (bVar5 != *pbVar14) {
          return;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(char *)(lVar15 + 0xd9) == '\0') {
      uVar8 = FUN_10002f320();
      FUN_100031740(uVar8,pbVar1);
      uVar8 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      uVar9 = FUN_1004e0150("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
      uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1001e3090(uVar8,uVar9,uVar10,0,0);
      return;
    }
    uStack_40 = 0;
    uStack_38 = 0;
    iVar7 = FUN_1000e6ae0(lVar15,&uStack_40);
    uVar8 = FUN_10002f320();
    if (iVar7 == 0) {
      FUN_100031740(uVar8,pbVar1);
    }
    else {
      FUN_100031670(uVar8,pbVar1,&uStack_40);
    }
    FUN_1000ec1cc(&uStack_40,1);
  }
  return;
}




void FUN_100205a78(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_100205af4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146fd38;
  operator_new(0xdd8);
  lVar1 = thunk_FUN_1002cfc40();
  *(undefined8 **)(lVar1 + 0x1a0) = param_1;
  *param_1 = &PTR_thunk_FUN_100205b8c_10146fd18;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  uVar2 = FUN_10032697c();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_100205e98;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(uVar2,&local_40);
  lVar1 = FUN_100327578();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_100205e98;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x20,&local_40);
  return param_1;
}




undefined8 * thunk_FUN_100205af4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146fd38;
  operator_new(0xdd8);
  lVar1 = thunk_FUN_1002cfc40();
  *(undefined8 **)(lVar1 + 0x1a0) = param_1;
  *param_1 = &PTR_thunk_FUN_100205b8c_10146fd18;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  uVar2 = FUN_10032697c();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_100205e98;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(uVar2,&puStack_40);
  lVar1 = FUN_100327578();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_100205e98;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x20,&puStack_40);
  return param_1;
}




undefined8 * FUN_100205b8c(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_thunk_FUN_100205b8c_10146fd18;
  FUN_100205c98();
  puVar2 = (uint *)FUN_10032697c();
  if (*puVar2 != 0) {
    lVar3 = (ulong)*puVar2 << 5;
    puVar5 = *(undefined8 **)(puVar2 + 2);
    do {
      if ((undefined8 *)*puVar5 == param_1) {
        FUN_1000c044c(puVar2,puVar5,puVar5 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar5 = puVar5 + 4;
    } while (lVar3 != 0);
  }
  lVar3 = FUN_100327578();
  uVar1 = *(uint *)(lVar3 + 0x20);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 5;
    puVar5 = *(undefined8 **)(lVar3 + 0x28);
    do {
      if ((undefined8 *)*puVar5 == param_1) {
        FUN_1000c044c((uint *)(lVar3 + 0x20),puVar5,puVar5 + 4);
        break;
      }
      lVar4 = lVar4 + -0x20;
      puVar5 = puVar5 + 4;
    } while (lVar4 != 0);
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146fd38;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100205c98(long param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  FUN_1002d0348(*(undefined8 *)(param_1 + 8));
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x28) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        uVar2 = *(uint *)(param_1 + 0x10);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x38) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x30);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x48) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x40);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}




undefined8 * thunk_FUN_100205b8c(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_thunk_FUN_100205b8c_10146fd18;
  FUN_100205c98();
  puVar2 = (uint *)FUN_10032697c();
  if (*puVar2 != 0) {
    lVar3 = (ulong)*puVar2 << 5;
    puVar5 = *(undefined8 **)(puVar2 + 2);
    do {
      if ((undefined8 *)*puVar5 == param_1) {
        FUN_1000c044c(puVar2,puVar5,puVar5 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar5 = puVar5 + 4;
    } while (lVar3 != 0);
  }
  lVar3 = FUN_100327578();
  uVar1 = *(uint *)(lVar3 + 0x20);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 5;
    puVar5 = *(undefined8 **)(lVar3 + 0x28);
    do {
      if ((undefined8 *)*puVar5 == param_1) {
        FUN_1000c044c((uint *)(lVar3 + 0x20),puVar5,puVar5 + 4);
        break;
      }
      lVar4 = lVar4 + -0x20;
      puVar5 = puVar5 + 4;
    } while (lVar4 != 0);
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete__((void *)param_1[9]);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146fd38;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100205df0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100205b8c();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100205e04(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (uVar1 = FUN_1001ebc04(), (uVar1 & 1) == 0)) {
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar1 = 0;
      do {
        uVar3 = FUN_100205480(*(undefined8 *)(*(long *)(param_1 + 0x28) + uVar1 * 8));
        if ((uVar3 & 1) == 0) goto LAB_100205e24;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = 0;
      do {
        uVar2 = FUN_100205e04(*(undefined8 *)(*(long *)(param_1 + 0x38) + uVar1 * 8));
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x30));
    }
  }
  else {
LAB_100205e24:
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_100205e98(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100205e04();
  if (iVar1 != 0) {
    FUN_100205c98(param_1);
    FUN_100205ed4(param_1);
    return;
  }
  return;
}




void FUN_100205ed4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_100327578();
  iVar1 = FUN_10030a79c();
  if (iVar1 != 0) {
    operator_new(0x18);
    uVar3 = thunk_FUN_1001eb694();
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    FUN_1001eb7d0(uVar3,uVar2);
    FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
                  *(undefined8 *)(*(long *)(param_1 + 0x58) + 8));
  }
  FUN_100206124(param_1);
  FUN_100206078(param_1);
  FUN_1002064a8(param_1);
  FUN_10020634c(param_1);
  return;
}




void FUN_100205f4c(long param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_38;
  
  uVar3 = (ulong)*param_2;
  if (*param_2 != 0) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_2 + 2) + uVar7 * 8);
      if ((*(char *)(lVar5 + 0xd8) == '\0') || (*(char *)(lVar5 + 0xd9) == '\0')) {
        operator_new(0x30);
        local_38 = thunk_FUN_1002052c0();
        FUN_100205414(local_38,*(undefined8 *)(*(long *)(param_2 + 2) + uVar7 * 8));
        FUN_1001f7bd0(param_1 + 0x20,&local_38);
        FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)
                       (*(long *)(*(long *)(param_1 + 0x28) +
                                 (ulong)(*(int *)(param_1 + 0x20) - 1) * 8) + 8));
        uVar3 = (ulong)*param_2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  puVar2 = (uint *)FUN_10032697c();
  if (*puVar2 != 0) {
    lVar5 = (ulong)*puVar2 << 5;
    plVar6 = *(long **)(puVar2 + 2);
    do {
      if (*plVar6 == param_1) {
        FUN_1000c044c(puVar2,plVar6,plVar6 + 4);
        break;
      }
      lVar5 = lVar5 + -0x20;
      plVar6 = plVar6 + 4;
    } while (lVar5 != 0);
  }
  lVar5 = FUN_100327578();
  uVar1 = *(uint *)(lVar5 + 0x20);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 5;
    plVar6 = *(long **)(lVar5 + 0x28);
    do {
      if (*plVar6 == param_1) {
        FUN_1000c044c((uint *)(lVar5 + 0x20),plVar6,plVar6 + 4);
        return;
      }
      lVar4 = lVar4 + -0x20;
      plVar6 = plVar6 + 4;
    } while (lVar4 != 0);
  }
  return;
}




void FUN_100206078(long param_1)

{
  ulong uVar1;
  undefined8 local_48;
  uint local_40 [2];
  void *local_38;
  
  FUN_1003270c0(local_40);
  if (local_40[0] != 0) {
    uVar1 = 0;
    do {
      operator_new(0x30);
      local_48 = thunk_FUN_1002052c0();
      FUN_100205414(local_48,*(undefined8 *)((long)local_38 + uVar1 * 8));
      FUN_1001f7bd0(param_1 + 0x20,&local_48);
      FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)
                     (*(long *)(*(long *)(param_1 + 0x28) +
                               (ulong)(*(int *)(param_1 + 0x20) - 1) * 8) + 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_40[0]);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_100206124(long param_1)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long local_40;
  long local_38;
  uint local_30 [2];
  void *local_28;
  
  FUN_1003270b0(local_30,9);
  if (local_30[0] != 0) {
    bVar4 = false;
    uVar5 = 0;
    do {
      while ((lVar6 = *(long *)((long)local_28 + uVar5 * 8), *(char *)(lVar6 + 0xd8) != '\0' &&
             (*(char *)(lVar6 + 0xd9) != '\0'))) {
        uVar5 = uVar5 + 1;
        if (local_30[0] == uVar5) {
          if (!bVar4) goto LAB_100206238;
          goto LAB_10020619c;
        }
      }
      bVar4 = true;
      bVar1 = (ulong)local_30[0] - 1 != uVar5;
      uVar5 = uVar5 + 1;
    } while (bVar1);
LAB_10020619c:
    pvVar2 = operator_new(0x60);
    local_38 = FUN_100205af4();
    FUN_1002d00ec(*(undefined8 *)(local_38 + 8),1);
    FUN_1002cffb0(*(undefined8 *)((long)pvVar2 + 8),0);
    pvVar3 = operator_new(0x30);
    local_40 = thunk_FUN_100204fb0(pvVar3,9);
    FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)((long)pvVar2 + 8),
                  *(undefined8 *)(local_40 + 8));
    FUN_10020624c(param_1 + 0x40,&local_40);
    FUN_100205f4c(pvVar2,local_30);
    FUN_1002cfe84((undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,*(undefined8 *)(param_1 + 8),
                  *(undefined8 *)((long)pvVar2 + 8));
    FUN_1002062cc(param_1 + 0x30,&local_38);
  }
  if (local_28 == (void *)0x0) {
    return;
  }
LAB_100206238:
  operator_delete__(local_28);
  return;
}




void FUN_10020624c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100206588(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002062cc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100206604(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10020634c(long param_1)

{
  long lVar1;
  long local_28;
  
  operator_new(0x18);
  local_28 = FUN_100204e30();
  FUN_100204f00(local_28,1);
  lVar1 = param_1 + 0x10;
  FUN_100206428(lVar1,&local_28);
  FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_28 + 8));
  operator_new(0x18);
  local_28 = FUN_100204e30();
  FUN_100204f00(local_28,3);
  FUN_100206428(lVar1,&local_28);
  FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_28 + 8));
  operator_new(0x18);
  local_28 = FUN_100204e30();
  FUN_100204f00(local_28,7);
  FUN_100206428(lVar1,&local_28);
  FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_28 + 8));
  return;
}




void FUN_100206428(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100206680(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1002064a8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    return;
  }
  operator_new(0x28);
  uVar1 = thunk_FUN_1001f1ab4();
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_100341944();
  FUN_1002cfe84(0x41c80000,0x41c80000,*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(*(long *)(param_1 + 0x50) + 8));
  return;
}




undefined8 * FUN_100206500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fd38;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100206544(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fd38;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void thunk_FUN_100205e98(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_100205e04();
  if (iVar1 != 0) {
    FUN_100205c98(param_1);
    FUN_100205ed4(param_1);
    return;
  }
  return;
}




void FUN_100206588(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100206604(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100206680(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_1002066fc(undefined8 *param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  void *local_68 [2];
  char local_51;
  ulong local_50;
  long local_48;
  
  *param_1 = &PTR_FUN_10146fda8;
  operator_new(200);
  lVar11 = FUN_1002d035c();
  puVar17 = param_1 + 2;
  *puVar17 = &PTR_FUN_10146fd80;
  *(undefined8 **)(lVar11 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_10020698c_10146fd58;
  param_1[1] = lVar11;
  param_1[3] = 0;
  local_50 = 0;
  local_48 = 0;
  iVar10 = FUN_100136d8c(&local_50);
  if (iVar10 == 0) goto LAB_100206960;
  if ((int)local_50 != 0) {
    lVar18 = local_48 + (local_50 & 0xffffffff) * 0x78;
    lVar11 = local_48;
    do {
      pbVar12 = (byte *)FUN_1001d8860();
      bVar7 = *(byte *)(lVar11 + 0x2f);
      sVar2 = *(size_t *)(lVar11 + 0x20);
      if (-1 < (char)bVar7) {
        sVar2 = (ulong)bVar7;
      }
      bVar8 = pbVar12[0x17];
      sVar3 = *(size_t *)(pbVar12 + 8);
      if (-1 < (char)bVar8) {
        sVar3 = (ulong)bVar8;
      }
      if (sVar2 == sVar3) {
        pvVar16 = *(void **)(lVar11 + 0x18);
        puVar4 = pvVar16;
        if (-1 < (char)bVar7) {
          puVar4 = (undefined8 *)(lVar11 + 0x18);
        }
        pbVar5 = *(byte **)pbVar12;
        if (-1 < (char)bVar8) {
          pbVar5 = pbVar12;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar2 == 0) || (iVar10 = _memcmp(puVar4,pbVar5,sVar2), iVar10 == 0))
          goto LAB_10020682c;
        }
        else {
          if (sVar2 == 0) {
LAB_10020682c:
            if (*(uint *)(lVar11 + 8) != 0) {
              lVar18 = *(long *)(lVar11 + 0x10);
              lVar11 = (ulong)*(uint *)(lVar11 + 8) * 0x598;
              goto LAB_100206840;
            }
            break;
          }
          if ((uint)*pbVar5 == ((uint)pvVar16 & 0xff)) {
            lVar15 = 0;
            do {
              if ((ulong)bVar7 - 1 == lVar15) goto LAB_10020682c;
              lVar1 = lVar11 + lVar15;
              lVar9 = lVar15 + 1;
              lVar15 = lVar15 + 1;
            } while (*(byte *)(lVar1 + 0x19) == pbVar5[lVar9]);
          }
        }
      }
      lVar11 = lVar11 + 0x78;
    } while (lVar11 != lVar18);
  }
  goto LAB_1002068bc;
  while( true ) {
    lVar18 = lVar18 + 0x598;
    lVar11 = lVar11 + -0x598;
    if (lVar11 == 0) break;
LAB_100206840:
    if (*(char *)(lVar18 + 0x591) != '\0') {
      plVar19 = operator_new(0x168);
      uVar14 = thunk_FUN_100200b50();
      param_1[3] = uVar14;
      FUN_100136a64(local_68);
      lVar11 = FUN_1004f1a74(0);
      (**(code **)(*plVar19 + 0x30))(plVar19,local_68,lVar18,0,lVar11 + 1);
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
      FUN_1002d03c0(param_1[1],*(undefined8 *)(param_1[3] + 8));
      break;
    }
  }
LAB_1002068bc:
  if (param_1[3] != 0) {
    lVar11 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
    lVar18 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
    FUN_100136b6c(lVar11 + 0x618,puVar17,lVar18 + 0x178);
    puVar13 = (uint *)(**(code **)(*(long *)(param_1[3] + 0x10) + 0x28))();
    if ((puVar13 != (uint *)0x0) && (*puVar13 != 0)) {
      plVar19 = *(long **)(puVar13 + 2);
      lVar11 = (ulong)*puVar13 << 3;
      do {
        lVar18 = *plVar19;
        if (lVar18 != 0) {
          lVar15 = FUN_1001a678c(lVar18);
          uVar6 = *(ulong *)(lVar15 + 8);
          if (-1 < (char)*(byte *)(lVar15 + 0x17)) {
            uVar6 = (ulong)*(byte *)(lVar15 + 0x17);
          }
          if (uVar6 != 0) {
            uVar14 = FUN_1001a678c(lVar18);
            FUN_100136b6c(uVar14,puVar17,lVar18);
          }
        }
        plVar19 = plVar19 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
  }
LAB_100206960:
  FUN_100135c64(&local_50,1);
  return param_1;
}




undefined8 * thunk_FUN_1002066fc(undefined8 *param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  void *apvStack_68 [2];
  char cStack_51;
  ulong uStack_50;
  long lStack_48;
  
  *param_1 = &PTR_FUN_10146fda8;
  operator_new(200);
  lVar11 = FUN_1002d035c();
  puVar17 = param_1 + 2;
  *puVar17 = &PTR_FUN_10146fd80;
  *(undefined8 **)(lVar11 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_10020698c_10146fd58;
  param_1[1] = lVar11;
  param_1[3] = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  iVar10 = FUN_100136d8c(&uStack_50);
  if (iVar10 == 0) goto LAB_100206960;
  if ((int)uStack_50 != 0) {
    lVar18 = lStack_48 + (uStack_50 & 0xffffffff) * 0x78;
    lVar11 = lStack_48;
    do {
      pbVar12 = (byte *)FUN_1001d8860();
      bVar7 = *(byte *)(lVar11 + 0x2f);
      sVar2 = *(size_t *)(lVar11 + 0x20);
      if (-1 < (char)bVar7) {
        sVar2 = (ulong)bVar7;
      }
      bVar8 = pbVar12[0x17];
      sVar3 = *(size_t *)(pbVar12 + 8);
      if (-1 < (char)bVar8) {
        sVar3 = (ulong)bVar8;
      }
      if (sVar2 == sVar3) {
        pvVar16 = *(void **)(lVar11 + 0x18);
        puVar4 = pvVar16;
        if (-1 < (char)bVar7) {
          puVar4 = (undefined8 *)(lVar11 + 0x18);
        }
        pbVar5 = *(byte **)pbVar12;
        if (-1 < (char)bVar8) {
          pbVar5 = pbVar12;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar2 == 0) || (iVar10 = _memcmp(puVar4,pbVar5,sVar2), iVar10 == 0))
          goto LAB_10020682c;
        }
        else {
          if (sVar2 == 0) {
LAB_10020682c:
            if (*(uint *)(lVar11 + 8) != 0) {
              lVar18 = *(long *)(lVar11 + 0x10);
              lVar11 = (ulong)*(uint *)(lVar11 + 8) * 0x598;
              goto LAB_100206840;
            }
            break;
          }
          if ((uint)*pbVar5 == ((uint)pvVar16 & 0xff)) {
            lVar15 = 0;
            do {
              if ((ulong)bVar7 - 1 == lVar15) goto LAB_10020682c;
              lVar1 = lVar11 + lVar15;
              lVar9 = lVar15 + 1;
              lVar15 = lVar15 + 1;
            } while (*(byte *)(lVar1 + 0x19) == pbVar5[lVar9]);
          }
        }
      }
      lVar11 = lVar11 + 0x78;
    } while (lVar11 != lVar18);
  }
  goto LAB_1002068bc;
  while( true ) {
    lVar18 = lVar18 + 0x598;
    lVar11 = lVar11 + -0x598;
    if (lVar11 == 0) break;
LAB_100206840:
    if (*(char *)(lVar18 + 0x591) != '\0') {
      plVar19 = operator_new(0x168);
      uVar14 = thunk_FUN_100200b50();
      param_1[3] = uVar14;
      FUN_100136a64(apvStack_68);
      lVar11 = FUN_1004f1a74(0);
      (**(code **)(*plVar19 + 0x30))(plVar19,apvStack_68,lVar18,0,lVar11 + 1);
      if (cStack_51 < '\0') {
        operator_delete(apvStack_68[0]);
      }
      FUN_1002d03c0(param_1[1],*(undefined8 *)(param_1[3] + 8));
      break;
    }
  }
LAB_1002068bc:
  if (param_1[3] != 0) {
    lVar11 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
    lVar18 = (**(code **)(*(long *)(param_1[3] + 0x10) + 0x10))();
    FUN_100136b6c(lVar11 + 0x618,puVar17,lVar18 + 0x178);
    puVar13 = (uint *)(**(code **)(*(long *)(param_1[3] + 0x10) + 0x28))();
    if ((puVar13 != (uint *)0x0) && (*puVar13 != 0)) {
      plVar19 = *(long **)(puVar13 + 2);
      lVar11 = (ulong)*puVar13 << 3;
      do {
        lVar18 = *plVar19;
        if (lVar18 != 0) {
          lVar15 = FUN_1001a678c(lVar18);
          uVar6 = *(ulong *)(lVar15 + 8);
          if (-1 < (char)*(byte *)(lVar15 + 0x17)) {
            uVar6 = (ulong)*(byte *)(lVar15 + 0x17);
          }
          if (uVar6 != 0) {
            uVar14 = FUN_1001a678c(lVar18);
            FUN_100136b6c(uVar14,puVar17,lVar18);
          }
        }
        plVar19 = plVar19 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
  }
LAB_100206960:
  FUN_100135c64(&uStack_50,1);
  return param_1;
}




undefined8 * FUN_10020698c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10020698c_10146fd58;
  param_1[2] = &PTR_FUN_10146fd80;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x28))();
  }
  param_1[2] = &PTR_FUN_10146b508;
  param_1[3] = 0;
  FUN_100136bd8(param_1 + 2);
  *param_1 = &PTR_FUN_10146fda8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_10020698c(void)

{
  FUN_10020698c();
  return;
}




void FUN_100206a14(long param_1)

{
  FUN_10020698c(param_1 + -0x10);
  return;
}




void FUN_100206a1c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020698c();
  operator_delete(pvVar1);
  return;
}




void FUN_100206a30(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020698c(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100206a48(long param_1)

{
  undefined8 in_x4;
  
  FUN_1001a621c(in_x4);
                    /* WARNING: Could not recover jumptable at 0x000100206a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 8) + 0x90))();
  return;
}




void FUN_100206a80(long param_1)

{
  undefined8 in_x4;
  
  FUN_1001a621c(in_x4);
                    /* WARNING: Could not recover jumptable at 0x000100206ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 8) + 8) + 0x90))();
  return;
}




undefined8 * FUN_100206ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fda8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100206afc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fda8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100206b3c(long param_1,string *param_2,string *param_3)

{
  undefined8 *puVar1;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  void *pvStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  pvStack_48 = (void *)0x0;
  local_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  std::string::operator=((string *)&local_60,param_2);
  std::string::operator=((string *)&pvStack_48,param_3);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],&local_60);
      }
      else {
        (*(code *)*puVar1)(&local_60);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20));
  }
  if (lStack_38 < 0) {
    operator_delete(pvStack_48);
  }
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  return;
}




void FUN_100206bf4(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x20);
  }
  return;
}




undefined8 * FUN_100206c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fdc8;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10146fdf8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100206cbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146fdc8;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10146fdf8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100206d28(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR____cxa_pure_virtual_101470240;
  operator_new(0xe8b8);
  lVar1 = thunk_FUN_1002d1bb8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_1004f0a20(param_1 + 2);
  FUN_10014f4a0(param_1 + 5);
  *param_1 = &PTR_FUN_10146fe28;
  param_1[2] = &PTR_FUN_10146fe78;
  param_1[5] = &PTR_FUN_10146fea8;
  uVar3 = param_1[1];
  uVar2 = FUN_10016aa7c();
  FUN_1002d3584(uVar3,uVar2);
  uVar2 = param_1[1];
  lVar1 = FUN_10015d3ec();
  FUN_1002d3590(uVar2,*(char *)(lVar1 + 0x5680) == '\0');
  return param_1;
}




undefined8 * thunk_FUN_100206d28(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR____cxa_pure_virtual_101470240;
  operator_new(0xe8b8);
  lVar1 = thunk_FUN_1002d1bb8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_1004f0a20(param_1 + 2);
  FUN_10014f4a0(param_1 + 5);
  *param_1 = &PTR_FUN_10146fe28;
  param_1[2] = &PTR_FUN_10146fe78;
  param_1[5] = &PTR_FUN_10146fea8;
  uVar3 = param_1[1];
  uVar2 = FUN_10016aa7c();
  FUN_1002d3584(uVar3,uVar2);
  uVar2 = param_1[1];
  lVar1 = FUN_10015d3ec();
  FUN_1002d3590(uVar2,*(char *)(lVar1 + 0x5680) == '\0');
  return param_1;
}




void FUN_100206dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_1001650fc(uVar1,param_2,param_3,param_4);
  FUN_1001027ac(0);
  return;
}




void FUN_100206e10(void)

{
  FUN_1001db0bc("https://www.vainglorygame.com/privacy-collection-policy/",0);
  return;
}




void FUN_100206e20(void)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  void *local_28;
  ulong local_20;
  byte local_11;
  
  FUN_10052b2d4(&local_28);
  uVar4 = (ulong)local_11;
  uVar1 = local_20;
  if (-1 < (char)local_11) {
    uVar1 = uVar4;
  }
  if (uVar1 == 7) {
    iVar2 = std::string::compare((ulong)&local_28,0,(char *)0xffffffffffffffff,0x1013e4c7f);
    if (iVar2 != 0) {
      uVar4 = (ulong)local_11;
      goto LAB_100206e7c;
    }
  }
  else {
LAB_100206e7c:
    if (-1 < (char)local_11) {
      local_20 = uVar4;
    }
    if ((local_20 != 7) ||
       (iVar2 = std::string::compare((ulong)&local_28,0,(char *)0xffffffffffffffff,0x1013dfa31),
       iVar2 != 0)) {
      iVar2 = FUN_100126d70();
      if (iVar2 == 6) {
        pcVar3 = "http://jp.vainglorygame.com/?terms-of-use";
      }
      else if (iVar2 == 8) {
        pcVar3 = "http://kr.vainglorygame.com/?terms-of-use";
      }
      else {
        pcVar3 = "http://www.vainglorygame.com/?terms-of-use";
      }
      goto LAB_100206ef0;
    }
  }
  pcVar3 = "http://vg.163.com/terms-of-services";
LAB_100206ef0:
  FUN_1001db0bc(pcVar3,0);
  if ((char)local_11 < '\0') {
    operator_delete(local_28);
  }
  return;
}




void FUN_100206f14(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_1004e0124();
  iVar1 = _strcmp(pcVar2,"localization_ja.strings");
  if (iVar1 == 0) {
    pcVar2 = "http://jp.vainglorygame.com/?privacy-policy";
  }
  else {
    pcVar2 = (char *)FUN_1004e0124();
    iVar1 = _strcmp(pcVar2,"localization_ko.strings");
    pcVar2 = "http://kr.vainglorygame.com/?privacy-policy";
    if (iVar1 != 0) {
      pcVar2 = "http://www.vainglorygame.com/?privacy-policy";
    }
  }
  FUN_1001db0bc(pcVar2,0);
  return;
}




void FUN_100206f70(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar1 = FUN_10014e20c(), (uVar1 & 1) == 0)) {
    uVar2 = FUN_100644a94("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  }
  FUN_1002d3494(*(undefined8 *)(param_1 + 8),0);
  return;
}




void FUN_100206fdc(long param_1)

{
  FUN_100206f70(param_1 + -0x10);
  return;
}




void FUN_100206fe4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1004f1680(param_2);
  if (iVar1 == 0) {
LAB_100207038:
    pcVar3 = "MAIN_PROFILE_REG_STATUS_FAILURE";
  }
  else {
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 < -0x1b) {
      if (iVar1 == -0x1d) {
        pcVar3 = "MAIN_PROFILE_REG_STATUS_FAILURE_ACCOUNT_EXISTS";
      }
      else {
        if (iVar1 != -0x1c) goto LAB_100207038;
        pcVar3 = "MAIN_PROFILE_REG_STATUS_FAILURE_INVALID_PASSWORD";
      }
    }
    else {
      if (iVar1 != -0x1b) {
        if (iVar1 == 0) goto LAB_100207058;
        goto LAB_100207038;
      }
      pcVar3 = "MAIN_PROFILE_REG_STATUS_FAILURE_INVALID_USERNAME";
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_1004e0150(pcVar3,0);
  FUN_1002d3788(uVar4,uVar2);
LAB_100207058:
  FUN_1002d3494(*(undefined8 *)(param_1 + 8),0);
  return;
}




void FUN_100207084(long param_1)

{
  FUN_100206fe4(param_1 + -0x28);
  return;
}




undefined8 * FUN_10020708c(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 5);
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_101470240;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1002070e0(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 5);
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_101470240;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100207130(long param_1)

{
  FUN_10014f51c(param_1 + 0x18);
  FUN_1004f0a9c(param_1);
  *(undefined ***)(param_1 + -0x10) = &PTR____cxa_pure_virtual_101470240;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_100207180(long param_1)

{
  FUN_10014f51c(param_1 + 0x18);
  FUN_1004f0a9c(param_1);
  *(undefined8 *)(param_1 + -0x10) = &PTR____cxa_pure_virtual_101470240;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_1002071d0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10014f51c();
  FUN_1004f0a9c(lVar1 + -0x18);
  *(undefined ***)(param_1 + -0x28) = &PTR____cxa_pure_virtual_101470240;
  if (*(long **)(param_1 + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -0x20) + 8))();
  }
  *(undefined8 *)(param_1 + -0x20) = 0;
  return;
}




void FUN_10020721c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10014f51c();
  FUN_1004f0a9c(lVar1 + -0x18);
  *(undefined8 *)(param_1 + -0x28) = &PTR____cxa_pure_virtual_101470240;
  if (*(long **)(param_1 + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -0x20) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x28));
  return;
}




undefined8 * FUN_100207268(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_1 = &PTR_FUN_1014702a0;
  operator_new(0x5df0);
  lVar3 = thunk_FUN_1002d46dc();
  *(undefined8 **)(lVar3 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101470280;
  param_1[1] = lVar3;
  lVar3 = FUN_1001340a4();
  iVar1 = *(int *)(lVar3 + 0x10);
  uVar4 = FUN_10032a0bc();
  iVar2 = iVar1 + -1;
  lVar3 = FUN_10032a3d4(uVar4,iVar2);
  uVar4 = FUN_100327e00();
  lVar5 = FUN_100327f2c(uVar4,0);
  uVar4 = FUN_100327e00();
  lVar6 = FUN_100327f2c(uVar4,1);
  if (lVar3 == 0) {
    uVar7 = 0xffffffff;
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(undefined4 *)(lVar3 + 100);
    uVar7 = *(undefined4 *)(lVar3 + 0x68);
  }
  FUN_1002d4b58(param_1[1],iVar2,iVar1,uVar7,uVar8,*(undefined4 *)(lVar5 + 4),
                *(undefined4 *)(lVar6 + 4));
  return param_1;
}




undefined8 * thunk_FUN_100207268(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_1 = &PTR_FUN_1014702a0;
  operator_new(0x5df0);
  lVar3 = thunk_FUN_1002d46dc();
  *(undefined8 **)(lVar3 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101470280;
  param_1[1] = lVar3;
  lVar3 = FUN_1001340a4();
  iVar1 = *(int *)(lVar3 + 0x10);
  uVar4 = FUN_10032a0bc();
  iVar2 = iVar1 + -1;
  lVar3 = FUN_10032a3d4(uVar4,iVar2);
  uVar4 = FUN_100327e00();
  lVar5 = FUN_100327f2c(uVar4,0);
  uVar4 = FUN_100327e00();
  lVar6 = FUN_100327f2c(uVar4,1);
  if (lVar3 == 0) {
    uVar7 = 0xffffffff;
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(undefined4 *)(lVar3 + 100);
    uVar7 = *(undefined4 *)(lVar3 + 0x68);
  }
  FUN_1002d4b58(param_1[1],iVar2,iVar1,uVar7,uVar8,*(undefined4 *)(lVar5 + 4),
                *(undefined4 *)(lVar6 + 4));
  return param_1;
}




undefined8 * FUN_10020732c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014702a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100207370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014702a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1002073b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014702a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1002073f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014702a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100207434(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_FUN_1014706d8;
  operator_new(0x2b0);
  lVar1 = thunk_FUN_1002d5ac4();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  puVar2 = param_1 + 2;
  *puVar2 = &PTR____cxa_pure_virtual_1014706b8;
  FUN_10014f4a0(param_1 + 3);
  *param_1 = &PTR_thunk_FUN_100207574_1014702c0;
  *puVar2 = &PTR_FUN_101470300;
  param_1[3] = &PTR_FUN_101470320;
  param_1[6] = param_2;
  puVar3 = param_1 + 7;
  *puVar3 = &PTR_FUN_101462c58;
  operator_new(0x668);
  lVar1 = FUN_1002bdcb4();
  param_1[8] = lVar1;
  *(undefined8 **)(lVar1 + 0x640) = puVar3;
  FUN_1001fc944(param_1 + 9);
  *puVar3 = &PTR_FUN_101462bf0;
  param_1[9] = &PTR_FUN_101462c20;
  *(undefined2 *)(param_1 + 10) = 0;
  FUN_1002d5e58(param_1[1],param_1[8]);
  FUN_1002d5f04(param_1[1],param_2);
  FUN_1002d602c(param_1[1],puVar2);
  lVar1 = FUN_10032834c();
  if (lVar1 != 0) {
    lVar1 = FUN_10032834c();
    local_50 = 0;
    pcStack_38 = thunk_FUN_1002077f0;
    puStack_48 = param_1;
    local_40 = param_1;
    FUN_100207ae8(lVar1 + 0x38,&local_50);
    lVar1 = FUN_10032834c();
    local_50 = 0;
    pcStack_38 = thunk_FUN_100207880;
    puStack_48 = param_1;
    local_40 = param_1;
    FUN_100207ae8(lVar1 + 0x28,&local_50);
  }
  return param_1;
}




undefined8 * thunk_FUN_100207434(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR_FUN_1014706d8;
  operator_new(0x2b0);
  lVar1 = thunk_FUN_1002d5ac4();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  puVar2 = param_1 + 2;
  *puVar2 = &PTR____cxa_pure_virtual_1014706b8;
  FUN_10014f4a0(param_1 + 3);
  *param_1 = &PTR_thunk_FUN_100207574_1014702c0;
  *puVar2 = &PTR_FUN_101470300;
  param_1[3] = &PTR_FUN_101470320;
  param_1[6] = param_2;
  puVar3 = param_1 + 7;
  *puVar3 = &PTR_FUN_101462c58;
  operator_new(0x668);
  lVar1 = FUN_1002bdcb4();
  param_1[8] = lVar1;
  *(undefined8 **)(lVar1 + 0x640) = puVar3;
  FUN_1001fc944(param_1 + 9);
  *puVar3 = &PTR_FUN_101462bf0;
  param_1[9] = &PTR_FUN_101462c20;
  *(undefined2 *)(param_1 + 10) = 0;
  FUN_1002d5e58(param_1[1],param_1[8]);
  FUN_1002d5f04(param_1[1],param_2);
  FUN_1002d602c(param_1[1],puVar2);
  lVar1 = FUN_10032834c();
  if (lVar1 != 0) {
    lVar1 = FUN_10032834c();
    uStack_50 = 0;
    pcStack_38 = thunk_FUN_1002077f0;
    puStack_48 = param_1;
    puStack_40 = param_1;
    FUN_100207ae8(lVar1 + 0x38,&uStack_50);
    lVar1 = FUN_10032834c();
    uStack_50 = 0;
    pcStack_38 = thunk_FUN_100207880;
    puStack_48 = param_1;
    puStack_40 = param_1;
    FUN_100207ae8(lVar1 + 0x28,&uStack_50);
  }
  return param_1;
}




undefined8 * FUN_100207574(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_100207574_1014702c0;
  param_1[2] = &PTR_FUN_101470300;
  param_1[3] = &PTR_FUN_101470320;
  lVar2 = FUN_10032834c();
  if (*(uint *)(lVar2 + 0x28) != 0) {
    lVar3 = *(long *)(lVar2 + 0x30);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100207bec();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_10032834c();
  if (*(uint *)(lVar2 + 0x38) != 0) {
    lVar3 = *(long *)(lVar2 + 0x40);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100207bec();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  param_1[6] = 0;
  FUN_1001fc954(param_1 + 9);
  param_1[7] = &PTR_FUN_101462c58;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  param_1[8] = 0;
  FUN_10014f51c(param_1 + 3);
  *param_1 = &PTR_FUN_1014706d8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_100207574(void)

{
  FUN_100207574();
  return;
}




void FUN_100207684(long param_1)

{
  FUN_100207574(param_1 + -0x18);
  return;
}




void FUN_10020768c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100207574();
  operator_delete(pvVar1);
  return;
}




void FUN_1002076a0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100207574(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_1002076b8(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar1 = FUN_10032834c();
  FUN_10001549c(local_38,**(undefined8 **)(param_1 + 0x30));
  FUN_100328d0c(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100207718(long param_1)

{
  FUN_1002076b8(param_1 + -0x10);
  return;
}




void FUN_100207720(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10032834c();
  FUN_10001549c(local_38,**(undefined8 **)(param_1 + 0x30));
  FUN_100328d40(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  return;
}




void FUN_100207780(long param_1)

{
  FUN_100207720(param_1 + -0x10);
  return;
}




void FUN_100207788(long param_1)

{
  FUN_1002d5e68(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_100207790(long param_1)

{
  FUN_1002d5e68(*(undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_100207798(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_10015d3ec();
  FUN_1002d5e9c(uVar2,*(undefined4 *)(lVar1 + 0x5458));
  return;
}




void FUN_1002077c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -0x10);
  lVar1 = FUN_10015d3ec();
  FUN_1002d5e9c(uVar2,*(undefined4 *)(lVar1 + 0x5458));
  return;
}




void FUN_1002077f0(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 **local_38 [2];
  char local_21;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_100328d7c(param_2);
    FUN_1002d5e9c(uVar3,uVar2);
    FUN_10001549c(local_38,**(undefined8 **)(param_1 + 0x30));
    pppuVar1 = (undefined8 ***)local_38[0];
    if (-1 < local_21) {
      pppuVar1 = local_38;
    }
    FUN_10010a004(pppuVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    FUN_1002d6034(*(undefined8 *)(param_1 + 8));
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100207880(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_220 [2];
  char local_209;
  void *local_208 [2];
  char local_1f1;
  undefined1 auStack_1e8 [440];
  
  iVar2 = FUN_100328764(param_2,*(undefined8 *)(param_1 + 0x30));
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x51) != '\0')) {
    thunk_FUN_100253c74(auStack_1e8);
    FUN_10001549c(local_208,**(undefined8 **)(param_1 + 0x30));
    FUN_1000ead08(auStack_1e8,local_208);
    if (local_1f1 < '\0') {
      operator_delete(local_208[0]);
    }
    FUN_100644aec(local_208,DAT_101d2365c,auStack_1e8);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),local_208,1);
    FUN_1002d6034(*(undefined8 *)(param_1 + 8));
    FUN_10001549c(local_220,**(undefined8 **)(param_1 + 0x30));
    ppuVar1 = (undefined1 **)local_220[0];
    if (-1 < local_209) {
      ppuVar1 = local_220;
    }
    FUN_1001041ac(ppuVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    if (local_209 < '\0') {
      operator_delete(local_220[0]);
    }
    FUN_10016c310(auStack_1e8);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_100328d7c(param_2);
  FUN_1002d5e9c(uVar4,uVar3);
  *(undefined1 *)(param_1 + 0x51) = 0;
  return;
}




void FUN_100207994(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if (*(undefined8 **)(param_2 + 0x30) != (undefined8 *)0x0) {
    FUN_10001549c(param_1,**(undefined8 **)(param_2 + 0x30));
    return;
  }
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
      FUN_100207a58();
      return;
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100207a3c;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
  param_1 = puVar1;
LAB_100207a3c:
  *(undefined1 *)((long)param_1 + uVar2) = 0;
  return;
}




void FUN_100207a54(void)

{
  return;
}




void FUN_100207a58(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_100207a64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014706d8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100207aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014706d8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_100207ae8(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100207b6c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1002077f0(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_100328d7c(param_2);
    FUN_1002d5e9c(uVar3,uVar2);
    FUN_10001549c(appuStack_38,**(undefined8 **)(param_1 + 0x30));
    pppuVar1 = (undefined8 ***)appuStack_38[0];
    if (-1 < cStack_21) {
      pppuVar1 = appuStack_38;
    }
    FUN_10010a004(pppuVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    FUN_1002d6034(*(undefined8 *)(param_1 + 8));
    if (cStack_21 < '\0') {
      operator_delete(appuStack_38[0]);
    }
  }
  return;
}




void FUN_100207b6c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void thunk_FUN_100207880(long param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *apuStack_220 [2];
  char cStack_209;
  void *apvStack_208 [2];
  char cStack_1f1;
  undefined1 auStack_1e8 [440];
  
  iVar2 = FUN_100328764(param_2,*(undefined8 *)(param_1 + 0x30));
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x51) != '\0')) {
    thunk_FUN_100253c74(auStack_1e8);
    FUN_10001549c(apvStack_208,**(undefined8 **)(param_1 + 0x30));
    FUN_1000ead08(auStack_1e8,apvStack_208);
    if (cStack_1f1 < '\0') {
      operator_delete(apvStack_208[0]);
    }
    FUN_100644aec(apvStack_208,DAT_101d2365c,auStack_1e8);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),apvStack_208,1);
    FUN_1002d6034(*(undefined8 *)(param_1 + 8));
    FUN_10001549c(apuStack_220,**(undefined8 **)(param_1 + 0x30));
    ppuVar1 = (undefined1 **)apuStack_220[0];
    if (-1 < cStack_209) {
      ppuVar1 = apuStack_220;
    }
    FUN_1001041ac(ppuVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    if (cStack_209 < '\0') {
      operator_delete(apuStack_220[0]);
    }
    FUN_10016c310(auStack_1e8);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_100328d7c(param_2);
  FUN_1002d5e9c(uVar4,uVar3);
  *(undefined1 *)(param_1 + 0x51) = 0;
  return;
}




void FUN_100207bec(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




undefined8 * FUN_100207c5c(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_101470b68;
  operator_new(0xc48);
  lVar1 = thunk_FUN_1002d6780();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  param_1[5] = &PTR_FUN_101470b30;
  FUN_1004f0a20(param_1 + 6);
  *param_1 = &PTR_thunk_FUN_100207dd4_1014706f8;
  param_1[2] = &PTR_FUN_101470730;
  param_1[5] = &PTR_FUN_101470ac8;
  param_1[6] = &PTR_FUN_101470b00;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_100207d14(param_1);
  FUN_10032834c();
  FUN_1003286bc();
  lVar1 = FUN_10032834c();
  local_40 = 0;
  pcStack_28 = thunk_FUN_100208000;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_100207ae8(lVar1 + 0x18,&local_40);
  return param_1;
}




void FUN_100207d14(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong local_38;
  undefined8 *local_30;
  code *local_28;
  
  puVar2 = (undefined8 *)FUN_10034bdb4();
  local_38 = 0;
  local_30 = (undefined8 *)0x0;
  plVar5 = (long *)*puVar2;
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    do {
      if (*(char *)(lVar3 + 8) != '\0') {
        FUN_100207f1c(&local_38,plVar5);
      }
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
    } while (lVar3 != 0);
    uVar4 = local_38 & 0xffffffff;
  }
  local_28 = FUN_10034bef0;
  FUN_1002081c8(local_30,local_30 + uVar4,&local_28);
  puVar2 = local_30;
  if ((int)local_38 != 0) {
    do {
      puVar6 = puVar2 + 1;
      FUN_1002d6b74(*(undefined8 *)(param_1 + 8),*puVar2);
      puVar2 = puVar6;
    } while (puVar6 != local_30 + (local_38 & 0xffffffff));
  }
  uVar1 = FUN_100207f9c();
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  if (local_30 != (undefined8 *)0x0) {
    operator_delete__(local_30);
  }
  return;
}




undefined8 * thunk_FUN_100207c5c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_101470b68;
  operator_new(0xc48);
  lVar1 = thunk_FUN_1002d6780();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  param_1[5] = &PTR_FUN_101470b30;
  FUN_1004f0a20(param_1 + 6);
  *param_1 = &PTR_thunk_FUN_100207dd4_1014706f8;
  param_1[2] = &PTR_FUN_101470730;
  param_1[5] = &PTR_FUN_101470ac8;
  param_1[6] = &PTR_FUN_101470b00;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_100207d14(param_1);
  FUN_10032834c();
  FUN_1003286bc();
  lVar1 = FUN_10032834c();
  uStack_40 = 0;
  pcStack_28 = thunk_FUN_100208000;
  puStack_38 = param_1;
  puStack_30 = param_1;
  FUN_100207ae8(lVar1 + 0x18,&uStack_40);
  return param_1;
}




undefined8 * FUN_100207dd4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_100207dd4_1014706f8;
  param_1[2] = &PTR_FUN_101470730;
  param_1[5] = &PTR_FUN_101470ac8;
  param_1[6] = &PTR_FUN_101470b00;
  lVar2 = FUN_10032834c();
  if (*(uint *)(lVar2 + 0x18) != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100207bec();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  FUN_1004f0a9c(param_1 + 6);
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_101470b68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_100207dd4(void)

{
  FUN_100207dd4();
  return;
}




void FUN_100207e98(long param_1)

{
  FUN_100207dd4(param_1 + -0x10);
  return;
}




void FUN_100207ea0(long param_1)

{
  FUN_100207dd4(param_1 + -0x28);
  return;
}




void FUN_100207ea8(long param_1)

{
  FUN_100207dd4(param_1 + -0x30);
  return;
}




void FUN_100207eb0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100207dd4();
  operator_delete(pvVar1);
  return;
}




void FUN_100207ec4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100207dd4(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100207edc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100207dd4(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_100207ef4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100207dd4(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100207f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_100207f14(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_100207f1c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10020814c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_100207f9c(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  
  puVar2 = (undefined8 *)FUN_10032bb84();
  plVar5 = (long *)*puVar2;
  if (*plVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = FUN_100331584();
      if ((iVar1 != 0) && (*(int *)(*plVar5 + 0x20) != 0)) {
        uVar3 = FUN_10032834c();
        iVar1 = FUN_100328708(uVar3,*plVar5);
        iVar4 = iVar4 + iVar1;
      }
      plVar5 = plVar5 + 1;
    } while (*plVar5 != 0);
  }
  return iVar4;
}




void FUN_100208000(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = FUN_100207f9c();
  if (iVar1 == iVar2) {
    return;
  }
  FUN_1002d6af4(*(undefined8 *)(param_1 + 8));
  FUN_100207d14(param_1);
  return;
}




void FUN_100208044(long param_1)

{
  FUN_1002d6af4(*(undefined8 *)(param_1 + 8));
  FUN_1002d6910(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_10020806c(long param_1)

{
  FUN_1002d6af4(*(undefined8 *)(param_1 + -0x28));
  FUN_1002d6910(*(undefined8 *)(param_1 + -0x28));
  return;
}




void FUN_100208094(void)

{
  FUN_1004e0150("INVENTORY_BLUEPRINT_TAB_TITLE",0);
  return;
}




void FUN_1002080a4(void)

{
  FUN_1004e0150("INVENTORY_BLUEPRINT_TAB_TITLE",0);
  return;
}




void FUN_1002080b4(void)

{
  return;
}




undefined8 * FUN_1002080b8(void)

{
  return &DAT_101d91650;
}




undefined8 * FUN_1002080c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101470b68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100208108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101470b68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void thunk_FUN_100208000(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = FUN_100207f9c();
  if (iVar1 == iVar2) {
    return;
  }
  FUN_1002d6af4(*(undefined8 *)(param_1 + 8));
  FUN_100207d14(param_1);
  return;
}




void FUN_10020814c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002081c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_1002081f4:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_1002081fc:
  param_1 = puVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_10020849c_caseD_0;
  case 2:
    iVar3 = (*(code *)*param_3)(*puVar8,*param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = *puVar8;
    *puVar8 = uVar6;
    return;
  case 3:
    FUN_10020859c(param_1,param_1 + 1,puVar8,param_3);
    return;
  case 4:
    FUN_100208688(param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
    return;
  case 5:
    FUN_100208754(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      FUN_100208858(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar5;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 + 1;
    }
    puVar9 = (undefined8 *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      iVar3 = FUN_10020859c(param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar1 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      lVar7 = (uVar1 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_100208754(param_1,(long)param_1 + lVar7,puVar9,(long)puVar9 + lVar7,puVar8,param_3
                           );
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    if ((uVar5 & 1) == 0) break;
    goto LAB_1002082cc;
  }
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
    if (iVar4 != 0) goto code_r0x0001002082b8;
  }
  puVar10 = param_1 + 1;
  uVar5 = (*(code *)*param_3)(*param_1,*puVar8);
  puVar9 = puVar10;
  if ((uVar5 & 1) == 0) {
    while( true ) {
      if (puVar9 == puVar8) {
        return;
      }
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
      if (iVar3 != 0) break;
      puVar9 = puVar9 + 1;
    }
    uVar6 = *puVar9;
    puVar10 = puVar9 + 1;
    *puVar9 = *puVar8;
    *puVar8 = uVar6;
  }
  puVar12 = puVar8;
  if (puVar10 == puVar8) {
    return;
  }
  while( true ) {
    puVar9 = puVar10 + -1;
    do {
      puVar10 = puVar9;
      puVar9 = puVar10 + 1;
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
    } while (iVar3 == 0);
    puVar10 = puVar10 + 2;
    do {
      puVar12 = puVar12 + -1;
      uVar5 = (*(code *)*param_3)(*param_1,*puVar12);
    } while ((uVar5 & 1) != 0);
    if (puVar12 <= puVar9) break;
    uVar6 = *puVar9;
    *puVar9 = *puVar12;
    *puVar12 = uVar6;
  }
  goto LAB_1002081fc;
code_r0x0001002082b8:
  uVar6 = *param_1;
  *param_1 = *puVar10;
  *puVar10 = uVar6;
  iVar3 = iVar3 + 1;
LAB_1002082cc:
  puVar12 = param_1 + 1;
  puVar2 = puVar9;
  puVar11 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar9 = puVar2;
      puVar12 = puVar11 + -1;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar5 = (*(code *)*param_3)(*puVar12,*puVar9);
      } while ((uVar5 & 1) != 0);
      puVar11 = puVar11 + 2;
      do {
        puVar10 = puVar10 + -1;
        iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
      } while (iVar4 == 0);
      if (puVar10 < puVar12) break;
      uVar6 = *puVar12;
      *puVar12 = *puVar10;
      *puVar10 = uVar6;
      iVar3 = iVar3 + 1;
      puVar2 = puVar10;
      if (puVar12 != puVar9) {
        puVar2 = puVar9;
      }
    }
  }
  if ((puVar12 != puVar9) && (iVar4 = (*(code *)*param_3)(*puVar9,*puVar12), iVar4 != 0)) {
    uVar6 = *puVar12;
    *puVar12 = *puVar9;
    *puVar9 = uVar6;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_100208928(param_1,puVar12,param_3);
    iVar3 = FUN_100208928(puVar12 + 1,param_2,param_3);
    if (iVar3 != 0) goto LAB_10020847c;
    puVar9 = puVar12 + 1;
    if ((uVar5 & 1) != 0) goto LAB_1002081fc;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_1002081c8(puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_1002081f4;
  }
  FUN_1002081c8(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_1002081fc;
LAB_10020847c:
  param_2 = puVar12;
  if ((uVar5 & 1) != 0) {
switchD_10020849c_caseD_0:
    return;
  }
  goto LAB_1002081f4;
}




undefined8
FUN_10020859c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)*param_4)(*param_2,*param_1);
  uVar3 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    iVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar4 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      iVar1 = (*(code *)*param_4)(*param_3);
      if (iVar1 != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar4;
    }
  }
  return 1;
}




ulong FUN_100208688(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_10020859c();
  iVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if (iVar1 != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    iVar1 = (*(code *)*param_5)(*param_3,*param_2);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      iVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
        uVar2 = (ulong)(iVar4 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_100208754(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_100208688();
  iVar1 = (*(code *)*param_6)(*param_5,*param_4);
  if (iVar1 != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar1 = (*(code *)*param_6)(*param_4,*param_3);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      iVar1 = (*(code *)*param_6)(*param_3,*param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        iVar1 = (*(code *)*param_6)(*param_2,*param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar4 + 3);
        }
        else {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
          uVar2 = (ulong)(iVar4 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_100208858(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  FUN_10020859c(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    puVar5 = param_1 + 3;
    puVar6 = param_1 + 2;
    do {
      puVar4 = puVar5;
      iVar2 = (*(code *)*param_3)(*puVar4,*puVar6);
      if (iVar2 != 0) {
        uVar7 = *puVar4;
        lVar1 = lVar8;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_1002088fc;
          uVar3 = (*(code *)*param_3)(uVar7,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_1002088fc:
        *puVar5 = uVar7;
      }
      lVar8 = lVar8 + 8;
      puVar5 = puVar4 + 1;
      puVar6 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}




bool FUN_100208928(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if (iVar2 != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
    }
    break;
  case 3:
    FUN_10020859c(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_100208688(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_100208754(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_10020859c(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar2 = 0;
      puVar6 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar5 = puVar6;
        iVar3 = (*(code *)*param_3)(*puVar5,*puVar7);
        if (iVar3 != 0) {
          uVar8 = *puVar5;
          lVar1 = lVar9;
          do {
            lVar10 = lVar1;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            puVar6 = param_1;
            if (lVar10 == -0x10) goto LAB_100208a28;
            uVar4 = (*(code *)*param_3)(uVar8,*(undefined8 *)((long)param_1 + lVar10 + 8));
            lVar1 = lVar10 + -8;
          } while ((uVar4 & 1) != 0);
          puVar6 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_100208a28:
          *puVar6 = uVar8;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        puVar6 = puVar5 + 1;
        puVar7 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}




undefined8 * FUN_100208ac8(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_101470bd8;
  operator_new(0x5e8);
  lVar1 = thunk_FUN_1002d8130();
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  *param_1 = &PTR_thunk_FUN_100208b4c_101470b88;
  param_1[1] = lVar1;
  param_1[2] = &PTR_FUN_101470bb8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x2f) = 0;
  lVar1 = FUN_10032834c();
  local_40 = 0;
  pcStack_28 = thunk_FUN_100208ec8;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_100207ae8(lVar1 + 0x18,&local_40);
  return param_1;
}




undefined8 * thunk_FUN_100208ac8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_101470bd8;
  operator_new(0x5e8);
  lVar1 = thunk_FUN_1002d8130();
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  *param_1 = &PTR_thunk_FUN_100208b4c_101470b88;
  param_1[1] = lVar1;
  param_1[2] = &PTR_FUN_101470bb8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x2f) = 0;
  lVar1 = FUN_10032834c();
  uStack_40 = 0;
  pcStack_28 = thunk_FUN_100208ec8;
  puStack_38 = param_1;
  puStack_30 = param_1;
  FUN_100207ae8(lVar1 + 0x18,&uStack_40);
  return param_1;
}




undefined8 * FUN_100208b4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_100208b4c_101470b88;
  param_1[2] = &PTR_FUN_101470bb8;
  FUN_100208c38();
  lVar2 = FUN_10032834c();
  if (lVar2 != 0) {
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x18) != 0) {
      lVar4 = *(long *)(lVar2 + 0x20);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x32) != '\0') {
    puVar3 = (uint *)FUN_10032c190();
    if (*puVar3 != 0) {
      lVar2 = *(long *)(puVar3 + 2);
      lVar4 = (ulong)*puVar3 << 5;
      do {
        puVar1 = (undefined8 *)(lVar2 + 8);
        lVar2 = lVar2 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100209074();
          break;
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_101470bd8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100208c38(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x18);
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x10))();
        uVar2 = *(uint *)(param_1 + 0x18);
        plVar1 = *(long **)(param_1 + 0x20);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}




undefined8 * thunk_FUN_100208b4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_100208b4c_101470b88;
  param_1[2] = &PTR_FUN_101470bb8;
  FUN_100208c38();
  lVar2 = FUN_10032834c();
  if (lVar2 != 0) {
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x18) != 0) {
      lVar4 = *(long *)(lVar2 + 0x20);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  if (*(char *)((long)param_1 + 0x32) != '\0') {
    puVar3 = (uint *)FUN_10032c190();
    if (*puVar3 != 0) {
      lVar2 = *(long *)(puVar3 + 2);
      lVar4 = (ulong)*puVar3 << 5;
      do {
        puVar1 = (undefined8 *)(lVar2 + 8);
        lVar2 = lVar2 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100209074();
          break;
        }
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_101470bd8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100208c9c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100208b4c();
  operator_delete(pvVar1);
  return;
}




void FUN_100208cb0(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  code *pcStack_28;
  
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(char *)(param_1 + 0x30) = (char)param_4;
  FUN_1002d8258(*(undefined8 *)(param_1 + 8),param_2,param_3 ^ param_4 ^ 1);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_10032c190();
    FUN_100208d44(param_1);
    return;
  }
  iVar1 = FUN_10032c19c();
  if (iVar1 != 0) {
    FUN_10032c190();
    FUN_100208d44(param_1);
  }
  uVar2 = FUN_10032c190();
  local_40 = 0;
  pcStack_28 = thunk_FUN_100208d44;
  lStack_38 = param_1;
  local_30 = param_1;
  FUN_1002090e4(uVar2,&local_40);
  *(undefined1 *)(param_1 + 0x32) = 1;
  return;
}




void FUN_100208d44(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    plVar2 = (long *)FUN_10032bb84();
    plVar2 = (long *)*plVar2;
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      iVar1 = FUN_100131560();
      if ((((iVar1 == 0) || (*(char *)(*plVar2 + 0x34) == '\0')) &&
          (iVar1 = _strcmp(*(char **)(*plVar2 + 0x10),(char *)**(undefined8 **)(param_1 + 0x28)),
          iVar1 == 0)) &&
         ((iVar1 = FUN_100331584(*plVar2), iVar1 != 0 &&
          ((*(char *)(param_1 + 0x30) == '\0' || (*(int *)(*plVar2 + 0x20) != 0)))))) {
        FUN_100208e68(param_1);
      }
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
    FUN_100208ec8(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100208df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x138))();
    return;
  }
  return;
}




uint FUN_100208df8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_10034bf64(**(undefined8 **)(param_1 + 0x28));
  iVar2 = FUN_1004d2524(*(undefined8 *)(lVar3 + 0x20));
  if (iVar2 != 0) {
    uVar1 = (int)**(char **)(lVar3 + 0x20) - 0x61;
    if (uVar1 < 0x1a) {
      return uVar1;
    }
    uVar1 = (int)**(char **)(lVar3 + 0x20) - 0x41;
    if (uVar1 < 0x1a) {
      return uVar1;
    }
  }
  return 0xffffffff;
}




void FUN_100208e50(long param_1)

{
  FUN_100208df8(param_1 + -0x10);
  return;
}




undefined8 FUN_100208e58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_100208e60(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_100208e68(long param_1,undefined8 param_2)

{
  long local_28;
  
  operator_new(0x20);
  local_28 = FUN_1002097bc();
  FUN_10020980c(local_28,param_2,*(undefined1 *)(param_1 + 0x30));
  FUN_100208f6c(param_1 + 0x18,&local_28);
  FUN_1002d85b0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_28 + 8));
  return;
}




void FUN_100208ec8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar2 = FUN_100131560();
  if ((((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x31) != '\0')) &&
     (lVar3 = FUN_10032834c(), lVar3 != 0)) {
    FUN_10032834c();
    iVar1 = FUN_1003286b4();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      plVar7 = *(long **)(param_1 + 0x20);
      do {
        plVar8 = plVar7 + 1;
        lVar3 = *plVar7;
        uVar6 = *(undefined8 *)(lVar3 + 0x10);
        uVar4 = FUN_10032834c();
        uVar4 = FUN_100328708(uVar4,uVar6);
        uVar5 = FUN_10032834c();
        uVar5 = FUN_100328764(uVar5,uVar6);
        FUN_10020982c(lVar3,uVar5,uVar4);
        plVar7 = plVar8;
      } while (plVar8 != (long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 8))
      ;
    }
  }
  return;
}




void FUN_100208f6c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1002091e4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 * FUN_100208fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101470bd8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100209030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101470bd8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void thunk_FUN_100208ec8(void)

{
  FUN_100208ec8();
  return;
}




void FUN_100209074(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_1002090e4(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100209168(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_100208d44(void)

{
  FUN_100208d44();
  return;
}




void FUN_100209168(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1002091e4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_100209260(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101470c28;
  operator_new(0xe8);
  lVar1 = FUN_1002d94b8();
  *(undefined8 **)(lVar1 + 200) = param_1;
  *param_1 = &PTR_FUN_101470bf8;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return param_1;
}




undefined8 * FUN_1002092b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101470bf8;
  FUN_100209314();
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_101470c28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100209314(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x10);
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 8))();
        uVar2 = *(uint *)(param_1 + 0x10);
        plVar1 = *(long **)(param_1 + 0x18);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_1002d9678(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}




undefined8 * thunk_FUN_1002092b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101470bf8;
  FUN_100209314();
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_101470c28;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100209384(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002092b0();
  operator_delete(pvVar1);
  return;
}




void FUN_100209398(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong local_48;
  undefined8 *local_40;
  code *local_38;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    *(char *)(param_1 + 0x20) = (char)param_2;
    puVar1 = (undefined8 *)FUN_10034bdb4();
    local_48 = 0;
    local_40 = (undefined8 *)0x0;
    plVar4 = (long *)*puVar1;
    lVar2 = *plVar4;
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      do {
        if (*(char *)(lVar2 + 8) != '\0') {
          FUN_100207f1c(&local_48,plVar4);
        }
        plVar4 = plVar4 + 1;
        lVar2 = *plVar4;
      } while (lVar2 != 0);
      uVar3 = local_48 & 0xffffffff;
    }
    local_38 = FUN_10034bef0;
    FUN_1002081c8(local_40,local_40 + uVar3,&local_38);
    puVar1 = local_40;
    if ((int)local_48 != 0) {
      do {
        puVar5 = puVar1 + 1;
        FUN_100209478(param_1,*puVar1);
        puVar1 = puVar5;
      } while (puVar5 != local_40 + (local_48 & 0xffffffff));
    }
    FUN_1002d94ec(*(undefined8 *)(param_1 + 8),param_2);
    *(undefined1 *)(param_1 + 0x21) = 1;
    if (local_40 != (undefined8 *)0x0) {
      operator_delete__(local_40);
    }
  }
  return;
}




void FUN_100209478(long param_1,undefined8 param_2)

{
  long local_28;
  
  operator_new(0x38);
  local_28 = thunk_FUN_100208ac8();
  FUN_100208cb0(local_28,param_2,*(uint *)(param_1 + 0x10) & 1,*(undefined1 *)(param_1 + 0x20));
  FUN_100209668((uint *)(param_1 + 0x10),&local_28);
  FUN_1002d95b0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_28 + 8));
  return;
}




undefined8 FUN_1002094e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [8];
  void *local_28;
  
  FUN_1002096e8(local_30,param_1 + 0x10);
  uVar1 = FUN_100209534(local_30,param_2);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return uVar1;
}




undefined8 FUN_100209534(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  
  uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 2) + 0x18))();
  if (*param_1 == 0) {
LAB_1002095f8:
    uVar2 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 2);
    plVar3 = (long *)0x0;
    if (*plVar5 != 0) {
      plVar3 = (long *)(*plVar5 + 0x10);
    }
    uVar1 = (**(code **)*plVar3)(plVar3);
    if (uVar1 < param_2) {
      do {
        uVar4 = uVar1;
        plVar5 = plVar5 + 1;
        uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
        if (plVar5 == (long *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 8)) goto LAB_1002095f8;
        plVar3 = (long *)0x0;
        if (*plVar5 != 0) {
          plVar3 = (long *)(*plVar5 + 0x10);
        }
        uVar1 = (**(code **)*plVar3)(plVar3);
      } while (uVar1 < param_2);
    }
    else {
      uVar4 = 0;
    }
    if (uVar1 - param_2 < param_2 - uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100209630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      return uVar2;
    }
  }
  return uVar2;
}




void FUN_10020964c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_100209398(param_1,0);
    return;
  }
  return;
}




void FUN_10020965c(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_100209314();
  return;
}




void FUN_100209668(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100209740(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




uint * FUN_1002096e8(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100209740(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -8;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_100209740(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_1002097bc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101470c80;
  operator_new(0xe20);
  lVar1 = thunk_FUN_1002d8918();
  *(undefined8 **)(lVar1 + 0x268) = param_1;
  *param_1 = &PTR_FUN_101470c58;
  param_1[1] = lVar1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}




void FUN_10020980c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_3;
  FUN_1002d8c38(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_10020981c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100223b3c();
    return;
  }
  return;
}




void FUN_10020982c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1002d92e8(*(undefined8 *)(param_1 + 8));
  FUN_1002d9330(*(undefined8 *)(param_1 + 8),param_3);
  return;
}




undefined8 * FUN_10020985c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101470c80;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1002098a0(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101470c80;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1002098e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_1014710b8;
  operator_new(0x2d68);
  lVar1 = thunk_FUN_1002d97a0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &DAT_101470ca8;
  param_1[2] = &PTR_FUN_101470ce8;
  param_1[5] = &PTR_FUN_101471080;
  param_1[6] = 0;
  operator_new(0x28);
  lVar1 = FUN_100209260();
  param_1[6] = lVar1;
  FUN_1002d9e38(param_1[1],*(undefined8 *)(lVar1 + 8));
  lVar1 = FUN_10032834c();
  if (lVar1 != 0) {
    lVar1 = FUN_10032834c();
    local_40 = 0;
    pcStack_28 = thunk_FUN_100209b58;
    puStack_38 = param_1;
    local_30 = param_1;
    FUN_100207ae8(lVar1 + 0x28,&local_40);
    lVar1 = FUN_10032834c();
    local_40 = 0;
    pcStack_28 = thunk_FUN_1002099d0;
    puStack_38 = param_1;
    local_30 = param_1;
    FUN_100207ae8(lVar1 + 0x18,&local_40);
  }
  FUN_100209398(param_1[6],0);
  FUN_1002d9df4(param_1[1]);
  FUN_1002099d0(param_1);
  return param_1;
}




void FUN_1002099d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_10015d3ec();
  uVar1 = FUN_1001666cc(uVar1,1);
  FUN_10032c190();
  uVar2 = FUN_10032da44();
  FUN_1002d9d70(uVar3,uVar1,uVar2,0);
  return;
}




undefined8 * thunk_FUN_1002098e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_1014710b8;
  operator_new(0x2d68);
  lVar1 = thunk_FUN_1002d97a0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &DAT_101470ca8;
  param_1[2] = &PTR_FUN_101470ce8;
  param_1[5] = &PTR_FUN_101471080;
  param_1[6] = 0;
  operator_new(0x28);
  lVar1 = FUN_100209260();
  param_1[6] = lVar1;
  FUN_1002d9e38(param_1[1],*(undefined8 *)(lVar1 + 8));
  lVar1 = FUN_10032834c();
  if (lVar1 != 0) {
    lVar1 = FUN_10032834c();
    uStack_40 = 0;
    pcStack_28 = thunk_FUN_100209b58;
    puStack_38 = param_1;
    puStack_30 = param_1;
    FUN_100207ae8(lVar1 + 0x28,&uStack_40);
    lVar1 = FUN_10032834c();
    uStack_40 = 0;
    pcStack_28 = thunk_FUN_1002099d0;
    puStack_38 = param_1;
    puStack_30 = param_1;
    FUN_100207ae8(lVar1 + 0x18,&uStack_40);
  }
  FUN_100209398(param_1[6],0);
  FUN_1002d9df4(param_1[1]);
  FUN_1002099d0(param_1);
  return param_1;
}




undefined8 * FUN_100209a18(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &DAT_101470ca8;
  param_1[2] = &PTR_FUN_101470ce8;
  param_1[5] = &PTR_FUN_101471080;
  FUN_100209314(param_1[6]);
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x18))();
    param_1[6] = 0;
  }
  lVar2 = FUN_10032834c();
  if (lVar2 != 0) {
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x28) != 0) {
      lVar3 = *(long *)(lVar2 + 0x30);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_1014710b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_100209a18(void)

{
  FUN_100209a18();
  return;
}




void FUN_100209ae8(long param_1)

{
  FUN_100209a18(param_1 + -0x10);
  return;
}




void FUN_100209af0(long param_1)

{
  FUN_100209a18(param_1 + -0x28);
  return;
}




void FUN_100209af8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100209a18();
  operator_delete(pvVar1);
  return;
}




void FUN_100209b0c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100209a18(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100209b24(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100209a18(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002099d0(void)

{
  FUN_1002099d0();
  return;
}




void FUN_100209b40(long param_1)

{
  FUN_1002099d0(param_1 + -0x10);
  return;
}




undefined8 FUN_100209b48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_100209b50(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




undefined8 FUN_100209b58(void)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 extraout_x0;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 **local_48;
  ulong local_40;
  undefined8 uStack_38;
  
  FUN_1002099d0();
  lVar1 = FUN_10032834c();
  if ((char)*(byte *)(lVar1 + 0x227) < '\0') {
    uVar4 = *(ulong *)(lVar1 + 0x218);
    if (0xffffffffffffffef < uVar4) {
      lVar1 = FUN_100209c60();
      return *(undefined8 *)(lVar1 + 0x30);
    }
    pvVar5 = *(void **)(lVar1 + 0x210);
  }
  else {
    pvVar5 = (void *)(lVar1 + 0x210);
    uVar4 = (ulong)*(byte *)(lVar1 + 0x227);
  }
  if (uVar4 < 0x17) {
    pppuVar2 = &local_48;
    uStack_38 = CONCAT17((char)uVar4,(undefined7)uStack_38);
    if (uVar4 == 0) goto LAB_100209be0;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pppuVar2 = operator_new(uVar6);
    uStack_38 = uVar6 | 0x8000000000000000;
    local_48 = pppuVar2;
    local_40 = uVar4;
  }
  _memcpy(pppuVar2,pvVar5,uVar4);
LAB_100209be0:
  *(undefined1 *)((long)pppuVar2 + uVar4) = 0;
  lVar1 = FUN_10032c624(&local_48);
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (long)uStack_38) {
    pppuVar2 = &local_48;
  }
  uVar3 = FUN_1001041ac(pppuVar2,*(undefined4 *)(lVar1 + 0xa0),1);
  if ((long)uStack_38 < 0) {
    operator_delete(local_48);
    uVar3 = extraout_x0;
  }
  return uVar3;
}




undefined8 FUN_100209c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}




void FUN_100209c40(void)

{
  FUN_1004e0150("MENU_HERO_TAB_NAME_SKINS",0);
  return;
}




void FUN_100209c50(void)

{
  FUN_1004e0150("MENU_HERO_TAB_NAME_SKINS",0);
  return;
}




void FUN_100209c60(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 thunk_FUN_100209b58(void)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 extraout_x0;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  FUN_1002099d0();
  lVar1 = FUN_10032834c();
  if ((char)*(byte *)(lVar1 + 0x227) < '\0') {
    uVar4 = *(ulong *)(lVar1 + 0x218);
    if (0xffffffffffffffef < uVar4) {
      lVar1 = FUN_100209c60();
      return *(undefined8 *)(lVar1 + 0x30);
    }
    pvVar5 = *(void **)(lVar1 + 0x210);
  }
  else {
    pvVar5 = (void *)(lVar1 + 0x210);
    uVar4 = (ulong)*(byte *)(lVar1 + 0x227);
  }
  if (uVar4 < 0x17) {
    pppuVar2 = &ppuStack_48;
    uStack_38 = CONCAT17((char)uVar4,(undefined7)uStack_38);
    if (uVar4 == 0) goto LAB_100209be0;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pppuVar2 = operator_new(uVar6);
    uStack_38 = uVar6 | 0x8000000000000000;
    ppuStack_48 = pppuVar2;
    uStack_40 = uVar4;
  }
  _memcpy(pppuVar2,pvVar5,uVar4);
LAB_100209be0:
  *(undefined1 *)((long)pppuVar2 + uVar4) = 0;
  lVar1 = FUN_10032c624(&ppuStack_48);
  pppuVar2 = (undefined8 ***)ppuStack_48;
  if (-1 < (long)uStack_38) {
    pppuVar2 = &ppuStack_48;
  }
  uVar3 = FUN_1001041ac(pppuVar2,*(undefined4 *)(lVar1 + 0xa0),1);
  if ((long)uStack_38 < 0) {
    operator_delete(ppuStack_48);
    uVar3 = extraout_x0;
  }
  return uVar3;
}




void thunk_FUN_1002099d0(void)

{
  FUN_1002099d0();
  return;
}




undefined8 * FUN_100209c74(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_1014714f8;
  operator_new(0x8050);
  lVar1 = thunk_FUN_1002da328();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_1001e7fe0(param_1 + 2);
  *param_1 = &PTR_FUN_1014710e0;
  param_1[2] = &PTR_FUN_101471130;
  param_1[8] = &PTR_FUN_1014714d8;
  param_1[9] = 0;
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_10020a080,0);
    lVar1 = FUN_10032834c();
    if (lVar1 != 0) {
      lVar1 = FUN_10032834c();
      local_40 = 0;
      pcStack_28 = FUN_10020a560;
      puStack_38 = param_1;
      local_30 = param_1;
      FUN_100207ae8(lVar1 + 0x18,&local_40);
      lVar1 = FUN_10032834c();
      local_40 = 0;
      pcStack_28 = thunk_FUN_10020a3d8;
      puStack_38 = param_1;
      local_30 = param_1;
      FUN_100207ae8(lVar1 + 0x28,&local_40);
      lVar1 = FUN_10032834c();
      local_40 = 0;
      pcStack_28 = FUN_10020a598;
      puStack_38 = param_1;
      local_30 = param_1;
      FUN_100207ae8(lVar1 + 0x38,&local_40);
    }
  }
  return param_1;
}




void thunk_FUN_10020a080(void)

{
  FUN_10020a080();
  return;
}




undefined8 * thunk_FUN_100209c74(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_1014714f8;
  operator_new(0x8050);
  lVar1 = thunk_FUN_1002da328();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  FUN_1001e7fe0(param_1 + 2);
  *param_1 = &PTR_FUN_1014710e0;
  param_1[2] = &PTR_FUN_101471130;
  param_1[8] = &PTR_FUN_1014714d8;
  param_1[9] = 0;
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_10020a080,0);
    lVar1 = FUN_10032834c();
    if (lVar1 != 0) {
      lVar1 = FUN_10032834c();
      uStack_40 = 0;
      pcStack_28 = FUN_10020a560;
      puStack_38 = param_1;
      puStack_30 = param_1;
      FUN_100207ae8(lVar1 + 0x18,&uStack_40);
      lVar1 = FUN_10032834c();
      uStack_40 = 0;
      pcStack_28 = thunk_FUN_10020a3d8;
      puStack_38 = param_1;
      puStack_30 = param_1;
      FUN_100207ae8(lVar1 + 0x28,&uStack_40);
      lVar1 = FUN_10032834c();
      uStack_40 = 0;
      pcStack_28 = FUN_10020a598;
      puStack_38 = param_1;
      puStack_30 = param_1;
      FUN_100207ae8(lVar1 + 0x38,&uStack_40);
    }
  }
  return param_1;
}




undefined8 * FUN_100209d7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_1014710e0;
  param_1[2] = &PTR_FUN_101471130;
  param_1[8] = &PTR_FUN_1014714d8;
  FUN_1004e1b58(&DAT_101d234d8,param_1);
  lVar2 = FUN_10032834c();
  if (lVar2 != 0) {
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x18) != 0) {
      lVar3 = *(long *)(lVar2 + 0x20);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x28) != 0) {
      lVar3 = *(long *)(lVar2 + 0x30);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x38) != 0) {
      lVar3 = *(long *)(lVar2 + 0x40);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  param_1[2] = &PTR_FUN_10146a010;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_1014714f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_100209d7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_1014710e0;
  param_1[2] = &PTR_FUN_101471130;
  param_1[8] = &PTR_FUN_1014714d8;
  FUN_1004e1b58(&DAT_101d234d8,param_1);
  lVar2 = FUN_10032834c();
  if (lVar2 != 0) {
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x18) != 0) {
      lVar3 = *(long *)(lVar2 + 0x20);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x28) != 0) {
      lVar3 = *(long *)(lVar2 + 0x30);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    lVar2 = FUN_10032834c();
    if (*(uint *)(lVar2 + 0x38) != 0) {
      lVar3 = *(long *)(lVar2 + 0x40);
      lVar2 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
      do {
        puVar1 = (undefined8 *)(lVar3 + 8);
        lVar3 = lVar3 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_100207bec();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
  }
  param_1[2] = &PTR_FUN_10146a010;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_1014714f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_100209ecc(long param_1)

{
  FUN_100209d7c(param_1 + -0x10);
  return;
}




void FUN_100209ed4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100209d7c();
  operator_delete(pvVar1);
  return;
}




void FUN_100209ee8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100209d7c(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_100209f00(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char acStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  *(long *)(param_1 + 0x48) = param_2;
  FUN_1002daf38(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)FUN_10032bff8();
    FUN_1004d2698(acStack_b8,"card_skin_%s");
    plVar3 = (long *)*plVar3;
    lVar4 = *plVar3;
    while (lVar4 != 0) {
      plVar3 = plVar3 + 1;
      iVar1 = _strcmp(*(char **)(lVar4 + 8),acStack_b8);
      if (iVar1 == 0) {
        FUN_1002dba90(*(undefined8 *)(param_1 + 8),lVar4,*(undefined4 *)(param_2 + 0x20));
        break;
      }
      lVar4 = *plVar3;
    }
    FUN_1002dbf6c(*(undefined8 *)(param_1 + 8),param_1 + 0x40);
    FUN_10032834c();
    FUN_1003286bc();
    FUN_100209ff0(param_1);
    FUN_10020a080(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100209ff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_10032834c();
  uVar2 = FUN_100328708(uVar1,*(undefined8 *)(param_1 + 0x48));
  uVar3 = FUN_100328764(uVar1,*(undefined8 *)(param_1 + 0x48));
  uVar4 = FUN_100328d7c(uVar1);
  uVar5 = FUN_100328d84(uVar1,*(undefined8 *)(param_1 + 0x48));
  uVar1 = FUN_100328e40(uVar1,*(undefined8 *)(param_1 + 0x48));
  FUN_1002dbb5c(*(undefined8 *)(param_1 + 8),uVar3,uVar2,uVar4,uVar5,uVar1);
  return;
}




void FUN_10020a080(long param_1)

{
  size_t sVar1;
  undefined8 ******ppppppuVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined8 *****local_78;
  size_t local_70;
  byte local_61;
  int local_60;
  int local_5c;
  int local_58;
  
  uVar5 = FUN_100131560();
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar6 = FUN_10032c190();
  if (*(char *)(lVar6 + 0x38) == '\0') {
    return;
  }
  FUN_10001549c(&local_78,**(undefined8 **)(param_1 + 0x48));
  lVar6 = FUN_10032c624(&local_78);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  if (lVar6 == 0) {
    return;
  }
  iVar4 = FUN_10032c944(lVar6);
  if (iVar4 != 0) {
    FUN_1002db524(*(undefined8 *)(param_1 + 8));
    goto LAB_10020a21c;
  }
  FUN_10032c3d4(&local_78,lVar6);
  uVar5 = (ulong)local_61;
  if (-1 < (char)local_61) {
    local_70 = uVar5;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_70 == sVar1) {
    ppppppuVar2 = (undefined8 ******)local_78;
    if (-1 < (char)local_61) {
      ppppppuVar2 = &local_78;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)local_61 < '\0') {
      if ((local_70 != 0) && (iVar4 = _memcmp(ppppppuVar2,pbVar9,local_70), iVar4 != 0))
      goto LAB_10020a1a4;
    }
    else if (local_70 != 0) {
      if ((uint)*pbVar9 == ((uint)local_78 & 0xff)) {
        pbVar8 = (byte *)((ulong)&local_78 | 1);
        do {
          uVar5 = uVar5 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar5 == 0) goto LAB_10020a1b8;
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 == *pbVar9);
      }
      goto LAB_10020a1a4;
    }
LAB_10020a1b8:
    FUN_1002db4bc(*(undefined8 *)(param_1 + 8),0);
  }
  else {
LAB_10020a1a4:
    if (local_60 == 0) {
      if (local_58 != 0) {
        lVar6 = FUN_10015d3ec();
        lVar7 = 0x545c;
        goto LAB_10020a1ec;
      }
      if (local_5c != 0) {
        lVar6 = FUN_10015d3ec();
        lVar7 = 0x5454;
        goto LAB_10020a1ec;
      }
      uVar10 = 0;
    }
    else {
      lVar6 = FUN_10015d3ec();
      lVar7 = 0x5450;
LAB_10020a1ec:
      uVar10 = *(undefined4 *)(lVar6 + lVar7);
    }
    FUN_1002db4bc(*(undefined8 *)(param_1 + 8),1);
    FUN_1002db580(*(undefined8 *)(param_1 + 8),&local_78,uVar10);
  }
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
LAB_10020a21c:
  (**(code **)(**(long **)(param_1 + 8) + 0x138))();
  return;
}




void FUN_10020a248(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if (((uVar1 & 1) == 0) && (*(int *)(param_2 + 0x240) == 0)) {
    FUN_10020a080(param_1);
    return;
  }
  return;
}




void FUN_10020a288(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if (((uVar1 & 1) == 0) && (*(int *)(param_2 + 0x240) == 0)) {
    FUN_10020a080(param_1 + -0x10);
    return;
  }
  return;
}




void FUN_10020a2c8(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,**(undefined8 **)(param_1 + 0x48));
  uVar1 = FUN_10032c624(local_38);
  FUN_1001e8008(param_1 + 0x10,uVar1);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10020a320(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_1001e8550(param_1 + 0x10);
  uVar1 = FUN_100644a94("UI::SKIN_VIEWER::DIALOG_GET_OPALS");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_10020a378(long param_1)

{
  FUN_10020a320(param_1 + -0x10);
  return;
}




void FUN_10020a380(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::SKIN_VIEWER::ON_PURCHASED_SKU");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_10020a3d0(long param_1)

{
  FUN_10020a380(param_1 + -0x10);
  return;
}




void FUN_10020a3d8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_218 [32];
  void *local_1f8 [2];
  char local_1e1;
  undefined1 auStack_1d8 [440];
  
  iVar1 = FUN_100328764(param_2,*(undefined8 *)(param_1 + 0x48));
  if (iVar1 != 0) {
    thunk_FUN_100253c74(auStack_1d8);
    FUN_10001549c(local_1f8,**(undefined8 **)(param_1 + 0x48));
    FUN_1000ead08(auStack_1d8,local_1f8);
    if (local_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
    FUN_100644aec(local_1f8,DAT_101d2365c,auStack_1d8);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),local_1f8,1);
    uVar2 = FUN_100644a94("UI::SKIN_VIEWER::ON_SKIN_CRAFTED");
    FUN_100644aec(auStack_218,uVar2,0);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_218,1);
    FUN_1002dc174(*(undefined8 *)(param_1 + 8));
    FUN_10016c310(auStack_1d8);
  }
  return;
}




void FUN_10020a4a8(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10032834c();
  FUN_10001549c(local_38,**(undefined8 **)(param_1 + 0x48));
  FUN_100328d40(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10020a500(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10032834c();
  FUN_10001549c(local_38,**(undefined8 **)(param_1 + 0x48));
  FUN_100328d0c(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10020a558(long param_1)

{
  FUN_10020a500(param_1 + -0x40);
  return;
}




void FUN_10020a560(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_100209ff0(param_1);
  return;
}




void thunk_FUN_10020a3d8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_218 [32];
  void *apvStack_1f8 [2];
  char cStack_1e1;
  undefined1 auStack_1d8 [440];
  
  iVar1 = FUN_100328764(param_2,*(undefined8 *)(param_1 + 0x48));
  if (iVar1 != 0) {
    thunk_FUN_100253c74(auStack_1d8);
    FUN_10001549c(apvStack_1f8,**(undefined8 **)(param_1 + 0x48));
    FUN_1000ead08(auStack_1d8,apvStack_1f8);
    if (cStack_1e1 < '\0') {
      operator_delete(apvStack_1f8[0]);
    }
    FUN_100644aec(apvStack_1f8,DAT_101d2365c,auStack_1d8);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),apvStack_1f8,1);
    uVar2 = FUN_100644a94("UI::SKIN_VIEWER::ON_SKIN_CRAFTED");
    FUN_100644aec(auStack_218,uVar2,0);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_218,1);
    FUN_1002dc174(*(undefined8 *)(param_1 + 8));
    FUN_10016c310(auStack_1d8);
  }
  return;
}




void FUN_10020a598(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_100328d7c(param_2);
  FUN_1002dbf78(uVar2,uVar1);
  return;
}




undefined8 * FUN_10020a5c4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_101471968;
  operator_new(0x3ed0);
  lVar1 = thunk_FUN_1002dd284();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_1004f0a20(param_1 + 2);
  FUN_10014f4a0(param_1 + 5);
  *param_1 = &PTR_FUN_101471528;
  param_1[2] = &PTR_FUN_1014715a0;
  param_1[5] = &PTR_FUN_1014715d0;
  FUN_10003330c(param_1 + 8,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xb,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xe,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x11,&DAT_101d91198);
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa2) = 0;
  if (DAT_101d230a8 != 0) {
    lVar1 = FUN_10010c704();
    uStack_38 = 0;
    pcStack_28 = thunk_FUN_10020b280;
    local_40 = param_1;
    local_30 = param_1;
    FUN_1000be5e4(lVar1 + 0x10,&local_40);
  }
  return param_1;
}




undefined8 * thunk_FUN_10020a5c4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_101471968;
  operator_new(0x3ed0);
  lVar1 = thunk_FUN_1002dd284();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_1004f0a20(param_1 + 2);
  FUN_10014f4a0(param_1 + 5);
  *param_1 = &PTR_FUN_101471528;
  param_1[2] = &PTR_FUN_1014715a0;
  param_1[5] = &PTR_FUN_1014715d0;
  FUN_10003330c(param_1 + 8,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xb,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xe,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x11,&DAT_101d91198);
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa2) = 0;
  if (DAT_101d230a8 != 0) {
    lVar1 = FUN_10010c704();
    uStack_38 = 0;
    pcStack_28 = thunk_FUN_10020b280;
    puStack_40 = param_1;
    puStack_30 = param_1;
    FUN_1000be5e4(lVar1 + 0x10,&puStack_40);
  }
  return param_1;
}




undefined8 * FUN_10020a6ac(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_101471528;
  param_1[2] = &PTR_FUN_1014715a0;
  param_1[5] = &PTR_FUN_1014715d0;
  FUN_10010a874();
  if (*(char *)(param_1 + 0x14) != '\0') {
    plVar2 = param_1 + 8;
    plVar1 = plVar2;
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar1 = (long *)*plVar2;
    }
    FUN_10010a820(plVar1,param_1);
    plVar1 = plVar2;
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar1 = (long *)*plVar2;
    }
    FUN_10010a83c(plVar1,param_1);
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    FUN_10010a858(plVar2,param_1);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_10014f51c(param_1 + 5);
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_101471968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_10020a6ac(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_101471528;
  param_1[2] = &PTR_FUN_1014715a0;
  param_1[5] = &PTR_FUN_1014715d0;
  FUN_10010a874();
  if (*(char *)(param_1 + 0x14) != '\0') {
    plVar2 = param_1 + 8;
    plVar1 = plVar2;
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar1 = (long *)*plVar2;
    }
    FUN_10010a820(plVar1,param_1);
    plVar1 = plVar2;
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar1 = (long *)*plVar2;
    }
    FUN_10010a83c(plVar1,param_1);
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    FUN_10010a858(plVar2,param_1);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_10014f51c(param_1 + 5);
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_101471968;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_10020a7d0(long param_1)

{
  FUN_10020a6ac(param_1 + -0x10);
  return;
}




void FUN_10020a7d8(long param_1)

{
  FUN_10020a6ac(param_1 + -0x28);
  return;
}




void FUN_10020a7e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020a6ac();
  operator_delete(pvVar1);
  return;
}




void FUN_10020a7f4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020a6ac(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_10020a80c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020a6ac(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10020a824(long param_1)

{
  FUN_1002de20c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_10020a82c(long param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                  uint param_6)

{
  undefined8 ***pppuVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  string sVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  string *psVar14;
  string *this;
  size_t sVar15;
  ulong uVar16;
  undefined8 uVar17;
  string *psVar18;
  string *psVar19;
  size_t sVar20;
  byte bVar21;
  void *local_90 [2];
  char local_79;
  undefined8 **local_78;
  size_t local_70;
  byte local_61;
  
  std::operator+("#",param_2);
  std::string::string((string *)&local_78,(string *)local_90);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  this = (string *)(param_1 + 0x40);
  bVar21 = *(byte *)(param_1 + 0x57);
  uVar16 = (ulong)bVar21;
  sVar15 = *(size_t *)(param_1 + 0x48);
  if (-1 < (char)bVar21) {
    sVar15 = uVar16;
  }
  sVar20 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar20 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar15 == sVar20) {
    psVar18 = *(string **)this;
    psVar14 = psVar18;
    if (-1 < (char)bVar21) {
      psVar14 = this;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar21 < '\0') {
      psVar19 = psVar18;
      if ((sVar15 != 0) && (iVar8 = _memcmp(psVar14,pbVar13,sVar15), iVar8 != 0))
      goto LAB_10020a934;
    }
    else {
      psVar19 = this;
      if (sVar15 != 0) {
        if ((uint)*pbVar13 == ((uint)psVar18 & 0xff)) {
          pbVar12 = (byte *)(param_1 + 0x41);
          uVar11 = uVar16;
          do {
            uVar11 = uVar11 - 1;
            pbVar13 = pbVar13 + 1;
            if (uVar11 == 0) goto LAB_10020aa38;
            bVar4 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar4 == *pbVar13);
        }
        goto LAB_10020a934;
      }
    }
  }
  else {
LAB_10020a934:
    if (param_6 != 0) {
      uVar11 = (ulong)local_61;
      if (-1 < (char)local_61) {
        local_70 = uVar11;
      }
      if (local_70 == sVar15) {
        pppuVar1 = (undefined8 ***)local_78;
        if (-1 < (char)local_61) {
          pppuVar1 = &local_78;
        }
        psVar14 = *(string **)this;
        if (-1 < (char)bVar21) {
          psVar14 = this;
        }
        if ((char)local_61 < '\0') {
          if ((sVar15 == 0) || (iVar8 = _memcmp(pppuVar1,psVar14,sVar15), iVar8 == 0))
          goto LAB_10020af30;
        }
        else {
          if (sVar15 == 0) goto LAB_10020af30;
          if ((uint)(byte)*psVar14 == ((uint)local_78 & 0xff)) {
            psVar18 = (string *)((ulong)&local_78 | 1);
            do {
              uVar11 = uVar11 - 1;
              psVar14 = psVar14 + 1;
              if (uVar11 == 0) goto LAB_10020af30;
              sVar5 = *psVar18;
              psVar18 = psVar18 + 1;
            } while (sVar5 == *psVar14);
          }
        }
      }
    }
    sVar5 = param_2[0x17];
    sVar20 = *(size_t *)(param_2 + 8);
    if (-1 < (char)sVar5) {
      sVar20 = (ulong)(byte)sVar5;
    }
    if (sVar15 == sVar20) {
      psVar19 = *(string **)this;
      psVar14 = psVar19;
      if (-1 < (char)bVar21) {
        psVar14 = this;
      }
      psVar18 = *(string **)param_2;
      if (-1 < (char)sVar5) {
        psVar18 = param_2;
      }
      if ((char)bVar21 < '\0') {
        if ((sVar15 == 0) || (iVar8 = _memcmp(psVar14,psVar18,sVar15), iVar8 == 0))
        goto LAB_10020af30;
        goto LAB_10020aa5c;
      }
      if (sVar15 == 0) goto LAB_10020af30;
      if ((uint)(byte)*psVar18 == ((uint)psVar19 & 0xff)) {
        psVar14 = (string *)(param_1 + 0x41);
        do {
          uVar16 = uVar16 - 1;
          psVar18 = psVar18 + 1;
          if (uVar16 == 0) goto LAB_10020af30;
          sVar5 = *psVar14;
          psVar14 = psVar14 + 1;
        } while (sVar5 == *psVar18);
      }
    }
LAB_10020aa38:
    psVar19 = this;
    if ((char)bVar21 < '\0') {
      psVar19 = *(string **)this;
    }
  }
LAB_10020aa5c:
  FUN_10010a820(psVar19,param_1);
  psVar14 = this;
  if (*(char *)(param_1 + 0x57) < '\0') {
    psVar14 = *(string **)this;
  }
  FUN_10010a83c(psVar14,param_1);
  psVar14 = this;
  if (*(char *)(param_1 + 0x57) < '\0') {
    psVar14 = *(string **)this;
  }
  FUN_10010a858(psVar14,param_1);
  std::string::operator=(this,param_2);
  psVar14 = (string *)(param_1 + 0x58);
  std::string::operator=(psVar14,param_3);
  psVar18 = (string *)(param_1 + 0x70);
  std::string::operator=(psVar18,param_4);
  psVar19 = (string *)(param_1 + 0x88);
  std::string::operator=(psVar19,param_5);
  *(char *)(param_1 + 0xa0) = (char)param_6;
  if ((param_6 & 1) == 0) {
    FUN_10020af60(*(undefined8 *)(param_1 + 8),psVar14);
    bVar6 = false;
    sVar20 = (size_t)DAT_101d911a8._7_1_;
    sVar15 = DAT_101d911a0;
    bVar21 = DAT_101d911a8._7_1_;
  }
  else {
    std::string::operator=(this,(string *)&local_78);
    FUN_10020af60(*(undefined8 *)(param_1 + 8),psVar14);
    bVar21 = DAT_101d911a8._7_1_;
    sVar15 = DAT_101d911a0;
    bVar4 = *(byte *)(param_1 + 0x9f);
    uVar16 = (ulong)bVar4;
    sVar3 = *(size_t *)(param_1 + 0x90);
    if (-1 < (char)bVar4) {
      sVar3 = uVar16;
    }
    sVar20 = (size_t)DAT_101d911a8._7_1_;
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = sVar20;
    }
    if (sVar3 == sVar2) {
      psVar14 = *(string **)psVar19;
      if (-1 < (char)bVar4) {
        psVar14 = psVar19;
      }
      pbVar13 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar13 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if (sVar3 == 0) goto LAB_10020abe8;
        iVar8 = _memcmp(psVar14,pbVar13,sVar3);
        bVar6 = iVar8 == 0;
      }
      else {
        if (sVar3 == 0) {
LAB_10020abe8:
          bVar6 = false;
          goto LAB_10020abec;
        }
        if ((uint)*pbVar13 != ((uint)*(string **)psVar19 & 0xff)) goto LAB_10020abcc;
        pbVar12 = (byte *)(param_1 + 0x89);
        do {
          uVar16 = uVar16 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar16 == 0) break;
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar4 == *pbVar13);
        bVar6 = uVar16 == 0;
      }
      bVar6 = !bVar6;
    }
    else {
LAB_10020abcc:
      bVar6 = true;
    }
  }
LAB_10020abec:
  uVar17 = *(undefined8 *)(param_1 + 8);
  bVar4 = *(byte *)(param_1 + 0x87);
  uVar16 = (ulong)bVar4;
  sVar3 = *(size_t *)(param_1 + 0x78);
  if (-1 < (char)bVar4) {
    sVar3 = uVar16;
  }
  if (-1 < (char)bVar21) {
    sVar15 = sVar20;
  }
  if (sVar3 == sVar15) {
    psVar14 = *(string **)psVar18;
    if (-1 < (char)bVar4) {
      psVar14 = psVar18;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)bVar21) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar3 == 0) goto LAB_10020acac;
      iVar8 = _memcmp(psVar14,pbVar13,sVar3);
      bVar7 = iVar8 != 0;
    }
    else if (sVar3 == 0) {
LAB_10020acac:
      bVar7 = false;
    }
    else if ((uint)*pbVar13 == ((uint)*(string **)psVar18 & 0xff)) {
      pbVar12 = (byte *)(param_1 + 0x71);
      do {
        uVar16 = uVar16 - 1;
        pbVar13 = pbVar13 + 1;
        if (uVar16 == 0) break;
        bVar21 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar21 == *pbVar13);
      bVar7 = uVar16 != 0;
    }
    else {
      bVar7 = true;
    }
  }
  else {
    bVar7 = true;
  }
  FUN_1002de410(uVar17,bVar7,*(undefined1 *)(param_1 + 0xa1),bVar6);
  bVar21 = DAT_101d911a8._7_1_;
  sVar15 = DAT_101d911a0;
  if ((param_6 & 1) == 0) {
    bVar6 = false;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x87);
    uVar16 = (ulong)bVar4;
    sVar20 = *(size_t *)(param_1 + 0x78);
    if (-1 < (char)bVar4) {
      sVar20 = uVar16;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar20 == sVar3) {
      psVar14 = *(string **)psVar18;
      if (-1 < (char)bVar4) {
        psVar14 = psVar18;
      }
      pbVar13 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar13 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if (sVar20 == 0) goto LAB_10020ad90;
        iVar8 = _memcmp(psVar14,pbVar13,sVar20);
        bVar6 = iVar8 == 0;
      }
      else {
        if (sVar20 == 0) {
LAB_10020ad90:
          bVar6 = false;
          goto LAB_10020ad94;
        }
        if ((uint)*pbVar13 != ((uint)*(string **)psVar18 & 0xff)) goto LAB_10020ad74;
        pbVar12 = (byte *)(param_1 + 0x71);
        do {
          uVar16 = uVar16 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar16 == 0) break;
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar4 == *pbVar13);
        bVar6 = uVar16 == 0;
      }
      bVar6 = !bVar6;
    }
    else {
LAB_10020ad74:
      bVar6 = true;
    }
  }
LAB_10020ad94:
  uVar17 = *(undefined8 *)(param_1 + 8);
  bVar4 = *(byte *)(param_1 + 0x9f);
  uVar16 = (ulong)bVar4;
  sVar20 = *(size_t *)(param_1 + 0x90);
  if (-1 < (char)bVar4) {
    sVar20 = uVar16;
  }
  if (-1 < (char)bVar21) {
    sVar15 = (ulong)bVar21;
  }
  if (sVar20 == sVar15) {
    psVar14 = *(string **)psVar19;
    if (-1 < (char)bVar4) {
      psVar14 = psVar19;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)bVar21) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar20 == 0) goto LAB_10020ae40;
      iVar8 = _memcmp(psVar14,pbVar13,sVar20);
      bVar7 = iVar8 == 0;
    }
    else {
      if (sVar20 == 0) {
LAB_10020ae40:
        bVar7 = false;
        goto LAB_10020ae44;
      }
      if ((uint)*pbVar13 != ((uint)*(string **)psVar19 & 0xff)) goto LAB_10020ae24;
      pbVar12 = (byte *)(param_1 + 0x89);
      do {
        uVar16 = uVar16 - 1;
        pbVar13 = pbVar13 + 1;
        if (uVar16 == 0) break;
        bVar21 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar21 == *pbVar13);
      bVar7 = uVar16 == 0;
    }
    bVar7 = !bVar7;
  }
  else {
LAB_10020ae24:
    bVar7 = true;
  }
LAB_10020ae44:
  FUN_1002de4dc(uVar17,bVar7,*(undefined1 *)(param_1 + 0xa2),bVar6);
  lVar9 = FUN_100111860(param_2);
  if (lVar9 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)(lVar9 + 0xac) == 3;
  }
  FUN_1002de5ac(*(undefined8 *)(param_1 + 8),bVar6);
  uVar10 = *(uint *)(*(long *)(param_1 + 8) + 0x202c);
  *(uint *)(*(long *)(param_1 + 8) + 0x202c) =
       uVar10 & 0xfffffff8 | uVar10 & 3 | (uint)(*(char *)(param_1 + 0xa0) == '\0') << 2;
  FUN_1001cedd0(*(long *)(param_1 + 8) + 0x3dd8);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar10 = (uint)*(char *)(param_1 + 0x57);
    psVar14 = this;
    if (*(char *)(param_1 + 0x57) < '\0') {
      psVar14 = *(string **)this;
    }
    if (DAT_101d230a8 != 0) {
      FUN_10020cd7c(DAT_101d230a8,psVar14,param_1);
      uVar10 = (uint)*(byte *)(param_1 + 0x57);
    }
    psVar14 = this;
    if ((uVar10 >> 7 & 1) != 0) {
      psVar14 = *(string **)this;
    }
    if (DAT_101d230a8 != 0) {
      FUN_10020cde8(DAT_101d230a8,psVar14,param_1);
      uVar10 = (uint)*(byte *)(param_1 + 0x57);
    }
    if ((uVar10 >> 7 & 1) != 0) {
      this = *(string **)this;
    }
    if (DAT_101d230a8 != 0) {
      FUN_10020cf50(DAT_101d230a8,this,param_1);
    }
  }
  FUN_1002de3d0(*(undefined8 *)(param_1 + 8));
  FUN_10020afa4(param_1);
LAB_10020af30:
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  return;
}




void FUN_10020af60(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3170(auStack_30);
  FUN_1006513c0(param_1 + 0x6d8,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_10020afa4(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  undefined1 auStack_c8 [8];
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  void *local_a8;
  char local_91;
  void *local_90;
  char local_79;
  void *local_78;
  char local_61;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  plVar1 = (long *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (*(char *)(param_1 + 0x57) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    puVar2 = (uint *)FUN_10010a7ec(plVar1);
    if ((puVar2 == (uint *)0x0) || (*puVar2 != 0)) {
      lVar3 = *(long *)(puVar2 + 2);
      do {
        FUN_10020c9bc(auStack_c8,lVar3);
        FUN_10020b0e8(param_1,auStack_c8);
        FUN_10010c800(auStack_60,local_58);
        if (local_61 < '\0') {
          operator_delete(local_78);
        }
        if (local_79 < '\0') {
          operator_delete(local_90);
        }
        if (local_91 < '\0') {
          operator_delete(local_a8);
        }
        if (local_b0 != (void *)0x0) {
          operator_delete__(local_b0);
          local_b8 = 0;
          local_b0 = (void *)0x0;
        }
        if (local_c0 != (void *)0x0) {
          operator_delete__(local_c0);
        }
        lVar3 = lVar3 + 0x88;
      } while (lVar3 != *(long *)(puVar2 + 2) + (ulong)*puVar2 * 0x88);
    }
    return;
  }
  if (*(char *)(param_1 + 0x57) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_10010a510(plVar1,200);
  return;
}




void FUN_10020b0c4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x57) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_10010a728(plVar1,param_2,*(char *)(param_1 + 0xa0) == '\0');
  return;
}




void FUN_10020b0e8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  void *local_88 [2];
  char local_71;
  undefined8 **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 **local_58 [2];
  char local_41;
  
  plVar1 = (long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) < '\0') {
    if (*(long *)(param_2 + 0x58) == 0) goto LAB_10020b138;
    plVar4 = (long *)*plVar1;
  }
  else {
    plVar4 = plVar1;
    if (*(char *)(param_2 + 0x67) == '\0') goto LAB_10020b138;
  }
  FUN_1004d2f54(plVar4);
LAB_10020b138:
  _printf("%f");
  FUN_10003330c(local_58,&DAT_101d91198);
  uVar5 = thunk_FUN_100528b64();
  FUN_10001549c(&local_70,uVar5);
  lVar6 = FUN_1000be6e4(param_2 + 0x68,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (param_2 + 0x70 != lVar6) {
    uVar5 = thunk_FUN_100528b64();
    FUN_10001549c(local_88,uVar5);
    FUN_1000be514(param_2 + 0x68,local_88);
    uVar5 = FUN_10052b19c();
    FUN_10001549c(&local_70,uVar5);
    std::string::operator=((string *)local_58,(string *)&local_70);
    if (local_60._7_1_ < '\0') {
      operator_delete(local_70);
    }
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
  }
  local_70 = (undefined8 ***)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_1004e357c(param_2 + 0x10,&local_70);
  pppuVar2 = (undefined8 ***)local_58[0];
  if (-1 < local_41) {
    pppuVar2 = local_58;
  }
  plVar4 = (long *)*(long *)(param_2 + 0x50);
  if (-1 < *(char *)(param_2 + 0x67)) {
    plVar4 = plVar1;
  }
  pppuVar3 = (undefined8 ***)local_70;
  if (-1 < local_60) {
    pppuVar3 = &local_70;
  }
  FUN_1002de264(*(undefined8 *)(param_1 + 8),pppuVar2,plVar4,pppuVar3,
                *(undefined1 *)(param_2 + 0x82));
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_10020b280(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int extraout_w8;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  undefined1 auStack_40 [8];
  void *local_38;
  
  piVar7 = (int *)FUN_10010a804();
  iVar6 = extraout_w8;
  if ((piVar7 == (int *)0x0) || (iVar6 = *piVar7, iVar6 != 0)) {
    uVar8 = (ulong)(iVar6 - 1);
    lVar10 = *(long *)(piVar7 + 2);
    lVar15 = lVar10 + uVar8 * 0x88;
    if (*(char *)(lVar15 + 0x82) == '\0') {
      FUN_1004e3170(auStack_40,param_1 + 0x58);
      iVar6 = FUN_1004e3654(lVar15,auStack_40);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      lVar13 = lVar10 + uVar8 * 0x88;
      bVar4 = *(byte *)(lVar13 + 0x37);
      uVar12 = (ulong)bVar4;
      sVar1 = *(size_t *)(lVar13 + 0x28);
      if (-1 < (char)bVar4) {
        sVar1 = uVar12;
      }
      bVar5 = *(byte *)(param_1 + 0x57);
      sVar2 = *(size_t *)(param_1 + 0x48);
      if (-1 < (char)bVar5) {
        sVar2 = (ulong)bVar5;
      }
      if (sVar1 != sVar2) {
        return;
      }
      pvVar14 = *(void **)(lVar13 + 0x20);
      puVar3 = pvVar14;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar13 + 0x20);
      }
      pbVar11 = *(byte **)(param_1 + 0x40);
      if (-1 < (char)bVar5) {
        pbVar11 = (byte *)(param_1 + 0x40);
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar11,sVar1), iVar6 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar11 != ((uint)pvVar14 & 0xff)) {
          return;
        }
        pbVar9 = (byte *)(lVar10 + uVar8 * 0x88 + 0x21);
        while( true ) {
          uVar12 = uVar12 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar12 == 0) break;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          if (bVar4 != *pbVar11) {
            return;
          }
        }
      }
    }
    FUN_10020b0e8(param_1,lVar15);
  }
  return;
}




void FUN_10020b3c0(long param_1)

{
  long *plVar1;
  int *piVar2;
  int extraout_w8;
  int iVar3;
  
  plVar1 = (long *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x57) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  piVar2 = (int *)FUN_10010a7ec(plVar1);
  iVar3 = extraout_w8;
  if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, iVar3 == 0)) {
    return;
  }
  FUN_10020b0e8(param_1,*(long *)(piVar2 + 2) + (ulong)(iVar3 - 1) * 0x88);
  return;
}




void FUN_10020b41c(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 **local_68;
  void *local_60;
  char local_51;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  thunk_FUN_1004e439c(auStack_40,&DAT_101d91650);
  if (*(char *)(param_2 + 0x30) == '\0') {
    if (*(char *)(param_2 + 0x31) == '\0') goto LAB_10020b480;
    pcVar3 = "MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE";
  }
  else {
    pcVar3 = "MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE";
  }
  uVar4 = FUN_1004e0150(pcVar3,0);
  FUN_1000153b4(auStack_40,uVar4);
LAB_10020b480:
  FUN_1004e3170(auStack_50,param_2);
  FUN_1004e3120(&local_68,"[PLAYER_HANDLE]");
  FUN_1004e3bc4(auStack_40,0,&local_68,auStack_50);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_10003330c(&local_68,&DAT_101d91198);
  FUN_1004e357c(auStack_40,&local_68);
  pppuVar1 = (undefined8 ***)local_68;
  if (-1 < local_51) {
    pppuVar1 = &local_68;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  if (-1 < *(char *)(param_2 + 0x2f)) {
    puVar2 = (undefined8 *)(param_2 + 0x18);
  }
  FUN_1002de328(*(undefined8 *)(param_1 + 8),pppuVar1,puVar2);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10020b540(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [8];
  void *local_130;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [16];
  long local_d8;
  code *pcStack_d0;
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined4 local_60;
  undefined4 local_5c;
  
  lVar2 = FUN_100111860(param_1 + 0x40);
  if (lVar2 != 0) {
    local_d8 = param_1;
    if (*(int *)(lVar2 + 0xac) == 3) {
      thunk_FUN_1001cd434(&local_f0);
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_TITLE",0);
      thunk_FUN_1004e439c(&local_128,uVar3);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 0;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_DESCRIPTION",0);
      thunk_FUN_1004e439c(auStack_138,uVar3);
      FUN_1004e3120(&local_128,"[PLAYER_NAME]");
      FUN_1004e3170(auStack_148,param_1 + 0x58);
      FUN_1004e3bc4(auStack_138,0,&local_128,auStack_148);
      if (local_140 != (void *)0x0) {
        operator_delete__(local_140);
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      thunk_FUN_1004e439c(&local_128,auStack_138);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      pcStack_d0 = FUN_10020b910;
      uVar3 = FUN_1004e0150("MENU_FRIENDS_DELETE_CONFIRM",0);
      FUN_1000153b4(&local_a0,uVar3);
      local_c0 = *(long *)(param_1 + 8) + 0x1fa8;
      local_60 = 0x3f400000;
      iVar1 = FUN_100126c88();
      local_5c = 0x44160000;
      if (iVar1 == 0) {
        local_5c = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_10001549c(&local_128,"deleteFriend");
      FUN_1001cefb8(lVar2 + 0x3dd8,&local_128,&local_f0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      if (local_130 != (void *)0x0) {
        operator_delete__(local_130);
      }
    }
    else {
      thunk_FUN_1001cd434(&local_f0);
      uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND",0);
      thunk_FUN_1004e439c(&local_128,uVar3);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 0;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      thunk_FUN_1004e439c(&local_128,&DAT_101d91650);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_e8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      pcStack_d0 = thunk_FUN_10020c964;
      uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(&local_a0,uVar3);
      local_c0 = *(long *)(param_1 + 8) + 0x1fa8;
      local_60 = 0x3f400000;
      iVar1 = FUN_100126c88();
      local_5c = 0x44160000;
      if (iVar1 == 0) {
        local_5c = 0x43e10000;
      }
      lVar2 = *(long *)(param_1 + 8);
      FUN_10001549c(&local_128,"addFriend");
      FUN_1001cefb8(lVar2 + 0x3dd8,&local_128,&local_f0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
    }
    local_f0 = &PTR_FUN_1014666e0;
    if (local_79 < '\0') {
      operator_delete(local_90);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_e8,1);
  }
  return;
}




void FUN_10020b910(long param_1)

{
  FUN_100111880(param_1 + 0x40);
  FUN_10020c2b8(param_1);
  return;
}




void thunk_FUN_10020c964(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  void *pvStack_18;
  
  FUN_1004e3170(auStack_20,param_1 + 0x58);
  FUN_100111870(auStack_20);
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  FUN_1001e55b0(0x40200000,uVar1,0,1);
  return;
}




void FUN_10020b93c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  size_t sVar18;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_168 [8];
  void *local_160;
  void *local_158;
  void *local_150;
  undefined7 local_148;
  char cStack_141;
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined **local_120;
  undefined1 auStack_118 [16];
  long local_108;
  code *pcStack_100;
  long local_f0;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  char local_a9;
  undefined4 local_90;
  undefined4 local_8c;
  
  bVar7 = DAT_101d911a8._7_1_;
  sVar4 = DAT_101d911a0;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    sVar16 = (size_t)*(byte *)(param_1 + 0x87);
    sVar18 = *(size_t *)(param_1 + 0x78);
    uVar17 = sVar16;
  }
  else {
    sVar16 = (size_t)*(byte *)(param_1 + 0x87);
    uVar8 = (uint)(char)*(byte *)(param_1 + 0x87);
    uVar17 = (ulong)uVar8;
    sVar18 = *(size_t *)(param_1 + 0x78);
    sVar2 = sVar18;
    if (-1 < (int)uVar8) {
      sVar2 = sVar16;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 == sVar3) {
      pvVar11 = *(void **)(param_1 + 0x70);
      puVar1 = pvVar11;
      if (-1 < (int)uVar8) {
        puVar1 = (undefined8 *)(param_1 + 0x70);
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((int)uVar8 < 0) {
        if ((sVar2 == 0) || (iVar9 = _memcmp(puVar1,pbVar14,sVar2), iVar9 == 0)) goto LAB_10020bae0;
      }
      else {
        if (sVar2 == 0) {
LAB_10020bae0:
          thunk_FUN_1001cd434(&local_120);
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_158,uVar10);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 0;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_168,uVar10);
          FUN_1004e3120(&local_158,"[PLAYER_NAME]");
          FUN_1004e3170(auStack_178,param_1 + 0x58);
          FUN_1004e3bc4(auStack_168,0,&local_158,auStack_178);
          if (local_170 != (void *)0x0) {
            operator_delete__(local_170);
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          thunk_FUN_1004e439c(&local_158,auStack_168);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 1;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          pcStack_100 = thunk_FUN_10020c7b4;
          local_108 = param_1;
          uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d0,uVar10);
          local_f0 = *(long *)(param_1 + 8) + 0x808;
          local_90 = 0x3f400000;
          iVar9 = FUN_100126c88();
          local_8c = 0x44160000;
          if (iVar9 == 0) {
            local_8c = 0x43e10000;
          }
          lVar15 = *(long *)(param_1 + 8);
          FUN_10001549c(&local_158,"guildInvite");
          FUN_1001cefb8(lVar15 + 0x3dd8,&local_158,&local_120);
          if (cStack_141 < '\0') {
            operator_delete(local_158);
          }
          if (local_160 != (void *)0x0) {
            operator_delete__(local_160);
          }
          local_120 = &PTR_FUN_1014666e0;
          if (local_a9 < '\0') {
            operator_delete(local_c0);
          }
          if (local_c8 != (void *)0x0) {
            operator_delete__(local_c8);
            local_d0 = 0;
            local_c8 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_118,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)pvVar11 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x71);
          uVar12 = sVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10020bae0;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 == *pbVar14);
        }
      }
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x70);
  if (-1 < (char)uVar17) {
    sVar18 = sVar16;
  }
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar18 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)uVar17) {
      puVar5 = puVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar7) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if (((uint)uVar17 >> 7 & 1) == 0) {
      if (sVar18 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x71);
        do {
          sVar16 = sVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (sVar16 == 0) {
            return;
          }
          bVar7 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar7 == *pbVar14);
      }
    }
    else {
      if (sVar18 == 0) {
        return;
      }
      iVar9 = _memcmp(puVar5,pbVar14,sVar18);
      if (iVar9 == 0) {
        return;
      }
    }
  }
  uVar10 = FUN_10015d3ec();
  FUN_1001634c4(uVar10,puVar1,1);
  FUN_10021a8ec(puVar1,0);
  return;
}




void thunk_FUN_10020c7b4(void)

{
  FUN_10020c7b4();
  return;
}




void FUN_10020bd1c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  size_t sVar18;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_168 [8];
  void *local_160;
  void *local_158;
  void *local_150;
  undefined7 local_148;
  char cStack_141;
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined **local_120;
  undefined1 auStack_118 [16];
  long local_108;
  code *pcStack_100;
  long local_f0;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  char local_a9;
  undefined4 local_90;
  undefined4 local_8c;
  
  bVar7 = DAT_101d911a8._7_1_;
  sVar4 = DAT_101d911a0;
  if (*(char *)(param_1 + 0xa2) == '\0') {
    sVar16 = (size_t)*(byte *)(param_1 + 0x9f);
    sVar18 = *(size_t *)(param_1 + 0x90);
    uVar17 = sVar16;
  }
  else {
    sVar16 = (size_t)*(byte *)(param_1 + 0x9f);
    uVar8 = (uint)(char)*(byte *)(param_1 + 0x9f);
    uVar17 = (ulong)uVar8;
    sVar18 = *(size_t *)(param_1 + 0x90);
    sVar2 = sVar18;
    if (-1 < (int)uVar8) {
      sVar2 = sVar16;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 == sVar3) {
      pvVar11 = *(void **)(param_1 + 0x88);
      puVar1 = pvVar11;
      if (-1 < (int)uVar8) {
        puVar1 = (undefined8 *)(param_1 + 0x88);
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((int)uVar8 < 0) {
        if ((sVar2 == 0) || (iVar9 = _memcmp(puVar1,pbVar14,sVar2), iVar9 == 0)) goto LAB_10020bebc;
      }
      else {
        if (sVar2 == 0) {
LAB_10020bebc:
          thunk_FUN_1001cd434(&local_120);
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_158,uVar10);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 0;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          uVar10 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_168,uVar10);
          FUN_1004e3120(&local_158,"[PLAYER_NAME]");
          FUN_1004e3170(auStack_178,param_1 + 0x58);
          FUN_1004e3bc4(auStack_168,0,&local_158,auStack_178);
          if (local_170 != (void *)0x0) {
            operator_delete__(local_170);
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          thunk_FUN_1004e439c(&local_158,auStack_168);
          FUN_10003330c(&local_148,&DAT_101d91198);
          local_130 = 1;
          local_12c = 0x41a00000;
          FUN_10003c048(auStack_118,&local_158);
          if (local_131 < '\0') {
            operator_delete((void *)CONCAT17(cStack_141,local_148));
          }
          if (local_150 != (void *)0x0) {
            operator_delete__(local_150);
          }
          pcStack_100 = thunk_FUN_10020c88c;
          local_108 = param_1;
          uVar10 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d0,uVar10);
          local_f0 = *(long *)(param_1 + 8) + 0x13d8;
          local_90 = 0x3f400000;
          iVar9 = FUN_100126c88();
          local_8c = 0x44160000;
          if (iVar9 == 0) {
            local_8c = 0x43e10000;
          }
          lVar15 = *(long *)(param_1 + 8);
          FUN_10001549c(&local_158,"teamInvite");
          FUN_1001cefb8(lVar15 + 0x3dd8,&local_158,&local_120);
          if (cStack_141 < '\0') {
            operator_delete(local_158);
          }
          if (local_160 != (void *)0x0) {
            operator_delete__(local_160);
          }
          local_120 = &PTR_FUN_1014666e0;
          if (local_a9 < '\0') {
            operator_delete(local_c0);
          }
          if (local_c8 != (void *)0x0) {
            operator_delete__(local_c8);
            local_d0 = 0;
            local_c8 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_118,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)pvVar11 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x89);
          uVar12 = sVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10020bebc;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 == *pbVar14);
        }
      }
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (-1 < (char)uVar17) {
    sVar18 = sVar16;
  }
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar18 == sVar4) {
    puVar5 = (void *)*puVar1;
    if (-1 < (char)uVar17) {
      puVar5 = puVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar7) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if (((uint)uVar17 >> 7 & 1) == 0) {
      if (sVar18 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x89);
        do {
          sVar16 = sVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (sVar16 == 0) {
            return;
          }
          bVar7 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar7 == *pbVar14);
      }
    }
    else {
      if (sVar18 == 0) {
        return;
      }
      iVar9 = _memcmp(puVar5,pbVar14,sVar18);
      if (iVar9 == 0) {
        return;
      }
    }
  }
  uVar10 = FUN_10015d3ec();
  FUN_1001635bc(uVar10,puVar1,1);
  FUN_100224084(puVar1);
  return;
}




void thunk_FUN_10020c88c(void)

{
  FUN_10020c88c();
  return;
}




void FUN_10020c0fc(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  size_t sVar12;
  size_t sVar13;
  byte bVar14;
  
  iVar6 = FUN_1004f1680(param_2);
  if (iVar6 == 0) {
    return;
  }
  lVar7 = FUN_10015d3ec();
  bVar14 = DAT_101d911a8._7_1_;
  sVar13 = DAT_101d911a0;
  if (*(char *)(lVar7 + 0x567c) != '\0') {
    return;
  }
  puVar1 = (undefined8 *)(param_2 + 0xb0);
  bVar5 = *(byte *)(param_2 + 199);
  uVar9 = (ulong)bVar5;
  sVar3 = *(size_t *)(param_2 + 0xb8);
  if (-1 < (char)bVar5) {
    sVar3 = uVar9;
  }
  sVar12 = (size_t)DAT_101d911a8._7_1_;
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = sVar12;
  }
  if (sVar3 == sVar2) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar3 == 0) || (iVar6 = _memcmp(puVar4,pbVar11,sVar3), iVar6 == 0)) goto LAB_10020c200;
    }
    else {
      if (sVar3 == 0) goto LAB_10020c200;
      if ((uint)*pbVar11 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_2 + 0xb1);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_10020c200;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
    }
  }
  uVar8 = FUN_10015d3ec();
  FUN_1001634c4(uVar8,puVar1,0);
  sVar12 = (size_t)DAT_101d911a8._7_1_;
  sVar13 = DAT_101d911a0;
  bVar14 = DAT_101d911a8._7_1_;
LAB_10020c200:
  puVar1 = (undefined8 *)(param_2 + 200);
  bVar5 = *(byte *)(param_2 + 0xdf);
  uVar9 = (ulong)bVar5;
  sVar3 = *(size_t *)(param_2 + 0xd0);
  if (-1 < (char)bVar5) {
    sVar3 = uVar9;
  }
  if (-1 < (char)bVar14) {
    sVar13 = sVar12;
  }
  if (sVar3 == sVar13) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)bVar14) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar6 = _memcmp(puVar4,pbVar11,sVar3);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar11 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_2 + 0xc9);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) {
            return;
          }
          bVar14 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar14 == *pbVar11);
      }
    }
  }
  uVar8 = FUN_10015d3ec();
  FUN_1001635bc(uVar8,puVar1,0);
  return;
}




void thunk_FUN_10020c0fc(void)

{
  FUN_10020c0fc();
  return;
}




void thunk_FUN_10020c2b8(void)

{
  FUN_10020c2b8();
  return;
}




void FUN_10020c2b8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_40 [32];
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    plVar3 = (long *)(param_1 + 0x40);
    plVar1 = plVar3;
    if (*(char *)(param_1 + 0x57) < '\0') {
      plVar1 = (long *)*plVar3;
    }
    FUN_10010a820(plVar1,param_1);
    plVar1 = plVar3;
    if (*(char *)(param_1 + 0x57) < '\0') {
      plVar1 = (long *)*plVar3;
    }
    FUN_10010a83c(plVar1,param_1);
    if (*(char *)(param_1 + 0x57) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    FUN_10010a858(plVar3,param_1);
  }
  std::string::operator=((string *)(param_1 + 0x40),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x58),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x70),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x88),(string *)&DAT_101d91198);
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  FUN_1002de238(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_100644a94("UI::MENU_SOCIAL_CLEAR_TARGET");
  FUN_100644aec(auStack_40,uVar2,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_10020c3ac(long param_1)

{
  FUN_10020c2b8(param_1 + -0x10);
  return;
}




void FUN_10020c3b4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_100164424(uVar2,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0xa1) = uVar1;
  return;
}




void FUN_10020c3e4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_100164424(uVar2,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x79) = uVar1;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10020c414(long param_1,long param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  byte *pbVar8;
  byte *******pppppppbVar9;
  byte *******local_48;
  size_t local_40;
  byte local_31;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xa1) = 0;
  FUN_10020c558(&local_48,param_1);
  bVar4 = false;
  bVar3 = *(byte *)(param_1 + 0x57);
  uVar6 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 0x48);
  if (-1 < (char)bVar3) {
    sVar1 = uVar6;
  }
  if (-1 < (char)local_31) {
    local_40 = (ulong)local_31;
  }
  if (sVar1 == local_40) {
    pvVar7 = *(void **)(param_1 + 0x40);
    puVar2 = pvVar7;
    if (-1 < (char)bVar3) {
      puVar2 = (undefined8 *)(param_1 + 0x40);
    }
    pppppppbVar9 = local_48;
    if (-1 < (char)local_31) {
      pppppppbVar9 = (byte *******)&local_48;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 != 0) {
        iVar5 = _memcmp(puVar2,pppppppbVar9,sVar1);
        bVar4 = iVar5 == 0;
        goto joined_r0x00010020c500;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*(byte *)pppppppbVar9 == ((uint)pvVar7 & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x41);
        do {
          uVar6 = uVar6 - 1;
          pppppppbVar9 = (byte *******)((long)pppppppbVar9 + 1);
          bVar4 = uVar6 == 0;
          if (uVar6 == 0) break;
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 == *(byte *)pppppppbVar9);
      }
      else {
        bVar4 = false;
      }
      goto joined_r0x00010020c500;
    }
    bVar4 = true;
  }
joined_r0x00010020c500:
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  if (bVar4) {
    FUN_10020c2b8(param_1);
  }
  else {
    std::string::operator=((string *)(param_1 + 0x70),(string *)&DAT_101d91198);
  }
  return;
}




void FUN_10020c558(string *param_1,long param_2)

{
  void *local_38 [2];
  char local_21;
  
  std::operator+("#",(string *)(param_2 + 0x70));
  std::string::string(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10020c5ac(long param_1)

{
  FUN_10020c414(param_1 + -0x28);
  return;
}




void FUN_10020c5b4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_1001645b8(uVar2,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0xa2) = uVar1;
  return;
}




void FUN_10020c5e4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_1001645b8(uVar2,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x7a) = uVar1;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10020c614(long param_1,long param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  byte *pbVar8;
  byte *******pppppppbVar9;
  byte *******local_48;
  size_t local_40;
  byte local_31;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xa2) = 0;
  FUN_10020c758(&local_48,param_1);
  bVar4 = false;
  bVar3 = *(byte *)(param_1 + 0x57);
  uVar6 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 0x48);
  if (-1 < (char)bVar3) {
    sVar1 = uVar6;
  }
  if (-1 < (char)local_31) {
    local_40 = (ulong)local_31;
  }
  if (sVar1 == local_40) {
    pvVar7 = *(void **)(param_1 + 0x40);
    puVar2 = pvVar7;
    if (-1 < (char)bVar3) {
      puVar2 = (undefined8 *)(param_1 + 0x40);
    }
    pppppppbVar9 = local_48;
    if (-1 < (char)local_31) {
      pppppppbVar9 = (byte *******)&local_48;
    }
    if ((char)bVar3 < '\0') {
      if (sVar1 != 0) {
        iVar5 = _memcmp(puVar2,pppppppbVar9,sVar1);
        bVar4 = iVar5 == 0;
        goto joined_r0x00010020c700;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*(byte *)pppppppbVar9 == ((uint)pvVar7 & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x41);
        do {
          uVar6 = uVar6 - 1;
          pppppppbVar9 = (byte *******)((long)pppppppbVar9 + 1);
          bVar4 = uVar6 == 0;
          if (uVar6 == 0) break;
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 == *(byte *)pppppppbVar9);
      }
      else {
        bVar4 = false;
      }
      goto joined_r0x00010020c700;
    }
    bVar4 = true;
  }
joined_r0x00010020c700:
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  if (bVar4) {
    FUN_10020c2b8(param_1);
  }
  else {
    std::string::operator=((string *)(param_1 + 0x88),(string *)&DAT_101d91198);
  }
  return;
}




void FUN_10020c758(string *param_1,long param_2)

{
  void *local_38 [2];
  char local_21;
  
  std::operator+("#",(string *)(param_2 + 0x88));
  std::string::string(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10020c7ac(long param_1)

{
  FUN_10020c614(param_1 + -0x28);
  return;
}




void FUN_10020c7b4(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  
  if (*(char *)(param_1 + 0xa1) != '\0') {
    bVar4 = *(byte *)(param_1 + 0x87);
    uVar7 = (ulong)bVar4;
    sVar1 = *(size_t *)(param_1 + 0x78);
    if (-1 < (char)bVar4) {
      sVar1 = uVar7;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar10 = *(void **)(param_1 + 0x70);
      puVar3 = pvVar10;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(param_1 + 0x70);
      }
      pbVar9 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar9 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar9,sVar1), iVar5 == 0)) goto LAB_10020c878;
      }
      else {
        if (sVar1 == 0) {
LAB_10020c878:
          uVar6 = FUN_10015d3ec();
          FUN_1001670f4(uVar6,param_1 + 0x40);
          return;
        }
        if ((uint)*pbVar9 == ((uint)pvVar10 & 0xff)) {
          pbVar8 = (byte *)(param_1 + 0x71);
          do {
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            if (uVar7 == 0) goto LAB_10020c878;
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar4 == *pbVar9);
        }
      }
    }
  }
  return;
}




void FUN_10020c88c(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  
  if (*(char *)(param_1 + 0xa2) != '\0') {
    bVar4 = *(byte *)(param_1 + 0x9f);
    uVar7 = (ulong)bVar4;
    sVar1 = *(size_t *)(param_1 + 0x90);
    if (-1 < (char)bVar4) {
      sVar1 = uVar7;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar10 = *(void **)(param_1 + 0x88);
      puVar3 = pvVar10;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(param_1 + 0x88);
      }
      pbVar9 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar9 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar9,sVar1), iVar5 == 0)) goto LAB_10020c950;
      }
      else {
        if (sVar1 == 0) {
LAB_10020c950:
          uVar6 = FUN_10015d3ec();
          FUN_100167940(uVar6,param_1 + 0x40);
          return;
        }
        if ((uint)*pbVar9 == ((uint)pvVar10 & 0xff)) {
          pbVar8 = (byte *)(param_1 + 0x89);
          do {
            uVar7 = uVar7 - 1;
            pbVar9 = pbVar9 + 1;
            if (uVar7 == 0) goto LAB_10020c950;
            bVar4 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar4 == *pbVar9);
        }
      }
    }
  }
  return;
}




void FUN_10020c964(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  void *local_18;
  
  FUN_1004e3170(auStack_20,param_1 + 0x58);
  FUN_100111870(auStack_20);
  if (local_18 != (void *)0x0) {
    operator_delete__(local_18);
  }
  uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  FUN_1001e55b0(0x40200000,uVar1,0,1);
  return;
}




long FUN_10020c9bc(long param_1,long param_2)

{
  undefined2 uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  lVar3 = thunk_FUN_1004e439c();
  thunk_FUN_1004e439c(lVar3 + 0x10,param_2 + 0x10);
  FUN_10003330c(param_1 + 0x20,param_2 + 0x20);
  FUN_10003330c(param_1 + 0x38,param_2 + 0x38);
  FUN_10003330c(param_1 + 0x50,param_2 + 0x50);
  puVar5 = (undefined8 *)(param_1 + 0x70);
  *puVar5 = 0;
  *(undefined8 *)(param_1 + 0x68) = puVar5;
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar6 = *(long **)(param_2 + 0x68);
  while (plVar6 != (long *)(param_2 + 0x70)) {
    FUN_10020cabc((undefined8 *)(param_1 + 0x68),puVar5,plVar6 + 4,plVar6 + 4);
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar4 = plVar6 + 2;
      bVar2 = *(long **)*plVar4 != plVar6;
      plVar6 = (long *)*plVar4;
      if (bVar2) {
        do {
          lVar3 = *plVar4;
          plVar4 = (long *)(lVar3 + 0x10);
          plVar6 = (long *)*plVar4;
        } while (*plVar6 != lVar3);
      }
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  uVar1 = *(undefined2 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  *(undefined2 *)(param_1 + 0x80) = uVar1;
  return param_1;
}




undefined1  [16]
FUN_10020cabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_10020cb50(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x60);
    FUN_10003330c((long)pvVar3 + 0x20,param_4);
    FUN_10052b068((long)pvVar3 + 0x38,param_4 + 0x18);
    FUN_10010ca44(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_10020cb50(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 1 != param_2) {
    iVar2 = FUN_10020ccf8(param_5,param_2 + 4);
    if (iVar2 == 0) {
      iVar2 = FUN_10020ccf8(param_2 + 4,param_5);
      if (iVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (iVar2 = FUN_10020ccf8(param_5,plVar5 + 4), iVar2 != 0)) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_10020ccb0;
    }
  }
  plVar5 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar1 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
        } while (*(long *)*plVar3 == lVar4);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    iVar2 = FUN_10020ccf8(plVar3 + 4,param_5);
    if (iVar2 == 0) {
LAB_10020ccb0:
      plVar3 = (long *)FUN_1000be7f0(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




uint FUN_10020ccf8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10020cd68;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10020cd68:
  return uVar8 >> 0x1f;
}




void thunk_FUN_10020b280(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  int extraout_w8;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  piVar7 = (int *)FUN_10010a804();
  iVar6 = extraout_w8;
  if ((piVar7 == (int *)0x0) || (iVar6 = *piVar7, iVar6 != 0)) {
    uVar8 = (ulong)(iVar6 - 1);
    lVar10 = *(long *)(piVar7 + 2);
    lVar15 = lVar10 + uVar8 * 0x88;
    if (*(char *)(lVar15 + 0x82) == '\0') {
      FUN_1004e3170(auStack_40,param_1 + 0x58);
      iVar6 = FUN_1004e3654(lVar15,auStack_40);
      if (pvStack_38 != (void *)0x0) {
        operator_delete__(pvStack_38);
      }
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      lVar13 = lVar10 + uVar8 * 0x88;
      bVar4 = *(byte *)(lVar13 + 0x37);
      uVar12 = (ulong)bVar4;
      sVar1 = *(size_t *)(lVar13 + 0x28);
      if (-1 < (char)bVar4) {
        sVar1 = uVar12;
      }
      bVar5 = *(byte *)(param_1 + 0x57);
      sVar2 = *(size_t *)(param_1 + 0x48);
      if (-1 < (char)bVar5) {
        sVar2 = (ulong)bVar5;
      }
      if (sVar1 != sVar2) {
        return;
      }
      pvVar14 = *(void **)(lVar13 + 0x20);
      puVar3 = pvVar14;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar13 + 0x20);
      }
      pbVar11 = *(byte **)(param_1 + 0x40);
      if (-1 < (char)bVar5) {
        pbVar11 = (byte *)(param_1 + 0x40);
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar11,sVar1), iVar6 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar11 != ((uint)pvVar14 & 0xff)) {
          return;
        }
        pbVar9 = (byte *)(lVar10 + uVar8 * 0x88 + 0x21);
        while( true ) {
          uVar12 = uVar12 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar12 == 0) break;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          if (bVar4 != *pbVar11) {
            return;
          }
        }
      }
    }
    FUN_10020b0e8(param_1,lVar15);
  }
  return;
}




void FUN_10020cd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10001549c(local_58);
  lVar1 = FUN_10010ae48(param_1,local_58);
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_10020b3c0;
  local_40 = param_3;
  local_30 = param_3;
  FUN_1000be5e4(lVar1 + 0x10,&local_40);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void thunk_FUN_10020b3c0(void)

{
  FUN_10020b3c0();
  return;
}




void FUN_10020cde8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10001549c(local_58);
  lVar1 = FUN_10010ae48(param_1,local_58);
  local_40 = 0;
  pcStack_28 = thunk_FUN_10020b41c;
  uStack_38 = param_3;
  local_30 = param_3;
  FUN_10020ce50(lVar1 + 0x20,&local_40);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_10020ce50(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10020ced4(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_10020b41c(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 **ppuStack_68;
  void *pvStack_60;
  char cStack_51;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  thunk_FUN_1004e439c(auStack_40,&DAT_101d91650);
  if (*(char *)(param_2 + 0x30) == '\0') {
    if (*(char *)(param_2 + 0x31) == '\0') goto LAB_10020b480;
    pcVar3 = "MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE";
  }
  else {
    pcVar3 = "MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE";
  }
  uVar4 = FUN_1004e0150(pcVar3,0);
  FUN_1000153b4(auStack_40,uVar4);
LAB_10020b480:
  FUN_1004e3170(auStack_50,param_2);
  FUN_1004e3120(&ppuStack_68,"[PLAYER_HANDLE]");
  FUN_1004e3bc4(auStack_40,0,&ppuStack_68,auStack_50);
  if (pvStack_60 != (void *)0x0) {
    operator_delete__(pvStack_60);
  }
  FUN_10003330c(&ppuStack_68,&DAT_101d91198);
  FUN_1004e357c(auStack_40,&ppuStack_68);
  pppuVar1 = (undefined8 ***)ppuStack_68;
  if (-1 < cStack_51) {
    pppuVar1 = &ppuStack_68;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  if (-1 < *(char *)(param_2 + 0x2f)) {
    puVar2 = (undefined8 *)(param_2 + 0x18);
  }
  FUN_1002de328(*(undefined8 *)(param_1 + 8),pppuVar1,puVar2);
  if (cStack_51 < '\0') {
    operator_delete(ppuStack_68);
  }
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  return;
}




void FUN_10020ced4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10020cf50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10001549c(local_58);
  lVar1 = FUN_10010ae48(param_1,local_58);
  local_40 = 0;
  pcStack_28 = thunk_FUN_10020b41c;
  uStack_38 = param_3;
  local_30 = param_3;
  FUN_10020ce50(lVar1 + 0x30,&local_40);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




undefined8 * FUN_10020cfb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  operator_new(0x3cf8);
  lVar1 = thunk_FUN_1002e0920();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[1] = lVar1;
  param_1[2] = &DAT_101471ee0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_FUN_101471f38;
  param_1[4] = 0;
  FUN_1004f0a20(param_1 + 5);
  FUN_10014f4a0(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  *puVar3 = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  thunk_FUN_100016500(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_1001e7abc(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1c);
  FUN_10003330c(param_1 + 0x1e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x21,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  *(undefined4 *)((long)param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1001116f8(puVar3);
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1004e3120(auStack_40,"REQUESTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1004e3120(auStack_40,"RECENTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1004e3120(auStack_40,"TEAM");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1004e3120(auStack_40,"GUILD");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"ONLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"OFFLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar2 = FUN_1002e1420(param_1[1],"TEAM");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"GUILD");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"ONLINE_FRIENDS");
  FUN_1001d9594(uVar2,1);
  return param_1;
}




undefined8 * thunk_FUN_10020cfb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  operator_new(0x3cf8);
  lVar1 = thunk_FUN_1002e0920();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[1] = lVar1;
  param_1[2] = &DAT_101471ee0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_FUN_101471f38;
  param_1[4] = 0;
  FUN_1004f0a20(param_1 + 5);
  FUN_10014f4a0(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  *puVar3 = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  thunk_FUN_100016500(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_1001e7abc(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1c);
  FUN_10003330c(param_1 + 0x1e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x21,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  *(undefined4 *)((long)param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1001116f8(puVar3);
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1004e3120(auStack_40,"REQUESTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1004e3120(auStack_40,"RECENTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1004e3120(auStack_40,"TEAM");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1004e3120(auStack_40,"GUILD");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"ONLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"OFFLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar2 = FUN_1002e1420(param_1[1],"TEAM");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"GUILD");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"ONLINE_FRIENDS");
  FUN_1001d9594(uVar2,1);
  return param_1;
}




undefined8 * FUN_10020d2d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  param_1[3] = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  FUN_100111728();
  FUN_10020d43c(param_1,0);
  FUN_10020d634(param_1,0);
  FUN_10010a874(param_1);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    operator_delete((void *)param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    operator_delete((void *)param_1[0x1e]);
  }
  if ((void *)param_1[0x1d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1d]);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  FUN_1001e7b3c(param_1 + 0x1b);
  FUN_1002105cc(param_1 + 0x18,param_1[0x19]);
  thunk_FUN_10001653c(param_1 + 0x14);
  FUN_1001107e4(param_1 + 0x12,1);
  FUN_100110778(param_1 + 0x10,1);
  FUN_100110778(param_1 + 0xe,1);
  param_1[0xb] = &PTR_FUN_10146c930;
  FUN_1001f3bd4(param_1 + 0xc,1);
  FUN_10014f51c(param_1 + 8);
  FUN_1004f0a9c(param_1 + 5);
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined4 FUN_10020d43c(long param_1,uint param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  undefined8 ******local_48 [2];
  char local_31;
  
  if (*(byte *)(param_1 + 0x15d) == param_2) {
    return 0;
  }
  bVar5 = *(byte *)(param_1 + 0x157);
  uVar8 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0x148);
  if (-1 < (char)bVar5) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(param_1 + 0x140);
    puVar3 = pvVar11;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(param_1 + 0x140);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar1 == 0) {
        return 0;
      }
      iVar6 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar6 == 0) {
        return 0;
      }
    }
    else {
      if (sVar1 == 0) {
        return 0;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x141);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return 0;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  if (param_2 == 0) {
    FUN_10020fb84(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    FUN_10010a820(pppppppuVar4,param_1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_10020fb84(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    lVar7 = FUN_10010a4f8(pppppppuVar4);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (lVar7 == 0) goto LAB_10020d618;
    FUN_10020fb84(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    FUN_10010a560(pppppppuVar4);
  }
  else {
    FUN_10020fb84(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    FUN_10010a548(pppppppuVar4);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_10020fb84(local_48,param_1);
    if (DAT_101d230a8 != 0) {
      pppppppuVar4 = (undefined8 *******)local_48[0];
      if (-1 < local_31) {
        pppppppuVar4 = local_48;
      }
      FUN_100210ab4(DAT_101d230a8,pppppppuVar4,param_1);
    }
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
LAB_10020d618:
  *(char *)(param_1 + 0x15d) = (char)param_2;
  return 1;
}




undefined4 FUN_10020d634(long param_1,uint param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  undefined8 ******local_48 [2];
  char local_31;
  
  if (*(byte *)(param_1 + 0x15e) == param_2) {
    return 0;
  }
  bVar5 = *(byte *)(param_1 + 0x13f);
  uVar8 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0x130);
  if (-1 < (char)bVar5) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(param_1 + 0x128);
    puVar3 = pvVar11;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(param_1 + 0x128);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar1 == 0) {
        return 0;
      }
      iVar6 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar6 == 0) {
        return 0;
      }
    }
    else {
      if (sVar1 == 0) {
        return 0;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x129);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return 0;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  if (param_2 == 0) {
    FUN_10020fbcc(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    FUN_10010a820(pppppppuVar4,param_1);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_10020fbcc(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    lVar7 = FUN_10010a4f8(pppppppuVar4);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if (lVar7 == 0) goto LAB_10020d810;
    FUN_10020fbcc(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    FUN_10010a560(pppppppuVar4);
  }
  else {
    FUN_10020fbcc(local_48,param_1);
    pppppppuVar4 = (undefined8 *******)local_48[0];
    if (-1 < local_31) {
      pppppppuVar4 = local_48;
    }
    FUN_10010a548(pppppppuVar4);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    FUN_10020fbcc(local_48,param_1);
    if (DAT_101d230a8 != 0) {
      pppppppuVar4 = (undefined8 *******)local_48[0];
      if (-1 < local_31) {
        pppppppuVar4 = local_48;
      }
      FUN_100210a48(DAT_101d230a8,pppppppuVar4,param_1);
    }
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
LAB_10020d810:
  *(char *)(param_1 + 0x15e) = (char)param_2;
  return 1;
}




void thunk_FUN_10020d2d8(void)

{
  FUN_10020d2d8();
  return;
}




void FUN_10020d830(long param_1)

{
  FUN_10020d2d8(param_1 + -0x18);
  return;
}




void FUN_10020d838(long param_1)

{
  FUN_10020d2d8(param_1 + -0x28);
  return;
}




void FUN_10020d840(long param_1)

{
  FUN_10020d2d8(param_1 + -0x40);
  return;
}




void FUN_10020d848(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020d2d8();
  operator_delete(pvVar1);
  return;
}




void FUN_10020d85c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020d2d8(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10020d874(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020d2d8(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10020d88c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10020d2d8(param_1 + -0x40);
  operator_delete(pvVar1);
  return;
}




void FUN_10020d8a4(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0x15c) = 1;
  (**(code **)(*param_1 + 0x70))();
  FUN_1001117e4(1);
  FUN_1000165f0(param_1 + 0x14,0);
  return;
}




void FUN_10020d8e4(long param_1)

{
  *(undefined1 *)(param_1 + 0x14c) = 1;
  (**(code **)(*(long *)(param_1 + -0x10) + 0x70))((long *)(param_1 + -0x10));
  FUN_1001117e4(1);
  FUN_1000165f0(param_1 + 0x90,0);
  return;
}




void FUN_10020d928(long param_1)

{
  *(undefined1 *)(param_1 + 0x15c) = 0;
  FUN_1002e2948(*(undefined8 *)(param_1 + 8));
  FUN_1001117e4(0);
  return;
}




void FUN_10020d948(long param_1)

{
  *(undefined1 *)(param_1 + 0x14c) = 0;
  FUN_1002e2948(*(undefined8 *)(param_1 + -8));
  FUN_1001117e4(0);
  return;
}




undefined1 FUN_10020d968(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15c);
}




void FUN_10020d970(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_10020d980(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}




void FUN_10020d990(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xb7) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_1001c3fc8(param_2,plVar1);
  return;
}




void FUN_10020d9ac(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x90);
  if (*(char *)(param_1 + 0xa7) < '\0') {
    plVar1 = (long *)*plVar1;
  }
  FUN_1001c3fc8(param_2,plVar1);
  return;
}




void FUN_10020d9c8(long param_1,string *param_2,string *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  string *this;
  long lVar1;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  
  std::operator+("#",param_2);
  std::string::string((string *)local_68,(string *)local_80);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  this = (string *)(param_1 + 0xf0);
  std::string::operator=(this,param_2);
  std::string::operator=((string *)(param_1 + 0x108),param_3);
  *(char *)(param_1 + 0x120) = (char)param_6;
  if ((int)param_6 != 0) {
    std::string::operator=(this,(string *)local_68);
  }
  lVar1 = FUN_10021061c(param_1 + 0xc0,this);
  if (param_1 + 200 != lVar1) {
    FUN_10021071c(param_1 + 0xc0,lVar1);
  }
  FUN_1002e159c(*(undefined8 *)(param_1 + 8),1);
  FUN_10020a82c(*(long *)(param_1 + 8) + 0x39c0,param_2,(string *)(param_1 + 0x108),param_4,param_5,
                param_6);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  return;
}




void FUN_10020dae0(long param_1)

{
  std::string::operator=((string *)(param_1 + 0xf0),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x108),(string *)&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x120) = 0;
  return;
}




void FUN_10020db28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_INPUT_CAPTION",0);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_INPUT_MESSAGE",0);
  FUN_1001e7ca4(param_1 + 0xd8,uVar1,uVar2,&DAT_101d91650,0,0,0,0,param_1,thunk_FUN_10020dbd0,
                FUN_10020dbc4,param_1 + 0xe0);
  return;
}




void thunk_FUN_10020dbd0(void)

{
  FUN_10020dbd0();
  return;
}




void FUN_10020dbc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000153b4(param_1 + 0xe0,param_3);
  return;
}




void FUN_10020dbd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      iVar1 = FUN_1004e3654(param_3,*(long *)(param_1 + 0x78) + lVar6 + -0x8c);
      if ((iVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x78) + lVar6) == 3)) {
        uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x70));
  }
  FUN_100111870(param_3);
  FUN_1000153b4(param_1 + 0xe0,param_3);
  return;
}




void FUN_10020dcb0(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong local_40;
  void *local_38;
  
  iVar3 = FUN_10020de20();
  if (iVar3 != 0) {
    puVar1 = (uint *)(param_1 + 0x70);
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 != 0) {
      if (*puVar1 != 0) {
        lVar9 = (ulong)*puVar1 * 0x188;
        do {
          lVar6 = FUN_100111a80(lVar6);
          lVar6 = lVar6 + 0x188;
          lVar9 = lVar9 + -0x188;
        } while (lVar9 != 0);
      }
      *puVar1 = 0;
    }
    puVar2 = (uint *)(param_1 + 0x80);
    lVar6 = *(long *)(param_1 + 0x88);
    if (lVar6 != 0) {
      if (*puVar2 != 0) {
        lVar9 = (ulong)*puVar2 * 0x188;
        do {
          lVar6 = FUN_100111a80(lVar6);
          lVar6 = lVar6 + 0x188;
          lVar9 = lVar9 + -0x188;
        } while (lVar9 != 0);
      }
      *puVar2 = 0;
    }
    uVar4 = FUN_100111818();
    *(undefined4 *)(param_1 + 0x158) = uVar4;
    iVar3 = FUN_100111828();
    if (iVar3 != 0) {
      local_40 = 0;
      local_38 = (void *)0x0;
      uVar7 = FUN_100111828();
      FUN_10020df00(&local_40,uVar7,0);
      iVar3 = FUN_100111828();
      if (iVar3 != 0) {
        uVar11 = 0;
        do {
          uVar7 = FUN_100111838(uVar11);
          *(undefined8 *)((long)local_38 + uVar11 * 8) = uVar7;
          uVar11 = uVar11 + 1;
          uVar8 = FUN_100111828();
        } while (uVar11 < (uVar8 & 0xffffffff));
      }
      _qsort(local_38,local_40 & 0xffffffff,8,(int *)FUN_100111120);
      if ((int)local_40 != 0) {
        uVar11 = 0;
        do {
          FUN_100110e8c(puVar1,*(undefined8 *)((long)local_38 + uVar11 * 8));
          uVar11 = uVar11 + 1;
        } while (uVar11 < (local_40 & 0xffffffff));
      }
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
    }
    iVar3 = FUN_1001118b0();
    if (iVar3 != 0) {
      uVar10 = 0;
      do {
        uVar7 = FUN_1001118c0(uVar10);
        FUN_100110e8c(puVar2,uVar7);
        uVar10 = uVar10 + 1;
        uVar5 = FUN_1001118b0();
      } while (uVar10 < uVar5);
    }
    FUN_10020df80(param_1);
  }
  return;
}




undefined8 FUN_10020de20(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  iVar2 = *(int *)(param_1 + 0x70);
  iVar3 = FUN_100111828();
  if ((iVar2 == iVar3) &&
     (iVar2 = *(int *)(param_1 + 0x80), iVar3 = FUN_1001118b0(), iVar2 == iVar3)) {
    if (*(int *)(param_1 + 0x70) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x78) + lVar7;
        lVar4 = FUN_100111860(lVar1 + 8);
        if ((lVar4 == 0) || (uVar5 = FUN_100111908(lVar4,lVar1), (uVar5 & 1) == 0))
        goto LAB_10020dee4;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x188;
      } while (uVar8 < *(uint *)(param_1 + 0x70));
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar6 = 0;
    }
    else {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x88) + lVar7;
        lVar4 = FUN_1001118d8(lVar1 + 8);
        if ((lVar4 == 0) || (uVar5 = FUN_100111908(lVar4,lVar1), (uVar5 & 1) == 0))
        goto LAB_10020dee4;
        uVar6 = 0;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x188;
      } while (uVar8 < *(uint *)(param_1 + 0x80));
    }
  }
  else {
LAB_10020dee4:
    uVar6 = 1;
  }
  return uVar6;
}




void FUN_10020df00(uint *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)param_2;
  if (uVar1 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar1) {
      FUN_1002107c0(param_1,param_2);
    }
    uVar2 = (ulong)*param_1;
    if (*param_1 < uVar1) {
      do {
        *(undefined8 *)(*(long *)(param_1 + 2) + uVar2 * 8) = param_3;
        uVar2 = uVar2 + 1;
      } while ((param_2 & 0xffffffff) != uVar2);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_10020efe4(long param_1)

{
  FUN_10020dcb0(param_1 + -0x18);
  return;
}




void FUN_10020efec(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  FUN_1001107e4(param_1 + 0x90,0);
  iVar1 = FUN_100111914();
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = FUN_100111924(uVar4);
      FUN_10020f054(param_1 + 0x90,uVar3);
      uVar4 = uVar4 + 1;
      uVar2 = FUN_100111914();
    } while (uVar4 < uVar2);
  }
  FUN_10020df80(param_1);
  return;
}




void FUN_10020f054(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10021083c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x38;
  *(undefined4 *)(lVar5 + -0x38) = *param_2;
  FUN_10003330c(lVar5 + -0x30,param_2 + 2);
  thunk_FUN_1004e439c(lVar5 + -0x18,param_2 + 8);
  uVar3 = param_2[0xc];
  *(undefined2 *)(lVar5 + -4) = *(undefined2 *)(param_2 + 0xd);
  *(undefined4 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_10020f100(long param_1)

{
  FUN_10020efec(param_1 + -0x18);
  return;
}




void FUN_10020f108(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_1004f1680(param_2);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
    thunk_FUN_1004e439c(auStack_40,uVar3);
    FUN_1004e3120(auStack_50,"[NAME]");
    FUN_1004e3bc4(auStack_40,0,auStack_50,param_1 + 0xe0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1001e55b0(0x40200000,auStack_40,0,1);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  if ((*(int *)(param_2 + 0x40) == 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    pcVar4 = "MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO";
  }
  else {
    bVar7 = *(byte *)(param_2 + 0x5f);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 0x50);
    uVar2 = uVar6;
    if (-1 < (char)bVar7) {
      uVar2 = uVar5;
    }
    if (uVar2 == 0x10) {
      iVar1 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e51ed);
      if (iVar1 == 0) {
        pcVar4 = "MENU_FRIENDS_THEIR_LIST_FULL";
        goto LAB_10020f2bc;
      }
      bVar7 = *(byte *)(param_2 + 0x5f);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar7) {
      uVar6 = uVar5;
    }
    if ((uVar6 != 0x13) ||
       (iVar1 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e521b),
       iVar1 != 0)) {
      uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
      thunk_FUN_1004e439c(auStack_40,uVar3);
      FUN_1004e3120(auStack_50,"[NAME]");
      FUN_1004e3bc4(auStack_40,0,auStack_50,param_1 + 0xe0);
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      FUN_1001e55b0(0x40200000,auStack_40,0,1);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
      goto LAB_10020f2d4;
    }
    pcVar4 = "MENU_FRIENDS_YOUR_LIST_FULL";
  }
LAB_10020f2bc:
  uVar3 = FUN_1004e0150(pcVar4,0);
  FUN_1001e55b0(0x40200000,uVar3,0,1);
LAB_10020f2d4:
  FUN_1000153b4(param_1 + 0xe0,&DAT_101d91650);
  return;
}




void FUN_10020f2f8(long param_1)

{
  FUN_10020f108(param_1 + -0x18);
  return;
}




void FUN_10020f300(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  
  bVar7 = *(byte *)(param_2 + 0x5f);
  uVar5 = (ulong)bVar7;
  uVar6 = *(ulong *)(param_2 + 0x50);
  uVar1 = uVar6;
  if (-1 < (char)bVar7) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0x10) {
    iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e51ed);
    if (iVar2 == 0) {
      pcVar3 = "MENU_FRIENDS_THEIR_LIST_FULL";
      goto LAB_10020f3b0;
    }
    bVar7 = *(byte *)(param_2 + 0x5f);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 0x50);
  }
  if (-1 < (char)bVar7) {
    uVar6 = uVar5;
  }
  if ((uVar6 != 0x13) ||
     (iVar2 = std::string::compare(param_2 + 0x48U,0,(char *)0xffffffffffffffff,0x1013e521b),
     iVar2 != 0)) {
    return;
  }
  pcVar3 = "MENU_FRIENDS_YOUR_LIST_FULL";
LAB_10020f3b0:
  uVar4 = FUN_1004e0150(pcVar3,0);
  FUN_1001e55b0(0x40200000,uVar4,0,1);
  return;
}




void thunk_FUN_10020f300(void)

{
  FUN_10020f300();
  return;
}




void FUN_10020f3d4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10020f440(param_1,param_2 + 0xb0);
  FUN_10020f560(param_1,param_2 + 200);
  if (DAT_101d230a8 != 0) {
    lVar1 = FUN_10010c704();
    uStack_38 = 0;
    pcStack_28 = thunk_FUN_10020ff34;
    local_40 = param_1;
    local_30 = param_1;
    FUN_1000be5e4(lVar1 + 0x10,&local_40);
  }
  return;
}




void FUN_10020f440(long param_1,string *param_2)

{
  size_t sVar1;
  size_t sVar2;
  string sVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  string *psVar9;
  string *psVar10;
  
  bVar4 = *(byte *)(param_1 + 0x13f);
  uVar7 = (ulong)bVar4;
  uVar8 = uVar7;
  if ((char)bVar4 < '\0') {
    uVar8 = *(ulong *)(param_1 + 0x130);
  }
  if (uVar8 == 0) {
    uVar8 = *(ulong *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      uVar8 = (ulong)(byte)param_2[0x17];
    }
    if (uVar8 == 0) {
      return;
    }
  }
  else {
    sVar3 = param_2[0x17];
    sVar1 = *(size_t *)(param_2 + 8);
    if (-1 < (char)sVar3) {
      sVar1 = (ulong)(byte)sVar3;
    }
    if (sVar1 == 0) {
      FUN_10020f718(param_1);
      return;
    }
    sVar2 = *(size_t *)(param_1 + 0x130);
    if (-1 < (char)bVar4) {
      sVar2 = uVar7;
    }
    if (sVar2 == sVar1) {
      pvVar6 = *(void **)(param_1 + 0x128);
      psVar10 = *(string **)param_2;
      if (-1 < (char)sVar3) {
        psVar10 = param_2;
      }
      if ((char)bVar4 < '\0') {
        iVar5 = _memcmp(pvVar6,psVar10,sVar1);
        if (iVar5 == 0) {
          return;
        }
      }
      else if ((uint)(byte)*psVar10 == ((uint)pvVar6 & 0xff)) {
        psVar9 = (string *)(param_1 + 0x129);
        do {
          uVar7 = uVar7 - 1;
          psVar10 = psVar10 + 1;
          if (uVar7 == 0) {
            return;
          }
          sVar3 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar3 == *psVar10);
      }
    }
    FUN_10020f718(param_1);
  }
  std::string::operator=((string *)(param_1 + 0x128),param_2);
  FUN_10020d634(param_1,1);
  return;
}




void FUN_10020f560(long param_1,string *param_2)

{
  size_t sVar1;
  size_t sVar2;
  string sVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  string *psVar9;
  string *psVar10;
  
  bVar4 = *(byte *)(param_1 + 0x157);
  uVar7 = (ulong)bVar4;
  uVar8 = uVar7;
  if ((char)bVar4 < '\0') {
    uVar8 = *(ulong *)(param_1 + 0x148);
  }
  if (uVar8 == 0) {
    uVar8 = *(ulong *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      uVar8 = (ulong)(byte)param_2[0x17];
    }
    if (uVar8 == 0) {
      return;
    }
  }
  else {
    sVar3 = param_2[0x17];
    sVar1 = *(size_t *)(param_2 + 8);
    if (-1 < (char)sVar3) {
      sVar1 = (ulong)(byte)sVar3;
    }
    if (sVar1 == 0) {
      FUN_10020f6b4(param_1);
      return;
    }
    sVar2 = *(size_t *)(param_1 + 0x148);
    if (-1 < (char)bVar4) {
      sVar2 = uVar7;
    }
    if (sVar2 == sVar1) {
      pvVar6 = *(void **)(param_1 + 0x140);
      psVar10 = *(string **)param_2;
      if (-1 < (char)sVar3) {
        psVar10 = param_2;
      }
      if ((char)bVar4 < '\0') {
        iVar5 = _memcmp(pvVar6,psVar10,sVar1);
        if (iVar5 == 0) {
          return;
        }
      }
      else if ((uint)(byte)*psVar10 == ((uint)pvVar6 & 0xff)) {
        psVar9 = (string *)(param_1 + 0x141);
        do {
          uVar7 = uVar7 - 1;
          psVar10 = psVar10 + 1;
          if (uVar7 == 0) {
            return;
          }
          sVar3 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar3 == *psVar10);
      }
    }
    FUN_10020f6b4(param_1);
  }
  std::string::operator=((string *)(param_1 + 0x140),param_2);
  FUN_10020d43c(param_1,1);
  return;
}




void FUN_10020f680(long param_1)

{
  FUN_10020f3d4(param_1 + -0x28);
  return;
}




void FUN_10020f688(undefined8 param_1)

{
  FUN_10020f6b4();
  FUN_10020f718(param_1);
  FUN_10010a874(param_1);
  return;
}




void FUN_10020f6b4(long param_1)

{
  if (*(char *)(param_1 + 0x157) < '\0') {
    if (*(long *)(param_1 + 0x148) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x157) == '\0') {
    return;
  }
  FUN_10020d43c(param_1,0);
  if (*(char *)(param_1 + 0x157) < '\0') {
    **(undefined1 **)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x140) = 0;
    *(undefined1 *)(param_1 + 0x157) = 0;
  }
  return;
}




void FUN_10020f718(long param_1)

{
  if (*(char *)(param_1 + 0x13f) < '\0') {
    if (*(long *)(param_1 + 0x130) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x13f) == '\0') {
    return;
  }
  FUN_10020d634(param_1,0);
  if (*(char *)(param_1 + 0x13f) < '\0') {
    **(undefined1 **)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined1 *)(param_1 + 0x13f) = 0;
  }
  return;
}




void FUN_10020f77c(long param_1)

{
  param_1 = param_1 + -0x28;
  FUN_10020f6b4(param_1);
  FUN_10020f718(param_1);
  FUN_10010a874(param_1);
  return;
}




void FUN_10020f7ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  puVar1 = (undefined8 *)(param_1 + 0x128);
  pbVar11 = (byte *)(param_2 + 0x90);
  bVar5 = *(byte *)(param_1 + 0x13f);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x130);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  bVar6 = *(byte *)(param_2 + 0xa7);
  sVar3 = *(size_t *)(param_2 + 0x98);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar10 = *(byte **)pbVar11;
    if (-1 < (char)bVar6) {
      pbVar10 = pbVar11;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(puVar4,pbVar10,sVar2), iVar7 == 0)) goto LAB_10020f914;
    }
    else {
      if (sVar2 == 0) goto LAB_10020f914;
      if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x129);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_10020f914;
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  FUN_10020f440(param_1,pbVar11);
  bVar5 = *(byte *)(param_1 + 0x13f);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x130);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(puVar4,pbVar11,sVar2), iVar7 == 0)) goto LAB_10020f914;
    }
    else {
      if (sVar2 == 0) goto LAB_10020f914;
      if ((uint)*pbVar11 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x129);
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar8 == 0) goto LAB_10020f914;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
    }
  }
  FUN_10020df80(param_1);
LAB_10020f914:
  puVar1 = (undefined8 *)(param_1 + 0x140);
  pbVar11 = (byte *)(param_2 + 200);
  bVar5 = *(byte *)(param_1 + 0x157);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x148);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  bVar6 = *(byte *)(param_2 + 0xdf);
  sVar3 = *(size_t *)(param_2 + 0xd0);
  if (-1 < (char)bVar6) {
    sVar3 = (ulong)bVar6;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar10 = *(byte **)pbVar11;
    if (-1 < (char)bVar6) {
      pbVar10 = pbVar11;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar10,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x141);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  FUN_10020f560(param_1,pbVar11);
  bVar5 = *(byte *)(param_1 + 0x157);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x148);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar11,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar11 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x141);
        do {
          uVar8 = uVar8 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
    }
  }
  FUN_10020df80(param_1);
  return;
}




void FUN_10020fa7c(long param_1)

{
  FUN_10020f7ac(param_1 + -0x40);
  return;
}




void FUN_10020fa84(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_10020f718(param_1);
    lVar2 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
    if (lVar2 != 0) {
      uVar3 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"GUILD");
      FUN_1001d9594(uVar3,0);
    }
    FUN_10020df80(param_1);
    return;
  }
  return;
}




void FUN_10020fafc(long param_1)

{
  FUN_10020fa84(param_1 + -0x40);
  return;
}




void FUN_10020fb04(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
    if (lVar2 != 0) {
      uVar3 = FUN_1002e1420(*(undefined8 *)(param_1 + 8),"TEAM");
      FUN_1001d9594(uVar3,0);
    }
    FUN_10020f6b4(param_1);
    FUN_10020df80(param_1);
    return;
  }
  return;
}




void FUN_10020fb7c(long param_1)

{
  FUN_10020fb04(param_1 + -0x40);
  return;
}




void FUN_10020fb84(undefined8 param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_10001549c(param_1,"#");
  uVar1 = *(ulong *)(param_2 + 0x140);
  if (-1 < *(char *)(param_2 + 0x157)) {
    uVar1 = param_2 + 0x140;
  }
  std::string::append(pcVar2,uVar1);
  return;
}




void FUN_10020fbcc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_10001549c(param_1,"#");
  uVar1 = *(ulong *)(param_2 + 0x128);
  if (-1 < *(char *)(param_2 + 0x13f)) {
    uVar1 = param_2 + 0x128;
  }
  std::string::append(pcVar2,uVar1);
  return;
}




void FUN_10020fc14(long param_1)

{
  byte *pbVar1;
  undefined8 *****pppppuVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  int extraout_w8;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  void *pvVar14;
  byte *pbVar15;
  undefined8 ****local_38 [2];
  char local_21;
  
  if (*(char *)(param_1 + 0x13f) < '\0') {
    if (*(long *)(param_1 + 0x130) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x13f) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_100016598(param_1 + 0xa0,1);
  }
  FUN_10020fbcc(local_38,param_1);
  pppppuVar2 = (undefined8 *****)local_38[0];
  if (-1 < local_21) {
    pppppuVar2 = local_38;
  }
  piVar9 = (int *)FUN_10010a7ec(pppppuVar2);
  iVar8 = (int)local_21;
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
    iVar8 = extraout_w8;
  }
  if ((piVar9 != (int *)0x0) && (iVar8 = *piVar9, iVar8 == 0)) {
    return;
  }
  lVar13 = *(long *)(piVar9 + 2) + (ulong)(iVar8 - 1) * 0x88;
  pbVar1 = (byte *)(lVar13 + 0x38);
  bVar6 = *(byte *)(param_1 + 0x107);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0xf8);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  bVar7 = *(byte *)(lVar13 + 0x4f);
  sVar4 = *(size_t *)(lVar13 + 0x40);
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar3 == sVar4) {
    pvVar14 = *(void **)(param_1 + 0xf0);
    puVar5 = pvVar14;
    if (-1 < (char)bVar6) {
      puVar5 = (undefined8 *)(param_1 + 0xf0);
    }
    pbVar15 = *(byte **)pbVar1;
    if (-1 < (char)bVar7) {
      pbVar15 = pbVar1;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar8 = _memcmp(puVar5,pbVar15,sVar3);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar15 == ((uint)pvVar14 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0xf1);
        do {
          uVar11 = uVar11 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar11 == 0) {
            return;
          }
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  puVar10 = (undefined1 *)FUN_10020fd74(param_1 + 0xc0,pbVar1);
  *puVar10 = 1;
  return;
}




long FUN_10020fd74(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_100210950(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined1 *)((long)pvVar2 + 0x38) = 0;
    FUN_1002109f4(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_10020fdf0(long param_1)

{
  byte *pbVar1;
  undefined8 *****pppppuVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  int extraout_w8;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  void *pvVar14;
  byte *pbVar15;
  undefined8 ****local_38 [2];
  char local_21;
  
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_100016598(param_1 + 0xa0,1);
  }
  FUN_10020fb84(local_38,param_1);
  pppppuVar2 = (undefined8 *****)local_38[0];
  if (-1 < local_21) {
    pppppuVar2 = local_38;
  }
  piVar9 = (int *)FUN_10010a7ec(pppppuVar2);
  iVar8 = (int)local_21;
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
    iVar8 = extraout_w8;
  }
  if ((piVar9 != (int *)0x0) && (iVar8 = *piVar9, iVar8 == 0)) {
    return;
  }
  lVar13 = *(long *)(piVar9 + 2) + (ulong)(iVar8 - 1) * 0x88;
  pbVar1 = (byte *)(lVar13 + 0x38);
  bVar6 = *(byte *)(param_1 + 0x107);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0xf8);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  bVar7 = *(byte *)(lVar13 + 0x4f);
  sVar4 = *(size_t *)(lVar13 + 0x40);
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar3 == sVar4) {
    pvVar14 = *(void **)(param_1 + 0xf0);
    puVar5 = pvVar14;
    if (-1 < (char)bVar6) {
      puVar5 = (undefined8 *)(param_1 + 0xf0);
    }
    pbVar15 = *(byte **)pbVar1;
    if (-1 < (char)bVar7) {
      pbVar15 = pbVar1;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar8 = _memcmp(puVar5,pbVar15,sVar3);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar15 == ((uint)pvVar14 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0xf1);
        do {
          uVar11 = uVar11 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar11 == 0) {
            return;
          }
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  puVar10 = (undefined1 *)FUN_10020fd74(param_1 + 0xc0,pbVar1);
  *puVar10 = 1;
  return;
}




void FUN_10020ff34(long param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  int extraout_w8;
  ulong uVar9;
  void *pvVar10;
  byte *pbVar11;
  byte *******pppppppbVar12;
  uint uVar13;
  long lVar14;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  byte ******local_48;
  size_t local_40;
  byte local_31;
  
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_100016598(param_1 + 0xa0,1);
  }
  piVar5 = (int *)FUN_10010a804();
  iVar4 = extraout_w8;
  if ((piVar5 != (int *)0x0) && (iVar4 = *piVar5, iVar4 == 0)) {
    return;
  }
  lVar14 = *(long *)(piVar5 + 2) + (ulong)(iVar4 - 1) * 0x88;
  FUN_10021010c(param_1,lVar14);
  FUN_10003330c(&local_48,&DAT_101d91198);
  uVar6 = thunk_FUN_100528b58();
  FUN_10001549c(local_60,uVar6);
  lVar7 = FUN_1000be6e4(lVar14 + 0x68,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (lVar14 + 0x70 != lVar7) {
    uVar6 = thunk_FUN_100528b58();
    FUN_10001549c(local_78,uVar6);
    FUN_1000be514(lVar14 + 0x68,local_78);
    uVar6 = FUN_10052b19c();
    FUN_10001549c(local_60,uVar6);
    std::string::operator=((string *)&local_48,(string *)local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
  bVar3 = *(byte *)(param_1 + 0x107);
  uVar9 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 0xf8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar9;
  }
  uVar13 = (uint)(char)local_31;
  if (-1 < (int)uVar13) {
    local_40 = (ulong)local_31;
  }
  if (sVar1 == local_40) {
    pvVar10 = *(void **)(param_1 + 0xf0);
    puVar2 = pvVar10;
    if (-1 < (char)bVar3) {
      puVar2 = (undefined8 *)(param_1 + 0xf0);
    }
    pppppppbVar12 = (byte *******)local_48;
    if (-1 < (int)uVar13) {
      pppppppbVar12 = &local_48;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar4 = _memcmp(puVar2,pppppppbVar12,sVar1), iVar4 == 0))
      goto LAB_1002100ec;
    }
    else {
      if (sVar1 == 0) goto LAB_1002100ec;
      if ((uint)*(byte *)pppppppbVar12 == ((uint)pvVar10 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0xf1);
        do {
          uVar9 = uVar9 - 1;
          pppppppbVar12 = (byte *******)((long)pppppppbVar12 + 1);
          if (uVar9 == 0) goto LAB_1002100ec;
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar3 == *(byte *)pppppppbVar12);
      }
    }
  }
  puVar8 = (undefined1 *)FUN_10020fd74(param_1 + 0xc0,&local_48);
  *puVar8 = 1;
  uVar13 = (uint)local_31;
LAB_1002100ec:
  if ((uVar13 >> 7 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}




void thunk_FUN_10020ff34(void)

{
  FUN_10020ff34();
  return;
}




void thunk_FUN_10020fc14(long param_1)

{
  byte *pbVar1;
  undefined8 *****pppppuVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  int extraout_w8;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  void *pvVar14;
  byte *pbVar15;
  undefined8 ****appppuStack_38 [2];
  char cStack_21;
  
  if (*(char *)(param_1 + 0x13f) < '\0') {
    if (*(long *)(param_1 + 0x130) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x13f) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_100016598(param_1 + 0xa0,1);
  }
  FUN_10020fbcc(appppuStack_38,param_1);
  pppppuVar2 = (undefined8 *****)appppuStack_38[0];
  if (-1 < cStack_21) {
    pppppuVar2 = appppuStack_38;
  }
  piVar9 = (int *)FUN_10010a7ec(pppppuVar2);
  iVar8 = (int)cStack_21;
  if (cStack_21 < '\0') {
    operator_delete(appppuStack_38[0]);
    iVar8 = extraout_w8;
  }
  if ((piVar9 != (int *)0x0) && (iVar8 = *piVar9, iVar8 == 0)) {
    return;
  }
  lVar13 = *(long *)(piVar9 + 2) + (ulong)(iVar8 - 1) * 0x88;
  pbVar1 = (byte *)(lVar13 + 0x38);
  bVar6 = *(byte *)(param_1 + 0x107);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0xf8);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  bVar7 = *(byte *)(lVar13 + 0x4f);
  sVar4 = *(size_t *)(lVar13 + 0x40);
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar3 == sVar4) {
    pvVar14 = *(void **)(param_1 + 0xf0);
    puVar5 = pvVar14;
    if (-1 < (char)bVar6) {
      puVar5 = (undefined8 *)(param_1 + 0xf0);
    }
    pbVar15 = *(byte **)pbVar1;
    if (-1 < (char)bVar7) {
      pbVar15 = pbVar1;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar8 = _memcmp(puVar5,pbVar15,sVar3);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar15 == ((uint)pvVar14 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0xf1);
        do {
          uVar11 = uVar11 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar11 == 0) {
            return;
          }
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  puVar10 = (undefined1 *)FUN_10020fd74(param_1 + 0xc0,pbVar1);
  *puVar10 = 1;
  return;
}




void thunk_FUN_10020fdf0(long param_1)

{
  byte *pbVar1;
  undefined8 *****pppppuVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  int extraout_w8;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  void *pvVar14;
  byte *pbVar15;
  undefined8 ****appppuStack_38 [2];
  char cStack_21;
  
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_100016598(param_1 + 0xa0,1);
  }
  FUN_10020fb84(appppuStack_38,param_1);
  pppppuVar2 = (undefined8 *****)appppuStack_38[0];
  if (-1 < cStack_21) {
    pppppuVar2 = appppuStack_38;
  }
  piVar9 = (int *)FUN_10010a7ec(pppppuVar2);
  iVar8 = (int)cStack_21;
  if (cStack_21 < '\0') {
    operator_delete(appppuStack_38[0]);
    iVar8 = extraout_w8;
  }
  if ((piVar9 != (int *)0x0) && (iVar8 = *piVar9, iVar8 == 0)) {
    return;
  }
  lVar13 = *(long *)(piVar9 + 2) + (ulong)(iVar8 - 1) * 0x88;
  pbVar1 = (byte *)(lVar13 + 0x38);
  bVar6 = *(byte *)(param_1 + 0x107);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0xf8);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  bVar7 = *(byte *)(lVar13 + 0x4f);
  sVar4 = *(size_t *)(lVar13 + 0x40);
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar3 == sVar4) {
    pvVar14 = *(void **)(param_1 + 0xf0);
    puVar5 = pvVar14;
    if (-1 < (char)bVar6) {
      puVar5 = (undefined8 *)(param_1 + 0xf0);
    }
    pbVar15 = *(byte **)pbVar1;
    if (-1 < (char)bVar7) {
      pbVar15 = pbVar1;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar8 = _memcmp(puVar5,pbVar15,sVar3);
      if (iVar8 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar15 == ((uint)pvVar14 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0xf1);
        do {
          uVar11 = uVar11 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar11 == 0) {
            return;
          }
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar15);
      }
    }
  }
  puVar10 = (undefined1 *)FUN_10020fd74(param_1 + 0xc0,pbVar1);
  *puVar10 = 1;
  return;
}

