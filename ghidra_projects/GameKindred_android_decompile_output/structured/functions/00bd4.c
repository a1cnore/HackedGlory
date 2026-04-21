// functions/00bd4 — 34 functions
#include "libGameKindred.h"




long FUN_00bd420c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_00bd4f80();
  lVar3 = param_1 + (long)iVar2 * 0xa1;
  lVar1 = lVar3 + 0x1e0;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar1 = lVar3 + 0xbf8;
  }
  return lVar1;
}




void FUN_00bd4250(long param_1,uint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (*(uint *)((long)param_2 + 0x4d) < *param_2) {
    uVar1 = *(undefined8 *)(param_1 + 8);
LAB_00bd4278:
    bVar2 = 0;
  }
  else {
    if (param_2[2] < param_2[1]) {
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      if ((char)param_2[0x13] == '\0') goto LAB_00bd4278;
    }
    bVar2 = *(byte *)((long)param_2 + 0x51) ^ 1;
  }
  FUN_00c32be4(uVar1,*param_2,bVar2);
  FUN_00c32c00(*(undefined8 *)(param_1 + 8),*(undefined4 *)((long)param_2 + 0x4d));
  return;
}




void FUN_00bd42c0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133754,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd432c(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) | 4;
  return;
}




void FUN_00bd4340(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb
  ;
  return;
}




void FUN_00bd4354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_009e0cac(*(undefined8 *)(param_1 + 0x1608),uVar1);
  return;
}




void FUN_00bd4384(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1608);
  uVar1 = FUN_00f04924(param_2);
  FUN_009e0cb4(uVar2,uVar1);
  return;
}




void FUN_00bd43b0(long param_1)

{
  *(undefined8 *)(param_1 + 0x1610) = 0;
  return;
}




void FUN_00bd43b8(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0;
  lVar5 = 0x68;
  do {
    cVar1 = *(char *)((long)param_1 + lVar5);
    cVar3 = FUN_009e0d78(param_1[0x2c1]);
    if (cVar1 == cVar3) goto LAB_00bd4404;
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x28;
  } while (uVar4 < 5);
  uVar4 = 0xffffffff;
LAB_00bd4404:
  if ((int)uVar4 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00bd4428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1);
    return;
  }
  iVar2 = *(int *)((long)param_1 + 0x1644);
  if (iVar2 != -1) {
    FUN_00bd589c(param_1 + (long)iVar2 * 5 + 9,0,0);
    *(undefined4 *)((long)param_1 + 0x1644) = 0xffffffff;
  }
  if ((iVar2 != param_2) &&
     (uVar4 = FUN_00bd589c(param_1 + (long)param_2 * 5 + 9,1,0), (uVar4 & 1) != 0)) {
    *(int *)((long)param_1 + 0x1644) = param_2;
  }
  return;
}




uint FUN_00bd4494(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  pcVar4 = (char *)(param_1 + 0x68);
  do {
    cVar1 = *pcVar4;
    cVar2 = FUN_009e0d78(*(undefined8 *)(param_1 + 0x1608));
    if (cVar1 == cVar2) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 0x28;
  } while (uVar3 < 5);
  return 0xffffffff;
}




void FUN_00bd44ec(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_009e0d88(*(undefined8 *)(param_1 + 0x1608));
  if (iVar1 == 0xffff) {
    FUN_00c32700(*(undefined8 *)(param_1 + 8),param_2);
  }
  iVar1 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
  if ((iVar1 != 0xffff) && (lVar2 = FUN_00c32690(*(undefined8 *)(param_1 + 8),iVar1), lVar2 != 0)) {
    FUN_00aa9b14();
  }
  FUN_009e0bd4(*(undefined8 *)(param_1 + 0x1608),param_2);
  iVar1 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
  FUN_00ecf888(*(long *)(param_1 + 8) + 0x9bb8,iVar1 != 0xffff);
  if ((iVar1 != 0xffff) && (lVar2 = FUN_00c32690(*(undefined8 *)(param_1 + 8),iVar1), lVar2 != 0)) {
    FUN_00aa9b78();
  }
  iVar1 = FUN_00bd4f80(param_1);
  lVar3 = param_1 + (long)iVar1 * 0xa1;
  lVar2 = lVar3 + 0x1e0;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar2 = lVar3 + 0xbf8;
  }
  FUN_00bd45d8(param_1,lVar2);
  return;
}




void FUN_00bd45d8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x1640) != '\0') {
    return;
  }
  iVar4 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
  bVar3 = FUN_00bd4750(param_1,iVar4);
  cVar1 = *(char *)(param_2 + 3);
  uVar5 = FUN_009e0b58(*(undefined8 *)(param_1 + 0x1608),iVar4);
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_00ceace8();
    if (lVar6 != 0) {
      FUN_00ceace8();
      uVar5 = FUN_00ceae90();
      if ((uVar5 & 1) != 0) goto LAB_00bd465c;
    }
    bVar2 = iVar4 == 0xffff;
  }
  else {
LAB_00bd465c:
    bVar2 = true;
  }
  FUN_00c3276c(*(undefined8 *)(param_1 + 8),bVar3 & cVar1 == '\0',bVar2);
  return;
}




void FUN_00bd4690(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
  local_3c = uVar2;
  if ((uVar2 != 0xffff) && (uVar3 = FUN_00bd4750(param_1,uVar2), (uVar3 & 1) != 0)) {
    thunk_FUN_00926108(*(undefined8 *)(param_1 + 0x1608));
    lVar4 = FUN_00c32690(*(undefined8 *)(param_1 + 8),uVar2);
    if (lVar4 != 0) {
      FUN_00aa9b14();
    }
    puVar5 = (undefined8 *)FUN_00ce9ba0(&local_3c);
    FUN_00bd615c(param_1 + 0x18,*puVar5);
    FUN_00bd6418(param_1 + 0x18,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00bd4750(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0xffff) && (uVar1 = FUN_00bd5088(param_1,param_2), (uVar1 & 1) == 0)) {
    lVar2 = FUN_00ceace8(0);
    if (lVar2 != 0) {
      FUN_00ceace8();
      uVar1 = FUN_00ceae90();
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    uVar3 = FUN_009e0b58(*(undefined8 *)(param_1 + 0x1608),param_2);
    return uVar3;
  }
  return 0;
}




void FUN_00bd47cc(long param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  pbVar2 = (byte *)(param_1 + 0x68);
  do {
    if (*pbVar2 == param_2) goto LAB_00bd4818;
    uVar5 = uVar5 + 1;
    pbVar2 = pbVar2 + 0x28;
  } while (uVar5 < 5);
  uVar5 = 0xffffffffffffffff;
LAB_00bd4818:
  lVar4 = param_1 + (long)(int)param_2 * 0xa1;
  lVar3 = lVar4 + 0x1e0;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar3 = lVar4 + 0xbf8;
  }
  thunk_FUN_00e7051c(&local_48,&DAT_03210450);
  FUN_00e705a0(&local_48,lVar3 + 0x11);
  lVar3 = param_1 + (long)(int)uVar5 * 0x28;
  if (*(char *)(lVar3 + 0x6b) == '\0') {
    FUN_00bc50d4(*(undefined8 *)(param_1 + 0x1630),&local_48);
  }
  else {
    FUN_00bc50cc();
  }
  FUN_00bd589c(lVar3 + 0x48,0,0);
  *(undefined4 *)(param_1 + 0x1644) = 0xffffffff;
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




uint FUN_00bd48d0(long param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  pbVar2 = (byte *)(param_1 + 0x68);
  do {
    if (*pbVar2 == param_2) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    pbVar2 = pbVar2 + 0x28;
  } while (uVar1 < 5);
  return 0xffffffff;
}




void FUN_00bd4900(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009e0d80(*(undefined8 *)(param_1 + 0x1608));
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb3c(uVar3,uVar2);
  FUN_008fa54c(local_40,uVar3);
  FUN_008fa54c(local_58,&DAT_01e277f2);
  FUN_00cbc1d0(local_40,local_58,1,&DAT_03218f18);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd49ac(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_009e0d88(*(undefined8 *)(param_1 + 0x1608));
  if (iVar2 != 0xffff) {
    local_2c = FUN_009e0d88(*(undefined8 *)(param_1 + 0x1608));
    puVar3 = (undefined8 *)FUN_00ce9ba0(&local_2c);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00bd615c(param_1 + 0x18,*puVar3);
    }
    FUN_00bd6418(param_1 + 0x18,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd4a40(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if ((*(char *)(param_1 + 0x1648) == '\0') && (uVar4 = FUN_00e80f58(), (uVar4 & 1) == 0)) {
    uVar2 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x1608));
    FUN_00ceace8();
    iVar3 = FUN_00ceb0d0();
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = (int)(uVar2 & 0xff) / iVar3;
    }
    FUN_009e0cbc(*(undefined8 *)(param_1 + 0x1608),((uVar2 & 0xff) - iVar1 * iVar3) + 1);
    return;
  }
  return;
}




void FUN_00bd4aa4(long param_1)

{
  FUN_009e0cc8(*(undefined8 *)(param_1 + 0x1608));
  return;
}




void FUN_00bd4aac(long param_1)

{
  thunk_FUN_0092563c(*(undefined8 *)(param_1 + 0x1608));
  *(int *)(param_1 + 0x164c) = *(int *)(param_1 + 0x164c) + 1;
  FUN_0090998c("gold",*(undefined4 *)(param_1 + 0x1650));
  return;
}




void FUN_00bd4ae8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x1610) != 0) goto LAB_00bd4c7c;
  cVar3 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x1608));
  FUN_00ceace8();
  uVar5 = FUN_00ceaf84();
  if ((uVar5 & 1) == 0) {
    FUN_00ceace8();
    uVar5 = FUN_00ceaf9c();
    if ((uVar5 & 1) != 0) {
      FUN_00ceace8();
      uVar5 = FUN_00ceaea0();
      uVar6 = 0;
      if ((uVar5 & 1) == 0) goto LAB_00bd4b60;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 2;
  }
LAB_00bd4b60:
  lVar7 = FUN_00cbe1bc(uVar6,cVar3 == '\x01',0,&DAT_03218f18);
  local_60 = DAT_0313c888;
  *(long *)(param_1 + 0x1610) = lVar7;
  local_88 = FUN_00bd4cac;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  lStack_80 = param_1;
  FUN_009693a0(lVar7 + 8,&local_88);
  local_60 = DAT_0313c88c;
  local_88 = FUN_00bd4cdc;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  lStack_80 = param_1;
  FUN_009693a0(*(long *)(param_1 + 0x1610) + 8,&local_88);
  local_60 = DAT_03210c2c;
  local_88 = FUN_00bd4d08;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  lStack_80 = param_1;
  FUN_009693a0(*(long *)(param_1 + 0x1610) + 8,&local_88);
  uVar6 = *(undefined8 *)(param_1 + 0x1610);
  iVar4 = FUN_00bd4f80(param_1);
  lVar7 = param_1 + 0x1e0 + (long)iVar4 * 0xa1;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar7 = param_1 + 0xbf8 + (long)iVar4 * 0xa1;
  }
  uVar1 = *(undefined1 *)(lVar7 + 5);
  iVar4 = FUN_00bd4f80(param_1);
  lVar7 = param_1 + 0x1e0 + (long)iVar4 * 0xa1;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar7 = param_1 + 0xbf8 + (long)iVar4 * 0xa1;
  }
  FUN_00cbe2dc(uVar6,uVar1,*(undefined1 *)(lVar7 + 6));
LAB_00bd4c7c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd4cac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_009e0cac(*(undefined8 *)(param_1 + 0x1608),uVar1);
  return;
}




void FUN_00bd4cdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1608);
  uVar1 = FUN_00f04924(param_4);
  FUN_009e0cb4(uVar2,uVar1);
  return;
}




void FUN_00bd4d08(long param_1)

{
  *(undefined8 *)(param_1 + 0x1610) = 0;
  return;
}




void FUN_00bd4d10(long param_1,undefined8 param_2)

{
  FUN_009e0c9c(*(undefined8 *)(param_1 + 0x1608));
  FUN_00c32760(*(undefined8 *)(param_1 + 8),param_2);
  return;
}




void FUN_00bd4d40(long param_1,undefined8 param_2)

{
  FUN_009e0c9c(*(undefined8 *)(param_1 + 0x15f8));
  FUN_00c32760(*(undefined8 *)(param_1 + -8),param_2);
  return;
}




void FUN_00bd4d70(void)

{
  return;
}




void FUN_00bd4d74(void)

{
  return;
}




void FUN_00bd4d78(long param_1,char param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_009580c4();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00e829e0();
    FUN_0090dab8(local_68,&DAT_01b9349c,lVar4 + 0xa8);
    FUN_008fcdb8(local_50,local_68);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    if (param_2 == '\x02') {
      pcVar5 = "teamright";
      uVar6 = 9;
    }
    else if (param_2 == '\x01') {
      pcVar5 = "teamleft";
      uVar6 = 8;
    }
    else {
      pcVar5 = "default";
      uVar6 = 7;
    }
    FUN_0090de84(local_50,pcVar5,uVar6);
    pbVar1 = (byte *)(param_1 + 0x1618);
    FUN_008fce60(pbVar1,local_50);
    if ((*pbVar1 & 1) == 0) {
      lVar4 = param_1 + 0x1619;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x1628);
    }
    FUN_0090d918(lVar4);
    FUN_00bc4f10(*(undefined8 *)(param_1 + 0x1630),pbVar1);
    FUN_00bc4f10(*(undefined8 *)(param_1 + 0x1638),pbVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd4ea8(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)FUN_00ce9af4();
  plVar8 = (long *)*puVar4;
  if (*plVar8 != 0) {
    do {
      uVar5 = FUN_0093d7f8();
      if (((uVar5 & 1) == 0) || (*(char *)((undefined8 *)*plVar8 + 1) != '\0')) {
        bVar1 = (**(code **)(**(long **)(param_1 + 0x1608) + 0x48))
                          (*(long **)(param_1 + 0x1608),*(undefined8 *)*plVar8);
        bVar2 = FUN_00e80f58();
        bVar1 = bVar1 | bVar2 ^ 1 | *(char *)(param_1 + 0x1648) != '\0';
        lVar6 = FUN_00ceace8();
        if (lVar6 != 0) {
          FUN_00ceace8();
          bVar2 = FUN_00ceae90();
          bVar1 = bVar1 | bVar2;
        }
        uVar7 = FUN_00d6eb50();
        uVar3 = FUN_00d6e9d4(uVar7,*(undefined8 *)*plVar8);
        FUN_00c325ec(*(undefined8 *)(param_1 + 8),uVar3,bVar1 & 1);
      }
      plVar8 = plVar8 + 1;
    } while (*plVar8 != 0);
  }
  FUN_00c32e58(*(undefined8 *)(param_1 + 8));
  return;
}




ulong FUN_00bd4f80(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = 0;
  pcVar4 = (char *)(param_1 + 0xbf8);
  do {
    pcVar1 = pcVar4 + -0xa18;
    if (*(char *)(param_1 + 0x1640) != '\0') {
      pcVar1 = pcVar4;
    }
    if ((*pcVar1 != '\0') && (uVar2 = FUN_00ced270(*(undefined2 *)(pcVar1 + 0xb)), (uVar2 & 1) != 0)
       ) goto LAB_00bd4fd8;
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 0xa1;
  } while (uVar3 < 10);
  uVar3 = 0xffffffff;
LAB_00bd4fd8:
  return uVar3 & 0xffffffff;
}




undefined8 FUN_00bd4fec(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar1 = (long *)FUN_00ce9af4();
  plVar1 = (long *)*plVar1;
  lVar5 = *plVar1;
  do {
    if (lVar5 == 0) {
      return 0xffff;
    }
    uVar2 = FUN_0093d7f8();
    if (((uVar2 & 1) == 0) || (*(char *)((undefined8 *)*plVar1 + 1) != '\0')) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x1608) + 0x48))
                        (*(long **)(param_1 + 0x1608),*(undefined8 *)*plVar1);
      uVar3 = FUN_00e80f58();
      if (((uVar2 & 1) != 0) || ((uVar3 & 1) == 0)) {
        uVar4 = FUN_00d6eb50();
        uVar4 = FUN_00d6e9d4(uVar4,*(undefined8 *)*plVar1);
        return uVar4;
      }
    }
    plVar1 = plVar1 + 1;
    lVar5 = *plVar1;
  } while( true );
}




void thunk_FUN_00bd4250(long param_1,uint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (*(uint *)((long)param_2 + 0x4d) < *param_2) {
    uVar1 = *(undefined8 *)(param_1 + 8);
LAB_00bd4278:
    bVar2 = 0;
  }
  else {
    if (param_2[2] < param_2[1]) {
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      if ((char)param_2[0x13] == '\0') goto LAB_00bd4278;
    }
    bVar2 = *(byte *)((long)param_2 + 0x51) ^ 1;
  }
  FUN_00c32be4(uVar1,*param_2,bVar2);
  FUN_00c32c00(*(undefined8 *)(param_1 + 8),*(undefined4 *)((long)param_2 + 0x4d));
  return;
}

