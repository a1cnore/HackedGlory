// functions/10063 — 331 functions
#include "GameKindred.h"




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




undefined4 FUN_1006300e4(long param_1,undefined8 param_2)

{
  undefined4 local_14;
  
  local_14 = 0;
  FUN_100570618(*(undefined8 *)(param_1 + 0x90),param_2,&local_14);
  return local_14;
}




int FUN_100630110(long param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    return 2;
  }
  if (*param_2 == 1) {
    return 3;
  }
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x160b0);
  }
  return iVar1;
}




undefined8 FUN_100630150(long param_1)

{
  undefined8 local_18;
  
  FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 500),&local_18);
  return local_18;
}




ulong FUN_100630180(long param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                   int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 local_44;
  
  if (param_6 == 1) {
    if (param_5 == 0) {
      lVar7 = *(long *)(param_1 + 0x1c8);
      if (((int)param_2 != 0) || (uVar4 = FUN_100630348(param_1,0), (int)uVar4 == 0)) {
        if (*(int *)(param_1 + 0x210) == 0) {
          iVar6 = 2;
        }
        else if (*(int *)(param_1 + 0x210) == 1) {
          iVar6 = 3;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x214);
          if (iVar6 == 0) {
            iVar6 = *(int *)(*(long *)(param_1 + 0x90) + 0x160b0);
          }
        }
        local_44 = 0;
        FUN_100570618(*(undefined8 *)(param_1 + 0x90),iVar6,&local_44);
        if (param_4 != 0) {
          *(int *)(param_4 + 0x20) = iVar6;
          **(undefined4 **)(param_4 + 8) = local_44;
          **(undefined4 **)(param_4 + 0x10) = 0;
        }
        if ((int)param_2 != 0) {
          uVar4 = FUN_10062ffa4(param_1,*(undefined4 *)(param_3 + 0x20));
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          if (((*(long *)(lVar7 + 0x40) == 0) && (*(float *)(lVar7 + 0x7c) == 1.0)) &&
             (*(float *)(lVar7 + 0x88) == 1.0)) {
            return 6;
          }
        }
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xb;
    }
  }
  else {
    uVar2 = **(undefined4 **)(param_3 + 8);
    iVar6 = **(int **)(param_4 + 8);
    iVar3 = *(int *)(param_3 + 0x20);
    iVar5 = iVar3;
    if (iVar3 == 0) {
      iVar5 = *(int *)(*(long *)(param_1 + 0x90) + 0x160b0);
    }
    *(int *)(param_1 + 0x1f8) = iVar5;
    if (*(int *)(param_1 + 500) != iVar5) {
      *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
    }
    uVar4 = FUN_100613a18(*(undefined8 *)(param_1 + 0x1c8),**(undefined8 **)(param_4 + 0x18),
                          **(undefined8 **)(param_3 + 0x18),
                          *(int *)(param_4 + 0x20) == 1 || iVar3 == 1,iVar6,uVar2,0,param_2,1);
    if ((int)uVar4 == 0) {
      uVar1 = 0;
      if (iVar6 != **(int **)(param_4 + 8)) {
        uVar1 = 0x1c;
      }
      uVar4 = (ulong)uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_100630348(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x270) <= *(int *)(param_1 + 0x26c)) &&
     (*(char *)(param_1 + 0x274) == '\0')) {
    return 0;
  }
  *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x270);
  if (*(int *)(param_1 + 0x100) != 0) {
    uVar1 = *(int *)(param_1 + 0x100) - 1;
    if (uVar1 < 8) {
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(&DAT_10117d940 + (long)(int)uVar1 * 4);
      if ((uVar1 & 0xfffffffb) != 2) goto LAB_1006303d4;
    }
    else {
      *(undefined4 *)(param_1 + 0x1f8) = 1;
    }
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x160b0);
  }
LAB_1006303d4:
  if (((((((((*(char *)(param_1 + 0x274) == '\0') &&
            (*(int *)(param_1 + 500) == *(int *)(param_1 + 0x1f8))) &&
           (*(int *)(param_1 + 0x210) == *(int *)(param_1 + 0x278))) &&
          ((*(int *)(param_1 + 0x214) == *(int *)(param_1 + 0x27c) &&
           (*(float *)(param_1 + 0x218) == *(float *)(param_1 + 0x280))))) &&
         (*(float *)(param_1 + 0x21c) == *(float *)(param_1 + 0x284))) &&
        (((*(float *)(param_1 + 0x220) == *(float *)(param_1 + 0x288) &&
          (*(float *)(param_1 + 0x224) == *(float *)(param_1 + 0x28c))) &&
         ((*(float *)(param_1 + 0x228) == *(float *)(param_1 + 0x290) &&
          (((*(int *)(param_1 + 0x22c) == *(int *)(param_1 + 0x294) &&
            (*(float *)(param_1 + 0x230) == *(float *)(param_1 + 0x298))) &&
           (*(float *)(param_1 + 0x234) == *(float *)(param_1 + 0x29c))))))))) &&
       ((*(float *)(param_1 + 0x238) == *(float *)(param_1 + 0x2a0) &&
        (*(float *)(param_1 + 0x23c) == *(float *)(param_1 + 0x2a4))))) &&
      (((*(float *)(param_1 + 0x240) == *(float *)(param_1 + 0x2a8) &&
        (((*(float *)(param_1 + 0x244) == *(float *)(param_1 + 0x2ac) &&
          (*(int *)(param_1 + 0x248) == *(int *)(param_1 + 0x2b0))) &&
         ((*(float *)(param_1 + 0x24c) == *(float *)(param_1 + 0x2b4) &&
          (((*(float *)(param_1 + 0x250) == *(float *)(param_1 + 0x2b8) &&
            (*(int *)(param_1 + 0x254) == *(int *)(param_1 + 700))) &&
           (*(float *)(param_1 + 600) == *(float *)(param_1 + 0x2c0))))))))) &&
       (((*(float *)(param_1 + 0x25c) == *(float *)(param_1 + 0x2c4) &&
         (*(float *)(param_1 + 0x260) == *(float *)(param_1 + 0x2c8))) &&
        (*(char *)(param_1 + 0x264) == *(char *)(param_1 + 0x2cc))))))) &&
     (*(int *)(param_1 + 0x268) == *(int *)(param_1 + 0x2d0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10062fbb8(param_1,0);
    if (((int)uVar2 == 0) && (uVar2 = FUN_1006309ac(param_1,1), (int)uVar2 == 0)) {
      if (*(char *)(param_1 + 0x274) == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_100612958(*(undefined8 *)(param_1 + 0x1c8),0);
        if ((int)uVar2 == 0) {
          uVar2 = 0;
          *(undefined1 *)(param_1 + 0x274) = 0;
        }
      }
    }
  }
  return uVar2;
}




void FUN_1006305c0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_100569350((param_4 / 360.0) * param_1 + param_3,(param_4 / 360.0) * param_2,0,
                (param_2 / 180.0) * param_5,param_6,param_8,param_7);
  return;
}




void FUN_100630600(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  FUN_100569350(param_2 - param_1 * 0.5,0,param_3 / 1.4142135,param_5,param_7,param_6);
  FUN_100569350(param_1 * 0.5 + param_2,0,param_3 / 1.4142135,param_4,param_5,param_7,param_6 + 4);
  return;
}




void FUN_10063068c(ulong param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
                  ulong param_6,undefined8 param_7,long param_8,long param_9,undefined8 param_10,
                  int param_11)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_68;
  
  iVar1 = *(int *)(param_8 + 500);
  if (iVar1 == 3) {
    if (param_11 == 0) {
      FUN_1005693f8(param_1,param_2,param_3,param_6,param_7,*(undefined8 *)(param_8 + 0x200),
                    param_10,param_9);
      return;
    }
    if (param_11 != 1) {
      return;
    }
    uVar2 = *(undefined8 *)(param_8 + 0x200);
    param_6 = (ulong)(uint)((float)param_6 / 1.4142135);
    FUN_100569350(param_5 - param_4 * 0.5,0,param_6,param_7,uVar2,param_10,param_9);
    param_1 = (ulong)(uint)(param_4 * 0.5 + param_5);
    param_9 = param_9 + 4;
    param_2 = 0;
  }
  else {
    if (iVar1 != 2) {
      FUN_1005705bc(*(undefined8 *)(param_8 + 0x90),iVar1,&local_68);
      FUN_1005698c4(param_1,param_2,param_3,param_6,param_7,local_68,
                    *(undefined8 *)(param_8 + 0x200),param_10,param_9,0);
      return;
    }
    uVar2 = *(undefined8 *)(param_8 + 0x200);
  }
  FUN_100569350(param_1,param_2,param_6,param_7,uVar2,param_10,param_9);
  return;
}




void FUN_10063081c(long param_1)

{
  FUN_10056a458(*(undefined4 *)(param_1 + 0x23c),*(undefined4 *)(param_1 + 0x24c),
                *(undefined4 *)(param_1 + 0x250),
                *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x15a48),
                *(undefined4 *)(param_1 + 0x248),param_1 + 0x1dc);
  return;
}




void FUN_100630848(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x254) == 1) {
    fVar4 = *(float *)(param_1 + 0x240);
    fVar5 = *(float *)(param_1 + 600);
    fVar7 = fVar5 * 5.0;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 < fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar7) && !NAN(fVar4)) {
        bVar1 = fVar7 < fVar4;
        bVar2 = fVar7 == fVar4;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 360.0 / (((fVar4 * fVar4) / (fVar5 * fVar5)) * 4.0 + 1.0);
    }
    fVar6 = *(float *)(param_1 + 0x260);
    if ((*(float *)(param_1 + 0x260) <= fVar8) && (fVar6 = 0.0, 0.0 < fVar5 && fVar4 < fVar7)) {
      fVar6 = 360.0 / (((fVar4 * fVar4) / (fVar5 * fVar5)) * 4.0 + 1.0);
    }
    *(float *)(param_1 + 0x1e8) = fVar6;
    return;
  }
  if (*(int *)(param_1 + 0x254) != 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    return;
  }
  fVar4 = *(float *)(param_1 + 0x240);
  fVar5 = *(float *)(param_1 + 0x24c) + *(float *)(param_1 + 0x24c);
  fVar7 = fVar5 * 5.0;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (0.0 < fVar5) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar4)) {
      bVar1 = fVar7 < fVar4;
      bVar2 = fVar7 == fVar4;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    return;
  }
  *(float *)(param_1 + 0x1e8) = 360.0 / (((fVar4 * fVar4) / (fVar5 * fVar5)) * 4.0 + 1.0);
  return;
}




float FUN_100630964(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  
  fVar4 = param_2 * 5.0;
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (0.0 < param_2) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4) && !NAN(param_1)) {
      bVar1 = fVar4 < param_1;
      bVar2 = fVar4 == param_1;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    return 360.0 / (((param_1 * param_1) / (param_2 * param_2)) * 4.0 + 1.0);
  }
  return 0.0;
}




void FUN_1006309ac(long param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  if (*(int *)(param_1 + 0x210) == 1) {
    FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 500),&local_160);
    if (*(int **)(local_160 + 0x98) == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x3f3504f3;
      if (**(int **)(local_160 + 0x98) < 0) {
        uVar5 = 0;
      }
    }
    puVar3 = auStack_158;
    FUN_100568738(*(undefined4 *)(param_1 + 0x1ec),2,8,auStack_158);
    FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 500),&local_160);
    FUN_100569090(*(undefined4 *)(param_1 + 0x218),uVar5,0x3f800000,local_160,8,auStack_158);
  }
  else if (*(int *)(param_1 + 0x210) == 0) {
    if ((*(uint *)(param_1 + 500) & 0xfffffffe) == 2) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(uint *)(param_1 + 500),&local_160);
      fVar6 = 1.0;
      if (1.0 < SQRT((float)*(int *)(local_160 + 0x14))) {
        FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 500),&local_160);
        fVar6 = SQRT((float)*(int *)(local_160 + 0x14));
      }
      puVar3 = auStack_158;
      FUN_100568738(*(undefined4 *)(param_1 + 0x1ec),1,8,auStack_158);
      FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 500),&local_160);
      FUN_1005687ac(1.0 / fVar6,0x3f800000,local_160,auStack_158);
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x1d8);
    FUN_1005705bc(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 500),&local_160);
    if ((((*(int **)(local_160 + 0x98) == (int *)0x0) || (**(int **)(local_160 + 0x98) == -1)) &&
        (piVar2 = *(int **)(*(long *)(param_1 + 0x200) + 0x98), piVar2 != (int *)0x0)) &&
       (-1 < *piVar2)) {
      if (*(char *)(param_1 + 0x264) == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x1d8);
      }
    }
    FUN_100568738(8,8,8,auStack_158);
    fVar6 = *(float *)(param_1 + 0x25c);
    if (fVar6 == 0.0) {
      uVar7 = *(undefined4 *)(param_1 + 0x21c);
      uVar8 = *(undefined4 *)(param_1 + 0x220);
      uVar9 = *(undefined4 *)(param_1 + 0x224);
      uVar10 = *(undefined4 *)(param_1 + 0x230);
      uVar11 = *(undefined4 *)(param_1 + 0x234);
      uVar1 = *(undefined4 *)(param_1 + 0x22c);
      fVar6 = 1.0;
    }
    else {
      if (fVar6 == 1.0) {
        uVar7 = *(undefined4 *)(param_1 + 0x238);
        uVar8 = *(undefined4 *)(param_1 + 0x1e8);
        uVar9 = *(undefined4 *)(param_1 + 0x244);
        uVar10 = *(undefined4 *)(param_1 + 0x230);
        uVar11 = *(undefined4 *)(param_1 + 0x234);
        fVar6 = *(float *)(param_1 + 0x1dc);
      }
      else {
        FUN_10063068c(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x220),
                      *(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x230),
                      *(undefined4 *)(param_1 + 0x234),uVar5,1.0 - fVar6,param_1,auStack_158,8,
                      *(undefined4 *)(param_1 + 0x22c));
        uVar7 = *(undefined4 *)(param_1 + 0x238);
        uVar8 = *(undefined4 *)(param_1 + 0x1e8);
        uVar9 = *(undefined4 *)(param_1 + 0x244);
        uVar10 = *(undefined4 *)(param_1 + 0x230);
        uVar11 = *(undefined4 *)(param_1 + 0x234);
        fVar6 = *(float *)(param_1 + 0x1dc) * *(float *)(param_1 + 0x25c);
      }
      uVar1 = 0;
    }
    puVar3 = auStack_158;
    FUN_10063068c(uVar7,uVar8,uVar9,uVar10,uVar11,uVar5,fVar6,param_1,auStack_158,8,uVar1);
  }
  FUN_100614548(*(long *)(param_1 + 0x1c8),puVar3,*(undefined4 *)(param_1 + 0x1f0),
                *(undefined4 *)(param_1 + 0x1ec),8,
                (ulong)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x40) != 0) << 6,param_2 ^ 1);
  if (lVar4 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100630cb8(float param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = 0x1f;
  switch(param_3) {
  case 1:
    fVar4 = -100.0;
    if ((-100.0 <= param_1) && (fVar4 = 100.0, param_1 <= 100.0)) {
      fVar4 = param_1;
    }
    *(float *)(param_2 + 0x280) = fVar4;
    break;
  case 2:
    fVar4 = -180.0;
    if ((-180.0 <= param_1) && (fVar4 = 180.0, param_1 <= 180.0)) {
      fVar4 = param_1;
    }
    *(float *)(param_2 + 0x284) = fVar4;
    break;
  case 3:
    if (0.0 <= param_1) {
      fVar4 = 360.0;
      if (param_1 <= 360.0) {
        fVar4 = param_1;
      }
      *(float *)(param_2 + 0x288) = fVar4;
    }
    else {
      *(undefined4 *)(param_2 + 0x288) = 0;
    }
    break;
  case 4:
    fVar4 = -180.0;
    if ((-180.0 <= param_1) && (fVar4 = 180.0, param_1 <= 180.0)) {
      fVar4 = param_1;
    }
    *(float *)(param_2 + 0x28c) = fVar4;
    break;
  case 5:
    fVar4 = -80.0;
    if ((-80.0 <= param_1) && (fVar4 = 20.0, param_1 <= 20.0)) {
      fVar4 = param_1;
    }
    *(float *)(param_2 + 0x290) = fVar4;
    break;
  default:
    goto switchD_100630cd8_caseD_6;
  case 7:
    fVar4 = -180.0;
    if ((-180.0 <= param_1) && (fVar4 = 180.0, param_1 <= 180.0)) {
      fVar4 = param_1;
    }
    *(float *)(param_2 + 0x298) = fVar4;
    break;
  case 8:
    fVar4 = -180.0;
    if ((-180.0 <= param_1) && (fVar4 = 180.0, param_1 <= 180.0)) {
      fVar4 = param_1;
    }
    *(float *)(param_2 + 0x29c) = fVar4;
    break;
  case 0xb:
    if (0.0 <= param_1) {
      iVar1 = 4;
      if (param_1 <= 4.0) {
        iVar1 = (int)param_1;
      }
      *(int *)(param_2 + 0x2b0) = iVar1;
    }
    else {
      *(undefined4 *)(param_2 + 0x2b0) = 0;
    }
    break;
  case 0xc:
    if (0.0 <= param_1) {
      fVar4 = 1e+18;
      if (param_1 <= 1e+18) {
        fVar4 = param_1;
      }
      *(float *)(param_2 + 0x2b4) = fVar4;
    }
    else {
      *(undefined4 *)(param_2 + 0x2b4) = 0;
    }
    break;
  case 0xd:
    if (0.0 <= param_1) {
      fVar4 = 1e+18;
      if (param_1 <= 1e+18) {
        fVar4 = param_1;
      }
      *(float *)(param_2 + 0x2b8) = fVar4;
    }
    else {
      *(undefined4 *)(param_2 + 0x2b8) = 0;
    }
    break;
  case 0xe:
    if (0.0 <= param_1) {
      iVar1 = 2;
      if (param_1 <= 2.0) {
        iVar1 = (int)param_1;
      }
      *(int *)(param_2 + 700) = iVar1;
    }
    else {
      *(undefined4 *)(param_2 + 700) = 0;
    }
    break;
  case 0xf:
    if (0.0 <= param_1) {
      fVar4 = 1e+18;
      if (param_1 <= 1e+18) {
        fVar4 = param_1;
      }
      *(float *)(param_2 + 0x2c0) = fVar4;
    }
    else {
      *(undefined4 *)(param_2 + 0x2c0) = 0;
    }
    break;
  case 0x10:
    if (0.0 <= param_1) {
      fVar4 = 360.0;
      if (param_1 <= 360.0) {
        fVar4 = param_1;
      }
      *(float *)(param_2 + 0x2c8) = fVar4;
    }
    else {
      *(undefined4 *)(param_2 + 0x2c8) = 0;
    }
    break;
  case 0x11:
    fVar4 = 1.0;
    if (param_1 <= 1.0) {
      fVar4 = param_1;
    }
    fVar3 = 0.0;
    if (0.0 <= param_1) {
      fVar3 = fVar4;
    }
    *(float *)(param_2 + 0x2c4) = fVar3;
  }
  uVar2 = 0;
  *(int *)(param_2 + 0x270) = *(int *)(param_2 + 0x270) + 1;
switchD_100630cd8_caseD_6:
  return uVar2;
}




undefined8 FUN_100630f7c(long param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  uVar1 = 0x1f;
  switch(param_2) {
  case 1:
    uVar2 = *(undefined4 *)(param_1 + 0x280);
    break;
  case 2:
    uVar2 = *(undefined4 *)(param_1 + 0x284);
    break;
  case 3:
    uVar2 = *(undefined4 *)(param_1 + 0x288);
    break;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x28c);
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x290);
    break;
  default:
    goto switchD_100630fa0_caseD_6;
  case 7:
    uVar2 = *(undefined4 *)(param_1 + 0x298);
    break;
  case 8:
    uVar2 = *(undefined4 *)(param_1 + 0x29c);
    break;
  case 0xb:
    uVar2 = *(undefined4 *)(param_1 + 0x2b0);
    goto LAB_100631004;
  case 0xc:
    uVar2 = *(undefined4 *)(param_1 + 0x2b4);
    break;
  case 0xd:
    uVar2 = *(undefined4 *)(param_1 + 0x2b8);
    break;
  case 0xe:
    uVar2 = *(undefined4 *)(param_1 + 700);
LAB_100631004:
    uVar2 = NEON_ucvtf(uVar2);
    *param_3 = uVar2;
    goto LAB_100631028;
  case 0xf:
    uVar2 = *(undefined4 *)(param_1 + 0x2c0);
    break;
  case 0x10:
    uVar2 = *(undefined4 *)(param_1 + 0x2c8);
    break;
  case 0x11:
    uVar2 = *(undefined4 *)(param_1 + 0x2c4);
  }
  *param_3 = uVar2;
LAB_100631028:
  if (param_4 == (undefined1 *)0x0) {
    return 0;
  }
  uVar1 = 0;
  *param_4 = 0;
switchD_100630fa0_caseD_6:
  return uVar1;
}




undefined8 FUN_10063108c(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1f;
  if (param_2 < 9) {
    if (param_2 == 0) {
      uVar1 = 2;
      if ((int)param_3 < 3) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(param_1 + 0x278) = uVar2;
    }
    else {
      if (param_2 != 6) {
        return 0x1f;
      }
      uVar1 = 1;
      if ((int)param_3 < 2) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(param_1 + 0x294) = uVar2;
    }
  }
  else {
    switch(param_2) {
    case 9:
      *(uint *)(param_1 + 0x2d0) = param_3;
      break;
    default:
      goto switchD_1006310d8_caseD_a;
    case 0xb:
      uVar1 = 4;
      if ((int)param_3 < 5) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(param_1 + 0x2b0) = uVar2;
      break;
    case 0xe:
      uVar1 = 2;
      if ((int)param_3 < 3) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(param_1 + 700) = uVar2;
      break;
    case 0x12:
      *(bool *)(param_1 + 0x2cc) = param_3 != 0;
      break;
    case 0x14:
      uVar1 = 7;
      if ((int)param_3 < 8) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(param_1 + 0x27c) = uVar2;
    }
  }
  uVar3 = 0;
  *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
switchD_1006310d8_caseD_a:
  return uVar3;
}




undefined8 FUN_1006311c0(long param_1,int param_2,uint *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = 0x1f;
  if (param_3 != (uint *)0x0) {
    if (param_2 < 9) {
      if (param_2 == 0) {
        uVar2 = *(uint *)(param_1 + 0x278);
      }
      else {
        if (param_2 != 6) {
          return 0x1f;
        }
        uVar2 = *(uint *)(param_1 + 0x294);
      }
    }
    else {
      switch(param_2) {
      case 9:
        uVar2 = *(uint *)(param_1 + 0x2d0);
        break;
      default:
        goto switchD_1006311fc_caseD_a;
      case 0xb:
        uVar2 = *(uint *)(param_1 + 0x2b0);
        break;
      case 0xe:
        uVar2 = *(uint *)(param_1 + 700);
        break;
      case 0x12:
        uVar2 = (uint)*(byte *)(param_1 + 0x2cc);
        break;
      case 0x14:
        uVar2 = *(uint *)(param_1 + 0x27c);
      }
    }
    *param_3 = uVar2;
    uVar1 = 0;
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 0;
    }
  }
switchD_1006311fc_caseD_a:
  return uVar1;
}




undefined8
FUN_100631278(long param_1,int *param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStack_58 [8];
  float local_38 [8];
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_101444218;
  local_18 = lVar1;
  iVar2 = *param_2;
  if (iVar2 == 1) {
    *param_3 = (float)param_2[1];
    param_3[1] = (float)param_2[2];
    param_3[2] = (float)param_2[3];
    *param_4 = (float)param_2[7];
    param_4[1] = (float)param_2[8];
    param_4[2] = (float)param_2[9];
    fVar6 = SQRT((float)param_2[1] * (float)param_2[1] + (float)param_2[2] * (float)param_2[2] +
                 (float)param_2[3] * (float)param_2[3]);
    *param_5 = fVar6;
  }
  else {
    if (iVar2 < 1) {
      fVar7 = 0.0;
      fVar6 = 3.4028235e+38;
    }
    else {
      fVar6 = 3.4028235e+38;
      pfVar4 = (float *)(param_2 + 3);
      pfVar3 = local_38;
      iVar5 = iVar2;
      do {
        fVar7 = SQRT(pfVar4[-2] * pfVar4[-2] + pfVar4[-1] * pfVar4[-1] + *pfVar4 * *pfVar4);
        *pfVar3 = fVar7;
        if (fVar7 <= fVar6) {
          fVar6 = fVar7;
        }
        iVar5 = iVar5 + -1;
        pfVar4 = pfVar4 + 0xc;
        pfVar3 = pfVar3 + 1;
      } while (iVar5 != 0);
      fVar7 = *(float *)(param_1 + 0x2b8);
      fVar8 = fVar6 + fVar7 * 0.5;
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      if (iVar2 < 1) {
        fVar7 = 0.0;
      }
      else {
        pfVar4 = local_38;
        fVar7 = 0.0;
        pfVar3 = afStack_58;
        iVar5 = iVar2;
        do {
          if (fVar8 <= *pfVar4) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = 1.0 - (*pfVar4 - fVar6) / (fVar8 - fVar6);
            fVar10 = fVar10 * fVar10;
          }
          *pfVar3 = fVar10;
          fVar7 = fVar7 + fVar10;
          iVar5 = iVar5 + -1;
          pfVar4 = pfVar4 + 1;
          pfVar3 = pfVar3 + 1;
        } while (iVar5 != 0);
      }
    }
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    if (0 < iVar2) {
      pfVar4 = (float *)(param_2 + 9);
      pfVar3 = afStack_58;
      do {
        fVar8 = *pfVar3;
        *param_3 = pfVar4[-8] * fVar8 + *param_3;
        param_3[1] = pfVar4[-7] * fVar8 + param_3[1];
        param_3[2] = pfVar4[-6] * fVar8 + param_3[2];
        *param_4 = pfVar4[-2] * fVar8 + *param_4;
        param_4[1] = pfVar4[-1] * fVar8 + param_4[1];
        param_4[2] = *pfVar4 * fVar8 + param_4[2];
        iVar2 = iVar2 + -1;
        pfVar4 = pfVar4 + 0xc;
        pfVar3 = pfVar3 + 1;
      } while (iVar2 != 0);
    }
    fVar7 = 1.0 / fVar7;
    *param_3 = *param_3 * fVar7;
    param_3[1] = fVar7 * param_3[1];
    param_3[2] = fVar7 * param_3[2];
    fVar7 = *param_4;
    fVar10 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar8 * fVar8);
    if (fVar9 <= 0.0) {
      param_4[0] = 0.0;
      param_4[1] = 0.0;
      fVar8 = 0.0;
    }
    else {
      *param_4 = fVar7 / fVar9;
      param_4[1] = fVar10 / fVar9;
      fVar8 = fVar8 / fVar9;
    }
    param_4[2] = fVar8;
    *param_5 = fVar6;
    fVar6 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
  }
  *param_6 = fVar6;
  if (lVar1 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100631528(long param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 local_48;
  undefined4 local_44;
  float local_40 [2];
  float local_38;
  float local_30 [2];
  float local_28;
  
  if (param_2 == 0x13) {
    uVar1 = 0;
  }
  else if (param_2 == 10) {
    if (param_4 == 0x1b4) {
      FUN_100631278(param_1,param_3,local_30,local_40,&local_44,&local_48);
      *(undefined4 *)(param_1 + 0x2a4) = local_44;
      *(undefined4 *)(param_1 + 0x2a8) = local_48;
      if ((local_30[0] != 0.0) || (local_28 != 0.0)) {
        fVar2 = (float)_atan2f();
        *(float *)(param_1 + 0x2a0) = (fVar2 * 180.0) / 3.1415927;
      }
      if ((local_40[0] != 0.0) || (local_38 != 0.0)) {
        fVar2 = (float)_atan2f();
        *(float *)(param_1 + 0x2ac) = (fVar2 * 180.0) / 3.1415927;
      }
      uVar1 = 0;
      *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
    }
    else {
      uVar1 = 0x1f;
    }
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8
FUN_10063162c(long param_1,int param_2,long *param_3,undefined4 *param_4,undefined1 *param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 0x13) {
    FUN_10056a458(*(undefined4 *)(param_1 + 0x2a4),*(undefined4 *)(param_1 + 0x2b4),
                  *(undefined4 *)(param_1 + 0x2b8),
                  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x15a48),
                  *(undefined4 *)(param_1 + 0x2b0),param_1 + 0x1e0);
    *(float *)(param_1 + 0x1e0) =
         (1.0 - *(float *)(param_1 + 0x2c4)) +
         *(float *)(param_1 + 0x2c4) * *(float *)(param_1 + 0x1e0);
    *param_3 = param_1 + 0x1e0;
    *param_4 = 8;
    uVar1 = 0;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




void FUN_1006316d4(undefined8 *param_1)

{
  FUN_10062faa0(*param_1);
  return;
}




undefined8 FUN_1006316dc(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(long *)(lVar2 + 0x208) != 0) {
    FUN_100568558();
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(lVar2 + 0x208),
                  "../../src/fmod_memory.h",0xd4);
    *(undefined8 *)(lVar2 + 0x208) = 0;
  }
  if (*(long *)(lVar2 + 0x1c8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                      ((DSPConnectionI *)(*(long *)(lVar2 + 0x90) + 0x790),
                       SUB81(*(long *)(lVar2 + 0x1c8),0));
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined8 *)(lVar2 + 0x1c8) = 0;
    }
  }
  return uVar1;
}




void FUN_100631758(undefined8 *param_1)

{
  FUN_100630180(*param_1);
  return;
}




void FUN_100631760(undefined8 *param_1)

{
  FUN_100630cb8(*param_1);
  return;
}




void FUN_100631768(undefined8 *param_1)

{
  FUN_100630f7c(*param_1);
  return;
}




undefined8 FUN_100631770(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar3 = 0x1f;
  if (param_2 < 9) {
    if (param_2 == 0) {
      uVar1 = 2;
      if ((int)param_3 < 3) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(lVar4 + 0x278) = uVar2;
    }
    else {
      if (param_2 != 6) {
        return 0x1f;
      }
      uVar1 = 1;
      if ((int)param_3 < 2) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(lVar4 + 0x294) = uVar2;
    }
  }
  else {
    switch(param_2) {
    case 9:
      *(uint *)(lVar4 + 0x2d0) = param_3;
      break;
    default:
      goto switchD_1006317c0_caseD_a;
    case 0xb:
      uVar1 = 4;
      if ((int)param_3 < 5) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(lVar4 + 0x2b0) = uVar2;
      break;
    case 0xe:
      uVar1 = 2;
      if ((int)param_3 < 3) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(lVar4 + 700) = uVar2;
      break;
    case 0x12:
      *(bool *)(lVar4 + 0x2cc) = param_3 != 0;
      break;
    case 0x14:
      uVar1 = 7;
      if ((int)param_3 < 8) {
        uVar1 = param_3;
      }
      uVar2 = 0;
      if ((param_3 & 0x80000000) == 0) {
        uVar2 = uVar1;
      }
      *(uint *)(lVar4 + 0x27c) = uVar2;
    }
  }
  uVar3 = 0;
  *(int *)(lVar4 + 0x270) = *(int *)(lVar4 + 0x270) + 1;
switchD_1006317c0_caseD_a:
  return uVar3;
}




undefined8 FUN_1006318a4(long *param_1,int param_2,uint *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  
  if (param_3 == (uint *)0x0) {
    return 0x1f;
  }
  lVar3 = *param_1;
  uVar1 = 0x1f;
  if (param_2 < 9) {
    if (param_2 == 0) {
      uVar2 = *(uint *)(lVar3 + 0x278);
    }
    else {
      if (param_2 != 6) {
        return 0x1f;
      }
      uVar2 = *(uint *)(lVar3 + 0x294);
    }
  }
  else {
    switch(param_2) {
    case 9:
      uVar2 = *(uint *)(lVar3 + 0x2d0);
      break;
    default:
      goto switchD_1006318e8_caseD_a;
    case 0xb:
      uVar2 = *(uint *)(lVar3 + 0x2b0);
      break;
    case 0xe:
      uVar2 = *(uint *)(lVar3 + 700);
      break;
    case 0x12:
      uVar2 = (uint)*(byte *)(lVar3 + 0x2cc);
      break;
    case 0x14:
      uVar2 = *(uint *)(lVar3 + 0x27c);
    }
  }
  *param_3 = uVar2;
  uVar1 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
switchD_1006318e8_caseD_a:
  return uVar1;
}




void FUN_100631964(undefined8 *param_1)

{
  FUN_100631528(*param_1);
  return;
}




undefined8
FUN_10063196c(long *param_1,int param_2,long *param_3,undefined4 *param_4,undefined1 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0x13) {
    lVar2 = *param_1;
    FUN_10056a458(*(undefined4 *)(lVar2 + 0x2a4),*(undefined4 *)(lVar2 + 0x2b4),
                  *(undefined4 *)(lVar2 + 0x2b8),*(undefined4 *)(*(long *)(lVar2 + 0x90) + 0x15a48),
                  *(undefined4 *)(lVar2 + 0x2b0),lVar2 + 0x1e0);
    *(float *)(lVar2 + 0x1e0) =
         (1.0 - *(float *)(lVar2 + 0x2c4)) + *(float *)(lVar2 + 0x2c4) * *(float *)(lVar2 + 0x1e0);
    *param_3 = lVar2 + 0x1e0;
    *param_4 = 8;
    uVar1 = 0;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




void FUN_100631a14(void)

{
  _memset(&DAT_101ea52e8,0,0x60);
  DAT_101ea52e8 = 1;
  FUN_1005ecc98(&DAT_101ea52ec,"ID",0x10);
  FUN_1005ecc98(&DAT_101ea52fc,"",0x10);
  DAT_101ea5310 = "ID of this Return DSP (read-only). Used for connecting sends.";
  DAT_101ea5318 = 0xffffffff;
  DAT_101ea531c = 1000000;
  DAT_101ea5320 = 0xffffffff;
  DAT_101ea5324 = 0;
  DAT_101ea5328 = 0;
  _memset(&DAT_101ea5348,0,0x60);
  DAT_101ea5348 = 1;
  FUN_1005ecc98(&DAT_101ea534c,"Input Speaker Mode",0x10);
  FUN_1005ecc98(&DAT_101ea535c,"",0x10);
  DAT_101ea5370 = "Input Speaker Mode";
  DAT_101ea5378 = 0;
  DAT_101ea537c = 7;
  DAT_101ea5380 = 0;
  DAT_101ea5384 = 0;
  DAT_101ea5388 = 0;
  DAT_101ea53a8 = &DAT_1018728b0;
  DAT_101ea53c0 = 0x19;
  DAT_101ea53b8 = 0x228;
  DAT_101ea53c8 = FUN_100631b30;
  return;
}




void FUN_100631b30(undefined8 *param_1)

{
  FUN_10063211c(*param_1);
  return;
}




undefined8 FUN_100631b38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)(param_1 + 3) != 0) {
    return 0x1c;
  }
  uVar1 = FUN_10063da48(param_1 + 2,0x40);
  return uVar1;
}




undefined8 FUN_100631b5c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10063d428(param_1 + 0x10);
  if ((iVar1 == 0) && (iVar1 = FUN_10063d4e0(param_1 + 0x20), iVar1 == 0)) {
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  }
  return 0;
}




undefined8 FUN_100631b9c(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int local_4c;
  undefined8 local_48;
  
  lVar4 = *param_1;
  local_48 = param_2;
  if (lVar4 != 0) {
    FUN_10057097c(lVar4,0xe);
  }
  iVar2 = (int)param_1[1];
  iVar1 = 0;
  if (iVar2 != 0x7fffffff) {
    iVar1 = iVar2 + 1;
  }
  *(int *)(param_1 + 1) = iVar1;
  local_4c = iVar2;
  uVar3 = FUN_10063d964(param_1 + 2,&local_4c,&local_48);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
    *param_3 = iVar2;
  }
  if ((lVar4 != 0) && (lVar4 != 0)) {
    FUN_100570990(lVar4,0xe);
  }
  return uVar3;
}




undefined8 FUN_100631c48(long *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    FUN_10057097c(lVar4,0xe);
  }
  if (*(int *)((long)param_1 + 0x34) == 0) {
    uVar5 = 0;
  }
  else if ((int)param_1[3] == 0) {
    uVar5 = 0x1c;
  }
  else {
    puVar2 = (uint *)(param_1[2] + (long)(int)((int)param_1[3] - 1U & param_2) * 4);
    uVar1 = *puVar2;
    if (uVar1 == 0xffffffff) {
      uVar5 = 0;
    }
    else {
      lVar3 = param_1[4];
      do {
        if (*(uint *)(lVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)) ==
            param_2) {
          uVar5 = 0;
          lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
          *(undefined8 *)(lVar3 + 8) = 0;
          *puVar2 = *(uint *)(lVar3 + 4);
          *(int *)(lVar3 + 4) = (int)param_1[6];
          *(uint *)(param_1 + 6) = uVar1;
          *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
          goto LAB_100631d20;
        }
        puVar2 = (uint *)(lVar3 + (long)(int)uVar1 * 0x10 + 4);
        uVar1 = *puVar2;
      } while (uVar1 != 0xffffffff);
      uVar5 = 0;
    }
  }
LAB_100631d20:
  if (lVar4 != 0) {
    FUN_100570990(lVar4,0xe);
  }
  return uVar5;
}




undefined8 FUN_100631d4c(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    FUN_10057097c(lVar3,0xe);
  }
  if (*(int *)((long)param_1 + 0x34) == 0) {
    uVar4 = 0;
  }
  else if ((int)param_1[3] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1[2] + (long)(int)((int)param_1[3] - 1U & param_2) * 4);
    if (uVar1 == 0xffffffff) {
      uVar4 = 0;
    }
    else {
      lVar2 = param_1[4];
      do {
        if (*(uint *)(lVar2 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)) ==
            param_2) {
          uVar4 = *(undefined8 *)(lVar2 + (long)(int)uVar1 * 0x10 + 8);
          goto LAB_100631dfc;
        }
        uVar1 = *(uint *)(lVar2 + (long)(int)uVar1 * 0x10 + 4);
      } while (uVar1 != 0xffffffff);
      uVar4 = 0;
    }
  }
LAB_100631dfc:
  if (lVar3 != 0) {
    FUN_100570990(lVar3,0xe);
  }
  return uVar4;
}




undefined8 FUN_100631e28(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int local_4c;
  long local_48;
  
  *(long *)(param_1 + 0x210) = param_1 + 0x208;
  *(long *)(param_1 + 0x208) = param_1 + 0x208;
  *(undefined8 *)(param_1 + 0x218) = 0;
  lVar5 = *(long *)(param_1 + 0x90);
  lVar4 = *(long *)(lVar5 + 0x167b8);
  local_48 = param_1;
  if (lVar4 != 0) {
    FUN_10057097c(lVar4,0xe);
  }
  iVar2 = *(int *)(lVar5 + 0x167c0);
  iVar1 = 0;
  if (iVar2 != 0x7fffffff) {
    iVar1 = iVar2 + 1;
  }
  *(int *)(lVar5 + 0x167c0) = iVar1;
  local_4c = iVar2;
  uVar3 = FUN_10063d964(lVar5 + 0x167c8,&local_4c,&local_48);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
    *(int *)(param_1 + 0x220) = iVar2;
  }
  if (lVar4 != 0) {
    FUN_100570990(lVar4,0xe);
  }
  if ((int)uVar3 == 0) {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  return uVar3;
}




undefined8 FUN_100631f24(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                  *(undefined8 *)(*(long *)(param_1 + 0x1c8) + -8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_return.cpp"
                  ,0xdf);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  uVar1 = FUN_100631c48(*(long *)(param_1 + 0x90) + 0x167b8,*(undefined4 *)(param_1 + 0x220));
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  if ((int)uVar1 == 0) {
    do {
      plVar2 = *(long **)(param_1 + 0x208);
      if (plVar2 == (long *)(param_1 + 0x208)) {
        return 0;
      }
      if (plVar2[2] == 0) {
        return 0x1c;
      }
      uVar1 = FUN_100632690();
    } while ((int)uVar1 == 0);
  }
  return uVar1;
}




undefined8 FUN_100631fc4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(long *)(param_2 + 0x1f0) = param_1 + 0x208;
  *(undefined8 *)(param_2 + 0x1f8) = uVar1;
  *(long *)(param_1 + 0x210) = param_2 + 0x1f0;
  **(long **)(param_2 + 0x1f8) = param_2 + 0x1f0;
  *(long *)(param_2 + 0x200) = param_2;
  return 0;
}




undefined8 FUN_100631fec(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x1f8);
  *puVar1 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 **)(*(long *)(param_2 + 0x1f0) + 8) = puVar1;
  *(long *)(param_2 + 0x1f0) = param_2 + 0x1f0;
  *(long *)(param_2 + 0x1f8) = param_2 + 0x1f0;
  return 0;
}




undefined8
FUN_10063200c(long *param_1,long param_2,void *param_3,int param_4,undefined8 param_5,
             undefined4 *param_6)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  
  if (param_2 != 0) {
    *param_6 = *(undefined4 *)((long)param_1 + 0x1e4);
    uVar2 = *(int *)((long)param_1 + 0x1e4) * param_4;
    if ((int)param_1[0x3d] < (int)uVar2) {
      return 0x1c;
    }
    if (*param_1 == param_1[0x3e]) {
      pvVar3 = (void *)param_1[0x3a];
    }
    else {
      lVar1 = param_1[0x3a];
      pvVar3 = (void *)param_1[0x3b];
      param_1[0x3a] = (long)pvVar3;
      param_1[0x3b] = lVar1;
      *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)((long)param_1 + 0x1f9);
      *(undefined1 *)((long)param_1 + 0x1f9) = 0;
      param_1[0x3e] = *param_1;
    }
    _memcpy(param_3,pvVar3,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
  }
  return 0;
}




undefined8 FUN_10063208c(long param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    return 0x44;
  }
  if (param_2 == 1) {
    if (param_3 == 1) {
      return 0x1f;
    }
    *(int *)(param_1 + 0x200) = param_3;
  }
  return 0;
}




undefined8 FUN_1006320bc(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(param_1 + 0x200);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x220);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%d");
  }
  return 0;
}




undefined8 FUN_10063211c(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int local_24;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x200);
    if ((*(int *)(param_1 + 0x1e0) == iVar1) && (*(int *)(param_1 + 0x1e8) != 0)) {
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 0x1e0) = iVar1;
      uVar2 = FUN_100570618(*(undefined8 *)(param_1 + 0x90),iVar1,param_1 + 0x1e4);
      if (((int)uVar2 == 0) &&
         (uVar2 = FUN_1005f696c(*(undefined8 *)(param_1 + 0x90),&local_24,0), (int)uVar2 == 0)) {
        local_24 = *(int *)(param_1 + 0x1e4) * local_24;
        *(int *)(param_1 + 0x1e8) = local_24;
        if (*(long *)(param_1 + 0x1c8) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                        *(undefined8 *)(*(long *)(param_1 + 0x1c8) + -8),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_return.cpp"
                        ,0x192);
          local_24 = *(int *)(param_1 + 0x1e8);
        }
        lVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),local_24 * 8 + 0x18,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_return.cpp"
                              ,0x195,0,1);
        if (lVar3 == 0) {
          *(undefined8 *)(param_1 + 0x1c8) = 0;
          uVar2 = 0x26;
        }
        else {
          uVar4 = lVar3 + 0x17U & 0xfffffffffffffff0;
          *(long *)(uVar4 - 8) = lVar3;
          *(ulong *)(param_1 + 0x1c8) = uVar4;
          if (uVar4 == 0) {
            uVar2 = 0x26;
          }
          else {
            uVar2 = 0;
            *(ulong *)(param_1 + 0x1d0) = uVar4;
            *(ulong *)(param_1 + 0x1d8) = uVar4 + (long)*(int *)(param_1 + 0x1e8) * 4;
            *(undefined2 *)(param_1 + 0x1f8) = 0;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_100632248(undefined8 *param_1)

{
  FUN_100631e28(*param_1);
  return;
}




undefined8 FUN_100632250(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(long *)(lVar3 + 0x1c8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                  *(undefined8 *)(*(long *)(lVar3 + 0x1c8) + -8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_return.cpp"
                  ,0xdf);
    *(undefined8 *)(lVar3 + 0x1c8) = 0;
  }
  uVar1 = FUN_100631c48(*(long *)(lVar3 + 0x90) + 0x167b8,*(undefined4 *)(lVar3 + 0x220));
  *(undefined4 *)(lVar3 + 0x220) = 0xffffffff;
  if ((int)uVar1 == 0) {
    do {
      plVar2 = *(long **)(lVar3 + 0x208);
      if (plVar2 == (long *)(lVar3 + 0x208)) {
        return 0;
      }
      if (plVar2[2] == 0) {
        return 0x1c;
      }
      uVar1 = FUN_100632690();
    } while ((int)uVar1 == 0);
  }
  return uVar1;
}




undefined8 FUN_1006322f0(long *param_1)

{
  param_1 = (long *)*param_1;
  if (param_1[0x3e] == *param_1) {
    if ((char)param_1[0x3f] != '\0') {
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x1f9) != '\0') {
    return 0;
  }
  return 0xb;
}




undefined8
FUN_10063232c(long *param_1,long param_2,void *param_3,int param_4,undefined8 param_5,
             undefined4 *param_6)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  
  if (param_2 != 0) {
    param_1 = (long *)*param_1;
    *param_6 = *(undefined4 *)((long)param_1 + 0x1e4);
    uVar2 = *(int *)((long)param_1 + 0x1e4) * param_4;
    if ((int)param_1[0x3d] < (int)uVar2) {
      return 0x1c;
    }
    if (*param_1 == param_1[0x3e]) {
      pvVar3 = (void *)param_1[0x3a];
    }
    else {
      lVar1 = param_1[0x3a];
      pvVar3 = (void *)param_1[0x3b];
      param_1[0x3a] = (long)pvVar3;
      param_1[0x3b] = lVar1;
      *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)((long)param_1 + 0x1f9);
      *(undefined1 *)((long)param_1 + 0x1f9) = 0;
      param_1[0x3e] = *param_1;
    }
    _memcpy(param_3,pvVar3,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
  }
  return 0;
}




undefined8 FUN_1006323b0(long *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    return 0x44;
  }
  if (param_2 == 1) {
    if (param_3 == 1) {
      return 0x1f;
    }
    *(int *)(*param_1 + 0x200) = param_3;
  }
  return 0;
}




undefined8 FUN_1006323e4(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  if (param_2 == 1) {
    *param_3 = *(undefined4 *)(*param_1 + 0x200);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    *param_3 = *(undefined4 *)(*param_1 + 0x220);
  }
  if (param_4 != (char *)0x0) {
    _sprintf(param_4,"%d");
  }
  return 0;
}




void FUN_100632448(void)

{
  _memset(&DAT_101ea53e0,0,0x60);
  DAT_101ea53e0 = 1;
  FUN_1005ecc98(&DAT_101ea53e4,"Return ID",0x10);
  FUN_1005ecc98(&DAT_101ea53f4,"",0x10);
  DAT_101ea5408 =
       "ID of the Return DSP this send is connected to (integer values only). -1 indicates no connected Return DSP."
  ;
  DAT_101ea5410 = 0xffffffff;
  DAT_101ea5414 = 1000000;
  DAT_101ea5418 = 0xffffffff;
  DAT_101ea541c = 0;
  DAT_101ea5420 = 0;
  _memset(&DAT_101ea5440,0,0x60);
  FUN_1005ecc98(&DAT_101ea5444,"Send Level",0x10);
  FUN_1005ecc98(&DAT_101ea5454,"",0x10);
  DAT_101ea5468 = "Send Level";
  DAT_101ea5470 = 0;
  DAT_101ea5474 = 0x41200000;
  DAT_101ea5478 = 0x3f800000;
  DAT_101ea5480 = 1;
  _memset(&DAT_101ea54a0,0,0x60);
  DAT_101ea54a0 = 3;
  FUN_1005ecc98(&DAT_101ea54a4,"Overall Gain",0x10);
  FUN_1005ecc98(&DAT_101ea54b4,"",0x10);
  DAT_101ea54c8 = "Overall Gain";
  DAT_101ea54d0 = 0xffffffff;
  DAT_101ea5500 = &DAT_101872998;
  DAT_101ea5518 = 0x18;
  DAT_101ea5510 = 0x210;
  return;
}




undefined8 FUN_1006325ac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3f800000;
  *(ushort *)(param_1 + 0x3c) = *(ushort *)(param_1 + 0x3c) | 0x20;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x20c) = 0;
  lVar3 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar5 = 0;
    do {
      piVar4 = *(int **)(*(long *)(lVar3 + 0x68) + lVar5 * 8);
      if (*piVar4 == 0) {
        uVar2 = FUN_1005cef0c(piVar4[0xe],param_1,lVar5);
        iVar1 = (int)uVar2;
joined_r0x00010063263c:
        if (iVar1 != 0) {
          return uVar2;
        }
      }
      else if (*piVar4 == 1) {
        uVar2 = FUN_1005cef94(param_1,lVar5,piVar4[0xe]);
        iVar1 = (int)uVar2;
        goto joined_r0x00010063263c;
      }
      lVar5 = lVar5 + 1;
      lVar3 = *(long *)(param_1 + 0xd0);
    } while (lVar5 < *(int *)(lVar3 + 0x60));
  }
  return 0;
}




undefined8 FUN_100632664(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x1e8) == 0) || (uVar1 = FUN_100632690(), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_100632688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}




undefined8 FUN_100632690(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
    bVar2 = false;
    lVar6 = 0;
    bVar1 = false;
    bVar3 = true;
  }
  else {
    FUN_10057097c(lVar5,3);
    lVar6 = *(long *)(param_1 + 0x90);
    if (lVar6 == 0) {
      lVar6 = 0;
      bVar1 = false;
      bVar3 = true;
      bVar2 = true;
    }
    else {
      bVar2 = true;
      FUN_10057097c(lVar6,1);
      bVar3 = false;
      bVar1 = true;
    }
  }
  if (*(long *)(param_1 + 0x1e8) == 0) {
    uVar4 = 0x1c;
  }
  else {
    uVar4 = FUN_100631fec(*(long *)(param_1 + 0x1e8),param_1);
    if ((int)uVar4 == 0) {
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
    }
  }
  if (!bVar3 && bVar1) {
    FUN_100570990(lVar6,1);
  }
  if ((lVar5 != 0) && (bVar2)) {
    FUN_100570990(lVar5,3);
  }
  return uVar4;
}




undefined8 FUN_10063277c(long param_1)

{
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1d0);
  return 0;
}




undefined8
FUN_10063278c(long param_1,undefined8 param_2,long param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  byte bVar9;
  undefined8 local_110;
  undefined8 *****local_108;
  undefined8 *****pppppuStack_100;
  undefined8 local_f8;
  undefined8 *****local_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_70;
  undefined2 local_6e;
  undefined8 local_68;
  
  if (param_6 == 1) {
    if (param_4 != 0) {
      **(undefined4 **)(param_4 + 8) = **(undefined4 **)(param_3 + 8);
      **(undefined4 **)(param_4 + 0x10) = **(undefined4 **)(param_3 + 0x10);
      *(undefined4 *)(param_4 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    }
    if (param_5 != 0) {
      return 0xb;
    }
    if (*(long *)(param_1 + 0x1e8) == 0) {
      return 6;
    }
    if ((*(float *)(param_1 + 0x1d0) == 0.0) && (*(float *)(param_1 + 0x1c8) == 0.0)) {
      return 6;
    }
  }
  else {
    pvVar7 = (void *)**(undefined8 **)(param_3 + 0x18);
    pvVar6 = (void *)**(undefined8 **)(param_4 + 0x18);
    iVar1 = **(int **)(param_3 + 8);
    plVar4 = *(long **)(param_1 + 0x1e8);
    iVar5 = (int)param_2;
    if (plVar4 != (long *)0x0) {
      local_108 = &local_108;
      local_f8 = 0;
      local_f0 = &local_f0;
      local_e0 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_d6 = 0;
      local_c8 = 0;
      local_c6 = 0;
      local_68 = 0;
      local_70 = 0;
      local_6e = 0;
      local_110 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c0 = 0;
      if (*plVar4 == plVar4[0x3e]) {
        lVar8 = plVar4[0x3b];
        bVar9 = *(byte *)((long)plVar4 + 0x1f9) ^ 1;
      }
      else {
        lVar8 = plVar4[0x3a];
        plVar4[0x3a] = plVar4[0x3b];
        plVar4[0x3b] = lVar8;
        *(undefined1 *)(plVar4 + 0x3f) = *(undefined1 *)((long)plVar4 + 0x1f9);
        *(undefined1 *)((long)plVar4 + 0x1f9) = 0;
        plVar4[0x3e] = *plVar4;
        bVar9 = 1;
      }
      *(undefined1 *)((long)plVar4 + 0x1f9) = 1;
      iVar2 = *(int *)((long)plVar4 + 0x1e4);
      if (*(uint *)(plVar4 + 0x3d) < (uint)(iVar2 * iVar5)) {
        return 0x1c;
      }
      pppppuStack_100 = local_108;
      pppppuStack_e8 = local_f0;
      if ((uint)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x1d4)) < 2) {
        FUN_1006127a0(*(undefined4 *)(param_1 + 0x1c8),&local_110,*(undefined8 *)(param_1 + 0x90));
        FUN_100614b18(*(undefined4 *)(param_1 + 0x1d0),&local_110,0x40,0);
      }
      else {
        FUN_1006127a0(*(undefined4 *)(param_1 + 0x1d0),&local_110,*(undefined8 *)(param_1 + 0x90));
      }
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1d0);
      uVar3 = FUN_100613a18(&local_110,lVar8,pvVar7,0,iVar2,iVar1,0,param_2,bVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    if (*(char *)(param_1 + 0x20c) == '\0') {
      _memcpy(pvVar6,pvVar7,(ulong)(uint)(iVar1 * iVar5) << 2);
    }
    else {
      _bzero(pvVar6,(ulong)(uint)(iVar1 * iVar5) << 2);
    }
  }
  return 0;
}




undefined8 FUN_1006329c8(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(param_2 + 0x1d0) = param_1;
    *(undefined4 *)(param_2 + 0x1d4) = *(undefined4 *)(param_2 + 0x38);
  }
  return 0;
}




undefined8 FUN_1006329e4(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_2 == 1) {
      *param_3 = *(undefined4 *)(param_1 + 0x1d0);
      if (param_4 != (char *)0x0) {
        _sprintf(param_4,"%.02f");
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_100632a3c(long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined8 local_30;
  
  if (param_2 == 0) {
    *(int *)(param_1 + 0x1d8) = (int)param_3;
    local_40 = param_1;
    if ((int)param_3 == -1) {
      *(undefined1 *)(param_1 + 0x20d) = 0;
      if (*(long *)(param_1 + 0x1e8) != 0) {
        local_48[0] = 0xb;
        local_38 = 0;
        local_30 = 0;
        uVar1 = FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_48,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      uVar1 = 0;
    }
    else {
      local_38 = FUN_100631d4c(*(long *)(param_1 + 0x90) + 0x167b8,param_3);
      if (local_38 == 0) {
        *(undefined1 *)(param_1 + 0x20d) = 0;
        uVar1 = 9;
      }
      else {
        *(undefined1 *)(param_1 + 0x20d) = 1;
        local_48[0] = 10;
        local_30 = 0;
        uVar1 = FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_48,1);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_100632b00(long param_1)

{
  undefined4 local_38 [2];
  long local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38[0] = 0xb;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = param_1;
  FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,1);
  return;
}




void FUN_100632b38(long param_1,undefined8 param_2)

{
  undefined4 local_38 [2];
  long local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_38[0] = 10;
  local_20 = 0;
  local_30 = param_1;
  uStack_28 = param_2;
  FUN_10056be4c(*(undefined8 *)(param_1 + 0x90),local_38,1);
  return;
}




undefined8 FUN_100632b70(long param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if ((param_2 == 0) && (*param_3 = *(undefined4 *)(param_1 + 0x1d8), param_4 != (char *)0x0)) {
      _sprintf(param_4,"%d");
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined4 FUN_100632bc0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 2) {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8
FUN_100632bd0(long param_1,int param_2,long *param_3,undefined4 *param_4,undefined1 *param_5)

{
  float fVar1;
  
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x20d) == '\0') {
      fVar1 = 0.0;
    }
    else if (*(long *)(param_1 + 0x1e8) == 0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = *(float *)(*(long *)(param_1 + 0x1e8) + 0x224);
    }
    *(float *)(param_1 + 0x1e0) = fVar1 * *(float *)(param_1 + 0x1d0);
    *param_3 = param_1 + 0x1dc;
    *param_4 = 8;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100632c30(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0x1c;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x90);
    if (lVar2 != 0) {
      FUN_10057097c(lVar2,3);
      FUN_10057097c(lVar2,1);
    }
    uVar1 = FUN_100631fc4(param_2,param_1);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(long *)(param_1 + 0x1e8) = param_2;
    }
    if ((lVar2 != 0) && (lVar2 != 0)) {
      FUN_100570990(lVar2,1);
      FUN_100570990(lVar2,3);
    }
  }
  return uVar1;
}




void FUN_100632cd8(undefined8 *param_1)

{
  FUN_1006325ac(*param_1);
  return;
}




undefined8 FUN_100632ce0(long *param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(*param_1 + 0x1e8) == 0) || (uVar1 = FUN_100632690(), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_100632d08(long *param_1)

{
  *(undefined4 *)(*param_1 + 0x1c8) = *(undefined4 *)(*param_1 + 0x1d0);
  return 0;
}




void FUN_100632d1c(undefined8 *param_1)

{
  FUN_10063278c(*param_1);
  return;
}




undefined8 FUN_100632d24(undefined4 param_1,long *param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 1) {
    lVar1 = *param_2;
    *(undefined4 *)(lVar1 + 0x1d0) = param_1;
    *(undefined4 *)(lVar1 + 0x1d4) = *(undefined4 *)(lVar1 + 0x38);
  }
  return 0;
}




undefined8 FUN_100632d44(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_2 == 1) {
      *param_3 = *(undefined4 *)(*param_1 + 0x1d0);
      if (param_4 != (char *)0x0) {
        _sprintf(param_4,"%.02f");
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_100632da0(undefined8 *param_1)

{
  FUN_100632a3c(*param_1);
  return;
}




undefined8 FUN_100632da8(long *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_2 == 0) {
      *param_3 = *(undefined4 *)(*param_1 + 0x1d8);
      if (param_4 != (char *)0x0) {
        _sprintf(param_4,"%d");
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined4 FUN_100632dfc(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 2) {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8
FUN_100632e0c(long *param_1,int param_2,long *param_3,undefined4 *param_4,undefined1 *param_5)

{
  long lVar1;
  float fVar2;
  
  if (param_2 == 2) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 0x20d) == '\0') {
      fVar2 = 0.0;
    }
    else if (*(long *)(lVar1 + 0x1e8) == 0) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = *(float *)(*(long *)(lVar1 + 0x1e8) + 0x224);
    }
    *(float *)(lVar1 + 0x1e0) = fVar2 * *(float *)(lVar1 + 0x1d0);
    *param_3 = lVar1 + 0x1dc;
    *param_4 = 8;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
    return 0;
  }
  return 0x1f;
}




void FUN_100632e70(void)

{
  _memset(&DAT_101ea5538,0,0x60);
  FUN_1005ecc98(&DAT_101ea553c,"Low Gain",0x10);
  FUN_1005ecc98(&DAT_101ea554c,"dB",0x10);
  DAT_101ea5560 = "Low frequency gain in dB.  -80.0f to 10.0f.  Default = 0.";
  DAT_101ea5568 = 0xc2a00000;
  DAT_101ea556c = 0x41200000;
  DAT_101ea5570 = 0;
  DAT_101ea5578 = 1;
  _memset(&DAT_101ea5598,0,0x60);
  FUN_1005ecc98(&DAT_101ea559c,"Mid Gain",0x10);
  FUN_1005ecc98(&DAT_101ea55ac,"dB",0x10);
  DAT_101ea55c0 = "Mid frequency gain in dB.  -80.0f to 10.0f.  Default = 0.";
  DAT_101ea55c8 = 0xc2a00000;
  DAT_101ea55cc = 0x41200000;
  DAT_101ea55d0 = 0;
  DAT_101ea55d8 = 1;
  _memset(&DAT_101ea55f8,0,0x60);
  FUN_1005ecc98(&DAT_101ea55fc,"High Gain",0x10);
  FUN_1005ecc98(&DAT_101ea560c,"dB",0x10);
  DAT_101ea5620 = "High frequency gain in dB.  -80.0f to 10.0f.  Default = 0.";
  DAT_101ea5628 = 0xc2a00000;
  DAT_101ea562c = 0x41200000;
  DAT_101ea5630 = 0;
  DAT_101ea5638 = 1;
  _memset(&DAT_101ea5658,0,0x60);
  FUN_1005ecc98(&DAT_101ea565c,"Low Crossover",0x10);
  FUN_1005ecc98(&DAT_101ea566c,"Hz",0x10);
  DAT_101ea5680 = "Low-to-mid crossover frequency in Hz.  10.0 to 22000.0.  Default = 400.0.";
  DAT_101ea5688 = 0x41200000;
  DAT_101ea568c = 0x46abe000;
  DAT_101ea5690 = 0x43c80000;
  DAT_101ea5698 = 1;
  _memset(&DAT_101ea56b8,0,0x60);
  FUN_1005ecc98(&DAT_101ea56bc,"High Crossover",0x10);
  FUN_1005ecc98(&DAT_101ea56cc,"Hz",0x10);
  DAT_101ea56e0 = "Mid-to-high crossover frequency in Hz.  10.0 to 22000.0.  Default = 4000.0.";
  DAT_101ea56e8 = 0x41200000;
  DAT_101ea56ec = 0x46abe000;
  DAT_101ea56f0 = 0x457a0000;
  DAT_101ea56f8 = 1;
  _memset(&DAT_101ea5718,0,0x60);
  DAT_101ea5718 = 1;
  FUN_1005ecc98(&DAT_101ea571c,"Slope",0x10);
  FUN_1005ecc98(&DAT_101ea572c,"dB/8ve",0x10);
  DAT_101ea5748 = 0;
  DAT_101ea5750 = 1;
  DAT_101ea5754 = 0;
  DAT_101ea5758 = 0;
  DAT_101ea574c = 2;
  DAT_101ea5740 =
       "Crossover Slope.  0 = 12dB/Octave, 1 = 24dB/Octave, 2 = 48dB/Octave.  Default = 1 (24dB/Octave)."
  ;
  DAT_101ea5778 = &DAT_101872ab8;
  DAT_101ea5790 = 0x1c;
  DAT_101ea5788 = 0x24b0;
  return;
}




undefined8 FUN_1006330f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  *(float *)(param_1 + 0x248c) = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar4 = 0;
    do {
      piVar3 = *(int **)(*(long *)(lVar2 + 0x68) + lVar4 * 8);
      if (*piVar3 == 0) {
        uVar1 = FUN_1005cef0c(piVar3[0xe],param_1,lVar4);
      }
      else {
        uVar1 = FUN_1005cef94(param_1,lVar4,piVar3[0xe]);
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      lVar4 = lVar4 + 1;
      lVar2 = *(long *)(param_1 + 0xd0);
    } while (lVar4 < *(int *)(lVar2 + 0x60));
  }
  fVar5 = *(float *)(param_1 + 0x2498);
  *(float *)(param_1 + 0x2448) = fVar5;
  if (fVar5 <= -80.0) {
    uVar6 = 0;
  }
  else {
    uVar6 = _powf(0x41200000,fVar5 / 20.0);
  }
  *(undefined4 *)(param_1 + 0x244c) = uVar6;
  *(undefined4 *)(param_1 + 0x2458) = 0;
  fVar5 = *(float *)(param_1 + 0x249c);
  *(float *)(param_1 + 0x245c) = fVar5;
  if (fVar5 <= -80.0) {
    uVar6 = 0;
  }
  else {
    uVar6 = _powf(0x41200000,fVar5 / 20.0);
  }
  *(undefined4 *)(param_1 + 0x2460) = uVar6;
  *(undefined4 *)(param_1 + 0x246c) = 0;
  fVar5 = *(float *)(param_1 + 0x24a0);
  *(float *)(param_1 + 0x2470) = fVar5;
  if (fVar5 <= -80.0) {
    uVar6 = 0;
  }
  else {
    uVar6 = _powf(0x41200000,fVar5 / 20.0);
  }
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x2474) = uVar6;
  *(undefined4 *)(param_1 + 0x2480) = 0;
  *(undefined4 *)(param_1 + 0x2484) = *(undefined4 *)(param_1 + 0x24a4);
  *(undefined4 *)(param_1 + 0x2488) = *(undefined4 *)(param_1 + 0x24a8);
  *(undefined4 *)(param_1 + 0x2494) = *(undefined4 *)(param_1 + 0x24ac);
  do {
    lVar4 = param_1 + lVar2;
    *(long *)(lVar4 + 0x450) = param_1 + 0x1c8;
    *(long *)(lVar4 + 0xc50) = param_1 + 0x268;
    *(long *)(lVar4 + 0x1450) = param_1 + 0x308;
    *(long *)(lVar4 + 0x1c50) = param_1 + 0x3a8;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x200);
  lVar2 = 0;
  do {
    lVar4 = param_1 + lVar2;
    *(long *)(lVar4 + 0x650) = param_1 + 0x1c8;
    *(long *)(lVar4 + 0xe50) = param_1 + 0x268;
    *(long *)(lVar4 + 0x1650) = param_1 + 0x308;
    *(long *)(lVar4 + 0x1e50) = param_1 + 0x3a8;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x200);
  lVar2 = 0;
  do {
    lVar4 = param_1 + lVar2;
    *(long *)(lVar4 + 0x850) = param_1 + 0x218;
    *(long *)(lVar4 + 0x1050) = param_1 + 0x2b8;
    *(long *)(lVar4 + 0x1850) = param_1 + 0x358;
    *(long *)(lVar4 + 0x2050) = param_1 + 0x3f8;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x200);
  lVar2 = 0;
  do {
    lVar4 = param_1 + lVar2;
    *(long *)(lVar4 + 0xa50) = param_1 + 0x218;
    *(long *)(lVar4 + 0x1250) = param_1 + 0x2b8;
    *(long *)(lVar4 + 0x1a50) = param_1 + 0x358;
    *(long *)(lVar4 + 0x2250) = param_1 + 0x3f8;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x200);
  FUN_100633318(param_1,0);
  FUN_10063350c(param_1,0);
  *(undefined4 *)(param_1 + 0x2490) = 0;
  return 0;
}




void FUN_100633304(long param_1)

{
  *(float *)(param_1 + 0x248c) = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
  return;
}




void FUN_100633318(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar3 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
  *(float *)(param_1 + 0x248c) = fVar3;
  iVar1 = *(int *)(param_1 + 0x2494);
  if (iVar1 == 2) {
    FUN_10061c558(fVar3,*(undefined4 *)(param_1 + 0x2484),0x3f0a3d71,param_1 + 0x1c8,param_1 + 0x1f0
                  ,param_1 + 500,param_1 + 0x1f8,param_1 + 0x1fc,param_1 + 0x200);
    FUN_10061c630(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2484),0x3f0a3d71,
                  param_1 + 0x268,param_1 + 0x290,param_1 + 0x294,param_1 + 0x298,param_1 + 0x29c,
                  param_1 + 0x2a0);
    FUN_10061c558(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2484),0x3fab851f,
                  param_1 + 0x218,param_1 + 0x240,param_1 + 0x244,param_1 + 0x248,param_1 + 0x24c,
                  param_1 + 0x250);
    lVar2 = param_1 + 0x2b8;
    FUN_10061c630(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2484),0x3fab851f,
                  lVar2,param_1 + 0x2e0,param_1 + 0x2e4,param_1 + 0x2e8,param_1 + 0x2ec,
                  param_1 + 0x2f0);
    FUN_10061c70c(param_1 + 0x1c8,param_2);
    FUN_10061c70c(param_1 + 0x268,param_2);
    FUN_10061c70c(param_1 + 0x218,param_2);
  }
  else {
    if (iVar1 == 1) {
      uVar4 = *(undefined4 *)(param_1 + 0x2484);
      uVar5 = 0x3f3504f3;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x2484);
      uVar5 = 0x3f000000;
    }
    FUN_10061c558(fVar3,uVar4,uVar5,param_1 + 0x1c8,param_1 + 0x1f0,param_1 + 500,param_1 + 0x1f8,
                  param_1 + 0x1fc,param_1 + 0x200);
    lVar2 = param_1 + 0x268;
    FUN_10061c630(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2484),uVar5,lVar2,
                  param_1 + 0x290,param_1 + 0x294,param_1 + 0x298,param_1 + 0x29c,param_1 + 0x2a0);
    FUN_10061c70c(param_1 + 0x1c8,param_2);
  }
  FUN_10061c70c(lVar2,param_2);
  return;
}




void FUN_10063350c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar3 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
  *(float *)(param_1 + 0x248c) = fVar3;
  iVar1 = *(int *)(param_1 + 0x2494);
  if (iVar1 == 2) {
    FUN_10061c558(fVar3,*(undefined4 *)(param_1 + 0x2488),0x3f0a3d71,param_1 + 0x308,param_1 + 0x330
                  ,param_1 + 0x334,param_1 + 0x338,param_1 + 0x33c,param_1 + 0x340);
    FUN_10061c630(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2488),0x3f0a3d71,
                  param_1 + 0x3a8,param_1 + 0x3d0,param_1 + 0x3d4,param_1 + 0x3d8,param_1 + 0x3dc,
                  param_1 + 0x3e0);
    FUN_10061c558(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2488),0x3fab851f,
                  param_1 + 0x358,param_1 + 0x380,param_1 + 900,param_1 + 0x388,param_1 + 0x38c,
                  param_1 + 0x390);
    lVar2 = param_1 + 0x3f8;
    FUN_10061c630(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2488),0x3fab851f,
                  lVar2,param_1 + 0x420,param_1 + 0x424,param_1 + 0x428,param_1 + 0x42c,
                  param_1 + 0x430);
    FUN_10061c70c(param_1 + 0x308,param_2);
    FUN_10061c70c(param_1 + 0x3a8,param_2);
    FUN_10061c70c(param_1 + 0x358,param_2);
  }
  else {
    if (iVar1 == 1) {
      uVar4 = *(undefined4 *)(param_1 + 0x2488);
      uVar5 = 0x3f3504f3;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x2488);
      uVar5 = 0x3f000000;
    }
    FUN_10061c558(fVar3,uVar4,uVar5,param_1 + 0x308,param_1 + 0x330,param_1 + 0x334,param_1 + 0x338,
                  param_1 + 0x33c,param_1 + 0x340);
    lVar2 = param_1 + 0x3a8;
    FUN_10061c630(*(undefined4 *)(param_1 + 0x248c),*(undefined4 *)(param_1 + 0x2488),uVar5,lVar2,
                  param_1 + 0x3d0,param_1 + 0x3d4,param_1 + 0x3d8,param_1 + 0x3dc,param_1 + 0x3e0);
    FUN_10061c70c(param_1 + 0x308,param_2);
  }
  FUN_10061c70c(lVar2,param_2);
  return;
}




undefined8 FUN_100633700(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  *(float *)(param_1 + 0x248c) = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x708);
  fVar1 = *(float *)(param_1 + 0x2498);
  *(float *)(param_1 + 0x2448) = fVar1;
  if (fVar1 <= -80.0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _powf(0x41200000,fVar1 / 20.0);
  }
  *(undefined4 *)(param_1 + 0x244c) = uVar2;
  *(undefined4 *)(param_1 + 0x2458) = 0;
  fVar1 = *(float *)(param_1 + 0x249c);
  *(float *)(param_1 + 0x245c) = fVar1;
  if (fVar1 <= -80.0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _powf(0x41200000,fVar1 / 20.0);
  }
  *(undefined4 *)(param_1 + 0x2460) = uVar2;
  *(undefined4 *)(param_1 + 0x246c) = 0;
  fVar1 = *(float *)(param_1 + 0x24a0);
  *(float *)(param_1 + 0x2470) = fVar1;
  if (fVar1 <= -80.0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _powf(0x41200000,fVar1 / 20.0);
  }
  *(undefined4 *)(param_1 + 0x2474) = uVar2;
  *(undefined4 *)(param_1 + 0x2480) = 0;
  *(undefined4 *)(param_1 + 0x2484) = *(undefined4 *)(param_1 + 0x24a4);
  *(undefined4 *)(param_1 + 0x2488) = *(undefined4 *)(param_1 + 0x24a8);
  *(undefined4 *)(param_1 + 0x2494) = *(undefined4 *)(param_1 + 0x24ac);
  FUN_10063380c(param_1);
  FUN_100633318(param_1,0);
  FUN_10063350c(param_1,0);
  *(undefined4 *)(param_1 + 0x2490) = 0;
  return 0;
}




void FUN_10063380c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x44c) = 0;
    *(undefined4 *)(lVar1 + 0x448) = 0;
    *(undefined4 *)(lVar1 + 0xc4c) = 0;
    *(undefined4 *)(lVar1 + 0xc48) = 0;
    *(undefined4 *)(lVar1 + 0x144c) = 0;
    *(undefined4 *)(lVar1 + 0x1448) = 0;
    lVar2 = lVar2 + 0x10;
    *(undefined8 *)(lVar1 + 0x1c48) = 0;
  } while (lVar2 != 0x200);
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x64c) = 0;
    *(undefined4 *)(lVar1 + 0x648) = 0;
    *(undefined4 *)(lVar1 + 0xe4c) = 0;
    *(undefined4 *)(lVar1 + 0xe48) = 0;
    *(undefined4 *)(lVar1 + 0x164c) = 0;
    *(undefined4 *)(lVar1 + 0x1648) = 0;
    lVar2 = lVar2 + 0x10;
    *(undefined8 *)(lVar1 + 0x1e48) = 0;
  } while (lVar2 != 0x200);
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x84c) = 0;
    *(undefined4 *)(lVar1 + 0x848) = 0;
    *(undefined4 *)(lVar1 + 0x104c) = 0;
    *(undefined4 *)(lVar1 + 0x1048) = 0;
    *(undefined4 *)(lVar1 + 0x184c) = 0;
    *(undefined4 *)(lVar1 + 0x1848) = 0;
    lVar2 = lVar2 + 0x10;
    *(undefined8 *)(lVar1 + 0x2048) = 0;
  } while (lVar2 != 0x200);
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0xa4c) = 0;
    *(undefined4 *)(lVar1 + 0xa48) = 0;
    *(undefined4 *)(lVar1 + 0x124c) = 0;
    *(undefined4 *)(lVar1 + 0x1248) = 0;
    *(undefined4 *)(lVar1 + 0x1a4c) = 0;
    *(undefined4 *)(lVar1 + 0x1a48) = 0;
    lVar2 = lVar2 + 0x10;
    *(undefined8 *)(lVar1 + 0x2248) = 0;
  } while (lVar2 != 0x200);
  FUN_10061c70c(param_1 + 0x1c8,0);
  FUN_10061c70c(param_1 + 0x268,0);
  FUN_10061c70c(param_1 + 0x218,0);
  FUN_10061c70c(param_1 + 0x2b8,0);
  FUN_10061c70c(param_1 + 0x1c8,0);
  FUN_10061c70c(param_1 + 0x268,0);
  FUN_10061c70c(param_1 + 0x218,0);
  FUN_10061c70c(param_1 + 0x2b8,0);
  return;
}




undefined8
FUN_100633958(long param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  
  if ((int)param_5 != 0) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x2494);
      pcVar2 = DAT_101d919d8;
      if (((iVar1 == 0) || (pcVar2 = DAT_101d919e0, iVar1 == 1)) ||
         (pcVar2 = DAT_101d919e8, iVar1 == 2)) {
        (*pcVar2)(*(undefined4 *)(param_1 + 0x244c),*(undefined4 *)(param_1 + 0x2460),
                  *(undefined4 *)(param_1 + 0x2474),param_3,param_2,param_4,param_5,lVar3,
                  param_1 + 0x448,param_1 + 0x1448,param_1 + 0xc48,param_1 + 0x1c48);
      }
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      iVar1 = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (iVar1 != (int)param_5 + -1);
  }
  return 0;
}




undefined8 FUN_100633a64(long param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  do {
    do {
      if (param_4 == 0) {
        return 0;
      }
      param_4 = param_4 + -1;
      FUN_10063dc80(param_1);
    } while (param_5 == 0);
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x2494);
      if (iVar2 == 2) {
        fVar5 = (float)FUN_10063e4c4(*param_2,param_1,iVar4);
LAB_100633c1c:
        param_2 = param_2 + 1;
        *param_3 = fVar5;
        param_3 = param_3 + 1;
      }
      else {
        if (iVar2 == 1) {
          fVar5 = (float)FUN_10063e27c(*param_2,param_1,iVar4);
          goto LAB_100633c1c;
        }
        if (iVar2 == 0) {
          fVar5 = *param_2;
          fVar6 = *(float *)(param_1 + 0x244c);
          lVar1 = param_1 + (long)iVar4 * 0x10;
          fVar7 = *(float *)(lVar1 + 0x448);
          lVar3 = *(long *)(lVar1 + 0x450);
          fVar9 = *(float *)(lVar3 + 0x18);
          fVar14 = *(float *)(lVar1 + 0x44c);
          fVar12 = (fVar5 - fVar7 * *(float *)(lVar3 + 0x1c)) - fVar14 * *(float *)(lVar3 + 0x20);
          fVar17 = *(float *)(lVar3 + 0x10);
          fVar20 = *(float *)(lVar3 + 0x14);
          *(float *)(lVar1 + 0x44c) = fVar7;
          *(float *)(lVar1 + 0x448) = fVar12;
          fVar8 = *(float *)(param_1 + 0x2460);
          fVar10 = *(float *)(lVar1 + 0xc48);
          lVar3 = *(long *)(lVar1 + 0xc50);
          fVar13 = *(float *)(lVar3 + 0x18);
          fVar18 = *(float *)(lVar1 + 0xc4c);
          fVar15 = (fVar5 - fVar10 * *(float *)(lVar3 + 0x1c)) - fVar18 * *(float *)(lVar3 + 0x20);
          fVar21 = *(float *)(lVar3 + 0x10);
          fVar24 = *(float *)(lVar3 + 0x14);
          *(float *)(lVar1 + 0xc4c) = fVar10;
          *(float *)(lVar1 + 0xc48) = fVar15;
          fVar11 = *(float *)(lVar1 + 0x1448);
          lVar3 = *(long *)(lVar1 + 0x1450);
          fVar16 = *(float *)(lVar3 + 0x18);
          fVar19 = *(float *)(lVar1 + 0x144c);
          fVar15 = ((fVar21 * fVar15 + fVar10 * fVar24 + fVar18 * fVar13) -
                   fVar11 * *(float *)(lVar3 + 0x1c)) - fVar19 * *(float *)(lVar3 + 0x20);
          fVar22 = *(float *)(lVar3 + 0x10);
          fVar25 = *(float *)(lVar3 + 0x14);
          *(float *)(lVar1 + 0x144c) = fVar11;
          *(float *)(lVar1 + 0x1448) = fVar15;
          fVar10 = *(float *)(param_1 + 0x2474);
          fVar13 = *(float *)(lVar1 + 0x1c48);
          lVar3 = *(long *)(lVar1 + 0x1c50);
          fVar18 = *(float *)(lVar3 + 0x18);
          fVar21 = *(float *)(lVar1 + 0x1c4c);
          fVar5 = (fVar5 - fVar13 * *(float *)(lVar3 + 0x1c)) - fVar21 * *(float *)(lVar3 + 0x20);
          fVar24 = *(float *)(lVar3 + 0x10);
          fVar23 = *(float *)(lVar3 + 0x14);
          *(float *)(lVar1 + 0x1c4c) = fVar13;
          *(float *)(lVar1 + 0x1c48) = fVar5;
          fVar5 = (fVar6 * (fVar17 * fVar12 + fVar7 * fVar20 + fVar14 * fVar9) -
                  fVar8 * (fVar22 * fVar15 + fVar11 * fVar25 + fVar19 * fVar16)) +
                  fVar10 * (fVar24 * fVar5 + fVar13 * fVar23 + fVar21 * fVar18);
          goto LAB_100633c1c;
        }
      }
      iVar4 = iVar4 + 1;
    } while (param_5 != iVar4);
  } while( true );
}




undefined8
FUN_100633c48(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2490) - (uint)param_4;
  if (*(uint *)(param_1 + 0x2490) < (uint)param_4 || uVar1 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x2490) = uVar1;
  if (param_2 != 0) {
    fVar2 = *(float *)(param_1 + 0x2498);
    if (*(float *)(param_1 + 0x2448) != fVar2) {
      *(float *)(param_1 + 0x2448) = fVar2;
      if (fVar2 <= -80.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = (float)_powf(0x41200000,fVar2 / 20.0);
      }
      *(float *)(param_1 + 0x2450) = fVar2;
      *(float *)(param_1 + 0x2454) = (fVar2 - *(float *)(param_1 + 0x244c)) * 0.00390625;
      *(undefined4 *)(param_1 + 0x2458) = 0x43800000;
      if (uVar1 < 0x101) {
        uVar1 = 0x100;
      }
      *(uint *)(param_1 + 0x2490) = uVar1;
    }
    fVar2 = *(float *)(param_1 + 0x249c);
    if (*(float *)(param_1 + 0x245c) != fVar2) {
      *(float *)(param_1 + 0x245c) = fVar2;
      if (fVar2 <= -80.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = (float)_powf(0x41200000,fVar2 / 20.0);
      }
      *(float *)(param_1 + 0x2464) = fVar2;
      *(float *)(param_1 + 0x2468) = (fVar2 - *(float *)(param_1 + 0x2460)) * 0.00390625;
      *(undefined4 *)(param_1 + 0x246c) = 0x43800000;
      if (uVar1 < 0x101) {
        uVar1 = 0x100;
      }
      *(uint *)(param_1 + 0x2490) = uVar1;
    }
    fVar2 = *(float *)(param_1 + 0x24a0);
    if (*(float *)(param_1 + 0x2470) != fVar2) {
      *(float *)(param_1 + 0x2470) = fVar2;
      if (fVar2 <= -80.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = (float)_powf(0x41200000,fVar2 / 20.0);
      }
      *(float *)(param_1 + 0x2478) = fVar2;
      *(float *)(param_1 + 0x247c) = (fVar2 - *(float *)(param_1 + 0x2474)) * 0.00390625;
      *(undefined4 *)(param_1 + 0x2480) = 0x43800000;
      if (uVar1 < 0x101) {
        uVar1 = 0x100;
      }
      *(uint *)(param_1 + 0x2490) = uVar1;
    }
    if (*(float *)(param_1 + 0x2484) != *(float *)(param_1 + 0x24a4)) {
      *(float *)(param_1 + 0x2484) = *(float *)(param_1 + 0x24a4);
      FUN_100633318(param_1,0x400);
      uVar1 = *(uint *)(param_1 + 0x2490);
      if (uVar1 < 0x401) {
        uVar1 = 0x400;
      }
      *(uint *)(param_1 + 0x2490) = uVar1;
    }
    if (*(float *)(param_1 + 0x2488) != *(float *)(param_1 + 0x24a8)) {
      *(float *)(param_1 + 0x2488) = *(float *)(param_1 + 0x24a8);
      FUN_10063350c(param_1,0x400);
      uVar1 = *(uint *)(param_1 + 0x2490);
      if (uVar1 < 0x401) {
        uVar1 = 0x400;
      }
      *(uint *)(param_1 + 0x2490) = uVar1;
    }
    if (*(int *)(param_1 + 0x2494) != *(int *)(param_1 + 0x24ac)) {
      *(int *)(param_1 + 0x2494) = *(int *)(param_1 + 0x24ac);
      FUN_10063380c(param_1);
      FUN_100633318(param_1,0);
      FUN_10063350c(param_1,0);
      uVar1 = *(uint *)(param_1 + 0x2490);
    }
    if (uVar1 == 0) {
      FUN_100633958(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      FUN_100633a64(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return 0;
}




undefined8 FUN_100633ec4(undefined4 param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    *(undefined4 *)(param_2 + 0x2498) = param_1;
    return 0;
  case 1:
    *(undefined4 *)(param_2 + 0x249c) = param_1;
    return 0;
  case 2:
    *(undefined4 *)(param_2 + 0x24a0) = param_1;
    return 0;
  case 3:
    *(undefined4 *)(param_2 + 0x24a4) = param_1;
    return 0;
  case 4:
    *(undefined4 *)(param_2 + 0x24a8) = param_1;
  }
  return 0;
}




undefined8 FUN_100633f34(long param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 5) {
    *(undefined4 *)(param_1 + 0x24ac) = param_3;
  }
  return 0;
}




undefined8 FUN_100633f48(long param_1,undefined4 param_2,undefined4 *param_3,char *param_4)

{
  switch(param_2) {
  case 0:
    *param_3 = *(undefined4 *)(param_1 + 0x2498);
    break;
  case 1:
    *param_3 = *(undefined4 *)(param_1 + 0x249c);
    goto joined_r0x000100633fa4;
  case 2:
    *param_3 = *(undefined4 *)(param_1 + 0x24a0);
joined_r0x000100633fa4:
    if (param_4 == (char *)0x0) {
      return 0;
    }
    goto LAB_100633fd4;
  case 3:
    *param_3 = *(undefined4 *)(param_1 + 0x24a4);
    break;
  case 4:
    *param_3 = *(undefined4 *)(param_1 + 0x24a8);
    break;
  default:
    goto switchD_100633f70_default;
  }
  if (param_4 != (char *)0x0) {
LAB_100633fd4:
    _sprintf(param_4,"%.02f");
  }
switchD_100633f70_default:
  return 0;
}




undefined8 FUN_100634010(long param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 5) {
    iVar1 = *(int *)(param_1 + 0x24ac);
    *param_3 = iVar1;
    if (param_4 != (undefined4 *)0x0) {
      if (iVar1 == 2) {
        *(undefined1 *)(param_4 + 1) = 0;
        uVar2 = 0x42643834;
      }
      else if (iVar1 == 1) {
        *(undefined1 *)(param_4 + 1) = 0;
        uVar2 = 0x42643432;
      }
      else {
        if (iVar1 != 0) {
          return 0;
        }
        *(undefined1 *)(param_4 + 1) = 0;
        uVar2 = 0x42643231;
      }
      *param_4 = uVar2;
    }
  }
  return 0;
}




void FUN_100634070(undefined8 *param_1)

{
  FUN_1006330f0(*param_1);
  return;
}




undefined8 FUN_100634078(undefined8 *param_1)

{
  FUN_100633700(*param_1);
  return 0;
}




undefined8 FUN_100634094(undefined8 *param_1)

{
  FUN_100633c48(*param_1);
  return 0;
}




void FUN_1006340b0(float param_1,float param_2,float param_3,long param_4,long param_5,uint param_6,
                  ulong param_7,ulong param_8,long param_9,long param_10,long param_11,long param_12
                  )

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  iVar16 = (int)param_6 >> 2;
  lVar14 = param_4;
  lVar10 = param_5;
  if (iVar16 != 0) {
    lVar17 = 0;
    uVar13 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
    iVar11 = (int)param_7;
    uVar9 = iVar11 << 2;
    pfVar1 = (float *)(param_9 + uVar13);
    pfVar2 = (float *)(param_10 + uVar13);
    pfVar3 = (float *)(param_12 + uVar13);
    pfVar4 = (float *)(param_11 + uVar13);
    lVar19 = *(long *)(pfVar1 + 2);
    pfVar5 = pfVar1 + 1;
    lVar20 = *(long *)(pfVar4 + 2);
    pfVar6 = pfVar4 + 1;
    lVar21 = *(long *)(pfVar2 + 2);
    lVar22 = *(long *)(pfVar3 + 2);
    lVar14 = ((ulong)(iVar16 - 1) * 4 + 4) * (long)(int)uVar9;
    uVar24 = -(ulong)((uint)(iVar11 * 2) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar11 * 2) << 2;
    pfVar7 = pfVar2 + 1;
    pfVar8 = pfVar3 + 1;
    uVar23 = -(ulong)((uint)(iVar11 * 3) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar11 * 3) << 2;
    lVar10 = param_5 + lVar14;
    lVar14 = param_4 + lVar14;
    uVar13 = -(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2;
    lVar15 = param_5 + uVar23;
    lVar12 = param_5 + uVar24;
    lVar18 = param_5 + uVar13;
    do {
      fVar25 = *pfVar1;
      fVar29 = *pfVar5;
      fVar26 = (*(float *)(param_5 + lVar17) - fVar25 * *(float *)(lVar19 + 0x1c)) -
               fVar29 * *(float *)(lVar19 + 0x20);
      fVar31 = *(float *)(lVar19 + 0x10);
      fVar36 = *(float *)(lVar19 + 0x14);
      fVar34 = *(float *)(lVar19 + 0x18);
      *pfVar5 = fVar25;
      *pfVar1 = fVar26;
      fVar32 = *pfVar4;
      fVar35 = *(float *)(lVar20 + 0x18);
      fVar30 = *pfVar6;
      fVar27 = (*(float *)(param_5 + lVar17) - fVar32 * *(float *)(lVar20 + 0x1c)) -
               fVar30 * *(float *)(lVar20 + 0x20);
      fVar37 = *(float *)(lVar20 + 0x10);
      fVar39 = *(float *)(lVar20 + 0x14);
      *pfVar6 = fVar32;
      *pfVar4 = fVar27;
      fVar28 = *pfVar2;
      fVar33 = *(float *)(lVar21 + 0x18);
      fVar38 = *pfVar7;
      fVar30 = ((fVar37 * fVar27 + fVar32 * fVar39 + fVar30 * fVar35) -
               fVar28 * *(float *)(lVar21 + 0x1c)) - fVar38 * *(float *)(lVar21 + 0x20);
      fVar35 = *(float *)(lVar21 + 0x10);
      fVar40 = *(float *)(lVar21 + 0x14);
      *pfVar7 = fVar28;
      *pfVar2 = fVar30;
      fVar32 = *pfVar3;
      fVar37 = *(float *)(lVar22 + 0x18);
      fVar39 = *pfVar8;
      fVar41 = *(float *)(lVar22 + 0x10);
      fVar42 = *(float *)(lVar22 + 0x14);
      fVar27 = (*(float *)(param_5 + lVar17) - fVar32 * *(float *)(lVar22 + 0x1c)) -
               fVar39 * *(float *)(lVar22 + 0x20);
      *pfVar8 = fVar32;
      *pfVar3 = fVar27;
      *(float *)(param_4 + lVar17) =
           ((fVar31 * fVar26 + fVar25 * fVar36 + fVar29 * fVar34) * param_1 -
           (fVar35 * fVar30 + fVar28 * fVar40 + fVar38 * fVar33) * param_2) +
           (fVar41 * fVar27 + fVar32 * fVar42 + fVar39 * fVar37) * param_3;
      fVar25 = *pfVar1;
      fVar27 = *(float *)(lVar19 + 0x18);
      fVar32 = *pfVar5;
      fVar29 = (*(float *)(lVar18 + lVar17) - fVar25 * *(float *)(lVar19 + 0x1c)) -
               fVar32 * *(float *)(lVar19 + 0x20);
      fVar35 = *(float *)(lVar19 + 0x10);
      fVar38 = *(float *)(lVar19 + 0x14);
      *pfVar5 = fVar25;
      *pfVar1 = fVar29;
      fVar28 = *pfVar4;
      fVar31 = *(float *)(lVar20 + 0x18);
      fVar34 = *pfVar6;
      fVar26 = (*(float *)(lVar18 + lVar17) - fVar28 * *(float *)(lVar20 + 0x1c)) -
               fVar34 * *(float *)(lVar20 + 0x20);
      fVar37 = *(float *)(lVar20 + 0x10);
      fVar36 = *(float *)(lVar20 + 0x14);
      *pfVar6 = fVar28;
      *pfVar4 = fVar26;
      fVar30 = *pfVar2;
      fVar33 = *(float *)(lVar21 + 0x18);
      fVar39 = *pfVar7;
      fVar26 = ((fVar37 * fVar26 + fVar28 * fVar36 + fVar34 * fVar31) -
               fVar30 * *(float *)(lVar21 + 0x1c)) - fVar39 * *(float *)(lVar21 + 0x20);
      fVar37 = *(float *)(lVar21 + 0x10);
      fVar41 = *(float *)(lVar21 + 0x14);
      *pfVar7 = fVar30;
      *pfVar2 = fVar26;
      fVar34 = *pfVar3;
      fVar36 = *(float *)(lVar22 + 0x18);
      fVar40 = *pfVar8;
      fVar28 = (*(float *)(lVar18 + lVar17) - fVar34 * *(float *)(lVar22 + 0x1c)) -
               fVar40 * *(float *)(lVar22 + 0x20);
      fVar31 = *(float *)(lVar22 + 0x10);
      fVar42 = *(float *)(lVar22 + 0x14);
      *pfVar8 = fVar34;
      *pfVar3 = fVar28;
      *(float *)(param_4 + uVar13 + lVar17) =
           ((fVar35 * fVar29 + fVar25 * fVar38 + fVar32 * fVar27) * param_1 -
           (fVar37 * fVar26 + fVar30 * fVar41 + fVar39 * fVar33) * param_2) +
           (fVar31 * fVar28 + fVar34 * fVar42 + fVar40 * fVar36) * param_3;
      fVar28 = *pfVar1;
      fVar29 = *(float *)(lVar19 + 0x18);
      fVar35 = *pfVar5;
      fVar25 = (*(float *)(lVar12 + lVar17) - fVar28 * *(float *)(lVar19 + 0x1c)) -
               fVar35 * *(float *)(lVar19 + 0x20);
      fVar32 = *(float *)(lVar19 + 0x10);
      fVar38 = *(float *)(lVar19 + 0x14);
      *pfVar5 = fVar28;
      *pfVar1 = fVar25;
      fVar30 = *pfVar4;
      fVar31 = *(float *)(lVar20 + 0x18);
      fVar34 = *pfVar6;
      fVar36 = *(float *)(lVar20 + 0x10);
      fVar39 = *(float *)(lVar20 + 0x14);
      fVar26 = (*(float *)(lVar12 + lVar17) - fVar30 * *(float *)(lVar20 + 0x1c)) -
               fVar34 * *(float *)(lVar20 + 0x20);
      *pfVar6 = fVar30;
      *pfVar4 = fVar26;
      fVar27 = *pfVar2;
      fVar33 = *(float *)(lVar21 + 0x18);
      fVar37 = *pfVar7;
      fVar30 = ((fVar36 * fVar26 + fVar30 * fVar39 + fVar34 * fVar31) -
               fVar27 * *(float *)(lVar21 + 0x1c)) - fVar37 * *(float *)(lVar21 + 0x20);
      fVar39 = *(float *)(lVar21 + 0x10);
      fVar41 = *(float *)(lVar21 + 0x14);
      *pfVar7 = fVar27;
      *pfVar2 = fVar30;
      fVar34 = *pfVar3;
      fVar36 = *(float *)(lVar22 + 0x18);
      fVar40 = *pfVar8;
      fVar26 = (*(float *)(lVar12 + lVar17) - fVar34 * *(float *)(lVar22 + 0x1c)) -
               fVar40 * *(float *)(lVar22 + 0x20);
      fVar31 = *(float *)(lVar22 + 0x10);
      fVar42 = *(float *)(lVar22 + 0x14);
      *pfVar8 = fVar34;
      *pfVar3 = fVar26;
      *(float *)(param_4 + uVar24 + lVar17) =
           ((fVar32 * fVar25 + fVar28 * fVar38 + fVar35 * fVar29) * param_1 -
           (fVar39 * fVar30 + fVar27 * fVar41 + fVar37 * fVar33) * param_2) +
           (fVar31 * fVar26 + fVar34 * fVar42 + fVar40 * fVar36) * param_3;
      fVar28 = *pfVar1;
      fVar29 = *(float *)(lVar19 + 0x18);
      fVar35 = *pfVar5;
      fVar25 = (*(float *)(lVar15 + lVar17) - fVar28 * *(float *)(lVar19 + 0x1c)) -
               fVar35 * *(float *)(lVar19 + 0x20);
      fVar32 = *(float *)(lVar19 + 0x10);
      fVar38 = *(float *)(lVar19 + 0x14);
      *pfVar5 = fVar28;
      *pfVar1 = fVar25;
      fVar30 = *pfVar4;
      fVar31 = *(float *)(lVar20 + 0x18);
      fVar34 = *pfVar6;
      fVar26 = (*(float *)(lVar15 + lVar17) - fVar30 * *(float *)(lVar20 + 0x1c)) -
               fVar34 * *(float *)(lVar20 + 0x20);
      fVar39 = *(float *)(lVar20 + 0x10);
      fVar36 = *(float *)(lVar20 + 0x14);
      *pfVar6 = fVar30;
      *pfVar4 = fVar26;
      fVar27 = *pfVar2;
      fVar37 = *(float *)(lVar21 + 0x18);
      fVar33 = *pfVar7;
      fVar30 = ((fVar39 * fVar26 + fVar30 * fVar36 + fVar34 * fVar31) -
               fVar27 * *(float *)(lVar21 + 0x1c)) - fVar33 * *(float *)(lVar21 + 0x20);
      fVar39 = *(float *)(lVar21 + 0x10);
      fVar41 = *(float *)(lVar21 + 0x14);
      *pfVar7 = fVar27;
      *pfVar2 = fVar30;
      fVar31 = *pfVar3;
      fVar36 = *(float *)(lVar22 + 0x18);
      fVar40 = *pfVar8;
      fVar26 = (*(float *)(lVar15 + lVar17) - fVar31 * *(float *)(lVar22 + 0x1c)) -
               fVar40 * *(float *)(lVar22 + 0x20);
      fVar34 = *(float *)(lVar22 + 0x10);
      fVar42 = *(float *)(lVar22 + 0x14);
      *pfVar8 = fVar31;
      *pfVar3 = fVar26;
      *(float *)(param_4 + uVar23 + lVar17) =
           ((fVar32 * fVar25 + fVar28 * fVar38 + fVar35 * fVar29) * param_1 -
           (fVar39 * fVar30 + fVar27 * fVar41 + fVar33 * fVar37) * param_2) +
           (fVar34 * fVar26 + fVar31 * fVar42 + fVar40 * fVar36) * param_3;
      iVar16 = iVar16 + -1;
      lVar17 = lVar17 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2);
    } while (iVar16 != 0);
  }
  if ((param_6 & 3) != 0) {
    lVar15 = 0;
    uVar13 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
    pfVar5 = (float *)(param_9 + uVar13);
    lVar18 = *(long *)(pfVar5 + 2);
    pfVar6 = (float *)(param_11 + uVar13);
    lVar17 = *(long *)(pfVar6 + 2);
    pfVar7 = (float *)(param_10 + uVar13);
    lVar19 = *(long *)(pfVar7 + 2);
    pfVar8 = (float *)(param_12 + uVar13);
    lVar12 = *(long *)(pfVar8 + 2);
    iVar16 = -(param_6 & 3);
    do {
      fVar26 = *pfVar5;
      fVar29 = pfVar5[1];
      fVar25 = (*(float *)(lVar10 + lVar15) - fVar26 * *(float *)(lVar18 + 0x1c)) -
               fVar29 * *(float *)(lVar18 + 0x20);
      fVar32 = *(float *)(lVar18 + 0x10);
      fVar38 = *(float *)(lVar18 + 0x14);
      fVar35 = *(float *)(lVar18 + 0x18);
      pfVar5[1] = fVar26;
      *pfVar5 = fVar25;
      fVar30 = *pfVar6;
      fVar33 = *(float *)(lVar17 + 0x18);
      fVar34 = pfVar6[1];
      fVar27 = (*(float *)(lVar10 + lVar15) - fVar30 * *(float *)(lVar17 + 0x1c)) -
               fVar34 * *(float *)(lVar17 + 0x20);
      fVar36 = *(float *)(lVar17 + 0x10);
      fVar39 = *(float *)(lVar17 + 0x14);
      pfVar6[1] = fVar30;
      *pfVar6 = fVar27;
      fVar28 = *pfVar7;
      fVar31 = *(float *)(lVar19 + 0x18);
      fVar37 = pfVar7[1];
      fVar33 = ((fVar36 * fVar27 + fVar30 * fVar39 + fVar34 * fVar33) -
               fVar28 * *(float *)(lVar19 + 0x1c)) - fVar37 * *(float *)(lVar19 + 0x20);
      fVar39 = *(float *)(lVar19 + 0x10);
      fVar41 = *(float *)(lVar19 + 0x14);
      pfVar7[1] = fVar28;
      *pfVar7 = fVar33;
      fVar30 = *pfVar8;
      fVar34 = *(float *)(lVar12 + 0x18);
      fVar36 = pfVar8[1];
      fVar27 = (*(float *)(lVar10 + lVar15) - fVar30 * *(float *)(lVar12 + 0x1c)) -
               fVar36 * *(float *)(lVar12 + 0x20);
      fVar40 = *(float *)(lVar12 + 0x10);
      fVar42 = *(float *)(lVar12 + 0x14);
      pfVar8[1] = fVar30;
      *pfVar8 = fVar27;
      *(float *)(lVar14 + lVar15) =
           ((fVar32 * fVar25 + fVar26 * fVar38 + fVar29 * fVar35) * param_1 -
           (fVar39 * fVar33 + fVar28 * fVar41 + fVar37 * fVar31) * param_2) +
           (fVar40 * fVar27 + fVar30 * fVar42 + fVar36 * fVar34) * param_3;
      iVar16 = iVar16 + 1;
      lVar15 = lVar15 + (-(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2);
    } while (iVar16 != 0);
  }
  return;
}




void FUN_1006347a4(float param_1,float param_2,float param_3,long param_4,long param_5,uint param_6,
                  ulong param_7,ulong param_8,long param_9,long param_10,long param_11,long param_12
                  )

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  
  iVar26 = (int)param_6 >> 2;
  lVar22 = param_4;
  lVar18 = param_5;
  if (iVar26 != 0) {
    lVar27 = 0;
    iVar20 = (int)param_7;
    uVar17 = iVar20 << 2;
    uVar30 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
    uVar21 = -(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2;
    pfVar9 = (float *)(param_11 + uVar30);
    pfVar10 = (float *)(param_12 + uVar30);
    uVar31 = -(ulong)((uint)(iVar20 * 2) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar20 * 2) << 2;
    pfVar11 = (float *)(param_9 + uVar30);
    lVar28 = *(long *)(pfVar11 + 2);
    lVar25 = param_5 + uVar31;
    lVar22 = ((ulong)(iVar26 - 1) * 4 + 4) * (long)(int)uVar17;
    pfVar12 = (float *)(param_10 + uVar30);
    pfVar13 = pfVar11 + 1;
    pfVar14 = pfVar11 + 0x80;
    lVar33 = *(long *)(pfVar11 + 0x82);
    pfVar15 = pfVar11 + 0x81;
    lVar34 = *(long *)(pfVar9 + 2);
    pfVar16 = pfVar9 + 1;
    pfVar1 = pfVar9 + 0x80;
    lVar35 = *(long *)(pfVar9 + 0x82);
    pfVar2 = pfVar9 + 0x81;
    lVar36 = *(long *)(pfVar12 + 2);
    pfVar3 = pfVar12 + 1;
    pfVar4 = pfVar12 + 0x80;
    lVar24 = *(long *)(pfVar12 + 0x82);
    pfVar5 = pfVar12 + 0x81;
    uVar30 = -(ulong)((uint)(iVar20 * 3) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar20 * 3) << 2;
    lVar19 = param_5 + uVar30;
    lVar18 = param_5 + lVar22;
    lVar22 = param_4 + lVar22;
    lVar23 = param_5 + uVar21;
    lVar32 = *(long *)(pfVar10 + 2);
    pfVar6 = pfVar10 + 1;
    pfVar7 = pfVar10 + 0x80;
    lVar29 = *(long *)(pfVar10 + 0x82);
    pfVar8 = pfVar10 + 0x81;
    do {
      fVar37 = *pfVar11;
      fVar40 = *pfVar13;
      fVar53 = *(float *)(lVar28 + 0x14);
      fVar43 = *(float *)(lVar28 + 0x18);
      fVar46 = *(float *)(lVar28 + 0x10);
      fVar38 = (*(float *)(param_5 + lVar27) - fVar37 * *(float *)(lVar28 + 0x1c)) -
               fVar40 * *(float *)(lVar28 + 0x20);
      *pfVar13 = fVar37;
      *pfVar11 = fVar38;
      fVar39 = *pfVar14;
      fVar41 = *(float *)(lVar33 + 0x18);
      fVar42 = *pfVar15;
      fVar37 = ((fVar46 * fVar38 + fVar37 * fVar53 + fVar40 * fVar43) -
               fVar39 * *(float *)(lVar33 + 0x1c)) - fVar42 * *(float *)(lVar33 + 0x20);
      fVar44 = *(float *)(lVar33 + 0x10);
      fVar47 = *(float *)(lVar33 + 0x14);
      *pfVar15 = fVar39;
      *pfVar14 = fVar37;
      fVar46 = *pfVar9;
      fVar45 = *(float *)(lVar34 + 0x18);
      fVar43 = *pfVar16;
      fVar38 = (*(float *)(param_5 + lVar27) - fVar46 * *(float *)(lVar34 + 0x1c)) -
               fVar43 * *(float *)(lVar34 + 0x20);
      fVar48 = *(float *)(lVar34 + 0x10);
      fVar54 = *(float *)(lVar34 + 0x14);
      *pfVar16 = fVar46;
      *pfVar9 = fVar38;
      fVar40 = *pfVar1;
      fVar53 = *(float *)(lVar35 + 0x18);
      fVar49 = *pfVar2;
      fVar43 = ((fVar48 * fVar38 + fVar46 * fVar54 + fVar43 * fVar45) -
               fVar40 * *(float *)(lVar35 + 0x1c)) - fVar49 * *(float *)(lVar35 + 0x20);
      fVar45 = *(float *)(lVar35 + 0x10);
      fVar54 = *(float *)(lVar35 + 0x14);
      *pfVar2 = fVar40;
      *pfVar1 = fVar43;
      fVar38 = *pfVar12;
      fVar46 = *(float *)(lVar36 + 0x18);
      fVar48 = *pfVar3;
      fVar43 = ((fVar45 * fVar43 + fVar40 * fVar54 + fVar49 * fVar53) -
               fVar38 * *(float *)(lVar36 + 0x1c)) - fVar48 * *(float *)(lVar36 + 0x20);
      fVar45 = *(float *)(lVar36 + 0x10);
      fVar49 = *(float *)(lVar36 + 0x14);
      *pfVar3 = fVar38;
      *pfVar12 = fVar43;
      fVar40 = *pfVar4;
      fVar53 = *(float *)(lVar24 + 0x18);
      fVar50 = *pfVar5;
      fVar46 = ((fVar45 * fVar43 + fVar38 * fVar49 + fVar48 * fVar46) -
               fVar40 * *(float *)(lVar24 + 0x1c)) - fVar50 * *(float *)(lVar24 + 0x20);
      fVar48 = *(float *)(lVar24 + 0x10);
      fVar55 = *(float *)(lVar24 + 0x14);
      *pfVar5 = fVar40;
      *pfVar4 = fVar46;
      fVar45 = *pfVar10;
      fVar49 = *(float *)(lVar32 + 0x18);
      fVar51 = *pfVar6;
      fVar56 = *(float *)(lVar32 + 0x10);
      fVar58 = *(float *)(lVar32 + 0x14);
      fVar38 = (*(float *)(param_5 + lVar27) - fVar45 * *(float *)(lVar32 + 0x1c)) -
               fVar51 * *(float *)(lVar32 + 0x20);
      *pfVar6 = fVar45;
      *pfVar10 = fVar38;
      fVar43 = *pfVar7;
      fVar54 = *(float *)(lVar29 + 0x18);
      fVar52 = *pfVar8;
      fVar57 = *(float *)(lVar29 + 0x10);
      fVar59 = *(float *)(lVar29 + 0x14);
      fVar38 = ((fVar56 * fVar38 + fVar45 * fVar58 + fVar51 * fVar49) -
               fVar43 * *(float *)(lVar29 + 0x1c)) - fVar52 * *(float *)(lVar29 + 0x20);
      *pfVar8 = fVar43;
      *pfVar7 = fVar38;
      *(float *)(param_4 + lVar27) =
           (fVar44 * fVar37 + fVar39 * fVar47 + fVar42 * fVar41) * param_1 +
           (fVar48 * fVar46 + fVar40 * fVar55 + fVar50 * fVar53) * param_2 +
           (fVar57 * fVar38 + fVar43 * fVar59 + fVar52 * fVar54) * param_3;
      fVar37 = *pfVar11;
      fVar39 = *(float *)(lVar28 + 0x18);
      fVar43 = *pfVar13;
      fVar40 = (*(float *)(lVar23 + lVar27) - fVar37 * *(float *)(lVar28 + 0x1c)) -
               fVar43 * *(float *)(lVar28 + 0x20);
      fVar46 = *(float *)(lVar28 + 0x10);
      fVar42 = *(float *)(lVar28 + 0x14);
      *pfVar13 = fVar37;
      *pfVar11 = fVar40;
      fVar38 = *pfVar14;
      fVar41 = *(float *)(lVar33 + 0x18);
      fVar53 = *pfVar15;
      fVar37 = ((fVar46 * fVar40 + fVar37 * fVar42 + fVar43 * fVar39) -
               fVar38 * *(float *)(lVar33 + 0x1c)) - fVar53 * *(float *)(lVar33 + 0x20);
      fVar49 = *(float *)(lVar33 + 0x10);
      fVar50 = *(float *)(lVar33 + 0x14);
      *pfVar15 = fVar38;
      *pfVar14 = fVar37;
      fVar39 = *pfVar9;
      fVar46 = *(float *)(lVar34 + 0x18);
      fVar44 = *pfVar16;
      fVar40 = (*(float *)(lVar23 + lVar27) - fVar39 * *(float *)(lVar34 + 0x1c)) -
               fVar44 * *(float *)(lVar34 + 0x20);
      fVar45 = *(float *)(lVar34 + 0x10);
      fVar54 = *(float *)(lVar34 + 0x14);
      *pfVar16 = fVar39;
      *pfVar9 = fVar40;
      fVar43 = *pfVar1;
      fVar42 = *(float *)(lVar35 + 0x18);
      fVar48 = *pfVar2;
      fVar39 = ((fVar45 * fVar40 + fVar39 * fVar54 + fVar44 * fVar46) -
               fVar43 * *(float *)(lVar35 + 0x1c)) - fVar48 * *(float *)(lVar35 + 0x20);
      fVar46 = *(float *)(lVar35 + 0x10);
      fVar44 = *(float *)(lVar35 + 0x14);
      *pfVar2 = fVar43;
      *pfVar1 = fVar39;
      fVar40 = *pfVar12;
      fVar45 = *(float *)(lVar36 + 0x18);
      fVar54 = *pfVar3;
      fVar39 = ((fVar46 * fVar39 + fVar43 * fVar44 + fVar48 * fVar42) -
               fVar40 * *(float *)(lVar36 + 0x1c)) - fVar54 * *(float *)(lVar36 + 0x20);
      fVar43 = *(float *)(lVar36 + 0x10);
      fVar42 = *(float *)(lVar36 + 0x14);
      *pfVar3 = fVar40;
      *pfVar12 = fVar39;
      fVar46 = *pfVar4;
      fVar44 = *(float *)(lVar24 + 0x18);
      fVar51 = *pfVar5;
      fVar39 = ((fVar43 * fVar39 + fVar40 * fVar42 + fVar54 * fVar45) -
               fVar46 * *(float *)(lVar24 + 0x1c)) - fVar51 * *(float *)(lVar24 + 0x20);
      fVar54 = *(float *)(lVar24 + 0x10);
      fVar56 = *(float *)(lVar24 + 0x14);
      *pfVar5 = fVar46;
      *pfVar4 = fVar39;
      fVar45 = *pfVar10;
      fVar47 = *(float *)(lVar32 + 0x18);
      fVar52 = *pfVar6;
      fVar40 = (*(float *)(lVar23 + lVar27) - fVar45 * *(float *)(lVar32 + 0x1c)) -
               fVar52 * *(float *)(lVar32 + 0x20);
      fVar42 = *(float *)(lVar32 + 0x10);
      fVar57 = *(float *)(lVar32 + 0x14);
      *pfVar6 = fVar45;
      *pfVar10 = fVar40;
      fVar43 = *pfVar7;
      fVar48 = *(float *)(lVar29 + 0x18);
      fVar55 = *pfVar8;
      fVar40 = ((fVar42 * fVar40 + fVar45 * fVar57 + fVar52 * fVar47) -
               fVar43 * *(float *)(lVar29 + 0x1c)) - fVar55 * *(float *)(lVar29 + 0x20);
      fVar42 = *(float *)(lVar29 + 0x10);
      fVar45 = *(float *)(lVar29 + 0x14);
      *pfVar8 = fVar43;
      *pfVar7 = fVar40;
      *(float *)(param_4 + uVar21 + lVar27) =
           (fVar49 * fVar37 + fVar38 * fVar50 + fVar53 * fVar41) * param_1 +
           (fVar54 * fVar39 + fVar46 * fVar56 + fVar51 * fVar44) * param_2 +
           (fVar42 * fVar40 + fVar43 * fVar45 + fVar55 * fVar48) * param_3;
      fVar39 = *pfVar11;
      fVar43 = *(float *)(lVar28 + 0x18);
      fVar46 = *pfVar13;
      fVar37 = (*(float *)(lVar25 + lVar27) - fVar39 * *(float *)(lVar28 + 0x1c)) -
               fVar46 * *(float *)(lVar28 + 0x20);
      fVar41 = *(float *)(lVar28 + 0x10);
      fVar42 = *(float *)(lVar28 + 0x14);
      *pfVar13 = fVar39;
      *pfVar11 = fVar37;
      fVar38 = *pfVar14;
      fVar40 = *(float *)(lVar33 + 0x18);
      fVar49 = *pfVar15;
      fVar41 = ((fVar41 * fVar37 + fVar39 * fVar42 + fVar46 * fVar43) -
               fVar38 * *(float *)(lVar33 + 0x1c)) - fVar49 * *(float *)(lVar33 + 0x20);
      fVar53 = *(float *)(lVar33 + 0x10);
      fVar50 = *(float *)(lVar33 + 0x14);
      *pfVar15 = fVar38;
      *pfVar14 = fVar41;
      fVar39 = *pfVar9;
      fVar46 = *(float *)(lVar34 + 0x18);
      fVar37 = *pfVar16;
      fVar48 = *(float *)(lVar34 + 0x10);
      fVar47 = *(float *)(lVar34 + 0x14);
      fVar45 = (*(float *)(lVar25 + lVar27) - fVar39 * *(float *)(lVar34 + 0x1c)) -
               fVar37 * *(float *)(lVar34 + 0x20);
      *pfVar16 = fVar39;
      *pfVar9 = fVar45;
      fVar43 = *pfVar1;
      fVar42 = *(float *)(lVar35 + 0x18);
      fVar44 = *pfVar2;
      fVar54 = *(float *)(lVar35 + 0x10);
      fVar51 = *(float *)(lVar35 + 0x14);
      fVar37 = ((fVar48 * fVar45 + fVar39 * fVar47 + fVar37 * fVar46) -
               fVar43 * *(float *)(lVar35 + 0x1c)) - fVar44 * *(float *)(lVar35 + 0x20);
      *pfVar2 = fVar43;
      *pfVar1 = fVar37;
      fVar39 = *pfVar12;
      fVar45 = *(float *)(lVar36 + 0x18);
      fVar48 = *pfVar3;
      fVar47 = *(float *)(lVar36 + 0x10);
      fVar52 = *(float *)(lVar36 + 0x14);
      fVar37 = ((fVar54 * fVar37 + fVar43 * fVar51 + fVar44 * fVar42) -
               fVar39 * *(float *)(lVar36 + 0x1c)) - fVar48 * *(float *)(lVar36 + 0x20);
      *pfVar3 = fVar39;
      *pfVar12 = fVar37;
      fVar46 = *pfVar4;
      fVar44 = *(float *)(lVar24 + 0x18);
      fVar54 = *pfVar5;
      fVar37 = ((fVar47 * fVar37 + fVar39 * fVar52 + fVar48 * fVar45) -
               fVar46 * *(float *)(lVar24 + 0x1c)) - fVar54 * *(float *)(lVar24 + 0x20);
      fVar51 = *(float *)(lVar24 + 0x10);
      fVar56 = *(float *)(lVar24 + 0x14);
      *pfVar5 = fVar46;
      *pfVar4 = fVar37;
      fVar45 = *pfVar10;
      fVar47 = *(float *)(lVar32 + 0x18);
      fVar52 = *pfVar6;
      fVar39 = (*(float *)(lVar25 + lVar27) - fVar45 * *(float *)(lVar32 + 0x1c)) -
               fVar52 * *(float *)(lVar32 + 0x20);
      fVar42 = *(float *)(lVar32 + 0x10);
      fVar57 = *(float *)(lVar32 + 0x14);
      *pfVar6 = fVar45;
      *pfVar10 = fVar39;
      fVar43 = *pfVar7;
      fVar48 = *(float *)(lVar29 + 0x18);
      fVar55 = *pfVar8;
      fVar39 = ((fVar42 * fVar39 + fVar45 * fVar57 + fVar52 * fVar47) -
               fVar43 * *(float *)(lVar29 + 0x1c)) - fVar55 * *(float *)(lVar29 + 0x20);
      fVar42 = *(float *)(lVar29 + 0x10);
      fVar45 = *(float *)(lVar29 + 0x14);
      *pfVar8 = fVar43;
      *pfVar7 = fVar39;
      *(float *)(param_4 + uVar31 + lVar27) =
           (fVar53 * fVar41 + fVar38 * fVar50 + fVar49 * fVar40) * param_1 +
           (fVar51 * fVar37 + fVar46 * fVar56 + fVar54 * fVar44) * param_2 +
           (fVar42 * fVar39 + fVar43 * fVar45 + fVar55 * fVar48) * param_3;
      fVar39 = *pfVar11;
      fVar40 = *(float *)(lVar28 + 0x18);
      fVar46 = *pfVar13;
      fVar37 = (*(float *)(lVar19 + lVar27) - fVar39 * *(float *)(lVar28 + 0x1c)) -
               fVar46 * *(float *)(lVar28 + 0x20);
      fVar41 = *(float *)(lVar28 + 0x10);
      fVar42 = *(float *)(lVar28 + 0x14);
      *pfVar13 = fVar39;
      *pfVar11 = fVar37;
      fVar38 = *pfVar14;
      fVar43 = *(float *)(lVar33 + 0x18);
      fVar49 = *pfVar15;
      fVar37 = ((fVar41 * fVar37 + fVar39 * fVar42 + fVar46 * fVar40) -
               fVar38 * *(float *)(lVar33 + 0x1c)) - fVar49 * *(float *)(lVar33 + 0x20);
      fVar53 = *(float *)(lVar33 + 0x10);
      fVar50 = *(float *)(lVar33 + 0x14);
      *pfVar15 = fVar38;
      *pfVar14 = fVar37;
      fVar41 = *pfVar9;
      fVar46 = *(float *)(lVar34 + 0x18);
      fVar45 = *pfVar16;
      fVar39 = (*(float *)(lVar19 + lVar27) - fVar41 * *(float *)(lVar34 + 0x1c)) -
               fVar45 * *(float *)(lVar34 + 0x20);
      fVar54 = *(float *)(lVar34 + 0x10);
      fVar48 = *(float *)(lVar34 + 0x14);
      *pfVar16 = fVar41;
      *pfVar9 = fVar39;
      fVar40 = *pfVar1;
      fVar44 = *(float *)(lVar35 + 0x18);
      fVar42 = *pfVar2;
      fVar39 = ((fVar54 * fVar39 + fVar41 * fVar48 + fVar45 * fVar46) -
               fVar40 * *(float *)(lVar35 + 0x1c)) - fVar42 * *(float *)(lVar35 + 0x20);
      fVar54 = *(float *)(lVar35 + 0x10);
      fVar45 = *(float *)(lVar35 + 0x14);
      *pfVar2 = fVar40;
      *pfVar1 = fVar39;
      fVar41 = *pfVar12;
      fVar48 = *(float *)(lVar36 + 0x18);
      fVar46 = *pfVar3;
      fVar39 = ((fVar54 * fVar39 + fVar40 * fVar45 + fVar42 * fVar44) -
               fVar41 * *(float *)(lVar36 + 0x1c)) - fVar46 * *(float *)(lVar36 + 0x20);
      fVar44 = *(float *)(lVar36 + 0x10);
      fVar42 = *(float *)(lVar36 + 0x14);
      *pfVar3 = fVar41;
      *pfVar12 = fVar39;
      fVar40 = *pfVar4;
      fVar54 = *(float *)(lVar24 + 0x18);
      fVar45 = *pfVar5;
      fVar41 = ((fVar44 * fVar39 + fVar41 * fVar42 + fVar46 * fVar48) -
               fVar40 * *(float *)(lVar24 + 0x1c)) - fVar45 * *(float *)(lVar24 + 0x20);
      fVar51 = *(float *)(lVar24 + 0x10);
      fVar56 = *(float *)(lVar24 + 0x14);
      *pfVar5 = fVar40;
      *pfVar4 = fVar41;
      fVar46 = *pfVar10;
      fVar47 = *(float *)(lVar32 + 0x18);
      fVar52 = *pfVar6;
      fVar39 = (*(float *)(lVar19 + lVar27) - fVar46 * *(float *)(lVar32 + 0x1c)) -
               fVar52 * *(float *)(lVar32 + 0x20);
      fVar44 = *(float *)(lVar32 + 0x10);
      fVar57 = *(float *)(lVar32 + 0x14);
      *pfVar6 = fVar46;
      *pfVar10 = fVar39;
      fVar42 = *pfVar7;
      fVar48 = *(float *)(lVar29 + 0x18);
      fVar55 = *pfVar8;
      fVar39 = ((fVar44 * fVar39 + fVar46 * fVar57 + fVar52 * fVar47) -
               fVar42 * *(float *)(lVar29 + 0x1c)) - fVar55 * *(float *)(lVar29 + 0x20);
      fVar46 = *(float *)(lVar29 + 0x10);
      fVar44 = *(float *)(lVar29 + 0x14);
      *pfVar8 = fVar42;
      *pfVar7 = fVar39;
      *(float *)(param_4 + uVar30 + lVar27) =
           (fVar53 * fVar37 + fVar38 * fVar50 + fVar49 * fVar43) * param_1 +
           (fVar51 * fVar41 + fVar40 * fVar56 + fVar45 * fVar54) * param_2 +
           (fVar46 * fVar39 + fVar42 * fVar44 + fVar55 * fVar48) * param_3;
      iVar26 = iVar26 + -1;
      lVar27 = lVar27 + (-(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2);
    } while (iVar26 != 0);
  }
  if ((param_6 & 3) != 0) {
    lVar25 = 0;
    uVar21 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
    pfVar13 = (float *)(param_9 + uVar21);
    lVar27 = *(long *)(pfVar13 + 2);
    lVar24 = *(long *)(pfVar13 + 0x82);
    pfVar14 = (float *)(param_11 + uVar21);
    lVar28 = *(long *)(pfVar14 + 2);
    lVar19 = *(long *)(pfVar14 + 0x82);
    pfVar15 = (float *)(param_10 + uVar21);
    lVar23 = *(long *)(pfVar15 + 2);
    lVar29 = *(long *)(pfVar15 + 0x82);
    pfVar16 = (float *)(param_12 + uVar21);
    lVar32 = *(long *)(pfVar16 + 2);
    lVar33 = *(long *)(pfVar16 + 0x82);
    iVar26 = -(param_6 & 3);
    do {
      fVar39 = *pfVar13;
      fVar43 = pfVar13[1];
      fVar37 = (*(float *)(lVar18 + lVar25) - fVar39 * *(float *)(lVar27 + 0x1c)) -
               fVar43 * *(float *)(lVar27 + 0x20);
      fVar41 = *(float *)(lVar27 + 0x10);
      fVar42 = *(float *)(lVar27 + 0x14);
      fVar46 = *(float *)(lVar27 + 0x18);
      pfVar13[1] = fVar39;
      *pfVar13 = fVar37;
      fVar38 = pfVar13[0x80];
      fVar40 = *(float *)(lVar24 + 0x18);
      fVar45 = pfVar13[0x81];
      fVar41 = ((fVar41 * fVar37 + fVar39 * fVar42 + fVar43 * fVar46) -
               fVar38 * *(float *)(lVar24 + 0x1c)) - fVar45 * *(float *)(lVar24 + 0x20);
      fVar49 = *(float *)(lVar24 + 0x10);
      fVar51 = *(float *)(lVar24 + 0x14);
      pfVar13[0x81] = fVar38;
      pfVar13[0x80] = fVar41;
      fVar43 = *pfVar14;
      fVar42 = *(float *)(lVar28 + 0x18);
      fVar53 = pfVar14[1];
      fVar37 = (*(float *)(lVar18 + lVar25) - fVar43 * *(float *)(lVar28 + 0x1c)) -
               fVar53 * *(float *)(lVar28 + 0x20);
      fVar48 = *(float *)(lVar28 + 0x10);
      fVar54 = *(float *)(lVar28 + 0x14);
      pfVar14[1] = fVar43;
      *pfVar14 = fVar37;
      fVar39 = pfVar14[0x80];
      fVar46 = *(float *)(lVar19 + 0x18);
      fVar44 = pfVar14[0x81];
      fVar43 = ((fVar48 * fVar37 + fVar43 * fVar54 + fVar53 * fVar42) -
               fVar39 * *(float *)(lVar19 + 0x1c)) - fVar44 * *(float *)(lVar19 + 0x20);
      fVar48 = *(float *)(lVar19 + 0x10);
      fVar54 = *(float *)(lVar19 + 0x14);
      pfVar14[0x81] = fVar39;
      pfVar14[0x80] = fVar43;
      fVar37 = *pfVar15;
      fVar42 = *(float *)(lVar23 + 0x18);
      fVar53 = pfVar15[1];
      fVar43 = ((fVar48 * fVar43 + fVar39 * fVar54 + fVar44 * fVar46) -
               fVar37 * *(float *)(lVar23 + 0x1c)) - fVar53 * *(float *)(lVar23 + 0x20);
      fVar44 = *(float *)(lVar23 + 0x10);
      fVar48 = *(float *)(lVar23 + 0x14);
      pfVar15[1] = fVar37;
      *pfVar15 = fVar43;
      fVar39 = pfVar15[0x80];
      fVar46 = *(float *)(lVar29 + 0x18);
      fVar54 = pfVar15[0x81];
      fVar44 = ((fVar44 * fVar43 + fVar37 * fVar48 + fVar53 * fVar42) -
               fVar39 * *(float *)(lVar29 + 0x1c)) - fVar54 * *(float *)(lVar29 + 0x20);
      fVar52 = *(float *)(lVar29 + 0x10);
      fVar56 = *(float *)(lVar29 + 0x14);
      pfVar15[0x81] = fVar39;
      pfVar15[0x80] = fVar44;
      fVar42 = *pfVar16;
      fVar48 = *(float *)(lVar32 + 0x18);
      fVar47 = pfVar16[1];
      fVar37 = (*(float *)(lVar18 + lVar25) - fVar42 * *(float *)(lVar32 + 0x1c)) -
               fVar47 * *(float *)(lVar32 + 0x20);
      fVar55 = *(float *)(lVar32 + 0x10);
      fVar57 = *(float *)(lVar32 + 0x14);
      pfVar16[1] = fVar42;
      *pfVar16 = fVar37;
      fVar43 = pfVar16[0x80];
      fVar53 = *(float *)(lVar33 + 0x18);
      fVar50 = pfVar16[0x81];
      fVar37 = ((fVar55 * fVar37 + fVar42 * fVar57 + fVar47 * fVar48) -
               fVar43 * *(float *)(lVar33 + 0x1c)) - fVar50 * *(float *)(lVar33 + 0x20);
      fVar42 = *(float *)(lVar33 + 0x10);
      fVar48 = *(float *)(lVar33 + 0x14);
      pfVar16[0x81] = fVar43;
      pfVar16[0x80] = fVar37;
      *(float *)(lVar22 + lVar25) =
           (fVar49 * fVar41 + fVar38 * fVar51 + fVar45 * fVar40) * param_1 +
           (fVar52 * fVar44 + fVar39 * fVar56 + fVar54 * fVar46) * param_2 +
           (fVar42 * fVar37 + fVar43 * fVar48 + fVar50 * fVar53) * param_3;
      iVar26 = iVar26 + 1;
      lVar25 = lVar25 + (-(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2);
    } while (iVar26 != 0);
  }
  return;
}




void FUN_100635460(float param_1,float param_2,float param_3,long param_4,long param_5,uint param_6,
                  ulong param_7,ulong param_8,long param_9,long param_10,long param_11,long param_12
                  )

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  int iVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  int iVar58;
  long lVar59;
  long lVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  
  iVar58 = (int)param_6 >> 2;
  lVar48 = param_4;
  lVar44 = param_5;
  if (iVar58 != 0) {
    lVar43 = 0;
    uVar40 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
    iVar51 = (int)param_7;
    uVar33 = iVar51 << 2;
    uVar47 = -(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2;
    pfVar25 = (float *)(param_9 + uVar40);
    pfVar26 = (float *)(param_11 + uVar40);
    pfVar27 = (float *)(param_10 + uVar40);
    pfVar28 = (float *)(param_12 + uVar40);
    uVar40 = -(ulong)((uint)(iVar51 * 2) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar51 * 2) << 2;
    lVar42 = param_5 + uVar47;
    lVar54 = *(long *)(pfVar25 + 2);
    pfVar29 = pfVar25 + 1;
    pfVar30 = pfVar25 + 0x80;
    lVar56 = *(long *)(pfVar25 + 0x82);
    pfVar31 = pfVar25 + 0x81;
    pfVar32 = pfVar25 + 0x100;
    lVar59 = *(long *)(pfVar25 + 0x102);
    pfVar1 = pfVar25 + 0x101;
    pfVar2 = pfVar25 + 0x180;
    lVar41 = *(long *)(pfVar25 + 0x182);
    pfVar3 = pfVar25 + 0x181;
    lVar39 = *(long *)(pfVar26 + 2);
    pfVar4 = pfVar26 + 1;
    pfVar5 = pfVar26 + 0x80;
    lVar38 = *(long *)(pfVar26 + 0x82);
    uVar45 = -(ulong)((uint)(iVar51 * 3) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)(iVar51 * 3) << 2;
    lVar34 = param_5 + uVar40;
    lVar48 = ((ulong)(iVar58 - 1) * 4 + 4) * (long)(int)uVar33;
    lVar35 = param_5 + uVar45;
    lVar44 = param_5 + lVar48;
    lVar48 = param_4 + lVar48;
    pfVar6 = pfVar26 + 0x81;
    lVar49 = *(long *)(pfVar26 + 0x102);
    pfVar7 = pfVar26 + 0x100;
    lVar36 = *(long *)(pfVar26 + 0x182);
    pfVar8 = pfVar26 + 0x101;
    pfVar9 = pfVar26 + 0x180;
    lVar52 = *(long *)(pfVar27 + 2);
    pfVar10 = pfVar26 + 0x181;
    pfVar11 = pfVar27 + 1;
    lVar55 = *(long *)(pfVar27 + 0x82);
    pfVar12 = pfVar27 + 0x80;
    pfVar13 = pfVar27 + 0x81;
    lVar60 = *(long *)(pfVar27 + 0x102);
    pfVar14 = pfVar27 + 0x100;
    pfVar15 = pfVar27 + 0x101;
    lVar46 = *(long *)(pfVar27 + 0x182);
    pfVar16 = pfVar27 + 0x180;
    pfVar17 = pfVar27 + 0x181;
    lVar37 = *(long *)(pfVar28 + 2);
    pfVar18 = pfVar28 + 1;
    pfVar19 = pfVar28 + 0x80;
    lVar50 = *(long *)(pfVar28 + 0x82);
    pfVar20 = pfVar28 + 0x81;
    pfVar21 = pfVar28 + 0x100;
    lVar53 = *(long *)(pfVar28 + 0x102);
    pfVar22 = pfVar28 + 0x101;
    pfVar23 = pfVar28 + 0x180;
    lVar57 = *(long *)(pfVar28 + 0x182);
    pfVar24 = pfVar28 + 0x181;
    do {
      fVar61 = *pfVar25;
      fVar64 = *pfVar29;
      fVar75 = *(float *)(lVar54 + 0x14);
      fVar67 = *(float *)(lVar54 + 0x18);
      fVar68 = *(float *)(lVar54 + 0x10);
      fVar62 = (*(float *)(param_5 + lVar43) - fVar61 * *(float *)(lVar54 + 0x1c)) -
               fVar64 * *(float *)(lVar54 + 0x20);
      *pfVar29 = fVar61;
      *pfVar25 = fVar62;
      fVar63 = *pfVar30;
      fVar65 = *(float *)(lVar56 + 0x18);
      fVar66 = *pfVar31;
      fVar69 = *(float *)(lVar56 + 0x10);
      fVar76 = *(float *)(lVar56 + 0x14);
      fVar61 = ((fVar68 * fVar62 + fVar61 * fVar75 + fVar64 * fVar67) -
               fVar63 * *(float *)(lVar56 + 0x1c)) - fVar66 * *(float *)(lVar56 + 0x20);
      *pfVar31 = fVar63;
      *pfVar30 = fVar61;
      fVar62 = *pfVar32;
      fVar64 = *(float *)(lVar59 + 0x18);
      fVar67 = *pfVar1;
      fVar75 = *(float *)(lVar59 + 0x10);
      fVar77 = *(float *)(lVar59 + 0x14);
      fVar61 = ((fVar69 * fVar61 + fVar63 * fVar76 + fVar66 * fVar65) -
               fVar62 * *(float *)(lVar59 + 0x1c)) - fVar67 * *(float *)(lVar59 + 0x20);
      *pfVar1 = fVar62;
      *pfVar32 = fVar61;
      fVar63 = *pfVar2;
      fVar66 = *(float *)(lVar41 + 0x18);
      fVar68 = *pfVar3;
      fVar61 = ((fVar75 * fVar61 + fVar62 * fVar77 + fVar67 * fVar64) -
               fVar63 * *(float *)(lVar41 + 0x1c)) - fVar68 * *(float *)(lVar41 + 0x20);
      fVar76 = *(float *)(lVar41 + 0x10);
      fVar70 = *(float *)(lVar41 + 0x14);
      *pfVar3 = fVar63;
      *pfVar2 = fVar61;
      fVar67 = *pfVar26;
      fVar75 = *(float *)(lVar39 + 0x18);
      fVar65 = *pfVar4;
      fVar62 = (*(float *)(param_5 + lVar43) - fVar67 * *(float *)(lVar39 + 0x1c)) -
               fVar65 * *(float *)(lVar39 + 0x20);
      fVar77 = *(float *)(lVar39 + 0x10);
      fVar78 = *(float *)(lVar39 + 0x14);
      *pfVar4 = fVar67;
      *pfVar26 = fVar62;
      fVar64 = *pfVar5;
      fVar69 = *(float *)(lVar38 + 0x18);
      fVar71 = *pfVar6;
      fVar65 = ((fVar77 * fVar62 + fVar67 * fVar78 + fVar65 * fVar75) -
               fVar64 * *(float *)(lVar38 + 0x1c)) - fVar71 * *(float *)(lVar38 + 0x20);
      fVar75 = *(float *)(lVar38 + 0x10);
      fVar78 = *(float *)(lVar38 + 0x14);
      *pfVar6 = fVar64;
      *pfVar5 = fVar65;
      fVar62 = *pfVar7;
      fVar67 = *(float *)(lVar49 + 0x18);
      fVar77 = *pfVar8;
      fVar65 = ((fVar75 * fVar65 + fVar64 * fVar78 + fVar71 * fVar69) -
               fVar62 * *(float *)(lVar49 + 0x1c)) - fVar77 * *(float *)(lVar49 + 0x20);
      fVar75 = *(float *)(lVar49 + 0x10);
      fVar78 = *(float *)(lVar49 + 0x14);
      *pfVar8 = fVar62;
      *pfVar7 = fVar65;
      fVar64 = *pfVar9;
      fVar69 = *(float *)(lVar36 + 0x18);
      fVar71 = *pfVar10;
      fVar65 = ((fVar75 * fVar65 + fVar62 * fVar78 + fVar77 * fVar67) -
               fVar64 * *(float *)(lVar36 + 0x1c)) - fVar71 * *(float *)(lVar36 + 0x20);
      fVar75 = *(float *)(lVar36 + 0x10);
      fVar78 = *(float *)(lVar36 + 0x14);
      *pfVar10 = fVar64;
      *pfVar9 = fVar65;
      fVar62 = *pfVar27;
      fVar67 = *(float *)(lVar52 + 0x18);
      fVar77 = *pfVar11;
      fVar65 = ((fVar75 * fVar65 + fVar64 * fVar78 + fVar71 * fVar69) -
               fVar62 * *(float *)(lVar52 + 0x1c)) - fVar77 * *(float *)(lVar52 + 0x20);
      fVar75 = *(float *)(lVar52 + 0x10);
      fVar78 = *(float *)(lVar52 + 0x14);
      *pfVar11 = fVar62;
      *pfVar27 = fVar65;
      fVar64 = *pfVar12;
      fVar69 = *(float *)(lVar55 + 0x18);
      fVar71 = *pfVar13;
      fVar65 = ((fVar75 * fVar65 + fVar62 * fVar78 + fVar77 * fVar67) -
               fVar64 * *(float *)(lVar55 + 0x1c)) - fVar71 * *(float *)(lVar55 + 0x20);
      fVar75 = *(float *)(lVar55 + 0x10);
      fVar78 = *(float *)(lVar55 + 0x14);
      *pfVar13 = fVar64;
      *pfVar12 = fVar65;
      fVar62 = *pfVar14;
      fVar67 = *(float *)(lVar60 + 0x18);
      fVar77 = *pfVar15;
      fVar65 = ((fVar75 * fVar65 + fVar64 * fVar78 + fVar71 * fVar69) -
               fVar62 * *(float *)(lVar60 + 0x1c)) - fVar77 * *(float *)(lVar60 + 0x20);
      fVar75 = *(float *)(lVar60 + 0x10);
      fVar71 = *(float *)(lVar60 + 0x14);
      *pfVar15 = fVar62;
      *pfVar14 = fVar65;
      fVar64 = *pfVar16;
      fVar69 = *(float *)(lVar46 + 0x18);
      fVar72 = *pfVar17;
      fVar67 = ((fVar75 * fVar65 + fVar62 * fVar71 + fVar77 * fVar67) -
               fVar64 * *(float *)(lVar46 + 0x1c)) - fVar72 * *(float *)(lVar46 + 0x20);
      fVar77 = *(float *)(lVar46 + 0x10);
      fVar79 = *(float *)(lVar46 + 0x14);
      *pfVar17 = fVar64;
      *pfVar16 = fVar67;
      fVar75 = *pfVar28;
      fVar71 = *(float *)(lVar37 + 0x18);
      fVar73 = *pfVar18;
      fVar80 = *(float *)(lVar37 + 0x10);
      fVar82 = *(float *)(lVar37 + 0x14);
      fVar62 = (*(float *)(param_5 + lVar43) - fVar75 * *(float *)(lVar37 + 0x1c)) -
               fVar73 * *(float *)(lVar37 + 0x20);
      *pfVar18 = fVar75;
      *pfVar28 = fVar62;
      fVar65 = *pfVar19;
      fVar78 = *(float *)(lVar50 + 0x18);
      fVar74 = *pfVar20;
      fVar81 = *(float *)(lVar50 + 0x10);
      fVar83 = *(float *)(lVar50 + 0x14);
      fVar62 = ((fVar80 * fVar62 + fVar75 * fVar82 + fVar73 * fVar71) -
               fVar65 * *(float *)(lVar50 + 0x1c)) - fVar74 * *(float *)(lVar50 + 0x20);
      *pfVar20 = fVar65;
      *pfVar19 = fVar62;
      fVar75 = *pfVar21;
      fVar71 = *(float *)(lVar53 + 0x18);
      fVar73 = *pfVar22;
      fVar80 = *(float *)(lVar53 + 0x10);
      fVar82 = *(float *)(lVar53 + 0x14);
      fVar62 = ((fVar81 * fVar62 + fVar65 * fVar83 + fVar74 * fVar78) -
               fVar75 * *(float *)(lVar53 + 0x1c)) - fVar73 * *(float *)(lVar53 + 0x20);
      *pfVar22 = fVar75;
      *pfVar21 = fVar62;
      fVar65 = *pfVar23;
      fVar78 = *(float *)(lVar57 + 0x18);
      fVar74 = *pfVar24;
      fVar81 = *(float *)(lVar57 + 0x10);
      fVar83 = *(float *)(lVar57 + 0x14);
      fVar62 = ((fVar80 * fVar62 + fVar75 * fVar82 + fVar73 * fVar71) -
               fVar65 * *(float *)(lVar57 + 0x1c)) - fVar74 * *(float *)(lVar57 + 0x20);
      *pfVar24 = fVar65;
      *pfVar23 = fVar62;
      *(float *)(param_4 + lVar43) =
           (fVar76 * fVar61 + fVar63 * fVar70 + fVar68 * fVar66) * param_1 +
           (fVar77 * fVar67 + fVar64 * fVar79 + fVar72 * fVar69) * param_2 +
           (fVar81 * fVar62 + fVar65 * fVar83 + fVar74 * fVar78) * param_3;
      fVar61 = *pfVar25;
      fVar63 = *(float *)(lVar54 + 0x18);
      fVar66 = *pfVar29;
      fVar64 = (*(float *)(lVar42 + lVar43) - fVar61 * *(float *)(lVar54 + 0x1c)) -
               fVar66 * *(float *)(lVar54 + 0x20);
      fVar68 = *(float *)(lVar54 + 0x10);
      fVar69 = *(float *)(lVar54 + 0x14);
      *pfVar29 = fVar61;
      *pfVar25 = fVar64;
      fVar62 = *pfVar30;
      fVar65 = *(float *)(lVar56 + 0x18);
      fVar67 = *pfVar31;
      fVar63 = ((fVar68 * fVar64 + fVar61 * fVar69 + fVar66 * fVar63) -
               fVar62 * *(float *)(lVar56 + 0x1c)) - fVar67 * *(float *)(lVar56 + 0x20);
      fVar66 = *(float *)(lVar56 + 0x10);
      fVar69 = *(float *)(lVar56 + 0x14);
      *pfVar31 = fVar62;
      *pfVar30 = fVar63;
      fVar61 = *pfVar32;
      fVar64 = *(float *)(lVar59 + 0x18);
      fVar68 = *pfVar1;
      fVar63 = ((fVar66 * fVar63 + fVar62 * fVar69 + fVar67 * fVar65) -
               fVar61 * *(float *)(lVar59 + 0x1c)) - fVar68 * *(float *)(lVar59 + 0x20);
      fVar65 = *(float *)(lVar59 + 0x10);
      fVar67 = *(float *)(lVar59 + 0x14);
      *pfVar1 = fVar61;
      *pfVar32 = fVar63;
      fVar62 = *pfVar2;
      fVar66 = *(float *)(lVar41 + 0x18);
      fVar75 = *pfVar3;
      fVar61 = ((fVar65 * fVar63 + fVar61 * fVar67 + fVar68 * fVar64) -
               fVar62 * *(float *)(lVar41 + 0x1c)) - fVar75 * *(float *)(lVar41 + 0x20);
      fVar71 = *(float *)(lVar41 + 0x10);
      fVar72 = *(float *)(lVar41 + 0x14);
      *pfVar3 = fVar62;
      *pfVar2 = fVar61;
      fVar63 = *pfVar26;
      fVar67 = *(float *)(lVar39 + 0x18);
      fVar76 = *pfVar4;
      fVar64 = (*(float *)(lVar42 + lVar43) - fVar63 * *(float *)(lVar39 + 0x1c)) -
               fVar76 * *(float *)(lVar39 + 0x20);
      fVar69 = *(float *)(lVar39 + 0x10);
      fVar78 = *(float *)(lVar39 + 0x14);
      *pfVar4 = fVar63;
      *pfVar26 = fVar64;
      fVar65 = *pfVar5;
      fVar68 = *(float *)(lVar38 + 0x18);
      fVar77 = *pfVar6;
      fVar63 = ((fVar69 * fVar64 + fVar63 * fVar78 + fVar76 * fVar67) -
               fVar65 * *(float *)(lVar38 + 0x1c)) - fVar77 * *(float *)(lVar38 + 0x20);
      fVar69 = *(float *)(lVar38 + 0x10);
      fVar78 = *(float *)(lVar38 + 0x14);
      *pfVar6 = fVar65;
      *pfVar5 = fVar63;
      fVar64 = *pfVar7;
      fVar67 = *(float *)(lVar49 + 0x18);
      fVar76 = *pfVar8;
      fVar63 = ((fVar69 * fVar63 + fVar65 * fVar78 + fVar77 * fVar68) -
               fVar64 * *(float *)(lVar49 + 0x1c)) - fVar76 * *(float *)(lVar49 + 0x20);
      fVar69 = *(float *)(lVar49 + 0x10);
      fVar78 = *(float *)(lVar49 + 0x14);
      *pfVar8 = fVar64;
      *pfVar7 = fVar63;
      fVar65 = *pfVar9;
      fVar68 = *(float *)(lVar36 + 0x18);
      fVar77 = *pfVar10;
      fVar63 = ((fVar69 * fVar63 + fVar64 * fVar78 + fVar76 * fVar67) -
               fVar65 * *(float *)(lVar36 + 0x1c)) - fVar77 * *(float *)(lVar36 + 0x20);
      fVar69 = *(float *)(lVar36 + 0x10);
      fVar78 = *(float *)(lVar36 + 0x14);
      *pfVar10 = fVar65;
      *pfVar9 = fVar63;
      fVar64 = *pfVar27;
      fVar67 = *(float *)(lVar52 + 0x18);
      fVar76 = *pfVar11;
      fVar63 = ((fVar69 * fVar63 + fVar65 * fVar78 + fVar77 * fVar68) -
               fVar64 * *(float *)(lVar52 + 0x1c)) - fVar76 * *(float *)(lVar52 + 0x20);
      fVar69 = *(float *)(lVar52 + 0x10);
      fVar78 = *(float *)(lVar52 + 0x14);
      *pfVar11 = fVar64;
      *pfVar27 = fVar63;
      fVar65 = *pfVar12;
      fVar68 = *(float *)(lVar55 + 0x18);
      fVar77 = *pfVar13;
      fVar63 = ((fVar69 * fVar63 + fVar64 * fVar78 + fVar76 * fVar67) -
               fVar65 * *(float *)(lVar55 + 0x1c)) - fVar77 * *(float *)(lVar55 + 0x20);
      fVar67 = *(float *)(lVar55 + 0x10);
      fVar76 = *(float *)(lVar55 + 0x14);
      *pfVar13 = fVar65;
      *pfVar12 = fVar63;
      fVar64 = *pfVar14;
      fVar69 = *(float *)(lVar60 + 0x18);
      fVar78 = *pfVar15;
      fVar63 = ((fVar67 * fVar63 + fVar65 * fVar76 + fVar77 * fVar68) -
               fVar64 * *(float *)(lVar60 + 0x1c)) - fVar78 * *(float *)(lVar60 + 0x20);
      fVar65 = *(float *)(lVar60 + 0x10);
      fVar68 = *(float *)(lVar60 + 0x14);
      *pfVar15 = fVar64;
      *pfVar14 = fVar63;
      fVar67 = *pfVar16;
      fVar76 = *(float *)(lVar46 + 0x18);
      fVar73 = *pfVar17;
      fVar63 = ((fVar65 * fVar63 + fVar64 * fVar68 + fVar78 * fVar69) -
               fVar67 * *(float *)(lVar46 + 0x1c)) - fVar73 * *(float *)(lVar46 + 0x20);
      fVar78 = *(float *)(lVar46 + 0x10);
      fVar80 = *(float *)(lVar46 + 0x14);
      *pfVar17 = fVar67;
      *pfVar16 = fVar63;
      fVar69 = *pfVar28;
      fVar70 = *(float *)(lVar37 + 0x18);
      fVar74 = *pfVar18;
      fVar64 = (*(float *)(lVar42 + lVar43) - fVar69 * *(float *)(lVar37 + 0x1c)) -
               fVar74 * *(float *)(lVar37 + 0x20);
      fVar68 = *(float *)(lVar37 + 0x10);
      fVar81 = *(float *)(lVar37 + 0x14);
      *pfVar18 = fVar69;
      *pfVar28 = fVar64;
      fVar65 = *pfVar19;
      fVar77 = *(float *)(lVar50 + 0x18);
      fVar79 = *pfVar20;
      fVar68 = ((fVar68 * fVar64 + fVar69 * fVar81 + fVar74 * fVar70) -
               fVar65 * *(float *)(lVar50 + 0x1c)) - fVar79 * *(float *)(lVar50 + 0x20);
      fVar70 = *(float *)(lVar50 + 0x10);
      fVar81 = *(float *)(lVar50 + 0x14);
      *pfVar20 = fVar65;
      *pfVar19 = fVar68;
      fVar64 = *pfVar21;
      fVar69 = *(float *)(lVar53 + 0x18);
      fVar74 = *pfVar22;
      fVar68 = ((fVar70 * fVar68 + fVar65 * fVar81 + fVar79 * fVar77) -
               fVar64 * *(float *)(lVar53 + 0x1c)) - fVar74 * *(float *)(lVar53 + 0x20);
      fVar70 = *(float *)(lVar53 + 0x10);
      fVar81 = *(float *)(lVar53 + 0x14);
      *pfVar22 = fVar64;
      *pfVar21 = fVar68;
      fVar65 = *pfVar23;
      fVar77 = *(float *)(lVar57 + 0x18);
      fVar79 = *pfVar24;
      fVar64 = ((fVar70 * fVar68 + fVar64 * fVar81 + fVar74 * fVar69) -
               fVar65 * *(float *)(lVar57 + 0x1c)) - fVar79 * *(float *)(lVar57 + 0x20);
      fVar68 = *(float *)(lVar57 + 0x10);
      fVar69 = *(float *)(lVar57 + 0x14);
      *pfVar24 = fVar65;
      *pfVar23 = fVar64;
      *(float *)(param_4 + uVar47 + lVar43) =
           (fVar71 * fVar61 + fVar62 * fVar72 + fVar75 * fVar66) * param_1 +
           (fVar78 * fVar63 + fVar67 * fVar80 + fVar73 * fVar76) * param_2 +
           (fVar68 * fVar64 + fVar65 * fVar69 + fVar79 * fVar77) * param_3;
      fVar63 = *pfVar25;
      fVar65 = *(float *)(lVar54 + 0x18);
      fVar67 = *pfVar29;
      fVar61 = (*(float *)(lVar34 + lVar43) - fVar63 * *(float *)(lVar54 + 0x1c)) -
               fVar67 * *(float *)(lVar54 + 0x20);
      fVar66 = *(float *)(lVar54 + 0x10);
      fVar69 = *(float *)(lVar54 + 0x14);
      *pfVar29 = fVar63;
      *pfVar25 = fVar61;
      fVar62 = *pfVar30;
      fVar64 = *(float *)(lVar56 + 0x18);
      fVar68 = *pfVar31;
      fVar63 = ((fVar66 * fVar61 + fVar63 * fVar69 + fVar67 * fVar65) -
               fVar62 * *(float *)(lVar56 + 0x1c)) - fVar68 * *(float *)(lVar56 + 0x20);
      fVar66 = *(float *)(lVar56 + 0x10);
      fVar69 = *(float *)(lVar56 + 0x14);
      *pfVar31 = fVar62;
      *pfVar30 = fVar63;
      fVar61 = *pfVar32;
      fVar65 = *(float *)(lVar59 + 0x18);
      fVar67 = *pfVar1;
      fVar63 = ((fVar66 * fVar63 + fVar62 * fVar69 + fVar68 * fVar64) -
               fVar61 * *(float *)(lVar59 + 0x1c)) - fVar67 * *(float *)(lVar59 + 0x20);
      fVar66 = *(float *)(lVar59 + 0x10);
      fVar68 = *(float *)(lVar59 + 0x14);
      *pfVar1 = fVar61;
      *pfVar32 = fVar63;
      fVar62 = *pfVar2;
      fVar64 = *(float *)(lVar41 + 0x18);
      fVar71 = *pfVar3;
      fVar66 = ((fVar66 * fVar63 + fVar61 * fVar68 + fVar67 * fVar65) -
               fVar62 * *(float *)(lVar41 + 0x1c)) - fVar71 * *(float *)(lVar41 + 0x20);
      fVar69 = *(float *)(lVar41 + 0x10);
      fVar72 = *(float *)(lVar41 + 0x14);
      *pfVar3 = fVar62;
      *pfVar2 = fVar66;
      fVar63 = *pfVar26;
      fVar67 = *(float *)(lVar39 + 0x18);
      fVar61 = *pfVar4;
      fVar77 = *(float *)(lVar39 + 0x10);
      fVar70 = *(float *)(lVar39 + 0x14);
      fVar75 = (*(float *)(lVar34 + lVar43) - fVar63 * *(float *)(lVar39 + 0x1c)) -
               fVar61 * *(float *)(lVar39 + 0x20);
      *pfVar4 = fVar63;
      *pfVar26 = fVar75;
      fVar65 = *pfVar5;
      fVar68 = *(float *)(lVar38 + 0x18);
      fVar76 = *pfVar6;
      fVar78 = *(float *)(lVar38 + 0x10);
      fVar73 = *(float *)(lVar38 + 0x14);
      fVar61 = ((fVar77 * fVar75 + fVar63 * fVar70 + fVar61 * fVar67) -
               fVar65 * *(float *)(lVar38 + 0x1c)) - fVar76 * *(float *)(lVar38 + 0x20);
      *pfVar6 = fVar65;
      *pfVar5 = fVar61;
      fVar63 = *pfVar7;
      fVar67 = *(float *)(lVar49 + 0x18);
      fVar75 = *pfVar8;
      fVar77 = *(float *)(lVar49 + 0x10);
      fVar70 = *(float *)(lVar49 + 0x14);
      fVar61 = ((fVar78 * fVar61 + fVar65 * fVar73 + fVar76 * fVar68) -
               fVar63 * *(float *)(lVar49 + 0x1c)) - fVar75 * *(float *)(lVar49 + 0x20);
      *pfVar8 = fVar63;
      *pfVar7 = fVar61;
      fVar65 = *pfVar9;
      fVar68 = *(float *)(lVar36 + 0x18);
      fVar76 = *pfVar10;
      fVar78 = *(float *)(lVar36 + 0x10);
      fVar73 = *(float *)(lVar36 + 0x14);
      fVar61 = ((fVar77 * fVar61 + fVar63 * fVar70 + fVar75 * fVar67) -
               fVar65 * *(float *)(lVar36 + 0x1c)) - fVar76 * *(float *)(lVar36 + 0x20);
      *pfVar10 = fVar65;
      *pfVar9 = fVar61;
      fVar63 = *pfVar27;
      fVar67 = *(float *)(lVar52 + 0x18);
      fVar75 = *pfVar11;
      fVar77 = *(float *)(lVar52 + 0x10);
      fVar70 = *(float *)(lVar52 + 0x14);
      fVar61 = ((fVar78 * fVar61 + fVar65 * fVar73 + fVar76 * fVar68) -
               fVar63 * *(float *)(lVar52 + 0x1c)) - fVar75 * *(float *)(lVar52 + 0x20);
      *pfVar11 = fVar63;
      *pfVar27 = fVar61;
      fVar65 = *pfVar12;
      fVar68 = *(float *)(lVar55 + 0x18);
      fVar76 = *pfVar13;
      fVar78 = *(float *)(lVar55 + 0x10);
      fVar73 = *(float *)(lVar55 + 0x14);
      fVar61 = ((fVar77 * fVar61 + fVar63 * fVar70 + fVar75 * fVar67) -
               fVar65 * *(float *)(lVar55 + 0x1c)) - fVar76 * *(float *)(lVar55 + 0x20);
      *pfVar13 = fVar65;
      *pfVar12 = fVar61;
      fVar63 = *pfVar14;
      fVar75 = *(float *)(lVar60 + 0x18);
      fVar77 = *pfVar15;
      fVar70 = *(float *)(lVar60 + 0x10);
      fVar74 = *(float *)(lVar60 + 0x14);
      fVar61 = ((fVar78 * fVar61 + fVar65 * fVar73 + fVar76 * fVar68) -
               fVar63 * *(float *)(lVar60 + 0x1c)) - fVar77 * *(float *)(lVar60 + 0x20);
      *pfVar15 = fVar63;
      *pfVar14 = fVar61;
      fVar67 = *pfVar16;
      fVar76 = *(float *)(lVar46 + 0x18);
      fVar78 = *pfVar17;
      fVar61 = ((fVar70 * fVar61 + fVar63 * fVar74 + fVar77 * fVar75) -
               fVar67 * *(float *)(lVar46 + 0x1c)) - fVar78 * *(float *)(lVar46 + 0x20);
      fVar73 = *(float *)(lVar46 + 0x10);
      fVar80 = *(float *)(lVar46 + 0x14);
      *pfVar17 = fVar67;
      *pfVar16 = fVar61;
      fVar75 = *pfVar28;
      fVar70 = *(float *)(lVar37 + 0x18);
      fVar74 = *pfVar18;
      fVar63 = (*(float *)(lVar34 + lVar43) - fVar75 * *(float *)(lVar37 + 0x1c)) -
               fVar74 * *(float *)(lVar37 + 0x20);
      fVar68 = *(float *)(lVar37 + 0x10);
      fVar81 = *(float *)(lVar37 + 0x14);
      *pfVar18 = fVar75;
      *pfVar28 = fVar63;
      fVar65 = *pfVar19;
      fVar77 = *(float *)(lVar50 + 0x18);
      fVar79 = *pfVar20;
      fVar68 = ((fVar68 * fVar63 + fVar75 * fVar81 + fVar74 * fVar70) -
               fVar65 * *(float *)(lVar50 + 0x1c)) - fVar79 * *(float *)(lVar50 + 0x20);
      fVar70 = *(float *)(lVar50 + 0x10);
      fVar81 = *(float *)(lVar50 + 0x14);
      *pfVar20 = fVar65;
      *pfVar19 = fVar68;
      fVar63 = *pfVar21;
      fVar75 = *(float *)(lVar53 + 0x18);
      fVar74 = *pfVar22;
      fVar68 = ((fVar70 * fVar68 + fVar65 * fVar81 + fVar79 * fVar77) -
               fVar63 * *(float *)(lVar53 + 0x1c)) - fVar74 * *(float *)(lVar53 + 0x20);
      fVar70 = *(float *)(lVar53 + 0x10);
      fVar81 = *(float *)(lVar53 + 0x14);
      *pfVar22 = fVar63;
      *pfVar21 = fVar68;
      fVar65 = *pfVar23;
      fVar77 = *(float *)(lVar57 + 0x18);
      fVar79 = *pfVar24;
      fVar63 = ((fVar70 * fVar68 + fVar63 * fVar81 + fVar74 * fVar75) -
               fVar65 * *(float *)(lVar57 + 0x1c)) - fVar79 * *(float *)(lVar57 + 0x20);
      fVar68 = *(float *)(lVar57 + 0x10);
      fVar75 = *(float *)(lVar57 + 0x14);
      *pfVar24 = fVar65;
      *pfVar23 = fVar63;
      *(float *)(param_4 + uVar40 + lVar43) =
           (fVar69 * fVar66 + fVar62 * fVar72 + fVar71 * fVar64) * param_1 +
           (fVar73 * fVar61 + fVar67 * fVar80 + fVar78 * fVar76) * param_2 +
           (fVar68 * fVar63 + fVar65 * fVar75 + fVar79 * fVar77) * param_3;
      fVar63 = *pfVar25;
      fVar64 = *(float *)(lVar54 + 0x18);
      fVar67 = *pfVar29;
      fVar61 = (*(float *)(lVar35 + lVar43) - fVar63 * *(float *)(lVar54 + 0x1c)) -
               fVar67 * *(float *)(lVar54 + 0x20);
      fVar66 = *(float *)(lVar54 + 0x10);
      fVar69 = *(float *)(lVar54 + 0x14);
      *pfVar29 = fVar63;
      *pfVar25 = fVar61;
      fVar62 = *pfVar30;
      fVar65 = *(float *)(lVar56 + 0x18);
      fVar68 = *pfVar31;
      fVar63 = ((fVar66 * fVar61 + fVar63 * fVar69 + fVar67 * fVar64) -
               fVar62 * *(float *)(lVar56 + 0x1c)) - fVar68 * *(float *)(lVar56 + 0x20);
      fVar66 = *(float *)(lVar56 + 0x10);
      fVar69 = *(float *)(lVar56 + 0x14);
      *pfVar31 = fVar62;
      *pfVar30 = fVar63;
      fVar61 = *pfVar32;
      fVar64 = *(float *)(lVar59 + 0x18);
      fVar67 = *pfVar1;
      fVar63 = ((fVar66 * fVar63 + fVar62 * fVar69 + fVar68 * fVar65) -
               fVar61 * *(float *)(lVar59 + 0x1c)) - fVar67 * *(float *)(lVar59 + 0x20);
      fVar66 = *(float *)(lVar59 + 0x10);
      fVar68 = *(float *)(lVar59 + 0x14);
      *pfVar1 = fVar61;
      *pfVar32 = fVar63;
      fVar62 = *pfVar2;
      fVar65 = *(float *)(lVar41 + 0x18);
      fVar71 = *pfVar3;
      fVar61 = ((fVar66 * fVar63 + fVar61 * fVar68 + fVar67 * fVar64) -
               fVar62 * *(float *)(lVar41 + 0x1c)) - fVar71 * *(float *)(lVar41 + 0x20);
      fVar69 = *(float *)(lVar41 + 0x10);
      fVar72 = *(float *)(lVar41 + 0x14);
      *pfVar3 = fVar62;
      *pfVar2 = fVar61;
      fVar66 = *pfVar26;
      fVar67 = *(float *)(lVar39 + 0x18);
      fVar75 = *pfVar4;
      fVar63 = (*(float *)(lVar35 + lVar43) - fVar66 * *(float *)(lVar39 + 0x1c)) -
               fVar75 * *(float *)(lVar39 + 0x20);
      fVar78 = *(float *)(lVar39 + 0x10);
      fVar77 = *(float *)(lVar39 + 0x14);
      *pfVar4 = fVar66;
      *pfVar26 = fVar63;
      fVar64 = *pfVar5;
      fVar76 = *(float *)(lVar38 + 0x18);
      fVar68 = *pfVar6;
      fVar63 = ((fVar78 * fVar63 + fVar66 * fVar77 + fVar75 * fVar67) -
               fVar64 * *(float *)(lVar38 + 0x1c)) - fVar68 * *(float *)(lVar38 + 0x20);
      fVar78 = *(float *)(lVar38 + 0x10);
      fVar77 = *(float *)(lVar38 + 0x14);
      *pfVar6 = fVar64;
      *pfVar5 = fVar63;
      fVar66 = *pfVar7;
      fVar75 = *(float *)(lVar49 + 0x18);
      fVar67 = *pfVar8;
      fVar63 = ((fVar78 * fVar63 + fVar64 * fVar77 + fVar68 * fVar76) -
               fVar66 * *(float *)(lVar49 + 0x1c)) - fVar67 * *(float *)(lVar49 + 0x20);
      fVar78 = *(float *)(lVar49 + 0x10);
      fVar77 = *(float *)(lVar49 + 0x14);
      *pfVar8 = fVar66;
      *pfVar7 = fVar63;
      fVar64 = *pfVar9;
      fVar76 = *(float *)(lVar36 + 0x18);
      fVar68 = *pfVar10;
      fVar63 = ((fVar78 * fVar63 + fVar66 * fVar77 + fVar67 * fVar75) -
               fVar64 * *(float *)(lVar36 + 0x1c)) - fVar68 * *(float *)(lVar36 + 0x20);
      fVar78 = *(float *)(lVar36 + 0x10);
      fVar77 = *(float *)(lVar36 + 0x14);
      *pfVar10 = fVar64;
      *pfVar9 = fVar63;
      fVar66 = *pfVar27;
      fVar75 = *(float *)(lVar52 + 0x18);
      fVar67 = *pfVar11;
      fVar63 = ((fVar78 * fVar63 + fVar64 * fVar77 + fVar68 * fVar76) -
               fVar66 * *(float *)(lVar52 + 0x1c)) - fVar67 * *(float *)(lVar52 + 0x20);
      fVar78 = *(float *)(lVar52 + 0x10);
      fVar77 = *(float *)(lVar52 + 0x14);
      *pfVar11 = fVar66;
      *pfVar27 = fVar63;
      fVar64 = *pfVar12;
      fVar76 = *(float *)(lVar55 + 0x18);
      fVar68 = *pfVar13;
      fVar63 = ((fVar78 * fVar63 + fVar66 * fVar77 + fVar67 * fVar75) -
               fVar64 * *(float *)(lVar55 + 0x1c)) - fVar68 * *(float *)(lVar55 + 0x20);
      fVar78 = *(float *)(lVar55 + 0x10);
      fVar75 = *(float *)(lVar55 + 0x14);
      *pfVar13 = fVar64;
      *pfVar12 = fVar63;
      fVar66 = *pfVar14;
      fVar77 = *(float *)(lVar60 + 0x18);
      fVar67 = *pfVar15;
      fVar63 = ((fVar78 * fVar63 + fVar64 * fVar75 + fVar68 * fVar76) -
               fVar66 * *(float *)(lVar60 + 0x1c)) - fVar67 * *(float *)(lVar60 + 0x20);
      fVar76 = *(float *)(lVar60 + 0x10);
      fVar68 = *(float *)(lVar60 + 0x14);
      *pfVar15 = fVar66;
      *pfVar14 = fVar63;
      fVar64 = *pfVar16;
      fVar78 = *(float *)(lVar46 + 0x18);
      fVar75 = *pfVar17;
      fVar66 = ((fVar76 * fVar63 + fVar66 * fVar68 + fVar67 * fVar77) -
               fVar64 * *(float *)(lVar46 + 0x1c)) - fVar75 * *(float *)(lVar46 + 0x20);
      fVar73 = *(float *)(lVar46 + 0x10);
      fVar80 = *(float *)(lVar46 + 0x14);
      *pfVar17 = fVar64;
      *pfVar16 = fVar66;
      fVar67 = *pfVar28;
      fVar70 = *(float *)(lVar37 + 0x18);
      fVar74 = *pfVar18;
      fVar63 = (*(float *)(lVar35 + lVar43) - fVar67 * *(float *)(lVar37 + 0x1c)) -
               fVar74 * *(float *)(lVar37 + 0x20);
      fVar76 = *(float *)(lVar37 + 0x10);
      fVar81 = *(float *)(lVar37 + 0x14);
      *pfVar18 = fVar67;
      *pfVar28 = fVar63;
      fVar68 = *pfVar19;
      fVar77 = *(float *)(lVar50 + 0x18);
      fVar79 = *pfVar20;
      fVar63 = ((fVar76 * fVar63 + fVar67 * fVar81 + fVar74 * fVar70) -
               fVar68 * *(float *)(lVar50 + 0x1c)) - fVar79 * *(float *)(lVar50 + 0x20);
      fVar70 = *(float *)(lVar50 + 0x10);
      fVar81 = *(float *)(lVar50 + 0x14);
      *pfVar20 = fVar68;
      *pfVar19 = fVar63;
      fVar67 = *pfVar21;
      fVar76 = *(float *)(lVar53 + 0x18);
      fVar74 = *pfVar22;
      fVar63 = ((fVar70 * fVar63 + fVar68 * fVar81 + fVar79 * fVar77) -
               fVar67 * *(float *)(lVar53 + 0x1c)) - fVar74 * *(float *)(lVar53 + 0x20);
      fVar70 = *(float *)(lVar53 + 0x10);
      fVar81 = *(float *)(lVar53 + 0x14);
      *pfVar22 = fVar67;
      *pfVar21 = fVar63;
      fVar68 = *pfVar23;
      fVar77 = *(float *)(lVar57 + 0x18);
      fVar79 = *pfVar24;
      fVar63 = ((fVar70 * fVar63 + fVar67 * fVar81 + fVar74 * fVar76) -
               fVar68 * *(float *)(lVar57 + 0x1c)) - fVar79 * *(float *)(lVar57 + 0x20);
      fVar67 = *(float *)(lVar57 + 0x10);
      fVar76 = *(float *)(lVar57 + 0x14);
      *pfVar24 = fVar68;
      *pfVar23 = fVar63;
      *(float *)(param_4 + uVar45 + lVar43) =
           (fVar69 * fVar61 + fVar62 * fVar72 + fVar71 * fVar65) * param_1 +
           (fVar73 * fVar66 + fVar64 * fVar80 + fVar75 * fVar78) * param_2 +
           (fVar67 * fVar63 + fVar68 * fVar76 + fVar79 * fVar77) * param_3;
      iVar58 = iVar58 + -1;
      lVar43 = lVar43 + (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2);
    } while (iVar58 != 0);
  }
  if ((param_6 & 3) != 0) {
    lVar42 = 0;
    uVar40 = -(param_8 >> 0x1f & 1) & 0xfffffff000000000 | (param_8 & 0xffffffff) << 4;
    pfVar29 = (float *)(param_9 + uVar40);
    pfVar30 = (float *)(param_11 + uVar40);
    lVar37 = *(long *)(pfVar29 + 2);
    lVar41 = *(long *)(pfVar29 + 0x82);
    lVar46 = *(long *)(pfVar29 + 0x102);
    lVar49 = *(long *)(pfVar29 + 0x182);
    lVar50 = *(long *)(pfVar30 + 2);
    lVar52 = *(long *)(pfVar30 + 0x82);
    lVar53 = *(long *)(pfVar30 + 0x102);
    lVar54 = *(long *)(pfVar30 + 0x182);
    pfVar31 = (float *)(param_10 + uVar40);
    pfVar32 = (float *)(param_12 + uVar40);
    lVar56 = *(long *)(pfVar31 + 2);
    iVar58 = -(param_6 & 3);
    lVar39 = *(long *)(pfVar31 + 0x82);
    lVar34 = *(long *)(pfVar31 + 0x102);
    lVar43 = *(long *)(pfVar31 + 0x182);
    lVar55 = *(long *)(pfVar32 + 2);
    lVar36 = *(long *)(pfVar32 + 0x82);
    lVar38 = *(long *)(pfVar32 + 0x102);
    lVar35 = *(long *)(pfVar32 + 0x182);
    do {
      fVar61 = *pfVar29;
      fVar64 = pfVar29[1];
      fVar63 = (*(float *)(lVar44 + lVar42) - fVar61 * *(float *)(lVar37 + 0x1c)) -
               fVar64 * *(float *)(lVar37 + 0x20);
      fVar66 = *(float *)(lVar37 + 0x10);
      fVar69 = *(float *)(lVar37 + 0x14);
      fVar67 = *(float *)(lVar37 + 0x18);
      pfVar29[1] = fVar61;
      *pfVar29 = fVar63;
      fVar62 = pfVar29[0x80];
      fVar65 = *(float *)(lVar41 + 0x18);
      fVar68 = pfVar29[0x81];
      fVar63 = ((fVar66 * fVar63 + fVar61 * fVar69 + fVar64 * fVar67) -
               fVar62 * *(float *)(lVar41 + 0x1c)) - fVar68 * *(float *)(lVar41 + 0x20);
      fVar66 = *(float *)(lVar41 + 0x10);
      fVar69 = *(float *)(lVar41 + 0x14);
      pfVar29[0x81] = fVar62;
      pfVar29[0x80] = fVar63;
      fVar61 = pfVar29[0x100];
      fVar64 = *(float *)(lVar46 + 0x18);
      fVar67 = pfVar29[0x101];
      fVar63 = ((fVar66 * fVar63 + fVar62 * fVar69 + fVar68 * fVar65) -
               fVar61 * *(float *)(lVar46 + 0x1c)) - fVar67 * *(float *)(lVar46 + 0x20);
      fVar66 = *(float *)(lVar46 + 0x10);
      fVar68 = *(float *)(lVar46 + 0x14);
      pfVar29[0x101] = fVar61;
      pfVar29[0x100] = fVar63;
      fVar62 = pfVar29[0x180];
      fVar65 = *(float *)(lVar49 + 0x18);
      fVar71 = pfVar29[0x181];
      fVar61 = ((fVar66 * fVar63 + fVar61 * fVar68 + fVar67 * fVar64) -
               fVar62 * *(float *)(lVar49 + 0x1c)) - fVar71 * *(float *)(lVar49 + 0x20);
      fVar69 = *(float *)(lVar49 + 0x10);
      fVar72 = *(float *)(lVar49 + 0x14);
      pfVar29[0x181] = fVar62;
      pfVar29[0x180] = fVar61;
      fVar66 = *pfVar30;
      fVar67 = *(float *)(lVar50 + 0x18);
      fVar75 = pfVar30[1];
      fVar63 = (*(float *)(lVar44 + lVar42) - fVar66 * *(float *)(lVar50 + 0x1c)) -
               fVar75 * *(float *)(lVar50 + 0x20);
      fVar78 = *(float *)(lVar50 + 0x10);
      fVar77 = *(float *)(lVar50 + 0x14);
      pfVar30[1] = fVar66;
      *pfVar30 = fVar63;
      fVar64 = pfVar30[0x80];
      fVar76 = *(float *)(lVar52 + 0x18);
      fVar68 = pfVar30[0x81];
      fVar63 = ((fVar78 * fVar63 + fVar66 * fVar77 + fVar75 * fVar67) -
               fVar64 * *(float *)(lVar52 + 0x1c)) - fVar68 * *(float *)(lVar52 + 0x20);
      fVar78 = *(float *)(lVar52 + 0x10);
      fVar77 = *(float *)(lVar52 + 0x14);
      pfVar30[0x81] = fVar64;
      pfVar30[0x80] = fVar63;
      fVar66 = pfVar30[0x100];
      fVar75 = *(float *)(lVar53 + 0x18);
      fVar67 = pfVar30[0x101];
      fVar63 = ((fVar78 * fVar63 + fVar64 * fVar77 + fVar68 * fVar76) -
               fVar66 * *(float *)(lVar53 + 0x1c)) - fVar67 * *(float *)(lVar53 + 0x20);
      fVar78 = *(float *)(lVar53 + 0x10);
      fVar77 = *(float *)(lVar53 + 0x14);
      pfVar30[0x101] = fVar66;
      pfVar30[0x100] = fVar63;
      fVar64 = pfVar30[0x180];
      fVar76 = *(float *)(lVar54 + 0x18);
      fVar68 = pfVar30[0x181];
      fVar63 = ((fVar78 * fVar63 + fVar66 * fVar77 + fVar67 * fVar75) -
               fVar64 * *(float *)(lVar54 + 0x1c)) - fVar68 * *(float *)(lVar54 + 0x20);
      fVar78 = *(float *)(lVar54 + 0x10);
      fVar77 = *(float *)(lVar54 + 0x14);
      pfVar30[0x181] = fVar64;
      pfVar30[0x180] = fVar63;
      fVar66 = *pfVar31;
      fVar75 = *(float *)(lVar56 + 0x18);
      fVar67 = pfVar31[1];
      fVar63 = ((fVar78 * fVar63 + fVar64 * fVar77 + fVar68 * fVar76) -
               fVar66 * *(float *)(lVar56 + 0x1c)) - fVar67 * *(float *)(lVar56 + 0x20);
      fVar78 = *(float *)(lVar56 + 0x10);
      fVar77 = *(float *)(lVar56 + 0x14);
      pfVar31[1] = fVar66;
      *pfVar31 = fVar63;
      fVar64 = pfVar31[0x80];
      fVar76 = *(float *)(lVar39 + 0x18);
      fVar68 = pfVar31[0x81];
      fVar63 = ((fVar78 * fVar63 + fVar66 * fVar77 + fVar67 * fVar75) -
               fVar64 * *(float *)(lVar39 + 0x1c)) - fVar68 * *(float *)(lVar39 + 0x20);
      fVar78 = *(float *)(lVar39 + 0x10);
      fVar75 = *(float *)(lVar39 + 0x14);
      pfVar31[0x81] = fVar64;
      pfVar31[0x80] = fVar63;
      fVar66 = pfVar31[0x100];
      fVar77 = *(float *)(lVar34 + 0x18);
      fVar67 = pfVar31[0x101];
      fVar63 = ((fVar78 * fVar63 + fVar64 * fVar75 + fVar68 * fVar76) -
               fVar66 * *(float *)(lVar34 + 0x1c)) - fVar67 * *(float *)(lVar34 + 0x20);
      fVar76 = *(float *)(lVar34 + 0x10);
      fVar68 = *(float *)(lVar34 + 0x14);
      pfVar31[0x101] = fVar66;
      pfVar31[0x100] = fVar63;
      fVar64 = pfVar31[0x180];
      fVar78 = *(float *)(lVar43 + 0x18);
      fVar75 = pfVar31[0x181];
      fVar66 = ((fVar76 * fVar63 + fVar66 * fVar68 + fVar67 * fVar77) -
               fVar64 * *(float *)(lVar43 + 0x1c)) - fVar75 * *(float *)(lVar43 + 0x20);
      fVar73 = *(float *)(lVar43 + 0x10);
      fVar80 = *(float *)(lVar43 + 0x14);
      pfVar31[0x181] = fVar64;
      pfVar31[0x180] = fVar66;
      fVar67 = *pfVar32;
      fVar70 = *(float *)(lVar55 + 0x18);
      fVar74 = pfVar32[1];
      fVar63 = (*(float *)(lVar44 + lVar42) - fVar67 * *(float *)(lVar55 + 0x1c)) -
               fVar74 * *(float *)(lVar55 + 0x20);
      fVar76 = *(float *)(lVar55 + 0x10);
      fVar81 = *(float *)(lVar55 + 0x14);
      pfVar32[1] = fVar67;
      *pfVar32 = fVar63;
      fVar68 = pfVar32[0x80];
      fVar77 = *(float *)(lVar36 + 0x18);
      fVar79 = pfVar32[0x81];
      fVar63 = ((fVar76 * fVar63 + fVar67 * fVar81 + fVar74 * fVar70) -
               fVar68 * *(float *)(lVar36 + 0x1c)) - fVar79 * *(float *)(lVar36 + 0x20);
      fVar70 = *(float *)(lVar36 + 0x10);
      fVar81 = *(float *)(lVar36 + 0x14);
      pfVar32[0x81] = fVar68;
      pfVar32[0x80] = fVar63;
      fVar67 = pfVar32[0x100];
      fVar76 = *(float *)(lVar38 + 0x18);
      fVar74 = pfVar32[0x101];
      fVar63 = ((fVar70 * fVar63 + fVar68 * fVar81 + fVar79 * fVar77) -
               fVar67 * *(float *)(lVar38 + 0x1c)) - fVar74 * *(float *)(lVar38 + 0x20);
      fVar70 = *(float *)(lVar38 + 0x10);
      fVar81 = *(float *)(lVar38 + 0x14);
      pfVar32[0x101] = fVar67;
      pfVar32[0x100] = fVar63;
      fVar68 = pfVar32[0x180];
      fVar77 = *(float *)(lVar35 + 0x18);
      fVar79 = pfVar32[0x181];
      fVar63 = ((fVar70 * fVar63 + fVar67 * fVar81 + fVar74 * fVar76) -
               fVar68 * *(float *)(lVar35 + 0x1c)) - fVar79 * *(float *)(lVar35 + 0x20);
      fVar67 = *(float *)(lVar35 + 0x10);
      fVar76 = *(float *)(lVar35 + 0x14);
      pfVar32[0x181] = fVar68;
      pfVar32[0x180] = fVar63;
      *(float *)(lVar48 + lVar42) =
           (fVar69 * fVar61 + fVar62 * fVar72 + fVar71 * fVar65) * param_1 +
           (fVar73 * fVar66 + fVar64 * fVar80 + fVar75 * fVar78) * param_2 +
           (fVar67 * fVar63 + fVar68 * fVar76 + fVar79 * fVar77) * param_3;
      iVar58 = iVar58 + 1;
      lVar42 = lVar42 + (-(param_7 >> 0x1f & 1) & 0xfffffffc00000000 | (param_7 & 0xffffffff) << 2);
    } while (iVar58 != 0);
  }
  return;
}




undefined8 FUN_100636f28(undefined4 param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  if (param_3 < 5) {
    lVar1 = *param_2;
    switch(param_3) {
    case 0:
      *(undefined4 *)(lVar1 + 0x2498) = param_1;
      return 0;
    case 1:
      *(undefined4 *)(lVar1 + 0x249c) = param_1;
      return 0;
    case 2:
      *(undefined4 *)(lVar1 + 0x24a0) = param_1;
      return 0;
    case 3:
      *(undefined4 *)(lVar1 + 0x24a4) = param_1;
      return 0;
    case 4:
      *(undefined4 *)(lVar1 + 0x24a8) = param_1;
    }
  }
  return 0;
}




undefined8 FUN_100636f9c(long *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 5) {
    *(undefined4 *)(*param_1 + 0x24ac) = param_3;
  }
  return 0;
}




undefined8 FUN_100636fb4(long *param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 5) {
    iVar1 = *(int *)(*param_1 + 0x24ac);
    *param_3 = iVar1;
    if (param_4 != (undefined4 *)0x0) {
      if (iVar1 == 2) {
        *(undefined1 *)(param_4 + 1) = 0;
        uVar2 = 0x42643834;
      }
      else if (iVar1 == 1) {
        *(undefined1 *)(param_4 + 1) = 0;
        uVar2 = 0x42643432;
      }
      else {
        if (iVar1 != 0) {
          return 0;
        }
        *(undefined1 *)(param_4 + 1) = 0;
        uVar2 = 0x42643231;
      }
      *param_4 = uVar2;
    }
  }
  return 0;
}




undefined8 FUN_100637018(undefined8 *param_1)

{
  FUN_100633f48(*param_1);
  return 0;
}




long * FUN_100637034(long *param_1,long param_2,long param_3,undefined1 param_4)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 == 0) {
    FUN_1005dbee4(*(undefined8 *)(param_2 + 0x30));
    iVar1 = *(int *)(param_2 + 0x20);
  }
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  return param_1;
}




void FUN_10063707c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    FUN_1005dbee4(*(undefined8 *)(param_1 + 0x30));
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  return;
}




long * FUN_1006370b4(long *param_1,long param_2,long param_3,undefined1 param_4)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 == 0) {
    FUN_1005dbee4(*(undefined8 *)(param_2 + 0x30));
    iVar1 = *(int *)(param_2 + 0x20);
  }
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  return param_1;
}




long * FUN_1006370fc(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 0) {
    FUN_1005dbee4(*(undefined8 *)(lVar2 + 0x30));
    iVar1 = *(int *)(lVar2 + 0x20);
  }
  *(int *)(lVar2 + 0x20) = iVar1 + 1;
  return param_1;
}




long * FUN_100637150(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 0) {
    FUN_1005dbee4(*(undefined8 *)(lVar2 + 0x30));
    iVar1 = *(int *)(lVar2 + 0x20);
  }
  *(int *)(lVar2 + 0x20) = iVar1 + 1;
  return param_1;
}




long * FUN_1006371a4(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x20) + -1;
  *(int *)(lVar2 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_1005dbf14(*(undefined8 *)(lVar2 + 0x30));
  }
  return param_1;
}




void FUN_1006371e0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  FUN_1005dbf14(*(undefined8 *)(param_1 + 0x30));
  return;
}




long * FUN_1006371fc(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x20) + -1;
  *(int *)(lVar2 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_1005dbf14(*(undefined8 *)(lVar2 + 0x30));
  }
  return param_1;
}




void FUN_100637238(undefined8 *param_1)

{
  FUN_100637248(*param_1,param_1);
  return;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100637248(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long local_60 [2];
  int local_4c;
  long local_48;
  
  lVar6 = *(long *)(param_2 + 8);
  if (*(uint *)((long)param_1 + 0x1c) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(param_1[2] + uVar5 * 8) == lVar6) goto LAB_100637324;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((long)param_1 + 0x1c));
  }
  local_4c = 0;
  local_48 = lVar6;
  uVar4 = FUN_1005c9158(lVar6,&local_4c,*(undefined1 *)(param_2 + 0x10),0);
  if ((int)uVar4 == 0) {
    iVar3 = local_4c;
    if (0 < local_4c) {
      do {
        local_60[1] = 0;
        uVar4 = FUN_1005c91e4(lVar6,iVar3 + -1,local_60 + 1,local_60,*(undefined1 *)(param_2 + 0x10)
                              ,0);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if (((*(byte *)(local_60[0] + 0x78) >> 1 & 1) == 0) &&
           (uVar4 = FUN_10063e92c(param_1,local_60 + 1), (int)uVar4 != 0)) {
          return uVar4;
        }
        bVar1 = 1 < iVar3;
        iVar3 = iVar3 + -1;
      } while (bVar1);
    }
    uVar4 = FUN_10063ea24(param_1 + 2,&local_48);
    if ((int)uVar4 == 0) {
LAB_100637324:
      uVar2 = *(uint *)((long)param_1 + 0xc);
      if (uVar2 == 0xffffffff) {
        uVar4 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
      }
      else {
        uVar4 = 0;
        *(uint *)((long)param_1 + 0xc) = uVar2 - 1;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*param_1 + (ulong)uVar2 * 8);
      }
    }
  }
  return uVar4;
}




undefined8 FUN_10063736c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




bool FUN_100637374(long *param_1,long *param_2)

{
  if (param_1[1] != param_2[1]) {
    return false;
  }
  return *param_1 == *param_2;
}




bool FUN_1006373a0(long *param_1,long *param_2)

{
  if (param_1[1] != param_2[1]) {
    return true;
  }
  return *param_1 != *param_2;
}




void FUN_1006373cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_1006373e4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




undefined8 FUN_1006373fc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  param_1[5] = param_2;
  param_1[6] = param_3;
  lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                        "../../src/fmod_containers.h",0x25,0);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0x20;
    lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                          "../../src/fmod_containers.h",0x25,0);
    param_1[2] = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 3) = 0x20;
      return 0;
    }
    if (*param_1 != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_containers.h"
                    ,0x1c);
      *param_1 = 0;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return 0x26;
}




void FUN_1006374bc(long *param_1,long param_2,undefined1 param_3)

{
  int iVar1;
  long local_38;
  
  *(undefined4 *)(param_2 + 0x1c) = 0;
  (**(code **)(**(long **)(param_2 + 0x28) + 0x118))(*(long **)(param_2 + 0x28),0,&local_38);
  *param_1 = param_2;
  param_1[1] = local_38;
  *(undefined1 *)(param_1 + 2) = param_3;
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 == 0) {
    FUN_1005dbee4(*(undefined8 *)(param_2 + 0x30));
    iVar1 = *(int *)(param_2 + 0x20);
  }
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  return;
}




void FUN_100637534(long *param_1,long param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 == 0) {
    FUN_1005dbee4(*(undefined8 *)(param_2 + 0x30));
    iVar1 = *(int *)(param_2 + 0x20);
  }
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  return;
}




undefined8 FUN_100637578(long *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_containers.h",
                  0x1c);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_1[2] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[2],"../../src/fmod_containers.h"
                  ,0x1c);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  while (iVar1 = (int)param_1[4], iVar1 != 0) {
    do {
      iVar1 = iVar1 + -1;
      *(int *)(param_1 + 4) = iVar1;
    } while (iVar1 != 0);
    FUN_1005dbf14(param_1[6]);
  }
  if (param_2 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dspi_tree_view.cpp"
                  ,0x62);
  }
  return 0;
}




void FUN_100637648(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = *param_4;
  fVar6 = param_4[0x20];
  fVar7 = param_4[0x40];
  fVar8 = param_4[0x60];
  fVar9 = param_4[0x80];
  uVar1 = param_3 >> 2;
  fVar10 = param_4[0xa0];
  if (param_7 == 0) {
    if (uVar1 != 0) {
      iVar2 = -(param_3 >> 2);
      pfVar3 = param_1;
      pfVar4 = param_2;
      do {
        *pfVar4 = *pfVar4 + fVar5 * *pfVar3;
        pfVar4[1] = pfVar4[1] + fVar6 * *pfVar3;
        pfVar4[2] = pfVar4[2] + fVar7 * *pfVar3;
        pfVar4[3] = pfVar4[3] + fVar8 * *pfVar3;
        pfVar4[4] = pfVar4[4] + fVar9 * *pfVar3;
        pfVar4[5] = pfVar4[5] + fVar10 * *pfVar3;
        pfVar4[6] = pfVar4[6] + fVar5 * pfVar3[1];
        pfVar4[7] = pfVar4[7] + fVar6 * pfVar3[1];
        pfVar4[8] = pfVar4[8] + fVar7 * pfVar3[1];
        pfVar4[9] = pfVar4[9] + fVar8 * pfVar3[1];
        pfVar4[10] = pfVar4[10] + fVar9 * pfVar3[1];
        pfVar4[0xb] = pfVar4[0xb] + fVar10 * pfVar3[1];
        pfVar4[0xc] = pfVar4[0xc] + fVar5 * pfVar3[2];
        pfVar4[0xd] = pfVar4[0xd] + fVar6 * pfVar3[2];
        pfVar4[0xe] = pfVar4[0xe] + fVar7 * pfVar3[2];
        pfVar4[0xf] = pfVar4[0xf] + fVar8 * pfVar3[2];
        pfVar4[0x10] = pfVar4[0x10] + fVar9 * pfVar3[2];
        pfVar4[0x11] = pfVar4[0x11] + fVar10 * pfVar3[2];
        pfVar4[0x12] = pfVar4[0x12] + fVar5 * pfVar3[3];
        pfVar4[0x13] = pfVar4[0x13] + fVar6 * pfVar3[3];
        pfVar4[0x14] = pfVar4[0x14] + fVar7 * pfVar3[3];
        pfVar4[0x15] = pfVar4[0x15] + fVar8 * pfVar3[3];
        pfVar4[0x16] = pfVar4[0x16] + fVar9 * pfVar3[3];
        pfVar4[0x17] = pfVar4[0x17] + fVar10 * pfVar3[3];
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 0x18;
      } while (iVar2 != 0);
      param_1 = param_1 + (ulong)(uVar1 - 1) * 4 + 4;
      param_2 = param_2 + (ulong)(uVar1 - 1) * 0x18 + 0x18;
    }
    if ((param_3 & 3) != 0) {
      iVar2 = -(param_3 & 3);
      do {
        *param_2 = *param_2 + fVar5 * *param_1;
        param_2[1] = param_2[1] + fVar6 * *param_1;
        param_2[2] = param_2[2] + fVar7 * *param_1;
        param_2[3] = param_2[3] + fVar8 * *param_1;
        param_2[4] = param_2[4] + fVar9 * *param_1;
        param_2[5] = param_2[5] + fVar10 * *param_1;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 6;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  else {
    if (uVar1 != 0) {
      iVar2 = -(param_3 >> 2);
      pfVar3 = param_1;
      pfVar4 = param_2;
      do {
        *pfVar4 = fVar5 * *pfVar3;
        pfVar4[1] = fVar6 * *pfVar3;
        pfVar4[2] = fVar7 * *pfVar3;
        pfVar4[3] = fVar8 * *pfVar3;
        pfVar4[4] = fVar9 * *pfVar3;
        pfVar4[5] = fVar10 * *pfVar3;
        pfVar4[6] = fVar5 * pfVar3[1];
        pfVar4[7] = fVar6 * pfVar3[1];
        pfVar4[8] = fVar7 * pfVar3[1];
        pfVar4[9] = fVar8 * pfVar3[1];
        pfVar4[10] = fVar9 * pfVar3[1];
        pfVar4[0xb] = fVar10 * pfVar3[1];
        pfVar4[0xc] = fVar5 * pfVar3[2];
        pfVar4[0xd] = fVar6 * pfVar3[2];
        pfVar4[0xe] = fVar7 * pfVar3[2];
        pfVar4[0xf] = fVar8 * pfVar3[2];
        pfVar4[0x10] = fVar9 * pfVar3[2];
        pfVar4[0x11] = fVar10 * pfVar3[2];
        pfVar4[0x12] = fVar5 * pfVar3[3];
        pfVar4[0x13] = fVar6 * pfVar3[3];
        pfVar4[0x14] = fVar7 * pfVar3[3];
        pfVar4[0x15] = fVar8 * pfVar3[3];
        pfVar4[0x16] = fVar9 * pfVar3[3];
        pfVar4[0x17] = fVar10 * pfVar3[3];
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 0x18;
      } while (iVar2 != 0);
      param_1 = param_1 + (ulong)(uVar1 - 1) * 4 + 4;
      param_2 = param_2 + (ulong)(uVar1 - 1) * 0x18 + 0x18;
    }
    if ((param_3 & 3) != 0) {
      iVar2 = -(param_3 & 3);
      do {
        *param_2 = fVar5 * *param_1;
        param_2[1] = fVar6 * *param_1;
        param_2[2] = fVar7 * *param_1;
        param_2[3] = fVar8 * *param_1;
        param_2[4] = fVar9 * *param_1;
        param_2[5] = fVar10 * *param_1;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 6;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  return;
}




void FUN_100637ae0(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
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
  
  fVar14 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[0x20];
  fVar15 = param_4[0x21];
  fVar8 = param_4[0x40];
  fVar9 = param_4[0x41];
  fVar10 = param_4[0x60];
  fVar11 = param_4[0x80];
  fVar12 = param_4[0xa0];
  fVar13 = param_4[0x61];
  fVar16 = param_4[0x81];
  fVar17 = param_4[0xa1];
  if ((((((2e-05 <= ABS(fVar6)) || (2e-05 <= ABS(fVar7))) || (2e-05 <= ABS(fVar8))) ||
       ((2e-05 <= ABS(fVar9) || (2e-05 <= ABS(fVar10))))) ||
      ((2e-05 <= ABS(fVar13) || ((2e-05 <= ABS(fVar11) || (2e-05 <= ABS(fVar16))))))) ||
     ((2e-05 <= ABS(fVar12) || (2e-05 <= ABS(fVar17))))) {
    uVar1 = param_3 >> 1;
    if (param_7 == 0) {
      if (uVar1 != 0) {
        iVar3 = -(param_3 >> 1);
        pfVar4 = param_1;
        pfVar5 = param_2;
        do {
          *pfVar5 = *pfVar5 + fVar14 * *pfVar4 + fVar6 * pfVar4[1];
          pfVar5[1] = pfVar5[1] + fVar7 * *pfVar4 + fVar15 * pfVar4[1];
          pfVar5[2] = pfVar5[2] + fVar8 * *pfVar4 + fVar9 * pfVar4[1];
          pfVar5[3] = pfVar5[3] + fVar10 * *pfVar4 + fVar13 * pfVar4[1];
          pfVar5[4] = pfVar5[4] + fVar11 * *pfVar4 + fVar16 * pfVar4[1];
          pfVar5[5] = pfVar5[5] + fVar12 * *pfVar4 + fVar17 * pfVar4[1];
          pfVar5[6] = pfVar5[6] + fVar14 * pfVar4[2] + fVar6 * pfVar4[3];
          pfVar5[7] = pfVar5[7] + fVar7 * pfVar4[2] + fVar15 * pfVar4[3];
          pfVar5[8] = pfVar5[8] + fVar8 * pfVar4[2] + fVar9 * pfVar4[3];
          pfVar5[9] = pfVar5[9] + fVar10 * pfVar4[2] + fVar13 * pfVar4[3];
          pfVar5[10] = pfVar5[10] + fVar11 * pfVar4[2] + fVar16 * pfVar4[3];
          pfVar5[0xb] = pfVar5[0xb] + fVar12 * pfVar4[2] + fVar17 * pfVar4[3];
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 4;
          pfVar5 = pfVar5 + 0xc;
        } while (iVar3 != 0);
        param_2 = param_2 + (ulong)(uVar1 - 1) * 0xc + 0xc;
        param_1 = param_1 + (ulong)(uVar1 - 1) * 4 + 4;
      }
      if ((param_3 & 1) != 0) {
        iVar3 = -(param_3 & 1);
        do {
          *param_2 = *param_2 + fVar14 * *param_1 + fVar6 * param_1[1];
          param_2[1] = param_2[1] + fVar7 * *param_1 + fVar15 * param_1[1];
          param_2[2] = param_2[2] + fVar8 * *param_1 + fVar9 * param_1[1];
          param_2[3] = param_2[3] + fVar10 * *param_1 + fVar13 * param_1[1];
          param_2[4] = param_2[4] + fVar11 * *param_1 + fVar16 * param_1[1];
          param_2[5] = param_2[5] + fVar12 * *param_1 + fVar17 * param_1[1];
          iVar3 = iVar3 + 1;
          param_1 = param_1 + 2;
          param_2 = param_2 + 6;
        } while (iVar3 != 0);
      }
    }
    else {
      if (uVar1 != 0) {
        iVar3 = -(param_3 >> 1);
        pfVar4 = param_1;
        pfVar5 = param_2;
        do {
          *pfVar5 = fVar14 * *pfVar4 + fVar6 * pfVar4[1];
          pfVar5[1] = fVar7 * *pfVar4 + fVar15 * pfVar4[1];
          pfVar5[2] = fVar8 * *pfVar4 + fVar9 * pfVar4[1];
          pfVar5[3] = fVar10 * *pfVar4 + fVar13 * pfVar4[1];
          pfVar5[4] = fVar11 * *pfVar4 + fVar16 * pfVar4[1];
          pfVar5[5] = fVar12 * *pfVar4 + fVar17 * pfVar4[1];
          pfVar5[6] = fVar14 * pfVar4[2] + fVar6 * pfVar4[3];
          pfVar5[7] = fVar7 * pfVar4[2] + fVar15 * pfVar4[3];
          pfVar5[8] = fVar8 * pfVar4[2] + fVar9 * pfVar4[3];
          pfVar5[9] = fVar10 * pfVar4[2] + fVar13 * pfVar4[3];
          pfVar5[10] = fVar11 * pfVar4[2] + fVar16 * pfVar4[3];
          pfVar5[0xb] = fVar12 * pfVar4[2] + fVar17 * pfVar4[3];
          iVar3 = iVar3 + 1;
          pfVar4 = pfVar4 + 4;
          pfVar5 = pfVar5 + 0xc;
        } while (iVar3 != 0);
        param_2 = param_2 + (ulong)(uVar1 - 1) * 0xc + 0xc;
        param_1 = param_1 + (ulong)(uVar1 - 1) * 4 + 4;
      }
      if ((param_3 & 1) != 0) {
        iVar3 = -(param_3 & 1);
        do {
          *param_2 = fVar14 * *param_1 + fVar6 * param_1[1];
          param_2[1] = fVar7 * *param_1 + fVar15 * param_1[1];
          param_2[2] = fVar8 * *param_1 + fVar9 * param_1[1];
          param_2[3] = fVar10 * *param_1 + fVar13 * param_1[1];
          param_2[4] = fVar11 * *param_1 + fVar16 * param_1[1];
          param_2[5] = fVar12 * *param_1 + fVar17 * param_1[1];
          iVar3 = iVar3 + 1;
          param_1 = param_1 + 2;
          param_2 = param_2 + 6;
        } while (iVar3 != 0);
      }
    }
  }
  else {
    if (param_7 != 0) {
      _bzero(param_2,(ulong)(param_3 * 6) << 2);
    }
    if (param_3 >> 2 != 0) {
      uVar2 = (ulong)((param_3 >> 2) - 1);
      iVar3 = -(param_3 >> 2);
      pfVar4 = param_1;
      pfVar5 = param_2;
      do {
        *pfVar5 = *pfVar5 + fVar14 * *pfVar4;
        pfVar5[1] = pfVar5[1] + fVar15 * pfVar4[1];
        pfVar5[6] = pfVar5[6] + fVar14 * pfVar4[2];
        pfVar5[7] = pfVar5[7] + fVar15 * pfVar4[3];
        pfVar5[0xc] = pfVar5[0xc] + fVar14 * pfVar4[4];
        pfVar5[0xd] = pfVar5[0xd] + fVar15 * pfVar4[5];
        pfVar5[0x12] = pfVar5[0x12] + fVar14 * pfVar4[6];
        pfVar5[0x13] = pfVar5[0x13] + fVar15 * pfVar4[7];
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 8;
        pfVar5 = pfVar5 + 0x18;
      } while (iVar3 != 0);
      param_1 = param_1 + uVar2 * 8 + 8;
      param_2 = param_2 + uVar2 * 0x18 + 0x18;
    }
    if ((param_3 & 3) != 0) {
      iVar3 = -(param_3 & 3);
      do {
        *param_2 = *param_2 + fVar14 * *param_1;
        param_2[1] = param_2[1] + fVar15 * param_1[1];
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 2;
        param_2 = param_2 + 6;
      } while (iVar3 != 0);
    }
  }
  return;
}




void FUN_100638124(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *param_4;
  fVar7 = param_4[0x21];
  fVar8 = param_4[0x42];
  fVar9 = param_4[99];
  fVar10 = param_4[0x84];
  uVar2 = param_3 >> 2;
  fVar11 = param_4[0xa5];
  if (param_7 == 0) {
    if (uVar2 != 0) {
      lVar3 = (ulong)(uVar2 - 1) * 0x18 + 0x18;
      pfVar1 = param_1 + lVar3;
      iVar4 = -(param_3 >> 2);
      pfVar5 = param_2;
      do {
        *pfVar5 = *pfVar5 + fVar6 * *param_1;
        pfVar5[1] = pfVar5[1] + fVar7 * param_1[1];
        pfVar5[2] = pfVar5[2] + fVar8 * param_1[2];
        pfVar5[3] = pfVar5[3] + fVar9 * param_1[3];
        pfVar5[4] = pfVar5[4] + fVar10 * param_1[4];
        pfVar5[5] = pfVar5[5] + fVar11 * param_1[5];
        pfVar5[6] = pfVar5[6] + fVar6 * param_1[6];
        pfVar5[7] = pfVar5[7] + fVar7 * param_1[7];
        pfVar5[8] = pfVar5[8] + fVar8 * param_1[8];
        pfVar5[9] = pfVar5[9] + fVar9 * param_1[9];
        pfVar5[10] = pfVar5[10] + fVar10 * param_1[10];
        pfVar5[0xb] = pfVar5[0xb] + fVar11 * param_1[0xb];
        pfVar5[0xc] = pfVar5[0xc] + fVar6 * param_1[0xc];
        pfVar5[0xd] = pfVar5[0xd] + fVar7 * param_1[0xd];
        pfVar5[0xe] = pfVar5[0xe] + fVar8 * param_1[0xe];
        pfVar5[0xf] = pfVar5[0xf] + fVar9 * param_1[0xf];
        pfVar5[0x10] = pfVar5[0x10] + fVar10 * param_1[0x10];
        pfVar5[0x11] = pfVar5[0x11] + fVar11 * param_1[0x11];
        pfVar5[0x12] = pfVar5[0x12] + fVar6 * param_1[0x12];
        pfVar5[0x13] = pfVar5[0x13] + fVar7 * param_1[0x13];
        pfVar5[0x14] = pfVar5[0x14] + fVar8 * param_1[0x14];
        pfVar5[0x15] = pfVar5[0x15] + fVar9 * param_1[0x15];
        pfVar5[0x16] = pfVar5[0x16] + fVar10 * param_1[0x16];
        pfVar5[0x17] = pfVar5[0x17] + fVar11 * param_1[0x17];
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 0x18;
        pfVar5 = pfVar5 + 0x18;
      } while (iVar4 != 0);
      param_2 = param_2 + lVar3;
      param_1 = pfVar1;
    }
    if ((param_3 & 3) != 0) {
      iVar4 = -(param_3 & 3);
      do {
        *param_2 = *param_2 + fVar6 * *param_1;
        param_2[1] = param_2[1] + fVar7 * param_1[1];
        param_2[2] = param_2[2] + fVar8 * param_1[2];
        param_2[3] = param_2[3] + fVar9 * param_1[3];
        param_2[4] = param_2[4] + fVar10 * param_1[4];
        param_2[5] = param_2[5] + fVar11 * param_1[5];
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 6;
        param_2 = param_2 + 6;
      } while (iVar4 != 0);
    }
  }
  else {
    if (uVar2 != 0) {
      lVar3 = (ulong)(uVar2 - 1) * 0x18 + 0x18;
      pfVar1 = param_1 + lVar3;
      iVar4 = -(param_3 >> 2);
      pfVar5 = param_2;
      do {
        *pfVar5 = fVar6 * *param_1;
        pfVar5[1] = fVar7 * param_1[1];
        pfVar5[2] = fVar8 * param_1[2];
        pfVar5[3] = fVar9 * param_1[3];
        pfVar5[4] = fVar10 * param_1[4];
        pfVar5[5] = fVar11 * param_1[5];
        pfVar5[6] = fVar6 * param_1[6];
        pfVar5[7] = fVar7 * param_1[7];
        pfVar5[8] = fVar8 * param_1[8];
        pfVar5[9] = fVar9 * param_1[9];
        pfVar5[10] = fVar10 * param_1[10];
        pfVar5[0xb] = fVar11 * param_1[0xb];
        pfVar5[0xc] = fVar6 * param_1[0xc];
        pfVar5[0xd] = fVar7 * param_1[0xd];
        pfVar5[0xe] = fVar8 * param_1[0xe];
        pfVar5[0xf] = fVar9 * param_1[0xf];
        pfVar5[0x10] = fVar10 * param_1[0x10];
        pfVar5[0x11] = fVar11 * param_1[0x11];
        pfVar5[0x12] = fVar6 * param_1[0x12];
        pfVar5[0x13] = fVar7 * param_1[0x13];
        pfVar5[0x14] = fVar8 * param_1[0x14];
        pfVar5[0x15] = fVar9 * param_1[0x15];
        pfVar5[0x16] = fVar10 * param_1[0x16];
        pfVar5[0x17] = fVar11 * param_1[0x17];
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 0x18;
        pfVar5 = pfVar5 + 0x18;
      } while (iVar4 != 0);
      param_2 = param_2 + lVar3;
      param_1 = pfVar1;
    }
    if ((param_3 & 3) != 0) {
      iVar4 = -(param_3 & 3);
      do {
        *param_2 = fVar6 * *param_1;
        param_2[1] = fVar7 * param_1[1];
        param_2[2] = fVar8 * param_1[2];
        param_2[3] = fVar9 * param_1[3];
        param_2[4] = fVar10 * param_1[4];
        param_2[5] = fVar11 * param_1[5];
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 6;
        param_2 = param_2 + 6;
      } while (iVar4 != 0);
    }
  }
  return;
}




void FUN_1006385bc(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar9 = param_4[4];
  fVar10 = param_4[5];
  if (param_7 != 0) {
    _bzero(param_2,(ulong)(param_3 * 6) << 2);
  }
  if (param_3 >> 2 != 0) {
    lVar2 = (ulong)((param_3 >> 2) - 1) * 0x18 + 0x18;
    pfVar1 = param_1 + lVar2;
    iVar3 = -(param_3 >> 2);
    pfVar4 = param_2;
    do {
      *pfVar4 = *pfVar4 + fVar5 * *param_1 + fVar6 * param_1[1] + fVar7 * param_1[2] +
                          fVar8 * param_1[3] + fVar9 * param_1[4] + fVar10 * param_1[5];
      pfVar4[6] = pfVar4[6] +
                  fVar5 * param_1[6] + fVar6 * param_1[7] + fVar7 * param_1[8] + fVar8 * param_1[9]
                  + fVar9 * param_1[10] + fVar10 * param_1[0xb];
      pfVar4[0xc] = pfVar4[0xc] +
                    fVar5 * param_1[0xc] + fVar6 * param_1[0xd] + fVar7 * param_1[0xe] +
                    fVar8 * param_1[0xf] + fVar9 * param_1[0x10] + fVar10 * param_1[0x11];
      pfVar4[0x12] = pfVar4[0x12] +
                     fVar5 * param_1[0x12] + fVar6 * param_1[0x13] + fVar7 * param_1[0x14] +
                     fVar8 * param_1[0x15] + fVar9 * param_1[0x16] + fVar10 * param_1[0x17];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x18;
      pfVar4 = pfVar4 + 0x18;
    } while (iVar3 != 0);
    param_2 = param_2 + lVar2;
    param_1 = pfVar1;
  }
  if ((param_3 & 3) != 0) {
    iVar3 = -(param_3 & 3);
    do {
      *param_2 = *param_2 +
                 fVar5 * *param_1 + fVar6 * param_1[1] + fVar7 * param_1[2] + fVar8 * param_1[3] +
                 fVar9 * param_1[4] + fVar10 * param_1[5];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 6;
      param_2 = param_2 + 6;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_1006387d0(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  float *pfVar4;
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
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar13 = param_4[4];
  fVar14 = param_4[5];
  fVar15 = param_4[0x20];
  fVar16 = param_4[0x21];
  fVar9 = param_4[0x22];
  fVar10 = param_4[0x23];
  fVar11 = param_4[0x24];
  fVar12 = param_4[0x25];
  if (param_7 != 0) {
    _bzero(param_2,(ulong)(param_3 * 6) << 2);
  }
  if (param_3 >> 2 != 0) {
    lVar2 = (ulong)((param_3 >> 2) - 1) * 0x18 + 0x18;
    pfVar1 = param_1 + lVar2;
    iVar3 = -(param_3 >> 2);
    pfVar4 = param_2;
    do {
      *pfVar4 = *pfVar4 + fVar5 * *param_1 + fVar6 * param_1[1] + fVar7 * param_1[2] +
                          fVar8 * param_1[3] + fVar13 * param_1[4] + fVar14 * param_1[5];
      pfVar4[1] = pfVar4[1] +
                  fVar15 * *param_1 + fVar16 * param_1[1] + fVar9 * param_1[2] + fVar10 * param_1[3]
                  + fVar11 * param_1[4] + fVar12 * param_1[5];
      pfVar4[6] = pfVar4[6] +
                  fVar5 * param_1[6] + fVar6 * param_1[7] + fVar7 * param_1[8] + fVar8 * param_1[9]
                  + fVar13 * param_1[10] + fVar14 * param_1[0xb];
      pfVar4[7] = pfVar4[7] +
                  fVar15 * param_1[6] + fVar16 * param_1[7] + fVar9 * param_1[8] +
                  fVar10 * param_1[9] + fVar11 * param_1[10] + fVar12 * param_1[0xb];
      pfVar4[0xc] = pfVar4[0xc] +
                    fVar5 * param_1[0xc] + fVar6 * param_1[0xd] + fVar7 * param_1[0xe] +
                    fVar8 * param_1[0xf] + fVar13 * param_1[0x10] + fVar14 * param_1[0x11];
      pfVar4[0xd] = pfVar4[0xd] +
                    fVar15 * param_1[0xc] + fVar16 * param_1[0xd] + fVar9 * param_1[0xe] +
                    fVar10 * param_1[0xf] + fVar11 * param_1[0x10] + fVar12 * param_1[0x11];
      pfVar4[0x12] = pfVar4[0x12] +
                     fVar5 * param_1[0x12] + fVar6 * param_1[0x13] + fVar7 * param_1[0x14] +
                     fVar8 * param_1[0x15] + fVar13 * param_1[0x16] + fVar14 * param_1[0x17];
      pfVar4[0x13] = pfVar4[0x13] +
                     fVar15 * param_1[0x12] + fVar16 * param_1[0x13] + fVar9 * param_1[0x14] +
                     fVar10 * param_1[0x15] + fVar11 * param_1[0x16] + fVar12 * param_1[0x17];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x18;
      pfVar4 = pfVar4 + 0x18;
    } while (iVar3 != 0);
    param_2 = param_2 + lVar2;
    param_1 = pfVar1;
  }
  if ((param_3 & 3) != 0) {
    iVar3 = -(param_3 & 3);
    do {
      *param_2 = *param_2 +
                 fVar5 * *param_1 + fVar6 * param_1[1] + fVar7 * param_1[2] + fVar8 * param_1[3] +
                 fVar13 * param_1[4] + fVar14 * param_1[5];
      param_2[1] = param_2[1] +
                   fVar15 * *param_1 + fVar16 * param_1[1] + fVar9 * param_1[2] +
                   fVar10 * param_1[3] + fVar11 * param_1[4] + fVar12 * param_1[5];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 6;
      param_2 = param_2 + 6;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_100638b80(float *param_1,float *param_2,int param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  if (param_7 != 0) {
    _bzero(param_2,(ulong)(uint)(param_3 * 6) << 2);
  }
  if (0 < param_3) {
    do {
      *param_2 = *param_2 +
                 *param_1 * *param_4 + param_1[1] * param_4[1] + param_1[2] * param_4[2] +
                 param_1[3] * param_4[3] + param_1[4] * param_4[4] + param_1[5] * param_4[5];
      param_2[1] = param_2[1] +
                   *param_1 * param_4[0x20] + param_1[1] * param_4[0x21] +
                   param_1[2] * param_4[0x22] + param_1[3] * param_4[0x23] +
                   param_1[4] * param_4[0x24] + param_1[5] * param_4[0x25];
      param_2[2] = param_2[2] +
                   *param_1 * param_4[0x40] + param_1[1] * param_4[0x41] +
                   param_1[2] * param_4[0x42] + param_1[3] * param_4[0x43] +
                   param_1[4] * param_4[0x44] + param_1[5] * param_4[0x45];
      param_2[3] = param_2[3] +
                   *param_1 * param_4[0x60] + param_1[1] * param_4[0x61] +
                   param_1[2] * param_4[0x62] + param_1[3] * param_4[99] + param_1[4] * param_4[100]
                   + param_1[5] * param_4[0x65];
      param_2[4] = param_2[4] +
                   *param_1 * param_4[0x80] + param_1[1] * param_4[0x81] +
                   param_1[2] * param_4[0x82] + param_1[3] * param_4[0x83] +
                   param_1[4] * param_4[0x84] + param_1[5] * param_4[0x85];
      param_2[5] = param_2[5] +
                   *param_1 * param_4[0xa0] + param_1[1] * param_4[0xa1] +
                   param_1[2] * param_4[0xa2] + param_1[3] * param_4[0xa3] +
                   param_1[4] * param_4[0xa4] + param_1[5] * param_4[0xa5];
      param_3 = param_3 + -1;
      param_1 = param_1 + 6;
      param_2 = param_2 + 6;
    } while (param_3 != 0);
  }
  return;
}




void FUN_100638df0(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar5 = *param_4;
  fVar6 = param_4[0x20];
  fVar7 = param_4[0x40];
  fVar8 = param_4[0x60];
  fVar9 = param_4[0x80];
  fVar10 = param_4[0xa0];
  fVar11 = param_4[0xc0];
  uVar1 = param_3 >> 1;
  fVar12 = param_4[0xe0];
  if (param_7 == 0) {
    if (uVar1 != 0) {
      iVar2 = -(param_3 >> 1);
      pfVar3 = param_1;
      pfVar4 = param_2;
      do {
        *pfVar4 = *pfVar4 + fVar5 * *pfVar3;
        pfVar4[1] = pfVar4[1] + fVar6 * *pfVar3;
        pfVar4[2] = pfVar4[2] + fVar7 * *pfVar3;
        pfVar4[3] = pfVar4[3] + fVar8 * *pfVar3;
        pfVar4[4] = pfVar4[4] + fVar9 * *pfVar3;
        pfVar4[5] = pfVar4[5] + fVar10 * *pfVar3;
        pfVar4[6] = pfVar4[6] + fVar11 * *pfVar3;
        pfVar4[7] = pfVar4[7] + fVar12 * *pfVar3;
        pfVar4[8] = pfVar4[8] + fVar5 * pfVar3[1];
        pfVar4[9] = pfVar4[9] + fVar6 * pfVar3[1];
        pfVar4[10] = pfVar4[10] + fVar7 * pfVar3[1];
        pfVar4[0xb] = pfVar4[0xb] + fVar8 * pfVar3[1];
        pfVar4[0xc] = pfVar4[0xc] + fVar9 * pfVar3[1];
        pfVar4[0xd] = pfVar4[0xd] + fVar10 * pfVar3[1];
        pfVar4[0xe] = pfVar4[0xe] + fVar11 * pfVar3[1];
        pfVar4[0xf] = pfVar4[0xf] + fVar12 * pfVar3[1];
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 2;
        pfVar4 = pfVar4 + 0x10;
      } while (iVar2 != 0);
      param_1 = param_1 + (ulong)(uVar1 - 1) * 2 + 2;
      param_2 = param_2 + (ulong)(uVar1 - 1) * 0x10 + 0x10;
    }
    if ((param_3 & 1) != 0) {
      iVar2 = -(param_3 & 1);
      do {
        *param_2 = *param_2 + fVar5 * *param_1;
        param_2[1] = param_2[1] + fVar6 * *param_1;
        param_2[2] = param_2[2] + fVar7 * *param_1;
        param_2[3] = param_2[3] + fVar8 * *param_1;
        param_2[4] = param_2[4] + fVar9 * *param_1;
        param_2[5] = param_2[5] + fVar10 * *param_1;
        param_2[6] = param_2[6] + fVar11 * *param_1;
        param_2[7] = param_2[7] + fVar12 * *param_1;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 8;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  else {
    if (uVar1 != 0) {
      iVar2 = -(param_3 >> 1);
      pfVar3 = param_1;
      pfVar4 = param_2;
      do {
        *pfVar4 = fVar5 * *pfVar3;
        pfVar4[1] = fVar6 * *pfVar3;
        pfVar4[2] = fVar7 * *pfVar3;
        pfVar4[3] = fVar8 * *pfVar3;
        pfVar4[4] = fVar9 * *pfVar3;
        pfVar4[5] = fVar10 * *pfVar3;
        pfVar4[6] = fVar11 * *pfVar3;
        pfVar4[7] = fVar12 * *pfVar3;
        pfVar4[8] = fVar5 * pfVar3[1];
        pfVar4[9] = fVar6 * pfVar3[1];
        pfVar4[10] = fVar7 * pfVar3[1];
        pfVar4[0xb] = fVar8 * pfVar3[1];
        pfVar4[0xc] = fVar9 * pfVar3[1];
        pfVar4[0xd] = fVar10 * pfVar3[1];
        pfVar4[0xe] = fVar11 * pfVar3[1];
        pfVar4[0xf] = fVar12 * pfVar3[1];
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 2;
        pfVar4 = pfVar4 + 0x10;
      } while (iVar2 != 0);
      param_1 = param_1 + (ulong)(uVar1 - 1) * 2 + 2;
      param_2 = param_2 + (ulong)(uVar1 - 1) * 0x10 + 0x10;
    }
    if ((param_3 & 1) != 0) {
      iVar2 = -(param_3 & 1);
      do {
        *param_2 = fVar5 * *param_1;
        param_2[1] = fVar6 * *param_1;
        param_2[2] = fVar7 * *param_1;
        param_2[3] = fVar8 * *param_1;
        param_2[4] = fVar9 * *param_1;
        param_2[5] = fVar10 * *param_1;
        param_2[6] = fVar11 * *param_1;
        param_2[7] = fVar12 * *param_1;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 8;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  return;
}




void FUN_1006391c8(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  fVar20 = *param_4;
  fVar22 = param_4[1];
  fVar33 = param_4[0x20];
  fVar21 = param_4[0x21];
  fVar31 = param_4[0x40];
  fVar27 = param_4[0x41];
  fVar19 = param_4[0x60];
  fVar23 = param_4[0x80];
  fVar32 = param_4[0xa0];
  fVar30 = param_4[0xc0];
  fVar29 = param_4[0xe0];
  fVar34 = param_4[0x61];
  fVar24 = param_4[0x81];
  fVar28 = param_4[0xa1];
  fVar26 = param_4[0xc1];
  fVar25 = param_4[0xe1];
  if (((((2e-05 <= ABS(fVar22)) || (2e-05 <= ABS(fVar33))) || (2e-05 <= ABS(fVar31))) ||
      ((((2e-05 <= ABS(fVar27) || (2e-05 <= ABS(fVar19))) ||
        ((2e-05 <= ABS(fVar34) || ((2e-05 <= ABS(fVar23) || (2e-05 <= ABS(fVar24))))))) ||
       (2e-05 <= ABS(fVar32))))) ||
     ((((2e-05 <= ABS(fVar28) || (2e-05 <= ABS(fVar30))) || (2e-05 <= ABS(fVar26))) ||
      ((2e-05 <= ABS(fVar29) || (2e-05 <= ABS(fVar25))))))) {
    if (param_7 != 0) {
      _bzero(param_2,(ulong)(param_3 << 3) << 2);
    }
    if (param_3 >> 1 != 0) {
      uVar3 = (ulong)((param_3 >> 1) - 1);
      iVar4 = -(param_3 >> 1);
      pfVar5 = param_1;
      pfVar6 = param_2;
      do {
        fVar9 = *pfVar5;
        fVar17 = pfVar5[1];
        fVar13 = fVar23 * fVar9 + fVar24 * fVar17 + pfVar6[4];
        fVar14 = fVar32 * fVar9 + fVar28 * fVar17 + pfVar6[5];
        fVar15 = fVar30 * fVar9 + fVar26 * fVar17 + pfVar6[6];
        fVar16 = fVar29 * fVar9 + fVar25 * fVar17 + pfVar6[7];
        auVar10._0_8_ =
             CONCAT44(fVar33 * fVar9 + fVar21 * fVar17 + pfVar6[1],
                      fVar20 * fVar9 + fVar22 * fVar17 + *pfVar6);
        auVar10._8_4_ = fVar31 * fVar9 + fVar27 * fVar17 + pfVar6[2];
        auVar10._12_4_ = fVar19 * fVar9 + fVar34 * fVar17 + pfVar6[3];
        auVar12._4_4_ = fVar14;
        auVar12._0_4_ = fVar13;
        auVar12._8_4_ = fVar15;
        auVar12._12_4_ = fVar16;
        auVar18._4_4_ = fVar14;
        auVar18._0_4_ = fVar13;
        auVar18._8_4_ = fVar15;
        auVar18._12_4_ = fVar16;
        auVar12 = NEON_ext(auVar12,auVar18,8,1);
        auVar18 = NEON_ext(auVar10,auVar10,8,1);
        *(long *)(pfVar6 + 6) = auVar12._0_8_;
        *(undefined8 *)pfVar6 = auVar10._0_8_;
        *(ulong *)(pfVar6 + 4) = CONCAT44(fVar14,fVar13);
        *(long *)(pfVar6 + 2) = auVar18._0_8_;
        fVar9 = pfVar5[2];
        fVar13 = pfVar5[3];
        fVar14 = fVar20 * fVar9 + fVar22 * fVar13 + (float)*(undefined8 *)(pfVar6 + 8);
        fVar15 = fVar33 * fVar9 + fVar21 * fVar13 +
                 (float)((ulong)*(undefined8 *)(pfVar6 + 8) >> 0x20);
        fVar16 = fVar31 * fVar9 + fVar27 * fVar13 + (float)*(undefined8 *)(pfVar6 + 10);
        fVar17 = fVar19 * fVar9 + fVar34 * fVar13 +
                 (float)((ulong)*(undefined8 *)(pfVar6 + 10) >> 0x20);
        auVar11._0_8_ =
             CONCAT44(fVar32 * fVar9 + fVar28 * fVar13 + pfVar6[0xd],
                      fVar23 * fVar9 + fVar24 * fVar13 + pfVar6[0xc]);
        auVar11._8_4_ = fVar30 * fVar9 + fVar26 * fVar13 + pfVar6[0xe];
        auVar11._12_4_ = fVar29 * fVar9 + fVar25 * fVar13 + pfVar6[0xf];
        *(ulong *)(pfVar6 + 8) = CONCAT44(fVar15,fVar14);
        auVar1._4_4_ = fVar15;
        auVar1._0_4_ = fVar14;
        auVar1._8_4_ = fVar16;
        auVar1._12_4_ = fVar17;
        auVar2._4_4_ = fVar15;
        auVar2._0_4_ = fVar14;
        auVar2._8_4_ = fVar16;
        auVar2._12_4_ = fVar17;
        auVar12 = NEON_ext(auVar1,auVar2,8,1);
        *(long *)(pfVar6 + 10) = auVar12._0_8_;
        *(undefined8 *)(pfVar6 + 0xc) = auVar11._0_8_;
        auVar12 = NEON_ext(auVar11,auVar11,8,1);
        *(long *)(pfVar6 + 0xe) = auVar12._0_8_;
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 4;
        pfVar6 = pfVar6 + 0x10;
      } while (iVar4 != 0);
      param_2 = param_2 + uVar3 * 0x10 + 0x10;
      param_1 = param_1 + uVar3 * 4 + 4;
    }
    if ((param_3 & 1) != 0) {
      iVar4 = -(param_3 & 1);
      do {
        fVar9 = *param_1;
        fVar13 = param_1[1];
        auVar8._0_8_ = CONCAT44(fVar33 * fVar9 + fVar21 * fVar13 +
                                (float)((ulong)*(undefined8 *)param_2 >> 0x20),
                                fVar20 * fVar9 + fVar22 * fVar13 + (float)*(undefined8 *)param_2);
        auVar8._8_4_ = fVar31 * fVar9 + fVar27 * fVar13 + (float)*(undefined8 *)(param_2 + 2);
        auVar8._12_4_ =
             fVar19 * fVar9 + fVar34 * fVar13 + (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20)
        ;
        auVar7._0_8_ = CONCAT44(fVar32 * fVar9 + fVar28 * fVar13 +
                                (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20),
                                fVar23 * fVar9 + fVar24 * fVar13 +
                                (float)*(undefined8 *)(param_2 + 4));
        auVar7._8_4_ = fVar30 * fVar9 + fVar26 * fVar13 + (float)*(undefined8 *)(param_2 + 6);
        auVar7._12_4_ =
             fVar29 * fVar9 + fVar25 * fVar13 + (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20)
        ;
        *(undefined8 *)param_2 = auVar8._0_8_;
        auVar12 = NEON_ext(auVar8,auVar8,8,1);
        *(long *)(param_2 + 2) = auVar12._0_8_;
        *(undefined8 *)(param_2 + 4) = auVar7._0_8_;
        auVar12 = NEON_ext(auVar7,auVar7,8,1);
        *(long *)(param_2 + 6) = auVar12._0_8_;
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 2;
        param_2 = param_2 + 8;
      } while (iVar4 != 0);
    }
  }
  else {
    if (param_7 != 0) {
      _bzero(param_2,(ulong)(param_3 << 3) << 2);
    }
    if (param_3 >> 2 != 0) {
      uVar3 = (ulong)((param_3 >> 2) - 1);
      iVar4 = -(param_3 >> 2);
      pfVar5 = param_1;
      pfVar6 = param_2;
      do {
        *pfVar6 = *pfVar6 + fVar20 * *pfVar5;
        pfVar6[1] = pfVar6[1] + fVar21 * pfVar5[1];
        pfVar6[8] = pfVar6[8] + fVar20 * pfVar5[2];
        pfVar6[9] = pfVar6[9] + fVar21 * pfVar5[3];
        pfVar6[0x10] = pfVar6[0x10] + fVar20 * pfVar5[4];
        pfVar6[0x11] = pfVar6[0x11] + fVar21 * pfVar5[5];
        pfVar6[0x18] = pfVar6[0x18] + fVar20 * pfVar5[6];
        pfVar6[0x19] = pfVar6[0x19] + fVar21 * pfVar5[7];
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 8;
        pfVar6 = pfVar6 + 0x20;
      } while (iVar4 != 0);
      param_1 = param_1 + uVar3 * 8 + 8;
      param_2 = param_2 + uVar3 * 0x20 + 0x20;
    }
    if ((param_3 & 3) != 0) {
      iVar4 = -(param_3 & 3);
      do {
        *param_2 = *param_2 + fVar20 * *param_1;
        param_2[1] = param_2[1] + fVar21 * param_1[1];
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 2;
        param_2 = param_2 + 8;
      } while (iVar4 != 0);
    }
  }
  return;
}




void FUN_100639628(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  int param_6,int param_7)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar5 = *param_4;
  fVar6 = param_4[0x21];
  fVar7 = param_4[0x42];
  fVar8 = param_4[99];
  fVar9 = param_4[0x84];
  fVar10 = param_4[0xa5];
  fVar11 = param_4[0xc6];
  fVar12 = param_4[0xe7];
  if (param_7 != 0) {
    _bzero(param_2,(ulong)(param_6 * param_3) << 2);
  }
  if (param_3 >> 1 != 0) {
    lVar1 = (ulong)((param_3 >> 1) - 1) * 0x10 + 0x10;
    pfVar2 = param_1 + lVar1;
    iVar3 = -(param_3 >> 1);
    pfVar4 = param_2;
    do {
      *pfVar4 = *pfVar4 + fVar5 * *param_1;
      pfVar4[1] = pfVar4[1] + fVar6 * param_1[1];
      pfVar4[2] = pfVar4[2] + fVar7 * param_1[2];
      pfVar4[3] = pfVar4[3] + fVar8 * param_1[3];
      pfVar4[4] = pfVar4[4] + fVar9 * param_1[4];
      pfVar4[5] = pfVar4[5] + fVar10 * param_1[5];
      pfVar4[6] = pfVar4[6] + fVar11 * param_1[6];
      pfVar4[7] = pfVar4[7] + fVar12 * param_1[7];
      pfVar4[8] = pfVar4[8] + fVar5 * param_1[8];
      pfVar4[9] = pfVar4[9] + fVar6 * param_1[9];
      pfVar4[10] = pfVar4[10] + fVar7 * param_1[10];
      pfVar4[0xb] = pfVar4[0xb] + fVar8 * param_1[0xb];
      pfVar4[0xc] = pfVar4[0xc] + fVar9 * param_1[0xc];
      pfVar4[0xd] = pfVar4[0xd] + fVar10 * param_1[0xd];
      pfVar4[0xe] = pfVar4[0xe] + fVar11 * param_1[0xe];
      pfVar4[0xf] = pfVar4[0xf] + fVar12 * param_1[0xf];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x10;
      pfVar4 = pfVar4 + 0x10;
    } while (iVar3 != 0);
    param_2 = param_2 + lVar1;
    param_1 = pfVar2;
  }
  if ((param_3 & 1) != 0) {
    iVar3 = -(param_3 & 1);
    do {
      *param_2 = *param_2 + fVar5 * *param_1;
      param_2[1] = param_2[1] + fVar6 * param_1[1];
      param_2[2] = param_2[2] + fVar7 * param_1[2];
      param_2[3] = param_2[3] + fVar8 * param_1[3];
      param_2[4] = param_2[4] + fVar9 * param_1[4];
      param_2[5] = param_2[5] + fVar10 * param_1[5];
      param_2[6] = param_2[6] + fVar11 * param_1[6];
      param_2[7] = param_2[7] + fVar12 * param_1[7];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 8;
      param_2 = param_2 + 8;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_1006398e0(float *param_1,void *param_2,int param_3,long param_4,undefined8 param_5,
                  int param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  
  if (param_7 != 0) {
    _bzero(param_2,(ulong)(uint)(param_6 * param_3) << 2);
  }
  if (0 < param_3) {
    iVar2 = 0;
    do {
      lVar3 = 0;
      pfVar4 = (float *)(param_4 + 0x10);
      do {
        *(float *)((long)param_2 + lVar3) =
             *(float *)((long)param_2 + lVar3) + *param_1 * pfVar4[-4] + param_1[1] * pfVar4[-3] +
             param_1[2] * pfVar4[-2] + param_1[3] * pfVar4[-1] + param_1[4] * *pfVar4 +
             param_1[5] * pfVar4[1] + param_1[6] * pfVar4[2] + param_1[7] * pfVar4[3];
        lVar3 = lVar3 + 4;
        pfVar4 = pfVar4 + 0x20;
      } while (lVar3 != 0x20);
      param_2 = (void *)((long)param_2 + 0x20);
      param_1 = param_1 + 8;
      bVar1 = iVar2 != param_3 + -1;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_1006399cc(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_4;
  fVar6 = param_4[0x20];
  uVar1 = param_3 >> 2;
  if (param_7 == 0) {
    if (uVar1 != 0) {
      iVar2 = -(param_3 >> 2);
      pfVar3 = param_1;
      pfVar4 = param_2;
      do {
        *pfVar4 = *pfVar4 + fVar5 * *pfVar3;
        pfVar4[1] = pfVar4[1] + fVar6 * *pfVar3;
        pfVar4[2] = pfVar4[2] + fVar5 * pfVar3[1];
        pfVar4[3] = pfVar4[3] + fVar6 * pfVar3[1];
        pfVar4[4] = pfVar4[4] + fVar5 * pfVar3[2];
        pfVar4[5] = pfVar4[5] + fVar6 * pfVar3[2];
        pfVar4[6] = pfVar4[6] + fVar5 * pfVar3[3];
        pfVar4[7] = pfVar4[7] + fVar6 * pfVar3[3];
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 8;
      } while (iVar2 != 0);
      param_2 = param_2 + (ulong)(uVar1 - 1) * 8 + 8;
      param_1 = param_1 + (ulong)(uVar1 - 1) * 4 + 4;
    }
    if ((param_3 & 3) != 0) {
      iVar2 = -(param_3 & 3);
      do {
        *param_2 = *param_2 + fVar5 * *param_1;
        param_2[1] = param_2[1] + fVar6 * *param_1;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 2;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  else {
    if (uVar1 != 0) {
      iVar2 = -(param_3 >> 2);
      pfVar3 = param_1;
      pfVar4 = param_2;
      do {
        *pfVar4 = fVar5 * *pfVar3;
        pfVar4[1] = fVar6 * *pfVar3;
        pfVar4[2] = fVar5 * pfVar3[1];
        pfVar4[3] = fVar6 * pfVar3[1];
        pfVar4[4] = fVar5 * pfVar3[2];
        pfVar4[5] = fVar6 * pfVar3[2];
        pfVar4[6] = fVar5 * pfVar3[3];
        pfVar4[7] = fVar6 * pfVar3[3];
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 8;
      } while (iVar2 != 0);
      param_2 = param_2 + (ulong)(uVar1 - 1) * 8 + 8;
      param_1 = param_1 + (ulong)(uVar1 - 1) * 4 + 4;
    }
    if ((param_3 & 3) != 0) {
      iVar2 = -(param_3 & 3);
      do {
        *param_2 = fVar5 * *param_1;
        param_2[1] = fVar6 * *param_1;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 2;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  return;
}




void FUN_100639bcc(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  int param_6,int param_7)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[0x20];
  fVar8 = param_4[0x21];
  if (param_7 != 0) {
    _bzero(param_2,(ulong)(param_6 * param_3) << 2);
  }
  if (param_3 >> 2 != 0) {
    lVar1 = (ulong)((param_3 >> 2) - 1) * 8 + 8;
    pfVar2 = param_2 + lVar1;
    iVar3 = -(param_3 >> 2);
    pfVar4 = param_1;
    do {
      *param_2 = *param_2 + fVar5 * *pfVar4 + fVar6 * pfVar4[1];
      param_2[1] = param_2[1] + fVar7 * *pfVar4 + fVar8 * pfVar4[1];
      param_2[2] = param_2[2] + fVar5 * pfVar4[2] + fVar6 * pfVar4[3];
      param_2[3] = param_2[3] + fVar7 * pfVar4[2] + fVar8 * pfVar4[3];
      param_2[4] = param_2[4] + fVar5 * pfVar4[4] + fVar6 * pfVar4[5];
      param_2[5] = param_2[5] + fVar7 * pfVar4[4] + fVar8 * pfVar4[5];
      param_2[6] = param_2[6] + fVar5 * pfVar4[6] + fVar6 * pfVar4[7];
      param_2[7] = param_2[7] + fVar7 * pfVar4[6] + fVar8 * pfVar4[7];
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 8;
      param_2 = param_2 + 8;
    } while (iVar3 != 0);
    param_1 = param_1 + lVar1;
    param_2 = pfVar2;
  }
  if ((param_3 & 3) != 0) {
    iVar3 = -(param_3 & 3);
    do {
      *param_2 = *param_2 + fVar5 * *param_1 + fVar6 * param_1[1];
      param_2[1] = param_2[1] + fVar7 * *param_1 + fVar8 * param_1[1];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_100639d94(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar13 = *param_4;
  uVar7 = param_3 >> 2;
  if (param_7 == 0) {
    if (uVar7 != 0) {
      lVar1 = (ulong)(uVar7 - 1) * 4 + 4;
      pfVar6 = param_2 + lVar1;
      iVar8 = -(param_3 >> 2);
      pfVar5 = param_1;
      do {
        *param_2 = *param_2 + fVar13 * *pfVar5;
        param_2[1] = param_2[1] + fVar13 * pfVar5[1];
        param_2[2] = param_2[2] + fVar13 * pfVar5[2];
        param_2[3] = param_2[3] + fVar13 * pfVar5[3];
        iVar8 = iVar8 + 1;
        pfVar5 = pfVar5 + 4;
        param_2 = param_2 + 4;
      } while (iVar8 != 0);
      param_1 = param_1 + lVar1;
      param_2 = pfVar6;
    }
    uVar7 = param_3 & 3;
    if (uVar7 != 0) {
      uVar10 = (ulong)(uVar7 - 1);
      uVar9 = uVar10 + 1 & 0x1fffffff8;
      pfVar5 = param_1;
      pfVar6 = param_2;
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else if ((param_1 + uVar10 < param_2) || (param_2 + uVar10 < param_1)) {
        uVar7 = uVar7 - (int)uVar9;
        pfVar5 = param_1 + uVar9;
        pfVar6 = param_2 + uVar9;
        uVar11 = (ulong)((param_3 & 3) - 1) + 1 & 0xfffffffffffffff8;
        param_2 = param_2 + 4;
        pfVar12 = param_1 + 4;
        do {
          auVar16._0_8_ =
               CONCAT44((float)((ulong)*(undefined8 *)(param_2 + -4) >> 0x20) + fVar13 * pfVar12[-3]
                        ,(float)*(undefined8 *)(param_2 + -4) + fVar13 * pfVar12[-4]);
          auVar16._8_4_ = (float)*(undefined8 *)(param_2 + -2) + fVar13 * pfVar12[-2];
          auVar16._12_4_ =
               (float)((ulong)*(undefined8 *)(param_2 + -2) >> 0x20) + fVar13 * pfVar12[-1];
          fVar17 = (float)*(undefined8 *)param_2 + fVar13 * (float)*(undefined8 *)pfVar12;
          fVar18 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                   fVar13 * (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
          fVar19 = (float)*(undefined8 *)(param_2 + 2) +
                   fVar13 * (float)*(undefined8 *)(pfVar12 + 2);
          fVar20 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) +
                   fVar13 * (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
          *(undefined8 *)(param_2 + -4) = auVar16._0_8_;
          auVar15 = NEON_ext(auVar16,auVar16,8,1);
          *(long *)(param_2 + -2) = auVar15._0_8_;
          *(ulong *)param_2 = CONCAT44(fVar18,fVar17);
          auVar15._4_4_ = fVar18;
          auVar15._0_4_ = fVar17;
          auVar15._8_4_ = fVar19;
          auVar15._12_4_ = fVar20;
          auVar4._4_4_ = fVar18;
          auVar4._0_4_ = fVar17;
          auVar4._8_4_ = fVar19;
          auVar4._12_4_ = fVar20;
          auVar15 = NEON_ext(auVar15,auVar4,8,1);
          *(long *)(param_2 + 2) = auVar15._0_8_;
          uVar11 = uVar11 - 8;
          param_2 = param_2 + 8;
          pfVar12 = pfVar12 + 8;
        } while (uVar11 != 0);
      }
      else {
        uVar9 = 0;
      }
      if (uVar10 + 1 != uVar9) {
        do {
          *pfVar6 = *pfVar6 + fVar13 * *pfVar5;
          uVar7 = uVar7 - 1;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar7 != 0);
      }
    }
  }
  else {
    if (uVar7 != 0) {
      lVar1 = (ulong)(uVar7 - 1) * 4 + 4;
      pfVar6 = param_2 + lVar1;
      iVar8 = -(param_3 >> 2);
      pfVar5 = param_1;
      do {
        *param_2 = fVar13 * *pfVar5;
        param_2[1] = fVar13 * pfVar5[1];
        param_2[2] = fVar13 * pfVar5[2];
        param_2[3] = fVar13 * pfVar5[3];
        iVar8 = iVar8 + 1;
        pfVar5 = pfVar5 + 4;
        param_2 = param_2 + 4;
      } while (iVar8 != 0);
      param_1 = param_1 + lVar1;
      param_2 = pfVar6;
    }
    uVar7 = param_3 & 3;
    if (uVar7 != 0) {
      uVar10 = (ulong)(uVar7 - 1);
      uVar9 = uVar10 + 1 & 0x1fffffff8;
      pfVar5 = param_1;
      pfVar6 = param_2;
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else if ((param_1 + uVar10 < param_2) || (param_2 + uVar10 < param_1)) {
        uVar7 = uVar7 - (int)uVar9;
        pfVar5 = param_1 + uVar9;
        pfVar6 = param_2 + uVar9;
        uVar11 = (ulong)((param_3 & 3) - 1) + 1 & 0xfffffffffffffff8;
        param_2 = param_2 + 4;
        pfVar12 = param_1 + 4;
        do {
          auVar14._0_8_ = CONCAT44(fVar13 * pfVar12[-3],fVar13 * pfVar12[-4]);
          auVar14._8_4_ = fVar13 * pfVar12[-2];
          auVar14._12_4_ = fVar13 * pfVar12[-1];
          fVar17 = fVar13 * (float)*(undefined8 *)pfVar12;
          fVar18 = fVar13 * (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
          fVar19 = fVar13 * (float)*(undefined8 *)(pfVar12 + 2);
          fVar20 = fVar13 * (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
          *(undefined8 *)(param_2 + -4) = auVar14._0_8_;
          auVar15 = NEON_ext(auVar14,auVar14,8,1);
          *(long *)(param_2 + -2) = auVar15._0_8_;
          *(ulong *)param_2 = CONCAT44(fVar18,fVar17);
          auVar2._4_4_ = fVar18;
          auVar2._0_4_ = fVar17;
          auVar2._8_4_ = fVar19;
          auVar2._12_4_ = fVar20;
          auVar3._4_4_ = fVar18;
          auVar3._0_4_ = fVar17;
          auVar3._8_4_ = fVar19;
          auVar3._12_4_ = fVar20;
          auVar15 = NEON_ext(auVar2,auVar3,8,1);
          *(long *)(param_2 + 2) = auVar15._0_8_;
          uVar11 = uVar11 - 8;
          param_2 = param_2 + 8;
          pfVar12 = pfVar12 + 8;
        } while (uVar11 != 0);
      }
      else {
        uVar9 = 0;
      }
      if (uVar10 + 1 != uVar9) {
        do {
          *pfVar6 = fVar13 * *pfVar5;
          uVar7 = uVar7 - 1;
          pfVar5 = pfVar5 + 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar7 != 0);
      }
    }
  }
  return;
}




void FUN_10063a040(long param_1,float *param_2,int param_3,float *param_4,uint param_5,int param_6,
                  int param_7)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  
  if (param_7 == 0) {
    if (0 < param_3) {
      iVar3 = 0;
      do {
        if (0 < param_6) {
          uVar6 = 0;
          pfVar4 = param_4;
          pfVar5 = param_2;
          do {
            fVar8 = 0.0;
            if (0 < (int)param_5) {
              lVar7 = 0;
              pfVar2 = pfVar4;
              do {
                fVar8 = fVar8 + *(float *)(param_1 + lVar7 * 4) * *pfVar2;
                lVar7 = lVar7 + 1;
                pfVar2 = pfVar2 + 1;
              } while (param_5 != (uint)lVar7);
            }
            *pfVar5 = *pfVar5 + fVar8;
            bVar1 = uVar6 != param_6 - 1U;
            uVar6 = uVar6 + 1;
            pfVar4 = pfVar4 + 0x20;
            pfVar5 = pfVar5 + 1;
          } while (bVar1);
          param_2 = param_2 + (ulong)(param_6 - 1U) + 1;
        }
        param_1 = param_1 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
        bVar1 = iVar3 != param_3 + -1;
        iVar3 = iVar3 + 1;
      } while (bVar1);
    }
  }
  else if (0 < param_3) {
    iVar3 = 0;
    do {
      if (0 < param_6) {
        uVar6 = 0;
        pfVar4 = param_4;
        pfVar5 = param_2;
        do {
          fVar8 = 0.0;
          if (0 < (int)param_5) {
            lVar7 = 0;
            pfVar2 = pfVar4;
            do {
              fVar8 = fVar8 + *(float *)(param_1 + lVar7 * 4) * *pfVar2;
              lVar7 = lVar7 + 1;
              pfVar2 = pfVar2 + 1;
            } while (param_5 != (uint)lVar7);
          }
          *pfVar5 = fVar8;
          bVar1 = uVar6 != param_6 - 1U;
          uVar6 = uVar6 + 1;
          pfVar4 = pfVar4 + 0x20;
          pfVar5 = pfVar5 + 1;
        } while (bVar1);
        param_2 = param_2 + (ulong)(param_6 - 1U) + 1;
      }
      param_1 = param_1 + (-(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2);
      bVar1 = iVar3 != param_3 + -1;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_10063a160(float param_1,undefined2 *param_2,float *param_3,uint param_4,uint param_5,
                  uint param_6)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 *puVar7;
  ulong uVar8;
  float *pfVar9;
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  puVar7 = param_2;
  pfVar9 = param_3;
  if (param_4 >> 2 != 0) {
    uVar2 = param_5 << 2;
    uVar8 = (ulong)((param_4 >> 2) - 1);
    puVar7 = (undefined2 *)((long)param_2 + (uVar8 * 2 + 2) * (long)(int)uVar2);
    uVar3 = param_6 << 2;
    pfVar9 = (float *)((long)param_3 + (uVar8 * 4 + 4) * (long)(int)uVar3);
    uVar4 = 0x8000;
    uVar5 = 0x7fff;
    iVar6 = -(param_4 >> 2);
    do {
      iVar12 = (int)(*param_3 * param_1);
      iVar13 = (int)(param_3[(int)param_6] * param_1);
      iVar14 = (int)(param_3[(int)(param_6 * 2)] * param_1);
      iVar11 = (int)(param_3[(int)(param_6 * 3)] * param_1);
      uVar10 = uVar5;
      if (iVar12 < 0x8000) {
        uVar10 = (short)iVar12;
      }
      uVar1 = uVar4;
      if (-0x8001 < iVar12) {
        uVar1 = uVar10;
      }
      *param_2 = uVar1;
      uVar10 = uVar5;
      if (iVar13 < 0x8000) {
        uVar10 = (short)iVar13;
      }
      uVar1 = uVar4;
      if (-0x8001 < iVar13) {
        uVar1 = uVar10;
      }
      param_2[(int)param_5] = uVar1;
      uVar10 = uVar5;
      if (iVar14 < 0x8000) {
        uVar10 = (short)iVar14;
      }
      uVar1 = uVar4;
      if (-0x8001 < iVar14) {
        uVar1 = uVar10;
      }
      param_2[(int)(param_5 * 2)] = uVar1;
      if (iVar11 < -0x8000) {
        uVar10 = 0x8000;
      }
      else if (iVar11 < 0x8000) {
        uVar10 = (undefined2)iVar11;
      }
      else {
        uVar10 = 0x7fff;
      }
      param_2[(int)(param_5 * 3)] = uVar10;
      param_3 = (float *)((long)param_3 +
                         (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
      param_2 = (undefined2 *)
                ((long)param_2 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1))
      ;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  if ((param_4 & 3) != 0) {
    iVar6 = -(param_4 & 3);
    do {
      iVar11 = (int)(*pfVar9 * param_1);
      if (iVar11 < -0x8000) {
        uVar4 = 0x8000;
      }
      else if (iVar11 < 0x8000) {
        uVar4 = (undefined2)iVar11;
      }
      else {
        uVar4 = 0x7fff;
      }
      *puVar7 = uVar4;
      pfVar9 = (float *)((long)pfVar9 +
                        (-(ulong)(param_6 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_6 << 2));
      puVar7 = (undefined2 *)
               ((long)puVar7 +
               (-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1));
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  return;
}




undefined8
FUN_10063a2fc(float param_1,float *param_2,float *param_3,int param_4,int param_5,ulong param_6,
             ulong param_7,ulong param_8,int param_9)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  float *pfVar13;
  undefined1 *puVar14;
  float *pfVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  
  uVar9 = (uint)param_8;
  uVar8 = (uint)param_7;
  uVar7 = (uint)param_6;
  if (param_4 == 5) {
    switch(param_5) {
    case 1:
      param_1 = param_1 * 0.0078125;
      pfVar15 = param_2;
      if ((param_6 >> 3 & 0x1fffffff) != 0) {
        uVar12 = (ulong)(((uint)(param_6 >> 3) & 0x1fffffff) - 1);
        uVar3 = uVar8 * 8;
        pfVar15 = (float *)((long)param_2 + (uVar12 * 4 + 4) * (long)(int)uVar3);
        iVar10 = -(uVar7 >> 3);
        pfVar13 = param_3;
        do {
          *param_2 = param_1 * (float)(int)(short)(char)*(byte *)pfVar13;
          param_2[(int)uVar8] =
               param_1 * (float)(int)(short)(char)*(byte *)((long)(int)uVar9 + (long)pfVar13);
          param_2[(int)(uVar8 * 2)] =
               param_1 * (float)(int)(short)(char)*(byte *)((long)(int)(uVar9 * 2) + (long)pfVar13);
          param_2[(int)(uVar8 * 3)] =
               param_1 * (float)(int)(short)(char)*(byte *)((long)(int)(uVar9 * 3) + (long)pfVar13);
          param_2[(int)(uVar8 * 4)] =
               param_1 * (float)(int)(short)(char)*(byte *)((long)(int)(uVar9 * 4) + (long)pfVar13);
          param_2[(int)(uVar8 * 5)] =
               param_1 * (float)(int)(short)(char)*(byte *)((long)(int)(uVar9 * 5) + (long)pfVar13);
          param_2[(int)(uVar8 * 6)] =
               param_1 * (float)(int)(short)(char)*(byte *)((long)(int)(uVar9 * 6) + (long)pfVar13);
          param_2[(int)(uVar8 * 7)] =
               param_1 * (float)(int)(short)(char)*(byte *)((long)(int)(uVar9 * 7) + (long)pfVar13);
          pfVar13 = (float *)((long)pfVar13 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 |
                             (param_8 & 0xffffffff) << 3));
          param_2 = (float *)((long)param_2 +
                             (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
        param_3 = (float *)((long)param_3 + (uVar12 + 1) * (long)(int)(uVar9 * 8));
      }
      if ((param_6 & 7) == 0) {
        uVar11 = 0;
      }
      else {
        iVar10 = -(uVar7 & 7);
        do {
          *pfVar15 = param_1 * (float)(int)(short)(char)*(byte *)param_3;
          param_3 = (float *)((long)param_3 + (long)(int)uVar9);
          pfVar15 = (float *)((long)pfVar15 +
                             (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                             (param_7 & 0xffffffff) << 2));
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
        uVar11 = 0;
      }
      break;
    case 2:
      param_1 = param_1 * 3.0517578e-05;
      pfVar15 = param_2;
      pfVar13 = param_3;
      if (uVar7 >> 3 != 0) {
        uVar3 = uVar9 * 8;
        uVar12 = (ulong)((uVar7 >> 3) - 1);
        uVar4 = uVar8 * 8;
        pfVar13 = (float *)((long)param_3 + (uVar12 * 2 + 2) * (long)(int)uVar3);
        pfVar15 = (float *)((long)param_2 + (uVar12 * 4 + 4) * (long)(int)uVar4);
        iVar10 = -(uVar7 >> 3);
        do {
          *param_2 = param_1 * (float)(int)*(short *)param_3;
          param_2[(int)uVar8] =
               param_1 * (float)(int)*(short *)((long)param_3 + (long)(int)uVar9 * 2);
          param_2[(int)(uVar8 * 2)] =
               param_1 * (float)(int)*(short *)((long)param_3 + (long)(int)(uVar9 * 2) * 2);
          param_2[(int)(uVar8 * 3)] =
               param_1 * (float)(int)*(short *)((long)param_3 + (long)(int)(uVar9 * 3) * 2);
          param_2[(int)(uVar8 * 4)] =
               param_1 * (float)(int)*(short *)((long)param_3 + (long)(int)(uVar9 * 4) * 2);
          param_2[(int)(uVar8 * 5)] =
               param_1 * (float)(int)*(short *)((long)param_3 + (long)(int)(uVar9 * 5) * 2);
          param_2[(int)(uVar8 * 6)] =
               param_1 * (float)(int)*(short *)((long)param_3 + (long)(int)(uVar9 * 6) * 2);
          param_2[(int)(uVar8 * 7)] =
               param_1 * (float)(int)*(short *)((long)param_3 + (long)(int)(uVar9 * 7) * 2);
          param_2 = (float *)((long)param_2 +
                             (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
          param_3 = (float *)((long)param_3 +
                             (-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1));
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
      }
      if ((param_6 & 7) == 0) {
        uVar11 = 0;
      }
      else {
        iVar10 = -(uVar7 & 7);
        do {
          *pfVar15 = param_1 * (float)(int)*(short *)pfVar13;
          pfVar15 = (float *)((long)pfVar15 +
                             (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                             (param_7 & 0xffffffff) << 2));
          pfVar13 = (float *)((long)pfVar13 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 |
                             (param_8 & 0xffffffff) << 1));
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
        uVar11 = 0;
      }
      break;
    case 3:
      if (uVar7 == 0) {
        uVar11 = 0;
      }
      else {
        do {
          *param_2 = param_1 * 1.1920929e-07 *
                     (float)((int)((uint)*(byte *)param_3 << 8 |
                                   (uint)*(byte *)((long)(int)uVar9 + (long)param_3) << 0x10 |
                                  (uint)*(byte *)((long)(int)(uVar9 << 1) + (long)param_3) << 0x18)
                            >> 8);
          param_2 = (float *)((long)param_2 +
                             (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                             (param_7 & 0xffffffff) << 2));
          param_3 = (float *)((long)param_3 + (long)(int)uVar9 + (long)(int)uVar9 * 2);
          uVar7 = (int)param_6 - 1;
          param_6 = (ulong)uVar7;
        } while (uVar7 != 0);
        uVar11 = 0;
      }
      break;
    case 4:
      param_1 = param_1 * 4.656613e-10;
      pfVar15 = param_2;
      pfVar13 = param_3;
      if (uVar7 >> 2 != 0) {
        uVar3 = uVar9 << 2;
        lVar1 = (ulong)((uVar7 >> 2) - 1) * 4 + 4;
        pfVar13 = (float *)((long)param_3 + lVar1 * (int)uVar3);
        uVar4 = uVar8 << 2;
        pfVar15 = (float *)((long)param_2 + lVar1 * (int)uVar4);
        iVar10 = -(uVar7 >> 2);
        do {
          *param_2 = param_1 * (float)(int)*param_3;
          param_2[(int)uVar8] = param_1 * (float)(int)param_3[(int)uVar9];
          param_2[(int)(uVar8 * 2)] = param_1 * (float)(int)param_3[(int)(uVar9 * 2)];
          param_2[(int)(uVar8 * 3)] = param_1 * (float)(int)param_3[(int)(uVar9 * 3)];
          param_2 = (float *)((long)param_2 +
                             (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
          iVar10 = iVar10 + 1;
          param_3 = (float *)((long)param_3 +
                             (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
        } while (iVar10 != 0);
      }
      if ((param_6 & 3) == 0) {
        uVar11 = 0;
      }
      else {
        iVar10 = -(uVar7 & 3);
        do {
          *pfVar15 = param_1 * (float)(int)*pfVar13;
          pfVar15 = (float *)((long)pfVar15 +
                             (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                             (param_7 & 0xffffffff) << 2));
          iVar10 = iVar10 + 1;
          pfVar13 = (float *)((long)pfVar13 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                             (param_8 & 0xffffffff) << 2));
        } while (iVar10 != 0);
        uVar11 = 0;
      }
      break;
    case 5:
      if (param_9 == 0) {
        pfVar15 = param_2;
        pfVar13 = param_3;
        if (uVar7 >> 2 != 0) {
          lVar1 = (ulong)((uVar7 >> 2) - 1) * 4 + 4;
          uVar3 = uVar9 << 2;
          pfVar13 = (float *)((long)param_3 + lVar1 * (int)uVar3);
          uVar4 = uVar8 << 2;
          pfVar15 = (float *)((long)param_2 + lVar1 * (int)uVar4);
          param_2 = param_2 + 2;
          param_3 = param_3 + 2;
          iVar10 = -(uVar7 >> 2);
          do {
            param_2[-2] = param_3[-2] * param_1;
            param_2[-1] = param_3[-1] * param_1;
            *param_2 = *param_3 * param_1;
            param_2[1] = param_3[1] * param_1;
            param_2 = (float *)((long)param_2 +
                               (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
            iVar10 = iVar10 + 1;
            param_3 = (float *)((long)param_3 +
                               (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
          } while (iVar10 != 0);
        }
        if ((param_6 & 3) == 0) {
          uVar11 = 0;
        }
        else {
          iVar10 = -(uVar7 & 3);
          uVar11 = 0;
          do {
            *pfVar15 = *pfVar13 * param_1;
            pfVar15 = (float *)((long)pfVar15 +
                               (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                               (param_7 & 0xffffffff) << 2));
            iVar10 = iVar10 + 1;
            pfVar13 = (float *)((long)pfVar13 +
                               (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                               (param_8 & 0xffffffff) << 2));
          } while (iVar10 != 0);
        }
      }
      else if (uVar7 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          fVar21 = *param_3 * param_1;
          fVar22 = -1.0;
          if ((-1.0 <= fVar21) && (fVar22 = 1.0, fVar21 <= 1.0)) {
            fVar22 = fVar21;
          }
          *param_2 = fVar22;
          param_2 = (float *)((long)param_2 +
                             (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                             (param_7 & 0xffffffff) << 2));
          uVar7 = (int)param_6 - 1;
          param_6 = (ulong)uVar7;
          param_3 = (float *)((long)param_3 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                             (param_8 & 0xffffffff) << 2));
        } while (uVar7 != 0);
      }
      break;
    default:
      uVar11 = 0;
    }
  }
  else if (param_5 == 5) {
    switch(param_4) {
    case 1:
      param_1 = param_1 * 128.0;
      pfVar15 = param_3;
      if (uVar7 >> 2 != 0) {
        uVar12 = (ulong)((uVar7 >> 2) - 1);
        uVar3 = uVar9 << 2;
        pfVar15 = (float *)((long)param_3 + (uVar12 * 4 + 4) * (long)(int)uVar3);
        uVar5 = 0x80;
        uVar6 = 0x7f;
        iVar10 = -(uVar7 >> 2);
        pfVar13 = param_2;
        do {
          iVar18 = (int)(param_1 * *param_3);
          iVar19 = (int)(param_1 * param_3[(int)uVar9]);
          iVar20 = (int)(param_1 * param_3[(int)(uVar9 * 2)]);
          iVar17 = (int)(param_1 * param_3[(int)(uVar9 * 3)]);
          uVar16 = uVar6;
          if (iVar18 < 0x80) {
            uVar16 = (char)iVar18;
          }
          uVar2 = uVar5;
          if (-0x81 < iVar18) {
            uVar2 = uVar16;
          }
          *(undefined1 *)pfVar13 = uVar2;
          uVar16 = uVar6;
          if (iVar19 < 0x80) {
            uVar16 = (char)iVar19;
          }
          uVar2 = uVar5;
          if (-0x81 < iVar19) {
            uVar2 = uVar16;
          }
          *(undefined1 *)((long)(int)uVar8 + (long)pfVar13) = uVar2;
          uVar16 = uVar6;
          if (iVar20 < 0x80) {
            uVar16 = (char)iVar20;
          }
          uVar2 = uVar5;
          if (-0x81 < iVar20) {
            uVar2 = uVar16;
          }
          *(undefined1 *)((long)(int)(uVar8 * 2) + (long)pfVar13) = uVar2;
          if (iVar17 < -0x80) {
            uVar16 = 0x80;
          }
          else if (iVar17 < 0x80) {
            uVar16 = (undefined1)iVar17;
          }
          else {
            uVar16 = 0x7f;
          }
          *(undefined1 *)((long)(int)(uVar8 * 3) + (long)pfVar13) = uVar16;
          pfVar13 = (float *)((long)pfVar13 +
                             (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                             (param_7 & 0xffffffff) << 2));
          iVar10 = iVar10 + 1;
          param_3 = (float *)((long)param_3 +
                             (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
        } while (iVar10 != 0);
        param_2 = (float *)((long)param_2 + (uVar12 + 1) * (long)(int)(uVar8 << 2));
      }
      if ((param_6 & 3) == 0) {
        uVar11 = 0;
      }
      else {
        iVar10 = -(uVar7 & 3);
        do {
          iVar17 = (int)(param_1 * *pfVar15);
          if (iVar17 < -0x80) {
            uVar5 = 0x80;
          }
          else if (iVar17 < 0x80) {
            uVar5 = (undefined1)iVar17;
          }
          else {
            uVar5 = 0x7f;
          }
          uVar11 = 0;
          *(undefined1 *)param_2 = uVar5;
          param_2 = (float *)((long)param_2 + (long)(int)uVar8);
          iVar10 = iVar10 + 1;
          pfVar15 = (float *)((long)pfVar15 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                             (param_8 & 0xffffffff) << 2));
        } while (iVar10 != 0);
      }
      break;
    case 2:
      (*DAT_101d91918)(param_1 * 32768.0,param_2,param_3,param_6,param_7,param_8);
      uVar11 = 0;
      break;
    case 3:
      if (uVar7 == 0) {
        uVar11 = 0;
      }
      else {
        puVar14 = (undefined1 *)((long)param_2 + 2);
        do {
          iVar10 = (int)(param_1 * 8388608.0 * *param_3);
          if (iVar10 < -0x800000) {
            iVar17 = -0x800000;
          }
          else {
            iVar17 = 0x7fffff;
            if (iVar10 < 0x800000) {
              iVar17 = iVar10;
            }
          }
          uVar11 = 0;
          puVar14[-2] = (char)iVar17;
          puVar14[-1] = (char)((uint)iVar17 >> 8);
          *puVar14 = (char)((uint)iVar17 >> 0x10);
          uVar7 = (int)param_6 - 1;
          param_6 = (ulong)uVar7;
          puVar14 = puVar14 + (long)(int)uVar8 + (long)(int)uVar8 * 2;
          param_3 = (float *)((long)param_3 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                             (param_8 & 0xffffffff) << 2));
        } while (uVar7 != 0);
      }
      break;
    case 4:
      if (uVar7 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          fVar22 = param_1 * 2.1474836e+09 * *param_3;
          if (fVar22 <= -2.1474836e+09) {
            fVar22 = -1.4013e-45;
          }
          else if (2.1474836e+09 <= fVar22) {
            fVar22 = NAN;
          }
          else {
            fVar22 = (float)(int)fVar22;
          }
          *param_2 = fVar22;
          uVar7 = (int)param_6 - 1;
          param_6 = (ulong)uVar7;
          param_2 = (float *)((long)param_2 +
                             (-(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 |
                             (param_7 & 0xffffffff) << 2));
          param_3 = (float *)((long)param_3 +
                             (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 |
                             (param_8 & 0xffffffff) << 2));
        } while (uVar7 != 0);
      }
      break;
    default:
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 7;
  }
  return uVar11;
}




undefined8 FUN_10063ac98(long param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_3 == 8) && (param_4 == 1)) {
    if (0 < param_2) {
      puVar2 = (undefined4 *)(param_1 + 0x1c);
      do {
        uVar1 = puVar2[-3];
        *(undefined8 *)(puVar2 + -3) = *(undefined8 *)(puVar2 + -1);
        puVar2[-1] = uVar1;
        *puVar2 = puVar2[-2];
        param_2 = param_2 + -1;
        puVar2 = puVar2 + 8;
      } while (param_2 != 0);
    }
  }
  else if ((param_4 == 5) && (((param_3 == 6 || (param_3 == 8)) && (0 < param_2)))) {
    puVar2 = (undefined4 *)(param_1 + 0x14);
    do {
      uVar1 = puVar2[-3];
      *(undefined8 *)(puVar2 + -3) = *(undefined8 *)(puVar2 + -1);
      puVar2[-1] = uVar1;
      *puVar2 = puVar2[-2];
      puVar2 = (undefined4 *)
               ((long)puVar2 +
               (-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2));
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}




void FUN_10063ad24(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  iVar9 = (int)param_2 >> 2;
  if (iVar9 != 0) {
    uVar8 = iVar9 - 1;
    uVar12 = (ulong)(uint)*param_4;
    uVar13 = (ulong)*(uint *)((long)param_4 + 4);
    auVar14 = NEON_fmov(0x3f800000,4);
    pfVar11 = param_1;
    uVar10 = *param_4;
    do {
      cVar2 = *(char *)(param_3 + uVar13);
      cVar3 = *(char *)(param_3 + (ulong)((int)uVar13 + 1));
      uVar10 = uVar10 + *param_5;
      *param_4 = uVar10;
      cVar4 = *(char *)(param_3 + (uVar10 >> 0x20));
      cVar5 = *(char *)(param_3 + (ulong)((int)(uVar10 >> 0x20) + 1));
      uVar13 = *param_5 + uVar10;
      *param_4 = uVar13;
      cVar6 = *(char *)(param_3 + (uVar13 >> 0x20));
      cVar7 = *(char *)(param_3 + (ulong)((int)(uVar13 >> 0x20) + 1));
      uVar1 = *param_5 + uVar13;
      *param_4 = uVar1;
      auVar16._4_4_ = (int)uVar10;
      auVar16._0_4_ = (int)uVar12;
      auVar16._8_4_ = (int)uVar13;
      auVar16._12_4_ = (int)uVar1;
      auVar16 = NEON_ucvtf(auVar16,4);
      fVar15 = auVar16._0_4_ * 2.3283064e-10;
      fVar18 = auVar16._4_4_ * 2.3283064e-10;
      fVar19 = auVar16._8_4_ * 2.3283064e-10;
      fVar20 = auVar16._12_4_ * 2.3283064e-10;
      auVar22._0_4_ = (int)(short)cVar2;
      auVar22._4_4_ = (int)(short)cVar4;
      auVar22._8_4_ = (int)(short)cVar6;
      auVar22._12_4_ = (int)(short)*(char *)(param_3 + (uVar1 >> 0x20));
      auVar16 = NEON_scvtf(auVar22,4);
      auVar21._0_4_ = (int)(short)cVar3;
      auVar21._4_4_ = (int)(short)cVar5;
      auVar21._8_4_ = (int)(short)cVar7;
      auVar21._12_4_ = (int)(short)*(char *)(param_3 + (ulong)((int)(uVar1 >> 0x20) + 1));
      auVar22 = NEON_scvtf(auVar21,4);
      auVar17._0_8_ =
           CONCAT44((auVar14._4_4_ - fVar18) * auVar16._4_4_ * 0.0078125 +
                    fVar18 * auVar22._4_4_ * 0.0078125,
                    (auVar14._0_4_ - fVar15) * auVar16._0_4_ * 0.0078125 +
                    fVar15 * auVar22._0_4_ * 0.0078125);
      auVar17._8_4_ =
           (auVar14._8_4_ - fVar19) * auVar16._8_4_ * 0.0078125 + fVar19 * auVar22._8_4_ * 0.0078125
      ;
      auVar17._12_4_ =
           (auVar14._12_4_ - fVar20) * auVar16._12_4_ * 0.0078125 +
           fVar20 * auVar22._12_4_ * 0.0078125;
      uVar12 = *param_5 + uVar1;
      *param_4 = uVar12;
      *(undefined8 *)pfVar11 = auVar17._0_8_;
      auVar16 = NEON_ext(auVar17,auVar17,8,1);
      *(long *)(pfVar11 + 2) = auVar16._0_8_;
      iVar9 = iVar9 + -1;
      pfVar11 = pfVar11 + 4;
      uVar13 = uVar12 >> 0x20;
      uVar10 = uVar12;
    } while (iVar9 != 0);
    param_1 = param_1 + (ulong)uVar8 * 4 + 4;
  }
  if ((param_2 & 3) != 0) {
    uVar12 = (ulong)*(uint *)((long)param_4 + 4);
    uVar10 = *param_4;
    iVar9 = -(param_2 & 3);
    uVar13 = (ulong)(uint)*param_4;
    do {
      fVar15 = (float)(uVar13 & 0xffffffff) * 2.3283064e-10;
      *param_1 = (1.0 - fVar15) * (float)(int)(short)*(char *)(param_3 + uVar12) * 0.0078125 +
                 fVar15 * (float)(int)(short)*(char *)(param_3 + (ulong)((int)uVar12 + 1)) *
                          0.0078125;
      uVar10 = uVar10 + *param_5;
      *param_4 = uVar10;
      uVar12 = uVar10 >> 0x20;
      iVar9 = iVar9 + 1;
      param_1 = param_1 + 1;
      uVar13 = uVar10;
    } while (iVar9 != 0);
  }
  return;
}




void FUN_10063aee4(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  char cVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  iVar13 = (int)param_2 >> 2;
  if (iVar13 != 0) {
    uVar10 = iVar13 - 1;
    uVar17 = (ulong)*(uint *)((long)param_4 + 4);
    uVar15 = *param_4;
    pfVar14 = param_1;
    uVar16 = (ulong)(uint)*param_4;
    do {
      uVar9 = (int)uVar17 * 2;
      cVar21 = *(char *)(param_3 + (ulong)uVar9);
      cVar25 = *(char *)(param_3 + (ulong)(uVar9 + 2));
      cVar1 = *(char *)(param_3 + (ulong)((int)uVar17 << 1 | 1));
      cVar2 = *(char *)(param_3 + (ulong)(uVar9 + 3));
      uVar15 = uVar15 + *param_5;
      *param_4 = uVar15;
      uVar9 = (uint)(uVar15 >> 0x1f) & 0xfffffffe;
      cVar3 = *(char *)(param_3 + (ulong)uVar9);
      cVar4 = *(char *)(param_3 + (ulong)(uVar9 + 2));
      cVar5 = *(char *)(param_3 + (uVar15 >> 0x1f & 0xfffffffe | 1));
      fVar18 = (float)(uVar16 & 0xffffffff) * 2.3283064e-10;
      cVar6 = *(char *)(param_3 + (ulong)(uVar9 + 3));
      fVar19 = (float)(uVar15 & 0xffffffff) * 2.3283064e-10;
      uVar15 = *param_5 + uVar15;
      *param_4 = uVar15;
      uVar9 = (uint)(uVar15 >> 0x1f) & 0xfffffffe;
      cVar7 = *(char *)(param_3 + (ulong)uVar9);
      cVar8 = *(char *)(param_3 + (ulong)(uVar9 + 2));
      auVar26._0_4_ = (int)(short)cVar21;
      auVar26._4_4_ = (int)(short)cVar1;
      auVar26._8_4_ = (int)(short)cVar3;
      auVar26._12_4_ = (int)(short)cVar5;
      cVar21 = *(char *)(param_3 + (uVar15 >> 0x1f & 0xfffffffe | 1));
      cVar1 = *(char *)(param_3 + (ulong)(uVar9 + 3));
      auVar24._0_4_ = (int)(short)cVar25;
      auVar24._4_4_ = (int)(short)cVar2;
      auVar24._8_4_ = (int)(short)cVar4;
      auVar24._12_4_ = (int)(short)cVar6;
      fVar11 = (float)(uVar15 & 0xffffffff) * 2.3283064e-10;
      uVar15 = *param_5 + uVar15;
      auVar27 = NEON_scvtf(auVar26,4);
      *param_4 = uVar15;
      uVar9 = (uint)(uVar15 >> 0x1f) & 0xfffffffe;
      auVar22 = NEON_scvtf(auVar24,4);
      fVar12 = (float)(uVar15 & 0xffffffff) * 2.3283064e-10;
      auVar20._0_8_ =
           CONCAT44((1.0 - fVar18) * auVar27._4_4_ * 0.0078125 + fVar18 * auVar22._4_4_ * 0.0078125,
                    (1.0 - fVar18) * auVar27._0_4_ * 0.0078125 + fVar18 * auVar22._0_4_ * 0.0078125)
      ;
      auVar20._8_4_ =
           (1.0 - fVar19) * auVar27._8_4_ * 0.0078125 + fVar19 * auVar22._8_4_ * 0.0078125;
      auVar20._12_4_ =
           (1.0 - fVar19) * auVar27._12_4_ * 0.0078125 + fVar19 * auVar22._12_4_ * 0.0078125;
      auVar22._0_4_ = (int)(short)cVar7;
      auVar22._4_4_ = (int)(short)cVar21;
      auVar22._8_4_ = (int)(short)*(char *)(param_3 + (ulong)uVar9);
      auVar22._12_4_ = (int)(short)*(char *)(param_3 + (uVar15 >> 0x1f & 0xfffffffe | 1));
      auVar23._0_4_ = (int)(short)cVar8;
      auVar23._4_4_ = (int)(short)cVar1;
      auVar23._8_4_ = (int)(short)*(char *)(param_3 + (ulong)(uVar9 + 2));
      auVar23._12_4_ = (int)(short)*(char *)(param_3 + (ulong)(uVar9 + 3));
      auVar22 = NEON_scvtf(auVar22,4);
      auVar24 = NEON_scvtf(auVar23,4);
      auVar27._0_8_ =
           CONCAT44((1.0 - fVar11) * auVar22._4_4_ * 0.0078125 + fVar11 * auVar24._4_4_ * 0.0078125,
                    (1.0 - fVar11) * auVar22._0_4_ * 0.0078125 + fVar11 * auVar24._0_4_ * 0.0078125)
      ;
      auVar27._8_4_ =
           (1.0 - fVar12) * auVar22._8_4_ * 0.0078125 + fVar12 * auVar24._8_4_ * 0.0078125;
      auVar27._12_4_ =
           (1.0 - fVar12) * auVar22._12_4_ * 0.0078125 + fVar12 * auVar24._12_4_ * 0.0078125;
      uVar15 = *param_5 + uVar15;
      *param_4 = uVar15;
      *(undefined8 *)pfVar14 = auVar20._0_8_;
      auVar20 = NEON_ext(auVar20,auVar20,8,1);
      *(long *)(pfVar14 + 2) = auVar20._0_8_;
      *(undefined8 *)(pfVar14 + 4) = auVar27._0_8_;
      auVar20 = NEON_ext(auVar27,auVar27,8,1);
      *(long *)(pfVar14 + 6) = auVar20._0_8_;
      iVar13 = iVar13 + -1;
      uVar17 = uVar15 >> 0x20;
      pfVar14 = pfVar14 + 8;
      uVar16 = uVar15;
    } while (iVar13 != 0);
    param_1 = param_1 + (ulong)uVar10 * 8 + 8;
  }
  if ((param_2 & 3) != 0) {
    uVar17 = (ulong)*(uint *)((long)param_4 + 4);
    uVar15 = *param_4;
    iVar13 = -(param_2 & 3);
    uVar16 = (ulong)(uint)*param_4;
    do {
      fVar19 = (float)(uVar16 & 0xffffffff) * 2.3283064e-10;
      uVar10 = (int)uVar17 * 2;
      cVar21 = *(char *)(param_3 + (ulong)((int)uVar17 << 1 | 1));
      cVar25 = *(char *)(param_3 + (ulong)(uVar10 + 3));
      *param_1 = (1.0 - fVar19) * (float)(int)(short)*(char *)(param_3 + (ulong)uVar10) * 0.0078125
                 + fVar19 * (float)(int)(short)*(char *)(param_3 + (ulong)(uVar10 + 2)) * 0.0078125;
      param_1[1] = (1.0 - fVar19) * (float)(int)(short)cVar21 * 0.0078125 +
                   fVar19 * (float)(int)(short)cVar25 * 0.0078125;
      uVar15 = uVar15 + *param_5;
      *param_4 = uVar15;
      uVar17 = uVar15 >> 0x20;
      iVar13 = iVar13 + 1;
      param_1 = param_1 + 2;
      uVar16 = uVar15;
    } while (iVar13 != 0);
  }
  return;
}




void FUN_10063b1ec(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  short sVar9;
  short sVar11;
  short sVar12;
  undefined1 auVar10 [16];
  short sVar13;
  short sVar15;
  short sVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  
  iVar3 = (int)param_2 >> 2;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
    uVar6 = (ulong)(uint)*param_4;
    uVar7 = (ulong)*(uint *)((long)param_4 + 4);
    auVar8 = NEON_fmov(0x3f800000,4);
    pfVar5 = param_1;
    uVar4 = *param_4;
    do {
      uVar4 = uVar4 + *param_5;
      sVar9 = *(short *)(param_3 + uVar7 * 2);
      sVar13 = *(short *)(param_3 + (ulong)((int)uVar7 + 1) * 2);
      *param_4 = uVar4;
      uVar7 = *param_5 + uVar4;
      sVar11 = *(short *)(param_3 + (uVar4 >> 0x20) * 2);
      sVar15 = *(short *)(param_3 + (ulong)((int)(uVar4 >> 0x20) + 1) * 2);
      *param_4 = uVar7;
      uVar1 = *param_5 + uVar7;
      sVar12 = *(short *)(param_3 + (uVar7 >> 0x20) * 2);
      sVar16 = *(short *)(param_3 + (ulong)((int)(uVar7 >> 0x20) + 1) * 2);
      *param_4 = uVar1;
      auVar18._4_4_ = (int)uVar4;
      auVar18._0_4_ = (int)uVar6;
      auVar18._8_4_ = (int)uVar7;
      auVar18._12_4_ = (int)uVar1;
      auVar19 = NEON_ucvtf(auVar18,4);
      fVar17 = auVar19._0_4_ * 2.3283064e-10;
      fVar20 = auVar19._4_4_ * 2.3283064e-10;
      fVar21 = auVar19._8_4_ * 2.3283064e-10;
      fVar22 = auVar19._12_4_ * 2.3283064e-10;
      auVar19._0_4_ = (int)sVar9;
      auVar19._4_4_ = (int)sVar11;
      auVar19._8_4_ = (int)sVar12;
      auVar19._12_4_ = (int)*(short *)(param_3 + (uVar1 >> 0x20) * 2);
      auVar19 = NEON_scvtf(auVar19,4);
      auVar14._0_4_ = (int)sVar13;
      auVar14._4_4_ = (int)sVar15;
      auVar14._8_4_ = (int)sVar16;
      auVar14._12_4_ = (int)*(short *)(param_3 + (ulong)((int)(uVar1 >> 0x20) + 1) * 2);
      auVar14 = NEON_scvtf(auVar14,4);
      auVar10._0_8_ =
           CONCAT44((auVar8._4_4_ - fVar20) * auVar19._4_4_ * 3.0517578e-05 +
                    fVar20 * auVar14._4_4_ * 3.0517578e-05,
                    (auVar8._0_4_ - fVar17) * auVar19._0_4_ * 3.0517578e-05 +
                    fVar17 * auVar14._0_4_ * 3.0517578e-05);
      auVar10._8_4_ =
           (auVar8._8_4_ - fVar21) * auVar19._8_4_ * 3.0517578e-05 +
           fVar21 * auVar14._8_4_ * 3.0517578e-05;
      auVar10._12_4_ =
           (auVar8._12_4_ - fVar22) * auVar19._12_4_ * 3.0517578e-05 +
           fVar22 * auVar14._12_4_ * 3.0517578e-05;
      uVar6 = *param_5 + uVar1;
      *param_4 = uVar6;
      *(undefined8 *)pfVar5 = auVar10._0_8_;
      auVar19 = NEON_ext(auVar10,auVar10,8,1);
      *(long *)(pfVar5 + 2) = auVar19._0_8_;
      iVar3 = iVar3 + -1;
      pfVar5 = pfVar5 + 4;
      uVar7 = uVar6 >> 0x20;
      uVar4 = uVar6;
    } while (iVar3 != 0);
    param_1 = param_1 + (ulong)uVar2 * 4 + 4;
  }
  if ((param_2 & 3) != 0) {
    uVar6 = (ulong)*(uint *)((long)param_4 + 4);
    uVar4 = *param_4;
    iVar3 = -(param_2 & 3);
    uVar7 = (ulong)(uint)*param_4;
    do {
      fVar17 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
      *param_1 = (1.0 - fVar17) * (float)(int)*(short *)(param_3 + uVar6 * 2) * 3.0517578e-05 +
                 fVar17 * (float)(int)*(short *)(param_3 + (ulong)((int)uVar6 + 1) * 2) *
                          3.0517578e-05;
      uVar4 = uVar4 + *param_5;
      *param_4 = uVar4;
      uVar6 = uVar4 >> 0x20;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      uVar7 = uVar4;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_10063b394(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  short sVar16;
  short sVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  short sVar21;
  undefined1 auVar22 [16];
  short sVar23;
  short sVar24;
  
  iVar3 = (int)param_2 >> 2;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
    uVar7 = (ulong)*(uint *)((long)param_4 + 4);
    uVar5 = *param_4;
    pfVar4 = param_1;
    uVar6 = (ulong)(uint)*param_4;
    do {
      uVar1 = (int)uVar7 * 2;
      sVar17 = *(short *)(param_3 + (ulong)((int)uVar7 << 1 | 1) * 2);
      sVar21 = *(short *)(param_3 + (ulong)(uVar1 + 3) * 2);
      uVar5 = uVar5 + *param_5;
      sVar16 = *(short *)(param_3 + (ulong)uVar1 * 2);
      sVar13 = *(short *)(param_3 + (ulong)(uVar1 + 2) * 2);
      *param_4 = uVar5;
      uVar1 = (uint)(uVar5 >> 0x1f) & 0xfffffffe;
      sVar23 = *(short *)(param_3 + (ulong)(uVar1 + 2) * 2);
      fVar8 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
      sVar24 = *(short *)(param_3 + (ulong)(uVar1 + 3) * 2);
      fVar12 = (float)(uVar5 & 0xffffffff) * 2.3283064e-10;
      uVar7 = *param_5 + uVar5;
      auVar18._0_4_ = (int)sVar16;
      auVar18._4_4_ = (int)sVar17;
      auVar18._8_4_ = (int)*(short *)(param_3 + (ulong)uVar1 * 2);
      auVar18._12_4_ = (int)*(short *)(param_3 + (uVar5 >> 0x1f & 0xfffffffe | 1) * 2);
      *param_4 = uVar7;
      uVar1 = (uint)(uVar7 >> 0x1f) & 0xfffffffe;
      auVar14._0_4_ = (int)sVar13;
      auVar14._4_4_ = (int)sVar21;
      auVar14._8_4_ = (int)sVar23;
      auVar14._12_4_ = (int)sVar24;
      sVar17 = *(short *)(param_3 + (uVar7 >> 0x1f & 0xfffffffe | 1) * 2);
      auVar19 = NEON_scvtf(auVar18,4);
      sVar21 = *(short *)(param_3 + (ulong)(uVar1 + 3) * 2);
      uVar5 = *param_5 + uVar7;
      auVar15 = NEON_scvtf(auVar14,4);
      sVar23 = *(short *)(param_3 + (ulong)uVar1 * 2);
      sVar24 = *(short *)(param_3 + (ulong)(uVar1 + 2) * 2);
      *param_4 = uVar5;
      uVar1 = (uint)(uVar5 >> 0x1f) & 0xfffffffe;
      fVar10 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
      auVar9._0_8_ = CONCAT44((1.0 - fVar8) * auVar19._4_4_ * 3.0517578e-05 +
                              fVar8 * auVar15._4_4_ * 3.0517578e-05,
                              (1.0 - fVar8) * auVar19._0_4_ * 3.0517578e-05 +
                              fVar8 * auVar15._0_4_ * 3.0517578e-05);
      auVar9._8_4_ = (1.0 - fVar12) * auVar19._8_4_ * 3.0517578e-05 +
                     fVar12 * auVar15._8_4_ * 3.0517578e-05;
      auVar9._12_4_ =
           (1.0 - fVar12) * auVar19._12_4_ * 3.0517578e-05 + fVar12 * auVar15._12_4_ * 3.0517578e-05
      ;
      fVar12 = (float)(uVar5 & 0xffffffff) * 2.3283064e-10;
      auVar20._0_4_ = (int)sVar23;
      auVar20._4_4_ = (int)sVar17;
      auVar20._8_4_ = (int)*(short *)(param_3 + (ulong)uVar1 * 2);
      auVar20._12_4_ = (int)*(short *)(param_3 + (uVar5 >> 0x1f & 0xfffffffe | 1) * 2);
      auVar22._0_4_ = (int)sVar24;
      auVar22._4_4_ = (int)sVar21;
      auVar22._8_4_ = (int)*(short *)(param_3 + (ulong)(uVar1 + 2) * 2);
      auVar22._12_4_ = (int)*(short *)(param_3 + (ulong)(uVar1 + 3) * 2);
      auVar15 = NEON_scvtf(auVar20,4);
      auVar19 = NEON_scvtf(auVar22,4);
      fVar8 = (1.0 - fVar10) * auVar15._0_4_ * 3.0517578e-05 +
              fVar10 * auVar19._0_4_ * 3.0517578e-05;
      fVar10 = (1.0 - fVar10) * auVar15._4_4_ * 3.0517578e-05 +
               fVar10 * auVar19._4_4_ * 3.0517578e-05;
      fVar11 = (1.0 - fVar12) * auVar15._8_4_ * 3.0517578e-05 +
               fVar12 * auVar19._8_4_ * 3.0517578e-05;
      fVar12 = (1.0 - fVar12) * auVar15._12_4_ * 3.0517578e-05 +
               fVar12 * auVar19._12_4_ * 3.0517578e-05;
      uVar5 = *param_5 + uVar5;
      *param_4 = uVar5;
      *(undefined8 *)pfVar4 = auVar9._0_8_;
      auVar15 = NEON_ext(auVar9,auVar9,8,1);
      *(long *)(pfVar4 + 2) = auVar15._0_8_;
      *(ulong *)(pfVar4 + 4) = CONCAT44(fVar10,fVar8);
      auVar15._4_4_ = fVar10;
      auVar15._0_4_ = fVar8;
      auVar15._8_4_ = fVar11;
      auVar15._12_4_ = fVar12;
      auVar19._4_4_ = fVar10;
      auVar19._0_4_ = fVar8;
      auVar19._8_4_ = fVar11;
      auVar19._12_4_ = fVar12;
      auVar15 = NEON_ext(auVar15,auVar19,8,1);
      *(long *)(pfVar4 + 6) = auVar15._0_8_;
      iVar3 = iVar3 + -1;
      uVar7 = uVar5 >> 0x20;
      pfVar4 = pfVar4 + 8;
      uVar6 = uVar5;
    } while (iVar3 != 0);
    param_1 = param_1 + (ulong)uVar2 * 8 + 8;
  }
  if ((param_2 & 3) != 0) {
    uVar7 = (ulong)*(uint *)((long)param_4 + 4);
    uVar5 = *param_4;
    iVar3 = -(param_2 & 3);
    uVar6 = (ulong)(uint)*param_4;
    do {
      fVar12 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
      uVar2 = (int)uVar7 * 2;
      sVar17 = *(short *)(param_3 + (ulong)((int)uVar7 << 1 | 1) * 2);
      sVar21 = *(short *)(param_3 + (ulong)(uVar2 + 3) * 2);
      *param_1 = (1.0 - fVar12) * (float)(int)*(short *)(param_3 + (ulong)uVar2 * 2) * 3.0517578e-05
                 + fVar12 * (float)(int)*(short *)(param_3 + (ulong)(uVar2 + 2) * 2) * 3.0517578e-05
      ;
      param_1[1] = (1.0 - fVar12) * (float)(int)sVar17 * 3.0517578e-05 +
                   fVar12 * (float)(int)sVar21 * 3.0517578e-05;
      uVar5 = uVar5 + *param_5;
      *param_4 = uVar5;
      uVar7 = uVar5 >> 0x20;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 2;
      uVar6 = uVar5;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_10063b66c(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  
  iVar3 = (int)param_2 >> 2;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
    uVar6 = (ulong)(uint)*param_4;
    uVar7 = (ulong)*(uint *)((long)param_4 + 4);
    auVar8 = NEON_fmov(0x3f800000,4);
    pfVar5 = param_1;
    uVar4 = *param_4;
    do {
      fVar9 = *(float *)(param_3 + uVar7 * 4);
      fVar12 = *(float *)(param_3 + (ulong)((int)uVar7 + 1) * 4);
      uVar4 = uVar4 + *param_5;
      *param_4 = uVar4;
      uVar7 = *param_5 + uVar4;
      fVar10 = *(float *)(param_3 + (uVar4 >> 0x20) * 4);
      fVar13 = *(float *)(param_3 + (ulong)((int)(uVar4 >> 0x20) + 1) * 4);
      *param_4 = uVar7;
      uVar1 = *param_5 + uVar7;
      fVar11 = *(float *)(param_3 + (uVar7 >> 0x20) * 4);
      fVar14 = *(float *)(param_3 + (ulong)((int)(uVar7 >> 0x20) + 1) * 4);
      *param_4 = uVar1;
      auVar16._4_4_ = (int)uVar4;
      auVar16._0_4_ = (int)uVar6;
      auVar16._8_4_ = (int)uVar7;
      auVar16._12_4_ = (int)uVar1;
      auVar17 = NEON_ucvtf(auVar16,4);
      fVar15 = auVar17._0_4_ * 2.3283064e-10;
      fVar18 = auVar17._4_4_ * 2.3283064e-10;
      fVar19 = auVar17._8_4_ * 2.3283064e-10;
      fVar20 = auVar17._12_4_ * 2.3283064e-10;
      auVar17._0_8_ =
           CONCAT44(fVar10 * (auVar8._4_4_ - fVar18) + fVar18 * fVar13,
                    fVar9 * (auVar8._0_4_ - fVar15) + fVar15 * fVar12);
      auVar17._8_4_ = fVar11 * (auVar8._8_4_ - fVar19) + fVar19 * fVar14;
      auVar17._12_4_ =
           *(float *)(param_3 + (uVar1 >> 0x20) * 4) * (auVar8._12_4_ - fVar20) +
           fVar20 * *(float *)(param_3 + (ulong)((int)(uVar1 >> 0x20) + 1) * 4);
      uVar6 = *param_5 + uVar1;
      *param_4 = uVar6;
      *(undefined8 *)pfVar5 = auVar17._0_8_;
      auVar17 = NEON_ext(auVar17,auVar17,8,1);
      *(long *)(pfVar5 + 2) = auVar17._0_8_;
      iVar3 = iVar3 + -1;
      pfVar5 = pfVar5 + 4;
      uVar7 = uVar6 >> 0x20;
      uVar4 = uVar6;
    } while (iVar3 != 0);
    param_1 = param_1 + (ulong)uVar2 * 4 + 4;
  }
  if ((param_2 & 3) != 0) {
    uVar6 = (ulong)*(uint *)((long)param_4 + 4);
    uVar4 = *param_4;
    iVar3 = -(param_2 & 3);
    uVar7 = (ulong)(uint)*param_4;
    do {
      fVar9 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
      *param_1 = *(float *)(param_3 + uVar6 * 4) * (1.0 - fVar9) +
                 fVar9 * *(float *)(param_3 + (ulong)((int)uVar6 + 1) * 4);
      uVar4 = uVar4 + *param_5;
      *param_4 = uVar4;
      uVar6 = uVar4 >> 0x20;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      uVar7 = uVar4;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_10063b7d0(float *param_1,uint param_2,long param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  
  iVar3 = (int)param_2 >> 1;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
    uVar7 = (ulong)*(uint *)((long)param_4 + 4);
    uVar5 = *param_4;
    pfVar4 = param_1;
    uVar6 = (ulong)(uint)*param_4;
    do {
      fVar8 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
      uVar1 = (int)uVar7 * 2;
      fVar9 = *(float *)(param_3 + (ulong)uVar1 * 4);
      fVar10 = *(float *)(param_3 + (ulong)(uVar1 + 2) * 4);
      fVar12 = *(float *)(param_3 + (ulong)((int)uVar7 << 1 | 1) * 4);
      fVar14 = *(float *)(param_3 + (ulong)(uVar1 + 3) * 4);
      uVar5 = uVar5 + *param_5;
      *param_4 = uVar5;
      fVar11 = (float)(uVar5 & 0xffffffff) * 2.3283064e-10;
      uVar1 = (uint)(uVar5 >> 0x1f) & 0xfffffffe;
      fVar13 = *(float *)(param_3 + (ulong)uVar1 * 4);
      fVar15 = *(float *)(param_3 + (ulong)(uVar1 + 2) * 4);
      fVar16 = *(float *)(param_3 + (uVar5 >> 0x1f & 0xfffffffe | 1) * 4);
      fVar17 = *(float *)(param_3 + (ulong)(uVar1 + 3) * 4);
      uVar5 = *param_5 + uVar5;
      *param_4 = uVar5;
      *pfVar4 = fVar9 * (1.0 - fVar8) + fVar8 * fVar10;
      pfVar4[1] = (1.0 - fVar8) * fVar12 + fVar8 * fVar14;
      pfVar4[2] = fVar13 * (1.0 - fVar11) + fVar11 * fVar15;
      pfVar4[3] = (1.0 - fVar11) * fVar16 + fVar11 * fVar17;
      iVar3 = iVar3 + -1;
      uVar7 = uVar5 >> 0x20;
      pfVar4 = pfVar4 + 4;
      uVar6 = uVar5;
    } while (iVar3 != 0);
    param_1 = param_1 + (ulong)uVar2 * 4 + 4;
  }
  if ((param_2 & 1) != 0) {
    uVar7 = (ulong)*(uint *)((long)param_4 + 4);
    uVar5 = *param_4;
    iVar3 = -(param_2 & 1);
    uVar6 = (ulong)(uint)*param_4;
    do {
      uVar2 = (int)uVar7 * 2;
      fVar8 = (float)(uVar6 & 0xffffffff) * 2.3283064e-10;
      fVar9 = *(float *)(param_3 + (ulong)((int)uVar7 << 1 | 1) * 4);
      fVar10 = *(float *)(param_3 + (ulong)(uVar2 + 3) * 4);
      *param_1 = *(float *)(param_3 + (ulong)uVar2 * 4) * (1.0 - fVar8) +
                 fVar8 * *(float *)(param_3 + (ulong)(uVar2 + 2) * 4);
      param_1[1] = (1.0 - fVar8) * fVar9 + fVar8 * fVar10;
      uVar5 = uVar5 + *param_5;
      *param_4 = uVar5;
      uVar7 = uVar5 >> 0x20;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 2;
      uVar6 = uVar5;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_10063b95c(float *param_1,uint param_2,long param_3,undefined4 param_4,ulong *param_5,
                  long *param_6,int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  float *pfVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  
  switch(param_4) {
  case 1:
    UNRECOVERED_JUMPTABLE = DAT_101d919a8;
    if ((param_7 - 1U == 0) || (UNRECOVERED_JUMPTABLE = DAT_101d919b0, param_7 == 2)) {
LAB_10063bdf4:
                    /* WARNING: Could not recover jumptable at 0x00010063bdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (param_2 != 0) {
      uVar7 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          fVar13 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
          uVar6 = param_7 * (*(int *)((long)param_5 + 4) + 1);
          uVar8 = param_7 * *(int *)((long)param_5 + 4);
          pfVar9 = param_1;
          iVar11 = param_7;
          do {
            *pfVar9 = (1.0 - fVar13) *
                      (float)(int)(short)*(char *)(param_3 + (ulong)uVar8) * 0.0078125 +
                      fVar13 * (float)(int)(short)*(char *)(param_3 + (ulong)uVar6) * 0.0078125;
            iVar11 = iVar11 + -1;
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            pfVar9 = pfVar9 + 1;
          } while (iVar11 != 0);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar7 = *param_5 + *param_6;
        *param_5 = uVar7;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = DAT_101d919c0;
    if ((param_7 == 2) || (UNRECOVERED_JUMPTABLE = DAT_101d919b8, param_7 - 1U == 0))
    goto LAB_10063bdf4;
    if (param_2 != 0) {
      uVar7 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          fVar13 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
          uVar6 = param_7 * (*(int *)((long)param_5 + 4) + 1);
          uVar8 = param_7 * *(int *)((long)param_5 + 4);
          pfVar9 = param_1;
          iVar11 = param_7;
          do {
            *pfVar9 = (1.0 - fVar13) *
                      (float)(int)*(short *)(param_3 + (ulong)uVar8 * 2) * 3.0517578e-05 +
                      fVar13 * (float)(int)*(short *)(param_3 + (ulong)uVar6 * 2) * 3.0517578e-05;
            iVar11 = iVar11 + -1;
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            pfVar9 = pfVar9 + 1;
          } while (iVar11 != 0);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar7 = *param_5 + *param_6;
        *param_5 = uVar7;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    break;
  case 3:
    if (param_7 - 1U == 0) {
      if (param_2 != 0) {
        uVar7 = (ulong)(uint)*param_5;
        do {
          fVar13 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
          pbVar1 = (byte *)(param_3 + (ulong)*(uint *)((long)param_5 + 4) * 3);
          pbVar2 = (byte *)(param_3 + (ulong)(*(uint *)((long)param_5 + 4) + 1) * 3);
          *param_1 = (1.0 - fVar13) *
                     (float)((int)((uint)*pbVar1 << 8 | (uint)pbVar1[1] << 0x10 |
                                  (uint)pbVar1[2] << 0x18) >> 8) * 1.1920929e-07 +
                     fVar13 * (float)((int)((uint)*pbVar2 << 8 | (uint)pbVar2[1] << 0x10 |
                                           (uint)pbVar2[2] << 0x18) >> 8) * 1.1920929e-07;
          uVar7 = *param_5 + *param_6;
          *param_5 = uVar7;
          param_2 = param_2 - 1;
          param_1 = param_1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (param_2 != 0) {
      uVar7 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          fVar13 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
          uVar6 = param_7 * (*(int *)((long)param_5 + 4) + 1);
          uVar8 = param_7 * *(int *)((long)param_5 + 4);
          pfVar9 = param_1;
          iVar11 = param_7;
          do {
            pbVar1 = (byte *)(param_3 + (ulong)uVar8 * 3);
            pbVar2 = (byte *)(param_3 + (ulong)uVar6 * 3);
            iVar11 = iVar11 + -1;
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            *pfVar9 = (1.0 - fVar13) *
                      (float)((int)((uint)*pbVar1 << 8 | (uint)pbVar1[1] << 0x10 |
                                   (uint)pbVar1[2] << 0x18) >> 8) * 1.1920929e-07 +
                      fVar13 * (float)((int)((uint)*pbVar2 << 8 | (uint)pbVar2[1] << 0x10 |
                                            (uint)pbVar2[2] << 0x18) >> 8) * 1.1920929e-07;
            pfVar9 = pfVar9 + 1;
          } while (iVar11 != 0);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar7 = *param_5 + *param_6;
        *param_5 = uVar7;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    break;
  case 4:
    if (param_7 - 1U == 0) {
      iVar11 = (int)param_2 >> 2;
      if (iVar11 != 0) {
        uVar6 = iVar11 - 1;
        uVar10 = (ulong)(uint)*param_5;
        uVar12 = (ulong)*(uint *)((long)param_5 + 4);
        auVar14 = NEON_fmov(0x3f800000,4);
        pfVar9 = param_1;
        uVar7 = *param_5;
        do {
          uVar4 = *(undefined4 *)(param_3 + uVar12 * 4);
          uVar5 = *(undefined4 *)(param_3 + (ulong)((int)uVar12 + 1) * 4);
          uVar7 = uVar7 + *param_6;
          *param_5 = uVar7;
          auVar15._4_4_ = *(undefined4 *)(param_3 + (uVar7 >> 0x20) * 4);
          auVar15._0_4_ = uVar4;
          auVar16._4_4_ = *(undefined4 *)(param_3 + (ulong)((int)(uVar7 >> 0x20) + 1) * 4);
          auVar16._0_4_ = uVar5;
          uVar12 = *param_6 + uVar7;
          *param_5 = uVar12;
          uVar3 = *param_6 + uVar12;
          auVar15._8_4_ = *(undefined4 *)(param_3 + (uVar12 >> 0x20) * 4);
          auVar16._8_4_ = *(undefined4 *)(param_3 + (ulong)((int)(uVar12 >> 0x20) + 1) * 4);
          *param_5 = uVar3;
          auVar17._4_4_ = (int)uVar7;
          auVar17._0_4_ = (int)uVar10;
          auVar17._8_4_ = (int)uVar12;
          auVar17._12_4_ = (int)uVar3;
          auVar18 = NEON_ucvtf(auVar17,4);
          fVar13 = auVar18._0_4_ * 2.3283064e-10;
          fVar19 = auVar18._4_4_ * 2.3283064e-10;
          fVar20 = auVar18._8_4_ * 2.3283064e-10;
          fVar21 = auVar18._12_4_ * 2.3283064e-10;
          auVar15._12_4_ = *(undefined4 *)(param_3 + (uVar3 >> 0x20) * 4);
          auVar15 = NEON_scvtf(auVar15,4);
          auVar16._12_4_ = *(undefined4 *)(param_3 + (ulong)((int)(uVar3 >> 0x20) + 1) * 4);
          auVar16 = NEON_scvtf(auVar16,4);
          auVar18._0_8_ =
               CONCAT44((auVar14._4_4_ - fVar19) * auVar15._4_4_ * 4.656613e-10 +
                        fVar19 * auVar16._4_4_ * 4.656613e-10,
                        (auVar14._0_4_ - fVar13) * auVar15._0_4_ * 4.656613e-10 +
                        fVar13 * auVar16._0_4_ * 4.656613e-10);
          auVar18._8_4_ =
               (auVar14._8_4_ - fVar20) * auVar15._8_4_ * 4.656613e-10 +
               fVar20 * auVar16._8_4_ * 4.656613e-10;
          auVar18._12_4_ =
               (auVar14._12_4_ - fVar21) * auVar15._12_4_ * 4.656613e-10 +
               fVar21 * auVar16._12_4_ * 4.656613e-10;
          uVar10 = *param_6 + uVar3;
          *param_5 = uVar10;
          *(undefined8 *)pfVar9 = auVar18._0_8_;
          auVar15 = NEON_ext(auVar18,auVar18,8,1);
          *(long *)(pfVar9 + 2) = auVar15._0_8_;
          iVar11 = iVar11 + -1;
          pfVar9 = pfVar9 + 4;
          uVar12 = uVar10 >> 0x20;
          uVar7 = uVar10;
        } while (iVar11 != 0);
        param_1 = param_1 + (ulong)uVar6 * 4 + 4;
      }
      if ((param_2 & 3) != 0) {
        uVar10 = (ulong)*(uint *)((long)param_5 + 4);
        uVar7 = *param_5;
        iVar11 = -(param_2 & 3);
        uVar12 = (ulong)(uint)*param_5;
        do {
          fVar13 = (float)(uVar12 & 0xffffffff) * 2.3283064e-10;
          *param_1 = (1.0 - fVar13) * (float)*(int *)(param_3 + uVar10 * 4) * 4.656613e-10 +
                     fVar13 * (float)*(int *)(param_3 + (ulong)((int)uVar10 + 1) * 4) * 4.656613e-10
          ;
          uVar7 = uVar7 + *param_6;
          *param_5 = uVar7;
          uVar10 = uVar7 >> 0x20;
          iVar11 = iVar11 + 1;
          param_1 = param_1 + 1;
          uVar12 = uVar7;
        } while (iVar11 != 0);
      }
    }
    else if (param_2 != 0) {
      uVar7 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          fVar13 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
          uVar6 = param_7 * (*(int *)((long)param_5 + 4) + 1);
          uVar8 = param_7 * *(int *)((long)param_5 + 4);
          pfVar9 = param_1;
          iVar11 = param_7;
          do {
            *pfVar9 = (1.0 - fVar13) * (float)*(int *)(param_3 + (ulong)uVar8 * 4) * 4.656613e-10 +
                      fVar13 * (float)*(int *)(param_3 + (ulong)uVar6 * 4) * 4.656613e-10;
            iVar11 = iVar11 + -1;
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            pfVar9 = pfVar9 + 1;
          } while (iVar11 != 0);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar7 = *param_5 + *param_6;
        *param_5 = uVar7;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    break;
  case 5:
    UNRECOVERED_JUMPTABLE = DAT_101d919c8;
    if ((param_7 - 1U == 0) || (UNRECOVERED_JUMPTABLE = DAT_101d919d0, param_7 == 2))
    goto LAB_10063bdf4;
    if (param_2 != 0) {
      uVar7 = (ulong)(uint)*param_5;
      do {
        if (0 < param_7) {
          fVar13 = (float)(uVar7 & 0xffffffff) * 2.3283064e-10;
          uVar6 = param_7 * (*(int *)((long)param_5 + 4) + 1);
          uVar8 = param_7 * *(int *)((long)param_5 + 4);
          pfVar9 = param_1;
          iVar11 = param_7;
          do {
            *pfVar9 = (1.0 - fVar13) * *(float *)(param_3 + (ulong)uVar8 * 4) +
                      fVar13 * *(float *)(param_3 + (ulong)uVar6 * 4);
            iVar11 = iVar11 + -1;
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 1;
            pfVar9 = pfVar9 + 1;
          } while (iVar11 != 0);
          param_1 = param_1 + (ulong)(param_7 - 1U) + 1;
        }
        uVar7 = *param_5 + *param_6;
        *param_5 = uVar7;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}




undefined8 FUN_10063c000(void)

{
  return 1;
}




undefined8 FUN_10063c008(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)*param_1)();
  *param_2 = uVar1;
  return 0;
}




undefined8 FUN_10063c038(void)

{
  return 0;
}




undefined8 FUN_10063c040(void)

{
  return 0;
}




undefined8 FUN_10063c048(void)

{
  return 0;
}




void FUN_10063c050(void)

{
  return;
}




undefined8 FUN_10063c058(void)

{
  return 0;
}




void FUN_10063c060(void)

{
  return;
}




undefined8 FUN_10063c068(void)

{
  return 0;
}




void FUN_10063c814(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_1014441c8 + 0x10);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_10063c900(lVar1);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,"../../src/fmod_memory.h",0xd4);
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_10063c900(lVar1);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,"../../src/fmod_memory.h",0xd4);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,"../../src/fmod_memory.h",0xd4);
  return;
}




void FUN_10063c8c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010063c8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x28))();
  return;
}




void FUN_10063c8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010063c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x28) + 8))();
  return;
}




long * FUN_10063c900(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                  ,0xb5);
    *param_1 = 0;
  }
  if (0 < (int)param_1[3]) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_1[2] + lVar2 * 8);
      FUN_1005654b4(uVar1);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar1,"../../src/fmod_memory.h",0xd4);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                    *(undefined8 *)(param_1[1] + lVar2 * 8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                    ,0xba);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[3]);
  }
  if (param_1[2] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[2],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                  ,0xbd);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[1],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_dsp_convolutionreverb.cpp"
                  ,0xbe);
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 FUN_10063ca68(void)

{
  return 9;
}




void FUN_10063ca70(void)

{
  return;
}




undefined8 FUN_10063ca78(void)

{
  return 0;
}




undefined8
FUN_10063ca80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  *(undefined8 *)(param_1 + 0x50) = param_5;
  return 0;
}




undefined8
FUN_10063ca90(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x48);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_1 + 0x50);
  }
  return 0;
}




void FUN_10063cac8(void)

{
  return;
}




void FUN_10063cad0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010063cad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))();
  return;
}




undefined8 FUN_10063cadc(void)

{
  return 0;
}




void FUN_10063cae4(void)

{
  return;
}




undefined8 * FUN_10063caec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a1fc0;
  FUN_1005c8e48(param_1 + 0x38);
  FUN_1005c8e48(param_1 + 0x34);
  return param_1;
}




void FUN_10063cb2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a1fc0;
  FUN_1005c8e48(param_1 + 0x38);
  FUN_1005c8e48(param_1 + 0x34);
  operator_delete(param_1);
  return;
}




undefined8 FUN_10063cb6c(void)

{
  return 1;
}




undefined8 FUN_10063cb74(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010063cb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x10))();
    return uVar1;
  }
  return 0x1e;
}




undefined8 FUN_10063cb90(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010063cba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
    return uVar1;
  }
  return 0x1e;
}




void FUN_10063cbac(void)

{
  return;
}




void FUN_10063cbb4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010063cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}




undefined8
FUN_10063cbc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x230) = param_2;
  *(undefined8 *)(param_1 + 0x238) = param_3;
  *(undefined8 *)(param_1 + 0x240) = param_4;
  *(undefined8 *)(param_1 + 0x248) = param_5;
  return 0;
}




undefined8
FUN_10063cbdc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x230);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x238);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x240);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_1 + 0x248);
  }
  return 0;
}




undefined8 FUN_10063cc14(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  return 0;
}




undefined8 FUN_10063cc20(void)

{
  return 0;
}




undefined8 FUN_10063cc28(void)

{
  return 0;
}




undefined8 FUN_10063ccbc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  return 0;
}




void FUN_10063cccc(void)

{
  return;
}




undefined8 FUN_10063ccd4(void)

{
  return 0x3f;
}




undefined8 FUN_10063ccdc(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  return 0;
}




undefined8 FUN_10063ccec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return 0;
}




undefined8 FUN_10063ccf8(void)

{
  return 0;
}




void FUN_10063cd00(long *param_1,long param_2,undefined4 *param_3)

{
  (**(code **)(*param_1 + 0x38))
            (param_1,*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0xc),param_2 + 0x28);
  *param_3 = *(undefined4 *)(param_2 + 0x28);
  return;
}




void FUN_10063cd40(void)

{
  return;
}




void FUN_10063cd48(void)

{
  return;
}




void FUN_10063cd50(void)

{
  return;
}




void FUN_10063cd58(void)

{
  return;
}




void FUN_10063cd60(void)

{
  return;
}




void FUN_10063cd68(void)

{
  return;
}




void FUN_10063cd70(void)

{
  return;
}




undefined8 FUN_10063ce1c(void)

{
  return 0;
}




undefined8 FUN_10063ce24(void)

{
  return 0x3c;
}




undefined8 FUN_10063ce2c(void)

{
  return 0;
}




undefined8 FUN_10063ce34(void)

{
  return 0x1c;
}




undefined8 FUN_10063ce3c(void)

{
  return 1;
}




int FUN_10063ce44(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100562d14();
  iVar2 = FUN_100562eec(param_1 + iVar1,param_2 - iVar1,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_1 + iVar2,param_2 - iVar2,param_4);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_1 + iVar2,param_2 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562d14(param_1 + iVar2,param_2 - iVar2,param_5);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_1 + iVar2,param_2 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_1005632dc(param_1 + iVar2,param_2 - iVar2,param_6);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_1 + iVar2,param_2 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_1005630e4(param_1 + iVar2,param_2 - iVar2,param_7);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_1 + iVar2,param_2 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_10056335c(param_1 + iVar2,param_2 - iVar2,param_8);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_1 + iVar2,param_2 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_1005630e4(param_1 + iVar2,param_2 - iVar2,param_9);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_1 + iVar2,param_2 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100563124(param_1 + iVar2,param_2 - iVar2,param_10);
  return iVar2 + iVar1;
}




undefined8 FUN_10063cfd4(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  iVar1 = -iVar3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if (iVar1 < 0) {
    iVar1 = (int)param_1[1];
    if (0 < iVar1) {
      return 0x1c;
    }
    if (iVar1 != 0) {
      _memcpy((void *)0x0,(void *)*param_1,(long)iVar1 << 3);
    }
    if ((0 < iVar3) && (*param_1 != 0)) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_memory.h",
                    0x119);
    }
    iVar3 = 0;
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    _bzero((void *)(*param_1 + (long)iVar1 * 8),
           -(ulong)((uint)-iVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)-iVar1 << 3);
    iVar3 = *(int *)((long)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = -iVar3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if ((iVar1 < 1) || (uVar2 = FUN_10063d134(param_1,0), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}




void thunk_FUN_10063d330(void)

{
  FUN_10063d330();
  return;
}




void FUN_10063d120(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063d330();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10063d134(long *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 < (int)uVar1) {
    return 0x1c;
  }
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x7fffffe < param_2 - 1U) {
      return 0x26;
    }
    pvVar2 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2 << 3,
                                   "../../src/fmod_memory.h",0x10d,0,0);
    if (pvVar2 == (void *)0x0) {
      return 0x26;
    }
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (uVar1 != 0) {
    _memcpy(pvVar2,(void *)*param_1,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3
           );
  }
  if ((0 < *(int *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_memory.h",0x119
                 );
  }
  *param_1 = (long)pvVar2;
  *(int *)((long)param_1 + 0xc) = param_2;
  return 0;
}




void FUN_10063d228(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*param_1 == 0) goto LAB_10063d2e0;
  iVar1 = (int)param_1[1];
  if (999 < iVar1) {
    if (iVar1 != 1000) goto switchD_10063d26c_default;
    iVar2 = 2;
    goto switchD_10063d26c_caseD_2;
  }
  iVar2 = 1;
  switch(iVar1) {
  case 2:
    break;
  case 3:
    iVar2 = 2;
    break;
  case 4:
  case 5:
  case 6:
    iVar2 = iVar1;
    break;
  case 7:
    iVar2 = 8;
    break;
  case 8:
    goto switchD_10063d26c_caseD_8;
  default:
switchD_10063d26c_default:
    iVar2 = 0;
  }
switchD_10063d26c_caseD_2:
  FUN_10056f548(*param_1,iVar1,iVar2);
switchD_10063d26c_caseD_8:
  lVar3 = *param_1;
  if (*(int *)((long)param_1 + 0xc) != 0) {
    *(int *)(lVar3 + 0x708) = *(int *)((long)param_1 + 0xc);
  }
  if (*(long *)(lVar3 + 0x167b0) != 0) {
    FUN_100555e04();
    *(undefined8 *)(*param_1 + 0x167b0) = 0;
  }
  FUN_1005d75e0(PTR_DAT_10186d408);
  FUN_1005f4f74(*param_1,1);
LAB_10063d2e0:
  if (param_1[2] == 0) {
    return;
  }
  FUN_100637578(param_1[2],0);
  return;
}




long * FUN_10063d330(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_1014441d8 + 0x10);
  FUN_10063cfd4(param_1 + 0x2d00);
  plVar1 = param_1 + 0x2cfe;
  plVar3 = (long *)param_1[0x2cff];
  *plVar3 = *plVar1;
  *(long **)(*plVar1 + 8) = plVar3;
  param_1[0x2cff] = (long)plVar1;
  param_1[0x2cfe] = (long)plVar1;
  iVar2 = FUN_10063d428(param_1 + 0x2cf9);
  if ((iVar2 == 0) && (iVar2 = FUN_10063d4e0(param_1 + 0x2cfb), iVar2 == 0)) {
    param_1[0x2cfd] = 0xffffffff;
  }
  FUN_10063d4e0(param_1 + 0x2cfb);
  FUN_10063d428(param_1 + 0x2cf9);
  FUN_1005d4cd4(param_1 + 0x2c8a);
  FUN_1005d81dc(param_1 + 0x29ed);
  FUN_1005d81dc(param_1 + 0x2917);
  return param_1;
}




undefined8 FUN_10063d428(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  iVar1 = -iVar3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if (iVar1 < 0) {
    iVar1 = (int)param_1[1];
    if (0 < iVar1) {
      return 0x1c;
    }
    if (iVar1 != 0) {
      _memcpy((void *)0x0,(void *)*param_1,(long)iVar1 << 2);
    }
    if ((0 < iVar3) && (*param_1 != 0)) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_memory.h",
                    0x119);
    }
    iVar3 = 0;
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = -iVar3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if ((iVar1 < 1) || (uVar2 = FUN_10063d5b8(param_1,0), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_10063d4e0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  iVar1 = -iVar3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if (iVar1 < 0) {
    iVar1 = (int)param_1[1];
    if (0 < iVar1) {
      return 0x1c;
    }
    if (iVar1 != 0) {
      _memcpy((void *)0x0,(void *)*param_1,(long)iVar1 << 4);
    }
    if ((0 < iVar3) && (*param_1 != 0)) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_memory.h",
                    0x119);
    }
    iVar3 = 0;
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    _bzero((void *)(*param_1 + (long)iVar1 * 0x10),
           -(ulong)((uint)-iVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)-iVar1 << 4);
    iVar3 = *(int *)((long)param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  iVar1 = -iVar3;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  if ((iVar1 < 1) || (uVar2 = FUN_10063d6ac(param_1,0), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_10063d5b8(long *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 < (int)uVar1) {
    return 0x1c;
  }
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0xffffffe < param_2 - 1U) {
      return 0x26;
    }
    pvVar2 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2 << 2,
                                   "../../src/fmod_memory.h",0x10d,0,0);
    if (pvVar2 == (void *)0x0) {
      return 0x26;
    }
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (uVar1 != 0) {
    _memcpy(pvVar2,(void *)*param_1,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2
           );
  }
  if ((0 < *(int *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_memory.h",0x119
                 );
  }
  *param_1 = (long)pvVar2;
  *(int *)((long)param_1 + 0xc) = param_2;
  return 0;
}




undefined8 FUN_10063d6ac(long *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (param_2 < (int)uVar1) {
    return 0x1c;
  }
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x3fffffe < param_2 - 1U) {
      return 0x26;
    }
    pvVar2 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2 << 4,
                                   "../../src/fmod_memory.h",0x10d,0,0);
    if (pvVar2 == (void *)0x0) {
      return 0x26;
    }
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (uVar1 != 0) {
    _memcpy(pvVar2,(void *)*param_1,-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4
           );
  }
  if ((0 < *(int *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,"../../src/fmod_memory.h",0x119
                 );
  }
  *param_1 = (long)pvVar2;
  *(int *)((long)param_1 + 0xc) = param_2;
  return 0;
}




void FUN_10063d7a0(void)

{
  return;
}




int FUN_10063d7a8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,int param_10)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100562dfc();
  iVar2 = FUN_100562eec(param_9 + iVar1,param_10 - iVar1,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562dfc(param_2,param_9 + iVar2,param_10 - iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_9 + iVar2,param_10 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562dfc(param_3,param_9 + iVar2,param_10 - iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_9 + iVar2,param_10 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562dfc(param_4,param_9 + iVar2,param_10 - iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_9 + iVar2,param_10 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562dfc(param_5,param_9 + iVar2,param_10 - iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_9 + iVar2,param_10 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562dfc(param_6,param_9 + iVar2,param_10 - iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_9 + iVar2,param_10 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562dfc(param_7,param_9 + iVar2,param_10 - iVar2);
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562eec(param_9 + iVar2,param_10 - iVar2,", ");
  iVar2 = iVar2 + iVar1;
  iVar1 = FUN_100562dfc(param_8,param_9 + iVar2,param_10 - iVar2);
  return iVar2 + iVar1;
}




undefined8 FUN_10063d934(void)

{
  return 0x1c;
}




undefined8 FUN_10063d93c(void)

{
  return 0x1c;
}




undefined8 FUN_10063d944(void)

{
  return 0x1c;
}




undefined8 FUN_10063d94c(void)

{
  return 0x1c;
}




undefined8 FUN_10063d954(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}




undefined8 FUN_10063d964(long *param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != -1) {
    iVar2 = *(int *)((long)param_1 + 0x1c);
    iVar5 = -iVar2;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    if (iVar5 == (int)param_1[1]) {
      if (iVar1 == iVar5) {
        iVar5 = 0x40;
        if (0x3f < iVar1 * 2) {
          iVar5 = iVar1 * 2;
        }
        uVar4 = FUN_10063da48(param_1,iVar5);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        iVar5 = (int)param_1[1];
      }
      if (iVar5 != 0) {
        uVar3 = *(uint *)(*param_1 + (long)(int)(*param_2 & iVar5 - 1U) * 4);
        if (uVar3 != 0xffffffff) {
          do {
            if (*(uint *)(param_1[2] +
                         (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)) ==
                *param_2) {
              return 0x1c;
            }
            uVar3 = *(uint *)(param_1[2] + (long)(int)uVar3 * 0x10 + 4);
          } while (uVar3 != 0xffffffff);
        }
        uVar4 = FUN_10063db88(param_1,param_2,param_3);
        return uVar4;
      }
    }
  }
  return 0x1c;
}




undefined8 FUN_10063da48(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = (int)param_2;
  if ((int)param_1[1] < iVar8) {
    if ((int)param_1[3] == (int)param_1[1]) {
      if ((int)param_1[4] == -1) {
        iVar2 = *(int *)((long)param_1 + 0x1c);
        iVar1 = -iVar2;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        if ((iVar8 <= iVar1) || (uVar4 = FUN_10063d6ac(param_1 + 2,param_2), (int)uVar4 == 0)) {
          iVar2 = *(int *)((long)param_1 + 0xc);
          iVar1 = -iVar2;
          if (-1 < iVar2) {
            iVar1 = iVar2;
          }
          if ((iVar8 <= iVar1) || (uVar4 = FUN_10063d5b8(param_1,param_2), (int)uVar4 == 0)) {
            *(int *)(param_1 + 1) = iVar8;
            if (0 < iVar8) {
              _memset((void *)*param_1,0xff,(ulong)(iVar8 - 1) * 4 + 4);
            }
            lVar3 = param_1[3];
            if ((int)lVar3 < 1) {
              uVar4 = 0;
            }
            else {
              lVar5 = 0;
              uVar4 = 0;
              do {
                if ((int)param_1[1] == 0) {
                  return 0x1c;
                }
                lVar6 = param_1[2];
                piVar7 = (int *)(*param_1 +
                                (long)(int)(*(uint *)(lVar6 + lVar5 * 0x10) & (int)param_1[1] - 1U)
                                * 4);
                iVar8 = *piVar7;
                while (iVar8 != -1) {
                  piVar7 = (int *)(lVar6 + (long)iVar8 * 0x10 + 4);
                  iVar8 = *piVar7;
                }
                *piVar7 = (int)lVar5;
                *(undefined4 *)(lVar6 + lVar5 * 0x10 + 4) = 0xffffffff;
                lVar5 = lVar5 + 1;
              } while (lVar5 < (int)lVar3);
            }
          }
        }
      }
      else {
        uVar4 = 0x1c;
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  else {
    uVar4 = 0x1c;
  }
  return uVar4;
}




undefined8 FUN_10063db88(long param_1,undefined4 *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 == -1) {
    iVar7 = *(int *)(param_1 + 0x18);
    iVar6 = *(int *)(param_1 + 0x1c);
    uVar4 = *param_2;
    uVar8 = *param_3;
    iVar1 = iVar7 + 1;
    iVar3 = -iVar6;
    if (-1 < iVar6) {
      iVar3 = iVar6;
    }
    iVar6 = iVar7;
    if (iVar3 < iVar1) {
      if (iVar1 <= (int)((float)iVar3 * 1.5)) {
        iVar1 = (int)((float)iVar3 * 1.5);
      }
      iVar3 = 4;
      if (3 < iVar1) {
        iVar3 = iVar1;
      }
      uVar5 = FUN_10063d6ac(param_1 + 0x10,iVar3);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      iVar6 = *(int *)(param_1 + 0x18);
    }
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar6 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = 0xffffffff;
    *(undefined8 *)(puVar2 + 2) = uVar8;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar7 * 0x10);
    *(undefined4 *)(param_1 + 0x20) = puVar2[1];
    puVar2[1] = 0xffffffff;
    *puVar2 = *param_2;
    *(undefined8 *)(puVar2 + 2) = *param_3;
  }
  *param_4 = iVar7;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return 0;
}




void FUN_10063dc80(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  if (*(float *)(param_1 + 0x2458) != 0.0) {
    fVar17 = *(float *)(param_1 + 0x2458) + -1.0;
    *(float *)(param_1 + 0x2458) = fVar17;
    if (fVar17 == 0.0) {
      fVar17 = *(float *)(param_1 + 0x2450);
    }
    else {
      fVar17 = *(float *)(param_1 + 0x244c) + *(float *)(param_1 + 0x2454);
    }
    *(float *)(param_1 + 0x244c) = fVar17;
  }
  if (*(float *)(param_1 + 0x246c) != 0.0) {
    fVar17 = *(float *)(param_1 + 0x246c) + -1.0;
    *(float *)(param_1 + 0x246c) = fVar17;
    if (fVar17 == 0.0) {
      fVar17 = *(float *)(param_1 + 0x2464);
    }
    else {
      fVar17 = *(float *)(param_1 + 0x2460) + *(float *)(param_1 + 0x2468);
    }
    *(float *)(param_1 + 0x2460) = fVar17;
  }
  if (*(float *)(param_1 + 0x2480) != 0.0) {
    fVar17 = *(float *)(param_1 + 0x2480) + -1.0;
    *(float *)(param_1 + 0x2480) = fVar17;
    if (fVar17 == 0.0) {
      fVar17 = *(float *)(param_1 + 0x2478);
    }
    else {
      fVar17 = *(float *)(param_1 + 0x2474) + *(float *)(param_1 + 0x247c);
    }
    *(float *)(param_1 + 0x2474) = fVar17;
  }
  if (*(int *)(param_1 + 0x1ec) != 0) {
    iVar1 = *(int *)(param_1 + 0x1ec) + -1;
    *(int *)(param_1 + 0x1ec) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 500);
      fVar20 = *(float *)(param_1 + 0x1f8);
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1f0);
      *(float *)(param_1 + 0x1dc) = fVar17;
      *(float *)(param_1 + 0x1e0) = fVar20;
      fVar21 = *(float *)(param_1 + 0x1fc);
      *(float *)(param_1 + 0x1e4) = fVar21;
      fVar18 = *(float *)(param_1 + 0x200);
      *(float *)(param_1 + 0x1e8) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x204) + (float)*(undefined8 *)(param_1 + 0x1d8);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x204) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x20c) + (float)*(undefined8 *)(param_1 + 0x1e0);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x20c) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x1e0) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x214) + *(float *)(param_1 + 0x1e8);
      *(ulong *)(param_1 + 0x1d8) = CONCAT44(fVar17,fVar19);
      auVar22._4_4_ = fVar17;
      auVar22._0_4_ = fVar19;
      auVar22._8_4_ = fVar20;
      auVar22._12_4_ = fVar21;
      auVar2._4_4_ = fVar17;
      auVar2._0_4_ = fVar19;
      auVar2._8_4_ = fVar20;
      auVar2._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar22,auVar2,8,1);
      *(long *)(param_1 + 0x1e0) = auVar22._0_8_;
      *(float *)(param_1 + 0x1e8) = fVar18;
    }
    *(float *)(param_1 + 0x1c8) = -fVar21;
    *(float *)(param_1 + 0x1cc) = -fVar18;
    *(float *)(param_1 + 0x1d0) = fVar17;
    *(float *)(param_1 + 0x1d4) = fVar20;
  }
  if (*(int *)(param_1 + 0x28c) != 0) {
    iVar1 = *(int *)(param_1 + 0x28c) + -1;
    *(int *)(param_1 + 0x28c) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 0x294);
      fVar20 = *(float *)(param_1 + 0x298);
      *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_1 + 0x290);
      *(float *)(param_1 + 0x27c) = fVar17;
      *(float *)(param_1 + 0x280) = fVar20;
      fVar21 = *(float *)(param_1 + 0x29c);
      *(float *)(param_1 + 0x284) = fVar21;
      fVar18 = *(float *)(param_1 + 0x2a0);
      *(float *)(param_1 + 0x288) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x2a4) + (float)*(undefined8 *)(param_1 + 0x278);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x2a4) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x278) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x2ac) + (float)*(undefined8 *)(param_1 + 0x280);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x2ac) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x280) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x2b4) + *(float *)(param_1 + 0x288);
      *(ulong *)(param_1 + 0x278) = CONCAT44(fVar17,fVar19);
      auVar3._4_4_ = fVar17;
      auVar3._0_4_ = fVar19;
      auVar3._8_4_ = fVar20;
      auVar3._12_4_ = fVar21;
      auVar4._4_4_ = fVar17;
      auVar4._0_4_ = fVar19;
      auVar4._8_4_ = fVar20;
      auVar4._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar3,auVar4,8,1);
      *(long *)(param_1 + 0x280) = auVar22._0_8_;
      *(float *)(param_1 + 0x288) = fVar18;
    }
    *(float *)(param_1 + 0x268) = -fVar21;
    *(float *)(param_1 + 0x26c) = -fVar18;
    *(float *)(param_1 + 0x270) = fVar17;
    *(float *)(param_1 + 0x274) = fVar20;
  }
  if (*(int *)(param_1 + 0x32c) != 0) {
    iVar1 = *(int *)(param_1 + 0x32c) + -1;
    *(int *)(param_1 + 0x32c) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 0x334);
      fVar20 = *(float *)(param_1 + 0x338);
      *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x330);
      *(float *)(param_1 + 0x31c) = fVar17;
      *(float *)(param_1 + 800) = fVar20;
      fVar21 = *(float *)(param_1 + 0x33c);
      *(float *)(param_1 + 0x324) = fVar21;
      fVar18 = *(float *)(param_1 + 0x340);
      *(float *)(param_1 + 0x328) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x344) + (float)*(undefined8 *)(param_1 + 0x318);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x344) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x318) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x34c) + (float)*(undefined8 *)(param_1 + 800);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x34c) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 800) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x354) + *(float *)(param_1 + 0x328);
      *(ulong *)(param_1 + 0x318) = CONCAT44(fVar17,fVar19);
      auVar5._4_4_ = fVar17;
      auVar5._0_4_ = fVar19;
      auVar5._8_4_ = fVar20;
      auVar5._12_4_ = fVar21;
      auVar6._4_4_ = fVar17;
      auVar6._0_4_ = fVar19;
      auVar6._8_4_ = fVar20;
      auVar6._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar5,auVar6,8,1);
      *(long *)(param_1 + 800) = auVar22._0_8_;
      *(float *)(param_1 + 0x328) = fVar18;
    }
    *(float *)(param_1 + 0x308) = -fVar21;
    *(float *)(param_1 + 0x30c) = -fVar18;
    *(float *)(param_1 + 0x310) = fVar17;
    *(float *)(param_1 + 0x314) = fVar20;
  }
  if (*(int *)(param_1 + 0x3cc) != 0) {
    iVar1 = *(int *)(param_1 + 0x3cc) + -1;
    *(int *)(param_1 + 0x3cc) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 0x3d4);
      fVar20 = *(float *)(param_1 + 0x3d8);
      *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x3d0);
      *(float *)(param_1 + 0x3bc) = fVar17;
      *(float *)(param_1 + 0x3c0) = fVar20;
      fVar21 = *(float *)(param_1 + 0x3dc);
      *(float *)(param_1 + 0x3c4) = fVar21;
      fVar18 = *(float *)(param_1 + 0x3e0);
      *(float *)(param_1 + 0x3c8) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x3e4) + (float)*(undefined8 *)(param_1 + 0x3b8);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x3e4) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x3b8) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x3ec) + (float)*(undefined8 *)(param_1 + 0x3c0);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x3ec) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x3f4) + *(float *)(param_1 + 0x3c8);
      *(ulong *)(param_1 + 0x3b8) = CONCAT44(fVar17,fVar19);
      auVar7._4_4_ = fVar17;
      auVar7._0_4_ = fVar19;
      auVar7._8_4_ = fVar20;
      auVar7._12_4_ = fVar21;
      auVar8._4_4_ = fVar17;
      auVar8._0_4_ = fVar19;
      auVar8._8_4_ = fVar20;
      auVar8._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar7,auVar8,8,1);
      *(long *)(param_1 + 0x3c0) = auVar22._0_8_;
      *(float *)(param_1 + 0x3c8) = fVar18;
    }
    *(float *)(param_1 + 0x3a8) = -fVar21;
    *(float *)(param_1 + 0x3ac) = -fVar18;
    *(float *)(param_1 + 0x3b0) = fVar17;
    *(float *)(param_1 + 0x3b4) = fVar20;
  }
  if (*(int *)(param_1 + 0x23c) != 0) {
    iVar1 = *(int *)(param_1 + 0x23c) + -1;
    *(int *)(param_1 + 0x23c) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 0x244);
      fVar20 = *(float *)(param_1 + 0x248);
      *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x240);
      *(float *)(param_1 + 0x22c) = fVar17;
      *(float *)(param_1 + 0x230) = fVar20;
      fVar21 = *(float *)(param_1 + 0x24c);
      *(float *)(param_1 + 0x234) = fVar21;
      fVar18 = *(float *)(param_1 + 0x250);
      *(float *)(param_1 + 0x238) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x254) + (float)*(undefined8 *)(param_1 + 0x228);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x254) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x228) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x25c) + (float)*(undefined8 *)(param_1 + 0x230);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x25c) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x230) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x264) + *(float *)(param_1 + 0x238);
      *(ulong *)(param_1 + 0x228) = CONCAT44(fVar17,fVar19);
      auVar9._4_4_ = fVar17;
      auVar9._0_4_ = fVar19;
      auVar9._8_4_ = fVar20;
      auVar9._12_4_ = fVar21;
      auVar10._4_4_ = fVar17;
      auVar10._0_4_ = fVar19;
      auVar10._8_4_ = fVar20;
      auVar10._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar9,auVar10,8,1);
      *(long *)(param_1 + 0x230) = auVar22._0_8_;
      *(float *)(param_1 + 0x238) = fVar18;
    }
    *(float *)(param_1 + 0x218) = -fVar21;
    *(float *)(param_1 + 0x21c) = -fVar18;
    *(float *)(param_1 + 0x220) = fVar17;
    *(float *)(param_1 + 0x224) = fVar20;
  }
  if (*(int *)(param_1 + 0x2dc) != 0) {
    iVar1 = *(int *)(param_1 + 0x2dc) + -1;
    *(int *)(param_1 + 0x2dc) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 0x2e4);
      fVar20 = *(float *)(param_1 + 0x2e8);
      *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2e0);
      *(float *)(param_1 + 0x2cc) = fVar17;
      *(float *)(param_1 + 0x2d0) = fVar20;
      fVar21 = *(float *)(param_1 + 0x2ec);
      *(float *)(param_1 + 0x2d4) = fVar21;
      fVar18 = *(float *)(param_1 + 0x2f0);
      *(float *)(param_1 + 0x2d8) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x2f4) + (float)*(undefined8 *)(param_1 + 0x2c8);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x2f4) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x2c8) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x2fc) + (float)*(undefined8 *)(param_1 + 0x2d0);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x2fc) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x2d0) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x304) + *(float *)(param_1 + 0x2d8);
      *(ulong *)(param_1 + 0x2c8) = CONCAT44(fVar17,fVar19);
      auVar11._4_4_ = fVar17;
      auVar11._0_4_ = fVar19;
      auVar11._8_4_ = fVar20;
      auVar11._12_4_ = fVar21;
      auVar12._4_4_ = fVar17;
      auVar12._0_4_ = fVar19;
      auVar12._8_4_ = fVar20;
      auVar12._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar11,auVar12,8,1);
      *(long *)(param_1 + 0x2d0) = auVar22._0_8_;
      *(float *)(param_1 + 0x2d8) = fVar18;
    }
    *(float *)(param_1 + 0x2b8) = -fVar21;
    *(float *)(param_1 + 700) = -fVar18;
    *(float *)(param_1 + 0x2c0) = fVar17;
    *(float *)(param_1 + 0x2c4) = fVar20;
  }
  if (*(int *)(param_1 + 0x37c) != 0) {
    iVar1 = *(int *)(param_1 + 0x37c) + -1;
    *(int *)(param_1 + 0x37c) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 900);
      fVar20 = *(float *)(param_1 + 0x388);
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x380);
      *(float *)(param_1 + 0x36c) = fVar17;
      *(float *)(param_1 + 0x370) = fVar20;
      fVar21 = *(float *)(param_1 + 0x38c);
      *(float *)(param_1 + 0x374) = fVar21;
      fVar18 = *(float *)(param_1 + 0x390);
      *(float *)(param_1 + 0x378) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x394) + (float)*(undefined8 *)(param_1 + 0x368);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x394) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x368) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x39c) + (float)*(undefined8 *)(param_1 + 0x370);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x39c) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x370) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x3a4) + *(float *)(param_1 + 0x378);
      *(ulong *)(param_1 + 0x368) = CONCAT44(fVar17,fVar19);
      auVar13._4_4_ = fVar17;
      auVar13._0_4_ = fVar19;
      auVar13._8_4_ = fVar20;
      auVar13._12_4_ = fVar21;
      auVar14._4_4_ = fVar17;
      auVar14._0_4_ = fVar19;
      auVar14._8_4_ = fVar20;
      auVar14._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar13,auVar14,8,1);
      *(long *)(param_1 + 0x370) = auVar22._0_8_;
      *(float *)(param_1 + 0x378) = fVar18;
    }
    *(float *)(param_1 + 0x358) = -fVar21;
    *(float *)(param_1 + 0x35c) = -fVar18;
    *(float *)(param_1 + 0x360) = fVar17;
    *(float *)(param_1 + 0x364) = fVar20;
  }
  if (*(int *)(param_1 + 0x41c) != 0) {
    iVar1 = *(int *)(param_1 + 0x41c) + -1;
    *(int *)(param_1 + 0x41c) = iVar1;
    if (iVar1 == 0) {
      fVar17 = *(float *)(param_1 + 0x424);
      fVar20 = *(float *)(param_1 + 0x428);
      *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x420);
      *(float *)(param_1 + 0x40c) = fVar17;
      *(float *)(param_1 + 0x410) = fVar20;
      fVar21 = *(float *)(param_1 + 0x42c);
      *(float *)(param_1 + 0x414) = fVar21;
      fVar18 = *(float *)(param_1 + 0x430);
      *(float *)(param_1 + 0x418) = fVar18;
    }
    else {
      fVar19 = (float)*(undefined8 *)(param_1 + 0x434) + (float)*(undefined8 *)(param_1 + 0x408);
      fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x434) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x408) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x43c) + (float)*(undefined8 *)(param_1 + 0x410);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x43c) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20);
      fVar18 = *(float *)(param_1 + 0x444) + *(float *)(param_1 + 0x418);
      *(ulong *)(param_1 + 0x408) = CONCAT44(fVar17,fVar19);
      auVar15._4_4_ = fVar17;
      auVar15._0_4_ = fVar19;
      auVar15._8_4_ = fVar20;
      auVar15._12_4_ = fVar21;
      auVar16._4_4_ = fVar17;
      auVar16._0_4_ = fVar19;
      auVar16._8_4_ = fVar20;
      auVar16._12_4_ = fVar21;
      auVar22 = NEON_ext(auVar15,auVar16,8,1);
      *(long *)(param_1 + 0x410) = auVar22._0_8_;
      *(float *)(param_1 + 0x418) = fVar18;
    }
    *(float *)(param_1 + 0x3f8) = -fVar21;
    *(float *)(param_1 + 0x3fc) = -fVar18;
    *(float *)(param_1 + 0x400) = fVar17;
    *(float *)(param_1 + 0x404) = fVar20;
  }
  return;
}




float FUN_10063e27c(float param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar3 = *(float *)(param_2 + 0x244c);
  lVar1 = param_2 + (long)param_3 * 0x10;
  fVar4 = *(float *)(lVar1 + 0x448);
  lVar2 = *(long *)(lVar1 + 0x450);
  fVar6 = *(float *)(lVar2 + 0x18);
  fVar9 = *(float *)(lVar1 + 0x44c);
  fVar7 = (param_1 - fVar4 * *(float *)(lVar2 + 0x1c)) - fVar9 * *(float *)(lVar2 + 0x20);
  fVar14 = *(float *)(lVar2 + 0x10);
  fVar20 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x44c) = fVar4;
  *(float *)(lVar1 + 0x448) = fVar7;
  fVar5 = *(float *)(lVar1 + 0x648);
  lVar2 = *(long *)(lVar1 + 0x650);
  fVar8 = *(float *)(lVar2 + 0x18);
  fVar10 = *(float *)(lVar1 + 0x64c);
  fVar14 = ((fVar14 * fVar7 + fVar4 * fVar20 + fVar9 * fVar6) - fVar5 * *(float *)(lVar2 + 0x1c)) -
           fVar10 * *(float *)(lVar2 + 0x20);
  fVar15 = *(float *)(lVar2 + 0x10);
  fVar21 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x64c) = fVar5;
  *(float *)(lVar1 + 0x648) = fVar14;
  fVar7 = *(float *)(param_2 + 0x2460);
  fVar4 = *(float *)(lVar1 + 0xc48);
  lVar2 = *(long *)(lVar1 + 0xc50);
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar16 = *(float *)(lVar1 + 0xc4c);
  fVar20 = (param_1 - fVar4 * *(float *)(lVar2 + 0x1c)) - fVar16 * *(float *)(lVar2 + 0x20);
  fVar22 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0xc4c) = fVar4;
  *(float *)(lVar1 + 0xc48) = fVar20;
  fVar6 = *(float *)(lVar1 + 0xe48);
  lVar2 = *(long *)(lVar1 + 0xe50);
  fVar11 = *(float *)(lVar2 + 0x18);
  fVar17 = *(float *)(lVar1 + 0xe4c);
  fVar9 = ((fVar22 * fVar20 + fVar4 * fVar25 + fVar16 * fVar9) - fVar6 * *(float *)(lVar2 + 0x1c)) -
          fVar17 * *(float *)(lVar2 + 0x20);
  fVar20 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0xe4c) = fVar6;
  *(float *)(lVar1 + 0xe48) = fVar9;
  fVar4 = *(float *)(lVar1 + 0x1448);
  lVar2 = *(long *)(lVar1 + 0x1450);
  fVar16 = *(float *)(lVar2 + 0x18);
  fVar22 = *(float *)(lVar1 + 0x144c);
  fVar6 = ((fVar20 * fVar9 + fVar6 * fVar25 + fVar17 * fVar11) - fVar4 * *(float *)(lVar2 + 0x1c)) -
          fVar22 * *(float *)(lVar2 + 0x20);
  fVar9 = *(float *)(lVar2 + 0x10);
  fVar11 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x144c) = fVar4;
  *(float *)(lVar1 + 0x1448) = fVar6;
  fVar20 = *(float *)(lVar1 + 0x1648);
  lVar2 = *(long *)(lVar1 + 0x1650);
  fVar25 = *(float *)(lVar2 + 0x18);
  fVar18 = *(float *)(lVar1 + 0x164c);
  fVar17 = ((fVar9 * fVar6 + fVar4 * fVar11 + fVar22 * fVar16) - fVar20 * *(float *)(lVar2 + 0x1c))
           - fVar18 * *(float *)(lVar2 + 0x20);
  fVar23 = *(float *)(lVar2 + 0x10);
  fVar26 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x164c) = fVar20;
  *(float *)(lVar1 + 0x1648) = fVar17;
  fVar9 = *(float *)(param_2 + 0x2474);
  fVar16 = *(float *)(lVar1 + 0x1c48);
  lVar2 = *(long *)(lVar1 + 0x1c50);
  fVar22 = *(float *)(lVar2 + 0x18);
  fVar12 = *(float *)(lVar1 + 0x1c4c);
  fVar4 = (param_1 - fVar16 * *(float *)(lVar2 + 0x1c)) - fVar12 * *(float *)(lVar2 + 0x20);
  fVar19 = *(float *)(lVar2 + 0x10);
  fVar24 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x1c4c) = fVar16;
  *(float *)(lVar1 + 0x1c48) = fVar4;
  fVar6 = *(float *)(lVar1 + 0x1e48);
  lVar2 = *(long *)(lVar1 + 0x1e50);
  fVar11 = *(float *)(lVar2 + 0x18);
  fVar13 = *(float *)(lVar1 + 0x1e4c);
  fVar4 = ((fVar19 * fVar4 + fVar16 * fVar24 + fVar12 * fVar22) - fVar6 * *(float *)(lVar2 + 0x1c))
          - fVar13 * *(float *)(lVar2 + 0x20);
  fVar16 = *(float *)(lVar2 + 0x10);
  fVar22 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x1e4c) = fVar6;
  *(float *)(lVar1 + 0x1e48) = fVar4;
  return fVar3 * (fVar15 * fVar14 + fVar5 * fVar21 + fVar10 * fVar8) +
         fVar7 * (fVar23 * fVar17 + fVar20 * fVar26 + fVar18 * fVar25) +
         fVar9 * (fVar16 * fVar4 + fVar6 * fVar22 + fVar13 * fVar11);
}




float FUN_10063e4c4(float param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fVar3 = *(float *)(param_2 + 0x244c);
  lVar1 = param_2 + (long)param_3 * 0x10;
  fVar4 = *(float *)(lVar1 + 0x448);
  lVar2 = *(long *)(lVar1 + 0x450);
  fVar6 = *(float *)(lVar2 + 0x18);
  fVar10 = *(float *)(lVar1 + 0x44c);
  fVar7 = (param_1 - fVar4 * *(float *)(lVar2 + 0x1c)) - fVar10 * *(float *)(lVar2 + 0x20);
  fVar15 = *(float *)(lVar2 + 0x10);
  fVar20 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x44c) = fVar4;
  *(float *)(lVar1 + 0x448) = fVar7;
  fVar5 = *(float *)(lVar1 + 0x648);
  lVar2 = *(long *)(lVar1 + 0x650);
  fVar8 = *(float *)(lVar2 + 0x18);
  fVar11 = *(float *)(lVar1 + 0x64c);
  fVar6 = ((fVar15 * fVar7 + fVar4 * fVar20 + fVar10 * fVar6) - fVar5 * *(float *)(lVar2 + 0x1c)) -
          fVar11 * *(float *)(lVar2 + 0x20);
  fVar15 = *(float *)(lVar2 + 0x10);
  fVar20 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x64c) = fVar5;
  *(float *)(lVar1 + 0x648) = fVar6;
  fVar4 = *(float *)(lVar1 + 0x848);
  lVar2 = *(long *)(lVar1 + 0x850);
  fVar7 = *(float *)(lVar2 + 0x18);
  fVar10 = *(float *)(lVar1 + 0x84c);
  fVar5 = ((fVar15 * fVar6 + fVar5 * fVar20 + fVar11 * fVar8) - fVar4 * *(float *)(lVar2 + 0x1c)) -
          fVar10 * *(float *)(lVar2 + 0x20);
  fVar8 = *(float *)(lVar2 + 0x10);
  fVar11 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x84c) = fVar4;
  *(float *)(lVar1 + 0x848) = fVar5;
  fVar6 = *(float *)(lVar1 + 0xa48);
  lVar2 = *(long *)(lVar1 + 0xa50);
  fVar9 = *(float *)(lVar2 + 0x18);
  fVar12 = *(float *)(lVar1 + 0xa4c);
  fVar10 = ((fVar8 * fVar5 + fVar4 * fVar11 + fVar10 * fVar7) - fVar6 * *(float *)(lVar2 + 0x1c)) -
           fVar12 * *(float *)(lVar2 + 0x20);
  fVar16 = *(float *)(lVar2 + 0x10);
  fVar21 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0xa4c) = fVar6;
  *(float *)(lVar1 + 0xa48) = fVar10;
  fVar7 = *(float *)(param_2 + 0x2460);
  fVar4 = *(float *)(lVar1 + 0xc48);
  lVar2 = *(long *)(lVar1 + 0xc50);
  fVar8 = *(float *)(lVar2 + 0x18);
  fVar20 = *(float *)(lVar1 + 0xc4c);
  fVar11 = (param_1 - fVar4 * *(float *)(lVar2 + 0x1c)) - fVar20 * *(float *)(lVar2 + 0x20);
  fVar22 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0xc4c) = fVar4;
  *(float *)(lVar1 + 0xc48) = fVar11;
  fVar5 = *(float *)(lVar1 + 0xe48);
  lVar2 = *(long *)(lVar1 + 0xe50);
  fVar15 = *(float *)(lVar2 + 0x18);
  fVar17 = *(float *)(lVar1 + 0xe4c);
  fVar8 = ((fVar22 * fVar11 + fVar4 * fVar25 + fVar20 * fVar8) - fVar5 * *(float *)(lVar2 + 0x1c)) -
          fVar17 * *(float *)(lVar2 + 0x20);
  fVar22 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0xe4c) = fVar5;
  *(float *)(lVar1 + 0xe48) = fVar8;
  fVar4 = *(float *)(lVar1 + 0x1048);
  lVar2 = *(long *)(lVar1 + 0x1050);
  fVar11 = *(float *)(lVar2 + 0x18);
  fVar20 = *(float *)(lVar1 + 0x104c);
  fVar8 = ((fVar22 * fVar8 + fVar5 * fVar25 + fVar17 * fVar15) - fVar4 * *(float *)(lVar2 + 0x1c)) -
          fVar20 * *(float *)(lVar2 + 0x20);
  fVar22 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x104c) = fVar4;
  *(float *)(lVar1 + 0x1048) = fVar8;
  fVar5 = *(float *)(lVar1 + 0x1248);
  lVar2 = *(long *)(lVar1 + 0x1250);
  fVar15 = *(float *)(lVar2 + 0x18);
  fVar17 = *(float *)(lVar1 + 0x124c);
  fVar8 = ((fVar22 * fVar8 + fVar4 * fVar25 + fVar20 * fVar11) - fVar5 * *(float *)(lVar2 + 0x1c)) -
          fVar17 * *(float *)(lVar2 + 0x20);
  fVar20 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x124c) = fVar5;
  *(float *)(lVar1 + 0x1248) = fVar8;
  fVar4 = *(float *)(lVar1 + 0x1448);
  lVar2 = *(long *)(lVar1 + 0x1450);
  fVar11 = *(float *)(lVar2 + 0x18);
  fVar22 = *(float *)(lVar1 + 0x144c);
  fVar8 = ((fVar20 * fVar8 + fVar5 * fVar25 + fVar17 * fVar15) - fVar4 * *(float *)(lVar2 + 0x1c)) -
          fVar22 * *(float *)(lVar2 + 0x20);
  fVar15 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x144c) = fVar4;
  *(float *)(lVar1 + 0x1448) = fVar8;
  fVar5 = *(float *)(lVar1 + 0x1648);
  lVar2 = *(long *)(lVar1 + 0x1650);
  fVar20 = *(float *)(lVar2 + 0x18);
  fVar17 = *(float *)(lVar1 + 0x164c);
  fVar8 = ((fVar15 * fVar8 + fVar4 * fVar25 + fVar22 * fVar11) - fVar5 * *(float *)(lVar2 + 0x1c)) -
          fVar17 * *(float *)(lVar2 + 0x20);
  fVar11 = *(float *)(lVar2 + 0x10);
  fVar25 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x164c) = fVar5;
  *(float *)(lVar1 + 0x1648) = fVar8;
  fVar4 = *(float *)(lVar1 + 0x1848);
  lVar2 = *(long *)(lVar1 + 0x1850);
  fVar15 = *(float *)(lVar2 + 0x18);
  fVar22 = *(float *)(lVar1 + 0x184c);
  fVar5 = ((fVar11 * fVar8 + fVar5 * fVar25 + fVar17 * fVar20) - fVar4 * *(float *)(lVar2 + 0x1c)) -
          fVar22 * *(float *)(lVar2 + 0x20);
  fVar8 = *(float *)(lVar2 + 0x10);
  fVar20 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x184c) = fVar4;
  *(float *)(lVar1 + 0x1848) = fVar5;
  fVar11 = *(float *)(lVar1 + 0x1a48);
  lVar2 = *(long *)(lVar1 + 0x1a50);
  fVar25 = *(float *)(lVar2 + 0x18);
  fVar18 = *(float *)(lVar1 + 0x1a4c);
  fVar17 = ((fVar8 * fVar5 + fVar4 * fVar20 + fVar22 * fVar15) - fVar11 * *(float *)(lVar2 + 0x1c))
           - fVar18 * *(float *)(lVar2 + 0x20);
  fVar23 = *(float *)(lVar2 + 0x10);
  fVar26 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x1a4c) = fVar11;
  *(float *)(lVar1 + 0x1a48) = fVar17;
  fVar8 = *(float *)(param_2 + 0x2474);
  fVar15 = *(float *)(lVar1 + 0x1c48);
  lVar2 = *(long *)(lVar1 + 0x1c50);
  fVar22 = *(float *)(lVar2 + 0x18);
  fVar13 = *(float *)(lVar1 + 0x1c4c);
  fVar4 = (param_1 - fVar15 * *(float *)(lVar2 + 0x1c)) - fVar13 * *(float *)(lVar2 + 0x20);
  fVar19 = *(float *)(lVar2 + 0x10);
  fVar24 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x1c4c) = fVar15;
  *(float *)(lVar1 + 0x1c48) = fVar4;
  fVar5 = *(float *)(lVar1 + 0x1e48);
  lVar2 = *(long *)(lVar1 + 0x1e50);
  fVar20 = *(float *)(lVar2 + 0x18);
  fVar14 = *(float *)(lVar1 + 0x1e4c);
  fVar15 = ((fVar19 * fVar4 + fVar15 * fVar24 + fVar13 * fVar22) - fVar5 * *(float *)(lVar2 + 0x1c))
           - fVar14 * *(float *)(lVar2 + 0x20);
  fVar19 = *(float *)(lVar2 + 0x10);
  fVar24 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x1e4c) = fVar5;
  *(float *)(lVar1 + 0x1e48) = fVar15;
  fVar4 = *(float *)(lVar1 + 0x2048);
  lVar2 = *(long *)(lVar1 + 0x2050);
  fVar22 = *(float *)(lVar2 + 0x18);
  fVar13 = *(float *)(lVar1 + 0x204c);
  fVar15 = ((fVar19 * fVar15 + fVar5 * fVar24 + fVar14 * fVar20) - fVar4 * *(float *)(lVar2 + 0x1c))
           - fVar13 * *(float *)(lVar2 + 0x20);
  fVar19 = *(float *)(lVar2 + 0x10);
  fVar24 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x204c) = fVar4;
  *(float *)(lVar1 + 0x2048) = fVar15;
  fVar5 = *(float *)(lVar1 + 0x2248);
  lVar2 = *(long *)(lVar1 + 0x2250);
  fVar20 = *(float *)(lVar2 + 0x18);
  fVar14 = *(float *)(lVar1 + 0x224c);
  fVar4 = ((fVar19 * fVar15 + fVar4 * fVar24 + fVar13 * fVar22) - fVar5 * *(float *)(lVar2 + 0x1c))
          - fVar14 * *(float *)(lVar2 + 0x20);
  fVar15 = *(float *)(lVar2 + 0x10);
  fVar22 = *(float *)(lVar2 + 0x14);
  *(float *)(lVar1 + 0x224c) = fVar5;
  *(float *)(lVar1 + 0x2248) = fVar4;
  return fVar3 * (fVar16 * fVar10 + fVar6 * fVar21 + fVar12 * fVar9) +
         fVar7 * (fVar23 * fVar17 + fVar11 * fVar26 + fVar18 * fVar25) +
         fVar8 * (fVar15 * fVar4 + fVar5 * fVar22 + fVar14 * fVar20);
}




undefined8 FUN_10063e92c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                          "../../src/fmod_containers.h",0x25,0);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    iVar2 = 0x20;
    *(undefined4 *)(param_1 + 1) = 0x20;
  }
  else {
    iVar2 = (int)param_1[1];
  }
  iVar4 = *(int *)((long)param_1 + 0xc);
  if (iVar4 == iVar2 + -1) {
    *(int *)(param_1 + 1) = iVar2 << 1;
    lVar1 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,iVar2 << 4,
                          "../../src/fmod_containers.h",0x34,0);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      return 0x26;
    }
    iVar4 = *(int *)((long)param_1 + 0xc);
  }
  uVar3 = *param_2;
  *(uint *)((long)param_1 + 0xc) = iVar4 + 1U;
  *(undefined8 *)(lVar1 + (ulong)(iVar4 + 1U) * 8) = uVar3;
  return 0;
}




undefined8 FUN_10063ea24(long *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x100,
                          "../../src/fmod_containers.h",0x25,0);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    iVar2 = 0x20;
    *(undefined4 *)(param_1 + 1) = 0x20;
  }
  else {
    iVar2 = (int)param_1[1];
  }
  iVar4 = *(int *)((long)param_1 + 0xc);
  if (iVar4 == iVar2 + -1) {
    *(int *)(param_1 + 1) = iVar2 << 1;
    lVar1 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,iVar2 << 4,
                          "../../src/fmod_containers.h",0x34,0);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      return 0x26;
    }
    iVar4 = *(int *)((long)param_1 + 0xc);
  }
  uVar3 = *param_2;
  *(uint *)((long)param_1 + 0xc) = iVar4 + 1U;
  *(undefined8 *)(lVar1 + (ulong)(iVar4 + 1U) * 8) = uVar3;
  return 0;
}




void FUN_10063eb1c(void)

{
  _memcpy(&DAT_101d91910,&DAT_1014a1890,0x130);
  return;
}




void FUN_10063eb44(void)

{
  FUN_1005d8098(&DAT_101e9aff8);
  ___cxa_atexit(FUN_1005d81dc,&DAT_101e9aff8,0x100000000);
  puRam0000000101e9b6d8 = &DAT_101e9b6d0;
  DAT_101e9b6d0 = &DAT_101e9b6d0;
  DAT_101e9b6e0 = 0;
  DAT_101e9b780 = &DAT_101e9aff8;
  DAT_101e9b6a0 = 0x100;
  DAT_101e9b6cc = 0xffffffff;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10063ebb0(void)

{
  DAT_101dbc0f0 = 0;
  DAT_101dbc0f8 = 0x20ab;
  DAT_101dbc0fc = 0xff;
  DAT_101dbc100 = 0;
  DAT_101dbc104 = 0;
  DAT_101dbc108 = 0;
  puRam0000000101dbc138 = &DAT_101dbc130;
  _DAT_101dbc130 = &DAT_101dbc130;
  DAT_101dbc140 = 0;
  FUN_100583c48(&DAT_101dbc150);
  puRam0000000101dbc470 = &DAT_101dbc468;
  _DAT_101dbc468 = &DAT_101dbc468;
  DAT_101dbc478 = 0;
  FUN_100583c48(&DAT_101dbc488);
  DAT_101dbc818 = 0;
  DAT_101dbc820 = 0x20ab;
  DAT_101dbc824 = 0xff;
  DAT_101dbc828 = 0;
  DAT_101dbc82c = 0;
  DAT_101dbc830 = 0;
  DAT_101dbc850 = 0;
  DAT_101dbc858 = 0x20ab;
  DAT_101dbc85c = 0xff;
  DAT_101dbc860 = 0;
  DAT_101dbc864 = 0;
  DAT_101dbc868 = 0;
  DAT_101dbc888 = 0;
  DAT_101dbc890 = 0x20ab;
  DAT_101dbc894 = 0xff;
  DAT_101dbc898 = 0;
  DAT_101dbc89c = 0;
  DAT_101dbc8a0 = 0;
  DAT_101dbc8c0 = 0;
  DAT_101dbc8c8 = 0x20ab;
  DAT_101dbc8cc = 0xff;
  DAT_101dbc8d0 = 0;
  DAT_101dbc8d4 = 0;
  DAT_101dbc8d8 = 0;
  DAT_101dbc8f8 = 0;
  DAT_101dbc900 = 0x20ab;
  DAT_101dbc904 = 0xff;
  DAT_101dbc908 = 0;
  DAT_101dbc90c = 0;
  DAT_101dbc910 = 0;
  DAT_101dbc930 = 0;
  DAT_101dbc938 = 0x20ab;
  DAT_101dbc93c = 0xff;
  DAT_101dbc940 = 0;
  DAT_101dbc944 = 0;
  DAT_101dbc948 = 0;
  DAT_101dbc968 = 0;
  DAT_101dbc970 = 0x20ab;
  DAT_101dbc974 = 0xff;
  DAT_101dbc978 = 0;
  DAT_101dbc97c = 0;
  DAT_101dbc980 = 0;
  DAT_101dbc9a0 = 0;
  DAT_101dbc9a8 = 0x20ab;
  DAT_101dbc9ac = 0xff;
  DAT_101dbc9b0 = 0;
  DAT_101dbc9b4 = 0;
  DAT_101dbc9b8 = 0;
  DAT_101dbc9d8 = 0;
  DAT_101dbc9e0 = 0x20ab;
  DAT_101dbc9e4 = 0xff;
  DAT_101dbc9e8 = 0;
  DAT_101dbc9ec = 0;
  DAT_101dbc9f0 = 0;
  DAT_101dbca10 = 0;
  DAT_101dbca18 = 0x20ab;
  DAT_101dbca1c = 0xff;
  DAT_101dbca20 = 0;
  DAT_101dbca24 = 0;
  DAT_101dbca28 = 0;
  DAT_101dbca48 = 0;
  DAT_101dbca50 = 0x20ab;
  DAT_101dbca54 = 0xff;
  DAT_101dbca58 = 0;
  DAT_101dbca5c = 0;
  DAT_101dbca60 = 0;
  DAT_101dbca80 = 0;
  DAT_101dbca88 = 0x20ab;
  DAT_101dbca8c = 0xff;
  DAT_101dbca90 = 0;
  DAT_101dbca94 = 0;
  DAT_101dbca98 = 0;
  DAT_101dbcab8 = 0;
  DAT_101dbcac0 = 0x20ab;
  DAT_101dbcac4 = 0xff;
  DAT_101dbcac8 = 0;
  DAT_101dbcacc = 0;
  DAT_101dbcad0 = 0;
  DAT_101dbcaf0 = 0;
  DAT_101dbcaf8 = 0x20ab;
  DAT_101dbcafc = 0xff;
  DAT_101dbcb00 = 0;
  DAT_101dbcb04 = 0;
  DAT_101dbcb08 = 0;
  DAT_101dbcb28 = 0;
  DAT_101dbcb30 = 0x20ab;
  DAT_101dbcb34 = 0xff;
  DAT_101dbcb38 = 0;
  DAT_101dbcb3c = 0;
  DAT_101dbcb40 = 0;
  DAT_101dbcb60 = 0;
  DAT_101dbcb68 = 0x20ab;
  DAT_101dbcb6c = 0xff;
  DAT_101dbcb70 = 0;
  DAT_101dbcb74 = 0;
  DAT_101dbcb78 = 0;
  return;
}




void FUN_10063eda0(undefined1 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x28);
  puVar2 = (undefined8 *)FUN_1004e83c4(pvVar1,1);
  *puVar2 = &PTR_FUN_1014a4d28;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = param_1;
  FUN_1004e82c0();
  FUN_1004e8330(pvVar1);
  return;
}




void FUN_10063edec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a4d28;
  return;
}




void FUN_10063ee00(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100658c44();
  if ((uVar1 & 1) == 0) {
    FUN_100658aec(*(undefined1 *)(param_1 + 0x20));
  }
  operator_new(0x20);
  uVar2 = FUN_10065b450();
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}




void FUN_10063ee3c(long param_1)

{
  FUN_10065ba38(*(undefined8 *)(param_1 + 0x18));
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_100658c58();
  return;
}




void FUN_10063ee78(void)

{
  return;
}




void FUN_10063ee7c(long param_1)

{
  FUN_10065ba38(*(undefined8 *)(param_1 + 0x18));
  return;
}




undefined8 FUN_10063ee84(void)

{
  return 1;
}




void FUN_10063ee8c(long param_1)

{
  FUN_10065b4e4(*(undefined8 *)(param_1 + 0x18));
  return;
}




undefined8 FUN_10063ee94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_10063ee9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a4d78;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  return;
}




void FUN_10063eeb4(void)

{
  return;
}




void FUN_10063eeb8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063eebc);
  (*pcVar1)();
}




void FUN_10063eebc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063eec0);
  (*pcVar1)();
}




void FUN_10063eec0(long param_1)

{
  *(undefined2 *)(param_1 + 8) = 0xffff;
  FUN_10063ef80(DAT_101dbd2f8,param_1);
  return;
}




undefined8 FUN_10063eedc(void)

{
  return 1;
}




void FUN_10063eee4(long param_1,long param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(((int)param_2 - (int)DAT_101dbd2f8) - 0x10U >> 6);
  if (param_2 == 0) {
    uVar1 = 0xffff;
  }
  *(undefined2 *)(param_1 + 8) = uVar1;
  return;
}




long FUN_10063ef0c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(ushort *)(param_1 + 8) != 0xffff) {
    lVar1 = DAT_101dbd2f8 + (ulong)*(ushort *)(param_1 + 8) * 0x40 + 0x10;
  }
  return lVar1;
}




void FUN_10063ef34(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1014a4dc0;
  lVar1 = 0x10;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x40;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x800);
  param_1[0x4002] = 0x7ff0000;
  *(undefined4 *)(param_1 + 0x4004) = 0;
  return;
}




void FUN_10063ef78(void)

{
  return;
}




void FUN_10063ef80(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x20020) = *(int *)(param_1 + 0x20020) + -1;
  iVar4 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x20010) == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 6);
    *(short *)(param_1 + 0x20012) = sVar3;
    *(short *)(param_1 + 0x20010) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x20012);
    uVar2 = (undefined2)((uint)((int)param_2 - iVar4) >> 6);
    *(undefined2 *)(param_1 + 0x20012) = uVar2;
    *(undefined2 *)(param_1 + 0x10 + (ulong)uVar1 * 0x40) = uVar2;
  }
  *(int *)(param_1 + 0x20014) = *(int *)(param_1 + 0x20014) + -1;
  return;
}




undefined8 FUN_10063f018(void)

{
  return 1;
}




void FUN_10063f020(undefined8 param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffff7;
  return;
}




void FUN_10063f030(undefined8 param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 4;
  return;
}




void FUN_10063f040(undefined8 param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb;
  return;
}




void FUN_10063f050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a4de0;
  *(undefined1 *)((long)puVar1 + 10) = 1;
  return;
}




void FUN_10063f078(long param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) =
       *(uint *)(param_2 + 0x84) & 0xfffffffb | (uint)*(byte *)(param_1 + 10) << 2;
  return;
}




void FUN_10063f090(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 10) = param_2;
  return;
}




void FUN_10063f098(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a4e28;
  *(undefined1 *)((long)puVar1 + 10) = 1;
  return;
}




void FUN_10063f0c0(long param_1,long param_2)

{
  *(uint *)(param_2 + 0x84) =
       *(uint *)(param_2 + 0x84) & 0xffffffef | (uint)*(byte *)(param_1 + 10) << 4;
  return;
}




void FUN_10063f0d8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 10) = param_2;
  return;
}




void FUN_10063f0e0(undefined8 param_1,undefined8 param_2)

{
  FUN_10064249c(param_2);
  return;
}




void FUN_10063f0e8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




void FUN_10063f0f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a4e70;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}




bool FUN_10063f11c(long param_1)

{
  return *(float *)(param_1 + 0x18) == *(float *)(param_1 + 0xc);
}




void FUN_10063f130(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




float FUN_10063f138(long param_1)

{
  if (*(float *)(param_1 + 0xc) == 0.0) {
    return 1.0;
  }
  return *(float *)(param_1 + 0x18) / *(float *)(param_1 + 0xc);
}




undefined1  [16] FUN_10063f158(long param_1)

{
  float fVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar3;
  undefined1 auVar2 [16];
  
  fVar3 = *(float *)(param_1 + 0xc);
  fVar1 = 1.0;
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    if (fVar3 != 0.0) {
      fVar1 = *(float *)(param_1 + 0x18) / fVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010063f184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(fVar1,0,0x3f800000,0x3f800000);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  if (fVar3 == 0.0) {
    return ZEXT816(0x3f800000);
  }
  return ZEXT416((uint)(*(float *)(param_1 + 0x18) / fVar3));
}




void FUN_10063f19c(float param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return;
}




void FUN_10063f1b4(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_10063f1bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063f1ec_1014a4eb8;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  return;
}




void FUN_10063f1ec(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_thunk_FUN_10063f1ec_1014a4eb8;
  plVar2 = (long *)param_1[5];
  if ((long *)param_1[5] != (long *)0x0) {
    do {
      plVar1 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_10063eec0(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  plVar2 = (long *)param_1[7];
  if ((long *)param_1[7] != (long *)0x0) {
    do {
      plVar1 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_10063eec0(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10063eeb4(param_1);
  return;
}




void thunk_FUN_10063f1ec(void)

{
  FUN_10063f1ec();
  return;
}




void FUN_10063f284(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063f1ec();
  operator_delete(pvVar1);
  return;
}




void FUN_10063f298(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}




void FUN_10063f2a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ushort uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long in_stack_00000000;
  
  *(long *)(param_1 + 0x30) = in_stack_00000000;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  plVar9 = (long *)(param_1 + 0x38);
  *plVar9 = in_stack_00000000;
  plVar1 = (long *)((ulong)&stack0x00000000 | 8);
  plVar2 = (long *)(param_1 + 0x30);
  lVar3 = DAT_101dbd2f8;
  lVar4 = in_stack_00000000;
  while (lVar4 != 0) {
    uVar6 = *(ushort *)(lVar3 + 0x20010);
    if (uVar6 == *(ushort *)(lVar3 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar3 + 0x10 + (ulong)uVar6 * 0x40);
    }
    DAT_101dbd2f8 = lVar3;
    *(ushort *)(lVar3 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    puVar5 = (undefined8 *)FUN_10063ee9c();
    *(undefined8 *)((long)puVar5 + 0x14) = 0;
    *(undefined8 *)((long)puVar5 + 0xc) = 0;
    *puVar5 = &PTR_thunk_FUN_10063f1ec_1014a4eb8;
    puVar5[5] = 0;
    puVar5[4] = 0;
    plVar7 = puVar5 + 6;
    puVar5[7] = 0;
    *plVar7 = 0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    *plVar2 = (long)puVar5;
    *plVar9 = (long)puVar5;
    lVar8 = *plVar1;
    puVar5[4] = lVar4;
    plVar9 = puVar5 + 7;
    *plVar9 = lVar8;
    puVar5[5] = lVar4;
    *plVar7 = lVar8;
    plVar1 = plVar1 + 1;
    plVar2 = plVar7;
    lVar3 = DAT_101dbd2f8;
    lVar4 = lVar8;
  }
  DAT_101dbd2f8 = lVar3;
  return;
}




undefined8 FUN_10063f3bc(long param_1)

{
  undefined8 uVar1;
  
  if (((*(long **)(param_1 + 0x20) == (long *)0x0) ||
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(), (int)uVar1 != 0)) &&
     ((*(long **)(param_1 + 0x30) == (long *)0x0 ||
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(), (int)uVar1 != 0)))) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_10063f40c(long param_1)

{
  long *plVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
    *(long **)(param_1 + 0x20) = plVar1;
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    } while (plVar1 != (long *)0x0);
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    *(long **)(param_1 + 0x30) = plVar1;
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    } while (plVar1 != (long *)0x0);
  }
  return;
}




void FUN_10063f494(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = NEON_fminnm(*(float *)(param_2 + 0x18) + (float)param_1,*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  plVar2 = *(long **)(param_2 + 0x20);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(param_1,plVar2,param_3);
    if ((*(long **)(param_2 + 0x20) != (long *)0x0) &&
       (iVar1 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(), iVar1 != 0)) {
      uVar3 = (**(code **)(**(long **)(param_2 + 0x20) + 0x28))();
      *(undefined8 *)(param_2 + 0x20) = uVar3;
    }
  }
  plVar2 = *(long **)(param_2 + 0x30);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(param_1,plVar2,param_3);
    if ((*(long **)(param_2 + 0x30) != (long *)0x0) &&
       (iVar1 = (**(code **)(**(long **)(param_2 + 0x30) + 0x10))(), iVar1 != 0)) {
      uVar3 = (**(code **)(**(long **)(param_2 + 0x30) + 0x28))();
      *(undefined8 *)(param_2 + 0x30) = uVar3;
    }
  }
  return;
}




void FUN_10063f564(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063f598_1014a4f00;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 1;
  return;
}




void FUN_10063f598(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_thunk_FUN_10063f598_1014a4f00;
  plVar2 = (long *)param_1[5];
  if ((long *)param_1[5] != (long *)0x0) {
    do {
      plVar1 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_10063eec0(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_10063eeb4(param_1);
  return;
}




void thunk_FUN_10063f598(void)

{
  FUN_10063f598();
  return;
}




void FUN_10063f600(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10063f598();
  operator_delete(pvVar1);
  return;
}




void FUN_10063f614(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = param_2;
  plVar2 = (long *)register0x00000008;
  do {
    lVar1 = *plVar2;
    FUN_10063eee4(param_2,lVar1);
    param_2 = lVar1;
    plVar2 = plVar2 + 1;
  } while (lVar1 != 0);
  return;
}




void FUN_10063f664(long param_1)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0xffff;
  return;
}




bool FUN_10063f674(long param_1)

{
  return *(long *)(param_1 + 0x20) == 0;
}




void FUN_10063f684(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = NEON_fminnm(*(float *)(param_2 + 0x18) + (float)param_1,*(undefined4 *)(param_2 + 0xc));
  *(undefined4 *)(param_2 + 0x18) = uVar5;
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      iVar1 = (**(code **)(*plVar3 + 0x10))();
      (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(param_1,*(long **)(param_2 + 0x20),param_3);
      if ((*(long **)(param_2 + 0x20) != (long *)0x0) &&
         (iVar2 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(), iVar2 != 0)) {
        uVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0x28))();
        *(undefined8 *)(param_2 + 0x20) = uVar4;
      }
      plVar3 = *(long **)(param_2 + 0x20);
      if (iVar1 == 0) {
        if (plVar3 != (long *)0x0) {
          return;
        }
        break;
      }
    } while (plVar3 != (long *)0x0);
    iVar2 = *(int *)(param_2 + 0x30);
    iVar1 = iVar2 + 0x10000;
    *(int *)(param_2 + 0x30) = iVar1;
    iVar2 = iVar2 * 0x10000;
    if ((iVar2 == -0x10000) || (iVar1 >> 0x10 < iVar2 >> 0x10)) {
      plVar3 = *(long **)(param_2 + 0x28);
      if (plVar3 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        do {
          (**(code **)(*plVar3 + 0x20))(plVar3);
          plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3);
        } while (plVar3 != (long *)0x0);
        uVar4 = *(undefined8 *)(param_2 + 0x28);
      }
      *(undefined8 *)(param_2 + 0x20) = uVar4;
    }
  }
  return;
}




void FUN_10063f7a0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
    } while (plVar2 != (long *)0x0);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(uint *)(param_1 + 0x30) = (uint)*(ushort *)(param_1 + 0x30);
  return;
}




void FUN_10063f808(float param_1,long param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0xc);
  fVar4 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar2);
  *(float *)(param_2 + 0x18) = fVar4;
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
  }
  else {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  uVar1 = *(uint *)(param_3 + 0x84);
  if ((int)(fVar3 * 255.0) == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_3 + 0x84) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(fVar3 * 255.0) & 0xffU) << 7;
  FUN_1000200a0(param_3);
  return;
}




void FUN_10063f8ac(float param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_2 + 0xc);
  fVar5 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar3);
  *(float *)(param_2 + 0x18) = fVar5;
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar4 = 1.0;
    if (fVar3 != 0.0) {
      fVar4 = fVar5 / fVar3;
    }
  }
  else {
    fVar4 = 1.0;
    if (fVar3 != 0.0) {
      fVar4 = fVar5 / fVar3;
    }
    fVar4 = (float)(**(code **)(param_2 + 0x10))(fVar4,0,0x3f800000,0x3f800000);
  }
  uVar2 = (uint)(255.0 - fVar4 * 255.0);
  uVar1 = *(uint *)(param_3 + 0x84);
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_3 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_1000200a0(param_3);
  return;
}




void FUN_10063f950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a4f48;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}




void FUN_10063f984(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x24) = *param_2;
  return;
}




void FUN_10063f990(float param_1,long param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0xc);
  fVar4 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar2);
  *(float *)(param_2 + 0x18) = fVar4;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(param_3 + 0x40);
    *(undefined1 *)(param_2 + 0x2c) = 1;
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
  }
  else {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  fVar2 = (float)*(undefined8 *)(param_2 + 0x1c) + (float)*(undefined8 *)(param_2 + 0x24) * fVar3;
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * fVar3;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x44)) && !NAN(fVar4))) {
    bVar1 = *(float *)(param_3 + 0x44) == fVar4;
  }
  if (!bVar1) {
    *(ulong *)(param_3 + 0x40) = CONCAT44(fVar4,fVar2);
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_10063fa4c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_10063fa58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a4f90;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined1 *)((long)puVar1 + 0x34) = 0;
  return;
}




void FUN_10063fa90(float param_1,long param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,*(undefined4 *)(param_2 + 0xc));
  *(float *)(param_2 + 0x18) = fVar4;
  if (*(char *)(param_2 + 0x34) == '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x1c) = uVar3;
    *(undefined1 *)(param_2 + 0x34) = 1;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x1c);
  }
  fVar5 = fVar4 * fVar4 * fVar4;
  fVar2 = (float)uVar3 + (float)*(undefined8 *)(param_2 + 0x2c) * fVar5 +
          (float)*(undefined8 *)(param_2 + 0x24) * fVar4;
  fVar4 = (float)((ulong)uVar3 >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) * fVar5 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * fVar4;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x44)) && !NAN(fVar4))) {
    bVar1 = *(float *)(param_3 + 0x44) == fVar4;
  }
  if (!bVar1) {
    *(ulong *)(param_3 + 0x40) = CONCAT44(fVar4,fVar2);
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_10063fb00(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x24) = *param_2;
  return;
}




void FUN_10063fb0c(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x2c) = *param_2;
  return;
}




void FUN_10063fb18(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}




void FUN_10063fb24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a4fd8;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}




void FUN_10063fb5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a4fd8;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  return;
}




void FUN_10063fb90(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  return;
}




void FUN_10063fb9c(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10064e634(param_4,param_5,param_6,param_7);
  *(undefined4 *)(param_3 + 0x1c) = uVar1;
  *(undefined4 *)(param_3 + 0x20) = param_2;
  return;
}




void FUN_10063fbd4(float param_1,long param_2,long param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0xc);
  fVar4 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar2);
  *(float *)(param_2 + 0x18) = fVar4;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    *(ulong *)(param_2 + 0x24) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                  (float)*(undefined8 *)(param_3 + 0x40) - (float)*(undefined8 *)(param_2 + 0x1c));
    *(undefined1 *)(param_2 + 0x2c) = 1;
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
  }
  else {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  fVar2 = (float)*(undefined8 *)(param_2 + 0x1c) +
          (float)*(undefined8 *)(param_2 + 0x24) * (1.0 - fVar3);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20) +
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * (1.0 - fVar3);
  bVar1 = false;
  if ((*(float *)(param_3 + 0x40) == fVar2) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x44)) && !NAN(fVar4))) {
    bVar1 = *(float *)(param_3 + 0x44) == fVar4;
  }
  if (!bVar1) {
    *(ulong *)(param_3 + 0x40) = CONCAT44(fVar4,fVar2);
    FUN_1000200a0(param_3);
    return;
  }
  return;
}




void FUN_10063fca0(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_10063fcac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5020;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  *(undefined1 *)((long)puVar1 + 0x24) = 0;
  return;
}




void FUN_10063fce0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  return;
}




void FUN_10063fce8(float param_1,long param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = *(float *)(param_2 + 0xc);
  fVar4 = (float)NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar2);
  *(float *)(param_2 + 0x18) = fVar4;
  if (*(char *)(param_2 + 0x24) == '\0') {
    fVar5 = *(float *)(param_2 + 0x1c);
    fVar6 = (float)(*(uint *)(param_3 + 0x84) >> 7 & 0xff) * 0.003921569 - fVar5;
    *(float *)(param_2 + 0x20) = fVar6;
    *(undefined1 *)(param_2 + 0x24) = 1;
  }
  else {
    fVar5 = *(float *)(param_2 + 0x1c);
    fVar6 = *(float *)(param_2 + 0x20);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
  }
  else {
    fVar3 = 1.0;
    if (fVar2 != 0.0) {
      fVar3 = fVar4 / fVar2;
    }
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  fVar2 = (float)NEON_fminnm(fVar5 + fVar6 * (1.0 - fVar3),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = *(uint *)(param_3 + 0x84);
  if ((int)(fVar2 * 255.0) == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_3 + 0x84) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(fVar2 * 255.0) & 0xffU) << 7;
  FUN_1000200a0(param_3);
  return;
}




void FUN_10063fde8(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_10063fdf4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10063ee9c();
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5068;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0xffffffff;
  *(undefined1 *)((long)puVar1 + 0x34) = 0;
  return;
}




void FUN_10063fe34(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = *param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  return;
}




void FUN_10063fe48(float param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  
  fVar10 = *(float *)(param_2 + 0xc);
  uVar6 = NEON_fminnm(*(float *)(param_2 + 0x18) + param_1,fVar10);
  *(undefined4 *)(param_2 + 0x18) = uVar6;
  if (*(char *)(param_2 + 0x34) == '\0') {
    puVar3 = (uint *)FUN_100652df4(*(undefined8 *)(param_2 + 0x20));
    uVar5 = *puVar3;
    *(uint *)(param_2 + 0x2c) = uVar5;
    *(undefined1 *)(param_2 + 0x34) = 1;
    fVar10 = *(float *)(param_2 + 0xc);
  }
  else {
    uVar5 = (uint)*(byte *)(param_2 + 0x2c);
  }
  bVar1 = *(byte *)(param_2 + 0x28);
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    pcVar4 = (code *)0x0;
    if (fVar10 == 0.0) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = *(float *)(param_2 + 0x18) / fVar10;
    }
  }
  else {
    fVar7 = 1.0;
    if (fVar10 != 0.0) {
      fVar7 = *(float *)(param_2 + 0x18) / fVar10;
    }
    fVar7 = (float)(**(code **)(param_2 + 0x10))(fVar7,0,0x3f800000,0x3f800000);
    pcVar4 = *(code **)(param_2 + 0x10);
    fVar10 = *(float *)(param_2 + 0xc);
  }
  bVar11 = *(byte *)(param_2 + 0x2d);
  bVar2 = *(byte *)(param_2 + 0x29);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)0x0;
    if (fVar10 == 0.0) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = *(float *)(param_2 + 0x18) / fVar10;
    }
  }
  else {
    fVar8 = 1.0;
    if (fVar10 != 0.0) {
      fVar8 = *(float *)(param_2 + 0x18) / fVar10;
    }
    fVar8 = (float)(*pcVar4)(fVar8,0,0x3f800000,0x3f800000);
    pcVar4 = *(code **)(param_2 + 0x10);
    fVar10 = *(float *)(param_2 + 0xc);
  }
  fVar13 = (float)NEON_ucvtf((uint)bVar11);
  fVar12 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0x2e));
  bVar11 = *(byte *)(param_2 + 0x2a);
  fVar9 = 1.0;
  if (pcVar4 == (code *)0x0) {
    if (fVar10 != 0.0) {
      fVar9 = *(float *)(param_2 + 0x18) / fVar10;
    }
  }
  else {
    if (fVar10 != 0.0) {
      fVar9 = *(float *)(param_2 + 0x18) / fVar10;
    }
    fVar9 = (float)(*pcVar4)(fVar9,0,0x3f800000,0x3f800000);
  }
  local_68 = (undefined1)
             (int)((float)(uVar5 & 0xff) + ((float)bVar1 - (float)(uVar5 & 0xff)) * fVar7);
  local_67 = (undefined1)(int)(fVar13 + ((float)bVar2 - fVar13) * fVar8);
  local_66 = (undefined1)(int)(fVar12 + ((float)bVar11 - fVar12) * fVar9);
  local_65 = 0xff;
  FUN_100652dd4(*(undefined8 *)(param_2 + 0x20),&local_68,*(undefined4 *)(param_2 + 0x30));
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}




void thunk_FUN_10063eeb4(void)

{
  FUN_10063eeb4();
  return;
}

