// functions/00e85 — 22 functions
#include "libGameKindred.h"




int FUN_00e8500c(pthread_mutex_t *param_1,long param_2)

{
  int iVar1;
  
  pthread_mutex_lock(param_1);
  FUN_00e85044(param_1 + 1,param_2);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}




void FUN_00e85044(long *param_1,long param_2)

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




long FUN_00e850a4(pthread_mutex_t *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  pthread_mutex_lock(param_1);
  lVar2 = param_1[1].__align;
  while ((lVar2 != 0 && (iVar1 = FUN_00e84eec(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  pthread_mutex_unlock(param_1);
  return lVar2;
}




void FUN_00e850fc(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00e70314(param_1 + 2);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  memset(param_1 + 0x16,0,0x48);
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  FUN_00e70510(param_1 + 0x36);
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  FUN_00e70314(param_1 + 2);
  FUN_00e85184(param_1);
  return;
}




void FUN_00e85184(long param_1)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x18,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0xa8,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x88,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x70,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  FUN_008fce60(param_1 + 0x108,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x120,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00e852fc(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
    return 1;
  }
  return 0;
}




void FUN_00e85318(double *param_1)

{
  long lVar1;
  
  if (DAT_02bf2520 == -1) {
    DAT_02bf2520 = FUN_00e6b5e4();
    DAT_03210790 = FUN_00e6b744();
  }
  lVar1 = FUN_00e6b744();
  if (param_1 != (double *)0x0) {
    *param_1 = (double)(long)((lVar1 - DAT_03210790 &
                              (lVar1 - DAT_03210790 >> 0x3f ^ 0xffffffffffffffffU)) + DAT_02bf2520);
  }
  return;
}




void FUN_00e85380(undefined8 param_1)

{
  DAT_02bf2520 = param_1;
  DAT_03210790 = FUN_00e6b744();
  return;
}




undefined8 * FUN_00e853a4(void)

{
  int iVar1;
  
  if (((DAT_032107a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_032107a0), iVar1 != 0)) {
    DAT_03210798 = operator_new(8);
    *DAT_03210798 = &PTR_FUN_028213a8;
    __cxa_guard_release(&DAT_032107a0);
  }
  return DAT_03210798;
}




void FUN_00e8540c(undefined8 param_1,undefined8 param_2)

{
  FUN_00e85418(param_1,1,param_2);
  return;
}




undefined8 * FUN_00e85418(byte *param_1,byte param_2,byte *param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  void *pvVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  addrinfo *paVar12;
  char *__dest;
  ulong uVar13;
  ulong local_2a8;
  size_t local_2a0;
  char *local_298;
  uint local_28c;
  addrinfo *local_288;
  addrinfo local_280 [5];
  undefined1 local_180 [128];
  char acStack_100 [128];
  char acStack_80 [16];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (((*param_1 & 1) == 0) || (*(ulong *)(param_1 + 8) < 0x80)) {
    if (((*param_3 & 1) != 0) && (199 < *(ulong *)(param_3 + 8))) {
      pcVar7 = "ERROR: origin size limit exceeded: %s\n";
      pbVar9 = *(byte **)(param_3 + 0x10);
      goto LAB_00e854a4;
    }
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar9 = param_1 + 1;
    iVar4 = sscanf((char *)pbVar10,"ws://%[^:/]:%d/%s",acStack_100,&local_28c,local_180);
    if (iVar4 != 3) {
      pbVar10 = pbVar9;
      if ((*param_1 & 1) != 0) {
        pbVar10 = *(byte **)(param_1 + 0x10);
      }
      iVar4 = sscanf((char *)pbVar10,"ws://%[^:/]/%s",acStack_100,local_180);
      if (iVar4 == 2) {
        local_28c = 0x50;
      }
      else {
        pbVar10 = pbVar9;
        if ((*param_1 & 1) != 0) {
          pbVar10 = *(byte **)(param_1 + 0x10);
        }
        iVar4 = sscanf((char *)pbVar10,"ws://%[^:/]:%d",acStack_100,&local_28c);
        if (iVar4 != 2) {
          pbVar10 = pbVar9;
          if ((*param_1 & 1) != 0) {
            pbVar10 = *(byte **)(param_1 + 0x10);
          }
          iVar4 = sscanf((char *)pbVar10,"ws://%[^:/]",acStack_100);
          if (iVar4 != 1) {
            pcVar7 = "ERROR: Could not parse WebSocket url: %s\n";
            if ((*param_1 & 1) != 0) {
              pbVar9 = *(byte **)(param_1 + 0x10);
            }
            goto LAB_00e854a4;
          }
          local_28c = 0x50;
        }
        local_180[0] = 0;
      }
    }
    fprintf((FILE *)glClearDepthf,"easywsclient: connecting: host=%s port=%d path=/%s\n",acStack_100
            ,(ulong)local_28c,local_180);
    local_2a8 = 0;
    local_2a0 = 0;
    local_298 = (char *)0x0;
    sVar6 = strlen(acStack_100);
    if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar6 < 0x17) {
      __dest = (char *)((ulong)&local_2a8 | 1);
      local_2a8 = CONCAT71(local_2a8._1_7_,(char)((int)sVar6 << 1));
      pcVar7 = __dest;
      if (sVar6 != 0) goto LAB_00e85604;
    }
    else {
      uVar13 = sVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar13);
      local_2a8 = uVar13 | 1;
      pcVar7 = (char *)((ulong)&local_2a8 | 1);
      local_2a0 = sVar6;
      local_298 = __dest;
LAB_00e85604:
      memcpy(__dest,acStack_100,sVar6);
    }
    __dest[sVar6] = '\0';
    local_280[0].ai_flags = 0;
    local_280[0].ai_family = 0;
    local_280[0].ai_addr = (sockaddr *)0x0;
    local_280[0].ai_addrlen = 0;
    local_280[0]._20_4_ = 0;
    local_280[0].ai_next = (addrinfo *)0x0;
    local_280[0].ai_canonname = (char *)0x0;
    local_280[0].ai_socktype = 1;
    local_280[0].ai_protocol = 0;
    snprintf(acStack_80,0x10,"%d",(ulong)local_28c);
    if ((local_2a8 & 1) != 0) {
      pcVar7 = local_298;
    }
    iVar4 = getaddrinfo(pcVar7,acStack_80,local_280,&local_288);
    if (iVar4 == 0) {
      paVar12 = local_288;
      if (local_288 == (addrinfo *)0x0) {
        local_288 = (addrinfo *)0x0;
        iVar4 = -1;
      }
      else {
        do {
          iVar4 = socket(paVar12->ai_family,paVar12->ai_socktype,paVar12->ai_protocol);
          if (iVar4 != -1) {
            iVar5 = connect(iVar4,(sockaddr *)paVar12->ai_canonname,paVar12->ai_addrlen);
            if (iVar5 != -1) goto LAB_00e856e4;
            close(iVar4);
          }
          paVar12 = paVar12->ai_next;
        } while (paVar12 != (addrinfo *)0x0);
        iVar4 = -1;
      }
LAB_00e856e4:
      freeaddrinfo(local_288);
    }
    else {
      pcVar7 = gai_strerror(iVar4);
      fprintf((FILE *)glClearDepthf,"getaddrinfo: %s\n",pcVar7);
      iVar4 = 1;
    }
    if ((local_2a8 & 1) != 0) {
      operator_delete(local_298);
    }
    if (iVar4 != -1) {
      snprintf((char *)local_280,0x100,"GET /%s HTTP/1.1\r\n",local_180);
      sVar6 = strlen((char *)local_280);
      send(iVar4,local_280,sVar6,0);
      if (local_28c == 0x50) {
        snprintf((char *)local_280,0x100,"Host: %s\r\n",acStack_100);
      }
      else {
        snprintf((char *)local_280,0x100,"Host: %s:%d\r\n",acStack_100);
      }
      sVar6 = strlen((char *)local_280);
      send(iVar4,local_280,sVar6,0);
      snprintf((char *)local_280,0x100,"Upgrade: websocket\r\n");
      sVar6 = strlen((char *)local_280);
      send(iVar4,local_280,sVar6,0);
      snprintf((char *)local_280,0x100,"Connection: Upgrade\r\n");
      sVar6 = strlen((char *)local_280);
      send(iVar4,local_280,sVar6,0);
      bVar2 = (*param_3 & 1) != 0;
      uVar13 = (ulong)(*param_3 >> 1);
      if (bVar2) {
        uVar13 = *(ulong *)(param_3 + 8);
      }
      if (uVar13 != 0) {
        pbVar10 = *(byte **)(param_3 + 0x10);
        if (!bVar2) {
          pbVar10 = param_3 + 1;
        }
        snprintf((char *)local_280,0x100,"Origin: %s\r\n",pbVar10);
        sVar6 = strlen((char *)local_280);
        send(iVar4,local_280,sVar6,0);
      }
      snprintf((char *)local_280,0x100,"Sec-WebSocket-Key: x3JJHMbDL1EzLkh9GBhXDw==\r\n");
      sVar6 = strlen((char *)local_280);
      send(iVar4,local_280,sVar6,0);
      snprintf((char *)local_280,0x100,"Sec-WebSocket-Version: 13\r\n");
      sVar6 = strlen((char *)local_280);
      send(iVar4,local_280,sVar6,0);
      snprintf((char *)local_280,0x100,"\r\n");
      sVar6 = strlen((char *)local_280);
      send(iVar4,local_280,sVar6,0);
      local_280[0].ai_flags = 1;
      setsockopt(iVar4,6,1,local_280,4);
      fcntl(iVar4,4,0x800);
      if ((*param_1 & 1) != 0) {
        pbVar9 = *(byte **)(param_1 + 0x10);
      }
      fprintf((FILE *)glClearDepthf,"Connected to: %s\n",pbVar9);
      puVar11 = operator_new(0x60);
      *puVar11 = &PTR_FUN_02821410;
      pvVar8 = memset(puVar11 + 1,0,0x48);
      *(int *)(puVar11 + 10) = iVar4;
      *(undefined4 *)((long)puVar11 + 0x54) = 2;
      *(byte *)(puVar11 + 0xb) = param_2 & 1;
      goto LAB_00e85978;
    }
    uVar3 = fprintf((FILE *)glClearDepthf,"Unable to connect to %s:%d\n",acStack_100,
                    (ulong)local_28c);
  }
  else {
    pcVar7 = "ERROR: url size limit exceeded: %s\n";
    pbVar9 = *(byte **)(param_1 + 0x10);
LAB_00e854a4:
    uVar3 = fprintf((FILE *)glClearDepthf,pcVar7,pbVar9);
  }
  pvVar8 = (void *)(ulong)uVar3;
  puVar11 = (undefined8 *)0x0;
LAB_00e85978:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar8);
  }
  return puVar11;
}




void FUN_00e859d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00e85418(param_1,0,param_2);
  return;
}




void FUN_00e859e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821490;
  FUN_00ebf108(param_1 + 2);
  *param_1 = &PTR_FUN_02820e10;
  param_1[2] = &PTR_FUN_02821368;
  FUN_00e850fc(param_1 + 0x546);
  param_1[0x545] = &PTR_FUN_028219e8;
  memset(param_1 + 0x570,0,0x61);
  param_1[0x582] = 0;
  param_1[0x581] = 0;
  param_1[0x580] = 0;
  param_1[0x57e] = 0;
  param_1[0x57d] = 0;
  *(undefined1 *)(param_1 + 0x583) = 0;
  param_1[0x57f] = 0;
  FUN_00e77acc((long)param_1 + 0x2c1c,0);
  FUN_00e84ef4(param_1 + 0x589);
  FUN_00e70314(param_1 + 0x592);
  *(undefined2 *)(param_1 + 0x594) = 0;
  return;
}




void FUN_00e85ab4(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  *(byte *)(param_1 + 0x2be0) = param_4 & 1;
  FUN_00ebf200(param_1 + 0x10);
  if (*(char *)(param_1 + 0x2ca1) != '\0') {
    return;
  }
  *(char *)(param_1 + 0x2ca1) = '\x01';
  FUN_00ebf46c(param_1 + 0x10);
  return;
}




undefined1 FUN_00e85b10(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2ca1);
}




void FUN_00e85b1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_02820e10;
  puVar1 = param_1 + 2;
  *puVar1 = &PTR_FUN_02821368;
  FUN_00ebf3ac(puVar1);
  FUN_00ebf39c(puVar1);
  FUN_00e84f24(param_1 + 0x589);
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x2c1c));
  if ((*(byte *)(param_1 + 0x580) & 1) != 0) {
    operator_delete((void *)param_1[0x582]);
  }
  if ((*(byte *)(param_1 + 0x57d) & 1) != 0) {
    operator_delete((void *)param_1[0x57f]);
  }
  if ((*(byte *)(param_1 + 0x579) & 1) != 0) {
    operator_delete((void *)param_1[0x57b]);
  }
  if ((*(byte *)(param_1 + 0x576) & 1) != 0) {
    operator_delete((void *)param_1[0x578]);
  }
  if ((*(byte *)(param_1 + 0x573) & 1) != 0) {
    operator_delete((void *)param_1[0x575]);
  }
  if ((*(byte *)(param_1 + 0x570) & 1) != 0) {
    operator_delete((void *)param_1[0x572]);
  }
  FUN_00e9a1f4(param_1 + 0x546);
  FUN_00ebf284(puVar1);
  return;
}




void FUN_00e85c04(long param_1)

{
  FUN_00e85b1c(param_1 + -0x10);
  return;
}




void FUN_00e85c0c(void *param_1)

{
  FUN_00e85b1c();
  operator_delete(param_1);
  return;
}




void FUN_00e85c30(long param_1)

{
  FUN_00e85b1c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




undefined4
FUN_00e85c58(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_50;
  byte local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c[0] = param_4 & 1;
  local_50 = FUN_00e84f88(param_1 + 0x2c48,param_5);
  FUN_008fa54c(local_68,"createAccountForPlayer");
  FUN_00e85d50(local_80,param_1 + 0x2b80,param_2,param_3,local_4c);
  uVar2 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x38,local_68,local_80,0,&local_50,0x5a,0);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e85d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (void *)0x0;
  local_d0 = (void *)0x0;
  local_e0 = 0;
  local_b8 = 0x400;
  local_b0 = 0;
  local_a8 = 0;
  local_f0 = operator_new(0x28);
  local_f0[3] = 0;
  local_f0[4] = 0;
  local_f0[1] = 0x10000;
  local_f0[2] = 0;
  *local_f0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 4;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  local_e8 = local_f0;
  uVar3 = FUN_00e9a314(&local_108,param_2);
  uVar3 = FUN_00e9a314(uVar3,param_3);
  lVar4 = FUN_00e9a314(uVar3,param_4);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0x101;
  if (*param_5 != '\0') {
    local_60 = 0x102;
  }
  FUN_00ceeba8(lVar4 + 0x68,&local_70,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_00e9a398(lVar4);
  FUN_008fcdb8(param_1,uVar3);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  puVar2 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_e8);
    operator_delete(puVar2);
  }
  free(local_d0);
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00e85ea8(long param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1ac;
  byte *local_1a8;
  undefined8 uStack_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180 [16];
  void *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_160 = param_4;
  FUN_008fce60(param_1 + 0x2b80,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x2b98,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x2bb0,param_2);
  local_168 = FUN_00e702d0(&DAT_0320ffc0);
  FUN_008fce60(param_1 + 0x50,&DAT_0320ffa8);
  FUN_00e6a8a8(auStack_158,&DAT_01bb6d43,DAT_02bf24e0);
  FUN_008fa54c(local_180,"createGuestPlayer");
  uStack_1a0 = FUN_00e7027c(&DAT_0320ffc0);
  local_1a8 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    local_1a8 = param_3 + 1;
  }
  local_1ac = FUN_00e70218(&DAT_0320ffc0);
  local_1b8 = FUN_00e70228(&DAT_0320ffc0);
  local_1c0 = FUN_00e70260(&DAT_0320ffc0);
  local_1c8 = thunk_FUN_00e7753c(&DAT_0320ffc0);
  FUN_00e86084(local_198,param_2,"en",&local_168,"production",&local_160,&uStack_1a0,&local_1a8,
               &DAT_01e277f2,auStack_158,&local_1ac,&local_1b8,&local_1c0,&local_1c8);
  uVar2 = FUN_00ebf928(param_1 + 0x10,param_1 + 0x38,local_180,local_198,0,0,0x14,1);
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

