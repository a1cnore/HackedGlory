// functions/00da2 — 53 functions
#include "libGameKindred.h"




void thunk_FUN_00da2ee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0314f724))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d60f38();
  return;
}




undefined8 thunk_FUN_00da2eb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d60f2c();
  return uVar2;
}




undefined8 thunk_FUN_00da2eb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d60f2c();
  return uVar2;
}




void thunk_FUN_00da2ee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0314f724))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d60f38();
  return;
}




void FUN_00da2010(undefined8 *param_1)

{
  param_1[2] = "CenterBody";
  *param_1 = "Effect_TalentStrong";
  *(ushort *)((long)param_1 + 100) = *(ushort *)((long)param_1 + 100) & 0xfff0 | 10;
  return;
}




void FUN_00da2040(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00da2048(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00da2050(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00da2058(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x48) = param_1;
  return;
}




void FUN_00da2060(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}




void FUN_00da2068(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00da2070(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff7 | (param_2 & 1) << 3;
  return;
}




void FUN_00da2088(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xffef | (param_2 & 1) << 4;
  return;
}




void FUN_00da20a0(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff7f | (param_2 & 1) << 7;
  return;
}




void FUN_00da20b8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x4c) = param_1;
  *(ushort *)(param_2 + 100) = *(ushort *)(param_2 + 100) | 0x100;
  return;
}




void FUN_00da20cc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00da20d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00da20dc(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfdff | (param_2 & 1) << 9;
  return;
}




void FUN_00da20f4(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff9f | (param_2 & 3) << 5;
  return;
}




void FUN_00da210c(float param_1,float param_2,float param_3,long param_4)

{
  *(char *)(param_4 + 0x60) = (char)(int)(param_1 * 255.0);
  *(char *)(param_4 + 0x61) = (char)(int)(param_2 * 255.0);
  *(char *)(param_4 + 0x62) = (char)(int)(param_3 * 255.0);
  return;
}




void FUN_00da213c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x50) = param_1;
  return;
}




void FUN_00da2144(float param_1,long param_2)

{
  *(char *)(param_2 + 99) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_00da215c(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x54) = param_1;
  *(undefined4 *)(param_3 + 0x58) = param_2;
  return;
}




void FUN_00da2164(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x54) = *param_2;
  return;
}




void FUN_00da2170(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x400;
  return;
}




void FUN_00da2180(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00da2188(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_e8 [2];
  byte *local_e0;
  int local_d8 [2];
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_53;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) == 0) {
    local_c0 = 0;
    uVar3 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if (((uVar3 == 0x1f) || (1 < *(ushort *)(param_2 + (ulong)uVar3 * 0x38 + 0x90) - 3)) ||
       (*(char *)(param_1 + 100) < '\0')) {
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_4,param_1 + 0x5c);
      }
      if (param_3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00d9e99c(param_3);
      }
      local_d8[0] = 0;
      FUN_00da2470(param_1,uVar3 & 1,param_4,local_d8);
      if (local_d8[0] != 0) {
        uStack_a0 = 0;
        local_a8 = (undefined1 *)0x0;
        lStack_b0 = 0;
        local_b8 = 0;
        local_98 = local_d8[0];
        local_94 = 0xffffffff00000000;
        local_84 = 0xff000000;
        local_7c = _DAT_03218ef8;
        local_74 = DAT_03218f40;
        local_6c = DAT_03218f48;
        local_8c = 0;
        local_68 = 0;
        local_60 = 0;
        local_5c = 2;
        local_54 = 1;
        local_53 = 1;
        FUN_00da2538(param_1,&local_b8,param_3,param_2);
        if (*(code **)(param_1 + 0x40) != (code *)0x0) {
          (**(code **)(param_1 + 0x40))(param_4,&local_74,&local_68,(long)&local_68 + 4,&local_60);
        }
        local_e0 = (byte *)0x0;
        if (*(code **)(param_1 + 0x30) == (code *)0x0) {
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_4,auStack_d0);
          }
        }
        else {
          (**(code **)(param_1 + 0x30))(param_4,&local_c0,&local_e0,&lStack_b0);
          if (lStack_b0 != 0) {
            lStack_b0 = FUN_00d5a5c4(param_2);
          }
        }
        local_e8[0] = 0x811c9dc5;
        local_b8 = local_c0;
        if (local_e0 == (byte *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0x811c9dc5;
          if (*local_e0 != 0) {
            uVar3 = 0x811c9dc5;
            uVar6 = (uint)*local_e0;
            pbVar7 = local_e0;
            do {
              pbVar7 = pbVar7 + 1;
              uVar3 = (uVar3 ^ uVar6) * 0x1000193;
              uVar6 = (uint)*pbVar7;
            } while (*pbVar7 != 0);
          }
        }
        local_8c = CONCAT44(uVar3,(undefined4)local_8c);
        local_a8 = (undefined1 *)0x0;
        if (*(long *)(param_1 + 0x38) != 0) {
          local_a8 = auStack_d0;
        }
        pbVar7 = *(byte **)(param_1 + 0x10);
        if (pbVar7 == (byte *)0x0) {
          local_e8[0] = 0;
        }
        else {
          uVar3 = (uint)*pbVar7;
          if (*pbVar7 != 0) {
            do {
              pbVar7 = pbVar7 + 1;
              local_e8[0] = (local_e8[0] ^ uVar3) * 0x1000193;
              uVar3 = (uint)*pbVar7;
            } while (*pbVar7 != 0);
          }
        }
        uVar1 = *(ushort *)(param_1 + 100) & 7;
        if (uVar1 == 3) {
          FUN_00d5a578(param_2,&local_b8,*(undefined8 *)(param_1 + 0x18));
        }
        else if (uVar1 == 2) {
          FUN_00d5a560(param_2,&local_b8,local_e8);
        }
        else if (uVar1 == 1) {
          FUN_00d5a548(param_2,&local_b8);
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00da2470(undefined8 *param_1,ulong param_2,undefined8 param_3,uint *param_4)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_5c [36];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)0x0) {
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])(param_3,local_5c,0x24);
      pbVar4 = local_5c;
      goto LAB_00da24d4;
    }
  }
  else {
    pbVar1 = (byte *)param_1[1];
    if ((param_2 & 1) == 0) {
      pbVar1 = pbVar4;
    }
    if ((byte *)param_1[1] != (byte *)0x0) {
      pbVar4 = pbVar1;
    }
LAB_00da24d4:
    if (*pbVar4 != 0) {
      uVar3 = 0x811c9dc5;
      uVar5 = (uint)*pbVar4;
      do {
        pbVar4 = pbVar4 + 1;
        uVar3 = (uVar3 ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar4;
      } while (*pbVar4 != 0);
      goto LAB_00da250c;
    }
  }
  uVar3 = 0;
LAB_00da250c:
  *param_4 = uVar3;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00da2538(long param_1,long param_2,long param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00d9e99c(param_3);
    uVar2 = ~uVar2 & 1;
  }
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x48);
  *(byte *)(param_2 + 100) = (byte)(*(ushort *)(param_1 + 100) >> 3) & 1;
  *(byte *)(param_2 + 0x65) = (byte)(*(ushort *)(param_1 + 100) >> 4) & 1;
  *(uint *)(param_2 + 0x5c) = *(ushort *)(param_1 + 100) >> 5 & 3;
  uVar1 = *(ushort *)(param_1 + 100);
  *(uint *)(param_2 + 0x60) = uVar2;
  *(byte *)(param_2 + 0x66) = (byte)(uVar1 >> 7) & 1;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x5c);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00d5babc(param_3);
  }
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  *(byte *)(param_2 + 0x67) = *(byte *)(param_1 + 0x65) & 1;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
  *(byte *)(param_2 + 0x68) = (byte)((ushort)*(undefined2 *)(param_1 + 100) >> 9) & 1;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x60);
  if (*(float *)(param_1 + 0x50) <= 0.0) {
    if ((*(byte *)(param_1 + 0x65) >> 2 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x38) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(*(long *)(param_4 + 0x38) + 0x1d0);
    }
  }
  else {
    *(float *)(param_2 + 0x38) = *(float *)(param_1 + 0x50);
  }
  *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x54);
  return;
}




void FUN_00da2640(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x65) >> 1 & 1) == 0) {
    FUN_00d5a6dc();
    return;
  }
  FUN_00d5a6f4(param_2,*(undefined4 *)(param_1 + 0x5c));
  return;
}




undefined4 FUN_00da2690(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




void FUN_00da2698(byte *param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar2 = (uint)*param_1;
    local_30[0] = 0x811c9dc5;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        local_30[0] = (local_30[0] ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  FUN_00da2720(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00da2720(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((*param_1 != -0x7ee3623b) && (*param_1 != 0)) {
    iVar2 = FUN_019889cc(&local_30,1,DAT_02e3ef88,0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00d76118(local_30,param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00da27c4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6a488();
  uVar4 = 0;
  if ((uVar3 & 1) == 0) {
    iVar2 = FUN_019889cc(&local_30,1,DAT_02e3ef88,0);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00d76194(local_30,param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00da2848(byte *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == (byte *)0x0) {
    local_30[0] = 0;
  }
  else {
    uVar3 = (uint)*param_1;
    local_30[0] = 0x811c9dc5;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        local_30[0] = (local_30[0] ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  lVar2 = FUN_00da2720(local_30);
  if (lVar2 != 0) {
    *param_2 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0x18);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2 != 0);
  }
  return;
}




bool FUN_00da28ec(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00da2720();
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x18);
  }
  return lVar1 != 0;
}




bool FUN_00da2924(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00da2720();
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x18);
    *param_2 = *(undefined4 *)(lVar2 + 0x10);
    param_2[1] = uVar1;
  }
  return lVar2 != 0;
}




void FUN_00da2958(int param_1,long *param_2,undefined8 *param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00d6eb50();
  FUN_00ce27e0(local_60);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  lVar4 = FUN_00d6eb5c(uVar3,pvVar1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x188) + (long)param_1 * 8);
    *param_2 = lVar4;
    *param_3 = *(undefined8 *)(lVar4 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00da2a10(float param_1,float param_2,long param_3,long *param_4,float *param_5)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar1 = *param_4;
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_3 + 8);
    fVar11 = 0.0;
    param_4 = param_4 + -1;
    do {
      if ((0.0 <= param_2) && (param_2 < fVar11)) {
        return 0;
      }
      fVar16 = *(float *)(lVar1 + 4);
      fVar13 = *(float *)(lVar1 + 8);
      fVar12 = *(float *)(lVar1 + 0xc);
      if (param_4 < plVar2) {
        fVar15 = fVar13;
        fVar17 = fVar16;
        fVar14 = fVar12;
        if (param_2 == 0.0) {
          fVar11 = fVar11 + 1.0;
        }
      }
      else {
        lVar1 = *param_4;
        fVar15 = *(float *)(lVar1 + 8);
        fVar17 = *(float *)(lVar1 + 4);
        fVar14 = *(float *)(lVar1 + 0xc);
      }
      fVar4 = (fVar17 - fVar16) * (fVar17 - fVar16) + (fVar15 - fVar13) * (fVar15 - fVar13) +
              (fVar14 - fVar12) * (fVar14 - fVar12);
      fVar3 = SQRT(fVar4);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(fVar4);
      }
      fVar6 = *param_5;
      fVar5 = param_5[1];
      fVar4 = param_5[2];
      fVar7 = fVar16 - fVar17;
      fVar8 = fVar13 - fVar15;
      fVar20 = fVar6 - fVar17;
      fVar19 = fVar5 - fVar15;
      fVar9 = fVar12 - fVar14;
      fVar18 = fVar4 - fVar14;
      fVar10 = fVar7 * fVar20 + fVar8 * fVar19 + fVar9 * fVar18;
      if (fVar10 <= 0.0) {
        fVar13 = fVar20 * fVar20 + fVar19 * fVar19;
        fVar18 = fVar18 * fVar18;
      }
      else {
        fVar18 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
        if (fVar18 <= fVar10) {
          fVar13 = (fVar6 - fVar16) * (fVar6 - fVar16) + (fVar5 - fVar13) * (fVar5 - fVar13);
          fVar18 = (fVar4 - fVar12) * (fVar4 - fVar12);
        }
        else {
          fVar10 = fVar10 / fVar18;
          fVar6 = fVar6 - (fVar17 + fVar7 * fVar10);
          fVar5 = fVar5 - (fVar15 + fVar8 * fVar10);
          fVar4 = fVar4 - (fVar14 + fVar9 * fVar10);
          fVar18 = fVar6 * fVar6 + fVar5 * fVar5;
          fVar13 = fVar4 * fVar4;
        }
      }
      if (fVar13 + fVar18 <= param_1 * param_1 + 0.0) {
        return 1;
      }
      lVar1 = param_4[2];
      fVar11 = fVar11 + fVar3;
      param_4 = param_4 + 1;
    } while (lVar1 != 0);
  }
  return 0;
}




void FUN_00da2be8(void)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_019889cc(auStack_30,1,DAT_02e3ef88,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}




void FUN_00da2c48(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_019889cc(&local_30,1,DAT_02e3ef88,0);
  uVar3 = 0;
  if (iVar2 == 1) {
    if (*(long *)(local_30 + 0x290) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(long *)(local_30 + 0x290) + 8);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00da2cc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d6074c(lVar1,0);
  return;
}




undefined8 * FUN_00da2cf8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return &DAT_03218f30;
  }
  do {
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0314f724) {
      puVar1 = (undefined8 *)FUN_00d607b4(lVar2);
      return puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while (lVar2 != 0);
  return &DAT_03218f30;
}




undefined8 * FUN_00da2d50(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return &DAT_03218f30;
  }
  do {
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0314f724) {
      puVar1 = (undefined8 *)FUN_00d607ac(lVar2);
      return puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while (lVar2 != 0);
  return &DAT_03218f30;
}




undefined8 FUN_00da2da8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d60da0();
  return uVar2;
}




undefined8 FUN_00da2ddc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d61090();
  return uVar2;
}




undefined8 FUN_00da2e10(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00d6a814(param_1,1);
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + 0x2f6) >> 5 & 1) != 0)) {
    uVar2 = FUN_00cb739c(param_1);
    return uVar2;
  }
  return 0;
}




undefined1  [16] FUN_00da2e54(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) goto LAB_00da2ea8;
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_031a96b0) {
      FUN_00d62490();
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_00;
      return auVar2;
    }
  }
LAB_00da2ea8:
  return ZEXT816(0);
}




undefined8 FUN_00da2eb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d60f2c();
  return uVar2;
}




void FUN_00da2ee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0314f724))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d60f38();
  return;
}




undefined8 FUN_00da2f14(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0314f724) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_00d60f2c();
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_00da2f68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0314f724) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d60cd0();
  return uVar2;
}




void FUN_00da2f9c(float param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ushort *)(param_2 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (uVar3 = 0, *(short *)(param_2 + (ulong)uVar1 * 0x38 + 0x90) != 5)) {
    FUN_00d55794(param_2,local_68,0);
    FUN_00d55794(param_3,&local_78,0);
    fVar10 = (float)local_78 - local_68._0_4_;
    fVar11 = (float)((ulong)local_78 >> 0x20) - local_68._4_4_;
    if ((1.1920929e-07 <= ABS(fVar10)) ||
       ((1.1920929e-07 <= ABS(fVar11) || (uVar3 = 0, 1.1920929e-07 <= ABS(local_70 - local_60))))) {
      fVar12 = local_70 - local_60;
      fVar7 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
      fVar5 = SQRT(fVar7);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar7);
      }
      uVar1 = *(ushort *)(param_3 + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) && (*(short *)(param_3 + (ulong)uVar1 * 0x38 + 0x90) == 2)) {
        FUN_00d557c4(param_3,&local_88,&DAT_03218f68);
        fVar8 = (float)local_88 * (float)local_88 + local_88._4_4_ * local_88._4_4_ +
                local_80 * local_80;
        fVar7 = SQRT(fVar8);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(fVar8);
        }
        fVar8 = (float)local_88 / fVar7;
        fVar9 = (float)((ulong)local_88 >> 0x20) / fVar7;
        local_88 = CONCAT44(fVar9,fVar8);
        local_80 = local_80 / fVar7;
        if (0.0 < (fVar10 / fVar5) * fVar8 + (fVar11 / fVar5) * fVar9 + (fVar12 / fVar5) * local_80)
        {
          uVar6 = FUN_00d9ee8c(param_3);
          fVar7 = (float)NEON_fminnm(uVar6,0x40a00000);
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          fVar7 = fVar7 * 0.5;
          local_78 = CONCAT44((float)((ulong)local_78 >> 0x20) +
                              (float)((ulong)local_88 >> 0x20) * fVar7,
                              (float)local_78 + (float)local_88 * fVar7);
          local_70 = local_80 * fVar7 + local_70;
        }
      }
      fVar7 = (float)FUN_00d9df64(param_2,param_3);
      uVar3 = 0;
      if (param_1 + -0.5 < fVar7) {
        fVar7 = *(float *)(*(long *)(param_3 + 0x38) + 100);
        local_98 = 0x412000003e800000;
        fVar7 = param_1 + -0.5 +
                (*(float *)(*(long *)(param_3 + 0x38) + 0x68) *
                (fVar7 + *(float *)(param_3 + 0x2e8))) / fVar7;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        local_88 = CONCAT44((float)((ulong)local_78 >> 0x20) - (fVar11 / fVar5) * fVar7,
                            (float)local_78 - (fVar10 / fVar5) * fVar7);
        local_80 = local_70 - (fVar12 / fVar5) * fVar7;
        local_90 = 0x3e800000;
        uVar3 = thunk_FUN_00da2eb4(param_2);
        uVar4 = FUN_00ef00a0(uVar3,&local_88,&local_88,&local_98);
        if ((uVar4 & 1) == 0) {
          local_80 = local_70;
          local_88 = local_78;
        }
        uVar3 = thunk_FUN_00da2eb4(param_2);
        uVar4 = FUN_00ef00a0(uVar3,&local_88,&local_88,&local_98);
        uVar3 = 0;
        if ((uVar4 & 1) != 0) {
          uVar3 = 1;
          *(float *)(param_4 + 1) = local_80;
          *param_4 = local_88;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

