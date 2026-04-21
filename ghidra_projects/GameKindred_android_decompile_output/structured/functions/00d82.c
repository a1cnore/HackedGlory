// functions/00d82 — 61 functions
#include "libGameKindred.h"




long FUN_00d8200c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d82014(long param_1)

{
  return param_1 + -0x28;
}




undefined8 FUN_00d8201c(undefined8 param_1)

{
  FUN_00d803a8();
  return param_1;
}




void FUN_00d82040(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d82048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d8204c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_00cd96cc();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    }
  }
  return;
}




void FUN_00d8208c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e9d0;
  param_1[5] = &PTR_FUN_0281ea00;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  return;
}




void FUN_00d820dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e9d0;
  param_1[5] = &PTR_FUN_0281ea00;
  FUN_00dab3c0(DAT_031aa258,(long)param_1 + 0x34);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d82130(long param_1)

{
  FUN_00d820dc(param_1 + -0x28);
  return;
}




void FUN_00d82138(void *param_1)

{
  FUN_00d820dc();
  operator_delete(param_1);
  return;
}




void FUN_00d8215c(long param_1)

{
  FUN_00d820dc((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d82184(long param_1)

{
  long lVar1;
  
  DAT_031aa258 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031aa258 + 1;
  lVar1 = param_1 + (ulong)DAT_031aa258 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d82520;
  *(code **)(lVar1 + 0xb8) = FUN_00d82574;
  *(uint *)(lVar1 + 0xa4) = DAT_031aa258;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_00d82228,0);
  FUN_019867cc(param_1,0x1ef90473,FUN_00d822c4,0);
  return;
}




void FUN_00d82228(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0312f140) {
    lVar2 = 0;
  }
  FUN_00d80bb8(lVar2,auStack_48);
  FUN_00d80ebc(lVar2);
  FUN_00dab3d8(param_1 + 0x34,auStack_48,0);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00d823ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312f140) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




void FUN_00d823d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_1 + 0x28;
  local_30 = *(undefined4 *)(param_1 + 0x30);
  FUN_00dab3a0(DAT_031aa258,param_1 + 0x34,&local_38,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d82444(long param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0312f140) {
      lVar2 = 0;
    }
    if (param_3 != 0) {
      uVar1 = (ulong)param_3;
      do {
        lVar3 = *param_2;
        if ((lVar3 != 0) && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_031a96c0)) {
          lVar3 = *(long *)(lVar3 + 0x10);
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
            lVar3 = 0;
          }
          FUN_00d814c4(lVar2,lVar3);
        }
        uVar1 = uVar1 - 1;
        param_2 = param_2 + 1;
      } while (uVar1 != 0);
    }
  }
  return;
}




long FUN_00d82510(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d82518(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d82520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_0281e9d0;
  param_1[5] = &PTR_FUN_0281ea00;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  return param_1;
}




void FUN_00d82574(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d8257c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d82580(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281ea30;
  return;
}




void FUN_00d82598(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d825a0(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d825ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(param_2);
    return;
  }
  return;
}




void FUN_00d825b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_0281ea70;
  param_1[4] = 0;
  return;
}




void FUN_00d825d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d825e0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00d825ec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d825f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [10];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      lVar3 = param_2[1];
    }
    else {
      lVar3 = FUN_00d80f68(*param_2);
    }
    if ((lVar3 != 0) &&
       ((*(code **)(param_1 + 0x20) == (code *)0x0 ||
        (uVar2 = (**(code **)(param_1 + 0x20))(*param_2,param_2[1]), (uVar2 & 1) != 0)))) {
      lVar4 = *(long *)(lVar3 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      thunk_FUN_00d9ff34(local_60,*(undefined8 *)(param_1 + 0x10));
      FUN_00d9ff84(&local_68,local_60[0]);
      uVar2 = FUN_00d6bbac(lVar4,local_68,&local_64);
      if ((uVar2 & 1) != 0) {
        FUN_00d009d0(local_60,*(undefined4 *)(lVar3 + 0x260),local_64);
        FUN_00ce20fc(local_60);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d826f4(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_0281eab0;
  param_1[1] = 0;
  param_1[2] = 0x3e3270a0000000ee;
  *(undefined4 *)(param_1 + 6) = 0x14;
  return;
}




void FUN_00d82724(void)

{
  return;
}




void FUN_00d8272c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d82734(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}




void FUN_00d82778(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d82780(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d82788(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d82790(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d82798(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1d0 [96];
  undefined1 auStack_170 [96];
  long local_110 [20];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar9 = FUN_00ceab48();
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_00d80f68(*param_2);
        uVar5 = FUN_00d5ba88();
        uVar6 = FUN_00d5ba88(param_2[1]);
        uVar7 = FUN_00d5ba88(*(undefined8 *)(param_1 + 0x28));
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar8 = FUN_00ceb350();
        FUN_00d02a78(0,local_110,uVar5,uVar6,uVar7,uVar2,param_1 + 0x14,uVar8);
        FUN_00ce20fc(local_110);
      }
    }
    else {
      FUN_00d4d9e8(auStack_170);
      (**(code **)(param_1 + 0x18))(param_2,auStack_170);
      if (*(long *)(param_1 + 0x20) == 0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        FUN_00d4eda4(auStack_1d0);
        puVar10 = auStack_1d0;
      }
      iVar4 = FUN_00d9e840(auStack_170,local_110,0x14,puVar10);
      if ((param_2[1] != 0) && (0 < iVar4)) {
        lVar12 = 0;
        do {
          if (*(int *)(param_1 + 0x30) <= lVar12) break;
          lVar11 = local_110[lVar12];
          if ((lVar11 != param_2[1]) &&
             ((uVar1 = *(ushort *)(lVar11 + 0x88) & 0x1f, uVar1 == 0x1f ||
              (1 < *(ushort *)(lVar11 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
            uVar5 = FUN_00d5ba88();
            FUN_00d80f68(*param_2);
            uVar6 = FUN_00d5ba88();
            uVar7 = FUN_00d5ba88(local_110[lVar12]);
            uVar2 = *(undefined4 *)(param_1 + 0x10);
            uVar8 = FUN_00ceb350();
            FUN_00d02a78(0,auStack_1d0,uVar5,uVar6,uVar7,uVar2,param_1 + 0x14,uVar8);
            FUN_00ce20fc(auStack_1d0);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar4);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d829ac(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 2) = 0xbf800000;
  param_1[5] = 0x200000002;
  *param_1 = &PTR_FUN_0281eaf0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




void FUN_00d829d8(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  *(undefined4 *)(param_2 + 0x28) = param_3;
  *(undefined4 *)(param_2 + 0x2c) = param_4;
  *(undefined4 *)(param_2 + 0x30) = param_5;
  return;
}




void FUN_00d829e8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  return;
}




void FUN_00d829f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d82a00(long param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(code **)(param_1 + 0x18) = FUN_00d82a18;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d82a18(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  if (lVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x40);
    fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
            (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0)
            );
    if (DAT_031aa340 <= fVar2) {
      fVar2 = DAT_031aa340;
    }
    fVar3 = DAT_031aa280;
    if (DAT_031aa280 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  *param_3 = fVar3;
  return;
}




void FUN_00d82a9c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((((uVar2 & 1) != 0) && (lVar3 = FUN_00d80f68(*param_2), lVar3 != 0)) && (param_2[1] != 0)) {
    FUN_00d80c14(*param_2,auStack_40);
    FUN_00d82b24(param_1,*param_2,param_2[1],auStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d82b24(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  char local_c0 [4];
  undefined4 local_bc;
  undefined1 auStack_b8 [112];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d80ee4(param_2);
  if (lVar3 != 0) {
    local_bc = *(undefined4 *)(param_1 + 0x10);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,param_3,&local_bc);
    }
    local_c0[0] = '\0';
    if (*(int *)(param_1 + 0x30) == 0) {
      bVar2 = false;
    }
    else {
      FUN_00cfb800(lVar3,&local_bc,local_c0,*(int *)(param_1 + 0x30) == 2);
      bVar2 = local_c0[0] != '\0';
    }
    FUN_00daa148(local_bc,auStack_b8,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(param_3 + 0x260)
                 ,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_4,0,bVar2,1)
    ;
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_2,auStack_b8);
    }
    FUN_00910c08(auStack_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d82c30(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d813c0();
  *param_3 = uVar1;
  return;
}




void FUN_00d82c54(undefined8 param_1,long param_2)

{
  float fVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = DAT_031aa340;
  fVar4 = DAT_031aa280;
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  *(undefined2 *)(param_2 + 0xc) = 5;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)(param_2 + 0x30) = fVar4;
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_00cfb800(*(long *)(param_2 + 0x28),param_2 + 0x30,param_2 + 0xe,0);
  return;
}




void FUN_00d82cd4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281eb30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00d82cf0(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00d82cfc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d82d04(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(code **)(param_1 + 0x10) == (code *)0x0) ||
     (uVar3 = (**(code **)(param_1 + 0x10))(*param_2,param_2[1]), (uVar3 & 1) != 0)) {
    lVar5 = *param_2;
    FUN_00d80bb8(lVar5,auStack_48);
    if (*(char *)(param_1 + 0x18) == '\0') {
      bVar2 = param_2[1] != 0;
    }
    else {
      bVar2 = true;
    }
    uVar3 = FUN_00ceab48();
    if ((uVar3 & 1) != 0) {
      for (lVar4 = *(long *)(*param_2 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_031aa258) {
          if (param_2[1] != 0) goto LAB_00d82db8;
          break;
        }
      }
      uVar3 = FUN_00d81780(lVar5);
      if ((uVar3 & 1) != 0) {
LAB_00d82db8:
        FUN_00931a8c(lVar5,bVar2);
        goto LAB_00d82dd4;
      }
    }
    FUN_00d8168c(lVar5,bVar2);
  }
LAB_00d82dd4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d82e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281eb70;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_0281ebb8;
  param_1[3] = 0;
  FUN_00d83b14(param_1 + 4);
  return;
}




void FUN_00d82e24(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




long FUN_00d82e2c(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  FUN_00d83b2c(param_1,param_2,0xbf800000,param_3 + 0x20);
  return param_3;
}




void FUN_00d82e58(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    if (param_2[1] == 0) {
      uVar2 = 0;
    }
    else {
      FUN_00d82eb8(param_1,*param_2);
      uVar2 = param_2[1];
    }
    FUN_00d83da4(param_1 + 0x20,param_1 + 0x10,param_2,uVar2);
    return;
  }
  return;
}




void FUN_00d82eb8(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 auStack_a0 [68];
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_5c = 0;
  (**(code **)(param_1 + 0x18))(param_2,&local_5c);
  lVar6 = FUN_00d80ee4(param_2);
  puVar7 = &DAT_01bc8f90;
  if (lVar6 != 0) {
    lVar6 = FUN_00d80ee4(param_2);
    puVar7 = (undefined4 *)(lVar6 + 0x260);
  }
  uVar4 = local_5c;
  uVar1 = *puVar7;
  uVar2 = *(undefined4 *)(param_3 + 0x260);
  uVar5 = FUN_00d80bb0(param_2);
  FUN_00daa4a4(uVar4,auStack_a0,uVar1,uVar2,0xffffffff,0xffffffff,uVar5,0xffffffff);
  FUN_00910c0c(auStack_a0);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d82fa4(undefined8 param_1,undefined8 *param_2)

{
  FUN_00d82eb8(param_1,*param_2);
  return;
}




void FUN_00d82fac(long param_1,undefined8 *param_2)

{
  FUN_00d82eb8(param_1 + -0x10,*param_2);
  return;
}




void FUN_00d82fbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281ebd0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}




void FUN_00d82fe4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d82fec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d82ff4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = FUN_00ceab48();
  if ((((uVar3 & 1) != 0) && (lVar4 = FUN_00d80f68(*param_2), lVar4 != 0)) &&
     ((*(code **)(param_1 + 0x18) == (code *)0x0 ||
      (uVar3 = (**(code **)(param_1 + 0x18))(param_2), (uVar3 & 1) != 0)))) {
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    uVar2 = FUN_00d53ba4(lVar5,*(undefined4 *)(param_1 + 0x10));
    if (uVar2 < 3) {
      if (param_2[1] != 0) {
        FUN_008ff6ec(lVar4,*(undefined4 *)(param_1 + 0x10));
        return;
      }
    }
    else {
      if (uVar2 == 3) {
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar6 = FUN_00d81388(*param_2);
        FUN_008ff6f4(lVar4,uVar1,uVar6);
        return;
      }
      if (uVar2 == 4) {
        FUN_008ff6e4(lVar4,*(undefined4 *)(param_1 + 0x10));
        return;
      }
    }
  }
  return;
}

