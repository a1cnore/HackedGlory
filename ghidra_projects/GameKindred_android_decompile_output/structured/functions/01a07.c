// functions/01a07 — 3 functions
#include "libGameKindred.h"




void FUN_01a07904(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,ulong *param_5,
                 char *param_6)

{
  int iVar1;
  FILE *__stream;
  void *__ptr;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong __n;
  long lVar7;
  long lVar8;
  uint local_74;
  undefined8 local_70;
  char local_64 [4];
  
  __stream = fopen(param_6,"r");
  if (__stream == (FILE *)0x0) {
    pcVar6 = "Unable to open public key file";
  }
  else {
    iVar1 = feof(__stream);
    lVar8 = 0;
    if (iVar1 == 0) {
      lVar8 = 0;
      do {
        sVar2 = fread(local_64,1,1,__stream);
        if (((sVar2 != 1) || (local_64[0] == '\n')) || (local_64[0] == '\r')) break;
        lVar8 = lVar8 + 1;
        iVar1 = feof(__stream);
      } while (iVar1 == 0);
    }
    iVar1 = feof(__stream);
    __n = lVar8 - (ulong)(iVar1 != 0);
    rewind(__stream);
    if (__n < 2) {
      fclose(__stream);
      pcVar6 = "Invalid data in public key file";
    }
    else {
      __ptr = (void *)(**(code **)(param_1 + 8))(__n,param_1);
      if (__ptr == (void *)0x0) {
        fclose(__stream);
        pcVar6 = "Unable to allocate memory for public key data";
        uVar5 = 0xfffffffa;
        goto LAB_01a07b38;
      }
      sVar2 = fread(__ptr,1,__n,__stream);
      if (sVar2 == __n) {
        fclose(__stream);
        lVar8 = (lVar8 - (ulong)(iVar1 != 0)) + 2;
        do {
          lVar7 = lVar8;
          if (lVar7 == 2) {
            (**(code **)(param_1 + 0x18))(__ptr,param_1);
            pcVar6 = "Missing public key data";
            goto LAB_01a07b34;
          }
          iVar1 = isspace((uint)*(byte *)((long)__ptr + lVar7 + -3));
          lVar8 = lVar7 + -1;
        } while (iVar1 != 0);
        pvVar3 = memchr(__ptr,0x20,lVar7 - 2);
        if (pvVar3 == (void *)0x0) {
          (**(code **)(param_1 + 0x18))(__ptr,param_1);
          pcVar6 = "Invalid public key data";
        }
        else {
          pvVar3 = (void *)((long)pvVar3 + 1);
          pvVar4 = memchr(pvVar3,0x20,(long)__ptr + (lVar8 - (long)pvVar3));
          iVar1 = (int)__ptr + (int)lVar8 + -1;
          if (pvVar4 != (void *)0x0) {
            iVar1 = (int)pvVar4;
          }
          iVar1 = libssh2_base64_decode(param_1,&local_70,&local_74,pvVar3,iVar1 - (int)pvVar3);
          if (iVar1 == 0) {
            *param_2 = __ptr;
            *param_3 = (long)pvVar3 + (-1 - (long)__ptr);
            *param_4 = local_70;
            *param_5 = (ulong)local_74;
            return;
          }
          (**(code **)(param_1 + 0x18))(__ptr,param_1);
          pcVar6 = "Invalid key data, not base64 encoded";
        }
      }
      else {
        (**(code **)(param_1 + 0x18))(__ptr,param_1);
        fclose(__stream);
        pcVar6 = "Unable to read public key from file";
      }
    }
  }
LAB_01a07b34:
  uVar5 = 0xfffffff0;
LAB_01a07b38:
  _libssh2_error(param_1,uVar5,pcVar6);
  return;
}




void FUN_01a07b84(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
                 int param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)libssh2_hostkey_methods();
  *param_2 = 0;
  *param_3 = 0;
  puVar5 = (undefined8 *)*puVar2;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      puVar2 = puVar2 + 1;
      if ((char *)*puVar5 == (char *)0x0) break;
      if ((puVar5[3] != 0) && (iVar1 = strncmp((char *)*puVar5,param_4,(long)param_5), iVar1 == 0))
      {
        *param_2 = puVar5;
        goto LAB_01a07c1c;
      }
      puVar5 = (undefined8 *)*puVar2;
    } while (puVar5 != (undefined8 *)0x0);
  }
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 == (undefined8 *)0x0) {
    pcVar4 = "No handler for specified private key";
    uVar3 = 0xffffffef;
  }
  else {
LAB_01a07c1c:
    iVar1 = (*(code *)puVar5[3])(param_1,param_6,param_7,param_3);
    if (iVar1 == 0) {
      return;
    }
    pcVar4 = "Unable to initialize private key from file";
    uVar3 = 0xfffffff0;
  }
  _libssh2_error(param_1,uVar3,pcVar4);
  return;
}




undefined8
FUN_01a07c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  long local_48;
  
  uVar2 = FUN_01a07b84(param_1,&local_48,auStack_58,*(undefined8 *)(param_1 + 0xd018),
                       *(undefined4 *)(param_1 + 0xd020),*(undefined8 *)*param_6,
                       ((undefined8 *)*param_6)[1]);
  if ((int)uVar2 == 0) {
    local_68 = param_4;
    uStack_60 = param_5;
    iVar1 = (**(code **)(local_48 + 0x28))(param_1,param_2,param_3,1,&local_68,auStack_58);
    pcVar3 = *(code **)(local_48 + 0x38);
    if (iVar1 == 0) {
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(param_1,auStack_58);
      }
      uVar2 = 0;
    }
    else if (pcVar3 == (code *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      (*pcVar3)(param_1,param_6);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

