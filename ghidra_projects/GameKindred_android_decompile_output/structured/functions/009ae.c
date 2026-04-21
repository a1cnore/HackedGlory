// functions/009ae — 17 functions
#include "libGameKindred.h"




void FUN_009ae004(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_2;
  FUN_00d58298(*(undefined8 *)(param_1 + -0x20),local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ae054(long param_1,undefined8 param_2)

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
LAB_009ae0c0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x11a60336), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ae0c0;
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




void FUN_009ae130(long param_1,uint param_2)

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
LAB_009ae19c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0xb0d0275), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3,param_2 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ae19c;
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




void thunk_FUN_009ae210(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar4 + 0x303) & 1) == 0) {
      uVar1 = FUN_00d9ef9c(lVar4);
      if (((((uVar1 & 1) == 0) && (uVar2 = *(ushort *)(lVar4 + 0x88) & 0x1f, uVar2 != 0x1f)) &&
          (*(short *)(lVar4 + (ulong)uVar2 * 0x38 + 0x90) == 2)) &&
         ((uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc), (uVar3 & 1) == 0 &&
          (uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8d8), (uVar3 & 1) != 0))))
      {
        uVar5 = *(undefined8 *)(param_1 + 0x58);
        FUN_009a9784(param_1);
        FUN_009b28f0(uVar5,&DAT_0312e8d8,0,1,"MoveToFromBrush");
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8c0);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8), (uVar3 & 1) == 0)) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8c0);
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8d4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
        if (((uVar1 | uVar2) & 1) == 0) {
          FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4);
        }
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e8);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
        if (((uVar1 | uVar2) & 1) == 0) {
          FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e8);
        }
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8f4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
        if (((uVar1 | uVar2) & 1) == 0) {
          FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f4);
          return;
        }
      }
    }
  }
  return;
}




void FUN_009ae210(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar4 + 0x303) & 1) == 0) {
      uVar1 = FUN_00d9ef9c(lVar4);
      if (((((uVar1 & 1) == 0) && (uVar2 = *(ushort *)(lVar4 + 0x88) & 0x1f, uVar2 != 0x1f)) &&
          (*(short *)(lVar4 + (ulong)uVar2 * 0x38 + 0x90) == 2)) &&
         ((uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc), (uVar3 & 1) == 0 &&
          (uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8d8), (uVar3 & 1) != 0))))
      {
        uVar5 = *(undefined8 *)(param_1 + 0x58);
        FUN_009a9784(param_1);
        FUN_009b28f0(uVar5,&DAT_0312e8d8,0,1,"MoveToFromBrush");
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8c0);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8), (uVar3 & 1) == 0)) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8c0);
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8d4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
        if (((uVar1 | uVar2) & 1) == 0) {
          FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4);
        }
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e8);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
        if (((uVar1 | uVar2) & 1) == 0) {
          FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e8);
        }
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8f4);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
        if (((uVar1 | uVar2) & 1) == 0) {
          FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f4);
          return;
        }
      }
    }
  }
  return;
}




void thunk_FUN_009ae3fc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar3 + 0x303) & 1) == 0) {
      uVar2 = FUN_00d9ef9c(lVar3);
      if (((((uVar2 & 1) == 0) && (uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f)) &&
          (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 2)) &&
         ((uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4),
          (uVar2 & 1) != 0 &&
          (uVar2 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8dc), (uVar2 & 1) != 0))))
      {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        FUN_009a9784(param_1);
        FUN_009b28f0(uVar4,&DAT_0312e8dc,0,1,"MoveToFromBrush");
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8c0);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8);
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e8);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f4);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
        return;
      }
    }
  }
  return;
}




void FUN_009ae3fc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar3 + 0x303) & 1) == 0) {
      uVar2 = FUN_00d9ef9c(lVar3);
      if (((((uVar2 & 1) == 0) && (uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f)) &&
          (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 2)) &&
         ((uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4),
          (uVar2 & 1) != 0 &&
          (uVar2 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8dc), (uVar2 & 1) != 0))))
      {
        uVar4 = *(undefined8 *)(param_1 + 0x58);
        FUN_009a9784(param_1);
        FUN_009b28f0(uVar4,&DAT_0312e8dc,0,1,"MoveToFromBrush");
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8c0);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8);
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e8);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
      }
      uVar2 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f4);
      if ((uVar2 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
        return;
      }
    }
  }
  return;
}




void FUN_009ae580(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  FUN_009ad95c();
  if (param_1 == 0) {
    return;
  }
  uVar4 = 0x10000;
  lVar2 = param_1;
LAB_009ae5ec:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0xdc302c4), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ae5ec;
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




void FUN_009ae658(long param_1)

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
LAB_009ae6c0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_1) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x163803be), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))(lVar3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ae6c0;
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




void FUN_009ae72c(float param_1,long param_2,undefined8 param_3)

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
LAB_009ae7a0:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_2) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x22ef04a2), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))((double)param_1,lVar3,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ae7a0;
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




void FUN_009ae818(long param_1)

{
  FUN_009ae72c(param_1 + -0x28);
  return;
}




void FUN_009ae820(float param_1,long param_2,undefined8 param_3)

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
LAB_009ae894:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_2) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x22450493), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))((double)param_1,lVar3,param_3);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ae894;
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




void FUN_009ae90c(float param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

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
LAB_009ae98c:
  do {
    do {
      lVar3 = lVar2;
      if ((lVar3 != param_2) &&
         (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x3be20659), lVar2 != 0)) {
        (**(code **)(lVar2 + 8))((double)param_1,lVar3,param_3 & 1,param_4,param_5 & 1);
      }
      if (((uVar4 & 0xffff) < uVar4 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
        uVar4 = uVar4 & 0xffff0000 | uVar4 + 1 & 0xffff;
        goto LAB_009ae98c;
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




void FUN_009aea10(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
        if (((uVar1 != 0x1f) &&
            (*(short *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x38 + 0x90) == 2)) &&
           (uVar4 = FUN_009ab4f0(param_1), (uVar4 & 1) != 0)) {
          plVar2 = *(long **)(param_1 + 0x88);
          uVar5 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
              uVar5 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x88) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
            }
          }
          FUN_009d33ec(uVar5);
          return;
        }
        plVar2 = *(long **)(param_1 + 0x88);
        uVar5 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar2[1]) {
            uVar5 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x88) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
          }
        }
        FUN_009d341c(uVar5);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_009aeb38(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = FUN_00d9ef9c(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar3 = FUN_009b3348(*(long *)(param_1 + 0x58),&DAT_0312e8b8);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8c0),
       (uVar3 & 1) != 0)) {
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8bc);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8c0);
        if ((uVar3 & 1) != 0) {
          FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8);
        }
      }
      else {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8bc);
      }
    }
    uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4),
       (uVar3 & 1) != 0)) {
      uVar2 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8d0);
      if (((uVar1 | uVar2 ^ 0xffffffff) & 1) == 0) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d0);
      }
      else {
        uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4);
        if ((uVar3 & 1) != 0) {
          FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
        }
      }
    }
    uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e8),
       (uVar3 & 1) != 0)) {
      uVar2 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e4);
      if (((uVar1 | uVar2 ^ 0xffffffff) & 1) == 0) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e4);
      }
      else {
        uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e8);
        if ((uVar3 & 1) != 0) {
          FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
        }
      }
    }
    uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f4),
       (uVar3 & 1) != 0)) {
      uVar2 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8f0);
      if (((uVar1 | uVar2 ^ 0xffffffff) & 1) == 0) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f0);
        return;
      }
      uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f4);
      if ((uVar3 & 1) != 0) {
        FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
        return;
      }
    }
  }
  return;
}




void FUN_009aeda0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x10) + 0x88) & 0x1f;
  if (((uVar1 == 0x1f) ||
      (1 < *(ushort *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
     (uVar3 = FUN_009b2f10(*(long *)(param_1 + 0x58),&DAT_0312e920), (uVar3 & 1) == 0)) {
    if ((*(uint *)(param_1 + 0x9c) >> 0x18 & 1) == 0) {
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8fc);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8fc), (uVar3 & 1) != 0))
      goto LAB_009aedf8;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      FUN_009a9784(param_1);
      puVar4 = (undefined4 *)&DAT_0312e8fc;
      pcVar5 = "IdleSheathToIdle";
    }
    else {
      if (((DAT_0312e948 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0312e948), iVar2 != 0)) {
        DAT_0312e940 = DAT_0312e8f8;
        __cxa_guard_release(&DAT_0312e948);
      }
      uVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e940);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e940), (uVar3 & 1) != 0))
      goto LAB_009aedf8;
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      FUN_009a9784(param_1);
      puVar4 = &DAT_0312e8f8;
      pcVar5 = "MoveSheathToMove";
    }
    FUN_009b28f0(uVar6,puVar4,0,0,pcVar5);
  }
LAB_009aedf8:
  uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8bc);
  if ((uVar3 & 1) != 0) {
    FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8);
  }
  uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d0);
  if ((uVar3 & 1) != 0) {
    FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
  }
  uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e4);
  if ((uVar3 & 1) != 0) {
    FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
  }
  uVar3 = FUN_009b3438(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  FUN_009b3164(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009aefac(long param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (((DAT_0312e958 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0312e958), iVar2 != 0)) {
    DAT_0312e950 = 0x3e3270a0;
    __cxa_guard_release(&DAT_0312e958);
  }
  if (param_4 - 1U < 6) {
    pbVar8 = (&PTR_s_Effect_Ping_Danger_027c1e50)[(int)(param_4 - 1U)];
    uVar7 = 0x811c9dc5;
    uVar9 = 0x41000000;
    if (param_4 != 3) {
      uVar9 = 0x40800000;
    }
    lVar3 = FUN_00d9e390(param_2);
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    uVar5 = (uint)*pbVar8;
    if (*pbVar8 != 0) {
      do {
        pbVar8 = pbVar8 + 1;
        uVar7 = (uVar7 ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar8;
      } while (*pbVar8 != 0);
    }
    local_b0 = 0xffffffff;
    local_a4 = 0xff000000;
    local_9c = _DAT_03218ef8;
    local_94 = DAT_03218f40;
    local_8c = DAT_03218f48;
    local_ac = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0x10100000000;
    local_70 = 0;
    local_b8 = uVar7;
    local_b4 = uVar9;
    uStack_c0 = FUN_00d5babc(uVar6);
    local_7c = (uint)(lVar3 != 0);
    uVar4 = FUN_00d58234(uVar6,&DAT_0312e950);
    if ((uVar4 & 1) == 0) {
      FUN_00d5a548(uVar6,&local_d8);
    }
    else {
      FUN_00d5a560(uVar6,&local_d8,&DAT_0312e950);
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_009d6334(*(long *)(param_1 + 0x40),param_2,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

