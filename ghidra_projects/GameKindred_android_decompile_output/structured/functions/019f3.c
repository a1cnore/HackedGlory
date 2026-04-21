// functions/019f3 — 3 functions
#include "libGameKindred.h"




int FUN_019f3954(long *param_1,uint *param_2)

{
  long *plVar1;
  long lVar2;
  undefined2 uVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char local_fc [4];
  byte *local_f8 [17];
  byte *local_70 [2];
  
  lVar11 = *param_1;
  local_fc[0] = '\0';
  lVar13 = *(long *)(lVar11 + 0x218);
  iVar5 = 0;
  if (*(char *)((long)param_1 + 0x2ea) != '\0') goto LAB_019f3998;
  if (*(int *)((long)param_1 + 0x6bc) == 1) {
    iVar5 = FUN_019ea128(param_1,1,0,0);
    return iVar5;
  }
  iVar5 = FUN_019bd09c(param_1,1,local_fc);
  if (local_fc[0] == '\0') {
    if (iVar5 == 0) {
      return 0;
    }
    if (*(int *)((long)param_1 + 0x5ec) != 0) {
      return iVar5;
    }
    *param_2 = 0xffffffff;
    iVar5 = FUN_019f6888(param_1);
    return iVar5;
  }
  if (*(char *)((long)param_1 + 0x2e2) == '\0') goto LAB_019f3998;
  FUN_019c9f64(lVar11,"Connection to proxy confirmed\n");
  uVar3 = (undefined2)param_1[0xc9];
  lVar12 = *param_1;
  local_fc[0] = '\0';
  plVar1 = param_1 + 0xc3;
  iVar5 = 0;
  switch((int)param_1[0x34]) {
  case 0:
  case 1:
    break;
  default:
    FUN_019ca0fc(lVar12,"unknown proxytype option given");
    iVar5 = 7;
    break;
  case 4:
    lVar6 = param_1[0x32];
    uVar9 = 0;
    goto LAB_019f3cc8;
  case 5:
  case 7:
    iVar5 = FUN_019de30c(param_1[0x32],param_1[0x33],plVar1,uVar3,1,param_1);
    goto LAB_019f3ccc;
  case 6:
    lVar6 = param_1[0x32];
    uVar9 = 1;
LAB_019f3cc8:
    iVar5 = FUN_019ddf00(lVar6,plVar1,uVar3,1,param_1,uVar9);
LAB_019f3ccc:
    local_fc[0] = '\x01';
  }
  if ((*(char *)((long)param_1 + 0x2ed) != '\0') && (*(char *)((long)param_1 + 0x2e3) != '\0')) {
    uVar9 = *(undefined8 *)(lVar12 + 0x218);
    memset(local_f8,0,0x88);
    *(byte ***)(lVar12 + 0x218) = local_f8;
    iVar5 = FUN_019ea128(param_1,1,plVar1,uVar3);
    *(undefined8 *)(lVar12 + 0x218) = uVar9;
    if (iVar5 == 0) {
      if (*(int *)((long)param_1 + 0x6bc) == 2) {
        iVar5 = 0;
        local_fc[0] = '\x01';
      }
      else {
        iVar5 = 0;
        *(undefined4 *)(param_1 + 0xbf) = 0;
      }
    }
  }
LAB_019f3998:
  if ((int)param_1[0xbf] != 0) {
    iVar5 = FUN_019e8940(param_1 + 0xa9,0);
    *param_2 = (uint)((int)param_1[0xbf] == 0);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (*(char *)((long)param_1 + 0x5dc) != '\x01') {
      return 0;
    }
    iVar5 = 0;
    *param_2 = 0;
  }
  if (1 < *(uint *)(lVar13 + 0x18)) {
    if (iVar5 == 0) {
      FUN_019d9cd0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    if (*(char *)((long)param_1 + 0x5dc) != '\0') {
      return iVar5;
    }
    uVar10 = 1;
    goto LAB_019f3c4c;
  }
  if (*(char *)((long)param_1 + 0x5dc) != '\0') {
    iVar5 = FUN_019f6bac(param_1,local_f8);
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((char)local_f8[0] != '\0') {
      iVar5 = FUN_019f6d10(param_1);
      *(undefined1 *)((long)param_1 + 0x5dc) = 0;
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_019f6a70(param_1);
      if (iVar5 != 0) {
        return iVar5;
      }
      *param_2 = 1;
    }
    return 0;
  }
  if (*(char *)(lVar11 + 0x519) == '\0') {
    *(undefined8 *)(lVar13 + 0x20) = 0xffffffffffffffff;
    lVar12 = *param_1;
    if ((*(char *)(lVar12 + 0x8af1) == '\0') || (*(char **)(lVar12 + 0x8af8) == (char *)0x0)) {
      *(undefined8 *)(lVar12 + 0x88) = 0xffffffffffffffff;
    }
    else {
      lVar6 = strtol(*(char **)(lVar12 + 0x8af8),(char **)local_f8,0);
      uVar10 = (uint)*local_f8[0];
      if (*local_f8[0] != 0) {
        do {
          iVar5 = isspace(uVar10);
          if ((uVar10 != 0x2d) && (iVar5 == 0)) break;
          local_f8[0] = local_f8[0] + 1;
          uVar10 = (uint)*local_f8[0];
        } while (uVar10 != 0);
      }
      pbVar4 = local_f8[0];
      lVar7 = strtol((char *)local_f8[0],(char **)local_70,0);
      if (pbVar4 == local_70[0]) {
        lVar7 = -1;
      }
      if ((lVar6 < 0) || (lVar7 != -1)) {
        lVar2 = -lVar6;
        if (-1 < lVar6) {
          lVar2 = (1 - lVar6) + lVar7;
        }
        *(long *)(lVar12 + 0x88) = lVar2;
      }
      *(long *)(lVar12 + 0x8b00) = lVar6;
      *(undefined1 *)(param_1 + 0xbb) = 1;
    }
    if ((*(char *)(lVar11 + 0x50d) == '\0') && (param_1[0xba] != 0)) {
      uVar8 = *(undefined1 *)(lVar11 + 0x50b);
      uVar9 = 0x15;
      goto LAB_019f3b4c;
    }
    if (*(int *)(lVar13 + 0x18) == 0) {
      uVar8 = 1;
      uVar9 = 0x14;
      goto LAB_019f3b4c;
    }
  }
  else {
    uVar8 = *(undefined1 *)(lVar11 + 0x50b);
    uVar9 = 0x16;
LAB_019f3b4c:
    iVar5 = FUN_019f5fa8(param_1,uVar8,uVar9);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  iVar5 = FUN_019e8940(param_1 + 0xa9,0);
  uVar10 = (uint)((int)param_1[0xbf] == 0);
LAB_019f3c4c:
  *param_2 = uVar10;
  return iVar5;
}




void FUN_019f3e10(long param_1,undefined8 param_2)

{
  FUN_019e8940(param_1 + 0x548,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x5f8) == 0;
  return;
}




void FUN_019f3e4c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_019e8940(param_1 + 0x548,0);
  iVar1 = *(int *)(param_1 + 0x5f8);
  *(bool *)param_2 = iVar1 == 0;
  if (iVar2 != 0 || iVar1 != 0) {
    return;
  }
  FUN_019f68f4(param_1,0);
  return;
}

