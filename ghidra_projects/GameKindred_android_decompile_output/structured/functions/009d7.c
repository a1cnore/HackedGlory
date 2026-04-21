// functions/009d7 — 72 functions
#include "libGameKindred.h"




void FUN_009d702c(float param_1,long param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  fVar2 = 15.0;
  if (0.0 <= param_1) {
    fVar2 = param_1;
  }
  *(byte *)(param_2 + 0x160) = param_4 & 1;
  *(undefined1 *)(param_2 + 0x161) = 1;
  *(undefined8 *)(param_2 + 0x150) = uVar1;
  *(float *)(param_2 + 0x15c) = fVar2;
  return;
}




void FUN_009d7060(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1c8) = param_2;
  return;
}




void FUN_009d7068(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  *(undefined8 *)(param_2 + 0x164) = *param_3;
  *(undefined8 *)(param_2 + 0x16c) = *param_4;
  *(undefined4 *)(param_2 + 0x184) = param_1;
  if ((param_5 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x174) = *param_3;
    *(undefined8 *)(param_2 + 0x17c) = *param_4;
    *(undefined4 *)(param_2 + 0x184) = param_1;
  }
  return;
}




void FUN_009d70a8(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  *(undefined8 *)(param_2 + 0x174) = *param_3;
  *(undefined8 *)(param_2 + 0x17c) = *param_4;
  *(undefined4 *)(param_2 + 0x184) = param_1;
  return;
}




void FUN_009d70c8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x188) = param_2;
  return;
}




void FUN_009d70d0(long param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x18c) = param_2;
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 400) = param_2;
  }
  return;
}




void FUN_009d70e0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 400) = param_2;
  return;
}




void FUN_009d70e8(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                 undefined8 *param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_3 + 0x194) = param_4;
  uVar1 = *param_5;
  *(undefined4 *)(param_3 + 0x1a0) = param_6;
  *(undefined4 *)(param_3 + 0x1a4) = param_7;
  *(undefined4 *)(param_3 + 0x1a8) = param_1;
  *(undefined8 *)(param_3 + 0x198) = uVar1;
  *(undefined4 *)(param_3 + 0x1ac) = param_2;
  return;
}




void FUN_009d7108(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_3 + 0x1b9) = 1;
  uVar1 = *param_4;
  *(undefined4 *)(param_3 + 0x1a0) = param_5;
  *(undefined4 *)(param_3 + 0x1a4) = param_6;
  *(undefined4 *)(param_3 + 0x1a8) = param_1;
  *(undefined8 *)(param_3 + 0x198) = uVar1;
  *(undefined4 *)(param_3 + 0x1ac) = param_2;
  return;
}




void FUN_009d712c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1b0) = param_2 & 1;
  return;
}




void FUN_009d7138(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1b1) = param_2 & 1;
  return;
}




void FUN_009d7144(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1b2) = param_2 & 1;
  return;
}




void FUN_009d7150(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1b3) = param_2 & 1;
  return;
}




void FUN_009d715c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1b4) = param_1;
  return;
}




void FUN_009d7164(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1b8) = param_2 & 1;
  return;
}




void FUN_009d7170(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1d0) = param_2;
  return;
}




void FUN_009d7178(long param_1)

{
  *(undefined1 *)(param_1 + 0x1ba) = 1;
  return;
}




void FUN_009d7184(long param_1,byte param_2,byte param_3)

{
  *(byte *)(param_1 + 0x1bb) = param_2 & 1;
  *(byte *)(param_1 + 0x1bc) = param_3 & 1;
  return;
}




void FUN_009d7198(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1c0) = param_2;
  return;
}




undefined8 FUN_009d71a0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 0x108);
  if (iVar2 < 1) {
    return 0;
  }
  lVar3 = 0;
  do {
    if (*(char *)(param_1 + lVar3 + 0x40) == '\0') {
      uVar1 = (**(code **)(param_1 + lVar3 * 8))(param_1,param_2);
      if ((uVar1 & 1) != 0) {
        *(undefined1 *)(param_1 + lVar3 + 0x40) = 1;
        *param_3 = (int)lVar3;
        if (*(char *)(param_1 + 0x1ba) == '\0') {
          return 1;
        }
        if (0 < *(int *)(param_1 + 0x108)) {
          lVar3 = 0;
          do {
            if (*(char *)(param_1 + 0x40 + lVar3) == '\0') {
              return 0;
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < *(int *)(param_1 + 0x108));
          return 1;
        }
        return 1;
      }
      iVar2 = *(int *)(param_1 + 0x108);
    }
    lVar3 = lVar3 + 1;
    if (iVar2 <= lVar3) {
      return 0;
    }
  } while( true );
}




void FUN_009d7258(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined * FUN_009d7260(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0312f970;
  if (*param_1 != 0) {
    puVar1 = (undefined *)(*param_1 + 0x110);
  }
  return puVar1;
}




undefined * FUN_009d727c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0312f970;
  if (*param_1 != 0) {
    puVar1 = (undefined *)(*param_1 + 0x120);
  }
  return puVar1;
}




undefined * FUN_009d7298(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_0312f970;
  if (*param_1 != 0) {
    puVar1 = (undefined *)(*param_1 + 0x130);
  }
  return puVar1;
}




undefined8 FUN_009d72b4(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x161) != '\0')) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x158);
    *param_2 = *(undefined8 *)(lVar1 + 0x150);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(*param_1 + 0x15c);
    }
    return 1;
  }
  return 0;
}




bool FUN_009d72f4(long *param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x108);
  if (iVar2 < 1) {
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar3 + 0x40 + lVar5);
      lVar5 = lVar5 + 1;
      iVar4 = iVar4 + (*pbVar1 ^ 1);
    } while (lVar5 < iVar2);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *(int *)(lVar3 + 0x108) - iVar4;
  }
  return iVar4 == 0;
}




void FUN_009d735c(long *param_1,byte param_2)

{
  if (*param_1 != 0) {
    *(byte *)(*param_1 + 0x1b8) = param_2 & 1;
  }
  return;
}




undefined8 FUN_009d7370(long *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && ((*(float *)(lVar2 + 0x164) != -1.0 || (*(float *)(lVar2 + 0x168) != -1.0))))
  {
    puVar1 = (undefined8 *)(lVar2 + 0x174);
    if ((param_3 & 1) == 0) {
      puVar1 = (undefined8 *)(lVar2 + 0x164);
    }
    *param_2 = *puVar1;
    return 1;
  }
  return 0;
}




undefined8 FUN_009d73bc(long *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && ((*(float *)(lVar2 + 0x16c) != -1.0 || (*(float *)(lVar2 + 0x170) != -1.0))))
  {
    puVar1 = (undefined8 *)(lVar2 + 0x17c);
    if ((param_3 & 1) == 0) {
      puVar1 = (undefined8 *)(lVar2 + 0x16c);
    }
    *param_2 = *puVar1;
    return 1;
  }
  return 0;
}




undefined4 FUN_009d7408(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x184);
  }
  return 0;
}




undefined4 FUN_009d7420(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x188);
  }
  return 0xffffffff;
}




undefined4 FUN_009d7438(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x18c);
  }
  return 0xffffffff;
}




undefined4 FUN_009d7450(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 400);
  }
  return 0xffffffff;
}




undefined4 FUN_009d7468(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x194);
  }
  return 0xffffffff;
}




undefined4 FUN_009d7480(long *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_03218ef8;
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)(*param_1 + 0x198);
  }
  return *puVar1;
}




undefined4 FUN_009d74b0(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x1a0);
  }
  return 0;
}




undefined4 FUN_009d74c8(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x1a4);
  }
  return 0;
}




undefined4 FUN_009d74e0(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x1a8);
  }
  return 0;
}




undefined4 FUN_009d74f8(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x1ac);
  }
  return 0;
}




bool FUN_009d7510(long *param_1)

{
  if (*param_1 != 0) {
    return *(char *)(*param_1 + 0x1b9) != '\0';
  }
  return false;
}




bool FUN_009d7530(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  
  if (*param_1 != 0) {
    *param_2 = *(undefined8 *)(*param_1 + 0x1c8);
    lVar1 = *param_1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar1 + 0x15c);
    }
    return *(long *)(lVar1 + 0x1c8) != 0;
  }
  return false;
}




bool FUN_009d7568(long *param_1)

{
  if (*param_1 != 0) {
    return *(char *)(*param_1 + 0x1b2) != '\0';
  }
  return true;
}




bool FUN_009d7588(long *param_1)

{
  if (*param_1 != 0) {
    return *(char *)(*param_1 + 0x1b3) != '\0';
  }
  return true;
}




undefined4 FUN_009d75a8(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined4 *)(*param_1 + 0x1b4);
  }
  return 0;
}




bool FUN_009d75c0(long *param_1)

{
  if (*param_1 != 0) {
    return *(char *)(*param_1 + 0x1bb) != '\0';
  }
  return false;
}




bool FUN_009d75e0(long *param_1)

{
  if (*param_1 != 0) {
    return *(char *)(*param_1 + 0x1bc) != '\0';
  }
  return false;
}




undefined8 FUN_009d7600(long *param_1)

{
  if (*param_1 != 0) {
    return *(undefined8 *)(*param_1 + 0x1c0);
  }
  return 0;
}




bool FUN_009d7618(long *param_1)

{
  if (*param_1 != 0) {
    return *(char *)(*param_1 + 0x1b0) != '\0';
  }
  return true;
}




void FUN_009d7638(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((long)puVar1 + 0x14) = DAT_03218f38;
    *(undefined8 *)((long)puVar1 + 0xc) = DAT_03218f30;
    puVar1 = puVar1 + 3;
  } while (puVar1 != param_1 + 0xc0);
  param_1[0xc0] = 0;
  return;
}




void FUN_009d7678(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x600) * 0x18);
  *puVar1 = *param_2;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)puVar1 + 0xc) = *(undefined8 *)((long)param_2 + 0xc);
  *(int *)(param_1 + 0x600) = *(int *)(param_1 + 0x600) + 1;
  return;
}




bool FUN_009d76b4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar2 = *(uint *)(param_1 + 0x604);
  uVar5 = (ulong)uVar2;
  iVar3 = *(int *)(param_1 + 0x600);
  if ((int)uVar2 < iVar3) {
    piVar6 = (int *)(param_1 + (long)(int)uVar2 * 0x18 + 8);
    uVar5 = (long)(int)uVar2;
    do {
      if (*(char *)(*(long *)(piVar6 + -2) + (long)*piVar6 + 0x40) == '\0') goto LAB_009d7708;
      uVar1 = uVar5 + 1;
      *(int *)(param_1 + 0x604) = (int)uVar5 + 1;
      piVar6 = piVar6 + 6;
      uVar5 = uVar1;
    } while ((long)uVar1 < (long)iVar3);
    uVar5 = uVar1 & 0xffffffff;
  }
LAB_009d7708:
  iVar4 = (int)uVar5;
  if (iVar4 < iVar3) {
    param_1 = param_1 + (long)iVar4 * 0x18;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x14);
    *param_2 = *(undefined8 *)(param_1 + 0xc);
  }
  return iVar4 < iVar3;
}




void FUN_009d7738(long param_1)

{
  *(undefined8 *)(param_1 + 0x600) = 0;
  return;
}




void FUN_009d7744(long param_1)

{
  long lVar1;
  
  DAT_0312eb10 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb10 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb10 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d7874;
  *(code **)(lVar1 + 0xb8) = FUN_009d7888;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb10;
  *(undefined4 *)(lVar1 + 0xa8) = 0x28;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0xdc302c4,FUN_009d77ec,0);
  FUN_019867cc(param_1,0x163803be,FUN_009d7824,0);
  return;
}




void FUN_009d77ec(void)

{
  FUN_0092dacc(0x3ecccccd,0x40000000);
  return;
}




void FUN_009d7824(void)

{
  FUN_0092dacc(0x3f800000,0x3f800000);
  return;
}




void FUN_009d7858(void)

{
  FUN_0092dacc(0x3ecccccd,0x40000000);
  return;
}




void FUN_009d7868(void)

{
  FUN_0092dacc(0x3f800000,0x3f800000);
  return;
}




void FUN_009d7874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c34a8;
  return;
}




void FUN_009d7888(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d7890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d7894(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009d78b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar1,param_1,0xb3cf6e0d,FUN_009d7910,0);
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar1,param_1,0xd1bb1e68,FUN_009d79cc,0);
  return;
}




void FUN_009d7af8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a1ffc0();
  FUN_00e6ec98(uVar1,param_1);
  return;
}




void FUN_009d7b1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00bdd420(param_2);
  uVar3 = FUN_009d7c1c();
  if ((uVar3 & 1) != 0) {
    iVar2 = FUN_0092f28c();
    if (iVar2 == 0) {
      local_2c = 3;
      FUN_00bdde34(param_2,&local_2c);
    }
    else {
      local_2c = 0;
      FUN_00bdde34(param_2,&local_2c);
      local_2c = 0;
      FUN_00bddec8(param_2,&local_2c);
    }
  }
  uVar3 = FUN_00969254();
  if (((uVar3 & 1) != 0) && (lVar4 = FUN_00969248(), 0 < *(int *)(lVar4 + 0x38))) {
    lVar4 = FUN_00969248();
    switch(*(undefined4 *)(lVar4 + 0x38)) {
    case 1:
      local_2c = 0xb;
      break;
    case 2:
    case 3:
      local_2c = 0xc;
      break;
    case 4:
    case 5:
      local_2c = 0xd;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      local_2c = 0xe;
      break;
    default:
      goto switchD_009d7bc8_default;
    }
    FUN_00bdde34(param_2,&local_2c);
  }
switchD_009d7bc8_default:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_009d7c1c(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = FUN_00e80f58();
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00e80f6c(0);
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_009e5a3c(0);
      if ((uVar2 & 1) != 0) {
        FUN_009e5a50();
        uVar3 = FUN_009e63c0();
        uVar2 = 0;
        if ((uVar3 & 1) != 0) {
          return false;
        }
      }
      uVar2 = FUN_0093dbe8(uVar2);
      bVar1 = false;
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_00e82a04(0);
        bVar1 = false;
        if ((uVar2 & 1) == 0) {
          lVar4 = FUN_009580b8(0);
          bVar1 = *(int *)(lVar4 + 22000) == 0;
        }
      }
    }
  }
  return bVar1;
}




void FUN_009d7c9c(undefined8 param_1,long param_2,ulong param_3,byte param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  if ((param_3 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x31) = 0;
    FUN_00bd21a8(param_2,0,0);
    bVar4 = 0;
  }
  else {
    uVar7 = FUN_009e5a3c();
    if ((uVar7 & 1) == 0) {
      bVar4 = 1;
    }
    else {
      FUN_009e5a50();
      bVar4 = FUN_009e63c0();
      bVar4 = bVar4 ^ 1;
    }
    uVar7 = FUN_009d7db0();
    if ((uVar7 & 1) == 0) {
      FUN_00bd21d8(param_2,0);
      lVar8 = FUN_009580b8();
      uVar1 = *(uint *)(lVar8 + 0x55e0);
      FUN_00a06b24();
      iVar6 = FUN_00a06c4c();
      if (iVar6 == 1) {
        bVar3 = true;
      }
      else {
        FUN_00a06b24();
        iVar6 = FUN_00a06c4c();
        bVar3 = iVar6 == 2;
      }
      lVar8 = FUN_009fece0();
      cVar2 = *(char *)(lVar8 + 0x70);
      bVar5 = FUN_0093dbe8();
      bVar4 = bVar4 & cVar2 == '\0' & (uVar1 < 4 | param_4) & ((bVar3 | bVar5) ^ 1);
      *(byte *)(param_2 + 0x31) = bVar4;
      FUN_00bd21a8(param_2,bVar4,0);
      return;
    }
    bVar4 = bVar4 & 1;
  }
  FUN_00bd21d8(param_2,bVar4);
  return;
}




bool FUN_009d7db0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = FUN_009d7c1c();
  bVar1 = false;
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00e80f58(0);
    bVar1 = false;
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_00e80f6c(0);
      bVar1 = false;
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_00e82a04(0);
        bVar1 = false;
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_00969254(0);
          if ((uVar3 & 1) != 0) {
            lVar4 = FUN_00969248();
            uVar3 = 0;
            if (0 < *(int *)(lVar4 + 0x38)) {
              return false;
            }
          }
          uVar5 = FUN_00a022d4(uVar3);
          uVar3 = FUN_009e3630();
          bVar1 = false;
          if ((uVar3 & 1) != 0) {
            uVar3 = FUN_009e36ac(uVar5);
            bVar1 = false;
            if ((uVar3 & 1) != 0) {
              iVar2 = FUN_009e3638(uVar5);
              bVar1 = iVar2 == 0;
            }
          }
        }
      }
    }
  }
  return bVar1;
}




void FUN_009d7e60(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(1);
  FUN_009d78b8();
  DAT_0312f980 = pvVar1;
  return;
}




void FUN_009d7e90(void)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = DAT_0312f980;
  if (DAT_0312f980 != (void *)0x0) {
    uVar2 = FUN_00a1ffc0();
    FUN_00e6ec98(uVar2,pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}




void FUN_009d7ed0(undefined8 *param_1)

{
  FUN_009df040();
  *param_1 = &PTR_thunk_FUN_009df4b8_027c34d8;
  FUN_009df57c(param_1,"Horns_bnd");
  return;
}




void FUN_009d7f10(void *param_1)

{
  FUN_009df4b8();
  operator_delete(param_1);
  return;
}




void FUN_009d7f34(long param_1)

{
  long lVar1;
  
  DAT_0312eb60 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb60 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb60 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d803c;
  *(code **)(lVar1 + 0xb8) = FUN_009d8080;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb60;
  *(undefined4 *)(lVar1 + 0xa8) = 0xe8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009df500,0);
  return;
}




uint FUN_009d7fa4(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_009df550();
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  thunk_FUN_00d9ff34(local_30,PTR_s_Buff_Reza_C_Netherform_02beb5f8);
  uVar2 = FUN_00d6bbac(lVar3,local_30[0],0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (uVar2 ^ 1) & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

