// functions/019a2 — 26 functions
#include "libGameKindred.h"




void FUN_019a2344(void *param_1)

{
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0x1f0);
    return;
  }
  return;
}




void FUN_019a2358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_019a2370(0,param_1,param_2,param_3,param_5,param_4);
  return;
}




void FUN_019a2370(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined4 *local_2d0;
  undefined1 auStack_2c8 [488];
  undefined4 local_e0 [3];
  undefined4 local_d4;
  long local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    FUN_019a1cdc(local_e0,0x203);
    memset(auStack_2c8,0,0x1e8);
    local_d4 = 1;
    local_2d0 = local_e0;
    local_e0[0] = param_1;
    local_d0 = param_4;
    local_c8 = param_5;
    local_c0 = param_6;
    iVar2 = FUN_019a25cc(param_2,param_3,&local_2d0);
    if (iVar2 != 0) {
      param_4 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_4);
  }
  return;
}




void FUN_019a244c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_019a2370(1,param_1,param_2,param_3,param_5,param_4);
  return;
}




void FUN_019a2468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_019a2370(4,param_1,param_2,param_3,param_5,param_4);
  return;
}




void FUN_019a2484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_019a2370(2,param_1,param_2,param_3,param_5,param_4);
  return;
}




void FUN_019a24a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_019a2370(3,param_1,param_2,param_3,param_5,param_4);
  return;
}




void FUN_019a24bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  long lVar1;
  int iVar2;
  undefined4 *local_2d8;
  undefined1 auStack_2d0 [488];
  undefined4 local_e8 [3];
  undefined4 local_dc;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    FUN_019a1cdc(local_e8,0x203);
    memset(auStack_2d0,0,0x1e8);
    local_2d8 = local_e8;
    local_e8[0] = 0xb;
    local_b0 = param_11;
    local_c8 = param_9;
    local_98 = param_10;
    local_dc = 1;
    local_d8 = param_3;
    uStack_d0 = param_6;
    local_b8 = param_5;
    uStack_b4 = param_8;
    local_a8 = param_4;
    uStack_a0 = param_7;
    iVar2 = FUN_019a25cc(param_1,param_2,&local_2d8);
    if (iVar2 != 0) {
      param_3 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}




int FUN_019a25cc(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long local_130;
  long lStack_128;
  undefined4 local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  int local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  long local_88;
  long lStack_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_120 = 1;
  local_130 = param_1;
  lStack_128 = param_2;
  iVar2 = FUN_019a1ddc(&local_130);
  if (iVar2 != 0) goto LAB_019a2610;
  FUN_019a5684(&local_e8,0x203);
  lStack_80 = local_130 + local_118;
  local_88 = lStack_128 - local_118;
  FUN_019a428c(param_3,&local_e8);
  if (local_f0 == 0) {
    piVar4 = (int *)FUN_019a56c4();
    if (piVar4 == (int *)0x0) goto LAB_019a2750;
    *(undefined8 *)(piVar4 + 0x24c) = uStack_108;
    *(undefined8 *)(piVar4 + 0x24a) = local_110;
    iVar2 = FUN_019a5908(piVar4,&local_e8);
    if (iVar2 == 0) {
LAB_019a2734:
      iVar2 = *piVar4;
    }
    else {
      iVar2 = FUN_019a1948(local_e8,uStack_e4,param_3[5],*param_3);
      if (iVar2 == 0) {
        iVar3 = FUN_019a3e94(param_3[5],&local_130,local_e8,uStack_e4);
        piVar4[0x30] = iVar3;
        FUN_019a2d88(param_3[5],piVar4);
        iVar3 = FUN_019a636c(piVar4,&local_e8);
        if (iVar3 == 0) goto LAB_019a2734;
      }
    }
    FUN_019a575c(piVar4);
  }
  else {
    piVar4 = (int *)FUN_019a7224();
    if (piVar4 == (int *)0x0) {
LAB_019a2750:
      iVar2 = 1;
      goto LAB_019a2610;
    }
    iVar2 = FUN_019a8c2c(piVar4,&local_e8);
    if ((iVar2 == 0) ||
       ((iVar2 = FUN_019a1948(local_e8,uStack_e4,param_3[5],*param_3), iVar2 == 0 &&
        (iVar3 = FUN_019a8d08(piVar4), iVar3 == 0)))) {
      iVar2 = *piVar4;
    }
    FUN_019a7334(piVar4);
  }
  if (iVar2 != 0) {
    FUN_019a1d14(*param_3);
  }
LAB_019a2610:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019a275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_019a2778(0,param_1,param_2,param_3,param_4,0);
  return;
}




void FUN_019a2778(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5,long param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *local_2d0;
  undefined1 auStack_2c8 [488];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_019a1cdc(&local_e0,0x203);
  memset(auStack_2c8,0,0x1e8);
  local_2d0 = &local_e0;
  local_e0 = param_1;
  iVar2 = FUN_019a29a4(param_2,param_3,(ulong)&local_e0 | 4,local_d8);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_dc;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = local_d8[0];
    }
    iVar2 = FUN_019a25cc(param_2,param_3,&local_2d0);
    uVar3 = 0;
    if ((iVar2 == 0) && (uVar3 = local_d0, param_6 != 0)) {
      FUN_019a1d48(&local_e0,param_6);
      uVar3 = local_d0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




void FUN_019a2884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_019a2778(1,param_1,param_2,param_3,param_4,0);
  return;
}




void FUN_019a28a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_019a2778(4,param_1,param_2,param_3,param_4,0);
  return;
}




void FUN_019a28c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_019a2778(2,param_1,param_2,param_3,param_4,0);
  return;
}




void FUN_019a28e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_019a2778(3,param_1,param_2,param_3,param_4,0);
  return;
}




void FUN_019a2904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_019a2778(0xb,param_1,param_2,param_3,param_4,auStack_c0);
  if (lVar2 != 0) {
    *param_5 = local_a8;
    *param_6 = local_a0;
    *param_7 = local_90;
    *param_8 = local_8c;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019a29a4(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (param_1 != 0) {
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    iVar2 = FUN_019a1e5c(param_1,param_2,&local_60,(ulong)&local_60 | 4,&uStack_58,
                         (long)&uStack_58 + 4,&uStack_50,0);
    uVar3 = 0;
    if (iVar2 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = (undefined4)local_60;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_60._4_4_;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




undefined4 FUN_019a2a4c(void *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (void *)0x0) && ((param_2 & 0xffffff00) == 0x200)) {
    memset(param_1,0,0xe8);
    FUN_019a1cdc((long)param_1 + 0x28,0x203);
    uVar1 = 1;
  }
  return uVar1;
}




undefined8 FUN_019a2a9c(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (param_3 != (undefined8 *)0x0)) && ((param_4 & 0xffffff00) == 0x200)) {
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    uVar1 = FUN_019a1e5c();
    return uVar1;
  }
  return 2;
}




void FUN_019a2ae0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_238;
  undefined1 auStack_230 [32];
  undefined8 *local_210;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_3 == (undefined8 *)0x0) || (param_1 == 0)) {
    uVar2 = 2;
  }
  else {
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    uVar2 = FUN_019a1e5c(param_1,param_2,param_3,(long)param_3 + 4,param_3 + 1,(long)param_3 + 0xc,
                         param_3 + 2,0);
    if ((int)uVar2 == 0) {
      memset(auStack_230,0,0x1e8);
      local_238 = param_3 + 5;
      local_210 = param_3 + 0x14;
      uVar2 = FUN_019a25cc(param_1,param_2,&local_238);
    }
    else if ((int)uVar2 == 7) {
      uVar2 = 3;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




undefined4 FUN_019a2bc8(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (param_1 == (int *)0x0) {
    param_2[0x1d] = 0;
LAB_019a2c58:
    uVar3 = 0;
    uVar5 = 0;
    iVar6 = iVar2;
    iVar7 = iVar1;
LAB_019a2c60:
    param_2[0x1e] = uVar3;
    param_2[0x1f] = iVar7 + uVar3;
    param_2[0x20] = uVar5;
    param_2[0x21] = iVar6 + uVar5;
    param_2[3] = iVar7;
    param_2[4] = iVar6;
    if (param_1 == (int *)0x0) {
      param_2[0x22] = 0;
      param_2[0x1c] = 0;
      param_2[0x16] = 1;
      return 1;
    }
    iVar6 = param_1[7];
    param_2[0x22] = (uint)(0 < iVar6);
    if (0 < iVar6) {
      if ((param_1[8] < 1) || (iVar7 = param_1[9], iVar7 < 1)) goto LAB_019a2d20;
      param_2[0x23] = param_1[8];
      param_2[0x24] = iVar7;
    }
    param_2[0x1c] = (uint)(*param_1 != 0);
    param_2[0x16] = (uint)(param_1[1] == 0);
    if (0 < iVar6) {
      iVar1 = iVar1 * 3;
      iVar6 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar6 = iVar1;
      }
      uVar3 = 0;
      if (param_2[0x23] < iVar6 >> 2) {
        iVar2 = iVar2 * 3;
        iVar1 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        uVar3 = (uint)(param_2[0x24] < iVar1 >> 2);
      }
      param_2[0x1c] = uVar3;
      param_2[0x16] = 0;
    }
    uVar4 = 1;
  }
  else {
    iVar6 = param_1[2];
    param_2[0x1d] = (uint)(0 < iVar6);
    if (iVar6 < 1) goto LAB_019a2c58;
    iVar6 = param_1[6];
    uVar3 = param_1[3] & 0xfffffffe;
    uVar5 = param_1[4] & 0xfffffffe;
    if (param_3 < 0xb) {
      uVar3 = param_1[3];
      uVar5 = param_1[4];
    }
    if (((((int)(uVar5 + iVar6) <= iVar2) && (iVar7 = param_1[5], (int)(uVar3 + iVar7) <= iVar1)) &&
        (0 < iVar6)) && (0 < iVar7)) {
      if ((int)(uVar5 | uVar3) < 0) {
        return 0;
      }
      goto LAB_019a2c60;
    }
LAB_019a2d20:
    uVar4 = 0;
  }
  return uVar4;
}




void * FUN_019a2d40(ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0x10000000000 / param_1;
    }
    if (uVar1 < param_2) {
      return (void *)0x0;
    }
  }
  pvVar2 = malloc(param_2 * param_1);
  return pvVar2;
}




void * FUN_019a2d64(ulong param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = 0x10000000000 / param_1;
    }
    if (uVar1 < param_2) {
      return (void *)0x0;
    }
  }
  pvVar2 = calloc(param_1,param_2);
  return pvVar2;
}




void FUN_019a2d88(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x2c), -1 < iVar2)) {
    if (iVar2 < 0x65) {
      if (iVar2 * 0xff < 100) {
        return;
      }
      iVar2 = (iVar2 * 0xff) / 100;
    }
    else {
      iVar2 = 0xff;
    }
    lVar4 = 0;
    uVar3 = 0;
    do {
      lVar1 = param_2 + lVar4;
      uVar5 = *(uint *)(lVar1 + 0x3f4);
      if ((int)uVar5 < 0xc) {
        uVar5 = *(int *)(&DAT_01e1c4e0 + (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) * 4) *
                iVar2 >> 3;
        *(uint *)(lVar1 + 0x3f8) = uVar5;
      }
      else {
        uVar5 = *(uint *)(lVar1 + 0x3f8);
      }
      lVar4 = lVar4 + 0x20;
      uVar3 = uVar5 | uVar3;
    } while (lVar4 != 0x80);
    if (uVar3 != 0) {
      FUN_019b7368(0x3f800000,param_2 + 0x2f4);
      *(undefined4 *)(param_2 + 0x2f0) = 1;
    }
  }
  return;
}




undefined8 FUN_019a2e4c(long param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x8f8) < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x19c) <= *(int *)(param_1 + 0x8ec)) {
      uVar5 = (uint)(*(int *)(param_1 + 0x8ec) <= *(int *)(param_1 + 0x1a4));
    }
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    lVar2 = FUN_019b7a58();
    uVar3 = (**(code **)(lVar2 + 0x10))(param_1 + 0x90);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      memcpy((void *)(param_1 + 0xf0),param_2,0xa0);
      *(uint *)(param_1 + 0xd8) = uVar5;
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x8ec);
      if (*(int *)(param_1 + 0xc0) == 2) {
        uVar4 = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x8f0);
        *(undefined8 *)(param_1 + 0x8f0) = uVar4;
      }
      else {
        FUN_019a2f94(param_1,param_1 + 0xd0);
      }
      if (uVar5 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x8a8);
        *(undefined8 *)(param_1 + 0x8a8) = uVar4;
      }
      lVar2 = FUN_019b7a58();
      (**(code **)(lVar2 + 0x18))(param_1 + 0x90);
      uVar4 = 1;
      iVar1 = 0;
      if (*(int *)(param_1 + 0xc4) + 1 != *(int *)(param_1 + 200)) {
        iVar1 = *(int *)(param_1 + 0xc4) + 1;
      }
      *(int *)(param_1 + 0xc4) = iVar1;
    }
    return uVar4;
  }
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x8ec);
  *(uint *)(param_1 + 0xd8) = uVar5;
  FUN_019a2f94(param_1,param_1 + 0xd0);
  uVar4 = FUN_019a3558(param_1,param_2);
  return uVar4;
}




void FUN_019a2f94(long param_1,int *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  ulong local_d0;
  ulong local_c8;
  undefined8 *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0;
  int local_94;
  int *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  long local_78;
  long local_70;
  
  if (0 < *(int *)(param_1 + 400)) {
    lVar22 = *(long *)(param_1 + 0x8b0);
    uVar20 = 0;
    local_78 = lVar22 + 0x248;
    local_94 = param_2[1];
    local_a0 = (undefined8 *)(lVar22 + 600);
    piVar1 = (int *)(lVar22 + 0x18);
    local_c8 = 5;
    if (local_94 == 0) {
      local_c8 = 6;
    }
    local_a8 = (long)(*param_2 << 4);
    local_b0 = (long)(*param_2 << 3);
    local_d0 = (ulong)(local_94 == 0) << 2;
    puVar2 = (undefined8 *)(lVar22 + 0x28);
    local_b8 = lVar22 + 0x27;
    local_c0 = (undefined8 *)(lVar22 + 0x48);
    local_90 = param_2;
    do {
      lVar21 = *(long *)(local_90 + 6);
      lVar9 = 0;
      if (uVar20 == 0) {
        do {
          *(undefined1 *)(local_b8 + lVar9) = 0x81;
          lVar9 = lVar9 + 0x20;
        } while (lVar9 != 0x200);
        lVar9 = 0;
        do {
          lVar16 = lVar22 + lVar9;
          lVar9 = lVar9 + 0x20;
          *(undefined1 *)(lVar16 + 0x247) = 0x81;
          *(undefined1 *)(lVar16 + 599) = 0x81;
        } while (lVar9 != 0x100);
        if (0 < local_94) {
          *(undefined1 *)(lVar22 + 0x237) = 0x81;
          *(undefined1 *)(lVar22 + 0x227) = 0x81;
          *(undefined1 *)(lVar22 + 7) = 0x81;
          local_80 = *(undefined8 **)(param_1 + 0x898);
          uVar17 = *(uint *)(lVar21 + 0x314);
          local_88 = local_80;
          goto LAB_019a3178;
        }
        local_80 = *(undefined8 **)(param_1 + 0x898);
        uVar17 = *(uint *)(lVar21 + 0x314);
        local_88 = local_80;
LAB_019a3078:
        bVar8 = false;
        *(undefined8 *)(lVar22 + 0x14) = 0x7f7f7f7f7f7f7f7f;
        *(undefined8 *)(lVar22 + 7) = 0x7f7f7f7f7f7f7f7f;
        *(undefined8 *)(lVar22 + 0xf) = 0x7f7f7f7f7f7f7f7f;
        *(undefined1 *)(lVar22 + 0x22f) = 0x7f;
        *(undefined8 *)(lVar22 + 0x227) = 0x7f7f7f7f7f7f7f7f;
        *(undefined1 *)(lVar22 + 0x23f) = 0x7f;
        *(undefined8 *)(lVar22 + 0x237) = 0x7f7f7f7f7f7f7f7f;
      }
      else {
        do {
          lVar16 = lVar22 + lVar9;
          lVar9 = lVar9 + 0x20;
          *(undefined4 *)(lVar16 + 4) = *(undefined4 *)(lVar16 + 0x14);
        } while (lVar9 != 0x220);
        lVar9 = 0;
        do {
          lVar16 = lVar22 + lVar9;
          lVar9 = lVar9 + 0x20;
          *(undefined4 *)(lVar16 + 0x224) = *(undefined4 *)(lVar16 + 0x22c);
          *(undefined4 *)(lVar16 + 0x234) = *(undefined4 *)(lVar16 + 0x23c);
        } while (lVar9 != 0x120);
        local_88 = *(undefined8 **)(param_1 + 0x898);
        uVar17 = *(uint *)(lVar21 + uVar20 * 800 + 0x314);
        local_80 = local_88 + uVar20 * 4;
        if (local_94 < 1) {
          if (uVar20 == 0) goto LAB_019a3078;
          bVar8 = false;
        }
        else {
LAB_019a3178:
          uVar23 = *local_80;
          *(undefined8 *)(lVar22 + 0x10) = local_80[1];
          *(undefined8 *)(lVar22 + 8) = uVar23;
          *(undefined8 *)(lVar22 + 0x228) = local_88[uVar20 * 4 + 2];
          *(undefined8 *)(lVar22 + 0x238) = local_88[uVar20 * 4 + 3];
          bVar8 = true;
        }
      }
      local_70 = lVar21;
      if (*(char *)(lVar21 + uVar20 * 800 + 0x300) == '\0') {
        bVar4 = *(byte *)(lVar21 + uVar20 * 800 + 0x301);
        puVar7 = &local_c8;
        if (uVar20 != 0) {
          puVar7 = &local_d0;
        }
        uVar19 = *puVar7;
        uVar3 = uVar19;
        if (bVar4 != 0) {
          uVar3 = (ulong)bVar4;
        }
        (*(code *)(&PTR_FUN_02baf890)[uVar3])(puVar2);
        if (uVar17 != 0) {
          lVar9 = 0;
          lVar16 = lVar21 + uVar20 * 800;
          do {
            uVar5 = uVar17 >> 0x1e;
            lVar21 = (long)puVar2 + (long)*(int *)((long)&DAT_01e1c514 + lVar9);
            if (uVar5 == 1) {
              puVar10 = &DAT_0321a7d0;
LAB_019a3278:
              (*(code *)*puVar10)(lVar16,lVar21);
            }
            else {
              if (uVar5 == 2) {
                puVar10 = &DAT_0321a7b8;
                goto LAB_019a3278;
              }
              if (uVar5 == 3) {
                (*DAT_0321a780)(lVar16,lVar21,0);
              }
            }
            lVar9 = lVar9 + 4;
            uVar17 = uVar17 << 2;
            lVar16 = lVar16 + 0x20;
            lVar21 = local_70;
          } while (lVar9 != 0x40);
        }
      }
      else {
        if (bVar8) {
          if ((long)uVar20 < (long)*(int *)(param_1 + 400) + -1) {
            iVar12 = *(int *)(local_80 + 4);
            *piVar1 = iVar12;
          }
          else {
            bVar4 = *(byte *)((long)local_88 + uVar20 * 0x20 + 0xf);
            *piVar1 = (uint)bVar4 * 0x1010101;
            iVar12 = CONCAT22(CONCAT11(bVar4,bVar4),CONCAT11(bVar4,bVar4));
          }
        }
        else {
          iVar12 = *piVar1;
        }
        *(int *)(lVar22 + 0x198) = iVar12;
        *(int *)(lVar22 + 0x118) = iVar12;
        *(int *)(lVar22 + 0x98) = iVar12;
        lVar21 = lVar21 + uVar20 * 800;
        lVar16 = 0;
        lVar9 = lVar21 + 0x301;
        do {
          lVar14 = (long)puVar2 + (long)(int)(&DAT_01e1c514)[lVar16];
          (*(code *)(&PTR_FUN_02baf840)[*(byte *)(lVar9 + lVar16)])(lVar14);
          uVar5 = uVar17 >> 0x1e;
          if (uVar5 == 1) {
            puVar10 = &DAT_0321a7d0;
LAB_019a335c:
            (*(code *)*puVar10)(lVar21,lVar14);
          }
          else {
            if (uVar5 == 2) {
              puVar10 = &DAT_0321a7b8;
              goto LAB_019a335c;
            }
            if (uVar5 == 3) {
              (*DAT_0321a780)(lVar21,lVar14,0);
            }
          }
          lVar16 = lVar16 + 1;
          uVar17 = uVar17 << 2;
          lVar21 = lVar21 + 0x20;
        } while (lVar16 != 0x10);
        puVar7 = &local_c8;
        if (uVar20 != 0) {
          puVar7 = &local_d0;
        }
        uVar19 = *puVar7;
        lVar21 = local_70;
      }
      lVar21 = lVar21 + uVar20 * 800;
      uVar17 = *(uint *)(lVar21 + 0x318);
      if (*(byte *)(lVar21 + 0x311) != 0) {
        uVar19 = (ulong)*(byte *)(lVar21 + 0x311);
      }
      pcVar18 = (code *)(&PTR_FUN_02baf8c8)[uVar19];
      (*pcVar18)(local_78);
      puVar10 = local_a0;
      (*pcVar18)(local_a0);
      if ((uVar17 & 0xff) != 0) {
        if ((uVar17 & 0xaa) == 0) {
          puVar11 = &DAT_0321a7a0;
        }
        else {
          puVar11 = &DAT_0321a788;
        }
        (*(code *)*puVar11)(lVar21 + 0x200,local_78);
      }
      if ((uVar17 & 0xff00) != 0) {
        if ((uVar17 & 0xaa00) == 0) {
          puVar11 = &DAT_0321a7a0;
        }
        else {
          puVar11 = &DAT_0321a788;
        }
        (*(code *)*puVar11)(local_70 + uVar20 * 800 + 0x280,puVar10);
      }
      if (local_94 < *(int *)(param_1 + 0x194) + -1) {
        uVar23 = *(undefined8 *)(lVar22 + 0x208);
        local_80[1] = *(undefined8 *)(lVar22 + 0x210);
        *local_80 = uVar23;
        local_88[uVar20 * 4 + 2] = *(undefined8 *)(lVar22 + 0x328);
        local_88[uVar20 * 4 + 3] = *(undefined8 *)(lVar22 + 0x338);
      }
      lVar15 = *(long *)(param_1 + 0x8c8);
      lVar21 = (uVar20 & 0x1fffffff) * 8;
      lVar16 = *(long *)(param_1 + 0x8c0);
      uVar23 = *puVar2;
      puVar13 = (undefined8 *)
                (*(long *)(param_1 + 0x8b8) + (uVar20 & 0xfffffff) * 0x10 +
                local_a8 * *(int *)(param_1 + 0x8d0));
      lVar14 = local_b0 * *(int *)(param_1 + 0x8d4);
      lVar9 = -0xf;
      puVar13[1] = *(undefined8 *)(lVar22 + 0x30);
      *puVar13 = uVar23;
      puVar11 = local_c0;
      do {
        uVar23 = *puVar11;
        iVar12 = (int)lVar9;
        lVar9 = lVar9 + 1;
        puVar6 = (undefined8 *)
                 ((long)puVar13 + (long)*(int *)(param_1 + 0x8d0) * (long)(iVar12 + 0x10));
        puVar6[1] = puVar11[1];
        *puVar6 = uVar23;
        puVar11 = puVar11 + 4;
      } while (lVar9 != 0);
      lVar9 = 0;
      do {
        iVar12 = (int)lVar9;
        lVar9 = lVar9 + 1;
        *(undefined8 *)(lVar16 + lVar21 + lVar14 + (long)*(int *)(param_1 + 0x8d4) * (long)iVar12) =
             puVar10[-2];
        *(undefined8 *)(lVar15 + lVar21 + lVar14 + (long)*(int *)(param_1 + 0x8d4) * (long)iVar12) =
             *puVar10;
        puVar10 = puVar10 + 4;
      } while (lVar9 != 8);
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)*(int *)(param_1 + 400));
  }
  return;
}

