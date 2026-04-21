// functions/019eb — 8 functions
#include "libGameKindred.h"




undefined8 FUN_019eb5e4(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  size_t __n;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  pcVar1 = (char *)(*(code *)PTR_malloc_02bf74a8)(0x400);
  __n = strlen(param_2);
  if (pcVar1 == (char *)0x0) {
    return 0x1b;
  }
  do {
    while( true ) {
      if (__n == 0) {
        uVar6 = 0;
        pcVar4 = pcVar1;
        goto LAB_019eb67c;
      }
      sVar2 = send(*(int *)(param_1 + 0x420),param_2,__n,0x4000);
      if (sVar2 == -1) break;
      param_2 = param_2 + sVar2;
      __n = __n - sVar2;
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 == 4);
LAB_019eb704:
  (*(code *)PTR_free_02bf74b0)(pcVar1);
  return 9;
LAB_019eb67c:
  pcVar1 = pcVar4;
  while (sVar2 = recv(*(int *)(param_1 + 0x420),pcVar1 + uVar6,0x400,0), sVar2 == -1) {
    piVar3 = (int *)__errno();
    if (*piVar3 != 4) goto LAB_019eb704;
  }
  if (sVar2 == 0) goto LAB_019eb704;
  uVar6 = sVar2 + uVar6;
  if (pcVar1[uVar6 - 1] == '\n') {
    pcVar1[uVar6 - 1] = '\0';
    if ((param_3 == 1) && (uVar6 == 3)) {
      if ((*pcVar1 == 'P') && (pcVar1[1] == 'W')) {
        return 9;
      }
      goto LAB_019eb704;
    }
    if (uVar6 < 4) goto LAB_019eb704;
    if (param_3 == 1) {
      if ((*pcVar1 != 'Y') || (pcVar1[1] != 'R')) goto LAB_019eb704;
    }
    else {
      if (param_3 != 2) goto LAB_019eb7d0;
      if (*pcVar1 == 'A') {
        if (pcVar1[1] != 'F') goto LAB_019eb704;
      }
      else if ((*pcVar1 != 'K') || (pcVar1[1] != 'K')) goto LAB_019eb704;
    }
    if (pcVar1[2] == ' ') {
LAB_019eb7d0:
      uVar5 = FUN_019d5c34("NTLM %.*s",uVar6 - 4,pcVar1 + 3);
      *(undefined8 *)(param_1 + 0x430) = uVar5;
      (*(code *)PTR_free_02bf74b0)(pcVar1);
      return 0;
    }
    goto LAB_019eb704;
  }
  pcVar4 = (char *)(*(code *)PTR_realloc_02bf74b8)(pcVar1,uVar6 + 0x400);
  if (pcVar4 == (char *)0x0) {
    (*(code *)PTR_free_02bf74b0)(pcVar1);
    return 0x1b;
  }
  goto LAB_019eb67c;
}




undefined8 FUN_019eb800(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  void *__dest;
  
  if (*(long *)(param_4 + 0x10) != 0) {
    (*(code *)PTR_free_02bf74b0)(*(long *)(param_4 + 0x10));
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  uVar3 = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  if (0x2f < param_3) {
    uVar1 = (uint)*(ushort *)(param_2 + 0x28);
    if (uVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x2c);
      if ((uVar2 < 0x30) || (param_3 < uVar2 + uVar1)) {
        FUN_019c9f64(param_1,
                     "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by the peer\n"
                    );
        uVar3 = 9;
      }
      else {
        __dest = (void *)(*(code *)PTR_malloc_02bf74a8)((ulong)uVar1);
        *(void **)(param_4 + 0x10) = __dest;
        if (__dest == (void *)0x0) {
          uVar3 = 0x1b;
        }
        else {
          memcpy(__dest,(void *)(param_2 + (ulong)uVar2),(ulong)uVar1);
          uVar3 = 0;
          *(uint *)(param_4 + 0x18) = uVar1;
        }
      }
    }
  }
  return uVar3;
}




int FUN_019eb8e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long *local_38;
  ulong local_28;
  
  local_28 = 0;
  local_38 = (long *)0x0;
  iVar2 = FUN_019f0cd0(param_2,&local_38,&local_28);
  if (iVar2 == 0) {
    if (local_38 == (long *)0x0) {
      pcVar3 = "NTLM handshake failure (unhandled condition)\n";
    }
    else {
      *(undefined4 *)(param_3 + 4) = 0;
      if (((0x1f < local_28) && (*local_38 == 0x5053534d4c544e)) && ((int)local_38[1] == 2)) {
        cVar1 = *(char *)((long)local_38 + 0x16);
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)((long)local_38 + 0x14);
        *(long *)(param_3 + 8) = local_38[3];
        if ((cVar1 < '\0') && (iVar2 = FUN_019eb800(param_1,local_38,local_28,param_3), iVar2 != 0))
        {
          (*(code *)PTR_free_02bf74b0)(local_38);
          FUN_019c9f64(param_1,"NTLM handshake failure (bad type-2 message)\n");
          return iVar2;
        }
        (*(code *)PTR_free_02bf74b0)(local_38);
        return 0;
      }
      (*(code *)PTR_free_02bf74b0)(local_38);
      pcVar3 = "NTLM handshake failure (bad type-2 message)\n";
    }
    FUN_019c9f64(param_1,pcVar3);
    iVar2 = 9;
  }
  return iVar2;
}




void FUN_019eba38(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_430 [1024];
  
  FUN_019d5bc0(auStack_430,0x400,&DAT_01e27615,0,0,0,0,6,0x82,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
               &DAT_01e277f2,&DAT_01e277f2);
  FUN_019f0ec4(0,auStack_430,0x20,in_x3,in_x4);
  return;
}




undefined8
FUN_019ebaf4(undefined8 param_1,char *param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  size_t __n;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  size_t __n_00;
  char *__s;
  ulong __n_01;
  char *__src;
  undefined4 *local_8f0;
  undefined1 auStack_8d8 [16];
  undefined8 local_8c8;
  undefined4 local_8c0;
  undefined4 local_8bc;
  char acStack_8ac [1028];
  undefined4 *local_4a8;
  undefined4 auStack_49c [6];
  uint local_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 auStack_460 [128];
  
  local_484 = 0x18;
  local_4a8 = (undefined4 *)0x0;
  uVar2 = *(uint *)(param_4 + 4);
  memset(acStack_8ac,0,0x401);
  pcVar9 = strchr(param_2,0x5c);
  if (pcVar9 == (char *)0x0) {
    pcVar9 = strchr(param_2,0x2f);
  }
  __src = "";
  __s = param_2;
  if (pcVar9 != (char *)0x0) {
    __s = pcVar9 + 1;
    __src = param_2;
  }
  __n_01 = 0;
  if (pcVar9 != (char *)0x0) {
    __n_01 = (long)pcVar9 - (long)param_2;
  }
  if (__s == (char *)0x0) {
    __n = 0;
  }
  else {
    __n = strlen(__s);
  }
  iVar6 = FUN_019e9e2c(acStack_8ac,0x401);
  if (iVar6 == 0) {
    __n_00 = strlen(acStack_8ac);
  }
  else {
    FUN_019c9f64(param_1,"gethostname() failed, continuing without!\n");
    __n_00 = 0;
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    if ((*(byte *)(param_4 + 6) >> 3 & 1) == 0) {
      uVar10 = FUN_019f87c8(param_1,param_3,&uStack_468);
      if ((int)uVar10 == 0x1b) {
        return uVar10;
      }
      puVar12 = (undefined1 *)(param_4 + 8);
      FUN_019f85d8(&uStack_468,puVar12,auStack_49c);
      FUN_019f8708(param_1,param_3,&local_8c8);
      puVar11 = &local_8c8;
      puVar13 = &local_480;
    }
    else {
      uVar7 = FUN_019c2a2c(param_1);
      local_8bc = FUN_019c2a2c(param_1);
      local_470 = 0;
      uStack_478 = 0;
      local_8c8 = *(undefined8 *)(param_4 + 8);
      local_8c0 = uVar7;
      local_480 = uVar7;
      uStack_47c = local_8bc;
      thunk_FUN_019ee714(&local_8c8,0x10,auStack_8d8,0x10);
      uVar10 = FUN_019f87c8(param_1,param_3,&uStack_468);
      if ((int)uVar10 == 0x1b) {
        return uVar10;
      }
      puVar11 = &uStack_468;
      puVar12 = auStack_8d8;
      puVar13 = auStack_49c;
    }
    local_8f0 = auStack_49c;
    FUN_019f85d8(puVar11,puVar12,puVar13);
  }
  else {
    uVar7 = FUN_019c2a2c(param_1);
    local_8c8 = CONCAT44(local_8c8._4_4_,uVar7);
    uVar7 = FUN_019c2a2c(param_1);
    local_8c8 = CONCAT44(uVar7,(undefined4)local_8c8);
    uVar10 = FUN_019f87c8(param_1,param_3,&uStack_468);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    uVar10 = FUN_019f8904(__s,__n,__src,__n_01,&uStack_468,auStack_49c);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    uVar10 = FUN_019f8b88(auStack_49c,&local_8c8,param_4 + 8,&local_480);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    uVar10 = FUN_019f8a08(auStack_49c,&local_8c8,param_4,&local_4a8,&local_484);
    local_8f0 = local_4a8;
    if ((int)uVar10 != 0) {
      return uVar10;
    }
  }
  if ((uVar2 & 1) != 0) {
    __n_01 = __n_01 << 1;
    __n = __n << 1;
    __n_00 = __n_00 << 1;
  }
  uVar3 = *(uint *)(param_4 + 4);
  uVar14 = __n_01 >> 8 & 0xff;
  uVar8 = local_484 + 0x58;
  uVar17 = __n_01 + uVar8;
  uVar5 = local_484 >> 8 & 0xff;
  uVar15 = __n >> 8 & 0xff;
  uVar16 = __n_00 >> 8 & 0xff;
  uVar8 = FUN_019d5bc0(&uStack_468,0x400,&DAT_01e2767d,0,0,0,0,0x18,0,0x18,0,0x40,0,0,0,
                       local_484 & 0xff,uVar5,local_484 & 0xff,uVar5,0x58,0,0,0,__n_01 & 0xff,uVar14
                       ,__n_01 & 0xff,uVar14,(ulong)uVar8 & 0xff,uVar8 >> 8 & 0xff,0,0,__n & 0xff,
                       uVar15,__n & 0xff,uVar15,uVar17 & 0xff,uVar17 >> 8 & 0xff,0,0,__n_00 & 0xff,
                       uVar16,__n_00 & 0xff,uVar16,uVar17 + __n & 0xff,uVar17 + __n >> 8 & 0xff,0,0,
                       0,0,0,0,0,0,0,0,uVar3 & 0xff,uVar3 >> 8 & 0xff,uVar3 >> 0x10 & 0xff,
                       uVar3 >> 0x18);
  uVar14 = (ulong)(int)uVar8;
  uVar17 = uVar14;
  if (uVar8 < 1000) {
    uVar17 = uVar14 + 0x18;
    *(undefined8 *)((long)auStack_460 + uVar14 + 8) = local_470;
    *(undefined8 *)((long)auStack_460 + uVar14) = uStack_478;
    *(ulong *)((long)&uStack_468 + uVar14) = CONCAT44(uStack_47c,local_480);
  }
  uVar14 = (ulong)local_484;
  if (uVar17 < 0x400 - local_484) {
    memcpy((void *)((long)&uStack_468 + uVar17),local_8f0,uVar14);
    uVar17 = uVar17 + uVar14;
  }
  if (local_4a8 != (undefined4 *)0x0) {
    (*(code *)PTR_free_02bf74b0)();
    local_4a8 = (undefined4 *)0x0;
  }
  lVar1 = uVar17 + __n_01;
  if (lVar1 + __n_00 + __n < 0x400) {
    if ((uVar2 & 1) == 0) {
      memcpy((void *)((long)&uStack_468 + uVar17),__src,__n_01);
      memcpy((void *)((long)&uStack_468 + lVar1),__s,__n);
      memcpy((void *)((long)&uStack_468 + lVar1 + __n),acStack_8ac,__n_00);
    }
    else {
      uVar14 = __n_01 >> 1;
      if (uVar14 != 0) {
        puVar12 = (undefined1 *)((long)&uStack_468 + uVar17 + 1);
        do {
          cVar4 = *__src;
          *puVar12 = 0;
          uVar14 = uVar14 - 1;
          puVar12[-1] = cVar4;
          puVar12 = puVar12 + 2;
          __src = __src + 1;
        } while (uVar14 != 0);
      }
      uVar14 = __n >> 1;
      if (uVar14 != 0) {
        puVar12 = (undefined1 *)((long)&uStack_468 + __n_01 + uVar17 + 1);
        do {
          cVar4 = *__s;
          *puVar12 = 0;
          uVar14 = uVar14 - 1;
          puVar12[-1] = cVar4;
          puVar12 = puVar12 + 2;
          __s = __s + 1;
        } while (uVar14 != 0);
      }
      uVar14 = __n_00 >> 1;
      if (uVar14 != 0) {
        puVar12 = (undefined1 *)((long)&uStack_468 + __n_01 + __n + uVar17 + 1);
        pcVar9 = acStack_8ac;
        do {
          cVar4 = *pcVar9;
          *puVar12 = 0;
          uVar14 = uVar14 - 1;
          puVar12[-1] = cVar4;
          puVar12 = puVar12 + 2;
          pcVar9 = pcVar9 + 1;
        } while (uVar14 != 0);
      }
    }
    uVar10 = FUN_019f0ec4(0,&uStack_468,lVar1 + __n + __n_00,param_5,param_6);
  }
  else {
    FUN_019ca0fc(param_1,"user + domain + host name too big");
    uVar10 = 0x1b;
  }
  return uVar10;
}




void thunk_FUN_019eba38(void)

{
  FUN_019eba38();
  return;
}




int thunk_FUN_019eb8e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long *plStack_38;
  ulong uStack_28;
  
  uStack_28 = 0;
  plStack_38 = (long *)0x0;
  iVar2 = FUN_019f0cd0(param_2,&plStack_38,&uStack_28);
  if (iVar2 == 0) {
    if (plStack_38 == (long *)0x0) {
      pcVar3 = "NTLM handshake failure (unhandled condition)\n";
    }
    else {
      *(undefined4 *)(param_3 + 4) = 0;
      if (((0x1f < uStack_28) && (*plStack_38 == 0x5053534d4c544e)) && ((int)plStack_38[1] == 2)) {
        cVar1 = *(char *)((long)plStack_38 + 0x16);
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)((long)plStack_38 + 0x14);
        *(long *)(param_3 + 8) = plStack_38[3];
        if ((cVar1 < '\0') &&
           (iVar2 = FUN_019eb800(param_1,plStack_38,uStack_28,param_3), iVar2 != 0)) {
          (*(code *)PTR_free_02bf74b0)(plStack_38);
          FUN_019c9f64(param_1,"NTLM handshake failure (bad type-2 message)\n");
          return iVar2;
        }
        (*(code *)PTR_free_02bf74b0)(plStack_38);
        return 0;
      }
      (*(code *)PTR_free_02bf74b0)(plStack_38);
      pcVar3 = "NTLM handshake failure (bad type-2 message)\n";
    }
    FUN_019c9f64(param_1,pcVar3);
    iVar2 = 9;
  }
  return iVar2;
}




undefined8
thunk_FUN_019ebaf4(undefined8 param_1,char *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  size_t __n;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  size_t __n_00;
  char *__s;
  ulong __n_01;
  char *__src;
  undefined4 *puStack_8f0;
  undefined1 auStack_8d8 [16];
  undefined8 uStack_8c8;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  char acStack_8ac [1028];
  undefined4 *puStack_4a8;
  undefined4 auStack_49c [6];
  uint uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 auStack_460 [128];
  
  uStack_484 = 0x18;
  puStack_4a8 = (undefined4 *)0x0;
  uVar2 = *(uint *)(param_4 + 4);
  memset(acStack_8ac,0,0x401);
  pcVar9 = strchr(param_2,0x5c);
  if (pcVar9 == (char *)0x0) {
    pcVar9 = strchr(param_2,0x2f);
  }
  __src = "";
  __s = param_2;
  if (pcVar9 != (char *)0x0) {
    __s = pcVar9 + 1;
    __src = param_2;
  }
  __n_01 = 0;
  if (pcVar9 != (char *)0x0) {
    __n_01 = (long)pcVar9 - (long)param_2;
  }
  if (__s == (char *)0x0) {
    __n = 0;
  }
  else {
    __n = strlen(__s);
  }
  iVar6 = FUN_019e9e2c(acStack_8ac,0x401);
  if (iVar6 == 0) {
    __n_00 = strlen(acStack_8ac);
  }
  else {
    FUN_019c9f64(param_1,"gethostname() failed, continuing without!\n");
    __n_00 = 0;
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    if ((*(byte *)(param_4 + 6) >> 3 & 1) == 0) {
      uVar10 = FUN_019f87c8(param_1,param_3,&uStack_468);
      if ((int)uVar10 == 0x1b) {
        return uVar10;
      }
      puVar12 = (undefined1 *)(param_4 + 8);
      FUN_019f85d8(&uStack_468,puVar12,auStack_49c);
      FUN_019f8708(param_1,param_3,&uStack_8c8);
      puVar11 = &uStack_8c8;
      puVar13 = &uStack_480;
    }
    else {
      uVar7 = FUN_019c2a2c(param_1);
      uStack_8bc = FUN_019c2a2c(param_1);
      uStack_470 = 0;
      uStack_478 = 0;
      uStack_8c8 = *(undefined8 *)(param_4 + 8);
      uStack_8c0 = uVar7;
      uStack_480 = uVar7;
      uStack_47c = uStack_8bc;
      thunk_FUN_019ee714(&uStack_8c8,0x10,auStack_8d8,0x10);
      uVar10 = FUN_019f87c8(param_1,param_3,&uStack_468);
      if ((int)uVar10 == 0x1b) {
        return uVar10;
      }
      puVar11 = &uStack_468;
      puVar12 = auStack_8d8;
      puVar13 = auStack_49c;
    }
    puStack_8f0 = auStack_49c;
    FUN_019f85d8(puVar11,puVar12,puVar13);
  }
  else {
    uVar7 = FUN_019c2a2c(param_1);
    uStack_8c8 = CONCAT44(uStack_8c8._4_4_,uVar7);
    uVar7 = FUN_019c2a2c(param_1);
    uStack_8c8 = CONCAT44(uVar7,(undefined4)uStack_8c8);
    uVar10 = FUN_019f87c8(param_1,param_3,&uStack_468);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    uVar10 = FUN_019f8904(__s,__n,__src,__n_01,&uStack_468,auStack_49c);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    uVar10 = FUN_019f8b88(auStack_49c,&uStack_8c8,param_4 + 8,&uStack_480);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    uVar10 = FUN_019f8a08(auStack_49c,&uStack_8c8,param_4,&puStack_4a8,&uStack_484);
    puStack_8f0 = puStack_4a8;
    if ((int)uVar10 != 0) {
      return uVar10;
    }
  }
  if ((uVar2 & 1) != 0) {
    __n_01 = __n_01 << 1;
    __n = __n << 1;
    __n_00 = __n_00 << 1;
  }
  uVar3 = *(uint *)(param_4 + 4);
  uVar14 = __n_01 >> 8 & 0xff;
  uVar8 = uStack_484 + 0x58;
  uVar17 = __n_01 + uVar8;
  uVar5 = uStack_484 >> 8 & 0xff;
  uVar15 = __n >> 8 & 0xff;
  uVar16 = __n_00 >> 8 & 0xff;
  uVar8 = FUN_019d5bc0(&uStack_468,0x400,&DAT_01e2767d,0,0,0,0,0x18,0,0x18,0,0x40,0,0,0,
                       uStack_484 & 0xff,uVar5,uStack_484 & 0xff,uVar5,0x58,0,0,0,__n_01 & 0xff,
                       uVar14,__n_01 & 0xff,uVar14,(ulong)uVar8 & 0xff,uVar8 >> 8 & 0xff,0,0,
                       __n & 0xff,uVar15,__n & 0xff,uVar15,uVar17 & 0xff,uVar17 >> 8 & 0xff,0,0,
                       __n_00 & 0xff,uVar16,__n_00 & 0xff,uVar16,uVar17 + __n & 0xff,
                       uVar17 + __n >> 8 & 0xff,0,0,0,0,0,0,0,0,0,0,uVar3 & 0xff,uVar3 >> 8 & 0xff,
                       uVar3 >> 0x10 & 0xff,uVar3 >> 0x18);
  uVar14 = (ulong)(int)uVar8;
  uVar17 = uVar14;
  if (uVar8 < 1000) {
    uVar17 = uVar14 + 0x18;
    *(undefined8 *)((long)auStack_460 + uVar14 + 8) = uStack_470;
    *(undefined8 *)((long)auStack_460 + uVar14) = uStack_478;
    *(ulong *)((long)&uStack_468 + uVar14) = CONCAT44(uStack_47c,uStack_480);
  }
  uVar14 = (ulong)uStack_484;
  if (uVar17 < 0x400 - uStack_484) {
    memcpy((void *)((long)&uStack_468 + uVar17),puStack_8f0,uVar14);
    uVar17 = uVar17 + uVar14;
  }
  if (puStack_4a8 != (undefined4 *)0x0) {
    (*(code *)PTR_free_02bf74b0)();
    puStack_4a8 = (undefined4 *)0x0;
  }
  lVar1 = uVar17 + __n_01;
  if (lVar1 + __n_00 + __n < 0x400) {
    if ((uVar2 & 1) == 0) {
      memcpy((void *)((long)&uStack_468 + uVar17),__src,__n_01);
      memcpy((void *)((long)&uStack_468 + lVar1),__s,__n);
      memcpy((void *)((long)&uStack_468 + lVar1 + __n),acStack_8ac,__n_00);
    }
    else {
      uVar14 = __n_01 >> 1;
      if (uVar14 != 0) {
        puVar12 = (undefined1 *)((long)&uStack_468 + uVar17 + 1);
        do {
          cVar4 = *__src;
          *puVar12 = 0;
          uVar14 = uVar14 - 1;
          puVar12[-1] = cVar4;
          puVar12 = puVar12 + 2;
          __src = __src + 1;
        } while (uVar14 != 0);
      }
      uVar14 = __n >> 1;
      if (uVar14 != 0) {
        puVar12 = (undefined1 *)((long)&uStack_468 + __n_01 + uVar17 + 1);
        do {
          cVar4 = *__s;
          *puVar12 = 0;
          uVar14 = uVar14 - 1;
          puVar12[-1] = cVar4;
          puVar12 = puVar12 + 2;
          __s = __s + 1;
        } while (uVar14 != 0);
      }
      uVar14 = __n_00 >> 1;
      if (uVar14 != 0) {
        puVar12 = (undefined1 *)((long)&uStack_468 + __n_01 + __n + uVar17 + 1);
        pcVar9 = acStack_8ac;
        do {
          cVar4 = *pcVar9;
          *puVar12 = 0;
          uVar14 = uVar14 - 1;
          puVar12[-1] = cVar4;
          puVar12 = puVar12 + 2;
          pcVar9 = pcVar9 + 1;
        } while (uVar14 != 0);
      }
    }
    uVar10 = FUN_019f0ec4(0,&uStack_468,lVar1 + __n + __n_00,param_5,param_6);
  }
  else {
    FUN_019ca0fc(param_1,"user + domain + host name too big");
    uVar10 = 0x1b;
  }
  return uVar10;
}

