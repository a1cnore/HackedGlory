// functions/10034 — 489 functions
#include "GameKindred.h"




void thunk_FUN_10034b7b4(void)

{
  FUN_10034b7b4();
  return;
}




void thunk_FUN_1003454ac(void)

{
  FUN_1003454ac();
  return;
}




void thunk_FUN_100340444(void)

{
  FUN_100340444();
  return;
}




void thunk_FUN_100341944(void)

{
  FUN_10015d3ec();
  FUN_100166d54();
  return;
}




void FUN_1003400b4(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  void *pvVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char *local_140;
  char *pcStack_138;
  long local_130;
  void *local_128;
  undefined8 local_120;
  long lStack_118;
  void *local_110;
  undefined8 uStack_108;
  long local_100;
  void *pvStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  void *local_c0 [2];
  char local_a9;
  long local_a8;
  ulong local_a0;
  int local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  undefined8 local_48;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  local_60 = 0;
  uStack_58 = 0x400;
  local_50 = 0;
  local_48 = 0;
  local_90 = operator_new(0x28);
  *local_90 = 0;
  local_90[1] = 0x10000;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[2] = 0;
  local_140 = *(char **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_140 = (char *)(param_2 + 0x28);
  }
  pcStack_138 = local_140;
  local_88 = local_90;
  FUN_1000f7bd0(&local_a8,&local_140);
  if ((local_50 != 0) || (local_98 != 3)) {
    FUN_10033f6e8(0,&DAT_101d91198,0);
    goto LAB_100340214;
  }
  lVar2 = FUN_1000e86c0(&local_a8,"errorCode");
  if (local_a8 + (local_a0 & 0xffffffff) * 0x30 == lVar2) {
LAB_10034019c:
    pcVar4 = "";
  }
  else {
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "errorCode";
    pcStack_138 = (char *)0x9;
    lVar2 = FUN_1000e87dc(&local_a8,&local_140);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_10034019c;
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "errorCode";
    pcStack_138 = (char *)0x9;
    pcVar4 = (char *)FUN_1000e87dc(&local_a8,&local_140);
    if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
      pcVar4 = *(char **)pcVar4;
    }
  }
  FUN_10001549c(local_c0,pcVar4);
  lVar2 = FUN_1000e86c0(&local_a8,"success");
  if (local_a8 + (local_a0 & 0xffffffff) * 0x30 == lVar2) {
LAB_1003401f8:
    bVar1 = false;
  }
  else {
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "success";
    pcStack_138 = (char *)0x7;
    lVar2 = FUN_1000e87dc(&local_a8,&local_140);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1003401f8;
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "success";
    pcStack_138 = (char *)0x7;
    lVar2 = FUN_1000e87dc(&local_a8,&local_140);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  lVar2 = FUN_1000e86c0(&local_a8,"quantity");
  if (local_a8 + (local_a0 & 0xffffffff) * 0x30 == lVar2) {
LAB_1003402ec:
    uVar7 = 1;
  }
  else {
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "quantity";
    pcStack_138 = (char *)0x8;
    lVar2 = FUN_1000e87dc(&local_a8,&local_140);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_1003402ec;
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "quantity";
    pcStack_138 = (char *)0x8;
    puVar5 = (undefined4 *)FUN_1000e87dc(&local_a8,&local_140);
    uVar7 = *puVar5;
  }
  lVar2 = FUN_1000e86c0(&local_a8,"talentData");
  if (local_a8 + (local_a0 & 0xffffffff) * 0x30 != lVar2) {
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "talentData";
    pcStack_138 = (char *)0xa;
    uVar6 = FUN_1000e87dc(&local_a8,&local_140);
    pvStack_f8 = (void *)0x0;
    local_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (void *)0x0;
    pcStack_138 = (char *)0x0;
    local_140 = (char *)0x0;
    local_128 = (void *)0x0;
    local_130 = 0;
    FUN_10051ee14(uVar6,&local_140);
    uVar6 = FUN_100341d4c();
    FUN_10034313c(uVar6,&local_140);
    if (lStack_e8 < 0) {
      operator_delete(pvStack_f8);
    }
    if (local_100 < 0) {
      operator_delete(local_110);
    }
    if (lStack_118 < 0) {
      operator_delete(local_128);
    }
    if (local_130 < 0) {
      operator_delete(local_140);
    }
  }
  lVar2 = FUN_1000e86c0(&local_a8,"currency");
  if (local_a8 + (local_a0 & 0xffffffff) * 0x30 != lVar2) {
    local_130 = CONCAT44(local_130._4_4_,0x100005);
    local_140 = "currency";
    pcStack_138 = (char *)0x8;
    uVar6 = FUN_1000e87dc(&local_a8,&local_140);
    local_140 = (char *)0x0;
    pcStack_138 = (char *)0x0;
    local_130 = 0;
    FUN_10051ba10(uVar6,&local_140);
    uVar6 = FUN_10015d3ec();
    FUN_100163470(uVar6,&local_140);
  }
  FUN_10015d3ec();
  FUN_1001652d4();
  FUN_10033f6e8(bVar1,local_c0,uVar7);
  if (local_a9 < '\0') {
    operator_delete(local_c0[0]);
  }
LAB_100340214:
  if (local_88 != (undefined8 *)0x0) {
    pvVar3 = (void *)FUN_1000f7b54();
    operator_delete(pvVar3);
  }
  _free(local_70);
  if (pvStack_78 != (void *)0x0) {
    operator_delete(pvStack_78);
  }
  return;
}




void FUN_100340444(void)

{
  FUN_10015d3ec();
  FUN_1001652d4();
  return;
}




void FUN_100340458(void)

{
  FUN_10015d3ec();
  FUN_1001652d4();
  return;
}




void FUN_10034046c(void)

{
  FUN_10015d3ec();
  FUN_1001652d4();
  return;
}




void FUN_100340480(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  FUN_10015d3ec();
  uVar1 = FUN_1001636b0();
  if ((2 < uVar1) && (uVar2 = FUN_1003408e8(param_1 + 0x30), (uVar2 & 1) == 0)) {
    FUN_10015d3ec();
    FUN_1001652d4();
    return;
  }
  return;
}




void FUN_1003404c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x2b0);
  _bzero(puVar1,0x2b0);
  FUN_10014f4a0(puVar1);
  FUN_1004f0a20(puVar1 + 3);
  *puVar1 = &PTR_FUN_101494f00;
  puVar1[3] = &PTR_FUN_1014952a0;
  thunk_FUN_10034083c(puVar1 + 6);
  DAT_101d23930 = puVar1;
  return;
}




void FUN_100340528(void)

{
  if (DAT_101d23930 != (long *)0x0) {
    (**(code **)(*DAT_101d23930 + 8))();
  }
  DAT_101d23930 = (long *)0x0;
  return;
}




long FUN_10034055c(void)

{
  return DAT_101d23930 + 0x30;
}




void FUN_10034056c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100165318(uVar1,param_1,param_2);
  return;
}




void FUN_100340830(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_10034083c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = 0x10;
  do {
    thunk_FUN_10033f2ec((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = 0x10;
  do {
    FUN_10033f330((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  return param_1;
}




void FUN_10034089c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = 0x10;
  do {
    FUN_10033f330((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  return;
}




undefined8 * thunk_FUN_10034083c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = 0x10;
  do {
    thunk_FUN_10033f2ec((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = 0x10;
  do {
    FUN_10033f330((long)param_1 + lVar1);
    lVar1 = lVar1 + 0xd0;
  } while (lVar1 != 0x280);
  return param_1;
}




void FUN_1003408dc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}




bool FUN_1003408e8(long *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  
  bVar2 = false;
  if ((*param_1 != 0) && (bVar2 = false, (int)param_1[1] != 0)) {
    lVar4 = 0;
    do {
      bVar1 = *(byte *)((long)param_1 + lVar4 + 0x27);
      if ((char)bVar1 < '\0') {
        uVar5 = *(ulong *)((long)param_1 + lVar4 + 0x18);
      }
      else {
        uVar5 = (ulong)bVar1;
      }
      bVar2 = uVar5 != 0;
    } while ((uVar5 == 0) && (bVar3 = lVar4 != 0x1a0, lVar4 = lVar4 + 0xd0, bVar3));
  }
  return bVar2;
}




long FUN_100340938(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < 1) {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_1004f1a74(0);
    lVar4 = (long)*(int *)(param_1 + 8);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = lVar2 / lVar4;
    }
    lVar3 = (ulong)uVar1 + (lVar3 * lVar4 - lVar2);
  }
  return lVar3;
}




long FUN_100340984(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0xd0 + 0x10;
}




undefined8 * FUN_100340994(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_100340c90();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100340a24;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
LAB_100340a24:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




undefined8 * FUN_100340a48(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_100340c90();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_100340a24;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
LAB_100340a24:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}




undefined8 * FUN_100340a4c(void)

{
  void *pvVar1;
  
  if (DAT_101e475a0 == (undefined8 *)0x0) {
    DAT_101e475a0 = operator_new(0x18);
    *DAT_101e475a0 = 0;
    DAT_101e475a0[1] = 0;
    *(undefined4 *)(DAT_101e475a0 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e475a8 = pvVar1;
  }
  return DAT_101e475a0;
}




undefined8 * FUN_100340aa4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_100340b20_1014952d0;
  plVar5 = (long *)FUN_100340a4c();
  ppVar4 = DAT_101e475a8;
  _pthread_mutex_lock(DAT_101e475a8);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_100340b20(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_100340b20_1014952d0;
  uVar2 = FUN_100340a4c();
  ppVar1 = DAT_101e475a8;
  _pthread_mutex_lock(DAT_101e475a8);
  FUN_100340b80(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_100340b80(long *param_1,long param_2)

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




void thunk_FUN_100340b20(void)

{
  FUN_100340b20();
  return;
}




void FUN_100340be4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100340b20();
  operator_delete(pvVar1);
  return;
}




void FUN_100340bf8(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100340a4c();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_100340c34(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100340a4c();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2);
  }
  return;
}




void FUN_100340c88(void)

{
  return;
}




void FUN_100340c8c(void)

{
  return;
}




void FUN_100340c90(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100340c9c(void)

{
  DAT_101e47410 = 0xff;
  DAT_101e47412 = 0xffff;
  DAT_101e47414 = 0xffff;
  DAT_101e47416 = 0xffbc9c44;
  DAT_101e4741a = 0xff1166f2;
  DAT_101e4741e = 0xffe0e0e0;
  DAT_101e47422 = 0xffa0a0a0;
  DAT_101e47426 = 0xff8c8c8c;
  DAT_101e4742a = 0xff322213;
  DAT_101e4742e = 0xff091911;
  DAT_101e47432 = 0xff170c19;
  DAT_101e47436 = 0xff241a14;
  DAT_101e4743a = 0xff14171c;
  DAT_101e4743e = 0xff221911;
  DAT_101e47442 = 0xff1a1416;
  DAT_101e47446 = 0xff121414;
  DAT_101e4744a = 0xff1a1809;
  DAT_101e4744e = 0xff141414;
  DAT_101e47452 = 0xff141414;
  DAT_101e47456 = 0xff2929c0;
  DAT_101e4745a = 0xff283082;
  DAT_101e4745e = 0xff5262cc;
  DAT_101e47462 = 0xff283082;
  DAT_101e47466 = 0xff5262cc;
  DAT_101e4746a = 0xff745c42;
  DAT_101e4746e = 0xff184155;
  DAT_101e47472 = 0xff92665e;
  DAT_101e47476 = 0xffbc9c44;
  DAT_101e4747a = 0xffbbae56;
  DAT_101e4747e = 0xff8b7b01;
  DAT_101e47482 = 0xff90b3ef;
  DAT_101e47486 = 0xff728ebe;
  DAT_101e4748a = 0xff19459d;
  DAT_101e4748e = 0xff9d877b;
  DAT_101e47492 = 0xffcbb1a3;
  DAT_101e47496 = 0xff3f6fb5;
  DAT_101e4749a = 0xffc5c5c5;
  DAT_101e4749e = 0xff4fc1f1;
  DAT_101e474a2 = 0xff606060;
  DAT_101e474a6 = 0xffc5ff7b;
  DAT_101e474aa = 0xff5271eb;
  DAT_101e474ae = 0xfffae076;
  DAT_101e474b2 = 0xff3ac8f6;
  DAT_101e474b6 = 0xffaaaaaa;
  DAT_101e474ba = 0xffe19400;
  DAT_101e474be = 0xffe19400;
  DAT_101e474c2 = 0xffe550b2;
  DAT_101e474c6 = 0xfff22ae8;
  DAT_101e474ca = 0xff005ae1;
  DAT_101e474ce = 0xff1addfa;
  DAT_101e474d2 = 0xff2424b3;
  DAT_101e474d6 = 0xff2424b3;
  DAT_101e474da = 0xff646464;
  DAT_101e474de = 0xff92665e;
  DAT_101e474e2 = 0xff646037;
  DAT_101e474ec = 0xff1111a1;
  DAT_101e474f0 = 0xff321ee1;
  DAT_101e474f4 = 0xffc8c8c8;
  DAT_101e474f8 = 0xff321ee1;
  DAT_101e47504 = 0xff6259b3;
  DAT_101e47508 = 0xff506e73;
  DAT_101e4750c = 0xff9dbf86;
  DAT_101e474e8 = 0xffffffff;
  DAT_101e47510 = 0xffa35244;
  DAT_101e474fc = 0xff7fe801;
  DAT_101e47514 = 0xffca828e;
  DAT_101e47500 = 0xffffffff;
  DAT_101e47518 = 0xffa6a6a6;
  DAT_101e4751c = 0xffa6a6a6;
  DAT_101e47520 = 0xffffffff;
  DAT_101e47524 = 0xff88ea2f;
  DAT_101e47528 = 0xff8c8c8c;
  DAT_101e4752c = 0xffffb400;
  DAT_101e47530 = 0xffff00ff;
  DAT_101e47534 = 0xff00aded;
  DAT_101e47538 = 0xff33d3ff;
  DAT_101e4753c = 0xff7fe801;
  DAT_101e47540 = 0xff282828;
  DAT_101e47544 = 0xfff0f0f0;
  DAT_101e47548 = 0xffa4781e;
  DAT_101e4754c = 0xffa6654b;
  DAT_101e47550 = 0xff93435b;
  DAT_101e47554 = 0xff387f9c;
  DAT_101e47558 = 0xffa3781e;
  DAT_101e4755c = 0xffffd18a;
  DAT_101e47560 = 0xffff61f7;
  DAT_101e47564 = 0xff5de1f2;
  DAT_101e47568 = 0xff80eaff;
  DAT_101e4756c = 0xff32e00e;
  DAT_101e47570 = 0xff5a3c10;
  DAT_101e47574 = 0xff330b03;
  DAT_101e47578 = 0xff33031d;
  DAT_101e4757c = 0xff032433;
  DAT_101e47580 = 0xff9e8e8d;
  FUN_10001549c(&DAT_101e47588,"CollectNotAllowed");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e47588,0x100000000);
  return;
}




void FUN_100341394(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  long local_c0;
  ulong local_b8;
  int local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  void *pvStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  long *local_58;
  long *plStack_50;
  undefined4 local_48;
  
  param_1 = param_1 + 0x30;
  FUN_100341c08(param_1);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = (void *)0x0;
  local_78 = 0;
  uStack_70 = 0x400;
  local_68 = 0;
  local_60 = 0;
  local_a8 = operator_new(0x28);
  *local_a8 = 0;
  local_a8[1] = 0x10000;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[2] = 0;
  local_58 = *(long **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_58 = (long *)(param_2 + 0x28);
  }
  local_a0 = local_a8;
  plStack_50 = local_58;
  FUN_1000f7bd0(&local_c0,&local_58);
  if ((local_68 != 0) || (local_b0 != 3)) goto LAB_1003416d8;
  lVar3 = FUN_1000e86c0(&local_c0,"lastCollectTime");
  if (local_c0 + (local_b8 & 0xffffffff) * 0x30 == lVar3) {
LAB_100341484:
    lVar3 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4e7a;
    plStack_50 = (long *)0xf;
    lVar3 = FUN_1000e87dc(&local_c0,&local_58);
    if ((*(byte *)(lVar3 + 0x11) >> 1 & 1) == 0) goto LAB_100341484;
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4e7a;
    plStack_50 = (long *)0xf;
    FUN_1000e87dc(&local_c0,&local_58);
    FUN_1000fceec();
    lVar3 = (long)(double)CONCAT17(extraout_var_05,
                                   CONCAT16(extraout_var_04,
                                            CONCAT15(extraout_var_03,
                                                     CONCAT14(extraout_var_02,
                                                              CONCAT13(extraout_var_01,
                                                                       CONCAT12(extraout_var_00,
                                                                                CONCAT11(
                                                  extraout_var,extraout_b0)))))));
  }
  lVar4 = FUN_1000e86c0(&local_c0,"refreshInterval");
  if (local_c0 + (local_b8 & 0xffffffff) * 0x30 == lVar4) {
LAB_1003414f8:
    uVar8 = 0;
  }
  else {
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4dd0;
    plStack_50 = (long *)0xf;
    lVar4 = FUN_1000e87dc(&local_c0,&local_58);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_1003414f8;
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4dd0;
    plStack_50 = (long *)0xf;
    puVar5 = (undefined4 *)FUN_1000e87dc(&local_c0,&local_58);
    uVar8 = *puVar5;
  }
  lVar4 = FUN_1000e86c0(&local_c0,"canCollect");
  if (local_c0 + (local_b8 & 0xffffffff) * 0x30 == lVar4) {
LAB_100341568:
    bVar1 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4e8a;
    plStack_50 = (long *)0xa;
    lVar4 = FUN_1000e87dc(&local_c0,&local_58);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_100341568;
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4e8a;
    plStack_50 = (long *)0xa;
    lVar4 = FUN_1000e87dc(&local_c0,&local_58);
    bVar1 = *(int *)(lVar4 + 0x10) == 0x102;
  }
  lVar4 = FUN_1000e86c0(&local_c0,"isOnCooldown");
  if (local_c0 + (local_b8 & 0xffffffff) * 0x30 == lVar4) {
LAB_1003415e0:
    bVar2 = false;
  }
  else {
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4e95;
    plStack_50 = (long *)0xc;
    lVar4 = FUN_1000e87dc(&local_c0,&local_58);
    if ((*(byte *)(lVar4 + 0x11) & 1) == 0) goto LAB_1003415e0;
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4e95;
    plStack_50 = (long *)0xc;
    lVar4 = FUN_1000e87dc(&local_c0,&local_58);
    bVar2 = *(int *)(lVar4 + 0x10) == 0x102;
  }
  FUN_100341c2c(param_1,lVar3,uVar8,bVar1,bVar2);
  lVar3 = FUN_1000e86c0(&local_c0,"entries");
  if (local_c0 + (local_b8 & 0xffffffff) * 0x30 != lVar3) {
    local_48 = 0x100005;
    local_58 = (long *)0x1013f4ea2;
    plStack_50 = (long *)0x7;
    lVar3 = FUN_1000e87dc(&local_c0,&local_58);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_48 = 0x100005;
      local_58 = (long *)0x1013f4ea2;
      plStack_50 = (long *)0x7;
      plVar6 = (long *)FUN_1000e87dc(&local_c0,&local_58);
      if ((int)plVar6[1] != 0) {
        lVar3 = 0;
        uVar9 = 0;
        do {
          local_58 = (long *)(*plVar6 + lVar3);
          if ((*(byte *)((long)local_58 + 0x12) >> 6 & 1) == 0) {
            local_58 = *(long **)(*plVar6 + lVar3);
          }
          FUN_100319778(param_1,&local_58);
          uVar9 = uVar9 + 1;
          lVar3 = lVar3 + 0x18;
        } while (uVar9 < *(uint *)(plVar6 + 1));
      }
    }
  }
  FUN_100340bf8();
LAB_1003416d8:
  if (local_a0 != (undefined8 *)0x0) {
    pvVar7 = (void *)FUN_1000f7b54();
    operator_delete(pvVar7);
  }
  _free(local_88);
  if (pvStack_90 != (void *)0x0) {
    operator_delete(pvStack_90);
  }
  return;
}




void FUN_100341944(void)

{
  FUN_10015d3ec();
  FUN_100166d54();
  return;
}




void FUN_100341958(void)

{
  FUN_10015d3ec();
  FUN_100166d54();
  return;
}




void FUN_10034196c(void)

{
  FUN_10015d3ec();
  FUN_100166d54();
  return;
}




void FUN_100341980(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = operator_new(0x70);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  lVar2 = FUN_10014f4a0();
  FUN_1004f0a20(lVar2 + 0x18);
  *puVar1 = &PTR_FUN_101495300;
  puVar1[3] = &PTR_FUN_1014956a0;
  thunk_FUN_100341ba8(puVar1 + 6);
  DAT_101d23938 = puVar1;
  return;
}




void FUN_1003419f0(void)

{
  if (DAT_101d23938 != (long *)0x0) {
    (**(code **)(*DAT_101d23938 + 8))();
  }
  DAT_101d23938 = (long *)0x0;
  return;
}




long FUN_100341a24(void)

{
  return DAT_101d23938 + 0x30;
}




void FUN_100341a34(void)

{
  FUN_10015d3ec();
  FUN_100166d98();
  return;
}




void FUN_100341a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101495300;
  param_1[3] = &PTR_FUN_1014956a0;
  thunk_FUN_10001653c(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_100341aa0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101495300;
  param_1[3] = &PTR_FUN_1014956a0;
  thunk_FUN_10001653c(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_1004f0a9c(param_1 + 3);
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100341afc(undefined8 *param_1)

{
  param_1[-3] = &PTR_FUN_101495300;
  *param_1 = &PTR_FUN_1014956a0;
  thunk_FUN_10001653c(param_1 + 5);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_1004f0a9c(param_1);
  FUN_10014f51c(param_1 + -3);
  return;
}




void FUN_100341b50(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-3] = &PTR_FUN_101495300;
  *param_1 = &PTR_FUN_1014956a0;
  thunk_FUN_10001653c(param_1 + 5);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_1004f0a9c(param_1);
  pvVar1 = (void *)FUN_10014f51c(param_1 + -3);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_100341ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_1000164dc(param_1 + 2);
  FUN_100016648(uVar1,"QUESTS.HEROCHEST.COLLECT",0);
  *(undefined8 *)((long)param_1 + 0x36) = 0;
  param_1[6] = 0;
  if (param_1[1] != 0) {
    *(undefined4 *)param_1 = 0;
  }
  FUN_1000165f0(param_1 + 2,0);
  return param_1;
}




void FUN_100341c08(undefined4 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  FUN_1000165f0(param_1 + 4,0);
  return;
}




undefined8 * thunk_FUN_100341ba8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_1000164dc(param_1 + 2);
  FUN_100016648(uVar1,"QUESTS.HEROCHEST.COLLECT",0);
  *(undefined8 *)((long)param_1 + 0x36) = 0;
  param_1[6] = 0;
  if (param_1[1] != 0) {
    *(undefined4 *)param_1 = 0;
  }
  FUN_1000165f0(param_1 + 2,0);
  return param_1;
}




void FUN_100341c2c(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  *(undefined8 *)(param_1 + 0xc) = param_2;
  param_1[0xe] = param_3;
  *(char *)(param_1 + 0xf) = (char)param_4;
  *(undefined1 *)((long)param_1 + 0x3d) = param_5;
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  FUN_1000165f0(param_1 + 4,param_4);
  return;
}




void FUN_100341c54(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    lVar3 = (ulong)*(uint *)(param_1 + 0x30) << 5;
    do {
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
      if (*plVar1 == param_1) {
        FUN_100198894();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  thunk_FUN_100341ed8(param_1);
  return;
}




void FUN_100341ca8(void)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 local_40;
  long lStack_38;
  long local_30;
  code *pcStack_28;
  
  pvVar1 = operator_new(0xd0);
  lStack_38 = thunk_FUN_100341e24();
  local_40 = 0;
  pcStack_28 = FUN_100341e20;
  local_30 = lStack_38;
  FUN_100198790(lStack_38 + 0x30,&local_40);
  DAT_101d23940 = pvVar1;
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    FUN_1003404c8();
    FUN_100341980();
  }
  return;
}




void FUN_100341d0c(void)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) == 0) {
    FUN_100340528();
    FUN_1003419f0();
  }
  if (DAT_101d23940 != 0) {
    pvVar2 = (void *)FUN_100341c54();
    operator_delete(pvVar2);
  }
  DAT_101d23940 = 0;
  return;
}




undefined8 FUN_100341d4c(void)

{
  return DAT_101d23940;
}




void FUN_100341d58(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  FUN_1003424b8(DAT_101d23940,plVar1);
  return;
}




bool FUN_100341d78(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  lVar3 = FUN_1003424b8(DAT_101d23940,plVar1);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  lVar4 = FUN_1003424b8(DAT_101d23940,plVar1);
  if (lVar3 != 0) {
    if ((*(ushort *)(lVar3 + 0xb0) >> 8 & 1) == 0) {
      return true;
    }
    if (lVar4 == 0) {
      return true;
    }
    if ((*(ushort *)(lVar4 + 0xb0) >> 8 & 1) != 0) {
      lVar3 = FUN_100343694(lVar3);
      iVar2 = *(int *)(lVar3 + 0x18);
      lVar3 = FUN_100343694(lVar4);
      return iVar2 < *(int *)(lVar3 + 0x18);
    }
  }
  return true;
}




void FUN_100341e20(void)

{
  return;
}




undefined8 * FUN_100341e24(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_100341ed8_1014956d0;
  param_1[3] = &PTR_FUN_101495a78;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10014f4a0(param_1 + 8);
  param_1[8] = &PTR_FUN_101493600;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x19) = 0;
  local_40 = 0;
  pcStack_28 = thunk_FUN_100342370;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_100343960(param_1 + 0xb,&local_40);
  return param_1;
}




undefined8 * thunk_FUN_100341e24(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_100341ed8_1014956d0;
  param_1[3] = &PTR_FUN_101495a78;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_10014f4a0(param_1 + 8);
  param_1[8] = &PTR_FUN_101493600;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x19) = 0;
  uStack_40 = 0;
  pcStack_28 = thunk_FUN_100342370;
  puStack_38 = param_1;
  puStack_30 = param_1;
  FUN_100343960(param_1 + 0xb,&uStack_40);
  return param_1;
}




void FUN_100341ed8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  
  *param_1 = &PTR_thunk_FUN_100341ed8_1014956d0;
  param_1[3] = &PTR_FUN_101495a78;
  puVar4 = (uint *)(param_1 + 0xb);
  if (*puVar4 != 0) {
    lVar2 = param_1[0xc];
    lVar3 = (ulong)*puVar4 << 5;
    do {
      puVar1 = (undefined8 *)(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100343a60(puVar4);
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  FUN_100341fb0(param_1);
  FUN_1003438bc(param_1 + 0x13);
  FUN_100343834(param_1 + 0xd);
  param_1[8] = &PTR_FUN_101493600;
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0xc] = 0;
  }
  FUN_10014f51c(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_100341fb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  long local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  
  local_70 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  local_58 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_a0 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_88 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  local_68 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  local_60 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_50 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  local_48 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  local_98 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  local_90 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  local_78 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  local_80 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar2 = (uint)local_70;
  uVar1 = 0;
  do {
    uVar7 = uVar1;
    if (uVar2 == uVar7) goto LAB_100342094;
    uVar1 = uVar7 + 1;
  } while (*(int *)(local_68 + (ulong)uVar7 * 8 + 4) == -1);
  if (uVar2 + 1 != uVar7 + 1) {
    do {
      lVar3 = local_50;
      puVar8 = (uint *)(local_68 + (ulong)uVar7 * 8 + 4);
      pvVar6 = *(void **)(local_50 + (ulong)*puVar8 * 8);
      if (*(int *)((long)pvVar6 + 0x10) == 0) {
LAB_10034211c:
        if (*(char *)((long)pvVar6 + 0xa7) < '\0') {
          operator_delete(*(void **)((long)pvVar6 + 0x90));
        }
        if (*(char *)((long)pvVar6 + 0x8f) < '\0') {
          operator_delete(*(void **)((long)pvVar6 + 0x78));
        }
        if (*(char *)((long)pvVar6 + 0x77) < '\0') {
          operator_delete(*(void **)((long)pvVar6 + 0x60));
        }
        thunk_FUN_10001653c((long)pvVar6 + 0x40);
        thunk_FUN_10001653c((long)pvVar6 + 0x20);
        if (*(void **)((long)pvVar6 + 0x18) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar6 + 0x18));
          *(undefined8 *)((long)pvVar6 + 0x10) = 0;
          *(undefined8 *)((long)pvVar6 + 0x18) = 0;
        }
        if (*(void **)((long)pvVar6 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar6 + 8));
        }
        operator_delete(pvVar6);
        uVar5 = (ulong)*puVar8;
      }
      else {
        puVar9 = *(undefined8 **)((long)pvVar6 + 0x18);
        do {
          if ((code *)*puVar9 == (code *)0x0) {
            (*(code *)puVar9[3])(puVar9[2],pvVar6);
          }
          else {
            (*(code *)*puVar9)(pvVar6);
          }
          puVar9 = puVar9 + 4;
        } while (puVar9 != (undefined8 *)
                           (*(long *)((long)pvVar6 + 0x18) +
                           (ulong)*(uint *)((long)pvVar6 + 0x10) * 0x20));
        uVar5 = (ulong)*puVar8;
        pvVar6 = *(void **)(lVar3 + uVar5 * 8);
        if (pvVar6 != (void *)0x0) goto LAB_10034211c;
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      uVar1 = uVar2;
      if (uVar2 <= uVar7 + 1) {
        uVar1 = uVar7 + 1;
      }
      do {
        uVar7 = uVar7 + 1;
        uVar4 = uVar1;
        if (uVar2 <= uVar7) break;
        uVar4 = uVar7;
      } while (*(int *)(local_68 + (ulong)uVar7 * 8 + 4) == -1);
      uVar7 = uVar4;
    } while (uVar2 != uVar7);
  }
LAB_100342094:
  FUN_1003438bc(&local_a0);
  FUN_100343834(&local_70);
  return;
}




void thunk_FUN_100341ed8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  
  *param_1 = &PTR_thunk_FUN_100341ed8_1014956d0;
  param_1[3] = &PTR_FUN_101495a78;
  puVar4 = (uint *)(param_1 + 0xb);
  if (*puVar4 != 0) {
    lVar2 = param_1[0xc];
    lVar3 = (ulong)*puVar4 << 5;
    do {
      puVar1 = (undefined8 *)(lVar2 + 8);
      lVar2 = lVar2 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100343a60(puVar4);
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  FUN_100341fb0(param_1);
  FUN_1003438bc(param_1 + 0x13);
  FUN_100343834(param_1 + 0xd);
  param_1[8] = &PTR_FUN_101493600;
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0xc] = 0;
  }
  FUN_10014f51c(param_1 + 8);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_1003421d0(long param_1)

{
  FUN_100341ed8(param_1 + -0x18);
  return;
}




void FUN_1003421d8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100341ed8();
  operator_delete(pvVar1);
  return;
}




void FUN_1003421ec(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100341ed8(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_100342204(long param_1,string *param_2)

{
  undefined8 *puVar1;
  undefined8 local_48;
  string *local_40;
  undefined8 *local_38;
  
  if ((char)param_2[0x17] < '\0') {
    if (*(long *)(param_2 + 8) == 0) {
      return (undefined8 *)0x0;
    }
    local_40 = *(string **)param_2;
  }
  else {
    local_40 = param_2;
    if (param_2[0x17] == (string)0x0) {
      return (undefined8 *)0x0;
    }
  }
  local_48 = 0;
  puVar1 = (undefined8 *)FUN_100343ad0(param_1 + 0x68,&local_40);
  local_38 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    local_38 = puVar1;
  }
  local_38 = (undefined8 *)*local_38;
  if (local_38 == (undefined8 *)0x0) {
    puVar1 = operator_new(0xb8);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    FUN_1000164dc(puVar1 + 4);
    FUN_1000164dc(puVar1 + 8);
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0x100010000;
    *(ushort *)(puVar1 + 0x16) = *(ushort *)(puVar1 + 0x16) & 0xf000;
    local_38 = puVar1;
    std::string::operator=((string *)(puVar1 + 0x12),param_2);
    local_40 = *(string **)param_2;
    if (-1 < (char)param_2[0x17]) {
      local_40 = param_2;
    }
    FUN_100342308(param_1 + 0x68,&local_40,&local_38);
  }
  return local_38;
}




void FUN_100342308(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
  lVar2 = FUN_100034344(param_1,uVar3);
  uVar1 = FUN_100343b88(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




void FUN_100342370(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 200) != '\0') {
    lVar4 = *(long *)(param_1 + 0x70);
    uVar1 = 0;
    do {
      uVar5 = uVar1;
      if (*(uint *)(param_1 + 0x68) == uVar5) {
        return;
      }
      uVar1 = uVar5 + 1;
    } while (*(int *)(lVar4 + (ulong)uVar5 * 8 + 4) == -1);
    if (*(uint *)(param_1 + 0x68) + 1 != uVar5 + 1) {
      do {
        FUN_100342438(*(undefined8 *)
                       (*(long *)(param_1 + 0x88) +
                       (ulong)*(uint *)(lVar4 + (ulong)uVar5 * 8 + 4) * 8),
                      *(undefined4 *)(param_2 + 4));
        uVar2 = *(uint *)(param_1 + 0x68);
        uVar1 = uVar2;
        if (uVar2 <= uVar5 + 1) {
          uVar1 = uVar5 + 1;
        }
        do {
          uVar5 = uVar5 + 1;
          uVar3 = uVar1;
          if (uVar2 <= uVar5) break;
          uVar3 = uVar5;
        } while (*(int *)(*(long *)(param_1 + 0x70) + (ulong)uVar5 * 8 + 4) == -1);
        uVar5 = uVar3;
        if (uVar2 == uVar5) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x70);
      } while( true );
    }
  }
  return;
}




void FUN_100342438(long param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  bVar1 = true;
  bVar2 = false;
  if ('\0' < (char)*(ushort *)(param_1 + 0xb0)) {
    iVar3 = (int)(short)((ulong)uVar4 >> 0x10);
    bVar2 = SBORROW4((int)(short)uVar4,iVar3);
    bVar1 = (short)uVar4 - iVar3 < 0;
  }
  if (bVar1 == bVar2 && (*(ushort *)(param_1 + 0xb0) & 0x200) == 0) {
    if (((int)((ulong)uVar4 >> 0x20) <= param_2) &&
       (iVar3 = FUN_10012f12c(param_1 + 0x90), iVar3 == 0)) {
      uVar4 = 1;
      goto LAB_100342488;
    }
  }
  else {
    FUN_10012efd0(param_1 + 0x90,0);
  }
  uVar4 = 0;
LAB_100342488:
  FUN_1000165f0(param_1 + 0x20,uVar4);
  return;
}




undefined8 FUN_1003424b8(undefined8 param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  uVar1 = FUN_100342204(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return uVar1;
}




undefined8 FUN_100342508(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 200) != '\0') {
    local_28 = param_2;
    iVar1 = FUN_10034255c(param_1 + 0x98,&local_28);
    if (iVar1 != 0) {
      uVar2 = FUN_100342a2c(param_1 + 0x98,&local_28);
      return uVar2;
    }
  }
  return 0;
}




bool FUN_10034255c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_1004d2524(uVar8);
  uVar5 = FUN_100015208(uVar8,uVar4,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_1003425fc:
    bVar3 = false;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar5 / uVar1;
    }
    uVar7 = (ulong)(uVar5 - uVar2 * uVar1);
    lVar6 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar6 + uVar7 * 8) != uVar5) {
      do {
        if (*(int *)(lVar6 + uVar7 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar7) {
          uVar2 = (uint)uVar7;
        }
        uVar7 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar6 + uVar7 * 8) != uVar5);
      if ((int)uVar7 == -1) goto LAB_1003425fc;
    }
    bVar3 = *(int *)(lVar6 + uVar7 * 8 + 4) != -1;
  }
  return bVar3;
}




undefined8 * FUN_10034260c(long param_1,char *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 200) != '\0') {
    lVar7 = *(long *)(param_1 + 0x70);
    uVar2 = 0;
    do {
      uVar8 = uVar2;
      if (*(uint *)(param_1 + 0x68) == uVar8) {
        return (undefined8 *)0x0;
      }
      uVar2 = uVar8 + 1;
    } while (*(int *)(lVar7 + (ulong)uVar8 * 8 + 4) == -1);
    if (*(uint *)(param_1 + 0x68) + 1 != uVar8 + 1) {
      do {
        lVar7 = *(long *)(*(long *)(param_1 + 0x88) +
                         (ulong)*(uint *)(lVar7 + (ulong)uVar8 * 8 + 4) * 8);
        pcVar6 = (char *)(lVar7 + 0x60);
        if (*(char *)(lVar7 + 0x77) < '\0') {
          pcVar6 = *(char **)pcVar6;
        }
        iVar5 = _strcmp(pcVar6,param_2);
        if (iVar5 == 0) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x88) +
                           (ulong)*(uint *)(*(long *)(param_1 + 0x70) + (ulong)uVar8 * 8 + 4) * 8);
          puVar1 = (undefined8 *)(lVar7 + 0x90);
          if (*(char *)(lVar7 + 0xa7) < '\0') {
            return (undefined8 *)*puVar1;
          }
          return puVar1;
        }
        uVar3 = *(uint *)(param_1 + 0x68);
        uVar2 = uVar3;
        if (uVar3 <= uVar8 + 1) {
          uVar2 = uVar8 + 1;
        }
        do {
          uVar8 = uVar8 + 1;
          uVar4 = uVar2;
          if (uVar3 <= uVar8) break;
          uVar4 = uVar8;
        } while (*(int *)(*(long *)(param_1 + 0x70) + (ulong)uVar8 * 8 + 4) == -1);
        uVar8 = uVar4;
        if (uVar3 == uVar8) {
          return (undefined8 *)0x0;
        }
        lVar7 = *(long *)(param_1 + 0x70);
      } while( true );
    }
  }
  return (undefined8 *)0x0;
}




int FUN_100342714(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 200) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x68);
    lVar5 = *(long *)(param_1 + 0x70);
    uVar1 = 0;
    do {
      uVar6 = uVar1;
      if (uVar2 == uVar6) {
        return 0;
      }
      uVar1 = uVar6 + 1;
    } while (*(int *)(lVar5 + (ulong)uVar6 * 8 + 4) == -1);
    if (uVar2 + 1 != uVar6 + 1) {
      iVar4 = 0;
      do {
        if ('\0' < (char)*(undefined2 *)
                          (*(long *)(*(long *)(param_1 + 0x88) +
                                    (ulong)*(uint *)(lVar5 + (ulong)uVar6 * 8 + 4) * 8) + 0xb0)) {
          iVar4 = iVar4 + 1;
        }
        uVar1 = uVar2;
        if (uVar2 <= uVar6 + 1) {
          uVar1 = uVar6 + 1;
        }
        do {
          uVar6 = uVar6 + 1;
          uVar3 = uVar1;
          if (uVar2 <= uVar6) break;
          uVar3 = uVar6;
        } while (*(int *)(lVar5 + (ulong)uVar6 * 8 + 4) == -1);
        uVar6 = uVar3;
        if (uVar2 == uVar6) {
          return iVar4;
        }
      } while( true );
    }
  }
  return 0;
}




undefined4 FUN_1003427c8(long param_1)

{
  if (*(char *)(param_1 + 200) != '\0') {
    return *(undefined4 *)(param_1 + 0x78);
  }
  return 0;
}




undefined8 FUN_1003427e0(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  
  uVar5 = FUN_100131560();
  if ((uVar5 & 1) == 0) {
    if (*(char *)(param_1 + 200) != '\0') {
      lVar8 = *(long *)(param_1 + 0x70);
      uVar1 = 0;
      do {
        uVar9 = uVar1;
        if (*(uint *)(param_1 + 0x68) == uVar9) goto LAB_100342844;
        uVar1 = uVar9 + 1;
      } while (*(int *)(lVar8 + (ulong)uVar9 * 8 + 4) == -1);
      if (*(uint *)(param_1 + 0x68) + 1 != uVar9 + 1) {
        do {
          lVar8 = *(long *)(*(long *)(param_1 + 0x88) +
                           (ulong)*(uint *)(lVar8 + (ulong)uVar9 * 8 + 4) * 8);
          pcVar7 = (char *)(lVar8 + 0x78);
          if (*(char *)(lVar8 + 0x8f) < '\0') {
            pcVar7 = *(char **)pcVar7;
          }
          iVar4 = _strcmp(pcVar7,param_2);
          if ((iVar4 == 0) &&
             ('\0' < (char)*(undefined2 *)
                            (*(long *)(*(long *)(param_1 + 0x88) +
                                      (ulong)*(uint *)(*(long *)(param_1 + 0x70) + (ulong)uVar9 * 8
                                                      + 4) * 8) + 0xb0))) goto LAB_100342800;
          uVar2 = *(uint *)(param_1 + 0x68);
          uVar1 = uVar2;
          if (uVar2 <= uVar9 + 1) {
            uVar1 = uVar9 + 1;
          }
          do {
            uVar9 = uVar9 + 1;
            uVar3 = uVar1;
            if (uVar2 <= uVar9) break;
            uVar3 = uVar9;
          } while (*(int *)(*(long *)(param_1 + 0x70) + (ulong)uVar9 * 8 + 4) == -1);
          uVar9 = uVar3;
          if (uVar2 == uVar9) break;
          lVar8 = *(long *)(param_1 + 0x70);
        } while( true );
      }
    }
LAB_100342844:
    uVar6 = 0;
  }
  else {
LAB_100342800:
    uVar6 = 1;
  }
  return uVar6;
}




undefined8 FUN_100342900(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long local_50;
  long *local_48;
  
  if (*(char *)(param_1 + 200) != '\0') {
    local_48 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      local_48 = param_2;
    }
    uVar5 = FUN_10034255c(param_1 + 0x98,&local_48);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    local_48 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      local_48 = param_2;
    }
    puVar6 = (uint *)FUN_100342a2c(param_1 + 0x98,&local_48);
    if (*puVar6 != 0) {
      lVar11 = 0;
      uVar12 = 0;
      do {
        local_48 = (long *)(*(long *)(puVar6 + 2) + lVar11);
        if (*(char *)((long)local_48 + 0x17) < '\0') {
          local_48 = *(long **)(*(long *)(puVar6 + 2) + lVar11);
        }
        local_50 = 0;
        plVar7 = (long *)FUN_100343ad0(param_1 + 0x68,&local_48);
        plVar1 = &local_50;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7;
        }
        lVar9 = *plVar1;
        if (lVar9 != 0) {
          uVar2 = *(ushort *)(lVar9 + 0xb0);
          if ((uVar2 >> 10 & 1) != 0) {
            return 1;
          }
          bVar3 = true;
          bVar4 = false;
          if ('\0' < (char)uVar2) {
            iVar8 = (int)(short)((ulong)*(undefined8 *)(lVar9 + 0xa8) >> 0x10);
            iVar10 = (int)(short)*(undefined8 *)(lVar9 + 0xa8);
            bVar4 = SBORROW4(iVar10,iVar8);
            bVar3 = iVar10 - iVar8 < 0;
          }
          if (bVar3 == bVar4 && (uVar2 & 0x200) == 0) {
            return 1;
          }
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x18;
      } while (uVar12 < *puVar6);
    }
  }
  return 0;
}




long FUN_100342a2c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_100342ac4:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) goto LAB_100342ac4;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 0x10;
}




bool FUN_100342adc(long param_1)

{
  if ('\0' < (char)*(ushort *)(param_1 + 0xb0)) {
    return (short)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x10) <=
           (short)*(undefined8 *)(param_1 + 0xa8) && (*(ushort *)(param_1 + 0xb0) & 0x200) == 0;
  }
  return false;
}




undefined8 FUN_100342b1c(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long local_50;
  long *local_48;
  
  if (*(char *)(param_1 + 200) != '\0') {
    local_48 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      local_48 = param_2;
    }
    uVar4 = FUN_10034255c(param_1 + 0x98,&local_48);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    local_48 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      local_48 = param_2;
    }
    puVar5 = (uint *)FUN_100342a2c(param_1 + 0x98,&local_48);
    if (*puVar5 != 0) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        local_48 = (long *)(*(long *)(puVar5 + 2) + lVar10);
        if (*(char *)((long)local_48 + 0x17) < '\0') {
          local_48 = *(long **)(*(long *)(puVar5 + 2) + lVar10);
        }
        local_50 = 0;
        plVar6 = (long *)FUN_100343ad0(param_1 + 0x68,&local_48);
        plVar1 = &local_50;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6;
        }
        lVar7 = *plVar1;
        if (lVar7 != 0) {
          bVar2 = true;
          bVar3 = false;
          if ('\0' < (char)*(ushort *)(lVar7 + 0xb0)) {
            iVar8 = (int)(short)((ulong)*(undefined8 *)(lVar7 + 0xa8) >> 0x10);
            iVar9 = (int)(short)*(undefined8 *)(lVar7 + 0xa8);
            bVar3 = SBORROW4(iVar9,iVar8);
            bVar2 = iVar9 - iVar8 < 0;
          }
          if (bVar2 == bVar3 && (*(ushort *)(lVar7 + 0xb0) & 0x200) == 0) {
            return 1;
          }
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x18;
      } while (uVar11 < *puVar5);
    }
  }
  return 0;
}




void FUN_100342c44(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 uVar11;
  void *local_50 [2];
  char local_39;
  undefined8 local_38;
  
  local_38 = param_2;
  FUN_10001549c(local_50);
  FUN_10012efd0(local_50,1);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  uVar3 = FUN_1004d2524(param_2);
  uVar4 = FUN_100015208(param_2,uVar3,0x12345678);
  puVar10 = (uint *)(param_1 + 0x68);
  uVar1 = *puVar10;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar9 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar8 = *(long *)(param_1 + 0x70);
    if (*(uint *)(lVar8 + uVar9 * 8) != uVar4) {
      do {
        if (*(int *)(lVar8 + uVar9 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar9) {
          uVar2 = (uint)uVar9;
        }
        uVar9 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar8 + uVar9 * 8) != uVar4);
      if ((int)uVar9 == -1) {
        return;
      }
    }
    if (*(int *)(lVar8 + uVar9 * 8 + 4) != -1) {
      puVar5 = (undefined8 *)FUN_100342d74(puVar10,&local_38);
      uVar11 = *puVar5;
      uVar6 = FUN_10032ad3c(param_1 + 0x40);
      FUN_100342438(uVar11,uVar6);
      plVar7 = (long *)FUN_100342d74(puVar10,&local_38);
      lVar8 = *plVar7;
      *(ushort *)(lVar8 + 0xb0) = *(ushort *)(lVar8 + 0xb0) & 0xf3ff;
      FUN_1000165f0(lVar8 + 0x40,0);
    }
  }
  return;
}




long FUN_100342d74(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_100342e0c:
    uVar6 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) goto LAB_100342e0c;
    }
    uVar6 = (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar6 * 8;
}




void FUN_100342e24(long param_1)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xf3ff;
  FUN_1000165f0(param_1 + 0x40,0);
  return;
}




void FUN_100342e3c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uStack_ac;
  int local_a8 [2];
  ulong uStack_a0;
  int local_98 [2];
  undefined8 uStack_90;
  int local_88 [2];
  undefined8 uStack_80;
  int local_78 [2];
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 != 0) {
    local_78[0] = 0;
    local_78[1] = 0;
    uStack_70 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    uStack_80 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    uStack_90 = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    uStack_a0 = 0;
    if (*(int *)(param_2 + 0x28) == 0) {
      iVar9 = 0;
      uVar11 = 0;
      uVar13 = 0;
      iVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      iVar18 = 0;
      uVar7 = 0;
      uVar12 = 0;
      iVar3 = 0;
    }
    else {
      lVar10 = 0;
      uVar12 = 0;
      do {
        lVar4 = *(long *)(param_2 + 0x30) + lVar10;
        FUN_10034313c(param_1,lVar4);
        lVar4 = FUN_100342204(param_1,lVar4);
        if ((lVar4 != 0) && (uVar17 = (uint)(char)*(undefined2 *)(lVar4 + 0xb0), uVar17 != 0)) {
          plVar5 = (long *)(lVar4 + 0x60);
          if (*(char *)(lVar4 + 0x77) < '\0') {
            plVar5 = (long *)*plVar5;
          }
          lVar6 = FUN_10034c060(plVar5);
          uVar1 = *(uint *)(lVar6 + 0x18);
          local_78[uVar1] = local_78[uVar1] + 1;
          local_88[uVar1] = local_88[uVar1] + uVar17;
          if ((((uVar1 == 1 && 8 < uVar17) && (uVar1 != 1 || uVar17 != 9)) ||
              ((uVar1 == 2 && 3 < uVar17) && (uVar1 != 2 || uVar17 != 4))) ||
             (uVar1 == 3 && 1 < uVar17)) {
            local_98[uVar1] = local_98[uVar1] + 1;
          }
          if ((*(ushort *)(lVar4 + 0xb0) >> 9 & 1) != 0) {
            local_a8[uVar1] = local_a8[uVar1] + 1;
          }
        }
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + 0x78;
      } while (uVar12 < *(uint *)(param_2 + 0x28));
      uVar12 = uStack_70 & 0xffffffff;
      uVar16 = uStack_80 & 0xffffffff;
      uVar13 = uStack_90 & 0xffffffff;
      iVar3 = local_78[1];
      uVar7 = uStack_70._4_4_;
      iVar18 = local_88[1];
      uVar15 = uStack_80._4_4_;
      iVar14 = local_98[1];
      uVar11 = uStack_90._4_4_;
      iVar9 = local_a8[1];
    }
    uVar2 = uStack_a0;
    FUN_100102240("talent_num_rares",iVar3,0);
    FUN_100102240("talent_num_epics",uVar12,0);
    FUN_100102240("talent_num_legens",uVar7,0);
    FUN_100102240("talent_sum_rare_lvls",iVar18,0);
    FUN_100102240("talent_sum_epic_lvls",uVar16,0);
    FUN_100102240("talent_sum_legen_lvls",uVar15,0);
    FUN_100102240("talent_num_rare_mid_lvl",iVar14,0);
    FUN_100102240("talent_num_epic_mid_level",uVar13,0);
    FUN_100102240("talent_num_legen_mid_level",uVar11,0);
    FUN_100102240("talent_num_rare_max_lvl",iVar9,0);
    FUN_100102240("talent_num_epic_max_level",uVar2 & 0xffffffff,0);
    uStack_ac = (undefined4)(uVar2 >> 0x20);
    FUN_100102240("talent_num_legen_max_level",uStack_ac,0);
    *(undefined1 *)(param_1 + 200) = 1;
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      do {
        if ((code *)*puVar8 == (code *)0x0) {
          (*(code *)puVar8[3])(puVar8[2],param_1);
        }
        else {
          (*(code *)*puVar8)(param_1);
        }
        puVar8 = puVar8 + 4;
      } while (puVar8 != (undefined8 *)
                         (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034313c(long param_1,string *param_2)

{
  string *this;
  ushort uVar1;
  undefined8 *****pppppuVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  uint uVar6;
  string sVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  ushort uVar15;
  undefined8 *puVar16;
  string *psVar17;
  ushort uVar18;
  ulong uVar19;
  string *psVar20;
  string *psVar21;
  long lVar22;
  void *local_140 [2];
  char local_129;
  void *local_128 [2];
  char local_111;
  void *local_110 [2];
  char local_f9;
  string *local_f8 [2];
  char local_e1;
  undefined8 ****local_e0 [2];
  char local_c9;
  undefined8 ****local_c8 [2];
  char local_b1;
  string *local_b0;
  undefined8 uStack_a8;
  char local_99;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  puVar11 = (uint *)FUN_100342204();
  uVar14 = *(ulong *)(puVar11 + 0x2a);
  uVar15 = (ushort)puVar11[0x2c];
  if ((uVar15 >> 8 & 1) != 0) {
    uVar18 = (ushort)(*(int *)(param_2 + 0x60) != 0) << 0xb;
    uVar1 = 0;
    if (*(int *)(param_2 + 0x60) != 0 && (char)uVar15 == '\0' || (uVar15 & 0x400) != 0) {
      uVar1 = 0x400;
    }
    if ((char)uVar15 != '\0') {
      uVar18 = 0;
    }
    uVar15 = uVar18 | uVar15 & 0xf3ff | uVar1;
    *(ulong *)(puVar11 + 0x2a) = uVar14;
    *(ushort *)(puVar11 + 0x2c) = uVar15;
  }
  uVar15 = (ushort)(byte)param_2[0x60] | uVar15 & 0xff00;
  *(ulong *)(puVar11 + 0x2a) = uVar14;
  *(ushort *)(puVar11 + 0x2c) = uVar15;
  uVar19 = (ulong)*(ushort *)(param_2 + 100);
  *(ushort *)(puVar11 + 0x2c) = uVar15;
  *(ulong *)(puVar11 + 0x2a) = uVar14 & 0xffffffffffff0000 | uVar19;
  iVar10 = *(int *)(param_2 + 0x68);
  *(ushort *)(puVar11 + 0x2c) = uVar15;
  *(ulong *)(puVar11 + 0x2a) = uVar14 & 0xffffffff00000000 | uVar19 | (ulong)(uint)(iVar10 << 0x10);
  uVar6 = *(uint *)(param_2 + 0x6c);
  *(ushort *)(puVar11 + 0x2c) = uVar15;
  *(ulong *)(puVar11 + 0x2a) = uVar19 | (uint)(iVar10 << 0x10) | (ulong)uVar6 << 0x20;
  std::string::operator=((string *)(puVar11 + 0x18),param_2 + 0x18);
  this = (string *)(puVar11 + 0x24);
  std::string::operator=(this,param_2);
  psVar21 = (string *)(puVar11 + 0x1e);
  std::string::operator=(psVar21,param_2 + 0x48);
  *(ushort *)(puVar11 + 0x2c) = (ushort)puVar11[0x2c] & 0xfdff | (ushort)(byte)param_2[0x70] << 9;
  FUN_10001549c(local_110,"TALENTS.UPGRADE.");
  FUN_1000e8b18(local_f8,local_110,psVar21);
  FUN_10001549c(local_128,".");
  FUN_1000e8b18(local_e0,local_f8,local_128);
  FUN_1000e8b18(&local_b0,local_e0,this);
  std::string::string((string *)local_c8,(string *)&local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  if (local_c9 < '\0') {
    operator_delete(local_e0[0]);
  }
  if (local_111 < '\0') {
    operator_delete(local_128[0]);
  }
  if (local_e1 < '\0') {
    operator_delete(local_f8[0]);
  }
  if (local_f9 < '\0') {
    operator_delete(local_110[0]);
  }
  pppppuVar2 = (undefined8 *****)local_c8[0];
  if (-1 < local_b1) {
    pppppuVar2 = local_c8;
  }
  FUN_100016648(puVar11 + 8,pppppuVar2,1);
  uVar12 = FUN_10032ad3c(param_1 + 0x40);
  FUN_100342438(puVar11,uVar12);
  FUN_10001549c(local_128,"TALENTS.NEWTALENT.");
  FUN_1000e8b18(local_110,local_128,psVar21);
  FUN_10001549c(local_140,".");
  FUN_1000e8b18(local_f8,local_110,local_140);
  FUN_1000e8b18(&local_b0,local_f8,this);
  std::string::string((string *)local_e0,(string *)&local_b0);
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  if (local_e1 < '\0') {
    operator_delete(local_f8[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (local_f9 < '\0') {
    operator_delete(local_110[0]);
  }
  if (local_111 < '\0') {
    operator_delete(local_128[0]);
  }
  pppppuVar2 = (undefined8 *****)local_e0[0];
  if (-1 < local_c9) {
    pppppuVar2 = local_e0;
  }
  FUN_100016648(puVar11 + 0x10,pppppuVar2,1);
  FUN_1000165f0(puVar11 + 0x10,(ushort)puVar11[0x2c] >> 10 & 1);
  param_1 = param_1 + 0x98;
  local_b0 = psVar21;
  if (*(char *)((long)puVar11 + 0x8f) < '\0') {
    local_b0 = *(string **)psVar21;
  }
  uVar14 = FUN_10034255c(param_1,&local_b0);
  if ((uVar14 & 1) == 0) {
    local_f8[0] = psVar21;
    if (*(char *)((long)puVar11 + 0x8f) < '\0') {
      local_f8[0] = *(string **)psVar21;
    }
    local_b0 = (string *)0x0;
    uStack_a8 = 0;
    FUN_1003437a8(param_1,local_f8,&local_b0);
    FUN_10001629c(&local_b0,1);
  }
  if (*(char *)((long)puVar11 + 0x8f) < '\0') {
    psVar21 = *(string **)psVar21;
  }
  local_b0 = psVar21;
  puVar13 = (uint *)FUN_100342a2c(param_1,&local_b0);
  uVar6 = *puVar13;
  if (uVar6 != 0) {
    uVar14 = 0;
    lVar22 = *(long *)(puVar13 + 2);
    bVar8 = *(byte *)((long)puVar11 + 0xa7);
    sVar3 = *(size_t *)(puVar11 + 0x26);
    if (-1 < (char)bVar8) {
      sVar3 = (ulong)bVar8;
    }
    psVar21 = (string *)(lVar22 + 1);
    do {
      puVar16 = (undefined8 *)(lVar22 + uVar14 * 0x18);
      bVar9 = *(byte *)((long)puVar16 + 0x17);
      uVar19 = (ulong)bVar9;
      sVar4 = puVar16[1];
      if (-1 < (char)bVar9) {
        sVar4 = uVar19;
      }
      if (sVar4 == sVar3) {
        puVar5 = (void *)*puVar16;
        if (-1 < (char)bVar9) {
          puVar5 = puVar16;
        }
        psVar17 = *(string **)this;
        if (-1 < (char)bVar8) {
          psVar17 = this;
        }
        if ((char)bVar9 < '\0') {
          if ((sVar3 == 0) || (iVar10 = _memcmp(puVar5,psVar17,sVar3), iVar10 == 0))
          goto LAB_100343578;
        }
        else {
          if (sVar3 == 0) goto LAB_100343578;
          psVar20 = psVar21;
          if ((uint)(byte)*psVar17 == ((uint)(void *)*puVar16 & 0xff)) {
            do {
              uVar19 = uVar19 - 1;
              psVar17 = psVar17 + 1;
              if (uVar19 == 0) goto LAB_100343578;
              sVar7 = *psVar20;
              psVar20 = psVar20 + 1;
            } while (sVar7 == *psVar17);
          }
        }
      }
      uVar14 = uVar14 + 1;
      psVar21 = psVar21 + 0x18;
    } while (uVar14 != uVar6);
  }
  FUN_10001617c(puVar13,this);
LAB_100343578:
  *(ushort *)(puVar11 + 0x2c) = (ushort)puVar11[0x2c] | 0x100;
  if (*puVar11 != 0) {
    puVar16 = *(undefined8 **)(puVar11 + 2);
    do {
      if ((code *)*puVar16 == (code *)0x0) {
        (*(code *)puVar16[3])(puVar16[2],puVar11);
      }
      else {
        (*(code *)*puVar16)(puVar11);
      }
      puVar16 = puVar16 + 4;
    } while (puVar16 != (undefined8 *)(*(long *)(puVar11 + 2) + (ulong)*puVar11 * 0x20));
  }
  FUN_1004d2698(&local_b0,"talent_%s_level");
  FUN_100102240(&local_b0,(ulong)(long)(short)((short)puVar11[0x2c] << 8) >> 8,0);
  FUN_1004d2698(&local_b0,"talent_%s_fragments");
  FUN_100102240(&local_b0,(long)(short)puVar11[0x2a],0);
  if (local_c9 < '\0') {
    operator_delete(local_e0[0]);
  }
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100343694(long param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0xb0) >> 8 & 1) == 0) {
    return 0;
  }
  if (-1 < *(char *)(param_1 + 0x77)) {
    uVar1 = FUN_10034c060();
    return uVar1;
  }
  uVar1 = FUN_10034c060(*(undefined8 *)(param_1 + 0x60));
  return uVar1;
}




void FUN_1003436c0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      FUN_10034313c(param_1,*(long *)(param_2 + 0x30) + lVar2);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x78;
    } while (uVar3 < *(uint *)(param_2 + 0x28));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_1);
      }
      else {
        (*(code *)*puVar1)(param_1);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)
                       (*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20));
  }
  lVar2 = FUN_10015d3ec();
  FUN_100169cec(lVar2 + 0x18);
  return;
}




void FUN_100343768(void)

{
  FUN_100341fb0();
  FUN_10015d3ec();
  FUN_100166d1c();
  return;
}




void FUN_100343780(long param_1)

{
  FUN_100341fb0(param_1 + -0x18);
  FUN_10015d3ec();
  FUN_100166d1c();
  return;
}




void thunk_FUN_100341fb0(void)

{
  FUN_100341fb0();
  return;
}




void FUN_1003437a0(long param_1)

{
  FUN_100341fb0(param_1 + -0x18);
  return;
}




void FUN_1003437a8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
  lVar2 = FUN_100034344(param_1,uVar3);
  uVar1 = FUN_100343cec(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




void FUN_100343810(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100166ddc(uVar1,param_1 + 0x90);
  return;
}




uint * FUN_100343834(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




uint * FUN_1003438bc(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar2 != 0xffffffff) {
        puVar1 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 0x10);
        FUN_10001629c(puVar1,1);
        *puVar1 = param_1[10];
        param_1[10] = uVar2;
        uVar3 = *param_1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar3);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_100343960(uint *param_1,undefined8 *param_2)

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
    FUN_1003439e4(param_1,uVar3);
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




void thunk_FUN_100342370(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 200) != '\0') {
    lVar4 = *(long *)(param_1 + 0x70);
    uVar1 = 0;
    do {
      uVar5 = uVar1;
      if (*(uint *)(param_1 + 0x68) == uVar5) {
        return;
      }
      uVar1 = uVar5 + 1;
    } while (*(int *)(lVar4 + (ulong)uVar5 * 8 + 4) == -1);
    if (*(uint *)(param_1 + 0x68) + 1 != uVar5 + 1) {
      do {
        FUN_100342438(*(undefined8 *)
                       (*(long *)(param_1 + 0x88) +
                       (ulong)*(uint *)(lVar4 + (ulong)uVar5 * 8 + 4) * 8),
                      *(undefined4 *)(param_2 + 4));
        uVar2 = *(uint *)(param_1 + 0x68);
        uVar1 = uVar2;
        if (uVar2 <= uVar5 + 1) {
          uVar1 = uVar5 + 1;
        }
        do {
          uVar5 = uVar5 + 1;
          uVar3 = uVar1;
          if (uVar2 <= uVar5) break;
          uVar3 = uVar5;
        } while (*(int *)(*(long *)(param_1 + 0x70) + (ulong)uVar5 * 8 + 4) == -1);
        uVar5 = uVar3;
        if (uVar2 == uVar5) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x70);
      } while( true );
    }
  }
  return;
}




void FUN_1003439e4(uint *param_1,uint param_2)

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




void FUN_100343a60(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




long FUN_100343ad0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 8;
    }
  }
  return 0;
}




void FUN_100343b88(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100343bf0(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_100343bf0(uint *param_1,undefined8 *param_2)

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
    FUN_100343c70(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100343c70(uint *param_1,uint param_2)

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




ulong FUN_100343cec(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_100343d90(param_1 + 0x18,auStack_48);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + uVar2 * 0x10);
  }
  FUN_1000a72a4(lVar1 + uVar2 * 0x10,param_2);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100343d90(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_100343e10(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_100343e10(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
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




undefined8
FUN_100343e8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  uVar2 = FUN_10034cb40();
  if (((uVar2 & 1) == 0) && (lVar3 = FUN_100345d90(param_5), param_1 != 0 || lVar3 != 0)) {
    if ((int)param_2 == -1) {
      uVar2 = 0;
      ppuVar6 = &PTR_s_Adagio_101854c40;
      do {
        pcVar4 = (char *)FUN_100346238(lVar3);
        iVar1 = _strcasecmp(pcVar4,*ppuVar6);
        if (iVar1 == 0) {
          param_2 = 0xffffffff;
          goto LAB_100343f64;
        }
        uVar2 = uVar2 + 1;
        ppuVar6 = ppuVar6 + 2;
      } while (uVar2 != 7);
    }
    else {
      uVar2 = 0;
      ppuVar6 = &PTR_s_Adagio_101854c40;
      do {
        pcVar4 = (char *)FUN_100346238(param_1);
        iVar1 = _strcasecmp(pcVar4,*ppuVar6);
        if (iVar1 == 0) {
LAB_100343f64:
          uVar5 = (*(code *)(&DAT_101854c48)[(uVar2 & 0xffffffff) * 2])
                            (param_1,param_2,param_3,param_4,param_5,param_6);
          return uVar5;
        }
        uVar2 = uVar2 + 1;
        ppuVar6 = ppuVar6 + 2;
      } while (uVar2 != 7);
    }
  }
  return 0;
}




void FUN_100343fa4(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar1 = FUN_1003a75f8();
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_5c = 0xffffffff;
  uVar2 = FUN_1003c1b18(uVar1,0);
  FUN_10034c30c("BurstHealStrength",uVar2,&local_54);
  uVar2 = FUN_1003c1b18(uVar1,0);
  FUN_10034c30c("HealPerSecond",uVar2,&local_58);
  uVar1 = FUN_1003c1b18(uVar1,0);
  FUN_10034c30c("HealDuration",uVar1,&local_5c);
  fVar3 = (float)thunk_FUN_1003dfe60(param_1,0,local_54,1,1);
  fVar4 = (float)thunk_FUN_1003dfe60(param_1,0,local_54,8,1);
  fVar5 = (float)thunk_FUN_1003dfe60(param_1,0,local_58,1,1);
  fVar6 = (float)thunk_FUN_1003dfe60(param_1,0,local_58,8,1);
  fVar7 = (float)thunk_FUN_1003dfe60(param_1,0,local_5c,1,1);
  *param_2 = fVar3 + fVar5 * fVar7;
  param_2[1] = fVar6 + fVar4;
  param_2[4] = 1.4013e-45;
  return;
}




void FUN_1003440f4(undefined8 param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar1 = FUN_100345d90(param_3);
  if (lVar1 != 0) {
    uVar2 = FUN_1003a75f8();
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    uVar3 = FUN_1003c1b18(uVar2,0);
    FUN_10034c30c("HealPerSecond",uVar3,&local_44);
    uVar2 = FUN_1003c1b18(uVar2,0);
    FUN_10034c30c("HealDuration",uVar2,&local_48);
    fVar4 = (float)thunk_FUN_1003dfe60(lVar1,0,local_44,1,1);
    fVar5 = (float)thunk_FUN_1003dfe60(lVar1,0,local_44,8,1);
    fVar6 = (float)thunk_FUN_1003dfe60(lVar1,0,local_48,1,1);
    *param_2 = fVar6 * fVar4;
    param_2[1] = fVar6 * fVar5;
    param_2[4] = 1.4013e-45;
  }
  return;
}




void FUN_1003441ec(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_34;
  
  lVar1 = FUN_100345d90(param_3);
  if (lVar1 != 0) {
    uVar2 = FUN_1003a75f8();
    local_34 = 0xffffffff;
    uVar2 = FUN_1003c1b18(uVar2,1);
    FUN_10034c30c("BaseBonusDamage",uVar2,&local_34);
    uVar3 = thunk_FUN_1003dfe60(lVar1,1,local_34,1,1);
    *param_2 = uVar3;
    uVar3 = thunk_FUN_1003dfe60(lVar1,1,local_34,8,1);
    param_2[1] = uVar3;
    param_2[4] = 1;
  }
  return;
}




undefined8
FUN_100344290(undefined8 param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  
  if (param_2 == -1) {
    iVar1 = _strcasecmp(param_3,"HOT");
    if (iVar1 == 0) {
      FUN_1003440f4(0,param_4,param_5);
    }
    else {
      iVar1 = _strcasecmp(param_3,"DAMAGE");
      if (iVar1 != 0) {
        return 0;
      }
      FUN_1003441ec(0,param_4,param_5);
    }
  }
  else {
    if ((param_2 != 0) || (iVar1 = _strcasecmp(param_3,"HealAmount"), iVar1 != 0)) {
      return 0;
    }
    FUN_100343fa4(param_1,param_4);
  }
  return 1;
}




void FUN_100344340(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar1 = FUN_1003a75f8();
  local_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  uVar2 = FUN_1003c1b18(uVar1,0);
  FUN_10034c30c("BarrierStrength",uVar2,&uStack_44);
  uVar1 = FUN_1003c1b18(uVar1,0);
  FUN_10034c30c("Barrier_Health_Ratio",uVar1,&local_48);
  uVar4 = thunk_FUN_1003dfe60(param_1,0,3,9,1);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar5 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e47670);
  fVar6 = DAT_101e475b0 - *(float *)(lVar3 + 0x38);
  fVar5 = (float)thunk_FUN_1003dfe60(param_1,0,9,9,1);
  *param_2 = uVar4;
  param_2[3] = fVar6 * fVar5;
  param_2[4] = 1;
  return;
}




undefined8 FUN_10034444c(undefined8 param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (iVar1 = _strcasecmp(param_3,"CalcFullBarrierAmount"), iVar1 == 0)) {
    FUN_100344340(param_1,param_4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034449c(void)

{
  uRam0000000101e47678 = 0x7f7fffff7f7fffff;
  _DAT_101e47670 = 0x7f7fffff7f7fffff;
  uRam0000000101e47688 = 0x7f7fffff7f7fffff;
  _DAT_101e47680 = 0x7f7fffff7f7fffff;
  uRam0000000101e47698 = 0x7f7fffff7f7fffff;
  _DAT_101e47690 = 0x7f7fffff7f7fffff;
  uRam0000000101e476a8 = 0x7f7fffff7f7fffff;
  _DAT_101e476a0 = 0x7f7fffff7f7fffff;
  DAT_101e476b0 = 0x7f7fffff;
  DAT_101e476b4 = 0x7f7fffff;
  DAT_101e476b8 = 0x7f7fffff;
  DAT_101e476bc = 0x3f800000;
  uRam0000000101e476c8 = 0x7f7fffff7f7fffff;
  _DAT_101e476c0 = 0x7f7fffff7f7fffff;
  DAT_101e476d0 = 0x7f7fffff;
  DAT_101e476d4 = 0x3eb33333;
  uRam0000000101e476e0 = 0x7f7fffff7f7fffff;
  _DAT_101e476d8 = 0x7f7fffff7f7fffff;
  uRam0000000101e476f0 = 0x7f7fffff7f7fffff;
  _DAT_101e476e8 = 0x7f7fffff7f7fffff;
  uRam0000000101e47700 = 0x7f7fffff7f7fffff;
  _DAT_101e476f8 = 0x7f7fffff7f7fffff;
  uRam0000000101e47710 = 0x7f7fffff7f7fffff;
  _DAT_101e47708 = 0x7f7fffff7f7fffff;
  DAT_101e47718 = 0x7f7fffff;
  DAT_101e4771c = 0x7f7fffff;
  DAT_101e47720 = 0x7f7fffff;
  uRam0000000101e475b8 = 0xff7fffffff7fffff;
  _DAT_101e475b0 = 0xff7fffffff7fffff;
  DAT_101e475c0 = 0;
  DAT_101e475c8 = 0;
  uRam0000000101e475d4 = 0xff7fffffff7fffff;
  _DAT_101e475cc = 0xff7fffffff7fffff;
  DAT_101e475dc = 0xff7fffff;
  DAT_101e475e0 = 0xff7fffff;
  DAT_101e475e4 = NEON_fmov(0xbf800000,4);
  DAT_101e475ec = 0x3f000000;
  DAT_101e475f0 = 0;
  DAT_101e475f8 = 0;
  uRam0000000101e47608 = 0xff7fffffff7fffff;
  _DAT_101e47600 = 0xff7fffffff7fffff;
  uRam0000000101e47618 = 0xff7fffffff7fffff;
  _DAT_101e47610 = 0xff7fffffff7fffff;
  uRam0000000101e47628 = 0xff7fffffff7fffff;
  _DAT_101e47620 = 0xff7fffffff7fffff;
  uRam0000000101e47638 = 0xbf800000bf800000;
  _DAT_101e47630 = 0xbf80000000000000;
  DAT_101e47640 = 0xbf800000;
  DAT_101e47644 = 0xff7fffff;
  DAT_101e47648 = 0xff7fffff;
  DAT_101e4764c = 0xff7fffff;
  DAT_101e47650 = 0;
  DAT_101e47654 = 0xff7fffff;
  DAT_101e47658 = 0;
  DAT_101e47660 = 0;
  return;
}




void FUN_100344568(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  fVar3 = (float)NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e47800);
  fVar2 = (float)DAT_101e47740;
  if ((float)DAT_101e47740 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (float)thunk_FUN_1003dfe60(param_1,0,3,9,1);
  *param_2 = fVar2;
  param_2[1] = fVar3;
  param_2[4] = 1.4013e-45;
  return;
}




undefined8 FUN_1003445ec(undefined8 param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (iVar1 = _strcasecmp(param_3,"TooltipDamage"), iVar1 == 0)) {
    FUN_100344568(param_1,param_4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034463c(void)

{
  uRam0000000101e477f8 = 0x7f7fffff7f7fffff;
  _DAT_101e477f0 = 0x7f7fffff7f7fffff;
  uRam0000000101e47808 = 0x7f7fffff7f7fffff;
  _DAT_101e47800 = 0x7f7fffff7f7fffff;
  uRam0000000101e47818 = 0x7f7fffff7f7fffff;
  _DAT_101e47810 = 0x7f7fffff7f7fffff;
  uRam0000000101e47828 = 0x7f7fffff7f7fffff;
  _DAT_101e47820 = 0x7f7fffff7f7fffff;
  DAT_101e47830 = 0x7f7fffff;
  DAT_101e47834 = 0x7f7fffff;
  DAT_101e47838 = 0x7f7fffff;
  DAT_101e4783c = 0x3f800000;
  uRam0000000101e47848 = 0x7f7fffff7f7fffff;
  _DAT_101e47840 = 0x7f7fffff7f7fffff;
  DAT_101e47850 = 0x7f7fffff;
  DAT_101e47854 = 0x3eb33333;
  uRam0000000101e47860 = 0x7f7fffff7f7fffff;
  _DAT_101e47858 = 0x7f7fffff7f7fffff;
  uRam0000000101e47870 = 0x7f7fffff7f7fffff;
  _DAT_101e47868 = 0x7f7fffff7f7fffff;
  uRam0000000101e47880 = 0x7f7fffff7f7fffff;
  _DAT_101e47878 = 0x7f7fffff7f7fffff;
  uRam0000000101e47890 = 0x7f7fffff7f7fffff;
  _DAT_101e47888 = 0x7f7fffff7f7fffff;
  DAT_101e47898 = 0x7f7fffff;
  DAT_101e4789c = 0x7f7fffff;
  DAT_101e478a0 = 0x7f7fffff;
  uRam0000000101e47738 = 0xff7fffffff7fffff;
  _DAT_101e47730 = 0xff7fffffff7fffff;
  DAT_101e47740 = 0;
  DAT_101e47748 = 0;
  uRam0000000101e47754 = 0xff7fffffff7fffff;
  _DAT_101e4774c = 0xff7fffffff7fffff;
  DAT_101e4775c = 0xff7fffff;
  DAT_101e47760 = 0xff7fffff;
  DAT_101e47764 = NEON_fmov(0xbf800000,4);
  DAT_101e4776c = 0x3f000000;
  DAT_101e47770 = 0;
  DAT_101e47778 = 0;
  uRam0000000101e47788 = 0xff7fffffff7fffff;
  _DAT_101e47780 = 0xff7fffffff7fffff;
  uRam0000000101e47798 = 0xff7fffffff7fffff;
  _DAT_101e47790 = 0xff7fffffff7fffff;
  uRam0000000101e477a8 = 0xff7fffffff7fffff;
  _DAT_101e477a0 = 0xff7fffffff7fffff;
  uRam0000000101e477b8 = 0xbf800000bf800000;
  _DAT_101e477b0 = 0xbf80000000000000;
  DAT_101e477c0 = 0xbf800000;
  DAT_101e477c4 = 0xff7fffff;
  DAT_101e477c8 = 0xff7fffff;
  DAT_101e477cc = 0xff7fffff;
  DAT_101e477d0 = 0;
  DAT_101e477d4 = 0xff7fffff;
  DAT_101e477d8 = 0;
  DAT_101e477e0 = 0;
  return;
}




void FUN_100344708(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = FUN_1003a75f8();
  uVar2 = FUN_1003c1b18(uVar1,0);
  lVar3 = FUN_10034c1d8("FirstHitDamage",uVar2);
  if (lVar3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = FUN_1003a4970(uVar1,0);
    lVar4 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x240),DAT_101e47a10);
    fVar5 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1a0),DAT_101e47970);
    fVar7 = *(float *)(lVar4 + 0x48);
    fVar5 = fVar7 + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0);
    fVar8 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1b0),DAT_101e47980);
    fVar5 = (float)DAT_101e478c0;
    if ((float)DAT_101e478c0 <= fVar8) {
      fVar5 = fVar8;
    }
    uVar6 = FUN_1003df4f8(DAT_101e478b0 - *(float *)(lVar4 + 0x38),lVar3,uVar1,(int)uVar1 == 5,
                          (int)DAT_101e47950);
    *param_2 = uVar6;
    lVar4 = *(long *)(param_1 + 0x40);
    fVar8 = *(float *)(lVar4 + 0x4c) + *(float *)(lVar4 + 0x100) * (*(float *)(lVar4 + 0x268) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar4 + 0x1b4),DAT_101e47984);
    uVar6 = FUN_1003df560(DAT_101e478c0._4_4_,DAT_101e478c0._4_4_,DAT_101e47984,lVar3);
    param_2[1] = uVar6;
    uVar6 = FUN_1003df538(fVar5,fVar5 - fVar7,0x3f800000,lVar3);
    param_2[2] = uVar6;
    param_2[4] = 1;
  }
  return;
}




void FUN_1003448a0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = FUN_1003a75f8();
  uVar2 = FUN_1003c1b18(uVar1,0);
  lVar3 = FUN_10034c1d8("SecondHitDamage",uVar2);
  if (lVar3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = FUN_1003a4970(uVar1,0);
    lVar4 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x240),DAT_101e47a10);
    fVar5 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1a0),DAT_101e47970);
    fVar7 = *(float *)(lVar4 + 0x48);
    fVar5 = fVar7 + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0);
    fVar8 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1b0),DAT_101e47980);
    fVar5 = (float)DAT_101e478c0;
    if ((float)DAT_101e478c0 <= fVar8) {
      fVar5 = fVar8;
    }
    uVar6 = FUN_1003df4f8(DAT_101e478b0 - *(float *)(lVar4 + 0x38),lVar3,uVar1,(int)uVar1 == 5,
                          (int)DAT_101e47950);
    *param_2 = uVar6;
    lVar4 = *(long *)(param_1 + 0x40);
    fVar8 = *(float *)(lVar4 + 0x4c) + *(float *)(lVar4 + 0x100) * (*(float *)(lVar4 + 0x268) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar4 + 0x1b4),DAT_101e47984);
    uVar6 = FUN_1003df560(DAT_101e478c0._4_4_,DAT_101e478c0._4_4_,DAT_101e47984,lVar3);
    param_2[1] = uVar6;
    uVar6 = FUN_1003df538(fVar5,fVar5 - fVar7,0x3f800000,lVar3);
    param_2[2] = uVar6;
    param_2[4] = 1;
  }
  return;
}




void FUN_100344a38(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = FUN_1003a75f8();
  uVar2 = FUN_1003c1b18(uVar1,0);
  lVar3 = FUN_10034c1d8("ThirdHitDamage",uVar2);
  if (lVar3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = FUN_1003a4970(uVar1,0);
    lVar4 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x240),DAT_101e47a10);
    fVar5 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1a0),DAT_101e47970);
    fVar7 = *(float *)(lVar4 + 0x48);
    fVar5 = fVar7 + *(float *)(lVar4 + 0xfc) * (*(float *)(lVar4 + 0x264) + 1.0);
    fVar8 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar4 + 0x1b0),DAT_101e47980);
    fVar5 = (float)DAT_101e478c0;
    if ((float)DAT_101e478c0 <= fVar8) {
      fVar5 = fVar8;
    }
    uVar6 = FUN_1003df4f8(DAT_101e478b0 - *(float *)(lVar4 + 0x38),lVar3,uVar1,(int)uVar1 == 5,
                          (int)DAT_101e47950);
    *param_2 = uVar6;
    lVar4 = *(long *)(param_1 + 0x40);
    fVar8 = *(float *)(lVar4 + 0x4c) + *(float *)(lVar4 + 0x100) * (*(float *)(lVar4 + 0x268) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar4 + 0x1b4),DAT_101e47984);
    uVar6 = FUN_1003df560(DAT_101e478c0._4_4_,DAT_101e478c0._4_4_,DAT_101e47984,lVar3);
    param_2[1] = uVar6;
    uVar6 = FUN_1003df538(fVar5,fVar5 - fVar7,0x3f800000,lVar3);
    param_2[2] = uVar6;
    param_2[4] = 1;
  }
  return;
}




void FUN_100344bd0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_44;
  
  uVar1 = FUN_1003a75f8();
  local_44 = 0xffffffff;
  uVar1 = FUN_1003c1b18(uVar1,0);
  FUN_10034c30c("HealPerHeroHit",uVar1,&local_44);
  uVar2 = thunk_FUN_1003dfe60(param_1,0,local_44,1,1);
  uVar3 = thunk_FUN_1003dfe60(param_1,0,local_44,8,1);
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[4] = 1;
  return;
}




void FUN_100344c70(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 local_24;
  
  uVar1 = FUN_1003a75f8();
  local_24 = 0xffffffff;
  uVar1 = FUN_1003c1b18(uVar1,0);
  FUN_10034c30c("HERO_VS_NON_HEROES",uVar1,&local_24);
  uVar2 = thunk_FUN_1003dfe60(param_1,0,local_24,1,1);
  *param_2 = uVar2;
  param_2[4] = 2;
  return;
}




undefined8 FUN_100344ce4(undefined8 param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 2) || (param_2 == 1)) {
    iVar1 = _strcasecmp(param_3,"FirstHitDamage");
    if (iVar1 == 0) {
      FUN_100344708(param_1,param_4);
    }
    else {
      iVar1 = _strcasecmp(param_3,"SecondHitDamage");
      if (iVar1 == 0) {
        FUN_1003448a0(param_1,param_4);
      }
      else {
        iVar1 = _strcasecmp(param_3,"ThirdHitDamage");
        if (iVar1 == 0) {
          FUN_100344a38(param_1,param_4);
        }
        else {
          iVar1 = _strcasecmp(param_3,"HealPerHeroHit");
          if (iVar1 == 0) {
            FUN_100344bd0(param_1,param_4);
          }
          else {
            iVar1 = _strcasecmp(param_3,"HERO_VS_NON_HEROES");
            if (iVar1 != 0) goto LAB_100344d74;
            FUN_100344c70(param_1,param_4);
          }
        }
      }
    }
    uVar2 = 1;
  }
  else {
LAB_100344d74:
    uVar2 = 0;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100344ddc(void)

{
  uRam0000000101e47978 = 0x7f7fffff7f7fffff;
  _DAT_101e47970 = 0x7f7fffff7f7fffff;
  uRam0000000101e47988 = 0x7f7fffff7f7fffff;
  _DAT_101e47980 = 0x7f7fffff7f7fffff;
  uRam0000000101e47998 = 0x7f7fffff7f7fffff;
  _DAT_101e47990 = 0x7f7fffff7f7fffff;
  uRam0000000101e479a8 = 0x7f7fffff7f7fffff;
  _DAT_101e479a0 = 0x7f7fffff7f7fffff;
  DAT_101e479b0 = 0x7f7fffff;
  DAT_101e479b4 = 0x7f7fffff;
  DAT_101e479b8 = 0x7f7fffff;
  DAT_101e479bc = 0x3f800000;
  uRam0000000101e479c8 = 0x7f7fffff7f7fffff;
  _DAT_101e479c0 = 0x7f7fffff7f7fffff;
  DAT_101e479d0 = 0x7f7fffff;
  DAT_101e479d4 = 0x3eb33333;
  uRam0000000101e479e0 = 0x7f7fffff7f7fffff;
  _DAT_101e479d8 = 0x7f7fffff7f7fffff;
  uRam0000000101e479f0 = 0x7f7fffff7f7fffff;
  _DAT_101e479e8 = 0x7f7fffff7f7fffff;
  uRam0000000101e47a00 = 0x7f7fffff7f7fffff;
  _DAT_101e479f8 = 0x7f7fffff7f7fffff;
  _DAT_101e47a10 = 0x7f7fffff7f7fffff;
  _DAT_101e47a08 = 0x7f7fffff7f7fffff;
  DAT_101e47a18 = 0x7f7fffff;
  DAT_101e47a1c = 0x7f7fffff;
  DAT_101e47a20 = 0x7f7fffff;
  uRam0000000101e478b8 = 0xff7fffffff7fffff;
  _DAT_101e478b0 = 0xff7fffffff7fffff;
  DAT_101e478c0 = 0;
  DAT_101e478c8 = 0;
  uRam0000000101e478d4 = 0xff7fffffff7fffff;
  _DAT_101e478cc = 0xff7fffffff7fffff;
  DAT_101e478dc = 0xff7fffff;
  DAT_101e478e0 = 0xff7fffff;
  DAT_101e478e4 = NEON_fmov(0xbf800000,4);
  DAT_101e478ec = 0x3f000000;
  DAT_101e478f0 = 0;
  DAT_101e478f8 = 0;
  uRam0000000101e47908 = 0xff7fffffff7fffff;
  _DAT_101e47900 = 0xff7fffffff7fffff;
  uRam0000000101e47918 = 0xff7fffffff7fffff;
  _DAT_101e47910 = 0xff7fffffff7fffff;
  uRam0000000101e47928 = 0xff7fffffff7fffff;
  _DAT_101e47920 = 0xff7fffffff7fffff;
  uRam0000000101e47938 = 0xbf800000bf800000;
  _DAT_101e47930 = 0xbf80000000000000;
  DAT_101e47940 = 0xbf800000;
  DAT_101e47944 = 0xff7fffff;
  DAT_101e47948 = 0xff7fffff;
  DAT_101e4794c = 0xff7fffff;
  DAT_101e47950 = 0;
  DAT_101e47954 = 0xff7fffff;
  DAT_101e47958 = 0;
  DAT_101e47960 = 0;
  return;
}




void FUN_100344ea8(long param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar1 = FUN_1003a75f8();
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_5c = 0xffffffff;
  uVar2 = FUN_1003c1b18(uVar1,1);
  FUN_10034c30c("Fortified Health Base",uVar2,&local_54);
  uVar2 = FUN_1003c1b18(uVar1,1);
  FUN_10034c30c("MaxHealthScaling",uVar2,&local_58);
  uVar1 = FUN_1003c1b18(uVar1,1);
  FUN_10034c30c("DefenseFinnStatScaling",uVar1,&local_5c);
  fVar4 = (float)thunk_FUN_1003df710(param_1,0,1);
  fVar5 = (float)thunk_FUN_1003dfe60(param_1,1,8,9,1);
  fVar6 = (float)thunk_FUN_1003dfe60(param_1,1,9,9,1);
  fVar7 = (float)thunk_FUN_1003dfe60(param_1,1,local_54,1,1);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar4 = 1.0 / (fVar4 + 1.0);
  *param_2 = (fVar7 + fVar5 * ((*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec)) -
                              fVar4 * *(float *)(lVar3 + 0x38))) -
             fVar6 * ((((*(float *)(lVar3 + 0x54) * fVar4 -
                        (*(float *)(lVar3 + 0x54) + *(float *)(lVar3 + 0x108))) -
                       *(float *)(lVar3 + 0x10c)) - *(float *)(lVar3 + 0x58)) +
                     fVar4 * *(float *)(lVar3 + 0x58));
  param_2[4] = 1.4013e-45;
  return;
}




undefined8 FUN_100345010(undefined8 param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 1) && (iVar1 = _strcasecmp(param_3,"FortifiedHealthAmount"), iVar1 == 0)) {
    FUN_100344ea8(param_1,param_4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100345064(void)

{
  uRam0000000101e47af8 = 0x7f7fffff7f7fffff;
  _DAT_101e47af0 = 0x7f7fffff7f7fffff;
  uRam0000000101e47b08 = 0x7f7fffff7f7fffff;
  _DAT_101e47b00 = 0x7f7fffff7f7fffff;
  uRam0000000101e47b18 = 0x7f7fffff7f7fffff;
  _DAT_101e47b10 = 0x7f7fffff7f7fffff;
  uRam0000000101e47b28 = 0x7f7fffff7f7fffff;
  _DAT_101e47b20 = 0x7f7fffff7f7fffff;
  DAT_101e47b30 = 0x7f7fffff;
  DAT_101e47b34 = 0x7f7fffff;
  DAT_101e47b38 = 0x7f7fffff;
  DAT_101e47b3c = 0x3f800000;
  uRam0000000101e47b48 = 0x7f7fffff7f7fffff;
  _DAT_101e47b40 = 0x7f7fffff7f7fffff;
  DAT_101e47b50 = 0x7f7fffff;
  DAT_101e47b54 = 0x3eb33333;
  uRam0000000101e47b60 = 0x7f7fffff7f7fffff;
  _DAT_101e47b58 = 0x7f7fffff7f7fffff;
  uRam0000000101e47b70 = 0x7f7fffff7f7fffff;
  _DAT_101e47b68 = 0x7f7fffff7f7fffff;
  uRam0000000101e47b80 = 0x7f7fffff7f7fffff;
  _DAT_101e47b78 = 0x7f7fffff7f7fffff;
  uRam0000000101e47b90 = 0x7f7fffff7f7fffff;
  _DAT_101e47b88 = 0x7f7fffff7f7fffff;
  DAT_101e47b98 = 0x7f7fffff;
  DAT_101e47b9c = 0x7f7fffff;
  DAT_101e47ba0 = 0x7f7fffff;
  uRam0000000101e47a38 = 0xff7fffffff7fffff;
  _DAT_101e47a30 = 0xff7fffffff7fffff;
  DAT_101e47a40 = 0;
  DAT_101e47a48 = 0;
  uRam0000000101e47a54 = 0xff7fffffff7fffff;
  _DAT_101e47a4c = 0xff7fffffff7fffff;
  DAT_101e47a5c = 0xff7fffff;
  DAT_101e47a60 = 0xff7fffff;
  DAT_101e47a64 = NEON_fmov(0xbf800000,4);
  DAT_101e47a6c = 0x3f000000;
  DAT_101e47a70 = 0;
  DAT_101e47a78 = 0;
  uRam0000000101e47a88 = 0xff7fffffff7fffff;
  _DAT_101e47a80 = 0xff7fffffff7fffff;
  uRam0000000101e47a98 = 0xff7fffffff7fffff;
  _DAT_101e47a90 = 0xff7fffffff7fffff;
  uRam0000000101e47aa8 = 0xff7fffffff7fffff;
  _DAT_101e47aa0 = 0xff7fffffff7fffff;
  uRam0000000101e47ab8 = 0xbf800000bf800000;
  _DAT_101e47ab0 = 0xbf80000000000000;
  DAT_101e47ac0 = 0xbf800000;
  DAT_101e47ac4 = 0xff7fffff;
  DAT_101e47ac8 = 0xff7fffff;
  DAT_101e47acc = 0xff7fffff;
  DAT_101e47ad0 = 0;
  DAT_101e47ad4 = 0xff7fffff;
  DAT_101e47ad8 = 0;
  DAT_101e47ae0 = 0;
  return;
}




void FUN_100345130(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)thunk_FUN_1003dfe60(param_1,1,5,2,1);
  fVar2 = (float)thunk_FUN_1003dfe60(param_1,1,5,1,1);
  fVar3 = (float)thunk_FUN_1003dfe60(param_1,1,5,8,1);
  fVar4 = (float)thunk_FUN_1003dfe60(param_1,1,6,9,1);
  fVar4 = fVar4 * 100.0;
  *param_2 = CONCAT44(fVar3 + fVar3 * fVar4,fVar2 + fVar2 * fVar4);
  *(float *)(param_2 + 1) = fVar1 + fVar1 * fVar4;
  *(undefined4 *)(param_2 + 2) = 1;
  return;
}




undefined8 FUN_1003451fc(undefined8 param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 == 4) || (param_2 == 1)) &&
     (iVar1 = _strcasecmp(param_3,"CalcSecondHitDamage"), iVar1 == 0)) {
    FUN_100345130(param_1,param_4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_100345258(long param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (float)thunk_FUN_1003df710(param_1,0,1);
  iVar1 = FUN_1003b4510(param_1,1);
  if (iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)thunk_FUN_1003dfe60(param_1,1,2,0x19,0);
  }
  fVar5 = (float)thunk_FUN_1003df710(param_1,1,1);
  lVar2 = *(long *)(param_1 + 0x40);
  fVar6 = *(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar2 + 0x1b4),DAT_101e47c84);
  fVar5 = DAT_101e47bc0._4_4_ * fVar5;
  *param_2 = fVar4 + fVar3;
  param_2[1] = fVar5;
  param_2[4] = 1.4013e-45;
  return;
}




undefined8 FUN_10034532c(undefined8 param_1,int param_2,char *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = _strcasecmp(param_3,"CalcBounceDamage");
    if (iVar1 == 0) {
      FUN_100345258(param_1,param_4);
      return 1;
    }
    iVar1 = _strcasecmp(param_3,"CalcMinionBounceReduction");
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_1003df710(param_1,3,1);
      *param_4 = uVar2;
      param_4[4] = 2;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003453c8(void)

{
  uRam0000000101e47c78 = 0x7f7fffff7f7fffff;
  _DAT_101e47c70 = 0x7f7fffff7f7fffff;
  uRam0000000101e47c88 = 0x7f7fffff7f7fffff;
  _DAT_101e47c80 = 0x7f7fffff7f7fffff;
  uRam0000000101e47c98 = 0x7f7fffff7f7fffff;
  _DAT_101e47c90 = 0x7f7fffff7f7fffff;
  uRam0000000101e47ca8 = 0x7f7fffff7f7fffff;
  _DAT_101e47ca0 = 0x7f7fffff7f7fffff;
  DAT_101e47cb0 = 0x7f7fffff;
  DAT_101e47cb4 = 0x7f7fffff;
  DAT_101e47cb8 = 0x7f7fffff;
  DAT_101e47cbc = 0x3f800000;
  uRam0000000101e47cc8 = 0x7f7fffff7f7fffff;
  _DAT_101e47cc0 = 0x7f7fffff7f7fffff;
  DAT_101e47cd0 = 0x7f7fffff;
  DAT_101e47cd4 = 0x3eb33333;
  uRam0000000101e47ce0 = 0x7f7fffff7f7fffff;
  _DAT_101e47cd8 = 0x7f7fffff7f7fffff;
  uRam0000000101e47cf0 = 0x7f7fffff7f7fffff;
  _DAT_101e47ce8 = 0x7f7fffff7f7fffff;
  uRam0000000101e47d00 = 0x7f7fffff7f7fffff;
  _DAT_101e47cf8 = 0x7f7fffff7f7fffff;
  uRam0000000101e47d10 = 0x7f7fffff7f7fffff;
  _DAT_101e47d08 = 0x7f7fffff7f7fffff;
  DAT_101e47d18 = 0x7f7fffff;
  DAT_101e47d1c = 0x7f7fffff;
  DAT_101e47d20 = 0x7f7fffff;
  uRam0000000101e47bb8 = 0xff7fffffff7fffff;
  _DAT_101e47bb0 = 0xff7fffffff7fffff;
  DAT_101e47bc0 = 0;
  DAT_101e47bc8 = 0;
  uRam0000000101e47bd4 = 0xff7fffffff7fffff;
  _DAT_101e47bcc = 0xff7fffffff7fffff;
  DAT_101e47bdc = 0xff7fffff;
  DAT_101e47be0 = 0xff7fffff;
  DAT_101e47be4 = NEON_fmov(0xbf800000,4);
  DAT_101e47bec = 0x3f000000;
  DAT_101e47bf0 = 0;
  DAT_101e47bf8 = 0;
  uRam0000000101e47c08 = 0xff7fffffff7fffff;
  _DAT_101e47c00 = 0xff7fffffff7fffff;
  uRam0000000101e47c18 = 0xff7fffffff7fffff;
  _DAT_101e47c10 = 0xff7fffffff7fffff;
  uRam0000000101e47c28 = 0xff7fffffff7fffff;
  _DAT_101e47c20 = 0xff7fffffff7fffff;
  uRam0000000101e47c38 = 0xbf800000bf800000;
  _DAT_101e47c30 = 0xbf80000000000000;
  DAT_101e47c40 = 0xbf800000;
  DAT_101e47c44 = 0xff7fffff;
  DAT_101e47c48 = 0xff7fffff;
  DAT_101e47c4c = 0xff7fffff;
  DAT_101e47c50 = 0;
  DAT_101e47c54 = 0xff7fffff;
  DAT_101e47c58 = 0;
  DAT_101e47c60 = 0;
  return;
}




pthread_mutex_t * thunk_FUN_100345614(pthread_mutex_t *param_1)

{
  FUN_100345590();
  FUN_100345654(param_1[1].__opaque + 0x10,0);
  param_1[1].__sig = 0;
  param_1[1].__opaque[0] = '\0';
  param_1[1].__opaque[1] = '\0';
  param_1[1].__opaque[2] = '\0';
  param_1[1].__opaque[3] = '\0';
  param_1[1].__opaque[4] = '\0';
  param_1[1].__opaque[5] = '\0';
  param_1[1].__opaque[6] = '\0';
  param_1[1].__opaque[7] = '\0';
  param_1[1].__opaque[8] = '\0';
  param_1[1].__opaque[9] = '\0';
  param_1[1].__opaque[10] = '\0';
  param_1[1].__opaque[0xb] = '\0';
  _pthread_mutex_destroy(param_1);
  return param_1;
}




void FUN_100345498(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003454a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,&DAT_101e47d30);
  return;
}




void FUN_1003454ac(void)

{
  FUN_1003454b8(&DAT_101e47d30);
  return;
}




int FUN_1003454b8(pthread_mutex_t *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  
  _pthread_mutex_lock(param_1);
  plVar7 = (long *)param_1[1].__sig;
  if (plVar7 != (long *)0x0) {
    do {
      *(long **)(param_1[1].__opaque + 0x20) = plVar7;
      lVar4 = *plVar7;
      if ((char)plVar7[3] == '\0') {
        (**(code **)(lVar4 + 0x10))(plVar7);
        if (DAT_101d23a38 != '\0') {
          lVar4 = *plVar7;
          goto LAB_100345508;
        }
      }
      else {
LAB_100345508:
        (**(code **)(lVar4 + 0x18))(plVar7);
      }
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
    param_1[1].__opaque[0x20] = '\0';
    param_1[1].__opaque[0x21] = '\0';
    param_1[1].__opaque[0x22] = '\0';
    param_1[1].__opaque[0x23] = '\0';
    param_1[1].__opaque[0x24] = '\0';
    param_1[1].__opaque[0x25] = '\0';
    param_1[1].__opaque[0x26] = '\0';
    param_1[1].__opaque[0x27] = '\0';
    puVar3 = (undefined8 *)param_1[1].__sig;
    while (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar3;
      puVar3 = (undefined8 *)puVar3[1];
      (*(code *)*puVar1)();
    }
    param_1[1].__sig = 0;
    param_1[1].__opaque[0] = '\0';
    param_1[1].__opaque[1] = '\0';
    param_1[1].__opaque[2] = '\0';
    param_1[1].__opaque[3] = '\0';
    param_1[1].__opaque[4] = '\0';
    param_1[1].__opaque[5] = '\0';
    param_1[1].__opaque[6] = '\0';
    param_1[1].__opaque[7] = '\0';
    param_1[1].__opaque[8] = '\0';
    param_1[1].__opaque[9] = '\0';
    param_1[1].__opaque[10] = '\0';
    param_1[1].__opaque[0xb] = '\0';
    pcVar5 = param_1[1].__opaque + 0x18;
    lVar4 = *(long *)pcVar5;
    if (*(long *)pcVar5 != 0) {
      do {
        lVar6 = lVar4;
        lVar4 = *(long *)(lVar6 + 0x2808);
      } while (lVar4 != 0);
      pcVar5 = (char *)(lVar6 + 0x2808);
    }
    *(undefined8 *)pcVar5 = *(undefined8 *)(param_1[1].__opaque + 0x10);
    param_1[1].__opaque[0x10] = '\0';
    param_1[1].__opaque[0x11] = '\0';
    param_1[1].__opaque[0x12] = '\0';
    param_1[1].__opaque[0x13] = '\0';
    param_1[1].__opaque[0x14] = '\0';
    param_1[1].__opaque[0x15] = '\0';
    param_1[1].__opaque[0x16] = '\0';
    param_1[1].__opaque[0x17] = '\0';
  }
  iVar2 = _pthread_mutex_unlock(param_1);
  return iVar2;
}




void FUN_100345584(void)

{
  FUN_100345590(&DAT_101e47d30);
  return;
}




int FUN_100345590(pthread_mutex_t *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  _pthread_mutex_lock(param_1);
  puVar3 = (undefined8 *)param_1[1].__sig;
  param_1[1].__opaque[0x20] = '\0';
  param_1[1].__opaque[0x21] = '\0';
  param_1[1].__opaque[0x22] = '\0';
  param_1[1].__opaque[0x23] = '\0';
  param_1[1].__opaque[0x24] = '\0';
  param_1[1].__opaque[0x25] = '\0';
  param_1[1].__opaque[0x26] = '\0';
  param_1[1].__opaque[0x27] = '\0';
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    puVar3 = (undefined8 *)puVar3[1];
    (*(code *)*puVar1)();
  }
  param_1[1].__sig = 0;
  param_1[1].__opaque[0] = '\0';
  param_1[1].__opaque[1] = '\0';
  param_1[1].__opaque[2] = '\0';
  param_1[1].__opaque[3] = '\0';
  param_1[1].__opaque[4] = '\0';
  param_1[1].__opaque[5] = '\0';
  param_1[1].__opaque[6] = '\0';
  param_1[1].__opaque[7] = '\0';
  param_1[1].__opaque[8] = '\0';
  param_1[1].__opaque[9] = '\0';
  param_1[1].__opaque[10] = '\0';
  param_1[1].__opaque[0xb] = '\0';
  pcVar4 = param_1[1].__opaque + 0x18;
  lVar6 = *(long *)pcVar4;
  if (*(long *)pcVar4 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x2808);
    } while (lVar6 != 0);
    pcVar4 = (char *)(lVar5 + 0x2808);
  }
  *(undefined8 *)pcVar4 = *(undefined8 *)(param_1[1].__opaque + 0x10);
  param_1[1].__opaque[0x10] = '\0';
  param_1[1].__opaque[0x11] = '\0';
  param_1[1].__opaque[0x12] = '\0';
  param_1[1].__opaque[0x13] = '\0';
  param_1[1].__opaque[0x14] = '\0';
  param_1[1].__opaque[0x15] = '\0';
  param_1[1].__opaque[0x16] = '\0';
  param_1[1].__opaque[0x17] = '\0';
  iVar2 = _pthread_mutex_unlock(param_1);
  return iVar2;
}




pthread_mutex_t * FUN_100345614(pthread_mutex_t *param_1)

{
  FUN_100345590();
  FUN_100345654(param_1[1].__opaque + 0x10,0);
  param_1[1].__sig = 0;
  param_1[1].__opaque[0] = '\0';
  param_1[1].__opaque[1] = '\0';
  param_1[1].__opaque[2] = '\0';
  param_1[1].__opaque[3] = '\0';
  param_1[1].__opaque[4] = '\0';
  param_1[1].__opaque[5] = '\0';
  param_1[1].__opaque[6] = '\0';
  param_1[1].__opaque[7] = '\0';
  param_1[1].__opaque[8] = '\0';
  param_1[1].__opaque[9] = '\0';
  param_1[1].__opaque[10] = '\0';
  param_1[1].__opaque[0xb] = '\0';
  _pthread_mutex_destroy(param_1);
  return param_1;
}




void FUN_100345654(long *param_1,uint param_2)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  if ((param_2 & 1) == 0) {
    pvVar1 = (void *)*param_1;
    while (pvVar1 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar1 + 0x2808);
      operator_delete(pvVar1);
      pvVar1 = pvVar5;
    }
    pvVar1 = (void *)param_1[1];
    while (pvVar1 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar1 + 0x2808);
      operator_delete(pvVar1);
      pvVar1 = pvVar5;
    }
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    lVar4 = *plVar2;
    if (*plVar2 != 0) {
      do {
        lVar3 = lVar4;
        lVar4 = *(long *)(lVar3 + 0x2808);
      } while (lVar4 != 0);
      plVar2 = (long *)(lVar3 + 0x2808);
    }
    *plVar2 = *param_1;
  }
  *param_1 = 0;
  return;
}




int FUN_1003456d8(pthread_mutex_t *param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long lVar5;
  
  _pthread_mutex_lock(param_1);
  lVar3 = *(long *)(param_1[1].__opaque + 0x20);
  if (lVar3 == 0) {
    lVar3 = param_1[1].__sig;
    pcVar2 = param_1[1].__opaque;
    lVar5 = *(long *)pcVar2;
    *(undefined8 *)(param_2 + 8) = 0;
    *(long *)(param_2 + 0x10) = lVar5;
    ppVar4 = param_1 + 1;
    if (lVar3 != 0) {
      ppVar4 = (pthread_mutex_t *)(lVar5 + 8);
    }
  }
  else {
    pcVar2 = (char *)(lVar3 + 8);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)pcVar2;
    *(long *)(param_2 + 0x10) = lVar3;
    ppVar4 = (pthread_mutex_t *)param_1[1].__opaque;
    if (*(long *)pcVar2 != 0) {
      ppVar4 = (pthread_mutex_t *)(*(long *)pcVar2 + 0x10);
    }
  }
  ppVar4->__sig = param_2;
  *(long *)pcVar2 = param_2;
  *(int *)(param_1[1].__opaque + 8) = *(int *)(param_1[1].__opaque + 8) + 1;
  *(long *)(param_1[1].__opaque + 0x20) = param_2;
  iVar1 = _pthread_mutex_unlock(param_1);
  return iVar1;
}




ulong FUN_100345764(pthread_mutex_t *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  
  _pthread_mutex_lock(param_1);
  uVar1 = (param_2 + param_3) - 1;
  pvVar5 = *(void **)(param_1[1].__opaque + 0x10);
  if ((pvVar5 == (void *)0x0) ||
     (uVar2 = *(uint *)((long)pvVar5 + 0x2800), pvVar4 = pvVar5, uVar2 < uVar1)) {
    pvVar4 = *(void **)(param_1[1].__opaque + 0x18);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = operator_new(0x2810);
      uVar2 = 0x2800;
      *(undefined4 *)((long)pvVar4 + 0x2800) = 0x2800;
      *(void **)((long)pvVar4 + 0x2808) = pvVar5;
      *(void **)(param_1[1].__opaque + 0x10) = pvVar4;
    }
    else {
      uVar3 = *(undefined8 *)((long)pvVar4 + 0x2808);
      *(void **)((long)pvVar4 + 0x2808) = pvVar5;
      *(void **)(param_1[1].__opaque + 0x10) = pvVar4;
      *(undefined8 *)(param_1[1].__opaque + 0x18) = uVar3;
      uVar2 = 0x2800;
      *(undefined4 *)((long)pvVar4 + 0x2800) = 0x2800;
    }
  }
  *(uint *)((long)pvVar4 + 0x2800) = uVar2 - uVar1;
  _pthread_mutex_unlock(param_1);
  return (long)pvVar4 + ((ulong)param_3 - (ulong)uVar2) + 0x27ff & -(ulong)param_3;
}




char * FUN_100345824(int param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_1004d21cc();
  if (iVar1 == 0) {
    return "";
  }
  if (param_1 == -1) {
    return "";
  }
  if (DAT_101e47e88 != '\x01') {
    return "";
  }
  lVar3 = 8;
  while (*(int *)(DAT_101e47e80 + lVar3) != param_1) {
    lVar3 = lVar3 + 200;
    if (lVar3 == 0xc88) {
      return "";
    }
  }
  lVar3 = 0;
  do {
    lVar4 = DAT_101e47e80 + lVar3;
    if (*(int *)(lVar4 + 8) == param_1) goto LAB_1003458c0;
    lVar3 = lVar3 + 200;
  } while (lVar3 != 0xc80);
  lVar4 = 0;
LAB_1003458c0:
  pcVar2 = (char *)&DAT_101d91198;
  if (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x58);
  }
  if (pcVar2[0x17] < '\0') {
    pcVar2 = *(char **)pcVar2;
  }
  return pcVar2;
}




undefined1 FUN_1003458ec(int param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 8;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2) == param_1) {
        return 1;
      }
      bVar1 = lVar2 != 0xbc0;
      lVar2 = lVar2 + 200;
    } while (bVar1);
  }
  return 0;
}




undefined8 * FUN_100345940(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      lVar3 = DAT_101e47e80 + lVar2;
      if (*(int *)(lVar3 + 8) == param_1) goto LAB_100345984;
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  lVar3 = 0;
LAB_100345984:
  puVar1 = &DAT_101d91198;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x58);
  }
  return puVar1;
}




void FUN_10034599c(long param_1,ulong param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(lVar4 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (*(char *)(*(long *)(*plVar5 + 0x38) + 0x8a) != '\0') {
    return;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  fVar8 = *(float *)(param_1 + 600);
  fVar9 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  if (param_3 == 0) {
    pcVar6 = "None";
    fVar11 = fVar7;
    fVar10 = fVar8;
    fVar12 = fVar9;
    if (param_4 == (float *)0x0) goto LAB_100345a8c;
  }
  else {
    pcVar6 = (char *)**(undefined8 **)
                       (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_3 + 0x268) * 8);
    if (param_4 == (float *)0x0) {
      fVar11 = *(float *)(param_3 + 0x250);
      fVar10 = *(float *)(param_3 + 600);
      fVar12 = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
      goto LAB_100345a8c;
    }
  }
  fVar11 = *param_4;
  fVar10 = param_4[2];
  fVar12 = param_4[1];
LAB_100345a8c:
  uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
  pcVar1 = "Left";
  if (1 < *(byte *)(param_1 + 0x264)) {
    pcVar1 = "Right";
  }
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0x76,uVar3,"UseAbility",
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                ,param_7,param_8,pcVar1,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                **(undefined8 **)(*plVar5 + 0x38),(double)fVar7,(double)fVar9,(double)fVar8,pcVar6,
                (double)fVar11,(double)fVar12,(double)fVar10);
  return;
}




undefined1 FUN_100345b54(long param_1,uint param_2)

{
  return *(undefined1 *)(*(long *)(*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) + 0x38) + 0x8a);
}




void FUN_100345b68(long param_1,undefined4 *param_2,uint param_3)

{
  float fVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar1;
  param_2[2] = *(undefined4 *)(param_1 + 600);
  if ((param_3 & 1) == 0) {
    param_2[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  }
  return;
}




undefined8 FUN_100345b94(void)

{
  return DAT_101d90978;
}




undefined8 FUN_100345ba0(long param_1,uint param_2)

{
  return **(undefined8 **)(**(long **)(param_1 + 0x40) + (ulong)param_2 * 8);
}




undefined4 FUN_100345bb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x268);
}




undefined1 FUN_100345bbc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x264);
}




void FUN_100345bc4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
  if (lVar3 == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x2f4) & 0x1005) == 0) && ((*(uint *)(lVar3 + 0x2f4) & 0x20100001) == 0)
     ) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x250);
  fVar11 = *(float *)(param_1 + 0x254);
  fVar10 = *(float *)(param_1 + 600);
  fVar12 = *(float *)(param_1 + 0x2ec);
  if (((*(uint *)(param_1 + 0x2f4) & 1) != 0) &&
     (lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c4)), lVar4 != 0)) {
    lVar3 = lVar4;
  }
  pcVar1 = "Left";
  if (1 < *(byte *)(lVar3 + 0x264)) {
    pcVar1 = "Right";
  }
  if ((ulong)(long)*(char *)(param_1 + 0x264) < 3) {
    pcVar7 = (&PTR_s_Neutral_10149dc48)[*(char *)(param_1 + 0x264)];
  }
  else {
    pcVar7 = "Unknown";
  }
  uVar8 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar3 + 0x268) * 8)
  ;
  if ((*(byte *)(lVar3 + 0x2f4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
      pcVar6 = "NPCkillNPC";
      pcVar5 = "NPC";
      goto LAB_100345cfc;
    }
    pcVar6 = "Executed";
    lVar4 = param_1;
  }
  else {
    pcVar6 = "KillActor";
    lVar4 = lVar3;
  }
  pcVar5 = (char *)FUN_100345824(*(undefined4 *)(lVar4 + 0x260));
LAB_100345cfc:
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0xba,pcVar5,pcVar6,
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Killed\": \"%s\", \"KilledTeam\": \"%s\", \"Gold\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
                ,in_x6,in_x7,pcVar1,uVar8,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),pcVar7
                ,param_2,*(uint *)(lVar3 + 0x2f4) >> 1 & 1,*(uint *)(param_1 + 0x2f4) >> 1 & 1,
                (double)fVar9,(double)(fVar12 + fVar11),(double)fVar10);
  return;
}




void FUN_100345d90(int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_668 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_1 != -1) && (uVar1 = FUN_1010a1958(local_668,200,DAT_10184dd68,0), uVar1 != 0)) {
    uVar3 = (ulong)uVar1;
    plVar4 = local_668;
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 0x260) == param_1) goto LAB_100345e00;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar2 = 0;
LAB_100345e00:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2);
}




undefined4 FUN_100345e2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c0);
}




undefined4 FUN_100345e34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c4);
}




void FUN_100345e3c(long param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if ((iVar2 != 0) && (**(int **)(param_1 + 0x38) == 0)) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0xd3,uVar3,"PlayerFirstSpawn","{ \"Team\": \"%s\", \"Actor\": \"%s\" }",in_x6,
                  in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8));
  }
  return;
}




undefined4 FUN_100345ee0(long param_1)

{
  return **(undefined4 **)(param_1 + 0x38);
}




void FUN_100345eec(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0)) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0xe4,uVar3,"LevelUp",
                  "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Level\": %d, \"LifetimeGold\": %d }",
                  in_x6,in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                  param_2,(int)*(float *)(*(long *)(param_1 + 0x40) + 0x324));
  }
  return;
}




void FUN_100345fa0(long param_1,undefined8 param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
    return;
  }
  fVar6 = *(float *)(param_1 + 0x250);
  fVar7 = *(float *)(param_1 + 600);
  fVar8 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  if (param_3 == 0) {
    pcVar5 = "None";
    fVar10 = fVar6;
    fVar9 = fVar7;
    fVar11 = fVar8;
    if (param_4 == (float *)0x0) goto LAB_100346074;
  }
  else {
    if ((*(uint *)(param_3 + 0x268) < *(uint *)(DAT_101d90978 + 0x38)) &&
       (puVar4 = *(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_3 + 0x268) * 8),
       puVar4 != (undefined8 *)0x0)) {
      pcVar5 = (char *)*puVar4;
    }
    else {
      pcVar5 = "None";
    }
    if (param_4 == (float *)0x0) {
      fVar10 = *(float *)(param_3 + 0x250);
      fVar9 = *(float *)(param_3 + 600);
      fVar11 = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
      goto LAB_100346074;
    }
  }
  fVar10 = *param_4;
  fVar9 = param_4[2];
  fVar11 = param_4[1];
LAB_100346074:
  uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
  pcVar1 = "Left";
  if (1 < *(byte *)(param_1 + 0x264)) {
    pcVar1 = "Right";
  }
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0x163,uVar3,"UseItemAbility",
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                ,param_7,param_8,pcVar1,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                param_2,(double)fVar6,(double)fVar8,(double)fVar7,pcVar5,(double)fVar10,
                (double)fVar11,(double)fVar9);
  return;
}




void FUN_100346130(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 != 0) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0x172,uVar3,"TalentEquipped",
                  "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Talent\": \"%s\", \"Level\": %d }",in_x6
                  ,in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                  param_2,param_3);
  }
  return;
}




undefined4 FUN_1003461dc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x2d0);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x2d8) == (int)plVar2[1]) {
      lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar1 != 0) {
        return *(undefined4 *)(lVar1 + 0x260);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined4 *)(param_1 + 0x2d8) = DAT_101dc0b88;
    }
  }
  return 0xffffffff;
}




undefined8 FUN_100346238(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
}




undefined1 FUN_100346244(long param_1)

{
  return *(undefined1 *)(param_1 + 0x198);
}




bool FUN_10034624c(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return false;
    }
    if (*(int *)(lVar1 + 0x30c) == param_2) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return *(int *)(lVar1 + 0x310) == 0;
}




undefined8 FUN_100346280(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(undefined8 *)(lVar2 + 0x40);
}




undefined8 *
FUN_1003462a0(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,uint param_6,float *param_7,undefined8 param_8,undefined1 param_9,
             undefined1 param_10)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_6 < 2 | 4;
  if (param_6 != 0) {
    uVar2 = (ushort)(param_6 < 2);
  }
  *param_2 = param_8;
  *(int *)(param_2 + 2) = (int)param_3;
  *(undefined4 *)((long)param_2 + 0x14) = 0xffffffff;
  *(int *)(param_2 + 3) = (int)param_4;
  uVar1 = uVar2 | 10;
  if (param_6 != 2) {
    uVar1 = uVar2;
  }
  uVar5 = FUN_100345d90(param_3);
  param_2[5] = uVar5;
  uVar5 = FUN_100345d90(param_4);
  param_2[4] = uVar5;
  *(undefined4 *)(param_2 + 1) = param_5;
  *(undefined2 *)((long)param_2 + 0xc) = 0;
  *(undefined1 *)((long)param_2 + 0xe) = param_9;
  *(undefined4 *)(param_2 + 6) = param_1;
  *(undefined4 *)((long)param_2 + 0x54) = 0;
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  *(undefined8 *)((long)param_2 + 0x44) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 0xb) = param_10;
  *(undefined4 *)((long)param_2 + 0x5c) = 0;
  *(bool *)(param_2 + 0xc) = 1.1920929e-07 <= ABS(*param_7) || 1.1920929e-07 <= ABS(param_7[1]);
  *(undefined8 *)((long)param_2 + 100) = *(undefined8 *)param_7;
  uVar2 = uVar1 | 0x10;
  if (param_6 != 3) {
    uVar2 = uVar1;
  }
  *(ushort *)((long)param_2 + 0xc) = uVar2;
  if ((param_2[5] != 0) && (iVar3 = FUN_1003461dc(), iVar3 != -1)) {
    *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(param_2[5] + 0x260);
    uVar4 = FUN_1003461dc();
    *(undefined4 *)(param_2 + 2) = uVar4;
    FUN_1003461dc(param_2[5]);
    uVar5 = FUN_100345d90();
    param_2[5] = uVar5;
  }
  return param_2;
}




void FUN_1003463f0(float param_1,long param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  *param_5 = 0.0;
  *param_6 = 0.0;
  if (param_1 <= 0.0) {
    lVar1 = *(long *)(param_2 + 0x40);
    if ((param_1 < 0.0) && (0.0 < *(float *)(lVar1 + 0x318))) {
      fVar2 = (float)NEON_fminnm(ABS(param_1),*(float *)(lVar1 + 0x318));
      param_1 = fVar2 + param_1;
      *param_5 = -fVar2;
    }
    if ((param_1 < 0.0) &&
       (fVar2 = (float)NEON_fminnm(*(undefined4 *)(lVar1 + 0x31c),*(undefined4 *)(lVar1 + 0x308)),
       0.0 < fVar2)) {
      fVar3 = fVar2 + param_1 * 0.5;
      fVar4 = fVar3;
      if (fVar3 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar3 = (float)NEON_fminnm(fVar3,0);
      param_1 = fVar3 + param_1 * 0.5;
      *param_6 = fVar4 - fVar2;
    }
    if ((((uint)*(byte *)(param_2 + 0x303) << 0x10) >> 0x12 & 1) != 0) {
      *param_4 = param_1;
      return;
    }
  }
  *param_3 = param_1;
  return;
}




undefined4 * FUN_100346498(long param_1)

{
  undefined4 *puVar1;
  
  if ((DAT_101e47da0 & 1) == 0) {
    DAT_101e47da0 = 1;
    DAT_101e47da8 = 0xf8c4d87d;
    DAT_101e47db0 = "";
    DAT_101e47db8 = 0;
    DAT_101e47dc0 = 0;
    DAT_101e47dc8 = 0;
    DAT_101e47dd0 = 0x3f800000;
    DAT_101e47dd8 = 0xbf800000;
    DAT_101e47ddc = 0;
    DAT_101e47de0 = 0x1000100000000;
    DAT_101e47de8 = 0;
    DAT_101e47dea = 0;
    DAT_101e47df4 = 0;
    DAT_101e47df8 = 0;
    DAT_101e47ded = 0;
    DAT_101e47dfc = 0x6e;
    DAT_101e47e00 = 1;
  }
  puVar1 = &DAT_101e47da8;
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x274) != '\0') {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x38) + 0x238);
  }
  return puVar1;
}




void FUN_100346524(undefined8 param_1,undefined8 param_2)

{
  operator_new(0x1408);
  DAT_101e47e20 = FUN_1004ecfb4();
  FUN_100346560(param_1,param_2);
  return;
}




void FUN_100346560(long param_1,undefined8 param_2)

{
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [88];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e07d8(auStack_80);
  uStack_c8 = 0x8ba81c4bd7c878a7;
  local_d0 = 0x1e5f2f1a34467c46;
  uStack_b8 = 0xeb2c3293b4e778f3;
  uStack_c0 = 0xe3e08596ab339d45;
  uStack_a8 = 0x5e4131706daadd30;
  local_b0 = 0x336d39318bbe3640;
  uStack_98 = 0x263a7c87e8e39932;
  uStack_a0 = 0xc53488be603f90fe;
  thunk_FUN_1004e0894(auStack_80,&local_d0,0x40);
  if ((param_1 != 0) && ((int)param_2 != 0)) {
    thunk_FUN_1004e0894(auStack_80,param_1,param_2);
  }
  thunk_FUN_1004e13c8(auStack_80,auStack_90);
  FUN_1004ed020(DAT_101e47e20,auStack_90,0x10);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034661c(void)

{
  if (DAT_101e47e20 != (long *)0x0) {
    (**(code **)(*DAT_101e47e20 + 8))();
  }
  DAT_101e47e20 = (long *)0x0;
  return;
}




void FUN_100346650(string *param_1)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  string sVar5;
  int iVar6;
  ulong uVar7;
  string *psVar8;
  string *psVar9;
  
  sVar5 = param_1[0x17];
  sVar2 = *(size_t *)(param_1 + 8);
  if (-1 < (char)sVar5) {
    sVar2 = (ulong)(byte)sVar5;
  }
  if ((int)sVar2 == 0) {
    return;
  }
  uVar7 = (ulong)DAT_101e47e18._7_1_;
  sVar3 = DAT_101e47e10;
  if (-1 < (char)DAT_101e47e18._7_1_) {
    sVar3 = uVar7;
  }
  if (sVar3 == sVar2) {
    puVar4 = DAT_101e47e08;
    if (-1 < (char)DAT_101e47e18._7_1_) {
      puVar4 = &DAT_101e47e08;
    }
    psVar8 = *(string **)param_1;
    if (-1 < (char)sVar5) {
      psVar8 = param_1;
    }
    if ((char)DAT_101e47e18._7_1_ < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar6 = _memcmp(puVar4,psVar8,sVar2);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)(byte)*psVar8 == ((uint)DAT_101e47e08 & 0xff)) {
        psVar9 = (string *)((long)&DAT_101e47e08 + 1);
        do {
          uVar7 = uVar7 - 1;
          psVar8 = psVar8 + 1;
          if (uVar7 == 0) {
            return;
          }
          sVar5 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar5 == *psVar8);
      }
    }
  }
  std::string::operator=((string *)&DAT_101e47e08,param_1);
  sVar5 = param_1[0x17];
  psVar8 = *(string **)param_1;
  if (-1 < (char)sVar5) {
    psVar8 = param_1;
  }
  uVar1 = *(uint *)(param_1 + 8);
  if (-1 < (char)sVar5) {
    uVar1 = (uint)(byte)sVar5;
  }
  FUN_100346560(psVar8,uVar1);
  return;
}




bool FUN_100346750(void)

{
  return DAT_101e47e20 != 0;
}




void FUN_100346764(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100346778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,param_1);
  return;
}




void FUN_10034677c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100346790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e47e20 + 0x18))(DAT_101e47e20,param_1);
  return;
}




void FUN_100346794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001003467b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,param_1,param_2,param_3,param_4);
  return;
}




void FUN_1003467b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001003467d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e47e20 + 0x28))(DAT_101e47e20,param_1,param_2,param_3,param_4);
  return;
}




undefined8 FUN_1003467dc(void)

{
  return 0x7d0000;
}




void FUN_1003467e4(undefined8 param_1)

{
  FUN_1000ee4ec(param_1,*(undefined8 *)(DAT_101d23a68 + 8));
  return;
}




undefined8 FUN_1003467f8(void)

{
  return DAT_101d23a68;
}




undefined1  [16] FUN_100346804(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_1018589c0;
  return auVar1;
}




void FUN_100346810(double param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  DAT_1018589c0 = param_1;
  return;
}




void FUN_100346824(undefined8 param_1)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1004d25b8(&local_60,0x40,param_1);
  FUN_100346890(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346890(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_80;
  undefined1 auStack_7e [2];
  ushort local_7c;
  undefined1 auStack_7a [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_70 = param_1[1];
  local_78 = *param_1;
  uStack_60 = param_1[3];
  local_68 = param_1[2];
  uStack_50 = param_1[5];
  local_58 = param_1[4];
  uStack_40 = param_1[7];
  local_48 = param_1[6];
  _local_7c = 0xe8034200;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_7c;
    uVar4 = 0x44;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x42);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_80 + lVar1);
    _local_80 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_7a,0x42,auStack_7e + lVar1,&local_80)
    ;
    *puVar3 = local_80 >> 8 | local_80 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xe803);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346998(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0xef030300;
  local_3a = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xef03);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346a90(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0xf0030300;
  local_3a = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xf003);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346b88(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0xb040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xb04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346c7c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x34040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3404);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346d74(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_54;
  undefined1 auStack_52 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_54 = 0x35041a00;
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_40 = param_1[2];
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_54;
    uVar4 = 0x1c;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x1a);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_58 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_52,0x1a,auStack_5e + lVar1,&local_58)
    ;
    *puVar3 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3504);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346e74(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x2f040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2f04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100346f68(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x30040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3004);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347060(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x31040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3104);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347154(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x32041200;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x14;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x12);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x12,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3204);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034724c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x3e041200;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x14;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x12);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x12,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3e04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347344(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_70;
  undefined1 auStack_6e [10];
  undefined4 local_64;
  ushort local_5e;
  undefined1 auStack_5c [2];
  undefined8 local_5a;
  undefined8 uStack_52;
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_5e = 0x3f042400;
  uStack_52 = param_1[1];
  local_5a = *param_1;
  uStack_42 = param_1[3];
  local_4a = param_1[2];
  local_3a = *(undefined2 *)(param_1 + 4);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_5e;
    uVar4 = 0x26;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x24);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_70 + lVar1);
    local_64 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_5c,0x24,auStack_6e + lVar1,&local_64)
    ;
    *puVar3 = (ushort)local_64 >> 8 | (ushort)local_64 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3f04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347448(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_46;
  undefined1 auStack_44 [2];
  undefined8 local_42;
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_46 = 0x40040c00;
  local_42 = *param_1;
  local_3a = *(undefined2 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_46;
    uVar4 = 0xe;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xc);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_44,0xc,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4004);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347548(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x41040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4104);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347648(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x42040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4204);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347748(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x43040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4304);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347848(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x44040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4404);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347948(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_60;
  undefined1 auStack_5e [4];
  ushort local_5a;
  undefined1 auStack_58 [2];
  undefined8 local_56;
  undefined5 uStack_4e;
  undefined3 uStack_49;
  undefined5 uStack_46;
  undefined8 uStack_41;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_5a = 0x8b041f00;
  local_56 = *param_1;
  uStack_4e = (undefined5)param_1[1];
  uStack_41 = *(undefined8 *)((long)param_1 + 0x15);
  uStack_49 = (undefined3)*(undefined8 *)((long)param_1 + 0xd);
  uStack_46 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_5a;
    uVar4 = 0x21;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x1f);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_60 + lVar1);
    _local_60 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_58,0x1f,auStack_5e + lVar1,&local_60)
    ;
    *puVar3 = local_60 >> 8 | local_60 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x8b04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347a48(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x45040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4504);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347b40(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x46040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4604);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347c38(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x47040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4704);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347d38(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x33040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3304);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347e30(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x1c041100;
  local_48 = (undefined7)*param_1;
  uStack_41 = (undefined1)*(undefined8 *)((long)param_1 + 7);
  uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 7) >> 8);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x13;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x11);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x11,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1c04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100347f30(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x1d040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1d04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348030(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x1e041200;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x14;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x12);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x12,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1e04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348128(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x1f040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1f04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348220(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_60;
  undefined1 auStack_5e [4];
  ushort local_5a;
  undefined1 auStack_58 [2];
  undefined8 local_56;
  undefined5 uStack_4e;
  undefined3 uStack_49;
  undefined5 uStack_46;
  undefined8 uStack_41;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_5a = 0x20041f00;
  local_56 = *param_1;
  uStack_4e = (undefined5)param_1[1];
  uStack_41 = *(undefined8 *)((long)param_1 + 0x15);
  uStack_49 = (undefined3)*(undefined8 *)((long)param_1 + 0xd);
  uStack_46 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_5a;
    uVar4 = 0x21;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x1f);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_60 + lVar1);
    _local_60 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_58,0x1f,auStack_5e + lVar1,&local_60)
    ;
    *puVar3 = local_60 >> 8 | local_60 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2004);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348320(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [2];
  undefined4 local_5c;
  ushort local_56;
  undefined1 auStack_54 [2];
  undefined8 local_52;
  undefined1 uStack_4a;
  undefined7 uStack_49;
  undefined1 uStack_42;
  undefined8 uStack_41;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_56 = 0x21041b00;
  local_52 = *param_1;
  uStack_4a = (undefined1)param_1[1];
  uStack_41 = *(undefined8 *)((long)param_1 + 0x11);
  uStack_49 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  uStack_42 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_56;
    uVar4 = 0x1d;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x1b);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_5c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_54,0x1b,auStack_5e + lVar1,&local_5c)
    ;
    *puVar3 = (ushort)local_5c >> 8 | (ushort)local_5c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2104);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100348420(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100348470(&local_28,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348470(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_54;
  undefined1 auStack_52 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_54 = 0x22041a00;
  uStack_48 = param_1[1];
  local_50 = *param_1;
  local_40 = param_1[2];
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_54;
    uVar4 = 0x1c;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x1a);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_58 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_52,0x1a,auStack_5e + lVar1,&local_58)
    ;
    *puVar3 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2204);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348570(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x23040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2304);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348664(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_46;
  undefined1 auStack_44 [2];
  undefined8 local_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_46 = 0x27040b00;
  local_42 = *param_1;
  local_3a = *(undefined1 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_46;
    uVar4 = 0xd;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xb);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_44,0xb,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2704);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348764(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [4];
  ushort local_4a;
  undefined1 auStack_48 [2];
  undefined5 local_46;
  undefined3 uStack_41;
  undefined5 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4a = 0x28040f00;
  local_46 = (undefined5)*param_1;
  uStack_41 = (undefined3)*(undefined8 *)((long)param_1 + 5);
  uStack_3e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 5) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4a;
    uVar4 = 0x11;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xf);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_48,0xf,auStack_4e + lVar1,&local_50);
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2804);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348864(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [4];
  ushort local_4a;
  undefined1 auStack_48 [2];
  undefined5 local_46;
  undefined3 uStack_41;
  undefined5 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4a = 0x29040f00;
  local_46 = (undefined5)*param_1;
  uStack_41 = (undefined3)*(undefined8 *)((long)param_1 + 5);
  uStack_3e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 5) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4a;
    uVar4 = 0x11;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xf);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_48,0xf,auStack_4e + lVar1,&local_50);
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2904);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348964(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x2b040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2b04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348a5c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_46;
  undefined1 auStack_44 [2];
  undefined8 local_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_46 = 0xf8030b00;
  local_42 = *param_1;
  local_3a = *(undefined1 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_46;
    uVar4 = 0xd;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xb);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_44,0xb,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xf803);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348b5c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [4];
  ushort local_4a;
  undefined1 auStack_48 [2];
  undefined6 local_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4a = 0xf9031000;
  local_46 = (undefined6)*param_1;
  uStack_40 = (undefined2)*(undefined8 *)((long)param_1 + 6);
  uStack_3e = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 6) >> 0x10);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4a;
    uVar4 = 0x12;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_48,0x10,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xf903);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348c5c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_4e;
  undefined1 auStack_4c [2];
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4e = 0xfb031300;
  uStack_42 = param_1[1];
  local_4a = *param_1;
  local_3a = *(undefined1 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4e;
    uVar4 = 0x15;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x13);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4c,0x13,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xfb03);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348d5c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_50;
  undefined1 auStack_4e [2];
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_50 = 0xfa031600;
  uStack_44 = param_1[1];
  local_4c = *param_1;
  local_3c = *(undefined4 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_50;
    uVar4 = 0x18;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x16);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4e,0x16,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xfa03);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348e5c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x1041200;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x14;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x12);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x12,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x104);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100348f54(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x2041200;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x14;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x12);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x12,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x204);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034904c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_52;
  undefined1 auStack_50 [2];
  undefined8 local_4e;
  undefined5 uStack_46;
  undefined3 uStack_41;
  undefined5 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_52 = 0x3041700;
  local_4e = *param_1;
  uStack_46 = (undefined5)param_1[1];
  uStack_41 = (undefined3)*(undefined8 *)((long)param_1 + 0xd);
  uStack_3e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_52;
    uVar4 = 0x19;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x17);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_58 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_50,0x17,auStack_5e + lVar1,&local_58)
    ;
    *puVar3 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x304);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034914c(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint param_6)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_5[2] & 0xff00ff00) >> 8 | (param_5[2] & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_1003491b0(&local_30,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003491b0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_60;
  undefined1 auStack_5e [2];
  ushort local_5c;
  undefined1 auStack_5a [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_5c = 0x6042200;
  uStack_50 = param_1[1];
  local_58 = *param_1;
  uStack_40 = param_1[3];
  local_48 = param_1[2];
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_5c;
    uVar4 = 0x24;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x22);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_60 + lVar1);
    _local_60 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_5a,0x22,auStack_5e + lVar1,&local_60)
    ;
    *puVar3 = local_60 >> 8 | local_60 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x604);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003492ac(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x7041200;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x14;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x12);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x12,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x704);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003493a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_4e;
  undefined1 auStack_4c [2];
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4e = 0x9041300;
  uStack_42 = param_1[1];
  local_4a = *param_1;
  local_3a = *(undefined1 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4e;
    uVar4 = 0x15;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x13);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4c,0x13,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x904);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003494a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x2e040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x2e04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003495a4(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_42;
  undefined1 auStack_40 [2];
  undefined4 local_3e;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_3e = *param_1;
  _local_42 = 0x11040700;
  local_3a = *(undefined1 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_42;
    uVar4 = 9;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,7);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_40,7,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1104);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003496a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [4];
  ushort local_4a;
  undefined1 auStack_48 [2];
  undefined5 local_46;
  undefined3 uStack_41;
  undefined5 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4a = 0x12040f00;
  local_46 = (undefined5)*param_1;
  uStack_41 = (undefined3)*(undefined8 *)((long)param_1 + 5);
  uStack_3e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 5) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4a;
    uVar4 = 0x11;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xf);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_48,0xf,auStack_4e + lVar1,&local_50);
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1204);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003497a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_4e;
  undefined1 auStack_4c [2];
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4e = 0x13041300;
  uStack_42 = param_1[1];
  local_4a = *param_1;
  local_3a = *(undefined1 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4e;
    uVar4 = 0x15;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x13);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4c,0x13,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1304);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003498a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_46;
  undefined1 auStack_44 [2];
  undefined8 local_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_46 = 0x15040b00;
  local_42 = *param_1;
  local_3a = *(undefined1 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_46;
    uVar4 = 0xd;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xb);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_44,0xb,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1504);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1003499a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_4e;
  undefined1 auStack_4c [2];
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4e = 0x16041300;
  uStack_42 = param_1[1];
  local_4a = *param_1;
  local_3a = *(undefined1 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4e;
    uVar4 = 0x15;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x13);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4c,0x13,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1604);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100349aa4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_52;
  undefined1 auStack_50 [2];
  undefined8 local_4e;
  undefined5 uStack_46;
  undefined3 uStack_41;
  undefined5 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_52 = 0x17041700;
  local_4e = *param_1;
  uStack_46 = (undefined5)param_1[1];
  uStack_41 = (undefined3)*(undefined8 *)((long)param_1 + 0xd);
  uStack_3e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_52;
    uVar4 = 0x19;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x17);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_58 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_50,0x17,auStack_5e + lVar1,&local_58)
    ;
    *puVar3 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1704);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100349ba4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x18040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1804);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100349c9c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [4];
  ushort local_4a;
  undefined1 auStack_48 [2];
  undefined5 local_46;
  undefined3 uStack_41;
  undefined5 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4a = 0x1a040f00;
  local_46 = (undefined5)*param_1;
  uStack_41 = (undefined3)*(undefined8 *)((long)param_1 + 5);
  uStack_3e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 5) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4a;
    uVar4 = 0x11;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xf);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_48,0xf,auStack_4e + lVar1,&local_50);
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1a04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100349d9c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x1b040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1b04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100349e94(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x37040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3704);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100349f88(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_42;
  undefined1 auStack_40 [2];
  undefined4 local_3e;
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_3e = *param_1;
  _local_42 = 0x38040800;
  local_3a = *(undefined2 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_42;
    uVar4 = 10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,8);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_40,8,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3804);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a088(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x39040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3904);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a180(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x4d040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4d04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034a278(undefined4 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = param_1;
  FUN_10034a2a0(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a2a0(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x84040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x8404);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034a394(uint param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034a3c0(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a3c0(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x86040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x8604);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a4b4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x3a040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3a04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a5ac(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x3b040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3b04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a6a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_46;
  undefined1 auStack_44 [2];
  undefined8 local_42;
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_46 = 0x3c040c00;
  local_42 = *param_1;
  local_3a = *(undefined2 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_46;
    uVar4 = 0xe;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xc);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_44,0xc,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3c04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a7a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48;
  undefined1 auStack_46 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_48 = 0x3d040e00;
  local_44 = *param_1;
  local_3c = *(undefined4 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_48;
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xe);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_46,0xe,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x3d04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034a8a4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_4e;
  undefined1 auStack_4c [2];
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4e = 0xd041300;
  uStack_42 = param_1[1];
  local_4a = *param_1;
  local_3a = *(undefined1 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4e;
    uVar4 = 0x15;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x13);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4c,0x13,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xd04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034a9a4(uint param_1,undefined1 param_2,undefined1 param_3,uint *param_4,uint param_5,
                  uint *param_6,uint param_7)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  ushort local_18;
  undefined1 local_16;
  undefined1 local_15;
  
  uVar1 = (param_7 & 0xff00ff00) >> 8 | (param_7 & 0xff00ff) << 8;
  local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_6 & 0xff00ff00) >> 8 | (*param_6 & 0xff00ff) << 8;
  uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4[2] & 0xff00ff00) >> 8 | (param_4[2] & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  local_18 = (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xff00ff) << 8);
  local_16 = param_2;
  local_15 = param_3;
  FUN_10034aa10(&local_30,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034aa10(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [2];
  undefined4 local_5c;
  ushort local_58;
  undefined1 auStack_56 [2];
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_58 = 0xe041e00;
  local_54 = *param_1;
  uStack_4c = (undefined4)param_1[1];
  uStack_40 = *(undefined8 *)((long)param_1 + 0x14);
  uStack_48 = (undefined4)*(undefined8 *)((long)param_1 + 0xc);
  uStack_44 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_58;
    uVar4 = 0x20;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x1e);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_5c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_56,0x1e,auStack_5e + lVar1,&local_5c)
    ;
    *puVar3 = (ushort)local_5c >> 8 | (ushort)local_5c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xe04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034ab10(uint param_1,undefined1 param_2,undefined1 param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint param_7,uint *param_8,uint param_9)

{
  uint uVar1;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  ushort local_18;
  undefined1 local_16;
  undefined1 local_15;
  
  uVar1 = (param_9 & 0xff00ff00) >> 8 | (param_9 & 0xff00ff) << 8;
  local_40 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_8 & 0xff00ff00) >> 8 | (*param_8 & 0xff00ff) << 8;
  uStack_3c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_38 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  uStack_34 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4[2] & 0xff00ff00) >> 8 | (param_4[2] & 0xff00ff) << 8;
  local_30 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uStack_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*param_6 & 0xff00ff00) >> 8 | (*param_6 & 0xff00ff) << 8;
  uStack_24 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_6[1] & 0xff00ff00) >> 8 | (param_6[1] & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  local_18 = (ushort)(param_7 >> 8) & 0xff | (ushort)((param_7 & 0xff00ff) << 8);
  local_16 = param_2;
  local_15 = param_3;
  FUN_10034ab9c(&local_40,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034ab9c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_70;
  undefined1 auStack_6e [2];
  undefined4 local_6c;
  ushort local_68;
  undefined1 auStack_66 [2];
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_68 = 0xf042e00;
  uStack_5c = param_1[1];
  local_64 = *param_1;
  local_54 = param_1[2];
  uStack_4c = (undefined4)param_1[3];
  uStack_40 = *(undefined8 *)((long)param_1 + 0x24);
  uStack_48 = (undefined4)*(undefined8 *)((long)param_1 + 0x1c);
  uStack_44 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x1c) >> 0x20);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_68;
    uVar4 = 0x30;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x2e);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_70 + lVar1);
    local_6c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_66,0x2e,auStack_6e + lVar1,&local_6c)
    ;
    *puVar3 = (ushort)local_6c >> 8 | (ushort)local_6c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0xf04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034aca0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_4e;
  undefined1 auStack_4c [2];
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4e = 0x10041300;
  uStack_42 = param_1[1];
  local_4a = *param_1;
  local_3a = *(undefined1 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4e;
    uVar4 = 0x15;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x13);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4c,0x13,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x1004);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034ada0(uint param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034adcc(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034adcc(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x48040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4804);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034aec0(uint param_1,uint param_2)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034aef0(&local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034aef0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x49040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4904);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034afe8(uint *param_1,uint param_2)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  local_20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uStack_1c = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034b02c(&local_20,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b02c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c;
  undefined1 auStack_4a [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4c = 0x4a041200;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4c;
    uVar4 = 0x14;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x12);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&local_50 + lVar1);
    _local_50 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4a,0x12,auStack_4e + lVar1,&local_50)
    ;
    *puVar3 = local_50 >> 8 | local_50 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4a04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b124(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_46;
  undefined1 auStack_44 [2];
  undefined8 local_42;
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_46 = 0x4b040c00;
  local_42 = *param_1;
  local_3a = *(undefined2 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_46;
    uVar4 = 0xe;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xc);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_44,0xc,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4b04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b224(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_52;
  undefined1 auStack_50 [2];
  undefined8 local_4e;
  undefined5 uStack_46;
  undefined3 uStack_41;
  undefined5 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_52 = 0x4c041700;
  local_4e = *param_1;
  uStack_46 = (undefined5)param_1[1];
  uStack_41 = (undefined3)*(undefined8 *)((long)param_1 + 0xd);
  uStack_3e = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_52;
    uVar4 = 0x19;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x17);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_58 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_50,0x17,auStack_5e + lVar1,&local_58)
    ;
    *puVar3 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4c04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b324(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_52;
  undefined1 auStack_50 [2];
  undefined8 local_4e;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_52 = 0x4e041800;
  local_4e = *param_1;
  uStack_46 = (undefined6)param_1[1];
  uStack_40 = (undefined2)*(undefined8 *)((long)param_1 + 0xe);
  uStack_3e = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0xe) >> 0x10);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_52;
    uVar4 = 0x1a;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x18);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_58 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_50,0x18,auStack_5e + lVar1,&local_58)
    ;
    *puVar3 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4e04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034b424(uint param_1,uint param_2,undefined1 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint local_28;
  undefined1 local_24;
  uint local_23;
  uint local_1f;
  uint local_1b;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_23 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_1f = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8;
  local_1b = uVar1 >> 0x10 | uVar1 << 0x10;
  local_24 = param_3;
  FUN_10034b470(&local_28,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b470(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_4e;
  undefined1 auStack_4c [2];
  undefined8 local_4a;
  undefined8 uStack_42;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_4e = 0x4f041300;
  uStack_42 = param_1[1];
  local_4a = *param_1;
  local_3a = *(undefined1 *)(param_1 + 2);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_4e;
    uVar4 = 0x15;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0x13);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_60 + lVar1);
    local_54 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_4c,0x13,auStack_5e + lVar1,&local_54)
    ;
    *puVar3 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x4f04);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034b570(double param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = ((uint)(float)param_1 & 0xff00ff00) >> 8 | ((uint)(float)param_1 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10034b5a4(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b5a4(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034b694(undefined1 param_1)

{
  undefined1 local_18 [8];
  
  local_18[0] = param_1;
  FUN_10034b6bc(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b6bc(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x72040300;
  local_3a = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x7204);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034b7b4(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_10034b7dc(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b7dc(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x74040300;
  local_3a = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x7404);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b8d4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_46;
  undefined1 auStack_44 [2];
  undefined8 local_42;
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_46 = 0x89040c00;
  local_42 = *param_1;
  local_3a = *(undefined2 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_46;
    uVar4 = 0xe;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,0xc);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_4c = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_44,0xc,auStack_4e + lVar1,&local_4c);
    *puVar3 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x8904);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034b9d4(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_42;
  undefined1 auStack_40 [2];
  undefined4 local_3e;
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_3e = *param_1;
  _local_42 = 0x81040800;
  local_3a = *(undefined2 *)(param_1 + 1);
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_42;
    uVar4 = 10;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,8);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_40,8,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x8104);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034bad4(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x82040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x8204);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034bbc8(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x83040600;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x8304);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10034bcbc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x90040a00;
  local_40 = *param_1;
  if ((DAT_101e47e20 == (long *)0x0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = (**(code **)(*DAT_101e47e20 + 0x10))(DAT_101e47e20,10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    (**(code **)(*DAT_101e47e20 + 0x20))(DAT_101e47e20,auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  thunk_FUN_100147938(puVar3,uVar4,0x9004);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034bdb4(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*HeroManifest*",0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,"build://Levels/HeroManifest.def");
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,"*HeroManifest*",0);
  return;
}




long FUN_10034be08(char *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_1 != (char *)0x0) {
    plVar2 = (long *)FUN_10034bdb4();
    puVar3 = *(undefined8 **)*plVar2;
    plVar2 = (long *)*plVar2;
    while (puVar3 != (undefined8 *)0x0) {
      iVar1 = _strcmp(param_1,(char *)*puVar3);
      if (iVar1 == 0) {
        return *plVar2;
      }
      puVar3 = (undefined8 *)plVar2[1];
      plVar2 = plVar2 + 1;
    }
  }
  return 0;
}




undefined8 FUN_10034be60(uint *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0xffff) {
    return 0;
  }
  uVar1 = FUN_10034be08(**(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*param_1 * 8));
  return uVar1;
}




bool FUN_10034be94(char *param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar3 = (long *)FUN_10034bdb4();
  puVar5 = (undefined8 *)*plVar3;
  puVar4 = (undefined8 *)*puVar5;
  if (puVar4 == (undefined8 *)0x0) {
    bVar1 = false;
  }
  else {
    do {
      puVar5 = puVar5 + 1;
      iVar2 = _strcmp(param_1,(char *)*puVar4);
      bVar1 = iVar2 == 0;
      if (iVar2 == 0) {
        return true;
      }
      puVar4 = (undefined8 *)*puVar5;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return bVar1;
}




uint FUN_10034bef0(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = _strcmp(*(char **)(param_1 + 0x10),*(char **)(param_2 + 0x10));
  return uVar1 >> 0x1f;
}




int FUN_10034bf10(int param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_10034bdb4();
  plVar2 = (long *)*plVar2;
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      plVar2 = plVar2 + 1;
      if ((param_1 == 0) || (*(char *)(lVar3 + 8) != '\0')) {
        iVar1 = iVar1 + 1;
      }
      lVar3 = *plVar2;
    } while (lVar3 != 0);
  }
  return iVar1;
}




void FUN_10034bf64(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  uVar1 = FUN_10034bfd0(DAT_101d90978,param_1);
  FUN_1010a14fc(0,uVar1);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




char * FUN_10034bfd0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = FUN_1004d2524(param_2);
  iVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  if (*(uint *)(param_1 + 0x38) != 0) {
    uVar3 = 0;
    do {
      if (iVar2 == *(int *)(*(long *)(param_1 + 0x30) + uVar3 * 4)) {
        return *(char **)(*(long *)(**(long **)(param_1 + 0x40) + uVar3 * 8) + 8);
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)(param_1 + 0x38) != uVar3);
  }
  return "";
}




void FUN_10034c060(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  uVar1 = FUN_10034bfd0(DAT_101d90978,param_1);
  FUN_1010a14fc(0,uVar1);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




void FUN_10034c0cc(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,param_1,0);
  if (lVar3 == 0) {
    uVar2 = FUN_10034bfd0(DAT_101d90978,param_1);
    FUN_1010a14fc(0,uVar2);
    uVar2 = FUN_1010a1520();
    lVar3 = FUN_1010a0e0c(uVar2,0,param_1,0);
  }
  iVar1 = *(int *)(lVar3 + 0xd4);
  *param_2 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + (long)*(int *)(lVar3 + 0xd0) * 8);
  param_2[1] = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + (long)iVar1 * 8);
  param_2[2] = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + (long)*(int *)(lVar3 + 0xd8) * 8);
  return;
}




uint * FUN_10034c160(char *param_1,long param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_1;
    }
  }
  if (uVar3 != *(uint *)(param_2 + 0x238)) {
    puVar4 = *(undefined8 **)(param_2 + 0x230);
    puVar2 = (uint *)*puVar4;
    while ((puVar2 != (uint *)0x0 && (puVar4 = puVar4 + 1, uVar3 != *puVar2))) {
      puVar2 = (uint *)*puVar4;
    }
    return puVar2;
  }
  return (uint *)(param_2 + 0x238);
}




void FUN_10034c1d8(char *param_1,long param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_1;
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0xa8);
  puVar2 = (uint *)*puVar4;
  while ((puVar2 != (uint *)0x0 && (puVar4 = puVar4 + 1, uVar3 != *puVar2))) {
    puVar2 = (uint *)*puVar4;
  }
  return;
}




void FUN_10034c23c(char *param_1,long param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_1;
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x1b0);
  puVar2 = (uint *)*puVar4;
  while ((puVar2 != (uint *)0x0 && (puVar4 = puVar4 + 1, uVar3 != *puVar2))) {
    puVar2 = (uint *)*puVar4;
  }
  return;
}




undefined8 FUN_10034c2a0(char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = 0;
    do {
      iVar1 = _strcasecmp(param_1,(char *)*puVar2);
      if (iVar1 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)lVar3;
        }
        return param_2[lVar3];
      }
      puVar2 = (undefined8 *)param_2[lVar3 + 1];
      lVar3 = lVar3 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_10034c30c(undefined8 param_1,long param_2)

{
  FUN_10034c2a0(param_1,*(undefined8 *)(param_2 + 0xb0));
  return;
}




void FUN_10034c314(undefined8 param_1,long param_2)

{
  FUN_10034c2a0(param_1,*(undefined8 *)(param_2 + 0x28));
  return;
}




undefined8 FUN_10034c31c(char *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0x228);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = 0;
    do {
      iVar1 = _strcasecmp(param_1,(char *)*puVar2);
      if (iVar1 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)lVar4;
        }
        return puVar3[lVar4];
      }
      puVar2 = (undefined8 *)puVar3[lVar4 + 1];
      lVar4 = lVar4 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}




undefined8 FUN_10034c388(char *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0x1a8);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = 0;
    do {
      iVar1 = _strcasecmp(param_1,(char *)*puVar2);
      if (iVar1 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)lVar4;
        }
        return puVar3[lVar4];
      }
      puVar2 = (undefined8 *)puVar3[lVar4 + 1];
      lVar4 = lVar4 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}




long FUN_10034c3f4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    param_1 = 0;
  }
  else {
    iVar1 = FUN_1004d2538(*(undefined8 *)(param_1 + 0x68));
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      uVar2 = FUN_1010a1520();
      lVar3 = FUN_1010a0e0c(uVar2,0,uVar4,0);
      return lVar3;
    }
    param_1 = param_1 + 0x70;
  }
  return param_1;
}




void FUN_10034c450(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_2,0);
  return;
}




undefined4 FUN_10034c47c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x94);
  uVar4 = 5;
  if (iVar3 < iVar2 && *(int *)(param_1 + 0x8c) < iVar2) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (iVar3 <= iVar2 || iVar3 <= *(int *)(param_1 + 0x8c)) {
    uVar1 = uVar4;
  }
  return uVar1;
}




string * FUN_10034c4a4(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1000ee4ec(local_38);
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




undefined8 * FUN_10034c4f8(undefined8 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char *****pppppcVar1;
  undefined1 **ppuVar2;
  uint uVar3;
  size_t sVar4;
  FILE *pFVar5;
  undefined8 *extraout_x0;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  char *pcVar9;
  long lVar10;
  size_t sVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_528 [1024];
  long lStack_128;
  undefined1 *puStack_100;
  size_t sStack_f8;
  undefined8 uStack_f0;
  char ****appppcStack_e8 [2];
  char cStack_d1;
  undefined1 *local_80;
  size_t local_78;
  undefined8 local_70;
  char ****local_68 [2];
  char local_51;
  
  ppuVar2 = &local_80;
  if ((param_3 != 0) && ((int)param_4 != 0)) {
    local_80 = (undefined1 *)0x0;
    local_78 = 0;
    local_70 = 0;
    lVar10 = param_3;
    if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
      sVar11 = param_1[1];
      sVar4 = _strlen(param_2);
      param_1 = (undefined8 *)*param_1;
    }
    else {
      sVar11 = (size_t)*(byte *)((long)param_1 + 0x17);
      sVar4 = _strlen(param_2);
    }
    uVar12 = sVar11 + sVar4;
    if (0xffffffffffffffef < uVar12) {
      auVar13 = FUN_10049a5b8();
      pcVar9 = auVar13._8_8_;
      puVar6 = auVar13._0_8_;
      ppuVar2 = &puStack_100;
      puStack_100 = (undefined1 *)0x0;
      sStack_f8 = 0;
      uStack_f0 = 0;
      if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
        sVar11 = puVar6[1];
        sVar4 = _strlen(pcVar9);
        puVar6 = (undefined8 *)*puVar6;
      }
      else {
        sVar11 = (size_t)*(byte *)((long)puVar6 + 0x17);
        sVar4 = _strlen(pcVar9);
      }
      uVar12 = sVar11 + sVar4;
      if (uVar12 < 0xfffffffffffffff0) {
        if (uVar12 < 0x17) {
          uStack_f0 = CONCAT17((char)sVar11,(undefined7)uStack_f0);
        }
        else {
          uVar12 = uVar12 + 0x10 & 0xfffffffffffffff0;
          puStack_100 = operator_new(uVar12);
          uStack_f0 = uVar12 | 0x8000000000000000;
          ppuVar2 = (undefined1 **)puStack_100;
          sStack_f8 = sVar11;
        }
        if (sVar11 != 0) {
          _memcpy(ppuVar2,puVar6,sVar11);
        }
        *(undefined1 *)((long)ppuVar2 + sVar11) = 0;
        std::string::append((char *)&puStack_100,(ulong)pcVar9);
        std::string::string((string *)appppcStack_e8,(string *)&puStack_100);
        if ((long)uStack_f0 < 0) {
          operator_delete(puStack_100);
        }
        pppppcVar1 = (char *****)appppcStack_e8[0];
        if (-1 < cStack_d1) {
          pppppcVar1 = appppcStack_e8;
        }
        puVar6 = (undefined8 *)FUN_1004d28e4(pppppcVar1);
        if (((int)puVar6 != 0) && (lVar10 != 0)) {
          pppppcVar1 = (char *****)appppcStack_e8[0];
          if (-1 < cStack_d1) {
            pppppcVar1 = appppcStack_e8;
          }
          pFVar5 = _fopen((char *)pppppcVar1,"rb");
          if (pFVar5 != (FILE *)0x0) {
            pppppcVar1 = (char *****)appppcStack_e8[0];
            if (-1 < cStack_d1) {
              pppppcVar1 = appppcStack_e8;
            }
            uVar7 = FUN_1004d2904(pppppcVar1);
            FUN_100116af8(lVar10,uVar7,0);
            FUN_1004d28a8(*(undefined8 *)(lVar10 + 8),uVar7,1,pFVar5);
            _fclose(pFVar5);
          }
        }
        if (cStack_d1 < '\0') {
          operator_delete(appppcStack_e8[0]);
        }
        return puVar6;
      }
      FUN_10049a5b8();
      lStack_128 = *(long *)PTR____stack_chk_guard_101444218;
      FUN_1004e20a8(&DAT_101d911b0,2,auStack_528,0x400);
      puVar6 = (undefined8 *)FUN_1004d2538(auStack_528);
      if ((((ulong)puVar6 & 1) == 0) &&
         (puVar6 = (undefined8 *)FUN_1004d28e4(auStack_528), (int)puVar6 != 0)) {
        pvVar8 = operator_new(0x18);
        puVar6 = (undefined8 *)FUN_10034c4a4(pvVar8,auStack_528);
        DAT_101e47e70 = puVar6;
      }
      if (*(long *)PTR____stack_chk_guard_101444218 == lStack_128) {
        return puVar6;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (uVar12 < 0x17) {
      local_70 = CONCAT17((char)sVar11,(undefined7)local_70);
    }
    else {
      uVar12 = uVar12 + 0x10 & 0xfffffffffffffff0;
      local_80 = operator_new(uVar12);
      local_70 = uVar12 | 0x8000000000000000;
      ppuVar2 = (undefined1 **)local_80;
      local_78 = sVar11;
    }
    if (sVar11 != 0) {
      _memcpy(ppuVar2,param_1,sVar11);
    }
    *(undefined1 *)((long)ppuVar2 + sVar11) = 0;
    std::string::append((char *)&local_80,(ulong)param_2);
    std::string::string((string *)local_68,(string *)&local_80);
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    pppppcVar1 = (char *****)local_68[0];
    if (-1 < local_51) {
      pppppcVar1 = local_68;
    }
    pFVar5 = _fopen((char *)pppppcVar1,"wb");
    param_1 = (undefined8 *)0x0;
    if (pFVar5 != (FILE *)0x0) {
      FUN_1004d28c8(param_3,param_4,1,pFVar5);
      uVar3 = _fclose(pFVar5);
      param_1 = (undefined8 *)(ulong)uVar3;
    }
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
      param_1 = extraout_x0;
    }
  }
  return param_1;
}




ulong FUN_10034c660(undefined8 *param_1,char *param_2,long param_3)

{
  char *****pppppcVar1;
  undefined1 **ppuVar2;
  size_t sVar3;
  ulong uVar4;
  FILE *pFVar5;
  undefined8 uVar6;
  void *pvVar7;
  size_t sVar8;
  undefined1 auStack_4a8 [1024];
  long lStack_a8;
  undefined1 *local_80;
  size_t local_78;
  undefined8 local_70;
  char ****local_68 [2];
  char local_51;
  
  ppuVar2 = &local_80;
  local_80 = (undefined1 *)0x0;
  local_78 = 0;
  local_70 = 0;
  if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
    sVar8 = param_1[1];
    sVar3 = _strlen(param_2);
    param_1 = (undefined8 *)*param_1;
  }
  else {
    sVar8 = (size_t)*(byte *)((long)param_1 + 0x17);
    sVar3 = _strlen(param_2);
  }
  uVar4 = sVar8 + sVar3;
  if (uVar4 < 0xfffffffffffffff0) {
    if (uVar4 < 0x17) {
      local_70 = CONCAT17((char)sVar8,(undefined7)local_70);
    }
    else {
      uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
      local_80 = operator_new(uVar4);
      local_70 = uVar4 | 0x8000000000000000;
      ppuVar2 = (undefined1 **)local_80;
      local_78 = sVar8;
    }
    if (sVar8 != 0) {
      _memcpy(ppuVar2,param_1,sVar8);
    }
    *(undefined1 *)((long)ppuVar2 + sVar8) = 0;
    std::string::append((char *)&local_80,(ulong)param_2);
    std::string::string((string *)local_68,(string *)&local_80);
    if ((long)local_70 < 0) {
      operator_delete(local_80);
    }
    pppppcVar1 = (char *****)local_68[0];
    if (-1 < local_51) {
      pppppcVar1 = local_68;
    }
    uVar4 = FUN_1004d28e4(pppppcVar1);
    if (((int)uVar4 != 0) && (param_3 != 0)) {
      pppppcVar1 = (char *****)local_68[0];
      if (-1 < local_51) {
        pppppcVar1 = local_68;
      }
      pFVar5 = _fopen((char *)pppppcVar1,"rb");
      if (pFVar5 != (FILE *)0x0) {
        pppppcVar1 = (char *****)local_68[0];
        if (-1 < local_51) {
          pppppcVar1 = local_68;
        }
        uVar6 = FUN_1004d2904(pppppcVar1);
        FUN_100116af8(param_3,uVar6,0);
        FUN_1004d28a8(*(undefined8 *)(param_3 + 8),uVar6,1,pFVar5);
        _fclose(pFVar5);
      }
    }
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    return uVar4;
  }
  FUN_10049a5b8();
  lStack_a8 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e20a8(&DAT_101d911b0,2,auStack_4a8,0x400);
  uVar4 = FUN_1004d2538(auStack_4a8);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_1004d28e4(auStack_4a8), (int)uVar4 != 0)) {
    pvVar7 = operator_new(0x18);
    uVar4 = FUN_10034c4a4(pvVar7,auStack_4a8);
    DAT_101e47e70 = uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_a8) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034c80c(void)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004e20a8(&DAT_101d911b0,2,auStack_428,0x400);
  uVar2 = FUN_1004d2538(auStack_428);
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_1004d28e4(auStack_428), iVar1 != 0)) {
    pvVar3 = operator_new(0x18);
    DAT_101e47e70 = FUN_10034c4a4(pvVar3,auStack_428);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10034c8a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_101e47e70;
  if (DAT_101e47e70 != (undefined8 *)0x0) {
    if (*(char *)((long)DAT_101e47e70 + 0x17) < '\0') {
      operator_delete((void *)*DAT_101e47e70);
    }
    operator_delete(puVar1);
  }
  DAT_101e47e70 = (undefined8 *)0x0;
  return;
}




undefined8 FUN_10034c8e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_101e47e70 != 0 && param_1 != 0) && (uVar1 = FUN_1004d2538(), (uVar1 & 1) == 0)) {
    uVar2 = FUN_10034c660(DAT_101e47e70,param_1,param_2);
    return uVar2;
  }
  return 0;
}




void FUN_10034c944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (DAT_101e47e70 != 0) {
    local_48 = (undefined8 ***)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_10034c9cc(param_1,&local_48,0);
    if (DAT_101e47e70 != 0) {
      pppuVar1 = (undefined8 ***)local_48;
      if (-1 < local_38) {
        pppuVar1 = &local_48;
      }
      FUN_10034c4f8(DAT_101e47e70,pppuVar1,param_2,param_3);
    }
    if (local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return;
}




void FUN_10034c9cc(undefined8 *param_1,string *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  void *local_58 [2];
  char local_41;
  char local_40 [24];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  uVar2 = FUN_10049a5c4(puVar1,uVar3 & 0xffffffff,param_3);
  uVar3 = 0;
  pcVar4 = local_40;
  do {
    *pcVar4 = s_0123456789ABCDEF_101867290[uVar2 >> (uVar3 & 0x3f) & 0xf];
    uVar3 = uVar3 + 4;
    pcVar4 = pcVar4 + 1;
  } while (uVar3 != 0x40);
  local_40[0x10] = 0;
  FUN_1000ee4ec(local_58,local_40);
  std::string::operator=(param_2,(string *)local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined8 FUN_10034ca9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  if (DAT_101e47e70 == 0) {
    uVar2 = 0;
  }
  else {
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_10034c9cc(param_1,&local_38,0);
    pppuVar1 = (undefined8 ***)local_38;
    if (-1 < local_28) {
      pppuVar1 = &local_38;
    }
    uVar2 = FUN_10034c8e0(pppuVar1,param_2);
    if (local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return uVar2;
}




undefined8 FUN_10034cb1c(undefined8 param_1)

{
  FUN_1003a4e5c();
  return param_1;
}




undefined1 FUN_10034cb40(void)

{
  return DAT_101d23a38;
}




void FUN_10034cb4c(undefined1 param_1)

{
  DAT_101d23a38 = param_1;
  return;
}




undefined1 FUN_10034cb58(void)

{
  return DAT_101d23a39;
}




void FUN_10034cb64(undefined1 param_1)

{
  DAT_101d23a39 = param_1;
  FUN_1000153b4(&DAT_101d23a40);
  return;
}




void FUN_10034cb78(undefined4 param_1)

{
  DAT_1018589d0 = param_1;
  return;
}




undefined4 FUN_10034cb84(void)

{
  return DAT_1018589d0;
}




void FUN_10034cb90(string *param_1)

{
  std::string::operator=((string *)&DAT_101d23a50,param_1);
  return;
}




undefined8 * FUN_10034cba0(void)

{
  return &DAT_101d23a50;
}




bool FUN_10034cbac(int param_1)

{
  return param_1 - 1U < 6;
}




bool FUN_10034cbbc(int param_1)

{
  return param_1 - 7U < 5;
}




void FUN_10034cbcc(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_10034cbd4(byte *param_1)

{
  *param_1 = *param_1 & 0xfc;
  return;
}




void FUN_10034cbe4(undefined4 *param_1)

{
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfc;
  return;
}




bool FUN_10034cbf8(int param_1)

{
  return param_1 < 7;
}




uint FUN_10034cc04(uint param_1)

{
  return 99U >> (ulong)(param_1 & 0x1f) & (uint)(param_1 < 7);
}




uint FUN_10034cc1c(uint param_1)

{
  return 0x5fU >> (ulong)(param_1 & 0x1f) & (uint)(param_1 < 7);
}




undefined4 FUN_10034cc34(void)

{
  if (DAT_101d23a68 != (undefined4 *)0x0) {
    return *DAT_101d23a68;
  }
  return 0x40;
}




void FUN_10034cc50(string *param_1)

{
  std::string::operator=((string *)&DAT_101d23a70,param_1);
  return;
}




undefined8 * FUN_10034cc60(void)

{
  return &DAT_101d23a70;
}




void FUN_10034cc6c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = DAT_101d23a70;
  if (-1 < DAT_101d23a80._7_1_) {
    puVar1 = &DAT_101d23a70;
  }
  uVar2 = FUN_1010a1520();
  DAT_101d23a68 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  return;
}




void FUN_10034ccb8(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  uVar2 = FUN_1010a1520();
  FUN_1010a0e0c(uVar2,0,plVar1,0);
  return;
}




void FUN_10034ccf0(void)

{
  DAT_101d23a68 = 0;
  DAT_1018589d4 = 0xbf800000;
  return;
}




void FUN_10034cd08(undefined4 param_1)

{
  DAT_1018589d4 = param_1;
  return;
}




undefined4 FUN_10034cd14(void)

{
  return DAT_1018589d4;
}




undefined8 FUN_10034cd20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_10034cd28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_10034cd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




void FUN_10034cd38(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x70),0);
  thunk_FUN_1004e439c(param_1,uVar1);
  return;
}




void FUN_10034cd68(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x68),0);
  thunk_FUN_1004e439c(param_1,uVar1);
  return;
}




void FUN_10034cd98(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150(*(undefined8 *)(param_2 + 0x78),0);
  thunk_FUN_1004e439c(param_1,uVar1);
  return;
}




undefined1 FUN_10034cdc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3e);
}




undefined1 FUN_10034cdd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3f);
}




undefined1 FUN_10034cdd8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}




undefined1 FUN_10034cde0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}




undefined1 FUN_10034cde8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}




undefined1 FUN_10034cdf0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}




undefined1 FUN_10034cdf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}




bool FUN_10034ce00(long param_1)

{
  if (*(char *)(param_1 + 0x3f) != '\0') {
    return false;
  }
  return *(char *)(param_1 + 0x40) != '\0';
}




bool FUN_10034ce20(long param_1)

{
  if (*(char *)(param_1 + 0x3e) != '\0') {
    return *(char *)(param_1 + 0x3f) != '\0';
  }
  return false;
}




bool FUN_10034ce40(long param_1)

{
  if (*(char *)(param_1 + 0x3e) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x4a) != '\0';
}




undefined1 FUN_10034ce60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4a);
}




bool FUN_10034ce68(long param_1)

{
  return *(char *)(param_1 + 0x52) == '\0';
}




undefined1 FUN_10034ce78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x45);
}




undefined1 FUN_10034ce80(long param_1)

{
  return *(undefined1 *)(param_1 + 0x46);
}




undefined1 FUN_10034ce88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x47);
}




undefined1 FUN_10034ce90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4e);
}




undefined8 FUN_10034ce98(void)

{
  return 1;
}




bool FUN_10034cea0(long param_1)

{
  return *(char *)(param_1 + 0x39) == '\0';
}




bool FUN_10034ceb0(long param_1)

{
  return *(char *)(param_1 + 0x3a) == '\0';
}




undefined1 FUN_10034cec0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}




undefined1 FUN_10034cec8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3d);
}




bool FUN_10034ced0(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)(param_1 + 0x28);
  if (((piVar1 != (int *)0x0) && (*piVar1 == 5)) &&
     (piVar1 = (int *)(*(undefined8 **)(param_1 + 0x28))[1], piVar1 != (int *)0x0)) {
    return *piVar1 == 5;
  }
  return false;
}




undefined4 FUN_10034cf08(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    puVar1 = (undefined4 *)*puVar2;
    while (puVar1 != (undefined4 *)0x0) {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return *puVar1;
      }
      puVar2 = puVar2 + 1;
      puVar1 = (undefined4 *)*puVar2;
    }
  }
  return 0;
}




undefined1 FUN_10034cf48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4b);
}




undefined1 FUN_10034cf50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4d);
}




undefined1 FUN_10034cf58(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}




undefined1 FUN_10034cf60(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4f);
}




bool FUN_10034cf68(long param_1)

{
  if (*(char *)(param_1 + 0x3a) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x3b) != '\0';
}




undefined1 FUN_10034cf88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}




undefined1 FUN_10034cf90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}




undefined1 FUN_10034cf98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}




undefined1 FUN_10034cfa0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}




undefined1 FUN_10034cfa8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x54);
}




undefined1 FUN_10034cfb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x55);
}




undefined1 FUN_10034cfb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x56);
}




long FUN_10034cfc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (**(long **)(param_1 + 0x28) != 0) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while ((*(long **)(param_1 + 0x28))[lVar1] != 0);
    return lVar2;
  }
  return 0;
}




int FUN_10034cfec(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  piVar3 = (int *)*puVar2;
  if (piVar3 != (int *)0x0) {
    iVar1 = 0;
    do {
      puVar2 = puVar2 + 1;
      iVar1 = *piVar3 + iVar1;
      piVar3 = (int *)*puVar2;
    } while (piVar3 != (int *)0x0);
    return iVar1;
  }
  return 0;
}




int FUN_10034d01c(long param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  piVar3 = (int *)*puVar2;
  if (piVar3 != (int *)0x0) {
    iVar1 = 0;
    do {
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 1;
      if (param_2 != 0) {
        iVar1 = *piVar3 + iVar1;
      }
      piVar3 = (int *)*puVar2;
    } while (piVar3 != (int *)0x0);
    return iVar1;
  }
  return 0;
}




undefined4 FUN_10034d058(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}




void FUN_10034d060(void)

{
  DAT_1018589d8 = DAT_1018589d8 + 1;
  return;
}




undefined8 * FUN_10034d074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101495aa8;
  param_1[1] = 0;
  param_1[0x8002] = 0;
  thunk_FUN_1004e4dcc(param_1 + 0x8003);
  return param_1;
}




undefined8 * FUN_10034d0c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101495aa8;
  thunk_FUN_1004e4e84(param_1 + 0x8003);
  return param_1;
}




void FUN_10034d0fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101495aa8;
  thunk_FUN_1004e4e84(param_1 + 0x8003);
  operator_delete(param_1);
  return;
}




void FUN_10034d138(long param_1)

{
  FUN_1004e4e60(param_1 + 0x40018,1,"DispatchQueue_PacketRecorder");
  FUN_1004e55c8(param_1 + 0x40018);
  *(undefined8 *)(param_1 + 0x40010) = 0;
  return;
}




void FUN_10034d18c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(param_1 + 0x40018);
  if (iVar1 != 0) {
    FUN_1004e4edc(param_1 + 0x40018);
    return;
  }
  return;
}




void FUN_10034d1cc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_10034d1d4(long param_1,int param_2)

{
  FUN_10034d214(param_1,1);
  if (param_2 != 0) {
    FUN_1004e51fc(param_1 + 0x40018);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




void FUN_10034d214(long param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_1004e51fc(param_1 + 0x40018);
  *(undefined8 *)(param_1 + 0x40158) = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 0x40160) = param_1 + (long)*(int *)(param_1 + 0x40014) * 0x20000 + 0x10;
  *(undefined4 *)(param_1 + 0x40168) = *(undefined4 *)(param_1 + 0x40010);
  *(undefined1 *)(param_1 + 0x4016c) = param_2;
  FUN_1004e57e0(param_1 + 0x40018,FUN_10034d3a0,(undefined8 *)(param_1 + 0x40158));
  iVar2 = *(int *)(param_1 + 0x40014);
  uVar1 = iVar2 + 2;
  if (-1 < iVar2 + 1) {
    uVar1 = iVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x40010) = 0;
  *(uint *)(param_1 + 0x40014) = (iVar2 + 1) - (uVar1 & 0xfffffffe);
  return;
}




void FUN_10034d2c4(long param_1)

{
  FUN_1004e4ecc(param_1 + 0x40018);
  return;
}




bool FUN_10034d2d4(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}




void FUN_10034d2e4(uint param_1,long param_2,void *param_3,uint param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = (int *)(param_2 + 0x40010);
  iVar5 = *piVar2;
  if (0x1ffff < (int)(iVar5 + param_4 + 8)) {
    FUN_10034d214(param_2,0);
    iVar5 = *piVar2;
  }
  uVar3 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  uVar4 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  lVar1 = param_2 + (long)*(int *)(param_2 + 0x40014) * 0x20000 + 0x10;
  *(uint *)(lVar1 + iVar5) = uVar4 >> 0x10 | uVar4 << 0x10;
  *(uint *)(lVar1 + *piVar2 + 4) = uVar3 >> 0x10 | uVar3 << 0x10;
  _memmove((void *)(lVar1 + *piVar2 + 8),param_3,(ulong)param_4);
  *piVar2 = *piVar2 + param_4 + 8;
  return;
}




ulong FUN_10034d3a0(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004d28c8(param_1[1],*(undefined4 *)(param_1 + 2),1,*param_1);
  if (*(char *)((long)param_1 + 0x14) != '\0') {
    uVar1 = _fclose((FILE *)*param_1);
    return (ulong)uVar1;
  }
  return uVar2;
}




void FUN_10034d3e8(uint *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    if (param_1[lVar3 * 4 + 2] == param_2) goto LAB_10034d43c;
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  param_1[(ulong)uVar1 * 4 + 2] = param_2;
  (param_1 + (ulong)uVar1 * 4 + 4)[0] = 0;
  (param_1 + (ulong)uVar1 * 4 + 4)[1] = 0;
LAB_10034d43c:
  lVar3 = 0;
  param_1 = param_1 + 10;
  do {
    if ((char)param_1[4] == '\0') {
      FUN_10034d474();
      *param_3 = (int)lVar3;
      return;
    }
    lVar3 = lVar3 + 1;
    param_1 = param_1 + 0x14;
  } while (lVar3 != 0x100);
  return;
}




void FUN_10034d474(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_101dc0b88;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = uVar3;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined8 *)((long)param_3 + 0x24) = 0;
  *(undefined4 *)((long)param_3 + 0x2c) = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[6] = 0;
  *(undefined4 *)(param_3 + 7) = 0;
  *(undefined4 *)((long)param_3 + 0x3c) = 0;
  *(undefined1 *)(param_3 + 2) = 1;
  *param_3 = *param_4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  uVar3 = param_5[2];
  *(undefined4 *)(param_3 + 3) = *param_5;
  *(undefined4 *)((long)param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 4) = uVar3;
  uVar3 = param_5[2];
  *(undefined4 *)((long)param_3 + 0x24) = *param_5;
  *(undefined4 *)(param_3 + 5) = 0;
  *(undefined4 *)((long)param_3 + 0x2c) = uVar3;
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 8) != 0) {
    do {
      lVar2 = lVar1;
      lVar1 = *(long *)(lVar2 + 0x40);
    } while (*(long *)(lVar2 + 0x40) != 0);
    *(undefined8 **)(lVar2 + 0x40) = param_3;
    param_3[8] = 0;
    param_3[9] = lVar2;
    return;
  }
  *(undefined8 **)(param_2 + 8) = param_3;
  param_3[8] = 0;
  param_3[9] = 0;
  return;
}




void FUN_10034d52c(long param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  
  lVar3 = 0;
  piVar6 = (int *)0x0;
  bVar2 = true;
  do {
    bVar8 = bVar2;
    piVar4 = (int *)(param_1 + lVar3 * 0x10 + 8);
    if (*piVar4 != param_2) {
      piVar4 = piVar6;
    }
    lVar3 = 1;
    piVar6 = piVar4;
    bVar2 = false;
  } while (bVar8);
  uVar9 = (ulong)*param_3;
  lVar3 = param_1 + uVar9 * 0x50;
  plVar5 = (long *)(lVar3 + 0x68);
  if ((undefined8 *)(lVar3 + 0x28) == *(undefined8 **)(piVar4 + 2)) {
    *(long *)(piVar4 + 2) = *plVar5;
  }
  else {
    lVar7 = *(long *)(param_1 + uVar9 * 0x50 + 0x70);
    *(long *)(lVar7 + 0x40) = *plVar5;
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 0x48) = lVar7;
    }
  }
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  param_1 = param_1 + uVar9 * 0x50;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *plVar5 = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *param_3 = 0xffffffff;
  return;
}




void FUN_10034d608(float param_1,long param_2,uint *param_3,float *param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = (ulong)*param_3;
  fVar7 = *param_4;
  fVar6 = param_4[2];
  uVar1 = *(uint *)(param_2 + 4);
  lVar5 = param_2 + uVar2 * 0x50;
  lVar3 = lVar5 + (ulong)uVar1 * 0xc;
  *(float *)(lVar3 + 0x40) = fVar7;
  *(undefined4 *)(lVar3 + 0x44) = 0;
  *(float *)(lVar3 + 0x48) = fVar6;
  *(float *)(lVar5 + 0x3c) = param_1;
  uVar4 = (ulong)~uVar1 & 1;
  fVar8 = 0.0;
  if ((param_5 & 1) == 0) {
    lVar3 = param_2 + uVar2 * 0x50 + uVar4 * 0xc;
    fVar8 = fVar7 - *(float *)(lVar3 + 0x40);
    fVar10 = fVar6 - *(float *)(lVar3 + 0x48);
    fVar8 = SQRT(fVar8 * fVar8 + *(float *)(lVar3 + 0x44) * *(float *)(lVar3 + 0x44) +
                 fVar10 * fVar10);
  }
  fVar8 = fVar8 + param_1 + param_1;
  lVar3 = param_2 + uVar2 * 0x50 + uVar4 * 0xc;
  fVar9 = *(float *)(lVar3 + 0x44);
  fVar10 = *(float *)(lVar3 + 0x40);
  fVar11 = *(float *)(lVar3 + 0x48);
  if (param_5 == 0) {
    fVar7 = fVar7 - fVar10;
    fVar6 = fVar6 - fVar11;
    fVar12 = fVar7 * fVar7 + fVar9 * fVar9 + fVar6 * fVar6;
    if (0.01 < fVar12) {
      fVar13 = fVar8 * 0.5;
      fVar12 = 1.0 / SQRT(fVar12);
      fVar10 = fVar10 + fVar12 * fVar7 * fVar13;
      fVar9 = fVar9 - fVar12 * fVar9 * fVar13;
      fVar11 = fVar11 + fVar12 * fVar6 * fVar13;
    }
  }
  else {
    *(float *)(lVar3 + 0x40) = fVar7;
    *(float *)(lVar3 + 0x44) = 0.0;
    fVar9 = 0.0;
    *(float *)(lVar3 + 0x48) = fVar6;
    fVar10 = fVar7;
    fVar11 = fVar6;
  }
  param_2 = param_2 + uVar2 * 0x50;
  *(float *)(param_2 + 100) = fVar8;
  *(float *)(param_2 + 0x58) = fVar10;
  *(float *)(param_2 + 0x5c) = fVar9;
  *(float *)(param_2 + 0x60) = fVar11;
  return;
}




long FUN_10034d734(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = (long *)*param_1;
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 == 0) ||
         ((uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar3 != 0x1f &&
          (*(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3 < 2)))) {
        lVar2 = 0;
      }
    }
    else {
      lVar2 = 0;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  return lVar2;
}




undefined8 * FUN_10034d7b8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  FUN_1004e313c(param_1 + 2);
  FUN_1004e313c(param_1 + 4);
  FUN_1004e313c(param_1 + 6);
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x12] = 0xff00000000;
  param_1[0x11] = 0xffffffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0xff;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(ulong *)((long)param_1 + 0xbc) =
       *(ulong *)((long)param_1 + 0xbc) & 0xe000000000000000 | 0x10000200ffffffff;
  return param_1;
}




void FUN_10034d83c(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




undefined8 * thunk_FUN_10034d7b8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  FUN_1004e313c(param_1 + 2);
  FUN_1004e313c(param_1 + 4);
  FUN_1004e313c(param_1 + 6);
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x12] = 0xff00000000;
  param_1[0x11] = 0xffffffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0xff;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(ulong *)((long)param_1 + 0xbc) =
       *(ulong *)((long)param_1 + 0xbc) & 0xe000000000000000 | 0x10000200ffffffff;
  return param_1;
}




undefined8 * FUN_10034d848(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
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
  return param_1;
}




undefined8 * thunk_FUN_10034d848(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
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
  return param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034d8dc(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = operator_new__(0xc90);
  puVar1[1] = 0x10;
  *puVar1 = 200;
  lVar2 = 0x10;
  do {
    FUN_10034d7b8((long)puVar1 + lVar2);
    lVar2 = lVar2 + 200;
  } while (lVar2 != 0xc90);
  DAT_101e47e88 = 1;
  _DAT_101e47ea0 = 0;
  DAT_101e47ea8 = 0;
  DAT_101e47e80 = puVar1 + 2;
  FUN_10034d950();
  return;
}




void FUN_10034d950(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  
  if (DAT_101e47e88 == '\x01') {
    uVar5 = 0;
    lVar6 = 0xbc;
    lVar3 = DAT_101e47e80;
    do {
      *(undefined4 *)(lVar3 + lVar6 + -0xb4) = 0xffffffff;
      FUN_1000153b4(lVar3 + lVar6 + -0xac,&DAT_101d91650);
      FUN_1000153b4(DAT_101e47e80 + lVar6 + -0x9c,&DAT_101d91650);
      FUN_1000153b4(DAT_101e47e80 + lVar6 + -0x8c,&DAT_101d91650);
      std::string::operator=((string *)(DAT_101e47e80 + lVar6 + -0x7c),(string *)&DAT_101d91198);
      std::string::operator=((string *)(DAT_101e47e80 + lVar6 + -100),(string *)&DAT_101d91198);
      std::string::operator=((string *)(DAT_101e47e80 + lVar6 + -0x4c),(string *)&DAT_101d91198);
      lVar3 = DAT_101e47e80;
      puVar1 = (ulong *)(DAT_101e47e80 + lVar6);
      *(undefined8 *)((long)puVar1 + -0x34) = 0xffff00000000;
      *(undefined4 *)((long)puVar1 + -0x2c) = 0;
      *puVar1 = *puVar1 & 0xe000000000000000 | 0x1000020000000000;
      puVar4 = *(undefined4 **)((long)puVar1 + -0xbc);
      if ((puVar4 != (undefined4 *)0x0) && (*puVar4 = 0, puVar4[2] != 0)) {
        puVar4[2] = 0;
      }
      puVar1[-3] = 0;
      puVar1[-4] = 0;
      puVar1[-1] = 0;
      puVar1[-2] = 0;
      uVar5 = uVar5 + 1;
      uVar2 = 0x10;
      if (DAT_101e47e88 == '\0') {
        uVar2 = 0;
      }
      lVar6 = lVar6 + 200;
    } while (uVar5 < uVar2);
  }
  DAT_101e47e90 = 0;
  DAT_101e47e98 = 0;
  DAT_101e47e8c = 0;
  return;
}




void FUN_10034dabc(void)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  DAT_101e47e88 = 0;
  if (DAT_101e47e80 != 0) {
    pvVar1 = (void *)(DAT_101e47e80 + -0x10);
    if (*(long *)(DAT_101e47e80 + -8) != 0) {
      lVar2 = DAT_101e47e80 + -200;
      lVar3 = *(long *)(DAT_101e47e80 + -8) * 200;
      do {
        FUN_10034d848(lVar2 + lVar3);
        lVar3 = lVar3 + -200;
      } while (lVar3 != 0);
    }
    operator_delete__(pvVar1);
  }
  DAT_101e47e80 = 0;
  DAT_101e47e8c = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034db2c(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  
  lVar2 = DAT_101e47e80;
  _DAT_101e47ea0 = 0;
  DAT_101e47ea8 = 0;
  uVar3 = (ulong)DAT_101e47e8c;
  if (DAT_101e47e8c != 0) {
    lVar4 = DAT_101e47e80 + 0xbc;
    do {
      if (*(int *)(lVar4 + -0xb4) != -1) {
        uVar5 = (ulong)*(ushort *)(lVar4 + 6) & 0xf;
        (&DAT_101e47ea0)[uVar5] = (&DAT_101e47ea0)[uVar5] + '\x01';
      }
      lVar4 = lVar4 + 200;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = 0;
  bVar1 = DAT_101e47e88 ^ 1;
  lVar4 = 0x10;
  if (DAT_101e47e88 == 0) {
    lVar4 = 1;
  }
  do {
    if ((&DAT_101e47ea0)[uVar3] != '\0' && (bVar1 & 1) == 0) {
      iVar6 = 1;
      lVar7 = lVar4;
      piVar8 = (int *)(lVar2 + 0x88);
      do {
        if ((piVar8[-0x20] != -1) && (((ulong)*(ushort *)((long)piVar8 + 0x3a) & 0xf) == uVar3)) {
          *piVar8 = iVar6;
          iVar6 = iVar6 + 1;
        }
        piVar8 = piVar8 + 0x32;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x10);
  return;
}




void FUN_10034dbfc(long param_1)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint5 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  lVar10 = DAT_101e47e80;
  if ((*(int *)(param_1 + 8) != -1) && (DAT_101e47e88 == '\x01')) {
    uVar11 = 0;
    piVar7 = (int *)(DAT_101e47e80 + 8);
    do {
      if (*piVar7 == *(int *)(param_1 + 8)) goto LAB_10034dc74;
      uVar11 = uVar11 + 1;
      piVar7 = piVar7 + 0x32;
    } while (uVar11 != 0x10);
    uVar11 = (ulong)DAT_101e47e8c;
    if (DAT_101e47e8c < 0x10) {
      DAT_101e47e8c = DAT_101e47e8c + 1;
LAB_10034dc74:
      plVar12 = (long *)(DAT_101e47e80 + uVar11 * 200);
      *(undefined4 *)(plVar12 + 0x11) = 0xffffffff;
      puVar9 = (ulong *)((long)plVar12 + 0xbc);
      *puVar9 = *puVar9 & 0xfa6fffffffffffff;
      if (*plVar12 == 0) {
        puVar5 = operator_new(0x278);
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        *plVar12 = (long)puVar5;
      }
      lVar10 = lVar10 + uVar11 * 200;
      *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(param_1 + 8);
      FUN_1000153b4(lVar10 + 0x10,param_1 + 0x10);
      FUN_1000153b4(lVar10 + 0x20,param_1 + 0x20);
      FUN_1000153b4(lVar10 + 0x30,param_1 + 0x30);
      std::string::operator=((string *)(lVar10 + 0x58),(string *)(param_1 + 0x58));
      std::string::operator=((string *)(lVar10 + 0x40),(string *)(param_1 + 0x40));
      lVar6 = 0;
      *(undefined4 *)(lVar10 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
      *(undefined4 *)(lVar10 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      uVar1 = *(ushort *)(param_1 + 0xbc);
      uVar8 = *puVar9;
      *puVar9 = uVar8 & 0xffffffffffff0000 | (ulong)uVar1;
      uVar2 = CONCAT12(*(undefined1 *)(param_1 + 0xbe),uVar1);
      *puVar9 = uVar8 & 0xffffffffff000000 | (ulong)uVar2;
      uVar3 = CONCAT13(*(undefined1 *)(param_1 + 0xbf),uVar2);
      *puVar9 = uVar8 & 0xffffffff00000000 | (ulong)uVar3;
      uVar4 = CONCAT14(*(undefined1 *)(param_1 + 0xc0),uVar3);
      *puVar9 = uVar8 & 0xffffff0000000000 | (ulong)uVar4;
      uVar11 = (ulong)CONCAT15(*(undefined1 *)(param_1 + 0xc1),uVar4);
      *puVar9 = uVar8 & 0xffff000000000000 | uVar11;
      uVar11 = uVar11 | (*(ulong *)(param_1 + 0xbc) >> 0x30 & 0xf) << 0x30;
      *puVar9 = uVar8 & 0xfff0000000000000 | uVar11;
      uVar11 = uVar8 & 0x10000000000000 | uVar11 | (*(ulong *)(param_1 + 0xbc) >> 0x35 & 1) << 0x35;
      *puVar9 = uVar8 & 0xffc0000000000000 | uVar11;
      uVar11 = uVar11 | (*(ulong *)(param_1 + 0xbc) >> 0x36 & 1) << 0x36;
      *puVar9 = uVar8 & 0xff80000000000000 | uVar11;
      uVar11 = uVar8 & 0x180000000000000 | uVar11 | (*(ulong *)(param_1 + 0xbc) >> 0x39 & 1) << 0x39
      ;
      *puVar9 = uVar8 & 0xfc00000000000000 | uVar11;
      uVar11 = uVar8 & 0x400000000000000 | uVar11 | (*(ulong *)(param_1 + 0xbc) >> 0x3b & 1) << 0x3b
      ;
      *puVar9 = uVar8 & 0xf000000000000000 | uVar11;
      *puVar9 = uVar8 & 0xe000000000000000 |
                uVar11 | (*(ulong *)(param_1 + 0xbc) >> 0x3c & 1) << 0x3c;
      do {
        *(undefined4 *)(lVar10 + 0x9c + lVar6) = *(undefined4 *)(param_1 + 0x9c + lVar6);
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0x20);
      FUN_10034db2c();
      return;
    }
  }
  return;
}




void FUN_10034ddfc(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        FUN_1000153b4(DAT_101e47e80 + lVar1 + 0x10);
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034de48(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        FUN_1000153b4(DAT_101e47e80 + lVar1 + 0x20);
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034de94(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        FUN_1000153b4(DAT_101e47e80 + lVar1 + 0x30);
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034dee0(int param_1,string *param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        std::string::operator=((string *)(DAT_101e47e80 + lVar1 + 0x58),param_2);
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034df2c(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x20000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = *(ulong *)(lVar1 + 0xbc) & 0xffdfffffffffffff | uVar2;
        return;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return;
}




void FUN_10034df90(int param_1,undefined2 param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        *(undefined2 *)(DAT_101e47e80 + lVar1 + 0xbc) = param_2;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034dfdc(int param_1,undefined1 param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        *(undefined1 *)(DAT_101e47e80 + lVar1 + 0xbe) = param_2;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034e028(int param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar4 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar4;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x40000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        uVar3 = 0x400000000000000;
        if (param_3 == 0) {
          uVar3 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = uVar3 | uVar2 | *(ulong *)(lVar1 + 0xbc) & 0xfbbfffffffffffff;
        return;
      }
      lVar4 = lVar4 + 200;
    } while (lVar4 != 0xc80);
  }
  return;
}




void FUN_10034e0a0(int param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        *(undefined4 *)(DAT_101e47e80 + lVar1 + 0x8c) = param_2;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034e0ec(int param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        *(undefined4 *)(DAT_101e47e80 + lVar1 + 0x90) = param_2;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034e138(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x80000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = *(ulong *)(lVar1 + 0xbc) & 0xff7fffffffffffff | uVar2;
        return;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return;
}




byte FUN_10034e19c(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc2) >> 7;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




void FUN_10034e1f0(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x100000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = *(ulong *)(lVar1 + 0xbc) & 0xfeffffffffffffff | uVar2;
        return;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return;
}




void FUN_10034e254(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x10000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = *(ulong *)(lVar1 + 0xbc) & 0xffefffffffffffff | uVar2;
        return;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return;
}




void FUN_10034e2b8(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x1000000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = *(ulong *)(lVar1 + 0xbc) & 0xefffffffffffffff | uVar2;
        return;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return;
}




void FUN_10034e31c(int param_1,uint param_2,undefined4 *param_3)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + 8 + lVar1) == param_1) {
        *(undefined4 *)(DAT_101e47e80 + (ulong)param_2 * 4 + lVar1 + 0x9c) = *param_3;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034e374(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x2000000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = *(ulong *)(lVar1 + 0xbc) & 0xdfffffffffffffff | uVar2;
        return;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return;
}




byte FUN_10034e3d8(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc3) & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




undefined8 * FUN_10034e42c(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = DAT_101e47e80;
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar5 = 0;
    puVar2 = &DAT_101d91650;
    do {
      if (*(int *)(DAT_101e47e80 + lVar5 + 8) == param_1) {
        if ((DAT_101d23a38 == '\0') &&
           (((((*(ulong *)(DAT_101e47e80 + lVar5 + 0xbc) & 0x440000000000000) == 0x40000000000000 &&
              (puVar2 = (undefined8 *)FUN_1000320e8(&DAT_101d91650), (int)puVar2 != 0)) &&
             (*(char *)(DAT_101d23a68 + 0x4d) == '\0')) ||
            ((iVar1 = FUN_1000320e8(puVar2), iVar1 != 0 && (*(char *)(DAT_101d23a68 + 0x39) != '\0')
             ))))) {
          uVar6 = **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar4 + lVar5 + 0x8c) * 8)
          ;
          uVar3 = FUN_1010a1520();
          lVar4 = FUN_1010a0e0c(uVar3,0,uVar6,0);
          puVar2 = (undefined8 *)FUN_1004e0150(*(undefined8 *)(lVar4 + 0x28),0);
          return puVar2;
        }
        return (undefined8 *)(lVar4 + lVar5 + 0x10);
      }
      lVar5 = lVar5 + 200;
    } while (lVar5 != 0xc80);
  }
  return &DAT_101d91650;
}




void FUN_10034e548(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = **(undefined8 **)(**(long **)(param_1 + 0x40) + (param_2 & 0xffffffff) * 8);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,uVar2,0);
  return;
}




undefined8 * FUN_10034e580(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      lVar3 = DAT_101e47e80 + lVar2;
      if (*(int *)(lVar3 + 8) == param_1) goto LAB_10034e5c4;
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  lVar3 = 0;
LAB_10034e5c4:
  puVar1 = &DAT_101d91650;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x20);
  }
  return puVar1;
}




undefined8 * FUN_10034e5dc(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      lVar3 = DAT_101e47e80 + lVar2;
      if (*(int *)(lVar3 + 8) == param_1) goto LAB_10034e620;
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  lVar3 = 0;
LAB_10034e620:
  puVar1 = &DAT_101d91650;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x30);
  }
  return puVar1;
}




undefined8 * FUN_10034e638(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      lVar3 = DAT_101e47e80 + lVar2;
      if (*(int *)(lVar3 + 8) == param_1) goto LAB_10034e67c;
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  lVar3 = 0;
LAB_10034e67c:
  puVar1 = &DAT_101d91198;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x40);
  }
  return puVar1;
}




void FUN_10034e694(int param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar2;
      if (*(int *)(lVar1 + 8) == param_1) {
        *(ulong *)(lVar1 + 0xbc) =
             *(ulong *)(lVar1 + 0xbc) & 0xfff0000000000000 |
             *(ulong *)(lVar1 + 0xbc) & 0xffffffffffff | (ulong)(param_2 & 0xf) << 0x30;
        FUN_10034db2c();
        return;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  return;
}




void FUN_10034e6ec(int param_1,string *param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        std::string::operator=((string *)(DAT_101e47e80 + lVar1 + 0x40),param_2);
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




byte FUN_10034e738(int param_1)

{
  long lVar1;
  
  if (param_1 == -1) {
    return 1;
  }
  if (DAT_101e47e88 == '\x01') {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc2) & 0xf;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0xff;
}




undefined4 FUN_10034e794(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(undefined4 *)(DAT_101e47e80 + lVar1 + 0x8c);
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0xffff;
}




undefined4 FUN_10034e7e4(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(undefined4 *)(DAT_101e47e80 + lVar1 + 0x90);
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




void FUN_10034e834(undefined8 param_1)

{
  FUN_10034ede0(param_1,6);
  return;
}




int FUN_10034e83c(int param_1)

{
  short sVar1;
  long lVar2;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2 + 8) == param_1) {
        sVar1 = *(short *)(DAT_101e47e80 + lVar2 + 0xbc);
        goto LAB_10034e880;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  sVar1 = -1;
LAB_10034e880:
  return (int)sVar1;
}




int FUN_10034e890(int param_1)

{
  char cVar1;
  long lVar2;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2 + 8) == param_1) {
        cVar1 = *(char *)(DAT_101e47e80 + lVar2 + 0xbe);
        goto LAB_10034e8d4;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  cVar1 = -1;
LAB_10034e8d4:
  return (int)cVar1;
}




byte FUN_10034e8e4(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc3) >> 4 & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




undefined4 FUN_10034e938(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(undefined4 *)(DAT_101e47e80 + lVar1 + 0x94);
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0xff;
}




undefined4 FUN_10034e988(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(undefined4 *)(DAT_101e47e80 + lVar1 + 0x98);
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0xff;
}




byte FUN_10034e9d8(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc3) >> 5 & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




byte FUN_10034ea2c(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc3) >> 1 & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




bool FUN_10034ea80(int param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if (DAT_101d23a39 != '\0') {
    bVar1 = *(char *)(param_2 + 0x264) == '\x01';
LAB_10034ea94:
    return !bVar1;
  }
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2 + 8) == param_1) {
        bVar1 = (*(ushort *)(DAT_101e47e80 + lVar2 + 0xc2) & 0xf) ==
                (ushort)*(byte *)(param_2 + 0x264);
        goto LAB_10034ea94;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  return false;
}




uint FUN_10034eaf8(void)

{
  uint uVar1;
  
  uVar1 = FUN_10034ea80();
  return uVar1 ^ 1;
}




bool FUN_10034eb10(int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_101d23a39 == '\0') {
    if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
      lVar2 = 0;
      do {
        lVar3 = DAT_101e47e80 + lVar2;
        if (*(int *)(lVar3 + 8) == param_1) goto LAB_10034eba4;
        lVar2 = lVar2 + 200;
      } while (lVar2 != 0xc80);
    }
    lVar3 = 0;
LAB_10034eba4:
    if ((param_2 != -1) && (DAT_101e47e88 == '\x01')) {
      lVar2 = 0;
      do {
        if (*(int *)(DAT_101e47e80 + lVar2 + 8) == param_2) {
          if (lVar3 == 0) {
            return false;
          }
          bVar1 = ((*(ulong *)(DAT_101e47e80 + lVar2 + 0xbc) ^ *(ulong *)(lVar3 + 0xbc)) &
                  0xf000000000000) == 0;
          goto LAB_10034ec14;
        }
        lVar2 = lVar2 + 200;
      } while (lVar2 != 0xc80);
    }
  }
  else if ((param_2 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2 + 8) == param_2) {
        bVar1 = (*(ulong *)(DAT_101e47e80 + lVar2 + 0xbc) & 0xf000000000000) == 0x1000000000000;
LAB_10034ec14:
        return !bVar1;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  return false;
}




uint FUN_10034ec24(void)

{
  uint uVar1;
  
  uVar1 = FUN_10034eb10();
  return uVar1 ^ 1;
}




byte FUN_10034ec3c(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc2) >> 5 & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




byte FUN_10034ec90(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc2) >> 6 & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




byte FUN_10034ece4(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc3) >> 2 & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




bool FUN_10034ed38(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return (*(ulong *)(DAT_101e47e80 + lVar1 + 0xbc) & 0x440000000000000) == 0x40000000000000;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return false;
}




int FUN_10034ed9c(void)

{
  int iVar1;
  long lVar2;
  
  if (DAT_101e47e88 == '\x01') {
    iVar1 = 0;
    lVar2 = 8;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2) != -1) {
        iVar1 = iVar1 + 1;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc88);
    return iVar1;
  }
  return 0;
}




undefined4 * FUN_10034ede0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar2 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar2 + 8) == param_1) goto LAB_10034ee24;
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  lVar2 = 0;
LAB_10034ee24:
  puVar1 = (undefined4 *)(lVar2 + (ulong)param_2 * 4 + 0x9c);
  if (((7 < (int)param_2 || param_2 == 0xffffffff) || (int)param_2 < -1) || lVar2 == 0) {
    puVar1 = &DAT_10115bdb0;
  }
  return puVar1;
}




void FUN_10034ee4c(undefined8 param_1)

{
  FUN_10034ede0(param_1,0);
  return;
}




undefined4 FUN_10034ee54(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x10;
  if (DAT_101e47e88 == '\0') {
    uVar1 = 0;
  }
  if (param_1 < uVar1) {
    return *(undefined4 *)(DAT_101e47e80 + (ulong)param_1 * 200 + 8);
  }
  return 0xffffffff;
}




ulong FUN_10034ee90(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (DAT_101d23a39 != '\0') {
    uVar2 = FUN_10034ef08();
    return uVar2;
  }
  if (DAT_101e47e90 != 0) {
    return (ulong)*(uint *)(DAT_101e47e90 + 8);
  }
  if (DAT_101e47e88 == '\x01') {
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(DAT_101e47e80 + lVar3 + 8);
      if ((uVar1 != 0xffffffff) && ((*(byte *)(DAT_101e47e80 + lVar3 + 0xc3) >> 1 & 1) != 0)) {
        DAT_101e47e90 = DAT_101e47e80 + lVar3;
        return (ulong)uVar1;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return 0xffffffff;
}




int FUN_10034ef08(void)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  
  if (DAT_101e47e98 != (int *)0x0) {
    return *(int *)((long)DAT_101e47e98 + 8);
  }
  iVar1 = FUN_1004e3634(&DAT_101d23a40);
  if (iVar1 == 0) {
    if (DAT_101e47e88 == 0) {
      return -1;
    }
    lVar5 = 0;
    do {
      iVar1 = *(int *)(DAT_101e47e80 + lVar5 + 8);
      if ((iVar1 != -1) &&
         ((*(ulong *)(DAT_101e47e80 + lVar5 + 0xbc) & 0xf000000000000) == 0x1000000000000)) {
        DAT_101e47e98 = (int *)(DAT_101e47e80 + lVar5);
        return iVar1;
      }
      lVar5 = lVar5 + 200;
    } while (lVar5 != 0xc80);
    if (DAT_101e47e88 == 0) {
      return -1;
    }
    lVar5 = 0;
    do {
      iVar1 = *(int *)(DAT_101e47e80 + lVar5 + 8);
      if ((iVar1 != -1) &&
         ((*(ulong *)(DAT_101e47e80 + lVar5 + 0xbc) & 0xf000000000000) == 0x2000000000000)) {
        DAT_101e47e98 = (int *)(DAT_101e47e80 + lVar5);
        return iVar1;
      }
      lVar5 = lVar5 + 200;
    } while (lVar5 != 0xc80);
  }
  else if (DAT_101e47e88 == 0) {
    return -1;
  }
  uVar4 = 0;
  bVar3 = 1;
  lVar5 = 8;
  do {
    if ((*(int *)(DAT_101e47e80 + lVar5) != -1) &&
       (uVar2 = FUN_1004e3654(DAT_101e47e80 + lVar5 + 8,&DAT_101d23a40), bVar3 = DAT_101e47e88,
       (uVar2 & 1) != 0)) {
      DAT_101e47e98 = (int *)(DAT_101e47e80 + lVar5) + -2;
      return *(int *)(DAT_101e47e80 + lVar5);
    }
    uVar4 = uVar4 + 1;
    uVar2 = 0x10;
    if ((bVar3 & 1) == 0) {
      uVar2 = 0;
    }
    lVar5 = lVar5 + 200;
  } while (uVar4 < uVar2);
  return -1;
}




ulong FUN_10034f06c(void)

{
  ulong uVar1;
  
  if (DAT_101e47e90 != 0) {
    return (ulong)(*(ushort *)(DAT_101e47e90 + 0xc2) & 0xf);
  }
  FUN_10034ee90();
  uVar1 = FUN_10034e738();
  return uVar1;
}




bool FUN_10034f09c(void)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = FUN_10034ee90();
  piVar2 = (int *)FUN_10034ede0(uVar1,6);
  return *piVar2 != -0x7ee3623b && *piVar2 != 0;
}




void FUN_10034f0e8(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar3 = 0;
    do {
      lVar1 = DAT_101e47e80 + lVar3;
      if (*(int *)(lVar1 + 8) == param_1) {
        uVar2 = 0x800000000000000;
        if (param_2 == 0) {
          uVar2 = 0;
        }
        *(ulong *)(lVar1 + 0xbc) = *(ulong *)(lVar1 + 0xbc) & 0xf7ffffffffffffff | uVar2;
        return;
      }
      lVar3 = lVar3 + 200;
    } while (lVar3 != 0xc80);
  }
  return;
}




byte FUN_10034f14c(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(byte *)(DAT_101e47e80 + lVar1 + 0xc3) >> 3 & 1;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




int FUN_10034f1a0(int param_1)

{
  char cVar1;
  long lVar2;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2 + 8) == param_1) {
        cVar1 = *(char *)(DAT_101e47e80 + lVar2 + 0xbf);
        goto LAB_10034f1e4;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  cVar1 = -1;
LAB_10034f1e4:
  return (int)cVar1;
}




undefined1 FUN_10034f1f4(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(undefined1 *)(DAT_101e47e80 + lVar1 + 0xc0);
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 0;
}




undefined1 FUN_10034f248(int param_1)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        return *(undefined1 *)(DAT_101e47e80 + lVar1 + 0xc1);
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return 2;
}




void FUN_10034f29c(int param_1,undefined1 param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        *(undefined1 *)(DAT_101e47e80 + lVar1 + 0xbf) = param_2;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034f2e8(int param_1,undefined1 param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        *(undefined1 *)(DAT_101e47e80 + lVar1 + 0xc0) = param_2;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




void FUN_10034f334(int param_1,undefined1 param_2)

{
  long lVar1;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar1 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar1 + 8) == param_1) {
        *(undefined1 *)(DAT_101e47e80 + lVar1 + 0xc1) = param_2;
        return;
      }
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0xc80);
  }
  return;
}




undefined1 FUN_10034f380(int param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((param_1 != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 8;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2) == param_1) {
        return 1;
      }
      bVar1 = lVar2 != 0xbc0;
      lVar2 = lVar2 + 200;
    } while (bVar1);
  }
  return 0;
}




long * FUN_10034f3d4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar4) {
    uVar1 = 0x10;
    if (uVar2 != 0) {
      uVar1 = uVar2 + (uVar2 + 1 >> 1);
    }
    if (uVar2 < uVar1) {
      lVar3 = FUN_10032b7e0(param_3,*param_1,(ulong)uVar2 * 0x18,(ulong)uVar1 * 0x18);
      *param_1 = lVar3;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      uVar4 = *(uint *)(param_1 + 1);
    }
  }
  *(uint *)(param_1 + 1) = uVar4 + 1;
  puVar5 = (undefined8 *)(*param_1 + (ulong)uVar4 * 0x18);
  uVar6 = *param_2;
  puVar5[1] = param_2[1];
  *puVar5 = uVar6;
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  return param_1;
}




undefined8 FUN_10034f47c(char *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = -0x3010;
  do {
    iVar1 = _strcmp(*(char **)((long)&DAT_101d2aab8 + lVar2),param_1);
    if (iVar1 == 0) {
      return *(undefined8 *)((long)&DAT_101d2aac0 + lVar2);
    }
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0);
  return 0;
}




undefined8 FUN_10034f4d4(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  return local_30;
}




undefined8 FUN_10034f520(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_10034f550(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a70d8;
  return local_30;
}




void FUN_10034f598(void)

{
  FUN_1003a2678(PTR_s_Buff_Withdraw_10185a458);
  return;
}




undefined8 FUN_10034f5a4(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000eed8();
  FUN_1003a985c(&local_30,uVar1);
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Emote_Dance_10185a570);
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10034f628(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_30,lVar1);
  lVar2 = FUN_10049ac6c(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_1003a70e0;
  lVar1 = lVar1 + 0xb0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(lVar1,uVar3);
  uVar3 = FUN_10000eed8();
  FUN_1003a985c(lVar1,uVar3);
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar1,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Emote_Taunt_10185a578);
  local_40[0] = 0x40000000;
  local_38 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_40);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(lVar1,uVar3);
  return local_30;
}




undefined8 FUN_10034f6f8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  plVar4 = (long *)thunk_FUN_10000c1fc();
  FUN_1003a985c(&local_30,plVar4);
  (**(code **)(*plVar4 + 0x58))(0x40000000,plVar4);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10034f808(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000d9a0();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_10034f838(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x3f676029;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10034f924(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x3e340489;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10034fa10(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000d0cc();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_10034fa40(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a9abc;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))(plVar3);
  local_40 = FUN_1003a999c;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3e4ccccd00000001;
  *(undefined4 *)(lVar2 + 0x10) = 0xf3b4a217;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000c0a8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a9a08;
  *(undefined2 *)(lVar2 + 0x18) = 0;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003a98dc;
  uVar1 = FUN_10000f9c0();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a9b28;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10034fc04(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40600000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10034fca8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Debug_Camera_10185a580;
  *(undefined4 *)(lVar2 + 0x18) = 0x42700000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10034fd2c(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar3 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4170;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar3 + 0xa4) = 0x41400000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000d580();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x4b189680;
  *(undefined4 *)(lVar3 + 0x18) = 1;
  plVar4 = (long *)FUN_10000df10();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_50[0] = 0x49742400;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x10))(plVar4,3,local_50);
  plVar4 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,3);
  local_50[0] = 0;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_50);
  plVar4 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,4);
  local_50[0] = 0;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_50);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar5);
  return local_40;
}




undefined8 FUN_10034fef4(void)

{
  byte bVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000e9f4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00002000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4110;
  *(bool *)(lVar2 + 0x70) = DAT_101d23a38 != '\0';
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a7428;
  return local_30;
}




undefined8 FUN_10034ffc4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a7428;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}

