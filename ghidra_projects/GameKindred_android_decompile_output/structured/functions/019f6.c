// functions/019f6 — 13 functions
#include "libGameKindred.h"




void FUN_019f602c(long *param_1)

{
  int iVar1;
  
  if ((*(int *)(*(long *)(*param_1 + 0x218) + 0x18) == 1) && (param_1[0xba] != 0)) {
    iVar1 = FUN_019e8c44(param_1 + 0xa9,"SIZE %s");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xbf) = 0x17;
    }
    return;
  }
  FUN_019f6090(param_1);
  return;
}




void FUN_019f6090(long *param_1)

{
  int iVar1;
  
  if ((*(int *)(*(long *)(*param_1 + 0x218) + 0x18) != 0) && (param_1[0xba] != 0)) {
    iVar1 = FUN_019e8c44(param_1 + 0xa9,"REST %d",0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xbf) = 0x1a;
    }
    return;
  }
  FUN_019f60f4(param_1);
  return;
}




undefined8 FUN_019f60f4(long *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (*(int *)(*(long *)(lVar4 + 0x218) + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0xbf) = 0xd;
    uVar1 = FUN_019f56b8(param_1,1,0xd);
    return uVar1;
  }
  if (*(char *)(lVar4 + 0x50e) == '\0') {
    if (*(char *)(lVar4 + 0x526) == '\0') {
      uVar1 = FUN_019f5b08(param_1);
      return uVar1;
    }
    pcVar3 = (char *)param_1[0xba];
    if (pcVar3 == (char *)0x0) {
      pcVar3 = *(char **)(lVar4 + 0x588);
      if (*(char **)(lVar4 + 0x588) == (char *)0x0) {
        pcVar3 = "LIST";
        if (*(char *)(lVar4 + 0x50d) != '\0') {
          pcVar3 = "NLST";
        }
      }
      pcVar2 = "PRET %s";
    }
    else if (*(char *)(lVar4 + 0x519) == '\0') {
      pcVar2 = "PRET RETR %s";
    }
    else {
      pcVar2 = "PRET STOR %s";
    }
    uVar1 = FUN_019e8c44(param_1 + 0xa9,pcVar2,pcVar3);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xbf) = 0x1d;
    }
    return uVar1;
  }
  uVar1 = FUN_019f61e0(param_1,0);
  return uVar1;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_019f61e0(long *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  char cVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  char *pcVar17;
  long lVar18;
  byte bVar19;
  uint uVar20;
  long *local_a00;
  char local_9f8 [1024];
  char acStack_5f8 [1028];
  socklen_t local_1f4;
  sockaddr local_1f0 [8];
  char local_16c [256];
  int local_6c [3];
  
  lVar14 = *param_1;
  local_6c[0] = -1;
  memset(local_16c,0,0x100);
  pcVar17 = *(char **)(lVar14 + 0x5b0);
  local_a00 = (long *)0x0;
  if ((pcVar17 == (char *)0x0) || (sVar7 = strlen(pcVar17), sVar7 < 2)) {
    uVar15 = 0;
    uVar20 = 0;
    pcVar8 = (char *)0x0;
LAB_019f62b0:
    local_1f4 = 0x80;
    iVar6 = getsockname((int)param_1[0x3a],local_1f0,&local_1f4);
    if (iVar6 != 0) {
      puVar10 = (undefined4 *)__errno();
      pcVar17 = (char *)FUN_019c1348(param_1,*puVar10);
      pcVar9 = "getsockname() failed: %s";
      goto LAB_019f63c8;
    }
    if (local_1f0[0].sa_family == 10) {
      pcVar17 = local_1f0[0].sa_data + 6;
    }
    else {
      pcVar17 = (char *)((ulong)local_1f0 | 4);
    }
    inet_ntop((uint)local_1f0[0].sa_family,pcVar17,acStack_5f8,0x401);
    bVar19 = 0;
    pcVar17 = acStack_5f8;
  }
  else {
    if (sVar7 < 0x2f) {
      sVar7 = 0x2e;
    }
    pcVar8 = (char *)(*(code *)PTR_calloc_02bf74c8)(sVar7 + 1,1);
    if (pcVar8 == (char *)0x0) {
      return 0x1b;
    }
    pcVar9 = pcVar17;
    if (*pcVar17 == ':') {
LAB_019f6568:
      pcVar17 = strchr(pcVar9,0x3a);
      if (pcVar17 == (char *)0x0) {
LAB_019f65bc:
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        strtoul(pcVar17 + 1,(char **)0x0,10);
        uVar4 = FUN_019c1e68();
        pcVar17 = strchr(pcVar17,0x2d);
        uVar5 = uVar4;
        if (pcVar17 != (char *)0x0) {
          strtoul(pcVar17 + 1,(char **)0x0,10);
          uVar5 = FUN_019c1e68();
        }
      }
    }
    else {
      if (*pcVar17 == '[') {
        pcVar9 = strchr(pcVar17,0x5d);
        if (pcVar9 != (char *)0x0) {
          pcVar17 = pcVar17 + 1;
          sVar7 = (long)pcVar9 - (long)pcVar17;
          goto LAB_019f6560;
        }
        goto LAB_019f65bc;
      }
      pcVar9 = strchr(pcVar17,0x3a);
      if ((pcVar9 != (char *)0x0) && (iVar6 = inet_pton(10,pcVar17,local_1f0), iVar6 != 1)) {
        sVar7 = (long)pcVar9 - (long)pcVar17;
LAB_019f6560:
        strncpy(pcVar8,pcVar17,sVar7);
        goto LAB_019f6568;
      }
      strcpy(pcVar8,pcVar17);
      uVar4 = 0;
      uVar5 = 0;
    }
    uVar15 = 0;
    if ((uVar4 & 0xffff) <= (uVar5 & 0xffff)) {
      uVar15 = uVar4;
    }
    uVar20 = 0;
    if ((uVar4 & 0xffff) <= (uVar5 & 0xffff)) {
      uVar20 = uVar5;
    }
    if (*pcVar8 == '\0') goto LAB_019f62b0;
    iVar6 = FUN_019d4488(*(undefined4 *)(param_1[0xc] + 4),(int)param_1[0x15],pcVar8,acStack_5f8,
                         0x401);
    if (iVar6 == 0) {
      bVar19 = 1;
      pcVar17 = pcVar8;
    }
    else {
      if (iVar6 == 1) {
        return 0x1e;
      }
      if (iVar6 != 2) goto LAB_019f62b0;
      bVar19 = 1;
      pcVar17 = acStack_5f8;
    }
  }
  FUN_019c38c0(param_1,pcVar17,0,&local_a00);
  if (local_a00 != (long *)0x0) {
    lVar18 = *local_a00;
    FUN_019c3c58(lVar14);
    if (lVar18 != 0) {
      if (pcVar8 != (char *)0x0) {
        (*(code *)PTR_free_02bf74b0)(pcVar8);
      }
      local_6c[0] = -1;
      while (iVar6 = FUN_019bdea0(param_1,lVar18,0,local_6c), iVar6 != 0) {
        lVar18 = *(long *)(lVar18 + 0x28);
        if (lVar18 == 0) {
          puVar10 = (undefined4 *)__errno();
          uVar11 = FUN_019c1348(param_1,*puVar10);
          FUN_019ca0fc(lVar14,"socket failure: %s",uVar11);
          return 0x1e;
        }
      }
      memcpy(local_1f0,*(void **)(lVar18 + 0x20),(ulong)*(uint *)(lVar18 + 0x10));
      local_1f4 = *(socklen_t *)(lVar18 + 0x10);
      uVar5 = uVar15;
      if ((uVar20 & 0xffff) < (uVar15 & 0xffff)) {
LAB_019f6534:
        FUN_019ca0fc(lVar14,"bind() failed, we ran out of ports!");
      }
      else {
        do {
          while( true ) {
            local_1f0[0].sa_data._0_2_ =
                 (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
            iVar6 = bind(local_6c[0],local_1f0,local_1f4);
            if (iVar6 == 0) {
              local_1f4 = 0x80;
              iVar6 = getsockname(local_6c[0],local_1f0,&local_1f4);
              if (iVar6 != 0) {
                piVar12 = (int *)__errno();
                iVar6 = *piVar12;
                goto LAB_019f664c;
              }
              iVar6 = listen(local_6c[0],1);
              if (iVar6 != 0) {
                puVar10 = (undefined4 *)__errno();
                uVar11 = FUN_019c1348(param_1,*puVar10);
                pcVar17 = "socket failure: %s";
                goto LAB_019f66b8;
              }
              FUN_019c3598(lVar18,local_16c,0x100);
              if (*(char *)((long)param_1 + 0x2f1) == '\0') {
                bVar3 = false;
                if (*(char *)((long)param_1 + 0x2e7) != '\0') {
                  bVar3 = true;
                  *(undefined1 *)((long)param_1 + 0x2f1) = 1;
                }
              }
              else {
                bVar3 = true;
              }
              if (param_2 == 2) goto LAB_019f6748;
              uVar2 = (ushort)local_1f0[0].sa_data._0_2_ >> 8;
              uVar1 = local_1f0[0].sa_data._0_2_ & 0xff;
              goto LAB_019f670c;
            }
            piVar12 = (int *)__errno();
            iVar6 = *piVar12;
            if (iVar6 == 99 && !(bool)(bVar19 ^ 1)) break;
            if ((iVar6 != 0xd) && (iVar6 != 0x62)) {
              uVar11 = FUN_019c1348(param_1);
              FUN_019ca0fc(lVar14,"bind(port=%hu) failed: %s",uVar5 & 0xffff,uVar11);
              goto LAB_019f6544;
            }
            uVar5 = uVar5 + 1;
            if ((uVar20 & 0xffff) < (uVar5 & 0xffff)) goto LAB_019f6534;
          }
          uVar11 = FUN_019c1348(param_1,99);
          FUN_019c9f64(lVar14,"bind(port=%hu) on non-local address failed: %s\n",uVar5 & 0xffff,
                       uVar11);
          local_1f4 = 0x80;
          iVar6 = getsockname((int)param_1[0x3a],local_1f0,&local_1f4);
          bVar19 = 0;
          uVar5 = uVar15;
        } while (iVar6 == 0);
        iVar6 = *piVar12;
LAB_019f664c:
        uVar11 = FUN_019c1348(param_1,iVar6);
        pcVar17 = "getsockname() failed: %s";
LAB_019f66b8:
        FUN_019ca0fc(lVar14,pcVar17,uVar11);
      }
LAB_019f6544:
      FUN_019bd51c(param_1,local_6c[0]);
      return 0x1e;
    }
  }
  pcVar9 = "failed to resolve the address provided to PORT: %s";
LAB_019f63c8:
  FUN_019ca0fc(lVar14,pcVar9,pcVar17);
  if (pcVar8 != (char *)0x0) {
    (*(code *)PTR_free_02bf74b0)(pcVar8);
  }
  return 0x1e;
LAB_019f670c:
  do {
    if ((((param_2 != 0) || (bVar3)) && ((local_1f0[0].sa_family == 2 || (param_2 != 1)))) &&
       ((local_1f0[0].sa_family | 8) == 10)) {
      if (param_2 == 0) {
        uVar16 = 1;
        if (local_1f0[0].sa_family != 2) {
          uVar16 = 2;
        }
        iVar6 = FUN_019e8c44(param_1 + 0xa9,"%s |%d|%s|%hu|",&DAT_01e28e60,uVar16,local_16c);
        if (iVar6 == 0) {
          uVar16 = 0;
          goto LAB_019f674c;
        }
        uVar11 = FUN_019c12d8();
        FUN_019ca0fc(lVar14,"Failure sending EPRT command: %s",uVar11);
        FUN_019bd51c(param_1,local_6c[0]);
        *(undefined4 *)((long)param_1 + 0x5ec) = 1;
        goto LAB_019f6870;
      }
      if (param_2 == 1) {
        pcVar17 = local_16c;
        pcVar8 = local_9f8;
        goto LAB_019f67f8;
      }
    }
    param_2 = param_2 + 1;
  } while (param_2 != 2);
LAB_019f6748:
  uVar16 = 2;
  goto LAB_019f674c;
LAB_019f67f8:
  cVar13 = *pcVar17;
  if (cVar13 == '.') {
    cVar13 = ',';
  }
  else if (cVar13 == '\0') goto code_r0x019f6808;
  *pcVar8 = cVar13;
  pcVar17 = pcVar17 + 1;
  pcVar8 = pcVar8 + 1;
  goto LAB_019f67f8;
code_r0x019f6808:
  *pcVar8 = '\0';
  FUN_019d5bc0(pcVar8,0x14,",%d,%d",uVar1,uVar2);
  iVar6 = FUN_019e8c44(param_1 + 0xa9,"%s %s",&DAT_01e28e65,local_9f8);
  if (iVar6 != 0) {
    uVar11 = FUN_019c12d8();
    FUN_019ca0fc(lVar14,"Failure sending PORT command: %s",uVar11);
    FUN_019bd51c(param_1,local_6c[0]);
LAB_019f6870:
    *(undefined4 *)(param_1 + 0xbf) = 0;
    return iVar6;
  }
  uVar16 = 1;
LAB_019f674c:
  *(undefined4 *)((long)param_1 + 0x5ec) = uVar16;
  if (*(int *)((long)param_1 + 0x1d4) != -1) {
    FUN_019bd51c(param_1);
  }
  *(undefined1 *)((long)param_1 + 0x2ea) = 1;
  *(int *)((long)param_1 + 0x1d4) = local_6c[0];
  *(undefined4 *)(param_1 + 0xbf) = 0x1c;
  return 0;
}




void FUN_019f6888(long *param_1)

{
  int iVar1;
  
  FUN_019c9f64(*param_1,"Failed EPSV attempt. Disabling EPSV\n");
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(*param_1 + 0x8988) = 0;
  iVar1 = FUN_019e8c44(param_1 + 0xa9,"%s",&DAT_01e2952d);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xbf) = 0x1e;
    *(int *)((long)param_1 + 0x5ec) = *(int *)((long)param_1 + 0x5ec) + 1;
  }
  return;
}




int FUN_019f68f4(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_34 [4];
  
  lVar2 = *(long *)(*param_1 + 0x218);
  if (((param_2 & 1) == 0) || (iVar1 = FUN_019f3954(param_1,auStack_34), iVar1 == 0)) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      if ((param_2 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x5d) = 1;
      }
    }
    else {
      FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    iVar1 = 0;
    *(undefined1 *)((long)param_1 + 0x5d9) = 1;
  }
  else if (*(int *)((long)param_1 + 0x1d4) != -1) {
    FUN_019bd51c(param_1);
    *(undefined4 *)((long)param_1 + 0x1d4) = 0xffffffff;
  }
  return iVar1;
}




undefined8 FUN_019f69ac(long *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = '\0';
  FUN_019c9f64(lVar3,"Preparing for accepting server on data port\n");
  FUN_019c4488(lVar3,9);
  lVar1 = FUN_019f6b38(lVar3);
  if (lVar1 < 0) {
    FUN_019ca0fc(lVar3,"Accept timeout occurred while waiting server connect");
    uVar2 = 0xc;
  }
  else {
    uVar2 = FUN_019f6bac(param_1,param_2);
    if ((int)uVar2 == 0) {
      if (*param_2 == '\0') {
        lVar1 = *(long *)(lVar3 + 0x368);
        if (lVar1 < 1) {
          lVar1 = 60000;
        }
        FUN_019be274(lVar3,lVar1);
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_019f6d10(param_1);
        if ((int)uVar2 == 0) {
          uVar2 = FUN_019f6a70(param_1);
          return uVar2;
        }
      }
    }
  }
  return uVar2;
}




undefined8 FUN_019f6a70(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *param_1;
  puVar6 = *(undefined8 **)(lVar5 + 0x218);
  if ((char)param_1[0x46] != '\0') {
    FUN_019c9f64(lVar5,"Doing the SSL/TLS handshake on the data stream\n");
    uVar1 = FUN_019c2b54(param_1,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(int *)((long)param_1 + 0x5fc) == 0x21) {
    *(undefined8 *)*puVar6 = 0;
    FUN_019c4460(lVar5,*(undefined8 *)(lVar5 + 0x8b28));
    uVar4 = *puVar6;
    uVar1 = 0xffffffff;
    lVar5 = -1;
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
    lVar5 = param_1[0xc0];
    uVar2 = *puVar6;
    uVar1 = 1;
    uVar3 = 0xffffffff;
    uVar4 = 0;
  }
  FUN_019d9cd0(param_1,uVar1,lVar5,0,uVar2,uVar3,uVar4);
  *(undefined1 *)(param_1 + 0xad) = 1;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  return 0;
}




long FUN_019f6b38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 local_30 [16];
  
  lVar2 = *(long *)(param_1 + 0x368);
  if (lVar2 < 1) {
    lVar2 = 60000;
  }
  local_30 = FUN_019c338c();
  lVar1 = FUN_019bccd8(param_1,local_30,0);
  if ((lVar1 == 0) || (lVar2 <= lVar1)) {
    lVar1 = FUN_019c33ec(local_30._0_8_,local_30._8_8_,*(undefined8 *)(param_1 + 0x858),
                         *(undefined8 *)(param_1 + 0x860));
    lVar1 = lVar2 - lVar1;
    if (lVar1 == 0) {
      lVar1 = -1;
    }
  }
  return lVar1;
}




undefined4 FUN_019f6bac(undefined8 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int local_4c;
  undefined1 auStack_48 [8];
  
  uVar5 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x3a);
  uVar2 = *(undefined4 *)((long)param_1 + 0x1d4);
  *param_2 = 0;
  lVar4 = FUN_019f6b38(uVar5);
  FUN_019c9f64(uVar5,"Checking for server connect\n");
  if (lVar4 < 0) {
    FUN_019ca0fc(uVar5,"Accept timeout occurred while waiting server connect");
    return 0xc;
  }
  if (((param_1[0xaa] == 0) || ((byte *)param_1[0xa9] == (byte *)0x0)) ||
     (*(byte *)param_1[0xa9] < 0x34)) {
    uVar3 = FUN_019c14c8(uVar1,uVar2,0xffffffff,0);
    if (uVar3 == 0) {
      return 0;
    }
    if (uVar3 != 0xffffffff) {
      if ((uVar3 >> 3 & 1) != 0) {
        FUN_019c9f64(uVar5,"Ready to accept data connection from server\n");
        *param_2 = 1;
        return 0;
      }
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      FUN_019c9f64(uVar5,"Ctrl conn has data while waiting for data conn\n");
      FUN_019f4060(auStack_48,param_1,&local_4c);
      if (399 < local_4c) {
        return 10;
      }
      return 8;
    }
    FUN_019ca0fc(uVar5,"Error while waiting for server connect");
  }
  else {
    FUN_019c9f64(uVar5,"There is negative response in cache while serv connect\n");
    FUN_019f4060(auStack_48,param_1,&local_4c);
  }
  return 10;
}




undefined8 FUN_019f6d10(long *param_1)

{
  int __fd;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  socklen_t local_b4;
  sockaddr asStack_b0 [8];
  
  __fd = *(int *)((long)param_1 + 0x1d4);
  lVar3 = *param_1;
  local_b4 = 0x80;
  iVar1 = getsockname(__fd,asStack_b0,&local_b4);
  if (iVar1 == 0) {
    local_b4 = 0x80;
    iVar1 = accept(__fd,asStack_b0,&local_b4);
    FUN_019bd51c(param_1,__fd);
    if (iVar1 != -1) {
      FUN_019c9f64(lVar3,"Connection accepted from server\n");
      *(int *)((long)param_1 + 0x1d4) = iVar1;
      FUN_019c1e24(iVar1,1);
      *(undefined1 *)((long)param_1 + 0x1e1) = 1;
      if (*(code **)(lVar3 + 0x2f8) == (code *)0x0) {
        return 0;
      }
      uVar2 = (**(code **)(lVar3 + 0x2f8))(*(undefined8 *)(lVar3 + 0x300),iVar1,1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      FUN_019bd51c(param_1,iVar1);
      *(undefined4 *)((long)param_1 + 0x1d4) = 0xffffffff;
      return 0x2a;
    }
  }
  else {
    FUN_019bd51c(param_1,__fd);
  }
  FUN_019ca0fc(lVar3,"Error accept()ing server connect");
  return 0x1e;
}




void FUN_019f6e14(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x80);
    if (0 < iVar2) {
      lVar3 = 0;
      while( true ) {
        if (*(long *)(lVar1 + lVar3 * 8) != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar3 * 8) = 0;
          iVar2 = *(int *)(param_1 + 0x80);
        }
        lVar3 = lVar3 + 1;
        if (iVar2 <= lVar3) break;
        lVar1 = *(long *)(param_1 + 0x78);
      }
      lVar1 = *(long *)(param_1 + 0x78);
    }
    (*(code *)PTR_free_02bf74b0)(lVar1);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}




undefined8 FUN_019f6ec0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  char *__s;
  long lVar11;
  long lVar12;
  long lVar13;
  int local_64;
  
  lVar10 = *param_1;
  plVar1 = param_1 + 0xa9;
  plVar2 = (long *)(lVar10 + 0x8ae8);
  lVar13 = *(long *)(lVar10 + 0x218);
  __s = (char *)*plVar2;
  *(undefined1 *)((long)param_1 + 0x5d9) = 0;
  *(undefined1 *)((long)param_1 + 0x5db) = 0;
  if (*(int *)(lVar10 + 0x4f0) == 3) {
    if (*__s == '\0') {
      *(undefined4 *)(param_1 + 0xb9) = 0;
      goto LAB_019f7048;
    }
    pcVar9 = strrchr(__s,0x2f);
    lVar11 = lVar10;
    if (pcVar9 != (char *)0x0) {
      lVar11 = (*(code *)PTR_calloc_02bf74c8)(1,8);
      param_1[0xb8] = lVar11;
      if (lVar11 == 0) {
        return 0x1b;
      }
      lVar12 = *param_1;
      lVar11 = (long)pcVar9 - (long)__s;
      if (lVar11 == 0) {
        lVar11 = 1;
      }
      uVar5 = FUN_019c1e80(lVar11);
      uVar7 = FUN_019d4834(lVar12,__s,uVar5,0);
      *(undefined8 *)param_1[0xb8] = uVar7;
      if (*(long *)param_1[0xb8] == 0) goto LAB_019f72a4;
      *(undefined4 *)(param_1 + 0xb9) = 1;
      __s = pcVar9 + 1;
      goto LAB_019f7034;
    }
LAB_019f711c:
    lVar11 = FUN_019d4834(lVar11,__s,0,0);
    param_1[0xba] = lVar11;
    if (lVar11 == 0) {
      FUN_019f6e14(plVar1);
      FUN_019ca0fc(lVar10,"no memory");
      return 0x1b;
    }
    uVar8 = FUN_019f7320();
    if ((uVar8 & 1) != 0) {
LAB_019f7140:
      FUN_019f6e14(plVar1);
      return 3;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x4f0) == 2) {
      if (((__s == (char *)0x0) || (*__s == '\0')) || (sVar6 = strlen(__s), __s[sVar6 - 1] == '/'))
      goto LAB_019f7048;
    }
    else {
      param_1[0xb9] = 0x500000000;
      lVar11 = (*(code *)PTR_calloc_02bf74c8)(5,8);
      param_1[0xb8] = lVar11;
      if (lVar11 == 0) {
        return 0x1b;
      }
      iVar3 = FUN_019d9df0(__s,"/");
      if (iVar3 == 0) {
        pcVar9 = strchr(__s,0x2f);
        if (pcVar9 == (char *)0x0) {
          if (__s == (char *)0x0) goto LAB_019f7048;
        }
        else {
          do {
            if ((long)__s - *plVar2 < 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ulong)((int)param_1[0xb9] == 0);
            }
            if ((long)pcVar9 - (long)__s == 0) {
              if ((int)param_1[0xb9] == 0) {
                uVar7 = (*(code *)PTR_strdup_02bf74c0)("/");
                iVar3 = (int)param_1[0xb9];
                *(undefined8 *)(param_1[0xb8] + (long)iVar3 * 8) = uVar7;
                *(int *)(param_1 + 0xb9) = iVar3 + 1;
                if (*(long *)(param_1[0xb8] + (long)iVar3 * 8) == 0) goto LAB_019f7294;
              }
            }
            else {
              uVar5 = FUN_019c1eac(((long)pcVar9 - (long)__s) + uVar8);
              uVar7 = FUN_019d4834(*param_1,(long)__s - uVar8,uVar5,0);
              iVar3 = (int)param_1[0xb9];
              *(undefined8 *)(param_1[0xb8] + (long)iVar3 * 8) = uVar7;
              lVar12 = param_1[0xb8];
              lVar11 = *(long *)(lVar12 + (long)iVar3 * 8);
              if (lVar11 == 0) {
LAB_019f7294:
                FUN_019ca0fc(lVar10,"no memory");
                goto LAB_019f72a4;
              }
              uVar8 = FUN_019f7320(lVar11);
              if ((uVar8 & 1) != 0) {
                (*(code *)PTR_free_02bf74b0)(lVar11);
                goto LAB_019f7140;
              }
              iVar4 = *(int *)((long)param_1 + 0x5cc);
              *(int *)(param_1 + 0xb9) = iVar3 + 1;
              if (iVar4 <= iVar3 + 1) {
                *(int *)((long)param_1 + 0x5cc) = (int)((long)iVar4 << 1);
                lVar11 = (*(code *)PTR_realloc_02bf74b8)(lVar12,(long)iVar4 << 4);
                if (lVar11 == 0) goto LAB_019f72a4;
                param_1[0xb8] = lVar11;
              }
            }
            __s = pcVar9 + 1;
            pcVar9 = strchr(__s,0x2f);
          } while (pcVar9 != (char *)0x0);
        }
      }
      else {
        __s = __s + 1;
        uVar7 = (*(code *)PTR_strdup_02bf74c0)("/");
        *(undefined8 *)param_1[0xb8] = uVar7;
        *(int *)(param_1 + 0xb9) = (int)param_1[0xb9] + 1;
      }
    }
LAB_019f7034:
    if (*__s != '\0') {
      lVar11 = *param_1;
      goto LAB_019f711c;
    }
LAB_019f7048:
    lVar11 = 0;
    param_1[0xba] = 0;
  }
  if (((*(char *)(lVar10 + 0x519) != '\0') && (lVar11 == 0)) && (*(int *)(lVar13 + 0x18) == 0)) {
    FUN_019ca0fc(lVar10,"Uploading to a URL without a file name!");
    return 3;
  }
  *(undefined1 *)((long)param_1 + 0x5da) = 0;
  if (param_1[0xbc] == 0) {
    return 0;
  }
  lVar13 = FUN_019d4834(*param_1,*plVar2,0,&local_64);
  if (lVar13 != 0) {
    iVar3 = 0;
    if ((char *)param_1[0xba] != (char *)0x0) {
      strlen((char *)param_1[0xba]);
      iVar3 = FUN_019c1e80();
    }
    iVar3 = local_64 - iVar3;
    local_64 = iVar3;
    strlen((char *)param_1[0xbc]);
    iVar4 = FUN_019c1e80();
    if ((iVar3 == iVar4) && (iVar3 = FUN_019d9e0c(lVar13,param_1[0xbc],(long)local_64), iVar3 != 0))
    {
      FUN_019c9f64(lVar10,"Request has same path as previous transfer\n");
      *(undefined1 *)((long)param_1 + 0x5da) = 1;
    }
    (*(code *)PTR_free_02bf74b0)(lVar13);
    return 0;
  }
LAB_019f72a4:
  FUN_019f6e14(plVar1);
  return 0x1b;
}

