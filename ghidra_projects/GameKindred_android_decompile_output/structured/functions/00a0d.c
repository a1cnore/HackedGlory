// functions/00a0d — 16 functions
#include "libGameKindred.h"




void FUN_00a0d168(undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
  fVar2 = (float)FUN_00a0bf68();
  fVar2 = *(float *)(param_4 + 0xa0) - fVar2;
  param_2 = *(float *)(param_4 + 0xa4) - param_2;
  param_3 = *(float *)(param_4 + 0xa8) - param_3;
  _local_58 = CONCAT44(param_2,fVar2);
  local_50 = param_3;
  if (fVar4 <= 0.0) {
    if (((param_5 & 1) != 0) &&
       (fVar4 = fVar2 * fVar2 + param_2 * param_2 + param_3 * param_3,
       *(float *)(param_4 + 0x88) * *(float *)(param_4 + 0x88) < fVar4)) {
      fVar3 = SQRT(fVar4);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(fVar4);
      }
      fVar4 = *(float *)(param_4 + 0x88);
      local_50 = (param_3 / fVar3) * fVar4;
      _local_58 = CONCAT44((param_2 / fVar3) * fVar4,(fVar2 / fVar3) * fVar4);
    }
  }
  else {
    fVar4 = fVar2 * fVar2 + param_2 * param_2 + param_3 * param_3;
    if (1e-08 <= fVar4) {
      fVar3 = SQRT(fVar4);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(fVar4);
      }
      local_58 = fVar2 / fVar3;
      fStack_54 = param_2 / fVar3;
      local_50 = param_3 / fVar3;
    }
    else {
      local_58 = (float)DAT_03218f30;
      fStack_54 = (float)((ulong)DAT_03218f30 >> 0x20);
      local_50 = DAT_03218f38;
    }
    fVar2 = *(float *)(*(long *)(param_4 + 0x28) + 0x5c);
    local_50 = fVar2 * local_50;
    _local_58 = CONCAT44(fVar2 * fStack_54,fVar2 * local_58);
  }
  FUN_00a105a8(param_4,&local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a0d2f4(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  
  fVar2 = (float)FUN_00a0bf68();
  fVar2 = *(float *)(param_4 + 0xa0) - fVar2;
  uVar4 = (ulong)(uint)fVar2;
  param_2 = *(float *)(param_4 + 0xa4) - param_2;
  param_3 = *(float *)(param_4 + 0xa8) - param_3;
  *(float *)(param_4 + 0xc4) = fVar2;
  *(float *)(param_4 + 200) = param_2;
  fVar2 = fVar2 * fVar2 + param_2 * param_2 + param_3 * param_3;
  *(float *)(param_4 + 0xcc) = param_3;
  if (*(float *)(param_4 + 0x88) * *(float *)(param_4 + 0x88) < fVar2) {
    fVar3 = SQRT(fVar2);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar2);
    }
    param_3 = *(float *)(param_4 + 0x88);
    uVar4 = CONCAT44(((float)((ulong)*(undefined8 *)(param_4 + 0xc4) >> 0x20) / fVar3) * param_3,
                     ((float)*(undefined8 *)(param_4 + 0xc4) / fVar3) * param_3);
    param_3 = (*(float *)(param_4 + 0xcc) / fVar3) * param_3;
    *(ulong *)(param_4 + 0xc4) = uVar4;
    *(float *)(param_4 + 0xcc) = param_3;
  }
  uVar1 = *(undefined8 *)(param_4 + 0x100);
  atan2f((float)uVar4,param_3);
  FUN_009d1aa0(uVar1);
  return;
}




void FUN_00a0d39c(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x94;
  iVar2 = FUN_008ff0d4(lVar1);
  if ((iVar2 == 0) &&
     ((iVar2 = FUN_008ff0dc(lVar1), iVar2 == param_2 ||
      (iVar2 = FUN_008ff0ec(lVar1), iVar2 == param_3)))) {
    uVar3 = FUN_00a0c8b0(param_1);
    if ((uVar3 & 1) != 0) {
      FUN_00a0c778(param_1);
    }
    iVar2 = FUN_0092f28c();
    if (((iVar2 == 1) && (uVar3 = FUN_009f1f70(9), (uVar3 & 1) != 0)) &&
       (uVar3 = FUN_009f1f70(10), (uVar3 & 1) != 0)) {
      FUN_00a0c778(param_1);
      return;
    }
  }
  return;
}




void FUN_00a0d444(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_008ff0d4(param_1 + 0x94);
  if (((iVar1 == 1) && (iVar1 = FUN_008ff0e4(param_1 + 0x94), iVar1 == param_2)) &&
     (uVar2 = FUN_00a0c8b0(param_1), (uVar2 & 1) != 0)) {
    FUN_00a0c778(param_1);
    return;
  }
  return;
}




void FUN_00a0d4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = param_1;
  uStack_54 = param_2;
  local_50 = param_3;
  local_68 = FUN_00a0bf68();
  uStack_64 = param_2;
  local_60 = param_3;
  uVar3 = FUN_00a0cd4c(param_4,&local_58,&local_68);
  uVar4 = FUN_00a0dd34(param_4,&local_58);
  uVar5 = 0;
  if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
    lVar8 = *(long *)(param_4 + 0x10);
    if (lVar8 != 0) {
      uVar10 = 0x10000;
LAB_00a0d56c:
      do {
        do {
          lVar9 = lVar8;
          lVar8 = FUN_019865b4(*(undefined8 *)(lVar9 + 8),0xfb380daa);
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 8))(lVar9);
          }
          if (((uVar10 & 0xffff) < uVar10 >> 0x10) && (lVar8 = *(long *)(lVar9 + 0x18), lVar8 != 0))
          {
            uVar10 = uVar10 & 0xffff0000 | uVar10 + 1 & 0xffff;
            goto LAB_00a0d56c;
          }
          if ((uVar10 & 0xffff) == 0) goto LAB_00a0d5bc;
          lVar8 = *(long *)(lVar9 + 0x20);
        } while (*(long *)(lVar9 + 0x20) != 0);
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((lVar9 == 0) || (uVar1 = uVar10 - 1 & 0xffff, uVar1 == 0)) break;
        uVar10 = uVar1 | uVar10 & 0xffff0000;
        while (lVar8 = *(long *)(lVar9 + 0x20), lVar8 == 0) {
          if ((uVar10 - 1 & 0xffff) == 0) goto LAB_00a0d5bc;
          lVar9 = *(long *)(lVar9 + 0x10);
          uVar10 = uVar10 & 0xffff0000 | uVar10 - 1 & 0xffff;
          if (lVar9 == 0) goto LAB_00a0d5bc;
        }
      } while( true );
    }
LAB_00a0d5bc:
    plVar6 = *(long **)(param_4 + 0x48);
    uVar5 = *(undefined8 *)(param_4 + 0x70);
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else if (*(int *)(param_4 + 0x50) == (int)plVar6[1]) {
      uVar7 = (**(code **)(*plVar6 + 0x10))();
    }
    else {
      *(undefined8 *)(param_4 + 0x48) = 0;
      uVar7 = 0;
      *(undefined4 *)(param_4 + 0x50) = DAT_03214ce8;
    }
    FUN_00a1fb8c(uVar5,uVar7,param_4 + 0x94,&local_58);
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




undefined8 FUN_00a0d64c(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
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
  fVar8 = (float)FUN_00d9dc10(uVar3,param_2);
  fVar9 = *(float *)(param_1 + 0x88);
  if ((fVar8 <= fVar9) || (uVar3 = 0, *(char *)(*(long *)(param_1 + 0x28) + 1) != '\0')) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      uVar7 = 0x10000;
LAB_00a0d728:
      do {
        do {
          lVar6 = lVar5;
          lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0xd22b0c6a);
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 8))(lVar6,param_2,fVar8 <= fVar9);
          }
          if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
            uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
            goto LAB_00a0d728;
          }
          if ((uVar7 & 0xffff) == 0) goto LAB_00a0d780;
          lVar5 = *(long *)(lVar6 + 0x20);
        } while (*(long *)(lVar6 + 0x20) != 0);
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
        uVar7 = uVar1 | uVar7 & 0xffff0000;
        while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
          if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00a0d780;
          lVar6 = *(long *)(lVar6 + 0x10);
          uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
          if (lVar6 == 0) goto LAB_00a0d780;
        }
      } while( true );
    }
LAB_00a0d780:
    plVar2 = *(long **)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    if (plVar2 == (long *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)(param_1 + 0x50) == (int)plVar2[1]) {
      uVar4 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
    FUN_00a1fc4c(uVar3,uVar4,param_1 + 0x94,*(undefined4 *)(param_2 + 0x260));
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00a0d7fc(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_98 [4];
  float local_88 [4];
  long local_78 [6];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((((*(byte *)(param_1 + 0x90) & 1) != 0) && (*param_2 != 0)) &&
     ((*(byte *)(*param_2 + 0x2f4) & 1) == 0)) {
    uVar4 = FUN_00a0c000(param_1);
    FUN_00d4dac4(uVar4,1);
    plVar5 = *(long **)(param_1 + 0x58);
    uVar6 = 0;
    if (plVar5 != (long *)0x0) {
      if (*(int *)(param_1 + 0x60) == (int)plVar5[1]) {
        uVar6 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
      }
    }
    uVar2 = FUN_00da2eb4(uVar6);
    FUN_00cac868(param_3,uVar2,local_88);
    FUN_00d4db48(0x3fb33333,uVar4,local_88);
    uVar3 = FUN_00d9e840(uVar4,local_78,6,0);
    if (uVar3 != 0) {
      fVar11 = 1.9599999;
      lVar7 = 0;
      uVar8 = (ulong)uVar3;
      plVar5 = local_78;
      do {
        FUN_00d55794(*plVar5,local_98,0);
        fVar9 = (float)local_98._4_8_ - (float)local_88._4_8_;
        fVar10 = SUB84(local_98._4_8_,4) - SUB84(local_88._4_8_,4);
        fVar9 = (local_98[0] - local_88[0]) * (local_98[0] - local_88[0]) + fVar9 * fVar9 +
                fVar10 * fVar10;
        if (fVar9 < fVar11) {
          lVar7 = *plVar5;
          fVar11 = fVar9;
        }
        uVar8 = uVar8 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar8 != 0);
      if (lVar7 != 0) {
        *param_2 = lVar7;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00a0d980(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x120) == param_2 && *(long *)(param_1 + 0x120) != 0;
}




long FUN_00a0d99c(long param_1)

{
  return param_1 + 0x94;
}




undefined8 FUN_00a0d9a4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
}




undefined4 FUN_00a0d9b0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
        puVar3 = (undefined4 *)(lVar2 + 0x260);
        goto LAB_00a0da1c;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
  }
  puVar3 = &DAT_01bc8f90;
LAB_00a0da1c:
  return *puVar3;
}




void FUN_00a0da30(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        lVar5 = param_1 + 0x94;
        iVar1 = FUN_008ff0d4(lVar5);
        if (iVar1 == 0) {
          lVar6 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          lVar6 = *(long *)(lVar6 + 0x18);
          while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          iVar1 = FUN_00d5401c(lVar6,param_2);
          iVar2 = FUN_008ff0dc(lVar5);
          if (iVar1 == iVar2) {
            uVar3 = FUN_00d5401c(lVar6,param_3);
            lVar7 = FUN_00d53900(lVar6,uVar3);
            if (lVar7 != 0) {
              FUN_008ff0a0(lVar5);
              FUN_008ff0b8(lVar5,uVar3);
              uVar3 = FUN_00d53b5c(lVar6,uVar3);
              *(undefined4 *)(param_1 + 0x88) = uVar3;
              FUN_009d8bbc(*(undefined8 *)(param_1 + 0x68));
              return;
            }
            goto LAB_00a0db50;
          }
        }
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
  }
LAB_00a0db50:
  FUN_00a0c778(param_1);
  return;
}




void FUN_00a0db7c(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_2 >> 5 & 1) != 0) {
    iVar1 = FUN_008ff0d4(param_1 + 0x94);
    if (iVar1 == 0) {
      lVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
      lVar3 = *(long *)(lVar3 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      uVar2 = FUN_008ff0dc(param_1 + 0x94);
      uVar4 = FUN_00d547e8(lVar3,uVar2);
      if ((uVar4 & 1) == 0) {
        FUN_00a0c778(param_1);
        return;
      }
    }
  }
  return;
}




undefined8 FUN_00a0dc18(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar1 = param_1 + 0x94;
  iVar2 = FUN_008ff0d4(lVar1);
  if (iVar2 == 1) {
    lVar6 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
    lVar6 = *(long *)(lVar6 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_03130aa8))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    uVar3 = FUN_008ff0e4(lVar1);
    uVar7 = FUN_00d73574(lVar6,uVar3);
    if ((uVar7 & 1) != 0) {
      uVar3 = FUN_008ff0e4(lVar1);
      uVar5 = FUN_00d736e0(lVar6,uVar3);
      return uVar5;
    }
  }
  else if (iVar2 == 0) {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
    }
    uVar3 = FUN_008ff0dc(lVar1);
    uVar5 = FUN_00d5867c(uVar5,uVar3);
    return uVar5;
  }
  return 0;
}




undefined4 FUN_00a0dd34(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_e8 [12];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 auStack_a0 [96];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(*(long *)(param_1 + 0x28) + 8) == '\0') {
    local_d8 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc);
    local_dc = 0;
    uStack_d4 = 0x41200000;
    plVar4 = *(long **)(param_1 + 0x48);
    local_d0 = local_d8;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
        lVar5 = (**(code **)(*plVar4 + 0x10))();
        if (lVar5 != 0) {
          plVar4 = *(long **)(param_1 + 0x48);
          uVar6 = 0;
          if (plVar4 != (long *)0x0) {
            if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
              uVar6 = (**(code **)(*plVar4 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x48) = 0;
              uVar6 = 0;
              *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
            }
          }
          uVar6 = FUN_00da2eb4(uVar6);
          uVar7 = FUN_00ef0108(uVar6,param_2,&local_dc,param_2,&local_d8);
          if ((uVar7 & 1) != 0) goto LAB_00a0dd68;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
    }
    FUN_00d4d9e8(auStack_a0);
    FUN_00d4dabc(auStack_a0,0x1000);
    FUN_00d4db70(0x3c23d70a,auStack_a0,param_2);
    uVar3 = 1;
    FUN_00d4dcdc(auStack_a0,1);
    iVar2 = FUN_00d9e840(auStack_a0,auStack_40,1,0);
    if (iVar2 != 1) {
      plVar4 = *(long **)(param_1 + 0x48);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(param_1 + 0x50) != (int)plVar4[1]) {
          *(undefined8 *)(param_1 + 0x48) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
          goto LAB_00a0df7c;
        }
        lVar5 = (**(code **)(*plVar4 + 0x10))();
        if (lVar5 != 0) {
          plVar4 = *(long **)(param_1 + 0x48);
          uVar6 = 0;
          if (plVar4 != (long *)0x0) {
            if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
              uVar6 = (**(code **)(*plVar4 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x48) = 0;
              uVar6 = 0;
              *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
            }
          }
          FUN_00d55794(uVar6,auStack_e8,0);
          plVar4 = *(long **)(param_1 + 0x48);
          uVar6 = 0;
          if (plVar4 != (long *)0x0) {
            if (*(int *)(param_1 + 0x50) == (int)plVar4[1]) {
              uVar6 = (**(code **)(*plVar4 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x48) = 0;
              uVar6 = 0;
              *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
            }
          }
          uVar3 = FUN_00da2eb4(uVar6);
          FUN_00da32b0(auStack_c8,auStack_e8,param_2,uVar3);
          uVar3 = 1;
          local_a8 = 1;
          FUN_00da32dc(auStack_c8,param_2,0);
          goto LAB_00a0df7c;
        }
      }
      uVar3 = 0;
    }
  }
  else {
LAB_00a0dd68:
    uVar3 = 1;
  }
LAB_00a0df7c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0dfa8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  
  *(undefined1 *)(param_1 + 0x119) = 1;
  if (*(char *)(param_1 + 0x11b) != '\0') {
    return;
  }
  FUN_00a0ce78(param_1);
  lVar3 = FUN_00a1f2bc();
  plVar8 = *(long **)(lVar3 + 0x10);
  if (plVar8 == (long *)0x0) {
    lVar4 = 0;
  }
  else if (*(int *)(lVar3 + 0x18) == (int)plVar8[1]) {
    lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    *(undefined8 *)(lVar3 + 0x10) = 0;
    lVar4 = 0;
    *(undefined4 *)(lVar3 + 0x18) = DAT_03214ce8;
  }
  plVar8 = (long *)FUN_00a1f2bc();
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    lVar3 = 0;
  }
  else if ((int)plVar8[1] == (int)plVar9[1]) {
    lVar3 = (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else {
    *plVar8 = 0;
    lVar3 = 0;
    *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x118);
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x18) != '\0') {
    switch(iVar1) {
    case 0:
    case 4:
    case 5:
    case 6:
      goto switchD_00a0e0b8_caseD_0;
    case 1:
switchD_00a0e0b8_caseD_1:
      plVar8 = *(long **)(param_1 + 0x48);
      if (plVar8 == (long *)0x0) {
        uVar6 = 0;
      }
      else if (*(int *)(param_1 + 0x50) == (int)plVar8[1]) {
        uVar6 = (**(code **)(*plVar8 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x48) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      }
      FUN_00a0e7ec(param_1,uVar6);
      return;
    case 2:
      *(undefined4 *)(param_1 + 0xcc) = DAT_03218f38;
      *(undefined8 *)(param_1 + 0xc4) = DAT_03218f30;
      FUN_00a10670(param_1);
      return;
    default:
      return;
    }
  }
  if (iVar1 - 4U < 4) {
LAB_00a0e0e8:
    if ((lVar4 == 0) ||
       (uVar5 = FUN_00d4d280(*(undefined8 *)(param_1 + 0x40),lVar4), (uVar5 & 1) == 0)) {
      if ((lVar3 != 0) &&
         (uVar5 = FUN_00d4d280(*(undefined8 *)(param_1 + 0x40),lVar3), (uVar5 & 1) != 0)) {
        uVar2 = *(undefined4 *)(lVar3 + 0x30);
        *(long *)(param_1 + 0x108) = lVar3 + 0x28;
        *(undefined4 *)(param_1 + 0x110) = uVar2;
        uVar6 = FUN_00a1f2bc();
        goto LAB_00a0e374;
      }
      plVar8 = *(long **)(param_1 + 0x58);
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      if (plVar8 == (long *)0x0) {
        uVar7 = 0;
      }
      else if (*(int *)(param_1 + 0x60) == (int)plVar8[1]) {
        uVar7 = (**(code **)(*plVar8 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
        uVar7 = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
      }
      lVar4 = FUN_00a1c68c(*(float *)(param_1 + 0x88),*(float *)(param_1 + 0x88) + 3.0,uVar6,uVar7,0
                           ,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x118));
      if (lVar4 == 0) {
        return;
      }
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 0) {
        return;
      }
      goto LAB_00a0e0e8;
    }
    plVar8 = *(long **)(param_1 + 0x48);
    if (plVar8 == (long *)0x0) {
      return;
    }
    if (*(int *)(param_1 + 0x50) != (int)plVar8[1]) {
LAB_00a0e384:
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      return;
    }
    lVar3 = (**(code **)(*plVar8 + 0x10))();
    if (lVar3 == 0) {
      return;
    }
    plVar8 = *(long **)(param_1 + 0x48);
    if (plVar8 == (long *)0x0) {
      lVar4 = 0;
    }
    else if (*(int *)(param_1 + 0x50) == (int)plVar8[1]) {
      lVar4 = (**(code **)(*plVar8 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
      lVar4 = 0;
    }
  }
  lVar3 = lVar4;
  uVar2 = *(undefined4 *)(lVar3 + 0x30);
  *(long *)(param_1 + 0x108) = lVar3 + 0x28;
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  uVar6 = FUN_00a1f2bc();
LAB_00a0e374:
  FUN_00a1aa40(uVar6,lVar3);
  return;
switchD_00a0e0b8_caseD_0:
  if (((lVar4 == 0) ||
      (uVar5 = FUN_00d4d280(*(undefined8 *)(param_1 + 0x40),lVar4), (uVar5 & 1) == 0)) &&
     ((lVar3 == 0 ||
      (uVar5 = FUN_00d4d280(*(undefined8 *)(param_1 + 0x40),lVar3), lVar4 = lVar3, (uVar5 & 1) == 0)
      ))) {
    plVar8 = *(long **)(param_1 + 0x58);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    if (plVar8 == (long *)0x0) {
      uVar7 = 0;
    }
    else if (*(int *)(param_1 + 0x60) == (int)plVar8[1]) {
      uVar7 = (**(code **)(*plVar8 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar7 = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
    }
    lVar4 = FUN_00a1c68c(*(float *)(param_1 + 0x88),*(float *)(param_1 + 0x88) + 3.0,uVar6,uVar7,0,
                         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x118));
    if (lVar4 == 0) {
      plVar8 = *(long **)(param_1 + 0x58);
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (*(int *)(param_1 + 0x60) != (int)plVar8[1]) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
        return;
      }
      lVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,0);
      if (lVar3 == 0) {
        return;
      }
      plVar8 = *(long **)(param_1 + 0x48);
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (*(int *)(param_1 + 0x50) != (int)plVar8[1]) goto LAB_00a0e384;
      lVar3 = (**(code **)(*plVar8 + 0x10))();
      if (lVar3 == 0) {
        return;
      }
      plVar8 = *(long **)(param_1 + 0x58);
      if (plVar8 == (long *)0x0) {
        lVar3 = 0;
      }
      else if (*(int *)(param_1 + 0x60) == (int)plVar8[1]) {
        lVar3 = (**(code **)(*plVar8 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
        lVar3 = 0;
        *(undefined4 *)(param_1 + 0x60) = DAT_03214ce8;
      }
      plVar8 = *(long **)(param_1 + 0x48);
      lVar4 = 0;
      if (plVar8 != (long *)0x0) {
        if (*(int *)(param_1 + 0x50) == (int)plVar8[1]) {
          lVar4 = (**(code **)(*plVar8 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x48) = 0;
          lVar4 = 0;
          *(undefined4 *)(param_1 + 0x50) = DAT_03214ce8;
        }
      }
      if (lVar3 != lVar4) {
        return;
      }
      goto switchD_00a0e0b8_caseD_1;
    }
  }
  FUN_00a0e704(param_1,lVar4);
  return;
}

