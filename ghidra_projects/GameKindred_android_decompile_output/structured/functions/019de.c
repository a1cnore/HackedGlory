// functions/019de — 2 functions
#include "libGameKindred.h"




undefined8
FUN_019de30c(char *param_1,char *param_2,char *param_3,undefined4 param_4,int param_5,
            undefined8 *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t __n;
  long lVar5;
  size_t __n_00;
  size_t __n_01;
  char *pcVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  long lVar11;
  undefined8 uVar12;
  long *local_2d8;
  long local_2d0;
  long local_2c8;
  char local_2c0 [2];
  undefined2 local_2be;
  byte local_2bc [604];
  
  iVar4 = *(int *)(param_6 + 0x34);
  uVar1 = *(undefined4 *)((long)param_6 + (long)param_5 * 4 + 0x1d0);
  uVar12 = *param_6;
  bVar2 = iVar4 == 5;
  __n = strlen(param_3);
  if ((0xff < __n) && (iVar4 != 5)) {
    FUN_019c9f64(uVar12,
                 "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                 ,__n);
    bVar2 = true;
  }
  lVar5 = FUN_019bccd8(uVar12,0,1);
  if (lVar5 < 0) {
    pcVar6 = "Connection time-out";
LAB_019de3fc:
    FUN_019ca0fc(uVar12,pcVar6);
    return 0x1c;
  }
  FUN_019c1e24(uVar1,1);
  uVar3 = FUN_019c14c8(0xffffffff,0xffffffff,uVar1,lVar5);
  if (uVar3 == 0) {
    uVar12 = *param_6;
    pcVar6 = "SOCKS5: connection timeout";
    goto LAB_019de3fc;
  }
  if (uVar3 == 0xffffffff) {
    uVar12 = *param_6;
    pcVar6 = "SOCKS5: no connection here";
    goto LAB_019de4c4;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uVar12 = *param_6;
    pcVar6 = "SOCKS5: error occurred during connection";
    goto LAB_019de4c4;
  }
  cVar10 = '\x01';
  if (param_1 != (char *)0x0) {
    cVar10 = '\x02';
  }
  local_2c0[1] = cVar10;
  local_2c0[0] = 5;
  local_2be = 0x200;
  FUN_019c1e24(uVar1,0);
  iVar4 = FUN_019ca48c(param_6,uVar1,local_2c0,cVar10 + '\x02',&local_2d0);
  if ((iVar4 != 0) || (local_2d0 != (ulong)(byte)local_2c0[1] + 2)) {
    pcVar6 = "Unable to send initial SOCKS5 request.";
    goto LAB_019de4c4;
  }
  FUN_019c1e24(uVar1,1);
  uVar3 = FUN_019c14c8(uVar1,0xffffffff,0xffffffff,lVar5);
  if (uVar3 == 0) {
    uVar12 = *param_6;
    pcVar6 = "SOCKS5 read timeout";
    goto LAB_019de3fc;
  }
  if (uVar3 == 0xffffffff) {
    uVar12 = *param_6;
    pcVar6 = "SOCKS5 nothing to read";
    goto LAB_019de4c4;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    FUN_019ca0fc(*param_6,"SOCKS5 read error occurred");
    return 0x38;
  }
  FUN_019c1e24(uVar1,0);
  iVar4 = FUN_019dde1c(param_6,uVar1,local_2c0,2,&local_2c8);
  if ((iVar4 != 0) || (local_2c8 != 2)) {
    pcVar6 = "Unable to receive initial SOCKS5 response.";
    goto LAB_019de4c4;
  }
  if (local_2c0[0] != '\x05') {
    pcVar6 = "Received invalid version in initial SOCKS5 response.";
    goto LAB_019de4c4;
  }
  if ((byte)local_2c0[1] < 2) {
    if (local_2c0[1] != 0) {
      if (local_2c0[1] == 1) {
        pcVar6 = "SOCKS5 GSSAPI per-message authentication is not supported.";
        goto LAB_019de4c4;
      }
LAB_019de60c:
      pcVar6 = "Undocumented SOCKS5 mode attempted to be used by server.";
      goto LAB_019de4c4;
    }
  }
  else {
    if (local_2c0[1] == 0xff) {
      if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
        pcVar6 = 
        "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
        ;
      }
      else {
        pcVar6 = "No authentication method was acceptable.";
      }
      goto LAB_019de4c4;
    }
    if (local_2c0[1] != 2) goto LAB_019de60c;
    if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
      __n_01 = 0;
      __n_00 = 0;
      local_2c0[0] = '\x01';
      local_2c0[1] = '\0';
    }
    else {
      __n_00 = strlen(param_1);
      __n_01 = strlen(param_2);
      local_2c0[1] = (char)__n_00;
      local_2c0[0] = 1;
      if (__n_00 == 0) {
        __n_00 = 0;
      }
      else {
        memcpy((void *)((ulong)local_2c0 | 2),param_1,__n_00);
      }
    }
    local_2bc[__n_00 - 2] = (byte)__n_01;
    if ((param_2 != (char *)0x0) && (__n_01 != 0)) {
      memcpy(local_2bc + (__n_00 - 1),param_2,__n_01);
    }
    lVar5 = __n_00 + 3 + __n_01;
    iVar4 = FUN_019ca48c(param_6,uVar1,local_2c0,lVar5,&local_2d0);
    if ((iVar4 != 0) || (lVar5 != local_2d0)) {
      pcVar6 = "Failed to send SOCKS5 sub-negotiation request.";
      goto LAB_019de4c4;
    }
    iVar4 = FUN_019dde1c(param_6,uVar1,local_2c0,2,&local_2c8);
    if ((iVar4 != 0) || (local_2c8 != 2)) {
      pcVar6 = "Unable to receive SOCKS5 sub-negotiation response.";
      goto LAB_019de4c4;
    }
    if (local_2c0[1] != '\0') {
      FUN_019ca0fc(uVar12,"User was rejected by the SOCKS5 server (%d %d).",local_2c0[0]);
      return 7;
    }
  }
  local_2c0[0] = '\x05';
  local_2c0[1] = '\x01';
  local_2be = local_2be & 0xff00;
  if (bVar2) {
    iVar4 = FUN_019c38c0(param_6,param_3,param_4,&local_2d8);
    if (iVar4 == -1) {
      return 6;
    }
    if (iVar4 == 1) {
      return 6;
    }
    if ((local_2d8 == (long *)0x0) || (lVar5 = *local_2d8, lVar5 == 0)) {
LAB_019de90c:
      FUN_019ca0fc(uVar12,"Failed to resolve \"%s\" for SOCKS5 connect.",param_3);
      return 6;
    }
    if (*(int *)(lVar5 + 4) == 2) {
      local_2be = CONCAT11(1,(undefined1)local_2be);
      lVar8 = *(long *)(lVar5 + 0x20);
      lVar5 = 0;
      do {
        local_2bc[lVar5] = *(byte *)(lVar8 + 4 + lVar5);
        FUN_019c9f64(uVar12,"%d\n");
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
      lVar5 = 8;
    }
    else {
      if (*(int *)(lVar5 + 4) != 10) {
        FUN_019c3c58(uVar12);
        goto LAB_019de90c;
      }
      local_2be = CONCAT11(4,(undefined1)local_2be);
      lVar11 = *(long *)(lVar5 + 0x20);
      lVar8 = 0;
      lVar5 = 0x14;
      do {
        local_2bc[lVar8] = *(byte *)(lVar11 + 8 + lVar8);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x10);
    }
    FUN_019c3c58(uVar12,local_2d8);
  }
  else {
    local_2be = 0x300;
    local_2bc[0] = (byte)__n;
    memcpy(local_2bc + 1,param_3,__n);
    lVar5 = __n + 5;
  }
  local_2c0[lVar5] = (char)((uint)param_4 >> 8);
  local_2c0[lVar5 + 1] = (char)param_4;
  iVar4 = FUN_019ca48c(param_6,uVar1,local_2c0,lVar5 + 2,&local_2d0);
  if ((iVar4 == 0) && (lVar5 + 2 == local_2d0)) {
    iVar4 = FUN_019dde1c(param_6,uVar1,local_2c0,10,&local_2c8);
    if ((iVar4 == 0) && (local_2c8 == 10)) {
      if (local_2c0[0] != '\x05') {
        pcVar6 = "SOCKS5 reply has wrong version, version should be 5.";
        goto LAB_019de4c4;
      }
      if (local_2c0[1] != '\0') {
        if (local_2be._1_1_ == '\x04') {
          uVar7 = (ushort)local_2bc[4];
          pcVar6 = 
          "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
          ;
        }
        else {
          if (local_2be._1_1_ == '\x03') {
            FUN_019ca0fc(uVar12,"Can\'t complete SOCKS5 connection to %s:%d. (%d)",param_3,
                         CONCAT11(local_2bc[4],local_2bc[5]),local_2c0[1]);
            return 7;
          }
          if (local_2be._1_1_ != '\x01') {
            return 7;
          }
          uVar7 = CONCAT11(local_2bc[4],local_2bc[5]);
          pcVar6 = "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)";
          local_2bc[5] = local_2c0[1];
        }
        FUN_019ca0fc(uVar12,pcVar6,local_2bc[0],local_2bc[1],local_2bc[2],local_2bc[3],uVar7,
                     local_2bc[5]);
        return 7;
      }
      if (local_2be._1_1_ == '\x04') {
        uVar9 = 0x16;
      }
      else if ((local_2be._1_1_ != '\x03') || (uVar9 = (ulong)local_2bc[0] + 7, uVar9 < 0xb))
      goto LAB_019dea10;
      iVar4 = FUN_019dde1c(param_6,uVar1,local_2bc + 6,uVar9 - 10,&local_2c8);
      if ((iVar4 == 0) && (uVar9 - 10 == local_2c8)) {
LAB_019dea10:
        FUN_019c1e24(uVar1,1);
        return 0;
      }
    }
    pcVar6 = "Failed to receive SOCKS5 connect request ack.";
  }
  else {
    pcVar6 = "Failed to send SOCKS5 connect request.";
  }
LAB_019de4c4:
  FUN_019ca0fc(uVar12,pcVar6);
  return 7;
}




undefined4 FUN_019dec50(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char local_24 [4];
  
  uVar1 = FUN_019dedf0(param_1,local_24);
  *(bool *)param_2 = *(int *)(param_1 + 0x56c) == 0;
  if ((local_24[0] == '\0') ||
     (uVar2 = libssh2_session_block_directions(*(undefined8 *)(param_1 + 0x650)), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 0x670);
  }
  else {
    uVar2 = uVar2 & 3;
  }
  *(uint *)(param_1 + 0x69c) = uVar2;
  return uVar1;
}

