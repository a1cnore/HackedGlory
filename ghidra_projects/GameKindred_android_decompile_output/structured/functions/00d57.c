// functions/00d57 — 17 functions
#include "libGameKindred.h"




void FUN_00d5756c(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d5763c(param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1);
  uVar3 = FUN_00ceab48();
  if (((((uVar3 & 1) != 0) && (uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f, uVar1 != 0x1f)) &&
      (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) == 5)) && ((param_4 & 1) == 0)) {
    local_78 = *(undefined4 *)(param_1 + 0x250);
    local_70 = *(undefined4 *)(param_1 + 600);
    local_74 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
    FUN_00d0772c(auStack_68,*(undefined4 *)(param_1 + 0x260),&local_78,0);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5763c(long param_1,float *param_2,uint param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar7 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if ((uVar7 == 0x1f) || (bVar2 = false, *(short *)(param_1 + (ulong)uVar7 * 0x38 + 0x90) != 5)) {
    bVar2 = (*(byte *)(param_1 + 0x2f8) & 2) == 0;
  }
  if ((!bVar2) && ((param_4 & 1) == 0)) {
    return;
  }
  uVar7 = 0x10000;
  fVar8 = *(float *)(param_1 + 0x250) - *param_2;
  fVar10 = (*(float *)(param_1 + 0x254) + *(float *)(param_1 + 0x2ec)) - param_2[1];
  fVar9 = *(float *)(param_1 + 600) - param_2[2];
  lVar3 = param_1;
LAB_00d57738:
  do {
    do {
      lVar6 = lVar3;
      if ((lVar6 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0xb0d0275), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar6,param_3 & 1);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d57738;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_00d57794;
      lVar3 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d57794:
      if (*(long *)(param_1 + 0x48) == 0) {
        return;
      }
      uVar4 = FUN_00d60468(*(long *)(param_1 + 0x48),param_2);
      if (fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9 < 0.2) {
        return;
      }
      if ((uVar4 & 1) == 0) {
        return;
      }
      FUN_00d5538c(param_1 + 0x88,2,0,0);
      if ((((DAT_02bed4f0 != '\0') && ((param_5 & 1) != 0)) &&
          (uVar4 = FUN_00d53688(*(undefined8 *)(param_1 + 0x58)), (uVar4 & 1) != 0)) &&
         (((uVar4 = FUN_00ceab48(), (uVar4 & 1) != 0 && (*(long *)(param_1 + 0x48) != 0)) &&
          ((param_4 & 1) == 0)))) {
        uVar5 = FUN_00d607ac();
        FUN_00cb6ef8(param_1,uVar5,1);
      }
      if (*(long *)(param_1 + 0x60) == 0) {
        return;
      }
      FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onActorMoveName_02bed558);
      FUN_00d6c5e0(*(undefined8 *)(param_1 + 0x60),param_2);
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d57794;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_00d57794;
    }
  } while( true );
}




void FUN_00d57870(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00d5763c(param_1,param_2,1,param_3 & 1,1);
  return;
}




void FUN_00d57880(long param_1)

{
  long lVar1;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x250);
  local_30 = *(undefined4 *)(param_1 + 600);
  local_34 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  FUN_00d5763c(param_1,&local_38,1,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d578f4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
LAB_00d579b8:
    FUN_00d57a08(param_1,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_00d53688();
    }
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))();
    }
    FUN_00d5538c(param_1 + 0x88,1,0,0);
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5795c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0xb0d0275), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,0);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5795c;
      }
      if ((uVar4 & 0xffff) == 0) goto LAB_00d579b8;
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d579b8;
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) goto LAB_00d579b8;
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) goto LAB_00d579b8;
    }
  } while( true );
}




void FUN_00d57a08(long param_1,uint param_2)

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
LAB_00d57a74:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x552a07b6), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d57a74;
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




long FUN_00d57ae4(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x48) == 0) {
    lVar2 = 0;
  }
  else {
    local_40 = *(undefined4 *)(param_3 + 1);
    local_48 = *param_3;
    lVar2 = FUN_00d57b80();
    if (lVar2 != 0) {
      FUN_00d621fc(param_1,lVar2,&local_48,param_4 & 1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d57b80(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  FUN_00da2cc4();
  lVar3 = *(long *)(param_1 + 0x48);
  for (lVar5 = *(long *)(lVar3 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_031a96b0) {
      iVar2 = FUN_00d6249c(lVar5);
      if (iVar2 != 0) goto LAB_00d57c7c;
      uVar6 = 0xffff0000;
      lVar3 = param_1;
      goto LAB_00d57c24;
    }
  }
LAB_00d57c8c:
  FUN_01985d44(lVar3,DAT_031a96b0);
  return;
LAB_00d57c24:
  do {
    lVar4 = lVar3;
    if ((lVar4 != param_1) &&
       (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x444d06f4), lVar3 != 0)) {
      (**(code **)(lVar3 + 8))(lVar4);
    }
    if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
      uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
      goto LAB_00d57c24;
    }
    if ((uVar6 & 0xffff) == 0) goto LAB_00d57c7c;
    lVar3 = *(long *)(lVar4 + 0x20);
  } while (*(long *)(lVar4 + 0x20) != 0);
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((lVar4 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d57c7c;
  uVar6 = uVar1 | uVar6 & 0xffff0000;
  while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
    if ((uVar6 - 1 & 0xffff) == 0) goto LAB_00d57c7c;
    lVar4 = *(long *)(lVar4 + 0x10);
    uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
    if (lVar4 == 0) goto LAB_00d57c7c;
  }
  goto LAB_00d57c24;
LAB_00d57c7c:
  FUN_01985da0(*(undefined8 *)(param_1 + 0x48),lVar5);
  lVar3 = *(long *)(param_1 + 0x48);
  goto LAB_00d57c8c;
}




void FUN_00d57ca8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0x48) == 0) || (lVar1 = FUN_00d57b80(param_2), lVar1 == 0)) {
    return;
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_2 + 0x48) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_031a9680) {
        FUN_00d57d98(param_2);
        break;
      }
    }
  }
  FUN_00d622f0(param_1,lVar1,param_3,param_4 & 1);
  return;
}




undefined8 FUN_00d57d58(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_031a9680) {
        return 1;
      }
    }
  }
  return 0;
}




void FUN_00d57d98(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_031a9680) {
        FUN_00d62758();
        return;
      }
    }
  }
  return;
}




void FUN_00d57dd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  FUN_00da2cc4();
  lVar1 = *(long *)(param_3 + 0x18);
  do {
    if (lVar1 == 0) {
LAB_00d57e24:
      lVar1 = FUN_01985d44(param_3,DAT_031a9670);
      if (lVar1 != 0) {
        FUN_00d61bac(param_1,param_2);
        return;
      }
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_031a9670) {
      FUN_01985da0(param_3);
      goto LAB_00d57e24;
    }
    lVar1 = *(long *)(lVar1 + 0x20);
  } while( true );
}




void FUN_00d57e60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5
                 ,undefined4 param_6)

{
  long lVar1;
  
  if (*(long *)(param_3 + 0x48) != 0) {
    FUN_00da2cc4(param_3);
    for (lVar1 = *(long *)(*(long *)(param_3 + 0x48) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_031a9680) {
        return;
      }
    }
    lVar1 = FUN_01985d44();
    if (lVar1 != 0) {
      if (param_4 != 0) {
        FUN_00d62af8(param_1,param_2,lVar1,param_4,param_6);
        return;
      }
      FUN_00d62a04(param_1,param_2,lVar1,param_5);
      return;
    }
  }
  return;
}




void FUN_00d57f2c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_031a96b0) {
        FUN_00d623bc();
        return;
      }
    }
  }
  return;
}




void FUN_00d57f64(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00d6074c();
    return;
  }
  return;
}




void FUN_00d57f74(float param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  float fStack_3c;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *(undefined8 *)(param_2 + 600);
  *(float *)(param_2 + 0x2ec) = param_1;
  uStack_48 = *(undefined8 *)(param_2 + 0x248);
  local_50 = *(undefined8 *)(param_2 + 0x240);
  uStack_58 = *(undefined8 *)(param_2 + 0x238);
  local_60 = *(undefined8 *)(param_2 + 0x230);
  uStack_68 = *(undefined8 *)(param_2 + 0x228);
  local_70 = *(undefined8 *)(param_2 + 0x220);
  fStack_3c = (float)((ulong)*(undefined8 *)(param_2 + 0x250) >> 0x20);
  _local_40 = CONCAT44(fStack_3c + param_1,(int)*(undefined8 *)(param_2 + 0x250));
  plVar2 = *(long **)(param_2 + 0x50);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x160))(plVar2,&local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d57ffc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x2e8) = param_1;
  return;
}

