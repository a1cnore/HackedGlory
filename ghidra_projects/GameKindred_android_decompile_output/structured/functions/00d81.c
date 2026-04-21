// functions/00d81 — 39 functions
#include "libGameKindred.h"




void thunk_FUN_00d8194c(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_01988c78();
  fVar5 = fVar5 + *(float *)(param_1 + 200);
  *(float *)(param_1 + 200) = fVar5;
  if (*(float *)(param_1 + 0xcc) < fVar5) {
    FUN_00d81b28(param_1);
    FUN_01985ca8(param_1);
    return;
  }
  plVar2 = *(long **)(param_1 + 0xd8);
  if (plVar2 == (long *)0x0) goto LAB_00d81a40;
  if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (lVar3 == 0) goto LAB_00d81a40;
    plVar2 = *(long **)(param_1 + 0xd8);
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0xd8) = 0;
        lVar3 = 0;
        *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
      }
    }
    uVar4 = DAT_03214ce8;
    uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3))
    goto LAB_00d81a40;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    uVar4 = DAT_03214ce8;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
LAB_00d81a40:
  if ((*(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x90)) ||
     (*(float *)(param_1 + 0x90) == 0.0)) {
    fVar6 = *(float *)(param_1 + 0x8c);
    fVar5 = (float)FUN_01988c78();
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + fVar6 * fVar5;
  }
  FUN_00d811fc(param_1);
  FUN_00d81b84(param_1);
  FUN_00d81be4(param_1);
  return;
}




void thunk_FUN_00d81aa8(long param_1)

{
  if ((*(char *)(param_1 + 0xd1) != '\0') && (*(char *)(param_1 + 0xd0) == '\0')) {
    FUN_00d81c40(param_1);
    *(undefined1 *)(param_1 + 0xd1) = 0;
  }
  if (*(char *)(param_1 + 0xd2) != '\0') {
    if (*(char *)(param_1 + 0xd0) != '\0') goto LAB_00d81af8;
    FUN_00d81c9c(param_1);
    *(undefined1 *)(param_1 + 0xd2) = 0;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return;
  }
LAB_00d81af8:
  if (*(char *)(param_1 + 0xd4) != '\0') {
    FUN_00d80f68(param_1);
    FUN_00d5e6bc();
  }
  FUN_01985ca8(param_1);
  return;
}




undefined8 FUN_00d81070(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0xa8);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
      uVar3 = (**(code **)(*plVar1 + 0x10))();
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = DAT_03214ce8;
  return 0;
}




undefined8 FUN_00d810f4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0xd8);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      uVar3 = (**(code **)(*plVar1 + 0x10))();
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
  return 0;
}




undefined8 FUN_00d81178(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
    if (lVar2 == 0) {
      return 0;
    }
    plVar1 = *(long **)(param_1 + 0xd8);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      uVar3 = (**(code **)(*plVar1 + 0x10))();
      return uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
  return 0;
}




void FUN_00d811fc(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0xd8);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        if ((*(int *)(param_1 + 0xe8) == 0) || (*(int *)(param_1 + 0xe8) != 1)) {
          plVar3 = *(long **)(param_1 + 0xd8);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0xe0) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0xd8) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
            }
          }
          FUN_00d55794(uVar5,param_1 + 0xec,0);
        }
        else {
          if (((DAT_031aa250 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031aa250), iVar2 != 0))
          {
            DAT_031aa248 = 0x3e3270a0;
            __cxa_guard_release(&DAT_031aa250);
          }
          plVar3 = *(long **)(param_1 + 0xd8);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0xe0) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0xd8) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
            }
          }
          FUN_00d58298(uVar5,&DAT_031aa248,auStack_68);
          *(undefined8 *)(param_1 + 0xec) = local_38;
          *(undefined4 *)(param_1 + 0xf4) = local_30;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d81380(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  FUN_00d811fc();
  return;
}




long FUN_00d81388(long param_1)

{
  return param_1 + 0xec;
}




void FUN_00d81390(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0xec) = *param_2;
  return;
}




undefined1 FUN_00d813b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}




undefined4 FUN_00d813c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}




void FUN_00d813c8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xf8) = param_1;
  return;
}




void FUN_00d813d0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_031aa258) goto LAB_00d81444;
    }
    local_38 = *(undefined8 *)(param_1 + 0x6c);
    local_30 = *(undefined4 *)(param_1 + 0x74);
    lVar3 = FUN_01985d44(param_1);
    if (lVar3 != 0) {
      FUN_00d823d8(lVar3,&local_38);
    }
  }
LAB_00d81444:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d81468(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    for (lVar2 = *(long *)(param_1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_031aa258) {
        FUN_01985da0(param_1);
        return;
      }
    }
  }
  return;
}




void FUN_00d814c4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_00d815a4(param_1,*(undefined4 *)(param_2 + 0x260));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x100) != 0) {
      plVar3 = (long *)(*(long *)(param_1 + 0x100) + -8);
      while ((plVar3 != (long *)0x0 && (*(char *)(param_1 + 0xd0) == '\0'))) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
    }
    FUN_00d81628(param_1,param_2);
  }
  if (((*(char *)(param_1 + 0xd0) == '\0') && (*(long *)(param_1 + 0x100) != 0)) &&
     (plVar3 = (long *)(*(long *)(param_1 + 0x100) + -8), plVar3 != (long *)0x0)) {
    do {
      (**(code **)(*plVar3 + 0x20))(plVar3,param_1,param_2);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    } while ((plVar3 != (long *)0x0) && (*(char *)(param_1 + 0xd0) == '\0'));
  }
  return;
}




undefined8 FUN_00d815a4(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0xc0) != 0) && (uVar2 = FUN_00d5ef64(), (int)uVar2 != 0)) {
    uVar4 = 0;
    do {
      lVar3 = FUN_00d5eebc(*(undefined8 *)(param_1 + 0xc0),uVar4);
      if ((lVar3 != 0) &&
         (lVar3 = FUN_00d5eebc(*(undefined8 *)(param_1 + 0xc0),uVar4),
         *(int *)(lVar3 + 0x260) == param_2)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar1 = FUN_00d5ef64(*(undefined8 *)(param_1 + 0xc0));
    } while (uVar4 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00d81628(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    lVar1 = FUN_01985d44(param_1,DAT_031a94d0);
    *(long *)(param_1 + 0xc0) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  uVar2 = FUN_00d815a4(param_1,*(undefined4 *)(param_2 + 0x260));
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00d5ee28(*(undefined8 *)(param_1 + 0xc0),param_2);
  return;
}




void FUN_00d8168c(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    uVar4 = 0x10000;
    lVar2 = param_1;
LAB_00d816fc:
    do {
      do {
        lVar3 = lVar2;
        if ((lVar3 != param_1) &&
           (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x2ffd05a3), lVar2 != 0)) {
          (**(code **)(lVar2 + 8))(lVar3,param_1 + 0x3c);
        }
        if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
          uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
          goto LAB_00d816fc;
        }
        if ((uVar4 & 0xffff) == 0) goto LAB_00d81758;
        lVar2 = *(long *)(lVar3 + 0x20);
      } while (*(long *)(lVar3 + 0x20) != 0);
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((lVar3 == 0) || (uVar1 = uVar4 - 1 & 0xffff, uVar1 == 0)) break;
      uVar4 = uVar1 | uVar4 & 0xffff0000;
      while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
        if ((uVar4 - 1 & 0xffff) == 0) goto LAB_00d81758;
        lVar3 = *(long *)(lVar3 + 0x10);
        uVar4 = uVar4 & 0xffff0000 | uVar4 - 1 & 0xffff;
        if (lVar3 == 0) goto LAB_00d81758;
      }
    } while( true );
  }
LAB_00d81758:
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}




void FUN_00d81774(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd3) = param_2 & 1;
  return;
}




undefined1 FUN_00d81780(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd3);
}




void FUN_00d81788(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d80f68();
  FUN_00d5e4fc(uVar1,param_1,0);
  *(undefined1 *)(param_1 + 0xd4) = 1;
  return;
}




void FUN_00d817bc(long param_1)

{
  *(undefined1 *)(param_1 + 0xd5) = 1;
  return;
}




undefined1 FUN_00d817c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd5);
}




void FUN_00d817d0(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_01985ca8();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}




undefined8 FUN_00d817fc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0xd8);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xe0) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0xd8) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
          }
        }
        uVar3 = FUN_009bc0fc(uVar3);
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
    }
  }
  return 1;
}




undefined8 FUN_00d818a4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0xa8);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xb0) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0xa8) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0xb0) = DAT_03214ce8;
          }
        }
        uVar3 = FUN_009bc0fc(uVar3);
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xb0) = DAT_03214ce8;
    }
  }
  return 1;
}




void FUN_00d8194c(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_01988c78();
  fVar5 = fVar5 + *(float *)(param_1 + 200);
  *(float *)(param_1 + 200) = fVar5;
  if (*(float *)(param_1 + 0xcc) < fVar5) {
    FUN_00d81b28(param_1);
    FUN_01985ca8(param_1);
    return;
  }
  plVar2 = *(long **)(param_1 + 0xd8);
  if (plVar2 == (long *)0x0) goto LAB_00d81a40;
  if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (lVar3 == 0) goto LAB_00d81a40;
    plVar2 = *(long **)(param_1 + 0xd8);
    lVar3 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_1 + 0xe0) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0xd8) = 0;
        lVar3 = 0;
        *(undefined4 *)(param_1 + 0xe0) = DAT_03214ce8;
      }
    }
    uVar4 = DAT_03214ce8;
    uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3))
    goto LAB_00d81a40;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    uVar4 = DAT_03214ce8;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
LAB_00d81a40:
  if ((*(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x90)) ||
     (*(float *)(param_1 + 0x90) == 0.0)) {
    fVar6 = *(float *)(param_1 + 0x8c);
    fVar5 = (float)FUN_01988c78();
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + fVar6 * fVar5;
  }
  FUN_00d811fc(param_1);
  FUN_00d81b84(param_1);
  FUN_00d81be4(param_1);
  return;
}




void FUN_00d81aa8(long param_1)

{
  if ((*(char *)(param_1 + 0xd1) != '\0') && (*(char *)(param_1 + 0xd0) == '\0')) {
    FUN_00d81c40(param_1);
    *(undefined1 *)(param_1 + 0xd1) = 0;
  }
  if (*(char *)(param_1 + 0xd2) != '\0') {
    if (*(char *)(param_1 + 0xd0) != '\0') goto LAB_00d81af8;
    FUN_00d81c9c(param_1);
    *(undefined1 *)(param_1 + 0xd2) = 0;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return;
  }
LAB_00d81af8:
  if (*(char *)(param_1 + 0xd4) != '\0') {
    FUN_00d80f68(param_1);
    FUN_00d5e6bc();
  }
  FUN_01985ca8(param_1);
  return;
}




void FUN_00d81b28(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
    while ((plVar2 != (long *)0x0 && (*(char *)(param_1 + 0xd0) == '\0'))) {
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d81b84(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x118);
  if (plVar2 != (long *)0x0) {
    FUN_01988c78();
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    if (iVar1 == 2) {
      *(undefined1 *)(param_1 + 0xd2) = 1;
    }
    else if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0xd1) = 1;
    }
  }
  return;
}




void FUN_00d81be4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x100) + -8);
    while ((puVar2 != (undefined8 *)0x0 && (*(char *)(param_1 + 0xd0) == '\0'))) {
      (**(code **)*puVar2)(puVar2,param_1);
      plVar1 = puVar2 + 1;
      puVar2 = (undefined8 *)0x0;
      if (*plVar1 != 0) {
        puVar2 = (undefined8 *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d81c40(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
    while ((plVar2 != (long *)0x0 && (*(char *)(param_1 + 0xd0) == '\0'))) {
      (**(code **)(*plVar2 + 8))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d81c9c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x100) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x100) + -8);
    while ((plVar2 != (long *)0x0 && (*(char *)(param_1 + 0xd0) == '\0'))) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00d81cf8(undefined8 *param_1,float *param_2,float *param_3)

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
  
  fVar3 = DAT_03218f80;
  fVar2 = DAT_03218f7c;
  fVar1 = DAT_03218f78;
  fVar6 = DAT_03218f7c * param_2[2] - DAT_03218f80 * param_2[1];
  fVar7 = DAT_03218f80 * *param_2 - DAT_03218f78 * param_2[2];
  fVar10 = DAT_03218f78 * param_2[1] - DAT_03218f7c * *param_2;
  fVar5 = fVar10 * fVar10 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar8 = DAT_03218f68._4_4_;
  fVar9 = (float)DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= fVar5) {
    fVar4 = SQRT(fVar5);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar5);
    }
    fVar8 = fVar7 / fVar4;
    fVar9 = fVar6 / fVar4;
    fVar4 = fVar10 / fVar4;
  }
  fVar11 = fVar3 * fVar8 - fVar2 * fVar4;
  fVar7 = fVar1 * fVar4 - fVar3 * fVar9;
  fVar10 = fVar2 * fVar9 - fVar1 * fVar8;
  fVar6 = fVar10 * fVar10 + fVar11 * fVar11 + fVar7 * fVar7;
  fVar5 = SQRT(fVar6);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar6);
  }
  fVar6 = *(float *)(param_1 + 1);
  *(undefined8 *)(param_3 + 0xc) = *param_1;
  *param_3 = fVar9;
  param_3[1] = fVar8;
  param_3[4] = fVar1;
  param_3[5] = fVar2;
  param_3[2] = fVar4;
  param_3[6] = fVar3;
  param_3[3] = 0.0;
  param_3[7] = 0.0;
  param_3[0xb] = 0.0;
  param_3[8] = fVar11 / fVar5;
  param_3[9] = fVar7 / fVar5;
  param_3[10] = fVar10 / fVar5;
  param_3[0xe] = fVar6;
  param_3[0xf] = 1.0;
  return;
}




void FUN_00d81e78(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00d81178();
  if (lVar2 != param_2) {
    return;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(long *)(param_1 + 0xd8) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  FUN_00d811fc(param_1);
  return;
}




void FUN_00d81ed4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e970;
  param_1[5] = &PTR_FUN_0281e9a0;
  FUN_00d8204c(param_1 + 0x20);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d81f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281e970;
  param_1[5] = &PTR_FUN_0281e9a0;
  FUN_00d8204c(param_1 + 0x20);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d81f74(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_0281e970;
  *param_1 = &PTR_FUN_0281e9a0;
  FUN_00d8204c(param_1 + 0x1b);
  FUN_0198931c(param_1);
  FUN_01985bd0(param_1 + -5);
  return;
}




void FUN_00d81fbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_0281e970;
  *param_1 = &PTR_FUN_0281e9a0;
  FUN_00d8204c(param_1 + 0x1b);
  FUN_0198931c(param_1);
  FUN_01985bd0(puVar1);
  operator_delete(puVar1);
  return;
}

