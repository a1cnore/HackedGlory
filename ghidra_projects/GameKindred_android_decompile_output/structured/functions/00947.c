// functions/00947 — 37 functions
#include "libGameKindred.h"




void FUN_00947008(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 200) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00947048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00947050(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x148;
      do {
        FUN_00948920(lVar1);
        lVar2 = lVar2 + -0x148;
        lVar1 = lVar1 + 0x148;
      } while (lVar2 != 0);
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




void FUN_009470c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  int iVar3;
  char *__s2;
  long lVar4;
  char *pcVar5;
  byte local_50 [8];
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 0x1e8);
  FUN_008fce60(param_1 + 0x200,param_3);
  FUN_00e80e5c(1);
  FUN_00937bb4(local_50);
  __n = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    __n = local_48;
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pcVar5 = (char *)((ulong)local_50 | 1);
    __s1 = pcVar5;
    if ((local_50[0] & 1) != 0) {
      __s1 = local_40;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((local_50[0] & 1) == 0) {
      if (__n != 0) {
        lVar4 = -(ulong)(local_50[0] >> 1);
        do {
          if (*pcVar5 != *__s2) goto LAB_0094719c;
          pcVar5 = pcVar5 + 1;
          lVar4 = lVar4 + 1;
          __s2 = __s2 + 1;
        } while (lVar4 != 0);
      }
    }
    else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_0094719c;
    *(undefined1 *)(param_1 + 0x2e4) = 1;
  }
  else {
LAB_0094719c:
    lVar4 = param_1 + 0x290;
    *(undefined1 *)(param_1 + 0x2e4) = 0;
    FUN_00e7f9cc(lVar4);
    pcVar5 = (char *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pcVar5 = local_40;
    }
    FUN_00e7fa58(lVar4,pcVar5);
    FUN_00e7fb10(lVar4,0,FUN_00948b10);
  }
  FUN_00946864(param_1,2,0,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094723c(long param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 undefined4 param_6)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar3 = (*param_5 & 1) != 0;
  uVar1 = (uint)(*param_5 >> 1);
  if (bVar3) {
    uVar1 = *(uint *)(param_5 + 8);
  }
  if (uVar1 != 0) {
    pbVar5 = *(byte **)(param_5 + 0x10);
    if (!bVar3) {
      pbVar5 = param_5 + 1;
    }
    FUN_00e80ea8(pbVar5,param_6,1);
    FUN_008fce60(param_1 + 0x198,param_5);
    *(undefined4 *)(param_1 + 0x1b0) = param_6;
    FUN_00ec52d8(local_70);
    uVar4 = FUN_00939a50();
    bVar3 = (*param_2 & 1) != 0;
    uVar1 = (uint)(*param_2 >> 1);
    if (bVar3) {
      uVar1 = *(uint *)(param_2 + 8);
    }
    if (uVar1 == 0) {
      uVar1 = (uint)(*param_4 >> 1);
      if ((*param_4 & 1) != 0) {
        uVar1 = *(uint *)(param_4 + 8);
      }
      if (uVar1 == 0) {
        FUN_00e81020(&DAT_02c7ecc8,local_70,uVar4);
      }
      else {
        FUN_00e81068(&DAT_02c7ecc8,local_70,param_4,uVar4);
      }
    }
    else {
      pbVar5 = *(byte **)(param_2 + 0x10);
      pbVar6 = *(byte **)(param_3 + 0x10);
      if (!bVar3) {
        pbVar5 = param_2 + 1;
      }
      if ((*param_3 & 1) == 0) {
        pbVar6 = param_3 + 1;
      }
      FUN_00e810a8(&DAT_02c7ecc8,local_70,pbVar5,pbVar6);
      FUN_008fce60(param_1 + 0x1d0,param_3);
    }
    FUN_00946864(param_1,4,0,0);
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




void FUN_009473a8(long param_1,byte *param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar3 = (*param_2 & 1) != 0;
  uVar1 = (uint)(*param_2 >> 1);
  if (bVar3) {
    uVar1 = *(uint *)(param_2 + 8);
  }
  if (uVar1 != 0) {
    pbVar5 = *(byte **)(param_2 + 0x10);
    if (!bVar3) {
      pbVar5 = param_2 + 1;
    }
    FUN_00e80ea8(pbVar5,param_3,1);
    FUN_008fce60(param_1 + 0x198,param_2);
    *(undefined4 *)(param_1 + 0x1b0) = param_3;
    FUN_00ec52d8(local_60);
    uVar4 = FUN_00939a50();
    FUN_00e81174(&DAT_02c7ecc8,local_60,param_4,local_60,uVar4);
    FUN_00946864(param_1,4,0,0);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00947490(long param_1)

{
  FUN_008fce60(param_1 + 0x198,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  FUN_00e80ed0();
  *(undefined2 *)(param_1 + 0x278) = 0;
  FUN_00946864(param_1,1,0,0);
  return;
}




void FUN_009474dc(undefined8 param_1,int param_2)

{
  FUN_009464bc();
  FUN_00e80f2c();
  if (param_2 != 0) {
    FUN_009475f0();
    return;
  }
  FUN_00947518(param_1);
  return;
}




void FUN_00947518(ushort *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  
  FUN_00938b64();
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    uVar5 = 0x1f;
  }
  else {
    uVar5 = param_1[(ulong)uVar1 * 0x1c + 4];
    uVar1 = *param_1 >> 5 & 0x1f;
    if (uVar1 != 0x1f) {
      uVar6 = param_1[(ulong)uVar1 * 0x1c + 4];
      goto LAB_0094757c;
    }
  }
  uVar6 = 0x1f;
LAB_0094757c:
  FUN_00901b0c("sessionBooted",uVar5,uVar6,param_1 + 0xcc,*(undefined4 *)(param_1 + 0x178));
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONBOOTED_TITLE",0);
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONBOOTED_MSG",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,param_1,thunk_FUN_00947fac);
  return;
}




void FUN_009475f0(ushort *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    uVar5 = 0x1f;
  }
  else {
    uVar5 = param_1[(ulong)uVar1 * 0x1c + 4];
    uVar1 = *param_1 >> 5 & 0x1f;
    if (uVar1 != 0x1f) {
      uVar6 = param_1[(ulong)uVar1 * 0x1c + 4];
      goto LAB_00947650;
    }
  }
  uVar6 = 0x1f;
LAB_00947650:
  FUN_00901b0c("sessionExpired",uVar5,uVar6,param_1 + 0xcc,*(undefined4 *)(param_1 + 0x178));
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONEXPIRED_TITLE",0);
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_SESSIONEXPIRED_MSG",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,param_1,thunk_FUN_00947fac);
  return;
}




void FUN_009476c4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x27a) = param_2 & 1;
  return;
}




void FUN_009476d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00e82a5c(param_2,param_3);
  return;
}




void FUN_009476dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00e82a7c(param_2,param_3);
  return;
}




void FUN_009476e8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_008fce60(param_2,param_1 + 0x198);
  *param_3 = *(undefined4 *)(param_1 + 0x1b0);
  return;
}




void FUN_00947720(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  FUN_008fce60(param_2,param_1 + 0x218);
  FUN_008fce60(param_3,param_1 + 0x230);
  *param_4 = *(undefined4 *)(param_1 + 0x248);
  return;
}




long FUN_00947770(long param_1)

{
  return param_1 + 0x1b8;
}




void FUN_00947778(ushort *param_1,byte *param_2)

{
  ulong uVar1;
  
  if (((*param_1 & 0x1f) != 0x1f) && (param_1[(ulong)(*param_1 & 0x1f) * 0x1c + 4] == 6)) {
    uVar1 = (ulong)(*param_2 >> 1);
    if ((*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    if (uVar1 != 0) {
      FUN_00e8323c(param_2);
    }
  }
  FUN_008fce60(param_1 + 0xdc,param_2);
  return;
}




void FUN_009477e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  
  if (*(long *)(param_1 + 0x498) != 0) {
    lVar1 = FUN_00948b18(param_1 + 0x488);
    if (param_1 + 0x490 != lVar1) {
      puVar2 = (undefined1 *)(lVar1 + 0x38);
      goto LAB_00947828;
    }
  }
  puVar2 = &DAT_0320ffa8;
LAB_00947828:
  FUN_008fce60(param_3,puVar2);
  return;
}




void FUN_0094783c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ec52d8(local_40);
  uVar2 = FUN_00939a50();
  FUN_00e825b8(local_40,param_1 + 0x2f8,uVar2);
  *(undefined1 *)(param_1 + 0x279) = 1;
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009478b4(long param_1,undefined4 param_2,ulong param_3,byte param_4)

{
  ulong uVar1;
  
  if ((param_3 & 1) != 0) {
    FUN_00e80f2c();
    *(undefined1 *)(param_1 + 0x279) = 0;
    uVar1 = thunk_FUN_00ec9300();
    if ((uVar1 & 1) != 0) {
      thunk_FUN_00ec9460();
    }
    FUN_00e70314(param_1 + 0x268);
    *(byte *)(param_1 + 0x279) = ~param_4 & 1;
    FUN_00946864(param_1,1,0,0);
  }
  if (((*(char *)(param_1 + 0x27a) != '\0') && (uVar1 = FUN_00a9b890(), (uVar1 & 1) != 0)) &&
     (uVar1 = FUN_00a9b8a4(), (uVar1 & 1) == 0)) {
    FUN_00947980(param_1,param_2);
    return;
  }
  if ((param_4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x279) = 0;
    *(undefined4 *)(param_1 + 0x288) = param_2;
  }
  return;
}




void FUN_0094795c(long param_1)

{
  FUN_00e80f2c();
  *(undefined1 *)(param_1 + 0x279) = 0;
  return;
}




void FUN_00947980(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    FUN_009479c0();
    return;
  case 2:
    FUN_00947a40();
    return;
  case 3:
    FUN_00947b80();
    return;
  case 4:
    FUN_00947bf4();
    return;
  case 5:
    FUN_00947cec();
    return;
  case 6:
    FUN_00947c68();
    return;
  default:
    return;
  case 8:
    FUN_00947518();
    return;
  }
}




void FUN_009479c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00904d58("connectFailed");
  uVar1 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_PLATFORMCONNECT_TITLE",0);
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_PLATFORMCONNECT_MSG",0);
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_PLATFORMCONNECT_ACCEPT",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,param_1,thunk_FUN_00947fac);
  return;
}




void FUN_00947a40(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_00e6b5e4();
  if ((*(long *)(param_1 + 0x2e8) == 0) || (lVar1 < *(long *)(param_1 + 0x2e8) + 0xf)) {
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + 1;
  }
  *(long *)(param_1 + 0x2e8) = lVar1;
  FUN_00904d58("connectionDropped");
  if (*(int *)(param_1 + 0x2f0) == 3) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    uVar2 = FUN_00ec544c();
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
      uVar4 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
      uVar5 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
      uVar6 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_REJECT",0);
      FUN_00a9b94c(uVar3,uVar4,uVar5,uVar6,param_1,thunk_FUN_00947fac,FUN_00948050);
      return;
    }
  }
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
  uVar4 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
  uVar5 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
  FUN_00a9b8b8(uVar3,uVar4,uVar5,param_1,thunk_FUN_00947fac);
  return;
}




void FUN_00947b80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_OFFLINE_TITLE",0);
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_OFFLINE_MSG",0);
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_OFFLINE_ACCEPT",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,param_1,thunk_FUN_00947e6c);
  return;
}




void FUN_00947bf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_UPDATE_TITLE",0);
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_UPDATE_MSG",0);
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_UPDATE_ACCEPT",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,param_1,thunk_FUN_00947f0c);
  return;
}




void FUN_00947c68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00938b64();
  FUN_00904d58("authenticationFailed");
  uVar1 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_TITLE",0);
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_MSG",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,param_1,thunk_FUN_00947fac);
  return;
}




void FUN_00947cec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00938b64();
  FUN_00938c80();
  FUN_00904d58("unknownPlayer");
  uVar1 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_TITLE",0);
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_UNKNOWNPLAYER_MSG",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,param_1,thunk_FUN_00947fac);
  return;
}




void FUN_00947d74(char *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00937f48();
  pcVar1 = "Support%20Request";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  FUN_00e6a93c(auStack_138,0x100,"mailto:%s?subject=%s",uVar3,pcVar1);
  FUN_00ec5454(auStack_138);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00947df4(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00947d74("Unknown%20Account");
    return;
  }
  return;
}




void FUN_00947e1c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00947d74("Cannot%20Connect");
    return;
  }
  return;
}




void FUN_00947e44(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00947d74("Connection%20Dropped");
    return;
  }
  return;
}




void FUN_00947e6c(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ec544c();
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  FUN_0093915c(0,0,0,0,local_40,0);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_00ec5454(pvVar1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00947f0c(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ec544c();
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  FUN_0093915c(local_40,0,0,0,0,0);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_00ec5454(pvVar1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00947fac(ushort *param_1)

{
  if (((*param_1 & 0x1f) != 0x1f) && (param_1[(ulong)(*param_1 & 0x1f) * 0x1c + 4] == 6)) {
    return;
  }
  FUN_00947490(DAT_02c7ece8);
  FUN_009470c0(DAT_02c7ece8,&DAT_0320ffa8,&DAT_0320ffa8);
  return;
}




void thunk_FUN_00947e6c(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong auStack_40 [2];
  void *pvStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ec544c();
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  pvStack_30 = (void *)0x0;
  FUN_0093915c(0,0,0,0,auStack_40,0);
  pvVar1 = (void *)((ulong)auStack_40 | 1);
  if ((auStack_40[0] & 1) != 0) {
    pvVar1 = pvStack_30;
  }
  FUN_00ec5454(pvVar1);
  if ((auStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00947f0c(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong auStack_40 [2];
  void *pvStack_30;
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ec544c();
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  pvStack_30 = (void *)0x0;
  FUN_0093915c(auStack_40,0,0,0,0,0);
  pvVar1 = (void *)((ulong)auStack_40 | 1);
  if ((auStack_40[0] & 1) != 0) {
    pvVar1 = pvStack_30;
  }
  FUN_00ec5454(pvVar1);
  if ((auStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00947fac(ushort *param_1)

{
  if (((*param_1 & 0x1f) != 0x1f) && (param_1[(ulong)(*param_1 & 0x1f) * 0x1c + 4] == 6)) {
    return;
  }
  FUN_00947490(DAT_02c7ece8);
  FUN_009470c0(DAT_02c7ece8,&DAT_0320ffa8,&DAT_0320ffa8);
  return;
}

