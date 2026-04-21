// functions/019d8 — 3 functions
#include "libGameKindred.h"




undefined8 FUN_019d8210(long *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 auStack_5c [12];
  
  lVar6 = *param_1;
  uVar7 = (ulong)param_2;
  if (*(char *)(lVar6 + 0x211) == '\0') {
    lVar5 = *(long *)(lVar6 + 0x208);
  }
  else {
    uVar7 = uVar7 - 0xc;
    lVar5 = *(long *)(lVar6 + 0x208) + 10;
    *(long *)(lVar6 + 0x208) = lVar5;
  }
  plVar8 = (long *)(lVar6 + 0x208);
  iVar1 = (*(code *)param_1[0x7a])(lVar5,1,uVar7,param_1[0x7b]);
  if (iVar1 == 0x10000001) {
    if ((*(byte *)(param_1[100] + 0x7c) >> 4 & 1) == 0) {
      *(uint *)(lVar6 + 0x1e4) = *(uint *)(lVar6 + 0x1e4) | 0x20;
      if (*(char *)(lVar6 + 0x211) != '\0') {
        *plVar8 = *plVar8 + -10;
      }
      *param_3 = 0;
      return 0;
    }
    pcVar4 = "Read callback asked for PAUSE when not supported!";
  }
  else {
    if (iVar1 == 0x10000000) {
      FUN_019ca0fc(lVar6,"operation aborted by callback");
      *param_3 = 0;
      return 0x2a;
    }
    if ((ulong)(long)iVar1 <= uVar7) {
      if ((*(char *)(lVar6 + 0x213) == '\0') && (*(char *)(lVar6 + 0x211) != '\0')) {
        pcVar4 = "\n";
        if ((*(char *)(lVar6 + 0x50b) == '\0') &&
           (pcVar4 = "\r\n", *(char *)(lVar6 + 0x3ca) != '\0')) {
          pcVar4 = "\n";
        }
        iVar2 = FUN_019d5bc0(auStack_5c,0xb,&DAT_01e23def,iVar1,pcVar4);
        lVar5 = *plVar8;
        *plVar8 = lVar5 - iVar2;
        memcpy((void *)(lVar5 - iVar2),auStack_5c,(long)iVar2);
        lVar5 = *plVar8;
        sVar3 = strlen(pcVar4);
        memcpy((void *)(lVar5 + (iVar2 + iVar1)),pcVar4,sVar3);
        if (iVar1 == 0) {
          *(undefined1 *)(lVar6 + 0x1e8) = 1;
        }
        sVar3 = strlen(pcVar4);
        iVar1 = iVar2 + iVar1 + (int)sVar3;
      }
      *param_3 = iVar1;
      return 0;
    }
    *param_3 = 0;
    pcVar4 = "read function returned funny value";
  }
  FUN_019ca0fc(lVar6,pcVar4);
  return 0x1a;
}




ulong FUN_019d83ec(long *param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *(undefined1 *)((long)param_1 + 0x2ef) = 0;
  *(uint *)(lVar4 + 0x1e4) = *(uint *)(lVar4 + 0x1e4) & 0xfffffffd;
  if (*(long *)(lVar4 + 0x290) != 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x420) != 3) {
    if (*(code **)(lVar4 + 0x298) == (code *)0x0) {
      if (*(code **)(lVar4 + 0x2f0) == (code *)0x0) {
        if ((*(code **)(lVar4 + 0x2c8) == fread) &&
           (iVar1 = fseek(*(FILE **)(lVar4 + 0x248),0,0), iVar1 != -1)) {
          return 0;
        }
        FUN_019ca0fc(lVar4,"necessary data rewind wasn\'t possible");
        return 0x41;
      }
      uVar2 = (**(code **)(lVar4 + 0x2f0))(lVar4,1,*(undefined8 *)(lVar4 + 0x350));
      FUN_019c9f64(lVar4,"the ioctl callback returned %d\n",uVar2 & 0xffffffff);
      if ((int)uVar2 == 0) {
        return 0;
      }
      pcVar3 = "ioctl callback returned error %d";
    }
    else {
      uVar2 = (**(code **)(lVar4 + 0x298))(*(undefined8 *)(lVar4 + 0x328),0,0);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      pcVar3 = "seek callback returned error %d";
    }
    FUN_019ca0fc(lVar4,pcVar3,uVar2 & 0xffffffff);
    return 0x41;
  }
  return 0;
}




undefined4 FUN_019d8500(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((param_2 == 0) || (lVar2 = *(long *)(param_1 + 0x418), lVar2 == 0)) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x410) == 2) {
      if (param_2 < lVar2) {
        return 1;
      }
      pcVar1 = "The requested document is not old enough\n";
    }
    else {
      if (lVar2 < param_2) {
        return 1;
      }
      pcVar1 = "The requested document is not new enough\n";
    }
    FUN_019c9f64(param_1,pcVar1);
    *(undefined1 *)(param_1 + 0x8b80) = 1;
    uVar3 = 0;
  }
  return uVar3;
}

