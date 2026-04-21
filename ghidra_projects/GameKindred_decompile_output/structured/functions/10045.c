// functions/10045 — 514 functions
#include "GameKindred.h"




undefined8 * thunk_FUN_10045cc04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101499960;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[7] = 0xbf800000c0000000;
  param_1[6] = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x44) = 0xff;
  param_1[10] = 0xffffffff00000000;
  param_1[9] = 0xffffffff00000000;
  *(undefined2 *)(param_1 + 0xb) = 0x4100;
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xe1 | 0x14;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc | 1;
  lVar1 = FUN_1003e10f0();
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xfe | *(byte *)(lVar1 + 0xe5)
  ;
  return param_1;
}




void thunk_FUN_100455d80(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcStack_40;
  undefined4 uStack_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_OutOfAmmo_10185d230);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Caine_Revolver_Loaded");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ad578(*(undefined4 *)(lVar1 + 0x5d4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_OutOfAmmo_10185d230);
  pcStack_40 = FUN_1003d00a8;
  uStack_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&pcStack_40);
  return;
}




void thunk_FUN_100455d80(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcStack_40;
  undefined4 uStack_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_OutOfAmmo_10185d230);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Caine_Revolver_Loaded");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ad578(*(undefined4 *)(lVar1 + 0x5d4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_OutOfAmmo_10185d230);
  pcStack_40 = FUN_1003d00a8;
  uStack_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&pcStack_40);
  return;
}




void FUN_100450024(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  float local_2c;
  undefined1 local_28;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = *(ushort *)(param_2 + 0x344);
    iVar2 = (uint)uVar1 - *(int *)(param_1 + 0x20);
    if (iVar2 != 0) {
      local_3c = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260);
      local_34 = *(undefined8 *)(param_1 + 0x10);
      local_2c = *(float *)(param_1 + 0x18) * (float)iVar2;
      local_28 = *(undefined1 *)(param_1 + 0x1c);
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_58 = &PTR_FUN_1014971e0;
      uStack_38 = 0xffffffff;
      FUN_1004969f4(&local_58,&DAT_101e47d30);
      *(uint *)(param_1 + 0x20) = (uint)uVar1;
    }
  }
  return;
}




void FUN_1004500c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  float local_3c;
  undefined1 local_38;
  
  if (DAT_101d23a38 != '\0') {
    lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    fVar3 = (float)(**(code **)(param_1 + 0x10))(lVar2);
    fVar4 = (float)(**(code **)(param_1 + 0x18))(lVar2);
    lVar1 = *(long *)(lVar2 + 0x40);
    fVar5 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
    fVar3 = fVar3 + (DAT_101e94300 + -1.0) * (fVar4 - fVar3) * 0.09090909;
    local_4c = *(undefined4 *)(lVar2 + 0x260);
    local_44 = *(undefined8 *)(param_1 + 0x24);
    local_3c = fVar3 - *(float *)(param_1 + 0x20);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_68 = &PTR_FUN_1014971e0;
    uStack_48 = 0xffffffff;
    local_38 = 0;
    FUN_1004969f4(&local_68,&DAT_101e47d30);
    *(float *)(param_1 + 0x20) = fVar3;
  }
  return;
}




void FUN_1004501c0(long param_1,long param_2)

{
  long lVar1;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined2 local_2f;
  undefined4 local_24;
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    local_24 = *(undefined4 *)(param_1 + 0x14);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,&local_24);
    }
    local_3c = *(undefined4 *)(lVar1 + 0x260);
    uStack_38 = *(undefined4 *)(param_1 + 0x10);
    local_30 = *(undefined1 *)(param_1 + 0x20);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = &PTR_FUN_101497218;
    local_2f = 1;
    local_34 = local_24;
    FUN_100496328(&local_58,&DAT_101e47d30);
  }
  return;
}




void FUN_100450260(undefined8 param_1,long param_2)

{
  FUN_1003c5838(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
  *(uint *)(param_2 + 0x340) =
       *(uint *)(param_2 + 0x340) & 0xfffffff0 | *(uint *)(param_2 + 0x340) + 1 & 0xf;
  return;
}




void FUN_100450298(undefined8 param_1,long param_2)

{
  FUN_1003c5838(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
  *(uint *)(param_2 + 0x340) =
       *(uint *)(param_2 + 0x340) & 0xfffffff0 | *(uint *)(param_2 + 0x340) + 1 & 0xf;
  return;
}




void FUN_1004502d0(undefined8 param_1,long param_2)

{
  FUN_1003c58cc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
  *(uint *)(param_2 + 0x340) =
       *(uint *)(param_2 + 0x340) & 0xfffffff0 | *(uint *)(param_2 + 0x340) - 1 & 0xf;
  return;
}




void FUN_100450308(undefined8 param_1,long *param_2)

{
  uint uVar1;
  
  FUN_1003c5838(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  uVar1 = *(uint *)(*param_2 + 0x340);
  *(uint *)(*param_2 + 0x340) = uVar1 & 0xfffffff0 | uVar1 + 1 & 0xf;
  return;
}




void FUN_100450348(undefined8 param_1,long *param_2)

{
  uint uVar1;
  
  FUN_1003c58cc(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  uVar1 = *(uint *)(*param_2 + 0x340);
  *(uint *)(*param_2 + 0x340) = uVar1 & 0xfffffff0 | uVar1 - 1 & 0xf;
  return;
}




void FUN_100450388(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dda8);
  *(char *)(lVar1 + 0x68) = *(char *)(lVar1 + 0x68) + '\x01';
  return;
}




void FUN_1004503c8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dda8);
  *(char *)(lVar1 + 0x68) = *(char *)(lVar1 + 0x68) + -1;
  return;
}




void FUN_100450408(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dda8);
  *(char *)(lVar1 + 0x69) = *(char *)(lVar1 + 0x69) + '\x01';
  return;
}




void FUN_100450444(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dda8);
  *(char *)(lVar1 + 0x69) = *(char *)(lVar1 + 0x69) + -1;
  return;
}




void FUN_100450480(undefined8 param_1,long param_2)

{
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined2 local_18;
  undefined1 local_16;
  
  if (DAT_101d23a38 != '\0') {
    local_24 = *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = &PTR_FUN_101497218;
    local_20 = 0xc61c400000000000;
    local_18 = 0x101;
    local_16 = 0;
    FUN_100496328(&local_40,&DAT_101e47d30);
  }
  return;
}




void FUN_1004504f0(undefined8 param_1,long param_2)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  if (DAT_101d23a38 != '\0') {
    puVar1 = (ushort *)(lVar3 + 0x301);
    *puVar1 = *puVar1 | 0x8000;
    return;
  }
  plVar2 = *(long **)(lVar3 + 0x50);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010045052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x150))(plVar2,1);
    return;
  }
  return;
}




void FUN_100450534(long param_1,long param_2)

{
  FUN_1003c61fc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_100450548(long param_1,long param_2)

{
  FUN_1003c61fc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_10045055c(undefined8 param_1,undefined8 param_2)

{
  FUN_100450564(param_1,param_2,1);
  return;
}




void FUN_100450564(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != -1) {
    iVar2 = FUN_10034ee90();
    if (iVar1 != iVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x14) != -1) goto LAB_1004505c0;
  }
  FUN_10034ee90();
LAB_1004505c0:
  uVar3 = FUN_100345d90();
  uVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x10));
  if (param_3 == 0) {
    FUN_1004506fc(uVar3);
    return;
  }
  FUN_10045060c(uVar3,uVar4,*(undefined1 *)(param_1 + 0x18));
  return;
}




void FUN_100450604(undefined8 param_1,undefined8 param_2)

{
  FUN_100450564(param_1,param_2,0);
  return;
}




void FUN_10045060c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100450640:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x623d0838), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100450640;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1004506fc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100450720:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x9dd50aa9), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100450720;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1004507d0(long param_1,long param_2)

{
  if (DAT_101d23a38 != '\0') {
    return;
  }
  FUN_1004507f4(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),*(undefined1 *)(param_1 + 0x10));
  return;
}




void FUN_1004507f4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100450820:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x284e050e), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100450820;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1004508d8(long param_1,long param_2)

{
  if (DAT_101d23a38 != '\0') {
    FUN_1004508fc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),*(undefined1 *)(param_1 + 0x10))
    ;
    return;
  }
  return;
}




void FUN_1004508fc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_100450928:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xa72e0b14), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100450928;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar4 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1004509e0(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  uint local_54;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  iVar2 = DAT_1018589d8 + 1;
  *(int *)(param_1 + 0x14) = DAT_1018589d8;
  DAT_1018589d8 = iVar2;
  iVar2 = FUN_1004393e4(param_2);
  if (iVar2 == 2) {
    iVar2 = FUN_1003461dc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
LAB_100450a48:
    if (iVar2 == -1) goto LAB_100450a50;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = *(int *)(param_2 + 0x308);
      goto LAB_100450a48;
    }
LAB_100450a50:
    if (*(int *)(param_2 + 0x308) == -1) {
      return;
    }
    lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) == *(int *)(param_2 + 0x308)) {
      uVar6 = *(undefined1 *)(lVar4 + 0x300);
      lVar3 = lVar4;
      goto LAB_100450ab4;
    }
  }
  lVar3 = FUN_100345d90();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  uVar6 = *(undefined1 *)(lVar3 + 0x300);
  lVar3 = lVar4;
  if (*(int *)(lVar4 + 0x260) != *(int *)(param_2 + 0x308)) {
    lVar4 = FUN_100345d90(*(int *)(param_2 + 0x308));
    lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  }
LAB_100450ab4:
  local_6f = *(undefined1 *)(lVar4 + 0x300);
  local_6e = *(undefined1 *)(lVar3 + 0x300);
  uStack_58 = *(undefined4 *)(param_1 + 0x10);
  pcVar5 = *(char **)(param_1 + 0x18);
  if (pcVar5 == (char *)0x0) {
    local_54 = 0;
  }
  else {
    local_54 = 0x811c9dc5;
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      local_54 = (local_54 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  local_3c = *(undefined4 *)(param_1 + 0x14);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = &PTR_FUN_101497058;
  local_74 = 0;
  local_64 = 0;
  local_6c = 0;
  local_5c = 0;
  uStack_38 = 0;
  local_70 = uVar6;
  FUN_1004966e0(&local_90,&DAT_101e47d30);
  return;
}




void FUN_100450b60(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    uVar2 = *(undefined4 *)(lVar1 + 0x250);
    fVar4 = *(float *)(lVar1 + 0x254);
    uVar3 = *(undefined4 *)(lVar1 + 600);
    fVar5 = *(float *)(lVar1 + 0x2ec);
    lVar1 = FUN_1003d68a8(*(undefined4 *)(param_1 + 0x14));
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x6c) = uVar2;
      *(float *)(lVar1 + 0x70) = fVar5 + fVar4;
      *(undefined4 *)(lVar1 + 0x74) = uVar3;
      FUN_100129a64(lVar1,0);
      return;
    }
  }
  return;
}




void FUN_100450bd0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  int local_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  
  iVar1 = DAT_1018589d8;
  if (DAT_101d23a38 != '\0') {
    iVar2 = DAT_1018589d8 + 1;
    *(int *)(param_1 + 0x24) = DAT_1018589d8;
    DAT_1018589d8 = iVar2;
    if (*(char *)(param_1 + 0x30) == '\0') {
      lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
      fVar4 = *(float *)(lVar3 + 0x240);
      fVar6 = *(float *)(lVar3 + 0x248);
      fVar5 = fVar4 * fVar4 + *(float *)(lVar3 + 0x244) * *(float *)(lVar3 + 0x244) + fVar6 * fVar6;
      if (1e-08 <= fVar5) {
        fVar5 = SQRT(fVar5);
        fVar4 = fVar4 / fVar5;
        fVar6 = fVar6 / fVar5;
      }
      else {
        fVar4 = 1.0;
        fVar6 = 0.0;
      }
      uStack_38 = _atan2f(fVar6,fVar4);
      uStack_68 = *(undefined4 *)(param_2 + 0x308);
      local_48 = *(undefined4 *)(lVar3 + 0x260);
      local_44 = *(undefined4 *)(param_1 + 0x20);
      local_40 = *(undefined4 *)(param_1 + 0x2c);
      local_3c = *(undefined4 *)(param_1 + 0x28);
      local_64 = 0x80000000800000;
      local_5c = 0x800000;
      local_58 = DAT_101dc1cb8;
      uStack_50 = DAT_101dc1cb8;
      local_34 = 0;
    }
    else {
      uStack_68 = *(undefined4 *)(param_2 + 0x308);
      uStack_50 = *(undefined8 *)(param_1 + 0x18);
      local_58 = *(undefined8 *)(param_1 + 0x10);
      local_34 = 1;
    }
    local_6c = iVar1;
    local_70 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_88 = &PTR_FUN_101496d80;
    FUN_10049713c(&local_88,&DAT_101e47d30);
  }
  return;
}




void FUN_100450d28(void)

{
  return;
}




void FUN_100450d2c(long param_1)

{
  undefined **local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_14;
  
  if (DAT_101d23a38 != '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x24);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = &PTR_FUN_101496df0;
    FUN_1004971c0(&local_30,&DAT_101e47d30);
  }
  return;
}




void FUN_100450d7c(void)

{
  return;
}




void FUN_100450d80(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar1 = param_2 + 0x168;
    uVar2 = FUN_1004d2524("__REAPPLYING_VAR1_FLOAT__");
    uVar3 = FUN_100015208("__REAPPLYING_VAR1_FLOAT__",uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    uVar5 = *puVar4;
    uVar2 = FUN_1004d2524("__REAPPLYING_VAR1_INT__");
    uVar3 = FUN_100015208("__REAPPLYING_VAR1_INT__",uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    uVar2 = *puVar4;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___VAR1_INT___10185d7f8);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = uVar2;
    uVar3 = (*(code *)**(undefined8 **)(param_2 + 0x168))(lVar1,PTR_s___VAR1_FLOAT___10185d7e8);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(lVar1,uVar3);
    *puVar4 = uVar5;
  }
  return;
}




void FUN_100450e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498868;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100450ea4(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  lVar3 = *(long *)(lVar1 + 0x18);
  uVar2 = 0;
  if (lVar3 != 0) {
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
        uVar2 = *(byte *)(lVar3 + 0x818) >> 3 & 3;
        goto LAB_100450ee4;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
    uVar2 = 0;
  }
LAB_100450ee4:
  *(uint *)(param_1 + 0x14) = uVar2;
  FUN_100465eb0(lVar1,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_100450ef4(long param_1,long *param_2)

{
  FUN_100465eb0(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}




void FUN_100450f0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014988a8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_100450f20(long param_1,long *param_2)

{
  FUN_100465eb0(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),*(undefined4 *)(param_1 + 0x10));
  return;
}




long * FUN_100450f38(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (long)param_2;
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    *param_1 = (long)param_2;
    while( true ) {
      param_1[1] = (long)param_2;
      lVar1 = (**(code **)(*param_2 + 0x28))();
      if (lVar1 == 0) break;
      param_2 = (long *)(**(code **)(*(long *)param_1[1] + 0x28))();
    }
  }
  return param_1;
}




void FUN_100450f94(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (*param_1 == 0) {
    *param_1 = (long)param_2;
    param_1[1] = (long)param_2;
    param_1 = (long *)param_1[2];
  }
  else {
    param_1 = param_1 + 1;
    plVar3 = (long *)(*param_1 + 8);
    plVar2 = param_2;
    if (*plVar3 != 0) {
      do {
        lVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if (lVar1 == 0) break;
        plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
      } while (plVar2 != (long *)0x0);
      plVar3 = plVar2 + 1;
    }
    *plVar3 = (long)param_2;
  }
  *param_1 = (long)param_2;
  return;
}




long FUN_100451018(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
      return lVar2;
    }
  }
  return lVar2;
}




long FUN_10045104c(long *param_1)

{
  return *param_1 + 0x168;
}




void FUN_100451058(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  long local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  if ((*(byte *)(local_50 + 0xc) >> 4 & 1) == 0) {
    iVar1 = *(int *)(*(long *)(*(long *)(local_48 + 0x10) + 0x10) + 0x260);
    if ((*(int *)(local_50 + 0x10) == iVar1) && (*(long *)(local_50 + 0x20) != 0)) {
      uVar5 = FUN_10043d9a0();
    }
    else {
      uVar5 = 0;
    }
    if ((*(int *)(local_50 + 0x18) == iVar1) && (*(long *)(local_50 + 0x28) != 0)) {
      uVar3 = FUN_10043d9a0();
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 1;
    }
    puVar2 = PTR_s_bStackOnDefend_10185d6f0;
    uVar4 = FUN_1004d2524(PTR_s_bStackOnDefend_10185d6f0);
    uVar6 = FUN_100015208(puVar2,uVar4,0x12345678);
    pcVar7 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar6);
    if (((uVar5 & 1) != 0) || (*pcVar7 != '\0' && (uVar3 & 1) == 0)) {
      uVar9 = FUN_100032228();
      puVar2 = PTR_s_timeOfLastDamageExchange_10185d6d0;
      uVar4 = FUN_1004d2524(PTR_s_timeOfLastDamageExchange_10185d6d0);
      uVar6 = FUN_100015208(puVar2,uVar4,0x12345678);
      puVar8 = (undefined4 *)
               (**(code **)(*(long *)(local_48 + 0x168) + 0x10))(local_48 + 0x168,uVar6);
      *puVar8 = uVar9;
    }
  }
  return;
}




void FUN_10045119c(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined1 local_70;
  long local_68;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_68);
    lVar10 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
    fVar11 = (float)FUN_100032228();
    puVar3 = PTR_s_timeOfLastDamageExchange_10185d6d0;
    uVar4 = FUN_1004d2524(PTR_s_timeOfLastDamageExchange_10185d6d0);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    pfVar6 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    puVar3 = PTR_s_lastStackTime_10185d6d8;
    fVar12 = *pfVar6;
    uVar4 = FUN_1004d2524(PTR_s_lastStackTime_10185d6d8);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    pfVar6 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    puVar3 = PTR_s_stackRate_10185d6e0;
    uVar4 = FUN_1004d2524(PTR_s_stackRate_10185d6e0);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    puVar3 = PTR_s_decayTime_10185d6e8;
    fVar13 = *pfVar7;
    uVar4 = FUN_1004d2524(PTR_s_decayTime_10185d6e8);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    puVar3 = PTR_s_stackFalloff_10185d700;
    fVar14 = *pfVar7;
    uVar4 = FUN_1004d2524(PTR_s_stackFalloff_10185d700);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    piVar8 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    puVar3 = PTR_s_bDecayAllStacks_10185d6f8;
    iVar2 = *piVar8;
    uVar4 = FUN_1004d2524(PTR_s_bDecayAllStacks_10185d6f8);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    pcVar9 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    if (*pfVar6 + fVar13 <= fVar11) {
      if ((fVar12 < *pfVar6) ||
         (uVar1 = *(uint *)(local_68 + 0x344) & 0xffff, *(uint *)(local_68 + 0x344) >> 0x10 <= uVar1
         )) {
        if (fVar11 <= fVar14 + fVar12) {
          return;
        }
        if (*(ushort *)(local_68 + 0x344) == 0) {
          return;
        }
        fVar11 = (float)(int)((uint)*(ushort *)(local_68 + 0x344) - iVar2);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        local_74 = (int)fVar11;
        if (*pcVar9 != '\0') {
          local_74 = 0;
        }
        local_7c = *(undefined4 *)(lVar10 + 0x260);
        uStack_78 = *(undefined4 *)(local_68 + 0x30c);
      }
      else {
        local_7c = *(undefined4 *)(lVar10 + 0x260);
        uStack_78 = *(undefined4 *)(local_68 + 0x30c);
        local_74 = uVar1 + 1;
      }
      local_80 = 0;
      uStack_88 = 0;
      local_90 = 0;
      local_98 = &PTR_FUN_1014972c0;
      local_70 = 1;
      FUN_1004968dc(&local_98,&DAT_101e47d30);
      fVar11 = (float)FUN_100032228();
      *pfVar6 = fVar11;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100451440(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_34;
  undefined4 local_2c;
  long local_28;
  
  FUN_10042ecbc(param_1,&local_28);
  lVar4 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x88) & 0x1f;
  if ((((int)uVar2 != 0x1f) && (*(short *)(lVar4 + uVar2 * 0x38 + 0x90) == 1)) &&
     (plVar1 = *(long **)(lVar4 + 0x50), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(0x3f800000,plVar1,"Idle",1,0);
  }
  if (DAT_101d23a38 != '\0') {
    local_37 = *(undefined1 *)(lVar4 + 0x300);
    lVar4 = *(long *)(lVar4 + 0x18);
    if (lVar4 == 0) {
      puVar3 = &DAT_1013cd800;
    }
    else {
      puVar3 = &DAT_1013cd800;
      do {
        if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
          puVar3 = (undefined8 *)(lVar4 + 0x7b0);
          break;
        }
        lVar4 = *(long *)(lVar4 + 0x20);
      } while (lVar4 != 0);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = &PTR_FUN_101497410;
    local_34 = *puVar3;
    local_2c = *(undefined4 *)(puVar3 + 1);
    FUN_100497b38(&local_50,&DAT_101e47d30);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10045154c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return &DAT_1013cd800;
  }
  do {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
      return (undefined8 *)(lVar1 + 0x7b0);
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while (lVar1 != 0);
  return &DAT_1013cd800;
}




void FUN_100451594(void)

{
  return;
}




bool FUN_100451598(undefined8 param_1,long *param_2)

{
  return *(char *)(*param_2 + 0x8e) == '\0';
}




void FUN_1004515ac(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if ((*(byte *)(lVar1 + 0x2f4) & 1) == 0) {
    uVar3 = 1;
  }
  else {
    if ((*(int *)(lVar1 + 0x260) != -1) && (DAT_101e47e88 == '\x01')) {
      lVar2 = 0;
      do {
        if (*(int *)(DAT_101e47e80 + lVar2 + 8) == *(int *)(lVar1 + 0x260)) {
          uVar3 = *(undefined4 *)(DAT_101e47e80 + lVar2 + 0x88);
          goto LAB_100451624;
        }
        lVar2 = lVar2 + 200;
      } while (lVar2 != 0xc80);
    }
    uVar3 = 0;
  }
LAB_100451624:
  lVar1 = FUN_1003e1210(*(undefined1 *)(lVar1 + 0x264),uVar3);
  uVar3 = *(undefined4 *)(lVar1 + 0x38);
  *param_2 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined4 *)(param_2 + 1) = uVar3;
  *param_3 = 0;
  return;
}




void FUN_100451654(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((DAT_101d23a68 != (int *)0x0) && (*DAT_101d23a68 == 0x34)) {
    uVar4 = 0xc2b40000;
    uVar5 = 0;
    goto LAB_100451770;
  }
  if ((*(byte *)(param_2 + 0x2f4) & 1) == 0) {
    iVar1 = FUN_1003461dc(param_2);
    if (iVar1 == -1) {
      uVar5 = 1;
      goto LAB_100451760;
    }
    iVar1 = FUN_1003461dc(param_2);
    if ((iVar1 != -1) && (DAT_101e47e88 == '\x01')) {
      uVar2 = 0;
      lVar3 = 8;
      do {
        if (*(int *)(DAT_101e47e80 + lVar3) == iVar1) goto LAB_100451750;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 200;
      } while (uVar2 != 0x10);
    }
  }
  else if ((*(int *)(param_2 + 0x260) != -1) && (DAT_101e47e88 == '\x01')) {
    uVar2 = 0;
    lVar3 = 8;
    do {
      if (*(int *)(DAT_101e47e80 + lVar3) == *(int *)(param_2 + 0x260)) goto LAB_100451750;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 200;
    } while (uVar2 != 0x10);
  }
  uVar5 = 0;
LAB_100451760:
  lVar3 = FUN_1003e1210(*(undefined1 *)(param_2 + 0x264),uVar5);
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  uVar5 = *(undefined4 *)(lVar3 + 0x38);
LAB_100451770:
  *param_3 = uVar4;
  *(undefined4 *)(param_3 + 1) = uVar5;
  return;
LAB_100451750:
  uVar5 = *(undefined4 *)(DAT_101e47e80 + (uVar2 & 0xffffffff) * 200 + 0x88);
  goto LAB_100451760;
}




void FUN_100451784(long *param_1)

{
  long lVar1;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(char *)(lVar1 + 0x264) == '\x01') {
    local_30 = 0x3f800000;
    local_28 = 0;
  }
  else {
    local_30 = 0x80000000bf800000;
    local_28 = 0x80000000;
  }
  local_20 = *(undefined8 *)(lVar1 + 0x250);
  local_18 = *(undefined4 *)(lVar1 + 600);
  FUN_1003d90d4(lVar1,&local_20,&local_30);
  return;
}




float FUN_10045180c(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  return DAT_101e94260 * 0.25;
}




float FUN_100451860(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a8),DAT_101e94328);
  return DAT_101e94268 * 0.25;
}




undefined8 FUN_1004518b4(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = FUN_10034e8e4(*(undefined4 *)(*(long *)(*(long *)(lVar3 + 0x10) + 0x10) + 0x260));
  if ((int)uVar2 != 0) {
    iVar1 = *(int *)(lVar3 + 0x308);
    if ((iVar1 != -1) && (DAT_101e47e88 == '\x01')) {
      lVar3 = 0;
      do {
        if (*(int *)(DAT_101e47e80 + lVar3 + 8) == iVar1) {
          if (2 < *(byte *)(DAT_101e47e80 + lVar3 + 0xc0)) {
            return 1;
          }
          break;
        }
        lVar3 = lVar3 + 200;
      } while (lVar3 != 0xc80);
    }
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_100451944(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(int *)(*param_1 + 0x308) != -1) && (DAT_101e47e88 == '\x01')) {
    lVar2 = 0;
    do {
      if (*(int *)(DAT_101e47e80 + lVar2 + 8) == *(int *)(*param_1 + 0x308)) {
        uVar1 = *(ulong *)(DAT_101e47e80 + lVar2 + 0xbc);
        if (3 < ((int)(uVar1 >> 0x20) - 3U & 0xff)) {
          return;
        }
        FUN_1004d2628(param_2,(&PTR_s_Effect_Nothing_1014988d8)[uVar1 >> 0x20 & 0xff]);
        return;
      }
      lVar2 = lVar2 + 200;
    } while (lVar2 != 0xc80);
  }
  return;
}




void FUN_1004519c8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018b10();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined1 FUN_100451a18(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x308) == -1) ||
     ((lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10),
      *(int *)(lVar2 + 0x260) != *(int *)(param_1 + 0x308) && (lVar2 = FUN_100345d90(), lVar2 == 0))
     )) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x264);
  }
  return uVar1;
}




undefined4 FUN_100451a64(long param_1)

{
  if (*(long *)(param_1 + 0x440) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x440) + 0x260);
  }
  return 0xffffffff;
}




void FUN_100451a7c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0x3fc00000;
  return;
}




void FUN_100451aa4(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *param_2 = 0;
  *param_3 = 0;
  *param_5 = 0x40490fdb;
  *param_4 = 0x3fc00000;
  return;
}




void FUN_100451adc(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *param_2 = 0;
  *param_3 = 0;
  *param_5 = 0x4096cbe4;
  *param_4 = 0x3fc00000;
  return;
}




void FUN_100451b1c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *param_2 = 0;
  *param_3 = 0;
  *param_5 = 0x3fc90fdb;
  *param_4 = 0x3fc00000;
  return;
}




void FUN_100451b5c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a700();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100451bac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a214();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined4 FUN_100451bfc(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




float FUN_100451c10(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  iVar1 = *(ushort *)(*param_1 + 0x344) + 1;
  fVar3 = (float)FUN_1003dfe60(uVar2,0,3,0x19,0);
  fVar4 = (float)FUN_1003dfe60(uVar2,0,4,0x19,0);
  fVar6 = (float)iVar1;
  fVar5 = (float)___powisf2(iVar1);
  return (fVar3 - fVar3 * fVar5) / (fVar6 - fVar6 * fVar4);
}




void FUN_100451c9c(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_s_EngineRevLastDuration_10185d710;
  lVar5 = *param_1;
  uVar2 = FUN_1004d2524(PTR_s_EngineRevLastDuration_10185d710);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x18))(lVar5 + 0x168,uVar3);
  fVar6 = *pfVar4;
  *(float *)(lVar5 + 0x31c) = fVar6;
  *(float *)(lVar5 + 0x318) = fVar6;
  *(uint *)(lVar5 + 0x340) =
       *(uint *)(lVar5 + 0x340) & 0xfffe0 | (uint)(fVar6 < 0.0) << 4 |
       *(uint *)(lVar5 + 0x340) & 0xfff0000f;
  return;
}




void FUN_100451d28(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100451c10();
  *param_2 = uVar1;
  return;
}




void FUN_100451d4c(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if ((*(ushort *)(lVar1 + 0x344) & 0xfffe) != 0) {
    FUN_100451c9c();
    fVar2 = (float)(int)(*(ushort *)(lVar1 + 0x344) - 1);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    FUN_100469600(lVar1,(int)fVar2,1);
    return;
  }
  return;
}




float FUN_100451da8(long *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(undefined2 *)(*param_1 + 0x344);
  fVar2 = (float)FUN_1003dfe60(param_2,0,5,0x19,0);
  fVar3 = (float)FUN_1003dfe60(param_2,0,6,0x19,0);
  fVar4 = (float)___powisf2(uVar1);
  return (fVar2 - fVar2 * fVar4) / (1.0 - fVar3);
}




void FUN_100451e24(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100451e30(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_100451e3c(long *param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  *param_2 = *(undefined4 *)(lVar1 + 0x250);
  fVar2 = *(float *)(lVar1 + 0x254);
  param_2[1] = fVar2;
  uVar3 = *(undefined4 *)(lVar1 + 600);
  param_2[1] = *(float *)(lVar1 + 0x2ec) + fVar2;
  param_2[2] = uVar3;
  return;
}




void FUN_100451e6c(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  int local_28 [2];
  
  *param_2 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  lVar2 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_1003a4e5c(local_28,PTR_s_Buff_HeroPLU_EngineStacks_10185b190);
  plVar1 = (long *)(lVar2 + 0x28);
  while ((lVar2 = *plVar1, *(int *)(lVar2 + 0x314) != local_28[0] || (*(int *)(lVar2 + 0x310) != 0))
        ) {
    plVar1 = (long *)(lVar2 + 0x350);
  }
  *param_3 = *(undefined4 *)(lVar2 + 0x30c);
  return;
}




void FUN_100451f14(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018e3c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100451f64(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a55c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




float FUN_100451fb4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  return (*(float *)(lVar1 + 0x318) * 100.0) / *(float *)(lVar1 + 0x31c) -
         *(float *)(*(long *)(*(long *)(*(long *)(lVar1 + 0x10) + 0x10) + 0x40) + 0x314);
}




void FUN_100451fe8(long *param_1,long param_2,undefined4 *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar2 = (float)FUN_1003dfe60(lVar1,6,6,0x19,0);
  uVar3 = FUN_1003dfe60(lVar1,6,5,0x19,0);
  *param_3 = uVar3;
  fVar4 = *(float *)(param_2 + 600);
  fVar5 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar6 = *(float *)(param_2 + 0x250) - *(float *)(lVar1 + 0x250);
  fVar7 = fVar5 - (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec));
  fVar8 = fVar4 - *(float *)(lVar1 + 600);
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
  if (0.0001 <= fVar9) {
    fVar9 = 1.0 / SQRT(fVar9);
    fVar6 = fVar6 * fVar9;
    fVar7 = fVar7 * fVar9;
    fVar8 = fVar8 * fVar9;
  }
  else {
    fVar6 = 1.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  *param_4 = *(float *)(param_2 + 0x250) + fVar2 * fVar6;
  param_4[1] = fVar5 + fVar2 * fVar7;
  param_4[2] = fVar4 + fVar2 * fVar8;
  return;
}




void FUN_1004520f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,6,2,0x19,0);
  return;
}




void FUN_100452104(undefined8 param_1)

{
  FUN_1003dfe60(param_1,6,3,0x19,0);
  return;
}




void FUN_100452118(undefined8 param_1)

{
  FUN_1003dfe60(param_1,6,4,0x19,0);
  return;
}




void FUN_10045212c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar2);
  lVar1 = FUN_100345d90();
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar5 = *(float *)(lVar2 + 0x254);
  uVar4 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  if (lVar1 != 0) {
    *(long *)(param_2 + 8) = lVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar4;
  *(undefined4 *)(param_2 + 0x30) = 0x40800000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  *(undefined4 *)(param_2 + 0x48) = 1;
  return;
}




void FUN_1004521b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar2);
  lVar1 = FUN_100345d90();
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar5 = *(float *)(lVar2 + 0x254);
  uVar4 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  if (lVar1 != 0) {
    *(long *)(param_2 + 8) = lVar1;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar4;
  *(undefined4 *)(param_2 + 0x30) = 0x40800000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x8050;
  *(undefined4 *)(param_2 + 0x48) = 1;
  return;
}




void FUN_100452234(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x40800000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8040;
  return;
}




void FUN_1004522b4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x41100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x8070;
  return;
}




void FUN_100452324(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x40800000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  return;
}




void FUN_1004523a4(undefined8 param_1)

{
  FUN_1003df710(param_1,4,3);
  return;
}




undefined4 FUN_1004523b0(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  fVar3 = (float)FUN_1003dfe60(lVar2,0,4,0x19,0);
  fVar6 = *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
  fVar4 = (float)FUN_1003dfe60(lVar2,0,5,0x19,0);
  fVar3 = fVar3 + fVar6 * fVar4;
  fVar4 = (float)FUN_1003dfe60(lVar2,0,6,0x19,0);
  iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Lorelai_Talent_TalentB_10185c5c8);
  if (iVar1 != 0) {
    local_40[0] = DAT_101d90df4;
    fVar6 = (float)FUN_1003dfee8(lVar2,local_40,0,9);
    fVar3 = fVar6 + fVar3;
    local_38[0] = DAT_101d90df4;
    fVar6 = (float)FUN_1003dfee8(lVar2,local_38,0,9);
    fVar4 = fVar6 + fVar4;
  }
  iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Lorelai_EmpoweredNoBonus_10185b1b8);
  if (iVar1 != 0) {
    fVar6 = (float)FUN_1003dfe60(lVar2,0,8,0x19,0);
    fVar3 = fVar6 * fVar3;
    fVar4 = fVar6 * fVar4;
  }
  uVar5 = NEON_fminnm(fVar3,fVar4);
  return uVar5;
}




undefined4 FUN_1004524f8(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_10045250c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




bool FUN_100452520(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_2 + 0x264);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar2 = FUN_100345d90();
  }
  return cVar1 != *(char *)(lVar2 + 0x264);
}




bool FUN_10045256c(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_2 + 0x264);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar2 = FUN_100345d90();
  }
  return cVar1 == *(char *)(lVar2 + 0x264);
}




bool FUN_1004525b8(long *param_1,long param_2)

{
  return *(int *)(param_2 + 0x260) == *(int *)(*param_1 + 0x308);
}




void FUN_1004525d0(long *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar2 = (float)FUN_1003dfe60(lVar1,2,2,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar3 = (float)FUN_1003dfe60(lVar1,2,3,0x19,0);
  *param_2 = fVar2 + fVar5 * fVar3;
  uVar4 = FUN_1003dfe60(lVar1,2,4,0x19,0);
  *param_3 = uVar4;
  return;
}




void FUN_10045266c(long *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar2 = (float)FUN_1003dfe60(lVar1,2,7,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar3 = (float)FUN_1003dfe60(lVar1,2,3,0x19,0);
  *param_2 = fVar2 + fVar5 * fVar3;
  uVar4 = FUN_1003dfe60(lVar1,2,4,0x19,0);
  *param_3 = uVar4;
  return;
}




byte FUN_100452708(long *param_1)

{
  return *(byte *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x2f8) >> 3 & 1;
}




bool FUN_100452720(long *param_1)

{
  return (*(byte *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x2f8) & 0x28) != 0;
}




void FUN_100452740(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,7,0x19,0);
  return;
}




void FUN_100452754(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  
  FUN_100432d40(*param_1);
  lVar2 = FUN_100345d90();
  if (lVar2 != 0) {
    *param_2 = lVar2;
    iVar1 = FUN_1004393e4(*param_1);
    if (iVar1 == 1) {
      *param_3 = "Channeling";
    }
    else {
      *param_4 = "Bone_CenterMass";
    }
  }
  return;
}




void FUN_1004527c4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 local_68 [2];
  undefined1 auStack_60 [48];
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_100432d40(*param_1);
  lVar1 = FUN_100345d90();
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + 0x250);
    fVar2 = *(float *)(lVar1 + 0x254);
    *(float *)((long)param_2 + 4) = fVar2;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 600);
    *(float *)((long)param_2 + 4) = *(float *)(lVar1 + 0x2ec) + fVar2;
  }
  else {
    local_68[0] = 0xd128cdd4;
    FUN_1003ab468(lVar1,local_68,auStack_60);
    *param_2 = local_30;
    *(undefined4 *)(param_2 + 1) = local_28;
  }
  return;
}




void FUN_100452858(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017270();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004528a8(long *param_1)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined **local_7b8;
  undefined8 uStack_7b0;
  undefined4 local_7a8;
  float fStack_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined1 local_798;
  undefined **local_790;
  long local_788;
  byte local_780;
  undefined8 local_77c;
  undefined8 local_774;
  undefined8 uStack_76c;
  undefined4 local_764;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined4 local_750;
  undefined1 local_74c;
  undefined4 local_748;
  undefined8 local_744;
  undefined4 local_73c;
  undefined1 local_738 [8];
  undefined **local_730 [3];
  undefined1 local_718;
  undefined4 local_714;
  undefined4 uStack_710;
  int local_70c;
  undefined8 local_708;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 local_6f0;
  undefined8 local_6e8;
  undefined4 local_6e0;
  long local_f0 [12];
  
  local_f0[10] = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar4 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
    plVar7 = (long *)(lVar4 + 0x18);
    do {
      lVar5 = *plVar7;
      plVar7 = (long *)(lVar5 + 0x20);
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8);
    uVar9 = (uint)*(float *)(**(long **)(*(long *)(lVar4 + 0x38) + 0x228) + 8);
    if ((*(long *)(lVar5 + 0x90) != 0) && ((*(byte *)(*(long *)(lVar5 + 0x90) + 0x239) & 0x1c) != 0)
       ) {
      fVar14 = (float)FUN_1003dfe60(lVar4,8,6,0x19,0);
      uVar9 = (uint)(fVar14 + (float)uVar9);
    }
    local_f0[8] = 0;
    local_f0[7] = 0;
    local_f0[6] = 0;
    local_f0[5] = 0;
    local_f0[4] = 0;
    local_f0[3] = 0;
    local_f0[2] = 0;
    local_f0[1] = 0;
    local_f0[9] = 0;
    local_f0[0] = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (uVar9 < 2) {
      uVar11 = 1;
    }
    else {
      uVar10 = 1;
      uVar11 = 1;
      while (lVar5 = local_f0[uVar11 - 1], lVar5 != 0) {
        if ((*(uint *)(lVar5 + 0x2f4) & 0x101004) != 0) goto LAB_100452c74;
        uVar15 = *(undefined4 *)(lVar5 + 0x250);
        uVar16 = *(undefined4 *)(lVar5 + 600);
        fVar17 = *(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254);
        local_790 = &PTR_FUN_101499960;
        local_788 = 0;
        local_774 = 0;
        uStack_76c = 0;
        local_77c = 0;
        local_764 = 0;
        uStack_758 = 0xbf800000c0000000;
        local_760 = 0xbf800000bf800000;
        local_750 = 0x3f800000;
        local_74c = 0xff;
        local_748 = 0;
        local_744 = 0xffffffff;
        local_73c = 0xffffffff;
        local_738._0_3_ = CONCAT12(local_738[2],0x4100) & 0xe1ffff | 0x140000;
        local_780 = local_780 & 0xfc | 1;
        lVar5 = FUN_1003e10f0();
        bVar2 = (byte)(((uint3)local_738._0_3_ & 0xfffefe8f) >> 0x10) | *(byte *)(lVar5 + 0xe5);
        local_748 = 0x40000;
        uVar1 = (undefined2)((uint3)local_738._0_3_ & 0xfffefe8f);
        local_738._0_3_ = CONCAT12(bVar2,uVar1) | 0x120;
        bVar13 = true;
        local_788 = lVar4;
        fVar14 = (float)FUN_1003df710(lVar4,1,3);
        local_77c = CONCAT44(fVar17,uVar15);
        local_774 = CONCAT44(local_774._4_4_,uVar16);
        local_760 = CONCAT44(local_760._4_4_,(fVar14 + 0.75) * (fVar14 + 0.75));
        local_738._0_3_ = CONCAT12(bVar2,uVar1) | 0x8120;
        local_7b8 = &PTR_FUN_101499a08;
        uStack_7b0 = 0;
        local_79c = 200;
        local_798 = 0;
        local_7a8 = uVar15;
        fStack_7a4 = fVar17;
        local_7a0 = uVar16;
        uVar3 = FUN_1003a6ce4(&local_790,local_730,200,&local_7b8);
        if (uVar3 != 0) {
          uVar6 = 0;
          do {
            plVar7 = local_f0;
            uVar8 = (ulong)uVar9;
            while ((*plVar7 == 0 || (*(int *)(local_730[uVar6] + 0x4c) != *(int *)(*plVar7 + 0x260))
                   )) {
              plVar7 = plVar7 + 1;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) {
                bVar13 = false;
                local_f0[uVar10] = (long)local_730[uVar6];
                uVar11 = uVar11 + 1;
                goto LAB_100452b94;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar3);
          bVar13 = true;
        }
LAB_100452b94:
        if ((bVar13) || (uVar10 = uVar10 + 1, uVar10 == uVar9)) break;
      }
    }
    if (1 < uVar11) {
      uVar15 = *(undefined4 *)(lVar4 + 0x260);
      plVar7 = local_f0;
      lVar4 = (ulong)uVar11 - 1;
      lVar5 = local_f0[0];
      do {
        plVar7 = plVar7 + 1;
        lVar12 = *plVar7;
        uStack_710 = *(undefined4 *)(lVar12 + 0x260);
        uStack_6f4 = *(undefined4 *)(lVar5 + 0x260);
        local_730[1] = (undefined **)0x0;
        local_730[2] = (undefined **)0x0;
        local_718 = 0;
        local_730[0] = &PTR_FUN_101496b18;
        local_70c = DAT_1018589d8;
        local_708 = 0x3ecccccd00000000;
        local_700 = 1;
        uStack_6fc = 0;
        local_6f8 = 0;
        local_6f0 = 0;
        local_6e8 = 0;
        local_6e0 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_714 = uVar15;
        uVar16 = FUN_1003d4e0c(PTR_s_Buff_Varya_A_Beam_10185c5e8);
        local_708 = CONCAT44(local_708._4_4_,uVar16);
        (*(code *)local_730[0][4])(local_730,&DAT_101e47d30);
        lVar4 = lVar4 + -1;
        lVar5 = lVar12;
      } while (lVar4 != 0);
    }
  }
LAB_100452c74:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_f0[10]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100452cbc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_100432d40(*param_1);
  uVar1 = FUN_100345d90();
  *param_2 = uVar1;
  *param_4 = "Bone_CenterMass";
  return;
}




void FUN_100452cf8(long *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR1_INT___10185d7f8);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = 1;
  return;
}




void FUN_100452d4c(long *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR2_FLOAT___10185d7f0);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = 0x3f800000;
  return;
}




void FUN_100452da0(long *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR1_INT___10185d7f8);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = 0;
  return;
}




void FUN_100452df0(long *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR2_INT___10185d800);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = 1;
  return;
}




void FUN_100452e44(long *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR2_INT___10185d800);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = 0;
  return;
}




void FUN_100452e94(long param_1,float *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar5 = (float)FUN_1003dfe60(lVar3,4,5,0x19,0);
  *param_2 = fVar5 + -0.1;
  puVar1 = PTR_s_Buff_Varya_Talent_TalentB_10185b238;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    fVar7 = *param_2;
    local_48[0] = DAT_101d90e24;
    fVar6 = (float)FUN_1003dfee8(lVar3,local_48,0,9);
    fVar5 = fVar7 - fVar6;
    if (fVar7 - fVar6 <= 0.1) {
      fVar5 = 0.1;
    }
    *param_2 = fVar5;
  }
  return;
}




bool FUN_100452f50(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  iVar1 = FUN_100432d40(*param_1);
  if (iVar1 == -1) {
    lVar4 = *param_1;
    uVar2 = (*(code *)**(undefined8 **)(lVar4 + 0x168))(lVar4 + 0x168,PTR_s___VAR1_INT___10185d7f8);
    puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x10))(lVar4 + 0x168,uVar2);
    *puVar3 = 2;
  }
  return iVar1 == -1;
}




void FUN_100452fcc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,10,0x19,0);
  return;
}




bool FUN_100452fe0(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int local_28 [2];
  
  lVar4 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  FUN_1003a4e5c(local_28,PTR_s_Buff_Varya_B_Control_10185b208);
  lVar3 = *(long *)(lVar4 + 0x28);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    return false;
  }
  while ((*(int *)(lVar4 + 0x314) != local_28[0] || (*(int *)(lVar4 + 0x310) != 0))) {
    plVar1 = (long *)(lVar4 + 0x350);
    lVar4 = *plVar1;
    if (*plVar1 == 0) {
      return false;
    }
  }
  do {
    if (*(int *)(lVar3 + 0x30c) == *(int *)(lVar4 + 0x30c)) break;
    lVar3 = *(long *)(lVar3 + 0x350);
  } while (lVar3 != 0);
  iVar2 = FUN_1004393e4();
  return iVar2 == 1;
}




void FUN_10045309c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b028();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004530ec(long param_1,float *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar5 = (float)FUN_1003dfe60(lVar3,4,5,0x19,0);
  *param_2 = fVar5;
  puVar1 = PTR_s_Buff_Varya_Talent_TalentB_10185b238;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    fVar7 = *param_2;
    local_48[0] = DAT_101d90e24;
    fVar6 = (float)FUN_1003dfee8(lVar3,local_48,0,9);
    fVar5 = fVar7 - fVar6;
    if (fVar7 - fVar6 <= 0.1) {
      fVar5 = 0.1;
    }
    *param_2 = fVar5;
  }
  return;
}




void FUN_10045319c(long *param_1,float *param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  
  lVar5 = *param_1;
  lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
  fVar6 = (float)FUN_1003dfe60(lVar4,4,3,0x19,0);
  *param_2 = fVar6;
  lVar3 = *(long *)(lVar4 + 0x40);
  fVar7 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  fVar6 = DAT_101e94260 * fVar6;
  *param_2 = fVar6;
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 0x346));
  *param_3 = fVar6 * fVar7;
  puVar1 = PTR_s_Buff_Varya_Talent_TalentB_10185b238;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90e24;
    fVar7 = (float)FUN_1003dfee8(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),local_48,1,9);
    *param_2 = *param_2 * fVar7;
    local_50[0] = DAT_101d90e24;
    fVar7 = (float)FUN_1003dfee8(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),local_50,1,9);
    *param_3 = *param_3 * fVar7;
  }
  return;
}




void FUN_1004532d8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_100432d40(*param_1);
  uVar1 = FUN_100345d90();
  *param_2 = uVar1;
  *param_4 = "Bone_CenterMass";
  return;
}




float FUN_100453314(long *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x308) == -1) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10);
    if (*(int *)(lVar1 + 0x260) != *(int *)(lVar2 + 0x308)) {
      lVar1 = FUN_100345d90();
      lVar2 = *param_1;
    }
  }
  fVar3 = (float)FUN_1003dfe60(lVar1,4,2,0x19,0);
  if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0x10) + 0x10) + 0x2f4) & 1) != 0) {
    fVar3 = fVar3 + fVar3;
  }
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar4 = *(float *)(lVar2 + 0x40) + *(float *)(lVar2 + 0xf4) * (*(float *)(lVar2 + 0x25c) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1a8),DAT_101e94328);
  return DAT_101e94268 * fVar3;
}




void FUN_1004533e0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,4,0x19,0);
  return;
}




void FUN_1004533f4(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar5 = *(undefined4 *)(lVar2 + 0x250);
  fVar3 = *(float *)(lVar2 + 0x254);
  uVar6 = *(undefined4 *)(lVar2 + 600);
  fVar4 = *(float *)(lVar2 + 0x2ec);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(float *)(param_2 + 0x18) = fVar4 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xbf800000c0000000;
  *(undefined8 *)(param_2 + 0x30) = 0xbf80000049742400;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x44) = 0xff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000001;
  *(byte *)(param_2 + 0x5a) = bVar1 | 0x14;
  *(undefined2 *)(param_2 + 0x58) = 0xc020;
  return;
}




void FUN_1004534a8(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar5 = *(undefined4 *)(lVar2 + 0x250);
  fVar3 = *(float *)(lVar2 + 0x254);
  uVar6 = *(undefined4 *)(lVar2 + 600);
  fVar4 = *(float *)(lVar2 + 0x2ec);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined1 *)(param_2 + 0x10) = 3;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  *(float *)(param_2 + 0x18) = fVar4 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xbf800000c0000000;
  *(undefined8 *)(param_2 + 0x30) = 0xbf80000049742400;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x44) = 0xff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000001;
  *(byte *)(param_2 + 0x5a) = bVar1 | 0x14;
  *(undefined2 *)(param_2 + 0x58) = 0xc020;
  return;
}




float FUN_10045355c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar4 = *param_1;
  uVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x308));
  fVar5 = (float)FUN_1003dfe60(uVar3,8,10,0x19,0);
  fVar6 = (float)FUN_1003dfe60(uVar3,8,9,0x19,0);
  fVar7 = (float)FUN_1003dfe60(uVar3,8,0xb,0x19,0);
  puVar1 = PTR_s_Buff_Varya_Talent_TalentC_10185c650;
  fVar7 = fVar5 + fVar5 + fVar6 + fVar7;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x308));
  fVar6 = fVar7;
  if (lVar4 != 0) {
    iVar2 = FUN_1003a47d0(lVar4,puVar1);
    fVar6 = fVar7 + fVar5 + fVar5;
    if (iVar2 == 0) {
      fVar6 = fVar7;
    }
  }
  return fVar6;
}




void FUN_100453618(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  uVar2 = FUN_1003dfe60(uVar1,8,9,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_100453654(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  uVar2 = FUN_1003dfe60(uVar1,8,10,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_100453690(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  uVar2 = FUN_1003dfe60(uVar1,8,0xb,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_1004536cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_70 [2];
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar6 = *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar1 + 0x1b4),DAT_101e94334);
  uVar7 = DAT_101e94334;
  if (DAT_101e94274 <= 0.0) {
    fVar8 = 0.05;
    fVar6 = DAT_101e94274;
  }
  else if (375.0 <= DAT_101e94274) {
    fVar8 = 0.3;
    fVar6 = 375.0;
  }
  else {
    fVar8 = DAT_101e94274 * 0.00066666666 + 0.05;
    fVar6 = 0.05;
    uVar7 = 0x3a2ec33e;
  }
  lVar1 = FUN_10042e498(DAT_101e94274,fVar6,uVar7,0x3f800000,param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_C_Strike_Warning");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar1 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  local_60._0_4_ = FUN_1003dfe60(lVar1,8,5,0x19,0);
  local_58 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_60);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3e99999a,0x3f19999a,0x3f800000);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3f333333);
  local_70[0] = 0x3f4ccccd;
  local_68 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_70);
  lVar3 = FUN_100433b70(param_1);
  *(code **)(lVar3 + 0x40) = FUN_100453690;
  lVar1 = lVar3 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_C_Strike_Impact");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,0);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3dcccccd);
  local_58 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_60);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0x3f333333);
  (**(code **)(*plVar2 + 0xd8))(0x3f800000);
  plVar2 = (long *)FUN_10043fc58(lVar1);
  local_60 = FUN_100453a88;
  local_58 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_60);
  (**(code **)(*plVar2 + 0x20))(0x3f000000);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x40000000);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  plVar2 = (long *)FUN_10049da1c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Varya_Ability_C_Lightning_Strikes_1")
  ;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Ability_C_Lightning_Strikes_2")
  ;
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar5 + 0x468));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10049bd60(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(fVar8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3f800000);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(0x41700000);
  (**(code **)(*plVar2 + 0x28))();
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049da8c;
  *(long *)(lVar3 + 0x48) = lVar1;
  *(byte *)(lVar1 + 0x50) = *(byte *)(lVar1 + 0x50) & 0xfe;
  FUN_10044c418(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_100453a88(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,5,0x19,0);
  return;
}




undefined1  [16] FUN_100453a9c(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 uVar8;
  undefined4 local_38 [2];
  
  iVar2 = *(int *)(*param_1 + 0x308);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) != iVar2) {
      lVar4 = FUN_100345d90();
    }
  }
  auVar6 = FUN_1003dfe60(lVar4,8,2,0x19,0);
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar5 = (float)FUN_1003dfe60(lVar4,8,3,0x19,0);
    auVar6 = ZEXT416((uint)(fVar5 * auVar6._0_4_));
  }
  puVar1 = PTR_s_Buff_Varya_Talent_TalentC_10185c650;
  uVar8 = auVar6._8_8_;
  uVar7 = auVar6._0_8_;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90e1c;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_38,0,9);
    uVar7 = (ulong)(uint)(fVar5 * auVar6._0_4_);
    uVar8 = 0;
  }
  auVar6._8_8_ = uVar8;
  auVar6._0_8_ = uVar7;
  return auVar6;
}




undefined1  [16] FUN_100453b84(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  auVar5 = FUN_1003dfe60(lVar2,8,2,0x19,0);
  uVar7 = auVar5._8_8_;
  fVar3 = (float)FUN_1003dfe60(lVar2,8,4,0x19,0);
  fVar3 = auVar5._0_4_ - auVar5._0_4_ * fVar3;
  uVar6 = CONCAT44(auVar5._4_4_,fVar3);
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar4 = (float)FUN_1003dfe60(lVar2,8,3,0x19,0);
    uVar6 = (ulong)(uint)(fVar4 * fVar3);
    uVar7 = 0;
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_100453c3c(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0x318) = 0x40000000;
  if (*(float *)(param_1 + 0x31c) < 2.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x40000000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bf9c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,0xff,3);
  if (param_2 == 0) {
    lVar1 = FUN_10042e498(param_1);
    FUN_1004386bc(lVar1 + 0x10);
    plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
    local_30 = FUN_100453a9c;
    local_28 = 5;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,2);
    lVar1 = FUN_10042e3b0(param_1);
    FUN_1004386bc(lVar1 + 0x10);
    plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
    local_30 = FUN_100453b84;
  }
  else {
    lVar1 = FUN_10042ea44(param_1);
    FUN_1004386bc(lVar1 + 0x10);
    plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
    local_30 = FUN_100453a9c;
  }
  local_28 = 5;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,2);
  return;
}




bool FUN_100453d98(long *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  lVar1 = *(long *)(*(long *)(param_1[0x85] + 0x20) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  fVar3 = (float)NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  fVar2 = DAT_101e94260;
  if (DAT_101e94260 <= fVar3) {
    fVar2 = fVar3;
  }
  return DAT_101e94260 <= fVar2;
}




void FUN_100453e1c(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100453e28(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




void FUN_100453e34(undefined8 param_1)

{
  FUN_1003df710(param_1,3,1);
  return;
}




void FUN_100453e40(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar5 = (float)FUN_1003df710(lVar4,2,7);
  *param_2 = fVar5;
  puVar1 = PTR_s_Buff_Kensei_Talent_TalentA_10185cfb0;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90e4c;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_38,1,9);
    *param_2 = *param_2 * fVar5;
  }
  *param_3 = 0xbf800000;
  return;
}




undefined1  [16] FUN_100453ee4(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  if ((*(long *)(lVar2 + 0x50) != 0) && (*(long *)(*(long *)(lVar2 + 0x50) + 0x1f8) != 0)) {
    FUN_1003ad218();
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  return ZEXT816(0);
}




void FUN_100453f30(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,1,0x19,0);
  return;
}




void FUN_100453f44(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_100453f58(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




void FUN_100453f6c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xc,0x19,0);
  return;
}




void FUN_100453f80(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar2 = (float)FUN_1003dfe60(uVar1,1,9,5,0);
  fVar3 = (float)FUN_1003dfe60(uVar1,1,8,0x19,0);
  fVar4 = (float)FUN_1003dfe60(uVar1,1,10,0x19,0);
  *param_2 = (fVar3 * fVar2) / fVar4;
  *param_3 = 0xbf800000;
  return;
}




void FUN_10045401c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xb,0x19,0);
  return;
}




void FUN_100454030(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar2 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  uVar4 = *(undefined4 *)(lVar2 + 0x250);
  fVar5 = *(float *)(lVar2 + 0x254);
  uVar6 = *(undefined4 *)(lVar2 + 600);
  fVar7 = *(float *)(lVar2 + 0x2ec);
  puVar3 = (ushort *)(param_2 + 0x58);
  uVar1 = *puVar3;
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(long *)(param_2 + 8) = lVar2;
  *puVar3 = uVar1 & 0xff8f | 0x20;
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar8 = *(float *)(lVar2 + 0x7c) + *(float *)(lVar2 + 0x130) * (*(float *)(lVar2 + 0x298) + 1.0);
  NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar2 + 0x1e4),DAT_101e94364);
  fVar8 = DAT_101e942a4 * DAT_101e942a4;
  *(undefined4 *)(param_2 + 0x14) = uVar4;
  *(float *)(param_2 + 0x18) = fVar7 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar6;
  *(float *)(param_2 + 0x30) = fVar8;
  *(undefined1 *)(param_2 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *puVar3 = uVar1 & 0xff8f | 0x8c20;
  return;
}




undefined4 FUN_100454104(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




undefined1  [16] FUN_100454118(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_38 [2];
  
  auVar3 = FUN_1003dfe60(param_1,0,4,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  iVar1 = FUN_1003a47d0(param_1,PTR_s_Buff_Ylva_Talent_TalentA_10185cf70);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90e80;
    fVar2 = (float)FUN_1003dfee8(param_1,local_38,0,9);
    uVar4 = (ulong)(uint)(fVar2 * auVar3._0_4_);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




float FUN_100454198(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_40 [2];
  int local_38 [2];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar4 = *(long *)(lVar3 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  fVar5 = (float)FUN_100454118(lVar3);
  FUN_1003a4e5c(local_38,PTR_s_Buff_Ylva_A_Charging_10185cf40);
  lVar1 = *(long *)(lVar4 + 0x28);
  lVar2 = lVar1;
  while( true ) {
    if (lVar2 == 0) {
      FUN_1003a4e5c(local_40,PTR_s_Buff_Ylva_A_Charge_Control_10185b328);
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar4 = lVar2;
      while( true ) {
        if (lVar4 == 0) {
          return 0.0;
        }
        if ((*(int *)(lVar4 + 0x314) == local_40[0]) && (*(int *)(lVar4 + 0x310) == 0)) break;
        lVar4 = *(long *)(lVar4 + 0x350);
      }
      for (; *(int *)(lVar2 + 0x30c) != *(int *)(lVar4 + 0x30c); lVar2 = *(long *)(lVar2 + 0x350)) {
      }
      fVar7 = *(float *)(lVar2 + 0x318);
      fVar6 = (float)FUN_1003dfe60(0,lVar3,0,5,0x19,0);
      return fVar7 / (fVar6 - fVar5);
    }
    if ((*(int *)(lVar2 + 0x314) == local_38[0]) && (*(int *)(lVar2 + 0x310) == 0)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  for (; *(int *)(lVar1 + 0x30c) != *(int *)(lVar2 + 0x30c); lVar1 = *(long *)(lVar1 + 0x350)) {
  }
  return 1.0 - *(float *)(lVar1 + 0x318) / fVar5;
}




void FUN_1004542e4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




undefined8 FUN_1004542f8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar1 = FUN_100345d90();
  }
  plVar2 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8);
  lVar1 = *(long *)(lVar1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 1;
    }
    if ((*(int *)(lVar1 + 0x314) == DAT_101d3f114) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return 0;
}




void FUN_100454388(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_10045439c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_1004543b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  uVar1 = FUN_1003e00a8(*(undefined8 *)(*(long *)(local_18 + 0x10) + 0x10),3,8,9,1);
  uVar2 = 0;
  if ((*(ushort *)(local_20 + 0xc) & 4) != 0) {
    uVar2 = uVar1;
  }
  *(undefined4 *)(local_20 + 0x54) = uVar2;
  *(undefined4 *)(local_20 + 8) = 2;
  *(undefined4 *)(local_20 + 0x5c) = 0;
  return;
}




void FUN_100454418(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,7,9,1);
  return;
}




void FUN_10045442c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,2,9,1);
  return;
}




void FUN_100454440(long *param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x308);
  if (iVar1 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) != iVar1) {
      lVar4 = FUN_100345d90(iVar1);
      lVar5 = *param_1;
    }
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
  uVar10 = *(undefined4 *)(lVar5 + 0x250);
  fVar7 = *(float *)(lVar5 + 0x254);
  uVar11 = *(undefined4 *)(lVar5 + 600);
  fVar9 = *(float *)(lVar5 + 0x2ec);
  *(undefined4 *)(param_2 + 0x48) = 1;
  if (lVar4 != 0) {
    *(long *)(param_2 + 8) = lVar4;
  }
  puVar6 = (ushort *)(param_2 + 0x58);
  uVar3 = *puVar6;
  uVar2 = *(undefined1 *)(param_2 + 0x5a);
  *puVar6 = uVar3 & 0xff8f | 0x20;
  fVar8 = (float)FUN_1003dfe60(lVar4,3,9,9,1);
  *(undefined4 *)(param_2 + 0x14) = uVar10;
  *(float *)(param_2 + 0x18) = fVar9 + fVar7;
  *(undefined4 *)(param_2 + 0x1c) = uVar11;
  *(float *)(param_2 + 0x30) = fVar8 * fVar8;
  *(undefined1 *)(param_2 + 0x5a) = uVar2;
  *puVar6 = uVar3 & 0xff8f | 0xa020;
  *(undefined4 *)(param_2 + 0x40) = 0x3f266666;
  return;
}




void FUN_100454534(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,9,9,1);
  return;
}




void FUN_100454548(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000167c4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




float FUN_100454598(long *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  lVar2 = *(long *)(lVar1 + 0x38);
  fVar3 = *(float *)(lVar2 + 100);
  return ((*(float *)(lVar1 + 0x2e8) + fVar3) * *(float *)(lVar2 + 0x68)) / fVar3 + 6.0;
}




void FUN_1004545c8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1004545dc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x19,0);
  return;
}




void FUN_1004545f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_100454604(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  *param_2 = uVar1;
  *param_3 = "CenterBody";
  return;
}




void FUN_100454640(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  fVar2 = *(float *)(lVar1 + 0x254);
  uVar3 = *(undefined4 *)(lVar1 + 600);
  fVar4 = *(float *)(lVar1 + 0x2ec);
  *param_4 = *(undefined4 *)(lVar1 + 0x250);
  param_4[1] = fVar4 + fVar2;
  param_4[2] = uVar3;
  *param_3 = 0x4479c000;
  return;
}




bool FUN_10045469c(long *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar2);
  lVar1 = FUN_100345d90();
  fVar3 = *(float *)(lVar1 + 0x250) - *(float *)(lVar2 + 0x250);
  fVar4 = (*(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254)) -
          (*(float *)(lVar2 + 0x254) + *(float *)(lVar2 + 0x2ec));
  fVar5 = *(float *)(lVar1 + 600) - *(float *)(lVar2 + 600);
  return 14.0 <= SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
}




void FUN_10045471c(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != iVar1) {
    lVar2 = FUN_100345d90(iVar1);
  }
  FUN_1003dfe60(lVar2,2,3,0x19,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100454760(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  long local_28;
  
  FUN_10042ecbc(param_3,&local_28);
  lVar1 = *(long *)(*(long *)(*(long *)(local_28 + 0x10) + 0x10) + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != ram0x0001018672a0))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100432da4();
  local_30 = ___sincosf_stret();
  local_34 = 0;
  local_38 = param_2;
  FUN_1004547dc(lVar1,&local_38);
  return;
}




void FUN_1004547dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  local_30 = *(undefined8 *)(lVar1 + 0x250);
  local_28 = *(undefined4 *)(lVar1 + 600);
  FUN_1003d90d4(lVar1,&local_30,param_2);
  FUN_1003c554c(param_1,param_2,1);
  *(byte *)(param_1 + 0x818) = *(byte *)(param_1 + 0x818) | 0x20;
  return;
}




void FUN_100454840(undefined8 param_1)

{
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    local_54 = *(undefined4 *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_70 = &PTR_FUN_101496b18;
    local_4c = DAT_1018589d8;
    local_44 = 0x13f19999a;
    local_28 = 0;
    local_34 = 0;
    local_3c = 0;
    local_20 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_50 = local_54;
    local_48 = FUN_1003d4e0c(PTR_s_Buff_Hero050_B_Segment_10185d030);
    FUN_10049639c(&local_70,&DAT_101e47d30);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004548f4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  uVar1 = DAT_101dc0b88;
  plVar3 = (long *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x18);
  do {
    lVar2 = *plVar3;
    plVar3 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != ram0x0001018672a0);
  *(undefined8 *)(lVar2 + 0x7e8) = 0;
  *(undefined4 *)(lVar2 + 0x7f0) = uVar1;
  *(byte *)(lVar2 + 0x818) = *(byte *)(lVar2 + 0x818) & 0xd9;
  return;
}




void FUN_100454968(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined8 local_48;
  undefined8 local_40;
  int local_24;
  undefined4 uStack_20;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(*(long *)(local_18 + 0x10) + 0x10);
    fStack_50 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
    fVar2 = *(float *)(lVar1 + 0x240);
    fVar3 = *(float *)(lVar1 + 0x248);
    fVar4 = fVar2 * fVar2 + *(float *)(lVar1 + 0x244) * *(float *)(lVar1 + 0x244) + fVar3 * fVar3;
    if (1e-08 <= fVar4) {
      fVar4 = SQRT(fVar4);
      fVar2 = fVar2 / fVar4;
      fVar3 = fVar3 / fVar4;
    }
    else {
      fVar2 = 1.0;
      fVar3 = 0.0;
    }
    local_58 = *(undefined1 *)(lVar1 + 0x300);
    local_54 = *(float *)(lVar1 + 0x250) + fVar2 * 100.0;
    local_4c = *(float *)(lVar1 + 600) + fVar3 * 100.0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101497058;
    local_5c = 1;
    local_56 = 0;
    local_48 = 0;
    local_40 = 0x16370c0d0000009a;
    local_24 = DAT_1018589d8;
    uStack_20 = 0;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_57 = local_58;
    FUN_1004966e0(&local_78,&DAT_101e47d30);
  }
  return;
}




undefined4 FUN_100454a78(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




float FUN_100454a8c(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  fVar3 = (float)FUN_1003dfe60(lVar2,2,1,5,0);
  fVar4 = (float)FUN_1003dfe60(lVar2,2,7,0x19,0);
  return fVar4 * fVar3;
}




void FUN_100454b18(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,1,5,0);
  return;
}




float FUN_100454b2c(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  do {
    lVar5 = *plVar3;
    plVar3 = (long *)(lVar5 + 0x20);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
  lVar2 = *(long *)(lVar5 + 0x28);
  lVar5 = lVar2;
  if (lVar2 != 0) {
    do {
      if ((*(int *)(lVar5 + 0x314) == DAT_101d3f1cc) && (*(int *)(lVar5 + 0x310) == 0)) {
        return 1.0;
      }
      plVar3 = (long *)(lVar5 + 0x350);
      lVar4 = lVar2;
      lVar5 = *plVar3;
    } while (*plVar3 != 0);
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d3f1d0) && (*(int *)(lVar4 + 0x310) == 0)) {
        iVar1 = *(int *)(lVar2 + 0x30c);
        lVar5 = lVar2;
        while (iVar1 != *(int *)(lVar4 + 0x30c)) {
          lVar5 = *(long *)(lVar5 + 0x350);
          iVar1 = *(int *)(lVar5 + 0x30c);
        }
        for (; *(int *)(lVar2 + 0x30c) != *(int *)(lVar4 + 0x30c); lVar2 = *(long *)(lVar2 + 0x350))
        {
        }
        return 1.0 - *(float *)(lVar5 + 0x318) / *(float *)(lVar2 + 0x31c);
      }
      plVar3 = (long *)(lVar4 + 0x350);
      lVar4 = *plVar3;
    } while (*plVar3 != 0);
  }
  return 0.0;
}




void FUN_100454c14(undefined8 param_1)

{
  FUN_1003df710(param_1,1,3);
  return;
}




void FUN_100454c20(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_100454c34(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_100454c48(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100454c5c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,4,0x19,0);
  return;
}




void FUN_100454c70(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




float FUN_100454c84(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_1003df74c(param_1,**(undefined8 **)(*(long *)(param_1 + 0x38) + 0x228),3);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x128) * (*(float *)(lVar1 + 0x290) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1dc),DAT_101e9435c);
  fVar3 = 1.0 / DAT_101e9429c;
  if (1.0 / DAT_101e9429c <= 0.1) {
    fVar3 = 0.1;
  }
  return fVar3 * fVar2;
}




void FUN_100454d04(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,10,0x19,0);
  return;
}




void FUN_100454d18(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined **local_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined1 local_740;
  undefined4 local_73c;
  undefined4 uStack_738;
  int local_734;
  undefined4 local_730;
  undefined8 local_72c;
  undefined8 local_724;
  undefined8 local_71c;
  undefined8 local_710;
  undefined4 local_708;
  undefined4 local_700 [2];
  undefined **local_6f8;
  long lStack_6f0;
  byte local_6e8;
  undefined8 local_6e4;
  undefined4 local_6dc;
  undefined4 uStack_6d8;
  undefined4 local_6d4;
  undefined4 uStack_6d0;
  undefined4 local_6cc;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined2 local_6a0;
  byte local_69e;
  undefined4 local_69c;
  undefined4 uStack_698;
  undefined8 local_694;
  undefined1 local_68c;
  long local_688 [200];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar5 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    fVar6 = (float)FUN_1003dfe60(lVar5,2,6,0x19,0);
    FUN_1003a4e5c(local_700,PTR_s_Buff_Silvernail_A_ActiveTripwire_10185d0e8);
    local_6e4 = 0;
    local_6d4 = 0;
    uStack_6d0 = 0;
    local_6dc = 0;
    uStack_6d8 = 0;
    local_6cc = 0;
    uStack_6c0 = 0xbf800000c0000000;
    local_6c8 = 0xbf800000bf800000;
    local_6b8 = 0x3f800000;
    local_6b4 = 0xff;
    uStack_6a8 = 0xffffffff00000000;
    local_6b0 = 0xffffffff00000000;
    local_6e8 = local_6e8 & 0xfc | 1;
    lVar2 = FUN_1003e10f0();
    local_69c = local_700[0];
    uStack_698 = 0xffffffff;
    local_68c = 0;
    local_694 = 0x100000000;
    local_6f8 = &PTR_FUN_1014999d0;
    local_69e = local_69e & 0xe0 | *(byte *)(lVar2 + 0xe5) | 0x14;
    uStack_6d8 = 0x1400bc4;
    local_6d4 = 1;
    local_6a0 = 0x5110;
    lStack_6f0 = lVar5;
    uVar1 = FUN_1003a6ce4(&local_6f8,local_688,200,0);
    if ((uint)(int)fVar6 < uVar1) {
      lVar2 = 0;
      uVar3 = (ulong)uVar1;
      plVar4 = local_688;
      do {
        if ((lVar2 == 0) || (*(uint *)(*plVar4 + 0x260) < *(uint *)(lVar2 + 0x260))) {
          lVar2 = *plVar4;
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      if (lVar2 != 0) {
        local_73c = *(undefined4 *)(lVar5 + 0x260);
        uStack_738 = *(undefined4 *)(lVar2 + 0x260);
        local_750 = 0;
        uStack_748 = 0;
        local_740 = 0;
        local_758 = &PTR_FUN_101496b18;
        local_734 = DAT_1018589d8;
        local_72c = 0x13dcccccd;
        local_710 = 0;
        local_71c = 0;
        local_724 = 0;
        local_708 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_730 = FUN_1003d4e0c(PTR_s_Buff_DelayedKill_10185bd70);
        FUN_10049639c(&local_758,&DAT_101e47d30);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100454f38(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_68 [2];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar6 = *(undefined4 *)(lVar3 + 0x250);
  fVar8 = *(float *)(lVar3 + 0x254);
  uVar7 = *(undefined4 *)(lVar3 + 600);
  fVar9 = *(float *)(lVar3 + 0x2ec);
  FUN_1003461dc(lVar3);
  uVar2 = FUN_100345d90();
  fVar4 = (float)FUN_1003dfe60(uVar2,2,5,0x19,0);
  iVar1 = FUN_1003a47d0(uVar2,PTR_s_Buff_Silvernail_Talent_TalentC_10185b460);
  if (iVar1 != 0) {
    local_68[0] = DAT_101d90ed0;
    fVar5 = (float)FUN_1003dfee8(uVar2,local_68,2,9);
    fVar4 = fVar5 + fVar4;
  }
  *(long *)(param_2 + 8) = lVar3;
  *(char **)(param_2 + 0x20) = "Silvernail_GroundedBolt";
  *(undefined4 *)(param_2 + 0x14) = uVar6;
  *(float *)(param_2 + 0x18) = fVar9 + fVar8;
  *(undefined4 *)(param_2 + 0x1c) = uVar7;
  *(float *)(param_2 + 0x30) = (fVar4 + 0.01) * (fVar4 + 0.01);
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0x7f8c | 0x8010;
  return;
}




void FUN_100455040(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  puVar1 = PTR_s_Buff_Silvernail_Talent_TalentC_10185b460;
  lVar2 = FUN_100345d90();
  if (lVar2 != 0) {
    FUN_1003a47d0(lVar2,puVar1);
    return;
  }
  return;
}




undefined4 FUN_100455088(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_1003dfe60(lVar2,2,5,0x19,0);
    iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Silvernail_Talent_TalentC_10185b460);
    uVar4 = 0;
    if (iVar1 == 0) {
      uVar4 = uVar3;
    }
  }
  return uVar4;
}




undefined1  [16] FUN_1004550f8(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_38 [2];
  
  auVar3 = FUN_1003dfe60(param_1,2,7,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  iVar1 = FUN_1003a47d0(param_1,PTR_s_Buff_Silvernail_Talent_TalentC_10185b460);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90ed0;
    fVar2 = (float)FUN_1003dfee8(param_1,local_38,1,9);
    uVar4 = (ulong)(uint)(fVar2 * auVar3._0_4_);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




void FUN_100455178(long *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar1 != 0) {
    *param_2 = lVar1;
    *param_3 = "ActorBase";
  }
  return;
}




void FUN_1004551b8(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar1 != 0) {
    *param_2 = lVar1;
    *param_4 = "Bone_FX";
  }
  return;
}




void FUN_1004551f8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined4 *)param_2 = *(undefined4 *)(lVar1 + 0x250);
  fVar2 = *(float *)(lVar1 + 0x254);
  *(float *)((long)param_2 + 4) = fVar2;
  uVar3 = *(undefined4 *)(lVar1 + 600);
  *(float *)((long)param_2 + 4) = *(float *)(lVar1 + 0x2ec) + fVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if (lVar1 == 0) {
    fVar2 = *(float *)(param_2 + 1) + 0.0;
    *param_3 = CONCAT44((float)((ulong)*param_2 >> 0x20) + 0.0,(float)*param_2 + 0.001);
  }
  else {
    *(undefined4 *)param_3 = *(undefined4 *)(lVar1 + 0x250);
    fVar4 = *(float *)(lVar1 + 0x254);
    *(float *)((long)param_3 + 4) = fVar4;
    fVar2 = *(float *)(lVar1 + 600);
    *(float *)((long)param_3 + 4) = *(float *)(lVar1 + 0x2ec) + fVar4;
  }
  *(float *)(param_3 + 1) = fVar2;
  return;
}




void FUN_1004552ac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,4,0x19,0);
  return;
}




void FUN_1004552c0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,9,0x19,0);
  return;
}




void FUN_1004552d4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,6,0x19,0);
  return;
}




void FUN_1004552e8(long *param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar1 = FUN_100345d90();
  }
  fVar2 = (float)FUN_1003df74c(lVar1,**(undefined8 **)(*(long *)(lVar1 + 0x38) + 0x228),3);
  fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar3 = (float)FUN_1003df710(lVar1,1,1);
  fVar2 = fVar2 + fVar4 * fVar3;
  *param_2 = fVar2;
  *param_3 = fVar2;
  return;
}




undefined8 FUN_10045537c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_98;
  undefined **local_90;
  long lStack_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined2 local_38;
  byte local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  uVar1 = DAT_101d3f248;
  local_7c = 0;
  local_6c = 0;
  local_74 = 0;
  local_64 = 0;
  uStack_58 = 0xbf800000c0000000;
  local_60 = 0xbf800000bf800000;
  local_50 = 0x3f800000;
  local_4c = 0xff;
  local_44 = 0xffffffff;
  local_3c = 0xffffffff;
  lVar3 = FUN_1003e10f0();
  local_2c = 0;
  local_24 = 0;
  uStack_30 = *(undefined4 *)(lVar2 + 0x260);
  local_34 = uVar1;
  local_90 = &PTR_FUN_1014999d0;
  local_48 = 1;
  local_38 = 0x4010;
  local_36 = *(byte *)(lVar3 + 0xe5) | 0x14;
  local_80 = 3;
  local_98 = 0;
  lStack_88 = lVar2;
  FUN_1003a6ce4(&local_90,&local_98,1,0);
  return local_98;
}




void FUN_100455450(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10045537c(*param_1);
  if (lVar1 != 0) {
    return;
  }
  FUN_1004370a0(*param_1);
  return;
}




void FUN_100455488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10045537c(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_1004554b0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,4,0x19,0);
  return;
}




void FUN_1004554c4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




void FUN_1004554d8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,8,0x19,0);
  return;
}




void FUN_1004554ec(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,2,0x19,0);
  return;
}




void FUN_100455500(undefined8 param_1)

{
  FUN_1003df710(param_1,3,1);
  return;
}




void FUN_10045550c(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100455518(undefined8 param_1)

{
  FUN_1003df710(param_1,6,1);
  return;
}




void FUN_100455524(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




void FUN_100455530(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_10045553c(undefined8 param_1)

{
  FUN_1003df710(param_1,5,1);
  return;
}




void FUN_100455548(long *param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 0x254);
  uVar9 = *(undefined4 *)(lVar3 + 600);
  fVar7 = *(float *)(lVar3 + 0x2ec);
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  *(long *)(param_2 + 8) = lVar3;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar4 = uVar2 & 0xff8f | 0x20;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  fVar6 = (float)FUN_1003dfe60(lVar3,2,2,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  *(float *)(param_2 + 0x18) = fVar7 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  *(float *)(param_2 + 0x30) = fVar6 * fVar6;
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0xff8f | 0xa020;
  *(undefined4 *)(param_2 + 0x40) = 0x3f266666;
  return;
}




float FUN_100455600(long *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*param_1 + 0x318);
  if (*(float *)(*param_1 + 0x318) <= 0.2) {
    fVar1 = 0.2;
  }
  return fVar1;
}




void FUN_100455618(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_10045562c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018474();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10045567c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_100455690(long *param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 0x254);
  uVar9 = *(undefined4 *)(lVar3 + 600);
  fVar7 = *(float *)(lVar3 + 0x2ec);
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(long *)(param_2 + 8) = lVar3;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar4 = uVar2 & 0xff8f | 0x20;
  fVar6 = (float)FUN_1003dfe60(lVar3,3,4,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  *(float *)(param_2 + 0x18) = fVar7 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  *(float *)(param_2 + 0x30) = fVar6 * fVar6;
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0xff8f | 0x8020;
  return;
}




void FUN_100455740(long *param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 0x254);
  uVar9 = *(undefined4 *)(lVar3 + 600);
  fVar7 = *(float *)(lVar3 + 0x2ec);
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(long *)(param_2 + 8) = lVar3;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar4 = uVar2 & 0xff8f | 0x50;
  fVar6 = (float)FUN_1003dfe60(lVar3,3,4,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  *(float *)(param_2 + 0x18) = fVar7 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  *(float *)(param_2 + 0x30) = fVar6 * fVar6;
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0xff8f | 0x8050;
  return;
}




void FUN_1004557f4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,6,0x19,0);
  return;
}




void FUN_100455808(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,8,0x19,0);
  return;
}




void FUN_10045581c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




void FUN_100455830(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar3 == 0) {
    fVar6 = 0.0;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar6 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
    fVar7 = DAT_101e94260 - *(float *)(lVar4 + 0x38);
    fVar5 = (float)FUN_1003dfe60(lVar3,3,9,0x19,0);
    fVar6 = (float)FUN_1003dfe60(lVar3,3,7,0x19,0);
    fVar6 = fVar6 + fVar5 * fVar7;
  }
  puVar1 = PTR_s_Buff_Yates_Talent_TalentC_10185b4a8;
  lVar4 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90ee8;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_48,2,9);
    fVar6 = fVar5 * fVar6;
  }
  *param_2 = fVar6;
  *param_3 = 0xbf800000;
  return;
}




void FUN_100455954(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  *param_4 = *(undefined4 *)(*(long *)(param_1 + 0x438) + 0x260);
  return;
}




void FUN_100455964(long *param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 0x254);
  uVar9 = *(undefined4 *)(lVar3 + 600);
  fVar7 = *(float *)(lVar3 + 0x2ec);
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  *(char **)(param_2 + 0x20) = "Inara_TreantObserver";
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *(long *)(param_2 + 8) = lVar3;
  *puVar4 = uVar2 & 0xff8c | 0x10;
  fVar6 = (float)FUN_1003df710(lVar3,3,1);
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  *(float *)(param_2 + 0x18) = fVar7 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  *(float *)(param_2 + 0x30) = fVar6 * fVar6;
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0xff8c | 0x8010;
  return;
}




void FUN_100455a14(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[6] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149cf08;
  puVar3[1] = 0;
  puVar3[5] = 0xffffffff00000000;
  *(undefined4 *)(puVar3 + 6) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100455b0c(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100455b18(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_100455b24(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_100455b38(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100455b4c(long *param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar8 = *(undefined4 *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 0x254);
  uVar9 = *(undefined4 *)(lVar3 + 600);
  fVar7 = *(float *)(lVar3 + 0x2ec);
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(long *)(param_2 + 8) = lVar3;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar4 = uVar2 & 0xff8f | 0x50;
  fVar6 = (float)FUN_1003dfe60(lVar3,2,2,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar8;
  *(float *)(param_2 + 0x18) = fVar7 + fVar5;
  *(undefined4 *)(param_2 + 0x1c) = uVar9;
  *(float *)(param_2 + 0x30) = fVar6 * fVar6;
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0xff8f | 0x8050;
  return;
}




void FUN_100455c00(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x250);
  param_3[1] = *(undefined4 *)(param_2 + 0x254);
  param_3[2] = *(undefined4 *)(param_2 + 600);
  param_3[1] = 0x3fb33333;
  return;
}




void FUN_100455c28(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  *param_2 = DAT_101e94260;
  *param_3 = 0xbf800000;
  return;
}




void FUN_100455c80(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




undefined4 FUN_100455c94(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100455ca8(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100455cb4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x84,0);
  return;
}




void FUN_100455cc8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,7,0x19,0);
  return;
}




float FUN_100455cdc(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != iVar1) {
    lVar2 = FUN_100345d90(iVar1);
  }
  fVar3 = (float)FUN_1003dfe60(lVar2,2,5,5,0);
  return fVar3 * 0.5;
}




void FUN_100455d2c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  *(undefined4 *)(param_2 + 0x48) = 1;
  if (lVar1 != 0) {
    *(long *)(param_2 + 8) = lVar1;
  }
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xfe8f | 0x20;
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
  return;
}




void FUN_100455d80(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_OutOfAmmo_10185d230);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Caine_Revolver_Loaded");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ad578(*(undefined4 *)(lVar1 + 0x5d4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Caine_OutOfAmmo_10185d230);
  local_40 = FUN_1003d00a8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_100455e90(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100455e9c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,1,0x19,0);
  return;
}




undefined1  [16] FUN_100455eb0(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_38 [2];
  
  auVar3 = FUN_1003dfe60(param_1,2,3,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  iVar1 = FUN_1003a47d0(param_1,PTR_s_Buff_Caine_Talent_TalentB_10185b6d0);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90f54;
    fVar2 = (float)FUN_1003dfee8(param_1,local_38,0,9);
    uVar4 = (ulong)(uint)(fVar2 + auVar3._0_4_);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




undefined8 FUN_100455f30(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 local_40 [2];
  int local_38 [2];
  int local_30 [2];
  int local_28 [2];
  
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if ((*(byte *)(lVar2 + 0x2f9) >> 1 & 1) != 0) {
    return 0;
  }
  lVar3 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return 1;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  FUN_1003a4e5c(local_28,PTR_s_Buff_Caine_C_KillMarker_PFX_10185d250);
  lVar1 = *(long *)(lVar3 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(int *)(lVar1 + 0x314) == local_28[0]) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  FUN_1003a4e5c(local_30,PTR_s_Buff_Item_SeraphicShell_10185c530);
  lVar1 = *(long *)(lVar3 + 0x28);
  if (lVar1 == 0) {
    return 1;
  }
  while ((*(int *)(lVar1 + 0x314) != local_30[0] || (*(int *)(lVar1 + 0x310) != 0))) {
    lVar1 = *(long *)(lVar1 + 0x350);
    if (lVar1 == 0) {
      return 1;
    }
  }
  FUN_1003a4e5c(local_38,PTR_s_Buff_Item_SeraphicShell_IsActive_10185c538);
  for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
    if ((*(int *)(lVar3 + 0x314) == local_38[0]) && (*(int *)(lVar3 + 0x310) == 0)) {
      return 0;
    }
  }
  local_40[0] = 0x1d654a0e;
  lVar2 = FUN_1003dc44c(lVar2,local_40);
  if ((lVar2 != 0) &&
     ((*(char *)(lVar2 + 0x6a) != '\0' || (fVar4 = (float)FUN_10045f284(), fVar4 <= 0.0)))) {
    return 0;
  }
  return 1;
}




void FUN_10045607c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019fa4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004560cc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016bdc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10045611c(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100456128(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_10045613c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_100456150(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x41100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  return;
}




void FUN_1004561d0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1004561e4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_1004561f8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_10045620c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




undefined4 FUN_100456220(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100456234(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_100456240(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




void FUN_10045624c(undefined8 param_1)

{
  FUN_1003df710(param_1,0xb,1);
  return;
}




void FUN_100456258(long param_1,undefined8 param_2)

{
  FUN_1004d2628(param_2,(&PTR_s_Effect_Miho_Mark_Lvl1_101498910)[*(ushort *)(param_1 + 0x344) - 1]);
  return;
}




void FUN_100456278(undefined8 param_1)

{
  FUN_1003df710(param_1,5,1);
  return;
}




void FUN_100456284(undefined8 param_1)

{
  FUN_1003df710(param_1,7,1);
  return;
}




void FUN_100456290(undefined8 param_1)

{
  FUN_1003df710(param_1,6,1);
  return;
}




void FUN_10045629c(long *param_1,float *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar3 = (float)FUN_1003df710(lVar1,8,1);
  fVar4 = (float)FUN_1003df710(lVar1,9,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar5 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
  fVar3 = fVar3 + (DAT_101e94300 + -1.0) * (fVar4 - fVar3) * 0.09090909;
  *param_2 = fVar3;
  fVar4 = (float)FUN_1003df710(lVar1,10,1);
  fVar5 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  *param_2 = fVar3 + fVar4 * DAT_101e94270;
  fVar3 = (float)FUN_1003df710(lVar1,8,1);
  fVar4 = (float)FUN_1003df710(lVar1,9,1);
  fVar5 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
  fVar3 = fVar3 + (DAT_101e94300 + -1.0) * (fVar4 - fVar3) * 0.09090909;
  *param_3 = fVar3;
  fVar4 = (float)FUN_1003df710(lVar1,10,1);
  fVar5 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  *param_3 = fVar3 + fVar4 * DAT_101e94270;
  return;
}




void FUN_10045645c(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  FUN_1003461dc(param_2);
  lVar1 = FUN_100345d90();
  uVar8 = *(undefined8 *)(param_2 + 0x250);
  fVar9 = *(float *)(param_2 + 600);
  fVar3 = *(float *)(param_2 + 0x2ec);
  fVar4 = (float)FUN_100432da4(*param_1);
  fVar5 = (float)FUN_100432e08(*param_1);
  lVar2 = *(long *)(*(long *)(lVar1 + 0x58) + 0x60);
  if (lVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)FUN_10045f34c(lVar2 + 0x220);
  }
  *param_4 = CONCAT44(fVar3 + (float)((ulong)uVar8 >> 0x20),fVar6 * fVar4 + (float)uVar8);
  *(float *)(param_4 + 1) = fVar9 + fVar5 * fVar6;
  uVar7 = FUN_1003dfe60(lVar1,2,2,0x19,0);
  *param_3 = uVar7;
  return;
}




void FUN_100456538(undefined8 param_1)

{
  FUN_1003df710(param_1,3,1);
  return;
}




void FUN_100456544(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




bool FUN_100456558(long *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar2);
  lVar1 = FUN_100345d90();
  fVar3 = *(float *)(lVar1 + 0x250) - *(float *)(lVar2 + 0x250);
  fVar4 = (*(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254)) -
          (*(float *)(lVar2 + 0x254) + *(float *)(lVar2 + 0x2ec));
  fVar5 = *(float *)(lVar1 + 600) - *(float *)(lVar2 + 600);
  return 14.0 <= SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
}




void FUN_1004565d8(undefined8 param_1)

{
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  if (*(int *)(local_20 + 0x10) == *(int *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260)) {
    *(undefined4 *)(local_20 + 0x5c) = 0;
    *(undefined4 *)(local_20 + 0x38) = 0;
  }
  return;
}




void FUN_100456624(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  long local_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_38,&local_40);
    lVar3 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    FUN_1003461dc(lVar3);
    lVar2 = FUN_100345d90();
    if ((*(int *)(local_40 + 0x18) == *(int *)(lVar3 + 0x260)) && (*(long *)(local_40 + 0x28) != 0))
    {
      uVar1 = *(uint *)(*(long *)(local_40 + 0x28) + 0x2f4);
      if ((uVar1 >> 0xd & 1) == 0) {
        if ((uVar1 >> 0x16 & 1) == 0) {
          return;
        }
        if ((*(byte *)(local_40 + 0xc) >> 2 & 1) == 0) {
          return;
        }
        lVar3 = *(long *)(lVar3 + 0x40);
        fVar5 = *(float *)(lVar3 + 0x38) +
                *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
        fVar5 = DAT_101e94260 / *(float *)(**(long **)(*(long *)(lVar2 + 0x38) + 0x228) + 8) + 1.0;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x40);
        fVar5 = *(float *)(lVar3 + 0x38) +
                *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
        fVar4 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
        fVar5 = DAT_101e94260;
        if (DAT_101e94260 <= fVar4) {
          fVar5 = fVar4;
        }
        fVar4 = (float)FUN_1003df710(lVar2,3,1);
        fVar5 = fVar5 * fVar4;
      }
      *(float *)(local_40 + 0x54) = fVar5;
    }
  }
  return;
}




void FUN_100456754(undefined8 param_1)

{
  FUN_1003e00a8(param_1,0,2,9,1);
  return;
}




void FUN_100456768(undefined8 param_1)

{
  FUN_1003e00a8(param_1,0,4,9,1);
  return;
}




void FUN_10045677c(undefined8 param_1)

{
  FUN_1003e00a8(param_1,0,3,9,1);
  return;
}




void FUN_100456790(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1004567a4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




void FUN_1004567b8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,1,0x19,0);
  return;
}




void FUN_1004567cc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1004567e0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x19,0);
  return;
}




void FUN_1004567f4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100456808(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_10045681c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c1d8;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100456904(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x42100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x8050;
  return;
}




void FUN_100456984(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x42100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  return;
}




void FUN_100456a04(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_100456a18(long *param_1,float *param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar3 == 0) {
    fVar8 = 0.0;
    fVar6 = 0.0;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x40);
    fVar9 = *(float *)(lVar5 + 0x38);
    fVar6 = fVar9 + *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0);
    fVar6 = (float)NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar5 + 0x1a0),DAT_101e94320);
    fVar8 = DAT_101e94260;
    if (DAT_101e94260 <= fVar6) {
      fVar8 = fVar6;
    }
    fVar7 = (float)FUN_1003dfe60(lVar3,0,5,0x19,0);
    fVar6 = (float)FUN_1003dfe60(lVar3,0,2,0x19,0);
    puVar1 = PTR_s_Buff_Viola_Talent_TalentC_10185d448;
    lVar5 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
    if (lVar5 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_1003a47d0(lVar5,puVar1);
    }
    puVar1 = PTR_s_Buff_Viola_Talent_TalentA_10185d438;
    lVar5 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1003a47d0(lVar5,puVar1);
    }
    fVar6 = fVar6 + fVar7 * (fVar8 - fVar9);
    if (iVar2 != 0) {
      local_68[0] = DAT_101d90fd8;
      fVar8 = (float)FUN_1003dfee8(lVar3,local_68,0,9);
      fVar6 = fVar8 * fVar6;
    }
    if ((uVar4 & 1) == 0) {
      fVar8 = (float)FUN_1003dfe60(lVar3,0,3,0x19,0);
    }
    else {
      local_70[0] = DAT_101d90fc8;
      fVar8 = (float)FUN_1003dfee8(lVar3,local_70,0,9);
      fVar6 = fVar8 * fVar6;
      fVar9 = (float)FUN_1003dfe60(lVar3,0,3,0x19,0);
      local_78[0] = DAT_101d90fc8;
      fVar8 = (float)FUN_1003dfee8(lVar3,local_78,1,9);
      fVar8 = fVar8 + fVar9;
    }
  }
  *param_2 = fVar6;
  *param_3 = fVar6 * fVar8;
  return;
}




void FUN_100456c08(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_100456c1c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100456c30(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_100456c44(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,8,0x19,0);
  return;
}




void FUN_100456c58(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,0xb,0x19,0);
  return;
}




void FUN_100456c6c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,10,0x19,0);
  return;
}




void FUN_100456c80(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,0xc,0x19,0);
  return;
}




bool FUN_100456c94(long param_1)

{
  return 0.5 <= *(float *)(param_1 + 0x31c) - *(float *)(param_1 + 0x318);
}




void FUN_100456cb0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_100456cc4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,7,0x19,0);
  return;
}




void FUN_100456cd8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




undefined1  [16] FUN_100456cec(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_38 [2];
  
  auVar3 = FUN_1003dfe60(param_1,0,3,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  iVar1 = FUN_1003a47d0(param_1,PTR_s_Buff_Amael_Talent_TalentA_10185b928);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90ff0;
    fVar2 = (float)FUN_1003dfee8(param_1,local_38,0,9);
    uVar4 = (ulong)(uint)(fVar2 * auVar3._0_4_);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




undefined8 FUN_100456d6c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar1 = FUN_100345d90();
  }
  plVar2 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8);
  lVar1 = *(long *)(lVar1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 1;
    }
    if ((*(int *)(lVar1 + 0x314) == DAT_101d3f4cc) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return 0;
}




undefined4 FUN_100456dfc(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100456e10(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100456e1c(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100456e28(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_100456e34(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_100456e48(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




undefined4 FUN_100456e5c(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100456e70(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_100456e84(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x41100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x8070;
  return;
}




void FUN_100456ef4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x40800000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  return;
}




void FUN_100456f74(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




void FUN_100456f88(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_100456f9c(&DAT_101e48140,param_1);
  return;
}




void FUN_100456f9c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x4c020) = *(int *)(param_1 + 0x4c020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x4c010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x35e5;
    *(short *)(param_1 + 0x4c012) = sVar2;
    *(short *)(param_1 + 0x4c010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x4c012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x35e5;
    *(short *)(param_1 + 0x4c012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x98) = sVar2;
  }
  *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + -1;
  return;
}




undefined8 FUN_100457048(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_100457050(void)

{
  return;
}




void FUN_100457054(void)

{
  return;
}




void FUN_100457058(void)

{
  return;
}




void FUN_10045705c(void)

{
  return;
}




void FUN_100457060(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined8 auStack_b8 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_c0 = 0xff;
  local_d0 = &PTR_FUN_1014998d0;
  uStack_c8 = 0;
  local_be = *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x264);
  local_bf = 0xff;
  uVar1 = FUN_1003a6ce4(&local_d0,auStack_b8,0x10,0);
  if (uVar1 != 0) {
    uVar2 = (ulong)uVar1;
    puVar3 = auStack_b8;
    do {
      FUN_10044f6ec(param_2,*puVar3);
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100457114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498938;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = DAT_101dc0b88;
  return;
}




void FUN_10045713c(long param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_100457194(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),
                        *(undefined2 *)(param_1 + 0x10));
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x28;
  }
  puVar2 = &DAT_101dc0b88;
  if (lVar4 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  return;
}




long FUN_100457194(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    uVar5 = 0x10000;
    lVar2 = param_1;
LAB_1004571e8:
    do {
      do {
        lVar3 = lVar2;
        lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0xb3440b50);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 8))(lVar3);
        }
        if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
          uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
          goto LAB_1004571e8;
        }
        if ((uVar5 & 0xffff) == 0) goto LAB_100457280;
        lVar2 = *(long *)(lVar3 + 0x20);
      } while (*(long *)(lVar3 + 0x20) != 0);
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((lVar3 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) break;
      uVar5 = uVar1 | uVar5 & 0xffff0000;
      while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
        if ((uVar5 - 1 & 0xffff) == 0) goto LAB_100457280;
        lVar3 = *(long *)(lVar3 + 0x10);
        uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
        if (lVar3 == 0) goto LAB_100457280;
      }
    } while( true );
  }
LAB_100457280:
  lVar2 = FUN_1010a0298(param_1,DAT_101867360);
  *(ushort *)(lVar2 + 0x34) =
       (ushort)((param_2 & 1) << 1) | (ushort)param_2 | (ushort)((param_2 & 4) << 0xb) |
       (ushort)((param_2 & 8) << 2);
  FUN_100465cd8(param_1);
  uVar5 = 0xffff0000;
LAB_1004572ac:
  do {
    do {
      lVar4 = param_1;
      lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x9fa20a9e);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (param_1 = *(long *)(lVar4 + 0x18), param_1 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1004572ac;
      }
      if ((uVar5 & 0xffff) == 0) {
        return lVar2;
      }
      param_1 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar3 = *(long *)(lVar4 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
      return lVar2;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (param_1 = *(long *)(lVar3 + 0x20), param_1 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return lVar2;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar3 == 0) {
        return lVar2;
      }
    }
  } while( true );
}




void FUN_100457364(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      uVar5 = *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
      uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      FUN_1004573fc(uVar5,uVar3);
      uVar4 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
  }
  return;
}




void FUN_1004573fc(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_1010a1830(param_2);
  FUN_100465cd8(param_1);
  uVar4 = 0xffff0000;
LAB_100457430:
  do {
    do {
      lVar3 = param_1;
      lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x9fa20a9e);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (param_1 = *(long *)(lVar3 + 0x18), param_1 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_100457430;
      }
      if ((uVar4 & 0xffff) == 0) {
        return;
      }
      param_1 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar2 = *(long *)(lVar3 + 0x10);
    if ((lVar2 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (param_1 = *(long *)(lVar2 + 0x20), param_1 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) {
        return;
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar2 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1004574e0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_101498978;
  *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 7;
  return;
}




void FUN_100457518(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = FUN_1010a0298(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),DAT_1018673b0);
  plVar4 = (long *)0x0;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x28);
  }
  lVar5 = *plVar4;
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar3 != 0) {
    plVar1 = plVar4 + 1;
  }
  lVar3 = *plVar1;
  *(long **)(param_1 + 0x10) = plVar4;
  *(int *)(param_1 + 0x18) = (int)lVar3;
  cVar2 = *(char *)(param_1 + 0x2c);
  lVar3 = (**(code **)(lVar5 + 0x10))();
  if (cVar2 == '\0') {
    *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    *(undefined1 *)(lVar3 + 0x46) = *(undefined1 *)(param_1 + 0x2c);
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  plVar4 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x20);
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  *(short *)(lVar3 + 0x44) = (short)*(undefined4 *)(param_1 + 0x30);
  return;
}




void FUN_1004575d0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x10);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100457674(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  int iStack_68;
  
  if (DAT_101d23a38 != '\0') {
    uVar8 = 0;
    while( true ) {
      lVar10 = *(long *)(param_2 + 0x38);
      if (lVar10 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_10045fb10(lVar10);
      }
      if (uVar2 <= uVar8) break;
      lVar4 = FUN_10045fa7c(lVar10,uVar8);
      lVar10 = *(long *)(lVar4 + 0x18);
      while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_10184daa8))) {
        lVar10 = *(long *)(lVar10 + 0x20);
      }
      switch(*(undefined4 *)(param_1 + 0x18)) {
      case 0:
        if (*(int *)(lVar10 + 0x38) != 0) {
          uVar2 = 0;
          lVar12 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
          iVar9 = 1;
          do {
            lVar5 = *(long *)(lVar10 + 0x28);
            lVar7 = lVar5;
            iVar3 = iVar9;
            lVar6 = lVar5;
            if (lVar5 == 0 || uVar2 == 0) {
              iVar11 = *(int *)(lVar5 + 0x30c);
            }
            else {
              do {
                lVar7 = *(long *)(lVar7 + 0x350);
                bVar1 = iVar3 != 0;
                iVar3 = iVar3 + 1;
              } while (lVar7 != 0 && bVar1);
              iVar11 = *(int *)(lVar7 + 0x30c);
              iVar3 = iVar9;
              do {
                lVar6 = *(long *)(lVar6 + 0x350);
                bVar1 = iVar3 != 0;
                iVar3 = iVar3 + 1;
              } while (lVar6 != 0 && bVar1);
            }
            if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
LAB_1004577e4:
              if (*(int *)(param_1 + 0x1c) != -1) {
                for (; *(int *)(lVar5 + 0x30c) != iVar11; lVar5 = *(long *)(lVar5 + 0x350)) {
                }
                if (*(int *)(param_1 + 0x1c) != *(int *)(lVar5 + 0x308)) goto LAB_100457848;
              }
              iVar3 = _strcmp((char *)**(undefined8 **)(lVar6 + 0x40),*(char **)(param_1 + 0x10));
              if (iVar3 == 0) {
                local_6c = *(undefined4 *)(lVar4 + 0x260);
                local_80 = 0;
                uStack_78 = 0;
                local_70 = 0;
                local_88 = &PTR_FUN_101496cd8;
                iStack_68 = iVar11;
                FUN_100496580(&local_88,&DAT_101e47d30);
              }
            }
            else {
              iVar3 = *(int *)(lVar5 + 0x30c);
              lVar7 = lVar5;
              while (iVar3 != iVar11) {
                lVar7 = *(long *)(lVar7 + 0x350);
                iVar3 = *(int *)(lVar7 + 0x30c);
              }
              if (*(int *)(lVar7 + 0x308) == *(int *)(lVar12 + 0x260)) goto LAB_1004577e4;
            }
LAB_100457848:
            uVar2 = uVar2 + 1;
            iVar9 = iVar9 + -1;
          } while (uVar2 < *(uint *)(lVar10 + 0x38));
        }
        break;
      case 1:
        FUN_100457948(lVar10,*(undefined4 *)(lVar4 + 0x260));
        break;
      case 2:
        FUN_1004578b4(lVar10,*(undefined4 *)(lVar4 + 0x260));
        break;
      case 3:
        FUN_1004579dc(lVar10,*(undefined4 *)(lVar4 + 0x260));
      }
      uVar8 = uVar8 + 1;
    }
  }
  return;
}




void FUN_1004578b4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  if (DAT_101d23a38 != '\0') {
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
      if (*(char *)(*(long *)(lVar1 + 0x40) + 0x26) != '\0') {
        uStack_48 = *(undefined4 *)(lVar1 + 0x30c);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_68 = &PTR_FUN_101496cd8;
        local_4c = param_2;
        FUN_100496580(&local_68,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_100457948(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  if (DAT_101d23a38 != '\0') {
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
      if (*(char *)(*(long *)(lVar1 + 0x40) + 0x27) != '\0') {
        uStack_48 = *(undefined4 *)(lVar1 + 0x30c);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_68 = &PTR_FUN_101496cd8;
        local_4c = param_2;
        FUN_100496580(&local_68,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_1004579dc(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  if (DAT_101d23a38 != '\0') {
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
      if (*(char *)(*(long *)(lVar1 + 0x40) + 0x25) != '\0') {
        uStack_48 = *(undefined4 *)(lVar1 + 0x30c);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_68 = &PTR_FUN_101496cd8;
        local_4c = param_2;
        FUN_100496580(&local_68,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_100457a70(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  if (DAT_101d23a38 != '\0') {
    lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    iVar1 = *(int *)(param_2 + 0x308);
    if (*(int *)(param_1 + 0x14) != -1) {
      iVar1 = *(int *)(param_1 + 0x14);
    }
    lVar2 = FUN_100345d90(iVar1);
    if ((lVar2 == 0) ||
       (fVar4 = *(float *)(lVar3 + 0x250) - *(float *)(lVar2 + 0x250),
       fVar5 = (*(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x254)) -
               (*(float *)(lVar2 + 0x254) + *(float *)(lVar2 + 0x2ec)),
       fVar6 = *(float *)(lVar3 + 600) - *(float *)(lVar2 + 600),
       *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) <
       fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5)) {
      local_3c = *(undefined4 *)(lVar3 + 0x260);
      uStack_38 = *(undefined4 *)(param_2 + 0x30c);
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_58 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_58,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100457b4c(long *param_1,long param_2)

{
  long lVar1;
  
  if ((uint)*(ushort *)(param_2 + 0x344) == (*(int *)(param_2 + 0x34c) << 5) >> 5) {
    lVar1 = 6;
  }
  else {
    if (*(ushort *)(param_2 + 0x344) != 0) {
      return;
    }
    lVar1 = 7;
  }
                    /* WARNING: Could not recover jumptable at 0x000100457b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1 * 8))();
  return;
}




undefined8 FUN_100457b80(void)

{
  return 1;
}




void FUN_100457b88(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = FUN_1010a0298(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),DAT_1018672f0);
  plVar5 = (long *)0x0;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x28);
  }
  lVar6 = *plVar5;
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar4 != 0) {
    plVar1 = plVar5 + 1;
  }
  lVar4 = *plVar1;
  *(long **)(param_1 + 0x38) = plVar5;
  *(int *)(param_1 + 0x40) = (int)lVar4;
  lVar4 = (**(code **)(lVar6 + 0x10))();
  bVar3 = *(byte *)(param_1 + 0x10);
  *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(param_1 + 0x14);
  *(byte *)(lVar4 + 0x50) = *(byte *)(lVar4 + 0x50) & 0xf0 | bVar3 & 3;
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) == 3) {
      lVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
      *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_1 + 0x28);
      *(byte *)(lVar4 + 0x50) = *(byte *)(lVar4 + 0x50) | 0xc;
    }
    else {
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 != (long *)0x0) {
        if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
          lVar4 = (**(code **)(*plVar5 + 0x10))();
          if (lVar4 != 0) {
            plVar5 = *(long **)(param_1 + 0x18);
            lVar4 = 0;
            if (plVar5 != (long *)0x0) {
              if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
                lVar4 = (**(code **)(*plVar5 + 0x10))();
              }
              else {
                lVar4 = 0;
                *(undefined8 *)(param_1 + 0x18) = 0;
                *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
              }
            }
            if (lVar4 != *(long *)(*(long *)(param_2 + 0x10) + 0x10)) {
              plVar5 = *(long **)(param_1 + 0x38);
              if (plVar5 == (long *)0x0) {
                lVar4 = 0;
              }
              else if (*(int *)(param_1 + 0x40) == (int)plVar5[1]) {
                lVar4 = (**(code **)(*plVar5 + 0x10))();
              }
              else {
                lVar4 = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
              }
              plVar5 = *(long **)(param_1 + 0x18);
              lVar6 = 0;
              if (plVar5 != (long *)0x0) {
                if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
                  lVar6 = (**(code **)(*plVar5 + 0x10))();
                }
                else {
                  lVar6 = 0;
                  *(undefined8 *)(param_1 + 0x18) = 0;
                  *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
                }
              }
              bVar3 = *(byte *)(param_1 + 0x30);
              uVar2 = *(undefined4 *)(lVar6 + 0x30);
              *(long *)(lVar4 + 0x38) = lVar6 + 0x28;
              *(undefined4 *)(lVar4 + 0x40) = uVar2;
              *(byte *)(lVar4 + 0x50) = *(byte *)(lVar4 + 0x50) & 0xf3 | (bVar3 & 3) << 2;
            }
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined4 *)(param_1 + 0x20) = DAT_101dc0b88;
        }
      }
    }
  }
  return;
}




void FUN_100457d70(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x38);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100457e14(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_101498a88;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0xbf80000000000000;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 7) = DAT_101dc0b88;
  param_1[8] = DAT_101dc1cb8;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = uVar1;
  param_1[0xb] = 3;
  *(undefined2 *)(param_1 + 0xc) = 0;
  return;
}




void FUN_100457e74(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  
  lVar5 = FUN_1010a0298(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),DAT_1018672f0);
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = lVar5 + 0x28;
  }
  puVar1 = &DAT_101dc0b88;
  if (lVar5 != 0) {
    puVar1 = (undefined4 *)(lVar6 + 8);
  }
  uVar2 = *puVar1;
  *(long *)(param_1 + 0x48) = lVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  fVar8 = (float)FUN_1000bbea4(param_1 + 0x10,param_2,
                               *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  *(float *)(param_1 + 0x20) = fVar8;
  if (*(char *)(param_1 + 0x60) != '\0') {
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(*param_2 + 0x344));
    *(float *)(param_1 + 0x20) = fVar8 * fVar4;
  }
  lVar6 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  bVar3 = *(byte *)(param_1 + 0x58);
  *(undefined4 *)(lVar6 + 0x34) = *(undefined4 *)(param_1 + 0x20);
  *(byte *)(lVar6 + 0x50) = *(byte *)(lVar6 + 0x50) & 0xf0 | bVar3 & 3;
  if (*(int *)(param_1 + 0x5c) != 0) {
    if (*(int *)(param_1 + 0x5c) == 3) {
      lVar6 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
      *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_1 + 0x40);
      *(byte *)(lVar6 + 0x50) = *(byte *)(lVar6 + 0x50) | 0xc;
    }
    else {
      plVar7 = *(long **)(param_1 + 0x30);
      if (plVar7 != (long *)0x0) {
        if (*(int *)(param_1 + 0x38) == (int)plVar7[1]) {
          lVar6 = (**(code **)(*plVar7 + 0x10))();
          if (lVar6 != 0) {
            plVar7 = *(long **)(param_1 + 0x30);
            lVar6 = 0;
            if (plVar7 != (long *)0x0) {
              if (*(int *)(param_1 + 0x38) == (int)plVar7[1]) {
                lVar6 = (**(code **)(*plVar7 + 0x10))();
              }
              else {
                lVar6 = 0;
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
              }
            }
            if (lVar6 != *(long *)(*(long *)(*param_2 + 0x10) + 0x10)) {
              plVar7 = *(long **)(param_1 + 0x48);
              if (plVar7 == (long *)0x0) {
                lVar6 = 0;
              }
              else if (*(int *)(param_1 + 0x50) == (int)plVar7[1]) {
                lVar6 = (**(code **)(*plVar7 + 0x10))();
              }
              else {
                lVar6 = 0;
                *(undefined8 *)(param_1 + 0x48) = 0;
                *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
              }
              plVar7 = *(long **)(param_1 + 0x30);
              lVar5 = 0;
              if (plVar7 != (long *)0x0) {
                if (*(int *)(param_1 + 0x38) == (int)plVar7[1]) {
                  lVar5 = (**(code **)(*plVar7 + 0x10))();
                }
                else {
                  lVar5 = 0;
                  *(undefined8 *)(param_1 + 0x30) = 0;
                  *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
                }
              }
              bVar3 = *(byte *)(param_1 + 0x5c);
              uVar2 = *(undefined4 *)(lVar5 + 0x30);
              *(long *)(lVar6 + 0x38) = lVar5 + 0x28;
              *(undefined4 *)(lVar6 + 0x40) = uVar2;
              *(byte *)(lVar6 + 0x50) = *(byte *)(lVar6 + 0x50) & 0xf3 | (bVar3 & 3) << 2;
            }
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
        }
      }
    }
  }
  return;
}




void FUN_1004580a0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x48);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100458144(long param_1,long *param_2)

{
  float fVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x50) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if (*(char *)(param_1 + 0x61) != '\0') {
          fVar4 = (float)FUN_1000bbea4(param_1 + 0x10,param_2,
                                       *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
          *(float *)(param_1 + 0x20) = fVar4;
          if (*(char *)(param_1 + 0x60) != '\0') {
            fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(*param_2 + 0x344));
            *(float *)(param_1 + 0x20) = fVar4 * fVar1;
          }
          lVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(param_1 + 0x20);
        }
        fVar4 = *(float *)(param_1 + 0x24);
        if (0.0 <= fVar4) {
          fVar5 = (float)_powf(*(float *)(*param_2 + 0x318) / *(float *)(*param_2 + 0x31c),
                               (short)*(undefined4 *)(param_1 + 0x28));
          fVar1 = *(float *)(param_1 + 0x20);
          lVar3 = (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
          *(float *)(lVar3 + 0x34) = fVar4 + fVar5 * (fVar1 - fVar4);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100458248(long param_1,long param_2,long param_3,undefined8 param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  code *pcVar7;
  char cVar8;
  char *pcVar9;
  uint local_e0 [2];
  char *local_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined1 *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  uint uStack_a0;
  undefined3 uStack_9c;
  undefined1 local_99;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 local_68;
  int local_60 [2];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  puVar5 = local_e0;
  if (DAT_101d23a38 == '\0') {
    local_48 = 0;
    uVar6 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
    if ((((int)uVar6 == 0x1f) || (1 < *(ushort *)(param_2 + uVar6 * 0x38 + 0x90) - 3)) ||
       (*(char *)(param_1 + 100) < '\0')) {
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_4,param_1 + 0x5c);
      }
      if (param_3 == 0) {
        bVar2 = false;
      }
      else {
        uVar3 = FUN_10034f06c();
        bVar2 = uVar3 == *(byte *)(param_3 + 0x264);
      }
      local_60[0] = 0;
      FUN_100491234(param_1,bVar2,param_4,local_60);
      if (local_60[0] != 0) {
        lStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        local_c0 = (undefined1 *)0x0;
        local_b0 = local_60[0];
        local_ac = 0xffffffff00000000;
        local_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_99 = 0xff;
        local_98 = 0;
        local_94 = DAT_101dc1cb8;
        local_8c = 0x3f8000003f800000;
        local_84 = 0x3f800000;
        local_80 = 0;
        local_78 = 0;
        local_74 = 2;
        local_6c = 0x101;
        local_68 = 0;
        FUN_1004912fc(param_1,&local_d0,param_3,param_2);
        if (*(code **)(param_1 + 0x40) != (code *)0x0) {
          (**(code **)(param_1 + 0x40))(param_4,&local_8c,&local_80,(long)&local_80 + 4,&local_78);
        }
        local_d8 = (char *)0x0;
        if (*(code **)(param_1 + 0x30) == (code *)0x0) {
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_4,auStack_58);
          }
        }
        else {
          (**(code **)(param_1 + 0x30))(param_4,&local_48,&local_d8,(ulong)&local_d0 | 8);
          if (lStack_c8 != 0) {
            lStack_c8 = FUN_100448e2c(param_2);
          }
        }
        local_e0[0] = 0x811c9dc5;
        local_d0 = local_48;
        if (local_d8 == (char *)0x0) {
          uStack_a0 = 0;
        }
        else {
          cVar8 = *local_d8;
          uStack_a0 = 0x811c9dc5;
          if (cVar8 != '\0') {
            uStack_a0 = 0x811c9dc5;
            pcVar9 = local_d8;
            do {
              pcVar9 = pcVar9 + 1;
              uStack_a0 = (uStack_a0 ^ (int)cVar8) * 0x1000193;
              cVar8 = *pcVar9;
            } while (cVar8 != '\0');
          }
        }
        local_c0 = (undefined1 *)0x0;
        if (*(long *)(param_1 + 0x38) != 0) {
          local_c0 = auStack_58;
        }
        pcVar9 = *(char **)(param_1 + 0x10);
        if (pcVar9 == (char *)0x0) {
          local_e0[0] = 0;
        }
        else {
          cVar8 = *pcVar9;
          while (cVar8 != '\0') {
            pcVar9 = pcVar9 + 1;
            local_e0[0] = (local_e0[0] ^ (int)cVar8) * 0x1000193;
            cVar8 = *pcVar9;
          }
        }
        uVar1 = *(ushort *)(param_1 + 100) & 7;
        if (uVar1 == 3) {
          if (*(long *)(param_2 + 0x50) == 0) {
            return;
          }
          puVar5 = (uint *)FUN_100448e2c(param_2,*(undefined8 *)(param_1 + 0x18));
          plVar4 = *(long **)(param_2 + 0x50);
          pcVar7 = *(code **)(*plVar4 + 0xb0);
        }
        else {
          if (uVar1 != 2) {
            if (uVar1 != 1) {
              return;
            }
            plVar4 = *(long **)(param_2 + 0x50);
            if (plVar4 == (long *)0x0) {
              return;
            }
            (**(code **)(*plVar4 + 0xa0))(plVar4,&local_d0);
            return;
          }
          plVar4 = *(long **)(param_2 + 0x50);
          if (plVar4 == (long *)0x0) {
            return;
          }
          pcVar7 = *(code **)(*plVar4 + 0xa8);
        }
        (*pcVar7)(plVar4,&local_d0,puVar5);
      }
    }
  }
  return;
}




void FUN_100458548(long *param_1,long param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  if ((uint)*(ushort *)(param_2 + 0x344) != (*(int *)(param_2 + 0x34c) << 5) >> 5) {
    if (*(ushort *)(param_2 + 0x344) == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
      goto LAB_1004585c0;
    }
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x40);
      goto LAB_1004585c0;
    }
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar1 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
LAB_1004585c0:
                    /* WARNING: Could not recover jumptable at 0x0001004585d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}




void FUN_100458600(long *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xf) & 3;
  if (bVar1 == 3) {
    iVar3 = FUN_1003461dc(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10));
  }
  else {
    if (bVar1 == 2) {
      lVar5 = FUN_100345d90(*(undefined4 *)(param_2 + 0x308));
      if (lVar5 != 0) {
        FUN_10034ee90();
        lVar4 = FUN_100345d90();
        if (*(char *)(lVar4 + 0x264) != *(char *)(lVar5 + 0x264)) {
          return;
        }
      }
      goto LAB_1004586a4;
    }
    if (bVar1 != 1) goto LAB_1004586a4;
    iVar3 = *(int *)(param_2 + 0x308);
  }
  iVar2 = FUN_10034ee90();
  if (iVar3 != iVar2) {
    return;
  }
LAB_1004586a4:
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10);
  lVar5 = FUN_100345d90(*(undefined4 *)(param_2 + 0x308));
  if ((lVar5 != 0) && (iVar3 = FUN_1003461dc(lVar5), iVar3 != -1)) {
    FUN_1003461dc(lVar5);
    lVar5 = FUN_100345d90();
  }
  FUN_100458248(param_1 + 2,uVar6,lVar5,param_2);
  iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100458720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return;
}




void FUN_100458724(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_101d23a38 == '\0') &&
     (plVar2 = *(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x50), plVar2 != (long *)0x0
     )) {
    lVar1 = 0xd0;
    if ((*(ushort *)(param_1 + 0x74) & 0x200) != 0) {
      lVar1 = 0xd8;
    }
                    /* WARNING: Could not recover jumptable at 0x000100458768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + lVar1))(plVar2,*(undefined4 *)(param_1 + 0x6c));
    return;
  }
  return;
}




void FUN_10045876c(long param_1,long param_2)

{
  long *plVar1;
  undefined4 local_14;
  
  if (DAT_101d23a38 == '\0') {
    local_14 = NEON_ucvtf((uint)*(ushort *)(param_2 + 0x344));
    plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x50);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 200))(plVar1,*(undefined4 *)(param_1 + 0x6c),"Stacks",1,&local_14);
    }
  }
  return;
}




byte FUN_1004587d0(long param_1)

{
  return *(byte *)(param_1 + 0x78) >> 2 & 1;
}




byte FUN_1004587dc(long param_1)

{
  return *(byte *)(param_1 + 0x78) >> 3 & 1;
}




void FUN_1004587e8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = 0;
  while( true ) {
    lVar5 = *(long *)(param_2 + 0x38);
    if (lVar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_10045fb10(lVar5);
    }
    if (uVar1 <= uVar4) break;
    uVar3 = FUN_10045fa7c(lVar5,uVar4);
    lVar5 = FUN_100345d90(*(undefined4 *)(param_2 + 0x308));
    if ((lVar5 != 0) && (iVar2 = FUN_1003461dc(lVar5), iVar2 != -1)) {
      FUN_1003461dc(lVar5);
      lVar5 = FUN_100345d90();
    }
    FUN_100458248(param_1 + 0x10,uVar3,lVar5,param_2);
    uVar4 = uVar4 + 1;
  }
  return;
}




void FUN_100458898(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_101498bb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1004588c4(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 3) {
    uStack_38 = 0;
    (**(code **)(param_1 + 0x20))(param_2,&uStack_38);
    uVar3 = DAT_101dc0b88;
    if (uStack_38 == 0) {
      return;
    }
    if (*(long *)(lVar4 + 0x10) == uStack_38) {
      bVar2 = *(byte *)(lVar4 + 0x818) & 0xf9;
      *(undefined8 *)(lVar4 + 0x7e8) = 0;
    }
    else {
      bVar2 = *(byte *)(lVar4 + 0x818) | 6;
      *(byte *)(lVar4 + 0x818) = bVar2;
      *(ulong *)(lVar4 + 0x7e8) = uStack_38 + 0x28;
      uVar3 = *(undefined4 *)(uStack_38 + 0x30);
    }
    *(undefined4 *)(lVar4 + 0x7f0) = uVar3;
    bVar2 = bVar2 | 0x20;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return;
      }
      uStack_28 = 0;
      (**(code **)(param_1 + 0x20))(param_2,&uStack_28);
      uStack_38 = uStack_28 & 0xffffffff;
      uStack_30 = uStack_28._4_4_;
      FUN_1004547dc(lVar4,&uStack_38);
      return;
    }
    uStack_38 = 0;
    (**(code **)(param_1 + 0x20))(param_2,&uStack_38);
    *(undefined4 *)(lVar4 + 0x7f8) = (undefined4)uStack_38;
    *(undefined4 *)(lVar4 + 0x7fc) = 0;
    *(undefined4 *)(lVar4 + 0x800) = uStack_38._4_4_;
    uVar3 = DAT_101dc0b88;
    *(undefined8 *)(lVar4 + 0x7e8) = 0;
    *(undefined4 *)(lVar4 + 0x7f0) = uVar3;
    bVar2 = *(byte *)(lVar4 + 0x818) & 0xf9 | 0x24;
  }
  *(byte *)(lVar4 + 0x818) = bVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004588c4(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  lVar4 = *(long *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 3) {
    local_38 = 0;
    (**(code **)(param_1 + 0x20))(param_2,&local_38);
    uVar3 = DAT_101dc0b88;
    if (local_38 == 0) {
      return;
    }
    if (*(long *)(lVar4 + 0x10) == local_38) {
      bVar2 = *(byte *)(lVar4 + 0x818) & 0xf9;
      *(undefined8 *)(lVar4 + 0x7e8) = 0;
    }
    else {
      bVar2 = *(byte *)(lVar4 + 0x818) | 6;
      *(byte *)(lVar4 + 0x818) = bVar2;
      *(ulong *)(lVar4 + 0x7e8) = local_38 + 0x28;
      uVar3 = *(undefined4 *)(local_38 + 0x30);
    }
    *(undefined4 *)(lVar4 + 0x7f0) = uVar3;
    bVar2 = bVar2 | 0x20;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return;
      }
      local_28 = 0;
      (**(code **)(param_1 + 0x20))(param_2,&local_28);
      local_38 = local_28 & 0xffffffff;
      local_30 = local_28._4_4_;
      FUN_1004547dc(lVar4,&local_38);
      return;
    }
    local_38 = 0;
    (**(code **)(param_1 + 0x20))(param_2,&local_38);
    *(undefined4 *)(lVar4 + 0x7f8) = (undefined4)local_38;
    *(undefined4 *)(lVar4 + 0x7fc) = 0;
    *(undefined4 *)(lVar4 + 0x800) = local_38._4_4_;
    uVar3 = DAT_101dc0b88;
    *(undefined8 *)(lVar4 + 0x7e8) = 0;
    *(undefined4 *)(lVar4 + 0x7f0) = uVar3;
    bVar2 = *(byte *)(lVar4 + 0x818) & 0xf9 | 0x24;
  }
  *(byte *)(lVar4 + 0x818) = bVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100458a20(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = DAT_101dc0b88;
  lVar2 = *(long *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  *(undefined8 *)(lVar2 + 0x7e8) = 0;
  *(undefined4 *)(lVar2 + 0x7f0) = uVar1;
  *(byte *)(lVar2 + 0x818) = *(byte *)(lVar2 + 0x818) & 0xd9;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1004588c4(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 3) {
    uStack_38 = 0;
    (**(code **)(param_1 + 0x20))(param_2,&uStack_38);
    uVar3 = DAT_101dc0b88;
    if (uStack_38 == 0) {
      return;
    }
    if (*(long *)(lVar4 + 0x10) == uStack_38) {
      bVar2 = *(byte *)(lVar4 + 0x818) & 0xf9;
      *(undefined8 *)(lVar4 + 0x7e8) = 0;
    }
    else {
      bVar2 = *(byte *)(lVar4 + 0x818) | 6;
      *(byte *)(lVar4 + 0x818) = bVar2;
      *(ulong *)(lVar4 + 0x7e8) = uStack_38 + 0x28;
      uVar3 = *(undefined4 *)(uStack_38 + 0x30);
    }
    *(undefined4 *)(lVar4 + 0x7f0) = uVar3;
    bVar2 = bVar2 | 0x20;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return;
      }
      uStack_28 = 0;
      (**(code **)(param_1 + 0x20))(param_2,&uStack_28);
      uStack_38 = uStack_28 & 0xffffffff;
      uStack_30 = uStack_28._4_4_;
      FUN_1004547dc(lVar4,&uStack_38);
      return;
    }
    uStack_38 = 0;
    (**(code **)(param_1 + 0x20))(param_2,&uStack_38);
    *(undefined4 *)(lVar4 + 0x7f8) = (undefined4)uStack_38;
    *(undefined4 *)(lVar4 + 0x7fc) = 0;
    *(undefined4 *)(lVar4 + 0x800) = uStack_38._4_4_;
    uVar3 = DAT_101dc0b88;
    *(undefined8 *)(lVar4 + 0x7e8) = 0;
    *(undefined4 *)(lVar4 + 0x7f0) = uVar3;
    bVar2 = *(byte *)(lVar4 + 0x818) & 0xf9 | 0x24;
  }
  *(byte *)(lVar4 + 0x818) = bVar2;
  return;
}




void FUN_100458a84(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_100432da4(*param_1);
  uVar1 = _cosf();
  *param_2 = uVar1;
  FUN_100432da4(*param_1);
  uVar1 = _sinf();
  param_2[1] = uVar1;
  return;
}




void FUN_100458ac4(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100432da4(*param_1);
  *param_2 = uVar1;
  uVar1 = FUN_100432e08(*param_1);
  param_2[1] = uVar1;
  return;
}




void FUN_100458afc(long *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar2 = *(float *)(lVar1 + 0x240);
  *param_2 = fVar2;
  fVar3 = *(float *)(lVar1 + 0x248);
  param_2[1] = fVar3;
  fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar4 < 1.1920929e-06) {
    *(undefined8 *)param_2 = DAT_101873a50;
    return;
  }
  fVar4 = SQRT(fVar4);
  *param_2 = fVar2 / fVar4;
  param_2[1] = fVar3 / fVar4;
  return;
}




void FUN_100458b64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_100432d40(*param_1);
  uVar1 = FUN_100345d90();
  *param_2 = uVar1;
  return;
}




void FUN_100458b90(long param_1)

{
  FUN_10044e548(param_1 + 0x10);
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc();
  }
  FUN_100458bcc(DAT_10184e198,param_1);
  return;
}




void FUN_100458bcc(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x51420) = *(int *)(param_1 + 0x51420) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x51410) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x51412) = sVar2;
    *(short *)(param_1 + 0x51410) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x51412);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x51412) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x68) = sVar2;
  }
  *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + -1;
  return;
}




void FUN_100458c78(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100458d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  uStack_68 = param_3;
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100458d98(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100458e24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  uStack_68 = param_3;
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100458eb8(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong local_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_38 = (ulong)param_3;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100458f4c(long param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(uint *)(param_2 + 0x344);
  local_488 = param_2;
  if ((uVar2 & 0xffff) == uVar2 >> 0x10) {
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    plVar4 = (long *)(lVar3 + -8);
    if (*(char *)(param_1 + 0x28) == '\0') {
      if (lVar3 != 0 && plVar4 != (long *)0x0) {
        do {
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_488);
          plVar1 = plVar4 + 1;
          plVar4 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar4 = (long *)(*plVar1 + -8);
          }
        } while (plVar4 != (long *)0x0);
      }
    }
    else if (lVar3 != 0 && plVar4 != (long *)0x0) {
      do {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_488);
        plVar1 = plVar4 + 1;
        plVar4 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar4 = (long *)(*plVar1 + -8);
        }
      } while (plVar4 != (long *)0x0);
    }
  }
  else if (*(char *)(param_1 + 0x28) != '\0' && (uVar2 & 0xffff) - param_3 == uVar2 >> 0x10) {
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_488);
        plVar1 = plVar4 + 1;
        plVar4 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar4 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_1004590a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar5 = FUN_1010a0298(param_2,DAT_10184dc38);
  plVar1 = (long *)0x0;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x28);
  }
  plVar2 = (long *)&DAT_101dc0b88;
  if (lVar5 != 0) {
    plVar2 = plVar1 + 1;
  }
  lVar4 = *plVar2;
  *(long **)(param_1 + 0x30) = plVar1;
  *(int *)(param_1 + 0x38) = (int)lVar4;
  if (lVar5 != 0) {
    if ((int)lVar4 == (int)plVar1[1]) {
      lVar5 = (**(code **)(*plVar1 + 0x10))();
      if (lVar5 != 0) {
        lVar5 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
        uVar3 = *(undefined4 *)(param_1 + 0x40);
        *(undefined4 *)(lVar5 + 0x40) = uVar3;
        *(undefined4 *)(lVar5 + 0x44) = uVar3;
        *(long *)(lVar5 + 0x38) = param_1 + 0x28;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_38 = (ulong)*(uint *)(param_1 + 0x40) << 0x20;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_488);
        plVar2 = plVar1 + 1;
        plVar1 = (long *)0x0;
        if (*plVar2 != 0) {
          plVar1 = (long *)(*plVar2 + -8);
        }
      }
    }
  }
  return;
}




void FUN_1004591cc(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined4 *)(param_2 + 0x40) = param_1;
  *(undefined4 *)(param_2 + 0x44) = param_1;
  *(undefined8 *)(param_2 + 0x38) = param_3;
  return;
}




void FUN_1004591d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_498;
  undefined1 auStack_490 [1040];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if ((*(byte *)(param_1 + 0x44) & 3) == 0) {
          local_498 = param_2;
          _bzero(auStack_490,0x404);
          uStack_58 = 0;
          local_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          lVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
          fVar5 = *(float *)(lVar3 + 0x40);
          lVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(*(long **)(param_1 + 0x30));
          uStack_48 = CONCAT44(fVar5 - *(float *)(lVar3 + 0x44),(undefined4)uStack_48);
          if (*(long *)(param_1 + 0x10) != 0) {
            plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
            while (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x10))(plVar2,&local_498);
              plVar1 = plVar2 + 1;
              plVar2 = (long *)0x0;
              if (*plVar1 != 0) {
                plVar2 = (long *)(*plVar1 + -8);
              }
            }
          }
        }
        plVar2 = *(long **)(param_1 + 0x30);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100459330(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  local_488 = *(long *)(param_2 + 0x10);
  if ((local_488 != 0) && (*(int *)(*(long *)(local_488 + 8) + 0xa4) != DAT_1018672e0)) {
    local_488 = 0;
  }
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_38 = (ulong)*(uint *)(param_1 + 0x40) << 0x20;
  lVar2 = *(long *)(param_1 + 0x10);
  plVar3 = (long *)(lVar2 + -8);
  if ((*(byte *)(param_1 + 0x44) >> 1 & 1) == 0) {
    if (lVar2 != 0 && plVar3 != (long *)0x0) {
      do {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_488);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      } while (plVar3 != (long *)0x0);
    }
  }
  else if (lVar2 != 0 && plVar3 != (long *)0x0) {
    do {
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_488);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    } while (plVar3 != (long *)0x0);
  }
  *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x40);
  return;
}




void FUN_100459434(long param_1)

{
  FUN_100459330(param_1 + -0x28);
  return;
}




void FUN_10045943c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = FUN_1010a0298(param_2,DAT_10184e4c8);
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x28);
  }
  plVar2 = (long *)&DAT_101dc0b88;
  if (lVar4 != 0) {
    plVar2 = plVar1 + 1;
  }
  lVar3 = *plVar2;
  *(long **)(param_1 + 0x30) = plVar1;
  *(int *)(param_1 + 0x38) = (int)lVar3;
  if (lVar4 != 0) {
    if ((int)lVar3 == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        lVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
        *(long *)(lVar4 + 0x38) = param_1 + 0x28;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1004594e0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x30);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100459584(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = *(long *)(param_2 + 0x10);
  if ((local_488 != 0) && (*(int *)(*(long *)(local_488 + 8) + 0xa4) != DAT_1018672e0)) {
    local_488 = 0;
  }
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_1010a1cd4();
  uStack_38 = CONCAT44(CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))),
                       (undefined4)uStack_38);
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459638(long param_1)

{
  FUN_100459584(param_1 + -0x28);
  return;
}




void FUN_100459640(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return;
  }
  FUN_100459650();
  return;
}




void FUN_100459650(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 local_24;
  
  lVar4 = FUN_1010a0298(param_2,DAT_10184dc38);
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x28);
  }
  plVar2 = (long *)&DAT_101dc0b88;
  if (lVar4 != 0) {
    plVar2 = plVar1 + 1;
  }
  lVar3 = *plVar2;
  *(long **)(param_1 + 0x30) = plVar1;
  *(int *)(param_1 + 0x38) = (int)lVar3;
  if (lVar4 != 0) {
    if ((int)lVar3 == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        local_24 = 0;
        (**(code **)(param_1 + 0x40))(param_2,&local_24);
        lVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
        *(undefined4 *)(lVar4 + 0x40) = local_24;
        *(undefined4 *)(lVar4 + 0x44) = local_24;
        *(long *)(lVar4 + 0x38) = param_1 + 0x28;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100459718(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x30);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1004597bc(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_1018672e0) {
    lVar3 = 0;
  }
  local_488 = lVar3;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar4 != (long *)0x0) {
    do {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_488);
      plVar1 = plVar4 + 1;
      plVar4 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar4 = (long *)(*plVar1 + -8);
      }
    } while (plVar4 != (long *)0x0);
  }
  plVar4 = *(long **)(param_1 + 0x30);
  uVar2 = 0;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar4[1]) {
      uVar2 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  FUN_1010a01dc(uVar2);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_100459650(*(long *)(param_1 + 0x48),lVar3);
  }
  return;
}




void FUN_1004598c4(long param_1)

{
  FUN_1004597bc(param_1 + -0x28);
  return;
}




void FUN_1004598cc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 local_24;
  
  lVar4 = FUN_1010a0298(param_2,DAT_10184dc38);
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x28);
  }
  plVar2 = (long *)&DAT_101dc0b88;
  if (lVar4 != 0) {
    plVar2 = plVar1 + 1;
  }
  lVar3 = *plVar2;
  *(long **)(param_1 + 0x30) = plVar1;
  *(int *)(param_1 + 0x38) = (int)lVar3;
  if (lVar4 != 0) {
    if ((int)lVar3 == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        local_24 = 0;
        (**(code **)(param_1 + 0x40))(param_2,&local_24);
        lVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
        *(undefined4 *)(lVar4 + 0x40) = local_24;
        *(undefined4 *)(lVar4 + 0x44) = local_24;
        *(long *)(lVar4 + 0x38) = param_1 + 0x28;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_100459994(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x30);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_100459aac(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = *(long *)(param_2 + 0x10);
  if ((local_488 != 0) && (*(int *)(*(long *)(local_488 + 8) + 0xa4) != DAT_1018672e0)) {
    local_488 = 0;
  }
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  plVar2 = *(long **)(param_1 + 0x30);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  FUN_1010a01dc(uVar3);
  return;
}




void FUN_100459ba4(long param_1)

{
  FUN_100459aac(param_1 + -0x28);
  return;
}




void FUN_100459bac(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459c38(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459cc4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459d50(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459ddc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459e68(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459ef4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_100459f80(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a00c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a098(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  uStack_68 = param_3;
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a12c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a1b8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a244(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong local_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_38 = (ulong)param_3;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a2d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a364(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1004590a0();
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a3f8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1004591d8();
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a48c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a518(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  local_40 = param_3;
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a638(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045a6c4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long local_498;
  undefined1 auStack_490 [1040];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x88) & 0x1f;
  if (((int)uVar5 != 0x1f) && (*(short *)(lVar3 + uVar5 * 0x38 + 0x90) == 2)) {
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      puVar4 = &DAT_1013cd800;
    }
    else {
      puVar4 = &DAT_1013cd800;
      do {
        if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
          puVar4 = (undefined8 *)(lVar3 + 0x7b0);
          break;
        }
        lVar3 = *(long *)(lVar3 + 0x20);
      } while (lVar3 != 0);
    }
    local_40 = *puVar4;
    local_38 = *(undefined4 *)(puVar4 + 1);
    local_498 = param_2;
    _bzero(auStack_490,0x404);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    local_50 = &local_40;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_498);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_10045a7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  local_40 = param_3;
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a868(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a8f4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045a980(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = FUN_1010a0298(param_2,DAT_10184dc38);
  plVar1 = (long *)0x0;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x28);
  }
  plVar2 = (long *)&DAT_101dc0b88;
  if (lVar4 != 0) {
    plVar2 = plVar1 + 1;
  }
  lVar3 = *plVar2;
  *(long **)(param_1 + 0x30) = plVar1;
  *(int *)(param_1 + 0x38) = (int)lVar3;
  if (lVar4 != 0) {
    if ((int)lVar3 == (int)plVar1[1]) {
      lVar4 = (**(code **)(*plVar1 + 0x10))();
      if (lVar4 != 0) {
        lVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
        *(undefined8 *)(lVar4 + 0x40) = 0x38d1b71738d1b717;
        *(long *)(lVar4 + 0x38) = param_1 + 0x28;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10045aa34(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x30);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x38) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10045aad8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_498;
  undefined1 auStack_490 [1040];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  float local_3c;
  float local_38;
  float fStack_34;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_1018672e0) {
    lVar3 = 0;
  }
  (**(code **)(param_1 + 0x40))(lVar3,&local_38);
  (**(code **)(param_1 + 0x48))(lVar3,&local_3c);
  lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
  local_38 = *(float *)(lVar4 + 0x250) - local_38;
  fStack_34 = *(float *)(lVar4 + 600) - fStack_34;
  if (local_3c * local_3c < local_38 * local_38 + fStack_34 * fStack_34) {
    local_498 = lVar3;
    _bzero(auStack_490,0x404);
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_498);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  *(undefined4 *)(lVar3 + 0x44) = 0x38d1b717;
  if (*(float *)(lVar3 + 0x40) < 0.0001) {
    *(undefined4 *)(lVar3 + 0x40) = 0x38d1b717;
  }
  return;
}




void FUN_10045ac10(long param_1)

{
  FUN_10045aad8(param_1 + -0x28);
  return;
}




void FUN_10045ac18(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100432da4();
  *param_2 = uVar1;
  uVar1 = FUN_100432e08(param_1);
  param_2[1] = uVar1;
  return;
}




void FUN_10045ac4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149d998;
  DAT_10184e198 = 0;
  return;
}




void FUN_10045ac64(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  char *pcVar7;
  undefined8 local_488;
  undefined1 auStack_480 [1032];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x38);
  if ((((bVar2 & 1) == 0) || (*(char *)(*param_3 + 0x8b) != '\0')) &&
     (((bVar2 >> 1 & 1) == 0 || (*(char *)(*param_3 + 0x8e) != '\0')))) {
    if (*(uint *)(param_1 + 0x28) != 0) {
      uVar4 = 0x811c9dc5;
      pcVar7 = *(char **)(*param_3 + 8);
      cVar3 = *pcVar7;
      while (cVar3 != '\0') {
        pcVar7 = pcVar7 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar7;
      }
      if ((bool)((bVar2 >> 2 ^ 0xff) & 1) != (uVar4 == *(uint *)(param_1 + 0x28))) {
        return;
      }
    }
    if ((*(code **)(param_1 + 0x30) == (code *)0x0) ||
       (iVar6 = (**(code **)(param_1 + 0x30))(param_2,param_3), iVar6 != 0)) {
      local_488 = param_2;
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(param_1 + 0x10) + -8);
        local_78 = param_3;
        while (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_488);
          plVar1 = plVar5 + 1;
          plVar5 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar5 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
  }
  return;
}




void FUN_10045ad8c(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = 0x811c9dc5;
  cVar2 = *param_3;
  while (cVar2 != '\0') {
    param_3 = param_3 + 1;
    uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
    cVar2 = *param_3;
  }
  if ((uVar3 == *(uint *)(param_1 + 0x28)) &&
     ((*(int *)(param_1 + 0x2c) < 0 || (*(int *)(param_1 + 0x2c) == param_5)))) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_488);
        plVar1 = plVar4 + 1;
        plVar4 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar4 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_10045ae60(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = FUN_1003dc44c(*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),param_1 + 0x28);
  if (lVar4 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(lVar4 + 0x6a) == '\0';
  }
  *(bool *)(param_1 + 0x2c) = bVar3;
  if ((bool)*(char *)(param_1 + 0x2d) != bVar3) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_10045af24(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x2c) != *(char *)(param_1 + 0x2d)) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
    if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_10045afc4(long param_1,undefined8 param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(int *)(param_1 + 0x28) == *param_3) && (*(char *)(param_1 + 0x2c) == '\0')) {
    local_488 = param_2;
    if (*(char *)(param_1 + 0x2d) == '\0') {
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
        while (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
          plVar1 = plVar2 + 1;
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
    else {
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
        while (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
          plVar1 = plVar2 + 1;
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}




void FUN_10045b0d4(long param_1,undefined8 param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(int *)(param_1 + 0x28) == *param_3) && (*(char *)(param_1 + 0x2c) != '\0')) {
    local_488 = param_2;
    if (*(char *)(param_1 + 0x2d) == '\0') {
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
        while (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
          plVar1 = plVar2 + 1;
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
    else {
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
        while (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
          plVar1 = plVar2 + 1;
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}




void FUN_10045b1e0(long param_1,undefined8 param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x28) == *param_3) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
    if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}




void FUN_10045b27c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar3 = FUN_1003e2b0c(lVar4,*(undefined4 *)(param_1 + 0x28));
  lVar4 = *(long *)(lVar4 + (uVar3 & 0xffffffff) * 8 + 0x50);
  if (lVar4 == 0) {
    return;
  }
  if ((*(byte *)(lVar4 + 0x239) & 0x1c) == 0) {
    return;
  }
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return;
}




void FUN_10045b368(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar4 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar3 = FUN_1003e2b0c(lVar4,*(undefined4 *)(param_1 + 0x28));
  lVar4 = *(long *)(lVar4 + (uVar3 & 0xffffffff) * 8 + 0x50);
  if (lVar4 == 0) {
    return;
  }
  if ((*(byte *)(lVar4 + 0x239) & 0x1c) == 0) {
    return;
  }
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return;
}




void FUN_10045b450(long param_1,undefined8 param_2,char *param_3,int param_4,int param_5)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = 0x811c9dc5;
  cVar2 = *param_3;
  while (cVar2 != '\0') {
    param_3 = param_3 + 1;
    uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
    cVar2 = *param_3;
  }
  if (uVar3 == *(uint *)(param_1 + 0x28)) {
    local_488 = param_2;
    if ((param_4 == 0) && (param_5 != 0)) {
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
        while (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_488);
          plVar1 = plVar4 + 1;
          plVar4 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar4 = (long *)(*plVar1 + -8);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x2d) = 1;
    }
    else if ((param_5 == 0) && (param_4 != 0)) {
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
        while (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_488);
          plVar1 = plVar4 + 1;
          plVar4 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar4 = (long *)(*plVar1 + -8);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x2d) = 0;
    }
    else if (((param_5 != param_4) && (*(char *)(param_1 + 0x2c) != '\0')) &&
            (*(char *)(param_1 + 0x2d) != '\0')) {
      _bzero(auStack_480,0x404);
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
        while (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_488);
          plVar1 = plVar4 + 1;
          plVar4 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar4 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
  }
  return;
}




void FUN_10045b608(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 == 0x811c9dc5 || uVar2 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
    while (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_488);
      plVar1 = plVar4 + 1;
      plVar4 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar4 = (long *)(*plVar1 + -8);
      }
    }
    return;
  }
  pcVar6 = *(char **)(param_3 + 0x200);
  if (pcVar6 == (char *)0x0) {
    if (*(long *)(param_3 + 0x38) == 0) {
      pcVar6 = "<null>";
    }
    else {
      pcVar6 = *(char **)(*(long *)(param_3 + 0x38) + 8);
      if (pcVar6 == (char *)0x0) {
        uVar5 = 0;
        goto LAB_10045b6e4;
      }
    }
  }
  uVar5 = 0x811c9dc5;
  cVar3 = *pcVar6;
  while (cVar3 != '\0') {
    pcVar6 = pcVar6 + 1;
    uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
    cVar3 = *pcVar6;
  }
LAB_10045b6e4:
  if ((uVar5 == uVar2) && (*(long *)(param_1 + 0x10) != 0)) {
    plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
    while (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_488);
      plVar1 = plVar4 + 1;
      plVar4 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar4 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_10045b75c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(uint *)(param_3 + 0x2f4);
  if ((((*(uint *)(param_1 + 0x28) & (uVar2 ^ 0xffffffff)) == 0) &&
      (*(uint *)(param_1 + 0x2c) == 0xffffffff || (*(uint *)(param_1 + 0x2c) & uVar2) != 0)) &&
     ((*(uint *)(param_1 + 0x30) & uVar2) == 0)) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + -8);
      local_50 = param_3;
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_488);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_10045b81c(long param_1,undefined **param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined **local_4b8;
  undefined8 uStack_4b0;
  undefined1 local_4a8;
  undefined8 local_4a4;
  undefined8 local_49c;
  undefined8 local_494;
  undefined4 local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined2 local_460;
  byte local_45e;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  bVar3 = *(byte *)(param_1 + 0x60);
  if (((bVar3 & 1) != 0) &&
     (*(int *)(*(long *)(param_2[2] + 0x10) + 0x260) != *(int *)(param_3 + 0x260))) {
    return;
  }
  if (((bVar3 >> 1 & 1) != 0) &&
     (*(int *)(*(long *)(param_2[2] + 0x10) + 0x260) == *(int *)(param_3 + 0x260))) {
    return;
  }
  uVar2 = *(uint *)(param_3 + 0x2f4);
  if ((*(uint *)(param_1 + 0x28) & (uVar2 ^ 0xffffffff)) != 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x2c) != 0xffffffff && (*(uint *)(param_1 + 0x2c) & uVar2) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x30) & uVar2) != 0) {
    return;
  }
  if (*(int *)(param_2 + 0x61) == -1) {
    bVar3 = 0;
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(param_2[2] + 0x10);
    if (*(int *)(lVar12 + 0x260) != *(int *)(param_2 + 0x61)) {
      lVar12 = FUN_100345d90();
      if (lVar12 == 0) {
        bVar3 = 0;
        goto LAB_10045b944;
      }
      bVar3 = *(byte *)(param_1 + 0x60);
    }
    if (((bVar3 >> 2 & 1) != 0) && (*(char *)(lVar12 + 0x264) == *(char *)(param_3 + 0x264))) {
      return;
    }
    if (((bVar3 >> 3 & 1) != 0) && (*(char *)(lVar12 + 0x264) != *(char *)(param_3 + 0x264))) {
      return;
    }
    bVar3 = 1;
  }
LAB_10045b944:
  if (((*(long *)(param_1 + 0x38) == 0) || (iVar5 = FUN_1003a47d0(param_3), iVar5 != 0)) &&
     (((*(byte *)(param_1 + 0x60) >> 4 & 1) == 0 ||
      (*(int *)(param_3 + 0x2c0) == *(int *)(*(long *)(param_2[2] + 0x10) + 0x260))))) {
    if ((*(byte *)(param_1 + 0x60) >> 5 & 1) != 0) {
      lVar13 = *(long *)(param_3 + 0x18);
      while ((lVar13 != 0 && (*(int *)(*(long *)(lVar13 + 8) + 0xa4) != DAT_1018672b0))) {
        lVar13 = *(long *)(lVar13 + 0x20);
      }
      iVar5 = *(int *)(*(long *)(param_2[2] + 0x10) + 0x260);
      iVar8 = *(int *)(param_3 + 0x2c0);
      iVar6 = FUN_10045bc04(lVar13);
      if (iVar8 != iVar5) {
        if (iVar6 < 1) {
          return;
        }
        iVar8 = 0;
        while (iVar9 = FUN_10045bc70(lVar13,iVar8), iVar9 != iVar5) {
          iVar8 = iVar8 + 1;
          if (iVar6 == iVar8) {
            return;
          }
        }
      }
    }
    if (((*(byte *)(param_1 + 0x60) >> 6 & 1) == 0) ||
       (*(char *)(param_3 + 0x2c8) == *(char *)(*(long *)(param_2[2] + 0x10) + 0x264))) {
      lVar13 = *(long *)(param_1 + 0x58);
      if (lVar13 != 0) {
        iVar5 = *(int *)(param_3 + 0x260);
        uVar7 = FUN_1004d2524(lVar13);
        uVar10 = FUN_100015208(lVar13,uVar7,0x12345678);
        piVar11 = (int *)(**(code **)(param_2[0x2d] + 0x18))(param_2 + 0x2d,uVar10);
        if (iVar5 != *piVar11) {
          return;
        }
      }
      if (!(bool)(bVar3 ^ 1 | *(code **)(param_1 + 0x40) == (code *)0x0)) {
        local_4b8 = (undefined **)CONCAT44(local_4b8._4_4_,0x7f7fffff);
        (**(code **)(param_1 + 0x40))(param_2,param_3,&local_4b8);
        fVar14 = *(float *)(lVar12 + 0x250) - *(float *)(param_3 + 0x250);
        fVar15 = (*(float *)(lVar12 + 0x2ec) + *(float *)(lVar12 + 0x254)) -
                 (*(float *)(param_3 + 0x254) + *(float *)(param_3 + 0x2ec));
        fVar16 = *(float *)(lVar12 + 600) - *(float *)(param_3 + 600);
        if (local_4b8._0_4_ < SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15)) {
          return;
        }
      }
      if ((*(long **)(param_1 + 0x50) == (long *)0x0) ||
         (iVar5 = *(int *)(param_3 + 0x260),
         iVar8 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))(), iVar5 == iVar8)) {
        if (*(long *)(param_1 + 0x48) != 0) {
          local_4b8 = &PTR_FUN_101499960;
          uStack_4b0 = 0;
          local_4a4 = 0;
          local_494 = 0;
          local_49c = 0;
          local_48c = 0;
          uStack_480 = 0xbf800000c0000000;
          local_488 = 0xbf800000bf800000;
          local_478 = 0x3f800000;
          local_474 = 0xff;
          uStack_468 = 0xffffffff00000000;
          local_470 = 0xffffffff00000000;
          local_4a8 = 1;
          lVar12 = FUN_1003e10f0();
          local_460 = 0x4100;
          local_45e = *(byte *)(lVar12 + 0xe5) | 0x14;
          (**(code **)(param_1 + 0x48))(param_2,&local_4b8);
          iVar5 = (*(code *)local_4b8[3])(&local_4b8,param_3);
          if (iVar5 == 0) {
            return;
          }
        }
        local_4b8 = param_2;
        _bzero(&uStack_4b0,0x404);
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        if (*(long *)(param_1 + 0x10) != 0) {
          plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
          lStack_78 = param_3;
          while (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,&local_4b8);
            plVar1 = plVar4 + 1;
            plVar4 = (long *)0x0;
            if (*plVar1 != 0) {
              plVar4 = (long *)(*plVar1 + -8);
            }
          }
        }
      }
    }
  }
  return;
}




int FUN_10045bc04(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = (float)FUN_100032228();
  lVar2 = 0;
  iVar1 = 0;
  do {
    if ((((ulong)*(uint *)(param_1 + 0xe8) * 0xc - lVar2 != 0) &&
        (fVar3 + -10.0 <= *(float *)(param_1 + lVar2 + 0x30))) &&
       (*(int *)(param_1 + lVar2 + 0x28) != -1)) {
      iVar1 = iVar1 + 1;
    }
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x48);
  return iVar1;
}




int FUN_10045bc70(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = (float)FUN_100032228();
  lVar3 = 0;
  while (((((ulong)*(uint *)(param_1 + 0xe8) * 0xc - lVar3 == 0 ||
           (*(float *)(param_1 + lVar3 + 0x30) < fVar4 + -10.0)) ||
          (iVar2 = param_2 + -1, bVar1 = 0 < param_2, param_2 = iVar2, bVar1)) ||
         (iVar2 = *(int *)(param_1 + lVar3 + 0x28), iVar2 == -1))) {
    lVar3 = lVar3 + 0xc;
    if (lVar3 == 0x48) {
      return -1;
    }
  }
  return iVar2;
}




void FUN_10045bd00(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010045bd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




void FUN_10045bd0c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_488);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_10045bd98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(uint *)(param_1 + 0x28) != 0) {
    uVar3 = 0x811c9dc5;
    pcVar5 = *(char **)*param_3;
    cVar2 = *pcVar5;
    while (cVar2 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar5;
    }
    if (*(uint *)(param_1 + 0x28) != uVar3) {
      return;
    }
  }
  uVar3 = *(uint *)(param_3[2] + 0x2f4);
  if ((((*(uint *)(param_1 + 0x2c) & (uVar3 ^ 0xffffffff)) == 0) &&
      (*(uint *)(param_1 + 0x30) == 0xffffffff || (*(uint *)(param_1 + 0x30) & uVar3) != 0)) &&
     ((*(uint *)(param_1 + 0x34) & uVar3) == 0)) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    local_38 = 0;
    uStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + -8);
      local_70 = param_3;
      while (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_488);
        plVar1 = plVar4 + 1;
        plVar4 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar4 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_10045beb4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(uint *)(param_1 + 0x28) != 0) {
    uVar3 = 0x811c9dc5;
    pcVar4 = *(char **)*param_3;
    cVar2 = *pcVar4;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
    if (*(uint *)(param_1 + 0x28) != uVar3) {
      return;
    }
  }
  local_488 = param_2;
  _bzero(auStack_480,0x404);
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -8);
  local_70 = param_3;
  if (*(long *)(param_1 + 0x10) != 0 && plVar5 != (long *)0x0) {
    do {
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_488);
      plVar1 = plVar5 + 1;
      plVar5 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar5 = (long *)(*plVar1 + -8);
      }
    } while (plVar5 != (long *)0x0);
  }
  return;
}




undefined8 FUN_10045bfa0(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float local_4c;
  undefined8 local_48;
  
  if ((*(ushort *)(param_1 + 0x48) >> (ulong)(param_4 & 0x1f) & 1) == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x60);
  if ((bVar2 & 3) == 2) {
    lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    iVar8 = *(int *)(param_3 + 3);
  }
  else {
    if ((bVar2 & 3) != 1) goto LAB_10045c010;
    lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    iVar8 = *(int *)(param_3 + 2);
  }
  if (iVar8 != *(int *)(lVar7 + 0x260)) {
    return 0;
  }
LAB_10045c010:
  if ((*(byte *)(param_1 + 0x58) >> (ulong)(*(uint *)(param_3 + 1) & 0x1f) & 1) == 0) {
    return 0;
  }
  uVar4 = *(ushort *)((long)param_3 + 0xc);
  if ((*(ushort *)(param_1 + 0x5a) & (uVar4 ^ 0xffff)) != 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x5c) != 0xffff) && ((*(ushort *)(param_1 + 0x5c) & uVar4) == 0)) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x5e) & uVar4) != 0) {
    return 0;
  }
  if (((bVar2 >> 5 & 1) != 0) && (*(uint *)(param_3 + 1) == 3)) {
    return 0;
  }
  if ((bVar2 & 0xc) == 8) {
    if (*(char *)((long)param_3 + 0xe) != '\0') {
      return 0;
    }
  }
  else if (((bVar2 & 0xc) == 4) && (*(char *)((long)param_3 + 0xe) == '\0')) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x40) != 0) {
    pcVar9 = (char *)*param_3;
    if (pcVar9 == (char *)0x0) {
      return 0;
    }
    uVar5 = 0x811c9dc5;
    cVar3 = *pcVar9;
    while (cVar3 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar9;
    }
    if (*(uint *)(param_1 + 0x40) != uVar5) {
      return 0;
    }
  }
  if (((*(uint *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 0x50) != 0)) ||
     (*(int *)(param_1 + 0x54) != 0)) {
    plVar1 = param_3 + 4;
    if (*(int *)(param_3 + 2) != *(int *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260)) {
      plVar1 = param_3 + 5;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    uVar5 = *(uint *)(*plVar1 + 0x2f4);
    if ((*(uint *)(param_1 + 0x4c) & (uVar5 ^ 0xffffffff)) != 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x50) != 0xffffffff) && ((*(uint *)(param_1 + 0x50) & uVar5) == 0)) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x54) & uVar5) != 0) {
      return 0;
    }
  }
  if ((((bVar2 >> 6 & 1) == 0) || (param_3[5] == 0)) ||
     ((*(byte *)(param_3[5] + 0x2f5) >> 4 & 1) == 0)) {
    if ((bVar2 >> 4 & 1) != 0) {
      plVar1 = param_3 + 4;
      if (*(int *)(param_3 + 2) != *(int *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260)) {
        plVar1 = param_3 + 5;
      }
      if (*plVar1 == 0) {
        return 0;
      }
      if (*(int *)(*plVar1 + 0x260) != *(int *)(param_2 + 0x308)) {
        return 0;
      }
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      if (*(char *)(param_3 + 0xc) == '\0') {
        return 0;
      }
      local_48 = 0;
      (**(code **)(param_1 + 0x28))(param_2,&local_48);
      fVar10 = (float)NEON_fminnm(-(*(float *)((long)param_3 + 100) * (float)local_48) -
                                  *(float *)(param_3 + 0xd) * local_48._4_4_,0x3f800000);
      if (fVar10 <= -1.0) {
        fVar10 = -1.0;
      }
      fVar10 = (float)_acosf(fVar10);
      _sinf(*(float *)(param_1 + 0x44) * 0.0027777778 * 3.1415927);
      fVar11 = (float)_asinf();
      if (fVar11 < fVar10) {
        return 0;
      }
    }
    if ((*(code **)(param_1 + 0x30) != (code *)0x0) &&
       (uVar6 = (**(code **)(param_1 + 0x30))(param_2,param_3), (int)uVar6 == 0)) {
      return uVar6;
    }
    if ((*(code **)(param_1 + 0x38) == (code *)0x0) ||
       ((**(code **)(param_1 + 0x38))(param_2,&local_4c),
       local_4c < *(float *)((long)param_3 + 0x54))) {
      return 1;
    }
  }
  return 0;
}




void FUN_10045c26c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = FUN_10045bfa0();
  if (iVar2 != 0) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + -8);
    local_60 = param_3;
    if (*(long *)(param_1 + 0x10) != 0 && plVar3 != (long *)0x0) {
      do {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_488);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}




undefined8 FUN_10045c30c(long param_1,long param_2,int *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  
  if ((*(ushort *)(param_1 + 0x40) >> (ulong)(param_4 & 0x1f) & 1) == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x42);
  if ((bVar2 & 3) == 2) {
    iVar7 = param_3[1];
    iVar9 = *(int *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260);
  }
  else {
    if ((bVar2 & 3) != 1) goto LAB_10045c35c;
    iVar7 = *param_3;
    iVar9 = *(int *)(param_2 + 0x308);
  }
  if (iVar7 != iVar9) {
    return 0;
  }
LAB_10045c35c:
  if (((bVar2 >> 5 & 1) == 0) ||
     (param_3[1] != *(int *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260))) {
    bVar3 = bVar2 >> 2 & 3;
    if (bVar3 == 2) {
      if (((param_3[0xc] != -1) && (*(long *)(param_3 + 2) != 0)) &&
         (lVar5 = *(long *)(*(long *)(param_3 + 2) + 0x18), lVar5 != 0)) {
        while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8) {
          lVar5 = *(long *)(lVar5 + 0x20);
          if (lVar5 == 0) {
            return 0;
          }
        }
        plVar8 = (long *)(lVar5 + 0x28);
        do {
          lVar5 = *plVar8;
          plVar8 = (long *)(lVar5 + 0x350);
        } while (*(int *)(lVar5 + 0x30c) != param_3[0xc]);
        pcVar6 = (char *)**(undefined8 **)(lVar5 + 0x40);
        if (*pcVar6 != '\0') {
          do {
            pcVar6 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
          return 0;
        }
      }
    }
    else {
      if (bVar3 != 1) {
        if (((*(uint *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) ||
           (*(int *)(param_1 + 0x3c) != 0)) {
          plVar8 = (long *)(param_3 + 4);
          if (*(int *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260) != *param_3) {
            plVar8 = (long *)(param_3 + 2);
          }
          if (*plVar8 == 0) {
            return 0;
          }
          uVar1 = *(uint *)(*plVar8 + 0x2f4);
          if ((*(uint *)(param_1 + 0x34) & (uVar1 ^ 0xffffffff)) != 0) {
            return 0;
          }
          if ((*(uint *)(param_1 + 0x38) != 0xffffffff) &&
             ((*(uint *)(param_1 + 0x38) & uVar1) == 0)) {
            return 0;
          }
          if ((*(uint *)(param_1 + 0x3c) & uVar1) != 0) {
            return 0;
          }
        }
        if ((bVar2 >> 4 & 1) != 0) {
          plVar8 = (long *)(param_3 + 4);
          if (*(int *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + 0x260) != *param_3) {
            plVar8 = (long *)(param_3 + 2);
          }
          if (*plVar8 == 0) {
            return 0;
          }
          if (*(int *)(*plVar8 + 0x260) != *(int *)(param_2 + 0x308)) {
            return 0;
          }
        }
        if ((*(code **)(param_1 + 0x28) != (code *)0x0) &&
           (uVar4 = (**(code **)(param_1 + 0x28))(param_2,param_3), (int)uVar4 == 0)) {
          return uVar4;
        }
        return 1;
      }
      if (((param_3[0xd] != -1) && (*(long *)(param_3 + 2) != 0)) &&
         (lVar5 = *(long *)(*(long *)(param_3 + 2) + 0x18), lVar5 != 0)) {
        while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8) {
          lVar5 = *(long *)(lVar5 + 0x20);
          if (lVar5 == 0) {
            return 0;
          }
        }
        FUN_10045c530(lVar5);
      }
    }
  }
  return 0;
}




void FUN_10045c530(long param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = *(long *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  pcVar3 = *(char **)(lVar2 + 0x200);
  if (pcVar3 == (char *)0x0) {
    lVar2 = *(long *)(lVar2 + 0x38);
    if (lVar2 == 0) {
      pcVar3 = "<null>";
    }
    else {
      pcVar3 = *(char **)(lVar2 + 8);
    }
  }
  uVar1 = FUN_1004d2524(pcVar3);
  FUN_100015208(pcVar3,uVar1,0x12345678);
  return;
}




void FUN_10045c588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_488;
  undefined1 auStack_480 [1040];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = FUN_10045c30c();
  if (iVar2 != 0) {
    local_488 = param_2;
    _bzero(auStack_480,0x404);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_60 = 0;
    plVar3 = (long *)(*(long *)(param_1 + 0x10) + -8);
    local_58 = param_3;
    if (*(long *)(param_1 + 0x10) != 0 && plVar3 != (long *)0x0) {
      do {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_488);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}




void FUN_10045c628(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  do {
    puVar1 = (undefined4 *)(param_2 + lVar3);
    puVar2 = (undefined4 *)(param_1 + lVar3);
    *puVar2 = *puVar1;
    puVar2[0x2d] = puVar1[0x2d];
    puVar2[0x5a] = puVar1[0x5a];
    puVar2[0x87] = puVar1[0x87];
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xb4);
  lVar3 = 0x2d0;
  do {
    *(undefined4 *)(param_1 + lVar3) = *(undefined4 *)(param_2 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x310);
  return;
}




void FUN_10045c684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499840;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  return;
}




undefined8 FUN_10045c6a0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if (DAT_101d23a38 == '\0') {
      if ((*(byte *)(param_2 + 0x2fc) & 0x1f) == 0) {
        return 0;
      }
    }
    else {
      lVar1 = *(long *)(param_2 + 0x80) + (ulong)*(uint *)(*(long *)(param_2 + 0x80) + 0x5c) * 0x19
              + (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x264);
      if ((*(byte *)(lVar1 + 0x28) & ((*(byte *)(lVar1 + 0x38) | *(byte *)(lVar1 + 0x30)) ^ 0xff))
          != 0) {
        return 0;
      }
    }
  }
  if ((((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) &&
      (uVar2 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f, (int)uVar2 != 0x1f)) &&
     (*(ushort *)(param_2 + uVar2 * 0x38 + 0x90) - 3 < 2)) {
    return 0;
  }
  return 1;
}




void FUN_10045c734(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_101499870;
  param_1[1] = param_2 + 0x28;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




void FUN_10045c75c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_10045c764(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}




bool FUN_10045c76c(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_2 + 0x2f4);
  if ((((*(uint *)(param_1 + 0x18) & (uVar1 ^ 0xffffffff)) == 0) &&
      (*(uint *)(param_1 + 0x1c) == 0xffffffff || (*(uint *)(param_1 + 0x1c) & uVar1) != 0)) &&
     ((*(uint *)(param_1 + 0x20) & uVar1) == 0)) {
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    lVar4 = FUN_100490cd4(uVar3,param_2,1);
    bVar2 = lVar4 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}




bool FUN_10045c7e4(void)

{
  long lVar1;
  
  lVar1 = FUN_100490cd4();
  return lVar1 != 0;
}




void FUN_10045c800(undefined8 *param_1)

{
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  *param_1 = &PTR_FUN_1014998a0;
  param_1[1] = 0;
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0xfe;
  *(undefined1 *)((long)param_1 + 0x12) = 0xff;
  return;
}




undefined8 FUN_10045c830(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  iVar2 = FUN_10045c6a0();
  if ((iVar2 == 0) ||
     ((uVar4 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f, (int)uVar4 != 0x1f &&
      (*(ushort *)(param_2 + uVar4 * 0x38 + 0x90) - 3 < 2)))) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x11) & 1) != 0) &&
     (lVar1 = *(long *)(param_2 + 0x80) + (ulong)*(uint *)(*(long *)(param_2 + 0x80) + 0x5c) * 0x19
              + (ulong)*(byte *)(param_1 + 0x12),
     (*(byte *)(lVar1 + 0x28) & ((*(byte *)(lVar1 + 0x38) | *(byte *)(lVar1 + 0x30)) ^ 0xff)) != 0))
  {
    return 0;
  }
  uVar3 = FUN_10034ee90();
  uVar3 = FUN_10034ea80(uVar3,param_2);
  return uVar3;
}




undefined8 FUN_10045c8d0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10045c6a0();
  if ((int)uVar1 != 0) {
    if (((*(byte *)(param_2 + 0x2f4) >> 1 & 1) == 0) ||
       (((*(byte *)(param_1 + 0x11) & 1) != 0 &&
        (*(char *)(param_2 + 0x264) != *(char *)(param_1 + 0x12))))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}




uint FUN_10045c924(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_10045c6a0();
  return uVar1 & (*(byte *)(param_2 + 0x2f5) & 0x20) >> 5;
}




undefined8 FUN_10045c950(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1003461dc(param_2);
  if (((iVar1 == *(int *)(param_1 + 0x14)) &&
      ((*(char *)(param_1 + 0x20) == '\0' || ((*(byte *)(param_2 + 0x2f7) >> 2 & 1) != 0)))) &&
     ((*(long *)(param_1 + 0x18) == 0 ||
      ((iVar1 = FUN_1004d2524(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20)), iVar1 != 0 &&
       (iVar1 = _strcmp(*(char **)(param_1 + 0x18),*(char **)(*(long *)(param_2 + 0x38) + 0x20)),
       iVar1 == 0)))))) {
    uVar2 = FUN_10045c6a0(param_1,param_2);
    return uVar2;
  }
  return 0;
}




undefined8 FUN_10045c9d8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_88;
  float fStack_84;
  uint local_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  undefined4 local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  float local_40 [4];
  
  uVar2 = FUN_10045c6a0();
  if ((int)uVar2 != 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 0x11);
    if ((*(byte *)(param_2 + 0x264) != *(byte *)(param_1 + 0x11)) &&
       ((*(byte *)(param_2 + 0x2f5) >> 4 & 1) == 0)) {
      fVar9 = *(float *)(param_2 + 0x250);
      fVar7 = fVar9 - *(float *)(param_1 + 0x14);
      fVar10 = *(float *)(param_2 + 600);
      local_40[1] = 0.0;
      fVar8 = fVar10 - *(float *)(param_1 + 0x1c);
      if (*(float *)(param_1 + 0x20) <
          fVar7 * fVar7 + *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) + fVar8 * fVar8) {
        return 0;
      }
      for (lVar6 = *(long *)(param_2 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
        if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184dda8) {
          uVar5 = (ulong)~*(uint *)(lVar6 + 0x5c) & 1;
          if ((((*(byte *)(lVar6 + uVar5 * 0x19 + uVar3 + 0x30) & 1) != 0) ||
              ((*(byte *)(lVar6 + uVar5 * 0x19 + uVar3 + 0x38) & 1) != 0)) &&
             ((*(byte *)(lVar6 + uVar5 * 0x19 + uVar3 + 0x28) >> 2 & 1) == 0)) break;
          if (*(char *)(param_1 + 0x30) != '\0') {
            local_60 = *(ulong *)(param_1 + 0x14);
            local_58 = *(undefined4 *)(param_1 + 0x1c);
            local_70 = 0;
            local_68 = 0;
            local_40[0] = fVar9;
            local_40[2] = fVar10;
            if ((*(long *)(param_1 + 0x28) != 0) && (iVar1 = FUN_1003e19fc(), iVar1 != 0)) {
              local_50 = *(undefined4 *)(param_1 + 0x14);
              uStack_4c = *(undefined4 *)(param_1 + 0x1c);
              lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 0x60) + 0x28);
              iVar1 = *(int *)(lVar4 + 0x1a8);
              local_78 = fVar9;
              fStack_74 = fVar10;
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_1010cfeb0(&local_50,&local_78,lVar4 + 0x28,iVar1,&local_80),
                 iVar1 != 0)) {
                local_60 = (ulong)local_80;
                local_58 = uStack_7c;
              }
            }
            uVar3 = FUN_10054e09c(1,&local_60,local_40,0,&local_50,&local_70);
            if ((uVar3 & 1) == 0) {
              iVar1 = FUN_1003e19fc(lVar6);
              if (iVar1 == 0) break;
              local_78 = local_40[0];
              fStack_74 = local_40[2];
              local_80 = (uint)local_60;
              uStack_7c = local_58;
              lVar6 = *(long *)(*(long *)(lVar6 + 0x60) + 0x28);
              iVar1 = *(int *)(lVar6 + 0x1a8);
              if ((iVar1 != 0) &&
                 (iVar1 = FUN_1010cfeb0(&local_78,&local_80,lVar6 + 0x28,iVar1,&local_88),
                 iVar1 != 0)) {
                local_40[0] = local_88;
                local_40[1] = 0.0;
                local_40[2] = fStack_84;
              }
              uVar3 = FUN_10054e09c(1,local_40,&local_60,0,&local_50,&local_70);
              if ((uVar3 & 1) == 0) break;
            }
          }
          return 1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 * FUN_10045cc04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101499960;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[7] = 0xbf800000c0000000;
  param_1[6] = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x44) = 0xff;
  param_1[10] = 0xffffffff00000000;
  param_1[9] = 0xffffffff00000000;
  *(undefined2 *)(param_1 + 0xb) = 0x4100;
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xe1 | 0x14;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc | 1;
  lVar1 = FUN_1003e10f0();
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xfe | *(byte *)(lVar1 + 0xe5)
  ;
  return param_1;
}




void FUN_10045ccc4(undefined4 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x30) = param_1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x8000;
  return;
}




void FUN_10045cce8(long param_1,int param_2)

{
  byte bVar1;
  
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x58);
  bVar1 = 8;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xf7 | bVar1;
  return;
}




void FUN_10045cd18(void)

{
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10045cd1c(long *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  uint3 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 uStack_38;
  
  if (*(float *)(param_1 + 6) != 0.0) {
    uVar7 = FUN_10045c6a0();
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if ((*(int *)((long)param_1 + 0x54) == -1) ||
       (*(int *)((long)param_1 + 0x54) != *(int *)(param_2 + 0x260))) {
      uVar11 = (uint)*(byte *)((long)param_1 + 0x44);
      if (*(byte *)((long)param_1 + 0x44) == 0xff) {
        if (param_1[1] == 0) {
          uVar11 = 0xff;
        }
        else {
          uVar11 = (uint)*(byte *)(param_1[1] + 0x264);
        }
      }
      uVar2 = *(ushort *)(param_1 + 0xb);
      if (((((uVar2 & 0x80) == 0) || (*(char *)(param_2 + 0x264) != '\0')) &&
          ((uVar11 == 0xff ||
           ((((*(byte *)((long)param_1 + 0x5a) & 3) == 1 ||
             (((((uVar2 & 0x10) != 0 || (uVar11 != *(byte *)(param_2 + 0x264))) ||
               (((uVar2 & 0x40) != 0 && (param_1[1] == param_2)))) &&
              (((uVar2 & 0x20) != 0 || (uVar11 == *(byte *)(param_2 + 0x264))))))) &&
            (((*(byte *)((long)param_1 + 0x5a) & 7) == 1 ||
             (((uVar2 & 0x40) != 0 || (param_1[1] != param_2)))))))))) &&
         (((uVar2 & 0x1000) == 0 ||
          ((iVar5 = FUN_1003461dc(param_1[1]), iVar5 != -1 ||
           (iVar5 = FUN_1003461dc(param_2), iVar5 == *(int *)(param_1[1] + 0x260))))))) {
        if (((*(ushort *)(param_1 + 0xb) >> 0xc & 1) != 0) &&
           (iVar5 = FUN_1003461dc(param_1[1]), iVar5 != -1)) {
          iVar5 = FUN_1003461dc(param_2);
          iVar6 = FUN_1003461dc(param_1[1]);
          if (iVar5 != iVar6) {
            return 0;
          }
        }
        uVar1 = *(uint *)(param_2 + 0x2f4);
        if (((*(uint *)(param_1 + 9) & (uVar1 ^ 0xffffffff)) == 0) &&
           (((*(uint *)((long)param_1 + 0x4c) == 0xffffffff ||
             ((*(uint *)((long)param_1 + 0x4c) & uVar1) != 0)) &&
            ((*(uint *)(param_1 + 10) & uVar1) == 0)))) {
          uVar2 = *(ushort *)(param_1 + 0xb);
          if (((((uVar2 & 0x100) == 0) || ((*(byte *)(param_2 + 0x2f9) & 1) == 0)) &&
              ((uVar11 == 0xff ||
               ((((uVar2 & 0x200) == 0 ||
                 (lVar9 = *(long *)(param_2 + 0x80) +
                          (ulong)*(uint *)(*(long *)(param_2 + 0x80) + 0x5c) * 0x19 + (ulong)uVar11,
                 (*(byte *)(lVar9 + 0x28) &
                 ((*(byte *)(lVar9 + 0x38) | *(byte *)(lVar9 + 0x30)) ^ 0xff)) == 0)) &&
                (((uVar2 & 0x400) == 0 ||
                 (lVar9 = *(long *)(param_2 + 0x80) +
                          (ulong)*(uint *)(*(long *)(param_2 + 0x80) + 0x5c) * 0x19 + (ulong)uVar11,
                 (*(byte *)(lVar9 + 0x28) &
                 ((*(byte *)(lVar9 + 0x38) | *(byte *)(lVar9 + 0x30)) ^ 0xff)) != 0)))))))) &&
             (((uVar2 & 0x800) == 0 ||
              ((uVar10 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f, (int)uVar10 != 0x1f &&
               (*(short *)(param_2 + uVar10 * 0x38 + 0x90) == 2)))))) {
            if ((uVar2 & 0x4000) == 0) {
              for (lVar9 = *(long *)(param_2 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
                if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == ram0x0001018672a0) {
                  if (*(long *)(lVar9 + 0x18) != 0) {
                    return 0;
                  }
                  break;
                }
              }
            }
            if (param_1[1] != 0 && (*(byte *)((long)param_1 + 0x5a) & 8) != 0) {
              for (lVar9 = *(long *)(param_1[1] + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)
                  ) {
                if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == ram0x0001018672a0) {
                  bVar4 = *(byte *)(lVar9 + 0x818) >> 3 & 3;
                  goto LAB_10045cfdc;
                }
              }
              bVar4 = 0;
LAB_10045cfdc:
              for (lVar9 = *(long *)(param_2 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
                if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == ram0x0001018672a0) {
                  if (bVar4 == (*(byte *)(lVar9 + 0x818) >> 3 & 3)) goto LAB_10045d054;
                  break;
                }
              }
              local_40 = *(undefined4 *)(param_2 + 0x250);
              uStack_38 = *(undefined4 *)(param_2 + 600);
              local_3c = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
              local_50 = 0x461c3c003e800000;
              local_48 = 0x3e800000;
              uVar7 = FUN_10054e044(bVar4,&local_40,0,&local_50);
              if ((int)uVar7 == 0) {
                return uVar7;
              }
            }
LAB_10045d054:
            if ((char *)param_1[4] != (char *)0x0) {
              iVar5 = _strcmp((char *)param_1[4],*(char **)(*(long *)(param_2 + 0x38) + 0x20));
              if (((*(ushort *)(param_1 + 0xb) & 3) == 0) && (iVar5 != 0)) {
                return 0;
              }
              if (((*(ushort *)(param_1 + 0xb) & 3) == 1) && (iVar5 == 0)) {
                return 0;
              }
            }
            if ((char *)param_1[5] == (char *)0x0) {
              uVar11 = (uint)*(uint3 *)(param_1 + 0xb);
            }
            else {
              pcVar8 = *(char **)(param_2 + 0x2a8);
              if (pcVar8 == (char *)0x0) {
                return 0;
              }
              if (*pcVar8 == '\0') {
                return 0;
              }
              iVar5 = _strcmp((char *)param_1[5],pcVar8);
              uVar3 = *(uint3 *)(param_1 + 0xb);
              uVar11 = (uint)*(uint3 *)(param_1 + 0xb);
              if (((uVar3 & 0xc) == 0) && (iVar5 != 0)) {
                return 0;
              }
              if (((uVar3 & 0xc) == 4) && (iVar5 == 0)) {
                return 0;
              }
            }
            if ((uVar11 >> 0x14 & 1) == 0) {
              fVar12 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
            }
            else {
              fVar12 = *(float *)(param_1 + 3);
            }
            fVar14 = *(float *)(param_2 + 0x250);
            fVar13 = *(float *)(param_2 + 600);
            fVar15 = *(float *)(param_1 + 6);
            if (0.0 < fVar15) {
              if ((uVar11 >> 0xd & 1) == 0) {
                fVar16 = fVar14 - *(float *)((long)param_1 + 0x14);
                fVar17 = fVar13 - *(float *)((long)param_1 + 0x1c);
                if (fVar15 < fVar16 * fVar16 +
                             (fVar12 - *(float *)(param_1 + 3)) * (fVar12 - *(float *)(param_1 + 3))
                             + fVar17 * fVar17) {
                  return 0;
                }
              }
              else {
                fVar16 = *(float *)(*(long *)(param_2 + 0x38) + 100);
                fVar17 = fVar14 - *(float *)((long)param_1 + 0x14);
                fVar18 = fVar13 - *(float *)((long)param_1 + 0x1c);
                fVar15 = ((*(float *)(param_2 + 0x2e8) + fVar16) *
                         *(float *)(*(long *)(param_2 + 0x38) + 0x68) * *(float *)(param_1 + 8)) /
                         fVar16 + SQRT(fVar15);
                if (fVar15 * fVar15 <
                    fVar17 * fVar17 +
                    (fVar12 - *(float *)(param_1 + 3)) * (fVar12 - *(float *)(param_1 + 3)) +
                    fVar18 * fVar18) {
                  return 0;
                }
              }
            }
            fVar15 = *(float *)((long)param_1 + 0x34);
            if (fVar15 <= 0.0) {
LAB_10045d214:
              uVar7 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
              return uVar7;
            }
            if ((uVar11 >> 0xd & 1) == 0) {
              fVar14 = fVar14 - *(float *)((long)param_1 + 0x14);
              fVar13 = fVar13 - *(float *)((long)param_1 + 0x1c);
              if (fVar15 < fVar14 * fVar14 +
                           (fVar12 - *(float *)(param_1 + 3)) * (fVar12 - *(float *)(param_1 + 3)) +
                           fVar13 * fVar13) goto LAB_10045d214;
            }
            else {
              fVar16 = *(float *)(*(long *)(param_2 + 0x38) + 100);
              fVar14 = fVar14 - *(float *)((long)param_1 + 0x14);
              fVar13 = fVar13 - *(float *)((long)param_1 + 0x1c);
              fVar15 = ((*(float *)(param_2 + 0x2e8) + fVar16) *
                       *(float *)(*(long *)(param_2 + 0x38) + 0x68) * *(float *)(param_1 + 8)) /
                       fVar16 + SQRT(fVar15);
              if (fVar15 * fVar15 <
                  fVar14 * fVar14 +
                  (fVar12 - *(float *)(param_1 + 3)) * (fVar12 - *(float *)(param_1 + 3)) +
                  fVar13 * fVar13) goto LAB_10045d214;
            }
          }
        }
      }
    }
  }
  return 0;
}




undefined8 FUN_10045d22c(long param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_50;
  float fStack_4c;
  float local_48;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 != 0) && (-1.0 <= *(float *)(param_1 + 0x38))) {
    if (*(short *)(param_1 + 0x58) < 0) {
      pfVar1 = (float *)(param_1 + 0x14);
      fVar8 = *(float *)(param_1 + 0x18);
      pfVar3 = (float *)(param_1 + 0x1c);
    }
    else {
      pfVar1 = (float *)(lVar2 + 0x250);
      pfVar3 = (float *)(lVar2 + 600);
      fVar8 = *(float *)(lVar2 + 0x2ec) + *(float *)(lVar2 + 0x254);
    }
    fVar9 = *pfVar3;
    fVar10 = *pfVar1;
    FUN_10045d3b0(param_1,&local_50);
    fVar4 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
    fVar5 = fVar10 - *(float *)(param_2 + 0x250);
    fVar6 = fVar8 - fVar4;
    fVar7 = fVar9 - *(float *)(param_2 + 600);
    if (0.1 <= fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6) {
      fVar10 = *(float *)(param_2 + 0x250) - fVar10;
      fVar4 = fVar4 - fVar8;
      fVar9 = *(float *)(param_2 + 600) - fVar9;
      fVar5 = SQRT(fVar10 * fVar10 + fVar9 * fVar9 + fVar4 * fVar4);
      fVar8 = (local_50 * fVar10 + fVar4 * fStack_4c + fVar9 * local_48) / fVar5;
      if (fVar8 < *(float *)(param_1 + 0x38)) {
        if ((*(ushort *)(param_1 + 0x58) >> 0xd & 1) != 0) {
          fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
          if (fVar8 <= -1.0) {
            fVar8 = -1.0;
          }
          fVar4 = *(float *)(*(long *)(param_2 + 0x38) + 100);
          fVar9 = *(float *)(*(long *)(param_2 + 0x38) + 0x68);
          fVar6 = *(float *)(param_2 + 0x2e8);
          fVar7 = *(float *)(param_1 + 0x40);
          fVar10 = (float)_acosf();
          fVar8 = (float)_acosf(fVar8);
          fVar8 = (float)_sinf(fVar8 - fVar10);
          if (fVar8 * fVar5 <= ((fVar6 + fVar4) * fVar9 * fVar7) / fVar4) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 1;
}




void FUN_10045d3b0(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if (*(float *)(param_3 + 0x3c) < 0.0) {
    FUN_1003a31c8(*(undefined8 *)(param_3 + 8),param_4,&DAT_1013cd824);
    return;
  }
  uVar1 = ___sincosf_stret();
  *param_4 = param_2;
  param_4[1] = 0;
  param_4[2] = uVar1;
  return;
}




bool FUN_10045d404(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
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
  
  if ((*(byte *)(param_1 + 0x5a) & 0x10) == 0) {
    fVar2 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x18);
  }
  fVar3 = *(float *)(param_2 + 0x250);
  fVar1 = 0.0;
  if ((*(ushort *)(param_1 + 0x58) & 0x2000) != 0) {
    fVar1 = *(float *)(*(long *)(param_2 + 0x38) + 100);
    fVar1 = ((*(float *)(param_2 + 0x2e8) + fVar1) *
            *(float *)(*(long *)(param_2 + 0x38) + 0x68) * *(float *)(param_1 + 0x40)) / fVar1;
  }
  fVar8 = *(float *)(param_1 + 0x70);
  fVar4 = *(float *)(param_1 + 0x5c);
  fVar5 = *(float *)(param_1 + 0x60);
  fVar6 = *(float *)(param_1 + 100);
  fVar10 = *(float *)(param_1 + 0x68) - fVar4;
  fVar9 = *(float *)(param_1 + 0x6c) - fVar5;
  fVar7 = fVar8 - fVar6;
  fVar14 = fVar3 - fVar4;
  fVar12 = fVar2 - fVar5;
  fVar13 = *(float *)(param_2 + 600) - fVar6;
  fVar11 = fVar14 * fVar10 + fVar9 * fVar12 + fVar7 * fVar13;
  if (fVar11 <= 0.0) {
    fVar2 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
  }
  else {
    fVar12 = fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7;
    if (fVar12 <= fVar11) {
      fVar3 = fVar3 - *(float *)(param_1 + 0x68);
      fVar2 = fVar2 - *(float *)(param_1 + 0x6c);
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
    }
    else {
      fVar11 = fVar11 / fVar12;
      fVar3 = fVar3 - (fVar4 + fVar10 * fVar11);
      fVar2 = fVar2 - (fVar5 + fVar9 * fVar11);
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
      fVar8 = fVar6 + fVar7 * fVar11;
    }
    fVar8 = *(float *)(param_2 + 600) - fVar8;
    fVar2 = fVar2 + fVar8 * fVar8;
  }
  return fVar2 <= fVar1 * fVar1 + *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74);
}




void FUN_10045d50c(void)

{
  return;
}




void FUN_10045d510(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 local_40;
  float local_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  
  iVar1 = FUN_10045cd1c();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uStack_28 = *(undefined4 *)(lVar2 + 600);
    local_2c = *(float *)(lVar2 + 0x2ec) + *(float *)(lVar2 + 0x254);
    local_30 = *(undefined4 *)(lVar2 + 0x250);
    uStack_38 = *(undefined4 *)(param_2 + 600);
    local_3c = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
    local_40 = *(undefined4 *)(param_2 + 0x250);
    FUN_10054e09c(1,&local_30,&local_40,0,0,0);
  }
  return;
}




ulong FUN_10045d598(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = FUN_10045cd1c();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  plVar6 = (long *)(param_2 + 0x18);
  do {
    lVar5 = *plVar6;
    plVar6 = (long *)(lVar5 + 0x20);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
  lVar3 = *(long *)(lVar5 + 0x28);
  lVar5 = lVar3;
  if (*(int *)(param_1 + 0x60) == -1) {
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
      if ((*(int *)(lVar5 + 0x314) == *(int *)(param_1 + 0x5c)) && (*(int *)(lVar5 + 0x310) == 0))
      goto LAB_10045d660;
    }
  }
  else {
    for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
      if (((*(int *)(lVar5 + 0x314) == *(int *)(param_1 + 0x5c)) && (*(int *)(lVar5 + 0x310) == 0))
         && (*(int *)(lVar5 + 0x308) == *(int *)(param_1 + 0x60))) goto LAB_10045d660;
    }
  }
  uVar4 = 0;
  goto LAB_10045d644;
LAB_10045d660:
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar4 = 1;
  }
  else {
    do {
      if (*(int *)(lVar3 + 0x30c) == *(int *)(lVar5 + 0x30c)) break;
      lVar3 = *(long *)(lVar3 + 0x350);
    } while (lVar3 != 0);
    iVar1 = FUN_100432d40();
    uVar4 = (uint)(iVar1 == *(int *)(param_1 + 100));
  }
LAB_10045d644:
  return (ulong)(uVar4 ^ *(int *)(param_1 + 0x68) == 1);
}




void FUN_10045d69c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1[1] != 0) {
    param_3 = FUN_10045d69c(param_1[1],param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010045d6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_2,param_3);
  return;
}




int FUN_10045d6e0(long param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  
  FUN_10045d720((int)param_1,param_2,0,param_3 + -1);
  fVar1 = (float)NEON_fminnm((float)*(int *)(param_1 + 0x1c),(float)param_3);
  return (int)fVar1;
}




void FUN_10045d720(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  
  do {
    iVar1 = param_3 + param_4;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar4 = param_3;
    iVar2 = param_4;
    if (param_3 <= param_4) {
      uVar5 = *(undefined8 *)(param_2 + (long)(iVar1 >> 1) * 8);
      do {
        puVar8 = (undefined8 *)(param_2 + (long)iVar4 * 8);
        do {
          iVar9 = iVar4;
          puVar3 = puVar8;
          uVar6 = *puVar3;
          iVar1 = FUN_10045d848(param_1,uVar6,uVar5);
          puVar8 = puVar3 + 1;
          iVar4 = iVar9 + 1;
        } while (iVar1 == -1);
        puVar8 = (undefined8 *)(param_2 + 8 + (long)iVar2 * 8);
        do {
          iVar10 = iVar2;
          puVar8 = puVar8 + -1;
          uVar7 = *puVar8;
          iVar1 = FUN_10045d848(param_1,uVar7,uVar5);
          iVar2 = iVar10 + -1;
        } while (iVar1 == 1);
        iVar4 = iVar9;
        iVar2 = iVar10;
        if (iVar9 <= iVar10) {
          *puVar3 = uVar7;
          *puVar8 = uVar6;
          iVar4 = iVar9 + 1;
          iVar2 = iVar10 + -1;
        }
      } while (iVar4 <= iVar2);
    }
    if (param_3 < iVar2) {
      FUN_10045d720(param_1,param_2);
    }
    param_3 = iVar4;
  } while (iVar4 < param_4);
  return;
}




uint FUN_10045d848(long param_1,long param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    if ((*(byte *)(param_2 + 0x2f4) & 1) == 0) {
      if ((*(uint *)(param_3 + 0x2f4) & 1) != 0) {
        return 1;
      }
    }
    else if ((*(uint *)(param_3 + 0x2f4) & 1) == 0) {
      return 0xffffffff;
    }
  }
  fVar2 = *(float *)(param_2 + 0x250) - *(float *)(param_1 + 0x10);
  fVar3 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254)) - *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_2 + 600) - *(float *)(param_1 + 0x18);
  fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar4 = *(float *)(param_3 + 0x250) - *(float *)(param_1 + 0x10);
  fVar5 = (*(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254)) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_3 + 600) - *(float *)(param_1 + 0x18);
  fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
  uVar1 = (uint)(fVar3 < fVar2);
  if (fVar2 < fVar3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




undefined8 * FUN_10045d8e4(undefined8 *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10045e4d0_101499a20;
  param_1[5] = &PTR_FUN_101499a50;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  puVar2 = (ushort *)(param_1 + 0xd);
  *(undefined2 *)((long)param_1 + 0x74) = 0;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x3a) = DAT_101dc0b88;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xbf800000;
  *(uint *)(param_1 + 0x47) = *(uint *)(param_1 + 0x47) & 0xffff03c0 | 1;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = FUN_10045db6c;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 2;
  param_1[0x1d] = FUN_10045dcc0;
  param_1[0x1e] = 0;
  param_1[0x1f] = FUN_10045dd54;
  param_1[0x20] = 0;
  param_1[0x21] = FUN_10045dec8;
  param_1[0x22] = 0;
  *(undefined2 *)((long)param_1 + 0xe2) = 0;
  *(undefined4 *)(param_1 + 0x23) = 3;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 4;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = FUN_10045e0a8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 5;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = FUN_10045e1e8;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *puVar2 = *puVar2 & 0x8000 | 0x1bff;
  FUN_10045e330(puVar2,0,1);
  FUN_10045e330(puVar2,1,2);
  FUN_10045e330(puVar2,1,5);
  FUN_10045e330(puVar2,1,3);
  FUN_10045e330(puVar2,3,5);
  FUN_10045e330(puVar2,3,1);
  FUN_10045e330(puVar2,2,5);
  FUN_10045e330(puVar2,2,1);
  FUN_10045e330(puVar2,2,4);
  FUN_10045e330(puVar2,4,5);
  FUN_10045e330(puVar2,4,1);
  FUN_10045e330(puVar2,4,3);
  FUN_10045e330(puVar2,5,1);
  FUN_10045e330(puVar2,5,3);
  FUN_10045e3b4(puVar2,0,0,0);
  return param_1;
}




void FUN_10045db6c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_38 [2];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1010a17e4();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  uVar1 = DAT_101dc0b88;
  while (DAT_101dc0b88 = uVar1, plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
    uVar1 = DAT_101dc0b88;
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xffff3fff;
  puVar2 = PTR_s_onAbilityEnterReadyName_10185d728;
  lVar4 = *(long *)(param_1 + 0x38);
  lVar5 = param_1;
  if (*(char *)(lVar4 + 0x8b) != '\0') {
    do {
      lVar5 = *(long *)(lVar5 + 0x10);
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
    for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184daa8) {
        pcVar3 = *(char **)(param_1 + 0x200);
        if (pcVar3 == (char *)0x0) {
          if (lVar4 == 0) {
            pcVar3 = "<null>";
          }
          else {
            pcVar3 = *(char **)(lVar4 + 8);
          }
        }
        FUN_1003a4e5c(local_38,pcVar3);
        for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
          FUN_10046a418(lVar5,puVar2,local_38[0]);
        }
        return;
      }
    }
  }
  return;
}




void FUN_10045dcc0(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  
  if (((*(uint *)(param_1 + 0x238) & 0x38) == 8) &&
     (plVar1 = *(long **)(param_1 + 0x1c8), plVar1 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(lVar2 + 0x250);
        fVar3 = *(float *)(lVar2 + 0x254);
        *(float *)(param_1 + 0x1dc) = fVar3;
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar2 + 600);
        *(float *)(param_1 + 0x1dc) = *(float *)(lVar2 + 0x2ec) + fVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  FUN_10045feac(param_1);
  return;
}




void FUN_10045dd54(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x60) != '\0') {
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x10000;
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x8a) != '\0') {
    for (lVar6 = *(long *)(param_1 + 0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184dd68) {
        if (lVar6 != 0) {
          uVar7 = 0xffff0000;
          lVar2 = lVar6;
          goto LAB_10045ddc4;
        }
        break;
      }
    }
  }
LAB_10045de60:
  *(undefined4 *)(param_1 + 0x23c) = 0;
  FUN_1004600fc(param_1);
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    do {
      (**(code **)(*plVar5 + 0x10))(plVar5,param_1);
      plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
    } while (plVar5 != (long *)0x0);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  FUN_10045feac(param_1);
  return;
LAB_10045ddc4:
  do {
    lVar3 = lVar2;
    if ((lVar3 != lVar6) &&
       (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar3 + 8),0x6d6a08d2), lVar2 != 0)) {
      (**(code **)(lVar2 + 8))(lVar3);
    }
    if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
      uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
      goto LAB_10045ddc4;
    }
    if ((uVar7 & 0xffff) == 0) goto LAB_10045de60;
    lVar2 = *(long *)(lVar3 + 0x20);
  } while (*(long *)(lVar3 + 0x20) != 0);
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((lVar3 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) goto LAB_10045de60;
  uVar7 = uVar1 | uVar7 & 0xffff0000;
  while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
    if ((uVar7 - 1 & 0xffff) == 0) goto LAB_10045de60;
    lVar3 = *(long *)(lVar3 + 0x10);
    uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
    if (lVar3 == 0) goto LAB_10045de60;
  }
  goto LAB_10045ddc4;
}




void FUN_10045dec8(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if ((*(char *)(*(long *)(param_1 + 0x38) + 0x8a) != '\0') &&
     ((uVar8 = *(ushort *)(param_1 + 0x68) >> 5 & 0x1f,
      (~*(ushort *)(param_1 + 0x68) & 0x1f) == 0 || uVar8 == 0x1f ||
      (*(short *)(param_1 + (ulong)uVar8 * 0x38 + 0x70) != 4)))) {
    for (lVar7 = *(long *)(param_1 + 0x10); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_10184dd68) {
        if (lVar7 != 0) {
          uVar8 = 0xffff0000;
          lVar2 = lVar7;
          goto LAB_10045df40;
        }
        break;
      }
    }
  }
LAB_10045dff0:
  plVar3 = *(long **)(param_1 + 0x208);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x210) == (int)plVar3[1]) {
      lVar7 = (**(code **)(*plVar3 + 0x10))();
      if (lVar7 == 0) goto LAB_10045e084;
      plVar3 = *(long **)(param_1 + 0x208);
      uVar4 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_1 + 0x210) == (int)plVar3[1]) {
          uVar4 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          uVar4 = 0;
          *(undefined8 *)(param_1 + 0x208) = 0;
          *(undefined4 *)(param_1 + 0x210) = DAT_101dc0b88;
        }
      }
      FUN_1010a01dc(uVar4);
      uVar5 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x208) = 0;
      uVar5 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x210) = uVar5;
  }
LAB_10045e084:
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1010a17e4();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
LAB_10045df40:
  do {
    lVar6 = lVar2;
    if ((lVar6 != lVar7) &&
       (lVar2 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x76660925), lVar2 != 0)) {
      (**(code **)(lVar2 + 8))(lVar6);
    }
    if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar2 = *(long *)(lVar6 + 0x18), lVar2 != 0)) {
      uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
      goto LAB_10045df40;
    }
    if ((uVar8 & 0xffff) == 0) goto LAB_10045dff0;
    lVar2 = *(long *)(lVar6 + 0x20);
  } while (*(long *)(lVar6 + 0x20) != 0);
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((lVar6 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) goto LAB_10045dff0;
  uVar8 = uVar1 | uVar8 & 0xffff0000;
  while (lVar2 = *(long *)(lVar6 + 0x20), lVar2 == 0) {
    if ((uVar8 - 1 & 0xffff) == 0) goto LAB_10045dff0;
    lVar6 = *(long *)(lVar6 + 0x10);
    uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
    if (lVar6 == 0) goto LAB_10045dff0;
  }
  goto LAB_10045df40;
}




void FUN_10045e0a8(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined4 local_48 [2];
  
  FUN_10045fdfc();
  lVar3 = param_1;
  if ((*(char *)(*(long *)(param_1 + 0x38) + 0x8a) == '\0') ||
     ((*(byte *)(param_1 + 0x239) >> 6 & 1) != 0)) {
    FUN_10045fef8(param_1);
  }
  else if (*(long *)(param_1 + 0x40) == 0) {
    FUN_10045e3b4(param_1 + 0x68,1,0,0);
  }
  else {
    FUN_100460330(*(long *)(param_1 + 0x40),param_1);
  }
  do {
    puVar1 = PTR_s_onAbilityEnterCancelledName_10185d5b8;
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
  lVar3 = *(long *)(lVar3 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  pcVar2 = *(char **)(param_1 + 0x200);
  if (pcVar2 == (char *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      pcVar2 = "<null>";
    }
    else {
      pcVar2 = *(char **)(*(long *)(param_1 + 0x38) + 8);
    }
  }
  FUN_1003a4e5c(local_48,pcVar2);
  lVar4 = *(long *)(lVar3 + 0x28);
  if (lVar4 == 0) {
    return;
  }
  do {
    FUN_10046a418(lVar4,puVar1,local_48[0]);
    lVar4 = *(long *)(lVar4 + 0x350);
  } while (lVar4 != 0);
  for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
    FUN_10046a038(lVar3,param_1);
  }
  return;
}




void FUN_10045e1e8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_38 [2];
  
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_1010a17e4();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  uVar1 = DAT_101dc0b88;
  while (DAT_101dc0b88 = uVar1, plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
    uVar1 = DAT_101dc0b88;
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = uVar1;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  puVar2 = PTR_s_onAbilityEnterCooldownName_10185d730;
  lVar4 = *(long *)(param_1 + 0x38);
  lVar5 = param_1;
  if (*(char *)(lVar4 + 0x8b) != '\0') {
    do {
      lVar5 = *(long *)(lVar5 + 0x10);
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
    for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184daa8) {
        pcVar3 = *(char **)(param_1 + 0x200);
        if (pcVar3 == (char *)0x0) {
          if (lVar4 == 0) {
            pcVar3 = "<null>";
          }
          else {
            pcVar3 = *(char **)(lVar4 + 8);
          }
        }
        FUN_1003a4e5c(local_38,pcVar3);
        for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
          FUN_10046a418(lVar5,puVar2,local_38[0]);
        }
        return;
      }
    }
  }
  return;
}




void FUN_10045e330(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_10045e364;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_10045e364:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_10045e3b4(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_10045e3f8;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_10045e3f8:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010045e45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10045e4d0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10045e4d0_101499a20;
  param_1[5] = &PTR_FUN_101499a50;
  FUN_1003c1770(param_1 + 9);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_10045e4d0(void)

{
  FUN_10045e4d0();
  return;
}




void FUN_10045e518(long param_1)

{
  FUN_10045e4d0(param_1 + -0x28);
  return;
}




void FUN_10045e520(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10045e4d0();
  operator_delete(pvVar1);
  return;
}




void FUN_10045e534(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10045e4d0(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_10045e54c(long param_1)

{
  long lVar1;
  
  DAT_101867310 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867310 + 1;
  lVar1 = param_1 + (ulong)DAT_101867310 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_10045d8e4;
  *(code **)(lVar1 + 0xb8) = FUN_10049dea0;
  *(uint *)(lVar1 + 0xa4) = DAT_101867310;
  *(undefined4 *)(lVar1 + 0xa8) = 0x240;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x4b0;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,3,FUN_10045e640,0);
  FUN_1010a0990(param_1,0x457106fa,FUN_10045e648,0);
  FUN_1010a0990(param_1,0x366b0603,FUN_10045e674,0);
  FUN_1010a0990(param_1,0x444d06f4,thunk_FUN_1004604c4,0);
  FUN_1010a0990(param_1,0x1b0a0423,FUN_10045e6a4,0);
  return;
}




void FUN_10045e640(long param_1)

{
  FUN_10045e6d4(param_1 + 0x68);
  return;
}




void FUN_10045e648(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_10045ee2c(param_1,in_stack_00000000);
  return;
}




void FUN_10045e674(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100460454(param_1,in_stack_00000000);
  return;
}




void FUN_10045e6a4(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_100460030(param_1,in_stack_00000000,*(undefined8 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_10045e6d4(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0xac) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010045e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10045e718(long param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 local_64;
  uint local_60 [2];
  uint local_58 [2];
  
  uVar13 = 0x811c9dc5;
  *(long *)(param_1 + 0x38) = param_2;
  *(long *)(param_1 + 0x40) = param_3;
  uVar14 = 2;
  if (param_3 != 0) {
    uVar14 = *(byte *)(param_2 + 0x8a) ^ 1;
  }
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfffffff8 | uVar14;
  FUN_10045eb60(param_1,*(undefined4 *)(param_2 + 0x78));
  *(undefined8 *)(param_1 + 0x200) = param_4;
  iVar5 = FUN_10045ec24(param_1);
  if (iVar5 != 0) {
    lVar8 = *(long *)(param_1 + 0x38);
    pcVar12 = *(char **)(lVar8 + 0x30);
    if (pcVar12 == (char *)0x0) {
      uVar14 = 0;
    }
    else {
      cVar9 = *pcVar12;
      uVar14 = 0x811c9dc5;
      if (cVar9 != '\0') {
        uVar14 = 0x811c9dc5;
        do {
          pcVar12 = pcVar12 + 1;
          uVar14 = (uVar14 ^ (int)cVar9) * 0x1000193;
          cVar9 = *pcVar12;
        } while (cVar9 != '\0');
      }
    }
    if ((uVar14 == 0x811c9dc5 || uVar14 == 0) &&
       (uVar14 = DAT_101d2c66c, *(char *)(lVar8 + 0x8a) == '\0')) {
      pcVar12 = *(char **)(param_1 + 0x200);
      if ((pcVar12 == (char *)0x0) && (pcVar12 = *(char **)(lVar8 + 8), pcVar12 == (char *)0x0)) {
        uVar14 = 0;
      }
      else {
        cVar9 = *pcVar12;
        uVar14 = 0x811c9dc5;
        if (cVar9 != '\0') {
          uVar14 = 0x811c9dc5;
          do {
            pcVar12 = pcVar12 + 1;
            uVar14 = (uVar14 ^ (int)cVar9) * 0x1000193;
            cVar9 = *pcVar12;
          } while (cVar9 != '\0');
        }
      }
    }
    plVar11 = (long *)(param_1 + 0x10);
    do {
      lVar8 = *plVar11;
      plVar11 = (long *)(lVar8 + 0x10);
    } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68);
    local_58[0] = uVar14;
    lVar8 = FUN_1003dc44c(lVar8,local_58);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x10);
      while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68))) {
        lVar8 = *(long *)(lVar8 + 0x10);
      }
      lVar8 = FUN_1010a0298(lVar8,DAT_10184daf8);
      bVar1 = *(byte *)(param_1 + 0x238);
      lVar10 = *(long *)(param_1 + 0x38);
      cVar9 = *(char *)(lVar10 + 0x8d);
      cVar2 = *(char *)(lVar10 + 0x44);
      cVar3 = *(char *)(lVar10 + 0x45);
      *(uint *)(lVar8 + 0x50) = uVar14;
      *(byte *)(lVar8 + 0x6b) =
           bVar1 & 3 | cVar9 << 2 | cVar2 << 3 | cVar3 << 4 | *(byte *)(lVar8 + 0x6b) & 0xe0;
      if ((*(byte *)(param_1 + 0x239) & 0x1c) != 0) {
        uVar15 = FUN_10045ed58(param_1);
        *(undefined4 *)(lVar8 + 0x54) = uVar15;
        bVar4 = FUN_10045edc4(param_1);
        bVar1 = *(byte *)(lVar8 + 0x68);
        *(byte *)(lVar8 + 0x68) = bVar4;
        FUN_10046c5ac(lVar8,(uint)bVar4 - (uint)bVar1);
      }
    }
    *(long *)(param_1 + 0x1e8) = lVar8;
    *(long *)(param_1 + 0x1f8) = lVar8;
    if (*(char *)(lVar8 + 0x6a) == '\0') {
      FUN_10045ee2c(param_1,lVar8);
    }
  }
  pcVar12 = *(char **)(*(long *)(param_1 + 0x38) + 0x38);
  if (pcVar12 == (char *)0x0) {
    uVar13 = 0;
  }
  else {
    cVar9 = *pcVar12;
    while (cVar9 != '\0') {
      pcVar12 = pcVar12 + 1;
      uVar13 = (uVar13 ^ (int)cVar9) * 0x1000193;
      cVar9 = *pcVar12;
    }
  }
  local_60[0] = uVar13;
  if (uVar13 != 0x811c9dc5 && uVar13 != 0) {
    plVar11 = (long *)(param_1 + 0x10);
    do {
      lVar8 = *plVar11;
      plVar11 = (long *)(lVar8 + 0x10);
    } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68);
    lVar8 = FUN_1003dc44c(lVar8,local_60);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x10);
      while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68))) {
        lVar8 = *(long *)(lVar8 + 0x10);
      }
      lVar8 = FUN_1010a0298(lVar8,DAT_10184daf8);
      lVar10 = *(long *)(param_1 + 0x38);
      *(byte *)(lVar8 + 0x6b) =
           *(byte *)(param_1 + 0x238) & 3 | *(char *)(lVar10 + 0x8d) << 2 |
           *(char *)(lVar10 + 0x46) << 3 | *(char *)(lVar10 + 0x47) << 4 |
           *(byte *)(lVar8 + 0x6b) & 0xe0;
      *(uint *)(lVar8 + 0x50) = uVar13;
      *(undefined4 *)(lVar8 + 0x54) = 0;
      bVar1 = *(byte *)(lVar8 + 0x68);
      *(undefined1 *)(lVar8 + 0x68) = 1;
      FUN_10046c5ac(lVar8,1 - (uint)bVar1);
      if (((*(byte *)(param_1 + 0x239) & 0x1c) != 0) &&
         (iVar5 = FUN_10045eed0(param_1,"Cooldown2",&local_64), iVar5 != 0)) {
        uVar15 = FUN_10045ef3c(param_1,local_64,0);
        *(undefined4 *)(lVar8 + 0x54) = uVar15;
      }
    }
    *(long *)(param_1 + 0x1f0) = lVar8;
    if (*(char *)(lVar8 + 0x6a) == '\0') {
      FUN_10045ee2c(param_1,lVar8);
    }
  }
  pcVar12 = *(char **)(param_1 + 0x200);
  if (pcVar12 == (char *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      pcVar12 = "<null>";
    }
    else {
      pcVar12 = *(char **)(*(long *)(param_1 + 0x38) + 8);
    }
  }
  pcVar6 = (code *)FUN_10034f47c(pcVar12);
  if (pcVar6 == (code *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*pcVar6)();
  }
  FUN_1003c17c8(param_1 + 0x48,uVar7);
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x94) != '\0') {
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x2000;
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x8a) != '\0') {
    *(undefined1 *)(param_1 + 0x234) = 1;
  }
  lVar8 = FUN_10045efc4(param_1,"Range");
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x84);
  }
  else {
    *(long *)(param_1 + 0x220) = lVar8;
  }
  return;
}




void FUN_10045eb60(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_24;
  
  *(uint *)(param_1 + 0x238) =
       *(uint *)(param_1 + 0x238) & 0xffffe000 |
       *(uint *)(param_1 + 0x238) & 0x3ff | (param_2 & 7) << 10;
  if ((param_2 & 7) != 0) {
    lVar4 = *(long *)(param_1 + 0x1f8);
    if (lVar4 != 0) {
      uVar5 = FUN_10045ed58(param_1);
      *(undefined4 *)(lVar4 + 0x54) = uVar5;
      lVar4 = *(long *)(param_1 + 0x1f8);
      bVar2 = FUN_10045edc4(param_1);
      bVar1 = *(byte *)(lVar4 + 0x68);
      *(byte *)(lVar4 + 0x68) = bVar2;
      FUN_10046c5ac(lVar4,(uint)bVar2 - (uint)bVar1);
    }
    if ((*(long *)(param_1 + 0x1f0) != 0) &&
       (iVar3 = FUN_10045eed0(param_1,"Cooldown2",&local_24), iVar3 != 0)) {
      lVar4 = *(long *)(param_1 + 0x1f0);
      uVar5 = FUN_10045ef3c(param_1,local_24,0);
      *(undefined4 *)(lVar4 + 0x54) = uVar5;
    }
    FUN_10045f4f4(param_1);
    FUN_10045f018(param_1);
    return;
  }
  return;
}




undefined8 FUN_10045ec24(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int local_24;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (((*(char *)(lVar3 + 0x8a) != '\0') || (0.0 < *(float *)(lVar3 + 0x40))) ||
     (0 < *(int *)(lVar3 + 0x4c))) {
LAB_10045ec58:
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_10045eed0(param_1,"Cooldown",&local_24);
    if (iVar1 != 0) {
      plVar4 = *(long **)(*(long *)(param_1 + 0x38) + 0xb0);
      lVar3 = *plVar4;
      if (lVar3 != 0 && local_24 != 0) {
        do {
          local_24 = local_24 + -1;
          plVar4 = plVar4 + 1;
          lVar3 = *plVar4;
        } while (lVar3 != 0 && local_24 != 0);
      }
      if (((0.0 < *(float *)(lVar3 + 8)) || (0.0 < *(float *)(lVar3 + 0xc))) ||
         ((0.0 < *(float *)(lVar3 + 0x20) || (0.0 < *(float *)(lVar3 + 0x10))))) goto LAB_10045ec58;
    }
    uVar2 = FUN_10045eed0(param_1,"Charges",&local_24);
  }
  return uVar2;
}




void FUN_10045ed04(long param_1,undefined4 *param_2,byte param_3,int param_4,int param_5,int param_6
                  )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  bVar1 = 4;
  if (param_4 == 0) {
    bVar1 = 0;
  }
  bVar2 = 8;
  if (param_5 == 0) {
    bVar2 = 0;
  }
  bVar3 = 0x10;
  if (param_6 == 0) {
    bVar3 = 0;
  }
  *(byte *)(param_1 + 0x6b) = bVar1 | param_3 & 3 | bVar2 | bVar3 | *(byte *)(param_1 + 0x6b) & 0xe0
  ;
  return;
}




void FUN_10045ed50(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x54) = param_1;
  return;
}




undefined1  [16] FUN_10045ed58(long param_1)

{
  int iVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined4 local_24;
  undefined1 auVar2 [16];
  
  iVar1 = FUN_10045eed0(param_1,"Cooldown",&local_24);
  if (iVar1 != 0) {
    FUN_10045ef3c(param_1,local_24,0);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT416(*(uint *)(*(long *)(param_1 + 0x38) + 0x40));
}




void FUN_10045edb4(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x68);
  *(char *)(param_1 + 0x68) = (char)param_2;
  FUN_10046c5ac(param_1,param_2 - (uint)bVar1);
  return;
}




int FUN_10045edc4(long param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 local_24;
  
  iVar1 = FUN_10045eed0(param_1,"Charges",&local_24);
  if (iVar1 == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x38) + 0x4c);
  }
  else {
    fVar3 = (float)FUN_10045ef3c(param_1,local_24,1);
    uVar2 = (uint)fVar3;
  }
  fVar3 = (float)uVar2;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  return (int)fVar3;
}




void FUN_10045ee2c(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  
  lVar3 = 0;
  bVar5 = true;
  while (*(long *)(param_1 + lVar3 * 8 + 0x1e8) != param_2) {
    lVar3 = 1;
    bVar1 = !bVar5;
    bVar5 = false;
    if (bVar1) {
      return;
    }
  }
  iVar2 = FUN_1004603ec(param_1 + 0x68,5);
  if (iVar2 == 0) {
    return;
  }
  uVar4 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if ((((int)uVar4 != 0x1f) && (*(short *)(param_1 + uVar4 * 0x38 + 0x70) == 2)) &&
     ((*(byte *)(param_1 + 0x239) >> 6 & 1) == 0)) {
    return;
  }
  FUN_10045e3b4(param_1 + 0x68,5,0,0);
  return;
}




undefined8 FUN_10045eed0(long param_1,char *param_2,undefined4 *param_3)

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
      iVar1 = _strcasecmp(param_2,(char *)*puVar2);
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




float FUN_10045ef3c(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  
  uVar2 = *(uint *)(param_1 + 0x238) >> 10 & 7;
  fVar5 = (float)uVar2;
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  uVar1 = (int)fVar5;
  if (param_3 == 0) {
    uVar1 = uVar2;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x38) + 0xb0);
  lVar3 = *plVar4;
  if (lVar3 != 0 && param_2 != 0) {
    do {
      param_2 = param_2 + -1;
      plVar4 = plVar4 + 1;
      lVar3 = *plVar4;
    } while (lVar3 != 0 && param_2 != 0);
  }
  if (lVar3 != 0) {
    fVar5 = 0.0;
    if (uVar1 == 5) {
      fVar5 = *(float *)(lVar3 + 0x10);
    }
    return *(float *)(lVar3 + 8) + (float)(uVar1 - 1) * *(float *)(lVar3 + 0xc) + fVar5;
  }
  return 0.0;
}




long FUN_10045efc4(long param_1,char *param_2)

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
    iVar1 = _strcasecmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)plVar3[1];
    plVar3 = plVar3 + 1;
  }
  return *plVar3;
}




void FUN_10045f018(long param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if (((int)uVar1 != 0x1f) && (*(short *)(param_1 + uVar1 * 0x38 + 0x70) == 0)) {
    FUN_10045e3b4(param_1 + 0x68,1,0,0);
    return;
  }
  return;
}




uint FUN_10045f050(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar2 + 0x8a) != '\0') {
    return 0x40000;
  }
  if (*(int *)(lVar2 + 0x80) == 3) {
    return 0;
  }
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
  return uVar1;
}




undefined1  [16] FUN_10045f0f0(void)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_10045f11c();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x6a) == '\0')) {
    FUN_10045f284();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




long FUN_10045f11c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = 0;
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar3 = param_1 + lVar3 * 8;
    lVar2 = *(long *)(lVar3 + 0x1e8);
    lVar6 = lVar5;
    if ((lVar2 != 0) && (lVar6 = lVar2, lVar5 != 0)) {
      fVar8 = 0.0;
      fVar7 = 0.0;
      if (*(char *)(lVar2 + 0x6a) == '\0') {
        fVar7 = (float)FUN_10045f284();
      }
      if (*(char *)(lVar5 + 0x6a) == '\0') {
        fVar8 = (float)FUN_10045f284(lVar5);
      }
      lVar6 = lVar5;
      if (fVar8 < fVar7) {
        lVar6 = *(long *)(lVar3 + 0x1e8);
      }
    }
    lVar3 = 1;
    lVar5 = lVar6;
    bVar1 = false;
  } while (bVar4);
  return lVar6;
}




undefined4 FUN_10045f1bc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x40);
  uVar5 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x40);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
          }
        }
        uVar4 = FUN_1010a0324(uVar3);
        if ((uVar4 & 1) == 0) {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar5 = *(undefined4 *)(lVar2 + 0x40);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return uVar5;
}




undefined4 FUN_10045f284(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x40);
  uVar5 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x40);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
          }
        }
        uVar4 = FUN_1010a0324(uVar3);
        if ((uVar4 & 1) == 0) {
          lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          uVar5 = *(undefined4 *)(lVar2 + 0x44);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_101dc0b88;
    }
  }
  return uVar5;
}




float FUN_10045f34c(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  
  fVar4 = *(float *)((long)param_1 + 0xc);
  if (*(float *)((long)param_1 + 0xc) < 0.0) {
    if (*(char *)((long)param_1 + 0x14) == '\0') {
      lVar2 = *param_1;
      if (lVar2 == 0) {
        fVar4 = *(float *)(param_1 + 1);
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
        fVar4 = (float)FUN_1003dfc78(param_2,lVar2,uVar3);
      }
    }
    else {
      do {
        param_2 = *(long *)(param_2 + 0x10);
      } while (*(int *)(*(long *)(param_2 + 8) + 0xa4) != DAT_10184dd68);
      lVar2 = *(long *)(param_2 + 0x40);
      fVar4 = *(float *)(lVar2 + 0x78) + *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0)
      ;
      NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1e0),DAT_101e94360);
      fVar4 = DAT_101e942a0;
    }
  }
  return *(float *)(param_1 + 2) + fVar4;
}




bool FUN_10045f430(long param_1)

{
  int iVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  
  lVar3 = *(long *)(param_1 + 0x10);
  iVar5 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  lVar4 = lVar3;
  iVar1 = iVar5;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  sVar2 = *(short *)(param_1 + 0x21e);
  if (sVar2 < 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x218) *
            (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar2 << 0x11) >> 0x11));
  }
  if (*(float *)(*(long *)(lVar4 + 0x40) + 0x310) < fVar6) {
    return false;
  }
  while (iVar5 != DAT_10184dd68) {
    lVar3 = *(long *)(lVar3 + 0x10);
    iVar5 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  }
  fVar6 = 0.0;
  if (sVar2 < 0) {
    fVar6 = *(float *)(param_1 + 0x218) *
            (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar2 << 0x11) >> 0x11));
  }
  return fVar6 <= *(float *)(*(long *)(lVar3 + 0x40) + 0x314);
}




void FUN_10045f4f4(long param_1)

{
  int iVar1;
  float fVar2;
  undefined4 local_24;
  
  iVar1 = FUN_10045eed0(param_1,"Energy Cost",&local_24);
  if (iVar1 == 0) {
    fVar2 = *(float *)(*(long *)(param_1 + 0x38) + 0x68);
  }
  else {
    fVar2 = (float)FUN_10045ef3c(param_1,local_24,0);
  }
  if (ABS(fVar2) < 1.1920929e-07) {
    iVar1 = FUN_10045eed0(param_1,"Alt Energy Cost",&local_24);
    if (iVar1 == 0) {
      fVar2 = *(float *)(*(long *)(param_1 + 0x38) + 0x6c);
    }
    else {
      fVar2 = (float)FUN_10045ef3c(param_1,local_24,0);
    }
    if (0.0 < fVar2) {
      *(ushort *)(param_1 + 0x21e) = *(ushort *)(param_1 + 0x21e) | 0x8000;
    }
  }
  *(short *)(param_1 + 0x21c) = (short)(int)fVar2;
  return;
}




int FUN_10045f5b0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = (*(uint *)(param_1 + 0x238) >> 10 & 7) - *(int *)(lVar3 + 0x78);
  iVar2 = uVar1 + 1;
  if (*(char *)(lVar3 + 0x8d) == '\0') {
    switch(uVar1) {
    case 0:
      iVar2 = 1;
      if (*(char *)(lVar3 + 0x93) != '\0') {
        iVar2 = 2;
      }
      return iVar2;
    case 1:
      goto switchD_10045f608_caseD_1;
    case 2:
      return 4;
    case 3:
      return 6;
    case 4:
      return 8;
    default:
      goto switchD_10045f608_default;
    }
  }
  if (uVar1 < 3) {
    iVar2 = uVar1 * 3 + 6;
switchD_10045f608_caseD_1:
    return iVar2;
  }
switchD_10045f608_default:
  return 0xff;
}




uint FUN_10045f640(long param_1)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  lVar10 = *(long *)(param_1 + 0x10);
  while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  if ((*(byte *)(param_1 + 0x239) & 0x1c) == 0) {
    uVar5 = 1;
  }
  else {
    lVar6 = 0;
    bVar3 = true;
    do {
      bVar8 = bVar3;
      lVar6 = *(long *)(param_1 + lVar6 * 8 + 0x1e8);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x6a) == '\0')) {
        fVar12 = (float)FUN_10045f284();
        uVar5 = 4;
        if (fVar12 <= 0.0) {
          uVar5 = 0x400;
        }
        goto LAB_10045f6dc;
      }
      lVar6 = 1;
      bVar3 = false;
    } while (bVar8);
    uVar5 = 0;
  }
LAB_10045f6dc:
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x88) & 0x1f;
  if (((int)uVar7 != 0x1f) && (*(ushort *)(lVar10 + uVar7 * 0x38 + 0x90) - 3 < 2)) {
    uVar5 = uVar5 | 0x20;
  }
  uVar4 = *(uint *)(param_1 + 0x238);
  uVar5 = uVar4 >> 9 & 0x10 | uVar5;
  uVar7 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if ((int)uVar7 == 0x1f) {
LAB_10045f754:
    uVar5 = uVar5 | 0x400;
  }
  else {
    sVar1 = *(short *)(param_1 + uVar7 * 0x38 + 0x70);
    if (sVar1 != 1) {
      if (sVar1 == 5) {
        uVar5 = uVar5 | 4;
      }
      else {
        if (sVar1 != 2) goto LAB_10045f754;
        uVar5 = uVar5 | 2;
      }
    }
  }
  plVar9 = *(long **)(param_1 + 0x50);
  if (plVar9 == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      uVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,param_1);
      uVar11 = uVar4 | uVar11;
      plVar9 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
    } while (plVar9 != (long *)0x0);
    uVar4 = *(uint *)(param_1 + 0x238);
  }
  uVar11 = uVar11 | uVar5;
  if ((uVar4 & 0x1c00) == 0) goto LAB_10045f814;
  fVar12 = *(float *)(*(long *)(lVar10 + 0x40) + 0x310);
  sVar1 = *(short *)(param_1 + 0x21e);
  if (sVar1 < 0) {
    if (0.0 <= fVar12) {
      fVar13 = *(float *)(param_1 + 0x218) *
               (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar1 << 0x11) >> 0x11));
      goto LAB_10045f804;
    }
  }
  else {
    fVar13 = 0.0;
    if (*(float *)(param_1 + 0x218) *
        (float)(int)((uint)*(ushort *)(param_1 + 0x21c) + (((int)sVar1 << 0x11) >> 0x11)) <= fVar12)
    {
LAB_10045f804:
      if (fVar13 <= *(float *)(*(long *)(lVar10 + 0x40) + 0x314)) goto LAB_10045f814;
    }
  }
  uVar11 = uVar11 | 8;
LAB_10045f814:
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x88) & 0x1f;
  uVar5 = uVar11;
  if (((((int)uVar7 != 0x1f) && (*(short *)(lVar10 + uVar7 * 0x38 + 0x90) == 5)) &&
      ((lVar6 = *(long *)(param_1 + 0x38), *(char *)(lVar6 + 0x54) == '\0' ||
       (*(char *)(lVar6 + 0x55) == '\0')))) &&
     (uVar5 = uVar11 | 0x40, *(char *)(lVar6 + 0x5b) != '\0')) {
    uVar5 = uVar11;
  }
  uVar2 = *(ushort *)(lVar10 + 0x2f8);
  uVar4 = uVar5;
  if (((uVar2 >> 7 & 1) != 0) &&
     (uVar4 = uVar5 | 0x40, *(char *)(*(long *)(param_1 + 0x38) + 0x5c) != '\0')) {
    uVar4 = uVar5;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if ((((~uVar2 & 0x1e) == 0) && (*(char *)(lVar6 + 0x5d) == '\0')) &&
     ((*(char *)(lVar6 + 0x54) == '\0' || (*(char *)(lVar6 + 0x56) == '\0')))) {
    uVar4 = uVar4 | 0x80;
  }
  if (*(char *)(lVar6 + 0x8c) == '\0') {
    if ((((uVar2 >> 3 & 1) != 0) && (*(char *)(lVar6 + 0x5e) == '\0')) &&
       ((*(char *)(lVar6 + 0x54) == '\0' || (*(char *)(lVar6 + 0x58) == '\0')))) {
      uVar4 = uVar4 | 0x100;
    }
    if ((((uVar2 >> 5 & 1) != 0) && (*(char *)(lVar6 + 0x5f) == '\0')) &&
       ((*(char *)(lVar6 + 0x54) == '\0' || (*(char *)(lVar6 + 0x59) == '\0')))) {
      uVar4 = uVar4 | 0x200;
    }
  }
  else {
    uVar4 = uVar4 | (uVar2 & 0x10) << 4;
  }
  if (((((uint)*(byte *)(lVar10 + 0x303) << 0x10) >> 0x12 & 1) != 0) &&
     ((*(char *)(lVar6 + 0x54) == '\0' || (*(char *)(lVar6 + 0x5a) == '\0')))) {
    uVar4 = uVar4 | 0x400;
  }
  uVar5 = uVar4 | 0x400;
  if (((uVar2 ^ 0xffff) & 0x51f) != 0) {
    uVar5 = uVar4;
  }
  return uVar5;
}




void FUN_10045f950(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  
  *(long *)(param_1 + 0x1c8) = *param_2;
  *(int *)(param_1 + 0x1d0) = (int)param_2[1];
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xffffffc7 | 8;
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(lVar2 + 0x250);
        fVar3 = *(float *)(lVar2 + 0x254);
        *(float *)(param_1 + 0x1dc) = fVar3;
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(lVar2 + 600);
        *(float *)(param_1 + 0x1dc) = *(float *)(lVar2 + 0x2ec) + fVar3;
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10045f9f0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  do {
    if (uVar2 < 8) {
      lVar1 = param_1 + (ulong)uVar2 * 0x10;
      uVar3 = *(undefined4 *)(param_2 + 0x30);
      *(long *)(lVar1 + 0x38) = param_2 + 0x28;
      *(undefined4 *)(lVar1 + 0x40) = uVar3;
      *(uint *)(param_1 + 0xb8) = uVar2 + 1;
      return;
    }
    for (param_1 = *(long *)(param_1 + 0x18); param_1 != 0; param_1 = *(long *)(param_1 + 0x20)) {
      if (*(int *)(*(long *)(param_1 + 8) + 0xa4) == DAT_101867320) goto LAB_10045fa40;
    }
    param_1 = FUN_1010a0298();
    if (param_1 == 0) {
      return;
    }
LAB_10045fa40:
    uVar2 = *(uint *)(param_1 + 0xb8);
  } while( true );
}




undefined8 FUN_10045fa7c(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  
  uVar2 = *(uint *)(param_1 + 0xb8);
  if (uVar2 <= param_2) {
    do {
      param_1 = *(long *)(param_1 + 0x18);
      while ((param_1 != 0 && (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_101867320))) {
        param_1 = *(long *)(param_1 + 0x20);
      }
      param_2 = param_2 - uVar2;
      uVar2 = *(uint *)(param_1 + 0xb8);
    } while (uVar2 <= param_2);
  }
  plVar4 = (long *)(param_1 + (ulong)param_2 * 0x10 + 0x38);
  plVar3 = (long *)*plVar4;
  if (plVar3 != (long *)0x0) {
    piVar5 = (int *)(param_1 + (ulong)param_2 * 0x10 + 0x40);
    if (*piVar5 == (int)plVar3[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010045faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      return uVar1;
    }
    *plVar4 = 0;
    *piVar5 = DAT_101dc0b88;
  }
  return 0;
}




int FUN_10045fb10(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return *(int *)(param_1 + 0xb8);
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_101867320) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_10045fb10();
  return *(int *)(param_1 + 0xb8) + iVar1;
}




void FUN_10045fb68(long param_1,int param_2,int param_3)

{
  float fVar1;
  
  if (param_3 != 0) {
    FUN_10045fb90();
    return;
  }
  fVar1 = (float)(int)((uint)*(byte *)(*(long *)(param_1 + 0x1f8) + 0x6a) + param_2);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_10045fb90(*(long *)(param_1 + 0x1f8),(int)fVar1);
  return;
}




void FUN_10045fb90(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  
  cVar2 = *(char *)(param_1 + 0x6a);
  fVar8 = (float)NEON_fminnm((float)param_2,
                             (float)((int)*(char *)(param_1 + 0x69) +
                                    (uint)*(byte *)(param_1 + 0x68)));
  iVar4 = (int)fVar8;
  *(char *)(param_1 + 0x6a) = (char)iVar4;
  if (cVar2 == '\0') {
    if (iVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68) {
        lVar5 = 0;
      }
      uVar7 = 0xffff0000;
      lVar3 = lVar5;
LAB_10045fcdc:
      do {
        do {
          lVar6 = lVar3;
          if ((lVar6 != lVar5) &&
             (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x366b0603), lVar3 != 0)) {
            (**(code **)(lVar3 + 8))(lVar6);
          }
          if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
            uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
            goto LAB_10045fcdc;
          }
          if ((uVar7 & 0xffff) == 0) {
            return;
          }
          lVar3 = *(long *)(lVar6 + 0x20);
        } while (*(long *)(lVar6 + 0x20) != 0);
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        uVar1 = uVar7 - 1 & 0xffff;
        if (uVar1 == 0) {
          return;
        }
        uVar7 = uVar1 | uVar7 & 0xffff0000;
        while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
          if ((uVar7 - 1 & 0xffff) == 0) {
            return;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
          if (lVar6 == 0) {
            return;
          }
        }
      } while( true );
    }
  }
  else if (iVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68) {
      lVar5 = 0;
    }
    uVar7 = 0xffff0000;
    lVar3 = lVar5;
LAB_10045fc30:
    do {
      do {
        lVar6 = lVar3;
        if ((lVar6 != lVar5) &&
           (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar6 + 8),0x457106fa), lVar3 != 0)) {
          (**(code **)(lVar3 + 8))(lVar6);
        }
        if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
          uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
          goto LAB_10045fc30;
        }
        if ((uVar7 & 0xffff) == 0) {
          return;
        }
        lVar3 = *(long *)(lVar6 + 0x20);
      } while (*(long *)(lVar6 + 0x20) != 0);
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        return;
      }
      uVar1 = uVar7 - 1 & 0xffff;
      if (uVar1 == 0) {
        return;
      }
      uVar7 = uVar1 | uVar7 & 0xffff0000;
      while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
        if ((uVar7 - 1 & 0xffff) == 0) {
          return;
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
        if (lVar6 == 0) {
          return;
        }
      }
    } while( true );
  }
  return;
}




void FUN_10045fd94(long param_1)

{
  short sVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if ((int)uVar2 != 0x1f) {
    sVar1 = *(short *)(param_1 + uVar2 * 0x38 + 0x70);
    if (sVar1 == 1) {
      return;
    }
    if (sVar1 == 2) {
      FUN_10045fdfc();
    }
  }
  FUN_10045e3b4((ushort *)(param_1 + 0x68),1,0,0);
  return;
}




void FUN_10045fdfc(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  
  for (plVar3 = *(long **)(param_1 + 0x50); plVar3 != (long *)0x0;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
  }
  if ((*(ushort *)(param_1 + 0x238) & 0x3c0) != 0) {
    uVar2 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x10);
      while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
        lVar1 = *(long *)(lVar1 + 0x10);
      }
      FUN_1003c58cc();
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)(param_1 + 0x238) >> 6 & 0xf));
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfffffc3f;
  }
  return;
}




void FUN_10045feac(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1010a1cd4();
    iVar1 = FUN_1003c165c((long *)(param_1 + 0x48),param_1);
    if (iVar1 != 0) {
      FUN_10045fef8(param_1);
      return;
    }
  }
  return;
}




void FUN_10045fef8(long param_1)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  
  lVar4 = 0;
  bVar7 = false;
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x4000;
  bVar2 = true;
  do {
    bVar6 = bVar2;
    lVar4 = *(long *)(param_1 + lVar4 * 8 + 0x1e8);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x6a) == '\0') {
        bVar7 = true;
      }
      else {
        FUN_10045ffb4();
      }
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar6);
  uVar5 = (ulong)*(ushort *)(param_1 + 0x68) & 0x1f;
  if (((int)uVar5 != 0x1f) &&
     (sVar1 = *(short *)(param_1 + uVar5 * 0x38 + 0x70), sVar1 == 2 || sVar1 == 4)) {
    uVar3 = 5;
    if (!bVar7) {
      uVar3 = 1;
    }
    FUN_10045e3b4(param_1 + 0x68,uVar3,0,0);
    return;
  }
  return;
}




void FUN_10045ffb4(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003ad218();
  fVar2 = fVar1 + 0.1;
  if (fVar1 <= 0.0) {
    fVar2 = fVar1;
  }
  if ((*(byte *)(param_1 + 0x6b) & 3) == 0) {
    fVar2 = fVar2 - *(float *)(param_1 + 100);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  fVar1 = (float)(int)(*(byte *)(param_1 + 0x6a) - 1);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_10045fb90(param_1,(int)fVar1);
  FUN_10046c22c(fVar2,param_1);
  return;
}




undefined8 * thunk_FUN_10045d8e4(undefined8 *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10045e4d0_101499a20;
  param_1[5] = &PTR_FUN_101499a50;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  puVar2 = (ushort *)(param_1 + 0xd);
  *(undefined2 *)((long)param_1 + 0x74) = 0;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x3a) = DAT_101dc0b88;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xbf800000;
  *(uint *)(param_1 + 0x47) = *(uint *)(param_1 + 0x47) & 0xffff03c0 | 1;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = FUN_10045db6c;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 2;
  param_1[0x1d] = FUN_10045dcc0;
  param_1[0x1e] = 0;
  param_1[0x1f] = FUN_10045dd54;
  param_1[0x20] = 0;
  param_1[0x21] = FUN_10045dec8;
  param_1[0x22] = 0;
  *(undefined2 *)((long)param_1 + 0xe2) = 0;
  *(undefined4 *)(param_1 + 0x23) = 3;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 4;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = FUN_10045e0a8;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 5;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = FUN_10045e1e8;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *puVar2 = *puVar2 & 0x8000 | 0x1bff;
  FUN_10045e330(puVar2,0,1);
  FUN_10045e330(puVar2,1,2);
  FUN_10045e330(puVar2,1,5);
  FUN_10045e330(puVar2,1,3);
  FUN_10045e330(puVar2,3,5);
  FUN_10045e330(puVar2,3,1);
  FUN_10045e330(puVar2,2,5);
  FUN_10045e330(puVar2,2,1);
  FUN_10045e330(puVar2,2,4);
  FUN_10045e330(puVar2,4,5);
  FUN_10045e330(puVar2,4,1);
  FUN_10045e330(puVar2,4,3);
  FUN_10045e330(puVar2,5,1);
  FUN_10045e330(puVar2,5,3);
  FUN_10045e3b4(puVar2,0,0,0);
  return param_1;
}

