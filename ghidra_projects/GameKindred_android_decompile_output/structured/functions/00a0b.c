// functions/00a0b — 23 functions
#include "libGameKindred.h"




void thunk_FUN_00a0b1ec(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x40);
  fVar1 = (float)FUN_01988c78();
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  if ((((fVar2 <= 0.0) && (*(int *)(param_1 + 0x48) == 1)) && (*(long *)(param_1 + 0x30) != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0)) {
    FUN_00a0b284(param_1);
    return;
  }
  return;
}




void FUN_00a0b1a0(long param_1)

{
  if (*(int *)(param_1 + 0x48) == 2) {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    if (*(long *)(param_1 + 0x50) == 0) {
      FUN_00a0b740();
      return;
    }
  }
  return;
}




void FUN_00a0b1ec(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x40);
  fVar1 = (float)FUN_01988c78();
  fVar2 = fVar2 - fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x40) = fVar2;
  if ((((fVar2 <= 0.0) && (*(int *)(param_1 + 0x48) == 1)) && (*(long *)(param_1 + 0x30) != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0)) {
    FUN_00a0b284(param_1);
    return;
  }
  return;
}




bool FUN_00a0b260(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x50) != param_2) {
    return *(long *)(param_1 + 0x78) == param_2;
  }
  return true;
}




void FUN_00a0b284(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 0x60);
  local_60 = *(undefined4 *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x28);
  FUN_00a19bec(0x3f800000,auStack_58,&local_68,0);
  FUN_00a1a334(lVar2 + 0x260,auStack_58);
  *(undefined4 *)(param_1 + 0x40) = 0x3e4ccccd;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0b314(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_009f1f94(3);
  iVar5 = 1;
  if (iVar2 != 0) {
    iVar5 = 2;
  }
  if ((param_4 != 0) && (iVar5 != param_4)) goto LAB_00a0b4cc;
  for (lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x18); lVar6 != 0;
      lVar6 = *(long *)(lVar6 + 0x20)) {
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02e8b430) goto LAB_00a0b438;
  }
  if (((*(ushort *)(*(long *)(param_1 + 0x30) + 0x2f8) & 0x2004) == 0) &&
     (lVar6 = FUN_00cac6e4(param_2), lVar6 != 0)) {
    if ((*(byte *)(lVar6 + 0x2f7) >> 3 & 1) == 0) {
      if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x50) != param_3)) {
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x50) = param_3;
      *(undefined4 *)(param_1 + 0x58) = 5;
      *(undefined4 *)(param_1 + 0x48) = 2;
      *(undefined1 *)(param_1 + 0x5c) = 1;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar6 + 0x260);
      FUN_00a153f0(*(undefined8 *)(param_1 + 0x28),lVar6,1,0);
      FUN_009c8b30(*(undefined8 *)(param_1 + 0x38));
      goto LAB_00a0b4cc;
    }
    uVar4 = FUN_0092e6f4();
    if ((uVar4 & 1) == 0) {
      FUN_00a15150(*(undefined8 *)(param_1 + 0x28),lVar6);
      *(undefined4 *)(param_1 + 0x40) = 0x3e4ccccd;
      goto LAB_00a0b4cc;
    }
  }
LAB_00a0b438:
  if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0) {
    uVar3 = FUN_00da2eb4();
    uVar4 = FUN_00cac868(param_2,uVar3,&local_58);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x50) != param_3)) {
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x68);
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x48);
      }
      *(undefined1 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x58) = 5;
      *(undefined4 *)(param_1 + 0x48) = 1;
      *(long *)(param_1 + 0x50) = param_3;
      *(undefined8 *)(param_1 + 0x60) = local_58;
      *(undefined4 *)(param_1 + 0x68) = local_50;
      FUN_00a0b284(param_1);
      FUN_009c8a5c(*(undefined8 *)(param_1 + 0x38),&local_58);
      FUN_009c8af0(*(undefined8 *)(param_1 + 0x38));
    }
  }
LAB_00a0b4cc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0b51c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((*(long *)(param_1 + 0x50) == param_3) || (*(long *)(param_1 + 0x78) == param_3)) {
    iVar1 = FUN_009f1f94(3);
    iVar3 = 1;
    if (iVar1 != 0) {
      iVar3 = 2;
    }
    if ((param_4 == 0) || (iVar3 == param_4)) {
      if (*(long *)(param_1 + 0x50) == param_3) {
        lVar2 = param_1 + 0x48;
      }
      else {
        if (*(long *)(param_1 + 0x78) != param_3) {
          return;
        }
        lVar2 = param_1 + 0x70;
      }
      FUN_00a0b5c0(param_1,lVar2,param_2);
      return;
    }
  }
  return;
}




void FUN_00a0b5c0(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_2 == 1) {
    if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2f8) >> 1 & 1) == 0) {
      uVar2 = FUN_00da2eb4();
      uVar3 = FUN_00cac868(param_3,uVar2,&local_48);
      if ((uVar3 & 1) == 0) {
        puVar4 = (undefined8 *)FUN_00da2d50(*(undefined8 *)(param_1 + 0x30));
        local_48 = *puVar4;
        local_40 = *(int *)(puVar4 + 1);
      }
      else {
        *(undefined8 *)(param_2 + 6) = local_48;
        param_2[8] = local_40;
      }
      if ((int *)(param_1 + 0x48) == param_2) {
        FUN_009c8a5c(*(undefined8 *)(param_1 + 0x38),&local_48);
        FUN_009c8af0(*(undefined8 *)(param_1 + 0x38));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0b690(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((*(long *)(param_1 + 0x50) == param_3) || (*(long *)(param_1 + 0x78) == param_3)) {
    iVar1 = FUN_009f1f94(3);
    iVar2 = 1;
    if (iVar1 != 0) {
      iVar2 = 2;
    }
    if ((param_4 == 0) || (iVar2 == param_4)) {
      if (*(long *)(param_1 + 0x50) == param_3) {
        if ((*(char *)(param_1 + 0x5c) == '\0') || (*(long *)(param_1 + 0x78) == 0)) {
          FUN_00a0b740(param_1);
        }
        else {
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
      }
      if (*(long *)(param_1 + 0x78) == param_3) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x80) = 5;
        *(undefined1 *)(param_1 + 0x84) = 0;
      }
    }
  }
  return;
}




void FUN_00a0b740(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 5;
  *(undefined1 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0x48) == 2) {
    lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x60));
    if (lVar1 != 0) {
      FUN_00a153f0(*(undefined8 *)(param_1 + 0x28),lVar1,1,0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    FUN_00a0b284(param_1);
    FUN_009c8af0(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}




void FUN_00a0b7d8(long param_1)

{
  if (*(int *)(param_1 + 0x48) == 2) {
    *(undefined1 *)(param_1 + 0x5c) = 0;
    if (*(long *)(param_1 + 0x50) == 0) {
      FUN_00a0b740();
      return;
    }
  }
  return;
}




void FUN_00a0b7f8(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00a0b81c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 5;
  *(undefined4 *)(param_1 + 0x10) = 5;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_027c8268;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  return;
}




void FUN_00a0b860(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a0b868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a0b86c(undefined8 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float __x;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027c8298;
  uVar1 = DAT_03214ce8;
  uVar3 = NEON_fmov(0x3f800000,4);
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = uVar3;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_008ff080((long)param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x15) = DAT_03218f38;
  param_1[0x14] = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0xb4) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0xac) = DAT_03218f30;
  param_1[0x17] = _DAT_03218f88;
  *(undefined4 *)(param_1 + 0x18) = DAT_03218f90;
  __x = *(float *)(param_1 + 0x17) * *(float *)(param_1 + 0x17) +
        *(float *)((long)param_1 + 0xbc) * *(float *)((long)param_1 + 0xbc) +
        *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  param_1[0x17] =
       CONCAT44((float)((ulong)param_1[0x17] >> 0x20) / fVar2,(float)param_1[0x17] / fVar2);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) / fVar2;
  *(undefined4 *)((long)param_1 + 0xcc) = DAT_03218f38;
  *(undefined8 *)((long)param_1 + 0xc4) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x1b) = DAT_03218f38;
  param_1[0x1a] = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0xe4) = DAT_03218f38;
  uVar3 = DAT_03218f30;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = uVar3;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((long)param_1 + 0x11c) = 1;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x22) = uVar1;
  return;
}




void FUN_00a0b9c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c8298;
  FUN_00a0ba38();
  if (param_1[0xd] != 0) {
    FUN_019888f4();
  }
  if (param_1[0x1e] != 0) {
    FUN_019888f4();
  }
  if (param_1[0x1f] != 0) {
    FUN_019888f4();
  }
  if (param_1[0x20] != 0) {
    FUN_019888f4();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_00a0ba38(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0xe4) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0xdc) = DAT_03218f30;
  uVar1 = FUN_00a114e8();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00a1f2bc();
    FUN_00a1ab9c(uVar2,0);
    FUN_00a1f2bc();
    FUN_00a1ad10();
  }
  FUN_00a0eb9c(param_1);
  return;
}




void FUN_00a0ba90(void *param_1)

{
  FUN_00a0b9c0();
  operator_delete(param_1);
  return;
}




void FUN_00a0bab4(long param_1)

{
  long lVar1;
  
  DAT_02e8b430 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02e8b430 + 1;
  lVar1 = param_1 + (ulong)DAT_02e8b430 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a10728;
  *(code **)(lVar1 + 0xb8) = FUN_00a1074c;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 5;
  *(uint *)(lVar1 + 0xa4) = DAT_02e8b430;
  *(undefined4 *)(lVar1 + 0xa8) = 0x128;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00a0bb90,0);
  FUN_019867cc(param_1,0x4ad10727,FUN_00a0bc28,0);
  FUN_019867cc(param_1,0x647c0866,FUN_00a0bc54,0);
  FUN_019867cc(param_1,0x9fa20a9e,FUN_00a0bd3c,0);
  return;
}




void FUN_00a0bb90(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00a0c1ac();
  if ((uVar1 & 1) == 0) {
    FUN_00a0c410(param_1);
  }
  plVar2 = *(long **)(param_1 + 0x108);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x110) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = (**(code **)(**(long **)(param_1 + 0x108) + 0x10))();
      uVar4 = DAT_03214ce8;
      if ((*(byte *)(lVar3 + 0x2fc) & 0x1f) != 0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x108) = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x110) = uVar4;
  }
  return;
}




void FUN_00a0bc28(void)

{
  FUN_00a0c778();
  return;
}




void FUN_00a0bdf8(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5
                 ,undefined8 param_6,long param_7,long param_8,undefined8 *param_9,
                 undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *__s1;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_4 + 0x70) = param_6;
  *(long *)(param_4 + 0x28) = param_5;
  uVar7 = param_2;
  uVar3 = FUN_00a1fcec(param_6);
  *(undefined8 *)(param_4 + 0x30) = uVar3;
  uVar6 = *(undefined4 *)(param_7 + 0x30);
  *(long *)(param_4 + 0x48) = param_7 + 0x28;
  *(undefined4 *)(param_4 + 0x50) = uVar6;
  uVar6 = *(undefined4 *)(param_8 + 0x30);
  *(long *)(param_4 + 0x58) = param_8 + 0x28;
  *(undefined4 *)(param_4 + 0x60) = uVar6;
  uVar3 = FUN_01985d44(param_4,DAT_0312eaf0);
  *(undefined8 *)(param_4 + 0x68) = uVar3;
  *(undefined4 *)(param_4 + 0x88) = param_1;
  *(undefined4 *)(param_4 + 0x8c) = param_2;
  *(undefined4 *)(param_4 + 0x90) = param_10;
  uVar6 = FUN_00a0bf68(param_4);
  *(undefined4 *)(param_4 + 0xd0) = uVar6;
  *(undefined4 *)(param_4 + 0xd4) = uVar7;
  *(undefined4 *)(param_4 + 0xd8) = param_3;
  __s1 = *(char **)(param_5 + 0x38);
  uVar4 = FUN_00a1bcec();
  pcVar5 = __s1;
  if ((uVar4 & 1) != 0) {
    iVar2 = strcmp(__s1,"build://UI/Ring/Ring.mesh");
    pcVar5 = "build://UI/Ring_FallOff/Ring_FallOff.mesh";
    if (iVar2 != 0) {
      pcVar5 = __s1;
    }
  }
  local_80 = *(undefined4 *)(param_8 + 0x30);
  local_88 = param_8 + 0x28;
  FUN_009d8b0c(*(undefined4 *)(param_4 + 0x88),*(undefined8 *)(param_4 + 0x68),&local_88,pcVar5,
               param_5 + 0x30);
  FUN_009d8bc4(*(undefined8 *)(param_4 + 0x68));
  *(undefined8 *)(param_4 + 0x38) = param_11;
  *(undefined4 *)(param_4 + 0x9c) = *(undefined4 *)(param_9 + 1);
  *(undefined8 *)(param_4 + 0x94) = *param_9;
  if (*(long *)(param_4 + 0x40) == 0) {
    uVar3 = FUN_00a0c000(param_4);
    *(undefined8 *)(param_4 + 0x40) = uVar3;
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a0bf68(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x58);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
    }
  }
  FUN_00d55794(uVar3,&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}

