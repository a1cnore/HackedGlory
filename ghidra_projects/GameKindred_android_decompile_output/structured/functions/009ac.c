// functions/009ac — 32 functions
#include "libGameKindred.h"




void FUN_009ac044(long param_1)

{
  FUN_009abe58(param_1 + -0x28);
  return;
}




void FUN_009ac04c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_009abee4(*(undefined4 *)(param_2 + 0x24),param_1,param_2 + 0x20,
                       *(undefined1 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x5c),
                       *(undefined1 *)(param_2 + 0x66),*(undefined4 *)(param_2 + 0x60),
                       *(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                       *(undefined1 *)(param_2 + 0x68));
  if (lVar1 != 0) {
    FUN_009d373c(lVar1,*(undefined8 *)(param_1 + 0x10),param_3,*(undefined1 *)(param_2 + 100));
    FUN_009abd48(lVar1,param_2);
    return;
  }
  return;
}




void FUN_009ac0e0(long param_1)

{
  FUN_009ac04c(param_1 + -0x28);
  return;
}




void FUN_009ac0e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_009abee4(*(undefined4 *)(param_2 + 0x24),param_1,param_2 + 0x20,
                         *(undefined1 *)(param_2 + 0x65),*(undefined4 *)(param_2 + 0x5c),
                         *(undefined1 *)(param_2 + 0x66),*(undefined4 *)(param_2 + 0x60),
                         *(undefined4 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                         *(undefined1 *)(param_2 + 0x68));
    if (lVar1 != 0) {
      FUN_009d3840(lVar1,*(undefined8 *)(param_1 + 0x10),param_3,*(undefined1 *)(param_2 + 100));
      FUN_009abd48(lVar1,param_2);
      return;
    }
  }
  return;
}




void FUN_009ac184(long param_1)

{
  FUN_009ac0e8(param_1 + -0x28);
  return;
}




void FUN_009ac18c(long param_1,undefined4 param_2)

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
LAB_009ac1f8:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x2af3056d), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ac1f8;
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




void FUN_009ac268(long param_1)

{
  FUN_009ac18c(param_1 + -0x28);
  return;
}




void FUN_009ac270(long param_1,undefined4 param_2)

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
LAB_009ac2dc:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x29d80553), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ac2dc;
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




void FUN_009ac34c(long param_1)

{
  FUN_009ac270(param_1 + -0x28);
  return;
}




void FUN_009ac354(long param_1,undefined4 param_2)

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
LAB_009ac3c0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x35830610), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ac3c0;
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




void FUN_009ac430(long param_1)

{
  FUN_009ac354(param_1 + -0x28);
  return;
}




void FUN_009ac438(float param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_2;
LAB_009ac4ac:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_2) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x3d56066a), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))((double)param_1,lVar3,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ac4ac;
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




void FUN_009ac524(long param_1)

{
  FUN_009ac438(param_1 + -0x28);
  return;
}




void FUN_009ac52c(long param_1,undefined4 param_2,undefined8 param_3)

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
LAB_009ac5a0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x456706e0), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ac5a0;
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




void FUN_009ac618(long param_1)

{
  FUN_009ac52c(param_1 + -0x28);
  return;
}




long FUN_009ac620(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long *param_5)

{
  long lVar1;
  
  lVar1 = FUN_01985d44(*(undefined8 *)(param_2 + 0x10),DAT_0312ebb0);
  if (lVar1 != 0) {
    if (param_5 != (long *)0x0) {
      param_3 = (**(code **)(*param_5 + 0x10))(param_5,param_3);
    }
    FUN_009dbd5c(param_1,lVar1,param_3,param_4 & 1,0,0);
    FUN_009dbea4(lVar1);
  }
  return lVar1;
}




long FUN_009ac6b8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4,uint param_5,
                 undefined4 param_6,ulong param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_7 & 1) == 0) {
    FUN_00d55794(*(undefined8 *)(param_2 + 0x10),auStack_78,0);
    uVar3 = FUN_009bbfb0();
    lVar2 = FUN_01985d44(uVar3,DAT_0312ebc0);
    if (lVar2 == 0) goto LAB_009ac7b4;
    FUN_009db344(lVar2,auStack_78);
  }
  else {
    lVar2 = FUN_01985d44(*(undefined8 *)(param_2 + 0x10),DAT_0312ebc0);
    if (lVar2 == 0) goto LAB_009ac7b4;
  }
  if (param_8 != (long *)0x0) {
    param_3 = (**(code **)(*param_8 + 0x10))(param_8,param_3);
  }
  FUN_009db1ac(param_1,lVar2,param_3,param_4 & 1,0,0,param_5 & 1,param_6);
  if ((param_7 & 1) != 0) {
    FUN_009db358(lVar2,*(undefined8 *)(param_2 + 0x10));
  }
  FUN_009db36c(lVar2);
LAB_009ac7b4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ac7f0(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_258 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01985cbc(*(undefined8 *)(param_1 + 0x10),local_258,0x40,DAT_0312ebc0);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      uVar4 = local_258[uVar5];
      iVar3 = FUN_009db468(uVar4);
      if (iVar3 == param_2) {
        FUN_009db42c(uVar4);
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009ac8a0(long param_1)

{
  FUN_009ac7f0(param_1 + -0x28);
  return;
}




void FUN_009ac8a8(long param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_40 [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 0x88);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 == 0) goto LAB_009ac964;
      plVar3 = *(long **)(param_1 + 0x88);
      uVar5 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_1 + 0x90) == (int)plVar3[1]) {
          uVar5 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x88) = 0;
          uVar5 = 0;
          *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
        }
      }
      FUN_01985ca8(uVar5);
      uVar7 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      uVar7 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x90) = uVar7;
  }
LAB_009ac964:
  if (param_2 == (byte *)0x0) {
    local_40[0] = 0;
  }
  else {
    uVar8 = (uint)*param_2;
    local_40[0] = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        local_40[0] = (local_40[0] ^ uVar8) * 0x1000193;
        uVar8 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  lVar4 = FUN_009abee4(0xbf800000,param_1,local_40,1,1,0,0,0xffffffff,
                       *(undefined8 *)(param_1 + 0x80),0);
  uVar7 = DAT_03214ce8;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = uVar7;
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x48);
    *(long **)(param_1 + 0x88) = (long *)(lVar4 + 0x40);
    *(int *)(param_1 + 0x90) = iVar1;
    if (iVar1 == *(int *)(lVar4 + 0x48)) {
      lVar4 = (**(code **)(*(long *)(lVar4 + 0x40) + 0x10))();
      if (lVar4 != 0) {
        plVar3 = *(long **)(param_1 + 0x88);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        uVar5 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar3[1]) {
            uVar5 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x88) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
          }
        }
        FUN_009d3654(uVar5,uVar9,1);
        uVar8 = *(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
        if (((uVar8 != 0x1f) &&
            (*(short *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 0x38 + 0x90) == 2)) &&
           (uVar6 = FUN_009ab4f0(param_1), (uVar6 & 1) != 0)) {
          plVar3 = *(long **)(param_1 + 0x88);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x88) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
            }
          }
          FUN_009d33ec(uVar5);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = uVar7;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009acb20(long param_1)

{
  FUN_009ac8a8(param_1 + -0x28);
  return;
}




void FUN_009acb28(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      plVar1 = *(long **)(param_1 + 0x88);
      uVar3 = 0;
      if (plVar1 != (long *)0x0) {
        if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
          uVar3 = (**(code **)(*plVar1 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x88) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
        }
      }
      FUN_01985ca8(uVar3);
      uVar4 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      uVar4 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x90) = uVar4;
  }
  return;
}




void FUN_009acbd8(long param_1)

{
  FUN_009acb28(param_1 + -0x28);
  return;
}




void FUN_009acbe0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

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
LAB_009acc60:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x363b0618), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2,param_3,param_4,param_5);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009acc60;
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




void FUN_009acce4(long param_1)

{
  FUN_009acbe0(param_1 + -0x28);
  return;
}




void FUN_009accec(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_01988738(DAT_0312e88c,0);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = FUN_009a8678(uVar2);
    FUN_009a669c(uVar3,param_1,lVar1,uVar2,*(uint *)(param_2 + 0x9c) >> 8 & 1);
    *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) ^ 0x100;
  }
  return;
}




void FUN_009acd68(long param_1)

{
  FUN_009accec(param_1 + -0x28);
  return;
}




void FUN_009acd70(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  int iVar1;
  long lVar2;
  char *__s1;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar2 = FUN_01988738(DAT_0312e88c,0);
  if (lVar2 != 0) {
    __s1 = (char *)FUN_00d5baf8(lVar4);
    iVar1 = strcmp(__s1,"Dying");
    if (iVar1 != 0) {
      uVar5 = FUN_009a8678(lVar4);
      FUN_009a6da8(uVar5,param_1,lVar2,lVar4,param_3,param_4,param_5 & 1,
                   *(uint *)(param_2 + 0x9c) >> 8 & 1);
      *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) ^ 0x100;
    }
  }
  uVar3 = FUN_00ced270(*(undefined4 *)(lVar4 + 0x260));
  if ((uVar3 & 1) != 0) {
    lVar2 = *(long *)(lVar4 + 0x40);
    fVar6 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
            (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0)
            );
    if (DAT_0312ea20 <= fVar6) {
      fVar6 = DAT_0312ea20;
    }
    fVar7 = DAT_0312e960;
    if (DAT_0312e960 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar6 = (float)NEON_fminnm(ABS((float)param_1) / fVar7,0x3f800000);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    FUN_009bbfb0();
    FUN_009bd5c8();
    FUN_009b85e4(fVar6 * fVar6 * 0.3 + (1.0 - fVar6 * fVar6) * 0.025,0x3ecccccd,0x41f00000);
    return;
  }
  return;
}




void FUN_009acee0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  FUN_009acd70(param_1 + -0x28,param_2,param_3,param_4 & 1);
  return;
}




void FUN_009aceec(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [52];
  undefined4 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_01988738(DAT_0312e88c,0);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    if (((DAT_0312e938 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0312e938), iVar2 != 0)) {
      DAT_0312e930 = 0x3e3270a0;
      __cxa_guard_release(&DAT_0312e938);
    }
    FUN_00d58298(uVar4,&DAT_0312e930,auStack_78);
    FUN_009a7638(local_44,param_1,lVar3,uVar4,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009acfd0(long param_1)

{
  FUN_009aceec(param_1 + -0x28);
  return;
}




void FUN_009acfd8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (((*(byte *)(lVar3 + 0x2f4) & 1) != 0) && (lVar2 = FUN_01988738(DAT_0312e88c,0), lVar2 != 0)) {
    uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1a4);
    uVar1 = FUN_00ced270(*(undefined4 *)(lVar3 + 0x260));
    FUN_009a7bf8(uVar4,lVar2,lVar3,uVar1 & 1);
    return;
  }
  return;
}

