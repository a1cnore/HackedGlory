// functions/019bd — 9 functions
#include "libGameKindred.h"




int FUN_019bd09c(long *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_a8 [48];
  undefined1 local_78 [16];
  int local_64;
  
  lVar9 = *param_1;
  local_64 = 0;
  *param_3 = 0;
  if (*(char *)((long)param_1 + (long)param_2 + 0x2e9) == '\0') {
    local_78 = FUN_019c338c();
    uVar4 = FUN_019bccd8(lVar9,local_78,1);
    if ((long)uVar4 < 0) {
      FUN_019ca0fc(lVar9,"Connection time-out");
      iVar2 = 0x1c;
    }
    else {
      uVar11 = 0;
      iVar2 = 0;
      lVar12 = 0x68;
      do {
        iVar3 = *(int *)((long)param_1 + uVar11 * 4 + 0x1d8);
        if (iVar3 != -1) {
          uVar1 = FUN_019c14c8(0xffffffff,0xffffffff,iVar3,0);
          if (uVar1 == 2) {
            uVar6 = FUN_019bd4ac(*(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8),&local_64);
            if ((uVar6 & 1) != 0) {
              *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0) =
                   *(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8);
              param_1[0xc] = *(long *)((long)param_1 + lVar12);
              *(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8) = 0xffffffff;
              if (*(int *)((long)param_1 + (uVar11 ^ 1) * 4 + 0x1d8) != -1) {
                FUN_019bd51c(param_1);
                *(undefined4 *)((long)param_1 + (uVar11 ^ 1) * 4 + 0x1d8) = 0xffffffff;
              }
              iVar2 = FUN_019cfe64(param_1,param_2);
              if (iVar2 == 0) {
                *(undefined1 *)((long)param_1 + (long)param_2 + 0x2e9) = 1;
                *param_3 = 1;
                if (param_2 == 0) {
                  FUN_019c4488(lVar9,4);
                }
                FUN_019bce18(param_1,*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0));
                FUN_019cfef0(param_1);
                return 0;
              }
              return iVar2;
            }
            FUN_019c9f64(lVar9,"Connection failed\n");
          }
          else if (uVar1 == 0) {
            lVar5 = FUN_019c33ec(local_78._0_8_,local_78._8_8_,param_1[0x60],param_1[0x61]);
            if (param_1[99] <= lVar5) {
              FUN_019c9f64(lVar9,"After %ldms connect time, move on!\n");
              local_64 = 0x6e;
            }
            if ((uVar11 == 0) && (param_1[0xe] == 0)) {
              lVar5 = FUN_019c33ec(local_78._0_8_,local_78._8_8_,param_1[0x60],param_1[0x61]);
              if (199 < lVar5) {
                FUN_019bd3cc(param_1,param_2,1);
              }
            }
          }
          else if ((uVar1 >> 2 & 1) != 0) {
            FUN_019bd4ac(*(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8),&local_64);
          }
          iVar3 = local_64;
          if (local_64 != 0) {
            *(int *)(lVar9 + 0x898c) = local_64;
            piVar7 = (int *)__errno();
            *piVar7 = iVar3;
            if (*(long *)((long)param_1 + lVar12) != 0) {
              FUN_019c3598(*(long *)((long)param_1 + lVar12),auStack_a8,0x2e);
              lVar5 = param_1[0x1e];
              uVar8 = FUN_019c1348(param_1,local_64);
              FUN_019c9f64(lVar9,"connect to %s port %ld failed: %s\n",auStack_a8,lVar5,uVar8);
              param_1[99] = uVar4 >> (*(long *)(*(long *)((long)param_1 + lVar12) + 0x28) != 0);
              iVar2 = FUN_019bd3cc(param_1,param_2,uVar11 & 0xffffffff);
            }
          }
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (uVar11 < 2);
      if (iVar2 != 0) {
        if (param_1[0xe] == 0) {
          iVar3 = FUN_019bd3cc(param_1,param_2,1);
          if (iVar3 == 0) {
            return 0;
          }
        }
        lVar12 = 0xc0;
        if (*(char *)((long)param_1 + 0x2e2) != '\0') {
          lVar12 = 0xe0;
        }
        lVar5 = param_1[0x1e];
        uVar10 = *(undefined8 *)((long)param_1 + lVar12);
        uVar8 = FUN_019c1348(param_1,local_64);
        FUN_019ca0fc(lVar9,"Failed to connect to %s port %ld: %s",uVar10,lVar5,uVar8);
      }
    }
  }
  else {
    iVar2 = 0;
    *param_3 = 1;
  }
  return iVar2;
}




int FUN_019bd3cc(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  
  lVar1 = param_1 + (long)param_3 * 4;
  iVar2 = *(int *)(lVar1 + 0x1d8);
  *(undefined4 *)(lVar1 + 0x1d8) = 0xffffffff;
  if (param_2 == 0) {
    plVar6 = (long *)(param_1 + (long)param_3 * 8 + 0x68);
    lVar4 = *plVar6;
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x68);
      if (lVar4 == 0) goto LAB_019bd3fc;
      iVar5 = 10;
      if (*(int *)(lVar4 + 4) != 2) {
        iVar5 = 2;
      }
    }
    else {
      iVar5 = *(int *)(lVar4 + 4);
    }
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 != 0) {
      do {
        if ((*(int *)(lVar4 + 4) == iVar5) &&
           (iVar3 = FUN_019bd694(param_1,lVar4,lVar1 + 0x1d8), iVar3 != 7)) {
          *plVar6 = lVar4;
          goto LAB_019bd400;
        }
        lVar4 = *(long *)(lVar4 + 0x28);
      } while (lVar4 != 0);
    }
  }
LAB_019bd3fc:
  iVar3 = 7;
LAB_019bd400:
  if (iVar2 != -1) {
    FUN_019bd51c(param_1,iVar2);
  }
  return iVar3;
}




undefined8 FUN_019bd4ac(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  socklen_t local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 4;
  iVar1 = getsockopt(param_1,1,4,&local_14,&local_18);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    local_14 = *piVar2;
  }
  uVar3 = 1;
  if ((local_14 != 0) && (local_14 != 0x6a)) {
    uVar3 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_14;
  }
  return uVar3;
}




undefined8 FUN_019bd51c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    close(param_2);
  }
  else {
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      if ((*(int *)(param_1 + 0x1d4) != param_2) || (*(char *)(param_1 + 0x1e1) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x019bd594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_2);
        return uVar1;
      }
      *(undefined1 *)(param_1 + 0x1e1) = 0;
    }
    close(param_2);
    FUN_019c025c(param_1,param_2);
  }
  return 0;
}




undefined8 FUN_019bd598(long *param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_40 [16];
  
  lVar5 = *param_1;
  local_40 = FUN_019c338c();
  uVar2 = FUN_019bccd8(lVar5,local_40,1);
  if ((long)uVar2 < 0) {
    FUN_019ca0fc(lVar5,"Connection time-out");
    uVar3 = 0x1c;
  }
  else {
    uVar1 = FUN_019c3574(*param_2);
    *(undefined4 *)(param_1 + 0x62) = uVar1;
    param_1[0xd] = *param_2;
    param_1[0xe] = 0;
    param_1[0x3b] = -1;
    FUN_019be274(*param_1,200);
    lVar4 = param_1[0xd];
    param_1[99] = uVar2 >> (*(long *)(lVar4 + 0x28) != 0);
    if (lVar4 == 0) {
      uVar3 = 7;
    }
    else {
      do {
        uVar3 = FUN_019bd694(param_1,lVar4,param_1 + 0x3b);
        if ((int)uVar3 == 0) break;
        lVar4 = *(long *)(param_1[0xd] + 0x28);
        param_1[0xd] = lVar4;
      } while (lVar4 != 0);
    }
    if ((int)param_1[0x3b] != -1) {
      uVar3 = 0;
      *(long *)(lVar5 + 0x8ba8) = *(long *)(lVar5 + 0x8ba8) + 1;
    }
  }
  return uVar3;
}




int FUN_019bd694(long *param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  size_t sVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  socklen_t __len;
  undefined4 uVar17;
  char *pcVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_348 [12];
  undefined1 auStack_33c [48];
  int local_30c;
  int local_308 [3];
  socklen_t local_2fc;
  sockaddr asStack_2f8 [8];
  socklen_t local_274;
  sockaddr asStack_270 [8];
  uint local_1f0 [64];
  long *local_f0;
  sockaddr local_e8;
  int local_d0;
  
  lVar15 = *param_1;
  *param_3 = -1;
  iVar4 = FUN_019bdea0(param_1,param_2,local_308,&local_30c);
  if (iVar4 != 0) {
    return 0;
  }
  uVar8 = FUN_019bcff0(asStack_2f8,auStack_33c,auStack_348);
  if ((uVar8 & 1) == 0) {
    puVar10 = (undefined4 *)__errno();
    uVar17 = *puVar10;
    uVar13 = FUN_019c1348(param_1,uVar17);
    FUN_019ca0fc(lVar15,"sa_addr inet_ntop() failed with errno %d: %s",uVar17,uVar13);
    FUN_019bd51c(param_1,local_30c);
    return 0;
  }
  FUN_019c9f64(lVar15,"  Trying %s...\n",auStack_33c);
  if (*(char *)(lVar15 + 0x536) != '\0') {
    lVar16 = *param_1;
    local_1f0[0] = (uint)*(byte *)(lVar16 + 0x536);
    iVar4 = setsockopt(local_30c,6,1,local_1f0,4);
    if (iVar4 < 0) {
      puVar10 = (undefined4 *)__errno();
      uVar13 = FUN_019c1348(param_1,*puVar10);
      FUN_019c9f64(lVar16,"Could not set TCP_NODELAY: %s\n",uVar13);
    }
    else {
      FUN_019c9f64(lVar16,"TCP_NODELAY set\n");
    }
  }
  iVar4 = local_30c;
  if (*(byte *)(lVar15 + 0x738) != 0) {
    local_1f0[0] = (uint)*(byte *)(lVar15 + 0x738);
    iVar5 = setsockopt(local_30c,1,9,local_1f0,4);
    if (iVar5 < 0) {
      pcVar18 = "Failed to set SO_KEEPALIVE on fd %d\n";
    }
    else {
      local_1f0[0] = FUN_019c1e90(*(undefined8 *)(lVar15 + 0x740));
      iVar5 = setsockopt(iVar4,6,4,local_1f0,4);
      if (iVar5 < 0) {
        FUN_019c9f64(lVar15,"Failed to set TCP_KEEPIDLE on fd %d\n",iVar4);
      }
      local_1f0[0] = FUN_019c1e90(*(undefined8 *)(lVar15 + 0x748));
      iVar5 = setsockopt(iVar4,6,5,local_1f0,4);
      if (-1 < iVar5) goto LAB_019bd868;
      pcVar18 = "Failed to set TCP_KEEPINTVL on fd %d\n";
    }
    FUN_019c9f64(lVar15,pcVar18,iVar4);
  }
LAB_019bd868:
  if ((*(code **)(lVar15 + 0x2f8) == (code *)0x0) ||
     (iVar4 = (**(code **)(lVar15 + 0x2f8))(*(undefined8 *)(lVar15 + 0x300),local_30c,0), iVar4 == 0
     )) {
    bVar2 = false;
  }
  else {
    if (iVar4 != 2) {
      FUN_019bd51c(param_1,local_30c);
      return 0x2a;
    }
    bVar2 = true;
  }
  iVar5 = local_308[0];
  lVar16 = *param_1;
  local_f0 = (long *)0x0;
  iVar4 = *(int *)(lVar16 + 0x2ac);
  uVar1 = *(ushort *)(lVar16 + 0x2a8);
  uVar20 = (uint)uVar1;
  pcVar18 = *(char **)(lVar16 + 0x590);
  memset(local_1f0,0,0x100);
  if ((uVar1 != 0) || (iVar6 = 0, pcVar18 != (char *)0x0)) {
    memset(&local_e8,0,0x80);
    uVar21 = (uint)uVar1;
    if ((pcVar18 == (char *)0x0) || (sVar9 = strlen(pcVar18), 0xfe < sVar9)) {
      if (iVar5 == 2) {
        local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar21 & 0xff00ff) << 8);
LAB_019bd98c:
        local_e8.sa_family = 2;
        __len = 0x10;
      }
      else {
        __len = 0;
        if (iVar5 == 10) {
          local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar21 & 0xff00ff) << 8);
          local_e8.sa_family = 10;
LAB_019bd960:
          __len = 0x1c;
        }
      }
LAB_019bd990:
      iVar5 = bind(local_30c,&local_e8,__len);
      if (iVar5 < 0) {
        iVar4 = iVar4 + 1;
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 < 2) {
            puVar10 = (undefined4 *)__errno();
            uVar17 = *puVar10;
            *(undefined4 *)(lVar16 + 0x898c) = uVar17;
            uVar13 = FUN_019c1348(param_1,uVar17);
            pcVar18 = "bind failed with errno %d: %s";
            goto LAB_019bda9c;
          }
          FUN_019c9f64(lVar16,"Bind to local port %hu failed, trying next\n",uVar20 & 0xffff);
          uVar20 = uVar20 + 1;
          local_e8.sa_data._0_2_ = (ushort)(uVar20 >> 8) & 0xff | (ushort)((uVar20 & 0xff00ff) << 8)
          ;
          iVar5 = bind(local_30c,&local_e8,__len);
        } while (iVar5 < 0);
      }
      local_274 = 0x80;
      memset(asStack_270,0,0x80);
      iVar4 = getsockname(local_30c,asStack_270,&local_274);
      if (-1 < iVar4) {
        FUN_019c9f64(lVar16,"Local port: %hu\n",uVar20 & 0xffff);
        *(undefined1 *)((long)param_1 + 0x2f7) = 1;
        goto LAB_019bdca0;
      }
      puVar10 = (undefined4 *)__errno();
      uVar17 = *puVar10;
      *(undefined4 *)(lVar16 + 0x898c) = uVar17;
      uVar13 = FUN_019c1348(param_1,uVar17);
      pcVar18 = "getsockname() failed with errno %d: %s";
LAB_019bda9c:
      FUN_019ca0fc(lVar16,pcVar18,uVar17,uVar13);
    }
    else {
      iVar6 = strncmp("if!",pcVar18,3);
      if (iVar6 != 0) {
        iVar6 = strncmp("host!",pcVar18,5);
        bVar3 = false;
        if (iVar6 != 0) goto LAB_019bdab4;
        pcVar18 = pcVar18 + 5;
        goto LAB_019bdb78;
      }
      pcVar18 = pcVar18 + 3;
      bVar3 = true;
LAB_019bdab4:
      iVar7 = FUN_019d4488(iVar5,(int)param_1[0x15],pcVar18,local_1f0,0x100);
      if (iVar7 == 2) {
        FUN_019c9f64(lVar16,"Local Interface %s is ip %s using address family %i\n",pcVar18,
                     local_1f0,iVar5);
        sVar9 = strlen(pcVar18);
        iVar6 = setsockopt(local_30c,1,0x19,pcVar18,(int)sVar9 + 1);
        if (iVar6 != 0) {
          puVar10 = (undefined4 *)__errno();
          uVar17 = *puVar10;
          uVar13 = FUN_019c1348(param_1,uVar17);
          FUN_019c9f64(lVar16,"SO_BINDTODEVICE %s failed with errno %d: %s; will do regular bind\n",
                       pcVar18,uVar17,uVar13);
        }
LAB_019bdc00:
        if (iVar5 == 2) {
          iVar5 = inet_pton(2,(char *)local_1f0,(void *)((ulong)&local_e8 | 4));
          if (0 < iVar5) {
            local_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
            goto LAB_019bd98c;
          }
          __len = 0;
        }
        else {
          __len = 0;
          if (iVar5 == 10) {
            pcVar11 = strchr((char *)local_1f0,0x25);
            pcVar18 = pcVar11;
            if (pcVar11 != (char *)0x0) {
              pcVar18 = pcVar11 + 1;
              *pcVar11 = '\0';
            }
            iVar5 = inet_pton(10,(char *)local_1f0,local_e8.sa_data + 6);
            if (0 < iVar5) {
              local_e8.sa_data._0_2_ = uVar1 >> 8 | (ushort)((uVar21 & 0xff00ff) << 8);
              local_e8.sa_family = 10;
              if (pcVar18 != (char *)0x0) {
                local_d0 = atoi(pcVar18);
              }
            }
            goto LAB_019bd960;
          }
        }
        goto LAB_019bd990;
      }
      iVar6 = 1;
      if (iVar7 == 1) goto LAB_019bdc84;
      if (iVar7 == 0) {
        if (!bVar3) {
LAB_019bdb78:
          lVar19 = param_1[0x66];
          if (iVar5 == 2) {
            lVar14 = 1;
LAB_019bdb98:
            param_1[0x66] = lVar14;
          }
          else if (iVar5 == 10) {
            lVar14 = 2;
            goto LAB_019bdb98;
          }
          FUN_019c38c0(param_1,pcVar18,0,&local_f0);
          param_1[0x66] = lVar19;
          if (local_f0 != (long *)0x0) {
            FUN_019c3598(*local_f0,local_1f0,0x100);
            FUN_019c9f64(lVar16,"Name \'%s\' family %i resolved to \'%s\' family %i\n",pcVar18,iVar5
                         ,local_1f0,*(undefined4 *)(*local_f0 + 4));
            FUN_019c3c58(lVar16,local_f0);
            goto LAB_019bdc00;
          }
          goto LAB_019bdc6c;
        }
        pcVar11 = "Couldn\'t bind to interface \'%s\'";
      }
      else {
        if (!bVar3) goto LAB_019bdb78;
LAB_019bdc6c:
        pcVar11 = "Couldn\'t bind to \'%s\'";
      }
      FUN_019ca0fc(lVar16,pcVar11,pcVar18);
    }
    iVar6 = 0x2d;
  }
LAB_019bdc84:
  if (iVar6 != 0) {
    FUN_019bd51c(param_1,local_30c);
    if (iVar6 == 1) {
      return 0;
    }
    return iVar6;
  }
LAB_019bdca0:
  FUN_019c1e24(local_30c,1);
  auVar22 = FUN_019c338c();
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar22;
  if (1 < (int)param_1[0x62]) {
    FUN_019c0bd8(lVar15,param_1[99]);
  }
  if ((!bVar2) && (*(int *)((long)param_1 + 0xac) == 1)) {
    iVar4 = connect(local_30c,asStack_2f8,local_2fc);
    if (iVar4 == -1) {
      piVar12 = (int *)__errno();
      iVar4 = *piVar12;
      *(bool *)((long)param_1 + 0x2e7) = local_308[0] == 10;
      if ((iVar4 != 0xb) && (iVar4 != 0x73)) {
        uVar13 = FUN_019c1348(param_1,iVar4);
        FUN_019c9f64(lVar15,"Immediate connect fail for %s: %s\n",auStack_33c,uVar13);
        *(int *)(lVar15 + 0x898c) = iVar4;
        FUN_019bd51c(param_1,local_30c);
        return 7;
      }
    }
    else {
      *(bool *)((long)param_1 + 0x2e7) = local_308[0] == 10;
    }
  }
  *param_3 = local_30c;
  return 0;
}




int FUN_019bddd0(long param_1,long *param_2)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  long local_40;
  char local_38;
  undefined1 auStack_24 [4];
  
  lVar3 = *(long *)(param_1 + 0x920);
  if ((lVar3 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    local_38 = '\0';
    local_40 = lVar3;
    FUN_019c216c(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),&local_40,&LAB_019bde80);
    if (local_38 == '\0') {
      *(undefined8 *)(param_1 + 0x920) = 0;
    }
    else {
      if (param_2 != (long *)0x0) {
        *param_2 = lVar3;
      }
      __fd = *(int *)(lVar3 + 0x1d0);
      if (*(char *)(lVar3 + 0x208) == '\0') {
        sVar2 = recv(__fd,auStack_24,1,2);
        if (sVar2 != 0) {
          return __fd;
        }
      }
      else {
        iVar1 = thunk_FUN_019ecf9c(lVar3);
        if (iVar1 != 0) {
          return __fd;
        }
      }
    }
  }
  return -1;
}




undefined8 FUN_019bdea0(long *param_1,long param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int __type;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  int __protocol;
  long lVar6;
  int local_e0 [36];
  
  iVar3 = *(int *)(param_2 + 4);
  piVar1 = local_e0;
  if (param_3 != (int *)0x0) {
    piVar1 = param_3;
  }
  lVar6 = *param_1;
  *piVar1 = iVar3;
  __type = *(int *)((long)param_1 + 0xac);
  piVar1[1] = __type;
  if (__type == 2) {
    __protocol = 0x11;
  }
  else {
    __protocol = *(int *)(param_2 + 0xc);
  }
  piVar1[2] = __protocol;
  uVar2 = *(uint *)(param_2 + 0x10);
  if (0x7f < uVar2) {
    uVar2 = 0x80;
  }
  piVar1[3] = uVar2;
  memcpy(piVar1 + 4,*(void **)(param_2 + 0x20),(ulong)uVar2);
  pcVar5 = *(code **)(lVar6 + 0x308);
  if (pcVar5 == (code *)0x0) {
    iVar3 = socket(iVar3,__type,__protocol);
  }
  else {
    iVar3 = (*pcVar5)(*(undefined8 *)(lVar6 + 0x310),0,piVar1);
  }
  *param_4 = iVar3;
  if (iVar3 == -1) {
    uVar4 = 7;
  }
  else if ((int)param_1[0x15] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*piVar1 == 10) {
      uVar4 = 0;
      piVar1[10] = (int)param_1[0x15];
    }
  }
  return uVar4;
}




undefined8 * FUN_019bdfa0(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(*(code *)PTR_calloc_02bf74c8)(1,0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xbab1e;
    lVar2 = FUN_019c3cec();
    puVar1[8] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_019da7cc(param_1,&LAB_019c0d88,&LAB_019c0d9c,&LAB_019c0db0);
      puVar1[10] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_019c1ebc(param_2);
        puVar1[0xc] = lVar2;
        if (lVar2 != 0) {
          lVar2 = FUN_019da388(&DAT_019be0f0);
          puVar1[4] = lVar2;
          if (lVar2 != 0) {
            lVar2 = FUN_019da388(&DAT_019be0f0);
            puVar1[5] = lVar2;
            if (lVar2 != 0) {
              lVar2 = FUN_019bc3b0();
              puVar1[0xd] = lVar2;
              if (lVar2 != 0) {
                *(undefined8 **)(lVar2 + 0x60) = puVar1;
                *(undefined8 *)(lVar2 + 0x900) = puVar1[0xc];
                puVar1[0x11] = 5;
                puVar1[0xe] = 0xffffffffffffffff;
                return puVar1;
              }
            }
          }
        }
      }
    }
    FUN_019dabfc(puVar1[10]);
    puVar1[10] = 0;
    FUN_019dabfc(puVar1[8]);
    puVar1[8] = 0;
    FUN_019c1f40(puVar1[0xc]);
    puVar1[0xc] = 0;
    FUN_019cac70(puVar1[0xd]);
    puVar1[0xd] = 0;
    FUN_019da520(puVar1[4],0);
    FUN_019da520(puVar1[5],0);
    (*(code *)PTR_free_02bf74b0)(puVar1);
  }
  return (undefined8 *)0x0;
}

