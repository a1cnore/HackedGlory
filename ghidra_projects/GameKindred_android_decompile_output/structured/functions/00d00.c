// functions/00d00 — 43 functions
#include "libGameKindred.h"




void FUN_00d00018(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *param_3 = &PTR_FUN_02811088;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 5) = 0xffffffff;
  *(undefined4 *)((long)param_3 + 0x2c) = 0;
  *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_5 + 1);
  param_3[6] = *param_5;
  return;
}




void FUN_00d0005c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d00064(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce6124(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x28),param_1 + 0x30,
                 *(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_00d000a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    uVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x28));
    FUN_00d57e60(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),lVar1,uVar2,
                 param_1 + 0x30,*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_00d000fc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x40,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811088;
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar1 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d00174(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                 byte param_5)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_1;
  *param_2 = &PTR_FUN_028110c0;
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)(param_4 + 1);
  uVar1 = *param_4;
  *(byte *)(param_2 + 6) = param_5 & 1;
  *(undefined8 *)((long)param_2 + 0x24) = uVar1;
  return;
}




void FUN_00d001b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce5fb0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),param_1 + 0x24,
                 *(undefined1 *)(param_1 + 0x30));
    return;
  }
  return;
}




void FUN_00d001f0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d57ae4(*(undefined4 *)(param_1 + 0x20),lVar1,param_1 + 0x24,
                 *(undefined1 *)(param_1 + 0x30));
    return;
  }
  return;
}




void FUN_00d00234(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028110c0;
  *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)(param_1 + 0x29);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d002ac(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_028110f8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d002cc(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_028110f8;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x260);
  return;
}




void FUN_00d002f8(long param_1)

{
  FUN_00ce99b8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d00304(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long local_6b0 [200];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  lVar5 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
  if ((lVar4 != 0) && (lVar5 != 0)) {
    FUN_019889cc(local_6b0,1,DAT_02e3ef88,0);
    if (local_6b0[0] != 0) {
      uVar3 = 0xffff0000;
      lVar6 = local_6b0[0];
LAB_00d003c8:
      do {
        do {
          lVar7 = lVar6;
          if ((lVar7 != local_6b0[0]) &&
             (lVar6 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x1b0a0423), lVar6 != 0)) {
            (**(code **)(lVar6 + 8))(lVar7,lVar4,lVar5);
          }
          if (((uVar3 & 0xffff) < uVar3 >> 0x10) && (lVar6 = *(long *)(lVar7 + 0x18), lVar6 != 0)) {
            uVar3 = uVar3 & 0xffff0000 | uVar3 + 1 & 0xffff;
            goto LAB_00d003c8;
          }
          if ((uVar3 & 0xffff) == 0) goto LAB_00d00428;
          lVar6 = *(long *)(lVar7 + 0x20);
        } while (*(long *)(lVar7 + 0x20) != 0);
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((lVar7 == 0) || (uVar10 = uVar3 - 1 & 0xffff, uVar10 == 0)) break;
        uVar3 = uVar10 | uVar3 & 0xffff0000;
        while (lVar6 = *(long *)(lVar7 + 0x20), lVar6 == 0) {
          if ((uVar3 - 1 & 0xffff) == 0) goto LAB_00d00428;
          lVar7 = *(long *)(lVar7 + 0x10);
          uVar3 = uVar3 & 0xffff0000 | uVar3 - 1 & 0xffff;
          if (lVar7 == 0) goto LAB_00d00428;
        }
      } while( true );
    }
LAB_00d00428:
    uVar3 = FUN_019889cc(local_6b0,200,DAT_02c09220,0);
    if (uVar3 != 0) {
      uVar9 = 0;
      do {
        lVar6 = local_6b0[uVar9];
        if (lVar6 != 0) {
          uVar10 = 0xffff0000;
          lVar7 = lVar6;
LAB_00d00498:
          do {
            do {
              lVar8 = lVar7;
              if ((lVar8 != lVar6) &&
                 (lVar7 = FUN_019865b4(*(undefined8 *)(lVar8 + 8),0x1b0a0423), lVar7 != 0)) {
                (**(code **)(lVar7 + 8))(lVar8,lVar4,lVar5);
              }
              if (((uVar10 & 0xffff) < uVar10 >> 0x10) &&
                 (lVar7 = *(long *)(lVar8 + 0x18), lVar7 != 0)) {
                uVar10 = uVar10 & 0xffff0000 | uVar10 + 1 & 0xffff;
                goto LAB_00d00498;
              }
              if ((uVar10 & 0xffff) == 0) goto LAB_00d00504;
              lVar7 = *(long *)(lVar8 + 0x20);
            } while (*(long *)(lVar8 + 0x20) != 0);
            lVar8 = *(long *)(lVar8 + 0x10);
            if ((lVar8 == 0) || (uVar1 = uVar10 - 1 & 0xffff, uVar1 == 0)) break;
            uVar10 = uVar1 | uVar10 & 0xffff0000;
            while (lVar7 = *(long *)(lVar8 + 0x20), lVar7 == 0) {
              if ((uVar10 - 1 & 0xffff) == 0) goto LAB_00d00504;
              lVar8 = *(long *)(lVar8 + 0x10);
              uVar10 = uVar10 & 0xffff0000 | uVar10 - 1 & 0xffff;
              if (lVar8 == 0) goto LAB_00d00504;
            }
          } while( true );
        }
LAB_00d00504:
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d0054c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028110f8;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d005bc(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811130;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}




void FUN_00d005dc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ce7518(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d00610(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  uVar3 = FUN_00ceab48();
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20)), lVar4 == 0)) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = 0x10000;
  lVar5 = lVar4;
LAB_00d00690:
  do {
    do {
      lVar6 = lVar5;
      if ((lVar6 != lVar4) &&
         (lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0xe6702e0), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar6,uVar2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d00690;
      }
      if ((uVar7 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar6 + 0x20);
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
    while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
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




void FUN_00d00704(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811130;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d00774(undefined8 *param_1,undefined4 param_2,undefined4 param_3,byte param_4,
                 byte param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(byte *)((long)param_1 + 0x24) = param_4 & 1;
  *param_1 = &PTR_FUN_02811168;
  *(byte *)((long)param_1 + 0x25) = param_5 & 1;
  return;
}




void FUN_00d007a4(long param_1)

{
  FUN_00ce7c70(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x25));
  return;
}




void FUN_00d007b8(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d5a0ac(lVar2,*(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x24),
                 *(undefined1 *)(param_1 + 0x25));
    return;
  }
  return;
}




void FUN_00d00828(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811168;
  *(undefined2 *)((long)puVar1 + 0x24) = *(undefined2 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d008a0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_028111a0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = *param_3;
  return;
}




void FUN_00d008d0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce62a4(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
    return;
  }
  return;
}




void FUN_00d00908(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) && (uVar2 = FUN_00d57d58(lVar1), (uVar2 & 1) != 0)) {
    FUN_00d57d98(lVar1);
    FUN_00d58004(lVar1,param_1 + 0x20);
    return;
  }
  return;
}




void FUN_00d00960(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028111a0;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d009d0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_028111d8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d009f0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce4244(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d00a24(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5c56c(lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d00a60(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028111d8;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d00ad0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811210;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d00af0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00ce7164(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d00b28(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5a834(lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d00b64(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811210;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d00bd4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811248;
  *(byte *)((long)param_1 + 0x24) = param_4 & 1;
  return;
}




void FUN_00d00bfc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce8a64(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_00d00c34(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  uVar2 = FUN_00ceab48();
  if ((lVar1 != 0) && ((uVar2 & 1) == 0)) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_03130aa8) {
        FUN_00d738e0(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x24));
        return;
      }
    }
  }
  return;
}




void FUN_00d00ca8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811248;
  *(undefined1 *)((long)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d00d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  param_7[2] = 0;
  *(undefined1 *)(param_7 + 3) = 0;
  *(undefined4 *)((long)param_7 + 0x1c) = param_8;
  *(undefined4 *)(param_7 + 4) = param_9;
  *(undefined4 *)((long)param_7 + 0x24) = param_1;
  *(undefined4 *)(param_7 + 5) = param_2;
  *(undefined4 *)((long)param_7 + 0x2c) = param_3;
  *(undefined4 *)((long)param_7 + 0x44) = param_4;
  *(undefined4 *)(param_7 + 9) = param_10;
  *(undefined4 *)((long)param_7 + 0x4c) = param_5;
  *(undefined4 *)(param_7 + 10) = param_6;
  *param_7 = &PTR_FUN_02811280;
  param_7[1] = 0;
  *(undefined4 *)(param_7 + 8) = 0xffffffff;
  *(undefined1 *)((long)param_7 + 0x54) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d00d68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  param_4[2] = 0;
  *(undefined1 *)(param_4 + 3) = 0;
  *(undefined4 *)((long)param_4 + 0x1c) = param_5;
  *(undefined4 *)(param_4 + 4) = param_6;
  *param_4 = &PTR_FUN_02811280;
  param_4[1] = 0;
  *(undefined4 *)((long)param_4 + 0x2c) = DAT_03218f54;
  *(undefined8 *)((long)param_4 + 0x24) = DAT_03218f4c;
  uVar1 = _DAT_03218ef8;
  *(undefined4 *)(param_4 + 8) = param_7;
  *(undefined4 *)((long)param_4 + 0x44) = param_1;
  *(undefined4 *)(param_4 + 9) = param_8;
  *(undefined4 *)((long)param_4 + 0x4c) = param_2;
  *(undefined4 *)(param_4 + 10) = param_3;
  param_4[6] = uVar1;
  param_4[7] = uVar1;
  *(undefined1 *)((long)param_4 + 0x54) = 0;
  return;
}




void FUN_00d00dc4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811280;
  param_1[6] = *param_4;
  uVar1 = *param_5;
  *(undefined1 *)((long)param_1 + 0x54) = 1;
  param_1[7] = uVar1;
  return;
}




void FUN_00d00dfc(long param_1)

{
  if (*(char *)(param_1 + 0x54) != '\0') {
    FUN_00ce4f90(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_1 + 0x30,
                 param_1 + 0x38);
    return;
  }
  if (*(int *)(param_1 + 0x40) == -1) {
    FUN_00ce4ca8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c),
                 *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x48));
    return;
  }
  FUN_00ce4e24(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x48));
  return;
}




void FUN_00d00e64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x54) == '\0') {
    if (*(int *)(param_1 + 0x40) == -1) {
      FUN_019889cc(&local_50,1,DAT_02e3ef88,0);
      lVar3 = FUN_01985d44(local_50,DAT_02c7bf58);
      if (lVar3 != 0) {
        FUN_00d7e13c(*(undefined4 *)(param_1 + 0x44),lVar3,*(undefined4 *)(param_1 + 0x1c),uVar2,
                     param_1 + 0x24,*(undefined4 *)(param_1 + 0x48));
      }
    }
    else {
      lVar4 = FUN_00d9e390();
      if (lVar4 == 0) goto LAB_00d00fd4;
      lVar3 = FUN_01985d44(lVar4,DAT_02c7bf58);
      if (lVar3 != 0) {
        FUN_00d7e174(*(undefined4 *)(param_1 + 0x44),lVar3,*(undefined4 *)(param_1 + 0x1c),uVar2,
                     lVar4,*(undefined4 *)(param_1 + 0x48));
      }
    }
  }
  else {
    FUN_019889cc(&local_50,1,DAT_02e3ef88,0);
    lVar3 = FUN_01985d44(local_50,DAT_02c7bf58);
    if (lVar3 != 0) {
      FUN_00d7e1e0(lVar3,*(undefined4 *)(param_1 + 0x1c),uVar2,param_1 + 0x30,param_1 + 0x38);
    }
  }
  if ((((lVar3 != 0) && (*(char *)(param_1 + 0x54) == '\0')) &&
      (fVar5 = *(float *)(param_1 + 0x4c), 0.0 <= fVar5)) && (fVar5 < 6.2831855)) {
    FUN_00d7e1d8(fVar5,*(undefined4 *)(param_1 + 0x50),lVar3);
  }
LAB_00d00fd4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

