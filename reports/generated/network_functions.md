# Network Function Decompilation

## `FUN_100617d0c` @ `0x100617d0c`

Size: 144 bytes

Called by: `FUN_100557478` @ `0x100557478`, `FUN_1005d2780` @ `0x1005d2780`

Calls: `_send` @ `0x101149950`, `___error` @ `0x101148dec`

```c

undefined4 FUN_100617d0c(int param_1,void *param_2,uint param_3,int *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  
  *param_4 = 0;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    sVar1 = _send(param_1,param_2,(ulong)param_3,0);
    if (sVar1 == -1) break;
    *param_4 = *param_4 + (int)sVar1;
    param_3 = param_3 - (int)sVar1;
    param_2 = (void *)((long)param_2 + sVar1);
  }
  piVar2 = ___error();
  if (*piVar2 == 0x23) {
    return 0x2d;
  }
  return 0x2b;
}


```

---

### Caller: `FUN_100557478` @ `0x100557478`

```c

undefined8 FUN_100557478(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int local_34;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    uVar7 = 0;
    uVar2 = *(uint *)(param_1 + 0x28);
    do {
      local_34 = 0;
      lVar1 = param_1 + (ulong)uVar2 * 0x20;
      puVar8 = (uint *)(lVar1 + 0x4c);
      uVar3 = *puVar8;
      uVar4 = *(uint *)(lVar1 + 0x48);
      uVar6 = uVar2;
      if (uVar4 != uVar3) {
        uVar5 = FUN_100617d0c(*(undefined8 *)(param_1 + 0x18),*(long *)(lVar1 + 0x40) + (ulong)uVar3
                              ,uVar4 - uVar3,&local_34);
        *puVar8 = *puVar8 + local_34;
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(uint *)(lVar1 + 0x48) = 0;
        *puVar8 = 0;
        uVar6 = *(uint *)(param_1 + 0x28);
      }
      uVar2 = 0;
      if (uVar6 + 1 < 0x20) {
        uVar2 = uVar6 + 1;
      }
      *(uint *)(param_1 + 0x28) = uVar2;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x20);
  }
  return 0;
}


```

---

### Caller: `FUN_1005d2780` @ `0x1005d2780`

```c

ulong FUN_1005d2780(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,char *param_5,
                   short param_6,int *param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined4 uVar23;
  short local_876;
  int local_874;
  undefined1 auStack_870 [4];
  undefined4 local_86c;
  undefined1 local_868 [1024];
  char local_468 [1032];
  
  lVar19 = *(long *)PTR____stack_chk_guard_101444218;
  _sprintf((char *)(param_1 + 0xce),"FMODStudio/%x.%02x.%02x");
  pcVar12 = (char *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x2000,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file_net.cpp"
                                  ,0xde,0,0);
  lVar20 = lVar19;
  if (pcVar12 != (char *)0x0) {
    iVar11 = 0;
    bVar7 = false;
    plVar1 = param_1 + 0x40;
    pcVar2 = pcVar12 + 10;
LAB_1005d288c:
    lVar22 = param_3;
    sVar8 = param_6;
    if (DAT_101dbce18 != 0) {
      lVar22 = DAT_101dbce18;
      sVar8 = DAT_101dbce20;
    }
    uVar13 = FUN_100617810(lVar22,sVar8,1,plVar1);
    if ((int)uVar13 != 0) goto switchD_1005d2cdc_caseD_191;
    uVar15 = param_2;
    if (DAT_101dbce18 == 0) {
      uVar15 = param_4;
    }
    _sprintf(pcVar12,"GET %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: %s\r\nIcy-MetaData:1\r\n");
    if (DAT_101dbce28 != 0) {
      FUN_1005ecd8c(pcVar12,"Proxy-Authorization: Basic ",0x2000);
      FUN_1005ecd8c(pcVar12,DAT_101dbce28,0x2000);
      FUN_1005ecd8c(pcVar12,"\r\n",0x2000);
    }
    if (*param_5 != '\0') {
      FUN_1005ecd8c(pcVar12,"Authorization: Basic ",0x2000);
      FUN_1005ecd8c(pcVar12,param_5,0x2000);
      FUN_1005ecd8c(pcVar12,"\r\n",0x2000);
    }
    if (((int)param_8 != 0) && ((*(uint *)((long)param_1 + 0x1a4) >> 0xd & 1) != 0)) {
      uVar15 = param_8;
      _sprintf(local_468,"Range: bytes=%d-%d\r\n");
      FUN_1005ecd8c(pcVar12,local_468,0x2000);
    }
    FUN_1005ecd8c(pcVar12,"Connection: close\r\n\r\n",0x2000);
    local_86c = 0;
    lVar22 = *plVar1;
    uVar14 = FUN_1005ecb6c(pcVar12);
    uVar13 = FUN_100617d0c(lVar22,pcVar12,uVar14,&local_86c);
    if (((int)uVar13 != 0) || (uVar13 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff), (int)uVar13 != 0))
    goto switchD_1005d2cdc_caseD_191;
    uVar14 = FUN_1005ecb6c(pcVar12);
    uVar13 = FUN_1005d9dac(pcVar12,uVar14,auStack_870,&local_874);
    if ((int)uVar13 != 0) goto switchD_1005d2cdc_caseD_191;
    *(int *)((long)param_1 + 0x20c) = local_874;
    if (local_874 < 500) {
      if (400 < local_874) {
        uVar13 = 0x16;
        uVar21 = 0x19;
        switch(local_874) {
        case 0x191:
          goto switchD_1005d2cdc_caseD_191;
        default:
          goto switchD_1005d2cdc_caseD_192;
        case 0x193:
          goto switchD_1005d2cdc_caseD_193;
        case 0x194:
          uVar21 = 0x12;
          goto switchD_1005d2cdc_caseD_198;
        case 0x197:
          uVar21 = 0x17;
        case 0x198:
          goto switchD_1005d2cdc_caseD_198;
        }
      }
      if (local_874 < 0x12d) {
        if ((local_874 != 200) && (local_874 != 0xce)) goto switchD_1005d2cdc_caseD_192;
        pcVar16 = pcVar12 + 0xc;
        pcVar3 = pcVar12 + 9;
        pcVar4 = pcVar12 + 8;
        goto LAB_1005d2d84;
      }
      if ((local_874 - 0x12dU < 7) && ((1 << (ulong)(local_874 - 0x12dU & 0x1f) & 0x57U) != 0)) {
        bVar6 = false;
        bVar5 = false;
        bVar9 = false;
        if (iVar11 < 0x10) {
          do {
            bVar5 = bVar9;
            iVar10 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff);
            if (iVar10 != 0) break;
            iVar10 = FUN_1005ed180("Location: ",pcVar12,10);
            uVar23 = (undefined4)((ulong)uVar15 >> 0x20);
            if (iVar10 == 0) {
              local_868[0] = 0;
              local_468[0] = '\0';
              local_876 = 0;
              uVar14 = FUN_1005ed180(pcVar2,"http://",7);
              pcVar16 = pcVar2;
              if (((((int)uVar14 != 0) &&
                   (uVar14 = FUN_1005ed180(pcVar2,"https://",8), (int)uVar14 != 0)) &&
                  (uVar14 = FUN_1005ed180(pcVar2,"https:\\\\",8), (int)uVar14 != 0)) &&
                 (uVar14 = FUN_1005ed180(pcVar2,"http:\\\\",7), (int)uVar14 != 0)) {
                builtin_strncpy(pcVar12 + 3,"http://",7);
                pcVar16 = pcVar12 + 3;
              }
              uVar15 = CONCAT44(uVar23,0x3ff);
              FUN_1005d2428(uVar14,pcVar16,local_468,0x3ff,0,0,&local_876,local_868,uVar15,0);
              iVar10 = FUN_1005ecb6c(local_468);
              if (iVar10 != 0) {
                iVar10 = FUN_1005ed12c(local_468,param_3);
                if (iVar10 != 0) {
                  bVar6 = true;
                }
                FUN_1005ecc98(param_3,local_468,0x400);
              }
              iVar10 = FUN_1005ecb6c(local_868);
              if (iVar10 != 0) {
                iVar10 = FUN_1005ed12c(local_868,param_4);
                if (iVar10 != 0) {
                  bVar6 = true;
                }
                FUN_1005ecc98(param_4,local_868,0x400);
              }
              bVar9 = bVar6;
              if (local_876 != param_6) {
                bVar9 = true;
              }
              if (local_876 != 0) {
                bVar6 = bVar9;
                param_6 = local_876;
              }
              iVar11 = iVar11 + 1;
              bVar9 = bVar5;
            }
            else {
              iVar10 = FUN_1005ed180("content-security-policy: sandbox",pcVar12,0x20);
              bVar9 = true;
              if (iVar10 != 0) {
                bVar9 = bVar5;
              }
            }
            bVar5 = bVar9;
            iVar10 = FUN_1005ecb6c(pcVar12);
            bVar9 = bVar5;
          } while (iVar10 != 0);
          if (bVar6) {
            FUN_100617cc0(*plVar1);
            *plVar1 = -1;
            lVar20 = *(long *)PTR____stack_chk_guard_101444218;
            goto LAB_1005d288c;
          }
        }
        uVar18 = 0x15;
        if (bVar5) {
          uVar18 = 0x16;
        }
        lVar20 = *(long *)PTR____stack_chk_guard_101444218;
        uVar21 = (ulong)uVar18;
        goto switchD_1005d2cdc_caseD_198;
      }
    }
    else if (local_874 - 500U < 6) {
      uVar21 = 0x18;
      goto switchD_1005d2cdc_caseD_198;
    }
switchD_1005d2cdc_caseD_192:
    uVar21 = 0x15;
    goto switchD_1005d2cdc_caseD_198;
  }
  uVar21 = 0x26;
  goto LAB_1005d34a4;
switchD_1005d2cdc_caseD_193:
  if (bVar7) goto code_r0x0001005d2cec;
  *(undefined1 *)((long)param_1 + 0x676) = 0;
  *(undefined2 *)((long)param_1 + 0x674) = 0x706d;
  *(undefined4 *)(param_1 + 0xce) = 0x616e6957;
  FUN_100617cc0(*plVar1);
  *plVar1 = -1;
  bVar7 = true;
  goto LAB_1005d288c;
code_r0x0001005d2cec:
  uVar13 = 0x16;
switchD_1005d2cdc_caseD_191:
  uVar21 = uVar13;
  goto switchD_1005d2cdc_caseD_198;
LAB_1005d2d84:
  do {
    iVar11 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff);
    if (iVar11 != 0) break;
    iVar11 = FUN_1005ed0f8("Content-Length:",pcVar12,0xf);
    if (iVar11 == 0) {
      if (param_7 != (int *)0x0) {
        iVar11 = _atoi(pcVar12 + 0xf);
        *param_7 = iVar11;
      }
    }
    else {
      iVar11 = FUN_1005ed0f8("Content-Range: bytes",pcVar12,0x14);
      if (iVar11 != 0) {
        iVar11 = FUN_1005ed0f8("Accept-Ranges: bytes",pcVar12,0x14);
        if (iVar11 == 0) {
          *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) | 0x2000;
        }
        else {
          iVar11 = FUN_1005ed0f8("Transfer-Encoding: chunked",pcVar12,0x1a);
          if (iVar11 == 0) {
            *(undefined1 *)(param_1 + 0x4d) = 1;
          }
          else {
            iVar11 = FUN_1005ed0f8("icy-metaint:",pcVar
// ...truncated...
```

---

## `FUN_100617d9c` @ `0x100617d9c`

Size: 156 bytes

Called by: `FUN_100557190` @ `0x100557190`, `FUN_1005da3e0` @ `0x1005da3e0`, `FUN_1005da374` @ `0x1005da374`

Calls: `_recv` @ `0x101149884`, `___error` @ `0x101148dec`

```c

undefined4 FUN_100617d9c(int param_1,void *param_2,int param_3,int *param_4)

{
  ssize_t sVar1;
  int *piVar2;
  
  *param_4 = 0;
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    sVar1 = _recv(param_1,param_2,(long)param_3,0);
    if (sVar1 == 0) break;
    if (sVar1 == -1) {
      piVar2 = ___error();
      if (*piVar2 == 0x23) {
        return 0x2d;
      }
      return 0x2b;
    }
    *param_4 = *param_4 + (int)sVar1;
    param_3 = param_3 - (int)sVar1;
    param_2 = (void *)((long)param_2 + sVar1);
  }
  return 0x10;
}


```

---

### Caller: `FUN_100557190` @ `0x100557190`

```c

undefined8 FUN_100557190(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  int local_68;
  int local_64;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    puVar11 = *(uint **)(param_1 + 0x430);
    while( true ) {
      uVar7 = 0;
      bVar4 = true;
      while (uVar7 < 0xc) {
        iVar5 = FUN_100617d9c(*(undefined8 *)(param_1 + 0x18),(long)puVar11 + (ulong)uVar7,
                              0xc - uVar7,&local_64);
        if ((iVar5 != 0) && (iVar5 != 0x2d)) goto LAB_100557430;
        uVar7 = local_64 + uVar7;
        if (uVar7 == 0) {
          return 0;
        }
        if (iVar5 == 0x2d) {
          FUN_1005dbaa8(1);
          bVar4 = false;
        }
      }
      uVar7 = *puVar11;
      if (0x100000 < uVar7) break;
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x438);
        if (((int)uVar7 <= iVar5) || (0xfffff < iVar5)) break;
        *(int *)(param_1 + 0x438) = iVar5 << 1;
        puVar11 = (uint *)FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                        *(undefined8 *)(param_1 + 0x430),iVar5 << 1,
                                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                                        ,0x322,0);
        *(uint **)(param_1 + 0x430) = puVar11;
        if (puVar11 == (uint *)0x0) {
          return 0x26;
        }
        uVar7 = *puVar11;
      }
      if (iVar5 < (int)uVar7) {
        return 0x1c;
      }
      uVar12 = 0;
      iVar5 = 1000;
      while( true ) {
        iVar6 = (uVar7 - 0xc) - uVar12;
        if (uVar7 - 0xc < uVar12 || iVar6 == 0) break;
        local_68 = 0;
        iVar6 = FUN_100617d9c(*(undefined8 *)(param_1 + 0x18),(long)puVar11 + (ulong)uVar12 + 0xc,
                              iVar6,&local_68);
        uVar12 = local_68 + uVar12;
        if (iVar6 == 0x2d) {
          FUN_1005dbaa8(1);
          bVar4 = false;
          iVar5 = iVar5 + -1;
        }
        else if ((iVar5 < 2) || (iVar5 = iVar5 + -1, iVar6 != 0)) goto LAB_100557430;
      }
      if ((char)puVar11[2] == '\0') {
        if (*(char *)((long)puVar11 + 9) == '\0') {
          uVar9 = 0;
          cVar3 = *(char *)((long)puVar11 + 0xd);
          iVar5 = *(int *)((long)puVar11 + 0xe);
          pcVar10 = (char *)(param_1 + 0x30);
          do {
            if ((*pcVar10 == (char)puVar11[3]) && (pcVar10[1] == cVar3)) {
              if (iVar5 == 0) {
                *pcVar10 = -1;
              }
              else {
                *(int *)(param_1 + uVar9 * 0x20 + 0x34) = iVar5;
              }
              goto LAB_100557418;
            }
            uVar9 = uVar9 + 1;
            pcVar10 = pcVar10 + 0x20;
          } while (uVar9 < 0x20);
          uVar9 = 0;
          pcVar10 = (char *)(param_1 + 0x30);
          do {
            if (*pcVar10 == -1) {
              *pcVar10 = (char)puVar11[3];
              lVar1 = param_1 + uVar9 * 0x20;
              *(char *)(lVar1 + 0x31) = cVar3;
              *(int *)(lVar1 + 0x34) = iVar5;
              *(undefined8 *)(lVar1 + 0x40) = 0;
              *(undefined8 *)(lVar1 + 0x48) = 0;
              *(undefined8 *)(lVar1 + 0x38) = 0;
              break;
            }
            uVar9 = uVar9 + 1;
            pcVar10 = pcVar10 + 0x20;
          } while (uVar9 < 0x20);
        }
      }
      else {
        plVar13 = (long *)(*(long *)(param_1 + 0x20) + 0x20);
        for (plVar14 = (long *)*plVar13; plVar14 != plVar13; plVar14 = (long *)*plVar14) {
          plVar2 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            plVar2 = plVar14 + -1;
          }
          uVar7 = (**(code **)*plVar2)(plVar2);
          if ((uVar7 == (byte)puVar11[2]) &&
             (uVar8 = (**(code **)(*plVar2 + 0x20))(plVar2,puVar11,param_1), (int)uVar8 != 0)) {
            return uVar8;
          }
        }
      }
LAB_100557418:
      if (!bVar4) {
        return 0;
      }
    }
LAB_100557430:
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
  }
  return 0;
}


```

---

### Caller: `FUN_1005da374` @ `0x1005da374`

```c

void FUN_1005da374(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint local_34;
  
  while( true ) {
    local_34 = 0;
    iVar1 = FUN_100617d9c(param_1,param_2,param_3,&local_34);
    if (iVar1 != 0x2d) break;
    param_2 = param_2 + (ulong)local_34;
    param_3 = (ulong)((int)param_3 - local_34);
    FUN_1005dbaa8(1);
  }
  return;
}


```

---

### Caller: `FUN_1005da3e0` @ `0x1005da3e0`

```c

undefined8 FUN_1005da3e0(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  char local_45;
  uint local_44;
  
  uVar1 = 0x1f;
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    uVar4 = 0;
    *param_2 = 0;
    while ((uint)uVar4 < param_3 - 1U) {
      local_45 = '\0';
      pcVar2 = &local_45;
      iVar3 = 1;
      while( true ) {
        local_44 = 0;
        uVar1 = FUN_100617d9c(param_1,pcVar2,iVar3,&local_44);
        if ((int)uVar1 != 0x2d) break;
        pcVar2 = pcVar2 + local_44;
        iVar3 = iVar3 - local_44;
        FUN_1005dbaa8(1);
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (local_45 != '\r') {
        if (local_45 == '\n') break;
        param_2[uVar4] = local_45;
        uVar4 = (ulong)((uint)uVar4 + 1);
      }
    }
    uVar1 = 0;
    param_2[uVar4] = 0;
  }
  return uVar1;
}


```

---

## `FUN_100617810` @ `0x100617810`

Size: 660 bytes

Called by: `FUN_100555f30` @ `0x100555f30`, `FUN_1005d2780` @ `0x1005d2780`

Calls: `_sprintf` @ `0x101149a04`, `_getaddrinfo` @ `0x101149284`, `_socket` @ `0x1011499ec`, `_fcntl` @ `0x101149164`, `FUN_10061768c` @ `0x10061768c`, `_connect` @ `0x101148fcc`, `___error` @ `0x101148dec`, `_memset` @ `0x101149464`, `_select` @ `0x1011498cc`, `_close` @ `0x101148fb4`, `_freeaddrinfo` @ `0x101149224`, `_getsockopt` @ `0x1011492f0`

```c

undefined8 FUN_100617810(char *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  socklen_t local_120;
  int local_11c;
  timeval local_118;
  fd_set afStack_108 [32];
  char local_88 [8];
  addrinfo local_80;
  uint local_50;
  addrinfo *local_48;
  
  local_80.ai_addr = (sockaddr *)0x0;
  local_80.ai_next = (addrinfo *)0x0;
  local_80.ai_canonname = (char *)0x0;
  local_50 = 0xffffffff;
  local_48 = (addrinfo *)0x0;
  local_80.ai_addrlen = 0;
  local_80._20_4_ = 0;
  local_80.ai_socktype = 1;
  local_80.ai_protocol = 0;
  local_80.ai_flags = 0x1000;
  local_80.ai_family = 0;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  _sprintf(local_88,"%d");
  iVar1 = _getaddrinfo(param_1,local_88,&local_80,&local_48);
  if (iVar1 == 0) {
    uVar2 = _socket(local_48->ai_family,local_48->ai_socktype,local_48->ai_protocol);
    local_50 = uVar2;
    if (uVar2 == 0xffffffff) {
      uVar5 = 0x2b;
    }
    else {
      iVar1 = _fcntl(uVar2,3);
      if (iVar1 == -1) {
        uVar5 = 0x2b;
      }
      else {
        iVar1 = _fcntl(uVar2,4);
        if (iVar1 == -1) {
          uVar5 = 0x2b;
        }
        else {
          uVar5 = FUN_10061768c(local_50);
          if ((int)uVar5 == 0) {
            iVar1 = _connect(local_50,local_48->ai_addr,local_48->ai_addrlen);
            if (((iVar1 == -1) && (piVar3 = ___error(), *piVar3 != 0x23)) &&
               (piVar3 = ___error(), *piVar3 != 0x24)) {
              uVar5 = 0x2a;
            }
            else {
              _memset(afStack_108,0,0x80);
              uVar2 = local_50;
              uVar4 = (ulong)(long)(int)local_50 >> 3 & 0x1ffffffffffffffc;
              *(uint *)(&afStack_108[0].field_0x0 + uVar4) =
                   1 << (ulong)(local_50 & 0x1f) | *(uint *)(&afStack_108[0].field_0x0 + uVar4);
              local_118.tv_sec = (__darwin_time_t)(DAT_10186d988 / 1000);
              local_118.tv_usec = (DAT_10186d988 % 1000) * 1000;
              iVar1 = _select(uVar2 + 1,(fd_set *)0x0,afStack_108,(fd_set *)0x0,&local_118);
              if (iVar1 == 0) {
                uVar5 = 0x2a;
              }
              else if (iVar1 == -1) {
                uVar5 = 0x2b;
              }
              else {
                local_11c = 0;
                local_120 = 4;
                iVar1 = _getsockopt(local_50,0xffff,0x1007,&local_11c,&local_120);
                if (iVar1 == -1) {
                  uVar5 = 0x2b;
                }
                else if (local_11c == 0) {
                  uVar5 = 0;
                  *param_4 = (long)(int)local_50;
                  local_50 = 0xffffffff;
                }
                else {
                  uVar5 = 0x2a;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar5 = 0x2c;
  }
  if (local_50 != 0xffffffff) {
    _close();
  }
  if (local_48 != (addrinfo *)0x0) {
    _freeaddrinfo(local_48);
  }
  return uVar5;
}


```

---

### Caller: `FUN_100555f30` @ `0x100555f30`

```c

undefined8 FUN_100555f30(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long local_38;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    iVar1 = 0x2430;
    if (param_2 != 0) {
      iVar1 = param_2;
    }
    local_38 = 0;
    uVar3 = FUN_100617810(param_3,iVar1,1,&local_38);
    if ((int)uVar3 == 0) {
      plVar4 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x440,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                                     ,0x5a,0,0);
      *plVar4 = (long)plVar4;
      plVar4[1] = (long)plVar4;
      plVar4[2] = 0;
      *(undefined4 *)((long)plVar4 + 0x2c) = 0;
      plVar4[3] = -1;
      plVar4[4] = 0;
      *(undefined4 *)(plVar4 + 5) = 0;
      _bzero(plVar4 + 6,0x40c);
      *(undefined1 *)(plVar4 + 6) = 0xff;
      *(undefined1 *)(plVar4 + 10) = 0xff;
      *(undefined1 *)(plVar4 + 0xe) = 0xff;
      *(undefined1 *)(plVar4 + 0x12) = 0xff;
      *(undefined1 *)(plVar4 + 0x16) = 0xff;
      *(undefined1 *)(plVar4 + 0x1a) = 0xff;
      *(undefined1 *)(plVar4 + 0x1e) = 0xff;
      *(undefined1 *)(plVar4 + 0x22) = 0xff;
      *(undefined1 *)(plVar4 + 0x26) = 0xff;
      *(undefined1 *)(plVar4 + 0x2a) = 0xff;
      *(undefined1 *)(plVar4 + 0x2e) = 0xff;
      *(undefined1 *)(plVar4 + 0x32) = 0xff;
      *(undefined1 *)(plVar4 + 0x36) = 0xff;
      *(undefined1 *)(plVar4 + 0x3a) = 0xff;
      *(undefined1 *)(plVar4 + 0x3e) = 0xff;
      *(undefined1 *)(plVar4 + 0x42) = 0xff;
      *(undefined1 *)(plVar4 + 0x46) = 0xff;
      *(undefined1 *)(plVar4 + 0x4a) = 0xff;
      *(undefined1 *)(plVar4 + 0x4e) = 0xff;
      *(undefined1 *)(plVar4 + 0x52) = 0xff;
      *(undefined1 *)(plVar4 + 0x56) = 0xff;
      *(undefined1 *)(plVar4 + 0x5a) = 0xff;
      *(undefined1 *)(plVar4 + 0x5e) = 0xff;
      *(undefined1 *)(plVar4 + 0x62) = 0xff;
      *(undefined1 *)(plVar4 + 0x66) = 0xff;
      *(undefined1 *)(plVar4 + 0x6a) = 0xff;
      *(undefined1 *)(plVar4 + 0x6e) = 0xff;
      *(undefined1 *)(plVar4 + 0x72) = 0xff;
      *(undefined1 *)(plVar4 + 0x76) = 0xff;
      *(undefined1 *)(plVar4 + 0x7a) = 0xff;
      *(undefined1 *)(plVar4 + 0x7e) = 0xff;
      *(undefined1 *)(plVar4 + 0x82) = 0xff;
      if (plVar4 == (long *)0x0) {
        uVar3 = 0x26;
      }
      else {
        plVar4[3] = local_38;
        plVar4[4] = param_1;
        *(undefined4 *)(plVar4 + 0x87) = 0x1000;
        lVar5 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x1000,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                              ,0x1ff,0,0);
        plVar4[0x86] = lVar5;
        if (lVar5 == 0) {
          uVar3 = 0x26;
        }
        else {
          uVar6 = 0;
          pcVar7 = (char *)((long)plVar4 + 0x31);
          do {
            if ((pcVar7[-1] == '\0') && (*pcVar7 == '\0')) {
              *(undefined4 *)((long)plVar4 + uVar6 * 0x20 + 0x34) = 0xffffffff;
              goto LAB_100556124;
            }
            uVar6 = uVar6 + 1;
            pcVar7 = pcVar7 + 0x20;
          } while (uVar6 < 0x20);
          uVar6 = 0;
          plVar8 = plVar4 + 6;
          do {
            if ((char)*plVar8 == -1) {
              *(undefined1 *)plVar8 = 0;
              *(undefined1 *)((long)plVar4 + uVar6 * 0x20 + 0x31) = 0;
              *(undefined4 *)((long)plVar4 + uVar6 * 0x20 + 0x34) = 0xffffffff;
              plVar4[uVar6 * 4 + 8] = 0;
              plVar4[uVar6 * 4 + 9] = 0;
              plVar4[uVar6 * 4 + 7] = 0;
              break;
            }
            uVar6 = uVar6 + 1;
            plVar8 = plVar8 + 4;
          } while (uVar6 < 0x20);
LAB_100556124:
          lVar5 = *(long *)(param_1 + 0x10);
          *plVar4 = param_1 + 8;
          plVar4[1] = lVar5;
          *(long **)(param_1 + 0x10) = plVar4;
          *(long **)plVar4[1] = plVar4;
          plVar8 = (long *)(param_1 + 0x20);
          do {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)(param_1 + 0x20)) {
              return 0;
            }
            plVar2 = (long *)0x0;
            if (plVar8 != (long *)0x0) {
              plVar2 = plVar8 + -1;
            }
            uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,plVar4);
          } while ((int)uVar3 == 0);
        }
      }
    }
  }
  else {
    uVar3 = 0x1c;
  }
  return uVar3;
}


```

---

### Caller: `FUN_1005d2780` @ `0x1005d2780`

```c

ulong FUN_1005d2780(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,char *param_5,
                   short param_6,int *param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined4 uVar23;
  short local_876;
  int local_874;
  undefined1 auStack_870 [4];
  undefined4 local_86c;
  undefined1 local_868 [1024];
  char local_468 [1032];
  
  lVar19 = *(long *)PTR____stack_chk_guard_101444218;
  _sprintf((char *)(param_1 + 0xce),"FMODStudio/%x.%02x.%02x");
  pcVar12 = (char *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x2000,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file_net.cpp"
                                  ,0xde,0,0);
  lVar20 = lVar19;
  if (pcVar12 != (char *)0x0) {
    iVar11 = 0;
    bVar7 = false;
    plVar1 = param_1 + 0x40;
    pcVar2 = pcVar12 + 10;
LAB_1005d288c:
    lVar22 = param_3;
    sVar8 = param_6;
    if (DAT_101dbce18 != 0) {
      lVar22 = DAT_101dbce18;
      sVar8 = DAT_101dbce20;
    }
    uVar13 = FUN_100617810(lVar22,sVar8,1,plVar1);
    if ((int)uVar13 != 0) goto switchD_1005d2cdc_caseD_191;
    uVar15 = param_2;
    if (DAT_101dbce18 == 0) {
      uVar15 = param_4;
    }
    _sprintf(pcVar12,"GET %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: %s\r\nIcy-MetaData:1\r\n");
    if (DAT_101dbce28 != 0) {
      FUN_1005ecd8c(pcVar12,"Proxy-Authorization: Basic ",0x2000);
      FUN_1005ecd8c(pcVar12,DAT_101dbce28,0x2000);
      FUN_1005ecd8c(pcVar12,"\r\n",0x2000);
    }
    if (*param_5 != '\0') {
      FUN_1005ecd8c(pcVar12,"Authorization: Basic ",0x2000);
      FUN_1005ecd8c(pcVar12,param_5,0x2000);
      FUN_1005ecd8c(pcVar12,"\r\n",0x2000);
    }
    if (((int)param_8 != 0) && ((*(uint *)((long)param_1 + 0x1a4) >> 0xd & 1) != 0)) {
      uVar15 = param_8;
      _sprintf(local_468,"Range: bytes=%d-%d\r\n");
      FUN_1005ecd8c(pcVar12,local_468,0x2000);
    }
    FUN_1005ecd8c(pcVar12,"Connection: close\r\n\r\n",0x2000);
    local_86c = 0;
    lVar22 = *plVar1;
    uVar14 = FUN_1005ecb6c(pcVar12);
    uVar13 = FUN_100617d0c(lVar22,pcVar12,uVar14,&local_86c);
    if (((int)uVar13 != 0) || (uVar13 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff), (int)uVar13 != 0))
    goto switchD_1005d2cdc_caseD_191;
    uVar14 = FUN_1005ecb6c(pcVar12);
    uVar13 = FUN_1005d9dac(pcVar12,uVar14,auStack_870,&local_874);
    if ((int)uVar13 != 0) goto switchD_1005d2cdc_caseD_191;
    *(int *)((long)param_1 + 0x20c) = local_874;
    if (local_874 < 500) {
      if (400 < local_874) {
        uVar13 = 0x16;
        uVar21 = 0x19;
        switch(local_874) {
        case 0x191:
          goto switchD_1005d2cdc_caseD_191;
        default:
          goto switchD_1005d2cdc_caseD_192;
        case 0x193:
          goto switchD_1005d2cdc_caseD_193;
        case 0x194:
          uVar21 = 0x12;
          goto switchD_1005d2cdc_caseD_198;
        case 0x197:
          uVar21 = 0x17;
        case 0x198:
          goto switchD_1005d2cdc_caseD_198;
        }
      }
      if (local_874 < 0x12d) {
        if ((local_874 != 200) && (local_874 != 0xce)) goto switchD_1005d2cdc_caseD_192;
        pcVar16 = pcVar12 + 0xc;
        pcVar3 = pcVar12 + 9;
        pcVar4 = pcVar12 + 8;
        goto LAB_1005d2d84;
      }
      if ((local_874 - 0x12dU < 7) && ((1 << (ulong)(local_874 - 0x12dU & 0x1f) & 0x57U) != 0)) {
        bVar6 = false;
        bVar5 = false;
        bVar9 = false;
        if (iVar11 < 0x10) {
          do {
            bVar5 = bVar9;
            iVar10 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff);
            if (iVar10 != 0) break;
            iVar10 = FUN_1005ed180("Location: ",pcVar12,10);
            uVar23 = (undefined4)((ulong)uVar15 >> 0x20);
            if (iVar10 == 0) {
              local_868[0] = 0;
              local_468[0] = '\0';
              local_876 = 0;
              uVar14 = FUN_1005ed180(pcVar2,"http://",7);
              pcVar16 = pcVar2;
              if (((((int)uVar14 != 0) &&
                   (uVar14 = FUN_1005ed180(pcVar2,"https://",8), (int)uVar14 != 0)) &&
                  (uVar14 = FUN_1005ed180(pcVar2,"https:\\\\",8), (int)uVar14 != 0)) &&
                 (uVar14 = FUN_1005ed180(pcVar2,"http:\\\\",7), (int)uVar14 != 0)) {
                builtin_strncpy(pcVar12 + 3,"http://",7);
                pcVar16 = pcVar12 + 3;
              }
              uVar15 = CONCAT44(uVar23,0x3ff);
              FUN_1005d2428(uVar14,pcVar16,local_468,0x3ff,0,0,&local_876,local_868,uVar15,0);
              iVar10 = FUN_1005ecb6c(local_468);
              if (iVar10 != 0) {
                iVar10 = FUN_1005ed12c(local_468,param_3);
                if (iVar10 != 0) {
                  bVar6 = true;
                }
                FUN_1005ecc98(param_3,local_468,0x400);
              }
              iVar10 = FUN_1005ecb6c(local_868);
              if (iVar10 != 0) {
                iVar10 = FUN_1005ed12c(local_868,param_4);
                if (iVar10 != 0) {
                  bVar6 = true;
                }
                FUN_1005ecc98(param_4,local_868,0x400);
              }
              bVar9 = bVar6;
              if (local_876 != param_6) {
                bVar9 = true;
              }
              if (local_876 != 0) {
                bVar6 = bVar9;
                param_6 = local_876;
              }
              iVar11 = iVar11 + 1;
              bVar9 = bVar5;
            }
            else {
              iVar10 = FUN_1005ed180("content-security-policy: sandbox",pcVar12,0x20);
              bVar9 = true;
              if (iVar10 != 0) {
                bVar9 = bVar5;
              }
            }
            bVar5 = bVar9;
            iVar10 = FUN_1005ecb6c(pcVar12);
            bVar9 = bVar5;
          } while (iVar10 != 0);
          if (bVar6) {
            FUN_100617cc0(*plVar1);
            *plVar1 = -1;
            lVar20 = *(long *)PTR____stack_chk_guard_101444218;
            goto LAB_1005d288c;
          }
        }
        uVar18 = 0x15;
        if (bVar5) {
          uVar18 = 0x16;
        }
        lVar20 = *(long *)PTR____stack_chk_guard_101444218;
        uVar21 = (ulong)uVar18;
        goto switchD_1005d2cdc_caseD_198;
      }
    }
    else if (local_874 - 500U < 6) {
      uVar21 = 0x18;
      goto switchD_1005d2cdc_caseD_198;
    }
switchD_1005d2cdc_caseD_192:
    uVar21 = 0x15;
    goto switchD_1005d2cdc_caseD_198;
  }
  uVar21 = 0x26;
  goto LAB_1005d34a4;
switchD_1005d2cdc_caseD_193:
  if (bVar7) goto code_r0x0001005d2cec;
  *(undefined1 *)((long)param_1 + 0x676) = 0;
  *(undefined2 *)((long)param_1 + 0x674) = 0x706d;
  *(undefined4 *)(param_1 + 0xce) = 0x616e6957;
  FUN_100617cc0(*plVar1);
  *plVar1 = -1;
  bVar7 = true;
  goto LAB_1005d288c;
code_r0x0001005d2cec:
  uVar13 = 0x16;
switchD_1005d2cdc_caseD_191:
  uVar21 = uVar13;
  goto switchD_1005d2cdc_caseD_198;
LAB_1005d2d84:
  do {
    iVar11 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff);
    if (iVar11 != 0) break;
    iVar11 = FUN_1005ed0f8("Content-Length:",pcVar12,0xf);
    if (iVar11 == 0) {
      if (param_7 != (int *)0x0) {
        iVar11 = _atoi(pcVar12 + 0xf);
        *param_7 = iVar11;
      }
    }
    else {
      iVar11 = FUN_1005ed0f8("Content-Range: bytes",pcVar12,0x14);
      if (iVar11 != 0) {
        iVar11 = FUN_1005ed0f8("Accept-Ranges: bytes",pcVar12,0x14);
        if (iVar11 == 0) {
          *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) | 0x2000;
        }
        else {
          iVar11 = FUN_1005ed0f8("Transfer-Encoding: chunked",pcVar12,0x1a);
          if (iVar11 == 0) {
            *(undefined1 *)(param_1 + 0x4d) = 1;
          }
          else {
            iVar11 = FUN_1005ed0f8("icy-metaint:",pcVar
// ...truncated...
```

---

## `FUN_100617aa4` @ `0x100617aa4`

Size: 352 bytes

Called by: `FUN_1005566d0` @ `0x1005566d0`

Calls: `_socket` @ `0x1011499ec`, `_fcntl` @ `0x101149164`, `_setsockopt` @ `0x101149980`, `_bind` @ `0x101148f24`, `_listen` @ `0x101149398`, `___stack_chk_fail` @ `0x101148e40`

```c

void FUN_100617aa4(uint param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_5c;
  sockaddr local_58;
  long local_48;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar4;
  iVar1 = _socket(2,1,0);
  if (iVar1 == -1) {
    uVar3 = 0x2b;
  }
  else {
    iVar2 = _fcntl(iVar1,3);
    if (iVar2 == -1) {
      uVar3 = 0x2b;
    }
    else {
      iVar2 = _fcntl(iVar1,4);
      if (iVar2 == -1) {
        uVar3 = 0x2b;
      }
      else {
        local_5c = 1;
        iVar2 = _setsockopt(iVar1,0xffff,4,&local_5c,4);
        if (iVar2 == -1) {
          uVar3 = 0x2b;
        }
        else {
          local_58.sa_data[6] = '\0';
          local_58.sa_data[7] = '\0';
          local_58.sa_data[8] = '\0';
          local_58.sa_data[9] = '\0';
          local_58.sa_data[10] = '\0';
          local_58.sa_data[0xb] = '\0';
          local_58.sa_data[0xc] = '\0';
          local_58.sa_data[0xd] = '\0';
          local_58.sa_data._0_2_ = (ushort)(param_1 >> 8) & 0xff | (ushort)((param_1 & 0xffff) << 8)
          ;
          local_58._0_2_ = 0x200;
          local_58.sa_data._2_4_ = 0;
          iVar2 = _bind(iVar1,&local_58,0x10);
          if (iVar2 == -1) {
            uVar3 = 0x2b;
          }
          else {
            iVar2 = _listen(iVar1,3);
            if (iVar2 == -1) {
              uVar3 = 0x2b;
            }
            else {
              uVar3 = 0;
              *param_3 = (long)iVar1;
            }
          }
        }
      }
    }
  }
  if (lVar4 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}


```

---

### Caller: `FUN_1005566d0` @ `0x1005566d0`

```c

undefined8 FUN_1005566d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_60;
  undefined4 local_58;
  undefined2 local_50 [2];
  int local_4c;
  undefined8 local_48;
  
  if (*(char *)((long)param_1 + 0x44) != '\0') {
    lVar4 = *param_1;
    if (lVar4 == -1) {
      uVar5 = FUN_100617aa4(*(undefined2 *)((long)param_1 + 0x46),1,param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar4 = *param_1;
    }
    local_48 = 0;
    iVar3 = FUN_100617c04(lVar4,1,&local_48);
    if (iVar3 != 0x2d) {
      if (iVar3 == 0) {
        puVar6 = (undefined8 *)
                 FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x440,
                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                               ,0x100,0,0);
        *puVar6 = puVar6;
        puVar6[1] = puVar6;
        puVar6[2] = 0;
        *(undefined4 *)((long)puVar6 + 0x2c) = 0;
        puVar6[3] = 0xffffffffffffffff;
        puVar6[4] = 0;
        *(undefined4 *)(puVar6 + 5) = 0;
        _bzero(puVar6 + 6,0x40c);
        *(undefined1 *)(puVar6 + 6) = 0xff;
        *(undefined1 *)(puVar6 + 10) = 0xff;
        *(undefined1 *)(puVar6 + 0xe) = 0xff;
        *(undefined1 *)(puVar6 + 0x12) = 0xff;
        *(undefined1 *)(puVar6 + 0x16) = 0xff;
        *(undefined1 *)(puVar6 + 0x1a) = 0xff;
        *(undefined1 *)(puVar6 + 0x1e) = 0xff;
        *(undefined1 *)(puVar6 + 0x22) = 0xff;
        *(undefined1 *)(puVar6 + 0x26) = 0xff;
        *(undefined1 *)(puVar6 + 0x2a) = 0xff;
        *(undefined1 *)(puVar6 + 0x2e) = 0xff;
        *(undefined1 *)(puVar6 + 0x32) = 0xff;
        *(undefined1 *)(puVar6 + 0x36) = 0xff;
        *(undefined1 *)(puVar6 + 0x3a) = 0xff;
        *(undefined1 *)(puVar6 + 0x3e) = 0xff;
        *(undefined1 *)(puVar6 + 0x42) = 0xff;
        *(undefined1 *)(puVar6 + 0x46) = 0xff;
        *(undefined1 *)(puVar6 + 0x4a) = 0xff;
        *(undefined1 *)(puVar6 + 0x4e) = 0xff;
        *(undefined1 *)(puVar6 + 0x52) = 0xff;
        *(undefined1 *)(puVar6 + 0x56) = 0xff;
        *(undefined1 *)(puVar6 + 0x5a) = 0xff;
        *(undefined1 *)(puVar6 + 0x5e) = 0xff;
        *(undefined1 *)(puVar6 + 0x62) = 0xff;
        *(undefined1 *)(puVar6 + 0x66) = 0xff;
        *(undefined1 *)(puVar6 + 0x6a) = 0xff;
        *(undefined1 *)(puVar6 + 0x6e) = 0xff;
        *(undefined1 *)(puVar6 + 0x72) = 0xff;
        *(undefined1 *)(puVar6 + 0x76) = 0xff;
        *(undefined1 *)(puVar6 + 0x7a) = 0xff;
        *(undefined1 *)(puVar6 + 0x7e) = 0xff;
        *(undefined1 *)(puVar6 + 0x82) = 0xff;
        if (puVar6 == (undefined8 *)0x0) {
          return 0x26;
        }
        puVar6[3] = local_48;
        puVar6[4] = param_1;
        *(undefined4 *)(puVar6 + 0x87) = 0x1000;
        lVar4 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x1000,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_profile.cpp"
                              ,0x1ff,0,0);
        puVar6[0x86] = lVar4;
        if (lVar4 == 0) {
          return 0x26;
        }
        uVar7 = 0;
        pcVar8 = (char *)((long)puVar6 + 0x31);
        do {
          if ((pcVar8[-1] == '\0') && (*pcVar8 == '\0')) {
            *(undefined4 *)((long)puVar6 + uVar7 * 0x20 + 0x34) = 0xffffffff;
            goto LAB_1005568ec;
          }
          uVar7 = uVar7 + 1;
          pcVar8 = pcVar8 + 0x20;
        } while (uVar7 < 0x20);
        uVar7 = 0;
        pcVar8 = (char *)(puVar6 + 6);
        do {
          if (*pcVar8 == -1) {
            *pcVar8 = '\0';
            *(undefined1 *)((long)puVar6 + uVar7 * 0x20 + 0x31) = 0;
            *(undefined4 *)((long)puVar6 + uVar7 * 0x20 + 0x34) = 0xffffffff;
            puVar6[uVar7 * 4 + 8] = 0;
            puVar6[uVar7 * 4 + 9] = 0;
            puVar6[uVar7 * 4 + 7] = 0;
            break;
          }
          uVar7 = uVar7 + 1;
          pcVar8 = pcVar8 + 0x20;
        } while (uVar7 < 0x20);
LAB_1005568ec:
        FUN_1005dbee4(param_1[7]);
        lVar4 = param_1[2];
        *puVar6 = param_1 + 1;
        puVar6[1] = lVar4;
        param_1[2] = (long)puVar6;
        *(undefined8 **)puVar6[1] = puVar6;
        FUN_1005dbf14(param_1[7]);
        plVar9 = param_1 + 4;
        while (plVar9 = (long *)*plVar9, plVar9 != param_1 + 4) {
          plVar10 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + -1;
          }
          uVar5 = (**(code **)(*plVar10 + 0x28))(plVar10,puVar6);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
      }
      else {
        FUN_100617cc0(*param_1);
        *param_1 = -1;
      }
    }
  }
  local_4c = 0;
  uVar5 = FUN_1005dba24(&local_4c);
  if ((int)uVar5 == 0) {
    local_4c = local_4c - (int)param_1[8];
    plVar9 = param_1 + 4;
    for (plVar10 = (long *)*plVar9; plVar10 != plVar9; plVar10 = (long *)*plVar10) {
      plVar1 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + -1;
      }
      local_50[0] = 0;
      while( true ) {
        uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,local_50);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (((char)local_50[0] == -1) ||
           (iVar3 = FUN_1005564b0(param_1,local_50,local_4c), iVar3 == 0)) break;
        local_58 = 0;
        local_60 = param_1;
        uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_60);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
      }
    }
    FUN_1005dbee4(param_1[7]);
    plVar10 = (long *)param_1[1];
    while (plVar1 = plVar10, plVar1 != param_1 + 1) {
      plVar10 = (long *)*plVar1;
      uVar5 = FUN_100557190(plVar1);
      if ((int)uVar5 != 0) {
LAB_100556ab0:
        *(uint *)((long)plVar1 + 0x2c) = *(uint *)((long)plVar1 + 0x2c) | 1;
        return uVar5;
      }
      uVar5 = FUN_100557478(plVar1);
      if (((int)uVar5 != 0) && ((int)uVar5 != 0x2d)) goto LAB_100556ab0;
      if ((*(byte *)((long)plVar1 + 0x2c) & 1) != 0) {
        for (plVar11 = (long *)*plVar9; plVar11 != plVar9; plVar11 = (long *)*plVar11) {
          plVar2 = (long *)0x0;
          if (plVar11 != (long *)0x0) {
            plVar2 = plVar11 + -1;
          }
          uVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        plVar11 = (long *)plVar1[1];
        *plVar11 = *plVar1;
        *(long **)(*plVar1 + 8) = plVar11;
        *plVar1 = (long)plVar1;
        plVar1[1] = (long)plVar1;
        FUN_1005563fc(plVar1);
      }
    }
    FUN_1005dbf14(param_1[7]);
    uVar5 = 0;
  }
  return uVar5;
}


```

---

## `FUN_10052019c` @ `0x10052019c`

Size: 1456 bytes

Calls: `_select` @ `0x1011498cc`, `___darwin_check_fd_set_overflow` @ `0x101148de0`, `FUN_100520ec8` @ `0x100520ec8`, `_recv` @ `0x101149884`, `___error` @ `0x101148dec`, `_close` @ `0x101148fb4`, `_fputs` @ `0x101149200`, `_send` @ `0x101149950`, `_memmove` @ `0x101149458`, `_fprintf` @ `0x1011491e8`, `_sscanf` @ `0x101149bf0`, `_fwrite` @ `0x10114926c`, `___stack_chk_fail` @ `0x101148e40`

```c

void FUN_10052019c(long *param_1,uint param_2)

{
  long *plVar1;
  timeval *ptVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ssize_t sVar8;
  long *plVar9;
  size_t sVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  void *pvVar18;
  int iVar19;
  timeval local_200;
  ulong local_1f0 [16];
  timeval local_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long local_70;
  
  puVar4 = PTR____darwin_check_fd_set_overflow_101444200;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(int *)((long)param_1 + 0x54) == 1) {
    plVar9 = param_1;
    if (0 < (int)param_2) {
      local_170.tv_sec = (ulong)param_2 / 1000;
      local_170.tv_usec = (param_2 % 1000) * 1000;
      uVar5 = _select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,&local_170);
      plVar9 = (long *)(ulong)uVar5;
    }
  }
  else {
    if (param_2 != 0) {
      local_200.tv_sec = (__darwin_time_t)((int)param_2 / 1000);
      local_200.tv_usec = ((int)param_2 % 1000) * 1000;
      local_170.tv_usec = 0;
      local_170._12_4_ = 0;
      local_170.tv_sec = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_1f0[1] = 0;
      local_1f0[0] = 0;
      local_1f0[3] = 0;
      local_1f0[2] = 0;
      local_1f0[5] = 0;
      local_1f0[4] = 0;
      local_1f0[7] = 0;
      local_1f0[6] = 0;
      local_1f0[9] = 0;
      local_1f0[8] = 0;
      local_1f0[0xb] = 0;
      local_1f0[10] = 0;
      local_1f0[0xd] = 0;
      local_1f0[0xc] = 0;
      local_1f0[0xf] = 0;
      local_1f0[0xe] = 0;
      uVar5 = *(uint *)(param_1 + 10);
      if ((PTR____darwin_check_fd_set_overflow_101444200 == (undefined *)0x0) ||
         (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,&local_170,0), iVar6 != 0)) {
        uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
        *(uint *)((long)&local_170.tv_sec + uVar13) =
             *(uint *)((long)&local_170.tv_sec + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
      }
      if (param_1[5] != param_1[4]) {
        uVar5 = *(uint *)(param_1 + 10);
        if ((puVar4 == (undefined *)0x0) ||
           (iVar6 = ___darwin_check_fd_set_overflow((long)(int)uVar5,local_1f0,0), iVar6 != 0)) {
          uVar13 = (ulong)(long)(int)uVar5 >> 3 & 0x1ffffffffffffffc;
          *(uint *)((long)local_1f0 + uVar13) =
               *(uint *)((long)local_1f0 + uVar13) | 1 << (ulong)(uVar5 & 0x1f);
        }
      }
      ptVar2 = &local_200;
      if ((int)param_2 < 1) {
        ptVar2 = (timeval *)0x0;
      }
      _select((int)param_1[10] + 1,(fd_set *)&local_170,(fd_set *)local_1f0,(fd_set *)0x0,ptVar2);
    }
    plVar1 = param_1 + 1;
    while( true ) {
      lVar12 = param_1[1];
      uVar17 = param_1[2] - lVar12;
      uVar13 = (long)((uVar17 << 0x20) + 0x5dc00000000) >> 0x20;
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = lVar12 + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
        lVar12 = *plVar1;
      }
      uVar13 = (ulong)(int)uVar17;
      sVar8 = _recv((int)param_1[10],(void *)(lVar12 + uVar13),0x5dc,0);
      if (sVar8 < 0) {
        plVar9 = (long *)___error();
        if (((int)*plVar9 == 0x23) || (plVar9 = (long *)___error(), (int)*plVar9 == 0x23)) {
          uVar17 = param_1[2] - param_1[1];
          if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
            if (uVar13 < uVar17) {
              param_1[2] = param_1[1] + uVar13;
            }
          }
          else {
            plVar9 = (long *)FUN_100520ec8(plVar1,uVar13 - uVar17);
          }
          goto LAB_100520460;
        }
        break;
      }
      if (sVar8 == 0) break;
      uVar13 = sVar8 + uVar13;
      uVar17 = param_1[2] - param_1[1];
      if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
        if (uVar13 < uVar17) {
          param_1[2] = param_1[1] + uVar13;
        }
      }
      else {
        FUN_100520ec8(plVar1,uVar13 - uVar17);
      }
    }
    uVar17 = param_1[2] - param_1[1];
    if (uVar13 < uVar17 || uVar13 - uVar17 == 0) {
      if (uVar13 < uVar17) {
        param_1[2] = param_1[1] + uVar13;
      }
    }
    else {
      FUN_100520ec8(plVar1,uVar13 - uVar17);
    }
    _close((int)param_1[10]);
    *(int *)((long)param_1 + 0x54) = 1;
    pcVar16 = "Connection error!\n";
    if (-1 < sVar8) {
      pcVar16 = "Connection closed!\n";
    }
    uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
    plVar9 = (long *)(ulong)uVar5;
LAB_100520460:
    pvVar18 = (void *)param_1[4];
    sVar10 = param_1[5] - (long)pvVar18;
    if (sVar10 != 0) {
      pcVar16 = "Connection closed!\n";
      do {
        plVar9 = (long *)_send((int)param_1[10],pvVar18,sVar10,0);
        iVar6 = (int)plVar9;
        if (iVar6 < 0) {
          plVar9 = (long *)___error();
          if (((int)*plVar9 != 0x23) && (plVar9 = (long *)___error(), (int)*plVar9 != 0x23)) {
            pcVar16 = "Connection error!\n";
LAB_100520508:
            _close((int)param_1[10]);
            *(int *)((long)param_1 + 0x54) = 1;
            uVar5 = _fputs(pcVar16,*(FILE **)PTR____stderrp_101444220);
            plVar9 = (long *)(ulong)uVar5;
          }
          break;
        }
        if (iVar6 == 0) goto LAB_100520508;
        pvVar18 = (void *)param_1[4];
        if (((ulong)plVar9 & 0xffffffff) == 0) {
          lVar12 = param_1[5];
        }
        else {
          sVar10 = param_1[5] - ((long)pvVar18 + (long)iVar6);
          pvVar14 = pvVar18;
          if (sVar10 != 0) {
            plVar9 = _memmove(pvVar18,(void *)((long)pvVar18 + (long)iVar6),sVar10);
            pvVar14 = (void *)param_1[4];
          }
          lVar12 = (long)pvVar18 + sVar10;
          param_1[5] = lVar12;
          pvVar18 = pvVar14;
        }
        sVar10 = lVar12 - (long)pvVar18;
      } while (sVar10 != 0);
    }
    if ((param_1[5] == param_1[4]) && (*(int *)((long)param_1 + 0x54) == 0)) {
      plVar9 = (long *)_close((int)param_1[10]);
      *(int *)((long)param_1 + 0x54) = 1;
    }
    puVar4 = PTR____stderrp_101444220;
    lVar12 = param_1[1];
    if (((1 < (ulong)(param_1[2] - lVar12)) && (*(int *)((long)param_1 + 0x54) == 2)) &&
       (local_1f0[0] = local_1f0[0] & 0xffffffff00000000, param_1[2] != lVar12)) {
      lVar15 = 0;
      iVar19 = 0;
      iVar6 = 0;
      bVar11 = false;
      do {
        uVar13 = (long)iVar6 - (long)iVar19;
        iVar7 = (int)uVar13;
        if (0xff < iVar7) {
          _fwrite("ERROR: Buffer too long",0x16,1,*(FILE **)puVar4);
          plVar9 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
          break;
        }
        cVar3 = *(char *)(lVar12 + lVar15);
        *(char *)((long)&local_170 + uVar13) = cVar3;
        if ((iVar7 < 1) ||
           (*(char *)((long)&local_170.tv_sec + (ulong)(iVar7 - 1)) != '\r' || cVar3 != '\n')) {
          iVar6 = iVar6 + 1;
        }
        else {
          *(undefined1 *)((long)&local_170.tv_sec + (uVar13 & 0xffffffff) + 1) = 0;
          if (bVar11) {
            if (iVar7 == 1) {
              uVar5 = _fprintf(*(FILE **)puVar4,"Opening WebSocket connection: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 3;
              lVar12 = (long)iVar6 + 1;
              if ((int)lVar12 != 0) {
                pvVar14 = (void *)param_1[1];
                pvVar18 = (void *)((long)pvVar14 + lVar12);
                sVar10 = param_1[2] - (long)pvVar18;
                if (sVar10 != 0) {
                  plVar9 = _memmove(pvVar14,pvVar18,sVar10);
                }
                param_1[2] = (long)pvVar14 + sVar10;
              }
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"Read header: %s");
            plVar9 = (long *)(ulong)uVar5;
            iVar6 = iVar6 + 1;
            bVar11 = true;
            iVar19 = iVar6;
          }
          else {
            iVar7 = _sscanf((char *)&local_170,"HTTP/1.1 %d");
            if ((iVar7 != 1) || ((int)local_1f0[0] != 0x65)) {
              uVar5 = _fprintf(*(FILE **)puVar4,"ERROR: Got bad status: %s");
              plVar9 = (long *)(ulong)uVar5;
              *(int *)((long)param_1 + 0x54) = 0;
              break;
            }
            uVar5 = _fprintf(*(FILE **)puVar4,"WebSocket successful HTTP status: %s");
            plVar9 = (long *)(ulong)uVar5;
            bVar11 = true;
          }
        }
        lVar15 = (long)iVar6;
      } while ((ulong)(long)iVar6 < (ulong)(param_1[2] - param_1[1]));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar9);
}


```

---

## `FUN_1010d94a0` @ `0x1010d94a0`

Size: 188 bytes

Called by: `FUN_1010d955c` @ `0x1010d955c`

Calls: `_send` @ `0x101149950`, `___error` @ `0x101148dec`, `FUN_1010f2ce0` @ `0x1010f2ce0`, `FUN_1010d9258` @ `0x1010d9258`

```c

ssize_t FUN_1010d94a0(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  long lVar4;
  
  sVar2 = _send(*(int *)((long)param_1 + (long)param_2 * 4 + 0x1d0),param_3,param_4,0);
  *param_5 = 0;
  if (sVar2 == -1) {
    piVar3 = ___error();
    iVar1 = *piVar3;
    if ((iVar1 == 4) || (iVar1 == 0x23)) {
      sVar2 = 0;
      *param_5 = 0x51;
    }
    else {
      lVar4 = *param_1;
      FUN_1010f2ce0(param_1,iVar1);
      FUN_1010d9258(lVar4,"Send failure: %s");
      *(int *)(*param_1 + 0x895c) = iVar1;
      *param_5 = 0x37;
      sVar2 = -1;
    }
  }
  return sVar2;
}


```

---

## `FUN_1010d959c` @ `0x1010d959c`

Size: 192 bytes

Calls: `_recv` @ `0x101149884`, `___error` @ `0x101148dec`, `FUN_1010f2ce0` @ `0x1010f2ce0`, `FUN_1010d9258` @ `0x1010d9258`

```c

ssize_t FUN_1010d959c(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined4 uVar4;
  long lVar5;
  
  sVar2 = _recv(*(int *)((long)param_1 + (long)param_2 * 4 + 0x1d0),param_3,param_4,0);
  *param_5 = 0;
  if (sVar2 == -1) {
    piVar3 = ___error();
    iVar1 = *piVar3;
    if ((iVar1 == 4) || (iVar1 == 0x23)) {
      uVar4 = 0x51;
    }
    else {
      lVar5 = *param_1;
      FUN_1010f2ce0(param_1,iVar1);
      FUN_1010d9258(lVar5,"Recv failure: %s");
      *(int *)(*param_1 + 0x895c) = iVar1;
      uVar4 = 0x38;
    }
    *param_5 = uVar4;
  }
  return sVar2;
}


```

---

## `FUN_1010d9a7c` @ `0x1010d9a7c`

Size: 92 bytes

Called by: `FUN_1010f5740` @ `0x1010f5740`

Calls: `_recv` @ `0x101149884`, `___error` @ `0x101148dec`

```c

undefined8 FUN_1010d9a7c(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined8 uVar2;
  int *piVar3;
  
  sVar1 = _recv(param_1,param_2,param_3,0);
  if (sVar1 == -1) {
    piVar3 = ___error();
    uVar2 = 0x51;
    if ((*piVar3 != 4) && (*piVar3 != 0x23)) {
      uVar2 = 0x38;
    }
  }
  else {
    uVar2 = 0;
    *param_4 = sVar1;
  }
  return uVar2;
}


```

---

## `FUN_1010e881c` @ `0x1010e881c`

Size: 148 bytes

Called by: `FUN_1010e7540` @ `0x1010e7540`

Calls: `_send` @ `0x101149950`, `___error` @ `0x101148dec`, `FUN_1010d9258` @ `0x1010d9258`, `FUN_1010e8428` @ `0x1010e8428`

```c

void FUN_1010e881c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ssize_t sVar1;
  undefined8 uVar2;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  uVar2 = *param_1;
  local_33 = 0xff;
  local_32 = (undefined1)param_2;
  local_31 = (undefined1)param_3;
  sVar1 = _send(*(int *)(param_1 + 0x3a),&local_33,3,0);
  if (sVar1 < 0) {
    ___error();
    FUN_1010d9258(uVar2,"Sending data failed (%d)");
  }
  FUN_1010e8428(*param_1,"SENT",param_2,param_3);
  return;
}


```

---

## `FUN_1010e8538` @ `0x1010e8538`

Size: 740 bytes

Called by: `FUN_1010e7540` @ `0x1010e7540`

Calls: `_memset` @ `0x101149464`, `FUN_1010e8a7c` @ `0x1010e8a7c`, `_strlen` @ `0x101149c5c`, `FUN_1010e7270` @ `0x1010e7270`, `_sscanf` @ `0x101149bf0`, `_send` @ `0x101149950`, `___error` @ `0x101148dec`, `FUN_1010d9258` @ `0x1010d9258`, `___stack_chk_fail` @ `0x101148e40`

```c

void FUN_1010e8538(long *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  ssize_t sVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_968 [128];
  undefined1 auStack_8e8 [128];
  undefined1 auStack_868 [2048];
  long local_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar8;
  _memset(auStack_8e8,0,0x80);
  _memset(auStack_968,0,0x80);
  lVar10 = *param_1;
  lVar7 = *(long *)(lVar10 + 0x218);
  FUN_1010e8a7c(lVar10,0x3c,lVar7 + 0x1cb8,
                (*(long *)(lVar7 + 0x1ec0) + 2) - *(long *)(lVar7 + 0x1eb8));
  pcVar6 = *(char **)(lVar7 + 0x1eb8);
  *(char **)(lVar7 + 0x1eb8) = pcVar6 + 1;
  cVar2 = *pcVar6;
  if (cVar2 == '\'') {
    FUN_1010e7270(auStack_868,0x800,"%c%c%c%c");
    uVar9 = 4;
    for (puVar11 = *(undefined8 **)(lVar7 + 0x1cb0); puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)puVar11[1]) {
      pcVar6 = (char *)*puVar11;
      sVar4 = _strlen(pcVar6);
      uVar1 = uVar9 + sVar4 + 1;
      if ((uVar1 < 0x7fa) && (iVar3 = _sscanf(pcVar6,"%127[^,],%127s"), iVar3 != 0)) {
        FUN_1010e7270(auStack_868 + uVar9,0x800 - uVar9,"%c%s%c%s");
        uVar9 = uVar1;
      }
    }
    FUN_1010e7270(auStack_868 + uVar9,0x800 - uVar9,"%c%c");
    sVar5 = _send((int)param_1[0x3a],auStack_868,uVar9 + 2,0);
    lVar8 = *(long *)PTR____stack_chk_guard_101444218;
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar10,"Sending data failed (%d)");
    }
  }
  else {
    if (cVar2 == '#') {
      sVar4 = _strlen((char *)(lVar7 + 0x1c28));
    }
    else {
      if (cVar2 != '\x18') goto LAB_1010e87ec;
      sVar4 = _strlen((char *)(lVar7 + 0x1c08));
    }
    uVar9 = sVar4 + 4;
    FUN_1010e7270(auStack_868,0x800,"%c%c%c%c%s%c%c");
    sVar5 = _send((int)param_1[0x3a],auStack_868,sVar4 + 6,0);
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar10,"Sending data failed (%d)");
    }
  }
  FUN_1010e8a7c(lVar10,0x3e,auStack_868 + 2,uVar9);
LAB_1010e87ec:
  if (lVar8 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

## `FUN_1010e88b0` @ `0x1010e88b0`

Size: 460 bytes

Called by: `FUN_1010e7540` @ `0x1010e7540`

Calls: `FUN_1010e8a7c` @ `0x1010e8a7c`, `_send` @ `0x101149950`, `___error` @ `0x101148dec`, `FUN_1010d9258` @ `0x1010d9258`, `FUN_1010e831c` @ `0x1010e831c`

```c

void FUN_1010e88b0(long *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ssize_t sVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == 0x1f) {
    lVar7 = *param_1;
    lVar8 = *(long *)(lVar7 + 0x218);
    puVar1 = (undefined1 *)(lVar8 + 0x1cb8);
    *puVar1 = 0xff;
    *(undefined1 *)(lVar8 + 0x1cb9) = 0xfa;
    puVar2 = (undefined1 *)(lVar8 + 0x1eb8);
    *(long *)(lVar8 + 0x1eb8) = lVar8 + 0x1cbb;
    *(undefined1 *)(lVar8 + 0x1cba) = 0x1f;
    puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    uVar3 = *(undefined2 *)(lVar8 + 0x1ca8);
    uVar4 = *(undefined2 *)(lVar8 + 0x1caa);
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)((ushort)uVar3 >> 8);
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)uVar3;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)((ushort)uVar4 >> 8);
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)uVar4;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = 0xff;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = 0xf0;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    *(undefined1 **)(lVar8 + 0x1ec0) = puVar6;
    *(undefined1 **)(lVar8 + 0x1eb8) = puVar1;
    FUN_1010e8a7c(lVar7,0x3e,lVar8 + 0x1cba,puVar6 + (-2 - (long)puVar1));
    sVar5 = _send((int)param_1[0x3a],puVar1,3,0);
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar7,"Sending data failed (%d)");
    }
    FUN_1010e831c(param_1,lVar8 + 0x1cbb,4);
    sVar5 = _send((int)param_1[0x3a],(void *)(lVar8 + 0x1cbf),2,0);
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar7,"Sending data failed (%d)");
    }
  }
  return;
}


```

---

## `FUN_1010eecec` @ `0x1010eecec`

Size: 176 bytes

Called by: `FUN_1010fec1c` @ `0x1010fec1c`, `FUN_1010e92a8` @ `0x1010e92a8`

Calls: `FUN_101103508` @ `0x101103508`, `thunk_FUN_101106638` @ `0x1011056a4`, `_recv` @ `0x101149884`

```c

int FUN_1010eecec(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  undefined1 uStack_41;
  long local_40;
  char local_38;
  
  lVar4 = *(long *)(param_1 + 0x8f0);
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    local_38 = '\0';
    local_40 = lVar4;
    FUN_101103508(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),&local_40,FUN_1010eed9c);
    if (local_38 == '\0') {
      *(undefined8 *)(param_1 + 0x8f0) = 0;
    }
    else {
      if (param_2 != (long *)0x0) {
        *param_2 = lVar4;
      }
      iVar1 = *(int *)(lVar4 + 0x1d0);
      if (*(char *)(lVar4 + 0x208) == '\0') {
        sVar3 = _recv(iVar1,&uStack_41,1,2);
        if (sVar3 != 0) {
          return iVar1;
        }
      }
      else {
        iVar2 = thunk_FUN_101106638(lVar4);
        if (iVar2 != 0) {
          return iVar1;
        }
      }
    }
  }
  return -1;
}


```

---

## `FUN_1010ee560` @ `0x1010ee560`

Size: 1932 bytes

Called by: `FUN_1010ee284` @ `0x1010ee284`, `FUN_1010ee454` @ `0x1010ee454`

Calls: `FUN_1010eedbc` @ `0x1010eedbc`, `FUN_1010ede40` @ `0x1010ede40`, `FUN_1010d909c` @ `0x1010d909c`, `_setsockopt` @ `0x101149980`, `___error` @ `0x101148dec`, `FUN_1010f2ce0` @ `0x1010f2ce0`, `FUN_1010d9258` @ `0x1010d9258`, `FUN_1010ee3ec` @ `0x1010ee3ec`, `FUN_1010eeed0` @ `0x1010eeed0`, `FUN_1010feee0` @ `0x1010feee0`, `FUN_1010e5b9c` @ `0x1010e5b9c`, `_memset` @ `0x101149464`, `_strlen` @ `0x101149c5c`, `_strncmp` @ `0x101149c74`, `FUN_1010e5c70` @ `0x1010e5c70`, `FUN_1010d1744` @ `0x1010d1744`, `FUN_1010d1414` @ `0x1010d1414`, `FUN_1010d1aa4` @ `0x1010d1aa4`, `_inet_pton` @ `0x101149368`, `_strchr` @ `0x101149c14`, `_bind` @ `0x101148f24`, `_getsockname` @ `0x1011492e4`, `FUN_1010f6f0c` @ `0x1010f6f0c`, `FUN_1010d0e58` @ `0x1010d0e58`, `FUN_1010f1f70` @ `0x1010f1f70`, `_connect` @ `0x101148fcc`, `_atoi` @ `0x101148f0c`, `___stack_chk_fail` @ `0x101148e40`

```c

void FUN_1010ee560(long *param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  size_t sVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  socklen_t sVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_2c0 [8];
  int local_2b8 [2];
  undefined8 *local_2b0;
  undefined1 auStack_2a6 [46];
  int local_278;
  int iStack_274;
  socklen_t local_26c;
  sockaddr asStack_268 [8];
  sockaddr local_1e8 [16];
  sockaddr sStack_e8;
  int local_d0;
  long local_68;
  
  lVar19 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = *param_1;
  *param_3 = -1;
  local_68 = lVar19;
  iVar4 = FUN_1010eedbc(param_1,param_2,&local_278,local_2b8);
  if (iVar4 == 0) {
    uVar6 = FUN_1010ede40(asStack_268,auStack_2a6,auStack_2c0);
    if ((uVar6 & 1) != 0) {
      FUN_1010d909c(lVar11,"  Trying %s...\n");
      if (((local_278 == 2) || (local_278 == 0x1e)) && (iStack_274 == 1)) {
        if (*(char *)(lVar11 + 0x51e) != '\0') {
          lVar13 = *param_1;
          local_1e8[0]._0_4_ = ZEXT14(*(byte *)(lVar13 + 0x51e));
          iVar4 = _setsockopt(local_2b8[0],6,1,local_1e8,4);
          if (iVar4 < 0) {
            piVar9 = ___error();
            FUN_1010f2ce0(param_1,*piVar9);
            pcVar16 = "Could not set TCP_NODELAY: %s\n";
          }
          else {
            pcVar16 = "TCP_NODELAY set\n";
          }
          FUN_1010d909c(lVar13,pcVar16);
        }
        FUN_1010eeed0(param_1,local_2b8[0]);
        if (*(byte *)(lVar11 + 0x708) != 0) {
          local_1e8[0]._0_4_ = (uint)*(byte *)(lVar11 + 0x708);
          iVar4 = _setsockopt(local_2b8[0],0xffff,8,local_1e8,4);
          if (iVar4 < 0) {
            pcVar16 = "Failed to set SO_KEEPALIVE on fd %d\n";
          }
          else {
            local_1e8[0]._0_4_ = FUN_1010feee0(*(undefined8 *)(lVar11 + 0x718));
            iVar4 = _setsockopt(local_2b8[0],6,0x101,local_1e8,4);
            if (iVar4 < 0) {
              FUN_1010d909c(lVar11,"Failed to set TCP_KEEPINTVL on fd %d\n");
            }
            local_1e8[0]._0_4_ = FUN_1010feee0(*(undefined8 *)(lVar11 + 0x710));
            iVar4 = _setsockopt(local_2b8[0],6,0x10,local_1e8,4);
            if (-1 < iVar4) goto LAB_1010ee7a0;
            pcVar16 = "Failed to set TCP_KEEPALIVE on fd %d\n";
          }
          FUN_1010d909c(lVar11,pcVar16);
        }
      }
      else {
        FUN_1010eeed0(param_1,local_2b8[0]);
      }
LAB_1010ee7a0:
      if (*(code **)(lVar11 + 0x2f8) == (code *)0x0) {
LAB_1010ee7e0:
        bVar2 = false;
      }
      else {
        iVar4 = (**(code **)(lVar11 + 0x2f8))(*(undefined8 *)(lVar11 + 0x300),local_2b8[0],0);
        if (iVar4 != 2) {
          if (iVar4 != 0) {
            FUN_1010ee3ec(param_1,local_2b8[0]);
            iVar4 = 0x2a;
            goto LAB_1010ee680;
          }
          goto LAB_1010ee7e0;
        }
        bVar2 = true;
      }
      iVar4 = local_278;
      if ((local_278 == 2) || (local_278 == 0x1e)) {
        uVar7 = FUN_1010e5b9c(asStack_268);
        lVar13 = *param_1;
        local_2b0 = (undefined8 *)0x0;
        uVar1 = *(ushort *)(lVar13 + 0x2a8);
        uVar12 = (uint)uVar1;
        iVar17 = *(int *)(lVar13 + 0x2ac);
        pcVar16 = *(char **)(lVar13 + 0x578);
        if ((uVar1 == 0) && (pcVar16 == (char *)0x0)) {
          iVar17 = 0;
        }
        else {
          _memset(&sStack_e8,0,0x80);
          if ((pcVar16 == (char *)0x0) || (sVar8 = _strlen(pcVar16), 0xfe < sVar8)) {
            if (iVar4 == 2) {
LAB_1010ee8bc:
              sStack_e8.sa_family = '\x02';
              sStack_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
              sVar14 = 0x10;
            }
            else if (iVar4 == 0x1e) {
              sStack_e8.sa_family = '\x1e';
              sStack_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
LAB_1010ee8ec:
              sVar14 = 0x1c;
            }
            else {
LAB_1010eea54:
              sVar14 = 0;
            }
            iVar4 = _bind(local_2b8[0],&sStack_e8,sVar14);
            if (iVar4 < 0) {
              iVar17 = iVar17 + 1;
              do {
                iVar17 = iVar17 + -1;
                if (iVar17 < 2) {
                  piVar9 = ___error();
                  iVar4 = *piVar9;
                  *(int *)(lVar13 + 0x895c) = iVar4;
                  FUN_1010f2ce0(param_1,iVar4);
                  pcVar16 = "bind failed with errno %d: %s";
                  goto LAB_1010eeb90;
                }
                FUN_1010d909c(lVar13,"Bind to local port %hu failed, trying next\n");
                uVar12 = uVar12 + 1;
                sStack_e8.sa_data._0_2_ =
                     (ushort)(uVar12 >> 8) & 0xff | (ushort)((uVar12 & 0xffff) << 8);
                iVar4 = _bind(local_2b8[0],&sStack_e8,sVar14);
              } while (iVar4 < 0);
            }
            local_2b8[1] = 0x80;
            _memset(local_1e8,0,0x80);
            iVar4 = _getsockname(local_2b8[0],local_1e8,(socklen_t *)(local_2b8 + 1));
            if (iVar4 < 0) {
              piVar9 = ___error();
              iVar4 = *piVar9;
              *(int *)(lVar13 + 0x895c) = iVar4;
              FUN_1010f2ce0(param_1,iVar4);
              FUN_1010d9258(lVar13,"getsockname() failed with errno %d: %s");
              iVar17 = 0x2d;
            }
            else {
              FUN_1010d909c(lVar13,"Local port: %hu\n");
              iVar17 = 0;
              *(undefined1 *)((long)param_1 + 0x2df) = 1;
            }
          }
          else {
            _memset(local_1e8,0,0x100);
            iVar5 = _strncmp("if!",pcVar16,3);
            if (iVar5 != 0) {
              iVar5 = _strncmp("host!",pcVar16,5);
              pcVar15 = pcVar16 + 5;
              if (iVar5 != 0) {
                bVar3 = false;
                pcVar15 = pcVar16;
                goto LAB_1010ee900;
              }
              goto LAB_1010ee978;
            }
            pcVar15 = pcVar16 + 3;
            bVar3 = true;
LAB_1010ee900:
            iVar5 = FUN_1010e5c70(iVar4,uVar7,(int)param_1[0x15],pcVar15,local_1e8,0x100);
            if (iVar5 == 2) {
              FUN_1010d909c(lVar13,"Local Interface %s is ip %s using address family %i\n");
LAB_1010eea00:
              if (iVar4 == 2) {
                iVar4 = _inet_pton(2,(char *)local_1e8,(void *)((ulong)&sStack_e8 | 4));
                if (0 < iVar4) goto LAB_1010ee8bc;
              }
              else if (iVar4 == 0x1e) {
                pcVar16 = _strchr((char *)local_1e8,0x25);
                if (pcVar16 == (char *)0x0) {
                  pcVar15 = (char *)0x0;
                }
                else {
                  pcVar15 = pcVar16 + 1;
                  *pcVar16 = '\0';
                }
                iVar4 = _inet_pton(0x1e,(char *)local_1e8,sStack_e8.sa_data + 6);
                if (0 < iVar4) {
                  sStack_e8.sa_family = '\x1e';
                  sStack_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
                  if (pcVar15 != (char *)0x0) {
                    local_d0 = _atoi(pcVar15);
                  }
                }
                goto LAB_1010ee8ec;
              }
              goto LAB_1010eea54;
            }
            if (iVar5 == 1) {
              iVar17 = 1;
              goto LAB_1010eeba4;
            }
            if (iVar5 == 0) {
              if (!bVar3) {
LAB_1010ee978:
                lVar18 = param_1[99];
                if (iVar4 == 0x1e) {
                  lVar10 = 2;
LAB_1010ee998:
                  param_1[99] = lVar10;
                }
                else if (iVar4 == 2) {
                  lVar10 = 1;
                  goto LAB_1010ee998;
                }
                FUN_1010d1744(param_1,pcVar15,0,&local_2b0);
                param_1[99] = lVar18;
                if (local_2b0 != (undefined8 *)0x0) {
                  FUN_1010d1414(*local_2b0,local_1e8,0x100);
                  FUN_1010d909c(lVar13,"Name \'%s\' family %i resolved to \'%s\' family %i\n");
                  FUN_1010d1aa4(lVar13,local_2b0);
                  goto LAB_1010eea00;
                }
                goto LAB_1010eeb84;
              }
              pcVar16 = "Couldn\'t bind to interface \'%s\'";
            }
            else {
              if (!bVar3) goto LAB_1010ee978;
LAB_1010eeb84:
              pcVar16 = "Couldn\'t bind to \'%s\'";
            }
LAB_1010eeb90:
            FUN_1010d9258(lVar13,pcVar16);
            iVar17 = 0x2d;
          }
        }
LAB_1010eeba4:
        if (iVar17 != 0) {
          FUN_1010ee3ec(param_1,local_2b8[0]);
          iVar4 = 7;
          if (iVar17 != 1) {
            iVar4 = iVar17;
          }
          goto LAB_1010ee680;
        }
      }
      FUN_1010f6f0c(local_2b8[0],1);
      auVar20 = FUN_1010d0e58();
      *(undefined1 (*) [16])(param_1 + 0x5d) = auVar20;
      if (1 < (int)param_1[0x5f]) {
        FUN_1010f1f70(lVar11,param_1[0x60]);
      }
      if ((!bVar2) && (*(int *)((long)param_1 + 0xac) == 1)) {
        iVar4 = _connect(local_2b8[0],asStack_268,local_26c);
        if (iVar4 == -1) {
          piVar9 = ___error();
          iVar4 = *piVar9;
          *(bool *)((long)param_1 + 0x2cf) = local_278 == 0x1e;
          if (1 < iVar4 - 0x23U) {
            FUN_1010f2ce0(param_1,iVar4);
            FUN_1010d909c(lVar11,"Immediate connect fail for %s: %s\n");
            *(int *)(lVar11 + 0x895c) = iVar4;
            FUN_1010ee3ec(param_1,local_2b8[0]);
            iVar4 = 7;
            goto LAB_1010ee680;
          }
        }
        else {
          *(bool *)((long)param_1 + 0x2cf) = local_278 == 0x1e;
        }
      }
      *param_3 = local_2b8[0];
      iVar4 = 0;
      goto LAB_1010ee680;
    }
    piVar9 = ___error();
    FUN_1010f2ce0(param_1,*piVar9);
    FUN_1010d9258(lVar11,"sa_addr inet_ntop() failed with errno %d: %s");
    FUN_1010ee3ec(param_1,local_2b8[0]);
  }
  iVar4 = 0;
LAB_1010ee680:
  if (lVar19 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar4);
}


```

---

## `FUN_1010eedbc` @ `0x1010eedbc`

Size: 276 bytes

Called by: `FUN_1010dd444` @ `0x1010dd444`, `FUN_1010ee560` @ `0x1010ee560`

Calls: `_memcpy` @ `0x10114944c`, `_socket` @ `0x1011499ec`, `___stack_chk_fail` @ `0x101148e40`

```c

void FUN_1010eedbc(long *param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  int local_d8 [36];
  long local_48;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *param_1;
  piVar2 = local_d8;
  if (param_3 != (int *)0x0) {
    piVar2 = param_3;
  }
  local_48 = lVar6;
  *piVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)((long)param_1 + 0xac);
  piVar2[1] = iVar3;
  if (iVar3 == 2) {
    iVar3 = 0x11;
  }
  else {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  piVar2[2] = iVar3;
  uVar1 = 0x80;
  if (*(uint *)(param_2 + 0x10) < 0x81) {
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  piVar2[3] = uVar1;
  _memcpy(piVar2 + 4,*(void **)(param_2 + 0x20),(ulong)uVar1);
  pcVar5 = *(code **)(lVar7 + 0x308);
  if (pcVar5 == (code *)0x0) {
    iVar3 = _socket(*piVar2,piVar2[1],piVar2[2]);
  }
  else {
    iVar3 = (*pcVar5)(*(undefined8 *)(lVar7 + 0x310),0,piVar2);
  }
  *param_4 = iVar3;
  if (iVar3 == -1) {
    uVar4 = 7;
  }
  else if (((int)param_1[0x15] == 0) || (*piVar2 != 0x1e)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    piVar2[10] = (int)param_1[0x15];
  }
  if (lVar6 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}


```

---

## `FUN_1010f2db4` @ `0x1010f2db4`

Size: 112 bytes

Called by: `FUN_1010f2e24` @ `0x1010f2e24`, `FUN_1010f2e4c` @ `0x1010f2e4c`

Calls: `_socket` @ `0x1011499ec`, `FUN_1010ee3ec` @ `0x1010ee3ec`

```c

bool FUN_1010f2db4(void)

{
  int iVar1;
  
  if (DAT_101873648 == -1) {
    iVar1 = _socket(0x1e,2,0);
    if (iVar1 == -1) {
      DAT_101873648 = 0;
    }
    else {
      DAT_101873648 = 1;
      FUN_1010ee3ec(0,iVar1);
    }
  }
  return 0 < DAT_101873648;
}


```

---

## `FUN_10034599c` @ `0x10034599c`

Size: 440 bytes

Called by: `FUN_1003c11f8` @ `0x1003c11f8`, `FUN_1003c1358` @ `0x1003c1358`

Calls: `FUN_1004d21cc` @ `0x1004d21cc`, `FUN_100345824` @ `0x100345824`, `FUN_1004d21e0` @ `0x1004d21e0`

```c

void FUN_10034599c(long param_1,ulong param_2,long param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
    return;
  }
  plVar5 = (long *)(lVar4 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (*(char *)(*(long *)(*plVar5 + 0x38) + 0x8a) != '\0') {
    return;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  fVar8 = *(float *)(param_1 + 600);
  fVar9 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  if (param_3 == 0) {
    pcVar6 = "None";
    fVar11 = fVar7;
    fVar10 = fVar8;
    fVar12 = fVar9;
    if (param_4 == (float *)0x0) goto LAB_100345a8c;
  }
  else {
    pcVar6 = (char *)**(undefined8 **)
                       (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_3 + 0x268) * 8);
    if (param_4 == (float *)0x0) {
      fVar11 = *(float *)(param_3 + 0x250);
      fVar10 = *(float *)(param_3 + 600);
      fVar12 = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
      goto LAB_100345a8c;
    }
  }
  fVar11 = *param_4;
  fVar10 = param_4[2];
  fVar12 = param_4[1];
LAB_100345a8c:
  uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
  pcVar1 = "Left";
  if (1 < *(byte *)(param_1 + 0x264)) {
    pcVar1 = "Right";
  }
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0x76,uVar3,"UseAbility",
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Ability\": \"%s\", \"Position\": [ %.2f, %.2f, %.2f ], \"TargetActor\": \"%s\", \"TargetPosition\": [ %.2f, %.2f, %.2f ] }"
                ,param_7,param_8,pcVar1,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),
                **(undefined8 **)(*plVar5 + 0x38),(double)fVar7,(double)fVar9,(double)fVar8,pcVar6,
                (double)fVar11,(double)fVar12,(double)fVar10);
  return;
}


```

---

## `FUN_100345bc4` @ `0x100345bc4`

Size: 460 bytes

Called by: `FUN_100461d98` @ `0x100461d98`

Calls: `FUN_1004d21cc` @ `0x1004d21cc`, `FUN_100345d90` @ `0x100345d90`, `FUN_100345824` @ `0x100345824`, `FUN_1004d21e0` @ `0x1004d21e0`

```c

void FUN_100345bc4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = FUN_1004d21cc();
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c0));
  if (lVar3 == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x2f4) & 0x1005) == 0) && ((*(uint *)(lVar3 + 0x2f4) & 0x20100001) == 0)
     ) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x250);
  fVar11 = *(float *)(param_1 + 0x254);
  fVar10 = *(float *)(param_1 + 600);
  fVar12 = *(float *)(param_1 + 0x2ec);
  if (((*(uint *)(param_1 + 0x2f4) & 1) != 0) &&
     (lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x2c4)), lVar4 != 0)) {
    lVar3 = lVar4;
  }
  pcVar1 = "Left";
  if (1 < *(byte *)(lVar3 + 0x264)) {
    pcVar1 = "Right";
  }
  if ((ulong)(long)*(char *)(param_1 + 0x264) < 3) {
    pcVar7 = (&PTR_s_Neutral_10149dc48)[*(char *)(param_1 + 0x264)];
  }
  else {
    pcVar7 = "Unknown";
  }
  uVar8 = **(undefined8 **)(**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(lVar3 + 0x268) * 8)
  ;
  if ((*(byte *)(lVar3 + 0x2f4) >> 1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x2f4) >> 1 & 1) == 0) {
      pcVar6 = "NPCkillNPC";
      pcVar5 = "NPC";
      goto LAB_100345cfc;
    }
    pcVar6 = "Executed";
    lVar4 = param_1;
  }
  else {
    pcVar6 = "KillActor";
    lVar4 = lVar3;
  }
  pcVar5 = (char *)FUN_100345824(*(undefined4 *)(lVar4 + 0x260));
LAB_100345cfc:
  FUN_1004d21e0(3,
                "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                ,0xba,pcVar5,pcVar6,
                "{ \"Team\": \"%s\", \"Actor\": \"%s\", \"Killed\": \"%s\", \"KilledTeam\": \"%s\", \"Gold\": \"%d\", \"IsHero\": %d, \"TargetIsHero\": %d, \"Position\": [ %.2f, %.2f, %.2f ] }"
                ,in_x6,in_x7,pcVar1,uVar8,
                **(undefined8 **)
                  (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8),pcVar7
                ,param_2,*(uint *)(lVar3 + 0x2f4) >> 1 & 1,*(uint *)(param_1 + 0x2f4) >> 1 & 1,
                (double)fVar9,(double)(fVar12 + fVar11),(double)fVar10);
  return;
}


```

---

## `FUN_100345e3c` @ `0x100345e3c`

Size: 164 bytes

Called by: `FUN_1003d805c` @ `0x1003d805c`, `FUN_1003daa1c` @ `0x1003daa1c`

Calls: `FUN_1004d21cc` @ `0x1004d21cc`, `FUN_100345824` @ `0x100345824`, `FUN_1004d21e0` @ `0x1004d21e0`

```c

void FUN_100345e3c(long param_1)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  iVar2 = FUN_1004d21cc();
  if ((iVar2 != 0) && (**(int **)(param_1 + 0x38) == 0)) {
    uVar3 = FUN_100345824(*(undefined4 *)(param_1 + 0x260));
    pcVar1 = "Left";
    if (1 < *(byte *)(param_1 + 0x264)) {
      pcVar1 = "Right";
    }
    FUN_1004d21e0(3,
                  "/Users/buildmaster/Development/Jenkins/Evil01_CE_Trunk/Development/Trunk/Games/Kindred/Common/KindredAnalytics.cpp"
                  ,0xd3,uVar3,"PlayerFirstSpawn","{ \"Team\": \"%s\", \"Actor\": \"%s\" }",in_x6,
                  in_x7,pcVar1,
                  **(undefined8 **)
                    (**(long **)(DAT_101d90978 + 0x40) + (ulong)*(uint *)(param_1 + 0x268) * 8));
  }
  return;
}


```

---

## `FUN_1000eff84` @ `0x1000eff84`

Size: 2452 bytes

Called by: `FUN_100066b2c` @ `0x100066b2c`, `FUN_10023e748` @ `0x10023e748`, `FUN_1000eff68` @ `0x1000eff68`

Calls: `FUN_1004e0150` @ `0x1004e0150`

```c

undefined8 * FUN_1000eff84(undefined4 param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = "STAT_LABEL_ACTIVE_DAMAGE_REDUCTION";
  switch(param_1) {
  case 0:
    pcVar1 = "STAT_LABEL_ATTACK_SPEED";
    break;
  case 1:
    pcVar1 = "STAT_LABEL_ATTACK_SPEED_PER_STACK";
    break;
  case 2:
    pcVar1 = "STAT_LABEL_BONUS_ATTACK_SPEED";
    break;
  case 3:
    pcVar1 = "STAT_LABEL_BONUS_MOVESPEED_DURATION";
    break;
  case 4:
    pcVar1 = "STAT_LABEL_BONUS_MOVESPEED_STRENGTH";
    break;
  case 5:
    pcVar1 = "STAT_LABEL_BONUS_SPEED_DURATION";
    break;
  case 6:
    pcVar1 = "STAT_LABEL_BONUS_ALT_ENERGY";
    break;
  case 7:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER";
    break;
  case 8:
    pcVar1 = "STAT_LABEL_BONUS_WEAPON_POWER";
    break;
  case 9:
    pcVar1 = "STAT_LABEL_BONUS_WEAPON_STRENGTH";
    break;
  case 10:
    pcVar1 = "STAT_LABEL_CRYSTAL_AMP";
    break;
  case 0xb:
    pcVar1 = "STAT_LABEL_WEAPON_AMP";
    break;
  case 0xc:
    pcVar1 = "STAT_LABEL_SPEED";
    break;
  case 0xd:
    pcVar1 = "STAT_LABEL_SPEED_BOOST_PER_STACK";
    break;
  case 0xe:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER";
    break;
  case 0xf:
    pcVar1 = "STAT_LABEL_CRYSTAL_POWER_PER_STACK";
    break;
  case 0x10:
    pcVar1 = "STAT_LABEL_WEAPON_POWER";
    break;
  case 0x11:
    pcVar1 = "STAT_LABEL_WEAPON_POWER_PER_STACK";
    break;
  case 0x12:
    pcVar1 = "STAT_LABEL_CRIT_CHANCE";
    break;
  case 0x13:
    pcVar1 = "STAT_LABEL_LIFESTEAL";
    break;
  case 0x14:
    pcVar1 = "STAT_LABEL_BONUS_LIFESTEAL";
    break;
  case 0x15:
    pcVar1 = "STAT_LABEL_LIFESTEAL_PER_STACK";
    break;
  case 0x16:
    pcVar1 = "STAT_LABEL_ARMOR";
    break;
  case 0x17:
    pcVar1 = "STAT_LABEL_ARMOR_PER_STACK";
    break;
  case 0x18:
    pcVar1 = "STAT_LABEL_SHIELD";
    break;
  case 0x19:
    pcVar1 = "STAT_LABEL_SHIELD_PER_STACK";
    break;
  case 0x1a:
    pcVar1 = "STAT_LABEL_PASSIVE_ARMOR";
    break;
  case 0x1b:
    pcVar1 = "STAT_LABEL_PASSIVE_ATTACK_SPEED";
    break;
  case 0x1c:
    pcVar1 = "STAT_LABEL_PASSIVE_PASSIVE_BONUS_ATTACK_RANGE";
    break;
  case 0x1d:
    pcVar1 = "STAT_LABEL_PASSIVE_COOLDOWN_SPEED";
    break;
  case 0x1e:
    pcVar1 = "STAT_LABEL_PASSIVE_CRITICAL_DAMAGE";
    break;
  case 0x1f:
    pcVar1 = "STAT_LABEL_PASSIVE_CRYSTAL_POWER";
    break;
  case 0x20:
    pcVar1 = "STAT_LABEL_PASSIVE_MOVEMENT_SPEED";
    break;
  case 0x21:
    pcVar1 = "STAT_LABEL_PASSIVE_SHIELD";
    break;
  case 0x22:
    pcVar1 = "STAT_LABEL_PASSIVE_WEAPON_POWER";
    break;
  case 0x23:
    pcVar1 = "STAT_LABEL_PERCENT_MAX_HEALTH_PER_SECOND";
    break;
  case 0x24:
    pcVar1 = "STAT_LABEL_PERCENT_HEALTH_COST";
    break;
  case 0x25:
    pcVar1 = "STAT_LABEL_BONUS_CHARGES";
    break;
  case 0x26:
    pcVar1 = "STAT_LABEL_BONUS_DISTANCE";
    break;
  case 0x27:
    pcVar1 = "STAT_LABEL_BONUS_DURATION";
    break;
  case 0x28:
    pcVar1 = "STAT_LABEL_BONUS_PIERCE";
    break;
  case 0x29:
    pcVar1 = "STAT_LABEL_BONUS_RADIUS";
    break;
  case 0x2a:
    pcVar1 = "STAT_LABEL_BONUS_RANGE";
    break;
  case 0x2b:
    pcVar1 = "STAT_LABEL_BONUS_STACKS";
    break;
  case 0x2c:
    pcVar1 = "STAT_LABEL_COOLDOWN";
    break;
  case 0x2d:
    pcVar1 = "STAT_LABEL_COOLDOWN_MODIFIER";
    break;
  case 0x2e:
    pcVar1 = "STAT_LABEL_COOLDOWN_OVERRIDE";
    break;
  case 0x2f:
    pcVar1 = "STAT_LABEL_COOLDOWN_REDUCTION";
    break;
  case 0x30:
    pcVar1 = "STAT_LABEL_CHARGE_TIME";
    break;
  case 0x31:
    pcVar1 = "STAT_LABEL_CHARGES";
    break;
  case 0x32:
    pcVar1 = "STAT_LABEL_DISTANCE";
    break;
  case 0x33:
    pcVar1 = "STAT_LABEL_DISTANCE_MODIFIER";
    break;
  case 0x34:
    pcVar1 = "STAT_LABEL_DURATION";
    break;
  case 0x35:
    pcVar1 = "STAT_LABEL_DURATION_MODIFIER";
    break;
  case 0x36:
    pcVar1 = "STAT_LABEL_ENERGY_COST";
    break;
  case 0x37:
    pcVar1 = "STAT_LABEL_ENERGY_MODIFIER";
    break;
  case 0x38:
    pcVar1 = "STAT_LABEL_RANGE";
    break;
  case 0x39:
    pcVar1 = "STAT_LABEL_RANGE_MODIFIER";
    break;
  case 0x3a:
    pcVar1 = "STAT_LABEL_ANGLE_MODIFIER";
    break;
  case 0x3b:
    pcVar1 = "STAT_LABEL_RADIUS";
    break;
  case 0x3c:
    pcVar1 = "STAT_LABEL_STACKS";
    break;
  case 0x3d:
    pcVar1 = "STAT_LABEL_STACKS_GRANTED";
    break;
  case 0x3e:
    pcVar1 = "STAT_LABEL_FOCUS_COST";
    break;
  case 0x3f:
    pcVar1 = "STAT_LABEL_STAMINA_COST";
    break;
  case 0x40:
    pcVar1 = "STAT_LABEL_BLOODRAGE_GAIN";
    break;
  case 0x41:
    pcVar1 = "STAT_LABEL_BLOODRAGE_COST_PER_SECOND";
    break;
  case 0x42:
    pcVar1 = "STAT_LABEL_TRAP_DURATION";
    break;
  case 0x43:
    pcVar1 = "STAT_LABEL_TRAP_LIMIT";
    break;
  case 0x44:
    pcVar1 = "STAT_LABEL_DURATION_ALLY";
    break;
  case 0x45:
    pcVar1 = "STAT_LABEL_DURATION_SELF";
    break;
  case 0x46:
    pcVar1 = "STAT_LABEL_MAX_STACKS";
    break;
  case 0x47:
    pcVar1 = "STAT_LABEL_SELF_CAST_BONUS";
    break;
  case 0x48:
    pcVar1 = "STAT_LABEL_REVEAL_DURATION";
    break;
  case 0x49:
    pcVar1 = "STAT_LABEL_STEALTH_DURATION";
    break;
  case 0x4a:
    pcVar1 = "STAT_LABEL_TICKS_PER_SECOND";
    break;
  case 0x4b:
    pcVar1 = "STAT_LABEL_SLOW_DURATION";
    break;
  case 0x4c:
    pcVar1 = "STAT_LABEL_SLOW_STRENGTH";
    break;
  case 0x4d:
    pcVar1 = "STAT_LABEL_STUN_DURATION";
    break;
  case 0x4e:
    pcVar1 = "STAT_LABEL_SILENCE_DURATION";
    break;
  case 0x4f:
    pcVar1 = "STAT_LABEL_ROOT_DURATION";
    break;
  case 0x50:
    pcVar1 = "STAT_LABEL_SLEEP_DURATION";
    break;
  case 0x51:
    pcVar1 = "STAT_LABEL_FEAR_DURATION";
    break;
  case 0x52:
    pcVar1 = "STAT_LABEL_SLOW_CENTER";
    break;
  case 0x53:
    pcVar1 = "STAT_LABEL_SLOW_EDGE";
    break;
  case 0x54:
    pcVar1 = "STAT_LABEL_SLOW_DURATION_CENTER";
    break;
  case 0x55:
    pcVar1 = "STAT_LABEL_SLOW_DURATION_EDGE";
    break;
  case 0x56:
    pcVar1 = "STAT_LABEL_BONUS_STUN_DURATION";
    break;
  case 0x57:
    break;
  case 0x58:
    pcVar1 = "STAT_LABEL_PASSIVE_DAMAGE_REDUCTION";
    break;
  case 0x59:
    pcVar1 = "STAT_LABEL_BARRIER";
    break;
  case 0x5a:
    pcVar1 = "STAT_LABEL_BARRIER_DURATION";
    break;
  case 0x5b:
    pcVar1 = "STAT_LABEL_BARRIER_MODIFIER";
    break;
  case 0x5c:
    pcVar1 = "STAT_LABEL_BARRIER_STRENGTH";
    break;
  case 0x5d:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH";
    break;
  case 0x5e:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_DURATION";
    break;
  case 0x5f:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_MODIFIER";
    break;
  case 0x60:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_PER_SECOND";
    break;
  case 0x61:
    pcVar1 = "STAT_LABEL_FORTIFIED_HEALTH_PER_STACK";
    break;
  case 0x62:
    pcVar1 = "STAT_LABEL_HEAL";
    break;
  case 99:
    pcVar1 = "STAT_LABEL_HEAL_DURATION";
    break;
  case 100:
    pcVar1 = "STAT_LABEL_HEAL_MODIFIER";
    break;
  case 0x65:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND";
    break;
  case 0x66:
    pcVar1 = "STAT_LABEL_HEAL_PER_STACK";
    break;
  case 0x67:
    pcVar1 = "STAT_LABEL_HEALING_MODIFIER";
    break;
  case 0x68:
    pcVar1 = "STAT_LABEL_HEALING_STRENGTH";
    break;
  case 0x69:
    pcVar1 = "STAT_LABEL_HEAL_PERCENT_MAX_HEALTH";
    break;
  case 0x6a:
    pcVar1 = "STAT_LABEL_HEALTH_REGEN";
    break;
  case 0x6b:
    pcVar1 = "STAT_LABEL_HEAL_PER_HIT_HERO";
    break;
  case 0x6c:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND_HIT_NONMINION";
    break;
  case 0x6d:
    pcVar1 = "STAT_LABEL_HEAL_PER_SECOND_HIT_MINION";
    break;
  case 0x6e:
    pcVar1 = "STAT_LABEL_DAMAGE";
    break;
  case 0x6f:
    pcVar1 = "STAT_LABEL_AREA_DAMAGE";
    break;
  case 0x70:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_STACK";
    break;
  case 0x71:
    pcVar1 = "STAT_LABEL_IMPACT_DAMAGE";
    break;
  case 0x72:
    pcVar1 = "STAT_LABEL_FINAL_DAMAGE";
    break;
  case 0x73:
    pcVar1 = "STAT_LABEL_MISSING_HEALTH_PERCENT_DAMAGE";
    break;
  case 0x74:
    pcVar1 = "STAT_LABEL_BURST_DAMAGE";
    break;
  case 0x75:
    pcVar1 = "STAT_LABEL_DAMAGE_CENTER";
    break;
  case 0x76:
    pcVar1 = "STAT_LABEL_DAMAGE_EDGE";
    break;
  case 0x77:
    pcVar1 = "STAT_LABEL_MAX_HEALTH_PERCENT_DAMAGE";
    break;
  case 0x78:
    pcVar1 = "STAT_LABEL_EMPOWERED_DAMAGE";
    break;
  case 0x79:
    pcVar1 = "STAT_LABEL_FIRST_HIT_DAMAGE";
    break;
  case 0x7a:
    pcVar1 = "STAT_LABEL_SECOND_HIT_DAMAGE";
    break;
  case 0x7b:
    pcVar1 = "STAT_LABEL_THIRD_HIT_DAMAGE";
    break;
  case 0x7c:
    pcVar1 = "STAT_LABEL_TOTAL_DAMAGE";
    break;
  case 0x7d:
    pcVar1 = "STAT_LABEL_DAMAGE_DURATION";
    break;
  case 0x7e:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_SECOND";
    break;
  case 0x7f:
    pcVar1 = "STAT_LABEL_CRYSTAL_DAMAGE";
    break;
  case 0x80:
    pcVar1 = "STAT_LABEL_WEAPON_DAMAGE";
    break;
  case 0x81:
    pcVar1 = "STAT_LABEL_BASIC_ATTACK_DAMAGE";
    break;
  default:
    return &DAT_101d91650;
  case 0x83:
    pcVar1 = "STAT_LABEL_CRYSTAL_DAMAGE";
    break;
  case 0x84:
    pcVar1 = "STAT_LABEL_BONUS_DAMAGE";
    break;
  case 0x85:
    pcVar1 = "STAT_LABEL_BONUS_DAMAGE_PER_STACK";
    break;
  case 0x86:
    pcVar1 = "STAT_LABEL_DAMAGE_AMP";
    break;
  case 0x87:
    pcVar1 = "STAT_LABEL_DAMAGE_MODIFIER";
    break;
  case 0x88:
    pcVar1 = "STAT_LABEL_DAMAGE_RADIUS";
    break;
  case 0x89:
    pcVar1 = "STAT_LABEL_DAMAGE_REDUCTION_MODIFIER";
    break;
  case 0x8a:
    pcVar1 = "STAT_LABEL_BONUS_REFLECT_DAMAGE";
    break;
  case 0x8b:
    pcVar1 = "STAT_LABEL_CLEAVE_DAMAGE";
    break;
  case 0x8c:
    pcVar1 = "STAT_LABEL_SHIELD_PIERCING";
    break;
  case 0x8d:
    pcVar1 = "STAT_LABEL_ARMOR_PIERCING";
    break;
  case 0x8e:
    pcVar1 = "STAT_LABEL_CAP_NONHEROES";
    break;
  case 0x8f:
    pcVar1 = "STAT_LABEL_DAMAGE_PER_HIT";
    break;
  case 0x90:
    pcVar1 = "STAT_LABEL_PET_DAMAGE";
    break;
  case 0x91:
    pcVar1 = "STAT_LABEL_PET_HEALTH";
    break;
  case 0x92:
    pcVar1 = "STAT_LABEL_PET_DEFENSE";
    break;
  case 0x93:
    pcVar1 = "STAT_LABEL_ADAGIO_B_BURN_BONUS";
    break;
  case 0x94:
    pcVar1 = "STAT_LABEL_ANKA_A_BLINK_DAMAGE";
    break;
  case 0x95:
    pcVar1 = "STAT_LABEL_ANKA_C_INITIAL_DASH_DAMAGE";
    break;
  case 0x96:
    pcVar1 = "STAT_LABEL_ANKA_C_SECONDARY_DASH_DAMAGE";
    break;
  case 0x97:
    pcVar1 = "STAT_LABEL_CELESTE_A_NOVA_DAMAGE";
    break;
  case 0x98:
    pcVar1 = "STAT_LABEL_CELESTE_C_DAMAGE_LEAD";
    break;
  case 0x99:
    pcVar1 = "STAT_LABEL_CELESTE_C_DAMAGE_TAIL";
    break;
  case 0x9a:
    pcVar1 = "STAT_LABEL_CELESTE_C_TAIL_NUMBER";
    break;
  case 0x9b:
    pcVar1 = "STAT_LABEL_KENSEI_A_KENSHO_SLOW_STRENGTH";
    break;
  case 0x9c:
    pcVar1 = "STAT_LABEL_KENSEI_B_KENSHO_STUN_DURATION";
    break;
  case 0x9d:
    pcVar1 = "STAT_LABEL_MAGNUS_SPLIT_DAMAGE";
    break;
  case 0x9e:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_COOLDOWN";
    break;
  case 0x9f:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_DAMAGE";
    break;
  case 0xa0:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_ENERGY_COST";
    break;
  case 0xa1:
    pcVar1 = "STAT_LABEL_MALENE_SHADOWFORM_SLOW_STRENGTH";
    break;
  case 0xa2:
    pcVar1 = "STAT_LABEL_OZO_B_BONUS_DAMAGE_PER_BOUNCE";
    break;
  case 0xa3:
    pcVar1 = "STAT_LABEL_PETAL_A_SEED_HEALTH";
    break;
  case 0xa4:
    pcVar1 = "STAT_LABEL_SILVERNAIL_A_TRIPWIRE_DURATION";
    break;
  case 0xa5:
    pcVar1 = "STAT_LABEL_SILVERNAIL_C_PERK_DAMAGE_BONUS";
    break;
  case 0xa6:
    pcVar1 = "STAT_LABEL_SKAARF_B_BURN_DURATION";
    break;
  case 0xa7:
    pcVar1 = "STAT_LABEL_VARYA_A_CHAIN_LIGHTNING_DAMAGE";
    break;
  case 0xa8:
    pcVar1 = "STAT_LABEL_VARYA_C_LIGHTNING_STRIKE_RADIUS";
    break;
  case 0xa9:
    pcVar1 = "STAT_LABEL_VARYA_C_BONUS_CHAIN_LIGHTNING";
    break;
  case 0xaa:
    pcVar1 = "STAT_LABEL_YLVA_A_FULL_CHARGE_TIME";
    break;
  case 0xab:
    pcVar1 = "STAT_LABEL_CAINE_BULLETS_RELOADED";
    break;
  case 0xac:
    pcVar1 = "STAT_LABEL_CAINE_BULLET_COST";
    break;
  case 0xad:
    pcVar1 = "STAT_LABEL_CAINE_EXPLOSION_DAM
// ...truncated...
```

---

