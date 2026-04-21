// functions/00d50 — 74 functions
#include "libGameKindred.h"




void thunk_FUN_00d50cc8(long param_1)

{
  FUN_00d50cd4(param_1 + 0x220,param_1);
  return;
}




undefined8 FUN_00d5029c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}




void FUN_00d502a4(long param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0x238) =
       *(uint *)(param_1 + 0x238) & 0xffffe000 |
       *(uint *)(param_1 + 0x238) & 0x3ff | (param_2 & 7) << 10;
  if ((param_2 & 7) != 0) {
    lVar4 = *(long *)(param_1 + 0x1f8);
    if (lVar4 != 0) {
      FUN_00d504d0(param_1);
      FUN_00d6e2d0(lVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x1f8);
      uVar2 = FUN_00d50544(param_1);
      FUN_00d6e510(uVar5,uVar2);
    }
    if ((*(long *)(param_1 + 0x1f0) != 0) &&
       (uVar3 = FUN_00d5066c(param_1,"Cooldown2",&local_3c), (uVar3 & 1) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x1f0);
      FUN_00d506d8(param_1,local_3c,0);
      FUN_00d6e2d0(uVar5);
    }
    FUN_00d51270(param_1);
    FUN_00d507bc(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00d50380(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x38);
  if ((((*(char *)(lVar4 + 0x8a) != '\0') || (0.0 < *(float *)(lVar4 + 0x40))) ||
      (0 < *(int *)(lVar4 + 0x4c))) ||
     ((uVar3 = FUN_00d5066c(param_1,"Cooldown",&local_2c), (uVar3 & 1) != 0 &&
      (((lVar4 = FUN_00d4c67c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0),local_2c),
        0.0 < *(float *)(lVar4 + 8) || (0.0 < *(float *)(lVar4 + 0xc))) ||
       ((0.0 < *(float *)(lVar4 + 0x20) || (0.0 < *(float *)(lVar4 + 0x10))))))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_00d5066c(param_1,"Charges",&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




char * FUN_00d50460(long param_1)

{
  if (*(char **)(param_1 + 0x200) != (char *)0x0) {
    return *(char **)(param_1 + 0x200);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    return *(char **)(*(long *)(param_1 + 0x38) + 8);
  }
  return "<null>";
}




void FUN_00d5048c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  return;
}




undefined1 FUN_00d504b8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8d);
}




uint FUN_00d504c4(long param_1)

{
  return *(uint *)(param_1 + 0x238) >> 10 & 7;
}




void FUN_00d504d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5066c(param_1,"Cooldown",&local_2c);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x40);
  }
  else {
    uVar3 = FUN_00d506d8(param_1,local_2c,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




int FUN_00d50544(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5066c(param_1,"Charges",&local_2c);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x38) + 0x4c);
  }
  else {
    fVar4 = (float)FUN_00d506d8(param_1,local_2c,1);
    uVar3 = (uint)fVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    fVar4 = (float)uVar3;
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    return (int)fVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d505cc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  while (*(long *)(param_1 + 0x1e8 + lVar3 * 8) != param_2) {
    lVar3 = lVar3 + 1;
    if (1 < (uint)lVar3) {
      return;
    }
  }
  uVar2 = FUN_00d52028(param_1 + 0x68,5);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if (((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70) == 2)) &&
     ((*(byte *)(param_1 + 0x239) >> 6 & 1) == 0)) {
    return;
  }
  FUN_00d4f8a8(param_1 + 0x68,5,0,0);
  return;
}




undefined8 FUN_00d5066c(long param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x38) + 0xb0);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = 0;
    do {
      iVar1 = strcasecmp(param_2,(char *)*puVar2);
      if (iVar1 == 0) {
        *param_3 = (int)lVar4;
        return 1;
      }
      puVar2 = (undefined8 *)puVar3[lVar4 + 1];
      lVar4 = lVar4 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}




float FUN_00d506d8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = *(uint *)(param_1 + 0x238) >> 10 & 7;
  if ((param_3 & 1) != 0) {
    fVar3 = (float)uVar2;
    if (fVar3 <= 1.0) {
      fVar3 = 1.0;
    }
    uVar2 = (uint)fVar3;
  }
  lVar1 = FUN_00d4c67c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0));
  if (lVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    if (uVar2 == 5) {
      fVar3 = *(float *)(lVar1 + 0x10);
    }
    fVar3 = *(float *)(lVar1 + 8) + *(float *)(lVar1 + 0xc) * (float)(uVar2 - 1) + fVar3;
  }
  return fVar3;
}




void FUN_00d5074c(long param_1)

{
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x2000;
  return;
}




undefined1 FUN_00d5075c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8a);
}




long FUN_00d50768(long param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 0xb0);
  puVar2 = (undefined8 *)*plVar3;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = strcasecmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)plVar3[1];
    plVar3 = plVar3 + 1;
  }
  return *plVar3;
}




void FUN_00d507bc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70) == 0)) {
    FUN_00d4f8a8(param_1 + 0x68,1,0,0);
    return;
  }
  return;
}




undefined2 FUN_00d507f8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if (uVar1 == 0x1f) {
    return 0x1f;
  }
  return *(undefined2 *)(param_1 + (ulong)uVar1 * 0x38 + 0x70);
}




void FUN_00d50824(long param_1)

{
  FUN_00d4f8a8(param_1 + 0x68,1,0,0);
  return;
}




void FUN_00d50838(long param_1)

{
  FUN_00d4f8a8(param_1 + 0x68,3,0,0);
  return;
}




void FUN_00d5084c(long param_1)

{
  FUN_00d4f8a8(param_1 + 0x68,2,0,0);
  return;
}




void FUN_00d50860(long param_1)

{
  FUN_00d502a4(param_1,(*(uint *)(param_1 + 0x238) >> 10 & 7) + 1);
  return;
}




void FUN_00d50870(long param_1)

{
  float fVar1;
  
  fVar1 = (float)(int)((*(uint *)(param_1 + 0x238) >> 10 & 7) - 1);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_00d502a4(param_1,(int)fVar1);
  return;
}




undefined1 FUN_00d50890(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x89);
}




undefined8 FUN_00d5089c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  uVar2 = 0;
  if ((uVar1 != 0x1f) && (uVar2 = 0, *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70) == 2)) {
    FUN_00d4f8a8(param_1 + 0x68,4,0,0);
    uVar2 = 1;
  }
  return uVar2;
}




bool FUN_00d508f8(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70) == 2;
  }
  return bVar2;
}




undefined1 FUN_00d5092c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x60);
}




undefined1 FUN_00d50938(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x54);
}




undefined1 FUN_00d50944(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x5b);
}




undefined1 FUN_00d50950(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x5c);
}




undefined1 FUN_00d5095c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x5d);
}




undefined1 FUN_00d50968(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x5e);
}




undefined1 FUN_00d50974(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x5f);
}




undefined1 FUN_00d50980(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x55);
}




undefined1 FUN_00d5098c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x56);
}




undefined1 FUN_00d50998(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x57);
}




undefined1 FUN_00d509a4(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x58);
}




undefined1 FUN_00d509b0(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x59);
}




undefined1 FUN_00d509bc(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x5a);
}




undefined1 FUN_00d509c8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x91);
}




undefined1 FUN_00d509d4(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x92);
}




void FUN_00d509e0(long param_1)

{
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfffeffff;
  return;
}




byte FUN_00d509f0(long param_1)

{
  return *(byte *)(param_1 + 0x23a) & 1;
}




uint FUN_00d509fc(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar2 + 0x8a) == '\0') {
    uVar1 = 0;
    if (*(int *)(lVar2 + 0x80) != 3) {
      uVar1 = (uint)*(byte *)(lVar2 + 0xa0);
      if (*(char *)(lVar2 + 0xa1) != '\0') {
        uVar1 = *(byte *)(lVar2 + 0xa0) | 0x10;
      }
      if (*(char *)(lVar2 + 0xa2) != '\0') {
        uVar1 = uVar1 | 0x1000;
      }
      if (*(char *)(lVar2 + 0xa3) != '\0') {
        uVar1 = uVar1 | 0x100;
      }
      if (*(char *)(lVar2 + 0xa4) != '\0') {
        uVar1 = uVar1 | 0x200;
      }
      if (*(char *)(lVar2 + 0xa5) != '\0') {
        uVar1 = uVar1 | 4;
      }
      if (*(char *)(lVar2 + 0xa6) != '\0') {
        uVar1 = uVar1 | 0x20000000;
      }
      if (*(char *)(lVar2 + 0xa7) != '\0') {
        uVar1 = uVar1 | 0x100000;
      }
    }
    return uVar1;
  }
  return 0x40000;
}




long FUN_00d50a98(long param_1)

{
  return *(long *)(param_1 + 0x38) + 0x9d;
}




undefined1 FUN_00d50aa4(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x8b);
}




undefined1 FUN_00d50ab0(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x7c);
}




undefined8 FUN_00d50abc(long param_1)

{
  return **(undefined8 **)(param_1 + 0x38);
}




uint FUN_00d50ac8(long param_1)

{
  return *(uint *)(param_1 + 0x238) & 7;
}




undefined4 * FUN_00d50ad4(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_01bd11d0;
  if (*(long *)(param_1 + 0x1f8) != 0) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x1f8) + 0x50);
  }
  return puVar1;
}




float FUN_00d50af0(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x60);
    if (fVar2 < 0.0) {
      fVar2 = (*(float *)(lVar1 + 0x54) + *(float *)(lVar1 + 0x58)) * *(float *)(lVar1 + 0x5c);
    }
    return fVar2;
  }
  return 0.0;
}




void FUN_00d50b20(long param_1)

{
  FUN_00d4c67c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xb0));
  return;
}




undefined1  [16] FUN_00d50b2c(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_00d6d8a4();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d50b40(void)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00d50b64();
  if (lVar1 != 0) {
    FUN_00d6d9f4();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




long FUN_00d50b64(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar4 = 0;
  lVar2 = 0;
  do {
    lVar1 = *(long *)(param_1 + 0x1e8 + lVar4);
    lVar3 = lVar2;
    if ((lVar1 != 0) && (lVar3 = lVar1, lVar2 != 0)) {
      fVar5 = (float)FUN_00d6d9f4();
      fVar6 = (float)FUN_00d6d9f4(lVar2);
      lVar3 = lVar2;
      if (fVar6 < fVar5) {
        lVar3 = *(long *)(param_1 + 0x1e8 + lVar4);
      }
    }
    lVar4 = lVar4 + 8;
    lVar2 = lVar3;
  } while (lVar4 != 0x10);
  return lVar3;
}




undefined1  [16] FUN_00d50bd8(void)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00d50b64();
  if (lVar1 != 0) {
    FUN_00d6dad0();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




bool FUN_00d50bfc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    return 1 < (int)*(char *)(lVar1 + 0x69) + (uint)*(byte *)(lVar1 + 0x68);
  }
  return false;
}




int FUN_00d50c24(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    return (int)*(char *)(lVar1 + 0x69) + (uint)*(byte *)(lVar1 + 0x68);
  }
  return 0;
}




undefined1 FUN_00d50c44(long param_1)

{
  if (*(long *)(param_1 + 0x1f8) != 0) {
    return *(undefined1 *)(*(long *)(param_1 + 0x1f8) + 0x6a);
  }
  return 0;
}




undefined1  [16] FUN_00d50c5c(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_00d6da08();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




float FUN_00d50c70(long param_1)

{
  if (-1 < *(short *)(param_1 + 0x21e)) {
    return *(float *)(param_1 + 0x218) *
           (float)(int)((uint)*(ushort *)(param_1 + 0x21c) +
                       (((int)*(short *)(param_1 + 0x21e) << 0x11) >> 0x11));
  }
  return 0.0;
}




float FUN_00d50c9c(long param_1)

{
  if (-1 < *(short *)(param_1 + 0x21e)) {
    return 0.0;
  }
  return *(float *)(param_1 + 0x218) *
         (float)(int)((uint)*(ushort *)(param_1 + 0x21c) +
                     (((int)*(short *)(param_1 + 0x21e) << 0x11) >> 0x11));
}




void FUN_00d50cc8(long param_1)

{
  FUN_00d50cd4(param_1 + 0x220,param_1);
  return;
}




float FUN_00d50cd4(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)((long)param_1 + 0xc);
  if (*(float *)((long)param_1 + 0xc) < 0.0) {
    if (*(char *)((long)param_1 + 0x14) == '\0') {
      lVar2 = *param_1;
      if (lVar2 == 0) {
        fVar5 = *(float *)(param_1 + 1);
      }
      else {
        uVar3 = 0x21;
        if (*(float *)(lVar2 + 0x20) <= 0.0) {
          uVar3 = 1;
        }
        uVar1 = uVar3 | 8;
        if (*(float *)(lVar2 + 0x14) <= 0.0) {
          uVar1 = uVar3;
        }
        uVar3 = uVar1 | 0x80;
        if (*(float *)(lVar2 + 0x24) <= 0.0) {
          uVar3 = uVar1;
        }
        fVar5 = (float)FUN_00d08e3c(param_2,lVar2,uVar3);
      }
    }
    else {
      do {
        param_2 = *(long *)(param_2 + 0x10);
      } while (*(int *)(*(long *)(param_2 + 8) + 0xa4) != DAT_02c09220);
      lVar2 = *(long *)(param_2 + 0x40);
      fVar4 = (*(float *)(lVar2 + 0x1e0) + 1.0) *
              (*(float *)(lVar2 + 0x78) +
              *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0));
      if (DAT_031a9450 <= fVar4) {
        fVar4 = DAT_031a9450;
      }
      fVar5 = DAT_031a9390;
      if (DAT_031a9390 <= fVar4) {
        fVar5 = fVar4;
      }
    }
  }
  return fVar5 + *(float *)(param_1 + 2);
}




undefined1 FUN_00d50dd0(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x88);
}




undefined1 FUN_00d50ddc(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x9c);
}




undefined4 FUN_00d50de8(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x80);
}




undefined4 FUN_00d50df4(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x74);
}




bool FUN_00d50e00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f8);
  if ((lVar1 != 0) && ((int)*(char *)(lVar1 + 0x69) + (uint)*(byte *)(lVar1 + 0x68) != 0)) {
    return *(char *)(lVar1 + 0x6a) != '\0';
  }
  return true;
}




bool FUN_00d50e30(long param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  lVar6 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(*(long *)(lVar6 + 8) + 0xa4);
  lVar5 = lVar6;
  iVar2 = iVar1;
  while (iVar2 != DAT_02c09220) {
    lVar5 = *(long *)(lVar5 + 0x10);
    iVar2 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  }
  sVar3 = *(short *)(param_1 + 0x21e);
  if (sVar3 < 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x218) *
            (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar3 << 0x11) >> 0x11));
  }
  bVar4 = false;
  if (fVar7 <= *(float *)(*(long *)(lVar5 + 0x40) + 0x310)) {
    while (iVar1 != DAT_02c09220) {
      lVar6 = *(long *)(lVar6 + 0x10);
      iVar1 = *(int *)(*(long *)(lVar6 + 8) + 0xa4);
    }
    fVar7 = 0.0;
    if (sVar3 < 0) {
      fVar7 = *(float *)(param_1 + 0x218) *
              (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar3 << 0x11) >> 0x11));
    }
    bVar4 = fVar7 <= *(float *)(*(long *)(lVar6 + 0x40) + 0x314);
  }
  return bVar4;
}




void FUN_00d50ef8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  return;
}




undefined1 FUN_00d50f24(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x7d);
}




undefined1 FUN_00d50f30(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x7f);
}




byte FUN_00d50f3c(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x38);
  uVar3 = *(uint *)(lVar6 + 0x80);
  if (uVar3 < 2) {
    uVar3 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if ((uVar3 != 0x1f) && (bVar2 = 0, *(ushort *)(param_2 + (ulong)uVar3 * 0x38 + 0x90) - 3 < 2))
    goto LAB_00d51168;
    uVar3 = FUN_00d509fc(param_1);
    if ((*(uint *)(param_2 + 0x2f4) & uVar3) != 0) {
      bVar2 = 0;
      if ((*(byte *)(param_2 + 0x2f9) & 1) != 0) goto LAB_00d51168;
      if (*(char *)(lVar6 + 0x9d) != '\0') {
        plVar7 = (long *)(param_1 + 0x10);
        lVar6 = *plVar7;
        while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
          lVar6 = *(long *)(lVar6 + 0x10);
        }
        uVar4 = FUN_00d9e934(lVar6,param_2);
        if ((uVar4 & 1) != 0) {
          do {
            lVar6 = *plVar7;
            plVar7 = (long *)(lVar6 + 0x10);
          } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220);
          if (*(int *)(lVar6 + 0x260) != *(int *)(param_2 + 0x260)) goto LAB_00d50f80;
        }
      }
      lVar6 = *(long *)(param_1 + 0x38);
      if (*(char *)(lVar6 + 0x9e) != '\0') {
        lVar6 = *(long *)(param_1 + 0x10);
        while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
          lVar6 = *(long *)(lVar6 + 0x10);
        }
        uVar4 = FUN_00d9e934(lVar6,param_2);
        if ((uVar4 & 1) == 0) goto LAB_00d50f80;
        lVar6 = *(long *)(param_1 + 0x38);
      }
      if (*(char *)(lVar6 + 0x9f) != '\0') {
        do {
          param_1 = *(long *)(param_1 + 0x10);
        } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_02c09220);
        bVar2 = *(int *)(param_1 + 0x260) == *(int *)(param_2 + 0x260);
        goto LAB_00d51168;
      }
    }
  }
  else {
    if (uVar3 - 3 < 2) {
LAB_00d50f80:
      bVar2 = 1;
      goto LAB_00d51168;
    }
    if ((uVar3 == 2) && (uVar3 = FUN_00d509fc(param_1), (*(uint *)(param_2 + 0x2f4) & uVar3) != 0))
    {
      FUN_00d4d9e8(auStack_98);
      lVar5 = *(long *)(param_1 + 0x38);
      lVar6 = *(long *)(param_1 + 0x10);
      while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
        lVar6 = *(long *)(lVar6 + 0x10);
      }
      FUN_00d4daf4(auStack_98,*(char *)(lVar5 + 0x9d) != '\0',*(char *)(lVar5 + 0x9e) != '\0',
                   *(char *)(lVar5 + 0x9f) != '\0');
      FUN_00d4d354(auStack_98,0);
      bVar2 = FUN_00d4d280(auStack_98,param_2);
      goto LAB_00d51168;
    }
  }
  bVar2 = 0;
LAB_00d51168:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

