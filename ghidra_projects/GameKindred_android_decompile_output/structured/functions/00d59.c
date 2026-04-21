// functions/00d59 — 21 functions
#include "libGameKindred.h"




void FUN_00d590b0(long param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  uVar2 = FUN_00d54784(*(undefined8 *)(param_1 + 0x58));
  if ((uVar2 & 1) != 0) {
    FUN_00d53224(*(undefined8 *)(param_1 + 0x58));
  }
  uVar7 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if ((((uVar7 == 0x1f) || (*(short *)(param_1 + (ulong)uVar7 * 0x38 + 0x90) != 5)) &&
      (uVar2 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),param_2), (uVar2 & 1) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    FUN_00d58a04(param_1);
  }
  FUN_00d54a28(*(undefined8 *)(param_1 + 0x58),param_2);
  FUN_00d53880(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_00d53218(*(undefined8 *)(param_1 + 0x58),param_2);
  uVar7 = 0x10000;
  lVar3 = param_1;
LAB_00d591a4:
  do {
    do {
      lVar6 = lVar3;
      if ((lVar6 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x295f0542), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar6,param_2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d591a4;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_00d59200;
      lVar3 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) break;
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d59200;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_00d59200;
    }
  } while( true );
LAB_00d59200:
  uVar2 = FUN_00d54528(*(undefined8 *)(param_1 + 0x58),param_2);
  if ((uVar2 & 1) == 0) {
LAB_00d5930c:
    lVar3 = FUN_00d53914(*(undefined8 *)(param_1 + 0x58),param_2);
    if (lVar3 == 0) {
      return;
    }
    plVar4 = (long *)*param_3;
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else if ((int)param_3[1] == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *param_3 = 0;
      uVar5 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
    }
    FUN_00d58ff8(param_1,lVar3,uVar5,0);
    return;
  }
  FUN_00d593a8(param_1);
  plVar4 = (long *)*param_3;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else if ((int)param_3[1] == (int)plVar4[1]) {
    uVar5 = (**(code **)(*plVar4 + 0x10))();
  }
  else {
    *param_3 = 0;
    uVar5 = 0;
    *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
  }
  uVar7 = 0x10000;
  lVar3 = param_1;
LAB_00d592b0:
  do {
    do {
      lVar6 = lVar3;
      if ((lVar6 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x11a60336), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar6,uVar5);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d592b0;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_00d5930c;
      lVar3 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d5930c;
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d5930c;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_00d5930c;
    }
  } while( true );
}




void FUN_00d593a8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 0x303) & 1) != 0) {
LAB_00d59490:
    *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) | 1;
    *(undefined4 *)(param_1 + 0x2f0) = 0x40a00000;
    return;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onEnterCombatName_02bed5a0);
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_00d59438:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x29740532), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d59438;
      }
      if ((uVar4 & 0xffff) == 0) goto LAB_00d59490;
      lVar2 = *(long *)(lVar3 + 0x20);
    } while (*(long *)(lVar3 + 0x20) != 0);
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d59490;
    uVar4 = uVar1 | uVar4 & 0xffff0000;
    while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
      if ((uVar4 - 1 & 0xffff) == 0) goto LAB_00d59490;
      lVar3 = *(long *)(lVar3 + 0x10);
      uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
      if (lVar3 == 0) goto LAB_00d59490;
    }
  } while( true );
}




void FUN_00d594b8(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_00d54784(*(undefined8 *)(param_1 + 0x58));
  if ((uVar2 & 1) != 0) {
    FUN_00d53224(*(undefined8 *)(param_1 + 0x58));
  }
  uVar2 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),param_2);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_00d58a04(param_1);
  }
  FUN_00d54a28(*(undefined8 *)(param_1 + 0x58),param_2);
  FUN_00d538c0(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_00d53218(*(undefined8 *)(param_1 + 0x58),param_2);
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_00d59584:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x295f0542), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,param_2);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00d59584;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_00d595e0;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d595e0:
      lVar3 = FUN_00d53914(*(undefined8 *)(param_1 + 0x58),param_2);
      if (lVar3 == 0) {
        return;
      }
      FUN_00d58ff8(param_1,lVar3,0,param_3);
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d595e0;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00d595e0;
    }
  } while( true );
}




void FUN_00d59630(long param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  uVar2 = FUN_00d54784(*(undefined8 *)(param_1 + 0x58));
  if ((uVar2 & 1) != 0) {
    FUN_00d53224(*(undefined8 *)(param_1 + 0x58));
  }
  uVar2 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),param_2);
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_00d58a04(param_1);
  }
  FUN_00d54a28(*(undefined8 *)(param_1 + 0x58),param_2);
  FUN_00d53880(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_00d538c0(*(undefined8 *)(param_1 + 0x58),param_2,param_4);
  FUN_00d53218(*(undefined8 *)(param_1 + 0x58),param_2);
  uVar7 = 0x10000;
  lVar3 = param_1;
LAB_00d59710:
  do {
    do {
      lVar6 = lVar3;
      if ((lVar6 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x295f0542), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar6,param_2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar3 = *(long *)(lVar6 + 0x18), lVar3 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d59710;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_00d5976c;
      lVar3 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d5976c:
      lVar3 = FUN_00d53914(*(undefined8 *)(param_1 + 0x58),param_2);
      if (lVar3 == 0) {
        return;
      }
      plVar4 = (long *)*param_3;
      if (plVar4 == (long *)0x0) {
        uVar5 = 0;
      }
      else if ((int)param_3[1] == (int)plVar4[1]) {
        uVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *param_3 = 0;
        uVar5 = 0;
        *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
      }
      FUN_00d58ff8(param_1,lVar3,uVar5,param_4);
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar3 = *(long *)(lVar6 + 0x20), lVar3 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d5976c;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_00d5976c;
    }
  } while( true );
}




void FUN_00d59808(long param_1,undefined4 param_2)

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
LAB_00d59874:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x5d430830), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d59874;
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




void FUN_00d598e4(long param_1,undefined4 param_2)

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
LAB_00d59950:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x6f2e08f2), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d59950;
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




void FUN_00d599c0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x60) != 0)) && (*(long *)(param_1 + 0x58) != 0))
  {
    uVar3 = FUN_00d5392c(*(long *)(param_1 + 0x58),param_2);
    thunk_FUN_00d9ff34(local_40,uVar3);
    FUN_00d6c7a0(0,*(undefined8 *)(param_1 + 0x60),PTR_s_onPreAbilityTriggeredClient_02bed5b0,
                 local_40[0],param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d59a60(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

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
LAB_00d59ad8:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x5d1d082f), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2,param_3,param_4 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d59ad8;
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




void FUN_00d59b54(long param_1,undefined4 param_2,undefined4 param_3)

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
LAB_00d59bc8:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x6f0608f1), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d59bc8;
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




void FUN_00d59c40(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0xffff0000;
  lVar2 = param_1;
LAB_00d59ca8:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x4ad10727), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d59ca8;
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




float FUN_00d59d18(long param_1,long param_2,int param_3,uint param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = 0.0;
  if ((param_4 & 1) != 0) {
    fVar2 = *(float *)(param_2 + 0x10);
    fVar3 = (float)(param_3 + -1);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (param_3 != 5) {
      fVar2 = 0.0;
    }
    fVar2 = *(float *)(param_2 + 8) + fVar3 * *(float *)(param_2 + 0xc) + fVar2 + 0.0;
  }
  if ((param_4 >> 5 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x240) + 1.0) *
            (*(float *)(lVar1 + 0xd8) +
            *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0));
    if (DAT_031a9650 <= fVar3) {
      fVar3 = DAT_031a9650;
    }
    fVar4 = DAT_031a9590;
    if (DAT_031a9590 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar3 = (float)(int)(fVar4 + -1.0);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x20) * fVar3;
  }
  if ((param_4 >> 1 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
            (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0)
            );
    if (DAT_031a95c0 <= fVar3) {
      fVar3 = DAT_031a95c0;
    }
    fVar4 = (float)DAT_031a9500;
    if ((float)DAT_031a9500 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * fVar4;
  }
  if ((param_4 >> 2 & 1) != 0) {
    fVar2 = fVar2 + *(float *)(param_2 + 0x18) * *(float *)(*(long *)(param_1 + 0x40) + 0xfc);
  }
  if ((param_4 >> 3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b4) + 1.0) *
            (*(float *)(lVar1 + 0x4c) +
            *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0));
    if (DAT_031a95c4 <= fVar3) {
      fVar3 = DAT_031a95c4;
    }
    fVar4 = DAT_031a9500._4_4_;
    if (DAT_031a9500._4_4_ <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x14) * fVar4;
  }
  if ((param_4 >> 4 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    fVar3 = (*(float *)(lVar1 + 0x1b8) + 1.0) *
            (*(float *)(lVar1 + 0x50) +
            *(float *)(lVar1 + 0x104) * (*(float *)(lVar1 + 0x26c) + 1.0));
    if (DAT_031a95c8 <= fVar3) {
      fVar3 = DAT_031a95c8;
    }
    fVar4 = DAT_031a9508;
    if (DAT_031a9508 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar2 = fVar2 + *(float *)(param_2 + 0x1c) * fVar4;
  }
  if (((param_4 >> 6 & 1) != 0) && (fVar2 <= *(float *)(param_2 + 0x24))) {
    fVar2 = *(float *)(param_2 + 0x24);
  }
  if ((param_4 >> 7 & 1) != 0) {
    if (*(float *)(param_2 + 0x24) <= fVar2) {
      fVar2 = *(float *)(param_2 + 0x24);
    }
    return fVar2;
  }
  return fVar2;
}




void FUN_00d59f54(void)

{
  FUN_00d090c4();
  return;
}




undefined4 FUN_00d59f5c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d54898(*(undefined8 *)(param_1 + 0x58));
  return *(undefined4 *)(lVar1 + 0x14);
}




void FUN_00d59f78(long param_1)

{
  FUN_00d5454c(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d59f80(long param_1)

{
  FUN_00d54564(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d59f88(long param_1)

{
  FUN_00d545b8(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d59f90(long param_1)

{
  FUN_00d545c8(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d59f98(long param_1)

{
  FUN_00d53b5c(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d59fa0(long param_1)

{
  FUN_00d53ba4(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d59fa8(long param_1)

{
  FUN_00d545d8(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d59fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_00d54450(*(undefined8 *)(param_1 + 0x58));
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0xffff0000;
  lVar2 = param_1;
LAB_00d5a02c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x647c0866), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_00d5a02c;
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

