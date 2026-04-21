// functions/00e98 — 25 functions
#include "libGameKindred.h"




void FUN_00e9813c(long param_1)

{
  FUN_00e973f8(param_1 + -0x10);
  return;
}




void FUN_00e98144(long param_1,int param_2)

{
  long lVar1;
  
  if (DAT_02bf251c != param_2) {
    lVar1 = FUN_00e850a4(param_1 + 0x2c48);
    if (lVar1 != 0) {
      FUN_00e8500c(param_1 + 0x2c48,lVar1);
      FUN_00e84e8c(lVar1);
      return;
    }
  }
  return;
}




void FUN_00e981a4(long param_1)

{
  FUN_00e98144(param_1 + -0x10);
  return;
}




void FUN_00e981ac(long param_1,int param_2)

{
  long lVar1;
  
  if (DAT_02bf251c != param_2) {
    lVar1 = FUN_00e850a4(param_1 + 0x2c48);
    if (lVar1 != 0) {
      FUN_00e8500c(param_1 + 0x2c48,lVar1);
      FUN_00e84e9c(lVar1);
      return;
    }
  }
  return;
}




void FUN_00e9820c(long param_1)

{
  FUN_00e981ac(param_1 + -0x10);
  return;
}




void FUN_00e98214(void)

{
  return;
}




void FUN_00e9821c(void)

{
  return;
}




void FUN_00e98220(void)

{
  return;
}




void FUN_00e98224(void)

{
  return;
}




void FUN_00e98228(void)

{
  return;
}




void FUN_00e9822c(void)

{
  return;
}




void FUN_00e98230(void)

{
  return;
}




undefined8 FUN_00e98234(void)

{
  return 1;
}




void FUN_00e9823c(void)

{
  return;
}




void FUN_00e98240(void)

{
  return;
}




void FUN_00e98244(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[7];
  *param_1 = &PTR_FUN_02821410;
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}




void FUN_00e982a8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[7];
  *param_1 = &PTR_FUN_02821410;
  if (pvVar1 != (void *)0x0) {
    param_1[8] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    param_1[5] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}




void FUN_00e98308(long *param_1,uint param_2)

{
  void *pvVar1;
  char cVar2;
  long lVar3;
  timeval *__timeout;
  uint uVar4;
  int iVar5;
  ssize_t sVar6;
  long *plVar7;
  void *pvVar8;
  size_t sVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  char *pcVar17;
  void *pvVar18;
  long *plVar19;
  int iVar20;
  timeval local_200;
  fd_set local_1f0 [2];
  fd_set local_f0;
  long local_70;
  
  __timeout = &local_200;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(int *)((long)param_1 + 0x54) == 1) {
    plVar7 = param_1;
    if (0 < (int)param_2) {
      local_1f0[0].fds_bits[0] = (ulong)param_2 / 1000;
      local_1f0[0].fds_bits[1] = (__fd_mask)((param_2 % 1000) * 1000);
      uVar4 = select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,(timeval *)local_1f0);
      plVar7 = (long *)(ulong)uVar4;
    }
  }
  else {
    if (param_2 != 0) {
      local_200.tv_sec = (__time_t)((int)param_2 / 1000);
      local_200.tv_usec = (__suseconds_t)(((int)param_2 % 1000) * 1000);
      memset(local_1f0,0,0x80);
      memset(&local_f0,0,0x80);
      plVar19 = param_1 + 10;
      __FD_SET_chk((int)*plVar19,local_1f0,0x80);
      if (param_1[5] != param_1[4]) {
        __FD_SET_chk((int)*plVar19,&local_f0,0x80);
      }
      if ((int)param_2 < 1) {
        __timeout = (timeval *)0x0;
      }
      select((int)*plVar19 + 1,local_1f0,&local_f0,(fd_set *)0x0,__timeout);
    }
    plVar19 = param_1 + 1;
    pcVar17 = "Connection closed!\n";
    while( true ) {
      lVar11 = param_1[1];
      uVar14 = param_1[2] - lVar11;
      uVar12 = (long)((uVar14 << 0x20) + 0x5dc00000000) >> 0x20;
      if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
        if (uVar12 < uVar14) {
          param_1[2] = lVar11 + uVar12;
        }
      }
      else {
        FUN_00e99090(plVar19,uVar12 - uVar14);
        lVar11 = *plVar19;
      }
      uVar12 = (ulong)(int)uVar14;
      sVar6 = recv((int)param_1[10],(void *)(lVar11 + uVar12),0x5dc,0);
      if (sVar6 < 0) {
        plVar7 = (long *)__errno();
        if ((int)*plVar7 == 0xb) {
          uVar14 = param_1[2] - param_1[1];
          if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
            if (uVar12 < uVar14) {
              param_1[2] = param_1[1] + uVar12;
            }
          }
          else {
            plVar7 = (long *)FUN_00e99090(plVar19,uVar12 - uVar14);
          }
          goto LAB_00e98558;
        }
        pcVar17 = "Connection error!\n";
        break;
      }
      if (sVar6 == 0) break;
      uVar12 = sVar6 + uVar12;
      uVar14 = param_1[2] - param_1[1];
      if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
        if (uVar12 < uVar14) {
          param_1[2] = param_1[1] + uVar12;
        }
      }
      else {
        FUN_00e99090(plVar19,uVar12 - uVar14);
      }
    }
    uVar14 = param_1[2] - param_1[1];
    if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
      if (uVar12 < uVar14) {
        param_1[2] = param_1[1] + uVar12;
      }
    }
    else {
      FUN_00e99090(plVar19,uVar12 - uVar14);
    }
    close((int)param_1[10]);
    *(int *)((long)param_1 + 0x54) = 1;
    uVar4 = fputs(pcVar17,(FILE *)glClearDepthf);
    plVar7 = (long *)(ulong)uVar4;
LAB_00e98558:
    pvVar18 = (void *)param_1[4];
    sVar9 = param_1[5] - (long)pvVar18;
    if (sVar9 != 0) {
      pcVar17 = "Connection closed!\n";
      do {
        plVar7 = (long *)send((int)param_1[10],pvVar18,sVar9,0);
        if ((int)plVar7 < 0) {
          plVar7 = (long *)__errno();
          if ((int)*plVar7 != 0xb) {
            pcVar17 = "Connection error!\n";
LAB_00e985f0:
            close((int)param_1[10]);
            *(int *)((long)param_1 + 0x54) = 1;
            uVar4 = fputs(pcVar17,(FILE *)glClearDepthf);
            plVar7 = (long *)(ulong)uVar4;
          }
          break;
        }
        if ((int)plVar7 == 0) goto LAB_00e985f0;
        pvVar18 = (void *)param_1[4];
        if ((long)plVar7 << 0x20 == 0) {
          lVar11 = param_1[5];
        }
        else {
          pvVar1 = (void *)((long)pvVar18 + (((long)plVar7 << 0x20) >> 0x20));
          sVar9 = param_1[5] - (long)pvVar1;
          pvVar8 = pvVar18;
          if (sVar9 != 0) {
            plVar7 = memmove(pvVar18,pvVar1,sVar9);
            pvVar8 = (void *)param_1[4];
          }
          lVar11 = (long)pvVar18 + sVar9;
          param_1[5] = lVar11;
          pvVar18 = pvVar8;
        }
        sVar9 = lVar11 - (long)pvVar18;
      } while (sVar9 != 0);
    }
    if ((param_1[5] == param_1[4]) && (*(int *)((long)param_1 + 0x54) == 0)) {
      uVar4 = close((int)param_1[10]);
      plVar7 = (long *)(ulong)uVar4;
      *(int *)((long)param_1 + 0x54) = 1;
    }
    lVar11 = param_1[1];
    if (((1 < (ulong)(param_1[2] - lVar11)) && (*(int *)((long)param_1 + 0x54) == 2)) &&
       (local_f0.fds_bits[0]._0_4_ = 0, param_1[2] != lVar11)) {
      lVar13 = 0;
      bVar10 = false;
      iVar20 = 0;
      iVar16 = 0;
      do {
        lVar15 = (long)iVar20 - (long)iVar16;
        iVar5 = (int)lVar15;
        if (0xff < iVar5) {
          fwrite("ERROR: Buffer too long",0x16,1,(FILE *)glClearDepthf);
          plVar7 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
          break;
        }
        cVar2 = *(char *)(lVar11 + lVar13);
        *(char *)((long)local_1f0 + lVar15) = cVar2;
        if (((iVar5 < 1) || (cVar2 != '\n')) || (*(char *)((long)local_1f0 + lVar15 + -1) != '\r'))
        {
          iVar20 = iVar20 + 1;
        }
        else {
          *(undefined1 *)((long)local_1f0 + lVar15 + 1) = 0;
          if (bVar10) {
            if (iVar5 == 1) {
              uVar4 = fprintf((FILE *)glClearDepthf,"Opening WebSocket connection: %s",local_1f0);
              plVar7 = (long *)(ulong)uVar4;
              lVar11 = (long)iVar20 + 1;
              *(int *)((long)param_1 + 0x54) = 3;
              if ((int)lVar11 != 0) {
                pvVar1 = (void *)param_1[1];
                pvVar18 = (void *)((long)pvVar1 + lVar11);
                sVar9 = param_1[2] - (long)pvVar18;
                if (sVar9 != 0) {
                  plVar7 = memmove(pvVar1,pvVar18,sVar9);
                }
                param_1[2] = (long)pvVar1 + sVar9;
              }
              break;
            }
            uVar4 = fprintf((FILE *)glClearDepthf,"Read header: %s",local_1f0);
            plVar7 = (long *)(ulong)uVar4;
            iVar20 = iVar20 + 1;
            bVar10 = true;
            iVar16 = iVar20;
          }
          else {
            iVar5 = sscanf((char *)local_1f0,"HTTP/1.1 %d",&local_f0);
            if ((iVar5 != 1) || ((int)local_f0.fds_bits[0] != 0x65)) {
              uVar4 = fprintf((FILE *)glClearDepthf,"ERROR: Got bad status: %s",local_1f0);
              plVar7 = (long *)(ulong)uVar4;
              *(int *)((long)param_1 + 0x54) = 0;
              break;
            }
            uVar4 = fprintf((FILE *)glClearDepthf,"WebSocket successful HTTP status: %s",local_1f0);
            plVar7 = (long *)(ulong)uVar4;
            bVar10 = true;
          }
        }
        lVar13 = (long)iVar20;
      } while ((ulong)(long)iVar20 < (ulong)(param_1[2] - param_1[1]));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar7);
  }
  return;
}




void FUN_00e98828(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_00e991a0(param_1,1,uVar1,pbVar2,pbVar2 + uVar1);
  return;
}




void FUN_00e9884c(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_00e991a0(param_1,2,uVar1,pbVar2,pbVar2 + uVar1);
  return;
}




void FUN_00e98870(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (1 < *(uint *)(param_1 + 0x54)) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    local_58 = (undefined1 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined1 *)0x0;
    uVar10 = lVar4 - lVar3;
    lVar9 = 6;
    lVar1 = 4;
    if (uVar10 < 0x7e) {
      lVar1 = 2;
    }
    if (uVar10 >> 0x10 == 0) {
      lVar9 = 0;
    }
    lVar2 = 0;
    if (*(char *)(param_1 + 0x58) != '\0') {
      lVar2 = 4;
    }
    local_64[0] = 0;
    FUN_00e99430(&local_60,lVar1 + lVar9 + lVar2,local_64);
    *local_60 = 0x82;
    bVar7 = (byte)uVar10;
    if (uVar10 < 0x7e) {
      bVar8 = 0;
      if (*(char *)(param_1 + 0x58) != '\0') {
        bVar8 = 0x80;
      }
      local_60[1] = bVar8 | bVar7;
      if (*(char *)(param_1 + 0x58) != '\0') {
        local_60[2] = 0x12;
        local_60[3] = 0x34;
        local_60[4] = 0x56;
        local_60[5] = 0x78;
      }
    }
    else {
      bVar8 = 0;
      if (*(char *)(param_1 + 0x58) != '\0') {
        bVar8 = 0x80;
      }
      uVar5 = (undefined1)(uVar10 >> 8);
      if (uVar10 >> 0x10 == 0) {
        local_60[1] = bVar8 | 0x7e;
        local_60[2] = uVar5;
        local_60[3] = bVar7;
        if (*(char *)(param_1 + 0x58) != '\0') {
          local_60[4] = 0x12;
          local_60[5] = 0x34;
          local_60[6] = 0x56;
          local_60[7] = 0x78;
        }
      }
      else {
        local_60[1] = bVar8 | 0x7f;
        local_60[2] = (char)(uVar10 >> 0x38);
        local_60[3] = (char)(uVar10 >> 0x30);
        local_60[4] = (char)(uVar10 >> 0x28);
        local_60[5] = (char)(uVar10 >> 0x20);
        local_60[6] = (char)(uVar10 >> 0x18);
        local_60[7] = (char)(uVar10 >> 0x10);
        local_60[8] = uVar5;
        local_60[9] = bVar7;
        if (*(char *)(param_1 + 0x58) != '\0') {
          *(undefined4 *)(local_60 + 10) = 0x78563412;
        }
      }
    }
    FUN_00e99550(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),local_60,local_58);
    FUN_00e999b4(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),lVar3,lVar4);
    if ((uVar10 != 0) && (*(char *)(param_1 + 0x58) != '\0')) {
      uVar10 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x28) + (lVar3 - lVar4);
        *(byte *)(lVar1 + uVar10) = *(byte *)(lVar1 + uVar10) ^ (&DAT_01bf0623)[uVar10 & 3];
        uVar10 = uVar10 + 1;
      } while ((lVar3 - lVar4) + uVar10 != 0);
    }
    if (local_60 != (undefined1 *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e98af0(undefined8 param_1)

{
  long lVar1;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  FUN_00e99bcc(param_1,9,0,(ulong)local_40 | 1,(ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e98b60(long param_1)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x54) < 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  puVar1 = operator_new(6);
  *(undefined2 *)(puVar1 + 1) = 0;
  *puVar1 = 0x8088;
  FUN_00e99550(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),puVar1,(long)puVar1 + 6);
  operator_delete(puVar1);
  return;
}




undefined4 FUN_00e98bc8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}




void FUN_00e98bd0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)((long)param_1 + 0x54) != 2) {
    local_38 = &PTR_FUN_02821478;
    uStack_30 = param_2;
    (**(code **)(*param_1 + 0x50))(param_1,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

