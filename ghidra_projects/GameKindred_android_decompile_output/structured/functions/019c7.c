// functions/019c7 — 11 functions
#include "libGameKindred.h"




int FUN_019c7674(long *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x218);
  FUN_019db3b4();
  param_1[0x7a] = *(long *)(lVar1 + 0x2c8);
  param_1[0x7b] = *(long *)(lVar1 + 0x248);
  param_1[0x78] = *(long *)(lVar1 + 0x298);
  param_1[0x79] = *(long *)(lVar1 + 0x328);
  if (lVar2 == 0) {
    param_2 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(lVar2 + 0x80);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)PTR_free_02bf74b0)(*puVar3);
      (*(code *)PTR_free_02bf74b0)(puVar3);
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
    if (*(int *)(lVar1 + 0x420) == 4) {
      *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
    }
    else if (*(int *)(lVar1 + 0x420) == 3) {
      *(long *)(lVar1 + 0x98) = *(long *)(lVar2 + 0x30) + *(long *)(lVar2 + 0x28);
      FUN_019f1e60(lVar2);
      if (*(FILE **)(lVar2 + 0x48) != (FILE *)0x0) {
        fclose(*(FILE **)(lVar2 + 0x48));
        *(undefined8 *)(lVar2 + 0x48) = 0;
      }
    }
    if ((((param_2 == 0) && ((param_3 & 1) == 0)) &&
        (param_2 = 0, *(char *)((long)param_1 + 0x2ec) == '\0')) &&
       ((param_2 = 0, *(char *)(lVar1 + 0x539) == '\0' &&
        (param_2 = 0, *(long *)(lVar1 + 0xa8) + *(long *)(lVar2 + 0x28) <= *(long *)(lVar1 + 0xb0)))
       )) {
      FUN_019ca0fc(lVar1,"Empty reply from server");
      param_2 = 0x34;
    }
  }
  return param_2;
}




undefined8 FUN_019c77b0(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  uVar1 = FUN_019ea0a4();
  if (((int)uVar1 == 0) && (*(int *)(param_1 + 0x6b8) != 1)) {
    if ((*(byte *)(*(long *)(param_1 + 0x328) + 0x7c) & 1) == 0) {
      uVar1 = 0;
      *param_2 = 1;
    }
    else {
      uVar1 = FUN_019c2ba0(param_1,0,param_2);
      if ((int)uVar1 != 0) {
        *(undefined1 *)(param_1 + 0x2e0) = 1;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_019c78b4(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  sVar2 = strlen(param_2);
  puVar3 = *(undefined8 **)(*param_1 + 0x3b0);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_019e2430(*puVar3,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar3 = (undefined8 *)puVar3[1];
  }
  return *puVar3;
}




undefined8 FUN_019c791c(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  sVar2 = strlen(param_2);
  lVar3 = *param_1;
  if ((*(char *)((long)param_1 + 0x2e2) == '\0') || (*(char *)(lVar3 + 0x3c8) == '\0')) {
    plVar4 = (long *)(lVar3 + 0x3b0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x3b8);
  }
  puVar5 = (undefined8 *)*plVar4;
  while( true ) {
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = FUN_019e2430(*puVar5,param_2,sVar2);
    if (iVar1 != 0) break;
    puVar5 = (undefined8 *)puVar5[1];
  }
  return *puVar5;
}




void * FUN_019c79a0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  void *__dest;
  uint uVar5;
  byte *__s;
  
  do {
    __s = param_1;
    param_1 = __s + 1;
    bVar1 = *__s;
  } while ((bVar1 == 0) != (bVar1 != 0x3a));
  uVar5 = (uint)param_1[-(ulong)(bVar1 == 0)];
  if (bVar1 != 0) {
    __s = param_1;
  }
  if (param_1[-(ulong)(bVar1 == 0)] != 0) {
    do {
      iVar2 = isspace(uVar5);
      if (iVar2 == 0) break;
      __s = __s + 1;
      uVar5 = (uint)*__s;
    } while (uVar5 != 0);
  }
  pbVar3 = (byte *)strchr((char *)__s,0xd);
  if ((pbVar3 == (byte *)0x0) && (pbVar3 = (byte *)strchr((char *)__s,10), pbVar3 == (byte *)0x0)) {
    sVar4 = strlen((char *)__s);
    pbVar3 = __s + sVar4;
    if (pbVar3 == (byte *)0x0) {
      return (void *)0x0;
    }
  }
  while ((__s < pbVar3 && (iVar2 = isspace((uint)*pbVar3), iVar2 != 0))) {
    pbVar3 = pbVar3 + -1;
  }
  __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(pbVar3 + (2 - (long)__s));
  if (__dest != (void *)0x0) {
    memcpy(__dest,__s,(size_t)(pbVar3 + (1 - (long)__s)));
    *(byte *)((long)__dest + (long)(pbVar3 + (1 - (long)__s))) = 0;
  }
  return __dest;
}




ulong FUN_019c7a9c(long *param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  iVar2 = *(int *)(lVar7 + 0x128);
  if (iVar2 - 100U < 100) {
    return 0;
  }
  pcVar1 = (char *)(lVar7 + 0x8a60);
  if (*pcVar1 != '\0') {
    uVar6 = 0;
    if (*(char *)(lVar7 + 0x510) != '\0') {
      uVar6 = 0x16;
    }
    return (ulong)uVar6;
  }
  if (*(char *)((long)param_1 + 0x2e4) == '\0') {
LAB_019c7b28:
    bVar3 = false;
  }
  else if (iVar2 == 0x191) {
LAB_019c7b10:
    uVar4 = FUN_019c7c64(lVar7 + 0x8a20);
    bVar3 = true;
    if ((uVar4 & 1) == 0) {
      *pcVar1 = '\x01';
      goto LAB_019c7b28;
    }
  }
  else {
    if (299 < iVar2) goto LAB_019c7b28;
    bVar3 = false;
    if (*(char *)((long)param_1 + 0x2ee) != '\0') goto LAB_019c7b10;
  }
  if ((*(char *)((long)param_1 + 0x2e5) == '\0') ||
     ((*(int *)(lVar7 + 0x128) != 0x197 &&
      ((299 < *(int *)(lVar7 + 0x128) || (*(char *)((long)param_1 + 0x2ee) == '\0')))))) {
LAB_019c7b68:
    if (!bVar3) {
      if ((((*(int *)(lVar7 + 0x128) < 300) && (*(char *)(lVar7 + 0x8a38) == '\0')) &&
          (*(char *)((long)param_1 + 0x2ee) != '\0')) && ((*(uint *)(lVar7 + 0x420) | 4) != 5)) {
        lVar5 = (*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(lVar7 + 0x768));
        *(long *)(lVar7 + 0x1f8) = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        *(char *)(lVar7 + 0x8a38) = '\x01';
      }
      goto LAB_019c7be8;
    }
  }
  else {
    uVar4 = FUN_019c7c64(lVar7 + 0x8a40);
    if ((uVar4 & 1) == 0) {
      *pcVar1 = '\x01';
      goto LAB_019c7b68;
    }
  }
  if (*(long *)(lVar7 + 0x1f8) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(lVar7 + 0x1f8) = 0;
  }
  lVar5 = (*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(lVar7 + 0x768));
  *(long *)(lVar7 + 0x1f8) = lVar5;
  if (lVar5 == 0) {
    return 0x1b;
  }
  if ((((*(uint *)(lVar7 + 0x420) | 4) != 5) && (*(char *)((long)param_1 + 0x2ef) == '\0')) &&
     (uVar4 = FUN_019c7cd0(param_1), (int)uVar4 != 0)) {
    return uVar4;
  }
LAB_019c7be8:
  uVar4 = FUN_019c7e40(param_1);
  if ((int)uVar4 != 0) {
    FUN_019ca0fc(lVar7,"The requested URL returned error: %d",*(undefined4 *)(lVar7 + 0x128));
    uVar4 = 0x16;
  }
  return uVar4;
}




undefined8 FUN_019c7c64(ulong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = (uint)(*param_1 & param_1[2]);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        if ((uVar1 >> 5 & 1) == 0) {
          if ((*param_1 & param_1[2] & 1) == 0) {
            uVar2 = 0;
            param_1[1] = 0x40000000;
          }
          else {
            uVar2 = 1;
            param_1[1] = 1;
          }
          goto LAB_019c7cb8;
        }
        uVar3 = 0x20;
      }
      else {
        uVar3 = 8;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 4;
  }
  param_1[1] = uVar3;
  uVar2 = 1;
LAB_019c7cb8:
  param_1[2] = 0;
  return uVar2;
}




undefined8 FUN_019c7cd0(long *param_1)

{
  uint uVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  lVar5 = *(long *)(lVar6 + 0x218);
  if (lVar5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar6 + 0x420);
  if ((uVar1 | 4) == 5) {
    return 0;
  }
  cVar2 = *(char *)((long)param_1 + 0x2ee);
  lVar7 = *(long *)(lVar5 + 0x30);
  sVar3 = 0;
  if (cVar2 == '\0') {
    if (uVar1 == 4) {
      sVar3 = *(size_t *)(lVar6 + 0x8b28);
      goto LAB_019c7d24;
    }
    if (uVar1 == 3) {
      sVar3 = *(size_t *)(lVar5 + 8);
      goto LAB_019c7d24;
    }
    if (uVar1 == 2) {
      sVar3 = *(size_t *)(lVar6 + 0x2a0);
      if (sVar3 == 0xffffffffffffffff) {
        if (*(char **)(lVar6 + 0x290) == (char *)0x0) goto LAB_019c7d88;
        sVar3 = strlen(*(char **)(lVar6 + 0x290));
      }
      goto LAB_019c7d24;
    }
LAB_019c7d88:
    *(undefined1 *)((long)param_1 + 0x2ef) = 0;
    sVar3 = 0xffffffffffffffff;
  }
  else {
LAB_019c7d24:
    *(undefined1 *)((long)param_1 + 0x2ef) = 0;
    if ((sVar3 != 0xffffffffffffffff) && ((long)sVar3 <= lVar7)) goto joined_r0x019c7d3c;
  }
  if ((*(long *)(lVar6 + 0x8a48) == 8) ||
     (((*(long *)(lVar6 + 0x8a48) == 0x20 || (*(long *)(lVar6 + 0x8a28) == 8)) ||
      (*(long *)(lVar6 + 0x8a28) == 0x20)))) {
    if ((((long)(sVar3 - lVar7) < 2000) || ((int)param_1[0x7c] != 0)) || ((int)param_1[0x80] != 0))
    {
      if (cVar2 != '\0') {
        return 0;
      }
      *(undefined1 *)((long)param_1 + 0x2ef) = 1;
      FUN_019c9f64(lVar6,"Rewind stream after send\n");
      return 0;
    }
    if ((char)param_1[0x5c] != '\0') {
      return 0;
    }
    FUN_019c9f64(lVar6,"NTLM send, close instead of sending %ld bytes\n");
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined8 *)(lVar6 + 0x78) = 0;
joined_r0x019c7d3c:
  if (lVar7 == 0) {
    return 0;
  }
  uVar4 = FUN_019d83ec(param_1);
  return uVar4;
}




undefined1 FUN_019c7e40(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar3 = 0;
  iVar1 = *(int *)(lVar4 + 0x128);
  if (399 < iVar1 && *(char *)(lVar4 + 0x510) != '\0') {
    if (iVar1 == 0x197) {
      cVar2 = *(char *)((long)param_1 + 0x2e5);
    }
    else {
      if (iVar1 != 0x191) {
        return 1;
      }
      cVar2 = *(char *)((long)param_1 + 0x2e4);
    }
    if (cVar2 == '\0') {
      return 1;
    }
    uVar3 = *(undefined1 *)(lVar4 + 0x8a60);
  }
  return uVar3;
}




undefined8 FUN_019c7e94(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = *(char *)((long)param_1 + 0x2e3);
  lVar4 = *param_1;
  if (((cVar1 == '\0') || (*(char *)((long)param_1 + 0x2e5) == '\0')) &&
     (*(char *)((long)param_1 + 0x2e4) == '\0')) {
    *(undefined1 *)(lVar4 + 0x8a38) = 1;
    *(undefined1 *)(lVar4 + 0x8a58) = 1;
    return 0;
  }
  lVar3 = *(long *)(lVar4 + 0x8a20);
  if ((lVar3 != 0) && (*(long *)(lVar4 + 0x8a28) == 0)) {
    *(long *)(lVar4 + 0x8a28) = lVar3;
  }
  lVar3 = *(long *)(lVar4 + 0x8a40);
  if ((lVar3 != 0) && (*(long *)(lVar4 + 0x8a48) == 0)) {
    *(long *)(lVar4 + 0x8a48) = lVar3;
  }
  if ((cVar1 == '\0') || (*(byte *)((long)param_1 + 0x2ed) != (param_4 & 1))) {
    *(undefined1 *)(lVar4 + 0x8a58) = 1;
  }
  else {
    uVar2 = FUN_019c7ff0(param_1,(long *)(lVar4 + 0x8a40),param_2,param_3,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  if ((((*(char *)(lVar4 + 0x8948) != '\0') && (*(char *)((long)param_1 + 0x2f2) == '\0')) &&
      (*(long *)(lVar4 + 0x8950) != 0)) &&
     ((*(char *)(lVar4 + 0x513) == '\0' &&
      (uVar2 = FUN_019e23a8(*(long *)(lVar4 + 0x8950),param_1[0x18]), (int)uVar2 == 0)))) {
    *(undefined1 *)(lVar4 + 0x8a38) = 1;
    return uVar2;
  }
  uVar2 = FUN_019c7ff0(param_1,(long *)(lVar4 + 0x8a20),param_2,param_3,0);
  return uVar2;
}




undefined8
FUN_019c7ff0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_58;
  undefined8 local_48;
  
  lVar9 = *(long *)(param_2 + 8);
  lVar10 = *param_1;
  if (lVar9 < 8) {
    if (lVar9 == 1) {
      if ((param_5 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x2e4) != '\0') {
          lVar9 = FUN_019c78b4(param_1,"Authorization:");
          goto joined_r0x019c8130;
        }
      }
      else if (*(char *)((long)param_1 + 0x2e5) != '\0') {
        lVar9 = FUN_019c791c(param_1,"Proxy-authorization:");
joined_r0x019c8130:
        if (lVar9 == 0) {
          local_48 = 0;
          local_58 = 0;
          bVar5 = (param_5 & 1) == 0;
          lVar11 = *param_1;
          lVar9 = 400;
          if (bVar5) {
            lVar9 = 0x170;
          }
          lVar3 = 0x198;
          if (bVar5) {
            lVar3 = 0x178;
          }
          pcVar8 = (char *)(lVar11 + 0x938);
          lVar4 = 0x340;
          if (bVar5) {
            lVar4 = 0x358;
          }
          FUN_019d5bc0(pcVar8,0x4001,"%s:%s",*(undefined8 *)((long)param_1 + lVar9),
                       *(undefined8 *)((long)param_1 + lVar3));
          sVar7 = strlen(pcVar8);
          uVar6 = FUN_019f0ec4(lVar11,pcVar8,sVar7,&local_58,&local_48);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          if (local_58 == 0) {
            return 9;
          }
          if (*(long *)((long)param_1 + lVar4) != 0) {
            (*(code *)PTR_free_02bf74b0)();
            *(undefined8 *)((long)param_1 + lVar4) = 0;
          }
          pcVar8 = "Proxy-";
          if ((param_5 & 1) == 0) {
            pcVar8 = "";
          }
          uVar6 = FUN_019d5c34("%sAuthorization: Basic %s\r\n",pcVar8,local_58);
          *(undefined8 *)((long)param_1 + lVar4) = uVar6;
          (*(code *)PTR_free_02bf74b0)(local_58);
          if (*(long *)((long)param_1 + lVar4) == 0) {
            return 0x1b;
          }
          pcVar8 = "Basic";
          *(undefined1 *)(param_2 + 0x18) = 1;
          goto LAB_019c80bc;
        }
      }
      *(undefined1 *)(param_2 + 0x18) = 1;
    }
    else if (lVar9 == 2) {
      uVar6 = FUN_019db8f4(param_1,param_5 & 1);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      pcVar8 = "Digest";
      goto LAB_019c80bc;
    }
LAB_019c813c:
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  else {
    if (lVar9 == 0x20) {
      uVar6 = FUN_019eb064(param_1,param_5 & 1);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      pcVar8 = "NTLM_WB";
    }
    else {
      if (lVar9 != 8) goto LAB_019c813c;
      uVar6 = FUN_019ead60(param_1,param_5 & 1);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      pcVar8 = "NTLM";
    }
LAB_019c80bc:
    bVar5 = (param_5 & 1) == 0;
    lVar9 = 400;
    if (bVar5) {
      lVar9 = 0x170;
    }
    pcVar1 = "Proxy";
    if (bVar5) {
      pcVar1 = "Server";
    }
    puVar2 = &DAT_01e277f2;
    if (*(undefined1 **)((long)param_1 + lVar9) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)((long)param_1 + lVar9);
    }
    FUN_019c9f64(lVar10,"%s auth using %s with user \'%s\'\n",pcVar1,pcVar8,puVar2);
    *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x18) ^ 1;
  }
  return 0;
}

