// functions/00abc — 33 functions
#include "libGameKindred.h"




void thunk_FUN_00abcfb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x3f5) == '\0') {
    lVar2 = param_1 + 0x3c0;
    uVar1 = FUN_00e70b88(lVar2,&DAT_03210450);
    if ((uVar1 & 1) != 0) goto LAB_00abcff8;
  }
  lVar2 = param_1 + 0x1ca0;
LAB_00abcff8:
  FUN_00b02c3c(param_1,lVar2,0);
  FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  return;
}




void thunk_FUN_00abc788(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((((((*(char *)(param_1 + 0x1ce9) == '\0') || (uVar1 = FUN_00abc8b4(param_1), (uVar1 & 1) != 0)
         ) && ((*(char *)(param_1 + 0x1cea) == '\0' ||
               (uVar1 = FUN_00abc93c(param_1,*(undefined4 *)(param_1 + 0x1cd8)), (uVar1 & 1) != 0)))
        ) && ((*(char *)(param_1 + 0x1ceb) == '\0' ||
              (uVar1 = FUN_00abca60(param_1,*(undefined4 *)(param_1 + 0x1cdc)), (uVar1 & 1) != 0))))
      && ((*(char *)(param_1 + 0x1cec) == '\0' || (uVar1 = FUN_00abcb84(param_1), (uVar1 & 1) != 0))
         )) && (((((*(char *)(param_1 + 0x1ced) == '\0' ||
                   (uVar1 = FUN_00abcbf4(param_1), (uVar1 & 1) != 0)) &&
                  ((*(char *)(param_1 + 0x1cee) == '\0' ||
                   (uVar1 = FUN_00abcc64(param_1), (uVar1 & 1) != 0)))) &&
                 ((*(char *)(param_1 + 0x1cef) == '\0' ||
                  (uVar1 = FUN_00abccd4(param_1), (uVar1 & 1) != 0)))) &&
                (((*(char *)(param_1 + 0x1cf0) == '\0' ||
                  (uVar1 = FUN_00abcd44(param_1), (uVar1 & 1) != 0)) &&
                 ((*(char *)(param_1 + 0x1cf1) == '\0' ||
                  (uVar1 = FUN_00abcdd8(param_1), (uVar1 & 1) != 0)))))))) {
    pcVar3 = *(code **)(param_1 + 0x1ce0);
    if (pcVar3 != (code *)0x0) {
      uVar2 = FUN_00ce1f88(param_1);
      uVar1 = (*pcVar3)(uVar2,param_1);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    FUN_00abc610(param_1,0);
    return;
  }
  return;
}




void FUN_00abc380(undefined4 param_1,undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x400;
  fVar6 = *(float *)(param_3 + 0x54);
  *(undefined4 *)(param_3 + 0x1cd0) = param_1;
  if (0.0 < param_2._0_4_) {
    FUN_00ab7628(param_2._0_8_,lVar1);
  }
  if ((*(float *)(param_3 + 0x440) != 0.0) || (*(float *)(param_3 + 0x444) != 0.0)) {
    *(undefined8 *)(param_3 + 0x440) = 0;
    FUN_0091ada4(lVar1);
  }
  local_50 = 0;
  local_4c = fVar6;
  (**(code **)(*(long *)(param_3 + 0x400) + 0x28))(lVar1,&local_50);
  FUN_00ab75d0(0,*(undefined4 *)(param_3 + 0x1cd0),*(undefined4 *)(param_3 + 0x1cd0),lVar1);
  uVar5 = *(undefined4 *)(param_3 + 0x1cd0);
  lVar2 = param_3 + 0x19c0;
  FUN_00f13e54(lVar1);
  FUN_00f13f08(uVar5,lVar2);
  if ((*(float *)(param_3 + 0x1a00) != 0.0) || (*(float *)(param_3 + 0x1a04) != 0.0)) {
    *(undefined8 *)(param_3 + 0x1a00) = 0;
    FUN_0091ada4(lVar2);
  }
  local_50 = 0;
  local_4c = fVar6;
  (**(code **)(*(long *)(param_3 + 0x19c0) + 0x28))(lVar2,&local_50);
  lVar2 = param_3 + 0x1a98;
  fVar4 = 2.0;
  FUN_00f13f08(*(undefined4 *)(param_3 + 0x1cd0),lVar2);
  FUN_00f13e54(lVar1);
  fVar4 = (1.0 - fVar6) * fVar4;
  if ((*(float *)(param_3 + 0x1ad8) != 0.0) || (*(float *)(param_3 + 0x1adc) != fVar4)) {
    *(undefined4 *)(param_3 + 0x1ad8) = 0;
    *(float *)(param_3 + 0x1adc) = fVar4;
    FUN_0091ada4(lVar2);
  }
  local_50 = 0;
  local_4c = fVar6;
  (**(code **)(*(long *)(param_3 + 0x1a98) + 0x28))(lVar2,&local_50);
  if (*(float *)(param_3 + 200) != 12.0) {
    *(undefined4 *)(param_3 + 200) = 0x41400000;
    FUN_0091ada4(param_3 + 0x88);
  }
  FUN_00b03750(*(float *)(param_3 + 0x1cd0) + -24.0,0,param_3);
  FUN_00f0db64(*(float *)(param_3 + 0x1cd0) + -24.0,0,0x3f800000,param_3 + 0x1b70);
  *(uint *)(param_3 + 0x1bf4) = *(uint *)(param_3 + 0x1bf4) & 0xffffffbf;
  fVar6 = *(float *)(param_3 + 0x1adc) + *(float *)(param_3 + 0x1cd4);
  if ((*(float *)(param_3 + 0x1bb0) != 12.0) || (*(float *)(param_3 + 0x1bb4) != fVar6)) {
    *(undefined4 *)(param_3 + 0x1bb0) = 0x41400000;
    *(float *)(param_3 + 0x1bb4) = fVar6;
    FUN_0091ada4(param_3 + 0x1b70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00abc5bc(long param_1)

{
  FUN_00abc610(param_1,0);
  FUN_00b02c3c(param_1,param_1 + 0x1ca0,0);
  FUN_00910394(param_1 + 0x378,&DAT_03210450);
  FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  return;
}




void FUN_00abc610(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4c = DAT_031339d8;
  if ((param_2 & 1) == 0) {
    local_4c = 0xffe0e0e0;
  }
  FUN_00f0c774(param_1 + 0x1a98,&local_4c);
  local_4c = DAT_031339d8;
  if ((param_2 & 1) == 0) {
    local_4c = 0xffe0e0e0;
  }
  FUN_00b035ac(param_1,&local_4c);
  uVar4 = 0x3f333333;
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar3 = FUN_00efee28(uVar4,0x3eb33333,FUN_0091aa80);
  lVar1 = param_1 + 0x1b70;
  FUN_00f01980(lVar1);
  FUN_00f022a0(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    FUN_00f0d75c(lVar1,&DAT_03210450);
  }
  *(byte *)(param_1 + 0x1ce8) = param_2 & 1;
  FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00abc73c(long param_1,undefined8 param_2)

{
  FUN_00b02c3c(param_1,param_2,0);
  FUN_00910394(param_1 + 0x1ca0,param_2);
  FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  return;
}




void FUN_00abc780(long param_1)

{
  FUN_00e70b04(param_1 + 0x378);
  return;
}




void FUN_00abc788(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((((((*(char *)(param_1 + 0x1ce9) == '\0') || (uVar1 = FUN_00abc8b4(param_1), (uVar1 & 1) != 0)
         ) && ((*(char *)(param_1 + 0x1cea) == '\0' ||
               (uVar1 = FUN_00abc93c(param_1,*(undefined4 *)(param_1 + 0x1cd8)), (uVar1 & 1) != 0)))
        ) && ((*(char *)(param_1 + 0x1ceb) == '\0' ||
              (uVar1 = FUN_00abca60(param_1,*(undefined4 *)(param_1 + 0x1cdc)), (uVar1 & 1) != 0))))
      && ((*(char *)(param_1 + 0x1cec) == '\0' || (uVar1 = FUN_00abcb84(param_1), (uVar1 & 1) != 0))
         )) && (((((*(char *)(param_1 + 0x1ced) == '\0' ||
                   (uVar1 = FUN_00abcbf4(param_1), (uVar1 & 1) != 0)) &&
                  ((*(char *)(param_1 + 0x1cee) == '\0' ||
                   (uVar1 = FUN_00abcc64(param_1), (uVar1 & 1) != 0)))) &&
                 ((*(char *)(param_1 + 0x1cef) == '\0' ||
                  (uVar1 = FUN_00abccd4(param_1), (uVar1 & 1) != 0)))) &&
                (((*(char *)(param_1 + 0x1cf0) == '\0' ||
                  (uVar1 = FUN_00abcd44(param_1), (uVar1 & 1) != 0)) &&
                 ((*(char *)(param_1 + 0x1cf1) == '\0' ||
                  (uVar1 = FUN_00abcdd8(param_1), (uVar1 & 1) != 0)))))))) {
    pcVar3 = *(code **)(param_1 + 0x1ce0);
    if (pcVar3 != (code *)0x0) {
      uVar2 = FUN_00ce1f88(param_1);
      uVar1 = (*pcVar3)(uVar2,param_1);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    FUN_00abc610(param_1,0);
    return;
  }
  return;
}




undefined8 FUN_00abc8b4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00ce1f88();
  uVar3 = FUN_00e70b34(uVar2,&DAT_03210450);
  if ((uVar3 & 1) == 0) {
    FUN_00ce1f88(param_1);
    iVar1 = FUN_00e70b14();
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_00abc610(param_1,1);
  uVar2 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
  FUN_00f0d75c(param_1 + 0x1b70,uVar2);
  FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  return 0;
}




void FUN_00abc93c(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ce1f88();
  uVar2 = FUN_00e70b14();
  if (uVar2 < param_2) {
    FUN_00abc610(param_1,1);
    uVar3 = FUN_00e6ce7c("GENERIC_FORM_ERROR_TOO_SHORT",0);
    thunk_FUN_00e7051c(&local_48,uVar3);
    FUN_00e70510(&local_58);
    FUN_00e70e18(&local_58,&DAT_01bb6d43,param_2);
    FUN_00e705c8(&local_68,"[LEN]");
    FUN_00e71248(&local_48,0,&local_68,&local_58);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0x1b70,&local_48);
    FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00abca60(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ce1f88();
  uVar2 = FUN_00e70b14();
  if (param_2 < uVar2) {
    FUN_00abc610(param_1,1);
    uVar3 = FUN_00e6ce7c("GENERIC_FORM_ERROR_TOO_LONG",0);
    thunk_FUN_00e7051c(&local_48,uVar3);
    FUN_00e70510(&local_58);
    FUN_00e70e18(&local_58,&DAT_01bb6d43,param_2);
    FUN_00e705c8(&local_68,"[LEN]");
    FUN_00e71248(&local_48,0,&local_68,&local_58);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0x1b70,&local_48);
    FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




bool FUN_00abcb84(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00ce1f88();
  uVar2 = FUN_00cb5420();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_00abc610(param_1,1);
    uVar3 = FUN_00e6ce7c("GENERIC_FORM_ERROR_NO_SPACES",0);
    FUN_00f0d75c(param_1 + 0x1b70,uVar3);
    FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  }
  return !bVar1;
}




bool FUN_00abcbf4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00ce1f88();
  uVar2 = FUN_00cb5480();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_00abc610(param_1,1);
    uVar3 = FUN_00e6ce7c("GENERIC_FORM_ERROR_ALPHA_NUM",0);
    FUN_00f0d75c(param_1 + 0x1b70,uVar3);
    FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  }
  return !bVar1;
}




bool FUN_00abcc64(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00ce1f88();
  uVar2 = FUN_00cb54f8();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_00abc610(param_1,1);
    uVar3 = FUN_00e6ce7c("GENERIC_FORM_ERROR_NUM",0);
    FUN_00f0d75c(param_1 + 0x1b70,uVar3);
    FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  }
  return !bVar1;
}




bool FUN_00abccd4(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00ce1f88();
  uVar2 = FUN_00cb555c();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    FUN_00abc610(param_1,1);
    uVar3 = FUN_00e6ce7c("GENERIC_FORM_ERROR_ASCII",0);
    FUN_00f0d75c(param_1 + 0x1b70,uVar3);
    FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  }
  return !bVar1;
}




undefined8 FUN_00abcd44(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e70b88(param_1 + 0x1cb0,&DAT_03210450);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00ce1f88(param_1);
    uVar1 = FUN_00e70b88(uVar2,param_1 + 0x1cb0);
    if ((uVar1 & 1) != 0) {
      FUN_00abc610(param_1,1);
      uVar2 = FUN_00e6ce7c("GENERIC_FORM_ERROR_DOES_NOT_MATCH",0);
      FUN_00f0d75c(param_1 + 0x1b70,uVar2);
      FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
      return 0;
    }
  }
  return 1;
}




undefined8 FUN_00abcdd8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e70b88(param_1 + 0x1cc0,&DAT_03210450);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00ce1f88(param_1);
    uVar1 = FUN_00e70b34(uVar2,param_1 + 0x1cc0);
    if ((uVar1 & 1) != 0) {
      FUN_00abc610(param_1,1);
      uVar2 = FUN_00e6ce7c("GENERIC_FORM_ERROR_DOES_NOT_CHANGE",0);
      FUN_00f0d75c(param_1 + 0x1b70,uVar2);
      FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
      return 0;
    }
  }
  return 1;
}




undefined1 FUN_00abce6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ce8);
}




void FUN_00abce78(long param_1)

{
  FUN_00f0d75c(param_1 + 0x1b70);
  FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  return;
}




void FUN_00abceac(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1cd4) = param_1;
  FUN_00abc380(*(undefined4 *)(param_2 + 0x1cd0),0xbf800000);
  return;
}




void FUN_00abcec0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1ce9) = param_2 & 1;
  return;
}




void FUN_00abced0(long param_1,byte param_2,undefined4 param_3)

{
  *(byte *)(param_1 + 0x1cea) = param_2 & 1;
  *(undefined4 *)(param_1 + 0x1cd8) = param_3;
  return;
}




void FUN_00abcee4(long param_1,byte param_2,undefined4 param_3)

{
  *(byte *)(param_1 + 0x1ceb) = param_2 & 1;
  *(undefined4 *)(param_1 + 0x1cdc) = param_3;
  return;
}




void FUN_00abcef8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1cec) = param_2 & 1;
  return;
}




void FUN_00abcf08(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1ced) = param_2 & 1;
  return;
}




void FUN_00abcf18(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1cee) = param_2 & 1;
  return;
}




void FUN_00abcf28(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1cef) = param_2 & 1;
  return;
}




void FUN_00abcf38(long param_1,byte param_2,undefined8 param_3)

{
  *(byte *)(param_1 + 0x1cf0) = param_2 & 1;
  FUN_00910394(param_1 + 0x1cb0,param_3);
  return;
}




void FUN_00abcf58(long param_1,byte param_2,undefined8 param_3)

{
  *(byte *)(param_1 + 0x1cf1) = param_2 & 1;
  FUN_00910394(param_1 + 0x1cc0,param_3);
  return;
}




void FUN_00abcf78(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1ce0) = param_2;
  return;
}




undefined4 FUN_00abcf80(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1cd0);
  FUN_00f01c20(param_1 + 0x400);
  return uVar1;
}




void thunk_FUN_00abc788(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((((((*(char *)(param_1 + 0x1ce9) == '\0') || (uVar1 = FUN_00abc8b4(param_1), (uVar1 & 1) != 0)
         ) && ((*(char *)(param_1 + 0x1cea) == '\0' ||
               (uVar1 = FUN_00abc93c(param_1,*(undefined4 *)(param_1 + 0x1cd8)), (uVar1 & 1) != 0)))
        ) && ((*(char *)(param_1 + 0x1ceb) == '\0' ||
              (uVar1 = FUN_00abca60(param_1,*(undefined4 *)(param_1 + 0x1cdc)), (uVar1 & 1) != 0))))
      && ((*(char *)(param_1 + 0x1cec) == '\0' || (uVar1 = FUN_00abcb84(param_1), (uVar1 & 1) != 0))
         )) && (((((*(char *)(param_1 + 0x1ced) == '\0' ||
                   (uVar1 = FUN_00abcbf4(param_1), (uVar1 & 1) != 0)) &&
                  ((*(char *)(param_1 + 0x1cee) == '\0' ||
                   (uVar1 = FUN_00abcc64(param_1), (uVar1 & 1) != 0)))) &&
                 ((*(char *)(param_1 + 0x1cef) == '\0' ||
                  (uVar1 = FUN_00abccd4(param_1), (uVar1 & 1) != 0)))) &&
                (((*(char *)(param_1 + 0x1cf0) == '\0' ||
                  (uVar1 = FUN_00abcd44(param_1), (uVar1 & 1) != 0)) &&
                 ((*(char *)(param_1 + 0x1cf1) == '\0' ||
                  (uVar1 = FUN_00abcdd8(param_1), (uVar1 & 1) != 0)))))))) {
    pcVar3 = *(code **)(param_1 + 0x1ce0);
    if (pcVar3 != (code *)0x0) {
      uVar2 = FUN_00ce1f88(param_1);
      uVar1 = (*pcVar3)(uVar2,param_1);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    FUN_00abc610(param_1,0);
    return;
  }
  return;
}




void FUN_00abcfb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x3f5) == '\0') {
    lVar2 = param_1 + 0x3c0;
    uVar1 = FUN_00e70b88(lVar2,&DAT_03210450);
    if ((uVar1 & 1) != 0) goto LAB_00abcff8;
  }
  lVar2 = param_1 + 0x1ca0;
LAB_00abcff8:
  FUN_00b02c3c(param_1,lVar2,0);
  FUN_00abc380(*(undefined4 *)(param_1 + 0x1cd0),0xbf800000,param_1);
  return;
}

