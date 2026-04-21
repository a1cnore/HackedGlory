// functions/10058 — 183 functions
#include "GameKindred.h"




void FUN_1005801c8(long *param_1)

{
  int iVar1;
  ulong local_70;
  long local_68;
  undefined8 local_60;
  int local_54;
  long local_50;
  undefined8 local_48;
  
  local_48 = 0;
  iVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xffffffff,&local_48);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*(long *)param_1[4] + 0x118))((long *)param_1[4],0xfffffffc,&local_50),
     iVar1 == 0)) {
    FUN_1005cea38(local_48,&local_54,0,1);
    if (0 < local_54) {
      iVar1 = 0;
      do {
        FUN_1005c96c0(local_48,iVar1,&local_68,&local_60,0,1);
        FUN_100614c10(local_60,&local_70);
        if (local_70 == ((long)*(short *)((long)param_1 + 0x1b4) | 0xfeed0000U)) {
          FUN_1005ceac4(local_48,local_68,local_60);
          iVar1 = iVar1 + -1;
          local_54 = local_54 + -1;
        }
        else if ((local_68 == local_50) && (*(char *)((long)param_1 + 0x1b6) == '\0')) {
          FUN_1006149c8(0x3f800000,local_60,0,1,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_54);
    }
    FUN_1005ddaf8(*(undefined8 *)(param_1[1] + 0x6b8),(long)*(short *)((long)param_1 + 0x1b4));
  }
  return;
}




undefined8 FUN_10058030c(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  long local_58;
  
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (param_2 == param_1) {
    return 0x1f;
  }
  if ((long *)param_2[4] == param_1) {
    return 0;
  }
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    FUN_10057097c(lVar5,2);
  }
  plVar1 = param_2 + 0x26;
  plVar2 = (long *)param_2[0x27];
  *plVar2 = param_2[0x26];
  *(long **)(param_2[0x26] + 8) = plVar2;
  param_2[0x26] = (long)plVar1;
  param_2[0x27] = (long)plVar1;
  uVar3 = (**(code **)(*param_2 + 0x118))(param_2,0,&local_58);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005cecf4(local_58,0,1), (int)uVar3 == 0)) {
    lVar4 = param_1[0x2a];
    param_2[0x26] = (long)(param_1 + 0x29);
    param_2[0x27] = lVar4;
    param_1[0x2a] = (long)plVar1;
    *(long **)param_2[0x27] = plVar1;
    param_2[0x28] = (long)param_2;
    uVar3 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffc,&local_60);
    if ((int)uVar3 == 0) {
      if (local_58 != 0) {
        uVar3 = FUN_1005ce188(local_60,local_58,param_4,0,0,0);
        if ((int)uVar3 != 0) goto LAB_100580470;
        if (param_3 != 0) {
          FUN_10057fb00(param_2,local_60);
        }
      }
      param_2[4] = (long)param_1;
      FUN_100580718(param_2,*(uint *)(param_1 + 9) >> 4 & 1);
      uVar3 = FUN_10057fba0(param_2);
      if ((int)uVar3 == 0) {
        FUN_1005809f0(param_2);
        uVar3 = 0;
      }
    }
  }
LAB_100580470:
  if ((lVar5 != 0) && (lVar5 != 0)) {
    FUN_100570990(lVar5,2);
  }
  return uVar3;
}




undefined8 FUN_1005804a4(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005804c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  long local_50;
  int local_44;
  
  uVar1 = FUN_10062ab8c();
  if (((int)uVar1 == 0) &&
     ((((*(byte *)((long)param_1 + 0x1ec) >> 4 & 1) == 0 ||
       (uVar1 = FUN_1006294f4(param_1,param_2,param_3), (int)uVar1 == 0)) &&
      (uVar1 = (**(code **)(*param_1 + 0x120))(param_1,&local_44), (int)uVar1 == 0)))) {
    if (0 < local_44) {
      iVar4 = 0;
      do {
        uVar1 = (**(code **)(*param_1 + 0x118))(param_1,iVar4,&local_50);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((local_50 != 0) && (*(int *)(local_50 + 0xe8) == 0x23)) {
          uVar5 = 0x3f800000;
          if (param_1[4] != 0) {
            uVar5 = *(undefined4 *)(param_1[4] + 0x1a0);
          }
          FUN_1005cef0c(uVar5,local_50,8);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_44);
    }
    if ((*(uint *)(param_1 + 9) >> 2 & 1) == 0) {
      iVar4 = *(int *)(param_1[1] + 0x15a40);
      if (iVar4 < 1) {
        uVar1 = 0;
      }
      else {
        lVar2 = 0;
        pcVar3 = (char *)(param_1[1] + 0x1572c);
        uVar1 = 0;
        do {
          if (*pcVar3 != '\0') goto LAB_1005805e8;
          lVar2 = lVar2 + 1;
          pcVar3 = pcVar3 + 0x70;
        } while (lVar2 < iVar4);
      }
    }
    else {
LAB_1005805e8:
      uVar1 = 0;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffb;
    }
  }
  return uVar1;
}




undefined8 FUN_100580614(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x148); puVar2 != (undefined8 *)(param_1 + 0x148);
      puVar2 = (undefined8 *)*puVar2) {
    (**(code **)(*(long *)puVar2[2] + 8))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x160);
  while (puVar2 != (undefined8 *)(param_1 + 0x160)) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined8 *)*puVar2;
    (**(code **)(*(long *)*puVar1 + 8))();
  }
  return 0;
}




void FUN_10058068c(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 local_28;
  
  uVar1 = *(uint *)(param_1 + 9) | 1;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 9) & 0xfffffffe;
  }
  *(uint *)(param_1 + 9) = uVar1;
  if (param_1[4] == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(param_1[4] + 0x48) >> 4 & 1;
  }
  FUN_100580718(param_1,bVar3);
  iVar2 = (**(code **)(*param_1 + 0x118))(param_1,0,&local_28);
  if (iVar2 == 0) {
    FUN_1005c986c(local_28,param_2 ^ 1,1);
  }
  return;
}




undefined8 FUN_100580718(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 local_31;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar1 = uVar2 | 0x10;
  if (param_2 == 0) {
    uVar1 = uVar2 & 0xffffffef;
  }
  uVar3 = uVar2 | 0x10;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar1;
  }
  *(uint *)(param_1 + 0x48) = uVar3;
  plVar4 = *(long **)(param_1 + 0x148);
  if (plVar4 != (long *)(param_1 + 0x148)) {
    while( true ) {
      FUN_100580718(plVar4[2],uVar3 >> 4 & 1);
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)(param_1 + 0x148)) break;
      uVar3 = *(uint *)(param_1 + 0x48);
    }
  }
  for (puVar5 = *(undefined8 **)(param_1 + 0x160); puVar5 != (undefined8 *)(param_1 + 0x160);
      puVar5 = (undefined8 *)*puVar5) {
    plVar4 = (long *)puVar5[2];
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_31);
    (**(code **)(*plVar4 + 0x10))(plVar4,local_31);
  }
  return 0;
}




undefined8 FUN_1005807dc(long param_1,byte *param_2)

{
  if (param_2 != (byte *)0x0) {
    *param_2 = (byte)*(undefined4 *)(param_1 + 0x48) & 1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100580804(undefined1 param_1 [16],long param_2,ulong param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  uVar4 = param_1[1];
  uVar3 = param_1[0];
  fVar1 = param_1._0_4_;
  if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
    uVar2 = 0x1d;
  }
  else {
    fVar8 = *(float *)(param_2 + 0x30);
    *(float *)(param_2 + 0x30) = fVar1;
    if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    fVar7 = *(float *)(param_2 + 0xd8);
    uVar2 = FUN_1006149c8(SUB41((1.0 - *(float *)(param_2 + 0xa8)) *
                                (1.0 - *(float *)(param_2 + 0xb8)) *
                                (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar3))) *
                                ((1.0 - fVar7) + fVar7 * *(float *)(param_2 + 0x60)) *
                                ((1.0 - fVar7) + fVar7 * *(float *)(param_2 + 0x8c)),0),
                          *(undefined8 *)(*(long *)(param_2 + 0x240) + 0x1c8),
                          (ulong)((*(uint *)(param_2 + 0x48) & 0x30) == 0) << 6,1,0);
    if ((int)uVar2 == 0) {
      if (*(long *)(param_2 + 0x1c8) != 0) {
        FUN_1006149c8((char)*(undefined4 *)(param_2 + 0x1b8),*(long *)(param_2 + 0x1c8),0x40,1,0);
      }
      if (*(long *)(param_2 + 0x1d0) != 0) {
        FUN_1006149c8((char)*(undefined4 *)(param_2 + 0x1bc),*(long *)(param_2 + 0x1d0),0x40,1,0);
      }
      if (*(long *)(param_2 + 0x1d8) != 0) {
        FUN_1006149c8((char)*(undefined4 *)(param_2 + 0x1c0),*(long *)(param_2 + 0x1d8),0x40,1,0);
      }
      if (*(long *)(param_2 + 0x1e0) != 0) {
        FUN_1006149c8((char)*(undefined4 *)(param_2 + 0x1c4),*(long *)(param_2 + 0x1e0),0x40,1,0);
      }
      if (((fVar8 == fVar1) && ((param_3 & 1) == 0)) ||
         (uVar2 = FUN_10062ab8c(param_2,0,0,param_3), (int)uVar2 == 0)) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}




undefined8 FUN_100580964(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
    return 0;
  }
  return 0x1f;
}




void FUN_100580988(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 local_38;
  
  iVar1 = FUN_10062adb8();
  if (iVar1 == 0) {
    FUN_1005809f0(param_2);
    iVar1 = (**(code **)(*param_2 + 0x118))(param_2,0,&local_38);
    if (iVar1 == 0) {
      FUN_1005cf940(param_1,local_38);
    }
  }
  return;
}




undefined8 FUN_1005809f0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 local_34;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(*(long *)(param_1 + 0x20) + 0x1b0);
  }
  *(float *)(param_1 + 0x1b0) = fVar3 * *(float *)(param_1 + 0x34);
  for (puVar2 = *(undefined8 **)(param_1 + 0x148); puVar2 != (undefined8 *)(param_1 + 0x148);
      puVar2 = (undefined8 *)*puVar2) {
    FUN_1005809f0(puVar2[2]);
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x160); puVar2 != (undefined8 *)(param_1 + 0x160);
      puVar2 = (undefined8 *)*puVar2) {
    uVar1 = puVar2[2];
    FUN_1005849a8(uVar1,&local_34);
    FUN_100581c98(local_34,uVar1);
  }
  return 0;
}




undefined8 FUN_100580a94(long *param_1,char *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *param_2 = '\0';
  iVar7 = *(int *)((long)param_1 + 0x194);
  if (0 < iVar7) {
    iVar6 = 0;
    plVar1 = param_1 + 0x2c;
    do {
      plVar3 = (long *)*plVar1;
      if (plVar3 == plVar1) {
        return 0x1f;
      }
      iVar4 = -1;
      while (iVar4 = iVar4 + 1, iVar6 != iVar4) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == plVar1) {
          return 0x1f;
        }
      }
      FUN_1006261b0(*(undefined8 *)(plVar3[2] + 0x50),param_2);
      if (*param_2 != '\0') {
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  plVar1 = param_1 + 0x29;
  iVar7 = -1;
  plVar3 = plVar1;
  do {
    plVar3 = (long *)*plVar3;
    iVar7 = iVar7 + 1;
  } while (plVar3 != plVar1);
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      iVar4 = -1;
      plVar3 = plVar1;
      do {
        plVar3 = (long *)*plVar3;
        iVar4 = iVar4 + 1;
      } while (plVar3 != plVar1);
      if (iVar4 <= iVar6) {
        return 0x1f;
      }
      if (0 < iVar4) {
        iVar5 = 0;
        plVar3 = plVar1;
        do {
          plVar3 = (long *)*plVar3;
          if (iVar6 == iVar5) {
            param_1 = (long *)plVar3[2];
          }
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      uVar2 = (**(code **)(*param_1 + 0xa0))(param_1,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  return 0;
}




undefined8 FUN_100580bf0(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x194);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100580c14(long param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0x1f;
  }
  *param_3 = 0;
  plVar1 = *(long **)(param_1 + 0x160);
  if (plVar1 != (long *)(param_1 + 0x160)) {
    param_2 = param_2 + 1;
    do {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        *param_3 = *(undefined8 *)(plVar1[2] + 0x50);
        return 0;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)(param_1 + 0x160));
    return 0x1f;
  }
  return 0x1f;
}




undefined8 FUN_100580c70(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = -1;
    plVar2 = (long *)(param_1 + 0x148);
    do {
      plVar2 = (long *)*plVar2;
      iVar1 = iVar1 + 1;
    } while (plVar2 != (long *)(param_1 + 0x148));
    *param_2 = iVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100580ca4(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 0x148);
  iVar3 = -1;
  plVar4 = plVar2;
  do {
    plVar4 = (long *)*plVar4;
    iVar3 = iVar3 + 1;
  } while (plVar4 != plVar2);
  uVar1 = 0x1f;
  if (((param_3 != (undefined8 *)0x0) && (-1 < param_2)) && (param_2 < iVar3)) {
    if (0 < iVar3) {
      do {
        plVar2 = (long *)*plVar2;
        if (param_2 == 0) {
          *param_3 = plVar2[2];
        }
        iVar3 = iVar3 + -1;
        param_2 = param_2 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8
FUN_100580e98(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             int param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 == 0) && (*(long *)(param_1 + 0x40) == 0)) {
    uVar1 = 0;
  }
  else if ((param_6 == 0) ||
          (uVar1 = FUN_10062af80(param_1,param_2,param_3,param_4,param_5,1), (int)uVar1 == 0)) {
    lVar2 = *(long *)(param_1 + 0x248);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x240);
    }
    uVar1 = FUN_100614548(*(undefined8 *)(lVar2 + 0x1c8),param_2,param_3,param_4,param_5,0x40,1);
    return uVar1;
  }
  return uVar1;
}




undefined8 FUN_100580f48(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  float fVar6;
  undefined4 local_6c;
  byte local_68 [4];
  undefined4 local_64;
  
  uVar2 = (uint)param_3;
  if (uVar2 < 4) {
    for (puVar4 = *(undefined8 **)(param_2 + 0x148); puVar4 != (undefined8 *)(param_2 + 0x148);
        puVar4 = (undefined8 *)*puVar4) {
      FUN_100580f48(param_1,puVar4[2],param_3);
    }
    fVar6 = (float)param_1;
    if (fVar6 == 0.0) {
      *(undefined4 *)(param_2 + 0x1e8) = 0;
    }
    plVar5 = *(long **)(param_2 + 0x160);
    if (plVar5 != (long *)(param_2 + 0x160)) {
      do {
        plVar3 = (long *)plVar5[2];
        if (fVar6 == 0.0) {
          uVar1 = (**(code **)(*plVar3 + 0x70))(plVar3,param_3,&local_6c);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*plVar3 + 0x68))(local_6c,plVar3,param_3);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*plVar3 + 0x20))((int)plVar3[6],plVar3,0);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = (**(code **)(*plVar3 + 0x90))(plVar3,local_68);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if ((local_68[0] >> 4 & 1) == 0) {
            (**(code **)(*plVar3 + 200))(plVar3,plVar3[8],0,0,0);
          }
        }
        else {
          uVar1 = (**(code **)(*plVar3 + 0x70))(plVar3,param_3,&local_64);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = FUN_1005851c4(plVar3,param_3);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = FUN_1005e391c(local_64,*(long *)(param_2 + 8) + (long)(int)uVar2 * 0x20 + 0x16658,
                                (int)plVar3[0x31],0);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)(param_2 + 0x160));
    }
    uVar1 = 0;
    if (fVar6 != 0.0) {
      *(undefined1 *)(param_2 + (int)uVar2 + 0x1e8) = 1;
    }
  }
  else {
    uVar1 = 0x3b;
  }
  return uVar1;
}




undefined8 FUN_100581104(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  if ((uint)param_3 < 4) {
    fVar4 = (float)param_1;
    if ((fVar4 == 0.0) || (*(long **)(param_2[1] + 0x15d08) != param_2)) {
      uVar1 = FUN_100580f48(param_1,param_2,param_3);
      if ((int)uVar1 == 0) {
        lVar3 = (long)(int)(uint)param_3;
        if (*(long *)(param_2[1] + lVar3 * 0x20 + 0x16660) != 0) {
          if (fVar4 == 0.0) {
            if (param_2[0x39] != 0) {
              local_58 = 0;
              local_50 = 0;
              FUN_10061292c(param_2[0x39],&local_50);
              FUN_100612900(param_2[0x39],&local_58);
              if ((local_58 != 0) && (local_50 != 0)) {
                FUN_1005ceac4(local_50,local_58,param_2[0x39]);
              }
              param_2[0x39] = 0;
            }
            if (param_2[0x3a] != 0) {
              local_58 = 0;
              local_50 = 0;
              FUN_10061292c(param_2[0x3a],&local_50);
              FUN_100612900(param_2[0x3a],&local_58);
              if ((local_58 != 0) && (local_50 != 0)) {
                FUN_1005ceac4(local_50,local_58,param_2[0x3a]);
              }
              param_2[0x3a] = 0;
            }
            if (param_2[0x3b] != 0) {
              local_58 = 0;
              local_50 = 0;
              FUN_10061292c(param_2[0x3b],&local_50);
              FUN_100612900(param_2[0x3b],&local_58);
              if ((local_58 != 0) && (local_50 != 0)) {
                FUN_1005ceac4(local_50,local_58,param_2[0x3b]);
              }
              param_2[0x3b] = 0;
            }
            if (param_2[0x3c] != 0) {
              local_58 = 0;
              local_50 = 0;
              FUN_10061292c(param_2[0x3c],&local_50);
              FUN_100612900(param_2[0x3c],&local_58);
              if ((local_58 != 0) && (local_50 != 0)) {
                FUN_1005ceac4(local_50,local_58,param_2[0x3c]);
              }
              param_2[0x3c] = 0;
              return 0;
            }
          }
          else {
            *(float *)((long)param_2 + lVar3 * 4 + 0x1b8) = fVar4;
            lVar2 = param_2[lVar3 + 0x39];
            if (lVar2 == 0) {
              uVar1 = (**(code **)(*param_2 + 0x118))(param_2,0,&local_48);
              if ((int)uVar1 != 0) {
                return uVar1;
              }
              uVar1 = FUN_1005ce188(*(undefined8 *)(param_2[1] + lVar3 * 0x20 + 0x16660),local_48,
                                    param_2 + lVar3 + 0x39,2,0,0);
              if ((int)uVar1 != 0) {
                return uVar1;
              }
              lVar2 = param_2[lVar3 + 0x39];
            }
            FUN_1006149c8(param_1,lVar2,0x40,1,0);
          }
        }
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 0x3b;
  }
  return uVar1;
}




undefined8 FUN_10058132c(long param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if ((param_2 < 4) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_3 = *(undefined4 *)(param_1 + (long)(int)param_2 * 4 + 0x1b8);
  }
  return uVar1;
}




undefined8 FUN_100581354(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_34;
  
  if ((uint)param_2 < 4) {
    plVar3 = param_1 + 0x29;
    do {
      plVar3 = (long *)*plVar3;
      if (plVar3 == param_1 + 0x29) {
        lVar2 = (long)(int)(uint)param_2;
        if (*(char *)((long)param_1 + lVar2 + 0x1e8) != '\0') {
          if (*(long *)(param_1[1] + lVar2 * 0x20 + 0x16660) == 0) {
            param_1[lVar2 + 0x39] = 0;
          }
          else {
            uVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,&local_34);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            uVar1 = (**(code **)(*param_1 + 0x68))(local_34,param_1,param_2);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
          }
        }
        return 0;
      }
      uVar1 = FUN_100581354(plVar3[2],param_2);
    } while ((int)uVar1 == 0);
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




void FUN_10058142c(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 local_28;
  
  iVar2 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffe,&local_28);
  if (iVar2 != 0) {
    return;
  }
  if ((param_2 & 7) != 0) {
    uVar5 = *(uint *)((long)param_1 + 0x1ec) & 0xfffffff8;
    *(uint *)((long)param_1 + 0x1ec) = uVar5;
    if ((param_2 & 1) == 0) {
      if ((param_2 >> 1 & 1) == 0) {
        if ((param_2 >> 2 & 1) == 0) goto LAB_100581494;
        uVar5 = uVar5 | 4;
      }
      else {
        uVar5 = uVar5 | 2;
      }
    }
    else {
      uVar5 = uVar5 | 1;
    }
    *(uint *)((long)param_1 + 0x1ec) = uVar5;
  }
LAB_100581494:
  if ((param_2 >> 0x12 & 1) == 0) {
    if ((param_2 >> 0x13 & 1) != 0) {
      uVar5 = *(uint *)((long)param_1 + 0x1ec) & 0xfff3ffff | 0x80000;
      goto LAB_1005814b8;
    }
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0x1ec) & 0xfff3ffff | 0x40000;
LAB_1005814b8:
    *(uint *)((long)param_1 + 0x1ec) = uVar5;
  }
  if ((param_2 >> 0x14 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) == 0) {
      if ((param_2 >> 0x16 & 1) == 0) {
        uVar5 = *(uint *)((long)param_1 + 0x1ec);
        if ((param_2 >> 0x1a & 1) != 0) {
          uVar5 = uVar5 & 0xfb8fffff | 0x4000000;
          *(uint *)((long)param_1 + 0x1ec) = uVar5;
        }
      }
      else {
        uVar5 = *(uint *)((long)param_1 + 0x1ec) & 0xfb8fffff | 0x400000;
        *(uint *)((long)param_1 + 0x1ec) = uVar5;
      }
    }
    else {
      uVar5 = *(uint *)((long)param_1 + 0x1ec) & 0xfb8fffff | 0x200000;
      *(uint *)((long)param_1 + 0x1ec) = uVar5;
    }
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0x1ec) & 0xfb8fffff | 0x100000;
    *(uint *)((long)param_1 + 0x1ec) = uVar5;
  }
  puVar6 = (uint *)((long)param_1 + 0x1ec);
  uVar1 = uVar5 & 0xbfffffff;
  if ((param_2 & 0x40000000) != 0) {
    uVar1 = uVar5 | 0x40000000;
  }
  uVar5 = uVar1 | 0x80000000;
  if (-1 < (int)param_2) {
    uVar5 = uVar1 & 0x7fffffff;
  }
  *puVar6 = uVar5;
  if ((param_2 >> 3 & 1) == 0) {
    if ((param_2 >> 4 & 1) == 0) goto LAB_1005815b0;
    *puVar6 = uVar5 & 0xffffffe7 | 0x10;
    uVar3 = 1;
    uVar4 = 2;
  }
  else {
    *puVar6 = uVar5 & 0xffffffe7 | 8;
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x15) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0x3f800000;
    *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
    uVar3 = 0;
    uVar4 = 0;
  }
  iVar2 = FUN_1005c9948(local_28,0,uVar3,uVar4);
  if (iVar2 != 0) {
    return;
  }
LAB_1005815b0:
  (**(code **)(*param_1 + 0x218))(param_1);
  return;
}




undefined8 FUN_1005815d0(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1ec);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005815f4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((*(byte *)(param_1 + 0x48) >> 4 & 1) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1a4);
    }
    else {
      uVar1 = 0;
    }
    *param_2 = uVar1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100581620(float param_1,float param_2,long *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((((uint)param_1 & 0x7f800000) != 0x7f800000) && (((uint)param_2 & 0x7f800000) != 0x7f800000))
  {
    if (1.0 <= param_1) {
      param_1 = 1.0;
    }
    fVar3 = 0.0;
    if (0.0 <= param_1) {
      fVar3 = param_1;
    }
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    fVar2 = 0.0;
    if (0.0 <= param_2) {
      fVar2 = param_2;
    }
    *(float *)(param_3 + 0x17) = fVar3;
    *(float *)((long)param_3 + 0xbc) = fVar2;
                    /* WARNING: Could not recover jumptable at 0x000100581684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_3 + 0x198))(param_3,0);
    return uVar1;
  }
  return 0x1d;
}




undefined8 FUN_100581688(float param_1,float param_2,long param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = 1.0;
  if (param_1 <= 1.0) {
    fVar5 = param_1;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar5) {
    fVar7 = fVar5;
  }
  fVar5 = 1.0;
  if (param_2 <= 1.0) {
    fVar5 = param_2;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  *(float *)(param_3 + 0xa8) = fVar7;
  *(float *)(param_3 + 0xac) = fVar4;
  if (param_4 != 0) {
    *(float *)(param_3 + 0xb0) = fVar7;
    *(float *)(param_3 + 0xb4) = fVar4;
  }
  lVar2 = *(long *)(param_3 + 0x20);
  fVar5 = 1.0;
  if (lVar2 != 0) {
    fVar5 = *(float *)(lVar2 + 0x1a8);
  }
  fVar6 = 1.0 - *(float *)(param_3 + 0xb8);
  *(float *)(param_3 + 0x1a8) = fVar5 * (1.0 - fVar7) * fVar6;
  fVar5 = 1.0;
  if (lVar2 != 0) {
    fVar5 = *(float *)(lVar2 + 0x1ac);
  }
  *(float *)(param_3 + 0x1ac) = fVar5 * (1.0 - fVar4) * fVar6;
  for (puVar3 = *(undefined8 **)(param_3 + 0x148); puVar3 != (undefined8 *)(param_3 + 0x148);
      puVar3 = (undefined8 *)*puVar3) {
    plVar1 = (long *)puVar3[2];
    (**(code **)(*plVar1 + 0x198))((int)plVar1[0x15],*(undefined4 *)((long)plVar1 + 0xac),plVar1,0);
  }
  return 0;
}




undefined8 FUN_10058174c(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xac);
  }
  return 0;
}




undefined8 FUN_10058176c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100581790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_24;
  
  local_24 = 0;
  uVar1 = FUN_10062b3fc();
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005cf768(param_3,&local_24), (int)uVar1 == 0)) {
    if (local_24 == 0x19) {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x250) = param_3;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_1005817f0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10062b878();
  if ((int)uVar1 == 0) {
    if ((param_2 == 0) || (*(long *)(param_1 + 0x250) == param_2)) {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_100581838(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long local_40;
  long local_38;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffc,&local_38);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_2 = *(undefined8 *)(local_38 + 8);
  }
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (long *)param_1[4];
    local_40 = 0;
    if (plVar2 == (long *)0x0) {
      pcVar3 = *(code **)(*param_1 + 0x118);
    }
    else {
      pcVar3 = *(code **)(*plVar2 + 0x118);
      param_1 = plVar2;
    }
    uVar1 = (*pcVar3)(param_1,0xfffffffc,&local_40);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *param_3 = *(undefined8 *)(local_40 + 8);
    }
  }
  return uVar1;
}




undefined8 FUN_1005818f0(long param_1,long param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (param_2 != 0) {
    iVar1 = 0x100;
    if (param_3 < 0x101) {
      iVar1 = param_3;
    }
    pcVar2 = *(char **)(param_1 + 0x198);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "(null)";
    }
    FUN_1005ecc98(param_2,pcVar2,iVar1);
    return 0;
  }
  return 0x1f;
}




ulong FUN_10058193c(ulong param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long local_48;
  
  if (param_2 == (long *)0x0) {
    uVar4 = 0x1f;
  }
  else {
    uVar1 = (uint)param_1 >> 1 & 0xffff;
    *param_2 = 0;
    if (uVar1 == 0) {
      uVar4 = 0x1e;
    }
    else {
      iVar3 = FUN_1005f4594(param_1 >> 0x1d & 7,&local_48);
      lVar2 = local_48;
      if (iVar3 == 0) {
        lVar5 = *(long *)(local_48 + 0x1b0);
        if (lVar5 == 0) {
          uVar4 = 0x43;
        }
        else {
          uVar6 = (uint)param_1 >> 0x11 & 0xfff;
          if ((int)uVar6 < *(int *)(local_48 + 0x1a8)) {
            if (param_3 != (long *)0x0) {
              if (*param_3 != 0) {
                return 0x1c;
              }
              uVar4 = FUN_100570b94(local_48);
              if ((int)uVar4 != 0) {
                return uVar4;
              }
              *param_3 = lVar2;
              lVar5 = *(long *)(local_48 + 0x1b0);
            }
            if ((uVar1 == 0xffff) ||
               (uVar4 = *(ulong *)(lVar5 + (ulong)uVar6 * 0x270 + 0x50),
               uVar4 == (param_1 & 0xffffffff))) {
              uVar4 = 0;
              *param_2 = lVar5 + (ulong)uVar6 * 0x270;
            }
            else {
              uVar6 = 3;
              if ((uVar4 >> 1 & 0xffff) - (ulong)uVar1 < 2) {
                uVar6 = 0x1e;
              }
              uVar4 = (ulong)uVar6;
            }
          }
          else {
            uVar4 = 0x1e;
          }
        }
      }
      else {
        uVar4 = 0x1e;
      }
    }
  }
  return uVar4;
}




undefined8 FUN_100581a54(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x150);
    *puVar2 = *(undefined8 *)(param_1 + 0x148);
    *(undefined8 **)(*(long *)(param_1 + 0x148) + 8) = puVar2;
    *(long *)(param_1 + 0x148) = param_1 + 0x148;
    *(long *)(param_1 + 0x150) = param_1 + 0x148;
    *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x158) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x170);
    *puVar2 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 **)(*(long *)(param_1 + 0x168) + 8) = puVar2;
    *(long *)(param_1 + 0x168) = param_1 + 0x168;
    *(long *)(param_1 + 0x170) = param_1 + 0x168;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x178) = 0;
    lVar1 = param_1 + 0x130;
    puVar2 = *(undefined8 **)(param_1 + 0x138);
    *puVar2 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 **)(*(long *)(param_1 + 0x130) + 8) = puVar2;
    *(long *)(param_1 + 0x130) = lVar1;
    lVar4 = *(long *)(lVar3 + 0x558);
    *(long *)(param_1 + 0x130) = lVar4;
    *(long *)(param_1 + 0x138) = lVar3 + 0x558;
    *(long *)(lVar4 + 8) = lVar1;
    **(long **)(param_1 + 0x138) = lVar1;
    *(int *)(lVar3 + 0x1ac) = *(int *)(lVar3 + 0x1ac) + -1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100581af0(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_48;
  
  plVar3 = (long *)param_1[0x32];
  if (plVar3 == (long *)0x0) {
    uVar4 = 0x1e;
  }
  else if (param_1[4] == 0) {
    uVar4 = 0x1e;
  }
  else {
    lVar6 = plVar3[5];
    if (lVar6 == 0) {
      if (plVar3[6] == 0) {
        return 0x1c;
      }
      iVar7 = 0;
      iVar8 = 0;
      uVar9 = 0;
      fVar10 = (float)*(int *)(param_1[1] + 0x708);
      uVar5 = 0x80;
    }
    else {
      fVar10 = *(float *)(lVar6 + 100);
      uVar9 = *(undefined4 *)(lVar6 + 0x60);
      uVar5 = *(undefined4 *)(lVar6 + 0x68);
      iVar7 = *(int *)(lVar6 + 0x6c);
      iVar8 = *(int *)(lVar6 + 0x70);
    }
    *(undefined4 *)(param_1 + 0x33) = uVar5;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    if (((uint)fVar10 & 0x7f800000) != 0x7f800000) {
      fVar12 = *(float *)(param_1 + 0x3d);
      fVar11 = *(float *)(plVar3 + 0x10);
      if (*(float *)(plVar3 + 0x10) <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = *(float *)((long)plVar3 + 0x7c);
      if (fVar11 <= *(float *)((long)plVar3 + 0x7c)) {
        fVar10 = fVar11;
      }
      *(float *)(param_1 + 0x3d) = fVar10;
      iVar2 = (**(code **)(*plVar3 + 0x88))();
      if (((iVar2 == 0) && (param_1[0x35] != 0)) &&
         (((fVar12 < 0.0 && (0.0 < *(float *)(param_1 + 0x3d))) ||
          ((0.0 < fVar12 && (*(float *)(param_1 + 0x3d) < 0.0)))))) {
        FUN_100584368(param_1,1);
      }
    }
    (**(code **)(*param_1 + 0x20))(0x3f800000,param_1,0);
    (**(code **)(*param_1 + 0x48))(0x3f800000,param_1);
    uVar4 = (**(code **)(*param_1 + 0x118))(param_1,0xffffffff,&local_48);
    if ((int)uVar4 == 0) {
      uVar5 = 0;
      if (iVar7 != 0) {
        uVar5 = uVar9;
      }
      uVar9 = 3;
      if (iVar8 != 4) {
        uVar9 = 0;
      }
      uVar1 = 2;
      if (iVar8 != 4) {
        uVar1 = uVar5;
      }
      uVar5 = 2;
      if (iVar8 != 3) {
        uVar5 = uVar9;
      }
      uVar9 = 1;
      if (iVar8 != 3) {
        uVar9 = uVar1;
      }
      uVar4 = FUN_1005c9948(local_48,iVar7,uVar9,uVar5);
    }
  }
  return uVar4;
}




undefined8 FUN_100581c98(float param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    uVar1 = 0x1d;
  }
  else {
    plVar2 = *(long **)(param_2 + 400);
    if (plVar2 == (long *)0x0) {
      uVar1 = 0x1e;
    }
    else if (*(long *)(param_2 + 0x20) == 0) {
      uVar1 = 0x1e;
    }
    else {
      fVar5 = *(float *)(param_2 + 0x1e8);
      fVar3 = *(float *)(plVar2 + 0x10);
      if (*(float *)(plVar2 + 0x10) <= param_1) {
        fVar3 = param_1;
      }
      fVar4 = *(float *)((long)plVar2 + 0x7c);
      if (fVar3 <= *(float *)((long)plVar2 + 0x7c)) {
        fVar4 = fVar3;
      }
      *(float *)(param_2 + 0x1e8) = fVar4;
      uVar1 = (**(code **)(*plVar2 + 0x88))();
      if ((int)uVar1 == 0) {
        if ((*(long *)(param_2 + 0x1a8) != 0) &&
           (((fVar5 < 0.0 && (0.0 < *(float *)(param_2 + 0x1e8))) ||
            ((0.0 < fVar5 && (*(float *)(param_2 + 0x1e8) < 0.0)))))) {
          FUN_100584368(param_2,1);
        }
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_100581d64(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x50);
  uVar3 = uVar2;
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x18c);
  }
  uVar3 = (uVar3 >> 1 & 0xffff) + 1;
  uVar1 = 2;
  if (uVar3 < 0xffff) {
    uVar1 = uVar3 * 2;
  }
  uVar3 = uVar2 & 0xfffe0000 | uVar1 | 1;
  *(ulong *)(param_1 + 0x50) = (ulong)uVar3;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x18c) = uVar3;
  }
  return 0;
}




undefined8 FUN_100581db0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  float local_34;
  
  if ((*(byte *)(param_1 + 0x4a) >> 2 & 1) == 0) {
    lVar9 = *(long *)(param_1 + 400);
    if (lVar9 == 0) {
      uVar10 = 0x1e;
    }
    else if (*(long *)(param_1 + 0x20) == 0) {
      uVar10 = 0x1e;
    }
    else if ((*(byte *)(lVar9 + 0x5e) & 1) == 0) {
      lVar9 = *(long *)(lVar9 + 0x28);
      FUN_100582040(param_1,&local_34,0);
      bVar8 = 0;
      fVar14 = local_34 * *(float *)(param_1 + 0x1d0);
      if (fVar14 <= *(float *)(*(long *)(param_1 + 8) + 0x15c64)) {
        bVar8 = *(byte *)(*(long *)(param_1 + 8) + 0x4a) >> 1 & 1;
      }
      FUN_1005821b8(param_1,((1.0 - *(float *)(param_1 + 0xa8)) * (1.0 - *(float *)(param_1 + 0xb8))
                             * *(float *)(*(long *)(param_1 + 0x20) + 0x1a8) != 0.0 ||
                            *(float *)(*(long *)(param_1 + 0x20) + 0x1ac) *
                            (1.0 - *(float *)(param_1 + 0xac)) * (1.0 - *(float *)(param_1 + 0xbc))
                            <= 0.0) & bVar8 & *(int *)(param_1 + 0x198) != 0);
      uVar4 = *(uint *)(param_1 + 0x19c);
      uVar5 = *(uint *)(param_1 + 0x1a0);
      iVar6 = *(int *)(param_1 + 0x198) * 0x2711;
      uVar2 = (10000 - (int)(fVar14 * 0.1 * 10000.0)) + iVar6;
      *(uint *)(param_1 + 0x19c) = uVar2;
      uVar7 = (iVar6 + 10000) - (int)(local_34 * 10000.0);
      *(uint *)(param_1 + 0x1a0) = uVar7;
      if (uVar2 != uVar4) {
        lVar1 = param_1 + 0x148;
        puVar3 = *(undefined8 **)(param_1 + 0x150);
        *puVar3 = *(undefined8 *)(param_1 + 0x148);
        *(undefined8 **)(*(long *)(param_1 + 0x148) + 8) = puVar3;
        *(long *)(param_1 + 0x148) = lVar1;
        *(long *)(param_1 + 0x150) = lVar1;
        *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x158) = 0;
        lVar11 = *(long *)(param_1 + 8);
        plVar13 = *(long **)(lVar11 + 0x698);
        do {
          if (uVar2 < *(uint *)(plVar13 + 3)) {
            *(uint *)(param_1 + 0x160) = uVar2;
            lVar11 = plVar13[1];
            *(long **)(param_1 + 0x148) = plVar13;
            *(long *)(param_1 + 0x150) = lVar11;
            plVar13[1] = lVar1;
            goto LAB_100581f84;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != lVar11 + 0x698);
        *(uint *)(param_1 + 0x160) = uVar2;
        uVar10 = *(undefined8 *)(lVar11 + 0x6a0);
        *(long *)(param_1 + 0x148) = lVar11 + 0x698;
        *(undefined8 *)(param_1 + 0x150) = uVar10;
        *(long *)(lVar11 + 0x6a0) = lVar1;
LAB_100581f84:
        **(long **)(param_1 + 0x150) = lVar1;
        *(long *)(param_1 + 0x158) = param_1;
      }
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        lVar9 = *(long *)(lVar9 + 0x110);
        if ((lVar9 != 0) && (uVar7 != uVar5)) {
          lVar1 = param_1 + 0x168;
          puVar3 = *(undefined8 **)(param_1 + 0x170);
          *puVar3 = *(undefined8 *)(param_1 + 0x168);
          *(undefined8 **)(*(long *)(param_1 + 0x168) + 8) = puVar3;
          *(long *)(param_1 + 0x168) = lVar1;
          *(long *)(param_1 + 0x170) = lVar1;
          *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
          *(undefined8 *)(param_1 + 0x178) = 0;
          plVar13 = (long *)(lVar9 + 0x40);
          plVar12 = (long *)*plVar13;
          do {
            if (uVar7 < *(uint *)(plVar12 + 3)) {
              *(uint *)(param_1 + 0x180) = uVar7;
              lVar9 = plVar12[1];
              *(long **)(param_1 + 0x168) = plVar12;
              *(long *)(param_1 + 0x170) = lVar9;
              plVar12[1] = lVar1;
              goto LAB_10058201c;
            }
            plVar12 = (long *)*plVar12;
          } while ((long *)plVar12[1] != plVar13);
          *(uint *)(param_1 + 0x180) = uVar7;
          uVar10 = *(undefined8 *)(lVar9 + 0x48);
          *(long **)(param_1 + 0x168) = plVar13;
          *(undefined8 *)(param_1 + 0x170) = uVar10;
          *(long *)(lVar9 + 0x48) = lVar1;
LAB_10058201c:
          **(long **)(param_1 + 0x170) = lVar1;
          uVar10 = 0;
          *(long *)(param_1 + 0x178) = param_1;
        }
      }
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}




undefined8 FUN_100582040(long param_1,float *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 == (float *)0x0) {
    return 0x1f;
  }
  lVar1 = *(long *)(param_1 + 400);
  if (lVar1 == 0) {
    return 0x1e;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return 0x1e;
  }
  if ((*(uint *)(param_1 + 0x48) & 0x800002) != 0) {
    *param_2 = 0.0;
    return 0;
  }
  if ((*(byte *)(lVar1 + 0x58) >> 4 & 1) == 0) {
    fVar3 = *(float *)(lVar2 + 0x1a4);
    if (param_3 == 0) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x1d0);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xd8);
    fVar4 = 1.0;
    if (fVar3 < 1.0) {
      fVar5 = 1.0;
      fVar4 = 1.0 - fVar3;
      if (param_3 != 0) {
        fVar5 = *(float *)(param_1 + 0x1d0);
      }
      fVar3 = *(float *)(lVar2 + 0x1a4) *
              (fVar4 + fVar3 * *(float *)(param_1 + 0x60)) *
              (fVar4 + fVar3 * *(float *)(param_1 + 0x8c)) *
              (fVar4 + fVar3 * (1.0 - *(float *)(param_1 + 0xa8))) *
              (fVar4 + fVar3 * (1.0 - *(float *)(param_1 + 0xb8))) * fVar5 *
              (fVar4 + fVar3 * *(float *)(lVar2 + 0x1a8));
      goto LAB_100582170;
    }
    if (param_3 != 0) {
      fVar4 = *(float *)(param_1 + 0x1d0);
    }
    fVar3 = *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x8c) *
            (1.0 - *(float *)(param_1 + 0xa8)) * (1.0 - *(float *)(param_1 + 0xb8)) * fVar4 *
            *(float *)(lVar2 + 0x1a8);
    fVar4 = *(float *)(lVar2 + 0x1a4);
  }
  fVar3 = fVar3 * fVar4;
LAB_100582170:
  *param_2 = fVar3;
  fVar3 = *(float *)(param_1 + 0x58) * fVar3;
  *param_2 = fVar3;
  fVar3 = fVar3 + *(float *)(param_1 + 0x5c);
  *param_2 = fVar3;
  if ((*(long *)(lVar1 + 0x28) != 0) &&
     (fVar4 = *(float *)(*(long *)(lVar1 + 0x28) + 0x134), fVar4 != 0.0)) {
    fVar3 = fVar4 * fVar3;
    *param_2 = fVar3;
  }
  *param_2 = ABS(fVar3);
  return 0;
}




undefined8 FUN_1005821b8(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long local_90;
  undefined1 auStack_88 [32];
  long local_68;
  long local_60;
  undefined1 local_53;
  char local_32;
  char local_31;
  
  if (param_2 == 0) {
    *(undefined4 *)((long)param_1 + 0x1e4) = 0;
    if ((*(uint *)(param_1 + 9) >> 0x11 & 1) == 0) {
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 9) & 0xfffdffff;
LAB_1005822fc:
    *(uint *)(param_1 + 9) = uVar4;
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x4a) >> 5 & 1) != 0) {
    return 0;
  }
  uVar3 = (**(code **)(*param_1 + 0xa0))(param_1,&local_32);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar4 = *(uint *)(param_1 + 9);
  if ((uVar4 >> 0x11 & 1) != 0) {
    return 0;
  }
  if (local_32 == '\0') {
    return 0;
  }
  iVar1 = *(int *)(*(long *)(param_1[1] + 0x6b8) + 0x1d8);
  iVar2 = *(int *)((long)param_1 + 0x1e4);
  if (iVar2 == 0) {
    *(int *)((long)param_1 + 0x1e4) = iVar1;
    uVar4 = uVar4 | 0x1000000;
    goto LAB_1005822fc;
  }
  if (iVar2 == iVar1 || iVar2 + 1 == iVar1) {
    uVar4 = uVar4 | 0x1000000;
    goto LAB_1005822fc;
  }
  uVar3 = (**(code **)(*param_1 + 0x200))(param_1,&local_31);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  uVar4 = *(uint *)(param_1 + 9);
  *(uint *)(param_1 + 9) = uVar4 | 0x20000;
  *(undefined4 *)((long)param_1 + 0x1e4) = 0;
  if (local_31 != '\0') {
    return 0;
  }
  if (param_1[0x32] == 0) {
    return 0;
  }
  uVar3 = (**(code **)(**(long **)(param_1[1] + 0x6f8) + 8))
                    (*(long **)(param_1[1] + 0x6f8),*(undefined4 *)(param_1[0x32] + 0x58),&local_90,
                     1,1,0,0);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  lVar5 = param_1[4];
  FUN_1005823a4(param_1,auStack_88);
  FUN_100582560(param_1,4);
  param_1[0x32] = local_90;
  if (local_68 == 0) {
    if (local_60 == 0) goto LAB_10058238c;
    FUN_100583198(param_1,local_60,lVar5,1,0,0);
  }
  else {
    FUN_1005828e0(param_1,local_68,lVar5,1,0,0);
  }
  FUN_100582c70(param_1,auStack_88);
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffbffff;
  (**(code **)(*param_1 + 0x10))(param_1,local_53);
LAB_10058238c:
  if ((uVar4 & 0x40000) != 0) {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x10000;
  }
  return 0;
}




undefined8 FUN_1005823a4(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  int local_34;
  
  (**(code **)(*(long *)param_1[0x32] + 0x18))
            ((long *)param_1[0x32],auStack_40,auStack_48,&local_50,auStack_58);
  iVar1 = (*(code *)**(undefined8 **)param_1[0x32])();
  lVar3 = param_1[0x32];
  if (iVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 0xd0);
  }
  *(long *)(param_2 + 0x10) = lVar3;
  *(undefined8 *)(param_2 + 0x18) = local_50;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  puVar5 = (undefined8 *)(param_2 + 0x20);
  *puVar5 = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  (**(code **)(*param_1 + 0x90))(param_1,param_2 + 0x48);
  if (param_2 == 0) {
LAB_100582450:
    lVar3 = param_1[0x32];
    if (lVar3 == 0) goto LAB_100582480;
    lVar4 = *(long *)(lVar3 + 0x28);
    if (lVar4 != 0) {
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar3 + 0x70);
      *(int *)(param_2 + 8) = *(int *)(lVar3 + 0x70) + *(int *)(lVar3 + 0x74) + -1;
      *(long *)(param_2 + 0x20) = lVar4;
      goto LAB_1005824a4;
    }
    *puVar5 = 0;
  }
  else {
    plVar2 = (long *)param_1[0x32];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,2);
      goto LAB_100582450;
    }
LAB_100582480:
    *puVar5 = 0;
  }
  if (param_1[0x32] == 0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  else {
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1[0x32] + 0x30);
  }
LAB_1005824a4:
  plVar2 = (long *)param_1[0x32];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0xc0))(plVar2,param_2 + 0x30);
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2 + 0x34);
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 0x35);
  (**(code **)(*param_1 + 0xe0))(param_1,param_2 + 0x38,param_2 + 0x40,param_2 + 0x36);
  (**(code **)(*param_1 + 0x120))(param_1,&local_34);
  if (1 < local_34) {
    (**(code **)(*param_1 + 0x130))(param_1,local_50,(undefined4 *)(param_2 + 0x4c));
  }
  *(uint *)(*(long *)(param_2 + 0x10) + 0x5c) = *(uint *)(*(long *)(param_2 + 0x10) + 0x5c) | 0x8000
  ;
  return 0;
}




undefined8 FUN_100582560(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if (param_1[0x32] == 0) {
    return 0x1e;
  }
  if (*(char *)(param_1[0x32] + 0x5c) < '\0') {
    return 0;
  }
  if ((param_2 >> 6 & 1) != 0) {
    FUN_100584368(param_1,0);
  }
  (**(code **)(*param_1 + 0xd8))(param_1,0,0,0);
  if ((param_2 >> 2 & 1) == 0) {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1,0,0xfffffffffff00000);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar3 = (**(code **)(*param_1 + 0x110))(param_1,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = (**(code **)(*(long *)param_1[0x32] + 0x68))();
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if ((param_2 >> 4 & 1) != 0) {
    lVar5 = param_1[4];
    if (lVar5 != 0) {
      plVar9 = param_1 + 0x37;
      plVar6 = (long *)param_1[0x37];
      if (plVar6 == plVar9) {
        plVar7 = (long *)param_1[0x38];
        if (plVar7 == plVar9) goto LAB_100582678;
      }
      else {
        plVar7 = (long *)param_1[0x38];
      }
      *(int *)(lVar5 + 0x194) = *(int *)(lVar5 + 0x194) + -1;
      *plVar7 = (long)plVar6;
      *(long **)(param_1[0x37] + 8) = plVar7;
      param_1[0x37] = (long)plVar9;
      param_1[0x38] = (long)plVar9;
    }
    param_1[4] = 0;
    param_1[0x39] = (long)param_1;
  }
LAB_100582678:
  lVar10 = param_1[0x32];
  plVar9 = (long *)(lVar10 + 0x28);
  lVar5 = *plVar9;
  if ((lVar5 != 0) &&
     (iVar2 = *(int *)(lVar5 + 0x130) + -1, *(int *)(lVar5 + 0x130) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(lVar5 + 0x138) = *(undefined4 *)(param_1[1] + 0x15d10);
  }
  if ((param_2 >> 1 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 9);
  }
  else {
    lVar5 = param_1[1];
    if (lVar5 == 0) {
      return 0x1f;
    }
    plVar6 = (long *)param_1[0x2a];
    *plVar6 = param_1[0x29];
    *(long **)(param_1[0x29] + 8) = plVar6;
    param_1[0x29] = (long)(param_1 + 0x29);
    param_1[0x2a] = (long)(param_1 + 0x29);
    *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    param_1[0x2b] = 0;
    plVar6 = (long *)param_1[0x2e];
    *plVar6 = param_1[0x2d];
    *(long **)(param_1[0x2d] + 8) = plVar6;
    param_1[0x2d] = (long)(param_1 + 0x2d);
    param_1[0x2e] = (long)(param_1 + 0x2d);
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    param_1[0x2f] = 0;
    plVar6 = param_1 + 0x26;
    plVar7 = (long *)param_1[0x27];
    *plVar7 = param_1[0x26];
    *(long **)(param_1[0x26] + 8) = plVar7;
    param_1[0x26] = (long)plVar6;
    lVar8 = *(long *)(lVar5 + 0x558);
    param_1[0x26] = lVar8;
    param_1[0x27] = lVar5 + 0x558;
    *(long **)(lVar8 + 8) = plVar6;
    *(long **)param_1[0x27] = plVar6;
    *(int *)(lVar5 + 0x1ac) = *(int *)(lVar5 + 0x1ac) + -1;
    *(undefined4 *)((long)param_1 + 0x19c) = 0xffffffff;
    uVar4 = *(uint *)(param_1 + 9) & 0xfffeffff;
    *(uint *)(param_1 + 9) = uVar4;
  }
  *(uint *)(param_1 + 9) = uVar4 & 0xfffbffff;
  lVar5 = lVar10;
  if (((param_2 >> 3 & 1) != 0) && (param_1[0x25] != 0)) {
    uVar3 = FUN_10062ab0c(param_1,param_1[10],0,0,0,0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    lVar5 = param_1[0x32];
  }
  if ((lVar10 != lVar5) || ((*(uint *)(lVar5 + 0x5c) & 0x40) == 0)) {
    if (((undefined8 *)*plVar9 == (undefined8 *)0x0) ||
       (iVar2 = (*(code *)**(undefined8 **)*plVar9)(), iVar2 == 0)) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *plVar9 = 0;
      *(undefined8 *)(lVar10 + 0x30) = 0;
    }
    else {
      FUN_10057097c(param_1[1],7);
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *plVar9 = 0;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      FUN_100570990(param_1[1],7);
    }
  }
  if ((param_2 & 4) == 0) {
    if (param_1[8] != 0) {
      FUN_1005d7f1c(param_1[1] + 0x14f68,param_1[8],"",0);
      param_1[8] = 0;
    }
    if (param_1[2] != 0) {
      FUN_1005d7f1c(param_1[1] + 0x148b8,param_1[2],"",0);
      param_1[2] = 0;
    }
  }
  if ((*(int *)((long)param_1 + 0x19c) == -1) && ((*(byte *)((long)param_1 + 0x4a) >> 2 & 1) == 0))
  {
    param_1[0x32] = 0;
    if ((param_2 & 4) == 0) {
      uVar3 = FUN_10062aed0(param_1,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      param_1[0x35] = 0;
    }
    if ((param_2 & 1) != 0) {
      uVar4 = (*(uint *)((long)param_1 + 0x18c) >> 1 & 0xffff) + 1;
      uVar1 = 2;
      if (uVar4 < 0xffff) {
        uVar1 = uVar4 * 2;
      }
      param_1[10] = (ulong)(*(uint *)(param_1 + 10) & 0xfffe0000 | uVar1 | 1);
    }
  }
  return 0;
}




undefined8
FUN_1005828e0(long *param_1,long *param_2,long param_3,ulong param_4,undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 local_60;
  undefined4 local_58;
  byte local_54 [4];
  long local_50;
  int local_44;
  
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (param_1[0x32] == 0) {
    return 0x1e;
  }
  if (param_3 == 0) {
    if ((*(byte *)(param_1[0x32] + 0x5e) & 1) == 0) {
      param_3 = *(long *)(param_1[1] + 0x15d08);
    }
    else {
      param_3 = 0;
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x118))(param_1,0,&local_50);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (local_50 != 0) {
    *(long **)(local_50 + 0x1b0) = param_1;
  }
  lVar3 = param_1[4];
  plVar2 = param_1 + 0x37;
  if (lVar3 != 0) {
    plVar4 = (long *)param_1[0x37];
    if (plVar4 == plVar2) {
      plVar6 = (long *)param_1[0x38];
      if (plVar6 == plVar2) goto LAB_1005829f8;
    }
    else {
      plVar6 = (long *)param_1[0x38];
    }
    *(int *)(lVar3 + 0x194) = *(int *)(lVar3 + 0x194) + -1;
    *plVar6 = (long)plVar4;
    *(long **)(param_1[0x37] + 8) = plVar6;
    param_1[0x37] = (long)plVar2;
    param_1[0x38] = (long)plVar2;
  }
  param_1[4] = param_3;
  param_1[0x39] = (long)param_1;
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + 0x160);
    param_1[0x37] = lVar3;
    param_1[0x38] = param_3 + 0x160;
    *(long **)(lVar3 + 8) = plVar2;
    *(long **)param_1[0x38] = plVar2;
    *(int *)(param_3 + 0x194) = *(int *)(param_3 + 0x194) + 1;
    if (param_1[0x32] == 0) {
      return 0x1e;
    }
  }
LAB_1005829f8:
  uVar1 = FUN_100583f0c(param_1,param_2,param_5);
  if ((int)uVar1 == 0) {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x40000;
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,1);
    if ((int)uVar1 == 0) {
      if ((int)param_5 != 0) {
        uVar7 = 0;
        if (param_6 == 0) {
          uVar7 = 0x3f800000;
        }
        *(undefined4 *)(param_1 + 0x3a) = uVar7;
        *(undefined4 *)((long)param_1 + 0x1d4) = uVar7;
        uVar1 = FUN_100581af0(param_1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        plVar2 = (long *)param_1[0x32];
        if (plVar2 == (long *)0x0) {
          return 0x1e;
        }
        if (param_1[4] == 0) {
          return 0x1e;
        }
        plVar4 = (long *)plVar2[5];
        if (plVar4 != (long *)0x0) {
          uVar1 = (**(code **)(*plVar4 + 0x90))(plVar4,&local_44,2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if (local_44 == 0) {
            return 0x20;
          }
          plVar2 = (long *)param_1[0x32];
        }
        uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2,0,2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_100584368(param_1,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      if ((long *)param_1[0x32] == (long *)0x0) {
        uVar1 = 0x1e;
      }
      else {
        uVar1 = (**(code **)(*(long *)param_1[0x32] + 0x50))();
        if ((int)uVar1 == 0) {
          *(int *)(param_2 + 0x26) = (int)param_2[0x26] + 1;
          if ((param_2[0x22] != 0) && ((*(byte *)(param_1[0x32] + 0x5e) & 1) == 0)) {
            FUN_1005dbee4(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
            plVar4 = (long *)param_2[0x22];
            plVar2 = (long *)plVar4[1];
            *plVar2 = *plVar4;
            *(long **)(*plVar4 + 8) = plVar2;
            *plVar4 = (long)plVar4;
            lVar3 = param_1[1];
            lVar5 = *(long *)(lVar3 + 0x15d50);
            *plVar4 = lVar5;
            plVar4[1] = lVar3 + 0x15d50;
            *(long **)(lVar5 + 8) = plVar4;
            *(long **)plVar4[1] = plVar4;
            FUN_1005dbf14(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
          }
          if ((int)param_5 != 0) {
            (**(code **)(*param_2 + 0x118))(param_2,local_54);
            if ((local_54[0] >> 4 & 1) != 0) {
              local_58 = 0;
              local_60 = 0;
              uVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_1[1] + 0x156c0,&local_60,0);
              if ((int)uVar1 != 0) {
                return uVar1;
              }
            }
            if ((((*(byte *)(*(long *)(param_1[1] + 0x15d08) + 0x48) >> 1 & 1) != 0) &&
                ((*(byte *)(param_1[0x32] + 0x5e) & 1) == 0)) &&
               (uVar1 = (**(code **)(*param_1 + 0x58))(param_1,*(uint *)(param_1 + 9) >> 1 & 1),
               (int)uVar1 != 0)) {
              return uVar1;
            }
          }
          if (((long *)param_2[0x1d] != (long *)0x0) && (*(int *)((long)param_2 + 0xdc) != 0)) {
            param_1[0x35] = *(long *)param_2[0x1d];
            *(undefined4 *)(param_1 + 0x36) = 0;
          }
          if (((param_4 & 1) != 0) ||
             (uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0), (int)uVar1 == 0)) {
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}




undefined8 FUN_100582c70(long *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined1 local_56;
  undefined1 local_55;
  uint local_54;
  
  local_55 = 0;
  local_56 = 0;
  (**(code **)(*(long *)param_1[0x32] + 0x18))
            ((long *)param_1[0x32],&local_60,&local_68,&local_70,&local_78);
  (**(code **)(*param_1 + 0x88))(param_1,param_2[0x12]);
  (**(code **)(**(long **)(param_2 + 4) + 0xe0))(*(long **)(param_2 + 4),&local_56);
  FUN_10062e298(*(undefined8 *)(param_2 + 6),local_70,local_56);
  *(long **)(local_60 + 0x1b0) = param_1;
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 != (undefined8 *)0x0) {
    iVar4 = (int)param_1[3];
    if (iVar4 < 2) {
      return 0x1c;
    }
    uVar3 = param_2[0x13];
    lVar12 = (long)(int)uVar3;
    puVar2 = puVar6 + 1;
    if (uVar3 != 0) {
      puVar2 = puVar6;
    }
    uVar9 = *puVar2;
    uVar1 = iVar4 - 2;
    if (uVar3 != iVar4 - 1U) {
      uVar1 = iVar4 - 1U;
    }
    uVar10 = puVar6[(int)uVar1];
    uVar11 = puVar6[lVar12];
    FUN_1005ced7c(uVar11,uVar11,1);
    FUN_10062e538(uVar11,0,1);
    FUN_1005ce304(local_60,uVar9,0xffffffff,1,(int)param_1[3] + -1,1);
    local_60 = local_70;
    local_68 = uVar10;
    (**(code **)(*(long *)param_1[0x32] + 0x10))
              ((long *)param_1[0x32],local_70,uVar10,local_70,local_78);
    iVar4 = (int)param_1[3];
    lVar7 = (long)iVar4;
    if ((int)uVar3 < iVar4) {
      do {
        puVar6 = (undefined8 *)(param_1[2] + lVar12 * 8);
        lVar12 = lVar12 + 1;
        *puVar6 = puVar6[1];
      } while (lVar12 < lVar7);
    }
    if (1 < iVar4) {
      lVar12 = lVar7 * 8;
      do {
        lVar12 = lVar12 + -8;
        lVar7 = lVar7 + -1;
        *(undefined8 *)(param_1[2] + lVar12) = ((undefined8 *)(param_1[2] + lVar12))[-1];
      } while (1 < lVar7);
    }
    *(long *)param_1[2] = local_70;
    if (0 < (int)param_2[0x13]) {
      (**(code **)(*param_1 + 0x128))(param_1,local_70);
    }
  }
  (**(code **)(*param_1 + 0x200))(param_1,&local_55);
  (**(code **)(*param_1 + 0x20))((int)param_1[6],param_1,0);
  fVar15 = *(float *)(param_1 + 0x3d);
  if (((((uint)fVar15 & 0x7f800000) != 0x7f800000) &&
      (plVar5 = (long *)param_1[0x32], plVar5 != (long *)0x0)) && (param_1[4] != 0)) {
    fVar14 = *(float *)(plVar5 + 0x10);
    if (*(float *)(plVar5 + 0x10) <= fVar15) {
      fVar14 = fVar15;
    }
    fVar13 = *(float *)((long)plVar5 + 0x7c);
    if (fVar14 <= *(float *)((long)plVar5 + 0x7c)) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x3d) = fVar13;
    iVar4 = (**(code **)(*plVar5 + 0x88))();
    if (((iVar4 == 0) && (param_1[0x35] != 0)) &&
       (((fVar15 < 0.0 && (0.0 < *(float *)(param_1 + 0x3d))) ||
        ((0.0 < fVar15 && (*(float *)(param_1 + 0x3d) < 0.0)))))) {
      FUN_100584368(param_1,1);
    }
  }
  (**(code **)(*param_1 + 0x48))(*(undefined4 *)((long)param_1 + 0x34),param_1);
  if (param_1[8] != 0) {
    (**(code **)(*param_1 + 0xc0))
              (param_1,param_1[8],(long)*(short *)((long)param_1 + 0x3a),(long)(short)param_1[7],0,0
              );
  }
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd,(long)param_1 + 0x74,0);
  plVar5 = (long *)param_1[0x32];
  if (plVar5 != (long *)0x0) {
    if (param_1[4] != 0) {
      uVar3 = param_2[1];
      if ((uVar3 < param_2[2]) && (plVar5[5] != 0)) {
        (**(code **)(*plVar5 + 0xb0))(plVar5,uVar3,(1 - uVar3) + param_2[2]);
        plVar5 = (long *)param_1[0x32];
        if (plVar5 == (long *)0x0) goto LAB_100583000;
      }
    }
    if ((-2 < (int)param_2[0xc]) && (param_1[4] != 0)) {
      (**(code **)(*plVar5 + 0xb8))();
      plVar5 = (long *)param_1[0x32];
      if (plVar5 == (long *)0x0) goto LAB_100583000;
    }
    uVar3 = *param_2;
    if (param_1[4] != 0) {
      plVar8 = (long *)plVar5[5];
      if (plVar8 != (long *)0x0) {
        iVar4 = (**(code **)(*plVar8 + 0x90))(plVar8,&local_54,2);
        if ((iVar4 != 0) || (local_54 <= uVar3)) goto LAB_100583000;
        plVar5 = (long *)param_1[0x32];
      }
      iVar4 = (**(code **)(*plVar5 + 0x98))(plVar5,uVar3,2);
      if (iVar4 == 0) {
        FUN_100584368(param_1,1);
      }
    }
  }
LAB_100583000:
  (**(code **)(*param_1 + 0x58))(param_1,(char)param_2[0xd]);
  iVar4 = (**(code **)(*param_1 + 0x70))(param_1,0,&local_7c);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x68))(local_7c,param_1,0);
  }
  iVar4 = (**(code **)(*param_1 + 0x70))(param_1,1,&local_7c);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x68))(local_7c,param_1,1);
  }
  iVar4 = (**(code **)(*param_1 + 0x70))(param_1,2,&local_7c);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x68))(local_7c,param_1,2);
  }
  iVar4 = (**(code **)(*param_1 + 0x70))(param_1,3,&local_7c);
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x68))(local_7c,param_1,3);
  }
  if (*(long *)(param_2 + 0xe) != 0 || *(long *)(param_2 + 0x10) != 0) {
    (**(code **)(*param_1 + 0xd8))
              (param_1,*(long *)(param_2 + 0xe),*(long *)(param_2 + 0x10),
               *(undefined1 *)((long)param_2 + 0x36));
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*param_1 + 0x200))(param_1,&local_7d);
    uVar9 = FUN_10062ab0c(param_1,param_1[10],0,1,local_7d,0);
    if ((int)uVar9 != 0) {
      return uVar9;
    }
  }
  FUN_1005838dc(param_1,0,0);
  (**(code **)(**(long **)(param_2 + 4) + 0xf0))();
  *(uint *)(*(long *)(param_2 + 4) + 0x5c) = *(uint *)(*(long *)(param_2 + 4) + 0x5c) & 0xffff7fff;
  return 0;
}




undefined8
FUN_100583198(long *param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
             int param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  int local_34;
  
  if (param_1[0x32] == 0) {
    return 0x1e;
  }
  if (param_3 == 0) {
    if ((*(byte *)(param_1[0x32] + 0x5e) & 1) == 0) {
      param_3 = *(long *)(param_1[1] + 0x15d08);
    }
    else {
      param_3 = 0;
    }
  }
  lVar3 = param_1[4];
  plVar2 = param_1 + 0x37;
  if (lVar3 != 0) {
    plVar4 = (long *)param_1[0x37];
    if (plVar4 == plVar2) {
      plVar5 = (long *)param_1[0x38];
      if (plVar5 == plVar2) goto LAB_100583268;
    }
    else {
      plVar5 = (long *)param_1[0x38];
    }
    *(int *)(lVar3 + 0x194) = *(int *)(lVar3 + 0x194) + -1;
    *plVar5 = (long)plVar4;
    *(long **)(param_1[0x37] + 8) = plVar5;
    param_1[0x37] = (long)plVar2;
    param_1[0x38] = (long)plVar2;
  }
  param_1[4] = param_3;
  param_1[0x39] = (long)param_1;
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + 0x160);
    param_1[0x37] = lVar3;
    param_1[0x38] = param_3 + 0x160;
    *(long **)(lVar3 + 8) = plVar2;
    *(long **)param_1[0x38] = plVar2;
    *(int *)(param_3 + 0x194) = *(int *)(param_3 + 0x194) + 1;
  }
LAB_100583268:
  uVar1 = FUN_100584194(param_1,param_2,param_5);
  if ((int)uVar1 == 0) {
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x40000;
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,1);
    if ((int)uVar1 == 0) {
      uVar6 = 0;
      if (param_6 == 0) {
        uVar6 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x3a) = uVar6;
      *(undefined4 *)((long)param_1 + 0x1d4) = uVar6;
      if ((int)param_5 != 0) {
        uVar1 = FUN_100581af0(param_1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        plVar2 = (long *)param_1[0x32];
        if (plVar2 == (long *)0x0) {
          return 0x1e;
        }
        if (param_1[4] == 0) {
          return 0x1e;
        }
        plVar4 = (long *)plVar2[5];
        if (plVar4 != (long *)0x0) {
          uVar1 = (**(code **)(*plVar4 + 0x90))(plVar4,&local_34,2);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if (local_34 == 0) {
            return 0x20;
          }
          plVar2 = (long *)param_1[0x32];
        }
        uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2,0,2);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        uVar1 = FUN_100584368(param_1,1);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      if ((long *)param_1[0x32] == (long *)0x0) {
        uVar1 = 0x1e;
      }
      else {
        uVar1 = (**(code **)(*(long *)param_1[0x32] + 0x50))();
        if ((int)uVar1 == 0) {
          if ((int)param_5 != 0) {
            local_38 = 0;
            (**(code **)(*param_1 + 0x90))(param_1,&local_38);
            if (((byte)local_38 >> 4 & 1) != 0) {
              local_40 = 0;
              local_48 = 0;
              uVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_1[1] + 0x156c0,&local_48,0);
              if ((int)uVar1 != 0) {
                return uVar1;
              }
            }
          }
          if (((param_4 & 1) != 0) ||
             (uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0), (int)uVar1 == 0)) {
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1005833ec(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 400))();
  lVar2 = *(long *)(param_1 + 400);
  if (iVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 0xd0);
  }
  *param_2 = lVar2;
  return 0;
}




undefined8 FUN_100583430(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100583444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0xa8))();
    return uVar1;
  }
  return 0x1e;
}




undefined8 FUN_100583458(long param_1,int *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_1 + 400);
  if (lVar3 == 0) {
    return 0x1e;
  }
  if (4 < param_3) {
    return 0x13;
  }
  if ((1 << (ulong)(param_3 & 0x1f) & 0x16U) == 0) {
    return 0x13;
  }
  if (4 < param_5) {
    return 0x13;
  }
  if ((1 << (ulong)(param_5 & 0x1f) & 0x16U) == 0) {
    return 0x13;
  }
  lVar4 = *(long *)(lVar3 + 0x28);
  if (lVar4 == 0) {
    return 0x1f;
  }
  if (param_2 != (int *)0x0) {
    if (param_3 == 1) {
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x70));
      iVar5 = (int)((fVar6 * 1000.0) / *(float *)(lVar4 + 100));
    }
    else if (param_3 == 4) {
      uVar2 = *(uint *)(lVar3 + 0x70);
      uVar1 = *(int *)(lVar4 + 0x28) - 1;
      if (uVar1 < 5) {
        uVar2 = *(int *)(&DAT_10115e2e0 + (long)(int)uVar1 * 4) * uVar2 >> 3;
      }
      iVar5 = uVar2 * *(int *)(lVar4 + 0x60);
    }
    else {
      if (param_3 != 2) goto LAB_100583534;
      iVar5 = *(int *)(lVar3 + 0x70);
    }
    *param_2 = iVar5;
  }
LAB_100583534:
  if (param_4 == (uint *)0x0) {
    return 0;
  }
  uVar2 = (*(int *)(lVar3 + 0x70) + *(int *)(lVar3 + 0x74)) - 1;
  if (param_5 == 1) {
    uVar2 = (uint)(((float)uVar2 * 1000.0) / *(float *)(lVar4 + 100));
  }
  else if (param_5 == 4) {
    uVar1 = *(int *)(lVar4 + 0x28) - 1;
    if (uVar1 < 5) {
      uVar2 = *(int *)(&DAT_10115e2e0 + (long)(int)uVar1 * 4) * uVar2 >> 3;
    }
    uVar2 = uVar2 * *(int *)(lVar4 + 0x60);
  }
  else if (param_5 != 2) {
    return 0;
  }
  *param_4 = uVar2;
  return 0;
}




undefined8 FUN_1005835d0(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 400) != 0) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 400) + 0x28);
    return 0;
  }
  *param_2 = 0;
  return 0x1e;
}




undefined8 FUN_100583600(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 400) != 0) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 400) + 0x30);
    return 0;
  }
  *param_2 = 0;
  return 0x1e;
}




undefined8 FUN_100583630(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100583644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0xc0))();
    return uVar1;
  }
  return 0x1e;
}




undefined8 FUN_100583658(long param_1,ulong param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 400);
  if (plVar4 == (long *)0x0) {
    return 0x1e;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0x1e;
  }
  if (4 < param_3) {
    return 0x13;
  }
  if ((1 << (ulong)(param_3 & 0x1f) & 0x16U) != 0) {
    if (4 < param_5) {
      return 0x13;
    }
    if ((1 << (ulong)(param_5 & 0x1f) & 0x16U) == 0) {
      return 0x13;
    }
    lVar6 = plVar4[5];
    if (lVar6 != 0) {
      if (param_3 == 1) {
        param_2 = (ulong)(uint)(int)(((float)(param_2 & 0xffffffff) / 1000.0) *
                                    *(float *)(lVar6 + 100));
      }
      else if (param_3 == 4) {
        uVar1 = *(uint *)(lVar6 + 0x60);
        if (uVar1 == 0) {
          param_2 = 0;
        }
        else {
          uVar2 = *(int *)(lVar6 + 0x28) - 1;
          if (uVar2 < 5) {
            uVar3 = 0;
            if ((long)*(int *)(&DAT_10115e2e0 + (long)(int)uVar2 * 4) != 0) {
              uVar3 = (uint)(((param_2 & 0xffffffff) << 3) /
                            (ulong)(long)*(int *)(&DAT_10115e2e0 + (long)(int)uVar2 * 4));
            }
            uVar2 = 0;
            if (uVar1 != 0) {
              uVar2 = uVar3 / uVar1;
            }
            param_2 = (ulong)uVar2;
          }
        }
      }
      else if (param_3 != 2) {
        param_2 = 0;
      }
      if (param_5 == 1) {
        param_4 = (uint)(((float)param_4 / 1000.0) * *(float *)(lVar6 + 100));
      }
      else if (param_5 != 2) {
        if (param_5 != 4) {
          return 0x1f;
        }
        uVar1 = *(uint *)(lVar6 + 0x60);
        if (uVar1 == 0) {
          return 0x1f;
        }
        uVar2 = *(int *)(lVar6 + 0x28) - 1;
        if (uVar2 < 5) {
          uVar3 = 0;
          if ((long)*(int *)(&DAT_10115e2e0 + (long)(int)uVar2 * 4) != 0) {
            uVar3 = (uint)(((ulong)param_4 << 3) /
                          (ulong)(long)*(int *)(&DAT_10115e2e0 + (long)(int)uVar2 * 4));
          }
          param_4 = 0;
          if (uVar1 != 0) {
            param_4 = uVar3 / uVar1;
          }
        }
      }
      if ((uint)param_2 < param_4) {
                    /* WARNING: Could not recover jumptable at 0x0001005837d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,param_2,(1 - (uint)param_2) + param_4);
        return uVar5;
      }
    }
    return 0x1f;
  }
  return 0x13;
}




undefined8 FUN_1005837e0(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 400) == (long *)0x0) {
    return 0x1e;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (param_2 < -1) {
      return 0x1f;
    }
                    /* WARNING: Could not recover jumptable at 0x00010058381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0xb8))();
    return uVar1;
  }
  return 0x1e;
}




undefined8 FUN_100583820(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint local_34;
  
  plVar1 = *(long **)(param_1 + 400);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x1e;
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    uVar2 = 0x1e;
  }
  else {
    if (((int)param_3 != 0x10) && (plVar3 = (long *)plVar1[5], plVar3 != (long *)0x0)) {
      uVar2 = (**(code **)(*plVar3 + 0x90))(plVar3,&local_34,param_3);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      if (local_34 <= (uint)param_2) {
        return 0x20;
      }
      plVar1 = *(long **)(param_1 + 400);
    }
    uVar2 = (**(code **)(*plVar1 + 0x98))(plVar1,param_2,param_3);
    if ((int)uVar2 == 0) {
      uVar2 = FUN_100584368(param_1,1);
    }
  }
  return uVar2;
}




undefined8 FUN_1005838dc(long *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  char local_35;
  byte local_34 [4];
  
  uVar2 = FUN_10062ab8c();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (param_1[0x32] == 0) {
    return 0x1e;
  }
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_35);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (local_35 == '\0') {
    uVar2 = (**(code **)(*(long *)param_1[0x32] + 0x78))((long *)param_1[0x32],&local_35);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((local_35 != '\0') || ((*(uint *)(param_1 + 9) >> 0x12 & 1) != 0)) goto LAB_10058396c;
    uVar4 = *(uint *)(param_1 + 9) & 0xff3fffff;
  }
  else {
LAB_10058396c:
    uVar4 = *(uint *)(param_1 + 9);
    if ((uVar4 >> 0x16 & 1) != 0) {
      if ((uVar4 >> 0x11 & 1) == 0) {
        *(uint *)(param_1 + 9) = uVar4 & 0xff7bffff | 0x800000;
        uVar2 = FUN_100581db0(param_1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar4 = *(uint *)(param_1 + 9);
      }
      goto LAB_1005839a8;
    }
    uVar4 = uVar4 | 0x400000;
  }
  *(uint *)(param_1 + 9) = uVar4;
LAB_1005839a8:
  if ((uVar4 >> 0x12 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x90))(param_1,local_34);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((local_34[0] >> 3 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        if ((*(uint *)(param_1[0x32] + 0x5c) >> 6 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1[0x32] + 0x5c) >> 5 & 1;
        }
      }
      else {
        uVar4 = 1;
      }
      uVar2 = FUN_1006294f4(param_1,param_2,uVar4);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = FUN_100584368(param_1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    plVar3 = (long *)param_1[0x32];
    if ((plVar3 == (long *)0x0) || (-1 < *(char *)((long)plVar3 + 0x5c))) {
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar4 = *(uint *)(param_1 + 9);
      if ((uVar4 & 0x1000004) == 0) {
        iVar1 = *(int *)(param_1[1] + 0x15a40);
        if (0 < iVar1) {
          lVar5 = 0;
          pcVar6 = (char *)(param_1[1] + 0x1572c);
          do {
            if (*pcVar6 != '\0') goto LAB_100583a8c;
            lVar5 = lVar5 + 1;
            pcVar6 = pcVar6 + 0x70;
          } while (lVar5 < iVar1);
        }
      }
      else {
LAB_100583a8c:
        *(uint *)(param_1 + 9) = uVar4 & 0xfefffffb;
        uVar2 = FUN_100581db0(param_1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
      }
    }
  }
  return 0;
}




undefined8 * FUN_100583ac0(undefined8 *param_1)

{
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)((long)param_1 + 0x3a) = 0;
  param_1[0x20] = param_1 + 0x1f;
  param_1[0x21] = 0;
  param_1[0x1f] = param_1 + 0x1f;
  param_1[0x26] = param_1 + 0x26;
  param_1[0x27] = param_1 + 0x26;
  param_1[0x28] = 0;
  *param_1 = &PTR_FUN_1014a2408;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x29] = param_1 + 0x29;
  param_1[0x2a] = param_1 + 0x29;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  param_1[0x2d] = param_1 + 0x2d;
  param_1[0x2e] = param_1 + 0x2d;
  param_1[0x2f] = 0;
  param_1[0x37] = param_1 + 0x37;
  param_1[0x38] = param_1 + 0x37;
  param_1[0x39] = 0;
  FUN_100583b48();
  return param_1;
}




undefined8 FUN_100583b48(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  uVar1 = FUN_10062aed0(param_1,0);
  if ((int)uVar1 == 0) {
    *(undefined8 *)(param_1 + 400) = 0;
    _memset_pattern16((void *)(param_1 + 0x1ec),&DAT_10115e300,0x80);
    *(undefined4 *)(param_1 + 0x198) = 0x80;
    *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1e8) = 0x472c4400;
    *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
    if (*(void **)(param_1 + 0x40) != (void *)0x0) {
      _memcpy(*(void **)(param_1 + 0x40),(void *)0x0,
              (long)((int)*(short *)(param_1 + 0x38) * (int)*(short *)(param_1 + 0x3a) * 4));
    }
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    *(undefined4 *)(param_1 + 100) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0x4e6e6b28;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
    *(undefined8 *)(param_1 + 0xe0) = 0x44bb800000000000;
    *(undefined1 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(long *)(param_1 + 0x1b8) = param_1 + 0x1b8;
    *(long *)(param_1 + 0x1c0) = param_1 + 0x1b8;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  return uVar1;
}




undefined8 * FUN_100583c48(undefined8 *param_1)

{
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined2 *)((long)param_1 + 0x3a) = 0;
  param_1[0x20] = param_1 + 0x1f;
  param_1[0x21] = 0;
  param_1[0x1f] = param_1 + 0x1f;
  param_1[0x26] = param_1 + 0x26;
  param_1[0x27] = param_1 + 0x26;
  param_1[0x28] = 0;
  *param_1 = &PTR_FUN_1014a2408;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x29] = param_1 + 0x29;
  param_1[0x2a] = param_1 + 0x29;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  param_1[0x2d] = param_1 + 0x2d;
  param_1[0x2e] = param_1 + 0x2d;
  param_1[0x2f] = 0;
  param_1[0x37] = param_1 + 0x37;
  param_1[0x38] = param_1 + 0x37;
  param_1[0x39] = 0;
  FUN_100583b48();
  return param_1;
}




undefined8 FUN_100583cd0(long param_1,uint param_2,long param_3)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x188) = param_2;
  *(long *)(param_1 + 8) = param_3;
  uVar1 = (param_2 & 0xfff) << 0x11 | *(int *)(param_3 + 0x15ce0) << 0x1d | 2;
  *(ulong *)(param_1 + 0x50) = (ulong)uVar1;
  *(uint *)(param_1 + 0x18c) = uVar1;
  return 0;
}




undefined8 FUN_100583d04(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 8);
    return 0;
  }
  return 0x1f;
}




ulong FUN_100583d28(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = param_1[4];
  plVar4 = param_1 + 0x37;
  if (lVar3 != 0) {
    plVar6 = (long *)param_1[0x37];
    if (plVar6 == plVar4) {
      plVar7 = (long *)param_1[0x38];
      if (plVar7 == plVar4) {
        return 0;
      }
    }
    else {
      plVar7 = (long *)param_1[0x38];
    }
    *(int *)(lVar3 + 0x194) = *(int *)(lVar3 + 0x194) + -1;
    *plVar7 = (long)plVar6;
    *(long **)(param_1[0x37] + 8) = plVar7;
    param_1[0x37] = (long)plVar4;
    param_1[0x38] = (long)plVar4;
  }
  param_1[4] = param_2;
  param_1[0x39] = (long)param_1;
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x160);
    param_1[0x37] = lVar8;
    param_1[0x38] = param_2 + 0x160;
    *(long **)(lVar8 + 8) = plVar4;
    *(long **)param_1[0x38] = plVar4;
    *(int *)(param_2 + 0x194) = *(int *)(param_2 + 0x194) + 1;
    plVar4 = (long *)param_1[0x32];
    uVar5 = 0x1e;
    if (plVar4 != (long *)0x0) {
      uVar5 = 0;
    }
    if (plVar4 == (long *)0x0) {
      return (ulong)uVar5;
    }
    if (((param_3 ^ 1) & 1) != 0) {
      return (ulong)uVar5;
    }
    uVar2 = (**(code **)(*plVar4 + 8))(plVar4,lVar3,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x58))(param_1,*(uint *)(param_1 + 9) >> 1 & 1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,*(uint *)(param_1 + 9) & 1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    (**(code **)(*param_1 + 0x20))((int)param_1[6],param_1,0);
    if ((*(byte *)(param_1[0x32] + 0x58) >> 4 & 1) == 0) {
      (**(code **)(*param_1 + 0xc0))
                (param_1,param_1[8],(long)*(short *)((long)param_1 + 0x3a),(long)(short)param_1[7],0
                 ,0);
    }
    fVar11 = *(float *)(param_1 + 0x3d);
    if (((((uint)fVar11 & 0x7f800000) != 0x7f800000) &&
        (plVar4 = (long *)param_1[0x32], plVar4 != (long *)0x0)) && (param_1[4] != 0)) {
      fVar10 = *(float *)(plVar4 + 0x10);
      if (*(float *)(plVar4 + 0x10) <= fVar11) {
        fVar10 = fVar11;
      }
      fVar9 = *(float *)((long)plVar4 + 0x7c);
      if (fVar10 <= *(float *)((long)plVar4 + 0x7c)) {
        fVar9 = fVar10;
      }
      *(float *)(param_1 + 0x3d) = fVar9;
      iVar1 = (**(code **)(*plVar4 + 0x88))();
      if (((iVar1 == 0) && (param_1[0x35] != 0)) &&
         (((fVar11 < 0.0 && (0.0 < *(float *)(param_1 + 0x3d))) ||
          ((0.0 < fVar11 && (*(float *)(param_1 + 0x3d) < 0.0)))))) {
        FUN_100584368(param_1,1);
      }
    }
  }
  return 0;
}




undefined8 FUN_100583f0c(long *param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_48;
  
  if (*(int *)(param_2 + 0xa8) == 0) {
    if ((param_3 & 1) != 0) {
      local_48 = 0;
      uVar5 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_48,0,0,0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      param_1[0x35] = 0;
      *(undefined4 *)(param_1 + 3) = 1;
      param_1[2] = 0;
      param_1[5] = 0;
      lVar6 = param_1[1];
      if ((*(byte *)(param_1[0x32] + 0x5e) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar6 + 0x160b0);
      }
      uVar2 = *(uint *)(param_1 + 9);
      *(uint *)(param_1 + 9) = uVar2 & 0xfffdffdc;
      *(undefined4 *)((long)param_1 + 0x1e4) = 0;
      _memset_pattern16((void *)((long)param_1 + 0x1ec),&DAT_10115e300,0x80);
      *(undefined4 *)((long)param_1 + 0x1dc) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
      *(uint *)(param_1 + 9) = uVar2 & 0xfeedffd8;
      *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x8c) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x15) = 0;
      *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x74);
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x78);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x7c);
      *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x80);
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x84);
      *(undefined4 *)((long)param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)((long)param_1 + 0xa4) = 0x3f800000;
      param_1[0x19] = *(long *)(param_2 + 0x88);
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x90);
      *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0xdc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1d) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(lVar6 + 0x15c74);
      *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x5c) = 0;
      if (lVar6 != 0) {
        FUN_1005e3370(lVar6 + 0x16658,(int)param_1[0x31]);
        FUN_1005e3370(param_1[1] + 0x16678,(int)param_1[0x31]);
        FUN_1005e3370(param_1[1] + 0x16698,(int)param_1[0x31]);
        FUN_1005e3370(param_1[1] + 0x166b8,(int)param_1[0x31]);
      }
      *(undefined1 *)(param_1 + 0x24) = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
    }
    lVar6 = param_1[0x32];
    if (lVar6 == 0) {
      uVar5 = 0x1e;
    }
    else {
      *(long *)(lVar6 + 0x28) = param_2;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(lVar6 + 0x70) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(lVar6 + 0x74) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(lVar6 + 0x6c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(lVar6 + 0x78) = *(undefined4 *)(param_2 + 0x3c);
      *(long **)(lVar6 + 0x18) = param_1;
      puVar1 = (uint *)(param_2 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 & 0xfffff7ff;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar5 = (**(code **)(*(long *)param_1[0x32] + 0x40))();
      if ((int)uVar5 == 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (*(long *)(param_2 + 0xb0) != 0) {
          puVar1 = (uint *)(*(long *)(param_2 + 0xb0) + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0x3c;
  }
  return uVar5;
}




undefined8 FUN_100584178(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100584188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0x50))();
    return uVar1;
  }
  return 0x1e;
}




undefined8 FUN_100584194(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  
  plVar2 = (long *)param_1[0x32];
  if (plVar2 == (long *)0x0) {
    uVar3 = 0x1e;
  }
  else {
    *(long **)(param_2 + 0x1b0) = param_1;
    plVar2[5] = 0;
    plVar2[6] = param_2;
    *(undefined4 *)(plVar2 + 0xe) = 0;
    *(undefined4 *)((long)plVar2 + 0x74) = 0xffffffff;
    *(undefined4 *)((long)plVar2 + 0x6c) = 0xffffffff;
    *(undefined4 *)(plVar2 + 0xb) = 8;
    plVar2[3] = (long)param_1;
    if (param_3 != 0) {
      local_38 = 0;
      uVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_38,0,0,0);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      param_1[0x35] = 0;
      *(undefined4 *)(param_1 + 3) = 1;
      param_1[2] = 0;
      param_1[5] = 0;
      lVar4 = param_1[1];
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar4 + 0x160b0);
      }
      uVar1 = *(uint *)(param_1 + 9);
      *(uint *)(param_1 + 9) = uVar1 & 0xfffdffdc;
      *(undefined4 *)((long)param_1 + 0x1e4) = 0;
      _memset_pattern16((void *)((long)param_1 + 0x1ec),&DAT_10115e300,0x80);
      *(undefined4 *)(param_1 + 0x15) = 0;
      *(undefined4 *)((long)param_1 + 0x1dc) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
      *(uint *)(param_1 + 9) = uVar1 & 0xfeedffd8;
      *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x8c) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x84) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x11) = 0x461c4000;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x12) = 0x43b40000;
      *(undefined4 *)((long)param_1 + 0x94) = 0x43b40000;
      *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)((long)param_1 + 0xa4) = 0x3f800000;
      param_1[0x19] = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0xdc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1d) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(lVar4 + 0x15c74);
      *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x5c) = 0;
      if (lVar4 != 0) {
        FUN_1005e3370(lVar4 + 0x16658,(int)param_1[0x31]);
        FUN_1005e3370(param_1[1] + 0x16678,(int)param_1[0x31]);
        FUN_1005e3370(param_1[1] + 0x16698,(int)param_1[0x31]);
        FUN_1005e3370(param_1[1] + 0x166b8,(int)param_1[0x31]);
      }
      *(undefined1 *)(param_1 + 0x24) = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      plVar2 = (long *)param_1[0x32];
    }
    uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
  }
  return uVar3;
}




undefined8 FUN_100584368(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  uint local_34;
  
  plVar3 = *(long **)(param_1 + 400);
  lVar8 = plVar3[5];
  if (lVar8 != 0) {
    if (((*(undefined8 **)(lVar8 + 0xe8) != (undefined8 *)0x0) && (*(int *)(lVar8 + 0xdc) != 0)) &&
       (*(long *)(param_1 + 0x1a8) == 0)) {
      *(undefined8 *)(param_1 + 0x1a8) = **(undefined8 **)(lVar8 + 0xe8);
    }
    if (*(long *)(param_1 + 0x1a8) != 0) {
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3,&local_34,2), iVar2 == 0)) {
        fVar10 = *(float *)(param_1 + 0x1e8);
        if (param_2 == 0) {
          if ((0.0 < fVar10) && (local_34 < *(uint *)(param_1 + 0x1b0))) goto LAB_1005844cc;
          if (0.0 <= fVar10) {
            bVar1 = false;
            goto LAB_1005844d4;
          }
          if (*(uint *)(param_1 + 0x1b0) < local_34) goto LAB_1005844cc;
          bVar1 = false;
          do {
            while( true ) {
              fVar10 = *(float *)(param_1 + 0x1e8);
LAB_1005844d4:
              if ((fVar10 <= 0.0) ||
                 (plVar3 = *(long **)(param_1 + 0x1a8), local_34 <= *(uint *)((long)plVar3 + 0x2c)))
              break;
LAB_10058452c:
              plVar9 = plVar3;
              if (plVar3 != *(long **)(lVar8 + 0xf0)) {
                plVar9 = (long *)*plVar3;
                if (((*(long *)(lVar8 + 0xa0) == 0) ||
                    ((uint)*(ushort *)(plVar3 + 6) == *(uint *)(lVar8 + 0xb8))) &&
                   ((*(long *)(param_1 + 0x128) != 0 &&
                    (uVar4 = FUN_10062ab0c(param_1,*(undefined8 *)(param_1 + 0x50),0,2,
                                           *(undefined2 *)((long)plVar3 + 0x32),0), (int)uVar4 != 0)
                    ))) {
                  return uVar4;
                }
                *(long **)(param_1 + 0x1a8) = plVar9;
              }
              if (bVar1) {
                if (plVar9 == (long *)*(long *)(lVar8 + 0xf0)) {
                  bVar1 = false;
                  *(undefined8 *)(param_1 + 0x1a8) = **(undefined8 **)(lVar8 + 0xe8);
                }
                else {
LAB_1005844cc:
                  bVar1 = true;
                }
              }
              else {
                bVar1 = false;
              }
            }
            if (0.0 <= fVar10) {
              if (!bVar1) goto LAB_1005845a8;
              plVar3 = *(long **)(param_1 + 0x1a8);
            }
            else {
              plVar3 = *(long **)(param_1 + 0x1a8);
              if (!(bool)(bVar1 | local_34 < *(uint *)((long)plVar3 + 0x2c))) goto LAB_1005845a8;
            }
            if (0.0 < fVar10) goto LAB_10058452c;
            plVar9 = plVar3;
            if (plVar3 != *(long **)(lVar8 + 0xe8)) {
              plVar9 = (long *)plVar3[1];
              if ((((*(long *)(lVar8 + 0xa0) == 0) ||
                   ((uint)*(ushort *)(plVar3 + 6) == *(uint *)(lVar8 + 0xb8))) &&
                  (*(long *)(param_1 + 0x128) != 0)) &&
                 (uVar4 = FUN_10062ab0c(param_1,*(undefined8 *)(param_1 + 0x50),0,2,
                                        *(undefined2 *)((long)plVar3 + 0x32),0), (int)uVar4 != 0)) {
                return uVar4;
              }
              *(long **)(param_1 + 0x1a8) = plVar9;
            }
            if (bVar1) {
              if (plVar9 != *(long **)(lVar8 + 0xe8)) goto LAB_1005844cc;
              bVar1 = false;
              *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(*(long *)(lVar8 + 0xf0) + 8);
            }
            else {
              bVar1 = false;
            }
          } while( true );
        }
        if (fVar10 <= 0.0) {
          puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0xf0) + 8);
          *(undefined8 **)(param_1 + 0x1a8) = puVar5;
        }
        else {
          puVar5 = (undefined8 *)**(long **)(lVar8 + 0xe8);
          *(undefined8 **)(param_1 + 0x1a8) = puVar5;
        }
        do {
          if ((fVar10 <= 0.0) || (local_34 <= *(uint *)((long)puVar5 + 0x2c))) {
            if ((0.0 <= fVar10) || (*(uint *)((long)puVar5 + 0x2c) <= local_34)) break;
            uVar6 = *(uint *)((long)puVar5 + 0x2c);
            if (0.0 < fVar10) goto LAB_10058448c;
            if (uVar6 <= local_34) break;
            puVar5 = (undefined8 *)puVar5[1];
            *(undefined8 **)(param_1 + 0x1a8) = puVar5;
            puVar7 = *(undefined8 **)(lVar8 + 0xe8);
          }
          else {
            uVar6 = *(uint *)((long)puVar5 + 0x2c);
LAB_10058448c:
            if (local_34 <= uVar6) break;
            puVar5 = (undefined8 *)*puVar5;
            *(undefined8 **)(param_1 + 0x1a8) = puVar5;
            puVar7 = *(undefined8 **)(lVar8 + 0xf0);
          }
        } while (puVar5 != puVar7);
      }
LAB_1005845a8:
      *(uint *)(param_1 + 0x1b0) = local_34;
    }
  }
  return 0;
}




undefined8 FUN_100584654(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100584664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0x60))();
    return uVar1;
  }
  return 0x1e;
}




void FUN_100584670(undefined8 param_1)

{
  FUN_100582560(param_1,0x5b);
  return;
}




undefined8 FUN_100584678(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  if (param_1[0x32] == 0) {
    uVar3 = 0x1e;
  }
  else if (param_1[4] == 0) {
    uVar3 = 0x1e;
  }
  else {
    uVar2 = *(uint *)(param_1 + 9) | 1;
    if (param_2 == 0) {
      uVar2 = *(uint *)(param_1 + 9) & 0xfffffffe;
    }
    *(uint *)(param_1 + 9) = uVar2;
    uVar1 = (*(byte *)(param_1[4] + 0x48) & 0x10) >> 4;
    if (((uVar2 >> 0x12 & 1) != 0) && ((param_2 & 1) == 0 && uVar1 == 0)) {
      local_24 = 0;
      *(uint *)(param_1 + 9) = uVar2 & 0xfffbffff;
      FUN_100581db0(param_1);
      (**(code **)(*param_1 + 0x90))(param_1,&local_24);
      if (((byte)local_24 >> 4 & 1) != 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x80000;
        FUN_1005838dc(param_1,0,1);
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfff7ffff;
      }
    }
    uVar3 = (**(code **)(*(long *)param_1[0x32] + 0x70))((long *)param_1[0x32],param_2 | uVar1);
    if ((int)uVar3 == 0) {
      if (((param_2 & 1) == 0 && uVar1 == 0) && ((*(uint *)(param_1 + 9) >> 0x17 & 1) != 0)) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xff3fffff;
        uVar3 = FUN_100581db0(param_1);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_10058477c(long param_1,byte *param_2)

{
  if (param_2 == (byte *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 400) != 0) {
    *param_2 = (byte)*(undefined4 *)(param_1 + 0x48) & 1;
    return 0;
  }
  return 0x1e;
}




undefined8 FUN_1005847b8(float param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  float fVar3;
  
  uVar2 = SUB41(param_1,0);
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    uVar1 = 0x1d;
  }
  else if (*(long **)(param_2 + 400) == (long *)0x0) {
    uVar1 = 0x1e;
  }
  else {
    fVar3 = *(float *)(param_2 + 0x30);
    *(float *)(param_2 + 0x30) = param_1;
    if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
      uVar2 = 0;
    }
    uVar1 = (**(code **)(**(long **)(param_2 + 400) + 0x80))(uVar2);
    if (((int)uVar1 == 0) &&
       (((fVar3 == param_1 && (int)param_3 == 0 ||
         ((*(byte *)(*(long *)(param_2 + 400) + 0x5e) & 1) != 0)) ||
        (uVar1 = FUN_10062ab8c(param_2,0,0,param_3), (int)uVar1 == 0)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_10058486c(long param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 400) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x30);
    return 0;
  }
  return 0x1e;
}




undefined8 FUN_10058489c(undefined8 param_1,long *param_2)

{
  float fVar1;
  undefined8 uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined8 local_38;
  
  uVar2 = FUN_10062adb8();
  if ((((int)uVar2 == 0) &&
      (uVar2 = (**(code **)(*param_2 + 0x118))(param_2,0,&local_38), (int)uVar2 == 0)) &&
     (uVar2 = FUN_1005cf940(param_1,local_38), (int)uVar2 == 0)) {
    fVar5 = *(float *)(param_2 + 0x3d);
    if (((uint)fVar5 & 0x7f800000) == 0x7f800000) {
      uVar2 = 0x1d;
    }
    else {
      plVar3 = (long *)param_2[0x32];
      if (plVar3 == (long *)0x0) {
        uVar2 = 0x1e;
      }
      else if (param_2[4] == 0) {
        uVar2 = 0x1e;
      }
      else {
        fVar4 = *(float *)(plVar3 + 0x10);
        if (*(float *)(plVar3 + 0x10) <= fVar5) {
          fVar4 = fVar5;
        }
        fVar1 = *(float *)((long)plVar3 + 0x7c);
        if (fVar4 <= *(float *)((long)plVar3 + 0x7c)) {
          fVar1 = fVar4;
        }
        *(float *)(param_2 + 0x3d) = fVar1;
        uVar2 = (**(code **)(*plVar3 + 0x88))();
        if ((int)uVar2 == 0) {
          if ((param_2[0x35] != 0) &&
             (((fVar5 < 0.0 && (0.0 < *(float *)(param_2 + 0x3d))) ||
              ((0.0 < fVar5 && (*(float *)(param_2 + 0x3d) < 0.0)))))) {
            FUN_100584368(param_2,1);
          }
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}




undefined8 FUN_1005849a8(long param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 400) != 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1e8);
    return 0;
  }
  return 0x1e;
}




undefined8
FUN_100584bb4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  char local_49;
  long local_48;
  
  local_49 = '\0';
  uVar1 = FUN_10062af80();
  if ((int)uVar1 == 0) {
    if (param_1[0x32] == 0) {
      uVar1 = 0x1e;
    }
    else if (param_1[4] == 0) {
      uVar1 = 0x1e;
    }
    else if ((param_6 == 0) || ((*(byte *)(param_1[0x32] + 0x58) >> 4 & 1) == 0)) {
      (**(code **)(*param_1 + 0x200))(param_1,&local_49);
      if (local_49 == '\0') {
        uVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffd,&local_48);
        if (((int)uVar1 == 0) &&
           ((local_48 != 0 ||
            (uVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffe,&local_48), (int)uVar1 == 0)
            ))) {
          uVar1 = FUN_100614548(*(undefined8 *)(local_48 + 0x1c8),param_2,param_3,param_4,param_5,
                                (ulong)((*(uint *)(param_1 + 9) & 0xc0000) == 0) << 6,
                                (*(uint *)(param_1[0x32] + 0x5c) & 0x10000) == 0);
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_100584ce0(long *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  if (param_3 < 0x21) {
    if (param_2 == 0) {
      uVar1 = 0x1f;
    }
    else {
      if (0 < param_3) {
        lVar3 = 0;
        iVar2 = 0;
        do {
          fVar4 = *(float *)(param_2 + lVar3 * 4);
          if (((uint)fVar4 & 0x7f800000) == 0x7f800000) {
            return 0x1d;
          }
          iVar2 = (uint)(*(float *)((long)param_1 + lVar3 * 4 + 0x1ec) != fVar4) + iVar2;
          *(float *)((long)param_1 + lVar3 * 4 + 0x1ec) = fVar4;
          lVar3 = lVar3 + 1;
        } while (lVar3 < param_3);
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 0x20))((int)param_1[6],param_1,0);
          (**(code **)(*param_1 + 0xc0))
                    (param_1,param_1[8],(long)*(short *)((long)param_1 + 0x3a),
                     (long)(short)param_1[7],0,0);
        }
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x40;
  }
  return uVar1;
}




undefined8 FUN_100584db4(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (0x100 < param_2) {
    return 0x1f;
  }
  *(uint *)(param_1 + 0x198) = param_2;
  uVar1 = FUN_100581db0();
  return uVar1;
}




undefined8 FUN_100584dcc(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x198);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100584df0(float param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if (*(long **)(param_2 + 400) == (long *)0x0) {
    return 0x1e;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
      return 0x1d;
    }
    fVar2 = 0.0;
    if (0.0 <= param_1) {
      fVar2 = param_1;
    }
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    *(float *)(param_2 + 0x1dc) = fVar3;
                    /* WARNING: Could not recover jumptable at 0x000100584e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_2 + 400) + 200))();
    return uVar1;
  }
  return 0x1e;
}




undefined8 FUN_100584e58(long param_1,undefined4 *param_2)

{
  if (*(long *)(param_1 + 400) == 0) {
    return 0x1e;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1dc);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100584e88(float param_1,float param_2,long param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(param_3 + 400) == 0) {
    return 0x1e;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    if ((*(byte *)(*(long *)(param_3 + 400) + 0x58) >> 4 & 1) == 0) {
      return 0x28;
    }
    fVar1 = 1.0;
    if (param_1 <= 1.0) {
      fVar1 = param_1;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    fVar1 = 1.0;
    if (param_2 <= 1.0) {
      fVar1 = param_2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar1) {
      fVar3 = fVar1;
    }
    *(float *)(param_3 + 0xa8) = fVar2;
    *(float *)(param_3 + 0xac) = fVar3;
    if (param_4 != 0) {
      *(float *)(param_3 + 0xb0) = fVar2;
      *(float *)(param_3 + 0xb4) = fVar3;
    }
    return 0;
  }
  return 0x1e;
}




undefined8 FUN_100584f08(float param_1,float param_2,long *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if (param_3[0x32] == 0) {
    return 0x1e;
  }
  if (param_3[4] == 0) {
    return 0x1e;
  }
  if ((*(byte *)(param_3[0x32] + 0x58) >> 4 & 1) == 0) {
    return 0x28;
  }
  if ((((uint)param_1 & 0x7f800000) != 0x7f800000) && (((uint)param_2 & 0x7f800000) != 0x7f800000))
  {
    fVar2 = 1.0;
    if (param_1 <= 1.0) {
      fVar2 = param_1;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    *(float *)(param_3 + 0x17) = fVar3;
    fVar2 = 1.0;
    if (param_2 <= 1.0) {
      fVar2 = param_2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    *(float *)((long)param_3 + 0xbc) = fVar3;
                    /* WARNING: Could not recover jumptable at 0x000100584fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_3 + 0x198))
                      ((int)param_3[0x15],*(undefined4 *)((long)param_3 + 0xac),param_3,0);
    return uVar1;
  }
  return 0x1d;
}




undefined8 FUN_100584fa8(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(long *)(param_1 + 400) == 0) {
    return 0x1e;
  }
  if ((*(byte *)(*(long *)(param_1 + 400) + 0x58) >> 4 & 1) == 0) {
    return 0x28;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xac);
    return 0;
  }
  return 0;
}




undefined8 FUN_100585000(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(long *)(param_1 + 400) == 0) {
    return 0x1e;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0x1e;
  }
  if ((*(byte *)(*(long *)(param_1 + 400) + 0x58) >> 4 & 1) == 0) {
    return 0x28;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xb8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xbc);
    return 0;
  }
  return 0;
}




undefined8 FUN_10058506c(float param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 400);
  if (lVar2 == 0) {
    return 0x1e;
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    return 0x1e;
  }
  if ((*(byte *)(lVar2 + 0x58) >> 4 & 1) == 0) {
    return 0x28;
  }
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = 0x1f;
  if ((0.0 <= param_1) && (param_1 <= 1.0)) {
    uVar1 = 0;
    *(float *)(param_2 + 0xd8) = param_1;
    if ((param_1 < 1.0) && ((*(uint *)(lVar2 + 0x5c) & 0x20) != 0)) {
      uVar1 = FUN_1005838dc(param_2,0,0);
      return uVar1;
    }
  }
  return uVar1;
}




undefined8 FUN_100585104(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  if (uVar2 < 4) {
    if (*(long *)(param_2 + 400) == 0) {
      uVar1 = 0x1e;
    }
    else if (*(long *)(param_2 + 0x20) == 0) {
      uVar1 = 0x1e;
    }
    else if (*(char *)(*(long *)(param_2 + 0x20) + (long)(int)uVar2 + 0x1e8) == '\0') {
      uVar1 = FUN_1005e391c(param_1,*(long *)(param_2 + 8) + (long)(int)uVar2 * 0x20 + 0x16658,
                            *(undefined4 *)(param_2 + 0x188),0);
      if ((int)uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001005851c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(long **)(param_2 + 400) + 0xd0))
                          (param_1,*(long **)(param_2 + 400),param_3);
        return uVar1;
      }
    }
    else {
      uVar1 = 0x3a;
    }
  }
  else {
    uVar1 = 0x3b;
  }
  return uVar1;
}




void FUN_1005851c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1005e391c(*(long *)(param_2 + 8) + (long)(int)param_3 * 0x20 + 0x16658,
                        *(undefined4 *)(param_2 + 0x188),0);
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100585238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 400) + 0xd0))(param_1,*(long **)(param_2 + 400),param_3);
  return;
}




undefined8 FUN_10058523c(long param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  if (3 < param_2) {
    return 0x3b;
  }
  uVar1 = FUN_1005e38a8(*(long *)(param_1 + 8) + (long)(int)param_2 * 0x20 + 0x16658,
                        *(undefined4 *)(param_1 + 0x188),param_3,0);
  return uVar1;
}




void FUN_100585280(long param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = *(long *)(*(long *)(param_1 + 8) + 0x15d08);
  }
  FUN_100583d28(param_1,param_2,1,0);
  return;
}




undefined8 FUN_1005852a0(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005852c4(long param_1,char *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == (char *)0x0) {
    uVar4 = 0x1f;
  }
  else {
    *param_2 = '\0';
    plVar3 = *(long **)(param_1 + 400);
    if (plVar3 == (long *)0x0) {
      uVar4 = 0x1e;
    }
    else if (*(char *)((long)plVar3 + 0x5c) < '\0') {
      uVar4 = 0;
      *param_2 = '\0';
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0xd8))(plVar3,param_2,0);
      if ((int)uVar4 == 0) {
        if (*param_2 == '\0') {
          lVar5 = *(long *)(param_1 + 400);
          if ((*(byte *)(lVar5 + 0x5e) & 1) == 0) {
            *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
            if (*(long *)(param_1 + 0x158) != 0) {
              lVar1 = param_1 + 0x148;
              puVar2 = *(undefined8 **)(param_1 + 0x150);
              *puVar2 = *(undefined8 *)(param_1 + 0x148);
              *(undefined8 **)(*(long *)(param_1 + 0x148) + 8) = puVar2;
              *(long *)(param_1 + 0x150) = lVar1;
              *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
              lVar6 = *(long *)(param_1 + 8);
              uVar4 = *(undefined8 *)(lVar6 + 0x6a0);
              *(long *)(param_1 + 0x148) = lVar6 + 0x698;
              *(undefined8 *)(param_1 + 0x150) = uVar4;
              *(long *)(lVar6 + 0x6a0) = lVar1;
              **(long **)(param_1 + 0x150) = lVar1;
              *(long *)(param_1 + 0x158) = param_1;
            }
            if (*(long *)(param_1 + 0x178) == 0) {
              uVar4 = 0;
            }
            else {
              lVar5 = *(long *)(lVar5 + 0x28);
              if (lVar5 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = 0;
                lVar1 = param_1 + 0x168;
                puVar2 = *(undefined8 **)(param_1 + 0x170);
                *puVar2 = *(undefined8 *)(param_1 + 0x168);
                *(undefined8 **)(*(long *)(param_1 + 0x168) + 8) = puVar2;
                *(long *)(param_1 + 0x170) = lVar1;
                *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
                lVar5 = *(long *)(lVar5 + 0x110);
                *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(lVar5 + 0x48);
                *(long *)(param_1 + 0x168) = lVar5 + 0x40;
                *(long *)(lVar5 + 0x48) = lVar1;
                **(long **)(param_1 + 0x170) = lVar1;
                *(long *)(param_1 + 0x178) = param_1;
              }
            }
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}




undefined8 FUN_100585408(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    return 0x1f;
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010058541c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0xe0))();
    return uVar1;
  }
  *param_2 = 0;
  return 0x1e;
}




undefined8 FUN_100585434(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long **)(param_1 + 400) != (long *)0x0) && (*(long *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100585450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0x10))();
    return uVar1;
  }
  return 0x1e;
}




undefined8
FUN_10058545c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 400) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010058546c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 400) + 0x18))();
    return uVar1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  return 0x1e;
}




undefined8 FUN_100585498(long *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_78;
  char local_72;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  uVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_48,&local_50,&local_58,&local_60);
  if (((int)uVar3 == 0) &&
     (uVar3 = (**(code **)(*param_1 + 0x18))(param_1,&local_72), lVar1 = local_48, (int)uVar3 == 0))
  {
    if (param_2 != 0) {
      local_48 = param_2;
    }
    if (param_3 != 0) {
      local_50 = param_3;
    }
    lVar2 = param_4;
    if ((param_4 == 0) && (lVar2 = param_4, (param_5 & 1) == 0)) {
      lVar2 = local_60;
    }
    local_60 = lVar2;
    uVar3 = (**(code **)(*param_1 + 0x1f0))(param_1,local_48,local_50,local_58,local_60);
    if (((int)uVar3 == 0) &&
       ((param_2 == 0 ||
        (((((uVar3 = FUN_1005c9bb8(lVar1,&uStack_68,&local_70,&local_71), (int)uVar3 == 0 &&
            (uVar3 = FUN_1005cf9d8(lVar1,&local_78), (int)uVar3 == 0)) &&
           (uVar3 = FUN_1005c9b2c(local_48,uStack_68,local_70,local_71), (int)uVar3 == 0)) &&
          ((((uVar3 = FUN_1005cf940(local_78,local_48), (int)uVar3 == 0 &&
             (uVar3 = FUN_1005c9b2c(lVar1,0,0,0), (int)uVar3 == 0)) &&
            ((uVar3 = FUN_1005cf940(0x3f800000,lVar1), (int)uVar3 == 0 &&
             ((plVar4 = (long *)param_1[0x32], plVar4 == (long *)0x0 ||
              (uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,local_72), (int)uVar3 == 0)))))) &&
           (uVar3 = FUN_1005c986c(lVar1,1,1), (int)uVar3 == 0)))) &&
         (((plVar4 = (long *)param_1[0x32], plVar4 == (long *)0x0 || (local_72 == '\0')) ||
          (uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,1), (int)uVar3 == 0)))))))) {
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_100585630(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 400);
  if (lVar2 == 0) {
    return 0x1e;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(lVar2 + 0x28) == 0) {
      if (*(long *)(lVar2 + 0x30) == 0) {
        return 0x1e;
      }
      *param_2 = *(undefined4 *)(*(long *)(lVar2 + 0x30) + 0x100);
    }
    else {
      uVar1 = FUN_1005eaffc();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    return 0;
  }
  return 0x1e;
}




undefined8 FUN_10058569c(long param_1)

{
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x1000000;
  return 0;
}




void FUN_1005856b0(undefined8 param_1,undefined8 param_2)

{
  FUN_100582040(param_1,param_2,1);
  return;
}




undefined8 FUN_1005856b8(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x188);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005856dc(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 400) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar1 = FUN_10062aed0();
    return uVar1;
  }
  return 0x1e;
}




undefined8 FUN_1005856f8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xfffffffc,&local_38);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (local_38 == 0) {
      uVar1 = (**(code **)(*param_1 + 0x118))(param_1,0xffffffff,&local_40);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      local_38 = local_40;
      if (local_40 == 0) {
        return 9;
      }
    }
    *param_2 = *(undefined8 *)(local_38 + 8);
  }
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (long *)param_1[4];
    local_48 = 0;
    if (plVar2 == (long *)0x0) {
      uVar1 = 9;
    }
    else {
      uVar1 = (**(code **)(*plVar2 + 0x118))(plVar2,0xfffffffc,&local_48);
      if ((int)uVar1 == 0) {
        if (local_48 == 0) {
          uVar1 = 9;
        }
        else {
          uVar1 = 0;
          *param_3 = *(undefined8 *)(local_48 + 8);
        }
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1005857dc(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long local_40;
  undefined4 local_38;
  
  plVar2 = (long *)param_1[0x32];
  if (plVar2 == (long *)0x0) {
    uVar3 = 0x1e;
  }
  else if (param_1[4] == 0) {
    uVar3 = 0x1e;
  }
  else {
    uVar1 = *(uint *)(plVar2 + 0xb);
    uVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2,param_2);
    if ((int)uVar3 == 0) {
      uVar4 = (uint)param_2;
      if (((uVar4 >> 3 & 1) == 0) || ((uVar1 & 8) != 0)) {
        if ((((uVar4 >> 4 & 1) != 0) && ((uVar1 & 0x10) == 0)) ||
           (((uVar1 ^ uVar4) & 0x4700000) != 0)) {
          local_38 = (undefined4)param_1[0xe];
          local_40 = param_1[0xd];
          *(float *)(param_1 + 0xd) = *(float *)(param_1 + 0xd) + 1.0;
          uVar3 = (**(code **)(*param_1 + 0x140))(param_1,&local_40,(long)param_1 + 0x74,0);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x20))((int)param_1[6],param_1,0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        (**(code **)(*param_1 + 0xc0))
                  (param_1,param_1[8],(long)*(short *)((long)param_1 + 0x3a),(long)(short)param_1[7]
                   ,0,0);
      }
      if ((uVar4 & 0x40000000) == (uVar1 & 0x40000000)) {
        uVar3 = 0;
      }
      else if ((param_2 & 0x40000000) == 0) {
        uVar3 = 0;
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 4;
      }
      else {
        (**(code **)(*param_1 + 0x198))
                  ((int)param_1[0x17],*(undefined4 *)((long)param_1 + 0xbc),param_1,1);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}




undefined8 FUN_10058593c(long param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 400) != 0) {
    *param_2 = *(undefined4 *)(*(long *)(param_1 + 400) + 0x58);
    return 0;
  }
  return 0x1e;
}




void FUN_100585968(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_100585974(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




undefined8 FUN_100585980(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 < 0) {
    uVar2 = 0x1f;
  }
  else {
    if (param_4 != 0) {
      lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_4 << 3,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_channelpool.cpp"
                            ,0x38,0);
      *(long *)(param_1 + 6) = lVar1;
      if (lVar1 == 0) {
        return 0x26;
      }
    }
    uVar2 = 0;
    *param_1 = param_4;
    *(undefined8 *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
  }
  return uVar2;
}




undefined8 FUN_100585a04(int *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 6);
  if (lVar2 != 0) {
    iVar3 = *param_1;
    if (0 < iVar3) {
      lVar4 = 0;
      while( true ) {
        plVar1 = *(long **)(lVar2 + lVar4 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
          iVar3 = *param_1;
        }
        lVar4 = lVar4 + 1;
        if (iVar3 <= lVar4) break;
        lVar2 = *(long *)(param_1 + 6);
      }
      lVar2 = *(long *)(param_1 + 6);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_channelpool.cpp"
                  ,0x60);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_channelpool.cpp"
                ,99);
  return 0;
}




undefined8
FUN_100585ab0(int *param_1,long *param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char local_61;
  
  if (param_2 == (long *)0x0) {
    if (param_5 == (int *)0x0) {
      return 0x1f;
    }
    *param_5 = 0;
    return 0x1f;
  }
  if (param_3 == -1) {
    if (*param_1 < 1) {
      iVar2 = 0;
    }
    else {
      lVar3 = 0;
      iVar2 = 0;
      do {
        plVar5 = *(long **)(*(long *)(param_1 + 6) + lVar3 * 8);
        if (((*(uint *)((long)plVar5 + 0x5c) & 0x8110) == 0) &&
           ((((*(uint *)((long)plVar5 + 0x5c) >> 0xc & 1) == 0 || (param_6 != 0)) &&
            (iVar1 = (**(code **)(*plVar5 + 0xd8))(plVar5,&local_61,1),
            iVar1 == 0 && local_61 == '\0')))) {
          *(uint *)((long)plVar5 + 0x5c) = *(uint *)((long)plVar5 + 0x5c) & 0xffffee6f | 0x110;
          param_2[iVar2] = (long)plVar5;
          iVar2 = iVar2 + 1;
          if (iVar2 == param_4) {
            if (param_5 == (int *)0x0) {
              return 0;
            }
            *param_5 = param_4;
            return 0;
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *param_1);
      if (0 < iVar2) {
        lVar3 = 0;
        do {
          lVar4 = param_2[lVar3];
          if (lVar4 != 0) {
            *(uint *)(lVar4 + 0x5c) = *(uint *)(lVar4 + 0x5c) & 0xfffffe6f | 0x80;
          }
          lVar3 = lVar3 + 1;
        } while (iVar2 != (int)lVar3);
      }
    }
  }
  else if (param_3 < 0) {
    iVar2 = 0;
  }
  else {
    if (param_3 < *param_1) {
      if (1 < param_4) {
        return 2;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 6) + (long)param_3 * 8);
      *(uint *)(lVar3 + 0x5c) = *(uint *)(lVar3 + 0x5c) & 0xfffffe6f | 0x110;
      *param_2 = lVar3;
      return 0;
    }
    iVar2 = 0;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar2;
  }
  return 2;
}




undefined8 FUN_100585c78(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100585c9c(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 4);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_100585cc0(int *param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (((-1 < (int)param_2) && (param_3 != 0)) && ((int)param_2 < *param_1)) {
    uVar4 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
    *(long *)(*(long *)(param_1 + 6) + uVar4) = param_3;
    lVar2 = *(long *)(param_1 + 6);
    *(int **)(*(long *)(lVar2 + uVar4) + 0x10) = param_1;
    plVar3 = *(long **)(lVar2 + uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100585d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x30))
                      (plVar3,param_2,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_100585d0c(int *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if ((-1 < param_2) && (param_3 != (undefined8 *)0x0)) {
    if (*param_1 <= param_2) {
      return 0x1f;
    }
    uVar1 = 0;
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 6) + (long)param_2 * 8);
  }
  return uVar1;
}




undefined8 FUN_100585d48(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x140);
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 400) == *(long *)(lVar1 + 400)) {
      *(undefined8 *)(lVar1 + 400) = 0;
    }
    if ((*(code **)(lVar1 + 0x128) != (code *)0x0) && ((*(byte *)(lVar1 + 0x55) >> 1 & 1) != 0)) {
      (**(code **)(lVar1 + 0x128))(lVar1,0);
      lVar1 = *(long *)(param_1 + 0x140);
      *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xfffffdff;
    }
    FUN_100585d48(lVar1,1);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(code **)(param_1 + 0x78) != (code *)0x0) {
    (**(code **)(param_1 + 0x78))(param_1);
  }
  if (*(long *)(param_1 + 400) != 0) {
    FUN_1005d0f74();
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 400),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec.cpp"
                  ,0x40);
    *(undefined8 *)(param_1 + 400) = 0;
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x168),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec.cpp"
                  ,0x48);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x158),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec.cpp"
                  ,0x4f);
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x150),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec.cpp"
                  ,0x55);
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_1005d8a58();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (param_2 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec.cpp"
                  ,100);
  }
  return 0;
}




undefined8 FUN_100585ec4(long param_1,long param_2,ulong param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint local_19c;
  undefined1 auStack_198 [256];
  int local_98;
  int local_94;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  _bzero(auStack_198,0x130);
  uVar4 = (**(code **)(param_1 + 0xa8))(param_1,*(undefined4 *)(param_1 + 0x13c),auStack_198);
  lVar9 = lVar8;
  if ((int)uVar4 == 0) {
    if (local_98 - 1U < 5) {
      uVar6 = *(uint *)(&DAT_10115e310 + (long)(int)(local_98 - 1U) * 4) >> 3;
    }
    else {
      uVar6 = 1;
    }
    iVar1 = uVar6 * local_94;
    if ((int)param_3 == 0) {
      iVar12 = 0;
      uVar4 = 0;
    }
    else {
      bVar2 = false;
      iVar12 = 0;
      do {
        local_19c = 0;
        uVar6 = *(uint *)(param_1 + 0x170);
        uVar10 = (uint)param_3;
        if ((*(long *)(param_1 + 0x160) == 0) ||
           (((uVar6 <= uVar10 && (param_2 != 0)) && (*(int *)(param_1 + 0x17c) == 0)))) {
          if (uVar6 != 0) {
            uVar7 = 0;
            if (uVar6 != 0) {
              uVar7 = uVar10 / uVar6;
            }
            param_3 = (ulong)(uVar7 * uVar6);
          }
          lVar9 = 0;
          if (param_2 != 0) {
            lVar9 = param_2 + (ulong)(uint)(iVar12 * iVar1);
          }
          uVar4 = (**(code **)(param_1 + 0x80))(param_1,lVar9,param_3,&local_19c);
          bVar3 = true;
          if ((int)uVar4 != 0) {
            bVar3 = bVar2;
          }
          bVar2 = bVar3;
          uVar11 = (ulong)local_19c;
          if ((uint)param_3 < local_19c) {
            uVar11 = param_3;
            local_19c = (uint)param_3;
          }
          *(undefined8 *)(param_1 + 0x178) = 0;
          uVar6 = (uint)uVar11;
        }
        else {
          bVar3 = bVar2;
          if (*(int *)(param_1 + 0x178) == 0) {
            uVar4 = (**(code **)(param_1 + 0x80))
                              (param_1,*(long *)(param_1 + 0x160),uVar6,(int *)(param_1 + 0x17c));
            uVar6 = local_19c;
            bVar3 = true;
            if ((int)uVar4 != 0) goto LAB_10058608c;
          }
          bVar2 = bVar3;
          iVar5 = *(int *)(param_1 + 0x178);
          uVar7 = *(uint *)(param_1 + 0x17c);
          uVar6 = uVar7 - iVar5;
          if (iVar5 + uVar10 <= uVar7) {
            uVar6 = uVar10;
          }
          if (param_2 != 0) {
            _memcpy((void *)(param_2 + (ulong)(uint)(iVar12 * iVar1)),
                    (void *)(*(long *)(param_1 + 0x160) + (ulong)(uint)(iVar5 * iVar1)),
                    (ulong)(uVar6 * iVar1));
            iVar5 = *(int *)(param_1 + 0x178);
            uVar7 = *(uint *)(param_1 + 0x17c);
          }
          *(uint *)(param_1 + 0x178) = iVar5 + uVar6;
          if (uVar7 <= iVar5 + uVar6) {
            *(undefined8 *)(param_1 + 0x178) = 0;
          }
          uVar4 = 0;
          local_19c = uVar6;
        }
LAB_10058608c:
        iVar12 = uVar6 + iVar12;
        param_3 = (ulong)(uVar10 - uVar6);
      } while (((uVar10 - uVar6 != 0) && ((int)uVar4 == 0)) && (uVar6 != 0));
      lVar9 = *(long *)PTR____stack_chk_guard_101444218;
      if (bVar2) {
        FUN_100586108(param_1);
      }
    }
    if (param_4 != (int *)0x0) {
      *param_4 = iVar12;
    }
  }
  if (lVar9 == lVar8) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100586108(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_28;
  
  plVar1 = *(long **)(param_1 + 400);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
    if ((int)uVar2 == 0) {
      lVar3 = *(long *)(param_1 + 0x188);
      if (lVar3 == 0) {
        lVar3 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x48,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec.cpp"
                              ,0x100,0,0);
        *(long *)lVar3 = lVar3;
        *(long *)(lVar3 + 8) = lVar3;
        *(undefined4 *)(lVar3 + 0x38) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined1 *)(lVar3 + 0x3c) = 1;
        *(undefined1 *)(lVar3 + 0x3d) = 0;
        *(undefined4 *)(lVar3 + 0x40) = 0;
        *(long *)(param_1 + 0x188) = lVar3;
        if (lVar3 == 0) {
          return 0x26;
        }
      }
      uVar2 = FUN_1005d8cf8(lVar3,local_28);
    }
  }
  return uVar2;
}




void FUN_1005861c0(long param_1,undefined4 *param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_168 [268];
  undefined4 local_5c;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar2;
  if (param_3 == 8) {
    _bzero(auStack_168,0x130);
    uVar1 = (**(code **)(param_1 + 0xa8))(param_1,*(undefined4 *)(param_1 + 0x13c),auStack_168);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *param_2 = local_5c;
    }
  }
  else {
    if (*(code **)(param_1 + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100586254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x88))(param_1,param_2);
      return;
    }
    *param_2 = 0;
    uVar1 = 0x44;
  }
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar1);
  }
  return;
}




undefined8 FUN_1005865e4(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((uint)param_3 == 8) {
    lVar1 = *(long *)(param_1 + 400);
    if (lVar1 == 0) {
      *param_2 = 0;
    }
    uVar2 = FUN_1005d1ea8(lVar1,param_2);
    if ((int)uVar2 != 0) {
      *param_2 = 0;
      return uVar2;
    }
    *param_2 = *param_2 - *(int *)(param_1 + 0x130);
  }
  if (*(code **)(param_1 + 0x98) == (code *)0x0) {
    uVar2 = 0x44;
  }
  else {
    if ((*(uint *)(param_1 + 0x68) & (uint)param_3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100586664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x98))(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = 0x13;
  }
  return uVar2;
}




undefined8
FUN_100586684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x188);
  if (lVar1 == 0) {
    lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x48,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec.cpp"
                          ,0x218,0,0);
    *(long *)lVar1 = lVar1;
    *(long *)(lVar1 + 8) = lVar1;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined1 *)(lVar1 + 0x3c) = 1;
    *(undefined1 *)(lVar1 + 0x3d) = 0;
    *(undefined4 *)(lVar1 + 0x40) = 0;
    *(long *)(param_1 + 0x188) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
  }
  uVar2 = FUN_1005d8e44(lVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar2;
}




void FUN_100586764(void)

{
  DAT_101e960e0 = "FMOD AIFF Codec";
  DAT_101e960e8 = 0x10100;
  DAT_101e960f0 = 2;
  DAT_101e960f8 = thunk_FUN_10058690c;
  DAT_101e96100 = FUN_1005867d4;
  DAT_101e96108 = thunk_FUN_100586e70;
  DAT_101e96118 = FUN_1005867e4;
  DAT_101e96138 = 1;
  DAT_101e9613c = 0x2d0;
  return;
}




undefined8 FUN_1005867d4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}




void thunk_FUN_100586e70(long param_1,undefined1 (*param_2) [16],uint param_3,uint *param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  undefined1 auVar19 [14];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 uVar22;
  uint uStack_34;
  
  uStack_34 = 0;
  uVar10 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar10 < 5) {
    param_3 = *(int *)(&DAT_10115e330 + (long)(int)uVar10 * 4) * param_3 >> 3;
  }
  uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,
                         param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),&uStack_34);
  if ((uVar10 | 0x10) == 0x10) {
    iVar11 = *(int *)(*(long *)(param_1 + 8) + 0x100);
    uVar10 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
    if (uVar10 != 0) {
      uVar13 = uStack_34;
      if (iVar11 - 1U < 5) {
        uVar7 = 0;
        if ((long)*(int *)(&DAT_10115e330 + (long)(int)(iVar11 - 1U) * 4) != 0) {
          uVar7 = (uint)(((ulong)uStack_34 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115e330 + (long)(int)(iVar11 - 1U) * 4));
        }
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar7 / uVar10;
        }
      }
      *param_4 = uVar13;
    }
    if (iVar11 == 4) {
      if (*(char *)(param_1 + 0x199) == '\0') {
        pauVar16 = param_2;
        if (uStack_34 >> 4 != 0) {
          pauVar16 = param_2 + (ulong)((uStack_34 >> 4) - 1) + 1;
          iVar11 = -(uStack_34 >> 4);
          do {
            uVar7 = (*(uint *)*param_2 & 0xff00ff00) >> 8 | (*(uint *)*param_2 & 0xff00ff) << 8;
            uVar10 = *(uint *)(*param_2 + 8);
            uVar13 = *(uint *)(*param_2 + 0xc);
            uVar8 = (*(uint *)(*param_2 + 4) & 0xff00ff00) >> 8 |
                    (*(uint *)(*param_2 + 4) & 0xff00ff) << 8;
            *(uint *)*param_2 = uVar7 >> 0x10 | uVar7 << 0x10;
            *(uint *)(*param_2 + 4) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
            *(uint *)(*param_2 + 8) = uVar10 >> 0x10 | uVar10 << 0x10;
            uVar10 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            *(uint *)(*param_2 + 0xc) = uVar10 >> 0x10 | uVar10 << 0x10;
            iVar11 = iVar11 + 1;
            param_2 = param_2 + 1;
          } while (iVar11 != 0);
        }
        uVar10 = uStack_34 >> 2 & 3;
        if (uVar10 != 0) {
          uVar13 = uVar10 - 1;
          uVar1 = (ulong)uVar13 + 1;
          uVar12 = uVar1 & 0x1fffffffc;
          if (uVar12 == 0) {
            uVar12 = 0;
            pauVar17 = pauVar16;
          }
          else {
            pauVar17 = (undefined1 (*) [16])(*pauVar16 + uVar12 * 4);
            uVar10 = uVar10 - (int)uVar12;
            uVar14 = (ulong)uVar13 + 1 & 0xfffffffffffffffc;
            do {
              auVar20 = NEON_rev32(*pauVar16,1);
              *(long *)*pauVar16 = auVar20._0_8_;
              auVar20 = NEON_ext(auVar20,auVar20,8,1);
              *(long *)(*pauVar16 + 8) = auVar20._0_8_;
              uVar14 = uVar14 - 4;
              pauVar16 = pauVar16 + 1;
            } while (uVar14 != 0);
          }
          if (uVar1 != uVar12) {
            do {
              uVar13 = (*(uint *)*pauVar17 & 0xff00ff00) >> 8 | (*(uint *)*pauVar17 & 0xff00ff) << 8
              ;
              *(uint *)*pauVar17 = uVar13 >> 0x10 | uVar13 << 0x10;
              uVar10 = uVar10 - 1;
              pauVar17 = (undefined1 (*) [16])(*pauVar17 + 4);
            } while (uVar10 != 0);
          }
        }
      }
    }
    else if (iVar11 == 3) {
      pauVar16 = param_2;
      if (uStack_34 / 0xc != 0) {
        pauVar16 = (undefined1 (*) [16])(*param_2 + (ulong)(uStack_34 / 0xc - 1) * 0xc + 0xc);
        iVar11 = -(uStack_34 / 0xc);
        do {
          uVar22 = (*param_2)[0];
          uVar2 = (*param_2)[3];
          uVar3 = (*param_2)[6];
          uVar4 = (*param_2)[9];
          (*param_2)[0] = (*param_2)[2];
          (*param_2)[3] = (*param_2)[5];
          (*param_2)[6] = (*param_2)[8];
          (*param_2)[9] = (*param_2)[0xb];
          (*param_2)[2] = uVar22;
          (*param_2)[5] = uVar2;
          (*param_2)[8] = uVar3;
          iVar11 = iVar11 + 1;
          (*param_2)[0xb] = uVar4;
          param_2 = (undefined1 (*) [16])(*param_2 + 0xc);
        } while (iVar11 != 0);
      }
      if (((ulong)uStack_34 / 3 & 3) != 0) {
        iVar11 = -(uStack_34 / 3 & 3);
        do {
          uVar22 = (*pauVar16)[0];
          (*pauVar16)[0] = (*pauVar16)[2];
          (*pauVar16)[2] = uVar22;
          iVar11 = iVar11 + 1;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 3);
        } while (iVar11 != 0);
      }
    }
    else if ((iVar11 == 2) && (*(char *)(param_1 + 0x199) == '\0')) {
      pauVar16 = param_2;
      if (uStack_34 >> 3 != 0) {
        pauVar16 = (undefined1 (*) [16])(*param_2 + (ulong)((uStack_34 >> 3) - 1) * 8 + 8);
        iVar11 = -(uStack_34 >> 3);
        do {
          uVar5 = *(ushort *)(*param_2 + 2);
          uVar6 = *(ushort *)(*param_2 + 4);
          *(ushort *)*param_2 = *(ushort *)*param_2 >> 8 | *(ushort *)*param_2 << 8;
          *(ushort *)(*param_2 + 2) = uVar5 >> 8 | uVar5 << 8;
          *(ushort *)(*param_2 + 4) = uVar6 >> 8 | uVar6 << 8;
          *(ushort *)(*param_2 + 6) =
               *(ushort *)(*param_2 + 6) >> 8 | *(ushort *)(*param_2 + 6) << 8;
          iVar11 = iVar11 + 1;
          param_2 = (undefined1 (*) [16])(*param_2 + 8);
        } while (iVar11 != 0);
      }
      uVar10 = uStack_34 >> 1 & 3;
      if (uVar10 != 0) {
        uVar13 = uVar10 - 1;
        uVar1 = (ulong)uVar13 + 1;
        uVar12 = uVar1 & 0x1fffffff8;
        if (uVar12 == 0) {
          uVar12 = 0;
          pauVar17 = pauVar16;
        }
        else {
          uVar10 = uVar10 - (int)uVar12;
          pauVar17 = (undefined1 (*) [16])(*pauVar16 + uVar12 * 2);
          uVar14 = (ulong)uVar13 + 1 & 0xfffffffffffffff8;
          puVar15 = (undefined8 *)(*pauVar16 + 8);
          do {
            uVar18 = *(undefined8 *)*(undefined1 (*) [16])(puVar15 + -1);
            uVar21 = *puVar15;
            uVar22 = (undefined1)((ulong)uVar18 >> 0x28);
            uVar9 = CONCAT11((char)((ulong)uVar18 >> 0x20),uVar22);
            auVar19._0_12_ = ZEXT312(CONCAT12(uVar22,uVar9)) << 0x40;
            auVar19[0xc] = (char)((ulong)uVar18 >> 0x38);
            auVar19[0xd] = (undefined1)((ulong)uVar18 >> 0x30);
            *(ulong *)*(undefined1 (*) [16])(puVar15 + -1) =
                 CONCAT26(auVar19._12_2_,
                          CONCAT24(uVar9,CONCAT22(CONCAT11((char)((ulong)uVar18 >> 0x10),
                                                           (char)((ulong)uVar18 >> 0x18)),
                                                  CONCAT11((char)uVar18,(char)((ulong)uVar18 >> 8)))
                                  ));
            *puVar15 = CONCAT26(CONCAT11((char)((ulong)uVar21 >> 0x30),(char)((ulong)uVar21 >> 0x38)
                                        ),
                                CONCAT24(CONCAT11((char)((ulong)uVar21 >> 0x20),
                                                  (char)((ulong)uVar21 >> 0x28)),
                                         CONCAT22(CONCAT11((char)((ulong)uVar21 >> 0x10),
                                                           (char)((ulong)uVar21 >> 0x18)),
                                                  CONCAT11((char)uVar21,(char)((ulong)uVar21 >> 8)))
                                        ));
            uVar14 = uVar14 - 8;
            puVar15 = puVar15 + 2;
          } while (uVar14 != 0);
        }
        if (uVar1 != uVar12) {
          do {
            *(ushort *)*pauVar17 = *(ushort *)*pauVar17 >> 8 | *(ushort *)*pauVar17 << 8;
            uVar10 = uVar10 - 1;
            pauVar17 = (undefined1 (*) [16])(*pauVar17 + 2);
          } while (uVar10 != 0);
        }
      }
    }
  }
  return;
}




void FUN_1005867e4(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar1 < 5) {
    param_3 = *(int *)(&DAT_10115e330 + (long)(int)uVar1 * 4) * param_3 >> 3;
  }
  FUN_1005d1d28(*(undefined8 *)(param_1 + 400),
                *(int *)(param_1 + 0x130) + param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),0);
  return;
}




undefined4 FUN_10058682c(char *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar5;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar6;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar7;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar8;
  float fVar9;
  
  cVar2 = *param_1;
  uVar1 = (uint)(byte)param_1[1] | ((int)cVar2 & 0x7fU) << 8;
  uVar3 = (uint)(byte)param_1[2] << 0x18 | (uint)(byte)param_1[3] << 0x10 |
          (uint)(byte)param_1[4] << 8 | (uint)(byte)param_1[5];
  uVar4 = (uint)(byte)param_1[6] << 0x18 | (uint)(byte)param_1[7] << 0x10 |
          (uint)(byte)param_1[8] << 8 | (uint)(byte)param_1[9];
  if (uVar1 == 0x7fff || (uVar3 == 0 && uVar1 == 0) && uVar4 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    _ldexpf(SUB41((float)(int)(uVar3 ^ 0x80000000) + 2.1474836e+09,0),uVar1 - 0x401e);
    _ldexpf(SUB41((float)(int)(uVar4 ^ 0x80000000) + 2.1474836e+09,0),uVar1 - 0x403e);
    fVar9 = (float)CONCAT13(extraout_var_03,
                            CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) +
            (float)CONCAT13(extraout_var_04,
                            CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
    uVar5 = SUB41(fVar9,0);
    uVar6 = (undefined1)((uint)fVar9 >> 8);
    uVar7 = (undefined1)((uint)fVar9 >> 0x10);
    uVar8 = (undefined1)((uint)fVar9 >> 0x18);
  }
  fVar9 = -(float)CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
  if (((int)cVar2 & 0x80000000U) != 0) {
    uVar5 = SUB41(fVar9,0);
    uVar6 = (undefined1)((uint)fVar9 >> 8);
    uVar7 = (undefined1)((uint)fVar9 >> 0x10);
    uVar8 = (undefined1)((uint)fVar9 >> 0x18);
  }
  return CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5)));
}




undefined8 FUN_100586e64(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}




void FUN_100586e70(long param_1,undefined1 (*param_2) [16],uint param_3,uint *param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  undefined1 auVar19 [14];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 uVar22;
  uint local_34;
  
  local_34 = 0;
  uVar10 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar10 < 5) {
    param_3 = *(int *)(&DAT_10115e330 + (long)(int)uVar10 * 4) * param_3 >> 3;
  }
  uVar10 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,
                         param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),&local_34);
  if ((uVar10 | 0x10) == 0x10) {
    iVar11 = *(int *)(*(long *)(param_1 + 8) + 0x100);
    uVar10 = *(uint *)(*(long *)(param_1 + 8) + 0x104);
    if (uVar10 != 0) {
      uVar13 = local_34;
      if (iVar11 - 1U < 5) {
        uVar7 = 0;
        if ((long)*(int *)(&DAT_10115e330 + (long)(int)(iVar11 - 1U) * 4) != 0) {
          uVar7 = (uint)(((ulong)local_34 << 3) /
                        (ulong)(long)*(int *)(&DAT_10115e330 + (long)(int)(iVar11 - 1U) * 4));
        }
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar7 / uVar10;
        }
      }
      *param_4 = uVar13;
    }
    if (iVar11 == 4) {
      if (*(char *)(param_1 + 0x199) == '\0') {
        pauVar16 = param_2;
        if (local_34 >> 4 != 0) {
          pauVar16 = param_2 + (ulong)((local_34 >> 4) - 1) + 1;
          iVar11 = -(local_34 >> 4);
          do {
            uVar7 = (*(uint *)*param_2 & 0xff00ff00) >> 8 | (*(uint *)*param_2 & 0xff00ff) << 8;
            uVar10 = *(uint *)(*param_2 + 8);
            uVar13 = *(uint *)(*param_2 + 0xc);
            uVar8 = (*(uint *)(*param_2 + 4) & 0xff00ff00) >> 8 |
                    (*(uint *)(*param_2 + 4) & 0xff00ff) << 8;
            *(uint *)*param_2 = uVar7 >> 0x10 | uVar7 << 0x10;
            *(uint *)(*param_2 + 4) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
            *(uint *)(*param_2 + 8) = uVar10 >> 0x10 | uVar10 << 0x10;
            uVar10 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
            *(uint *)(*param_2 + 0xc) = uVar10 >> 0x10 | uVar10 << 0x10;
            iVar11 = iVar11 + 1;
            param_2 = param_2 + 1;
          } while (iVar11 != 0);
        }
        uVar10 = local_34 >> 2 & 3;
        if (uVar10 != 0) {
          uVar13 = uVar10 - 1;
          uVar1 = (ulong)uVar13 + 1;
          uVar12 = uVar1 & 0x1fffffffc;
          if (uVar12 == 0) {
            uVar12 = 0;
            pauVar17 = pauVar16;
          }
          else {
            pauVar17 = (undefined1 (*) [16])(*pauVar16 + uVar12 * 4);
            uVar10 = uVar10 - (int)uVar12;
            uVar14 = (ulong)uVar13 + 1 & 0xfffffffffffffffc;
            do {
              auVar20 = NEON_rev32(*pauVar16,1);
              *(long *)*pauVar16 = auVar20._0_8_;
              auVar20 = NEON_ext(auVar20,auVar20,8,1);
              *(long *)(*pauVar16 + 8) = auVar20._0_8_;
              uVar14 = uVar14 - 4;
              pauVar16 = pauVar16 + 1;
            } while (uVar14 != 0);
          }
          if (uVar1 != uVar12) {
            do {
              uVar13 = (*(uint *)*pauVar17 & 0xff00ff00) >> 8 | (*(uint *)*pauVar17 & 0xff00ff) << 8
              ;
              *(uint *)*pauVar17 = uVar13 >> 0x10 | uVar13 << 0x10;
              uVar10 = uVar10 - 1;
              pauVar17 = (undefined1 (*) [16])(*pauVar17 + 4);
            } while (uVar10 != 0);
          }
        }
      }
    }
    else if (iVar11 == 3) {
      pauVar16 = param_2;
      if (local_34 / 0xc != 0) {
        pauVar16 = (undefined1 (*) [16])(*param_2 + (ulong)(local_34 / 0xc - 1) * 0xc + 0xc);
        iVar11 = -(local_34 / 0xc);
        do {
          uVar22 = (*param_2)[0];
          uVar2 = (*param_2)[3];
          uVar3 = (*param_2)[6];
          uVar4 = (*param_2)[9];
          (*param_2)[0] = (*param_2)[2];
          (*param_2)[3] = (*param_2)[5];
          (*param_2)[6] = (*param_2)[8];
          (*param_2)[9] = (*param_2)[0xb];
          (*param_2)[2] = uVar22;
          (*param_2)[5] = uVar2;
          (*param_2)[8] = uVar3;
          iVar11 = iVar11 + 1;
          (*param_2)[0xb] = uVar4;
          param_2 = (undefined1 (*) [16])(*param_2 + 0xc);
        } while (iVar11 != 0);
      }
      if (((ulong)local_34 / 3 & 3) != 0) {
        iVar11 = -(local_34 / 3 & 3);
        do {
          uVar22 = (*pauVar16)[0];
          (*pauVar16)[0] = (*pauVar16)[2];
          (*pauVar16)[2] = uVar22;
          iVar11 = iVar11 + 1;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 3);
        } while (iVar11 != 0);
      }
    }
    else if ((iVar11 == 2) && (*(char *)(param_1 + 0x199) == '\0')) {
      pauVar16 = param_2;
      if (local_34 >> 3 != 0) {
        pauVar16 = (undefined1 (*) [16])(*param_2 + (ulong)((local_34 >> 3) - 1) * 8 + 8);
        iVar11 = -(local_34 >> 3);
        do {
          uVar5 = *(ushort *)(*param_2 + 2);
          uVar6 = *(ushort *)(*param_2 + 4);
          *(ushort *)*param_2 = *(ushort *)*param_2 >> 8 | *(ushort *)*param_2 << 8;
          *(ushort *)(*param_2 + 2) = uVar5 >> 8 | uVar5 << 8;
          *(ushort *)(*param_2 + 4) = uVar6 >> 8 | uVar6 << 8;
          *(ushort *)(*param_2 + 6) =
               *(ushort *)(*param_2 + 6) >> 8 | *(ushort *)(*param_2 + 6) << 8;
          iVar11 = iVar11 + 1;
          param_2 = (undefined1 (*) [16])(*param_2 + 8);
        } while (iVar11 != 0);
      }
      uVar10 = local_34 >> 1 & 3;
      if (uVar10 != 0) {
        uVar13 = uVar10 - 1;
        uVar1 = (ulong)uVar13 + 1;
        uVar12 = uVar1 & 0x1fffffff8;
        if (uVar12 == 0) {
          uVar12 = 0;
          pauVar17 = pauVar16;
        }
        else {
          uVar10 = uVar10 - (int)uVar12;
          pauVar17 = (undefined1 (*) [16])(*pauVar16 + uVar12 * 2);
          uVar14 = (ulong)uVar13 + 1 & 0xfffffffffffffff8;
          puVar15 = (undefined8 *)(*pauVar16 + 8);
          do {
            uVar18 = *(undefined8 *)*(undefined1 (*) [16])(puVar15 + -1);
            uVar21 = *puVar15;
            uVar22 = (undefined1)((ulong)uVar18 >> 0x28);
            uVar9 = CONCAT11((char)((ulong)uVar18 >> 0x20),uVar22);
            auVar19._0_12_ = ZEXT312(CONCAT12(uVar22,uVar9)) << 0x40;
            auVar19[0xc] = (char)((ulong)uVar18 >> 0x38);
            auVar19[0xd] = (undefined1)((ulong)uVar18 >> 0x30);
            *(ulong *)*(undefined1 (*) [16])(puVar15 + -1) =
                 CONCAT26(auVar19._12_2_,
                          CONCAT24(uVar9,CONCAT22(CONCAT11((char)((ulong)uVar18 >> 0x10),
                                                           (char)((ulong)uVar18 >> 0x18)),
                                                  CONCAT11((char)uVar18,(char)((ulong)uVar18 >> 8)))
                                  ));
            *puVar15 = CONCAT26(CONCAT11((char)((ulong)uVar21 >> 0x30),(char)((ulong)uVar21 >> 0x38)
                                        ),
                                CONCAT24(CONCAT11((char)((ulong)uVar21 >> 0x20),
                                                  (char)((ulong)uVar21 >> 0x28)),
                                         CONCAT22(CONCAT11((char)((ulong)uVar21 >> 0x10),
                                                           (char)((ulong)uVar21 >> 0x18)),
                                                  CONCAT11((char)uVar21,(char)((ulong)uVar21 >> 8)))
                                        ));
            uVar14 = uVar14 - 8;
            puVar15 = puVar15 + 2;
          } while (uVar14 != 0);
        }
        if (uVar1 != uVar12) {
          do {
            *(ushort *)*pauVar17 = *(ushort *)*pauVar17 >> 8 | *(ushort *)*pauVar17 << 8;
            uVar10 = uVar10 - 1;
            pauVar17 = (undefined1 (*) [16])(*pauVar17 + 2);
          } while (uVar10 != 0);
        }
      }
    }
  }
  return;
}




void FUN_100587208(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar1 < 5) {
    param_3 = *(int *)(&DAT_10115e330 + (long)(int)uVar1 * 4) * param_3 >> 3;
  }
  FUN_1005d1d28(*(undefined8 *)(param_1 + 400),
                *(int *)(param_1 + 0x130) + param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),0);
  return;
}




void FUN_100587250(void)

{
  DAT_101e961b8 = "FMOD DLS Codec";
  DAT_101e961c0 = 0x10100;
  DAT_101e961c8 = 2;
  DAT_101e961d0 = thunk_FUN_100587e94;
  DAT_101e961d8 = FUN_1005872c0;
  DAT_101e961e0 = thunk_FUN_10058816c;
  DAT_101e961f0 = FUN_1005872dc;
  DAT_101e96210 = 3;
  DAT_101e96214 = 0x1c0;
  return;
}




undefined8 thunk_FUN_100587e94(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 3;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar1;
  puVar1 = PTR_defaultMetaData_101444168;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0xe) = puVar1;
  param_1[0x4c] = 0;
  param_1[0x66] = 0;
  param_1[0x6a] = 0;
  uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_28,1,8,0);
  if ((int)uVar3 == 0) {
    iVar2 = FUN_1005ed0f8(auStack_28,"RIFF",4);
    if (iVar2 == 0) {
      uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_2c,1,4,0);
      if ((int)uVar3 == 0) {
        iVar2 = FUN_1005ed0f8(auStack_2c,"DLS ",4);
        if (iVar2 == 0) {
          param_1[0x4c] = 0;
          param_1[0x6b] = 0;
          uVar3 = FUN_100587380(param_1,auStack_2c,uStack_24);
          if ((int)uVar3 == 0) {
            if ((int)param_1[0x66] < 1) {
              uVar3 = 0x13;
            }
            else {
              uVar3 = 0;
              *param_1 = param_1[0x6a];
            }
          }
        }
        else {
          uVar3 = 0x13;
        }
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
  return uVar3;
}




undefined8 FUN_1005872c0(void)

{
  FUN_100587fc8();
  return 0;
}




void thunk_FUN_10058816c(long param_1,long param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uStack_34;
  
  uVar3 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar3 < 5) {
    param_3 = *(int *)(&DAT_10115e350 + (long)(int)uVar3 * 4) * param_3 >> 3;
  }
  uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,
                        param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),&uStack_34);
  if ((uVar3 | 0x10) == 0x10) {
    lVar5 = *(long *)(param_1 + 8);
    uVar4 = (ulong)uStack_34;
    if (*(int *)(lVar5 + (long)*(int *)(param_1 + 0x1b8) * 0x130 + 0x100) == 1) {
      if (uStack_34 == 0) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        do {
          *(byte *)(param_2 + lVar5) = *(byte *)(param_2 + lVar5) ^ 0x80;
          uVar4 = (ulong)uStack_34;
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < uStack_34);
        lVar5 = *(long *)(param_1 + 8);
      }
    }
    uVar3 = *(uint *)(lVar5 + 0x104);
    if (uVar3 != 0) {
      uVar1 = *(int *)(lVar5 + 0x100) - 1;
      if (uVar1 < 5) {
        uVar2 = 0;
        if ((long)*(int *)(&DAT_10115e350 + (long)(int)uVar1 * 4) != 0) {
          uVar2 = (uint)((uVar4 << 3) / (ulong)(long)*(int *)(&DAT_10115e350 + (long)(int)uVar1 * 4)
                        );
        }
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar2 / uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
      *param_4 = (int)uVar4;
    }
  }
  return;
}




undefined8 FUN_1005872dc(int *param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((-1 < param_2) && (*param_1 == 0 || param_2 < *param_1)) {
    if ((*(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 1) == 0) {
      return 0;
    }
    if (param_1[0x6e] != param_2) {
      param_1[0x6e] = param_2;
    }
    lVar1 = *(long *)(param_1 + 2) + (long)param_2 * 0x130;
    uVar2 = *(int *)(lVar1 + 0x100) - 1;
    if (uVar2 < 5) {
      param_3 = *(int *)(&DAT_10115e350 + (long)(int)uVar2 * 4) * param_3 >> 3;
    }
    uVar3 = FUN_1005d1d28(*(long *)(param_1 + 100),
                          *(int *)(*(long *)(param_1 + 0x6c) + (long)param_2 * 0x128 + 0x100) +
                          param_3 * *(int *)(lVar1 + 0x104),0);
    return uVar3;
  }
  return 0x20;
}




void FUN_100587380(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint local_c0;
  int local_bc;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  uint local_ac;
  int local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar13 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar13;
  uVar4 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),&local_a4);
  if ((int)uVar4 != 0) {
LAB_100587e54:
    if (lVar13 != local_68) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(uVar4);
    }
    return;
  }
  local_a4 = local_a4 + -8;
  uVar12 = 4;
  do {
    uVar4 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_a4 + 8,0);
    if (((int)uVar4 != 0) ||
       (uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_b0,1,8,0), (int)uVar4 != 0))
    goto LAB_100587e54;
    iVar3 = FUN_1005ed0f8(auStack_b0,"vers",4);
    if ((iVar3 != 0) &&
       ((iVar3 = FUN_1005ed0f8(auStack_b0,"msyn",4), iVar3 != 0 &&
        (iVar3 = FUN_1005ed0f8(auStack_b0,"dlid",4), iVar3 != 0)))) {
      iVar3 = FUN_1005ed0f8(auStack_b0,"colh",4);
      if (iVar3 == 0) {
        uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_1 + 0x198,4,1,0);
        if ((int)uVar4 != 0) goto LAB_100587e54;
        lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                               *(int *)(param_1 + 0x198) * 0x128,
                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                               ,0x71,0);
        *(long *)(param_1 + 0x1a0) = lVar11;
        if (lVar11 == 0) {
          uVar4 = 0x26;
          goto LAB_100587e54;
        }
      }
      else {
        iVar3 = FUN_1005ed0f8(auStack_b0,"ptbl",4);
        if (iVar3 == 0) {
          uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_b4,4,1,0);
          if (((int)uVar4 != 0) ||
             (uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_1 + 0x1a8,4,1,0),
             (int)uVar4 != 0)) goto LAB_100587e54;
          lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                 *(int *)(param_1 + 0x1a8) * 0x130,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                                 ,0x8c,0);
          *(long *)(param_1 + 8) = lVar11;
          if (lVar11 == 0) {
            uVar4 = 0x26;
            goto LAB_100587e54;
          }
          lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                 *(int *)(param_1 + 0x1a8) * 0x128,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                                 ,0x92,0);
          *(long *)(param_1 + 0x1b0) = lVar11;
          if (lVar11 == 0) {
            uVar4 = 0x26;
            goto LAB_100587e54;
          }
        }
        else {
          iVar3 = FUN_1005ed0f8(auStack_b0,"LIST",4);
          if (iVar3 == 0) {
            uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),auStack_b8,1,4,0);
            if (((int)uVar4 != 0) ||
               (uVar4 = FUN_100587380(param_1,auStack_b8,local_ac), (int)uVar4 != 0))
            goto LAB_100587e54;
            iVar3 = FUN_1005ed0f8(auStack_b8,"wave",4);
            if (iVar3 == 0) {
              *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
            }
            else {
              iVar3 = FUN_1005ed0f8(auStack_b8,"ins ",4);
              if (iVar3 == 0) {
                *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
              }
              else {
                iVar3 = FUN_1005ed0f8(auStack_b8,"rgn ",4);
                if (iVar3 == 0) {
                  *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
                }
              }
            }
          }
          else {
            iVar3 = FUN_1005ed0f8(auStack_b0,"dlid",4);
            if (iVar3 == 0) {
              uVar4 = *(undefined8 *)(param_1 + 400);
              puVar5 = auStack_78;
              uVar6 = 0x10;
              goto LAB_100587a04;
            }
            iVar3 = FUN_1005ed0f8(auStack_b0,"insh",4);
            if (iVar3 == 0) {
              uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),
                                    *(long *)(param_1 + 0x1a0) +
                                    (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x100,1,0xc,0);
              if ((int)uVar4 != 0) goto LAB_100587e54;
              lVar11 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                     *(int *)(*(long *)(param_1 + 0x1a0) +
                                              (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x100) *
                                     0x48,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                                     ,0xd0,0);
              *(long *)(*(long *)(param_1 + 0x1a0) + (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x110
                       ) = lVar11;
              if (lVar11 == 0) {
                uVar4 = 0x26;
                goto LAB_100587e54;
              }
              *(undefined4 *)(param_1 + 0x1bc) = 0;
            }
            else {
              iVar3 = FUN_1005ed0f8(auStack_b0,"rgnh",4);
              if (iVar3 == 0) {
                uVar4 = *(undefined8 *)(param_1 + 400);
                puVar5 = (undefined1 *)
                         (*(long *)(*(long *)(param_1 + 0x1a0) +
                                    (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x110) +
                         (ulong)*(uint *)(param_1 + 0x1bc) * 0x48);
LAB_1005879fc:
                uVar6 = 0xc;
LAB_100587a04:
                uVar4 = FUN_1005d148c(uVar4,puVar5,1,uVar6,0);
                iVar3 = (int)uVar4;
joined_r0x000100587cbc:
                if (iVar3 != 0) goto LAB_100587e54;
              }
              else {
                iVar3 = FUN_1005ed0f8(auStack_b0,"wsmp",4);
                if (iVar3 == 0) {
                  uVar6 = local_ac;
                  if (0x23 < local_ac) {
                    uVar6 = 0x24;
                  }
                  iVar3 = FUN_1005ed0f8(param_2,"wave",4);
                  if (iVar3 == 0) {
                    uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),
                                          *(long *)(param_1 + 0x1b0) +
                                          (long)*(int *)(param_1 + 0x1ac) * 0x128 + 0x104,1,uVar6,0)
                    ;
                    if ((int)uVar4 != 0) goto LAB_100587e54;
                    lVar11 = (long)*(int *)(param_1 + 0x1ac);
                    lVar9 = *(long *)(param_1 + 0x1b0);
                    if (*(int *)(lVar9 + lVar11 * 0x128 + 0x114) != 0) {
                      lVar10 = *(long *)(param_1 + 8) + lVar11 * 0x130;
                      *(undefined4 *)(lVar10 + 0x120) = 2;
                      lVar9 = lVar9 + lVar11 * 0x128;
                      iVar3 = *(int *)(lVar9 + 0x120);
                      *(int *)(lVar10 + 0x118) = iVar3;
                      *(int *)(lVar10 + 0x11c) = iVar3 + *(int *)(lVar9 + 0x124) + -1;
                    }
                  }
                  else {
                    iVar3 = FUN_1005ed0f8(param_2,"rgn ",4);
                    if (iVar3 == 0) {
                      uVar4 = *(undefined8 *)(param_1 + 400);
                      puVar5 = (undefined1 *)
                               (*(long *)(*(long *)(param_1 + 0x1a0) +
                                          (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x110) +
                                (ulong)*(uint *)(param_1 + 0x1bc) * 0x48 + 0xc);
                      goto LAB_100587a04;
                    }
                  }
                }
                else {
                  iVar3 = FUN_1005ed0f8(auStack_b0,"wlnk",4);
                  if (iVar3 == 0) {
                    uVar4 = *(undefined8 *)(param_1 + 400);
                    puVar5 = (undefined1 *)
                             (*(long *)(*(long *)(param_1 + 0x1a0) +
                                        (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x110) +
                              (ulong)*(uint *)(param_1 + 0x1bc) * 0x48 + 0x30);
                    goto LAB_1005879fc;
                  }
                  iVar3 = FUN_1005ed0f8(auStack_b0,"art1",4);
                  if (iVar3 == 0) {
                    uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_c0,1,8,0);
                    if ((int)uVar4 != 0) goto LAB_100587e54;
                    if (8 < local_c0) {
                      FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_c0 - 8,1);
                    }
                    if (*(uint *)(param_1 + 0x1bc) <
                        *(uint *)(*(long *)(param_1 + 0x1a0) +
                                  (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x100)) {
                      puVar5 = (undefined1 *)
                               FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                             local_bc * 0xc,
                                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                                             ,0x152,0);
                      uVar6 = *(uint *)(param_1 + 0x1bc);
                      lVar11 = *(long *)(*(long *)(param_1 + 0x1a0) +
                                         (long)*(int *)(param_1 + 0x19c) * 0x128 + 0x110);
                      *(undefined1 **)(lVar11 + (ulong)uVar6 * 0x48 + 0x40) = puVar5;
                      if (puVar5 == (undefined1 *)0x0) {
                        uVar4 = 0x26;
                        goto LAB_100587e54;
                      }
                      *(int *)(lVar11 + (ulong)uVar6 * 0x48 + 0x3c) = local_bc;
                    }
                    else {
                      puVar5 = (undefined1 *)
                               FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                             local_bc * 0xc,
                                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                                             ,0x171,0);
                      iVar3 = *(int *)(param_1 + 0x19c);
                      lVar11 = *(long *)(param_1 + 0x1a0);
                      *(undefined1 **)(lVar11 + (long)iVar3 * 0x128 + 0x120) = puVar5;
                      if (puVar5 == (undefined1 *)0x0) {
                        uVar4 = 0x26;
                        goto LAB_100587e54;
                      }
                      *(int *)(lVar11 + (long)iVar3 * 0x128 + 0x118) = local_bc;
                    }
                    uVar4 = *(undefined8 *)(param_1 + 400);
                    uVar6 = local_bc * 0xc;
                    goto LAB_100587a04;
                  }
                  iVar3 = FUN_1005ed0f8(auStack_b0,"fmt ",4);
                  if (iVar3 == 0) {
                    uVar6 = 0x28;
                    if (local_ac < 0x29) {
                      uVar6 = local_ac;
                    }
                    local_88 = 0;
                    uStack_80 = 0;
                    local_98 = 0;
                    uStack_90 = 0;
                    local_a0 = 0;
                    uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),&local_a0,1,uVar6,0);
                    if (((int)uVar4 != 0) ||
                       ((0x28 < local_ac &&
                        (uVar4 = FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_ac - 0x28,1),
                        (int)uVar4 != 0)))) goto LAB_100587e54;
                    if (local_98._6_2_ < 0x18) {
                      if (local_98._6_2_ == 8) {
                        lVar11 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x1ac) * 0x130;
                        uVar8 = 1;
                      }
                      else {
                        if (local_98._6_2_ != 0x10) goto LAB_100587e00;
                        lVar11 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x1ac) * 0x130;
                        uVar8 = 2;
                      }
LAB_100587dfc:
                      *(undefined4 *)(lVar11 + 0x100) = uVar8;
                    }
                    else {
                      if (local_98._6_2_ == 0x18) {
                        lVar11 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x1ac) * 0x130;
                        uVar8 = 3;
                        goto LAB_100587dfc;
                      }
                      if (local_98._6_2_ == 0x20) {
                        if ((short)local_a0 == 3) {
                          lVar11 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x1ac) * 0x130;
                          uVar8 = 5;
                        }
                        else {
                          if ((short)local_a0 != 1) goto LAB_100587e00;
                          lVar11 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x1ac) * 0x130;
                          uVar8 = 4;
                        }
                        goto LAB_100587dfc;
                      }
                    }
LAB_100587e00:
                    lVar11 = *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x1ac) * 0x130;
                    *(uint *)(lVar11 + 0x104) = (uint)local_a0._2_2_;
                    *(undefined4 *)(lVar11 + 0x108) = local_a0._4_4_;
                  }
                  else {
                    iVar3 = FUN_1005ed0f8(auStack_b0,"data",4);
                    if (iVar3 == 0) {
                      iVar3 = *(int *)(param_1 + 0x1ac);
                      lVar11 = *(long *)(param_1 + 8) + (long)iVar3 * 0x130;
                      uVar6 = *(uint *)(lVar11 + 0x104);
                      if (uVar6 != 0) {
                        uVar1 = *(int *)(*(long *)(param_1 + 8) + (long)iVar3 * 0x130 + 0x100) - 1;
                        uVar7 = local_ac;
                        if (uVar1 < 5) {
                          uVar2 = 0;
                          if ((long)*(int *)(&DAT_10115e350 + (long)(int)uVar1 * 4) != 0) {
                            uVar2 = (uint)(((ulong)local_ac << 3) /
                                          (ulong)(long)*(int *)(&DAT_10115e350 +
                                                               (long)(int)uVar1 * 4));
                          }
                          uVar7 = 0;
                          if (uVar6 != 0) {
                            uVar7 = uVar2 / uVar6;
                          }
                        }
                        *(uint *)(lVar11 + 0x110) = uVar7;
                        iVar3 = *(int *)(param_1 + 0x1ac);
                      }
                      uVar4 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 400),
                                            *(long *)(param_1 + 0x1b0) + (long)iVar3 * 0x128 + 0x100
                                           );
                      iVar3 = (int)uVar4;
                      goto joined_r0x000100587cbc;
                    }
                    iVar3 = FUN_1005ed0f8(auStack_b0,"INAM",4);
                    if (iVar3 == 0) {
                      if (*(int *)(param_1 + 0x19c) < *(int *)(param_1 + 0x198)) {
                        _memset((void *)(*(long *)(param_1 + 0x1a0) +
                                        (long)*(int *)(param_1 + 0x19c) * 0x128),0,0x100);
                        uVar4 = *(undefined8 *)(param_1 + 400);
                        puVar5 = (undefined1 *)
                                 (*(long *)(param_1 + 0x1a0) +
                                 (long)*(int *)(param_1 + 0x19c) * 0x128);
                        uVar6 = local_ac;
                        goto LAB_100587a04;
                      }
                      if (*(int *)(param_1 + 0x1a8) <= *(int *)(param_1 + 0x1ac))
                      goto LAB_100587a10;
                      _memset((void *)(*(long *)(param_1 + 0x1b0) +
                                      (long)*(int *)(param_1 + 0x1ac) * 0x128),0,0x100);
                      uVar4 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),
                                            *(long *)(param_1 + 0x1b0) +
                                            (long)*(int *)(param_1 + 0x1ac) * 0x128,1,local_ac,0);
                      if ((int)uVar4 != 0) goto LAB_100587e54;
                      FUN_1005ecc98(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x1ac) * 0x130
                                    ,*(long *)(param_1 + 0x1b0) +
                                     (long)*(int *)(param_1 + 0x1ac) * 0x128,0x100);
                    }
                    else {
                      iVar3 = FUN_1005ed0f8(auStack_b0,"IARL",4);
                      if ((((((iVar3 != 0) &&
                             (iVar3 = FUN_1005ed0f8(auStack_b0,"IART",4), iVar3 != 0)) &&
                            (iVar3 = FUN_1005ed0f8(auStack_b0,"ICMS",4), iVar3 != 0)) &&
                           ((iVar3 = FUN_1005ed0f8(auStack_b0,"ICMT",4), iVar3 != 0 &&
                            (iVar3 = FUN_1005ed0f8(auStack_b0,"ICOP",4), iVar3 != 0)))) &&
                          (((iVar3 = FUN_1005ed0f8(auStack_b0,"ICRD",4), iVar3 != 0 &&
                            ((iVar3 = FUN_1005ed0f8(auStack_b0,"IENG",4), iVar3 != 0 &&
                             (iVar3 = FUN_1005ed0f8(auStack_b0,"IGNR",4), iVar3 != 0)))) &&
                           (iVar3 = FUN_1005ed0f8(auStack_b0,"IKEY",4), iVar3 != 0)))) &&
                         ((((iVar3 = FUN_1005ed0f8(auStack_b0,"IMED",4), iVar3 != 0 &&
                            (iVar3 = FUN_1005ed0f8(auStack_b0,"IPRD",4), iVar3 != 0)) &&
                           (iVar3 = FUN_1005ed0f8(auStack_b0,"ISBJ",4), iVar3 != 0)) &&
                          (((iVar3 = FUN_1005ed0f8(auStack_b0,"ISFT",4), iVar3 != 0 &&
                            (iVar3 = FUN_1005ed0f8(auStack_b0,"ISRC",4), iVar3 != 0)) &&
                           ((iVar3 = FUN_1005ed0f8(auStack_b0,"ISRF",4), iVar3 != 0 &&
                            (iVar3 = FUN_1005ed0f8(auStack_b0,"ITCH",4), iVar3 != 0)))))))) {
                        FUN_1005d1d28(*(undefined8 *)(param_1 + 400),local_ac,1);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_100587a10:
    uVar12 = local_ac + 8 + uVar12;
    local_a4 = local_a4 + local_ac + 8;
    uVar4 = 0;
    if ((local_ac & 1) != 0) {
      local_a4 = local_a4 + 1;
      uVar12 = uVar12 + 1;
    }
    if ((param_3 <= uVar12) || (uVar12 == 0)) goto LAB_100587e54;
  } while( true );
}




undefined8 FUN_100587e94(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 3;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar1;
  puVar1 = PTR_defaultMetaData_101444168;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined **)(param_1 + 0xe) = puVar1;
  param_1[0x4c] = 0;
  param_1[0x66] = 0;
  param_1[0x6a] = 0;
  uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_28,1,8,0);
  if ((int)uVar3 == 0) {
    iVar2 = FUN_1005ed0f8(auStack_28,"RIFF",4);
    if (iVar2 == 0) {
      uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_2c,1,4,0);
      if ((int)uVar3 == 0) {
        iVar2 = FUN_1005ed0f8(auStack_2c,"DLS ",4);
        if (iVar2 == 0) {
          param_1[0x4c] = 0;
          param_1[0x6b] = 0;
          uVar3 = FUN_100587380(param_1,auStack_2c,local_24);
          if ((int)uVar3 == 0) {
            if ((int)param_1[0x66] < 1) {
              uVar3 = 0x13;
            }
            else {
              uVar3 = 0;
              *param_1 = param_1[0x6a];
            }
          }
        }
        else {
          uVar3 = 0x13;
        }
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
  return uVar3;
}




undefined8 FUN_100587fc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                  ,0x281);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    if (0 < *(int *)(param_1 + 0x198)) {
      lVar3 = 0;
      while( true ) {
        lVar2 = *(long *)(lVar1 + lVar3 * 0x128 + 0x110);
        if (lVar2 != 0) {
          if (*(int *)(lVar1 + lVar3 * 0x128 + 0x100) != 0) {
            uVar4 = 0;
            lVar5 = 0x40;
            while( true ) {
              if (*(long *)(lVar2 + lVar5) != 0) {
                FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar2 + lVar5),
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                              ,0x296);
                lVar1 = *(long *)(param_1 + 0x1a0);
              }
              uVar4 = uVar4 + 1;
              if (*(uint *)(lVar1 + lVar3 * 0x128 + 0x100) <= uVar4) break;
              lVar5 = lVar5 + 0x48;
              lVar2 = *(long *)(lVar1 + lVar3 * 0x128 + 0x110);
            }
          }
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                        *(undefined8 *)(lVar1 + lVar3 * 0x128 + 0x110),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                        ,0x29a);
          lVar1 = *(long *)(param_1 + 0x1a0);
        }
        lVar1 = *(long *)(lVar1 + lVar3 * 0x128 + 0x120);
        if (lVar1 != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                        ,0x29e);
        }
        lVar3 = lVar3 + 1;
        if (*(int *)(param_1 + 0x198) <= lVar3) break;
        lVar1 = *(long *)(param_1 + 0x1a0);
      }
      lVar1 = *(long *)(param_1 + 0x1a0);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                  ,0x2a2);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1b0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_dls.cpp"
                  ,0x2a8);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  return 0;
}




void FUN_10058816c(long param_1,long param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint local_34;
  
  uVar3 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
  if (uVar3 < 5) {
    param_3 = *(int *)(&DAT_10115e350 + (long)(int)uVar3 * 4) * param_3 >> 3;
  }
  uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 400),param_2,1,
                        param_3 * *(int *)(*(long *)(param_1 + 8) + 0x104),&local_34);
  if ((uVar3 | 0x10) == 0x10) {
    lVar5 = *(long *)(param_1 + 8);
    uVar4 = (ulong)local_34;
    if (*(int *)(lVar5 + (long)*(int *)(param_1 + 0x1b8) * 0x130 + 0x100) == 1) {
      if (local_34 == 0) {
        uVar4 = 0;
      }
      else {
        lVar5 = 0;
        do {
          *(byte *)(param_2 + lVar5) = *(byte *)(param_2 + lVar5) ^ 0x80;
          uVar4 = (ulong)local_34;
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < local_34);
        lVar5 = *(long *)(param_1 + 8);
      }
    }
    uVar3 = *(uint *)(lVar5 + 0x104);
    if (uVar3 != 0) {
      uVar1 = *(int *)(lVar5 + 0x100) - 1;
      if (uVar1 < 5) {
        uVar2 = 0;
        if ((long)*(int *)(&DAT_10115e350 + (long)(int)uVar1 * 4) != 0) {
          uVar2 = (uint)((uVar4 << 3) / (ulong)(long)*(int *)(&DAT_10115e350 + (long)(int)uVar1 * 4)
                        );
        }
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar2 / uVar3;
        }
        uVar4 = (ulong)uVar1;
      }
      *param_4 = (int)uVar4;
    }
  }
  return;
}




undefined8 FUN_100588278(int *param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((-1 < param_2) && (*param_1 == 0 || param_2 < *param_1)) {
    if ((*(uint *)(*(long *)(param_1 + 100) + 0x1a4) & 1) == 0) {
      return 0;
    }
    if (param_1[0x6e] != param_2) {
      param_1[0x6e] = param_2;
    }
    lVar1 = *(long *)(param_1 + 2) + (long)param_2 * 0x130;
    uVar2 = *(int *)(lVar1 + 0x100) - 1;
    if (uVar2 < 5) {
      param_3 = *(int *)(&DAT_10115e350 + (long)(int)uVar2 * 4) * param_3 >> 3;
    }
    uVar3 = FUN_1005d1d28(*(long *)(param_1 + 100),
                          *(int *)(*(long *)(param_1 + 0x6c) + (long)param_2 * 0x128 + 0x100) +
                          param_3 * *(int *)(lVar1 + 0x104),0);
    return uVar3;
  }
  return 0x20;
}




void FUN_10058831c(void)

{
  DAT_101e96290 = "FMOD FLAC Codec";
  DAT_101e96298 = 0x10100;
  DAT_101e962a0 = 2;
  DAT_101e962a8 = thunk_FUN_100588454;
  DAT_101e962b0 = FUN_10058838c;
  DAT_101e962b8 = thunk_FUN_100588c1c;
  DAT_101e962c8 = FUN_100588400;
  DAT_101e962e8 = 4;
  DAT_101e962ec = 0x2f0;
  return;
}




undefined8 thunk_FUN_100588454(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  int iStack_34;
  
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 4;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar1;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&cStack_38,1,4,&iStack_34);
  if ((int)uVar3 == 0) {
    if (iStack_34 == 4) {
      if (cStack_38 == 'f') {
        if (cStack_37 == 'L') {
          if (cStack_36 == 'a') {
            if (cStack_35 == 'C') {
              uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
              if ((int)uVar3 == 0) {
                lVar4 = FUN_100609978();
                *(long *)(param_1 + 0x66) = lVar4;
                if (lVar4 == 0) {
                  uVar3 = 0xd;
                }
                else {
                  iVar2 = FUN_100609f38(lVar4,0);
                  if (iVar2 == 0) {
                    uVar3 = 0xd;
                  }
                  else {
                    iVar2 = FUN_100609f5c(*(undefined8 *)(param_1 + 0x66),4);
                    if (iVar2 == 0) {
                      uVar3 = 0xd;
                    }
                    else {
                      iVar2 = FUN_100609d3c(param_1,*(undefined8 *)(param_1 + 0x66),FUN_1005886f4,
                                            FUN_100588740,FUN_100588764,FUN_1005887ac,FUN_1005887fc,
                                            FUN_10058884c,FUN_100588a20,FUN_100588ba8,param_1);
                      if (iVar2 == 0) {
                        _bzero(param_1 + 0x68,0x130);
                        *(undefined4 **)(param_1 + 2) = param_1 + 0x68;
                        *(undefined8 *)(param_1 + 0xb9) = 0;
                        FUN_10060cf64(param_1,*(undefined8 *)(param_1 + 0x66));
                        if (((param_2 >> 7 & 1) == 0) &&
                           (*(int *)(*(long *)(param_1 + 2) + 0x110) == -1)) {
                          uVar3 = 0xd;
                        }
                        else {
                          uVar3 = (**(code **)(**(long **)(param_1 + 100) + 0x18))
                                            (*(long **)(param_1 + 100),
                                             *(long *)(param_1 + 2) + 0x10c);
                          if ((int)uVar3 == 0) {
                            param_1[0x4c] = 0;
                            iVar2 = *(int *)(*(long *)(param_1 + 2) + 0x104);
                            uVar5 = *(int *)(*(long *)(param_1 + 2) + 0x100) - 1;
                            if (uVar5 < 5) {
                              uVar5 = *(uint *)(&DAT_10115e370 + (long)(int)uVar5 * 4) >> 3;
                            }
                            else {
                              uVar5 = 1;
                            }
                            param_1[0xb8] = 0x2000;
                            lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                  iVar2 * uVar5 * 0x2000 | 0x10,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_flac.cpp"
                                                  ,0x17d,0);
                            *(long *)(param_1 + 0xb6) = lVar4;
                            if (lVar4 == 0) {
                              uVar3 = 0x26;
                            }
                            else {
                              uVar3 = 0;
                              *(ulong *)(param_1 + 0xb4) = lVar4 + 0xfU & 0xfffffffffffffff0;
                              *param_1 = 0;
                            }
                          }
                        }
                      }
                      else {
                        uVar3 = 0xd;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar3 = 0x13;
            }
          }
          else {
            uVar3 = 0x13;
          }
        }
        else {
          uVar3 = 0x13;
        }
      }
      else {
        uVar3 = 0x13;
      }
    }
    else {
      uVar3 = 0xd;
    }
  }
  return uVar3;
}




undefined8 FUN_10058838c(long param_1)

{
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_100609bb8();
    FUN_100609b08(*(undefined8 *)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2d8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_flac.cpp"
                  ,0x1a6);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}




undefined8 thunk_FUN_100588c1c(long param_1,long param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    uVar3 = 0x1f;
  }
  else {
    uVar4 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
    if (uVar4 < 5) {
      uVar4 = *(uint *)(&DAT_10115e370 + (long)(int)uVar4 * 4) >> 3;
    }
    else {
      uVar4 = 1;
    }
    if (param_3 != 0) {
      iVar2 = uVar4 * *(int *)(*(long *)(param_1 + 8) + 0x104);
      do {
        uVar4 = *(uint *)(param_1 + 0x2e8);
        if (uVar4 == 0) {
          *(undefined4 *)(param_1 + 0x2e4) = 0;
          FUN_10060a4d0(param_1,*(undefined8 *)(param_1 + 0x198));
          uVar4 = *(uint *)(param_1 + 0x2e8);
          if (uVar4 == 0) break;
        }
        iVar1 = *(int *)(param_1 + 0x2e4);
        iVar5 = param_3;
        if (uVar4 <= (uint)(iVar1 + param_3)) {
          iVar5 = uVar4 - iVar1;
          *(undefined4 *)(param_1 + 0x2e8) = 0;
        }
        _memcpy((void *)(param_2 + (ulong)(uint)(*param_4 * iVar2)),
                (void *)(*(long *)(param_1 + 0x2d0) + (ulong)(uint)(iVar1 * iVar2)),
                (ulong)(uint)(iVar5 * iVar2));
        *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + iVar5;
        *param_4 = *param_4 + iVar5;
        param_3 = param_3 - iVar5;
      } while (param_3 != 0);
    }
    iVar2 = FUN_10060a248(*(undefined8 *)(param_1 + 0x198));
    if (iVar2 == 4) {
      *param_4 = 0;
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_100588400(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    return 0x1f;
  }
  if ((*(uint *)(*(long *)(param_1 + 400) + 0x1a4) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2e4) = 0;
    iVar1 = FUN_10060d188(param_1,*(long *)(param_1 + 0x198),param_3);
    if (iVar1 == 0) {
      return 0xe;
    }
  }
  return 0;
}




undefined8 FUN_100588454(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  int local_34;
  
  *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
  param_1[0x14] = 4;
  param_1[0x10] = 2;
  puVar1 = PTR_defaultFileSeek_101444160;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined **)(param_1 + 0xc) = puVar1;
  *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
  uVar3 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_38,1,4,&local_34);
  if ((int)uVar3 == 0) {
    if (local_34 == 4) {
      if (local_38 == 'f') {
        if (local_37 == 'L') {
          if (local_36 == 'a') {
            if (local_35 == 'C') {
              uVar3 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0);
              if ((int)uVar3 == 0) {
                lVar4 = FUN_100609978();
                *(long *)(param_1 + 0x66) = lVar4;
                if (lVar4 == 0) {
                  uVar3 = 0xd;
                }
                else {
                  iVar2 = FUN_100609f38(lVar4,0);
                  if (iVar2 == 0) {
                    uVar3 = 0xd;
                  }
                  else {
                    iVar2 = FUN_100609f5c(*(undefined8 *)(param_1 + 0x66),4);
                    if (iVar2 == 0) {
                      uVar3 = 0xd;
                    }
                    else {
                      iVar2 = FUN_100609d3c(param_1,*(undefined8 *)(param_1 + 0x66),FUN_1005886f4,
                                            FUN_100588740,FUN_100588764,FUN_1005887ac,FUN_1005887fc,
                                            FUN_10058884c,FUN_100588a20,FUN_100588ba8,param_1);
                      if (iVar2 == 0) {
                        _bzero(param_1 + 0x68,0x130);
                        *(undefined4 **)(param_1 + 2) = param_1 + 0x68;
                        *(undefined8 *)(param_1 + 0xb9) = 0;
                        FUN_10060cf64(param_1,*(undefined8 *)(param_1 + 0x66));
                        if (((param_2 >> 7 & 1) == 0) &&
                           (*(int *)(*(long *)(param_1 + 2) + 0x110) == -1)) {
                          uVar3 = 0xd;
                        }
                        else {
                          uVar3 = (**(code **)(**(long **)(param_1 + 100) + 0x18))
                                            (*(long **)(param_1 + 100),
                                             *(long *)(param_1 + 2) + 0x10c);
                          if ((int)uVar3 == 0) {
                            param_1[0x4c] = 0;
                            iVar2 = *(int *)(*(long *)(param_1 + 2) + 0x104);
                            uVar5 = *(int *)(*(long *)(param_1 + 2) + 0x100) - 1;
                            if (uVar5 < 5) {
                              uVar5 = *(uint *)(&DAT_10115e370 + (long)(int)uVar5 * 4) >> 3;
                            }
                            else {
                              uVar5 = 1;
                            }
                            param_1[0xb8] = 0x2000;
                            lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                  iVar2 * uVar5 * 0x2000 | 0x10,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_flac.cpp"
                                                  ,0x17d,0);
                            *(long *)(param_1 + 0xb6) = lVar4;
                            if (lVar4 == 0) {
                              uVar3 = 0x26;
                            }
                            else {
                              uVar3 = 0;
                              *(ulong *)(param_1 + 0xb4) = lVar4 + 0xfU & 0xfffffffffffffff0;
                              *param_1 = 0;
                            }
                          }
                        }
                      }
                      else {
                        uVar3 = 0xd;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar3 = 0x13;
            }
          }
          else {
            uVar3 = 0x13;
          }
        }
        else {
          uVar3 = 0x13;
        }
      }
      else {
        uVar3 = 0x13;
      }
    }
    else {
      uVar3 = 0xd;
    }
  }
  return uVar3;
}




long FUN_1005886f4(undefined8 param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  uint local_24;
  
  FUN_1005d148c(*(undefined8 *)(param_4 + 400),param_2,1,(int)*param_3,&local_24);
  *param_3 = (ulong)local_24;
  return (ulong)((ulong)local_24 == 0) << 1;
}




bool FUN_100588740(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = FUN_1005d1d28(*(undefined8 *)(param_3 + 400),param_2,0);
  return iVar1 != 0;
}




bool FUN_100588764(undefined8 param_1,ulong *param_2,long param_3)

{
  int iVar1;
  uint local_24;
  
  iVar1 = FUN_1005d1ea8(*(undefined8 *)(param_3 + 400),&local_24);
  if (iVar1 == 0) {
    *param_2 = (ulong)local_24;
  }
  return iVar1 != 0;
}




bool FUN_1005887ac(undefined8 param_1,ulong *param_2,long param_3)

{
  int iVar1;
  uint local_24;
  
  iVar1 = (**(code **)(**(long **)(param_3 + 400) + 0x18))(*(long **)(param_3 + 400),&local_24);
  if (iVar1 == 0) {
    *param_2 = (ulong)local_24;
  }
  return iVar1 != 0;
}




bool FUN_1005887fc(undefined8 param_1,long param_2)

{
  uint local_28;
  uint uStack_24;
  
  FUN_1005d1ea8(*(undefined8 *)(param_2 + 400),&uStack_24);
  (**(code **)(**(long **)(param_2 + 400) + 0x18))(*(long **)(param_2 + 400),&local_28);
  return local_28 <= uStack_24;
}




undefined8 FUN_10058884c(undefined8 param_1,uint *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  puVar10 = *(undefined2 **)(param_4 + 0x2d0);
  if (puVar10 != (undefined2 *)0x0) {
    uVar2 = *param_2;
    uVar1 = 0x2000;
    if (uVar2 < 0x2001) {
      uVar1 = uVar2;
    }
    uVar3 = param_2[4];
    if (uVar3 == 8) {
      if (0 < (int)uVar1) {
        lVar12 = 0;
        iVar5 = uVar2 - 1;
        if (0x1fff < uVar2) {
          iVar5 = 0x1fff;
        }
        uVar13 = (ulong)param_2[2];
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(char *)((long)puVar10 + lVar14) =
                   (char)*(undefined4 *)(*(long *)(param_3 + lVar14 * 8) + lVar12 * 4);
              lVar14 = lVar14 + 1;
              uVar13 = (ulong)(int)param_2[2];
            } while (lVar14 < (long)uVar13);
            puVar10 = (undefined2 *)((long)puVar10 + lVar14);
          }
          iVar11 = (int)lVar12;
          lVar12 = lVar12 + 1;
        } while (iVar11 != iVar5);
      }
    }
    else if (uVar3 == 0x10) {
      if (0 < (int)uVar1) {
        lVar12 = 0;
        uVar3 = param_2[2];
        uVar13 = (ulong)(int)uVar3;
        iVar5 = uVar2 - 1;
        if (0x1fff < uVar2) {
          iVar5 = 0x1fff;
        }
        do {
          if (0 < (int)uVar3) {
            puVar6 = puVar10;
            if (uVar3 == 0) {
              uVar15 = 0;
LAB_100588918:
              do {
                *puVar6 = (short)*(undefined4 *)(*(long *)(param_3 + uVar15 * 8) + lVar12 * 4);
                uVar15 = uVar15 + 1;
                puVar6 = puVar6 + 1;
              } while ((long)uVar15 < (long)uVar13);
            }
            else {
              uVar15 = uVar13 & 0xfffffffffffffffe;
              if (uVar15 == 0) {
                uVar15 = 0;
              }
              else {
                puVar7 = puVar10 + 1;
                puVar6 = puVar10 + uVar15;
                plVar8 = (long *)(param_3 + 8);
                uVar9 = uVar13 & 0xfffffffffffffffe;
                do {
                  uVar4 = *(undefined4 *)(*plVar8 + lVar12 * 4);
                  puVar7[-1] = (short)*(undefined4 *)(plVar8[-1] + lVar12 * 4);
                  *puVar7 = (short)uVar4;
                  uVar9 = uVar9 - 2;
                  puVar7 = puVar7 + 2;
                  plVar8 = plVar8 + 2;
                } while (uVar9 != 0);
              }
              if (uVar13 != uVar15) goto LAB_100588918;
            }
            lVar14 = 1;
            if (1 < (int)uVar3) {
              lVar14 = (ulong)(uVar3 - 1) + 1;
            }
            puVar10 = puVar10 + lVar14;
          }
          iVar11 = (int)lVar12;
          lVar12 = lVar12 + 1;
        } while (iVar11 != iVar5);
      }
    }
    else if (uVar3 == 0x18 && 0 < (int)uVar1) {
      lVar12 = 0;
      iVar5 = uVar2 - 1;
      if (0x1fff < uVar2) {
        iVar5 = 0x1fff;
      }
      uVar13 = (ulong)param_2[2];
      do {
        if (0 < (int)uVar13) {
          lVar14 = 0;
          do {
            puVar6 = (undefined2 *)(*(long *)(param_3 + lVar14 * 8) + lVar12 * 4);
            *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar6 + 1);
            *puVar10 = *puVar6;
            puVar10 = (undefined2 *)((long)puVar10 + 3);
            lVar14 = lVar14 + 1;
            uVar13 = (ulong)(int)param_2[2];
          } while (lVar14 < (long)uVar13);
        }
        iVar11 = (int)lVar12;
        lVar12 = lVar12 + 1;
      } while (iVar11 != iVar5);
    }
    *(uint *)(param_4 + 0x2e8) = uVar1;
  }
  return 0;
}




void FUN_100588a20(undefined8 param_1,int *param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  char cStack_1069;
  char local_1068 [4096];
  long local_68;
  char *pcVar4;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar6;
  if (*param_2 == 4) {
    iVar2 = param_2[8];
    if (0 < iVar2) {
      lVar7 = 0;
      do {
        puVar1 = (uint *)(*(long *)(param_2 + 10) + lVar7 * 0x10);
        if (*puVar1 < 0x1000) {
          _memcpy(local_1068,*(void **)(puVar1 + 2),(ulong)*puVar1);
          local_1068[*puVar1] = '\0';
          pcVar3 = &cStack_1069;
          do {
            pcVar4 = pcVar3;
            pcVar3 = pcVar4 + 1;
          } while (*pcVar3 != '=');
          pcVar4 = pcVar4 + 2;
          *pcVar3 = '\0';
          pcVar8 = *(code **)(param_3 + 0x38);
          iVar2 = FUN_1005ecb6c(pcVar4);
          (*pcVar8)(param_3,3,local_1068,pcVar4,iVar2 + 1,6,0);
          iVar2 = param_2[8];
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar2);
    }
  }
  else if (*param_2 == 0) {
    iVar2 = param_2[10];
    lVar7 = *(long *)(param_3 + 8);
    if (iVar2 < 0x18) {
      if (iVar2 == 8) {
        uVar5 = 1;
      }
      else {
        if (iVar2 != 0x10) goto LAB_100588b78;
        uVar5 = 2;
      }
    }
    else if (iVar2 == 0x18) {
      uVar5 = 3;
    }
    else {
      if (iVar2 != 0x20) goto LAB_100588b78;
      uVar5 = 4;
    }
    *(undefined4 *)(lVar7 + 0x100) = uVar5;
    *(int *)(lVar7 + 0x104) = param_2[9];
    *(int *)(lVar7 + 0x108) = param_2[8];
    uVar5 = 0xffffffff;
    if (*(long *)(param_2 + 0xc) != 0) {
      uVar5 = (undefined4)*(long *)(param_2 + 0xc);
    }
    *(undefined4 *)(lVar7 + 0x110) = uVar5;
  }
LAB_100588b78:
  if (lVar6 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100588ba8(void)

{
  return;
}




undefined8 FUN_100588bac(long param_1)

{
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_100609bb8();
    FUN_100609b08(*(undefined8 *)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(long *)(param_1 + 0x2d8) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2d8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_flac.cpp"
                  ,0x1a6);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}




undefined8 FUN_100588c1c(long param_1,long param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    uVar3 = 0x1f;
  }
  else {
    uVar4 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
    if (uVar4 < 5) {
      uVar4 = *(uint *)(&DAT_10115e370 + (long)(int)uVar4 * 4) >> 3;
    }
    else {
      uVar4 = 1;
    }
    if (param_3 != 0) {
      iVar2 = uVar4 * *(int *)(*(long *)(param_1 + 8) + 0x104);
      do {
        uVar4 = *(uint *)(param_1 + 0x2e8);
        if (uVar4 == 0) {
          *(undefined4 *)(param_1 + 0x2e4) = 0;
          FUN_10060a4d0(param_1,*(undefined8 *)(param_1 + 0x198));
          uVar4 = *(uint *)(param_1 + 0x2e8);
          if (uVar4 == 0) break;
        }
        iVar1 = *(int *)(param_1 + 0x2e4);
        iVar5 = param_3;
        if (uVar4 <= (uint)(iVar1 + param_3)) {
          iVar5 = uVar4 - iVar1;
          *(undefined4 *)(param_1 + 0x2e8) = 0;
        }
        _memcpy((void *)(param_2 + (ulong)(uint)(*param_4 * iVar2)),
                (void *)(*(long *)(param_1 + 0x2d0) + (ulong)(uint)(iVar1 * iVar2)),
                (ulong)(uint)(iVar5 * iVar2));
        *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + iVar5;
        *param_4 = *param_4 + iVar5;
        param_3 = param_3 - iVar5;
      } while (param_3 != 0);
    }
    iVar2 = FUN_10060a248(*(undefined8 *)(param_1 + 0x198));
    if (iVar2 == 4) {
      *param_4 = 0;
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_100588d38(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x198) == 0) {
    return 0x1f;
  }
  if ((*(uint *)(*(long *)(param_1 + 400) + 0x1a4) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x2e4) = 0;
    iVar1 = FUN_10060d188(param_1,*(long *)(param_1 + 0x198),param_3);
    if (iVar1 == 0) {
      return 0xe;
    }
  }
  return 0;
}




void FUN_100588d8c(void)

{
  DAT_101e96368 = "FMOD IT Codec";
  DAT_101e96370 = 0x10100;
  DAT_101e96378 = 0x702;
  DAT_101e96374 = 1;
  DAT_101e96380 = thunk_FUN_10058cd58;
  DAT_101e96388 = thunk_FUN_10058f7dc;
  DAT_101e96390 = thunk_FUN_10058fb54;
  DAT_101e96398 = FUN_1005d9ba8;
  DAT_101e963a0 = thunk_FUN_10058fe80;
  DAT_101e963a8 = FUN_1005d9bf4;
  DAT_101e963f0 = FUN_1005d9c34;
  DAT_101e963f8 = FUN_1005d9c58;
  DAT_101e96400 = FUN_1005d9c94;
  DAT_101e96410 = FUN_1005d9cd4;
  DAT_101e96418 = FUN_1005d9d30;
  DAT_101e963c0 = 6;
  DAT_101e963c4 = 0x47f8;
  return;
}




void thunk_FUN_10058cd58(undefined4 *param_1,uint param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  void *pvVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 in_x7;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  long lVar31;
  float fVar32;
  void *pvStack_798;
  undefined4 *puStack_790;
  uint uStack_784;
  undefined4 *puStack_778;
  long lStack_770;
  long lStack_768;
  long lStack_760;
  long lStack_758;
  long lStack_750;
  void *pvStack_748;
  void *pvStack_740;
  int iStack_738;
  uint uStack_734;
  undefined4 uStack_730;
  uint uStack_72c;
  undefined8 uStack_728;
  long lStack_720;
  uint uStack_714;
  undefined2 uStack_710;
  ushort uStack_70e;
  int iStack_70c;
  undefined2 uStack_708;
  undefined2 uStack_706;
  undefined2 uStack_704;
  byte bStack_701;
  long lStack_700;
  long lStack_6f8;
  long lStack_6f0;
  uint uStack_6e8;
  char cStack_6e4;
  char cStack_6e3;
  char cStack_6e2;
  char cStack_6e1;
  uint uStack_6e0;
  uint uStack_6dc;
  int iStack_6d8;
  int iStack_6d4;
  int iStack_6d0;
  int iStack_6cc;
  undefined4 uStack_6c8;
  uint uStack_6c4;
  undefined4 uStack_6c0;
  ushort uStack_6ba;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_2b2 [26];
  byte abStack_298 [256];
  undefined1 auStack_198 [256];
  long lStack_98;
  
  lVar31 = *(long *)PTR____stack_chk_guard_101444218;
  lStack_98 = lVar31;
  _memset(abStack_298,0,0x100);
  uStack_6ba = 0;
  plVar12 = *(long **)(param_1 + 100);
  if ((*(uint *)((long)plVar12 + 0x1a4) & 1) == 0) {
    uVar13 = 0x13;
  }
  else {
    param_1[0x14] = 6;
    *(undefined8 *)(param_1 + 0x5a) = 0;
    *(undefined8 *)(param_1 + 0x62) = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x56) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x52) = 0;
    param_1[0x10] = 2;
    *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
    *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
    *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
    uVar13 = (**(code **)(*plVar12 + 0x18))(plVar12,&uStack_6c8);
    if ((((int)uVar13 == 0) &&
        (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0), (int)uVar13 == 0)) &&
       (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_198,1,4,0), (int)uVar13 == 0))
    {
      iVar9 = FUN_1005ed0f8(auStack_198,"IMPM",4);
      if (iVar9 == 0) {
        uVar13 = (**(code **)(**(long **)(param_1 + 100) + 0x18))
                           (*(long **)(param_1 + 100),&uStack_6c0);
        if ((int)uVar13 == 0) {
          _bzero(param_1 + 0x13a,0x200);
          *(undefined8 *)(param_1 + 0xa6) = 0;
          param_1[0x33b] = 0x3f800000;
          param_1[0x25e] = 6;
          param_1[0x25f] = 0x7d;
          *(undefined1 *)(param_1 + 0x280) = 0x40;
          param_1[0x282] = 0;
          param_1[0x33a] = 0;
          param_1[0x285] = 0;
          param_1[0x138] = 0x40;
          param_1[0x33d] = 0x80;
          *(undefined8 *)(param_1 + 0x1150) = 0;
          _bzero(param_1 + 0x28a,0x180);
          _memset(&DAT_101e97040,0xff,0x400);
          _bzero(param_1 + 0xec,0x130);
          *(undefined4 **)(param_1 + 2) = param_1 + 0xec;
          param_1[0x12f] = uStack_6c8;
          param_1[0x12e] = *(undefined4 *)(*(long *)(param_1 + 0x12) + 0x708);
          uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x1a,0);
          if (((int)uVar13 == 0) &&
             (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1), (int)uVar13 == 0)) {
            uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x281);
            if ((int)uVar13 == 0) {
              piVar1 = param_1 + 0x284;
              uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar1);
              if ((int)uVar13 == 0) {
                piVar2 = param_1 + 0x285;
                uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar2);
                if ((((int)uVar13 == 0) &&
                    (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&uStack_6ba),
                    (int)uVar13 == 0)) &&
                   ((uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1), (int)uVar13 == 0 &&
                    (uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),&iStack_6cc),
                    (int)uVar13 == 0)))) {
                  uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                         (char *)((long)param_1 + 0xcfe));
                  if (((((((int)uVar13 == 0) &&
                         (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1),
                         (int)uVar13 == 0)) &&
                        (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),param_1 + 0x280),
                        (int)uVar13 == 0)) &&
                       ((uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),param_1 + 0x33d),
                        (int)uVar13 == 0 &&
                        (uVar13 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),param_1 + 0x25e),
                        (int)uVar13 == 0)))) &&
                      ((uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),param_1 + 0x25f),
                       (int)uVar13 == 0 &&
                       ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0), (int)uVar13 == 0
                        && (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                           (int)uVar13 == 0)))))) &&
                     (((uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),&iStack_6d4),
                       (int)uVar13 == 0 &&
                       (((uVar13 = FUN_1005d1ce4(*(undefined8 *)(param_1 + 100),&iStack_6d0),
                         (int)uVar13 == 0 &&
                         (uVar13 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),0), (int)uVar13 == 0
                         )) && (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                       param_1 + 0x260,1,0x40,0), (int)uVar13 == 0))
                       )) && ((uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x270
                                                      ,1,0x40,0), (int)uVar13 == 0 &&
                              (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,
                                                      1,param_1[0x281],0), (int)uVar13 == 0)))))) {
                    iVar9 = param_1[0x281];
                    if (iVar9 < 1) {
                      iVar10 = 0;
                    }
                    else {
                      lVar27 = 0;
                      iVar24 = 0;
                      do {
                        iVar10 = (int)lVar27;
                        if (*(char *)((long)param_1 + lVar27 + 0x2b0) == -1) {
                          iVar10 = iVar24;
                        }
                        if (lVar27 <= iVar24) {
                          iVar10 = iVar24;
                        }
                        lVar27 = lVar27 + 1;
                        iVar24 = iVar10;
                      } while (lVar27 < iVar9);
                    }
                    param_1[0x281] = iVar10 + 1;
                    uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e96440,4,
                                           param_1[0x284],0);
                    if ((((((int)uVar13 == 0) &&
                          (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e96c40,4,
                                                  param_1[0x285],0), (int)uVar13 == 0)) &&
                         ((uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e96840,4,
                                                  uStack_6ba,0), (int)uVar13 == 0 &&
                          (((uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),&iStack_6d8),
                            (int)uVar13 == 0 &&
                            (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iStack_6d8 << 3,1
                                                   ), (int)uVar13 == 0)) &&
                           (uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&uStack_6c4),
                           (int)uVar13 == 0)))))) &&
                        (((iStack_6d0 - 1U < uStack_6c4 || (DAT_101e96440 - 1U < uStack_6c4)) ||
                         ((DAT_101e96c40 <= uStack_6c4 ||
                          (((DAT_101e96840 <= uStack_6c4 || (-1 < *(char *)((long)param_1 + 0xcfe)))
                           || (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x1320,1),
                              (int)uVar13 == 0)))))))) &&
                       (uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&uStack_6c4),
                       (int)uVar13 == 0)) {
                      _memset(auStack_198,0,0x100);
                      if ((((uStack_6c4 <= iStack_6d0 - 1U) && (uStack_6c4 <= DAT_101e96440 - 1U))
                          && (uStack_6c4 < DAT_101e96c40)) && (uStack_6c4 < DAT_101e96840)) {
                        uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_198,1,4,0);
                        if ((int)uVar13 != 0) goto LAB_10058f7a0;
                        iVar9 = FUN_1005ed0f8(auStack_198,"PNAM",4);
                        uVar14 = *(undefined8 *)(param_1 + 100);
                        if (iVar9 == 0) {
                          uVar13 = FUN_1005d1ca0(uVar14,&uStack_6dc);
                          if ((int)uVar13 != 0) goto LAB_10058f7a0;
                          uVar14 = *(undefined8 *)(param_1 + 100);
                          uVar19 = 1;
                        }
                        else {
                          uVar19 = 0;
                          uStack_6dc = uStack_6c4;
                        }
                        uVar13 = FUN_1005d1d28(uVar14,uStack_6dc,uVar19);
                        if ((int)uVar13 != 0) goto LAB_10058f7a0;
                      }
                      uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&uStack_6c4);
                      if ((int)uVar13 == 0) {
                        if (((uStack_6c4 <= iStack_6d0 - 1U) && (uStack_6c4 <= DAT_101e96440 - 1U))
                           && ((uStack_6c4 < DAT_101e96c40 && (uStack_6c4 < DAT_101e96840)))) {
                          uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_198,1,4,0);
                          if ((int)uVar13 != 0) goto LAB_10058f7a0;
                          iVar9 = FUN_1005ed0f8(auStack_198,"CNAM",4);
                          uVar14 = *(undefined8 *)(param_1 + 100);
                          if (iVar9 == 0) {
                            uVar13 = FUN_1005d1ca0(uVar14,&uStack_6e0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            uVar14 = *(undefined8 *)(param_1 + 100);
                            uVar19 = 1;
                          }
                          else {
                            uVar19 = 0;
                            uStack_6e0 = uStack_6c4;
                          }
                          uVar13 = FUN_1005d1d28(uVar14,uStack_6e0,uVar19);
                          if ((int)uVar13 != 0) goto LAB_10058f7a0;
                        }
                        uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&uStack_6c4);
                        if ((int)uVar13 == 0) {
                          if (uStack_6c4 <= iStack_6d0 - 1U) {
                            while ((uStack_6c4 <= DAT_101e96440 - 1U &&
                                   (uStack_6c4 < DAT_101e96c40 && uStack_6c4 < DAT_101e96840))) {
                              uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&cStack_6e4,1,4,
                                                     0);
                              if (((int)uVar13 != 0) ||
                                 (uVar13 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),&uStack_6e8)
                                 , (int)uVar13 != 0)) goto LAB_10058f7a0;
                              if (cStack_6e4 == 'F') {
                                if (((cStack_6e3 != 'X') || (cStack_6e2 < '0')) ||
                                   (cStack_6e1 < '0')) break;
                                iVar9 = (int)cStack_6e1 + cStack_6e2 * 10 + -0x210;
                                if ((0x31 < iVar9) || (uStack_6e8 < 0x84)) {
                                  uVar14 = *(undefined8 *)(param_1 + 100);
                                  goto LAB_10058d77c;
                                }
                                pvVar15 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                 (PTR_DAT_10186d408 + 0xd8),
                                                                uStack_6e8,
                                                                                                                                
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1121,0);
                                if (pvVar15 == (void *)0x0) {
                                  uVar13 = 0x1f;
                                  goto LAB_10058f7a0;
                                }
                                uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),pvVar15,1,
                                                       uStack_6e8,0);
                                if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                uVar20 = *(uint *)((long)pvVar15 + 0x80);
                                lVar27 = (long)pvVar15 + 0x40;
                                iVar10 = FUN_1005ed0f8(lVar27,"Echo",4);
                                if (iVar10 == 0 && uVar20 == 0x18) {
                                  plVar12 = (long *)(param_1 + (long)iVar9 * 2 + 0x1158);
                                  if (*(long *)(param_1 + (long)iVar9 * 2 + 0x1158) == 0) {
                                    lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8)
                                                           ,0x2e0,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1136,0);
                                    *plVar12 = lVar27;
                                    if (lVar27 == 0) {
                                      uVar13 = 0x26;
                                      goto LAB_10058f7a0;
                                    }
                                  }
                                  FUN_10057f888();
                                  *(undefined4 *)(*plVar12 + 0x1e8) = 0x1010101;
                                  _memcpy((void *)(*plVar12 + 0x260),pvVar15,0x80);
                                  if ((ulong)uVar20 <= (ulong)uStack_6e8 - 0x84) {
                                    pvVar16 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                     (PTR_DAT_10186d408 + 0xd8),0x18
                                                                    ,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1151,0);
                                    if (pvVar16 == (void *)0x0) {
                                      uVar13 = 0x26;
                                      goto LAB_10058f7a0;
                                    }
                                    _memcpy(pvVar16,(void *)((long)pvVar15 + 0x84),(ulong)uVar20);
                                    *(undefined4 *)(*plVar12 + 0x30) = 0x3f800000;
                                    uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),0x11,
                                                           &lStack_6f0);
                                    if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                    *(ushort *)(lStack_6f0 + 0x3c) =
                                         *(ushort *)(lStack_6f0 + 0x3c) | 0x400;
                                    lVar27 = *plVar12;
                                    *(long *)(lVar27 + 0x230) = lStack_6f0;
                                    *(long *)(lVar27 + 0x238) = lStack_6f0;
                                    *(undefined8 *)(lVar27 + 0x248) = 0;
                                    *(undefined8 *)(lVar27 + 0x240) = 0;
                                    uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 4) * 100.0,
                                                           lStack_6f0,0);
                                    if ((((int)uVar13 != 0) ||
                                        (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 8) *
                                                                100.0,lStack_6f0,1),
                                        (int)uVar13 != 0)) ||
                                       ((uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 0xc) *
                                                                2000.0,lStack_6f0,2),
                                        (int)uVar13 != 0 ||
                                        ((uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 0x10) *
                                                                 2000.0,lStack_6f0,3),
                                         (int)uVar13 != 0 ||
                                         (uVar13 = FUN_1005cef0c(*(undefined4 *)
                                                                  ((long)pvVar16 + 0x14),lStack_6f0,
                                                                 4), (int)uVar13 != 0))))))
                                    goto LAB_10058f7a0;
                                    uVar14 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
                                    uVar19 = 0x117e;
LAB_10058dad4:
                                    FUN_1005d7f1c(uVar14,pvVar16,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,uVar19);
                                  }
                                }
                                else {
                                  iVar10 = FUN_1005ed0f8(lVar27,"Flanger",7);
                                  if ((iVar10 == 0) && (uVar20 == 0x20)) {
                                    plVar12 = (long *)(param_1 + (long)iVar9 * 2 + 0x1158);
                                    if (*(long *)(param_1 + (long)iVar9 * 2 + 0x1158) == 0) {
                                      lVar27 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),0x2e0,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1186,0);
                                      *plVar12 = lVar27;
                                      if (lVar27 == 0) {
                                        uVar13 = 0x26;
                                        goto LAB_10058f7a0;
                                      }
                                    }
                                    FUN_10057f888();
                                    *(undefined4 *)(*plVar12 + 0x1e8) = 0x1010101;
                                    _memcpy((void *)(*plVar12 + 0x260),pvVar15,0x80);
                                    if (0x1f < (ulong)uStack_6e8 - 0x84) {
                                      pvVar16 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                       (PTR_DAT_10186d408 + 0xd8),
                                                                      0x20,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x11a1,0);
                                      if (pvVar16 == (void *)0x0) {
                                        uVar13 = 0x26;
                                      }
                                      else {
                                        _memcpy(pvVar16,(void *)((long)pvVar15 + 0x84),0x20);
                                        *(undefined4 *)(*plVar12 + 0x30) = 0x3f800000;
                                        uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),8,
                                                               &lStack_6f8);
                                        if ((int)uVar13 == 0) {
                                          *(ushort *)(lStack_6f8 + 0x3c) =
                                               *(ushort *)(lStack_6f8 + 0x3c) | 0x400;
                                          lVar27 = *plVar12;
                                          *(long *)(lVar27 + 0x230) = lStack_6f8;
                                          *(long *)(lVar27 + 0x238) = lStack_6f8;
                                          *(undefined8 *)(lVar27 + 0x248) = 0;
                                          *(undefined8 *)(lVar27 + 0x240) = 0;
                                          uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 4) *
                                                                 100.0,lStack_6f8,0);
                                          if ((((int)uVar13 == 0) &&
                                              (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 +
                                                                                0x10) *
                                                                      *(float *)((long)pvVar16 +
                                                                                0x1c) * 0.5,
                                                                      lStack_6f8,1),
                                              (int)uVar13 == 0)) &&
                                             (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 0xc)
                                                                     * 10.0,lStack_6f8,2),
                                             (int)uVar13 == 0)) {
                                            uVar14 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
                                            uVar19 = 0x11c9;
                                            goto LAB_10058dad4;
                                          }
                                        }
                                      }
                                      goto LAB_10058f7a0;
                                    }
                                  }
                                  else {
                                    iVar10 = FUN_1005ed0f8(lVar27,"Chorus",6);
                                    if ((iVar10 == 0) && (uVar20 == 0x20)) {
                                      plVar12 = (long *)(param_1 + (long)iVar9 * 2 + 0x1158);
                                      if (*(long *)(param_1 + (long)iVar9 * 2 + 0x1158) == 0) {
                                        lVar27 = FUN_1005d7a5c(*(undefined8 *)
                                                                (PTR_DAT_10186d408 + 0xd8),0x2e0,
                                                                                                                              
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x11d1,0);
                                        *plVar12 = lVar27;
                                        if (lVar27 == 0) {
                                          uVar13 = 0x26;
                                          goto LAB_10058f7a0;
                                        }
                                      }
                                      FUN_10057f888();
                                      *(undefined4 *)(*plVar12 + 0x1e8) = 0x1010101;
                                      _memcpy((void *)(*plVar12 + 0x260),pvVar15,0x80);
                                      if (0x1f < (ulong)uStack_6e8 - 0x84) {
                                        pvVar16 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                         (PTR_DAT_10186d408 + 0xd8),
                                                                        0x20,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x11ec,0);
                                        if (pvVar16 == (void *)0x0) {
                                          uVar13 = 0x26;
                                        }
                                        else {
                                          _memcpy(pvVar16,(void *)((long)pvVar15 + 0x84),0x20);
                                          *(undefined4 *)(*plVar12 + 0x30) = 0x3f800000;
                                          uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),0xe
                                                                 ,&lStack_700);
                                          if ((int)uVar13 == 0) {
                                            *(ushort *)(lStack_700 + 0x3c) =
                                                 *(ushort *)(lStack_700 + 0x3c) | 0x400;
                                            lVar27 = *plVar12;
                                            *(long *)(lVar27 + 0x230) = lStack_700;
                                            *(long *)(lVar27 + 0x238) = lStack_700;
                                            *(undefined8 *)(lVar27 + 0x248) = 0;
                                            *(undefined8 *)(lVar27 + 0x240) = 0;
                                            fVar32 = *(float *)((long)pvVar16 + 4) * 200.0;
                                            if (100.0 <= fVar32) {
                                              fVar32 = 100.0;
                                            }
                                            uVar13 = FUN_1005cef0c(fVar32,lStack_700,0);
                                            if ((((int)uVar13 == 0) &&
                                                (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 8
                                                                                  ) * 100.0,
                                                                        lStack_700,2),
                                                (int)uVar13 == 0)) &&
                                               (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 +
                                                                                 0xc) * 10.0,
                                                                       lStack_700,1),
                                               (int)uVar13 == 0)) {
                                              uVar14 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
                                              uVar19 = 0x1215;
                                              goto LAB_10058dad4;
                                            }
                                          }
                                        }
                                        goto LAB_10058f7a0;
                                      }
                                    }
                                  }
                                }
                                FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pvVar15,
                                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                              ,0x1219);
                              }
                              else if (cStack_6e4 == 'E') {
                                if (((cStack_6e3 != 'Q') || (cStack_6e2 != 'F')) ||
                                   (cStack_6e1 != 'X')) break;
                                uVar14 = *(undefined8 *)(param_1 + 100);
LAB_10058d77c:
                                uVar13 = FUN_1005d1d28(uVar14,uStack_6e8,1);
                                if ((int)uVar13 != 0) goto LAB_10058f7a0;
                              }
                              else {
                                if (((cStack_6e4 != 'C') || (cStack_6e3 != 'H')) ||
                                   ((cStack_6e2 != 'F' || (cStack_6e1 != 'X')))) break;
                                lVar27 = 0;
                                lStack_768 = 0;
                                do {
                                  if ((lVar27 < (int)uStack_6e8) &&
                                     (uVar13 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),
                                                             (long)param_1 + lVar27 + 0x46f0),
                                     (int)uVar13 != 0)) goto LAB_10058f7a0;
                                  lStack_768 = lStack_768 + 1;
                                  lVar27 = lVar27 + 4;
                                } while (lStack_768 < 0x40);
                              }
                              if (iStack_6d0 - 1U < uStack_6c4) break;
                            }
                          }
                          if (iStack_6d4 != 0) {
                            uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),iStack_6d0,0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   iStack_6d4 + 1,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x122d,0);
                            if (lVar27 == 0) {
                              uVar13 = 0x26;
                              goto LAB_10058f7a0;
                            }
                            uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),lVar27,iStack_6d4,
                                                   1,0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            if (0 < iStack_6d4) {
                              lVar21 = 0;
                              do {
                                if (*(char *)(lVar27 + lVar21) == '\r') {
                                  *(undefined1 *)(lVar27 + lVar21) = 10;
                                }
                                lVar21 = lVar21 + 1;
                              } while (lVar21 < iStack_6d4);
                            }
                            uVar13 = FUN_100586684(param_1,9,"Song message",lVar27,iStack_6d4,3,0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar27,
                                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                          ,0x1241);
                          }
                          if (0 < (int)param_1[0x138]) {
                            lStack_768 = 0;
                            do {
                              puVar17 = (undefined8 *)
                                        FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                      0x398,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1249,0);
                              puVar17[1] = puVar17 + 1;
                              puVar17[2] = puVar17 + 1;
                              puVar17[3] = 0;
                              FUN_100583c48(puVar17 + 5);
                              *(undefined8 **)(param_1 + lStack_768 * 2 + 0x13a) = puVar17;
                              if (puVar17 == (undefined8 *)0x0) {
                                uVar13 = 0x26;
                                goto LAB_10058f7a0;
                              }
                              *puVar17 = param_1;
                              lStack_768 = lStack_768 + 1;
                            } while (lStack_768 < (int)param_1[0x138]);
                          }
                          uVar13 = FUN_100586684(param_1,9,"Number of channels",param_1 + 0x138,4,1,
                                                 0);
                          if ((int)uVar13 == 0) {
                            lStack_768 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                       param_1[0x284] * 0x618,
                                                                                                              
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x125b,0);
                            *(long *)(param_1 + 0x286) = lStack_768;
                            if (lStack_768 == 0) {
                              uVar13 = 0x26;
                            }
                            else if (*piVar1 < 1) {
                              uStack_784 = 0;
LAB_10058e4f0:
                              lVar27 = 0;
                              *(undefined8 *)(param_1 + 0x34e) = 0;
                              if (param_1[0x285] != 0) {
                                puVar17 = (undefined8 *)
                                          FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                        param_1[0x285] << 3,
                                                                                                                
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x135f,0);
                                *(undefined8 **)(param_1 + 0x34e) = puVar17;
                                if (puVar17 == (undefined8 *)0x0) {
                                  uVar13 = 0x26;
                                  goto LAB_10058f7a0;
                                }
                                if (0 < *piVar2) {
                                  *puVar17 = param_1 + 0x350;
                                  puVar17 = (undefined8 *)**(undefined8 **)(param_1 + 0x34e);
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         DAT_101e96c40,0);
                                  if ((int)uVar13 == 0) {
                                    lStack_768 = 0;
                                    puStack_778 = &DAT_101e97040;
                                    puStack_790 = param_1 + 0x35e;
                                    while (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                  auStack_198,1,4,0),
                                          (int)uVar13 == 0) {
                                      iVar9 = FUN_1005ed0f8(auStack_198,"IMPS",4);
                                      if (iVar9 != 0) {
                                        uVar13 = 0x13;
                                        break;
                                      }
                                      uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xc,1);
                                      if ((((int)uVar13 != 0) ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                          (int)uVar13 != 0)) ||
                                         (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 (long)puVar17 + 0x25),
                                         (int)uVar13 != 0)) break;
                                      uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             (byte *)((long)puVar17 + 0x24));
                                      if ((int)uVar13 != 0) break;
                                      bVar8 = *(byte *)((long)puVar17 + 0x24);
                                      if ((bVar8 >> 4 & 1) == 0) {
                                        uVar20 = 9;
                                      }
                                      else {
                                        uVar20 = (bVar8 >> 5 & 2) + 10;
                                      }
                                      uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             (long)puVar17 + 0xc);
                                      if (((int)uVar13 != 0) ||
                                         (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 auStack_2b2,1,0x1a,0),
                                         (int)uVar13 != 0)) break;
                                      lVar27 = lStack_768;
                                      _sprintf((char *)&uStack_6b8,"Sample name %d");
                                      uVar11 = FUN_100586684(param_1,9,&uStack_6b8,auStack_2b2,0x1c,
                                                             3,0,in_x7,lVar27);
                                      if (uVar11 != 0) {
                                        uVar13 = (ulong)uVar11;
                                        break;
                                      }
                                      uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             abStack_298 + lStack_768);
                                      if ((((int)uVar13 != 0) ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  (long)puVar17 + 0xd),
                                          (int)uVar13 != 0)) ||
                                         (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 &iStack_70c,4,1,0),
                                         (int)uVar13 != 0)) break;
                                      piVar1 = (int *)(puVar17 + 2);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),piVar1,4
                                                             ,1,0);
                                      if ((int)uVar13 != 0) break;
                                      piVar5 = (int *)((long)puVar17 + 0x14);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),piVar5,4
                                                             ,1,0);
                                      if ((int)uVar13 != 0) break;
                                      piVar6 = (int *)(puVar17 + 1);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),piVar6,4
                                                             ,1,0);
                                      if ((((((int)uVar13 != 0) ||
                                            (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                    puVar17 + 5,4,1,0),
                                            (int)uVar13 != 0)) ||
                                           (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                   (long)puVar17 + 0x2c,4,1,0),
                                           (int)uVar13 != 0)) ||
                                          ((uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                   puStack_778,4,1,0),
                                           (int)uVar13 != 0 ||
                                           (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                   puVar17 + 6), (int)uVar13 != 0)))
                                          ) || ((uVar13 = FUN_1005d19f8(*(undefined8 *)
                                                                         (param_1 + 100),
                                                                        (long)puVar17 + 0x31),
                                                (int)uVar13 != 0 ||
                                                ((uVar13 = FUN_1005d19f8(*(undefined8 *)
                                                                          (param_1 + 100),
                                                                         (long)puVar17 + 0x33),
                                                 (int)uVar13 != 0 ||
                                                 (uVar13 = FUN_1005d19f8(*(undefined8 *)
                                                                          (param_1 + 100),
                                                                         (long)puVar17 + 0x32),
                                                 (int)uVar13 != 0)))))) break;
                                      iVar9 = *piVar5;
                                      *piVar5 = iVar9 - *piVar1;
                                      if (*piVar6 == 0) {
                                        *piVar6 = 0x20ab;
                                      }
                                      if (((uVar20 & 1) != 0) || (iVar9 == *piVar1)) {
                                        *piVar1 = 0;
                                        *piVar5 = iStack_70c;
                                        uVar20 = 9;
                                      }
                                      if (iStack_70c != 0) {
                                        uVar28 = bVar8 >> 1 & 1;
                                        iVar9 = (bVar8 >> 2 & 1) + 1;
                                        uVar11 = *(int *)(&DAT_10115e390 + (ulong)uVar28 * 4) *
                                                 iStack_70c;
                                        _memset(&uStack_6b8,0,0xe8);
                                        uStack_6b8 = CONCAT44((uVar11 >> 3) * iVar9,0xe8);
                                        uStack_6b0 = (char *)CONCAT44(iVar9,(undefined4)uStack_6b0);
                                        uStack_6a8 = CONCAT44(uVar28 + 1,
                                                              *(undefined4 *)(puVar17 + 1));
                                        uVar13 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,
                                                               uVar20 | 0x400,&uStack_6b8,puVar17);
                                        if (((int)uVar13 != 0) ||
                                           (((uVar20 & 6) != 0 &&
                                            (uVar13 = (**(code **)(*(long *)*puVar17 + 0x130))
                                                                ((long *)*puVar17,
                                                                 *(int *)(puVar17 + 2),2,
                                                                 *(int *)(puVar17 + 2) +
                                                                 *(int *)((long)puVar17 + 0x14) + -1
                                                                 ,2), (int)uVar13 != 0)))) break;
                                      }
                                      lVar27 = lStack_768 + 1;
                                      if (*piVar2 <= lVar27) goto LAB_10058e968;
                                      *(undefined4 **)
                                       (*(long *)(param_1 + 0x34e) + lStack_768 * 8 + 8) =
                                           puStack_790;
                                      puVar17 = *(undefined8 **)
                                                 (*(long *)(param_1 + 0x34e) + lStack_768 * 8 + 8);
                                      uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                             *(undefined4 *)
                                                              (&DAT_101e96c44 + lStack_768 * 4),0);
                                      puStack_790 = puStack_790 + 0xe;
                                      puStack_778 = puStack_778 + 1;
                                      lStack_768 = lVar27;
                                      if ((int)uVar13 != 0) break;
                                    }
                                  }
                                  goto LAB_10058f7a0;
                                }
                                lVar27 = 0;
                              }
LAB_10058e968:
                              uVar20 = 0;
                              (&DAT_101e97040)[(int)lVar27] = uStack_6c0;
                              param_1[0x282] = 0;
                              if (0 < (int)param_1[0x281]) {
                                uVar20 = 0;
                                lVar27 = 0;
                                do {
                                  bVar8 = *(byte *)((long)param_1 + lVar27 + 0x2b0);
                                  if (bVar8 < 0xfe && uVar20 <= bVar8) {
                                    uVar20 = bVar8 + 1;
                                    param_1[0x282] = uVar20;
                                  }
                                  lVar27 = lVar27 + 1;
                                } while (lVar27 < (int)param_1[0x281]);
                              }
                              if (uVar20 <= uStack_6ba) {
                                uVar20 = (uint)uStack_6ba;
                              }
                              param_1[0x283] = uVar20;
                              lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                     uVar20 << 4,
                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1427,0);
                              *(long *)(param_1 + 0xa6) = lVar27;
                              if (lVar27 == 0) {
                                uVar13 = 0x26;
                              }
                              else {
                                uVar13 = (ulong)uStack_6ba;
                                if (uStack_6ba != 0) {
                                  lStack_768 = 0;
                                  lVar21 = 0;
                                  while( true ) {
                                    if ((&DAT_101e96840)[lVar21] == 0) {
                                      *(undefined4 *)(lVar27 + lStack_768) = 0x40;
                                      lVar22 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),0x40,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1445,0);
                                      *(long *)((undefined4 *)(lVar27 + lStack_768) + 2) = lVar22;
                                      if (lVar22 == 0) {
                                        uVar13 = 0x26;
                                        goto LAB_10058f7a0;
                                      }
                                    }
                                    else {
                                      uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                             (&DAT_101e96840)[lVar21],0);
                                      if (((((int)uVar13 != 0) ||
                                           (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                                   &uStack_710), (int)uVar13 != 0))
                                          || (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                                     &uStack_70e), (int)uVar13 != 0)
                                          ) || (uVar13 = FUN_1005d1d28(*(undefined8 *)
                                                                        (param_1 + 100),4,1),
                                               (int)uVar13 != 0)) goto LAB_10058f7a0;
                                      *(uint *)(lVar27 + lStack_768) = (uint)uStack_70e;
                                      uVar14 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),uStack_710,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1462,0);
                                      *(undefined8 *)((uint *)(lVar27 + lStack_768) + 2) = uVar14;
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),uVar14,1
                                                             ,uStack_710,0);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                    }
                                    lVar21 = lVar21 + 1;
                                    uVar13 = (ulong)uStack_6ba;
                                    if ((long)uVar13 <= lVar21) break;
                                    lStack_768 = lStack_768 + 0x10;
                                    lVar27 = *(long *)(param_1 + 0xa6);
                                  }
                                }
                                if ((int)uVar13 < (int)param_1[0x282]) {
                                  lVar27 = uVar13 << 4;
                                  do {
                                    lVar22 = *(long *)(param_1 + 0xa6);
                                    *(undefined4 *)(lVar22 + lVar27) = 0x40;
                                    lVar21 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8)
                                                           ,0x40,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x14d5,0);
                                    *(long *)((undefined4 *)(lVar22 + lVar27) + 2) = lVar21;
                                    if (lVar21 == 0) {
                                      uVar13 = 0x26;
                                      goto LAB_10058f7a0;
                                    }
                                    uVar13 = uVar13 + 1;
                                    lVar27 = lVar27 + 0x10;
                                  } while ((long)uVar13 < (long)(int)param_1[0x282]);
                                }
                                uVar20 = 0;
                                pvStack_798 = (void *)0x0;
                                uVar29 = 0;
                                do {
                                  lVar27 = 0;
                                  iVar9 = (int)uVar29;
                                  puVar30 = (undefined4 *)((long)iVar9 * 4 + 0x101e9703c);
                                  do {
                                    if ((long)*piVar2 <= iVar9 + lVar27) {
                                      if (pvStack_798 != (void *)0x0) {
                                        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                      pvStack_798,
                                                                                                            
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x15da);
                                      }
                                      if ((param_3 == 0) ||
                                         (iVar9 = *(int *)(param_3 + 0x14), iVar9 == 0)) {
                                        lVar27 = *(long *)(param_1 + 2);
                                        iVar9 = 5;
                                      }
                                      else {
                                        lVar27 = *(long *)(param_1 + 2);
                                      }
                                      *(int *)(lVar27 + 0x100) = iVar9;
                                      *(undefined4 *)(lVar27 + 0x104) = 2;
                                      FUN_1005ecc98(lVar27,param_1 + 0x66,0x100);
                                      param_1[0x4c] = 0;
                                      uStack_690 = 0;
                                      uStack_688 = 0;
                                      uStack_6a0 = 0;
                                      uStack_698 = 0;
                                      uStack_6a8 = 0;
                                      uStack_6b8 = 0;
                                      uStack_6b0 = "FMOD IT final mixdown unit";
                                      puVar17 = (undefined8 *)(param_1 + 0x11fc);
                                      uVar13 = FUN_10056b4fc(*(undefined8 *)(param_1 + 0x12),
                                                             &uStack_6b8,0,puVar17,1);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                      FUN_1005c9948(*(undefined8 *)(param_1 + 0x11fc),0,
                                                    *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),
                                                    0);
                                      FUN_1005c982c(*(undefined8 *)(param_1 + 0x11fc),1,0);
                                      uStack_690 = 0;
                                      uStack_688 = 0;
                                      uStack_6a0 = 0;
                                      uStack_698 = 0;
                                      uStack_6a8 = 0;
                                      uStack_6b8 = 0;
                                      uStack_6b0 = "FMOD IT Target Unit";
                                      plVar12 = (long *)(param_1 + 0xa8);
                                      uVar13 = FUN_10056b4fc(*(undefined8 *)(param_1 + 0x12),
                                                             &uStack_6b8,0,plVar12,1);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                      lVar27 = *plVar12;
                                      *(ushort *)(lVar27 + 0x3c) =
                                           *(ushort *)(lVar27 + 0x3c) | 0x400;
                                      uVar13 = FUN_1005ce188(*puVar17,lVar27,0,0,1,0);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                      FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                                    *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),
                                                    0);
                                      FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                                      lVar27 = 0;
                                      goto LAB_10058f2f0;
                                    }
                                    plVar12 = *(long **)(*(long *)(param_1 + 0x34e) +
                                                         (-(uVar29 >> 0x1f) & 0xfffffff800000000 |
                                                         uVar29 << 3) + lVar27 * 8);
                                    uStack_714 = 0;
                                    uVar11 = (&DAT_101e97040)[(iVar9 + 1) + lVar27] -
                                             (&DAT_101e97040)[iVar9 + lVar27];
                                    if ((uVar11 == 0 ||
                                         (int)(&DAT_101e97040)[(iVar9 + 1) + lVar27] <
                                         (int)(&DAT_101e97040)[iVar9 + lVar27]) &&
                                       (plVar18 = (long *)*plVar12, uVar11 = uStack_714,
                                       plVar18 != (long *)0x0)) {
                                      (**(code **)(*plVar18 + 0x90))(plVar18,&uStack_714,4);
                                      uVar11 = uStack_714;
                                    }
                                    uStack_714 = uVar11;
                                    lVar27 = lVar27 + 1;
                                    puVar30 = puVar30 + 1;
                                  } while (*plVar12 == 0);
                                  lVar21 = (long)iVar9 + -1 + lVar27;
                                  plVar18 = (long *)**(undefined8 **)
                                                      (*(long *)(param_1 + 0x34e) + lVar21 * 8);
                                  (**(code **)(*plVar18 + 0x90))(plVar18,&uStack_734,4);
                                  (**(code **)(*(long *)*plVar12 + 0x98))
                                            ((long *)*plVar12,0,&iStack_738,0,0);
                                  bVar8 = abStack_298[lVar21];
                                  if ((*(byte *)((long)plVar12 + 0x24) >> 3 & 1) == 0) {
                                    iVar10 = 0;
                                  }
                                  else {
                                    bVar7 = 0;
                                    if (0x214 < iStack_6cc) {
                                      bVar7 = bVar8 >> 2 & 1;
                                    }
                                    iVar10 = 0xd6;
                                    if (bVar7 != 0) {
                                      iVar10 = 0xd7;
                                    }
                                  }
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),*puVar30,0);
                                  if (((int)uVar13 != 0) ||
                                     (uVar13 = (**(code **)(*(long *)*plVar12 + 0x28))
                                                         ((long *)*plVar12,0,uStack_734,&lStack_720,
                                                          &uStack_728,&uStack_72c,&uStack_730),
                                     (int)uVar13 != 0)) break;
                                  if ((lStack_720 != 0) &&
                                     (uVar29 = (ulong)uStack_72c, uStack_72c != 0)) {
                                    if (((bVar8 & 1) == 0) || (iVar10 != 0)) {
                                      if (uVar20 < uStack_714) {
                                        if (pvStack_798 != (void *)0x0) {
                                          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                        pvStack_798,
                                                                                                                
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x15af);
                                        }
                                        pvStack_798 = (void *)FUN_1005d7708(*(undefined8 *)
                                                                             (PTR_DAT_10186d408 +
                                                                             0xd8),uStack_714,
                                                                                                                                                        
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x15b2,0,0);
                                        uVar20 = uStack_714;
                                        if (pvStack_798 == (void *)0x0) {
                                          uVar13 = 0x26;
                                          break;
                                        }
                                      }
                                      _bzero(pvStack_798,(ulong)uVar20);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                             pvStack_798,1,uStack_714,0);
                                      if ((int)uVar13 != 0) break;
                                      if (iStack_738 == 1) {
                                        pvStack_740 = pvStack_798;
                                        uVar13 = (ulong)*(uint *)(*plVar12 + 0x60);
                                        if (0 < (int)*(uint *)(*plVar12 + 0x60)) {
                                          lVar21 = 0;
                                          do {
                                            uVar11 = 0;
                                            if ((uint)uVar13 != 0) {
                                              uVar11 = uStack_734 / (uint)uVar13;
                                            }
                                            FUN_100589340(param_1,&pvStack_740,lStack_720 + lVar21,
                                                          uVar11,iVar10 == 0xd7);
                                            lVar21 = lVar21 + 1;
                                            uVar13 = (ulong)*(int *)(*plVar12 + 0x60);
                                          } while (lVar21 < (long)uVar13);
                                        }
                                      }
                                      else {
                                        pvStack_748 = pvStack_798;
                                        uVar13 = (ulong)*(uint *)(*plVar12 + 0x60);
                                        if (0 < (int)*(uint *)(*plVar12 + 0x60)) {
                                          lVar22 = 0;
                                          lVar21 = 0;
                                          do {
                                            uVar11 = 0;
                                            if ((uint)uVar13 != 0) {
                                              uVar11 = (uStack_734 >> 1) / (uint)uVar13;
                                            }
                                            FUN_1005896c4(param_1,&pvStack_748,lStack_720 + lVar22,
                                                          uVar11,iVar10 == 0xd7);
                                            lVar21 = lVar21 + 1;
                                            uVar13 = (ulong)*(int *)(*plVar12 + 0x60);
                                            lVar22 = lVar22 + 2;
                                          } while (lVar21 < (long)uVar13);
                                        }
                                      }
                                    }
                                    else {
                                      if (iStack_738 == 2) {
                                        if (*(int *)(*plVar12 + 0x60) == 1) {
                                          uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 lStack_720,2,uStack_72c >> 1,0);
                                          iVar10 = (int)uVar13;
                                        }
                                        else {
                                          lStack_768._0_4_ = 0;
                                          uVar13 = 0;
                                          uVar11 = uStack_72c >> 2;
                                          if (uVar11 != 0) {
                                            do {
                                              uVar28 = 0x200;
                                              if (uVar11 < 0x201) {
                                                uVar28 = uVar11;
                                              }
                                              uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &uStack_6b8,2,uVar28,0);
                                              if (uVar28 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar11) {
                                                  uVar25 = ~uVar11;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)lStack_768 << 1;
                                                puVar17 = &uStack_6b8;
                                                do {
                                                  *(undefined2 *)(lStack_720 + (ulong)uVar26 * 2) =
                                                       *(undefined2 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 2);
                                                } while (uVar25 != 0);
                                              }
                                              uVar11 = uVar11 - uVar28;
                                              lStack_768._0_4_ = uVar28 + (int)lStack_768;
                                            } while (uVar11 != 0);
                                            uVar29 = (ulong)uStack_72c;
                                          }
                                          uVar29 = uVar29 >> 2;
                                          if ((int)uVar29 != 0) {
                                            lStack_768._0_4_ = 0;
                                            do {
                                              uVar28 = (uint)uVar29;
                                              uVar11 = 0x200;
                                              if (uVar28 < 0x201) {
                                                uVar11 = uVar28;
                                              }
                                              uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &uStack_6b8,2,uVar11,0);
                                              if (uVar11 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar28) {
                                                  uVar25 = ~uVar28;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)lStack_768 << 1 | 1;
                                                puVar17 = &uStack_6b8;
                                                do {
                                                  *(undefined2 *)(lStack_720 + (ulong)uVar26 * 2) =
                                                       *(undefined2 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 2);
                                                } while (uVar25 != 0);
                                              }
                                              uVar29 = (ulong)(uVar28 - uVar11);
                                              lStack_768._0_4_ = uVar11 + (int)lStack_768;
                                            } while (uVar28 - uVar11 != 0);
                                          }
                                          iVar10 = (int)uVar13;
                                        }
                                      }
                                      else {
                                        if (*(int *)(*plVar12 + 0x60) != 1) {
                                          uVar11 = uStack_72c >> 2;
                                          if (uVar11 != 0) {
                                            lStack_768._0_4_ = 0;
                                            do {
                                              uVar28 = 0x200;
                                              if (uVar11 < 0x201) {
                                                uVar28 = uVar11;
                                              }
                                              FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                            &uStack_6b8,1,uVar28,0);
                                              if (uVar28 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar11) {
                                                  uVar25 = ~uVar11;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)lStack_768 << 1;
                                                puVar17 = &uStack_6b8;
                                                do {
                                                  *(undefined1 *)(lStack_720 + (ulong)uVar26) =
                                                       *(undefined1 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 1);
                                                } while (uVar25 != 0);
                                              }
                                              uVar11 = uVar11 - uVar28;
                                              lStack_768._0_4_ = uVar28 + (int)lStack_768;
                                            } while (uVar11 != 0);
                                            uVar29 = (ulong)uStack_72c;
                                          }
                                          uVar29 = uVar29 >> 2;
                                          if ((int)uVar29 != 0) {
                                            lStack_768._0_4_ = 0;
                                            do {
                                              uVar28 = (uint)uVar29;
                                              uVar11 = 0x200;
                                              if (uVar28 < 0x201) {
                                                uVar11 = uVar28;
                                              }
                                              FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                            &uStack_6b8,1,uVar11,0);
                                              if (uVar11 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar28) {
                                                  uVar25 = ~uVar28;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)lStack_768 << 1 | 1;
                                                puVar17 = &uStack_6b8;
                                                do {
                                                  *(undefined1 *)(lStack_720 + (ulong)uVar26) =
                                                       *(undefined1 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 1);
                                                } while (uVar25 != 0);
                                              }
                                              uVar29 = (ulong)(uVar28 - uVar11);
                                              lStack_768._0_4_ = uVar11 + (int)lStack_768;
                                            } while (uVar28 - uVar11 != 0);
                                          }
                                          goto LAB_10058f154;
                                        }
                                        uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                               lStack_720,1,uVar29,0);
                                        iVar10 = (int)uVar13;
                                      }
                                      if (iVar10 != 0) break;
                                    }
                                  }
LAB_10058f154:
                                  uVar29 = (ulong)(uint)(iVar9 + (int)lVar27);
                                  uVar13 = (**(code **)(*(long *)*plVar12 + 0x30))
                                                     ((long *)*plVar12,lStack_720,uStack_728,
                                                      uStack_72c,uStack_730);
                                } while ((int)uVar13 == 0);
                              }
                            }
                            else {
                              uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),DAT_101e96440,0)
                              ;
                              if ((int)uVar13 == 0) {
                                uStack_784 = 0;
                                lStack_770 = 0;
                                while (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              auStack_198,1,4,0), (int)uVar13 == 0)
                                {
                                  iVar9 = FUN_1005ed0f8(auStack_198,"IMPI",4);
                                  if (iVar9 != 0) {
                                    uVar13 = 0x13;
                                    break;
                                  }
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xc,1);
                                  if ((((((int)uVar13 != 0) ||
                                        (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                        (int)uVar13 != 0)) ||
                                       ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                lStack_768 + lStack_770 * 0x618 +
                                                                0x510), (int)uVar13 != 0 ||
                                        ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 lStack_768 + lStack_770 * 0x618 +
                                                                 0x511), (int)uVar13 != 0 ||
                                         (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 lStack_768 + lStack_770 * 0x618 +
                                                                 0x512), (int)uVar13 != 0)))))) ||
                                      (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x50c), (int)uVar13 != 0)) ||
                                     (((((((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                   lStack_768 + lStack_770 * 0x618 +
                                                                   0x513), (int)uVar13 != 0 ||
                                           (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                   lStack_768 + lStack_770 * 0x618 +
                                                                   0x514), (int)uVar13 != 0)) ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  lStack_768 + lStack_770 * 0x618 +
                                                                  0x50e), (int)uVar13 != 0)) ||
                                         ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  lStack_768 + lStack_770 * 0x618 +
                                                                  0x50f), (int)uVar13 != 0 ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  lStack_768 + lStack_770 * 0x618 +
                                                                  0x515), (int)uVar13 != 0)))) ||
                                        (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                lStack_768 + lStack_770 * 0x618 +
                                                                0x516), (int)uVar13 != 0)) ||
                                       ((uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1),
                                        (int)uVar13 != 0 ||
                                        (uVar13 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),
                                                                lStack_768 + lStack_770 * 0x618 +
                                                                0x1c), (int)uVar13 != 0)))) ||
                                      ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                       (int)uVar13 != 0 ||
                                       (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                               lStack_768 + lStack_770 * 0x618,1,
                                                               0x1a,0), (int)uVar13 != 0))))))
                                  break;
                                  puVar3 = (uint *)(lStack_768 + lStack_770 * 0x618 + 0x608);
                                  uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),puVar3);
                                  if ((int)uVar13 != 0) break;
                                  uVar20 = *puVar3;
                                  uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),
                                                         lStack_768 + lStack_770 * 0x618 + 0x60c);
                                  if (((((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lStack_768 + lStack_770 * 0x618 +
                                                               0x610), (int)uVar13 != 0)) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                      (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1),
                                      (int)uVar13 != 0 ||
                                      (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x517,1,0xf0,0), (int)uVar13 != 0))))
                                  break;
                                  lVar27 = lStack_768 + lStack_770 * 0x618;
                                  *(undefined1 *)(lVar27 + 0x400) = 0;
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_701)
                                  ;
                                  if ((int)uVar13 != 0) break;
                                  pbVar4 = (byte *)(lVar27 + 0x400);
                                  if ((bStack_701 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 1;
                                  }
                                  if ((bStack_701 >> 1 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 4;
                                  }
                                  if ((bStack_701 >> 2 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 2;
                                  }
                                  if ((bStack_701 >> 3 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 8;
                                  }
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if ((((int)uVar13 != 0) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x453), (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x454), (int)uVar13 != 0 ||
                                      ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lStack_768 + lStack_770 * 0x618 +
                                                               0x455), (int)uVar13 != 0 ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lStack_768 + lStack_770 * 0x618 +
                                                               0x456), (int)uVar13 != 0)))))) break;
                                  puStack_778 = (undefined4 *)0x0;
                                  uStack_784 = uStack_784 | (uVar20 & 0x80) >> 7;
                                  lVar27 = lStack_768 + lStack_770 * 0x618 + 0x402;
                                  do {
                                    uVar13 = FUN_1005d1ac4(*(undefined8 *)(param_1 + 100),lVar27);
                                    if (((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                               &uStack_704), (int)uVar13 != 0))
                                    goto LAB_10058f7a0;
                                    *(undefined2 *)(lVar27 + 1) = uStack_704;
                                    puStack_778 = (undefined4 *)((long)puStack_778 + 1);
                                    lVar27 = lVar27 + 3;
                                  } while ((long)puStack_778 < 0x19);
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                                  if ((int)uVar13 != 0) break;
                                  if (*(byte *)(lStack_768 + lStack_770 * 0x618 + 0x401) < 2) {
                                    *pbVar4 = 0;
                                  }
                                  lVar27 = lStack_768 + lStack_770 * 0x618;
                                  *(undefined1 *)(lVar27 + 0x457) = 0;
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_701)
                                  ;
                                  if ((int)uVar13 != 0) break;
                                  pbVar4 = (byte *)(lVar27 + 0x457);
                                  if ((bStack_701 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 1;
                                  }
                                  if ((bStack_701 >> 1 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 4;
                                  }
                                  if ((bStack_701 >> 2 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 2;
                                  }
                                  if ((bStack_701 >> 3 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 8;
                                  }
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if (((((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lStack_768 + lStack_770 * 0x618 +
                                                               0x4ab), (int)uVar13 != 0)) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x4ac), (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x4ad), (int)uVar13 != 0 ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x4ae), (int)uVar13 != 0)))) break;
                                  puStack_778 = (undefined4 *)0x0;
                                  lVar27 = lStack_768 + lStack_770 * 0x618 + 0x45a;
                                  do {
                                    uVar13 = FUN_1005d1ac4(*(undefined8 *)(param_1 + 100),lVar27);
                                    if (((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                               &uStack_706), (int)uVar13 != 0))
                                    goto LAB_10058f7a0;
                                    *(undefined2 *)(lVar27 + 1) = uStack_706;
                                    puStack_778 = (undefined4 *)((long)puStack_778 + 1);
                                    lVar27 = lVar27 + 3;
                                  } while ((long)puStack_778 < 0x19);
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                                  if ((int)uVar13 != 0) break;
                                  if (*(byte *)(lStack_768 + lStack_770 * 0x618 + 0x458) < 2) {
                                    *pbVar4 = 0;
                                  }
                                  lVar27 = lStack_768 + lStack_770 * 0x618;
                                  *(undefined1 *)(lVar27 + 0x4af) = 0;
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&bStack_701)
                                  ;
                                  if ((int)uVar13 != 0) break;
                                  pbVar4 = (byte *)(lVar27 + 0x4af);
                                  if ((bStack_701 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 1;
                                  }
                                  if ((bStack_701 >> 1 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 4;
                                  }
                                  if ((bStack_701 >> 2 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 2;
                                  }
                                  if ((bStack_701 >> 3 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 8;
                                  }
                                  if ((char)bStack_701 < '\0') {
                                    *pbVar4 = *pbVar4 | 0x10;
                                  }
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if (((((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               lStack_768 + lStack_770 * 0x618 +
                                                               0x503), (int)uVar13 != 0)) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x504), (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x505), (int)uVar13 != 0 ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              lStack_768 + lStack_770 * 0x618 +
                                                              0x506), (int)uVar13 != 0)))) break;
                                  puStack_778 = (undefined4 *)0x0;
                                  lVar27 = lStack_768 + lStack_770 * 0x618 + 0x4b2;
                                  do {
                                    uVar13 = FUN_1005d1ac4(*(undefined8 *)(param_1 + 100),lVar27);
                                    if (((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                               &uStack_708), (int)uVar13 != 0))
                                    goto LAB_10058f7a0;
                                    *(undefined2 *)(lVar27 + 1) = uStack_708;
                                    puStack_778 = (undefined4 *)((long)puStack_778 + 1);
                                    lVar27 = lVar27 + 3;
                                  } while ((long)puStack_778 < 0x19);
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                                  if ((int)uVar13 != 0) break;
                                  if (*(byte *)(lStack_768 + lStack_770 * 0x618 + 0x4b0) < 2) {
                                    *pbVar4 = 0;
                                  }
                                  lStack_770 = lStack_770 + 1;
                                  if (*piVar1 <= lStack_770) goto LAB_10058e4f0;
                                  lStack_768 = *(long *)(param_1 + 0x286);
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         (&DAT_101e96440)[lStack_770],0);
                                  if ((int)uVar13 != 0) break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar13 = 0x13;
      }
    }
  }
  goto LAB_10058f7a0;
LAB_10058f2f0:
  do {
    lStack_750 = 0;
    plVar18 = *(long **)(param_1 + lVar27 * 2 + 0x1158);
    if (plVar18 != (long *)0x0) {
      uVar13 = (**(code **)(*plVar18 + 0x118))(plVar18,0xffffffff,&lStack_750);
      if ((int)uVar13 != 0) goto LAB_10058f7a0;
      if (lStack_750 != 0) {
        if ((*(byte *)(*(long *)(param_1 + lVar27 * 2 + 0x1158) + 0x268) & 1) == 0) {
          uVar20 = *(uint *)(*(long *)(param_1 + lVar27 * 2 + 0x1158) + 0x26c) & 0x7f;
          if (uVar20 != 0 && (uint)lVar27 != uVar20) {
            uVar13 = (**(code **)(**(long **)(param_1 + (ulong)uVar20 * 2 + 0x1158) + 0x118))
                               (*(long **)(param_1 + (ulong)uVar20 * 2 + 0x1158),0,&lStack_760);
            iVar9 = (int)uVar13;
            lVar21 = lStack_750;
            lVar22 = lStack_760;
            goto joined_r0x00010058f3b4;
          }
          lVar22 = *plVar12;
          lVar21 = lStack_750;
        }
        else {
          uVar13 = FUN_1005c91e4(*puVar17,0,&lStack_758,0,0,1);
          if (((int)uVar13 != 0) ||
             (uVar13 = FUN_1005ceac4(*puVar17,lStack_758,0), (int)uVar13 != 0)) goto LAB_10058f7a0;
          uVar13 = FUN_1005ce188(*puVar17,lStack_750,0,0,1,0);
          iVar9 = (int)uVar13;
          lVar21 = lStack_758;
          lVar22 = lStack_750;
joined_r0x00010058f3b4:
          if (iVar9 != 0) goto LAB_10058f7a0;
        }
        uVar13 = FUN_1005ce188(lVar22,lVar21,0,0,1,0);
        if (((int)uVar13 != 0) ||
           ((((*(byte *)(*(long *)(param_1 + lVar27 * 2 + 0x1158) + 0x268) >> 1 & 1) != 0 &&
             (uVar13 = FUN_1005c9900(lStack_750,1), (int)uVar13 != 0)) ||
            (uVar13 = FUN_1005c982c(lStack_750,1,0), (int)uVar13 != 0)))) goto LAB_10058f7a0;
      }
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 < 0x32);
  if ((param_3 == 0) || (iVar9 = *(int *)(param_3 + 0x60), iVar9 == 0)) {
    iVar9 = param_1[0x138];
  }
  param_1[0x1ba] = iVar9;
  lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar9 * 0x330,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                         ,0x1677,0);
  *(long *)(param_1 + 0x1bc) = lVar27;
  if (lVar27 == 0) {
    uVar13 = 0x26;
  }
  else {
    iVar9 = param_1[0x1ba];
    if (0 < iVar9) {
      *(long *)lVar27 = lVar27;
      *(long *)(lVar27 + 8) = lVar27;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      FUN_100583c48(lVar27 + 0x20);
      iVar9 = param_1[0x1ba];
      lVar27 = 1;
      lVar21 = 0x330;
      if (1 < iVar9) {
        do {
          lVar22 = *(long *)(param_1 + 0x1bc) + lVar21;
          *(long *)lVar22 = lVar22;
          *(long *)(lVar22 + 8) = lVar22;
          *(undefined8 *)(lVar22 + 0x10) = 0;
          FUN_100583c48(lVar22 + 0x20);
          lVar27 = lVar27 + 1;
          iVar9 = param_1[0x1ba];
          lVar21 = lVar21 + 0x330;
        } while (lVar27 < iVar9);
      }
    }
    piVar1 = param_1 + 0x1157;
    *piVar1 = iVar9 << 1;
    FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x1688,0);
    lVar27 = FUN_100585974();
    *(long *)(param_1 + 0x1be) = lVar27;
    if (lVar27 == 0) {
      uVar13 = 0x26;
    }
    else {
      uVar13 = FUN_100585980(lVar27,*(undefined8 *)(param_1 + 0x12),0,*piVar1);
      if ((int)uVar13 == 0) {
        lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*piVar1 * 0x2b8,
                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                               ,0x16a4,0);
        *(long *)(param_1 + 0x1c0) = lVar27;
        if (lVar27 == 0) {
          uVar13 = 0x26;
        }
        else {
          iVar9 = *piVar1;
          if (iVar9 < 1) {
LAB_10058f634:
            if (uStack_784 != 0) {
              lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar9 << 3,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                     ,0x16b6,0);
              *(long *)(param_1 + 0x1c2) = lVar27;
              if (lVar27 == 0) {
                uVar13 = 0x26;
                goto LAB_10058f7a0;
              }
              if (0 < *piVar1) {
                lVar22 = 0;
                lVar21 = 0;
                do {
                  uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),4,lVar27 + lVar22);
                  if ((int)uVar13 != 0) goto LAB_10058f7a0;
                  lVar27 = *(long *)(param_1 + 0x1c2);
                  lVar23 = *(long *)(lVar27 + lVar21 * 8);
                  *(ushort *)(lVar23 + 0x3c) = *(ushort *)(lVar23 + 0x3c) | 0x400;
                  lVar21 = lVar21 + 1;
                  lVar22 = lVar22 + 8;
                } while (lVar21 < *piVar1);
              }
            }
            if ((param_2 & 0x4100) == 0) {
              *(undefined8 *)(param_1 + 0xaa) = 0;
              *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0xffffffff;
            }
            else {
              lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x281] << 8,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                     ,0x16cb,0);
              *(long *)(param_1 + 0xaa) = lVar27;
              if (lVar27 == 0) {
                uVar13 = 0x26;
                goto LAB_10058f7a0;
              }
              FUN_100588e60(param_1);
            }
            *param_1 = 0;
            FUN_1005d8fe8(param_1,1);
            lVar27 = (long)(int)param_1[0x345];
            do {
              bVar8 = *(byte *)((long)param_1 + lVar27 + 0x2b0);
              if ((int)(uint)bVar8 < (int)param_1[0x283]) {
                *(undefined8 *)(param_1 + 0x1150) =
                     *(undefined8 *)(*(long *)(param_1 + 0xa6) + (ulong)bVar8 * 0x10 + 8);
                FUN_10058a92c(param_1);
                uVar13 = 0;
                goto LAB_10058f7a0;
              }
              iVar9 = (int)lVar27 + 1;
              param_1[0x345] = iVar9;
            } while ((iVar9 < 0xff) && (lVar27 = lVar27 + 1, iVar9 < (int)param_1[0x281]));
            uVar13 = 0;
            *(undefined2 *)(param_1 + 0x340) = 0x100;
          }
          else {
            FUN_10057bd44(lVar27);
            uVar13 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,lVar27);
            lVar27 = 1;
            lVar21 = 0x2b8;
            iVar9 = (int)uVar13;
            while (iVar9 == 0) {
              iVar9 = *piVar1;
              if (iVar9 <= lVar27) goto LAB_10058f634;
              lVar22 = *(long *)(param_1 + 0x1c0);
              FUN_10057bd44(lVar22 + lVar21);
              uVar13 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),lVar27,lVar22 + lVar21);
              lVar27 = lVar27 + 1;
              lVar21 = lVar21 + 0x2b8;
              iVar9 = (int)uVar13;
            }
          }
        }
      }
    }
  }
LAB_10058f7a0:
  if (lVar31 != lStack_98) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar13);
  }
  return;
}




undefined8 thunk_FUN_10058f7dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_48;
  
  FUN_1005d9258();
  if (*(long *)(param_1 + 0x6f8) != 0) {
    FUN_100585a04();
    *(undefined8 *)(param_1 + 0x6f8) = 0;
  }
  if (*(long *)(param_1 + 0x47f0) != 0) {
    FUN_1005cdc44(*(long *)(param_1 + 0x47f0),1,0);
    *(undefined8 *)(param_1 + 0x47f0) = 0;
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    FUN_1005cdc44(*(long *)(param_1 + 0x2a0),1,0);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x708);
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x455c);
    if (0 < iVar3) {
      lVar5 = 0;
      while( true ) {
        lVar2 = *(long *)(lVar2 + lVar5 * 8);
        if (lVar2 != 0) {
          FUN_1005cdc44(lVar2,1,0);
          iVar3 = *(int *)(param_1 + 0x455c);
        }
        lVar5 = lVar5 + 1;
        if (iVar3 <= lVar5) break;
        lVar2 = *(long *)(param_1 + 0x708);
      }
      lVar2 = *(long *)(param_1 + 0x708);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x171c);
    *(undefined8 *)(param_1 + 0x708) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xd38);
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa14);
    if (0 < iVar3) {
      lVar5 = 0;
      while( true ) {
        plVar4 = *(long **)(lVar2 + lVar5 * 8);
        if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,1);
          lVar2 = *(long *)(param_1 + 0xd38);
          **(undefined8 **)(lVar2 + lVar5 * 8) = 0;
          *(undefined8 *)(lVar2 + lVar5 * 8) = 0;
          iVar3 = *(int *)(param_1 + 0xa14);
        }
        lVar5 = lVar5 + 1;
        if (iVar3 <= lVar5) break;
        lVar2 = *(long *)(param_1 + 0xd38);
      }
      lVar2 = *(long *)(param_1 + 0xd38);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x172c);
    *(undefined8 *)(param_1 + 0xd38) = 0;
  }
  if (*(long *)(param_1 + 0xa18) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xa18),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x1732);
    *(undefined8 *)(param_1 + 0xa18) = 0;
  }
  if (*(long *)(param_1 + 0x6f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x6f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x1738);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  if (*(long *)(param_1 + 0x700) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x700),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x173e);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x298);
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa0c);
    lVar5 = 8;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        if (*(long *)(lVar2 + lVar5) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar2 + lVar5),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                        ,0x1748);
          lVar2 = *(long *)(param_1 + 0x298);
          *(undefined8 *)(lVar2 + lVar5) = 0;
          iVar3 = *(int *)(param_1 + 0xa0c);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < iVar3);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x174d);
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  lVar2 = 0;
  do {
    plVar4 = *(long **)(param_1 + 0x4560 + lVar2 * 8);
    if (plVar4 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar4 + 0x118))(plVar4,0,&uStack_48);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1005cdc44(uStack_48,1,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                    *(undefined8 *)(param_1 + 0x4560 + lVar2 * 8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                    ,0x175e);
    }
    lVar2 = lVar2 + 1;
    if (0x31 < lVar2) {
      iVar3 = *(int *)(param_1 + 0x4e0);
      if (0 < iVar3) {
        lVar2 = 0;
        do {
          lVar5 = *(long *)(param_1 + 0x4e8 + lVar2 * 8);
          if (lVar5 != 0) {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar5,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                          ,0x1766);
            *(undefined8 *)(param_1 + 0x4e8 + lVar2 * 8) = 0;
            iVar3 = *(int *)(param_1 + 0x4e0);
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < iVar3);
      }
      if (*(long *)(param_1 + 0x2a8) != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2a8),
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                      ,0x176d);
        *(undefined8 *)(param_1 + 0x2a8) = 0;
      }
      return 0;
    }
  } while( true );
}




int thunk_FUN_10058fb54(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iStack_10e4;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  long lStack_10b8;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined4 uStack_10a8;
  undefined1 *puStack_10a0;
  undefined1 *puStack_1098;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1078 [4096];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0xd00) == '\0') {
    iVar8 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar8 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x968);
    iVar8 = 0;
    if (param_3 != 0) {
      uVar12 = 0;
      iStack_10e4 = (int)&uStack_1088;
      lVar13 = param_2;
      iVar8 = 0;
      do {
        if (uVar11 == 0) {
          FUN_100588fa4(param_1,1);
          iVar8 = 0;
          uVar11 = *(uint *)(param_1 + 0x96c);
        }
        uVar10 = param_3 - uVar12;
        if (uVar11 + uVar12 <= param_3) {
          uVar10 = uVar11;
        }
        lVar14 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar14 + 0x710);
        if (uVar10 <= *(uint *)(lVar14 + 0x710)) {
          uVar1 = uVar10;
        }
        if (param_2 != 0) {
          uStack_10ac = 0;
          uStack_1088 = 0;
          uStack_1080 = 0;
          uStack_10b0 = 0x200;
          uStack_10a8 = 0;
          puStack_10a0 = auStack_1078;
          lStack_10b8 = lVar14;
          puStack_1098 = puStack_10a0;
          if (lVar14 == 0) {
            lVar15 = 0;
            bVar6 = false;
            bVar4 = false;
            bVar5 = true;
          }
          else {
            bVar5 = true;
            FUN_10057097c(lVar14,1);
            lVar15 = *(long *)(param_1 + 0x48);
            if (lVar15 == 0) {
              lVar15 = 0;
              bVar4 = false;
              bVar6 = true;
            }
            else {
              FUN_10057097c(lVar15,3);
              bVar5 = false;
              bVar6 = true;
              bVar4 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x47f0) + 0x3f) == '\0') {
LAB_10058fce0:
            uStack_10c0 = 0;
            uStack_10d0 = 0;
            uStack_10c8 = 0;
            uStack_10d8 = 0;
            uStack_10bc = 0xffffffff;
            iVar8 = FUN_1005c9be4(&lStack_10b8,uVar1,1000,2,&uStack_10d8);
            if (iVar8 == 0) {
              uVar9 = FUN_1005c8da0(&uStack_10d8);
              bVar3 = true;
              iVar8 = FUN_10063a2fc(0x3f800000,lVar13,uVar9,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar7 = iVar8;
              if (iVar8 == 0) {
                FUN_1005c8d10(&uStack_10d8);
                bVar3 = false;
                iVar8 = 0;
                iVar7 = iStack_10e4;
              }
            }
            else {
              bVar3 = true;
              iVar7 = iVar8;
            }
            iStack_10e4 = iVar7;
            FUN_1005c8e48(&uStack_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar8 = FUN_1005cb3bc(&lStack_10b8,*(long *)(param_1 + 0x47f0),uVar1);
            if (iVar8 == 0) goto LAB_10058fce0;
            bVar3 = true;
            iStack_10e4 = iVar8;
          }
          if (!bVar5 && bVar4) {
            FUN_100570990(lVar15,3);
          }
          if ((lVar14 != 0) && (bVar6)) {
            FUN_100570990(lVar14,1);
          }
          if (bVar3) goto LAB_10058fe3c;
        }
        uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar10 = uVar1;
        if (uVar2 < 5) {
          uVar10 = *(int *)(&DAT_10115e390 + (long)(int)uVar2 * 4) * uVar1 >> 3;
        }
        uVar12 = uVar1 + uVar12;
        lVar13 = lVar13 + (ulong)(uVar10 * *(int *)(*(long *)(param_1 + 8) + 0x104));
        uVar11 = uVar11 - uVar1;
      } while (uVar12 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar11;
  }
  iStack_10e4 = iVar8;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_10058fe3c:
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_78) {
    return iStack_10e4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 thunk_FUN_10058fe80(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lStack_38;
  
  if (param_4 == 2) {
    if (*(uint *)(param_1 + 0x970) == param_3) {
      uVar5 = 0;
    }
    else {
      if (param_3 < *(uint *)(param_1 + 0x970)) {
        FUN_1005d8fe8(param_1,0);
        lVar7 = (long)*(int *)(param_1 + 0xd14);
        do {
          bVar2 = *(byte *)(param_1 + lVar7 + 0x2b0);
          if ((int)(uint)bVar2 < *(int *)(param_1 + 0xa0c)) {
            *(undefined8 *)(param_1 + 0x4540) =
                 *(undefined8 *)(*(long *)(param_1 + 0x298) + (ulong)bVar2 * 0x10 + 8);
            FUN_10058a92c(param_1);
            bVar4 = true;
            goto LAB_100590014;
          }
          iVar1 = (int)lVar7 + 1;
          *(int *)(param_1 + 0xd14) = iVar1;
        } while ((iVar1 < 0xff) && (lVar7 = lVar7 + 1, iVar1 < *(int *)(param_1 + 0xa04)));
        *(undefined2 *)(param_1 + 0xd00) = 0x100;
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
LAB_100590014:
      while (*(uint *)(param_1 + 0x970) < param_3) {
        FUN_100588fa4(param_1,1);
      }
      if (bVar4) {
        uVar3 = *(undefined2 *)(param_1 + 0xd00);
        FUN_1005d9258(param_1);
        uVar5 = 0;
        *(undefined2 *)(param_1 + 0xd00) = uVar3;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_4 == 0x100) {
    FUN_1005d8fe8(param_1,0);
    lVar7 = (long)*(int *)(param_1 + 0xd14);
    do {
      bVar2 = *(byte *)(param_1 + lVar7 + 0x2b0);
      if ((int)(uint)bVar2 < *(int *)(param_1 + 0xa0c)) {
        *(undefined8 *)(param_1 + 0x4540) =
             *(undefined8 *)(*(long *)(param_1 + 0x298) + (ulong)bVar2 * 0x10 + 8);
        FUN_10058a92c(param_1);
        goto LAB_10058ff88;
      }
      iVar1 = (int)lVar7 + 1;
      *(int *)(param_1 + 0xd14) = iVar1;
    } while ((iVar1 < 0xff) && (lVar7 = lVar7 + 1, iVar1 < *(int *)(param_1 + 0xa04)));
    *(undefined2 *)(param_1 + 0xd00) = 0x100;
LAB_10058ff88:
    lVar7 = 0;
    *(uint *)(param_1 + 0xd14) = param_3;
    *(uint *)(param_1 + 0xd24) = param_3;
    do {
      lStack_38 = 0;
      plVar6 = *(long **)(param_1 + 0x4560 + lVar7 * 8);
      if (plVar6 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 0x118))(plVar6,0,&lStack_38);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (lStack_38 != 0) {
          FUN_1005cede0();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0x32);
    uVar5 = 0;
  }
  else {
    uVar5 = 0x13;
  }
  return uVar5;
}




undefined8 FUN_100588e60(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0;
  FUN_1005d8fe8(param_1,0);
  lVar3 = (long)*(int *)(param_1 + 0xd14);
  do {
    bVar2 = *(byte *)(param_1 + lVar3 + 0x2b0);
    if ((int)(uint)bVar2 < *(int *)(param_1 + 0xa0c)) {
      *(undefined8 *)(param_1 + 0x4540) =
           *(undefined8 *)(*(long *)(param_1 + 0x298) + (ulong)bVar2 * 0x10 + 8);
      FUN_10058a92c(param_1);
      while (*(char *)(param_1 + 0xd01) == '\0') {
        FUN_100588fa4(param_1,0);
        *(int *)(*(long *)(param_1 + 8) + 0x110) =
             *(int *)(*(long *)(param_1 + 8) + 0x110) + *(int *)(param_1 + 0x96c);
      }
      goto LAB_100588f08;
    }
    iVar1 = (int)lVar3 + 1;
    *(int *)(param_1 + 0xd14) = iVar1;
  } while ((iVar1 < 0xff) && (lVar3 = lVar3 + 1, iVar1 < *(int *)(param_1 + 0xa04)));
  *(undefined2 *)(param_1 + 0xd00) = 0x100;
LAB_100588f08:
  FUN_1005d9258(param_1);
  return 0;
}




undefined8 FUN_100588f20(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  
  FUN_1005d8fe8();
  lVar3 = (long)*(int *)(param_1 + 0xd14);
  do {
    bVar2 = *(byte *)(param_1 + lVar3 + 0x2b0);
    if ((int)(uint)bVar2 < *(int *)(param_1 + 0xa0c)) {
      *(undefined8 *)(param_1 + 0x4540) =
           *(undefined8 *)(*(long *)(param_1 + 0x298) + (ulong)bVar2 * 0x10 + 8);
      FUN_10058a92c(param_1);
      return 0;
    }
    iVar1 = (int)lVar3 + 1;
    *(int *)(param_1 + 0xd14) = iVar1;
  } while ((iVar1 < 0xff) && (lVar3 = lVar3 + 1, iVar1 < *(int *)(param_1 + 0xa04)));
  *(undefined2 *)(param_1 + 0xd00) = 0x100;
  return 0x13;
}




undefined8 FUN_100588fa4(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  bVar2 = false;
  lVar4 = *(long *)(param_1 + 0x48);
  if ((lVar4 != 0) && ((((uint)param_2 ^ 1) & 1) == 0)) {
    bVar2 = true;
    FUN_10057097c(lVar4,1);
  }
  if (*(int *)(param_1 + 0xd04) == 0) {
    iVar3 = *(int *)(param_1 + 0xd24);
    if (-1 < iVar3) {
      do {
        *(int *)(param_1 + 0xd14) = iVar3;
        do {
          cVar1 = *(char *)(param_1 + iVar3 + 0x2b0);
          if (cVar1 == -1) {
            *(int *)(param_1 + 0xd14) = *(int *)(param_1 + 0xce8);
            *(undefined8 *)(param_1 + 0x4540) =
                 *(undefined8 *)
                  (*(long *)(param_1 + 0x298) +
                   (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xce8) + 0x2b0) * 0x10 + 8);
            goto LAB_100589070;
          }
          if (cVar1 != -2) goto LAB_100589070;
          iVar3 = iVar3 + 1;
          *(int *)(param_1 + 0xd14) = iVar3;
        } while (iVar3 < *(int *)(param_1 + 0xa04));
        if (*(char *)(param_1 + 0xd02) == '\0') {
          FUN_1005d9258(param_1);
        }
        iVar3 = *(int *)(param_1 + 0xce8);
      } while( true );
    }
LAB_100589070:
    iVar3 = *(int *)(param_1 + 0xd20);
    if ((((-1 < iVar3) && (iVar3 != *(int *)(param_1 + 0xd10) + 1)) ||
        (-1 < *(int *)(param_1 + 0xd24))) &&
       (*(undefined8 *)(param_1 + 0x4540) =
             *(undefined8 *)
              (*(long *)(param_1 + 0x298) +
               (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10 + 8), 0 < iVar3)
       ) {
      iVar5 = 0;
      do {
        FUN_10058a92c(param_1);
        iVar5 = iVar5 + 1;
        iVar3 = *(int *)(param_1 + 0xd20);
      } while (iVar5 < iVar3);
    }
    if (-1 < iVar3) {
      *(int *)(param_1 + 0xd10) = iVar3;
      FUN_10058a92c(param_1);
    }
    *(undefined8 *)(param_1 + 0xd20) = 0xffffffffffffffff;
    FUN_10058aae4(param_1,param_2);
    if (*(int *)(param_1 + 0xd20) == -1) {
      iVar3 = *(int *)(param_1 + 0xd10) + 1;
      *(int *)(param_1 + 0xd20) = iVar3;
      if (*(int *)(*(long *)(param_1 + 0x298) +
                  (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10) <= iVar3) {
        iVar3 = *(int *)(param_1 + 0xd14) + 1;
        *(int *)(param_1 + 0xd24) = iVar3;
        if (*(int *)(param_1 + 0xa04) <= iVar3) {
          *(undefined4 *)(param_1 + 0xd24) = *(undefined4 *)(param_1 + 0xce8);
        }
        *(undefined4 *)(param_1 + 0xd20) = 0;
      }
    }
  }
  else {
    FUN_10058aae4(param_1,param_2);
  }
  iVar3 = *(int *)(param_1 + 0xd04) + 1;
  *(int *)(param_1 + 0xd04) = iVar3;
  if (*(int *)(param_1 + 0xd18) + *(int *)(param_1 + 0xd08) + *(int *)(param_1 + 0xd1c) <= iVar3) {
    *(undefined4 *)(param_1 + 0xd18) = 0;
    *(undefined4 *)(param_1 + 0xd1c) = 0;
    *(undefined4 *)(param_1 + 0xd04) = 0;
  }
  *(int *)(param_1 + 0x970) = *(int *)(param_1 + 0x970) + *(int *)(param_1 + 0x96c);
  if ((lVar4 != 0) && (bVar2)) {
    FUN_100570990(lVar4,1);
  }
  return 0;
}




undefined8 FUN_1005891bc(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  
  bVar2 = *(byte *)(param_1 + 0x4558);
  bVar3 = bVar2 - (char)param_2;
  if (bVar2 < param_2) {
    param_2 = param_2 - bVar2;
    puVar5 = *(uint **)(param_1 + 0x4550);
    *(uint **)(param_1 + 0x4550) = puVar5 + 1;
    uVar4 = (puVar5[1] & (1 << (ulong)(param_2 & 0x1f)) - 1U) << (ulong)(bVar2 & 0x1f) | *puVar5;
    puVar5[1] = puVar5[1] >> (ulong)(param_2 & 0x1f);
    bVar3 = 0x20 - (char)param_2;
  }
  else {
    uVar1 = **(uint **)(param_1 + 0x4550);
    uVar4 = uVar1 & (1 << (ulong)(param_2 & 0x1f)) - 1U;
    **(uint **)(param_1 + 0x4550) = uVar1 >> (ulong)(param_2 & 0x1f);
  }
  *(byte *)(param_1 + 0x4558) = bVar3;
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar4;
  }
  return 0;
}




undefined8 FUN_100589244(long param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  undefined8 uVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)*param_2;
  uVar2 = *puVar5;
  uVar1 = *puVar5;
  *param_2 = (long)(puVar5 + 1);
  pvVar3 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),(ulong)uVar2 << 1,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                 ,0xc4,0,0);
  *(void **)(param_1 + 0x4548) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0x26;
  }
  else {
    _memcpy(pvVar3,(void *)*param_2,(ulong)(uint)(int)(short)uVar1 & 0xffff);
    uVar4 = 0;
    *param_2 = *param_2 + (ulong)uVar2;
    *(undefined8 *)(param_1 + 0x4550) = *(undefined8 *)(param_1 + 0x4548);
    *(undefined1 *)(param_1 + 0x4558) = 0x20;
  }
  return uVar4;
}




undefined8 FUN_1005892f4(long param_1)

{
  if (*(long *)(param_1 + 0x4548) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x4548),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0xe3);
    *(undefined8 *)(param_1 + 0x4548) = 0;
  }
  return 0;
}




undefined8
FUN_100589340(long param_1,long *param_2,undefined1 *param_3,uint param_4,int param_5,int param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint local_64;
  
  uVar8 = 0x1f;
  if ((param_2 != (long *)0x0) && (param_3 != (undefined1 *)0x0)) {
    puVar11 = (ushort *)*param_2;
    if (puVar11 == (ushort *)0x0) {
      uVar8 = 0x1f;
    }
    else if (param_4 == 0) {
      uVar8 = 0;
    }
    else {
      pbVar1 = (byte *)(param_1 + 0x4558);
      local_64 = param_4;
      while( true ) {
        uVar7 = *puVar11;
        uVar6 = *puVar11;
        *param_2 = (long)(puVar11 + 1);
        pvVar9 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),(ulong)uVar7 << 1,
                                       "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                       ,0xc4,0,0);
        *(void **)(param_1 + 0x4548) = pvVar9;
        if (pvVar9 == (void *)0x0) break;
        _memcpy(pvVar9,(void *)*param_2,(ulong)(uint)(int)(short)uVar6 & 0xffff);
        *param_2 = *param_2 + (ulong)uVar7;
        *(undefined8 *)(param_1 + 0x4550) = *(undefined8 *)(param_1 + 0x4548);
        *pbVar1 = 0x20;
        uVar2 = local_64 & 0xffff;
        if (0x7fff < (int)local_64) {
          uVar2 = 0x8000;
        }
        if (uVar2 != 0) {
          uVar10 = 0;
          uVar12 = 0;
          uVar13 = 0;
          uVar15 = 9;
          uVar16 = 0x20;
LAB_100589488:
          while( true ) {
            uVar3 = uVar15 & 0xff;
            uVar14 = (uVar16 & 0xff) - uVar3;
            if ((uVar16 & 0xff) < uVar3) {
              uVar14 = uVar3 - (uVar16 & 0xff);
              puVar20 = *(uint **)(param_1 + 0x4550);
              puVar18 = puVar20 + 1;
              *(uint **)(param_1 + 0x4550) = puVar18;
              uVar17 = (puVar20[1] & (1 << (ulong)(uVar14 & 0x1f)) - 1U) << (ulong)(uVar16 & 0x1f) |
                       *puVar20;
              uVar19 = puVar20[1] >> (ulong)(uVar14 & 0x1f);
              puVar20[1] = uVar19;
              uVar14 = 0x20 - uVar14;
            }
            else {
              puVar18 = *(uint **)(param_1 + 0x4550);
              uVar17 = *puVar18 & (1 << (ulong)(uVar15 & 0x1f)) - 1U;
              uVar19 = *puVar18 >> (ulong)(uVar15 & 0x1f);
              *puVar18 = uVar19;
            }
            bVar5 = (byte)uVar14;
            if (6 < (uVar15 & 0xff)) break;
            if (uVar17 != 1 << (ulong)(uVar3 - 1 & 0x1f)) {
              *pbVar1 = bVar5;
LAB_1005895b4:
              uVar16 = (uint)(char)('\b' - (char)uVar15);
              uVar17 = (int)(char)(uVar17 << (ulong)(uVar16 & 0x1f)) >> (uVar16 & 0x1f);
              goto LAB_1005895ec;
            }
            uVar15 = uVar14 & 0xff;
            uVar16 = uVar15 - 3;
            if (uVar15 < 3) {
              uVar15 = 3 - uVar15;
              *(uint **)(param_1 + 0x4550) = puVar18 + 1;
              uVar14 = (puVar18[1] & (1 << (ulong)(uVar15 & 0x1f)) - 1U) << (ulong)(uVar14 & 0x1f) |
                       uVar19;
              puVar18[1] = puVar18[1] >> (ulong)(uVar15 & 0x1f);
              uVar16 = 0x20 - uVar15;
            }
            else {
              uVar14 = uVar19 & 7;
              *puVar18 = uVar19 >> 3;
            }
            uVar15 = uVar14 + 2;
            if (uVar14 + 1 < uVar3) {
              uVar15 = uVar14 + 1;
            }
          }
          uVar16 = uVar14;
          if ((uVar15 & 0xff) < 9) {
            uVar14 = (0xffU >> (ulong)(9 - uVar3 & 0x1f)) + 0xfc & 0xff;
            uVar19 = uVar17 - uVar14;
            if ((uVar14 <= uVar17 && uVar19 != 0) && uVar17 <= uVar14 + 8) {
              uVar15 = uVar19;
              if (uVar3 <= uVar19) {
                uVar15 = uVar19 + 1;
              }
              goto LAB_100589488;
            }
            *pbVar1 = bVar5;
            if ((uVar15 & 0xff) < 8) goto LAB_1005895b4;
            uVar15 = 8;
          }
          else {
            if ((uVar15 & 0xff) != 9) {
              *pbVar1 = bVar5;
              if (*(long *)(param_1 + 0x4548) != 0) {
                FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x4548),
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                              ,0xe3);
                *(undefined8 *)(param_1 + 0x4548) = 0;
              }
              return 0x13;
            }
            if ((uVar17 >> 8 & 1) != 0) {
              uVar15 = uVar17 + 1;
              goto LAB_100589488;
            }
            *pbVar1 = bVar5;
            uVar15 = 9;
          }
LAB_1005895ec:
          uVar13 = uVar17 + (uVar13 & 0xff);
          uVar12 = uVar13 + (uVar12 & 0xff);
          uVar4 = (char)uVar12;
          if (param_5 == 0) {
            uVar4 = (char)uVar13;
          }
          param_3 = param_3 + param_6;
          *param_3 = uVar4;
          uVar10 = uVar10 + 1;
          if ((uVar10 & 0xffff) < uVar2) {
            uVar16 = (uint)*pbVar1;
            goto LAB_100589488;
          }
        }
        if (*(long *)(param_1 + 0x4548) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x4548),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                        ,0xe3);
          *(undefined8 *)(param_1 + 0x4548) = 0;
        }
        local_64 = local_64 - uVar2;
        if (local_64 == 0) {
          return 0;
        }
        puVar11 = (ushort *)*param_2;
      }
      uVar8 = 0x26;
    }
  }
  return uVar8;
}




undefined8
FUN_1005896c4(long param_1,long *param_2,undefined2 *param_3,uint param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar10;
  void *pvVar11;
  uint *puVar12;
  uint uVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_74;
  
  uVar10 = 0x1f;
  if ((param_2 != (long *)0x0) && (param_3 != (undefined2 *)0x0)) {
    puVar14 = (ushort *)*param_2;
    if (puVar14 == (ushort *)0x0) {
      uVar10 = 0x1f;
    }
    else if (param_4 == 0) {
      uVar10 = 0;
    }
    else {
      puVar1 = (undefined1 *)(param_1 + 0x4558);
      local_74 = param_4;
      while( true ) {
        uVar9 = *puVar14;
        uVar8 = *puVar14;
        *param_2 = (long)(puVar14 + 1);
        pvVar11 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),(ulong)uVar9 << 1,
                                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                        ,0xc4,0,0);
        *(void **)(param_1 + 0x4548) = pvVar11;
        if (pvVar11 == (void *)0x0) break;
        _memcpy(pvVar11,(void *)*param_2,(ulong)(uint)(int)(short)uVar8 & 0xffff);
        *param_2 = *param_2 + (ulong)uVar9;
        puVar12 = *(uint **)(param_1 + 0x4548);
        *(uint **)(param_1 + 0x4550) = puVar12;
        *puVar1 = 0x20;
        uVar2 = local_74 & 0xffff;
        if (0x3fff < (int)local_74) {
          uVar2 = 0x4000;
        }
        if (uVar2 != 0) {
          uVar13 = 0;
          uVar15 = 0;
          uVar16 = 0;
          puVar17 = puVar12;
          puVar18 = puVar12;
          uVar20 = 0x11;
          uVar21 = 0x20;
LAB_100589830:
          do {
            uVar3 = uVar20 & 0xff;
            uVar19 = (uVar21 & 0xff) - uVar3;
            if ((uVar21 & 0xff) < uVar3) {
              uVar19 = uVar3 - (uVar21 & 0xff);
              puVar17 = puVar18 + 1;
              *(uint **)(param_1 + 0x4550) = puVar17;
              uVar22 = (puVar18[1] & (1 << (ulong)(uVar19 & 0x1f)) - 1U) << (ulong)(uVar21 & 0x1f) |
                       *puVar18;
              puVar18[1] = puVar18[1] >> (ulong)(uVar19 & 0x1f);
              uVar19 = 0x20 - uVar19;
              puVar18 = puVar17;
            }
            else {
              uVar22 = *puVar18 & (1 << (ulong)(uVar20 & 0x1f)) - 1U;
              *puVar18 = *puVar18 >> (ulong)(uVar20 & 0x1f);
            }
            uVar6 = (undefined1)uVar19;
            uVar21 = uVar19;
            if ((uVar20 & 0xff) < 7) {
              if (uVar22 == (uint)(1L << ((ulong)(uVar3 - 1) & 0x3f))) {
                uVar20 = uVar19 & 0xff;
                uVar21 = uVar20 - 4;
                if (uVar20 < 4) {
                  uVar20 = 4 - uVar20;
                  puVar18 = puVar17 + 1;
                  *(uint **)(param_1 + 0x4550) = puVar18;
                  uVar19 = (puVar17[1] & (1 << (ulong)(uVar20 & 0x1f)) - 1U) <<
                           (ulong)(uVar19 & 0x1f) | *puVar17;
                  puVar17[1] = puVar17[1] >> (ulong)(uVar20 & 0x1f);
                  uVar21 = 0x20 - uVar20;
                  puVar17 = puVar18;
                }
                else {
                  uVar19 = *puVar18 & 0xf;
                  *puVar18 = *puVar18 >> 4;
                }
                uVar20 = uVar19 + 2;
                if (uVar19 + 1 < uVar3) {
                  uVar20 = uVar19 + 1;
                }
                goto LAB_100589830;
              }
              *puVar1 = uVar6;
LAB_100589974:
              uVar22 = (int)(short)(uVar22 << (ulong)(0x10 - uVar3 & 0x1f)) >> (0x10 - uVar3 & 0x1f)
              ;
            }
            else if ((uVar20 & 0xff) < 0x11) {
              uVar5 = 0xffff >> (ulong)(0x11 - uVar3 & 0x1f);
              uVar19 = uVar5 + 0xfff8 & 0xffff;
              uVar7 = uVar22 - uVar19;
              if ((uVar19 <= uVar22 && uVar7 != 0) && (uVar22 <= (uVar5 + 8 & 0xffff))) {
                uVar20 = uVar7;
                if (uVar3 <= uVar7) {
                  uVar20 = uVar7 + 1;
                }
                goto LAB_100589830;
              }
              *puVar1 = uVar6;
              if ((uVar20 & 0xff) < 0x10) goto LAB_100589974;
              uVar20 = 0x10;
            }
            else {
              if ((uVar20 & 0xff) != 0x11) {
                *puVar1 = uVar6;
                if (puVar12 != (uint *)0x0) {
                  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar12,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                ,0xe3);
                  *(undefined8 *)(param_1 + 0x4548) = 0;
                }
                return 0x13;
              }
              if ((uVar22 >> 0x10 & 1) != 0) {
                uVar20 = uVar22 + 1;
                goto LAB_100589830;
              }
              *puVar1 = uVar6;
              uVar20 = 0x11;
            }
            uVar16 = uVar22 + (uVar16 & 0xffff);
            uVar15 = uVar16 + (uVar15 & 0xffff);
            uVar4 = (short)uVar15;
            if (param_5 == 0) {
              uVar4 = (short)uVar16;
            }
            param_3 = param_3 + param_6;
            *param_3 = uVar4;
            uVar13 = uVar13 + 1;
          } while ((uVar13 & 0xffff) < uVar2);
        }
        if (puVar12 != (uint *)0x0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar12,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                        ,0xe3);
          *(undefined8 *)(param_1 + 0x4548) = 0;
        }
        local_74 = local_74 - uVar2;
        if (local_74 == 0) {
          return 0;
        }
        puVar14 = (ushort *)*param_2;
      }
      uVar10 = 0x26;
    }
  }
  return uVar10;
}




undefined8 FUN_100589a74(long param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x361);
  if ((bVar1 & 0xf) == 0) {
    *(uint *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + (uint)(bVar1 >> 4);
  }
  iVar2 = *(int *)(param_1 + 0x344);
  if ((bVar1 & 0xf0) == 0) {
    iVar2 = iVar2 - (bVar1 & 0xf);
    *(int *)(param_1 + 0x344) = iVar2;
  }
  if (iVar2 < 0x41) {
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x344) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x344) = 0x40;
  }
  *(byte *)(*(long *)(param_1 + 8) + 0x2a4) = *(byte *)(*(long *)(param_1 + 8) + 0x2a4) | 2;
  return 0;
}




undefined8 FUN_100589ad4(long param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x362);
  if ((bVar1 & 0xf) == 0) {
    *(uint *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) - (uint)(bVar1 >> 4);
  }
  iVar2 = *(int *)(param_1 + 0x348);
  if ((bVar1 & 0xf0) == 0) {
    iVar2 = iVar2 + (bVar1 & 0xf);
    *(int *)(param_1 + 0x348) = iVar2;
  }
  if (iVar2 < 0x41) {
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x348) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x348) = 0x40;
  }
  *(byte *)(*(long *)(param_1 + 8) + 0x2a4) = *(byte *)(*(long *)(param_1 + 8) + 0x2a4) | 4;
  return 0;
}




undefined8 FUN_100589b34(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)((long)param_1 + 0x36d) != '\0') {
    return 0;
  }
  lVar2 = param_1[1];
  iVar3 = *(int *)(lVar2 + 0x2a8);
  iVar4 = (int)param_1[0x6d];
  if (iVar3 < iVar4) {
    pbVar1 = (byte *)((long)param_1 + 0x35c);
    if ((*(ushort *)(*param_1 + 0xcfe) & 0x20) != 0) {
      pbVar1 = (byte *)((long)param_1 + 0x36c);
    }
    iVar3 = iVar3 + (uint)*pbVar1 * 4;
    *(int *)(lVar2 + 0x2a8) = iVar3;
    if (iVar3 < iVar4) goto LAB_100589bb4;
  }
  else {
    if (iVar3 <= iVar4) goto LAB_100589bb4;
    pbVar1 = (byte *)((long)param_1 + 0x35c);
    if ((*(ushort *)(*param_1 + 0xcfe) & 0x20) != 0) {
      pbVar1 = (byte *)((long)param_1 + 0x36c);
    }
    iVar3 = iVar3 + (uint)*pbVar1 * -4;
    *(int *)(lVar2 + 0x2a8) = iVar3;
    if (iVar4 <= iVar3) goto LAB_100589bb4;
  }
  *(int *)(lVar2 + 0x2a8) = iVar4;
  *(undefined1 *)((long)param_1 + 0x36d) = 1;
LAB_100589bb4:
  *(byte *)(lVar2 + 0x2a4) = *(byte *)(lVar2 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_100589bc8(long *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  bVar7 = *(byte *)((long)param_1 + 0x36e);
  if (*(byte *)((long)param_1 + 0x38f) < 4) {
    uVar9 = 0xff;
    switch(*(byte *)((long)param_1 + 0x38f)) {
    case 0:
      uVar9 = (uint)(byte)(&DAT_10186d410)[bVar7 & 0x1f];
      break;
    case 1:
      uVar9 = (bVar7 & 0x1f) << 3;
      if ((char)bVar7 < '\0') {
        uVar9 = ~uVar9;
      }
      uVar9 = uVar9 & 0xff;
      break;
    case 3:
      uVar9 = *(uint *)(lVar4 + 0xd28) ^ *(uint *)(lVar4 + 0xd28) << 0xb;
      *(undefined4 *)(lVar4 + 0xd28) = *(undefined4 *)(lVar4 + 0xd2c);
      *(undefined4 *)(lVar4 + 0xd2c) = *(undefined4 *)(lVar4 + 0xd30);
      uVar6 = *(uint *)(lVar4 + 0xd34);
      *(uint *)(lVar4 + 0xd30) = uVar6;
      uVar9 = uVar9 ^ uVar9 >> 8 ^ uVar6 ^ uVar6 >> 0x13;
      *(uint *)(lVar4 + 0xd34) = uVar9;
      uVar9 = uVar9 & 0xff;
    }
  }
  else {
    uVar9 = 0;
  }
  iVar8 = (*(byte *)(param_1 + 0x6e) * uVar9 >> 7) <<
          (ulong)((*(ushort *)(lVar4 + 0xcfe) >> 4 & 1) + 1);
  cVar1 = bVar7 + *(char *)((long)param_1 + 0x36f);
  cVar3 = cVar1 + -0x40;
  if (cVar1 < ' ') {
    cVar3 = cVar1;
  }
  *(char *)((long)param_1 + 0x36e) = cVar3;
  iVar2 = -iVar8;
  if (cVar3 < '\0') {
    iVar2 = iVar8;
  }
  *(int *)(lVar5 + 0x2b8) = *(int *)(lVar5 + 0x2b8) + iVar2;
  *(byte *)(lVar5 + 0x2a4) = *(byte *)(lVar5 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_100589cd0(long *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  bVar7 = *(byte *)((long)param_1 + 0x36e);
  if (*(byte *)((long)param_1 + 0x38f) < 4) {
    uVar9 = 0xff;
    switch(*(byte *)((long)param_1 + 0x38f)) {
    case 0:
      uVar9 = (uint)(byte)(&DAT_10186d410)[bVar7 & 0x1f];
      break;
    case 1:
      uVar9 = (bVar7 & 0x1f) << 3;
      if ((char)bVar7 < '\0') {
        uVar9 = ~uVar9;
      }
      uVar9 = uVar9 & 0xff;
      break;
    case 3:
      uVar9 = *(uint *)(lVar4 + 0xd28) ^ *(uint *)(lVar4 + 0xd28) << 0xb;
      *(undefined4 *)(lVar4 + 0xd28) = *(undefined4 *)(lVar4 + 0xd2c);
      *(undefined4 *)(lVar4 + 0xd2c) = *(undefined4 *)(lVar4 + 0xd30);
      uVar6 = *(uint *)(lVar4 + 0xd34);
      *(uint *)(lVar4 + 0xd30) = uVar6;
      uVar9 = uVar9 ^ uVar9 >> 8 ^ uVar6 ^ uVar6 >> 0x13;
      *(uint *)(lVar4 + 0xd34) = uVar9;
      uVar9 = uVar9 & 0xff;
    }
  }
  else {
    uVar9 = 0;
  }
  iVar8 = (*(byte *)(param_1 + 0x6e) * uVar9 >> 7) << (ulong)(*(ushort *)(lVar4 + 0xcfe) >> 4 & 1);
  iVar2 = -iVar8;
  if (-1 < (char)bVar7) {
    iVar2 = iVar8;
  }
  *(int *)(lVar5 + 0x2b8) = *(int *)(lVar5 + 0x2b8) + iVar2;
  cVar1 = bVar7 + *(char *)((long)param_1 + 0x36f);
  cVar3 = cVar1 + -0x40;
  if (cVar1 < ' ') {
    cVar3 = cVar1;
  }
  *(char *)((long)param_1 + 0x36e) = cVar3;
  *(byte *)(lVar5 + 0x2a4) = *(byte *)(lVar5 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_100589dd4(long param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar4 = *(byte *)(param_1 + 0x372);
  if (*(byte *)(param_1 + 0x390) < 4) {
    switch(*(byte *)(param_1 + 0x390)) {
    default:
      uVar5 = (uint)(byte)(&DAT_10186d410)[bVar4 & 0x1f];
      break;
    case 1:
      uVar5 = (bVar4 & 0x1f) << 3;
      if ((char)bVar4 < '\0') {
        uVar5 = ~uVar5;
      }
      uVar5 = uVar5 & 0xff;
      break;
    case 2:
      uVar5 = 0xff;
    }
    *(uint *)(param_1 + 0x34c) = uVar5;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x34c);
  }
  iVar7 = (int)(uVar5 * *(byte *)(param_1 + 0x374)) >> 6;
  piVar1 = (int *)(param_1 + 0x34c);
  *piVar1 = iVar7;
  iVar6 = *(int *)(param_1 + 0x344);
  if ((char)bVar4 < '\0') {
    if (((uint)(iVar6 - iVar7) >> 0xf & 1) != 0) {
      *piVar1 = iVar6;
      iVar7 = iVar6;
    }
    iVar6 = -iVar7;
  }
  else {
    if (iVar6 + iVar7 < 0x41) goto LAB_100589e90;
    iVar6 = 0x40 - iVar6;
  }
  *piVar1 = iVar6;
LAB_100589e90:
  cVar2 = bVar4 + *(char *)(param_1 + 0x373);
  cVar3 = cVar2 + -0x40;
  if (cVar2 < ' ') {
    cVar3 = cVar2;
  }
  *(char *)(param_1 + 0x372) = cVar3;
  *(byte *)(*(long *)(param_1 + 8) + 0x2a4) = *(byte *)(*(long *)(param_1 + 8) + 0x2a4) | 2;
  return 0;
}




undefined8 FUN_100589ed0(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  switch(*(undefined1 *)(param_1 + 0x391)) {
  case 0:
  case 3:
    iVar3 = *(int *)(param_1 + 0x378);
    iVar5 = (int)(char)(&DAT_10186d430)[iVar3];
    goto LAB_100589f34;
  case 1:
    iVar3 = *(int *)(param_1 + 0x378);
    iVar5 = 0x80 - iVar3 >> 1;
LAB_100589f34:
    *(int *)(lVar1 + 700) = iVar5;
    break;
  case 2:
    iVar3 = *(int *)(param_1 + 0x378);
    if (iVar3 < 0x80) {
      iVar5 = 0x40;
      *(undefined4 *)(lVar1 + 700) = 0x40;
    }
    else {
      iVar5 = -0x40;
      *(undefined4 *)(lVar1 + 700) = 0xffffffc0;
    }
    break;
  default:
    iVar5 = *(int *)(lVar1 + 700);
    iVar3 = *(int *)(param_1 + 0x378);
  }
  piVar2 = (int *)(lVar1 + 700);
  iVar5 = (int)(iVar5 * (uint)*(byte *)(param_1 + 0x37d)) >> 5;
  *piVar2 = iVar5;
  iVar4 = *(int *)(lVar1 + 0x2b0);
  if (iVar3 < 0) {
    if (((uint)(iVar4 - iVar5) >> 0xf & 1) != 0) {
      *piVar2 = iVar4;
      iVar5 = iVar4;
    }
    iVar4 = -iVar5;
  }
  else {
    if (iVar4 + iVar5 < 0x41) goto LAB_100589f84;
    iVar4 = 0x40 - iVar4;
  }
  *piVar2 = iVar4;
LAB_100589f84:
  iVar5 = *(int *)(param_1 + 0x378) + (uint)*(byte *)(param_1 + 0x37c);
  iVar3 = iVar5 + -0x100;
  if (iVar5 < 0x100) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x378) = iVar3;
  *(byte *)(lVar1 + 0x2a4) = *(byte *)(lVar1 + 0x2a4) | 4;
  return 0;
}




undefined8
FUN_100589ff0(undefined8 param_1,uint *param_2,long param_3,int param_4,long param_5,uint param_6,
             uint param_7,int param_8,undefined8 param_9,byte param_10)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar6 = *param_2;
  uVar9 = param_2[1];
  if ((int)uVar9 < param_4) {
    if (uVar6 == *(ushort *)(param_5 + (long)(int)uVar9 * 3 + 1)) {
      do {
        lVar8 = (long)(int)uVar9;
        lVar7 = (long)(int)uVar9;
        iVar1 = uVar9 + 1;
        lVar5 = param_5;
        while( true ) {
          if ((((param_6 & 2) != 0) && ((int)param_9._4_4_ <= (int)uVar9)) &&
             (*(char *)(param_3 + 0x324) == '\0')) {
            lVar7 = (long)(int)(uint)param_9;
            uVar6 = (uint)param_9;
            if (param_9._4_4_ != (uint)param_9) goto LAB_10058a05c;
            lVar7 = (long)(int)uVar9 + (long)(int)uVar9 * 2;
            goto LAB_10058a18c;
          }
          if (((param_6 & 4) != 0) && (param_8 <= (int)uVar9)) break;
          pcVar2 = (char *)(lVar8 + lVar7 * 2 + lVar5);
          uVar11 = (uint)*pcVar2;
          if (param_4 - 1U == uVar9) {
            param_2[3] = uVar11;
            *(undefined1 *)(param_2 + 5) = 1;
            return 0;
          }
          uVar9 = uVar9 + 1;
          pcVar3 = (char *)((long)iVar1 + (long)iVar1 * 2 + lVar5);
          uVar10 = (uint)*(ushort *)(pcVar3 + 1);
          iVar4 = uVar10 - *(ushort *)(pcVar2 + 1);
          if (iVar4 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if (iVar4 != 0) {
              uVar12 = (int)(*pcVar3 * 0x10000 + uVar11 * -0x10000) / iVar4;
            }
          }
          param_2[4] = uVar12;
          param_2[1] = uVar9;
          param_2[2] = uVar11 * 0x10000;
          if ((param_4 <= (int)uVar9) || (lVar5 = lVar5 + 3, uVar6 != uVar10)) goto LAB_10058a144;
        }
        lVar7 = (long)(int)param_7;
        uVar6 = param_7;
        if (param_8 <= (int)param_7) {
          lVar7 = (long)(int)param_7 * 3;
LAB_10058a18c:
          param_2[3] = (int)*(char *)(param_5 + lVar7);
          return 0;
        }
LAB_10058a05c:
        uVar9 = uVar6;
        param_2[1] = uVar9;
        uVar6 = *(ushort *)(param_5 + lVar7 * 3 + 1) - 1;
        *param_2 = uVar6;
      } while( true );
    }
    uVar9 = param_2[2] + param_2[4];
    uVar11 = 0;
    if (-1 < (int)uVar9) {
      uVar11 = uVar9;
    }
    if (param_6 != 2) {
      uVar11 = uVar9;
    }
    param_2[2] = uVar11;
  }
LAB_10058a144:
  param_2[3] = (int)param_2[2] >> 0x10;
  *param_2 = uVar6 + 1;
  *(byte *)(param_3 + 0x2a4) = *(byte *)(param_3 + 0x2a4) | param_10;
  return 0;
}




undefined8 FUN_10058a198(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  
  uVar17 = *(uint *)(param_2 + 0x300);
  uVar16 = (ulong)uVar17;
  bVar5 = *(byte *)(param_3 + 0x4b0);
  if ((int)uVar17 < (int)(uint)bVar5) {
    lVar4 = param_3 + 0x4b2;
    uVar10 = *(uint *)(param_2 + 0x2fc);
    if (uVar10 == *(ushort *)(lVar4 + (long)(int)uVar17 * 3 + 1)) {
      uVar7 = *(ushort *)(param_1 + 0xcfe);
      lVar13 = (long)param_4;
      bVar6 = *(byte *)(param_3 + 0x4af);
      do {
        iVar14 = (int)uVar16;
        lVar2 = (long)iVar14 + (long)iVar14 * 2;
        lVar3 = (long)(iVar14 + 1) + (long)(iVar14 + 1) * 2;
        lVar11 = param_3;
        while( true ) {
          bVar8 = *(byte *)(lVar2 + lVar11 + 0x4b2);
          iVar14 = (int)(char)bVar8;
          if (((uVar7 & 8) == 0) && ((bVar6 & 0x10) == 0)) {
            uVar20 = (ulong)*(uint *)(*(long *)(param_2 + 0x290) + 8);
            iVar18 = 0;
            if (uVar20 != 0) {
              iVar18 = (int)(((long)*(int *)(&DAT_10186d748 + lVar13 * 4) * 0x20ab) / (long)uVar20);
            }
            iVar15 = param_4 + ((int)(char)bVar8 >> 1);
            if (((int)(char)bVar8 & 1U) == 0) {
              iVar12 = 0;
              if (uVar20 != 0) {
                iVar12 = (int)(((long)*(int *)(&DAT_10186d748 + (long)iVar15 * 4) * 0x20ab) /
                              (long)uVar20);
              }
            }
            else {
              lVar1 = (long)iVar15 * 4;
              iVar15 = 0;
              if (uVar20 != 0) {
                iVar15 = (int)(((long)*(int *)(&DAT_10186d748 + lVar1) * 0x20ab) / (long)uVar20);
              }
              iVar12 = 0;
              if (uVar20 != 0) {
                iVar12 = (int)(((long)*(int *)(&DAT_10186d74c + lVar1) * 0x20ab) / (long)uVar20);
              }
              iVar12 = iVar12 + iVar15;
              if (iVar12 < 0) {
                iVar12 = iVar12 + 1;
              }
              iVar12 = iVar12 >> 1;
            }
            iVar12 = iVar18 - iVar12;
            bVar9 = *(byte *)(lVar3 + lVar11 + 0x4b2);
            if ((bVar9 & 1) == 0) {
              iVar15 = 0;
              if (uVar20 != 0) {
                iVar15 = (int)(((long)*(int *)(&DAT_10186d748 +
                                              (long)(param_4 + ((int)(char)bVar9 >> 1)) * 4) *
                               0x20ab) / (long)uVar20);
              }
              iVar18 = iVar18 - iVar15;
            }
            else {
              lVar1 = (long)(param_4 + ((int)(char)bVar9 >> 1)) * 4;
              iVar15 = 0;
              if (uVar20 != 0) {
                iVar15 = (int)(((long)*(int *)(&DAT_10186d748 + lVar1) * 0x20ab) / (long)uVar20);
              }
              iVar19 = 0;
              if (uVar20 != 0) {
                iVar19 = (int)(((long)*(int *)(&DAT_10186d74c + lVar1) * 0x20ab) / (long)uVar20);
              }
              iVar19 = iVar19 + iVar15;
              if (iVar19 < 0) {
                iVar19 = iVar19 + 1;
              }
              iVar18 = iVar18 - (iVar19 >> 1);
            }
          }
          else {
            iVar12 = iVar14 << 5;
            iVar18 = (int)*(char *)(lVar3 + lVar11 + 0x4b2) << 5;
          }
          iVar15 = (int)uVar16;
          if ((((bVar6 & 2) != 0) && ((int)(uint)*(byte *)(param_3 + 0x506) <= iVar15)) &&
             (*(char *)(param_2 + 0x324) == '\0')) {
            uVar16 = (ulong)*(byte *)(param_3 + 0x505);
            if (*(byte *)(param_3 + 0x506) != *(byte *)(param_3 + 0x505)) goto LAB_10058a20c;
            if (((bVar6 >> 4 & 1) != 0) || ((uVar7 & 8) != 0)) {
              *(int *)(param_2 + 0x308) = iVar14 << 5;
              return 0;
            }
            goto LAB_10058a4b0;
          }
          if (((bVar6 >> 2 & 1) != 0) && ((int)(uint)*(byte *)(param_3 + 0x504) <= iVar15)) break;
          if (bVar5 - 1 == iVar15) {
            if (((uVar7 & 8) == 0) && ((bVar6 & 0x10) == 0)) {
              uVar16 = (ulong)*(uint *)(*(long *)(param_2 + 0x290) + 8);
              iVar12 = 0;
              if (uVar16 != 0) {
                iVar12 = (int)(((long)*(int *)(&DAT_10186d748 + lVar13 * 4) * 0x20ab) / (long)uVar16
                              );
              }
              param_4 = param_4 + (iVar14 >> 1);
              if ((bVar8 & 1) == 0) {
                iVar14 = 0;
                if (uVar16 != 0) {
                  iVar14 = (int)(((long)*(int *)(&DAT_10186d748 + (long)param_4 * 4) * 0x20ab) /
                                (long)uVar16);
                }
                *(int *)(param_2 + 0x308) = iVar12 - iVar14;
              }
              else {
                lVar4 = (long)param_4 * 4;
                iVar14 = 0;
                if (uVar16 != 0) {
                  iVar14 = (int)(((long)*(int *)(&DAT_10186d748 + lVar4) * 0x20ab) / (long)uVar16);
                }
                iVar18 = 0;
                if (uVar16 != 0) {
                  iVar18 = (int)(((long)*(int *)(&DAT_10186d74c + lVar4) * 0x20ab) / (long)uVar16);
                }
                iVar18 = iVar18 + iVar14;
                if (iVar18 < 0) {
                  iVar18 = iVar18 + 1;
                }
                *(int *)(param_2 + 0x308) = iVar12 - (iVar18 >> 1);
              }
            }
            else {
              *(int *)(param_2 + 0x308) = iVar14 << 5;
            }
            *(undefined1 *)(param_2 + 0x310) = 1;
            return 0;
          }
          uVar16 = (ulong)(iVar15 + 1U);
          uVar17 = (uint)*(ushort *)(lVar3 + lVar11 + 0x4b3);
          iVar14 = uVar17 - *(ushort *)(lVar2 + lVar11 + 0x4b3);
          if (iVar14 == 0) {
            iVar19 = 0;
          }
          else {
            iVar19 = 0;
            if (iVar14 != 0) {
              iVar19 = (iVar18 * 0x10000 + iVar12 * -0x10000) / iVar14;
            }
          }
          *(int *)(param_2 + 0x30c) = iVar19;
          *(int *)(param_2 + 0x304) = iVar12 * 0x10000;
          lVar11 = lVar11 + 3;
          *(uint *)(param_2 + 0x300) = iVar15 + 1U;
          if (uVar10 != uVar17) goto LAB_10058a3d0;
        }
        uVar16 = (ulong)*(byte *)(param_3 + 0x503);
        if (*(byte *)(param_3 + 0x504) <= *(byte *)(param_3 + 0x503)) {
          if (((bVar6 >> 4 & 1) != 0) || ((uVar7 & 8) != 0)) {
            *(int *)(param_2 + 0x308) = (int)*(char *)(lVar4 + uVar16 * 3) << 5;
            return 0;
          }
LAB_10058a4b0:
          uVar16 = (ulong)*(uint *)(*(long *)(param_2 + 0x290) + 8);
          iVar12 = 0;
          if (uVar16 != 0) {
            iVar12 = (int)(((long)*(int *)(&DAT_10186d748 + lVar13 * 4) * 0x20ab) / (long)uVar16);
          }
          param_4 = param_4 + (iVar14 >> 1);
          if ((bVar8 & 1) == 0) {
            iVar14 = 0;
            if (uVar16 != 0) {
              iVar14 = (int)(((long)*(int *)(&DAT_10186d748 + (long)param_4 * 4) * 0x20ab) /
                            (long)uVar16);
            }
            *(int *)(param_2 + 0x308) = iVar12 - iVar14;
            return 0;
          }
          lVar4 = (long)param_4 * 4;
          iVar14 = 0;
          if (uVar16 != 0) {
            iVar14 = (int)(((long)*(int *)(&DAT_10186d748 + lVar4) * 0x20ab) / (long)uVar16);
          }
          iVar18 = 0;
          if (uVar16 != 0) {
            iVar18 = (int)(((long)*(int *)(&DAT_10186d74c + lVar4) * 0x20ab) / (long)uVar16);
          }
          iVar18 = iVar18 + iVar14;
          if (iVar18 < 0) {
            iVar18 = iVar18 + 1;
          }
          *(int *)(param_2 + 0x308) = iVar12 - (iVar18 >> 1);
          return 0;
        }
LAB_10058a20c:
        *(int *)(param_2 + 0x300) = (int)uVar16;
        uVar10 = *(ushort *)(lVar4 + uVar16 * 3 + 1) - 1;
        *(uint *)(param_2 + 0x2fc) = uVar10;
      } while( true );
    }
    *(int *)(param_2 + 0x304) = *(int *)(param_2 + 0x304) + *(int *)(param_2 + 0x30c);
  }
LAB_10058a3d0:
  if ((*(byte *)(param_3 + 0x4af) >> 4 & 1) == 0) {
    *(byte *)(param_2 + 0x2a4) = *(byte *)(param_2 + 0x2a4) | 1;
  }
  *(int *)(param_2 + 0x308) = *(int *)(param_2 + 0x304) >> 0x10;
  *(int *)(param_2 + 0x2fc) = *(int *)(param_2 + 0x2fc) + 1;
  return 0;
}




undefined8 FUN_10058a538(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = *(long *)(param_2 + 0x290);
  switch(*(undefined1 *)(lVar4 + 0x32)) {
  case 0:
  case 3:
    iVar5 = *(int *)(param_2 + 0x31c);
    iVar6 = (int)(char)(&DAT_10186d430)[iVar5];
    break;
  case 1:
    iVar5 = *(int *)(param_2 + 0x31c);
    uVar1 = iVar5 + 0x80;
    uVar2 = iVar5 + 0x17f;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    iVar6 = (int)(0x80 - (uVar1 - (uVar2 & 0xffffff00))) >> 1;
    break;
  case 2:
    iVar5 = *(int *)(param_2 + 0x31c);
    iVar6 = -0x40;
    if (iVar5 < 0x80) {
      iVar6 = 0x40;
    }
    break;
  default:
    iVar5 = *(int *)(param_2 + 0x31c);
    iVar6 = 0;
  }
  *(int *)(param_2 + 0x2b8) =
       *(int *)(param_2 + 0x2b8) -
       ((int)(-(iVar6 * (uint)*(byte *)(lVar4 + 0x31)) * *(int *)(param_2 + 800)) >> 0x16);
  iVar6 = *(int *)(param_2 + 800) + (uint)*(byte *)(lVar4 + 0x33) * 0x10;
  iVar3 = 0x10000;
  if (iVar6 < 0x10001) {
    iVar3 = iVar6;
  }
  *(int *)(param_2 + 800) = iVar3;
  iVar5 = iVar5 + (uint)*(byte *)(lVar4 + 0x30);
  iVar6 = iVar5 + -0x100;
  if (iVar5 < 0x100) {
    iVar6 = iVar5;
  }
  *(int *)(param_2 + 0x31c) = iVar6;
  *(byte *)(param_2 + 0x2a4) = *(byte *)(param_2 + 0x2a4) | 1;
  return 0;
}




undefined8 FUN_10058a628(long *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  cVar6 = param_2[2];
  uVar2 = (uint)(byte)(cVar6 - 1);
  if (param_3 != 0) {
    if (uVar2 < 0x41) {
      *(uint *)((long)param_1 + 0x344) = uVar2;
    }
    else {
      if (uVar2 < 0x4b) {
        bVar10 = cVar6 + 0xbe;
        if (cVar6 == 'B') {
          bVar10 = *(byte *)((long)param_1 + 0x397);
        }
        else {
          *(byte *)((long)param_1 + 0x397) = bVar10;
        }
        iVar1 = *(int *)((long)param_1 + 0x344) + (uint)bVar10;
        iVar9 = 0x40;
        if (iVar1 < 0x41) {
          iVar9 = iVar1;
        }
        *(int *)((long)param_1 + 0x344) = iVar9;
      }
      if (uVar2 - 0x4b < 10) {
        bVar10 = cVar6 + 0xb4;
        if (cVar6 == 'L') {
          bVar10 = *(byte *)((long)param_1 + 0x397);
        }
        else {
          *(byte *)((long)param_1 + 0x397) = bVar10;
        }
        iVar9 = *(int *)((long)param_1 + 0x344) - (uint)bVar10;
        iVar1 = 0;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        *(int *)((long)param_1 + 0x344) = iVar1;
      }
      uVar8 = uVar2 - 0x80;
      if (uVar8 < 0x41) {
        *(uint *)(param_1 + 0x69) = uVar8;
        *(uint *)(lVar5 + 0x2b0) = uVar8;
        *(byte *)(lVar5 + 0x2a4) = *(byte *)(lVar5 + 0x2a4) | 4;
      }
    }
  }
  if (uVar2 - 0x55 < 10) {
    if (cVar6 != 'V') {
      *(char *)((long)param_1 + 0x397) = cVar6 + -0x56;
    }
    if ((param_3 & 1) == 0) {
      iVar1 = *(int *)((long)param_1 + 0x344) + (uint)*(byte *)((long)param_1 + 0x397);
      iVar9 = 0x40;
      if (iVar1 < 0x41) {
        iVar9 = iVar1;
      }
      *(int *)((long)param_1 + 0x344) = iVar9;
    }
  }
  if (uVar2 - 0x5f < 10) {
    if (cVar6 != '`') {
      *(char *)((long)param_1 + 0x397) = cVar6 + -0x60;
    }
    if ((param_3 & 1) == 0) {
      iVar9 = *(int *)((long)param_1 + 0x344) - (uint)*(byte *)((long)param_1 + 0x397);
      iVar1 = 0;
      if (-1 < iVar9) {
        iVar1 = iVar9;
      }
      *(int *)((long)param_1 + 0x344) = iVar1;
    }
  }
  if (uVar2 - 0x69 < 10) {
    bVar10 = cVar6 + 0x96;
    if (cVar6 == 'j') {
      bVar10 = *(byte *)((long)param_1 + 0x35c);
    }
    else {
      *(byte *)((long)param_1 + 0x35c) = bVar10;
    }
    *(uint *)(lVar5 + 0x2a8) = *(int *)(lVar5 + 0x2a8) + (uint)bVar10 * 0x10;
  }
  if (uVar2 - 0x73 < 10) {
    bVar10 = cVar6 + 0x8c;
    if (cVar6 == 't') {
      bVar10 = *(byte *)((long)param_1 + 0x35c);
    }
    else {
      *(byte *)((long)param_1 + 0x35c) = bVar10;
    }
    iVar1 = *(int *)(lVar5 + 0x2a8) + (uint)bVar10 * -0x10;
    *(int *)(lVar5 + 0x2a8) = iVar1;
    if (iVar1 < 1) {
      bVar10 = *(byte *)(lVar5 + 0x2a4) | 0x20;
    }
    else {
      bVar10 = *(byte *)(lVar5 + 0x2a4) | 1;
    }
    *(byte *)(lVar5 + 0x2a4) = bVar10;
  }
  if (9 < uVar2 - 0xc1) goto LAB_10058a8b0;
  if (*(int *)(lVar4 + 0xd04) == 0) {
    if (cVar6 != -0x3e) {
      cVar7 = (cVar6 + '>') * '\x10';
      if ((*(byte *)(lVar4 + 0xcfe) >> 5 & 1) == 0) {
        *(char *)((long)param_1 + 0x35c) = cVar7;
      }
      else {
        *(char *)((long)param_1 + 0x36c) = cVar7;
      }
    }
    *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)((long)param_1 + 0x33c);
    if (*param_2 != '\0') {
      *(undefined1 *)((long)param_1 + 0x36d) = 0;
    }
    goto LAB_10058a8b0;
  }
  if (*(char *)((long)param_1 + 0x36d) != '\0') goto LAB_10058a8b0;
  iVar1 = *(int *)(lVar5 + 0x2a8);
  iVar9 = (int)param_1[0x6d];
  if (iVar1 < iVar9) {
    pbVar3 = (byte *)((long)param_1 + 0x35c);
    if ((*(ushort *)(lVar4 + 0xcfe) & 0x20) != 0) {
      pbVar3 = (byte *)((long)param_1 + 0x36c);
    }
    iVar1 = iVar1 + (uint)*pbVar3 * 4;
    *(int *)(lVar5 + 0x2a8) = iVar1;
    if (iVar9 <= iVar1) {
LAB_10058a87c:
      *(int *)(lVar5 + 0x2a8) = iVar9;
      *(undefined1 *)((long)param_1 + 0x36d) = 1;
    }
  }
  else if (iVar9 < iVar1) {
    pbVar3 = (byte *)((long)param_1 + 0x35c);
    if ((*(ushort *)(lVar4 + 0xcfe) & 0x20) != 0) {
      pbVar3 = (byte *)((long)param_1 + 0x36c);
    }
    iVar1 = iVar1 + (uint)*pbVar3 * -4;
    *(int *)(lVar5 + 0x2a8) = iVar1;
    if (iVar1 < iVar9) goto LAB_10058a87c;
  }
  *(byte *)(lVar5 + 0x2a4) = *(byte *)(lVar5 + 0x2a4) | 1;
LAB_10058a8b0:
  if (9 < uVar2 - 0xcb) {
    return 0;
  }
  if (*(int *)(lVar4 + 0xd04) == 0) {
    if (cVar6 != -0x34) {
      *(char *)(param_1 + 0x6e) = cVar6 + '4';
      *(undefined1 *)((long)param_1 + 0x371) = 8;
    }
    if (*(char *)(lVar5 + 0x2a3) != '\0') {
      return 0;
    }
    if ((*(byte *)(lVar4 + 0xcfe) >> 4 & 1) != 0) {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x371) == '\x15') {
      FUN_100589cd0();
      return 0;
    }
  }
  else {
    if (*(char *)(lVar5 + 0x2a3) != '\0') {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x371) == '\x15') {
      FUN_100589cd0();
      return 0;
    }
  }
  FUN_100589bc8();
  return 0;
}




undefined8 FUN_10058a92c(long param_1)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  char *pcVar11;
  
  if (*(long *)(param_1 + 0x4540) == 0) {
    uVar6 = 0x1c;
  }
  else {
    _bzero((void *)(param_1 + 0xba8),(long)*(int *)(param_1 + 0x4e0) * 5);
    while( true ) {
      pbVar8 = *(byte **)(param_1 + 0x4540);
      *(byte **)(param_1 + 0x4540) = pbVar8 + 1;
      bVar3 = *pbVar8;
      if (bVar3 == 0) break;
      uVar7 = (ulong)(bVar3 + 0x3f & 0x3f);
      if ((char)bVar3 < '\0') {
        *(byte **)(param_1 + 0x4540) = pbVar8 + 2;
        bVar3 = pbVar8[1];
        *(byte *)(param_1 + uVar7 + 0xb68) = bVar3;
      }
      else {
        bVar3 = *(byte *)(param_1 + uVar7 + 0xb68);
      }
      pbVar8 = (byte *)(param_1 + uVar7 * 5 + 0xba8);
      if ((bVar3 & 1) != 0) {
        pbVar9 = *(byte **)(param_1 + 0x4540);
        *(byte **)(param_1 + 0x4540) = pbVar9 + 1;
        bVar4 = *pbVar9;
        if (bVar4 < 0xfe) {
          bVar4 = bVar4 + 1;
        }
        *pbVar8 = bVar4;
        *(byte *)(param_1 + uVar7 + 0xa28) = bVar4;
      }
      if ((bVar3 >> 1 & 1) != 0) {
        puVar10 = *(undefined1 **)(param_1 + 0x4540);
        *(undefined1 **)(param_1 + 0x4540) = puVar10 + 1;
        uVar5 = *puVar10;
        *(undefined1 *)(param_1 + uVar7 * 5 + 0xba9) = uVar5;
        *(undefined1 *)(param_1 + uVar7 + 0xa68) = uVar5;
      }
      if ((bVar3 >> 2 & 1) != 0) {
        pcVar11 = *(char **)(param_1 + 0x4540);
        *(char **)(param_1 + 0x4540) = pcVar11 + 1;
        cVar1 = *pcVar11 + '\x01';
        *(char *)(param_1 + uVar7 * 5 + 0xbaa) = cVar1;
        *(char *)(param_1 + uVar7 + 0xaa8) = cVar1;
      }
      if ((bVar3 >> 3 & 1) != 0) {
        puVar10 = *(undefined1 **)(param_1 + 0x4540);
        *(undefined1 **)(param_1 + 0x4540) = puVar10 + 1;
        lVar2 = param_1 + uVar7 * 5;
        *(undefined1 *)(lVar2 + 0xbab) = *puVar10;
        puVar10 = *(undefined1 **)(param_1 + 0x4540);
        *(undefined1 **)(param_1 + 0x4540) = puVar10 + 1;
        *(undefined1 *)(lVar2 + 0xbac) = *puVar10;
        *(undefined1 *)(param_1 + uVar7 + 0xae8) = *(undefined1 *)(lVar2 + 0xbab);
        *(undefined1 *)(param_1 + uVar7 + 0xb28) = *(undefined1 *)(lVar2 + 0xbac);
      }
      if ((bVar3 >> 4 & 1) != 0) {
        *pbVar8 = *(byte *)(param_1 + uVar7 + 0xa28);
      }
      if ((bVar3 >> 5 & 1) != 0) {
        *(undefined1 *)(param_1 + uVar7 * 5 + 0xba9) = *(undefined1 *)(param_1 + uVar7 + 0xa68);
      }
      if ((bVar3 >> 6 & 1) != 0) {
        *(undefined1 *)(param_1 + uVar7 * 5 + 0xbaa) = *(undefined1 *)(param_1 + uVar7 + 0xaa8);
      }
      if ((char)bVar3 < '\0') {
        lVar2 = param_1 + uVar7 * 5;
        *(undefined1 *)(lVar2 + 0xbab) = *(undefined1 *)(param_1 + uVar7 + 0xae8);
        *(undefined1 *)(lVar2 + 0xbac) = *(undefined1 *)(param_1 + uVar7 + 0xb28);
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10058aae4(long param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined1 uVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  char cVar29;
  byte bVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  long *plVar35;
  float fVar36;
  float fVar37;
  float local_d8;
  ulong local_d0;
  long *local_b0;
  long *local_a8;
  
  piVar5 = (int *)(*(long *)(param_1 + 0x298) +
                  (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10);
  if (piVar5 != (int *)0x0) {
    if ((*(int *)(param_1 + 0xd04) == 0) && (lVar28 = *(long *)(param_1 + 0x2a8), lVar28 != 0)) {
      lVar34 = (long)*(int *)(param_1 + 0xd10) + (long)(*(int *)(param_1 + 0xd14) << 8);
      if (*(char *)(lVar28 + lVar34) != '\0') {
        *(undefined1 *)(param_1 + 0xd01) = 1;
        return 0;
      }
      *(undefined1 *)(lVar28 + lVar34) = 1;
    }
    uVar19 = (ulong)*(uint *)(param_1 + 0x4e0);
    if (0 < (int)*(uint *)(param_1 + 0x4e0)) {
      lVar28 = 0;
      bVar14 = false;
      do {
        local_a8 = (long *)0x0;
        lVar34 = param_1 + lVar28 * 5;
        bVar25 = *(byte *)(lVar34 + 0xbac);
        bVar30 = bVar25 >> 4;
        uVar27 = bVar25 & 0xf;
        cVar29 = *(char *)(lVar34 + 0xbab);
        uVar17 = *(uint *)(param_1 + 0xd04);
        if ((cVar29 == '\x13' && bVar30 == 0xd) &&
           (((int)uVar17 < (int)uVar27 || ((bVar25 & 0xf) == 0 && uVar17 == 0))))
        goto switchD_10058bca8_caseD_d;
        bVar13 = uVar17 == 0;
        if ((uVar17 != 0) && (cVar29 == '\x13' && bVar30 == 0xd)) {
          if ((uVar17 == uVar27) || ((bVar25 & 0xf) == 0 && uVar17 == 1)) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
        }
        plVar35 = *(long **)(param_1 + lVar28 * 8 + 0x4e8);
        plVar32 = plVar35 + 1;
        local_a8 = (long *)*plVar32;
        if ((local_a8 == plVar32) && ((long *)plVar35[2] == plVar32)) {
          local_a8 = (long *)&DAT_101dbc130;
          DAT_101dbc3c0 = &DAT_101dbc0f0;
        }
        pcVar1 = (char *)(lVar34 + 0xba8);
        plVar33 = local_a8;
        if (bVar13 != false) {
          if ((char)plVar35[0x68] == '\x12' && cVar29 != '\x12') {
            *(int *)((long)plVar35 + 0x344) =
                 *(int *)((long)plVar35 + 0x344) + *(int *)((long)plVar35 + 0x34c);
          }
          *(char *)(plVar35 + 0x68) = cVar29;
          *(undefined4 *)((long)plVar35 + 0x34c) = 0;
          *(undefined4 *)((long)local_a8 + 700) = 0;
          *(undefined1 *)((long)local_a8 + 0x2a4) = 0;
          bVar12 = 2 < (byte)(*pcVar1 + 2U);
          if (bVar12) {
            *(char *)((long)plVar35 + 0x339) = *pcVar1 + -1;
          }
          lVar23 = param_1 + lVar28 * 5;
          if (*(char *)(lVar23 + 0xba9) != '\0') {
            *(char *)(plVar35 + 0x67) = *(char *)(lVar23 + 0xba9) + -1;
            bVar12 = bVar12 || local_a8 == (long *)&DAT_101dbc130;
          }
          uVar10 = *(ushort *)(param_1 + 0xcfe);
          uVar17 = (uint)uVar10;
          if ((uVar10 >> 2 & 1) != 0) {
            bVar12 = (bool)(bVar12 & (int)(uint)*(byte *)(plVar35 + 0x67) <
                                     *(int *)(param_1 + 0xa10));
          }
          *(char *)(plVar35 + 0x68) = cVar29;
          *(undefined1 *)((long)local_a8 + 0x2a4) = 0;
          bVar11 = true;
          if ((cVar29 != '\a') && (cVar29 != '\f')) {
            uVar26 = (uint)*(byte *)(param_1 + lVar28 * 5 + 0xbaa);
            bVar11 = uVar26 < 0xcc && 0xc0 < (int)(uVar26 - 1);
          }
          if ((bool)(bVar12 & -1 < *(char *)(param_1 + lVar28 + 0x980))) {
            bVar6 = *(byte *)(plVar35 + 0x67);
            uVar19 = (ulong)bVar6;
            lVar16 = *(long *)(param_1 + 0xa18);
            if ((uVar10 & 4) == 0) {
              *(byte *)((long)plVar35 + 0x33a) = bVar6;
            }
            else {
              cVar29 = *(char *)(lVar16 + uVar19 * 0x618 +
                                 ((ulong)*(byte *)((long)plVar35 + 0x339) << 1 | 1) + 0x517);
              if (cVar29 == '\0') goto LAB_10058b460;
              *(char *)((long)plVar35 + 0x33a) = cVar29 + -1;
              cVar7 = *(char *)(lVar16 + uVar19 * 0x618 + 0x511);
              if ((cVar7 != '\0') && (plVar33 = (long *)*plVar32, plVar33 != plVar32)) {
                pcVar2 = (char *)(lVar16 + uVar19 * 0x618 + 0x512);
                do {
                  if (cVar7 == '\x03') {
                    if (bVar6 == *(byte *)(plVar33 + 0x54)) {
                      cVar8 = *pcVar2;
                      if (cVar8 == '\x02') {
LAB_10058aef4:
                        *(undefined1 *)((long)plVar33 + 0x314) = 1;
                      }
                      else {
                        if (cVar8 != '\x01') goto joined_r0x00010058af00;
                        *(undefined1 *)((long)plVar33 + 0x324) = 1;
                        uVar31 = uVar19;
                        if ((*(byte *)((long)local_a8 + 0x2a6) & 1) == 0) {
                          *(undefined1 *)((long)plVar33 + 0x314) = 1;
                        }
                        else {
LAB_10058aeec:
                          if ((*(byte *)(lVar16 + uVar31 * 0x618 + 0x400) >> 2 & 1) != 0)
                          goto LAB_10058aef4;
                        }
                      }
                    }
                  }
                  else if (cVar7 == '\x02') {
                    if ((char)(cVar29 + -1) == *(char *)((long)plVar33 + 0x2a2)) {
                      cVar8 = *pcVar2;
                      if (cVar8 == '\x02') goto LAB_10058aef4;
                      if (cVar8 == '\x01') {
                        bVar9 = *(byte *)(plVar33 + 0x54);
                        *(undefined1 *)((long)plVar33 + 0x324) = 1;
                        if ((*(byte *)((long)local_a8 + 0x2a6) & 1) != 0) {
LAB_10058aed4:
                          uVar31 = (ulong)bVar9;
                          goto LAB_10058aeec;
                        }
                        *(undefined1 *)((long)plVar33 + 0x314) = 1;
                      }
                      else {
joined_r0x00010058af00:
                        if (cVar8 == '\0') {
                          *(byte *)((long)plVar33 + 0x2a4) = *(byte *)((long)plVar33 + 0x2a4) | 0x20
                          ;
                        }
                      }
                    }
                  }
                  else if ((cVar7 == '\x01') &&
                          (*(char *)((long)plVar35 + 0x339) == *(char *)((long)plVar33 + 0x2a1))) {
                    cVar8 = *pcVar2;
                    if (cVar8 == '\x02') goto LAB_10058aef4;
                    if (cVar8 != '\x01') goto joined_r0x00010058af00;
                    bVar9 = *(byte *)(plVar33 + 0x54);
                    *(undefined1 *)((long)plVar33 + 0x324) = 1;
                    if ((*(byte *)((long)local_a8 + 0x2a6) & 1) != 0) goto LAB_10058aed4;
                    *(undefined1 *)((long)plVar33 + 0x314) = 1;
                  }
                  plVar33 = (long *)*plVar33;
                } while (plVar33 != plVar32);
              }
            }
            bVar11 = (bool)(bVar11 & local_a8 != (long *)&DAT_101dbc130);
            if (bVar11) {
              uVar31 = (ulong)*(byte *)((long)plVar35 + 0x339);
              local_d0 = uVar19;
            }
            else {
              local_a8 = (long *)*plVar32;
              if (local_a8 == plVar32) {
                iVar15 = FUN_1005d9420(param_1,plVar35,0,&local_a8);
                if (iVar15 != 0) {
                  local_a8 = (long *)&DAT_101dbc130;
                  DAT_101dbc3c0 = &DAT_101dbc0f0;
                }
              }
              else if ((uVar10 & 4) != 0) {
                cVar29 = *(char *)((long)local_a8 + 0x2a5);
                if (cVar29 == '\x01') {
                  *(undefined1 *)((long)local_a8 + 0x2a3) = 1;
                  if (*(int *)((long)plVar35 + 0x344) == 0) {
                    *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 0x20;
                  }
                  iVar15 = FUN_1005d9420(param_1,plVar35,0,&local_b0);
                  if (iVar15 == 0) {
                    local_a8 = local_b0;
                  }
                  else {
                    local_a8 = (long *)&DAT_101dbc130;
                    DAT_101dbc3c0 = &DAT_101dbc0f0;
                  }
                  *(undefined4 *)((long)local_a8 + 0x2ac) = *(undefined4 *)((long)plVar35 + 0x344);
                }
                else {
                  if (cVar29 == '\x03') {
                    *(undefined1 *)((long)local_a8 + 0x2a3) = 1;
                    *(undefined1 *)((long)local_a8 + 0x314) = 1;
                  }
                  else {
                    if (cVar29 != '\x02') goto LAB_10058b124;
                    *(undefined1 *)((long)local_a8 + 0x2a3) = 1;
                    *(undefined1 *)((long)local_a8 + 0x324) = 1;
                    if (((*(byte *)((long)local_a8 + 0x2a6) & 1) == 0) ||
                       ((*(byte *)(lVar16 + (ulong)*(byte *)(local_a8 + 0x54) * 0x618 + 0x400) >> 2
                        & 1) != 0)) {
                      *(undefined1 *)((long)local_a8 + 0x314) = 1;
                    }
                  }
                  if (*(int *)((long)plVar35 + 0x344) == 0) {
                    *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 0x20;
                  }
                  iVar15 = FUN_1005d9420(param_1,plVar35,0,&local_b0);
                  if (iVar15 == 0) {
                    local_a8 = local_b0;
                  }
                  else {
                    local_a8 = (long *)&DAT_101dbc130;
                    DAT_101dbc3c0 = &DAT_101dbc0f0;
                  }
                  *(undefined4 *)((long)local_a8 + 0x2ac) = *(undefined4 *)((long)plVar35 + 0x344);
                }
              }
LAB_10058b124:
              uVar17 = (uint)*(ushort *)(param_1 + 0xcfe);
              if ((*(ushort *)(param_1 + 0xcfe) >> 2 & 1) == 0) {
                local_d0 = (ulong)*(byte *)(plVar35 + 0x67);
              }
              else {
                *(undefined1 *)((long)local_a8 + 0x2a3) = 0;
                local_d0 = (ulong)*(byte *)(plVar35 + 0x67);
                lVar21 = *(long *)(param_1 + 0xa18) + local_d0 * 0x618;
                *(undefined1 *)((long)local_a8 + 0x2a5) = *(undefined1 *)(lVar21 + 0x510);
                *(undefined1 *)((long)local_a8 + 0x2a6) = *(undefined1 *)(lVar21 + 0x400);
              }
              bVar6 = *(byte *)((long)plVar35 + 0x33a);
              *(byte *)((long)local_a8 + 0x2a2) = bVar6;
              *(char *)(local_a8 + 0x54) = (char)local_d0;
              uVar31 = (ulong)*(byte *)((long)plVar35 + 0x339);
              *(byte *)((long)local_a8 + 0x2a1) = *(byte *)((long)plVar35 + 0x339);
              if (((int)(uint)bVar6 < *(int *)(param_1 + 0xa14)) &&
                 (lVar21 = *(long *)(*(long *)(param_1 + 0xd38) + (ulong)bVar6 * 8), lVar21 != 0)) {
                local_a8[0x52] = lVar21;
              }
              else {
                local_a8[0x52] = (long)&DAT_101dbc0f0;
              }
            }
            plVar33 = local_a8;
            uVar26 = (uint)uVar31;
            if ((uVar17 >> 2 & 1) != 0) {
              uVar26 = (uint)*(byte *)(lVar16 + uVar19 * 0x618 + uVar31 * 2 + 0x517);
            }
            *(char *)((long)plVar35 + 0x33b) = (char)uVar26;
            uVar10 = *(ushort *)(param_1 + 0xcfe);
            if ((uVar10 >> 3 & 1) == 0) {
              iVar15 = 0;
              if ((ulong)*(uint *)(local_a8[0x52] + 8) != 0) {
                iVar15 = (int)(((long)*(int *)(&DAT_10186d748 + (ulong)uVar26 * 4) * 0x20ab) /
                              (long)(ulong)*(uint *)(local_a8[0x52] + 8));
              }
            }
            else {
              fVar37 = (float)NEON_ucvtf(*(undefined4 *)(local_a8[0x52] + 8));
              fVar37 = (float)_logf(fVar37 / 8363.0,lVar16,lVar23,bVar13);
              iVar15 = (uVar26 * -0x40 + 0x1e00) - (int)((fVar37 / 0.693147) * 768.0);
            }
            *(int *)((long)plVar35 + 0x33c) = iVar15;
            if (!bVar11) {
              *(undefined1 *)((long)plVar35 + 0x36e) = 0;
              *(undefined1 *)((long)plVar35 + 0x372) = 0;
              *(undefined4 *)(plVar35 + 0x6f) = 0;
              *(undefined1 *)((long)plVar35 + 0x37e) = 0;
              *(undefined1 *)((long)plVar35 + 0x365) = 0;
              *(int *)(local_a8 + 0x55) = iVar15;
              *(int *)(local_a8 + 0x56) = (int)plVar35[0x69];
              *(undefined4 *)((long)local_a8 + 0x2c4) = 1;
              if (((uVar10 >> 2 & 1) != 0) &&
                 (bVar6 = *(byte *)(lVar16 + uVar19 * 0x618 + 0x50f), -1 < (char)bVar6)) {
                uVar20 = (ulong)bVar6 * 0x40;
                iVar15 = (int)(uVar20 / 0x3f);
                *(uint *)(local_a8 + 0x56) = iVar15 + ((uint)((int)uVar20 - iVar15) >> 1) >> 5;
              }
              lVar21 = local_a8[0x52];
              if ((char)*(byte *)(lVar21 + 0xd) < '\0') {
                *(uint *)(local_a8 + 0x56) = *(byte *)(lVar21 + 0xd) & 0x7f;
              }
              if ((uVar10 & 4) == 0) {
                uVar17 = (uint)*(byte *)(lVar21 + 0x25);
              }
              else {
                lVar16 = lVar16 + uVar19 * 0x618;
                iVar18 = ((uint)uVar31 - (uint)*(byte *)(lVar16 + 0x514)) *
                         (uint)*(byte *)(lVar16 + 0x513);
                iVar15 = iVar18 + 7;
                if (-1 < iVar18) {
                  iVar15 = iVar18;
                }
                *(int *)(local_a8 + 0x56) = (int)local_a8[0x56] + (iVar15 >> 3);
                uVar17 = (uint)*(byte *)(lVar16 + 0x50e) * (uint)*(byte *)(lVar21 + 0x25) >> 7;
              }
              *(uint *)(local_a8 + 0x59) = uVar17;
              *(undefined1 *)((long)local_a8 + 0x2a4) = 0xc;
              plVar33 = local_a8;
            }
            if (((uVar10 >> 2 & 1) != 0) && (((uVar10 >> 5 & 1) != 0 || (!bVar11)))) {
              *(undefined1 *)((long)plVar33 + 0x324) = 0;
              lVar16 = *(long *)(param_1 + 0xa18);
              if (((*(byte *)(lVar16 + local_d0 * 0x618 + 0x400) >> 3 & 1) == 0) ||
                 (*(char *)((long)plVar33 + 0x2a5) == '\0')) {
                *(undefined4 *)(plVar33 + 0x5b) = 0x40;
                *(undefined4 *)(plVar33 + 0x5a) = 0;
                *(undefined4 *)((long)plVar33 + 0x2cc) = 0;
                *(undefined4 *)((long)plVar33 + 0x2dc) = 0;
              }
              if (((*(byte *)(lVar16 + local_d0 * 0x618 + 0x457) >> 3 & 1) == 0) ||
                 (*(char *)((long)plVar33 + 0x2a5) == '\0')) {
                *(undefined4 *)(plVar33 + 0x5e) = 0;
                *(undefined4 *)(plVar33 + 0x5d) = 0;
                *(undefined4 *)((long)plVar33 + 0x2e4) = 0;
                *(undefined4 *)((long)plVar33 + 0x2f4) = 0;
              }
              if (((*(byte *)(lVar16 + local_d0 * 0x618 + 0x4af) >> 3 & 1) == 0) ||
                 (*(char *)((long)plVar33 + 0x2a5) == '\0')) {
                *(undefined4 *)(plVar33 + 0x61) = 0;
                *(undefined4 *)(plVar33 + 0x60) = 0;
                *(undefined4 *)((long)plVar33 + 0x2fc) = 0;
                *(undefined4 *)((long)plVar33 + 0x30c) = 0;
              }
              *(undefined1 *)((long)plVar33 + 0x314) = 0;
              *(undefined4 *)(plVar33 + 99) = 0x400;
              *(undefined1 *)(plVar33 + 0x5c) = 0;
              *(undefined1 *)(plVar33 + 0x5f) = 0;
              *(undefined1 *)(plVar33 + 0x62) = 0;
              *(undefined8 *)((long)plVar33 + 0x31c) = 0;
            }
          }
LAB_10058b460:
          if ((plVar33[0x52] != 0) && (*(char *)(lVar23 + 0xba9) != '\0')) {
            *(uint *)((long)plVar35 + 0x344) = (uint)*(byte *)(plVar33[0x52] + 0xc);
          }
        }
        for (plVar22 = (long *)*plVar32; plVar22 != plVar32; plVar22 = (long *)*plVar22) {
          *(undefined4 *)(plVar22 + 0x57) = 0;
        }
        *(byte *)((long)plVar33 + 0x2a4) = *(byte *)((long)plVar33 + 0x2a4) | 3;
        if (*(char *)(param_1 + lVar28 * 5 + 0xbaa) != '\0') {
          FUN_10058a628(plVar35,pcVar1,bVar13);
        }
        uVar10 = *(ushort *)(param_1 + 0xcfe);
        if ((uVar10 >> 2 & 1) == 0) {
          cVar29 = *pcVar1;
LAB_10058b4e0:
          if (cVar29 == -2) {
            *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 0x20;
            cVar29 = -2;
          }
        }
        else {
          bVar6 = *(byte *)(plVar35 + 0x67);
          cVar29 = *pcVar1;
          if (cVar29 != -1) goto LAB_10058b4e0;
          lVar23 = *(long *)(param_1 + 0xa18);
          *(undefined1 *)((long)local_a8 + 0x324) = 1;
          if ((*(byte *)((long)local_a8 + 0x2a6) & 1) == 0) {
            *(undefined1 *)((long)local_a8 + 0x314) = 1;
          }
          else if ((*(byte *)(lVar23 + (ulong)bVar6 * 0x618 + 0x400) >> 2 & 1) != 0) {
            *(undefined1 *)((long)local_a8 + 0x314) = 1;
          }
          cVar29 = -1;
        }
        if (0x18 < *(byte *)(lVar34 + 0xbab) - 1) goto switchD_10058bca8_caseD_d;
        pbVar3 = (byte *)(lVar34 + 0xbac);
        cVar7 = (char)uVar27;
        switch((uint)*(byte *)(lVar34 + 0xbab)) {
        case 1:
          if ((*(int *)(param_1 + 0xd04) == 0) && (*pbVar3 != 0)) {
            *(uint *)(param_1 + 0xd08) = (uint)*pbVar3;
          }
          break;
        case 2:
          if (*(int *)(param_1 + 0xd04) == 0) {
            bVar25 = *pbVar3;
            *(uint *)(param_1 + 0xd24) = (uint)bVar25;
            *(undefined4 *)(param_1 + 0xd20) = 0;
            if (*(int *)(param_1 + 0xa04) <= (int)(uint)bVar25) {
              *(undefined4 *)(param_1 + 0xd24) = 0;
            }
            bVar14 = true;
          }
          break;
        case 3:
          if (*(int *)(param_1 + 0xd04) == 0) {
            uVar27 = 0;
            if ((int)(uint)*pbVar3 <= *piVar5) {
              uVar27 = (uint)*pbVar3;
            }
            *(uint *)(param_1 + 0xd20) = uVar27;
            if (bVar14) {
              uVar19 = (ulong)*(uint *)(param_1 + 0xd24);
            }
            else {
              uVar19 = (long)*(int *)(param_1 + 0xd14) + 1;
              *(int *)(param_1 + 0xd24) = (int)uVar19;
              if ((*(int *)(param_1 + 0xce8) == 0) &&
                 (lVar34 = (long)*(int *)(param_1 + 0xd14),
                 *(char *)(param_1 + uVar19 + 0x2b0) == -1)) {
                do {
                  *(int *)(param_1 + 0xd24) = (int)lVar34;
                  lVar23 = lVar34 + -1;
                  if ((int)lVar34 + 1 < 1) break;
                  lVar16 = param_1 + lVar34;
                  lVar34 = lVar23;
                } while (*(char *)(lVar16 + 0x2b0) != -1);
                uVar27 = (int)lVar23 + 2;
                uVar19 = (ulong)uVar27;
                *(uint *)(param_1 + 0xd24) = uVar27;
              }
            }
            if (*(int *)(param_1 + 0xa04) <= (int)uVar19) {
              *(undefined4 *)(param_1 + 0xd24) = 0;
            }
          }
          break;
        case 4:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (*pbVar3 != 0) {
              *(byte *)((long)plVar35 + 0x361) = *pbVar3;
            }
            if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
              uVar27 = *(byte *)((long)plVar35 + 0x361) & 0xf;
              plVar32 = (long *)((long)plVar35 + 0x344);
              uVar17 = (uint)(*(byte *)((long)plVar35 + 0x361) >> 4);
              if (uVar27 == 0xf) {
                iVar15 = *(int *)((long)plVar35 + 0x344) + uVar17;
                *(int *)((long)plVar35 + 0x344) = iVar15;
              }
              else {
                iVar15 = *(int *)((long)plVar35 + 0x344);
                if (uVar17 == 0xf) {
                  iVar15 = iVar15 - uVar27;
                  *(int *)plVar32 = iVar15;
                }
              }
              if (iVar15 < 0x41) {
                if (iVar15 < 0) {
                  *(undefined4 *)plVar32 = 0;
                }
              }
              else {
LAB_10058c07c:
                *(undefined4 *)plVar32 = 0x40;
              }
            }
          }
          else if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            plVar32 = (long *)plVar35[1];
            bVar25 = *(byte *)((long)plVar35 + 0x361);
            if ((bVar25 & 0xf) == 0) {
              iVar15 = *(int *)((long)plVar35 + 0x344) + (uint)(bVar25 >> 4);
              *(int *)((long)plVar35 + 0x344) = iVar15;
            }
            else {
              iVar15 = *(int *)((long)plVar35 + 0x344);
            }
            if ((bVar25 & 0xf0) == 0) {
              iVar15 = iVar15 - (bVar25 & 0xf);
              *(int *)((long)plVar35 + 0x344) = iVar15;
            }
            if (iVar15 < 0x41) {
              if (-1 < iVar15) goto LAB_10058c1ac;
LAB_10058c1a8:
              *(undefined4 *)((long)plVar35 + 0x344) = 0;
            }
            else {
LAB_10058c198:
              *(undefined4 *)((long)plVar35 + 0x344) = 0x40;
            }
            goto LAB_10058c1ac;
          }
          break;
        case 5:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (*pbVar3 != 0) {
              *(byte *)((long)plVar35 + 0x35c) = *pbVar3;
            }
            if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
              bVar25 = *(byte *)((long)plVar35 + 0x35c);
              if ((bVar25 & 0xf0) == 0xe0) {
                uVar27 = bVar25 & 0xf;
              }
              else {
                if ((bVar25 & 0xf0) != 0xf0) break;
                uVar27 = (bVar25 & 0xf) << 2;
              }
              *(uint *)(local_a8 + 0x55) = (int)local_a8[0x55] + uVar27;
            }
          }
          else if ((*(byte *)((long)plVar35 + 0x35c) < 0xe0) &&
                  (*(char *)((long)local_a8 + 0x2a3) == '\0')) {
            *(uint *)(local_a8 + 0x55) =
                 (int)local_a8[0x55] + (uint)*(byte *)((long)plVar35 + 0x35c) * 4;
          }
          break;
        case 6:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (*pbVar3 != 0) {
              *(byte *)((long)plVar35 + 0x35c) = *pbVar3;
            }
            if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
              bVar25 = *(byte *)((long)plVar35 + 0x35c);
              if ((bVar25 & 0xf0) == 0xe0) {
                uVar27 = bVar25 & 0xf;
              }
              else {
                if ((bVar25 & 0xf0) != 0xf0) break;
                uVar27 = (bVar25 & 0xf) << 2;
              }
              *(uint *)(local_a8 + 0x55) = (int)local_a8[0x55] - uVar27;
            }
          }
          else if ((*(char *)((long)local_a8 + 0x2a3) == '\0') &&
                  (*(byte *)((long)plVar35 + 0x35c) < 0xe0)) {
            iVar15 = (int)local_a8[0x55] + (uint)*(byte *)((long)plVar35 + 0x35c) * -4;
            *(int *)(local_a8 + 0x55) = iVar15;
            bVar25 = *(byte *)((long)local_a8 + 0x2a4);
            plVar32 = local_a8;
            if (0 < iVar15) goto LAB_10058c10c;
LAB_10058c308:
            *(byte *)((long)local_a8 + 0x2a4) = bVar25 | 0x20;
          }
          break;
        case 7:
          if (*(int *)(param_1 + 0xd04) == 0) {
            bVar25 = *pbVar3;
            if (bVar25 != 0) {
              if ((uVar10 >> 5 & 1) == 0) {
                *(byte *)((long)plVar35 + 0x35c) = bVar25;
              }
              else {
                *(byte *)((long)plVar35 + 0x36c) = bVar25;
              }
            }
            *(undefined4 *)(plVar35 + 0x6d) = *(undefined4 *)((long)plVar35 + 0x33c);
            if (cVar29 != '\0') {
              *(undefined1 *)((long)plVar35 + 0x36d) = 0;
            }
          }
          else if ((*(char *)((long)local_a8 + 0x2a3) == '\0') &&
                  (*(char *)((long)plVar35 + 0x36d) == '\0')) {
            plVar32 = (long *)plVar35[1];
            iVar15 = (int)plVar32[0x55];
            iVar18 = (int)plVar35[0x6d];
            if (iVar15 < iVar18) {
              pbVar3 = (byte *)((long)plVar35 + 0x35c);
              if ((*(ushort *)(*plVar35 + 0xcfe) & 0x20) != 0) {
                pbVar3 = (byte *)((long)plVar35 + 0x36c);
              }
              iVar15 = iVar15 + (uint)*pbVar3 * 4;
              *(int *)(plVar32 + 0x55) = iVar15;
              if (iVar18 <= iVar15) {
LAB_10058c0fc:
                *(int *)(plVar32 + 0x55) = iVar18;
                *(undefined1 *)((long)plVar35 + 0x36d) = 1;
              }
            }
            else if (iVar18 < iVar15) {
              pbVar3 = (byte *)((long)plVar35 + 0x35c);
              if ((*(ushort *)(*plVar35 + 0xcfe) & 0x20) != 0) {
                pbVar3 = (byte *)((long)plVar35 + 0x36c);
              }
              iVar15 = iVar15 + (uint)*pbVar3 * -4;
              *(int *)(plVar32 + 0x55) = iVar15;
              if (iVar15 < iVar18) goto LAB_10058c0fc;
            }
            bVar25 = *(byte *)((long)plVar32 + 0x2a4);
LAB_10058c10c:
            *(byte *)((long)plVar32 + 0x2a4) = bVar25 | 1;
          }
          break;
        case 8:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (bVar30 != 0) {
              *(byte *)((long)plVar35 + 0x36f) = bVar30;
            }
            if ((bVar25 & 0xf) != 0) {
              *(char *)(plVar35 + 0x6e) = cVar7;
              uVar24 = 8;
LAB_10058bd00:
              *(undefined1 *)((long)plVar35 + 0x371) = uVar24;
            }
            goto LAB_10058bd04;
          }
LAB_10058b9ec:
          if (*(char *)((long)local_a8 + 0x2a3) != '\0') break;
LAB_10058c094:
          if (*(char *)((long)plVar35 + 0x371) == '\x15') {
            FUN_100589cd0();
          }
          else {
            FUN_100589bc8(plVar35);
          }
          break;
        case 9:
          if ((*(int *)(param_1 + 0xd04) == 0) && (*pbVar3 != 0)) {
            *(byte *)((long)plVar35 + 0x37f) = bVar30 + 1;
            *(char *)(plVar35 + 0x70) = cVar7 + '\x01';
          }
          if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            bVar25 = *(byte *)((long)plVar35 + 0x37e);
            if ((uint)*(byte *)((long)plVar35 + 0x37f) <= (uint)bVar25) {
              *(int *)((long)plVar35 + 0x34c) = -*(int *)((long)plVar35 + 0x344);
            }
            uVar27 = bVar25 + 1;
            *(char *)((long)plVar35 + 0x37e) = (char)uVar27;
            cVar29 = '\0';
            if ((uVar27 & 0xff) <
                (uint)*(byte *)(plVar35 + 0x70) + (uint)*(byte *)((long)plVar35 + 0x37f)) {
              cVar29 = bVar25 + 1;
            }
            *(char *)((long)plVar35 + 0x37e) = cVar29;
            plVar32 = local_a8;
LAB_10058c1ac:
            *(byte *)((long)plVar32 + 0x2a4) = *(byte *)((long)plVar32 + 0x2a4) | 2;
          }
          break;
        case 10:
          iVar15 = *(int *)(param_1 + 0xd04);
          if ((iVar15 == 0) && (*pbVar3 != 0)) {
            *(byte *)((long)plVar35 + 0x381) = *pbVar3;
          }
          if ((*(char *)((long)local_a8 + 0x2a3) == '\0') &&
             (bVar25 = *(byte *)((long)plVar35 + 0x381), bVar25 != 0)) {
            iVar15 = iVar15 % 3;
            if (iVar15 == 2) {
              if ((uVar10 >> 3 & 1) == 0) {
                uVar19 = (ulong)*(byte *)((long)plVar35 + 0x339);
                lVar34 = uVar19 + (bVar25 & 0xf);
LAB_10058be24:
                uVar31 = (ulong)*(uint *)(local_a8[0x52] + 8);
                iVar15 = 0;
                if (uVar31 != 0) {
                  iVar15 = (int)(((long)*(int *)(&DAT_10186d748 + lVar34 * 4) * 0x20ab) /
                                (long)uVar31);
                }
                iVar18 = 0;
                if (uVar31 != 0) {
                  iVar18 = (int)(((long)*(int *)(&DAT_10186d748 + uVar19 * 4) * 0x20ab) /
                                (long)uVar31);
                }
                *(int *)(local_a8 + 0x57) = (iVar15 - iVar18) + (int)local_a8[0x57];
              }
              else {
                *(uint *)(local_a8 + 0x57) = (int)local_a8[0x57] + (bVar25 & 0xf) * -0x40;
              }
            }
            else if (iVar15 == 1) {
              if ((uVar10 >> 3 & 1) == 0) {
                uVar19 = (ulong)*(byte *)((long)plVar35 + 0x339);
                lVar34 = uVar19 + (bVar25 >> 4);
                goto LAB_10058be24;
              }
              *(uint *)(local_a8 + 0x57) = (int)local_a8[0x57] + (uint)(bVar25 >> 4) * -0x40;
            }
            *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 1;
          }
          break;
        case 0xb:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (*pbVar3 != 0) {
              *(byte *)((long)plVar35 + 0x361) = *pbVar3;
            }
            if (*(char *)((long)local_a8 + 0x2a3) != '\0') break;
            uVar27 = *(byte *)((long)plVar35 + 0x361) & 0xf;
            piVar4 = (int *)((long)plVar35 + 0x344);
            uVar17 = (uint)(*(byte *)((long)plVar35 + 0x361) >> 4);
            if (uVar27 == 0xf) {
              iVar15 = *(int *)((long)plVar35 + 0x344) + uVar17;
              *(int *)((long)plVar35 + 0x344) = iVar15;
            }
            else {
              iVar15 = *(int *)((long)plVar35 + 0x344);
              if (uVar17 == 0xf) {
                iVar15 = iVar15 - uVar27;
                *piVar4 = iVar15;
              }
            }
            if (iVar15 < 0x41) {
              if (iVar15 < 0) {
                *piVar4 = 0;
              }
            }
            else {
              *piVar4 = 0x40;
            }
            uVar10 = uVar10 >> 4 & 1;
            goto joined_r0x00010058c090;
          }
          if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            if (*(char *)((long)plVar35 + 0x371) == '\x15') {
              FUN_100589cd0();
            }
            else {
              FUN_100589bc8(plVar35);
            }
            plVar32 = (long *)plVar35[1];
            bVar25 = *(byte *)((long)plVar35 + 0x361);
            if ((bVar25 & 0xf) == 0) {
              iVar15 = *(int *)((long)plVar35 + 0x344) + (uint)(bVar25 >> 4);
              *(int *)((long)plVar35 + 0x344) = iVar15;
            }
            else {
              iVar15 = *(int *)((long)plVar35 + 0x344);
            }
            if ((bVar25 & 0xf0) == 0) {
              iVar15 = iVar15 - (bVar25 & 0xf);
              *(int *)((long)plVar35 + 0x344) = iVar15;
            }
joined_r0x00010058c194:
            if (0x40 < iVar15) goto LAB_10058c198;
            if (iVar15 < 0) goto LAB_10058c1a8;
            goto LAB_10058c1ac;
          }
          break;
        case 0xc:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (*pbVar3 != 0) {
              *(byte *)((long)plVar35 + 0x361) = *pbVar3;
            }
            *(undefined4 *)(plVar35 + 0x6d) = *(undefined4 *)((long)plVar35 + 0x33c);
            if (cVar29 != '\0') {
              *(undefined1 *)((long)plVar35 + 0x36d) = 0;
            }
            if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
              uVar27 = *(byte *)((long)plVar35 + 0x361) & 0xf;
              plVar32 = (long *)((long)plVar35 + 0x344);
              uVar17 = (uint)(*(byte *)((long)plVar35 + 0x361) >> 4);
              if (uVar27 == 0xf) {
                iVar15 = *(int *)((long)plVar35 + 0x344) + uVar17;
                *(int *)((long)plVar35 + 0x344) = iVar15;
              }
              else {
                iVar15 = *(int *)((long)plVar35 + 0x344);
                if (uVar17 == 0xf) {
                  iVar15 = iVar15 - uVar27;
                  *(int *)plVar32 = iVar15;
                }
              }
              if (0x40 < iVar15) goto LAB_10058c07c;
              if (iVar15 < 0) {
                *(undefined4 *)plVar32 = 0;
              }
            }
          }
          else if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            plVar32 = (long *)plVar35[1];
            if (*(char *)((long)plVar35 + 0x36d) == '\0') {
              iVar15 = (int)plVar32[0x55];
              iVar18 = (int)plVar35[0x6d];
              if (iVar15 < iVar18) {
                pbVar3 = (byte *)((long)plVar35 + 0x35c);
                if ((*(ushort *)(*plVar35 + 0xcfe) & 0x20) != 0) {
                  pbVar3 = (byte *)((long)plVar35 + 0x36c);
                }
                iVar15 = iVar15 + (uint)*pbVar3 * 4;
                *(int *)(plVar32 + 0x55) = iVar15;
                if (iVar18 <= iVar15) {
LAB_10058c144:
                  *(int *)(plVar32 + 0x55) = iVar18;
                  *(undefined1 *)((long)plVar35 + 0x36d) = 1;
                }
              }
              else if (iVar18 < iVar15) {
                pbVar3 = (byte *)((long)plVar35 + 0x35c);
                if ((*(ushort *)(*plVar35 + 0xcfe) & 0x20) != 0) {
                  pbVar3 = (byte *)((long)plVar35 + 0x36c);
                }
                iVar15 = iVar15 + (uint)*pbVar3 * -4;
                *(int *)(plVar32 + 0x55) = iVar15;
                if (iVar15 < iVar18) goto LAB_10058c144;
              }
              *(byte *)((long)plVar32 + 0x2a4) = *(byte *)((long)plVar32 + 0x2a4) | 1;
            }
            bVar25 = *(byte *)((long)plVar35 + 0x361);
            if ((bVar25 & 0xf) == 0) {
              iVar15 = *(int *)((long)plVar35 + 0x344) + (uint)(bVar25 >> 4);
              *(int *)((long)plVar35 + 0x344) = iVar15;
            }
            else {
              iVar15 = *(int *)((long)plVar35 + 0x344);
            }
            if ((bVar25 & 0xf0) == 0) {
              iVar15 = iVar15 - (bVar25 & 0xf);
              *(int *)((long)plVar35 + 0x344) = iVar15;
            }
            goto joined_r0x00010058c194;
          }
          break;
        case 0xd:
          if (*(int *)(param_1 + 0xd04) == 0) {
            uVar27 = 0x40;
            if (*pbVar3 < 0x41) {
              uVar27 = (uint)*pbVar3;
            }
            *(uint *)((long)plVar35 + 0x354) = uVar27;
          }
          break;
        case 0xe:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (*pbVar3 != 0) {
              *(byte *)((long)plVar35 + 0x38c) = *pbVar3;
            }
            if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
              uVar27 = *(byte *)((long)plVar35 + 0x38c) & 0xf;
              uVar17 = (uint)(*(byte *)((long)plVar35 + 0x38c) >> 4);
              if (uVar27 == 0xf) {
                iVar15 = *(int *)((long)plVar35 + 0x354) + uVar17;
                goto LAB_10058c038;
              }
              if (uVar17 == 0xf) goto LAB_10058c030;
              goto LAB_10058c03c;
            }
          }
          else if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            bVar25 = *(byte *)((long)plVar35 + 0x38c);
            uVar27 = bVar25 & 0xf;
            if ((bVar25 & 0xf) == 0) {
              *(uint *)((long)plVar35 + 0x354) =
                   *(int *)((long)plVar35 + 0x354) + (uint)(bVar25 >> 4);
            }
            if ((bVar25 & 0xf0) == 0) {
LAB_10058c030:
              iVar15 = *(int *)((long)plVar35 + 0x354) - uVar27;
LAB_10058c038:
              *(int *)((long)plVar35 + 0x354) = iVar15;
            }
LAB_10058c03c:
            if (*(int *)((long)plVar35 + 0x354) < 0x41) {
              if (*(int *)((long)plVar35 + 0x354) < 0) {
                *(undefined4 *)((long)plVar35 + 0x354) = 0;
              }
            }
            else {
              *(undefined4 *)((long)plVar35 + 0x354) = 0x40;
            }
          }
          break;
        case 0xf:
          if ((*(int *)(param_1 + 0xd04) == 0) && (lVar34 = local_a8[0x52], lVar34 != 0)) {
            bVar25 = *pbVar3;
            uVar27 = (uint)bVar25;
            if (bVar25 == 0) {
              uVar27 = *(uint *)(plVar35 + 0x6a);
            }
            else {
              *(uint *)(plVar35 + 0x6a) = (uint)bVar25;
            }
            uVar27 = (uint)*(byte *)((long)plVar35 + 0x396) * 0x10000 + uVar27 * 0x100;
            uVar17 = *(int *)(lVar34 + 0x14) + *(int *)(lVar34 + 0x10);
            if (uVar17 <= uVar27) {
              uVar27 = uVar17 - 1;
            }
            *(uint *)(local_a8 + 0x58) = uVar27;
          }
          break;
        case 0x10:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (*pbVar3 != 0) {
              *(byte *)((long)plVar35 + 0x362) = *pbVar3;
            }
            if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
              uVar27 = *(byte *)((long)plVar35 + 0x362) & 0xf;
              plVar32 = plVar35 + 0x69;
              uVar17 = (uint)(*(byte *)((long)plVar35 + 0x362) >> 4);
              if (uVar27 == 0xf) {
                iVar15 = (int)plVar35[0x69] + uVar17;
                *(int *)(plVar35 + 0x69) = iVar15;
              }
              else {
                iVar15 = (int)plVar35[0x69];
                if (uVar17 == 0xf) {
                  iVar15 = iVar15 - uVar27;
                  *(int *)plVar32 = iVar15;
                }
              }
              if (0x40 < iVar15) goto LAB_10058c07c;
              if (iVar15 < 0) {
                *(undefined4 *)plVar32 = 0;
              }
            }
          }
          else if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            bVar25 = *(byte *)((long)plVar35 + 0x362);
            plVar32 = plVar35 + 0x69;
            if ((bVar25 & 0xf) == 0) {
              iVar15 = (int)plVar35[0x69] - (uint)(bVar25 >> 4);
              *(int *)(plVar35 + 0x69) = iVar15;
            }
            else {
              iVar15 = (int)plVar35[0x69];
            }
            if ((bVar25 & 0xf0) == 0) {
              iVar15 = iVar15 + (bVar25 & 0xf);
              *(int *)plVar32 = iVar15;
            }
            if (iVar15 < 0x41) {
              if (iVar15 < 0) {
                *(int *)plVar32 = 0;
              }
            }
            else {
              *(int *)plVar32 = 0x40;
            }
            *(byte *)(plVar35[1] + 0x2a4) = *(byte *)(plVar35[1] + 0x2a4) | 4;
          }
          break;
        case 0x11:
          if ((*(int *)(param_1 + 0xd04) == 0) && (*pbVar3 != 0)) {
            *(byte *)((long)plVar35 + 0x363) = bVar30;
            *(char *)((long)plVar35 + 0x364) = cVar7;
          }
          bVar25 = *(byte *)((long)plVar35 + 0x365);
          if (bVar25 != 0) {
            if ((*(char *)((long)local_a8 + 0x2a3) != '\0') ||
               (bVar30 = *(byte *)((long)plVar35 + 0x364), bVar30 == 0)) break;
            uVar27 = 0;
            if (bVar30 != 0) {
              uVar27 = (uint)bVar25 / (uint)bVar30;
            }
            if ((uint)bVar25 != uVar27 * bVar30) goto LAB_10058c644;
            if (*(char *)((long)plVar35 + 0x363) == '\0') {
              bVar30 = *(byte *)((long)local_a8 + 0x2a4);
            }
            else {
              switch(*(char *)((long)plVar35 + 0x363)) {
              case '\x01':
                iVar15 = *(int *)((long)plVar35 + 0x344) + -1;
                break;
              case '\x02':
                iVar15 = *(int *)((long)plVar35 + 0x344) + -2;
                break;
              case '\x03':
                iVar15 = *(int *)((long)plVar35 + 0x344) + -4;
                break;
              case '\x04':
                iVar15 = *(int *)((long)plVar35 + 0x344) + -8;
                break;
              case '\x05':
                iVar15 = *(int *)((long)plVar35 + 0x344) + -0x10;
                break;
              case '\x06':
                *(undefined4 *)((long)plVar35 + 0x344) = 0;
                goto LAB_10058c62c;
              case '\a':
                iVar15 = *(int *)((long)plVar35 + 0x344) >> 1;
                break;
              default:
                iVar15 = *(int *)((long)plVar35 + 0x344);
                goto LAB_10058c610;
              case '\t':
                iVar15 = *(int *)((long)plVar35 + 0x344) + 1;
                break;
              case '\n':
                iVar15 = *(int *)((long)plVar35 + 0x344) + 2;
                break;
              case '\v':
                iVar15 = *(int *)((long)plVar35 + 0x344) + 4;
                break;
              case '\f':
                iVar15 = *(int *)((long)plVar35 + 0x344) + 8;
                break;
              case '\r':
                iVar15 = *(int *)((long)plVar35 + 0x344) + 0x10;
                break;
              case '\x0f':
                iVar15 = *(int *)((long)plVar35 + 0x344) << 1;
              }
              *(int *)((long)plVar35 + 0x344) = iVar15;
LAB_10058c610:
              if (iVar15 < 0x41) {
                if (iVar15 < 0) {
                  *(undefined4 *)((long)plVar35 + 0x344) = 0;
                }
              }
              else {
                *(undefined4 *)((long)plVar35 + 0x344) = 0x40;
              }
LAB_10058c62c:
              bVar30 = *(byte *)((long)local_a8 + 0x2a4) | 2;
              *(byte *)((long)local_a8 + 0x2a4) = bVar30;
            }
            *(byte *)((long)local_a8 + 0x2a4) = bVar30 | 0xc;
          }
LAB_10058c644:
          *(byte *)((long)plVar35 + 0x365) = bVar25 + 1;
          break;
        case 0x12:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (bVar30 != 0) {
              *(byte *)((long)plVar35 + 0x373) = bVar30;
            }
            if ((bVar25 & 0xf) != 0) {
              *(char *)((long)plVar35 + 0x374) = cVar7;
            }
          }
          if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            FUN_100589dd4(plVar35);
          }
          break;
        case 0x13:
          bVar25 = *pbVar3;
          if (bVar25 == 0) {
            bVar25 = *(byte *)((long)plVar35 + 0x38d);
          }
          else {
            *(byte *)((long)plVar35 + 0x38d) = bVar25;
          }
          if ((bVar25 >> 4) - 3 < 0xc) {
            uVar27 = bVar25 & 0xf;
            switch((uint)(bVar25 >> 4)) {
            case 3:
              if (*(int *)(param_1 + 0xd04) == 0) {
                *(byte *)((long)plVar35 + 0x38f) = bVar25 & 3;
              }
              break;
            case 4:
              if (*(int *)(param_1 + 0xd04) == 0) {
                *(byte *)(plVar35 + 0x72) = bVar25 & 3;
              }
              break;
            case 5:
              if (*(int *)(param_1 + 0xd04) == 0) {
                *(byte *)((long)plVar35 + 0x391) = bVar25 & 3;
              }
              break;
            case 6:
              if (*(int *)(param_1 + 0xd04) == 0) {
                *(uint *)(param_1 + 0xd1c) = uVar27;
              }
              break;
            case 7:
              if (uVar27 < 9) {
                switch(uVar27) {
                case 0:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    for (plVar35 = (long *)*plVar32; plVar35 != plVar32; plVar35 = (long *)*plVar35)
                    {
                      if (*(char *)((long)plVar35 + 0x2a3) != '\0') {
                        *(byte *)((long)plVar35 + 0x2a4) = *(byte *)((long)plVar35 + 0x2a4) | 0x20;
                      }
                    }
                  }
                  break;
                case 1:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    plVar35 = (long *)*plVar32;
                    while (plVar35 != plVar32) {
                      if (*(char *)((long)plVar35 + 0x2a3) == '\0') {
LAB_10058c3cc:
                        plVar35 = (long *)*plVar35;
                      }
                      else {
                        lVar34 = *(long *)(param_1 + 0xa18);
                        *(undefined1 *)((long)plVar35 + 0x324) = 1;
                        if ((*(byte *)((long)plVar35 + 0x2a6) & 1) != 0) {
                          if ((*(byte *)(lVar34 + (ulong)*(byte *)(plVar35 + 0x54) * 0x618 + 0x400)
                               >> 2 & 1) != 0) {
                            *(undefined1 *)((long)plVar35 + 0x314) = 1;
                          }
                          goto LAB_10058c3cc;
                        }
                        *(undefined1 *)((long)plVar35 + 0x314) = 1;
                        plVar35 = (long *)*plVar35;
                      }
                    }
                  }
                  break;
                case 2:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    for (plVar35 = (long *)*plVar32; plVar35 != plVar32; plVar35 = (long *)*plVar35)
                    {
                      if (*(char *)((long)plVar35 + 0x2a3) != '\0') {
                        *(undefined1 *)((long)plVar35 + 0x314) = 1;
                      }
                    }
                  }
                  break;
                case 3:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    *(undefined1 *)((long)local_a8 + 0x2a5) = 0;
                  }
                  break;
                case 4:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    *(undefined1 *)((long)local_a8 + 0x2a5) = 1;
                  }
                  break;
                case 5:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    *(undefined1 *)((long)local_a8 + 0x2a5) = 2;
                  }
                  break;
                case 6:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    *(undefined1 *)((long)local_a8 + 0x2a5) = 3;
                  }
                  break;
                case 7:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    *(byte *)((long)local_a8 + 0x2a6) = *(byte *)((long)local_a8 + 0x2a6) & 0xfe;
                  }
                  break;
                case 8:
                  if ((*(int *)(param_1 + 0xd04) == 0) && ((uVar10 & 4) != 0)) {
                    *(byte *)((long)local_a8 + 0x2a6) = *(byte *)((long)local_a8 + 0x2a6) | 1;
                  }
                }
              }
              break;
            case 8:
              if (*(int *)(param_1 + 0xd04) == 0) {
                uVar27 = uVar27 << 2;
                goto LAB_10058ba64;
              }
              break;
            case 9:
              if ((*(int *)(param_1 + 0xd04) == 0) && (*(char *)((long)local_a8 + 0x2a3) == '\0')) {
                if (uVar27 < 0xe) {
                  if ((bVar25 & 0xf) == 0) {
                    *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 0x40;
                  }
                  else if (uVar27 == 1) {
                    *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 0x10;
                  }
                }
                else if (uVar27 == 0xe) {
                  *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 1;
                  *(undefined4 *)((long)local_a8 + 0x2c4) = 1;
                }
                else if (uVar27 == 0xf) {
                  *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 1;
                  *(undefined4 *)((long)local_a8 + 0x2c4) = 0xffffffff;
                }
              }
              break;
            case 10:
              if (*(int *)(param_1 + 0xd04) == 0) {
                *(char *)((long)plVar35 + 0x396) = (char)uVar27;
              }
              break;
            case 0xb:
              if (*(int *)(param_1 + 0xd04) == 0) {
                if ((bVar25 & 0xf) == 0) {
                  *(undefined4 *)((long)plVar35 + 900) = *(undefined4 *)(param_1 + 0xd10);
                }
                else {
                  if ((int)plVar35[0x71] != 0) {
                    uVar27 = (int)plVar35[0x71] - 1;
                  }
                  *(uint *)(plVar35 + 0x71) = uVar27;
                  if (uVar27 != 0) {
                    iVar15 = *(int *)((long)plVar35 + 900);
                    *(int *)(param_1 + 0xd20) = iVar15;
                    if ((*(long *)(param_1 + 0x2a8) != 0) && (iVar15 <= *(int *)(param_1 + 0xd10)))
                    {
                      _bzero((void *)(*(long *)(param_1 + 0x2a8) +
                                     (long)iVar15 + (long)(*(int *)(param_1 + 0xd14) << 8)),
                             (ulong)(uint)(*(int *)(param_1 + 0xd10) - iVar15) + 1);
                    }
                  }
                }
              }
              break;
            case 0xc:
              uVar17 = *(uint *)(param_1 + 0xd04);
              if ((uVar17 != 0) && ((uVar17 == uVar27 || (((bVar25 & 0xf) == 0 && (uVar17 == 1))))))
              {
                *(undefined4 *)((long)plVar35 + 0x344) = 0;
                bVar25 = *(byte *)((long)local_a8 + 0x2a4);
                goto LAB_10058c308;
              }
              break;
            case 0xe:
              if (*(int *)(param_1 + 0xd04) == 0) {
                *(uint *)(param_1 + 0xd18) = *(int *)(param_1 + 0xd08) * uVar27;
              }
            }
          }
          break;
        case 0x14:
          bVar25 = *pbVar3;
          uVar17 = (uint)bVar25;
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (bVar25 < 0x20) goto LAB_10058bcc8;
          }
          else {
            if (0x1f < bVar25) break;
LAB_10058bcc8:
            if (bVar30 == 0) {
              uVar17 = *(int *)(param_1 + 0xd0c) - uVar27;
            }
            else {
              if (uVar27 != 1) break;
              uVar17 = *(int *)(param_1 + 0xd0c) + 1;
            }
          }
          FUN_1005d93c8(param_1,uVar17);
          break;
        case 0x15:
          if (*(int *)(param_1 + 0xd04) != 0) goto LAB_10058b9ec;
          if (bVar30 != 0) {
            *(byte *)((long)plVar35 + 0x36f) = bVar30;
          }
          if ((bVar25 & 0xf) != 0) {
            *(char *)(plVar35 + 0x6e) = cVar7;
            uVar24 = 0x15;
            goto LAB_10058bd00;
          }
LAB_10058bd04:
          if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            uVar10 = uVar10 & 0x10;
joined_r0x00010058c090:
            if (uVar10 == 0) goto LAB_10058c094;
          }
          break;
        case 0x16:
          if (*(int *)(param_1 + 0xd04) == 0) {
            uVar27 = 0x80;
            if (*pbVar3 < 0x81) {
              uVar27 = (uint)*pbVar3;
            }
            *(uint *)(param_1 + 0xcf8) = uVar27;
          }
          break;
        case 0x17:
          if (*(int *)(param_1 + 0xd04) == 0) {
            bVar25 = *pbVar3;
            if (bVar25 == 0) {
              bVar25 = *(byte *)(param_1 + 0xcfc);
            }
            else {
              *(byte *)(param_1 + 0xcfc) = bVar25;
            }
            if ((bVar25 & 0xf) == 0xf) {
              iVar15 = *(int *)(param_1 + 0xcf8) + (uint)(bVar25 >> 4);
              *(int *)(param_1 + 0xcf8) = iVar15;
            }
            else {
              if (bVar25 >> 4 != 0xf) goto LAB_10058bde8;
              iVar15 = *(int *)(param_1 + 0xcf8) - (bVar25 & 0xf);
              *(int *)(param_1 + 0xcf8) = iVar15;
            }
          }
          else {
            bVar25 = *(byte *)(param_1 + 0xcfc);
            if ((bVar25 & 0xf) == 0) {
              *(uint *)(param_1 + 0xcf8) = *(int *)(param_1 + 0xcf8) + (uint)(bVar25 >> 4);
            }
            if ((bVar25 & 0xf0) == 0) {
              iVar15 = *(int *)(param_1 + 0xcf8) - (bVar25 & 0xf);
              *(int *)(param_1 + 0xcf8) = iVar15;
            }
            else {
LAB_10058bde8:
              iVar15 = *(int *)(param_1 + 0xcf8);
            }
          }
          if (iVar15 < 0x81) {
            if (iVar15 < 0) {
              *(undefined4 *)(param_1 + 0xcf8) = 0;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0xcf8) = 0x80;
          }
          break;
        case 0x18:
          if (*(int *)(param_1 + 0xd04) == 0) {
            uVar27 = (uint)(*pbVar3 >> 2);
LAB_10058ba64:
            *(uint *)(plVar35 + 0x69) = uVar27;
            if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
              *(uint *)(local_a8 + 0x56) = uVar27;
              *(byte *)((long)local_a8 + 0x2a4) = *(byte *)((long)local_a8 + 0x2a4) | 0x44;
            }
          }
          break;
        case 0x19:
          if (*(int *)(param_1 + 0xd04) == 0) {
            if (bVar30 != 0) {
              *(byte *)((long)plVar35 + 0x37c) = bVar30;
            }
            if ((bVar25 & 0xf) != 0) {
              *(char *)((long)plVar35 + 0x37d) = cVar7;
            }
          }
          if (*(char *)((long)local_a8 + 0x2a3) == '\0') {
            FUN_100589ed0(plVar35);
          }
        }
switchD_10058bca8_caseD_d:
        lVar28 = lVar28 + 1;
        uVar19 = (ulong)*(int *)(param_1 + 0x4e0);
      } while (lVar28 < (long)uVar19);
    }
    if (0 < (int)uVar19 && param_2 != 0) {
      lVar28 = 0;
      do {
        if (-1 < *(char *)(param_1 + lVar28 + 0x980)) {
          lVar34 = *(long *)(param_1 + lVar28 * 8 + 0x4e8);
          plVar32 = (long *)(lVar34 + 8);
          if ((long *)*plVar32 != plVar32) {
            plVar35 = (long *)*plVar32;
            do {
              plVar33 = (long *)*plVar35;
              if (plVar35[0x52] == 0) {
                *(byte *)((long)plVar35 + 0x2a4) = *(byte *)((long)plVar35 + 0x2a4) & 0xf7;
              }
              if ((*(byte *)(param_1 + 0xcfe) >> 2 & 1) == 0) {
                lVar16 = 0;
              }
              else {
                uVar19 = (ulong)*(byte *)(plVar35 + 0x54);
                lVar23 = *(long *)(param_1 + 0xa18);
                if ((*(byte *)((long)plVar35 + 0x2a6) & 1) != 0) {
                  if ((char)plVar35[0x5c] == '\0') {
                    FUN_100589ff0();
                  }
                  else {
                    *(undefined1 *)((long)plVar35 + 0x314) = 1;
                    if ((int)plVar35[0x5b] == 0) {
                      *(byte *)((long)plVar35 + 0x2a4) = *(byte *)((long)plVar35 + 0x2a4) | 0x20;
                    }
                  }
                }
                lVar16 = lVar23 + uVar19 * 0x618;
                if (((*(byte *)(lVar23 + uVar19 * 0x618 + 0x457) & 1) != 0) &&
                   ((char)plVar35[0x5f] == '\0')) {
                  FUN_100589ff0();
                }
                if (((*(byte *)(lVar23 + uVar19 * 0x618 + 0x4af) & 1) != 0) &&
                   ((char)plVar35[0x62] == '\0')) {
                  FUN_10058a198(param_1,plVar35,lVar16,*(undefined1 *)(lVar34 + 0x339));
                }
                if (*(char *)((long)plVar35 + 0x314) != '\0') {
                  iVar18 = (int)plVar35[99] - (uint)*(ushort *)(lVar23 + uVar19 * 0x618 + 0x50c);
                  iVar15 = 0;
                  if (-1 < iVar18) {
                    iVar15 = iVar18;
                  }
                  *(int *)(plVar35 + 99) = iVar15;
                  if (iVar15 == 0) {
                    bVar25 = *(byte *)((long)plVar35 + 0x2a4) | 0x20;
                  }
                  else {
                    bVar25 = *(byte *)((long)plVar35 + 0x2a4) | 2;
                  }
                  *(byte *)((long)plVar35 + 0x2a4) = bVar25;
                }
              }
              FUN_10058a538();
              if ((int)plVar35[0x55] + (int)plVar35[0x57] == 0) {
                *(byte *)((long)plVar35 + 0x2a4) = *(byte *)((long)plVar35 + 0x2a4) & 0xfe;
              }
              if (*(char *)((long)plVar35 + 0x2a3) == '\0') {
                iVar15 = *(int *)(lVar34 + 0x34c);
                *(undefined4 *)((long)plVar35 + 0x2ac) = *(undefined4 *)(lVar34 + 0x344);
              }
              else {
                iVar15 = 0;
              }
              if ((*(byte *)((long)plVar35 + 0x2a4) >> 3 & 1) != 0) {
                if (lVar16 == 0) {
                  bVar14 = false;
                  lVar23 = 0;
                }
                else {
                  uVar17 = *(uint *)(lVar16 + 0x608) >> 7 & 1;
                  uVar27 = 0;
                  if (*(uint *)(lVar16 + 0x608) != 0xff) {
                    uVar27 = uVar17;
                  }
                  if ((*(byte *)(lVar16 + 0x4af) & 0x10) == 0) {
                    uVar17 = uVar27;
                  }
                  bVar14 = uVar17 != 0;
                  if ((char)*(byte *)(lVar16 + 0x610) < '\0') {
                    lVar23 = *(long *)(param_1 + (ulong)(*(byte *)(lVar16 + 0x610) & 0x7f) * 8 +
                                      0x4558);
                  }
                  else {
                    lVar23 = 0;
                  }
                }
                iVar18 = *(int *)(param_1 + lVar28 * 4 + 0x46f0);
                if (iVar18 != 0) {
                  lVar23 = *(long *)(param_1 + (ulong)(iVar18 - 1) * 8 + 0x4560);
                }
                if (lVar23 == 0) {
                  lVar23 = 0;
                }
                else if ((*(byte *)(lVar23 + 0x268) & 1) != 0) {
                  lVar23 = 0;
                }
                FUN_1005d95a4(param_1,plVar35[0x52],plVar35,bVar14,lVar23);
                if (*(int *)((long)plVar35 + 0x2c4) < 0) {
                  FUN_100583820(plVar35 + 4,*(int *)(*(long *)plVar35[0x52] + 0x3c) + -1,2);
                }
              }
              bVar25 = *(byte *)((long)plVar35 + 0x2a4);
              if ((bVar25 >> 1 & 1) != 0) {
                if ((*(byte *)(param_1 + 0xcfe) >> 2 & 1) == 0) {
                  fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xcf4));
                  fVar37 = (float)(*(int *)((long)plVar35 + 0x2ac) + iVar15) *
                           (float)(int)plVar35[0x59] * (float)*(int *)(lVar34 + 0x354) *
                           (float)*(int *)(param_1 + 0xcf8) * fVar37 * 1.1641532e-10;
                }
                else {
                  fVar37 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xcf4));
                  fVar37 = fVar37 * (float)*(int *)(param_1 + 0xcf8) *
                                    (float)*(int *)(lVar34 + 0x354) *
                                    (float)(int)plVar35[0x59] *
                                    (float)(int)plVar35[99] *
                                    (float)(int)plVar35[0x5b] *
                                    (float)(*(int *)((long)plVar35 + 0x2ac) + iVar15) *
                           1.7763568e-15;
                }
                FUN_1005847b8(fVar37 * *(float *)(lVar34 + 0x358),plVar35 + 4,0);
                bVar25 = *(byte *)((long)plVar35 + 0x2a4);
              }
              if ((bVar25 >> 2 & 1) != 0) {
                iVar15 = *(int *)((long)plVar35 + 700) + (int)plVar35[0x56];
                if ((*(byte *)(param_1 + 0xcfe) >> 2 & 1) != 0) {
                  iVar15 = (int)plVar35[0x5e] + iVar15;
                }
                (**(code **)(plVar35[4] + 0xa8))((float)iVar15 / 31.5 + -1.0);
                bVar25 = *(byte *)((long)plVar35 + 0x2a4);
              }
              if ((bVar25 & 1) != 0) {
                if ((*(ushort *)(param_1 + 0xcfe) >> 2 & 1) == 0) {
                  iVar15 = (int)plVar35[0x57] + (int)plVar35[0x55];
                }
                else {
                  iVar15 = (int)plVar35[0x57] + (int)plVar35[0x55];
                  if ((*(byte *)(lVar16 + 0x4af) >> 4 & 1) == 0) {
                    iVar15 = iVar15 - (int)plVar35[0x61];
                  }
                }
                if ((*(ushort *)(param_1 + 0xcfe) >> 3 & 1) == 0) {
                  iVar18 = 0;
                  if (iVar15 != 0) {
                    iVar18 = 0xda7600 / iVar15;
                  }
                }
                else {
                  fVar37 = (float)_exp2f((3840.0 - (float)iVar15) / 768.0);
                  iVar18 = (int)(fVar37 * 8363.0);
                }
                iVar15 = -iVar18;
                if (-1 < *(int *)((long)plVar35 + 0x2c4)) {
                  iVar15 = iVar18;
                }
                FUN_100581c98((float)iVar15,plVar35 + 4);
              }
              if (lVar16 != 0) {
                uVar27 = *(uint *)(lVar16 + 0x608);
                if ((*(byte *)(lVar16 + 0x4af) >> 4 & 1) == 0) {
                  if ((uVar27 != 0xff) && ((uVar27 & 0x80) != 0)) {
                    iVar15 = 0x100;
LAB_10058cb28:
                    if ((*(byte *)(param_1 + 0xcff) >> 4 & 1) == 0) {
                      local_d8 = 12288.0;
                    }
                    else {
                      local_d8 = 10240.0;
                    }
                    fVar36 = (float)_exp2f((float)((uVar27 & 0x7f) * (iVar15 + 0x100)) / local_d8 +
                                           0.25);
                    fVar37 = 120.0;
                    if (120.0 <= fVar36 * 110.0) {
                      fVar37 = fVar36 * 110.0;
                    }
                    fVar36 = 20000.0;
                    if (fVar37 <= 20000.0) {
                      fVar36 = fVar37;
                    }
                    fVar37 = (float)*(int *)(*(long *)(param_1 + 8) + 0x108);
                    if (fVar37 < fVar36 + fVar36) {
                      fVar36 = fVar37 * 0.5;
                    }
                    if (*(long *)(param_1 + 0x708) != 0) {
                      uVar27 = *(uint *)(lVar16 + 0x60c);
                      FUN_1005cef0c(fVar36,*(undefined8 *)
                                            (*(long *)(param_1 + 0x708) +
                                            (long)(int)plVar35[0x35] * 8),0);
                      FUN_1005cef0c((float)(uVar27 & 0x7f),
                                    *(undefined8 *)
                                     (*(long *)(param_1 + 0x708) + (long)(int)plVar35[0x35] * 8),1);
                    }
                  }
                }
                else if ((uVar27 & 0x80) != 0) {
                  iVar18 = (int)plVar35[0x61];
                  iVar15 = iVar18 + 3;
                  if (-1 < iVar18) {
                    iVar15 = iVar18;
                  }
                  iVar15 = iVar15 >> 2;
                  goto LAB_10058cb28;
                }
              }
              if ((*(byte *)((long)plVar35 + 0x2a4) >> 5 & 1) != 0) {
                plVar22 = plVar35 + 4;
                if (*(long *)(param_1 + 0x708) != 0) {
                  (**(code **)(*plVar22 + 0x110))
                            (plVar22,*(undefined8 *)
                                      (*(long *)(param_1 + 0x708) + (long)(int)plVar35[0x35] * 8));
                }
                FUN_100582560(plVar22,0);
                *(undefined4 *)(plVar35 + 0x58) = 0;
              }
              *(undefined1 *)((long)plVar35 + 0x2a4) = 0;
              FUN_1005d9514(plVar35);
              plVar35 = plVar33;
            } while (plVar33 != plVar32);
            uVar19 = (ulong)*(uint *)(param_1 + 0x4e0);
          }
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 < (int)uVar19);
    }
  }
  return 0;
}




void FUN_10058cd58(undefined4 *param_1,uint param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  void *pvVar15;
  void *pvVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 in_x7;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  undefined4 *puVar30;
  long lVar31;
  float fVar32;
  void *local_798;
  undefined4 *local_790;
  uint local_784;
  undefined4 *local_778;
  long local_770;
  long local_768;
  long local_760;
  long local_758;
  long local_750;
  void *local_748;
  void *local_740;
  int local_738;
  uint local_734;
  undefined4 local_730;
  uint local_72c;
  undefined8 local_728;
  long local_720;
  uint local_714;
  undefined2 local_710;
  ushort local_70e;
  int local_70c;
  undefined2 local_708;
  undefined2 local_706;
  undefined2 local_704;
  byte local_701;
  long local_700;
  long local_6f8;
  long local_6f0;
  uint local_6e8;
  char local_6e4;
  char local_6e3;
  char local_6e2;
  char local_6e1;
  uint local_6e0;
  uint local_6dc;
  int local_6d8;
  int local_6d4;
  int local_6d0;
  int local_6cc;
  undefined4 local_6c8;
  uint local_6c4;
  undefined4 local_6c0;
  ushort local_6ba;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined1 auStack_2b2 [26];
  byte abStack_298 [256];
  undefined1 auStack_198 [256];
  long local_98;
  
  lVar31 = *(long *)PTR____stack_chk_guard_101444218;
  local_98 = lVar31;
  _memset(abStack_298,0,0x100);
  local_6ba = 0;
  plVar12 = *(long **)(param_1 + 100);
  if ((*(uint *)((long)plVar12 + 0x1a4) & 1) == 0) {
    uVar13 = 0x13;
  }
  else {
    param_1[0x14] = 6;
    *(undefined8 *)(param_1 + 0x5a) = 0;
    *(undefined8 *)(param_1 + 0x62) = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x56) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x52) = 0;
    param_1[0x10] = 2;
    *(undefined **)(param_1 + 10) = PTR_defaultFileRead_101444158;
    *(undefined **)(param_1 + 0xc) = PTR_defaultFileSeek_101444160;
    *(undefined **)(param_1 + 0xe) = PTR_defaultMetaData_101444168;
    uVar13 = (**(code **)(*plVar12 + 0x18))(plVar12,&local_6c8);
    if ((((int)uVar13 == 0) &&
        (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0,0), (int)uVar13 == 0)) &&
       (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_198,1,4,0), (int)uVar13 == 0))
    {
      iVar9 = FUN_1005ed0f8(auStack_198,"IMPM",4);
      if (iVar9 == 0) {
        uVar13 = (**(code **)(**(long **)(param_1 + 100) + 0x18))
                           (*(long **)(param_1 + 100),&local_6c0);
        if ((int)uVar13 == 0) {
          _bzero(param_1 + 0x13a,0x200);
          *(undefined8 *)(param_1 + 0xa6) = 0;
          param_1[0x33b] = 0x3f800000;
          param_1[0x25e] = 6;
          param_1[0x25f] = 0x7d;
          *(undefined1 *)(param_1 + 0x280) = 0x40;
          param_1[0x282] = 0;
          param_1[0x33a] = 0;
          param_1[0x285] = 0;
          param_1[0x138] = 0x40;
          param_1[0x33d] = 0x80;
          *(undefined8 *)(param_1 + 0x1150) = 0;
          _bzero(param_1 + 0x28a,0x180);
          _memset(&DAT_101e97040,0xff,0x400);
          _bzero(param_1 + 0xec,0x130);
          *(undefined4 **)(param_1 + 2) = param_1 + 0xec;
          param_1[0x12f] = local_6c8;
          param_1[0x12e] = *(undefined4 *)(*(long *)(param_1 + 0x12) + 0x708);
          uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x66,1,0x1a,0);
          if (((int)uVar13 == 0) &&
             (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1), (int)uVar13 == 0)) {
            uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),param_1 + 0x281);
            if ((int)uVar13 == 0) {
              piVar1 = param_1 + 0x284;
              uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar1);
              if ((int)uVar13 == 0) {
                piVar2 = param_1 + 0x285;
                uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),piVar2);
                if ((((int)uVar13 == 0) &&
                    (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),&local_6ba),
                    (int)uVar13 == 0)) &&
                   ((uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1), (int)uVar13 == 0 &&
                    (uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),&local_6cc),
                    (int)uVar13 == 0)))) {
                  uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                         (char *)((long)param_1 + 0xcfe));
                  if (((((((int)uVar13 == 0) &&
                         (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1),
                         (int)uVar13 == 0)) &&
                        (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),param_1 + 0x280),
                        (int)uVar13 == 0)) &&
                       ((uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),param_1 + 0x33d),
                        (int)uVar13 == 0 &&
                        (uVar13 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),param_1 + 0x25e),
                        (int)uVar13 == 0)))) &&
                      ((uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),param_1 + 0x25f),
                       (int)uVar13 == 0 &&
                       ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0), (int)uVar13 == 0
                        && (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                           (int)uVar13 == 0)))))) &&
                     (((uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),&local_6d4),
                       (int)uVar13 == 0 &&
                       (((uVar13 = FUN_1005d1ce4(*(undefined8 *)(param_1 + 100),&local_6d0),
                         (int)uVar13 == 0 &&
                         (uVar13 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),0), (int)uVar13 == 0
                         )) && (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                       param_1 + 0x260,1,0x40,0), (int)uVar13 == 0))
                       )) && ((uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0x270
                                                      ,1,0x40,0), (int)uVar13 == 0 &&
                              (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),param_1 + 0xac,
                                                      1,param_1[0x281],0), (int)uVar13 == 0)))))) {
                    iVar9 = param_1[0x281];
                    if (iVar9 < 1) {
                      iVar10 = 0;
                    }
                    else {
                      lVar27 = 0;
                      iVar24 = 0;
                      do {
                        iVar10 = (int)lVar27;
                        if (*(char *)((long)param_1 + lVar27 + 0x2b0) == -1) {
                          iVar10 = iVar24;
                        }
                        if (lVar27 <= iVar24) {
                          iVar10 = iVar24;
                        }
                        lVar27 = lVar27 + 1;
                        iVar24 = iVar10;
                      } while (lVar27 < iVar9);
                    }
                    param_1[0x281] = iVar10 + 1;
                    uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e96440,4,
                                           param_1[0x284],0);
                    if ((((((int)uVar13 == 0) &&
                          (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e96c40,4,
                                                  param_1[0x285],0), (int)uVar13 == 0)) &&
                         ((uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&DAT_101e96840,4,
                                                  local_6ba,0), (int)uVar13 == 0 &&
                          (((uVar13 = FUN_1005d1c5c(*(undefined8 *)(param_1 + 100),&local_6d8),
                            (int)uVar13 == 0 &&
                            (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_6d8 << 3,1)
                            , (int)uVar13 == 0)) &&
                           (uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_6c4),
                           (int)uVar13 == 0)))))) &&
                        (((local_6d0 - 1U < local_6c4 || (DAT_101e96440 - 1U < local_6c4)) ||
                         ((DAT_101e96c40 <= local_6c4 ||
                          (((DAT_101e96840 <= local_6c4 || (-1 < *(char *)((long)param_1 + 0xcfe)))
                           || (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0x1320,1),
                              (int)uVar13 == 0)))))))) &&
                       (uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_6c4),
                       (int)uVar13 == 0)) {
                      _memset(auStack_198,0,0x100);
                      if ((((local_6c4 <= local_6d0 - 1U) && (local_6c4 <= DAT_101e96440 - 1U)) &&
                          (local_6c4 < DAT_101e96c40)) && (local_6c4 < DAT_101e96840)) {
                        uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_198,1,4,0);
                        if ((int)uVar13 != 0) goto LAB_10058f7a0;
                        iVar9 = FUN_1005ed0f8(auStack_198,"PNAM",4);
                        uVar14 = *(undefined8 *)(param_1 + 100);
                        if (iVar9 == 0) {
                          uVar13 = FUN_1005d1ca0(uVar14,&local_6dc);
                          if ((int)uVar13 != 0) goto LAB_10058f7a0;
                          uVar14 = *(undefined8 *)(param_1 + 100);
                          uVar19 = 1;
                        }
                        else {
                          uVar19 = 0;
                          local_6dc = local_6c4;
                        }
                        uVar13 = FUN_1005d1d28(uVar14,local_6dc,uVar19);
                        if ((int)uVar13 != 0) goto LAB_10058f7a0;
                      }
                      uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_6c4);
                      if ((int)uVar13 == 0) {
                        if (((local_6c4 <= local_6d0 - 1U) && (local_6c4 <= DAT_101e96440 - 1U)) &&
                           ((local_6c4 < DAT_101e96c40 && (local_6c4 < DAT_101e96840)))) {
                          uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),auStack_198,1,4,0);
                          if ((int)uVar13 != 0) goto LAB_10058f7a0;
                          iVar9 = FUN_1005ed0f8(auStack_198,"CNAM",4);
                          uVar14 = *(undefined8 *)(param_1 + 100);
                          if (iVar9 == 0) {
                            uVar13 = FUN_1005d1ca0(uVar14,&local_6e0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            uVar14 = *(undefined8 *)(param_1 + 100);
                            uVar19 = 1;
                          }
                          else {
                            uVar19 = 0;
                            local_6e0 = local_6c4;
                          }
                          uVar13 = FUN_1005d1d28(uVar14,local_6e0,uVar19);
                          if ((int)uVar13 != 0) goto LAB_10058f7a0;
                        }
                        uVar13 = FUN_1005d1ea8(*(undefined8 *)(param_1 + 100),&local_6c4);
                        if ((int)uVar13 == 0) {
                          if (local_6c4 <= local_6d0 - 1U) {
                            while ((local_6c4 <= DAT_101e96440 - 1U &&
                                   (local_6c4 < DAT_101e96c40 && local_6c4 < DAT_101e96840))) {
                              uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),&local_6e4,1,4,0
                                                    );
                              if (((int)uVar13 != 0) ||
                                 (uVar13 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),&local_6e8),
                                 (int)uVar13 != 0)) goto LAB_10058f7a0;
                              if (local_6e4 == 'F') {
                                if (((local_6e3 != 'X') || (local_6e2 < '0')) || (local_6e1 < '0'))
                                break;
                                iVar9 = (int)local_6e1 + local_6e2 * 10 + -0x210;
                                if ((0x31 < iVar9) || (local_6e8 < 0x84)) {
                                  uVar14 = *(undefined8 *)(param_1 + 100);
                                  goto LAB_10058d77c;
                                }
                                pvVar15 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                 (PTR_DAT_10186d408 + 0xd8),
                                                                local_6e8,
                                                                                                                                
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1121,0);
                                if (pvVar15 == (void *)0x0) {
                                  uVar13 = 0x1f;
                                  goto LAB_10058f7a0;
                                }
                                uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),pvVar15,1,
                                                       local_6e8,0);
                                if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                uVar20 = *(uint *)((long)pvVar15 + 0x80);
                                lVar27 = (long)pvVar15 + 0x40;
                                iVar10 = FUN_1005ed0f8(lVar27,"Echo",4);
                                if (iVar10 == 0 && uVar20 == 0x18) {
                                  plVar12 = (long *)(param_1 + (long)iVar9 * 2 + 0x1158);
                                  if (*(long *)(param_1 + (long)iVar9 * 2 + 0x1158) == 0) {
                                    lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8)
                                                           ,0x2e0,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1136,0);
                                    *plVar12 = lVar27;
                                    if (lVar27 == 0) {
                                      uVar13 = 0x26;
                                      goto LAB_10058f7a0;
                                    }
                                  }
                                  FUN_10057f888();
                                  *(undefined4 *)(*plVar12 + 0x1e8) = 0x1010101;
                                  _memcpy((void *)(*plVar12 + 0x260),pvVar15,0x80);
                                  if ((ulong)uVar20 <= (ulong)local_6e8 - 0x84) {
                                    pvVar16 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                     (PTR_DAT_10186d408 + 0xd8),0x18
                                                                    ,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1151,0);
                                    if (pvVar16 == (void *)0x0) {
                                      uVar13 = 0x26;
                                      goto LAB_10058f7a0;
                                    }
                                    _memcpy(pvVar16,(void *)((long)pvVar15 + 0x84),(ulong)uVar20);
                                    *(undefined4 *)(*plVar12 + 0x30) = 0x3f800000;
                                    uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),0x11,
                                                           &local_6f0);
                                    if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                    *(ushort *)(local_6f0 + 0x3c) =
                                         *(ushort *)(local_6f0 + 0x3c) | 0x400;
                                    lVar27 = *plVar12;
                                    *(long *)(lVar27 + 0x230) = local_6f0;
                                    *(long *)(lVar27 + 0x238) = local_6f0;
                                    *(undefined8 *)(lVar27 + 0x248) = 0;
                                    *(undefined8 *)(lVar27 + 0x240) = 0;
                                    uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 4) * 100.0,
                                                           local_6f0,0);
                                    if ((((int)uVar13 != 0) ||
                                        (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 8) *
                                                                100.0,local_6f0,1), (int)uVar13 != 0
                                        )) || ((uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 +
                                                                                 0xc) * 2000.0,
                                                                       local_6f0,2),
                                               (int)uVar13 != 0 ||
                                               ((uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 +
                                                                                  0x10) * 2000.0,
                                                                        local_6f0,3),
                                                (int)uVar13 != 0 ||
                                                (uVar13 = FUN_1005cef0c(*(undefined4 *)
                                                                         ((long)pvVar16 + 0x14),
                                                                        local_6f0,4),
                                                (int)uVar13 != 0)))))) goto LAB_10058f7a0;
                                    uVar14 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
                                    uVar19 = 0x117e;
LAB_10058dad4:
                                    FUN_1005d7f1c(uVar14,pvVar16,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,uVar19);
                                  }
                                }
                                else {
                                  iVar10 = FUN_1005ed0f8(lVar27,"Flanger",7);
                                  if ((iVar10 == 0) && (uVar20 == 0x20)) {
                                    plVar12 = (long *)(param_1 + (long)iVar9 * 2 + 0x1158);
                                    if (*(long *)(param_1 + (long)iVar9 * 2 + 0x1158) == 0) {
                                      lVar27 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),0x2e0,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1186,0);
                                      *plVar12 = lVar27;
                                      if (lVar27 == 0) {
                                        uVar13 = 0x26;
                                        goto LAB_10058f7a0;
                                      }
                                    }
                                    FUN_10057f888();
                                    *(undefined4 *)(*plVar12 + 0x1e8) = 0x1010101;
                                    _memcpy((void *)(*plVar12 + 0x260),pvVar15,0x80);
                                    if (0x1f < (ulong)local_6e8 - 0x84) {
                                      pvVar16 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                       (PTR_DAT_10186d408 + 0xd8),
                                                                      0x20,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x11a1,0);
                                      if (pvVar16 == (void *)0x0) {
                                        uVar13 = 0x26;
                                      }
                                      else {
                                        _memcpy(pvVar16,(void *)((long)pvVar15 + 0x84),0x20);
                                        *(undefined4 *)(*plVar12 + 0x30) = 0x3f800000;
                                        uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),8,
                                                               &local_6f8);
                                        if ((int)uVar13 == 0) {
                                          *(ushort *)(local_6f8 + 0x3c) =
                                               *(ushort *)(local_6f8 + 0x3c) | 0x400;
                                          lVar27 = *plVar12;
                                          *(long *)(lVar27 + 0x230) = local_6f8;
                                          *(long *)(lVar27 + 0x238) = local_6f8;
                                          *(undefined8 *)(lVar27 + 0x248) = 0;
                                          *(undefined8 *)(lVar27 + 0x240) = 0;
                                          uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 4) *
                                                                 100.0,local_6f8,0);
                                          if ((((int)uVar13 == 0) &&
                                              (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 +
                                                                                0x10) *
                                                                      *(float *)((long)pvVar16 +
                                                                                0x1c) * 0.5,
                                                                      local_6f8,1), (int)uVar13 == 0
                                              )) && (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16
                                                                                      + 0xc) * 10.0,
                                                                            local_6f8,2),
                                                    (int)uVar13 == 0)) {
                                            uVar14 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
                                            uVar19 = 0x11c9;
                                            goto LAB_10058dad4;
                                          }
                                        }
                                      }
                                      goto LAB_10058f7a0;
                                    }
                                  }
                                  else {
                                    iVar10 = FUN_1005ed0f8(lVar27,"Chorus",6);
                                    if ((iVar10 == 0) && (uVar20 == 0x20)) {
                                      plVar12 = (long *)(param_1 + (long)iVar9 * 2 + 0x1158);
                                      if (*(long *)(param_1 + (long)iVar9 * 2 + 0x1158) == 0) {
                                        lVar27 = FUN_1005d7a5c(*(undefined8 *)
                                                                (PTR_DAT_10186d408 + 0xd8),0x2e0,
                                                                                                                              
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x11d1,0);
                                        *plVar12 = lVar27;
                                        if (lVar27 == 0) {
                                          uVar13 = 0x26;
                                          goto LAB_10058f7a0;
                                        }
                                      }
                                      FUN_10057f888();
                                      *(undefined4 *)(*plVar12 + 0x1e8) = 0x1010101;
                                      _memcpy((void *)(*plVar12 + 0x260),pvVar15,0x80);
                                      if (0x1f < (ulong)local_6e8 - 0x84) {
                                        pvVar16 = (void *)FUN_1005d7a5c(*(undefined8 *)
                                                                         (PTR_DAT_10186d408 + 0xd8),
                                                                        0x20,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x11ec,0);
                                        if (pvVar16 == (void *)0x0) {
                                          uVar13 = 0x26;
                                        }
                                        else {
                                          _memcpy(pvVar16,(void *)((long)pvVar15 + 0x84),0x20);
                                          *(undefined4 *)(*plVar12 + 0x30) = 0x3f800000;
                                          uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),0xe
                                                                 ,&local_700);
                                          if ((int)uVar13 == 0) {
                                            *(ushort *)(local_700 + 0x3c) =
                                                 *(ushort *)(local_700 + 0x3c) | 0x400;
                                            lVar27 = *plVar12;
                                            *(long *)(lVar27 + 0x230) = local_700;
                                            *(long *)(lVar27 + 0x238) = local_700;
                                            *(undefined8 *)(lVar27 + 0x248) = 0;
                                            *(undefined8 *)(lVar27 + 0x240) = 0;
                                            fVar32 = *(float *)((long)pvVar16 + 4) * 200.0;
                                            if (100.0 <= fVar32) {
                                              fVar32 = 100.0;
                                            }
                                            uVar13 = FUN_1005cef0c(fVar32,local_700,0);
                                            if ((((int)uVar13 == 0) &&
                                                (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 + 8
                                                                                  ) * 100.0,
                                                                        local_700,2),
                                                (int)uVar13 == 0)) &&
                                               (uVar13 = FUN_1005cef0c(*(float *)((long)pvVar16 +
                                                                                 0xc) * 10.0,
                                                                       local_700,1),
                                               (int)uVar13 == 0)) {
                                              uVar14 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
                                              uVar19 = 0x1215;
                                              goto LAB_10058dad4;
                                            }
                                          }
                                        }
                                        goto LAB_10058f7a0;
                                      }
                                    }
                                  }
                                }
                                FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pvVar15,
                                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                              ,0x1219);
                              }
                              else if (local_6e4 == 'E') {
                                if (((local_6e3 != 'Q') || (local_6e2 != 'F')) || (local_6e1 != 'X')
                                   ) break;
                                uVar14 = *(undefined8 *)(param_1 + 100);
LAB_10058d77c:
                                uVar13 = FUN_1005d1d28(uVar14,local_6e8,1);
                                if ((int)uVar13 != 0) goto LAB_10058f7a0;
                              }
                              else {
                                if (((local_6e4 != 'C') || (local_6e3 != 'H')) ||
                                   ((local_6e2 != 'F' || (local_6e1 != 'X')))) break;
                                lVar27 = 0;
                                local_768 = 0;
                                do {
                                  if ((lVar27 < (int)local_6e8) &&
                                     (uVar13 = FUN_1005d1ca0(*(undefined8 *)(param_1 + 100),
                                                             (long)param_1 + lVar27 + 0x46f0),
                                     (int)uVar13 != 0)) goto LAB_10058f7a0;
                                  local_768 = local_768 + 1;
                                  lVar27 = lVar27 + 4;
                                } while (local_768 < 0x40);
                              }
                              if (local_6d0 - 1U < local_6c4) break;
                            }
                          }
                          if (local_6d4 != 0) {
                            uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),local_6d0,0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                   local_6d4 + 1,
                                                                                                      
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x122d,0);
                            if (lVar27 == 0) {
                              uVar13 = 0x26;
                              goto LAB_10058f7a0;
                            }
                            uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),lVar27,local_6d4,1
                                                   ,0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            if (0 < local_6d4) {
                              lVar21 = 0;
                              do {
                                if (*(char *)(lVar27 + lVar21) == '\r') {
                                  *(undefined1 *)(lVar27 + lVar21) = 10;
                                }
                                lVar21 = lVar21 + 1;
                              } while (lVar21 < local_6d4);
                            }
                            uVar13 = FUN_100586684(param_1,9,"Song message",lVar27,local_6d4,3,0);
                            if ((int)uVar13 != 0) goto LAB_10058f7a0;
                            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar27,
                                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                          ,0x1241);
                          }
                          if (0 < (int)param_1[0x138]) {
                            local_768 = 0;
                            do {
                              puVar17 = (undefined8 *)
                                        FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                      0x398,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1249,0);
                              puVar17[1] = puVar17 + 1;
                              puVar17[2] = puVar17 + 1;
                              puVar17[3] = 0;
                              FUN_100583c48(puVar17 + 5);
                              *(undefined8 **)(param_1 + local_768 * 2 + 0x13a) = puVar17;
                              if (puVar17 == (undefined8 *)0x0) {
                                uVar13 = 0x26;
                                goto LAB_10058f7a0;
                              }
                              *puVar17 = param_1;
                              local_768 = local_768 + 1;
                            } while (local_768 < (int)param_1[0x138]);
                          }
                          uVar13 = FUN_100586684(param_1,9,"Number of channels",param_1 + 0x138,4,1,
                                                 0);
                          if ((int)uVar13 == 0) {
                            local_768 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                      param_1[0x284] * 0x618,
                                                                                                            
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x125b,0);
                            *(long *)(param_1 + 0x286) = local_768;
                            if (local_768 == 0) {
                              uVar13 = 0x26;
                            }
                            else if (*piVar1 < 1) {
                              local_784 = 0;
LAB_10058e4f0:
                              lVar27 = 0;
                              *(undefined8 *)(param_1 + 0x34e) = 0;
                              if (param_1[0x285] != 0) {
                                puVar17 = (undefined8 *)
                                          FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                        param_1[0x285] << 3,
                                                                                                                
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x135f,0);
                                *(undefined8 **)(param_1 + 0x34e) = puVar17;
                                if (puVar17 == (undefined8 *)0x0) {
                                  uVar13 = 0x26;
                                  goto LAB_10058f7a0;
                                }
                                if (0 < *piVar2) {
                                  *puVar17 = param_1 + 0x350;
                                  puVar17 = (undefined8 *)**(undefined8 **)(param_1 + 0x34e);
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         DAT_101e96c40,0);
                                  if ((int)uVar13 == 0) {
                                    local_768 = 0;
                                    local_778 = &DAT_101e97040;
                                    local_790 = param_1 + 0x35e;
                                    while (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                  auStack_198,1,4,0),
                                          (int)uVar13 == 0) {
                                      iVar9 = FUN_1005ed0f8(auStack_198,"IMPS",4);
                                      if (iVar9 != 0) {
                                        uVar13 = 0x13;
                                        break;
                                      }
                                      uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xc,1);
                                      if ((((int)uVar13 != 0) ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                          (int)uVar13 != 0)) ||
                                         (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 (long)puVar17 + 0x25),
                                         (int)uVar13 != 0)) break;
                                      uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             (byte *)((long)puVar17 + 0x24));
                                      if ((int)uVar13 != 0) break;
                                      bVar8 = *(byte *)((long)puVar17 + 0x24);
                                      if ((bVar8 >> 4 & 1) == 0) {
                                        uVar20 = 9;
                                      }
                                      else {
                                        uVar20 = (bVar8 >> 5 & 2) + 10;
                                      }
                                      uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             (long)puVar17 + 0xc);
                                      if (((int)uVar13 != 0) ||
                                         (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 auStack_2b2,1,0x1a,0),
                                         (int)uVar13 != 0)) break;
                                      lVar27 = local_768;
                                      _sprintf((char *)&local_6b8,"Sample name %d");
                                      uVar11 = FUN_100586684(param_1,9,&local_6b8,auStack_2b2,0x1c,3
                                                             ,0,in_x7,lVar27);
                                      if (uVar11 != 0) {
                                        uVar13 = (ulong)uVar11;
                                        break;
                                      }
                                      uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                             abStack_298 + local_768);
                                      if ((((int)uVar13 != 0) ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  (long)puVar17 + 0xd),
                                          (int)uVar13 != 0)) ||
                                         (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 &local_70c,4,1,0), (int)uVar13 != 0
                                         )) break;
                                      piVar1 = (int *)(puVar17 + 2);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),piVar1,4
                                                             ,1,0);
                                      if ((int)uVar13 != 0) break;
                                      piVar5 = (int *)((long)puVar17 + 0x14);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),piVar5,4
                                                             ,1,0);
                                      if ((int)uVar13 != 0) break;
                                      piVar6 = (int *)(puVar17 + 1);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),piVar6,4
                                                             ,1,0);
                                      if ((((((int)uVar13 != 0) ||
                                            (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                    puVar17 + 5,4,1,0),
                                            (int)uVar13 != 0)) ||
                                           (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                   (long)puVar17 + 0x2c,4,1,0),
                                           (int)uVar13 != 0)) ||
                                          ((uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                   local_778,4,1,0),
                                           (int)uVar13 != 0 ||
                                           (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                   puVar17 + 6), (int)uVar13 != 0)))
                                          ) || ((uVar13 = FUN_1005d19f8(*(undefined8 *)
                                                                         (param_1 + 100),
                                                                        (long)puVar17 + 0x31),
                                                (int)uVar13 != 0 ||
                                                ((uVar13 = FUN_1005d19f8(*(undefined8 *)
                                                                          (param_1 + 100),
                                                                         (long)puVar17 + 0x33),
                                                 (int)uVar13 != 0 ||
                                                 (uVar13 = FUN_1005d19f8(*(undefined8 *)
                                                                          (param_1 + 100),
                                                                         (long)puVar17 + 0x32),
                                                 (int)uVar13 != 0)))))) break;
                                      iVar9 = *piVar5;
                                      *piVar5 = iVar9 - *piVar1;
                                      if (*piVar6 == 0) {
                                        *piVar6 = 0x20ab;
                                      }
                                      if (((uVar20 & 1) != 0) || (iVar9 == *piVar1)) {
                                        *piVar1 = 0;
                                        *piVar5 = local_70c;
                                        uVar20 = 9;
                                      }
                                      if (local_70c != 0) {
                                        uVar28 = bVar8 >> 1 & 1;
                                        iVar9 = (bVar8 >> 2 & 1) + 1;
                                        uVar11 = *(int *)(&DAT_10115e390 + (ulong)uVar28 * 4) *
                                                 local_70c;
                                        _memset(&local_6b8,0,0xe8);
                                        local_6b8 = CONCAT44((uVar11 >> 3) * iVar9,0xe8);
                                        local_6b0 = (char *)CONCAT44(iVar9,(undefined4)local_6b0);
                                        local_6a8 = CONCAT44(uVar28 + 1,*(undefined4 *)(puVar17 + 1)
                                                            );
                                        uVar13 = FUN_1005f9688(*(undefined8 *)(param_1 + 0x12),0,
                                                               uVar20 | 0x400,&local_6b8,puVar17);
                                        if (((int)uVar13 != 0) ||
                                           (((uVar20 & 6) != 0 &&
                                            (uVar13 = (**(code **)(*(long *)*puVar17 + 0x130))
                                                                ((long *)*puVar17,
                                                                 *(int *)(puVar17 + 2),2,
                                                                 *(int *)(puVar17 + 2) +
                                                                 *(int *)((long)puVar17 + 0x14) + -1
                                                                 ,2), (int)uVar13 != 0)))) break;
                                      }
                                      lVar27 = local_768 + 1;
                                      if (*piVar2 <= lVar27) goto LAB_10058e968;
                                      *(undefined4 **)
                                       (*(long *)(param_1 + 0x34e) + local_768 * 8 + 8) = local_790;
                                      puVar17 = *(undefined8 **)
                                                 (*(long *)(param_1 + 0x34e) + local_768 * 8 + 8);
                                      uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                             *(undefined4 *)
                                                              (&DAT_101e96c44 + local_768 * 4),0);
                                      local_790 = local_790 + 0xe;
                                      local_778 = local_778 + 1;
                                      local_768 = lVar27;
                                      if ((int)uVar13 != 0) break;
                                    }
                                  }
                                  goto LAB_10058f7a0;
                                }
                                lVar27 = 0;
                              }
LAB_10058e968:
                              uVar20 = 0;
                              (&DAT_101e97040)[(int)lVar27] = local_6c0;
                              param_1[0x282] = 0;
                              if (0 < (int)param_1[0x281]) {
                                uVar20 = 0;
                                lVar27 = 0;
                                do {
                                  bVar8 = *(byte *)((long)param_1 + lVar27 + 0x2b0);
                                  if (bVar8 < 0xfe && uVar20 <= bVar8) {
                                    uVar20 = bVar8 + 1;
                                    param_1[0x282] = uVar20;
                                  }
                                  lVar27 = lVar27 + 1;
                                } while (lVar27 < (int)param_1[0x281]);
                              }
                              if (uVar20 <= local_6ba) {
                                uVar20 = (uint)local_6ba;
                              }
                              param_1[0x283] = uVar20;
                              lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                     uVar20 << 4,
                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1427,0);
                              *(long *)(param_1 + 0xa6) = lVar27;
                              if (lVar27 == 0) {
                                uVar13 = 0x26;
                              }
                              else {
                                uVar13 = (ulong)local_6ba;
                                if (local_6ba != 0) {
                                  local_768 = 0;
                                  lVar21 = 0;
                                  while( true ) {
                                    if ((&DAT_101e96840)[lVar21] == 0) {
                                      *(undefined4 *)(lVar27 + local_768) = 0x40;
                                      lVar22 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),0x40,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1445,0);
                                      *(long *)((undefined4 *)(lVar27 + local_768) + 2) = lVar22;
                                      if (lVar22 == 0) {
                                        uVar13 = 0x26;
                                        goto LAB_10058f7a0;
                                      }
                                    }
                                    else {
                                      uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                             (&DAT_101e96840)[lVar21],0);
                                      if (((((int)uVar13 != 0) ||
                                           (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                                   &local_710), (int)uVar13 != 0))
                                          || (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                                     &local_70e), (int)uVar13 != 0))
                                         || (uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),4
                                                                    ,1), (int)uVar13 != 0))
                                      goto LAB_10058f7a0;
                                      *(uint *)(lVar27 + local_768) = (uint)local_70e;
                                      uVar14 = FUN_1005d7a5c(*(undefined8 *)
                                                              (PTR_DAT_10186d408 + 0xd8),local_710,
                                                                                                                          
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x1462,0);
                                      *(undefined8 *)((uint *)(lVar27 + local_768) + 2) = uVar14;
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),uVar14,1
                                                             ,local_710,0);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                    }
                                    lVar21 = lVar21 + 1;
                                    uVar13 = (ulong)local_6ba;
                                    if ((long)uVar13 <= lVar21) break;
                                    local_768 = local_768 + 0x10;
                                    lVar27 = *(long *)(param_1 + 0xa6);
                                  }
                                }
                                if ((int)uVar13 < (int)param_1[0x282]) {
                                  lVar27 = uVar13 << 4;
                                  do {
                                    lVar22 = *(long *)(param_1 + 0xa6);
                                    *(undefined4 *)(lVar22 + lVar27) = 0x40;
                                    lVar21 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8)
                                                           ,0x40,
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x14d5,0);
                                    *(long *)((undefined4 *)(lVar22 + lVar27) + 2) = lVar21;
                                    if (lVar21 == 0) {
                                      uVar13 = 0x26;
                                      goto LAB_10058f7a0;
                                    }
                                    uVar13 = uVar13 + 1;
                                    lVar27 = lVar27 + 0x10;
                                  } while ((long)uVar13 < (long)(int)param_1[0x282]);
                                }
                                uVar20 = 0;
                                local_798 = (void *)0x0;
                                uVar29 = 0;
                                do {
                                  lVar27 = 0;
                                  iVar9 = (int)uVar29;
                                  puVar30 = (undefined4 *)((long)iVar9 * 4 + 0x101e9703c);
                                  do {
                                    if ((long)*piVar2 <= iVar9 + lVar27) {
                                      if (local_798 != (void *)0x0) {
                                        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                      local_798,
                                                                                                            
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x15da);
                                      }
                                      if ((param_3 == 0) ||
                                         (iVar9 = *(int *)(param_3 + 0x14), iVar9 == 0)) {
                                        lVar27 = *(long *)(param_1 + 2);
                                        iVar9 = 5;
                                      }
                                      else {
                                        lVar27 = *(long *)(param_1 + 2);
                                      }
                                      *(int *)(lVar27 + 0x100) = iVar9;
                                      *(undefined4 *)(lVar27 + 0x104) = 2;
                                      FUN_1005ecc98(lVar27,param_1 + 0x66,0x100);
                                      param_1[0x4c] = 0;
                                      local_690 = 0;
                                      uStack_688 = 0;
                                      local_6a0 = 0;
                                      uStack_698 = 0;
                                      local_6a8 = 0;
                                      local_6b8 = 0;
                                      local_6b0 = "FMOD IT final mixdown unit";
                                      puVar17 = (undefined8 *)(param_1 + 0x11fc);
                                      uVar13 = FUN_10056b4fc(*(undefined8 *)(param_1 + 0x12),
                                                             &local_6b8,0,puVar17,1);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                      FUN_1005c9948(*(undefined8 *)(param_1 + 0x11fc),0,
                                                    *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),
                                                    0);
                                      FUN_1005c982c(*(undefined8 *)(param_1 + 0x11fc),1,0);
                                      local_690 = 0;
                                      uStack_688 = 0;
                                      local_6a0 = 0;
                                      uStack_698 = 0;
                                      local_6a8 = 0;
                                      local_6b8 = 0;
                                      local_6b0 = "FMOD IT Target Unit";
                                      plVar12 = (long *)(param_1 + 0xa8);
                                      uVar13 = FUN_10056b4fc(*(undefined8 *)(param_1 + 0x12),
                                                             &local_6b8,0,plVar12,1);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                      lVar27 = *plVar12;
                                      *(ushort *)(lVar27 + 0x3c) =
                                           *(ushort *)(lVar27 + 0x3c) | 0x400;
                                      uVar13 = FUN_1005ce188(*puVar17,lVar27,0,0,1,0);
                                      if ((int)uVar13 != 0) goto LAB_10058f7a0;
                                      FUN_1005c9948(*(undefined8 *)(param_1 + 0xa8),0,
                                                    *(undefined4 *)(*(long *)(param_1 + 2) + 0x104),
                                                    0);
                                      FUN_1005c982c(*(undefined8 *)(param_1 + 0xa8),1,0);
                                      lVar27 = 0;
                                      goto LAB_10058f2f0;
                                    }
                                    plVar12 = *(long **)(*(long *)(param_1 + 0x34e) +
                                                         (-(uVar29 >> 0x1f) & 0xfffffff800000000 |
                                                         uVar29 << 3) + lVar27 * 8);
                                    local_714 = 0;
                                    uVar11 = (&DAT_101e97040)[(iVar9 + 1) + lVar27] -
                                             (&DAT_101e97040)[iVar9 + lVar27];
                                    if ((uVar11 == 0 ||
                                         (int)(&DAT_101e97040)[(iVar9 + 1) + lVar27] <
                                         (int)(&DAT_101e97040)[iVar9 + lVar27]) &&
                                       (plVar18 = (long *)*plVar12, uVar11 = local_714,
                                       plVar18 != (long *)0x0)) {
                                      (**(code **)(*plVar18 + 0x90))(plVar18,&local_714,4);
                                      uVar11 = local_714;
                                    }
                                    local_714 = uVar11;
                                    lVar27 = lVar27 + 1;
                                    puVar30 = puVar30 + 1;
                                  } while (*plVar12 == 0);
                                  lVar21 = (long)iVar9 + -1 + lVar27;
                                  plVar18 = (long *)**(undefined8 **)
                                                      (*(long *)(param_1 + 0x34e) + lVar21 * 8);
                                  (**(code **)(*plVar18 + 0x90))(plVar18,&local_734,4);
                                  (**(code **)(*(long *)*plVar12 + 0x98))
                                            ((long *)*plVar12,0,&local_738,0,0);
                                  bVar8 = abStack_298[lVar21];
                                  if ((*(byte *)((long)plVar12 + 0x24) >> 3 & 1) == 0) {
                                    iVar10 = 0;
                                  }
                                  else {
                                    bVar7 = 0;
                                    if (0x214 < local_6cc) {
                                      bVar7 = bVar8 >> 2 & 1;
                                    }
                                    iVar10 = 0xd6;
                                    if (bVar7 != 0) {
                                      iVar10 = 0xd7;
                                    }
                                  }
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),*puVar30,0);
                                  if (((int)uVar13 != 0) ||
                                     (uVar13 = (**(code **)(*(long *)*plVar12 + 0x28))
                                                         ((long *)*plVar12,0,local_734,&local_720,
                                                          &local_728,&local_72c,&local_730),
                                     (int)uVar13 != 0)) break;
                                  if ((local_720 != 0) &&
                                     (uVar29 = (ulong)local_72c, local_72c != 0)) {
                                    if (((bVar8 & 1) == 0) || (iVar10 != 0)) {
                                      if (uVar20 < local_714) {
                                        if (local_798 != (void *)0x0) {
                                          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                                        local_798,
                                                                                                                
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x15af);
                                        }
                                        local_798 = (void *)FUN_1005d7708(*(undefined8 *)
                                                                           (PTR_DAT_10186d408 + 0xd8
                                                                           ),local_714,
                                                                                                                                                    
                                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                                  ,0x15b2,0,0);
                                        uVar20 = local_714;
                                        if (local_798 == (void *)0x0) {
                                          uVar13 = 0x26;
                                          break;
                                        }
                                      }
                                      _bzero(local_798,(ulong)uVar20);
                                      uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                             local_798,1,local_714,0);
                                      if ((int)uVar13 != 0) break;
                                      if (local_738 == 1) {
                                        local_740 = local_798;
                                        uVar13 = (ulong)*(uint *)(*plVar12 + 0x60);
                                        if (0 < (int)*(uint *)(*plVar12 + 0x60)) {
                                          lVar21 = 0;
                                          do {
                                            uVar11 = 0;
                                            if ((uint)uVar13 != 0) {
                                              uVar11 = local_734 / (uint)uVar13;
                                            }
                                            FUN_100589340(param_1,&local_740,local_720 + lVar21,
                                                          uVar11,iVar10 == 0xd7);
                                            lVar21 = lVar21 + 1;
                                            uVar13 = (ulong)*(int *)(*plVar12 + 0x60);
                                          } while (lVar21 < (long)uVar13);
                                        }
                                      }
                                      else {
                                        local_748 = local_798;
                                        uVar13 = (ulong)*(uint *)(*plVar12 + 0x60);
                                        if (0 < (int)*(uint *)(*plVar12 + 0x60)) {
                                          lVar22 = 0;
                                          lVar21 = 0;
                                          do {
                                            uVar11 = 0;
                                            if ((uint)uVar13 != 0) {
                                              uVar11 = (local_734 >> 1) / (uint)uVar13;
                                            }
                                            FUN_1005896c4(param_1,&local_748,local_720 + lVar22,
                                                          uVar11,iVar10 == 0xd7);
                                            lVar21 = lVar21 + 1;
                                            uVar13 = (ulong)*(int *)(*plVar12 + 0x60);
                                            lVar22 = lVar22 + 2;
                                          } while (lVar21 < (long)uVar13);
                                        }
                                      }
                                    }
                                    else {
                                      if (local_738 == 2) {
                                        if (*(int *)(*plVar12 + 0x60) == 1) {
                                          uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                 local_720,2,local_72c >> 1,0);
                                          iVar10 = (int)uVar13;
                                        }
                                        else {
                                          local_768._0_4_ = 0;
                                          uVar13 = 0;
                                          uVar11 = local_72c >> 2;
                                          if (uVar11 != 0) {
                                            do {
                                              uVar28 = 0x200;
                                              if (uVar11 < 0x201) {
                                                uVar28 = uVar11;
                                              }
                                              uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &local_6b8,2,uVar28,0);
                                              if (uVar28 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar11) {
                                                  uVar25 = ~uVar11;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)local_768 << 1;
                                                puVar17 = &local_6b8;
                                                do {
                                                  *(undefined2 *)(local_720 + (ulong)uVar26 * 2) =
                                                       *(undefined2 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 2);
                                                } while (uVar25 != 0);
                                              }
                                              uVar11 = uVar11 - uVar28;
                                              local_768._0_4_ = uVar28 + (int)local_768;
                                            } while (uVar11 != 0);
                                            uVar29 = (ulong)local_72c;
                                          }
                                          uVar29 = uVar29 >> 2;
                                          if ((int)uVar29 != 0) {
                                            local_768._0_4_ = 0;
                                            do {
                                              uVar28 = (uint)uVar29;
                                              uVar11 = 0x200;
                                              if (uVar28 < 0x201) {
                                                uVar11 = uVar28;
                                              }
                                              uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                                     &local_6b8,2,uVar11,0);
                                              if (uVar11 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar28) {
                                                  uVar25 = ~uVar28;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)local_768 << 1 | 1;
                                                puVar17 = &local_6b8;
                                                do {
                                                  *(undefined2 *)(local_720 + (ulong)uVar26 * 2) =
                                                       *(undefined2 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 2);
                                                } while (uVar25 != 0);
                                              }
                                              uVar29 = (ulong)(uVar28 - uVar11);
                                              local_768._0_4_ = uVar11 + (int)local_768;
                                            } while (uVar28 - uVar11 != 0);
                                          }
                                          iVar10 = (int)uVar13;
                                        }
                                      }
                                      else {
                                        if (*(int *)(*plVar12 + 0x60) != 1) {
                                          uVar11 = local_72c >> 2;
                                          if (uVar11 != 0) {
                                            local_768._0_4_ = 0;
                                            do {
                                              uVar28 = 0x200;
                                              if (uVar11 < 0x201) {
                                                uVar28 = uVar11;
                                              }
                                              FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                            &local_6b8,1,uVar28,0);
                                              if (uVar28 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar11) {
                                                  uVar25 = ~uVar11;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)local_768 << 1;
                                                puVar17 = &local_6b8;
                                                do {
                                                  *(undefined1 *)(local_720 + (ulong)uVar26) =
                                                       *(undefined1 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 1);
                                                } while (uVar25 != 0);
                                              }
                                              uVar11 = uVar11 - uVar28;
                                              local_768._0_4_ = uVar28 + (int)local_768;
                                            } while (uVar11 != 0);
                                            uVar29 = (ulong)local_72c;
                                          }
                                          uVar29 = uVar29 >> 2;
                                          if ((int)uVar29 != 0) {
                                            local_768._0_4_ = 0;
                                            do {
                                              uVar28 = (uint)uVar29;
                                              uVar11 = 0x200;
                                              if (uVar28 < 0x201) {
                                                uVar11 = uVar28;
                                              }
                                              FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                            &local_6b8,1,uVar11,0);
                                              if (uVar11 != 0) {
                                                uVar25 = 0xfffffdff;
                                                if (0xfffffdff < ~uVar28) {
                                                  uVar25 = ~uVar28;
                                                }
                                                uVar25 = ~uVar25;
                                                uVar26 = (int)local_768 << 1 | 1;
                                                puVar17 = &local_6b8;
                                                do {
                                                  *(undefined1 *)(local_720 + (ulong)uVar26) =
                                                       *(undefined1 *)puVar17;
                                                  uVar25 = uVar25 - 1;
                                                  uVar26 = uVar26 + 2;
                                                  puVar17 = (undefined8 *)((long)puVar17 + 1);
                                                } while (uVar25 != 0);
                                              }
                                              uVar29 = (ulong)(uVar28 - uVar11);
                                              local_768._0_4_ = uVar11 + (int)local_768;
                                            } while (uVar28 - uVar11 != 0);
                                          }
                                          goto LAB_10058f154;
                                        }
                                        uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                               local_720,1,uVar29,0);
                                        iVar10 = (int)uVar13;
                                      }
                                      if (iVar10 != 0) break;
                                    }
                                  }
LAB_10058f154:
                                  uVar29 = (ulong)(uint)(iVar9 + (int)lVar27);
                                  uVar13 = (**(code **)(*(long *)*plVar12 + 0x30))
                                                     ((long *)*plVar12,local_720,local_728,local_72c
                                                      ,local_730);
                                } while ((int)uVar13 == 0);
                              }
                            }
                            else {
                              uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),DAT_101e96440,0)
                              ;
                              if ((int)uVar13 == 0) {
                                local_784 = 0;
                                local_770 = 0;
                                while (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              auStack_198,1,4,0), (int)uVar13 == 0)
                                {
                                  iVar9 = FUN_1005ed0f8(auStack_198,"IMPI",4);
                                  if (iVar9 != 0) {
                                    uVar13 = 0x13;
                                    break;
                                  }
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),0xc,1);
                                  if ((((((int)uVar13 != 0) ||
                                        (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                        (int)uVar13 != 0)) ||
                                       ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                local_768 + local_770 * 0x618 +
                                                                0x510), (int)uVar13 != 0 ||
                                        ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 local_768 + local_770 * 0x618 +
                                                                 0x511), (int)uVar13 != 0 ||
                                         (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                 local_768 + local_770 * 0x618 +
                                                                 0x512), (int)uVar13 != 0)))))) ||
                                      (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x50c)
                                      , (int)uVar13 != 0)) ||
                                     (((((((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                   local_768 + local_770 * 0x618 +
                                                                   0x513), (int)uVar13 != 0 ||
                                           (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                   local_768 + local_770 * 0x618 +
                                                                   0x514), (int)uVar13 != 0)) ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  local_768 + local_770 * 0x618 +
                                                                  0x50e), (int)uVar13 != 0)) ||
                                         ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  local_768 + local_770 * 0x618 +
                                                                  0x50f), (int)uVar13 != 0 ||
                                          (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                  local_768 + local_770 * 0x618 +
                                                                  0x515), (int)uVar13 != 0)))) ||
                                        (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                                local_768 + local_770 * 0x618 +
                                                                0x516), (int)uVar13 != 0)) ||
                                       ((uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1),
                                        (int)uVar13 != 0 ||
                                        (uVar13 = FUN_1005d1b4c(*(undefined8 *)(param_1 + 100),
                                                                local_768 + local_770 * 0x618 + 0x1c
                                                               ), (int)uVar13 != 0)))) ||
                                      ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                       (int)uVar13 != 0 ||
                                       (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                               local_768 + local_770 * 0x618,1,0x1a,
                                                               0), (int)uVar13 != 0)))))) break;
                                  puVar3 = (uint *)(local_768 + local_770 * 0x618 + 0x608);
                                  uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),puVar3);
                                  if ((int)uVar13 != 0) break;
                                  uVar20 = *puVar3;
                                  uVar13 = FUN_1005d1a80(*(undefined8 *)(param_1 + 100),
                                                         local_768 + local_770 * 0x618 + 0x60c);
                                  if (((((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               local_768 + local_770 * 0x618 + 0x610
                                                              ), (int)uVar13 != 0)) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0),
                                      (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),2,1),
                                      (int)uVar13 != 0 ||
                                      (uVar13 = FUN_1005d148c(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x517,
                                                              1,0xf0,0), (int)uVar13 != 0)))) break;
                                  lVar27 = local_768 + local_770 * 0x618;
                                  *(undefined1 *)(lVar27 + 0x400) = 0;
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_701);
                                  if ((int)uVar13 != 0) break;
                                  pbVar4 = (byte *)(lVar27 + 0x400);
                                  if ((local_701 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 1;
                                  }
                                  if ((local_701 >> 1 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 4;
                                  }
                                  if ((local_701 >> 2 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 2;
                                  }
                                  if ((local_701 >> 3 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 8;
                                  }
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if ((((int)uVar13 != 0) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x453)
                                      , (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x454)
                                      , (int)uVar13 != 0 ||
                                      ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               local_768 + local_770 * 0x618 + 0x455
                                                              ), (int)uVar13 != 0 ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               local_768 + local_770 * 0x618 + 0x456
                                                              ), (int)uVar13 != 0)))))) break;
                                  local_778 = (undefined4 *)0x0;
                                  local_784 = local_784 | (uVar20 & 0x80) >> 7;
                                  lVar27 = local_768 + local_770 * 0x618 + 0x402;
                                  do {
                                    uVar13 = FUN_1005d1ac4(*(undefined8 *)(param_1 + 100),lVar27);
                                    if (((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                               &local_704), (int)uVar13 != 0))
                                    goto LAB_10058f7a0;
                                    *(undefined2 *)(lVar27 + 1) = local_704;
                                    local_778 = (undefined4 *)((long)local_778 + 1);
                                    lVar27 = lVar27 + 3;
                                  } while ((long)local_778 < 0x19);
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                                  if ((int)uVar13 != 0) break;
                                  if (*(byte *)(local_768 + local_770 * 0x618 + 0x401) < 2) {
                                    *pbVar4 = 0;
                                  }
                                  lVar27 = local_768 + local_770 * 0x618;
                                  *(undefined1 *)(lVar27 + 0x457) = 0;
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_701);
                                  if ((int)uVar13 != 0) break;
                                  pbVar4 = (byte *)(lVar27 + 0x457);
                                  if ((local_701 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 1;
                                  }
                                  if ((local_701 >> 1 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 4;
                                  }
                                  if ((local_701 >> 2 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 2;
                                  }
                                  if ((local_701 >> 3 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 8;
                                  }
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if (((((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               local_768 + local_770 * 0x618 + 0x4ab
                                                              ), (int)uVar13 != 0)) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x4ac)
                                      , (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x4ad)
                                      , (int)uVar13 != 0 ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x4ae)
                                      , (int)uVar13 != 0)))) break;
                                  local_778 = (undefined4 *)0x0;
                                  lVar27 = local_768 + local_770 * 0x618 + 0x45a;
                                  do {
                                    uVar13 = FUN_1005d1ac4(*(undefined8 *)(param_1 + 100),lVar27);
                                    if (((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                               &local_706), (int)uVar13 != 0))
                                    goto LAB_10058f7a0;
                                    *(undefined2 *)(lVar27 + 1) = local_706;
                                    local_778 = (undefined4 *)((long)local_778 + 1);
                                    lVar27 = lVar27 + 3;
                                  } while ((long)local_778 < 0x19);
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                                  if ((int)uVar13 != 0) break;
                                  if (*(byte *)(local_768 + local_770 * 0x618 + 0x458) < 2) {
                                    *pbVar4 = 0;
                                  }
                                  lVar27 = local_768 + local_770 * 0x618;
                                  *(undefined1 *)(lVar27 + 0x4af) = 0;
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),&local_701);
                                  if ((int)uVar13 != 0) break;
                                  pbVar4 = (byte *)(lVar27 + 0x4af);
                                  if ((local_701 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 1;
                                  }
                                  if ((local_701 >> 1 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 4;
                                  }
                                  if ((local_701 >> 2 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 2;
                                  }
                                  if ((local_701 >> 3 & 1) != 0) {
                                    *pbVar4 = *pbVar4 | 8;
                                  }
                                  if ((char)local_701 < '\0') {
                                    *pbVar4 = *pbVar4 | 0x10;
                                  }
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100));
                                  if (((((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                               local_768 + local_770 * 0x618 + 0x503
                                                              ), (int)uVar13 != 0)) ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x504)
                                      , (int)uVar13 != 0)) ||
                                     ((uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x505)
                                      , (int)uVar13 != 0 ||
                                      (uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),
                                                              local_768 + local_770 * 0x618 + 0x506)
                                      , (int)uVar13 != 0)))) break;
                                  local_778 = (undefined4 *)0x0;
                                  lVar27 = local_768 + local_770 * 0x618 + 0x4b2;
                                  do {
                                    uVar13 = FUN_1005d1ac4(*(undefined8 *)(param_1 + 100),lVar27);
                                    if (((int)uVar13 != 0) ||
                                       (uVar13 = FUN_1005d1b90(*(undefined8 *)(param_1 + 100),
                                                               &local_708), (int)uVar13 != 0))
                                    goto LAB_10058f7a0;
                                    *(undefined2 *)(lVar27 + 1) = local_708;
                                    local_778 = (undefined4 *)((long)local_778 + 1);
                                    lVar27 = lVar27 + 3;
                                  } while ((long)local_778 < 0x19);
                                  uVar13 = FUN_1005d19f8(*(undefined8 *)(param_1 + 100),0);
                                  if ((int)uVar13 != 0) break;
                                  if (*(byte *)(local_768 + local_770 * 0x618 + 0x4b0) < 2) {
                                    *pbVar4 = 0;
                                  }
                                  local_770 = local_770 + 1;
                                  if (*piVar1 <= local_770) goto LAB_10058e4f0;
                                  local_768 = *(long *)(param_1 + 0x286);
                                  uVar13 = FUN_1005d1d28(*(undefined8 *)(param_1 + 100),
                                                         (&DAT_101e96440)[local_770],0);
                                  if ((int)uVar13 != 0) break;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar13 = 0x13;
      }
    }
  }
  goto LAB_10058f7a0;
LAB_10058f2f0:
  do {
    local_750 = 0;
    plVar18 = *(long **)(param_1 + lVar27 * 2 + 0x1158);
    if (plVar18 != (long *)0x0) {
      uVar13 = (**(code **)(*plVar18 + 0x118))(plVar18,0xffffffff,&local_750);
      if ((int)uVar13 != 0) goto LAB_10058f7a0;
      if (local_750 != 0) {
        if ((*(byte *)(*(long *)(param_1 + lVar27 * 2 + 0x1158) + 0x268) & 1) == 0) {
          uVar20 = *(uint *)(*(long *)(param_1 + lVar27 * 2 + 0x1158) + 0x26c) & 0x7f;
          if (uVar20 != 0 && (uint)lVar27 != uVar20) {
            uVar13 = (**(code **)(**(long **)(param_1 + (ulong)uVar20 * 2 + 0x1158) + 0x118))
                               (*(long **)(param_1 + (ulong)uVar20 * 2 + 0x1158),0,&local_760);
            iVar9 = (int)uVar13;
            lVar21 = local_750;
            lVar22 = local_760;
            goto joined_r0x00010058f3b4;
          }
          lVar22 = *plVar12;
          lVar21 = local_750;
        }
        else {
          uVar13 = FUN_1005c91e4(*puVar17,0,&local_758,0,0,1);
          if (((int)uVar13 != 0) || (uVar13 = FUN_1005ceac4(*puVar17,local_758,0), (int)uVar13 != 0)
             ) goto LAB_10058f7a0;
          uVar13 = FUN_1005ce188(*puVar17,local_750,0,0,1,0);
          iVar9 = (int)uVar13;
          lVar21 = local_758;
          lVar22 = local_750;
joined_r0x00010058f3b4:
          if (iVar9 != 0) goto LAB_10058f7a0;
        }
        uVar13 = FUN_1005ce188(lVar22,lVar21,0,0,1,0);
        if (((int)uVar13 != 0) ||
           ((((*(byte *)(*(long *)(param_1 + lVar27 * 2 + 0x1158) + 0x268) >> 1 & 1) != 0 &&
             (uVar13 = FUN_1005c9900(local_750,1), (int)uVar13 != 0)) ||
            (uVar13 = FUN_1005c982c(local_750,1,0), (int)uVar13 != 0)))) goto LAB_10058f7a0;
      }
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 < 0x32);
  if ((param_3 == 0) || (iVar9 = *(int *)(param_3 + 0x60), iVar9 == 0)) {
    iVar9 = param_1[0x138];
  }
  param_1[0x1ba] = iVar9;
  lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar9 * 0x330,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                         ,0x1677,0);
  *(long *)(param_1 + 0x1bc) = lVar27;
  if (lVar27 == 0) {
    uVar13 = 0x26;
  }
  else {
    iVar9 = param_1[0x1ba];
    if (0 < iVar9) {
      *(long *)lVar27 = lVar27;
      *(long *)(lVar27 + 8) = lVar27;
      *(undefined8 *)(lVar27 + 0x10) = 0;
      FUN_100583c48(lVar27 + 0x20);
      iVar9 = param_1[0x1ba];
      lVar27 = 1;
      lVar21 = 0x330;
      if (1 < iVar9) {
        do {
          lVar22 = *(long *)(param_1 + 0x1bc) + lVar21;
          *(long *)lVar22 = lVar22;
          *(long *)(lVar22 + 8) = lVar22;
          *(undefined8 *)(lVar22 + 0x10) = 0;
          FUN_100583c48(lVar22 + 0x20);
          lVar27 = lVar27 + 1;
          iVar9 = param_1[0x1ba];
          lVar21 = lVar21 + 0x330;
        } while (lVar27 < iVar9);
      }
    }
    piVar1 = param_1 + 0x1157;
    *piVar1 = iVar9 << 1;
    FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x1688,0);
    lVar27 = FUN_100585974();
    *(long *)(param_1 + 0x1be) = lVar27;
    if (lVar27 == 0) {
      uVar13 = 0x26;
    }
    else {
      uVar13 = FUN_100585980(lVar27,*(undefined8 *)(param_1 + 0x12),0,*piVar1);
      if ((int)uVar13 == 0) {
        lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*piVar1 * 0x2b8,
                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                               ,0x16a4,0);
        *(long *)(param_1 + 0x1c0) = lVar27;
        if (lVar27 == 0) {
          uVar13 = 0x26;
        }
        else {
          iVar9 = *piVar1;
          if (iVar9 < 1) {
LAB_10058f634:
            if (local_784 != 0) {
              lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar9 << 3,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                     ,0x16b6,0);
              *(long *)(param_1 + 0x1c2) = lVar27;
              if (lVar27 == 0) {
                uVar13 = 0x26;
                goto LAB_10058f7a0;
              }
              if (0 < *piVar1) {
                lVar22 = 0;
                lVar21 = 0;
                do {
                  uVar13 = FUN_1005f9b78(*(undefined8 *)(param_1 + 0x12),4,lVar27 + lVar22);
                  if ((int)uVar13 != 0) goto LAB_10058f7a0;
                  lVar27 = *(long *)(param_1 + 0x1c2);
                  lVar23 = *(long *)(lVar27 + lVar21 * 8);
                  *(ushort *)(lVar23 + 0x3c) = *(ushort *)(lVar23 + 0x3c) | 0x400;
                  lVar21 = lVar21 + 1;
                  lVar22 = lVar22 + 8;
                } while (lVar21 < *piVar1);
              }
            }
            if ((param_2 & 0x4100) == 0) {
              *(undefined8 *)(param_1 + 0xaa) = 0;
              *(undefined4 *)(*(long *)(param_1 + 2) + 0x110) = 0xffffffff;
            }
            else {
              lVar27 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x281] << 8,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                                     ,0x16cb,0);
              *(long *)(param_1 + 0xaa) = lVar27;
              if (lVar27 == 0) {
                uVar13 = 0x26;
                goto LAB_10058f7a0;
              }
              FUN_100588e60(param_1);
            }
            *param_1 = 0;
            FUN_1005d8fe8(param_1,1);
            lVar27 = (long)(int)param_1[0x345];
            do {
              bVar8 = *(byte *)((long)param_1 + lVar27 + 0x2b0);
              if ((int)(uint)bVar8 < (int)param_1[0x283]) {
                *(undefined8 *)(param_1 + 0x1150) =
                     *(undefined8 *)(*(long *)(param_1 + 0xa6) + (ulong)bVar8 * 0x10 + 8);
                FUN_10058a92c(param_1);
                uVar13 = 0;
                goto LAB_10058f7a0;
              }
              iVar9 = (int)lVar27 + 1;
              param_1[0x345] = iVar9;
            } while ((iVar9 < 0xff) && (lVar27 = lVar27 + 1, iVar9 < (int)param_1[0x281]));
            uVar13 = 0;
            *(undefined2 *)(param_1 + 0x340) = 0x100;
          }
          else {
            FUN_10057bd44(lVar27);
            uVar13 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),0,lVar27);
            lVar27 = 1;
            lVar21 = 0x2b8;
            iVar9 = (int)uVar13;
            while (iVar9 == 0) {
              iVar9 = *piVar1;
              if (iVar9 <= lVar27) goto LAB_10058f634;
              lVar22 = *(long *)(param_1 + 0x1c0);
              FUN_10057bd44(lVar22 + lVar21);
              uVar13 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x1be),lVar27,lVar22 + lVar21);
              lVar27 = lVar27 + 1;
              lVar21 = lVar21 + 0x2b8;
              iVar9 = (int)uVar13;
            }
          }
        }
      }
    }
  }
LAB_10058f7a0:
  if (lVar31 != local_98) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar13);
  }
  return;
}




undefined8 FUN_10058f7dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_48;
  
  FUN_1005d9258();
  if (*(long *)(param_1 + 0x6f8) != 0) {
    FUN_100585a04();
    *(undefined8 *)(param_1 + 0x6f8) = 0;
  }
  if (*(long *)(param_1 + 0x47f0) != 0) {
    FUN_1005cdc44(*(long *)(param_1 + 0x47f0),1,0);
    *(undefined8 *)(param_1 + 0x47f0) = 0;
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    FUN_1005cdc44(*(long *)(param_1 + 0x2a0),1,0);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x708);
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x455c);
    if (0 < iVar3) {
      lVar5 = 0;
      while( true ) {
        lVar2 = *(long *)(lVar2 + lVar5 * 8);
        if (lVar2 != 0) {
          FUN_1005cdc44(lVar2,1,0);
          iVar3 = *(int *)(param_1 + 0x455c);
        }
        lVar5 = lVar5 + 1;
        if (iVar3 <= lVar5) break;
        lVar2 = *(long *)(param_1 + 0x708);
      }
      lVar2 = *(long *)(param_1 + 0x708);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x171c);
    *(undefined8 *)(param_1 + 0x708) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xd38);
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa14);
    if (0 < iVar3) {
      lVar5 = 0;
      while( true ) {
        plVar4 = *(long **)(lVar2 + lVar5 * 8);
        if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,1);
          lVar2 = *(long *)(param_1 + 0xd38);
          **(undefined8 **)(lVar2 + lVar5 * 8) = 0;
          *(undefined8 *)(lVar2 + lVar5 * 8) = 0;
          iVar3 = *(int *)(param_1 + 0xa14);
        }
        lVar5 = lVar5 + 1;
        if (iVar3 <= lVar5) break;
        lVar2 = *(long *)(param_1 + 0xd38);
      }
      lVar2 = *(long *)(param_1 + 0xd38);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x172c);
    *(undefined8 *)(param_1 + 0xd38) = 0;
  }
  if (*(long *)(param_1 + 0xa18) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0xa18),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x1732);
    *(undefined8 *)(param_1 + 0xa18) = 0;
  }
  if (*(long *)(param_1 + 0x6f0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x6f0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x1738);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  if (*(long *)(param_1 + 0x700) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x700),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x173e);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x298);
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa0c);
    lVar5 = 8;
    if (0 < iVar3) {
      lVar6 = 0;
      do {
        if (*(long *)(lVar2 + lVar5) != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar2 + lVar5),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                        ,0x1748);
          lVar2 = *(long *)(param_1 + 0x298);
          *(undefined8 *)(lVar2 + lVar5) = 0;
          iVar3 = *(int *)(param_1 + 0xa0c);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < iVar3);
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                  ,0x174d);
    *(undefined8 *)(param_1 + 0x298) = 0;
  }
  lVar2 = 0;
  do {
    plVar4 = *(long **)(param_1 + 0x4560 + lVar2 * 8);
    if (plVar4 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar4 + 0x118))(plVar4,0,&local_48);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_1005cdc44(local_48,1,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                    *(undefined8 *)(param_1 + 0x4560 + lVar2 * 8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                    ,0x175e);
    }
    lVar2 = lVar2 + 1;
    if (0x31 < lVar2) {
      iVar3 = *(int *)(param_1 + 0x4e0);
      if (0 < iVar3) {
        lVar2 = 0;
        do {
          lVar5 = *(long *)(param_1 + 0x4e8 + lVar2 * 8);
          if (lVar5 != 0) {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar5,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                          ,0x1766);
            *(undefined8 *)(param_1 + 0x4e8 + lVar2 * 8) = 0;
            iVar3 = *(int *)(param_1 + 0x4e0);
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < iVar3);
      }
      if (*(long *)(param_1 + 0x2a8) != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x2a8),
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_codec_it.cpp"
                      ,0x176d);
        *(undefined8 *)(param_1 + 0x2a8) = 0;
      }
      return 0;
    }
  } while( true );
}




int FUN_10058fb54(long param_1,long param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int local_10e4;
  undefined8 local_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined4 local_10c0;
  undefined4 local_10bc;
  long local_10b8;
  undefined4 local_10b0;
  undefined4 local_10ac;
  undefined4 local_10a8;
  undefined1 *local_10a0;
  undefined1 *puStack_1098;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined1 auStack_1078 [4096];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0xd00) == '\0') {
    iVar8 = 0;
  }
  else if (*(float *)(param_1 + 0xcec) == 0.0) {
    iVar8 = 0;
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x968);
    iVar8 = 0;
    if (param_3 != 0) {
      uVar12 = 0;
      local_10e4 = (int)&local_1088;
      lVar13 = param_2;
      iVar8 = 0;
      do {
        if (uVar11 == 0) {
          FUN_100588fa4(param_1,1);
          iVar8 = 0;
          uVar11 = *(uint *)(param_1 + 0x96c);
        }
        uVar10 = param_3 - uVar12;
        if (uVar11 + uVar12 <= param_3) {
          uVar10 = uVar11;
        }
        lVar14 = *(long *)(param_1 + 0x48);
        uVar1 = *(uint *)(lVar14 + 0x710);
        if (uVar10 <= *(uint *)(lVar14 + 0x710)) {
          uVar1 = uVar10;
        }
        if (param_2 != 0) {
          local_10ac = 0;
          local_1088 = 0;
          uStack_1080 = 0;
          local_10b0 = 0x200;
          local_10a8 = 0;
          local_10a0 = auStack_1078;
          local_10b8 = lVar14;
          puStack_1098 = local_10a0;
          if (lVar14 == 0) {
            lVar15 = 0;
            bVar6 = false;
            bVar4 = false;
            bVar5 = true;
          }
          else {
            bVar5 = true;
            FUN_10057097c(lVar14,1);
            lVar15 = *(long *)(param_1 + 0x48);
            if (lVar15 == 0) {
              lVar15 = 0;
              bVar4 = false;
              bVar6 = true;
            }
            else {
              FUN_10057097c(lVar15,3);
              bVar5 = false;
              bVar6 = true;
              bVar4 = true;
            }
          }
          if (*(char *)(*(long *)(param_1 + 0x47f0) + 0x3f) == '\0') {
LAB_10058fce0:
            local_10c0 = 0;
            local_10d0 = 0;
            uStack_10c8 = 0;
            local_10d8 = 0;
            local_10bc = 0xffffffff;
            iVar8 = FUN_1005c9be4(&local_10b8,uVar1,1000,2,&local_10d8);
            if (iVar8 == 0) {
              uVar9 = FUN_1005c8da0(&local_10d8);
              bVar3 = true;
              iVar8 = FUN_10063a2fc(0x3f800000,lVar13,uVar9,
                                    *(undefined4 *)(*(long *)(param_1 + 8) + 0x100),5,uVar1 << 1,1,1
                                    ,1);
              iVar7 = iVar8;
              if (iVar8 == 0) {
                FUN_1005c8d10(&local_10d8);
                bVar3 = false;
                iVar8 = 0;
                iVar7 = local_10e4;
              }
            }
            else {
              bVar3 = true;
              iVar7 = iVar8;
            }
            local_10e4 = iVar7;
            FUN_1005c8e48(&local_10d8);
          }
          else {
            *(int *)(param_1 + 0x974) = *(int *)(param_1 + 0x974) + 1;
            iVar8 = FUN_1005cb3bc(&local_10b8,*(long *)(param_1 + 0x47f0),uVar1);
            if (iVar8 == 0) goto LAB_10058fce0;
            bVar3 = true;
            local_10e4 = iVar8;
          }
          if (!bVar5 && bVar4) {
            FUN_100570990(lVar15,3);
          }
          if ((lVar14 != 0) && (bVar6)) {
            FUN_100570990(lVar14,1);
          }
          if (bVar3) goto LAB_10058fe3c;
        }
        uVar2 = *(int *)(*(long *)(param_1 + 8) + 0x100) - 1;
        uVar10 = uVar1;
        if (uVar2 < 5) {
          uVar10 = *(int *)(&DAT_10115e390 + (long)(int)uVar2 * 4) * uVar1 >> 3;
        }
        uVar12 = uVar1 + uVar12;
        lVar13 = lVar13 + (ulong)(uVar10 * *(int *)(*(long *)(param_1 + 8) + 0x104));
        uVar11 = uVar11 - uVar1;
      } while (uVar12 < param_3);
    }
    *(uint *)(param_1 + 0x968) = uVar11;
  }
  local_10e4 = iVar8;
  if (param_4 != (uint *)0x0) {
    *param_4 = param_3;
  }
LAB_10058fe3c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return local_10e4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10058fe80(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long local_38;
  
  if (param_4 == 2) {
    if (*(uint *)(param_1 + 0x970) == param_3) {
      uVar5 = 0;
    }
    else {
      if (param_3 < *(uint *)(param_1 + 0x970)) {
        FUN_1005d8fe8(param_1,0);
        lVar7 = (long)*(int *)(param_1 + 0xd14);
        do {
          bVar2 = *(byte *)(param_1 + lVar7 + 0x2b0);
          if ((int)(uint)bVar2 < *(int *)(param_1 + 0xa0c)) {
            *(undefined8 *)(param_1 + 0x4540) =
                 *(undefined8 *)(*(long *)(param_1 + 0x298) + (ulong)bVar2 * 0x10 + 8);
            FUN_10058a92c(param_1);
            bVar4 = true;
            goto LAB_100590014;
          }
          iVar1 = (int)lVar7 + 1;
          *(int *)(param_1 + 0xd14) = iVar1;
        } while ((iVar1 < 0xff) && (lVar7 = lVar7 + 1, iVar1 < *(int *)(param_1 + 0xa04)));
        *(undefined2 *)(param_1 + 0xd00) = 0x100;
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
LAB_100590014:
      while (*(uint *)(param_1 + 0x970) < param_3) {
        FUN_100588fa4(param_1,1);
      }
      if (bVar4) {
        uVar3 = *(undefined2 *)(param_1 + 0xd00);
        FUN_1005d9258(param_1);
        uVar5 = 0;
        *(undefined2 *)(param_1 + 0xd00) = uVar3;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_4 == 0x100) {
    FUN_1005d8fe8(param_1,0);
    lVar7 = (long)*(int *)(param_1 + 0xd14);
    do {
      bVar2 = *(byte *)(param_1 + lVar7 + 0x2b0);
      if ((int)(uint)bVar2 < *(int *)(param_1 + 0xa0c)) {
        *(undefined8 *)(param_1 + 0x4540) =
             *(undefined8 *)(*(long *)(param_1 + 0x298) + (ulong)bVar2 * 0x10 + 8);
        FUN_10058a92c(param_1);
        goto LAB_10058ff88;
      }
      iVar1 = (int)lVar7 + 1;
      *(int *)(param_1 + 0xd14) = iVar1;
    } while ((iVar1 < 0xff) && (lVar7 = lVar7 + 1, iVar1 < *(int *)(param_1 + 0xa04)));
    *(undefined2 *)(param_1 + 0xd00) = 0x100;
LAB_10058ff88:
    lVar7 = 0;
    *(uint *)(param_1 + 0xd14) = param_3;
    *(uint *)(param_1 + 0xd24) = param_3;
    do {
      local_38 = 0;
      plVar6 = *(long **)(param_1 + 0x4560 + lVar7 * 8);
      if (plVar6 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 0x118))(plVar6,0,&local_38);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (local_38 != 0) {
          FUN_1005cede0();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < 0x32);
    uVar5 = 0;
  }
  else {
    uVar5 = 0x13;
  }
  return uVar5;
}

