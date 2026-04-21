// functions/019e6 — 8 functions
#include "libGameKindred.h"




undefined8 FUN_019e6524(long param_1,int *param_2,ulong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((3 < param_3) && (*param_2 == 0x5252452d)) {
    uVar2 = 0x2d;
    goto LAB_019e65bc;
  }
  if (*(int *)(param_1 + 0x5b8) == 2) {
    if ((param_3 == 0) || ((char)*param_2 != '.')) {
      uVar2 = 0x2a;
      goto LAB_019e65bc;
    }
  }
  else {
    if (param_3 < 3) {
      if (param_3 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = memcmp(&DAT_01e26b14,param_2,3);
      if (iVar1 == 0) goto LAB_019e65b0;
    }
    if ((char)*param_2 != '+') {
      return 0;
    }
  }
LAB_019e65b0:
  uVar2 = 0x2b;
LAB_019e65bc:
  *param_4 = uVar2;
  return 1;
}




undefined8 FUN_019e65d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019c2ba0(param_1,0,(char *)(param_1 + 0x5bc));
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x5b8) != 4) {
      *(undefined4 *)(param_1 + 0x5b8) = 4;
    }
    if (*(char *)(param_1 + 0x5bc) == '\0') {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5d4) = 0;
      *(undefined4 *)(param_1 + 0x5e0) = 0;
      *(undefined ***)(param_1 + 800) = &PTR_s_POP3S_02bb0900;
      *(undefined1 *)(param_1 + 0x5f0) = 0;
      uVar1 = FUN_019e8c44(param_1 + 0x548,"%s",&DAT_01e26a99);
      if ((int)uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x5b8) = 2;
      }
    }
  }
  return uVar1;
}




int FUN_019e666c(undefined8 *param_1)

{
  int iVar1;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  if (*(char *)((long)param_1 + 0x2e4) == '\0') {
    *(undefined4 *)(param_1 + 0xb7) = 0;
    return 0;
  }
  if ((*(byte *)(param_1 + 0xba) >> 2 & 1) != 0) {
    iVar1 = FUN_019e6770(param_1,&local_28,&local_30,&local_38,(long)&local_40 + 4,&local_40);
    if (iVar1 != 0) {
      return iVar1;
    }
    if ((local_28 != 0) && ((*(byte *)(param_1 + 0xbb) >> 2 & 1) != 0)) {
      iVar1 = FUN_019e690c(param_1,local_28,local_30,local_38,local_40._4_4_,local_40 & 0xffffffff);
      if (local_30 == 0) {
        return iVar1;
      }
      (*(code *)PTR_free_02bf74b0)(local_30);
      return iVar1;
    }
  }
  if (((*(uint *)(param_1 + 0xba) >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0xbb) >> 1 & 1) == 0)) {
    if (((*(uint *)(param_1 + 0xba) & 1) == 0) || ((*(byte *)(param_1 + 0xbb) & 1) == 0)) {
      FUN_019c9f64(*param_1,"No known authentication mechanisms supported!\n");
      iVar1 = 0x43;
    }
    else {
      iVar1 = FUN_019e6ac4(param_1);
    }
  }
  else {
    iVar1 = FUN_019e69b4(param_1);
  }
  return iVar1;
}




undefined8
FUN_019e6770(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)((long)param_1 + 0x5d4);
  lVar3 = *param_1;
  if (((uVar1 >> 3 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5dc) >> 3 & 1) == 0)) {
    if (((uVar1 >> 2 & 1) == 0) || ((*(byte *)((long)param_1 + 0x5dc) >> 2 & 1) == 0)) {
      if (((uVar1 >> 6 & 1) != 0) && ((*(byte *)((long)param_1 + 0x5dc) >> 6 & 1) != 0)) {
        *param_2 = &DAT_01e21e68;
        *param_5 = 0xb;
        *param_6 = 0xc;
        *(undefined4 *)(param_1 + 0xbc) = 0x40;
        if (*(char *)(lVar3 + 0x6f8) == '\0') {
          return 0;
        }
        uVar2 = thunk_FUN_019eba38(param_1[0x2e],param_1[0x2f],param_1 + 0x7c,param_3,param_4);
        return uVar2;
      }
      if ((((uVar1 >> 7 & 1) != 0) &&
          ((*(uint *)((long)param_1 + 0x5dc) != 0xffffffff &&
           ((*(uint *)((long)param_1 + 0x5dc) >> 7 & 1) != 0)))) || (param_1[0x31] != 0)) {
        *param_2 = "XOAUTH2";
        *param_5 = 0x10;
        *param_6 = 0x12;
        *(undefined4 *)(param_1 + 0xbc) = 0x80;
        if (*(char *)(lVar3 + 0x6f8) == '\0') {
          return 0;
        }
        uVar2 = FUN_019eca4c(lVar3,param_1[0x2e],param_1[0x31],param_3,param_4);
        return uVar2;
      }
      if (((uVar1 & 1) != 0) && ((*(byte *)((long)param_1 + 0x5dc) & 1) != 0)) {
        *param_2 = "LOGIN";
        *param_5 = 6;
        *param_6 = 7;
        *(undefined4 *)(param_1 + 0xbc) = 1;
        if (*(char *)(lVar3 + 0x6f8) == '\0') {
          return 0;
        }
        uVar2 = FUN_019ec158(lVar3,param_1[0x2e],param_3,param_4);
        return uVar2;
      }
      if ((uVar1 >> 1 & 1) == 0) {
        return 0;
      }
      if ((*(byte *)((long)param_1 + 0x5dc) >> 1 & 1) == 0) {
        return 0;
      }
      *param_2 = "PLAIN";
      *param_5 = 5;
      *param_6 = 0x12;
      *(undefined4 *)(param_1 + 0xbc) = 2;
      if (*(char *)(lVar3 + 0x6f8) == '\0') {
        return 0;
      }
      uVar2 = FUN_019ec04c(lVar3,param_1[0x2e],param_1[0x2f],param_3,param_4);
      return uVar2;
    }
    pcVar4 = "CRAM-MD5";
    uVar5 = 8;
    uVar6 = 4;
  }
  else {
    pcVar4 = "DIGEST-MD5";
    uVar5 = 9;
    uVar6 = 8;
  }
  *param_2 = pcVar4;
  *param_5 = uVar5;
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  return 0;
}




void FUN_019e690c(long param_1,char *param_2,long param_3,long param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  size_t sVar2;
  
  if ((param_3 != 0) && (sVar2 = strlen(param_2), param_4 + sVar2 + 8 < 0x100)) {
    iVar1 = FUN_019e8c44(param_1 + 0x548,"AUTH %s %s",param_2,param_3);
    if (iVar1 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x5b8) = param_6;
    return;
  }
  iVar1 = FUN_019e8c44(param_1 + 0x548,"AUTH %s",param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5b8) = param_5;
  }
  return;
}




undefined8 FUN_019e69b4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 auStack_74 [36];
  undefined1 local_50 [16];
  
  if (*(char *)(param_1 + 0x2e4) == '\0') {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x5b8) = 0;
  }
  else {
    lVar2 = FUN_019dbfac(&PTR_MD5_Init_02bb0368);
    if (lVar2 == 0) {
      uVar3 = 0x1b;
    }
    else {
      pcVar5 = *(char **)(param_1 + 0x5e8);
      strlen(pcVar5);
      uVar1 = FUN_019c1e8c();
      FUN_019dc02c(lVar2,pcVar5,uVar1);
      pcVar5 = *(char **)(param_1 + 0x178);
      strlen(pcVar5);
      uVar1 = FUN_019c1e8c();
      FUN_019dc02c(lVar2,pcVar5,uVar1);
      FUN_019dc04c(lVar2,local_50);
      lVar2 = 0;
      puVar4 = auStack_74;
      do {
        FUN_019d5bc0(puVar4,3,"%02x",local_50[lVar2]);
        lVar2 = lVar2 + 1;
        puVar4 = puVar4 + 2;
      } while (lVar2 != 0x10);
      uVar3 = FUN_019e8c44(param_1 + 0x548,"APOP %s %s",*(undefined8 *)(param_1 + 0x170),auStack_74)
      ;
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x5b8) = 0x13;
      }
    }
  }
  return uVar3;
}




undefined8 FUN_019e6ac4(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x2e4);
  if (*(byte *)(param_1 + 0x2e4) != 0) {
    puVar1 = &DAT_01e277f2;
    if (*(undefined1 **)(param_1 + 0x170) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_1 + 0x170);
    }
    uVar2 = FUN_019e8c44(param_1 + 0x548,"USER %s",puVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar3 = 0x14;
  }
  *(uint *)(param_1 + 0x5b8) = uVar3;
  return 0;
}




void FUN_019e6b1c(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *__s;
  
  for (__s = (char *)(param_1 + 2); (*__s == ' ' || (*__s == '\t')); __s = __s + 1) {
  }
  sVar1 = strlen(__s);
  if (sVar1 != 0) {
    pcVar2 = __s + sVar1;
    do {
      if ((0x20 < (byte)pcVar2[-1]) ||
         ((1L << ((ulong)(byte)pcVar2[-1] & 0x3f) & 0x100002600U) == 0)) {
        *pcVar2 = '\0';
        break;
      }
      sVar1 = sVar1 - 1;
      pcVar2 = pcVar2 + -1;
    } while (sVar1 != 0);
  }
  *param_2 = __s;
  return;
}

