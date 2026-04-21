// functions/01a08 — 1 functions
#include "libGameKindred.h"




int FUN_01a08964(long *param_1,char *param_2,char *param_3,char *param_4,size_t param_5,
                void *param_6,long param_7,uint param_8,undefined8 *param_9)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  void *__s;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  uint local_6c;
  undefined8 local_68;
  
  sVar3 = strlen(param_2);
  lVar6 = *param_1;
  if ((param_8 & 0xc0000) == 0) {
    pcVar5 = "No key type set";
    uVar7 = 0xffffffde;
LAB_01a08aac:
    iVar2 = _libssh2_error(lVar6,uVar7,pcVar5);
    return iVar2;
  }
  __s = (void *)(**(code **)(lVar6 + 8))(0x78,lVar6);
  if (__s == (void *)0x0) {
    lVar6 = *param_1;
    pcVar5 = "Unable to allocate memory for known host entry";
    uVar7 = 0xfffffffa;
    goto LAB_01a08aac;
  }
  memset(__s,0,0x78);
  uVar1 = param_8 & 0xffff;
  *(uint *)((long)__s + 0x2c) = param_8;
  if (uVar1 == 3) {
LAB_01a08a04:
    pvVar4 = (void *)(**(code **)(*param_1 + 8))(sVar3 + 1);
    *(void **)((long)__s + 0x18) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      lVar6 = *param_1;
      pcVar5 = "Unable to allocate memory for host name";
    }
    else {
      memcpy(pvVar4,param_2,sVar3 + 1);
joined_r0x01a08b24:
      if ((param_8 >> 0x11 & 1) == 0) {
        lVar6 = _libssh2_base64_encode(*param_1,param_4,param_5,&local_68);
        if (lVar6 == 0) {
          lVar6 = *param_1;
          pcVar5 = "Unable to allocate memory for base64-encoded key";
        }
        else {
          *(undefined8 *)((long)__s + 0x40) = local_68;
joined_r0x01a08b68:
          if (param_6 == (void *)0x0) {
            *(undefined8 *)((long)__s + 0x48) = 0;
LAB_01a08b70:
            _libssh2_list_add(param_1 + 1,__s);
            if (param_9 == (undefined8 *)0x0) {
              return 0;
            }
            *(undefined4 *)((long)__s + 0x50) = 0xdeadcafe;
            uVar7 = 0;
            *(void **)((long)__s + 0x58) = __s;
            if ((*(uint *)((long)__s + 0x2c) & 0xffff) == 1) {
              uVar7 = *(undefined8 *)((long)__s + 0x18);
            }
            *(uint *)((long)__s + 0x70) = *(uint *)((long)__s + 0x2c);
            *(undefined8 *)((long)__s + 0x60) = uVar7;
            *(undefined8 *)((long)__s + 0x68) = *(undefined8 *)((long)__s + 0x40);
            *param_9 = (undefined4 *)((long)__s + 0x50);
            return 0;
          }
          pvVar4 = (void *)(**(code **)(*param_1 + 8))(param_7 + 1U);
          *(void **)((long)__s + 0x48) = pvVar4;
          if (pvVar4 != (void *)0x0) {
            memcpy(pvVar4,param_6,param_7 + 1U);
            *(undefined1 *)(*(long *)((long)__s + 0x48) + param_7) = 0;
            goto LAB_01a08b70;
          }
          lVar6 = *param_1;
          pcVar5 = "Unable to allocate memory for comment";
        }
      }
      else {
        if (param_5 == 0) {
          param_5 = strlen(param_4);
        }
        pvVar4 = (void *)(**(code **)(*param_1 + 8))(param_5 + 1);
        *(void **)((long)__s + 0x40) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          memcpy(pvVar4,param_4,param_5 + 1);
          *(undefined1 *)(*(long *)((long)__s + 0x40) + param_5) = 0;
          goto joined_r0x01a08b68;
        }
        lVar6 = *param_1;
        pcVar5 = "Unable to allocate memory for key";
      }
    }
    uVar7 = 0xfffffffa;
  }
  else {
    if (uVar1 == 2) {
      iVar2 = libssh2_base64_decode(*param_1,&local_68,&local_6c,param_2,sVar3 & 0xffffffff);
      if (iVar2 != 0) goto LAB_01a08c2c;
      *(undefined8 *)((long)__s + 0x18) = local_68;
      *(ulong *)((long)__s + 0x20) = (ulong)local_6c;
      lVar6 = *param_1;
      sVar3 = strlen(param_3);
      iVar2 = libssh2_base64_decode(lVar6,&local_68,&local_6c,param_3,sVar3);
      if (iVar2 != 0) goto LAB_01a08c2c;
      *(undefined8 *)((long)__s + 0x30) = local_68;
      *(ulong *)((long)__s + 0x38) = (ulong)local_6c;
      goto joined_r0x01a08b24;
    }
    if (uVar1 == 1) goto LAB_01a08a04;
    lVar6 = *param_1;
    pcVar5 = "Unknown host name type";
    uVar7 = 0xffffffdf;
  }
  iVar2 = _libssh2_error(lVar6,uVar7,pcVar5);
LAB_01a08c2c:
  lVar6 = *param_1;
  if (*(long *)((long)__s + 0x48) != 0) {
    (**(code **)(lVar6 + 0x18))(*(long *)((long)__s + 0x48),lVar6);
  }
  if (*(long *)((long)__s + 0x40) != 0) {
    (**(code **)(lVar6 + 0x18))(*(long *)((long)__s + 0x40),lVar6);
  }
  if (*(long *)((long)__s + 0x30) != 0) {
    (**(code **)(lVar6 + 0x18))(*(long *)((long)__s + 0x30),lVar6);
  }
  if (*(long *)((long)__s + 0x18) != 0) {
    (**(code **)(lVar6 + 0x18))(*(long *)((long)__s + 0x18),lVar6);
  }
  (**(code **)(lVar6 + 0x18))(__s,lVar6);
  return iVar2;
}

