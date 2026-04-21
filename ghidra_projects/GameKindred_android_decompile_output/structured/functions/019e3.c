// functions/019e3 — 5 functions
#include "libGameKindred.h"




int FUN_019e314c(long *param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = *(undefined4 **)(lVar2 + 0x218);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x5c) = 1;
    goto LAB_019e319c;
  }
  if ((*(char *)(lVar2 + 0x539) != '\0') || (param_2 = 0, *(long *)(puVar3 + 0xe) != 0))
  goto LAB_019e319c;
  if (*(long *)(puVar3 + 6) == 0) {
    if (*(char *)(lVar2 + 0x519) == '\0') {
      param_2 = 0;
      goto LAB_019e319c;
    }
LAB_019e32b4:
    param_2 = FUN_019e8c44(param_1 + 0xa9,"%s",&DAT_01e277f2);
    if (param_2 != 0) goto LAB_019e319c;
    uVar1 = 0x19;
  }
  else {
    if (*(char *)(lVar2 + 0x519) != '\0') goto LAB_019e32b4;
    uVar1 = 0x17;
  }
  *(undefined4 *)(param_1 + 0xb7) = uVar1;
  do {
    param_2 = FUN_019e8940(param_1 + 0xa9,1);
    if (param_2 != 0) break;
  } while ((int)param_1[0xb7] != 0);
LAB_019e319c:
  if (*(long *)(puVar3 + 2) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 2) = 0;
  }
  if (*(long *)(puVar3 + 4) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 4) = 0;
  }
  if (*(long *)(puVar3 + 6) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 6) = 0;
  }
  if (*(long *)(puVar3 + 8) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  if (*(long *)(puVar3 + 10) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 10) = 0;
  }
  if (*(long *)(puVar3 + 0xc) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 0xc) = 0;
  }
  if (*(long *)(puVar3 + 0xe) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 0xe) = 0;
  }
  if (*(long *)(puVar3 + 0x10) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(puVar3 + 0x10) = 0;
  }
  *puVar3 = 0;
  return param_2;
}




ulong FUN_019e330c(long param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  long lVar9;
  char *pcVar10;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(long *)(param_1 + 0x5a0) = param_1;
  *(undefined8 *)(param_1 + 0x598) = 1800000;
  *(code **)(param_1 + 0x5a8) = FUN_019e3738;
  *(undefined1 **)(param_1 + 0x5b0) = &LAB_019e4444;
  *(undefined8 *)(param_1 + 0x5c4) = 0xffffffffffffffff;
  FUN_019e8ab4(param_1 + 0x548);
  pcVar3 = *(char **)(param_1 + 0x180);
  if ((pcVar3 != (char *)0x0) && (cVar1 = *pcVar3, cVar1 != '\0')) {
    uVar6 = 0;
    bVar8 = true;
    pcVar7 = pcVar3;
    do {
      while ((pcVar10 = pcVar3 + 1, cVar1 != '\0' && (cVar1 != '='))) {
        pcVar3 = pcVar10;
        cVar1 = *pcVar10;
      }
      iVar2 = FUN_019d9e0c(pcVar7,&DAT_01e26968,4);
      if (iVar2 == 0) {
        uVar6 = 3;
      }
      else {
        if (bVar8) {
          *(undefined4 *)(param_1 + 0x5c4) = 0;
          *(undefined4 *)(param_1 + 0x5c8) = 0;
        }
        lVar9 = 0;
        for (pcVar7 = pcVar10; (*pcVar7 != '\0' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
          lVar9 = lVar9 + 1;
        }
        iVar2 = FUN_019d9e0c(pcVar10,&DAT_01e26823,lVar9);
        if (iVar2 == 0) {
          iVar2 = FUN_019d9e0c(pcVar10,"LOGIN",lVar9);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x5c4) = 2;
            uVar5 = *(uint *)(param_1 + 0x5c8) | 1;
            goto LAB_019e353c;
          }
          iVar2 = FUN_019d9e0c(pcVar10,"PLAIN",lVar9);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x5c4) = 2;
            uVar5 = *(uint *)(param_1 + 0x5c8) | 2;
            goto LAB_019e353c;
          }
          iVar2 = FUN_019d9e0c(pcVar10,"CRAM-MD5",lVar9);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x5c4) = 2;
            uVar5 = *(uint *)(param_1 + 0x5c8) | 4;
            goto LAB_019e353c;
          }
          iVar2 = FUN_019d9e0c(pcVar10,"DIGEST-MD5",lVar9);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x5c4) = 2;
            uVar5 = *(uint *)(param_1 + 0x5c8) | 8;
            goto LAB_019e353c;
          }
          iVar2 = FUN_019d9e0c(pcVar10,"GSSAPI",lVar9);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x5c4) = 2;
            uVar5 = *(uint *)(param_1 + 0x5c8) | 0x10;
            goto LAB_019e353c;
          }
          iVar2 = FUN_019d9e0c(pcVar10,&DAT_01e21e68,lVar9);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x5c4) = 2;
            uVar5 = *(uint *)(param_1 + 0x5c8) | 0x40;
            goto LAB_019e353c;
          }
          iVar2 = FUN_019d9e0c(pcVar10,"XOAUTH2",lVar9);
          if (iVar2 != 0) {
            *(undefined4 *)(param_1 + 0x5c4) = 2;
            uVar5 = *(uint *)(param_1 + 0x5c8) | 0x80;
            goto LAB_019e353c;
          }
        }
        else {
          uVar5 = 0xffffffff;
          *(undefined4 *)(param_1 + 0x5c4) = 0xffffffff;
LAB_019e353c:
          *(uint *)(param_1 + 0x5c8) = uVar5;
        }
        bVar8 = false;
        pcVar3 = pcVar7 + 1;
        if (*pcVar7 != ';') {
          pcVar3 = pcVar7;
        }
      }
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
    } while (cVar1 != '\0');
    if (uVar6 != 0) {
      return (ulong)uVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x5b8) = 1;
  *(undefined2 *)(param_1 + 0x5d4) = 0x2a;
  uVar4 = FUN_019e35b4(param_1,param_2);
  return uVar4;
}




undefined8 FUN_019e35b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (((*(byte *)(*(long *)(param_1 + 800) + 0x7c) & 1) != 0) &&
     (pcVar2 = (char *)(param_1 + 0x5bc), *pcVar2 == '\0')) {
    uVar1 = FUN_019c2ba0(param_1,0,pcVar2);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  uVar1 = FUN_019e8940(param_1 + 0x548,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x5b8) == 0;
  return uVar1;
}




undefined8 FUN_019e3638(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019e35b4();
  if ((int)uVar1 == 0) {
    if (*param_2 != '\0') {
      FUN_019e5158(param_1,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_019e3680(long param_1,ulong param_2)

{
  int iVar1;
  
  if (((((param_2 & 1) == 0) && (*(long *)(param_1 + 0x5a0) != 0)) &&
      (*(char *)(*(long *)(param_1 + 0x5a0) + 0x2eb) != '\0')) &&
     (iVar1 = FUN_019e47d4(param_1,"LOGOUT"), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x5b8) = 0x1b;
    do {
      iVar1 = FUN_019e8940(param_1 + 0x548,1);
      if (iVar1 != 0) break;
    } while (*(int *)(param_1 + 0x5b8) != 0);
  }
  FUN_019e9018(param_1 + 0x548);
  FUN_019ecacc(param_1,*(undefined4 *)(param_1 + 0x5cc));
  if (*(long *)(param_1 + 0x5e0) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x5e0) = 0;
  }
  if (*(long *)(param_1 + 0x5e8) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  return 0;
}

