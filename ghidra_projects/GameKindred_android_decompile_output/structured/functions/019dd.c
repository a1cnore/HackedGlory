// functions/019dd — 11 functions
#include "libGameKindred.h"




undefined8 FUN_019dd070(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = FUN_019dcb30();
  if (((int)uVar2 == 0) && (*param_2 == '\0')) {
    iVar1 = FUN_019c3f38(param_1);
    if (iVar1 == 0) {
      uVar2 = *param_1;
      auVar3 = FUN_019c338c();
      uVar2 = FUN_019d45a4(uVar2,auVar3._0_8_,auVar3._8_8_);
      return uVar2;
    }
    uVar2 = 0x2a;
  }
  return uVar2;
}




undefined8 FUN_019dd164(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *param_1;
  time((time_t *)(param_1 + 10));
  lVar2 = FUN_019bccd8(**(undefined8 **)(param_1 + 4),0,iVar3 == 0);
  if (lVar2 < 0) {
    FUN_019ca0fc(**(undefined8 **)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  if (iVar3 == 0) {
    lVar2 = (lVar2 + 500) / 1000;
    iVar4 = (int)lVar2;
    iVar3 = iVar4 / 5;
    if (iVar4 < 5) {
      iVar3 = 1;
    }
    param_1[9] = iVar3;
    lVar5 = *(long *)(param_1 + 10);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar4 / iVar3;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    lVar6 = lVar5 + lVar2;
    *(long *)(param_1 + 0xc) = lVar6;
    param_1[8] = iVar1;
  }
  else {
    if (lVar2 < 1) {
      lVar2 = 0xe10;
    }
    else {
      lVar2 = (lVar2 + 500) / 1000;
    }
    iVar3 = (int)lVar2 / 5;
    param_1[9] = iVar3;
    lVar5 = *(long *)(param_1 + 10);
    lVar6 = lVar5 + lVar2;
    *(long *)(param_1 + 0xc) = lVar6;
  }
  if (iVar3 < 3) {
    iVar3 = 3;
  }
  else {
    if (iVar3 < 0x33) goto LAB_019dd2a4;
    iVar3 = 0x32;
  }
  param_1[9] = iVar3;
LAB_019dd2a4:
  iVar4 = 0;
  if ((long)iVar3 != 0) {
    iVar4 = (int)(lVar2 / (long)iVar3);
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  param_1[8] = iVar4;
  FUN_019c9f64(**(undefined8 **)(param_1 + 4),
               "set timeouts for state %d; Total %ld, retry %d maxtry %d\n",*param_1,lVar6 - lVar5);
  time((time_t *)(param_1 + 0xe));
  return 0;
}




undefined8 FUN_019dd2f0(int param_1)

{
  undefined8 uVar1;
  
  if (-1 < param_1) {
    uVar1 = 0x44;
    switch(param_1) {
    case 0:
    case 4:
      return 0x47;
    case 1:
      goto switchD_019dd314_caseD_1;
    case 2:
      return 0x45;
    case 3:
      return 0x46;
    case 5:
      return 0x48;
    case 6:
      return 0x49;
    case 7:
      return 0x4a;
    default:
      return 0x2a;
    }
  }
  if (param_1 == -100) {
    uVar1 = 0;
switchD_019dd314_caseD_1:
    return uVar1;
  }
  if (param_1 == -99) {
    return 0x1c;
  }
  if (param_1 != -0x62) {
    return 0x2a;
  }
  return 7;
}




undefined8 FUN_019dd380(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  char *__s;
  size_t sVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined2 local_80 [32];
  
  lVar10 = **(long **)(param_1 + 4);
  switch(*param_1) {
  case 0:
    break;
  case 1:
    uVar5 = FUN_019dd770(param_1);
    return uVar5;
  case 2:
    uVar5 = FUN_019dda18(param_1);
    return uVar5;
  case 3:
    FUN_019c9f64(lVar10,&DAT_01e28837,"TFTP finished");
    return 0;
  default:
    FUN_019ca0fc(lVar10,"%s","Internal state machine error");
    return 0x47;
  }
  cVar3 = *(char *)(lVar10 + 0x50b);
  pcVar1 = "octet";
  if (cVar3 != '\0') {
    pcVar1 = "netascii";
  }
  switch(param_2) {
  case 0:
  case 7:
    iVar2 = param_1[7];
    param_1[7] = iVar2 + 1;
    if ((int)param_1[9] <= iVar2) {
      param_1[2] = 0xffffff9e;
      *param_1 = 3;
      return 0;
    }
    cVar4 = *(char *)(lVar10 + 0x519);
    **(undefined1 **)(param_1 + 0x5a) = 0;
    if (cVar4 == '\0') {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 1;
    }
    else {
      *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 2;
      *(long *)(**(long **)(param_1 + 4) + 0x208) = *(long *)(param_1 + 0x5a) + 4;
      if (*(long *)(lVar10 + 0x8b28) != -1) {
        FUN_019c4460(lVar10);
      }
    }
    __s = (char *)FUN_019d4834(lVar10,*(long *)(**(long **)(param_1 + 4) + 0x8ae8) + 1,0,0);
    if (__s == (char *)0x0) {
      return 0x1b;
    }
    FUN_019d5bc0(*(long *)(param_1 + 0x5a) + 2,(long)(int)param_1[0x55],&DAT_01e24bb5,__s,0,pcVar1,0
                );
    sVar6 = strlen(__s);
    lVar8 = 9;
    if (cVar3 != '\0') {
      lVar8 = 0xc;
    }
    lVar8 = sVar6 + lVar8;
    if ((*(char *)(lVar10 + 0x519) == '\0') || (*(long *)(lVar10 + 0x8b28) == -1)) {
      local_80[0] = 0x30;
    }
    else {
      FUN_019d5bc0(local_80,0x40,"%ld");
    }
    lVar7 = FUN_019ddcec(param_1,lVar8,*(long *)(param_1 + 0x5a) + lVar8,"tsize");
    lVar7 = lVar7 + lVar8;
    lVar8 = FUN_019ddcec(param_1,lVar7,*(long *)(param_1 + 0x5a) + lVar7,local_80);
    lVar8 = lVar8 + lVar7;
    FUN_019d5bc0(local_80,0x40,&DAT_01bb6d43,param_1[0x56]);
    lVar7 = FUN_019ddcec(param_1,lVar8,*(long *)(param_1 + 0x5a) + lVar8,"blksize");
    lVar7 = lVar7 + lVar8;
    lVar8 = FUN_019ddcec(param_1,lVar7,*(long *)(param_1 + 0x5a) + lVar7,local_80);
    lVar8 = lVar8 + lVar7;
    FUN_019d5bc0(local_80,0x40,&DAT_01bb6d43,param_1[8]);
    lVar7 = FUN_019ddcec(param_1,lVar8,*(long *)(param_1 + 0x5a) + lVar8,"timeout");
    lVar7 = lVar7 + lVar8;
    lVar8 = FUN_019ddcec(param_1,lVar7,*(long *)(param_1 + 0x5a) + lVar7,local_80);
    sVar6 = sendto(param_1[6],*(void **)(param_1 + 0x5a),lVar8 + lVar7,0,
                   *(sockaddr **)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x20),
                   *(socklen_t *)(*(long *)(*(long *)(param_1 + 4) + 0x60) + 0x10));
    if (sVar6 != lVar8 + lVar7) {
      uVar5 = *(undefined8 *)(param_1 + 4);
      puVar9 = (undefined4 *)__errno();
      uVar5 = FUN_019c1348(uVar5,*puVar9);
      FUN_019ca0fc(lVar10,"%s",uVar5);
    }
    (*(code *)PTR_free_02bf74b0)(__s);
    break;
  default:
    FUN_019ca0fc(lVar10,"tftp_send_first: internal error");
    break;
  case 3:
    uVar5 = 3;
    goto LAB_019dd600;
  case 4:
    uVar5 = 4;
LAB_019dd530:
    uVar5 = FUN_019ddd54(param_1,uVar5);
    return uVar5;
  case 5:
    *param_1 = 3;
    return 0;
  case 6:
    if (*(char *)(lVar10 + 0x519) != '\0') {
      uVar5 = 6;
      goto LAB_019dd530;
    }
    uVar5 = 6;
LAB_019dd600:
    uVar5 = FUN_019dddb8(param_1,uVar5);
    return uVar5;
  }
  return 0;
}




undefined8 FUN_019dd770(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ssize_t sVar3;
  ssize_t sVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = **(undefined8 **)(param_1 + 4);
  switch(param_2) {
  case 3:
    uVar2 = *(ushort *)(*(long *)(param_1 + 0x58) + 2) >> 8 |
            *(ushort *)(*(long *)(param_1 + 0x58) + 2) << 8;
    if ((ushort)(*(ushort *)(param_1 + 0x10) + 1) == uVar2) {
      param_1[7] = 0;
    }
    else {
      if (*(ushort *)(param_1 + 0x10) != uVar2) {
        FUN_019c9f64(uVar7,"Received unexpected DATA packet block %d, expecting block %d\n",uVar2);
        return 0;
      }
      FUN_019c9f64(uVar7,"Received last DATA packet block %d again.\n",uVar2);
    }
    *(ushort *)(param_1 + 0x10) = uVar2;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sVar4 = sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),
                   param_1[0x52]);
    if (-1 < sVar4) {
      uVar6 = 3;
      if ((long)(int)param_1[0x55] + 4 <= (long)(int)param_1[0x53]) {
        uVar6 = 1;
      }
      *param_1 = uVar6;
code_r0x019dd830:
      time((time_t *)(param_1 + 0xe));
      return 0;
    }
    break;
  default:
    FUN_019ca0fc(uVar7,"%s","tftp_rx: internal error");
    return 0x47;
  case 5:
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),param_1[0x52]
          );
    *param_1 = 3;
    return 0;
  case 6:
    *(undefined2 *)(param_1 + 0x10) = 0;
    param_1[7] = 0;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar1;
    sVar4 = sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),
                   param_1[0x52]);
    if (-1 < sVar4) {
      *param_1 = 1;
      goto code_r0x019dd830;
    }
    break;
  case 7:
    param_1[7] = param_1[7] + 1;
    FUN_019c9f64(uVar7,"Timeout waiting for block %d ACK.  Retries = %d\n",
                 *(short *)(param_1 + 0x10) + 1);
    if ((int)param_1[9] < (int)param_1[7]) {
      param_1[2] = 0xffffff9d;
      *param_1 = 3;
      return 0;
    }
    sVar3 = sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),
                   param_1[0x52]);
    sVar4 = 0;
    if (-1 < sVar3) {
      return 0;
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 4);
  puVar5 = (undefined4 *)__errno(sVar4);
  uVar8 = FUN_019c1348(uVar8,*puVar5);
  FUN_019ca0fc(uVar7,"%s",uVar8);
  return 0x37;
}




undefined8 FUN_019dda18(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  ssize_t sVar4;
  ssize_t sVar5;
  undefined4 *puVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = **(long **)(param_1 + 4);
  switch(param_2) {
  case 4:
    uVar3 = *(ushort *)(*(long *)(param_1 + 0x58) + 2) >> 8 |
            *(ushort *)(*(long *)(param_1 + 0x58) + 2) << 8;
    if ((uVar3 != *(ushort *)(param_1 + 0x10)) &&
       ((*(ushort *)(param_1 + 0x10) != 0 || (uVar3 != 0xffff)))) {
      FUN_019c9f64(lVar9,"Received ACK for block %d, expecting %d\n");
      iVar1 = param_1[7];
      param_1[7] = iVar1 + 1;
      if ((int)param_1[9] <= iVar1) {
        FUN_019ca0fc(lVar9,"tftp_tx: giving up waiting for block %d ack",
                     *(undefined2 *)(param_1 + 0x10));
        return 0x37;
      }
      sVar5 = sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0x4000,
                     (sockaddr *)(param_1 + 0x32),param_1[0x52]);
      sVar4 = 0;
      if (-1 < sVar5) {
        return 0;
      }
      goto LAB_019ddc98;
    }
    time((time_t *)(param_1 + 0xe));
    sVar8 = *(short *)(param_1 + 0x10) + 1;
    break;
  case 5:
    *param_1 = 3;
    **(undefined1 **)(param_1 + 0x5a) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 5;
    uVar2 = *(undefined2 *)(param_1 + 0x10);
    *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar2 >> 8);
    *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar2;
    sendto(param_1[6],*(void **)(param_1 + 0x5a),4,0x4000,(sockaddr *)(param_1 + 0x32),param_1[0x52]
          );
    *param_1 = 3;
    return 0;
  case 6:
    sVar8 = 1;
    break;
  case 7:
    param_1[7] = param_1[7] + 1;
    FUN_019c9f64(lVar9,"Timeout waiting for block %d ACK.  Retries = %d\n",
                 *(short *)(param_1 + 0x10) + 1);
    if ((int)param_1[9] < (int)param_1[7]) {
      param_1[2] = 0xffffff9d;
      *param_1 = 3;
      return 0;
    }
    sVar4 = sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0x4000,
                   (sockaddr *)(param_1 + 0x32),param_1[0x52]);
    if (sVar4 < 0) goto LAB_019ddc98;
    lVar7 = *(long *)(lVar9 + 0xa0);
    goto LAB_019ddc34;
  default:
    FUN_019ca0fc(lVar9,"tftp_tx: internal error, event: %i",param_2);
    return 0;
  }
  *(short *)(param_1 + 0x10) = sVar8;
  param_1[7] = 0;
  **(undefined1 **)(param_1 + 0x5a) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x5a) + 1) = 3;
  uVar2 = *(undefined2 *)(param_1 + 0x10);
  *(char *)(*(long *)(param_1 + 0x5a) + 2) = (char)((ushort)uVar2 >> 8);
  *(char *)(*(long *)(param_1 + 0x5a) + 3) = (char)uVar2;
  if (*(ushort *)(param_1 + 0x10) < 2) {
    iVar1 = param_1[0x55];
  }
  else {
    iVar1 = param_1[0x55];
    if ((int)param_1[0x54] < iVar1) {
      *param_1 = 3;
      return 0;
    }
  }
  uVar10 = FUN_019d8210(*(undefined8 *)(param_1 + 4),iVar1,param_1 + 0x54);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  sVar4 = sendto(param_1[6],*(void **)(param_1 + 0x5a),(long)(int)param_1[0x54] + 4,0x4000,
                 (sockaddr *)(param_1 + 0x32),param_1[0x52]);
  if (sVar4 < 0) {
LAB_019ddc98:
    uVar10 = *(undefined8 *)(param_1 + 4);
    puVar6 = (undefined4 *)__errno(sVar4);
    uVar10 = FUN_019c1348(uVar10,*puVar6);
    FUN_019ca0fc(lVar9,"%s",uVar10);
    return 0x37;
  }
  lVar7 = *(long *)(lVar9 + 0xa0) + (long)(int)param_1[0x54];
  *(long *)(lVar9 + 0xa0) = lVar7;
LAB_019ddc34:
  FUN_019c45ac(lVar9,lVar7);
  return 0;
}




long FUN_019ddcec(long param_1,long param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_4);
  lVar2 = 0;
  if (param_2 + sVar1 + 1 <= (ulong)(long)*(int *)(param_1 + 0x154)) {
    strcpy(param_3,param_4);
    sVar1 = strlen(param_4);
    lVar2 = sVar1 + 1;
  }
  return lVar2;
}




void FUN_019ddd54(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_019c9f64(**(undefined8 **)(param_1 + 4),&DAT_01e28837,"Connected for transmit");
  *param_1 = 2;
  iVar1 = FUN_019dd164(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_019dda18(param_1,param_2);
  return;
}




void FUN_019dddb8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_019c9f64(**(undefined8 **)(param_1 + 4),&DAT_01e28837,"Connected for receive");
  *param_1 = 1;
  iVar1 = FUN_019dd164(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_019dd770(param_1,param_2);
  return;
}




int FUN_019dde1c(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_48;
  
  lVar3 = 0;
  *param_5 = 0;
  while( true ) {
    do {
      lVar2 = FUN_019bccd8(*param_1,0,1);
      if (lVar2 < 0) {
        return 0x1c;
      }
      iVar1 = FUN_019c14c8(param_2,0xffffffff,0xffffffff,lVar2);
      if (iVar1 < 1) {
        return -1;
      }
      iVar1 = FUN_019ca8e4(param_2,param_3,param_4,&local_48);
    } while (iVar1 == 0x51);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 - local_48 == 0) break;
    if (local_48 == 0) {
      return -1;
    }
    param_3 = param_3 + local_48;
    lVar3 = local_48 + lVar3;
    param_4 = param_4 - local_48;
  }
  *param_5 = param_4 + lVar3;
  return 0;
}




undefined8
FUN_019ddf00(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5,
            ulong param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_1a8 [2];
  undefined1 local_1a6;
  undefined1 local_1a4 [2];
  undefined1 local_1a2 [2];
  long local_1a0 [8];
  long *local_160;
  undefined2 local_158;
  undefined1 local_156;
  undefined1 local_155;
  undefined4 local_154;
  char local_150;
  char local_14f [255];
  
  uVar8 = *param_5;
  uVar2 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 0x1d0);
  lVar4 = FUN_019bccd8(uVar8,0,1);
  if (lVar4 < 0) {
    FUN_019ca0fc(uVar8,"Connection time-out");
    return 0x1c;
  }
  FUN_019c1e24(uVar2,0);
  FUN_019c9f64(uVar8,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_158 = 0x104;
  local_156 = (undefined1)((uint)param_3 >> 8);
  local_155 = (undefined1)param_3;
  if ((param_6 & 1) == 0) {
    iVar3 = FUN_019c38c0(param_5,param_2,param_3,&local_160);
    if (iVar3 == -1) {
      return 5;
    }
    if ((local_160 == (long *)0x0) || (*local_160 == 0)) {
LAB_019de1d0:
      FUN_019ca0fc(uVar8,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
      return 6;
    }
    FUN_019c3598(*local_160,local_1a0,0x40);
    iVar3 = sscanf((char *)local_1a0,"%hu.%hu.%hu.%hu",local_1a8,(ulong)local_1a8 | 2,local_1a4,
                   local_1a2);
    if (iVar3 != 4) {
      FUN_019c9f64(uVar8,"SOCKS4 connect to %s (locally resolved)\n",local_1a0);
      FUN_019c3c58(uVar8,local_160);
      goto LAB_019de1d0;
    }
    local_154 = CONCAT13(local_1a2[0],CONCAT12(local_1a4[0],CONCAT11(local_1a6,local_1a8[0])));
    FUN_019c9f64(uVar8,"SOCKS4 connect to %s (locally resolved)\n",local_1a0);
    FUN_019c3c58(uVar8,local_160);
  }
  local_150 = '\0';
  if (param_1 != (char *)0x0) {
    sVar5 = strlen(param_1);
    if (0xfd < sVar5) {
      pcVar7 = "Too long SOCKS proxy name, can\'t use!\n";
      goto LAB_019de1a0;
    }
    memcpy(&local_150,param_1,sVar5 + 1);
  }
  sVar5 = strlen(&local_150);
  lVar4 = (long)(int)sVar5 + 9;
  if ((param_6 & 1) == 0) {
    lVar9 = 0;
    lVar4 = (long)(int)lVar4;
  }
  else {
    local_154 = 0x1000000;
    sVar6 = strlen(param_2);
    lVar9 = sVar6 + 1;
    if (lVar9 + lVar4 < 0x107) {
      strcpy(local_14f + (int)sVar5,param_2);
    }
    else {
      lVar9 = 0;
    }
  }
  iVar3 = FUN_019ca48c(param_5,uVar2,&local_158,(long *)(lVar9 + lVar4),&local_160);
  if ((iVar3 == 0) && (local_160 == (long *)(lVar9 + lVar4))) {
    if ((lVar9 == 0) && ((param_6 & 1) != 0)) {
      sVar5 = strlen(param_2);
      iVar3 = FUN_019ca48c(param_5,uVar2,param_2,(long *)(sVar5 + 1),&local_160);
      if ((iVar3 != 0) || (local_160 != (long *)(sVar5 + 1))) goto LAB_019de18c;
    }
    iVar3 = FUN_019dde1c(param_5,uVar2,&local_158,8,local_1a0);
    if ((iVar3 == 0) && (local_1a0[0] == 8)) {
      if ((char)local_158 == '\0') {
        switch(local_158._1_1_) {
        case 0x5a:
          puVar1 = &DAT_01e66523;
          if ((param_6 & 1) == 0) {
            puVar1 = &DAT_01e277f2;
          }
          FUN_019c9f64(uVar8,"SOCKS4%s request granted.\n",puVar1);
          FUN_019c1e24(uVar2,1);
          return 0;
        case 0x5b:
          pcVar7 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.";
          break;
        case 0x5c:
          pcVar7 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
          ;
          break;
        case 0x5d:
          pcVar7 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
          ;
          break;
        default:
          pcVar7 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
        }
        FUN_019ca0fc(uVar8,pcVar7,(undefined1)local_154,local_154._1_1_,local_154._2_1_,
                     local_154._3_1_,CONCAT11(local_150,local_14f[0]));
        return 7;
      }
      pcVar7 = "SOCKS4 reply has wrong version, version should be 4.";
    }
    else {
      pcVar7 = "Failed to receive SOCKS4 connect request ack.";
    }
  }
  else {
LAB_019de18c:
    pcVar7 = "Failed to send SOCKS4 connect request.";
  }
LAB_019de1a0:
  FUN_019ca0fc(uVar8,pcVar7);
  return 7;
}

