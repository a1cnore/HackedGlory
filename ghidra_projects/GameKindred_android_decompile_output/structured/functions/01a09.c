// functions/01a09 — 2 functions
#include "libGameKindred.h"




ulong FUN_01a097b0(undefined8 *param_1,long param_2,char *param_3,ulong param_4,long *param_5,
                  int param_6)

{
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *local_70;
  char *local_68;
  
  if (param_6 != 1) {
    uVar3 = _libssh2_error(*param_1,0xffffffdf,"Unsupported type of known-host information store");
    return uVar3;
  }
  uVar1 = *(uint *)(param_2 + 0x2c);
  pcVar13 = *(char **)(param_2 + 0x48);
  pcVar11 = (&PTR_DAT_02bb1148)[uVar1 >> 0x12 & 3];
  if (pcVar13 == (char *)0x0) {
    lVar10 = 0;
  }
  else {
    sVar2 = strlen(pcVar13);
    lVar10 = sVar2 + 1;
  }
  if ((uVar1 & 0xffff) == 2) {
    lVar4 = _libssh2_base64_encode
                      (*param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                       &local_68);
    uVar9 = *param_1;
    if (lVar4 == 0) {
      pcVar11 = "Unable to allocate memory for base64-encoded host name";
    }
    else {
      lVar4 = _libssh2_base64_encode
                        (uVar9,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                         &local_70);
      pcVar13 = local_70;
      if (lVar4 != 0) {
        sVar2 = strlen(local_70);
        pcVar12 = local_68;
        sVar5 = strlen(local_68);
        sVar6 = strlen(pcVar11);
        pcVar14 = *(char **)(param_2 + 0x40);
        sVar7 = strlen(pcVar14);
        uVar3 = lVar10 + sVar2 + sVar5 + sVar6 + sVar7 + 7;
        if (param_4 < uVar3) {
          uVar8 = _libssh2_error(*param_1,0xffffffda,"Known-host write buffer too small");
          uVar8 = uVar8 & 0xffffffff;
        }
        else {
          if (*(long *)(param_2 + 0x48) == 0) {
            snprintf(param_3,param_4,"|1|%s|%s%s %s\n",pcVar13,pcVar12,pcVar11,pcVar14);
          }
          else {
            snprintf(param_3,param_4,"|1|%s|%s%s %s %s\n",pcVar13,pcVar12,pcVar11,pcVar14);
          }
          uVar8 = 0;
        }
        free(local_68);
        free(local_70);
        goto LAB_01a09a48;
      }
      free(local_68);
      uVar9 = *param_1;
      pcVar11 = "Unable to allocate memory for base64-encoded salt";
    }
    uVar8 = _libssh2_error(uVar9,0xfffffffa,pcVar11);
    uVar8 = uVar8 & 0xffffffff;
  }
  else {
    pcVar14 = *(char **)(param_2 + 0x18);
    sVar2 = strlen(pcVar14);
    sVar5 = strlen(pcVar11);
    pcVar12 = *(char **)(param_2 + 0x40);
    sVar6 = strlen(pcVar12);
    uVar3 = lVar10 + sVar2 + sVar5 + sVar6 + 3;
    if (param_4 < uVar3) {
      uVar8 = _libssh2_error(*param_1,0xffffffda,"Known-host write buffer too small");
      uVar8 = uVar8 & 0xffffffff;
    }
    else if (pcVar13 == (char *)0x0) {
      snprintf(param_3,param_4,"%s%s %s\n",pcVar14,pcVar11,pcVar12);
      uVar8 = 0;
    }
    else {
      snprintf(param_3,param_4,"%s%s %s %s\n",pcVar14,pcVar11,pcVar12,pcVar13);
      uVar8 = 0;
    }
LAB_01a09a48:
    *param_5 = uVar3 - 1;
  }
  return uVar8;
}




void FUN_01a09c20(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  sockaddr local_a0 [7];
  
  pcVar2 = getenv("SSH_AUTH_SOCK");
  if (pcVar2 == (char *)0x0) {
    uVar3 = *param_1;
    pcVar2 = "no auth sock variable";
    uVar4 = 0xffffffd9;
  }
  else {
    iVar1 = socket(1,1,0);
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 < 0) {
      uVar3 = *param_1;
      pcVar2 = "failed creating socket";
      uVar4 = 0xffffffd3;
    }
    else {
      local_a0[0].sa_family = 1;
      strncpy((char *)((ulong)local_a0 | 2),pcVar2,0x6c);
      iVar1 = connect(*(int *)(param_1 + 1),local_a0,0x6e);
      if (iVar1 == 0) {
        return;
      }
      close(*(int *)(param_1 + 1));
      uVar3 = *param_1;
      pcVar2 = "failed connecting with agent";
      uVar4 = 0xffffffd6;
    }
  }
  _libssh2_error(uVar3,uVar4,pcVar2);
  return;
}

