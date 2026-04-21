// functions/01a05 — 4 functions
#include "libGameKindred.h"




ulong FUN_01a05240(long *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *param_1;
  lVar9 = *(long *)(lVar11 + 0x60);
  if ((int)param_1[0x13] == 4) {
    pbVar10 = (byte *)param_1[10];
    *(undefined4 *)(param_1 + 0x13) = 0;
    if (pbVar10 == (byte *)0x0) goto LAB_01a05384;
  }
  else {
    if ((int)param_1[0x13] == 3) {
      pbVar10 = (byte *)param_1[10];
      *(undefined4 *)(param_1 + 0x13) = 0;
    }
    else {
LAB_01a05384:
      uVar4 = _libssh2_channel_read(lVar11,0,(long)param_1 + param_1[9] + 0x44,4 - param_1[9]);
      if (uVar4 == 0xffffffffffffffdb) {
        return 0xffffffdb;
      }
      if ((long)uVar4 < 0) {
        pcVar7 = "channel read";
LAB_01a05594:
        uVar4 = _libssh2_error(lVar9,uVar4,pcVar7);
        return uVar4;
      }
      lVar5 = param_1[9];
      param_1[9] = lVar5 + uVar4;
      if (lVar5 + uVar4 != 4) {
        return 0xffffffdb;
      }
      uVar3 = _libssh2_ntohu32((long)param_1 + 0x44);
      *(uint *)(param_1 + 0xb) = uVar3;
      if (80000 < uVar3) {
        pcVar7 = "SFTP packet too large";
        uVar4 = 0xffffffe7;
        goto LAB_01a05594;
      }
      pbVar10 = (byte *)(**(code **)(lVar9 + 8))(uVar3,lVar9);
      if (pbVar10 == (byte *)0x0) {
        pcVar7 = "Unable to allocate SFTP packet";
        uVar4 = 0xfffffffa;
        goto LAB_01a05594;
      }
      param_1[0xc] = 0;
      param_1[9] = 0;
      param_1[10] = (long)pbVar10;
    }
    uVar4 = libssh2_channel_window_read_ex(lVar11,0,0);
    if (uVar4 < *(uint *)(param_1 + 0xb)) {
      iVar2 = _libssh2_channel_receive_window_adjust(lVar11,*(uint *)(param_1 + 0xb) << 1,1,0);
      uVar8 = 3;
      if (iVar2 != -0x25) {
        uVar8 = 0;
      }
      *(undefined4 *)(param_1 + 0x13) = uVar8;
      if (iVar2 == -0x25) {
        return 0xffffffdb;
      }
    }
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0xb);
  uVar4 = param_1[0xc];
  if (uVar4 < uVar12) {
    do {
      uVar4 = _libssh2_channel_read(lVar11,0,pbVar10 + uVar4,uVar12 - uVar4);
      if (uVar4 == 0xffffffffffffffdb) {
        *(undefined4 *)(param_1 + 0x13) = 4;
        return 0xffffffdb;
      }
      if ((long)uVar4 < 0) {
        (**(code **)(lVar9 + 0x18))(pbVar10,lVar9);
        pcVar7 = "Error waiting for SFTP packet";
        param_1[10] = 0;
        uVar4 = uVar4 & 0xffffffff;
        goto LAB_01a05594;
      }
      uVar12 = (ulong)*(uint *)(param_1 + 0xb);
      uVar4 = param_1[0xc] + uVar4;
      param_1[0xc] = uVar4;
    } while (uVar4 < uVar12);
  }
  param_1[10] = 0;
  bVar1 = *pbVar10;
  lVar11 = *(long *)(*param_1 + 0x60);
  if (((bVar1 - 1 < 0x14) || (bVar1 - 0x65 < 5)) || (bVar1 - 200 < 2)) {
    iVar2 = _libssh2_ntohu32(pbVar10 + 1);
    if ((*pbVar10 | 2) == 0x67) {
      lVar5 = _libssh2_list_first(param_1 + 4);
      if (lVar5 == 0) {
LAB_01a053fc:
        if (lVar5 != 0) {
          (**(code **)(lVar11 + 0x18))(pbVar10,lVar11);
          lVar11 = *(long *)(*param_1 + 0x60);
          for (lVar9 = _libssh2_list_first(param_1 + 4); lVar9 != 0;
              lVar9 = _libssh2_list_next(lVar9)) {
            if (*(int *)(lVar9 + 0x18) == iVar2) {
              if (lVar9 != 0) {
                _libssh2_list_remove();
                (**(code **)(lVar11 + 0x18))(lVar9,lVar11);
              }
              break;
            }
          }
          goto LAB_01a05558;
        }
      }
      else {
        do {
          if (*(int *)(lVar5 + 0x18) == iVar2) goto LAB_01a053fc;
          lVar5 = _libssh2_list_next();
        } while (lVar5 != 0);
      }
    }
    lVar5 = (**(code **)(lVar11 + 8))(0x30,lVar11);
    if (lVar5 != 0) {
      *(byte **)(lVar5 + 0x20) = pbVar10;
      *(ulong *)(lVar5 + 0x28) = uVar12;
      *(int *)(lVar5 + 0x18) = iVar2;
      _libssh2_list_add(param_1 + 2);
      goto LAB_01a05558;
    }
    pcVar7 = "Unable to allocate datablock for SFTP packet";
    uVar6 = 0xfffffffa;
  }
  else {
    pcVar7 = "Out of sync with the world";
    uVar6 = 0xffffffe1;
  }
  uVar3 = _libssh2_error(lVar11,uVar6,pcVar7);
  if (uVar3 != 0) {
    (**(code **)(lVar9 + 0x18))(pbVar10,lVar9);
    return (ulong)uVar3;
  }
LAB_01a05558:
  return (ulong)(uint)bVar1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_01a055ac(undefined1 *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *local_28;
  
  local_28 = param_1;
  if (param_2 == (ulong *)0x0) {
    _libssh2_htonu32(param_1);
    lVar1 = 4;
  }
  else {
    _libssh2_store_u32(&local_28,(uint)*param_2 & 0xf);
    uVar2 = (uint)*param_2;
    if ((*param_2 & 1) != 0) {
      uVar3 = param_2[1];
      *local_28 = (char)(uVar3 >> 0x38);
      local_28[1] = (char)(uVar3 >> 0x30);
      local_28[2] = (char)(uVar3 >> 0x28);
      local_28[3] = (char)(uVar3 >> 0x20);
      local_28[4] = (char)(uVar3 >> 0x18);
      local_28[5] = (char)(uVar3 >> 0x10);
      local_28[6] = (char)(uVar3 >> 8);
      local_28[7] = (char)uVar3;
      local_28 = local_28 + 8;
      uVar2 = (uint)*param_2;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      _libssh2_store_u32(&local_28,(uint)param_2[2]);
      _libssh2_store_u32(&local_28,(uint)param_2[3]);
      uVar2 = (uint)*param_2;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      _libssh2_store_u32(&local_28,(uint)param_2[4]);
      uVar2 = (uint)*param_2;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      _libssh2_store_u32(&local_28,(uint)param_2[5]);
      _libssh2_store_u32(&local_28,(uint)param_2[6]);
    }
    lVar1 = (long)local_28 - (long)param_1;
  }
  return lVar1;
}




int FUN_01a056c0(long *param_1,char *param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  time_t tVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  
  if (param_1[0xd] == 0) {
    tVar3 = time((time_t *)0x0);
    param_1[0xd] = tVar3;
  }
  lVar6 = *(long *)(*param_1 + 0x60);
  if (*(int *)(lVar6 + 0x204) == 0) {
    do {
      cVar1 = *param_2;
      for (lVar4 = _libssh2_list_first(param_1 + 2); lVar4 != 0; lVar4 = _libssh2_list_next(lVar4))
      {
        pcVar5 = *(char **)(lVar4 + 0x20);
        if ((*pcVar5 == cVar1) && ((cVar1 == '\x02' || (*(int *)(lVar4 + 0x18) == param_3))))
        goto LAB_01a05828;
      }
      cVar1 = param_2[1];
      lVar6 = *(long *)(*param_1 + 0x60);
      for (lVar4 = _libssh2_list_first(param_1 + 2); lVar4 != 0; lVar4 = _libssh2_list_next(lVar4))
      {
        pcVar5 = *(char **)(lVar4 + 0x20);
        if ((*pcVar5 == cVar1) && ((cVar1 == '\x02' || (*(int *)(lVar4 + 0x18) == param_3))))
        goto LAB_01a05828;
      }
      iVar2 = FUN_01a05240(param_1);
      if ((iVar2 < 0) && (iVar2 != -0x25)) break;
      if (iVar2 < 1) {
        tVar3 = time((time_t *)0x0);
        if ((0x3c - tVar3) + param_1[0xd] < 1) {
          iVar2 = -9;
          break;
        }
        if (iVar2 == -0x25) {
          return -0x25;
        }
      }
      iVar2 = -0xd;
      lVar6 = *(long *)(*param_1 + 0x60);
    } while (*(int *)(lVar6 + 0x204) == 0);
  }
  else {
    iVar2 = -0xd;
  }
LAB_01a05850:
  param_1[0xd] = 0;
  return iVar2;
LAB_01a05828:
  *param_4 = pcVar5;
  *param_5 = *(undefined8 *)(lVar4 + 0x28);
  _libssh2_list_remove(lVar4);
  (**(code **)(lVar6 + 0x18))(lVar4,lVar6);
  iVar2 = 0;
  goto LAB_01a05850;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_01a0587c(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = _libssh2_ntohu32(param_2);
  lVar3 = param_2 + 4;
  *param_1 = (ulong)uVar1;
  if ((uVar1 & 1) != 0) {
    uVar2 = _libssh2_ntohu64(lVar3);
    lVar3 = param_2 + 0xc;
    param_1[1] = uVar2;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = _libssh2_ntohu32(lVar3);
    param_1[2] = uVar2 & 0xffffffff;
    uVar2 = _libssh2_ntohu32(lVar3 + 4);
    lVar3 = lVar3 + 8;
    param_1[3] = uVar2 & 0xffffffff;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar2 = _libssh2_ntohu32(lVar3);
    lVar3 = lVar3 + 4;
    param_1[4] = uVar2 & 0xffffffff;
    uVar1 = (uint)*param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar2 = _libssh2_ntohu32(lVar3);
    param_1[5] = uVar2 & 0xffffffff;
    uVar2 = _libssh2_ntohu32(lVar3 + 4);
    lVar3 = lVar3 + 8;
    param_1[6] = uVar2 & 0xffffffff;
  }
  return (int)lVar3 - (int)param_2;
}

