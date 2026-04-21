// functions/019d7 — 6 functions
#include "libGameKindred.h"




void FUN_019d7004(long *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  ssize_t sVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_968 [128];
  undefined1 auStack_8e8 [128];
  undefined1 auStack_868 [2056];
  
  memset(auStack_8e8,0,0x80);
  memset(auStack_968,0,0x80);
  lVar9 = *param_1;
  lVar10 = *(long *)(lVar9 + 0x218);
  FUN_019d7488(lVar9,0x3c,lVar10 + 0x1cb8,
               (*(long *)(lVar10 + 0x1ec0) + 2) - *(long *)(lVar10 + 0x1eb8));
  pcVar8 = *(char **)(lVar10 + 0x1eb8);
  *(char **)(lVar10 + 0x1eb8) = pcVar8 + 1;
  cVar2 = *pcVar8;
  if (cVar2 == '\'') {
    FUN_019d5bc0(auStack_868,0x800,"%c%c%c%c",0xff,0xfa,0x27,0);
    puVar12 = *(undefined8 **)(lVar10 + 0x1cb0);
    if (puVar12 == (undefined8 *)0x0) {
      uVar11 = 4;
    }
    else {
      uVar11 = 4;
      do {
        pcVar8 = (char *)*puVar12;
        sVar4 = strlen(pcVar8);
        uVar1 = uVar11 + sVar4 + 1;
        if ((uVar1 < 0x7fa) &&
           (iVar3 = sscanf(pcVar8,"%127[^,],%127s",auStack_8e8,auStack_968), iVar3 != 0)) {
          FUN_019d5bc0(auStack_868 + uVar11,0x800 - uVar11,"%c%s%c%s",0,auStack_8e8,1,auStack_968);
          uVar11 = uVar1;
        }
        puVar12 = (undefined8 *)puVar12[1];
      } while (puVar12 != (undefined8 *)0x0);
    }
    FUN_019d5bc0(auStack_868 + uVar11,0x800 - uVar11,"%c%c",0xff,0xf0);
    sVar5 = send((int)param_1[0x3a],auStack_868,uVar11 + 2,0x4000);
    if (sVar5 < 0) {
      puVar6 = (undefined4 *)__errno();
      FUN_019ca0fc(lVar9,"Sending data failed (%d)",*puVar6);
    }
  }
  else {
    if (cVar2 == '#') {
      pcVar8 = (char *)(lVar10 + 0x1c28);
      sVar4 = strlen(pcVar8);
      uVar7 = 0x23;
    }
    else {
      if (cVar2 != '\x18') {
        return;
      }
      pcVar8 = (char *)(lVar10 + 0x1c08);
      sVar4 = strlen(pcVar8);
      uVar7 = 0x18;
    }
    uVar11 = sVar4 + 4;
    FUN_019d5bc0(auStack_868,0x800,"%c%c%c%c%s%c%c",0xff,0xfa,uVar7,0,pcVar8,0xff,0xf0);
    sVar5 = send((int)param_1[0x3a],auStack_868,sVar4 + 6,0x4000);
    if (sVar5 < 0) {
      puVar6 = (undefined4 *)__errno();
      FUN_019ca0fc(lVar9,"Sending data failed (%d)",*puVar6);
    }
  }
  FUN_019d7488(lVar9,0x3e,(ulong)auStack_868 | 2,uVar11);
  return;
}




void FUN_019d72a0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  ssize_t sVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  uVar3 = *param_1;
  local_34 = 0xff;
  local_33 = (undefined1)param_2;
  local_32 = (undefined1)param_3;
  sVar1 = send(*(int *)(param_1 + 0x3a),&local_34,3,0x4000);
  if (sVar1 < 0) {
    puVar2 = (undefined4 *)__errno();
    FUN_019ca0fc(uVar3,"Sending data failed (%d)",*puVar2);
  }
  FUN_019d6f24(*param_1,"SENT",param_2,param_3);
  return;
}




void FUN_019d7330(long *param_1,int param_2)

{
  ssize_t sVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0x1f) {
    lVar3 = *param_1;
    lVar4 = *(long *)(lVar3 + 0x218);
    *(undefined2 *)(lVar4 + 0x1cb8) = 0xfaff;
    *(undefined1 *)(lVar4 + 0x1cba) = 0x1f;
    *(undefined1 *)(lVar4 + 0x1cbb) = (char)((ushort)*(undefined2 *)(lVar4 + 0x1ca8) >> 8);
    *(char *)(lVar4 + 0x1cbc) = (char)*(undefined2 *)(lVar4 + 0x1ca8);
    *(char *)(lVar4 + 0x1cbd) = (char)((ushort)*(undefined2 *)(lVar4 + 0x1caa) >> 8);
    *(char *)(lVar4 + 0x1cbe) = (char)*(undefined2 *)(lVar4 + 0x1caa);
    *(undefined2 *)(lVar4 + 0x1cbf) = 0xf0ff;
    *(long *)(lVar4 + 0x1ec0) = lVar4 + 0x1cc1;
    *(void **)(lVar4 + 0x1eb8) = (void *)(lVar4 + 0x1cb8);
    FUN_019d7488(lVar3,0x3e,(undefined1 *)(lVar4 + 0x1cba),(-0x1cba - lVar4) + lVar4 + 0x1cc1);
    sVar1 = send((int)param_1[0x3a],(void *)(lVar4 + 0x1cb8),3,0x4000);
    if (sVar1 < 0) {
      puVar2 = (undefined4 *)__errno();
      FUN_019ca0fc(lVar3,"Sending data failed (%d)",*puVar2);
    }
    FUN_019d6e3c(param_1,(undefined1 *)(lVar4 + 0x1cbb),4);
    sVar1 = send((int)param_1[0x3a],(void *)(lVar4 + 0x1cbf),2,0x4000);
    if (sVar1 < 0) {
      puVar2 = (undefined4 *)__errno();
      FUN_019ca0fc(lVar3,"Sending data failed (%d)",*puVar2);
      return;
    }
  }
  return;
}




void FUN_019d7488(long param_1,int param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  if (*(char *)(param_1 + 0x520) == '\0') {
    return;
  }
  pcVar3 = "RCVD";
  if (param_2 != 0x3c) {
    pcVar3 = "SENT";
  }
  FUN_019c9f64(param_1,"%s IAC SB ",pcVar3);
  uVar8 = param_4 - 2;
  if (param_4 < 3) {
    uVar6 = 0;
    if (uVar8 == 0) {
      pcVar3 = "(Empty suboption?)";
      goto LAB_019d77c8;
    }
  }
  else {
    bVar1 = param_3[uVar8];
    uVar6 = (ulong)bVar1;
    bVar2 = param_3[param_4 - 1];
    if ((bVar1 != 0xff) || (bVar2 != 0xf0)) {
      FUN_019c9f64(param_1,"(terminated by ");
      if (bVar1 < 0x28) {
        puVar4 = (&PTR_s_BINARY_02bb01c8)[(uint)bVar1];
LAB_019d756c:
        FUN_019c9f64(param_1,&DAT_01e1ba24,puVar4);
      }
      else {
        if (0xeb < bVar1) {
          puVar4 = *(undefined **)(&DAT_02bb0128 + (ulong)(bVar1 - 0xec) * 8);
          goto LAB_019d756c;
        }
        FUN_019c9f64(param_1,&DAT_01e23b5d,(uint)bVar1);
      }
      uVar7 = (uint)bVar2;
      if (bVar2 < 0x28) {
        puVar4 = (&PTR_s_BINARY_02bb01c8)[bVar2];
LAB_019d75c0:
        FUN_019c9f64(param_1,"%s",puVar4);
      }
      else {
        if (0xeb < uVar7) {
          puVar4 = *(undefined **)(&DAT_02bb0128 + (long)(int)(uVar7 - 0xec) * 8);
          goto LAB_019d75c0;
        }
        FUN_019c9f64(param_1,&DAT_01bb6d43,uVar7);
      }
      FUN_019c9f64(param_1,", not IAC SE!) ");
    }
  }
  uVar5 = (ulong)*param_3;
  if (uVar5 < 0x28) {
    if ((*param_3 < 0x28) && ((1L << (uVar5 & 0x3f) & 0x8881000000U) != 0)) {
      puVar4 = (&PTR_s_BINARY_02bb01c8)[uVar5];
      pcVar3 = "%s";
    }
    else {
      puVar4 = (&PTR_s_BINARY_02bb01c8)[uVar5];
      pcVar3 = "%s (unsupported)";
    }
    FUN_019c9f64(param_1,pcVar3,puVar4);
  }
  else {
    FUN_019c9f64(param_1,"%d (unknown)",param_3[uVar6]);
  }
  bVar1 = *param_3;
  if (bVar1 == 0x1f) {
    FUN_019c9f64(param_1,"Width: %hu ; Height: %hu",
                 *(ushort *)(param_3 + 1) >> 8 | *(ushort *)(param_3 + 1) << 8,
                 *(ushort *)(param_3 + 3) >> 8 | *(ushort *)(param_3 + 3) << 8);
  }
  else {
    switch(param_3[1]) {
    case 0:
      pcVar3 = " IS";
      break;
    case 1:
      pcVar3 = " SEND";
      break;
    case 2:
      pcVar3 = " INFO/REPLY";
      break;
    case 3:
      pcVar3 = " NAME";
      break;
    default:
      goto switchD_019d76c4_default;
    }
    FUN_019c9f64(param_1,pcVar3);
    bVar1 = *param_3;
switchD_019d76c4_default:
    if ((bVar1 == 0x18) || (bVar1 == 0x23)) {
      param_3[uVar8] = 0;
      FUN_019c9f64(param_1," \"%s\"",param_3 + 2);
    }
    else if (bVar1 == 0x27) {
      if ((param_3[1] == 0) && (FUN_019c9f64(param_1,&DAT_01e4a398), 3 < uVar8)) {
        uVar6 = 3;
        uVar7 = 4;
        do {
          pcVar3 = " = ";
          if ((param_3[uVar6] == 1) || (pcVar3 = ", ", param_3[uVar6] == 0)) {
            FUN_019c9f64(param_1,pcVar3);
          }
          else {
            FUN_019c9f64(param_1,"%c");
          }
          uVar5 = (ulong)uVar7;
          uVar6 = (ulong)uVar7;
          uVar7 = uVar7 + 1;
        } while (uVar5 < uVar8);
      }
    }
    else if (2 < uVar8) {
      uVar6 = 2;
      uVar7 = 3;
      do {
        FUN_019c9f64(param_1," %.2x",param_3[uVar6]);
        uVar5 = (ulong)uVar7;
        uVar6 = (ulong)uVar7;
        uVar7 = uVar7 + 1;
      } while (uVar5 < uVar8);
    }
  }
  pcVar3 = "\n";
LAB_019d77c8:
  FUN_019c9f64(param_1,pcVar3);
  return;
}




undefined4 FUN_019d7824(undefined8 param_1,long *param_2,long *param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  __uid_t __uid;
  FILE *__stream;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined4 uVar10;
  char acStack_4a0 [1024];
  passwd *local_a0;
  passwd pStack_98;
  
  if ((char *)*param_2 == (char *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)*param_2 != '\0';
  }
  if (param_4 != (char *)0x0) {
    __stream = fopen(param_4,"r");
    goto joined_r0x019d7908;
  }
  lVar9 = FUN_019d4670("HOME");
  if (lVar9 == 0) {
    __uid = geteuid();
    iVar6 = getpwuid_r(__uid,&pStack_98,acStack_4a0,0x400,&local_a0);
    bVar1 = false;
    if (iVar6 != 0) {
      return 1;
    }
    lVar9 = 0;
    if (local_a0 != (passwd *)0x0) {
      lVar9 = (*(code *)PTR_strdup_02bf74c0)(pStack_98.pw_dir);
      if (lVar9 == 0) {
        return 0x1b;
      }
      bVar1 = true;
    }
    if (lVar9 == 0) {
      return 1;
    }
    pcVar7 = (char *)FUN_019d5c34("%s%s%s",lVar9,"/",".netrc");
    if (bVar1) goto LAB_019d78c8;
  }
  else {
    pcVar7 = (char *)FUN_019d5c34("%s%s%s",lVar9,"/",".netrc");
LAB_019d78c8:
    (*(code *)PTR_free_02bf74b0)(lVar9);
  }
  if (pcVar7 == (char *)0x0) {
    return 0xffffffff;
  }
  __stream = fopen(pcVar7,"r");
  (*(code *)PTR_free_02bf74b0)(pcVar7);
joined_r0x019d7908:
  if (__stream == (FILE *)0x0) {
    return 1;
  }
  pcVar7 = fgets(acStack_4a0,0x100,__stream);
  if (pcVar7 == (char *)0x0) {
    uVar10 = 1;
  }
  else {
    cVar4 = '\0';
    bVar1 = false;
    bVar2 = false;
    iVar6 = 0;
    uVar10 = 1;
    do {
      pcVar7 = strtok_r(acStack_4a0," \t\n",&pStack_98.pw_name);
      while (pcVar7 != (char *)0x0) {
        pcVar8 = (char *)*param_2;
        if ((((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) && ((char *)*param_3 != (char *)0x0)) &&
           (*(char *)*param_3 != '\0')) goto LAB_019d7bbc;
        if (cVar4 == '\x02') {
          if (bVar1) {
            if (bVar3) {
              iVar6 = FUN_019e23a8(pcVar8,pcVar7);
            }
            else {
              (*(code *)PTR_free_02bf74b0)();
              lVar9 = (*(code *)PTR_strdup_02bf74c0)(pcVar7);
              *param_2 = lVar9;
              if (lVar9 == 0) {
LAB_019d7bb4:
                uVar10 = 0xffffffff;
                goto LAB_019d7bbc;
              }
            }
            bVar1 = false;
          }
          else if (bVar2) {
            if ((bool)(bVar3 & iVar6 == 0)) {
              bVar1 = false;
              bVar2 = false;
              iVar6 = 0;
            }
            else {
              (*(code *)PTR_free_02bf74b0)(*param_3);
              lVar9 = (*(code *)PTR_strdup_02bf74c0)(pcVar7);
              *param_3 = lVar9;
              if (lVar9 == 0) goto LAB_019d7bb4;
              bVar1 = false;
              bVar2 = false;
            }
          }
          else {
            iVar5 = FUN_019e23a8("login",pcVar7);
            if (iVar5 == 0) {
              iVar5 = FUN_019e23a8("password",pcVar7);
              if (iVar5 == 0) {
                iVar5 = FUN_019e23a8("machine",pcVar7);
                bVar1 = false;
                bVar2 = false;
                cVar4 = '\x01';
                if (iVar5 == 0) {
                  cVar4 = '\x02';
                }
                else {
                  iVar6 = 0;
                }
                goto LAB_019d7af4;
              }
              bVar1 = false;
              bVar2 = true;
            }
            else {
              bVar2 = false;
              bVar1 = true;
            }
          }
          cVar4 = '\x02';
        }
        else if (cVar4 == '\x01') {
          iVar5 = FUN_019e23a8(param_1,pcVar7);
          if (iVar5 != 0) {
            uVar10 = 0;
          }
          cVar4 = '\0';
          if (iVar5 != 0) {
            cVar4 = '\x02';
          }
        }
        else if (cVar4 == '\0') {
          iVar5 = FUN_019e23a8("machine",pcVar7);
          cVar4 = iVar5 != 0;
        }
LAB_019d7af4:
        pcVar7 = strtok_r((char *)0x0," \t\n",&pStack_98.pw_name);
      }
      pcVar7 = fgets(acStack_4a0,0x100,__stream);
    } while (pcVar7 != (char *)0x0);
  }
LAB_019d7bbc:
  fclose(__stream);
  return uVar10;
}




undefined8 FUN_019d7c00(long param_1)

{
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x8b68) = 0;
  *(undefined4 *)(param_1 + 0x8b70) = 0;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined8 *)(param_1 + 0x8b78) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x8b80) = 0;
  if (*(long *)(param_1 + 0x8bb0) != 0) {
    (*(code *)PTR_free_02bf74b0)();
  }
  *(undefined1 *)(param_1 + 0x8bc0) = 0;
  *(undefined1 *)(param_1 + 0x8bf8) = 0;
  *(undefined8 *)(param_1 + 0x8bf0) = 0;
  *(undefined8 *)(param_1 + 0x8c28) = 0;
  *(undefined8 *)(param_1 + 0x8b90) = 0;
  *(undefined8 *)(param_1 + 0x8b88) = 0;
  *(undefined8 *)(param_1 + 0x8bb0) = 0;
  *(undefined8 *)(param_1 + 0x8ba8) = 0;
  return 0;
}

