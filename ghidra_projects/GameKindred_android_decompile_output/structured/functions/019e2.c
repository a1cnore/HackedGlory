// functions/019e2 — 13 functions
#include "libGameKindred.h"




long FUN_019e2088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = libssh2_sftp_write(*(undefined8 *)(param_1 + 0x668),param_3,param_4);
  if (lVar3 == -0x25) {
    uVar1 = libssh2_session_block_directions(*(undefined8 *)(param_1 + 0x650));
    if (uVar1 == 0) {
      uVar1 = *(uint *)(param_1 + 0x670);
    }
    else {
      uVar1 = uVar1 & 3;
    }
    lVar3 = 0;
    *(uint *)(param_1 + 0x69c) = uVar1;
    uVar2 = 0x51;
  }
  else {
    *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(param_1 + 0x670);
    if (-1 < lVar3) {
      return lVar3;
    }
    uVar2 = FUN_019e1a68();
    lVar3 = -1;
  }
  *param_5 = uVar2;
  return lVar3;
}




undefined8 FUN_019e213c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  char local_34 [4];
  
  if (*(int *)((long)param_1 + 0x56c) != 0) {
    uVar7 = *param_1;
    do {
      uVar4 = FUN_019dedf0(param_1,local_34);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      iVar3 = FUN_019c3f38(param_1);
      if (iVar3 != 0) {
        return 0x2a;
      }
      auVar8 = FUN_019c338c();
      uVar4 = FUN_019d45a4(uVar7,auVar8._0_8_,auVar8._8_8_);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      lVar5 = FUN_019bccd8(uVar7,0,0);
      if (lVar5 < 0) {
        FUN_019ca0fc(uVar7,"Operation timed out");
        return 0x1c;
      }
      if (local_34[0] != '\0') {
        uVar6 = libssh2_session_block_directions(param_1[0xca]);
        uVar2 = *(undefined4 *)(param_1 + 0x3a);
        uVar1 = uVar2;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0xffffffff;
        }
        if ((uVar6 & 2) == 0) {
          uVar2 = 0xffffffff;
        }
        if (999 < lVar5) {
          lVar5 = 1000;
        }
        FUN_019c14c8(uVar1,0xffffffff,uVar2,lVar5);
      }
    } while (*(int *)((long)param_1 + 0x56c) != 0);
  }
  return 0;
}




int FUN_019e2230(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(*param_1 + 0x218);
  if (param_2 == 0) {
    param_2 = FUN_019e213c(param_1);
  }
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    (*(code *)PTR_free_02bf74b0)();
    *plVar2 = 0;
  }
  iVar1 = FUN_019c3ee8(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x1e4) = 0;
  }
  else {
    param_2 = 0x2a;
  }
  return param_2;
}




undefined8 FUN_019e22b8(undefined1 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x41;
  switch(param_1) {
  case 0x62:
    return 0x42;
  case 99:
    return 0x43;
  case 100:
    return 0x44;
  case 0x65:
    return 0x45;
  case 0x66:
    return 0x46;
  case 0x67:
    return 0x47;
  case 0x68:
    return 0x48;
  case 0x69:
    return 0x49;
  case 0x6a:
    return 0x4a;
  case 0x6b:
    return 0x4b;
  case 0x6c:
    return 0x4c;
  case 0x6d:
    return 0x4d;
  case 0x6e:
    return 0x4e;
  case 0x6f:
    return 0x4f;
  case 0x70:
    return 0x50;
  case 0x71:
    return 0x51;
  case 0x72:
    return 0x52;
  case 0x73:
    return 0x53;
  case 0x74:
    return 0x54;
  case 0x75:
    return 0x55;
  case 0x76:
    return 0x56;
  case 0x77:
    return 0x57;
  case 0x78:
    return 0x58;
  case 0x79:
    return 0x59;
  case 0x7a:
    uVar1 = 0x5a;
  }
  return uVar1;
}




bool FUN_019e23a8(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = *param_1;
  while (cVar3 != '\0') {
    param_1 = param_1 + 1;
    cVar2 = *param_2;
    if (cVar2 == '\0') break;
    cVar1 = FUN_019e22b8(cVar3);
    cVar2 = FUN_019e22b8(cVar2);
    if (cVar1 != cVar2) break;
    param_2 = param_2 + 1;
    cVar3 = *param_1;
  }
  cVar3 = FUN_019e22b8(cVar3);
  cVar2 = FUN_019e22b8(*param_2);
  return cVar3 == cVar2;
}




bool FUN_019e2430(char *param_1,char *param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = *param_1;
  for (; ((cVar3 != '\0' && (param_1 = param_1 + 1, param_3 != 0)) &&
         (cVar3 = *param_2, cVar3 != '\0')); param_2 = param_2 + 1) {
    cVar2 = FUN_019e22b8();
    cVar3 = FUN_019e22b8(cVar3);
    if (cVar2 != cVar3) goto LAB_019e24ac;
    cVar3 = *param_1;
    param_3 = param_3 + -1;
  }
  if (param_3 == 0) {
    bVar1 = true;
  }
  else {
    cVar3 = *param_2;
    cVar2 = FUN_019e22b8();
    cVar3 = FUN_019e22b8(cVar3);
LAB_019e24ac:
    bVar1 = cVar2 == cVar3;
  }
  return bVar1;
}




void FUN_019e24d4(undefined1 *param_1,char *param_2,long param_3)

{
  undefined1 uVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = FUN_019e22b8(*param_2);
    *param_1 = uVar1;
    if (*param_2 == '\0') break;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  return;
}




void FUN_019e2528(long param_1)

{
  long lVar1;
  
  while (param_1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR_free_02bf74b0)(param_1);
    param_1 = lVar1;
  }
  return;
}




int FUN_019e2590(char *param_1,char *param_2,addrinfo *param_3,long *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t __n;
  addrinfo *paVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  addrinfo *local_58;
  
  *param_4 = 0;
  iVar1 = getaddrinfo(param_1,param_2,param_3,&local_58);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_58 == (addrinfo *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    paVar6 = local_58;
    puVar7 = (undefined8 *)0x0;
    do {
      puVar4 = puVar5;
      puVar2 = puVar7;
      if (paVar6->ai_family == 2) {
        __n = 0x10;
LAB_019e2604:
        if (((paVar6->ai_canonname != (char *)0x0) && (paVar6->ai_addrlen != 0)) &&
           (__n <= paVar6->ai_addrlen)) {
          puVar2 = (undefined8 *)(*(code *)PTR_malloc_02bf74a8)(0x30);
          if (puVar2 != (undefined8 *)0x0) {
            uVar9 = *(undefined8 *)&paVar6->ai_socktype;
            uVar8 = *(undefined8 *)paVar6;
            *(int *)(puVar2 + 2) = (int)__n;
            puVar2[1] = uVar9;
            *puVar2 = uVar8;
            puVar2[3] = 0;
            puVar2[4] = 0;
            puVar2[5] = 0;
            __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(__n);
            puVar2[4] = __dest;
            if (__dest != (void *)0x0) {
              memcpy(__dest,paVar6->ai_canonname,__n);
              if (paVar6->ai_addr != (sockaddr *)0x0) {
                lVar3 = (*(code *)PTR_strdup_02bf74c0)();
                puVar2[3] = lVar3;
                if (lVar3 == 0) {
                  (*(code *)PTR_free_02bf74b0)(puVar2[4]);
                  goto LAB_019e26d4;
                }
              }
              puVar4 = puVar2;
              if (puVar5 != (undefined8 *)0x0) {
                puVar4 = puVar5;
              }
              if (puVar7 != (undefined8 *)0x0) {
                puVar7[5] = puVar2;
              }
              goto LAB_019e2694;
            }
LAB_019e26d4:
            (*(code *)PTR_free_02bf74b0)(puVar2);
          }
          iVar1 = 6;
          goto LAB_019e26e0;
        }
      }
      else if (paVar6->ai_family == 10) {
        __n = 0x1c;
        goto LAB_019e2604;
      }
LAB_019e2694:
      paVar6 = paVar6->ai_next;
      puVar5 = puVar4;
      puVar7 = puVar2;
    } while (paVar6 != (addrinfo *)0x0);
    iVar1 = 0;
LAB_019e26e0:
    if (local_58 != (addrinfo *)0x0) {
      freeaddrinfo(local_58);
    }
    if (iVar1 != 0) {
      FUN_019e2528(puVar5);
      puVar5 = (undefined8 *)0x0;
      goto LAB_019e270c;
    }
  }
  iVar1 = (uint)(puVar5 == (undefined8 *)0x0) << 3;
LAB_019e270c:
  *param_4 = (long)puVar5;
  return iVar1;
}




long FUN_019e2730(undefined8 *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if ((param_1 == (undefined8 *)0x0) ||
     (puVar9 = *(undefined8 **)param_1[3], puVar9 == (undefined8 *)0x0)) {
LAB_019e287c:
    lVar2 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 2);
    lVar7 = 8;
    lVar6 = 0;
    lVar8 = 0;
    do {
      uVar5 = 0x1c;
      if (iVar4 != 10) {
        uVar5 = 0x10;
      }
      lVar1 = (*(code *)PTR_calloc_02bf74c8)(1,0x30);
      if (lVar1 == 0) {
LAB_019e2874:
        FUN_019e2528(lVar6);
        goto LAB_019e287c;
      }
      lVar2 = (*(code *)PTR_strdup_02bf74c0)(*param_1);
      *(long *)(lVar1 + 0x18) = lVar2;
      if (lVar2 == 0) {
LAB_019e286c:
        (*(code *)PTR_free_02bf74b0)(lVar1);
        goto LAB_019e2874;
      }
      puVar3 = (undefined2 *)(*(code *)PTR_calloc_02bf74c8)(1,uVar5);
      *(undefined2 **)(lVar1 + 0x20) = puVar3;
      if (puVar3 == (undefined2 *)0x0) {
        (*(code *)PTR_free_02bf74b0)(*(undefined8 *)(lVar1 + 0x18));
        goto LAB_019e286c;
      }
      lVar2 = lVar1;
      if (lVar6 != 0) {
        lVar2 = lVar6;
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x28) = lVar1;
      }
      iVar4 = *(int *)(param_1 + 2);
      *(undefined4 *)(lVar1 + 0x10) = uVar5;
      *(int *)(lVar1 + 4) = iVar4;
      *(undefined4 *)(lVar1 + 8) = 1;
      if (iVar4 == 10) {
        uVar10 = *puVar9;
        *(undefined8 *)(puVar3 + 8) = puVar9[1];
        *(undefined8 *)(puVar3 + 4) = uVar10;
LAB_019e2820:
        iVar4 = *(int *)(param_1 + 2);
        puVar3[1] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
        *puVar3 = (short)iVar4;
      }
      else if (iVar4 == 2) {
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)puVar9;
        goto LAB_019e2820;
      }
      puVar9 = *(undefined8 **)(param_1[3] + lVar7);
      lVar7 = lVar7 + 8;
      lVar6 = lVar2;
      lVar8 = lVar1;
    } while (puVar9 != (undefined8 *)0x0);
  }
  return lVar2;
}




undefined8 FUN_019e28a0(int param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  plVar1 = (long *)(*(code *)PTR_malloc_02bf74a8)(0x40);
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR_strdup_02bf74c0)(param_3);
    if (lVar2 != 0) {
      if (param_1 == 10) {
        lVar5 = *param_2;
        uVar4 = 0x10;
        plVar1[5] = param_2[1];
        plVar1[4] = lVar5;
LAB_019e2940:
        *plVar1 = lVar2;
        plVar1[1] = 0;
        *(int *)(plVar1 + 2) = (int)(short)param_1;
        *(undefined4 *)((long)plVar1 + 0x14) = uVar4;
        plVar1[6] = (long)(plVar1 + 4);
        plVar1[3] = (long)(plVar1 + 6);
        plVar1[7] = 0;
        uVar3 = FUN_019e2730(plVar1,param_4);
        (*(code *)PTR_free_02bf74b0)(lVar2);
        (*(code *)PTR_free_02bf74b0)(plVar1);
        return uVar3;
      }
      if (param_1 == 2) {
        *(int *)(plVar1 + 4) = (int)*param_2;
        uVar4 = 4;
        goto LAB_019e2940;
      }
      (*(code *)PTR_free_02bf74b0)(lVar2);
    }
    (*(code *)PTR_free_02bf74b0)(plVar1);
  }
  return 0;
}




undefined8 FUN_019e29cc(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  iVar1 = inet_pton(2,param_1,auStack_28);
  if (iVar1 < 1) {
    iVar1 = inet_pton(10,param_1,auStack_38);
    if (iVar1 < 1) {
      return 0;
    }
    uVar2 = 10;
    puVar3 = auStack_38;
  }
  else {
    uVar2 = 2;
    puVar3 = auStack_28;
  }
  uVar2 = FUN_019e28a0(uVar2,puVar3,param_1,param_2);
  return uVar2;
}




undefined8 FUN_019e2a4c(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar2 = (*(code *)PTR_calloc_02bf74c8)(0x48,1);
  *(long *)(lVar5 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    if ((*(char *)((long)param_1 + 0x2e3) != '\0') && (*(char *)(lVar5 + 0x50a) == '\0')) {
      ppuVar1 = &PTR_DAT_02bb0780;
      if ((undefined **)param_1[100] != &PTR_DAT_02bb0680) {
        ppuVar1 = &PTR_s_IMAPS_02bb0800;
      }
      pcVar4 = (code *)ppuVar1[1];
      param_1[100] = (long)ppuVar1;
      uVar3 = (*pcVar4)(param_1);
      return uVar3;
    }
    uVar3 = 0;
    *(long *)(lVar5 + 0x8ae8) = *(long *)(lVar5 + 0x8ae8) + 1;
  }
  return uVar3;
}

