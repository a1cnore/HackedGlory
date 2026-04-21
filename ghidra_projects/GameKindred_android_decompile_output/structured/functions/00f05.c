// functions/00f05 — 31 functions
#include "libGameKindred.h"




undefined8 FUN_00f05010(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar1 = FUN_00e6a474(param_2);
  iVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 8);
  do {
    if (*piVar4 == iVar2) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = (char)uVar3;
      }
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x254;
  } while (uVar3 < 0x20);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = DAT_02bf2590;
  }
  return 0;
}




undefined8 FUN_00f050a8(long param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == param_2) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = (char)uVar1;
      }
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x254;
  } while (uVar1 < 0x20);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = DAT_02bf2590;
    return 0;
  }
  return 0;
}




void FUN_00f050fc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00f0512c();
  FUN_00f051a8(param_2,uVar1 & 1,0);
  return;
}




byte FUN_00f0512c(void)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = strstr(&DAT_0320fff0,"SAMSUNG-SM-N900");
  if ((pcVar2 == (char *)0x0) && (pcVar2 = strstr(&DAT_0320fff0,"SPH-L710"), pcVar2 == (char *)0x0))
  {
    bVar1 = FUN_00e70308(&DAT_0320ffc0);
    bVar1 = DAT_0320ffd8 < 0x40000001 | bVar1 ^ 1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}




void FUN_00f051a8(undefined8 param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01997b00();
  FUN_0199824c(uVar1,param_1,param_2);
  uVar1 = FUN_01997b00();
  FUN_0199849c(uVar1,param_1,0,0,~param_3 & 1);
  return;
}




void FUN_00f05200(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01997b00();
  FUN_01998658(uVar1,param_2);
  return;
}




ulong FUN_00f05224(long param_1,undefined8 param_2)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_98;
  ulong local_90 [2];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_60[0] = 0;
  uVar6 = FUN_00f05010(param_1,param_2,local_60);
  if ((uVar6 & 1) == 0) {
    uVar4 = FUN_00e6a474(param_2);
    uVar4 = FUN_0091ed5c(param_2,uVar4,0x12345678);
    uVar6 = 0;
    lVar8 = 8;
    do {
      if (*(int *)(param_1 + lVar8) == 0) goto LAB_00f052d0;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      lVar8 = lVar8 + 0x950;
    } while (uVar1 < 0x20);
    if (uVar1 == 0x20) {
      uVar6 = (ulong)DAT_02bf2590;
    }
    else {
LAB_00f052d0:
      FUN_00f053d4(local_78,param_2);
      pvVar2 = (void *)((ulong)local_78 | 1);
      if ((local_78[0] & 1) != 0) {
        pvVar2 = local_68;
      }
      iVar5 = FUN_00f1c7b0(pvVar2,1);
      if (iVar5 != -1) {
        lVar8 = param_1 + uVar6 * 0x950;
        *(undefined4 *)(lVar8 + 8) = uVar4;
        *(undefined4 *)(lVar8 + 0x950) = 0x10000;
        local_90[0] = 0;
        local_90[1] = 0;
        local_80 = (void *)0x0;
        FUN_00f1ccb0(param_2,local_90);
        local_98 = 0;
        uVar7 = FUN_00f1c844(iVar5,&local_98);
        pvVar2 = (void *)((ulong)local_90 | 1);
        if ((local_90[0] & 1) != 0) {
          pvVar2 = local_80;
        }
        FUN_00f1951c(lVar8 + 0x10,param_1,local_98,uVar7,pvVar2);
        FUN_00f1c85c(iVar5,local_98);
        FUN_00f1c7c8(iVar5);
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    }
  }
  else {
    uVar6 = (ulong)local_60[0];
    param_1 = param_1 + uVar6 * 0x950;
    *(short *)(param_1 + 0x952) = *(short *)(param_1 + 0x952) + 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar6 & 0xff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f053d4(byte *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar3 = FUN_00e6ce4c();
  FUN_00f0597c(local_50,param_2,uVar3);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f1c904(pvVar1,param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  uVar4 = FUN_00f1c888(pbVar5);
  if ((uVar4 & 1) == 0) {
    FUN_008fa54c(local_50,param_2);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    FUN_00f1c904(pvVar1,param_1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00f054c4(long param_1,ulong param_2,short *param_3)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  short *psVar4;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  psVar4 = (short *)(param_1 + 0x12a48);
  do {
    sVar1 = *psVar4;
    if (((sVar1 != 0) && (*(long *)(psVar4 + -0x20) == param_1 + (param_2 & 0xff) * 0x68 + 0x14e08))
       && (psVar4[-0x1a] == *param_3)) goto LAB_00f0559c;
    uVar3 = uVar3 + 1;
    psVar4 = psVar4 + 0x24;
  } while (uVar3 < 0x80);
  uVar3 = 0;
  psVar4 = (short *)(param_1 + 0x12a48);
  do {
    if (*psVar4 == 0) {
      uStack_4c = *(undefined8 *)(param_3 + 10);
      uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
      uStack_60 = *(undefined8 *)param_3;
      uStack_58 = (undefined4)*(undefined8 *)(param_3 + 4);
      local_54 = (undefined4)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
      FUN_00f19d6c(psVar4 + -0x20,param_1,param_2 & 0xff,&uStack_60);
      sVar1 = *psVar4;
LAB_00f0559c:
      *psVar4 = sVar1 + 1;
      goto LAB_00f055a4;
    }
    uVar3 = uVar3 + 1;
    psVar4 = psVar4 + 0x24;
  } while (uVar3 < 0x80);
  uVar3 = 0xffff;
LAB_00f055a4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 0xffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00f055d0(long param_1,undefined4 param_2,byte *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  short *psVar5;
  
  if (param_3 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (uint)*param_3;
    uVar2 = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        uVar2 = (uVar2 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  uVar4 = 0;
  psVar5 = (short *)(param_1 + 0x14e68);
  do {
    sVar1 = *psVar5;
    if ((sVar1 != 0) && (*(uint *)(psVar5 + -4) == uVar2)) goto LAB_00f05694;
    uVar4 = uVar4 + 1;
    psVar5 = psVar5 + 0x34;
  } while (uVar4 < 0x20);
  uVar4 = 0;
  psVar5 = (short *)(param_1 + 0x14e68);
  do {
    if (*psVar5 == 0) {
      FUN_00f19aa4(psVar5 + -0x30,param_1,param_2);
      sVar1 = *psVar5;
LAB_00f05694:
      *psVar5 = sVar1 + 1;
      goto LAB_00f0569c;
    }
    uVar4 = uVar4 + 1;
    psVar5 = psVar5 + 0x34;
  } while (uVar4 < 0x20);
  uVar4 = 0xff;
LAB_00f0569c:
  return uVar4 & 0xff;
}




void FUN_00f056ac(long param_1,ulong param_2)

{
  param_1 = param_1 + (param_2 & 0xff) * 0x950;
  *(short *)(param_1 + 0x950) = *(short *)(param_1 + 0x950) + 1;
  return;
}




void FUN_00f056c8(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  lVar3 = (param_2 - param_1) + -0x129c0;
  do {
    lVar3 = lVar3 + -0x48;
    if (lVar3 == 0) goto LAB_00f05704;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x80);
  uVar2 = 0xffffffff;
LAB_00f05704:
  lVar3 = param_1 + (uVar2 & 0xffffffff) * 0x48;
  sVar1 = *(short *)(lVar3 + 0x12a48) + -1;
  *(short *)(lVar3 + 0x12a48) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  FUN_00f073c8((uint)uVar2 & 0xffff);
  FUN_00f193ec(param_1 + (uVar2 & 0xffffffff) * 0x48 + 0x12a08,param_1);
  return;
}




void FUN_00f05764(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  lVar3 = (param_2 - param_1) + -0x14da0;
  do {
    lVar3 = lVar3 + -0x68;
    if (lVar3 == 0) goto LAB_00f05794;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x20);
  uVar2 = 0xffffffff;
LAB_00f05794:
  lVar3 = param_1 + (uVar2 & 0xffffffff) * 0x68;
  sVar1 = *(short *)(lVar3 + 0x14e68) + -1;
  *(short *)(lVar3 + 0x14e68) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  FUN_00f1900c(param_1 + (uVar2 & 0xffffffff) * 0x68 + 0x14e08,param_1);
  return;
}




long FUN_00f057dc(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_00f19478(param_1 + (param_2 & 0xff) * 0x950 + 0x10,0x61);
  lVar2 = *(long *)(*(long *)(param_1 + (uVar1 & 0xffff) * 0x48 + 0x12a08) + 0x50);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + 0x30;
    }
  }
  return lVar2;
}




long FUN_00f05848(long param_1,ulong param_2)

{
  return param_1 + (param_2 & 0xff) * 0x950 + 0x10;
}




long FUN_00f0585c(long param_1,ulong param_2)

{
  return param_1 + (param_2 & 0xffff) * 0x48 + 0x12a08;
}




long FUN_00f05878(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + (param_2 & 0xffff) * 0x48 + 0x12a08) + 0x50);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x30;
    }
    return lVar1;
  }
  return 0;
}




long FUN_00f058b4(long param_1,ulong param_2)

{
  return param_1 + (param_2 & 0xffff) * 0x48 + 0x12a08;
}




long FUN_00f058d0(long param_1,ulong param_2)

{
  return param_1 + (param_2 & 0xff) * 0x68 + 0x14e08;
}




ulong FUN_00f058ec(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = (param_2 - param_1) + -0x129c0;
  do {
    lVar2 = lVar2 + -0x48;
    if (lVar2 == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x80);
  return 0xffff;
}




void FUN_00f05920(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_3 = param_3 + 0x12a08;
  lVar1 = 0x80;
  do {
    if (*(short *)(param_3 + 0x40) != 0) {
      FUN_00f193c8(param_1,param_2,param_3);
    }
    lVar1 = lVar1 + -1;
    param_3 = param_3 + 0x48;
  } while (lVar1 != 0);
  return;
}




void FUN_00f0597c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  ulong uVar1;
  size_t sVar2;
  
  FUN_008fa54c(param_1,param_2);
  if ((param_3 != (char *)0x0) && (uVar1 = FUN_00e6a488(param_3), (uVar1 & 1) == 0)) {
    FUN_0090de84(param_1,".",1);
    sVar2 = strlen(param_3);
    FUN_0090de84(param_1,param_3,sVar2);
  }
  return;
}




void FUN_00f059e4(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *__s;
  undefined8 *puVar3;
  
  puVar1 = param_1 + 0x1b;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  puVar3 = param_1 + 0x19;
  param_1[0x1a] = 0;
  *puVar3 = 0;
  FUN_0199fb64(puVar1);
  param_1[0x1e] = 0;
  *(float *)(param_1 + 0x1f) = (float)param_2;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x3f800000;
  uVar2 = DAT_03218f00;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x20] = uVar2;
  FUN_00e77acc((long)param_1 + 0x10c,0);
  FUN_00f05b64(puVar3,param_2,0,0);
  FUN_00f05bf4(param_1 + 0xe,param_2,param_2,param_1[0x1a],*(undefined4 *)puVar3);
  FUN_0199fc70(puVar1,1);
  FUN_0199fccc(puVar1,0,param_2,param_2,1,0xb,0);
  FUN_019a02cc(puVar1,0,0,0);
  FUN_019a02fc(puVar1,1,1,0);
  __s = (void *)FUN_00e6aecc(param_2 * param_2);
  param_1[0x1e] = __s;
  if (__s != (void *)0x0) {
    memset(__s,0,(ulong)(param_2 * param_2));
    FUN_0199fccc(puVar1,param_1[0x1e],param_2,param_2,1,0xb,0);
    return;
  }
  return;
}




void FUN_00f05b54(undefined8 param_1)

{
  FUN_0091ed5c(param_1,9,0xfacefeed);
  return;
}




void FUN_00f05b64(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00f0757c(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 << 4;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        lVar3 = lVar3 + 0x10;
        *puVar1 = param_3;
        puVar1[1] = param_4;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00f05bf4(int *param_1,int param_2,int param_3,long param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_5 - 1;
  uVar5 = 0;
  uVar4 = (ulong)uVar2;
  lVar3 = param_4;
  if (1 < param_5) {
    do {
      *(long *)(lVar3 + 8) = lVar3 + 0x10;
      uVar4 = uVar4 - 1;
      uVar5 = (ulong)uVar2;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 != 0);
  }
  *(undefined8 *)(param_4 + uVar5 * 0x10 + 8) = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[10] = 0;
  iVar1 = 0;
  if (param_5 != 0) {
    iVar1 = (int)(uVar2 + param_2) / param_5;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  param_1[2] = iVar1;
  *(int **)(param_1 + 6) = param_1 + 10;
  *(long *)(param_1 + 8) = param_4;
  *(short *)(param_1 + 0xe) = (short)param_2;
  *(undefined2 *)((long)param_1 + 0x3a) = 0xffff;
  *(int **)(param_1 + 0xc) = param_1 + 0xe;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}




void FUN_00f05c70(long param_1)

{
  free(*(void **)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0xf0) = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x10c));
  FUN_0199fb94(param_1 + 0xd8);
  if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_00f05ce4(param_1 + 0x30);
  FUN_00f05ce4(param_1);
  return;
}




void FUN_00f05ce4(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xc) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00f05d6c(uint *param_1,short *param_2,ulong param_3)

{
  undefined8 *puVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long alStack_50 [2];
  
  lVar3 = tpidr_el0;
  alStack_50[1] = *(long *)(lVar3 + 0x28);
  if ((param_3 & 1) == 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x43));
  }
  if (param_2 == (short *)0x0) {
    FUN_00f05bf4(param_1 + 0x1c,(int)(float)param_1[0x3e],(int)(float)param_1[0x3e],
                 *(undefined8 *)(param_1 + 0x34),param_1[0x32]);
    *(undefined1 *)(param_1 + 0x42) = 1;
  }
  else {
    sVar2 = *param_2;
    lVar9 = (long)alStack_50 - ((long)(int)param_1[4] * 9 + 0xfU & 0xfffffffffffffff0);
    uVar4 = *param_1;
    uVar10 = 0;
    do {
      uVar8 = uVar10;
      uVar6 = (ulong)uVar8;
      if (uVar4 <= uVar8) break;
      uVar10 = uVar8 + 1;
    } while (*(int *)(*(long *)(param_1 + 2) + uVar6 * 8 + 4) == -1);
    if (uVar4 != uVar8) {
      lVar5 = *(long *)(param_1 + 2);
      uVar10 = 0;
      do {
        puVar7 = (undefined8 *)
                 (*(long *)(param_1 + 8) + (ulong)*(uint *)(lVar5 + uVar6 * 8 + 4) * 0xc);
        if (*(short *)((long)puVar7 + 1) != sVar2) {
          puVar1 = (undefined8 *)(lVar9 + (ulong)uVar10 * 8 + (ulong)uVar10);
          *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar7 + 1);
          uVar10 = uVar10 + 1;
          *puVar1 = *puVar7;
        }
        uVar8 = (uint)uVar6;
        do {
          uVar8 = uVar8 + 1;
          uVar6 = (ulong)uVar8;
          if (uVar4 <= uVar8) break;
        } while (*(int *)(lVar5 + uVar6 * 8 + 4) == -1);
      } while (uVar4 != uVar8);
      uVar6 = FUN_00f05f24(param_1);
      if (uVar10 != 0) {
        uVar11 = (ulong)uVar10;
        do {
          uVar6 = FUN_00f05f98(param_1,lVar9,lVar9);
          uVar11 = uVar11 - 1;
          lVar9 = lVar9 + 9;
        } while (uVar11 != 0);
      }
      goto joined_r0x00f05f18;
    }
  }
  uVar6 = FUN_00f05f24(param_1);
joined_r0x00f05f18:
  if ((param_3 & 1) == 0) {
    uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x43));
    uVar6 = (ulong)uVar4;
  }
  if (*(long *)(lVar3 + 0x28) != alStack_50[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}




void FUN_00f05f24(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xc) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_00f05f98(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0091ed5c(param_2,9,0xfacefeed);
  uVar9 = param_1[4];
  uVar8 = *param_1;
  param_1[4] = uVar9 + 1;
  if (uVar8 >> 1 < uVar9 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar10 = uVar9 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (iVar5 != -1) {
          uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar9 / (uint)local_58;
          }
          uVar11 = (ulong)(uVar9 - uVar2 * (uint)local_58);
          piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
          iVar1 = *piVar12;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar11) {
              uVar2 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar2 - 1);
            piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
            iVar1 = *piVar12;
          }
          *(uint *)((long)local_50 + uVar11 * 8) = uVar9;
          *piVar12 = iVar5;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar7 = *(long *)(param_1 + 2);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar4 / uVar8;
  }
  uVar11 = (ulong)(uVar4 - uVar9 * uVar8);
  piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
  iVar5 = *piVar12;
  while (iVar5 != -1) {
    uVar9 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
    iVar5 = *piVar12;
  }
  *(uint *)(lVar7 + uVar11 * 8) = uVar4;
  iVar5 = FUN_00f07600(param_1,param_3);
  *piVar12 = iVar5;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

