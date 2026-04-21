// functions/019f5 — 11 functions
#include "libGameKindred.h"




undefined8 FUN_019f5538(long *param_1,int param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  lVar5 = *param_1;
  plVar1 = param_1 + 0xa9;
  if (param_2 == 0x14b) {
    if ((int)param_1[0xbf] == 3) {
      puVar6 = *(undefined1 **)(*(long *)(lVar5 + 0x218) + 0x10);
      puVar2 = &DAT_01e277f2;
      if (puVar6 != (undefined1 *)0x0) {
        puVar2 = puVar6;
      }
      uVar3 = FUN_019e8c44(plVar1,"PASS %s",puVar2);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar4 = 4;
LAB_019f55d8:
      *(undefined4 *)(param_1 + 0xbf) = uVar4;
      return uVar3;
    }
  }
  else {
    if (param_2 - 200U < 100) {
      uVar3 = FUN_019f5b98(param_1);
      return uVar3;
    }
    if (param_2 == 0x14c) {
      if (*(long *)(lVar5 + 0x5a0) == 0) {
        FUN_019ca0fc(lVar5,"ACCT requested but none available");
        return 0x43;
      }
      uVar3 = FUN_019e8c44(plVar1,"ACCT %s");
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar4 = 5;
      goto LAB_019f55d8;
    }
  }
  if ((*(long *)(lVar5 + 0x5a8) != 0) && (*(char *)(lVar5 + 0x8ac8) == '\0')) {
    uVar3 = FUN_019e8c44(plVar1,"%s");
    if ((int)uVar3 == 0) {
      *(undefined1 *)(*param_1 + 0x8ac8) = 1;
      *(undefined4 *)(param_1 + 0xbf) = 3;
      return uVar3;
    }
    return uVar3;
  }
  FUN_019ca0fc(lVar5,"Access denied: %03d",param_2);
  return 0x43;
}




void FUN_019f5658(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  puVar3 = *(undefined1 **)(*(long *)(*param_1 + 0x218) + 8);
  puVar1 = &DAT_01e277f2;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
  }
  iVar2 = FUN_019e8c44(param_1 + 0xa9,"USER %s",puVar1);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xbf) = 3;
    *(undefined1 *)(*param_1 + 0x8ac8) = 0;
  }
  return;
}




ulong FUN_019f56b8(long *param_1,ulong param_2,int param_3)

{
  bool bVar1;
  long *plVar2;
  char *pcVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  
  lVar7 = *param_1;
  lVar9 = *(long *)(lVar7 + 0x218);
  if (param_3 - 0xdU < 2) {
    puVar10 = (undefined8 *)(lVar7 + 0x3e0);
  }
  else if (param_3 == 0xf) {
    puVar10 = (undefined8 *)(lVar7 + 0x3d8);
  }
  else {
    puVar10 = (undefined8 *)(lVar7 + 0x3d0);
  }
  puVar10 = (undefined8 *)*puVar10;
  iVar11 = 0;
  plVar2 = param_1 + 0xa9;
  if ((param_2 & 1) == 0) {
    iVar11 = *(int *)((long)param_1 + 0x5ec) + 1;
  }
  *(int *)((long)param_1 + 0x5ec) = iVar11;
  if (puVar10 != (undefined8 *)0x0) {
    if (iVar11 < 1) {
LAB_019f5740:
      pcVar8 = (char *)*puVar10;
      pcVar3 = pcVar8 + 1;
      if (*pcVar8 != '*') {
        pcVar3 = pcVar8;
      }
      *(uint *)(param_1 + 0xbe) = (uint)(*pcVar8 == '*');
      uVar4 = FUN_019e8c44(plVar2,"%s",pcVar3);
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      *(int *)(param_1 + 0xbf) = param_3;
      return 0;
    }
    iVar12 = 1;
    do {
      puVar10 = (undefined8 *)puVar10[1];
      if (puVar10 == (undefined8 *)0x0) break;
      bVar1 = iVar12 < iVar11;
      iVar12 = iVar12 + 1;
    } while (bVar1);
    if (puVar10 != (undefined8 *)0x0) goto LAB_019f5740;
  }
  if (param_3 == 0xd) {
    if (*(int *)(lVar9 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0xbf) = 0;
      return 0;
    }
    if (param_1[0xc2] != -1) {
      FUN_019c4438(lVar7);
      uVar5 = FUN_019f5bfc(param_1,param_1[0xc2]);
      return uVar5;
    }
    uVar4 = FUN_019e8c44(plVar2,"SIZE %s",param_1[0xba]);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    uVar6 = 0x18;
  }
  else {
    if (param_3 == 0xe) {
      uVar5 = FUN_019f5d7c(param_1,0);
      return uVar5;
    }
    if (param_3 == 0xf) {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x5da) != '\0') {
LAB_019f579c:
      uVar5 = FUN_019f588c(param_1);
      return uVar5;
    }
    *(undefined4 *)(param_1 + 0xbe) = 0;
    *(uint *)((long)param_1 + 0x5f4) = (uint)(*(int *)(lVar7 + 0x4f4) == 2);
    if ((*(char *)((long)param_1 + 0x2e1) == '\0') || (lVar7 = param_1[0xb7], lVar7 == 0)) {
      if ((int)param_1[0xb9] == 0) goto LAB_019f579c;
      *(undefined4 *)((long)param_1 + 0x5ec) = 1;
      lVar7 = *(long *)param_1[0xb8];
    }
    else {
      *(undefined4 *)((long)param_1 + 0x5ec) = 0;
    }
    uVar4 = FUN_019e8c44(plVar2,"CWD %s",lVar7);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    uVar6 = 0x10;
  }
  *(undefined4 *)(param_1 + 0xbf) = uVar6;
  return 0;
}




void FUN_019f588c(long *param_1)

{
  int iVar1;
  
  if (((*(char *)(*param_1 + 0x509) != '\0') || (*(int *)(*param_1 + 0x410) != 0)) &&
     (param_1[0xba] != 0)) {
    iVar1 = FUN_019e8c44(param_1 + 0xa9,"MDTM %s");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xbf) = 0x12;
    }
    return;
  }
  FUN_019f5f54(param_1);
  return;
}




ulong FUN_019f58f0(long *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  
  if (99 < param_2 - 200U) {
    FUN_019ca0fc(*param_1,"Couldn\'t set desired mode");
    return 0x11;
  }
  if (param_2 != 200) {
    FUN_019c9f64(*param_1,"Got a %03d response code instead of the assumed 200\n",param_2);
  }
  switch(param_3) {
  case 0x13:
    uVar5 = FUN_019f602c(param_1);
    return uVar5;
  case 0x14:
    lVar9 = *param_1;
    pcVar7 = (char *)0x0;
    if (*(int *)(lVar9 + 0x4f0) == 2) {
      pcVar8 = *(char **)(lVar9 + 0x8ae8);
      pcVar7 = (char *)0x0;
      if (pcVar8 != (char *)0x0) {
        if ((*pcVar8 == '\0') || (pcVar7 = strchr(pcVar8,0x2f), pcVar7 == (char *)0x0)) {
          pcVar7 = (char *)0x0;
        }
        else {
          pcVar7 = (char *)(*(code *)PTR_strdup_02bf74c0)(pcVar8);
          if (pcVar7 == (char *)0x0) {
            return 0x1b;
          }
          sVar4 = strlen(pcVar7);
          if ((pcVar7[sVar4 - 1] != '/') && (pcVar8 = strrchr(pcVar7,0x2f), pcVar8 != (char *)0x0))
          {
            pcVar8[1] = '\0';
          }
        }
      }
    }
    pcVar8 = *(char **)(lVar9 + 0x588);
    if (*(char **)(lVar9 + 0x588) == (char *)0x0) {
      pcVar8 = "LIST";
      if (*(char *)(lVar9 + 0x50d) != '\0') {
        pcVar8 = "NLST";
      }
    }
    pcVar1 = pcVar7;
    pcVar2 = " ";
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
      pcVar2 = "";
    }
    lVar9 = FUN_019d5c34("%s%s%s",pcVar8,pcVar2,pcVar1);
    if (lVar9 == 0) {
      if (pcVar7 != (char *)0x0) {
        (*(code *)PTR_free_02bf74b0)(pcVar7);
      }
      return 0x1b;
    }
    uVar3 = FUN_019e8c44(param_1 + 0xa9,"%s",lVar9);
    if (pcVar7 != (char *)0x0) {
      (*(code *)PTR_free_02bf74b0)(pcVar7);
    }
    (*(code *)PTR_free_02bf74b0)(lVar9);
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0xbf) = 0x1f;
      return 0;
    }
    return (ulong)uVar3;
  case 0x15:
    uVar6 = 0xd;
    break;
  case 0x16:
    uVar6 = 0xe;
    break;
  default:
    return 0;
  }
  uVar5 = FUN_019f56b8(param_1,1,uVar6);
  return uVar5;
}




int FUN_019f5b08(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((*(char *)(param_1 + 0x5e) == '\0') && (uVar2 = 1, *(char *)((long)param_1 + 0x2e7) != '\0'))
  {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    uVar2 = 0;
  }
  iVar1 = FUN_019e8c44(param_1 + 0xa9,"%s",&DAT_01e28e82 + (uVar2 | uVar2 << 2));
  if (iVar1 == 0) {
    *(int *)((long)param_1 + 0x5ec) = (int)uVar2;
    *(undefined4 *)(param_1 + 0xbf) = 0x1e;
    FUN_019c9f64(*param_1,"Connect data stream passively\n");
  }
  return iVar1;
}




void FUN_019f5b98(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x208) == '\0') {
    iVar1 = FUN_019e8c44(param_1 + 0x548,"%s",&DAT_01e29100);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = 9;
  }
  else {
    iVar1 = FUN_019e8c44(param_1 + 0x548,"PBSZ %d",0);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = 6;
  }
  *(undefined4 *)(param_1 + 0x5f8) = uVar2;
  return;
}




undefined8 FUN_019f5bfc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  lVar7 = *(long *)(lVar6 + 0x218);
  if ((*(long *)(lVar6 + 0x4e8) != 0) && (*(long *)(lVar6 + 0x4e8) < param_2)) {
    FUN_019ca0fc(lVar6,"Maximum file size exceeded");
    return 0x3f;
  }
  *(long *)(lVar7 + 0x20) = param_2;
  plVar1 = (long *)(lVar6 + 0x8b00);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    uVar2 = FUN_019e8c44(param_1 + 0xa9,"RETR %s",param_1[0xba]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar4 = 0x20;
  }
  else {
    if (param_2 == -1) {
      FUN_019c9f64(lVar6,"ftp server doesn\'t support SIZE\n");
      lVar5 = *(long *)(lVar7 + 0x20);
    }
    else if (lVar3 < 0) {
      lVar5 = -lVar3;
      if (-param_2 != lVar3 && param_2 <= lVar5) goto LAB_019f5d50;
      *(long *)(lVar7 + 0x20) = lVar5;
      *plVar1 = lVar3 + param_2;
    }
    else {
      if (param_2 < lVar3) {
LAB_019f5d50:
        FUN_019ca0fc(lVar6,"Offset (%ld) was beyond file size (%ld)");
        return 0x24;
      }
      lVar5 = param_2 - lVar3;
      *(long *)(lVar7 + 0x20) = lVar5;
    }
    if (lVar5 == 0) {
      FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      FUN_019c9f64(lVar6,"File already completely downloaded\n");
      *(undefined4 *)(lVar7 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xbf) = 0;
      return 0;
    }
    FUN_019c9f64(lVar6,"Instructs server to resume from offset %ld\n",*plVar1);
    uVar2 = FUN_019e8c44(param_1 + 0xa9,"REST %ld",*plVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar4 = 0x1b;
  }
  *(undefined4 *)(param_1 + 0xbf) = uVar4;
  return uVar2;
}




undefined8 FUN_019f5d7c(long *param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *param_1;
  plVar1 = (long *)(lVar9 + 0x8b00);
  lVar5 = *plVar1;
  lVar11 = *(long *)(lVar9 + 0x218);
  if ((lVar5 == 0) || ((param_2 & 1) != 0)) {
    if ((0 < lVar5) && ((param_2 & 1) != 0)) goto LAB_019f5dec;
  }
  else {
    if (lVar5 < 0) {
      uVar3 = FUN_019e8c44(param_1 + 0xa9,"SIZE %s",param_1[0xba]);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar7 = 0x19;
      goto LAB_019f5f14;
    }
LAB_019f5dec:
    *(undefined1 *)(lVar9 + 0x50c) = 1;
    if (((code *)param_1[0x78] != (code *)0x0) &&
       (iVar2 = (*(code *)param_1[0x78])(param_1[0x79],lVar5,0), iVar2 != 0)) {
      if (iVar2 != 2) {
        pcVar6 = "Could not seek stream";
LAB_019f5f30:
        FUN_019ca0fc(lVar9,pcVar6);
        return 0x1f;
      }
      lVar8 = *plVar1;
      lVar5 = 0;
      do {
        if (lVar8 - lVar5 < 0x4001) {
          uVar10 = FUN_019c1ea8();
        }
        else {
          uVar10 = 0x4000;
        }
        lVar4 = (*(code *)param_1[0x7a])(lVar9 + 0x938,1,uVar10,param_1[0x7b]);
        if (uVar10 <= lVar4 - 1U) {
          pcVar6 = "Failed to read data";
          goto LAB_019f5f30;
        }
        lVar8 = *plVar1;
        lVar5 = lVar4 + lVar5;
      } while (lVar5 < lVar8);
    }
    lVar5 = *(long *)(lVar9 + 0x8b28);
    if ((0 < lVar5) && (lVar5 = lVar5 - *plVar1, *(long *)(lVar9 + 0x8b28) = lVar5, lVar5 < 1)) {
      FUN_019c9f64(lVar9,"File already completely uploaded\n");
      FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      *(undefined4 *)(lVar11 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xbf) = 0;
      return 0;
    }
  }
  pcVar6 = "STOR %s";
  if (*(char *)(lVar9 + 0x50c) != '\0') {
    pcVar6 = "APPE %s";
  }
  uVar3 = FUN_019e8c44(param_1 + 0xa9,pcVar6,param_1[0xba]);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar7 = 0x21;
LAB_019f5f14:
  *(undefined4 *)(param_1 + 0xbf) = uVar7;
  return uVar3;
}




void FUN_019f5f54(long *param_1)

{
  char cVar1;
  long lVar2;
  char cVar3;
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 0x517) != '\0') && (param_1[0xba] != 0)) {
    cVar1 = *(char *)(lVar2 + 0x50b);
    cVar3 = 'A';
    if (cVar1 == '\0') {
      cVar3 = 'I';
    }
    if (cVar3 != (char)param_1[0xbd]) {
      *(undefined4 *)(*(long *)(lVar2 + 0x218) + 0x18) = 1;
      FUN_019f5fa8(param_1,cVar1 != '\0',0x13);
      return;
    }
  }
  FUN_019f602c();
  return;
}




void FUN_019f5fa8(long param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = 'A';
  if ((param_2 & 1) == 0) {
    cVar2 = 'I';
  }
  if (*(char *)(param_1 + 0x5e8) == cVar2) {
    *(undefined4 *)(param_1 + 0x5f8) = param_3;
    FUN_019f58f0(param_1,200,param_3);
    return;
  }
  iVar1 = FUN_019e8c44(param_1 + 0x548,"TYPE %c",cVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x5f8) = param_3;
    *(char *)(param_1 + 0x5e8) = cVar2;
  }
  return;
}

