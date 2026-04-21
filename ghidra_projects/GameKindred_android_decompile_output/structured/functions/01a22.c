// functions/01a22 — 1 functions
#include "libGameKindred.h"




undefined4 FUN_01a22948(void *param_1,int param_2,ulong *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  char acStack_44 [20];
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_2 < 0x14) {
    if (*param_3 == 0x38) {
      return 0;
    }
    memcpy(acStack_44,param_1,(long)param_2);
    acStack_44[param_2] = '\0';
    pcVar3 = strchr(acStack_44,0x2b);
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
    if (*pcVar3 != '\0') {
      iVar2 = strcmp(acStack_44,"RSA");
      if (iVar2 == 0) {
        iVar6 = 6;
        iVar2 = OBJ_sn2nid(pcVar3);
      }
      else {
        iVar2 = strcmp(acStack_44,"DSA");
        if (iVar2 == 0) {
          iVar6 = 0x74;
          iVar2 = OBJ_sn2nid(pcVar3);
        }
        else {
          iVar2 = strcmp(acStack_44,"ECDSA");
          if (iVar2 != 0) {
            return 0;
          }
          iVar6 = 0x198;
          iVar2 = OBJ_sn2nid(pcVar3);
        }
      }
      if ((iVar2 == 0) && (iVar2 = OBJ_ln2nid(pcVar3), iVar2 == 0)) {
        return 0;
      }
      uVar4 = *param_3;
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          if ((*(int *)((long)param_3 + uVar5 * 4 + 8) == iVar6) &&
             (*(int *)((long)param_3 + uVar5 * 4 + 0xc) == iVar2)) {
            return 0;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 < uVar4);
      }
      piVar1 = (int *)((long)param_3 + uVar4 * 4 + 8);
      *piVar1 = iVar2;
      *param_3 = uVar4 + 2;
      piVar1[1] = iVar6;
      return 1;
    }
  }
  return 0;
}

