// functions/00e6f — 33 functions
#include "libGameKindred.h"




int FUN_00e6f02c(int *param_1)

{
  int __fd;
  
  __fd = *param_1;
  if (__fd != -1) {
    __fd = close(__fd);
    *param_1 = -1;
  }
  return __fd;
}




undefined8 FUN_00e6f060(long param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  return 1;
}




void FUN_00e6f078(int *param_1,void *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  
  sVar2 = read(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (int *)0x0) {
    iVar1 = (uint)((int)sVar2 == 0) << 1;
    if ((int)sVar2 == -1) {
      iVar1 = 1;
    }
    *param_4 = iVar1;
  }
  return;
}




void FUN_00e6f0bc(int *param_1,void *param_2,ulong param_3,uint *param_4)

{
  ssize_t sVar1;
  
  sVar1 = write(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((int)sVar1 == -1);
  }
  return;
}




undefined8 FUN_00e6f0f4(int *param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] | 0x10;
  if ((param_2 & 1) == 0) {
    uVar1 = param_1[1] & 0xffffffef;
  }
  param_1[1] = uVar1;
  if (((uVar1 & 1) != 0) && (*param_1 != -1)) {
    uVar1 = 0x800;
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    fcntl(*param_1,4,(ulong)uVar1);
  }
  return 1;
}




bool FUN_00e6f144(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    bVar1 = *param_1 != -1;
  }
  return bVar1;
}




void FUN_00e6f164(int *param_1,char *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  addrinfo *paVar7;
  socklen_t local_150;
  int local_14c;
  timeval local_148;
  addrinfo *local_138;
  addrinfo local_130;
  fd_set fStack_100;
  char local_80 [16];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_138 = (addrinfo *)0x0;
  local_130.ai_addr = (sockaddr *)0x0;
  local_130.ai_addrlen = 0;
  local_130._20_4_ = 0;
  local_130.ai_next = (addrinfo *)0x0;
  local_130.ai_canonname = (char *)0x0;
  local_130.ai_socktype = 1;
  local_130.ai_protocol = 0;
  local_130.ai_flags = 0;
  local_130.ai_family = 0;
  local_80[0] = '\0';
  FUN_00e6a8a8(local_80,&DAT_01bb6d43);
  iVar4 = getaddrinfo(param_2,local_80,&local_130,&local_138);
  if (iVar4 == 0) {
    if (local_138 != (addrinfo *)0x0) {
      paVar7 = local_138;
      do {
        iVar4 = socket(paVar7->ai_family,paVar7->ai_socktype,paVar7->ai_protocol);
        if (iVar4 != -1) {
          uVar1 = param_1[1];
          FUN_00e6f368(param_1,iVar4);
          if (param_5 != 0 || param_4 != 0) {
            FUN_00e6f0f4(param_1,1);
          }
          piVar6 = (int *)__errno();
          *piVar6 = 0;
          iVar5 = connect(iVar4,(sockaddr *)paVar7->ai_canonname,paVar7->ai_addrlen);
          if ((((iVar5 == 0) || (iVar5 = *piVar6, iVar5 == 4)) || (iVar5 == 0x73)) || (iVar5 == 0xb)
             ) {
            if (param_5 == 0 && param_4 == 0) {
              *param_1 = iVar4;
              goto LAB_00e6f324;
            }
            local_148.tv_sec = (ulong)param_4;
            local_148.tv_usec = (ulong)param_5;
            memset(&fStack_100,0,0x80);
            __FD_SET_chk(iVar4,&fStack_100,0x80);
            iVar5 = select(iVar4 + 1,(fd_set *)0x0,&fStack_100,(fd_set *)0x0,&local_148);
            if (iVar5 == 1) {
              local_150 = 4;
              getsockopt(iVar4,1,4,&local_14c,&local_150);
              if (local_14c == 0) {
                *param_1 = iVar4;
                FUN_00e6f0f4(param_1,uVar1 >> 4 & 1);
                goto LAB_00e6f324;
              }
            }
          }
          close(iVar4);
        }
        paVar7 = paVar7->ai_next;
      } while (paVar7 != (addrinfo *)0x0);
    }
    iVar4 = -1;
LAB_00e6f324:
    freeaddrinfo(local_138);
    bVar3 = iVar4 != -1;
  }
  else {
    if (local_138 != (addrinfo *)0x0) {
      freeaddrinfo(local_138);
    }
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00e6f368(ulong param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_3c;
  long local_38;
  ulong uVar4;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = param_1;
  if ((uVar2 >> 1 & 1) != 0) {
    local_3c = 1;
    uVar3 = setsockopt(param_2,1,2,&local_3c,4);
    uVar2 = *(uint *)(param_1 + 4);
    uVar4 = (ulong)uVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    local_3c = *(undefined4 *)(param_1 + 8);
    uVar2 = setsockopt(param_2,1,7,&local_3c,4);
    uVar4 = (ulong)uVar2;
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    local_3c = 1;
    uVar2 = setsockopt(param_2,6,1,&local_3c,4);
    uVar4 = (ulong)uVar2;
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    uVar2 = fcntl(param_2,4,0x800);
    uVar4 = (ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00e6f458(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 0;
  return;
}




undefined4 FUN_00e6f470(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  return *puVar1;
}




void FUN_00e6f488(int *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined1 local_58 [20];
  undefined8 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = socket(10,1,0);
  *param_1 = iVar2;
  FUN_00e6f368(param_1,iVar2);
  local_58._2_2_ = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  local_58._12_8_ = 0;
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_44 = 0;
  local_58._0_2_ = 10;
  iVar2 = bind(*param_1,(sockaddr *)local_58,0x1c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}




bool FUN_00e6f530(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = listen(*param_1,param_2);
  return iVar1 == 0;
}




bool FUN_00e6f550(int *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  socklen_t local_4c;
  sockaddr asStack_48 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_4c = 0x1c;
  iVar2 = accept(*param_1,asStack_48,&local_4c);
  if (iVar2 != -1) {
    param_2[1] = param_2[1] | 1;
  }
  *param_2 = iVar2;
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 != -1;
}




undefined8 FUN_00e6f5d4(int *param_1)

{
  long lVar1;
  int __fd;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __fd = *param_1;
  param_1[1] = param_1[1] | 2;
  if (__fd != -1) {
    local_2c = 1;
    __fd = setsockopt(__fd,1,2,&local_2c,4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__fd);
}




undefined8 FUN_00e6f64c(int *param_1)

{
  long lVar1;
  int __fd;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __fd = *param_1;
  param_1[1] = param_1[1] | 8;
  if (__fd != -1) {
    local_2c = 1;
    __fd = setsockopt(__fd,6,1,&local_2c,4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__fd);
}




void FUN_00e6f6c4(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  socklen_t local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = 4;
  local_2c = 0;
  iVar3 = getsockopt(*param_1,1,7,&local_2c,&local_30);
  uVar1 = 0;
  if (iVar3 != -1) {
    uVar1 = local_2c;
  }
  *param_2 = uVar1;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 != -1);
}




undefined8 FUN_00e6f73c(int *param_1,int param_2)

{
  long lVar1;
  int __fd;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __fd = *param_1;
  param_1[1] = param_1[1] | 4;
  param_1[2] = param_2;
  if (__fd != -1) {
    local_2c = param_2;
    __fd = setsockopt(__fd,1,7,&local_2c,4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__fd);
}




uint FUN_00e6f7b0(long param_1)

{
  return *(uint *)(param_1 + 4) & 1;
}




void FUN_00e6f7bc(int *param_1,long param_2,uint *param_3,long param_4,uint *param_5)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  byte local_b8 [16];
  void *local_a8;
  socklen_t local_9c;
  byte local_98 [16];
  void *local_88;
  sockaddr asStack_68 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_9c = 0x1c;
  iVar3 = getsockname(*param_1,asStack_68,&local_9c);
  if (iVar3 == -1) {
    piVar4 = (int *)__errno();
    iVar3 = *piVar4;
LAB_00e6f93c:
    FUN_00e6fa60(local_98,piVar4,iVar3);
    pvVar1 = (void *)((ulong)local_98 | 1);
    if ((local_98[0] & 1) != 0) {
      pvVar1 = local_88;
    }
    FUN_00e6a7ec(&DAT_01e28837,pvVar1);
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    uVar5 = 0;
  }
  else {
    if (param_2 != 0) {
      inet_ntop(10,asStack_68[0].sa_data + 6,(char *)local_98,0x2e);
      FUN_008fa54c(local_b8,local_98);
      FUN_008fce60(param_2,local_b8);
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)((ushort)asStack_68[0].sa_data._0_2_ >> 8) |
                 ((ushort)asStack_68[0].sa_data._0_2_ & 0xff00ff) << 8;
    }
    iVar3 = getpeername(*param_1,asStack_68,&local_9c);
    if (iVar3 == -1) {
      piVar4 = (int *)__errno();
      iVar3 = *piVar4;
      if (iVar3 != 0x6b) goto LAB_00e6f93c;
      if (param_4 != 0) {
        FUN_008fa54c(local_98,&DAT_01e277f2);
        FUN_008fce60(param_4,local_98);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      if (param_4 != 0) {
        inet_ntop(10,asStack_68[0].sa_data + 6,(char *)local_98,0x2e);
        FUN_008fa54c(local_b8,local_98);
        FUN_008fce60(param_4,local_b8);
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = (uint)((ushort)asStack_68[0].sa_data._0_2_ >> 8) |
                   ((ushort)asStack_68[0].sa_data._0_2_ & 0xff00ff) << 8;
      }
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00e6f9a8(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  FUN_00e6fa60(param_1,puVar1,*puVar1);
  return;
}




bool FUN_00e6f9d0(int *param_1)

{
  long lVar1;
  int iVar2;
  socklen_t local_30;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 4;
  local_2c = 0;
  iVar2 = getsockopt(*param_1,1,4,&local_2c,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return iVar2 < 0 || 0 < local_2c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00e6fa48(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  return *puVar1;
}




void FUN_00e6fa60(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined1 auStack_238 [256];
  char acStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memset(acStack_138,0,0x100);
  strerror_r(param_3,acStack_138,0x100);
  FUN_00e6faf4(auStack_238,"%s (error %d)",acStack_138,param_3);
  FUN_008fa54c(param_1,auStack_238);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6faf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,0x100,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e6fb94(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4)

{
  int iVar1;
  
  iVar1 = select(param_1,param_2,param_3,param_4,(timeval *)0x0);
  return iVar1;
}




void FUN_00e6fb9c(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4,ulong param_5,
                 uint param_6)

{
  long lVar1;
  int iVar2;
  timeval local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38.tv_sec = param_5 & 0xffffffff;
  local_38.tv_usec = (__suseconds_t)param_6;
  iVar2 = select(param_1,param_2,param_3,param_4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00e6fbf0(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    uVar2 = (uint)bVar1;
    if ((((((uVar2 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) || ((uVar2 - 0x30 & 0xff) < 10)) ||
        (uVar2 - 0x2d < 2)) || ((uVar2 == 0x7e || (uVar2 == 0x5f)))) {
      *param_1 = bVar1;
      lVar3 = 1;
    }
    else {
      FUN_00e6a8a8(param_1,&DAT_01bee9f6,bVar1);
      lVar3 = 3;
    }
    param_1 = param_1 + lVar3;
    bVar1 = *param_2;
  }
  return;
}




void FUN_00e6fc9c(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar7 = (uint)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar7 = *(uint *)(param_2 + 8);
  }
  FUN_00e6fe34(param_1,uVar7 * 3);
  FUN_008fa54c(local_60,&DAT_01e277f2);
  FUN_008fce60(param_1,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  bVar2 = *param_2;
  uVar9 = *(ulong *)(param_2 + 8);
  bVar5 = (bVar2 & 1) == 0;
  uVar7 = (uint)(bVar2 >> 1);
  if (!bVar5) {
    uVar7 = (uint)uVar9;
  }
  if (uVar7 != 0) {
    uVar10 = 0;
    do {
      pbVar6 = param_2 + 1;
      if ((bVar2 & 1) != 0) {
        pbVar6 = *(byte **)(param_2 + 0x10);
      }
      bVar3 = pbVar6[uVar10];
      if (((((byte)((bVar3 & 0xdf) + 0xbf) < 0x1a) || ((byte)(bVar3 - 0x30) < 10)) ||
          (uVar7 = (uint)bVar3, uVar7 - 0x2d < 2)) || ((uVar7 == 0x7e || (uVar7 == 0x5f)))) {
        uVar1 = (ulong)(bVar2 >> 1);
        if (!bVar5) {
          uVar1 = uVar9;
        }
        if (uVar1 < uVar10) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar6 = param_2 + 1;
        if (!bVar5) {
          pbVar6 = *(byte **)(param_2 + 0x10);
        }
        sVar8 = (size_t)(uVar10 != uVar1);
        pbVar6 = pbVar6 + uVar10;
      }
      else {
        FUN_00e6a8a8(local_60,&DAT_01bee9f6);
        sVar8 = strlen((char *)local_60);
        pbVar6 = local_60;
      }
      FUN_0090de84(param_1,pbVar6,sVar8);
      bVar2 = *param_2;
      uVar9 = *(ulong *)(param_2 + 8);
      uVar10 = uVar10 + 1;
      bVar5 = (bVar2 & 1) == 0;
      uVar1 = (ulong)(bVar2 >> 1);
      if (!bVar5) {
        uVar1 = uVar9;
      }
    } while (uVar10 < (uVar1 & 0xffffffff));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6fe34(ulong *param_1,ulong param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  long lVar7;
  
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar6 = (ulong)(bVar1 >> 1);
    lVar4 = 0x16;
  }
  else {
    uVar6 = param_1[1];
    lVar4 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  uVar5 = uVar6;
  if (uVar6 <= param_2) {
    uVar5 = param_2;
  }
  if (uVar5 < 0x17) {
    lVar7 = 0x16;
  }
  else {
    lVar7 = (uVar5 + 0x10 & 0xfffffffffffffff0) - 1;
  }
  if (lVar7 == lVar4) {
    return;
  }
  if (lVar7 == 0x16) {
    __src = (void *)param_1[2];
    __dest = (void *)((long)param_1 + 1);
    bVar3 = false;
    if ((bVar1 & 1) == 0) {
      bVar2 = true;
LAB_00e6fee0:
      uVar5 = (ulong)(bVar1 >> 1);
      goto LAB_00e6fef8;
    }
  }
  else {
    __dest = operator_new(lVar7 + 1);
    if ((bVar1 & 1) == 0) {
      bVar2 = false;
      __src = (void *)((long)param_1 + 1);
      bVar3 = true;
      goto LAB_00e6fee0;
    }
    __src = (void *)param_1[2];
    bVar3 = true;
  }
  uVar5 = param_1[1];
  bVar2 = true;
LAB_00e6fef8:
  if (uVar5 + 1 != 0) {
    memcpy(__dest,__src,uVar5 + 1);
  }
  if (bVar2) {
    operator_delete(__src);
  }
  if (bVar3) {
    *param_1 = lVar7 + 1U | 1;
    param_1[1] = uVar6;
    param_1[2] = (ulong)__dest;
  }
  else {
    *(char *)param_1 = (char)((int)uVar6 << 1);
  }
  return;
}




byte * FUN_00e6ff54(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = (ulong)*param_1;
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  while( true ) {
    pbVar3 = param_1 + 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar2 >> 1;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 8);
      pbVar3 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar4 == pbVar3 + uVar2) break;
    iVar1 = tolower((uint)*pbVar4);
    *pbVar4 = (byte)iVar1;
    uVar2 = (ulong)*param_1;
    pbVar4 = pbVar4 + 1;
  }
  return param_1;
}




byte * FUN_00e6ffcc(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = (ulong)*param_1;
  if ((*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0x10);
  }
  while( true ) {
    pbVar3 = param_1 + 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar2 >> 1;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 8);
      pbVar3 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar4 == pbVar3 + uVar2) break;
    iVar1 = toupper((uint)*pbVar4);
    *pbVar4 = (byte)iVar1;
    uVar2 = (ulong)*param_1;
    pbVar4 = pbVar4 + 1;
  }
  return param_1;
}




int thunk_FUN_00e6fb94(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4)

{
  int iVar1;
  
  iVar1 = select(param_1,param_2,param_3,param_4,(timeval *)0x0);
  return iVar1;
}




void thunk_FUN_00e6fb9c(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4,ulong param_5,
                       uint param_6)

{
  long lVar1;
  int iVar2;
  timeval tStack_38;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  tStack_38.tv_sec = param_5 & 0xffffffff;
  tStack_38.tv_usec = (__suseconds_t)param_6;
  iVar2 = select(param_1,param_2,param_3,param_4,&tStack_38);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

