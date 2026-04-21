// functions/00cea — 78 functions
#include "libGameKindred.h"




undefined8 FUN_00cea044(char *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0x1a8);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = 0;
    do {
      iVar1 = strcasecmp(param_1,(char *)*puVar2);
      if (iVar1 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)lVar4;
        }
        return puVar3[lVar4];
      }
      puVar2 = (undefined8 *)puVar3[lVar4 + 1];
      lVar4 = lVar4 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}




long FUN_00cea0b0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    param_1 = 0;
  }
  else {
    uVar1 = FUN_00e6a488(*(undefined8 *)(param_1 + 0x68));
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00d6eb50();
      param_1 = FUN_00d6eb5c(uVar2,*(undefined8 *)(param_1 + 0x68));
    }
    else {
      param_1 = param_1 + 0x70;
    }
  }
  return param_1;
}




undefined4 FUN_00cea0fc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x94);
  uVar4 = 5;
  if (iVar3 < iVar2 && *(int *)(param_1 + 0x8c) < iVar2) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (iVar3 <= iVar2 || iVar3 <= *(int *)(param_1 + 0x8c)) {
    uVar1 = uVar4;
  }
  return uVar1;
}




undefined1 FUN_00cea124(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x98) < *(int *)(param_1 + 0x9c) &&
          *(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x9c);
  if (*(int *)(param_1 + 0x98) < *(int *)(param_1 + 0xa0)) {
    uVar1 = 2;
    if (*(int *)(param_1 + 0xa0) <= *(int *)(param_1 + 0x90)) {
      uVar1 = bVar2;
    }
    return uVar1;
  }
  return bVar2;
}




void FUN_00cea168(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_008fa54c(local_40);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cea1d8(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  char *__filename;
  long lVar1;
  FILE *__stream;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_009697c8(local_68);
    FUN_008fcdb8(local_50,local_68);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    __filename = (char *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      __filename = local_40;
    }
    __stream = fopen(__filename,"wb");
    if (__stream != (FILE *)0x0) {
      FUN_00e6af10(param_3,param_4,1,__stream);
      fclose(__stream);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00cea2ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  FILE *__stream;
  undefined4 uVar5;
  char *pcVar6;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_009697c8(local_78);
  FUN_008fcdb8(local_60,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pcVar6 = (char *)((ulong)local_60 | 1);
  pcVar1 = pcVar6;
  if ((local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
  uVar4 = FUN_00e6af2c(pcVar1);
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    if (param_3 != 0) {
      pcVar1 = pcVar6;
      if ((local_60[0] & 1) != 0) {
        pcVar1 = local_50;
      }
      __stream = fopen(pcVar1,"rb");
      if (__stream != (FILE *)0x0) {
        if ((local_60[0] & 1) != 0) {
          pcVar6 = local_50;
        }
        uVar3 = FUN_00e6af84(pcVar6);
        FUN_0091aea8(param_3,uVar3,0);
        uVar5 = 1;
        FUN_00e6aef0(*(undefined8 *)(param_3 + 8),uVar3,1,__stream);
        fclose(__stream);
        goto LAB_00cea394;
      }
    }
    uVar5 = 1;
  }
LAB_00cea394:
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cea3d4(void)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined1 auStack_1038 [4096];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e772cc(&DAT_0320ffc0,2,auStack_1038,0x1000);
  uVar2 = FUN_00e6a488(auStack_1038);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_00e6af2c(auStack_1038), (uVar2 & 1) != 0)) {
    pvVar3 = operator_new(0x18);
    FUN_00cea168(pvVar3,auStack_1038);
    DAT_0314b288 = pvVar3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cea470(void)

{
  byte *pbVar1;
  
  pbVar1 = DAT_0314b288;
  if (DAT_0314b288 != (byte *)0x0) {
    if ((*DAT_0314b288 & 1) != 0) {
      operator_delete(*(void **)(DAT_0314b288 + 0x10));
    }
    operator_delete(pbVar1);
  }
  DAT_0314b288 = (byte *)0x0;
  return;
}




void FUN_00cea4b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_0314b288 != 0) {
    FUN_00cea1d8(DAT_0314b288,param_1,param_2,param_3);
    return;
  }
  return;
}




undefined8 FUN_00cea4d4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (DAT_0314b288 != 0)) && (uVar1 = FUN_00e6a488(param_1), (uVar1 & 1) == 0))
  {
    uVar2 = FUN_00cea2ac(DAT_0314b288,param_1,param_2);
    return uVar2;
  }
  return 0;
}




void FUN_00cea538(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  long lVar2;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (DAT_0314b288 != 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_50 = (void *)0x0;
    FUN_00cea5ec(param_1,local_60,0);
    if (DAT_0314b288 != 0) {
      pvVar1 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        pvVar1 = local_50;
      }
      FUN_00cea1d8(DAT_0314b288,pvVar1,param_2,param_3);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cea5ec(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte local_58 [16];
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uVar5 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar5 = (ulong)(*param_1 >> 1);
  }
  uVar4 = FUN_00cea760(pbVar1,uVar5 & 0xffffffff,param_3);
  uVar5 = 0;
  puVar6 = &local_40;
  do {
    uVar2 = uVar5 & 0x3f;
    uVar5 = uVar5 + 4;
    *(undefined *)puVar6 = (&DAT_02beaeb0)[uVar4 >> uVar2 & 0xf];
    puVar6 = (undefined8 *)((long)puVar6 + 1);
  } while (uVar5 != 0x40);
  local_30 = 0;
  FUN_008fa54c(local_58,&local_40);
  FUN_008fce60(param_2,local_58);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00cea6b4(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (DAT_0314b288 == 0) {
    uVar3 = 0;
  }
  else {
    local_50[0] = 0;
    local_50[1] = 0;
    local_40 = (void *)0x0;
    FUN_00cea5ec(param_1,local_50,0);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    uVar3 = FUN_00cea4d4(pvVar1,param_2);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00cea760(uint6 *param_1,ulong param_2,ulong param_3)

{
  uint6 *puVar1;
  long lVar2;
  uint6 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = 0x9e3779b97f4a7c13;
  uVar5 = param_2;
  uVar4 = param_3;
  if (((ulong)param_1 & 7) == 0) {
    for (; 0x17 < uVar5; uVar5 = uVar5 - 0x18) {
      lVar2 = *(long *)param_1;
      puVar3 = param_1 + 1;
      puVar1 = param_1 + 2;
      param_1 = param_1 + 3;
      uVar6 = *(long *)puVar1 + uVar6;
      uVar7 = ((lVar2 + param_3) - (*(long *)puVar3 + uVar4)) - uVar6 ^ uVar6 >> 0x2b;
      uVar8 = ((*(long *)puVar3 + uVar4) - uVar6) - uVar7 ^ uVar7 << 9;
      uVar4 = (uVar6 - uVar7) - uVar8 ^ uVar8 >> 8;
      uVar6 = (uVar7 - uVar8) - uVar4 ^ uVar4 >> 0x26;
      uVar7 = (uVar8 - uVar4) - uVar6 ^ uVar6 << 0x17;
      uVar4 = (uVar4 - uVar6) - uVar7 ^ uVar7 >> 5;
      uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar4 >> 0x23;
      uVar8 = (uVar7 - uVar4) - uVar6 ^ uVar6 << 0x31;
      uVar7 = (uVar4 - uVar6) - uVar8 ^ uVar8 >> 0xb;
      param_3 = (uVar6 - uVar8) - uVar7 ^ uVar7 >> 0xc;
      uVar4 = (uVar8 - uVar7) - param_3 ^ param_3 << 0x12;
      uVar6 = (uVar7 - param_3) - uVar4 ^ uVar4 >> 0x16;
    }
  }
  else {
    for (; 0x17 < uVar5; uVar5 = uVar5 - 0x18) {
      lVar2 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30) + (ulong)param_1[1] +
              ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
      uVar6 = uVar6 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x30) + (ulong)param_1[2] +
              ((ulong)*(byte *)((long)param_1 + 0x17) << 0x38);
      uVar4 = ((param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30) + (ulong)*param_1 +
               ((ulong)*(byte *)((long)param_1 + 7) << 0x38)) - lVar2) - uVar6 ^ uVar6 >> 0x2b;
      uVar8 = (lVar2 - uVar6) - uVar4 ^ uVar4 << 9;
      uVar7 = (uVar6 - uVar4) - uVar8 ^ uVar8 >> 8;
      uVar6 = (uVar4 - uVar8) - uVar7 ^ uVar7 >> 0x26;
      uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar6 << 0x17;
      uVar4 = (uVar7 - uVar6) - uVar8 ^ uVar8 >> 5;
      uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar4 >> 0x23;
      uVar8 = (uVar8 - uVar4) - uVar6 ^ uVar6 << 0x31;
      uVar7 = (uVar4 - uVar6) - uVar8 ^ uVar8 >> 0xb;
      param_3 = (uVar6 - uVar8) - uVar7 ^ uVar7 >> 0xc;
      uVar4 = (uVar8 - uVar7) - param_3 ^ param_3 << 0x12;
      uVar6 = (uVar7 - param_3) - uVar4 ^ uVar4 >> 0x16;
      param_1 = param_1 + 3;
    }
  }
  uVar6 = uVar6 + param_2;
  switch(uVar5) {
  case 0x17:
    uVar6 = uVar6 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x38);
  case 0x16:
    uVar6 = uVar6 + ((ulong)*(byte *)((long)param_1 + 0x15) << 0x30);
  case 0x15:
    uVar6 = uVar6 + ((ulong)*(byte *)((long)param_1 + 0x14) << 0x28);
  case 0x14:
    uVar6 = uVar6 + ((ulong)*(byte *)((long)param_1 + 0x13) << 0x20);
  case 0x13:
    uVar6 = uVar6 + (ulong)*(byte *)((long)param_1 + 0x12) * 0x1000000;
  case 0x12:
    uVar6 = uVar6 + (ulong)*(byte *)((long)param_1 + 0x11) * 0x10000;
  case 0x11:
    uVar6 = uVar6 + (ulong)(byte)param_1[2] * 0x100;
  case 0x10:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
  case 0xf:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30);
  case 0xe:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0xd) << 0x28);
  case 0xd:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0xc) << 0x20);
  case 0xc:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 0xb) * 0x1000000;
  case 0xb:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 10) * 0x10000;
  case 10:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 9) * 0x100;
  case 9:
    uVar4 = uVar4 + (byte)param_1[1];
  case 8:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 7) << 0x38);
  case 7:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30);
  case 6:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 5) << 0x28);
  case 5:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 4) << 0x20);
  case 4:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 3) * 0x1000000;
  case 3:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 2) * 0x10000;
  case 2:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 1) * 0x100;
  case 1:
    param_3 = param_3 + (byte)*param_1;
  default:
    uVar5 = (param_3 - uVar4) - uVar6 ^ uVar6 >> 0x2b;
    uVar7 = (uVar4 - uVar6) - uVar5 ^ uVar5 << 9;
    uVar4 = (uVar6 - uVar5) - uVar7 ^ uVar7 >> 8;
    uVar6 = (uVar5 - uVar7) - uVar4 ^ uVar4 >> 0x26;
    uVar5 = (uVar7 - uVar4) - uVar6 ^ uVar6 << 0x17;
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar5 >> 5;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar4 >> 0x23;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar6 << 0x31;
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar5 >> 0xb;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar4 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar6 << 0x12;
    return (uVar4 - uVar6) - uVar5 ^ uVar5 >> 0x16;
  }
}




int FUN_00ceab2c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_1 ^ 0xffffffff) & 0xff) != 0) {
    iVar1 = 1 << (ulong)(param_1 & 0x1f);
  }
  return iVar1;
}




undefined1 FUN_00ceab48(void)

{
  return DAT_0314b2d8;
}




void FUN_00ceab54(byte param_1)

{
  DAT_0314b2d8 = param_1 & 1;
  return;
}




undefined1 FUN_00ceab64(void)

{
  return DAT_0314b2dc;
}




void FUN_00ceab70(byte param_1)

{
  DAT_0314b2dc = param_1 & 1;
  FUN_00910394(&DAT_0314b2e0);
  return;
}




void FUN_00ceab88(undefined4 param_1)

{
  DAT_02beaec8 = param_1;
  return;
}




undefined4 FUN_00ceab94(void)

{
  return DAT_02beaec8;
}




void FUN_00ceaba0(undefined8 param_1)

{
  FUN_008fce60(&DAT_0314b2f0,param_1);
  return;
}




undefined * FUN_00ceabb4(void)

{
  return &DAT_0314b2e0;
}




undefined8 * FUN_00ceabc0(void)

{
  return &DAT_0314b2f0;
}




bool FUN_00ceabcc(int param_1)

{
  return param_1 - 1U < 6;
}




bool FUN_00ceabdc(int param_1)

{
  return param_1 - 7U < 5;
}




void FUN_00ceabec(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_00ceabf4(byte *param_1)

{
  *param_1 = *param_1 & 0xfc;
  return;
}




void FUN_00ceac04(undefined4 *param_1)

{
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfc;
  return;
}




undefined8 FUN_00ceac18(void)

{
  return 3;
}




int FUN_00ceac20(uint param_1)

{
  int iVar1;
  
  if (-1 < (int)param_1) {
    iVar1 = 1;
    if ((int)param_1 < 0x1e) {
      iVar1 = param_1 / 3 + 1;
    }
    return iVar1;
  }
  return 0;
}




undefined4 FUN_00ceac4c(uint param_1)

{
  uint uVar1;
  
  if (-1 < (int)param_1) {
    uVar1 = 0;
    if ((int)param_1 < 0x1e) {
      uVar1 = param_1 / 3;
    }
    if (uVar1 < 10) {
      return (&DAT_01bc8fc0)[(long)((ulong)uVar1 << 0x21) >> 0x21];
    }
  }
  return 0;
}




bool FUN_00ceac94(int param_1)

{
  return param_1 < 7;
}




uint FUN_00ceaca0(uint param_1)

{
  if (param_1 < 7) {
    return 99U >> (ulong)(param_1 & 0x1f) & 1;
  }
  return 0;
}




uint FUN_00ceacc4(uint param_1)

{
  if (param_1 < 7) {
    return 0x5fU >> (ulong)(param_1 & 0x1f) & 1;
  }
  return 0;
}




undefined8 FUN_00ceace8(void)

{
  return DAT_0314b308;
}




undefined4 FUN_00ceacf4(void)

{
  if (DAT_0314b308 != (undefined4 *)0x0) {
    return *DAT_0314b308;
  }
  return 0x40;
}




void FUN_00cead10(undefined8 param_1)

{
  FUN_008fce60(&DAT_0314b310,param_1);
  return;
}




undefined8 * FUN_00cead24(void)

{
  return &DAT_0314b310;
}




void FUN_00cead30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d6eb50();
  uVar1 = DAT_0314b320;
  if (((byte)DAT_0314b310 & 1) == 0) {
    uVar1 = 0x314b311;
  }
  DAT_0314b308 = FUN_00d6eb5c(uVar2,uVar1);
  return;
}




void FUN_00cead68(byte *param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  uVar1 = FUN_00d6eb50();
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
  }
  FUN_00d6eb5c(uVar1,pbVar2);
  return;
}




void FUN_00cead98(void)

{
  DAT_0314b308 = 0;
  DAT_02beaecc = 0xbf800000;
  return;
}




void FUN_00ceadb0(undefined4 param_1)

{
  DAT_02beaecc = param_1;
  return;
}




undefined4 FUN_00ceadbc(void)

{
  return DAT_02beaecc;
}




undefined8 FUN_00ceadc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00ceadd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00ceadd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




void FUN_00ceade0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x70),0);
  thunk_FUN_00e7051c(param_1,uVar1);
  return;
}




void FUN_00ceae10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x68),0);
  thunk_FUN_00e7051c(param_1,uVar1);
  return;
}




void FUN_00ceae40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x78),0);
  thunk_FUN_00e7051c(param_1,uVar1);
  return;
}




undefined1 FUN_00ceae70(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3e);
}




undefined1 FUN_00ceae78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3f);
}




undefined1 FUN_00ceae80(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}




undefined1 FUN_00ceae88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}




undefined1 FUN_00ceae90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x42);
}




undefined1 FUN_00ceae98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x43);
}




undefined1 FUN_00ceaea0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}




undefined1 FUN_00ceaea8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x41);
}




bool FUN_00ceaeb0(long param_1)

{
  if (*(char *)(param_1 + 0x3f) != '\0') {
    return false;
  }
  return *(char *)(param_1 + 0x40) != '\0';
}




bool FUN_00ceaed4(long param_1)

{
  if (*(char *)(param_1 + 0x3e) != '\0') {
    return *(char *)(param_1 + 0x3f) != '\0';
  }
  return false;
}




bool FUN_00ceaef4(long param_1)

{
  if (*(char *)(param_1 + 0x3e) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x4a) != '\0';
}




undefined1 FUN_00ceaf14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4a);
}




bool FUN_00ceaf1c(long param_1)

{
  return *(char *)(param_1 + 0x52) == '\0';
}




undefined1 FUN_00ceaf2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x45);
}




undefined1 FUN_00ceaf34(long param_1)

{
  return *(undefined1 *)(param_1 + 0x46);
}




undefined1 FUN_00ceaf3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x47);
}




undefined1 FUN_00ceaf44(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}




undefined1 FUN_00ceaf4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}




undefined1 FUN_00ceaf54(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4e);
}




undefined8 FUN_00ceaf5c(void)

{
  return 1;
}




bool FUN_00ceaf64(long param_1)

{
  return *(char *)(param_1 + 0x39) == '\0';
}




bool FUN_00ceaf74(long param_1)

{
  return *(char *)(param_1 + 0x3a) == '\0';
}




undefined1 FUN_00ceaf84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}




undefined1 FUN_00ceaf8c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3d);
}




undefined1 FUN_00ceaf94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}




bool FUN_00ceaf9c(long param_1)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)**(undefined8 **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 5) {
      return false;
    }
    lVar2 = 0;
    do {
      if ((int)lVar2 == 8) {
        return *piVar1 == 5;
      }
      piVar1 = *(int **)((long)*(undefined8 **)(param_1 + 0x28) + lVar2 + 8);
      lVar2 = lVar2 + 8;
    } while (piVar1 != (int *)0x0);
  }
  return false;
}




undefined4 FUN_00ceafec(long param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    puVar1 = (undefined4 *)*puVar2;
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = (uint)param_2;
      while( true ) {
        puVar2 = puVar2 + 1;
        if (uVar3 - 1 == 0) {
          return *puVar1;
        }
        puVar1 = (undefined4 *)*puVar2;
        if ((int)uVar3 < 2) break;
        uVar3 = uVar3 - 1;
        if (puVar1 == (undefined4 *)0x0) {
          return 0;
        }
      }
    }
  }
  return 0;
}

