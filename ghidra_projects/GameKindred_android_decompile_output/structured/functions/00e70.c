// functions/00e70 — 67 functions
#include "libGameKindred.h"




void FUN_00e70044(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x477] = param_1[0x477] & 0xfe;
  memset(param_1 + 0x30,0,0x100);
  memset(param_1 + 0x1b0,0,0x187);
  FUN_00e6a50c(param_1 + 0x233,4,&DAT_01e39add);
  FUN_00e6a50c(param_1 + 0x237,0x100,"en");
  *(undefined8 *)(param_1 + 0x36f) = 0;
  *(undefined8 *)(param_1 + 0x367) = 0;
  *(undefined8 *)(param_1 + 0x35f) = 0;
  *(undefined8 *)(param_1 + 0x357) = 0;
  *(undefined8 *)(param_1 + 0x34f) = 0;
  *(undefined8 *)(param_1 + 0x347) = 0;
  *(undefined8 *)(param_1 + 0x33f) = 0;
  *(undefined8 *)(param_1 + 0x337) = 0;
  return;
}




undefined4 FUN_00e7011c(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




undefined8 FUN_00e70124(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00e7012c(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 8);
}




undefined8 FUN_00e70138(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = 1;
  do {
    if (iVar1 <= lVar3) {
      return 0;
    }
    iVar2 = strcmp(*(char **)(*(long *)(param_1 + 8) + lVar3 * 8),param_2);
    lVar3 = lVar3 + 1;
  } while (iVar2 != 0);
  return *(undefined8 *)(*(long *)(param_1 + 8) + lVar3 * 8);
}




undefined8 FUN_00e70198(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (1 < iVar1) {
    lVar3 = 1;
    do {
      iVar2 = strcmp(*(char **)(*(long *)(param_1 + 8) + lVar3 * 8),param_2);
      if (iVar2 == 0) {
        return 1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return 0;
}




undefined4 FUN_00e70200(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




undefined8 FUN_00e70208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00e70210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined4 FUN_00e70218(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




undefined4 FUN_00e70220(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




undefined * FUN_00e70228(long param_1)

{
  if (*(uint *)(param_1 + 0x2c) < 0x1a) {
    return (&PTR_s_HW_ID_UNKNOWN_02820530)[(int)*(uint *)(param_1 + 0x2c)];
  }
  return &DAT_01e277f2;
}




long FUN_00e70250(long param_1)

{
  return param_1 + 0x170;
}




long FUN_00e70258(long param_1)

{
  return param_1 + 0x130;
}




long FUN_00e70260(long param_1)

{
  return param_1 + 0x30;
}




long FUN_00e70268(long param_1)

{
  return param_1 + 0x70;
}




long FUN_00e70270(long param_1)

{
  return param_1 + 0xb0;
}




long FUN_00e7027c(long param_1)

{
  return param_1 + 0x1b0;
}




undefined1 FUN_00e70284(long param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 < 3) {
    uVar1 = *(undefined1 *)(param_1 + (ulong)param_2 + 0x230);
  }
  return uVar1;
}




bool FUN_00e702a0(long param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x230);
  bVar2 = SBORROW4(uVar3,param_2);
  iVar1 = uVar3 - param_2;
  if (uVar3 == param_2) {
    uVar3 = (uint)*(byte *)(param_1 + 0x231);
    bVar2 = SBORROW4(uVar3,param_3);
    iVar1 = uVar3 - param_3;
    if (uVar3 == param_3) {
      return param_4 <= (int)(uint)*(byte *)(param_1 + 0x232);
    }
  }
  return iVar1 < 0 == bVar2;
}




long FUN_00e702d0(long param_1)

{
  return param_1 + 0x233;
}




long FUN_00e702d8(long param_1)

{
  return param_1 + 0x237;
}




long FUN_00e702e0(long param_1)

{
  return param_1 + 0x337;
}




bool FUN_00e702e8(float param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = *(float *)(param_2 + 0x478) != param_1;
  if (bVar1) {
    *(float *)(param_2 + 0x478) = param_1;
  }
  return bVar1;
}




byte FUN_00e70308(long param_1)

{
  return *(byte *)(param_1 + 0x477) & 1;
}




int FUN_00e70314(timespec *param_1)

{
  int iVar1;
  
  iVar1 = clock_gettime(1,param_1);
  return iVar1;
}




int FUN_00e70320(double param_1,double *param_2)

{
  if (param_2 != (double *)0x0) {
    *param_2 = param_1 + (double)(int)(param_1 / 60.0) * -60.0;
  }
  return (int)(param_1 / 60.0);
}




void FUN_00e70354(double param_1,int *param_2,double *param_3)

{
  if (param_2 != (int *)0x0) {
    *param_2 = (int)((param_1 + (double)(int)(param_1 / 3600.0) * -3600.0) / 60.0);
  }
  if (param_3 != (double *)0x0) {
    param_1 = param_1 + (double)(int)(param_1 / 3600.0) * -3600.0;
    *param_3 = param_1;
    if (param_2 != (int *)0x0) {
      *param_3 = param_1 + (double)*param_2 * -60.0;
    }
  }
  return;
}




void FUN_00e703d4(double param_1,int *param_2,int *param_3,double *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(param_1 / 86400.0);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)((param_1 + (double)iVar1 * -86400.0) / 3600.0);
  }
  if (param_3 != (int *)0x0) {
    iVar2 = (int)((param_1 + (double)iVar1 * -86400.0) / 60.0);
    *param_3 = iVar2;
    if (param_2 != (int *)0x0) {
      *param_3 = iVar2 + *param_2 * -0x3c;
    }
  }
  if (param_4 != (double *)0x0) {
    param_1 = param_1 + (double)iVar1 * -86400.0;
    *param_4 = param_1;
    if (param_2 != (int *)0x0) {
      param_1 = param_1 + (double)*param_2 * -3600.0;
      *param_4 = param_1;
    }
    if (param_3 != (int *)0x0) {
      *param_4 = param_1 + (double)*param_3 * -60.0;
    }
  }
  return;
}




bool FUN_00e704b4(byte *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  *param_2 = 0;
  bVar1 = *param_1;
  if (bVar1 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      param_1 = param_1 + 1;
      uVar3 = (ulong)(byte)(&DAT_01beebac)
                           [((ulong)(byte)(&DAT_01beebac)[bVar1] | 0x100) + uVar3 * 0x10];
      if (uVar3 == 0) {
        iVar2 = iVar2 + 1;
        *param_2 = iVar2;
      }
      bVar1 = *param_1;
    } while (bVar1 != 0);
    return uVar3 == 0;
  }
  return true;
}




void FUN_00e70510(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void thunk_FUN_00e7051c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00910400(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 1;
    puVar2 = *(undefined2 **)(param_2 + 2);
    puVar3 = *(undefined2 **)(param_1 + 2);
    do {
      lVar4 = lVar4 + -2;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return;
}




void FUN_00e7051c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00910400(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 1;
    puVar2 = *(undefined2 **)(param_2 + 2);
    puVar3 = *(undefined2 **)(param_1 + 2);
    do {
      lVar4 = lVar4 + -2;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return;
}




void FUN_00e70570(undefined8 *param_1,byte *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    if (param_2 == (byte *)0x0) {
      return;
    }
  }
  FUN_00e70668(param_1,param_2);
  return;
}




void FUN_00e705a0(undefined4 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    FUN_00e70668();
  }
  return;
}




void FUN_00e705c8(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_00e70668();
  }
  return;
}




void FUN_00e705e4(uint *param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00910400(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < param_2) {
      lVar3 = (ulong)param_2 - (ulong)uVar1;
      puVar2 = (undefined2 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 2);
      do {
        lVar3 = lVar3 + -1;
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




undefined4 * FUN_00e70668(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulong extraout_x13;
  
  if (param_2 == (byte *)0x0) {
LAB_00e706c8:
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    bVar3 = *param_2;
    if (bVar3 == 0) {
      iVar5 = 0;
    }
    else {
      uVar7 = 0;
      iVar2 = 0;
      pbVar8 = param_2;
      do {
        iVar5 = iVar2;
        pbVar8 = pbVar8 + 1;
        bVar4 = (&DAT_01beebac)[((ulong)(byte)(&DAT_01beebac)[bVar3] | 0x100) + uVar7 * 0x10];
        uVar7 = (ulong)bVar4;
        bVar3 = *pbVar8;
        iVar2 = iVar5;
        if (bVar4 == 0) {
          iVar2 = iVar5 + 1;
        }
      } while (bVar3 != 0);
      if (bVar4 != 0) goto LAB_00e706c8;
      iVar5 = iVar5 + 1;
    }
    FUN_00e705e4(param_1,iVar5,0);
    bVar3 = *param_2;
    if (bVar3 != 0) {
      uVar6 = 0;
      uVar9 = 0;
      uVar7 = extraout_x13;
      do {
        param_2 = param_2 + 1;
        if (uVar9 == 0) {
          uVar1 = 0xffU >> (ulong)((byte)(&DAT_01beebac)[bVar3] & 0x1f) & (uint)bVar3;
        }
        else {
          uVar1 = bVar3 & 0x3f | (int)uVar7 << 6;
        }
        uVar7 = (ulong)uVar1;
        uVar9 = (uint)(byte)(&DAT_01beebac)
                            [(ulong)((byte)(&DAT_01beebac)[bVar3] | 0x100) + (ulong)(uVar9 << 4)];
        if (uVar9 == 0) {
          *(short *)(*(long *)(param_1 + 2) + (ulong)uVar6 * 2) = (short)uVar1;
          uVar6 = uVar6 + 1;
        }
        bVar3 = *param_2;
      } while (bVar3 != 0);
    }
  }
  return param_1;
}




void FUN_00e70770(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_00e70884();
  }
  return;
}




void FUN_00e7078c(undefined4 *param_1,long param_2)

{
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    FUN_00e70884();
  }
  return;
}




void FUN_00e707b4(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_00e70668();
  }
  return;
}




void FUN_00e707d0(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_00e707ec();
  }
  return;
}




undefined4 * FUN_00e707ec(undefined4 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_2 == (undefined2 *)0x0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (param_2[uVar3] != 0);
    FUN_00e705e4(param_1,uVar3,0);
    if (uVar3 != 0) {
      uVar2 = (ulong)uVar3;
      puVar1 = *(undefined2 **)(param_1 + 2);
      do {
        uVar2 = uVar2 - 1;
        *puVar1 = *param_2;
        puVar1 = puVar1 + 1;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
  }
  return param_1;
}




void FUN_00e70868(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_00e70884();
  }
  return;
}




undefined4 * FUN_00e70884(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  uint uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (param_2[uVar3] != 0);
    FUN_00e705e4(param_1,uVar3,0);
    if (uVar3 != 0) {
      uVar2 = (ulong)uVar3;
      puVar1 = *(undefined2 **)(param_1 + 2);
      do {
        uVar2 = uVar2 - 1;
        *puVar1 = (short)*param_2;
        puVar1 = puVar1 + 1;
        param_2 = param_2 + 1;
      } while (uVar2 != 0);
    }
  }
  return param_1;
}




undefined8 FUN_00e70900(undefined8 param_1)

{
  FUN_00910394();
  return param_1;
}




void FUN_00e70924(undefined4 *param_1,byte *param_2)

{
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
    if (param_2 == (byte *)0x0) {
      if (*(long *)(param_1 + 2) != 0) {
        *param_1 = 0;
      }
      return;
    }
  }
  FUN_00e70668(param_1,param_2);
  return;
}




void FUN_00e70960(undefined4 *param_1)

{
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  return;
}




void FUN_00e70970(undefined8 param_1,undefined8 param_2)

{
  FUN_00e705e4(param_1,param_2,0);
  return;
}




void FUN_00e70978(uint *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *param_1;
  pbVar4 = param_2;
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      uVar2 = *(ushort *)(*(long *)(param_1 + 2) + uVar5 * 2);
      if ((0 < param_3) && ((long)(param_2 + ((long)param_3 - (long)pbVar4)) < 5)) break;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar4 = bVar3 & 0x7f;
        lVar6 = 1;
      }
      else if (uVar2 < 0x800) {
        *pbVar4 = (byte)(uVar2 >> 6) & 0x1f | 0xc0;
        pbVar4[1] = bVar3 & 0x3f | 0x80;
        lVar6 = 2;
      }
      else {
        lVar6 = 3;
        *pbVar4 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        pbVar4[2] = bVar3 & 0x3f | 0x80;
      }
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + lVar6;
    } while (uVar5 < uVar1);
  }
  *pbVar4 = 0;
  return;
}




void FUN_00e70a24(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_1;
  FUN_00e70978(param_1,local_50 + -((long)(int)(iVar1 << 2 | 1) + 0xfU & 0xfffffffffffffff0));
  FUN_008fa54c(local_50,local_50 + -((long)(int)(iVar1 << 2 | 1) + 0xfU & 0xfffffffffffffff0));
  FUN_008fce60(param_2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e70ac4(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    uVar1 = *param_1;
    uVar2 = 0;
    do {
      if (uVar1 <= uVar2) {
        return;
      }
      *(uint *)(param_2 + uVar2 * 4) = (uint)*(ushort *)(*(long *)(param_1 + 2) + uVar2 * 2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}




undefined4 FUN_00e70afc(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}




bool FUN_00e70b04(int *param_1)

{
  return *param_1 == 0;
}




undefined4 FUN_00e70b14(undefined4 *param_1)

{
  return *param_1;
}




undefined2 FUN_00e70b1c(long param_1,uint param_2)

{
  return *(undefined2 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 2);
}




undefined2 FUN_00e70b28(long param_1,uint param_2)

{
  return *(undefined2 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 2);
}




undefined8 FUN_00e70b34(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != *param_2) {
    return 0;
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 2) !=
          *(short *)(*(long *)(param_2 + 2) + (ulong)uVar2 * 2)) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 1;
}




undefined8 FUN_00e70b88(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != *param_2) {
    return 1;
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 2) !=
          *(short *)(*(long *)(param_2 + 2) + (ulong)uVar2 * 2)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}




bool FUN_00e70bd4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar1 = uVar2;
  if (uVar2 >= uVar3) {
    uVar1 = uVar3;
  }
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar4 = *(ushort *)(*(long *)(param_1 + 2) + (ulong)uVar6 * 2);
      uVar5 = *(ushort *)(*(long *)(param_2 + 2) + (ulong)uVar6 * 2);
      if (uVar4 < uVar5) {
        return true;
      }
      if (uVar5 < uVar4) {
        return false;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return uVar2 < uVar3;
}




int * FUN_00e70c34(int *param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  iVar2 = *param_1;
  FUN_00e705e4(param_1,*param_2 + iVar2,0);
  uVar3 = *param_2;
  if (uVar3 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = *(long *)(param_1 + 2);
    uVar7 = 0;
    do {
      lVar1 = uVar7 * 2;
      iVar6 = (int)uVar7;
      uVar7 = uVar7 + 1;
      *(undefined2 *)(lVar5 + (ulong)(uint)(iVar2 + iVar6) * 2) = *(undefined2 *)(lVar4 + lVar1);
    } while (uVar7 < uVar3);
  }
  return param_1;
}




undefined4 FUN_00e70ca0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = 0;
  if ((param_3 <= uVar1) && (uVar2 = 0, param_3 <= *param_2)) {
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        if ((param_3 != 0xffffffff) && (param_3 <= uVar3)) break;
        if (*(short *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 2) !=
            *(short *)(*(long *)(param_2 + 2) + (ulong)uVar3 * 2)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}




uint FUN_00e70d10(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  bVar4 = uVar1 < uVar2;
  uVar5 = uVar1;
  if (!bVar4) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((param_4 != 0xffffffff) && (param_4 <= uVar6)) break;
      uVar7 = (uint)*(ushort *)(*(long *)(param_1 + 2) + uVar6 * 2);
      if ((param_3 & 1) == 0) {
        uVar3 = *(ushort *)(*(long *)(param_2 + 2) + uVar6 * 2);
        uVar9 = (uint)uVar3;
        uVar10 = uVar7;
      }
      else {
        uVar3 = *(ushort *)(*(long *)(param_2 + 2) + uVar6 * 2);
        uVar10 = uVar7 + 0x20;
        if (0x19 < uVar7 - 0x41) {
          uVar10 = uVar7;
        }
        uVar9 = uVar3 + 0x20;
        if (0x19 < uVar3 - 0x41) {
          uVar9 = (uint)uVar3;
        }
      }
      uVar8 = (uint)uVar3;
      if ((uVar10 & 0xffff) < (uVar9 & 0xffff)) {
        uVar5 = 0xffffffff;
        bVar4 = true;
        goto LAB_00e70dd4;
      }
      uVar10 = uVar8;
      uVar9 = uVar7;
      if ((param_3 & 1) != 0) {
        uVar9 = uVar7 + 0x20;
        if (0x19 < uVar7 - 0x41) {
          uVar9 = uVar7;
        }
        uVar10 = uVar8 + 0x20;
        if (0x19 < uVar8 - 0x41) {
          uVar10 = uVar8;
        }
      }
      if ((uVar10 & 0xffff) < (uVar9 & 0xffff)) {
        bVar4 = true;
        uVar5 = 1;
        goto LAB_00e70dd4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  uVar5 = 0xffffffff;
LAB_00e70dd4:
  if (!bVar4) {
    uVar5 = (uint)(uVar2 < uVar1);
  }
  return uVar5;
}




uint FUN_00e70e00(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = uVar1 + 0x20;
  if (0x19 < uVar1 - 0x41) {
    uVar2 = (uint)uVar1;
  }
  return uVar2;
}




int FUN_00e70e18(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_10b0;
  undefined8 uStack_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined1 *local_1080;
  undefined1 **ppuStack_1078;
  undefined8 *puStack_1070;
  undefined8 uStack_1068;
  char acStack_1038 [4104];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puStack_1070 = &local_10b0;
  ppuStack_1078 = &local_1080;
  uStack_1068 = 0xffffff80ffffffd0;
  local_10b0 = param_3;
  uStack_10a8 = param_4;
  local_10a0 = param_5;
  uStack_1098 = param_6;
  local_1090 = param_7;
  uStack_1088 = param_8;
  local_1080 = (undefined1 *)register0x00000008;
  iVar2 = vsnprintf(acStack_1038,0x400,param_2,&local_1080);
  if (iVar2 != -1) {
    FUN_00e70668(param_1,acStack_1038);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e70eec(undefined8 param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_40b0;
  undefined8 uStack_40a8;
  undefined8 local_40a0;
  undefined8 uStack_4098;
  undefined8 local_4090;
  undefined8 uStack_4088;
  undefined1 *local_4080;
  undefined1 **ppuStack_4078;
  undefined8 *puStack_4070;
  undefined8 uStack_4068;
  wchar_t awStack_4038 [4098];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  puStack_4070 = &local_40b0;
  ppuStack_4078 = &local_4080;
  uStack_4068 = 0xffffff80ffffffd0;
  local_40b0 = param_3;
  uStack_40a8 = param_4;
  local_40a0 = param_5;
  uStack_4098 = param_6;
  local_4090 = param_7;
  uStack_4088 = param_8;
  local_4080 = (undefined1 *)register0x00000008;
  iVar2 = vswprintf(awStack_4038,0x1000,param_2,&local_4080);
  if (iVar2 != -1) {
    FUN_00e70884(param_1,awStack_4038);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00e70fc0(uint *param_1,uint param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    return 0;
  }
  uVar4 = *param_3;
  if (uVar4 - 1 < uVar3) {
    if (uVar3 <= param_2) {
      return 0;
    }
    if (uVar4 <= uVar3 - param_2) {
      psVar5 = *(short **)(param_3 + 2);
      do {
        if (*(short *)(*(long *)(param_1 + 2) + (ulong)param_2 * 2) == *psVar5) {
          if (uVar3 <= param_2) {
            return 1;
          }
          if (*psVar5 == *psVar5) {
            uVar6 = 1;
            do {
              uVar2 = param_2 + uVar6;
              if (uVar3 <= uVar2) {
                return 1;
              }
              if (uVar4 <= uVar6) {
                return 1;
              }
              uVar1 = (ulong)uVar6;
              uVar6 = uVar6 + 1;
            } while (*(short *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 2) == psVar5[uVar1]);
          }
        }
        param_2 = param_2 + 1;
        if (uVar3 <= param_2) {
          return 0;
        }
      } while (uVar4 <= uVar3 - param_2);
    }
  }
  return 0;
}

