// functions/00d5c — 37 functions
#include "libGameKindred.h"




void FUN_00d5c0e0(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_60 [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d53d6c(*(undefined8 *)(param_1 + 0x58));
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar3 = FUN_00d5392c(*(undefined8 *)(param_1 + 0x58),param_2);
    thunk_FUN_00d9ff34(local_60,uVar3);
    FUN_00d6c758(*(undefined8 *)(param_1 + 0x60),PTR_s_onAbilityDowngradedName_02bed540,local_60[0])
    ;
  }
  uVar6 = 0xffff0000;
  lVar4 = param_1;
LAB_00d5c19c:
  do {
    do {
      lVar5 = lVar4;
      if ((lVar5 != param_1) &&
         (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x53fa07ab), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar5,param_2);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d5c19c;
      }
      if ((uVar6 & 0xffff) == 0) goto LAB_00d5c1f8;
      lVar4 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5c1f8:
      if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) goto LAB_00d5c1f8;
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar5 == 0) goto LAB_00d5c1f8;
    }
  } while( true );
}




void FUN_00d5c228(long param_1)

{
  FUN_00d53454(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d5c230(long param_1)

{
  FUN_00d5338c(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d5c238(long param_1)

{
  FUN_00d535a4(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d5c240(long param_1)

{
  FUN_00d548d4(*(undefined8 *)(param_1 + 0x58));
  return;
}




bool FUN_00d5c248(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00d535a4(*(undefined8 *)(param_1 + 0x58));
  iVar2 = FUN_00d548e8(*(undefined8 *)(param_1 + 0x58),param_2);
  return iVar1 == iVar2;
}




void FUN_00d5c28c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) | 4;
  fVar2 = (*(float *)(lVar1 + 0x250) + 1.0) *
          (*(float *)(lVar1 + 0xe8) + *(float *)(lVar1 + 0x19c) * (*(float *)(lVar1 + 0x304) + 1.0))
  ;
  if (DAT_031a9660 <= fVar2) {
    fVar2 = DAT_031a9660;
  }
  fVar3 = DAT_031a95a0;
  if (DAT_031a95a0 <= fVar2) {
    fVar3 = fVar2;
  }
  FUN_00d5b93c(fVar3,param_1,1);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onActorUndeadName_02bed578);
    FUN_00d6c420(*(undefined8 *)(param_1 + 0x60));
    return;
  }
  return;
}




void FUN_00d5c338(long param_1)

{
  *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) & 0xfb;
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onActorUnUndeadName_02bed580);
    return;
  }
  return;
}




void FUN_00d5c374(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 local_9c;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  int local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  puVar2 = (undefined4 *)(param_5 + 0x260);
  if (param_5 == 0) {
    puVar2 = &DAT_01bc8f90;
  }
  uVar3 = *puVar2;
  local_9c = param_1;
  FUN_00d6c848(*(undefined8 *)(param_4 + 0x60),PTR_s_onBeforeReceiveBuffName_02bed560,uVar3,
               &local_9c,param_6);
  iVar5 = FUN_00d6ada0(local_9c,param_2,param_3,*(undefined8 *)(param_4 + 0x60),uVar3,param_6,
                       param_7,param_8,param_9,param_10);
  if (iVar5 != -1) {
    local_98 = param_6;
    lStack_90 = param_5;
    local_88 = param_4;
    local_80 = iVar5;
    if (param_5 != 0) {
      for (lVar6 = *(long *)(param_5 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
        if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c7bf48) {
          FUN_00d6c540(lVar6,&local_98);
          break;
        }
      }
    }
    FUN_00d6c578(*(undefined8 *)(param_4 + 0x60),&local_98);
  }
  uVar8 = 0xffff0000;
  lVar6 = param_4;
LAB_00d5c4d8:
  do {
    do {
      lVar7 = lVar6;
      if ((lVar7 != param_4) &&
         (lVar6 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x1eda0467), lVar6 != 0)) {
        (**(code **)(lVar6 + 8))(lVar7,param_6);
      }
      if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar6 = *(long *)(lVar7 + 0x18), lVar6 != 0)) {
        uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
        goto LAB_00d5c4d8;
      }
      if ((uVar8 & 0xffff) == 0) goto LAB_00d5c534;
      lVar6 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((lVar7 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5c534:
      if (*(long *)(lVar4 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar8 = uVar1 | uVar8 & 0xffff0000;
    while (lVar6 = *(long *)(lVar7 + 0x20), lVar6 == 0) {
      if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00d5c534;
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
      if (lVar7 == 0) goto LAB_00d5c534;
    }
  } while( true );
}




void FUN_00d5c56c(long param_1)

{
  FUN_00d6afa8(*(undefined8 *)(param_1 + 0x60));
  return;
}




void FUN_00d5c574(long param_1)

{
  FUN_00d6b034(*(undefined8 *)(param_1 + 0x60));
  return;
}




void FUN_00d5c57c(long param_1)

{
  FUN_00d6b080(*(undefined8 *)(param_1 + 0x60));
  return;
}




void FUN_00d5c584(long param_1)

{
  FUN_00d6b3b4(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x260));
  return;
}




void FUN_00d5c594(long param_1)

{
  FUN_00d6b448(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x260));
  return;
}




void FUN_00d5c5a4(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00d72dac();
    return;
  }
  return;
}




void FUN_00d5c5b4(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00d72940();
    return;
  }
  return;
}




void FUN_00d5c5c4(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_00d72a18(*(undefined8 *)(param_1 + 0x68),param_2,param_3,param_4 & 1);
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d5c63c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x1eca0469), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2 & 0xffffffff);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5c63c;
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




void FUN_00d5c6ac(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00d73a9c();
    return;
  }
  return;
}




void FUN_00d5c6bc(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00d73b18();
    return;
  }
  return;
}




void FUN_00d5c6cc(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00d73c10();
    return;
  }
  return;
}




void FUN_00d5c6dc(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00d73c80();
    return;
  }
  return;
}




void FUN_00d5c6ec(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00d73d00();
    return;
  }
  return;
}




void FUN_00d5c6fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ec00) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7d5a4();
  return;
}




long FUN_00d5c72c(long param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ushort local_5c [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_5c[0] = (ushort)((param_2 & 1) << 1) | (ushort)param_2 | (ushort)((param_2 & 4) << 0xb) |
                (ushort)((param_2 & 8) << 2);
  if (param_1 != 0) {
    uVar7 = 0x10000;
    lVar4 = param_1;
LAB_00d5c7cc:
    do {
      do {
        lVar5 = lVar4;
        lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0xb3440b50);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(lVar5,local_5c);
        }
        if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
          uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
          goto LAB_00d5c7cc;
        }
        if ((uVar7 & 0xffff) == 0) goto LAB_00d5c820;
        lVar4 = *(long *)(lVar5 + 0x20);
      } while (*(long *)(lVar5 + 0x20) != 0);
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((lVar5 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
      uVar7 = uVar1 | uVar7 & 0xffff0000;
      while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
        if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d5c820;
        lVar5 = *(long *)(lVar5 + 0x10);
        uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
        if (lVar5 == 0) goto LAB_00d5c820;
      }
    } while( true );
  }
LAB_00d5c820:
  lVar4 = FUN_01985d44(param_1,DAT_031a9690);
  *(ushort *)(lVar4 + 0x34) = local_5c[0];
  FUN_00d5c91c(param_1);
  if (param_1 == 0) {
LAB_00d5c8e8:
    if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar4;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x2f8);
  uVar7 = 0xffff0000;
LAB_00d5c894:
  do {
    do {
      lVar6 = param_1;
      lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x9fa20a9e);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(lVar6,uVar2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (param_1 = *(long *)(lVar6 + 0x18), param_1 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d5c894;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_00d5c8e8;
      param_1 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar5 = *(long *)(lVar6 + 0x10);
    if ((lVar5 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d5c8e8;
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (param_1 = *(long *)(lVar5 + 0x20), param_1 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d5c8e8;
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar5 == 0) goto LAB_00d5c8e8;
    }
  } while( true );
}




void FUN_00d5c91c(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  long *plVar5;
  long alStack_438 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined2 *)(param_1 + 0x2f8) = 0;
  uVar2 = FUN_01985cbc((int)param_1,alStack_438,0x80,DAT_031a9690);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    plVar5 = alStack_438;
    do {
      uVar4 = uVar4 - 1;
      uVar3 = *(ushort *)(*plVar5 + 0x34) | uVar3;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  *(ushort *)(param_1 + 0x2f8) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5c9a8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  FUN_019888f4(param_2);
  FUN_00d5c91c(param_1);
  if (param_1 == 0) {
    return;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x2f8);
  uVar5 = 0xffff0000;
LAB_00d5ca20:
  do {
    do {
      lVar4 = param_1;
      lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x9fa20a9e);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(lVar4,uVar2);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (param_1 = *(long *)(lVar4 + 0x18), param_1 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00d5ca20;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      param_1 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar3 = *(long *)(lVar4 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (param_1 = *(long *)(lVar3 + 0x20), param_1 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar3 == 0) {
        return;
      }
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00d5ca88(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00daa654();
  FUN_00d089f0(0x3f800000,param_1,1,uVar2,&local_3c,&local_40,&local_44,0);
  lVar3 = *(long *)(param_2 + 0x40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    uVar2 = NEON_fmov(0x3f800000,4);
    fVar7 = (float)uVar2;
    fVar8 = (float)((ulong)uVar2 >> 0x20);
    fVar4 = ((float)*(undefined8 *)(lVar3 + 0x1bc) + fVar7) *
            ((float)*(undefined8 *)(lVar3 + 0x54) +
            (float)*(undefined8 *)(lVar3 + 0x108) * ((float)*(undefined8 *)(lVar3 + 0x270) + fVar7))
    ;
    fVar5 = ((float)((ulong)*(undefined8 *)(lVar3 + 0x1bc) >> 0x20) + fVar8) *
            ((float)((ulong)*(undefined8 *)(lVar3 + 0x54) >> 0x20) +
            (float)((ulong)*(undefined8 *)(lVar3 + 0x108) >> 0x20) *
            ((float)((ulong)*(undefined8 *)(lVar3 + 0x270) >> 0x20) + fVar8));
    uVar6 = _DAT_031a95cc ^
            (_DAT_031a95cc ^ CONCAT44(fVar5,fVar4)) &
            CONCAT44(-(uint)(fVar5 < (float)(_DAT_031a95cc >> 0x20)),
                     -(uint)(fVar4 < (float)_DAT_031a95cc));
    uVar6 = uVar6 ^ (uVar6 ^ _DAT_031a950c) &
                    CONCAT44(-(uint)((float)(uVar6 >> 0x20) < (float)(_DAT_031a950c >> 0x20)),
                             -(uint)((float)uVar6 < (float)_DAT_031a950c));
    return local_44 +
           local_3c / ((float)uVar6 * 0.01 + fVar7) +
           local_40 / ((float)(uVar6 >> 0x20) * 0.01 + fVar8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5cb88(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x301) = *(ushort *)(param_1 + 0x301) & 0xfc00 | param_2 & 0x3ff;
  return;
}




int FUN_00d5cb9c(long param_1)

{
  return (int)((uint)*(ushort *)(param_1 + 0x301) << 0x16) >> 0x16;
}




void FUN_00d5cbac(long param_1)

{
  long lVar1;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d043c0(0x3f800000,auStack_58,*(undefined4 *)(param_1 + 0x260),9,0);
  FUN_00d043c0(0,auStack_88,*(undefined4 *)(param_1 + 0x260),10,1);
  FUN_00ce20fc(auStack_58);
  FUN_00ce20fc(auStack_88);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5cc30(long param_1)

{
  long lVar1;
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d043c0(0x3f800000,auStack_58,*(undefined4 *)(param_1 + 0x260),10,0);
  FUN_00d043c0(0,auStack_88,*(undefined4 *)(param_1 + 0x260),9,1);
  FUN_00d043c0(0,auStack_b8,*(undefined4 *)(param_1 + 0x260),0xc,1);
  FUN_00d043c0(0,auStack_e8,*(undefined4 *)(param_1 + 0x260),0xf,1);
  FUN_00ce20fc(auStack_58);
  FUN_00ce20fc(auStack_88);
  FUN_00ce20fc(auStack_b8);
  FUN_00ce20fc(auStack_e8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5ccf4(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d043c0(auStack_58,*(undefined4 *)(param_1 + 0x260),0xc,0);
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5cd50(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d043c0(auStack_58,*(undefined4 *)(param_1 + 0x260),0xf,0);
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5cdac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(*(long *)(param_1 + 0x38) + 0x1d8);
  puVar3 = (undefined8 *)*plVar4;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      lVar2 = 0;
LAB_00d5ce14:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar2);
    }
    thunk_FUN_00d9ff34(local_40,*puVar3);
    if (*(int *)(param_1 + 0x26c) == local_40[0]) {
      lVar2 = *plVar4;
      goto LAB_00d5ce14;
    }
    puVar3 = (undefined8 *)plVar4[1];
    plVar4 = plVar4 + 1;
  } while( true );
}




void FUN_00d5ce44(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [88];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00ceacf4();
  puVar7 = (undefined8 *)*param_2;
  while (puVar7 != (undefined8 *)0x0) {
    uVar8 = *puVar7;
    iVar4 = FUN_00e6a474(uVar8);
    if ((iVar4 != 0) && ((*(int *)(*param_2 + 8) == -1 || (*(int *)(*param_2 + 8) == iVar3)))) {
      uVar5 = *(undefined4 *)(param_1 + 0x260);
      iVar4 = FUN_00d5cf60(param_1);
      if (iVar4 != -1) {
        uVar5 = FUN_00d5cf60(param_1);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_c0,uVar5,uVar1,uVar8,uVar6,1,0,0);
      FUN_00ce20fc(auStack_c0);
    }
    puVar7 = (undefined8 *)param_2[1];
    param_2 = param_2 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d5cf60(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  plVar2 = *(long **)(param_1 + 0x2d0);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x2d8) == (int)plVar2[1]) {
      lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar1 != 0) {
        puVar3 = (undefined4 *)(lVar1 + 0x260);
        goto LAB_00d5cfbc;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined4 *)(param_1 + 0x2d8) = DAT_03214ce8;
    }
  }
  puVar3 = &DAT_01bc8f90;
LAB_00d5cfbc:
  return *puVar3;
}




float FUN_00d5cfc4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  
  fVar3 = 0.0;
  if (4 < param_2) {
    return 0.0;
  }
  uVar1 = ~param_3 & 1;
  switch(param_2) {
  case 0:
    lVar2 = *(long *)(param_1 + 0x40);
    if (uVar1 != 1) {
      if (uVar1 != 0) {
        return -1.0;
      }
      return *(float *)(lVar2 + 0x54);
    }
    fVar5 = *(float *)(lVar2 + 0x1bc) + 1.0;
    fVar8 = *(float *)(lVar2 + 0x54) + *(float *)(lVar2 + 0x108) * (*(float *)(lVar2 + 0x270) + 1.0)
    ;
    fVar6 = DAT_031a95cc;
    fVar3 = DAT_031a950c;
    goto LAB_00d5d1b0;
  case 1:
    lVar2 = *(long *)(param_1 + 0x40);
    if (uVar1 != 1) {
      if (uVar1 != 0) {
        return -1.0;
      }
      return *(float *)(lVar2 + 0x58);
    }
    fVar5 = *(float *)(lVar2 + 0x1c0) + 1.0;
    fVar8 = *(float *)(lVar2 + 0x58) + *(float *)(lVar2 + 0x10c) * (*(float *)(lVar2 + 0x274) + 1.0)
    ;
    fVar6 = DAT_031a95d0;
    fVar3 = DAT_031a9510;
LAB_00d5d1b0:
    fVar4 = fVar5 * fVar8;
    if (fVar6 <= fVar5 * fVar8) {
      fVar4 = fVar6;
    }
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    return fVar3;
  case 2:
    goto switchD_00d5cfec_caseD_2;
  case 3:
    lVar2 = *(long *)(param_1 + 0x40);
    if ((*(byte *)(param_1 + 0x2f4) & 1) == 0) {
      if (uVar1 != 1) {
        if (uVar1 != 0) {
          return -1.0;
        }
        return *(float *)(lVar2 + 0xa0);
      }
      fVar5 = *(float *)(lVar2 + 0x208) + 1.0;
      fVar8 = *(float *)(lVar2 + 0xa0) + *(float *)(lVar2 + 0x154) * (*(float *)(lVar2 + 700) + 1.0)
      ;
      fVar6 = DAT_031a9618;
      fVar3 = DAT_031a9558;
      goto LAB_00d5d1b0;
    }
    if (uVar1 == 1) {
      fVar3 = (*(float *)(lVar2 + 0x1bc) + 1.0) *
              (*(float *)(lVar2 + 0x54) +
              *(float *)(lVar2 + 0x108) * (*(float *)(lVar2 + 0x270) + 1.0));
      fVar8 = (*(float *)(lVar2 + 0x208) + 1.0) *
              (*(float *)(lVar2 + 0xa0) +
              *(float *)(lVar2 + 0x154) * (*(float *)(lVar2 + 700) + 1.0));
      if (DAT_031a95cc <= fVar3) {
        fVar3 = DAT_031a95cc;
      }
      fVar5 = (*(float *)(lVar2 + 0x1c0) + 1.0) *
              (*(float *)(lVar2 + 0x58) +
              *(float *)(lVar2 + 0x10c) * (*(float *)(lVar2 + 0x274) + 1.0));
      fVar6 = DAT_031a950c;
      if (DAT_031a950c <= fVar3) {
        fVar6 = fVar3;
      }
      if (DAT_031a95d0 <= fVar5) {
        fVar5 = DAT_031a95d0;
      }
      fVar3 = DAT_031a9510;
      if (DAT_031a9510 <= fVar5) {
        fVar3 = fVar5;
      }
      if (DAT_031a9618 <= fVar8) {
        fVar8 = DAT_031a9618;
      }
      fVar3 = (fVar6 + fVar3) * 0.5;
      fVar6 = DAT_031a9558;
      if (DAT_031a9558 <= fVar8) {
        fVar6 = fVar8;
      }
    }
    else if (uVar1 == 0) {
      fVar3 = (*(float *)(lVar2 + 0x54) + *(float *)(lVar2 + 0x58)) * 0.5;
      fVar6 = *(float *)(lVar2 + 0xa0);
    }
    else {
      fVar3 = -1.0;
      fVar6 = -1.0;
    }
    break;
  case 4:
    lVar2 = *(long *)(param_1 + 0x40);
    if (uVar1 == 1) {
      fVar6 = (*(float *)(lVar2 + 0x20c) + 1.0) *
              (*(float *)(lVar2 + 0xa4) +
              *(float *)(lVar2 + 0x158) * (*(float *)(lVar2 + 0x2c0) + 1.0));
      if (DAT_031a961c <= fVar6) {
        fVar6 = DAT_031a961c;
      }
      fVar3 = DAT_031a955c;
      if (DAT_031a955c <= fVar6) {
        fVar3 = fVar6;
      }
    }
    else if (uVar1 == 0) {
      fVar3 = *(float *)(lVar2 + 0xa4);
    }
    else {
      fVar3 = -1.0;
    }
    if ((*(byte *)(param_1 + 0x2f4) & 1) == 0) {
      return fVar3;
    }
    if (uVar1 == 1) {
      uVar9 = NEON_fmov(0x3f800000,4);
      fVar8 = (float)((ulong)uVar9 >> 0x20);
      fVar6 = ((float)*(undefined8 *)(lVar2 + 0x1bc) + (float)uVar9) *
              ((float)*(undefined8 *)(lVar2 + 0x54) +
              (float)*(undefined8 *)(lVar2 + 0x108) *
              ((float)*(undefined8 *)(lVar2 + 0x270) + (float)uVar9));
      fVar8 = ((float)((ulong)*(undefined8 *)(lVar2 + 0x1bc) >> 0x20) + fVar8) *
              ((float)((ulong)*(undefined8 *)(lVar2 + 0x54) >> 0x20) +
              (float)((ulong)*(undefined8 *)(lVar2 + 0x108) >> 0x20) *
              ((float)((ulong)*(undefined8 *)(lVar2 + 0x270) >> 0x20) + fVar8));
      uVar7 = CONCAT44(DAT_031a95d0,DAT_031a95cc) ^
              (CONCAT44(DAT_031a95d0,DAT_031a95cc) ^ CONCAT44(fVar8,fVar6)) &
              CONCAT44(-(uint)(fVar8 < DAT_031a95d0),-(uint)(fVar6 < DAT_031a95cc));
      uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(DAT_031a9510,DAT_031a950c)) &
                      CONCAT44(-(uint)((float)(uVar7 >> 0x20) < DAT_031a9510),
                               -(uint)((float)uVar7 < DAT_031a950c));
    }
    else if (uVar1 == 0) {
      uVar7 = *(ulong *)(lVar2 + 0x54);
    }
    else {
      uVar7 = NEON_fmov(0xbf800000,4);
    }
    fVar6 = ((float)uVar7 + (float)(uVar7 >> 0x20)) * 0.5;
  }
  fVar3 = fVar3 + fVar6;
switchD_00d5cfec_caseD_2:
  return fVar3;
}

