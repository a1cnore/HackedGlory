// functions/00d5b — 42 functions
#include "libGameKindred.h"




void FUN_00d5b038(long param_1)

{
  uint uVar1;
  uint3 *puVar2;
  
  puVar2 = (uint3 *)(param_1 + 0x301);
  uVar1 = (*puVar2 >> 10) + 0xf;
  *(ushort *)puVar2 = (ushort)((uVar1 & 0xf) << 10) | *(ushort *)puVar2 & 0xc3ff;
  if ((((uVar1 & 0xf) == 0) && (uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f, uVar1 != 0x1f)) &&
     (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) == 5)) {
    FUN_00d5538c(param_1 + 0x88,6,0,0);
    return;
  }
  return;
}




void FUN_00d5b0a8(long param_1)

{
  *(ushort *)(param_1 + 0x301) = *(ushort *)(param_1 + 0x301) & 0xbfff;
  return;
}




ushort FUN_00d5b0c4(long param_1)

{
  return *(ushort *)(param_1 + 0x301) >> 0xe & 1;
}




void FUN_00d5b0d4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x2fc) & 0x1f) == 1) {
    return;
  }
  uVar4 = 0x10000;
  *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) & 0xe0 | 1;
  lVar2 = param_1;
LAB_00d5b158:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x36de0632), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_1 + 0x2fc);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5b158;
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




void FUN_00d5b1c8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x2fc) & 0x1f) == 2) {
    return;
  }
  uVar4 = 0x10000;
  *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) & 0xe0 | 2;
  lVar2 = param_1;
LAB_00d5b24c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x36de0632), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_1 + 0x2fc);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5b24c;
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




void FUN_00d5b2bc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x2fc) & 0x1f) == 0) {
    return;
  }
  uVar4 = 0x10000;
  *(byte *)(param_1 + 0x2fc) = *(byte *)(param_1 + 0x2fc) & 0xe0;
  lVar2 = param_1;
LAB_00d5b338:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x36de0632), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_1 + 0x2fc);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5b338;
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




int FUN_00d5b3a8(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 500) + 1.0) *
          (*(float *)(lVar1 + 0x8c) + *(float *)(lVar1 + 0x140) * (*(float *)(lVar1 + 0x2a8) + 1.0))
  ;
  if (DAT_031a9604 <= fVar2) {
    fVar2 = DAT_031a9604;
  }
  fVar3 = DAT_031a9544;
  if (DAT_031a9544 <= fVar2) {
    fVar3 = fVar2;
  }
  return (int)fVar3;
}




void FUN_00d5b404(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x2e8);
  fVar3 = *(float *)(*(long *)(param_1 + 0x38) + 100);
  fVar4 = *(float *)(*(long *)(param_1 + 0x38) + 0x68);
  if ((DAT_031a94e8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_031a94e8);
    if (iVar2 != 0) {
      DAT_031a94e0 = 0x3e3270a0;
      __cxa_guard_release(&DAT_031a94e8);
    }
  }
  FUN_00d58298(param_1,&DAT_031a94e0,auStack_78);
  *(float *)((long)param_2 + 0xc) = (fVar4 * (fVar3 + fVar5)) / fVar3;
  *param_2 = local_48;
  *(undefined4 *)(param_2 + 1) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d5b4e0(long param_1,undefined4 *param_2,undefined8 *param_3,float *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  fVar2 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar2;
  param_2[2] = *(undefined4 *)(param_1 + 600);
  param_2[1] = *(float *)(param_1 + 0x2ec) + fVar2;
  *(undefined4 *)(param_3 + 1) = DAT_03218f80;
  *param_3 = _DAT_03218f78;
  lVar1 = *(long *)(param_1 + 0x38);
  fVar2 = *(float *)(lVar1 + 0x70);
  if (fVar2 <= 0.0) {
    fVar2 = *(float *)(lVar1 + 0x68);
  }
  *param_4 = (fVar2 * (*(float *)(lVar1 + 100) + *(float *)(param_1 + 0x2e8))) /
             *(float *)(lVar1 + 100);
  *param_5 = *(undefined4 *)(lVar1 + 0x6c);
  return;
}




void FUN_00d5b558(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4c = param_1;
  FUN_00d5f27c(*(undefined8 *)(param_2 + 0x40));
  if (*(long *)(param_2 + 0x60) != 0) {
    FUN_00d6c968(*(long *)(param_2 + 0x60),PTR_s_onActorAttributesChangedName_02bed568,param_3,
                 param_4,&local_4c);
  }
  uVar5 = 0x10000;
  lVar3 = param_2;
LAB_00d5b608:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_2) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x828f09a8), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00d5b608;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_00d5b660;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5b660:
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d5b660;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00d5b660;
    }
  } while( true );
}




void FUN_00d5b68c(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4c = param_1;
  FUN_00d5f478(*(undefined8 *)(param_2 + 0x40));
  if (*(long *)(param_2 + 0x60) != 0) {
    FUN_00d6c968(*(long *)(param_2 + 0x60),PTR_s_onActorAttributesChangedName_02bed568,param_3,
                 param_4,&local_4c);
  }
  uVar5 = 0x10000;
  lVar3 = param_2;
LAB_00d5b73c:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_2) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x828f09a8), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00d5b73c;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_00d5b794;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5b794:
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d5b794;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00d5b794;
    }
  } while( true );
}




void FUN_00d5b7c0(undefined4 param_1,long param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = *(ushort *)(param_2 + 0x88) & 0x1f;
  local_4c = param_1;
  if (uVar6 != 0x1f) {
    sVar2 = *(short *)(param_2 + (ulong)uVar6 * 0x38 + 0x90);
    if (sVar2 == 3) {
      if ((param_3 | 2) != 2) goto LAB_00d5b800;
    }
    else if (((param_3 | 2) != 2) || (sVar2 != 4)) goto LAB_00d5b800;
LAB_00d5b910:
    if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00d5b800:
  FUN_00d5f6b0(*(undefined8 *)(param_2 + 0x40),param_3);
  if (*(long *)(param_2 + 0x60) != 0) {
    FUN_00d6c9c8(*(long *)(param_2 + 0x60),PTR_s_onActorResourcesChangedName_02bed570,param_3,
                 &local_4c);
  }
  uVar6 = 0x10000;
  lVar4 = param_2;
LAB_00d5b8a0:
  do {
    do {
      lVar5 = lVar4;
      if ((lVar5 != param_2) &&
         (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x786f093c), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d5b8a0;
      }
      if ((uVar6 & 0xffff) == 0) goto LAB_00d5b910;
      lVar4 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d5b910;
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) goto LAB_00d5b910;
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar5 == 0) goto LAB_00d5b910;
    }
  } while( true );
}




void FUN_00d5b93c(undefined4 param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4c = param_1;
  FUN_00d5f70c(*(undefined8 *)(param_2 + 0x40));
  if (*(long *)(param_2 + 0x60) != 0) {
    FUN_00d6c9c8(*(long *)(param_2 + 0x60),PTR_s_onActorResourcesChangedName_02bed570,param_3,
                 &local_4c);
  }
  uVar5 = 0x10000;
  lVar3 = param_2;
LAB_00d5b9e0:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_2) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x786f093c), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00d5b9e0;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_00d5ba38;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5ba38:
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d5ba38;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00d5ba38;
    }
  } while( true );
}




void FUN_00d5ba64(long param_1)

{
  FUN_00d5f94c(*(undefined8 *)(param_1 + 0x40));
  return;
}




void FUN_00d5ba6c(long param_1,undefined8 param_2)

{
  FUN_00d4d20c(param_2,*(long *)(param_1 + 0x40) + 0x38);
  return;
}




void FUN_00d5ba80(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x300) = param_2;
  return;
}




undefined1 FUN_00d5ba88(long param_1)

{
  return *(undefined1 *)(param_1 + 0x300);
}




void FUN_00d5ba90(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x264) = param_2;
  return;
}




void FUN_00d5ba98(long param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x268) = param_2;
  if (iVar1 != 0) {
    return;
  }
  FUN_00da914c();
  return;
}




undefined4 FUN_00d5baac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x268);
}




undefined4 FUN_00d5bab4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x26c);
}




void FUN_00d5babc(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5bacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x178))();
    return;
  }
  return;
}




undefined4 FUN_00d5bad4(long param_1)

{
  return **(undefined4 **)(param_1 + 0x38);
}




undefined8 FUN_00d5bae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




undefined8 FUN_00d5bae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




void FUN_00d5baf0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x2e0) = param_2;
  return;
}




char * FUN_00d5baf8(long param_1)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  
  pcVar2 = *(char **)(param_1 + 0x2e0);
  if (pcVar2 == (char *)0x0) {
    uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
    if ((uVar1 != 0x1f) &&
       (uVar3 = (ulong)*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90), uVar3 < 7)) {
      return (&PTR_s_None_0281db10)[uVar3];
    }
    pcVar2 = "Unknown";
  }
  return pcVar2;
}




undefined8 FUN_00d5bb48(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
}




undefined8 FUN_00d5bb54(long param_1)

{
  char *__s2;
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ce27e0(local_50);
  lVar5 = *(long *)(param_1 + 0x38);
  puVar4 = (undefined8 *)**(long **)(lVar5 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = *(long **)(lVar5 + 0x18);
    do {
      __s2 = (char *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        __s2 = local_40;
      }
      iVar3 = strcmp((char *)*puVar4,__s2);
      if (iVar3 == 0) {
        puVar4 = (undefined8 *)(*plVar2 + 8);
        goto LAB_00d5bbe4;
      }
      puVar4 = (undefined8 *)plVar2[1];
      plVar2 = plVar2 + 1;
    } while (puVar4 != (undefined8 *)0x0);
    lVar5 = *(long *)(param_1 + 0x38);
  }
  iVar3 = FUN_00e6a474(*(undefined8 *)(lVar5 + 0x10));
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
LAB_00d5bbe4:
    uVar6 = *puVar4;
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d5bc2c(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
}




char * FUN_00d5bc38(long param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(*(long *)(param_1 + 0x38) + 0x38);
  if (*pcVar1 != '\0') {
    return pcVar1;
  }
  return *(char **)(*(long *)(param_1 + 0x38) + 0x20);
}




undefined4 FUN_00d5bc54(long param_1)

{
  return *(undefined4 *)(param_1 + 0x270);
}




undefined4 FUN_00d5bc5c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c0);
}




undefined1 FUN_00d5bc64(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2c8);
}




undefined4 FUN_00d5bc6c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c4);
}




void FUN_00d5bc74(float param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(float *)(*(long *)(param_2 + 0x40) + 0x308) <= 0.0) &&
     (*(float *)(*(long *)(param_2 + 0x40) + 0x30c) <= 0.0)) {
    return;
  }
  *(undefined4 *)(param_2 + 0x2c0) = *(undefined4 *)(param_3 + 0x260);
  *(undefined1 *)(param_2 + 0x2c8) = *(undefined1 *)(param_3 + 0x264);
  FUN_00d5bda0(param_2,param_3);
  FUN_00d593a8(param_2);
  uVar4 = 0x10000;
  lVar2 = param_2;
LAB_00d5bd28:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_2) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x22ef04a2), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))((double)param_1,lVar3,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5bd28;
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




void FUN_00d5bda0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_2 + 0x2f4) & 1) == 0) {
    iVar1 = FUN_00d5cf60(param_2);
    if (iVar1 == -1) {
      return;
    }
    FUN_00d5cf60(param_2);
    lVar2 = FUN_00d9e390();
    if (lVar2 == 0) {
      return;
    }
    if ((*(byte *)(lVar2 + 0x2f4) & 1) == 0) {
      return;
    }
    uVar3 = *(undefined4 *)(lVar2 + 0x260);
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x260);
  }
  *(undefined4 *)(param_1 + 0x2c4) = uVar3;
  return;
}




void FUN_00d5be0c(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_00d593a8();
  if (param_2 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_2;
LAB_00d5be88:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_2) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x22450493), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))((double)param_1,lVar3,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5be88;
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




bool FUN_00d5bf00(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x240) + 1.0) *
          (*(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0))
  ;
  if (DAT_031a9650 <= fVar2) {
    fVar2 = DAT_031a9650;
  }
  fVar3 = DAT_031a9590;
  if (DAT_031a9590 <= fVar2) {
    fVar3 = fVar2;
  }
  return 0xb < (uint)(int)fVar3;
}




undefined8 FUN_00d5bf64(void)

{
  return 0xc;
}




void FUN_00d5bf6c(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_60 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d53c14(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x60) != 0) {
    iVar3 = FUN_00d535a4(*(undefined8 *)(param_1 + 0x58),param_2);
    uVar4 = FUN_00d5392c(*(undefined8 *)(param_1 + 0x58),param_2);
    FUN_00d6c4f0(*(undefined8 *)(param_1 + 0x60),uVar4,iVar3 + -1,iVar3);
    thunk_FUN_00d9ff34(local_60,uVar4);
    FUN_00d6c758(*(undefined8 *)(param_1 + 0x60),PTR_s_onAbilityUpgradedName_02bed538,local_60[0]);
  }
  uVar7 = 0xffff0000;
  lVar5 = param_1;
LAB_00d5c054:
  do {
    do {
      lVar6 = lVar5;
      if ((lVar6 != param_1) &&
         (lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x443e06d8), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar6,param_2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d5c054;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_00d5c0b0;
      lVar5 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5c0b0:
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d5c0b0;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_00d5c0b0;
    }
  } while( true );
}




undefined8 thunk_FUN_00d5bc2c(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
}

